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
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	struct<3> Local_505 = { 0, 0, 0 } ;
	struct<3> Local_506 = { 0, 0, 0 } ;
	struct<3> Local_507 = { 0, 0, 0 } ;
	struct<3> Local_508 = { 0, 0, 0 } ;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
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
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	bool bLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	struct<3> Local_687 = { 0, 0, 0 } ;
	float fLocal_688 = 0f;
	float fLocal_689 = 0f;
	float fLocal_690 = 0f;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	float fLocal_700 = 0f;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	int* iLocal_704 = NULL;
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
	int iLocal_874 = 0;
	int iLocal_875 = 0;
	int iLocal_876 = 0;
	int iLocal_877 = 0;
	bool bLocal_878 = 0;
	int iLocal_879 = 0;
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
	int iLocal_1051 = 0;
	int iLocal_1052 = 0;
	int iLocal_1053 = 0;
	int iLocal_1054 = 0;
	int iLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	struct<3> Local_1058 = { 0, 0, 0 } ;
	struct<3> Local_1059 = { 0, 0, 0 } ;
	int iLocal_1060 = 0;
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	float fLocal_1063 = 0f;
	float fLocal_1064 = 0f;
	float fLocal_1065 = 0f;
	float fLocal_1066 = 0f;
	float fLocal_1067 = 0f;
	int iLocal_1068 = 0;
	int iLocal_1069 = 0;
	int iLocal_1070 = 0;
	int iLocal_1071 = 0;
	int iLocal_1072 = 0;
	struct<5> Local_1073 = { 263, 0, 1065353216, 0, 0 } ;
	int iLocal_1074 = 0;
	int iLocal_1075 = 0;
	struct<3> Local_1076 = { 0, 0, 0 } ;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	int iLocal_1080[2] = { 0, 0 };
	struct<3> Local_1081 = { 0, 0, 0 } ;
	struct<3> Local_1082 = { 0, 0, 0 } ;
	int iLocal_1083 = 0;
	int iLocal_1084 = 0;
	struct<67> Local_1085 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<3> Local_1097 = { 0, 0, 0 } ;
	float fLocal_1098 = 0f;
	struct<3> Local_1099 = { 0, 0, 0 } ;
	char* sLocal_1100 = NULL;
	char* sLocal_1101 = NULL;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	bool bLocal_1104 = 0;
	struct<3> Local_1105 = { 0, 0, 0 } ;
	int iLocal_1106 = 0;
	int iLocal_1107 = 0;
	int iLocal_1108 = 0;
	int iLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	int iLocal_1112 = 0;
	int iLocal_1113 = 0;
	int iLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	struct<3> Local_1124 = { 0, 0, 0 } ;
	struct<3> Local_1125 = { 0, 0, 0 } ;
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
	float fLocal_1150 = 0f;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 7;
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
	var uLocal_1166 = 3;
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
	struct<3> Local_1177 = { 0, 0, 0 } ;
	struct<3> Local_1178 = { 0, 0, 0 } ;
	var uLocal_1179 = 0;
	struct<3> Local_1180 = { 0, 0, 0 } ;
	float fLocal_1181 = 0f;
	float fLocal_1182 = 0f;
	float fLocal_1183 = 0f;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 16;
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
	char cLocal_1372[32] = "";
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	char* sLocal_1377 = NULL;
	char* sLocal_1378 = NULL;
	var uLocal_1379 = 263;
	var uLocal_1380 = 0;
	var uLocal_1381 = 1065353216;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	struct<3> Local_1387 = { 0, 0, 0 } ;
	struct<3> Local_1388 = { 0, 0, 0 } ;
	var uLocal_1389 = 263;
	var uLocal_1390 = 0;
	var uLocal_1391 = 1065353216;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	float fLocal_1400 = 0f;
	int iLocal_1401 = 0;
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
	int iLocal_1426 = 0;
	var uLocal_1427 = 0;
	float fLocal_1428 = 0f;
	float fLocal_1429 = 0f;
	float fLocal_1430 = 0f;
	float fLocal_1431 = 0f;
	float fLocal_1432 = 0f;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 263;
	var uLocal_1437 = 0;
	var uLocal_1438 = 1065353216;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	float fLocal_1447 = 0f;
	float fLocal_1448 = 0f;
	float fLocal_1449 = 0f;
	float fLocal_1450 = 0f;
	float fLocal_1451 = 0f;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	struct<3> Local_1456 = { 0, 0, 0 } ;
	struct<3> Local_1457 = { 0, 0, 0 } ;
	struct<3> Local_1458 = { 0, 0, 0 } ;
	float fLocal_1459 = 0f;
	float fLocal_1460 = 0f;
	float fLocal_1461 = 0f;
	var uLocal_1462 = 16;
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
	var uLocal_1627 = 16;
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
	struct<3> Local_1792 = { 0, 0, 0 } ;
	struct<3> Local_1793 = { 0, 0, 0 } ;
	int iLocal_1794 = 0;
	int iLocal_1795 = 0;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	struct<3> Local_1800 = { 0, 0, 0 } ;
	float fLocal_1801 = 0f;
	float fLocal_1802 = 0f;
	float fLocal_1803 = 0f;
	int iLocal_1804 = 0;
	int iLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	int iLocal_1808 = 0;
	int iLocal_1809 = 0;
	int iLocal_1810 = 0;
	int iLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 16;
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
	struct<3> Local_1978 = { 0, 0, 0 } ;
	struct<3> Local_1979 = { 0, 0, 0 } ;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
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
	Local_1076 = { 0.2f, 2.2f, 0f };
	Local_1081 = { 0f, 0f, 0f };
	Local_1082 = { Local_1081 };
	Local_1097 = { 0f, 0f, 0f };
	Local_1099 = { 0f, 0f, 0f };
	sLocal_1101 = "FBIPRAU";
	Local_1105 = { 0f, 0f, 0f };
	iLocal_1112 = -1;
	iLocal_1113 = -1;
	iLocal_1114 = -1;
	Local_1124 = { 1276.88f, -1712.571f, 54.415f };
	Local_1125 = { 0f, 0f, -142.02f };
	fLocal_1150 = -0.64f;
	Local_1177 = { 95.84f, -1291.44f, 28.275f };
	Local_1178 = { 0f, 0f, 30f };
	Local_1180 = { 92.83592f, -1291.2959f, 29.36181f };
	fLocal_1181 = 0.35f;
	fLocal_1182 = 0f;
	fLocal_1183 = 40f;
	StringCopy(&cLocal_1372, "jhp1a_sec_arrive", 32);
	sLocal_1377 = "jhp2a_alt";
	sLocal_1378 = "jhp2a_main";
	Local_1387 = { 441.86075f, -1015.75806f, 27.66605f };
	Local_1388 = { -1511.4557f, -654.47925f, 28.23983f };
	fLocal_1400 = 999999f;
	iLocal_1401 = -1;
	iLocal_1426 = 613961892;
	fLocal_1428 = 30f;
	fLocal_1429 = 0.46f;
	fLocal_1430 = 0f;
	fLocal_1431 = -0.02f;
	fLocal_1432 = 0.1f;
	fLocal_1447 = 25f;
	fLocal_1448 = 0.5f;
	fLocal_1449 = 0f;
	fLocal_1450 = -0.005f;
	fLocal_1451 = 0.1f;
	Local_1456 = { -803.523f, 171.887f, 72.321f };
	Local_1457 = { 0f, 0f, -59.24f };
	Local_1458 = { -803.8107f, 172.2809f, 73.0846f };
	fLocal_1459 = 0.35f;
	fLocal_1460 = -0.02f;
	fLocal_1461 = 30f;
	Local_1792 = { 1972.956f, 3812.079f, 32.84f };
	Local_1793 = { 0f, 0f, 31f };
	Local_1800 = { 1972.9822f, 3814.1045f, 33.9045f };
	fLocal_1801 = 0.35f;
	fLocal_1802 = -0.78f;
	fLocal_1803 = 30f;
	Local_1978 = { -1148.219f, -1522.4f, 10.633f };
	Local_1979 = { 0f, 0f, -53.75f };
	Var0.f_1 = 8;
	Var0.f_115.f_7 = 21;
	Var0.f_115.f_8 = 6;
	Var0.f_110 = 0;
	Var0.f_111 = -1;
	Var0.f_0 = 31862/*func_168*/;
	__LIB_30__.func_346();
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
						__LIB_42__.func_0(&Var0);
						Var0.f_106 = 0;
					}
					else
					{
						__LIB_42__.func_544(&Var0);
					}
				}
			}
		}
		if (!__LIB_0__.func_176(62) || __LIB_0__.func_176(38))
		{
			__LIB_42__.func_544(&Var0);
		}
		__LIB_42__.func_854(&Var0);
		SYSTEM::WAIT(0);
	}
}

void func_168(int iParam0, var uParam1, var uParam2)//Position - 0x7C76
{
	switch (iParam0)
	{
		case 63:
			__LIB_30__.func_345(uParam1, iParam0, 150f, 165f, 50f, 0, 0, 0);
			uParam2->f_1 = 603817/*func_1111*/;
			uParam2->f_2 = 603771/*func_1110*/;
			uParam2->f_3 = 603704/*func_1109*/;
			uParam2->f_4 = 603397/*func_1107*/;
			uParam2->f_5 = 603115/*func_1106*/;
			uParam2->f_6 = 603017/*func_1105*/;
			uParam2->f_7 = 602939/*func_1104*/;
			uParam2->f_10 = 602888/*func_1103*/;
			uParam2->f_11 = 602759/*func_1102*/;
			uParam2->f_12 = 602750/*func_1101*/;
			uParam2->f_8 = 601262/*func_1099*/;
			uParam2->f_9 = 601254/*func_1098*/;
			break;
		case 64:
			__LIB_30__.func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 601246/*func_1097*/;
			uParam2->f_2 = 601182/*func_1096*/;
			uParam2->f_3 = 601115/*func_1095*/;
			uParam2->f_4 = 601050/*func_1094*/;
			uParam2->f_5 = 600940/*func_1093*/;
			uParam2->f_6 = 600895/*func_1092*/;
			uParam2->f_7 = 600858/*func_1091*/;
			uParam2->f_10 = 600839/*func_1090*/;
			uParam2->f_11 = 600701/*func_1089*/;
			uParam2->f_12 = 600692/*func_1088*/;
			uParam2->f_8 = 597951/*func_1081*/;
			uParam2->f_9 = 597943/*func_1080*/;
			break;
		case 12:
			__LIB_30__.func_345(uParam1, iParam0, 100f, 105f, 35f, 0, 0, 0);
			uParam2->f_1 = 597907/*func_1079*/;
			uParam2->f_2 = 597794/*func_1078*/;
			uParam2->f_3 = 597642/*func_1077*/;
			uParam2->f_4 = 597560/*func_1076*/;
			uParam2->f_5 = 596611/*func_1075*/;
			uParam2->f_6 = 596452/*func_1074*/;
			uParam2->f_7 = 596306/*func_1073*/;
			uParam2->f_10 = 596082/*func_1072*/;
			uParam2->f_11 = 595883/*func_1071*/;
			uParam2->f_12 = 595874/*func_1070*/;
			uParam2->f_8 = 594493/*func_1069*/;
			uParam2->f_9 = 594485/*func_1068*/;
			break;
		case 13:
			__LIB_30__.func_345(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 594459/*func_1067*/;
			uParam2->f_2 = 594360/*func_1066*/;
			uParam2->f_3 = 594330/*func_1065*/;
			uParam2->f_4 = 594235/*func_1064*/;
			uParam2->f_5 = 593384/*func_1063*/;
			uParam2->f_6 = 593105/*func_1061*/;
			uParam2->f_7 = 592989/*func_1060*/;
			uParam2->f_10 = 592253/*func_1059*/;
			uParam2->f_11 = 592053/*func_1057*/;
			uParam2->f_12 = 592044/*func_1056*/;
			uParam2->f_8 = 592036/*func_1055*/;
			uParam2->f_9 = 592028/*func_1054*/;
			break;
		case 20:
			__LIB_30__.func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 592020/*func_1053*/;
			uParam2->f_2 = 592012/*func_1052*/;
			uParam2->f_3 = 592004/*func_1051*/;
			uParam2->f_4 = 591995/*func_1050*/;
			uParam2->f_5 = 591987/*func_1049*/;
			uParam2->f_6 = 591979/*func_1048*/;
			uParam2->f_7 = 591971/*func_1047*/;
			uParam2->f_10 = 591828/*func_1046*/;
			uParam2->f_11 = 591819/*func_1045*/;
			uParam2->f_12 = 591810/*func_1044*/;
			uParam2->f_8 = 591802/*func_1043*/;
			uParam2->f_9 = 591794/*func_1042*/;
			break;
		case 21:
			__LIB_30__.func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 591786/*func_1041*/;
			uParam2->f_2 = 591778/*func_1040*/;
			uParam2->f_3 = 591770/*func_1039*/;
			uParam2->f_4 = 591761/*func_1038*/;
			uParam2->f_5 = 591753/*func_1037*/;
			uParam2->f_6 = 591741/*func_1036*/;
			uParam2->f_7 = 591729/*func_1035*/;
			uParam2->f_10 = 591657/*func_1034*/;
			uParam2->f_11 = 591648/*func_1033*/;
			uParam2->f_12 = 591639/*func_1032*/;
			uParam2->f_8 = 591631/*func_1031*/;
			uParam2->f_9 = 591623/*func_1030*/;
			break;
		case 29:
			__LIB_30__.func_345(uParam1, iParam0, 85f, 95f, 50f, 0, 0, 0);
			uParam2->f_1 = 591599/*func_1029*/;
			uParam2->f_2 = 591530/*func_1028*/;
			uParam2->f_3 = 591501/*func_1027*/;
			uParam2->f_4 = 591475/*func_1026*/;
			uParam2->f_5 = 591064/*func_1025*/;
			uParam2->f_6 = 590979/*func_1024*/;
			uParam2->f_7 = 590894/*func_1023*/;
			uParam2->f_10 = 590667/*func_1022*/;
			uParam2->f_11 = 590444/*func_1021*/;
			uParam2->f_12 = 590435/*func_1020*/;
			uParam2->f_8 = 589508/*func_1018*/;
			uParam2->f_9 = 589500/*func_1017*/;
			break;
		case 30:
			__LIB_30__.func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 589492/*func_1016*/;
			uParam2->f_2 = 589484/*func_1015*/;
			uParam2->f_3 = 589476/*func_1014*/;
			uParam2->f_4 = 589467/*func_1013*/;
			uParam2->f_5 = 589352/*func_1011*/;
			uParam2->f_6 = 589327/*func_1010*/;
			uParam2->f_7 = 589285/*func_1009*/;
			uParam2->f_10 = 589196/*func_1008*/;
			uParam2->f_11 = 589187/*func_1007*/;
			uParam2->f_12 = 589178/*func_1006*/;
			uParam2->f_8 = 589170/*func_1005*/;
			uParam2->f_9 = 589162/*func_1004*/;
			break;
		case 32:
			__LIB_30__.func_345(uParam1, iParam0, 220f, 230f, 50f, 0, 0, 0);
			uParam2->f_1 = 589142/*func_1003*/;
			uParam2->f_2 = 589026/*func_1002*/;
			uParam2->f_3 = 588997/*func_1001*/;
			uParam2->f_4 = 588971/*func_1000*/;
			uParam2->f_5 = 587143/*func_991*/;
			uParam2->f_6 = 587054/*func_990*/;
			uParam2->f_7 = 586965/*func_989*/;
			uParam2->f_10 = 586705/*func_988*/;
			uParam2->f_11 = 586213/*func_983*/;
			uParam2->f_12 = 586204/*func_982*/;
			uParam2->f_8 = 584669/*func_974*/;
			uParam2->f_9 = 584661/*func_973*/;
			break;
		case 33:
			__LIB_30__.func_345(uParam1, iParam0, 250f, 270f, 50f, 7, 500f, 1);
			uParam2->f_1 = 584649/*func_972*/;
			uParam2->f_2 = 584611/*func_971*/;
			uParam2->f_3 = 584592/*func_970*/;
			uParam2->f_4 = 584552/*func_969*/;
			uParam2->f_5 = 584244/*func_967*/;
			uParam2->f_6 = 583872/*func_965*/;
			uParam2->f_7 = 583788/*func_964*/;
			uParam2->f_10 = 583533/*func_962*/;
			uParam2->f_11 = 583468/*func_961*/;
			uParam2->f_12 = 583459/*func_960*/;
			uParam2->f_8 = 582942/*func_956*/;
			uParam2->f_9 = 582376/*func_950*/;
			break;
		case 34:
			__LIB_30__.func_345(uParam1, iParam0, 175f, 185f, 50f, 7, 500f, 1);
			uParam2->f_1 = 582364/*func_949*/;
			uParam2->f_2 = 582266/*func_948*/;
			uParam2->f_3 = 582247/*func_947*/;
			uParam2->f_4 = 582221/*func_946*/;
			uParam2->f_5 = 581651/*func_945*/;
			uParam2->f_6 = 581571/*func_944*/;
			uParam2->f_7 = 581491/*func_943*/;
			uParam2->f_10 = 581097/*func_939*/;
			uParam2->f_11 = 581054/*func_938*/;
			uParam2->f_12 = 581045/*func_937*/;
			uParam2->f_8 = 580174/*func_929*/;
			uParam2->f_9 = 580166/*func_928*/;
			break;
		case 35:
			__LIB_30__.func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 1);
			uParam2->f_1 = 579970/*func_926*/;
			uParam2->f_2 = 579936/*func_925*/;
			uParam2->f_3 = 579919/*func_924*/;
			uParam2->f_4 = 579873/*func_923*/;
			uParam2->f_5 = 576975/*func_905*/;
			uParam2->f_6 = 576767/*func_904*/;
			uParam2->f_7 = 576513/*func_903*/;
			uParam2->f_10 = 576405/*func_902*/;
			uParam2->f_11 = 576396/*func_901*/;
			uParam2->f_12 = 576387/*func_900*/;
			uParam2->f_8 = 576375/*func_899*/;
			uParam2->f_9 = 570029/*func_854*/;
			break;
		case 36:
			__LIB_30__.func_345(uParam1, iParam0, 130f, 140f, 50f, 7, 200f, 1);
			uParam2->f_1 = 570015/*func_853*/;
			uParam2->f_2 = 570007/*func_852*/;
			uParam2->f_3 = 569999/*func_851*/;
			uParam2->f_4 = 569990/*func_850*/;
			uParam2->f_5 = 569886/*func_849*/;
			uParam2->f_6 = 569867/*func_848*/;
			uParam2->f_7 = 569848/*func_847*/;
			uParam2->f_10 = 569705/*func_845*/;
			uParam2->f_11 = 569670/*func_844*/;
			uParam2->f_12 = 569661/*func_843*/;
			uParam2->f_8 = 569653/*func_842*/;
			uParam2->f_9 = 569645/*func_841*/;
			break;
		case 37:
			__LIB_30__.func_345(uParam1, iParam0, 100f, 110f, 50f, 7, 500f, 1);
			uParam2->f_1 = 569605/*func_839*/;
			uParam2->f_2 = 569597/*func_838*/;
			uParam2->f_3 = 569589/*func_837*/;
			uParam2->f_4 = 569580/*func_836*/;
			uParam2->f_5 = 569520/*func_835*/;
			uParam2->f_6 = 569512/*func_834*/;
			uParam2->f_7 = 569504/*func_833*/;
			uParam2->f_10 = 569297/*func_829*/;
			uParam2->f_11 = 568242/*func_824*/;
			uParam2->f_12 = 568233/*func_823*/;
			uParam2->f_8 = 568225/*func_822*/;
			uParam2->f_9 = 568217/*func_821*/;
			break;
		case 38:
			__LIB_30__.func_345(uParam1, iParam0, 250f, 260f, 50f, 0, 0, 0);
			uParam2->f_1 = 568209/*func_820*/;
			uParam2->f_2 = 568080/*func_819*/;
			uParam2->f_3 = 568051/*func_818*/;
			uParam2->f_4 = 568025/*func_817*/;
			uParam2->f_5 = 545030/*func_760*/;
			uParam2->f_6 = 544922/*func_759*/;
			uParam2->f_7 = 544814/*func_758*/;
			uParam2->f_10 = 543934/*func_757*/;
			uParam2->f_11 = 543569/*func_756*/;
			uParam2->f_12 = 543159/*func_753*/;
			uParam2->f_8 = 543151/*func_752*/;
			uParam2->f_9 = 543143/*func_751*/;
			break;
		case 41:
			__LIB_30__.func_345(uParam1, iParam0, 215f, 225f, 50f, 6, 0, 0);
			uParam2->f_1 = 543135/*func_750*/;
			uParam2->f_2 = 542898/*func_749*/;
			uParam2->f_3 = 542864/*func_748*/;
			uParam2->f_4 = 541726/*func_740*/;
			uParam2->f_5 = 534436/*func_722*/;
			uParam2->f_6 = 534334/*func_721*/;
			uParam2->f_7 = 534232/*func_720*/;
			uParam2->f_10 = 533925/*func_719*/;
			uParam2->f_11 = 533774/*func_718*/;
			uParam2->f_12 = 533765/*func_717*/;
			uParam2->f_8 = 531676/*func_712*/;
			uParam2->f_9 = 531668/*func_711*/;
			break;
		case 43:
			__LIB_30__.func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 531660/*func_710*/;
			uParam2->f_2 = 531634/*func_709*/;
			uParam2->f_3 = 531608/*func_708*/;
			uParam2->f_4 = 531599/*func_707*/;
			uParam2->f_5 = 531591/*func_706*/;
			uParam2->f_6 = 531583/*func_705*/;
			uParam2->f_7 = 531575/*func_704*/;
			uParam2->f_10 = 531502/*func_703*/;
			uParam2->f_11 = 531493/*func_702*/;
			uParam2->f_12 = 531484/*func_701*/;
			uParam2->f_8 = 531427/*func_700*/;
			uParam2->f_9 = 531419/*func_699*/;
			break;
		case 71:
			__LIB_30__.func_345(uParam1, iParam0, 25f, 35f, 50f, 0, 0, 0);
			uParam2->f_1 = 531407/*func_698*/;
			uParam2->f_2 = 530987/*func_692*/;
			uParam2->f_3 = 530592/*func_686*/;
			uParam2->f_4 = 530224/*func_682*/;
			uParam2->f_5 = 529363/*func_681*/;
			uParam2->f_6 = 529230/*func_680*/;
			uParam2->f_7 = 511762/*func_673*/;
			uParam2->f_10 = 511702/*func_672*/;
			uParam2->f_11 = 511565/*func_671*/;
			uParam2->f_12 = 511556/*func_670*/;
			uParam2->f_8 = 488926/*func_649*/;
			uParam2->f_9 = 488918/*func_648*/;
			break;
		case 72:
			__LIB_30__.func_345(uParam1, iParam0, 465f, 480f, 50f, 0, 0f, 0);
			uParam2->f_1 = 488910/*func_647*/;
			uParam2->f_2 = 488816/*func_646*/;
			uParam2->f_3 = 488741/*func_645*/;
			uParam2->f_4 = 488599/*func_644*/;
			uParam2->f_5 = 488111/*func_643*/;
			uParam2->f_6 = 487745/*func_641*/;
			uParam2->f_7 = 487510/*func_640*/;
			uParam2->f_10 = 487208/*func_639*/;
			uParam2->f_11 = 487153/*func_638*/;
			uParam2->f_12 = 487144/*func_637*/;
			uParam2->f_8 = 486095/*func_636*/;
			uParam2->f_9 = 486087/*func_635*/;
			break;
		case 73:
			__LIB_30__.func_345(uParam1, iParam0, 670f, 700f, 50f, 0, 0f, 0);
			uParam2->f_1 = 486071/*func_634*/;
			uParam2->f_2 = 486036/*func_633*/;
			uParam2->f_3 = 486001/*func_632*/;
			uParam2->f_4 = 485948/*func_631*/;
			uParam2->f_5 = 485007/*func_630*/;
			uParam2->f_6 = 484839/*func_629*/;
			uParam2->f_7 = 484749/*func_628*/;
			uParam2->f_10 = 480778/*func_625*/;
			uParam2->f_11 = 480769/*func_624*/;
			uParam2->f_12 = 480760/*func_623*/;
			uParam2->f_8 = 480582/*func_621*/;
			uParam2->f_9 = 480574/*func_620*/;
			break;
		case 74:
			__LIB_30__.func_345(uParam1, iParam0, 50f, 65f, 50f, 7, 0, 0);
			uParam2->f_1 = 480558/*func_619*/;
			uParam2->f_2 = 480471/*func_618*/;
			uParam2->f_3 = 480373/*func_617*/;
			uParam2->f_4 = 480248/*func_616*/;
			uParam2->f_5 = 478143/*func_612*/;
			uParam2->f_6 = 477943/*func_611*/;
			uParam2->f_7 = 477878/*func_610*/;
			uParam2->f_10 = 477816/*func_608*/;
			uParam2->f_11 = 477678/*func_607*/;
			uParam2->f_12 = 477669/*func_606*/;
			uParam2->f_8 = 475176/*func_594*/;
			uParam2->f_9 = 475168/*func_593*/;
			break;
		case 75:
			__LIB_30__.func_345(uParam1, iParam0, 12f, 18f, 50f, 0, 0, 0);
			uParam2->f_1 = 475156/*func_592*/;
			uParam2->f_2 = 475081/*func_591*/;
			uParam2->f_3 = 475009/*func_590*/;
			uParam2->f_4 = 474899/*func_589*/;
			uParam2->f_5 = 41487/*func_241*/;
			uParam2->f_6 = 41200/*func_239*/;
			uParam2->f_7 = 41050/*func_235*/;
			uParam2->f_10 = 40990/*func_234*/;
			uParam2->f_11 = 40896/*func_233*/;
			uParam2->f_12 = 40887/*func_232*/;
			uParam2->f_8 = 37507/*func_216*/;
			uParam2->f_9 = 37499/*func_215*/;
			break;
		case 3:
			__LIB_30__.func_345(uParam1, iParam0, 200f, 210f, 50f, 0, 0, 0);
			uParam2->f_1 = 37491/*func_214*/;
			uParam2->f_2 = 37475/*func_213*/;
			uParam2->f_3 = 37459/*func_212*/;
			uParam2->f_4 = 37435/*func_211*/;
			uParam2->f_5 = 37195/*func_208*/;
			uParam2->f_6 = 37172/*func_207*/;
			uParam2->f_7 = 37126/*func_205*/;
			uParam2->f_10 = 36398/*func_202*/;
			uParam2->f_11 = 36389/*func_201*/;
			uParam2->f_12 = 36380/*func_200*/;
			uParam2->f_8 = 36372/*func_199*/;
			uParam2->f_9 = 36364/*func_198*/;
			break;
		case 4:
			__LIB_30__.func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 36356/*func_197*/;
			uParam2->f_2 = 36337/*func_196*/;
			uParam2->f_3 = 36325/*func_195*/;
			uParam2->f_4 = 36307/*func_194*/;
			uParam2->f_5 = 36250/*func_193*/;
			uParam2->f_6 = 36231/*func_192*/;
			uParam2->f_7 = 36212/*func_191*/;
			uParam2->f_10 = 36096/*func_190*/;
			uParam2->f_11 = 36087/*func_189*/;
			uParam2->f_12 = 36078/*func_188*/;
			uParam2->f_8 = 35931/*func_186*/;
			uParam2->f_9 = 35923/*func_185*/;
			break;
		case 54:
		case 55:
		case 58:
			__LIB_30__.func_345(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 35915/*func_184*/;
			uParam2->f_2 = 35898/*func_183*/;
			uParam2->f_3 = 35881/*func_182*/;
			uParam2->f_4 = 35856/*func_181*/;
			uParam2->f_5 = 35751/*func_180*/;
			uParam2->f_6 = 35732/*func_179*/;
			uParam2->f_7 = 35608/*func_177*/;
			uParam2->f_10 = 35238/*func_173*/;
			uParam2->f_11 = 35229/*func_172*/;
			uParam2->f_12 = 35207/*func_171*/;
			uParam2->f_8 = 35199/*func_170*/;
			uParam2->f_9 = 35191/*func_169*/;
			break;
		default:
			return;
			break;
	}
	*uParam2 = 1;
}

int func_190()//Position - 0x8D00
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(165, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[4 /*34*/].f_11, __LIB_26__.func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (6f * 6f))
			{
				STREAMING::SET_HD_AREA(-717.8348f, -932.1736f, 18.01735f, 26f);
				__LIB_2__.func_29(&iLocal_437);
				iLocal_437 = -1;
				return 1;
			}
		}
	}
	return 0;
}

int func_202()//Position - 0x8E2E
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(164, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[3 /*34*/].f_11, __LIB_26__.func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (4.75f * 4.75f))
			{
				__LIB_34__.func_977();
				return 1;
			}
		}
	}
	return 0;
}

void func_216()//Position - 0x9283
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.2899f, -1524.2549f, 9.363565f, -1151.2401f, -1520.0516f, 12.882723f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1147.6808f, -1522.99f, 6.38306f, -1144.0431f, -1520.5184f, 9.938194f, 1.5f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (__LIB_26__.func_499() == 0 || __LIB_26__.func_499() == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1160.3243f, -1522.2645f, 8.382723f, -1152.1456f, -1517.0046f, 12.882723f, 5f, false, true, 0))
		{
			CAM::SET_GAMEPLAY_COORD_HINT(Local_882, -1, 2000, 2000, 0);
			CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_883);
			CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_884);
			CAM::SET_GAMEPLAY_HINT_FOV(fLocal_885);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.3502f, -1521.4257f, 9.132723f, -1151.5793f, -1519.6807f, 12.632723f, 2.25f, false, true, 0))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.052f, -1523.333f, 12.421901f, -1142.9072f, -1518.3658f, 6.557154f, 3.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1160.7805f, -1522.4664f, 8.705703f, -1150.4332f, -1515.1722f, 12.632723f, 10f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	switch (iLocal_877)
	{
		case 0:
			bLocal_878 = false;
			iLocal_879 = 0;
			if (__LIB_26__.func_499() == 2)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1152.4182f, -1516.7664f, 9.132729f, -1155.04f, -1518.5883f, 11.882729f, 1.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.4937f, -1518.1924f, 9.512158f, -1151.6458f, -1515.0856f, 11.882729f, 1.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.9059f, -1520.1755f, 9.391918f, -1151.5936f, -1521.3616f, 12.45251f, 1.5f, false, true, 0))
				{
					__LIB_0__.func_203(&uLocal_886, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					__LIB_34__.func_977();
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					iLocal_877++;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.2867f, -1520.6277f, 9.632729f, -1157.1758f, -1516.4142f, 12.132729f, 13f, false, true, 0))
			{
				__LIB_34__.func_977();
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				if (__LIB_26__.func_499() == 0)
				{
					__LIB_0__.func_203(&uLocal_886, 0, Global_96938.f_9[2], "TREVOR", 0, 1);
					__LIB_0__.func_203(&uLocal_886, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					__LIB_34__.func_977();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1156.76f, -1519.92f, 9.63f, 1f, 20000, 0.25f, 0, 40000f);
					iLocal_877++;
				}
				else if (__LIB_26__.func_499() == 1)
				{
					__LIB_0__.func_203(&uLocal_886, 0, Global_96938.f_9[2], "TREVOR", 0, 1);
					__LIB_0__.func_203(&uLocal_886, 1, Global_96938.f_9[3], "MICHAEL", 0, 1);
					__LIB_0__.func_203(&uLocal_886, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1156.76f, -1519.92f, 9.63f, 1f, 20000, 0.25f, 0, 40000f);
					iLocal_877++;
				}
			}
			break;
		case 1:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (bLocal_878 == 0)
			{
				if (__LIB_26__.func_499() == 2)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_2B_HEIST_TOILET_FLUSH", false, -1))
					{
						if (__LIB_36__.func_92(&uLocal_886, "D2BAUD", "DS2B_INT_LI1", 7, 0, 0, 0))
						{
							bLocal_878 = true;
						}
					}
				}
				if (__LIB_26__.func_499() == 0)
				{
					if (__LIB_36__.func_92(&uLocal_886, "D2BAUD", "DS2B_INT_LI2", 7, 0, 0, 0))
					{
						bLocal_878 = true;
					}
				}
				if (__LIB_26__.func_499() == 1)
				{
					if (__LIB_36__.func_92(&uLocal_886, "D2BAUD", "DS2B_INT_LI3", 7, 0, 0, 0))
					{
						bLocal_878 = true;
					}
				}
			}
			if (__LIB_26__.func_499() == 1)
			{
				if (iLocal_879 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_875))
					{
						iLocal_874 = PED::CREATE_SYNCHRONIZED_SCENE(Local_880, Local_881, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
						{
							if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_874, "missheistdocks2bleadinoutlsdh_2b_int", "action_floyd", 8f, -8f, 5, 16, 1000f, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
						{
							if (!PED::IS_PED_INJURED(Global_96938.f_9[2]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_874, "missheistdocks2bleadinoutlsdh_2b_int", "action_trevor", 8f, -8f, 5, 16, 1000f, 0);
							}
						}
						iLocal_879 = 1;
					}
				}
			}
			if (bLocal_878)
			{
				if (!__LIB_0__.func_75())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[3]))
						{
							ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[3], true, false);
						}
					}
					if (__LIB_26__.func_499() == 2)
					{
						AUDIO::PLAY_SOUND_FROM_COORD(-1, "Flush", -1148.9026f, -1519.257f, 9.6327f, "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0, false);
					}
					iLocal_877++;
				}
			}
			break;
		case 2:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			break;
	}
}

int func_233()//Position - 0x9FC0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
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
	return 0;
}

int func_234()//Position - 0xA01E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_877 == 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_235()//Position - 0xA05A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	func_236(0);
	__LIB_30__.func_330();
}

void func_236(bool bParam0)//Position - 0xA0A3
{
	if (bParam0)
	{
		__LIB_6__.func_896(&(Global_112096.f_35), 262144);
	}
	else
	{
		__LIB_7__.func_204(&(Global_112096.f_35), 262144);
	}
}

void func_239()//Position - 0xA0F0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	func_236(0);
	__LIB_30__.func_330();
}

void func_241()//Position - 0xA20F
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	if (__LIB_26__.func_499() != 2)
	{
		func_587(&(Global_96938.f_9[0]), 24, -1149.4646f, -1519.3779f, 10.6327f, 0, 1);
		__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(24));
		ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_9[0], 40);
		func_587(&(Global_96938.f_9[1]), 32, -1148.4424f, -1518.7101f, 9.6327f, 0, 1);
		__LIB_11__.func_318(Global_96938.f_9[1], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(32));
		ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_9[1], 40);
	}
	__LIB_11__.func_717(0, 3, 1);
	__LIB_11__.func_717(1, 3, 1);
	__LIB_39__.func_906(53, 0);
	if (__LIB_26__.func_499() == 2)
	{
		func_242(&(Global_96938.f_9[3]), 0, -1159.972f, -1524.6874f, 6.7144f, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[3], Global_96938.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[3], false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_2B_HEIST_TOILET_FLUSH", false, -1);
	}
	else if (__LIB_26__.func_499() == 0)
	{
		func_242(&(Global_96938.f_9[2]), 2, Local_880, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[2], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
		ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_9[2], 40);
		if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tumbler_01_empty"), Local_880, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
		iLocal_875 = PED::CREATE_SYNCHRONIZED_SCENE(Local_880, Local_881, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_875, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_96938.f_9[1], Global_96938.f_9[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_875, "missheistdocks2bleadinoutlsdh_2b_int", "standing_loop_peda", 1000f, -8f, 5, 16, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_875, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_floyd", 1000f, -8f, 69, 16, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_875, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_trevor", 1000f, -8f, 69, 16, 1000f, 0);
	}
	else if (__LIB_26__.func_499() == 1)
	{
		func_242(&(Global_96938.f_9[2]), 2, Local_880, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[2], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
		ENTITY::SET_ENTITY_LOD_DIST(Global_96938.f_9[2], 40);
		func_242(&(Global_96938.f_9[3]), 0, Local_880, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[3], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
		ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[3], false, false);
		if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_tumbler_01_empty"), Local_880, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		}
		iLocal_875 = PED::CREATE_SYNCHRONIZED_SCENE(Local_880, Local_881, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_875, true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Global_96938.f_9[1], Global_96938.f_9[2], false);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_875, "missheistdocks2bleadinoutlsdh_2b_int", "standing_loop_peda", 1000f, -1000f, 5, 16, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_875, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_b_floyd", 1000f, -1000f, 69, 16, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_875, "missheistdocks2bleadinoutlsdh_2b_int", "leg_massage_b_trevor", 1000f, -1000f, 69, 16, 1000f, 0);
		iLocal_876 = PED::CREATE_SYNCHRONIZED_SCENE(Local_880, Local_881, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_876, true);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iLocal_876, "missheistdocks2bleadinoutlsdh_2b_int", "standing_loop_michael", 1000f, -8f, 5, 16, 1000f, 0);
	}
	STREAMING::SET_SRL_FORCE_PRESTREAM(3);
	__LIB_34__.func_978(75, "LSDH_2B_INT", 124, 112, 0);
	func_236(1);
}

int func_242(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA69B
{
	int iVar0;
	if (__LIB_0__.func_317(bParam1))
	{
		iVar0 = __LIB_12__.func_95(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__.func_535(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_565(*iParam0);
			__LIB_36__.func_54(*iParam0, 1, 0);
			__LIB_26__.func_525(*iParam0);
			__LIB_26__.func_430(*iParam0);
			func_244(*iParam0, bParam6);
			__LIB_0__.func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_244(int iParam0, bool bParam1)//Position - 0xA7B3
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_20__.func_763(iParam0);
	if (__LIB_0__.func_377(bVar0))
	{
		__LIB_0__.func_376(bVar0, 0);
		func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_334(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__.func_843(iParam0))
		{
			__LIB_0__.func_376(bVar0, 0);
			func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_334(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_314(iParam0, 3, 169))
					{
						func_528(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_314(iParam0, 12, 6))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 20))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 21))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 22))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 11))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 12, 10))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 12, 50))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 14, 59))
			{
				func_528(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_314(iParam0, 8, 22))
			{
				func_528(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_314(iParam0, 12, 14))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_314(iParam0, 12, 13))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 14))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 15))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 4))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 12, 3))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 14, 82))
			{
				func_528(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_314(iParam0, 8, 76))
			{
				func_528(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_314(iParam0, 12, 1))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_314(iParam0, 12, 12))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 12, 15))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_314(iParam0, 3, 71))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 17))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 18))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 19))
			{
				if (!__LIB_38__.func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_314(iParam0, 12, 7))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 12, 6))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_314(iParam0, 14, 88))
			{
				func_528(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_314(iParam0, 8, 17))
			{
				func_528(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_314(iParam0, 12, 11))
			{
				func_528(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_314(int iParam0, int iParam1, int iParam2)//Position - 0x21BCD
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_314(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_314(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_314(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_314(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_334(int iParam0, int iParam1)//Position - 0x26209
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__.func_763(iParam0);
		if (__LIB_0__.func_317(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_527(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__.func_358(bVar0);
					func_345(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_32__.func_782(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_36__.func_59();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
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

void func_345(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x271E7
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
		bVar0 = __LIB_20__.func_763(iParam0);
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
		if (__LIB_0__.func_317(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_525(iParam0, iVar1, &iVar2, 0))
			{
				func_528(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_523(iParam0, iVar1, &iVar2))
			{
				func_528(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_521(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_351(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_351(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_351(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
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

int func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x27983
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_479(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_479(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_479(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_351(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_479(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_476(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_351(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_470(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_479(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_479(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_351(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_461(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_351(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
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
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_460(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_351(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_351(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_351(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_351(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_351(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_351(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_351(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_470(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_460(iVar5, func_476(iParam0, 8, -1), iParam2, func_476(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_394(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_460(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_470(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_460(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
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
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_351(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_351(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_460(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_460(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_460(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_351(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_371(iParam0, 9, iVar63))
						{
							func_351(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_351(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_351(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_351(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_476(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_476(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_351(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_351(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_351(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_351(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_351(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_351(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_351(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_351(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_351(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_351(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_461(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_351(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_351(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_352(iParam0, &uVar4))
		{
			func_351(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_351(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_351(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_351(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_476(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_351(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_352(int iParam0, var uParam1)//Position - 0x2982E
{
	int iVar0;
	int iVar1;
	*uParam1 = func_476(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_371(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0, int iParam1, int iParam2)//Position - 0x2DAEB
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
				if (!func_371(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_371(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_371(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_371(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_371(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_371(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_394(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x34802
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_395(iParam0, bParam3, 0, -1);
}

void func_395(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3484F
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
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_440(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_431(iParam0, iParam3);
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
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
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
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_431(int iParam0, int iParam1)//Position - 0x43981
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_476(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
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
				iVar5 = func_476(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_440(int iParam0, bool bParam1)//Position - 0x43DDF
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
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_476(iParam0, 11, -1), 0);
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
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_476(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_476(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_476(iParam0, 11, -1), 0);
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
						iVar8 = func_476(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_476(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_476(iParam0, 11, -1), 0);
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
						iVar12 = func_476(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_460(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4CC6F
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_460(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_460(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
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

void func_461(int iParam0)//Position - 0x4DFAA
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
		if (!func_466(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__.func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__.func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__.func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__.func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__.func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_466(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_466(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4E974
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_476(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_470(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5135E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_521(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_476(int iParam0, int iParam1, int iParam2)//Position - 0x5160D
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
				if (func_371(iParam0, iParam1, iVar0))
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
				if (func_371(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_479(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5178C
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
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_479(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_479(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_479(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_479(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_479(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_479(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_479(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_479(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_479(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_479(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_521(int iParam0)//Position - 0x6A5A7
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_476(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_476(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_523(int iParam0, int iParam1, int iParam2)//Position - 0x6A901
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_314(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_525(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6A9C8
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_314(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_527(int iParam0, int iParam1, int iParam2)//Position - 0x6AC88
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
				if (func_314(iParam0, iParam1, iVar0))
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
				if (func_314(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6AD29
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_528(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_528(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_527(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_525(iParam0, iVar10, &iVar4, 1))
							{
								func_528(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_528(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_528(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_528(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_528(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_528(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_528(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_528(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_528(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_528(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_525(iParam0, iVar10, &iVar4, 0))
		{
			func_528(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_523(iParam0, iVar10, &iVar4))
		{
			func_528(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_565(int iParam0)//Position - 0x6F40D
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_20__.func_763(iParam0);
	if (__LIB_0__.func_317(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__.func_358(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_345(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_527(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_566(__LIB_12__.func_95(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_527(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_527(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_566(__LIB_12__.func_95(0), 3, 70, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 3, 71, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 3, 72, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 3, 73, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 3, 74, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 3, 75, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 4, 41, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 4, 42, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 4, 43, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 4, 44, 1, 0, 0, 0);
					func_566(__LIB_12__.func_95(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_527(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__.func_358(bVar0);
				func_345(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_566(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6F66A
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_569(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_569(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6F825
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_569(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_569(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_569(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_569(iParam0, 14, iVar5, 1, 0);
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
								func_569(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_569(iParam0, 14, 17, 1, 0);
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

int func_587(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0x73E3F
{
	int iVar0;
	if (!__LIB_0__.func_317(bParam1))
	{
		iVar0 = __LIB_11__.func_149(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("IG_LamarDavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			__LIB_2__.func_328(*iParam0, bParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_589()//Position - 0x73F13
{
	if ((((((STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_149(24)) && STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_149(32))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_Zero"))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_One"))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_Two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2bleadinoutlsdh_2b_int")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_tumbler_01_empty")))
	{
		return 1;
	}
	return 0;
}

void func_590()//Position - 0x73F81
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(24));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(32));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_One"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_tumbler_01_empty"));
	STREAMING::REMOVE_ANIM_DICT("missheistdocks2bleadinoutlsdh_2b_int");
}

void func_591()//Position - 0x73FC9
{
	STREAMING::REQUEST_MODEL(__LIB_11__.func_149(24));
	STREAMING::REQUEST_MODEL(__LIB_11__.func_149(32));
	STREAMING::REQUEST_MODEL(joaat("Player_Zero"));
	STREAMING::REQUEST_MODEL(joaat("Player_One"));
	STREAMING::REQUEST_MODEL(joaat("Player_Two"));
	STREAMING::REQUEST_MODEL(joaat("prop_tumbler_01_empty"));
	STREAMING::REQUEST_ANIM_DICT("missheistdocks2bleadinoutlsdh_2b_int");
}

void func_592()//Position - 0x74014
{
	iLocal_877 = 0;
}

void func_594()//Position - 0x74028
{
	int iVar0;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.4034f, -1524.3136f, 9.53306f, -1153.9221f, -1516.7336f, 11.632723f, 4f, false, true, 0))
	{
		__LIB_11__.func_315(1, 0);
	}
	switch (iLocal_701)
	{
		case 0:
			if (__LIB_26__.func_499() == 2)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.0444f, -1517.9069f, 9.432728f, -1150.3915f, -1515.2006f, 11.632728f, 9f, false, true, 0))
				{
					__LIB_34__.func_977();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					__LIB_0__.func_203(&uLocal_709, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					iLocal_701++;
				}
			}
			else if (__LIB_26__.func_499() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.0444f, -1517.9069f, 9.432728f, -1150.3915f, -1515.2006f, 11.632728f, 5f, false, true, 0))
				{
					__LIB_34__.func_977();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					__LIB_0__.func_203(&uLocal_709, 0, Global_96938.f_9[2], "TREVOR", 0, 1);
					__LIB_0__.func_203(&uLocal_709, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					iLocal_701++;
				}
			}
			else if (__LIB_26__.func_499() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.8132f, -1520.6017f, 9.432723f, -1153.7604f, -1516.6771f, 11.632723f, 4f, false, true, 0))
				{
					__LIB_34__.func_977();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					__LIB_0__.func_203(&uLocal_709, 0, Global_96938.f_9[2], "TREVOR", 0, 1);
					__LIB_0__.func_203(&uLocal_709, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					iLocal_701++;
				}
			}
			break;
		case 1:
			if (!__LIB_0__.func_77(0))
			{
				if (__LIB_26__.func_499() == 2)
				{
					if (__LIB_36__.func_92(&uLocal_709, "D2AAUD", "DH2A_INT_LI1", 7, 0, 0, 0))
					{
						iLocal_701++;
					}
				}
				else if (__LIB_26__.func_499() == 0)
				{
					if (__LIB_36__.func_85(&uLocal_709, "D2AAUD", "DH2A_INT_LI2", "DH2A_INT_LI2_3", 7, 0, 0))
					{
						iLocal_701++;
					}
				}
				else if (__LIB_26__.func_499() == 1)
				{
					if (!iLocal_702)
					{
						if (__LIB_36__.func_85(&uLocal_709, "D2AAUD", "DH2A_INT_LI3", "DH2A_INT_LI3_3", 7, 0, 0))
						{
							iLocal_703 = MISC::GET_GAME_TIMER() + 5000;
							iLocal_702 = 1;
						}
					}
					else if (!__LIB_0__.func_75())
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.0444f, -1517.9069f, 9.432728f, -1150.3915f, -1515.2006f, 11.632728f, 5f, false, true, 0) || MISC::GET_GAME_TIMER() > iLocal_703)
						{
							if (__LIB_36__.func_85(&uLocal_709, "D2AAUD", "DH2A_INT_LI3", "DH2A_INT_LI3_5", 7, 0, 0))
							{
								iLocal_701++;
							}
						}
					}
				}
			}
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1153.1094f, -1517.9308f, 9.6327f, 1f, -1, 0.25f, 1, 40000f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1156.7263f, -1520.1699f, 9.6327f, 1f, -1, 0.25f, 0, 40000f);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			__LIB_26__.func_973(&iLocal_704);
			if (__LIB_26__.func_499() == 2)
			{
				fLocal_700 = 3.65f;
			}
			else if (__LIB_26__.func_499() == 1)
			{
				fLocal_700 = 2.3f;
			}
			else if (__LIB_26__.func_499() == 0)
			{
				fLocal_700 = 1.2f;
			}
			iLocal_701++;
			break;
		case 3:
			__LIB_11__.func_315(1, 0);
			__LIB_30__.func_332();
			if (__LIB_26__.func_499() == 2)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_693) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_694))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.9056f, -1517.4558f, 9.632723f, -1149.4021f, -1518.129f, 11.632723f, 2f, false, true, 0))
					{
						iLocal_694 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707, Local_708, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
						{
							if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_694, "missheistdocks2aleadinoutlsdh_2a_int", "action_wade", 8f, -8f, 0, 0, 1000f, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
						{
							if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_694, "missheistdocks2aleadinoutlsdh_2a_int", "action_floyd", 8f, -8f, 0, 0, 1000f, 0);
							}
						}
					}
				}
			}
			if (!BitTest(iLocal_699, 0))
			{
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1154.9056f, -1517.4558f, 9.632723f, -1149.4021f, -1518.129f, 11.632723f, 2f, false, true, 0))
					{
						CAM::SET_GAMEPLAY_COORD_HINT(-1159.8833f, -1522.0243f, 10.5408f, 2000, 2500, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
						CAM::SET_GAMEPLAY_HINT_FOV(40f);
						CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.2f);
						MISC::SET_BIT(&iLocal_699, 0);
					}
				}
			}
			if (__LIB_26__.func_499() == 2)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_694))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_694) > 0.95f)
					{
						iLocal_695 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707, Local_708, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
						{
							if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_695, "missheistdocks2aleadinoutlsdh_2a_int", "stand_loop_wade", 8f, -8f, 64, 0, 1000f, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
						{
							if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_695, "missheistdocks2aleadinoutlsdh_2a_int", "stand_loop_floyd", 8f, -8f, 64, 0, 1000f, 0);
							}
						}
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_695, true);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1155.0751f, -1519.5853f, 9.432723f, -1157.7987f, -1521.5917f, 11.632723f, 8f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			else if (__LIB_26__.func_499() == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1155.0751f, -1519.5853f, 9.432723f, -1157.7987f, -1521.5917f, 11.632723f, 8f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			else if (__LIB_26__.func_499() == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1155.0751f, -1519.5853f, 9.432723f, -1157.7987f, -1521.5917f, 11.632723f, 8f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
			}
			if (__LIB_30__.func_331(&iLocal_704) > fLocal_700)
			{
				iLocal_701++;
			}
			break;
		case 4:
			break;
	}
	if (__LIB_10__.func_5(3))
	{
		if (!__LIB_11__.func_907(3))
		{
			__LIB_20__.func_680(3, 2, 2, 0, 0);
			GRAPHICS::SET_TV_VOLUME(-25f);
		}
	}
}

int func_607()//Position - 0x749EE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
		{
			if (PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
			{
				return 1;
			}
			else
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
				if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[iVar0], true), 5f))
				{
					ENTITY::SET_ENTITY_HEALTH(Global_96938.f_9[iVar0], 0, 0);
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_608()//Position - 0x74A78
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_701 == 4)
		{
			__LIB_0__.func_296();
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			return 1;
		}
	}
	return 0;
}

void func_610()//Position - 0x74AB6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_30__.func_330();
}

void func_611()//Position - 0x74AF7
{
	int iVar0;
	if (__LIB_26__.func_499() == 2)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[3]));
		__LIB_40__.func_657(&(Global_96938.f_9[4]));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
			iVar0++;
		}
	}
	else if (__LIB_26__.func_499() == 0)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[4]));
		iVar0 = 0;
		while (iVar0 < 3)
		{
			__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
			iVar0++;
		}
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_30__.func_330();
}

void func_612()//Position - 0x74BBF
{
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-1164.5743f, -1533.0972f, 5.41414f, -1140.2683f, -1504.8655f, 13.82142f, false, true, true, true);
	MISC::CLEAR_AREA_OF_PEDS(-1156.2482f, -1520.3972f, 9.63273f, 6f, 0);
	MISC::CLEAR_AREA_OF_PEDS(-1148.8787f, -1515.7218f, 9.64032f, 6f, 0);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	func_587(&(Global_96938.f_9[0]), 24, Local_707, 0, 1);
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(24));
	func_587(&(Global_96938.f_9[1]), 32, Local_707, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 11, 0, 0, 0);
	__LIB_11__.func_318(Global_96938.f_9[1], Global_96938.f_42);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(32));
	__LIB_11__.func_717(0, 3, 1);
	__LIB_11__.func_717(1, 3, 1);
	__LIB_39__.func_906(53, 0);
	if (__LIB_26__.func_499() == 2)
	{
		iLocal_693 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707, Local_708, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_693, "missheistdocks2aleadinoutlsdh_2a_int", "Sitting_loop_Wade", 1000f, -8f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_693, "missheistdocks2aleadinoutlsdh_2a_int", "Sitting_loop_Floyd", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_693, true);
		func_242(&(Global_96938.f_9[3]), 0, Local_707, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[3], Global_96938.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[3], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[3], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
		func_242(&(Global_96938.f_9[4]), 1, Local_707, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[4], Global_96938.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[4], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[4], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_One"));
	}
	else if (__LIB_26__.func_499() == 0)
	{
		func_242(&(Global_96938.f_9[2]), 2, Local_707, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[2], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
		func_242(&(Global_96938.f_9[4]), 1, Local_707, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[4], Global_96938.f_42);
		ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_9[4], false, false);
		ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[4], true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_One"));
		iLocal_696 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707 + Vector(0f, -0.2f, 0.2f), Local_708, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_696, "missheistdocks2aleadinoutlsdh_2a_int", "cleaning_wade", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_696, true);
		iLocal_697 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707, Local_708, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_697, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_floyd", 1000f, -8f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_697, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_trevor", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_697, true);
	}
	else if (__LIB_26__.func_499() == 1)
	{
		func_242(&(Global_96938.f_9[2]), 2, Local_707, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[2], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
		func_242(&(Global_96938.f_9[3]), 0, Local_707, 0, 1, 1, 0);
		__LIB_11__.func_318(Global_96938.f_9[3], Global_96938.f_42);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
		iLocal_696 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707 + Vector(0f, -0.2f, 0.2f), Local_708, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_696, "missheistdocks2aleadinoutlsdh_2a_int", "cleaning_wade", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_696, true);
		iLocal_697 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707, Local_708, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_697, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_2_floyd", 1000f, -8f, 0, 0, 1000f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_697, "missheistdocks2aleadinoutlsdh_2a_int", "massage_loop_2_trevor", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_697, true);
		iLocal_698 = PED::CREATE_SYNCHRONIZED_SCENE(Local_707, Local_708, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iLocal_698, "missheistdocks2aleadinoutlsdh_2a_int", "sitting_loop_michael", 1000f, -8f, 0, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_698, true);
	}
	__LIB_34__.func_978(74, "LSDH_2A_INT", 60, 48, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		__LIB_34__.func_985(74, "Wade", Global_96938.f_9[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		__LIB_34__.func_985(74, "Floyd", Global_96938.f_9[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
	{
		__LIB_34__.func_985(74, "Trevor", Global_96938.f_9[2]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
	{
		__LIB_34__.func_985(74, "Michael", Global_96938.f_9[3]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
	{
		__LIB_34__.func_985(74, "Franklin", Global_96938.f_9[4]);
	}
	MISC::CLEAR_BIT(&iLocal_699, 0);
}

int func_616()//Position - 0x753F8
{
	if ((((((STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_149(24)) && STREAMING::HAS_MODEL_LOADED(__LIB_11__.func_149(32))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_Zero"))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_One"))) && STREAMING::HAS_MODEL_LOADED(joaat("Player_Two"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2aleadinoutlsdh_2a_int")) && INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(-1158.3411f, -1520.893f, 9.6345f)))
	{
		return 1;
	}
	return 0;
}

void func_617()//Position - 0x75475
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(24));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(32));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_One"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Two"));
	STREAMING::REMOVE_ANIM_DICT("missheistdocks2aleadinoutlsdh_2a_int");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(-1158.3411f, -1520.893f, 9.6345f));
}

void func_618()//Position - 0x754D7
{
	STREAMING::REQUEST_MODEL(__LIB_11__.func_149(24));
	STREAMING::REQUEST_MODEL(__LIB_11__.func_149(32));
	STREAMING::REQUEST_MODEL(joaat("Player_Zero"));
	STREAMING::REQUEST_MODEL(joaat("Player_One"));
	STREAMING::REQUEST_MODEL(joaat("Player_Two"));
	STREAMING::REQUEST_ANIM_DICT("missheistdocks2aleadinoutlsdh_2a_int");
	INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(-1158.3411f, -1520.893f, 9.6345f));
}

void func_619()//Position - 0x7552E
{
	iLocal_701 = 0;
	iLocal_699 = 0;
}

void func_621()//Position - 0x75546
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", false);
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_96938[2] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	if (iLocal_1053 == 0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				iLocal_1052 = MISC::GET_GAME_TIMER();
				iLocal_1053 = 1;
			}
			if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED"))
			{
				iLocal_1052 = MISC::GET_GAME_TIMER();
				iLocal_1053 = 1;
			}
		}
	}
}

int func_625()//Position - 0x7560A
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__.func_659(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, 0))
		{
			return 1;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1589.7f, 2794.7f, 16f, true) < 40f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.5138f, 2794.1477f, 14.84222f, -1587.6917f, 2806.1013f, 20.295572f, 16f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1590.4579f, 2780.463f, 14.907547f, -1575.2946f, 2794.1597f, 20.157387f, 19f, false, true, 0))
			{
				return 1;
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -2306.4f, 3389f, 30f, true) < 40f)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2309.7175f, 3387.2454f, 29.219893f, -2293.5034f, 3375.455f, 34.32692f, 7.75f, false, true, 0))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2297.0188f, 3387.863f, 29.544601f, -2282.2346f, 3376.6375f, 34.745003f, 9f, false, true, 0))
			{
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 1) < 25f)
				{
					if (PED::CAN_PED_SEE_HATED_PED(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_1053 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_1052 + 3000)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (__LIB_1__.func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
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
	}
	return 0;
}

void func_628()//Position - 0x7658D
{
	__LIB_30__.func_324(&(Global_96938[0]));
	__LIB_30__.func_324(&(Global_96938[1]));
	__LIB_30__.func_324(&(Global_96938[2]));
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	__LIB_40__.func_657(&(Global_96938.f_9[1]));
	VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1054);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1051, false);
}

void func_629()//Position - 0x765E7
{
	__LIB_30__.func_307(&(Global_96938[0]));
	__LIB_30__.func_307(&(Global_96938[1]));
	__LIB_30__.func_307(&(Global_96938[2]));
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			PED::SET_PED_KEEP_TASK(Global_96938.f_9[0], true);
			__LIB_39__.func_460(&(Global_96938.f_9[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
		{
			PED::SET_PED_KEEP_TASK(Global_96938.f_9[1], true);
			__LIB_39__.func_460(&(Global_96938.f_9[1]));
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1054);
}

void func_630()//Position - 0x7668F
{
	if (__LIB_26__.func_499() != 2)
	{
		__LIB_18__.func_203("TRIG_T" /* GXT: Return as Trevor to start this mission. */, 0, 0, -1, 10000, 7, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("MarineLeadInGroupHash", &iLocal_1054);
	Global_32299[0 /*7*/].f_6 = 1;
	MISC::CLEAR_AREA(-1876.8f, 2806.1f, 32.3f, 8f, true, false, false, false);
	MISC::CLEAR_AREA(-1857.7f, 2797.9f, 32.4f, 8f, true, false, false, false);
	MISC::CLEAR_AREA(-1591.7f, 2799.5f, 16.1f, 3f, true, false, false, false);
	PED::SET_PED_NON_CREATION_AREA(-1593f, 2797.5f, 19f, -1590.7f, 2802.6f, 15.4f);
	PED::SET_PED_NON_CREATION_AREA(-2308.3f, 3386.6f, 32.5f, -2305.9f, 3392.5f, 29.4f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true);
	iLocal_1051 = PED::ADD_SCENARIO_BLOCKING_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true, true, true);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		MISC::CLEAR_AREA(-2145.4856f, 3018.2944f, 31.81f, 10f, true, false, false, false);
		Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("cargobob"), -2145.4856f, 3018.2944f, 31.81f, 330.4836f, true, true, false);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_96938[0], false);
		ENTITY::FREEZE_ENTITY_POSITION(Global_96938[0], true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[0], true, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
	{
		MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, true, false, false, false);
		Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("buzzard"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, true, true, false);
		VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Global_96938[1], true);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[1], true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[1], true, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[1], 5f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("S_M_Y_Marine_01"), -1590.5227f, 2796.3022f, 15.9184f, 247.0896f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[0], true, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Global_96938.f_9[0], joaat("WEAPON_ASSAULTRIFLE"), 2000, true, true);
		PED::SET_PED_ACCURACY(Global_96938.f_9[0], 10);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[0], iLocal_1054);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("S_M_Y_Marine_01"), -2303.7996f, 3387.99f, 30.034f, 58.5763f, true, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938.f_9[1], true, 1);
		WEAPON::GIVE_WEAPON_TO_PED(Global_96938.f_9[1], joaat("WEAPON_ASSAULTRIFLE"), 2000, true, true);
		PED::SET_PED_ACCURACY(Global_96938.f_9[1], 10);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[0], iLocal_1054);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1054, joaat("PLAYER"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Marine_01"));
}

int func_631()//Position - 0x76A3C
{
	if ((STREAMING::HAS_MODEL_LOADED(joaat("cargobob")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Marine_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("buzzard")))
	{
		return 1;
	}
	return 0;
}

void func_632()//Position - 0x76A71
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Marine_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("buzzard"));
}

void func_633()//Position - 0x76A94
{
	STREAMING::REQUEST_MODEL(joaat("cargobob"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Marine_01"));
	STREAMING::REQUEST_MODEL(joaat("buzzard"));
}

void func_634()//Position - 0x76AB7
{
	iLocal_1052 = 0;
	iLocal_1053 = 0;
}

void func_636()//Position - 0x76ACF
{
	if (!Global_96938.f_357)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_96938.f_28[0]))
				{
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_96938.f_28[1]))
					{
						PHYSICS::SET_CG_AT_BOUNDCENTER(Global_96938[0]);
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[0])))
						{
							Global_96938.f_37[0] = PHYSICS::ADD_ROPE(1260.6915f, -3008.286f, 23.73365f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, false, false, false, 2f, true, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_96938.f_37[0], Global_96938.f_28[0], Global_96938[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938.f_28[0], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938[0], 1.8f, 1.02f, 1.11f), 5f, false, false, 0, 0);
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[1])))
						{
							Global_96938.f_37[1] = PHYSICS::ADD_ROPE(1260.6915f, -3008.286f, 23.73365f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, false, false, false, 2f, true, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_96938.f_37[1], Global_96938.f_28[0], Global_96938[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938.f_28[0], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938[0], -1.8f, 1.02f, 1.11f), 3f, false, false, 0, 0);
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[2])))
						{
							Global_96938.f_37[2] = PHYSICS::ADD_ROPE(1260.7521f, -3004.9941f, 22.68315f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, false, false, false, 2f, true, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_96938.f_37[2], Global_96938.f_28[1], Global_96938[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938.f_28[1], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938[0], 1.8f, -3.07f, 1.11f), 3f, false, false, 0, 0);
						}
						if (!PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[3])))
						{
							Global_96938.f_37[3] = PHYSICS::ADD_ROPE(1260.7521f, -3004.9941f, 22.68315f, 0f, 0f, 0f, 3f, 1, 3f, 0.5f, 0.5f, false, false, false, 2f, true, 0);
							PHYSICS::ATTACH_ENTITIES_TO_ROPE(Global_96938.f_37[3], Global_96938.f_28[1], Global_96938[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938.f_28[1], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938[0], -1.8f, -3.07f, 1.11f), 3f, false, false, 0, 0);
						}
						if (((PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[0])) && PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[1]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[2]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[3])))
						{
							Global_96938.f_357 = 1;
							iLocal_692 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_692)
	{
		if (((PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[0])) && PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[1]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[2]))) && PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[3])))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_96938[0], false);
					PHYSICS::ACTIVATE_PHYSICS(Global_96938[0]);
					iLocal_692 = 0;
				}
			}
		}
	}
	if (!iLocal_691)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[3]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0])) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Global_96938.f_28[3]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[3], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
		}
	}
}

int func_639()//Position - 0x76F28
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	Var0 = { 1240.068f, -3009.0823f, 8.31891f };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar1 < (150f * 150f))
			{
				return 1;
			}
		}
		else if (fVar1 < (90f * 90f))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(Global_96938[0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			if (PHYSICS::DOES_ROPE_EXIST(&(Global_96938.f_37[iVar3])))
			{
				if (!PHYSICS::IS_ROPE_ATTACHED_AT_BOTH_ENDS(&(Global_96938.f_37[iVar3])))
				{
					return 1;
				}
			}
			iVar3++;
		}
	}
	return 0;
}

void func_640()//Position - 0x77056
{
	if (Global_96938.f_357)
	{
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[0]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[0]));
		}
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[1]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[1]));
		}
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[2]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[2]));
		}
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[3]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[3]));
		}
		Global_96938.f_357 = 0;
	}
	__LIB_30__.func_324(&(Global_96938[0]));
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	__LIB_40__.func_657(&(Global_96938.f_9[1]));
	__LIB_30__.func_308(&(Global_96938.f_28[0]));
	__LIB_30__.func_308(&(Global_96938.f_28[1]));
	__LIB_30__.func_308(&(Global_96938.f_28[2]));
	__LIB_30__.func_308(&(Global_96938.f_28[3]));
	iLocal_691 = 0;
}

void func_641()//Position - 0x77141
{
	if (Global_96938.f_357)
	{
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[0]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[0]));
		}
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[1]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[1]));
		}
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[2]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[2]));
		}
		if (PHYSICS::DOES_SCRIPT_OWN_ROPE(Global_96938.f_37[3]))
		{
			PHYSICS::DELETE_ROPE(&(Global_96938.f_37[3]));
		}
		Global_96938.f_357 = 0;
	}
	__LIB_30__.func_307(&(Global_96938[0]));
	__LIB_39__.func_461(&(Global_96938.f_9[0]));
	__LIB_39__.func_461(&(Global_96938.f_9[1]));
	__LIB_30__.func_309(&(Global_96938.f_28[0]));
	__LIB_30__.func_309(&(Global_96938.f_28[1]));
	__LIB_30__.func_309(&(Global_96938.f_28[2]));
	__LIB_30__.func_309(&(Global_96938.f_28[3]));
}

void func_643()//Position - 0x772AF
{
	MISC::CLEAR_AREA(1260.8022f, -3006.417f, 18.3289f, 100f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 1260.8022f, -3006.417f, 18.3289f, 178.9076f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("submersible"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938[0], true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Global_96938[0], true, 1);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[0], false);
	Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("S_M_M_DockWork_01"), 1229.3217f, -3002.8792f, 8.31861f, 270f, true, true);
	TASK::TASK_PLAY_ANIM(Global_96938.f_9[0], "cellphone@str", "cellphone_call_listen_c", 8f, -8f, -1, 49, 0f, false, false, false);
	PED::SET_PED_FLEE_ATTRIBUTES(Global_96938.f_9[0], 512, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_96938.f_9[0], 17, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
	AUDIO::STOP_PED_SPEAKING(Global_96938.f_9[0], true);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.6915f, -3008.286f, 23.73365f, true, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[0], true);
	Global_96938.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.7521f, -3004.9941f, 22.68315f, true, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[1], true);
	Global_96938.f_28[2] = OBJECT::CREATE_OBJECT(joaat("prop_sub_release"), 1249.1055f, -3007.9678f, 9.68718f, true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[2], 0f, 0f, 90f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[2], true);
	Global_96938.f_28[3] = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), 1229.3217f, -3002.8792f, 8.31861f, true, true, false);
	Global_96938.f_357 = 0;
	iLocal_692 = 0;
	iLocal_691 = 0;
}

int func_644()//Position - 0x77497
{
	if (((((((((STREAMING::HAS_MODEL_LOADED(joaat("submersible")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_sub_release"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01"))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && STREAMING::HAS_MODEL_LOADED(joaat("p_amb_phone_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@str")) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdocksprep1ig_1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
	{
		return 1;
	}
	return 0;
}

void func_645()//Position - 0x77525
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("submersible"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sub_release"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_DockWork_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_amb_phone_01"));
	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("missheistdocksprep1ig_1");
	PHYSICS::ROPE_UNLOAD_TEXTURES();
}

void func_646()//Position - 0x77570
{
	STREAMING::REQUEST_MODEL(joaat("submersible"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_sub_release"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
	STREAMING::REQUEST_MODEL(joaat("p_amb_phone_01"));
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP1", 0);
	STREAMING::REQUEST_ANIM_DICT("cellphone@str");
	STREAMING::REQUEST_ANIM_DICT("missheistdocksprep1ig_1");
	TASK::REQUEST_WAYPOINT_RECORDING("docksprep1");
	PHYSICS::ROPE_LOAD_TEXTURES();
}

void func_649()//Position - 0x775DE
{
	if (iLocal_685)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1145.4795f, -1512.7773f, 9.403284f, -1160.3048f, -1523.2434f, 12.632729f, 7.75f, false, true, 0))
		{
			__LIB_0__.func_313(7);
			iLocal_685 = 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__.func_314(7)))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1145.4795f, -1512.7773f, 9.403284f, -1160.3048f, -1523.2434f, 12.632729f, 7.75f, false, true, 0))
		{
			__LIB_32__.func_731(7);
			iLocal_685 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.2899f, -1524.2549f, 9.363565f, -1151.2401f, -1520.0516f, 12.882723f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1147.6808f, -1522.99f, 6.38306f, -1144.0431f, -1520.5184f, 9.938194f, 1.5f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (__LIB_26__.func_499() == 2)
	{
		if (iLocal_683 == 0)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.2839f, -1524.2096f, 9.132868f, -1150.1744f, -1521.5472f, 12.132729f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1148.298f, -1524.2635f, 8.892135f, -1150.1873f, -1521.5669f, 11.883015f, 2.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.3875f, -1524.2543f, 8.883018f, -1146.503f, -1522.3151f, 12.252842f, 2.25f, false, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1160.3243f, -1522.2645f, 8.382723f, -1152.1456f, -1517.0046f, 12.882723f, 5f, false, true, 0))
	{
		CAM::SET_GAMEPLAY_COORD_HINT(Local_687, -1, 2000, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_688);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_689);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_690);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.3502f, -1521.4257f, 9.132723f, -1151.5793f, -1519.6807f, 12.632723f, 2.25f, false, true, 0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
	}
	if ((__LIB_10__.func_5(3) && !__LIB_11__.func_907(3)) && !__LIB_10__.func_6(3))
	{
		__LIB_20__.func_680(3, 0, 10, 0, 1);
		GRAPHICS::SET_TV_VOLUME(-25f);
	}
	switch (iLocal_683)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.638f, -1522.3674f, 9.382867f, -1151.3535f, -1519.9012f, 12.382729f, 1.5f, false, true, 0) && __LIB_26__.func_499() == 2)
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[1]))
				{
					__LIB_34__.func_977();
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					iLocal_682 = PED::CREATE_SYNCHRONIZED_SCENE(Local_680, Local_681, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_682, "missheistdockssetup1leadinout", "lsdh_int_leadin_action_floyd", 8f, -8f, 1, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_682, "missheistdockssetup1leadinout", "lsdh_int_leadin_action_wade", 8f, -8f, 1, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_682, false);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_682, 1f);
					bLocal_684 = false;
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					iLocal_683++;
				}
			}
			break;
		case 1:
			if (bLocal_684 == 0)
			{
				if (__LIB_36__.func_92(&uLocal_515, "D1AUD", "DS1_LDI", 8, 0, 0, 0))
				{
					bLocal_684 = true;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_682))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[1]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_682) == 1f)
					{
						iLocal_682 = PED::CREATE_SYNCHRONIZED_SCENE(Local_680, Local_681, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_682, "missheistdockssetup1leadinout", "lsdh_int_leadin_react_floyd", 8f, -8f, 1, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_682, "missheistdockssetup1leadinout", "lsdh_int_leadin_react_wade", 8f, -8f, 1, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_682, false);
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_682, 1f);
						iLocal_683++;
					}
				}
			}
			break;
		case 2:
			if (bLocal_684 == 0)
			{
				if (__LIB_36__.func_92(&uLocal_515, "D1AUD", "DS1_LDI", 8, 0, 0, 0))
				{
					bLocal_684 = true;
				}
			}
			if (bLocal_684)
			{
				if (!__LIB_0__.func_75())
				{
					iLocal_683++;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_682))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_682) > 0.7f)
				{
					iLocal_683++;
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_682))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_682) > 0.55f)
				{
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1156.5201f, -1520.6179f, 9.382729f, -1157.2887f, -1519.429f, 12.632729f, 1f, false, true, 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			}
			break;
		case 3:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			break;
	}
}

int func_671()//Position - 0x7CE4D
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
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		if (PED::IS_PED_INJURED(Global_96938.f_9[1]))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[1], PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	return 0;
}

int func_672()//Position - 0x7CED6
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_683 == 3)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_673()//Position - 0x7CF12
{
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	__LIB_0__.func_202(&uLocal_515, 3);
	__LIB_40__.func_657(&(Global_96938.f_9[1]));
	__LIB_0__.func_202(&uLocal_515, 4);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", false, 1f, 0.5f);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_18__.func_191(145, 0, 0, 0, 0);
	__LIB_18__.func_191(146, 0, 0, 0, 0);
	if (iLocal_685)
	{
		__LIB_0__.func_313(7);
		iLocal_685 = 0;
	}
	__LIB_30__.func_330();
}

void func_680()//Position - 0x8134E
{
	__LIB_39__.func_460(&(Global_96938.f_9[0]));
	__LIB_0__.func_202(&uLocal_515, 3);
	__LIB_39__.func_460(&(Global_96938.f_9[1]));
	__LIB_0__.func_202(&uLocal_515, 4);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", false, 1f, 0.5f);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	if (iLocal_686 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_686);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (iLocal_685)
	{
		__LIB_0__.func_313(7);
		iLocal_685 = 0;
	}
	__LIB_30__.func_330();
}

void func_681()//Position - 0x813D3
{
	MISC::CLEAR_AREA(__LIB_30__.func_321(217, 0), 25f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	func_587(&(Global_96938.f_9[0]), 32, -1159.71f, -1521.33f, 10.65f, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 9, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 10, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 11, 0, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(32));
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	__LIB_0__.func_203(&uLocal_515, 3, Global_96938.f_9[0], "FLOYD", 0, 1);
	func_587(&(Global_96938.f_9[1]), 24, -1158.07f, -1520.9f, 10.65f, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 1, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 3, 3, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 4, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 6, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 9, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 10, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 11, 0, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(24));
	__LIB_11__.func_318(Global_96938.f_9[1], Global_96938.f_42);
	__LIB_0__.func_203(&uLocal_515, 4, Global_96938.f_9[1], "WADE", 0, 1);
	__LIB_0__.func_203(&uLocal_515, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_682 = PED::CREATE_SYNCHRONIZED_SCENE(Local_680, Local_681, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_682, "missheistdockssetup1leadinout", "lsdh_int_leadin_loop_floyd", 1000f, -8f, 0, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_682, "missheistdockssetup1leadinout", "lsdh_int_leadin_loop_wade", 1000f, -8f, 0, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_682, true);
	iLocal_683 = 0;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", true, 1f, 0.5f);
	__LIB_34__.func_978(71, "LSDH_INT", -1, -1, 0);
	__LIB_34__.func_985(71, "FLOYD", Global_96938.f_9[0]);
	__LIB_34__.func_985(71, "WADE", Global_96938.f_9[1]);
	__LIB_18__.func_191(145, 2, 0, 1, 0);
	__LIB_18__.func_191(146, 1, 0, 1, 0);
}

void func_686()//Position - 0x818A0
{
	__LIB_39__.func_456(&(Global_96938.f_209), 0);
	if (iLocal_686 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_686);
	}
	if (iLocal_685)
	{
		__LIB_0__.func_313(7);
		iLocal_685 = 0;
	}
}

void func_692()//Position - 0x81A2B
{
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_149(24));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_149(32));
	__LIB_34__.func_979(&(Global_96938.f_209), "missheistdockssetup1leadinout");
	func_695(&(Global_96938.f_209), "d1leadin");
	__LIB_34__.func_983(&(Global_96938.f_209), "DOCKH1", 0, 0);
	__LIB_34__.func_983(&(Global_96938.f_209), "D1AUD", 6, 0);
}

void func_695(var uParam0, char* sParam1)//Position - 0x81B95
{
	__LIB_30__.func_301(uParam0, 5, -1, sParam1, 0);
}

void func_698()//Position - 0x81BCF
{
	iLocal_685 = 0;
}

void func_700()//Position - 0x81BE3
{
	__LIB_39__.func_906(47, 4);
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.200673f, -1443.8246f, 31.18375f, 4f, 5f, 1.75f, false, true, 0))
	{
		__LIB_11__.func_315(1, 0);
	}
}

void func_712()//Position - 0x81CDC
{
	struct<3> Var0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { __LIB_30__.func_321(202, __LIB_26__.func_499()) };
		if (!BitTest(uLocal_1352, 3))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) < (90f * 90f))
			{
				__LIB_34__.func_978(41, "FRANKLIN_1_INT", -1, 0, 14);
				__LIB_30__.func_351(41, "Lamar", 0, 0, 0);
				__LIB_30__.func_351(41, "Lamar", 1, 0, 0);
				__LIB_30__.func_351(41, "Lamar", 2, 0, 0);
				__LIB_30__.func_351(41, "Lamar", 3, 2, 1);
				__LIB_30__.func_351(41, "Lamar", 4, 5, 0);
				__LIB_30__.func_351(41, "Lamar", 5, 0, 0);
				__LIB_30__.func_351(41, "Lamar", 6, 1, 0);
				__LIB_30__.func_351(41, "Lamar", 7, 0, 0);
				__LIB_30__.func_351(41, "Lamar", 8, 0, 0);
				__LIB_30__.func_351(41, "Lamar", 9, 0, 0);
				__LIB_30__.func_351(41, "Lamar", 10, 1, 2);
				__LIB_30__.func_351(41, "Chop", 3, 0, __LIB_23__.func_158());
				MISC::SET_BIT(&uLocal_1352, 3);
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0) > (120f * 120f))
		{
			__LIB_30__.func_330();
			MISC::CLEAR_BIT(&uLocal_1352, 3);
		}
		if (!BitTest(uLocal_1352, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -15.347873f, -1442.3647f, 29.113031f, -14.261008f, -1455.5659f, 32.44184f, 14f, false, true, 0))
				{
					if (__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 5f, 1, 1056964608, 0, 1, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						MISC::SET_BIT(&uLocal_1352, 1);
					}
				}
			}
		}
	}
	switch (__LIB_26__.func_499())
	{
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 84.51381f, -1959.5546f, 19.626844f, 86.773445f, -1956.9185f, 22.749155f, 3.5f, false, true, 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.65f, -1446.85f, 29.725f, true) < 3f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
				{
					PED::SET_PED_CAPSULE(Global_96938.f_9[0], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[0], 129, true);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[0], 249, true);
					if (BitTest(uLocal_1352, 2))
					{
						func_714();
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_loop_denise", 3))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -12.736193f, -1456.8068f, 28.922047f, -14.035276f, -1441.3619f, 33.107735f, 12f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -19.77248f, -1442.8878f, 29.157907f, -19.236265f, -1450.4509f, 32.596985f, 7.5f, false, true, 0)) && !__LIB_30__.func_339(-12.736193f, -1456.8068f, 28.922047f, -14.035276f, -1441.3619f, 33.107735f, 12f))
							{
								__LIB_34__.func_977();
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									MISC::SET_BIT(&uLocal_1352, 2);
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -23.826109f, -1454.1727f, 29.230972f, -5.332073f, -1452.4565f, 32.552048f, 8f, false, true, 0))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -14.3153f, -1449.7394f, 29.6177f, 1f, 60000, 0.25f, 513, 358.6017f);
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2048, 2);
									}
								}
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2048, 2);
								TASK::TASK_PLAY_ANIM_ADVANCED(Global_96938.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise", -11.65f, -1446.85f, 29.725f, 0f, 0f, -2.52f, 2f, -2f, -1, 790538, 0f, 2, 1);
							}
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise", 3))
					{
						if (!BitTest(uLocal_1352, 0))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_96938.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise") >= 0.25f || ENTITY::HAS_ANIM_EVENT_FIRED(Global_96938.f_9[0], MISC::GET_HASH_KEY("START_AUDIO")))
							{
								if (__LIB_36__.func_92(&(Global_96938.f_44), "FKN1AUD", "F1_INTLF", 12, 0, 0, 0))
								{
									MISC::SET_BIT(&uLocal_1352, 0);
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
				{
					PED::SET_PED_CAPSULE(Global_96938.f_9[0], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[0], 129, true);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[0], 249, true);
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_denise", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_talk_denise", 3))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -13.850606f, -1442.3296f, 29.105371f, -13.056397f, -1455.5648f, 32.44538f, 12f, false, true, 0) && !__LIB_30__.func_339(-13.850606f, -1442.3296f, 29.105371f, -13.056397f, -1455.5648f, 32.44538f, 12f))
							{
								__LIB_34__.func_977();
								MISC::SET_BIT(&uLocal_1352, 0);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[1], false))
				{
					PED::SET_PED_CAPSULE(Global_96938.f_9[1], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[1], 129, true);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[1], 249, true);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[2], false))
				{
					PED::SET_PED_CAPSULE(Global_96938.f_9[2], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[2], 129, true);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[2], 249, true);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[3], false))
				{
					PED::SET_PED_CAPSULE(Global_96938.f_9[3], 0.5f);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[3], 129, true);
					PED::SET_PED_RESET_FLAG(Global_96938.f_9[3], 249, true);
				}
			}
			break;
	}
}

void func_714()//Position - 0x8241E
{
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_GAMEPLAY_HINT_FOV(35.2f);
		CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, -1, 2500, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0f);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0f);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.4f);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-4f);
	}
}

int func_718()//Position - 0x8250E
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
			{
				return 1;
			}
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if ((PED::IS_PED_INJURED(Global_96938.f_9[iVar0]) || PED::IS_PED_RAGDOLL(Global_96938.f_9[iVar0])) || FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_719()//Position - 0x825A5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (__LIB_26__.func_499())
		{
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
					{
						if (BitTest(uLocal_1352, 0))
						{
							if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_action_denise", 3) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_96938.f_9[0], MISC::GET_HASH_KEY("START_CS"))) || !__LIB_0__.func_75())
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									TASK::TASK_CLEAR_LOOK_AT(Global_96938.f_9[0]);
									PED::SET_PED_CAPSULE(Global_96938.f_9[0], 0f);
									func_748();
									PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
									return 1;
								}
							}
						}
					}
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
					{
						if (BitTest(uLocal_1352, 0))
						{
							if (!__LIB_0__.func_75())
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									TASK::TASK_CLEAR_LOOK_AT(Global_96938.f_9[0]);
									func_748();
									PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
									return 1;
								}
							}
						}
					}
				}
				break;
			}
	}
	return 0;
}

void func_720()//Position - 0x826D8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		__LIB_30__.func_324(&(Global_96938[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
	{
		__LIB_30__.func_308(&(Global_96938.f_28[0]));
	}
	__LIB_30__.func_330();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
}

void func_721()//Position - 0x8273E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		__LIB_30__.func_307(&(Global_96938[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
	{
		__LIB_30__.func_309(&(Global_96938.f_28[0]));
	}
	__LIB_30__.func_330();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
}

void func_722()//Position - 0x827A4
{
	int iVar0;
	switch (__LIB_26__.func_499())
	{
		case 1:
			MISC::CLEAR_AREA(-12.73f, -1445.93f, 29.7f, 2f, true, false, false, false);
			MISC::CLEAR_AREA(-19.05f, -1455.47f, 29.51f, 2f, true, false, false, false);
			break;
		case 2:
			MISC::CLEAR_AREA(-13.93f, -1446.32f, 29.65f, 2f, true, false, false, false);
			MISC::CLEAR_AREA(-19.05f, -1455.47f, 29.51f, 2f, true, false, false, false);
			break;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::ADD_RELATIONSHIP_GROUP("FRANKLIN_1_TS_RELGROUP", &(Global_96938.f_42));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_96938.f_42, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), Global_96938.f_42);
	switch (__LIB_26__.func_499())
	{
		case 1:
			if (__LIB_41__.func_421(&(Global_96938[0]), 19, -19.1293f, -1455.2057f, 29.5073f, 94.6991f, 1, 0))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[0], 5f);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[0], 2);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[0], false, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_26__.func_508(19, 0));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				__LIB_30__.func_340(Global_96938.f_9[0]);
				func_725(Global_96938.f_9[0]);
				TASK::TASK_PLAY_ANIM_ADVANCED(Global_96938.f_9[0], "missfra1leadinout", "franklin_1_int_leadin_loop_denise", -11.65f, -1446.85f, 29.725f, 0f, 0f, -2.52f, 1000f, -2f, -1, 790529, 0f, 2, 1);
				__LIB_0__.func_203(&(Global_96938.f_44), 8, Global_96938.f_9[0], "DENISE", 0, 1);
			}
			MISC::CLEAR_BIT(&uLocal_1352, 0);
			Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_trowel"), -12.899f, -1446.51f, 29.6976f, true, true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_96938.f_28[0], true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			break;
		case 2:
			if (__LIB_41__.func_421(&(Global_96938[0]), 19, -19.1293f, -1455.2057f, 29.5073f, 94.6991f, 1, 0))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_96938[0], 5f);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[0], 2);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Global_96938[0], false, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_26__.func_508(19, 0));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				__LIB_30__.func_340(Global_96938.f_9[0]);
				func_725(Global_96938.f_9[0]);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_denise", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -1000f, -1, 790528, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_talk_denise", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -1000f, -1, 790528, 0f, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_96938.f_9[0], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_trowel"), -12.899f, -1446.51f, 29.6976f, true, true, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_96938.f_28[0], -12.899f, -1446.51f, 29.6976f, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[0], -93.24f, 0f, 40.7f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[0], true);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_96938.f_28[0], true);
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
			{
				__LIB_30__.func_340(Global_96938.f_9[1]);
				func_725(Global_96938.f_9[1]);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_lamar", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -8f, 7000, 790529, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_b_lamar", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 8f, -8f, -1, 790528, 0f, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_96938.f_9[1], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			if (__LIB_23__.func_162(&(Global_96938.f_9[2]), -15.0506f, -1446.0521f, 29.6444f, 215.2747f, 1))
			{
				func_725(Global_96938.f_9[2]);
				TASK::TASK_PLAY_ANIM_ADVANCED(Global_96938.f_9[2], "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_chop", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -2f, -1, 790529, 0f, 2, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
			{
				__LIB_30__.func_340(Global_96938.f_9[3]);
				func_725(Global_96938.f_9[3]);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_franklin", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 1000f, -8f, 9000, 790529, 0f, 2, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(0, "missfra1leadinoutfra_1_int_trevor", "_trevor_leadin_loop_b_franklin", -13.865f, -1446.12f, 29.625f, 0f, 0f, 2.88f, 8f, -8f, -1, 790528, 0f, 2, 0);
				TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_96938.f_9[3], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			__LIB_0__.func_203(&(Global_96938.f_44), 8, Global_96938.f_9[0], "DENISE", 0, 1);
			MISC::CLEAR_BIT(&uLocal_1352, 0);
			break;
	}
	switch (__LIB_26__.func_499())
	{
		case 1:
			break;
		case 2:
			break;
	}
	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 15f);
}

void func_725(int iParam0)//Position - 0x82EDC
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			PED::SET_PED_AS_ENEMY(iParam0, false);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
			PED::SET_PED_CAN_RAGDOLL(iParam0, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
			PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 169, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_96938.f_42);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		}
	}
}

int func_740()//Position - 0x8441E
{
	struct<3> Var0[3];
	struct<3> Var1[11];
	struct<3> Var2[1];
	if (Global_96938.f_209.f_147 != 4)
	{
		__LIB_30__.func_877(&(Global_96938.f_209), 4);
	}
	__LIB_30__.func_341(&(Var0[0 /*3*/]), 0, 0, 0);
	__LIB_30__.func_341(&(Var0[1 /*3*/]), 3, 0, 0);
	__LIB_30__.func_341(&(Var0[2 /*3*/]), 4, 0, 0);
	Var2[0 /*3*/].f_1 = -1;
	switch (__LIB_26__.func_499())
	{
		case 1:
			if (!__LIB_37__.func_436(&(Global_96938.f_209)) || !func_744(&(Global_96938.f_9[0]), 44, -12.58f, -1446.37f, 29.72f, &Var0, &Var2))
			{
				return 0;
			}
			break;
		case 2:
			__LIB_30__.func_341(&(Var1[0 /*3*/]), 0, 0, 0);
			__LIB_30__.func_341(&(Var1[1 /*3*/]), 1, 0, 0);
			__LIB_30__.func_341(&(Var1[2 /*3*/]), 2, 0, 0);
			__LIB_30__.func_341(&(Var1[3 /*3*/]), 3, 2, 1);
			__LIB_30__.func_341(&(Var1[4 /*3*/]), 4, 5, 0);
			__LIB_30__.func_341(&(Var1[5 /*3*/]), 5, 0, 0);
			__LIB_30__.func_341(&(Var1[6 /*3*/]), 6, 1, 0);
			__LIB_30__.func_341(&(Var1[7 /*3*/]), 7, 0, 0);
			__LIB_30__.func_341(&(Var1[8 /*3*/]), 8, 0, 0);
			__LIB_30__.func_341(&(Var1[9 /*3*/]), 9, 0, 0);
			__LIB_30__.func_341(&(Var1[10 /*3*/]), 10, 1, 2);
			if (((!__LIB_37__.func_436(&(Global_96938.f_209)) || !func_744(&(Global_96938.f_9[0]), 44, -12.58f, -1446.37f, 29.72f, &Var0, &Var2)) || !func_744(&(Global_96938.f_9[1]), 19, -15.5027f, -1445.4158f, 29.6478f, &Var1, &Var2)) || !func_741(&(Global_96938.f_9[3]), 1, -14.2182f, -1448.2678f, 29.6458f, 12, -99))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_741(var uParam0, bool bParam1, struct<3> Param2, int iParam3, int iParam4)//Position - 0x845E7
{
	if (!__LIB_20__.func_688(bParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = PED::CREATE_PED(26, __LIB_12__.func_95(bParam1), Param2, 0f, false, true);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
		func_565(*uParam0);
		__LIB_36__.func_54(*uParam0, 1, 0);
		__LIB_26__.func_525(*uParam0);
		__LIB_26__.func_430(*uParam0);
		func_244(*uParam0, 0);
		__LIB_0__.func_349(*uParam0);
		MISC::SET_BIT(&(Global_97919.f_47), __LIB_0__.func_386(bParam1));
		if (iParam4 != -99)
		{
			func_528(*uParam0, iParam3, iParam4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

int func_744(int* iParam0, bool bParam1, struct<3> Param2, var uParam3, var uParam4)//Position - 0x84736
{
	int iVar0;
	if (!__LIB_11__.func_971(bParam1))
	{
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		func_587(iParam0, bParam1, Param2, 0f, 0);
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

void func_748()//Position - 0x84890
{
	__LIB_30__.func_877(&(Global_96938.f_209), 1);
	__LIB_39__.func_456(&(Global_96938.f_209), 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
}

void func_749()//Position - 0x848B2
{
	switch (__LIB_26__.func_499())
	{
		case 1:
			__LIB_30__.func_336(&(Global_96938.f_209), __LIB_26__.func_508(19, 0));
			__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Denise"));
			__LIB_30__.func_336(&(Global_96938.f_209), joaat("prop_cs_trowel"));
			__LIB_34__.func_979(&(Global_96938.f_209), "missfra1leadinout");
			__LIB_34__.func_983(&(Global_96938.f_209), "FKN1AUD", 6, 0);
			break;
		case 2:
			__LIB_30__.func_336(&(Global_96938.f_209), __LIB_26__.func_508(19, 0));
			__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_LamarDavis"));
			__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Denise"));
			__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_813());
			__LIB_30__.func_336(&(Global_96938.f_209), joaat("Player_One"));
			__LIB_30__.func_336(&(Global_96938.f_209), joaat("prop_cs_trowel"));
			__LIB_34__.func_979(&(Global_96938.f_209), "missfra1leadinoutfra_1_int_trevor");
			__LIB_34__.func_983(&(Global_96938.f_209), "FKN1AUD", 6, 0);
			break;
	}
}

int func_753()//Position - 0x849B7
{
	if ((((((!__LIB_0__.func_368(45) || __LIB_11__.func_773(-1847734803)) || __LIB_11__.func_773(-714760066)) || __LIB_11__.func_773(-1198055521)) || __LIB_11__.func_773(1374342572)) || __LIB_11__.func_773(530956160)) || __LIB_11__.func_773(240475766))
	{
		return 1;
	}
	return 0;
}

int func_756()//Position - 0x84B51
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < 5)
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
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar0]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[iVar0], false))
				{
					return 1;
				}
			}
			iVar0++;
		}
		switch (__LIB_26__.func_499())
		{
			case 1:
				if (MISC::IS_BULLET_IN_ANGLED_AREA(1378.6385f, -2081.8489f, 50.498257f, 1376.1077f, -2084.0146f, 53.498257f, 3f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1378.6385f, -2081.8489f, 50.498257f, 1376.1077f, -2084.0146f, 53.498257f, 3f))
				{
					return 1;
				}
				break;
			case 2:
				if (MISC::IS_BULLET_IN_ANGLED_AREA(1373.7693f, -2076.1165f, 50.498257f, 1371.8263f, -2077.5588f, 53.498257f, 2.5f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1373.7693f, -2076.1165f, 50.498257f, 1371.8263f, -2077.5588f, 53.498257f, 2.5f))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_757()//Position - 0x84CBE
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = __LIB_26__.func_499();
		if (__LIB_0__.func_317(bVar0))
		{
			switch (bVar0)
			{
				case 0:
					if (!Global_97361)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1382.5886f, -2072.5754f, 50.74822f, 1368.9202f, -2084.0425f, 55.99822f, 18f, false, true, 0))
						{
							__LIB_34__.func_977();
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1381.2487f, -2077.3872f, 50.74822f, 1372.0426f, -2085.1248f, 55.998215f, 8.75f, false, true, 0))
					{
						return 1;
					}
					break;
				case 1:
					if (!Global_97361)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.6979f, -2067.8574f, 50.748146f, 1367.6726f, -2083.8848f, 56.248146f, 24.5f, false, true, 0))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1384.9689f, -2069.66f, 50.748146f, 1365.2633f, -2086.1692f, 55.998142f, 22.25f, false, true, 0))
						{
							__LIB_34__.func_977();
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1378.2008f, -2076.9214f, 50.748215f, 1369.6522f, -2084.0225f, 55.99822f, 13f, false, true, 0))
					{
						return 1;
					}
					break;
				case 2:
					if (!Global_97361)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1386.6979f, -2067.8574f, 50.748146f, 1367.6726f, -2083.8848f, 56.248146f, 24.5f, false, true, 0))
						{
							__LIB_34__.func_977();
							if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
							{
								PED::REQUEST_PED_VISIBILITY_TRACKING(Global_96938.f_9[0]);
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1379.5212f, -2075.929f, 50.74822f, 1370.8484f, -2082.9846f, 56.24822f, 13.75f, false, true, 0))
					{
						return 1;
					}
					break;
				}
		}
		if (Global_97361)
		{
			switch (bVar0)
			{
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (PED::IS_TRACKED_PED_VISIBLE(Global_96938.f_9[0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
								{
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 1f, 20000, 0.25f, 0, 40000f);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								}
							}
							else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
							{
								if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 1f, 20000, 0.25f, 0, 40000f);
									}
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
						}
						else
						{
							CAM::STOP_GAMEPLAY_HINT(false);
						}
					}
					break;
				}
			}
	}
	return 0;
}

void func_758()//Position - 0x8502E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_30__.func_324(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_30__.func_308(&(Global_96938.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__.func_330();
}

void func_759()//Position - 0x8509A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_30__.func_307(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_30__.func_309(&(Global_96938.f_28[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__.func_330();
}

void func_760()//Position - 0x85106
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	MISC::CLEAR_AREA(1382.6375f, -2073.6797f, 50.9988f, 40f, true, false, false, false);
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(1505.3f, -2052f, 100f, 1252.8f, -2034f, -100f, false, true, true, true);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("trash"), 1380.42f, -2072.7695f, 51.7607f, 37.5f, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trash"));
	AUDIO::SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Global_96938[0], false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[0], 2);
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), 1377.1045f, -2076.2f, 52f, 37.5f, true, true, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Global_96938[1], true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[1], 2);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[1], 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
	if (__LIB_26__.func_499() == 2)
	{
		if (func_816(PLAYER::PLAYER_PED_ID()))
		{
			Global_96938[2] = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[2], false, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[2], 2);
		}
		else
		{
			__LIB_41__.func_654(&(Global_96938[2]), 2, 1385.0901f, -2070.5645f, 51.9675f, 37.5f, 1, 0);
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_6__.func_793(2, 1));
	switch (__LIB_26__.func_499())
	{
		case 2:
			func_763();
			break;
		case 1:
			func_762();
			__LIB_37__.func_495(1);
			break;
		case 0:
			__LIB_37__.func_495(0);
			__LIB_37__.func_495(1);
			break;
	}
	__LIB_34__.func_978(38, "FBI_4_MCS_3_CONCAT", 0, 14, 12);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		__LIB_34__.func_985(38, "MICHAEL", Global_96938.f_9[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		__LIB_34__.func_985(38, "FRANKLIN", Global_96938.f_9[1]);
	}
}

void func_762()//Position - 0x8531E
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	func_242(&(Global_96938.f_9[0]), 0, 1377.1262f, -2082.3298f, 50.9983f, 55.3305f, 0, 1, 0);
	__LIB_37__.func_495(0);
	func_528(Global_96938.f_9[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	Var0 = { 1376.84f, -2082.661f, 51.05f };
	Var1 = { 0f, 0f, 117f };
	iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar2, "MISSFBI4LEADINOUTFBI_4_MCS_3", "_LEADIN_LOOP_MICHAEL", 1000f, -1000f, 0, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 1377.2223f, -2082.2046f, 51.4064f, true, true, false);
	ENTITY::SET_ENTITY_HEADING(Global_96938.f_28[0], 20.96f);
	Var0 = { 1376.69f, -2082.761f, 51.05f };
	Var1 = { 0f, 0f, 117f };
	iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iVar2, "_LEADIN_LOOP_HEIST_BAG", "MISSFBI4LEADINOUTFBI_4_MCS_3", 1000f, 8f, 0, 1000f);
}

void func_763()//Position - 0x8546C
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	func_242(&(Global_96938.f_9[0]), 0, 1373.2456f, -2076.6614f, 50.9983f, 107.6638f, 0, 1, 0);
	__LIB_37__.func_495(0);
	func_528(Global_96938.f_9[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	func_242(&(Global_96938.f_9[1]), 1, 1372.592f, -2077.23f, 50.9983f, 310.9398f, 0, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_95(2));
	func_528(Global_96938.f_9[1], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_11__.func_318(Global_96938.f_9[1], Global_96938.f_42);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), 1377.2223f, -2082.2046f, 51.4064f, true, true, false);
	ENTITY::SET_ENTITY_HEADING(Global_96938.f_28[0], 20.96f);
	Var0 = { 1376.69f, -2082.761f, 51.05f };
	Var1 = { 0f, 0f, 117f };
	iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iVar2, "_LEADIN_LOOP_HEIST_BAG", "MISSFBI4LEADINOUTFBI_4_MCS_3", 1000f, 8f, 0, 1000f);
}

int func_816(int iParam0)//Position - 0x8AA56
{
	bool bVar0;
	int iVar1;
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return 0;
	}
	bVar0 = __LIB_20__.func_763(iParam0);
	if (!__LIB_0__.func_317(bVar0))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97772[iVar1]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97772[iVar1], false))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Global_97772[iVar1], false))
				{
					return 1;
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_819()//Position - 0x8AB10
{
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("trash"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("towtruck"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("p_ld_heist_bag_s_1"));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_6__.func_793(2, 1));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_12__.func_95(0));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_12__.func_95(1));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("towtruck"));
	__LIB_34__.func_979(&(Global_96938.f_209), "MISSFBI4LEADINOUTFBI_4_MCS_3");
}

int func_824()//Position - 0x8ABB2
{
	if (!__LIB_10__.func_829(28) || __LIB_26__.func_574(28))
	{
		return 1;
	}
	return 0;
}

int func_829()//Position - 0x8AFD1
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(194, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (10f * 10f) || __LIB_9__.func_488(28))
		{
			if (__LIB_11__.func_92(iLocal_1108) >= func_831())
			{
				return 1;
			}
			else if (!iLocal_1109)
			{
				__LIB_4__.func_67("AM_H_FBIPCASH" /* GXT: $~1~ needed to purchase items. */, func_831(), 10000);
				iLocal_1109 = 1;
			}
		}
	}
	return 0;
}

int func_831()//Position - 0x8B06E
{
	int iVar0;
	iVar0 = (__LIB_11__.func_92(iLocal_1108) - 315);
	if (iVar0 < 0)
	{
		iVar0 = 315;
	}
	return iVar0;
}

void func_835()//Position - 0x8B0B0
{
	switch (__LIB_26__.func_499())
	{
		case 0:
			iLocal_1108 = 0;
			break;
		case 1:
			iLocal_1108 = 1;
			break;
		case 2:
			iLocal_1108 = 2;
			break;
	}
	iLocal_1109 = 0;
}

void func_839()//Position - 0x8B105
{
	__LIB_1__.func_285(28);
}

int func_844()//Position - 0x8B146
{
	if (!__LIB_10__.func_829(21) || __LIB_26__.func_574(21))
	{
		return 1;
	}
	return 0;
}

int func_845()//Position - 0x8B169
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(193, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (10f * 10f))
		{
			if (__LIB_11__.func_92(iLocal_1106) >= func_846())
			{
				return 1;
			}
			else if (!iLocal_1107)
			{
				__LIB_4__.func_67("AM_H_FBIPCASH" /* GXT: $~1~ needed to purchase items. */, func_846(), 10000);
				iLocal_1107 = 1;
			}
		}
	}
	return 0;
}

int func_846()//Position - 0x8B1DD
{
	int iVar0;
	iVar0 = MISC::ABSI((__LIB_11__.func_92(iLocal_1106) - 300));
	return iVar0;
}

void func_849()//Position - 0x8B21E
{
	switch (__LIB_26__.func_499())
	{
		case 0:
			iLocal_1106 = 0;
			break;
		case 1:
			iLocal_1106 = 1;
			break;
		case 2:
			iLocal_1106 = 2;
			break;
	}
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-1333.4307f, -1280.8969f, 11.48874f, -1337.8104f, -1286.4054f, 2.83855f, false, true, true, true);
	iLocal_1107 = 0;
}

void func_853()//Position - 0x8B29F
{
	__LIB_1__.func_285(21);
}

void func_854()//Position - 0x8B2AD
{
	func_855();
}

void func_855()//Position - 0x8B2B9
{
	bool bVar0;
	func_898();
	if (iLocal_1079 == 0)
	{
		func_887();
		switch (iLocal_1083)
		{
			case 0:
				if (func_879(&bVar0))
				{
					__LIB_6__.func_760(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &Local_1085);
					Local_1097 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					fLocal_1098 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
					Local_1099 = { Local_1097 };
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, true);
					Global_96938[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (bVar0)
					{
						iLocal_1083 = 3;
					}
					else
					{
						HUD::CLEAR_HELP(true);
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
						{
							__LIB_0__.func_151("AM_H_FBIC8A", 7500);
						}
						else
						{
							__LIB_0__.func_151("AM_H_FBIC8B", 7500);
						}
						iLocal_1083 = 1;
					}
				}
				else if (func_860())
				{
					Local_1099 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					Local_1097 = { Local_1099 };
					iLocal_1083 = 2;
				}
				break;
			case 1:
				func_859();
				if (func_860())
				{
					Local_1099 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					__LIB_0__.func_402(0, -1);
					iLocal_1083 = 3;
				}
				break;
			case 2:
				func_856();
				if (func_879(&bVar0))
				{
					__LIB_6__.func_760(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &Local_1085);
					Local_1097 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					fLocal_1098 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true, true);
					Global_96938[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					HUD::CLEAR_HELP(true);
					iLocal_1083 = 3;
				}
				break;
			case 3:
				break;
			}
	}
}

void func_856()//Position - 0x8B43F
{
	if (!OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("PICKUP_WEAPON_PETROLCAN"), Local_1097, 10f))
	{
		iLocal_1083 = 0;
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(true);
		}
		if (iLocal_1083 == 1)
		{
			__LIB_0__.func_151("AM_H_FBIC11A", 7500);
		}
		else
		{
			__LIB_0__.func_151("AM_H_FBIC11B", 7500);
		}
	}
	else if (__LIB_0__.func_405("AM_H_FBIC11A", 0, 0) || __LIB_0__.func_405("AM_H_FBIC11B", 0, 0))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_859()//Position - 0x8B56F
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= ((100f - 10f) * (100f - 10f)))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96938[0], false))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_96938[0], true), Local_1097) >= 625f)
				{
					iLocal_1083 = 0;
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_96938[0], true), Local_1097) >= 100f)
				{
					if (iLocal_1083 == 2)
					{
						__LIB_0__.func_151("AM_H_FBIC10A", 7500);
					}
					else
					{
						__LIB_0__.func_151("AM_H_FBIC10B", 7500);
					}
				}
				else if (__LIB_0__.func_405("AM_H_FBIC10A", 0, 0) || __LIB_0__.func_405("AM_H_FBIC10B", 0, 0))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
		else if (iLocal_1083 == 1)
		{
			iLocal_1083 = 0;
		}
	}
}

int func_860()//Position - 0x8B660
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	bool bVar9;
	int iVar10;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("PICKUP_WEAPON_PETROLCAN"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f))
		{
			if (!iLocal_1084)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
				{
					if (__LIB_26__.func_499() == 0)
					{
						sVar0 = "AM_H_FBIC1E";
					}
					else
					{
						sVar0 = "AM_H_FBIC1F";
					}
					switch (__LIB_11__.func_512(sVar0))
					{
						case 2:
							__LIB_18__.func_203(sVar0, 2, 0, -1, 7500, 7, 0, 0, 0);
							break;
						case 1:
							iLocal_1084 = 1;
							break;
						}
				}
			}
			else if (iLocal_1083 == 1)
			{
				if (__LIB_0__.func_77(0))
				{
					func_871(1);
					bVar4 = __LIB_26__.func_499();
					if (bVar4 == 0)
					{
						iVar1 = 0;
						sVar2 = "MICHAEL";
						sVar3 = "FBI_3_MDRPJA";
						iVar5 = 9;
					}
					else if (bVar4 == 1)
					{
						iVar1 = 1;
						sVar2 = "FRANKLIN";
						sVar3 = "FBI_3_FDRPJA";
						iVar5 = 9;
					}
					else if (bVar4 == 2)
					{
						iVar1 = 2;
						sVar2 = "TREVOR";
						sVar3 = "FBI_3_TDRPJA";
						iVar5 = 8;
					}
					if (__LIB_12__.func_54(0))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
						{
							__LIB_0__.func_203(&(Global_96938.f_44), iVar1, PLAYER::PLAYER_PED_ID(), sVar2, 0, 1);
							if (func_867(iVar5, sVar3))
							{
								return 1;
							}
						}
					}
					else if (__LIB_12__.func_54(2))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
						{
							__LIB_0__.func_203(&(Global_96938.f_44), iVar1, PLAYER::PLAYER_PED_ID(), sVar2, 0, 1);
							if (func_867(iVar5, sVar3))
							{
								return 1;
							}
						}
					}
					else if (__LIB_12__.func_54(1))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
						{
							__LIB_0__.func_203(&(Global_96938.f_44), iVar1, PLAYER::PLAYER_PED_ID(), sVar2, 0, 1);
							if (func_867(iVar5, sVar3))
							{
								return 1;
							}
						}
					}
				}
			}
			else if (__LIB_0__.func_77(0))
			{
				bVar9 = __LIB_26__.func_499();
				if (bVar9 == 0)
				{
					iVar6 = 0;
					sVar7 = "MICHAEL";
					sVar8 = "FBI_3_MDRPJ";
					iVar10 = 9;
				}
				else if (bVar9 == 1)
				{
					iVar6 = 1;
					sVar7 = "FRANKLIN";
					sVar8 = "FBI_3_FDRPJ";
					iVar10 = 9;
				}
				else if (bVar9 == 2)
				{
					iVar6 = 2;
					sVar7 = "TREVOR";
					sVar8 = "FBI_3_TDRPJ";
					iVar10 = 8;
				}
				if (__LIB_12__.func_54(0))
				{
					if (func_861(0))
					{
						__LIB_0__.func_203(&(Global_96938.f_44), iVar6, PLAYER::PLAYER_PED_ID(), sVar7, 0, 1);
						if (func_867(iVar10, sVar8))
						{
							return 1;
						}
					}
				}
				else if (__LIB_12__.func_54(2))
				{
					if (func_861(0))
					{
						__LIB_0__.func_203(&(Global_96938.f_44), iVar6, PLAYER::PLAYER_PED_ID(), sVar7, 0, 1);
						if (func_867(iVar10, sVar8))
						{
							return 1;
						}
					}
				}
				else if (__LIB_12__.func_54(1))
				{
					if (func_861(0))
					{
						__LIB_0__.func_203(&(Global_96938.f_44), iVar6, PLAYER::PLAYER_PED_ID(), sVar7, 0, 1);
						if (func_867(iVar10, sVar8))
						{
							return 1;
						}
					}
				}
			}
		}
		else
		{
			iLocal_1084 = 0;
		}
	}
	return 0;
}

int func_861(bool bParam0)//Position - 0x8B94F
{
	struct<3> Var0;
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var4;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if (func_866(bParam0))
		{
			if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
			{
				bVar2 = true;
				if (bParam0)
				{
					iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					bVar2 = false;
				}
				else
				{
					iVar1 = PLAYER::PLAYER_PED_ID();
				}
				if (!MISC::IS_POSITION_OCCUPIED(Var0, 2f, false, true, bVar2, false, false, iVar1, false))
				{
					if (bParam0)
					{
						if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false, false))
						{
							__LIB_0__.func_151("AM_H_FBIC5", 10000);
							return 0;
						}
						Var3 = { ENTITY::GET_ENTITY_ROTATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2) };
						if (Var3.f_0 >= 10f || Var3.f_0 <= -10f)
						{
							__LIB_0__.func_151("AM_H_FBIC5A", 10000);
							return 0;
						}
						else if (Var3.f_1 >= 10f || Var3.f_1 <= -10f)
						{
							__LIB_0__.func_151("AM_H_FBIC5B", 10000);
							return 0;
						}
						if (ENTITY::IS_ENTITY_UPSIDEDOWN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							__LIB_0__.func_151("AM_H_FBIC7", 10000);
							return 0;
						}
					}
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var4, 0, 3f, 0f))
					{
						if (!func_863())
						{
							if (!func_862())
							{
								if (SYSTEM::VDIST2(Var0, Var4) >= 100f)
								{
									return 1;
								}
								else
								{
									__LIB_0__.func_151("AM_H_FBIC6", 10000);
								}
							}
						}
						else
						{
							__LIB_0__.func_151("AM_H_FBIC4", 10000);
						}
					}
					else
					{
						return 1;
					}
				}
				else
				{
					__LIB_0__.func_151("AM_H_FBIC5", 10000);
				}
			}
			else
			{
				__LIB_0__.func_151("AM_H_FBIC3", 10000);
			}
		}
	}
	return 0;
}

int func_862()//Position - 0x8BAF2
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 855.72577f, -2344.4907f, 29.33145f) <= 52900f)
	{
		__LIB_0__.func_151("AM_H_FBIC6A", 10000);
		return 1;
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1383.2102f, -2068.0198f, 51.87057f) <= 28900f)
	{
		__LIB_0__.func_151("AM_H_FBIC6B", 10000);
		return 1;
	}
	return 0;
}

int func_863()//Position - 0x8BB68
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_6__.func_815(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0);
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Global_95479[iVar0 /*10*/].f_3);
	if (fVar1 <= 10000f)
	{
		return 1;
	}
	return 0;
}

int func_866(bool bParam0)//Position - 0x8BC51
{
	if (bParam0)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_867(int iParam0, char* sParam1)//Position - 0x8BC87
{
	if (func_869(&(Global_96938.f_44), iParam0, 0, sLocal_1101, sParam1, 9, 1, 0, 0, 0))
	{
		if (__LIB_0__.func_405("AM_H_FBIC3", 0, 0))
		{
			HUD::CLEAR_HELP(true);
		}
		__LIB_12__.func_62(192, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		return 1;
	}
	return 0;
}

bool func_869(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x8BD20
{
	__LIB_0__.func_391(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_7454 = iParam2;
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21619 = 0;
	Global_21610 = 1;
	Global_21657 = 0;
	Global_21659 = 0;
	if (iParam6 == 1)
	{
		Global_21617 = 1;
	}
	else
	{
		Global_21617 = 0;
	}
	Global_2883585 = 0;
	return __LIB_36__.func_55(sParam4, iParam5, bParam9);
}

void func_871(bool bParam0)//Position - 0x8BDD1
{
	if (bParam0)
	{
		if (__LIB_26__.func_499() == 0)
		{
			__LIB_12__.func_85("AM_H_FBIC9");
			__LIB_12__.func_84("AM_H_FBIC9");
		}
		else if (__LIB_26__.func_499() == 1)
		{
			__LIB_12__.func_83("AM_H_FBIC9");
		}
		else
		{
			__LIB_12__.func_83("AM_H_FBIC9");
		}
	}
	else if (__LIB_26__.func_499() == 0)
	{
		__LIB_12__.func_81();
		__LIB_12__.func_80();
	}
	else if (__LIB_26__.func_499() == 1)
	{
		__LIB_12__.func_82();
	}
	else
	{
		__LIB_12__.func_82();
	}
}

int func_879(bool bParam0)//Position - 0x8BED9
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	char* sVar11;
	char* sVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	char* sVar16;
	char* sVar17;
	bool bVar18;
	int iVar19;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (iLocal_1102)
				{
					if (iLocal_1083 == 2)
					{
						if (!iLocal_1103)
						{
							if (func_882())
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
								{
									iLocal_1103 = 1;
									func_871(iLocal_1103);
								}
								else
								{
									iLocal_1103 = 0;
									func_871(iLocal_1103);
								}
							}
						}
						else if (__LIB_20__.func_750())
						{
							if (OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("PICKUP_WEAPON_PETROLCAN"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f))
							{
								*bParam0 = 1;
								bVar3 = __LIB_26__.func_499();
								if (bVar3 == 0)
								{
									iVar0 = 0;
									sVar1 = "MICHAEL";
									sVar2 = "FBI_3_MDRPCA";
									iVar4 = 5;
								}
								else if (bVar3 == 1)
								{
									iVar0 = 1;
									sVar1 = "FRANKLIN";
									sVar2 = "FBI_3_FDRPCA";
									iVar4 = 9;
								}
								else if (bVar3 == 2)
								{
									iVar0 = 2;
									sVar1 = "TREVOR";
									sVar2 = "FBI_3_TDRPCA";
									iVar4 = 8;
								}
								if (__LIB_12__.func_54(0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
									{
										__LIB_0__.func_203(&(Global_96938.f_44), iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
										if (func_867(iVar4, sVar2))
										{
											return 1;
										}
									}
								}
								else if (__LIB_12__.func_54(2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
									{
										__LIB_0__.func_203(&(Global_96938.f_44), iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
										if (func_867(iVar4, sVar2))
										{
											return 1;
										}
									}
								}
								else if (__LIB_12__.func_54(1))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
									{
										__LIB_0__.func_203(&(Global_96938.f_44), iVar0, PLAYER::PLAYER_PED_ID(), sVar1, 0, 1);
										if (func_867(iVar4, sVar2))
										{
											return 1;
										}
									}
								}
							}
							else
							{
								*bParam0 = 0;
								bVar8 = __LIB_26__.func_499();
								if (bVar8 == 0)
								{
									iVar5 = 0;
									sVar6 = "MICHAEL";
									sVar7 = "FBI_3_MDRPCA";
									iVar9 = 5;
								}
								else if (bVar8 == 1)
								{
									iVar5 = 1;
									sVar6 = "FRANKLIN";
									sVar7 = "FBI_3_FDRPCA";
									iVar9 = 9;
								}
								else if (bVar8 == 2)
								{
									iVar5 = 2;
									sVar6 = "TREVOR";
									sVar7 = "FBI_3_TDRPCA";
									iVar9 = 8;
								}
								if (__LIB_12__.func_54(0))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
									{
										__LIB_0__.func_203(&(Global_96938.f_44), iVar5, PLAYER::PLAYER_PED_ID(), sVar6, 0, 1);
										if (func_867(iVar9, sVar7))
										{
											return 1;
										}
									}
								}
								else if (__LIB_12__.func_54(2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
									{
										__LIB_0__.func_203(&(Global_96938.f_44), iVar5, PLAYER::PLAYER_PED_ID(), sVar6, 0, 1);
										if (func_867(iVar9, sVar7))
										{
											return 1;
										}
									}
								}
								else if (__LIB_12__.func_54(1))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) <= 100f)
									{
										__LIB_0__.func_203(&(Global_96938.f_44), iVar5, PLAYER::PLAYER_PED_ID(), sVar6, 0, 1);
										if (func_867(iVar9, sVar7))
										{
											return 1;
										}
									}
								}
							}
						}
					}
					else if (!iLocal_1103)
					{
						if (func_882())
						{
							if (func_861(1))
							{
								Local_1105 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
								iLocal_1103 = 1;
								func_871(iLocal_1103);
							}
						}
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1105) <= 25f)
					{
						if (__LIB_20__.func_750())
						{
							if (OBJECT::DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(joaat("PICKUP_WEAPON_PETROLCAN"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f))
							{
								*bParam0 = 1;
								bVar13 = __LIB_26__.func_499();
								if (bVar13 == 0)
								{
									iVar10 = 0;
									sVar11 = "MICHAEL";
									sVar12 = "FBI_3_MDRPCA";
									iVar14 = 5;
								}
								else if (bVar13 == 1)
								{
									iVar10 = 1;
									sVar11 = "FRANKLIN";
									sVar12 = "FBI_3_FDRPCA";
									iVar14 = 9;
								}
								else if (bVar13 == 2)
								{
									iVar10 = 2;
									sVar11 = "TREVOR";
									sVar12 = "FBI_3_TDRPCA";
									iVar14 = 8;
								}
								if (__LIB_12__.func_54(0))
								{
									__LIB_0__.func_203(&(Global_96938.f_44), iVar10, PLAYER::PLAYER_PED_ID(), sVar11, 0, 1);
									if (func_867(iVar14, sVar12))
									{
										return 1;
									}
								}
								else if (__LIB_12__.func_54(2))
								{
									__LIB_0__.func_203(&(Global_96938.f_44), iVar10, PLAYER::PLAYER_PED_ID(), sVar11, 0, 1);
									if (func_867(iVar14, sVar12))
									{
										return 1;
									}
								}
								else if (__LIB_12__.func_54(1))
								{
									__LIB_0__.func_203(&(Global_96938.f_44), iVar10, PLAYER::PLAYER_PED_ID(), sVar11, 0, 1);
									if (func_867(iVar14, sVar12))
									{
										return 1;
									}
								}
							}
							else
							{
								*bParam0 = 0;
								bVar18 = __LIB_26__.func_499();
								if (bVar18 == 0)
								{
									iVar15 = 0;
									sVar16 = "MICHAEL";
									sVar17 = "FBI_3_MDRPC";
									iVar19 = 5;
								}
								else if (bVar18 == 1)
								{
									iVar15 = 1;
									sVar16 = "FRANKLIN";
									sVar17 = "FBI_3_FDRPC";
									iVar19 = 9;
								}
								else if (bVar18 == 2)
								{
									iVar15 = 2;
									sVar16 = "TREVOR";
									sVar17 = "FBI_3_TDRPC";
									iVar19 = 8;
								}
								if (__LIB_12__.func_54(0))
								{
									__LIB_0__.func_203(&(Global_96938.f_44), iVar15, PLAYER::PLAYER_PED_ID(), sVar16, 0, 1);
									if (func_867(iVar19, sVar17))
									{
										return 1;
									}
								}
								else if (__LIB_12__.func_54(2))
								{
									__LIB_0__.func_203(&(Global_96938.f_44), iVar15, PLAYER::PLAYER_PED_ID(), sVar16, 0, 1);
									if (func_867(iVar19, sVar17))
									{
										return 1;
									}
								}
								else if (__LIB_12__.func_54(1))
								{
									__LIB_0__.func_203(&(Global_96938.f_44), iVar15, PLAYER::PLAYER_PED_ID(), sVar16, 0, 1);
									if (func_867(iVar19, sVar17))
									{
										return 1;
									}
								}
							}
						}
						else
						{
							iLocal_1103 = 0;
							func_871(iLocal_1103);
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_882()//Position - 0x8C472
{
	int iVar0;
	if (__LIB_20__.func_750())
	{
		iVar0 = __LIB_20__.func_749();
		if ((iVar0 == 0 || iVar0 == 2) || iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_887()//Position - 0x8C5EB
{
	char* sVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!Global_96938.f_357)
		{
			if (iLocal_1083 != 1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_891())
				{
					if (!__LIB_12__.func_71())
					{
						func_889();
						if (__LIB_26__.func_499() == 0)
						{
							sVar0 = "AM_H_FBIC1A" /* GXT: This area is unsuitable for the getaway vehicle. Find a more discreet location. */;
						}
						else
						{
							sVar0 = "AM_H_FBIC1B" /* GXT: The getaway vehicle cannot be placed while meeting a friend. */;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
						{
							if (func_888(sVar0, 2, 0, 2000, 10000))
							{
								Global_96938.f_357 = 1;
							}
						}
					}
					else
					{
						iLocal_1102 = 0;
						Global_96938.f_357 = 1;
					}
				}
				else if (!bLocal_1104)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1100))
					{
						if (func_888(sLocal_1100, 2, 0, 2000, 10000))
						{
							Global_96938.f_357 = 1;
						}
					}
				}
				else
				{
					Global_96938.f_357 = 1;
				}
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			Local_1082 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			iLocal_1102 = 0;
			Global_96938.f_357 = 0;
		}
	}
}

int func_888(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8C6E3
{
	switch (__LIB_11__.func_512(sParam0))
	{
		case 2:
			__LIB_18__.func_203(sParam0, iParam1, iParam2, iParam3, iParam4, 7, 0, 0, 0);
			break;
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_889()//Position - 0x8C71F
{
	if (!__LIB_0__.func_78(Local_1081, 0f, 0f, 0f, 0))
	{
		if (__LIB_0__.func_394(Local_1082, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, 0))
		{
			return;
		}
	}
	Local_1081 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
}

int func_891()//Position - 0x8C7C3
{
	if (func_897() && func_892())
	{
		iLocal_1102 = 1;
	}
	else
	{
		iLocal_1102 = 0;
	}
	return iLocal_1102;
}

int func_892()//Position - 0x8C7E9
{
	if (func_895() && !func_893())
	{
		return 1;
	}
	return 0;
}

int func_893()//Position - 0x8C807
{
	struct<60> Var0;
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	__LIB_6__.func_760(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &Var0);
	if (func_894(0, &Var0))
	{
		sLocal_1100 = "AM_H_FBIC2A";
		return 1;
	}
	else if (func_894(1, &Var0))
	{
		sLocal_1100 = "AM_H_FBIC2B";
		return 1;
	}
	else if (func_894(2, &Var0))
	{
		sLocal_1100 = "AM_H_FBIC2C";
		return 1;
	}
	return 0;
}

int func_894(bool bParam0, var uParam1)//Position - 0x8C877
{
	struct<82> Var0;
	if (!__LIB_0__.func_317(bParam0))
	{
		return 0;
	}
	if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam0 /*98*/] != 0)
	{
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam0 /*98*/] == uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam0 /*98*/].f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam0 /*98*/] != 0)
	{
		if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam0 /*98*/] == uParam1->f_66 && MISC::GET_HASH_KEY(&(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam0 /*98*/].f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	Var0.f_11 = 12;
	Var0.f_31 = 49;
	Var0.f_81 = 2;
	__LIB_0__.func_321(bParam0, &Var0, 1);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	__LIB_0__.func_321(bParam0, &Var0, 2);
	if (Var0.f_0 != 0)
	{
		if (Var0.f_0 == uParam1->f_66 && MISC::GET_HASH_KEY(&(Var0.f_27)) == MISC::GET_HASH_KEY(&(uParam1->f_1)))
		{
			return 1;
		}
	}
	return 0;
}

int func_895()//Position - 0x8C9D1
{
	int iVar0;
	iVar0 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
	if (!func_896(iVar0))
	{
		if (VEHICLE::GET_VEHICLE_MODEL_ACCELERATION(iVar0) > 0.165f && VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(iVar0) > 31f)
		{
			return 1;
		}
	}
	sLocal_1100 = "AM_H_FBIC2";
	return 0;
}

int func_896(int iParam0)//Position - 0x8CA1F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iLocal_1080[iVar0] == iParam0)
		{
			if (iVar0 == 0 && !__LIB_0__.func_176(33))
			{
				bLocal_1104 = true;
			}
			else if (iVar0 == 1 && !__LIB_0__.func_176(34))
			{
				bLocal_1104 = true;
			}
			else
			{
				bLocal_1104 = false;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_897()//Position - 0x8CA82
{
	if ((((PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return 1;
}

void func_898()//Position - 0x8CAD2
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iLocal_1083 != 1)
	{
		switch (iLocal_1079)
		{
			case 0:
				if (__LIB_0__.func_405("AM_H_FBICWANT", 0, 0))
				{
					HUD::CLEAR_HELP(true);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					HUD::CLEAR_HELP(true);
					iLocal_1079 = 1;
				}
				break;
			case 1:
				if (!func_888("AM_H_FBICWANT", 2, 0, 2000, 10000))
				{
					iLocal_1079 = 2;
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_1079 = 0;
				}
				break;
			case 2:
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iLocal_1079 = 0;
				}
				break;
			}
	}
}

void func_899()//Position - 0x8CB77
{
	func_855();
}

int func_902()//Position - 0x8CB95
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(192, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (10f * 10f))
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			return VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck"));
		}
	}
	return 0;
}

void func_903()//Position - 0x8CC01
{
	var uVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_96938[iVar2], false))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_96938[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96938[iVar2], false))
						{
							if (iLocal_1083 == 1)
							{
								iLocal_1083 = 0;
							}
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_96938[iVar2]));
						}
						else
						{
							VEHICLE::DELETE_VEHICLE(&(Global_96938[iVar2]));
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[iVar2], false))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_96938.f_28[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						OBJECT::DELETE_OBJECT(&(Global_96938.f_28[iVar2]));
					}
				}
			}
		}
		iVar2++;
	}
	Global_96938.f_357 = 0;
}

void func_904()//Position - 0x8CCFF
{
	var uVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_96938[iVar2], false))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_96938[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_96938[iVar2]));
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_28[iVar2], false))
			{
				sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_96938.f_28[iVar2], &uVar0);
				if (!MISC::IS_STRING_NULL(sVar1))
				{
					if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_96938.f_28[iVar2]));
					}
				}
			}
		}
		iVar2++;
	}
	Global_96938.f_357 = 0;
}

void func_905()//Position - 0x8CDCF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		if (!__LIB_0__.func_78(0f, 0f, 0f, Local_1097, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1097) >= 100f && iLocal_1083 == 1)
			{
				Global_96938[0] = VEHICLE::CREATE_VEHICLE(Local_1085.f_66, Local_1097, fLocal_1098, true, true, false);
				__LIB_24__.func_999(Global_96938[0], &Local_1085, 0, 1);
			}
		}
	}
	if (!__LIB_0__.func_78(0f, 0f, 0f, Local_1099, 0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_1099) >= 100f && iLocal_1083 == 2)
		{
			Global_96938.f_28[0] = OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_WEAPON_PETROLCAN"), Local_1099, true, 0);
		}
	}
}

int func_923()//Position - 0x8D921
{
	if (iLocal_1083 == 1)
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_1085.f_66))
		{
			return 1;
		}
	}
	else if (iLocal_1083 == 2)
	{
		return 1;
	}
	return 0;
}

void func_924()//Position - 0x8D94F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1085.f_66);
}

void func_925()//Position - 0x8D960
{
	if (iLocal_1083 == 1)
	{
		STREAMING::REQUEST_MODEL(Local_1085.f_66);
	}
	else if (iLocal_1083 == 2)
	{
	}
}

void func_926()//Position - 0x8D982
{
	char* sVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_891())
			{
				Local_1081 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (__LIB_26__.func_499() == 0)
				{
					sVar0 = "AM_H_FBIC1A" /* GXT: This area is unsuitable for the getaway vehicle. Find a more discreet location. */;
				}
				else
				{
					sVar0 = "AM_H_FBIC1B" /* GXT: The getaway vehicle cannot be placed while meeting a friend. */;
				}
				__LIB_18__.func_203(sVar0, 2, 0, 2000, 7500, 7, 0, 0, 0);
				if (__LIB_11__.func_512(sVar0) == 1)
				{
					Global_96938.f_357 = 1;
				}
			}
		}
		else
		{
			Global_96938.f_357 = 0;
		}
	}
	iLocal_1080[0] = joaat("trash");
	iLocal_1080[1] = joaat("towtruck");
	iLocal_1084 = 0;
	__LIB_30__.func_342(joaat("WEAPON_PETROLCAN"));
	Local_1105 = { 0f, 0f, 0f };
	iLocal_1103 = 0;
	iLocal_1102 = 0;
	func_871(0);
}

void func_929()//Position - 0x8DA4E
{
	func_930();
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
	{
		PED::SET_PED_CAPSULE(Global_96938.f_9[0], 0.1f);
	}
}

void func_930()//Position - 0x8DA90
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	while (bVar0 < 3)
	{
		iVar1 = func_936(bVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!func_935(iVar1))
			{
				if (func_934(iVar1, 0))
				{
					if (func_933(iVar1))
					{
						if (func_932(iVar1, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							TASK::CLEAR_PED_TASKS(iVar1);
						}
					}
				}
			}
			else if (func_933(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, false), -401.4687f, -2168.1863f, 9.3184f, 4, 20f, 786469, 2f, 10f, true);
				}
			}
			else
			{
				func_931(iVar1);
			}
		}
		bVar0++;
	}
}

int func_931(int iParam0)//Position - 0x8DB69
{
	bool bVar0;
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__.func_763(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_936(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_96295, bVar0);
		return 1;
	}
	return 0;
}

int func_932(int iParam0, int iParam1)//Position - 0x8DBBE
{
	bool bVar0;
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__.func_763(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_936(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			MISC::SET_BIT(&Global_96295, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_933(int iParam0)//Position - 0x8DC3F
{
	if (!__LIB_0__.func_198())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iParam0, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), false)) && !ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), -401.4687f, -2168.1863f, 9.3184f, 2f, 2f, 2f, false, true, 0))
			{
				if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, false), false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iParam0, false), -1, false) == iParam0)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_934(int iParam0, int iParam1)//Position - 0x8DCE5
{
	bool bVar0;
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__.func_763(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_936(bVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_935(int iParam0)//Position - 0x8DD3E
{
	bool bVar0;
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_20__.func_763(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (func_936(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_936(bool bParam0)//Position - 0x8DD84
{
	if (bParam0 > 3)
	{
		return 0;
	}
	if (bParam0 == __LIB_26__.func_499())
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return Global_97919[__LIB_0__.func_386(bParam0)];
}

int func_939()//Position - 0x8DDE9
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(191, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (75f * 75f))
		{
			func_942();
			iLocal_1078 = 1;
			if (!HUD::DOES_BLIP_EXIST(iLocal_1077))
			{
				iLocal_1077 = __LIB_6__.func_825(Global_96938[0], 0, 0);
			}
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			func_942();
			iLocal_1078 = 1;
			return VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck"));
		}
	}
	return 0;
}

void func_942()//Position - 0x8DF37
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	while (bVar0 < 3)
	{
		iVar1 = func_936(bVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_935(iVar1))
			{
				func_931(iVar1);
			}
		}
		bVar0++;
	}
}

void func_943()//Position - 0x8DF73
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_30__.func_324(&(Global_96938[iVar0]));
		__LIB_40__.func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	if (!iLocal_1078)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
}

void func_944()//Position - 0x8DFC3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_30__.func_307(&(Global_96938[iVar0]));
		__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	if (!iLocal_1078)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), false);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
}

void func_945()//Position - 0x8E013
{
	struct<3> Var0;
	Var0 = { Global_32338[191 /*23*/][0 /*3*/] };
	MISC::CLEAR_AREA(Var0, 30f, true, true, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), Var0, 83.9445f, true, true, false);
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("peyote"), -412.3477f, -2176.2617f, 9.3184f, 281.0786f, true, true, false);
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("ruiner"), -386.5059f, -2168.7383f, 9.3184f, 87.2085f, true, true, false);
	Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("S_M_M_Trucker_01"), -409.72052f, -2175.8582f, 9.31836f, 121.7754f, true, true);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_96938.f_9[0]);
	if (((((ENTITY::DOES_ENTITY_EXIST(Global_96938[0]) && !ENTITY::IS_ENTITY_DEAD(Global_96938[0], false)) && ENTITY::DOES_ENTITY_EXIST(Global_96938[1])) && !ENTITY::IS_ENTITY_DEAD(Global_96938[1], false)) && ENTITY::DOES_ENTITY_EXIST(Global_96938[2])) && !ENTITY::IS_ENTITY_DEAD(Global_96938[2], false))
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_96938[1], 4, false, false);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_96938[1], 100f);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[1], 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Global_96938[1], 0, true, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]) && !ENTITY::IS_ENTITY_DEAD(Global_96938[1], false))
		{
			TASK::TASK_PLAY_ANIM_ADVANCED(Global_96938.f_9[0], "mini@repair", "fixing_a_ped", ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_96938[1], Local_1076), 0f, 0f, -ENTITY::GET_ENTITY_HEADING(Global_96938[1]), 1000f, -1.5f, -1, 1, 0f, 2, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
		}
		PED::SET_PED_CAPSULE(Global_96938.f_9[0], 0.1f);
	}
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-417.19797f, -2155.8857f, 8.36266f, -383.49078f, -2188.5115f, 12.9213f, false, true, true, true);
}

void func_948()//Position - 0x8E27A
{
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("towtruck"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("peyote"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("ruiner"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("S_M_M_Trucker_01"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("A_F_M_Tourist_01"));
	__LIB_34__.func_979(&(Global_96938.f_209), "mini@repair");
}

void func_949()//Position - 0x8E2DC
{
	iLocal_1078 = 0;
}

void func_950()//Position - 0x8E2E8
{
	switch (iLocal_1075)
	{
		case 0:
			TASK::REQUEST_WAYPOINT_RECORDING("FBI4_P1_BlipRoute1");
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("FBI4_P1_BlipRoute1"))
			{
				Local_1073 = { __LIB_30__.func_343(190, "FBI4_P1_BlipRoute1", 0.5f, 0) };
				iLocal_1075 = 1;
			}
			break;
		case 1:
			if (!__LIB_37__.func_440(&Local_1073))
			{
				iLocal_1075 = 0;
			}
			break;
	}
}

void func_956()//Position - 0x8E51E
{
	func_958();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false) && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
	{
		if (!__LIB_37__.func_440(&Local_1073))
		{
			Local_1073 = { __LIB_30__.func_344(190, Global_96938[0]) };
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
}

void func_958()//Position - 0x8E5A4
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	bVar0 = false;
	while (bVar0 < 3)
	{
		iVar1 = func_936(bVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!func_935(iVar1))
			{
				if (func_934(iVar1, 0))
				{
					if (func_933(iVar1))
					{
						if (func_932(iVar1, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
							TASK::CLEAR_PED_TASKS(iVar1);
						}
					}
				}
			}
			else if (func_933(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
				{
					Var2 = { __LIB_30__.func_321(190, 0) };
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, false), Var2, 4, 20f, 786469, 2f, 10f, true);
				}
			}
			else
			{
				func_931(iVar1);
			}
		}
		bVar0++;
	}
}

int func_961()//Position - 0x8E72C
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
		{
			Local_1073 = { __LIB_30__.func_343(190, "FBI4_P1_BlipRoute1", 0.5f, -1) };
			return 1;
		}
	}
	return 0;
}

int func_962()//Position - 0x8E76D
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(190, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (fVar1 < (110f * 110f))
			{
				func_963();
				iLocal_1074 = 1;
				__LIB_6__.func_825(Global_96938[0], 0, 0);
				return 1;
			}
		}
		else if (fVar1 < (75f * 75f))
		{
			func_963();
			iLocal_1074 = 1;
			__LIB_6__.func_825(Global_96938[0], 0, 0);
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			func_963();
			iLocal_1074 = 1;
			return VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("trash"));
		}
	}
	return 0;
}

void func_963()//Position - 0x8E830
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	while (bVar0 < 3)
	{
		iVar1 = func_936(bVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (func_935(iVar1))
			{
				func_931(iVar1);
			}
		}
		bVar0++;
	}
}

void func_964()//Position - 0x8E86C
{
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	__LIB_40__.func_657(&(Global_96938.f_9[1]));
	__LIB_30__.func_324(&(Global_96938[0]));
	if (!iLocal_1074)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), false);
	}
	Local_1073 = { __LIB_30__.func_343(190, "FBI4_P1_BlipRoute1", 0.5f, -1) };
}

void func_965()//Position - 0x8E8C0
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
		{
			__LIB_40__.func_656(&(Global_96938.f_9[0]), Global_96938[0]);
		}
		else
		{
			__LIB_39__.func_460(&(Global_96938.f_9[0]));
		}
	}
	if (!iLocal_1074)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("trash"), false);
	}
	__LIB_30__.func_307(&(Global_96938[0]));
	__LIB_39__.func_460(&(Global_96938.f_9[1]));
}

void func_967()//Position - 0x8EA34
{
	struct<3> Var0;
	MISC::CLEAR_AREA(Global_32338[190 /*23*/][0 /*3*/], 33.4375f, true, false, false, false);
	TASK::WAYPOINT_RECORDING_GET_COORD("FBI4_P1_BlipRoute1", Local_1073.f_3 + 1, &Var0);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("trash"), Global_32338[190 /*23*/][0 /*3*/], func_968(Global_32338[190 /*23*/][0 /*3*/], Var0), true, true, false);
	Global_96938.f_9[0] = PED::CREATE_PED_INSIDE_VEHICLE(Global_96938[0], 26, joaat("S_M_Y_Garbage"), -1, true, true);
	Global_96938.f_9[1] = PED::CREATE_PED_INSIDE_VEHICLE(Global_96938[0], 26, joaat("S_M_Y_Garbage"), 0, true, true);
	TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_96938.f_9[0], Global_96938[0], "FBI4_P1_BlipRoute1", 786599, Local_1073.f_3 + 1, 0, -1, -1f, false, 2f);
	Local_1073 = { __LIB_30__.func_344(190, Global_96938[0]) };
}

float func_968(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x8EB1A
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar1 = (Param2.f_0 - Param0.f_0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	fVar0 = (fVar0 * -1f);
	return fVar0;
}

int func_969()//Position - 0x8EB68
{
	if (__LIB_37__.func_436(&(Global_96938.f_209)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("FBI4_P1_BlipRoute1"))
	{
		return 1;
	}
	return 0;
}

void func_971()//Position - 0x8EBA3
{
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("trash"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("S_M_Y_Garbage"));
}

void func_972()//Position - 0x8EBC9
{
	iLocal_1074 = 0;
}

void func_974()//Position - 0x8EBDD
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_1071)
		{
			case 0:
				func_981();
				break;
			case 1:
				func_980();
				break;
			case 2:
				func_975();
				break;
			}
	}
}

void func_975()//Position - 0x8EC20
{
	bool bVar0;
	func_978();
	bVar0 = __LIB_26__.func_499();
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1403.8003f, -2085.1462f, 50.99826f, 1387.0518f, -2065.7327f, 90.99826f, 23f, false, true, 0))
	{
		if (!iLocal_1068)
		{
			if (__LIB_26__.func_499() != 0)
			{
				Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(1391.657f, -2073.055f, 51.624f, 0f, 0f, 40.32f, 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_96938.f_358, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Global_96938.f_358, true);
				func_977(Global_96938.f_358, bVar0);
				if (bVar0 == 2)
				{
					func_976(Global_96938.f_358, "fbi_4_int_trv_react_mic");
				}
				else if (bVar0 == 1)
				{
					func_976(Global_96938.f_358, "fbi_4_int_fra_react_mic");
				}
				iLocal_1068 = 1;
			}
			else
			{
				iLocal_1068 = 1;
			}
		}
		else if (__LIB_26__.func_499() != 0)
		{
			if (__LIB_26__.func_499() == 1)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1070) > 10300)
				{
					iLocal_1071 = 3;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1070) > 5300 && !__LIB_0__.func_75())
			{
				iLocal_1071 = 3;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1069) > 2000)
		{
			iLocal_1071 = 3;
		}
	}
}

void func_976(int iParam0, char* sParam1)//Position - 0x8ED4D
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[3]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iParam0, "missfbi4leadinoutfbi_4_int", sParam1, 1.5f, -1.5f, 0, 0, 1000f, 0);
		}
	}
}

void func_977(int iParam0, bool bParam1)//Position - 0x8ED9E
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (bParam1 == 0)
	{
		return;
	}
	else if (bParam1 == 1)
	{
		sVar0 = "fbi_4_int_fra_react_andreas";
		sVar1 = "fbi_4_int_fra_react_dave";
		sVar2 = "fbi_4_int_fra_react_steve";
	}
	else if (bParam1 == 2)
	{
		sVar0 = "fbi_4_int_trv_react_andreas";
		sVar1 = "fbi_4_int_trv_react_dave";
		sVar2 = "fbi_4_int_trv_react_steve";
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iParam0, "missfbi4leadinoutfbi_4_int", sVar0, 1.5f, -1.5f, 0, 0, 1000f, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iParam0, "missfbi4leadinoutfbi_4_int", sVar1, 1.5f, -1.5f, 0, 0, 1000f, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[2]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iParam0, "missfbi4leadinoutfbi_4_int", sVar2, 1.5f, -1.5f, 0, 0, 1000f, 0);
		}
	}
}

void func_978()//Position - 0x8EEC6
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_979())
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[1], 0f, 0f, 0f, true, 60000, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1063);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1064);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1065);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1066);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_1067);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				iLocal_1069 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
		}
	}
}

int func_979()//Position - 0x8EF3D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_96938.f_9[iVar0] != PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_980()//Position - 0x8EF8F
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	char* sVar5;
	bVar0 = __LIB_26__.func_499();
	Var1 = { __LIB_30__.func_321(189, 0) };
	fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1);
	fVar3 = 20.08f;
	fVar4 = 20.08f;
	if (bVar0 != 0)
	{
		if (!Global_96938.f_357)
		{
			if (fVar2 < ((fVar3 + fVar3) * (fVar3 + fVar3)))
			{
				if (bVar0 == 2)
				{
					__LIB_0__.func_203(&(Global_96938.f_44), 0, Global_96938.f_9[3], "MICHAEL", 0, 1);
					__LIB_0__.func_203(&(Global_96938.f_44), 3, Global_96938.f_9[2], "STEVE", 0, 1);
					sVar5 = "fbi4_INT_LIT";
				}
				else
				{
					__LIB_0__.func_203(&(Global_96938.f_44), 2, Global_96938.f_9[4], "TREVOR", 0, 1);
					iLocal_1070 = MISC::GET_GAME_TIMER();
					sVar5 = "fbi4_INT_LIF";
				}
				Global_96938.f_357 = __LIB_36__.func_92(&(Global_96938.f_44), "HeatAud", sVar5, 9, 0, 0, 0);
			}
		}
		else if (!__LIB_0__.func_75())
		{
			iLocal_1071 = 3;
			return;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1403.8003f, -2085.1462f, 50.99826f, 1383.056f, -2060.0806f, 90.99826f, 24f, false, true, 0))
		{
			if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				func_978();
				__LIB_34__.func_977();
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_1071 = 2;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, -1, 0.25f, 0, 40000f);
				}
			}
		}
		else if (fVar2 > ((fVar4 + fVar4) * (fVar4 + fVar4)))
		{
			Global_96938.f_357 = 0;
			__LIB_0__.func_296();
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1403.8003f, -2085.1462f, 50.99826f, 1383.056f, -2061.0806f, 90.99826f, 23f, false, true, 0))
	{
		if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_978();
			__LIB_34__.func_977();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_1071 = 2;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Var1, 1f, -1, 0.25f, 0, 40000f);
			}
		}
	}
}

void func_981()//Position - 0x8F1A1
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(189, 0) };
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
	if (fVar1 < (75f * 75f))
	{
		iLocal_1071 = 1;
	}
}

int func_983()//Position - 0x8F1E5
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BULLET_IN_AREA(1393.9646f, -2070.8108f, 50.99826f, 50f, false) || MISC::IS_PROJECTILE_IN_AREA(1402.2544f, -2045.8083f, 50f, 1377.4329f, -2106.0068f, 100f, false))
		{
			func_987();
			func_984();
			return 1;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (Global_96938.f_9[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Global_96938.f_9[iVar0]))
							{
								func_987();
								func_984();
								return 1;
							}
						}
					}
				}
				iVar0++;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			Var2 = { __LIB_30__.func_321(189, 0) };
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
			{
				fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar1, true), Var2);
				if (fVar3 < 64f)
				{
					func_987();
					func_984();
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_984()//Position - 0x8F2FF
{
	CAM::STOP_GAMEPLAY_HINT(false);
	if (__LIB_0__.func_75())
	{
		__LIB_6__.func_771();
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
}

void func_987()//Position - 0x8F35A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_96938.f_9[iVar0] != PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(Global_96938.f_9[iVar0], PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					PED::SET_PED_KEEP_TASK(Global_96938.f_9[iVar0], true);
				}
			}
		}
		iVar0++;
	}
}

int func_988()//Position - 0x8F3D1
{
	struct<3> Var0;
	float fVar1;
	if (__LIB_0__.func_317(__LIB_26__.func_499()))
	{
		if (BitTest(Global_91229[32 /*34*/].f_11, __LIB_26__.func_499()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { __LIB_30__.func_321(189, 0) };
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1411.4734f, -2050.9285f, 49.99822f, 1352.3453f, -2098.8347f, 80.99826f, 30f, false, true, 0))
					{
						if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
						{
							return 1;
						}
					}
					fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
					if (__LIB_26__.func_499() == 1)
					{
						if (fVar1 < 4f)
						{
							__LIB_6__.func_771();
							return 1;
						}
					}
					else if (__LIB_26__.func_499() == 2)
					{
						if (fVar1 < 16f)
						{
							__LIB_6__.func_771();
							return 1;
						}
					}
					else if (fVar1 < 36f)
					{
						__LIB_6__.func_771();
						return 1;
					}
					if (iLocal_1071 == 3)
					{
						__LIB_6__.func_771();
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_989()//Position - 0x8F4D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_30__.func_324(&(Global_96938[1]));
	__LIB_30__.func_308(&(Global_96938.f_28[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_30__.func_330();
}

void func_990()//Position - 0x8F52E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_30__.func_307(&(Global_96938[1]));
	__LIB_30__.func_308(&(Global_96938.f_28[0]));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_30__.func_330();
}

void func_991()//Position - 0x8F587
{
	bool bVar0;
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	MISC::CLEAR_AREA(1382.6375f, -2073.6797f, 50.9988f, 40f, true, false, false, false);
	bVar0 = __LIB_26__.func_499();
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(1257.3236f, -2170.5015f, 40.5466f, 1510.186f, -1965.2948f, 75.6541f, false, true, true, true);
	if (bVar0 == 0)
	{
		func_999(1);
	}
	else
	{
		func_999(0);
	}
	switch (bVar0)
	{
		case 0:
			func_998(bVar0);
			break;
		case 1:
			func_996(bVar0);
			break;
		case 2:
			func_993(bVar0);
			break;
	}
	__LIB_34__.func_978(32, "FBI_4_INT", 0, 120, 126);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
	{
		__LIB_34__.func_985(32, "steve_FBI", Global_96938.f_9[2]);
		__LIB_30__.func_361(32, "steve_FBI", 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
	{
		__LIB_34__.func_985(32, "michael", Global_96938.f_9[3]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
	{
		__LIB_34__.func_985(32, "trevor", Global_96938.f_9[4]);
	}
}

void func_993(bool bParam0)//Position - 0x8F73F
{
	func_995(bParam0);
	func_994(0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_95(2));
}

void func_994(bool bParam0)//Position - 0x8F75B
{
	char* sVar0;
	if (bParam0)
	{
		sVar0 = "fbi_4_int_fra_idle_mic";
	}
	else
	{
		sVar0 = "fbi_4_int_trv_idle_mic";
	}
	func_242(&(Global_96938.f_9[3]), 0, 1982.1981f, 3818.9526f, 31.4232f, 215.9222f, 0, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_95(0));
	__LIB_11__.func_318(Global_96938.f_9[3], Global_96938.f_42);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], Global_96938.f_358, "missfbi4leadinoutfbi_4_int", sVar0, 1000f, -8f, 1, 0, 1000f, 0);
}

void func_995(int iParam0)//Position - 0x8F7E8
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	if (iParam0 == 0)
	{
		Var0 = { 1390.9557f, -2072.5435f, 51.989666f };
		Var1 = { 0f, 0f, 40.32f };
		Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		iVar2 = Global_96938.f_358;
	}
	else
	{
		Var0 = { 1391.657f, -2073.055f, 51.624f };
		Var1 = { 0f, 0f, 40.32f };
		Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
		iVar2 = Global_96938.f_358;
	}
	sVar3 = "missfbi4leadinoutfbi_4_int";
	if (iParam0 == 0)
	{
		sVar4 = "AGENTS_IDLE_A_ANDREAS";
		sVar5 = "AGENTS_IDLE_A_DAVE";
		sVar6 = "AGENTS_IDLE_B_STEVE";
	}
	else if (iParam0 == 1)
	{
		sVar4 = "fbi_4_int_fra_idle_andreas";
		sVar5 = "fbi_4_int_fra_idle_dave";
		sVar6 = "fbi_4_int_fra_idle_steve";
	}
	else if (iParam0 == 2)
	{
		sVar4 = "fbi_4_int_trv_idle_andreas";
		sVar5 = "fbi_4_int_trv_idle_dave";
		sVar6 = "fbi_4_int_trv_idle_steve";
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar2, sVar3, sVar4, 1000f, -8f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
		}
	}
	if (iParam0 == 0)
	{
		Var0 = { 1392.979f, -2071.985f, 52.01f };
		Var1 = { 0f, 0f, 26f };
		iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iVar2, sVar3, sVar5, 1000f, -8f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
		}
	}
	if (iParam0 == 0)
	{
		Var0 = { 1393.279f, -2069.735f, 52.01f };
		Var1 = { 0f, 0f, 33f };
		iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[2]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iVar2, sVar3, sVar6, 1000f, -8f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
		}
	}
}

void func_996(bool bParam0)//Position - 0x8FA1A
{
	func_995(bParam0);
	func_994(1);
	func_997();
}

void func_997()//Position - 0x8FA31
{
	func_242(&(Global_96938.f_9[4]), 2, 1982.1981f, 3818.9526f, 31.4232f, 215.9222f, 0, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_95(2));
	__LIB_11__.func_318(Global_96938.f_9[4], Global_96938.f_42);
	iLocal_1072 = PED::CREATE_SYNCHRONIZED_SCENE(1391.657f, -2073.055f, 51.624f, 0f, 0f, 40.32f, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[4], iLocal_1072, "missfbi4leadinoutfbi_4_int", "fbi_4_int_fra_idle_trv", 1000f, -1000f, 1, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1072, true);
	while (!__LIB_41__.func_654(&(Global_96938[1]), 2, 1382.4999f, -2068.988f, 51.967495f, 13.785377f, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Global_96938[1], 2);
		}
	}
}

void func_998(bool bParam0)//Position - 0x8FB24
{
	func_995(bParam0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_95(0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__.func_95(2));
}

void func_999(bool bParam0)//Position - 0x8FB44
{
	func_587(&(Global_96938.f_9[0]), 67, 1390.1227f, -2070.5527f, 51.0074f, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(67));
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	func_587(&(Global_96938.f_9[1]), 30, 1392.2704f, -2071.4844f, 51.0172f, 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(30));
	__LIB_11__.func_318(Global_96938.f_9[1], Global_96938.f_42);
	if (bParam0)
	{
		Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_player_phone_01"), PED::GET_PED_BONE_COORDS(Global_96938.f_9[1], 28422, 0f, 0f, 0f), true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[1], PED::GET_PED_BONE_INDEX(Global_96938.f_9[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
	}
	func_587(&(Global_96938.f_9[2]), 23, 1393.0402f, -2069.2317f, 51.0114f, 0, 1);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[2], 10, 1, 0, 0);
	PED::SET_PED_PROP_INDEX(Global_96938.f_9[2], 1, 0, 0, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(23));
	__LIB_11__.func_318(Global_96938.f_9[2], Global_96938.f_42);
}

void func_1002()//Position - 0x8FCE2
{
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_12__.func_95(0));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_12__.func_95(2));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_149(67));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_149(30));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_149(23));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("prop_player_phone_01"));
	__LIB_34__.func_979(&(Global_96938.f_209), "missfbi4leadinoutfbi_4_int");
}

void func_1003()//Position - 0x8FD56
{
	Global_96938.f_357 = 0;
	iLocal_1071 = 0;
}

int func_1008()//Position - 0x8FD8C
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(187, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			if (STREAMING::STREAMVOL_IS_VALID(iLocal_1062))
			{
				STREAMING::STREAMVOL_DELETE(iLocal_1062);
			}
			return 1;
		}
	}
	return 0;
}

void func_1009()//Position - 0x8FDE5
{
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_1062))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("FBI2" /* GXT: FIB */)) == 0)
		{
			STREAMING::STREAMVOL_DELETE(iLocal_1062);
		}
	}
}

void func_1010()//Position - 0x8FE0F
{
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_1062))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_1062);
	}
}

void func_1011()//Position - 0x8FE28
{
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_1062))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_1062);
	}
	iLocal_1062 = STREAMING::STREAMVOL_CREATE_FRUSTUM(60.9f, -753.7f, 46f, __LIB_2__.func_162(5.8f, 0f, -75f), 300f, 12, 127);
}

void func_1018()//Position - 0x8FEC4
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	if (!BitTest(iLocal_1061, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (BitTest(Global_91229[29 /*34*/].f_11, __LIB_26__.func_499()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fVar1 = SYSTEM::VDIST2(Var0, -443.2148f, 1060.2468f, 326.6808f);
				fVar2 = SYSTEM::VDIST2(Var0, -438.8461f, 1059.5204f, 326.6808f);
				fVar3 = (fVar1 - fVar2);
				if (fVar3 > 0.5f)
				{
					if (BitTest(iLocal_1061, 1))
					{
						__LIB_30__.func_330();
						MISC::CLEAR_BIT(&iLocal_1061, 1);
					}
					if (!BitTest(iLocal_1061, 2))
					{
						if (!Global_78336)
						{
							__LIB_34__.func_978(29, "FBI_1_INT", 61, -1, -1);
							MISC::SET_BIT(&iLocal_1061, 2);
						}
					}
				}
				else if (fVar3 < -0.5f)
				{
					if (BitTest(iLocal_1061, 2))
					{
						__LIB_30__.func_330();
						MISC::CLEAR_BIT(&iLocal_1061, 2);
					}
					if (!BitTest(iLocal_1061, 1))
					{
						if (!Global_78336)
						{
							__LIB_34__.func_978(29, "FBI_1_INT", 62, -1, -1);
							MISC::SET_BIT(&iLocal_1061, 1);
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -453.36423f, 1075.7722f, 326.6713f, -428.4899f, 1065.004f, 331.18213f, 21.25f, false, true, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true);
					if (iVar4 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -453.78198f, 1067.3912f, 326.4316f, -440.046f, 1060.741f, 331.11703f, 6.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -442.65677f, 1059.9452f, 326.43222f, -432.55603f, 1062.5363f, 331.24246f, 6.25f, false, true, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1060))
							{
								iLocal_1060 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1058, Local_1059, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1060, "MISSFBI1LEADINOUT", "FBI_1_INT_LEADIN_ACTION_DAVEN", 8f, -1000f, 1, 16, 1000f, 0);
								__LIB_34__.func_977();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								if (BitTest(iLocal_1061, 1))
								{
									sVar5 = "FIB1_LEADINA";
								}
								else
								{
									sVar5 = "FIB1_LEADINB";
								}
								iVar6 = 0;
								iVar7 = 0;
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sVar5, &iVar7);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sVar5, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar6);
								if (iVar6 < (iVar7 - 1))
								{
									iVar6++;
								}
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), sVar5, iVar6, 517, -1);
								if (BitTest(iLocal_1061, 1))
								{
									__LIB_10__.func_617(&(Global_96938.f_44), "FBI1AUD", "FBI1_INTL", 9, 0, 0);
								}
								MISC::SET_BIT(&iLocal_1061, 0);
							}
						}
					}
				}
				if (BitTest(iLocal_1061, 0))
				{
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
						{
							CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
							CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, 13000, 2000, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_FOV(30f);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.46f);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
							if (BitTest(iLocal_1061, 2))
							{
								CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.8f);
							}
							else
							{
								CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.02f);
							}
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
						}
					}
					else
					{
						CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
					}
				}
			}
		}
	}
}

int func_1021()//Position - 0x9026C
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			if (PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
			{
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(-448.89362f, 1064.199f, 326.43817f, -433.11972f, 1061.9073f, 330.68558f, 8.5f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -448.89362f, 1064.199f, 326.43817f, -433.11972f, 1061.9073f, 330.68558f, 8.5f))
	{
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		return 1;
	}
	return 0;
}

int func_1022()//Position - 0x9034B
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (BitTest(iLocal_1061, 0))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1060))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1060) > 0.8f)
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = true;
		}
		if (BitTest(iLocal_1061, 2))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
					if (fVar1 < 25f)
					{
						bVar0 = true;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!__LIB_0__.func_75())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
				{
					PED::SET_PED_KEEP_TASK(Global_96938.f_9[0], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_96938.f_9[0]));
			}
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			__LIB_40__.func_662();
			return 1;
		}
	}
	return 0;
}

void func_1023()//Position - 0x9042E
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	if (Global_96938.f_358 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_96938.f_358);
	}
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	__LIB_0__.func_202(&(Global_96938.f_44), 0);
	__LIB_0__.func_202(&(Global_96938.f_44), 8);
	__LIB_30__.func_330();
}

void func_1024()//Position - 0x90483
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::CLEAR_PED_NON_CREATION_AREA();
	if (Global_96938.f_358 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(Global_96938.f_358);
	}
	__LIB_39__.func_460(&(Global_96938.f_9[0]));
	__LIB_0__.func_202(&(Global_96938.f_44), 0);
	__LIB_0__.func_202(&(Global_96938.f_44), 8);
	__LIB_30__.func_330();
}

void func_1025()//Position - 0x904D8
{
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA((-440.41226f - 20f), (1073.8848f - 15.75f), (327.1169f - 2f), (-440.41226f + 20f), (1073.8848f + 15.75f), (327.1169f + 2f), false, true, true, true);
	PED::SET_PED_NON_CREATION_AREA((-440.41226f - 20f), (1073.8848f - 15.75f), (327.1169f - 2f), (-440.41226f + 20f), (1073.8848f + 15.75f), (327.1169f + 2f));
	Global_96938.f_358 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-440.41226f, 1073.8848f, 327.1169f, 35f, 27.625f, 3.2f, 0f, false, 7);
	MISC::CLEAR_AREA(-436.8515f, 1059.04f, 326.6815f, 20f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	func_587(&(Global_96938.f_9[0]), 30, -436.8515f, 1059.04f, 326.6815f, 0f, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(30));
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	iLocal_1060 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1058, Local_1059, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1060, true);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1060, "MISSFBI1LEADINOUT", "FBI_1_INT_LEADIN_LOOP_DAVEN", 1000f, -8f, 1, 16, 1000f, 0);
	__LIB_0__.func_203(&(Global_96938.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	__LIB_0__.func_203(&(Global_96938.f_44), 8, Global_96938.f_9[0], "DAVE", 0, 1);
}

void func_1028()//Position - 0x906AA
{
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_149(30));
	__LIB_34__.func_979(&(Global_96938.f_209), "MISSFBI1LEADINOUT");
	func_695(&(Global_96938.f_209), "FIB1_LEADINA");
	func_695(&(Global_96938.f_209), "FIB1_LEADINB");
}

void func_1029()//Position - 0x906EF
{
	iLocal_1060 = 0;
	iLocal_1061 = 0;
	Global_96938.f_358 = -1;
}

int func_1034()//Position - 0x90729
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__.func_321(184, 0) };
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

int func_1046()//Position - 0x907D4
{
	struct<3> Var0;
	float fVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_26__.func_499() == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.1922f, 179.03253f, 71.59528f, -799.4782f, 187.51361f, 75.85547f, 6f, false, true, 0))
			{
				return 1;
			}
		}
		else if (__LIB_26__.func_499() == 2)
		{
			Var0 = { __LIB_30__.func_321(183, __LIB_26__.func_499()) };
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (7.5f * 7.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1057()//Position - 0x908B5
{
	if ((((func_1058(Global_96938.f_9[0], 0) || func_1058(Global_96938.f_9[1], 1)) || func_1058(Global_96938.f_9[2], 2)) || func_1058(Global_96938.f_9[3], 3)) || func_1058(Global_96938.f_9[4], 4))
	{
		return 1;
	}
	return 0;
}

int func_1058(int iParam0, bool bParam1)//Position - 0x90923
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
		else if (!BitTest(iLocal_514, bParam1))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
			{
				MISC::SET_BIT(&iLocal_514, bParam1);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_1059()//Position - 0x9097D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1993.0688f, 3057.7773f, 46.056694f, 1990.4944f, 3053.4006f, 48.715355f, 6f, false, true, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 55 /*INPUT_DIVE*/, true);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		if (!BitTest(iLocal_514, 5))
		{
			if (SYSTEM::VDIST2(__LIB_30__.func_321(176, 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 625f)
			{
				__LIB_34__.func_978(13, "CHINESE_2_INT", -1, -1, 0);
				MISC::SET_BIT(&iLocal_514, 5);
			}
		}
		if (iLocal_509 > 0)
		{
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f);
		}
		switch (iLocal_509)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1989.2075f, 3053.5693f, 45.5903f, 1989.9329f, 3051.354f, 48.340218f, 1.25f, false, true, 0))
				{
					if ((((!PED::IS_PED_INJURED(Global_96938.f_9[0]) && !PED::IS_PED_INJURED(Global_96938.f_9[1])) && !PED::IS_PED_INJURED(Global_96938.f_9[2])) && !PED::IS_PED_INJURED(Global_96938.f_9[3])) && !PED::IS_PED_INJURED(Global_96938.f_9[4]))
					{
						iLocal_511 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
						iLocal_512 = PED::CREATE_SYNCHRONIZED_SCENE(1986.938f, 3052.2f, 46.251f, 0f, 0f, 57.6f, 2);
						iLocal_513 = PED::CREATE_SYNCHRONIZED_SCENE(1987.151f, 3052.476f, 46.214f, 0f, 0f, 57.6f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_511, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 4f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_512, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_old_a", 4f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_513, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_old_b", 4f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iLocal_511, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_transl", 4f, -1000f, 0, 0, 1000f, 0);
						__LIB_34__.func_977();
					}
					iLocal_509++;
					iLocal_510 = MISC::GET_GAME_TIMER() + 1200;
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1988.0812f, 3055.0308f, 45.777798f, 1986.8313f, 3052.9734f, 48.84019f, 1f, false, true, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
				if (MISC::GET_GAME_TIMER() > iLocal_510)
				{
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_511);
					return 1;
				}
				break;
			default:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) == 1f)
					{
						AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_511);
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

void func_1060()//Position - 0x90C5D
{
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	__LIB_40__.func_657(&(Global_96938.f_9[1]));
	__LIB_40__.func_657(&(Global_96938.f_9[2]));
	__LIB_40__.func_657(&(Global_96938.f_9[3]));
	__LIB_40__.func_657(&(Global_96938.f_9[4]));
	iLocal_509 = 0;
	iLocal_510 = 0;
	iLocal_511 = 999;
	iLocal_514 = 0;
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__.func_330();
}

void func_1061()//Position - 0x90CD1
{
	__LIB_39__.func_464(&(Global_96938.f_9[0]));
	__LIB_39__.func_460(&(Global_96938.f_9[1]));
	__LIB_39__.func_460(&(Global_96938.f_9[2]));
	__LIB_39__.func_460(&(Global_96938.f_9[3]));
	__LIB_39__.func_460(&(Global_96938.f_9[4]));
	iLocal_509 = 0;
	iLocal_510 = 0;
	iLocal_511 = 999;
	iLocal_514 = 0;
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__.func_330();
}

void func_1063()//Position - 0x90DE8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	iLocal_509 = 0;
	iLocal_510 = 0;
	iLocal_511 = 999;
	MISC::CLEAR_AREA(1985.9707f, 3052.4753f, 46.2152f, 6f, true, false, false, false);
	Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("IG_Janet"), 1985.6656f, 3052.6606f, 46.2151f, 0f, true, true);
	Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("IG_Old_Man1A"), 1985.6656f, 3052.6606f, 46.2151f, 0f, true, true);
	Global_96938.f_9[2] = PED::CREATE_PED(26, joaat("IG_Old_Man2"), 1985.6656f, 3052.6606f, 46.2151f, 0f, true, true);
	Global_96938.f_9[3] = PED::CREATE_PED(26, joaat("IG_TaosTranslator"), 1985.6656f, 3052.6606f, 46.2151f, 0f, true, true);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
	{
		__LIB_30__.func_340(Global_96938.f_9[4]);
	}
	MISC::CLEAR_BIT(&iLocal_514, 0);
	MISC::CLEAR_BIT(&iLocal_514, 1);
	MISC::CLEAR_BIT(&iLocal_514, 2);
	MISC::CLEAR_BIT(&iLocal_514, 3);
	MISC::CLEAR_BIT(&iLocal_514, 4);
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	__LIB_11__.func_318(Global_96938.f_9[1], Global_96938.f_42);
	__LIB_11__.func_318(Global_96938.f_9[2], Global_96938.f_42);
	__LIB_11__.func_318(Global_96938.f_9[3], Global_96938.f_42);
	__LIB_11__.func_318(Global_96938.f_9[4], Global_96938.f_42);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[4], 9, 1, 0, 0);
	iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
	iVar1 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
	iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(1986.938f, 3052.2f, 46.251f, 0f, 0f, 57.6f, 2);
	iVar3 = PED::CREATE_SYNCHRONIZED_SCENE(1987.151f, 3052.476f, 46.214f, 0f, 0f, 57.6f, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar0, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_janet", 1000f, -1000f, 0, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iVar2, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_old_a", 1000f, -1000f, 0, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iVar3, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_old_b", 1000f, -1000f, 0, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iVar0, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_loop_transl", 1000f, -1000f, 0, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[4], iVar1, "MISSChinese2_crystalMazeMCS1_IG", "Dance_loop_tao", 1000f, -1000f, 0, 0, 1000f, 0);
	PED::SET_PED_PROP_INDEX(Global_96938.f_9[3], 1, 0, 1, false);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar1, true);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar3, true);
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(47.3957f, 3050.202f, 1987.606f) + Vector(12f, 12f, 12f), Vector(47.3957f, 3050.202f, 1987.606f) - Vector(12f, 12f, 12f), false, true, true, true);
	iLocal_509 = 0;
}

int func_1064()//Position - 0x9113B
{
	struct<3> Var0[1];
	struct<3> Var1[1];
	if (!__LIB_37__.func_436(&(Global_96938.f_209)))
	{
		return 0;
	}
	Var0[0 /*3*/].f_1 = -1;
	Var1[0 /*3*/].f_1 = -1;
	if (!func_744(&(Global_96938.f_9[4]), 21, 1985.6656f, 3052.6606f, 46.2151f, &Var0, &Var1))
	{
		return 0;
	}
	return 1;
}

void func_1065()//Position - 0x9119A
{
	__LIB_39__.func_456(&(Global_96938.f_209), 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
}

void func_1066()//Position - 0x911B8
{
	__LIB_34__.func_979(&(Global_96938.f_209), "MISSChinese2_crystalMazeMCS1_IG");
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Janet"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Old_Man2"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Old_Man1A"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_TaosTranslator"));
	__LIB_30__.func_336(&(Global_96938.f_209), __LIB_11__.func_149(21));
}

void func_1067()//Position - 0x9121B
{
	iLocal_509 = 0;
	iLocal_510 = 0;
	iLocal_511 = 999;
	iLocal_514 = 0;
}

void func_1069()//Position - 0x9123D
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1990.9f, 3054.3f, 47.5f, 2f, 2f, 2.5f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1989.53f, 3053.48f, 46.09f, 2039.93f, 3053.49f, 48.13f, 2.4f, false, true, 0))
		{
			if (CAM::IS_SPHERE_VISIBLE(1990.7969f, 3053.5515f, 47.402416f, 0.8f))
			{
				GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(1989.3f, 3053.5f, 47.9f, &fVar1, &fVar2);
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1989.4f, 3052.5f, 47.9f) < 4f || (MISC::ABSF((fVar1 - 0.5f)) < 0.1f && MISC::ABSF((fVar2 - 0.5f)) < 0.3f))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				}
			}
		}
		fVar3 = (CAM::REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() + 5f);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1990.9f, 3054.3f, 47.5f) < (fVar3 * fVar3))
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (!BitTest(iLocal_498, 4))
		{
			__LIB_34__.func_978(12, "CHINESE_1_INT", -1, -1, 0);
			MISC::SET_BIT(&iLocal_498, 4);
		}
		if (!BitTest(iLocal_498, 2))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1988.7122f, 3051.9934f, 46.218937f, 1989.821f, 3053.7168f, 48.715347f, 3.5f, false, true, 0))
			{
				if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CHINESE_1_INT_LEADIN", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[1], false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[1], false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[2], false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[3], false);
							ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[4], false);
							iLocal_501 = PED::CREATE_SYNCHRONIZED_SCENE(Local_505, Local_508, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_501, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "HUSB_LEADIN_ACTION", 1000f, -1.5f, 1, 16, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_501, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "RUSS_LEADIN_ACTION", 1000f, -1.5f, 1, 16, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[0], false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[1], false, false);
							__LIB_34__.func_977();
							if (AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_501))
							{
								MISC::SET_BIT(&iLocal_498, 3);
							}
							iLocal_500 = MISC::GET_GAME_TIMER();
							MISC::SET_BIT(&iLocal_498, 2);
						}
					}
				}
			}
		}
		else
		{
			if (!BitTest(iLocal_498, 8))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1988.1724f, 3053.6685f, 46.2153f, 1f, -1, 0.25f, 0, 47.3f);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 4000, 0, 2);
				MISC::SET_BIT(&iLocal_498, 8);
			}
			if (!BitTest(iLocal_498, 5))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_501))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_501) > 0.99f)
					{
						iLocal_501 = PED::CREATE_SYNCHRONIZED_SCENE(Local_505, Local_508, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_501, true);
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_501, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "HUSB_LEADIN_LOOP", 1.5f, -1000f, 1, 16, 1000f, 0);
							}
						}
						iLocal_502 = PED::CREATE_SYNCHRONIZED_SCENE(Local_505, Local_508, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_502, true);
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[1], false))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_502, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "RUSS_LEADIN_LOOP", 1.5f, -1000f, 1, 16, 1000f, 0);
							}
						}
						MISC::SET_BIT(&iLocal_498, 5);
					}
				}
			}
		}
		if (BitTest(iLocal_498, 4))
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Old_Man1A", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tao", 1, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Taos_Translator", 1, 0, 0, 0);
			}
		}
		if (!BitTest(iLocal_498, 0) && BitTest(iLocal_498, 2))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1986.2191f, 3056.1895f, 46.215336f, 1982.2838f, 3049.8684f, 49.464962f, 5.5f, false, true, 0) || ((MISC::GET_GAME_TIMER() - iLocal_500) > 2900 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1988.7122f, 3051.9934f, 46.218937f, 1989.821f, 3053.7168f, 48.715347f, 3.5f, false, true, 0)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[4], false))
					{
						__LIB_10__.func_617(&(Global_96938.f_44), "METHAUD", "CHIN_INTL", 9, 0, 0);
						iLocal_499 = MISC::GET_GAME_TIMER();
						MISC::SET_BIT(&iLocal_498, 0);
					}
				}
			}
		}
	}
}

int func_1071()//Position - 0x917AB
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < 5)
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
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(1986.2191f, 3056.1895f, 46.215336f, 1982.2838f, 3049.8684f, 49.464962f, 5.5f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1986.2191f, 3056.1895f, 46.215336f, 1982.2838f, 3049.8684f, 49.464962f, 5.5f))
	{
		return 1;
	}
	return 0;
}

int func_1072()//Position - 0x91872
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (BitTest(iLocal_498, 0))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_499) > 1200)
		{
			bVar0 = true;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar1]))
			{
				PED::SET_PED_KEEP_TASK(Global_96938.f_9[iVar1], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_96938.f_9[iVar1]));
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[iVar1]))
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_96938.f_28[iVar1]));
			}
			iVar1++;
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_501))
		{
			if (BitTest(iLocal_498, 3))
			{
				AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_501);
			}
		}
		PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
		func_1077();
		return 1;
	}
	return 0;
}

void func_1073()//Position - 0x91952
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		__LIB_40__.func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_30__.func_308(&(Global_96938.f_28[iVar0]));
		iVar0++;
	}
	if (BitTest(iLocal_498, 7))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-925491840, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-925491840, 0, false, true);
		MISC::CLEAR_BIT(&iLocal_498, 7);
	}
	__LIB_0__.func_202(&(Global_96938.f_44), 4);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_30__.func_330();
}

void func_1074()//Position - 0x919E4
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_39__.func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	__LIB_39__.func_464(&(Global_96938.f_9[4]));
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_30__.func_309(&(Global_96938.f_28[iVar0]));
		iVar0++;
	}
	if (BitTest(iLocal_498, 7))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-925491840, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-925491840, 0, false, true);
		MISC::CLEAR_BIT(&iLocal_498, 7);
	}
	__LIB_0__.func_202(&(Global_96938.f_44), 4);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__.func_330();
}

void func_1075()//Position - 0x91A83
{
	iLocal_498 = 0;
	iLocal_499 = -1;
	iLocal_500 = -1;
	iLocal_501 = 0;
	iLocal_502 = 0;
	iLocal_503 = 0;
	iLocal_504 = 0;
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(46.8556f, 3052.9048f, 1984.9971f) + Vector(2f, 5f, 5f), Vector(46.8556f, 3052.9048f, 1984.9971f) - Vector(2f, 5f, 5f), false, true, true, true);
	MISC::CLEAR_AREA(1984.1364f, 3051.9338f, 46.215084f, 5.5f, true, false, false, false);
	MISC::CLEAR_AREA(1991.0789f, 3047.3801f, 46.215122f, 5f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("IG_Josef"), 1990.4844f, 3047.2654f, 46.2151f, 55.6093f, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Josef"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], true);
	__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
	Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("IG_RussianDrunk"), 1989.1708f, 3048.335f, 46.2151f, 242.9991f, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_RussianDrunk"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[1], true);
	__LIB_11__.func_318(Global_96938.f_9[1], Global_96938.f_42);
	Global_96938.f_9[2] = PED::CREATE_PED(26, joaat("IG_Old_Man1A"), 1984.4114f, 3051.5398f, 46.2151f, 242.9991f, true, true);
	PED::SET_PED_PROP_INDEX(Global_96938.f_9[2], 0, 0, 0, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man1A"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[2], true);
	__LIB_11__.func_318(Global_96938.f_9[2], Global_96938.f_42);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_tumbler_01"), 1984.75f, 3053.25f, 47.33f, true, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[0], true);
	Global_96938.f_9[3] = PED::CREATE_PED(26, joaat("IG_Old_Man2"), 1984.4114f, 3051.5398f, 46.2151f, 242.9991f, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man2"));
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[3], true);
	__LIB_11__.func_318(Global_96938.f_9[3], Global_96938.f_42);
	Global_96938.f_9[4] = PED::CREATE_PED(26, joaat("IG_Janet"), 1982.5602f, 3053.4136f, 46.2151f, 242.9991f, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
	__LIB_11__.func_318(Global_96938.f_9[4], Global_96938.f_42);
	ENTITY::SET_ENTITY_COORDS(Global_96938.f_9[4], 1984.312f, 3054.372f, 46.24f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(Global_96938.f_9[4], -118.8f);
	iLocal_503 = PED::CREATE_SYNCHRONIZED_SCENE(Local_506, Local_508, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_503, true);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_503, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "OLDMAN1_LEADIN_LOOP", 1000f, -1000f, 1, 16, 1000f, 0);
	iLocal_504 = PED::CREATE_SYNCHRONIZED_SCENE(Local_507, Local_508, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_504, true);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[3], iLocal_504, "MISSCHINESE1LEADINOUTCHINESE_1_INT", "OLDMAN2_LEADIN_LOOP", 1000f, -1000f, 1, 16, 1000f, 0);
	TASK::TASK_PLAY_ANIM(Global_96938.f_9[4], "MISSCHINESE1LEADINOUTCHINESE_1_INT", "janet_leadin_outro_loop", 8f, -8f, -1, 9, 0f, false, false, false);
	TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[4], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
	OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("v_ilev_fh_door4"), 1988.3529f, 3054.4106f, 47.3204f, true, 0f, 0f, 1.175f);
	MISC::SET_BIT(&iLocal_498, 7);
	__LIB_0__.func_203(&(Global_96938.f_44), 4, Global_96938.f_9[4], "JANET", 0, 1);
}

int func_1076()//Position - 0x91E38
{
	if (!BitTest(iLocal_498, 1))
	{
		AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_POSITION("CHINESE_1_INT_LEADIN", 1986.4412f, 3052.1626f, 46.2152f);
		MISC::SET_BIT(&iLocal_498, 1);
	}
	if (__LIB_37__.func_436(&(Global_96938.f_209)) && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("CHINESE_1_INT_LEADIN", 0))
	{
		return 1;
	}
	return 0;
}

void func_1077()//Position - 0x91E8A
{
	__LIB_39__.func_456(&(Global_96938.f_209), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_0__.func_202(&(Global_96938.f_44), 4);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_501))
	{
		if (BitTest(iLocal_498, 3))
		{
			AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_501);
		}
	}
	else
	{
		iLocal_501 = PED::CREATE_SYNCHRONIZED_SCENE(Local_505, Local_508, 2);
		AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_501);
		AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_501);
	}
	if (BitTest(iLocal_498, 7))
	{
		OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-925491840, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-925491840, 0, false, true);
		MISC::CLEAR_BIT(&iLocal_498, 7);
	}
}

void func_1078()//Position - 0x91F22
{
	__LIB_34__.func_979(&(Global_96938.f_209), "MISSCHINESE1LEADINOUTCHINESE_1_INT");
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Old_Man2"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Old_Man1A"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Josef"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_RussianDrunk"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("IG_Janet"));
	__LIB_30__.func_336(&(Global_96938.f_209), joaat("prop_tumbler_01"));
}

void func_1079()//Position - 0x91F93
{
	iLocal_498 = 0;
	iLocal_499 = -1;
	iLocal_500 = -1;
	iLocal_501 = 0;
	iLocal_502 = 0;
	iLocal_503 = 0;
	iLocal_504 = 0;
}

void func_1081()//Position - 0x91FBF
{
	int iVar0;
	int iVar1;
	if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), 1980.2024f, 3816.3694f, 31.3084f, 1) < 4.875f)
	{
		iLocal_1811 = 1;
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	else if (iLocal_1811)
	{
		iLocal_1811 = 0;
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
	}
	switch (iLocal_1806)
	{
		case 0:
			if (func_587(&(Global_96938.f_9[0]), 24, 1973.317f, 3816.8462f, 32.4287f, 181.0048f, 1))
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_96938.f_9[0]);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 1, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 3, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 4, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 8, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 9, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 10, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 11, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(Global_96938.f_9[0], "misstrevor3leadinout", "trv_drive_ext_leadin_door_loop", 1000f, -8f, -1, 1, 0f, false, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
				iLocal_1806 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1980.7456f, 3814.7021f, 30.496077f, 1978.3198f, 3818.5168f, 34.57274f, 4.1875f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1980.0834f, 3814.5806f, 30.490093f, 1977.6204f, 3813.1892f, 34.42154f, 1.5625f, false, true, 0))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					iLocal_1810 = PED::CREATE_SYNCHRONIZED_SCENE(1973.938f, 3815.933f, 32.432f, 0f, 1.25f, 29.35f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1810, "misstrevor3leadinout", "trevor_dri_int_leadin_action_wade", 8f, -1000f, 5, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1810, 0.13f);
					__LIB_34__.func_977();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					if (__LIB_37__.func_438(PLAYER::PLAYER_PED_ID(), 1979.122f, 3816.031f, 31.281706f, 1979.8397f, 3816.4182f, 32.833157f, 1.625f))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1976.0795f, 3812.4873f, 21.041685f, 1980.7604f, 3814.9897f, 32.37143f, 1.625f, false, true, 0))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1980.047f, 3816.4116f, 31.2845f, 1f, 20000, 0.25f, 0, 40000f);
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "trv3_1", 0, 12, -1);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, Global_96938.f_9[0], 6000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_96938.f_9[0], -1);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					iLocal_1806 = 3;
					__LIB_0__.func_203(&(Global_96938.f_44), 2, Global_96938.f_9[0], "Wade", 0, 1);
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1973.0955f, 3813.914f, 31.549591f, 1977.1035f, 3816.118f, 35.049633f, 3.75f, false, true, 0))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					iLocal_1810 = PED::CREATE_SYNCHRONIZED_SCENE(1973.938f, 3815.933f, 32.432f, 0f, 1.25f, 29.35f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1810, "misstrevor3leadinout", "trevor_dri_int_leadin_action_wade", 8f, -1000f, 5, 0, 1000f, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_34__.func_977();
					iLocal_1806 = 4;
					__LIB_0__.func_203(&(Global_96938.f_44), 2, Global_96938.f_9[0], "Wade", 0, 1);
				}
			}
			break;
		case 3:
			if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 94f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 155f)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1810))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1810) > 0.37f)
					{
						if (__LIB_36__.func_92(&(Global_96938.f_44), "TRV3AUD", "TRV3_DRINT", 7, 1, 0, 0))
						{
							iLocal_1806 = 5;
						}
					}
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1810))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1810) > 0.37f)
					{
						if (__LIB_36__.func_92(&(Global_96938.f_44), "TRV3AUD", "TRV3_DRINT", 7, 1, 0, 0))
						{
							iLocal_1806 = 5;
						}
					}
				}
			}
			break;
		case 5:
			if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 94f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 155f)
			{
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1810))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_1809);
				iLocal_1805 = 1;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1810))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1810) >= 0.77f && func_1082())
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1809);
					iLocal_1805 = 1;
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1810) >= 0.99f)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1809);
					iLocal_1805 = 1;
				}
			}
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), 1972.7274f, 3813.0557f, 32.4245f, 0) < 1.3f)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_1809);
				iLocal_1805 = 1;
			}
			break;
	}
}

int func_1082()//Position - 0x92598
{
	if (!iLocal_1807)
	{
		if (__LIB_37__.func_438(Global_96938.f_9[0], 1970.0692f, 3813.558f, 30.769392f, 1971.1711f, 3811.6204f, 33.250465f, 1f))
		{
			iLocal_1808 = 0;
		}
		else
		{
			iLocal_1808 = 1;
		}
		iLocal_1807 = 1;
	}
	if (iLocal_1808)
	{
		return 1;
	}
	return 0;
}

int func_1089()//Position - 0x92A7D
{
	if (((FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1975.3187f, 3814.9197f, 32.436695f, 2.0625f) > 0 || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(1971.8367f, 3811.964f, 33.324936f, 2.0625f) > 0) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, 1973.499f, 3815.5928f, 32.5645f, 2f)) || (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && PED::IS_PED_INJURED(Global_96938.f_9[0])))
	{
		return 1;
	}
	return 0;
}

int func_1090()//Position - 0x92B07
{
	if (iLocal_1805)
	{
		return 1;
	}
	return 0;
}

void func_1091()//Position - 0x92B1A
{
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	iLocal_1805 = 0;
	iLocal_1806 = 0;
	__LIB_30__.func_330();
}

void func_1092()//Position - 0x92B3F
{
	__LIB_39__.func_460(&(Global_96938.f_9[0]));
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	iLocal_1805 = 0;
	iLocal_1807 = 0;
	iLocal_1808 = 0;
	iLocal_1806 = 0;
	__LIB_30__.func_330();
}

void func_1093()//Position - 0x92B6C
{
	iLocal_1805 = 0;
	iLocal_1807 = 0;
	iLocal_1808 = 0;
	iLocal_1806 = 0;
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(32.677f, 3814.013f, 1974.4551f) + Vector(7f, 7f, 7f), Vector(32.677f, 3814.013f, 1974.4551f) - Vector(7f, 7f, 7f), false, true, true, true);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("trv3_1", true, 0.7f, 1f);
	STREAMING::REQUEST_IPL("TrevorsTrailerCollision");
	__LIB_34__.func_978(64, "TREVOR_DRIVE_INT", -1, -1, 0);
}

int func_1094()//Position - 0x92BDA
{
	if (((STREAMING::HAS_ANIM_DICT_LOADED("misstrevor3leadinout") && STREAMING::HAS_MODEL_LOADED(joaat("CS_Wade"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("trv3_1")) && INTERIOR::IS_INTERIOR_READY(iLocal_1809))
	{
		return 1;
	}
	return 0;
}

void func_1095()//Position - 0x92C1B
{
	STREAMING::REMOVE_ANIM_DICT("misstrevor3leadinout");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CS_Wade"));
	TASK::REMOVE_WAYPOINT_RECORDING("trv3_1");
	INTERIOR::UNPIN_INTERIOR(iLocal_1809);
	STREAMING::REMOVE_IPL("TrevorsTrailerCollision");
	iLocal_1805 = 0;
	iLocal_1807 = 0;
	iLocal_1808 = 0;
	iLocal_1806 = 0;
}

void func_1096()//Position - 0x92C5E
{
	STREAMING::REQUEST_ANIM_DICT("misstrevor3leadinout");
	TASK::REQUEST_WAYPOINT_RECORDING("trv3_1");
	STREAMING::REQUEST_MODEL(joaat("CS_Wade"));
	iLocal_1809 = INTERIOR::GET_INTERIOR_AT_COORDS(1973.1918f, 3818.0334f, 32.4363f);
	INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1809);
}

void func_1099()//Position - 0x92CAE
{
	if (iLocal_1794 < 2)
	{
		if (iLocal_1798)
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1977.6947f, 3815.2766f, 33.646553f, 1979.0875f, 3816.1187f, 30.797792f, 2f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1966.7452f, 3797.721f, 30.729702f, 1949.7045f, 3827.0217f, 35.662704f, 30.25f, false, true, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(1973.8405f, 3814.0715f, 32.45993f, ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), true) < 15f)
					{
						iLocal_1795 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1792, Local_1793, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1795, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_idle", 4f, -4f, 1, 16, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1795, true);
						TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						iLocal_1798 = 0;
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1966.7452f, 3797.721f, 30.729702f, 1949.7045f, 3827.0217f, 35.662704f, 30.25f, false, true, 0))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					iLocal_1795 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1792, Local_1793, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1795, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_idle_slow", 4f, -4f, 1, 16, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1795, true);
					TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					iLocal_1798 = 1;
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1970.6849f, 3812.4077f, 29.38306f, 1978.9587f, 3817.2175f, 36.79403f, 5.5f, false, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1972.8711f, 3813.138f, 31.174492f, 1982.9641f, 3818.989f, 34.557182f, 3.75f, false, true, 0))
	{
		CAM::SET_GAMEPLAY_COORD_HINT(Local_1800, -1, 2000, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1801);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1802);
		CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1803);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
	}
	else
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
	}
	switch (iLocal_1794)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1957.9003f, 3808.9646f, 30.396786f, 1994.0852f, 3828.9233f, 36.731987f, 26.75f, false, true, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				iLocal_1794++;
			}
			break;
		case 1:
			if (iLocal_1797 == 0)
			{
				if (__LIB_36__.func_92(&uLocal_1627, "T2AUD", "TR2_INT_LI1", 8, 0, 0, 0))
				{
					iLocal_1797 = 1;
					iLocal_1804 = MISC::GET_GAME_TIMER();
				}
			}
			else if (__LIB_0__.func_479(&iLocal_1804, MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000)))
			{
				iLocal_1797 = 0;
			}
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1977.6947f, 3815.2766f, 33.646553f, 1979.0875f, 3816.1187f, 30.797792f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1971.3213f, 3812.474f, 32.03806f, 1977.0334f, 3815.691f, 34.674175f, 3f, false, true, 0)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1977.3578f, 3814.966f, 31.176128f, 1979.9144f, 3816.569f, 34.03573f, 2f, false, true, 0) && __LIB_26__.func_499() == 2))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					__LIB_34__.func_977();
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1974.67f, 3813.64f, 32.43f, 1f, 20000, 0.25f, 0, 40000f);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					iLocal_1795 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1792, Local_1793, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1795, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_action", 8f, -8f, 1, 16, 1000f, 0);
					TASK::TASK_LOOK_AT_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1795, false);
					iLocal_1794++;
				}
			}
			break;
		case 2:
			if (iLocal_1796 == 0)
			{
				if (!__LIB_0__.func_75())
				{
					if (__LIB_36__.func_92(&uLocal_1627, "T2AUD", "TR2_INT_LI2", 8, 0, 0, 0))
					{
						iLocal_1796 = 1;
					}
				}
			}
			else if (!__LIB_0__.func_75())
			{
				iLocal_1794++;
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1795) > 0.266f)
			{
				iLocal_1794++;
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1795))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1795) == 1f)
					{
						iLocal_1795 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1792, Local_1793, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1795, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_outro_idle", 8f, -8f, 1, 16, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1795, false);
						iLocal_1794++;
					}
				}
			}
			break;
		case 3:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			iLocal_1794++;
			break;
		case 4:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
			break;
	}
}

int func_1102()//Position - 0x93287
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
			return 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
			return 1;
		}
	}
	return 0;
}

int func_1103()//Position - 0x93308
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1794 > 2)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			return 1;
		}
	}
	return 0;
}

void func_1104()//Position - 0x9333B
{
	__LIB_40__.func_657(&(Global_96938.f_9[0]));
	__LIB_0__.func_202(&uLocal_1627, 3);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("t2leadin", false, 1f, 0.5f);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	if (iLocal_1799)
	{
		__LIB_0__.func_313(6);
		iLocal_1799 = 0;
	}
	__LIB_30__.func_330();
}

void func_1105()//Position - 0x93389
{
	__LIB_39__.func_460(&(Global_96938.f_9[0]));
	__LIB_0__.func_202(&uLocal_1627, 3);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("t2leadin", false, 1f, 0.5f);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	CAM::STOP_GAMEPLAY_HINT(false);
	CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
	if (iLocal_1799)
	{
		__LIB_0__.func_313(6);
		iLocal_1799 = 0;
	}
	__LIB_30__.func_330();
}

void func_1106()//Position - 0x933EB
{
	MISC::CLEAR_AREA(__LIB_30__.func_321(214, 0), 3f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	__LIB_18__.func_191(78, 1, 0, 1, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		__LIB_30__.func_340(Global_96938.f_9[0]);
		__LIB_11__.func_318(Global_96938.f_9[0], Global_96938.f_42);
		__LIB_0__.func_203(&uLocal_1627, 3, Global_96938.f_9[0], "NervousRon", 0, 1);
	}
	__LIB_0__.func_203(&uLocal_1627, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	iLocal_1795 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1792, Local_1793, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1795, "misstrevor2leadinouttrv_2_int", "trv_2_int_ron_idle", 1000f, -8f, 1, 16, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1795, true);
	iLocal_1794 = 0;
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("T2leadin", true, 1f, 0.5f);
	__LIB_34__.func_978(63, "TREVOR_2_INT", -1, -1, 0);
	__LIB_34__.func_985(63, "RON", Global_96938.f_9[0]);
	__LIB_34__.func_978(63, "TREVOR_2_INT", -1, -1, 0);
}

int func_1107()//Position - 0x93505
{
	struct<3> Var0[12];
	struct<3> Var1[2];
	__LIB_30__.func_341(&(Var0[0 /*3*/]), 0, 0, 0);
	__LIB_30__.func_341(&(Var0[1 /*3*/]), 1, 0, 0);
	__LIB_30__.func_341(&(Var0[2 /*3*/]), 2, 0, 0);
	__LIB_30__.func_341(&(Var0[3 /*3*/]), 3, 0, 0);
	__LIB_30__.func_341(&(Var0[4 /*3*/]), 4, 0, 0);
	__LIB_30__.func_341(&(Var0[5 /*3*/]), 5, 0, 0);
	__LIB_30__.func_341(&(Var0[6 /*3*/]), 6, 0, 0);
	__LIB_30__.func_341(&(Var0[7 /*3*/]), 7, 0, 0);
	__LIB_30__.func_341(&(Var0[8 /*3*/]), 8, 0, 0);
	__LIB_30__.func_341(&(Var0[9 /*3*/]), 9, 0, 0);
	__LIB_30__.func_341(&(Var0[10 /*3*/]), 10, 0, 0);
	__LIB_30__.func_341(&(Var0[11 /*3*/]), 11, 0, 0);
	__LIB_30__.func_341(&(Var1[0 /*3*/]), 0, 0, 0);
	__LIB_30__.func_341(&(Var1[0 /*3*/]), 1, 0, 0);
	if (((!func_744(&(Global_96938.f_9[0]), 20, 1972.956f, 3812.079f, 32.84f, &Var0, &Var1) || !STREAMING::HAS_ANIM_DICT_LOADED("misstrevor2leadinouttrv_2_int")) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("T2leadin"))
	{
		return 0;
	}
	return 1;
}

void func_1109()//Position - 0x93638
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__.func_149(20));
	STREAMING::REMOVE_ANIM_DICT("misstrevor2leadinouttrv_2_int");
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	HUD::CLEAR_ADDITIONAL_TEXT(0, false);
	TASK::REMOVE_WAYPOINT_RECORDING("T2leadin");
	if (iLocal_1799)
	{
		__LIB_0__.func_313(7);
		iLocal_1799 = 0;
	}
}

void func_1110()//Position - 0x9367B
{
	STREAMING::REQUEST_MODEL(__LIB_11__.func_149(20));
	STREAMING::REQUEST_ANIM_DICT("misstrevor2leadinouttrv_2_int");
	TASK::REQUEST_WAYPOINT_RECORDING("T2leadin");
	HUD::REQUEST_ADDITIONAL_TEXT("SJC", 0);
}

void func_1111()//Position - 0x936A9
{
	CAM::STOP_GAMEPLAY_HINT(false);
	CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
}

