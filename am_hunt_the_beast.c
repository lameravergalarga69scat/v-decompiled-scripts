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
	float fLocal_91 = 0f;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 17;
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
	var uLocal_114 = 17;
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
	var uLocal_140 = -1;
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
	int iLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	struct<3> Local_160[72];
	struct<3> Local_161[72];
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	int iLocal_164 = 0;
	struct<86> Local_165 = { 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	struct<12> Local_169 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	struct<42> Local_172[32];
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
	var uLocal_201 = -1;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 1;
	var uLocal_210 = 0;
	var uLocal_211 = 32;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = -1;
	var uLocal_216 = 0;
	var uLocal_217 = -1;
	var uLocal_218 = 0;
	var uLocal_219 = -1;
	var uLocal_220 = 0;
	var uLocal_221 = -1;
	var uLocal_222 = 0;
	var uLocal_223 = -1;
	var uLocal_224 = 0;
	var uLocal_225 = -1;
	var uLocal_226 = 0;
	var uLocal_227 = -1;
	var uLocal_228 = 0;
	var uLocal_229 = -1;
	var uLocal_230 = 0;
	var uLocal_231 = -1;
	var uLocal_232 = 0;
	var uLocal_233 = -1;
	var uLocal_234 = 0;
	var uLocal_235 = -1;
	var uLocal_236 = 0;
	var uLocal_237 = -1;
	var uLocal_238 = 0;
	var uLocal_239 = -1;
	var uLocal_240 = 0;
	var uLocal_241 = -1;
	var uLocal_242 = 0;
	var uLocal_243 = -1;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = -1;
	var uLocal_248 = 0;
	var uLocal_249 = -1;
	var uLocal_250 = 0;
	var uLocal_251 = -1;
	var uLocal_252 = 0;
	var uLocal_253 = -1;
	var uLocal_254 = 0;
	var uLocal_255 = -1;
	var uLocal_256 = 0;
	var uLocal_257 = -1;
	var uLocal_258 = 0;
	var uLocal_259 = -1;
	var uLocal_260 = 0;
	var uLocal_261 = -1;
	var uLocal_262 = 0;
	var uLocal_263 = -1;
	var uLocal_264 = 0;
	var uLocal_265 = -1;
	var uLocal_266 = 0;
	var uLocal_267 = -1;
	var uLocal_268 = 0;
	var uLocal_269 = -1;
	var uLocal_270 = 0;
	var uLocal_271 = -1;
	var uLocal_272 = 0;
	var uLocal_273 = -1;
	var uLocal_274 = 0;
	var uLocal_275 = -1;
	var uLocal_276 = -1;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = -1;
	var uLocal_283 = -1;
	var uLocal_284 = -1;
	var uLocal_285 = -1;
	var uLocal_286 = -1;
	var uLocal_287 = -1;
	var uLocal_288 = 0;
	var uLocal_289 = 32;
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
	int* iLocal_706 = NULL;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	struct<4> Local_709[32];
	bool bLocal_710 = 0;
	var uLocal_711 = 0;
	struct<18> Local_712[32];
	struct<3> Local_713[32];
	struct<3> Local_714[20];
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	bool bLocal_734 = 0;
	var uLocal_735 = 0;
	int iLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	struct<3> Local_748 = { 0, 0, 0 } ;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	int iLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	struct<3> Local_757 = { 0, 0, 0 } ;
	var uLocal_758 = 16;
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
	var uLocal_778 = 16;
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
	var uLocal_806 = 49;
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
	var uLocal_856 = 2;
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
	var uLocal_875 = -1;
	var uLocal_876 = -1;
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
	var uLocal_893 = -1;
	var uLocal_894 = 1;
	var uLocal_895 = 0;
	var uLocal_896 = 132;
	var uLocal_897 = -1;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 16;
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
	var uLocal_1157 = 16;
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
	var uLocal_1195 = -1;
	var uLocal_1196 = 0;
	var uLocal_1197 = 3;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = -1;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = -1;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 16;
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
	var uLocal_1234 = 12;
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
	var uLocal_1932 = 1065353216;
	var uLocal_1933 = 0;
	var uLocal_1934 = 16;
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
	var uLocal_1974 = 3;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	int iLocal_1983 = 0;
	var uLocal_1984 = 0;
	int iLocal_1985 = 0;
	int iLocal_1986 = 0;
	int iLocal_1987 = 0;
	int iLocal_1988 = 0;
	struct<21> Local_1989 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
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
	fLocal_91 = 1f;
	iLocal_157 = -1;
	fLocal_163 = 9999.99f;
	iLocal_730 = -1;
	iLocal_731 = -1;
	iLocal_733 = -1;
	bLocal_734 = -1;
	iLocal_742 = -1;
	iLocal_752 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1998(ScriptParam_1989);
	}
	else
	{
		func_1966();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_1966();
		}
		if (__LIB_2__::func_17())
		{
			func_1966();
		}
		func_1959(2);
		bLocal_734 = -1;
		if (BitTest(uLocal_725, PLAYER::PLAYER_ID()))
		{
			if (BitTest(uLocal_726, NETWORK::PARTICIPANT_ID_TO_INT()))
			{
				if (__LIB_3__::func_137(PLAYER::PLAYER_PED_ID()))
				{
					func_1957(2);
				}
				if (!__LIB_2__::func_154(PLAYER::PLAYER_ID()))
				{
					bLocal_734 = NETWORK::PARTICIPANT_ID_TO_INT();
				}
				else if (__LIB_1__::func_5() && !__LIB_3__::func_155())
				{
					iVar0 = __LIB_2__::func_51();
					if (PED::IS_PED_A_PLAYER(iVar0))
					{
						iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							bLocal_734 = iVar2;
						}
					}
				}
			}
		}
		func_1931();
		if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (func_1929(NETWORK::PARTICIPANT_ID_TO_INT()) < 3)
			{
				if (__LIB_2__::func_715())
				{
					func_1923(18);
					func_1922(3);
				}
				if (__LIB_1__::func_736())
				{
					func_1923(18);
					func_1922(3);
				}
				if (__LIB_17__::func_7())
				{
					func_1923(18);
					func_1922(3);
				}
				if (Global_2656914)
				{
					func_1923(18);
					func_1922(3);
				}
			}
		}
		if (func_1919() == 0)
		{
			if (func_1916(2, 0, 1, 0, 0))
			{
				func_1923(20);
				func_1923(18);
				if (func_1929(NETWORK::PARTICIPANT_ID_TO_INT()) < 3)
				{
					func_1922(3);
				}
			}
		}
		func_1801();
		func_1798();
		func_1789();
		func_1787();
		if (!__LIB_3__::func_472(1, 0) && bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
			{
				if (func_1784() <= IntToFloat(func_1783()))
				{
					if (!func_1782(6, NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						func_1781(6);
					}
				}
			}
		}
		else if (func_1782(6, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_1780(6);
		}
		switch (func_1929(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1779() == 1)
				{
					func_1922(1);
				}
				else if (func_1779() == 4)
				{
					func_1922(4);
				}
				break;
			case 1:
				if (func_1779() == 1)
				{
					func_785();
				}
				else if (func_1779() == 4)
				{
					__LIB_1__::func_399(&(Local_165.f_81));
					func_1922(3);
				}
				break;
			case 3:
				func_780();
				__LIB_3__::func_0();
				func_754();
				if (__LIB_0__::func_864(&(Local_165.f_81)))
				{
					if (__LIB_1__::func_398(&(Local_165.f_81)))
					{
						bVar3 = true;
					}
				}
				else
				{
					bVar3 = true;
				}
				if (func_751(18))
				{
					bVar3 = true;
				}
				if (bVar3)
				{
					if (func_751(20))
					{
						func_621();
					}
					if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
						{
							if (func_1919() == 3 || func_1919() == 4)
							{
								if (func_421())
								{
									func_1922(4);
								}
							}
							else if (func_65(1))
							{
								func_1922(4);
							}
						}
					}
					else
					{
						func_1922(4);
					}
				}
				break;
			case 2:
				func_1922(4);
			case 4:
				func_1966();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1779())
			{
				case 0:
					func_64(1);
					break;
				case 1:
					func_1();
					break;
				case 4:
					break;
				}
		}
	}
}

void func_1()//Position - 0x3C8
{
	switch (func_63())
	{
		case 0:
			func_62(1);
			break;
		case 1:
			if (!__LIB_0__::func_864(&(Local_165.f_1.f_4)))
			{
				__LIB_0__::func_795(&(Local_165.f_1.f_4), 0, 0);
			}
			else if (__LIB_0__::func_937(&(Local_165.f_1.f_4), Global_262145.f_11684 /* Tunable: HUNT_THE_BEAST_EVENT_START_COUNTDOWN_TIME */, 0))
			{
				if (func_42())
				{
					func_36(Local_713[func_41() /*3*/], __LIB_3__::func_384(1, 1));
					func_10();
					__LIB_0__::func_794(&(Local_165.f_1.f_4));
					__LIB_0__::func_795(&(Local_165.f_1.f_2), 0, 0);
					func_62(2);
				}
				else
				{
					func_8(8);
					func_62(3);
				}
			}
			break;
		case 2:
			if (func_1919() == 0)
			{
				if (func_7() != -1)
				{
					func_8(4);
					func_62(3);
				}
			}
			if (func_1919() == 0)
			{
				if (func_1930() != -1)
				{
					if (!BitTest(uLocal_726, func_1930()))
					{
						func_8(6);
						func_62(3);
					}
					else if (!BitTest(uLocal_725, func_41()))
					{
						func_8(6);
						func_62(3);
					}
					else if (__LIB_10__::func_225(func_41()))
					{
						func_8(6);
						func_62(3);
					}
					else if (func_5(5))
					{
						if (BitTest(uLocal_727, func_41()))
						{
							if (func_4() == 0)
							{
								if (func_5(3))
								{
									func_8(5);
								}
								else if (func_5(1))
								{
									func_8(7);
								}
								else if (func_5(4))
								{
									func_8(2);
								}
								else if (func_5(2))
								{
									func_8(2);
								}
							}
							else if (func_4() == 1)
							{
								func_8(2);
							}
							if (func_1919() == 0)
							{
								func_8(2);
							}
							func_62(3);
						}
					}
				}
			}
			if (func_1919() == 0)
			{
				if (BitTest(uLocal_726, func_1930()))
				{
					if (func_1782(4, func_1930()))
					{
						func_8(3);
						func_62(3);
					}
				}
			}
			if (func_1919() == 0)
			{
				if (func_2())
				{
					func_754();
					func_8(1);
					func_62(3);
				}
			}
			break;
		case 3:
			if (func_5(0))
			{
				func_62(4);
			}
			break;
		case 4:
			func_62(5);
			break;
		case 5:
			func_64(4);
			break;
	}
}

int func_2()//Position - 0x5DD
{
	if (__LIB_1__::func_724(&(Local_165.f_1.f_2), 0, 0) >= Global_262145.f_11683 /* Tunable: HUNT_THE_BEAST_EVENT_TIME_LIMIT */)
	{
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x648
{
	return Local_165.f_1.f_1;
}

bool func_5(int iParam0)//Position - 0x657
{
	return BitTest(Local_165.f_83, iParam0);
}

int func_7()//Position - 0x67C
{
	return Local_165.f_1.f_14;
}

void func_8(int iParam0)//Position - 0x68B
{
	Local_165.f_1.f_18 = iParam0;
}

void func_10()//Position - 0x6A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[20];
	func_32();
	func_17();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar3[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
		iVar2 = iVar3[iVar0];
		iVar3[iVar0] = iVar3[iVar1];
		iVar3[iVar1] = iVar2;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
		iVar2 = iVar3[iVar0];
		iVar3[iVar0] = iVar3[iVar1];
		iVar3[iVar1] = iVar2;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 20);
		iVar2 = iVar3[iVar0];
		iVar3[iVar0] = iVar3[iVar1];
		iVar3[iVar1] = iVar2;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_262145.f_11708 /* Tunable: HUNT_THE_BEAST_NUMBER_OF_ACTIVE_LANDMARKS */)
	{
		Local_165.f_1.f_19[iVar0 /*3*/] = { func_11(iVar3[iVar0]) };
		iVar0++;
	}
}

Vector3 func_11(int iParam0)//Position - 0x7B1
{
	switch (func_16())
	{
		case 0:
			switch (func_15())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 60.6494f, 3716.353f, 38.7534f;
						case 1:
							return -500.9855f, 4518.5034f, 85.0273f;
						case 2:
							return -527.979f, 5291.333f, 73.1858f;
						case 3:
							return 354.9309f, 4436.367f, 62.2071f;
						case 4:
							return -879.134f, 4412.521f, 19.9037f;
						case 5:
							return -1954.1901f, 4460.7344f, 33.9471f;
						case 6:
							return -1103.7924f, 2693.2156f, 17.7398f;
						case 7:
							return -1572.8002f, 2776.851f, 16.1917f;
						case 8:
							return -2554.72f, 2330.554f, 32.06f;
						case 9:
							return -1579.27f, 5169.073f, 18.5721f;
						case 10:
							return -678.772f, 5798.004f, 16.331f;
						case 11:
							return -162.405f, 6424.979f, 30.8992f;
						case 12:
							return 420.6905f, 6475.5166f, 27.8125f;
						case 13:
							return 88.466f, 7076.672f, 0.8722f;
						case 14:
							return -783.2772f, 5119.8296f, 141.8702f;
						case 15:
							return -2133.3f, 3415.716f, 30.49f;
						case 16:
							return 256.2022f, 2578.14f, 44.244f;
						case 17:
							return -3012.17f, 3399.483f, 9.4533f;
						case 18:
							return -283.639f, 2538.775f, 73.6463f;
						case 19:
							return -646.4211f, 4009.9312f, 124.8905f;
						default:
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 18.0979f, 3678.936f, 38.755f;
						case 1:
							return -1691.7314f, 4597.982f, 46.9681f;
						case 2:
							return -2204.33f, 4258.148f, 46.6784f;
						case 3:
							return -1583.94f, 4201.873f, 79.7031f;
						case 4:
							return -84.1272f, 4581.544f, 122.1646f;
						case 5:
							return -283.1379f, 3675.9424f, 64.8241f;
						case 6:
							return -1019.9544f, 4945.819f, 198.1698f;
						case 7:
							return -476.4f, 5352.671f, 79.7186f;
						case 8:
							return -1371.3871f, 4799.256f, 128.0101f;
						case 9:
							return -165.553f, 6575.823f, 11.7782f;
						case 10:
							return -465.667f, 5999.553f, 30.3055f;
						case 11:
							return 758.9827f, 6452.188f, 30.8672f;
						case 12:
							return -898.653f, 6043.334f, 42.0464f;
						case 13:
							return -2073.772f, 2694.6123f, 2.6679f;
						case 14:
							return -417.102f, 2964.439f, 23.9395f;
						case 15:
							return -1829.66f, 2214.377f, 85.9864f;
						case 16:
							return -2591.11f, 3153.813f, 13.5211f;
						case 17:
							return -1434.97f, 5408.573f, 24.719f;
						case 18:
							return 288.4566f, 2862.962f, 42.6424f;
						case 19:
							return -543.895f, 4356.4736f, 63.9277f;
						default:
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -667.619f, 4148.763f, 157.8432f;
						case 1:
							return -1638.28f, 4728.878f, 52.475f;
						case 2:
							return -506.992f, 5272.484f, 79.6101f;
						case 3:
							return -770.0641f, 5584.2275f, 32.4857f;
						case 4:
							return -24.2919f, 6272.453f, 30.234f;
						case 5:
							return -2254.01f, 4418.163f, 38.4088f;
						case 6:
							return -2647.1934f, 2950.2017f, 7.7383f;
						case 7:
							return -1923.13f, 2074.452f, 138.9418f;
						case 8:
							return -331.19f, 2788.228f, 58.4295f;
						case 9:
							return 98.7507f, 3741.897f, 38.7249f;
						case 10:
							return -165.59f, 4248.214f, 43.9326f;
						case 11:
							return -387.3348f, 4905.5728f, 192.1761f;
						case 12:
							return 117.2856f, 6614.791f, 30.8528f;
						case 13:
							return -897.6235f, 6046.576f, 42.5315f;
						case 14:
							return -1623.62f, 3197.239f, 29.0322f;
						case 15:
							return -600.2745f, 2092.9253f, 130.2987f;
						case 16:
							return -1049.09f, 4759.822f, 234.8129f;
						case 17:
							return -2976.1887f, 2117.8083f, 40.126f;
						case 18:
							return 192.3478f, 2787.877f, 44.6449f;
						case 19:
							return -1619.75f, 4391.951f, 1.3766f;
						default:
					}
					break;
			}
			break;
		case 1:
			switch (func_14())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 3333.308f, 5173.045f, 17.334f;
						case 1:
							return 2902.259f, 4380.882f, 49.3692f;
						case 2:
							return 2379.2295f, 3072.314f, 47.153f;
						case 3:
							return 741.4068f, 2574.961f, 74.5234f;
						case 4:
							return 1627.106f, 3601.59f, 34.2867f;
						case 5:
							return 1802.179f, 4612.114f, 36.1828f;
						case 6:
							return 2202.711f, 5567.547f, 52.7958f;
						case 7:
							return 340.0788f, 3568.105f, 32.4699f;
						case 8:
							return 1760.029f, 3047.52f, 61.034f;
						case 9:
							return 2506.045f, 3783.487f, 50.4234f;
						case 10:
							return 2576.003f, 2569.901f, 33.73f;
						case 11:
							return 1957.025f, 2062.29f, 83.5513f;
						case 12:
							return 709.8304f, 4174.877f, 39.7104f;
						case 13:
							return 1869.198f, 6407.897f, 45.5522f;
						case 14:
							return 2386.272f, 5914.32f, 71.932f;
						case 15:
							return 2544.489f, 4660.61f, 33.0768f;
						case 16:
							return 3498.131f, 3678.998f, 32.913f;
						case 17:
							return 1370.153f, 2182.128f, 96.842f;
						case 18:
							return 2980.779f, 3495.813f, 70.3818f;
						case 19:
							return 1853.474f, 4991.999f, 52.5337f;
						default:
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1962.4814f, 5161.141f, 46.2136f;
						case 1:
							return 1587.4337f, 6575.072f, 13.3922f;
						case 2:
							return 1343.2308f, 4319.792f, 37.0156f;
						case 3:
							return 2706.5688f, 1572.4541f, 23.5127f;
						case 4:
							return 2827.893f, 2807.42f, 56.3817f;
						case 5:
							return 2615.974f, 3664.341f, 101.1075f;
						case 6:
							return 927.7864f, 2862.624f, 59.2884f;
						case 7:
							return 2760.0032f, 4756.5923f, 43.5179f;
						case 8:
							return 3702.667f, 4464.3604f, 22.2115f;
						case 9:
							return 2691.3606f, 5325.4355f, 78.9108f;
						case 10:
							return 1983.582f, 3819.107f, 31.2944f;
						case 11:
							return 1499.871f, 3590.165f, 34.3923f;
						case 12:
							return 449.8463f, 3562.69f, 32.2386f;
						case 13:
							return 1855.5059f, 2586.193f, 44.672f;
						case 14:
							return 814.4625f, 2177.089f, 51.2767f;
						case 15:
							return 3514.011f, 3760.738f, 29.0498f;
						case 16:
							return 2465.545f, 4081.937f, 37.0654f;
						case 17:
							return 2369.5771f, 5772.7744f, 45.056f;
						case 18:
							return 1720.596f, 4708.748f, 41.3499f;
						case 19:
							return 406.5959f, 2994.589f, 39.3562f;
						default:
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1140.085f, 2345.897f, 53.4358f;
						case 1:
							return 2468.26f, 1585.599f, 31.7203f;
						case 2:
							return 1637.3093f, 3875.3845f, 33.0311f;
						case 3:
							return 2675.9175f, 3923.6987f, 41.9335f;
						case 4:
							return 2807.9287f, 3870.4197f, 49.4683f;
						case 5:
							return 1952.915f, 4651.176f, 39.6817f;
						case 6:
							return 2553.2039f, 5624.554f, 60.3892f;
						case 7:
							return 2080.566f, 2950.647f, 45.6336f;
						case 8:
							return 476.5016f, 4319.071f, 57.593f;
						case 9:
							return 1482.183f, 6401.3716f, 21.5773f;
						case 10:
							return 606.1604f, 3196.2124f, 38.3064f;
						case 11:
							return 869.4146f, 2870.985f, 55.9367f;
						case 12:
							return 1581.824f, 2167.044f, 78.3125f;
						case 13:
							return 1769.8947f, 3306.1064f, 40.1558f;
						case 14:
							return 2348.826f, 2585.213f, 45.6677f;
						case 15:
							return 2752.395f, 3470.895f, 54.7239f;
						case 16:
							return 2930.009f, 4605.931f, 47.6526f;
						case 17:
							return 2532.9539f, 4817.711f, 33.0208f;
						case 18:
							return 2257.2935f, 5173.7373f, 58.8145f;
						case 19:
							return 2490.398f, 5762.287f, 69.0921f;
						default:
					}
					break;
			}
			break;
		case 2:
			switch (func_13())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1143.704f, -527.3066f, 31.5764f;
						case 1:
							return -1695.5327f, -295.7492f, 50.8123f;
						case 2:
							return -3238.3892f, 990.7311f, 11.4421f;
						case 3:
							return -429.2764f, 1115.7343f, 325.768f;
						case 4:
							return 301.0331f, 199.3712f, 103.3263f;
						case 5:
							return -1018.9783f, -223.8663f, 36.9415f;
						case 6:
							return -1221.8398f, -1649.904f, 3.252f;
						case 7:
							return -889.7106f, -2191.1985f, 7.5239f;
						case 8:
							return -147.0518f, -873.681f, 28.7611f;
						case 9:
							return -16.8606f, -1085.0706f, 25.6656f;
						case 10:
							return 86.1082f, -1953.3792f, 19.8402f;
						case 11:
							return -1940.936f, 1777.4827f, 173.1246f;
						case 12:
							return -1469.3925f, 884.9769f, 182.0226f;
						case 13:
							return -540.6651f, 437.7372f, 97.6902f;
						case 14:
							return -121.4641f, -224.7865f, 43.8313f;
						case 15:
							return -622.1915f, -918.7624f, 22.5724f;
						case 16:
							return -262.7169f, -1896.8834f, 26.7554f;
						case 17:
							return -1331.406f, -1094.2231f, 5.9714f;
						case 18:
							return 220.3f, -2393.6f, 8.2f;
						case 19:
							return 245.0228f, -386.8258f, 44.4038f;
						default:
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -2319.2576f, 385.4325f, 173.4667f;
						case 1:
							return -3068.4258f, 781.3279f, 20.3519f;
						case 2:
							return -173.0154f, 820.308f, 202.1197f;
						case 3:
							return -432.3228f, 1598.7004f, 355.7407f;
						case 4:
							return -1526.0046f, -924.8728f, 9.1219f;
						case 5:
							return -731.3326f, -1418.4187f, 4.0005f;
						case 6:
							return -1380.0372f, 55.9278f, 52.6801f;
						case 7:
							return 219.5366f, -994.8997f, 28.1337f;
						case 8:
							return -921.9598f, -725.2501f, 18.9185f;
						case 9:
							return -561.322f, -133.5207f, 37.0715f;
						case 10:
							return -648.5416f, 134.043f, 56.21f;
						case 11:
							return 141.1357f, -3108.8296f, 4.8963f;
						case 12:
							return -756.8464f, -2295.487f, 11.8583f;
						case 13:
							return 148.3493f, -1316.6611f, 27.9568f;
						case 14:
							return -229.014f, -639.0449f, 32.459f;
						case 15:
							return -452.0465f, -987.7502f, 22.5453f;
						case 16:
							return -134.8617f, 380.4401f, 112.0776f;
						case 17:
							return -1501.0187f, 1494.9048f, 115.0624f;
						case 18:
							return -112.7636f, -1603.8342f, 30.7043f;
						case 19:
							return -1862.7994f, -356.2964f, 48.2105f;
						default:
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -1644.7806f, 217.4754f, 59.6411f;
						case 1:
							return -1497.123f, 87.3942f, 54.1503f;
						case 2:
							return 234.8292f, 1174.5294f, 224.4599f;
						case 3:
							return 7.8968f, 881.3893f, 201.8878f;
						case 4:
							return -1988.6599f, 549.9285f, 109.4543f;
						case 5:
							return -2716.46f, 1505.0603f, 105.5562f;
						case 6:
							return -1336.0641f, -3044.716f, 12.9444f;
						case 7:
							return -430.9725f, -2667.3162f, 5.0002f;
						case 8:
							return -800.557f, -1305.2664f, 4.004f;
						case 9:
							return -1293.2601f, -694.4807f, 23.945f;
						case 10:
							return -534.2971f, -221.9456f, 36.6498f;
						case 11:
							return -334.2248f, -394.1065f, 29.1848f;
						case 12:
							return -2.8971f, -737.8043f, 43.2647f;
						case 13:
							return -890.7894f, -2188.9248f, 7.537f;
						case 14:
							return 286.0641f, -1575.2496f, 29.5322f;
						case 15:
							return -1339.7352f, -1419.3661f, 3.3134f;
						case 16:
							return -150.2143f, 280.59f, 92.7769f;
						case 17:
							return -747.6499f, 829.1489f, 212.8836f;
						case 18:
							return -3021.3882f, 84.0667f, 10.6696f;
						case 19:
							return -888.8259f, -853.0222f, 19.5661f;
						default:
					}
					break;
			}
			break;
		case 3:
			switch (func_12())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 902.287f, 510.7179f, 120.8523f;
						case 1:
							return 1456.2025f, 1113.483f, 113.334f;
						case 2:
							return 2762.125f, 1590.0522f, 23.501f;
						case 3:
							return 2578.003f, 458.7128f, 107.4552f;
						case 4:
							return 1663.7466f, 1.9511f, 172.7751f;
						case 5:
							return 1052.8744f, -724.9408f, 56.4864f;
						case 6:
							return 484.3263f, -3049.7993f, 5.2247f;
						case 7:
							return 982.731f, -1920.7716f, 30.1349f;
						case 8:
							return 1148.7087f, -1329.5135f, 33.6567f;
						case 9:
							return 408.8101f, -209.592f, 58.9155f;
						case 10:
							return 461.308f, -752.5385f, 26.3581f;
						case 11:
							return 815.4747f, -2977.2458f, 5.0207f;
						case 12:
							return 2825.034f, -651.0193f, 0.8965f;
						case 13:
							return 660.889f, -1502.2515f, 9.6817f;
						case 14:
							return 1103.7545f, -2209.4155f, 29.9045f;
						case 15:
							return 470.2669f, -2185.725f, 4.9177f;
						case 16:
							return 1736.9905f, -1597.7356f, 111.5363f;
						case 17:
							return 984.1426f, -106.7406f, 73.3531f;
						case 18:
							return 760.9095f, -1194.1288f, 23.2907f;
						case 19:
							return 1437.606f, -967.2255f, 47.8342f;
						default:
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1284.4518f, -1748.1f, 51.06f;
						case 1:
							return 899.0267f, -1732.8727f, 29.4219f;
						case 2:
							return 844.1935f, -1342.2891f, 25.0612f;
						case 3:
							return 1533.4552f, 825.0833f, 76.4297f;
						case 4:
							return 2574.2585f, 595.1662f, 100.5051f;
						case 5:
							return 1174.3232f, -397.1559f, 66.7877f;
						case 6:
							return 1120.4727f, -1084.1332f, 27.0693f;
						case 7:
							return 854.0258f, -2128.9202f, 29.4338f;
						case 8:
							return 558.5102f, -2599.741f, 4.8526f;
						case 9:
							return 306.5786f, -1453.5265f, 28.9674f;
						case 10:
							return 481.9433f, -859.8637f, 24.4724f;
						case 11:
							return 1251.554f, -2568.3816f, 41.7161f;
						case 12:
							return 363.4163f, -2013.077f, 22.1949f;
						case 13:
							return 1887.9799f, 281.3989f, 161.7714f;
						case 14:
							return 1048.4875f, -33.3615f, 75.1848f;
						case 15:
							return 532.1608f, -28.1916f, 69.6295f;
						case 16:
							return 699.9807f, -302.5707f, 58.2413f;
						case 17:
							return 755.5129f, 1284.8956f, 359.2967f;
						case 18:
							return 2263.135f, 2041.8898f, 127.7688f;
						case 19:
							return 745.4241f, 221.6368f, 86.03f;
						default:
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 711.9951f, 1196.1539f, 324.311f;
						case 1:
							return 1535.6371f, 1702.3508f, 108.696f;
						case 2:
							return 2466.8489f, 1467.3457f, 35.2036f;
						case 3:
							return 1928.7968f, 542.422f, 173.2023f;
						case 4:
							return 823.4749f, -2355.1768f, 29.3347f;
						case 5:
							return 554.8793f, -1776.5265f, 28.1688f;
						case 6:
							return 577.5936f, -1433.5978f, 18.6988f;
						case 7:
							return 889.3414f, -537.8987f, 57.1785f;
						case 8:
							return 997.0569f, 487.5795f, 98.0672f;
						case 9:
							return 693.1806f, -1012.6031f, 21.7255f;
						case 10:
							return 918.2639f, 50.3715f, 79.7648f;
						case 11:
							return 437.7138f, 219.698f, 102.1676f;
						case 12:
							return 325.8159f, -209.7308f, 53.0863f;
						case 13:
							return 2477.3035f, -383.8761f, 93.4022f;
						case 14:
							return 1505.583f, -2134.0852f, 75.3714f;
						case 15:
							return 1939.1906f, -1415.9713f, 146.844f;
						case 16:
							return 1200.1766f, -1478.3298f, 33.8595f;
						case 17:
							return 1202.1403f, -3242.3633f, 4.8994f;
						case 18:
							return 1097.6267f, -2047.1115f, 30.0051f;
						case 19:
							return 1400.881f, -572.3765f, 73.3388f;
						default:
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_12()//Position - 0x1F4D
{
	return Local_165.f_1.f_13;
}

int func_13()//Position - 0x1F5C
{
	return Local_165.f_1.f_12;
}

int func_14()//Position - 0x1F6B
{
	return Local_165.f_1.f_11;
}

int func_15()//Position - 0x1F7A
{
	return Local_165.f_1.f_10;
}

int func_16()//Position - 0x1F89
{
	return Local_165.f_1.f_9;
}

void func_17()//Position - 0x1F98
{
	int iVar0;
	int iVar1[3];
	int iVar2;
	int iVar3;
	int iVar4;
	iVar3 = func_16();
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (func_27(iVar2) && !__LIB_3__::func_193(146, iVar3, iVar2, 0))
		{
			iVar1[iVar0] = iVar2;
			iVar0++;
		}
		iVar2++;
	}
	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	switch (func_16())
	{
		case 0:
			func_24(iVar1[iVar4]);
			break;
		case 1:
			func_23(iVar1[iVar4]);
			break;
		case 2:
			func_22(iVar1[iVar4]);
			break;
		case 3:
			func_18(iVar1[iVar4]);
			break;
	}
}

void func_18(var uParam0)//Position - 0x2043
{
	Local_165.f_1.f_13 = uParam0;
	__LIB_12__::func_550(__LIB_2__::func_41(146, func_16(), Local_165.f_1.f_10, 0));
}

void func_22(var uParam0)//Position - 0x2A82
{
	Local_165.f_1.f_12 = uParam0;
	__LIB_12__::func_550(__LIB_2__::func_41(146, func_16(), Local_165.f_1.f_10, 0));
}

void func_23(var uParam0)//Position - 0x2AA9
{
	Local_165.f_1.f_11 = uParam0;
	__LIB_12__::func_550(__LIB_2__::func_41(146, func_16(), Local_165.f_1.f_10, 0));
}

void func_24(var uParam0)//Position - 0x2AD0
{
	Local_165.f_1.f_10 = uParam0;
	__LIB_12__::func_550(__LIB_2__::func_41(146, func_16(), Local_165.f_1.f_10, 0));
}

int func_27(int iParam0)//Position - 0x2C1B
{
	switch (func_16())
	{
		case 0:
			return func_31(iParam0);
		case 1:
			return func_30(iParam0);
		case 2:
			return func_29(iParam0);
		case 3:
			return func_28(iParam0);
		default:
	}
	return 1;
}

int func_28(int iParam0)//Position - 0x2C69
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11705 /* Tunable: HUNT_THE_BEAST_DISABLE_SE_GROUP_1 */)
			{
				return 0;
			}
			break;
		case 1:
			if (Global_262145.f_11706 /* Tunable: HUNT_THE_BEAST_DISABLE_SE_GROUP_2 */)
			{
				return 0;
			}
			break;
		case 2:
			if (Global_262145.f_11707 /* Tunable: HUNT_THE_BEAST_DISABLE_SE_GROUP_3 */)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_29(int iParam0)//Position - 0x2CBE
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11702 /* Tunable: HUNT_THE_BEAST_DISABLE_SW_GROUP_1 */)
			{
				return 0;
			}
			break;
		case 1:
			if (Global_262145.f_11703 /* Tunable: HUNT_THE_BEAST_DISABLE_SW_GROUP_2 */)
			{
				return 0;
			}
			break;
		case 2:
			if (Global_262145.f_11704 /* Tunable: HUNT_THE_BEAST_DISABLE_SW_GROUP_3 */)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_30(int iParam0)//Position - 0x2D13
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11699 /* Tunable: HUNT_THE_BEAST_DISABLE_NE_GROUP_1 */)
			{
				return 0;
			}
			break;
		case 1:
			if (Global_262145.f_11700 /* Tunable: HUNT_THE_BEAST_DISABLE_NE_GROUP_2 */)
			{
				return 0;
			}
			break;
		case 2:
			if (Global_262145.f_11701 /* Tunable: HUNT_THE_BEAST_DISABLE_NE_GROUP_3 */)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_31(int iParam0)//Position - 0x2D68
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11696 /* Tunable: HUNT_THE_BEAST_DISABLE_NW_GROUP_1 */)
			{
				return 0;
			}
			break;
		case 1:
			if (Global_262145.f_11697 /* Tunable: HUNT_THE_BEAST_DISABLE_NW_GROUP_2 */)
			{
				return 0;
			}
			break;
		case 2:
			if (Global_262145.f_11698 /* Tunable: HUNT_THE_BEAST_DISABLE_NW_GROUP_3 */)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_32()//Position - 0x2DBD
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4[4];
	Var4[0 /*3*/] = { -3500f, 4000f, 30f };
	Var4[1 /*3*/] = { 4000f, 4000f, 30f };
	Var4[2 /*3*/] = { -3500f, -2000f, 30f };
	Var4[3 /*3*/] = { 4000f, -2000f, 30f };
	fVar0 = 99999.9f;
	iVar2 = -1;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (func_35(iVar3))
		{
			fVar1 = SYSTEM::VDIST(func_34(), Var4[iVar3 /*3*/]);
			if (fVar1 < fVar0)
			{
				iVar2 = iVar3;
				fVar0 = fVar1;
			}
		}
		iVar3++;
	}
	func_33(iVar2);
}

void func_33(int iParam0)//Position - 0x2E6F
{
	Local_165.f_1.f_9 = iParam0;
}

Vector3 func_34()//Position - 0x2E80
{
	return Local_748;
}

int func_35(int iParam0)//Position - 0x2E8D
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_11692 /* Tunable: HUNT_THE_BEAST_DISABLE_NW_QUARTER */)
			{
				return 0;
			}
			break;
		case 1:
			if (Global_262145.f_11693 /* Tunable: HUNT_THE_BEAST_DISABLE_NE_QUARTER */)
			{
				return 0;
			}
			break;
		case 2:
			if (Global_262145.f_11694 /* Tunable: HUNT_THE_BEAST_DISABLE_SW_QUARTER */)
			{
				return 0;
			}
			break;
		case 3:
			if (Global_262145.f_11695 /* Tunable: HUNT_THE_BEAST_DISABLE_SE_QUARTER */)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_36(var uParam0, int iParam1)//Position - 0x2EF9
{
	struct<3> Var0;
	Var0.f_0 = -490124271;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

bool func_41()//Position - 0x3028
{
	return Local_165.f_1.f_7;
}

int func_42()//Position - 0x3037
{
	bool bVar0;
	var uVar1[100];
	int iVar2[32];
	int iVar3;
	bool bVar4;
	int iVar5;
	bVar4 = -1;
	bVar0 = false;
	while (bVar0 < 32)
	{
		iVar2[bVar0] = -1;
		bVar0++;
	}
	func_51(0, &bVar0, &iVar2, &iVar3);
	if (iVar3 <= 0)
	{
		bVar0 = false;
		iVar3 = 0;
		bVar0 = false;
		while (bVar0 < 32)
		{
			iVar2[bVar0] = -1;
			bVar0++;
		}
		func_51(1, &bVar0, &iVar2, &iVar3);
	}
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uLocal_726, bVar0))
		{
			if (BitTest(uLocal_725, Local_712[bVar0 /*18*/].f_1))
			{
				if (func_1782(1, bVar0))
				{
					bVar4 = bVar0;
				}
			}
		}
		bVar0++;
	}
	if (bVar4 == -1)
	{
		if (iVar3 > 0)
		{
			iVar5 = 0;
			while (iVar5 < 100)
			{
				uVar1[iVar5] = iVar2[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3)];
				iVar5++;
			}
			iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(50, 100);
			func_50(uVar1[iVar5]);
			func_44(Local_712[uVar1[iVar5] /*18*/].f_1);
			func_43(ENTITY::GET_ENTITY_COORDS(Local_713[Local_712[func_1930() /*18*/].f_1 /*3*/].f_2, false));
			return 1;
		}
	}
	else
	{
		func_50(bVar4);
		func_44(Local_712[bVar4 /*18*/].f_1);
		func_43(ENTITY::GET_ENTITY_COORDS(Local_713[func_41() /*3*/].f_2, false));
		return 1;
	}
	return 0;
}

void func_43(struct<3> Param0)//Position - 0x3180
{
	Local_748 = { Param0 };
}

void func_44(var uParam0)//Position - 0x3191
{
	Local_165.f_1.f_7 = uParam0;
	if (BitTest(uLocal_725, func_41()))
	{
		func_49();
		if (!func_48())
		{
			func_47(1);
		}
	}
	else
	{
		func_45();
	}
}

void func_45()//Position - 0x31C5
{
	Global_2815059.f_5120 = __LIB_0__::func_162();
}

void func_47(int iParam0)//Position - 0x31E1
{
	Global_2815059.f_5122 = iParam0;
}

bool func_48()//Position - 0x31F2
{
	return Global_2815059.f_5122;
}

void func_49()//Position - 0x3201
{
	Global_2815059.f_5120 = Local_713[func_41() /*3*/];
}

void func_50(bool bParam0)//Position - 0x3219
{
	Local_165.f_1.f_6 = bParam0;
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x322A
{
	*iParam1 = 0;
	while (*iParam1 < 32)
	{
		if (BitTest(uLocal_726, *iParam1))
		{
			if (BitTest(uLocal_725, Local_712[*iParam1 /*18*/].f_1))
			{
				if ((((((((((!__LIB_10__::func_225(Local_712[*iParam1 /*18*/].f_1) && !BitTest(Global_1853348[Local_712[*iParam1 /*18*/].f_1 /*834*/].f_267.f_30, 11)) && !func_1782(10, *iParam1)) && !__LIB_2__::func_154(Local_712[*iParam1 /*18*/].f_1)) && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Local_712[*iParam1 /*18*/].f_1, "am_ferriswheel", -1)) && (!__LIB_1__::func_744(Local_712[*iParam1 /*18*/].f_1) || iParam0)) && !__LIB_1__::func_864(Local_712[*iParam1 /*18*/].f_1)) && !__LIB_7__::func_259(Local_712[*iParam1 /*18*/].f_1)) && !__LIB_3__::func_171(Local_712[*iParam1 /*18*/].f_1)) && !__LIB_1__::func_832(PLAYER::PLAYER_ID())) && !Global_2815059.f_888)
				{
					if (func_1782(0, *iParam1))
					{
						(*iParam2)[*iParam3] = *iParam1;
						*iParam3++;
					}
				}
			}
		}
		*iParam1++;
	}
}

void func_62(int iParam0)//Position - 0x39B1
{
	Local_165.f_1 = iParam0;
}

int func_63()//Position - 0x39C0
{
	return Local_165.f_1;
}

void func_64(int iParam0)//Position - 0x39CD
{
	Local_165.f_0 = iParam0;
}

int func_65(bool bParam0)//Position - 0x39DA
{
	switch (Global_2725380)
	{
		case 0:
			if (__LIB_12__::func_575())
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
				Global_2725380 = 1;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_12__::func_575())
				{
					func_67();
					PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
					Global_2725380 = 2;
					__LIB_0__::func_794(&Global_2725381);
				}
				else
				{
					return 1;
				}
			}
			break;
		case 2:
			if ((__LIB_3__::func_99(&Global_2725381, 500, 0) && PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID())) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				if (bParam0)
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					Global_2725380 = 3;
				}
				else
				{
					Global_2725380 = 4;
				}
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				Global_2725380 = 0;
				__LIB_0__::func_794(&Global_2725381);
				return 1;
			}
			else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			break;
		case 4:
			Global_2725380 = 0;
			__LIB_0__::func_794(&Global_2725381);
			return 1;
			break;
	}
	return 0;
}

void func_67()//Position - 0x3B8D
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0f, false, false, true, -1, -1);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), Global_2725383);
		ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), Global_2725383, 0);
		__LIB_3__::func_375();
		PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
		NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(PLAYER::PLAYER_PED_ID(), true);
		__LIB_25__::func_430(5000);
		__LIB_0__::func_794(&(Global_2667225.f_2828));
		if (Global_2667225.f_2830 > 0)
		{
			EVENT::REMOVE_SHOCKING_EVENT(Global_2667225.f_2830);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 189, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 407, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 410, false);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 411, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 410, false);
		PED::SET_DISABLE_HIGH_FALL_DEATH(PLAYER::PLAYER_PED_ID(), false);
		MISC::SET_PLAYER_IS_IN_ANIMAL_FORM(false);
		__LIB_22__::func_621(0);
		PLAYER::SET_PLAYER_MAX_EXPLOSIVE_DAMAGE(PLAYER::PLAYER_ID(), -1f);
		PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		func_68();
		Global_2725380 = 0;
		__LIB_0__::func_794(&Global_2725381);
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_197), 29);
	}
}

void func_68()//Position - 0x3CB1
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<10> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	iVar0 = __LIB_0__::func_5();
	if (__LIB_0__::func_253(386, iVar0) == 0)
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	__LIB_18__::func_306(iVar0);
	func_400(iVar0);
	__LIB_38__::func_217(iVar0, bVar1);
	bVar2 = __LIB_1__::func_360(2103, iVar0, 0) >= true;
	iVar3 = PLAYER::PLAYER_PED_ID();
	func_296(0, 3, iVar3, iVar0, 0, 0, 0);
	func_287(1);
	func_284(iVar3, iVar0);
	if (!bVar2)
	{
		__LIB_18__::func_466(PLAYER::PLAYER_PED_ID(), iVar0);
	}
	else
	{
		__LIB_2__::func_780(iVar3, iVar0, 0);
	}
	PED::GET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), &Var4);
	__LIB_1__::func_354(2097, Var4.f_0, iVar0, 1, 0);
	__LIB_1__::func_354(2098, Var4.f_1, iVar0, 1, 0);
	__LIB_1__::func_354(2099, Var4.f_2, iVar0, 1, 0);
	__LIB_1__::func_354(2100, Var4.f_3, iVar0, 1, 0);
	__LIB_1__::func_354(2101, Var4.f_4, iVar0, 1, 0);
	__LIB_1__::func_354(2102, Var4.f_5, iVar0, 1, 0);
	__LIB_18__::func_308(134, Var4.f_6, iVar0, 1);
	__LIB_18__::func_308(135, Var4.f_7, iVar0, 1);
	__LIB_18__::func_308(136, Var4.f_8, iVar0, 1);
	__LIB_1__::func_348(160, Var4.f_9, iVar0, 1);
	iVar5 = __LIB_1__::func_360(2153, iVar0, 0);
	iVar6 = __LIB_1__::func_360(2160, iVar0, 0);
	iVar7 = __LIB_1__::func_360(2053, iVar0, 0);
	iVar8 = iVar7;
	func_69(PLAYER::PLAYER_PED_ID(), 2, iVar8, 0, -1, 0, 0, 0, iVar5, iVar6, iVar0, 0, 0, 0);
	if (!MISC::IS_PC_VERSION())
	{
		__LIB_1__::func_354(753, __LIB_0__::func_253(385, iVar0), iVar0, 1, 0);
		__LIB_1__::func_354(2053, __LIB_0__::func_253(385, iVar0), iVar0, 1, 0);
		__LIB_1__::func_348(161, 1, iVar0, 1);
	}
	else if (__LIB_0__::func_253(385, iVar0) != 0)
	{
		__LIB_1__::func_354(753, __LIB_0__::func_253(385, iVar0), iVar0, 1, 0);
		__LIB_1__::func_354(2053, __LIB_0__::func_253(385, iVar0), iVar0, 1, 0);
		__LIB_1__::func_348(161, 1, iVar0, 1);
	}
	iVar7 = __LIB_1__::func_360(2053, iVar0, 0);
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3E94
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
		Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
			func_219(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 10, 0, -1) };
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
						func_219(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_219(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_69(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_219(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iVar0, func_206(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_69(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_2__::func_979();
			if (iVar17 != -1)
			{
				__LIB_2__::func_978(iVar17, 0, iParam10);
			}
			func_197(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_219(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_5__::func_129(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_69(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_219(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_69(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_188(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_69(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_69(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_184(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_69(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_3__::func_408(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_69(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_69(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar32, -1) };
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
								func_69(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_3__::func_408(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
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
								func_69(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_69(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_69(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_3__::func_303(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_197(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_184(iVar5, func_206(iParam0, 8, -1), iParam2, func_206(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_360(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_360(2160, iParam10, 0);
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
				func_113(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_184(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_197(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_303(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_184(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
				iVar52 = __LIB_1__::func_360(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_360(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_360(2102, iParam10, 0);
				fVar55 = __LIB_1__::func_680(135, iParam10);
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
				__LIB_2__::func_996(iParam0, iParam10);
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
						func_69(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_69(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_184(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_184(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_5__::func_129(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_69(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_184(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_69(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_98(iParam0, 9, iVar63))
						{
							func_69(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_69(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_69(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_360(2042, -1, 0);
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
						func_69(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_206(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_206(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_69(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_69(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_69(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_69(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_69(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_69(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_69(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_69(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_69(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_69(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_188(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_69(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_5__::func_129(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_69(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_70(iParam0, &uVar4))
		{
			func_69(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_69(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_69(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_69(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_206(iParam0, 3, -1), iVar10);
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
				func_69(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_70(int iParam0, var uParam1)//Position - 0x5D40
{
	int iVar0;
	int iVar1;
	*uParam1 = func_206(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_360(754, Global_78127, 0) != -99 && __LIB_0__::func_438())
	{
		if (__LIB_0__::func_236() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_360(754, Global_78127, 0) == 0 && __LIB_1__::func_360(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				if (__LIB_1__::func_360(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_360(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_360(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_360(755, Global_78127, 0);
		if (!func_98(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_342(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_360(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_360(753, Global_78127, 0);
			}
			__LIB_1__::func_354(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_354(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)//Position - 0xA5BF
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
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iVar0, iParam1, iParam2, -1) };
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
				if (!func_98(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_98(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_98(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_3__::func_310(iVar0, iVar4, iVar1, -1) };
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
			if (__LIB_1__::func_360(1759, Global_78127, 0) != uVar8[10])
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
			if (!func_98(iParam0, 14, uVar11[iVar10]))
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
						return func_98(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_98(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_113(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x116D1
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_3__::func_222(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_0__::func_450(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_2__::func_978(iVar1, 1, iParam2);
	}
	func_114(iParam0, bParam3, 0, -1);
}

void func_114(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1171D
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
		bVar3 = func_159(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_150(iParam0, iParam3);
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
			if (__LIB_2__::func_761(iVar6, iVar0))
			{
				if (__LIB_0__::func_445(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_2__::func_761(123, iVar0))
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
					if (__LIB_2__::func_761(iVar10, iVar0))
					{
						if (__LIB_2__::func_998(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_3__::func_228(Var9.f_2, Var9.f_3, iVar10))
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

int func_150(int iParam0, int iParam1)//Position - 0x209F2
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_206(iParam0, 11, -1);
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
			iVar2 = __LIB_1__::func_360(1759, -1, 0);
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
				iVar5 = func_206(iParam0, 11, -1);
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

int func_159(int iParam0, bool bParam1)//Position - 0x20E50
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
							iVar2 = __LIB_2__::func_999(joaat("MP_M_Freemode_01"), 11, func_206(iParam0, 11, -1), 0);
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
						if (__LIB_2__::func_761(13, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(14, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(15, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(16, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(71, -1))
						{
							return 1;
						}
						else if (__LIB_2__::func_761(72, -1))
						{
						}
						else if (__LIB_2__::func_778(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_206(iParam0, 11, -1);
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
						iVar5 = func_206(iParam0, 8, -1);
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
							iVar7 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_206(iParam0, 11, -1), 0);
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
						iVar8 = func_206(iParam0, 11, -1);
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
							iVar10 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_206(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_2__::func_999(joaat("MP_F_Freemode_01"), 11, func_206(iParam0, 11, -1), 0);
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
						iVar12 = func_206(iParam0, 8, -1);
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

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2ACF1
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
					iVar0 = func_184(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_184(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_188(int iParam0)//Position - 0x2C202
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
		if (!func_193(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_193(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2CBCC
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_206(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2F5B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_199(iParam0))
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
			__LIB_3__::func_222(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_3__::func_223(iVar0, iParam2, 13) && !__LIB_3__::func_223(iVar0, iParam2, 14)) && !__LIB_3__::func_223(iVar0, iParam2, 15)) && !__LIB_3__::func_223(iVar0, iParam2, 16)) && !__LIB_3__::func_223(iVar0, iParam2, 71)) && !__LIB_3__::func_223(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_2__::func_999(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_2__::func_977(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_2__::func_978(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_199(int iParam0)//Position - 0x2F743
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
				iVar1 = func_206(iParam0, 11, -1);
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
				iVar3 = func_206(iParam0, 11, -1);
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

int func_206(int iParam0, int iParam1, int iParam2)//Position - 0x2FBD5
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
				if (func_98(iParam0, iParam1, iVar0))
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
				if (func_98(iParam0, iParam1, iVar1))
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

void func_219(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x32C54
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
		Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_2__::func_411(Global_2883588, 2, 1, 1, -1);
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
							__LIB_2__::func_411(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_219(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_219(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_219(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_360(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_354(iVar6, iVar7, Global_78127, 1, 0);
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
							func_219(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_219(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_219(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_219(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_219(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_219(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_219(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_284(int iParam0, int iParam1)//Position - 0x4FC15
{
	int iVar0;
	bool bVar1;
	struct<17> Var2;
	bVar1 = ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_M_Freemode_01");
	iVar0 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 7, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 7), PED::GET_PED_TEXTURE_VARIATION(iParam0, 7));
	if (bVar1)
	{
		switch (iVar0)
		{
			case joaat("DLC_MP_LUXE_M_TEETH_14_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_0_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_14_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_0_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_14_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_0_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_15_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_1_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_15_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_1_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_15_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_1_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_16_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_2_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_16_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_2_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_16_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_2_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_17_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_3_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_17_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_3_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_18_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_4_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_18_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_4_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_19_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_5_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_19_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_5_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
		}
		switch (iVar0)
		{
			case joaat("DLC_MP_LUXE_M_TEETH_20_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_6_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_20_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_6_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_20_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_6_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_21_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_7_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_21_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_7_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_21_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_7_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_22_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_8_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_22_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_8_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_22_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_8_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_23_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_9_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_23_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_9_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_23_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_9_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
		}
		switch (iVar0)
		{
			case joaat("DLC_MP_LUXE_M_TEETH_24_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_10_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_24_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_10_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_24_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_10_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_25_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_11_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_25_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_11_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_25_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_11_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_26_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_12_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_26_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_12_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_26_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_12_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_27_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_13_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_27_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_13_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_27_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_13_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_28_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_14_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_28_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_14_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_28_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_14_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_29_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_15_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_29_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_15_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
		}
		switch (iVar0)
		{
			case joaat("DLC_MP_LUXE_M_TEETH_29_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_15_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_29_3"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_15_3");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_29_4"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_15_4");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_30_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_16_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_30_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_16_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_30_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_16_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_30_3"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_16_3");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_30_4"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_16_4");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_31_0"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_17_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_31_1"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_17_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_31_2"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_17_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_31_3"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_17_3");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_M_TEETH_31_4"):
				iVar0 = joaat("DLC_MP_LUXE_M_PEARS_17_4");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
		}
		switch (iVar0)
		{
			case joaat("DLC_MP_LUXE2_M_TEETH_21_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_0_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_21_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_0_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_22_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_1_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_22_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_1_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_23_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_2_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_23_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_2_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_24_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_3_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_24_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_3_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_24_2"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_3_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_24_3"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_3_3");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_25_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_4_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_25_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_4_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_25_2"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_4_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_25_3"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_4_3");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_26_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_5_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_26_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_5_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_26_2"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_5_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_26_3"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_5_3");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_27_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_6_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_27_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_6_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_28_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_7_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_28_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_7_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_29_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_8_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_29_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_8_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_30_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_9_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_30_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_9_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_30_2"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_9_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_31_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_10_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_31_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_10_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_31_2"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_10_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_32_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_11_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_32_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_11_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_32_2"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_11_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_33_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_13_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_33_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_13_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_34_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_14_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_34_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_14_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_35_0"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_15_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE2_M_TEETH_35_1"):
				iVar0 = joaat("DLC_MP_LUXE2_M_PEARS_15_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case joaat("DLC_MP_LUXE_F_TEETH_14_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_0_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_15_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_1_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_16_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_2_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_17_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_3_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_17_1"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_3_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_17_2"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_3_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_18_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_4_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_18_1"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_4_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_18_2"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_4_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_19_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_5_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_19_1"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_5_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_19_2"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_5_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
		}
		switch (iVar0)
		{
			case joaat("DLC_MP_LUXE_F_TEETH_20_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_6_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_20_1"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_6_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_20_2"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_6_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_21_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_7_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_21_1"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_7_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_21_2"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_7_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_22_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_8_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_22_1"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_8_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_22_2"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_8_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_23_0"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_9_0");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_23_1"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_9_1");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			case joaat("DLC_MP_LUXE_F_TEETH_23_2"):
				iVar0 = joaat("DLC_MP_LUXE_F_PEARS_9_2");
				func_285(iParam0, iVar0, Var2, iParam1);
				break;
			}
	}
}

void func_285(int iParam0, int iParam1, struct<7> Param2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x50B6A
{
	int iVar0;
	FILES::GET_SHOP_PED_PROP(iParam1, &Param2);
	iVar0 = __LIB_0__::func_349(iParam0, Param2.f_3, Param2.f_4, Param2.f_6);
	if (iVar0 != -99)
	{
		func_69(iParam0, 14, iVar0, 0, -1, 0, 0, 0, -1, -1, iParam13, 0, 0, 0);
		func_69(iParam0, 7, 0, 0, -1, 0, 0, 0, -1, -1, iParam13, 0, 0, 0);
		__LIB_1__::func_379(425, Param2.f_3, iParam13);
		__LIB_1__::func_379(434, Param2.f_4, iParam13);
	}
}

void func_287(bool bParam0)//Position - 0x50C04
{
	int iVar0;
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		if (__LIB_0__::func_137(3610, -1))
		{
		}
		iVar0 = __LIB_1__::func_360(2042, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (__LIB_2__::func_159(0))
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		}
		else
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_12__::func_412(Global_2824753), 0);
		}
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_290(__LIB_1__::func_360(2042, -1, 0), 1);
		Global_2815059.f_287 = 1;
		func_288(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_288(int iParam0, int iParam1, int iParam2)//Position - 0x50CDD
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		if (iParam2 == -1)
		{
			iParam2 = __LIB_1__::func_360(2042, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, __LIB_0__::func_533(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_242(PLAYER::GET_PLAYER_PED(iParam0), iParam2), __LIB_0__::func_114(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = __LIB_1__::func_360(586, -1, 0);
		}
		if (__LIB_2__::func_159(1) && __LIB_0__::func_287(iParam0))
		{
			__LIB_3__::func_340(iParam0, __LIB_12__::func_412(Global_2824753), 0);
		}
		else
		{
			__LIB_3__::func_340(iParam0, iParam1, 0);
		}
		if (BitTest(Global_4718592.f_28, 4))
		{
			__LIB_3__::func_340(iParam0, Global_1836612, 1);
		}
		__LIB_0__::func_440(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

void func_290(int iParam0, int iParam1)//Position - 0x50DF2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_1__::func_607();
		__LIB_1__::func_354(2042, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iParam0), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iParam0), false);
		__LIB_0__::func_440(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_288(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

void func_296(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x51163
{
	struct<50> Var0;
	int iVar1;
	int iVar2;
	__LIB_18__::func_306(iParam3);
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (__LIB_18__::func_307(iParam2) == 0)
	{
		PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam2, Global_1576215, Global_1576216, Global_1576217, 0);
		PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam2, Global_1576215, Global_1576216, Global_1576217, 1);
		PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam2, Global_1576215, Global_1576216, Global_1576217, 2);
		PED::SET_HEAD_BLEND_PALETTE_COLOR(iParam2, Global_1576215, Global_1576216, Global_1576217, 3);
		if (iParam0 == 0)
		{
			if (!__LIB_0__::func_287(PLAYER::PLAYER_ID()) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Var0 = 12;
				Var0.f_13 = 12;
				Var0.f_26 = 12;
				Var0.f_39 = 9;
				Var0.f_49 = 9;
				__LIB_11__::func_800(&Var0, iParam3);
				func_317(iParam2, &Var0, bParam5, bParam6, 1, 0);
				func_297(&iParam2, iParam1, iParam3, 0);
				if (!bParam5)
				{
					iVar1 = __LIB_0__::func_206(iParam2, Var0.f_13[1], Var0[1], 1);
					func_69(iParam2, 1, iVar1, 0, -1, 0, 0, 0, -1, -1, iParam3, 0, 0, 0);
				}
				if (!bParam6)
				{
					iVar2 = __LIB_0__::func_349(iParam2, Var0.f_39[0], Var0.f_49[0], 0);
					func_69(iParam2, 14, iVar2, 0, -1, 0, 0, 0, -1, -1, iParam3, 0, 0, 0);
				}
			}
		}
		else if (bParam4)
		{
			func_297(&iParam2, iParam1, iParam3, 0);
		}
		if (__LIB_0__::func_438())
		{
			if (NETWORK::NETWORK_PLAYER_IS_CHEATER() || NETWORK::NETWORK_PLAYER_IS_BADSPORT())
			{
				PED::SET_PED_PROP_INDEX(iParam2, 0, 1, 0, false);
			}
		}
	}
}

void func_297(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x512D5
{
	int iVar0;
	int iVar1;
	if (__LIB_18__::func_465(iParam1, iParam2) == 0)
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iParam1)
	{
		case 0:
			break;
		case 2:
			if (__LIB_18__::func_465(iParam1, iParam2))
			{
				func_311(iParam0, __LIB_0__::func_253(1406, iParam2), 1);
			}
			break;
		case 3:
			if (__LIB_18__::func_465(iParam1, iParam2))
			{
				if (Global_1576214)
				{
					func_311(iParam0, __LIB_0__::func_253(1406, iParam2), 1);
				}
			}
			break;
		case 4:
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == Global_152058.f_7)
			{
				switch (iVar0)
				{
					case 0:
						func_69(*iParam0, 11, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					case 1:
						func_69(*iParam0, 11, 48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					case 2:
						func_69(*iParam0, 11, 64, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					case 3:
						func_69(*iParam0, 11, 80, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					default:
						func_69(*iParam0, 11, 96, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
				}
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						func_69(*iParam0, 11, 64, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					case 1:
						func_69(*iParam0, 11, 160, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					case 2:
						func_69(*iParam0, 11, 193, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					case 3:
						func_69(*iParam0, 11, 113, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					default:
						func_69(*iParam0, 11, 140, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						break;
					}
			}
			break;
	}
	if (bParam3)
	{
		__LIB_31__::func_637(*iParam0, iParam2);
	}
}

void func_311(var uParam0, int iParam1, bool bParam2)//Position - 0x523D1
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
	if (__LIB_1__::func_526() == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == Global_152058.f_7)
	{
		iVar0 = 0;
	}
	else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == Global_152058.f_8)
	{
		iVar0 = 0;
	}
	else
	{
		return;
	}
	switch (iParam1)
	{
		case 1:
		case 5:
		case 6:
		case 7:
			iVar1 = Global_1576215;
			iVar2 = Global_1576216;
			iVar3 = Global_1576217;
			break;
		case 8:
		case 2:
			iVar1 = 42;
			iVar2 = 42;
			iVar3 = 42;
			break;
		case 9:
		case 3:
			iVar1 = 255;
			iVar2 = 255;
			iVar3 = 255;
			break;
		case 10:
		case 4:
			iVar1 = 128;
			iVar2 = 128;
			iVar3 = 128;
			break;
	}
	switch (iParam1)
	{
		case 1:
		case 8:
		case 9:
		case 10:
			iVar4 = Global_1576215;
			iVar5 = Global_1576216;
			iVar6 = Global_1576217;
			break;
		case 5:
		case 2:
			iVar4 = 42;
			iVar5 = 42;
			iVar6 = 42;
			break;
		case 6:
		case 3:
			iVar4 = 255;
			iVar5 = 255;
			iVar6 = 255;
			break;
		case 7:
		case 4:
			iVar4 = 128;
			iVar5 = 128;
			iVar6 = 128;
			break;
	}
	switch (iParam1)
	{
		case 1:
			iVar7 = Global_1576215;
			iVar8 = Global_1576216;
			iVar9 = Global_1576217;
			break;
		case 5:
		case 2:
		case 8:
			iVar7 = 42;
			iVar8 = 42;
			iVar9 = 42;
			break;
		case 6:
		case 3:
		case 9:
			iVar7 = 255;
			iVar8 = 255;
			iVar9 = 255;
			break;
		case 7:
		case 4:
		case 10:
			iVar7 = 128;
			iVar8 = 128;
			iVar9 = 128;
			break;
	}
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		PED::DISABLE_HEAD_BLEND_PALETTE_COLOR(*uParam0);
		if (bParam2)
		{
			func_69(*uParam0, 11, iVar0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iVar1, iVar2, iVar3, 0);
		PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iVar7, iVar8, iVar9, 1);
		PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iVar4, iVar5, iVar6, 2);
		PED::SET_HEAD_BLEND_PALETTE_COLOR(*uParam0, iVar7, iVar8, iVar9, 3);
	}
}

void func_317(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x5271B
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
			if (func_392(iParam0, iVar1, &iVar2, 0))
			{
				func_377(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_318(iParam0, iVar1, &iVar2))
			{
				func_377(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_199(iParam0);
			__LIB_1__::func_354(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_1__::func_354(755, uParam1->f_61, Global_78127, 1, 0);
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
			func_69(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_69(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_69(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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
			__LIB_1__::func_354(753, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_354(2053, iVar9, Global_78127, 1, 0);
			__LIB_1__::func_348(161, 1, -1, 1);
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

int func_318(int iParam0, int iParam1, int iParam2)//Position - 0x52BB8
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_319(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_319(int iParam0, int iParam1, int iParam2)//Position - 0x52C44
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
	Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar0, iParam1, iParam2, -1) };
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
				if (!func_319(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_319(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_735(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_319(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_13__::func_735(iVar0, iVar2, iVar1, -1) };
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
			if (!func_319(iParam0, 14, uVar8[iVar7]))
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

int func_377(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x656C8
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
		Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_3__::func_367(iParam1);
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
				Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_3__::func_367(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_21__::func_138(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						__LIB_3__::func_367(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_21__::func_138(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, iVar0, func_381(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_392(iParam0, iVar10, &iVar4, 1))
							{
								func_377(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_377(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_13__::func_735(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_377(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_377(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_377(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_377(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_735(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_377(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_13__::func_735(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_3__::func_367(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_21__::func_138(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_3__::func_367(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_21__::func_138(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_21__::func_138(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_377(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_18__::func_679(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_392(iParam0, iVar10, &iVar4, 0))
		{
			func_377(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_318(iParam0, iVar10, &iVar4))
		{
			func_377(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_381(int iParam0, int iParam1, int iParam2)//Position - 0x66068
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
				if (func_319(iParam0, iParam1, iVar0))
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
				if (func_319(iParam0, iParam1, iVar1))
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

int func_392(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x67D25
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_319(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_400(int iParam0)//Position - 0x68299
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<14> Var4;
	bVar1 = __LIB_0__::func_253(386, iParam0) == false;
	if (bVar1)
	{
		iVar0 = joaat("MP_M_Freemode_01");
	}
	else
	{
		iVar0 = joaat("MP_F_Freemode_01");
	}
	if (__LIB_0__::func_137(4211, iParam0) == 0)
	{
		__LIB_0__::func_186(4211, 1, iParam0);
		iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("NIGHT_VISION"), 0))
		{
			func_69(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else if (__LIB_3__::func_385(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_69(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		iVar3 = __LIB_1__::func_360(2053, iParam0, 0);
		if (iVar3 == -99)
		{
			iVar3 = __LIB_1__::func_360(753, iParam0, 0);
		}
		if (iVar3 == -99)
		{
			return;
		}
		Var4 = { __LIB_3__::func_310(iVar0, 2, iVar3, -1) };
		if (Var4.f_4 != 0 && Var4.f_4 != -1)
		{
			iVar3 = (iVar3 - Var4.f_4);
			func_403(iVar0, 2, iVar3, 1, 0);
			func_401(iVar0, 2, iVar3, 1, 1);
			__LIB_1__::func_379(385, iVar3, iParam0);
			__LIB_1__::func_379(389, 0, iParam0);
			__LIB_1__::func_379(401, Var4.f_3, iParam0);
			__LIB_1__::func_354(2053, iVar3, iParam0, 1, 0);
			__LIB_1__::func_354(753, iVar3, iParam0, 1, 0);
		}
	}
}

int func_401(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x683ED
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		if (BitTest(Global_78130[1 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				if (bParam3)
				{
					__LIB_2__::func_411(Global_2883588, 1, 1, 1, -1);
				}
				else
				{
					__LIB_11__::func_499(Global_2883588, 1, 1, 1, -1);
				}
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				if (bParam3)
				{
					__LIB_2__::func_411(Global_2883588, 1, 1, 1, -1);
				}
				else
				{
					__LIB_11__::func_499(Global_2883588, 1, 1, 1, -1);
				}
			}
			else if (bParam3)
			{
				__LIB_2__::func_411(Global_2883588, 1, 1, 1, -1);
			}
			else
			{
				__LIB_11__::func_499(Global_2883588, 1, 1, 1, -1);
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				iVar0 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Global_2883588);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					FILES::GET_VARIANT_COMPONENT(Global_2883588, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar2 != 0 && iVar2 != joaat("0"))
					{
						__LIB_2__::func_411(iVar2, 1, 1, 1, -1);
					}
					else
					{
						func_401(iParam0, __LIB_0__::func_33(iVar4), uVar3, 1, 0);
					}
					iVar1++;
				}
			}
			if (iParam1 == 12)
			{
				uVar7 = { __LIB_0__::func_459(iParam0, iParam2) };
				iVar5 = 0;
				while (iVar5 <= 14)
				{
					if ((uVar7[iVar5] != -99 && iVar5 != 12) && iVar5 != 14)
					{
						if (iVar5 != 13)
						{
							func_401(iParam0, iVar5, uVar7[iVar5], 1, 1);
							func_403(iParam0, iVar5, uVar7[iVar5], 1, 0);
						}
						else
						{
							uVar8 = { __LIB_0__::func_466(iParam0, uVar7[iVar5]) };
							iVar6 = 0;
							while (iVar6 <= 8)
							{
								if (uVar8[iVar6] >= 10)
								{
									func_401(iParam0, 14, uVar8[iVar6], 1, 1);
									func_403(iParam0, 14, uVar8[iVar6], 1, 0);
								}
								iVar6++;
							}
						}
					}
					iVar5++;
				}
			}
		}
		else
		{
			if (iParam1 != 5)
			{
				iVar9 = __LIB_1__::func_360(__LIB_0__::func_37(iParam1, Global_78130[1 /*14*/].f_2), Global_78127, 0);
				if (bParam3)
				{
					MISC::SET_BIT(&iVar9, Global_78130[1 /*14*/].f_1);
				}
				else
				{
					MISC::CLEAR_BIT(&iVar9, Global_78130[1 /*14*/].f_1);
				}
				__LIB_1__::func_354(__LIB_0__::func_37(iParam1, Global_78130[1 /*14*/].f_2), iVar9, Global_78127, 1, 0);
			}
			if (iParam1 == 12)
			{
				uVar12 = { __LIB_0__::func_459(iParam0, iParam2) };
				iVar10 = 0;
				while (iVar10 <= 14)
				{
					if ((uVar12[iVar10] != -99 && iVar10 != 12) && iVar10 != 14)
					{
						if (iVar10 != 13)
						{
							func_401(iParam0, iVar10, uVar12[iVar10], 1, 1);
							func_403(iParam0, iVar10, uVar12[iVar10], 1, 0);
						}
						else
						{
							uVar13 = { __LIB_0__::func_466(iParam0, uVar12[iVar10]) };
							iVar11 = 0;
							while (iVar11 <= 8)
							{
								func_401(iParam0, 14, uVar13[iVar11], 1, 1);
								func_403(iParam0, 14, uVar13[iVar11], 1, 0);
								iVar11++;
							}
						}
					}
					iVar10++;
				}
			}
			if (iParam4 == 1 && bParam3 == 1)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar14 = (75 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 14, iVar14, 1, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar14 = (83 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 14, iVar14, 1, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar14 = (64 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar14 = (48 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar14 = (112 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar14 = (96 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar14 = (160 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar14 = (176 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar14 = (0 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 11, iVar14, 1, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar14 = (16 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 11, iVar14, 1, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar14 = (32 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar14 = (224 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 1, 0);
									break;
								case 221:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 1, 0);
									break;
								case 222:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 1, 0);
									break;
								case 223:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 1, 0);
									break;
								case 224:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 1, 0);
									break;
								case 225:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 1, 0);
									break;
								case 226:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 1, 0);
									break;
								case 227:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 1, 0);
									break;
								case 228:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 1, 0);
									break;
								case 229:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 1, 0);
									break;
								case 230:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 1, 0);
									break;
								case 231:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 1, 0);
									break;
								case 232:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 1, 0);
									break;
								case 233:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 1, 0);
									break;
								case 234:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 1, 0);
									break;
								case 235:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 1, 0);
									break;
							}
						}
						else if (iParam2 >= 188 && iParam2 <= 203)
						{
							switch (iParam2)
							{
								case 188:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_0"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_0"), 8, 3), 1, 0);
									break;
								case 189:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_1"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_1"), 8, 3), 1, 0);
									break;
								case 190:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_2"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_2"), 8, 3), 1, 0);
									break;
								case 191:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_3"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_3"), 8, 3), 1, 0);
									break;
								case 192:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_4"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_4"), 8, 3), 1, 0);
									break;
								case 193:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_5"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_5"), 8, 3), 1, 0);
									break;
								case 194:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_6"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_6"), 8, 3), 1, 0);
									break;
								case 195:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_7"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_7"), 8, 3), 1, 0);
									break;
								case 196:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_8"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_8"), 8, 3), 1, 0);
									break;
								case 197:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_9"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_9"), 8, 3), 1, 0);
									break;
								case 198:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_10"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_10"), 8, 3), 1, 0);
									break;
								case 199:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_11"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_11"), 8, 3), 1, 0);
									break;
								case 200:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_12"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_12"), 8, 3), 1, 0);
									break;
								case 201:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_13"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_13"), 8, 3), 1, 0);
									break;
								case 202:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_14"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_14"), 8, 3), 1, 0);
									break;
								case 203:
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_8_15"), 8, 3), 1, 0);
									func_401(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_HEIST_M_SPECIAL_9_15"), 8, 3), 1, 0);
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
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 1, 0);
									break;
								case 1:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 1, 0);
									break;
								case 2:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 1, 0);
									break;
								case 3:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 1, 0);
									break;
								case 4:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 1, 0);
									break;
								case 5:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 1, 0);
									break;
								case 6:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 1, 0);
									break;
								case 7:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 1, 0);
									break;
								case 8:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 1, 0);
									break;
								case 9:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 1, 0);
									break;
								case 10:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 1, 0);
									break;
								case 11:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 1, 0);
									break;
								case 12:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 1, 0);
									break;
								case 13:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 1, 0);
									break;
								case 14:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 1, 0);
									break;
								case 15:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 1, 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 1, 0);
									break;
								case 1:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 1, 0);
									break;
								case 2:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 1, 0);
									break;
								case 3:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 1, 0);
									break;
								case 4:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 1, 0);
									break;
								case 5:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 1, 0);
									break;
								case 6:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 1, 0);
									break;
								case 7:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 1, 0);
									break;
								case 8:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 1, 0);
									break;
								case 9:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 1, 0);
									break;
								case 10:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 1, 0);
									break;
								case 11:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 1, 0);
									break;
								case 12:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 1, 0);
									break;
								case 13:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 1, 0);
									break;
								case 14:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 1, 0);
									break;
								case 15:
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 1, 0);
									func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 1, 0);
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
							iVar14 = (16 + Global_78130[1 /*14*/].f_4);
							func_401(iParam0, 8, iVar14, 1, 0);
						}
					}
				}
				Global_78130[1 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar15 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
					if (iVar15 != -99)
					{
						func_401(iParam0, 8, iVar15, 1, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 1, 0);
								break;
							case 200:
								func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 1, 0);
								break;
							case 201:
								func_401(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 1, 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar15 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
					if (iVar15 != -99)
					{
						func_401(iParam0, 11, iVar15, 1, 0);
					}
				}
			}
			if (bParam3)
			{
				if (iParam0 == joaat("MP_M_Freemode_01"))
				{
					if ((((((((((((((((((((((Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_0") || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_1")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_2")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_3")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_4")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_5")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_6")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_7")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_8")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_9")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_10")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_11")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_12")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_13")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_14")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_15")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_16")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_17")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_18")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_19")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_20")) || Global_2883588 == joaat("DLC_MP_X17_M_OUTFIT_SCUBA_21")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SCUBA_GEAR"), 0))
					{
						if (__LIB_0__::func_137(26965, -1))
						{
						}
						else
						{
							__LIB_0__::func_186(26965, 1, -1);
						}
					}
				}
				else if (iParam0 == joaat("MP_F_Freemode_01"))
				{
					if ((((((((((((((((((((((Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_0") || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_1")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_2")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_3")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_4")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_5")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_6")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_7")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_8")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_9")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_10")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_11")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_12")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_13")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_14")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_15")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_16")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_17")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_18")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_19")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_20")) || Global_2883588 == joaat("DLC_MP_X17_F_OUTFIT_SCUBA_21")) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SCUBA_GEAR"), 0))
					{
						if (__LIB_0__::func_137(26965, -1))
						{
						}
						else
						{
							__LIB_0__::func_186(26965, 1, -1);
						}
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_403(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x69CD0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Global_78130[1 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
	Global_78128++;
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				__LIB_1__::func_364(1237, Global_1659801[__LIB_1__::func_27(-1)] + 1, -1, 1);
			}
			if (iParam1 == 1)
			{
				__LIB_1__::func_746(1243, 1, -1);
			}
		}
		else
		{
			if (((((iParam1 == 4 || iParam1 == 11) || iParam1 == 6) || iParam1 == 0) || iParam1 == 14) || iParam1 == 7)
			{
				__LIB_1__::func_364(1237, (Global_1659801[__LIB_1__::func_27(-1)] - 1), -1, 1);
			}
			if (iParam1 == 1)
			{
				__LIB_1__::func_746(1243, -1, -1);
			}
		}
		if (iParam1 != 5)
		{
			iVar0 = __LIB_1__::func_360(__LIB_0__::func_38(iParam1, Global_78130[1 /*14*/].f_2), Global_78127, 0);
			if (bParam3)
			{
				MISC::SET_BIT(&iVar0, Global_78130[1 /*14*/].f_1);
			}
			else
			{
				MISC::CLEAR_BIT(&iVar0, Global_78130[1 /*14*/].f_1);
			}
			__LIB_1__::func_354(__LIB_0__::func_38(iParam1, Global_78130[1 /*14*/].f_2), iVar0, Global_78127, 1, 0);
		}
		if (bParam4)
		{
			if (__LIB_0__::func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar1))
			{
				iVar2 = __LIB_1__::func_360(iVar1, Global_78127, 0);
				MISC::SET_BIT(&iVar2, Global_78130[1 /*14*/].f_1);
				__LIB_1__::func_354(iVar1, iVar2, Global_78127, 1, 0);
			}
		}
		if (Global_78128 == 1 && bParam3 == 1)
		{
			if (iParam0 == joaat("MP_M_Freemode_01"))
			{
				if (iParam1 == 14)
				{
					if (iParam2 >= 83 && iParam2 <= 90)
					{
						iVar3 = (75 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 14, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 75 && iParam2 <= 82)
					{
						iVar3 = (83 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 14, iVar3, 1, bParam4);
					}
				}
				else if (iParam1 == 8)
				{
					if (iParam2 >= 48 && iParam2 <= 63)
					{
						iVar3 = (64 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 64 && iParam2 <= 79)
					{
						iVar3 = (48 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 96 && iParam2 <= 111)
					{
						iVar3 = (112 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 112 && iParam2 <= 127)
					{
						iVar3 = (96 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 176 && iParam2 <= 191)
					{
						iVar3 = (160 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 160 && iParam2 <= 175)
					{
						iVar3 = (176 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 32 && iParam2 <= 47)
					{
						iVar3 = (0 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 11, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 224 && iParam2 <= 239)
					{
						iVar3 = (16 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 11, iVar3, 1, bParam4);
					}
				}
				else if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = (32 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
					else if (iParam2 >= 16 && iParam2 <= 31)
					{
						iVar3 = (224 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
				}
			}
			else if (iParam0 == joaat("MP_F_Freemode_01"))
			{
				if (iParam1 == 11)
				{
					if (iParam2 >= 0 && iParam2 <= 15)
					{
						iVar3 = (16 + Global_78130[1 /*14*/].f_4);
						func_403(iParam0, 8, iVar3, 1, bParam4);
					}
				}
			}
			Global_78130[1 /*14*/] = { __LIB_3__::func_310(iParam0, iParam1, iParam2, -1) };
			if (iParam1 == 11)
			{
				iVar4 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_403(iParam0, 8, iVar4, 1, bParam4);
				}
			}
			else if (iParam1 == 8)
			{
				iVar4 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[1 /*14*/].f_4);
				if (iVar4 != -99)
				{
					func_403(iParam0, 11, iVar4, 1, bParam4);
				}
			}
		}
		Global_78128 = (Global_78128 - 1);
		return 1;
	}
	Global_78128 = (Global_78128 - 1);
	return 0;
}

int func_421()//Position - 0x71A93
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	var uVar7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	int iVar13;
	switch (iLocal_740)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("move_m@GEneric");
			STREAMING::REQUEST_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
			Local_757.f_2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION");
			Local_757.f_0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION_BG");
			Local_757.f_1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_CELEBRATION_FG");
			iLocal_740 = 1;
			break;
		case 1:
			if ((((STREAMING::HAS_ANIM_DICT_LOADED("move_m@GEneric") && STREAMING::HAS_ANIM_DICT_LOADED("ANIM@MP_FM_EVENT@INTRO")) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_757.f_2)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_757.f_0)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_757.f_1))
			{
				if (func_1919() == 4)
				{
					__LIB_18__::func_851(&Local_757, "LOSER", "HUD_COLOUR_FREEMODE", 1, 0);
					func_616(&Local_757, "LOSER", 1, "", "", "", 0, 0, 0, 0, 0);
					__LIB_18__::func_522(&Local_757, 2200);
					__LIB_18__::func_594(&Local_757, "LOSER", 75, 0);
					__LIB_18__::func_521(&Local_757, "LOSER");
					__LIB_2__::func_420(1, 1);
					__LIB_0__::func_794(&uLocal_746);
					iLocal_740 = 2;
				}
				else
				{
					__LIB_18__::func_851(&Local_757, "WINNER", "HUD_COLOUR_FREEMODE", 1, 0);
					func_616(&Local_757, "WINNER", 0, "", "", "", 0, 0, 0, 0, 0);
					__LIB_18__::func_522(&Local_757, 2200);
					__LIB_18__::func_594(&Local_757, "WINNER", 75, 0);
					__LIB_18__::func_521(&Local_757, "WINNER");
					__LIB_2__::func_420(1, 1);
					__LIB_0__::func_794(&uLocal_746);
					iLocal_740 = 3;
				}
			}
			break;
		case 2:
			if (__LIB_12__::func_575())
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				}
				func_609(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1079404134);
				iVar1 = func_607();
				iVar0 = ((iVar1 + 36 - 4) % 72);
				Var4 = { Local_161[iVar1 /*3*/] };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
				fVar2 = __LIB_0__::func_932(Local_160[iVar1 /*3*/], Local_161[iVar1 /*3*/]);
				Var11 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				Var9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
				Var10 = { Var11 + Var9 };
				iVar13 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var11, Var10, 0.2f, 275, PLAYER::PLAYER_PED_ID(), 7);
				SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar6, &uVar7, &uVar8, &uVar12);
				if (iVar6 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var4, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar2);
					if (MISC::ABSF(SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()))) >= 2.5f)
					{
						fVar3 = 2f;
					}
					else if (MISC::ABSF(SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()))) > 0f)
					{
						fVar3 = 1f;
					}
					else
					{
						fVar3 = 0f;
					}
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 0, true, true);
					if (fVar3 == 1f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "move_m@GEneric", "wstop_l_0", 1000f, -8f, -1, 0, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					else if (fVar3 == 2f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "move_m@GEneric", "rstop_quick_l", 1000f, -8f, -1, 0, 0f, false, false, false);
						Var5 = { -0.85f, 1.25f, 0.4f };
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					else if (fVar3 == 0f)
					{
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						PAD::DISABLE_ALL_CONTROL_ACTIONS(2 /*FRONTEND_CONTROL*/);
					}
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 3672064, 0);
					if (CAM::DOES_CAM_EXIST(iLocal_1985))
					{
						CAM::DESTROY_CAM(iLocal_1985, false);
					}
					if (CAM::DOES_CAM_EXIST(iLocal_1986))
					{
						CAM::DESTROY_CAM(iLocal_1986, false);
					}
					iLocal_1986 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					iLocal_1985 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
					{
						CAM::SET_CAM_COORD(iLocal_1985, Local_160[iVar0 /*3*/] + Vector(0.1f, 0f, 0f));
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					else
					{
						CAM::SET_CAM_COORD(iLocal_1985, Local_160[iVar0 /*3*/]);
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					CAM::SET_CAM_FOV(iLocal_1985, 20f);
					CAM::SET_CAM_ACTIVE(iLocal_1985, true);
					if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
					{
						CAM::SET_CAM_COORD(iLocal_1986, Local_160[iVar0 /*3*/] + Vector(0.1f, 0f, 0f));
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					else
					{
						CAM::SET_CAM_COORD(iLocal_1986, Local_160[iVar0 /*3*/]);
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					CAM::POINT_CAM_AT_COORD(iLocal_1986, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var5));
					CAM::SET_CAM_FOV(iLocal_1986, 20f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1986, iLocal_1985, 1500, 3, 3);
					CAM::SHAKE_CAM(iLocal_1986, "HAND_SHAKE", 0.3f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					iLocal_740 = 4;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 3672064, 0);
					iLocal_740 = 4;
				}
				else
				{
					iLocal_740 = 4;
				}
			}
			else
			{
				iLocal_740 = 0;
				return 1;
			}
			break;
		case 3:
			if (__LIB_12__::func_575())
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 0, true, true);
						iLocal_741 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.05f, 0.5f, -1.11f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f), 2, false, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(iLocal_741, "ANIM@MP_FM_EVENT@INTRO", "BEAST_TRANSFORM_CAM");
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@MP_FM_EVENT@INTRO", "BEAST_TRANSFORM", 1000f, -2f, -1, 0, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						NETWORK::NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(iLocal_741);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_741);
						if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastIntroScene"))
						{
							GRAPHICS::ANIMPOSTFX_PLAY("BeastIntroScene", 0, false);
						}
						AUDIO::START_AUDIO_SCENE("FM_Event_Beast_Transform_Sequence_Scene");
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Frontend_Beast_Transform_Back", "FM_Events_Sasquatch_Sounds", false);
						iLocal_740 = 4;
					}
					else
					{
						iLocal_740 = 4;
					}
				}
			}
			else
			{
				iLocal_740 = 0;
				return 1;
			}
			break;
		case 4:
			if (__LIB_12__::func_575())
			{
				if (__LIB_0__::func_937(&uLocal_746, 3000, 0))
				{
					if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastTransition"))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("BeastTransition", 0, false);
					}
					if (__LIB_0__::func_937(&uLocal_746, 4000, 0))
					{
						GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 255, 255, 255, iLocal_739, false);
						if (!iLocal_745)
						{
							iLocal_745 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Frontend_Beast_Fade_Screen", "FM_Events_Sasquatch_Sounds", false);
						}
						if (!iLocal_743)
						{
							iLocal_739 += 30;
						}
						if (iLocal_739 >= 255)
						{
							iLocal_739 = 255;
							iLocal_743 = 1;
							iLocal_745 = 0;
							GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
							func_67();
							PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
							__LIB_24__::func_231(&Local_757, 1, 0, 0);
							__LIB_2__::func_420(0, 1);
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FM_Event_Beast_Transform_Sequence_Scene"))
							{
								AUDIO::STOP_AUDIO_SCENE("FM_Event_Beast_Transform_Sequence_Scene");
							}
							AUDIO::START_AUDIO_SCENE("FM_Event_Beast_Fade_White_Scene");
							if (iLocal_1988 != 0)
							{
								func_525(0, 0, 0);
								func_517(iLocal_1988, 0, 0);
								func_448(iLocal_1988, 1, 0);
								__LIB_11__::func_671(1);
							}
							iLocal_740 = 5;
							__LIB_0__::func_794(&Global_2725381);
						}
					}
				}
				else
				{
					__LIB_1__::func_63(&Local_757, 1);
				}
				__LIB_33__::func_658(0);
			}
			else
			{
				iLocal_740 = 0;
				return 1;
			}
			break;
		case 5:
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 255, 255, 255, iLocal_739, false);
			if ((__LIB_3__::func_99(&Global_2725381, 500, 0) && PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID())) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastIntroScene"))
				{
					GRAPHICS::ANIMPOSTFX_STOP("BeastIntroScene");
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_741))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iLocal_741);
					iLocal_741 = -1;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@MP_FM_EVENT@INTRO", "BEAST_TRANSFORM", 3))
				{
					ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "BEAST_TRANSFORM", "ANIM@MP_FM_EVENT@INTRO", -8f);
					STREAMING::REMOVE_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
				}
				else
				{
					STREAMING::REMOVE_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
				STREAMING::REMOVE_ANIM_DICT("move_m@GEneric");
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_ALL_CAMS(false);
				HUD::THEFEED_SHOW();
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PAD::ENABLE_ALL_CONTROL_ACTIONS(2 /*FRONTEND_CONTROL*/);
				__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 8388608, 0);
				__LIB_0__::func_671(0);
				__LIB_1__::func_91();
				__LIB_0__::func_794(&uLocal_746);
				__LIB_3__::func_351();
				iLocal_740 = 6;
				__LIB_0__::func_794(&uLocal_746);
			}
			break;
		case 6:
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 255, 255, 255, iLocal_739, false);
			if (__LIB_0__::func_937(&uLocal_746, 1300, 0))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FM_Event_Beast_Fade_White_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("FM_Event_Beast_Fade_White_Scene");
				}
				if (iLocal_743)
				{
					iLocal_739 = (iLocal_739 - 30);
				}
				if (iLocal_739 < 0)
				{
					iLocal_739 = 0;
					iLocal_743 = 0;
					iLocal_740 = 0;
					__LIB_0__::func_794(&Global_2725381);
					__LIB_0__::func_794(&uLocal_746);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_448(int iParam0, int iParam1, bool bParam2)//Position - 0x72920
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<10> Var4;
	if ((!__LIB_0__::func_287(PLAYER::PLAYER_ID()) || !__LIB_12__::func_717(iParam0)) || iParam1)
	{
		iVar0 = __LIB_3__::func_355(iParam0, PLAYER::PLAYER_ID());
		if ((__LIB_0__::func_797() != __LIB_0__::func_162() && !__LIB_12__::func_416()) && !__LIB_12__::func_415())
		{
			if (!__LIB_3__::func_195(1))
			{
				STATS::CHANGE_UNIFORM(__LIB_7__::func_919(__LIB_0__::func_797()), __LIB_7__::func_918(__LIB_0__::func_797()), iParam0);
			}
			if (iVar0 == 0)
			{
				func_494(1, 1);
			}
			else
			{
				iVar1 = -1;
				iVar2 = func_491();
				if (__LIB_12__::func_413(iVar0))
				{
					iVar1 = 0;
				}
				bVar3 = true;
				if (__LIB_5__::func_723() && !bParam2)
				{
					bVar3 = false;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
					{
						Global_2824753.f_13 = 1;
					}
				}
				PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
				Var4.f_1 = -1;
				Var4.f_2 = -1;
				Var4.f_3 = -1;
				Var4.f_4 = -1;
				Var4.f_8 = -1;
				Var4.f_9 = 50;
				Var4.f_0 = PLAYER::PLAYER_PED_ID();
				Var4.f_1 = iVar0;
				Var4.f_8 = -1;
				Var4.f_6 = 1;
				func_451(&Var4, __LIB_3__::func_353(iVar0), 0, 1, 1, bVar3, 0, iVar2, iVar1, __LIB_3__::func_352(iVar0));
				__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_12__::func_412(iParam0), 0);
				__LIB_12__::func_428(PLAYER::PLAYER_PED_ID());
				__LIB_10__::func_577(-1326764176, __LIB_3__::func_384(1, 1));
			}
		}
	}
}

int func_451(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x72C51
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<14> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	struct<4> Var17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<7> Var35;
	struct<9> Var36;
	int iVar37;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_78200[iVar0] = -1;
		Global_78200.f_13[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar0] = -1;
		Global_78200.f_36[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar0] = -1;
		iVar0++;
	}
	if (!PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam0);
		if (iVar1 == joaat("MP_M_Freemode_01") || iVar1 == joaat("MP_F_Freemode_01"))
		{
			bVar2 = false;
			if (uParam0->f_1 != -1 && uParam0->f_1 != 1711)
			{
				bVar2 = true;
			}
			if (uParam0->f_2 != -1 && uParam0->f_2 != 334)
			{
				bVar2 = true;
			}
			else if ((uParam0->f_2 == -1 && bParam1) && bParam2)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				bVar3 = false;
				if (!bParam2)
				{
					if (__LIB_6__::func_447(&Global_78200, *uParam0, bParam1))
					{
						bVar3 = true;
					}
				}
				if ((bParam1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
				{
					if (__LIB_3__::func_344(&Global_78200, *uParam0, bParam2, bParam4))
					{
						bVar3 = true;
					}
				}
				iVar4 = -1;
				if (uParam0->f_3 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_3, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (uParam0->f_4 != -1)
				{
					if (__LIB_3__::func_376(*uParam0, &Global_78200, uParam0->f_4, &iVar4))
					{
						bVar3 = true;
					}
				}
				if (bVar3)
				{
					switch (uParam0->f_6)
					{
						case 0:
							bVar5 = true;
							if (!__LIB_3__::func_337(uParam0, &Global_78200))
							{
								bVar5 = false;
							}
							if (bVar5)
							{
								uParam0->f_6 = 1;
							}
							break;
						case 1:
							if (!bParam6)
							{
								PED::CLEAR_ALL_PED_PROPS(*uParam0);
								PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
								PED::REMOVE_PED_HELMET(*uParam0, true);
								if (bParam3)
								{
									PED::CLEAR_PED_WETNESS(*uParam0);
									PED::CLEAR_PED_BLOOD_DAMAGE(*uParam0);
								}
								iVar6 = 0;
								iVar7 = PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 5);
								iVar8 = -1;
								iVar7 = iVar7;
								iVar8 = iVar8;
								if (__LIB_1__::func_608(*uParam0))
								{
									iVar6 = 1;
								}
								if (iVar6 && bParam5)
								{
									Global_78200[5] = 0;
									if (Global_78200.f_13[5] == -1)
									{
										Global_78200.f_13[5] = 0;
									}
								}
								if (bParam1)
								{
									if (((uParam0->f_2 != -1 && uParam0->f_2 != -2) && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										if (__LIB_3__::func_336(uParam0->f_2) == 22)
										{
											Global_78200.f_26[2] = -1;
										}
										else if ((((__LIB_3__::func_336(uParam0->f_2) == 8 || __LIB_3__::func_336(uParam0->f_2) == 50) || __LIB_3__::func_336(uParam0->f_2) == 47) || uParam0->f_2 == 286) || uParam0->f_2 == 287)
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
										if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
										{
											if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
											{
												Global_78200[7] = 0;
												Global_78200.f_13[7] = 0;
											}
										}
									}
									else if (uParam0->f_2 == -2)
									{
										iVar9 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 1, Global_78200[1], Global_78200.f_13[1]);
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("FORCE_PROP"), 0) && PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1) == Global_78200[1])
										{
										}
										else
										{
											Global_78200.f_26[1] = -1;
											Global_78200.f_26[2] = -1;
											Global_78200.f_26[0] = -1;
											if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
											{
												if (__LIB_3__::func_343(iVar1, 7, __LIB_0__::func_206(*uParam0, Global_78200[7], Global_78200.f_13[7], 7), -1))
												{
													Global_78200[7] = 0;
													Global_78200.f_13[7] = 0;
												}
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
											{
												PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
											}
										}
									}
									else if (uParam0->f_2 == -1 && bParam2)
									{
										Global_78200.f_26[1] = -1;
										Global_78200.f_26[2] = -1;
										Global_78200.f_26[0] = -1;
										if (PED::IS_PED_IN_ANY_VEHICLE(*uParam0, false))
										{
											PED::CLEAR_PED_STORED_HAT_PROP(*uParam0);
										}
									}
								}
								__LIB_4__::func_984(*uParam0, &Global_78200, uParam0->f_8);
								if ((Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 != -1 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && PLAYER::PLAYER_ID() != -1)
								{
									if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12179, 4))
									{
										if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 7 || Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
										{
											PED::SET_PED_HEAD_OVERLAY(*uParam0, 4, 0, 0f);
										}
									}
								}
								GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, "", "");
								bVar11 = false;
								iVar0 = 0;
								while (iVar0 < 12)
								{
									if (Global_78200[iVar0] != -1)
									{
										if (iVar0 == 10 && iParam7 != -1)
										{
											iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
											if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
											{
												if (iParam7 == 0)
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
												else if (iParam7 == 1)
												{
													if (*uParam0 == PLAYER::PLAYER_PED_ID() && !__LIB_1__::func_526())
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
													}
													else
													{
														PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
														PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
													}
												}
												else if (iParam7 == 2)
												{
													GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
													GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_277(PLAYER::PLAYER_ID(), 2));
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												}
												else
												{
													PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, 0, 0, 0);
												}
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
										}
										else
										{
											if (iVar0 == 1)
											{
											}
											else if (iVar0 == 2)
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
												bVar11 = true;
											}
											else if (Global_78200[iVar0] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(*uParam0, iVar0) || Global_78200.f_13[iVar0] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(*uParam0, iVar0, Global_78200[iVar0]))
											{
											}
											else
											{
												PED::SET_PED_COMPONENT_VARIATION(*uParam0, iVar0, Global_78200[iVar0], Global_78200.f_13[iVar0], 0);
											}
											if (iVar0 == 10)
											{
												iVar10 = __LIB_0__::func_206(*uParam0, Global_78200[iVar0], Global_78200.f_13[iVar0], 10);
												if (__LIB_3__::func_342(iVar1, 10, iVar10, -1))
												{
													PED::SET_PED_ENABLE_CREW_EMBLEM(*uParam0, true);
												}
											}
										}
									}
									iVar0++;
								}
								if (!bVar11 && Global_78200[1] != -1)
								{
									PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, Global_78200[1], Global_78200.f_13[1], 0);
								}
								iVar0 = 0;
								while (iVar0 < Global_78200.f_26)
								{
									if (Global_78200.f_26[iVar0] != -1 && Global_78200.f_26[iVar0] != 255)
									{
										__LIB_0__::func_454(*uParam0, iVar0, Global_78200.f_26[iVar0], Global_78200.f_36[iVar0]);
									}
									iVar0++;
								}
								if (*uParam0 == PLAYER::PLAYER_PED_ID())
								{
									if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(*uParam0, 8, joaat("SCUBA_GEAR")))
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 15, 0, 0, 0);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											PLAYER::SET_PLAYER_PREVIOUS_VARIATION_DATA(PLAYER::PLAYER_ID(), 8, 3, 0, 0, 0);
										}
									}
								}
								if ((iVar6 && !bParam5) && *uParam0 == PLAYER::PLAYER_PED_ID())
								{
									func_288(PLAYER::PLAYER_ID(), -1, -1);
								}
								if (!func_468(*uParam0))
								{
									if (uParam0->f_2 >= 52 && uParam0->f_2 <= 59)
									{
										PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Global_78200.f_26[0], true);
										PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Global_78200.f_36[0]);
										__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 1);
									}
									else
									{
										Var12 = { __LIB_3__::func_310(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1) };
										if (Var12.f_3 != -1 && Var12.f_4 != -1)
										{
											if (__LIB_0__::func_348(iVar1, 14, __LIB_1__::func_360(589, -1, 0), -1))
											{
												PED::SET_PED_HELMET_PROP_INDEX(*uParam0, Var12.f_3, true);
												PED::SET_PED_HELMET_TEXTURE_INDEX(*uParam0, Var12.f_4);
												__LIB_3__::func_335(*uParam0, Var12.f_3, Var12.f_4, 1);
											}
										}
										PED::SET_PED_CONFIG_FLAG(*uParam0, 34, false);
										PED::SET_PED_CONFIG_FLAG(*uParam0, 36, false);
									}
								}
								else if (Global_78200.f_26[0] != -1 && Global_78200.f_26[0] != 255)
								{
									__LIB_3__::func_335(*uParam0, Global_78200.f_26[0], Global_78200.f_36[0], 0);
								}
								if (!__LIB_0__::func_157(0))
								{
									if (uParam0->f_3 != -1)
									{
										func_460(*uParam0, uParam0->f_3, uParam0->f_8);
									}
									if ((uParam0->f_4 != -1 && uParam0->f_1 != 32) && uParam0->f_1 != 81)
									{
										func_460(*uParam0, uParam0->f_4, uParam0->f_8);
									}
									if ((*uParam0 == PLAYER::PLAYER_PED_ID() && uParam0->f_1 != 0) && uParam0->f_1 != -1)
									{
										__LIB_1__::func_354(2065, 1, -1, 1, 0);
									}
									if ((((((((((((((((__LIB_1__::func_102(*uParam0, 7) && uParam0->f_1 != 1147) && uParam0->f_1 != 1148) && uParam0->f_1 != 1149) && uParam0->f_1 != 1150) && uParam0->f_1 != 1155) && uParam0->f_1 != 1156) && uParam0->f_1 != 1157) && uParam0->f_1 != 1158) && uParam0->f_1 != 1265) && uParam0->f_1 != 1266) && uParam0->f_1 != 1267) && uParam0->f_1 != 1268) && uParam0->f_1 != 1261) && uParam0->f_1 != 1262) && uParam0->f_1 != 1263) && uParam0->f_1 != 1264)
									{
										if (!bParam1 || uParam0->f_2 == -1)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 7, 0, 0, 0);
											PED::CLEAR_PED_PROP(*uParam0, 0);
										}
									}
									else if (__LIB_3__::func_334(*uParam0))
									{
										iVar13 = __LIB_3__::func_333(*uParam0, 1);
										iVar14 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar13, iVar14, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									else if (!__LIB_3__::func_334(*uParam0) && __LIB_3__::func_332(*uParam0))
									{
										iVar15 = __LIB_3__::func_333(*uParam0, 0);
										iVar16 = PED::GET_PED_TEXTURE_VARIATION(*uParam0, 8);
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 8, iVar15, iVar16, 0);
										PED::CLEAR_PED_PROP(*uParam0, 0);
									}
									if (!bParam9)
									{
										func_188(*uParam0);
									}
									if (uParam0->f_3 != 4 && uParam0->f_1 == 0)
									{
										if (iVar1 == joaat("MP_M_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_M_HAIR_0_0"), &Var17);
										}
										else if (iVar1 == joaat("MP_F_Freemode_01"))
										{
											FILES::GET_SHOP_PED_COMPONENT(joaat("DLC_MP_HEIST_F_HAIR_0_0"), &Var17);
										}
										if (Global_78200[2] == Var17.f_3)
										{
											Global_78200[2] = -1;
										}
									}
									if (__LIB_3__::func_331(uParam0->f_1))
									{
										if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_20 == 0)
										{
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 0, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, 0, 0, 0);
											__LIB_0__::func_454(*uParam0, 0, -1, 0);
											__LIB_0__::func_454(*uParam0, 1, -1, 0);
											__LIB_0__::func_454(*uParam0, 2, -1, 0);
											func_69(*uParam0, 14, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
											PED::SET_PED_CONFIG_FLAG(*uParam0, 380, true);
										}
									}
									if (Global_78200[2] == -1)
									{
										if ((uParam0->f_8 != -1 && PLAYER::INT_TO_PLAYERINDEX(uParam0->f_8) != PLAYER::PLAYER_ID()) && !*uParam0 == PLAYER::PLAYER_PED_ID())
										{
											iVar18 = Global_2689235[uParam0->f_8 /*453*/].f_249;
											iVar19 = Global_2689235[uParam0->f_8 /*453*/].f_250;
											iVar20 = 1;
											func_69(*uParam0, 2, Global_2689235[uParam0->f_8 /*453*/].f_248, 0, -1, 0, 0, iVar20, iVar18, iVar19, uParam0->f_8, 1, 0, 0);
										}
										else
										{
											iVar18 = __LIB_1__::func_360(2153, -1, 0);
											iVar19 = __LIB_1__::func_360(2160, -1, 0);
											if (__LIB_1__::func_342(161, -1))
											{
												iVar21 = __LIB_1__::func_360(2053, -1, 0);
												if (iVar21 != -99)
												{
													iVar22 = -99;
													if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_M_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_463(iVar21);
													}
													else if (ENTITY::GET_ENTITY_MODEL(*uParam0) == joaat("MP_F_Freemode_01"))
													{
														iVar22 = __LIB_0__::func_462(iVar21);
													}
													if (iVar22 != -99 && iVar21 != iVar22)
													{
														iVar21 = iVar22;
													}
												}
												if (MISC::IS_PC_VERSION())
												{
													if (iVar1 == joaat("MP_M_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_463(iVar21);
													}
													else if (iVar1 == joaat("MP_F_Freemode_01"))
													{
														iVar21 = __LIB_0__::func_462(iVar21);
														if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4));
														}
														else if (iVar21 == __LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4) || iVar21 == __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_5_0"), 2, 4)))
														{
															iVar21 = __LIB_0__::func_462(__LIB_0__::func_204(iVar1, joaat("DLC_MP_BIKER_F_HAIR_6_0"), 2, 4));
														}
													}
												}
												func_69(*uParam0, 2, iVar21, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
											else
											{
												iVar23 = __LIB_1__::func_360(753, -1, 0);
												func_69(*uParam0, 2, iVar23, 0, -1, 0, 0, 0, iVar18, iVar19, -1, 0, 0, 0);
											}
										}
										PED::SET_PED_COMPONENT_VARIATION(*uParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 1), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 1), 0);
									}
								}
							}
							if (!__LIB_0__::func_157(0))
							{
								iVar25 = -1;
								if (uParam0->f_1 == 0)
								{
									bVar24 = false;
								}
								else
								{
									bVar24 = true;
									if (uParam0->f_1 == 1642)
									{
										iVar25 = Global_78200.f_46[0];
									}
								}
								if (uParam0->f_8 != -1)
								{
									func_454(*uParam0, &(Global_1886249[uParam0->f_8 /*51*/]), bVar24, iVar25);
								}
								else
								{
									func_114(*uParam0, bVar24, 0, iVar25);
								}
								if (iParam8 != -1)
								{
									iVar28 = FILES::GET_HASH_NAME_FOR_COMPONENT(*uParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 11), PED::GET_PED_TEXTURE_VARIATION(*uParam0, 11));
									if (__LIB_3__::func_330(iVar28, iParam8, &uVar26, &uVar27))
									{
										Global_78200.f_46[0] = uVar27;
									}
								}
								iVar29 = 0;
								while (iVar29 < Global_78200.f_46)
								{
									if (Global_78200.f_46[iVar29] != -1)
									{
										bVar30 = true;
									}
									iVar29++;
								}
								if (bVar30)
								{
									iVar37 = __LIB_0__::func_276(*uParam0);
									iVar33 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar37);
									iVar31 = 0;
									while (iVar31 < 127)
									{
										if (__LIB_0__::func_445(&Var36, iVar31, iVar37, *uParam0, -1))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var36.f_5 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var36.f_8 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_277(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var36.f_4, Var36.f_5);
														__LIB_0__::func_260(*uParam0, Var36.f_4, Var36.f_5);
													}
												}
												iVar29++;
											}
										}
										iVar31++;
									}
									iVar32 = 0;
									while (iVar32 < iVar33)
									{
										if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar37, iVar32, &Var35))
										{
											iVar29 = 0;
											while (iVar29 < Global_78200.f_46)
											{
												if (Global_78200.f_46[iVar29] == Var35.f_3 && Global_78200.f_46[iVar29] != -1)
												{
													bVar34 = false;
													if (Var35.f_6 == joaat("crewLogo"))
													{
														if (iParam7 == 0)
														{
															bVar34 = true;
														}
														else if (iParam7 == 1)
														{
														}
														else if (iParam7 == 2)
														{
															GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(__LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), false);
															GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(*uParam0, __LIB_2__::func_508(PLAYER::PLAYER_ID(), 0), __LIB_6__::func_277(PLAYER::PLAYER_ID(), 2));
														}
													}
													if (!bVar34)
													{
														PED::ADD_PED_DECORATION_FROM_HASHES(*uParam0, Var35.f_2, Var35.f_3);
														__LIB_0__::func_260(*uParam0, Var35.f_2, Var35.f_3);
													}
												}
												iVar29++;
											}
										}
										iVar32++;
									}
								}
							}
							PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*uParam0, false, 0);
							__LIB_3__::func_329(*uParam0);
							uParam0->f_6 = 2;
							break;
						case 2:
							if (!__LIB_0__::func_157(0))
							{
								if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(*uParam0) || !PED::HAS_PED_HEAD_BLEND_FINISHED(*uParam0))
								{
									return 0;
								}
								else
								{
									PED::FINALIZE_HEAD_BLEND(*uParam0);
									__LIB_3__::func_329(*uParam0);
									uParam0->f_7 = 1;
									uParam0->f_6 = 0;
									uParam0->f_5 = 0;
									return 1;
								}
							}
							else
							{
								__LIB_3__::func_329(*uParam0);
								uParam0->f_7 = 1;
								uParam0->f_6 = 0;
								uParam0->f_5 = 0;
								return 1;
							}
							break;
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
		else
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

void func_454(int iParam0, var uParam1, bool bParam2, int iParam3)//Position - 0x74241
{
	struct<9> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<8> Var8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar1 = __LIB_0__::func_276(iParam0);
		bVar2 = func_159(iParam0, 0);
		bVar3 = __LIB_1__::func_37(iParam0);
		bVar4 = func_150(iParam0, iParam3);
		if (bParam2)
		{
			bVar3 = true;
		}
		iVar5 = 0;
		while (iVar5 < 127)
		{
			if (BitTest((*uParam1)[(iVar5 / 32)], (iVar5 % 32)))
			{
				if (__LIB_0__::func_445(&Var0, iVar5, iVar1, iParam0, -1))
				{
					if (__LIB_2__::func_998(iParam0, &Var0, iVar5, Var0.f_4, Var0.f_8, bVar2, bVar3, bParam2, bVar4))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var0.f_4, Var0.f_5);
					}
				}
			}
			iVar5++;
		}
		if (BitTest((*uParam1)[(123 / 32)], (123 % 32)))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar7 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar1);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar1, iVar6, &Var8))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var8.f_0))
				{
					iVar9 = (129 + iVar6);
					if ((iVar9 / 32) >= *uParam1)
					{
					}
					else if (BitTest((*uParam1)[(iVar9 / 32)], (iVar9 % 32)))
					{
						if (__LIB_2__::func_998(iParam0, &(Var8.f_7), iVar9, Var8.f_2, Var8.f_6, bVar2, bVar3, bParam2, bVar4))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(iParam0, Var8.f_2, Var8.f_3);
							__LIB_0__::func_260(iParam0, Var8.f_2, Var8.f_3);
						}
					}
				}
			}
			iVar6++;
		}
	}
}

void func_460(int iParam0, int iParam1, int iParam2)//Position - 0x747E7
{
	struct<37> Var0;
	int iVar1;
	int iVar2;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 9;
	Var0.f_36 = 9;
	Var0.f_46 = 3;
	iVar1 = -1;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	iVar2 = 0;
	while (iVar2 < 12)
	{
		Var0[iVar2] = -1;
		Var0.f_13[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_26)
	{
		Var0.f_26[iVar2] = -1;
		Var0.f_36[iVar2] = -1;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < Var0.f_46)
	{
		Var0.f_46[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_3__::func_376(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_461(iParam0);
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_3__::func_336(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_3__::func_336(iVar1) == 8)
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
				}
				else
				{
					Var0.f_26[1] = -1;
					Var0.f_26[2] = -1;
					Var0.f_26[0] = -1;
				}
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("MP_F_Freemode_01"))
				{
					if (__LIB_3__::func_343(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_206(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_4__::func_984(iParam0, &Var0, iParam2);
		}
		else if (iParam1 == 3)
		{
			PLAYER::SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0), 100f);
		}
		iVar2 = 0;
		while (iVar2 < 12)
		{
			if (Var0[iVar2] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar2, Var0[iVar2], Var0.f_13[iVar2], 0);
			}
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Var0.f_26)
		{
			if (Var0.f_26[iVar2] != -1 && Var0.f_26[iVar2] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar2, Var0.f_26[iVar2], Var0.f_36[iVar2], true);
			}
			iVar2++;
		}
	}
}

void func_461(int iParam0)//Position - 0x749F3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_3__::func_521(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_462(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_462(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x74A88
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam2 == -1)
	{
		iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_78200[iVar1] = -1;
		Global_78200.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_26)
	{
		Global_78200.f_26[iVar1] = -1;
		Global_78200.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_78200.f_46)
	{
		Global_78200.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (__LIB_3__::func_376(iParam0, &Global_78200, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_78200[iVar1] != -1)
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar1) == Global_78200[iVar1] && PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar1) == Global_78200.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_78200.f_26)
		{
			if (Global_78200.f_26[iVar1] != -1 && Global_78200.f_26[iVar1] != 255)
			{
				if (PED::GET_PED_PROP_INDEX(iParam0, iVar1) == Global_78200.f_26[iVar1] && PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iVar1) == Global_78200.f_36[iVar1])
				{
					PED::CLEAR_PED_PROP(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!__LIB_0__::func_157(0))
			{
				if (__LIB_1__::func_342(161, -1))
				{
					func_69(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_69(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(PLAYER::INT_TO_PLAYERINDEX(iParam2)))
					{
						NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(iParam0, PLAYER::INT_TO_PLAYERINDEX(iParam2));
					}
				}
				else
				{
					__LIB_2__::func_996(iParam0, -1);
				}
			}
			__LIB_1__::func_207(0);
			__LIB_2__::func_467(1, 2);
		}
	}
}

int func_468(int iParam0)//Position - 0x7515F
{
	if (!PED::IS_PED_WEARING_HELMET(iParam0) && !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(iParam0), 14, func_206(iParam0, 14, 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_491()//Position - 0x78259
{
	if (__LIB_3__::func_195(1))
	{
		if (__LIB_15__::func_361())
		{
			return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21;
		}
		else
		{
			return Global_1892703[__LIB_0__::func_797() /*599*/].f_10.f_76.f_21;
		}
	}
	return 0;
}

void func_494(int iParam0, int iParam1)//Position - 0x782BB
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (__LIB_5__::func_723())
	{
		bVar0 = true;
	}
	func_505(0);
	if (iParam1 == 0)
	{
		if (iParam0 == 0)
		{
		}
		__LIB_11__::func_843(0);
		Global_2824753 = 0;
		__LIB_11__::func_844(0);
		Global_2824753.f_1 = 0;
		__LIB_15__::func_366(0);
		func_496(0);
		__LIB_11__::func_671(0);
		Global_2824753.f_12 = 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (__LIB_12__::func_414(Global_4718592.f_116524))
		{
			if (BitTest(Global_4718592.f_23, 24))
			{
				if (__LIB_3__::func_521(PLAYER::PLAYER_PED_ID(), 3, -1))
				{
					func_462(PLAYER::PLAYER_PED_ID(), 3, -1, -1);
				}
			}
		}
	}
	__LIB_12__::func_428(PLAYER::PLAYER_PED_ID());
	__LIB_10__::func_577(-1326764176, __LIB_3__::func_384(1, 1));
	if (bVar0)
	{
		iVar1 = __LIB_1__::func_360(2042, -1, 0);
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar1));
		func_287(1);
	}
}

void func_496(int iParam0)//Position - 0x783BD
{
	int iVar0;
	if (__LIB_3__::func_195(0))
	{
		iVar0 = __LIB_8__::func_171(__LIB_0__::func_797(), PLAYER::PLAYER_ID());
		if (iVar0 > -1 && iVar0 < 8)
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_11[iVar0] = iParam0;
		}
	}
}

void func_505(int iParam0)//Position - 0x7860C
{
	struct<50> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		GRAPHICS::OVERRIDE_PED_CREW_LOGO_TEXTURE(PLAYER::PLAYER_PED_ID(), "", "");
		Var0 = 12;
		Var0.f_13 = 12;
		Var0.f_26 = 12;
		Var0.f_39 = 9;
		Var0.f_49 = 9;
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, 0, 0, 0);
		PED::CLEAR_PED_PARACHUTE_PACK_VARIATION(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_STORED_HAT_PROP(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0, 0, 0, false);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		}
		PED::CLEAR_ALL_PED_PROPS(PLAYER::PLAYER_PED_ID());
		__LIB_11__::func_800(&Var0, -1);
		func_317(PLAYER::PLAYER_PED_ID(), &Var0, 0, 0, 1, iParam0);
		iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(PLAYER::PLAYER_PED_ID(), 1, PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 1), PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("SHRINK_HEAD"), 0))
		{
			iVar2 = __LIB_1__::func_360(2100, -1, 0);
			iVar3 = __LIB_1__::func_360(2101, -1, 0);
			iVar4 = __LIB_1__::func_360(2102, -1, 0);
			fVar5 = __LIB_1__::func_680(135, -1);
			iVar6 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
			if (iVar6 == joaat("MP_M_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 0, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			else if (iVar6 == joaat("MP_F_Freemode_01"))
			{
				PED::SET_PED_HEAD_BLEND_DATA(PLAYER::PLAYER_PED_ID(), 21, 0, 0, iVar2, iVar3, iVar4, 0f, fVar5, 0f, false);
			}
			iVar7 = 0;
			while (iVar7 < 20)
			{
				PED::SET_PED_MICRO_MORPH(PLAYER::PLAYER_PED_ID(), iVar7, 0f);
				iVar7++;
			}
		}
		else
		{
			__LIB_2__::func_996(PLAYER::PLAYER_PED_ID(), -1);
		}
		func_506(0);
		func_114(PLAYER::PLAYER_PED_ID(), 0, 1, -1);
		__LIB_10__::func_577(-1326764176, __LIB_3__::func_384(1, 1));
	}
}

void func_506(int iParam0)//Position - 0x787A4
{
	struct<14> Var0;
	int iVar1;
	if (func_206(PLAYER::PLAYER_PED_ID(), 14, 0) != -99)
	{
		Var0 = { __LIB_3__::func_310(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_206(PLAYER::PLAYER_PED_ID(), 14, 0), -1) };
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || iParam0 == 1)
		{
			if (iParam0 == 0)
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			switch (MISC::GET_HASH_KEY(&(Var0.f_8)))
			{
				case joaat("CLO_BUS_P_1_0"):
				case joaat("CLO_BUS_P_1_1"):
				case joaat("CLO_BUS_P_1_2"):
				case joaat("CLO_BUS_P_1_3"):
				case joaat("CLO_BUS_P_1_4"):
				case joaat("CLO_BUS_P_1_5"):
				case joaat("CLO_BUS_P_1_6"):
				case joaat("CLO_BUS_P_1_7"):
				case joaat("CLO_BUS_P_1_8"):
				case joaat("CLO_BUS_P_1_9"):
				case joaat("CLO_BUS_P_1_10"):
				case joaat("CLO_BUS_P_1_11"):
				case joaat("CLO_BUS_P_1_12"):
				case joaat("CLO_BUS_P_1_13"):
				case joaat("CLO_X2M_HT_0_0"):
				case joaat("CLO_X2M_HT_0_1"):
				case joaat("CLO_X2M_HT_0_2"):
				case joaat("CLO_X2M_HT_0_3"):
				case joaat("CLO_X2M_HT_0_4"):
				case joaat("CLO_X2M_HT_0_5"):
				case joaat("CLO_X2M_HT_0_6"):
				case joaat("CLO_X2M_HT_0_7"):
				case joaat("CLO_X2F_HT_0_0"):
				case joaat("CLO_X2F_HT_0_1"):
				case joaat("CLO_X2F_HT_0_2"):
				case joaat("CLO_X2F_HT_0_3"):
				case joaat("CLO_X2F_HT_0_4"):
				case joaat("CLO_X2F_HT_0_5"):
				case joaat("CLO_X2F_HT_0_6"):
				case joaat("CLO_X2F_HT_0_7"):
				case joaat("HT_FMM_13_0"):
				case joaat("HT_FMM_13_1"):
				case joaat("HT_FMM_13_2"):
				case joaat("HT_FMM_13_3"):
				case joaat("HT_FMM_13_4"):
				case joaat("HT_FMM_13_5"):
				case joaat("HT_FMM_13_6"):
				case joaat("HT_FMM_13_7"):
				case joaat("CLO_BBF_P2_0"):
				case joaat("CLO_BBF_P2_1"):
				case joaat("CLO_BBF_P2_2"):
				case joaat("CLO_BBF_P2_3"):
				case joaat("CLO_BBF_P2_4"):
				case joaat("CLO_BBF_P2_5"):
				case joaat("CLO_BBF_P2_6"):
					if (iParam0 == 0)
					{
						if (VEHICLE::DOES_VEHICLE_HAVE_ROOF(iVar1))
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
					}
					else
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				}
		}
	}
}

void func_517(int iParam0, int iParam1, int iParam2)//Position - 0x79422
{
	int iVar0;
	if (__LIB_2__::func_50())
	{
		if (__LIB_15__::func_361())
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_1 = iParam0;
			if (iParam1 == 0)
			{
				__LIB_12__::func_631(0);
			}
			__LIB_12__::func_630(iParam0);
			if (iParam2 == 0)
			{
				iVar0 = 0;
				while (iVar0 < __LIB_8__::func_214())
				{
					__LIB_28__::func_512(iVar0, iParam0);
					iVar0++;
				}
			}
		}
		else
		{
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_1 = iParam0;
			__LIB_12__::func_631(0);
		}
	}
}

void func_525(bool bParam0, bool bParam1, int iParam2)//Position - 0x79E10
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	char* sVar5;
	struct<16> Var6;
	bool bVar7;
	int iVar8;
	if (!__LIB_0__::func_438())
	{
		return;
	}
	iVar2 = 1;
	if (__LIB_3__::func_39(PLAYER::PLAYER_ID()))
	{
		iVar2 = 2;
	}
	if (iParam2 == 1)
	{
		iVar2 = 3;
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 != PLAYER::PLAYER_ID())
	{
		if (bParam1)
		{
			STATS::START_BEING_BOSS(iVar2);
			__LIB_31__::func_699(0);
			__LIB_4__::func_964(0);
			__LIB_1__::func_967(21);
			__LIB_1__::func_967(22);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_466 = iVar2;
		}
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 = PLAYER::PLAYER_ID();
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_428 = iParam2;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_465 = iParam2;
		STATS::GET_BOSS_GOON_UUID(__LIB_0__::func_5(), &uVar3, &uVar4);
		__LIB_4__::func_865(uVar3, uVar4);
		sVar5 = NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar0);
		StringCopy(&Var6, sVar5, 64);
		__LIB_4__::func_864(Var6);
		func_574();
		if (__LIB_1__::func_360(11392, -1, 0) <= 0)
		{
			iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		}
		else
		{
			iVar1 = (__LIB_1__::func_360(11392, -1, 0) - 43200);
		}
		__LIB_8__::func_212(iVar1);
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3))
		{
			DECORATOR::DECOR_SET_INT(PLAYER::PLAYER_PED_ID(), "Player_Boss", PLAYER::PLAYER_ID());
		}
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 = -1;
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_25 = -1;
		Global_2815059.f_5195.f_223 = -1;
		__LIB_31__::func_57();
		__LIB_3__::func_398(12, 0, 1);
		if (bParam0)
		{
			__LIB_1__::func_928(0);
		}
		if (Global_2815059.f_5195.f_259 != __LIB_0__::func_162())
		{
			Global_2815059.f_5195.f_259 = __LIB_0__::func_162();
		}
		if (BitTest(Global_2815059.f_1801, 15))
		{
			MISC::CLEAR_BIT(&(Global_2815059.f_1801), 15);
		}
		if (__LIB_4__::func_862(15))
		{
			__LIB_4__::func_861(15);
		}
		if (!__LIB_4__::func_860() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			__LIB_4__::func_859();
			__LIB_4__::func_858(2);
		}
		__LIB_1__::func_354(11432, 2, -1, 1, 0);
		__LIB_1__::func_967(31);
		func_549();
		__LIB_8__::func_211();
		__LIB_8__::func_210();
		__LIB_4__::func_855();
		if (iParam2 != 1)
		{
			if (!__LIB_4__::func_854(82, 3))
			{
				bVar7 = false;
				iVar8 = __LIB_1__::func_360(11389, -1, 0);
				if (!BitTest(iVar8, 11))
				{
					MISC::SET_BIT(&iVar8, 11);
					__LIB_1__::func_354(11389, iVar8, -1, 1, 0);
					bVar7 = true;
				}
				__LIB_0__::func_712(82, 3, bVar7);
			}
		}
		if (iParam2 == 1)
		{
			STATS::PLAYSTATS_CHANGE_MC_ROLE(__LIB_7__::func_919(__LIB_0__::func_797()), __LIB_7__::func_918(__LIB_0__::func_797()), __LIB_2__::func_476(), __LIB_2__::func_475(), Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_429, 4, Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_467);
		}
	}
}

void func_549()//Position - 0x7A8B7
{
	struct<8> Var0;
	int iVar1;
	Var0 = { __LIB_4__::func_857(61, 63, -1) };
	iVar1 = 0;
	if (__LIB_3__::func_195(1))
	{
		Var0 = { __LIB_4__::func_857(47, 48, -1) };
		iVar1 = 1;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		StringCopy(&Var0, __LIB_3__::func_217(PLAYER::PLAYER_ID(), 0), 64);
	}
	func_550(&Var0, iVar1, 0);
	if ((!__LIB_0__::func_53() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || __LIB_1__::func_338())
	{
		__LIB_1__::func_967(28);
	}
	else
	{
		__LIB_1__::func_966(28);
	}
}

void func_550(char* sParam0, int iParam1, bool bParam2)//Position - 0x7A933
{
	if (bParam2)
	{
		if (__LIB_3__::func_195(1) || iParam1 == 1)
		{
			__LIB_4__::func_856(47, 48, sParam0, -1, 1);
			if (__LIB_15__::func_361() && iParam1 == 1)
			{
				__LIB_7__::func_971(sParam0, bParam2);
			}
		}
		else
		{
			__LIB_4__::func_856(61, 63, sParam0, -1, 1);
			if (__LIB_2__::func_50() && iParam1 == 0)
			{
				__LIB_7__::func_972(sParam0, bParam2);
			}
		}
	}
	StringCopy(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105), sParam0, 64);
	Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();
	if ((!__LIB_0__::func_53() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || __LIB_1__::func_338())
	{
		__LIB_1__::func_967(28);
	}
	else
	{
		__LIB_1__::func_966(28);
	}
}

void func_574()//Position - 0x7B095
{
	if (MISC::IS_PC_VERSION())
	{
		NETWORK::NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(1);
		if (__LIB_3__::func_195(1))
		{
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(joaat("PI_BIK_0_T"));
		}
		else
		{
			HUD::OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(-1755491431);
		}
	}
}

int func_607()//Position - 0x7BFBD
{
	int iVar0;
	int iVar1;
	iVar0 = 71;
	iVar1 = 0;
	while (iVar1 <= 71)
	{
		if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_160[iVar1 /*3*/], 1) < fLocal_163)
		{
			fLocal_163 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_160[iVar1 /*3*/], 1);
			iVar0 = iVar1;
		}
		iVar1++;
	}
	fLocal_163 = 9999.99f;
	return iVar0;
}

void func_609(struct<2> Param0, Vector3 vParam1, float fParam2)//Position - 0x7C052
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = (360f / SYSTEM::TO_FLOAT(72));
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar2 = 0;
	while (iVar2 <= 71)
	{
		fLocal_162 = (fVar0 * IntToFloat(iVar2));
		Local_160[iVar2 /*3*/] = (Param0.f_0 + (fParam2 * SYSTEM::COS(fLocal_162)));
		Local_160[iVar2 /*3*/].f_1 = (Param0.f_1 + (fParam2 * SYSTEM::SIN(fLocal_162)));
		Local_160[iVar2 /*3*/].f_2 = Var1.f_2;
		Local_161[iVar2 /*3*/] = (Param0.f_0 + ((fParam2 - 0.5f) * SYSTEM::COS(fLocal_162)));
		Local_161[iVar2 /*3*/].f_1 = (Param0.f_1 + ((fParam2 - 0.5f) * SYSTEM::SIN(fLocal_162)));
		Local_161[iVar2 /*3*/].f_2 = Var1.f_2;
		iVar2++;
	}
}

void func_616(var uParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x7C329
{
	char* sVar0;
	if (iParam2 == 0)
	{
		if (bParam9)
		{
			sVar0 = "CELEB_FINCOMP" /* GXT: COMPLETE */;
		}
		else if (bParam8)
		{
			sVar0 = "CELEB_WINNERS" /* GXT: WINNERS */;
		}
		else
		{
			sVar0 = "CELEB_WINNER" /* GXT: Winner */;
		}
	}
	else if (iParam2 == 1)
	{
		sVar0 = "CELEB_LOSER" /* GXT: Loser */;
	}
	else if (iParam2 == 3)
	{
		sVar0 = "CELEB_PASSED" /* GXT: PASSED */;
	}
	else if (iParam2 == 4)
	{
		sVar0 = "CELEB_FAILED" /* GXT: FAILED */;
	}
	else
	{
		sVar0 = "CELEB_DRAW" /* GXT: Draw */;
		sParam3 = "";
		sParam4 = "";
	}
	if (!__LIB_1__::func_338() || !__LIB_18__::func_177(PLAYER::PLAYER_ID()))
	{
		sParam4 = "";
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		__LIB_0__::func_700(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	__LIB_0__::func_700(sParam3);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		__LIB_0__::func_700(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_2, "ADD_WINNER_TO_WALL");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!bParam9)
	{
		__LIB_0__::func_700(sVar0);
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2715699.f_3479.f_60));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam3);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam6);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam7);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam5);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (bParam10)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_621()//Position - 0x7C7E3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	if (!func_751(16))
	{
		if (func_1919() != 8)
		{
			if (!__LIB_2__::func_124(PLAYER::PLAYER_ID()))
			{
				if (!__LIB_3__::func_369(PLAYER::PLAYER_ID()))
				{
					if (func_745(NETWORK::PARTICIPANT_ID_TO_INT()))
					{
						if (func_744(NETWORK::PARTICIPANT_ID_TO_INT()))
						{
							func_731(&iVar0, &iVar1, &iVar2);
						}
						if (iVar1 > 0)
						{
							__LIB_1__::func_925();
							__LIB_40__::func_731(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_COMPLETE"), joaat("XPCATEGORY_COMPLETE_CHALLENGES"), iVar1, 1, -1, 0, 0, 0);
							Local_169.f_7 = (Local_169.f_7 + iVar1);
						}
						if (iVar0 > 0)
						{
							func_638(&iVar0, 1);
						}
						iVar0 = (iVar0 + iVar2);
						if (iVar0 > 0)
						{
							if (__LIB_0__::func_112())
							{
								__LIB_3__::func_407(joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"), iVar0, &uVar3, 0, 1, 0);
							}
							else
							{
								MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar0, "AM_HUNT_THE_BEAST", &uVar4);
							}
							Local_169.f_6 = (Local_169.f_6 + iVar0);
							if (!Global_262145.f_11875 /* Tunable: HUNT_THE_BEAST_DISABLE_SHARE_CASH */)
							{
								if (Local_169.f_6 > 0)
								{
									__LIB_1__::func_926(20, Local_169.f_6);
								}
							}
							Global_2727753 = iVar0;
						}
					}
					else
					{
						__LIB_2__::func_160(0);
					}
				}
			}
		}
		func_1923(16);
	}
}

void func_638(int iParam0, int iParam1)//Position - 0x7D83A
{
	int iVar0;
	if (*iParam0 > 0)
	{
		if (!__LIB_2__::func_50())
		{
			if (__LIB_2__::func_159(0))
			{
				if (!__LIB_3__::func_195(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(__LIB_0__::func_797()))
					{
						if (__LIB_1__::func_930() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * __LIB_1__::func_930());
							*iParam0 = (*iParam0 - iVar0);
						}
						__LIB_2__::func_98(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_642("GB_BCUT_TICK1" /* GXT: You paid ~a~ ~s~a $~1~ ~s~cut. */, __LIB_0__::func_797(), iVar0, 0, 0, 1);
						}
						__LIB_1__::func_928(20);
						__LIB_2__::func_128(__LIB_0__::func_797(), iVar0, 1);
					}
				}
			}
		}
	}
}

int func_642(char* sParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x7D95F
{
	int iVar0;
	struct<8> Var1;
	iVar0 = -1;
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_648(bParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(__LIB_2__::func_49(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		__LIB_2__::func_158(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

int func_648(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x7DBCA
{
	int iVar0;
	int iVar1;
	if (__LIB_2__::func_154(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_111249[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((__LIB_2__::func_154(PLAYER::PLAYER_ID()) || (__LIB_0__::func_80() && __LIB_1__::func_5())) && !BitTest(Global_2815059.f_4660, 31)) && !bParam4)
	{
		iVar1 = __LIB_1__::func_4();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (__LIB_1__::func_693(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_111249[iParam1] != -1)
							{
								return __LIB_3__::func_387(iParam1, iParam0, 0);
							}
							else
							{
								return __LIB_3__::func_386(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return __LIB_3__::func_386(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_111249[iParam1] != -1)
				{
					return __LIB_3__::func_387(iParam1, iParam0, 0);
				}
				else
				{
					return __LIB_2__::func_599(0, -1, 0);
				}
			}
			else
			{
				return __LIB_2__::func_599(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_111249[iParam1] != -1)
		{
			return __LIB_3__::func_387(iParam1, iParam0, 0);
		}
		else
		{
			return __LIB_3__::func_386(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return __LIB_3__::func_386(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

void func_731(var uParam0, var uParam1, var uParam2)//Position - 0x7FB69
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iLocal_170;
	iVar1 = ((__LIB_1__::func_724(&uLocal_728, 0, 0) / 60) / 1000);
	if (iVar1 > Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */)
	{
		iVar1 = Global_262145.f_11907 /* Tunable: PARTICIPATION_T_CAP */;
	}
	else if (iVar1 < 1)
	{
		iVar1 = 1;
	}
	*uParam2 = (func_743() * iVar1);
	*uParam1 = (func_742() * iVar1);
	iVar2 = iLocal_1983;
	if (iLocal_1983 > func_741())
	{
		iVar2 = func_741();
	}
	if (func_751(20))
	{
		if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			*uParam0 = SYSTEM::ROUND((IntToFloat(func_737(4, iVar2, func_740(), func_739(), func_738(iVar0))) * Global_262145.f_11910 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_CASH */));
			*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_737(4, iVar2, func_736(), func_735(), func_738(iVar0))) * Global_262145.f_11911 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_RP */)));
		}
		else
		{
			__LIB_2__::func_160(1);
		}
	}
	else
	{
		switch (func_1919())
		{
			case 3:
				if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					*uParam0 = SYSTEM::ROUND((IntToFloat(func_737(1, iVar2, func_740(), func_739(), func_738(iVar0))) * Global_262145.f_11910 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_CASH */));
					*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_737(1, iVar2, func_736(), func_735(), func_738(iVar0))) * Global_262145.f_11911 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_RP */)));
				}
				else
				{
					__LIB_2__::func_160(1);
				}
				break;
			case 5:
				if (func_734() == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					*uParam0 = SYSTEM::ROUND((IntToFloat(func_737(3, iVar2, func_740(), func_733(), -1082130432)) * Global_262145.f_11910 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_CASH */));
					*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_737(3, iVar2, func_736(), func_732(), -1082130432)) * Global_262145.f_11911 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_RP */)));
				}
				else if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					*uParam0 = SYSTEM::ROUND((IntToFloat(func_737(2, iVar2, func_740(), -1, func_738(iVar0))) * Global_262145.f_11910 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_CASH */));
					*uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_737(2, iVar2, func_736(), -1, func_738(iVar0))) * Global_262145.f_11911 /* Tunable: HUNT_THE_BEAST_EVENT_MULTIPLIER_RP */)));
				}
				else
				{
					__LIB_2__::func_160(1);
				}
				break;
			}
	}
}

int func_732()//Position - 0x7FD70
{
	return Global_262145.f_11792 /* Tunable: HUNT_THE_BEAST_H_BASE_RP */;
}

int func_733()//Position - 0x7FD7F
{
	return Global_262145.f_11791 /* Tunable: HUNT_THE_BEAST_H_BASE_CASH */;
}

int func_734()//Position - 0x7FD8E
{
	return Local_165.f_1.f_16;
}

int func_735()//Position - 0x7FD9D
{
	return Global_262145.f_11790 /* Tunable: HUNT_THE_BEAST_B_BASE_RP */;
}

int func_736()//Position - 0x7FDAC
{
	return Global_262145.f_11794 /* Tunable: HUNT_THE_BEAST_SCALE_RP */;
}

int func_737(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)//Position - 0x7FDBB
{
	switch (iParam0)
	{
		case default:
			return -1;
		case 1:
			return SYSTEM::ROUND((IntToFloat(iParam3) + (IntToFloat((iParam1 * iParam2)) * fParam4)));
		case 2:
		case 4:
			return SYSTEM::ROUND((IntToFloat((iParam1 * iParam2)) * fParam4));
		case 3:
			return (iParam3 + (iParam1 * iParam2));
	}
}

float func_738(int iParam0)//Position - 0x7FE12
{
	if (iParam0 < Global_262145.f_11796 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_PLAYER_THRESHOLD_1 */)
	{
		return Global_262145.f_11801 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_THRESHOLD_VALUE_1 */;
	}
	if (iParam0 < Global_262145.f_11797 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_PLAYER_THRESHOLD_2 */)
	{
		return Global_262145.f_11802 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_THRESHOLD_VALUE_2 */;
	}
	if (iParam0 < Global_262145.f_11798 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_PLAYER_THRESHOLD_3 */)
	{
		return Global_262145.f_11803 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_THRESHOLD_VALUE_3 */;
	}
	if (iParam0 < Global_262145.f_11799 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_PLAYER_THRESHOLD_4 */)
	{
		return Global_262145.f_11804 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_THRESHOLD_VALUE_4 */;
	}
	if (iParam0 < Global_262145.f_11800 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_PLAYER_THRESHOLD_5 */)
	{
		return Global_262145.f_11805 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_THRESHOLD_VALUE_5 */;
	}
	return Global_262145.f_11806 /* Tunable: HUNT_THE_BEAST_P_WEIGHT_THRESHOLD_VALUE_6 */;
}

int func_739()//Position - 0x7FE9E
{
	return Global_262145.f_11789 /* Tunable: HUNT_THE_BEAST_B_BASE_CASH */;
}

int func_740()//Position - 0x7FEAD
{
	return Global_262145.f_11793 /* Tunable: HUNT_THE_BEAST_SCALE_CASH */;
}

int func_741()//Position - 0x7FEBC
{
	return Global_262145.f_11795 /* Tunable: HUNT_THE_BEAST_V_CAP */;
}

int func_742()//Position - 0x7FECB
{
	return Global_262145.f_11808 /* Tunable: HUNT_THE_BEAST_MINIMUM_PARTICIPATION_RP */;
}

int func_743()//Position - 0x7FEDA
{
	return Global_262145.f_11807 /* Tunable: HUNT_THE_BEAST_MINIMUM_PARTICIPATION_CASH */;
}

int func_744(bool bParam0)//Position - 0x7FEE9
{
	if (func_1782(5, bParam0))
	{
		return 1;
	}
	if (func_1782(6, bParam0))
	{
		return 1;
	}
	if (func_1782(7, bParam0))
	{
		return 1;
	}
	if (func_1782(8, bParam0))
	{
		return 1;
	}
	return 0;
}

int func_745(int iParam0)//Position - 0x7FF2B
{
	if (func_1782(14, iParam0))
	{
		return 1;
	}
	if (func_1782(16, iParam0))
	{
		return 1;
	}
	if (func_1782(15, iParam0))
	{
		return 1;
	}
	if (func_1782(17, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_751(int iParam0)//Position - 0x8006B
{
	return BitTest(bLocal_710, iParam0);
}

void func_754()//Position - 0x800AE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_262145.f_11708 /* Tunable: HUNT_THE_BEAST_NUMBER_OF_ACTIVE_LANDMARKS */)
	{
		if (HUD::DOES_BLIP_EXIST(Local_714[iVar0 /*3*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_714[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	func_755();
}

void func_755()//Position - 0x800EF
{
	func_757();
	func_756(21);
	func_756(23);
	func_756(25);
	iLocal_171 = 0;
}

void func_756(int iParam0)//Position - 0x80111
{
	MISC::CLEAR_BIT(&bLocal_710, iParam0);
}

void func_757()//Position - 0x80122
{
	if (func_41() != -1)
	{
		if (BitTest(uLocal_725, func_41()))
		{
			if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_1987))
				{
					HUD::REMOVE_BLIP(&iLocal_1987);
					__LIB_0__::func_794(&uLocal_754);
				}
			}
			else
			{
				__LIB_19__::func_354(func_41(), 1, 0);
				__LIB_3__::func_459(func_41(), 0);
				__LIB_12__::func_535(func_41(), 442, 0, 0);
				__LIB_19__::func_350(func_41(), 1f, 0, 0);
				__LIB_19__::func_369(func_41(), 0, 0);
				func_758(func_41(), func_766(), 0, 0, 0);
			}
		}
	}
	func_756(24);
	iLocal_164 = 0;
}

void func_758(bool bParam0, struct<4> Param1, bool bParam2, bool bParam3, int iParam4)//Position - 0x801B1
{
	bool bVar0;
	if (__LIB_3__::func_451(bParam0))
	{
		return;
	}
	if (__LIB_3__::func_440(&(Global_2678393.f_855[bParam0]), &(Global_2678393.f_1218[bParam0]), &(Global_2678393.f_396), bParam2, bParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2678393.f_1318[bParam0 /*4*/] = { Param1 };
			Global_2678393.f_1447[bParam0] = iParam4;
		}
		if (bVar0)
		{
			if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
			{
				__LIB_27__::func_624(bParam0);
			}
		}
	}
}

struct<4> func_766()//Position - 0x80430
{
	struct<4> Var0;
	StringCopy(&Var0, "AMHB_BL" /* GXT: Beast */, 16);
	return Var0;
}

void func_780()//Position - 0x80984
{
	if (__LIB_0__::func_1("AMHB_OPTTCKR" /* GXT: You have a chance of becoming the Beast. The Beast will be selected randomly from all players that have a chance. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_BSTHLP0" /* GXT: Visit landmarks ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~ ~s~without being killed to gain cash and RP rewards. Visit all landmarks to gain an additional bonus. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_BSTHLP1" /* GXT: You are hidden on the map from other players. However they can see your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~for a short time at the start of the event and after you visit each landmark. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_BSTHLP2" /* GXT: As the Beast you are stronger and faster than normal. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_BSTHLP3" /* GXT: Your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~is now visible to other players on the map for a short time. This time increases with each landmark visited. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_HTRHLP0" /* GXT: Another player is the Beast. Hunt it down before it visits all landmarks to gain a cash and RP reward. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_HTRHLP1" /* GXT: The Beast is hidden on the map. However you can see its blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~for a short time at the start of the event and after it visits each landmark. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_HTRHLP2" /* GXT: The Beast is stronger and faster than you. Inflict a lot of damage to take it down. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_HTRHLP3" /* GXT: The Beast ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~has visited a landmark and is now visible for a short time. This time increases with each landmark visited. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_NOCLCT2" /* GXT: The Beast blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~is now visible on the map for a short time because it has not visited a landmark for several minutes. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_NOCLCT" /* GXT: Your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~is now visible to other players on the map for a short time because you have not visited a landmark for several minutes. */))
	{
		HUD::CLEAR_HELP(true);
	}
	func_781();
}

void func_781()//Position - 0x80A4B
{
	if (iLocal_733 != -1)
	{
		__LIB_3__::func_422(&iLocal_733);
	}
	if (__LIB_0__::func_1("AMHB_OPTHELP" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_PASSIVE" /* GXT: Hunt the Beast will begin shortly. Exit Passive Mode to have a chance of becoming the Beast. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_BOB" /* GXT: Hunt the Beast will begin shortly. Exit the helicopter to have a chance of becoming the Beast. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_LUXOR" /* GXT: Hunt the Beast will begin shortly. Exit the Luxor to have a chance of becoming the Beast. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_HELIGUN" /* GXT: Hunt the Beast will begin shortly. Exit the helicopter to have a chance of becoming the Beast. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_HKR" /* GXT: Hunt the Beast will begin shortly. Stop the activity you are doing to have a chance of becoming the Beast. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (__LIB_0__::func_1("AMHB_PLANE" /* GXT: Hunt the Beast will begin shortly. Exit the plane to have a chance of becoming the Beast. */))
	{
		HUD::CLEAR_HELP(true);
	}
	iLocal_733 = -1;
}

void func_785()//Position - 0x80B8D
{
	int iVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;
	char* sVar4;
	char* sVar5;
	if (func_1930() > -1)
	{
		if (BitTest(uLocal_726, func_1930()))
		{
			if (!__LIB_0__::func_86(func_34()))
			{
				func_1753(146, func_34(), &uLocal_735, SYSTEM::TO_FLOAT(Global_262145.f_11969 /* Tunable: FREEMODE_EVENT_UI_ENTRY_DISTANCE */), SYSTEM::TO_FLOAT(Global_262145.f_11872 /* Tunable: HUNT_THE_BEAST_EXTENDED_WANTED_REDUCTION_DISTANCE */), 0);
			}
		}
	}
	func_1752();
	func_1751();
	func_1750();
	func_1749();
	if (func_1930() != -1)
	{
		func_1748();
	}
	if (func_41() != -1)
	{
		if (BitTest(uLocal_725, func_41()))
		{
			func_49();
		}
		else
		{
			func_45();
		}
	}
	else
	{
		func_45();
	}
	func_1747();
	if (func_1724(0, 1))
	{
		func_780();
	}
	if (func_63() >= 2)
	{
		if (func_1930() != -1)
		{
			func_1716();
		}
	}
	func_1699();
	switch (func_63())
	{
		case 0:
			break;
		case 1:
			if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				func_1698(1);
			}
			else
			{
				func_1698(0);
			}
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_SFX1/BEAST", false, -1))
			{
				if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT() && !func_1724(0, 0))
				{
					if (!__LIB_1__::func_785(PLAYER::PLAYER_ID()))
					{
						__LIB_1__::func_963(1);
					}
					func_1694();
					iVar0 = func_1683();
					if (!__LIB_2__::func_14())
					{
						if (!func_751(0) && !func_751(1))
						{
							if (iVar0 == 0)
							{
								sVar1 = "AMHB_OPTHELP" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. */;
								if (__LIB_2__::func_50())
								{
									if (__LIB_15__::func_361())
									{
										sVar1 = "AMHB_OPTBOSSB" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. If you become the Beast, your Motorcycle Club will be disbanded. */;
									}
									else if (__LIB_3__::func_39(__LIB_0__::func_797()))
									{
										sVar1 = "AMHB_OPTBOSSC" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. If you become the Beast, all of your Associates will be let go. */;
									}
									else
									{
										sVar1 = "AMHB_OPTBOSS" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. If you become the Beast, all of your Bodyguards will be let go. */;
									}
								}
								else if (__LIB_2__::func_159(0))
								{
									if (__LIB_3__::func_195(0))
									{
										sVar1 = "AMHB_OPTGOONB" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. If you or your President become the Beast, you will be removed from the Motorcycle Club. */;
									}
									else if (__LIB_3__::func_39(__LIB_0__::func_797()))
									{
										sVar1 = "AMHB_OPTGOONC" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. If you or your CEO become the Beast, you will no longer be an Associate. */;
									}
									else
									{
										sVar1 = "AMHB_OPTGOON" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. If you or your VIP become the Beast, you will no longer be a Bodyguard. */;
									}
								}
								__LIB_7__::func_954(&iLocal_733, 1, sVar1, 0, 0, 1, 0);
								func_1923(0);
							}
							else if (func_1680(iVar0))
							{
								func_1923(1);
							}
						}
						else
						{
							if (!func_751(30))
							{
								if (__LIB_0__::func_1("AMHB_OPTHELP" /* GXT: Hunt the Beast will begin shortly. Press ~INPUT_CONTEXT~ to have a chance of becoming the Beast. */))
								{
									AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
									func_1923(30);
								}
							}
							if (!func_1782(0, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								if (iVar0 == 0)
								{
									if (func_751(1))
									{
										func_781();
										func_756(1);
										func_756(0);
									}
									else if (__LIB_3__::func_363(iLocal_733, 0) && __LIB_3__::func_113(iLocal_733, 1))
									{
										func_781();
										__LIB_1__::func_707("AMHB_OPTTCKR" /* GXT: You have a chance of becoming the Beast. The Beast will be selected randomly from all players that have a chance. */, 30000);
										__LIB_1__::func_752(1);
										func_1781(0);
									}
								}
								else if (iLocal_733 != -1)
								{
									func_781();
									func_756(1);
									func_756(0);
								}
							}
						}
					}
					else
					{
						__LIB_3__::func_422(&iLocal_733);
						func_781();
						func_756(1);
						func_756(0);
					}
					if (__LIB_0__::func_864(&(Local_165.f_1.f_4)))
					{
						iVar2 = (Global_262145.f_11684 /* Tunable: HUNT_THE_BEAST_EVENT_START_COUNTDOWN_TIME */ - __LIB_1__::func_724(&(Local_165.f_1.f_4), 0, 0));
						__LIB_1__::func_961(iVar2);
						if (iVar2 >= 0)
						{
							__LIB_1__::func_350(iVar2, __LIB_1__::func_960(-1), 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
						}
					}
				}
				else
				{
					func_781();
					func_756(1);
					func_756(0);
				}
			}
			break;
		case 2:
			if (!func_751(29))
			{
				__LIB_3__::func_476(146, func_16(), func_1672(), 0);
				func_1923(29);
			}
			if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_169.f_9 == 0)
				{
					Local_169.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
			}
			if (iLocal_733 > -1)
			{
				__LIB_3__::func_422(&iLocal_733);
			}
			func_781();
			if (func_16() == 2)
			{
				if (!func_751(19))
				{
					__LIB_1__::func_950();
					func_1923(19);
				}
			}
			if (__LIB_1__::func_785(PLAYER::PLAYER_ID()))
			{
				__LIB_1__::func_963(0);
			}
			if (BitTest(uLocal_726, func_1930()))
			{
				if (BitTest(uLocal_725, func_41()))
				{
					if (!func_48())
					{
						func_47(1);
					}
					if (!func_751(31))
					{
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_713[func_41() /*3*/].f_2, true, 0f);
						func_1923(31);
					}
					func_1662();
					func_1698(0);
					if (func_4() == 1)
					{
						__LIB_25__::func_395();
					}
					func_1660();
					if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (__LIB_3__::func_472(1, 0))
						{
							if (func_1782(5, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(5);
							}
							if (func_1782(6, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(6);
							}
							if (func_1782(7, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(7);
							}
							if (func_1782(8, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(8);
							}
							if (func_1782(14, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(14);
							}
							if (func_1782(15, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(15);
							}
							if (func_1782(16, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(16);
							}
							if (func_1782(17, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(17);
							}
						}
						else if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
						{
							if (func_751(11))
							{
								if (!func_1782(7, NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									func_1781(7);
								}
								if (!func_1782(15, NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									func_1781(15);
								}
							}
							else if (func_1782(7, NETWORK::PARTICIPANT_ID_TO_INT()))
							{
								func_1780(7);
							}
							if (func_1784() <= 100f)
							{
								if (!func_1782(16, NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									func_1781(16);
								}
							}
						}
					}
					else
					{
						if (func_1782(6, NETWORK::PARTICIPANT_ID_TO_INT()))
						{
							func_1780(6);
						}
						if (func_1782(7, NETWORK::PARTICIPANT_ID_TO_INT()))
						{
							func_1780(7);
						}
					}
					if (bLocal_734 != -1)
					{
						if (!func_751(12))
						{
							if (!func_1724(0, 0))
							{
								if (BitTest(uLocal_725, Local_712[bLocal_734 /*18*/].f_1))
								{
									if (!BitTest(uLocal_727, Local_712[bLocal_734 /*18*/].f_1))
									{
										if (func_1930() != bLocal_734)
										{
											if (func_4() == 1)
											{
												func_1658(63, "AMHB_PHINTSH1" /* GXT: HUNT THE BEAST */, "AMHB_PHINTSH2", __LIB_1__::func_259(), -1, __LIB_1__::func_259(), 1, 0);
											}
											else if (func_4() == 0)
											{
												func_1658(63, "AMHB_PHINTSH1" /* GXT: HUNT THE BEAST */, "AMHB_PHINTSH2A" /* GXT: Another player is the Beast. Take them out. */, __LIB_1__::func_259(), -1, __LIB_1__::func_259(), 1, 0);
											}
										}
										func_1923(12);
									}
								}
							}
						}
						else if (!func_751(13))
						{
							if (__LIB_1__::func_962(63))
							{
								func_1923(13);
							}
						}
					}
					if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (func_5(5))
						{
							if (!func_1656(1))
							{
								if (!AUDIO::AUDIO_IS_MUSIC_PLAYING())
								{
									AUDIO::TRIGGER_MUSIC_EVENT("BST_START");
									func_1957(1);
								}
							}
						}
					}
					if (!func_751(27))
					{
						if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (func_1782(2, NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									bVar3 = true;
								}
							}
							else
							{
								bVar3 = true;
							}
						}
						if (bVar3)
						{
							func_1637(146, func_1655(), func_1654(), func_1653(), func_1652(), func_1651(), 0);
							func_1923(27);
						}
					}
					if (func_1930() == bLocal_734)
					{
						if (func_5(5))
						{
							__LIB_28__::func_835(1);
							if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (BitTest(uLocal_725, PLAYER::PLAYER_ID()))
								{
									PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
								}
							}
							if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!__LIB_1__::func_953(PLAYER::PLAYER_ID()))
								{
									func_1605(1);
								}
							}
							if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!__LIB_3__::func_472(1, 0))
								{
									if (!func_1782(5, bLocal_734))
									{
										func_1781(5);
										func_1592(1);
									}
								}
							}
							if (bLocal_734 != -1)
							{
								if (!func_1724(1, 0))
								{
									__LIB_3__::func_198("AMHB_GO2AREA" /* GXT: Go to each ~HUD_COLOUR_YELLOW~landmark. */, 0);
								}
								else
								{
									__LIB_3__::func_0();
								}
							}
							else
							{
								__LIB_3__::func_0();
							}
							if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (!func_1724(0, 0))
								{
									if (BitTest(uLocal_725, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
									{
										if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
										{
											if (CAM::IS_SCREEN_FADED_IN())
											{
												switch (iLocal_732)
												{
													case 0:
														if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
														{
															if (!func_751(2))
															{
																if (func_4() == 0)
																{
																	__LIB_1__::func_707("AMHB_BSTHLP0" /* GXT: Visit landmarks ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~ ~s~without being killed to gain cash and RP rewards. Visit all landmarks to gain an additional bonus. */, 30000);
																	__LIB_1__::func_752(1);
																	func_1923(2);
																	iLocal_732++;
																}
															}
														}
														break;
													case 1:
														if (!__LIB_0__::func_1("AMHB_BSTHLP0" /* GXT: Visit landmarks ~HUD_COLOUR_YELLOW~~BLIP_OBJECTIVE~ ~s~without being killed to gain cash and RP rewards. Visit all landmarks to gain an additional bonus. */))
														{
															iLocal_732++;
														}
														break;
													case 2:
														if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
														{
															if (!func_751(3))
															{
																if (func_4() == 0)
																{
																	__LIB_1__::func_707("AMHB_BSTHLP1" /* GXT: You are hidden on the map from other players. However they can see your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~for a short time at the start of the event and after you visit each landmark. */, 30000);
																	__LIB_1__::func_752(1);
																	func_1923(3);
																	if (!func_751(24))
																	{
																		func_1923(24);
																		__LIB_0__::func_794(&uLocal_737);
																		__LIB_0__::func_795(&uLocal_737, 0, 0);
																	}
																	iLocal_732++;
																}
															}
														}
														break;
													case 3:
														if (!__LIB_0__::func_1("AMHB_BSTHLP1" /* GXT: You are hidden on the map from other players. However they can see your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~for a short time at the start of the event and after you visit each landmark. */))
														{
															iLocal_732++;
														}
														break;
													case 4:
														if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
														{
															if (!func_751(4))
															{
																if (func_4() == 0)
																{
																	__LIB_1__::func_707("AMHB_BSTHLP2" /* GXT: As the Beast you are stronger and faster than normal. */, 30000);
																	__LIB_1__::func_752(1);
																	func_1923(4);
																	iLocal_732++;
																}
															}
														}
														break;
													case 5:
														if (!__LIB_0__::func_1("AMHB_BSTHLP2" /* GXT: As the Beast you are stronger and faster than normal. */))
														{
															iLocal_732++;
														}
														break;
													case 6:
														if (iLocal_1983 > 0)
														{
															if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
															{
																if (!func_751(5))
																{
																	if (func_4() == 0)
																	{
																		__LIB_1__::func_707("AMHB_BSTHLP3" /* GXT: Your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~is now visible to other players on the map for a short time. This time increases with each landmark visited. */, 12000);
																		__LIB_1__::func_752(1);
																		func_1923(5);
																		iLocal_732++;
																	}
																}
															}
														}
														break;
													case 7:
														if (!__LIB_0__::func_1("AMHB_BSTHLP3" /* GXT: Your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~is now visible to other players on the map for a short time. This time increases with each landmark visited. */))
														{
															iLocal_732++;
														}
														break;
													case 8:
														break;
													}
												}
											}
										}
									}
							}
						}
						else if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_835())
							{
								func_1781(2);
								if (!__LIB_3__::func_472(1, 0))
								{
									func_1781(17);
								}
							}
						}
					}
					else
					{
						if (bLocal_734 != -1)
						{
							if (!func_1724(1, 0))
							{
								if (func_4() == 1)
								{
									__LIB_3__::func_198("AMHB_PHBEAST", 0);
								}
								else if (func_4() == 0)
								{
									__LIB_3__::func_198("AMHB_KLBEAST" /* GXT: Take out the ~HUD_COLOUR_PURPLE~Beast. */, 0);
								}
							}
							else
							{
								__LIB_3__::func_0();
							}
						}
						else
						{
							__LIB_3__::func_0();
						}
						if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_5(5))
							{
								if (!func_1724(0, 0))
								{
									if (BitTest(uLocal_725, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
									{
										if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
										{
											if (CAM::IS_SCREEN_FADED_IN())
											{
												switch (iLocal_732)
												{
													case 0:
														if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
														{
															if (!func_751(6))
															{
																if (func_4() == 0)
																{
																	__LIB_1__::func_707("AMHB_HTRHLP0" /* GXT: Another player is the Beast. Hunt it down before it visits all landmarks to gain a cash and RP reward. */, 30000);
																	__LIB_1__::func_752(1);
																	func_1923(6);
																	iLocal_732++;
																}
															}
														}
														break;
													case 1:
														if (!__LIB_0__::func_1("AMHB_HTRHLP0" /* GXT: Another player is the Beast. Hunt it down before it visits all landmarks to gain a cash and RP reward. */))
														{
															iLocal_732++;
														}
														break;
													case 2:
														if (!HUD::IS_PAUSE_MENU_ACTIVE())
														{
															if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
															{
																if (!func_751(7))
																{
																	if (func_4() == 0)
																	{
																		if (!func_1656(3))
																		{
																			__LIB_1__::func_707("AMHB_HTRHLP1" /* GXT: The Beast is hidden on the map. However you can see its blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~for a short time at the start of the event and after it visits each landmark. */, 30000);
																		}
																		else
																		{
																			__LIB_1__::func_707("AMHB_HTRHLP1B" /* GXT: The Beast is hidden on the map. However you can see its blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~for a short time after it visits each landmark. */, 30000);
																		}
																		__LIB_1__::func_752(1);
																		func_1923(7);
																		if (!func_751(24))
																		{
																			if (!func_1656(3))
																			{
																				func_1923(24);
																			}
																			__LIB_0__::func_794(&uLocal_737);
																			__LIB_0__::func_795(&uLocal_737, 0, 0);
																		}
																		iLocal_732++;
																	}
																}
															}
														}
														else if (!func_1656(3))
														{
															if (!__LIB_0__::func_864(&uLocal_707))
															{
																__LIB_0__::func_795(&uLocal_707, 0, 0);
															}
															else if (__LIB_0__::func_937(&uLocal_707, 10000, 0))
															{
																func_1957(3);
															}
														}
														break;
													case 3:
														if (!__LIB_0__::func_1("AMHB_HTRHLP1" /* GXT: The Beast is hidden on the map. However you can see its blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~for a short time at the start of the event and after it visits each landmark. */))
														{
															iLocal_732++;
														}
														break;
													case 4:
														if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
														{
															if (!func_751(8))
															{
																if (func_4() == 0)
																{
																	__LIB_1__::func_707("AMHB_HTRHLP2" /* GXT: The Beast is stronger and faster than you. Inflict a lot of damage to take it down. */, 30000);
																	__LIB_1__::func_752(1);
																	func_1923(8);
																	iLocal_732++;
																}
															}
														}
														break;
													case 5:
														if (!__LIB_0__::func_1("AMHB_HTRHLP2" /* GXT: The Beast is stronger and faster than you. Inflict a lot of damage to take it down. */))
														{
															iLocal_732++;
														}
														break;
													case 6:
														if (iLocal_1983 > 0)
														{
															if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
															{
																if (__LIB_25__::func_396(func_41()))
																{
																	if (!func_751(9))
																	{
																		if (func_4() == 0)
																		{
																			__LIB_1__::func_707("AMHB_HTRHLP3" /* GXT: The Beast ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~has visited a landmark and is now visible for a short time. This time increases with each landmark visited. */, 12000);
																			__LIB_1__::func_752(1);
																			func_1923(9);
																			iLocal_732++;
																		}
																	}
																}
															}
														}
														break;
													case 7:
														if (!__LIB_0__::func_1("AMHB_HTRHLP3" /* GXT: The Beast ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~has visited a landmark and is now visible for a short time. This time increases with each landmark visited. */))
														{
															iLocal_732++;
														}
														break;
													case 8:
														break;
													}
												}
											}
										}
									}
								}
						}
						if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							if (func_4() == 1)
							{
								if (!func_1782(3, NETWORK::PARTICIPANT_ID_TO_INT()))
								{
									if (__LIB_16__::func_926())
									{
										if (func_829())
										{
											func_1781(3);
										}
									}
								}
							}
						}
					}
				}
			}
			func_815();
			break;
		case 3:
			func_815();
			func_780();
			if (func_48())
			{
				func_47(0);
			}
			func_1698(0);
			if (func_1930() == bLocal_734)
			{
				if (func_1919() == 3 || func_1919() == 4)
				{
					if (func_421())
					{
						func_621();
						func_1922(4);
					}
				}
			}
			if (func_1919() != 0 && __LIB_1__::func_920())
			{
				__LIB_3__::func_0();
				func_754();
				if (!func_1782(9, NETWORK::PARTICIPANT_ID_TO_INT()))
				{
					if (!func_751(14))
					{
						if (BitTest(uLocal_725, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
						{
							if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
							{
								if (!func_1724(0, 0))
								{
									if (iLocal_730 == -1)
									{
										iLocal_730 = (Global_262145.f_11683 /* Tunable: HUNT_THE_BEAST_EVENT_TIME_LIMIT */ - __LIB_1__::func_724(&(Local_165.f_1.f_2), 0, 0));
									}
									if (bLocal_734 != -1)
									{
										switch (func_1919())
										{
											case 1:
												if (func_4() == 1)
												{
												}
												else if (func_4() == 0)
												{
													func_1658(66, "AMHB_OVERTTL" /* GXT: EVENT OVER */, "AMHB_TUOVER1A" /* GXT: Nobody took out the Beast and it failed to visit all the landmarks */, 1, 15000, 2, 1, 0);
												}
												break;
											case 2:
												if (func_1930() == bLocal_734)
												{
													sVar5 = "AMHB_BYOUDIED" /* GXT: You died */;
												}
												else
												{
													sVar5 = "AMHB_BDOVER1" /* GXT: The Beast died */;
												}
												func_1658(66, "AMHB_OVERTTL" /* GXT: EVENT OVER */, sVar5, 1, 15000, 2, 1, 0);
												break;
											case 6:
												func_1658(66, "AMHB_OVERTTL" /* GXT: EVENT OVER */, "AMHB_BDOVER2" /* GXT: The Beast left */, 1, 15000, 2, 1, 0);
												break;
											case 7:
												if (func_1930() == bLocal_734)
												{
													sVar5 = "AMHB_BYOUSCD" /* GXT: You killed yourself */;
												}
												else
												{
													sVar5 = "AMHB_BDOVER3" /* GXT: The Beast killed itself */;
												}
												func_1658(66, "AMHB_OVERTTL" /* GXT: EVENT OVER */, sVar5, 1, 15000, 2, 1, 0);
												break;
											case 8:
												__LIB_3__::func_218("AMHB_BDOVER4" /* GXT: Event over. Nobody wanted to be the Beast. */, 0);
												break;
											case 5:
												if (func_1930() == bLocal_734)
												{
													func_794(65, "AMHB_BSTPHTO3A" /* GXT: <C>~a~</C>~s~ took you out */, PLAYER::GET_PLAYER_NAME(func_812()), 6, 15000, sVar4, 2);
												}
												else if (func_734() == bLocal_734)
												{
													func_1658(64, sVar4, "AMHB_BSTPHTO2A" /* GXT: You took out the Beast */, 1, -1, 2, 1, 0);
												}
												else
												{
													func_794(66, "AMHB_BSTPHTO1A" /* GXT: <C>~a~</C>~s~ took out the Beast */, PLAYER::GET_PLAYER_NAME(func_812()), 1, 15000, "AMHB_OVERTTL" /* GXT: EVENT OVER */, 2);
												}
												break;
											case 4:
												if (func_1930() == bLocal_734)
												{
												}
												else if (func_7() == bLocal_734)
												{
													if (func_744(bLocal_734))
													{
													}
												}
												else if (func_744(bLocal_734))
												{
												}
												break;
											case 3:
												if (func_1930() == bLocal_734)
												{
												}
												else
												{
													func_1658(66, "AMHB_OVERTTL" /* GXT: EVENT OVER */, "AMHB_BSTLDMK2" /* GXT: The Beast visited all the landmarks */, 1, 15000, 2, 1, 0);
												}
												break;
											}
										}
								}
								if (iLocal_730 > 30000)
								{
									AUDIO::TRIGGER_MUSIC_EVENT("BST_STOP");
								}
								func_1923(14);
							}
						}
					}
					else if (!func_751(15))
					{
						if (bLocal_734 != -1)
						{
							if (((((((__LIB_1__::func_962(66) || __LIB_1__::func_962(65)) || __LIB_1__::func_962(64)) || !func_744(NETWORK::PARTICIPANT_ID_TO_INT())) || func_1724(1, 1)) || HUD::IS_PAUSE_MENU_ACTIVE()) || func_1919() == 8) || __LIB_10__::func_225(PLAYER::PLAYER_ID()))
							{
								func_1923(15);
							}
						}
						else
						{
							func_1923(15);
						}
					}
					else if (func_1919() != 3 || func_1930() != NETWORK::PARTICIPANT_ID_TO_INT())
					{
						func_621();
					}
				}
			}
			if (func_786(&uLocal_715, 0))
			{
				if (func_751(15))
				{
					if ((!__LIB_1__::func_515() || HUD::IS_PAUSE_MENU_ACTIVE()) || __LIB_10__::func_225(PLAYER::PLAYER_ID()))
					{
						func_1923(17);
						if (func_751(16))
						{
							func_1781(9);
							func_1922(3);
						}
					}
				}
			}
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

int func_786(var uParam0, bool bParam1)//Position - 0x81B95
{
	bool bVar0;
	if ((((*uParam0 > 0 && !__LIB_1__::func_515()) && !(__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) && (__LIB_3__::func_358(PLAYER::PLAYER_ID()) || __LIB_3__::func_357(PLAYER::PLAYER_ID())))) && !__LIB_2__::func_44(PLAYER::PLAYER_ID())) && !__LIB_1__::func_708(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_914();
	}
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_0__::func_864(&(uParam0->f_3)))
			{
				__LIB_0__::func_795(&(uParam0->f_3), 0, 0);
			}
			else if (__LIB_0__::func_937(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2815059.f_4657), 0);
					__LIB_0__::func_795(&(uParam0->f_5), 0, 0);
				}
				__LIB_0__::func_795(&(uParam0->f_1), 0, 0);
				__LIB_1__::func_289(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_864(&(uParam0->f_5)))
			{
				if (__LIB_0__::func_937(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_2__::func_73();
				__LIB_1__::func_289(uParam0, 2);
			}
			break;
		case 2:
			__LIB_2__::func_73();
			if (__LIB_0__::func_937(&(uParam0->f_1), 15000, 0))
			{
				if (__LIB_0__::func_1("AMEV_LBD_HELP" /* GXT: Press ~INPUT_MULTIPLAYER_INFO~ to show the Freemode Event leaderboard. */))
				{
					HUD::CLEAR_HELP(true);
				}
				__LIB_1__::func_289(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_937(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
				__LIB_1__::func_289(uParam0, 4);
				return 1;
			}
			break;
		case 4:
			MISC::CLEAR_BIT(&(Global_2815059.f_4657), 1);
			return 1;
	}
	return 0;
}

int func_794(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)//Position - 0x81E51
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_795(&Var0);
}

int func_795(var uParam0)//Position - 0x81EC3
{
	int iVar0;
	if (uParam0->f_1 == 1)
	{
		if (Global_2703735.f_2722)
		{
			return 0;
		}
	}
	func_810(uParam0, uParam0->f_17);
	__LIB_1__::func_742(uParam0);
	if (__LIB_0__::func_177())
	{
		__LIB_1__::func_742(uParam0);
	}
	if (__LIB_1__::func_258(uParam0->f_1))
	{
		__LIB_2__::func_168();
		if (Global_2703735.f_2400[0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[0 /*80*/] = { *uParam0 };
			if (__LIB_0__::func_703(uParam0->f_69, 8192))
			{
				Global_1931432 = 1;
			}
			return 1;
		}
		if (((Global_2703735.f_2400[0 /*80*/].f_1 == 13 || Global_2703735.f_2400[0 /*80*/].f_1 == 53) || Global_2703735.f_2400[0 /*80*/].f_1 == 54) || Global_2703735.f_2400[0 /*80*/].f_1 == 58)
		{
			Global_2703735.f_2400[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703735.f_2400[iVar0 + 1 /*80*/] = { Global_2703735.f_2400[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703735.f_2400[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703735.f_2400[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703735.f_2400[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				__LIB_2__::func_168();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				__LIB_1__::func_330(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 2);
				Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !__LIB_0__::func_703(uParam0->f_69, 128))
			{
				if (__LIB_1__::func_256(Global_2703735.f_2400[iVar0 /*80*/].f_1))
				{
					Global_2703735.f_2400[iVar0 /*80*/].f_2 = 5;
					__LIB_1__::func_330(&(Global_2703735.f_2400[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_810(var uParam0, int iParam1)//Position - 0x8252D
{
	if (__LIB_1__::func_260(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == __LIB_0__::func_162() || !__LIB_1__::func_693(iParam1, 0, 1))
	{
		return;
	}
	if (__LIB_1__::func_256(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_648(iParam1, -2, 0, 0, 0);
		}
	}
}

var func_812()//Position - 0x82604
{
	return Local_165.f_1.f_17;
}

void func_815()//Position - 0x8265C
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (bLocal_734 == -1)
	{
		return;
	}
	if (func_1724(0, 0))
	{
		return;
	}
	if (func_1919() == 8)
	{
		return;
	}
	if (func_1930() == bLocal_734)
	{
		if (!func_5(5))
		{
			return;
		}
	}
	iVar0 = (Global_262145.f_11683 /* Tunable: HUNT_THE_BEAST_EVENT_TIME_LIMIT */ - __LIB_1__::func_724(&(Local_165.f_1.f_2), 0, 0));
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if ((func_1919() != 0 && func_1919() != 1) && iLocal_730 != -1)
	{
		if (iLocal_730 > 60000)
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = 6;
		}
		__LIB_3__::func_159(iLocal_730, iVar1, __LIB_2__::func_161());
	}
	else
	{
		if (iVar0 > 60000)
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = 6;
		}
		__LIB_3__::func_159(iVar0, iVar1, __LIB_2__::func_161());
	}
	if (func_1930() != bLocal_734)
	{
		if ((Global_262145.f_11708 /* Tunable: HUNT_THE_BEAST_NUMBER_OF_ACTIVE_LANDMARKS */ - iLocal_1983) > 1)
		{
			iVar1 = 1;
		}
		else
		{
			iVar1 = 6;
		}
	}
	else
	{
		iVar1 = 1;
	}
	__LIB_3__::func_370((Global_262145.f_11708 /* Tunable: HUNT_THE_BEAST_NUMBER_OF_ACTIVE_LANDMARKS */ - iLocal_1983), "AMHB_LMKSLEFT" /* GXT: LANDMARKS REMAINING */, -1, iVar1, 4, 0, sVar2, iVar1, 0, 0, 0, 0, 0, 0, -1);
	__LIB_3__::func_196(iVar0);
}

int func_829()//Position - 0x83001
{
	if (ENTITY::IS_ENTITY_ON_SCREEN(Local_713[func_41() /*3*/].f_2))
	{
		if (func_832(Local_713[func_41() /*3*/].f_2))
		{
			if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_713[func_41() /*3*/].f_2, true), 1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_713[func_41() /*3*/].f_2, 126))
				{
					if (__LIB_0__::func_687(Local_713[func_41() /*3*/].f_2, PLAYER::PLAYER_PED_ID(), func_831(), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_831()//Position - 0x830AE
{
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_713[func_41() /*3*/].f_2, false))
	{
		return 20f;
	}
	return 50f;
}

int func_832(int iParam0)//Position - 0x830D6
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 23553);
	if (iVar0 != -1)
	{
		Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar1, &fVar2);
		if (((fVar1 > 0.2f && fVar1 < 0.8f) && fVar2 > 0.2f) && fVar2 < 0.8f)
		{
			return 1;
		}
	}
	return 0;
}

int func_835()//Position - 0x8317E
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	var uVar7;
	var uVar8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	var uVar12;
	int iVar13;
	switch (func_1584(NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		case 0:
			if (!__LIB_12__::func_575())
			{
				if (Global_1574582.f_6 == 1)
				{
					if (__LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
					{
						__LIB_30__::func_228();
					}
				}
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0f, false, __LIB_3__::func_292(PLAYER::PLAYER_ID(), 1), true, -1, -1);
				}
				HUD::THEFEED_HIDE();
				GRAPHICS::ANIMPOSTFX_STOP_ALL();
				__LIB_16__::func_634();
				__LIB_0__::func_671(1);
				__LIB_1__::func_92();
				__LIB_2__::func_135(1);
				if (BitTest(uLocal_725, PLAYER::PLAYER_ID()))
				{
					if (!__LIB_0__::func_983())
					{
						Global_1835428 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					}
				}
				if (__LIB_13__::func_93())
				{
					__LIB_5__::func_400();
					Global_60335 = 0;
				}
				if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
				{
					CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
					RECORDING::REPLAY_STOP_EVENT();
					__LIB_5__::func_943(0, 1, 1, 0, 0, 0, 0);
				}
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE() || CAM::IS_CODE_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(true);
					CAM::STOP_CODE_GAMEPLAY_HINT(true);
				}
				if (__LIB_12__::func_99() || __LIB_3__::func_139(PLAYER::PLAYER_ID()))
				{
					__LIB_2__::func_719(1, 0);
					__LIB_0__::func_857();
					__LIB_0__::func_858();
				}
				STREAMING::REQUEST_ANIM_DICT("move_m@GEneric");
				STREAMING::REQUEST_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
				if (STREAMING::HAS_ANIM_DICT_LOADED("move_m@GEneric") && STREAMING::HAS_ANIM_DICT_LOADED("ANIM@MP_FM_EVENT@INTRO"))
				{
					HUD::CLEAR_HELP(true);
					func_1568(4);
				}
			}
			else
			{
				__LIB_2__::func_135(1);
				if (BitTest(uLocal_725, PLAYER::PLAYER_ID()))
				{
					Global_1835428 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				}
				return 1;
			}
			break;
		case 4:
			if (!__LIB_12__::func_575())
			{
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				}
				func_609(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1079404134);
				iVar1 = func_607();
				iVar0 = ((iVar1 + 36 - 4) % 72);
				Var4 = { Local_161[iVar1 /*3*/] };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
				fVar2 = __LIB_0__::func_932(Local_160[iVar1 /*3*/], Local_161[iVar1 /*3*/]);
				Var11 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				Var9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
				Var10 = { Var11 + Var9 };
				iVar13 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var11, Var10, 0.2f, 279, PLAYER::PLAYER_PED_ID(), 7);
				SHAPETEST::GET_SHAPE_TEST_RESULT(iVar13, &iVar6, &uVar7, &uVar8, &uVar12);
				if (iVar6 == 0 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var4, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar2);
					if (MISC::ABSF(SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()))) >= 2.5f)
					{
						fVar3 = 2f;
					}
					else if (MISC::ABSF(SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID()))) > 0f)
					{
						fVar3 = 1f;
					}
					else
					{
						fVar3 = 0f;
					}
					if (fVar3 == 1f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "move_m@GEneric", "wstop_l_0", 1000f, -8f, -1, 0, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					else if (fVar3 == 2f)
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "move_m@GEneric", "rstop_quick_l", 1000f, -8f, -1, 0, 0f, false, false, false);
						Var5 = { -0.85f, 1.25f, 0.4f };
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					else if (fVar3 == 0f)
					{
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
						PAD::DISABLE_ALL_CONTROL_ACTIONS(2 /*FRONTEND_CONTROL*/);
					}
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 3672064, 0);
					if (CAM::DOES_CAM_EXIST(iLocal_1985))
					{
						CAM::DESTROY_CAM(iLocal_1985, false);
					}
					if (CAM::DOES_CAM_EXIST(iLocal_1986))
					{
						CAM::DESTROY_CAM(iLocal_1986, false);
					}
					iLocal_1986 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					iLocal_1985 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
					{
						CAM::SET_CAM_COORD(iLocal_1985, Local_160[iVar0 /*3*/] + Vector(0.1f, 0f, 0f));
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					else
					{
						CAM::SET_CAM_COORD(iLocal_1985, Local_160[iVar0 /*3*/]);
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					CAM::SET_CAM_FOV(iLocal_1985, 20f);
					CAM::SET_CAM_ACTIVE(iLocal_1985, true);
					if (__LIB_1__::func_365(PLAYER::PLAYER_PED_ID()))
					{
						CAM::SET_CAM_COORD(iLocal_1986, Local_160[iVar0 /*3*/] + Vector(0.1f, 0f, 0f));
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					else
					{
						CAM::SET_CAM_COORD(iLocal_1986, Local_160[iVar0 /*3*/]);
						CAM::POINT_CAM_AT_ENTITY(iLocal_1985, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.125f, true);
					}
					CAM::POINT_CAM_AT_COORD(iLocal_1986, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Var5));
					CAM::SET_CAM_FOV(iLocal_1986, 20f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1986, iLocal_1985, 1500, 3, 3);
					CAM::SHAKE_CAM(iLocal_1986, "HAND_SHAKE", 0.3f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 0, 3672064, 0);
				}
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastLaunch"))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("BeastLaunch", 0, false);
				}
				func_1567(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 0f, 400f, 1, 200f, 0, 1, 1115815936, 1, 0, 0, 1, -1082130432);
				func_1568(3);
			}
			break;
		case 3:
			if (!iLocal_745)
			{
				iLocal_745 = 1;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", false);
			}
			if (__LIB_0__::func_937(&uLocal_746, 3000, 0))
			{
				if (!iLocal_744)
				{
					iLocal_744 = 1;
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
					AUDIO::START_AUDIO_SCENE("FM_Event_Beast_Screen_Freeze_Scene");
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Frontend_Beast_Freeze_Screen", "FM_Events_Sasquatch_Sounds", false);
					iLocal_742 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND(iLocal_742, "Frontend_Beast_Frozen_Screen_Loop", "FM_Events_Sasquatch_Sounds", false, 0, false);
				}
				if (func_880(10, 1, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0) && iLocal_744)
				{
					__LIB_1__::func_703();
					func_1568(1);
					if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastTransition"))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("BeastTransition", 0, false);
					}
					__LIB_0__::func_794(&uLocal_746);
					iLocal_745 = 0;
					iLocal_744 = 0;
				}
			}
			break;
		case 1:
			if (!__LIB_12__::func_575())
			{
				if (__LIB_2__::func_50())
				{
					if (__LIB_0__::func_287(PLAYER::PLAYER_ID()))
					{
						iLocal_1988 = __LIB_4__::func_971();
						func_517(0, 0, 0);
						func_448(0, 1, 0);
						__LIB_11__::func_671(0);
					}
				}
				if (__LIB_2__::func_50())
				{
					func_846(1, -1, -1, 1);
				}
				else
				{
					func_846(0, -1, 7, 1);
				}
				if (__LIB_0__::func_253(386, -1) == 0)
				{
					__LIB_28__::func_882();
				}
				else
				{
					__LIB_28__::func_881();
				}
				__LIB_30__::func_148();
				PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
				func_1568(5);
				__LIB_0__::func_794(&Global_2725381);
			}
			break;
		case 5:
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_742) && iLocal_742 != -1)
			{
				AUDIO::STOP_SOUND(iLocal_742);
				iLocal_742 = -1;
			}
			if (!iLocal_745)
			{
				iLocal_745 = 1;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Frontend_Beast_Fade_Screen", "FM_Events_Sasquatch_Sounds", false);
			}
			if (__LIB_0__::func_937(&uLocal_746, 1500, 0))
			{
				GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 255, 255, 255, iLocal_739, false);
				if (!iLocal_743)
				{
					iLocal_739 += 30;
				}
				if (iLocal_739 >= 255)
				{
					iLocal_739 = 255;
					iLocal_743 = 1;
					iLocal_745 = 0;
					__LIB_1__::func_751();
					__LIB_3__::func_359(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1120403456);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FM_Event_Beast_Screen_Freeze_Scene"))
					{
						AUDIO::STOP_AUDIO_SCENE("FM_Event_Beast_Screen_Freeze_Scene");
					}
					AUDIO::START_AUDIO_SCENE("FM_Event_Beast_Transform_Sequence_Scene");
					func_1568(6);
				}
			}
			break;
		case 6:
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 255, 255, 255, iLocal_739, false);
			if (__LIB_12__::func_575())
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, 10000, 0);
					}
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), 0, true, true);
					iLocal_741 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.05f, 0.5f, -1.11f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f), 2, false, false, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(iLocal_741, "ANIM@MP_FM_EVENT@INTRO", "BEAST_TRANSFORM_CAM");
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@MP_FM_EVENT@INTRO", "BEAST_TRANSFORM", 1000f, -2f, -1, 0, 0f, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastLaunch"))
					{
						GRAPHICS::ANIMPOSTFX_STOP("BeastLaunch");
					}
					if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastIntroScene"))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("BeastIntroScene", 0, false);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					NETWORK::NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(iLocal_741);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iLocal_741);
					GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					func_1658(59, "RESPAWN_BEAST" /* GXT: YOU ARE THE BEAST */, 0, 1, -1, 2, 1, 0);
					func_1568(7);
					__LIB_0__::func_794(&Global_2725381);
				}
			}
			break;
		case 7:
			GRAPHICS::DRAW_RECT(0.5f, 0.5f, 3f, 3f, 255, 255, 255, iLocal_739, false);
			if (iLocal_743)
			{
				iLocal_739 = (iLocal_739 - 30);
			}
			if (iLocal_739 < 0)
			{
				iLocal_739 = 0;
				iLocal_743 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Frontend_Beast_Text_Hit", "FM_Events_Sasquatch_Sounds", false);
				func_1568(8);
				__LIB_0__::func_794(&uLocal_746);
			}
			break;
		case 8:
			if (__LIB_0__::func_937(&uLocal_746, 5300, 0))
			{
				__LIB_2__::func_66(59);
				if (__LIB_0__::func_937(&uLocal_746, 5800, 0))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
					PAD::ENABLE_ALL_CONTROL_ACTIONS(2 /*FRONTEND_CONTROL*/);
					__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 8388608, 0);
					if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastIntroScene"))
					{
						GRAPHICS::ANIMPOSTFX_STOP("BeastIntroScene");
					}
					if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastTransition"))
					{
						GRAPHICS::ANIMPOSTFX_STOP("BeastTransition");
					}
					if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastLaunch"))
					{
						GRAPHICS::ANIMPOSTFX_STOP("BeastLaunch");
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_741))
					{
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iLocal_741);
						iLocal_741 = -1;
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@MP_FM_EVENT@INTRO", "BEAST_TRANSFORM", 3))
					{
						ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "BEAST_TRANSFORM", "ANIM@MP_FM_EVENT@INTRO", -8f);
						STREAMING::REMOVE_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
					}
					else
					{
						STREAMING::REMOVE_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
					}
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_742))
					{
						AUDIO::STOP_SOUND(iLocal_742);
						iLocal_742 = -1;
					}
					if (__LIB_0__::func_937(&uLocal_746, 6300, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FM_Event_Beast_Transform_Sequence_Scene"))
						{
							AUDIO::STOP_AUDIO_SCENE("FM_Event_Beast_Transform_Sequence_Scene");
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_ALL_CAMS(false);
						STREAMING::REMOVE_ANIM_DICT("move_m@GEneric");
						HUD::THEFEED_SHOW();
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
						__LIB_16__::func_633();
						__LIB_0__::func_671(0);
						__LIB_1__::func_91();
						__LIB_0__::func_794(&uLocal_746);
						__LIB_3__::func_351();
						func_1568(9);
						GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
					}
				}
			}
			break;
		case 9:
			if (BitTest(uLocal_725, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
			{
				if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
				{
					if (CAM::IS_SCREEN_FADED_IN())
					{
						__LIB_1__::func_913();
						__LIB_2__::func_43();
						__LIB_2__::func_135(1);
						__LIB_15__::func_297(1);
						func_1568(10);
					}
				}
			}
			break;
		case 10:
			return 1;
			break;
	}
	return 0;
}

void func_846(bool bParam0, int iParam1, int iParam2, int iParam3)//Position - 0x83FA7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	int iVar6;
	struct<2> Var7;
	if (iParam1 == iParam1 && iParam2 == iParam2)
	{
		iParam1 = iParam1;
		iParam2 = iParam2;
	}
	if (__LIB_2__::func_159(0))
	{
		__LIB_1__::func_746(11441, __LIB_1__::func_360(11429, -1, 0), -1);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_24 = iParam2;
		STATS::END_BEING_GOON(Global_2715699.f_3076.f_132, Global_2715699.f_3076.f_133, iParam2, Global_2815059.f_5195.f_224, __LIB_1__::func_360(11429, -1, 0));
	}
	if (!bParam0)
	{
		if (!__LIB_0__::func_438())
		{
			return;
		}
		iVar1 = __LIB_1__::func_360(11389, -1, 0);
		MISC::CLEAR_BIT(&iVar1, 22);
		__LIB_1__::func_354(11389, iVar1, -1, 1, 0);
		MISC::CLEAR_BIT(&(Global_2815059.f_1801), 17);
		__LIB_11__::func_676();
		STATS::GET_BOSS_GOON_UUID(__LIB_0__::func_5(), &iVar2, &iVar3);
		if (iVar2 != 0 || iVar3 != 0)
		{
			iVar4 = __LIB_1__::func_360(11429, -1, 0);
			Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_25 = iParam1;
			STATS::END_BEING_BOSS(iParam1, iVar4);
			__LIB_1__::func_967(30);
			__LIB_1__::func_354(11442, NETWORK::GET_CLOUD_TIME_AS_INT(), -1, 1, 0);
		}
		__LIB_1__::func_354(11392, -1, -1, 1, 0);
		__LIB_1__::func_354(11429, 0, -1, 1, 0);
		__LIB_11__::func_675();
		__LIB_11__::func_674(0);
		__LIB_11__::func_674(1);
		__LIB_11__::func_674(2);
		__LIB_11__::func_674(3);
		__LIB_11__::func_674(4);
		__LIB_11__::func_674(5);
		__LIB_11__::func_674(6);
		StringCopy(&Var5, "", 64);
		Var5 = { __LIB_11__::func_673() };
		iVar6 = __LIB_1__::func_360(11392, -1, 0);
		Var5 = { __LIB_4__::func_853(0) };
		Var5 = { __LIB_4__::func_853(1) };
		Var5 = { __LIB_4__::func_853(2) };
		Var5 = { __LIB_4__::func_853(3) };
		Var5 = { __LIB_4__::func_853(4) };
		Var5 = { __LIB_4__::func_853(5) };
		Var5 = { __LIB_4__::func_853(6) };
		iVar6 = __LIB_1__::func_360(11429, -1, 0);
		Global_2715699.f_3076.f_132 = 0;
		Global_2715699.f_3076.f_133 = 0;
		if (Global_2715699.f_3076.f_171 != -1)
		{
			Global_2715699.f_3076.f_171 = -1;
		}
		func_858(iParam1, 1);
	}
	Global_2815059.f_5195.f_224 = 0;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(PLAYER::PLAYER_ID(), 0.5f);
	Global_1943916 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_11[iVar0] = __LIB_0__::func_162();
		iVar0++;
	}
	if (__LIB_4__::func_863(PLAYER::PLAYER_ID()) != -1)
	{
		__LIB_11__::func_742(bParam0);
	}
	if (__LIB_11__::func_669(PLAYER::PLAYER_ID()) != -1)
	{
		__LIB_11__::func_741();
	}
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	__LIB_11__::func_798(bParam0);
	__LIB_11__::func_668(0);
	__LIB_11__::func_667();
	__LIB_31__::func_57();
	func_858(iParam1, 0);
	__LIB_11__::func_666();
	__LIB_11__::func_665();
	__LIB_11__::func_664(__LIB_3__::func_384(1, 1));
	__LIB_11__::func_663(__LIB_3__::func_384(1, 1), 0);
	__LIB_11__::func_662(5);
	Global_2815059.f_5195.f_221 = { Var7 };
	if ((__LIB_0__::func_1("FM_BOSSINTROH" /* GXT: You are registered as a VIP. Select SecuroServ VIP in the Interaction Menu to hire Bodyguards and access other VIP benefits. */) || __LIB_0__::func_1("FMBOSSINTROHC" /* GXT: You are registered as a CEO. Select SecuroServ CEO in the Interaction Menu to hire Associates and access other CEO benefits. */)) || __LIB_0__::func_1("FM_GB_INTRO_MC" /* GXT: You are registered as a Motorcycle Club President. Select Motorcycle Club President in the Interaction Menu to recruit Club Members and access other Club benefits. */))
	{
		HUD::CLEAR_HELP(true);
	}
	if (Global_2815059.f_5195.f_259 != __LIB_0__::func_162())
	{
		Global_2815059.f_5195.f_259 = __LIB_0__::func_162();
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_428 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_428 = -1;
	}
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_429 != -1)
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_429 = -1;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Goon", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Player_Goon"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Player_Goon");
		}
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Boss", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Player_Boss"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Player_Boss");
		}
	}
	Global_1888306 = { Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105 };
	StringCopy(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_105), "", 64);
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 != __LIB_0__::func_162())
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10 = __LIB_0__::func_162();
	}
	if (iParam3 && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_26 != __LIB_0__::func_162())
	{
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_26 = __LIB_0__::func_162();
	}
}

void func_858(int iParam0, bool bParam1)//Position - 0x8459F
{
	bool bVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_35__::func_789(iParam0, bParam1))
		{
			bVar0 = false;
			if (__LIB_5__::func_723())
			{
				bVar0 = true;
			}
			func_505(0);
			if (bVar0)
			{
				iVar1 = __LIB_1__::func_360(2042, -1, 0);
				PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 5, __LIB_0__::func_533(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_242(PLAYER::PLAYER_PED_ID(), iVar1), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar1));
				func_287(1);
			}
		}
		if ((iParam0 == 2 || iParam0 == 1) || bParam1)
		{
			Global_2824753 = 0;
			Global_2824753.f_1 = 0;
			Global_2824753.f_24 = 0;
			iVar3 = 0;
			while (iVar3 < 8)
			{
				Global_2824753.f_2[iVar3] = 0;
				Global_2824753.f_15[iVar3] = 0;
				Global_2824753.f_27[iVar3 /*13*/] = { Var2 };
				iVar3++;
			}
			Global_2824753.f_12 = 0;
			Global_2813819 = 0;
			Global_2813820 = 0;
		}
		else if (__LIB_2__::func_159(0))
		{
			if (__LIB_0__::func_983() || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				Global_2824753 = __LIB_4__::func_971();
			}
		}
		__LIB_15__::func_366(0);
		__LIB_11__::func_844(0);
		__LIB_11__::func_843(0);
		__LIB_11__::func_671(0);
		if (__LIB_12__::func_312(joaat("GADGET_PARACHUTE"), -1))
		{
			__LIB_3__::func_340(PLAYER::PLAYER_ID(), __LIB_1__::func_360(586, -1, 0), 0);
		}
	}
	else
	{
		__LIB_11__::func_670(13);
	}
}

int func_880(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x855FC
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_189();
	if (__LIB_3__::func_144(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_628() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_853(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!__LIB_3__::func_262())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_1293(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						__LIB_41__::func_942(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_42__::func_38(&iVar2);
					}
					if (__LIB_3__::func_262())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_2__::func_930();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_1265(iVar2);
							__LIB_3__::func_308(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					__LIB_3__::func_308(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_1261())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_953(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_944(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				__LIB_43__::func_399(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_793(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_3__::func_276(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_6__::func_444();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_6__::func_444();
			}
			else if (__LIB_3__::func_399(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_3__::func_167())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				__LIB_6__::func_444();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					__LIB_3__::func_274(iParam9, 0, 0);
				}
			}
			__LIB_3__::func_221(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_2__::func_930();
			}
			if (!(__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_899(0, 0);
			}
			__LIB_3__::func_138(0, 0);
			if (bParam10)
			{
				__LIB_2__::func_610();
			}
			__LIB_1__::func_21();
			__LIB_7__::func_678();
			if (bParam13)
			{
				__LIB_0__::func_854();
			}
			__LIB_0__::func_858();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_42__::func_38(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_899(int iParam0, bool bParam1)//Position - 0x86747
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_899(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_944(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x884A4
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_623(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.f_0 = (Var2.f_0 + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var2, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (__LIB_2__::func_918(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_945(0);
			}
		}
	}
}

void func_945(bool bParam0)//Position - 0x885AE
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_360(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_3__::func_310(__LIB_2__::func_82(), 14, iVar1, -1) };
			__LIB_2__::func_620(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_69(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_69(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_953(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x887F4
{
	int* iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_2__::func_154(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_640();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	Global_2667225.f_45.f_176 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4718592 == 0 && !Global_1574964)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1)
		{
			if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8))
			{
				bVar4 = true;
				if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_1255() && !bVar3)
	{
		if (func_1254())
		{
			if (func_1248(&bVar2))
			{
				if (__LIB_3__::func_173(bVar2))
				{
					if (!bVar4)
					{
						func_944(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_2__::func_641() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_2__::func_640(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false));
						iVar5 = __LIB_2__::func_639(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_2__::func_641(), false))
						{
							iVar5 = __LIB_2__::func_641();
						}
						func_944(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(bVar2), false), false))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_45.f_68)
	{
		if (__LIB_3__::func_379(iVar0))
		{
			if ((__LIB_3__::func_262() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_3__::func_262())
			{
				if (!__LIB_35__::func_860(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1265(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_42__::func_38(&iVar0);
	}
	if (func_1261())
	{
		__LIB_42__::func_38(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_1218(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_1218(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_959(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_1218(__LIB_2__::func_638());
				return 1;
			}
		}
		else if (__LIB_0__::func_957(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2667225.f_45.f_177)
			{
				VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(iVar1), true);
			}
			if (Global_2667225.f_45.f_178)
			{
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(iVar1), false);
			}
			if (Global_2667225.f_45.f_179)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2667225.f_45.f_180)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iVar1), "MPBitset"))
					{
						iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset");
					}
					MISC::SET_BIT(&iVar6, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2667225.f_45.f_183 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
			}
			if (Global_2667225.f_45.f_181)
			{
				__LIB_2__::func_626(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_2__::func_625(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_1218(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_959(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x89113
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<31> Var7;
	struct<31> Var8;
	struct<31> Var9;
	bool bVar10;
	int iVar11;
	if (!__LIB_1__::func_599(8))
	{
		__LIB_1__::func_891(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_653(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_599(16))
		{
			__LIB_1__::func_653(16);
		}
	}
	__LIB_1__::func_653(31);
	if (!__LIB_2__::func_734())
	{
		if (!__LIB_1__::func_599(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_2__::func_733(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_863())
					{
						if (!__LIB_2__::func_923())
						{
							__LIB_7__::func_73(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_814(iVar1) || !__LIB_0__::func_371(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_9__::func_527(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_799(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_1__::func_24())
								{
									iVar3 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2667225.f_26.f_3) < 15000)
								{
									Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2715699.f_2846.f_148)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (__LIB_1__::func_948(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar5 = false;
								}
								if (Global_2715699.f_2846.f_148)
								{
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										MISC::CLEAR_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_30 = 1;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
										iVar2++;
									}
									if (func_1084(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_1084(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_3__::func_225(&Param0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8.f_30 = 1;
										Var8.f_0 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_1084(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_30 = 1;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_1084(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_0__::func_957(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									func_1018(&iVar0, iParam3);
									if ((__LIB_1__::func_629() || __LIB_2__::func_632()) || __LIB_2__::func_631())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_7__::func_652(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_653(34);
									}
									else
									{
										__LIB_1__::func_600(34);
									}
									if (iParam3 >= 0 && iParam3 < 363)
									{
										MISC::SET_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 0);
										iVar11 = 0;
										while (iVar11 < 363)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 11))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 11);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 0))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 0);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 6))
												{
													__LIB_30__::func_988(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_3__::func_578(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
									{
										if (BitTest(Global_2715699.f_5986, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, true);
										}
									}
									__LIB_3__::func_578(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_3__::func_224(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_653(0);
									__LIB_1__::func_653(44);
									__LIB_1__::func_600(10);
									__LIB_1__::func_600(1);
									__LIB_1__::func_600(2);
									__LIB_1__::func_600(9);
									__LIB_1__::func_600(12);
									__LIB_1__::func_600(31);
									__LIB_1__::func_600(32);
									__LIB_1__::func_600(33);
									__LIB_1__::func_600(35);
									__LIB_1__::func_600(37);
									__LIB_1__::func_600(38);
									__LIB_2__::func_627();
									Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_120 = 0;
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

void func_1018(int iParam0, int iParam1)//Position - 0x95D53
{
	func_1023(*iParam0, &(Global_1585857[iParam1 /*142*/]), 1, 1, 0);
	__LIB_3__::func_3(iParam0, iParam1);
}

void func_1023(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x95F81
{
	int iVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (PLAYER::PLAYER_ID() != __LIB_0__::func_162())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_1055(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::SET_DRIFT_TYRES(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::SET_DRIFT_TYRES(iParam0, true);
				}
			}
			if (__LIB_0__::func_811(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, false, true);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(iParam0, uParam1->f_79);
			}
			if (__LIB_0__::func_810(uParam1->f_66, &fVar1) && uParam1->f_80 != fVar1)
			{
				uParam1->f_80 = fVar1;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(iParam0, uParam1->f_99);
			}
			if (__LIB_0__::func_809(iParam0))
			{
				__LIB_1__::func_525(iParam0, __LIB_1__::func_562(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::SET_VEHICLE_LIVERY2(iParam0, uParam1->f_98);
			}
			if (BitTest(uParam1->f_95, 0))
			{
				__LIB_40__::func_728(iParam0, &(uParam1->f_81));
			}
			if ((!__LIB_2__::func_969(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				__LIB_6__::func_446(iParam0);
			}
			if (__LIB_0__::func_801(iVar0))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (__LIB_1__::func_522(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, (Global_262145.f_21791 /* Tunable: -1001087518 */ + 0.05f));
						}
						else
						{
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, Global_262145.f_21791 /* Tunable: -1001087518 */);
						}
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(iParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(iParam0, true);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				case 1:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (BitTest(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				case 2:
					if (BitTest(uParam1->f_95, 1) && BitTest(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (__LIB_0__::func_800(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				case 3:
					break;
				case 4:
					break;
				}
		}
	}
}

void func_1055(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x9CCEC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!__LIB_30__::func_970(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (BitTest(uParam1->f_77, __LIB_0__::func_110(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			iVar5 = 1;
			while (iVar5 <= 2)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar5)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), __LIB_0__::func_110(iVar5));
				}
				iVar5++;
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(iParam0, true);
			}
		}
		if (BitTest(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (BitTest(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (__LIB_0__::func_524(uParam1->f_5) || __LIB_0__::func_524(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
			}
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((BitTest(uParam1->f_77, 15) || __LIB_0__::func_318(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && __LIB_0__::func_291())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !__LIB_0__::func_111(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (BitTest(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::SET_DRIFT_TYRES(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::SET_VEHICLE_NEON_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 2, BitTest(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 3, BitTest(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 0, BitTest(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(iParam0, 1, BitTest(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, BitTest(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						__LIB_0__::func_317(iParam0, uParam1->f_69);
					}
				}
				else
				{
					__LIB_0__::func_317(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			__LIB_0__::func_372(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar6 = 0;
			while (iVar6 <= 11)
			{
				if (BitTest(uParam1->f_77, __LIB_0__::func_110(iVar6 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar6 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar6 + 1, true);
				}
				iVar6++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((func_1056() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66)) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger")))
		{
			if (!BitTest(uParam1->f_77, 23))
			{
				if (BitTest(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (BitTest(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_1056()//Position - 0x9D395
{
	if ((((Global_4718592.f_107227 == 6 || Global_4718592.f_107227 == 7) || Global_4718592.f_107227 == 18) || Global_4718592.f_107227 == 19) && Global_4718592.f_2 == 20)
	{
		return 0;
	}
	if (__LIB_0__::func_523(7))
	{
		if (__LIB_3__::func_358(Global_2703735.f_4.f_16) || __LIB_1__::func_830(Global_2703735.f_4.f_16))
		{
			return 0;
		}
	}
	return 1;
}

int func_1084(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9E3EA
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_1180(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_7__::func_606(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_8__::func_60(Param0, iParam2);
		}
		if (__LIB_8__::func_59(Param0))
		{
			__LIB_8__::func_60(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_41__::func_947(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_3__::func_391(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_1097(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_6__::func_433(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_1092(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_3__::func_295(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_35__::func_878(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_1092(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_1092(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_1097(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_1092(struct<3> Param0, int iParam1)//Position - 0x9F073
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_1092(Var0, iParam1 + 1);
	}
}

void func_1097(var uParam0, var uParam1, var uParam2)//Position - 0x9F287
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_1138(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_1098(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_1098(var uParam0, var uParam1, var uParam2)//Position - 0x9F2F6
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_1134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_3__::func_296(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_6__::func_445(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_1134(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_41__::func_947(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_41__::func_947(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_35__::func_878(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_43__::func_392(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_1106(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_1104(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_1134(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_6__::func_448(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_1104(int iParam0, var uParam1)//Position - 0xA0056
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_1104(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_1104(iParam0 + 1, uParam1);
	}
}

void func_1106(struct<3> Param0, float fParam1, int iParam2)//Position - 0xA00FC
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_1106(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_1134(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0xA1818
{
	int iVar0;
	bool bVar1;
	if (func_1180(Param0))
	{
		if (func_1137(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_1137(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA1A62
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_1137(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1138(var uParam0, var uParam1, var uParam2)//Position - 0xA1B3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_1134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_6__::func_445(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_1134(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_41__::func_947(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_41__::func_947(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_35__::func_878(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_43__::func_392(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_1106(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_1104(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_1180(struct<3> Param0)//Position - 0xAAE05
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_3__::func_292(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_1137(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_1137(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_1137(&Var1, 0, 0, 0, 1))
					{
						if (!func_1137(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_1218(int iParam0)//Position - 0xAF24E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_1265(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		func_1235(iParam0, 1);
	}
	else
	{
		__LIB_8__::func_61(iParam0, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

void func_1235(int iParam0, bool bParam1)//Position - 0xAFCCC
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		func_1023(iParam0, &(Global_2667225.f_45.f_69), bParam1, 1, 0);
	}
}

int func_1248(var uParam0)//Position - 0xB027F
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_2__::func_644())
		{
			iVar2 = __LIB_2__::func_642(__LIB_2__::func_643());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar5 = __LIB_2__::func_642(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						bVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_3__::func_144(bVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(bVar7)))
						{
							*uParam0 = bVar7;
							bVar4 = true;
						}
						else
						{
							iVar0++;
						}
						if (bVar4)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						Jump @555; //curOff = 335
						if (!__LIB_1__::func_837())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_1__::func_693(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_1249(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						return 0;
					}
int func_1249(bool bParam0)//Position - 0xB04AE
{
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
	}
	if (!Global_2667225.f_2664 == -1)
	{
		if (BitTest(Global_2667225.f_2665, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1254()//Position - 0xB0527
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_1248(&bVar0))
		{
			if (func_1249(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_2__::func_644())
	{
		return 1;
	}
	return 0;
}

int func_1255()//Position - 0xB056C
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_1248(&uVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_1261()//Position - 0xB06E1
{
	bool bVar0;
	var uVar1;
	if (__LIB_3__::func_262())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_1255())
		{
			if (func_1254())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_870())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_463() /*142*/].f_66;
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (Global_2667225.f_45.f_68)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_2669))
				{
					if (Global_2667225.f_45.f_67 == ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669) || Global_2667225.f_45.f_67 == 0)
					{
						if (__LIB_2__::func_154(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_8__::func_61(Global_2667225.f_2669, __LIB_1__::func_696(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_2__::func_648();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_2__::func_647();
			}
		}
		else if (!__LIB_2__::func_870())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_663())
				{
					__LIB_2__::func_648();
				}
			}
			else
			{
				Global_2667225.f_45.f_69.f_66 = Global_2667225.f_45.f_67;
			}
		}
		if (!Global_2667225.f_45.f_69.f_66 == 0)
		{
			STREAMING::REQUEST_MODEL(Global_2667225.f_45.f_69.f_66);
			if (STREAMING::HAS_MODEL_LOADED(Global_2667225.f_45.f_69.f_66))
			{
				return 1;
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
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_1265(int iParam0)//Position - 0xB09BB
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_2__::func_917(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_2__::func_659(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
		{
			if (iVar1 == joaat("trophytruck") || iVar1 == joaat("trophytruck2"))
			{
				fVar2 = 2f;
				fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
				if (fVar3 > fVar2)
				{
					fVar3 = fVar2;
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fVar3);
				}
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
			if (__LIB_3__::func_252(PLAYER::PLAYER_ID()))
			{
				__LIB_30__::func_982(iParam0);
			}
		}
		__LIB_3__::func_208(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_944(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_2__::func_654(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_1__::func_141());
			if (iVar1 == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, true);
			}
			if (iVar1 == joaat("blazer5"))
			{
				if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iParam0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
					{
						VEHICLE::SET_WHEELS_RETRACTED_INSTANTLY(iParam0);
						Global_2667225.f_2890 = 1;
					}
					else
					{
						VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iParam0);
						Global_2667225.f_2891 = 1;
					}
				}
			}
			if (Global_2667225.f_2892)
			{
				if (iVar1 == joaat("deluxo"))
				{
					__LIB_2__::func_653(iParam0, 1);
					__LIB_2__::func_652(iParam0, 1);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
					Global_2667225.f_2892 = 0;
				}
				else if (iVar1 == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iParam0))
				{
					VEHICLE::TRANSFORM_TO_SUBMARINE(iParam0, true);
					Global_2667225.f_2892 = 0;
				}
			}
			if (__LIB_2__::func_651(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (Global_2667225.f_2894)
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					Global_2667225.f_2895 = 1;
					Global_2667225.f_2896 = MISC::GET_FRAME_COUNT();
					VEHICLE::SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(iParam0, true);
				}
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
			}
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (BitTest(Global_4718592.f_26, 25))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						__LIB_2__::func_650(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_2__::func_608(PLAYER::PLAYER_ID()) == 189)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar4 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar4, 11);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
			}
		}
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_2__::func_649() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2667225.f_2692 = { Var5 };
}

int func_1293(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xB18F7
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_855(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
	{
		Global_2667225.f_680 = MISC::GET_FRAME_COUNT();
		return 0;
	}
	if (bParam10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bParam10 = false;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_612)
	{
		if (!Global_2667225.f_606 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_606 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_609) > 30000)
	{
		Global_2667225.f_606 = 0;
	}
	if (Global_2667225.f_606 == 0)
	{
		Global_2667225.f_607 = 0;
		Global_2667225.f_608 = 0;
		Global_2667225.f_659 = 0;
		Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_612 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_606 = 1;
		Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_2697 = uParam5;
		Global_2667225.f_2735 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			__LIB_0__::func_854();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_1302(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_6__::func_434(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_610 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_606 = 2;
				}
			}
			break;
		case 2:
			if (Global_2667225.f_657)
			{
				if (Global_2667225.f_661 == Global_2667225.f_660)
				{
					if (Global_2667225.f_658 && !Global_2667225.f_659 == -1)
					{
						if (((Global_2667225.f_518 && !__LIB_3__::func_254()) && __LIB_3__::func_253(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_1092(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_2__::func_662(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_2__::func_765(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							else
							{
								if (bParam3)
								{
									fVar3 = 2f;
								}
								else
								{
									fVar3 = 0.3f;
								}
								bVar1 = __LIB_2__::func_873(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							if (bVar1)
							{
								Global_2667225.f_606 = 3;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_1294(&(Global_2667225.f_623));
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_659 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) < 0)
			{
				if (Global_2667225.f_608 < 3)
				{
					Global_2667225.f_608++;
					Global_2667225.f_606 = 1;
				}
				else
				{
					Global_2667225.f_606 = 4;
				}
			}
			break;
		case 3:
			if (bParam10)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								bVar0 = true;
							}
							else
							{
								func_1092(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_2__::func_662(-1);
							}
						}
					}
					else
					{
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					__LIB_2__::func_662(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_1302(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				Global_2667225.f_606 = 5;
				Global_2667225.f_659 = 0;
			}
			break;
		case 5:
			bVar0 = true;
			break;
	}
	Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2667225.f_489 == 8)
		{
			Global_2667225.f_714.f_503 = Global_2667225.f_714.f_502;
		}
		if (Global_2667225.f_659 == -1)
		{
			Global_2667225.f_659 = 0;
		}
		*uParam0 = { Global_2667225.f_623[Global_2667225.f_659 /*3*/] };
		*uParam1 = Global_2667225.f_623.f_16[Global_2667225.f_659];
		if (Global_2667225.f_45.f_52)
		{
			if (Global_2667225.f_489 == 3 && SYSTEM::VMAG(Global_2667225.f_45.f_49) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var2 = { Global_2667225.f_45.f_49 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
					if (Global_2667225.f_45.f_53)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2667225.f_2673 = 1;
				}
			}
		}
		Global_2667225.f_2735 = 0;
		Global_2667225.f_606 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			if (!__LIB_3__::func_139(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_854();
			}
		}
		return 1;
	}
	return 0;
}

void func_1294(var uParam0)//Position - 0xB1E7F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_1092(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_1302(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0xB22AB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<34> Var18;
	struct<13> Var19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25[4];
	var uVar26[4];
	int iVar27[4];
	var uVar28[4];
	float fVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	var uVar43;
	struct<4> Var44;
	struct<4> Var45;
	int iVar46;
	int iVar47;
	struct<61> Var48;
	int iVar49;
	bVar2 = false;
	Var18 = 5;
	Var18.f_16 = 5;
	Var18.f_22 = 5;
	Var18.f_28 = 5;
	Var19 = 5;
	Var19.f_6 = 5;
	Var19.f_12 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_1__::func_693(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_592) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_591)
	{
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
	}
	if (iParam1 == 13 || Global_2667225.f_489 == 13)
	{
		if (!Global_2667225.f_2478)
		{
			if (Global_2667225.f_2477 == 0)
			{
				if (__LIB_35__::func_860(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_6__::func_437(Global_2676213);
					Global_2667225.f_2479 = 0;
					Global_2667225.f_2476 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2477 = 1;
				}
				else
				{
					Global_2667225.f_2479 = 1;
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
			}
			if (Global_2667225.f_2477 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2476) > 4000 || Global_2667225.f_2479 == 0)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_587 == 0)
	{
		__LIB_2__::func_941();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_3__::func_406();
		Global_2667225.f_555.f_16 = Global_2667225.f_45.f_312;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_555.f_25 = 0;
		Global_2667225.f_588 = 0;
		Global_2667225.f_520.f_13[1 /*3*/] = { Global_2667225.f_45.f_313 };
		Global_2667225.f_520.f_20[1] = Global_2667225.f_45.f_316;
		Global_2667225.f_555.f_4 = 125f;
		Global_2667225.f_2673 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_590 = 0;
		if (!Global_2667225.f_45.f_52)
		{
			Global_2667225.f_45.f_49 = { 0f, 0f, 0f };
		}
		Global_2667225.f_489 = iParam1;
		if (Global_2667225.f_489 == 0 || __LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_1539();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_3__::func_292(PLAYER::PLAYER_ID(), 1))
		{
			Global_2667225.f_555.f_17 = 1;
		}
		else
		{
			Global_2667225.f_555.f_17 = 0;
		}
		Global_2667225.f_518 = 0;
		Global_2667225.f_2674 = 0;
		Global_2667225.f_555.f_27 = 0f;
		Global_2667225.f_2898 = 0f;
		if (Global_2667225.f_489 == 10)
		{
			iVar20 = __LIB_3__::func_380(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_867(iVar20))
				{
					Global_2667225.f_2855 = iVar20;
					Global_2667225.f_489 = 29;
				}
			}
		}
		if (Global_2667225.f_489 == 10)
		{
		}
		if (Global_2667225.f_489 == 10)
		{
			if (__LIB_2__::func_698())
			{
				__LIB_1__::func_633();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_697(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_697(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_697(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_697(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_697(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_697(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_697(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_697(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_697(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_697(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_697(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_697(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_697(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_697(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_697(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_697(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_697(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_697(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_697(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_697(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_697(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_697(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_697(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_697(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_697(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_697(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_697(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_697(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_697(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_697(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_697(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_697(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_697(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_697(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_697(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_697(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_697(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_697(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_697(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_697(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_697(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_697(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_697(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_697(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_697(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_697(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_697(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_697(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_697(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_697(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_44__::func_93(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_44__::func_92(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_43__::func_867(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1528(bParam2) };
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (iVar0 == 0)
					{
						if (Var19[iVar0] > -1)
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
							Global_2667225.f_714.f_502 = Var19[0];
							bVar2 = true;
							iParam4 = 1;
							Var18.f_28[iVar0] = Var19.f_12[iVar0];
						}
						else
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[0 /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[0 /*5*/].f_3;
							Global_2667225.f_520.f_6 = 1;
							Global_2667225.f_555.f_4 = 150f;
						}
					}
					else if (Var19[iVar0] > -1)
					{
						Var18[iVar0 /*3*/] = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
						Var18.f_16[iVar0] = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
						Var18.f_28[iVar0] = Var19.f_12[iVar0];
					}
					iVar0++;
				}
				if (bVar39)
				{
					__LIB_2__::func_892();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_43__::func_867(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_2__::func_938();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_891(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
				Global_2667225.f_512.f_2 = Var17.f_2;
				if (Global_2667225.f_512.f_2 > 70f)
				{
					Global_2667225.f_512.f_2 = 70f;
				}
				if (Global_2667225.f_512.f_2 < 0f)
				{
					Global_2667225.f_512.f_2 = 0f;
				}
				Var17 = { Global_2667225.f_512 };
				if (Var17.f_2 < 0f)
				{
					Var17.f_2 = 0f;
				}
				Var17.f_2 = (Var17.f_2 + 5f);
				Global_2667225.f_520.f_23 = { 0f, 10000000f, Var17.f_2 };
				Global_2667225.f_520.f_26 = { 0f, -10000000f, 99999.9f };
				Global_2667225.f_520.f_29 = 1E+09f;
				if (__LIB_3__::func_395(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 30f;
				}
				Global_2667225.f_555 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 0f;
				Global_2667225.f_555.f_7 = 2;
				Global_2667225.f_555.f_8 = { Global_1574465 };
				Global_2667225.f_555.f_11 = { Global_1574468 };
				Global_2667225.f_555.f_14 = Global_1574471;
				Global_2667225.f_555.f_28 = 0;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				break;
			case 1:
				Var17 = { Global_2667225.f_512 };
				iVar38 = __LIB_1__::func_557(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_2__::func_693(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
					}
				}
				if (Global_2715699.f_6597)
				{
					Var17 = { Global_2715699.f_6598 };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				if (Global_1888188 > -1)
				{
					if (__LIB_1__::func_693(Global_1888188, 0, 1))
					{
						if (__LIB_42__::func_30(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1888188) };
							if (!__LIB_3__::func_292(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
								{
									Global_2667225.f_520.f_20[0] = 250f;
								}
								else
								{
									Global_2667225.f_520.f_20[0] = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 75f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_3__::func_395(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				fVar12 = (Global_2667225.f_520.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (__LIB_3__::func_395(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2667225.f_555.f_4 = (135f + fVar12);
				}
				Global_2667225.f_555.f_4 = ((95f + Global_2667225.f_596) + fVar12);
				if (Global_2667225.f_555.f_4 > 250f)
				{
					Global_2667225.f_555.f_4 = 250f;
				}
				Global_2667225.f_593 = { Global_2667225.f_512 };
				fVar12 = (Global_2667225.f_555.f_4 * 0.5f);
				if (fVar12 < Global_2667225.f_520.f_5)
				{
					fVar12 = Global_2667225.f_520.f_5;
				}
				Var13 = { __LIB_43__::func_398(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1517(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_2__::func_691(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_3__::func_262() || iVar40)
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else
				{
					Var14 = { Global_2667225.f_512 };
				}
				Global_2667225.f_593 = { Var14 };
				Global_2667225.f_596 = 125f;
				if (func_1517(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::func_162())
					{
						if (__LIB_1__::func_693(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_1__::func_694(Global_1836068.f_14) };
							if (__LIB_3__::func_262())
							{
								Global_2667225.f_520.f_20[0] = 250f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var14 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_555.f_4 = 250f;
				if (Global_2667225.f_520.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2667225.f_512)))
					{
						Global_2667225.f_520.f_3 = 0;
					}
				}
				if (__LIB_3__::func_262())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_3__::func_183() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_890(__LIB_1__::func_694(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_890(Global_2667225.f_512);
				}
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_3__::func_395(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				Global_2667225.f_593 = { Global_2667225.f_555.f_18 };
				Var21 = { Global_2667225.f_555.f_18 };
				switch (Global_2667225.f_45[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						break;
					case 1:
						fVar29 = SYSTEM::VMAG(Global_2667225.f_45[iVar9 /*12*/] - Global_2667225.f_45[iVar9 /*12*/].f_3);
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
					case 2:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
				}
				if (!__LIB_1__::func_528(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_3__::func_182(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
				}
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				fVar12 = 1f;
				if (Global_2667225.f_520.f_5 < 200f)
				{
					fVar12 = 1.5f;
				}
				else if (Global_2667225.f_520.f_5 < 300f)
				{
					fVar12 = (1f + (((300f - Global_2667225.f_520.f_5) / 100f) * 0.5f));
				}
				fVar35 = (Global_2667225.f_520.f_5 * fVar12);
				iVar30 = __LIB_43__::func_392(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_43__::func_866(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_43__::func_866(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_43__::func_397(Var21, fVar35) };
						Var23 = { __LIB_43__::func_396(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_817(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_1__::func_528(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_3__::func_182(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_43__::func_392(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_158(Var14, Var23) < 0f)
							{
								iVar27[iVar0] = 1;
							}
							else
							{
								iVar27[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar26[iVar0] == 0 && iVar27[iVar0] == 0) && !bVar31)
							{
								Var21 = { Var25[iVar0 /*3*/] };
								bVar31 = true;
							}
							iVar0++;
						}
						if (!bVar31)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] == 0 && !bVar31)
								{
									Var21 = { Var25[iVar0 /*3*/] };
									bVar31 = true;
								}
								iVar0++;
							}
						}
						if (!bVar31)
						{
							iVar32 = 999;
							iVar33 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] < iVar32)
								{
									iVar33 = iVar0;
									fVar34 = uVar28[iVar0];
									iVar32 = uVar26[iVar0];
								}
								else if (uVar26[iVar0] == iVar32)
								{
									if (uVar28[iVar0] > fVar34)
									{
										fVar34 = uVar28[iVar0];
										iVar33 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar33 == -1 && iVar32 < iVar30)
							{
								Var21 = { Var25[iVar33 /*3*/] };
								bVar31 = true;
							}
						}
						if (!bVar31)
						{
						}
						else
						{
							Global_2667225.f_596 = 0f;
						}
					}
				}
				Global_2667225.f_555.f_18 = { Var21 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_2__::func_687());
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_1137(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1452(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_2__::func_686(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_2__::func_690(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672120[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1452(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 17:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (!iVar16 > 0)
				{
				}
				iVar15 = iVar16;
				Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
				Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2678 = 1;
				}
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 18:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (iVar16 <= 0)
				{
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						__LIB_3__::func_394(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 34:
				if (__LIB_7__::func_671())
				{
					iVar20 = __LIB_1__::func_780(__LIB_0__::func_797());
					if (iVar20 <= 0)
					{
					}
					__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_1452(__LIB_0__::func_797()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_2__::func_745();
				if (iVar20 <= 0)
				{
				}
				__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_259(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_179(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
				Global_2667225.f_555.f_4 = 150f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 12f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_520.f_5 = 5f;
				Global_2667225.f_555.f_22 = 0;
				Global_2667225.f_515 = 0;
				break;
			case 28:
				iVar20 = __LIB_2__::func_745();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_283(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2679 = 1;
				Global_2667225.f_2676 = 1;
				break;
			case 19:
				iVar16 = __LIB_3__::func_232();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1303;
				}
				if (iVar16 > 128)
				{
					iVar16 = 0;
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 35:
				iVar16 = __LIB_2__::func_771(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var44, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 36:
				iVar16 = __LIB_2__::func_771(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_3__::func_210(iVar15, 912, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 48:
			case 49:
			case 50:
			case 54:
			case 55:
			case 56:
			case 59:
				switch (__LIB_1__::func_670())
				{
					case 5:
						if (Global_2667225.f_489 == 39)
						{
							Global_2667225.f_555 = { 959.4153f, -3005.433f, -40.6349f };
							Global_2667225.f_555.f_3 = 288.1089f;
						}
						else if (Global_2667225.f_489 == 40)
						{
							Global_2667225.f_555 = { 905.5001f, -3200.1077f, -98.1879f };
							Global_2667225.f_555.f_3 = 190.2091f;
						}
						else if (Global_2667225.f_489 == 41)
						{
							Global_2667225.f_555 = { -1235.6235f, -2984.2317f, -42.2601f };
							Global_2667225.f_555.f_3 = 189.5472f;
						}
						else if (Global_2667225.f_489 == 42)
						{
							Global_2667225.f_555 = { 368.9986f, 4822.7114f, -59.9797f };
							Global_2667225.f_555.f_3 = 313.7473f;
						}
						else if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1614.179f, -3019.259f, -75.18f };
							Global_2667225.f_555.f_3 = 135f;
						}
						else if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 208.8848f, 5164.2656f, -89.1985f };
							Global_2667225.f_555.f_3 = 97.78f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 970.7293f, 78.29094f, 115.1642f };
							Global_2667225.f_555.f_3 = 236.0848f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.0068f, -368.7443f, -56.3809f };
							Global_2667225.f_555.f_3 = 267.6547f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.369f, 384.953f, -53.8531f };
							Global_2667225.f_555.f_3 = 0f;
							Global_2815059.f_933 = 1;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1360.148f, 144.8f, -95.7f };
							Global_2667225.f_555.f_3 = 90f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							switch (__LIB_0__::func_813(PLAYER::PLAYER_ID()))
							{
								case 1:
									Global_2667225.f_555 = { 387.949f, -69.676f, 112f };
									Global_2667225.f_555.f_3 = 26.279999f;
									break;
								case 2:
									Global_2667225.f_555 = { -1011.61f, -431.12f, 72.4981f };
									Global_2667225.f_555.f_3 = 73.229996f;
									break;
								case 3:
									Global_2667225.f_555 = { -595.463f, -709.173f, 121.642f };
									Global_2667225.f_555.f_3 = 226.13f;
									break;
								case 4:
									Global_2667225.f_555 = { -996.574f, -753.597f, 70.5312f };
									Global_2667225.f_555.f_3 = 136.28f;
									break;
								}
						}
						break;
					case 6:
						if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1609.1658f, -3016.9788f, -80.0061f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 45)
						{
							Global_2667225.f_555 = { 1105.1066f, 213.3884f, -50.4406f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 978.4244f, 57.9174f, 115.164f };
							Global_2667225.f_555.f_3 = 55f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.8425f, -377.4552f, -48.4f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 49)
						{
							Global_2667225.f_555 = { 1542.7819f, 246.4772f, -50.006f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.4023f, 382.5171f, -54.2844f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1356.4492f, 160.3916f, -100.1943f };
							Global_2667225.f_555.f_3 = 184.3954f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							Global_2667225.f_555 = { 386.225f, -68.459f, 111.39f };
							Global_2667225.f_555.f_3 = -115.2f;
						}
						break;
					case 7:
						if (Global_2667225.f_489 == 43)
						{
						}
						else if (Global_2667225.f_489 == 45)
						{
						}
						else if (Global_2667225.f_489 == 48)
						{
						}
						else if (Global_2667225.f_489 == 49)
						{
						}
						else if (Global_2667225.f_489 == 50)
						{
						}
						else if (Global_2667225.f_489 == 55)
						{
						}
						else if (Global_2667225.f_489 == 56)
						{
						}
						else if (Global_2667225.f_489 == 59)
						{
						}
						break;
					case 4:
						if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 202.819f, 5162.1733f, -88.8851f };
							Global_2667225.f_555.f_3 = 90f;
						}
						break;
					default:
						if (Global_2667225.f_489 == 39)
						{
							iVar46 = __LIB_1__::func_669(__LIB_2__::func_744(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_656(__LIB_1__::func_721(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_654(__LIB_1__::func_380(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_651(__LIB_1__::func_817(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_639(__LIB_1__::func_642(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_162())
								{
									iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_630(__LIB_1__::func_631(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_626(__LIB_1__::func_627(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 49)
						{
							iVar46 = 146;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2815059.f_933 = 1;
							iVar46 = 147;
						}
						else if (Global_2667225.f_489 == 54)
						{
							iVar46 = 154;
						}
						else if (Global_2667225.f_489 == 55)
						{
							iVar46 = __LIB_1__::func_604(__LIB_1__::func_605(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_578(__LIB_0__::func_813(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_3__::func_405(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
						}
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2680 = 1;
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 28);
				}
				Global_2667225.f_2676 = 1;
				break;
			case 4:
				if (!NETWORK::NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(0, &(Global_2667225.f_555)))
				{
					Global_2667225.f_555 = { __LIB_3__::func_177() };
					Global_2667225.f_555 = { __LIB_2__::func_878(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					bVar37 = __LIB_3__::func_258(PLAYER::PLAYER_ID(), 1);
					if (!bVar37 == __LIB_0__::func_162())
					{
						Global_2667225.f_555 = { func_1452(bVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1452(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1452(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 33:
				if (__LIB_1__::func_744(PLAYER::PLAYER_ID()))
				{
					bVar37 = __LIB_3__::func_258(PLAYER::PLAYER_ID(), 1);
					if (!bVar37 == __LIB_0__::func_162())
					{
						Global_2667225.f_555 = { func_1452(bVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1452(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1452(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 5:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_1452(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1452(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_3__::func_176(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_876(__LIB_1__::func_694(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_1__::func_694(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 14:
				if (!Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = 0f;
					Global_2667225.f_555.f_4 = 0f;
					Global_2667225.f_555.f_7 = 2;
					Global_2667225.f_555.f_8 = { Global_2676213.f_11 };
					Global_2667225.f_555.f_11 = { Global_2676213.f_14 };
					Global_2667225.f_555.f_14 = Global_2676213.f_17;
					Global_2667225.f_593 = { 0f, 0f, 0f };
					Global_2667225.f_596 = 0f;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213.f_11 + Global_2676213.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 10:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213 };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 32:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					Global_2667225.f_520 = { Global_2676213.f_18 };
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
					if (__LIB_3__::func_253(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
					{
						if (Global_2667225.f_555.f_4 > 50f)
						{
							Global_2667225.f_555.f_4 = 50f;
						}
						Global_2667225.f_593 = { Global_2667225.f_555 };
						Global_2667225.f_596 = 1.5f;
						Global_2667225.f_520.f_5 = 1.5f;
						Global_2667225.f_520.f_6 = 1;
						Global_2667225.f_555.f_16 = 0;
						Global_2667225.f_555.f_17 = 1;
						Global_2667225.f_520 = { Global_2667225.f_555 };
					}
					else
					{
						Global_2667225.f_518 = 1;
					}
				}
				break;
			case 16:
				if (Global_2667225.f_490.f_3 && !__LIB_42__::func_35(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_43__::func_356() };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					Global_2667225.f_2697 = 1;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2667225.f_490.f_3)
					{
						Global_2667225.f_2697 = 1;
					}
				}
				break;
			case 11:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_2697 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			case 13:
				if (Global_2676213.f_10)
				{
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					if (Global_2676213.f_3 < (Global_2676213.f_4 / 2f))
					{
						Global_2667225.f_596 = (Global_2676213.f_4 / 2f);
					}
					else
					{
						Global_2667225.f_596 = Global_2676213.f_3;
					}
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_6 = 1;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				if (func_1137(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_7__::func_651(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_3__::func_406())
			{
				Global_2667225.f_587 = 4;
			}
			else
			{
				if (Global_2667225.f_45.f_309)
				{
					Var17 = { Global_2667225.f_520 };
					if (SYSTEM::VMAG(Var17) == 0f)
					{
						Var17 = { Global_2667225.f_555 };
					}
					if (!__LIB_2__::func_674(Var17))
					{
						Global_2667225.f_555.f_23 = 0;
					}
				}
				Global_2667225.f_555.f_24 = Global_2667225.f_45.f_310;
				Global_2667225.f_587 = 3;
			}
		}
		else if (bVar2)
		{
			Var18[0 /*3*/] = { Global_2667225.f_555 };
			Var18.f_16[0] = Global_2667225.f_555.f_3;
			Global_2667225.f_587 = 0;
			Global_2667225.f_589 = 0;
			Global_2667225.f_667 = 0;
			Global_2667225.f_668 = 0;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2898 = Global_2667225.f_555.f_27;
			*uParam0 = { Var18 };
			return 1;
		}
		else
		{
			func_1382();
		}
	}
	if (Global_2667225.f_587 == 3)
	{
		if (bParam2)
		{
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					fVar3 = (Global_2667225.f_555 - Global_2667225.f_555.f_4);
					fVar5 = (Global_2667225.f_555.f_1 - Global_2667225.f_555.f_4);
					fVar4 = (Global_2667225.f_555 + Global_2667225.f_555.f_4);
					fVar6 = (Global_2667225.f_555.f_1 + Global_2667225.f_555.f_4);
					break;
				case 1:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = Global_2667225.f_555.f_8;
						fVar4 = Global_2667225.f_555.f_11;
					}
					else
					{
						fVar3 = Global_2667225.f_555.f_11;
						fVar4 = Global_2667225.f_555.f_8;
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = Global_2667225.f_555.f_8.f_1;
						fVar6 = Global_2667225.f_555.f_11.f_1;
					}
					else
					{
						fVar5 = Global_2667225.f_555.f_11.f_1;
						fVar6 = Global_2667225.f_555.f_8.f_1;
					}
					break;
				case 2:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = (Global_2667225.f_555.f_8 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_11 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar3 = (Global_2667225.f_555.f_11 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_8 + (0.5f * Global_2667225.f_555.f_14));
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = (Global_2667225.f_555.f_8.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_11.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar5 = (Global_2667225.f_555.f_11.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_8.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					break;
				}
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2667225.f_555.f_21)
			{
				Var18[0 /*3*/] = { Global_2667225.f_555.f_18 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			else
			{
				Var18[0 /*3*/] = { Global_2667225.f_555 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			Var48.f_6 = 1082130432;
			Var48.f_7 = 1176255488;
			Var48.f_8 = 1;
			Var48.f_10 = 1;
			Var48.f_13 = 1;
			Var48.f_15 = 1;
			Var48.f_16 = 1;
			Var48.f_31 = 1;
			Var48.f_34 = joaat("tailgater");
			Var48.f_38 = 2;
			Var48.f_45 = 2;
			Var48.f_49 = 1123024896;
			Var48.f_53 = 999;
			Var48.f_54 = 1176256410;
			Var48.f_55 = 1;
			Var48.f_56 = 1;
			Var48.f_57 = 1;
			Var48 = { Global_2667225.f_520 };
			Var48.f_4 = Global_2667225.f_596;
			Var48.f_12 = bParam2;
			Var48.f_3 = Global_2667225.f_520.f_5;
			Var48.f_5 = fVar36;
			Var48.f_16 = Global_2667225.f_555.f_23;
			if (Global_2667225.f_555.f_26)
			{
				Var48.f_10 = 0;
			}
			if (Global_2667225.f_520.f_32 > 0f)
			{
				Var48.f_6 = Global_2667225.f_520.f_32;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar49))
				{
					Var48.f_34 = ENTITY::GET_ENTITY_MODEL(iVar49);
				}
			}
			if (iParam7 != 0)
			{
				Var48.f_34 = iParam7;
			}
			Var48.f_18 = 1;
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					Var48.f_19 = { Global_2667225.f_555 };
					Var48.f_25 = Global_2667225.f_555.f_4;
					Var48.f_4 = 0f;
					break;
				case 1:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = 0f;
					break;
				case 2:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = Global_2667225.f_555.f_14;
					break;
			}
			Var48.f_26 = Global_2667225.f_555.f_7;
			if ((__LIB_0__::func_975() && __LIB_3__::func_262()) && func_1137(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_3__::func_404();
			if (Global_2667225.f_520.f_6)
			{
				Var48.f_30 = 1;
				Var48.f_29 = 0;
			}
			else
			{
				Var48.f_30 = 0;
				Var48.f_29 = 1;
			}
			if (Global_2667225.f_489 == 3)
			{
				Var48.f_28 = 1;
				Var48.f_29 = 1;
				Var48.f_30 = 0;
			}
			else if (Global_2667225.f_489 == 26)
			{
				Var48.f_28 = 1;
				Var48.f_30 = 1;
				Var48.f_29 = 0;
				Var48.f_32 = 1;
			}
			if (Global_2667225.f_489 == 1)
			{
				Var48.f_7 = 15f;
			}
			if (Global_2667225.f_45.f_311 > 0f)
			{
				Var48.f_7 = Global_2667225.f_45.f_311;
			}
			Var48.f_17 = uParam6;
			Var48.f_55 = Global_2667225.f_555.f_16;
			Var48.f_60 = Global_2667225.f_555.f_30;
			if (__LIB_3__::func_139(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_1097(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (iVar0 < Global_2674786.f_162 && iVar0 > 0)
				{
					Var18[iVar0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
					Var18.f_16[iVar0] = Global_2674786.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var48.f_11 && Var48.f_27)
			{
				Global_2667225.f_45.f_304 = 1;
			}
			else
			{
				Global_2667225.f_45.f_304 = 0;
			}
			Global_2667225.f_590++;
			Global_2667225.f_588 = 3;
			Global_2667225.f_587 = 5;
		}
	}
	if (Global_2667225.f_587 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Var18[iVar0 /*3*/] = { Global_2667225.f_555.f_18 };
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1375(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_1372(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_1372(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_1372(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
						break;
					}
			}
			if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
			{
				Var17 = { Global_2667225.f_520 - Var18[iVar0 /*3*/] };
				Var18.f_16[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
			}
			iVar0++;
		}
		Global_2667225.f_45.f_304 = 0;
		Global_2667225.f_590++;
		Global_2667225.f_588 = 4;
		Global_2667225.f_587 = 5;
	}
	if (Global_2667225.f_587 == 5)
	{
		if (Global_2667225.f_489 == 11 && Global_2667225.f_45.f_59 > 0f)
		{
			if (SYSTEM::VDIST(Var18[0 /*3*/], Global_2667225.f_45.f_60) > SYSTEM::VDIST(Global_2676213, Global_2667225.f_45.f_60))
			{
				Var18[0 /*3*/] = { Global_2676213 };
				Var18.f_16[0] = Global_2676213.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_3__::func_406())
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1382();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_35__::func_860(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_3__::func_401(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1382();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_2__::func_670(&Var18, &iVar0);
			}
			iVar0++;
		}
	}
	if (Global_2667225.f_587 == 6)
	{
		if (Global_2667225.f_589 == 2 || Global_2667225.f_555.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2667225.f_555.f_7 == 0)
		{
			if (Global_2667225.f_520.f_5 > (Global_2667225.f_555.f_4 * 2f))
			{
				Global_2667225.f_520.f_5 = (Global_2667225.f_555.f_4 * 2f);
			}
		}
		Global_2667225.f_555.f_5 = 1;
		Global_2667225.f_555.f_6 = iVar1;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_520.f_8 = 0;
		Global_2667225.f_520.f_9 = __LIB_3__::func_404();
		Global_2667225.f_520.f_10 = 0;
		if (func_1303(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
		{
			Global_2667225.f_511 = 0;
			Global_2667225.f_587 = 2;
		}
	}
	if (Global_2667225.f_587 == 2)
	{
		*uParam0 = { Var18 };
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
		return 1;
	}
	return 0;
}

int func_1303(var uParam0, var uParam1, var uParam2)//Position - 0xB75A4
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473) && !Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_853(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_2__::func_740();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		__LIB_1__::func_442();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_41__::func_947(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				__LIB_1__::func_436(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (__LIB_1__::func_435(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_1097(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_828(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2475) > 7000)
			{
				__LIB_2__::func_739(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_432() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				__LIB_2__::func_740();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_1313(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!__LIB_1__::func_413(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_412(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_1313(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (__LIB_0__::func_828(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_1__::func_453(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_1305(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (__LIB_1__::func_410(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1305(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_1305(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0xB85ED
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (__LIB_1__::func_413(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_1307(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (__LIB_2__::func_732(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_1097(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_1307(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_1137(uParam0, 1, 1, 1, 1))
			{
				func_1305(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_1307(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xB8ACD
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_1308(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_1308(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1308(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0xB8B29
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_1134(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_3__::func_296(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_664(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1313(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xB8DF8
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_1357(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_1305(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_1305(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_1357(uParam1, uParam2);
					break;
				case 2:
					return 0;
					break;
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_1357(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_1357(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_1354(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_1321(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_1321(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1305(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_664(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1305(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1305(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_1305(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_1305(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_1321(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0xB96BC
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (MISC::ABSF((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (__LIB_3__::func_395(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!__LIB_3__::func_202(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_35__::func_860(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (__LIB_43__::func_394(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_3__::func_401(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_2__::func_768(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_2__::func_768(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!__LIB_0__::func_822(Param0, 0.5f))
			{
				if (func_1180(Var12))
				{
					if (!func_1137(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_2__::func_784(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!__LIB_1__::func_428(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_3__::func_282(PLAYER::PLAYER_ID()) && __LIB_12__::func_238(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_668(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_12__::func_238(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_427(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (__LIB_2__::func_738(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_410(Global_2667225.f_489))
			{
				if (__LIB_1__::func_560(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (__LIB_1__::func_426(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!__LIB_2__::func_766(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!__LIB_2__::func_664(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_1__::func_559(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_2__::func_667(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_2__::func_975(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_3__::func_296(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (__LIB_1__::func_423(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = __LIB_43__::func_865(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_43__::func_865(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = __LIB_43__::func_393(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_2__::func_665(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = __LIB_43__::func_865(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_43__::func_865(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_410(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_3__::func_256(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_1324(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_1324(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = __LIB_3__::func_201(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_43__::func_393(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_420(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_420(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_1324(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_1324(struct<10> Param0, int iParam1)//Position - 0xBA2AF
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_1324(Var0, iParam1 + 1);
	}
}

void func_1354(struct<3> Param0, var uParam1, var uParam2)//Position - 0xBB785
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2621865[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_1356(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6292[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_1356(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_1356(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_1355(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_1355(var uParam0, var uParam1, int iParam2)//Position - 0xBBAA5
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1355(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_1356(var uParam0, var uParam1, int iParam2)//Position - 0xBBAE3
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1356(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_1357(var uParam0, var uParam1)//Position - 0xBBB1D
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_2__::func_851(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_1321(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_1372(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xBBEFE
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_878(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_2__::func_671(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_875(Param0, Param1, fParam2) };
				break;
		}
		if (func_1375(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_1375(var uParam0, bool bParam1)//Position - 0xBC043
{
	func_1376(uParam0, bParam1);
	if (__LIB_41__::func_947(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1376(var uParam0, bool bParam1)//Position - 0xBC07A
{
	float fVar0;
	if (!bParam1)
	{
		func_1378(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_1378(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_1378(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xBC150
{
	if (bParam1)
	{
		if (func_1180(Global_2667225.f_512))
		{
			if (func_1137(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_2__::func_766(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_2__::func_784(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_3__::func_175(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_2__::func_673(uParam0, 1120403456);
}

void func_1382()//Position - 0xBC385
{
	if (!Global_2667225.f_701)
	{
		if (func_1180(Global_2667225.f_555))
		{
			if (func_1137(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1517(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_2__::func_766(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_2__::func_784(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_3__::func_406())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1452(bool bParam0)//Position - 0xC179B
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[bParam0]))
	{
		Var0 = { __LIB_1__::func_722(Global_2678393[bParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[bParam0]) && !bParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_722(Global_2678393.f_33[bParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1453(bParam0);
}

Vector3 func_1453(bool bParam0)//Position - 0xC180F
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_3__::func_143(bParam0))
		{
			Var1 = { __LIB_3__::func_142(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[bParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1491(__LIB_1__::func_694(bParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_2__::func_742(bParam0))
	{
		Var1 = { __LIB_3__::func_298(bParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_3__::func_180(bParam0))
	{
		iVar2 = __LIB_3__::func_141(bParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_3__::func_143(bParam0))
		{
			Var1 = { __LIB_3__::func_142(bParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[bParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[bParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[bParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_1__::func_694(bParam0);
}

void func_1491(struct<3> Param0, var uParam1)//Position - 0xC277E
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1492(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_1492(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_1492(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1492(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_1492(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_1492(struct<3> Param0, int iParam1, float fParam2)//Position - 0xC28C2
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1492(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1492(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1492(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1517(var uParam0, bool bParam1)//Position - 0xC5D69
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					if (Global_2672169[iVar0 /*17*/].f_12)
					{
						*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
					}
					else
					{
						Var1 = { *uParam0 };
						Var1.f_2 = __LIB_2__::func_692(&(Global_2672169[iVar0 /*17*/]));
						__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_1137(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
						}
						*uParam0 = { Var1 };
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<18> func_1528(bool bParam0)//Position - 0xC67A5
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Var0 = 5;
	Var0.f_6 = 5;
	Var0.f_12 = 5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var0[iVar1] = -1;
		Var0.f_6[iVar1] = -1f;
		iVar1++;
	}
	if (Global_2667225.f_714 == 1)
	{
		Var0[0] = 0;
		Var0.f_6[0] = 1f;
		return Var0;
	}
	iVar2 = 0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar2 = 1;
	}
	fVar8 = 0f;
	if (Global_2667225.f_714.f_507)
	{
		fVar8 = 0.001f;
	}
	iVar1 = 0;
	while (iVar1 < Global_2667225.f_714)
	{
		fVar4 = 1f;
		fVar6 = 0f;
		if (Global_2667225.f_2878 && Global_2667225.f_714.f_503 == iVar1)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else if (Global_2667225.f_714.f_503 == iVar1 && Global_2667225.f_714.f_504)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else
		{
			if (!Global_2667225.f_714.f_505)
			{
				if (__LIB_1__::func_423(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_822(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_2__::func_768(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_2__::func_768(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_2__::func_768(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_3__::func_257(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_43__::func_393(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_3__::func_403(), __LIB_3__::func_402(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_43__::func_393(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_2__::func_737(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_3__::func_403(), __LIB_3__::func_402(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_2__::func_695(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, 65f, 0.8f, 1f);
					fVar4 = (fVar4 * (fVar3 * 1f));
				}
			}
			fVar4 = (fVar4 * Global_2667225.f_714.f_1[iVar1 /*5*/].f_4);
		}
		iVar7 = 0;
		while (iVar7 < 5)
		{
			if (fVar4 > 0f || Global_2667225.f_714.f_507)
			{
				if (fVar4 > Var0.f_6[iVar7])
				{
					func_1529(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1529(&Var0, iVar1, fVar4, iVar7, fVar6);
						iVar7 = 5;
					}
				}
			}
			iVar7++;
		}
		iVar1++;
	}
	return Var0;
}

void func_1529(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0xC6C08
{
	var uVar0;
	var uVar1;
	var uVar2;
	uVar0 = (*uParam0)[iParam3];
	uVar1 = uParam0->f_6[iParam3];
	uVar2 = uParam0->f_12[iParam3];
	(*uParam0)[iParam3] = iParam1;
	uParam0->f_6[iParam3] = fParam2;
	uParam0->f_12[iParam3] = fParam4;
	if (iParam3 < 4)
	{
		func_1529(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_1539()//Position - 0xC7251
{
	int iVar0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 5)
	{
		return 7;
	}
	else
	{
		if (!Global_2667225.f_490 == 0)
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_490.f_1))
			{
				if (Global_2667225.f_490 == 8)
				{
					__LIB_2__::func_892();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_2__::func_40(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_897())
			{
				Global_2667225.f_45.f_54 = 1;
			}
			else
			{
				Global_2667225.f_45.f_54 = 0;
			}
			if (Global_2667225.f_45.f_54)
			{
				return 26;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			if (!Global_2667225.f_24 == 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1))
				{
					Global_2667225.f_24 = 0;
				}
			}
			if (!Global_2667225.f_24 == 0)
			{
				return Global_2667225.f_24;
			}
			else
			{
				if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_896() && (__LIB_2__::func_940(PLAYER::PLAYER_ID()) || __LIB_2__::func_700(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_974())
				{
					if (func_1550(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_975())
				{
					return 20;
				}
				else if ((((((__LIB_2__::func_159(1) && func_1550(PLAYER::PLAYER_ID())) && (__LIB_2__::func_608(PLAYER::PLAYER_ID()) != 157 || (__LIB_2__::func_608(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_3__::func_260(PLAYER::PLAYER_ID())) && !__LIB_3__::func_195(1)) && !(__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) == 0 && func_1545(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_7__::func_671())
					{
						return 34;
					}
					else if (__LIB_7__::func_653(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_3__::func_184(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_867(iVar0) && __LIB_35__::func_484(iVar0)) && (__LIB_6__::func_436(iVar0) || __LIB_1__::func_744(PLAYER::PLAYER_ID())))
						{
							Global_2667225.f_2855 = iVar0;
							return 29;
						}
						else
						{
							return 31;
						}
					}
				}
				else if (__LIB_7__::func_653(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_3__::func_184(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_867(iVar0) && __LIB_35__::func_484(iVar0))
					{
						Global_2667225.f_2855 = iVar0;
						return 29;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 1;
}

int func_1545(bool bParam0)//Position - 0xC76D2
{
	bool bVar0;
	struct<3> Var1;
	if (__LIB_2__::func_72(bParam0, 0))
	{
		bVar0 = __LIB_2__::func_39(bParam0);
		Var1 = { func_1452(bVar0) };
		return func_1137(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1550(bool bParam0)//Position - 0xC77CD
{
	struct<3> Var0;
	bool bVar1;
	struct<3> Var2;
	bool bVar3;
	struct<3> Var4;
	Var0 = { func_1452(bParam0) };
	if (__LIB_2__::func_72(bParam0, 0))
	{
		bVar1 = __LIB_2__::func_39(bParam0);
		Var2 = { func_1452(bVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		bVar3 = __LIB_3__::func_258(bParam0, 1);
		if (!bVar3 == __LIB_0__::func_162())
		{
			Var4 = { func_1452(bVar3) };
			Var0.f_2 = 0f;
			Var4.f_2 = 0f;
			if (SYSTEM::VDIST2(Var0, Var4) < 250000f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1567(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0xC7BA8
{
	struct<28> Var0;
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		if (!Global_2676213.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2676213.f_6))
	{
		Global_2676213.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2676213.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = iParam7;
	Var0.f_22 = iParam8;
	if (__LIB_3__::func_395(PLAYER::PLAYER_ID()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2676213 = { Var0 };
}

void func_1568(int iParam0)//Position - 0xC7CD1
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		Local_709[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = iParam0;
	}
}

int func_1584(int iParam0)//Position - 0xC7FC3
{
	return Local_709[iParam0 /*4*/].f_1;
}

void func_1592(bool bParam0)//Position - 0xC812C
{
	var uVar0;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
		{
			if (((!__LIB_3__::func_362(PLAYER::PLAYER_ID()) && !__LIB_2__::func_124(PLAYER::PLAYER_ID())) && !__LIB_3__::func_369(PLAYER::PLAYER_ID())) && !__LIB_0__::func_927(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_945())
				{
					__LIB_3__::func_398(2, 0, 1);
					__LIB_1__::func_713();
				}
				if (__LIB_3__::func_361(__LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID()))))
				{
					uVar0 = __LIB_1__::func_360(2483, -1, 0);
					MISC::CLEAR_BIT(&uVar0, __LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID())));
					__LIB_1__::func_713();
				}
				if (__LIB_1__::func_512())
				{
					__LIB_1__::func_713();
				}
				if (__LIB_1__::func_592(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
					if (__LIB_1__::func_940(PLAYER::PLAYER_ID()))
					{
						__LIB_2__::func_114();
					}
					__LIB_1__::func_28(__LIB_1__::func_939(__LIB_1__::func_592(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 7);
		__LIB_2__::func_133();
	}
}

void func_1605(bool bParam0)//Position - 0xC84B6
{
	int iVar0;
	var uVar1;
	if (bParam0)
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
		{
			Global_2727723 = __LIB_1__::func_592(PLAYER::PLAYER_ID());
			if (Global_2727723 == -1)
			{
				Global_2727723 = Global_1836844.f_4;
			}
			if (__LIB_2__::func_275(Global_2727723) == 0)
			{
				if (__LIB_3__::func_396(1) > 0)
				{
					__LIB_2__::func_384(26, -1);
				}
			}
			if (__LIB_0__::func_945())
			{
				__LIB_3__::func_398(2, 0, 1);
				__LIB_1__::func_713();
			}
			if (__LIB_3__::func_361(__LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID()))))
			{
				uVar1 = __LIB_1__::func_360(2483, -1, 0);
				MISC::CLEAR_BIT(&uVar1, __LIB_1__::func_970(__LIB_1__::func_592(PLAYER::PLAYER_ID())));
				__LIB_1__::func_713();
			}
			if (__LIB_1__::func_512())
			{
				__LIB_1__::func_713();
			}
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 0))
	{
		if ((!__LIB_0__::func_629() && !__LIB_1__::func_649()) && !__LIB_2__::func_276())
		{
			Global_2727723 = -1;
			__LIB_2__::func_70(26, -1);
		}
		else if (__LIB_2__::func_275(Global_2727723) == 0)
		{
			iVar0 = __LIB_3__::func_474(1);
			if (iVar0 > 0)
			{
				__LIB_2__::func_553(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				__LIB_1__::func_746(1934, 1, -1);
				__LIB_2__::func_553(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (__LIB_2__::func_38(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__::func_70(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 0);
	}
}

void func_1637(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xC8E09
{
	bool bVar0;
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2815059.f_5042 = -1;
	bVar0 = (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_358(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		__LIB_1__::func_460(__LIB_1__::func_957(iParam0), 1);
	}
	else
	{
		__LIB_3__::func_449(iParam0, -1);
		if (__LIB_1__::func_899(PLAYER::PLAYER_ID()))
		{
			Global_1836844.f_3 = iParam0;
		}
		else
		{
			__LIB_1__::func_956(iParam0);
		}
		Global_1836844.f_4 = -1;
		if (__LIB_1__::func_899(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 5);
		}
		if (((__LIB_0__::func_945() && !__LIB_1__::func_941()) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
		MISC::SET_BIT(&(Global_1836844.f_1), 20);
		if (__LIB_1__::func_955(iParam0))
		{
			__LIB_1__::func_954();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			__LIB_2__::func_74(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (__LIB_2__::func_136(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1836844.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2653189)
			{
				__LIB_2__::func_135(1);
				if (__LIB_1__::func_931(0))
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			__LIB_2__::func_57(1);
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (bParam5)
		{
			__LIB_1__::func_951();
			MISC::SET_BIT(&(Global_1836844.f_1), 12);
		}
		if (!bParam6)
		{
			if (__LIB_2__::func_162(iParam0))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 21);
			}
		}
	}
	Global_2787396 = 1;
}

int func_1651()//Position - 0xC92CA
{
	if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 1;
	}
	return 0;
}

int func_1652()//Position - 0xC92E2
{
	if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 1;
	}
	return 0;
}

int func_1653()//Position - 0xC92FA
{
	if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 1;
	}
	return 0;
}

float func_1654()//Position - 0xC9312
{
	if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 0f;
	}
	return 1f;
}

float func_1655()//Position - 0xC932A
{
	if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 0f;
	}
	return 1f;
}

bool func_1656(int iParam0)//Position - 0xC9342
{
	return BitTest(uLocal_711, iParam0);
}

int func_1658(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC9367
{
	struct<80> Var0;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	__LIB_1__::func_264(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		__LIB_1__::func_330(&(Var0.f_69), iParam7);
	}
	return func_795(&Var0);
}

void func_1660()//Position - 0xC93F1
{
	Global_2815059.f_5121 = 0;
}

void func_1662()//Position - 0xC9411
{
	if (iLocal_736 == 1)
	{
		__LIB_15__::func_296(0);
		iLocal_736 = 0;
	}
}

int func_1672()//Position - 0xCA10E
{
	switch (func_16())
	{
		case 0:
			return func_15();
		case 1:
			return func_14();
		case 2:
			return func_13();
		case 3:
			return func_12();
		default:
	}
	return 0;
}

int func_1680(int iParam0)//Position - 0xCA6F0
{
	char* sVar0;
	switch (iParam0)
	{
		case 1:
			sVar0 = "AMHB_PASSIVE" /* GXT: Hunt the Beast will begin shortly. Exit Passive Mode to have a chance of becoming the Beast. */;
			break;
		case 2:
			sVar0 = "AMHB_HELIGUN" /* GXT: Hunt the Beast will begin shortly. Exit the helicopter to have a chance of becoming the Beast. */;
			break;
		case 3:
			sVar0 = "AMHB_LUXOR" /* GXT: Hunt the Beast will begin shortly. Exit the Luxor to have a chance of becoming the Beast. */;
			break;
		case 4:
			sVar0 = "AMHB_BOB" /* GXT: Hunt the Beast will begin shortly. Exit the helicopter to have a chance of becoming the Beast. */;
			break;
		case 11:
			sVar0 = "AMHB_HKR" /* GXT: Hunt the Beast will begin shortly. Stop the activity you are doing to have a chance of becoming the Beast. */;
			break;
		case 13:
			sVar0 = "AMHB_PLANE" /* GXT: Hunt the Beast will begin shortly. Exit the plane to have a chance of becoming the Beast. */;
			break;
		case 16:
			sVar0 = "AMHB_STRIP" /* GXT: Hunt the Beast will begin shortly. Exit the Strip Club to have a chance of becoming the Beast. */;
			break;
		case 17:
			sVar0 = "AMHB_OFFICE" /* GXT: Hunt the Beast will begin shortly. Exit the Office to have a chance of becoming the Beast. */;
			break;
		case 18:
			sVar0 = "AMHB_WHOUSE" /* GXT: Hunt the Beast will begin shortly. Exit the Warehouse to have a chance of becoming the Beast. */;
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 1;
	}
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_1__::func_515())
	{
		__LIB_1__::func_707(sVar0, 30000);
		__LIB_1__::func_752(0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
		return 1;
	}
	return 0;
}

int func_1683()//Position - 0xCA90D
{
	if (func_1782(0, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		return 14;
	}
	if (BitTest(uLocal_727, PLAYER::PLAYER_ID()))
	{
		return 5;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 6;
	}
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 14))
	{
		return 7;
	}
	if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 12;
	}
	if (Global_32110)
	{
		return 11;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 8;
	}
	if (func_1692())
	{
		return 4;
	}
	if (func_1691())
	{
		return 3;
	}
	if (func_1688())
	{
		return 2;
	}
	if (__LIB_2__::func_841(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
	{
		return 10;
	}
	if (func_1685())
	{
		return 13;
	}
	if (Global_2815059.f_5193)
	{
		return 15;
	}
	if (func_1656(2))
	{
		return 16;
	}
	if (__LIB_1__::func_864(PLAYER::PLAYER_ID()))
	{
		return 17;
	}
	if (__LIB_7__::func_259(PLAYER::PLAYER_ID()))
	{
		return 18;
	}
	if (__LIB_3__::func_171(PLAYER::PLAYER_ID()))
	{
		return 19;
	}
	if (Global_2725439.f_133 || __LIB_9__::func_362())
	{
		return 20;
	}
	if ((Global_2815059.f_888 == 1 || Global_2815059.f_885 == 1) || __LIB_1__::func_832(PLAYER::PLAYER_ID()))
	{
		return 21;
	}
	return 0;
}

int func_1685()//Position - 0xCAA7D
{
	int iVar0;
	int iVar1;
	if (BitTest(uLocal_726, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (iVar1 == joaat("hydra"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1688()//Position - 0xCAB72
{
	int iVar0;
	var uVar1;
	if (BitTest(uLocal_726, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (__LIB_34__::func_384(iVar0, &uVar1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1691()//Position - 0xCACC9
{
	int iVar0;
	int iVar1;
	if (BitTest(uLocal_726, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
						if (iVar1 == joaat("luxor") || iVar1 == joaat("luxor2"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1692()//Position - 0xCAD3D
{
	int iVar0;
	int iVar1;
	if (BitTest(uLocal_726, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		if (!BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
		{
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_1694()//Position - 0xCAE32
{
	if (!__LIB_15__::func_298(0))
	{
		iLocal_736 = 0;
		if (__LIB_0__::func_864(&(Local_165.f_1.f_4)))
		{
			if (__LIB_0__::func_937(&(Local_165.f_1.f_4), (Global_262145.f_11684 /* Tunable: HUNT_THE_BEAST_EVENT_START_COUNTDOWN_TIME */ - 2000), 0))
			{
				__LIB_15__::func_297(0);
				iLocal_736 = 1;
			}
		}
	}
}

void func_1698(int iParam0)//Position - 0xCAED0
{
	Global_2815059.f_5192 = iParam0;
}

void func_1699()//Position - 0xCAEE1
{
	var uVar0;
	char* sVar1;
	bool bVar2;
	MemCopy(&uVar0, {func_766()}, 2);
	sVar1 = __LIB_1__::func_601(&uVar0);
	if ((func_1724(0, 0) || bLocal_734 == -1) || __LIB_0__::func_945())
	{
		func_755();
		return;
	}
	if (func_1930() != -1)
	{
		if (BitTest(uLocal_726, func_1930()))
		{
			if (BitTest(uLocal_725, func_41()))
			{
				if (!BitTest(uLocal_727, func_41()))
				{
					switch (iLocal_171)
					{
						case 0:
							if (func_751(23))
							{
								iLocal_171 = 1;
							}
							else if (func_751(24))
							{
								iLocal_164 = func_1715();
								iLocal_171 = 1;
							}
							else if (func_751(25))
							{
								iLocal_171 = 1;
							}
							else
							{
								func_757();
							}
							break;
						case 1:
							if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								__LIB_10__::func_564();
								if (!HUD::DOES_BLIP_EXIST(iLocal_1987))
								{
									iLocal_1987 = HUD::ADD_BLIP_FOR_COORD(__LIB_1__::func_694(PLAYER::PLAYER_ID()));
									HUD::SET_BLIP_PRIORITY(iLocal_1987, 13);
									HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_1987, false);
									HUD::SET_BLIP_SPRITE(iLocal_1987, 442);
									__LIB_1__::func_540(&iLocal_1987, 21);
									__LIB_0__::func_795(&uLocal_754, 0, 0);
									HUD::SET_BLIP_COORDS(iLocal_1987, __LIB_1__::func_694(PLAYER::PLAYER_ID()));
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1987, sVar1);
									iLocal_171 = 2;
								}
							}
							else
							{
								__LIB_19__::func_354(func_41(), 0, 0);
								if (__LIB_19__::func_305(func_41()))
								{
									__LIB_30__::func_783(func_41(), __LIB_1__::func_389(21), 1, 0);
								}
								__LIB_3__::func_459(func_41(), 1);
								__LIB_15__::func_359(func_41(), 1, 1, 0);
								__LIB_12__::func_535(func_41(), 442, 1, 0);
								__LIB_19__::func_350(func_41(), 1f, 1, 0);
								__LIB_19__::func_369(func_41(), 1, 0);
								func_758(func_41(), func_766(), 1, 0, 0);
								func_1923(26);
								if (!func_751(21))
								{
									func_1700(func_41(), 1, iLocal_164);
									func_1923(21);
								}
								else if (__LIB_25__::func_396(func_41()))
								{
									if (!func_751(25) && !func_751(24))
									{
										if (!func_1724(0, 0))
										{
											__LIB_3__::func_218("AMHB_RDRTICK" /* GXT: The ~HUD_COLOUR_PURPLE~Beast ~s~visited a landmark. */, 0);
										}
									}
									iLocal_171 = 2;
								}
							}
							break;
						case 2:
							if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (__LIB_0__::func_864(&uLocal_754))
								{
									if (__LIB_0__::func_937(&uLocal_754, iLocal_164, 0))
									{
										bVar2 = true;
									}
								}
								if (bVar2)
								{
									func_757();
									func_756(23);
									func_756(26);
									func_756(25);
									iLocal_171 = 0;
								}
								else
								{
									__LIB_10__::func_564();
									if (HUD::DOES_BLIP_EXIST(iLocal_1987))
									{
										HUD::SET_BLIP_COORDS(iLocal_1987, __LIB_1__::func_694(PLAYER::PLAYER_ID()));
										HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1987, sVar1);
									}
								}
							}
							else if (!__LIB_25__::func_396(func_41()))
							{
								func_757();
								func_756(23);
								func_756(21);
								func_756(26);
								func_756(25);
								iLocal_171 = 0;
							}
							else
							{
								__LIB_19__::func_354(func_41(), 0, 0);
								if (__LIB_19__::func_305(func_41()))
								{
									__LIB_30__::func_783(func_41(), __LIB_1__::func_389(21), 1, 0);
								}
								__LIB_3__::func_459(func_41(), 1);
								__LIB_15__::func_359(func_41(), 1, 1, 0);
								__LIB_12__::func_535(func_41(), 442, 1, 0);
								__LIB_19__::func_350(func_41(), 1f, 1, 0);
								__LIB_19__::func_369(func_41(), 1, 0);
								func_758(func_41(), func_766(), 1, 0, 0);
							}
							break;
						}
					}
				}
			}
	}
}

void func_1700(bool bParam0, bool bParam1, int iParam2)//Position - 0xCB1EF
{
	int iVar0;
	if (bParam0 == __LIB_0__::func_162())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = bParam0;
	if (bParam1)
	{
		if (bParam0 == Global_2703735)
		{
		}
		else if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], true);
			HUD::SET_BLIP_FLASH_INTERVAL(Global_2678393[iVar0], 250);
			func_1701(bParam0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			MISC::SET_BIT(&(Global_2678393.f_370), iVar0);
			MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
			if (iParam2 < 0)
			{
				MISC::SET_BIT(&(Global_2678393.f_375), iVar0);
			}
			else
			{
				Global_2678393.f_201[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		MISC::CLEAR_BIT(&(Global_2678393.f_370), iVar0);
		MISC::CLEAR_BIT(&(Global_2678393.f_375), iVar0);
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			func_1701(bParam0);
			HUD::SET_BLIP_FLASHES(Global_2678393[iVar0], false);
		}
	}
}

void func_1701(bool bParam0)//Position - 0xCB324
{
	int iVar0;
	iVar0 = bParam0;
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			Global_2678393.f_1504[iVar0] = func_1702(bParam0);
			HUD::SET_BLIP_PRIORITY(Global_2678393[iVar0], Global_2678393.f_1504[iVar0]);
		}
	}
}

int func_1702(bool bParam0)//Position - 0xCB372
{
	int iVar0;
	int iVar1;
	iVar0 = bParam0;
	if (__LIB_1__::func_693(bParam0, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar0]))
		{
			iVar1 = HUD::GET_BLIP_SPRITE(Global_2678393[iVar0]);
			if (BitTest(Global_2678393.f_386, iVar0) || BitTest(Global_2678393.f_385, iVar0))
			{
				return 1;
			}
			else if ((BitTest(Global_2678393.f_371, iVar0) || BitTest(Global_2678393.f_370, iVar0)) || BitTest(Global_2678393.f_388, iVar0))
			{
				return __LIB_19__::func_41(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return __LIB_19__::func_41(7);
						break;
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return __LIB_19__::func_41(11);
						break;
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703735))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(bParam0) == PLAYER::GET_PLAYER_TEAM(Global_2703735))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 163:
					case 164:
						if (__LIB_1__::func_905(Global_2703735, bParam0, -2, 0))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 303:
					case 418:
						return __LIB_19__::func_41(10);
						break;
					case 364:
						if (func_1703(Global_2703735, bParam0, 1))
						{
							return __LIB_19__::func_41(10);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 478:
					case 501:
					case 523:
					case 556:
						return __LIB_19__::func_41(10);
						break;
					case 417:
						if ((__LIB_2__::func_748(bParam0) || __LIB_2__::func_746(bParam0)) || __LIB_2__::func_747(bParam0))
						{
							if (func_1703(Global_2703735, bParam0, 1))
							{
								return 3;
							}
							else
							{
								return 4;
							}
						}
						else if (func_1703(Global_2703735, bParam0, 1))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					case 256:
					case 268:
					default:
						if (func_1703(Global_2703735, bParam0, 1))
						{
							return __LIB_19__::func_41(6);
						}
						else
						{
							return __LIB_19__::func_41(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_1703(int iParam0, bool bParam1, bool bParam2)//Position - 0xCB5DD
{
	if (func_648(iParam0, -2, 0, 0, 0) == func_648(bParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (__LIB_12__::func_586(func_648(iParam0, -2, 0, 0, 0)) && __LIB_12__::func_586(func_648(bParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_1715()//Position - 0xCBAC7
{
	return Global_262145.f_11810 /* Tunable: HUNT_THE_BEAST_BEAST_BLIP_START_VISIBILITY */;
}

void func_1716()//Position - 0xCBAD6
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	struct<3> Var8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	fVar0 = 1000f;
	func_756(11);
	bVar1 = false;
	while (bVar1 < Global_262145.f_11708 /* Tunable: HUNT_THE_BEAST_NUMBER_OF_ACTIVE_LANDMARKS */)
	{
		bVar7 = false;
		bVar9 = false;
		Var8 = { 0f, 0f, 0f };
		Var8 = { func_1723(bVar1) };
		HUD::GET_HUD_COLOUR(12, &iVar3, &iVar4, &iVar5, &uVar6);
		fVar13 = SYSTEM::VDIST(__LIB_1__::func_694(PLAYER::PLAYER_ID()), Var8);
		if (!func_751(11))
		{
			if (fVar13 <= IntToFloat(func_1783()))
			{
				func_1923(11);
			}
		}
		if (!BitTest(Local_709[func_1930() /*4*/].f_2, bVar1))
		{
			if (!func_1724(0, 0))
			{
				if (func_744(NETWORK::PARTICIPANT_ID_TO_INT()))
				{
					if (func_1722())
					{
						if (!HUD::DOES_BLIP_EXIST(Local_714[bVar1 /*3*/].f_1))
						{
							Local_714[bVar1 /*3*/].f_1 = HUD::ADD_BLIP_FOR_COORD(Var8);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_714[bVar1 /*3*/].f_1, "AMHB_LNDLBL" /* GXT: Landmark */);
						}
					}
					if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!BitTest(uLocal_1984, bVar1))
						{
							if (func_1721())
							{
								Local_714[bVar1 /*3*/] = GRAPHICS::CREATE_CHECKPOINT(16, func_1723(bVar1) + Vector(1.5f, 0f, 0f), func_1723(bVar1), 2.25f, iVar3, iVar4, iVar5, Local_714[bVar1 /*3*/].f_2, 0);
								iVar3 = 239;
								iVar4 = 250;
								iVar5 = 187;
								fVar10 = 5f;
								fVar12 = 64f;
								fVar11 = 15f;
								if (!__LIB_0__::func_86(func_1723(bVar1)))
								{
									Var14 = { func_1723(bVar1) };
									Var14.f_2 = (Var14.f_2 + 1.7f);
									GRAPHICS::DRAW_LIGHT_WITH_RANGEEX(Var14, iVar3, iVar4, iVar5, fVar11, fVar10, fVar12);
								}
								MISC::SET_BIT(&uLocal_1984, bVar1);
							}
						}
					}
				}
				else
				{
					bVar7 = true;
					if (func_1930() != NETWORK::PARTICIPANT_ID_TO_INT())
					{
						bVar9 = true;
					}
				}
			}
			else
			{
				bVar7 = true;
			}
		}
		else
		{
			if (!func_1724(0, 0))
			{
				if (func_744(NETWORK::PARTICIPANT_ID_TO_INT()))
				{
					if (BitTest(uLocal_727, Local_712[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1))
					{
						bVar7 = true;
					}
					else
					{
						if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
						{
							bVar7 = true;
						}
						else if (func_1722())
						{
							if (!HUD::DOES_BLIP_EXIST(Local_714[bVar1 /*3*/].f_1))
							{
								Local_714[bVar1 /*3*/].f_1 = HUD::ADD_BLIP_FOR_COORD(Var8);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_714[bVar1 /*3*/].f_1, "AMHB_LNDLBL" /* GXT: Landmark */);
							}
							else if (!BitTest(uLocal_753, bVar1))
							{
								HUD::SET_BLIP_FLASHES(Local_714[bVar1 /*3*/].f_1, true);
								HUD::SET_BLIP_FLASH_TIMER(Local_714[bVar1 /*3*/].f_1, 7000);
								MISC::SET_BIT(&uLocal_753, bVar1);
							}
						}
						if (!BitTest(uLocal_756, bVar1))
						{
							MISC::SET_BIT(&uLocal_756, bVar1);
						}
					}
				}
				else
				{
					bVar7 = true;
					if (func_1930() != NETWORK::PARTICIPANT_ID_TO_INT())
					{
						bVar9 = true;
					}
				}
			}
			else
			{
				bVar7 = true;
			}
			iVar2++;
		}
		if (bVar9)
		{
			if (bVar1 == 0)
			{
				bVar7 = false;
				if (func_1722())
				{
					if (!HUD::DOES_BLIP_EXIST(Local_714[bVar1 /*3*/].f_1))
					{
						Local_714[bVar1 /*3*/].f_1 = HUD::ADD_BLIP_FOR_COORD(Var8);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_714[bVar1 /*3*/].f_1, "AMHB_LNDLBL" /* GXT: Landmark */);
					}
				}
			}
		}
		if (bVar7)
		{
			if (HUD::DOES_BLIP_EXIST(Local_714[bVar1 /*3*/].f_1))
			{
			}
			if (BitTest(uLocal_1984, bVar1))
			{
				func_1720(bVar1);
			}
		}
		bVar1++;
	}
	if (iLocal_1983 != iVar2)
	{
		iLocal_1983 = iVar2;
		if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			func_1717(func_1719(0), 0);
			__LIB_0__::func_794(&uLocal_737);
			__LIB_0__::func_795(&uLocal_737, 0, 0);
		}
	}
	if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (iLocal_1983 >= Global_262145.f_11708 /* Tunable: HUNT_THE_BEAST_NUMBER_OF_ACTIVE_LANDMARKS */)
		{
			func_1781(4);
		}
		if (__LIB_0__::func_864(&uLocal_737))
		{
			if (__LIB_0__::func_937(&uLocal_737, Global_262145.f_11905 /* Tunable: HUNT_THE_BEAST_NO_LANDMARKS_BLIP_TIME */, 0))
			{
				__LIB_0__::func_794(&uLocal_737);
				__LIB_0__::func_795(&uLocal_737, 0, 0);
				func_1717(func_1719(1), 1);
			}
		}
		if (Local_169.f_11 == 0)
		{
			if (iLocal_1983 > 0)
			{
				Local_169.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
			}
		}
	}
	if (!func_1724(1, 1))
	{
		bVar1 = false;
		while (bVar1 < Global_262145.f_11708 /* Tunable: HUNT_THE_BEAST_NUMBER_OF_ACTIVE_LANDMARKS */)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_1723(bVar1), true);
			if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!BitTest(Local_709[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, bVar1))
				{
					if (fVar0 <= 2.5f)
					{
						MISC::SET_BIT(&(Local_709[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), bVar1);
					}
				}
			}
			bVar1++;
		}
	}
}

void func_1717(var uParam0, int iParam1)//Position - 0xCBEE2
{
	struct<4> Var0;
	Var0.f_0 = 1078637481;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 4, __LIB_2__::func_36(1));
}

int func_1719(bool bParam0)//Position - 0xCBF6F
{
	if (bParam0)
	{
		return Global_262145.f_11906 /* Tunable: HUNT_THE_BEAST_NO_LANDMARKS_BLIP_DURATION */;
	}
	else
	{
		return (Global_262145.f_11690 /* Tunable: HUNT_THE_BEAST_BEAST_BLIP_FLASH_DURATION_BASE_VALUE */ + ((iLocal_1983 - 1) * Global_262145.f_11691 /* Tunable: HUNT_THE_BEAST_BEAST_BLIP_FLASH_DURATION_INCREASE_VALUE */));
	}
	return 60000;
}

void func_1720(bool bParam0)//Position - 0xCBFA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (Local_714[bParam0 /*3*/] != 0)
	{
		Local_714[bParam0 /*3*/].f_2 = (Local_714[bParam0 /*3*/].f_2 - 25);
		if (Local_714[bParam0 /*3*/].f_2 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_714[bParam0 /*3*/], iVar0, iVar1, iVar2, Local_714[bParam0 /*3*/].f_2);
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_714[bParam0 /*3*/], iVar0, iVar1, iVar2, Local_714[bParam0 /*3*/].f_2);
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(Local_714[bParam0 /*3*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_714[bParam0 /*3*/].f_1));
			}
			GRAPHICS::DELETE_CHECKPOINT(Local_714[bParam0 /*3*/]);
			Local_714[bParam0 /*3*/] = 0;
			MISC::CLEAR_BIT(&uLocal_1984, bParam0);
		}
	}
}

int func_1721()//Position - 0xCC05C
{
	if (func_1930() != NETWORK::PARTICIPANT_ID_TO_INT())
	{
		return 0;
	}
	return 1;
}

int func_1722()//Position - 0xCC074
{
	if (func_4() == 0)
	{
		if (func_1930() != NETWORK::PARTICIPANT_ID_TO_INT())
		{
			return 0;
		}
	}
	return 1;
}

Vector3 func_1723(bool bParam0)//Position - 0xCC094
{
	return Local_165.f_1.f_19[bParam0 /*3*/];
}

int func_1724(bool bParam0, bool bParam1)//Position - 0xCC0A9
{
	if (bParam0)
	{
	}
	if (func_751(17))
	{
		return 1;
	}
	if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 1;
	}
	if (__LIB_0__::func_983())
	{
		return 1;
	}
	if (__LIB_3__::func_361(16))
	{
		return 1;
	}
	if (!func_1730(0, 1, 1))
	{
		return 1;
	}
	if (__LIB_3__::func_203())
	{
		return 1;
	}
	if (__LIB_2__::func_969(4))
	{
		return 1;
	}
	if (__LIB_0__::func_719())
	{
		return 1;
	}
	if (__LIB_3__::func_364())
	{
		if (__LIB_12__::func_467(__LIB_18__::func_447()) != 190)
		{
			return 1;
		}
	}
	if (__LIB_3__::func_472(bParam0, bParam1))
	{
		return 1;
	}
	if (Global_1931426)
	{
		return 1;
	}
	if (__LIB_1__::func_948(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_1730(bool bParam0, bool bParam1, bool bParam2)//Position - 0xCC212
{
	if (__LIB_1__::func_727(PLAYER::PLAYER_ID(), 14))
	{
		return 0;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (__LIB_3__::func_282(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_381())
	{
		return 0;
	}
	if (bParam2)
	{
		if (__LIB_1__::func_968(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (__LIB_0__::func_975())
	{
		return 0;
	}
	if (bParam0)
	{
		if (__LIB_3__::func_362(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_1740(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (__LIB_1__::func_965(PLAYER::PLAYER_ID()) != __LIB_0__::func_162() && __LIB_1__::func_965(PLAYER::PLAYER_ID()) == __LIB_2__::func_39(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_2__::func_709(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if (__LIB_1__::func_964(__LIB_1__::func_919()) && !__LIB_1__::func_940(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_629())
	{
		return 0;
	}
	if (__LIB_0__::func_983())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (__LIB_0__::func_936(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_0__::func_893())
	{
		return 0;
	}
	if (__LIB_0__::func_979(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 12) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 14)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (__LIB_1__::func_511(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!__LIB_0__::func_93() && !Global_2787784)
		{
			return 0;
		}
	}
	if (__LIB_1__::func_725(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_0__::func_719())
	{
		return 0;
	}
	if (Global_1931426)
	{
		return 0;
	}
	if (__LIB_1__::func_948(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_100())
	{
		return 0;
	}
	if (__LIB_1__::func_864(PLAYER::PLAYER_ID()) && Global_1852994.f_172)
	{
		return 0;
	}
	if (__LIB_0__::func_833())
	{
		return 0;
	}
	if (__LIB_1__::func_717())
	{
		return 0;
	}
	if (Global_2814118)
	{
		return 0;
	}
	if (Global_1963980)
	{
		return 0;
	}
	if (__LIB_1__::func_708(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_1__::func_958(PLAYER::PLAYER_ID()))
	{
		if (__LIB_1__::func_830(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_1740(bool bParam0)//Position - 0xCC7BD
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	iVar0 = 2;
	bVar1 = ((__LIB_2__::func_703(bParam0) && !__LIB_1__::func_899(bParam0)) && !BitTest(Global_1892703[bParam0 /*599*/].f_1, 8));
	bVar2 = __LIB_3__::func_362(bParam0);
	bVar3 = __LIB_0__::func_945();
	uVar4 = __LIB_35__::func_861();
	if ((bVar1 && (__LIB_1__::func_958(bParam0) || __LIB_1__::func_953(bParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !__LIB_3__::func_358(bParam0)) && !__LIB_3__::func_357(bParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2815059.f_5195.f_220 != iVar0)
	{
		Global_2815059.f_5195.f_220 = iVar0;
	}
	return iVar0;
}

void func_1747()//Position - 0xCC985
{
	Global_2815059.f_5121 = func_1782(0, NETWORK::PARTICIPANT_ID_TO_INT());
}

void func_1748()//Position - 0xCC99D
{
	if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_SFX1/BEAST", false, -1))
	{
		if (BitTest(uLocal_726, func_1930()))
		{
			if (BitTest(uLocal_725, func_41()))
			{
				if (!BitTest(uLocal_727, func_41()))
				{
					if (func_63() <= 2 && !func_1724(0, 0))
					{
						if (func_5(5))
						{
							if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
							{
								if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
								{
									if (iLocal_731 == -1)
									{
										if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/))
										{
											iLocal_731 = 3000;
										}
									}
								}
								else if (func_1784() <= 70f)
								{
									iLocal_731 = 3000;
								}
								else if (func_1784() <= 100f)
								{
									iLocal_731 = 5000;
								}
								else if (func_1784() <= 150f)
								{
									iLocal_731 = 7000;
								}
								if (iLocal_731 != -1)
								{
									if (!__LIB_0__::func_864(&uLocal_750))
									{
										if (iLocal_752 == -1)
										{
											iLocal_752 = AUDIO::GET_SOUND_ID();
										}
										else
										{
											AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_752, "Beast_Calls", Local_713[func_41() /*3*/].f_2, "FM_Events_Sasquatch_Sounds", false, 0);
											__LIB_0__::func_795(&uLocal_750, 0, 0);
										}
									}
									else if (__LIB_0__::func_937(&uLocal_750, iLocal_731, 0))
									{
										if (iLocal_752 != -1)
										{
											AUDIO::RELEASE_SOUND_ID(iLocal_752);
										}
										iLocal_752 = -1;
										iLocal_731 = -1;
										__LIB_0__::func_794(&uLocal_750);
									}
								}
								else
								{
									if (iLocal_752 != -1)
									{
										AUDIO::RELEASE_SOUND_ID(iLocal_752);
									}
									iLocal_752 = -1;
									iLocal_731 = -1;
									__LIB_0__::func_794(&uLocal_750);
								}
							}
							else if (iLocal_731 == -1)
							{
								if (iLocal_752 != -1)
								{
									AUDIO::RELEASE_SOUND_ID(iLocal_752);
								}
								iLocal_752 = -1;
								iLocal_731 = -1;
								__LIB_0__::func_794(&uLocal_750);
							}
						}
					}
					else
					{
						if (iLocal_752 != -1)
						{
							AUDIO::STOP_SOUND(iLocal_752);
							AUDIO::RELEASE_SOUND_ID(iLocal_752);
						}
						iLocal_752 = -1;
						iLocal_731 = -1;
						if (__LIB_0__::func_864(&uLocal_750))
						{
							__LIB_0__::func_794(&uLocal_750);
						}
					}
				}
			}
		}
	}
}

void func_1749()//Position - 0xCCB50
{
	if (func_1656(0))
	{
		if (__LIB_0__::func_945())
		{
			__LIB_3__::func_398(15, 0, 1);
		}
	}
}

void func_1750()//Position - 0xCCB6F
{
	if (!__LIB_0__::func_864(&uLocal_728))
	{
		if (func_745(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			__LIB_0__::func_795(&uLocal_728, 0, 0);
		}
	}
}

void func_1751()//Position - 0xCCB96
{
	if (func_1724(1, 1))
	{
		if (!func_1782(10, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_1781(10);
		}
	}
	else if (func_1782(10, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		func_1780(10);
	}
	if (func_1724(0, 1))
	{
		if (!func_1782(11, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_1781(11);
		}
	}
	else if (func_1782(11, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		func_1780(11);
	}
	if (func_1724(1, 0))
	{
		if (!func_1782(12, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_1781(12);
		}
	}
	else if (func_1782(12, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		func_1780(12);
	}
	if (func_1724(0, 0))
	{
		if (!func_1782(13, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_1781(13);
		}
	}
	else if (func_1782(13, NETWORK::PARTICIPANT_ID_TO_INT()))
	{
		func_1780(13);
	}
}

void func_1752()//Position - 0xCCC6A
{
	if (func_63() == 2)
	{
		if ((func_1930() == NETWORK::PARTICIPANT_ID_TO_INT() && !__LIB_3__::func_472(1, 0)) && bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (!__LIB_1__::func_953(PLAYER::PLAYER_ID()))
			{
				func_1605(1);
			}
		}
		else if (__LIB_1__::func_953(PLAYER::PLAYER_ID()))
		{
			func_1605(0);
		}
	}
	if (func_63() == 3)
	{
		if ((func_1930() == NETWORK::PARTICIPANT_ID_TO_INT() && !__LIB_3__::func_472(1, 0)) && bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (__LIB_1__::func_953(PLAYER::PLAYER_ID()))
			{
				func_1605(0);
			}
		}
	}
}

void func_1753(int iParam0, struct<3> Param1, var uParam2, float fParam3, float fParam4, int iParam5)//Position - 0xCCD00
{
	float fVar0;
	int iVar1;
	Global_1836844.f_6 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	if (fVar0 < fParam3 && !__LIB_1__::func_899(PLAYER::PLAYER_ID()))
	{
		if ((iParam0 != 146 && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
		{
			__LIB_1__::func_959(Param1, 1, 0);
		}
		if ((!*uParam2 || BitTest(Global_1836844.f_1, 3)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam2 = 1;
			__LIB_2__::func_74(__LIB_3__::func_152(iParam0));
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(__LIB_3__::func_102(iParam0));
			if (iParam0 != 146)
			{
				iVar1 = __LIB_3__::func_151(iParam0);
				PLAYER::SET_MAX_WANTED_LEVEL(iVar1);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > iVar1)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iVar1, true);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 8);
			}
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 3);
		}
	}
	else if ((iParam0 == 146 && fVar0 < fParam4) && !__LIB_1__::func_899(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 3) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
		{
			__LIB_2__::func_16();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(Global_262145.f_11873 /* Tunable: HUNT_THE_BEAST_EXTENDED_WANTED_REDUCTION_MULTIPLER */);
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
			MISC::SET_BIT(&(Global_1836844.f_1), 3);
		}
	}
	else if ((*uParam2 || BitTest(Global_1836844.f_1, 3)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
	{
		*uParam2 = 0;
		__LIB_2__::func_16();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 8);
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 3);
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 3);
		if (iParam0 != 146 && iParam5)
		{
			func_1754();
		}
	}
}

void func_1754()//Position - 0xCCEE8
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_24), &Global_2671509, 2);
	MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_26), &Global_2671511, 19);
	__LIB_2__::func_68();
	func_1757(1, 1, 0);
	__LIB_2__::func_152();
}

void func_1757(bool bParam0, bool bParam1, bool bParam2)//Position - 0xCCF44
{
	if (bParam1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_2667225.f_45), &Global_2671530, 323);
	}
	else
	{
		Global_2667225.f_45 = { Global_2671530 };
		Global_2667225.f_45.f_49 = { Global_2671530.f_49 };
		Global_2667225.f_45.f_52 = Global_2671530.f_52;
		Global_2667225.f_45.f_53 = Global_2671530.f_53;
	}
	if (bParam0)
	{
		__LIB_2__::func_27();
	}
	if (!bParam2)
	{
		func_1759(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	__LIB_2__::func_25(0);
	__LIB_1__::func_913();
}

void func_1759(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0xCD00A
{
	if (bParam0)
	{
		if (__LIB_1__::func_739())
		{
			__LIB_2__::func_26();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		__LIB_2__::func_91();
		func_1763(8, 0, 0, 0, 0);
		Global_2667225.f_714.f_507 = iParam11;
		Global_2667225.f_714.f_512 = iParam3;
		Global_2667225.f_714.f_513 = iParam4;
		Global_2667225.f_714.f_510 = iParam5;
		Global_2667225.f_714.f_511 = iParam6;
		Global_2667225.f_714.f_514 = iParam7;
		Global_2667225.f_714.f_515 = iParam8;
		Global_2667225.f_714.f_516 = iParam9;
		Global_2667225.f_714.f_517 = iParam14;
		Global_2667225.f_714.f_508 = iParam12;
		Global_2667225.f_714.f_509 = iParam13;
		Global_2667225.f_1753 = 1;
	}
	else
	{
		func_1760();
	}
}

void func_1760()//Position - 0xCD0F5
{
	if (__LIB_1__::func_739() && !__LIB_1__::func_738())
	{
		__LIB_2__::func_26();
	}
	if (__LIB_1__::func_738())
	{
		__LIB_1__::func_737();
	}
	else
	{
		__LIB_2__::func_91();
		func_1763(0, 0, 0, 0, 0);
		Global_2667225.f_1753 = 0;
		Global_2667225.f_1752 = 0;
	}
}

void func_1763(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xCD1C4
{
	if (Global_2703735.f_1571.f_703.f_16 != __LIB_0__::func_162())
	{
		if (BitTest(Global_2689235[Global_2703735.f_1571.f_703.f_16 /*453*/].f_416, 0) && func_1764())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2674954 = 0;
	}
	Global_2667225.f_490 = iParam0;
	Global_2667225.f_490.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2667225.f_490.f_2 = iParam1;
	Global_2667225.f_490.f_3 = iParam2;
	Global_2667225.f_490.f_4 = iParam3;
	Global_2667225.f_490.f_5 = iParam4;
}

int func_1764()//Position - 0xCD260
{
	if ((((((__LIB_2__::func_608(PLAYER::PLAYER_ID()) == 229 || __LIB_2__::func_608(PLAYER::PLAYER_ID()) == 191) || __LIB_1__::func_718()) || __LIB_1__::func_632()) || __LIB_1__::func_717()) || Global_2788199.f_227 == 1) || (Global_2667225.f_1753 && __LIB_30__::func_986(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_1779()//Position - 0xCD604
{
	return Local_165.f_0;
}

void func_1780(int iParam0)//Position - 0xCD60F
{
	MISC::CLEAR_BIT(&(Local_709[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3), iParam0);
}

void func_1781(int iParam0)//Position - 0xCD628
{
	MISC::SET_BIT(&(Local_709[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3), iParam0);
}

bool func_1782(int iParam0, bool bParam1)//Position - 0xCD641
{
	return BitTest(Local_709[bParam1 /*4*/].f_3, iParam0);
}

int func_1783()//Position - 0xCD655
{
	return Global_262145.f_11809 /* Tunable: HUNT_THE_BEAST_PARTICIPATION_THRESHOLD_DISTANCE */;
}

float func_1784()//Position - 0xCD664
{
	return uLocal_749;
}

void func_1787()//Position - 0xCD6BE
{
	if (bLocal_734 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (func_1930() != -1)
		{
			if (BitTest(uLocal_726, func_1930()))
			{
				func_1788(MISC::GET_DISTANCE_BETWEEN_COORDS(func_34(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true));
			}
		}
	}
	else
	{
		func_1788(999999f);
	}
}

void func_1788(float fParam0)//Position - 0xCD705
{
	uLocal_749 = fParam0;
}

void func_1789()//Position - 0xCD712
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 186)
		{
			func_1792(iVar0);
		}
		else if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			if (iVar2 == 1078637481)
			{
				func_1790(iVar0);
			}
		}
		iVar0++;
	}
}

void func_1790(int iParam0)//Position - 0xCD76B
{
	bool bVar0;
	struct<4> Var1;
	if (!SCRIPT::GET_EVENT_DATA(1, iParam0, &Var1, 4))
	{
		return;
	}
	else
	{
		if (!func_1724(0, 0))
		{
			if (!Var1.f_3)
			{
				bVar0 = true;
			}
			else if (iLocal_171 == 0)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_755();
			iLocal_164 = Var1.f_2;
			if (Var1.f_3)
			{
				func_1791();
				func_1923(25);
			}
			else
			{
				if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Checkpoint_Beast_Hit", "FM_Events_Sasquatch_Sounds", false);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Radar_Beast_Blip", "FM_Events_Sasquatch_Sounds", false);
				}
				func_1923(23);
			}
		}
	}
}

void func_1791()//Position - 0xCD807
{
	if (!func_751(28))
	{
		if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			__LIB_1__::func_707("AMHB_NOCLCT" /* GXT: Your blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~is now visible to other players on the map for a short time because you have not visited a landmark for several minutes. */, 12000);
			__LIB_1__::func_752(1);
		}
		else
		{
			__LIB_1__::func_707("AMHB_NOCLCT2" /* GXT: The Beast blip ~HUD_COLOUR_PURPLE~~BLIP_BEAST~ ~s~is now visible on the map for a short time because it has not visited a landmark for several minutes. */, 12000);
			__LIB_1__::func_752(1);
		}
		func_1923(28);
	}
}

void func_1792(int iParam0)//Position - 0xCD84F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	struct<6> Var9;
	iVar2 = __LIB_0__::func_162();
	bVar3 = __LIB_0__::func_162();
	iVar4 = __LIB_0__::func_162();
	iVar5 = __LIB_0__::func_162();
	iVar6 = -1;
	iVar7 = -1;
	bVar8 = -1;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var9, 13);
	if (ENTITY::DOES_ENTITY_EXIST(Var9.f_0))
	{
		if (ENTITY::IS_ENTITY_A_PED(Var9.f_0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var9.f_0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
					{
						iVar7 = iVar4;
					}
				}
				if (iVar7 != -1)
				{
					if (iVar7 == func_1930())
					{
						if (func_5(5))
						{
							if (Var9.f_5)
							{
								__LIB_1__::func_915();
							}
							if (ENTITY::DOES_ENTITY_EXIST(Var9.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var9.f_1))
								{
									iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var9.f_1);
									if (!__LIB_3__::func_472(1, 0))
									{
										if (iVar1 == PLAYER::PLAYER_PED_ID())
										{
											if (!func_1782(8, NETWORK::PARTICIPANT_ID_TO_INT()))
											{
												func_1781(8);
												func_1592(1);
											}
											if (!func_1782(14, NETWORK::PARTICIPANT_ID_TO_INT()))
											{
												func_1781(14);
											}
										}
									}
									if (PED::IS_PED_A_PLAYER(iVar1))
									{
										bVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
										if (BitTest(uLocal_725, bVar3))
										{
											bVar8 = bVar3;
										}
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(bVar3))
										{
											if (!__LIB_2__::func_124(bVar3) && !__LIB_3__::func_369(bVar3))
											{
												iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(bVar3);
												if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
												{
													iVar6 = iVar5;
												}
												if (iVar6 != -1)
												{
													if (Var9.f_5)
													{
														if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
														{
															if (iVar6 == func_1930())
															{
																if (!func_5(1))
																{
																	func_1795(1);
																}
															}
															else if (!func_5(3))
															{
																func_1795(3);
															}
															if (func_734() == -1)
															{
																func_1794(iVar6);
																func_1793(bVar8);
															}
														}
													}
												}
											}
											else if (Var9.f_5)
											{
												if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
												{
													if (!func_5(2))
													{
														func_1795(2);
													}
												}
											}
										}
										else if (Var9.f_5)
										{
											if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
											{
												if (!func_5(2))
												{
													func_1795(2);
												}
											}
										}
									}
									else if (Var9.f_5)
									{
										if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
										{
											if (!func_5(4))
											{
												func_1795(4);
											}
										}
									}
								}
								else if (Var9.f_5)
								{
									if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
									{
										if (!func_5(4))
										{
											func_1795(4);
										}
									}
								}
							}
							else if (Var9.f_5)
							{
								if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
								{
									if (!func_5(4))
									{
										func_1795(4);
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

void func_1793(bool bParam0)//Position - 0xCDA8C
{
	Local_165.f_1.f_17 = bParam0;
}

void func_1794(int iParam0)//Position - 0xCDA9D
{
	Local_165.f_1.f_16 = iParam0;
}

void func_1795(int iParam0)//Position - 0xCDAAE
{
	MISC::SET_BIT(&(Local_165.f_83), iParam0);
}

void func_1798()//Position - 0xCDB6C
{
	func_1800();
	iLocal_722++;
	if (func_744(iLocal_722))
	{
		iLocal_723++;
	}
	func_1799();
}

void func_1799()//Position - 0xCDB96
{
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_722)))
	{
		iLocal_724++;
		if (iLocal_722 > iLocal_166)
		{
			iLocal_166 = iLocal_724;
		}
		if (iLocal_723 > iLocal_167)
		{
			iLocal_167 = iLocal_723;
		}
	}
	if (iLocal_722 >= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (func_1919() == 0)
		{
			iLocal_168 = (iLocal_166 - iLocal_724);
		}
		iLocal_722 = 0;
		iLocal_723 = 0;
		iLocal_724 = 0;
	}
}

void func_1800()//Position - 0xCDBFC
{
	if (iLocal_722 == 0)
	{
	}
}

void func_1801()//Position - 0xCDC0B
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	struct<16> Var5;
	int iVar6;
	int iVar7;
	bVar2 = false;
	while (bVar2 < 32)
	{
		Local_713[bVar2 /*3*/] = __LIB_0__::func_162();
		Local_713[bVar2 /*3*/].f_1 = -1;
		Local_713[bVar2 /*3*/].f_2 = uVar4;
		MISC::CLEAR_BIT(&uLocal_725, bVar2);
		MISC::CLEAR_BIT(&uLocal_727, bVar2);
		Local_172[bVar2 /*42*/] = -1;
		Local_172[bVar2 /*42*/].f_1 = __LIB_0__::func_162();
		bVar2++;
	}
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_712[bVar0 /*18*/] = __LIB_0__::func_162();
		Local_712[bVar0 /*18*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_726, bVar0);
		Local_712[bVar0 /*18*/].f_2 = { Var5 };
		bVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_1795(0);
	}
	func_1959(0);
	bVar0 = false;
	while (bVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(bVar0))
		{
			Local_712[bVar0 /*18*/] = bVar0;
			MISC::SET_BIT(&uLocal_726, bVar0);
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_712[bVar0 /*18*/]);
			bVar2 = iVar3;
			if (__LIB_1__::func_693(iVar3, 0, 1))
			{
				Local_713[bVar2 /*3*/] = iVar3;
				Local_712[bVar0 /*18*/].f_1 = bVar2;
				Local_713[bVar2 /*3*/].f_1 = bVar0;
				Local_713[bVar2 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar3);
				StringCopy(&(Local_712[bVar0 /*18*/].f_2), PLAYER::GET_PLAYER_NAME(iVar3), 64);
				if (func_745(bVar0))
				{
					iVar1++;
				}
				MISC::SET_BIT(&uLocal_725, bVar2);
				if (ENTITY::IS_ENTITY_DEAD(Local_713[bVar2 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&uLocal_727, bVar2);
				}
				if (func_1930() == bVar0)
				{
					func_43(ENTITY::GET_ENTITY_COORDS(Local_713[bVar2 /*3*/].f_2, false));
					if (func_1782(2, bVar0))
					{
						func_1795(5);
					}
					if (bVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!BitTest(uLocal_727, Local_712[bVar2 /*18*/].f_1) && !BitTest(uLocal_727, PLAYER::PLAYER_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_713[bVar2 /*3*/].f_2, true))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
								{
									if (!PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(Local_713[bVar2 /*3*/]))
									{
										iVar6 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
										iVar7 = PED::GET_VEHICLE_PED_IS_USING(Local_713[bVar2 /*3*/].f_2);
										if (ENTITY::DOES_ENTITY_EXIST(iVar6))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iVar7))
											{
												if (iVar6 == iVar7)
												{
													func_1957(0);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (bVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (func_1782(2, func_1930()))
						{
							if (__LIB_19__::func_305(bVar2))
							{
								__LIB_30__::func_783(bVar2, __LIB_1__::func_389(6), 1, 0);
							}
						}
					}
				}
				__LIB_2__::func_757(bVar2, 2);
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (func_7() == -1)
					{
						if (func_1782(3, bVar0))
						{
							func_1913(bVar0);
							func_1912(bVar0);
						}
					}
					if (!func_1782(9, bVar0))
					{
						func_1911(0);
					}
				}
			}
		}
		bVar0++;
	}
	if (iVar1 > iLocal_170)
	{
		iLocal_170 = iVar1;
	}
	if (func_63() == 2 || __LIB_2__::func_772())
	{
		if (!func_1724(0, 0) || __LIB_2__::func_772())
		{
			bVar2 = false;
			while (bVar2 < 32)
			{
				if (BitTest(uLocal_725, bVar2))
				{
					Local_172[bVar2 /*42*/] = Local_713[bVar2 /*3*/].f_1;
					Local_172[bVar2 /*42*/].f_1 = Local_713[bVar2 /*3*/];
				}
				bVar2++;
			}
			func_1802(&Local_172, &iLocal_706, 27, &uLocal_173, &uLocal_289, -1, 0, 0);
		}
	}
}

void func_1802(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0xCDF2F
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	struct<4> Var7;
	int iVar8;
	int iVar9;
	bool bVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	struct<2> Var23;
	if (func_1908(iParam2))
	{
		return;
	}
	fVar11 = -1f;
	iVar12 = -1;
	iVar13 = -1;
	iVar15 = 0;
	iVar16 = 0;
	uParam3->f_36 = 0;
	if (__LIB_3__::func_289() || iParam2 == 28)
	{
		if (__LIB_30__::func_959(iParam1, iParam2, uParam3, Global_1836357, 0, __LIB_2__::func_772(), sParam7))
		{
			__LIB_1__::func_995(1);
			if ((!__LIB_1__::func_994() && !__LIB_1__::func_993()) || BitTest(Global_2815059.f_4657, 1))
			{
				if (__LIB_1__::func_992())
				{
					__LIB_2__::func_63();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						__LIB_1__::func_991(1);
						Global_1836357 = 0;
						iVar20 = -1;
						if (Global_1836580 != 1)
						{
							__LIB_1__::func_990(iParam1, 0, 0);
							if (BitTest(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar18 = 0;
							while (iVar18 < 32)
							{
								iVar1[iVar18] = -1;
								iVar18++;
							}
							iVar18 = 0;
							while (iVar18 < 32)
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
									if (!__LIB_2__::func_40(bVar4, 0))
									{
										if (__LIB_3__::func_268(bVar4) || __LIB_30__::func_541(bVar4, bVar3))
										{
											bVar10 = bVar4;
											if (__LIB_1__::func_744(bVar4))
											{
												iVar1[bVar10] = iVar21;
												iVar21++;
												iVar0++;
												func_1858(&iVar1, bVar4, &iVar21, &iVar0, bVar3);
											}
										}
									}
								}
								iVar18++;
							}
						}
						if (!__LIB_2__::func_155(PLAYER::PLAYER_ID(), 0) && __LIB_2__::func_608(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							if (func_1854())
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
								}
								else
								{
									bVar4 = __LIB_0__::func_162();
								}
							}
							else
							{
								bVar4 = (iParam0[iVar18 /*42*/])->f_1;
							}
							if ((__LIB_2__::func_144(bVar4) && func_1850(bVar4, iParam2, bVar3)) && __LIB_1__::func_693(bVar4, 0, 1))
							{
								bVar10 = bVar4;
								iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
								Var7 = { __LIB_2__::func_164(bVar4) };
								if (bVar4 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar19;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(bVar4), 64);
								*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
								iVar6 = __LIB_3__::func_227(bVar4);
								sVar5 = "";
								if (iVar6 != 0)
								{
									sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
								}
								Global_1836357++;
								if ((iParam0[iVar18 /*42*/])->f_22 != -1f)
								{
									fVar11 = (iParam0[iVar18 /*42*/])->f_22;
								}
								if ((iParam0[iVar18 /*42*/])->f_31 != -1)
								{
									iVar12 = (iParam0[iVar18 /*42*/])->f_31;
								}
								if ((iParam0[iVar18 /*42*/])->f_41 != -1)
								{
									iVar13 = (iParam0[iVar18 /*42*/])->f_41;
								}
								iVar9 = (iParam0[iVar18 /*42*/])->f_9;
								if (((iParam0[iVar18 /*42*/])->f_9 != -1 || (iParam0[iVar18 /*42*/])->f_22 != -1f) || (iParam0[iVar18 /*42*/])->f_31 != -1)
								{
									if (!func_1854())
									{
										iVar16 = 1;
									}
								}
								if (iParam5 != -1)
								{
									__LIB_2__::func_773(&iVar9, &fVar11, (iParam0[iVar18 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), __LIB_1__::func_983(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar14 = (iParam0[iVar18 /*42*/])->f_2 + 1;
									if (iVar20 != iVar14)
									{
										iVar20 = iVar14;
									}
									else
									{
										iVar14 = -2;
									}
								}
								iVar17 = func_1832(bVar4, 0);
								if (bVar2)
								{
									if (__LIB_2__::func_72(bVar4, 1) && iVar1[bVar10] != -1)
									{
										iVar19 = iVar1[bVar10];
									}
									else
									{
										iVar19 = (iVar0 + iVar22);
										iVar22++;
									}
								}
								uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
								if ((iParam0[iVar18 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var23, "UW_TM", 16);
									StringIntConCat(&Var23, (iParam0[iVar18 /*42*/])->f_39, 16);
								}
								if (__LIB_1__::func_982(iParam5))
								{
									func_1830(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar9, iVar13, &Var23, (iParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								else
								{
									func_1830(bVar4, iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar9, iVar17, iVar16, fVar11, iVar12, iVar13, &Var23, (iParam0[iVar18 /*42*/])->f_40, iVar14, bParam6);
								}
								MISC::SET_BIT(&iVar15, bVar4);
								iVar19++;
							}
							iVar18++;
						}
						iVar18 = 0;
						while (iVar18 < 32)
						{
							bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							if (__LIB_1__::func_693(bVar4, 0, 1) && !BitTest(iVar15, bVar4))
							{
								bVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar18);
							}
							else
							{
								bVar4 = __LIB_0__::func_162();
							}
							if (__LIB_2__::func_144(bVar4))
							{
								if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar18), 0, 1))
								{
									bVar10 = bVar4;
									iVar8 = Global_1853348[bVar10 /*834*/].f_205.f_6;
									Var7 = { __LIB_2__::func_164(bVar4) };
									*(uParam4[iVar18 /*13*/]) = { __LIB_1__::func_696(bVar4) };
									iVar6 = __LIB_3__::func_227(bVar4);
									sVar5 = "";
									if (iVar6 != 0)
									{
										sVar5 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar6);
									}
									Global_1836357++;
									iVar17 = func_1832(bVar4, 1);
									if (bVar2)
									{
										if (__LIB_2__::func_72(bVar4, 1))
										{
											iVar19 = iVar1[iVar18];
										}
										else
										{
											iVar19 = (iVar0 + iVar22);
											iVar22++;
										}
									}
									uParam3->f_38[bVar10 /*2*/].f_1 = iVar19;
									__LIB_40__::func_729(bVar4, PLAYER::GET_PLAYER_NAME(bVar4), iParam1, uParam3, iVar19, Var7, sVar5, iVar8, iVar17, iVar16);
									iVar19++;
								}
							}
							iVar18++;
						}
						if (BitTest(uParam3->f_33, 11))
						{
							__LIB_2__::func_142(uParam3, iParam1, iParam2);
						}
						__LIB_0__::func_794(&(uParam3->f_21));
						__LIB_1__::func_975();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!BitTest(uParam3->f_33, 7))
						{
							__LIB_1__::func_974(uParam3, iParam1);
							__LIB_1__::func_824(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						__LIB_1__::func_974(uParam3, iParam1);
						if (!BitTest(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (__LIB_2__::func_141(uParam3))
						{
							Global_1836580 = 1;
						}
						__LIB_2__::func_140(uParam3);
						if (Global_1836580 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1836580 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			__LIB_1__::func_975();
			__LIB_1__::func_991(0);
			if (BitTest(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (BitTest(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_1830(bool bParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0xCEC70
{
	int iVar0;
	char* sVar1;
	if (iParam3 >= __LIB_1__::func_981() && iParam3 < __LIB_1__::func_980())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1836359)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1836580 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (BitTest(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					__LIB_0__::func_610(sParam16);
				}
				else
				{
					__LIB_0__::func_700(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_1854())
				{
					__LIB_0__::func_700("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT" /* GXT: ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT" /* GXT: ~a~ ~a~ ~1~ */);
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT" /* GXT: ~1~~a~ */);
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH" /* GXT: $~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH" /* GXT: -$~a~ */);
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						__LIB_0__::func_610(&(uParam2->f_104));
					}
					else
					{
						__LIB_0__::func_700("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					__LIB_0__::func_700("");
				}
				if (uParam2->f_108 == 6)
				{
					__LIB_0__::func_700("");
				}
				else
				{
					__LIB_0__::func_700(&sParam4);
				}
				__LIB_30__::func_990(uParam2, bParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					__LIB_0__::func_700("");
					__LIB_0__::func_700("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (__LIB_2__::func_117(uParam2))
				{
					__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_979(uParam2))
				{
					__LIB_0__::func_610("DPAD_FRIEND" /* GXT: F */);
				}
				else if (__LIB_1__::func_978(uParam2))
				{
					__LIB_0__::func_610("DPAD_CREW" /* GXT: C */);
				}
				else
				{
					__LIB_0__::func_610("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_1832(bool bParam0, bool bParam1)//Position - 0xCF002
{
	int iVar0;
	int iVar1;
	iVar0 = 116;
	if ((!bParam1 && __LIB_2__::func_703(bParam0)) && !__LIB_3__::func_362(bParam0))
	{
		iVar0 = __LIB_1__::func_259();
	}
	iVar1 = __LIB_2__::func_169(bParam0);
	if (!iVar1 == -1)
	{
		return __LIB_1__::func_357(iVar1);
	}
	return iVar0;
}

int func_1850(bool bParam0, int iParam1, bool bParam2)//Position - 0xCF69D
{
	if (iParam1 == 27)
	{
		if ((__LIB_1__::func_899(bParam0) || __LIB_1__::func_989(bParam0)) || __LIB_2__::func_124(bParam0))
		{
			return 0;
		}
	}
	if (!__LIB_1__::func_988(bParam0))
	{
		return 0;
	}
	if (!__LIB_3__::func_268(bParam0) && !__LIB_30__::func_541(bParam0, bParam2))
	{
		return 0;
	}
	return 1;
}

int func_1854()//Position - 0xCF78C
{
	switch (__LIB_2__::func_608(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		default:
	}
	switch (__LIB_1__::func_592(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (__LIB_3__::func_362(PLAYER::PLAYER_ID()))
	{
		switch (__LIB_2__::func_608(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (__LIB_3__::func_239(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_1858(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xCF9DB
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (__LIB_1__::func_693(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			bVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!__LIB_2__::func_40(bVar1, 0))
			{
				if (__LIB_3__::func_268(bVar1) || __LIB_30__::func_541(bVar1, bParam4))
				{
					if (__LIB_2__::func_759(bVar1, bParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_1908(int iParam0)//Position - 0xD14B8
{
	if (iParam0 == 28)
	{
		if ((__LIB_2__::func_703(PLAYER::PLAYER_ID()) && !__LIB_3__::func_362(PLAYER::PLAYER_ID())) && !__LIB_3__::func_239(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) && __LIB_3__::func_362(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_1740(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_1911(int iParam0)//Position - 0xD1565
{
	MISC::CLEAR_BIT(&(Local_165.f_83), iParam0);
}

void func_1912(bool bParam0)//Position - 0xD1578
{
	Local_165.f_1.f_15 = bParam0;
}

void func_1913(bool bParam0)//Position - 0xD1589
{
	Local_165.f_1.f_14 = bParam0;
}

int func_1916(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0xD1675
{
	if (__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0) || __LIB_2__::func_155(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_3__::func_358(PLAYER::PLAYER_ID()) || __LIB_3__::func_362(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_1918(sParam3, sParam4, 1);
		}
		if (__LIB_2__::func_38(26, -1))
		{
			__LIB_2__::func_70(26, -1);
		}
		return 1;
	}
	if (__LIB_0__::func_864(&(Global_1836844.f_18)))
	{
		if (!__LIB_0__::func_937(&(Global_1836844.f_18), 7500, 0))
		{
			return 0;
		}
		__LIB_0__::func_794(&(Global_1836844.f_18));
	}
	if (__LIB_1__::func_904())
	{
		if (bParam2)
		{
			func_1918(sParam3, sParam4, 0);
		}
		if (__LIB_2__::func_38(26, -1))
		{
			__LIB_2__::func_70(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_1918(sParam3, sParam4, 1);
		}
		if (__LIB_2__::func_38(26, -1))
		{
			__LIB_2__::func_70(26, -1);
		}
		return 1;
	}
	return 0;
}

void func_1918(char* sParam0, char* sParam1, bool bParam2)//Position - 0xD177C
{
	if ((!BitTest(Global_1836844.f_1, 2) && !__LIB_1__::func_899(PLAYER::PLAYER_ID())) && !__LIB_2__::func_124(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1" /* GXT: EVENT OVER */;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2" /* GXT: Not enough players in the session */;
			}
			else
			{
				sParam1 = "FMEVEN_NUM3" /* GXT: Not enough players available in the session */;
			}
		}
		func_1658(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1836844.f_1), 2);
	}
}

int func_1919()//Position - 0xD17F6
{
	return Local_165.f_1.f_18;
}

void func_1922(int iParam0)//Position - 0xD1826
{
	Local_709[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = iParam0;
}

void func_1923(int iParam0)//Position - 0xD1839
{
	MISC::SET_BIT(&bLocal_710, iParam0);
}

int func_1929(int iParam0)//Position - 0xD18B6
{
	return Local_709[iParam0 /*4*/];
}

bool func_1930()//Position - 0xD18C5
{
	return Local_165.f_1.f_6;
}

void func_1931()//Position - 0xD18D4
{
	if (BitTest(Global_1836844.f_1, 6))
	{
		__LIB_2__::func_150();
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 6);
	}
	if (!BitTest(Global_1836844.f_1, 7))
	{
		if (BitTest(Global_1836844.f_1, 4) || BitTest(Global_1836844.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 7);
				__LIB_1__::func_707("FME_PASINT" /* GXT: You will not be able to take part in this event in Passive Mode. */, 30000);
				__LIB_1__::func_752(1);
			}
		}
		else if (BitTest(Global_1836844.f_1, 17))
		{
			if (__LIB_0__::func_945() && !__LIB_1__::func_941())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 17);
				MISC::SET_BIT(&(Global_1836844.f_1), 16);
			}
		}
	}
	if (!BitTest(Global_1836844.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !BitTest(Global_2815059.f_836, 2)) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !Global_75485) && !Global_60335) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_2__::func_756())
			{
				__LIB_1__::func_707("AMEV_GA_RP" /* GXT: When in an active Gang Attack location, some other players may not be attackable. */, -1);
				if (__LIB_2__::func_608(PLAYER::PLAYER_ID()) != 200)
				{
					__LIB_1__::func_752(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (__LIB_1__::func_953(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
		}
	}
	if (BitTest(Global_1836844.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1836844.f_1), 9);
			__LIB_2__::func_67(0);
			__LIB_1__::func_707("FME_TBL00" /* GXT: Job & Activity Triggers have been temporarily hidden as you are now an active participant in the current Freemode Event. They will return once the Event is over. */, -1);
			__LIB_1__::func_752(1);
		}
	}
	if (__LIB_2__::func_703(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(Global_1836844.f_1, 18))
		{
			if ((__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21) && BitTest(Global_1836844.f_1, 20)) && !BitTest(Global_1836844.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1836844.f_1), 18);
			}
		}
		else if (BitTest(Global_1836844.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !__LIB_1__::func_515()) && __LIB_1__::func_693(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !__LIB_2__::func_14())
			{
				MISC::CLEAR_BIT(&(Global_1836844.f_1), 18);
				MISC::SET_BIT(&(Global_1836844.f_1), 19);
				__LIB_1__::func_707("AMTT_RPAS" /* GXT: You have been removed from the current event because you triggered a Time Trial. */, -1);
				__LIB_1__::func_752(1);
			}
		}
	}
	if (((((__LIB_2__::func_703(PLAYER::PLAYER_ID()) && !__LIB_1__::func_899(PLAYER::PLAYER_ID())) && __LIB_1__::func_592(PLAYER::PLAYER_ID()) != 146) && !__LIB_2__::func_124(PLAYER::PLAYER_ID())) && !__LIB_3__::func_369(PLAYER::PLAYER_ID())) && !__LIB_2__::func_77())
	{
		if (__LIB_2__::func_136(__LIB_1__::func_592(PLAYER::PLAYER_ID())))
		{
			PLAYER::SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (!BitTest(Global_1836844.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1836844.f_1), 22);
		}
		if (__LIB_1__::func_958(PLAYER::PLAYER_ID()) || __LIB_2__::func_56())
		{
			if (!BitTest(Global_1836844.f_1, 10))
			{
				if (__LIB_2__::func_149(__LIB_1__::func_592(PLAYER::PLAYER_ID())))
				{
					if (__LIB_1__::func_931(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					if (!Global_2653189)
					{
						__LIB_2__::func_135(1);
						MISC::SET_BIT(&(Global_1836844.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 10);
			}
		}
		if (__LIB_1__::func_953(PLAYER::PLAYER_ID()))
		{
			if (!BitTest(Global_1836844.f_1, 11))
			{
				if (!Global_100493.f_8)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 12);
					__LIB_2__::func_57(1);
				}
				if (!__LIB_1__::func_734())
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 13);
					__LIB_1__::func_951();
				}
				if (!Global_2653189)
				{
					MISC::SET_BIT(&(Global_1836844.f_1), 14);
					if (__LIB_1__::func_931(0) && !Global_2653189)
					{
						MISC::SET_BIT(&(Global_1836844.f_1), 9);
					}
					__LIB_2__::func_135(1);
				}
				MISC::SET_BIT(&(Global_1836844.f_1), 11);
			}
		}
		else
		{
			__LIB_3__::func_270(0);
		}
	}
	else
	{
		__LIB_3__::func_270(1);
	}
	__LIB_2__::func_786();
	if (__LIB_2__::func_162(__LIB_1__::func_592(PLAYER::PLAYER_ID())) && !BitTest(Global_1836844.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1836844.f_1), 21);
	}
	if (((__LIB_0__::func_945() && !__LIB_1__::func_941()) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) || __LIB_0__::func_979(PLAYER::PLAYER_ID(), 25))
	{
		if (!BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
		}
	}
	else if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 10);
	}
}

void func_1957(int iParam0)//Position - 0xD2554
{
	MISC::SET_BIT(&uLocal_711, iParam0);
}

void func_1959(int iParam0)//Position - 0xD2590
{
	MISC::CLEAR_BIT(&uLocal_711, iParam0);
}

void func_1966()//Position - 0xD2672
{
	int iVar0;
	bool bVar1;
	if (func_1930() != -1)
	{
		if (func_1584(func_1930()) != 10)
		{
			func_1993();
		}
	}
	__LIB_3__::func_0();
	__LIB_1__::func_916(146);
	func_1973(146, 0, BitTest(bLocal_710, 16));
	func_1592(0);
	__LIB_1__::func_963(0);
	func_780();
	func_1698(0);
	if (func_48())
	{
		func_47(0);
	}
	if (func_41() >= 0 && Local_713[func_41() /*3*/] >= 0)
	{
		if (!__LIB_3__::func_365(Local_713[func_41() /*3*/]))
		{
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_713[func_41() /*3*/].f_2, false, 0f);
		}
	}
	func_45();
	func_1660();
	if (iLocal_752 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_752);
		AUDIO::RELEASE_SOUND_ID(iLocal_752);
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_SFX1/BEAST");
	if (func_1930() != -1)
	{
		if (func_41() != -1)
		{
			if (BitTest(uLocal_726, func_1930()))
			{
				if (BitTest(uLocal_725, func_41()))
				{
					func_757();
				}
			}
		}
	}
	if (func_1930() == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		__LIB_2__::func_135(0);
		__LIB_15__::func_296(1);
		__LIB_28__::func_835(0);
		Global_2815059.f_5120 = __LIB_0__::func_162();
	}
	func_754();
	if (__LIB_0__::func_959())
	{
		Local_169.f_5 = 5;
	}
	else if (func_751(20))
	{
		Local_169.f_5 = 6;
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() == func_1930())
	{
		if (func_1919() == 3)
		{
			Local_169.f_5 = 1;
		}
		else
		{
			Local_169.f_5 = 2;
		}
	}
	else if (func_1919() == 4 || func_1919() == 5)
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == func_7() || NETWORK::PARTICIPANT_ID_TO_INT() == func_734())
		{
			Local_169.f_5 = 1;
		}
		else
		{
			Local_169.f_5 = 3;
		}
	}
	else
	{
		Local_169.f_5 = 2;
	}
	if (!Global_262145.f_11875 /* Tunable: HUNT_THE_BEAST_DISABLE_SHARE_CASH */)
	{
		if (Local_169.f_6 > 0)
		{
			if (Local_169.f_5 == 1)
			{
				__LIB_3__::func_156();
			}
		}
	}
	Local_169.f_0 = Local_165.f_84;
	Local_169.f_1 = Local_165.f_85;
	Local_169.f_4 = iLocal_168;
	Local_169.f_3 = iLocal_167;
	Local_169.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_169.f_9);
	if (iLocal_730 > 30000)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BST_STOP");
	}
	if (func_1930() > -1)
	{
		bVar1 = false;
		while (bVar1 < 32)
		{
			if (BitTest(Local_709[func_1930() /*4*/].f_2, bVar1))
			{
				iVar0++;
			}
			bVar1++;
		}
		__LIB_12__::func_543(Local_169, iVar0, -1, -1, -1, -1, -1);
	}
	__LIB_3__::func_157(0);
	func_1662();
	__LIB_0__::func_202();
}

void func_1973(int iParam0, bool bParam1, int iParam2)//Position - 0xD2BEC
{
	var uVar0;
	int iVar1;
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 13);
		}
		if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 14);
		}
	}
	if (BitTest(Global_1836844.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1836844.f_1), 21);
	}
	__LIB_2__::func_153();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = __LIB_2__::func_123(__LIB_1__::func_592(PLAYER::PLAYER_ID()));
		__LIB_1__::func_460(__LIB_1__::func_957(iParam0), 0);
	}
	else
	{
		if ((iParam2 && PLAYER::PLAYER_ID() != -1) && __LIB_1__::func_136(PLAYER::PLAYER_ID()) >= 12)
		{
			__LIB_2__::func_69(2549, -1);
			iVar1 = __LIB_1__::func_360(2549, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1836870, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1836870, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1836870, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1836870, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1836870, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1836870, 5);
			}
		}
		__LIB_2__::func_30();
		__LIB_2__::func_29();
		__LIB_2__::func_28();
		if ((!__LIB_3__::func_358(PLAYER::PLAYER_ID()) && !__LIB_3__::func_357(PLAYER::PLAYER_ID())) && !__LIB_1__::func_632())
		{
			func_1754();
		}
		__LIB_2__::func_23();
		if (!BitTest(Global_1943920.f_3, 0) && !BitTest(Global_1943920.f_3, 1))
		{
			__LIB_2__::func_150();
		}
		__LIB_2__::func_22();
		MISC::CLEAR_BIT(&(Global_2815059.f_1811), 2);
		__LIB_1__::func_915();
		__LIB_1__::func_912();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(joaat("DisableSpectateScript")))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(joaat("DisableSpectateScript"));
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 21)) && !__LIB_0__::func_979(PLAYER::PLAYER_ID(), 25)) && !__LIB_1__::func_907(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_2__::func_135(0);
			__LIB_2__::func_57(0);
			if (!bParam1)
			{
				__LIB_2__::func_21();
			}
		}
	}
	if (iParam2 && !bParam1)
	{
		if (__LIB_2__::func_38(26, -1))
		{
			Global_2727723 = -1;
			__LIB_2__::func_70(26, -1);
		}
	}
	if (!__LIB_2__::func_151())
	{
		Global_2787396 = 1;
	}
}

void func_1993()//Position - 0xD3233
{
	if (__LIB_12__::func_99())
	{
		__LIB_2__::func_719(1, 0);
		__LIB_0__::func_857();
	}
	if (__LIB_1__::func_584() || __LIB_3__::func_366())
	{
		__LIB_0__::func_986(0);
		__LIB_1__::func_211(0);
	}
	__LIB_2__::func_66(59);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastIntroScene"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("BeastIntroScene");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastTransition"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("BeastTransition");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BeastLaunch"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("BeastLaunch");
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_741))
	{
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iLocal_741);
		iLocal_741 = -1;
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@MP_FM_EVENT@INTRO", "BEAST_TRANSFORM", 3))
	{
		ENTITY::STOP_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), "BEAST_TRANSFORM", "ANIM@MP_FM_EVENT@INTRO", -8f);
		STREAMING::REMOVE_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
	}
	else
	{
		STREAMING::REMOVE_ANIM_DICT("ANIM@MP_FM_EVENT@INTRO");
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_742))
	{
		AUDIO::STOP_SOUND(iLocal_742);
		iLocal_742 = -1;
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	STREAMING::REMOVE_ANIM_DICT("move_m@GEneric");
	HUD::THEFEED_SHOW();
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	__LIB_16__::func_633();
	__LIB_0__::func_671(0);
	__LIB_1__::func_91();
	__LIB_0__::func_794(&uLocal_746);
	__LIB_3__::func_351();
	GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(true);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	PAD::ENABLE_ALL_CONTROL_ACTIONS(2 /*FRONTEND_CONTROL*/);
	__LIB_6__::func_410(PLAYER::PLAYER_ID(), 1, 4194304, 0);
	__LIB_1__::func_913();
	__LIB_2__::func_43();
	func_1568(10);
}

void func_1998(struct<21> Param0)//Position - 0xD3412
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_1__::func_32(Param0.f_0);
	__LIB_0__::func_935(iVar0, Param0);
	__LIB_0__::func_895(0, -1, 0);
	__LIB_3__::func_468(146);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_165, 86, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_709, 129, 0);
	if (!__LIB_0__::func_934())
	{
		func_1966();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			iVar1 = 0;
			func_2000(iVar1);
			func_1999(0);
			STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_165.f_84), &(Local_165.f_85));
		}
		Local_169.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_169.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_1922(0);
	}
	else
	{
		func_1966();
	}
}

void func_1999(int iParam0)//Position - 0xD34B1
{
	Local_165.f_1.f_1 = iParam0;
}

void func_2000(int iParam0)//Position - 0xD34C2
{
	Local_165.f_1.f_8 = iParam0;
}

