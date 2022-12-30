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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52[4] = { 0, 0, 0, 0 };
	int iLocal_53 = 0;
	int* iLocal_54 = NULL;
	int* iLocal_55 = NULL;
	int* iLocal_56 = NULL;
	int* iLocal_57 = NULL;
	int* iLocal_58 = NULL;
	int* iLocal_59 = NULL;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<5> Local_67 = { 0, 0, 0, 0, 0 } ;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 21;
	var uLocal_71 = 6;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	struct<2> Local_82 = { 0, 0 } ;
	var uLocal_83 = -1;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 1000;
	var uLocal_91 = 1000;
	var uLocal_92 = 0;
	struct<3> Local_93 = { 0, 0, 0 } ;
	float fLocal_94 = 0f;
	struct<3> Local_95 = { 0, 0, 0 } ;
	float fLocal_96 = 0f;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	float fLocal_99 = 0f;
	struct<3> Local_100 = { 0, 0, 0 } ;
	float fLocal_101 = 0f;
	struct<3> Local_102 = { 0, 0, 0 } ;
	float fLocal_103 = 0f;
	struct<3> Local_104 = { 0, 0, 0 } ;
	float fLocal_105 = 0f;
	struct<3> Local_106 = { 0, 0, 0 } ;
	float fLocal_107 = 0f;
	struct<3> Local_108 = { 0, 0, 0 } ;
	float fLocal_109 = 0f;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_119[4];
	struct<3> Local_120[4];
	struct<3> Local_121 = { 0, 0, 0 } ;
	float fLocal_122 = 0f;
	struct<3> Local_123[3];
	int iLocal_124 = 0;
	struct<3> Local_125[6];
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	int iLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	bool bLocal_133 = 0;
	bool bLocal_134 = 0;
	bool bLocal_135 = 0;
	bool bLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	float fLocal_146 = 0f;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_166 = { 0, 0, 0 } ;
	float fLocal_167 = 0f;
	char[] cLocal_168[8] = 0;
	char* sLocal_169 = NULL;
	char* sLocal_170 = NULL;
	struct<20> Local_171 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_186 = 4;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 4;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 4;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 4;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 4;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 4;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 4;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	struct<10> Local_233[16];
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	struct<2> Local_238 = { 0, 0 } ;
	struct<2> Local_239 = { 0, 0 } ;
	struct<2> Local_240 = { 0, 0 } ;
	struct<2> Local_241 = { 0, 0 } ;
	struct<2> Local_242 = { 0, 0 } ;
	struct<2> Local_243 = { 0, 0 } ;
	struct<2> Local_244 = { 0, 0 } ;
	struct<2> Local_245 = { 0, 0 } ;
	struct<2> Local_246 = { 0, 0 } ;
	struct<2> Local_247 = { 0, 0 } ;
	struct<2> Local_248 = { 0, 0 } ;
	struct<9> Local_249[4];
	struct<15> Local_250 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_251[9];
	float fLocal_252[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262[4] = { 0, 0, 0, 0 };
	int iLocal_263[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_264[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	bool bLocal_267 = 0;
	char cLocal_268[24] = "";
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	bool bLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	char* sLocal_285 = NULL;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	var uLocal_297[4] = { 0, 0, 0, 0 };
	float fLocal_298[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_299 = { 0, 0, 0 } ;
	float fLocal_300 = 0f;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	struct<3> Local_309 = { 0, 0, 0 } ;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	var uLocal_312 = 100;
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
	var uLocal_613 = 100;
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
	float fLocal_914 = 0f;
	float fLocal_915 = 0f;
	float fLocal_916 = 0f;
	int iLocal_917 = 0;
	int iLocal_918 = 0;
	char* sLocal_919[2] = { NULL, NULL };
	int iLocal_920[2] = { 0, 0 };
	int iLocal_921[2] = { 0, 0 };
	bool bLocal_922 = 0;
	struct<3> Local_923 = { 0, 0, 0 } ;
	struct<3> Local_924 = { 0, 0, 0 } ;
	float fLocal_925 = 0f;
	struct<3> Local_926 = { 0, 0, 0 } ;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	bool bLocal_931 = 0;
	bool bLocal_932 = 0;
	bool bLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	struct<6> Local_936 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 4;
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
	int iLocal_963 = 5;
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
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	bool bLocal_1004 = 0;
	bool bLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
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
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_93 = { 1397.8824f, 3594.6257f, 33.9272f };
	fLocal_94 = 199.4271f;
	Local_95 = { -132.28256f, 6498.7437f, 28.6281f };
	fLocal_96 = -102.165855f;
	Local_97 = { -124.71f, 6504.69f, 28.63f };
	Local_98 = { -88.9369f, 6418.164f, 30.4645f };
	fLocal_99 = 318.126f;
	Local_100 = { -348.9985f, 6194.5923f, 30.7398f };
	fLocal_101 = 134.3799f;
	Local_102 = { 1393.0525f, 3613.763f, 37.9419f };
	fLocal_103 = 88.1351f;
	Local_104 = { -131.6681f, 6500.699f, 28.628f };
	fLocal_105 = 214.1093f;
	Local_106 = { 1396.4149f, 3610.146f, 37.9419f };
	fLocal_107 = 23.6499f;
	Local_108 = { -144.3017f, 6359.2607f, 30.4905f };
	fLocal_109 = 29.4514f;
	Local_110 = { -113.86f, 6463.06f, 34.1f };
	Local_111 = { 0f, 0f, -45f };
	Local_112 = { -131.08363f, 6445.028f, 30.45136f };
	Local_113 = { -111.19f, 6462.28f, 32.08f };
	Local_114 = { -105.6964f, 6467.5796f, 31.6343f };
	Local_115 = { -110.37586f, 6482.127f, (33.938354f - 0.23f) };
	Local_116 = { 0f, 0f, -135f };
	iLocal_147 = -1;
	iLocal_148 = -1;
	iLocal_149 = -1;
	iLocal_154 = 1;
	iLocal_163 = -1;
	Local_165 = { -66.02775f, 6432.5547f, 29.627739f };
	Local_166 = { -101.967804f, 6396.9546f, 52.85154f };
	fLocal_167 = 26.75f;
	cLocal_168 = "RBS1AUD";
	sLocal_169 = "RBsetup";
	iLocal_232 = -1;
	StringCopy(&cLocal_268, "", 24);
	sLocal_285 = "palsetupwalk";
	iLocal_288 = 5;
	fLocal_916 = 100f;
	Local_923 = { 1391.6804f, 3582.9775f, 33.746563f };
	Local_924 = { 1430.2579f, 3597.6423f, 40.459114f };
	fLocal_925 = 33f;
	Local_926 = { 1403.7411f, 3593.7473f, 33.8199f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_0__::func_681(37, 0);
		__LIB_0__::func_681(38, 0);
		func_892();
		func_891();
	}
	MISC::SET_MISSION_FLAG(true);
	func_883();
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("premier"), 3);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePaletoScoreSetup", 0);
		if (iLocal_260)
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]) && !PED::IS_PED_INJURED(iLocal_52[iVar0]))
				{
					fVar1 = (CAM::REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() + 5f);
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_52[iVar0], false)) < (fVar1 * fVar1))
					{
						RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
					}
				}
				iVar0++;
			}
		}
		if (!iLocal_129)
		{
			if (iLocal_48 != 13)
			{
				func_819(iLocal_48);
			}
			iLocal_129 = 1;
		}
		switch (iLocal_48)
		{
			case 0:
				func_458();
				break;
			case 1:
				func_425();
				func_422();
				break;
			case 2:
				func_410();
				break;
			case 3:
				func_404();
				func_422();
				break;
			case 4:
				func_403();
				break;
			case 5:
				func_395();
				func_422();
				break;
			case 6:
				func_343();
				break;
			case 7:
				func_342();
				func_190();
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -986.00415f, 5367.3154f, 50.055317f, -1003.9463f, 5402.2593f, 39.60506f, 24.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1511.8733f, 6236.6304f, -81.146416f, 1527.3497f, 6704.018f, 71.62516f, 215.5f, false, true, 0))
				{
					if (__LIB_15__::func_944() == 0)
					{
						func_98("CBH_COPFAIL");
					}
					else
					{
						func_98("CBH_COPFAILT");
					}
				}
				break;
			case 8:
				func_93();
				break;
			case 11:
				func_87();
				break;
			case 9:
				func_32();
				break;
			case 13:
				break;
			case 10:
				if ((MISC::GET_GAME_TIMER() - iLocal_162) > 1000)
				{
					if (!Local_250.f_9)
					{
						Local_250.f_9 = 1;
					}
					__LIB_0__::func_429();
					HUD::CLEAR_PRINTS();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_162) > 2000)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_162) > 500)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_52)
					{
						if (!PED::IS_PED_INJURED(iLocal_52[iVar2]) && !PED::IS_PED_FLEEING(iLocal_52[iVar2]))
						{
							if (MISC::GET_GAME_TIMER() - iLocal_162) > (500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1500))
							{
								TASK::CLEAR_PED_TASKS(iLocal_52[iVar2]);
								TASK::TASK_SMART_FLEE_PED(iLocal_52[iVar2], PLAYER::PLAYER_PED_ID(), 200f, 200000, false, false);
							}
						}
						iVar2++;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_162) > 3500)
				{
					func_98("CBH_BNKFAIL");
				}
				break;
		}
		if (func_29())
		{
			if (__LIB_15__::func_944() == 0)
			{
				func_98("CBH_BNKFAIL");
			}
			else
			{
				func_98("CBH_BNKFAILT");
			}
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_FOCUS_ON_BANK"))
			{
				AUDIO::START_AUDIO_SCENE("PS_1_FOCUS_ON_BANK");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_FOCUS_ON_BANK"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_1_FOCUS_ON_BANK");
		}
		func_27();
		func_26();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
		{
			if ((PED::IS_PED_INJURED(iLocal_51) || ENTITY::IS_ENTITY_DEAD(iLocal_51, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_51))
			{
				func_98("CBH_LESTDED");
			}
		}
		if (iLocal_48 < 7 || iLocal_48 == 8)
		{
			func_25();
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
			{
				if ((PED::IS_PED_INJURED(uLocal_186[2]) || ENTITY::IS_ENTITY_DEAD(uLocal_186[2], false)) || FIRE::IS_ENTITY_ON_FIRE(uLocal_186[2]))
				{
					func_98("CMN_TDIED" /* GXT: ~s~Trevor died. */);
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_1007) > 3000)
		{
			bVar3 = false;
			if (__LIB_39__::func_117(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &bVar3))
			{
				if (bVar3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]) || ENTITY::DOES_ENTITY_EXIST(iLocal_51))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
						{
							iVar4 = uLocal_186[2];
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
						{
							iVar4 = iLocal_51;
						}
						if (!PED::IS_PED_INJURED(iVar4))
						{
							if (__LIB_16__::func_19(iVar4, PLAYER::PLAYER_PED_ID()) || ((!PED::IS_PED_IN_ANY_VEHICLE(iVar4, false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar4, true)) < 400f))
							{
								if (iLocal_1008 == 0)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_51)
									{
										StringConCat(&Var5, "LCITY1", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY1", 24);
									}
									if (__LIB_17__::func_243(&Local_233, cLocal_168, &Var5, 8, 0, 0, 0))
									{
										iLocal_1008++;
									}
								}
								else if (iLocal_1008 == 1)
								{
									StringCopy(&Var5, "RBS1_", 24);
									if (iVar4 == iLocal_51)
									{
										StringConCat(&Var5, "LCITY2", 24);
									}
									else
									{
										StringConCat(&Var5, "TCITY2", 24);
									}
									if (__LIB_17__::func_243(&Local_233, cLocal_168, &Var5, 8, 0, 0, 0))
									{
										iLocal_1008++;
									}
								}
								else if (iLocal_1008 == 2)
								{
									func_98("CBH_CFAIL");
								}
							}
						}
					}
				}
			}
			iLocal_1007 = MISC::GET_GAME_TIMER();
		}
		func_5();
		if (!bLocal_133)
		{
			if (func_3())
			{
				iVar6 = 0;
				while (iVar6 < iLocal_52)
				{
					if (!PED::IS_PED_INJURED(iLocal_52[iVar6]))
					{
						TASK::TASK_REACT_AND_FLEE_PED(iLocal_52[iVar6], PLAYER::PLAYER_PED_ID());
					}
					iVar6++;
				}
				bLocal_133 = true;
				Local_250.f_9 = 1;
				func_1();
				iLocal_162 = MISC::GET_GAME_TIMER();
				iLocal_48 = 10;
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && !bLocal_133)
		{
			if (iLocal_48 > 0 && iLocal_48 < 6)
			{
				func_93();
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			if (iLocal_48 == 1)
			{
				if (!bLocal_136 && iLocal_150 > 1)
				{
					if (!PED::IS_PED_INJURED(uLocal_186[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_186[2], iLocal_63, -1, 0, 2f, 1, 0);
						}
					}
				}
			}
			else if ((iLocal_48 == 3 || iLocal_48 == 5) || iLocal_48 == 6)
			{
				if (!PED::IS_PED_INJURED(uLocal_186[2]))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(uLocal_186[2], iLocal_63, -1, 2, 2f, 1, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_51))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_63, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_51, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_51, iLocal_63, -1, 0, 2f, 1, 0);
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_63, false))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_51, false);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_186[2]))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uLocal_186[2], false);
				}
			}
		}
		if (bLocal_130)
		{
			GRAPHICS::DRAW_DEBUG_TEXT_2D("SKIP IS ACTIVE", 0.9f, 0.02f, 0f, 0, 0, 255, 255);
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x97D
{
	__LIB_13__::func_808(&iLocal_56);
	__LIB_13__::func_808(&iLocal_57);
	__LIB_13__::func_808(&iLocal_55);
	__LIB_13__::func_808(&iLocal_54);
	__LIB_13__::func_808(&iLocal_54);
	__LIB_13__::func_808(&iLocal_58);
	__LIB_13__::func_808(&iLocal_59);
}

int func_3()//Position - 0x9C7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	iVar0 = 0;
	if (iLocal_48 == 1)
	{
		if (Local_250.f_9)
		{
			iVar0 = 1;
		}
	}
	if (func_29())
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			iVar0 = 1;
		}
		if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) && PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -109.28925f, 6468.679f, 30.545216f, -114.698524f, 6474.16f, 33.929283f, 1.5f, false, true, 0))
		{
			iVar0 = 1;
		}
	}
	if (iLocal_48 < 6)
	{
		iVar1 = 0;
		while (iVar1 < iLocal_52)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iVar1]))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_52[iVar1], true) };
				if (MISC::IS_BULLET_IN_AREA(Var2, 2f, true))
				{
					iVar0 = 1;
				}
				if (((((((FIRE::IS_EXPLOSION_IN_SPHERE(10, Var2, 20f) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(21, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Var2, 20f)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Var2, 20f))
				{
					iVar0 = 1;
				}
				if (PED::IS_PED_INJURED(iLocal_52[iVar1]))
				{
					iVar0 = 1;
				}
				else if (PED::IS_PED_RAGDOLL(iLocal_52[iVar1]) || PED::IS_PED_FLEEING(iLocal_52[iVar1]))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
	}
	if (!func_4())
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar3, true);
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar4, -107.39178f, 6466.308f, 30.634338f, -112.694305f, 6461.029f, 33.968357f, 4.75f, false, true, 0))
		{
			iVar0 = 1;
		}
	}
	if ((PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && Local_250.f_9) && iLocal_48 < 7)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_4()//Position - 0xC06
{
	return ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -120.703255f, 6486.524f, 35.468407f, -141.66322f, 6466.1753f, 30.688643f, 9.25f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -98.36755f, 6455.173f, 42.135567f, -122.31985f, 6479.52f, 30.458498f, 45.75f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -112.99578f, 6484.136f, 35.46868f, -124.83569f, 6485.98f, 30.290354f, 8f, false, true, 0));
}

void func_5()//Position - 0xCA5
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1398.8309f, 3609.6594f, 37.9892f, 1387.3754f, 3605.5156f, 41.085896f, 15.75f, false, true, 0))
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_76))
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				iLocal_76 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("cs_rbhs_int_delap_dust", 1392.1718f, 3604.2993f, 39.19458f, 0f, 0f, 0f, 1f, false, false, false, false);
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_76))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_76, false);
		STREAMING::REMOVE_PTFX_ASSET();
	}
}

void func_25()//Position - 0x1560
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_63, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_63, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_63, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_63, 1, 40000))
			{
				func_98("CBH_VEHSTUCK");
			}
		}
		else
		{
			func_98("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
		}
	}
}

void func_26()//Position - 0x15CA
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_257) || !ENTITY::DOES_ENTITY_EXIST(iLocal_256))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_114) < SYSTEM::POW(100f, 2f))
		{
			STREAMING::REQUEST_MODEL(joaat("v_ilev_cbankvauldoor01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_cbankvauldoor01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_257))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), false))
					{
						iLocal_257 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-104.6f, 6473.44f, 31.8f, 2f, joaat("v_ilev_cbankvauldoor01"), true, false, true);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_257, false, false);
					}
				}
				else
				{
					iLocal_256 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_cbankvauldoor01"), -104.6f, 6473.44f, 31.8f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_256, 0f, 0f, 45.72f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_256, true);
				}
			}
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_114) > SYSTEM::POW(150f, 2f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_257))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_257))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_257, true, false);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_257);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_256))
		{
			OBJECT::DELETE_OBJECT(&iLocal_256);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_cbankvauldoor01"));
	}
}

void func_27()//Position - 0x1709
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_61) || !ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_115) < SYSTEM::POW(100f, 2f))
		{
			STREAMING::REQUEST_MODEL(Local_250.f_7);
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_MODEL_LOADED(Local_250.f_7))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_61))
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_115, 1f, joaat("prop_ld_alarm_01"), false))
					{
						iLocal_61 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_115, 1f, joaat("prop_ld_alarm_01"), true, false, true);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_61, false, false);
						ENTITY::SET_ENTITY_COLLISION(iLocal_61, false, false);
					}
				}
				else
				{
					Local_250.f_0 = OBJECT::CREATE_OBJECT(Local_250.f_7, Local_115, true, true, false);
					ENTITY::SET_ENTITY_HEALTH(Local_250.f_0, 50, 0);
					Local_250.f_14 = 50;
					ENTITY::SET_ENTITY_ROTATION(Local_250.f_0, Local_116, 2, true);
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
		{
			if (ENTITY::GET_ENTITY_MODEL(Local_250.f_0) != Local_250.f_7)
			{
				STREAMING::REQUEST_MODEL(Local_250.f_7);
				if (STREAMING::HAS_MODEL_LOADED(Local_250.f_7))
				{
					OBJECT::DELETE_OBJECT(&Local_250);
				}
			}
			if (!Local_250.f_9)
			{
				if (func_28())
				{
					Local_250.f_7 = joaat("prop_ld_alarm_01_dam");
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Shoot_box", Local_250.f_0, "Paleto_Score_Setup_Sounds", false, 0);
					Local_250.f_9 = 1;
				}
			}
			else if (!iLocal_140 && Local_250.f_13 > 0)
			{
				STREAMING::REQUEST_PTFX_ASSET();
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_alarm_damage_sparks", Local_115, Local_116, 1f, false, false, false);
					iLocal_140 = 1;
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_250.f_1) < SYSTEM::POW(150f, 2f))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
				{
					if (ENTITY::GET_ENTITY_MODEL(Local_250.f_0) != Local_250.f_7)
					{
						STREAMING::REQUEST_MODEL(Local_250.f_7);
						AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM");
						if (STREAMING::HAS_MODEL_LOADED(Local_250.f_7))
						{
							OBJECT::DELETE_OBJECT(&Local_250);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
				{
					STREAMING::REQUEST_MODEL(Local_250.f_7);
					if (STREAMING::HAS_MODEL_LOADED(Local_250.f_7))
					{
						Local_250.f_0 = OBJECT::CREATE_OBJECT(Local_250.f_7, Local_250.f_1, true, true, false);
						ENTITY::SET_ENTITY_ROTATION(Local_250.f_0, Local_250.f_4, 2, true);
					}
				}
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_115) > SYSTEM::POW(150f, 2f))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_61))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_61, true, false);
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
			{
				OBJECT::DELETE_OBJECT(&Local_250);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_alarm_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_alarm_01_dam"));
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
	if (Local_250.f_9)
	{
		if (!AUDIO::IS_ALARM_PLAYING("PALETO_BAY_SCORE_ALARM"))
		{
			if (AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM"))
			{
				AUDIO::START_ALARM("PALETO_BAY_SCORE_ALARM", false);
			}
		}
	}
	if (!Local_250.f_9)
	{
		if (AUDIO::IS_ALARM_PLAYING("PALETO_BAY_SCORE_ALARM"))
		{
			AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", false);
		}
	}
}

bool func_28()//Position - 0x19CB
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
	{
		if (ENTITY::GET_ENTITY_HEALTH(Local_250.f_0) < Local_250.f_14)
		{
			if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_250.f_0, PLAYER::PLAYER_PED_ID(), true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(25, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f))
			{
				Local_250.f_13 = (Local_250.f_13 + (Local_250.f_14 - ENTITY::GET_ENTITY_HEALTH(Local_250.f_0)));
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_250.f_0);
				Local_250.f_14 = ENTITY::GET_ENTITY_HEALTH(Local_250.f_0);
			}
		}
		Local_250.f_14 = ENTITY::GET_ENTITY_HEALTH(Local_250.f_0);
	}
	return Local_250.f_13 > 0;
}

bool func_29()//Position - 0x1B2A
{
	return ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -116.802216f, 6472.056f, 33.47937f, -111.18188f, 6466.363f, 30.634308f, 7.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -102.2175f, 6471.6396f, 34.327644f, -110.66652f, 6463.194f, 30.638554f, 5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -99.396065f, 6461.184f, 33.66985f, -104.39022f, 6466.2f, 30.634308f, 2f, false, true, 0));
}

void func_32()//Position - 0x1BF1
{
	if (__LIB_15__::func_806(0) < 500 && !func_85())
	{
		__LIB_14__::func_593(0, 1, 500, 0, 0);
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !PED::IS_PED_INJURED(iLocal_51)) && !PED::IS_PED_INJURED(uLocal_186[2]))
	{
		switch (iLocal_292)
		{
			case 0:
				iLocal_293 = 0;
				iLocal_294 = 0;
				iLocal_295 = 0;
				iLocal_296 = 0;
				if (HUD::DOES_BLIP_EXIST(iLocal_58))
				{
					HUD::REMOVE_BLIP(&iLocal_58);
				}
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_638();
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_0__::func_382("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 7500, 1);
				}
				iLocal_292++;
				break;
			case 1:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					if (!iLocal_296)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_51, true)) < 10f && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_NOGUN", 8, 0, 0, 0))
							{
								iLocal_296 = 1;
							}
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						iLocal_54 = __LIB_0__::func_488(-316.8679f, 6071.798f, 30.1981f, 1);
						if (!iLocal_296 || (iLocal_296 && !__LIB_0__::func_75()))
						{
							HUD::CLEAR_PRINTS();
						}
					}
					if ((!iLocal_293 && iLocal_296) && !__LIB_0__::func_75())
					{
						__LIB_0__::func_382("CBH_GOTOSHOP", 7500, 1);
						iLocal_293 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						HUD::REMOVE_BLIP(&iLocal_55);
					}
				}
				else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), -326.3011f, 6077.182f, 30.4548f) > 20f)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						HUD::REMOVE_BLIP(&iLocal_54);
					}
				}
				else if (!__LIB_0__::func_490(HUD::GET_BLIP_COORDS(iLocal_54), -326.3011f, 6077.182f, 30.4548f, 15f, 0))
				{
					if (!iLocal_294)
					{
						__LIB_0__::func_382("CBH_BUYGUN", 7500, 1);
						iLocal_294 = 1;
					}
					HUD::SET_BLIP_COORDS(iLocal_54, -326.3011f, 6077.182f, 30.4548f);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -316.8679f, 6071.798f, 30.1981f, Global_19, true, true, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						HUD::REMOVE_BLIP(&iLocal_54);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						HUD::REMOVE_BLIP(&iLocal_55);
					}
					iLocal_292++;
				}
				if (((__LIB_0__::func_529(32) && HUD::DOES_BLIP_EXIST(iLocal_54)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && __LIB_0__::func_78(HUD::GET_BLIP_COORDS(iLocal_54), -326.3011f, 6077.182f, 30.4548f, 0))
				{
					iLocal_292 = 5;
				}
				break;
			case 2:
				if (__LIB_0__::func_213(iLocal_63, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0);
					iLocal_292++;
				}
				break;
			case 3:
				if (!HUD::DOES_BLIP_EXIST(iLocal_54))
				{
					if (!iLocal_294)
					{
						__LIB_0__::func_382("CBH_BUYGUN", 7500, 1);
						iLocal_294 = 1;
					}
					iLocal_54 = __LIB_0__::func_488(-326.3011f, 6077.182f, 30.4548f, 0);
				}
				if (__LIB_0__::func_529(32))
				{
					iLocal_292++;
				}
				break;
			case 4:
				if (__LIB_0__::func_529(32))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						HUD::REMOVE_BLIP(&iLocal_54);
					}
					if (!__LIB_0__::func_719())
					{
						if (func_85())
						{
							iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
							__LIB_0__::func_382("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 1);
							iLocal_296 = 0;
							iLocal_292++;
						}
						else if (!iLocal_296)
						{
							__LIB_0__::func_382("CBH_GUNREM", 7500, 1);
							iLocal_296 = 1;
						}
					}
					else if (iLocal_296)
					{
						iLocal_296 = 0;
					}
				}
				else
				{
					iLocal_292 = (iLocal_292 - 1);
				}
				break;
			case 5:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					if (!iLocal_296)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_51, true)) < 10f && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_GUNBACK", 8, 0, 0, 0))
							{
								iLocal_296 = 1;
							}
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						iLocal_54 = __LIB_0__::func_488(Local_95, 1);
					}
					if ((!iLocal_295 && iLocal_296) && !__LIB_0__::func_75())
					{
						__LIB_0__::func_382("CBH_GOBKBNK", 7500, 1);
						iLocal_295 = 1;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						HUD::REMOVE_BLIP(&iLocal_55);
					}
				}
				else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_63, true), Local_95) > 30f)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						HUD::REMOVE_BLIP(&iLocal_54);
					}
				}
				else
				{
					func_33(5);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_95, Global_19, true, true, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					iLocal_292++;
				}
				break;
			case 6:
				if (__LIB_0__::func_213(iLocal_63, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0);
					iLocal_292 = 0;
					func_33(5);
				}
				break;
			}
	}
	if (Local_250.f_9)
	{
		func_33(5);
	}
	if (iLocal_292 < 5)
	{
		if (func_85())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_54))
			{
				HUD::REMOVE_BLIP(&iLocal_54);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_55))
			{
				HUD::REMOVE_BLIP(&iLocal_55);
			}
			iLocal_292 = 5;
		}
	}
	else if (!func_85())
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_54))
		{
			HUD::REMOVE_BLIP(&iLocal_54);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_55))
		{
			HUD::REMOVE_BLIP(&iLocal_55);
		}
		iLocal_292 = 0;
	}
}

void func_33(int iParam0)//Position - 0x216C
{
	if (iParam0 != 13 && iParam0 != 0)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(false);
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		iLocal_131 = 0;
		if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	iLocal_150 = 0;
	iLocal_48 = iParam0;
	iLocal_129 = 0;
}

int func_85()//Position - 0x3DD8
{
	if (((((((((((((((((((((((((((((((((((!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")) == 0) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MICROSMG")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMG"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMG")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_CARBINERIFLE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_CARBINERIFLE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ADVANCEDRIFLE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ADVANCEDRIFLE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MG"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MG")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATMG"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATMG")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SAWNOFFSHOTGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SAWNOFFSHOTGUN")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTSHOTGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTSHOTGUN")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REMOTESNIPER"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_REMOTESNIPER")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MINIGUN")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL50"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL50")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTSMG"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTSMG")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPSHOTGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPSHOTGUN")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SPECIALCARBINE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SPECIALCARBINE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPRIFLE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BULLPUPRIFLE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYPISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYPISTOL")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNSPISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNSPISTOL")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_VINTAGEPISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_VINTAGEPISTOL")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GUSENBERG"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GUSENBERG")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MUSKET"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MUSKET")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSHOTGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSHOTGUN")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANRIFLE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPDW"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPDW")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANPISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MARKSMANPISTOL")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RAILGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RAILGUN")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MACHINEPISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_MACHINEPISTOL")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMPACTRIFLE"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMPACTRIFLE")) == 0)) && (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_DBSHOTGUN"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_DBSHOTGUN")) == 0))
	{
		return 0;
	}
	return 1;
}

void func_87()//Position - 0x438E
{
	switch (iLocal_50)
	{
		case 4:
			switch (iLocal_310)
			{
				case 0:
					__LIB_0__::func_429();
					if (!PED::IS_PED_INJURED(iLocal_230) && !PED::IS_PED_FLEEING(iLocal_230))
					{
						if (!PED::IS_PED_INJURED(iLocal_230))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_230, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						}
					}
					if (func_91("RBS1_BKRFAIL", iLocal_230))
					{
						iLocal_310++;
					}
					break;
				case 1:
					if (!__LIB_0__::func_75() && SYSTEM::TIMERA() > 2000)
					{
						func_98("CBH_SECALT");
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_310)
			{
				case 0:
					__LIB_0__::func_429();
					func_88();
					iLocal_310++;
					break;
				case 1:
					if (!__LIB_0__::func_75() && SYSTEM::TIMERA() > 2000)
					{
						if (bLocal_128)
						{
							func_98("CBH_SPOTLT");
						}
						else
						{
							func_98("CBH_SPOTLT");
						}
					}
					break;
			}
			break;
		case 2:
		case 1:
			switch (iLocal_310)
			{
				case 0:
					__LIB_0__::func_429();
					func_88();
					iLocal_310++;
					break;
				case 1:
					if (func_91("RBS1_BNKFAIL", iLocal_52[0]))
					{
						iLocal_310++;
					}
					break;
				case 2:
					if (!__LIB_0__::func_75() && SYSTEM::TIMERA() > 2000)
					{
						if (bLocal_128)
						{
							func_98("CBH_COPFAIL");
						}
						else
						{
							func_98("CBH_BNKFAIL");
						}
					}
					break;
			}
			break;
		case 5:
			switch (iLocal_310)
			{
				case 0:
					__LIB_0__::func_429();
					func_88();
					iLocal_310++;
					break;
				case 1:
					if (func_91("RBS1_WLFAIL", 0))
					{
						iLocal_310++;
					}
					break;
				case 2:
					if (!__LIB_0__::func_75() && SYSTEM::TIMERA() > 2000)
					{
						func_98("CBH_COPFAIL");
					}
					break;
			}
			break;
		case 6:
			break;
	}
}

void func_88()//Position - 0x4587
{
	int iVar0;
	iLocal_311 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101 /*EVENT_SHOCKING_MUGGING*/, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1f);
	iVar0 = 0;
	while (iVar0 < iLocal_52)
	{
		if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
		{
			TASK::CLEAR_PED_TASKS(iLocal_52[iVar0]);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52[iVar0], 17, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_52[iVar0], joaat("HATES_PLAYER"));
			if (!bLocal_128)
			{
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_52[iVar0], PLAYER::PLAYER_PED_ID());
			}
			else
			{
				TASK::TASK_SHOCKING_EVENT_REACT(iLocal_52[iVar0], iLocal_311);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_249.f_0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar0 /*9*/].f_3, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[iVar0 /*9*/].f_3))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_249[iVar0 /*9*/].f_3);
			}
		}
		if (!PED::IS_PED_INJURED(Local_249[iVar0 /*9*/][0]))
		{
			Local_309 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + __LIB_39__::func_124(ENTITY::GET_ENTITY_COORDS(Local_249[iVar0 /*9*/][0], true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f) };
			TASK::OPEN_SEQUENCE_TASK(&iLocal_307);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar0 /*9*/].f_3, false) && PED::IS_PED_IN_VEHICLE(Local_249[iVar0 /*9*/][0], Local_249[iVar0 /*9*/].f_3, false))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_249[iVar0 /*9*/].f_3, true)) < 900f)
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_249[iVar0 /*9*/].f_3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, 20f, 786469, 20f, 10f, true);
				}
				TASK::TASK_VEHICLE_MISSION(0, Local_249[iVar0 /*9*/].f_3, 0, 5, 10f, 786469, 10f, 10f, true);
				TASK::TASK_LEAVE_VEHICLE(0, Local_249[iVar0 /*9*/].f_3, 256);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_309, PLAYER::PLAYER_PED_ID(), 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_307);
			TASK::TASK_PERFORM_SEQUENCE(Local_249[iVar0 /*9*/][0], iLocal_307);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_307);
		}
		if (!PED::IS_PED_INJURED(Local_249[iVar0 /*9*/][1]))
		{
			Local_309 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + __LIB_39__::func_124(ENTITY::GET_ENTITY_COORDS(Local_249[iVar0 /*9*/][1], true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f) };
			TASK::OPEN_SEQUENCE_TASK(&iLocal_308);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar0 /*9*/].f_3, false) && PED::IS_PED_IN_VEHICLE(Local_249[iVar0 /*9*/][1], Local_249[iVar0 /*9*/].f_3, false))
			{
				TASK::TASK_LEAVE_VEHICLE(0, Local_249[iVar0 /*9*/].f_3, 256);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_309, PLAYER::PLAYER_PED_ID(), 1f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_308);
			TASK::TASK_PERFORM_SEQUENCE(Local_249[iVar0 /*9*/][1], iLocal_308);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_308);
		}
		iVar0++;
	}
}

int func_91(char* sParam0, int iParam1)//Position - 0x48CD
{
	struct<8> Var0;
	struct<8> Var1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!PED::IS_PED_INJURED(iParam1) && !PED::IS_PED_INJURED(iLocal_51))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 400f && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_51, true)) < 400f)
			{
				if (__LIB_17__::func_243(&Local_233, cLocal_168, sParam0, 9, 0, 0, 0))
				{
					return 1;
				}
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < 400f)
			{
				StringCopy(&Var0, sParam0, 64);
				StringConCat(&Var0, "_1", 64);
				if (__LIB_17__::func_731(&Local_233, cLocal_168, sParam0, &Var0, 9, 0, 0))
				{
					return 1;
				}
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_51, true)) < 400f)
			{
				StringCopy(&Var1, sParam0, 64);
				StringConCat(&Var1, "_2", 64);
				if (__LIB_17__::func_731(&Local_233, cLocal_168, sParam0, &Var1, 9, 0, 0))
				{
					return 1;
				}
			}
			else
			{
				SYSTEM::SETTIMERA(0);
				return 1;
			}
		}
		else
		{
			SYSTEM::SETTIMERA(0);
			return 1;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_51) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_51, true)) < 400f)
	{
		if (__LIB_17__::func_243(&Local_233, cLocal_168, sParam0, 9, 0, 0, 0))
		{
			return 1;
		}
	}
	else
	{
		SYSTEM::SETTIMERA(0);
		return 1;
	}
	return 0;
}

void func_93()//Position - 0x4A93
{
	if (iLocal_48 != 8)
	{
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_429();
		__LIB_0__::func_325();
		if (HUD::DOES_BLIP_EXIST(iLocal_54))
		{
			HUD::REMOVE_BLIP(&iLocal_54);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::SET_BLIP_ALPHA(iLocal_56, 0);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::SET_BLIP_ALPHA(iLocal_57, 0);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_58))
		{
			HUD::SET_BLIP_ALPHA(iLocal_58, 0);
		}
		HUD::CLEAR_GPS_MULTI_ROUTE();
		HUD::CLEAR_GPS_CUSTOM_ROUTE();
		iLocal_49 = iLocal_48;
		iLocal_48 = 8;
		iLocal_272 = 0;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_55))
			{
				HUD::REMOVE_BLIP(&iLocal_55);
			}
			if (!iLocal_272)
			{
				if ((!PED::IS_PED_INJURED(uLocal_186[2]) && PED::IS_PED_SITTING_IN_VEHICLE(uLocal_186[2], iLocal_63)) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_WANTED", 8, 0, 0, 0))
					{
						iLocal_272 = 1;
					}
				}
			}
			__LIB_39__::func_125(&Local_244);
		}
		else if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (iLocal_49 == 1)
	{
		if (func_94(uLocal_186[2], &Local_246))
		{
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_429();
			func_98("CBH_AB2TREV");
		}
	}
	else if (iLocal_49 != 7)
	{
		if (func_94(uLocal_186[2], &Local_247))
		{
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_429();
			func_98("CBH_AB2BOTH");
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		iLocal_272 = 0;
		if (HUD::DOES_BLIP_EXIST(iLocal_54))
		{
			HUD::SET_BLIP_ROUTE(iLocal_54, true);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_56))
		{
			HUD::SET_BLIP_ALPHA(iLocal_56, 255);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_57))
		{
			HUD::SET_BLIP_ALPHA(iLocal_57, 255);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_58))
		{
			HUD::SET_BLIP_ALPHA(iLocal_58, 255);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
		iLocal_48 = iLocal_49;
		Local_244.f_1 = 0;
	}
	else if (Local_250.f_9)
	{
		func_98("CBH_COPFAIL");
	}
}

int func_94(int iParam0, var uParam1)//Position - 0x4C56
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) > 22500f)
			{
				return 1;
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) > 10000f && (MISC::GET_GAME_TIMER() - iLocal_265) > 20000)
			{
				iLocal_265 = MISC::GET_GAME_TIMER();
				uParam1->f_1 = 0;
				__LIB_39__::func_125(uParam1);
			}
		}
	}
	return 0;
}

void func_98(char* sParam0)//Position - 0x4D2A
{
	func_178(sParam0);
	func_177();
	__LIB_0__::func_325();
	__LIB_0__::func_429();
	AUDIO::TRIGGER_MUSIC_EVENT("RH1_FAIL");
	while (!__LIB_0__::func_223())
	{
		func_27();
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (uLocal_186.f_7 == 2)
			{
				func_99(&uLocal_186, 1, 1, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (uLocal_186.f_7 == 2)
		{
			func_99(&uLocal_186, 1, 1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		PED::DELETE_PED(&iLocal_51);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[0]))
	{
		PED::DELETE_PED(&(uLocal_186[0]));
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
	{
		PED::DELETE_PED(&(uLocal_186[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_231))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_231);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, -112.944084f, 6461.442f, 27.968454f, -98.550766f, 6476.093f, 35.108562f, 25f, false, true, 0))
	{
		if (__LIB_15__::func_944() == 0 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_63, -116.9822f, 6453.094f, 30.9129f, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_63, -0.004f, 0.0094f, 0.3691f, 0.9293f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 5f);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_63);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_231) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_231, -112.944084f, 6461.442f, 27.968454f, -98.550766f, 6476.093f, 35.108562f, 25f, false, true, 0))
	{
		if (__LIB_15__::func_944() == 2 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_231, -115.937f, 6455.014f, 30.9471f, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_231, 0.0006f, -0.1305f, -0.0066f, 0.9914f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_231, 5f);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_231);
		}
	}
	if (func_29() || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -137.3856f, 6475.481f, 32.4512f, 5f, 5f, 5f, false, true, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -117.3143f, 6461.553f, 30.4684f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 195.5377f);
	}
	__LIB_0__::func_681(37, 0);
	__LIB_0__::func_681(38, 0);
	CUTSCENE::REMOVE_CUTSCENE();
	func_891();
}

int func_99(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4F95
{
	int iVar0;
	bool bVar1;
	bool bVar2;
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
		bVar1 = __LIB_15__::func_944();
		if (!uParam0->f_23)
		{
			__LIB_42__::func_592(iVar0, 0);
		}
		__LIB_0__::func_637(bVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		bVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_42__::func_592((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()))
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
		if (__LIB_0__::func_374(__LIB_15__::func_944()))
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
		uParam0->f_5 = __LIB_0__::func_482(bVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_482(bVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_13__::func_756(iVar7);
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
				__LIB_13__::func_756(iVar0);
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
		__LIB_15__::func_943();
		__LIB_0__::func_480(bVar2);
		__LIB_17__::func_653();
		__LIB_13__::func_775(bVar2);
		__LIB_32__::func_13(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
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
		__LIB_13__::func_774(bVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
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
			__LIB_17__::func_235();
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

void func_177()//Position - 0xCDFA
{
	int iVar0;
	if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147)) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_148))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_52)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_52[iVar0]);
			}
			iVar0++;
		}
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
		{
			if (!PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][0]))
			{
				TASK::CLEAR_PED_TASKS(Local_249[iLocal_154 /*9*/][0]);
			}
			if (!PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][1]))
			{
				TASK::CLEAR_PED_TASKS(Local_249[iLocal_154 /*9*/][1]);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iLocal_154 /*9*/].f_3, false))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_249[iLocal_154 /*9*/].f_3, -8f, true);
				}
			}
		}
	}
}

void func_178(char* sParam0)//Position - 0xCECB
{
	__LIB_0__::func_381(sParam0);
	func_179(0);
}

void func_179(int iParam0)//Position - 0xCEDE
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_180(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_180(int iParam0)//Position - 0xCF23
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_40();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_181(&(Global_113386.f_2363.f_539), iVar1);
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

void func_181(var uParam0, int iParam1)//Position - 0xD033
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
			if (!func_183(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_183(int iParam0, var uParam1, float fParam2)//Position - 0xD207
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
			return func_183(8, uParam1, fParam2);
			break;
		case 10:
			return func_183(8, uParam1, fParam2);
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

void func_190()//Position - 0xDD52
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	int iVar10;
	struct<2> Var11;
	struct<3> Var12;
	float fVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	__LIB_0__::func_496();
	switch (iLocal_150)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && !PED::IS_PED_INJURED(uLocal_186[2]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, true) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_231, true);
					iLocal_144 = 1;
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_TRUCK_LOGS", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", false);
					TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
					PED::SET_PED_HELMET(uLocal_186[2], false);
					VEHICLE::SET_VEHICLE_ALARM(iLocal_231, false);
					iLocal_930 = 0;
					iVar0 = 0;
					while (iVar0 < iLocal_920)
					{
						iLocal_920[iVar0] = 0;
						iLocal_921[iVar0] = 0;
						iVar0++;
					}
					bLocal_922 = false;
					bLocal_931 = true;
					bLocal_932 = false;
					bLocal_933 = false;
					iLocal_143 = 0;
					iLocal_991 = 0;
					iLocal_992 = 0;
					iLocal_993 = 0;
					iLocal_994 = 0;
					iLocal_995 = 0;
					iLocal_996 = 0;
					iLocal_260 = 0;
					iLocal_1006 = 0;
					iLocal_1002 = 0;
					iLocal_1003 = 0;
					Local_125[0 /*3*/] = { 262.31213f, 4447.511f, 53.83961f };
					Local_125[1 /*3*/] = { -210.83116f, 4482.656f, 60.27203f };
					Local_125[2 /*3*/] = { -1119.8573f, 5254.628f, 74.45103f };
					Local_125[3 /*3*/] = { -912.04346f, 5407.7266f, 36.07696f };
					Local_125[4 /*3*/] = { -791.72174f, 5470.604f, 33.07196f };
					Local_125[5 /*3*/] = { -625.39935f, 5531.6494f, 44.20467f };
					iLocal_990 = (iLocal_942 - 1);
					iLocal_989 = (iLocal_963 - 1);
					func_340(-415.5206f, 6124.9604f, 30.3722f, &iLocal_963);
					func_340(-653.8552f, 5356.8843f, 57.9293f, &iLocal_963);
					func_340(-943.5536f, 5257.132f, 81.4484f, &iLocal_963);
					func_340(-483.123f, 4917.299f, 145.827f, &iLocal_963);
					func_340(Local_926, &iLocal_963);
					func_340(-415.5206f, 6124.9604f, 30.3722f, &iLocal_942);
					func_340(-653.8552f, 5356.8843f, 57.9293f, &iLocal_942);
					func_340(-483.123f, 4917.299f, 145.827f, &iLocal_942);
					func_340(Local_926, &iLocal_942);
					iLocal_927 = 2;
					iLocal_928 = iLocal_63;
					iLocal_929 = iLocal_231;
					VEHICLE::REQUEST_VEHICLE_RECORDING(10, "RBsetup");
					VEHICLE::REQUEST_VEHICLE_RECORDING(11, "RBsetup");
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_169);
					VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_169);
					VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_169);
					VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_169);
					__LIB_15__::func_888(&uLocal_186, 1, 1);
					__LIB_15__::func_888(&uLocal_186, 0, 1);
					__LIB_15__::func_888(&uLocal_186, 2, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, true, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, true, false);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 4);
					CUTSCENE::REMOVE_CUTSCENE();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 3);
					iLocal_150++;
				}
			}
			break;
		case 1:
			if ((!PED::IS_PED_INJURED(uLocal_186[iLocal_927]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
			{
				if ((!iLocal_930 && PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_63, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_RACE", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						__LIB_39__::func_119(500);
						iLocal_930 = 1;
					}
				}
				else
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_LEAVE_VEHICLE")) != 1)
						{
							TASK::TASK_LEAVE_VEHICLE(uLocal_186[2], iLocal_63, 512);
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					if (((SYSTEM::TIMERA() > 1500 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[iLocal_927], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && !PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_231, false)) && !PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_63, true))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_231, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_186[iLocal_927], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
						iLocal_150++;
					}
				}
			}
			break;
		case 2:
			if ((!PED::IS_PED_INJURED(uLocal_186[iLocal_927]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_63, false))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
					}
					else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
				}
				else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				if (!PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_63, false))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
					}
					AUDIO::START_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
					iLocal_54 = __LIB_0__::func_488(Local_926, 0);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(162.84285f, 4416.5645f, 46.241264f, 102.730545f, 4437.8154f, 82.75628f, 12.75f, true, false, true);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(84.0697f, 4480.6733f, 12.78804f, -201.99539f, 4211.447f, 99.18795f, 131.75f, true, false, true);
					SYSTEM::SETTIMERA(0);
					iLocal_150++;
				}
			}
			break;
		case 3:
			if (!iLocal_992)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && iLocal_927 == 2) && !PED::IS_PED_INJURED(uLocal_186[iLocal_927]))
				{
					if (iLocal_144)
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, true))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_231, false);
							iLocal_144 = 0;
						}
					}
					if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[iLocal_927], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_231, false)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_231))
					{
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_186[iLocal_927], 1);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -91.8094f, 6431.1475f, 30.3459f, 15f, 0, joaat("ruffian"), 262275, 3f, 20f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						iLocal_992 = 1;
					}
					if ((!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF") && !PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_231, false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_186[iLocal_927], true), ENTITY::GET_ENTITY_COORDS(iLocal_231, true)) < 4f)
					{
						AUDIO::START_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_231, "PS_1_TREVOR_BIKE", 0f);
					}
				}
			}
			else
			{
				if (!iLocal_993)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_186[2], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_231, false))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_186[2], -90.507866f, 6423.877f, 30.389437f, -103.067696f, 6409.822f, 35.4915f, 41.5f, false, true, 0))
						{
							TASK::CLEAR_PED_TASKS(uLocal_186[2]);
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 262275, 5f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(iVar3);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iVar3);
							TASK::CLEAR_SEQUENCE_TASK(&iVar3);
							iLocal_993 = 1;
						}
					}
				}
				if (!iLocal_994)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_186[2], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_231, false))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_231) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_231, Local_98, 40f, 40f, 40f, false, true, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_186[2]);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_231, 11, "RBsetup", 10f, 786469);
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_186[iLocal_927], 1);
								iLocal_994 = 1;
							}
						}
					}
				}
			}
			if (bLocal_931)
			{
				__LIB_16__::func_15(&uLocal_186, 2, 1);
				__LIB_0__::func_190("CBH_SWITCH");
				if (func_315(&uLocal_186, 0, 1))
				{
					__LIB_39__::func_126(&Local_82, 0, 0);
					uLocal_186.f_7 = 2;
					Local_171.f_12 = uLocal_186[2];
					HUD::CLEAR_HELP(true);
					bLocal_932 = true;
				}
			}
			if (bLocal_932)
			{
				if (__LIB_17__::func_736(&Local_171, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if ((Local_171.f_18 && !Local_171.f_19) && uLocal_186.f_7 == 2)
					{
						func_99(&uLocal_186, 1, 1, 0);
						AUDIO::SET_VEH_RADIO_STATION(iLocal_231, AUDIO::GET_RADIO_STATION_NAME(6));
						AUDIO::SET_INITIAL_PLAYER_STATION(AUDIO::GET_RADIO_STATION_NAME(6));
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 12f, 4);
					}
				}
				else
				{
					AUDIO::SET_NO_DUCKING_FOR_CONVERSATION(true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_231, false);
					iLocal_144 = 0;
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF"))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_231, 0f);
						AUDIO::STOP_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_MICHAEL"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
					}
					AUDIO::START_AUDIO_SCENE("PS_1_RACE_AS_TREVOR");
					if (!PED::IS_PED_INJURED(uLocal_186[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_186[0], iLocal_63, false))
						{
							TASK::TASK_ENTER_VEHICLE(uLocal_186[0], iLocal_63, -1, -1, 2f, 1, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_63, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_51, iLocal_63, 0);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_231, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_231, true) || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_231))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
					}
					__LIB_0__::func_497(714, 1, 0);
					Local_171.f_19 = 1;
					Local_171.f_12 = 0;
					bLocal_931 = false;
					iLocal_927 = 0;
					iLocal_928 = iLocal_231;
					iLocal_929 = iLocal_63;
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::REMOVE_BLIP(&iLocal_59);
				}
			}
			else
			{
				if (SYSTEM::TIMERA() > 20000 || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true)) > 10000f)
				{
					bLocal_931 = false;
				}
				if (!iLocal_995)
				{
					if (((SYSTEM::TIMERA() > 10000 && ENTITY::DOES_ENTITY_EXIST(uLocal_186[2])) && PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true)) < SYSTEM::POW(30f, 2f))
					{
						if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_TRE1", 8, 0, 0, 0))
						{
							iLocal_995 = 1;
						}
					}
				}
			}
			if ((((!bLocal_931 && !bLocal_933) && !PED::IS_PED_INJURED(uLocal_186[iLocal_927])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_929, false)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_929, true, true, false, true, false, false, false, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_186[iLocal_927], true, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uLocal_186[iLocal_927], true);
				func_260(&uLocal_312, 10, "RBsetup");
				func_260(&uLocal_613, 11, "RBsetup");
				if (__LIB_15__::func_944() == 2)
				{
					AUDIO::RESET_VEHICLE_STARTUP_REV_SOUND(iLocal_231);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_63, true);
					func_259(&iLocal_942, 11, "RBsetup", &uLocal_613);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_63, false);
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
					{
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_231, false);
					}
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_231, true);
					func_259(&iLocal_963, 10, "RBsetup", &uLocal_312);
				}
				AUDIO::SET_HORN_ENABLED(iLocal_929, false);
				bLocal_933 = true;
			}
			if (!PED::IS_PED_INJURED(uLocal_186[iLocal_927]))
			{
				if (bLocal_933)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (__LIB_15__::func_944() == 2)
					{
						iLocal_992 = 0;
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
						AUDIO::RESET_VEHICLE_STARTUP_REV_SOUND(iLocal_231);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_231, 1);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
						{
							VEHICLE::SET_VEHICLE_STRONG(iLocal_63, true);
							ENTITY::SET_ENTITY_PROOFS(iLocal_63, false, true, true, false, false, false, false, false);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, false);
						}
						iLocal_150 = 5;
					}
					else
					{
						iLocal_150 = 4;
					}
					AUDIO::TRIGGER_MUSIC_EVENT("RH1_RACE");
					PED::SET_PED_CAN_SWITCH_WEAPON(uLocal_186[iLocal_927], false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_186[iLocal_927], true);
					HUD::CLEAR_HELP(true);
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		case 4:
			func_25();
			if ((!PED::IS_PED_INJURED(uLocal_186[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
			{
				if (iLocal_144)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, true))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_231, false);
						iLocal_144 = 0;
					}
				}
				if (!iLocal_992)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && iLocal_927 == 2) && !PED::IS_PED_INJURED(uLocal_186[iLocal_927]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[iLocal_927], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_231, false))
						{
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_186[iLocal_927], 1);
							TASK::OPEN_SEQUENCE_TASK(&iVar4);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -91.8094f, 6431.1475f, 30.3459f, 15f, 0, joaat("ruffian"), 786603, 3f, 20f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -127.9359f, 6405.864f, 30.4238f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(iVar4);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iVar4);
							TASK::CLEAR_SEQUENCE_TASK(&iVar4);
							iLocal_992 = 1;
						}
						if ((!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_TREVOR_DRIVES_OFF") && !PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_231, false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_186[iLocal_927], true), ENTITY::GET_ENTITY_COORDS(iLocal_231, true)) < 4f)
						{
							AUDIO::START_AUDIO_SCENE("PS_1_TREVOR_DRIVES_OFF");
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_231, "PS_1_TREVOR_BIKE", 0f);
						}
					}
				}
				else if (!iLocal_993)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, false))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_186[2], -90.507866f, 6423.877f, 30.389437f, -103.067696f, 6409.822f, 35.4915f, 41.5f, false, true, 0))
						{
							TASK::CLEAR_PED_TASKS(uLocal_186[2]);
							TASK::OPEN_SEQUENCE_TASK(&iVar5);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -120.4565f, 6413.602f, 30.3924f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_231, -390.4958f, 6148.439f, 30.6151f, 15f, 0, joaat("ruffian"), 786469, 10f, 50f);
							TASK::CLOSE_SEQUENCE_TASK(iVar5);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iVar5);
							TASK::CLEAR_SEQUENCE_TASK(&iVar5);
							iLocal_993 = 1;
						}
					}
				}
				if ((((!iLocal_991 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)) && !__LIB_0__::func_75()) && SYSTEM::TIMERA() > 1000)
				{
					HUD::CLEAR_PRINTS();
					sLocal_170 = "RBS1_BANT1";
					__LIB_0__::func_229("CBH_RACEM", 7500, 1);
					SYSTEM::SETTIMERA(0);
					iLocal_991 = 1;
				}
				if (iLocal_991 && SYSTEM::TIMERA() > 7500)
				{
					func_254();
				}
				if (!iLocal_994)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_231) && (!ENTITY::IS_ENTITY_AT_COORD(iLocal_231, Local_98, 40f, 40f, 40f, false, true, 0) || TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1))
						{
							TASK::CLEAR_PED_TASKS(uLocal_186[2]);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_231, 11, "RBsetup", 10f, 786469);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_186[iLocal_927], 1);
							iLocal_994 = 1;
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						iLocal_54 = __LIB_0__::func_488(Local_926, 0);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						HUD::REMOVE_BLIP(&iLocal_55);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						HUD::REMOVE_BLIP(&iLocal_54);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
					}
				}
				if (!bLocal_922)
				{
					func_249(uLocal_186[2], iLocal_231, 11, "RBsetup", &uLocal_613, 0, 0f);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_186[2], Local_923, Local_924, fLocal_925, false, true, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_231, true, false);
						}
						bLocal_922 = true;
					}
					fVar6 = func_247(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 11, "RBsetup", &uLocal_613);
					if (fVar6 > fLocal_914)
					{
						if (__LIB_0__::func_425(38))
						{
							__LIB_0__::func_681(38, 0);
						}
						if (!__LIB_0__::func_425(37))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) < SYSTEM::POW(100f, 2f))
							{
								__LIB_0__::func_681(37, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) > SYSTEM::POW(120f, 2f))
						{
							__LIB_0__::func_681(37, 0);
						}
					}
					else
					{
						if (__LIB_0__::func_425(37))
						{
							__LIB_0__::func_681(37, 0);
						}
						if (!__LIB_0__::func_425(38))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) < SYSTEM::POW(100f, 2f))
							{
								__LIB_0__::func_681(38, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) > SYSTEM::POW(120f, 2f))
						{
							__LIB_0__::func_681(38, 0);
						}
					}
				}
				else
				{
					if (__LIB_0__::func_425(37))
					{
						__LIB_0__::func_681(37, 0);
					}
					if (!__LIB_0__::func_425(38))
					{
						__LIB_0__::func_681(38, 1);
					}
					func_246();
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_923, Local_924, fLocal_925, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_51) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_51, true)) < 10000f)
					{
						__LIB_0__::func_638();
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_231) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_231))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_231, 786469);
						}
						iLocal_150 = 6;
					}
				}
				if (func_94(iLocal_51, &Local_248))
				{
					func_98("CBH_LLEFT");
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_INJURED(uLocal_186[0]))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_54))
				{
					fLocal_915 = func_247(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 11, "RBsetup", &uLocal_613);
					func_245(&iLocal_942, &iLocal_990, fLocal_915);
				}
				fVar7 = func_247(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10, "RBsetup", &uLocal_312);
				if (!iLocal_995)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_186[0], iLocal_63, false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[0], true)) < SYSTEM::POW(30f, 2f))
						{
							if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_ASSHLEM", 8, 0, 0, 0))
							{
								iLocal_995 = 1;
							}
						}
						else
						{
							iLocal_995 = 1;
						}
					}
				}
				if (((!iLocal_991 && iLocal_995) && !__LIB_0__::func_75()) && SYSTEM::TIMERA() > 1000)
				{
					HUD::CLEAR_PRINTS();
					sLocal_170 = "RBS1_BANT2";
					__LIB_0__::func_221(&Local_233, 0);
					__LIB_0__::func_222(&Local_233, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					__LIB_0__::func_229("CBH_RACET", 7500, 1);
					iLocal_991 = 1;
					SYSTEM::SETTIMERA(0);
				}
				if (iLocal_991 && SYSTEM::TIMERA() > 7500)
				{
					func_254();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_63, false);
					if (PED::IS_PED_IN_VEHICLE(uLocal_186[0], iLocal_63, false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_63, Local_98, 40f, 40f, 40f, false, true, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_186[0]);
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_63, 10, "RBsetup", 10f, 786469);
							}
							else if (!iLocal_992)
							{
								if ((!PED::IS_PED_INJURED(uLocal_186[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false)) && PED::IS_PED_IN_VEHICLE(uLocal_186[0], iLocal_63, false))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, -85.30544f, 6422.3833f, 30.48431f, -102.25669f, 6405.2075f, 34.740208f, 7.5f, false, true, 0))
									{
										Var8 = { Vector(30.48431f, 6422.3833f, -85.30544f) - Vector(34.740208f, 6405.2075f, -102.25669f) };
										Var8.f_2 = 0f;
										Var9 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_63) };
										if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var8.f_0, Var8.f_1, Var9.f_0, Var9.f_1)) < 90f)
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, -83.4558f, 6424.9326f, 30.4905f, 10f, 0, joaat("premier"), 262144, 2f, 20f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, -88.8696f, 6432.0767f, 30.4084f, 10f, 0, joaat("premier"), 786469, 10f, 100f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, -132.3165f, 6403.1646f, 30.4015f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_186[0], iLocal_75);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
										}
										else
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_186[0], iLocal_63, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
										}
									}
									else
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_186[0], iLocal_63, -412.9446f, 6128.729f, 30.2517f, 15f, 0, joaat("premier"), 786469, 10f, 20f);
									}
									iLocal_992 = 1;
									PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uLocal_186[0], false);
								}
							}
						}
					}
				}
				if (!bLocal_922)
				{
					func_249(uLocal_186[0], iLocal_63, 10, "RBsetup", &uLocal_312, 1, fVar7);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_186[0], Local_923, Local_924, fLocal_925, false, true, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_63, true, false);
						}
						bLocal_922 = true;
					}
					if (fVar7 > fLocal_914)
					{
						if (__LIB_0__::func_425(37))
						{
							__LIB_0__::func_681(37, 0);
						}
						if (!__LIB_0__::func_425(38))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) < SYSTEM::POW(100f, 2f))
							{
								__LIB_0__::func_681(38, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) > SYSTEM::POW(120f, 2f))
						{
							__LIB_0__::func_681(38, 0);
						}
					}
					else
					{
						if (__LIB_0__::func_425(38))
						{
							__LIB_0__::func_681(38, 0);
						}
						if (!__LIB_0__::func_425(37))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) < SYSTEM::POW(100f, 2f))
							{
								__LIB_0__::func_681(37, 1);
							}
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_926) > SYSTEM::POW(120f, 2f))
						{
							__LIB_0__::func_681(37, 0);
						}
					}
				}
				else
				{
					if (__LIB_0__::func_425(38))
					{
						__LIB_0__::func_681(38, 0);
					}
					if (!__LIB_0__::func_425(37))
					{
						__LIB_0__::func_681(37, 1);
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_923, Local_924, fLocal_925, false, true, 0))
				{
					__LIB_0__::func_638();
					SYSTEM::SETTIMERA(0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_63))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uLocal_186[0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 1000f)
						{
							TASK::CLEAR_PED_TASKS(uLocal_186[0]);
							TASK::OPEN_SEQUENCE_TASK(&iVar10);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_63, 1412.2968f, 3599.6382f, 33.8914f, 20f, 0, joaat("premier"), 786469, 3f, 3f);
							TASK::TASK_PAUSE(0, 10000);
							TASK::CLOSE_SEQUENCE_TASK(iVar10);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_186[0], iVar10);
							TASK::CLEAR_SEQUENCE_TASK(&iVar10);
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_63, 786469);
							PED::SET_PED_KEEP_TASK(uLocal_186[0], true);
						}
						else
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_63, 786469);
						}
						PED::SET_PED_KEEP_TASK(uLocal_186[0], true);
					}
					PED::SET_PED_KEEP_TASK(uLocal_186[0], true);
					iLocal_150++;
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						HUD::REMOVE_BLIP(&iLocal_55);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						iLocal_55 = __LIB_0__::func_639(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && (!VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::GET_PLAYERS_LAST_VEHICLE()))))
				{
					HUD::REMOVE_BLIP(&iLocal_55);
				}
			}
			break;
		case 6:
			if (HUD::DOES_BLIP_EXIST(iLocal_59))
			{
				HUD::REMOVE_BLIP(&iLocal_59);
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_929) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_929, false))
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_929, 1f);
				ENTITY::SET_ENTITY_COLLISION(iLocal_929, true, false);
			}
			if (!bLocal_922)
			{
				if (__LIB_15__::func_944() == 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_929, Local_926, 10f, 10f, 10f, false, true, 0))
					{
						func_246();
					}
				}
			}
			if (!bLocal_1004)
			{
				if (!bLocal_922)
				{
					__LIB_0__::func_630(715);
					StringCopy(&Var11, "RBS1_LES4", 16);
				}
				else
				{
					StringCopy(&Var11, "RBS1_LES5", 16);
				}
				if (__LIB_15__::func_944() == 0)
				{
					if (__LIB_17__::func_243(&Local_233, cLocal_168, &Var11, 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 4);
						bLocal_1004 = true;
					}
				}
				else if (!bLocal_922)
				{
					SYSTEM::SETTIMERA(0);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 4);
					bLocal_1004 = true;
				}
				else if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_TRE5", 8, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 4);
					bLocal_1004 = true;
				}
			}
			if (!bLocal_1005)
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_926, Global_19, true, true, 0))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_54))
							{
								HUD::REMOVE_BLIP(&iLocal_54);
							}
							while (!__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
							{
								SYSTEM::WAIT(0);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							bLocal_1005 = true;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_923, Local_924, fLocal_925, false, true, 0))
				{
					bLocal_1005 = true;
				}
			}
			if (bLocal_1005)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					HUD::REMOVE_BLIP(&iLocal_55);
				}
				if (bLocal_1004)
				{
					if (__LIB_15__::func_944() == 0)
					{
						if (iLocal_998 > 0)
						{
							if (!PED::IS_PED_INJURED(uLocal_186[2]))
							{
								TASK::CLEAR_PED_TASKS(uLocal_186[2]);
								Var12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true) };
								fVar13 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, Var12.f_0, Var12.f_1);
								TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], PLAYER::PLAYER_PED_ID(), 1000, 2052, 4);
								TASK::OPEN_SEQUENCE_TASK(&iVar14);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true), 1f, -1, 0.25f, 512, fVar13);
								TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_arrival_1", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iVar14);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iVar14);
								TASK::CLEAR_SEQUENCE_TASK(&iVar14);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_150++;
					}
					else if (SYSTEM::TIMERA() > 3000)
					{
						iLocal_150++;
					}
				}
			}
			break;
		case 7:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_MICHAEL"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_MICHAEL");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_RACE_AS_TREVOR"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_RACE_AS_TREVOR");
			}
			if (__LIB_15__::func_944() == 0)
			{
				if (!iLocal_1006 && !PED::IS_PED_INJURED(uLocal_186[2]))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_186[2], "missheistpaletoscoresetup", "trevor_arrival_1", 3))
					{
						__LIB_0__::func_640(uLocal_186[2], "GENERIC_SHOCKED_MED", 10);
						iLocal_1006 = 1;
					}
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
			if (__LIB_15__::func_944() != 0 || SYSTEM::TIMERA() > 3500)
			{
				if (!__LIB_0__::func_75())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
					func_198();
				}
			}
			break;
	}
	if (iLocal_150 > 2)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_54))
		{
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_926, 1f, 1f, Global_19.f_2, true, true, 0);
			if (__LIB_15__::func_944() == 2)
			{
				fLocal_915 = func_247(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 11, "RBsetup", &uLocal_613);
				func_245(&iLocal_942, &iLocal_990, fLocal_915);
			}
			else
			{
				fLocal_915 = func_247(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10, "RBsetup", &uLocal_312);
				func_245(&iLocal_963, &iLocal_989, fLocal_915);
			}
		}
		else if (__LIB_15__::func_944() == 2)
		{
			func_197(&iLocal_990);
		}
		else
		{
			func_197(&iLocal_989);
		}
	}
	if (__LIB_0__::func_425(37))
	{
		GRAPHICS::DRAW_DEBUG_TEXT_2D("MIKE WIN CUTSCENE SET TO LOAD", 0f, 0.02f, 0f, 255, 0, 0, 255);
	}
	if (__LIB_0__::func_425(38))
	{
		GRAPHICS::DRAW_DEBUG_TEXT_2D("TREVOR WIN CUTSCENE SET TO LOAD", 0f, 0.04f, 0f, 255, 0, 0, 255);
	}
	if (((((ENTITY::DOES_ENTITY_EXIST(uLocal_186[iLocal_927]) && !PED::IS_PED_INJURED(uLocal_186[iLocal_927])) && PED::IS_PED_IN_ANY_VEHICLE(uLocal_186[iLocal_927], false)) && __LIB_16__::func_19(PLAYER::PLAYER_PED_ID(), uLocal_186[iLocal_927])) || HUD::DOES_BLIP_EXIST(iLocal_55)) || iLocal_150 > 6)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_59))
		{
			HUD::REMOVE_BLIP(&iLocal_59);
		}
	}
	else
	{
		func_196(uLocal_186[iLocal_927], iLocal_929);
	}
	if (__LIB_15__::func_944() == 2)
	{
		if (func_195(iLocal_231, (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) < 0.9f)))
		{
			func_98("CBH_BNKFAILT");
		}
	}
	else if (func_195(iLocal_63, (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) < 0.9f)))
	{
		func_98("CBH_BNKFAIL");
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.7f)
		{
			if (!Local_249[0 /*9*/].f_6)
			{
				func_194(0);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.3f)
		{
			if (!Local_249[2 /*9*/].f_6)
			{
				func_194(2);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.37f)
		{
			if (Local_250.f_9)
			{
				Local_250.f_9 = 0;
				Local_250.f_13 = 0;
				AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", true);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.45f)
		{
			if (!Local_249[3 /*9*/].f_6)
			{
				func_194(3);
			}
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.8f)
		{
			if (!iLocal_260)
			{
				func_193();
			}
			if (!Local_249[3 /*9*/].f_6)
			{
				func_194(3);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, true, false);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, true, false);
			}
			if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, true, false);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, true, false);
			}
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(178228075, true);
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1852297978, true);
		}
		if (!iLocal_1003)
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.828f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
			{
				TASK::TASK_ENTER_VEHICLE(Local_249[iLocal_154 /*9*/][1], Local_249[iLocal_154 /*9*/].f_3, -1, 0, 1f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(Local_249[iLocal_154 /*9*/][1], joaat("MotionState_Walk"), false, 0, false);
				iLocal_1003 = 1;
			}
		}
		if (!iLocal_1002)
		{
			if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.828f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
			{
				TASK::TASK_ENTER_VEHICLE(Local_249[iLocal_154 /*9*/][0], Local_249[iLocal_154 /*9*/].f_3, -1, -1, 1f, 1, 0);
				PED::FORCE_PED_MOTION_STATE(Local_249[iLocal_154 /*9*/][1], joaat("MotionState_Walk"), false, 0, false);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_249[iLocal_154 /*9*/].f_3, -8f, true);
				}
				iLocal_1002 = 1;
			}
		}
	}
	else if (!Local_249[iLocal_154 /*9*/].f_6)
	{
		if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iLocal_154 /*9*/].f_3, false) && !PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][0])) && !PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][1])) && PED::IS_PED_SITTING_IN_VEHICLE(Local_249[iLocal_154 /*9*/][0], Local_249[iLocal_154 /*9*/].f_3)) && PED::IS_PED_SITTING_IN_VEHICLE(Local_249[iLocal_154 /*9*/][1], Local_249[iLocal_154 /*9*/].f_3))
		{
			func_194(1);
		}
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup3");
	}
	iVar15 = 0;
	while (iVar15 < Local_249.f_0)
	{
		if (((((ENTITY::DOES_ENTITY_EXIST(Local_249[iVar15 /*9*/].f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar15 /*9*/].f_3, false)) && !PED::IS_PED_INJURED(Local_249[iVar15 /*9*/][0])) && Local_249[iVar15 /*9*/].f_6) && PED::IS_PED_IN_VEHICLE(Local_249[iVar15 /*9*/][0], Local_249[iVar15 /*9*/].f_3, false)) && PED::IS_PED_IN_VEHICLE(Local_249[iVar15 /*9*/][1], Local_249[iVar15 /*9*/].f_3, false))
		{
			if ((TASK::GET_SCRIPT_TASK_STATUS(Local_249[iVar15 /*9*/][0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_249[iVar15 /*9*/][0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_249[iVar15 /*9*/][0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) != 2)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_249[iVar15 /*9*/].f_3, true), 119.2184f, 6559.7744f, 30.6237f) < SYSTEM::POW(250f, 2f))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_249[iVar15 /*9*/][0], Local_249[iVar15 /*9*/].f_3, 10f, 786491);
				}
			}
			if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_249[iVar15 /*9*/].f_3, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(100f, 2f) && ENTITY::IS_ENTITY_OCCLUDED(Local_249[iVar15 /*9*/].f_3)) && ENTITY::IS_ENTITY_OCCLUDED(Local_249[iVar15 /*9*/][0])) && ENTITY::IS_ENTITY_OCCLUDED(Local_249[iVar15 /*9*/][1]))
			{
				func_192(&(Local_249[iVar15 /*9*/]));
			}
		}
		iVar15++;
	}
	func_191();
	iVar16 = 0;
	while (iVar16 < iLocal_52)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar16]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_52[iVar16], -100.0933f, 6461.7124f, 30.6267f, 3f, 3f, 3f, false, true, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_52[iVar16]))
			{
				PED::DELETE_PED(&(iLocal_52[iVar16]));
			}
		}
		iVar16++;
	}
	if (!iLocal_996 && iLocal_150 > 3)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_113, 100f, 100f, 100f, false, true, 0))
		{
			iVar16 = 0;
			while (iVar16 < iLocal_52)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar16]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_52[iVar16]));
				}
				iVar16++;
			}
			iVar16 = 0;
			while (iVar16 < Local_249.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_249[iVar16 /*9*/][0]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_249[iVar16 /*9*/][0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_249[iVar16 /*9*/][1]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_249[iVar16 /*9*/][1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_249[iVar16 /*9*/].f_3))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_249[iVar16 /*9*/].f_3));
				}
				iVar16++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_230);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Business_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Business_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_GenStreet_02"));
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
			STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup3");
			iLocal_996 = 1;
		}
	}
}

void func_191()//Position - 0x1015C
{
	if (__LIB_15__::func_944() == 0)
	{
		if ((PED::IS_PED_INJURED(uLocal_186[2]) || ENTITY::IS_ENTITY_DEAD(uLocal_186[2], false)) || FIRE::IS_ENTITY_ON_FIRE(uLocal_186[2]))
		{
			func_98("CMN_TDIED" /* GXT: ~s~Trevor died. */);
		}
		if ((PED::IS_PED_INJURED(iLocal_51) || ENTITY::IS_ENTITY_DEAD(iLocal_51, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_51))
		{
			func_98("CBH_LESTDED");
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) || ENTITY::IS_ENTITY_DEAD(iLocal_63, false))
		{
			func_98("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_98("CBH_COPFAIL");
		}
	}
	if (__LIB_15__::func_944() == 2)
	{
		if ((PED::IS_PED_INJURED(uLocal_186[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_186[0], false)) || FIRE::IS_ENTITY_ON_FIRE(uLocal_186[0]))
		{
			func_98("CMN_MDIED" /* GXT: ~s~Michael died. */);
		}
		if ((PED::IS_PED_INJURED(iLocal_51) || ENTITY::IS_ENTITY_DEAD(iLocal_51, false)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_51))
		{
			func_98("CBH_LESTDED");
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_98("CBH_COPFAILT");
		}
	}
}

void func_192(var uParam0)//Position - 0x10276
{
	int iVar0;
	if (uParam0->f_5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
			{
				PED::DELETE_PED(uParam0[iVar0]);
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
		{
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_3));
		}
		uParam0->f_5 = 0;
	}
}

void func_193()//Position - 0x102CB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]) && !PED::IS_PED_INJURED(iLocal_52[iVar0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_52[iVar0], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_52[iVar0]);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_52[iVar0], -100.5008f, 6461.73f, 30.6343f, 1f, -1, 0.25f, 0, 40000f);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_52[iVar0], -100.5008f, 6461.73f, 30.6343f, 2f, 2f, 3f, false, true, 0))
			{
				PED::DELETE_PED(&(iLocal_52[iVar0]));
			}
		}
		iVar0++;
	}
	iLocal_260 = 1;
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, true, false);
	}
	if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, true, false);
	}
}

void func_194(int iParam0)//Position - 0x103BF
{
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iParam0 /*9*/].f_3, false) && !PED::IS_PED_INJURED(Local_249[iParam0 /*9*/][0])) && !PED::IS_PED_INJURED(Local_249[iParam0 /*9*/][1]))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_249[iParam0 /*9*/][0], Local_249[iParam0 /*9*/].f_3, false))
		{
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_249[iParam0 /*9*/][0], Local_249[iParam0 /*9*/].f_3, 119.2184f, 6559.7744f, 30.6237f, 15f, 0, joaat("sheriff"), 786485, 5f, 5f);
		}
		Local_249[iParam0 /*9*/].f_6 = 1;
	}
}

int func_195(int iParam0, bool bParam1)//Position - 0x1045C
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_249.f_0)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_249[iVar1 /*9*/][iVar2]))
			{
				if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_249[iVar1 /*9*/][iVar2], PLAYER::PLAYER_PED_ID(), true) || (!PED::IS_PED_INJURED(Local_249[iVar1 /*9*/][iVar2]) && PED::IS_PED_IN_MELEE_COMBAT(Local_249[iVar1 /*9*/][iVar2]))) || (!PED::IS_PED_INJURED(Local_249[iVar1 /*9*/][iVar2]) && PED::IS_PED_BEING_STEALTH_KILLED(Local_249[iVar1 /*9*/][iVar2])))
				{
					iVar0 = 1;
				}
			}
			iVar2++;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar1 /*9*/].f_3, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_166, fLocal_167, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_249[iVar1 /*9*/].f_3, 5f, 5f, 5f, false, true, 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Local_249[iVar1 /*9*/].f_3))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[iVar1 /*9*/].f_3))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_249[iVar1 /*9*/].f_3);
							}
							if (iVar1 == iLocal_154 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_249[iLocal_154 /*9*/].f_3, 1f, true);
							}
							iVar0 = 1;
						}
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_249[iVar1 /*9*/].f_3, false))
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_52)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_52[iVar1], PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = 1;
			}
			if (!PED::IS_PED_INJURED(iLocal_52[iVar1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_52[iVar1], iParam0))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -138.98285f, 6475.819f, 51.223343f, -90.29582f, 6426.385f, 1.471224f, 77.75f, false, true, 0))
	{
		iVar0 = 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(3, Local_113, 100f) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && FIRE::IS_ENTITY_ON_FIRE(iLocal_231)))
	{
		iVar0 = 1;
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(79 /*EVENT_SHOCKING_CAR_CRASH*/, Local_113, 15f))
	{
		iVar0 = 1;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -126.46556f, 6476.683f, 30.468256f, -103.35761f, 6453.125f, 37.21962f, 29.5f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -126.46556f, 6476.683f, 30.468256f, -103.35761f, 6453.125f, 37.21962f, 29.5f, false, true, 0)))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_196(int iParam0, int iParam1)//Position - 0x10729
{
	struct<3> Var0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false) && !PED::IS_PED_INJURED(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_59))
		{
			if (iLocal_1001)
			{
				if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
				{
					HUD::SET_BLIP_SCALE(iLocal_59, 0.7f);
					iLocal_1001 = 0;
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				HUD::SET_BLIP_SCALE(iLocal_59, 1f);
				iLocal_1001 = 1;
			}
			Var0 = { HUD::GET_BLIP_COORDS(iLocal_59) };
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var0.f_0 = (Var0.f_0 + ((Var1.f_0 - Var0.f_0) / 10f));
			Var0.f_1 = (Var0.f_1 + ((Var1.f_1 - Var0.f_1) / 10f));
			Var0.f_2 = (Var0.f_2 + ((Var1.f_2 - Var0.f_2) / 10f));
			HUD::SET_BLIP_COORDS(iLocal_59, Var0);
		}
		else
		{
			iLocal_59 = __LIB_0__::func_488(ENTITY::GET_ENTITY_COORDS(iParam0, true), 0);
			HUD::SET_BLIP_COLOUR(iLocal_59, 3);
			HUD::SET_BLIP_PRIORITY(iLocal_59, 3);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_59, "CBH_BLIPTREV");
			}
			else
			{
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_59, "CBH_BLIPMIKE");
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_59))
	{
		HUD::REMOVE_BLIP(&iLocal_59);
	}
}

void func_197(int iParam0)//Position - 0x10840
{
	if (*iParam0 != -1)
	{
		HUD::CLEAR_GPS_MULTI_ROUTE();
		*iParam0 = -1;
	}
}

void func_198()//Position - 0x10857
{
	__LIB_0__::func_325();
	__LIB_0__::func_526(1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_231, true), Local_102) < 2500f || __LIB_15__::func_944() == 0))
	{
		if (VEHICLE::IS_BIG_VEHICLE(iLocal_231))
		{
			func_199(iLocal_231, 1422.6631f, 3614.9785f, 33.9476f, 46.7525f, 24, 0);
		}
		else
		{
			func_199(iLocal_231, 1405.8481f, 3598.6f, 34.4038f, 49.567f, 24, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		Global_96938.f_9[0] = iLocal_51;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		Global_96938[0] = iLocal_63;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_231))
	{
		Global_96938[1] = iLocal_231;
	}
	func_891();
}

void func_199(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0x10937
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
		func_200(iParam3, iParam0, 0);
	}
}

void func_200(int iParam0, int iParam1, int iParam2)//Position - 0x10A60
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
				Global_113386.f_32749.f_4801 = __LIB_11__::func_762();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = __LIB_0__::func_343(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						__LIB_17__::func_655(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_245(int iParam0, int iParam1, float fParam2)//Position - 0x17106
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = (*iParam0 - 1);
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (fParam2 <= (iParam0[iVar0 /*5*/])->f_3 && iVar1 == (*iParam0 - 1))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (*iParam1 != iVar1)
	{
		if ((*iParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *(iParam0[*iParam1 /*5*/])) > 100f) || *iParam1 == -1)
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, true, false);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(iParam0[iVar0 /*5*/]));
				iVar0++;
			}
			HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
		}
		*iParam1 = iVar1;
	}
}

void func_246()//Position - 0x171C0
{
	int iVar0;
	if (iLocal_998 < 3 && iLocal_998 > 0)
	{
		if ((!CAM::IS_SPHERE_VISIBLE(1405.9346f, 3589.429f, 33.9496f, 15f) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true)) > 22500f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true)) > 5625f)
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_231, 1405.8481f, 3598.6f, 34.4038f, false, false, true);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_231, 0.0483f, -0.1174f, 0.4164f, 0.9003f);
			ENTITY::SET_ENTITY_COORDS(uLocal_186[2], 1404.87f, 3597.943f, 34.894f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uLocal_186[2], 135f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_231, 5f);
			iLocal_998 = 3;
		}
	}
	switch (iLocal_998)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup"))
			{
				if (!PED::IS_PED_INJURED(uLocal_186[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_231, false))
				{
					TASK::TASK_VEHICLE_PARK(uLocal_186[2], iLocal_231, 1405.8481f, 3598.6f, 34.4038f, 49.567f, 1, 90f, false);
					iLocal_998++;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(uLocal_186[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_231, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_VEHICLE_PARK")) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_231, ENTITY::GET_ENTITY_COORDS(iLocal_231, true), 5, 1f, 786469, 10f, 10f, true);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_231, 131072);
					TASK::TASK_ACHIEVE_HEADING(0, 135f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_998++;
				}
			}
			break;
		case 2:
			if ((!PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_231, false) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1) && ENTITY::GET_ENTITY_SPEED(iLocal_231) < 0.1f)
			{
				iLocal_998++;
			}
			break;
		case 3:
			if (iLocal_997 > 1)
			{
				if (!PED::IS_PED_FACING_PED(uLocal_186[2], PLAYER::PLAYER_PED_ID(), 60f))
				{
					iLocal_997 = 0;
				}
			}
			switch (iLocal_997)
			{
				case 0:
					TASK::CLEAR_PED_TASKS(uLocal_186[2]);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], PLAYER::PLAYER_PED_ID(), -1, 2064, 4);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_999);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_999);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iLocal_999);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_999);
					iLocal_997++;
					break;
				case 1:
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						iLocal_997++;
					}
					break;
				case 2:
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1000);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_1", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_2", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_3", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missheistpaletoscoresetup", "trevor_impatient_wait_4", 8f, -8f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1000);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_186[2], iLocal_1000);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1000);
					iLocal_997++;
					break;
			}
			break;
	}
}

float func_247(struct<3> Param0, int iParam1, char* sParam2, var uParam3)//Position - 0x17569
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	bool bVar17;
	float fVar18;
	float fVar19;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2) && iParam1 > 0)
	{
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
		{
			iVar2[0] = 99;
			iVar2[1] = 98;
			iVar2[2] = 97;
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				fVar3 = MISC::ABSF((Param0.f_0 - (*uParam3)[iVar0 /*3*/]));
				fVar4 = MISC::ABSF((Param0.f_1 - (uParam3[iVar0 /*3*/])->f_1));
				fVar5 = (fVar3 + fVar4);
				fVar6 = 0f;
				iVar7 = 0;
				iVar1 = 0;
				while (iVar1 < iVar2)
				{
					if (iVar0 != iVar2[iVar1])
					{
						fVar8 = MISC::ABSF((Param0.f_0 - (*uParam3)[iVar2[iVar1] /*3*/]));
						fVar9 = MISC::ABSF((Param0.f_1 - (uParam3[iVar2[iVar1] /*3*/])->f_1));
						fVar10 = (fVar8 + fVar9);
						if (fVar10 > fVar6)
						{
							iVar7 = iVar1;
							fVar6 = fVar10;
						}
					}
					iVar1++;
				}
				if (fVar5 < fVar6)
				{
					iVar2[iVar7] = iVar0;
				}
				iVar0++;
			}
			fVar11 = 999999f;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 0)
				{
					Var14 = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[(iVar2[iVar0] - 1) /*3*/]), true) };
				}
				else
				{
					Var14 = { *(uParam3[0 /*3*/]) };
				}
				if (iVar2[iVar0] < (*uParam3 - 2))
				{
					Var15 = { MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(uParam3[iVar2[iVar0] /*3*/]), *(uParam3[iVar2[iVar0] + 1 /*3*/]), true) };
				}
				else
				{
					Var15 = { *(uParam3[(*uParam3 - 1) /*3*/]) };
				}
				bVar17 = false;
				if (SYSTEM::VDIST2(Param0, Var14) < SYSTEM::VDIST2(Param0, Var15))
				{
					Var16 = { Var14 };
				}
				else
				{
					bVar17 = true;
					Var16 = { Var15 };
				}
				if (SYSTEM::VDIST2(Param0, Var16) < fVar11)
				{
					if (bVar17)
					{
						iVar12 = iVar2[iVar0];
					}
					else
					{
						iVar12 = (iVar2[iVar0] - 1);
					}
					fVar11 = SYSTEM::VDIST2(Param0, Var16);
					Var13 = { Var16 };
				}
				iVar0++;
			}
			iVar12 = __LIB_0__::func_340(iVar12, 0, 98);
			fVar18 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2) / 99f);
			fVar19 = ((SYSTEM::VDIST(*(uParam3[iVar12 /*3*/]), Var13) / SYSTEM::VDIST(*(uParam3[iVar12 /*3*/]), *(uParam3[iVar12 + 1 /*3*/]))) * fVar18);
			return (fVar19 + (IntToFloat(iVar12) * fVar18));
		}
	}
	return -1f;
}

void func_249(int iParam0, int iParam1, int iParam2, char* sParam3, var uParam4, bool bParam5, float fParam6)//Position - 0x177EB
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		fLocal_914 = func_247(ENTITY::GET_ENTITY_COORDS(iParam1, true), iParam2, sParam3, uParam4);
		if (func_253(iParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(iParam0, 25f);
			}
			if (iLocal_917 != 262144)
			{
				iLocal_917 = 262144;
			}
		}
		else
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(iParam0, VEHICLE::GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(ENTITY::GET_ENTITY_MODEL(iParam1)));
			}
			if (iLocal_917 != 786469)
			{
				iLocal_917 = 786469;
			}
		}
		if (func_251(ENTITY::GET_ENTITY_COORDS(iParam1, true), &Local_125))
		{
			if (fLocal_916 != 50f)
			{
				fLocal_916 = 50f;
			}
			if (iLocal_917 != 262144)
			{
				iLocal_917 = 262144;
			}
		}
		else
		{
			if (iLocal_917 != 786469)
			{
				iLocal_917 = 786469;
			}
			if (fLocal_916 != 100f)
			{
				fLocal_916 = 100f;
			}
		}
		if (iLocal_917 != iLocal_918)
		{
			if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iParam1))
			{
				VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam1, iLocal_917);
			}
			iLocal_918 = iLocal_917;
		}
		if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
		{
			if (!iLocal_143)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iParam1))
				{
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam1, iLocal_917);
				}
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_914, sParam3), -494.93433f, 4928.8203f, 157.12422f, -134.45724f, 4615.544f, 124.08361f, 30.25f, false, true))
				{
					fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true));
					if (((fVar0 > (fLocal_916 * fLocal_916) && (fLocal_914 > 10000f || fVar0 > 10000f)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam3)) && fLocal_914 < (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam2, sParam3) - 10000f))
					{
						if ((ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_OCCLUDED(iParam1)) && !CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_914, sParam3), 4f))
						{
							if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
							{
								PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, -1);
							}
							ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam1);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iParam1, iParam2, sParam3, true);
							VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iParam1, fLocal_914);
							iLocal_143 = 1;
						}
					}
				}
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) < ((fLocal_916 * fLocal_916) * 0.9f) || (!ENTITY::IS_ENTITY_OCCLUDED(iParam1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true)) < ((100f * 100f) * 1.5f)))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam1, 1f);
					ENTITY::SET_ENTITY_COLLISION(iParam1, true, false);
					iLocal_143 = 0;
				}
			}
			else if (bParam5)
			{
				if (fParam6 > fLocal_914)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
					{
						VEHICLE::SET_PLAYBACK_SPEED(iParam1, __LIB_0__::func_331(((fParam6 - fLocal_914) / 1000f), 1f, 3f));
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iParam1, 1f);
				}
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, -1, 2f, 1, 0);
			}
			if ((ENTITY::IS_ENTITY_OCCLUDED(iParam1) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) > 50f) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam1, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 50f)
			{
				if (!CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_914, sParam3), 2f))
				{
					ENTITY::SET_ENTITY_COORDS(iParam1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fLocal_914, sParam3), true, false, false, true);
				}
				if (ENTITY::IS_ENTITY_OCCLUDED(iParam0))
				{
					PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, -1);
				}
			}
		}
	}
}

int func_251(struct<3> Param0, var uParam1)//Position - 0x17BDE
{
	int iVar0;
	if (*uParam1 < 3)
	{
	}
	iVar0 = 1;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (!__LIB_39__::func_118(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[(iVar0 - 1) /*3*/])))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_253(int iParam0)//Position - 0x17C4F
{
	return ((((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -824.9688f, 5228.711f, 116.867775f, -852.0287f, 5341.0117f, 54.161114f, 65.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -171.5547f, 4652.35f, 140.70383f, -33.917088f, 4546.7466f, 106.95739f, 65.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -89.917274f, 4308.34f, 58.66524f, -193.93866f, 4219.964f, 35.347736f, 38.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -223.02438f, 3932.0762f, 48.885773f, -215.28806f, 3832.037f, 28.850357f, 56.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -215.46313f, 3720.1558f, 61.35942f, -125.230385f, 3631.9885f, 35.598236f, 56.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 85.41956f, 3496.5063f, 51.25703f, 177.07838f, 3396.7917f, 28.676632f, 119.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 35.18766f, 4455.669f, 81.755875f, -37.359905f, 4422.036f, 54.018738f, 62.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -809.7636f, 5265.459f, 77.19865f, -726.4775f, 5220.505f, 124.45875f, 61.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -652.9576f, 5133.3022f, 114.41351f, -587.3712f, 5025.8896f, 164.56616f, 61.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -243.41158f, 4721.3706f, 91.37091f, -97.04164f, 4589.3174f, 148.16199f, 22f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -51.048225f, 4561.0234f, 76.79493f, 24.164288f, 4525.127f, 129.61998f, 43f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -35.08501f, 3605.692f, -0.894375f, 128.68884f, 3553.0188f, 63.64628f, 70.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -419.15298f, 6119.916f, 30.156736f, -435.4348f, 6059.3477f, 38.9021f, 39.25f, false, true, 0));
}

void func_254()//Position - 0x17EDB
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_928, false) && __LIB_15__::func_944() == 0)
	{
		switch (iLocal_938)
		{
			case 0:
				sLocal_919[0] = "RBS1_LES2";
				sLocal_919[1] = "RBS1_LES3";
				iLocal_938++;
				break;
			case 1:
				if (((!iLocal_920[0] || (iLocal_920[0] && iLocal_921[0])) && (!iLocal_920[1] || (iLocal_920[1] && iLocal_921[1]))) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_928, false))
				{
					if (!iLocal_935)
					{
						if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_LES1", 8, 0, 0, 0))
						{
							iLocal_935 = 1;
						}
					}
					if (iLocal_934)
					{
						if (__LIB_17__::func_244(&Local_233, cLocal_168, "RBS1_LES1", &Local_936, 8, 0, 0))
						{
							iLocal_934 = 0;
						}
					}
				}
				else if (!iLocal_934)
				{
					Local_936 = { __LIB_0__::func_485() };
					__LIB_0__::func_638();
					iLocal_934 = 1;
					iLocal_939 = iLocal_938;
					iLocal_938 = 100;
				}
				if (!__LIB_0__::func_75() && !iLocal_934)
				{
					iLocal_935 = 0;
					StringCopy(&Local_936, "", 24);
					iLocal_938++;
				}
				break;
			case 2:
				if (((!iLocal_920[0] || (iLocal_920[0] && iLocal_921[0])) && (!iLocal_920[1] || (iLocal_920[1] && iLocal_921[1]))) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_928, false))
				{
					if (!iLocal_935)
					{
						if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_LES1b", 8, 0, 0, 0))
						{
							iLocal_935 = 1;
						}
					}
					if (iLocal_934)
					{
						if (__LIB_17__::func_244(&Local_233, cLocal_168, "RBS1_LES1b", &Local_936, 8, 0, 0))
						{
							iLocal_934 = 0;
						}
					}
				}
				else if (!iLocal_934)
				{
					Local_936 = { __LIB_0__::func_485() };
					__LIB_0__::func_638();
					iLocal_934 = 1;
					iLocal_939 = iLocal_938;
					iLocal_938 = 100;
				}
				break;
			case 100:
				if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iLocal_940 = -1;
					iVar0 = 0;
					while (iVar0 < iLocal_921)
					{
						if (iLocal_920[iVar0] && !iLocal_921[iVar0])
						{
							if (iLocal_940 == -1)
							{
								iLocal_940 = iVar0;
							}
							func_256(sLocal_919[iVar0], (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_928, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_928, false)));
						}
						iVar0++;
					}
					if ((!__LIB_0__::func_75() && !bLocal_267) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_928, false))
					{
						iLocal_266 = 0;
						if (iLocal_940 != -1)
						{
							iLocal_921[iLocal_940] = 1;
						}
						StringCopy(&cLocal_268, "", 24);
						iLocal_938 = iLocal_939;
						iLocal_939 = 1000;
					}
				}
				break;
		}
		if (!iLocal_920[0])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -706.7669f, 5536.016f, 34.65338f, -805.0684f, 5471.5312f, 39.915943f, 24f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_928, false))
			{
				iLocal_920[0] = 1;
			}
		}
		if (!iLocal_920[1])
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -262.86f, 4738.64f, 119.116486f, -163.37433f, 4644.937f, 147.83577f, 14.25f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_928, false))
			{
				iLocal_920[1] = 1;
			}
		}
	}
	if ((!PED::IS_PED_INJURED(uLocal_186[iLocal_927]) && PED::IS_PED_IN_VEHICLE(uLocal_186[iLocal_927], iLocal_929, false)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (iLocal_927 == 2)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_937) > 6000)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[iLocal_927], true)) < 25f)
				{
					if ((!bLocal_267 && !__LIB_0__::func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_928, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_929, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_929, iLocal_928) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_929, ENTITY::GET_ENTITY_COORDS(iLocal_928, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_928, 0f, 4f, 0f), 2f, false, true, 0))
							{
								if (__LIB_0__::func_680())
								{
									if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_ASSHLEM", 8, 0, 0, 0))
									{
										iLocal_937 = MISC::GET_GAME_TIMER();
									}
								}
								else if (__LIB_17__::func_243(&Local_233, cLocal_168, sLocal_170, 8, 0, 0, 0))
								{
									iLocal_937 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[iLocal_927], true)) < SYSTEM::POW(15f, 2f))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_186[iLocal_927], joaat("WEAPON_UNARMED"), true);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_186[iLocal_927], joaat("WEAPON_UNARMED"));
				PED::SET_PED_CAN_SWITCH_WEAPON(uLocal_186[iLocal_927], false);
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_186[iLocal_927], &iVar1, true);
				if (iVar1 == joaat("WEAPON_UNARMED"))
				{
					if (!PED::IS_PED_DOING_DRIVEBY(uLocal_186[iLocal_927]))
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_941) > 8000)
						{
							TASK::TASK_DRIVE_BY(uLocal_186[iLocal_927], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 25f, 80, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							iLocal_941 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_941) > 3000)
					{
						TASK::CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(uLocal_186[iLocal_927]);
					}
				}
			}
		}
	}
}

void func_256(char* sParam0, bool bParam1)//Position - 0x18449
{
	if (bParam1)
	{
		if (!iLocal_266)
		{
			if (__LIB_17__::func_243(&Local_233, cLocal_168, sParam0, 8, 0, 0, 0))
			{
				bLocal_267 = false;
				iLocal_266 = 1;
			}
		}
		if (bLocal_267)
		{
			if (__LIB_17__::func_244(&Local_233, cLocal_168, sParam0, &cLocal_268, 8, 0, 0))
			{
				bLocal_267 = false;
			}
		}
	}
	if (!bParam1)
	{
		if (!bLocal_267)
		{
			cLocal_268 = { __LIB_0__::func_485() };
			__LIB_0__::func_638();
			bLocal_267 = true;
		}
	}
}

void func_259(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x185B7
{
	int iVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		iVar0 = 0;
		while (iVar0 < *iParam0)
		{
			(iParam0[iVar0 /*5*/])->f_3 = func_247(*(iParam0[iVar0 /*5*/]), iParam1, sParam2, uParam3);
			(iParam0[iVar0 /*5*/])->f_4 = 1;
			iVar0++;
		}
	}
}

void func_260(var uParam0, int iParam1, char* sParam2)//Position - 0x18609
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / 99f);
		*(uParam0[99 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, fVar0, sParam2) };
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

bool func_315(var uParam0, bool bParam1, int iParam2)//Position - 0x1A156
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__::func_81());
	bVar8 = __LIB_13__::func_749(bParam1);
	uParam0->f_6 = __LIB_0__::func_482(__LIB_15__::func_944());
	Global_23011.f_12 = !uParam0->f_23;
	Global_23011.f_121 = bParam1;
	Global_23011.f_122 = iParam2;
	Global_23011.f_123 = bVar7;
	Global_23011.f_3 = Global_23011.f_2;
	Global_23011.f_70 = 0;
	bVar9 = ((Global_23011.f_104 == 4 || Global_23011.f_104 == 1) || Global_23011.f_104 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		__LIB_17__::func_728(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__::func_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_13__::func_765(iVar10) && __LIB_13__::func_764(iVar10)) && iVar10 == __LIB_0__::func_482(Global_113386.f_2363.f_539.f_4323))
			{
				Global_23011.f_70 = 1;
			}
			else
			{
				Global_23011.f_70 = 0;
			}
		}
		else if (Global_23011.f_12)
		{
			if (!Global_23011.f_70)
			{
				if ((((!PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_18[iVar0]) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID()) || uParam0->f_34[iVar0] == 2) || uParam0->f_24[iVar0] != 0)
				{
					Global_23011.f_70 = 1;
				}
			}
			if (uParam0->f_34[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (uParam0->f_6 == iVar0)
			{
				if (uParam0->f_34[iVar0] == 1 || uParam0->f_34[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (uParam0->f_8[iVar0])
			{
				if (uParam0->f_39 && uParam0->f_7 == iVar0)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_34[iVar0] == 3)
				{
					uParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*uParam0)[iVar0]) && !uParam0->f_23) && !uParam0->f_34[iVar0] == 2)
				{
					uParam0->f_8[iVar0] = 0;
				}
			}
			Global_23011.f_49[iVar0] = uParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0])) && (*uParam0)[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				Global_23011.f_71[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_23011.f_71[iVar0] != -1 && IntToFloat(Global_23011.f_71[iVar0]) < 25f) || uParam0->f_13[iVar0])
			{
				if (uParam0->f_6 != iVar0)
				{
					Global_23011.f_54[iVar0] = 1;
					Global_23011.f_59[iVar0] = uParam0->f_13[iVar0];
				}
			}
		}
		else
		{
			Global_23011.f_49[iVar0] = uParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
		}
		if (Global_23011.f_124)
		{
			Global_23011.f_19[iVar2] = iVar1;
			Global_23011.f_24[iVar2] = uVar3;
			Global_23011.f_29[iVar2] = uVar4;
			Global_23011.f_34[iVar0] = 0;
			Global_23011.f_44[iVar0] = 0;
			Global_23011.f_39[iVar0] = 0;
			if (bVar9)
			{
				if (Global_23011.f_12)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]) && !PED::IS_PED_INJURED((*uParam0)[iVar0]))
					{
						Global_23011.f_76[iVar0] = PED::GET_PED_ARMOUR((*uParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						Global_23011.f_81[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0], true) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_13__::func_94() || __LIB_0__::func_39(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__::func_39(14))
		{
			if ((uParam0->f_6 == iVar0 && !bVar5) || uParam0->f_34[iVar0] == 3)
			{
				Global_23011.f_69 = iVar2;
				Global_23011.f_14 = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_0__::func_540(0) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(3) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(2) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(9) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(10) || Global_23011.f_12) || __LIB_0__::func_39(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__::func_39(14))
				{
					if (Global_23011.f_69 == 0)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_13__::func_747(uParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = __LIB_39__::func_127(uParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = __LIB_39__::func_127(uParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_16__::func_30(uParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = __LIB_39__::func_127(uParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
				{
					if (uParam0->f_34[0] == 3)
					{
						bVar11 = false;
					}
					else if (uParam0->f_34[1] == 3)
					{
						bVar11 = true;
					}
					else if (uParam0->f_34[2] == 3)
					{
						bVar11 = 2;
					}
					else
					{
						bVar11 = __LIB_15__::func_944();
					}
					switch (bVar11)
					{
						case 0:
							if (uParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (uParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = true;
								bVar13 = 2;
							}
							break;
						case 1:
							if (uParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (uParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = 2;
								bVar13 = false;
							}
							break;
						case 2:
							if (uParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (uParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (uParam0->f_43)
							{
								bVar12 = uParam0->f_40;
								bVar13 = uParam0->f_41;
								bVar14 = uParam0->f_42;
							}
							else
							{
								bVar12 = false;
								bVar13 = true;
							}
							break;
					}
					bVar15 = true;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/))
							{
								bVar15 = false;
								if (bVar11 != 0)
								{
									if (__LIB_39__::func_127(uParam0, 0))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
							{
								bVar15 = false;
								if (bVar11 != 1)
								{
									if (__LIB_39__::func_127(uParam0, 1))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
							{
								bVar15 = false;
								if (bVar11 != 2)
								{
									if (__LIB_39__::func_127(uParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (__LIB_39__::func_127(uParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_39__::func_127(uParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_39__::func_127(uParam0, bVar14))
						{
							Global_23011.f_11 = 1;
						}
					}
				}
			}
		}
	}
	if (Global_23011.f_11)
	{
		Global_23011.f_125 = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_23011.f_11;
}

void func_340(struct<3> Param0, int iParam1)//Position - 0x1B9E9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (__LIB_0__::func_78(*(iParam1[iVar0 /*5*/]), 0f, 0f, 0f, 0))
		{
			*(iParam1[iVar0 /*5*/]) = { Param0 };
			return;
		}
		iVar0++;
	}
}

void func_342()//Position - 0x1BA94
{
	int iVar0;
	switch (iLocal_261)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1054.7477f, 5340.3237f, -10f, 750f, 750f, 750f, false, true, 0))
			{
				iLocal_261 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1578.0135f, 6427.9937f, -10f, 750f, 750f, 750f, false, true, 0))
			{
				iLocal_261 = 3;
			}
			break;
		case 1:
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[0]))
				{
					iLocal_262[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), -990.6421f, 5391.671f, 40.4409f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_262[0], -0.0138f, 0.0194f, 0.0655f, 0.9976f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[1]))
				{
					iLocal_262[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), -994.824f, 5401.228f, 40.3984f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_262[1], 0.0221f, 0.0008f, 0.8693f, -0.4938f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[0]))
				{
					iLocal_263[0] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -992.679f, 5392.6333f, 39.8664f, 324.3472f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[1]))
				{
					iLocal_263[1] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -994.6719f, 5399.035f, 39.8257f, 218.1417f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[2]))
				{
					iLocal_263[2] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -996.4119f, 5398.116f, 39.9129f, 270.4941f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[3]))
				{
					iLocal_263[3] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), -995.2369f, 5390.152f, 40.0318f, 346.7168f, true, true);
					iVar0 = 0;
					while (iVar0 < iLocal_262)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_262[iVar0], false))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_262[iVar0], true);
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < iLocal_263)
					{
						if (!PED::IS_PED_INJURED(iLocal_263[iVar0]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_263[iVar0], true);
						}
						iVar0++;
					}
					iLocal_264[0] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-987.41046f, 5400.1655f, 39.52042f, 15f, 7f, true);
					iLocal_264[1] = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(-993.56f, 5395.73f, 39.85f, 3f, 1f, true);
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -990.6421f, 5391.671f, 40.4409f, 1000f, 1000f, 1000f, false, true, 0))
			{
				iLocal_261 = 4;
			}
			break;
		case 3:
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[0]))
				{
					iLocal_262[0] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1578.0135f, 6427.9937f, 24.4932f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_262[0], -0.0181f, -0.0008f, 0.9997f, -0.0188f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[1]))
				{
					iLocal_262[1] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1573.8474f, 6423.33f, 24.4071f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_262[1], -0.0012f, -0.0163f, -0.3084f, 0.9511f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[2]))
				{
					iLocal_262[2] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1572.3234f, 6409.7764f, 24.5238f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_262[2], -0.0023f, -0.0158f, -0.2387f, 0.971f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_262[3]))
				{
					iLocal_262[3] = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1564.1204f, 6406.375f, 24.3283f, 0f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_262[3], 0.0037f, -0.0152f, -0.5892f, 0.8078f);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[0]))
				{
					iLocal_263[0] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 1577.8823f, 6424.149f, 23.917f, 263.6635f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[1]))
				{
					iLocal_263[1] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 1581.4651f, 6429.4956f, 23.9937f, 221.5831f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[2]))
				{
					iLocal_263[2] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 1580.0614f, 6421.4756f, 24.012f, 276.7651f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[3]))
				{
					iLocal_263[3] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 1568.118f, 6409.2944f, 23.811f, 73.3582f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[4]))
				{
					iLocal_263[4] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 1567.2507f, 6415.1094f, 23.7167f, 54.1765f, true, true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_263[5]))
				{
					iLocal_263[5] = PED::CREATE_PED(6, joaat("S_M_Y_Cop_01"), 1564.1042f, 6407.8867f, 23.7113f, 54.9604f, true, true);
					iVar0 = 0;
					while (iVar0 < iLocal_262)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_262[iVar0], false))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_262[iVar0], true);
						}
						iVar0++;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1578.0135f, 6427.9937f, -10f, 1000f, 1000f, 1000f, false, true, 0))
			{
				iLocal_261 = 4;
			}
			break;
		case 4:
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_264[0]);
			VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_264[1]);
			iVar0 = 0;
			while (iVar0 < iLocal_263)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_263[iVar0]));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_262)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_262[iVar0]));
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sheriff"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
			iLocal_261 = 0;
			break;
	}
}

void func_343()//Position - 0x1C120
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	func_393();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_SHOOT_THE_ALARM"))
			{
				AUDIO::STOP_AUDIO_SCENE("PS_1_SHOOT_THE_ALARM");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
			{
				AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
			}
		}
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (iLocal_150 < 5)
	{
		if (bLocal_128)
		{
			__LIB_0__::func_638();
			bLocal_267 = false;
			iLocal_266 = 0;
			iLocal_301 = 0;
			SYSTEM::SETTIMERA(0);
			iLocal_137 = 0;
			iLocal_150 = 5;
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				TASK::TASK_LOOK_AT_COORD(iLocal_51, Local_113, -1, 16, 4);
			}
			if (!PED::IS_PED_INJURED(uLocal_186[2]))
			{
				TASK::TASK_LOOK_AT_COORD(uLocal_186[2], Local_113, -1, 16, 4);
			}
		}
	}
	switch (iLocal_150)
	{
		case 0:
			if (SYSTEM::TIMERA() > 1000)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					if (__LIB_0__::func_77(0))
					{
						__LIB_0__::func_366(0);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_55))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_63, true)) > 9f)
						{
							if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_GETIN", 8, 0, 0, 0))
							{
								iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
							}
						}
						else
						{
							iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) || HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					iLocal_305 = 0;
					func_391(1, 1);
					__LIB_39__::func_119(500);
					iLocal_302 = 0;
					iLocal_150++;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_382("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 1);
					iLocal_150++;
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&iLocal_55);
				iLocal_150++;
			}
			break;
		case 2:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, true))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					HUD::REMOVE_BLIP(&iLocal_55);
				}
				if (__LIB_0__::func_77(0))
				{
					__LIB_0__::func_366(0);
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, Local_165, Local_166, fLocal_167, false, true, 0))
				{
					__LIB_0__::func_638();
					if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_HIDE1", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_150++;
					}
				}
				else
				{
					SYSTEM::SETTIMERA(0);
					iLocal_150++;
				}
			}
			else
			{
				func_390();
			}
			break;
		case 3:
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_385();
			}
			if (SYSTEM::TIMERA() > 3000)
			{
				func_383();
				if (!iLocal_305 && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					iLocal_305 = 1;
				}
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, Local_165, Local_166, fLocal_167, false, true, 0))
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_229("CBH_HIDELOT", 5000, 1);
						SYSTEM::SETTIMERA(0);
						Local_117 = { Local_113 };
						iLocal_150++;
					}
				}
				else
				{
					iLocal_150++;
				}
			}
			else
			{
				func_390();
			}
			break;
		case 4:
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_385();
			}
			if (iLocal_303 > 0 && !HUD::DOES_BLIP_EXIST(iLocal_54))
			{
				func_356();
			}
			break;
		case 5:
			func_356();
			STREAMING::REQUEST_ANIM_DICT("missrbhsig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missrbhsig_2"))
			{
				func_256("RBS1_COPARR", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
				if (!iLocal_301 && iLocal_266)
				{
					if (!PED::IS_PED_INJURED(uLocal_186[2]))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_186[2], "missrbhsig_2", "this_is_them_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(uLocal_186[2], "missrbhsig_2", "this_is_them_trevor", 2f, -2f, -1, 0, 0f, false, false, false);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51, "missrbhsig_2", "this_is_them_lester", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_51, "missrbhsig_2", "this_is_them_lester", 2f, -2f, -1, 0, 0f, false, false, false);
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_186[2]) && !PED::IS_PED_INJURED(iLocal_51))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_186[2], "missrbhsig_2", "this_is_them_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51, "missrbhsig_2", "this_is_them_Lester", 3))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
							iLocal_301 = 1;
						}
					}
				}
				if ((!__LIB_0__::func_75() && !bLocal_267) || (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) && SYSTEM::TIMERA() > 15000))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], iLocal_231, 15000, 16, 4);
					if (!PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][0]))
					{
						__LIB_0__::func_221(&Local_233, 5);
						__LIB_0__::func_222(&Local_233, 5, Local_249[iLocal_154 /*9*/][0], "PALETOCOP1", 0, 1);
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
					iLocal_150++;
					bLocal_267 = false;
					iLocal_266 = 0;
					StringCopy(&cLocal_268, "", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		case 6:
			func_356();
			func_256("RBS1_WAIT", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
			if ((!__LIB_0__::func_75() && !bLocal_267) || (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) && SYSTEM::TIMERA() > 15000))
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], iLocal_231, 15000, 16, 4);
				iLocal_150++;
				bLocal_267 = false;
				iLocal_266 = 0;
				StringCopy(&cLocal_268, "", 24);
				SYSTEM::SETTIMERA(0);
			}
			break;
		case 7:
			iLocal_150++;
			break;
		case 8:
			func_356();
			if (SYSTEM::TIMERA() > 4000)
			{
				func_256("RBS1_COPREP", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
				if ((!bLocal_267 && !__LIB_0__::func_75()) || (SYSTEM::TIMERA() > 17000 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)))
				{
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						TASK::TASK_LOOK_AT_COORD(iLocal_51, Local_113, 10000, 16, 4);
					}
					bLocal_267 = false;
					iLocal_266 = 0;
					StringCopy(&cLocal_268, "", 24);
					EVENT::REMOVE_SHOCKING_EVENT(iLocal_306);
					iLocal_306 = 0;
					func_33(7);
				}
			}
			break;
	}
	if (!PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][0]) && bLocal_128)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_249[iLocal_154 /*9*/][0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(65f, 2f))
		{
			Local_117 = { ENTITY::GET_ENTITY_COORDS(Local_249[iLocal_154 /*9*/][0], true) };
			fLocal_146 = 0.025f;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_155) < 7000)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, true);
	}
	if (!bLocal_128)
	{
		if (func_354(&(Local_249[func_355() /*9*/].f_3)))
		{
			bLocal_128 = true;
		}
	}
	if (bLocal_128)
	{
		if (!iLocal_139)
		{
			if (__LIB_0__::func_1("CBH_FCUSHLP"))
			{
				HUD::CLEAR_HELP(false);
				iLocal_139 = 1;
			}
		}
	}
	if (iLocal_150 > 3)
	{
		func_383();
	}
	switch (iLocal_153)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_155) > 55000)
			{
				if (func_352(0))
				{
					iLocal_153++;
				}
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup3");
			if ((((!PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][0]) && !PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iLocal_154 /*9*/].f_3, false)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[iLocal_154 /*9*/].f_3)) && STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup3"))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_249[iLocal_154 /*9*/].f_3, true);
				Local_299 = { ENTITY::GET_ENTITY_COORDS(Local_249[iLocal_154 /*9*/].f_3, true) };
				ENTITY::GET_ENTITY_QUATERNION(Local_249[iLocal_154 /*9*/].f_3, &(uLocal_297[0]), &(uLocal_297[1]), &(uLocal_297[2]), &(uLocal_297[3]));
				fLocal_298[0] = 0.0041f;
				fLocal_298[1] = 0.003f;
				fLocal_298[2] = 0.0955f;
				fLocal_298[3] = 0.9954f;
				fLocal_300 = 0f;
				iLocal_153++;
			}
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iLocal_154 /*9*/].f_3, false))
			{
				if (fLocal_300 <= 1f)
				{
					func_350(Local_249[iLocal_154 /*9*/].f_3, Local_299, -126.1263f, 6444.1216f, 31.1441f, &uLocal_297, &fLocal_298, &fLocal_300);
					fLocal_300 = (fLocal_300 + 0.1f);
				}
			}
			if (fLocal_300 >= 1f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iLocal_154 /*9*/].f_3, false))
				{
					func_350(Local_249[iLocal_154 /*9*/].f_3, Local_299, -126.1263f, 6444.1216f, 31.1441f, &uLocal_297, &fLocal_298, &fLocal_300);
					if (func_349())
					{
						STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup2");
						VEHICLE::SET_VEHICLE_SIREN(Local_249[iLocal_154 /*9*/].f_3, false);
						iLocal_153 = 5;
					}
				}
			}
			break;
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.3f)
				{
					if (!Local_249[2 /*9*/].f_6)
					{
						iVar0 = 0;
						while (iVar0 < Local_249.f_0)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar0 /*9*/].f_3, false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[iVar0 /*9*/].f_3))
								{
									VEHICLE::REMOVE_VEHICLE_RECORDING(Local_249[iVar0 /*9*/].f_4, sLocal_169);
								}
							}
							iVar0++;
						}
						func_194(2);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.37f)
				{
					if (Local_250.f_9)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
						Local_250.f_9 = 0;
						Local_250.f_13 = 0;
						AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", true);
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_149) > 0.45f)
				{
					if (!Local_249[3 /*9*/].f_6)
					{
						func_194(3);
					}
				}
			}
			break;
	}
	if (bLocal_128 && iLocal_48 == 6)
	{
		iVar1 = 0;
		while (iVar1 < Local_249.f_0)
		{
			if (iVar1 != iLocal_154)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar1 /*9*/].f_3, false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_249[iVar1 /*9*/].f_3))
					{
						if (VEHICLE::IS_VEHICLE_SIREN_ON(Local_249[iVar1 /*9*/].f_3))
						{
							VEHICLE::SET_VEHICLE_SIREN(Local_249[iVar1 /*9*/].f_3, false);
						}
					}
				}
			}
			iVar1++;
		}
	}
	switch (iLocal_151)
	{
		case 0:
			if (func_348())
			{
				iLocal_151++;
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
			{
				iLocal_151++;
			}
			break;
		case 2:
			if (func_347())
			{
				iLocal_151++;
			}
			break;
		case 3:
			bVar2 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
				{
					fVar3 = MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iLocal_52[iVar0]) - Local_120[iVar0 /*3*/].f_2));
					if (fVar3 >= 180f)
					{
						fVar3 = (fVar3 - 360f);
					}
					if (fVar3 < -180f)
					{
						fVar3 = (fVar3 + 360f);
					}
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_52[iVar0], true), Local_119[iVar0 /*3*/]) > 2f || fVar3 > 20f)
					{
						bVar2 = false;
					}
				}
				iVar0++;
			}
			if (bVar2)
			{
				iLocal_151++;
			}
			break;
		case 4:
			if (func_346())
			{
				iLocal_151++;
			}
			break;
		case 5:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_147))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_147) >= 1f)
				{
					iLocal_151++;
				}
			}
			break;
		case 6:
			if (func_345())
			{
				STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup_setup1");
				iLocal_151++;
			}
			break;
	}
	switch (iLocal_152)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_169);
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
			if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_169) && STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1leadinoutrbhs_int_1")) && (MISC::GET_GAME_TIMER() - iLocal_155) > 14000)
			{
				if (func_344())
				{
					iLocal_152++;
				}
			}
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && !PED::IS_PED_INJURED(iLocal_230))
			{
				VEHICLE::SET_VEHICLE_ALARM(iLocal_231, true);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_231, 7, sLocal_169, true);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_231, 0.85f);
				iLocal_152++;
			}
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && !PED::IS_PED_INJURED(iLocal_230))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_231))
				{
					__LIB_0__::func_640(iLocal_230, "FIGHT_RUN", 10);
					VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_169);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_231, false, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_304);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_231, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -76.8476f, 6417.1646f, 30.4902f, 2f, -1, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -59.8699f, 6423.774f, 30.4862f, 2f, -1, 0.25f, 0, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -63.1039f, 6427.249f, 30.4869f, 2f, -1, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_304);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_230, iLocal_304);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_304);
					iLocal_152++;
				}
				else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_231))
				{
					if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_231))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_231, true) - Vector(2f, 0f, 0f) };
						Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_231, 0f, __LIB_0__::func_331(((ENTITY::GET_ENTITY_SPEED(iLocal_231) / 10f) + 12f), 12f, 25f), 2f) };
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var4, Var5, 3.5f, false, true, 0))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_231, 786469);
						}
					}
					if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_231))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_231, true)) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_231) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_63, iLocal_231))
							{
								VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_231, 786469);
							}
						}
					}
				}
			}
			if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) || PED::IS_PED_INJURED(iLocal_230)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_231, PLAYER::PLAYER_PED_ID(), true))) || (!PED::IS_PED_INJURED(iLocal_230) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_230, PLAYER::PLAYER_PED_ID(), true)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_231, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_231))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_231);
					}
				}
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_230) && !PED::IS_PED_INJURED(iLocal_230))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_230, -64.708885f, 6428.8228f, 30.487309f, -60.184513f, 6424.3457f, 35.23688f, 3.75f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_230))
					{
						RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
						PED::DELETE_PED(&iLocal_230);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_230, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_230, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 3))
						{
							TASK::TASK_PLAY_ANIM(iLocal_230, "missheistpaletoscore1leadinoutrbhs_int_1", "_leadin_trevor", 4f, -4f, -1, 1, 0f, false, false, false);
							iLocal_152++;
						}
					}
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_230) && !PED::IS_PED_INJURED(iLocal_230))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_230) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_230, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 400f)
				{
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
					PED::DELETE_PED(&iLocal_230);
				}
			}
			break;
	}
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(178228075, true);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(1852297978, true);
}

bool func_344()//Position - 0x1D02A
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_230))
	{
		STREAMING::REQUEST_MODEL(joaat("ruffian"));
		STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_02"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("ruffian")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_02")))
		{
			iLocal_231 = VEHICLE::CREATE_VEHICLE(joaat("ruffian"), Local_108, fLocal_109, true, true, false);
			iLocal_230 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_231, 26, joaat("A_M_Y_GenStreet_02"), -1, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_230, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_230, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_230, 4, 0, 0, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_231, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_231, 3000f);
			AUDIO::SET_VEHICLE_STARTUP_REV_SOUND(iLocal_231, "Trevor_Revs_Off", "PALETO_SCORE_SETUP_SOUNDS");
			ENTITY::SET_ENTITY_HEALTH(iLocal_231, 3000, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_231, 3);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_230, 17, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_230, 128, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iLocal_230, 1024, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_GenStreet_02"));
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_230, 3);
			AUDIO::SET_VEH_RADIO_STATION(iLocal_231, AUDIO::GET_RADIO_STATION_NAME(6));
			PED::SET_PED_HELMET(iLocal_230, false);
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_230) && ENTITY::DOES_ENTITY_EXIST(iLocal_231));
}

int func_345()//Position - 0x1D140
{
	int iVar0;
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup2");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup2"))
	{
		if (((!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1])) && !PED::IS_PED_INJURED(iLocal_52[2])) && !PED::IS_PED_INJURED(iLocal_52[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_52[iVar0]);
				iVar0++;
			}
			iLocal_148 = PED::CREATE_SYNCHRONIZED_SCENE(Local_110, Local_111, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[0], iLocal_148, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_manager", 8f, -4f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[1], iLocal_148, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk1", 8f, -4f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[2], iLocal_148, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk2", 8f, -4f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[3], iLocal_148, "missheistpaletoscoresetup_setup2", "cops_response_waitloop_bank_clerk3", 8f, -4f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_148, true);
			return 1;
		}
	}
	return 0;
}

int func_346()//Position - 0x1D260
{
	int iVar0;
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
	{
		if (((!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1])) && !PED::IS_PED_INJURED(iLocal_52[2])) && !PED::IS_PED_INJURED(iLocal_52[3]))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_52[iVar0]);
				iVar0++;
			}
			iLocal_147 = PED::CREATE_SYNCHRONIZED_SCENE(Local_110, Local_111, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[0], iLocal_147, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", 4f, -8f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[1], iLocal_147, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", 4f, -8f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[2], iLocal_147, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", 4f, -8f, 1, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[3], iLocal_147, "missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", 4f, -8f, 1, 0, 1000f, 0);
			return 1;
		}
	}
	return 0;
}

int func_347()//Position - 0x1D369
{
	int iVar0;
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup1");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup1"))
	{
		Local_119[0 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", Local_110, Local_111, 0f, 2) };
		Local_119[1 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", Local_110, Local_111, 0f, 2) };
		Local_119[2 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", Local_110, Local_111, 0f, 2) };
		Local_119[3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", Local_110, Local_111, 0f, 2) };
		Local_120[0 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_manager", Local_110, Local_111, 0f, 2) };
		Local_120[1 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk1", Local_110, Local_111, 0f, 2) };
		Local_120[2 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk2", Local_110, Local_111, 0f, 2) };
		Local_120[3 /*3*/] = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missheistpaletoscoresetup_setup1", "cops_response_intro_bank_clerk3", Local_110, Local_111, 0f, 2) };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_52[iVar0], Local_119[iVar0 /*3*/], 1f, -1, 0.25f, 512, Local_120[iVar0 /*3*/].f_2);
			}
			iVar0++;
		}
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, true, false);
		return 1;
	}
	return 0;
}

int func_348()//Position - 0x1D4CD
{
	int iVar0;
	int iVar1;
	STREAMING::REQUEST_MODEL(joaat("A_M_M_Business_01"));
	STREAMING::REQUEST_MODEL(joaat("A_F_Y_Business_01"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Business_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Business_01")))
	{
		if (iLocal_253 == -1)
		{
			iLocal_253 = 0;
		}
		if (iLocal_253 == 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[0]))
		{
			iLocal_52[0] = PED::CREATE_PED(4, joaat("A_M_M_Business_01"), Local_251[0 /*3*/], fLocal_252[0], true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[0], 11, 0, 0, 0);
		}
		if (iLocal_253 == 1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[1]))
		{
			iLocal_52[1] = PED::CREATE_PED(5, joaat("A_F_Y_Business_01"), Local_251[1 /*3*/], fLocal_252[1], true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[1], 4, 0, 1, 0);
		}
		if (iLocal_253 == 2 && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[2]))
		{
			iLocal_52[2] = PED::CREATE_PED(5, joaat("A_F_Y_Business_01"), Local_251[2 /*3*/], fLocal_252[2], true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[2], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[2], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[2], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[2], 4, 1, 0, 0);
		}
		if (iLocal_253 == 3 && !ENTITY::DOES_ENTITY_EXIST(iLocal_52[3]))
		{
			iLocal_52[3] = PED::CREATE_PED(4, joaat("A_M_M_Business_01"), Local_251[3 /*3*/], fLocal_252[3], true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[3], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[3], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[3], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_52[3], 11, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 < iLocal_52)
			{
				if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_52[iVar0]);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_52[iVar0], true, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_52[iVar0], 17, true);
					PED::SET_PED_HEARING_RANGE(iLocal_52[iVar0], 15f);
					PED::SET_PED_SEEING_RANGE(iLocal_52[iVar0], 15f);
					PED::SET_PED_CONFIG_FLAG(iLocal_52[iVar0], 118, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_52[iVar0], true);
					PED::SET_PED_KEEP_TASK(iLocal_52[iVar0], true);
				}
				iVar0++;
			}
			iLocal_253 = -1;
		}
		else
		{
			iLocal_253++;
		}
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < iLocal_52)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_349()//Position - 0x1D773
{
	int iVar0;
	STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup_setup3");
	if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscoresetup_setup3"))
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_52[0]) && !PED::IS_PED_INJURED(iLocal_52[1])) && !PED::IS_PED_INJURED(iLocal_52[2])) && !PED::IS_PED_INJURED(iLocal_52[3])) && !PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][0])) && !PED::IS_PED_INJURED(Local_249[iLocal_154 /*9*/][1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iLocal_154 /*9*/].f_3, false))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				TASK::CLEAR_PED_TASKS(iLocal_52[iVar0]);
				iVar0++;
			}
			TASK::CLEAR_PED_TASKS(Local_249[iLocal_154 /*9*/][0]);
			TASK::CLEAR_PED_TASKS(Local_249[iLocal_154 /*9*/][1]);
			iLocal_149 = PED::CREATE_SYNCHRONIZED_SCENE(Local_110, Local_111, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_249[iLocal_154 /*9*/][0], iLocal_149, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Driver", 1000f, -1000f, 20, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_249[iLocal_154 /*9*/][1], iLocal_149, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Cop_Passenger", 1000f, -1000f, 20, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[0], iLocal_149, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Manager", 4f, -4f, 17, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[1], iLocal_149, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk1", 4f, -4f, 17, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[2], iLocal_149, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk2", 4f, -4f, 17, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_52[3], iLocal_149, "missheistpaletoscoresetup_setup3", "Cops_Response_Outro_Bank_Clerk3", 4f, -4f, 17, 0, 1000f, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_249[iLocal_154 /*9*/].f_3, false);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_249[iLocal_154 /*9*/].f_3, iLocal_149, "Cops_Response_Outro_CAR", "missheistpaletoscoresetup_setup3", 1000f, -1000f, 32 | 1 | 4, 1000f);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_249[iLocal_154 /*9*/].f_3);
			return 1;
		}
	}
	return 0;
}

void func_350(int iParam0, struct<3> Param1, struct<3> Param2, var uParam3, float fParam4, float fParam5)//Position - 0x1D97F
{
	var uVar0[4];
	ENTITY::SET_ENTITY_COORDS(iParam0, __LIB_1__::func_576(Param1, Param2, *fParam5), true, false, false, true);
	MISC::SLERP_NEAR_QUATERNION(*fParam5, (*uParam3)[0], (*uParam3)[1], (*uParam3)[2], (*uParam3)[3], (*fParam4)[0], (*fParam4)[1], (*fParam4)[2], (*fParam4)[3], &(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]));
	ENTITY::SET_ENTITY_QUATERNION(iParam0, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
}

int func_352(bool bParam0)//Position - 0x1DA1D
{
	int iVar0;
	char cVar1[24];
	int iVar2;
	iVar0 = 0;
	STREAMING::REQUEST_MODEL(joaat("sheriff"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_169);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_169);
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_169);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_169);
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_169)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, sLocal_169)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_169)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_169))
	{
		iVar0 = 0;
		while (iVar0 < Local_249.f_0)
		{
			Local_249[iVar0 /*9*/] = { func_353(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iVar0 + 1, 0f, sLocal_169), 0f, iVar0 + 1) };
			if ((!PED::IS_PED_INJURED(Local_249[iVar0 /*9*/][0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar0 /*9*/].f_3, false)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_249[iVar0 /*9*/].f_4, sLocal_169))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_249[iVar0 /*9*/].f_3, true, true, false);
				VEHICLE::SET_VEHICLE_SIREN(Local_249[iVar0 /*9*/].f_3, !bParam0);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_249[iVar0 /*9*/].f_3, Local_249[iVar0 /*9*/].f_4, sLocal_169, true);
				if (bParam0)
				{
					VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_249[iVar0 /*9*/].f_3);
				}
				StringCopy(&cVar1, "cop car ", 24);
				StringIntConCat(&cVar1, iVar0, 24);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(Local_249[iVar0 /*9*/].f_3, &cVar1);
			}
			iVar0++;
		}
	}
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Local_249.f_0)
	{
		if ((!ENTITY::DOES_ENTITY_EXIST(Local_249[iVar0 /*9*/].f_3) || !ENTITY::DOES_ENTITY_EXIST(Local_249[iVar0 /*9*/][0])) || !ENTITY::DOES_ENTITY_EXIST(Local_249[iVar0 /*9*/][1]))
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return iVar2;
}

struct<9> func_353(struct<3> Param0, float fParam1, var uParam2)//Position - 0x1DBD5
{
	struct<9> Var0;
	Var0 = 2;
	if (STREAMING::HAS_MODEL_LOADED(joaat("sheriff")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01")))
	{
		Var0.f_5 = 1;
		Var0.f_4 = uParam2;
		Var0.f_3 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Param0, fParam1, true, true, false);
		Var0[0] = PED::CREATE_PED_INSIDE_VEHICLE(Var0.f_3, 6, joaat("S_M_Y_Cop_01"), -1, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(Var0[0], joaat("WEAPON_PISTOL"), -1, false, true);
		Var0[1] = PED::CREATE_PED_INSIDE_VEHICLE(Var0.f_3, 6, joaat("S_M_Y_Cop_01"), 0, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(Var0[1], joaat("WEAPON_PISTOL"), -1, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Var0[0], iLocal_79);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Var0[1], iLocal_79);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(Var0.f_3, true);
		Var0.f_7 = 0;
	}
	return Var0;
}

int func_354(var uParam0)//Position - 0x1DC96
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(*uParam0, true)) < 22500f)
		{
			return 1;
		}
	}
	return 0;
}

int func_355()//Position - 0x1DCCC
{
	int iVar0;
	float fVar1;
	int iVar2;
	fVar1 = 99999f;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Local_249.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_249[iVar0 /*9*/].f_3))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar0 /*9*/].f_3, false))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_249[iVar0 /*9*/].f_3, true)) < (fVar1 * fVar1))
				{
					iVar2 = iVar0;
					fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_249[iVar0 /*9*/].f_3, true));
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_356()//Position - 0x1DD5A
{
	Local_118 = { Local_118 + Local_117 - Local_118 * Vector(fLocal_146, fLocal_146, fLocal_146) };
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_60 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_118, true, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_60, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_60, false, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_60, Local_118, true, false, false, true);
	}
	func_357(&Local_82, iLocal_60, "CBH_FCUSHLP", 0, 1, 1, 1);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) || bLocal_138)
	{
		if (__LIB_0__::func_1("CBH_FCUSHLP"))
		{
			if (!iLocal_139)
			{
				HUD::CLEAR_HELP(false);
				iLocal_139 = 1;
			}
		}
		else if (!bLocal_138)
		{
			if (iLocal_137)
			{
				iLocal_137 = 0;
			}
			if (iLocal_139)
			{
				iLocal_139 = 0;
			}
		}
	}
}

void func_357(bool bParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1DE28
{
	func_358(bParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_358(bool bParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x1DE45
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_39__::func_126(bParam0, 0, 0);
	}
	bParam0->f_6 = 2;
	func_359(bParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_359(bool bParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x1DE7D
{
	int iVar0;
	int iVar1;
	if (bParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (__LIB_0__::func_1(iVar0))
	{
		__LIB_0__::func_187();
	}
	if (__LIB_0__::func_339(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_376(bParam0, bParam5, bParam7, 0))
			{
				func_373(bParam0, iParam1, Param2, iParam4);
			}
			if (*bParam0)
			{
				*bParam0 = 0;
			}
			else if (bParam0->f_6 == 2)
			{
				if (__LIB_13__::func_769(iVar0))
				{
					if ((MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!__LIB_0__::func_1(iVar0))
							{
								__LIB_0__::func_151(iVar0, -1);
								bParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									__LIB_0__::func_333(1);
								}
							}
						}
					}
				}
			}
			else if (__LIB_13__::func_769(iVar0))
			{
				if (MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!__LIB_0__::func_1(iVar0))
						{
							__LIB_0__::func_151(iVar0, -1);
							bParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								__LIB_0__::func_333(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (__LIB_0__::func_1(sParam3))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						__LIB_39__::func_126(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						__LIB_39__::func_126(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						__LIB_39__::func_126(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						__LIB_39__::func_126(bParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						__LIB_39__::func_126(bParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					__LIB_39__::func_126(bParam0, iVar0, 1);
				}
			}
			if (!func_376(bParam0, bParam5, bParam7, 0))
			{
				if ((!*bParam0 && !bParam0->f_1) && !func_361(bParam0))
				{
					func_360(bParam0);
				}
			}
		}
	}
	else
	{
		__LIB_39__::func_126(bParam0, iVar0, 0);
	}
}

void func_360(bool bParam0)//Position - 0x1E1EA
{
	if (__LIB_0__::func_339(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (bParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			bParam0->f_11 = 0;
		}
	}
	bParam0->f_2 = -1;
	*bParam0 = 1;
}

int func_361(bool bParam0)//Position - 0x1E253
{
	int iVar0;
	if (bParam0->f_2 > 0)
	{
		iVar0 = (bParam0->f_10 / 2);
		if (bParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

void func_373(bool bParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x1E7BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (Global_1581357 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		__LIB_39__::func_126(bParam0, 0, 0);
	}
	if (__LIB_0__::func_78(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!__LIB_1__::func_394())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = bParam0->f_9;
	iVar2 = bParam0->f_10;
	if (iParam3 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	bParam0->f_11 = 1;
	bParam0->f_8 = MISC::GET_GAME_TIMER();
	bParam0->f_1 = 1;
	*bParam0 = 0;
}

int func_376(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1E8FB
{
	if (bParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	switch (bParam0->f_5)
	{
		case 0:
			bParam0->f_7 = 0;
			if (bParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (__LIB_13__::func_773(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 1;
						bParam0->f_7 = 1;
					}
				}
				else if (__LIB_13__::func_772(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			else if (bParam0->f_6 == 1)
			{
				if (__LIB_13__::func_772(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			else if (bParam0->f_6 == 2)
			{
				if (__LIB_13__::func_773(bParam1, bParam2, bParam3))
				{
					bParam0->f_4 = MISC::GET_GAME_TIMER();
					bParam0->f_5 = 1;
					bParam0->f_7 = 1;
				}
			}
			if (func_361(bParam0))
			{
				bParam0->f_7 = 1;
				bParam0->f_5 = 4;
			}
			break;
		case 1:
			if ((MISC::GET_GAME_TIMER() - bParam0->f_4) <= 500)
			{
				if (bParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!__LIB_13__::func_773(bParam1, bParam2, bParam3))
						{
							bParam0->f_4 = MISC::GET_GAME_TIMER();
							bParam0->f_5 = 3;
						}
					}
					else if (!__LIB_13__::func_772(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
				else if (bParam0->f_6 == 1)
				{
					if (!__LIB_13__::func_772(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
				else if (bParam0->f_6 == 2)
				{
					if (!__LIB_13__::func_773(bParam1, bParam2, bParam3))
					{
						bParam0->f_4 = MISC::GET_GAME_TIMER();
						bParam0->f_5 = 3;
					}
				}
			}
			else
			{
				bParam0->f_5 = 2;
			}
			break;
		case 2:
			if (bParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!__LIB_13__::func_773(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (!__LIB_13__::func_772(bParam1, bParam2, bParam3))
				{
					bParam0->f_5 = 0;
				}
			}
			else if (bParam0->f_6 == 1)
			{
				if (!__LIB_13__::func_772(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					bParam0->f_5 = 0;
				}
			}
			else if (bParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					bParam0->f_5 = 0;
				}
				else if (!__LIB_13__::func_773(bParam1, bParam2, bParam3))
				{
					bParam0->f_5 = 0;
				}
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - bParam0->f_4) > 500)
			{
				if (bParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (__LIB_13__::func_771(bParam1, bParam2, bParam3))
						{
							bParam0->f_5 = 0;
						}
					}
					else if (__LIB_13__::func_770(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (bParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || __LIB_13__::func_770(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
				else if (bParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						bParam0->f_5 = 0;
					}
					else if (__LIB_13__::func_771(bParam1, bParam2, bParam3))
					{
						bParam0->f_5 = 0;
					}
				}
			}
			break;
		case 4:
			if (!func_361(bParam0))
			{
				bParam0->f_5 = 0;
			}
			break;
	}
	if (!__LIB_0__::func_669(bParam1, bParam2, bParam3))
	{
		bParam0->f_5 = 0;
		bParam0->f_7 = 0;
	}
	if (bParam0->f_7)
	{
		__LIB_0__::func_187();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_383()//Position - 0x1EE22
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && func_384(1))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_55))
			{
				HUD::REMOVE_BLIP(&iLocal_55);
			}
			switch (iLocal_303)
			{
				case 0:
					if (!HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						iLocal_54 = __LIB_0__::func_488(Local_98, 1);
						TASK::TASK_CLEAR_LOOK_AT(iLocal_51);
						TASK::TASK_CLEAR_LOOK_AT(uLocal_186[2]);
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -86.590034f, 6420.4653f, 30.214172f, -91.02832f, 6416.4277f, 34.71599f, 5.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -89.0773f, 6420.377f, 31.0252f, 1f, 1f, 2.5f, true, true, 0))
						{
							Local_117 = { Local_113 };
							HUD::REMOVE_BLIP(&iLocal_54);
							iLocal_303++;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_166, fLocal_167, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_63) < 0.1f)
						{
							Local_117 = { Local_113 };
							HUD::REMOVE_BLIP(&iLocal_54);
							iLocal_303 = 2;
						}
					}
					break;
				case 1:
					if (__LIB_0__::func_213(iLocal_63, 3f, 3, 1056964608, 0, 1, 0))
					{
						iLocal_303++;
					}
					break;
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_51, iLocal_60))
						{
							TASK::TASK_LOOK_AT_COORD(iLocal_51, Local_113, -1, 16, 4);
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(uLocal_186[2], iLocal_60))
						{
							TASK::TASK_LOOK_AT_COORD(uLocal_186[2], Local_113, -1, 16, 4);
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60))
						{
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_113, -1, 16, 4);
						}
					}
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_166, fLocal_167, false, true, 0))
					{
						iLocal_303 = 0;
					}
					break;
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_54))
			{
				HUD::REMOVE_BLIP(&iLocal_54);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_55))
			{
				iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
				__LIB_39__::func_125(&Local_245);
			}
			func_390();
		}
	}
}

int func_384(bool bParam0)//Position - 0x1F033
{
	if (bParam0)
	{
		return ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !PED::IS_PED_INJURED(uLocal_186[2])) && !PED::IS_PED_INJURED(iLocal_51));
	}
	else
	{
		return (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && !PED::IS_PED_INJURED(uLocal_186[2]));
	}
	return 0;
}

void func_385()//Position - 0x1F084
{
	bool bVar0;
	struct<6> Var1;
	if (iLocal_163 == -1)
	{
		if (Local_243.f_1)
		{
			iLocal_163 = MISC::GET_GAME_TIMER();
		}
	}
	bLocal_135 = (MISC::GET_GAME_TIMER() - iLocal_163) < 5000;
	if ((((MISC::GET_GAME_TIMER() - iLocal_155) > 5000 && func_389()) && !PED::IS_PED_INJURED(uLocal_186[2])) && !PED::IS_PED_INJURED(iLocal_51))
	{
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)) && !bLocal_126) && !bLocal_134)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		if (__LIB_0__::func_75())
		{
			Var1 = { __LIB_0__::func_486() };
		}
		switch (iLocal_159)
		{
			case 0:
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_169);
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, sLocal_169);
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_169);
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_169);
				func_387("RBS1_HIDE1", bVar0, (MISC::GET_GAME_TIMER() - iLocal_155), 5000, 6000);
				if (!__LIB_0__::func_75() && (MISC::GET_GAME_TIMER() - iLocal_155) > 0)
				{
					bLocal_267 = false;
					iLocal_266 = 0;
					StringCopy(&cLocal_268, "", 24);
					iLocal_159++;
				}
				break;
			case 1:
				func_387("RBS1_HIDE2", bVar0, (MISC::GET_GAME_TIMER() - iLocal_155), 18000, 20000);
				if ((!__LIB_0__::func_75() || bLocal_267) && (MISC::GET_GAME_TIMER() - iLocal_155) > 20000)
				{
					bLocal_267 = false;
					iLocal_266 = 0;
					StringCopy(&cLocal_268, "", 24);
					iLocal_301 = 0;
					iLocal_159++;
				}
				break;
			case 2:
				func_387("RBS1_HIDE3", bVar0, (MISC::GET_GAME_TIMER() - iLocal_155), 35000, 39000);
				if (!iLocal_301 && iLocal_266)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_186[2], "missrbhsig_2", "four_cars_trevor", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_186[2], "missrbhsig_2", "four_cars_trevor", 2f, -2f, -1, 0, 0f, false, false, false);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51, "missrbhsig_2", "four_cars_lester", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_51, "missrbhsig_2", "four_cars_lester", 2f, -2f, -1, 0, 0f, false, false, false);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_186[2], "missrbhsig_2", "four_cars_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51, "missrbhsig_2", "four_cars_Lester", 3))
					{
						iLocal_301 = 1;
					}
				}
				if ((!__LIB_0__::func_75() || bLocal_267) && (MISC::GET_GAME_TIMER() - iLocal_155) > 39000)
				{
					bLocal_267 = false;
					iLocal_266 = 0;
					StringCopy(&cLocal_268, "", 24);
					iLocal_301 = 0;
					iLocal_159++;
				}
				break;
			case 3:
				func_387("RBS1_HIDE4", bVar0, (MISC::GET_GAME_TIMER() - iLocal_155), 59000, 59000);
				if (!iLocal_301 && iLocal_266)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_186[2], "missrbhsig_2", "what_do_you_got_trevor", 3))
					{
						TASK::TASK_PLAY_ANIM(uLocal_186[2], "missrbhsig_2", "what_do_you_got_trevor", 2f, -2f, -1, 0, 0f, false, false, false);
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51, "missrbhsig_2", "what_do_you_got_lester", 3))
					{
						TASK::TASK_PLAY_ANIM(iLocal_51, "missrbhsig_2", "what_do_you_got_lester", 2f, -2f, -1, 0, 0f, false, false, false);
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_186[2], "missrbhsig_2", "what_do_you_got_trevor", 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_51, "missrbhsig_2", "what_do_you_got_Lester", 3))
					{
						iLocal_301 = 1;
					}
				}
				if ((!__LIB_0__::func_75() || bLocal_267) && (MISC::GET_GAME_TIMER() - iLocal_155) > 59000)
				{
					bLocal_267 = false;
					iLocal_266 = 0;
					iLocal_301 = 0;
					StringCopy(&cLocal_268, "", 24);
					iLocal_159++;
				}
				break;
			case 4:
				break;
		}
	}
	else if (!func_389() && iLocal_159 > 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_160) > 5000 && !bLocal_135)
		{
			if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_CNTSEE", 8, 0, 0, 0))
			{
				iLocal_160 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((bLocal_126 && (bLocal_267 || __LIB_15__::func_305())) && !iLocal_127)
	{
		__LIB_0__::func_638();
		if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_HOTTY", 8, 0, 0, 0))
		{
			iLocal_127 = 1;
		}
	}
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -77.35259f, 6418.2715f, 25.794516f, -165.42726f, 6505.104f, 33.55246f, 100f, false, true, 0) && (MISC::GET_GAME_TIMER() - iLocal_158) > 5000) && !__LIB_0__::func_75())
	{
		if (PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !bLocal_135))
		{
			__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_MESS", 8, 0, 0, 0);
			iLocal_158 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_387(char* sParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1F554
{
	if (bParam1)
	{
		if (!iLocal_266)
		{
			if (iParam2 < iParam3)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (__LIB_17__::func_243(&Local_233, cLocal_168, sParam0, 8, 0, 0, 0))
					{
						bLocal_267 = false;
						iLocal_266 = 1;
					}
				}
			}
		}
		if (bLocal_267)
		{
			if (iParam2 < iParam4)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (__LIB_17__::func_244(&Local_233, cLocal_168, sParam0, &cLocal_268, 8, 0, 0))
					{
						bLocal_267 = false;
					}
				}
			}
		}
	}
	if (!bParam1)
	{
		if (!bLocal_267)
		{
			cLocal_268 = { __LIB_0__::func_485() };
			__LIB_0__::func_638();
			bLocal_267 = true;
		}
	}
}

bool func_389()//Position - 0x1F604
{
	return (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, -113.91455f, 6415.774f, 20.924225f, -151.94669f, 6377.9424f, 51.45014f, 50.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, -158.92268f, 6484.1753f, 19.422247f, -89.311874f, 6412.26f, 57.34415f, 50.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, -135.83235f, 6496.8413f, -8.871904f, -124.46264f, 6508.426f, 56.73236f, 14.5f, false, true, 0)));
}

void func_390()//Position - 0x1F6A8
{
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, Local_165, Local_166, fLocal_167, false, true, 0))
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !PED::IS_PED_INJURED(iLocal_51))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_265) > 5000 && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_51, true)) < 15f)
			{
				if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_GETIN", 8, 0, 0, 0))
				{
					iLocal_265 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_391(int iParam0, bool bParam1)//Position - 0x1F729
{
	struct<3> Var0;
	struct<3> Var1;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { Vector(146.0607f, 4927.5376f, -491.5252f) - Vector(20f, 50f, 50f) };
				Var1 = { Vector(146.0607f, 4927.5376f, -491.5252f) + Vector(20f, 50f, 50f) };
				break;
			case 1:
				Var0 = { Local_113 - Vector(10f, 20f, 20f) };
				Var1 = { Local_113 + Vector(20f, 20f, 20f) };
				break;
			case 2:
				Var0 = { Vector(28.283587f, 6508.6714f, -120.00731f) - Vector(1.75f, 32.5f, 19.75f) };
				Var1 = { Vector(28.283587f, 6508.6714f, -120.00731f) + Vector(1.75f, 32.5f, 19.75f) };
				break;
			case 3:
				Var0 = { Local_100 - Vector(100f, 50f, 50f) };
				Var1 = { Local_100 + Vector(100f, 50f, 50f) };
				break;
			case 4:
				Var0 = { Local_98 - Vector(15f, 35f, 35f) };
				Var1 = { Local_98 + Vector(15f, 35f, 35f) };
				break;
			case 5:
				Var0 = { Local_93 - Vector(10f, 10f, 10f) };
				Var0 = { Local_93 + Vector(10f, 10f, 10f) };
				break;
		}
		if (!__LIB_39__::func_120(iParam0))
		{
			iLocal_77[iParam0] = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var1, false, true, true, true);
			MISC::SET_BIT(&uLocal_78, iParam0);
		}
	}
	else if (__LIB_39__::func_120(iParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_77[iParam0], false);
		MISC::CLEAR_BIT(&uLocal_78, iParam0);
	}
}

void func_393()//Position - 0x1F913
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -201.02716f, 6374.6523f, 28.046612f, -41.19576f, 6532.6206f, 40.490757f, 157.75f, false, true, 0))
	{
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_325();
		SYSTEM::WAIT(0);
		func_98("CBH_LFTAREA");
	}
	if (!iLocal_302)
	{
		iVar0 = 0;
		while (iVar0 < Local_249.f_0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iVar0 /*9*/].f_3, false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_249[iVar0 /*9*/].f_3, -145.08554f, 6484.485f, 27.72799f, -92.52125f, 6431.2905f, 40.35595f, 58f, false, true, 0))
				{
					iLocal_302 = 1;
				}
			}
			iVar0++;
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_166, fLocal_167, false, true, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, Local_165, Local_166, fLocal_167, false, true, 0))
	{
		if (iLocal_50 == 0)
		{
			if (func_394(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_50 = 2;
			}
		}
		if (iLocal_50 == 0)
		{
			if (func_394(iLocal_63))
			{
				iLocal_50 = 3;
			}
		}
		if (iLocal_50 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_166, fLocal_167, false, true, 0))
			{
				func_98("CBH_COPMISS");
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, Local_165, Local_166, fLocal_167, false, true, 0))
			{
				func_98("CBH_COPMILT");
			}
		}
	}
	if (func_195(iLocal_63, 0))
	{
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_429();
		if (bLocal_128)
		{
			iLocal_50 = 2;
		}
		else
		{
			iLocal_50 = 1;
		}
	}
	if (func_94(uLocal_186[2], &Local_247))
	{
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_429();
		func_98("CBH_AB2BOTH");
	}
	if (bLocal_128)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_166, fLocal_167, false, true, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, Local_165, Local_166, fLocal_167, false, true, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_63, -104.1284f, 6385.127f, 22.438019f, -54.79927f, 6433.795f, 61.377438f, 26.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -104.1284f, 6385.127f, 22.438019f, -54.79927f, 6433.795f, 61.377438f, 26.75f, false, true, 0))
			{
				func_98("CBH_LFTAREA");
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_166, fLocal_167, false, true, 0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			iLocal_50 = 2;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_50 = 2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_231))
		{
			if (((!PED::IS_PED_INJURED(iLocal_230) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_231, PLAYER::PLAYER_PED_ID(), true)) && (PED::IS_PED_IN_VEHICLE(iLocal_230, iLocal_231, false) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_230, iLocal_231, 5f, 5f, 3f, false, true, 0)))
			{
				iLocal_50 = 4;
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_230, PLAYER::PLAYER_PED_ID(), true) && !ENTITY::IS_ENTITY_DEAD(iLocal_230, false))
			{
				iLocal_50 = 4;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
	{
		if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iLocal_231))
		{
			if (bLocal_128)
			{
				iLocal_50 = 2;
			}
			else
			{
				iLocal_50 = 1;
			}
		}
	}
	if (iLocal_50 != 0)
	{
		func_33(11);
	}
}

int func_394(int iParam0)//Position - 0x1FC70
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -90.57478f, 6424.711f, 40.489937f, -170.8789f, 6505.736f, 28.489124f, 69f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -168.82529f, 6502.4287f, 39.783463f, -206.7632f, 6527.751f, 10.097977f, 69f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_395()//Position - 0x1FCE7
{
	bool bVar0;
	int iVar1[4];
	int iVar2;
	int iVar3;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	__LIB_0__::func_496();
	if (ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
	{
		if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_250.f_0, PLAYER::PLAYER_PED_ID(), true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(3, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f)) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(25, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, -1.5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_250.f_0, 0f, 1.5f, 1.5f), 3f))
		{
			Local_250.f_13 = (Local_250.f_13 + (Local_250.f_14 - ENTITY::GET_ENTITY_HEALTH(Local_250.f_0)));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_250.f_0);
			Local_250.f_14 = ENTITY::GET_ENTITY_HEALTH(Local_250.f_0);
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_98("CBH_BANKALERT");
	}
	if (CAM::DOES_CAM_EXIST(iLocal_65))
	{
		bVar0 = false;
		__LIB_0__::func_341(&(iVar1[0]), &(iVar1[1]), &(iVar1[2]), &(iVar1[3]), 0, 0);
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (MISC::ABSI(iVar1[iVar2]) > 0)
			{
				bVar0 = true;
			}
			iVar2++;
		}
		if ((((((((((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 29 /*INPUT_SPECIAL_ABILITY_SECONDARY*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(1.5552f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2.8327f, 1f);
			CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_65, false);
		}
	}
	else
	{
		func_400(&Local_82, Local_115, 0, joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"), 1, 0, 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
	{
		if (!func_85() && !CAM::DOES_CAM_EXIST(iLocal_65))
		{
			__LIB_39__::func_119(500);
			func_33(9);
		}
		else
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_104) <= 10000f)
			{
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
				if (!HUD::DOES_BLIP_EXIST(iLocal_58))
				{
					iLocal_58 = __LIB_0__::func_643(Local_250.f_0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_58, "CBH_BLIPALARM");
					iLocal_290 = 0;
					HUD::SET_BLIP_AS_FRIENDLY(iLocal_58, false);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					HUD::REMOVE_BLIP(&iLocal_55);
				}
				if (iLocal_150 > 0)
				{
					if (__LIB_0__::func_1("CBH_FCUSALM"))
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE() || Local_82.f_1)
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				switch (iLocal_150)
				{
					case 0:
						iLocal_161 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(uLocal_186[2]))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (!PED::IS_PED_INJURED(iLocal_51))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						__LIB_0__::func_151("CBH_FCUSALM", -1);
						__LIB_39__::func_119(500);
						iLocal_150++;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						SYSTEM::SETTIMERA(0);
						break;
					case 1:
						if (!__LIB_0__::func_75())
						{
							SYSTEM::SETTIMERA(0);
							iLocal_150++;
						}
						break;
					case 2:
						if (SYSTEM::TIMERA() > 1000)
						{
							__LIB_39__::func_125(&Local_242);
							AUDIO::START_AUDIO_SCENE("PS_1_SHOOT_THE_ALARM");
							SYSTEM::SETTIMERA(0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
							iLocal_150++;
						}
						break;
					case 3:
						if (SYSTEM::TIMERA() > 5000)
						{
							iLocal_150++;
						}
						break;
					case 4:
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_63, true)) <= 625f)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -125.873146f, 6486.835f, 25.790363f, -156.4628f, 6518.3184f, 35.25981f, 55f, false, true, 0))
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_161) > 7500)
									{
										if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_GOBACK", 8, 0, 0, 0))
										{
											iLocal_161 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_161) > 7500)
								{
									if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_GETOUT", 8, 0, 0, 0))
									{
										iLocal_161 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (func_4())
							{
								if (!iLocal_291)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_161) > 15000)
									{
										if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_SHOOT", 8, 0, 0, 0))
										{
											iLocal_161 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else if ((MISC::GET_GAME_TIMER() - iLocal_161) > 7500)
								{
									if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_MISS", 8, 0, 0, 0))
									{
										iLocal_161 = MISC::GET_GAME_TIMER();
										iLocal_291 = 0;
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_161) > 7500)
							{
								if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_CLOSE", 8, 0, 0, 0))
								{
									iLocal_161 = MISC::GET_GAME_TIMER();
								}
							}
						}
						break;
				}
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, true);
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && iVar3 != joaat("WEAPON_PETROLCAN"))
				{
					iLocal_164++;
					if (!Local_250.f_9)
					{
						if (!iLocal_291)
						{
							iLocal_291 = 1;
						}
					}
				}
				if (iLocal_164 > 20 && !Local_250.f_9)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					func_98("CBH_BNKFAIL");
				}
			}
			else
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_104) > 16900f)
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_429();
					func_98("CBH_LFTAREA");
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_161) > 7500)
					{
						if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_GOBACK", 8, 0, 0, 0))
						{
							iLocal_161 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(-1000, 1000));
						}
					}
				}
				if (!iLocal_290)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_382("CBH_SHTBOX2", 7500, 1);
						iLocal_290 = 1;
					}
				}
			}
			if (func_384(1))
			{
				if (Local_250.f_9 && ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_429();
					if (!PED::IS_PED_INJURED(uLocal_186[2]))
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					}
					if (!PED::IS_PED_INJURED(iLocal_51))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_51, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_58))
					{
						__LIB_13__::func_808(&iLocal_58);
					}
					func_396(6, 1, 0);
					__LIB_39__::func_126(&Local_82, "CBH_FCUSALM", 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-135.30917f, 6479.6147f, 32.652996f, 11.75f, 6.75f, 4.5f, true, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-134.3872f, 6492.8555f, 30.955853f, 11.75f, 6.75f, 4.5f, true, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-134.50531f, 6507.014f, 30.966684f, 11.75f, 6.75f, 4.5f, true, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-135.34384f, 6520.5874f, 30.74896f, 11.75f, 6.75f, 4.5f, true, 0);
					PATHFIND::SET_PED_PATHS_IN_AREA(-116.30261f, 6492.045f, 33.905464f, 18f, 19.25f, 5.75f, true, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					func_33(6);
				}
			}
		}
	}
}

int func_396(int iParam0, bool bParam1, bool bParam2)//Position - 0x204A6
{
	int iVar0[15];
	int iVar1;
	int iVar2[15];
	int iVar3[6];
	int iVar4;
	iVar0[0] = joaat("Player_Two");
	iVar0[1] = joaat("A_M_M_Salton_02");
	iVar0[2] = joaat("premier");
	iVar0[3] = joaat("prop_ld_alarm_01");
	iVar0[4] = joaat("sheriff");
	iVar0[5] = joaat("S_M_Y_Cop_01");
	iVar0[6] = joaat("bus");
	iVar0[7] = joaat("S_M_M_LSMetro_01");
	iVar0[8] = joaat("prop_ld_alarm_01_dam");
	iVar0[9] = joaat("A_M_M_Business_01");
	iVar0[10] = joaat("A_F_Y_Business_01");
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar2[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iVar3)
	{
		iVar3[iVar1] = 0;
		iVar1++;
	}
	switch (iParam0)
	{
		case 0:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[3] = __LIB_0__::func_493(12);
			break;
		case 1:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[4] = __LIB_0__::func_493(12);
			break;
		case 2:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("bus");
			iVar2[2] = joaat("S_M_M_LSMetro_01");
			iVar2[3] = joaat("premier");
			iVar2[4] = joaat("prop_ld_alarm_01");
			iVar2[5] = __LIB_0__::func_493(12);
			break;
		case 3:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("A_M_M_Salton_02");
			iVar2[2] = joaat("bus");
			iVar2[3] = joaat("S_M_M_LSMetro_01");
			iVar2[4] = joaat("premier");
			iVar2[5] = joaat("prop_ld_alarm_01");
			iVar2[6] = __LIB_0__::func_493(12);
			break;
		case 4:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[3] = __LIB_0__::func_493(12);
			break;
		case 5:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("prop_ld_alarm_01");
			iVar2[3] = joaat("prop_ld_alarm_01_dam");
			iVar2[4] = __LIB_0__::func_493(12);
			break;
		case 6:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("sheriff");
			iVar2[3] = joaat("S_M_Y_Cop_01");
			iVar2[4] = joaat("prop_ld_alarm_01_dam");
			iVar2[5] = joaat("A_M_M_Business_01");
			iVar2[6] = joaat("A_F_Y_Business_01");
			iVar2[7] = __LIB_0__::func_493(12);
			iVar3[0] = 1;
			iVar3[1] = 2;
			iVar3[2] = 3;
			iVar3[3] = 4;
			break;
		case 7:
			iVar2[0] = joaat("Player_Two");
			iVar2[1] = joaat("premier");
			iVar2[2] = joaat("sheriff");
			iVar2[3] = joaat("S_M_Y_Cop_01");
			iVar2[4] = joaat("prop_ld_alarm_01_dam");
			iVar2[5] = joaat("A_M_M_Business_01");
			iVar2[6] = joaat("A_F_Y_Business_01");
			iVar2[7] = __LIB_0__::func_493(12);
			iVar3[0] = 1;
			iVar3[1] = 2;
			iVar3[2] = 3;
			iVar3[3] = 4;
			break;
	}
	if (bParam1)
	{
		iVar4 = 1;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (iVar2[iVar1] != 0)
			{
				STREAMING::REQUEST_MODEL(iVar2[iVar1]);
				if (!STREAMING::HAS_MODEL_LOADED(iVar2[iVar1]))
				{
					iVar4 = 0;
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			if (iVar3[iVar1] != 0)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(iVar3[iVar1], sLocal_169);
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar3[iVar1], sLocal_169))
				{
					iVar4 = 0;
				}
			}
			iVar1++;
		}
		return iVar4;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (!__LIB_39__::func_121(iVar0[iVar1], &iVar2))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
			}
			iVar1++;
		}
	}
	return 0;
}

void func_400(bool bParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x208D8
{
	int iVar0;
	if (bParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (bParam0->f_8 + bParam0->f_9))
		{
			bParam0->f_1 = 0;
		}
	}
	iVar0 = iParam2;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (__LIB_0__::func_1(iVar0))
	{
		__LIB_0__::func_187();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_376(bParam0, bParam4, bParam6, 0))
		{
			__LIB_13__::func_800(bParam0, Param1, iParam3);
		}
		if (*bParam0)
		{
			*bParam0 = 0;
		}
		else if (bParam0->f_6 == 2)
		{
			if (__LIB_13__::func_769(iVar0))
			{
				if ((MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
					{
						if (!__LIB_0__::func_1(iVar0))
						{
							__LIB_0__::func_151(iVar0, -1);
							bParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								__LIB_0__::func_333(1);
							}
						}
					}
				}
			}
		}
		else if (__LIB_13__::func_769(iVar0))
		{
			if (MISC::IS_STRING_NULL(bParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iParam5)
				{
					if (!__LIB_0__::func_1(iVar0))
					{
						__LIB_0__::func_151(iVar0, -1);
						bParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
						{
							__LIB_0__::func_333(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (__LIB_0__::func_1(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					__LIB_39__::func_126(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					__LIB_39__::func_126(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					__LIB_39__::func_126(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					__LIB_39__::func_126(bParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					__LIB_39__::func_126(bParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				__LIB_39__::func_126(bParam0, iVar0, 1);
			}
		}
		if (!func_376(bParam0, bParam4, bParam6, 0))
		{
			if ((!*bParam0 && !bParam0->f_1) && !func_361(bParam0))
			{
				func_360(bParam0);
			}
		}
	}
}

void func_403()//Position - 0x20D52
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_150)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistpaletoscore1rbhs_mcs_2"))
			{
				iLocal_289 = 0;
				iLocal_150++;
			}
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && func_384(1))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					CAM::SET_WIDESCREEN_BORDERS(true, 500);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_63, true);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 4f, -8f, -1, 16, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(iLocal_51, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 4f, -8f, -1, 16, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(uLocal_186[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 4f, -8f, -1, 16, 0f, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_250.f_0, -1, 2052, 4);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_51, Local_250.f_0, 5000, 2052, 4);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_186[2], Local_250.f_0, 7000, 2052, 4);
					}
					func_357(&Local_82, Local_250.f_0, 0, joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"), 0, 1, 1);
					HUD::CLEAR_PRINTS();
					iLocal_142 = 1;
					__LIB_39__::func_119(500);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
					iLocal_150++;
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_55))
				{
					iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
					if (!iLocal_289)
					{
						__LIB_0__::func_229("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 1);
						iLocal_289 = 1;
					}
				}
			}
			break;
		case 2:
			if (iLocal_142)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 0.13f);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_51, "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_lestercrest", 0.13f);
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 3))
				{
					ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_186[2], "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_trevor", 0.13f);
				}
				iLocal_142 = 0;
			}
			func_357(&Local_82, Local_250.f_0, 0, joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"), 0, 1, 1);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.19f)
			{
				if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_BNKBOX", 8, 0, 0, 0))
				{
					iLocal_150++;
				}
			}
			break;
		case 3:
			func_357(&Local_82, Local_250.f_0, 0, joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"), 0, 1, 1);
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missheistpaletoscore1rbhs_mcs_2", "rbhs_mcs_2_leadin_action_michael") > 0.99f) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (func_85() || __LIB_15__::func_806(0) < 500)
				{
					if (__LIB_15__::func_806(0) < 500)
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 500, false, true);
					}
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, 0);
					SYSTEM::SETTIMERA(0);
					iLocal_150++;
				}
				else
				{
					STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_WIDESCREEN_BORDERS(false, 500);
					func_33(9);
				}
			}
			break;
		case 4:
			if (SYSTEM::TIMERA() > 1000)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
				STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_WIDESCREEN_BORDERS(false, 500);
				func_33(5);
			}
			break;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_63))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_63, true, true, false);
		}
	}
}

void func_404()//Position - 0x210D5
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if ((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1)
		{
			__LIB_39__::func_126(&Local_82, 0, 0);
		}
	}
	__LIB_0__::func_496();
	if (func_384(1))
	{
		switch (iLocal_150)
		{
			case 0:
				iLocal_266 = 0;
				bLocal_267 = false;
				iLocal_286 = 0;
				iLocal_287 = 0;
				StringCopy(&cLocal_268, "", 24);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, false) && !PED::IS_PED_INJURED(iLocal_53))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_64, -222.1229f, 6146.418f, 30.2385f, 7f, 0, joaat("bus"), 786599, 50f, 10f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_64, 10f, 786597);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_53, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				MISC::CLEAR_AREA_OF_PEDS(-117.54f, 6484.41f, 30.46f, 50f, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-135.30917f, 6479.6147f, 32.652996f, 11.75f, 6.75f, 4.5f, false, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-134.3872f, 6492.8555f, 30.955853f, 11.75f, 6.75f, 4.5f, false, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-134.50531f, 6507.014f, 30.966684f, 11.75f, 6.75f, 4.5f, false, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-135.34384f, 6520.5874f, 30.74896f, 11.75f, 6.75f, 4.5f, false, 0);
				PATHFIND::SET_PED_PATHS_IN_AREA(-116.30261f, 6492.045f, 33.905464f, 18f, 19.25f, 5.75f, false, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_BANK"))
				{
					AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_BANK");
				}
				SYSTEM::SETTIMERA(0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
				iLocal_150++;
				break;
			case 1:
				if (func_409(1) && func_384(1))
				{
					__LIB_39__::func_119(500);
					if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_TOGO", 8, 0, 0, 0))
					{
						iLocal_150++;
					}
				}
				break;
			case 2:
				func_408(&iLocal_54, &iLocal_55, Local_112, &Local_240, 1, 1, 1, 0);
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_125(&Local_240);
				}
				if (SYSTEM::TIMERA() > 5000 && Local_240.f_1)
				{
					iLocal_150++;
				}
				break;
			case 3:
				func_408(&iLocal_54, &iLocal_55, Local_112, &Local_240, 1, 1, 1, 1);
				func_256("RBS1_TOBANK", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -109.772804f, 6414.3857f, 20.312847f, -151.97145f, 6458.521f, 42.391434f, 32.5f, false, true, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					__LIB_0__::func_325();
					func_396(4, 1, 0);
					iLocal_266 = 0;
					bLocal_267 = false;
					StringCopy(&cLocal_268, "", 24);
					iLocal_150++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			case 4:
				func_408(&iLocal_54, &iLocal_55, Local_112, &Local_240, 1, 1, 1, 1);
				if (SYSTEM::TIMERA() > 0 && SYSTEM::TIMERA() < 100)
				{
					TASK::TASK_LOOK_AT_COORD(iLocal_51, Local_113, 10000, 0, 2);
				}
				if (SYSTEM::TIMERA() > 200 && SYSTEM::TIMERA() < 250)
				{
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_113, 5000, 0, 2);
				}
				if (SYSTEM::TIMERA() > 300 && SYSTEM::TIMERA() < 350)
				{
					TASK::TASK_LOOK_AT_COORD(uLocal_186[2], Local_113, 7000, 0, 2);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_112, Global_19, true, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -134.72305f, 6448.3726f, 28.4724f, -127.35613f, 6440.8354f, 34.436275f, 10.75f, false, true, 0))
					{
						HUD::REMOVE_BLIP(&iLocal_54);
						SYSTEM::SETTIMERA(0);
						iLocal_150++;
					}
				}
				break;
			case 5:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				}
				if (__LIB_0__::func_213(iLocal_63, 1093140480, 1, 1056964608, 0, 1, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
					iLocal_150++;
					__LIB_0__::func_229("CBH_FOCGOD", 7500, 1);
					__LIB_0__::func_151("CBH_FCUSHLP", 15000);
					AUDIO::TRIGGER_MUSIC_EVENT("RH1_START");
					if ((CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 0 && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 2) && CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 1)
					{
						iLocal_288 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					}
					else
					{
						iLocal_288 = 5;
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			case 6:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_112, Global_19 + Vector(0f, 2f, 2f), false, true, 0))
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) || CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
						func_407(&Local_82, Local_113 + Vector(1.5f, 0f, 0f), "", joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"), 1, 0, 1);
						HUD::CLEAR_HELP(true);
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
							iLocal_150++;
						}
					}
				}
				else
				{
					if (!Local_82.f_0 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (iLocal_288 != 5)
						{
							CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_288);
							iLocal_288 = 5;
						}
					}
					HUD::CLEAR_HELP(true);
					iLocal_150 = 4;
				}
				break;
			case 7:
				if (!Local_82.f_0 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					if (iLocal_288 != 5)
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_288);
						iLocal_288 = 5;
					}
				}
				func_256("RBS1_BNKCUT", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
				if (SYSTEM::TIMERA() < 3000)
				{
					func_408(&iLocal_54, &iLocal_55, Local_97, &Local_241, 0, 1, 1, 1);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						func_408(&iLocal_54, &iLocal_55, Local_97, &Local_240, 1, 1, 1, 0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_97, Global_19, true, true, 0))
				{
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_39__::func_126(&Local_82, 0, 0);
				}
				if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63) && !__LIB_0__::func_75()) && SYSTEM::TIMERA() > 3000)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
					iLocal_266 = 0;
					bLocal_267 = false;
					SYSTEM::SETTIMERA(0);
					iLocal_150++;
					bLocal_138 = true;
					__LIB_39__::func_125(&Local_241);
					__LIB_39__::func_126(&Local_82, 0, 0);
				}
				break;
			case 8:
				if (iLocal_288 != 5)
				{
					if (!Local_82.f_0 && !CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(iLocal_288);
						iLocal_288 = 5;
					}
				}
				func_406();
				func_408(&iLocal_54, &iLocal_55, Local_97, &Local_240, 1, 1, 1, 0);
				if (!iLocal_286)
				{
					if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (func_409(1) && func_384(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -120.50009f, 6513.166f, 27.8153f, -152.47021f, 6478.0503f, 39.48183f, 26f, false, true, 0))
							{
								iLocal_286 = 1;
							}
							else if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_CLARIFY", 8, 0, 0, 0))
							{
								iLocal_286 = 1;
							}
						}
					}
				}
				else if (SYSTEM::TIMERA() > 5000)
				{
					func_256("RBS1_ATBANK", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
				}
				if (((SYSTEM::TIMERA() > 25000 && !iLocal_287) && !__LIB_0__::func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (func_409(1) && func_384(1))
					{
						if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_SPEC", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 6f, 4);
							iLocal_287 = 1;
						}
					}
				}
				__LIB_39__::func_126(&Local_82, 0, 0);
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_97, Global_19, true, true, 0))
				{
				}
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && func_409(1)) && func_384(1))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_97, 5f, 5f, 2.5f, false, true, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
					{
						__LIB_0__::func_638();
						HUD::CLEAR_PRINTS();
						if (HUD::DOES_BLIP_EXIST(iLocal_54))
						{
							HUD::REMOVE_BLIP(&iLocal_54);
						}
						while (!__LIB_0__::func_213(iLocal_63, 5f, 5, 1056964608, 0, 1, 0))
						{
							SYSTEM::WAIT(0);
							RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePaletoScoreSetup", 0);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						iLocal_150++;
					}
				}
				break;
			case 9:
				if (!__LIB_0__::func_75())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_BANK"))
					{
						AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_BANK");
					}
					__LIB_39__::func_126(&Local_82, "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, 1);
					func_33(4);
					iLocal_150 = 0;
				}
				break;
			}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, false) && !PED::IS_PED_INJURED(iLocal_53))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_53, true)) > 2500f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_64))
		{
			PED::DELETE_PED(&iLocal_53);
			VEHICLE::DELETE_VEHICLE(&iLocal_64);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bus"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_LSMetro_01"));
		}
	}
	if (Local_250.f_9)
	{
		__LIB_0__::func_429();
		HUD::CLEAR_PRINTS();
		func_396(6, 1, 0);
		if (func_405(&Local_238))
		{
			HUD::REMOVE_BLIP(&iLocal_54);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 6f, 4);
			func_33(6);
		}
	}
	if (func_94(uLocal_186[2], &Local_247))
	{
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_429();
		func_98("CBH_AB2BOTH");
	}
	if (!iLocal_132)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_95) < SYSTEM::POW(50f, 2f))
		{
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
			iLocal_132 = 1;
		}
	}
	else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_95) > SYSTEM::POW(75f, 2f))
	{
		STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1rbhs_mcs_2");
		iLocal_132 = 0;
	}
}

int func_405(var uParam0)//Position - 0x21A74
{
	if (!uParam0->f_1)
	{
		if (__LIB_17__::func_243(&Local_233, cLocal_168, *uParam0, 9, 0, 0, 0))
		{
			uParam0->f_1 = 1;
			return 1;
		}
	}
	return 0;
}

void func_406()//Position - 0x21AA3
{
	struct<8> Var0;
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -104.04675f, 6493.0757f, 30.41857f, -120.62021f, 6475.7793f, 35.107506f, 19.25f, false, true, 0) && (MISC::GET_GAME_TIMER() - iLocal_157) > 10000) && !__LIB_0__::func_75())
	{
		StringCopy(&Var0, "RBS1_WRGWY_", 64);
		StringIntConCat(&Var0, iLocal_156, 64);
		__LIB_17__::func_731(&Local_233, cLocal_168, "RBS1_WRGWY", &Var0, 8, 0, 0);
		iLocal_156++;
		if (iLocal_156 > 1)
		{
			iLocal_156 = 0;
		}
		iLocal_157 = MISC::GET_GAME_TIMER();
	}
}

void func_407(var uParam0, struct<3> Param1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x21B35
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		__LIB_39__::func_126(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_400(uParam0, Param1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_408(int* iParam0, int* iParam1, struct<3> Param2, var uParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x21B6B
{
	if (func_384(bParam5))
	{
		if (func_409(bParam5))
		{
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::REMOVE_BLIP(iParam1);
			}
			if (bParam4)
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam0))
				{
					*iParam0 = __LIB_0__::func_488(Param2, bParam6);
					if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (bParam7)
				{
					__LIB_39__::func_125(uParam3);
				}
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
		{
			if (bParam4)
			{
				if (HUD::DOES_BLIP_EXIST(*iParam0))
				{
					HUD::REMOVE_BLIP(iParam0);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*iParam1))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
				{
					HUD::CLEAR_PRINTS();
				}
				__LIB_39__::func_125(&Local_245);
				*iParam1 = __LIB_0__::func_639(iLocal_63, 0, 0);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(*iParam1))
		{
			HUD::REMOVE_BLIP(iParam1);
		}
	}
}

int func_409(bool bParam0)//Position - 0x21C53
{
	if (func_384(bParam0))
	{
		if (bParam0)
		{
			return ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) && PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false)) && PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_63, false));
		}
		else
		{
			return (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) && PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false));
		}
	}
	return 0;
}

void func_410()//Position - 0x21CBB
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f, 0f);
	if (!iLocal_131)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REQUEST_CUTSCENE("rbhs_mcs_1", 8);
		}
		if (__LIB_0__::func_90())
		{
			if (__LIB_13__::func_801("rbhs_mcs_1"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_64))
				{
					func_419(-397.9f, 6134.135f, 31.5204f, -45.281322f);
				}
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_51, "Lester", 2, joaat("IG_LesterCrest"), 0);
				}
				else if (!PED::IS_PED_INJURED(iLocal_51))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_51, "Lester", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(uLocal_186[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_186[2], "Trevor", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_63, true);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_63, 0, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_63, 1, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_63, 3, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_63, 2, 0, 0f);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_63, "Michaels_car", 0, 0, 0);
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_63, true, true, true);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_64, "RBHS_bus", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_53))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_53, "S_M_M_LSMetro_01", 0, 0, 0);
				}
				PATHFIND::SET_ROADS_IN_AREA(Local_100 + Vector(100f, 100f, 100f), Local_100 - Vector(100f, 100f, 100f), false, true);
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_100 + Vector(100f, 100f, 100f), Local_100 - Vector(100f, 100f, 100f), false, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePaletoScoreSetup", 0);
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(uLocal_186[2]))
				{
					TASK::CLEAR_PED_TASKS(uLocal_186[2]);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_64, 0f);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_BUS_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("PS_1_BUS_ARRIVES");
				}
				MISC::CLEAR_AREA(Local_100, 500f, true, false, false, false);
				func_396(3, 1, 0);
				__LIB_17__::func_159();
				CAM::DO_SCREEN_FADE_IN(500);
				iLocal_131 = 1;
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
		{
			iLocal_51 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, false))
		{
			if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_64))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_64, true, false);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, -1);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_186[2]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_186[2], iLocal_63, 2);
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_63, false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_51, iLocal_63, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_63, true);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
			}
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			RECORDING::REPLAY_STOP_EVENT();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_53) && ENTITY::DOES_ENTITY_EXIST(iLocal_64))
			{
				if (!PED::IS_PED_INJURED(iLocal_53) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_53, iLocal_64, -1);
				}
			}
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
			func_412(&Local_67, 0, 0, 0, 1, 0, 0, 1);
			__LIB_16__::func_887();
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			iLocal_131 = 0;
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_100 + Vector(100f, 100f, 100f), Local_100 - Vector(100f, 100f, 100f), 1);
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_100 + Vector(100f, 100f, 100f), Local_100 - Vector(100f, 100f, 100f), true, 0);
			func_33(3);
		}
	}
}

void func_412(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x22094
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
		if (CAM::DOES_CAM_EXIST(iParam0->f_4))
		{
			if (CAM::IS_CAM_ACTIVE(iParam0->f_4))
			{
				CAM::SET_CAM_ACTIVE(iParam0->f_4, false);
			}
			CAM::DESTROY_CAM(iParam0->f_4, true);
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
			AUDIO::STOP_SOUND(iParam0->f_10);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
	}
	__LIB_0__::func_532(bParam1, 1, 0, 0, 0, 0, 0);
	__LIB_13__::func_788();
	if (!bParam1 && iParam5)
	{
		if (iParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(iParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(iParam0->f_8, 0, 0);
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
			Global_113386.f_32749.f_4801 = __LIB_11__::func_762();
		}
	}
}

bool func_419(struct<3> Param0, float fParam1)//Position - 0x22406
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_64))
	{
		STREAMING::REQUEST_MODEL(joaat("bus"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("bus")))
		{
			iLocal_64 = VEHICLE::CREATE_VEHICLE(joaat("bus"), Param0, fParam1, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_64, 5f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_64, 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
	{
		STREAMING::REQUEST_MODEL(joaat("S_M_M_LSMetro_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_LSMetro_01")))
		{
			iLocal_53 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_64, 26, joaat("S_M_M_LSMetro_01"), -1, true, true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_53, false);
			PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(iLocal_53, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_53, joaat("PLAYER"));
		}
	}
	return (ENTITY::DOES_ENTITY_EXIST(iLocal_64) && ENTITY::DOES_ENTITY_EXIST(iLocal_53));
}

void func_422()//Position - 0x224F7
{
	var uVar0;
	switch (iLocal_255)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_254) > 1000)
			{
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_114, &uVar0, false, false))
				{
					iLocal_255++;
				}
				iLocal_254 = MISC::GET_GAME_TIMER();
			}
			break;
		case 1:
			if (func_424())
			{
				__LIB_17__::func_764(73, 1);
				__LIB_17__::func_764(74, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, true, false);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, true, false);
				iLocal_259 = 1;
				iLocal_255++;
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_254) > 1000)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_114) > 40000f)
				{
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, true, false);
						__LIB_17__::func_764(73, 1);
					}
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, true, false);
						__LIB_17__::func_764(74, 1);
					}
					func_423();
					iLocal_255 = 0;
				}
				else
				{
					iLocal_258 = __LIB_11__::func_762();
					if (iLocal_259)
					{
						if (__LIB_0__::func_199(iLocal_258) >= 7 || __LIB_0__::func_199(iLocal_258) <= 17)
						{
							__LIB_17__::func_764(73, 0);
							__LIB_17__::func_764(74, 0);
							iLocal_259 = 0;
						}
					}
					else if (__LIB_0__::func_199(iLocal_258) < 7 || __LIB_0__::func_199(iLocal_258) > 17)
					{
						if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(178228075) != 1)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(178228075, 0f, true, false);
							__LIB_17__::func_764(73, 1);
						}
						if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(1852297978) != 1)
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1852297978, 0f, true, false);
							__LIB_17__::func_764(74, 1);
						}
						iLocal_259 = 1;
					}
				}
				iLocal_254 = MISC::GET_GAME_TIMER();
			}
			break;
	}
	if (((((FIRE::IS_EXPLOSION_IN_AREA(2, Local_113 - Vector(10f, 75f, 75f), Local_113 + Vector(100f, 75f, 75f)) || FIRE::IS_EXPLOSION_IN_AREA(0, Local_113 - Vector(10f, 75f, 75f), Local_113 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(1, Local_113 - Vector(10f, 75f, 75f), Local_113 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(9, Local_113 - Vector(10f, 75f, 75f), Local_113 + Vector(100f, 75f, 75f))) || FIRE::IS_EXPLOSION_IN_AREA(4, Local_113 - Vector(10f, 75f, 75f), Local_113 + Vector(100f, 75f, 75f))) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Local_113 - Vector(10f, 75f, 75f), Local_113 + Vector(100f, 75f, 75f), joaat("WEAPON_RPG"), false))
	{
		func_98("CBH_BANKALERT");
	}
}

void func_423()//Position - 0x227DC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_52)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_52[iVar0]));
		}
		iVar0++;
	}
}

int func_424()//Position - 0x2280E
{
	if (func_348())
	{
		if (!PED::IS_PED_INJURED(iLocal_52[0]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_52[0], "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
		}
		if (!PED::IS_PED_INJURED(iLocal_52[1]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_52[1], "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
		}
		if (!PED::IS_PED_INJURED(iLocal_52[2]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_52[2], "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[3]))
		{
			PED::DELETE_PED(&(iLocal_52[3]));
		}
		return 1;
	}
	return 0;
}

void func_425()//Position - 0x2288B
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	__LIB_0__::func_496();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (!bLocal_136)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_100) < 40000f)
			{
				VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			if (iLocal_150 > 1)
			{
				if (iLocal_150 < 4)
				{
					func_408(&iLocal_54, &iLocal_55, Local_113, &Local_239, 1, 0, SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_100) < 562500f, 1);
				}
				else
				{
					func_408(&iLocal_54, &iLocal_55, Local_100, &Local_239, 1, 0, SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_100) < 562500f, 1);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63))
				{
					func_457(&Local_123, &iLocal_124);
					iLocal_141 = 1;
				}
				else if (iLocal_141)
				{
					HUD::CLEAR_GPS_MULTI_ROUTE();
					iLocal_124 = (Local_123.f_0 - 1);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_145 = 1;
				}
			}
			if (iLocal_150 < 2)
			{
				if (!PED::IS_PED_INJURED(uLocal_186[2]))
				{
					PED::SET_PED_RESET_FLAG(uLocal_186[2], 60, true);
				}
			}
			switch (iLocal_150)
			{
				case 0:
					if (!PED::IS_PED_INJURED(uLocal_186[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
					{
						iLocal_282 = 1;
						PED::SET_PED_CONFIG_FLAG(uLocal_186[2], 104, true);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						}
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_285);
						SYSTEM::SETTIMERA(0);
						SYSTEM::SETTIMERB(0);
						Local_123[0 /*3*/] = { 2356.3787f, 5864.7744f, 46.1486f };
						Local_123[1 /*3*/] = { 230.8756f, 6569.08f, 30.6632f };
						Local_123[2 /*3*/] = { Local_113 };
						iLocal_124 = (Local_123.f_0 - 1);
						iLocal_141 = 0;
						iLocal_278 = -1;
						iLocal_279 = 0;
						iLocal_281 = 0;
						iLocal_283 = 0;
						iLocal_284 = 0;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 10f, 4);
						iLocal_150++;
					}
					break;
				case 1:
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (iLocal_282)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
						if (iLocal_150 != 0)
						{
							__LIB_0__::func_603(&iVar0, &iVar1, &uVar2, &uVar2, 0);
							if ((MISC::ABSI(iVar0) + MISC::ABSI(iVar1)) > 20 || SYSTEM::TIMERB() > 2000)
							{
								iLocal_282 = 0;
							}
						}
					}
					if ((((!PED::IS_PED_INJURED(uLocal_186[2]) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_186[2], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_186[2], true)) && !HUD::DOES_BLIP_EXIST(iLocal_59))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_186[2]))
						{
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_285))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_186[2], sLocal_285, 0, 8, -1);
							}
							if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_186[2], iLocal_63, 3f, 3f, 3f, false, true, 0))
							{
								TASK::CLEAR_PED_TASKS(uLocal_186[2]);
								TASK::TASK_ENTER_VEHICLE(uLocal_186[2], iLocal_63, 20000, 0, 1f, 1, 0);
							}
						}
						else
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_285, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar3);
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_285, ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true), &iVar4);
							TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_285, iVar3, &Var5);
							if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(uLocal_186[2]))
							{
								if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var5) < 6.25f && ENTITY::IS_ENTITY_AT_ENTITY(uLocal_186[2], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0)) && (iVar3 - iVar4) < 3) && iVar3 > iVar4)
								{
									TASK::WAYPOINT_PLAYBACK_PAUSE(uLocal_186[2], true, false);
								}
							}
							else if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var5) > 9f || !ENTITY::IS_ENTITY_AT_ENTITY(uLocal_186[2], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0)) || (iVar3 - iVar4) > 3) || iVar3 < iVar4)
							{
								TASK::WAYPOINT_PLAYBACK_RESUME(uLocal_186[2], true, -1, 0);
							}
							if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_186[2]) > 28)
							{
								TASK::CLEAR_PED_TASKS(uLocal_186[2]);
								TASK::TASK_ENTER_VEHICLE(uLocal_186[2], iLocal_63, 20000, 0, 1f, 1, 0);
							}
						}
					}
					if (!iLocal_283)
					{
						if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_DRV1", 8, 0, 0, 0))
							{
								iLocal_283 = 1;
							}
						}
					}
					else if (!iLocal_284)
					{
						if (!__LIB_0__::func_75())
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
							{
								__LIB_0__::func_229("CBH_GOTOCAR", 7500, 1);
								iLocal_284 = 1;
							}
						}
					}
					if (CAM::IS_SCREEN_FADED_IN())
					{
						if (!PED::IS_PED_INJURED(uLocal_186[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_59))
							{
								if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
								{
									HUD::REMOVE_BLIP(&iLocal_59);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false) && !PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false))
							{
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true)) > 3f)
								{
									TASK::TASK_ENTER_VEHICLE(uLocal_186[2], iLocal_63, 20000, 0, 3f, 1, 0);
								}
								iLocal_59 = __LIB_0__::func_666(uLocal_186[2], 0, 145);
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
							{
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_PALETO"))
								{
									AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_PALETO");
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_55))
								{
									HUD::REMOVE_BLIP(&iLocal_55);
								}
								if (PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_59))
									{
										HUD::REMOVE_BLIP(&iLocal_59);
									}
									PED::REMOVE_PED_FROM_GROUP(uLocal_186[2]);
									SYSTEM::SETTIMERA(0);
									__LIB_0__::func_499(709, 0);
									TASK::REMOVE_WAYPOINT_RECORDING(sLocal_285);
									iLocal_150++;
								}
								else if (!iLocal_280)
								{
									if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_186[2], true)) > 3f)
									{
										if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
										{
											__LIB_0__::func_382("CBH_BUDSOUT", 7500, 1);
											iLocal_280 = 1;
										}
									}
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_55))
								{
									iLocal_55 = __LIB_0__::func_639(iLocal_63, 0, 0);
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_59))
								{
									HUD::REMOVE_BLIP(&iLocal_59);
								}
							}
						}
					}
					break;
				case 2:
					if ((SYSTEM::TIMERA() > 7000 && func_409(0)) && !__LIB_0__::func_75())
					{
						if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_CALL", 8, 0, 0, 0))
						{
							iLocal_150++;
						}
					}
					break;
				case 3:
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_323())
						{
							if (__LIB_31__::func_805(&Local_233, 12, cLocal_168, "RBS1_PHONE", 9, 1, 0, 0, 0))
							{
								SYSTEM::SETTIMERA(0);
								iLocal_150++;
							}
						}
						else if (__LIB_31__::func_805(&Local_233, 12, cLocal_168, "RBS1_PHONE2", 9, 1, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_150++;
						}
					}
					break;
				case 4:
					if (func_409(0) && func_384(0))
					{
						if (__LIB_14__::func_521())
						{
							SYSTEM::SETTIMERA(0);
							if (HUD::DOES_BLIP_EXIST(iLocal_54))
							{
								HUD::REMOVE_BLIP(&iLocal_54);
								HUD::CLEAR_GPS_MULTI_ROUTE();
								Local_123[0 /*3*/] = { 2356.3787f, 5864.7744f, 46.1486f };
								Local_123[1 /*3*/] = { 230.8756f, 6569.08f, 30.6632f };
								Local_123[2 /*3*/] = { Local_100 };
								iLocal_141 = 0;
								iLocal_124 = (Local_123.f_0 - 1);
							}
							iLocal_150++;
						}
					}
					break;
				case 5:
					if (SYSTEM::TIMERA() > 3000)
					{
						PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_93 + Vector(500f, 500f, 500f), Local_93 - Vector(500f, 500f, 500f), 1);
						iLocal_150++;
					}
					break;
				case 6:
					if (__LIB_0__::func_323())
					{
						func_256("RBS1_DRV2", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
					}
					else
					{
						func_256("RBS1_DRV4", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
					}
					if (!__LIB_0__::func_75() && !bLocal_267)
					{
						iLocal_266 = 0;
						iLocal_150++;
					}
					break;
				case 7:
					if (__LIB_0__::func_323())
					{
						func_256("RBS1_DRV2b", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
					}
					else
					{
						func_256("RBS1_DRV4b", (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false)));
					}
					break;
			}
			if (((((func_409(0) && func_384(0)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_100.f_0, Local_100.f_1, 30.24f, Global_19, true, true, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -351.5282f, 6189.9893f, 28.294226f, -343.88858f, 6197.934f, 34.295494f, 7f, false, true, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63)) && ENTITY::IS_ENTITY_UPRIGHT(iLocal_63, 90f))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
				__LIB_0__::func_498(0, -1);
				__LIB_0__::func_638();
				HUD::CLEAR_GPS_MULTI_ROUTE();
				AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1);
				iLocal_150 = 0;
				bLocal_136 = true;
			}
		}
		else
		{
			if (!iLocal_279)
			{
				if (__LIB_17__::func_243(&Local_233, cLocal_168, "RBS1_DRV3", 8, 0, 0, 0))
				{
					iLocal_279 = 1;
				}
			}
			switch (iLocal_150)
			{
				case 0:
					if (func_409(0) && func_384(0))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_54))
						{
							HUD::REMOVE_BLIP(&iLocal_54);
						}
						iLocal_150++;
					}
					break;
				case 1:
					if (__LIB_0__::func_213(iLocal_63, 6f, 1, 1056964608, 0, 1, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						SYSTEM::SETTIMERA(0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_63, false, false, false);
						VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_63, false);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_150++;
					}
					break;
				case 2:
					iLocal_150++;
					break;
				case 3:
					if (iLocal_279 && SYSTEM::TIMERA() > 2000)
					{
						if (!CAM::DOES_CAM_EXIST(iLocal_66))
						{
							iLocal_278 = PED::CREATE_SYNCHRONIZED_SCENE(-330.69f, 6190.95f, 30.49f, 0f, 0f, 0f, 2);
							iLocal_66 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_66, iLocal_278, "not_for_cutscene_-_timelapse_lead_in_cam", "missheistpaletoscoresetup");
							GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.5f);
							GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_63, -348.9985f, 6194.5923f, 30.7398f, false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_63, -0.0211f, 0.0095f, 0.9216f, 0.3876f);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_63, true);
							__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							CAM::SET_WIDESCREEN_BORDERS(true, 0);
							AUDIO::START_AUDIO_SCENE("PS_1_BUS_ARRIVES");
							RECORDING::REPLAY_START_EVENT(4);
						}
						else
						{
							SYSTEM::SETTIMERA(0);
							STREAMING::REQUEST_MODEL(joaat("bus"));
							STREAMING::REQUEST_MODEL(joaat("S_M_M_LSMetro_01"));
							iLocal_150++;
						}
					}
					break;
				case 4:
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_278))
					{
					}
					if ((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_278) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_278) > 0.99f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_278)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_51))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_51, true, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_51, true, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, false);
						STREAMING::REMOVE_ANIM_DICT("missheistpaletoscoresetup");
						GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						Local_67.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
						CAM::ADD_CAM_SPLINE_NODE(Local_67.f_4, -351.9567f, 6192.0483f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						CAM::ADD_CAM_SPLINE_NODE(Local_67.f_4, -351.9567f, 6192.0483f, 34.7371f, 21.6144f, 0f, -126.3661f, 5000, 3, 2);
						CAM::SET_CAM_FOV(Local_67.f_4, 39f);
						CAM::SET_CAM_ACTIVE(Local_67.f_4, true);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, true);
						Local_67.f_0 = __LIB_11__::func_762();
						GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
						func_412(&Local_67, 1, 1, 2000, 1, 1, 0, 1);
						iLocal_276 = __LIB_0__::func_199(Local_67.f_0) + 2;
						iLocal_277 = __LIB_0__::func_198(Local_67.f_0);
						if (iLocal_276 > 18 || iLocal_276 < 6)
						{
							iLocal_276 = 8;
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_PALETO"))
						{
							AUDIO::STOP_AUDIO_SCENE("PS_1_DRIVE_TO_PALETO");
						}
						iLocal_150++;
					}
					break;
				case 5:
					func_419(-397.9f, 6134.135f, 31.5204f, -45.281322f);
					if (func_430(iLocal_276, iLocal_277, "EXTRASUNNY", "cirrocumulus", &Local_67, -1f, 0, 0, 1065353216))
					{
						RECORDING::REPLAY_STOP_EVENT();
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_63, false);
						AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
						func_33(2);
					}
					break;
			}
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_63))
			{
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				bLocal_136 = false;
				iLocal_150 = 7;
			}
		}
		if (func_94(uLocal_186[2], &Local_246))
		{
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_429();
			func_98("CBH_AB2TREV");
		}
	}
	if (!iLocal_132)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_100) < 22500f && ENTITY::DOES_ENTITY_EXIST(iLocal_51))
		{
			STREAMING::REQUEST_ANIM_DICT("missheistpaletoscoresetup");
			func_429("rbhs_mcs_1", Local_100, 100f, &iLocal_132);
			func_396(2, 1, 0);
		}
	}
	if (iLocal_132)
	{
		if (!iLocal_281)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_51) && !PED::IS_PED_INJURED(iLocal_51))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lester", iLocal_51, 0);
				}
				iLocal_281 = 1;
			}
		}
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_100) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_132 = 0;
			iLocal_281 = 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_100) < 40000f)
		{
			if (__LIB_0__::func_648(&iLocal_51, 12, -317.9068f, 6195.894f, 36.0577f, 72.1587f, 1))
			{
				func_426();
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_51, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_51, false, false);
			}
		}
	}
}

void func_426()//Position - 0x23639
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 2, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 3, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 5, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 7, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_51, 8, 1, 0, 0);
	PED::SET_PED_PROP_INDEX(iLocal_51, 1, 0, 0, false);
}

void func_429(char* sParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x23766
{
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1) < (fParam2 * fParam2) && !*bParam3)
	{
		CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
		*bParam3 = 1;
	}
	else
	{
		*bParam3 = 0;
	}
}

int func_430(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x237A4
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	fVar0 = -1f;
	switch (iParam4->f_3)
	{
		case 0:
			*iParam4 = __LIB_11__::func_762();
			iVar5 = __LIB_11__::func_762();
			__LIB_0__::func_142(&iVar5, iParam0);
			__LIB_0__::func_143(&iVar5, iParam1);
			__LIB_0__::func_144(&iVar5, 0);
			if (__LIB_11__::func_761(*iParam4, iVar5))
			{
				__LIB_13__::func_827(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			__LIB_13__::func_826(*iParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			iParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			__LIB_15__::func_981((SYSTEM::TO_FLOAT(iParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			}
			__LIB_13__::func_811();
			iParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			__LIB_13__::func_788();
			iParam4->f_3++;
			break;
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(iParam4->f_4) && CAM::IS_CAM_INTERPOLATING(iParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(iParam4->f_4) && CAM::IS_CAM_INTERPOLATING(iParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(iParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (iParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST(sParam2, fParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							MISC::UNLOAD_ALL_CLOUD_HATS();
							MISC::LOAD_CLOUD_HAT(sParam3, 0f);
						}
						iParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *iParam4;
				__LIB_13__::func_827(&iVar5, iParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar5), __LIB_0__::func_198(iVar5), __LIB_0__::func_615(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(iParam4->f_10);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = __LIB_0__::func_331(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(iParam4->f_11) * fVar12));
			iVar5 = *iParam4;
			__LIB_13__::func_827(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(__LIB_0__::func_199(iVar5), __LIB_0__::func_198(iVar5), __LIB_0__::func_615(iVar5));
			if (__LIB_0__::func_614(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(__LIB_0__::func_614(iVar5), __LIB_0__::func_553(iVar5), __LIB_0__::func_214(iVar5));
			}
			__LIB_0__::func_646();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}
	return 0;
}

void func_457(var uParam0, var uParam1)//Position - 0x244EC
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		fVar4 = SYSTEM::VDIST2(Var3, *(uParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar4 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar4;
		}
		iVar0++;
	}
	if (SYSTEM::VDIST2(Var3, *(uParam0[iVar1 + 1 /*3*/])) < SYSTEM::VDIST2(*(uParam0[iVar1 /*3*/]), *(uParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*uParam1 != iVar1 || (iLocal_145 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0))
	{
		if ((*uParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *(uParam0[*uParam1 /*3*/])) > 25f) || (iLocal_145 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0))
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, true, false);
			iVar0 = iVar1;
			while (iVar0 <= (*uParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(uParam0[iVar0 /*3*/]));
				iVar0++;
			}
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(uParam0[(*uParam0 - 1) /*3*/]));
			HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
			iLocal_145 = 0;
		}
		*uParam1 = iVar1;
	}
}

void func_458()//Position - 0x24629
{
	int iVar0;
	switch (iLocal_150)
	{
		case 0:
			if (__LIB_15__::func_944() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE("rbhs_INT", 8);
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("rbhs_INT", 8);
			}
			iLocal_150++;
			break;
		case 1:
			iLocal_275 = MISC::GET_HASH_KEY("SIDE_DOOR_METHLAB");
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_275, joaat("v_ilev_methdoorscuff"), 1392.7399f, 3611.3672f, 39.0919f, true, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_275, 3, true, false);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_275, 0f, true, false);
			iLocal_150++;
			break;
		case 2:
			if (__LIB_0__::func_90())
			{
				if (__LIB_13__::func_801("rbhs_int"))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_0__::func_468(91);
						PATHFIND::SET_ROADS_IN_AREA(Local_93 + Vector(500f, 500f, 500f), Local_93 - Vector(500f, 500f, 500f), false, true);
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
							uLocal_186[2] = Global_96938.f_9[0];
							Global_96938.f_9[0] = 0;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_186[2], "Trevor", 2, joaat("Player_Two"), 0);
						}
						else if (!PED::IS_PED_INJURED(uLocal_186[2]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_186[2], "Trevor", 0, 0, 0);
						}
						MISC::CLEAR_AREA_OF_COPS(Local_93, 500f, 0);
						if (__LIB_15__::func_944() == 2)
						{
							CUTSCENE::START_CUTSCENE(256);
						}
						else
						{
							CUTSCENE::START_CUTSCENE(0);
						}
						RECORDING::REPLAY_START_EVENT(4);
						if (__LIB_15__::func_944() == 2)
						{
							bLocal_274 = true;
						}
						func_396(1, 1, 0);
						HUD::REQUEST_ADDITIONAL_TEXT("BANKS1", 0);
						HUD::REQUEST_ADDITIONAL_TEXT(cLocal_168, 6);
						STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 0));
						iLocal_150++;
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_150 = 0;
				}
			}
			break;
		case 3:
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("premier"), 3);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			else
			{
				iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 50f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						if (__LIB_0__::func_119(iVar0) == 0 || VEHICLE::IS_BIG_VEHICLE(iVar0))
						{
							VEHICLE::DELETE_VEHICLE(&iVar0);
						}
						else
						{
							func_199(iVar0, 1416.653f, 3622.32f, 33.8648f, 20.6293f, 24, 0);
							ENTITY::SET_ENTITY_COORDS(iVar0, 1416.653f, 3622.32f, 33.8648f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, 20.6293f);
						}
					}
				}
			}
			MISC::CLEAR_AREA(Local_102, 25f, true, false, false, false);
			MISC::CLEAR_AREA_OF_OBJECTS(1391.6508f, 3607.2688f, 37.9419f, 10f, 2);
			__LIB_0__::func_342(24);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			iLocal_150++;
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
				{
					uLocal_186[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
				}
			}
			func_772(Local_93, fLocal_94);
			if (!iLocal_273)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_63) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_63, false, true, false);
					iLocal_273 = 1;
				}
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_102, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_103);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 10f, true, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (bLocal_274)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
						{
							func_771(&(uLocal_186[2]), 2, Local_106, fLocal_107, 0, 0, 0);
						}
						func_459(0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_102, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_103);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2500, 10f, true, false);
					}
					if (!PED::IS_PED_INJURED(uLocal_186[2]))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_186[2], Local_106, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(uLocal_186[2], fLocal_107);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_186[2]);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
						PED::SET_PED_RESET_FLAG(uLocal_186[2], 237, true);
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
				{
					while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(uLocal_186[2]))
				{
					PED::SET_PED_AS_ENEMY(uLocal_186[2], false);
					PED::SET_PED_CAN_BE_TARGETTED(uLocal_186[2], false);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(uLocal_186[2], false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_186[2], joaat("PLAYER"));
				}
				RECORDING::REPLAY_STOP_EVENT();
				MISC::CLEAR_AREA(Local_93, 20f, true, false, false, false);
				__LIB_0__::func_342(24);
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				iLocal_131 = 0;
				CUTSCENE::REMOVE_CUTSCENE();
				func_33(1);
			}
			break;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
}

int func_459(int iParam0, bool bParam1)//Position - 0x24BC3
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
	iVar1 = __LIB_0__::func_518(bVar0);
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
		func_462(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_771(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_99(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_462(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x24D81
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
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_17__::func_238(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_763(*iParam0);
				__LIB_13__::func_777(*iParam0, 1, 0);
				__LIB_13__::func_763(*iParam0);
				__LIB_13__::func_762(*iParam0);
				func_464(*iParam0, bParam6);
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

int func_464(int iParam0, bool bParam1)//Position - 0x24EAC
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_555(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_555(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_533(iParam0, 3, 169))
					{
						func_732(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_533(iParam0, 12, 6))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 11))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 12, 10))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 12, 50))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 14, 59))
			{
				func_732(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_533(iParam0, 8, 22))
			{
				func_732(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_533(iParam0, 12, 14))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_533(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 4))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 12, 3))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 14, 82))
			{
				func_732(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_533(iParam0, 8, 76))
			{
				func_732(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_533(iParam0, 12, 1))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_533(iParam0, 12, 12))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 12, 15))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_533(iParam0, 3, 71))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_533(iParam0, 12, 7))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 12, 6))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_533(iParam0, 14, 88))
			{
				func_732(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_533(iParam0, 8, 17))
			{
				func_732(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_533(iParam0, 12, 11))
			{
				func_732(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_533(int iParam0, int iParam1, int iParam2)//Position - 0x3C2E1
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
				if (!func_533(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_533(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_533(iParam0, 14, iVar4))
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
			if (!func_533(iParam0, 14, uVar8[iVar7]))
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

void func_555(int iParam0, int iParam1)//Position - 0x40960
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
				iVar1 = func_731(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_557(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_17__::func_236(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_653();
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

void func_557(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x40BDB
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
			if (func_729(iParam0, iVar1, &iVar2, 0))
			{
				func_732(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_727(iParam0, iVar1, &iVar2))
			{
				func_732(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_725(iParam0);
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
			func_563(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_563(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_563(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_563(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x41377
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
			func_684(iVar5, iParam1, iParam2, 1);
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
						func_684(iVar5, 10, 0, 1);
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
									func_684(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_563(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_684(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_681(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_563(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_675(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_684(iVar5, 14, uVar18[iVar1], 1);
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
							func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_684(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_563(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_666(iParam0);
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
						func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_563(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_665(iVar5, iVar24, iVar23, iVar25);
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
							func_563(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_563(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_563(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_563(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_563(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_563(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_563(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_675(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_665(iVar5, func_681(iParam0, 8, -1), iParam2, func_681(iParam0, 4, -1));
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
				func_605(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_665(iVar5, iParam2, iVar44, iVar45);
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
			func_675(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_665(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_563(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_563(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_665(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_665(iVar5, iVar58, iVar57, iParam2);
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
						func_563(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_665(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_563(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_582(iParam0, 9, iVar63))
						{
							func_563(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_563(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_563(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_563(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_681(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_681(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_563(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_563(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_563(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_563(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_563(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_563(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_563(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_563(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_563(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_563(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_666(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_563(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_563(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_564(iParam0, &uVar4))
		{
			func_563(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_563(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_563(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_563(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_681(iParam0, 3, -1), iVar10);
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
				func_563(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_564(int iParam0, var uParam1)//Position - 0x43221
{
	int iVar0;
	int iVar1;
	*uParam1 = func_681(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_582(iParam0, iVar1, iVar0))
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

int func_582(int iParam0, int iParam1, int iParam2)//Position - 0x4760F
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
				if (!func_582(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_582(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_582(iParam0, 14, iVar6))
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
			if (!func_582(iParam0, 14, uVar11[iVar10]))
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
						return func_582(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_582(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_605(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4E332
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
	func_606(iParam0, bParam3, 0, -1);
}

void func_606(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x4E380
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
		bVar3 = func_645(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_636(iParam0, iParam3);
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

int func_636(int iParam0, int iParam1)//Position - 0x5D753
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
				iVar3 = func_681(iParam0, 11, -1);
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
				iVar5 = func_681(iParam0, 11, -1);
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

int func_645(int iParam0, bool bParam1)//Position - 0x5DBB1
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_681(iParam0, 11, -1), 0);
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
						iVar3 = func_681(iParam0, 11, -1);
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
						iVar5 = func_681(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_681(iParam0, 11, -1), 0);
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
						iVar8 = func_681(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_681(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_681(iParam0, 11, -1), 0);
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
						iVar12 = func_681(iParam0, 8, -1);
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

int func_665(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66A3D
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
					iVar0 = func_665(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_665(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_666(int iParam0)//Position - 0x67D78
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
		if (!func_671(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_671(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_671(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x68744
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_681(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_675(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6B12C
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_725(iParam0))
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

int func_681(int iParam0, int iParam1, int iParam2)//Position - 0x6B3DD
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
				if (func_582(iParam0, iParam1, iVar0))
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
				if (func_582(iParam0, iParam1, iVar1))
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

void func_684(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6B55C
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
							func_684(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_684(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_684(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_684(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_684(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_684(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_684(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_684(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_684(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_684(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_725(int iParam0)//Position - 0x84344
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
				iVar1 = func_681(iParam0, 11, -1);
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
				iVar3 = func_681(iParam0, 11, -1);
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

int func_727(int iParam0, int iParam1, int iParam2)//Position - 0x8469E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_533(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_729(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x84765
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_533(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_731(int iParam0, int iParam1, int iParam2)//Position - 0x84A25
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
				if (func_533(iParam0, iParam1, iVar0))
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
				if (func_533(iParam0, iParam1, iVar1))
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

int func_732(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x84AC6
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
										func_732(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_732(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_731(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_729(iParam0, iVar10, &iVar4, 1))
							{
								func_732(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_732(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_732(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_732(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_732(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_732(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_732(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_732(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_732(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_732(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_729(iParam0, iVar10, &iVar4, 0))
		{
			func_732(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_727(iParam0, iVar10, &iVar4))
		{
			func_732(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_763(int iParam0)//Position - 0x880E1
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
		func_557(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_731(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_764(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_731(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_731(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_764(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_764(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_731(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_557(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_764(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x8833E
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_767(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_767(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x884F9
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
								func_767(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_767(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_767(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_767(iParam0, 14, iVar5, 1, 0);
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
								func_767(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_767(iParam0, 14, 17, 1, 0);
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

int func_771(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x88ADE
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
			func_763(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_464(*iParam0, bParam6);
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

int func_772(struct<3> Param0, float fParam1)//Position - 0x88B7D
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		__LIB_39__::func_128(&iLocal_63, 0, Param0, fParam1, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_63, Param0, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_63, fParam1);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_63, true);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_63, 1, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_63, 0, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_63, 3, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_63, 2, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_63, 5, false);
		VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_63, 1.5f);
		__LIB_0__::func_505(iLocal_63, -1);
		__LIB_0__::func_377(iLocal_63, -1);
		return 1;
	}
	return 0;
}

void func_819(int iParam0)//Position - 0x8D6B7
{
	func_880();
	func_396(iParam0, 0, 1);
	__LIB_0__::func_325();
	__LIB_0__::func_429();
	HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
	STREAMING::REMOVE_ANIM_DICT("missheistpaletoscore1leadinoutrbhs_int_1");
	STREAMING::REMOVE_ANIM_DICT("missrbhsig_2");
	if (iParam0 != 5 && iParam0 != 2)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_65))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::DESTROY_CAM(iLocal_65, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_62);
	}
	if (iParam0 != 0)
	{
		if (__LIB_15__::func_944() != 0)
		{
			func_459(0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[0]))
			{
				PED::DELETE_PED(&(uLocal_186[0]));
			}
		}
		__LIB_39__::func_126(&Local_82, 0, 0);
		CAM::STOP_GAMEPLAY_HINT(false);
	}
	if (iLocal_48 != 0 && iLocal_48 != 6)
	{
		while (!func_396(iParam0, 1, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	else
	{
		func_396(iParam0, 1, 0);
	}
	if (iLocal_48 == 6 || iLocal_48 == 7)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(99.73001f, 6625.367f, 28.834698f, -298.83527f, 6237.28f, 38.427986f, 201.375f, true, false, true);
	}
	else
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(99.73001f, 6625.367f, 28.834698f, -298.83527f, 6237.28f, 38.427986f, 201.375f, 1);
	}
	if (iParam0 == 3)
	{
		func_837(1, "stage_drive_to_bank", 0, 0, 0, 1);
	}
	else if (iParam0 == 5 || iParam0 == 6)
	{
		func_837(2, "stage_shoot_box", 0, 0, 0, 1);
	}
	else if (iParam0 == 7)
	{
		func_837(3, "stage_race_home", 1, 0, 0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		OBJECT::DELETE_OBJECT(&iLocal_60);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_test_01"));
	}
	func_391(4, iParam0 >= 3);
	func_391(2, iParam0 >= 3);
	if (bLocal_130)
	{
		if (iParam0 < 6)
		{
			func_836(Local_115, Local_116, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
		}
		else
		{
			func_836(Local_115, Local_116, 1);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		func_423();
		CAM::SET_WIDESCREEN_BORDERS(false, 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_250.f_0))
		{
			Local_250.f_9 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
		{
			PED::DELETE_PED(&iLocal_230);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_231))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_231, -1, false)))
				{
					if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_231, -1, false)))
					{
						ENTITY::SET_ENTITY_COORDS(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_231, -1, false), ENTITY::GET_ENTITY_COORDS(iLocal_231, true), true, false, false, true);
					}
				}
			}
			VEHICLE::DELETE_VEHICLE(&iLocal_231);
		}
		if (CAM::DOES_CAM_EXIST(Local_67.f_4))
		{
			if (CAM::IS_CAM_RENDERING(Local_67.f_4))
			{
				func_412(&Local_67, 0, 0, 0, 1, 0, 0, 1);
				CAM::DESTROY_CAM(Local_67.f_4, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_63, true, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_231))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_231, true, false);
		}
		AUDIO::STOP_AUDIO_SCENES();
	}
	if (CAM::DOES_CAM_EXIST(iLocal_66))
	{
		CAM::DESTROY_CAM(iLocal_66, false);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_63);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		AUDIO::SET_HORN_ENABLED(iLocal_63, true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
	{
		AUDIO::SET_HORN_ENABLED(iLocal_231, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		OBJECT::DELETE_OBJECT(&iLocal_60);
	}
	iLocal_150 = 0;
	switch (iParam0)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
			{
				PED::DELETE_PED(&iLocal_51);
			}
			if (bLocal_130)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
				{
					PED::DELETE_PED(&iLocal_51);
				}
				__LIB_39__::func_123(500);
				func_834(Local_102, fLocal_103, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_63, Local_93, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_63, fLocal_94);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 5f);
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				__LIB_39__::func_119(500);
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
			{
				PED::DELETE_PED(&iLocal_51);
			}
			if (bLocal_130)
			{
				__LIB_39__::func_123(500);
				func_423();
				iLocal_255 = 0;
				if (!__LIB_0__::func_324())
				{
					func_834(Local_102, fLocal_103, 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_102, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_103);
				}
				func_831(Local_93, fLocal_94, 0, 0);
				if (!PED::IS_PED_INJURED(uLocal_186[2]))
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_186[2], Local_106, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_186[2], fLocal_107);
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				MISC::CLEAR_AREA(Local_93, 50f, true, false, false, false);
				while (!func_830(uLocal_186[2]))
				{
					SYSTEM::WAIT(0);
				}
			}
			__LIB_0__::func_222(&Local_233, 1, 0, "LESTER", 0, 1);
			if (!__LIB_0__::func_324())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
			{
				PED::DELETE_PED(&iLocal_51);
			}
			func_829();
			bLocal_136 = false;
			func_828();
			break;
		case 2:
			if (bLocal_130)
			{
				__LIB_39__::func_123(500);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51))
				{
					while (!__LIB_0__::func_648(&iLocal_51, 12, -317.9068f, 6195.894f, 36.0577f, 72.1587f, 1))
					{
						SYSTEM::WAIT(0);
					}
					func_426();
				}
				func_831(Local_100, fLocal_101, 1, 0);
				func_834(Local_100, fLocal_101, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			func_829();
			func_828();
			break;
		case 3:
			if (bLocal_130)
			{
				__LIB_39__::func_123(500);
				func_419(-333.1017f, 6190.6f, 30.2311f, 313.7933f);
				func_423();
				iLocal_255 = 0;
				func_834(Local_100, fLocal_101, 1);
				func_831(Local_100, fLocal_101, 1, 1);
				while (!func_830(uLocal_186[2]))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_830(iLocal_51))
				{
					SYSTEM::WAIT(0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_64, false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_64, -315.9196f, 6208.7734f, 31.3002f, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_64, 0.0104f, 0.0149f, -0.3583f, 0.9334f);
			}
			__LIB_0__::func_221(&Local_233, 1);
			__LIB_0__::func_222(&Local_233, 1, iLocal_51, "LESTER", 0, 1);
			func_829();
			func_828();
			break;
		case 4:
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			func_829();
			func_828();
			__LIB_39__::func_122(&Local_82, 2000);
			__LIB_4__::func_894(&Local_82, 2000);
			if (bLocal_130)
			{
				__LIB_39__::func_123(500);
				iLocal_142 = 1;
				func_423();
				iLocal_255 = 0;
				func_834(Local_95, fLocal_96, 1);
				func_831(Local_95, fLocal_96, 1, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 5:
			iLocal_164 = 0;
			func_829();
			func_828();
			__LIB_39__::func_122(&Local_82, 2000);
			__LIB_4__::func_894(&Local_82, 2000);
			if (bLocal_130)
			{
				__LIB_39__::func_123(500);
				MISC::CLEAR_AREA(Local_95, 1000f, true, false, false, false);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_104, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_105);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(17.28f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(3.16f, 1f);
				func_834(-119.2339f, 6454.9365f, 30.4069f, 316.912f, 1);
				func_831(Local_95, fLocal_96, 0, 1);
				while (!func_830(uLocal_186[2]))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_830(iLocal_51))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_63, -132.2803f, 6498.743f, 29.1556f, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_63, 0.0108f, 0.0008f, 0.7774f, -0.6289f);
				}
				SYSTEM::WAIT(1000);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 1, true, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 1, true, false);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")) != 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), true);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), false) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL")) != 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATPISTOL"), true);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), false) && WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL")) != 0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_APPISTOL"), true);
			}
			iLocal_161 = MISC::GET_GAME_TIMER();
			break;
		case 6:
			iLocal_150 = 0;
			iLocal_151 = 0;
			iLocal_153 = 0;
			iLocal_152 = 0;
			bLocal_134 = false;
			iLocal_159 = 0;
			bLocal_126 = false;
			iLocal_127 = 0;
			bLocal_128 = false;
			iLocal_160 = MISC::GET_GAME_TIMER();
			iLocal_147 = -1;
			iLocal_148 = -1;
			iLocal_149 = -1;
			bLocal_138 = false;
			iLocal_139 = 0;
			if (bLocal_130)
			{
				__LIB_39__::func_123(500);
				MISC::CLEAR_AREA(Local_95, 300f, true, false, false, false);
				func_834(Local_95, fLocal_96, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				func_831(Local_95, fLocal_96, 1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_63, -132.2819f, 6498.7437f, 29.1569f, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_63, 0.0109f, 0.0008f, 0.778f, -0.6281f);
				}
			}
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(178228075, 0, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1852297978, 0, true, false);
			func_829();
			func_828();
			Local_118 = { Local_113 };
			Local_117 = { Local_113 };
			iLocal_155 = MISC::GET_GAME_TIMER();
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, 5000, 0);
			break;
		case 7:
			CUTSCENE::REMOVE_CUTSCENE();
			func_828();
			if (bLocal_130)
			{
				__LIB_39__::func_123(500);
				MISC::CLEAR_AREA(Local_95, 300f, true, false, false, false);
				func_834(Local_98, fLocal_99, 1);
				func_831(Local_98, fLocal_99, 1, 1);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				while (!func_830(uLocal_186[2]))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_830(iLocal_51))
				{
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
				{
					PED::DELETE_PED(&iLocal_230);
				}
				while (!func_344())
				{
					SYSTEM::WAIT(0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
				{
					PED::DELETE_PED(&iLocal_230);
				}
				func_825();
				func_829();
				func_177();
				func_352(1);
				func_192(&(Local_249[2 /*9*/]));
				func_192(&(Local_249[3 /*9*/]));
				while (!func_348())
				{
					SYSTEM::WAIT(0);
				}
				while (!func_349())
				{
					SYSTEM::WAIT(0);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_149, 0.3f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_231, -82.5716f, 6420.555f, 31.0215f, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_231, 0.0792f, -0.1038f, 0.594f, 0.7938f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
					{
						PED::DELETE_PED(&iLocal_230);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_63, -89.3137f, 6420.1567f, 30.9773f, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_63, 0.001f, 0.0036f, -0.4005f, 0.9163f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_1_DRIVE_TO_GAS_STATION"))
				{
					AUDIO::START_AUDIO_SCENE("PS_1_DRIVE_TO_GAS_STATION");
				}
			}
			break;
		case 8:
			func_828();
			if (bLocal_130)
			{
				func_831(Local_98, fLocal_99, 1, 1);
			}
			break;
	}
	if (__LIB_0__::func_324())
	{
		switch (iLocal_48)
		{
			case 1:
				__LIB_0__::func_433(0, -1, 0);
				break;
			case 5:
				__LIB_0__::func_433(0, -1, 1);
				break;
			default:
				__LIB_0__::func_433(iLocal_63, -1, 1);
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_51))
	{
		if (!PED::IS_PED_INJURED(iLocal_51))
		{
			if (Local_233[1 /*10*/] == 0)
			{
				__LIB_0__::func_222(&Local_233, 1, iLocal_51, "LESTER", 0, 1);
			}
		}
	}
	else if (iParam0 != 1)
	{
		if (Local_233[1 /*10*/] != 0)
		{
			__LIB_0__::func_221(&Local_233, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_186[2]))
		{
			if (Local_233[2 /*10*/] == 0)
			{
				__LIB_0__::func_222(&Local_233, 2, uLocal_186[2], "TREVOR", 0, 1);
			}
		}
	}
	else if (Local_233[2 /*10*/] != 0)
	{
		__LIB_0__::func_221(&Local_233, 2);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_233[0 /*10*/]))
	{
		__LIB_0__::func_222(&Local_233, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	func_822(iLocal_51);
	func_822(uLocal_186[2]);
	func_396(iParam0, 0, 1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (iLocal_48 != 5 && iLocal_48 != 4)
	{
		__LIB_17__::func_661(&Local_82);
		func_820(&Local_82);
	}
	bLocal_130 = false;
}

void func_820(var uParam0)//Position - 0x8E304
{
	uParam0->f_10 = 1000;
}

void func_822(int iParam0)//Position - 0x8E322
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_AS_ENEMY(iParam0, false);
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("PLAYER"));
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 29, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, false);
		PED::SET_PED_KEEP_TASK(iParam0, true);
	}
}

void func_825()//Position - 0x8E484
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_52)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_52[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_52[iVar0]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_52[iVar0]);
			}
			PED::DELETE_PED(&(iLocal_52[iVar0]));
		}
		iVar0++;
	}
}

void func_828()//Position - 0x8E4EA
{
	func_1();
	iLocal_156 = 0;
	iLocal_132 = 0;
	iLocal_150 = 0;
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
}

void func_829()//Position - 0x8E50A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_249.f_0)
	{
		func_192(&(Local_249[iVar0 /*9*/]));
		iVar0++;
	}
}

int func_830(int iParam0)//Position - 0x8E534
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_831(struct<3> Param0, float fParam1, bool bParam2, bool bParam3)//Position - 0x8E554
{
	int iVar0;
	while (!func_772(Param0, fParam1))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]) || PED::IS_PED_INJURED(uLocal_186[2]))
	{
		if (bParam3)
		{
			iVar0 = 2;
		}
		else
		{
			iVar0 = 0;
		}
		PED::DELETE_PED(&(uLocal_186[2]));
		while (!func_462(&(uLocal_186[2]), 2, iLocal_63, iVar0, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (!PED::IS_PED_INJURED(uLocal_186[2]))
		{
			func_822(uLocal_186[2]);
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_186[2]))
	{
		if ((bParam3 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_63, 0, false) == uLocal_186[2])
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_186[2], iLocal_63, 2);
		}
	}
	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_51) || PED::IS_PED_INJURED(iLocal_51))
		{
			PED::DELETE_PED(&iLocal_51);
			while (!__LIB_15__::func_938(&iLocal_51, 12, iLocal_63, 0, 1))
			{
				SYSTEM::WAIT(0);
			}
			func_426();
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				func_822(iLocal_51);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		if (bParam2)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, -1);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_186[2]))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_186[2], iLocal_63, false))
			{
				if (bParam3)
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_186[2], iLocal_63, 2);
				}
				else
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_186[2], iLocal_63, 0);
				}
			}
		}
		if (bParam3)
		{
			if (!PED::IS_PED_INJURED(iLocal_51))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_51, iLocal_63, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_51, false);
					ENTITY::SET_ENTITY_COLLISION(iLocal_51, true, false);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_51, true, false);
					PED::SET_PED_INTO_VEHICLE(iLocal_51, iLocal_63, 0);
				}
			}
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63, 5f);
	}
}

void func_834(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x8E7AE
{
	if (!__LIB_0__::func_324())
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, SYSTEM::COS((fParam1 + 90f)), SYSTEM::SIN((fParam1 + 90f)), 0f);
		if (iLocal_232 == -1)
		{
			iLocal_232 = MISC::GET_GAME_TIMER();
		}
		STREAMING::NEW_LOAD_SCENE_START(Param0, SYSTEM::COS((fParam1 + 90f)), SYSTEM::SIN((fParam1 + 90f)), 0f, 100f, 0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iLocal_232) < 20000)
		{
			SYSTEM::WAIT(0);
		}
		iLocal_232 = -1;
		STREAMING::CLEAR_FOCUS();
		STREAMING::NEW_LOAD_SCENE_STOP();
		MISC::CLEAR_AREA(Param0, 500f, true, false, false, false);
		if (bParam2)
		{
			PED::INSTANTLY_FILL_PED_POPULATION();
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
		}
	}
}

void func_836(struct<3> Param0, struct<3> Param1, bool bParam2)//Position - 0x8E880
{
	Local_250.f_1 = { Param0 };
	Local_250.f_4 = { Param1 };
	if (bParam2)
	{
		Local_250.f_7 = joaat("prop_ld_alarm_01_dam");
		iLocal_140 = 1;
	}
	else
	{
		Local_250.f_7 = joaat("prop_ld_alarm_01");
		iLocal_140 = 0;
	}
	Local_250.f_9 = bParam2;
	Local_250.f_8 = 1;
	Local_250.f_12 = 0;
	Local_250.f_13 = 0;
	AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", true);
}

void func_837(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8E8E2
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
		func_838(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_838(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x8EA5A
{
	func_839(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_839(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x8EA76
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_15__::func_944();
	uParam0->f_1 = __LIB_11__::func_762();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_657(&(uParam0->f_2884), 0);
		__LIB_13__::func_760(PLAYER::PLAYER_PED_ID());
		__LIB_32__::func_78(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_15__::func_944())
		{
			__LIB_17__::func_236(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		__LIB_32__::func_80(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_880()//Position - 0x944E7
{
	Local_239 = { __LIB_0__::func_398("CBH_GOTOPB") };
	Local_240 = { __LIB_0__::func_398("CBH_GOTOBNK") };
	Local_241 = { __LIB_0__::func_398("CBH_GORDBCK") };
	Local_242 = { __LIB_0__::func_398("CBH_SHTBOX") };
	Local_243 = { __LIB_0__::func_398("CBH_HIDELOT") };
	Local_244 = { __LIB_0__::func_398("CBH_LOSECOP") };
	Local_245 = { __LIB_0__::func_398("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */) };
	Local_246 = { __LIB_0__::func_398("CBH_AB1TREV") };
	Local_247 = { __LIB_0__::func_398("CBH_AB1BOTH") };
	Local_248 = { __LIB_0__::func_398("CBH_LLEAVE") };
	Local_238 = { __LIB_0__::func_398("RBS1_PRESHT") };
}

void func_883()//Position - 0x945B1
{
	int iVar0;
	STREAMING::REQUEST_MODEL(joaat("Player_Two"));
	STREAMING::REQUEST_MODEL(joaat("premier"));
	HUD::REQUEST_ADDITIONAL_TEXT("BANKS1", 0);
	HUD::REQUEST_ADDITIONAL_TEXT(cLocal_168, 6);
	STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 0));
	PED::ADD_RELATIONSHIP_GROUP("THE_COPS", &iLocal_79);
	PED::ADD_RELATIONSHIP_GROUP("BANK_PEDS", &iLocal_80);
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_93 + Vector(50f, 50f, 50f), Local_93 - Vector(50f, 50f, 50f), false, 0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("PLAYER"), iLocal_80);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.46846f, 6451.529f, -122.75471f) - Vector(3f, 4f, 4f), Vector(30.46846f, 6451.529f, -122.75471f) + Vector(3f, 4f, 4f), false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(28.62807f, 6501.8022f, -128.9157f) - Vector(3f, 6f, 6f), Vector(28.62807f, 6501.8022f, -128.9157f) + Vector(3f, 6f, 6f), false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.47077f, 6424.1846f, -94.00424f) - Vector(3f, 6f, 6f), Vector(30.47077f, 6424.1846f, -94.00424f) + Vector(3f, 6f, 6f), false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.3076f, 6194.5376f, -346.8897f) - Vector(10f, 20f, 20f), Vector(30.47077f, 6424.1846f, -94.00424f) + Vector(10f, 20f, 20f), false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.1739f, 6460.7593f, -157.2882f) - Vector(3f, 5f, 5f), Vector(30.1739f, 6460.7593f, -157.2882f) + Vector(3f, 5f, 5f), false, true);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_95, 1000f, false, false, false, false, false, false, 0);
	AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\Alarms", false, -1);
	func_890();
	func_836(Local_115, Local_116, 0);
	if (__LIB_0__::func_323())
	{
		__LIB_39__::func_123(500);
		iVar0 = __LIB_0__::func_344();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		if (iVar0 > 3)
		{
			if (__LIB_15__::func_944() != 0)
			{
				while (!func_459(0, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
			__LIB_0__::func_681(38, 1);
			__LIB_0__::func_681(37, 0);
			__LIB_0__::func_427(1393.5417f, 3580.1377f, 33.9722f, 353.4546f, 1, 0);
			__LIB_0__::func_433(0, -1, 1);
			func_198();
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					Local_121 = { Local_102 };
					fLocal_122 = fLocal_103;
					MISC::CLEAR_AREA(Local_93, 500f, true, false, false, false);
					func_33(1);
					break;
				case 1:
					MISC::CLEAR_AREA(Local_100, 500f, true, false, false, false);
					Local_121 = { Local_100 };
					fLocal_122 = fLocal_101;
					if (Global_94618)
					{
						func_33(2);
					}
					else
					{
						func_33(3);
					}
					break;
				case 2:
					MISC::CLEAR_AREA(Local_95, 1000f, true, false, false, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false) || WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")) == 0)
					{
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 500, true, true);
					}
					if (Global_94618)
					{
						Local_121 = { Local_95 };
						fLocal_122 = fLocal_96;
						iLocal_142 = 1;
						func_33(4);
					}
					else
					{
						Local_121 = { Local_104 };
						fLocal_122 = fLocal_105;
						func_33(5);
					}
					break;
				case 3:
					func_391(1, 1);
					Local_121 = { Local_98 };
					fLocal_122 = fLocal_99;
					MISC::CLEAR_AREA(Local_98, 1000f, true, false, false, false);
					func_33(7);
					break;
			}
			bLocal_130 = true;
		}
		__LIB_0__::func_427(Local_121, fLocal_122, 0, 0);
		if (__LIB_15__::func_944() != 0)
		{
			while (!func_459(0, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.4401f, 6426.1177f, -73.1887f) - Vector(1f, 7f, 7f), Vector(30.4401f, 6426.1177f, -73.1887f) + Vector(2f, 7f, 7f), false, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("premier"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("ruffian"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_Cop_01"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_F_Y_Cop_01"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_HwayCop_01"), true);
	PED::SET_CREATE_RANDOM_COPS(false);
	func_391(0, 1);
	func_391(3, 1);
	func_391(5, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(32.21845f, 6448.4634f, -118.87497f) + Vector(2.25f, 6.25f, 8f), Vector(32.21845f, 6448.4634f, -118.87497f) - Vector(2.25f, 6.25f, 8f), false, true);
	func_836(Local_115, Local_116, 0);
	__LIB_0__::func_222(&Local_233, 4, 0, "PALETOSCANNER", 0, 1);
	__LIB_0__::func_222(&Local_233, 5, 0, "PALETOCOP1", 0, 1);
	__LIB_13__::func_824(6, 1);
	__LIB_0__::func_424(1);
	AUDIO::PREPARE_ALARM("PALETO_BAY_SCORE_ALARM");
}

void func_890()//Position - 0x94C52
{
	Local_251[0 /*3*/] = { -107.2791f, 6468.4185f, 30.6267f };
	Local_251[1 /*3*/] = { -105.5016f, 6467.449f, 30.6267f };
	Local_251[2 /*3*/] = { -105.3874f, 6470.759f, 30.6267f };
	Local_251[3 /*3*/] = { -102.1724f, 6464.298f, 30.6267f };
	fLocal_252[0] = 297.621f;
	fLocal_252[1] = 346.4444f;
	fLocal_252[2] = 142.5701f;
	fLocal_252[3] = 40.5428f;
}

void func_891()//Position - 0x94CE2
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
	}
	if (__LIB_0__::func_425(38))
	{
	}
	if (__LIB_0__::func_425(37))
	{
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_249[iLocal_154 /*9*/].f_3, false))
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_149))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_249[iLocal_154 /*9*/].f_3, 0.8f, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_61, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
	__LIB_39__::func_126(&Local_82, 0, 0);
	CAM::STOP_GAMEPLAY_HINT(false);
	AUDIO::STOP_ALARM("PALETO_BAY_SCORE_ALARM", false);
	STREAMING::REMOVE_PTFX_ASSET();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_93 + Vector(50f, 50f, 50f), Local_93 - Vector(50f, 50f, 50f), 0);
	__LIB_0__::func_325();
	__LIB_0__::func_424(0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_81, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.46846f, 6451.529f, -122.75471f) - Vector(3f, 4f, 4f), Vector(30.46846f, 6451.529f, -122.75471f) + Vector(3f, 4f, 4f), true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(28.62807f, 6501.8022f, -128.9157f) - Vector(3f, 6f, 6f), Vector(28.62807f, 6501.8022f, -128.9157f) + Vector(3f, 6f, 6f), true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.47077f, 6424.1846f, -94.00424f) - Vector(3f, 6f, 6f), Vector(30.47077f, 6424.1846f, -94.00424f) + Vector(3f, 6f, 6f), true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.3076f, 6194.5376f, -346.8897f) - Vector(10f, 20f, 20f), Vector(30.47077f, 6424.1846f, -94.00424f) + Vector(10f, 20f, 20f), true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.1739f, 6460.7593f, -157.2882f) - Vector(3f, 5f, 5f), Vector(30.1739f, 6460.7593f, -157.2882f) + Vector(3f, 5f, 5f), true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(32.21845f, 6448.4634f, -118.87497f) + Vector(2.25f, 6.25f, 8f), Vector(32.21845f, 6448.4634f, -118.87497f) - Vector(2.25f, 6.25f, 8f), true, true);
	if (AUDIO::IS_MUSIC_ONESHOT_PLAYING())
	{
		AUDIO::CANCEL_MUSIC_EVENT("RH1_START");
	}
	__LIB_13__::func_824(6, 0);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_76))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_76, false);
		STREAMING::REMOVE_PTFX_ASSET();
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63, false))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_63, true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, false))
	{
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_231, true);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(30.4401f, 6426.1177f, -73.1887f) - Vector(1f, 7f, 7f), Vector(30.4401f, 6426.1177f, -73.1887f) + Vector(3f, 7f, 7f), true, true);
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
	__LIB_0__::func_505(0, -1);
	__LIB_0__::func_377(0, -1);
	__LIB_17__::func_661(&Local_82);
	func_820(&Local_82);
	__LIB_17__::func_764(73, 6);
	__LIB_17__::func_764(74, 6);
	__LIB_17__::func_764(73, 1);
	__LIB_17__::func_764(74, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_TRUCK_LOGS", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_HUMAN_HIKER", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", true);
	PATHFIND::SET_PED_PATHS_IN_AREA(Vector(40.81844f, 6464.5454f, -116.5226f) + Vector(12.25f, 29.75f, 29.75f), Vector(40.81844f, 6464.5454f, -116.5226f) - Vector(12.25f, 29.75f, 29.75f), true, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_892()//Position - 0x95019
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
				if (!func_180(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_40();
		}
	}
}

