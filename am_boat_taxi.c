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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
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
	float fLocal_62 = 0f;
	struct<22> Local_63 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0 } ;
	struct<3> Local_64[32];
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 12;
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
	var uLocal_771 = 1065353216;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	struct<3> Local_774 = { 0, 0, 0 } ;
	float fLocal_775 = 0f;
	var uLocal_776 = 16;
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
	bool bLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	int iLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	float fLocal_947 = 0f;
	float fLocal_948 = 0f;
	float fLocal_949 = 0f;
	float fLocal_950 = 0f;
	struct<21> Local_951 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_944 = 15000;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_150(ScriptParam_951))
		{
			func_145();
		}
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_145();
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != bLocal_941)
		{
			func_145();
		}
		switch (func_135(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_134() == 1)
				{
					func_133();
					func_132();
					Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
				}
				else if (func_134() == 4)
				{
					Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				break;
			case 1:
				func_100();
				if (func_134() == 1)
				{
					func_74();
				}
				else if (func_134() == 4)
				{
					Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				if (__LIB_0__::func_939(Local_63.f_2))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_63.f_2), true), 200f, 200f, 200f, false, true, 0))
					{
						Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			case 3:
				__LIB_1__::func_399(&(Local_63.f_18));
				if (__LIB_1__::func_398(&(Local_63.f_18)))
				{
					Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			case 2:
				Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			case 4:
				func_145();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_134())
			{
				case 0:
					if (__LIB_0__::func_937(&(Local_63.f_16), 10000, 0))
					{
						if (!BitTest(Local_63.f_0, 12))
						{
							Local_63.f_4 = PLAYER::PLAYER_ID();
							Local_63.f_5 = func_67();
							Local_63.f_10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(0f, 5f, 0f) };
							Local_63.f_7 = { func_65(Local_63.f_5) };
							MISC::SET_BIT(&Local_63, 12);
						}
						if (func_38())
						{
							func_133();
							Local_63.f_1 = 1;
						}
					}
					func_34();
					break;
				case 1:
					func_33();
					func_32();
					func_30();
					func_34();
					if (func_1())
					{
						Local_63.f_1 = 4;
					}
					break;
				case 4:
					break;
				}
		}
	}
}

int func_1()//Position - 0x263
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()//Position - 0x277
{
	var uVar0;
	var uVar1;
	if (__LIB_0__::func_983())
	{
		if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
		{
			__LIB_3__::func_79(__LIB_41__::func_47(9), 7, 3, 1);
		}
		return 1;
	}
	if (Local_63.f_21 >= 0 || Local_63.f_21 <= 3)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
		{
			if (!__LIB_0__::func_939(Local_63.f_2))
			{
				if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_63.f_2, &uVar0) == PLAYER::PLAYER_ID())
				{
					__LIB_1__::func_395(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_3))
		{
			if (__LIB_0__::func_951(Local_63.f_3))
			{
				if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_63.f_3, &uVar1) == PLAYER::PLAYER_ID())
				{
					__LIB_1__::func_395(1, 600000);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_30()//Position - 0x1B2D
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (Local_63.f_20 != 7)
	{
		if (__LIB_0__::func_951(Local_63.f_3) || !__LIB_0__::func_939(Local_63.f_2))
		{
			Local_63.f_20 = 7;
		}
		else if (!PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_63.f_3), NETWORK::NET_TO_VEH(Local_63.f_2), false))
		{
			Local_63.f_20 = 7;
		}
	}
	if (!__LIB_0__::func_951(Local_63.f_3) && __LIB_0__::func_939(Local_63.f_2))
	{
		if (Local_63.f_20 != 1)
		{
			if (ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_63.f_2)) <= 600 || ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_63.f_3)) <= 150)
			{
				Local_63.f_20 = 1;
			}
		}
		switch (Local_63.f_20)
		{
			case 2:
				if (Local_63.f_21 == 3)
				{
					Local_63.f_20 = 4;
				}
				else if (Local_63.f_21 == 5)
				{
					Local_63.f_20 = 7;
				}
				else if (!BitTest(Local_63.f_0, 7) && ENTITY::IS_ENTITY_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
				{
					Local_63.f_20 = 3;
				}
				break;
			case 4:
				MISC::SET_BIT(&uLocal_65, 8);
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) <= 0)
				{
					Local_63.f_20 = 3;
					MISC::CLEAR_BIT(&uLocal_65, 8);
				}
				else if (!BitTest(Local_63.f_0, 7) && ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_PED(Local_63.f_3), Local_63.f_7, 10f, 10f, 10f, false, true, 0))
				{
					Local_63.f_20 = 5;
				}
				break;
			case 5:
				if ((VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) <= 0 && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2))) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_20 = 6;
				}
				break;
			case 3:
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) >= 1)
				{
					Local_63.f_20 = 4;
				}
				break;
			case 6:
				if ((VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) <= 0 && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2))) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), 1) >= 10f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
					{
						Local_63.f_20 = 7;
					}
				}
				break;
			case 1:
				if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_63.f_3), 1) >= 10f)
				{
					Local_63.f_20 = 7;
				}
				break;
			case 7:
				break;
			}
	}
}

void func_32()//Position - 0x1E27
{
	switch (Local_63.f_21)
	{
		case 0:
			if (BitTest(Local_63.f_0, 8) || VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) > 0)
			{
				Local_63.f_21 = 1;
			}
			break;
		case 1:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) > 0)
				{
					Local_63.f_21 = 2;
				}
			}
			break;
		case 2:
			if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) > 0)
			{
				Local_63.f_21 = 3;
			}
			else if (BitTest(Local_63.f_0, 10))
			{
				Local_63.f_21 = 4;
			}
			break;
		case 3:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
			{
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) <= 0)
				{
					Local_63.f_21 = 1;
				}
				else if (BitTest(Local_63.f_0, 10))
				{
					Local_63.f_21 = 4;
				}
			}
			break;
		case 4:
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
			{
				if ((VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_63.f_2), false, true) <= 0 && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2))) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), 1) >= 10f)
				{
					Local_63.f_21 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_33()//Position - 0x1F61
{
	int iVar0;
	int iVar1;
	MISC::CLEAR_BIT(&Local_63, 9);
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (__LIB_0__::func_156(iVar1, 1, 1))
			{
				if (__LIB_0__::func_939(Local_63.f_2))
				{
					if (!BitTest(Local_63.f_0, 8))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_63.f_2), Local_63.f_10, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), false, true, 0))
						{
							MISC::SET_BIT(&Local_63, 8);
						}
					}
					if (!BitTest(Local_63.f_0, 7) || BitTest(Local_63.f_0, 11))
					{
						if (!BitTest(Local_63.f_0, 10))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(NETWORK::NET_TO_VEH(Local_63.f_2), Local_63.f_7, (10f * 1.5f), (10f * 1.5f), (10f * 1.5f), false, true, 0))
							{
								MISC::SET_BIT(&Local_63, 10);
							}
						}
					}
					if (!BitTest(Local_63.f_0, 9))
					{
						if (BitTest(Local_64[iVar0 /*3*/].f_1, 6))
						{
							MISC::SET_BIT(&Local_63, 9);
							MISC::CLEAR_BIT(&(Local_64[iVar0 /*3*/].f_1), 6);
						}
					}
					if (Local_63.f_20 != 3)
					{
						if (BitTest(Local_64[iVar0 /*3*/].f_1, 5))
						{
							Local_63.f_20 = 3;
							MISC::CLEAR_BIT(&(Local_64[iVar0 /*3*/].f_1), 5);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_34()//Position - 0x20AE
{
	struct<3> Var0;
	var uVar1;
	if ((Local_63.f_21 <= 2 || Local_63.f_20 == 2) || Local_63.f_20 == 3)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		if ((!WATER::GET_WATER_HEIGHT_NO_WAVES(Var0, &uVar1) || __LIB_32__::func_483()) || __LIB_1__::func_852())
		{
			Local_63.f_1 = 4;
		}
	}
}

int func_38()//Position - 0x23B4
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 1, 0, 0))
	{
		if (__LIB_0__::func_799(joaat("dinghy2")) && __LIB_0__::func_799(joaat("S_M_Y_BlackOps_01")))
		{
			if (func_41() && func_39())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_39()//Position - 0x23F6
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_3) && __LIB_0__::func_799(joaat("S_M_Y_BlackOps_01"))) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
	{
		if (__LIB_0__::func_939(Local_63.f_2))
		{
			if (__LIB_0__::func_930(&(Local_63.f_3), Local_63.f_2, 22, joaat("S_M_Y_BlackOps_01"), -1, 1, 1, 1))
			{
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_63.f_3), 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_63.f_3), 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_63.f_3), 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_63.f_3), 4, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_63.f_3), 8, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_63.f_3), 9, 0, 0, 0);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/] != 0)
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_63.f_3), Global_1837194);
				}
				else
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_63.f_3), Global_1836877[2 /*94*/][2 /*31*/][2 /*10*/][2 /*3*/][0]);
				}
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_63.f_3), true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_63.f_3), true);
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_63.f_3), SYSTEM::ROUND((200f * Global_262145.f_164 /* Tunable: AI_HEALTH */)), 0);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(NETWORK::NET_TO_PED(Local_63.f_3), false);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_63.f_3), 255, true);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
	return 1;
}

int func_41()//Position - 0x25E2
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
	{
		if (__LIB_0__::func_799(joaat("dinghy2")))
		{
			if (!BitTest(uLocal_65, 10))
			{
				func_61(&Local_774, &fLocal_775);
				if (WATER::TEST_PROBE_AGAINST_WATER(Local_774 + Vector(2f, 0f, 0f), Local_774 - Vector(10f, 0f, 0f), &Local_774))
				{
					if (__LIB_1__::func_408(Local_774, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
					{
						Var2 = { Local_774 + Vector(12f, 0f, 0f) };
						iLocal_772 = SHAPETEST::START_SHAPE_TEST_BOX(Var2, 10f, 10f, 25f, 0f, 0f, -1f, 2, 1, 0, 4);
						if (iLocal_772 == 0)
						{
							return 0;
						}
						else
						{
							MISC::SET_BIT(&uLocal_65, 10);
						}
					}
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 2)
			{
				iLocal_772 = 0;
				if (iLocal_773 == 0)
				{
					if (__LIB_0__::func_957(&(Local_63.f_2), joaat("dinghy2"), Local_774, fLocal_775, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_63.f_2), true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_63.f_2), true, true, false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_63.f_2), 12f);
						VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(NETWORK::NET_TO_VEH(Local_63.f_2), true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(NETWORK::NET_TO_VEH(Local_63.f_2), false);
					}
				}
				else
				{
					iLocal_773 = 0;
					MISC::CLEAR_BIT(&uLocal_65, 10);
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_772, &iLocal_773, &uVar0, &uVar0, &uVar1) == 0)
			{
				iLocal_772 = 0;
				MISC::CLEAR_BIT(&uLocal_65, 10);
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy2"));
	return 1;
}

void func_61(var uParam0, var uParam1)//Position - 0x3033
{
	*uParam0 = { __LIB_1__::func_406(Local_63.f_10, (100f / 2f), 100f, 10f) };
	*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_63.f_10 - *uParam0), (Local_63.f_10.f_1 - uParam0->f_1));
}

Vector3 func_65(int iParam0)//Position - 0x3112
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	fVar3 = 0f;
	fVar4 = 10000f;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63.f_10, __LIB_1__::func_853(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { __LIB_1__::func_853(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, 8000f, 0f };
			return Var2;
			break;
		case 1:
			iVar0 = 5;
			while (iVar0 <= 9)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63.f_10, __LIB_1__::func_853(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { __LIB_1__::func_853(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { 5000f, Local_63.f_10.f_1, 0f };
			return Var2;
			break;
		case 2:
			iVar0 = 10;
			while (iVar0 <= 14)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63.f_10, __LIB_1__::func_853(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { __LIB_1__::func_853(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { Local_63.f_10, -5000f, 0f };
			return Var2;
			break;
		case 3:
			iVar0 = 15;
			while (iVar0 <= 20)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_63.f_10, __LIB_1__::func_853(iVar0), true);
				if (fVar3 < fVar4)
				{
					iVar1 = iVar0;
					fVar4 = fVar3;
				}
				iVar0++;
			}
			Var2 = { __LIB_1__::func_853(iVar1) };
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_6 = func_66(iVar1);
			Local_63.f_13 = { -5000f, Local_63.f_10.f_1, 0f };
			return Var2;
			break;
	}
	return -1392.4283f, -1661.61f, 0f;
}

float func_66(int iParam0)//Position - 0x330B
{
	switch (iParam0)
	{
		case 0:
			return 156.0512f;
		case 1:
			return 186.4808f;
		case 2:
			return 65.4787f;
		case 3:
			return 56.421f;
		case 4:
			return 76.4749f;
		case 5:
			return 79.1503f;
		case 6:
			return 24.8224f;
		case 7:
			return 27.7851f;
		case 8:
			return 32.1401f;
		case 9:
			return 329.6803f;
		case 10:
			return 328.7837f;
		case 11:
			return 283.9666f;
		case 12:
			return 295.5786f;
		case 13:
			return 314.4354f;
		case 14:
			return 0.4088f;
		case 15:
			return 287.0804f;
		case 16:
			return 249.5385f;
		case 17:
			return 270.7522f;
		case 18:
			return 260.8947f;
		case 19:
			return 248.4225f;
		case 20:
			return 233.6563f;
		default:
	}
	return 228.6098f;
}

int func_67()//Position - 0x3445
{
	struct<3> Var0;
	Var0 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
	if (Var0.f_1 >= 0f && Var0.f_0 >= 0f)
	{
		return 0;
	}
	else if (Var0.f_1 < 0f && Var0.f_0 >= 0f)
	{
		return 1;
	}
	else if (Var0.f_1 < 0f && Var0.f_0 < 0f)
	{
		return 2;
	}
	else if (Var0.f_1 >= 0f && Var0.f_0 < 0f)
	{
		return 3;
	}
	return -1;
}

void func_74()//Position - 0x35FF
{
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (Local_63.f_21 == 5)
		{
			Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
		}
		switch (Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
		{
			case 0:
				func_97();
				if (Local_63.f_21 > 0)
				{
					Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
				}
				break;
			case 1:
				if (__LIB_0__::func_939(Local_63.f_2))
				{
					func_132();
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), false))
					{
						func_96();
						Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						MISC::CLEAR_BIT(&(Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_939(Local_63.f_2))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), false))
					{
						Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
						MISC::CLEAR_BIT(&(Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 5);
						MISC::SET_BIT(&(Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 6);
						if (Local_63.f_21 >= 4)
						{
							Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
						}
					}
					else
					{
						Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
					}
				}
				break;
			case 3:
				if (__LIB_0__::func_939(Local_63.f_2))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), false))
					{
						if (Local_63.f_21 >= 4)
						{
							Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
						}
						__LIB_1__::func_405();
					}
					else
					{
						Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
					}
				}
				break;
			case 4:
				if (__LIB_0__::func_939(Local_63.f_2))
				{
					if (!BitTest(uLocal_65, 3))
					{
						if (ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_VEH(Local_63.f_2)) < 3f)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							MISC::SET_BIT(&uLocal_65, 3);
						}
					}
					if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), false) && !PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2))) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), 1) >= 10f)
					{
						Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
					}
				}
				break;
			case 5:
				func_145();
				break;
		}
		func_75();
	}
}

void func_75()//Position - 0x3808
{
	int iVar0;
	struct<9> Var1;
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_71))
	{
		if (__LIB_3__::func_54(1, 1))
		{
			if (((Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 1 || Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 2) || Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 3) || Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 4)
			{
				iVar0 = 1;
				Var1 = { __LIB_1__::func_404() };
				__LIB_1__::func_539(&uLocal_72);
				if (Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 1)
				{
					if (__LIB_0__::func_939(Local_63.f_2))
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), 10f, 10f, 3f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !__LIB_3__::func_55(NETWORK::NET_TO_VEH(Local_63.f_2), 0))
						{
							__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 23 /*INPUT_ENTER*/, true), "BTX_ENTER" /* GXT: Enter */, &uLocal_72, 0);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
				if (iVar0 == 1)
				{
					__LIB_1__::func_405();
					__LIB_0__::func_876(1);
					__LIB_1__::func_538(&iLocal_71, &Var1, &uLocal_72, __LIB_1__::func_402(&uLocal_72));
				}
			}
		}
	}
	else
	{
		iLocal_71 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
	}
}

void func_96()//Position - 0x409A
{
	if (HUD::DOES_BLIP_EXIST(iLocal_67))
	{
		HUD::REMOVE_BLIP(&iLocal_67);
	}
}

void func_97()//Position - 0x40B1
{
	int iVar0;
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		iVar0 = __LIB_0__::func_369(1191, -1, 0);
		if (!BitTest(iVar0, 15))
		{
			__LIB_0__::func_151("BTX_HELP1" /* GXT: ~s~The boat ~BLIP_DOCK~ will take you to the nearest drop-off location. */, -1);
			MISC::SET_BIT(&iVar0, 15);
			__LIB_0__::func_413(1191, iVar0, -1, 1, 0);
		}
	}
}

void func_100()//Position - 0x4139
{
	if (!__LIB_0__::func_951(Local_63.f_3) && __LIB_0__::func_939(Local_63.f_2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_3) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_63.f_3) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
		{
			func_130();
			func_104();
			if (__LIB_0__::func_953(Local_63.f_3))
			{
				PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_63.f_3), 323, true);
			}
			switch (Local_63.f_20)
			{
				case 0:
					break;
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						TASK::TASK_BOAT_MISSION(NETWORK::NET_TO_PED(Local_63.f_3), NETWORK::NET_TO_VEH(Local_63.f_2), 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 4, 12f, 786469, 10f, 1071);
					}
					break;
				case 4:
					func_102(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_63.f_2), false), Local_63.f_7);
					PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_947, fLocal_949, fLocal_948, fLocal_950);
					if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_947, fLocal_949, fLocal_948, fLocal_950))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
						{
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_63.f_3), iLocal_70);
						}
					}
					break;
				case 5:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_63.f_3), NETWORK::NET_TO_VEH(Local_63.f_2), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_63.f_2), true), 5, 5f, 1076625579, 2f, 1f, true);
					}
					break;
				case 3:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(NETWORK::NET_TO_PED(Local_63.f_3), NETWORK::NET_TO_VEH(Local_63.f_2), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_63.f_2), true), 5, 5f, 1076625579, 2f, 1f, true);
					}
					break;
				case 1:
					if (!BitTest(Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1, 7))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), false) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2)))
						{
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_63.f_3), false);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_63.f_3), false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_3), 2, false);
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_63.f_3), iLocal_68);
						}
						else
						{
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_63.f_3), false);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_63.f_3), false);
							PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_63.f_3), 2, true);
							TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_63.f_3), iLocal_69);
						}
						MISC::SET_BIT(&(Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 7);
					}
					break;
				case 6:
					if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_63.f_3), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
					{
						TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_63.f_3), iLocal_69);
					}
					break;
				case 7:
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
					{
						__LIB_1__::func_387(&(Local_63.f_2));
					}
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_3))
					{
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_63.f_3), true);
						__LIB_1__::func_387(&(Local_63.f_3));
					}
					break;
				}
			}
	}
}

void func_102(struct<2> Param0, Vector3 vParam1, struct<2> Param2, var uParam3)//Position - 0x44C1
{
	if (Param0.f_0 < Param2.f_0)
	{
		fLocal_947 = (Param0.f_0 - 25f);
		fLocal_948 = (Param2.f_0 + 25f);
	}
	else if (Param0.f_0 > Param2.f_0)
	{
		fLocal_947 = (Param2.f_0 - 25f);
		fLocal_948 = (Param0.f_0 + 25f);
	}
	if (Param0.f_1 < Param2.f_1)
	{
		fLocal_949 = (Param0.f_1 - 25f);
		fLocal_950 = (Param2.f_1 + 25f);
	}
	else if (Param0.f_1 > Param2.f_1)
	{
		fLocal_949 = (Param2.f_1 - 25f);
		fLocal_950 = (Param0.f_1 + 25f);
	}
}

void func_104()//Position - 0x4579
{
	bool bVar0;
	struct<2> Var1;
	if (!BitTest(uLocal_65, 4))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_63.f_3), 15f, 15f, 15f, false, true, 0))
		{
			__LIB_0__::func_222(&uLocal_776, 8, NETWORK::NET_TO_PED(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (__LIB_0__::func_960(&uLocal_776, "FMAMBAU", "FMA_BPDA", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&uLocal_65, 4);
			}
		}
	}
	if (!BitTest(uLocal_65, 6))
	{
		if (Local_63.f_20 == 4)
		{
			__LIB_0__::func_222(&uLocal_776, 8, NETWORK::NET_TO_PED(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (__LIB_0__::func_960(&uLocal_776, "FMAMBAU", "FMA_BPDA3", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&uLocal_65, 6);
			}
		}
	}
	if (!BitTest(uLocal_65, 5))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_63.f_7, (10f * 2f), (10f * 2f), (10f * 2f), false, true, 0))
		{
			__LIB_0__::func_222(&uLocal_776, 8, NETWORK::NET_TO_PED(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (__LIB_0__::func_960(&uLocal_776, "FMAMBAU", "FMA_BPDA6", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&uLocal_65, 5);
			}
		}
	}
	if (!BitTest(uLocal_65, 7))
	{
		if (Local_63.f_20 == 5)
		{
			__LIB_0__::func_222(&uLocal_776, 8, NETWORK::NET_TO_PED(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (__LIB_0__::func_960(&uLocal_776, "FMAMBAU", "FMA_BPDA7", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				MISC::SET_BIT(&uLocal_65, 7);
			}
		}
	}
	if (!BitTest(uLocal_65, 8))
	{
		__LIB_0__::func_222(&uLocal_776, 8, NETWORK::NET_TO_PED(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
		if (__LIB_0__::func_960(&uLocal_776, "FMAMBAU", "FMA_BPDA4", 12, 0, 0, 1))
		{
			TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
			MISC::SET_BIT(&uLocal_65, 8);
		}
	}
	if (Local_63.f_20 == 3)
	{
		if (__LIB_0__::func_937(&uLocal_942, 30000, 0))
		{
			__LIB_0__::func_222(&uLocal_776, 8, NETWORK::NET_TO_PED(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
			if (__LIB_0__::func_960(&uLocal_776, "FMAMBAU", "FMA_BPDA2", 12, 0, 0, 1))
			{
				TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
				__LIB_0__::func_627(&uLocal_942, 0, 0);
			}
		}
	}
	if (Local_63.f_20 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
		{
			if (__LIB_0__::func_937(&uLocal_945, iLocal_944, 0))
			{
				bVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 17);
				StringCopy(&Var1, "", 16);
				if (!BitTest(uLocal_66, bVar0))
				{
					switch (bVar0)
					{
						case 0:
							StringCopy(&Var1, "FMA_BPDA5", 16);
							break;
						case 1:
							StringCopy(&Var1, "FMA_BPDA5b", 16);
							break;
						case 2:
							StringCopy(&Var1, "FMA_BPDA5c", 16);
							break;
						case 3:
							StringCopy(&Var1, "FMA_BPDA5d", 16);
							break;
						case 4:
							StringCopy(&Var1, "FMA_BPDA5e", 16);
							break;
						case 5:
							StringCopy(&Var1, "FMA_BPDA5f", 16);
							break;
						case 6:
							StringCopy(&Var1, "FMA_BPDA5g", 16);
							break;
						case 7:
							StringCopy(&Var1, "FMA_BPDA5h", 16);
							break;
						case 8:
							StringCopy(&Var1, "FMA_BPDA5i", 16);
							break;
						case 9:
							StringCopy(&Var1, "FMA_BPDA5j", 16);
							break;
						case 10:
							StringCopy(&Var1, "FMA_BPDA5k", 16);
							break;
						case 11:
							StringCopy(&Var1, "FMA_BPDA5l", 16);
							break;
						case 12:
							StringCopy(&Var1, "FMA_BPDA5m", 16);
							break;
						case 13:
							StringCopy(&Var1, "FMA_BPDA5n", 16);
							break;
						case 14:
							StringCopy(&Var1, "FMA_BPDA5o", 16);
							break;
						case 15:
							StringCopy(&Var1, "FMA_BPDA5p", 16);
							break;
						case 16:
							StringCopy(&Var1, "FMA_BPDA5q", 16);
							break;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
					{
						__LIB_0__::func_222(&uLocal_776, 8, NETWORK::NET_TO_PED(Local_63.f_3), "FM_DRIVER_BOAT", 0, 1);
						if (__LIB_0__::func_960(&uLocal_776, "FMAMBAU", &Var1, 12, 0, 0, 1))
						{
							__LIB_0__::func_627(&uLocal_945, 0, 0);
							MISC::SET_BIT(&uLocal_66, bVar0);
							TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
							iLocal_944 = (MISC::GET_RANDOM_INT_IN_RANGE(20000, 30001) + bVar0 * 500);
						}
					}
				}
			}
		}
	}
	if (!__LIB_0__::func_951(Local_63.f_3))
	{
		if (__LIB_0__::func_939(Local_63.f_2))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(NETWORK::NET_TO_PED(Local_63.f_3)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(NETWORK::NET_TO_PED(Local_63.f_3)))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_VEH(Local_63.f_2), PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3), PLAYER::PLAYER_PED_ID(), true))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
					{
						case 0:
							__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_63.f_3), "GENERIC_SHOCKED_MED", 3);
							break;
						case 1:
							__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_63.f_3), "GENERIC_SHOCKED_HIGH", 3);
							break;
						case 2:
							__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_63.f_3), "GENERIC_FRIGHTENED_MED", 3);
							break;
						case 3:
							__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_63.f_3), "GENERIC_FRIGHTENED_HIGH", 3);
							break;
						case 4:
							__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_63.f_3), "GENERIC_CURSE_MED", 3);
							break;
						case 5:
							__LIB_0__::func_640(NETWORK::NET_TO_PED(Local_63.f_3), "GENERIC_CURSE_HIGH", 3);
							break;
					}
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_63.f_2));
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3));
				}
			}
			else
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_VEH(Local_63.f_2));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(NETWORK::NET_TO_PED(Local_63.f_3));
			}
		}
	}
}

void func_130()//Position - 0x5679
{
	AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
	if (__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2)) && !__LIB_1__::func_606(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_63.f_2), -1))
		{
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
		}
	}
}

void func_132()//Position - 0x5708
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_67))
	{
		if (__LIB_0__::func_939(Local_63.f_2))
		{
			iLocal_67 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_63.f_2));
			HUD::SET_BLIP_SPRITE(iLocal_67, 356);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_67, "BTX_BLIP" /* GXT: Boat */);
			HUD::SET_BLIP_FLASHES(iLocal_67, true);
			HUD::SET_BLIP_CATEGORY(iLocal_67, 6);
		}
	}
}

void func_133()//Position - 0x5754
{
	if (__LIB_0__::func_939(Local_63.f_2))
	{
		TASK::OPEN_SEQUENCE_TASK(&iLocal_70);
		TASK::TASK_BOAT_MISSION(0, NETWORK::NET_TO_VEH(Local_63.f_2), 0, 0, Local_63.f_7, 4, 12f, 786469, 10f, 1071);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_70);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_69);
		TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, NETWORK::NET_TO_VEH(Local_63.f_2), Local_63.f_13, 4, 12f, 786469, 0f, 0f, true);
		TASK::TASK_VEHICLE_DRIVE_WANDER(0, NETWORK::NET_TO_VEH(Local_63.f_2), 12f, 786469);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_69);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_68);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_68);
	}
}

int func_134()//Position - 0x581B
{
	return Local_63.f_1;
}

int func_135(int iParam0)//Position - 0x5827
{
	return Local_64[iParam0 /*3*/];
}

void func_145()//Position - 0x5969
{
	func_96();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Local_63.f_20 == 7)
		{
			if (__LIB_0__::func_939(Local_63.f_2) && !__LIB_0__::func_951(Local_63.f_3))
			{
				TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_63.f_3), iLocal_69);
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_2))
				{
					__LIB_1__::func_387(&(Local_63.f_2));
				}
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_63.f_3))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_63.f_3))
				{
					__LIB_1__::func_387(&(Local_63.f_3));
				}
			}
		}
	}
	__LIB_0__::func_954(__LIB_0__::func_943(1, 1), 9, __LIB_0__::func_162());
	func_147();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_71);
	__LIB_0__::func_202();
}

void func_147()//Position - 0x5A11
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_68);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_69);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_70);
}

int func_150(struct<21> Param0)//Position - 0x5AC8
{
	__LIB_0__::func_935(32, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_63, 22, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_64, 97, 0);
	if (!__LIB_0__::func_934())
	{
		return 0;
	}
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_63.f_4 = PLAYER::PLAYER_ID();
		Local_63.f_5 = func_67();
		Local_63.f_10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(0f, 5f, 0f) };
		Local_63.f_7 = { func_65(Local_63.f_5) };
	}
	MISC::SET_BIT(&uLocal_65, 8);
	bLocal_941 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	Local_64[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

