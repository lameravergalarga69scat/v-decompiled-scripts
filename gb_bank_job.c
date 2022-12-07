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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = -1;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	float fLocal_116 = 0f;
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
	struct<20> Local_130[32];
	struct<3> Local_131[32];
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 1065353216;
	var uLocal_135 = 1065353216;
	var uLocal_136 = 1;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = -1;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = -1;
	var uLocal_151 = -1;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	struct<8> Local_155[14];
	struct<4> Local_156 = { 0, 0, 0, 0 } ;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int iLocal_160[4] = { 0, 0, 0, 0 };
	int iLocal_161[4] = { 0, 0, 0, 0 };
	int iLocal_162 = 0;
	int iLocal_163[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	bool bLocal_166 = 0;
	var uLocal_167[1] = { 0 };
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	var uLocal_176[1] = { 0 };
	int iLocal_177 = 0;
	var uLocal_178 = 16;
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
	int iLocal_343 = 0;
	struct<77> Local_344 = { 0, 1, 0, 0, 0, 0, 0, 4, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0 } ;
	struct<13> Local_345[32];
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	struct<2> Local_350 = { 0, 0 } ;
	int* iLocal_351 = NULL;
	var uLocal_352 = -1;
	int iLocal_353[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	int iLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 12;
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
	var uLocal_1068 = 1065353216;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 3;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 3;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 3;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	int iLocal_1087 = 0;
	int iLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = -1;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 1000;
	var uLocal_1099 = 1000;
	var uLocal_1100 = 0;
	struct<21> Local_1101 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_101 = 3f;
	fLocal_102 = 0f;
	fLocal_103 = 2f;
	fLocal_104 = 100f;
	iLocal_114 = -1;
	fLocal_116 = 0.5f;
	iLocal_177 = -1;
	iLocal_357 = -1;
	iLocal_362 = -1;
	iLocal_363 = -1;
	iLocal_364 = -1;
	iLocal_1088 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!func_2058(ScriptParam_1101))
			{
				func_1991(0, 1);
				func_1929();
			}
		}
		else
		{
			func_1929();
		}
	}
	else
	{
		func_1991(0, 1);
		func_1929();
	}
	while (true)
	{
		__LIB_0__::func_671();
		if (__LIB_41__::func_158(1))
		{
			func_1991(0, 1);
			func_1929();
		}
		if (__LIB_6__::func_949())
		{
			func_1991(0, 1);
			func_1929();
		}
		bLocal_166 = Global_2703735.f_4.f_10;
		func_1912();
		func_1909();
		func_1901();
		switch (func_1900(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1899() == 1)
				{
					if (func_1897())
					{
						func_1896(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			case 1:
				if (func_1899() == 1)
				{
					func_169();
				}
				else if (func_1899() == 3)
				{
					func_1896(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			case 3:
				func_1929();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (__LIB_10__::func_923())
			{
				func_1991(0, 1);
				func_167(3);
			}
			switch (func_1899())
			{
				case 0:
					if (func_166())
					{
						func_167(1);
					}
					break;
				case 1:
					func_1();
					break;
				case 3:
					func_1929();
					break;
				}
		}
	}
}

void func_1()//Position - 0x1F0
{
	int iVar0;
	var uVar1;
	if (func_165() > 0)
	{
		iVar0 = 0;
		while (iVar0 < __LIB_0__::func_109())
		{
			func_158(iVar0);
			iVar0++;
		}
		func_154();
		func_116();
		func_111();
		func_86();
		func_83();
		func_78();
	}
	switch (func_165())
	{
		case 0:
			if (Local_344.f_64 == -1)
			{
				STATS::PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(&(Local_344.f_75), &(Local_344.f_76));
				if (func_8(242, &uVar1))
				{
					Local_344.f_64 = uVar1;
					func_7(1);
				}
				else
				{
					func_7(8);
				}
			}
			break;
		case 1:
			if (func_6(2))
			{
				func_7(2);
			}
			if (func_6(4))
			{
				func_7(4);
			}
			break;
		case 2:
			if (func_5())
			{
				func_7(6);
			}
			if (func_6(3))
			{
				func_7(3);
			}
			break;
		case 3:
			if (func_5())
			{
				func_7(6);
			}
			if (func_6(4))
			{
				func_7(4);
			}
			break;
		case 4:
			if (func_5())
			{
				func_7(6);
			}
			break;
		case 6:
			if (func_3())
			{
				func_7(7);
				func_2(4);
			}
			break;
		case 7:
			if (func_6(0))
			{
				func_7(8);
			}
			break;
		case 8:
			func_167(3);
			break;
	}
}

void func_2(int iParam0)//Position - 0x338
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_344.f_6 = iParam0;
}

int func_3()//Position - 0x352
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (!func_4(iVar0, 2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_4(int iParam0, int iParam1)//Position - 0x37F
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Local_344.f_7[iParam0 /*4*/].f_1[iVar0], iVar1);
}

int func_5()//Position - 0x3A7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (func_4(iVar0, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_6(int iParam0)//Position - 0x3D3
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(Local_344.f_1[iVar0], iVar1);
}

void func_7(int iParam0)//Position - 0x3F5
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_344.f_5 = iParam0;
}

int func_8(int iParam0, var uParam1)//Position - 0x40F
{
	int iVar0[10];
	int iVar1[10];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	bool bVar9;
	bool bVar10;
	iVar5 = __LIB_0__::func_582();
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar6 = iVar2;
		if (__LIB_0__::func_154(iVar6, 1, 1))
		{
			bVar9 = ((__LIB_0__::func_603(iVar6) != iVar5 || iVar5 == __LIB_0__::func_160()) && iVar6 != PLAYER::PLAYER_ID());
			iVar4 = 0;
			while (iVar4 < 10)
			{
				if (iVar0[iVar4] != -1)
				{
					Var7 = { __LIB_28__::func_705(iParam0, iVar4) };
					if (!__LIB_0__::func_86(Var7))
					{
						if (HUD::DOES_BLIP_EXIST(Global_2678393[iVar6]))
						{
							Var8 = { HUD::GET_BLIP_COORDS(Global_2678393[iVar6]) };
							Var8.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var8.f_0, Var8.f_1);
						}
						else
						{
							Var8 = { func_13(iVar6) };
						}
						if (!__LIB_0__::func_86(Var8))
						{
							if (SYSTEM::VDIST2(Var8, Var7) < (__LIB_24__::func_775(iParam0, bVar9) * __LIB_24__::func_775(iParam0, bVar9)))
							{
								iVar0[iVar4] = -1;
								if (!bVar9)
								{
									bVar10 = true;
								}
							}
						}
					}
					else
					{
						iVar0[iVar4] = -1;
					}
				}
				iVar4++;
			}
		}
		iVar2++;
	}
	iVar4 = 0;
	while (iVar4 < 10)
	{
		if (iVar0[iVar4] != -1 && !__LIB_0__::func_86(__LIB_28__::func_705(iParam0, iVar4)))
		{
			if (!__LIB_0__::func_114(iParam0, iVar4))
			{
				if (!func_9(iParam0, iVar4))
				{
					iVar1[iVar3] = iVar4;
					iVar3++;
				}
			}
		}
		iVar4++;
	}
	if (iVar3 > 0)
	{
		*uParam1 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar3)];
		return 1;
	}
	else if (bVar10)
	{
		*uParam1 = -1;
	}
	else
	{
		*uParam1 = -2;
	}
	return 0;
}

int func_9(int iParam0, int iParam1)//Position - 0x5B2
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 240:
			if (HUD::DOES_BLIP_EXIST(Global_2678393[PLAYER::PLAYER_ID()]))
			{
				Var0 = { HUD::GET_BLIP_COORDS(Global_2678393[PLAYER::PLAYER_ID()]) };
				Var0.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Var0.f_0, Var0.f_1);
			}
			else
			{
				Var0 = { func_13(PLAYER::PLAYER_ID()) };
			}
			if (SYSTEM::VDIST2(__LIB_28__::func_705(iParam0, iParam1), Var0) > (__LIB_24__::func_774(iParam0) * __LIB_24__::func_774(iParam0)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

Vector3 func_13(int iParam0)//Position - 0x70D
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_66(__LIB_0__::func_85(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_1__::func_986(__LIB_1__::func_987(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_0__::func_304(iParam0))
	{
		Var1 = { __LIB_19__::func_559(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_2__::func_81(iParam0))
	{
		iVar2 = __LIB_1__::func_259(iParam0);
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
		if (__LIB_2__::func_87(iParam0))
		{
			Var1 = { __LIB_2__::func_86(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_0__::func_85(iParam0);
}

void func_66(struct<3> Param0, var uParam1)//Position - 0x2102
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_67(Param0, iVar0, 0))
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
		if (func_67(Param0, iVar0, 0))
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
		if (func_67(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_67(Param0, iVar0, 0))
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
	if (func_67(Param0, iVar0, 0))
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

int func_67(struct<3> Param0, int iParam1, float fParam2)//Position - 0x2246
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
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_67(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_67(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_67(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

void func_78()//Position - 0x36D9
{
	if (!func_6(12))
	{
		__LIB_28__::func_804(&(Local_344.f_72), func_81(), 0, 100f);
		func_79(12);
	}
}

void func_79(int iParam0)//Position - 0x3704
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_344.f_1[iVar0]), iVar1);
}

Vector3 func_81()//Position - 0x3778
{
	switch (func_82())
	{
		case 0:
			return 229.197f, 213.7629f, 104.5252f;
		case 1:
			return -1215.3552f, -325.6002f, 36.6804f;
		case 2:
			return 1175.5978f, 2698.3982f, 36.9947f;
		default:
	}
	return 0f, 0f, 0f;
}

int func_82()//Position - 0x37D4
{
	return Local_344.f_64;
}

void func_83()//Position - 0x37E1
{
	bool bVar0;
	bVar0 = func_85();
	if (bVar0 != -1)
	{
		if (func_84(bVar0) == 13)
		{
			func_79(4);
		}
	}
}

int func_84(bool bParam0)//Position - 0x3805
{
	return Local_344.f_24[bParam0 /*2*/].f_1;
}

int func_85()//Position - 0x3818
{
	switch (func_82())
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 3;
		default:
	}
	return -1;
}

void func_86()//Position - 0x3848
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		switch (func_110(iVar2))
		{
			case 0:
				func_109(iVar2, 1);
				break;
			case 1:
				Var0 = { func_108(iVar2) };
				if (!__LIB_0__::func_86(Var0) && __LIB_0__::func_584(func_107(iVar2)))
				{
					if (__LIB_18__::func_220(&(Local_344.f_53[iVar2 /*2*/]), func_107(iVar2), Var0, func_105(iVar2), 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						MISC::CLEAR_AREA(Var0, 5f, false, false, false, true);
						iVar1 = NETWORK::NET_TO_VEH(Local_344.f_53[iVar2 /*2*/]);
						NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_344.f_53[iVar2 /*2*/], true);
						func_87(iVar2, iVar1);
						func_109(iVar2, 3);
						return;
					}
				}
				break;
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_53[iVar2 /*2*/]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_344.f_53[iVar2 /*2*/]), false))
				{
					func_109(iVar2, 4);
				}
				break;
		}
		iVar2++;
	}
}

void func_87(int iParam0, int iParam1)//Position - 0x3949
{
	if (func_101(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, true);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, true);
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, 0, 0);
		return;
	}
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 2, true, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 3, true, false);
					break;
				case 1:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 1, true, false);
					VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
					break;
				case 2:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 0, true, false);
					ENTITY::SET_ENTITY_HEALTH(iParam1, 100, 0);
					VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 2, true, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 3, true, false);
					break;
				case 1:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 0, true, false);
					ENTITY::SET_ENTITY_HEALTH(iParam1, 100, 0);
					VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
					break;
				case 2:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 0, true, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 1, true, false);
					VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 2, true, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 3, true, false);
					break;
				case 1:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 0, true, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 1, true, false);
					ENTITY::SET_ENTITY_HEALTH(iParam1, 100, 0);
					VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
					break;
				case 2:
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 0, true, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 1, true, false);
					VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
					break;
			}
			break;
	}
	__LIB_38__::func_960(iParam1, 0, 0);
}

int func_101(int iParam0)//Position - 0x3E1A
{
	switch (iParam0)
	{
		case 3:
		case 4:
			return 1;
		default:
	}
	return 0;
}

float func_105(int iParam0)//Position - 0x40B6
{
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 7f;
				case 1:
					return 188.799f;
				case 2:
					return 41.599f;
				case 3:
					return 32.5997f;
				case 4:
					return 113.3993f;
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 278.8f;
				case 1:
					return 288.399f;
				case 2:
					return 275.599f;
				case 3:
					return 279.3998f;
				case 4:
					return 288.8f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 278.4f;
				case 1:
					return 65.799f;
				case 2:
					return 278.399f;
				case 3:
					return 242.5996f;
				case 4:
					return 97.9997f;
				default:
			}
			break;
	}
	return 0f;
}

int func_107(int iParam0)//Position - 0x41E4
{
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("speedo");
				case 1:
					return joaat("police3");
				case 2:
					return joaat("police3");
				case 3:
					return joaat("rumpo3");
				case 4:
					return joaat("rumpo3");
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("speedo");
				case 1:
					return joaat("police3");
				case 2:
					return joaat("police3");
				case 3:
					return joaat("rumpo3");
				case 4:
					return joaat("rumpo3");
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("speedo");
				case 1:
					return joaat("sheriff");
				case 2:
					return joaat("sheriff");
				case 3:
					return joaat("rumpo3");
				case 4:
					return joaat("rumpo3");
				default:
			}
			break;
	}
	return joaat("ex_prop_exec_crashedp");
}

Vector3 func_108(int iParam0)//Position - 0x42FC
{
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 226.847f, 218.49f, 104.55f;
				case 1:
					return 219.749f, 210.914f, 104.53f;
				case 2:
					return 222.776f, 204.08f, 104.516f;
				case 3:
					return -1064.9246f, -1567.9427f, 3.5397f;
				case 4:
					return -1275.0117f, -1155.562f, 5.2059f;
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1210.894f, -321.597f, 36.777f;
				case 1:
					return -1219.372f, -318.47f, 36.516f;
				case 2:
					return -1225.566f, -325.634f, 36.526f;
				case 3:
					return 975.0986f, -1712.0947f, 29.2499f;
				case 4:
					return 835.1948f, -2486.0574f, 23.5774f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1181.158f, 2696.452f, 36.969f;
				case 1:
					return 1177.984f, 2690.516f, 36.82f;
				case 2:
					return 1171.247f, 2690.824f, 36.857f;
				case 3:
					return -462.231f, 640.273f, 143.189f;
				case 4:
					return -398.3623f, 388.7956f, 107.3037f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_109(int iParam0, int iParam1)//Position - 0x44A8
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_344.f_53[iParam0 /*2*/].f_1 = iParam1;
}

int func_110(int iParam0)//Position - 0x44C8
{
	return Local_344.f_53[iParam0 /*2*/].f_1;
}

void func_111()//Position - 0x44DB
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	if (func_6(8))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Var2 = { func_115(iVar0) };
		if (!__LIB_0__::func_86(Var2))
		{
			iVar3 = func_114(iVar0);
			if (__LIB_0__::func_584(iVar3))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_66[iVar0]))
				{
					if (__LIB_1__::func_262(&(Local_344.f_66[iVar0]), iVar3, Var2, 1, 1, 1, 1, 1, 0, 0))
					{
						iVar4 = NETWORK::NET_TO_ENT(Local_344.f_66[iVar0]);
						ENTITY::SET_ENTITY_ROTATION(iVar4, func_112(iVar0), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(iVar4, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
						iVar1++;
					}
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 >= 1)
	{
		func_79(8);
	}
}

Vector3 func_112(int iParam0)//Position - 0x459B
{
	switch (func_82())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -158f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, 0f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_114(int iParam0)//Position - 0x4690
{
	switch (func_82())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("hei_prop_heist_sec_door");
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("hei_prop_heist_sec_door");
				default:
			}
			break;
	}
	return 0;
}

Vector3 func_115(int iParam0)//Position - 0x46DE
{
	switch (func_82())
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1211.261f, -334.56f, 37.882f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1175.542f, 2710.861f, 38.227f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_116()//Position - 0x4742
{
	struct<3> Var0;
	int iVar1;
	bool bVar2;
	bVar2 = false;
	while (bVar2 < 14)
	{
		iVar1 = func_84(bVar2);
		if (iVar1 > 1 && iVar1 < 13)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_24[bVar2 /*2*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_344.f_24[bVar2 /*2*/]), false))
				{
					func_153(bVar2, 13);
				}
				else
				{
					func_150(bVar2);
				}
			}
			else
			{
				func_153(bVar2, 13);
			}
		}
		switch (iVar1)
		{
			case 0:
				func_153(bVar2, 1);
				break;
			case 1:
				Var0 = { func_149(bVar2) };
				if (!__LIB_0__::func_86(Var0) && __LIB_0__::func_584(func_148(bVar2)))
				{
					if (__LIB_1__::func_263(&(Local_344.f_24[bVar2 /*2*/]), 26, func_148(bVar2), Var0, func_147(bVar2), 1, 1, 1))
					{
						NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_344.f_24[bVar2 /*2*/], true);
						func_137(bVar2, NETWORK::NET_TO_PED(Local_344.f_24[bVar2 /*2*/]), Var0);
						func_153(bVar2, func_136(bVar2));
						return;
					}
				}
				break;
			case 4:
				if (!func_135(bVar2))
				{
					if (func_165() < 3 && func_6(5))
					{
						func_153(bVar2, 12);
					}
					else if (func_6(3))
					{
						func_153(bVar2, 5);
					}
				}
				break;
			case 2:
				if (func_133(bVar2))
				{
					if (func_132())
					{
						func_153(bVar2, 3);
					}
					else if (func_6(6))
					{
						func_153(bVar2, 6);
					}
				}
				break;
			case 5:
				if (func_131(bVar2))
				{
					func_153(bVar2, 11);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_24[2 /*2*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_344.f_24[2 /*2*/]), false))
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_344.f_24[2 /*2*/]));
					}
				}
				break;
			case 6:
				if (func_133(bVar2))
				{
					if (func_132())
					{
						func_153(bVar2, 3);
					}
					else if (__LIB_0__::func_530(NETWORK::NET_TO_PED(Local_344.f_24[bVar2 /*2*/]), func_130(bVar2), 2f, 1))
					{
						func_153(bVar2, 9);
					}
				}
				break;
			case 8:
				if ((!func_133(bVar2) && func_165() < 3) && func_6(5))
				{
					func_153(bVar2, 3);
				}
				else if (func_128(bVar2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_126(bVar2)) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(func_126(bVar2)), false))
					{
						func_153(bVar2, 3);
					}
					if (func_124(bVar2) || (func_123(bVar2) && __LIB_2__::func_47(&uLocal_348, 1000, 0)))
					{
						func_153(bVar2, 9);
					}
				}
				else if (func_120())
				{
					func_153(bVar2, 3);
				}
				break;
			case 7:
				if (func_128(bVar2))
				{
					if (func_6(10))
					{
						func_153(bVar2, 3);
					}
				}
				break;
			case 9:
				if (func_133(bVar2) && func_132())
				{
					func_153(bVar2, 3);
				}
				if (func_119(bVar2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_118(bVar2)) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(func_118(bVar2)), false))
					{
						func_153(bVar2, 8);
					}
				}
				else if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_126(bVar2)) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(func_126(bVar2)), false)) || (func_133(bVar2) && func_6(13)))
				{
					if (func_117(bVar2))
					{
						func_153(bVar2, 3);
					}
					else if (__LIB_2__::func_47(&(Local_344.f_70), 2000, 0))
					{
						func_153(bVar2, 7);
					}
				}
				break;
			case 13:
				break;
		}
		bVar2++;
	}
}

int func_117(bool bParam0)//Position - 0x4AE3
{
	if (func_128(bParam0))
	{
		switch (func_82())
		{
			case 1:
				switch (bParam0)
				{
					case 2:
						return 0;
					default:
				}
				break;
			case 2:
				switch (bParam0)
				{
					case 3:
						return 0;
					default:
				}
				break;
			}
	}
	return 1;
}

int func_118(bool bParam0)//Position - 0x4B32
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 2:
					return Local_344.f_24[7 /*2*/];
				default:
			}
			break;
	}
	return -1;
}

int func_119(bool bParam0)//Position - 0x4B65
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 2:
					return func_84(7) != 13;
				default:
			}
			break;
	}
	return 0;
}

int func_120()//Position - 0x4B98
{
	if (func_82() == 0)
	{
		return func_6(7);
	}
	return 0;
}

int func_123(bool bParam0)//Position - 0x4C54
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 2:
					return func_84(7) == 11;
				default:
			}
			break;
	}
	return 0;
}

int func_124(bool bParam0)//Position - 0x4C87
{
	if (func_128(bParam0))
	{
		switch (func_82())
		{
			case 0:
				return func_6(7);
			case 1:
				switch (bParam0)
				{
					case 1:
						return func_6(7);
					case 2:
						return (func_125() > 1 && __LIB_2__::func_47(&uLocal_346, 2000, 0));
					default:
				}
				break;
			case 2:
				switch (bParam0)
				{
					case 2:
						return func_6(7);
					case 3:
						return (func_125() > 1 && __LIB_2__::func_47(&uLocal_346, 2000, 0));
					default:
				}
				break;
			}
	}
	return 0;
}

int func_125()//Position - 0x4D2A
{
	return Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/].f_12;
}

int func_126(bool bParam0)//Position - 0x4D3D
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 1:
					return func_127();
				case 2:
					if (func_123(bParam0))
					{
						return func_118(bParam0);
					}
					return Local_344.f_24[4 /*2*/];
				case 3:
					return Local_344.f_24[5 /*2*/];
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 1:
					return Local_344.f_24[5 /*2*/];
				case 2:
					return Local_344.f_24[6 /*2*/];
				case 3:
					return func_127();
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 1:
					return func_127();
				case 2:
					return Local_344.f_24[4 /*2*/];
				case 3:
					return Local_344.f_24[7 /*2*/];
				default:
			}
			break;
	}
	return -1;
}

int func_127()//Position - 0x4E1E
{
	switch (func_82())
	{
		case 0:
			return Local_344.f_53[2 /*2*/];
		case 1:
			return Local_344.f_53[1 /*2*/];
		case 2:
			return Local_344.f_53[1 /*2*/];
		default:
	}
	return -1;
}

int func_128(bool bParam0)//Position - 0x4E63
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 2:
					return 1;
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 1:
					return 1;
				case 2:
					return 1;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 2:
					return 1;
				case 3:
					return 1;
				default:
			}
			break;
	}
	return 0;
}

Vector3 func_130(bool bParam0)//Position - 0x4EF5
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 1:
					return 229.197f, 213.7629f, 104.5252f;
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 2:
					return -1210.2406f, -334.947f, 36.7592f;
				case 3:
					return -1215.3552f, -325.6002f, 36.6804f;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 1:
					return 1175.5978f, 2698.3982f, 36.9947f;
				case 3:
					return 1174.9788f, 2711.7002f, 37.0662f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_131(bool bParam0)//Position - 0x4FB1
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 7:
					return (func_125() > 1 && __LIB_2__::func_47(&uLocal_346, 7000, 0));
				default:
			}
			break;
	}
	return 0;
}

bool func_132()//Position - 0x4FF2
{
	return func_110(1) > 3;
}

bool func_133(bool bParam0)//Position - 0x5001
{
	return func_134(bParam0) == joaat("WEAPON_MINIGUN");
}

int func_134(int iParam0)//Position - 0x5015
{
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("WEAPON_CARBINERIFLE");
				case 1:
					return joaat("WEAPON_MINIGUN");
				case 2:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 3:
					return joaat("WEAPON_PISTOL");
				case 4:
					return joaat("WEAPON_UNARMED");
				case 5:
					return joaat("WEAPON_UNARMED");
				case 6:
					return joaat("WEAPON_UNARMED");
				case 7:
					return joaat("WEAPON_UNARMED");
				case 8:
					return joaat("WEAPON_PISTOL");
				case 9:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 10:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 11:
					return joaat("WEAPON_PISTOL");
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("WEAPON_CARBINERIFLE");
				case 1:
					return joaat("WEAPON_PISTOL");
				case 2:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 3:
					return joaat("WEAPON_MINIGUN");
				case 4:
					return joaat("WEAPON_UNARMED");
				case 5:
					return joaat("WEAPON_UNARMED");
				case 6:
					return joaat("WEAPON_UNARMED");
				case 7:
					return joaat("WEAPON_UNARMED");
				case 8:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 9:
					return joaat("WEAPON_PISTOL");
				case 10:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 11:
					return joaat("WEAPON_PISTOL");
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("WEAPON_CARBINERIFLE");
				case 1:
					return joaat("WEAPON_MINIGUN");
				case 2:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 3:
					return joaat("WEAPON_PISTOL");
				case 4:
					return joaat("WEAPON_UNARMED");
				case 5:
					return joaat("WEAPON_UNARMED");
				case 6:
					return joaat("WEAPON_UNARMED");
				case 7:
					return joaat("WEAPON_UNARMED");
				case 8:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 9:
					return joaat("WEAPON_PUMPSHOTGUN");
				case 10:
					return joaat("WEAPON_PISTOL");
				case 11:
					return joaat("WEAPON_PISTOL");
				default:
			}
			break;
	}
	return joaat("WEAPON_UNARMED");
}

int func_135(bool bParam0)//Position - 0x5253
{
	switch (bParam0)
	{
		case 12:
		case 13:
			return 1;
		default:
	}
	return 0;
}

int func_136(bool bParam0)//Position - 0x5273
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					return 3;
				case 1:
					return 2;
				case 2:
					return 8;
				case 3:
					return 8;
				case 4:
					return 5;
				case 5:
					return 10;
				case 6:
					return 5;
				case 7:
					return 5;
				case 8:
					return 3;
				case 9:
					return 3;
				case 10:
					return 3;
				case 11:
					return 3;
				case 12:
					return 4;
				case 13:
					return 4;
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					return 3;
				case 1:
					return 8;
				case 2:
					return 8;
				case 3:
					return 2;
				case 4:
					return 5;
				case 5:
					return 5;
				case 6:
					return 4;
				case 7:
					return 5;
				case 8:
					return 3;
				case 9:
					return 3;
				case 10:
					return 3;
				case 11:
					return 3;
				case 12:
					return 4;
				case 13:
					return 4;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					return 3;
				case 1:
					return 2;
				case 2:
					return 8;
				case 3:
					return 8;
				case 4:
					return 5;
				case 5:
					return 5;
				case 6:
					return 5;
				case 7:
					return 4;
				case 8:
					return 3;
				case 9:
					return 3;
				case 10:
					return 3;
				case 11:
					return 3;
				case 12:
					return 4;
				case 13:
					return 4;
				default:
			}
			break;
	}
	return 2;
}

void func_137(bool bParam0, int iParam1, struct<3> Param2)//Position - 0x5460
{
	if (func_135(bParam0))
	{
		func_145(iParam1);
		return;
	}
	func_143(bParam0, iParam1);
	func_141(bParam0, iParam1);
	func_140(bParam0, iParam1, Param2);
	func_138(bParam0, iParam1);
}

void func_138(int iParam0, int iParam1)//Position - 0x549E
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam1))
	{
		case joaat("HC_Gunman"):
			if (func_134(iParam0) == joaat("WEAPON_MINIGUN"))
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 9, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 10, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(iParam1, 0, 5, 0, false);
			}
			else if (NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1) == func_139())
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 3, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 5, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 5, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 10, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 9, 5, 0, 0);
			}
			else if (iParam0 == 0)
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 4, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 5, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 5, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 2, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 10, 1, 0, 0);
			}
			else
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 1, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 2, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 9, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam1, 10, 1, 0, 0);
			}
			break;
		case joaat("S_M_M_Security_01"):
			switch (func_82())
			{
				case 1:
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 0, 0, 0);
					break;
				case 2:
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 0, 0, 0);
					PED::SET_PED_PROP_INDEX(iParam1, 0, 0, 0, false);
					break;
			}
			break;
		case joaat("A_F_Y_Business_02"):
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 1, 2, 0);
			switch (func_82())
			{
				case 0:
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam1);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 1, 0);
					break;
			}
			break;
	}
}

int func_139()//Position - 0x5791
{
	int iVar0;
	iVar0 = func_85();
	if (iVar0 != -1)
	{
		return Local_344.f_24[iVar0 /*2*/];
	}
	return -1;
}

void func_140(int iParam0, int iParam1, struct<3> Param2)//Position - 0x57B2
{
	if (NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iParam1) == func_139())
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 1f, false, false);
		return;
	}
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 2:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 5f, false, false);
					break;
				case 3:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 5f, false, false);
					break;
				case 4:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 8:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 9:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 10:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 11:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 5f, false, false);
					break;
				case 2:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 5f, false, false);
					break;
				case 3:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 5:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 8:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 9:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 10:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 11:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 1:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 2:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 5f, false, false);
					break;
				case 3:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 5f, false, false);
					break;
				case 4:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 8:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 9:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 10:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
				case 11:
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, Param2, 3f, false, false);
					break;
			}
			break;
	}
}

void func_141(int iParam0, int iParam1)//Position - 0x5A62
{
	int iVar0;
	iVar0 = func_142(iParam0);
	switch (iVar0)
	{
		case joaat("COP"):
			PED::SET_PED_AS_COP(iParam1, true);
			break;
		default:
			if (iVar0 == Global_1837198)
			{
				PED::SET_PED_TREATED_AS_FRIENDLY(iParam1, 1, 0);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar0);
			break;
	}
	if (iVar0 != Global_1837198)
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, joaat("COP"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, Global_1837204);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam1, true);
	}
}

int func_142(int iParam0)//Position - 0x5ACC
{
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_1837204;
				case 1:
					return Global_1837204;
				case 2:
					return Global_1837204;
				case 3:
					return Global_1837204;
				case 4:
					return Global_1837198;
				case 5:
					return Global_1837198;
				case 6:
					return Global_1837198;
				case 7:
					return Global_1837198;
				case 8:
					return joaat("COP");
				case 9:
					return joaat("COP");
				case 10:
					return joaat("COP");
				case 11:
					return joaat("COP");
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1837204;
				case 1:
					return Global_1837204;
				case 2:
					return Global_1837204;
				case 3:
					return Global_1837204;
				case 4:
					return Global_1837198;
				case 5:
					return Global_1837198;
				case 6:
					return Global_1837198;
				case 7:
					return Global_1837198;
				case 8:
					return joaat("COP");
				case 9:
					return joaat("COP");
				case 10:
					return joaat("COP");
				case 11:
					return joaat("COP");
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_1837204;
				case 1:
					return Global_1837204;
				case 2:
					return Global_1837204;
				case 3:
					return Global_1837204;
				case 4:
					return Global_1837198;
				case 5:
					return Global_1837198;
				case 6:
					return Global_1837198;
				case 7:
					return Global_1837198;
				case 8:
					return joaat("COP");
				case 9:
					return joaat("COP");
				case 10:
					return joaat("COP");
				case 11:
					return joaat("COP");
				default:
			}
			break;
	}
	return Global_1837198;
}

void func_143(int iParam0, int iParam1)//Position - 0x5CF1
{
	int iVar0;
	iVar0 = func_134(iParam0);
	if (iVar0 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam1, func_134(iParam0), 9999999, iVar0 == joaat("WEAPON_MINIGUN"), true);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, 1);
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	if (func_144(iParam0))
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 400);
		ENTITY::SET_ENTITY_HEALTH(iParam1, 400, 0);
	}
	switch (iVar0)
	{
		case joaat("WEAPON_MINIGUN"):
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 600);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 600, 0);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam1, false);
			PED::SET_PED_CONFIG_FLAG(iParam1, 410, true);
			PED::SET_PED_CONFIG_FLAG(iParam1, 107, true);
			PED::SET_PED_CONFIG_FLAG(iParam1, 109, true);
			PED::SET_PED_CONFIG_FLAG(iParam1, 118, false);
			PED::SET_PED_CONFIG_FLAG(iParam1, 281, true);
			PED::SET_PED_CONFIG_FLAG(iParam1, 430, true);
			PED::SET_PED_FIRING_PATTERN(iParam1, joaat("FIRING_PATTERN_FULL_AUTO"));
			break;
		case joaat("WEAPON_UNARMED"):
			ENTITY::SET_ENTITY_HEALTH(iParam1, 101, 0);
			break;
	}
	if (iVar0 != joaat("WEAPON_MINIGUN"))
	{
		PED::SET_PED_ACCURACY(iParam1, 20);
	}
}

int func_144(int iParam0)//Position - 0x5E05
{
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 1;
				case 3:
					return 1;
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					return 1;
				case 2:
					return 1;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 2:
					return 1;
				case 3:
					return 1;
				default:
			}
			break;
	}
	return 0;
}

void func_145(int iParam0)//Position - 0x5E83
{
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, Global_1837194);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam0, false, Global_1837194);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam0, false, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442, true);
	NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iParam0, true);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 430, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
}

float func_147(bool bParam0)//Position - 0x5F55
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					return 116.399f;
				case 1:
					return 117.6f;
				case 2:
					return 52.799f;
				case 3:
					return 342.799f;
				case 4:
					return 220.199f;
				case 5:
					return 173.399f;
				case 6:
					return 97.798f;
				case 7:
					return 42.997f;
				case 8:
					return 314.599f;
				case 9:
					return 287.198f;
				case 10:
					return 342.197f;
				case 11:
					return 275.597f;
				case 12:
					return 203.9996f;
				case 13:
					return 97.9994f;
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					return 69.398f;
				case 1:
					return 101.398f;
				case 2:
					return 206.997f;
				case 3:
					return 40.599f;
				case 4:
					return 40.998f;
				case 5:
					return 278.597f;
				case 6:
					return 127.797f;
				case 7:
					return 155.597f;
				case 8:
					return 274.196f;
				case 9:
					return 286.196f;
				case 10:
					return 215.996f;
				case 11:
					return 215.996f;
				case 12:
					return 97.3997f;
				case 13:
					return 52.7999f;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					return 190.999f;
				case 1:
					return 173.998f;
				case 2:
					return 255.398f;
				case 3:
					return 339.198f;
				case 4:
					return 59.197f;
				case 5:
					return 253.397f;
				case 6:
					return 317.598f;
				case 7:
					return 273.397f;
				case 8:
					return -0.803f;
				case 9:
					return 1.197f;
				case 10:
					return 35.397f;
				case 11:
					return 4.797f;
				case 12:
					return 47.1992f;
				case 13:
					return 298.9985f;
				default:
			}
			break;
	}
	return 0f;
}

int func_148(bool bParam0)//Position - 0x61E3
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					return joaat("HC_Gunman");
				case 1:
					return joaat("HC_Gunman");
				case 2:
					return joaat("HC_Gunman");
				case 3:
					return joaat("HC_Gunman");
				case 4:
					return joaat("S_M_M_Armoured_01");
				case 5:
					return joaat("A_F_Y_Business_02");
				case 6:
					return joaat("A_F_Y_Business_02");
				case 7:
					return joaat("A_M_Y_Business_03");
				case 8:
					return joaat("S_M_Y_Cop_01");
				case 9:
					return joaat("S_M_Y_Cop_01");
				case 10:
					return joaat("S_M_Y_Cop_01");
				case 11:
					return joaat("S_M_Y_Cop_01");
				case 12:
					return joaat("U_M_Y_GunVend_01");
				case 13:
					return joaat("U_M_Y_GunVend_01");
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					return joaat("HC_Gunman");
				case 1:
					return joaat("HC_Gunman");
				case 2:
					return joaat("HC_Gunman");
				case 3:
					return joaat("HC_Gunman");
				case 4:
					return joaat("A_F_Y_Business_02");
				case 5:
					return joaat("S_M_M_Armoured_01");
				case 6:
					return joaat("S_M_M_Security_01");
				case 7:
					return joaat("A_M_Y_Business_03");
				case 8:
					return joaat("S_M_Y_Cop_01");
				case 9:
					return joaat("S_M_Y_Cop_01");
				case 10:
					return joaat("S_M_Y_Cop_01");
				case 11:
					return joaat("S_M_Y_Cop_01");
				case 12:
					return joaat("U_M_Y_GunVend_01");
				case 13:
					return joaat("U_M_Y_GunVend_01");
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					return joaat("HC_Gunman");
				case 1:
					return joaat("HC_Gunman");
				case 2:
					return joaat("HC_Gunman");
				case 3:
					return joaat("HC_Gunman");
				case 4:
					return joaat("S_M_M_Armoured_01");
				case 5:
					return joaat("A_F_Y_Business_02");
				case 6:
					return joaat("A_F_Y_Business_04");
				case 7:
					return joaat("S_M_M_Security_01");
				case 8:
					return joaat("S_M_Y_Sheriff_01");
				case 9:
					return joaat("S_M_Y_Sheriff_01");
				case 10:
					return joaat("S_M_Y_Sheriff_01");
				case 11:
					return joaat("S_M_Y_Sheriff_01");
				case 12:
					return joaat("U_M_Y_GunVend_01");
				case 13:
					return joaat("U_M_Y_GunVend_01");
				default:
			}
			break;
	}
	return joaat("S_M_M_MovAlien_01");
}

Vector3 func_149(bool bParam0)//Position - 0x6475
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 0:
					return 226.4f, 214.343f, 104.547f;
				case 1:
					return 234.612f, 216.585f, 105.287f;
				case 2:
					return 257.889f, 217.4f, 105.287f;
				case 3:
					return 251.396f, 220.569f, 105.287f;
				case 4:
					return 256.449f, 218.751f, 105.287f;
				case 5:
					return 252.224f, 223.174f, 105.287f;
				case 6:
					return 252.311f, 213.163f, 105.287f;
				case 7:
					return 250.768f, 216.126f, 105.287f;
				case 8:
					return 220.252f, 204.311f, 104.398f;
				case 9:
					return 218.583f, 208.74f, 104.396f;
				case 10:
					return 225.178f, 201.753f, 104.362f;
				case 11:
					return 218.254f, 213.202f, 104.458f;
				case 12:
					return -1062.0719f, -1568.9951f, 3.6372f;
				case 13:
					return -1276.0006f, -1157.9242f, 5.0286f;
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 0:
					return -1213.15f, -323.804f, 36.743f;
				case 1:
					return -1216.274f, -331.213f, 36.781f;
				case 2:
					return -1208.807f, -336.963f, 36.759f;
				case 3:
					return -1212.958f, -330.2f, 36.792f;
				case 4:
					return -1213.14f, -333.038f, 36.781f;
				case 5:
					return -1218.046f, -331.515f, 36.781f;
				case 6:
					return -1208.188f, -338.896f, 36.759f;
				case 7:
					return -1211.143f, -327.817f, 36.781f;
				case 8:
					return -1225.876f, -327.414f, 36.512f;
				case 9:
					return -1226.109f, -323.881f, 36.529f;
				case 10:
					return -1222.209f, -318.089f, 36.56f;
				case 11:
					return -1218.261f, -316.469f, 36.617f;
				case 12:
					return 973.2028f, -1710.4318f, 29.1271f;
				case 13:
					return 836.1763f, -2483.7415f, 23.6485f;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 0:
					return 1171.455f, 2700.019f, 37.181f;
				case 1:
					return 1174.987f, 2705.583f, 37.088f;
				case 2:
					return 1178.794f, 2705.448f, 37.088f;
				case 3:
					return 1174.377f, 2714.024f, 37.066f;
				case 4:
					return 1180.219f, 2705.169f, 37.088f;
				case 5:
					return 1177.72f, 2708.613f, 37.088f;
				case 6:
					return 1172.93f, 2704.877f, 37.088f;
				case 7:
					return 1174.746f, 2716.016f, 37.066f;
				case 8:
					return 1169.273f, 2689.006f, 36.989f;
				case 9:
					return 1176.007f, 2689.576f, 36.859f;
				case 10:
					return 1180.888f, 2689.222f, 36.833f;
				case 11:
					return 1173.128f, 2689.61f, 36.878f;
				case 12:
					return -461.9814f, 642.4857f, 143.1886f;
				case 13:
					return -396.6056f, 391.087f, 107.3201f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_150(bool bParam0)//Position - 0x68A9
{
	if (func_6(5))
	{
		if (func_152(bParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_344.f_24[bParam0 /*2*/]), false);
			__LIB_1__::func_46(&(Local_344.f_24[bParam0 /*2*/]));
			func_153(bParam0, 13);
		}
	}
}

bool func_152(int iParam0)//Position - 0x690D
{
	return func_142(iParam0) == joaat("COP");
}

void func_153(bool bParam0, int iParam1)//Position - 0x6921
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Local_344.f_24[bParam0 /*2*/].f_1 = iParam1;
}

void func_154()//Position - 0x6941
{
	if (func_157() != 0)
	{
		return;
	}
	if (!__LIB_0__::func_649(&(Local_344.f_3)))
	{
		__LIB_0__::func_580(&(Local_344.f_3), 0, 0);
	}
	else if (__LIB_2__::func_47(&(Local_344.f_3), func_155(), 0))
	{
		func_2(1);
		func_7(7);
	}
}

int func_155()//Position - 0x698A
{
	return (60000 * Global_262145.f_24672 /* Tunable: -1093867427 */);
}

int func_157()//Position - 0x69AA
{
	return Local_344.f_6;
}

void func_158(int iParam0)//Position - 0x69B7
{
	if (func_4(iParam0, 1) || !func_163(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_584(func_162()) && NETWORK::CAN_REGISTER_MISSION_PICKUPS(1))
	{
		if (func_160(iParam0))
		{
			func_159(iParam0, 1);
		}
	}
}

void func_159(int iParam0, int iParam1)//Position - 0x69FE
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	MISC::SET_BIT(&(Local_344.f_7[iParam0 /*4*/].f_1[iVar0]), iVar1);
}

int func_160(int iParam0)//Position - 0x6A34
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_344.f_7[iParam0 /*4*/]))
	{
		Var0 = { func_161(iParam0) };
		Local_344.f_7[iParam0 /*4*/] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS"), Var0, true, func_162()));
		iVar1 = NETWORK::NET_TO_ENT(Local_344.f_7[iParam0 /*4*/]);
		iVar2 = NETWORK::NET_TO_OBJ(Local_344.f_7[iParam0 /*4*/]);
		NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_344.f_7[iParam0 /*4*/], true);
		ENTITY::SET_ENTITY_LOD_DIST(iVar1, 1200);
		ENTITY::SET_ENTITY_HEALTH(iVar1, 50, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
		ENTITY::SET_ENTITY_PROOFS(iVar1, true, true, false, true, true, true, true, false);
		ENTITY::SET_PICKUP_COLLIDES_WITH_PROJECTILES(iVar1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar1, true, 1);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar1, true);
		OBJECT::ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(iVar2, true);
		OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(iVar2, true);
		OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iVar2);
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_161(int iParam0)//Position - 0x6AFC
{
	int iVar0;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_139()))
	{
		iVar0 = NETWORK::NET_TO_ENT(func_139());
		return ENTITY::GET_ENTITY_COORDS(iVar0, false);
	}
	return 45.4416f, -1011.809f, 28.5226f;
}

int func_162()//Position - 0x6B32
{
	return joaat("ba_prop_battle_bag_01b");
}

int func_163(int iParam0)//Position - 0x6B3F
{
	if (func_6(4))
	{
		return 1;
	}
	return 0;
}

int func_165()//Position - 0x6B5D
{
	return Local_344.f_5;
}

bool func_166()//Position - 0x6B6A
{
	if (!func_6(1))
	{
		Local_344.f_65 = PLAYER::PLAYER_ID();
		func_79(1);
	}
	return func_6(1);
}

void func_167(int iParam0)//Position - 0x6B8E
{
	Local_344.f_0 = iParam0;
}

void func_169()//Position - 0x6BBE
{
	int iVar0;
	if (func_165() > 0)
	{
		func_1791();
		iVar0 = 0;
		while (iVar0 < __LIB_0__::func_109())
		{
			func_1784(iVar0);
			func_1781(iVar0);
			func_1113(iVar0);
			func_1110(iVar0);
			func_1109(iVar0);
			iVar0++;
		}
		func_1108();
		func_1040();
		func_897();
		func_893();
		func_892();
		func_883();
		func_873();
		func_862();
		func_860();
		func_840();
		func_812();
		func_808();
		func_759();
		func_590();
		func_562();
		func_555();
	}
	switch (func_125())
	{
		case 0:
			if (func_6(4))
			{
				if (func_554())
				{
					if (func_553())
					{
						func_552(5);
					}
					else if (func_551(PLAYER::PLAYER_ID(), 0))
					{
						func_552(6);
					}
				}
				else
				{
					func_552(4);
				}
			}
			else if (func_6(2))
			{
				func_552(2);
			}
			else if (!func_6(2))
			{
				func_552(1);
			}
			break;
		case 1:
			if (func_6(4))
			{
				func_552(4);
			}
			else if (func_6(2))
			{
				func_552(2);
			}
			break;
		case 2:
			if (func_6(4))
			{
				func_552(4);
			}
			else if (func_6(3))
			{
				func_552(3);
			}
			break;
		case 3:
			if (func_6(4))
			{
				func_552(4);
			}
			break;
		case 4:
			if (func_550(PLAYER::PLAYER_ID()))
			{
				func_552(6);
			}
			else if (func_554())
			{
				if (func_553())
				{
					func_552(5);
				}
				else if (func_551(PLAYER::PLAYER_ID(), 1))
				{
					func_552(6);
				}
			}
			break;
		case 5:
			if (func_550(PLAYER::PLAYER_ID()))
			{
				func_552(6);
			}
			else if (!func_553())
			{
				func_552(4);
			}
			break;
		case 6:
			if (!func_551(PLAYER::PLAYER_ID(), 0))
			{
				if (func_553())
				{
					func_552(5);
				}
				else
				{
					func_552(4);
				}
			}
			break;
		case 7:
			__LIB_18__::func_455();
			func_170();
			break;
		case 8:
			break;
	}
}

void func_170()//Position - 0x6DC1
{
	bool bVar0;
	int iVar1;
	if (!__LIB_28__::func_709(1))
	{
		if ((func_157() != 0 && !__LIB_28__::func_709(6)) && __LIB_2__::func_47(&Local_350, 1000, 0))
		{
			if (bLocal_166)
			{
				if ((!__LIB_25__::func_938() && !__LIB_0__::func_114()) && !__LIB_36__::func_811(242))
				{
					if (__LIB_28__::func_383())
					{
						switch (func_157())
						{
							case 2:
								HUD::CLEAR_HELP(true);
								break;
							case 3:
								HUD::CLEAR_HELP(true);
								break;
							case 1:
								HUD::CLEAR_HELP(true);
								break;
							case 4:
								HUD::CLEAR_HELP(true);
								break;
							}
						}
					}
			}
			iVar1 = PLAYER::PLAYER_ID();
			__LIB_28__::func_368(1, iVar1);
			bVar0 = ((func_522() && func_520(PLAYER::PLAYER_ID())) || Local_344.f_7[0 /*4*/].f_3 == PLAYER::PLAYER_ID());
			if ((bVar0 && __LIB_1__::func_145()) && func_522())
			{
				__LIB_28__::func_707();
			}
			func_212(242, bVar0, &uLocal_132, 0);
			func_1991(bVar0, 0);
			if (func_522())
			{
				func_180(242, -1, bVar0, 0, 0, -1);
				func_173();
			}
			__LIB_28__::func_708(1);
			func_171(0);
		}
	}
}

void func_171(int iParam0)//Position - 0x6EE6
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/].f_1[iVar0]), iVar1);
}

void func_173()//Position - 0x6F34
{
	int iVar0;
	int iVar1;
	if (__LIB_1__::func_145() && __LIB_20__::func_491(PLAYER::PLAYER_ID()))
	{
		iVar0 = __LIB_1__::func_556(7284, -1, 0);
		iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		iVar0 = iVar1 + 18000;
		__LIB_1__::func_597(7284, iVar0, -1, 1, 0);
	}
}

void func_180(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x705C
{
	switch (iParam0)
	{
		case 236:
		case 150:
			break;
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			Global_2815059.f_6738 = iParam0;
			if (bParam2)
			{
				__LIB_11__::func_31(45);
			}
			else
			{
				__LIB_11__::func_31(46);
			}
			break;
		case 250:
			Global_2815059.f_6738 = iParam1;
			Global_2815059.f_6739 = iParam5;
			if (bParam2)
			{
				__LIB_11__::func_31(13);
			}
			else
			{
				__LIB_11__::func_31(14);
			}
			break;
		case 238:
			Global_2815059.f_6738 = iParam1;
			if (bParam2)
			{
				if (__LIB_3__::func_114(PLAYER::PLAYER_ID()))
				{
					__LIB_11__::func_31(23);
				}
				else
				{
					__LIB_11__::func_31(24);
				}
			}
			else if (__LIB_3__::func_114(PLAYER::PLAYER_ID()))
			{
				__LIB_11__::func_31(25);
			}
			else
			{
				__LIB_11__::func_31(26);
			}
			break;
		case 249:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 2:
						__LIB_11__::func_31(19);
						break;
					case 3:
						__LIB_11__::func_31(22);
						break;
					case 4:
						__LIB_11__::func_31(20);
						break;
					case 5:
						__LIB_11__::func_31(21);
						break;
				}
			}
			else
			{
				__LIB_11__::func_31(35);
			}
			break;
		case 237:
			if (iParam1 == 1 && __LIB_1__::func_145())
			{
				if (bParam2)
				{
					if (!__LIB_4__::func_952())
					{
						__LIB_11__::func_31(15);
					}
				}
				else
				{
					__LIB_11__::func_31(16);
				}
			}
			else if (iParam1 == 0 && __LIB_1__::func_145())
			{
				if (bParam2)
				{
					if (!__LIB_4__::func_951())
					{
						__LIB_11__::func_31(17);
					}
				}
				else
				{
					__LIB_11__::func_31(18);
				}
			}
			else if (__LIB_7__::func_520(iParam1))
			{
				Global_2815059.f_6738 = iParam1;
				if (bParam2)
				{
					if (func_203())
					{
						__LIB_11__::func_31(11);
					}
					else if (bParam3)
					{
						__LIB_11__::func_31(9);
					}
					else
					{
						__LIB_11__::func_31(8);
					}
				}
				else if (bParam4)
				{
					__LIB_11__::func_31(12);
				}
				else
				{
					__LIB_11__::func_31(10);
				}
			}
			break;
	}
	if (__LIB_11__::func_30())
	{
		if (!__LIB_3__::func_640(152, 3))
		{
			__LIB_24__::func_951(152, 3, 0);
			__LIB_11__::func_31(49);
		}
	}
	else if (__LIB_11__::func_29())
	{
		if (!__LIB_3__::func_640(153, 3))
		{
			__LIB_24__::func_951(153, 3, 0);
			__LIB_11__::func_31(48);
		}
	}
	else if (__LIB_20__::func_407())
	{
		if (!__LIB_3__::func_640(__LIB_21__::func_191(), 3))
		{
			__LIB_24__::func_951(__LIB_21__::func_191(), 3, 0);
			__LIB_11__::func_31(51);
		}
	}
	else if (!__LIB_3__::func_640(151, 3))
	{
		__LIB_24__::func_951(151, 3, 0);
		__LIB_11__::func_31(48);
	}
}

int func_203()//Position - 0x79C9
{
	if (__LIB_1__::func_145())
	{
		if (!BitTest(__LIB_1__::func_556(7229, -1, 0), 2))
		{
			return 1;
		}
	}
	return 0;
}

void func_212(int iParam0, bool bParam1, var uParam2, bool bParam3)//Position - 0x7B23
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	__LIB_34__::func_257(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + __LIB_28__::func_367(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + __LIB_10__::func_941(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (__LIB_34__::func_256(iParam0))
	{
		if (bParam1)
		{
			if (Global_262145.f_24496 /* Tunable: -76964080 */)
			{
				if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) <= 0)
				{
					__LIB_21__::func_78();
				}
			}
			else if (__LIB_10__::func_940(PLAYER::PLAYER_ID()) > 0)
			{
				__LIB_21__::func_77();
			}
			else
			{
				__LIB_21__::func_78();
			}
		}
		else
		{
			__LIB_19__::func_903();
		}
	}
	__LIB_38__::func_962(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	__LIB_34__::func_255(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_38__::func_961(iParam0, uParam2, &iVar0, &iVar5);
	__LIB_36__::func_810(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	__LIB_36__::func_814(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2815059.f_5195.f_387 = iVar4;
	}
	else
	{
		Global_2815059.f_5195.f_387 = iVar5;
	}
	iVar8 = __LIB_1__::func_301();
	if (iVar8 != __LIB_0__::func_160() && iParam0 != 148)
	{
		if (__LIB_1__::func_113(PLAYER::PLAYER_ID(), 0))
		{
			if (!__LIB_6__::func_941(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				__LIB_39__::func_708(&iVar0, 1);
			}
		}
	}
	__LIB_36__::func_809(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1943929.f_10 = iVar1;
		__LIB_1__::func_444();
		__LIB_39__::func_771(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_SKILL"), joaat("XPCATEGORY_COLLECT_CHECKPOINT"), iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1943929.f_9 = iVar0;
		__LIB_41__::func_157(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		__LIB_26__::func_304(iParam0, iVar0);
		if (__LIB_10__::func_932(iParam0))
		{
			if (__LIB_10__::func_931(iParam0) > -1)
			{
				__LIB_1__::func_445(__LIB_10__::func_931(iParam0), iVar0);
			}
		}
		Global_2727753 = iVar0;
		__LIB_0__::func_495(&Global_2725869, 0, 0);
	}
	if (__LIB_0__::func_286(PLAYER::PLAYER_ID()) || __LIB_0__::func_431(PLAYER::PLAYER_ID()))
	{
		__LIB_34__::func_235(iParam0);
	}
	if ((__LIB_10__::func_929(iParam0) || iParam0 == 293) || iParam0 == 291)
	{
		Global_1943947.f_13 = iVar0;
		Global_1943947.f_14 = iVar1;
	}
	if (__LIB_9__::func_286(iParam0))
	{
		Global_1944003.f_13 = iVar0;
		Global_1944003.f_14 = iVar1;
	}
	if (((__LIB_3__::func_524(iParam0) || iParam0 == 297) || iParam0 == 296) || iParam0 == 298)
	{
		Global_1944066.f_12 = iVar0;
		Global_1944066.f_13 = iVar1;
	}
	if (__LIB_1__::func_204(iParam0))
	{
		Global_1944113.f_12 = iVar0;
		Global_1944113.f_13 = iVar1;
	}
	if (__LIB_0__::func_787(iParam0))
	{
		Global_1944167.f_12 = iVar0;
		Global_1944167.f_13 = iVar1;
	}
	if (__LIB_2__::func_859(iParam0))
	{
		if (__LIB_10__::func_909(iParam0))
		{
			Global_1944249.f_12 = iVar0;
			Global_1944249.f_13 = iVar1;
		}
		else if (((__LIB_29__::func_159(iParam0) || iParam0 == 299) || iParam0 == 300) || iParam0 == 301)
		{
			Global_1944303.f_12 = iVar0;
			Global_1944303.f_13 = iVar1;
		}
	}
	if (__LIB_9__::func_415(iParam0))
	{
		Global_1944390.f_12 = iVar0;
		Global_1944390.f_13 = iVar1;
	}
	if (__LIB_2__::func_965(iParam0))
	{
		Global_1944465.f_16 = iVar0;
		Global_1944465.f_17 = iVar1;
	}
	if (__LIB_9__::func_29(iParam0))
	{
		Global_1944552.f_16 = iVar0;
		Global_1944552.f_17 = iVar1;
	}
	if (__LIB_2__::func_473(iParam0) || __LIB_10__::func_894(iParam0))
	{
		Global_1944685.f_15 = iVar0;
		Global_1944685.f_16 = iVar1;
	}
	__LIB_41__::func_698(bParam1, iParam0);
}

int func_520(int iParam0)//Position - 0x37F5F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (func_4(iVar0, 2) && func_521(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 6))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_521(int iParam0, int iParam1, int iParam2)//Position - 0x37F9D
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam2 / 32);
	iVar1 = (iParam2 % 32);
	return BitTest(Local_345[iParam1 /*13*/].f_3[iParam0 /*2*/][iVar0], iVar1);
}

int func_522()//Position - 0x37FC7
{
	if (func_526() || func_523())
	{
		return 1;
	}
	return 0;
}

int func_523()//Position - 0x37FE5
{
	return func_524(PLAYER::PLAYER_ID());
}

int func_524(int iParam0)//Position - 0x37FF5
{
	return __LIB_6__::func_941(iParam0, func_525(), 0);
}

int func_525()//Position - 0x38008
{
	return Local_344.f_65;
}

bool func_526()//Position - 0x38015
{
	return func_527(PLAYER::PLAYER_ID());
}

bool func_527(int iParam0)//Position - 0x38025
{
	return func_525() == iParam0;
}

int func_550(int iParam0)//Position - 0x38661
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (!func_4(iVar0, 2))
		{
			if (iLocal_160[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0, bool bParam1)//Position - 0x3869A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (!bParam1 && iLocal_160[iVar0] == iParam0)
		{
			return 1;
		}
		if (func_521(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_552(int iParam0)//Position - 0x386E5
{
	Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/].f_12 = iParam0;
}

int func_553()//Position - 0x386FA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (!func_4(iVar0, 2))
		{
			if (!func_521(iVar0, NETWORK::PARTICIPANT_ID(), 3))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_554()//Position - 0x38736
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (!func_4(iVar0, 2))
		{
			if (iLocal_160[iVar0] == __LIB_0__::func_160())
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_555()//Position - 0x38771
{
	if (((func_557(0) && Local_344.f_73 != -1) && !CAM::IS_SCREEN_FADING_OUT()) && !__LIB_28__::func_709(13))
	{
		if (!__LIB_28__::func_709(21))
		{
			MISC::SET_BIT(&(Global_1946250.f_3), 30);
			__LIB_28__::func_708(21);
		}
	}
	else if (__LIB_28__::func_709(21))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 30);
		__LIB_28__::func_742(21);
	}
}

bool func_557(bool bParam0)//Position - 0x38800
{
	return func_558(PLAYER::PLAYER_ID(), bParam0);
}

int func_558(int iParam0, bool bParam1)//Position - 0x38812
{
	if (iParam0 != __LIB_0__::func_160())
	{
		if (__LIB_1__::func_335(iParam0, bParam1))
		{
			if (__LIB_6__::func_940(iParam0) == __LIB_1__::func_301() || ((bParam1 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_7__::func_139(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1, 0) == __LIB_1__::func_301()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_562()//Position - 0x3897B
{
	bool bVar0;
	int iVar1;
	float fVar2;
	bVar0 = false;
	if (func_522() && __LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_589()))
		{
			iVar1 = NETWORK::NET_TO_ENT(func_589());
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				fVar2 = __LIB_0__::func_76(iVar1, PLAYER::PLAYER_PED_ID(), 1);
				if (fVar2 > 15f && fVar2 < 50f)
				{
					__LIB_39__::func_908(&uLocal_1089, iVar1, 0, 0, 1, 1, 1);
					__LIB_11__::func_36(1);
					__LIB_28__::func_708(20);
					bVar0 = true;
				}
			}
		}
	}
	if (!bVar0 && __LIB_28__::func_709(20))
	{
		__LIB_9__::func_981(&uLocal_1089, 0, 0);
		__LIB_28__::func_742(20);
		__LIB_11__::func_36(0);
	}
}

int func_589()//Position - 0x39B67
{
	switch (func_82())
	{
		case 0:
			return Local_344.f_24[1 /*2*/];
		case 1:
			return Local_344.f_24[3 /*2*/];
		case 2:
			return Local_344.f_24[1 /*2*/];
		default:
	}
	return -1;
}

void func_590()//Position - 0x39BAC
{
	bool bVar0;
	if (__LIB_0__::func_431(PLAYER::PLAYER_ID()))
	{
		bVar0 = func_550(PLAYER::PLAYER_ID());
		func_591(bVar0);
		if (bVar0)
		{
			if (!__LIB_28__::func_709(17))
			{
				PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), false);
				NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
				__LIB_28__::func_708(17);
			}
		}
		else if (__LIB_28__::func_709(17))
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
			__LIB_28__::func_742(17);
		}
	}
}

void func_591(bool bParam0)//Position - 0x39C12
{
	if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
	}
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (bParam0 && __LIB_21__::func_82())
	{
		if (!__LIB_25__::func_111(Global_2703735.f_4.f_15, __LIB_26__::func_818(), -1))
		{
			STREAMING::REQUEST_CLIP_SET("move_m@bag");
			if (STREAMING::HAS_CLIP_SET_LOADED("move_m@bag"))
			{
				func_745(Global_2703735.f_4.f_15, __LIB_26__::func_818(), -1);
				PED::SET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, "move_m@bag", 0.25f);
			}
		}
	}
	else if (__LIB_25__::func_111(Global_2703735.f_4.f_15, __LIB_26__::func_818(), -1))
	{
		func_592(Global_2703735.f_4.f_15, __LIB_26__::func_818(), -1, -1);
		STREAMING::REMOVE_CLIP_SET("move_m@bag");
		PED::RESET_PED_MOVEMENT_CLIPSET(Global_2703735.f_4.f_15, 0.25f);
	}
}

void func_592(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39CD0
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
	if (__LIB_18__::func_485(iParam0, &Global_78200, iParam1, &iParam3))
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
			if (!__LIB_0__::func_155(0))
			{
				if (__LIB_1__::func_563(161, -1))
				{
					func_611(iParam0, 2, __LIB_1__::func_556(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_611(iParam0, 2, __LIB_1__::func_556(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					__LIB_25__::func_44(iParam0, -1);
				}
			}
			__LIB_0__::func_917(0);
			__LIB_18__::func_775(1, 2);
		}
	}
}

int func_611(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3AEE6
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
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
			func_734(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 10, 0, -1) };
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
						func_734(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_734(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_611(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_734(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iVar0, func_722(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_611(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_395();
			if (iVar17 != -1)
			{
				__LIB_18__::func_394(iVar17, 0, iParam10);
			}
			func_715(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_734(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_39__::func_721(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_611(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_734(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_611(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_706(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_611(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_611(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_702(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_611(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_827(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_611(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_611(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_611(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_827(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_611(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_611(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_611(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_931(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_715(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_702(iVar5, func_722(iParam0, 8, -1), iParam2, func_722(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_1__::func_556(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_1__::func_556(2160, iParam10, 0);
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
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_646(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_702(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_715(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_931(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_702(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_1__::func_556(2100, iParam10, 0);
				iVar53 = __LIB_1__::func_556(2101, iParam10, 0);
				iVar54 = __LIB_1__::func_556(2102, iParam10, 0);
				fVar55 = __LIB_2__::func_97(135, iParam10);
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
				__LIB_25__::func_44(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_611(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_611(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_702(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_702(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_39__::func_721(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
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
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_611(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_702(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_611(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_634(iParam0, 9, iVar63))
						{
							func_611(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_611(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_611(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_1__::func_556(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_611(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_722(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_722(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_611(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_611(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_611(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_611(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_611(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_611(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_611(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_611(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_611(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_611(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_706(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_611(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_39__::func_721(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_611(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_612(iParam0, &uVar4))
		{
			func_611(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_611(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_611(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_611(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_722(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_611(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_612(int iParam0, var uParam1)//Position - 0x3CD92
{
	int iVar0;
	int iVar1;
	*uParam1 = func_722(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_1__::func_556(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_1__::func_556(754, Global_78127, 0) == 0 && __LIB_1__::func_556(755, Global_78127, 0) == 0)
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				if (__LIB_1__::func_556(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_1__::func_556(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_1__::func_556(754, Global_78127, 0);
		iVar1 = __LIB_1__::func_556(755, Global_78127, 0);
		if (!func_634(iParam0, iVar1, iVar0))
		{
			if (__LIB_1__::func_563(161, Global_78127))
			{
				*uParam1 = __LIB_1__::func_556(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_1__::func_556(753, Global_78127, 0);
			}
			__LIB_1__::func_597(754, -99, Global_78127, 1, 0);
			__LIB_1__::func_597(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_634(int iParam0, int iParam1, int iParam2)//Position - 0x41090
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_588(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
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
				if (!func_634(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_634(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_634(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__::func_588(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_1__::func_556(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_634(iParam0, 14, uVar11[iVar10]))
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
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_634(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_634(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_646(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x48003
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_25__::func_74(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_18__::func_394(iVar1, 1, iParam2);
	}
	func_647(iParam0, bParam3, 0, -1);
}

void func_647(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x48050
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
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_680(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_673(iParam0, iParam3);
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
			if (__LIB_18__::func_373(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_27(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_373(123, iVar0))
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
					if (__LIB_18__::func_373(iVar10, iVar0))
					{
						if (__LIB_25__::func_27(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_901(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_673(int iParam0, int iParam1)//Position - 0x56D7B
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_722(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_1__::func_556(1759, -1, 0);
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
				iVar5 = func_722(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_680(int iParam0, bool bParam1)//Position - 0x57189
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
							iVar2 = __LIB_25__::func_18(joaat("MP_M_Freemode_01"), 11, func_722(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_373(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_373(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_722(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_722(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_722(iParam0, 11, -1), 0);
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
						iVar8 = func_722(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_722(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_25__::func_18(joaat("MP_F_Freemode_01"), 11, func_722(iParam0, 11, -1), 0);
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
						iVar12 = func_722(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_702(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x60F34
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_702(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_702(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
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

void func_706(int iParam0)//Position - 0x62440
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
		if (!func_711(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_711(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_711(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x62E0A
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_722(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_715(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x657F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_717(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_25__::func_74(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_28(iVar0, iParam2, 13) && !__LIB_25__::func_28(iVar0, iParam2, 14)) && !__LIB_25__::func_28(iVar0, iParam2, 15)) && !__LIB_25__::func_28(iVar0, iParam2, 16)) && !__LIB_25__::func_28(iVar0, iParam2, 71)) && !__LIB_25__::func_28(iVar0, iParam2, 72))
				{
					__LIB_25__::func_74(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_25__::func_18(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_393(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_18__::func_394(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_717(int iParam0)//Position - 0x65983
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_722(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_722(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_722(int iParam0, int iParam1, int iParam2)//Position - 0x65DEC
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
				if (func_634(iParam0, iParam1, iVar0))
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
				if (func_634(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_734(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x68D9A
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
		Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_86(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_86(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_734(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_734(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_734(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_1__::func_556(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_1__::func_597(iVar6, iVar7, Global_78127, 1, 0);
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
							func_734(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_734(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_734(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_588(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_734(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_734(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_734(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

void func_745(int iParam0, int iParam1, int iParam2)//Position - 0x71CDD
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
	if (__LIB_18__::func_485(iParam0, &Var0, iParam1, &iVar1))
	{
		if ((iParam1 == 1 || iParam1 == 4) || iParam1 == 3)
		{
			func_749(iParam0);
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
		}
		if (iParam1 == 11)
		{
			if (iVar1 != -1)
			{
				if (__LIB_2__::func_256(iVar1) == 22)
				{
					Var0.f_26[2] = -1;
				}
				else if (__LIB_2__::func_256(iVar1) == 8)
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
					if (__LIB_7__::func_241(ENTITY::GET_ENTITY_MODEL(iParam0), 7, func_722(iParam0, 7, -1), -1))
					{
						Var0[7] = 0;
						Var0.f_13[7] = 0;
					}
				}
			}
			__LIB_25__::func_113(iParam0, &Var0, iParam2);
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

void func_749(int iParam0)//Position - 0x72A23
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 77)
	{
		if (__LIB_25__::func_111(iParam0, iVar0, -1))
		{
			if (((((((((iVar0 == 0 || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 10) || iVar0 == 11)
			{
				func_592(iParam0, iVar0, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_759()//Position - 0x72E87
{
	struct<3> Var0;
	if (func_522())
	{
		if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	else if (func_6(9))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[0 /*4*/]))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_344.f_7[0 /*4*/]), false) };
		}
		else
		{
			Var0 = { func_81() };
		}
	}
	__LIB_42__::func_314(242, Var0, &uLocal_1070, 1140457472, 1144750080, 0);
}

void func_808()//Position - 0x7409E
{
	if (func_157() == 0)
	{
		func_809(1);
	}
	else
	{
		func_809(0);
	}
}

void func_809(bool bParam0)//Position - 0x740BB
{
	switch (func_82())
	{
		case 0:
			if (bParam0)
			{
				__LIB_10__::func_954(54);
			}
			else
			{
				__LIB_10__::func_961(54);
			}
			break;
		case 1:
			if (bParam0)
			{
				__LIB_10__::func_954(49);
			}
			else
			{
				__LIB_10__::func_961(49);
			}
			break;
		case 2:
			if (bParam0)
			{
				__LIB_10__::func_954(50);
			}
			else
			{
				__LIB_10__::func_961(50);
			}
			break;
	}
}

void func_812()//Position - 0x74181
{
	if (func_157() == 0)
	{
		func_813(1);
	}
	else
	{
		func_813(0);
	}
}

void func_813(bool bParam0)//Position - 0x7419E
{
	int iVar0;
	switch (func_82())
	{
		case 0:
			if (bParam0)
			{
				if (OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(259.983f, 215.247f, 106.405f, joaat("hei_prop_hei_bankdoor_new"), &iVar0))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 4, false, false);
					}
				}
				else
				{
					iVar0 = -419745571;
					OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("hei_prop_hei_bankdoor_new"), 259.983f, 215.247f, 106.405f, true, false, false);
				}
				if (OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(259.088f, 212.806f, 106.405f, joaat("hei_prop_hei_bankdoor_new"), &iVar0))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 4, false, false);
					}
				}
				else
				{
					iVar0 = -1133913157;
					OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("hei_prop_hei_bankdoor_new"), 259.088f, 212.806f, 106.405f, true, false, false);
				}
				if (OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(258.202f, 204.101f, 106.405f, joaat("hei_prop_hei_bankdoor_new"), &iVar0))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 4, false, false);
					}
				}
				else
				{
					iVar0 = -881362474;
					OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("hei_prop_hei_bankdoor_new"), 258.202f, 204.101f, 106.405f, true, false, false);
				}
				if (OBJECT::DOOR_SYSTEM_FIND_EXISTING_DOOR(260.643f, 203.205f, 106.405f, joaat("hei_prop_hei_bankdoor_new"), &iVar0))
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
					{
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 4, false, false);
					}
				}
				else
				{
					iVar0 = -1659724531;
					OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("hei_prop_hei_bankdoor_new"), 260.643f, 203.205f, 106.405f, true, false, false);
				}
			}
			break;
		case 1:
			func_814(2, bParam0);
			break;
		case 2:
			func_814(7, bParam0);
			break;
	}
}

void func_814(int iParam0, bool bParam1)//Position - 0x74341
{
	if (bParam1)
	{
		if (!__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
		{
			__LIB_4__::func_745(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
			if (__LIB_32__::func_206(iParam0))
			{
				__LIB_25__::func_678(iParam0, 1);
			}
		}
	}
	else if (__LIB_2__::func_319(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0))
	{
		__LIB_4__::func_743(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_535), iParam0);
	}
	if (iParam0 == 10)
	{
		func_814(11, bParam1);
		func_814(12, bParam1);
		func_814(13, bParam1);
	}
	if (iParam0 == 36)
	{
		func_814(37, bParam1);
		func_814(38, bParam1);
		func_814(39, bParam1);
		func_814(40, bParam1);
		func_814(41, bParam1);
	}
}

void func_840()//Position - 0x7D698
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	char* sVar4;
	char* sVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	bVar3 = false;
	while (bVar3 < 14)
	{
		bVar0 = false;
		bVar1 = false;
		bVar0 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_24[bVar3 /*2*/]);
		if (bVar0)
		{
			iVar2 = NETWORK::NET_TO_PED(Local_344.f_24[bVar3 /*2*/]);
			bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar2, false);
		}
		if (bVar1)
		{
			if (func_133(bVar3))
			{
				if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
				{
					PED::SET_PED_RESET_FLAG(iVar2, 187, true);
				}
				if (!func_6(14) && !func_857(NETWORK::PARTICIPANT_ID(), 12))
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iVar2, 7f, 1))
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							PED::SET_PED_ACCURACY(iVar2, 20);
							func_171(12);
						}
					}
				}
			}
			if (func_854(bVar3))
			{
				__LIB_7__::func_121(Local_344.f_24[bVar3 /*2*/], &(Local_155[bVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1, 0);
			}
			if (!BitTest(uLocal_173, bVar3))
			{
				if (func_849(bVar3, iVar2))
				{
					if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar2, true, joaat("COP"));
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar2, true, Global_1837204);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar2, false);
						MISC::SET_BIT(&uLocal_173, bVar3);
					}
				}
			}
			if (!func_6(7))
			{
				if (func_128(bVar3))
				{
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iVar2, func_848(bVar3), 1))
					{
						func_171(6);
					}
				}
			}
		}
		switch (func_84(bVar3))
		{
			case 2:
				if (bVar1)
				{
					if (func_133(bVar3))
					{
						if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iVar2, func_847(), 1))
						{
							func_171(5);
						}
					}
				}
				break;
			case 3:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							if (func_133(bVar3))
							{
								PED::SET_PED_ACCURACY(iVar2, 1);
							}
							else
							{
								PED::SET_PED_ACCURACY(iVar2, 20);
							}
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar2, ENTITY::GET_ENTITY_COORDS(iVar2, true), 299f, 0);
						}
					}
				}
				break;
			case 5:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_PLAY_ANIM")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_PLAY_ANIM")) != 0)
					{
						sVar4 = func_846(bVar3);
						sVar5 = func_845(bVar3);
						STREAMING::REQUEST_ANIM_DICT(sVar4);
						if (STREAMING::HAS_ANIM_DICT_LOADED(sVar4))
						{
							if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
							{
								TASK::TASK_PLAY_ANIM(iVar2, sVar4, sVar5, 8f, -8f, -1, func_844(bVar3), 0f, false, false, false);
							}
						}
					}
				}
				break;
			case 12:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_COWER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_COWER")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							TASK::TASK_COWER(iVar2, -1);
						}
					}
				}
				break;
			case 10:
				if (bVar1)
				{
					if ((TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_HANDS_UP")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_HANDS_UP")) != 0) && !PED::IS_PED_HEADTRACKING_PED(iVar2, PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							TASK::TASK_HANDS_UP(iVar2, -1, 0, -1, 0);
						}
					}
					else if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iVar2, 10f, 1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_344.f_24[bVar3 /*2*/]))
						{
							if (!PED::IS_PED_HEADTRACKING_PED(iVar2, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iVar2, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							}
						}
					}
					else if (PED::IS_PED_HEADTRACKING_PED(iVar2, PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(iVar2);
					}
				}
				break;
			case 11:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_GO_TO_COORD_ANY_MEANS")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							TASK::TASK_GO_TO_COORD_ANY_MEANS(iVar2, 243.7123f, 215.178f, 105.2868f, 1.6f, 0, false, 786603, -1f);
						}
					}
				}
				break;
			case 4:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(iVar2, func_843(bVar3), 0, false);
						}
					}
				}
				break;
			case 8:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_126(bVar3)) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_126(bVar3)), false))
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(iVar2, NETWORK::NET_TO_ENT(func_126(bVar3)), -1, false);
							}
						}
					}
				}
				break;
			case 6:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_126(bVar3)) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_126(bVar3)), false))
							{
								Var6 = { func_130(bVar3) };
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(iVar2, Var6, NETWORK::NET_TO_ENT(func_126(bVar3)), 1f, true, 0.2f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
							}
						}
					}
				}
				break;
			case 7:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							Var7 = { func_130(bVar3) };
							Var8 = { func_842(bVar3) };
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(iVar2, Var7, Var8, 1.5f, false, 0.1f, 2f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
						}
					}
					if (__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iVar2, 5f, 1))
					{
						func_171(7);
					}
				}
				break;
			case 9:
				if (bVar1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar2, joaat("SCRIPT_TASK_SHOOT_AT_ENTITY")) != 0)
					{
						if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
						{
							if (func_119(bVar3))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_118(bVar3)) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_118(bVar3)), false))
								{
									PED::SET_PED_COMBAT_MOVEMENT(iVar2, 0);
									PED::SET_PED_ACCURACY(iVar2, 100);
									TASK::TASK_SHOOT_AT_ENTITY(iVar2, NETWORK::NET_TO_ENT(func_118(bVar3)), -1, func_841(bVar3));
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_126(bVar3)) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_126(bVar3)), false))
							{
								PED::SET_PED_COMBAT_MOVEMENT(iVar2, 0);
								PED::SET_PED_ACCURACY(iVar2, 100);
								TASK::TASK_SHOOT_AT_ENTITY(iVar2, NETWORK::NET_TO_ENT(func_126(bVar3)), -1, func_841(bVar3));
							}
						}
					}
				}
				break;
			case 13:
				if (bVar0)
				{
					if (!func_6(11) && !func_857(NETWORK::PARTICIPANT_ID(), 8))
					{
						if (Local_344.f_24[bVar3 /*2*/] == func_139())
						{
							if (__LIB_6__::func_924(Local_344.f_24[bVar3 /*2*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(iVar2, 9, 2, 0, 0);
								func_171(8);
							}
						}
					}
				}
				break;
		}
		bVar3++;
	}
}

int func_841(bool bParam0)//Position - 0x7DD8F
{
	if (func_133(bParam0))
	{
		return joaat("FIRING_PATTERN_FULL_AUTO");
	}
	return 0;
}

Vector3 func_842(bool bParam0)//Position - 0x7DDA9
{
	switch (func_82())
	{
		case 1:
			switch (bParam0)
			{
				case 2:
					return -1214.282f, -336.8246f, 38.0775f;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 3:
					return 1179.2483f, 2711.498f, 38.5505f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_843(bool bParam0)//Position - 0x7DE0D
{
	if (func_135(bParam0))
	{
		return "WORLD_HUMAN_DRUG_DEALER_HARD";
	}
	switch (func_82())
	{
		case 1:
			switch (bParam0)
			{
				case 2:
					return "CODE_HUMAN_MEDIC_KNEEL";
				case 6:
					return "CODE_HUMAN_MEDIC_KNEEL";
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 3:
					return "CODE_HUMAN_MEDIC_KNEEL";
				case 7:
					return "CODE_HUMAN_MEDIC_KNEEL";
				default:
			}
			break;
	}
	return "";
}

int func_844(bool bParam0)//Position - 0x7DE89
{
	return 802817;
}

char* func_845(bool bParam0)//Position - 0x7DE95
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 4:
					return "idle";
				case 5:
					return "idle";
				case 6:
					return "idle";
				case 7:
					return "idle";
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 4:
					return "idle";
				case 5:
					return "idle";
				case 6:
					return "idle";
				case 7:
					return "idle";
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 4:
					return "idle";
				case 5:
					return "idle";
				case 6:
					return "idle";
				case 7:
					return "idle";
				default:
			}
			break;
	}
	return "";
}

char* func_846(bool bParam0)//Position - 0x7DF80
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 4:
					return "anim@heists@ornate_bank@hostages@ped_a@";
				case 5:
					return "anim@heists@ornate_bank@hostages@cashier_a@";
				case 6:
					return "anim@heists@ornate_bank@hostages@ped_e@";
				case 7:
					return "anim@heists@ornate_bank@hostages@ped_c@";
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 4:
					return "anim@heists@ornate_bank@hostages@cashier_a@";
				case 5:
					return "anim@heists@ornate_bank@hostages@ped_a@";
				case 6:
					return "anim@heists@ornate_bank@hostages@ped_c@";
				case 7:
					return "anim@heists@ornate_bank@hostages@ped_e@";
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 4:
					return "anim@heists@ornate_bank@hostages@cashier_a@";
				case 5:
					return "anim@heists@ornate_bank@hostages@ped_a@";
				case 6:
					return "anim@heists@ornate_bank@hostages@ped_c@";
				case 7:
					return "anim@heists@ornate_bank@hostages@ped_e@";
				default:
			}
			break;
	}
	return "";
}

float func_847()//Position - 0x7E06B
{
	switch (func_82())
	{
		case 0:
			return 100f;
		case 1:
			return 80f;
		case 2:
			return 80f;
		default:
	}
	return 100f;
}

float func_848(bool bParam0)//Position - 0x7E0AB
{
	switch (func_82())
	{
		case 0:
			switch (bParam0)
			{
				case 2:
					return 21.5f;
				default:
			}
			break;
		case 1:
			switch (bParam0)
			{
				case 1:
					return 5f;
				default:
			}
			break;
		case 2:
			switch (bParam0)
			{
				case 2:
					return 5f;
				default:
			}
			break;
	}
	return 20f;
}

int func_849(bool bParam0, int iParam1)//Position - 0x7E113
{
	if (bParam0 == 0)
	{
		if (func_6(15))
		{
			return 1;
		}
	}
	if (func_132() || (!func_133(bParam0) && __LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), iParam1, func_850(bParam0), 1)))
	{
		return 1;
	}
	return 0;
}

float func_850(int iParam0)//Position - 0x7E15D
{
	switch (func_82())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 100f;
				default:
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 100f;
				default:
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 100f;
				default:
			}
			break;
	}
	return 50f;
}

int func_854(int iParam0)//Position - 0x7E4AD
{
	if (func_125() > 3)
	{
		if (func_855(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_855(int iParam0)//Position - 0x7E4CB
{
	return func_142(iParam0) == Global_1837204;
}

bool func_857(int iParam0, int iParam1)//Position - 0x7E500
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return BitTest(Local_345[iParam0 /*13*/].f_1[iVar0], iVar1);
}

void func_860()//Position - 0x7E57D
{
	if (!__LIB_0__::func_431(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!__LIB_28__::func_709(19))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
		AUDIO::START_AUDIO_SCENE("DLC_BTL_Bank_Job_General_Scene");
		__LIB_28__::func_708(19);
	}
	if (iLocal_1088 == -1)
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT/ALARM_BELL_02", false, -1))
		{
			iLocal_1088 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1088, "Bell_02", func_861(), "ALARMS_SOUNDSET", false, 0, false);
		}
	}
	if (func_157() == 0)
	{
		switch (iLocal_1087)
		{
			case 0:
				AUDIO::TRIGGER_MUSIC_EVENT("BTL_IDLE_START");
				if (!func_522())
				{
					iLocal_1087 = 5;
				}
				else
				{
					iLocal_1087++;
				}
				break;
			case 1:
				if (func_557(0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BTL_SUSPENSE");
					iLocal_1087++;
				}
				break;
			case 2:
				if (!func_557(0) && func_125() >= 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BTL_MED_INTENSITY");
					iLocal_1087++;
				}
				break;
			case 3:
				if (func_165() >= 3)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BTL_GUNFIGHT");
					iLocal_1087++;
				}
				break;
			case 4:
				if (func_165() >= 4 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BTL_VEHICLE_ACTION");
					iLocal_1087++;
				}
				break;
			case 5:
				if (func_165() >= 6 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BTL_DELIVERING");
					iLocal_1087++;
				}
				break;
		}
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BTL_MUSIC_STOP");
	}
}

Vector3 func_861()//Position - 0x7E718
{
	switch (func_82())
	{
		case 0:
			return 252.7121f, 222.9117f, 106.0504f;
		case 1:
			return -1213.083f, -332.484f, 37.6937f;
		case 2:
			return 1175.727f, 2708.1785f, 37.9769f;
		default:
	}
	return -1715.9634f, 2702.7922f, -0.0884f;
}

void func_862()//Position - 0x7E780
{
	func_863();
}

void func_863()//Position - 0x7E78C
{
	int iVar0;
	if (__LIB_28__::func_709(15))
	{
		if (__LIB_2__::func_47(&(Local_156.f_3), Local_156.f_2, 0) || Local_156.f_2 == 0)
		{
			iVar0 = __LIB_1__::func_363();
			if (func_868(iVar0, Local_156.f_1, __LIB_0__::func_114()))
			{
				if (PLAYER::GET_MAX_WANTED_LEVEL() != iVar0)
				{
					PLAYER::SET_MAX_WANTED_LEVEL(iVar0);
				}
				if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 17))
				{
					__LIB_10__::func_885();
				}
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Local_156.f_0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				if (__LIB_0__::func_114())
				{
					EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(104 /*EVENT_SHOCKING_PED_SHOT*/, PLAYER::PLAYER_PED_ID(), -1f);
					PED::TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, joaat("ARMY"));
				}
				func_864();
				__LIB_28__::func_742(15);
			}
			else
			{
				func_864();
				__LIB_28__::func_742(15);
			}
		}
	}
}

void func_864()//Position - 0x7E859
{
	Local_156.f_0 = 0;
	Local_156.f_2 = 0;
	Local_156.f_1 = 0;
	__LIB_0__::func_579(&(Local_156.f_3));
}

int func_868(int iParam0, bool bParam1, bool bParam2)//Position - 0x7E92A
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_157() != 0)
		{
			return 0;
		}
	}
	if (__LIB_18__::func_303(PLAYER::PLAYER_ID(), 0, -1))
	{
		return 0;
	}
	if (bParam1)
	{
		return 1;
	}
	if (func_869())
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_869()//Position - 0x7E985
{
	int iVar0;
	if (BitTest(Global_2815059.f_4624, 4))
	{
		if (__LIB_1__::func_113(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = __LIB_0__::func_603(PLAYER::PLAYER_ID());
			if (iVar0 != __LIB_0__::func_160())
			{
				if (BitTest(Global_1853348[iVar0 /*834*/].f_833, 17))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_873()//Position - 0x7EA68
{
	if (!func_857(NETWORK::PARTICIPANT_ID(), 4))
	{
		switch (func_82())
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 233.3549f, 231.51205f, 103.5467f, 218.59485f, 192.27843f, 114.577736f, 35f, false, true, 0))
				{
					func_881(PLAYER::PLAYER_ID(), __LIB_1__::func_363(), 0, 0);
					func_171(4);
					__LIB_32__::func_914(0);
					__LIB_21__::func_123();
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1224.6561f, -308.2319f, 35.871216f, -1213.5377f, -329.46338f, 51.119835f, 40f, false, true, 0))
				{
					func_881(PLAYER::PLAYER_ID(), __LIB_1__::func_363(), 0, 0);
					func_171(4);
					__LIB_32__::func_914(0);
					__LIB_21__::func_123();
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1175.198f, 2703.5562f, 36.27917f, 1175.2092f, 2676.8113f, 46.935234f, 34f, false, true, 0))
				{
					func_881(PLAYER::PLAYER_ID(), __LIB_1__::func_363(), 0, 0);
					func_171(4);
					__LIB_32__::func_914(0);
					__LIB_21__::func_123();
				}
				break;
			}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !func_869())
	{
		switch (func_82())
		{
			case 0:
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.96234f, 208.36183f, 100.20383f, 253.88339f, 229.8856f, 114.05701f, 25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 268.40588f, 224.51048f, 101.07106f, 261.02838f, 203.1918f, 113.53298f, 10f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 234.62138f, 216.85121f, 97.03669f, 240.05165f, 234.83144f, 112.04133f, 6f, false, true, 0))
				{
					func_881(PLAYER::PLAYER_ID(), __LIB_1__::func_363(), 1, 0);
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1214.01f, -327.93246f, 36.531147f, -1208.0818f, -339.94666f, 39.846817f, 13.75f, false, true, 0))
				{
					func_881(PLAYER::PLAYER_ID(), __LIB_1__::func_363(), 1, 0);
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1174.6202f, 2703.8528f, 36.35276f, 1175.1023f, 2717.093f, 40.316284f, 13f, false, true, 0))
				{
					func_881(PLAYER::PLAYER_ID(), __LIB_1__::func_363(), 1, 0);
				}
				break;
			}
	}
}

void func_881(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7F153
{
	if (iParam0 != __LIB_0__::func_160() && __LIB_0__::func_154(iParam0, 1, 1))
	{
		__LIB_24__::func_776(__LIB_0__::func_679(iParam0), iParam1, iParam2, iParam3);
	}
}

void func_883()//Position - 0x7F1C8
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	Var0 = { func_891() };
	bVar1 = ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1.5f, 1.5f, 3f, false, true, 0);
	if ((func_888(1, 1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0) && bVar1)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && __LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
		{
		}
	}
	if (!func_885())
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < __LIB_0__::func_109())
	{
		if (!func_4(iVar2, 2) && !func_521(iVar2, NETWORK::PARTICIPANT_ID(), 5))
		{
			if (iLocal_160[iVar2] == PLAYER::PLAYER_ID())
			{
				if (bVar1)
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(Local_344.f_7[iVar2 /*4*/]), false, false);
					func_884(iVar2, 5);
					func_884(iVar2, 6);
				}
			}
		}
		iVar2++;
	}
}

void func_884(int iParam0, int iParam1)//Position - 0x7F2B3
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::SET_BIT(&(Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/].f_3[iParam0 /*2*/][iVar0]), iVar1);
}

int func_885()//Position - 0x7F2E2
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		return 1;
	}
	return 0;
}

int func_888(bool bParam0, bool bParam1)//Position - 0x7F4BF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iVar0) + 1;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			iVar3 = __LIB_0__::func_201(iVar0, (iVar2 - 1), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3) && PED::IS_PED_A_PLAYER(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
				if (func_550(iVar4))
				{
					if (!bParam1 || (__LIB_0__::func_582() != __LIB_0__::func_160() && __LIB_2__::func_145(PLAYER::PLAYER_ID(), iVar4)))
					{
						if (!bParam0)
						{
							if (iVar3 != PLAYER::PLAYER_PED_ID())
							{
								return 1;
							}
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar2++;
		}
	}
	return 0;
}

Vector3 func_891()//Position - 0x7F633
{
	switch (func_82())
	{
		case 0:
			if (func_522())
			{
				return -1060.896f, -1573.6615f, 3.5558f;
			}
			return -1282.686f, -1158.021f, 4.6065f;
		case 1:
			if (func_522())
			{
				return 964.673f, -1711.439f, 29.266f;
			}
			return 828.874f, -2477.064f, 23.016f;
		case 2:
			if (func_522())
			{
				return -468.6382f, 648.0085f, 143.1886f;
			}
			return -390.122f, 393.7943f, 107.3897f;
		default:
	}
	return -1715.9634f, 2702.7922f, -0.0884f;
}

void func_892()//Position - 0x7F6E6
{
	if (func_125() != 2 || !func_522())
	{
		return;
	}
	if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), func_81(), 100f, 1))
	{
		func_171(3);
	}
}

void func_893()//Position - 0x7F71F
{
	if (func_522())
	{
		if (func_165() == 1)
		{
			func_896(1);
		}
		else
		{
			func_894(1);
		}
	}
}

void func_894(bool bParam0)//Position - 0x7F743
{
	if (Global_1640761)
	{
		Global_2815059.f_932 = __LIB_33__::func_104(PLAYER::PLAYER_ID());
		Global_1640761 = 0;
	}
	if (bParam0)
	{
		if (Global_1640762)
		{
			Global_1640762 = 0;
		}
	}
}

void func_896(bool bParam0)//Position - 0x7F797
{
	if (__LIB_20__::func_491(PLAYER::PLAYER_ID()))
	{
		Global_2815059.f_932 = 9;
		if (!Global_1640761)
		{
			Global_1640761 = 1;
		}
		if (bParam0)
		{
			if (!Global_1640762)
			{
				Global_1640762 = 1;
			}
		}
	}
}

void func_897()//Position - 0x7F7D2
{
	if (((__LIB_25__::func_938() || __LIB_0__::func_114()) || __LIB_36__::func_811(242)) || !bLocal_166)
	{
		__LIB_18__::func_455();
		return;
	}
	if (func_522())
	{
		func_1020();
		__LIB_0__::func_371();
		func_1002();
		func_994();
		func_956(0);
		func_954();
		func_913();
		if (func_898(&(Local_344.f_68), func_5(), func_912(), func_157() != 0, &bLocal_165, 0))
		{
			func_171(10);
		}
	}
	else
	{
		if (!func_6(9))
		{
			return;
		}
		switch (__LIB_26__::func_804(PLAYER::PLAYER_ID()))
		{
			case 0:
				__LIB_18__::func_455();
				break;
			case 1:
			case 2:
				func_956(1);
				func_1020();
				func_954();
				__LIB_18__::func_455();
				break;
			case 3:
				func_956(0);
				func_1020();
				__LIB_0__::func_371();
				func_1002();
				func_994();
				func_954();
				func_898(&(Local_344.f_68), func_5(), func_912(), func_157() != 0, &bLocal_165, 0);
				break;
			}
	}
}

int func_898(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x7F8D8
{
	int iVar0;
	int iVar1;
	if (bParam3)
	{
		if (BitTest(Global_4541229, 28))
		{
			__LIB_11__::func_54();
			*bParam4 = 0;
		}
		return 0;
	}
	if (!__LIB_0__::func_649(uParam0))
	{
		if (bParam1)
		{
			__LIB_0__::func_580(uParam0, 0, 0);
			__LIB_9__::func_32(28);
		}
	}
	else if (__LIB_2__::func_47(uParam0, iParam5, 0))
	{
		if (bParam2)
		{
			if (!BitTest(Global_4541229, 28))
			{
				__LIB_11__::func_53();
				*bParam4 = 1;
			}
			if ((!__LIB_1__::func_302(28) && __LIB_20__::func_491(PLAYER::PLAYER_ID())) && func_907(0))
			{
				__LIB_0__::func_151("BBH_VISWARN" /* GXT: WARNING: You are visible ~HUD_COLOUR_RED~~BLIP_SIGHTSEER~~s~ to all players in session. */, -1);
				func_903(__LIB_0__::func_396(PLAYER::PLAYER_ID()), 0, 1);
				__LIB_9__::func_40(28);
			}
		}
		else if (BitTest(Global_4541229, 28))
		{
			__LIB_11__::func_54();
			*bParam4 = 0;
		}
		return 1;
	}
	else
	{
		iVar0 = (iParam5 - __LIB_1__::func_295(uParam0, 0, 0));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		iVar1 = 6;
		if (iVar0 > 5000)
		{
			iVar1 = 1;
		}
		__LIB_6__::func_929(iVar0, "GR_GLBPNG" /* GXT: GLOBAL SIGNAL */, 0, 0, -1, 0, 6, 0, iVar1, 0, 0, 0, iVar1, 0, 0, 0, 0, -1);
	}
	return 0;
}

void func_903(int iParam0, bool bParam1, bool bParam2)//Position - 0x7FBAF
{
	struct<14> Var0;
	int iVar1;
	Var0.f_2 = 107890679;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = __LIB_0__::func_582();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		iVar1 = __LIB_0__::func_679(PLAYER::PLAYER_ID());
	}
	else if (bParam2)
	{
		iVar1 = func_906(1);
	}
	else
	{
		iVar1 = __LIB_6__::func_900(1, 1);
	}
	__LIB_1__::func_226(Var0, iVar1);
}

int func_906(bool bParam0)//Position - 0x7FC9C
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_6__::func_401(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_0__::func_154(iVar3, 0, 0))
			{
				if (__LIB_1__::func_145())
				{
					if (__LIB_6__::func_941(iVar3, PLAYER::PLAYER_ID(), bParam0))
					{
						MISC::SET_BIT(&uVar0, iVar3);
					}
				}
				else
				{
					iVar2 = __LIB_0__::func_582();
					if (iVar2 != __LIB_0__::func_160())
					{
						if (__LIB_6__::func_941(iVar3, iVar2, bParam0))
						{
							MISC::SET_BIT(&uVar0, iVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

int func_907(int iParam0)//Position - 0x7FD1C
{
	if (((((((((!__LIB_0__::func_190() && !__LIB_0__::func_661()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && __LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1)) && (!__LIB_1__::func_159() || iParam0)) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		return 1;
	}
	return 0;
}

int func_912()//Position - 0x7FDF0
{
	if (func_550(PLAYER::PLAYER_ID()) || func_888(1, 1))
	{
		return 1;
	}
	return 0;
}

void func_913()//Position - 0x7FE14
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	struct<6> Var3;
	if (func_951())
	{
		iVar1 = -1;
		if (__LIB_0__::func_436())
		{
			__LIB_0__::func_488(0);
		}
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (func_943(iVar0))
			{
				if (func_921(iVar0))
				{
					if (__LIB_0__::func_109())
					{
						__LIB_0__::func_579(&uLocal_158);
					}
					if (iVar0 == 10)
					{
						__LIB_9__::func_40(30);
					}
					iVar1 = iVar0;
				}
				else
				{
					Jump @146; //curOff = 89
					if (func_919(iVar0) || __LIB_0__::func_114(iVar0))
					{
						Var2 = { __LIB_0__::func_390() };
						Var3 = { func_914(iVar0) };
						if (MISC::ARE_STRINGS_EQUAL(&Var2, &Var3))
						{
							iVar1 = iVar0;
						}
					}
					iVar0++;
				}
				if (iLocal_177 != iVar1)
				{
					iLocal_177 = iVar1;
				}
				Jump @191; //curOff = 168
				if (iLocal_177 != -1)
				{
					if (!__LIB_0__::func_436())
					{
						__LIB_0__::func_488(1);
					}
				}
			}
struct<6> func_914(int iParam0)//Position - 0x7FED6
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	StringCopy(&Var0, func_916(iParam0), 24);
	iVar1 = func_915(iParam0);
	if (iVar1 > 1)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1 + 1);
		StringIntConCat(&Var0, iVar2, 24);
	}
	return Var0;
}

int func_915(int iParam0)//Position - 0x7FF0B
{
	switch (iParam0)
	{
		case 6:
			return 3;
		case 7:
			return 3;
		case 8:
			return 3;
		case 9:
			return 3;
		case 10:
			return 3;
		default:
	}
	return 1;
}

char* func_916(int iParam0)//Position - 0x7FF4D
{
	switch (iParam0)
	{
		case 0:
			return "PAIFM_CJBJO";
		case 1:
			return "PAIFM_CJBJS1";
		case 2:
			return "PAIFM_CJBJS2";
		case 3:
			return "PAIFM_CJBJIN";
		case 4:
			return "PAIFM_CJBJMN";
		case 5:
			return "PAIFM_CJBJST";
		case 6:
			return "PAIFM_GENVC";
		case 7:
			return "PAIFM_GENLC";
		case 8:
			return "PAIFM_GENVR";
		case 9:
			return "PAIFM_GENTM";
		case 10:
			return "PAIFM_GENAD";
		default:
	}
	return "";
}

bool func_919(int iParam0)//Position - 0x80026
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return BitTest(uLocal_176[iVar0], iVar1);
}

int func_921(int iParam0)//Position - 0x8004F
{
	char* sVar0;
	if (func_919(iParam0))
	{
		return 0;
	}
	if (iLocal_177 != -1)
	{
		if (func_942(iParam0) >= func_942(iLocal_177))
		{
			if (__LIB_0__::func_75())
			{
				if (__LIB_0__::func_114(iParam0))
				{
					__LIB_6__::func_771();
				}
				else
				{
					__LIB_6__::func_833();
				}
			}
		}
	}
	if (!__LIB_0__::func_75())
	{
		MemCopy(&sVar0, {func_914(iParam0)}, 4);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
		{
			__LIB_0__::func_203(&uLocal_178, 2, 0, "PAIGE", 0, 1);
			if (__LIB_37__::func_799(&uLocal_178, "PAIFMAU", &sVar0, 9, 0, 0, 0))
			{
				if (!__LIB_0__::func_114(iParam0))
				{
					func_922(iParam0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_922(int iParam0)//Position - 0x800EE
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(uLocal_176[iVar0]), iVar1);
}

int func_942(int iParam0)//Position - 0x808B2
{
	switch (iParam0)
	{
		case 6:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		default:
	}
	return 3;
}

int func_943(int iParam0)//Position - 0x808E0
{
	if (func_919(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			if (func_165() == 1 && Local_344.f_73 != -1)
			{
				if (Local_344.f_73 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (__LIB_28__::func_709(6))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		case 2:
			return (func_165() == 1 && func_6(15));
		case 3:
			return func_6(2);
		case 4:
			return (func_84(func_948()) == 9 || func_84(func_948()) == 3);
		case 5:
			return func_125() == 6;
		case 6:
			return ((((func_947(5) && func_947(8)) && iLocal_160[0] != __LIB_0__::func_160()) && func_946(iLocal_160[0], 1128792064)) && __LIB_2__::func_145(PLAYER::PLAYER_ID(), iLocal_160[0]));
		case 7:
			return ((func_888(1, 1) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && __LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), func_891(), 200f, 1));
		case 8:
			return ((func_947(5) && func_6(9)) && __LIB_2__::func_47(&uLocal_158, 3000, 0));
		case 9:
			return iLocal_175 < 300000;
		case 10:
			return (((!__LIB_1__::func_302(30) && __LIB_9__::func_839() == 0) && func_947(4)) && __LIB_2__::func_47(&uLocal_158, 2000, 0));
	}
	return 0;
}

int func_946(int iParam0, float fParam1)//Position - 0x80AD8
{
	int iVar0;
	bool bVar1;
	if (__LIB_0__::func_154(Global_1574681, 1, 1) && __LIB_0__::func_154(iParam0, 1, 1))
	{
		iVar0 = __LIB_0__::func_582();
		bVar1 = ((__LIB_0__::func_603(Global_1574681) != iVar0 || iVar0 == __LIB_0__::func_160()) && Global_1574681 != PLAYER::PLAYER_ID());
		if (bVar1)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(Global_1574681), true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), true)) < (fParam1 * fParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_947(int iParam0)//Position - 0x80B57
{
	return (func_919(iParam0) && iLocal_177 != iParam0);
}

int func_948()//Position - 0x80B70
{
	switch (func_82())
	{
		case 0:
			return 1;
		case 1:
			return 3;
		case 2:
			return 1;
		default:
	}
	return 1;
}

int func_951()//Position - 0x80BC4
{
	if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 0;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!__LIB_1__::func_335(PLAYER::PLAYER_ID(), 0))
	{
		if (__LIB_10__::func_887())
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_smpl_interior_int")) > 0 && Global_1946244 != 7)
		{
			return 0;
		}
	}
	if (__LIB_1__::func_352(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (__LIB_1__::func_105(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_954()//Position - 0x80CA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[iVar0 /*4*/]))
		{
			if (iLocal_160[iVar0] == __LIB_0__::func_160())
			{
				if (ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_344.f_7[iVar0 /*4*/])))
				{
					fVar5 = 0.3f;
					fVar6 = 0f;
					iVar7 = NETWORK::NET_TO_OBJ(Local_344.f_7[iVar0 /*4*/]);
					HUD::GET_HUD_COLOUR(18, &iVar1, &iVar2, &iVar3, &uVar4);
					__LIB_10__::func_948(iVar7, iVar1, iVar2, iVar3, fVar5, fVar6, 0, 1, 0, 0);
				}
			}
			else
			{
				iVar8 = iLocal_160[iVar0];
				if (iVar8 != PLAYER::PLAYER_ID())
				{
					if (__LIB_0__::func_154(iVar8, 1, 1))
					{
						if (func_521(iVar0, NETWORK::PARTICIPANT_ID(), 3))
						{
							HUD::GET_HUD_COLOUR(6, &iVar1, &iVar2, &iVar3, &uVar4);
						}
						else
						{
							HUD::GET_HUD_COLOUR(18, &iVar1, &iVar2, &iVar3, &uVar4);
						}
						__LIB_10__::func_948(PLAYER::GET_PLAYER_PED(iVar8), iVar1, iVar2, iVar3, 1056964608, 0, 0, 1, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_956(bool bParam0)//Position - 0x80F91
{
	if (!bParam0)
	{
		func_990();
	}
	func_957();
}

void func_957()//Position - 0x80FA7
{
	if (!__LIB_28__::func_709(9))
	{
		if (func_157() == 0)
		{
			if ((!__LIB_25__::func_938() && !__LIB_0__::func_114()) && !__LIB_36__::func_811(242))
			{
				if (func_522())
				{
					__LIB_41__::func_38(86, "MBBJ_BMT_START" /* GXT: CLIENT JOB */, "MBBJ_BMS_STARTa" /* GXT: Steal the gold */, 1, -1, 2, 1, 0);
				}
				else
				{
					__LIB_41__::func_38(86, "MBBJ_BMT_START" /* GXT: CLIENT JOB */, "MBBJ_BMS_STARTb" /* GXT: Steal the gold */, 1, -1, 2, 1, 0);
				}
				__LIB_28__::func_708(9);
			}
		}
	}
	else if (!func_522())
	{
		func_958(4);
	}
	else if (((__LIB_0__::func_582() != __LIB_0__::func_160() && !__LIB_1__::func_229(__LIB_0__::func_582())) && !func_857(NETWORK::PARTICIPANT_ID(), 11)) && func_165() == 1)
	{
		func_958(0);
	}
}

void func_958(int iParam0)//Position - 0x81068
{
	struct<8> Var0;
	if (__LIB_28__::func_384())
	{
		if (!__LIB_24__::func_893(iParam0))
		{
			switch (iParam0)
			{
				case 1:
					__LIB_0__::func_151("MBBJ_HACKHELPb" /* GXT: Press ~INPUTGROUP_FRONTEND_DPAD_LR~ to cycle through the security cameras and locate the bank that's being robbed. */, -1);
					break;
				case 2:
					__LIB_0__::func_151("MBBJ_HACKHELPc" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to hack into the bank's interior security camera. */, -1);
					break;
				case 3:
					__LIB_0__::func_151("MBBJ_HACKHELPd" /* GXT: Press ~INPUT_FRONTEND_CANCEL~ to exit the security camera. */, -1);
					break;
				case 5:
					__LIB_0__::func_151("MBBJ_HACKWAIT" /* GXT: Wait for Paige to hack into the security feed. */, -1);
					break;
				case 4:
					if ((__LIB_1__::func_301() != __LIB_0__::func_160() && __LIB_1__::func_113(__LIB_1__::func_301(), 1)) && HUD::DOES_BLIP_EXIST(iLocal_161[0]))
					{
						StringCopy(&Var0, func_961(__LIB_1__::func_301()), 64);
						if (HUD::GET_BLIP_COLOUR(iLocal_161[0]) == 1)
						{
							__LIB_2__::func_299("MBBJ_RVLSTARTr" /* GXT: ~a~~s~ have started Robbery in Progress. Steal the gold ~HUD_COLOUR_RED~~BLIP_BAT_HACK_GOLD~~s~ and deliver it to the drop-off to earn cash and RP. */, &Var0, __LIB_33__::func_104(__LIB_1__::func_301()), -1);
						}
						else
						{
							__LIB_2__::func_299("MBBJ_RVLSTARTg" /* GXT: ~a~~s~ have started Robbery in Progress. Steal the gold ~HUD_COLOUR_GREEN~~BLIP_BAT_HACK_GOLD~~s~ and deliver it to the drop-off to earn cash and RP. */, &Var0, __LIB_33__::func_104(__LIB_1__::func_301()), -1);
						}
					}
					break;
				case 0:
					if (func_557(0))
					{
						__LIB_0__::func_151("MBBJ_GANGSTRTa" /* GXT: Access the touchscreen computer ~HUD_COLOUR_GREEN~~BLIP_LAPTOP~~s~ to hack into the security cameras and locate the robbery. */, -1);
					}
					else
					{
						__LIB_0__::func_151("MBBJ_GANGSTRTb" /* GXT: Access the touchscreen computer in the Nerve Center of the Terrorbyte ~HUD_COLOUR_BLUE~~BLIP_TRUCK~~s~ to hack into the security cameras and locate the robbery. */, -1);
					}
					break;
			}
			__LIB_24__::func_892(iParam0);
		}
	}
}

char* func_961(int iParam0)//Position - 0x811B5
{
	if (__LIB_1__::func_113(iParam0, 1))
	{
		return __LIB_32__::func_478(iParam0);
	}
	return PLAYER::GET_PLAYER_NAME(iParam0);
}

void func_990()//Position - 0x81BF8
{
	if (!__LIB_28__::func_709(10))
	{
		if (func_157() != 0 && __LIB_2__::func_30(Local_350, 1000, 0))
		{
			if ((!__LIB_25__::func_938() && !__LIB_0__::func_114()) && !__LIB_36__::func_811(242))
			{
				if (func_520(PLAYER::PLAYER_ID()))
				{
					__LIB_41__::func_38(100, "BK_WINNER" /* GXT: MISSION PASSED */, "MBBJ_BMS_PASS" /* GXT: Gold delivered */, 1, -1, 2, 1, 0);
				}
				else if (func_992() == 0)
				{
					__LIB_41__::func_38(100, "BK_OVER" /* GXT: MISSION OVER */, "MBBJ_BMS_NONE" /* GXT: The gold was not delivered */, 1, -1, 2, 1, 0);
				}
				else
				{
					if (__LIB_0__::func_154(Local_344.f_7[0 /*4*/].f_3, 0, 1))
					{
					}
					switch (func_992())
					{
						case 1:
							if (__LIB_0__::func_154(Local_344.f_7[0 /*4*/].f_3, 0, 1))
							{
								func_991(91, Local_344.f_7[0 /*4*/].f_3, -1, "MBBJ_BMS_PLAYa" /* GXT: ~a~~s~ delivered the gold */, "BK_OVER" /* GXT: MISSION OVER */, 1, -1, 2, 0);
							}
							else
							{
								__LIB_41__::func_38(91, "BK_OVER" /* GXT: MISSION OVER */, "MBBJ_BMS_PLAYb" /* GXT: A rival player delivered the gold */, 1, -1, 2, 1, 0);
							}
							break;
						}
				}
				__LIB_28__::func_708(10);
			}
		}
	}
}

int func_991(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x81D02
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
	__LIB_0__::func_975(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = uParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		__LIB_6__::func_896(&(Var0.f_69), iParam8);
	}
	return __LIB_39__::func_707(&Var0);
}

int func_992()//Position - 0x81D83
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (func_4(iVar0, 2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_994()//Position - 0x81E05
{
	int iVar0;
	if (__LIB_0__::func_649(&(Local_344.f_3)))
	{
		iLocal_175 = (func_155() - __LIB_1__::func_295(&(Local_344.f_3), 0, 0));
		if (iLocal_175 < func_155())
		{
			if (iLocal_175 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			if (iLocal_175 > 0)
			{
				__LIB_6__::func_929(iLocal_175, "HACK_WORK_END" /* GXT: JOB TIME */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				__LIB_6__::func_929(0, "HACK_WORK_END" /* GXT: JOB TIME */, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			__LIB_34__::func_556(iLocal_175, func_157() != 0, &iLocal_351, -1);
		}
	}
}

void func_1002()//Position - 0x824AC
{
	int iVar0;
	struct<8> Var1;
	switch (func_125())
	{
		case 1:
			if (func_1017())
			{
			}
			else if (Local_344.f_73 != -1 && Local_344.f_73 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(Local_344.f_73))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_344.f_73);
					if (__LIB_0__::func_154(iVar0, 0, 1))
					{
						__LIB_33__::func_13("MBBJ_HACKCAMc" /* GXT: Wait for <C>~a~</C>~s~ to locate the robbery. */, iVar0, 1, 0);
					}
				}
			}
			else if (!__LIB_28__::func_709(6))
			{
				if (func_557(0))
				{
					if (!__LIB_28__::func_709(7))
					{
						__LIB_25__::func_25("MBBJ_HACKCAMa" /* GXT: Access the ~HUD_COLOUR_GREEN~touchscreen computer. */, 0);
					}
				}
				else
				{
					__LIB_25__::func_25("MBBJ_HACKCAMb" /* GXT: Enter the rear of the ~HUD_COLOUR_BLUE~Terrorbyte. */, 0);
				}
			}
			else if (!__LIB_28__::func_709(7))
			{
				if (__LIB_28__::func_709(11))
				{
					__LIB_25__::func_25("MBBJ_INTERCAM" /* GXT: Patch into the interior camera. */, 0);
				}
				else
				{
					__LIB_25__::func_25("MBBJ_LOCATECAM" /* GXT: Use the security cameras to locate the robbery. */, 0);
				}
			}
			break;
		case 2:
			__LIB_25__::func_25(func_1010(), 0);
			break;
		case 3:
			__LIB_25__::func_25("MBBJ_TAKEOUT" /* GXT: Take out the ~HUD_COLOUR_RED~bank robbers. */, 0);
			break;
		case 4:
			__LIB_25__::func_25("MBBJ_COLLECT" /* GXT: Steal the ~HUD_COLOUR_GREEN~gold. */, 0);
			break;
		case 5:
			if (iLocal_160[0] != __LIB_0__::func_160())
			{
				StringCopy(&Var1, func_961(iLocal_160[0]), 64);
				if (func_522())
				{
					if (__LIB_1__::func_113(iLocal_160[0], 1))
					{
						__LIB_36__::func_297("MBBJ_RECOVERa" /* GXT: Recover the ~HUD_COLOUR_RED~gold~s~ from ~a~. */, &Var1, __LIB_33__::func_104(iLocal_160[0]), 0);
					}
					else
					{
						__LIB_36__::func_297("MBBJ_RECOVERb" /* GXT: Recover the ~HUD_COLOUR_RED~gold~s~ from <C>~a~</C>. */, &Var1, __LIB_33__::func_104(iLocal_160[0]), 0);
					}
				}
				else if (__LIB_1__::func_113(iLocal_160[0], 1))
				{
					__LIB_36__::func_297("MBBJ_RECOVERc" /* GXT: Steal the ~HUD_COLOUR_RED~gold~s~ from ~a~. */, &Var1, __LIB_33__::func_104(iLocal_160[0]), 0);
				}
				else
				{
					__LIB_36__::func_297("MBBJ_RECOVERd" /* GXT: Steal the ~HUD_COLOUR_RED~gold~s~ from <C>~a~</C>. */, &Var1, __LIB_33__::func_104(iLocal_160[0]), 0);
				}
			}
			break;
		case 6:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				__LIB_25__::func_25(func_1003(), 0);
			}
			else
			{
				__LIB_25__::func_25("MBBJ_LOSECOPS" /* GXT: Lose the cops. */, 0);
			}
			break;
	}
}

char* func_1003()//Position - 0x82683
{
	if (func_550(PLAYER::PLAYER_ID()))
	{
		return "MBBJ_DELIVER" /* GXT: Deliver the gold to the ~HUD_COLOUR_YELLOW~drop-off. */;
	}
	else if (func_551(PLAYER::PLAYER_ID(), 1))
	{
		return "MBBJ_HELPDLVR" /* GXT: Help deliver the gold to the ~HUD_COLOUR_YELLOW~drop-off. */;
	}
	return "MBBJ_DELIVER" /* GXT: Deliver the gold to the ~HUD_COLOUR_YELLOW~drop-off. */;
}

char* func_1010()//Position - 0x8283F
{
	switch (func_82())
	{
		case 0:
			return "MBBJ_GOTO_PS" /* GXT: Go to ~HUD_COLOUR_YELLOW~Pacific Standard Bank. */;
		case 1:
			return "MBBJ_GOTO_FB" /* GXT: Go to ~HUD_COLOUR_YELLOW~Fleeca Bank. */;
		case 2:
			return "MBBJ_GOTO_FB" /* GXT: Go to ~HUD_COLOUR_YELLOW~Fleeca Bank. */;
		default:
	}
	return "MBBJ_GOTO_B" /* GXT: Go to the ~HUD_COLOUR_YELLOW~bank. */;
}

int func_1017()//Position - 0x82A9A
{
	if (__LIB_20__::func_491(PLAYER::PLAYER_ID()) && __LIB_1__::func_229(__LIB_0__::func_582()))
	{
		if (__LIB_0__::func_582() == PLAYER::PLAYER_ID())
		{
			__LIB_25__::func_25("MBOT_REQTERb" /* GXT: Request your Terrorbyte. */, 0);
			if (!__LIB_1__::func_302(27) && func_907(0))
			{
				__LIB_0__::func_151("MBH_REQTERb" /* GXT: The Terrorbyte is required for the initial stages of the Job. Request it again nearby via the Services section of the Interaction Menu. */, -1);
				__LIB_9__::func_40(27);
			}
		}
		else
		{
			__LIB_33__::func_13("MBOT_REQTERg" /* GXT: Wait for <C>~a~</C>~s~ to request their Terrorbyte. */, __LIB_0__::func_582(), 1, 0);
			if (!__LIB_1__::func_302(27) && func_907(0))
			{
				__LIB_5__::func_571("MBH_REQTERg" /* GXT: The Terrorbyte is required for the initial stages of the Job. Wait for ~a~~s~ to request it again nearby via the Services section of the Interaction Menu. */, PLAYER::GET_PLAYER_NAME(__LIB_0__::func_582()), 0, -1);
				__LIB_9__::func_40(27);
			}
		}
		return 1;
	}
	__LIB_9__::func_32(27);
	return 0;
}

void func_1020()//Position - 0x82B70
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (func_1039(iVar0))
		{
			func_1035(iVar0);
		}
		else
		{
			func_1034(iVar0);
		}
		iVar0++;
	}
	if (func_1033())
	{
		func_1032();
	}
	else
	{
		func_1031();
	}
	if (func_1030())
	{
		func_1028();
	}
	else
	{
		func_1027();
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (func_1025(iVar0))
		{
			func_1022(iVar0);
		}
		else
		{
			func_1021(iVar0);
		}
		iVar0++;
	}
}

void func_1021(int iParam0)//Position - 0x82BF4
{
	if (HUD::DOES_BLIP_EXIST(iLocal_163[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_163[iParam0]));
	}
}

void func_1022(int iParam0)//Position - 0x82C15
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_163[iParam0]))
	{
		iLocal_163[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_344.f_24[iParam0 /*2*/]));
		HUD::SET_BLIP_SPRITE(iLocal_163[iParam0], 432);
		HUD::SET_BLIP_SCALE(iLocal_163[iParam0], 0.7f);
		__LIB_6__::func_919(&(iLocal_163[iParam0]), 6);
		HUD::SET_BLIP_PRIORITY(iLocal_163[iParam0], 12);
		HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_163[iParam0], false);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_163[iParam0], "MBBJ_BLIP_ENEMY" /* GXT: Enemy */);
	}
}

int func_1025(int iParam0)//Position - 0x82F25
{
	if (func_125() == 3 && func_855(iParam0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_24[iParam0 /*2*/]) && !__LIB_0__::func_680(Local_344.f_24[iParam0 /*2*/]))
		{
			return 1;
		}
	}
	return 0;
}

void func_1027()//Position - 0x82F88
{
	if (HUD::DOES_BLIP_EXIST(iLocal_164))
	{
		HUD::REMOVE_BLIP(&iLocal_164);
	}
}

void func_1028()//Position - 0x82FA1
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	float fVar5;
	struct<3> Var6;
	Var0 = { func_891() };
	if (!HUD::DOES_BLIP_EXIST(iLocal_164))
	{
		iLocal_164 = HUD::ADD_BLIP_FOR_COORD(Var0);
		HUD::SET_BLIP_MARKER_LONG_DISTANCE(iLocal_164, 1);
		HUD::SET_BLIP_PRIORITY(iLocal_164, 11);
	}
	else
	{
		if (__LIB_1__::func_335(PLAYER::PLAYER_ID(), 0))
		{
			if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_164))
			{
				HUD::SET_BLIP_ROUTE(iLocal_164, false);
			}
		}
		else if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_164))
		{
			HUD::SET_BLIP_ROUTE(iLocal_164, true);
		}
		fVar5 = __LIB_23__::func_395();
		HUD::GET_HUD_COLOUR(12, &iVar1, &iVar2, &iVar3, &uVar4);
		Var6 = { Var0 };
		Var6.f_2 = (Var6.f_2 - 0.7f);
		GRAPHICS::DRAW_MARKER(1, Var6, 0f, 0f, 0f, 0f, 0f, 0f, (fVar5 * 1.8f), (fVar5 * 1.8f), 2.5f, iVar1, iVar2, iVar3, 150, false, false, 2, false, 0, 0, false);
	}
}

int func_1030()//Position - 0x83079
{
	if ((func_550(PLAYER::PLAYER_ID()) || func_551(PLAYER::PLAYER_ID(), 1)) && func_885())
	{
		return 1;
	}
	return 0;
}

void func_1031()//Position - 0x830A9
{
	if (HUD::DOES_BLIP_EXIST(iLocal_162))
	{
		HUD::SET_BLIP_ROUTE(iLocal_162, false);
		HUD::REMOVE_BLIP(&iLocal_162);
	}
}

void func_1032()//Position - 0x830CA
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_162))
	{
		iLocal_162 = HUD::ADD_BLIP_FOR_COORD(func_81());
		__LIB_6__::func_919(&iLocal_162, 12);
		HUD::SET_BLIP_PRIORITY(iLocal_162, 12);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_162, false);
	}
	else if (__LIB_1__::func_335(PLAYER::PLAYER_ID(), 0))
	{
		if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_162))
		{
			HUD::SET_BLIP_ROUTE(iLocal_162, false);
		}
	}
	else if (!HUD::DOES_BLIP_HAVE_GPS_ROUTE(iLocal_162))
	{
		HUD::SET_BLIP_ROUTE(iLocal_162, true);
	}
}

int func_1033()//Position - 0x83139
{
	if (func_125() == 2)
	{
		return 1;
	}
	return 0;
}

void func_1034(int iParam0)//Position - 0x8314E
{
	if (HUD::DOES_BLIP_EXIST(iLocal_161[iParam0]))
	{
		HUD::SET_BLIP_ROUTE(iLocal_161[iParam0], false);
		HUD::REMOVE_BLIP(&(iLocal_161[iParam0]));
	}
}

void func_1035(int iParam0)//Position - 0x8317B
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_161[iParam0]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[iParam0 /*4*/]))
		{
			iLocal_161[iParam0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_344.f_7[iParam0 /*4*/]));
			HUD::SET_BLIP_SPRITE(iLocal_161[iParam0], func_1038());
			HUD::SET_BLIP_SCALE(iLocal_161[iParam0], __LIB_11__::func_2());
			HUD::SET_BLIP_COLOUR(iLocal_161[iParam0], func_1036(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_161[iParam0], "MBBJ_BLIP_BAG" /* GXT: Gold */);
			HUD::SET_BLIP_PRIORITY(iLocal_161[iParam0], 12);
			HUD::SET_BLIP_AS_SHORT_RANGE(iLocal_161[iParam0], false);
			if (!func_521(iParam0, NETWORK::PARTICIPANT_ID(), 4))
			{
				HUD::SET_BLIP_FLASHES(iLocal_161[iParam0], true);
				HUD::SET_BLIP_FLASH_INTERVAL(iLocal_161[iParam0], 250);
				HUD::SET_BLIP_FLASH_TIMER(iLocal_161[iParam0], 7000);
				func_884(iParam0, 4);
			}
		}
	}
	else if (HUD::GET_BLIP_COLOUR(iLocal_161[iParam0]) != func_1036(iParam0))
	{
		HUD::SET_BLIP_COLOUR(iLocal_161[iParam0], func_1036(iParam0));
	}
}

int func_1036(int iParam0)//Position - 0x83277
{
	if (func_521(iParam0, NETWORK::PARTICIPANT_ID(), 3))
	{
		return 1;
	}
	return 2;
}

int func_1038()//Position - 0x8329B
{
	return 618;
}

int func_1039(int iParam0)//Position - 0x832A6
{
	if (iLocal_160[iParam0] == PLAYER::PLAYER_ID())
	{
		return 0;
	}
	if (!func_4(iParam0, 1))
	{
		return 0;
	}
	if (func_521(iParam0, NETWORK::PARTICIPANT_ID(), 1))
	{
		return 0;
	}
	return 1;
}

void func_1040()//Position - 0x832E2
{
	bool bVar0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	if (!func_522())
	{
		return;
	}
	bVar0 = __LIB_8__::func_252();
	if (!__LIB_28__::func_709(5))
	{
		if (func_1104())
		{
			__LIB_28__::func_708(5);
		}
	}
	else
	{
		func_1088();
		if (__LIB_28__::func_709(8))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (__LIB_0__::func_649(&uLocal_355))
				{
					if (__LIB_2__::func_47(&uLocal_355, 2500, 0))
					{
						CAM::DO_SCREEN_FADE_IN(2000);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
						func_1087();
						func_1086();
						func_1085();
						if (__LIB_4__::func_715() && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
						{
							__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
						}
						__LIB_0__::func_579(&uLocal_360);
						__LIB_0__::func_579(&uLocal_355);
						__LIB_28__::func_742(8);
						__LIB_28__::func_742(6);
						func_1075(11);
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var1, 60f, 4))
					{
						STREAMING::CLEAR_FOCUS();
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						if (func_1074())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					__LIB_0__::func_580(&uLocal_355, 0, 0);
				}
				else if (__LIB_2__::func_47(&uLocal_360, 60000, 0))
				{
					__LIB_0__::func_580(&uLocal_355, 0, 0);
					__LIB_0__::func_579(&uLocal_360);
				}
			}
		}
		else if (!__LIB_28__::func_709(6) && !__LIB_28__::func_709(13))
		{
			if (func_1072())
			{
				if (bVar0)
				{
					if (__LIB_0__::func_1("MBBJ_HACKHELPa" /* GXT: Press ~INPUT_CONTEXT~ to hack into the security cameras. */))
					{
						HUD::CLEAR_HELP(true);
					}
				}
				else if (Local_344.f_73 == NETWORK::PARTICIPANT_ID_TO_INT() && func_857(NETWORK::PARTICIPANT_ID(), 11))
				{
					HUD::CLEAR_HELP(true);
					func_1071(1, 1);
					__LIB_18__::func_465(PLAYER::PLAYER_ID(), 0, 0, 0);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
					__LIB_28__::func_708(23);
					__LIB_6__::func_952();
					__LIB_28__::func_708(13);
				}
				else if (Local_344.f_73 == -1)
				{
					if (!__LIB_0__::func_1("MBBJ_HACKHELPa" /* GXT: Press ~INPUT_CONTEXT~ to hack into the security cameras. */))
					{
						__LIB_0__::func_187("MBBJ_HACKHELPa" /* GXT: Press ~INPUT_CONTEXT~ to hack into the security cameras. */);
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						func_171(11);
					}
				}
				else
				{
					if (__LIB_0__::func_1("MBBJ_HACKHELPa" /* GXT: Press ~INPUT_CONTEXT~ to hack into the security cameras. */))
					{
						HUD::CLEAR_HELP(true);
					}
					func_1075(11);
				}
			}
			else if (__LIB_0__::func_1("MBBJ_HACKHELPa" /* GXT: Press ~INPUT_CONTEXT~ to hack into the security cameras. */))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (__LIB_28__::func_709(7))
		{
			if (__LIB_28__::func_709(13))
			{
				uVar2 = func_1056();
			}
			if (CAM::IS_SCREEN_FADED_OUT() || uVar2)
			{
				if (__LIB_0__::func_649(&uLocal_355))
				{
					if (func_1055())
					{
						if (func_1054() == 6)
						{
							func_171(2);
						}
						func_1053(0);
						if (__LIB_28__::func_709(13))
						{
							__LIB_28__::func_708(23);
							func_1051();
							__LIB_0__::func_579(&uLocal_365);
							__LIB_28__::func_742(22);
							__LIB_28__::func_742(13);
							__LIB_28__::func_708(6);
						}
					}
				}
				else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					__LIB_28__::func_708(23);
					__LIB_28__::func_708(12);
					Var3 = { func_1050(func_1054()) };
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Var3, 60f, 1))
					{
						STREAMING::SET_FOCUS_POS_AND_VEL(Var3, 0f, 0f, 0f);
						CAM::SET_CAM_ACTIVE(iLocal_353[iLocal_354], true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						if (iLocal_357 != -1)
						{
							AUDIO::STOP_SOUND(iLocal_357);
							AUDIO::RELEASE_SOUND_ID(iLocal_357);
							iLocal_357 = -1;
						}
					}
				}
				else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					__LIB_0__::func_580(&uLocal_355, 0, 0);
				}
				else if (__LIB_2__::func_47(&uLocal_360, 60000, 0))
				{
					__LIB_0__::func_580(&uLocal_355, 0, 0);
					__LIB_0__::func_579(&uLocal_360);
				}
			}
		}
		else if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADING_OUT())
		{
			func_1046(bVar0);
			func_1043();
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			if (iLocal_364 == -1)
			{
				iLocal_364 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_364, "Background", "MP_CCTV_SOUNDSET", true);
			}
			func_958(1);
			if (func_165() > 1 && __LIB_2__::func_47(&uLocal_358, 3000, 0))
			{
				func_958(3);
			}
			if (func_1054() == 6 && __LIB_0__::func_1("MBBJ_HACKHELPc" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to hack into the bank's interior security camera. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!bVar0 && !__LIB_28__::func_709(8))
			{
				if ((PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || func_165() >= 7) || __LIB_1__::func_352(PLAYER::PLAYER_ID()))
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					__LIB_28__::func_708(8);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					if (__LIB_28__::func_709(11))
					{
						__LIB_24__::func_892(0);
					}
					else if (func_1054() == 6)
					{
						__LIB_24__::func_892(1);
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 190 /*INPUT_FRONTEND_RIGHT*/))
				{
					func_1071(0, 1);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 189 /*INPUT_FRONTEND_LEFT*/))
				{
					func_1071(0, 0);
				}
			}
		}
	}
}

int func_1042()//Position - 0x83793
{
	switch (func_82())
	{
		case 0:
			return 1;
		case 1:
			return 3;
		case 2:
			return 5;
		default:
	}
	return 6;
}

void func_1043()//Position - 0x837C3
{
	struct<3> Var0;
	if (func_1045())
	{
		Var0 = { CAM::GET_CAM_ROT(iLocal_353[iLocal_354], 2) };
		if (Var0.f_2 <= __LIB_24__::func_893(func_1054(), 1) && Var0.f_2 >= __LIB_24__::func_893(func_1054(), 0))
		{
			if (!__LIB_28__::func_709(11))
			{
				__LIB_28__::func_708(11);
				func_171(13);
				__LIB_28__::func_708(12);
			}
		}
		else if (__LIB_28__::func_709(11))
		{
			__LIB_28__::func_742(11);
			__LIB_28__::func_708(12);
		}
	}
	else if (func_1054() != 6)
	{
		if (__LIB_28__::func_709(11))
		{
			__LIB_28__::func_742(11);
			__LIB_28__::func_708(12);
		}
	}
}

int func_1045()//Position - 0x838BC
{
	if (func_1054() == func_1042())
	{
		return 1;
	}
	return 0;
}

void func_1046(bool bParam0)//Position - 0x838D4
{
	float fVar0;
	float fVar1;
	var uVar2[4];
	float fVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	float fVar8;
	fVar0 = 8.5f;
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		fVar0 = 10f;
	}
	fVar1 = (30f * SYSTEM::TIMESTEP());
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	if (!bParam0)
	{
		__LIB_0__::func_311(&(uVar2[0]), &(uVar2[1]), &(uVar2[2]), &(uVar2[3]), 0, 0);
	}
	if (uVar2[2] != 0)
	{
		fVar3 = (1f / (127f / IntToFloat(uVar2[2])));
		fVar4 = -(((fVar3 * 0.05f) * fVar1) * fVar0);
		Var5 = { Vector(fVar4, 0f, 0f) + CAM::GET_CAM_ROT(iLocal_353[iLocal_354], 2) };
		Var6 = { func_1048(func_1054(), 1, 0) };
		Var7 = { func_1048(func_1054(), 0, 0) };
		if (Var5.f_2 < Var6.f_2)
		{
			Var5.f_2 = Var6.f_2;
		}
		if (Var5.f_2 > Var7.f_2)
		{
			Var5.f_2 = Var7.f_2;
		}
		CAM::SET_CAM_ROT(iLocal_353[iLocal_354], Var5, 2);
		if (iLocal_362 == -1)
		{
			iLocal_362 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_362, "Pan", "MP_CCTV_SOUNDSET", true);
		}
	}
	else
	{
		func_1085();
	}
	if (uVar2[1] != 0)
	{
		fVar8 = ((fVar1 * 0.005f) * IntToFloat(uVar2[1]));
		fVar8 = (CAM::GET_CAM_FOV(iLocal_353[iLocal_354]) + fVar8);
		if (fVar8 < 20f)
		{
			fVar8 = 20f;
		}
		else if (fVar8 > func_1047(func_1054()))
		{
			fVar8 = func_1047(func_1054());
		}
		CAM::SET_CAM_FOV(iLocal_353[iLocal_354], fVar8);
		if (iLocal_363 == -1)
		{
			iLocal_363 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_363, "Zoom", "MP_CCTV_SOUNDSET", true);
		}
	}
	else
	{
		func_1086();
	}
}

float func_1047(int iParam0)//Position - 0x83A71
{
	switch (iParam0)
	{
		case 1:
			return 28.4619f;
		default:
	}
	return 45f;
}

Vector3 func_1048(int iParam0, bool bParam1, bool bParam2)//Position - 0x83A93
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return -9.1356f, 0f, -161.311f;
			}
			return -9.1356f, 0f, -110.6059f;
		case 1:
			if (bParam1)
			{
				return -15.6847f, 0f, -140.357f;
			}
			return -15.6847f, 0f, -109.5011f;
		case 2:
			if (bParam1)
			{
				return -15.2249f, 0f, 58.105f;
			}
			return -15.2249f, 0f, 93.6824f;
		case 3:
			if (bParam1)
			{
				return -14.1724f, 0f, -61.3984f;
			}
			return -14.1724f, 0f, -18.0584f;
		case 4:
			if (bParam1)
			{
				return -16.9984f, 0f, 100.9485f;
			}
			return -16.9984f, 0f, 147.6821f;
		case 5:
			if (bParam1)
			{
				return -22.4793f, 0f, -75.6391f;
			}
			return -22.4793f, 0f, -35.5264f;
		case 6:
			switch (func_82())
			{
				case 0:
					if (bParam2)
					{
						return -25.9936f, 0.1553f, 36.0766f;
					}
					if (bParam1)
					{
						return -25.9932f, 0.1553f, -4.9555f;
					}
					return -25.9932f, 0.1553f, 64.7756f;
				case 1:
					if (bParam2)
					{
						return -28.3071f, 0f, 55.5093f;
					}
					if (bParam1)
					{
						return -28.3071f, 0f, 27.5552f;
					}
					return -28.3071f, 0f, 115.4156f;
				case 2:
					if (bParam2)
					{
						return -31.0339f, 0f, -152.3471f;
					}
					if (bParam1)
					{
						return -31.0339f, 0f, -179f;
					}
					return -31.0339f, 0f, -91.2567f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1050(int iParam0)//Position - 0x83D5F
{
	switch (iParam0)
	{
		case 0:
			return -3001.9648f, 517.8627f, 23.5842f;
		case 1:
			return 194.5649f, 225.0109f, 117.1964f;
		case 2:
			return 171.5525f, -1037.4052f, 35.541f;
		case 3:
			return -1235.0173f, -333.8962f, 43.9836f;
		case 4:
			return -794.8666f, -1107.6357f, 18.3664f;
		case 5:
			return 1160.6945f, 2673.9465f, 50.5321f;
		case 6:
			switch (func_82())
			{
				case 0:
					return 257.3985f, 210.0577f, 109.7108f;
				case 1:
					return -1204.8948f, -337.7442f, 39.6725f;
				case 2:
					return 1171.3989f, 2716.5105f, 39.8679f;
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_1051()//Position - 0x83E5B
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_367))
	{
		if (MISC::IS_PC_VERSION())
		{
			__LIB_0__::func_686(0, 1, 1, 1);
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_367);
	}
}

void func_1053(bool bParam0)//Position - 0x83EB7
{
	if (!bParam0)
	{
		CAM::DO_SCREEN_FADE_IN(2000);
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity");
	GRAPHICS::SET_NOISINESSOVERIDE(0.1f);
	if (func_1054() == 6)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(0.75f);
	}
	else
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
	}
	__LIB_0__::func_579(&uLocal_360);
	__LIB_0__::func_579(&uLocal_355);
	__LIB_28__::func_742(7);
}

int func_1054()//Position - 0x83F0E
{
	return iLocal_354;
}

int func_1055()//Position - 0x83F19
{
	if (__LIB_28__::func_709(13))
	{
		if (__LIB_2__::func_47(&uLocal_365, 2000, 0))
		{
			return 1;
		}
		return 0;
	}
	return __LIB_2__::func_47(&uLocal_355, 2500, 0);
}

int func_1056()//Position - 0x83F4B
{
	iLocal_367 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("BANK_JOB_LOGIN");
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_367))
	{
		if (MISC::IS_PC_VERSION())
		{
			__LIB_0__::func_686(1, 1, 1, 1);
		}
		func_1057();
		func_958(5);
		if (!__LIB_0__::func_649(&uLocal_365))
		{
			__LIB_0__::func_580(&uLocal_365, 0, 0);
		}
		return 1;
	}
	return 0;
}

void func_1057()//Position - 0x83F9B
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	if (Global_78319)
	{
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(4);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(5);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(13);
		HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
	}
	HUD::THEFEED_HIDE_THIS_FRAME();
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	__LIB_2__::func_154(0f, 0f, 1f, 1f, 0, 0, 0, 255);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_367, 255, 255, 255, 255, 0);
	__LIB_6__::func_842();
	__LIB_8__::func_611(0);
	__LIB_7__::func_167(1);
}

void func_1071(bool bParam0, bool bParam1)//Position - 0x842A8
{
	if (!bParam0)
	{
		if (bParam1)
		{
			iLocal_354++;
			if (iLocal_354 >= 6)
			{
				iLocal_354 = 0;
			}
		}
		else
		{
			iLocal_354 = (iLocal_354 - 1);
			if (iLocal_354 < 0)
			{
				iLocal_354 = (6 - 1);
			}
		}
		GRAPHICS::SET_TIMECYCLE_MODIFIER("CAMERA_secuirity_FUZZ");
		if (iLocal_357 == -1)
		{
			iLocal_357 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_357, "Change_Cam", "MP_CCTV_SOUNDSET", true);
		}
	}
	if (!bParam0)
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
	}
	__LIB_28__::func_708(7);
	__LIB_28__::func_742(11);
}

int func_1072()//Position - 0x84327
{
	if (__LIB_6__::func_405())
	{
		return 1;
	}
	return 0;
}

int func_1074()//Position - 0x84379
{
	if ((__LIB_0__::func_1("MBBJ_HACKHELPb" /* GXT: Press ~INPUTGROUP_FRONTEND_DPAD_LR~ to cycle through the security cameras and locate the bank that's being robbed. */) || __LIB_0__::func_1("MBBJ_HACKHELPc" /* GXT: Press ~INPUT_FRONTEND_ACCEPT~ to hack into the bank's interior security camera. */)) || __LIB_0__::func_1("MBBJ_HACKHELPd" /* GXT: Press ~INPUT_FRONTEND_CANCEL~ to exit the security camera. */))
	{
		return 1;
	}
	return 0;
}

void func_1075(int iParam0)//Position - 0x843B0
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/].f_1[iVar0]), iVar1);
}

void func_1085()//Position - 0x84AA7
{
	if (iLocal_362 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_362))
		{
			AUDIO::STOP_SOUND(iLocal_362);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_362);
		iLocal_362 = -1;
	}
}

void func_1086()//Position - 0x84AD3
{
	if (iLocal_363 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_363))
		{
			AUDIO::STOP_SOUND(iLocal_363);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_363);
		iLocal_363 = -1;
	}
}

void func_1087()//Position - 0x84AFF
{
	if (iLocal_364 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_364))
		{
			AUDIO::STOP_SOUND(iLocal_364);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_364);
		iLocal_364 = -1;
	}
}

void func_1088()//Position - 0x84B2B
{
	struct<9> Var0;
	iLocal_368 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("SECURITY_CAM");
	func_1101();
	if (__LIB_28__::func_709(6))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		Var0 = { __LIB_1__::func_59() };
		if (__LIB_28__::func_709(12))
		{
			__LIB_6__::func_498(&uLocal_369);
			__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/, true), "CELL_281" /* GXT: Exit */, &uLocal_369, 0);
			if (func_1054() != 6)
			{
				__LIB_2__::func_33(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 8, true), "CTRL_0" /* GXT: Change Camera */, &uLocal_369, 0);
			}
			__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/, true), "HUD_INPUT91" /* GXT: Zoom */, &uLocal_369, 0);
			__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/, true), "CELL_LT_RSTICK" /* GXT: Pan Camera */, &uLocal_369, 0);
			if (__LIB_28__::func_709(11))
			{
				__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "FMBLIP_CAM_8" /* GXT: Interior */, &uLocal_369, 0);
				func_958(2);
			}
			else if (func_1054() == 6)
			{
				__LIB_2__::func_33(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true), "BUNK_CCTV_8" /* GXT: Exterior */, &uLocal_369, 0);
			}
			__LIB_28__::func_742(12);
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_368) && !__LIB_28__::func_709(23))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_368, 255, 255, 255, 0, 0);
		}
		__LIB_0__::func_660(1);
		__LIB_0__::func_733(1);
		__LIB_7__::func_693(&uLocal_1069, &Var0, &uLocal_369, 0);
	}
	else
	{
		__LIB_1__::func_58(&uLocal_369);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1069);
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_368);
	}
}

void func_1101()//Position - 0x85216
{
	if (__LIB_28__::func_709(23))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_368))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_LOCATION");
			__LIB_0__::func_478(func_1103(func_1054()));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_DETAILS");
			__LIB_0__::func_478(func_1102(func_1054()));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_368, "SET_TIME");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			__LIB_28__::func_742(23);
		}
	}
}

char* func_1102(int iParam0)//Position - 0x85282
{
	switch (iParam0)
	{
		case 0:
			return "MBBJ_CAM_DUM1b" /* GXT: -3002 : 517   CAM_01/06 */;
		case 1:
			return "MBBJ_CAM_PACb" /* GXT: 194 : 225   CAM_02/06 */;
		case 2:
			return "MBBJ_CAM_DUM2b" /* GXT: 171 : -1037   CAM_03/06 */;
		case 3:
			return "MBBJ_CAM_ALTAb" /* GXT: -1235 : -333   CAM_04/06 */;
		case 4:
			return "MBBJ_CAM_DUM3b" /* GXT: -794 : -1107   CAM_05/06 */;
		case 5:
			return "MBBJ_CAM_SANDb" /* GXT: 1160 : 2673   CAM_06/06 */;
		case 6:
			return "MBBJ_CAM_INTEb" /* GXT: 0503 : 185   CAM_00/SEC */;
		default:
	}
	return "MBBJ_CAM_DUM1b" /* GXT: -3002 : 517   CAM_01/06 */;
}

char* func_1103(int iParam0)//Position - 0x852F8
{
	switch (iParam0)
	{
		case 0:
			return "MBBJ_CAM_DUM1a" /* GXT: Great Ocean Hwy */;
		case 1:
			return "MBBJ_CAM_PACa" /* GXT: Vinewood Blvd */;
		case 2:
			return "MBBJ_CAM_DUM2a" /* GXT: Vespucci Blvd */;
		case 3:
			return "MBBJ_CAM_ALTAa" /* GXT: Blvd Del Perro */;
		case 4:
			return "MBBJ_CAM_DUM3a" /* GXT: Palomino Ave */;
		case 5:
			return "MBBJ_CAM_SANDa" /* GXT: Route 68 */;
		case 6:
			return "MBBJ_CAM_INTEa" /* GXT: Interior */;
		default:
	}
	return "MBBJ_CAM_DUM1a" /* GXT: Great Ocean Hwy */;
}

int func_1104()//Position - 0x8536E
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar3 = iVar0;
		iLocal_353[iVar0] = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
		Var1 = { func_1050(iVar3) };
		Var2 = { func_1048(iVar3, func_1105(iVar3), 1) };
		CAM::SET_CAM_PARAMS(iLocal_353[iVar0], Var1, Var2, func_1047(iVar3), 0, 1, 1, 2);
		iVar0++;
	}
	return 1;
}

int func_1105(int iParam0)//Position - 0x853D6
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
		case 6:
			return 1;
		default:
	}
	return 0;
}

void func_1108()//Position - 0x85449
{
	if (!__LIB_28__::func_709(1))
	{
		if (func_165() >= 7)
		{
			func_552(7);
		}
	}
}

void func_1109(int iParam0)//Position - 0x85467
{
	int iVar0;
	if (func_4(iParam0, 0) || func_4(iParam0, 3))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[iParam0 /*4*/]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_139()))
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_344.f_7[iParam0 /*4*/]);
		if (!__LIB_0__::func_508(NETWORK::NET_TO_ENT(func_139()), iVar0, 3f, 0))
		{
			if (__LIB_6__::func_924(Local_344.f_7[iParam0 /*4*/]))
			{
				ENTITY::SET_ENTITY_COORDS(iVar0, func_149(func_85()), false, false, false, true);
				func_884(iParam0, 7);
			}
		}
	}
}

void func_1110(int iParam0)//Position - 0x854F2
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[iParam0 /*4*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_344.f_7[iParam0 /*4*/]), false))
	{
		if (func_1111())
		{
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_344.f_7[iParam0 /*4*/]), true, true);
			__LIB_28__::func_708(16);
		}
		else
		{
			OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_344.f_7[iParam0 /*4*/]), false, true);
			__LIB_28__::func_742(16);
		}
	}
}

int func_1111()//Position - 0x8555E
{
	if (!func_1112(1))
	{
		return 1;
	}
	if (!func_522() && !func_6(9))
	{
		return 1;
	}
	return 0;
}

bool func_1112(int iParam0)//Position - 0x8558C
{
	return (((!__LIB_25__::func_938() && !__LIB_0__::func_114()) && (func_157() == 0 || iParam0)) && bLocal_166);
}

void func_1113(int iParam0)//Position - 0x855BE
{
	if (iLocal_160[iParam0] == __LIB_0__::func_160())
	{
		func_1114(&(Local_344.f_7[iParam0 /*4*/]), &uLocal_1083, &uLocal_1085, 0);
	}
}

void func_1114(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x855E8
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(*uParam0), false) };
		if (!__LIB_0__::func_649(uParam1))
		{
			__LIB_0__::func_580(uParam1, 0, 0);
		}
		else if (__LIB_2__::func_47(uParam1, 1000, 0))
		{
			if (__LIB_19__::func_465(NETWORK::NET_TO_ENT(*uParam0), joaat("MP_GAR_SIMEON"), 1, uParam2, 0, 500, 1, 0))
			{
				__LIB_35__::func_776(&Global_1574067, &Var1, &uVar2, 10f);
				if (bParam3)
				{
					__LIB_1__::func_550(1);
					__LIB_1__::func_549(1);
					__LIB_1__::func_548(1);
					Global_2815059.f_4588 = 0;
				}
				bVar4 = true;
				bVar5 = true;
			}
			else if (__LIB_0__::func_331(Var0, __LIB_18__::func_444(39), __LIB_31__::func_882(39, 0)))
			{
				if (__LIB_7__::func_226(39, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__::func_331(Var0, __LIB_18__::func_444(40), __LIB_31__::func_882(40, 0)))
			{
				if (__LIB_7__::func_226(40, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__::func_331(Var0, __LIB_18__::func_444(41), __LIB_31__::func_882(41, 0)))
			{
				if (__LIB_7__::func_226(41, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__::func_331(Var0, __LIB_18__::func_444(42), __LIB_31__::func_882(42, 0)))
			{
				if (__LIB_7__::func_226(42, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__::func_331(Var0, __LIB_18__::func_444(43), __LIB_31__::func_882(43, 0)))
			{
				if (__LIB_7__::func_226(43, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			else if (__LIB_0__::func_331(Var0, __LIB_18__::func_444(44), __LIB_31__::func_882(44, 0)))
			{
				if (__LIB_7__::func_226(44, 0, &Var1, &uVar2, &uVar3, 0))
				{
					bVar4 = true;
				}
			}
			if (bVar4)
			{
				MISC::SET_BIT(&(Global_2815059.f_1798), 5);
				if (bParam3)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(*uParam0), true))
					{
						iVar7 = 1;
					}
					else if (__LIB_7__::func_141(NETWORK::NET_TO_VEH(*uParam0), 1, 0, 0, 0, 0, 1, 0, 1))
					{
						iVar7 = 2;
					}
				}
				else if (__LIB_1__::func_909() && !bVar5)
				{
					iVar7 = 1;
				}
				else if (__LIB_37__::func_83() && !bVar5)
				{
					iVar7 = 1;
					bVar6 = true;
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(*uParam0)))
				{
					iVar7 = 2;
				}
				if (iVar7 == 1)
				{
					if (!BitTest(Global_2815059.f_1798, 3))
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						MISC::SET_BIT(&(Global_2815059.f_1798), 6);
						MISC::SET_BIT(&(Global_2815059.f_1798), 3);
					}
					else if (!BitTest(Global_2815059.f_1798, 4))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							MISC::SET_BIT(&(Global_2815059.f_1798), 4);
						}
					}
					else
					{
						bVar8 = false;
						if (__LIB_0__::func_293(PLAYER::PLAYER_ID(), -1))
						{
							bVar8 = true;
						}
						if (!bVar6)
						{
							if (func_1115(5, 0, 0, 0, 1, 0, 0, bVar8, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
							{
								CAM::DO_SCREEN_FADE_IN(800);
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(NETWORK::NET_TO_ENT(*uParam0));
								INTERIOR::CLEAR_ROOM_FOR_ENTITY(PLAYER::PLAYER_PED_ID());
								MISC::CLEAR_BIT(&(Global_2815059.f_1798), 6);
								MISC::CLEAR_BIT(&(Global_2815059.f_1798), 3);
								MISC::CLEAR_BIT(&(Global_2815059.f_1798), 4);
							}
						}
					}
				}
				else if (iVar7 == 2)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_ENT(*uParam0)))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(*uParam0), Var1, false, false, true);
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(*uParam0), true, 1);
						INTERIOR::CLEAR_ROOM_FOR_ENTITY(NETWORK::NET_TO_ENT(*uParam0));
					}
				}
			}
			else if (BitTest(Global_2815059.f_1798, 6))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (CAM::IS_SCREEN_FADED_IN())
				{
					MISC::CLEAR_BIT(&(Global_2815059.f_1798), 3);
					MISC::CLEAR_BIT(&(Global_2815059.f_1798), 4);
					MISC::CLEAR_BIT(&(Global_2815059.f_1798), 6);
				}
			}
			else if (BitTest(Global_2815059.f_1798, 5))
			{
				Global_2815059.f_4588 = 0;
				__LIB_1__::func_550(0);
				__LIB_1__::func_549(0);
				__LIB_1__::func_548(0);
				MISC::CLEAR_BIT(&(Global_2815059.f_1798), 5);
			}
			__LIB_0__::func_579(uParam1);
		}
	}
}

int func_1115(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x859BA
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_186();
	if (__LIB_0__::func_695(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_496() == 28)
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
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_638(0))
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
				if (!__LIB_8__::func_887())
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
			else if (func_1524(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
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
						__LIB_19__::func_462(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_232();
						__LIB_25__::func_733(&iVar2);
					}
					if (__LIB_8__::func_887())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_4__::func_318();
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
							func_1497(iVar2);
							__LIB_25__::func_270(1);
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
					__LIB_25__::func_270(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_1493())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_1193(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_8__::func_133(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
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
					func_1184(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
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
				__LIB_37__::func_909(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_578(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_18__::func_333(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_35__::func_697();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_35__::func_697();
			}
			else if (__LIB_32__::func_260(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_2__::func_58())
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
				__LIB_35__::func_697();
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
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_18__::func_308(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
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
					__LIB_18__::func_493(iParam9, 0, 0);
				}
			}
			__LIB_25__::func_132(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_4__::func_318();
			}
			if (!(__LIB_1__::func_928(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_1136(0, 0);
			}
			__LIB_8__::func_763(0, 0);
			if (bParam10)
			{
				__LIB_1__::func_914();
			}
			__LIB_0__::func_744();
			__LIB_36__::func_290();
			if (bParam13)
			{
				__LIB_0__::func_639();
			}
			__LIB_0__::func_643();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_25__::func_733(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_643();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_1136(int iParam0, bool bParam1)//Position - 0x86B42
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
			func_1136(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_1184(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x8893A
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_1__::func_927(iParam0, iParam1, bVar0))
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
			if (__LIB_7__::func_131(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_1185(0);
			}
		}
	}
}

void func_1185(bool bParam0)//Position - 0x88A44
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_709(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_556(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_35__::func_588(__LIB_1__::func_558(), 14, iVar1, -1) };
			__LIB_1__::func_924(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_611(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_611(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_1193(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x88C8A
{
	int* iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_6__::func_948(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_232();
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
	if (func_1487() && !bVar3)
	{
		if (func_1486())
		{
			if (func_1480(&iVar2))
			{
				if (__LIB_2__::func_66(iVar2))
				{
					if (!bVar4)
					{
						func_1184(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_1__::func_946() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_1__::func_945(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false));
						iVar5 = __LIB_1__::func_944(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_1__::func_946(), false))
						{
							iVar5 = __LIB_1__::func_946();
						}
						func_1184(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), false))
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
		if (__LIB_19__::func_461(iVar0))
		{
			if ((__LIB_8__::func_887() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_8__::func_887())
			{
				if (!__LIB_18__::func_321(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_1497(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_0__::func_851())
	{
		__LIB_25__::func_733(&iVar0);
	}
	if (func_1493())
	{
		__LIB_25__::func_733(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_65())
		{
			if (__LIB_1__::func_190(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_64(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_64(), __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_64(), fParam1);
				func_1455(__LIB_2__::func_64());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_662())
			{
				if (__LIB_7__::func_138(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_165(), 1))
				{
					func_1455(__LIB_2__::func_64());
					return 1;
				}
			}
			else if (func_1196(__LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_165(), 0, 1, 0))
			{
				func_1455(__LIB_2__::func_64());
				return 1;
			}
		}
		else if (__LIB_18__::func_220(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_18__::func_310(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
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
				__LIB_1__::func_930(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_1__::func_929(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_1455(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_1196(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8932F
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
	if (!__LIB_1__::func_190(8))
	{
		__LIB_3__::func_437(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_245(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_190(16))
		{
			__LIB_1__::func_245(16);
		}
	}
	__LIB_1__::func_245(31);
	if (!__LIB_7__::func_94())
	{
		if (!__LIB_1__::func_190(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_7__::func_194(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_648())
					{
						if (!__LIB_4__::func_316())
						{
							__LIB_37__::func_835(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_371(iVar1) || !__LIB_7__::func_193(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_35__::func_937(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_584(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_0__::func_747())
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
								if (__LIB_2__::func_37(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
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
									if (func_1321(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_1321(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_25__::func_21(&Param0, &fParam1))
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
										if (func_1321(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
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
										if (func_1321(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_18__::func_220(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_40__::func_881(&iVar0, iParam3);
									if ((__LIB_1__::func_221() || __LIB_1__::func_936()) || __LIB_1__::func_935())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_26__::func_100(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_245(34);
									}
									else
									{
										__LIB_1__::func_191(34);
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
													__LIB_39__::func_768(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_35__::func_565(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
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
									__LIB_35__::func_565(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_18__::func_986(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_245(0);
									__LIB_1__::func_245(44);
									__LIB_1__::func_191(10);
									__LIB_1__::func_191(1);
									__LIB_1__::func_191(2);
									__LIB_1__::func_191(9);
									__LIB_1__::func_191(12);
									__LIB_1__::func_191(31);
									__LIB_1__::func_191(32);
									__LIB_1__::func_191(33);
									__LIB_1__::func_191(35);
									__LIB_1__::func_191(37);
									__LIB_1__::func_191(38);
									__LIB_1__::func_931();
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

int func_1321(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x9E49F
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
	if (!__LIB_2__::func_61())
	{
		return 0;
	}
	if (__LIB_1__::func_122() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_639();
			__LIB_0__::func_599();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_638(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_1415(Param0))
		{
			if (__LIB_2__::func_60(&Param0, 1))
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
		__LIB_0__::func_636();
		__LIB_0__::func_639();
		if (!uParam6->f_27 || (((((((__LIB_19__::func_556(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_32__::func_180(Param0, iParam2);
		}
		if (__LIB_35__::func_699(Param0))
		{
			__LIB_32__::func_180(Param0, iParam2);
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
				if (((uParam6->f_3 && __LIB_24__::func_996(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_25__::func_730(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
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
					func_1333(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_19__::func_458(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
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
							if (__LIB_18__::func_420(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
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
						func_1328(Global_2667225.f_683, 0);
						__LIB_0__::func_606(-1);
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
				__LIB_0__::func_606(-1);
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
								if (__LIB_25__::func_728(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_25__::func_727(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_1328(Global_2667225.f_683, 0);
									__LIB_0__::func_606(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_1328(Global_2667225.f_683, 0);
								__LIB_0__::func_606(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_606(-1);
					}
				}
				else
				{
					__LIB_0__::func_606(1);
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
			func_1333(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
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
		__LIB_6__::func_912(1);
		return 1;
	}
	return 0;
}

void func_1328(struct<3> Param0, int iParam1)//Position - 0x9F0FD
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_607(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_1328(Var0, iParam1 + 1);
	}
}

void func_1333(var uParam0, var uParam1, var uParam2)//Position - 0x9F30F
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_1377(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_1334(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_1334(var uParam0, var uParam1, var uParam2)//Position - 0x9F37E
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
		if (func_1373(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (__LIB_18__::func_371(uParam0, 1))
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
	if (__LIB_6__::func_902(uParam2->f_34) != 0)
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
					if (!__LIB_24__::func_959(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_2__::func_38(Var1))
									{
										Var1 = { __LIB_24__::func_992(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_25__::func_373(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_7__::func_119(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_18__::func_371(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !__LIB_35__::func_538(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_1373(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!__LIB_25__::func_72(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_24__::func_996(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_24__::func_996(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_25__::func_727(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar22 = __LIB_31__::func_884(Var1, uParam2->f_54, &fVar23);
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
																													func_1342(Var1, fVar2, iVar14);
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
																									if (__LIB_7__::func_119(Var1, uParam2))
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
							func_1340(0, uParam2);
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
						__LIB_31__::func_894(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
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
						if (func_1373(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_18__::func_371(&Var27, bVar29))
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
				__LIB_37__::func_806(&Global_1574205, uParam0, uParam1, *uParam0);
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

void func_1340(int iParam0, var uParam1)//Position - 0xA00DE
{
	if (!__LIB_7__::func_119(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_609(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_1340(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_1340(iParam0 + 1, uParam1);
	}
}

void func_1342(struct<3> Param0, float fParam1, int iParam2)//Position - 0xA0184
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
			func_1342(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_1373(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0xA18F7
{
	int iVar0;
	bool bVar1;
	if (func_1415(Param0))
	{
		if (func_1376(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_18__::func_494(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_607(*uParam1, 1056964608))
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
				__LIB_1__::func_120(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
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

int func_1376(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xA1B41
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
				if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_1376(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_1377(var uParam0, var uParam1, var uParam2)//Position - 0xA1C1C
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
			if (func_1373(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_18__::func_371(uParam0, 1))
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
			__LIB_6__::func_904(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_623();
		}
		else
		{
			__LIB_0__::func_622();
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
							if ((uParam2->f_12 && !__LIB_35__::func_538(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_1373(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!__LIB_25__::func_72(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_24__::func_996(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_24__::func_996(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_25__::func_727(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar11 = __LIB_31__::func_884(Var3, uParam2->f_54, &fVar12);
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
																		func_1342(Var3, fVar4, iVar5);
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
					func_1340(0, uParam2);
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

int func_1415(struct<3> Param0)//Position - 0xAAD37
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_18__::func_246(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_7__::func_137(Param0, 1008981770))
			{
				if (!func_1376(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_1376(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_7__::func_136(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_637(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_1376(&Var1, 0, 0, 0, 1))
					{
						if (!func_1376(&Param0, 0, 0, 0, 1))
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

void func_1455(int iParam0)//Position - 0xAF1BC
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
	func_1497(iParam0);
	__LIB_1__::func_945(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_39__::func_769(iParam0, 1);
	}
	else
	{
		__LIB_33__::func_47(iParam0, __LIB_0__::func_604(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

int func_1480(var uParam0)//Position - 0xAFF60
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_1__::func_949())
		{
			iVar2 = __LIB_1__::func_947(__LIB_1__::func_948());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::func_160() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
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
				iVar5 = __LIB_1__::func_947(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_0__::func_695(iVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar7)))
						{
							*uParam0 = iVar7;
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
						Jump @556; //curOff = 336
						if (!__LIB_1__::func_389())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_0__::func_154(bVar1, 0, 1))
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
									if (__LIB_0__::func_154(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_1481(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
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
int func_1481(bool bParam0)//Position - 0xB0190
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

int func_1486()//Position - 0xB0209
{
	bool bVar0;
	if (__LIB_1__::func_389())
	{
		if (func_1480(&bVar0))
		{
			if (func_1481(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_1__::func_949())
	{
		return 1;
	}
	return 0;
}

int func_1487()//Position - 0xB024E
{
	var uVar0;
	if (__LIB_1__::func_950() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_1480(&uVar0))
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

int func_1493()//Position - 0xB03C3
{
	bool bVar0;
	var uVar1;
	if (__LIB_8__::func_887())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_1487())
		{
			if (func_1486())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_65())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_165() /*142*/].f_66;
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
						if (__LIB_6__::func_948(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_33__::func_47(Global_2667225.f_2669, __LIB_0__::func_604(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_1__::func_953();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_1__::func_952();
			}
		}
		else if (!__LIB_2__::func_65())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_255())
				{
					__LIB_1__::func_953();
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

void func_1497(int iParam0)//Position - 0xB069D
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_7__::func_129(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_1__::func_964(iParam0);
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
			if (__LIB_8__::func_764(PLAYER::PLAYER_ID()))
			{
				__LIB_19__::func_557(iParam0);
			}
		}
		__LIB_18__::func_379(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_1184(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_1__::func_959(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_0__::func_851());
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
					__LIB_1__::func_958(iParam0, 1);
					__LIB_1__::func_957(iParam0, 1);
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
			if (__LIB_1__::func_956(ENTITY::GET_ENTITY_MODEL(iParam0)))
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
						__LIB_1__::func_955(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 189)
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
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_1__::func_954() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
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

int func_1524(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0xB15B9
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_640(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_638(0))
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
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_638(0))
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
		__LIB_0__::func_636();
		if (bParam10)
		{
			__LIB_0__::func_639();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_1532(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_19__::func_463(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
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
						if (((Global_2667225.f_518 && !__LIB_6__::func_396()) && __LIB_8__::func_765(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_1328(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_1__::func_967(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_18__::func_420(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
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
								bVar1 = __LIB_2__::func_68(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
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
						func_1525(&(Global_2667225.f_623));
						__LIB_1__::func_967(-1);
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
								func_1328(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_1__::func_967(-1);
							}
						}
					}
					else
					{
						__LIB_1__::func_967(-1);
					}
				}
				else
				{
					__LIB_1__::func_967(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_1532(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
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
		__LIB_0__::func_636();
		if (bParam10)
		{
			if (!__LIB_1__::func_194(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_639();
			}
		}
		return 1;
	}
	return 0;
}

void func_1525(var uParam0)//Position - 0xB1B41
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_1328(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_1532(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0xB1F2F
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
	int iVar37;
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
		if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 0, 0))
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
				if (__LIB_18__::func_321(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_19__::func_464(Global_2676213);
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
		__LIB_7__::func_149();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_25__::func_670();
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
		if (Global_2667225.f_489 == 0 || __LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_1717();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_18__::func_246(PLAYER::PLAYER_ID(), 1))
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
			iVar20 = __LIB_18__::func_441(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_57(iVar20))
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
			if (__LIB_2__::func_1())
			{
				__LIB_1__::func_225();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_0(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_0(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_0(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_0(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_0(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_0(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_0(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_0(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_0(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_0(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_0(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_0(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_0(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_0(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_0(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_0(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_0(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_0(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_0(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_0(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_0(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_225();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_0(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_0(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_0(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_0(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_0(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_0(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_0(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_0(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_0(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_0(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_0(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_0(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_0(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_0(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_0(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_0(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_0(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_0(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_0(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_0(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_0(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_0(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_0(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_0(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_0(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_0(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_0(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_0(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_0(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_0(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_0(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_0(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_0(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_0(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_35__::func_818(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_35__::func_817(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_35__::func_776(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1708(bParam2) };
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
					__LIB_3__::func_679();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_35__::func_776(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_7__::func_148();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_89(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
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
				if (__LIB_19__::func_560(PLAYER::PLAYER_ID()))
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
				iVar38 = __LIB_7__::func_135(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_1__::func_996(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
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
					if (__LIB_0__::func_154(Global_1888188, 0, 1))
					{
						if (__LIB_24__::func_958(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_0__::func_85(Global_1888188) };
							if (!__LIB_18__::func_246(PLAYER::PLAYER_ID(), 1))
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
					if (__LIB_0__::func_613(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_19__::func_560(PLAYER::PLAYER_ID()))
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
				if (__LIB_19__::func_560(PLAYER::PLAYER_ID()))
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
				Var13 = { __LIB_25__::func_737(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1699(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_1__::func_994(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_8__::func_887() || iVar40)
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
				if (func_1699(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::func_160())
					{
						if (__LIB_0__::func_154(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_0__::func_85(Global_1836068.f_14) };
							if (__LIB_8__::func_887())
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
					if (__LIB_0__::func_613(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_120(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_942(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
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
				if (__LIB_8__::func_887())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_6__::func_400() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_88(__LIB_0__::func_85(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_88(Global_2667225.f_512);
				}
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_19__::func_560(PLAYER::PLAYER_ID()))
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
				if (!__LIB_6__::func_922(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_7__::func_202(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
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
				iVar30 = __LIB_31__::func_884(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_32__::func_265(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_32__::func_265(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_25__::func_736(Var21, fVar35) };
						Var23 = { __LIB_25__::func_735(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_602(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_6__::func_922(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_7__::func_202(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_31__::func_884(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_156(Var14, Var23) < 0f)
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
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_1__::func_990());
				__LIB_1__::func_993(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_1376(&(Global_2667225.f_555), 0, 0, 0, 1))
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
					Var17 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
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
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
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
					Var17 = { func_1678(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_1__::func_989(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_1__::func_993(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672120[0 /*12*/]));
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
					Var17 = { func_1678(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_1__::func_989(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_1__::func_993(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_1__::func_993(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_1__::func_989(Var17, &Global_2671974, &iVar7);
				if (__LIB_8__::func_48(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_8__::func_48(iVar0, -1);
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
							__LIB_25__::func_53(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
						__LIB_1__::func_993(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_1__::func_993(&(Global_2671974[0 /*12*/]));
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
					iVar16 = __LIB_25__::func_340();
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
					iVar16 = __LIB_25__::func_340();
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
						__LIB_25__::func_53(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				if (__LIB_35__::func_700())
				{
					iVar20 = __LIB_1__::func_332(__LIB_0__::func_582());
					if (iVar20 <= 0)
					{
					}
					__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_1678(__LIB_0__::func_582()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_4__::func_319();
				if (iVar20 <= 0)
				{
				}
				__LIB_7__::func_222(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_222(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_7__::func_146(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
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
				iVar20 = __LIB_4__::func_319();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_261())
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
								__LIB_18__::func_421(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_25__::func_340();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_153() /*5567*/].f_681.f_1303;
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
						switch (__LIB_1__::func_261())
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
								__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_8__::func_48(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var44, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				iVar16 = __LIB_8__::func_48(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_1__::func_985(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_261())
				{
					case 5:
						__LIB_18__::func_381(iVar15, 612, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_18__::func_381(iVar15, 912, &Var45, __LIB_1__::func_984(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_25__::func_53(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
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
				switch (__LIB_1__::func_261())
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
							switch (__LIB_0__::func_598(PLAYER::PLAYER_ID()))
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
							iVar46 = __LIB_1__::func_260(__LIB_2__::func_78(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_248(__LIB_1__::func_292(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_246(__LIB_1__::func_40(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_243(__LIB_1__::func_374(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_231(__LIB_1__::func_234(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_160())
								{
									iVar46 = __LIB_1__::func_227(__LIB_1__::func_228(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_227(__LIB_1__::func_228(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_222(__LIB_1__::func_223(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_218(__LIB_1__::func_219(PLAYER::PLAYER_ID()));
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
							iVar46 = __LIB_1__::func_195(__LIB_1__::func_196(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_166(__LIB_0__::func_598(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_32__::func_264(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
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
					Global_2667225.f_555 = { __LIB_2__::func_76() };
					Global_2667225.f_555 = { __LIB_2__::func_75(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_0__::func_581(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_6__::func_399(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
					{
						Global_2667225.f_555 = { func_1678(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1678(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1678(__LIB_0__::func_582()) };
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
				if (__LIB_0__::func_581(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_6__::func_399(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_160())
					{
						Global_2667225.f_555 = { func_1678(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1678(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1678(__LIB_0__::func_582()) };
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
				Global_2667225.f_555 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_1678(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1678(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_7__::func_199(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_73(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
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
					if (__LIB_8__::func_765(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
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
				if (Global_2667225.f_490.f_3 && !__LIB_25__::func_668(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_32__::func_263() };
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
				if (func_1376(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_25__::func_731(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_25__::func_670())
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
					if (!__LIB_1__::func_977(Var17))
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
			func_1615();
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
			if ((__LIB_0__::func_698() && __LIB_8__::func_887()) && func_1376(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_25__::func_667();
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
			if (__LIB_1__::func_194(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_1333(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
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
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_1607(&(Var18[iVar0 /*3*/]), __LIB_7__::func_137(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_1604(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_1604(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_1604(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
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
			if ((__LIB_1__::func_62(Global_2667225.f_489) && !__LIB_7__::func_137(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_25__::func_670())
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
						func_1615();
						return 0;
					}
					else
					{
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_18__::func_321(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_35__::func_537(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
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
						func_1615();
						return 0;
					}
					else
					{
						__LIB_1__::func_973(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_1__::func_973(&Var18, &iVar0);
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
		Global_2667225.f_520.f_9 = __LIB_25__::func_667();
		Global_2667225.f_520.f_10 = 0;
		if (func_1533(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
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

int func_1533(var uParam0, var uParam1, var uParam2)//Position - 0xB7228
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
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_638(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_93();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_638(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_7__::func_98();
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
		__LIB_1__::func_93();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_24__::func_996(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
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
				__LIB_1__::func_87(Var6.f_0, Var6.f_1);
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
					if (__LIB_1__::func_86(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_1333(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_613(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
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
				if (uParam0->f_5 && !__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
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
				__LIB_7__::func_97(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_85() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
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
				__LIB_7__::func_98();
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
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
							__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
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
			if (func_1543(uParam2, uParam0, uParam1, 0))
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
				if (!__LIB_1__::func_66(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_65(uParam0->f_8, uParam0->f_11, uParam0->f_14))
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
					__LIB_1__::func_972(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_1543(uParam2, uParam0, uParam1, 1))
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
										if (__LIB_0__::func_613(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_6__::func_903(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
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
						func_1535(&Var1, 0, 1, 1, 0, uParam0, uParam1);
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
				if (__LIB_1__::func_62(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam2, &(Global_2667225.f_2491.f_6));
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
				func_1535(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_93();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_1535(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0xB8271
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
						if (__LIB_1__::func_66(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_65(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
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
	if (func_1537(*uParam0, &Var0, iVar6, iParam3, 1))
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
		if (__LIB_1__::func_335(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_1333(&Var0, &uVar1, &Var2);
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
		if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_1537(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_7__::func_218(Var0, uParam5->f_7, Var8, Var9, fVar10))
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
			else if (func_1376(uParam0, 1, 1, 1, 1))
			{
				func_1535(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
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

int func_1537(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xB8751
{
	if (__LIB_1__::func_64(Param0, uParam1))
	{
		if (func_1538(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_1538(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1538(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0xB87AD
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_1373(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_25__::func_373(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_70(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1543(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0xB8A7C
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
					func_1589(uParam1, uParam2);
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
							if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_1535(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_1535(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_1589(uParam1, uParam2);
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
					func_1589(uParam1, uParam2);
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
				func_1589(uParam1, uParam2);
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
		func_1586(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_1551(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
					func_1551(Var0, fVar1, uParam1, uParam2, 0, iVar3);
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
				__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1535(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_61(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_70(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_1535(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_67(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_1535(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_67(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_62(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_1535(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_1535(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_67(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_1551(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0xB9340
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
		if (__LIB_19__::func_560(PLAYER::PLAYER_ID()))
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
		if (!__LIB_8__::func_885(Param0, 1084227584, 1123024896, 0))
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
		if (!__LIB_18__::func_321(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
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
		if (__LIB_35__::func_727(Param0, fParam1, uParam2->f_15, __LIB_1__::func_84(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_35__::func_537(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_18__::func_221(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_18__::func_221(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
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
			if (!__LIB_0__::func_607(Param0, 0.5f))
			{
				if (func_1415(Var12))
				{
					if (!func_1376(&Param0, 0, 0, 0, 1) && !__LIB_24__::func_959(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_24__::func_959(&Param0, 0))
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
	else if (!__LIB_1__::func_81(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_7__::func_427(PLAYER::PLAYER_ID()) && __LIB_6__::func_936(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_71(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
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
		if (!__LIB_6__::func_936(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_80(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
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
	if (__LIB_7__::func_117(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_62(Global_2667225.f_489))
			{
				if (__LIB_7__::func_137(Param0, 0.01f))
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
		if (__LIB_1__::func_79(Param0))
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
			if (!__LIB_18__::func_494(&Param0, 0, 0))
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
	if (!__LIB_2__::func_70(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_7__::func_136(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_1__::func_971(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_18__::func_329(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_25__::func_373(Param0, 1056964608))
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
	else if (__LIB_1__::func_76(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
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
				fVar0 = __LIB_32__::func_262(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_32__::func_262(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_62(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_7__::func_220(Param0);
			}
			fVar7 = __LIB_25__::func_734(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_1__::func_969(Var19);
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
							fVar0 = __LIB_32__::func_262(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_32__::func_262(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_62(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_7__::func_220(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_1554(Var19, iVar18);
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
						func_1554(Var19, iVar18);
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
						fVar5 = __LIB_8__::func_884(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_25__::func_734(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_73(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_73(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_1554(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_1554(struct<10> Param0, int iParam1)//Position - 0xB9F33
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_1554(Var0, iParam1 + 1);
	}
}

void func_1586(struct<3> Param0, var uParam1, var uParam2)//Position - 0xBB443
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
					func_1588(&Var3, uParam1, iVar0);
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
				func_1588(&Var3, uParam1, iVar0);
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
					func_1588(&Var3, uParam1, iVar0);
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
				func_1587(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_1587(var uParam0, var uParam1, int iParam2)//Position - 0xBB763
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1587(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_1588(var uParam0, var uParam1, int iParam2)//Position - 0xBB7A1
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_1588(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_1589(var uParam0, var uParam1)//Position - 0xBB7DB
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_7__::func_255(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_1551(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_7__::func_95(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_1604(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xBBBBC
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_75(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_1__::func_974(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_72(Param0, Param1, fParam2) };
				break;
		}
		if (func_1607(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_1607(var uParam0, bool bParam1)//Position - 0xBBCFD
{
	func_1608(uParam0, bParam1);
	if (__LIB_24__::func_996(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_1608(var uParam0, bool bParam1)//Position - 0xBBD34
{
	float fVar0;
	if (!bParam1)
	{
		func_1610(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_1610(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_1__::func_975(uParam0);
}

void func_1610(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xBBE0A
{
	if (bParam1)
	{
		if (func_1415(Global_2667225.f_512))
		{
			if (func_1376(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_18__::func_494(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_24__::func_959(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_6__::func_398(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_1__::func_976(uParam0, 1120403456);
}

void func_1615()//Position - 0xBC056
{
	if (!Global_2667225.f_701)
	{
		if (func_1415(Global_2667225.f_555))
		{
			if (func_1376(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1699(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_18__::func_494(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_24__::func_959(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_25__::func_670())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1678(int iParam0)//Position - 0xC05AD
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__::func_293(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_293(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_13(iParam0);
}

int func_1699(var uParam0, bool bParam1)//Position - 0xC28D0
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_6__::func_922(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
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
						Var1.f_2 = __LIB_1__::func_995(&(Global_2672169[iVar0 /*17*/]));
						__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_1376(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_7__::func_254(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
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

struct<18> func_1708(bool bParam0)//Position - 0xC32B7
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
				if (__LIB_1__::func_76(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_607(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_18__::func_221(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_18__::func_221(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_18__::func_221(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_6__::func_397(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_25__::func_734(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_0(), __LIB_25__::func_666(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_25__::func_734(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_7__::func_96(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_73(fVar5, Global_2667225.f_714.f_515, __LIB_25__::func_0(), __LIB_25__::func_666(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_1__::func_998(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_73(fVar5, 0f, 0f, 65f, 0.8f, 1f);
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
					func_1709(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1709(&Var0, iVar1, fVar4, iVar7, fVar6);
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

void func_1709(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0xC371A
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
		func_1709(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_1717()//Position - 0xC3C7A
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
					__LIB_3__::func_679();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_6__::func_768(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_93())
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
				if (__LIB_2__::func_4(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_92() && (__LIB_3__::func_680(PLAYER::PLAYER_ID()) || __LIB_2__::func_3(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_697())
				{
					if (func_1728(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_698())
				{
					return 20;
				}
				else if ((((((__LIB_6__::func_401(1) && func_1728(PLAYER::PLAYER_ID())) && (__LIB_0__::func_396(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__::func_396(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_582() != __LIB_1__::func_301()))) && !__LIB_2__::func_91()) && !__LIB_8__::func_768(PLAYER::PLAYER_ID())) && !__LIB_18__::func_447(1)) && !(__LIB_0__::func_292(PLAYER::PLAYER_ID(), 0) == 0 && func_1724(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_35__::func_700())
					{
						return 34;
					}
					else if (__LIB_32__::func_181(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_2__::func_90(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_57(iVar0) && __LIB_8__::func_886(iVar0)) && (__LIB_32__::func_266(iVar0) || __LIB_0__::func_581(PLAYER::PLAYER_ID())))
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
				else if (__LIB_32__::func_181(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_2__::func_90(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_57(iVar0) && __LIB_8__::func_886(iVar0))
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

int func_1724(int iParam0)//Position - 0xC413A
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_113(iParam0, 0))
	{
		iVar0 = __LIB_0__::func_603(iParam0);
		Var1 = { func_1678(iVar0) };
		return func_1376(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1728(int iParam0)//Position - 0xC421E
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_1678(iParam0) };
	if (__LIB_1__::func_113(iParam0, 0))
	{
		iVar1 = __LIB_0__::func_603(iParam0);
		Var2 = { func_1678(iVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		iVar3 = __LIB_6__::func_399(iParam0, 1);
		if (!iVar3 == __LIB_0__::func_160())
		{
			Var4 = { func_1678(iVar3) };
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

void func_1781(int iParam0)//Position - 0xC909F
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[iParam0 /*4*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_344.f_7[iParam0 /*4*/]), false))
	{
		if (func_1782(Local_344.f_7[iParam0 /*4*/], &uLocal_1071))
		{
		}
	}
}

int func_1782(int iParam0, var uParam1)//Position - 0xC90E2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (Global_1836844.f_20)
	{
		if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!uParam1->f_4[iVar0])
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[iVar0]))
					{
						uParam1->f_4[iVar0] = 1;
						uParam1->f_8[iVar0] = Global_1836844.f_21;
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (!uParam1->f_4[iVar0])
			{
				uParam1->f_8[iVar0] = -1;
			}
			iVar0++;
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(iParam0), PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((*uParam1)[iVar0]))
				{
					(*uParam1)[iVar0] = iParam0;
					Jump @213; //curOff = 184
				}
				else if ((*uParam1)[iVar0] == iParam0)
				{
				}
				else
				{
					iVar0++;
				}
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					if (!__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
					{
						(*uParam1)[iVar0] = 0;
						uParam1->f_4[iVar0] = 0;
						uParam1->f_8[iVar0] = -1;
					}
					else if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_ENT(iParam0)))
					{
						(*uParam1)[iVar0] = 0;
						uParam1->f_4[iVar0] = 0;
						uParam1->f_8[iVar0] = -1;
					}
				}
				iVar0++;
			}
		}
	}
	if (__LIB_0__::func_154(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (uParam1->f_4[iVar0] && iParam0 == (*uParam1)[iVar0])
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
				{
					iVar1 = NETWORK::NET_TO_OBJ(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						if (__LIB_0__::func_682(iParam0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iVar1))
							{
								ENTITY::DETACH_ENTITY(iVar1, true, true);
							}
							else
							{
								Var2 = { __LIB_10__::func_945(uParam1->f_8[iVar0], 1) };
								ENTITY::SET_ENTITY_COORDS(iVar1, Var2, true, false, false, true);
								uParam1->f_4[iVar0] = 0;
								uParam1->f_8[iVar0] = -1;
								(*uParam1)[iVar0] = 0;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1784(int iParam0)//Position - 0xC9BD2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_1790(iParam0, 1);
	func_1790(iParam0, 0);
	bVar0 = false;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[iParam0 /*4*/]))
	{
		iVar1 = NETWORK::NET_TO_ENT(Local_344.f_7[iParam0 /*4*/]);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar1);
			if (iVar2 != -1)
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					if (PED::IS_PED_A_PLAYER(iVar3))
					{
						iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
						if (iVar4 == PLAYER::PLAYER_ID())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_344.f_7[iParam0 /*4*/]))
							{
								if (__LIB_28__::func_709(16))
								{
									ENTITY::DETACH_ENTITY(iVar1, true, true);
								}
								OBJECT::HIDE_PORTABLE_PICKUP_WHEN_DETACHED(NETWORK::NET_TO_OBJ(Local_344.f_7[iParam0 /*4*/]), false);
								ENTITY::SET_ENTITY_INVINCIBLE(iVar1, true);
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
								func_884(iParam0, 0);
								bVar0 = true;
							}
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::GET_VEHICLE_PED_IS_IN(iVar3, false) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
							{
								func_884(iParam0, 1);
							}
						}
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!__LIB_1__::func_909() && func_522())
		{
			__LIB_21__::func_190(242, PLAYER::PLAYER_ID(), __LIB_1__::func_301(), 0, 0, -1, 0);
		}
		__LIB_18__::func_369(1, -1);
	}
	else
	{
		__LIB_18__::func_369(0, -1);
	}
	if (!func_522())
	{
		if (iParam0 == (__LIB_0__::func_109() - 1))
		{
			if (__LIB_1__::func_909())
			{
				__LIB_26__::func_820(1);
				__LIB_32__::func_914(0);
				__LIB_21__::func_123();
			}
			else
			{
				__LIB_26__::func_820(0);
			}
		}
	}
}

void func_1790(int iParam0, int iParam1)//Position - 0xC9EAE
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	MISC::CLEAR_BIT(&(Local_345[NETWORK::PARTICIPANT_ID_TO_INT() /*13*/].f_3[iParam0 /*2*/][iVar0]), iVar1);
}

void func_1791()//Position - 0xC9EDD
{
	if (!__LIB_28__::func_709(2))
	{
		func_1882(242, 1, -1, 0);
		__LIB_28__::func_708(2);
	}
	else if (!__LIB_28__::func_709(3))
	{
		if (__LIB_2__::func_47(&(Local_344.f_3), 10000, 0))
		{
			__LIB_11__::func_64();
			__LIB_28__::func_708(3);
		}
	}
	if (!__LIB_28__::func_709(4))
	{
		__LIB_41__::func_751(-1, 0, 0, -1, 0, 0);
		__LIB_28__::func_708(4);
	}
}

void func_1882(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xCC9B6
{
	float fVar0;
	if (Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 != iParam0)
	{
		__LIB_4__::func_830(-1);
		Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_33 = iParam0;
		if (__LIB_4__::func_829() != -1)
		{
			__LIB_4__::func_831(-1);
		}
		if (__LIB_4__::func_828() != -1)
		{
			__LIB_5__::func_746(-1);
		}
		__LIB_10__::func_959(iParam2);
		__LIB_20__::func_416(iParam0);
		if (!__LIB_10__::func_958(iParam0))
		{
			fVar0 = __LIB_10__::func_957(iParam0);
			if (fVar0 != 1f)
			{
				__LIB_7__::func_230(fVar0);
				MISC::SET_BIT(&(Global_1943920.f_3), 1);
			}
		}
		if (!__LIB_10__::func_956(iParam0) || iParam3)
		{
			if (__LIB_10__::func_955(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1943920.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (__LIB_0__::func_674())
		{
			__LIB_1__::func_484(27);
		}
		if (bParam1)
		{
			if (!__LIB_25__::func_938())
			{
				__LIB_6__::func_990(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((BitTest(Global_2815059.f_4624, 1) || BitTest(Global_2815059.f_4624, 4)) || BitTest(Global_2815059.f_4624, 0))
			{
				__LIB_1__::func_447(6);
			}
			__LIB_10__::func_885();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (__LIB_0__::func_738(PLAYER::PLAYER_ID()) && __LIB_0__::func_286(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1), 8);
		}
		__LIB_40__::func_228();
		if (__LIB_10__::func_943(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1943920.f_3), 6);
		}
		Global_2815059.f_6745 = 0;
	}
}

void func_1896(int iParam0, int iParam1)//Position - 0xCCEAD
{
	Local_345[iParam0 /*13*/] = iParam1;
}

bool func_1897()//Position - 0xCCEBE
{
	if (!func_857(NETWORK::PARTICIPANT_ID(), 1))
	{
		if (func_6(1))
		{
			func_1898(0);
			func_171(1);
		}
	}
	return func_857(NETWORK::PARTICIPANT_ID(), 1);
}

void func_1898(bool bParam0)//Position - 0xCCEEE
{
	switch (func_82())
	{
		case 0:
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1222.0442f, -317.58798f, 34.58566f, -1236.8754f, -332.15967f, 40.31116f, bParam0, true);
			break;
		case 1:
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(944.56476f, -1831.8599f, 29.1916f, 929.48584f, -1814.0168f, 40.09889f, bParam0, true);
			break;
		case 2:
			break;
	}
}

int func_1899()//Position - 0xCCF64
{
	return Local_344.f_0;
}

int func_1900(int iParam0)//Position - 0xCCF6F
{
	return Local_345[iParam0 /*13*/];
}

void func_1901()//Position - 0xCCF7E
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				switch (iVar2)
				{
					case -2094888821:
						func_1908(iVar0);
						break;
				}
				break;
			case 186:
				func_1902(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_1902(int iParam0)//Position - 0xCCFE5
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (Local_344.f_74 == -1)
			{
				Local_344.f_74 = func_1907(Var0.f_0, Var0.f_1);
			}
		}
		if (ENTITY::IS_ENTITY_A_PED(Var0.f_0))
		{
			iVar1 = __LIB_1__::func_363();
			if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar1)
			{
				if (__LIB_10__::func_952(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0)))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
					{
						func_881(PLAYER::PLAYER_ID(), iVar1, 1, 0);
					}
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_0);
				if ((PED::IS_PED_A_PLAYER(iVar2) && ENTITY::DOES_ENTITY_EXIST(Var0.f_1)) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
				{
					iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
					iVar4 = 0;
					while (iVar4 < 14)
					{
						if (func_152(iVar4))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_24[iVar4 /*2*/]))
							{
								if (iVar3 == NETWORK::NET_TO_PED(Local_344.f_24[iVar4 /*2*/]))
								{
									func_881(PLAYER::PLAYER_ID(), __LIB_1__::func_363(), 1, 0);
								}
							}
						}
						iVar4++;
					}
				}
			}
			iVar5 = 0;
			while (iVar5 < 14)
			{
				if (!func_135(iVar5) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_24[iVar5 /*2*/]))
				{
					if (Var0.f_0 == NETWORK::NET_TO_ENT(Local_344.f_24[iVar5 /*2*/]))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							__LIB_32__::func_914(0);
							__LIB_21__::func_123();
						}
					}
				}
				iVar5++;
			}
			if (func_1905(Var0))
			{
				__LIB_32__::func_914(0);
				__LIB_21__::func_123();
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(Var0.f_0))
		{
			iVar6 = __LIB_1__::func_363();
			if (PLAYER::GET_MAX_WANTED_LEVEL() < iVar6)
			{
				iVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), -1, false);
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0.f_0), 0, false);
				if (__LIB_28__::func_386(Var0.f_0, iVar7, iVar8))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1)) && PLAYER::PLAYER_PED_ID() == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
					{
						func_881(PLAYER::PLAYER_ID(), iVar6, 1, 0);
					}
				}
			}
			if (!func_6(13) && !func_857(NETWORK::PARTICIPANT_ID(), 9))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_127()))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_127()), false))
					{
						if (Var0.f_0 == NETWORK::NET_TO_ENT(func_127()))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_589()))
							{
								if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_589()), false))
								{
									if (Var0.f_1 == NETWORK::NET_TO_ENT(func_589()))
									{
										if (__LIB_6__::func_924(func_127()))
										{
											VEHICLE::SET_VEHICLE_TIMED_EXPLOSION(NETWORK::NET_TO_VEH(func_127()), NETWORK::NET_TO_PED(func_589()), 1000);
											func_171(9);
										}
									}
								}
							}
						}
					}
					else
					{
						func_171(9);
					}
				}
			}
		}
	}
}

int func_1905(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)//Position - 0xCD3FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_1__::func_301() == __LIB_0__::func_582())
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_0))
	{
		if (ENTITY::IS_ENTITY_A_PED(Param0.f_0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_0);
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				if (__LIB_0__::func_154(iVar1, 0, 1))
				{
					if (__LIB_1__::func_113(iVar1, 1) && __LIB_0__::func_603(iVar1) == __LIB_1__::func_301())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Param0.f_1))
							{
								iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Param0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar2))
								{
									iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
									if (__LIB_0__::func_154(iVar3, 0, 1) && iVar3 == PLAYER::PLAYER_ID())
									{
										if (!__LIB_2__::func_69(iVar1, iVar3))
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
	}
	return 0;
}

int func_1907(int iParam0, int iParam1)//Position - 0xCD4FE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar0 = -1;
	iVar1 = 1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar2))
		{
			iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
		}
		else
		{
			iVar1 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
		if (PED::IS_PED_A_PLAYER(iVar3))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3);
		}
	}
	if (iVar1 == 0 || (__LIB_0__::func_154(iVar4, 0, 1) && __LIB_6__::func_941(iVar4, __LIB_1__::func_301(), 1)))
	{
		if (__LIB_0__::func_154(iVar5, 0, 1) && !__LIB_6__::func_941(iVar5, __LIB_1__::func_301(), 1))
		{
			if (__LIB_6__::func_787(iVar5, 1, 0))
			{
				iVar0 = 2;
			}
			else if (__LIB_6__::func_787(iVar5, 1, 1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

void func_1908(int iParam0)//Position - 0xCD5D4
{
	struct<6> Var0;
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 6))
	{
		Local_156.f_0 = Var0.f_2;
		Local_156.f_2 = Var0.f_4;
		Local_156.f_1 = Var0.f_5;
		__LIB_28__::func_708(15);
	}
}

void func_1909()//Position - 0xCD608
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	struct<16> Var4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bVar5 = true;
	bVar6 = true;
	bVar7 = false;
	bVar1 = false;
	while (bVar1 < 32)
	{
		Local_131[bVar1 /*3*/] = __LIB_0__::func_160();
		Local_131[bVar1 /*3*/].f_1 = -1;
		Local_131[bVar1 /*3*/].f_2 = uVar3;
		MISC::CLEAR_BIT(&uLocal_170, bVar1);
		MISC::CLEAR_BIT(&uLocal_172, bVar1);
		bVar1++;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		Local_130[iVar0 /*20*/] = __LIB_0__::func_160();
		Local_130[iVar0 /*20*/].f_1 = -1;
		MISC::CLEAR_BIT(&uLocal_171, iVar0);
		Local_130[iVar0 /*20*/].f_2 = { Var4 };
		Local_130[iVar0 /*20*/].f_18 = 0;
		Local_130[iVar0 /*20*/].f_19 = 0;
		iVar0++;
	}
	iVar8 = 0;
	while (iVar8 < __LIB_0__::func_109())
	{
		iLocal_160[iVar8] = __LIB_0__::func_160();
		func_1790(iVar8, 2);
		func_1790(iVar8, 3);
		iVar8++;
	}
	iLocal_343 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			Local_130[iVar0 /*20*/] = iVar0;
			MISC::SET_BIT(&uLocal_171, iVar0);
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(Local_130[iVar0 /*20*/]);
			bVar1 = iVar2;
			if (__LIB_0__::func_154(iVar2, 0, 1))
			{
				Local_131[bVar1 /*3*/] = iVar2;
				Local_130[iVar0 /*20*/].f_1 = bVar1;
				Local_131[bVar1 /*3*/].f_1 = iVar0;
				Local_131[bVar1 /*3*/].f_2 = PLAYER::GET_PLAYER_PED(iVar2);
				StringCopy(&(Local_130[iVar0 /*20*/].f_2), PLAYER::GET_PLAYER_NAME(iVar2), 64);
				MISC::SET_BIT(&uLocal_170, bVar1);
				if (ENTITY::IS_ENTITY_DEAD(Local_131[bVar1 /*3*/].f_2, false))
				{
					MISC::SET_BIT(&uLocal_172, bVar1);
				}
				if (__LIB_0__::func_581(Local_131[bVar1 /*3*/]))
				{
					Local_130[iVar0 /*20*/].f_18 = 1;
				}
				else if (__LIB_1__::func_113(Local_131[bVar1 /*3*/], 0))
				{
					Local_130[iVar0 /*20*/].f_19 = 1;
				}
				if (iLocal_174 == iVar0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_131[bVar1 /*3*/].f_2, false))
					{
					}
				}
				if (Local_130[iVar0 /*20*/].f_18)
				{
					bVar5 = false;
					if (!BitTest(uLocal_172, bVar1) && !BitTest(uLocal_172, PLAYER::PLAYER_ID()))
					{
					}
				}
				else if (Local_130[iVar0 /*20*/].f_19)
				{
					iLocal_343++;
				}
				if (!func_857(Local_130[iVar0 /*20*/], 0))
				{
					bVar6 = false;
				}
				bVar9 = (PLAYER::PLAYER_ID() != iVar2 && __LIB_2__::func_145(PLAYER::PLAYER_ID(), iVar2));
				iVar8 = 0;
				while (iVar8 < __LIB_0__::func_109())
				{
					if (func_521(iVar8, Local_130[iVar0 /*20*/], 0))
					{
						iLocal_160[iVar8] = Local_131[bVar1 /*3*/];
						if (bVar9)
						{
							func_884(iVar8, 2);
						}
						else
						{
							func_884(iVar8, 3);
						}
					}
					if (func_521(iVar8, Local_130[iVar0 /*20*/], 5))
					{
						if (bVar9)
						{
							func_884(iVar8, 6);
						}
					}
					iVar8++;
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (func_857(Local_130[iVar0 /*20*/], 11))
					{
						bVar7 = true;
						if (Local_344.f_73 == -1)
						{
							Local_344.f_73 = iVar0;
						}
					}
					if (!func_6(3))
					{
						if (func_857(Local_130[iVar0 /*20*/], 3))
						{
							func_79(3);
						}
					}
					if (!func_6(2))
					{
						if (func_857(Local_130[iVar0 /*20*/], 2))
						{
							func_79(2);
						}
					}
					if (!func_6(5))
					{
						if (func_857(Local_130[iVar0 /*20*/], 4))
						{
							func_79(5);
						}
					}
					if (!func_6(10))
					{
						if (func_857(Local_130[iVar0 /*20*/], 7))
						{
							func_79(10);
						}
					}
					if (!func_6(6))
					{
						if (func_857(Local_130[iVar0 /*20*/], 5))
						{
							func_79(6);
						}
					}
					if (!func_6(7))
					{
						if (func_857(Local_130[iVar0 /*20*/], 6))
						{
							func_79(7);
						}
					}
					if (!func_6(11))
					{
						if (func_857(Local_130[iVar0 /*20*/], 8))
						{
							func_79(11);
						}
					}
					if (!func_6(13))
					{
						if (func_857(Local_130[iVar0 /*20*/], 9))
						{
							func_79(13);
						}
					}
					if (!func_6(9))
					{
						if (func_857(Local_130[iVar0 /*20*/], 10))
						{
							func_79(9);
						}
					}
					if (!func_6(14))
					{
						if (func_857(Local_130[iVar0 /*20*/], 12))
						{
							func_79(14);
						}
					}
					if (!func_6(15))
					{
						if (func_857(Local_130[iVar0 /*20*/], 13))
						{
							func_79(15);
						}
					}
					iVar8 = 0;
					while (iVar8 < __LIB_0__::func_109())
					{
						if (!func_4(iVar8, 2))
						{
							if (func_521(iVar8, Local_130[iVar0 /*20*/], 5))
							{
								Local_344.f_7[iVar8 /*4*/].f_3 = Local_131[bVar1 /*3*/];
								func_159(iVar8, 2);
							}
						}
						if (!func_4(iVar8, 0))
						{
							if (func_521(iVar8, Local_130[iVar0 /*20*/], 0))
							{
								func_159(iVar8, 0);
							}
						}
						if (!func_4(iVar8, 3))
						{
							if (func_521(iVar8, Local_130[iVar0 /*20*/], 7))
							{
								func_159(iVar8, 3);
							}
						}
						iVar8++;
					}
				}
			}
		}
		iVar0++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!bVar7)
		{
			if (Local_344.f_73 != -1)
			{
				Local_344.f_73 = -1;
			}
		}
		if (bVar6)
		{
			if (!func_6(0))
			{
				func_79(0);
			}
		}
		else if (func_6(0))
		{
			func_1910(0);
		}
		if (func_157() == 0)
		{
			if (bVar5)
			{
			}
			else if (iLocal_343 == 0)
			{
				if (__LIB_0__::func_649(&(Local_344.f_3)))
				{
					if (__LIB_2__::func_47(&(Local_344.f_3), 10000, 0))
					{
					}
				}
			}
		}
	}
}

void func_1910(int iParam0)//Position - 0xCDB13
{
	int iVar0;
	int iVar1;
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Local_344.f_1[iVar0]), iVar1);
}

void func_1912()//Position - 0xCDB41
{
	int iVar0;
	int iVar1;
	int iVar2;
	iLocal_174 = -1;
	if (BitTest(uLocal_170, PLAYER::PLAYER_ID()))
	{
		if (BitTest(uLocal_171, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!__LIB_6__::func_948(PLAYER::PLAYER_ID()))
			{
				iLocal_174 = NETWORK::PARTICIPANT_ID_TO_INT();
			}
			else if (__LIB_0__::func_728() && !__LIB_2__::func_227())
			{
				iVar0 = __LIB_6__::func_544();
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
						iLocal_174 = iVar2;
					}
				}
			}
		}
	}
}

void func_1929()//Position - 0xCDF62
{
	__LIB_18__::func_369(0, -1);
	func_894(1);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_1069);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_368);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_367);
	if (__LIB_28__::func_709(21))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 30);
		__LIB_28__::func_742(21);
	}
	if (iLocal_1088 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1088))
		{
			AUDIO::STOP_SOUND(iLocal_1088);
		}
		AUDIO::RELEASE_SOUND_ID(iLocal_1088);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT/ALARM_BELL_02");
		iLocal_1088 = -1;
	}
	func_1087();
	func_1086();
	func_1085();
	func_1051();
	__LIB_41__::func_18(1, 0);
	__LIB_18__::func_455();
	if (__LIB_28__::func_709(19))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Bank_Job_General_Scene");
	}
	if (func_157() != 0)
	{
		func_1938();
		func_1937();
		func_1936();
		func_1935();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			__LIB_10__::func_962(&(Local_344.f_72), 0);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("BTL_MUSIC_STOP");
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BTL_FAIL");
	}
	if (__LIB_1__::func_301() == PLAYER::PLAYER_ID())
	{
		__LIB_34__::func_597(242);
	}
	__LIB_26__::func_820(0);
	func_1930();
	if (bLocal_165)
	{
		__LIB_11__::func_54();
	}
	if (func_550(PLAYER::PLAYER_ID()))
	{
		func_591(0);
		if (__LIB_28__::func_709(17))
		{
			PLAYER::SET_PLAYER_LEAVE_PED_BEHIND(PLAYER::PLAYER_ID(), true);
			NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
			__LIB_28__::func_742(17);
		}
	}
	func_813(0);
	func_1898(1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1930()//Position - 0xCE0B1
{
	if (__LIB_28__::func_709(6))
	{
		CAM::DO_SCREEN_FADE_IN(2500);
		STREAMING::CLEAR_FOCUS();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		if (__LIB_4__::func_715() && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			__LIB_18__::func_465(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
	}
}

void func_1935()//Position - 0xCE272
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_53[iVar0 /*2*/]))
		{
			__LIB_1__::func_46(&(Local_344.f_53[iVar0 /*2*/]));
		}
		iVar0++;
	}
}

void func_1936()//Position - 0xCE2A9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_24[iVar0 /*2*/]))
		{
			__LIB_1__::func_46(&(Local_344.f_24[iVar0 /*2*/]));
		}
		iVar0++;
	}
}

void func_1937()//Position - 0xCE2E1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_66[iVar0]))
		{
			__LIB_1__::func_46(&(Local_344.f_66[iVar0]));
		}
		iVar0++;
	}
}

void func_1938()//Position - 0xCE318
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_0__::func_109())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_344.f_7[iVar0 /*4*/]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_344.f_7[iVar0 /*4*/]))
		{
			__LIB_1__::func_96(&(Local_344.f_7[iVar0 /*4*/]));
		}
		iVar0++;
	}
}

void func_1991(bool bParam0, bool bParam1)//Position - 0xD0AB8
{
	bool bVar0;
	var uVar1;
	if (!__LIB_28__::func_709(0))
	{
		uVar1 = __LIB_24__::func_767(func_157(), bParam0, bVar0, bParam1);
		Global_1944303.f_2 = Local_344.f_75;
		Global_1944303.f_3 = Local_344.f_76;
		Global_1944303.f_20 = Local_344.f_64;
		Global_1944303.f_34 = Local_344.f_74;
		__LIB_38__::func_964(bParam0, uVar1, 0, 0, -1, -1, -1, -1, -1, 0, -1, 0);
		__LIB_28__::func_708(0);
	}
}

int func_2058(struct<21> Param0)//Position - 0xD3074
{
	__LIB_0__::func_673(32, Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(__LIB_35__::func_831(242, -1, -1, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(__LIB_32__::func_475(242, -1, -1, -1));
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(__LIB_38__::func_966(242, -1, 1, -1, -1, -1));
	__LIB_1__::func_569(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_344, 77, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_345, 417, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	__LIB_38__::func_965(0, 0, 0);
	return 1;
}

