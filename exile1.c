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
	struct<8> Local_28 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_29 = 0;
	var uLocal_30 = 1000;
	var uLocal_31 = 1000;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	struct<3> Local_62[8];
	struct<3> Local_63[8];
	struct<3> Local_64[13];
	struct<3> Local_65[13];
	struct<3> Local_66[4];
	struct<6> Local_67[2];
	struct<14> Local_68[4];
	struct<17> Local_69[8];
	struct<6> Local_70 = { 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 4;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 4;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 4;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 4;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 4;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 4;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 4;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 8;
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
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int* iLocal_160 = NULL;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int* iLocal_163 = NULL;
	int iLocal_164 = 0;
	int iLocal_165[3] = { 0, 0, 0 };
	int iLocal_166[3] = { 0, 0, 0 };
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179[2] = { 0, 0 };
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_188[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_189[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_190[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_191[1] = { 0 };
	int iLocal_192[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_193[1] = { 0 };
	int iLocal_194 = 0;
	bool bLocal_195 = 0;
	int iLocal_196 = 0;
	bool bLocal_197 = 0;
	int iLocal_198 = 0;
	bool bLocal_199 = 0;
	bool bLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	bool bLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	bool bLocal_209 = 0;
	bool bLocal_210 = 0;
	bool bLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	bool bLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	bool bLocal_218 = 0;
	int iLocal_219 = 0;
	bool bLocal_220 = 0;
	bool bLocal_221 = 0;
	bool bLocal_222 = 0;
	bool bLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	bool bLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	bool bLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	bool bLocal_234 = 0;
	bool bLocal_235 = 0;
	bool bLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	bool bLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	bool bLocal_244 = 0;
	int iLocal_245 = 0;
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	bool bLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	bool bLocal_268 = 0;
	bool bLocal_269 = 0;
	bool bLocal_270 = 0;
	bool bLocal_271 = 0;
	bool bLocal_272 = 0;
	bool bLocal_273 = 0;
	bool bLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	bool bLocal_281 = 0;
	bool bLocal_282 = 0;
	int iLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	bool bLocal_287 = 0;
	bool bLocal_288 = 0;
	bool bLocal_289 = 0;
	bool bLocal_290 = 0;
	bool bLocal_291 = 0;
	bool bLocal_292 = 0;
	bool bLocal_293 = 0;
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	bool bLocal_296 = 0;
	bool bLocal_297 = 0;
	bool bLocal_298 = 0;
	bool bLocal_299 = 0;
	int iLocal_300 = 0;
	bool bLocal_301 = 0;
	bool bLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	bool bLocal_305 = 0;
	bool bLocal_306 = 0;
	bool bLocal_307 = 0;
	bool bLocal_308 = 0;
	bool bLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	bool bLocal_313 = 0;
	int iLocal_314 = 0;
	bool bLocal_315 = 0;
	bool bLocal_316 = 0;
	bool bLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	bool bLocal_321 = 0;
	bool bLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	bool bLocal_327 = 0;
	int iLocal_328 = 0;
	bool bLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	bool bLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	bool bLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	bool bLocal_340 = 0;
	int iLocal_341 = 0;
	bool bLocal_342 = 0;
	bool bLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	bool bLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	bool bLocal_354 = 0;
	bool bLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	bool bLocal_359 = 0;
	bool bLocal_360 = 0;
	int iLocal_361 = 0;
	bool bLocal_362 = 0;
	bool bLocal_363 = 0;
	bool bLocal_364 = 0;
	int iLocal_365 = 0;
	bool bLocal_366 = 0;
	bool bLocal_367 = 0;
	bool bLocal_368 = 0;
	bool bLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	bool bLocal_374 = 0;
	bool bLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	bool bLocal_378 = 0;
	bool bLocal_379 = 0;
	bool bLocal_380 = 0;
	bool bLocal_381 = 0;
	bool bLocal_382 = 0;
	bool bLocal_383 = 0;
	bool bLocal_384 = 0;
	bool bLocal_385 = 0;
	bool bLocal_386 = 0;
	bool bLocal_387 = 0;
	bool bLocal_388 = 0;
	bool bLocal_389 = 0;
	bool bLocal_390 = 0;
	bool bLocal_391 = 0;
	bool bLocal_392 = 0;
	int iLocal_393 = 0;
	bool bLocal_394 = 0;
	int iLocal_395 = 0;
	bool bLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	bool bLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	bool bLocal_404 = 0;
	bool bLocal_405 = 0;
	bool bLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	struct<3> Local_410 = { 0, 0, 0 } ;
	struct<3> Local_411 = { 0, 0, 0 } ;
	struct<3> Local_412 = { 0, 0, 0 } ;
	struct<3> Local_413 = { 0, 0, 0 } ;
	struct<3> Local_414 = { 0, 0, 0 } ;
	struct<3> Local_415 = { 0, 0, 0 } ;
	struct<3> Local_416 = { 0, 0, 0 } ;
	struct<3> Local_417 = { 0, 0, 0 } ;
	struct<3> Local_418 = { 0, 0, 0 } ;
	struct<3> Local_419 = { 0, 0, 0 } ;
	struct<3> Local_420 = { 0, 0, 0 } ;
	float fLocal_421 = 0f;
	float fLocal_422 = 0f;
	float fLocal_423 = 0f;
	float fLocal_424 = 0f;
	float fLocal_425 = 0f;
	float fLocal_426 = 0f;
	float fLocal_427 = 0f;
	float fLocal_428 = 0f;
	float fLocal_429 = 0f;
	float fLocal_430 = 0f;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	float fLocal_434 = 0f;
	float fLocal_435 = 0f;
	float fLocal_436 = 0f;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_515[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_516 = 0;
	var uLocal_517 = 16;
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
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	struct<6> Local_685 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_686[48] = "";
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 2;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 2;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 20;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = -1;
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
	var uLocal_733 = 1065353216;
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
	var uLocal_760 = -1;
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
	var uLocal_790 = 1065353216;
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
	var uLocal_817 = -1;
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
	var uLocal_847 = 1065353216;
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
	var uLocal_874 = -1;
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
	var uLocal_904 = 1065353216;
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
	var uLocal_931 = -1;
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
	var uLocal_961 = 1065353216;
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
	var uLocal_988 = -1;
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
	var uLocal_1018 = 1065353216;
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
	var uLocal_1045 = -1;
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
	var uLocal_1075 = 1065353216;
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
	var uLocal_1102 = -1;
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
	var uLocal_1132 = 1065353216;
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
	var uLocal_1159 = -1;
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
	var uLocal_1189 = 1065353216;
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
	var uLocal_1216 = -1;
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
	var uLocal_1246 = 1065353216;
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
	var uLocal_1273 = -1;
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
	var uLocal_1303 = 1065353216;
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
	var uLocal_1330 = -1;
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
	var uLocal_1360 = 1065353216;
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
	var uLocal_1387 = -1;
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
	var uLocal_1417 = 1065353216;
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
	var uLocal_1444 = -1;
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
	var uLocal_1474 = 1065353216;
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
	var uLocal_1501 = -1;
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
	var uLocal_1531 = 1065353216;
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
	var uLocal_1558 = -1;
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
	var uLocal_1588 = 1065353216;
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
	var uLocal_1615 = -1;
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
	var uLocal_1645 = 1065353216;
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
	var uLocal_1672 = -1;
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
	var uLocal_1702 = 1065353216;
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
	var uLocal_1729 = -1;
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
	var uLocal_1759 = 1065353216;
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
	var uLocal_1786 = -1;
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
	var uLocal_1816 = 1065353216;
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
	var uLocal_1840 = 16;
	var uLocal_1841 = 0;
	var uLocal_1842 = -1082130432;
	var uLocal_1843 = 0;
	var uLocal_1844 = -1082130432;
	var uLocal_1845 = 0;
	var uLocal_1846 = -1082130432;
	var uLocal_1847 = 0;
	var uLocal_1848 = -1082130432;
	var uLocal_1849 = 0;
	var uLocal_1850 = -1082130432;
	var uLocal_1851 = 0;
	var uLocal_1852 = -1082130432;
	var uLocal_1853 = 0;
	var uLocal_1854 = -1082130432;
	var uLocal_1855 = 0;
	var uLocal_1856 = -1082130432;
	var uLocal_1857 = 0;
	var uLocal_1858 = -1082130432;
	var uLocal_1859 = 0;
	var uLocal_1860 = -1082130432;
	var uLocal_1861 = 0;
	var uLocal_1862 = -1082130432;
	var uLocal_1863 = 0;
	var uLocal_1864 = -1082130432;
	var uLocal_1865 = 0;
	var uLocal_1866 = -1082130432;
	var uLocal_1867 = 0;
	var uLocal_1868 = -1082130432;
	var uLocal_1869 = 0;
	var uLocal_1870 = -1082130432;
	var uLocal_1871 = 0;
	var uLocal_1872 = -1082130432;
	var uLocal_1873 = 16;
	var uLocal_1874 = 0;
	var uLocal_1875 = -1082130432;
	var uLocal_1876 = 0;
	var uLocal_1877 = -1082130432;
	var uLocal_1878 = 0;
	var uLocal_1879 = -1082130432;
	var uLocal_1880 = 0;
	var uLocal_1881 = -1082130432;
	var uLocal_1882 = 0;
	var uLocal_1883 = -1082130432;
	var uLocal_1884 = 0;
	var uLocal_1885 = -1082130432;
	var uLocal_1886 = 0;
	var uLocal_1887 = -1082130432;
	var uLocal_1888 = 0;
	var uLocal_1889 = -1082130432;
	var uLocal_1890 = 0;
	var uLocal_1891 = -1082130432;
	var uLocal_1892 = 0;
	var uLocal_1893 = -1082130432;
	var uLocal_1894 = 0;
	var uLocal_1895 = -1082130432;
	var uLocal_1896 = 0;
	var uLocal_1897 = -1082130432;
	var uLocal_1898 = 0;
	var uLocal_1899 = -1082130432;
	var uLocal_1900 = 0;
	var uLocal_1901 = -1082130432;
	var uLocal_1902 = 0;
	var uLocal_1903 = -1082130432;
	var uLocal_1904 = 0;
	var uLocal_1905 = -1082130432;
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
	var uLocal_1922 = -1082130432;
	var uLocal_1923 = -1082130432;
	var uLocal_1924 = 1;
	var uLocal_1925 = 1;
	var uLocal_1926 = 1;
	var uLocal_1927 = -1;
	var uLocal_1928 = -1;
	var uLocal_1929 = -1;
	char* sLocal_1930 = NULL;
	char* sLocal_1931 = NULL;
	int iLocal_1932 = 0;
	int iLocal_1933 = 0;
	int iLocal_1934 = 0;
	int iLocal_1935 = 0;
	struct<3> Local_1936 = { 0, 0, 0 } ;
	struct<3> Local_1937 = { 0, 0, 0 } ;
	struct<3> Local_1938 = { 0, 0, 0 } ;
	struct<3> Local_1939 = { 0, 0, 0 } ;
	float fLocal_1940 = 0f;
	float fLocal_1941 = 0f;
	float fLocal_1942 = 0f;
	float fLocal_1943 = 0f;
	float fLocal_1944 = 0f;
	float fLocal_1945 = 0f;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	bool bLocal_1954 = 0;
	int iLocal_1955 = 0;
	char* sLocal_1956 = NULL;
	float fLocal_1957 = 0f;
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_33 = 3;
	fLocal_36 = 80f;
	fLocal_37 = 140f;
	fLocal_38 = 180f;
	iLocal_44 = 1;
	iLocal_45 = 65;
	iLocal_46 = 49;
	iLocal_47 = 64;
	iLocal_51 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_52 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_53 = 1f;
	iLocal_501 = -1;
	iLocal_503 = AUDIO::GET_SOUND_ID();
	iLocal_504 = AUDIO::GET_SOUND_ID();
	iLocal_505 = AUDIO::GET_SOUND_ID();
	iLocal_506 = AUDIO::GET_SOUND_ID();
	sLocal_1930 = "missexile1_cargoplaneleadinoutexile_1_intleadin";
	sLocal_1931 = "shake_cam_all@";
	iLocal_1934 = -1;
	iLocal_1935 = -1;
	Local_1936 = { -818.494f, 178.903f, 71.232f };
	Local_1937 = { 0f, 0f, -4.68f };
	Local_1938 = { 1973.871f, 3820.796f, 33.042f };
	Local_1939 = { 0f, 0f, 43.56f };
	fLocal_1940 = 0.2f;
	fLocal_1941 = 0.1f;
	fLocal_1942 = 0.7f;
	fLocal_1943 = 0.676f;
	fLocal_1944 = 0.697f;
	fLocal_1945 = 0.676f;
	sLocal_1956 = "exile1_customswitch";
	fLocal_1957 = -9999f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1014();
		func_1012();
		func_1010();
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_EX1", 0);
		if (func_936())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_934(0);
				func_930();
				func_929();
				switch (iLocal_56)
				{
					case 0:
						func_919();
						break;
					case 1:
					case 2:
					case 3:
						func_898();
						break;
					case 4:
						func_875();
						break;
					case 5:
						func_857();
						break;
					case 6:
						func_176();
						break;
					case 7:
						func_1();
						break;
					}
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1DF
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	bool bVar6;
	if (!iLocal_196)
	{
		iVar0 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
		if (!bLocal_195)
		{
			if (!bLocal_329)
			{
				bLocal_329 = AUDIO::LOAD_STREAM("Plane_Wind_Pt2", "EXILE_1");
			}
			else if (!iLocal_330)
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(1903.29f, 4085.2f, 1462.66f);
				iLocal_330 = 1;
			}
			else if (!iLocal_331)
			{
				AUDIO::SET_VARIABLE_ON_STREAM("INOUT", ((fLocal_430 - 1f) * -1f));
			}
			if (!bLocal_392)
			{
				bLocal_392 = AUDIO::PREPARE_MUSIC_EVENT("EXL1_JUMPED");
			}
			MISC::SET_WIND(1f);
			MISC::SET_WIND_SPEED(11.99f);
			MISC::SET_WIND_DIRECTION(2.92f);
			if (!iLocal_260)
			{
				iLocal_260 = 1;
			}
			if (!iLocal_275)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_456 + 300)
				{
					PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, true, false, false, false, false);
					iLocal_275 = 1;
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
				}
			}
			if (!bLocal_309)
			{
				if (iVar0 >= 1)
				{
					func_175(17);
					func_173(18);
					iLocal_497 = MISC::GET_GAME_TIMER();
					bLocal_309 = true;
				}
			}
			if (!iLocal_318)
			{
				if (iVar0 == 0)
				{
					__LIB_0__::func_499(167, 0);
					iLocal_318 = 1;
				}
			}
			else if (!iLocal_319)
			{
				if (iVar0 != 0)
				{
					__LIB_0__::func_498(0, -1);
					iLocal_319 = 1;
				}
			}
			if (bLocal_313 || bLocal_302)
			{
				if (!iLocal_393)
				{
					if (bLocal_392)
					{
						iLocal_393 = __LIB_17__::func_99("EXL1_JUMPED");
					}
					else
					{
						iLocal_393 = 1;
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[0 /*3*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_62[0 /*3*/], false))
			{
				if (!iLocal_407)
				{
					iLocal_407 = func_173(16);
				}
				if (!iLocal_377)
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, true, false, false, false, false);
					iLocal_377 = 1;
				}
				iLocal_508 = MISC::GET_GAME_TIMER() + 2000;
			}
			else
			{
				if (iLocal_377)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_508 || ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < 20f)
					{
						ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
						iLocal_377 = 0;
					}
				}
				if (iLocal_407)
				{
					func_175(16);
					iLocal_407 = 0;
				}
			}
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_62[0 /*3*/], true) };
			if (Var1.f_2 <= 1400f)
			{
				if (((ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_62[0 /*3*/]) && !ENTITY::IS_ENTITY_IN_AIR(Local_62[0 /*3*/])) && !ENTITY::IS_ENTITY_ATTACHED(Local_62[0 /*3*/])) && (func_169(Local_62[0 /*3*/], &fVar2) < 3f || ENTITY::IS_ENTITY_IN_WATER(Local_62[0 /*3*/])))
				{
					AUDIO::STOP_SOUND(iLocal_506);
					VEHICLE::EXPLODE_VEHICLE(Local_62[0 /*3*/], true, false);
				}
			}
		}
		else
		{
			if (iLocal_377)
			{
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
				iLocal_377 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_62[0 /*3*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Local_62[0 /*3*/], false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == Local_62[0 /*3*/])
						{
							PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 1000, true, 0);
						}
					}
				}
			}
			if (iLocal_407)
			{
				func_175(16);
				iLocal_407 = 0;
			}
		}
		if (!bLocal_302)
		{
			CAM::DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE();
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_166[2], true);
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_463)
			{
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, MISC::GET_RANDOM_INT_IN_RANGE(500, 1200), 128);
				__LIB_38__::func_638();
				iLocal_463 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 3000));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true) };
				HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeCargoPlaneDive"), Var3.f_0, Var3.f_1, SYSTEM::FLOOR(ENTITY::GET_ENTITY_HEADING(iLocal_166[2])), 0);
				HUD::SET_RADAR_ZOOM_PRECISE(1f);
			}
			func_145();
			func_141(7);
			if (!iLocal_202)
			{
				iLocal_202 = 1;
			}
			else if (!bLocal_200)
			{
				if (!bLocal_195)
				{
					bLocal_200 = func_139("PF_JUMP", 1, 0);
				}
			}
			if (!bLocal_313)
			{
				if (Local_410.f_1 <= -23f)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (__LIB_17__::func_444(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_166[2]) - 180f), 1103626240))
						{
							if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) >= 3.2f)
							{
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_136(3), "jump_launch_l_to_skydive", 8f, -8f, -1, 180234, 0f, false, false, false);
								iLocal_485 = MISC::GET_GAME_TIMER();
								bLocal_313 = true;
							}
						}
					}
				}
			}
			if (fLocal_436 < 0f)
			{
				if (Local_410.f_1 <= -20f)
				{
					fLocal_436 = 0f;
				}
			}
			else if (!bLocal_313)
			{
				fLocal_436 = (fLocal_436 + (1f * SYSTEM::TIMESTEP()));
				if (fLocal_436 >= 1.2f)
				{
					func_135();
				}
			}
			if (((Local_410.f_1 <= -25f || Local_410.f_2 <= -7f) || Local_410.f_2 >= 7f) || bLocal_313)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[0 /*3*/], false))
				{
					if (!Local_62[0 /*3*/].f_1)
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_62[0 /*3*/], false);
						func_131(0, 0);
					}
				}
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 10, 128);
				iLocal_479 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, true, false, false, false, false);
					__LIB_0__::func_630(169);
				}
				else
				{
					ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
				}
				if (STREAMING::STREAMVOL_IS_VALID(iLocal_683))
				{
					STREAMING::STREAMVOL_DELETE(iLocal_683);
				}
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], false);
				ENTITY::SET_ENTITY_NOWEAPONDECALS(iLocal_166[2], false);
				func_129(14, 0);
				func_129(15, 0);
				func_175(15);
				func_173(17);
				GRAPHICS::DISABLE_SCUFF_DECALS(false);
				HUD::SET_RADAR_ZOOM_PRECISE(0f);
				iLocal_457 = MISC::GET_GAME_TIMER();
				HUD::SET_WAYPOINT_OFF();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
				bLocal_302 = true;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[0 /*3*/], false))
			{
				if (!iLocal_300)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_62[0 /*3*/], 3.5f, 3.5f, 3.5f, false, true, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_62[0 /*3*/], 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_62[0 /*3*/], true);
						iLocal_300 = 1;
					}
				}
				else if (!Local_62[0 /*3*/].f_1)
				{
					if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == Local_62[0 /*3*/])
					{
						func_128(0, 0);
					}
				}
			}
			if (!bLocal_302)
			{
				if (!STREAMING::STREAMVOL_IS_VALID(iLocal_683))
				{
					if (MISC::GET_GAME_TIMER() >= (iLocal_456 + 52000))
					{
						iLocal_683 = STREAMING::STREAMVOL_CREATE_FRUSTUM(315.7f, 3782.6f, 30.1f, __LIB_3__::func_80(8.3f, 0.4f, -22f), 1500f, 12, 127);
					}
				}
				else
				{
					STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(38.74771f, 3802.3857f, 30.7101f);
				}
			}
			if (MISC::GET_GAME_TIMER() >= (iLocal_456 + 60000))
			{
				if (func_125())
				{
					iLocal_196 = 1;
				}
			}
		}
		else
		{
			func_122();
			if (!iLocal_324)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_457 + 1000)
				{
					func_116(0);
					iLocal_324 = 1;
				}
			}
			if (!iLocal_325)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_457 + 800)
				{
					func_114(5, 1065353216);
					iLocal_325 = 1;
				}
			}
			if (MISC::GET_GAME_TIMER() <= iLocal_457 + 1500 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (!Local_66[iVar4 /*3*/].f_2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_66[iVar4 /*3*/]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66[iVar4 /*3*/], 50f, 50f, 8f, false, true, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Falling_Crates", "EXILE_1", true);
							Local_66[iVar4 /*3*/].f_2 = 1;
						}
					}
				}
				iVar4++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[0 /*3*/], false))
			{
				if (!iLocal_345)
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 5f);
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_62[0 /*3*/]))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_62[0 /*3*/]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_62[0 /*3*/], true, 1);
							iLocal_345 = 1;
						}
					}
				}
				else
				{
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 2f);
					fLocal_434 = (fLocal_434 + (0.001f * SYSTEM::TIMESTEP()));
					if (fLocal_434 >= 0.008f)
					{
						fLocal_434 = 0.008f;
					}
				}
				if (!iLocal_372)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_62[0 /*3*/], false))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_506, "Transition_Sound", Local_62[0 /*3*/], "EXILE_1", false, 0);
						iLocal_372 = 1;
					}
				}
				else if (!iLocal_373)
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_62[0 /*3*/], false))
					{
						iLocal_373 = 1;
					}
				}
			}
			if (!bLocal_195)
			{
				if (!iLocal_314)
				{
					if (bLocal_313)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_485 + 1000)
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Parachuting"), false, 1, false);
							TASK::TASK_SKY_DIVE(PLAYER::PLAYER_PED_ID(), false);
							iLocal_314 = 1;
						}
					}
				}
				if (bLocal_313)
				{
					if (MISC::GET_GAME_TIMER() <= iLocal_485 + 2500)
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 144 /*INPUT_PARACHUTE_DEPLOY*/, true);
					}
				}
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (!bLocal_301)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_457 + 600)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 6) == 0)
						{
							bLocal_301 = func_98("EXL1_JUMP", 1, 0, 0, 0);
						}
						else
						{
							bLocal_301 = func_98("EXL1_JUMP2", 1, 0, 0, 0);
						}
						if (bLocal_301)
						{
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
						}
					}
				}
				else if (!iLocal_303)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (Var5.f_2 > 40f && ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
						{
							if (func_139("PF_PARA", 1, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 12f, 4);
								iLocal_303 = 1;
							}
						}
					}
				}
				else if (!iLocal_304)
				{
					if (!bLocal_309)
					{
						iLocal_304 = func_96("PF_FALLHLP", 0, 0);
					}
					else
					{
						iLocal_304 = 1;
					}
				}
				else if (!bLocal_305)
				{
					if (bLocal_309)
					{
						bLocal_305 = true;
						if (MISC::GET_GAME_TIMER() >= iLocal_478)
						{
							if (__LIB_0__::func_1("PF_FALLHLP"))
							{
								HUD::CLEAR_HELP(false);
								iLocal_478 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
					}
					else
					{
						bLocal_305 = func_96("PF_PARHLP", 0, 0);
					}
				}
				else if ((((((bLocal_309 && iVar0 < 3) && iVar0 != -1) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && fLocal_427 == 0f) && !iLocal_311)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_478)
					{
						if (__LIB_0__::func_1("PF_PARHLP"))
						{
							HUD::CLEAR_HELP(false);
							iLocal_478 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
					if (bLocal_308)
					{
						if (!bLocal_306)
						{
							bLocal_306 = func_96("PF_PARHLP2", 0, 0);
						}
						else if (!bLocal_307)
						{
							if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
							{
								bLocal_307 = func_96("PF_PARHLP3_KM", 0, 0);
							}
							else
							{
								bLocal_307 = func_96("PF_PARHLP3", 0, 0);
							}
						}
					}
				}
				else
				{
					if ((((__LIB_0__::func_1("PF_PARHLP") && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) || __LIB_0__::func_1("PF_PARHLP2")) || __LIB_0__::func_1("PF_PARHLP3")) || __LIB_0__::func_1("PF_FALLHLP"))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_478)
						{
							HUD::CLEAR_HELP(false);
							iLocal_478 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						if (__LIB_0__::func_1("PF_PARHLP3"))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_478)
							{
								HUD::CLEAR_HELP(false);
								iLocal_478 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
					}
				}
				func_135();
				bVar6 = false;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_166[2], false) || !ENTITY::IS_ENTITY_DEAD(iLocal_166[2], false))
					{
						if (((!iLocal_311 && !bLocal_315) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
						{
							__LIB_17__::func_112(&Local_28, iLocal_166[2], 0, 0, 1, 1, 1);
							bVar6 = true;
						}
					}
				}
				if (!bVar6)
				{
					__LIB_0__::func_345(&Local_28, 0, 0);
					if (iLocal_408)
					{
						func_175(19);
						iLocal_408 = 0;
					}
				}
				else if (!iLocal_408)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						iLocal_408 = func_173(19);
					}
				}
				else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					func_175(19);
					iLocal_408 = 0;
				}
				if (!bLocal_308)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE() || CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
					{
						bLocal_308 = true;
					}
					else if ((bVar6 && !__LIB_0__::func_77(0)) && __LIB_0__::func_669(1, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || bLocal_305)
						{
							bLocal_308 = func_96("PF_FALHLP", 0, 0);
						}
					}
				}
				else if ((CAM::IS_GAMEPLAY_HINT_ACTIVE() || __LIB_0__::func_77(0)) || !bVar6)
				{
					if (__LIB_0__::func_1("PF_FALHLP"))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_478)
						{
							HUD::CLEAR_HELP(false);
							iLocal_478 = MISC::GET_GAME_TIMER() + 1000;
						}
					}
				}
			}
			if (iLocal_310)
			{
				if (iLocal_76 == 2 || bLocal_195)
				{
					if (!__LIB_0__::func_75())
					{
						func_52();
					}
				}
			}
			else if (iLocal_311)
			{
				if (!iLocal_370)
				{
					if (!__LIB_0__::func_75())
					{
						AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
						iLocal_370 = 1;
					}
				}
				if (!bLocal_394)
				{
					bLocal_394 = __LIB_17__::func_99("EXL1_LANDED");
				}
				if (__LIB_0__::func_501("PF_LAND", 0, 0))
				{
					__LIB_17__::func_450(0, 1, 0, 0);
				}
				if (MISC::GET_GAME_TIMER() >= iLocal_484 + 3000)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
					iLocal_310 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < 10f) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					fLocal_427 = (fLocal_427 + (1f * SYSTEM::TIMESTEP()));
					if (!iLocal_409)
					{
						func_175(18);
						iLocal_409 = 1;
					}
					if (fLocal_427 >= 1.5f)
					{
						if (!iLocal_312)
						{
							if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) == iLocal_479)
							{
							}
							iLocal_312 = 1;
						}
						iLocal_484 = MISC::GET_GAME_TIMER();
						iLocal_311 = 1;
					}
				}
				else
				{
					fLocal_427 = 0f;
				}
			}
			else
			{
				if (!bLocal_394)
				{
					bLocal_394 = __LIB_17__::func_99("EXL1_LANDED");
				}
				if (!iLocal_409)
				{
					func_175(18);
					iLocal_409 = 1;
				}
				if (!bLocal_315)
				{
					bLocal_315 = func_139("PF_LAND", 1, 0);
				}
			}
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0xF77
{
	int iVar0;
	switch (iLocal_61)
	{
		case 0:
			func_29(1, 1, 1, 1);
			func_129(14, 0);
			func_129(15, 0);
			func_129(3, 1);
			func_129(1, 1);
			__LIB_17__::func_57();
			iVar0 = 0;
			while (iVar0 < Local_62.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_62[iVar0 /*3*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_62[iVar0 /*3*/]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_64.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*3*/]))
				{
					OBJECT::DELETE_OBJECT(&(Local_64[iVar0 /*3*/]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_69.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*17*/]))
				{
					PED::DELETE_PED(&(Local_69[iVar0 /*17*/]));
				}
				iVar0++;
			}
			func_116(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_166[2], false);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2]);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2], 6, func_27(), true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2], 37600f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_166[2], true);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_166[2], 1f);
				AUDIO::STOP_STREAM();
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Pt2_Fail", iLocal_166[2], "exile_1", false, 0);
				func_114(5, 1065353216);
				func_114(1, 1065353216);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 38.74771f, 3802.3857f, 30.7101f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -25.7f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			func_24(6, 1, 2100);
			CAM::SHAKE_CAM(iLocal_180, "HAND_SHAKE", 0.6f);
			iLocal_439 = MISC::GET_GAME_TIMER();
			iLocal_61 = 1;
			break;
		case 1:
			if (!iLocal_334)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_166[2]) >= 39600f)
					{
						CAM::SHAKE_CAM(iLocal_181, "LARGE_EXPLOSION_SHAKE", 0.25f);
						func_114(6, 1065353216);
						func_114(7, 1065353216);
						func_114(8, 1065353216);
						iLocal_334 = 1;
						iLocal_61 = 2;
						func_3(8);
					}
				}
			}
			break;
		case 2:
			if (bLocal_197)
			{
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[2]))
				{
					VEHICLE::DELETE_VEHICLE(&(iLocal_166[2]));
				}
			}
			iLocal_352 = 1;
			break;
	}
}

void func_3(int iParam0)//Position - 0x11C7
{
	char* sVar0;
	if (func_125())
	{
		func_22();
		__LIB_17__::func_450(1, 1, 1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("EXL1_MISSION_FAILED");
		iLocal_55 = 1;
		iLocal_57 = iParam0;
		switch (iLocal_57)
		{
			case 1:
				sVar0 = "PF_FAIL1";
				break;
			case 2:
				sVar0 = "PF_FAIL2";
				break;
			case 3:
				sVar0 = "PF_FAIL3";
				break;
			case 0:
				sVar0 = "PF_FAIL4";
				break;
			case 5:
				sVar0 = "PF_FAIL5";
				break;
			case 6:
				sVar0 = "PF_FAIL6";
				break;
			case 7:
				sVar0 = "PF_FAIL7";
				break;
			case 4:
				sVar0 = "PF_FAIL10";
				break;
			case 9:
				sVar0 = "PF_FAIL8";
				break;
			case 10:
				sVar0 = "PF_FAIL9";
				break;
			case 8:
				sVar0 = "CMN_TDIED" /* GXT: ~s~Trevor died. */;
				break;
			case 11:
				sVar0 = "PF_FAIL11";
				break;
			case 12:
				sVar0 = "CMN_MDIED" /* GXT: ~s~Michael died. */;
				break;
			case 13:
				sVar0 = "PF_FAIL12";
				break;
			case 14:
				sVar0 = "PF_FAIL13";
				break;
			case 15:
				sVar0 = "PF_FAIL14";
				break;
		}
		func_4(sVar0);
	}
}

void func_4(char* sParam0)//Position - 0x12EF
{
	__LIB_0__::func_381(sParam0);
	func_5(0);
}

void func_5(int iParam0)//Position - 0x1302
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_6(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_6(int iParam0)//Position - 0x1347
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_6();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_7(&(Global_113386.f_2363.f_539), iVar1);
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

void func_7(var uParam0, int iParam1)//Position - 0x1457
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
			if (!func_9(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_9(int iParam0, var uParam1, float fParam2)//Position - 0x162B
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
			return func_9(8, uParam1, fParam2);
			break;
		case 10:
			return func_9(8, uParam1, fParam2);
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

void func_22()//Position - 0x2302
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_175))
	{
		HUD::REMOVE_BLIP(&iLocal_175);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_177))
	{
		HUD::REMOVE_BLIP(&iLocal_177);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_176))
	{
		HUD::REMOVE_BLIP(&iLocal_176);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_178))
	{
		HUD::REMOVE_BLIP(&iLocal_178);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_0__::func_621(&(Local_69[iVar0 /*17*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_179)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_179[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_179[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_67.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_67[iVar0 /*6*/].f_4))
		{
			HUD::REMOVE_BLIP(&(Local_67[iVar0 /*6*/].f_4));
		}
		iVar0++;
	}
}

void func_24(int iParam0, bool bParam1, int iParam2)//Position - 0x243B
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	func_26(iParam0, &Var0, &Var1, &fVar2);
	func_25(&iLocal_180);
	CAM::DETACH_CAM(iLocal_180);
	CAM::STOP_CAM_POINTING(iLocal_180);
	CAM::SET_CAM_COORD(iLocal_180, Var0);
	CAM::SET_CAM_ROT(iLocal_180, Var1, 2);
	CAM::SET_CAM_FOV(iLocal_180, fVar2);
	if (bParam1)
	{
		func_26(iParam0 + 1, &Var0, &Var1, &fVar2);
		func_25(&iLocal_181);
		CAM::SET_CAM_COORD(iLocal_181, Var0);
		CAM::SET_CAM_ROT(iLocal_181, Var1, 2);
		CAM::SET_CAM_FOV(iLocal_181, fVar2);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_181, iLocal_180, iParam2, 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_25(int iParam0)//Position - 0x24D8
{
	if (CAM::DOES_CAM_EXIST(iLocal_181))
	{
		CAM::DESTROY_CAM(iLocal_181, false);
	}
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		CAM::DESTROY_CAM(*iParam0, false);
	}
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		*iParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	}
}

void func_26(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x251B
{
	switch (iParam0)
	{
		case 6:
			*uParam1 = { 315.7f, 3782.6f, 30.1f };
			*uParam2 = { 8.3f, 0.4f, -22f };
			*fParam3 = 27.6f;
			break;
		case 7:
			*uParam1 = { 316.5f, 3791.2f, 30.7f };
			*uParam2 = { 10.3f, 0.4f, -16.1f };
			*fParam3 = 27.6f;
			break;
	}
}

char* func_27()//Position - 0x2598
{
	return "planeFight";
}

void func_29(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x25E9
{
	__LIB_17__::func_450(1, 1, 1, 0);
	__LIB_0__::func_532(bParam0, 1, 1, 0, 0, 0, 0);
	if (bParam0)
	{
		__LIB_17__::func_111();
		HUD::DISPLAY_RADAR(false);
		HUD::DISPLAY_HUD(false);
		iLocal_438 = MISC::GET_GAME_TIMER();
	}
	else
	{
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			__LIB_0__::func_671(0);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(iLocal_182))
			{
				CAM::DESTROY_CAM(iLocal_182, false);
			}
			__LIB_17__::func_98(&iLocal_180);
			__LIB_17__::func_98(&iLocal_181);
			if (bParam3)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		iLocal_196 = 0;
		bLocal_197 = false;
		iLocal_198 = 0;
		bLocal_199 = false;
		iLocal_61 = 0;
		if (bParam2)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
}

void func_52()//Position - 0x2BF8
{
	__LIB_0__::func_544(6, 1, 0, 1, 0);
	__LIB_0__::func_526(0, 0);
	func_1010();
}

int func_96(char* sParam0, bool bParam1, int iParam2)//Position - 0x826E
{
	if (iParam2 || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_125())
		{
			if (!bParam1)
			{
				__LIB_0__::func_151(sParam0, -1);
			}
			else
			{
				__LIB_0__::func_190(sParam0);
			}
			return 1;
		}
	}
	return 0;
}

int func_98(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x82BE
{
	struct<2> Var0;
	if ((iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!__LIB_0__::func_75() && func_125())
		{
			if (iParam2 == 0)
			{
				return __LIB_16__::func_7(&uLocal_517, "EXL1AUD", sParam0, 8, iParam4, 0, 0);
			}
			else
			{
				StringCopy(&Var0, sParam0, 16);
				StringConCat(&Var0, "_", 16);
				StringIntConCat(&Var0, iParam2, 16);
				if (!bParam3)
				{
					return __LIB_16__::func_9(&uLocal_517, "EXL1AUD", sParam0, &Var0, 8, iParam4, 0);
				}
				else
				{
					return __LIB_16__::func_936(&uLocal_517, "EXL1AUD", sParam0, &Var0, 8, iParam4, 0);
				}
			}
		}
	}
	return 0;
}

void func_114(int iParam0, int iParam1)//Position - 0x8ACB
{
	char* sVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	if (!iLocal_515[iParam0])
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = iParam1;
			bVar4 = true;
			bVar5 = true;
			switch (iParam0)
			{
				case 0:
					sVar0 = "scr_ex1_moving_cloud";
					Var1 = { func_115(16) };
					Var2 = { 0f, 0f, 180f };
					bVar5 = false;
					break;
				case 1:
					sVar0 = "scr_ex1_cargo_engine_trail";
					Var1 = { func_115(15) };
					bVar4 = true;
					break;
				case 2:
					sVar0 = "scr_ex1_cargo_engine_burst";
					Var1 = { func_115(15) };
					bVar4 = false;
					break;
				case 3:
					sVar0 = "scr_ex1_cargo_smoke";
					Var1 = { 2.9f, -29.5f, -3.15734f };
					Var2 = { 0f, 0f, 90f };
					bVar4 = true;
					break;
				case 4:
					sVar0 = "scr_ex1_cargo_debris";
					Var1 = { func_115(17) };
					Var2 = { 0f, 0f, 0f };
					bVar4 = true;
					break;
				case 5:
					sVar0 = "scr_ex1_cargo_debris";
					Var1 = { func_115(17) };
					Var2 = { 0f, 0f, 0f };
					bVar4 = true;
					break;
				case 6:
					sVar0 = "scr_ex1_plane_exp";
					Var1 = { 0f, 31f, -3f };
					bVar4 = false;
					break;
				case 7:
					sVar0 = "scr_ex1_dust_impact";
					Var1 = { 0f, 31f, -3f };
					bVar4 = false;
					break;
				case 8:
					sVar0 = "scr_ex1_dust_settle";
					Var1 = { 0f, 31f, -3f };
					bVar4 = true;
					break;
				case 9:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { -2.7864f, -23.3082f, -2.3844f };
					bVar4 = true;
					break;
				case 10:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { -3.3518f, -21.8452f, -1.3641f };
					bVar4 = true;
					break;
				case 11:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { -2.9242f, -19.124f, -0.3526f };
					bVar4 = true;
					break;
				case 12:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { 3.055f, -21.4325f, -3.6115f };
					bVar4 = true;
					break;
				case 13:
					sVar0 = "cs_ex1_cargo_fire";
					Var1 = { 2.9188f, -15.3878f, -3.0399f };
					bVar4 = true;
					break;
				case 14:
					sVar0 = "cs_ex1_sparking_wires_sm";
					Var1 = { -3.2248f, -19.7849f, -1.1471f };
					bVar4 = true;
					break;
				case 15:
					sVar0 = "cs_ex1_sparking_wires_sm";
					Var1 = { 0.6253f, -14.5067f, -0.3474f };
					bVar4 = true;
					break;
			}
			if (bVar4)
			{
				if (bVar5)
				{
					iLocal_514[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(sVar0, iLocal_166[2], Var1, Var2, fVar3, false, false, false);
				}
				else
				{
					iLocal_514[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], Var1), Var2, fVar3, false, false, false, false);
				}
				iLocal_515[iParam0] = 1;
			}
			else
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(sVar0, iLocal_166[2], Var1, Var2, fVar3, false, false, false);
			}
		}
	}
}

Vector3 func_115(int iParam0)//Position - 0x8DB6
{
	switch (iParam0)
	{
		case 0:
			return 1982.1f, 3829.6f, 32.3f;
			break;
		case 1:
			return 1983.9569f, 3823.3337f, 31.34886f;
			break;
		case 2:
			return 2134.84f, 4784.11f, 39.97f;
			break;
		case 3:
			return -2834.33f, 3858.68f, 35f;
			break;
		case 4:
			return 2411.72f, 5802.24f, 100.29f;
			break;
		case 5:
			return 2758.59f, 4188.9f, 371.89f;
			break;
		case 6:
			return 510f, -3833f, 412f;
			break;
		case 7:
			return 1362f, -3890f, 750f;
			break;
		case 8:
			return 1989f, 4108f, 1456f;
			break;
		case 9:
			return -1.5f, -20.6f, -4f;
			break;
		case 10:
			return 2155.72f, 4808.02f, 40.19f;
			break;
		case 11:
			return 1982.63f, 3827.46f, 31.42f;
			break;
		case 12:
			return 2134.0942f, 4797.4067f, 40.12542f;
			break;
		case 13:
			return 0f, -23.8936f, -2.1f;
			break;
		case 14:
			return 0f, -24f, -3.55734f;
			break;
		case 15:
			return 27.4893f, -12.1439f, -1.92886f;
			break;
		case 16:
			return 0f, -125f, -13f;
			break;
		case 17:
			return 0f, -24f, -3.55734f;
			break;
		case 18:
			return 1953.2979f, 3961.83f, 31.55935f;
			break;
		case 19:
			return 2047.9f, 4768.06f, 40.06f;
			break;
		case 20:
			return -3172.5667f, 3162.3088f, 5.71102f;
			break;
		case 21:
			return -830.426f, 168.64005f, 68.80289f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_116(bool bParam0)//Position - 0x900A
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		if (bParam0)
		{
			VEHICLE::DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(iLocal_166[2], 0, 255);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_171))
			{
				iLocal_171 = OBJECT::CREATE_OBJECT(func_117(18), ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), true, true, false);
				ENTITY::SET_ENTITY_COORDS(iLocal_171, ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_171, ENTITY::GET_ENTITY_ROTATION(iLocal_166[2], 2), 2, true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_171, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_171, false, false);
			}
		}
		else
		{
			VEHICLE::ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(iLocal_166[2]);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
			{
				OBJECT::DELETE_OBJECT(&iLocal_171);
			}
		}
	}
}

int func_117(int iParam0)//Position - 0x90B1
{
	switch (iParam0)
	{
		case 0:
			return __LIB_12__::func_894(2);
			break;
		case 1:
			return __LIB_12__::func_894(1);
			break;
		case 3:
			return __LIB_12__::func_894(0);
			break;
		case 4:
			return __LIB_15__::func_957(40);
			break;
		case 2:
			return __LIB_15__::func_957(20);
			break;
		case 7:
			return joaat("S_M_Y_BlackOps_01");
			break;
		case 6:
			return joaat("S_M_M_Pilot_01");
			break;
		case 5:
			return joaat("S_M_M_Pilot_02");
			break;
		case 8:
			return __LIB_0__::func_634(2, 0);
			break;
		case 9:
			return joaat("duster");
			break;
		case 10:
			return joaat("cargoplane");
			break;
		case 12:
			return joaat("mesa3");
			break;
		case 11:
			return joaat("lazer");
			break;
		case 13:
			return joaat("prop_mil_crate_01");
			break;
		case 14:
			return joaat("prop_mil_crate_02");
			break;
		case 15:
			return joaat("prop_ld_test_01");
			break;
		case 16:
			return joaat("prop_phone_ing_03");
			break;
		case 17:
			return joaat("prop_phone_ing");
			break;
		case 18:
			return joaat("exile1_lightrig");
			break;
		case 19:
			return joaat("prop_chair_06");
			break;
		case 20:
			return joaat("p_police_radio_hset_s");
			break;
		case 21:
			return __LIB_13__::func_791();
			break;
	}
	return 0;
}

void func_122()//Position - 0x9510
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		iVar0 = 0;
		while (iVar0 < Local_66.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_66[iVar0 /*3*/]))
			{
				if (!Local_66[iVar0 /*3*/].f_1)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_488 + 800)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_66[iVar0 /*3*/], false);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_66[iVar0 /*3*/], 2, -8f, -30f, 23f, 0f, 0f, 0f, 0, false, true, true, false, true);
						if (__LIB_0__::func_76(iLocal_166[2], Local_66[iVar0 /*3*/], 0) >= 40f)
						{
							Local_66[iVar0 /*3*/].f_1 = 1;
						}
					}
				}
				else if (bLocal_302)
				{
					if (MISC::GET_GAME_TIMER() <= iLocal_497 + 10000 || iLocal_497 < 0)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66[iVar0 /*3*/], 30f, 30f, 100f, false, true, 0))
						{
							if (ENTITY::IS_ENTITY_IN_AIR(Local_66[iVar0 /*3*/]))
							{
								Var2 = { ENTITY::GET_ENTITY_COORDS(Local_66[iVar0 /*3*/], true) };
								Var3 = { __LIB_0__::func_79(ENTITY::GET_ENTITY_COORDS(Local_66[iVar0 /*3*/], true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
								if (Var1.f_2 < (Var2.f_2 - 5f))
								{
									Var3 = { Var3 * Vector(90f, 90f, 90f) };
								}
								else
								{
									Var3 = { Var3 * Vector(70f, 70f, 70f) };
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(Local_66[iVar0 /*3*/], 2, Var3, 0f, 0f, 0f, 0, false, true, true, false, true);
								if (Var1.f_2 < (Var2.f_2 - 100f) || Var1.f_2 > (Var2.f_2 + 300f))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_66[iVar0 /*3*/]));
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_125()//Position - 0x9762
{
	if (iLocal_55 == 0 && !__LIB_0__::func_719())
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, bool bParam1)//Position - 0x97BE
{
	char* sVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_62[iParam0 /*3*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_62[iParam0 /*3*/], false) || ENTITY::IS_ENTITY_DEAD(Local_62[iParam0 /*3*/], false))
		{
			if (bParam1)
			{
				if (iLocal_461 < 0)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_62[iParam0 /*3*/], 8f, 8f, 8f, false, true, 0))
					{
						iLocal_461 = iParam0;
						iLocal_462 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(600, 1000));
						bLocal_317 = true;
					}
				}
			}
			switch (iParam0)
			{
				case 0:
					sVar0 = "Car_01";
					break;
				case 1:
					sVar0 = "Car_01";
					break;
				case 2:
					sVar0 = "Car_02";
					break;
				case 3:
					sVar0 = "Car_03";
					break;
				case 4:
					sVar0 = "Car_03";
					break;
				case 5:
					sVar0 = "Car_01";
					break;
				case 6:
					sVar0 = "Car_01";
					break;
				case 7:
					sVar0 = "Car_02";
					break;
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, sVar0, Local_62[iParam0 /*3*/], "EXILE_1", false, 0);
			ENTITY::DETACH_ENTITY(Local_62[iParam0 /*3*/], true, true);
			if (iParam0 != 0)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_62[iParam0 /*3*/], true);
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(Local_62[iParam0 /*3*/], true);
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_62[iParam0 /*3*/], false);
			}
		}
	}
	Local_62[iParam0 /*3*/].f_1 = 1;
}

void func_129(int iParam0, bool bParam1)//Position - 0x990A
{
	if (iLocal_515[iParam0])
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_514[iParam0]))
		{
			if (!bParam1)
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_514[iParam0], false);
			}
			else
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_514[iParam0], false);
			}
		}
		iLocal_515[iParam0] = 0;
	}
}

void func_131(bool bParam0, bool bParam1)//Position - 0x99C4
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_166[2], false))
	{
		if (!bParam1)
		{
			iVar0 = 0;
			while (iVar0 < Local_62.f_0)
			{
				if (!Local_62[iVar0 /*3*/].f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_62[iVar0 /*3*/], false))
					{
						iVar1 = iVar0;
						ENTITY::DETACH_ENTITY(Local_62[iVar0 /*3*/], true, true);
						if (iVar1 != 0)
						{
							VEHICLE::SET_VEHICLE_REDUCE_GRIP(Local_62[iVar0 /*3*/], false);
						}
						if (func_134(iVar1))
						{
							fVar2 = 180f;
						}
						else
						{
							fVar2 = 0f;
						}
						if (bParam0)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Local_62[iVar0 /*3*/], iLocal_166[2], 0, 0, func_132(iVar1, 0), 0f, 0f, 0f, 0f, 0f, fVar2, 100000f, true, true, true, true, 2);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_62[iVar0 /*3*/], iLocal_166[2], 0, func_132(iVar1, 0), 0f, 0f, fVar2, false, false, true, false, 2, true, 0);
						}
					}
				}
				iVar0++;
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
		{
			iVar0 = 0;
			while (iVar0 < Local_63.f_0)
			{
				if (!Local_63[iVar0 /*3*/].f_1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_63[iVar0 /*3*/], false))
					{
						iVar3 = iVar0;
						ENTITY::DETACH_ENTITY(Local_63[iVar0 /*3*/], true, true);
						if (func_134(iVar3))
						{
							fVar4 = 180f;
						}
						else
						{
							fVar4 = 0f;
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_63[iVar0 /*3*/], iLocal_168, 0, func_132(iVar3, 0), 0f, 0f, fVar4, false, false, true, false, 2, true, 0);
					}
				}
				iVar0++;
			}
		}
	}
}

Vector3 func_132(int iParam0, bool bParam1)//Position - 0x9B1D
{
	float fVar0;
	float fVar1;
	float fVar2;
	switch (iParam0)
	{
		case 0:
			fVar0 = 1.6f;
			fVar1 = 17f;
			break;
		case 1:
			fVar0 = 1.6f;
			fVar1 = -14.5f;
			break;
		case 2:
			fVar0 = -1.6f;
			fVar1 = -11.5f;
			break;
		case 3:
			fVar0 = -1.6f;
			fVar1 = -6f;
			break;
		case 4:
			fVar0 = -1.6f;
			fVar1 = 10.2f;
			break;
		case 5:
			fVar0 = -1.6f;
			fVar1 = 15.6f;
			break;
		case 6:
			fVar0 = 1.6f;
			fVar1 = 0f;
			break;
		case 7:
			fVar0 = 1.6f;
			fVar1 = 12f;
			break;
	}
	if (Local_62[iParam0 /*3*/].f_2 == 0)
	{
		fVar2 = -3.37f;
	}
	else
	{
		fVar2 = -3.2f;
	}
	if (bParam1)
	{
		return func_133(fVar0, fVar1, fVar2);
	}
	return fVar0, fVar1, fVar2;
}

Vector3 func_133(struct<3> Param0)//Position - 0x9C18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], Param0);
	}
	return 0f, 0f, 0f;
}

int func_134(int iParam0)//Position - 0x9C42
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 6:
		case 0:
			return 1;
			break;
		case 1:
		case 4:
		case 5:
		case 7:
			return 0;
			break;
	}
	return 0;
}

void func_135()//Position - 0x9C90
{
	bool bVar0;
	switch (iLocal_76)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				iLocal_76 = 1;
			}
			break;
		case 1:
			if (!iLocal_331)
			{
				AUDIO::STOP_STREAM();
				iLocal_331 = 1;
			}
			else if (!bLocal_327)
			{
				bLocal_327 = AUDIO::LOAD_STREAM("Pt2_Succeed", "EXILE_1");
			}
			else if (!iLocal_328)
			{
				AUDIO::PLAY_STREAM_FROM_VEHICLE(iLocal_166[2]);
				iLocal_328 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
				{
					fLocal_428 = (fLocal_428 + (0.8f * SYSTEM::TIMESTEP()));
					if (fLocal_428 >= 1.4f)
					{
						fLocal_428 = 1.4f;
					}
					if (!iLocal_334)
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_166[2]) >= 39600f)
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_166[2], false, false);
							func_114(6, 1065353216);
							func_114(7, 1065353216);
							func_114(8, 1065353216);
							iLocal_334 = 1;
						}
					}
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_166[2], fLocal_428);
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_166[2]) >= 43000f)
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
				bVar0 = true;
			}
			if (bVar0)
			{
				__LIB_0__::func_345(&Local_28, 0, 0);
				if (!ENTITY::IS_ENTITY_DEAD(Local_62[0 /*3*/], false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_62[0 /*3*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_62[0 /*3*/]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[2]))
				{
					VEHICLE::DELETE_VEHICLE(&(iLocal_166[2]));
				}
				__LIB_0__::func_544(6, 1, 0, 1, 0);
				iLocal_76 = 2;
			}
			break;
		case 2:
			break;
	}
}

char* func_136(int iParam0)//Position - 0x9E18
{
	switch (iParam0)
	{
		case 0:
			return "MISSEXILE1_CargoPlane";
			break;
		case 1:
			return "LADDERSBASE";
			break;
		case 2:
			return "LADDERS";
			break;
		case 3:
			return "MISSEXILE1_Cargoplanejumpout";
			break;
		case 4:
			return "CELLPHONE@";
			break;
		case 5:
			return "MISSEXILE1_CargoPlaneLeadInOutEXILE_1_INT";
			break;
		case 6:
			return "missexile1_cargoplaneleadinoutexile_1_intleadin";
			break;
	}
	return "invalid!";
}

int func_139(char* sParam0, int iParam1, int iParam2)//Position - 0x9F16
{
	if (iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if ((iParam2 || !__LIB_0__::func_75()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_125())
			{
				__LIB_0__::func_229(sParam0, 7500, 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_141(int iParam0)//Position - 0x9F78
{
	int iVar0;
	int iVar1;
	char* sVar2;
	switch (iParam0)
	{
		case 5:
			iVar0 = 0;
			while (iVar0 < Local_62.f_0)
			{
				iVar1 = iVar0;
				if (iVar1 != 0)
				{
					if (!Local_62[iVar1 /*3*/].f_1)
					{
						if (Local_410.f_1 >= func_144(iVar1) || ((Local_69[3 /*17*/].f_9 == 2 || PED::IS_PED_INJURED(Local_69[3 /*17*/])) && iVar1 == 6))
						{
							func_128(iVar1, 1);
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_64.f_0)
			{
				if (!Local_64[iVar0 /*3*/].f_1)
				{
					if (Local_410.f_1 >= func_143(iVar0))
					{
						func_142(iVar0, 1);
					}
				}
				iVar0++;
			}
			break;
	}
	if (iLocal_56 == 7 || bLocal_200)
	{
		if (iLocal_459 < 3 && MISC::GET_GAME_TIMER() >= iLocal_460)
		{
			if (iLocal_461 >= 0)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_462)
				{
					if (bLocal_317)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_62[iLocal_461 /*3*/]))
						{
							if (ENTITY::IS_ENTITY_DEAD(Local_62[iLocal_461 /*3*/], false) || !ENTITY::IS_ENTITY_DEAD(Local_62[iLocal_461 /*3*/], false))
							{
								if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_62[iLocal_461 /*3*/], 8f, 8f, 8f, false, true, 0))
								{
									iLocal_461 = -1;
								}
							}
						}
						else
						{
							iLocal_461 = -1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_64[iLocal_461 /*3*/]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_64[iLocal_461 /*3*/], 8f, 8f, 8f, false, true, 0))
						{
							iLocal_461 = -1;
						}
					}
					else
					{
						iLocal_461 = -1;
					}
					if (iLocal_461 >= 0)
					{
						if (iLocal_56 == 5)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar2 = "EXL1_DODGE1";
							}
							else
							{
								sVar2 = "EXL1_CAR";
							}
							if (func_98(sVar2, 0, 0, 0, 0))
							{
								iLocal_461 = -1;
								iLocal_460 = MISC::GET_GAME_TIMER() + 8000;
								iLocal_441 += 3000;
								iLocal_459++;
							}
						}
					}
				}
			}
		}
	}
}

void func_142(int iParam0, bool bParam1)//Position - 0xA15C
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_64[iParam0 /*3*/]))
	{
		if (bParam1)
		{
			if (iLocal_461 < 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_64[iParam0 /*3*/], 8f, 8f, 8f, false, true, 0))
				{
					iLocal_461 = iParam0;
					iLocal_462 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(500, 800));
					bLocal_317 = false;
				}
			}
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_64[iParam0 /*3*/], false);
		ENTITY::DETACH_ENTITY(Local_64[iParam0 /*3*/], true, false);
		ENTITY::APPLY_FORCE_TO_ENTITY(Local_64[iParam0 /*3*/], 3, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, true, true, true, false, true);
	}
	Local_64[iParam0 /*3*/].f_1 = 1;
}

float func_143(int iParam0)//Position - 0xA1F6
{
	int iVar0;
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return -19.16f;
			break;
		case 1:
			return -19.16f;
			break;
		case 2:
			return -15.44f;
			break;
		case 3:
			return -15.34f;
			break;
		case 5:
			return 0.41f;
			break;
		case 6:
			return 0.42f;
			break;
		case 4:
			return 2.54f;
			break;
		case 7:
			return 3.9f;
			break;
	}
	return 100000000f;
}

float func_144(int iParam0)//Position - 0xA296
{
	switch (iParam0)
	{
		case 0:
			return 500f;
			break;
		case 1:
			return -21.8f;
			break;
		case 2:
			return -12.9f;
			break;
		case 3:
			return -12.82f;
			break;
		case 4:
			return 9.98f;
			break;
		case 5:
			return 15.45f;
			break;
		case 6:
			return -20.4f;
			break;
		case 7:
			return -6.12f;
			break;
	}
	return -999999f;
}

void func_145()//Position - 0xA332
{
	func_167();
	func_162();
	func_159();
	func_158();
	func_157();
	func_122();
	func_148();
	if (iLocal_56 == 7)
	{
		func_146(0);
	}
}

void func_146(bool bParam0)//Position - 0xA361
{
	if (!bLocal_302)
	{
		if (!iLocal_250)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_503))
			{
				if (!bParam0)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_503, "Generic_Alarm_Fire_Electronic", func_147(), 0, false, 0, false);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(iLocal_503, "Generic_Alarm_Fire_Electronic", 0, true);
				}
				iLocal_250 = 1;
			}
		}
	}
}

Vector3 func_147()//Position - 0xA3AE
{
	return func_133(0f, 0f, -0.6f);
}

void func_148()//Position - 0xA3C1
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	int iVar6;
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iLocal_467 = 0;
	iVar0 = 0;
	while (iVar0 < Local_69.f_0)
	{
		if (iLocal_55 == 0)
		{
			__LIB_0__::func_631(Local_69[iVar0 /*17*/], &(Local_69[iVar0 /*17*/].f_1), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		if (PED::IS_PED_INJURED(Local_69[iVar0 /*17*/]))
		{
			if (!Local_69[iVar0 /*17*/].f_14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*17*/]))
				{
					if (PED::IS_PED_DEAD_OR_DYING(Local_69[iVar0 /*17*/], true))
					{
						__LIB_0__::func_497(163, 1, 0);
						Local_69[iVar0 /*17*/].f_14 = 1;
					}
				}
			}
			iLocal_467++;
		}
		else
		{
			Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_166[2], ENTITY::GET_ENTITY_COORDS(Local_69[iVar0 /*17*/], true)) };
			fVar3 = (Var2.f_1 - Local_410.f_1);
			fVar4 = fVar3;
			if (fVar4 < 0f)
			{
				fVar4 = (fVar4 * -1f);
			}
			if (iVar0 == 0)
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					if (((fVar3 > 1f && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && Local_69[iVar0 /*17*/].f_9 != 2)
					{
						PED::SET_PED_RESET_FLAG(Local_69[iVar0 /*17*/], 128, true);
					}
				}
			}
			switch (Local_69[iVar0 /*17*/].f_9)
			{
				case 0:
					func_154(iVar0);
					break;
				case 1:
					if (!PED::IS_PED_IN_COMBAT(Local_69[iVar0 /*17*/], 0))
					{
						func_154(iVar0);
					}
					else if (func_153(iVar0, fVar3))
					{
						Local_69[iVar0 /*17*/].f_10 = (Local_69[iVar0 /*17*/].f_10 + (1f * SYSTEM::TIMESTEP()));
						if (Local_69[iVar0 /*17*/].f_10 >= func_152(iVar0))
						{
							func_150(iVar0);
						}
					}
					else
					{
						Local_69[iVar0 /*17*/].f_10 = (Local_69[iVar0 /*17*/].f_10 - (1f * SYSTEM::TIMESTEP()));
						if (Local_69[iVar0 /*17*/].f_10 < 0f)
						{
							Local_69[iVar0 /*17*/].f_10 = 0f;
						}
					}
					break;
				case 2:
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_69[iVar0 /*17*/], Local_69[iVar0 /*17*/].f_11, 0.5f, 0.5f, 1f, false, false, 0) || func_149(fVar3, fVar4)) || TASK::GET_SCRIPT_TASK_STATUS(Local_69[iVar0 /*17*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
					{
						func_154(iVar0);
					}
					break;
			}
			Var5 = { ENTITY::GET_ENTITY_COORDS(Local_69[iVar0 /*17*/], true) };
			if (Var5.f_2 <= (Var1.f_2 - 10f))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[iVar0 /*17*/]));
			}
			if (!PED::IS_PED_INJURED(Local_69[iVar0 /*17*/]))
			{
				if (!Local_69[iVar0 /*17*/].f_16)
				{
					if (PED::IS_PED_RAGDOLL(Local_69[iVar0 /*17*/]))
					{
						iVar6 = 0;
						while (iVar6 < 8)
						{
							if (Local_62[iVar6 /*3*/].f_1)
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_62[iVar6 /*3*/], false))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_62[iVar6 /*3*/], Local_69[iVar0 /*17*/]))
									{
										Local_69[iVar0 /*17*/].f_15 = MISC::GET_GAME_TIMER();
										Local_69[iVar0 /*17*/].f_16 = 1;
									}
								}
							}
							iVar6++;
						}
					}
				}
				else if (PED::IS_PED_RAGDOLL(Local_69[iVar0 /*17*/]))
				{
					if (MISC::GET_GAME_TIMER() >= Local_69[iVar0 /*17*/].f_15 + 2000)
					{
						PED::APPLY_DAMAGE_TO_PED(Local_69[iVar0 /*17*/], 1000, true, 0);
					}
				}
				else
				{
					Local_69[iVar0 /*17*/].f_16 = 0;
				}
			}
		}
		iVar0++;
	}
}

int func_149(float fParam0, float fParam1)//Position - 0xA6F2
{
	if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
	{
		if (fParam0 <= -0.8f)
		{
			return 1;
		}
	}
	else if (fParam1 <= 5f)
	{
		return 1;
	}
	return 0;
}

void func_150(int iParam0)//Position - 0xA724
{
	float fVar0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(Local_69[iParam0 /*17*/]))
	{
		fVar0 = 2f;
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_69[iParam0 /*17*/], true) };
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_512);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_512);
		switch (iParam0)
		{
			case 0:
				fVar0 = 1f;
				if (Var1.f_0 >= 2929.46f)
				{
					func_151(iParam0, 2927.64f, 807.39f, 449.09f, fVar0, 0);
				}
				func_151(iParam0, 2927.39f, 811.11f, 448.28f, fVar0, 1);
				break;
			case 1:
				fVar0 = 1f;
				func_151(iParam0, 2927.36f, 811.42f, 448.22f, fVar0, 1);
				break;
			case 3:
				if (Var1.f_0 >= 2928.53f)
				{
					func_151(iParam0, 2928.4f, 787.77f, 453.03f, fVar0, 0);
				}
				func_151(iParam0, 2928.2f, 811.43f, 448.22f, fVar0, 1);
				break;
			case 4:
				if (Var1.f_0 >= 2928.53f)
				{
					func_151(iParam0, 2927.3f, 784.1f, 454.8f, fVar0, 0);
				}
				func_151(iParam0, 2928.3f, 812.7f, 448.6f, fVar0, 1);
				break;
			case 5:
				fVar0 = 1f;
				if (Var1.f_0 >= 2928.53f)
				{
					func_151(iParam0, 2928.7f, 772.1f, 454.8f, fVar0, 0);
				}
				func_151(iParam0, 2927.39f, 811.11f, 448.28f, fVar0, 1);
				break;
			case 6:
				fVar0 = 1f;
				func_151(iParam0, 2927.35f, 810.3f, 448.14f, fVar0, 1);
				break;
			case 7:
				fVar0 = 1f;
				func_151(iParam0, 2928.7f, 772.9f, 448.14f, fVar0, 1);
				func_151(iParam0, 2929.2f, 813f, 448.1f, fVar0, 1);
				break;
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_512);
		TASK::TASK_PERFORM_SEQUENCE(Local_69[iParam0 /*17*/], iLocal_512);
		Local_69[iParam0 /*17*/].f_9 = 2;
	}
}

void func_151(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xA91C
{
	TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, PLAYER::PLAYER_PED_ID(), fParam2, true, 0.5f, 4f, false, 64, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
	if (bParam3)
	{
		Local_69[iParam0 /*17*/].f_11 = { Param1 };
	}
}

float func_152(int iParam0)//Position - 0xA95A
{
	switch (iParam0)
	{
		case 0:
			return 3f;
			break;
		case 1:
			return 2f;
			break;
		case 3:
			return 4f;
			break;
		case 4:
			return 2f;
			break;
		case 5:
			return 4f;
			break;
		case 6:
			return 7f;
			break;
		case 7:
			return 8f;
			break;
	}
	return 1E+11f;
}

int func_153(int iParam0, float fParam1)//Position - 0xA9CD
{
	if (fParam1 > 0f && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
	{
		switch (iParam0)
		{
			case 0:
				if (PED::IS_PED_INJURED(Local_69[1 /*17*/]))
				{
					return 1;
				}
				break;
			case 1:
				return 1;
				break;
			case 3:
				if (PED::IS_PED_INJURED(Local_69[0 /*17*/]) && PED::IS_PED_INJURED(Local_69[1 /*17*/]))
				{
					return 1;
				}
				break;
			case 4:
				if ((((PED::IS_PED_INJURED(Local_69[0 /*17*/]) && PED::IS_PED_INJURED(Local_69[1 /*17*/])) && PED::IS_PED_INJURED(Local_69[3 /*17*/])) && PED::IS_PED_INJURED(Local_69[6 /*17*/])) && PED::IS_PED_INJURED(Local_69[7 /*17*/]))
				{
					return 1;
				}
				break;
			case 5:
				if (PED::IS_PED_INJURED(Local_69[7 /*17*/]))
				{
					return 1;
				}
				break;
			case 6:
				if ((PED::IS_PED_INJURED(Local_69[0 /*17*/]) && PED::IS_PED_INJURED(Local_69[1 /*17*/])) && PED::IS_PED_INJURED(Local_69[3 /*17*/]))
				{
					return 1;
				}
				break;
			case 7:
				if ((PED::IS_PED_INJURED(Local_69[0 /*17*/]) && PED::IS_PED_INJURED(Local_69[1 /*17*/])) && PED::IS_PED_INJURED(Local_69[3 /*17*/]))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_154(int iParam0)//Position - 0xAB22
{
	if (!PED::IS_PED_INJURED(Local_69[iParam0 /*17*/]))
	{
		TASK::TASK_COMBAT_PED(Local_69[iParam0 /*17*/], PLAYER::PLAYER_PED_ID(), 0, 16);
		Local_69[iParam0 /*17*/].f_9 = 1;
	}
}

void func_157()//Position - 0xADEB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_64.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*3*/]))
		{
			if (Local_64[iVar0 /*3*/].f_1)
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_64[iVar0 /*3*/], 2, 0f, 3.5f, 10f, 0f, 0f, 0f, 0, false, true, true, false, true);
			}
		}
		iVar0++;
	}
}

void func_158()//Position - 0xAE3D
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 < Local_62.f_0)
	{
		iVar1 = iVar0;
		if (!Local_62[iVar1 /*3*/].f_1)
		{
			bVar2 = false;
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[iVar1 /*3*/], false))
			{
				bVar2 = true;
			}
			else if (iVar1 == 6)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_62[iVar1 /*3*/]) < 880)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				func_128(iVar1, 1);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[iVar0 /*3*/], false))
			{
				VEHICLE::RESET_VEHICLE_WHEELS(Local_62[iVar0 /*3*/], false);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_62[iVar1 /*3*/], false))
		{
			if (iLocal_56 == 5)
			{
				if (iVar1 != 0)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_62[iVar1 /*3*/], 2, 0f, 6f, 0f, 0f, 0f, 0f, 0, false, true, true, false, true);
					fVar3 = 0f;
					if ((iVar1 == 1 || iVar1 == 6) || iVar1 == 7)
					{
						if (Local_71.f_1 <= -1f)
						{
							fVar3 = -1.3f;
						}
						else
						{
							fVar3 = -0.2f;
						}
					}
					else if (Local_71.f_1 >= 1f)
					{
						fVar3 = 1f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_62[iVar1 /*3*/], 2, fVar3, 0f, 0f, 0f, 0f, 0f, 0, false, true, true, false, true);
				}
			}
		}
		iVar0++;
	}
}

void func_159()//Position - 0xAF57
{
	float fVar0;
	float fVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[2], true, true, false);
		if (Local_71.f_1 != Local_70.f_2)
		{
			fVar0 = func_161();
			if (Local_70.f_0 == 0)
			{
				Local_71.f_3 = (Local_71.f_3 + (3.5f * SYSTEM::TIMESTEP()));
				if (Local_71.f_3 > fVar0)
				{
					Local_71.f_3 = fVar0;
				}
			}
			else
			{
				fVar0 = (fVar0 * -1f);
				Local_71.f_3 = (Local_71.f_3 - (3.5f * SYSTEM::TIMESTEP()));
				if (Local_71.f_3 < fVar0)
				{
					Local_71.f_3 = fVar0;
				}
			}
			Local_71.f_1 = (Local_71.f_1 + (Local_71.f_3 * SYSTEM::TIMESTEP()));
			if (Local_70.f_0 == 0)
			{
				if (Local_71.f_1 >= Local_70.f_2)
				{
					Local_71.f_1 = Local_70.f_2;
				}
			}
			else if (Local_71.f_1 <= Local_70.f_2)
			{
				Local_71.f_1 = Local_70.f_2;
			}
			if (Local_71.f_1 > 180f)
			{
				Local_71.f_1 = (Local_71.f_1 - 360f);
			}
			else if (Local_71.f_1 < -180f)
			{
				Local_71.f_1 = (Local_71.f_1 + 360f);
			}
		}
		if (Local_71.f_0 != Local_70.f_5)
		{
			fVar1 = func_160();
			if (Local_70.f_3 == 1)
			{
				Local_71.f_4 = (Local_71.f_4 + (1f * SYSTEM::TIMESTEP()));
				if (Local_71.f_4 > fVar1)
				{
					Local_71.f_4 = fVar1;
				}
			}
			else
			{
				fVar1 = (fVar1 * -1f);
				Local_71.f_4 = (Local_71.f_4 - (1f * SYSTEM::TIMESTEP()));
				if (Local_71.f_4 < fVar1)
				{
					Local_71.f_4 = fVar1;
				}
			}
			Local_71.f_0 = (Local_71.f_0 + (Local_71.f_4 * SYSTEM::TIMESTEP()));
			if (Local_70.f_3 == 1)
			{
				if (Local_71.f_0 >= Local_70.f_5)
				{
					Local_71.f_0 = Local_70.f_5;
				}
			}
			else if (Local_71.f_0 <= Local_70.f_5)
			{
				Local_71.f_0 = Local_70.f_5;
			}
			if (Local_71.f_0 > 180f)
			{
				Local_71.f_0 = (Local_71.f_0 - 360f);
			}
			else if (Local_71.f_0 < -180f)
			{
				Local_71.f_0 = (Local_71.f_0 + 360f);
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
		{
			VEHICLE::SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_166[2], Local_71, 2);
		}
	}
}

float func_160()//Position - 0xB179
{
	switch (Local_70.f_4)
	{
		case 0:
			return 1f;
			break;
		case 1:
			return 1.8f;
			break;
		case 2:
			return 4f;
			break;
	}
	return 0f;
}

float func_161()//Position - 0xB1B7
{
	switch (Local_70.f_1)
	{
		case 0:
			return 1f;
			break;
		case 1:
			return 2f;
			break;
		case 2:
			return 8f;
			break;
		case 3:
			return 11f;
			break;
	}
	return 0f;
}

void func_162()//Position - 0xB206
{
	int iVar0;
	iVar0 = 0;
	if (func_166())
	{
		iLocal_464++;
		iLocal_465 = 0;
		iVar0 = 1;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_466)
	{
		if (((Local_71.f_1 == Local_70.f_2 && Local_71.f_0 == Local_70.f_5) || bLocal_316) || iVar0)
		{
			bLocal_316 = false;
			switch (iLocal_464)
			{
				case 0:
					switch (iLocal_465)
					{
						case 0:
							func_165(600);
							break;
						case 1:
							func_164(1, 1, -2f);
							break;
						case 2:
							func_164(0, 1, 3f);
							break;
						case 3:
							func_164(1, 1, -3f);
							break;
						case 4:
							func_164(0, 1, 2f);
							break;
						case 5:
							func_163(1);
							break;
					}
					break;
				case 1:
					switch (iLocal_465)
					{
						case 0:
							func_164(0, 1, 4f);
							break;
						case 1:
							func_164(1, 1, -4f);
							break;
						case 2:
							func_164(0, 1, 3f);
							break;
						case 3:
							func_164(1, 1, -4f);
							break;
						case 4:
							func_164(0, 1, 4f);
							break;
						case 5:
							func_163(1);
							break;
					}
					break;
				case 2:
					switch (iLocal_465)
					{
						case 0:
							func_164(1, 1, -4f);
							break;
						case 1:
							func_164(0, 1, 5f);
							break;
						case 2:
							func_164(1, 1, -3f);
							break;
						case 3:
							func_164(0, 1, 4f);
							break;
						case 4:
							func_164(1, 1, -3f);
							break;
						case 5:
							func_163(1);
							break;
					}
					break;
				case 3:
					switch (iLocal_465)
					{
						case 0:
							func_164(1, 2, -4f);
							break;
						case 1:
							func_164(0, 2, 5f);
							break;
						case 2:
							func_164(1, 2, -3f);
							break;
						case 3:
							func_164(0, 2, 4f);
							break;
						case 4:
							func_164(1, 2, -3f);
							break;
						case 5:
							func_163(1);
							break;
					}
					break;
			}
			if (iLocal_465 < 10)
			{
				if (!bLocal_316)
				{
					iLocal_465++;
				}
			}
		}
	}
}

void func_163(int iParam0)//Position - 0xB465
{
	iLocal_465 = iParam0;
	bLocal_316 = true;
}

void func_164(int iParam0, int iParam1, float fParam2)//Position - 0xB476
{
	if (Local_70.f_2 != fParam2)
	{
		Local_70.f_0 = iParam0;
		Local_70.f_1 = iParam1;
		Local_70.f_2 = fParam2;
		if (bLocal_255)
		{
			Local_70.f_2 = (Local_70.f_2 / 2f);
			Local_70.f_1 = 0;
		}
	}
}

void func_165(int iParam0)//Position - 0xB4B4
{
	iLocal_466 = (MISC::GET_GAME_TIMER() + iParam0);
}

int func_166()//Position - 0xB4C6
{
	float fVar0;
	switch (iLocal_464)
	{
		case 0:
		case 1:
			switch (iLocal_464)
			{
				case 0:
					fVar0 = -12.4f;
					break;
				case 1:
					fVar0 = 15.2f;
					break;
			}
			if (Local_410.f_1 >= fVar0)
			{
				return 1;
			}
			break;
		case 2:
			break;
	}
	return 0;
}

void func_167()//Position - 0xB526
{
	float fVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 88, true);
		Local_410 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_166[2], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
		fVar0 = (Local_410.f_1 - -20.4f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 * -1f);
		}
		fLocal_430 = (fVar0 / 40.4f);
		if (fLocal_430 < 0f)
		{
			fLocal_430 = 0f;
		}
		else if (fLocal_430 > 1f)
		{
			fLocal_430 = 1f;
		}
	}
}

float func_169(int iParam0, float* fParam1)//Position - 0xB5C2
{
	float fVar0;
	struct<3> Var1;
	Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, fParam1, false, false);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (ENTITY::IS_ENTITY_IN_AREA(iParam0, -181.68785f, 3545.7754f, 62.87735f, 2463.765f, 4640.3667f, 31.42104f, false, false, 0))
	{
		if (*fParam1 < 30f)
		{
			*fParam1 = 30f;
		}
	}
	fVar0 = (Var1.f_2 - *fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	return fVar0;
}

bool func_173(int iParam0)//Position - 0xB737
{
	return AUDIO::START_AUDIO_SCENE(func_174(iParam0));
}

char* func_174(int iParam0)//Position - 0xB749
{
	switch (iParam0)
	{
		case 0:
			return "EXILE_1_DRIVE_TO_PLANE";
			break;
		case 1:
			return "EXILE_1_FLIGHT_MAIN";
			break;
		case 2:
			return "EXILE_1_CARGO_PLANE_APPEARS";
			break;
		case 3:
			return "EXILE_1_FOCUS_ON_CARGO_PLANE";
			break;
		case 4:
			return "EXILE_1_FLIGHT_START_CLIMB";
			break;
		case 5:
			return "EXILE_1_TREVOR_GETS_WARNING";
			break;
		case 6:
			return "EXILE_1_ENEMY_OPENS_FIRE";
			break;
		case 7:
			return "EXILE_1_SHOOTOUT_CARGO_HOLD";
			break;
		case 8:
			return "EXILE_1_HIJACK_THE_PLANE";
			break;
		case 9:
			return "EXILE_1_FLY_CARGO_PLANE";
			break;
		case 10:
			return "EXILE_1_FIGHTER_JETS_ARRIVE";
			break;
		case 11:
			return "EXILE_1_FIGHTER_JET_CAMERA";
			break;
		case 12:
			return "EXILE_1_COCKPIT_CUTSCENE";
			break;
		case 13:
			return "EXILE_1_ROCKETS_FIRED";
			break;
		case 14:
			return "EXILE_1_PLANE_GOING_DOWN";
			break;
		case 15:
			return "EXILE_1_ESCAPE_ON_FOOT";
			break;
		case 16:
			return "EXILE_1_ESCAPE_IN_CAR";
			break;
		case 17:
			return "EXILE_1_SKYDIVE";
			break;
		case 18:
			return "EXILE_1_DEPLOY_PARACHUTE";
			break;
		case 19:
			return "EXILE_1_FOCUS_ON_CRASHING_PLANE";
			break;
	}
	return "";
}

void func_175(int iParam0)//Position - 0xB89C
{
	AUDIO::STOP_AUDIO_SCENE(func_174(iParam0));
}

void func_176()//Position - 0xB8AE
{
	float fVar0;
	float* fVar1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	struct<3> Var6;
	int iVar7;
	struct<3> Var8;
	struct<3> Var9;
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	struct<3> Var15;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	if (!iLocal_196)
	{
		if (!bLocal_322)
		{
			bLocal_322 = AUDIO::LOAD_STREAM("FLYBY", "EXILE_1");
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			if (!iLocal_266)
			{
				iLocal_266 = 1;
			}
			else
			{
				if (!iLocal_267)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_469 + 2000)
					{
						func_856();
						iLocal_267 = 1;
					}
				}
				if (!bLocal_271)
				{
					bLocal_271 = func_98("EXL1_PILOT", 0, 0, 0, 0);
					if (bLocal_271)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
					}
				}
				else if (!bLocal_272)
				{
					bLocal_272 = func_98("EXL1_BEARING", 0, 0, 0, 0);
				}
				else if (!bLocal_200)
				{
					bLocal_200 = func_139("PF_FLYCG", 1, 0);
				}
				else if (!bLocal_270)
				{
					bLocal_270 = func_98("EXL1_PILOT2", 0, 0, 0, 0);
				}
				else if (!bLocal_268)
				{
					bLocal_268 = func_98("EXL1_HAILRON", 0, 0, 0, 0);
				}
				else if (!bLocal_269)
				{
					bLocal_269 = func_98("EXL1_RESP", 0, 0, 0, 0);
				}
			}
			if (!bLocal_389)
			{
				if (bLocal_276)
				{
					bLocal_389 = __LIB_17__::func_99("EXL1_FIGHTER_JETS_APPEAR");
				}
			}
			if (!iLocal_251)
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[2], 55f);
				if (MISC::GET_GAME_TIMER() >= iLocal_475)
				{
					iLocal_251 = 1;
				}
			}
			if (!bLocal_273)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_473 + 3000)
				{
					bLocal_273 = func_96("PF_TRNHLP", 0, 0);
				}
			}
			fVar0 = func_169(iLocal_166[2], &fVar1);
			func_855(iLocal_166[2], fVar0);
			Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true) };
			if (bLocal_269 && iLocal_75 != 1)
			{
				if (fVar0 < 135f && Var2.f_2 < 550f)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_490 && iLocal_75 < 4)
					{
						if (func_98("EXL1_TOOLOW", 0, 0, 0, 0))
						{
							iLocal_490 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 25000));
						}
					}
				}
			}
			if (iLocal_75 >= 2)
			{
				func_853();
			}
			if (!bLocal_291)
			{
				if (bLocal_277)
				{
					bLocal_291 = func_98("EXL1_RONJET2", 0, 1, 0, 0);
				}
			}
			else if (!bLocal_292)
			{
				bLocal_292 = func_98("EXL1_SHAKE2", 0, 0, 0, 0);
			}
			else if (!bLocal_293)
			{
				bLocal_293 = func_98("EXL1_TABOVE", 0, 0, 0, 0);
			}
			if (!bLocal_367)
			{
				if (iLocal_470 > 2)
				{
					func_129(4, 0);
					bLocal_367 = true;
				}
			}
			if (iLocal_74 < 2)
			{
				if (!bLocal_294)
				{
					if (bLocal_289)
					{
						bLocal_294 = func_98("EXL1_GOTME", 0, 0, 0, 0);
					}
				}
				else if (!iLocal_295)
				{
					if (Var2.f_2 >= 250f)
					{
						if (func_98("EXL1_SAVE", 0, 0, 0, 0))
						{
							iLocal_295 = 1;
							if (Var2.f_2 >= 550f)
							{
								bLocal_299 = false;
							}
							else
							{
								iLocal_477 = MISC::GET_GAME_TIMER();
								bLocal_299 = true;
							}
						}
					}
					else if (func_98("EXL1_CLIMB", 0, 0, 0, 0))
					{
						iLocal_295 = 1;
						iLocal_477 = MISC::GET_GAME_TIMER();
						bLocal_299 = true;
					}
				}
				else if (!bLocal_298)
				{
					if (bLocal_299)
					{
						bLocal_298 = func_139("PF_CLIMB", 1, 0);
						iLocal_441 = MISC::GET_GAME_TIMER() + 8000;
					}
				}
				else
				{
					func_852("EXL1_CURSE");
				}
			}
			bVar3 = false;
			if (bLocal_299)
			{
				if (Var2.f_2 < 550f)
				{
					if (iLocal_74 < 2)
					{
						if (MISC::GET_GAME_TIMER() >= (iLocal_477 + 38000))
						{
							bVar3 = true;
						}
					}
				}
				else if (__LIB_0__::func_501("PF_CLIMB", 0, 0))
				{
					__LIB_17__::func_450(0, 1, 0, 0);
				}
			}
			if (iLocal_74 >= 1)
			{
				if (bLocal_274)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 90 /*INPUT_VEH_FLY_YAW_RIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
				}
				if (MISC::GET_GAME_TIMER() >= iLocal_458)
				{
					if (!bLocal_274)
					{
						if (iLocal_74 == 1)
						{
							iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(700, 1200);
						}
						else
						{
							iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1200, 1600);
						}
						bLocal_274 = true;
					}
					else if (iLocal_74 == 1)
					{
						iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(1000, 1600);
						bLocal_274 = false;
					}
					else
					{
						iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(800, 1100);
					}
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 128);
					__LIB_38__::func_638();
					iLocal_458 = (MISC::GET_GAME_TIMER() + iVar4);
				}
			}
			func_847();
			func_844();
			if (iLocal_74 >= 1)
			{
				func_146(1);
			}
			if (!iLocal_283)
			{
				if (Local_68[1 /*14*/] == 3)
				{
					VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_166[2], true);
					VEHICLE::SET_VEHICLE_RUDDER_BROKEN(iLocal_166[2], false);
					iLocal_476 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_283 = 1;
				}
			}
			else if (!iLocal_338)
			{
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_166[2], false);
				iLocal_338 = 1;
			}
			if (((Local_68[0 /*14*/] == 3 || Local_68[1 /*14*/] == 3) || Local_68[2 /*14*/] == 3) || Local_68[3 /*14*/] == 3)
			{
				if (!bLocal_289)
				{
					bLocal_289 = func_98("EXL1_IMHIT", 0, 0, 0, 0);
				}
			}
			switch (iLocal_74)
			{
				case 0:
					if (Local_68[3 /*14*/] == 3)
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_166[2], 1, 0f, 0f, 5f, 10f, 0f, 0f, 0, true, true, true, false, true);
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 200);
						__LIB_38__::func_638();
						func_114(2, 1065353216);
						func_114(1, 1065353216);
						func_173(14);
						iLocal_474 = MISC::GET_GAME_TIMER();
						iLocal_458 = MISC::GET_GAME_TIMER() + 1200;
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						iLocal_74 = 1;
					}
					break;
				case 1:
					if (!bLocal_396)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_474 + 2000)
						{
							func_175(13);
						}
					}
					bVar5 = false;
					if (MISC::GET_GAME_TIMER() >= iLocal_474 + 13000 && Var2.f_2 >= 550f)
					{
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 200);
						__LIB_38__::func_638();
						bVar5 = true;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) && Var2.f_2 >= 250f)
					{
						bLocal_290 = true;
						bVar5 = true;
					}
					if (bVar5)
					{
						func_175(13);
						func_843(0);
						__LIB_17__::func_450(0, 1, 0, 0);
						iLocal_474 = MISC::GET_GAME_TIMER();
						iLocal_458 = 0;
						bLocal_274 = false;
						iLocal_74 = 2;
					}
					break;
				case 2:
					if (!bLocal_290)
					{
						bLocal_290 = func_98("EXL1_BRKPLAN", 0, 0, 0, 0);
					}
					else if (!bLocal_296)
					{
						bLocal_296 = func_98("EXL1_ANGPAR", 0, 0, 0, 0);
						if (bLocal_296)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 4);
						}
					}
					else if (!bLocal_297)
					{
						bLocal_297 = func_98("EXL1_ANGPAR2", 0, 0, 0, 0);
					}
					if (bLocal_274)
					{
						Var6 = { ENTITY::GET_ENTITY_ROTATION(iLocal_166[2], 2) };
						if (Var6.f_0 >= -20f && fVar0 >= 65f)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_166[2], 0, 0f, 0f, 18f, 0f, -18f, 0f, 0, true, true, true, false, true);
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_166[2], 0, 0f, 0f, -18f, 0f, 18f, 0f, 0, true, true, true, false, true);
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_474 + 4800)
					{
						if (!__LIB_0__::func_75())
						{
							if (!iLocal_357)
							{
								func_842();
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
								PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
								iLocal_357 = 1;
							}
							else
							{
								func_842();
								PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 10, 128);
								iLocal_483 = 1;
								PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
								PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
								func_187(7, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1);
							}
						}
					}
					break;
			}
			if (!iLocal_280)
			{
				if (iLocal_75 == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[1 /*6*/], false))
					{
						iVar7 = 0;
						switch (iLocal_159)
						{
							case 0:
								Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_169, true) };
								Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_169, 0f, 500f, 0f) };
								Var9.f_2 = Var8.f_2;
								iLocal_682 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var8, Var9, 50f, 1, iLocal_166[2], 4);
								iLocal_159 = 1;
								break;
							case 1:
								iVar10 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_682, &iVar11, &uVar12, &uVar13, &uVar14);
								if (iVar10 == 2)
								{
									if (iVar11 == 0)
									{
										iVar7 = 1;
										iLocal_159 = 0;
									}
									else
									{
										iLocal_159 = 0;
									}
								}
								else if (iVar10 == 0)
								{
									iLocal_159 = 0;
								}
								break;
						}
						if (iLocal_333 && iVar7)
						{
							Var15 = { ENTITY::GET_ENTITY_ROTATION(iLocal_166[2], 2) };
							if (__LIB_31__::func_989(Local_67[1 /*6*/], iLocal_166[2], 45f) && (((Var15.f_0 < 25f && Var15.f_0 > -25f) && Var15.f_1 < 30f) && Var15.f_1 > -30f))
							{
								if (bLocal_291 && bLocal_292)
								{
									if (!__LIB_0__::func_75())
									{
										if (func_125())
										{
											iLocal_483 = 0;
											iLocal_196 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			if ((MISC::GET_GAME_TIMER() >= iLocal_476 && MISC::GET_GAME_TIMER() >= iLocal_473 + 3000) || bVar3)
			{
				if ((!ENTITY::IS_ENTITY_IN_AIR(iLocal_166[2]) && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_166[2])) || bVar3)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_166[2], false);
					ENTITY::SET_ENTITY_PROOFS(iLocal_166[2], false, false, false, false, false, false, false, false);
					VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_166[2], true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_166[2], true);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_166[2], true);
					VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iLocal_166[2], true);
					bLocal_355 = true;
					if (bVar3)
					{
						VEHICLE::EXPLODE_VEHICLE(iLocal_166[2], true, false);
					}
				}
			}
			if (bLocal_355)
			{
				fLocal_435 = (fLocal_435 + (1f * SYSTEM::TIMESTEP()));
				if (fLocal_435 >= 2f)
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_166[2], true, false);
				}
			}
		}
	}
	else if (iLocal_483 == 0)
	{
		func_177();
	}
}

void func_177()//Position - 0xC203
{
	switch (iLocal_61)
	{
		case 0:
			func_29(1, 1, 1, 1);
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[1 /*6*/], false)) && !PED::IS_PED_INJURED(Local_67[1 /*6*/].f_1)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_166[2], ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), true, false, false, true);
				Local_420 = { ENTITY::GET_ENTITY_ROTATION(iLocal_166[2], 2) };
				ENTITY::SET_ENTITY_ROTATION(iLocal_166[2], 0f, 0f, Local_420.f_2, 2, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_67[1 /*6*/], iLocal_166[2], 0, Local_415, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[0 /*6*/], false))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_67[0 /*6*/], iLocal_166[2], 0, 30f, -40f, -6f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				if (!bLocal_367)
				{
					func_129(4, 0);
				}
				iLocal_279 = 0;
				Local_28.f_4 = MISC::GET_GAME_TIMER();
				Local_28.f_5 = 0;
				Local_28.f_7 = 0;
				iLocal_480 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(1f, 0f, 0f), true, false, false, true);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_480, iLocal_166[2], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_166[2], "seat_dside_f"));
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_480, func_136(0), "CALL_RADIO_PLAYER2", 1000f, -8f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[2], true, true, false);
				iLocal_164 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_166[2], 26, func_117(5), -1, true, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_164, false, false);
				iLocal_174 = OBJECT::CREATE_OBJECT(func_117(20), 0f, 1f, 2f, true, true, false);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_174, iLocal_480, "call_radio_radio", func_136(0), 1000f, 8f, 0, 1000f);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_174);
				TASK::TASK_PLAY_ANIM(Local_67[1 /*6*/].f_1, func_136(0), "CALL_RADIO_SECURITY", 1000f, -8f, -1, 2, 0.15f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_67[1 /*6*/].f_1, false, false);
			}
			func_185(4);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.06f);
			func_173(12);
			iLocal_399 = 0;
			iLocal_439 = MISC::GET_GAME_TIMER();
			iLocal_61 = 1;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[1 /*6*/], false))
			{
				__LIB_31__::func_992(6.6f, 31.5f, 2.3f, 6.6f, 34.9f, 2.3f, &Local_418, 9f);
				__LIB_31__::func_992(0f, 28.3f, 2.6f, 0f, 32f, 2.5f, &Local_419, 9f);
				CAM::ATTACH_CAM_TO_ENTITY(iLocal_180, iLocal_166[2], Local_418, true);
				CAM::POINT_CAM_AT_ENTITY(iLocal_180, iLocal_166[2], Local_419, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_166[2], 0f, 0f, Local_420.f_2, 2, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[2], 40f);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[2], true, true, false);
				Local_415.f_1 = (Local_415.f_1 + (0.9f * SYSTEM::TIMESTEP()));
				Local_415.f_2 = (Local_415.f_2 - (0.3f * SYSTEM::TIMESTEP()));
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_67[1 /*6*/], iLocal_166[2], 0, Local_415, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			if (!bLocal_390)
			{
				if (bLocal_389)
				{
					bLocal_390 = __LIB_17__::func_99("EXL1_DEADLY_FORCE");
				}
			}
			if (!bLocal_281)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_439 + 100)
				{
					bLocal_281 = func_98("EXL1_PLWAVE", 0, 0, 0, 0);
					if (bLocal_281)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 8f, 4);
					}
				}
			}
			else if (!bLocal_282)
			{
				bLocal_282 = func_98("EXL1_FLIPOFF", 0, 0, 0, 0);
			}
			if (!bLocal_199)
			{
				if (__LIB_0__::func_500() && MISC::GET_GAME_TIMER() >= iLocal_438 + 1000)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					bLocal_199 = true;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				bLocal_197 = true;
				iLocal_61 = 2;
			}
			if (!iLocal_399)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_439 + 8700)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_399 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_439 + 9000 && !bLocal_199)
			{
				iLocal_61 = 2;
			}
			break;
		case 2:
			if (bLocal_197)
			{
				__LIB_0__::func_429();
				SYSTEM::WAIT(800);
			}
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[1 /*6*/], false)) && !PED::IS_PED_INJURED(Local_67[1 /*6*/].f_1)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_166[2], false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[2], 55f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
				{
					OBJECT::DELETE_OBJECT(&iLocal_174);
				}
				func_179(20);
				ENTITY::DETACH_ENTITY(Local_67[1 /*6*/], true, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_67[1 /*6*/], 55f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[0 /*6*/], false))
				{
					ENTITY::DETACH_ENTITY(Local_67[0 /*6*/], true, true);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_67[0 /*6*/], 55f);
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_67[1 /*6*/].f_1);
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
				{
					PED::DELETE_PED(&iLocal_164);
				}
				TASK::STOP_ANIM_TASK(Local_67[1 /*6*/].f_1, func_136(0), "CALL_RADIO_SECURITY", -8f);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[2], -1);
			}
			Local_67[1 /*6*/].f_2 = 0;
			fLocal_432 = 0f;
			iLocal_158 = 3;
			func_178(3);
			func_175(12);
			func_29(0, 1, 1, 1);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
			iLocal_280 = 1;
			break;
	}
}

void func_178(int iParam0)//Position - 0xC795
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[iVar0 /*6*/], false) && !PED::IS_PED_INJURED(Local_67[iVar0 /*6*/].f_1))
		{
			Var1 = { 0f, 0f, 0f };
			Var1 = { Var1 };
			switch (iParam0)
			{
				case 7:
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_67[iVar0 /*6*/].f_1, Local_67[iVar0 /*6*/], 2335f, 3397f, 500f, 40f, 0, func_117(11), 262144, 50f, 10000f);
					break;
				case 3:
					bLocal_277 = true;
					break;
				case 2:
					iLocal_472 = MISC::GET_GAME_TIMER();
					break;
				}
		}
		Local_67[iVar0 /*6*/].f_2 = MISC::GET_GAME_TIMER();
		iVar0++;
	}
	if (iParam0 == 5)
	{
		func_173(13);
		func_175(9);
		func_175(10);
	}
	iLocal_471 = MISC::GET_GAME_TIMER();
	iLocal_75 = iParam0;
}

void func_179(int iParam0)//Position - 0xC877
{
	int iVar0;
	if (iLocal_187[iParam0])
	{
		iVar0 = func_117(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_187[iParam0] = 0;
	}
}

void func_185(int iParam0)//Position - 0xC96B
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	char* sVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		fVar3 = 1f;
		sVar4 = "road_vibration_shake";
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, -18.5f, -3f };
				Var1 = { 0f, -50f, -3f };
				fVar2 = 28.98f;
				break;
			case 1:
				Var0 = { 0f, -18.5f, -3f };
				Var1 = { 0f, -50f, -3f };
				fVar2 = 26.75f;
				break;
			case 2:
				Var0 = { -3f, -45f, -2f };
				Var1 = { 0f, -20f, -2f };
				fVar2 = 24.92f;
				break;
			case 3:
				Var0 = { -1.8f, -16f, -1f };
				Var1 = { 1.5f, -30f, -2.3f };
				fVar2 = 28.43f;
				break;
			case 4:
				Var0 = { 6.6f, 31.5f, 2.3f };
				Var1 = { 0f, 28.3f, 2.6f };
				fVar2 = 45f;
				fVar3 = 1f;
				break;
			case 5:
				Var0 = { 6.6f, 34.9f, 2.3f };
				Var1 = { 0f, 32f, 2.5f };
				fVar2 = 45f;
				break;
			case 8:
				Var0 = { 0.9f, 29f, 2.1f };
				Var1 = { -3.2f, 27.6f, 2.45f };
				fVar2 = 35.8f;
				fVar3 = 1.5f;
				break;
			case 9:
				Var0 = { 0.75f, 29f, 2.1f };
				Var1 = { -3.2f, 27.9f, 1.82f };
				fVar2 = 35.8f;
				break;
		}
		Local_418 = { Var0 };
		Local_419 = { Var1 };
		func_25(&iLocal_180);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_180, iLocal_166[2], Var0, true);
		CAM::POINT_CAM_AT_ENTITY(iLocal_180, iLocal_166[2], Var1, true);
		CAM::SET_CAM_FOV(iLocal_180, fVar2);
		CAM::SET_CAM_INHERIT_ROLL_VEHICLE(iLocal_180, iLocal_166[2]);
		CAM::SHAKE_CAM(iLocal_180, sVar4, fVar3);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

void func_187(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xCBFD
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { func_115(1) };
				fVar1 = 48f;
				break;
			case 1:
				Var0 = { func_115(2) + Vector(6f, 0f, 0f) };
				fVar1 = 27.5f;
				break;
			case 2:
				Var0 = { func_115(3) + Vector(6f, 0f, 0f) };
				fVar1 = -42.49f;
				break;
			case 3:
				Var0 = { func_115(4) + Vector(6f, 0f, 0f) };
				fVar1 = -169.9f;
				break;
			case 4:
				Var0 = { func_115(5) + Vector(6f, 0f, 0f) };
				fVar1 = -171.8f;
				break;
			case 5:
				Var0 = { 2930.5f, 810.389f, 448.3599f };
				fVar1 = 180f;
				break;
			case 6:
				Var0 = { func_115(7) + Vector(10f, 0f, 0f) };
				fVar1 = 121f;
				break;
			case 7:
				if (!bLocal_195)
				{
					Var0 = { 1904.1f, 4091.2f, 1458.9f };
					fVar1 = 160f;
				}
				else
				{
					Var0 = { func_115(18) };
					fVar1 = 21.38f;
				}
				break;
		}
		__LIB_17__::func_57();
		if (bParam5)
		{
			MISC::CLEAR_AREA(Var0, 10000f, true, false, false, false);
		}
		SYSTEM::WAIT(0);
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
		if (__LIB_0__::func_323() && !iLocal_353)
		{
			__LIB_0__::func_427(Var0, fVar1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
		}
	}
	func_836(iParam0, 1, 0);
	func_831(iParam0, 1, 0);
	func_827(iParam0, 1, 0);
	func_822(iParam0, 1, 0);
	func_817(iParam0, 1, 0);
	func_810(iParam0, 1, 0);
	func_805(iParam0, 1, 0);
	func_804(1);
	if (bParam10)
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	iLocal_60 = 0;
	func_802(iParam0, bParam9);
	if (bParam7)
	{
		func_22();
	}
	__LIB_17__::func_450((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	if (bParam8)
	{
		__LIB_0__::func_345(&Local_28, 0, 0);
		func_175(3);
		func_175(11);
		func_175(19);
		iLocal_403 = 0;
		iLocal_408 = 0;
	}
	if (bParam1)
	{
		iVar2 = func_801(iParam0);
		bVar3 = __LIB_0__::func_682(iVar2);
		if (__LIB_14__::func_466() != iVar2)
		{
			while (!func_603(&(uLocal_77[bVar3]), iVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(-1f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!__LIB_17__::func_512(&uLocal_77, bVar3))
			{
				SYSTEM::WAIT(0);
			}
			while (!__LIB_17__::func_72(&uLocal_77, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			iVar4 = 0;
			while (iVar4 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[iVar4]))
				{
					PED::DELETE_PED(&(uLocal_77[iVar4]));
				}
				iVar4++;
			}
		}
	}
	if (bParam1 || iParam4)
	{
		if (bParam1)
		{
			iVar5 = 0;
			while (iVar5 <= 9)
			{
				__LIB_0__::func_221(&uLocal_517, iVar5);
				iVar5++;
			}
		}
		__LIB_0__::func_222(&uLocal_517, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		uLocal_77.f_6 = __LIB_0__::func_682(func_801(iParam0));
		func_547(iParam0);
		func_546(PLAYER::PLAYER_PED_ID(), func_801(iParam0), iParam0);
		if (bParam1)
		{
			__LIB_17__::func_102();
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (iParam0 == 1)
	{
		__LIB_16__::func_18(0);
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				if (STREAMING::STREAMVOL_IS_VALID(iLocal_684) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::STREAMVOL_DELETE(iLocal_684);
				}
				if (!__LIB_0__::func_323())
				{
					iVar6 = MISC::GET_GAME_TIMER() + 5000;
					if (!STREAMING::STREAMVOL_IS_VALID(iLocal_683))
					{
						func_543();
					}
					while (MISC::GET_GAME_TIMER() <= iVar6 && !STREAMING::STREAMVOL_HAS_LOADED(iLocal_683))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[1], false);
			}
			func_542(0, bParam1);
			if (bParam1)
			{
				func_541();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[0], false) && !PED::IS_PED_INJURED(iLocal_161))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_161, iLocal_166[0], 20000, 0, 1f, 1, 0);
				}
			}
			func_424(bParam1);
			if ((!PED::IS_PED_INJURED(iLocal_161) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[0], false)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
			}
			break;
		case 1:
			func_422();
			if (bParam1)
			{
				if (__LIB_0__::func_323())
				{
					if (__LIB_13__::func_821())
					{
						if (__LIB_14__::func_660(__LIB_13__::func_791(), 0f, 0f, 0f, 1))
						{
							iLocal_167 = func_383(2134.08f, 4808.97f, 40.79f, 154.6f);
						}
					}
				}
				iLocal_187[21] = 0;
				func_542(1, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[1], true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_166[1]);
				}
			}
			else
			{
				func_318(2, func_115(6), 0f, 1, 1, 0);
				func_317();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[0]))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_166[0]));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[1], true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], false);
			}
			__LIB_0__::func_222(&uLocal_517, 4, 0, "MERCPLANE", 0, 1);
			func_316();
			func_173(1);
			func_315(1);
			break;
		case 2:
			if (bParam1)
			{
				iLocal_75 = 0;
				bLocal_378 = true;
				bLocal_379 = true;
				bLocal_380 = true;
				bLocal_381 = false;
				bLocal_382 = false;
				bLocal_383 = false;
				bLocal_384 = false;
				iLocal_402 = 1;
				iLocal_440 = 2;
				iLocal_444 = 0;
				iLocal_486 = 0;
				iLocal_487 = 0;
				fLocal_425 = 0f;
				iLocal_442 = 4;
				fLocal_421 = 0.9f;
				fLocal_424 = 0f;
				iLocal_491 = -1;
				iLocal_240 = 1;
				iLocal_219 = 1;
				bLocal_220 = false;
				bLocal_221 = true;
				bLocal_222 = true;
				iLocal_224 = 1;
				bLocal_223 = true;
				iLocal_225 = 0;
				bLocal_226 = false;
				iLocal_227 = 0;
				iLocal_228 = 0;
				iLocal_229 = 0;
				iLocal_230 = 0;
				bLocal_231 = false;
				iLocal_232 = 0;
				bLocal_236 = true;
				iLocal_237 = 1;
				bLocal_239 = true;
				iLocal_238 = 0;
				iLocal_250 = 0;
				iLocal_251 = 0;
				iLocal_320 = 0;
				bLocal_321 = false;
				iLocal_403 = 0;
				bLocal_354 = false;
				bLocal_374 = false;
				iLocal_475 = MISC::GET_GAME_TIMER() + 400;
				iLocal_445 = (MISC::GET_GAME_TIMER() - 7000);
				func_316();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
				{
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], false);
				}
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[1], true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_166[1]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[1], 55f);
				}
				func_315(2);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[1], true);
				}
				__LIB_0__::func_222(&uLocal_517, 4, 0, "MERCPLANE", 0, 1);
				__LIB_0__::func_222(&uLocal_517, 3, 0, "NervousRon", 0, 1);
				func_173(2);
				__LIB_17__::func_99("EXL1_RELOAD_AROUND_THE_COAST");
			}
			break;
		case 3:
			func_175(2);
			func_173(4);
			if (bParam1)
			{
				iLocal_75 = 0;
				bLocal_378 = true;
				bLocal_379 = true;
				bLocal_380 = true;
				bLocal_381 = true;
				bLocal_382 = true;
				bLocal_383 = false;
				bLocal_384 = false;
				iLocal_402 = 1;
				iLocal_440 = 2;
				fLocal_425 = 0f;
				iLocal_442 = 6;
				iLocal_444 = 0;
				fLocal_421 = 0.75f;
				fLocal_424 = 0f;
				iLocal_491 = -1;
				iLocal_240 = 1;
				iLocal_219 = 1;
				bLocal_220 = true;
				bLocal_221 = true;
				bLocal_222 = true;
				iLocal_224 = 1;
				bLocal_223 = true;
				iLocal_225 = 0;
				bLocal_226 = false;
				iLocal_227 = 0;
				iLocal_228 = 0;
				iLocal_229 = 0;
				iLocal_230 = 0;
				bLocal_231 = false;
				iLocal_232 = 0;
				bLocal_236 = true;
				iLocal_237 = 1;
				iLocal_238 = 0;
				bLocal_239 = true;
				iLocal_250 = 0;
				iLocal_251 = 0;
				iLocal_320 = 0;
				bLocal_321 = false;
				iLocal_403 = 0;
				bLocal_354 = false;
				iLocal_475 = MISC::GET_GAME_TIMER() + 400;
				func_316();
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[1], true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_166[1]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[1], 55f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
				{
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], false);
				}
				func_315(3);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[1], true);
				}
				__LIB_0__::func_222(&uLocal_517, 4, 0, "MERCPLANE", 0, 1);
				__LIB_0__::func_222(&uLocal_517, 3, 0, "NervousRon", 0, 1);
				__LIB_17__::func_99("EXL1_START_CLIMB_RT");
			}
			break;
		case 4:
			if (bParam1)
			{
				Global_96879 = 0;
				func_307(1, 0, 1, 0, 1);
				fLocal_421 = 0.7f;
				iLocal_403 = 0;
				iLocal_240 = 1;
				bLocal_354 = false;
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				__LIB_0__::func_222(&uLocal_517, 4, 0, "MERCPLANE", 0, 1);
				func_315(4);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
				{
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], false);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], -1);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[1], true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_166[1]);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[1], 55f);
				}
				iLocal_440 = 2;
				__LIB_0__::func_222(&uLocal_517, 3, 0, "NervousRon", 0, 1);
				__LIB_17__::func_99("EXL1_RELOAD_ENTER_CARGO");
			}
			else
			{
				func_306();
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
			{
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_166[1]);
			}
			func_303(1);
			iLocal_454 = MISC::GET_GAME_TIMER();
			break;
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
			{
				OBJECT::DELETE_OBJECT(&iLocal_169);
			}
			GRAPHICS::DISABLE_SCUFF_DECALS(true);
			AUDIO::STOP_STREAM();
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			func_302(1);
			if (bParam1)
			{
				func_301(5);
			}
			if (bParam1)
			{
				SYSTEM::WAIT(500);
			}
			if (!bParam1)
			{
				func_114(3, 1065353216);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_166[2], true, false);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], true);
				ENTITY::SET_ENTITY_NOWEAPONDECALS(iLocal_166[2], true);
			}
			if (bParam1)
			{
				func_300();
			}
			if (bParam1)
			{
				Global_96879 = 0;
				func_307(1, 1, 1, 1, 1);
				func_116(1);
				func_299(1);
				__LIB_0__::func_222(&uLocal_517, 4, 0, "MERCPLANE", 0, 1);
			}
			else
			{
				Global_96879 = 0;
			}
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_133(func_115(9)), true, !bParam1, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_166[2]) - 90f));
				}
			}
			func_298(1);
			func_296();
			func_295(14000);
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
			if (bParam1)
			{
				func_294();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (bParam1)
			{
				SYSTEM::WAIT(500);
			}
			if (bParam1)
			{
				__LIB_17__::func_99("EXL1_RELOAD_FIGHT_BEGINS");
			}
			else
			{
				__LIB_17__::func_99("EXL1_FIGHT_BEGINS");
			}
			func_173(7);
			iLocal_455 = MISC::GET_GAME_TIMER();
			break;
		case 6:
			AUDIO::STOP_STREAM();
			func_316();
			func_116(0);
			HUD::SET_RADAR_ZOOM_PRECISE(0f);
			HUD::SET_WAYPOINT_OFF();
			GRAPHICS::DISABLE_SCUFF_DECALS(true);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[2], false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[2], -1);
				}
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_166[2], false);
				VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_166[2], false);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_166[2]);
				VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_166[2], 2, true);
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_166[2], false);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], false);
				ENTITY::SET_ENTITY_NOWEAPONDECALS(iLocal_166[2], true);
			}
			if (bParam1)
			{
				func_307(1, 0, 1, 0, 1);
				func_293(0);
			}
			func_292(1);
			AUDIO::SET_VEHICLE_CONVERSATIONS_PERSIST(false, true);
			func_291();
			__LIB_0__::func_222(&uLocal_517, 3, 0, "NervousRon", 0, 1);
			func_290(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_166[2], 4);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[2], 55f);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_166[2], 3);
			}
			MISC::CLEAR_AREA(func_115(7), 100f, true, false, false, false);
			if (bParam1)
			{
				__LIB_17__::func_99("EXL1_RELOAD_FLY_CARGO");
			}
			func_175(8);
			func_173(9);
			iLocal_441 = MISC::GET_GAME_TIMER() + 8000;
			iLocal_473 = MISC::GET_GAME_TIMER();
			iLocal_176 = func_287(func_115(19), 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			break;
		case 7:
			__LIB_17__::func_59();
			func_175(9);
			func_175(10);
			if (bParam1)
			{
				func_843(1);
			}
			GRAPHICS::DISABLE_SCUFF_DECALS(true);
			iVar7 = 0;
			while (iVar7 < 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_67[iVar7 /*6*/].f_1))
				{
					PED::DELETE_PED(&(Local_67[iVar7 /*6*/].f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_67[iVar7 /*6*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_67[iVar7 /*6*/]));
				}
				iVar7++;
			}
			iVar7 = 0;
			while (iVar7 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_68[iVar7 /*14*/].f_1))
				{
					OBJECT::DELETE_OBJECT(&(Local_68[iVar7 /*14*/].f_1));
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_68[iVar7 /*14*/].f_2))
				{
					GRAPHICS::REMOVE_PARTICLE_FX(Local_68[iVar7 /*14*/].f_2, false);
				}
				iVar7++;
			}
			AUDIO::SET_VEHICLE_CONVERSATIONS_PERSIST(false, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_166[2], true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_166[2], 2);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], true);
				ENTITY::SET_ENTITY_NOWEAPONDECALS(iLocal_166[2], true);
			}
			if (!bLocal_195)
			{
				func_301(7);
				if (bParam1)
				{
					SYSTEM::WAIT(500);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
				{
					VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_166[2], true);
				}
				func_285(7);
				func_284();
				func_129(4, 0);
				func_129(1, 0);
				func_159();
				SYSTEM::WAIT(0);
				if (bParam1)
				{
					func_307(1, 0, 1, 0, 0);
				}
				if (!bParam1)
				{
					func_114(3, 1065353216);
					func_114(1, 1065353216);
				}
				func_293(1);
				func_291();
				func_292(0);
				iLocal_464 = 3;
				iLocal_465 = 1;
				if (!bParam1)
				{
					func_290(1);
				}
				func_131(0, 0);
				func_282();
				func_116(1);
				__LIB_0__::func_366(0);
				func_856();
			}
			else
			{
				func_280();
				__LIB_17__::func_450(1, 1, 1, 0);
				bLocal_302 = true;
				iLocal_311 = 1;
				iLocal_484 = (MISC::GET_GAME_TIMER() - 1500);
			}
			__LIB_0__::func_222(&uLocal_517, 3, 0, "NervousRon", 0, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (!bLocal_195)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(20f, 1f);
			}
			if (bParam1)
			{
			}
			if (!bLocal_195)
			{
				if (bParam1)
				{
					__LIB_17__::func_99("EXL1_RELOAD_ESCAPE_CARGO");
				}
				else
				{
					__LIB_17__::func_99("EXL1_READY_TO_JUMP");
				}
			}
			if (!bLocal_195)
			{
				func_175(13);
				func_175(14);
				func_173(15);
			}
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_505, "Transition_Sound", 1903.29f, 4085.2f, 1462.66f, "EXILE_1", false, 0, false);
			func_295(8000);
			iLocal_456 = MISC::GET_GAME_TIMER();
			break;
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (iParam0 == 5)
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(1);
	}
	else
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
	}
	if (iParam0 <= 4)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
	}
	if (iParam0 > 0)
	{
		__LIB_0__::func_424(1);
	}
	else
	{
		__LIB_0__::func_424(0);
	}
	if (iParam0 == 0)
	{
		__LIB_16__::func_793(3, 0);
	}
	else
	{
		__LIB_15__::func_955(3, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), -1);
	}
	PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
	HUD::CLEAR_GPS_FLAGS();
	if (bParam1)
	{
		if (iParam0 > 0)
		{
			if (iParam0 != 5)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
	}
	PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	iVar8 = 0;
	if (iParam0 >= 7)
	{
		iVar8 = 1;
	}
	if (__LIB_14__::func_175(iParam0))
	{
		func_192(iParam0, func_274(iParam0), iVar8, 0, 0, iParam0 != 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_437 = 0;
		}
	}
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_353)
		{
			if (__LIB_0__::func_323())
			{
				if (__LIB_0__::func_324())
				{
					switch (iParam0)
					{
						case 1:
						case 2:
						case 3:
						case 4:
							iVar9 = iLocal_166[1];
							break;
						case 6:
							iVar9 = iLocal_166[2];
							break;
					}
					iVar10 = 1;
					if (iParam0 == 5 || iParam0 == 7)
					{
						if (!bLocal_195)
						{
							iVar10 = 0;
						}
					}
					__LIB_0__::func_433(iVar9, -1, iVar10);
					iLocal_353 = 1;
				}
			}
		}
		switch (iParam0)
		{
			case 1:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				break;
			case 5:
				SYSTEM::WAIT(0);
				func_114(3, 1065353216);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 || PLAYER::GET_IS_USING_FPS_THIRD_PERSON_COVER())
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(30f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(8.4f, 1f);
				}
				break;
			case 6:
				SYSTEM::WAIT(0);
				func_114(4, 1065353216);
				iVar11 = MISC::GET_GAME_TIMER() + 1000;
				while (MISC::GET_GAME_TIMER() < iVar11)
				{
					SYSTEM::WAIT(0);
				}
				break;
			case 7:
				SYSTEM::WAIT(0);
				func_114(3, 1065353216);
				func_114(1, 1065353216);
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 1, false);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), true, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
			}
			break;
		case 5:
			if (!bParam1)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && !PLAYER::GET_IS_USING_FPS_THIRD_PERSON_COVER())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(30f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(8.4f, 1f);
				}
			}
			break;
		case 7:
			if (!bLocal_195)
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_188(), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_166[2]) - 180f));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), &iLocal_501);
				PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), 6);
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, true, false);
				func_842();
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 1, false);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), true, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 500, 0f, true, false);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			break;
	}
	if (bParam1)
	{
		if (bParam6)
		{
			if (!bLocal_195)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
		else if (bLocal_195)
		{
			if (iParam0 == 7)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	iLocal_488 = MISC::GET_GAME_TIMER();
	iLocal_56 = iParam0;
}

Vector3 func_188()//Position - 0xDEE1
{
	return func_133(-0.8f, 22.4f, -3.8f);
}

void func_192(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xDFFA
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
		func_193(iParam0, sParam1, iParam4, bParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_193(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xE170
{
	func_194(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_194(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xE18C
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_14__::func_466();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_15__::func_985(&(uParam0->f_2884), 0);
		__LIB_14__::func_630(PLAYER::PLAYER_PED_ID());
		__LIB_15__::func_978(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_14__::func_466())
		{
			__LIB_15__::func_225(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		__LIB_17__::func_475(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

char* func_274(int iParam0)//Position - 0x16A32
{
	switch (iParam0)
	{
		case 0:
			return "Get to airstrip";
			break;
		case 1:
			return "Follow cargo plane - out to sea";
			break;
		case 2:
			return "Follow cargo plane - around coast";
			break;
		case 3:
			return "Follow cargo plane - allow climb";
			break;
		case 4:
			return "Enter cargo plane";
			break;
		case 5:
			return "Fight on plane";
			break;
		case 6:
			return "Fly the plane";
			break;
		case 7:
			return "Escape the plane";
			break;
	}
	return "invalid";
}

void func_280()//Position - 0x16BFE
{
	int iVar0;
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	__LIB_17__::func_57();
	TASK::REMOVE_COVER_POINT(iLocal_184);
	TASK::REMOVE_COVER_POINT(iLocal_185);
	TASK::REMOVE_COVER_POINT(iLocal_186);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	iVar0 = 0;
	while (iVar0 < Local_68.f_0)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_68[iVar0 /*14*/].f_12))
		{
			AUDIO::STOP_SOUND(Local_68[iVar0 /*14*/].f_12);
		}
		iVar0++;
	}
	HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	AUDIO::STOP_STREAM();
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_683))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_683);
	}
	func_281();
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_129(iVar0, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_77[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_69.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*17*/]))
		{
			PED::DELETE_PED(&(Local_69[iVar0 /*17*/]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		PED::DELETE_PED(&iLocal_161);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_162))
	{
		PED::DELETE_PED(&iLocal_162);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		PED::DELETE_PED(&iLocal_163);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
	{
		PED::DELETE_PED(&iLocal_164);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_165[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_165[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_67[iVar0 /*6*/].f_1))
		{
			PED::DELETE_PED(&(Local_67[iVar0 /*6*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_67[iVar0 /*6*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_67[iVar0 /*6*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_166)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_166[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_167);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_168))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < Local_62.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_62[iVar0 /*3*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_62[iVar0 /*3*/]));
			Local_62[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_63.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_63[iVar0 /*3*/]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_63[iVar0 /*3*/]));
			Local_63[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_64.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_64[iVar0 /*3*/]));
			Local_64[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_65.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_65[iVar0 /*3*/]));
			Local_65[iVar0 /*3*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_66.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_66[iVar0 /*3*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_66[iVar0 /*3*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_68.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_68[iVar0 /*14*/].f_1))
		{
			OBJECT::DELETE_OBJECT(&(Local_68[iVar0 /*14*/].f_1));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_169))
	{
		OBJECT::DELETE_OBJECT(&iLocal_169);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_170))
	{
		OBJECT::DELETE_OBJECT(&iLocal_170);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171))
	{
		OBJECT::DELETE_OBJECT(&iLocal_171);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
	{
		OBJECT::DELETE_OBJECT(&iLocal_172);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		OBJECT::DELETE_OBJECT(&iLocal_173);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		OBJECT::DELETE_OBJECT(&iLocal_174);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_180))
	{
		CAM::DESTROY_CAM(iLocal_180, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_182))
	{
		CAM::DESTROY_CAM(iLocal_182, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_183))
	{
		CAM::DESTROY_CAM(iLocal_183, false);
	}
	iVar0 = 0;
	while (iVar0 < Local_68.f_0)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_68[iVar0 /*14*/].f_2))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Local_68[iVar0 /*14*/].f_2, false);
		}
		iVar0++;
	}
	MISC::CLEAR_AREA(func_115(1), 10000f, true, false, false, false);
}

void func_281()//Position - 0x16FFB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_175(iVar0);
		iVar0++;
	}
}

void func_282()//Position - 0x1701C
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	Var1 = { Var1 };
	Var2 = { Var2 };
	Var3 = { Var3 };
	Var4 = { Var4 };
	iVar0 = 0;
	while (iVar0 < Local_66.f_0)
	{
		Local_66[iVar0 /*3*/] = OBJECT::CREATE_OBJECT(func_117(14), func_283(iVar0, 1), true, true, false);
		switch (iVar0)
		{
			case 0:
			case 2:
			case 3:
				Var1 = { 1f, 0f, 0f };
				Var2 = { -1f, 0f, 0f };
				Var3 = { 0f, 1f, 0f };
				Var4 = { 0f, -1f, 0f };
				break;
			case 1:
			case 4:
				Var1 = { -1f, 0f, 0f };
				Var2 = { 1f, 0f, 0f };
				Var3 = { 0f, -1f, 0f };
				Var4 = { 0f, 1f, 0f };
				break;
		}
		Local_66[iVar0 /*3*/].f_1 = 0;
		Local_66[iVar0 /*3*/].f_2 = 0;
		ENTITY::FREEZE_ENTITY_POSITION(Local_66[iVar0 /*3*/], true);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_66[iVar0 /*3*/], false);
		ENTITY::SET_ENTITY_LOD_DIST(Local_66[iVar0 /*3*/], 1000);
		iVar0++;
	}
}

Vector3 func_283(int iParam0, bool bParam1)//Position - 0x17109
{
	float fVar0;
	float fVar1;
	float fVar2;
	switch (iParam0)
	{
		case 0:
			fVar0 = 1.8f;
			fVar1 = 25f;
			fVar2 = -0.3f;
			break;
		case 1:
			fVar0 = -1.6f;
			fVar1 = 24.1f;
			fVar2 = -0.5f;
			break;
		case 2:
			fVar0 = -1.9f;
			fVar1 = 23.5f;
			fVar2 = -2.2f;
			break;
		case 3:
			fVar0 = -0.1f;
			fVar1 = 23.2f;
			fVar2 = -0.4f;
			break;
		case 4:
			fVar0 = -2f;
			fVar1 = -15.6f;
			fVar2 = -1.1f;
			break;
	}
	if (bParam1)
	{
		return func_133(fVar0, fVar1, fVar2);
	}
	return fVar0, fVar1, fVar2;
}

void func_284()//Position - 0x171C9
{
	Local_71 = { Local_70.f_5, Local_70.f_2, 0f };
	Local_71.f_3 = 0f;
	Local_71.f_4 = 0f;
}

void func_285(int iParam0)//Position - 0x171ED
{
	switch (iParam0)
	{
		case 5:
			Local_70.f_2 = 0f;
			Local_70.f_5 = 11.5f;
			break;
		case 7:
			Local_70.f_2 = 0f;
			Local_70.f_5 = 0f;
			break;
	}
}

int func_287(struct<3> Param0, bool bParam1)//Position - 0x17236
{
	if (func_125())
	{
		return __LIB_0__::func_488(Param0, bParam1);
	}
	return 0;
}

void func_290(bool bParam0)//Position - 0x17296
{
	if (bParam0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
		}
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_504))
	{
		AUDIO::STOP_SOUND(iLocal_504);
	}
}

void func_291()//Position - 0x172C6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_0)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_62[iVar0 /*3*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_62[iVar0 /*3*/]));
			}
		}
		iVar0++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_166[2], 2, true);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[0 /*3*/], false))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_62[0 /*3*/], true, true, false);
	}
}

void func_292(bool bParam0)//Position - 0x17331
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_0)
	{
		if (!Local_62[iVar0 /*3*/].f_1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_62[iVar0 /*3*/], false))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_62[iVar0 /*3*/], bParam0, bParam0, bParam0, bParam0, bParam0, false, false, false);
			}
		}
		iVar0++;
	}
}

void func_293(int iParam0)//Position - 0x1737E
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_64.f_0)
	{
		iVar1 = iVar0;
		if (iVar1 < 8 || iParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_64[iVar0 /*3*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_64[iVar0 /*3*/]));
			}
		}
		iVar0++;
	}
}

void func_294()//Position - 0x173C4
{
	iLocal_184 = TASK::ADD_COVER_POINT(2930.45f, 810.2f, 448.4f, 180f, 2, 0, 0, false);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), 2930.5f, 810.2f, 448.4f, -1, false, 0f, true, false, iLocal_184, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
}

void func_295(int iParam0)//Position - 0x1741D
{
	if (iParam0 >= 0)
	{
		iLocal_441 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		iLocal_441 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
	}
}

void func_296()//Position - 0x1744A
{
	int iVar0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		iVar0 = 0;
		while (iVar0 <= 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_165[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						Var1 = { 0f, 26.8826f, 2.077f };
						break;
					case 1:
						Var1 = { -0.710986f, 27.1286f, 1.99338f };
						break;
				}
				ENTITY::SET_ENTITY_PROOFS(iLocal_165[iVar0], false, false, false, false, false, false, false, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_165[iVar0], func_133(Var1), false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_165[iVar0], 0f);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_165[iVar0], func_297(0), -1, true, true);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_165[iVar0], PLAYER::PLAYER_PED_ID(), -1, true);
			}
			iVar0++;
		}
	}
}

int func_297(int iParam0)//Position - 0x17515
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_APPISTOL");
			break;
		case 2:
			return joaat("WEAPON_COMBATMG");
			break;
		case 1:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
		case 3:
			return joaat("WEAPON_RPG");
			break;
		case 4:
			return joaat("WEAPON_PISTOL");
			break;
		case 5:
			return joaat("WEAPON_ASSAULTRIFLE");
			break;
	}
	return joaat("WEAPON_UNARMED");
}

void func_298(bool bParam0)//Position - 0x1758F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
		iVar2 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0);
		iVar3 = -1;
		bVar4 = true;
		if (((iVar1 != joaat("GROUP_PISTOL") && iVar1 != joaat("GROUP_SMG")) && iVar1 != joaat("GROUP_RIFLE")) && iVar1 != joaat("GROUP_MG"))
		{
			bVar4 = false;
		}
		else
		{
			switch (iVar1)
			{
				case joaat("GROUP_PISTOL"):
					iVar5 = 30;
					break;
				case joaat("GROUP_SMG"):
					iVar5 = 90;
					break;
				case joaat("GROUP_RIFLE"):
					iVar5 = 90;
					break;
				case joaat("GROUP_MG"):
					iVar5 = 100;
					break;
				case joaat("GROUP_SHOTGUN"):
					iVar5 = 12;
					break;
			}
			if (iVar2 < iVar5)
			{
				iVar3 = iVar5;
			}
		}
		if (bVar4)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, bParam0);
			if (iVar3 >= 0)
			{
				WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar0, true));
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar0, iVar3, false);
			}
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), func_297(5), 90, true, true);
		}
	}
}

void func_299(bool bParam0)//Position - 0x176A1
{
	if (bParam0)
	{
		func_114(10, 1065353216);
		func_114(11, 1065353216);
		func_114(12, 1065353216);
		func_114(14, 1065353216);
		func_114(15, 1065353216);
	}
	else
	{
		func_129(9, 1);
		func_129(10, 1);
		func_129(11, 1);
		func_129(12, 1);
		func_129(13, 1);
		func_129(14, 1);
		func_129(15, 1);
	}
}

void func_300()//Position - 0x17719
{
	func_285(5);
	func_284();
	func_159();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(iLocal_166[2], true);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_166[2], true);
	VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_166[2], true);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_166[2], 2, true);
	}
}

void func_301(int iParam0)//Position - 0x17769
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2]);
		}
		if (iParam0 == 5)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_166[2], false);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2], iVar0, func_27(), true);
		fLocal_428 = 1E-12f;
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_166[2], fLocal_428);
		ENTITY::SET_ENTITY_PROOFS(iLocal_166[2], true, true, true, true, true, false, false, false);
		VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_166[2], false);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_166[2], false);
		VEHICLE::CONTROL_LANDING_GEAR(iLocal_166[2], 3);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[2], true, true, false);
	}
}

void func_302(bool bParam0)//Position - 0x17816
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&iLocal_161);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_161);
		}
	}
	__LIB_0__::func_221(&uLocal_517, 3);
	func_179(2);
}

void func_303(bool bParam0)//Position - 0x1784B
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	if (bParam0)
	{
		iLocal_480 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_480, iLocal_166[2], 0);
	}
	iVar0 = 1;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		iLocal_165[iVar0] = PED::CREATE_PED(26, func_117(7), 0f, 1f, 0f, 0f, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_165[iVar0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_165[iVar0], iLocal_516);
		__LIB_0__::func_609(iLocal_165[iVar0], 0);
		PED::SET_PED_KEEP_TASK(iLocal_165[iVar0], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 208, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 249, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 188, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_165[iVar0], 0);
		func_304(iVar0, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_165[iVar0], true, true, true, true, true, false, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_165[iVar0], true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_165[iVar0], false);
		PED::SET_PED_CAN_RAGDOLL(iLocal_165[iVar0], false);
		switch (iVar1)
		{
			case 1:
				iVar2 = func_297(2);
				sVar3 = "RampShooting_GUY2";
				PED::SET_PED_ACCURACY(iLocal_165[iVar0], 7);
				break;
			case 2:
				iVar2 = func_297(3);
				sVar3 = "RampShooting_GUY1";
				PED::SET_PED_ACCURACY(iLocal_165[iVar0], 100);
				break;
		}
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_165[iVar0], iVar2, -1, true, true);
		if (bParam0)
		{
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_165[iVar0], iLocal_480, func_136(0), sVar3, 1000f, -1000f, 0, 0, 1000f, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_165[iVar0], false, false);
		}
		if (iVar1 == 1)
		{
			__LIB_0__::func_222(&uLocal_517, 6, 0, "MERC1", 0, 1);
		}
		iVar0++;
	}
}

void func_304(int iParam0, bool bParam1)//Position - 0x17A00
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
	if (bParam1)
	{
		iVar0 = iLocal_165[iParam0];
	}
	else
	{
		iVar0 = Local_69[iParam0 /*17*/];
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		iVar9 = -1;
		iVar10 = -1;
		iVar11 = -1;
		iVar12 = -1;
		if (bParam1)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = 0;
					iVar5 = 1;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					break;
				case 2:
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = 4;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 1;
					break;
				case 1:
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 1;
					iVar4 = 1;
					iVar5 = 2;
					iVar6 = 2;
					iVar7 = 1;
					iVar8 = 0;
					iVar11 = 0;
					iVar12 = 0;
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = 0;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 2;
					iVar11 = 0;
					iVar12 = 1;
					break;
				case 1:
					iVar1 = 0;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 5;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 1;
					break;
				case 2:
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 2;
					iVar4 = 0;
					iVar5 = 1;
					iVar6 = 1;
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					iVar11 = 1;
					iVar12 = 0;
					break;
				case 3:
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 0;
					iVar5 = 4;
					iVar6 = 0;
					iVar7 = 0;
					iVar8 = 0;
					break;
				case 4:
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 1;
					iVar4 = 1;
					iVar5 = 4;
					iVar6 = 1;
					iVar7 = 0;
					iVar8 = 2;
					iVar11 = 0;
					iVar12 = 0;
					break;
				case 5:
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 1;
					iVar5 = 2;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 0;
					iVar11 = 0;
					iVar12 = 2;
					break;
				case 6:
					iVar1 = 1;
					iVar2 = 0;
					iVar3 = 1;
					iVar4 = 1;
					iVar5 = 1;
					iVar6 = 2;
					iVar7 = 0;
					iVar8 = 2;
					break;
				case 7:
					iVar1 = 1;
					iVar2 = 1;
					iVar3 = 2;
					iVar4 = 1;
					iVar5 = 3;
					iVar6 = 0;
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					break;
				}
		}
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, iVar1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 0, iVar2, iVar3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 3, iVar4, iVar5, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 4, 0, iVar6, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 8, iVar7, iVar8, 0);
		PED::SET_PED_COMPONENT_VARIATION(iVar0, 9, 0, 0, 0);
		PED::CLEAR_PED_PROP(iVar0, 1);
		PED::CLEAR_PED_PROP(iVar0, 0);
		if (iVar9 >= 0)
		{
			PED::SET_PED_PROP_INDEX(iVar0, 1, iVar9, iVar10, false);
		}
		if (iVar11 >= 0)
		{
			PED::SET_PED_PROP_INDEX(iVar0, 0, iVar11, iVar12, false);
		}
	}
}

void func_306()//Position - 0x17D02
{
	Global_96879 = 0;
	func_307(1, 0, 1, 0, 1);
	if (bLocal_384)
	{
		__LIB_17__::func_99("EXL1_CARGO_DOORS_OPEN");
	}
}

void func_307(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x17D27
{
	if (bParam0)
	{
		func_313(bParam2, 0);
		if (bParam4)
		{
			func_310(bParam2, 0);
		}
	}
	if (bParam1)
	{
		func_308();
		if (bParam3)
		{
		}
	}
}

void func_308()//Position - 0x17D55
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_69.f_0)
	{
		Local_69[iVar0 /*17*/] = PED::CREATE_PED(26, func_117(7), func_309(iVar0), 0f, true, true);
		switch (iVar0)
		{
			case 1:
			case 5:
			case 6:
				iVar1 = func_297(1);
				break;
			default:
				iVar1 = func_297(0);
				break;
		}
		WEAPON::GIVE_WEAPON_TO_PED(Local_69[iVar0 /*17*/], iVar1, -1, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_69[iVar0 /*17*/], true);
		PED::SET_PED_KEEP_TASK(Local_69[iVar0 /*17*/], true);
		PED::SET_PED_DIES_WHEN_INJURED(Local_69[iVar0 /*17*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_69[iVar0 /*17*/], iLocal_516);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_69[iVar0 /*17*/], false, iLocal_516);
		PED::SET_PED_ACCURACY(Local_69[iVar0 /*17*/], 0);
		PED::SET_CORPSE_RAGDOLL_FRICTION(Local_69[iVar0 /*17*/], 1f);
		__LIB_0__::func_609(Local_69[iVar0 /*17*/], 0);
		PED::SET_PED_CONFIG_FLAG(Local_69[iVar0 /*17*/], 208, true);
		PED::SET_PED_CONFIG_FLAG(Local_69[iVar0 /*17*/], 118, false);
		PED::SET_PED_CONFIG_FLAG(Local_69[iVar0 /*17*/], 249, true);
		PED::SET_PED_CONFIG_FLAG(Local_69[iVar0 /*17*/], 188, true);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_69[iVar0 /*17*/], 16);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_69[iVar0 /*17*/], false);
		PED::SET_PED_CONFIG_FLAG(Local_69[iVar0 /*17*/], 132, true);
		PED::SET_COMBAT_FLOAT(Local_69[iVar0 /*17*/], 1, 3f);
		PED::SET_COMBAT_FLOAT(Local_69[iVar0 /*17*/], 3, 1f);
		PED::SET_PED_CAN_RAGDOLL(Local_69[iVar0 /*17*/], false);
		func_304(iVar0, 0);
		TASK::TASK_AIM_GUN_AT_ENTITY(Local_69[iVar0 /*17*/], PLAYER::PLAYER_PED_ID(), -1, true);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_69[iVar0 /*17*/], false, false);
		Local_69[iVar0 /*17*/].f_10 = 0f;
		Local_69[iVar0 /*17*/].f_9 = 0;
		Local_69[iVar0 /*17*/].f_14 = 0;
		Local_69[iVar0 /*17*/].f_16 = 0;
		iVar0++;
	}
}

Vector3 func_309(int iParam0)//Position - 0x17F00
{
	float fVar0;
	float fVar1;
	switch (iParam0)
	{
		case 0:
			fVar0 = -2.1f;
			fVar1 = -16.7f;
			break;
		case 1:
			fVar0 = 0.2f;
			fVar1 = -10.1f;
			break;
		case 2:
			fVar0 = 1.9f;
			fVar1 = -4.9f;
			break;
		case 3:
			fVar0 = -0.4f;
			fVar1 = 1.2f;
			break;
		case 4:
			fVar0 = -2.2f;
			fVar1 = 5.8f;
			break;
		case 6:
			fVar0 = 1.1f;
			fVar1 = 8.5f;
			break;
		case 7:
			fVar0 = 0.1f;
			fVar1 = 18.9f;
			break;
		case 5:
			fVar0 = -2f;
			fVar1 = 20f;
			break;
	}
	return func_133(fVar0, fVar1, -4f);
}

void func_310(bool bParam0, bool bParam1)//Position - 0x17FD4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Local_64.f_0)
		{
			iVar2 = iVar0;
			iVar3 = func_312(iVar2);
			if (iVar3 == 1)
			{
				iVar1 = func_117(13);
			}
			else
			{
				iVar1 = func_117(14);
			}
			Local_64[iVar0 /*3*/] = OBJECT::CREATE_OBJECT(iVar1, func_311(iVar2, 1), true, true, false);
			Local_64[iVar0 /*3*/].f_2 = iVar3;
			Local_64[iVar0 /*3*/].f_1 = 0;
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_64[iVar0 /*3*/], false);
			if (bParam0)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_64[iVar0 /*3*/], iLocal_166[2], 0, func_311(iVar2, 0), 0f, 0f, 0f, false, false, true, false, 2, true, 0);
			}
			iVar0++;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
	{
		iVar0 = 0;
		while (iVar0 < Local_65.f_0)
		{
			iVar5 = iVar0;
			iVar6 = func_312(iVar5);
			if (iVar6 == 1)
			{
				iVar4 = func_117(13);
			}
			else
			{
				iVar4 = func_117(14);
			}
			Local_65[iVar0 /*3*/] = OBJECT::CREATE_OBJECT(iVar4, func_311(iVar5, 1), true, true, false);
			Local_65[iVar0 /*3*/].f_2 = iVar6;
			Local_65[iVar0 /*3*/].f_1 = 0;
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_65[iVar0 /*3*/], false);
			if (bParam0)
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_65[iVar0 /*3*/], iLocal_168, 0, func_311(iVar5, 0), 0f, 0f, 0f, false, false, true, false, 2, true, 0);
			}
			iVar0++;
		}
	}
}

Vector3 func_311(int iParam0, bool bParam1)//Position - 0x18116
{
	float fVar0;
	float fVar1;
	float fVar2;
	switch (iParam0)
	{
		case 0:
			fVar0 = -1.81f;
			fVar1 = -19.6f;
			break;
		case 1:
			fVar0 = -2f;
			fVar1 = -18.2f;
			break;
		case 2:
			fVar0 = -2f;
			fVar1 = -14.9f;
			break;
		case 3:
			fVar0 = -0.7f;
			fVar1 = -15.5f;
			break;
		case 5:
			fVar0 = -1.9f;
			fVar1 = -0.2f;
			break;
		case 6:
			fVar0 = -0.7f;
			fVar1 = 0.3f;
			break;
		case 4:
			fVar0 = -1.9f;
			fVar1 = 2f;
			break;
		case 7:
			fVar0 = -1.6f;
			fVar1 = 4.7f;
			break;
		case 8:
			fVar0 = 0f;
			fVar1 = 0f;
			fVar2 = -3.45f;
			break;
		case 9:
			fVar0 = 1.3f;
			fVar1 = -0.4f;
			fVar2 = -3.45f;
			break;
		case 10:
			fVar0 = 2f;
			fVar1 = 0.9f;
			fVar2 = -3.45f;
			break;
		case 11:
			fVar0 = 0.4f;
			fVar1 = 0.3f;
			fVar2 = (-3.45f + 1.15f);
			break;
		case 12:
			fVar0 = 1.7f;
			fVar1 = 0.6f;
			fVar2 = (-3.45f + 1.15f);
			break;
	}
	if (iParam0 < 8)
	{
		if (Local_64[iParam0 /*3*/].f_2 == 1)
		{
			fVar2 = -3.45f;
		}
		else
		{
			fVar2 = -3.45f;
		}
	}
	else
	{
		fVar0 = (fVar0 + 0.3f);
		fVar1 = (fVar1 + 26.92f);
	}
	if (bParam1)
	{
		return func_133(fVar0, fVar1, fVar2);
	}
	return fVar0, fVar1, fVar2;
}

int func_312(int iParam0)//Position - 0x182C5
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
			return 1;
			break;
	}
	return 0;
}

void func_313(bool bParam0, bool bParam1)//Position - 0x182EE
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
	if (!bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Local_62.f_0)
		{
			iVar1 = iVar0;
			if (!Global_96879 || iVar1 != 0)
			{
				iVar3 = func_314(iVar1);
				if (iVar3 == 1)
				{
					iVar2 = func_117(12);
				}
				Local_62[iVar0 /*3*/].f_2 = iVar3;
				Local_62[iVar0 /*3*/] = VEHICLE::CREATE_VEHICLE(iVar2, func_132(iVar1, 1), 0f, true, true, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_62[iVar0 /*3*/], 2);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_62[iVar0 /*3*/], false);
				Local_62[iVar0 /*3*/].f_1 = 0;
				switch (iVar1)
				{
					case 0:
					case 2:
					case 5:
					case 6:
						iVar4 = 0;
						break;
					case 1:
					case 3:
					case 4:
					case 7:
						iVar4 = 1;
						break;
				}
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_62[iVar0 /*3*/], iVar4);
				VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Local_62[iVar0 /*3*/], false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_62[iVar0 /*3*/], false);
				if (iVar1 == 0)
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_62[iVar0 /*3*/], true);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_63.f_0)
		{
			iVar5 = iVar0;
			iVar7 = func_314(iVar5);
			if (iVar7 == 1)
			{
				iVar6 = func_117(12);
			}
			Local_63[iVar0 /*3*/].f_2 = iVar7;
			Local_63[iVar0 /*3*/] = VEHICLE::CREATE_VEHICLE(iVar6, func_132(iVar5, 1), 0f, true, true, false);
			Local_63[iVar0 /*3*/].f_1 = 0;
			switch (iVar5)
			{
				case 0:
				case 2:
				case 5:
				case 6:
					iVar8 = 0;
					break;
				case 1:
				case 3:
				case 4:
				case 7:
					iVar8 = 1;
					break;
			}
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_63[iVar0 /*3*/], iVar8);
			iVar0++;
		}
	}
	if (bParam0)
	{
		func_131(0, bParam1);
	}
}

int func_314(int iParam0)//Position - 0x184A6
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 0:
			return 1;
			break;
		case 6:
		case 7:
			return 1;
			break;
	}
	return 1;
}

void func_315(int iParam0)//Position - 0x184F4
{
	float fVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::CONTROL_LANDING_GEAR(iLocal_166[2], 3);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2]);
		}
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2], 1, func_27(), true);
		if (iParam0 == 1)
		{
			fVar0 = 7500f;
		}
		else if (iParam0 == 2)
		{
			fVar0 = 101000f;
		}
		else if (iParam0 == 3)
		{
			fVar0 = 189100f;
		}
		else
		{
			fVar0 = (183000f + 20000f);
		}
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2], fVar0);
	}
}

void func_316()//Position - 0x18585
{
	iLocal_169 = OBJECT::CREATE_OBJECT(func_117(15), 0f, 2f, 4f, true, true, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_169, false, false);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_169, false, false);
}

void func_317()//Position - 0x185B2
{
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_166[2], "EXILE_1_CARGO_PLANE", 0f);
}

void func_318(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x185C9
{
	int iVar0;
	int iVar1;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[iParam0], false))
	{
		iVar0 = func_382(iParam0);
		if (iParam0 == 0)
		{
			__LIB_17__::func_245(&(iLocal_166[iParam0]), 2, Param1, fParam2, 0, 0);
		}
		else
		{
			iLocal_166[iParam0] = VEHICLE::CREATE_VEHICLE(func_117(iVar0), Param1, fParam2, true, true, false);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_166[iParam0], 5f);
		if (!bParam3)
		{
			func_179(iVar0);
		}
		if (bParam5)
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_166[iParam0], false);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_166[iParam0], false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_166[iParam0], true, true, true, true, true, false, false, false);
		}
		if (!bParam4)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_166[iParam0]));
		}
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_166[iParam0], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_166[iParam0], false);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_166[iParam0], true);
		switch (iParam0)
		{
			case 2:
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[iParam0], false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_166[iParam0], true);
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_166[iParam0], false);
				ENTITY::SET_ENTITY_PROOFS(iLocal_166[iParam0], true, true, true, true, true, false, false, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_166[iParam0], 2);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_166[iParam0], false);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_166[iParam0], false);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_166[iParam0], false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_166[iParam0], false);
				VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iLocal_166[iParam0], false);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_166[iParam0], 6000);
				VEHICLE::SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(iLocal_166[iParam0], true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[iParam0], true, true, false);
				func_290(1);
				iVar1 = 2;
				while (iVar1 <= 8)
				{
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_166[iParam0], iVar1, false);
					iVar1++;
				}
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_166[2], 7, true);
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_166[iParam0], 3);
				__LIB_14__::func_867(iLocal_166[iParam0], 0);
				break;
			case 1:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_166[iParam0], 0);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_166[iParam0], false);
				ENTITY::SET_ENTITY_HEALTH(iLocal_166[iParam0], 2000, 0);
				break;
			}
	}
}

int func_382(int iParam0)//Position - 0x2122E
{
	switch (iParam0)
	{
		case 0:
			return 8;
			break;
		case 1:
			return 9;
			break;
		case 2:
			return 10;
			break;
	}
	return 12;
}

int func_383(struct<3> Param0, float fParam1)//Position - 0x21269
{
	return func_384(&(Global_106934.f_2890), Param0, fParam1, 0);
}

int func_384(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x21283
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	if (__LIB_13__::func_797(uParam0))
	{
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (__LIB_13__::func_825(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			__LIB_17__::func_241(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				__LIB_1__::func_569(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_17__::func_64(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_17__::func_64(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					__LIB_0__::func_397(iVar0, uParam0->f_11);
				}
				else if ((!__LIB_17__::func_240(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = __LIB_0__::func_489(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						__LIB_17__::func_68(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							__LIB_0__::func_364(24, 0);
							__LIB_17__::func_68(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					__LIB_13__::func_828(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_422()//Position - 0x23FE5
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		OBJECT::DELETE_OBJECT(&iLocal_173);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_162))
	{
		PED::DELETE_PED(&iLocal_162);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		PED::DELETE_PED(&iLocal_163);
	}
	func_179(3);
	func_179(4);
	func_179(19);
	func_423(5);
	bLocal_336 = true;
}

void func_423(int iParam0)//Position - 0x2403B
{
	char* sVar0;
	if (iLocal_189[iParam0])
	{
		iLocal_189[iParam0] = 0;
		sVar0 = func_136(iParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(sVar0);
		}
	}
}

void func_424(bool bParam0)//Position - 0x2406C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[0]))
	{
		PED::DELETE_PED(&(uLocal_77[0]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_173))
	{
		iLocal_173 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_117(19), 1976.806f, 3819.159f, 32.419f, true, true, false);
		ENTITY::SET_ENTITY_HEADING(iLocal_173, 124.33f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_173, true);
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1974f, 3819f, 34f);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iLocal_173, iVar0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_162))
	{
		func_603(&iLocal_162, 0, 1974.0763f, 3818.7449f, 32.43633f, 0f, 0, 0, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_162, joaat("PLAYER"));
		TASK::TASK_LOOK_AT_ENTITY(iLocal_162, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		iLocal_481 = PED::CREATE_SYNCHRONIZED_SCENE(1975.008f, 3821.327f, 33.426f, 0f, 0f, -150.11f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_162, iLocal_481, func_136(5), "_LeadOut_Michael", 1000f, -8f, 1, 144, 1000f, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_162, false, false);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_481, true);
		func_427(iLocal_162, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_162, 208, true);
		__LIB_16__::func_930(&iLocal_163, 40, 1974.0763f, 3818.7449f, 32.43633f, 0f, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_163, joaat("PLAYER"));
		TASK::TASK_LOOK_AT_ENTITY(iLocal_163, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
		iLocal_482 = PED::CREATE_SYNCHRONIZED_SCENE(1976.7f, 3819.085f, 33.4576f, 0f, 0f, -58.44f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_163, iLocal_482, func_136(5), "_LeadOut_Patricia", 1000f, -8f, 1, 144, 1000f, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_163, false, false);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_482, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 118, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_163, 208, true);
		if (bParam0)
		{
			__LIB_17__::func_102();
			bVar1 = false;
			while (!bVar1)
			{
				if (!PED::IS_PED_INJURED(iLocal_162))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_162))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		__LIB_16__::func_930(&iLocal_163, 40, 1975.1969f, 3820.6619f, 32.44597f, 0f, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_163, joaat("PLAYER"));
		if (bParam0)
		{
			__LIB_17__::func_102();
			bVar2 = false;
			while (!bVar2)
			{
				if (!PED::IS_PED_INJURED(iLocal_163))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_163))
					{
						bVar2 = true;
					}
				}
				else
				{
					bVar2 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_162))
	{
		PED::SET_PED_KEEP_TASK(iLocal_162, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_162, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_162, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_163))
	{
		PED::SET_PED_KEEP_TASK(iLocal_163, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_163, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_163, true);
	}
}

int func_427(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2440E
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
										func_427(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_427(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_437(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_436(iParam0, iVar10, &iVar4, 1))
							{
								func_427(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_427(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_427(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_427(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_427(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_427(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_427(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_427(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_427(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_427(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_436(iParam0, iVar10, &iVar4, 0))
		{
			func_427(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_428(iParam0, iVar10, &iVar4))
		{
			func_427(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_428(int iParam0, int iParam1, int iParam2)//Position - 0x24C1E
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_429(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_429(int iParam0, int iParam1, int iParam2)//Position - 0x24CAA
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
				if (!func_429(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_429(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_429(iParam0, 14, iVar4))
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
			if (!func_429(iParam0, 14, uVar8[iVar7]))
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

int func_436(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2576A
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_429(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_437(int iParam0, int iParam1, int iParam2)//Position - 0x25800
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
				if (func_429(iParam0, iParam1, iVar0))
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
				if (func_429(iParam0, iParam1, iVar1))
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

void func_541()//Position - 0x4266D
{
	if (!PED::IS_PED_INJURED(iLocal_161))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_161);
		ENTITY::SET_ENTITY_COORDS(iLocal_161, func_115(11), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_161, -5.8f);
	}
}

void func_542(int iParam0, bool bParam1)//Position - 0x426A4
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	if (PED::IS_PED_INJURED(iLocal_161))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { func_115(11) };
				fVar1 = -5.8f;
				break;
			case 1:
				Var0 = { func_115(12) };
				fVar1 = -179.12f;
				break;
		}
		__LIB_16__::func_930(&iLocal_161, 20, Var0, fVar1, 0);
		if (bParam1)
		{
			__LIB_17__::func_102();
			bVar2 = false;
			while (!bVar2)
			{
				if (!PED::IS_PED_INJURED(iLocal_161))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_161))
					{
						bVar2 = true;
					}
				}
				else
				{
					bVar2 = true;
				}
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_161))
	{
		PED::SET_PED_PROP_INDEX(iLocal_161, 0, 0, 0, false);
		PED::SET_PED_PROP_INDEX(iLocal_161, 1, 0, 0, false);
		PED::SET_PED_KEEP_TASK(iLocal_161, true);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_161, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_161, 206, true);
		__LIB_0__::func_222(&uLocal_517, 3, iLocal_161, "NervousRon", 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_161, joaat("PLAYER"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_161, false);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_161, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_161, 32, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_161, 182, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_161, 174, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_161, true);
		switch (iParam0)
		{
			case 0:
				break;
			case 1:
				break;
			}
	}
}

void func_543()//Position - 0x427E1
{
	iLocal_683 = STREAMING::STREAMVOL_CREATE_FRUSTUM(1983.2931f, 3823.837f, 31.438f, __LIB_3__::func_80(0f, 0f, 34.6f), 3500f, 12, 127);
}

void func_546(int iParam0, int iParam1, int iParam2)//Position - 0x42835
{
	iParam2 = iParam2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				break;
			}
	}
}

void func_547(int iParam0)//Position - 0x4285B
{
	switch (iParam0)
	{
		case 0:
			func_318(0, func_115(0), -60.09f, 1, 1, 0);
			break;
		case 1:
			func_318(2, func_115(6), 0f, 1, 1, 0);
			func_317();
			func_318(1, func_115(2), 27.5f, 1, 1, 0);
			break;
		case 2:
			func_318(2, func_115(6), 0f, 1, 1, 0);
			func_317();
			func_318(1, func_115(3), -42.49f, 1, 1, 0);
			break;
		case 3:
			func_318(2, func_115(6), 0f, 1, 1, 0);
			func_317();
			func_318(1, func_115(4), -169.9f, 1, 1, 0);
			break;
		case 4:
			func_318(2, func_115(6), 0f, 1, 1, 0);
			func_317();
			func_549();
			func_318(1, func_115(5), -171.8f, 1, 1, 0);
			break;
		case 5:
			func_318(2, func_115(6), 0f, 1, 1, 0);
			func_548();
			func_549();
			break;
		case 6:
			func_318(2, func_115(7), 121f, 1, 1, 0);
			func_548();
			break;
		case 7:
			func_318(2, func_115(8), 0f, 1, 1, 0);
			func_548();
			break;
	}
}

void func_548()//Position - 0x42997
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_166[2], 7, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_166[2], 8, true);
	}
}

void func_549()//Position - 0x429C6
{
	int iVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		iVar0 = 0;
		while (iVar0 <= 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_165[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = -1;
				}
				else
				{
					iVar1 = 0;
				}
				iLocal_165[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_166[2], 26, func_117(6), iVar1, true, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_165[iVar0], true);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_165[iVar0], false);
				PED::SET_PED_DIES_WHEN_INJURED(iLocal_165[iVar0], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_165[iVar0], true);
				ENTITY::SET_ENTITY_PROOFS(iLocal_165[iVar0], true, true, true, true, true, false, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_165[iVar0], true);
				PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 208, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 118, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 249, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_165[iVar0], 188, true);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_165[iVar0], 16);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_165[iVar0], false);
				__LIB_0__::func_609(iLocal_165[iVar0], 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_165[iVar0], iLocal_516);
				func_304(iVar0, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_165[iVar0], 10, 1, 0, 0);
			}
			iVar0++;
		}
	}
}

int func_603(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x488D7
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_16__::func_895(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_792(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_605(*iParam0, bParam6);
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

int func_605(int iParam0, bool bParam1)//Position - 0x489EF
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_609(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_609(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_429(iParam0, 3, 169))
					{
						func_427(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_429(iParam0, 12, 6))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 11))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 12, 10))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 12, 50))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 14, 59))
			{
				func_427(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_429(iParam0, 8, 22))
			{
				func_427(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_429(iParam0, 12, 14))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_429(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 4))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 12, 3))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 14, 82))
			{
				func_427(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_429(iParam0, 8, 76))
			{
				func_427(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_429(iParam0, 12, 1))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_429(iParam0, 12, 12))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 12, 15))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_429(iParam0, 3, 71))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_429(iParam0, 12, 7))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 12, 6))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_429(iParam0, 14, 88))
			{
				func_427(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_429(iParam0, 8, 17))
			{
				func_427(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_429(iParam0, 12, 11))
			{
				func_427(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_609(int iParam0, int iParam1)//Position - 0x49180
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_437(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_611(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_15__::func_225(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_15__::func_983();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
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

void func_611(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x493FC
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
		iVar0 = __LIB_13__::func_716(iParam0);
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
			if (func_436(iParam0, iVar1, &iVar2, 0))
			{
				func_427(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_428(iParam0, iVar1, &iVar2))
			{
				func_427(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_773(iParam0);
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
			func_614(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_614(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_614(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_614(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x498D8
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
						func_734(iVar5, 10, 0, 1);
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
								func_614(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_733(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_614(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_727(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_734(iVar5, 14, uVar18[iVar1], 1);
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
							func_614(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_734(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_614(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_719(iParam0);
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
						func_614(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_614(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_718(iVar5, iVar24, iVar23, iVar25);
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
							func_614(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_614(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_614(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_614(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_614(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_614(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_614(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_727(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_718(iVar5, func_733(iParam0, 8, -1), iParam2, func_733(iParam0, 4, -1));
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
				func_657(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_718(iVar5, iParam2, iVar44, iVar45);
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
			func_727(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_718(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_614(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_614(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_718(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_718(iVar5, iVar58, iVar57, iParam2);
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
						func_614(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_718(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_614(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_634(iParam0, 9, iVar63))
						{
							func_614(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_614(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_614(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_614(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_733(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_733(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_614(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_614(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_614(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_614(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_614(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_614(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_614(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_614(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_614(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_614(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_719(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_614(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_614(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_615(iParam0, &uVar4))
		{
			func_614(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_614(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_614(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_614(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_733(iParam0, 3, -1), iVar10);
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
				func_614(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_615(int iParam0, var uParam1)//Position - 0x4B782
{
	int iVar0;
	int iVar1;
	*uParam1 = func_733(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_634(iParam0, iVar1, iVar0))
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

int func_634(int iParam0, int iParam1, int iParam2)//Position - 0x4FA3F
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
				if (!func_634(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_634(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_634(iParam0, 14, iVar6))
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
				if (__LIB_0__::func_240(iVar0, 11, __LIB_0__::func_350(iParam0, 11), -1))
				{
					if (__LIB_0__::func_353(iVar0, 4, iParam2, &uVar18))
					{
						return func_634(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_634(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_657(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5676B
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
	func_658(iParam0, bParam3, 0, -1);
}

void func_658(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x567B9
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
		bVar3 = func_698(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_689(iParam0, iParam3);
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

int func_689(int iParam0, int iParam1)//Position - 0x65D59
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
				iVar3 = func_733(iParam0, 11, -1);
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
				iVar5 = func_733(iParam0, 11, -1);
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

int func_698(int iParam0, bool bParam1)//Position - 0x661B7
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_733(iParam0, 11, -1), 0);
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
						iVar3 = func_733(iParam0, 11, -1);
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
						iVar5 = func_733(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_733(iParam0, 11, -1), 0);
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
						iVar8 = func_733(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_733(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_733(iParam0, 11, -1), 0);
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
						iVar12 = func_733(iParam0, 8, -1);
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

int func_718(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6F06B
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
					iVar0 = func_718(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_718(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_719(int iParam0)//Position - 0x703A7
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
		if (!func_724(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_724(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_724(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x70D71
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_733(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_727(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7368B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_773(iParam0))
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

int func_733(int iParam0, int iParam1, int iParam2)//Position - 0x7393C
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

void func_734(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x739DD
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
									func_734(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_734(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_734(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_734(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_734(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_734(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_773(int iParam0)//Position - 0x8C753
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
				iVar1 = func_733(iParam0, 11, -1);
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
				iVar3 = func_733(iParam0, 11, -1);
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

void func_792(int iParam0)//Position - 0x8DD24
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
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
		func_611(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_437(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_793(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_437(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_437(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_793(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_793(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_437(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_611(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_793(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x8DF81
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_796(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_796(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x8E13C
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
								func_796(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_796(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_796(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_796(iParam0, 14, iVar5, 1, 0);
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
								func_796(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_796(iParam0, 14, 17, 1, 0);
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

int func_801(int iParam0)//Position - 0x8E75C
{
	iParam0 = iParam0;
	return 2;
}

void func_802(int iParam0, bool bParam1)//Position - 0x8E769
{
	int iVar0;
	if (bParam1)
	{
		func_803();
	}
	switch (iParam0)
	{
		case 0:
			iLocal_157 = 0;
			iLocal_213 = 0;
			iLocal_214 = 0;
			bLocal_215 = false;
			iLocal_216 = 0;
			bLocal_211 = false;
			bLocal_218 = false;
			iLocal_212 = 0;
			bLocal_400 = false;
			iLocal_401 = 0;
			bLocal_342 = false;
			bLocal_336 = false;
			iLocal_339 = 0;
			bLocal_340 = false;
			iLocal_341 = 0;
			bLocal_342 = false;
			bLocal_343 = false;
			iLocal_351 = 0;
			iLocal_440 = 3;
			iLocal_493 = 0;
			fLocal_433 = 0f;
			break;
		case 1:
			iLocal_75 = 0;
			iLocal_440 = 2;
			fLocal_425 = 0f;
			iLocal_444 = 0;
			iLocal_442 = 0;
			iLocal_486 = 0;
			iLocal_487 = 0;
			fLocal_421 = 0f;
			fLocal_424 = 0f;
			iLocal_491 = -1;
			bLocal_218 = false;
			iLocal_217 = 0;
			iLocal_240 = 0;
			iLocal_219 = 0;
			bLocal_220 = false;
			bLocal_221 = false;
			bLocal_222 = false;
			bLocal_223 = false;
			iLocal_224 = 0;
			iLocal_225 = 0;
			bLocal_226 = false;
			iLocal_227 = 0;
			iLocal_228 = 0;
			iLocal_229 = 0;
			iLocal_230 = 0;
			bLocal_231 = false;
			iLocal_232 = 0;
			bLocal_236 = false;
			iLocal_237 = 0;
			iLocal_238 = 0;
			bLocal_239 = false;
			iLocal_250 = 0;
			iLocal_251 = 1;
			bLocal_378 = false;
			bLocal_379 = false;
			bLocal_380 = false;
			bLocal_381 = false;
			bLocal_382 = false;
			bLocal_383 = false;
			bLocal_384 = false;
			iLocal_320 = 0;
			bLocal_321 = false;
			iLocal_402 = 0;
			iLocal_403 = 0;
			bLocal_354 = false;
			bLocal_374 = false;
			break;
		case 2:
			iLocal_59 = 0;
			break;
		case 3:
			iLocal_59 = 0;
			iLocal_155 = 0;
			bLocal_234 = false;
			iLocal_233 = 0;
			bLocal_235 = false;
			Local_413 = { 1.08245f, -18f, -3f };
			Local_414 = { -1.28529f, -13f, -3f };
			break;
		case 4:
			iLocal_59 = 0;
			iLocal_443 = 0;
			fLocal_426 = 0f;
			fLocal_431 = 1f;
			Local_413 = { 1.08245f, -37.7809f, -5.74982f };
			Local_414 = { -1.28529f, -32.7518f, -4.75798f };
			Local_416 = { 0f, 0f, 0f };
			bLocal_244 = false;
			bLocal_242 = false;
			bLocal_243 = false;
			iLocal_245 = 0;
			bLocal_246 = false;
			bLocal_247 = false;
			bLocal_248 = false;
			iLocal_241 = 0;
			bLocal_385 = false;
			bLocal_386 = false;
			iLocal_326 = 0;
			bLocal_252 = false;
			bLocal_404 = false;
			bLocal_405 = false;
			bLocal_332 = false;
			iLocal_335 = 0;
			iLocal_337 = 0;
			bLocal_329 = false;
			iLocal_330 = 0;
			iLocal_347 = 0;
			iLocal_348 = 0;
			bLocal_349 = false;
			bLocal_368 = false;
			bLocal_369 = false;
			iLocal_371 = 0;
			bLocal_375 = false;
			iLocal_492 = -1;
			iLocal_507 = -1;
			iLocal_510 = -1;
			break;
		case 5:
			iLocal_156 = 0;
			iLocal_464 = 0;
			iLocal_466 = 0;
			iLocal_465 = 0;
			iLocal_467 = 0;
			iLocal_459 = 0;
			iLocal_461 = -1;
			iLocal_275 = 0;
			bLocal_316 = false;
			bLocal_302 = false;
			bLocal_252 = false;
			iLocal_258 = 0;
			iLocal_260 = 0;
			iLocal_250 = 0;
			iLocal_249 = 0;
			iLocal_261 = 0;
			bLocal_259 = false;
			iLocal_253 = 0;
			iLocal_257 = 0;
			bLocal_254 = false;
			bLocal_255 = false;
			iLocal_256 = 0;
			iLocal_262 = 0;
			bLocal_263 = false;
			bLocal_264 = false;
			bLocal_265 = false;
			bLocal_387 = false;
			bLocal_388 = false;
			bLocal_329 = false;
			iLocal_330 = 0;
			iLocal_344 = 0;
			iLocal_346 = 0;
			iLocal_356 = 0;
			iLocal_358 = 0;
			bLocal_359 = false;
			bLocal_366 = false;
			iLocal_395 = 0;
			iLocal_376 = 0;
			bLocal_360 = false;
			iLocal_361 = 0;
			bLocal_362 = false;
			bLocal_363 = false;
			bLocal_364 = false;
			iLocal_498 = -1;
			iLocal_499 = -1;
			fLocal_430 = 1f;
			break;
		case 6:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_68[iVar0 /*14*/] = 0;
				iVar0++;
			}
			iLocal_74 = 0;
			iLocal_158 = 0;
			iLocal_75 = 0;
			iLocal_159 = 0;
			iLocal_266 = 0;
			iLocal_267 = 0;
			bLocal_268 = false;
			bLocal_269 = false;
			bLocal_270 = false;
			bLocal_271 = false;
			bLocal_272 = false;
			iLocal_280 = 0;
			bLocal_281 = false;
			bLocal_282 = false;
			bLocal_274 = false;
			bLocal_273 = false;
			bLocal_276 = false;
			bLocal_277 = false;
			bLocal_284 = false;
			bLocal_287 = false;
			bLocal_285 = false;
			bLocal_286 = false;
			bLocal_288 = false;
			bLocal_289 = false;
			bLocal_290 = false;
			bLocal_291 = false;
			bLocal_292 = false;
			bLocal_293 = false;
			bLocal_294 = false;
			iLocal_295 = 0;
			bLocal_296 = false;
			bLocal_297 = false;
			bLocal_299 = false;
			bLocal_298 = false;
			iLocal_278 = 0;
			iLocal_279 = 0;
			iLocal_251 = 0;
			iLocal_283 = 0;
			bLocal_389 = false;
			bLocal_390 = false;
			bLocal_391 = false;
			bLocal_322 = false;
			iLocal_323 = 0;
			bLocal_406 = false;
			iLocal_333 = 0;
			iLocal_338 = 0;
			bLocal_355 = false;
			bLocal_367 = false;
			iLocal_370 = 0;
			bLocal_396 = false;
			fLocal_435 = 0f;
			fLocal_432 = 0f;
			iLocal_470 = 0;
			iLocal_475 = MISC::GET_GAME_TIMER() + 400;
			Local_415 = { -19f, 20.7f, 3f };
			break;
		case 7:
			iLocal_76 = 0;
			iLocal_461 = -1;
			fLocal_427 = 0f;
			iLocal_250 = 0;
			iLocal_275 = 0;
			iLocal_300 = 0;
			iLocal_260 = 0;
			bLocal_302 = false;
			bLocal_301 = false;
			iLocal_303 = 0;
			iLocal_304 = 0;
			bLocal_305 = false;
			bLocal_306 = false;
			bLocal_307 = false;
			bLocal_308 = false;
			iLocal_311 = 0;
			iLocal_312 = 0;
			bLocal_315 = false;
			iLocal_310 = 0;
			bLocal_309 = false;
			bLocal_313 = false;
			iLocal_314 = 0;
			iLocal_334 = 0;
			bLocal_392 = false;
			iLocal_393 = 0;
			bLocal_394 = false;
			iLocal_318 = 0;
			iLocal_319 = 0;
			iLocal_324 = 0;
			iLocal_325 = 0;
			bLocal_327 = false;
			iLocal_328 = 0;
			bLocal_329 = false;
			iLocal_330 = 0;
			iLocal_331 = 0;
			iLocal_407 = 0;
			iLocal_408 = 0;
			iLocal_409 = 0;
			bLocal_255 = false;
			iLocal_345 = 0;
			iLocal_357 = 0;
			iLocal_372 = 0;
			iLocal_373 = 0;
			iLocal_377 = 0;
			fLocal_430 = 0f;
			fLocal_434 = 0.0027f;
			fLocal_436 = -1f;
			iLocal_497 = -1;
			break;
	}
}

void func_803()//Position - 0x8EC49
{
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_61 = 0;
	iLocal_196 = 0;
	bLocal_197 = false;
	iLocal_198 = 0;
	bLocal_200 = false;
	iLocal_202 = 0;
	iLocal_201 = 0;
	bLocal_209 = false;
	bLocal_210 = false;
	iLocal_203 = 0;
	iLocal_204 = 0;
	iLocal_205 = 0;
	bLocal_206 = false;
	iLocal_441 = -1;
	iLocal_478 = 0;
}

void func_804(bool bParam0)//Position - 0x8EC92
{
	HUD::REQUEST_ADDITIONAL_TEXT("PFIGHT", 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_805(int iParam0, bool bParam1, bool bParam2)//Position - 0x8ECBA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (__LIB_17__::func_435(iVar1, iParam0))
		{
			func_808(iVar1);
		}
		else if (!__LIB_17__::func_435(iVar1, iLocal_56) || !bParam2)
		{
			func_807(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_806())
		{
			__LIB_17__::func_102();
			while (!func_806())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_806()//Position - 0x8ED28
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_193[iVar0])
		{
			switch (iVar0)
			{
				case 0:
					break;
				}
		}
		iVar0++;
	}
	return 1;
}

void func_807(int iParam0)//Position - 0x8ED5D
{
	if (iLocal_193[iParam0])
	{
		iLocal_193[iParam0] = 0;
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_808(int iParam0)//Position - 0x8ED87
{
	iLocal_193[iParam0] = 1;
	switch (iParam0)
	{
		case 0:
			break;
	}
}

void func_810(int iParam0, bool bParam1, bool bParam2)//Position - 0x8EDC4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_816(iVar1, iParam0))
		{
			func_815(iVar1);
		}
		else if (!func_816(iVar1, iLocal_56) || !bParam2)
		{
			func_814(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_811())
		{
			__LIB_17__::func_102();
			while (!func_811())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_811()//Position - 0x8EE32
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_192[iVar0])
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_812(iVar0), false, -1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_812(int iParam0)//Position - 0x8EE6B
{
	switch (iParam0)
	{
		case 0:
			return func_813();
			break;
		case 1:
			return "EXILE_1_CAR_01";
			break;
		case 2:
			return "EXILE_1_CAR_02";
			break;
		case 3:
			return "EXILE_1_CAR_03";
			break;
		case 4:
			return "EXILE_1_PT2_FAIL";
			break;
		case 5:
			return "EXILE_1_TRANSITION_WIND";
			break;
	}
	return "invalid!";
}

char* func_813()//Position - 0x8EEE3
{
	return "Alarms";
}

void func_814(int iParam0)//Position - 0x8EEF0
{
	char* sVar0;
	if (iLocal_192[iParam0])
	{
		iLocal_192[iParam0] = 0;
		sVar0 = func_812(iParam0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sVar0);
	}
}

void func_815(int iParam0)//Position - 0x8EF18
{
	char* sVar0;
	iLocal_192[iParam0] = 1;
	sVar0 = func_812(iParam0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sVar0, false, -1);
}

int func_816(int iParam0, int iParam1)//Position - 0x8EF39
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 6)
			{
				return 1;
			}
			break;
		case 1:
		case 2:
		case 3:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 4:
		case 5:
			if (iParam1 == 7)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_817(int iParam0, bool bParam1, bool bParam2)//Position - 0x8EF94
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_821(iVar1, iParam0))
		{
			func_820(iVar1);
		}
		else if (!func_821(iVar1, iLocal_56) || !bParam2)
		{
			func_819(iVar1);
		}
		iVar0++;
	}
	if (iParam0 == 5 || iParam0 == 6)
	{
		GRAPHICS::SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(1);
	}
	else
	{
		GRAPHICS::SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(0);
	}
	if (bParam1)
	{
		if (!func_818())
		{
			__LIB_17__::func_102();
			while (!func_818())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_818()//Position - 0x8F020
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_191[iVar0])
		{
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_819(int iParam0)//Position - 0x8F051
{
	if (iLocal_191[iParam0])
	{
		iLocal_191[iParam0] = 0;
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
}

void func_820(int iParam0)//Position - 0x8F076
{
	iLocal_191[iParam0] = 1;
	STREAMING::REQUEST_PTFX_ASSET();
}

int func_821(int iParam0, int iParam1)//Position - 0x8F08A
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_822(int iParam0, bool bParam1, bool bParam2)//Position - 0x8F0AD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_826(iVar1, iParam0))
		{
			func_825(iVar1);
		}
		else if (!func_826(iVar1, iLocal_56) || !bParam2)
		{
			func_824(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_823())
		{
			__LIB_17__::func_102();
			while (!func_823())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_823()//Position - 0x8F11B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_190[iVar0])
		{
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(func_297(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_824(int iParam0)//Position - 0x8F152
{
	int iVar0;
	if (iLocal_190[iParam0])
	{
		iLocal_190[iParam0] = 0;
		iVar0 = func_297(iParam0);
		if (WEAPON::HAS_WEAPON_ASSET_LOADED(iVar0))
		{
			WEAPON::REMOVE_WEAPON_ASSET(iVar0);
		}
	}
}

void func_825(int iParam0)//Position - 0x8F183
{
	int iVar0;
	iLocal_190[iParam0] = 1;
	iVar0 = func_297(iParam0);
	WEAPON::REQUEST_WEAPON_ASSET(iVar0, 31, 0);
}

int func_826(int iParam0, int iParam1)//Position - 0x8F1A4
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == 3 || iParam1 == 4)
			{
				return 1;
			}
			break;
		case 4:
		case 5:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 2:
			if ((iParam1 == 3 || iParam1 == 4) || iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_827(int iParam0, bool bParam1, bool bParam2)//Position - 0x8F22C
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = iVar0;
		if (func_830(iVar1, iParam0))
		{
			func_829(iVar1);
		}
		else if (!func_830(iVar1, iLocal_56) || !bParam2)
		{
			func_423(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_828())
		{
			__LIB_17__::func_102();
			while (!func_828())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_828()//Position - 0x8F29A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_189[iVar0])
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_136(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_829(int iParam0)//Position - 0x8F2D1
{
	char* sVar0;
	iLocal_189[iParam0] = 1;
	sVar0 = func_136(iParam0);
	STREAMING::REQUEST_ANIM_DICT(sVar0);
}

int func_830(int iParam0, int iParam1)//Position - 0x8F2EF
{
	switch (iParam0)
	{
		case 0:
			if ((iParam1 == 5 || iParam1 == 6) || iParam1 == 4)
			{
				return 1;
			}
			break;
		case 1:
		case 2:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 3:
			if (iParam1 == 7)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_831(int iParam0, bool bParam1, bool bParam2)//Position - 0x8F366
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_835(iVar0 + 1, iParam0))
		{
			func_834(iVar0 + 1);
		}
		else if (!func_835(iVar0 + 1, iLocal_56) || !bParam2)
		{
			func_833(iVar0 + 1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_832())
		{
			__LIB_17__::func_102();
			while (!func_832())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_832()//Position - 0x8F3D8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_188[iVar0])
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar0 + 1, func_27()))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_833(int iParam0)//Position - 0x8F411
{
	if (iLocal_188[(iParam0 - 1)])
	{
		iLocal_188[(iParam0 - 1)] = 0;
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, func_27()))
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, func_27());
		}
	}
}

void func_834(int iParam0)//Position - 0x8F446
{
	iLocal_188[(iParam0 - 1)] = 1;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, func_27());
}

int func_835(int iParam0, int iParam1)//Position - 0x8F462
{
	switch (iParam0)
	{
		case 1:
			if (((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 4)
			{
				return 1;
			}
			break;
		case 5:
			if (iParam1 == 5 || iParam1 == 4)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam1 >= 7)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_836(int iParam0, bool bParam1, bool bParam2)//Position - 0x8F4D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (func_839(iVar0, iParam0))
		{
			func_838(iVar0);
		}
		else if (!func_839(iVar0, iLocal_56) || !bParam2)
		{
			func_179(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_837())
		{
			__LIB_17__::func_102();
			while (!func_837())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_837()//Position - 0x8F540
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (iLocal_187[iVar0] == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(func_117(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_838(int iParam0)//Position - 0x8F579
{
	int iVar0;
	iVar0 = func_117(iParam0);
	STREAMING::REQUEST_MODEL(iVar0);
	iLocal_187[iParam0] = 1;
}

int func_839(int iParam0, int iParam1)//Position - 0x8F597
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 2:
			if (iParam1 <= 1)
			{
				return 1;
			}
			break;
		case 3:
		case 4:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		case 8:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		case 9:
			if (iParam1 >= 1 && iParam1 <= 4)
			{
				return 1;
			}
			break;
		case 10:
		case 18:
			if (iParam1 >= 1)
			{
				return 1;
			}
			break;
		case 6:
			if (iParam1 >= 1 && iParam1 <= 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 == 5 || iParam1 == 4)
			{
				return 1;
			}
			break;
		case 5:
		case 11:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 12:
			if (iParam1 >= 4)
			{
				return 1;
			}
			break;
		case 13:
		case 14:
			if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 7)
			{
				return 1;
			}
			break;
		case 15:
			if (((iParam1 == 6 || iParam1 == 1) || iParam1 == 2) || iParam1 == 3)
			{
				return 1;
			}
			break;
		case 19:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		case 20:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 21:
			if (iParam1 == 1)
			{
				if (__LIB_0__::func_323())
				{
					if (__LIB_13__::func_821())
					{
						if (__LIB_14__::func_660(__LIB_13__::func_791(), 0f, 0f, 0f, 1))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_842()//Position - 0x8F802
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
	}
}

void func_843(bool bParam0)//Position - 0x8F82B
{
	PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 8, 3, 0);
	if (bParam0)
	{
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_844()//Position - 0x8F859
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (iLocal_56 == 6)
	{
		iVar0 = iLocal_166[2];
	}
	else
	{
		iVar0 = iLocal_166[1];
	}
	iVar1 = 0;
	while (iVar1 < Local_68.f_0)
	{
		if (iVar1 < 2)
		{
			iVar2 = 1;
		}
		else
		{
			iVar2 = 0;
		}
		switch (Local_68[iVar1 /*14*/])
		{
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[iVar2 /*6*/], false))
				{
					fVar3 = 3f;
					if ((iVar1 % 2) != 0)
					{
						fVar3 = (fVar3 * -1f);
					}
					Local_68[iVar1 /*14*/].f_3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_67[iVar2 /*6*/], fVar3, 8f, 0f) };
					Local_68[iVar1 /*14*/].f_6 = { ENTITY::GET_ENTITY_ROTATION(Local_67[iVar2 /*6*/], 2) };
					Local_68[iVar1 /*14*/].f_9 = { __LIB_0__::func_79(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_67[iVar2 /*6*/], fVar3, 200f, 0f) - Local_68[iVar1 /*14*/].f_3) };
					Local_68[iVar1 /*14*/].f_1 = OBJECT::CREATE_OBJECT(WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_SPACE_ROCKET")), Local_68[iVar1 /*14*/].f_3, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(Local_68[iVar1 /*14*/].f_1, Local_68[iVar1 /*14*/].f_6, 2, true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_68[iVar1 /*14*/].f_1, false);
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_68[iVar1 /*14*/].f_12, "SPL_RPG_DIST_FLIGHT_MASTER", Local_68[iVar1 /*14*/].f_1, 0, false, 0);
					if (__LIB_31__::func_989(Local_67[iVar2 /*6*/], iVar0, 60f))
					{
						Local_68[iVar1 /*14*/].f_13 = 8f;
					}
					else
					{
						Local_68[iVar1 /*14*/].f_13 = 0f;
					}
					Local_68[iVar1 /*14*/].f_2 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_ex1_heatseeker", ENTITY::GET_ENTITY_COORDS(Local_68[iVar1 /*14*/].f_1, true), ENTITY::GET_ENTITY_ROTATION(Local_68[iVar1 /*14*/].f_1, 2), 1f, false, false, false, false);
					Local_68[iVar1 /*14*/] = 2;
				}
				break;
			case 2:
				Local_68[iVar1 /*14*/].f_13 = (Local_68[iVar1 /*14*/].f_13 + (1f * SYSTEM::TIMESTEP()));
				if (Local_68[iVar1 /*14*/].f_13 >= 8f)
				{
					Local_68[iVar1 /*14*/].f_13 = 8f;
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (iLocal_56 == 6)
					{
						switch (iVar1)
						{
							case 0:
								Var5 = { -4f, -30f, 0f };
								break;
							case 1:
								Var5 = { 0.0122964f, -48.1696f, 6.5634f };
								break;
							case 2:
								Var5 = { 5f, -4f, -0.5f };
								break;
							case 3:
								Var5 = { 27.4893f, -12.1439f, -1.92886f };
								break;
						}
					}
					else
					{
						Var5 = { 0f, 0f, 0f };
					}
					Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Var5) };
					Var6 = { 0f, 0f, 0f };
					Var6 = { __LIB_0__::func_79(Var4 - Local_68[iVar1 /*14*/].f_3) };
					Local_68[iVar1 /*14*/].f_9 = (Local_68[iVar1 /*14*/].f_9 + (((Var6.f_0 - Local_68[iVar1 /*14*/].f_9) * Local_68[iVar1 /*14*/].f_13) * MISC::GET_FRAME_TIME()));
					Local_68[iVar1 /*14*/].f_9.f_1 = (Local_68[iVar1 /*14*/].f_9.f_1 + (((Var6.f_1 - Local_68[iVar1 /*14*/].f_9.f_1) * Local_68[iVar1 /*14*/].f_13) * MISC::GET_FRAME_TIME()));
					Local_68[iVar1 /*14*/].f_9.f_2 = (Local_68[iVar1 /*14*/].f_9.f_2 + (((Var6.f_2 - Local_68[iVar1 /*14*/].f_9.f_2) * Local_68[iVar1 /*14*/].f_13) * MISC::GET_FRAME_TIME()));
					Local_68[iVar1 /*14*/].f_6 = MISC::ATAN2(Local_68[iVar1 /*14*/].f_9.f_2, SYSTEM::VMAG(Local_68[iVar1 /*14*/].f_9, Local_68[iVar1 /*14*/].f_9.f_1, 0f));
					Local_68[iVar1 /*14*/].f_6.f_2 = __LIB_17__::func_83((MISC::ATAN2(Local_68[iVar1 /*14*/].f_9.f_1, Local_68[iVar1 /*14*/].f_9) - 90f));
					Local_68[iVar1 /*14*/].f_3 = { Local_68[iVar1 /*14*/].f_3 + Local_68[iVar1 /*14*/].f_9 * FtoV(MISC::GET_FRAME_TIME()) * Vector(100f, 100f, 100f) };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_68[iVar1 /*14*/].f_1, Local_68[iVar1 /*14*/].f_3, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_68[iVar1 /*14*/].f_1, Local_68[iVar1 /*14*/].f_6, 2, true);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_OFFSETS(Local_68[iVar1 /*14*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_68[iVar1 /*14*/].f_1, 0f, -0.2f, 0f), ENTITY::GET_ENTITY_ROTATION(Local_68[iVar1 /*14*/].f_1, 2));
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_68[iVar1 /*14*/].f_3, Var4, true) <= 2f)
					{
						func_845(iVar1);
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1000, 200);
						__LIB_38__::func_638();
					}
				}
				break;
		}
		iVar1++;
	}
}

void func_845(int iParam0)//Position - 0x8FC84
{
	FIRE::ADD_EXPLOSION(Local_68[iParam0 /*14*/].f_3, 4, 1f, true, false, 1f, false);
	AUDIO::PLAY_SOUND_FROM_COORD(-1, "Jet_Explosions", Local_68[iParam0 /*14*/].f_3, "exile_1", false, 0, false);
	GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_68[iParam0 /*14*/].f_2, false);
	OBJECT::DELETE_OBJECT(&(Local_68[iParam0 /*14*/].f_1));
	iLocal_476 = MISC::GET_GAME_TIMER() + 2000;
	Local_68[iParam0 /*14*/] = 3;
	if (!AUDIO::HAS_SOUND_FINISHED(Local_68[iParam0 /*14*/].f_12))
	{
		AUDIO::STOP_SOUND(Local_68[iParam0 /*14*/].f_12);
	}
	if (!bLocal_391)
	{
		bLocal_391 = __LIB_17__::func_99("EXL1_MISSLE_HITS");
	}
}

void func_847()//Position - 0x8FD5C
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	float fVar16;
	float fVar17;
	float fVar18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	struct<3> Var22;
	float fVar23;
	float fVar24;
	char* sVar25;
	struct<3> Var26;
	float fVar27;
	int iVar28;
	struct<2> Var29;
	struct<3> Var30;
	int iVar31;
	int iVar32;
	bool bVar33;
	struct<3> Var34;
	if (iLocal_56 == 6)
	{
		iVar1 = iLocal_166[2];
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_115(19), ENTITY::GET_ENTITY_COORDS(iVar1, true), false);
		}
	}
	else
	{
		iVar1 = iLocal_166[1];
	}
	if (iLocal_75 == 0)
	{
		bVar3 = false;
		if (iLocal_56 == 6)
		{
			if (fVar0 < 7700f)
			{
				bVar3 = true;
			}
		}
		else if (iLocal_320)
		{
			func_838(5);
			func_838(11);
			if (func_837())
			{
				if (iLocal_491 < 0)
				{
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_115(20), false);
					iLocal_491 = SYSTEM::FLOOR((fVar4 * 2f));
					if (iLocal_491 >= 10000)
					{
						iLocal_491 = 10000;
					}
					iLocal_491 = (iLocal_491 + MISC::GET_GAME_TIMER());
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_491)
				{
					bVar3 = true;
				}
			}
		}
		if (bVar3)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				fVar8 = 0f;
				switch (iVar2)
				{
					case 0:
						Var5 = { 20f, 1000f, 45f };
						break;
					case 1:
						Var5 = { -20f, 1000f, 45f };
						break;
				}
				Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_169, func_115(20)) };
				if (iLocal_56 == 6)
				{
					Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_169, Var5) };
					fVar7 = (ENTITY::GET_ENTITY_HEADING(iLocal_169) - 180f);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var10, func_115(20), false) < 2000f)
				{
					fVar7 = (ENTITY::GET_ENTITY_HEADING(iLocal_169) - 180f);
					if (Var11.f_1 < 0f)
					{
						Var5 = { Var5 * Vector(1f, -1f, -1f) };
						fVar7 = (fVar7 - 180f);
					}
					Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_169, Var5) };
				}
				else
				{
					Var12 = { Var10 - func_115(20) };
					fVar13 = MISC::GET_HEADING_FROM_VECTOR_2D(Var12.f_0, Var12.f_1);
					if (fVar13 > 360f)
					{
						fVar13 = (fVar13 - 360f);
					}
					else if (fVar13 < 0f)
					{
						fVar13 = (fVar13 + 360f);
					}
					Var6 = { func_115(20) + Var12 * Vector(0.4f, 0.4f, 0.4f) };
					Var14 = { 20f, 0f, 0f };
					if (iVar2 == 0)
					{
						Var14.f_0 = (Var14.f_0 * -1f);
					}
					Var6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Var6, fVar13, Var14) };
					Var6.f_2 = (Var10.f_2 + 50f);
					fVar7 = fVar13;
				}
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &fVar8, false, false);
				if (fVar8 < 0f)
				{
					fVar8 = 0f;
				}
				fVar9 = (fVar8 + 70f);
				if (Var6.f_2 < fVar9)
				{
					Var6.f_2 = fVar9;
				}
				Var15 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_169, Var6) };
				if (Var15.f_1 > 0f)
				{
					if (iVar2 == 0)
					{
						Local_67[iVar2 /*6*/].f_5 = 0;
					}
					else
					{
						Local_67[iVar2 /*6*/].f_5 = 1;
					}
				}
				else if (iVar2 == 0)
				{
					Local_67[iVar2 /*6*/].f_5 = 1;
				}
				else
				{
					Local_67[iVar2 /*6*/].f_5 = 0;
				}
				Local_67[iVar2 /*6*/] = VEHICLE::CREATE_VEHICLE(func_117(11), Var6, fVar7, true, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_67[iVar2 /*6*/], true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_67[iVar2 /*6*/], 100f);
				ENTITY::SET_ENTITY_LOD_DIST(Local_67[iVar2 /*6*/], 900);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_67[iVar2 /*6*/], false);
				VEHICLE::CONTROL_LANDING_GEAR(Local_67[iVar2 /*6*/], 3);
				VEHICLE::SET_VEHICLE_FORCE_AFTERBURNER(Local_67[iVar2 /*6*/], true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_67[iVar2 /*6*/], true);
				ENTITY::SET_ENTITY_PROOFS(Local_67[iVar2 /*6*/], true, true, true, true, true, false, false, false);
				VEHICLE::SET_VEHICLE_CAN_BREAK(Local_67[iVar2 /*6*/], false);
				VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_67[iVar2 /*6*/], false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_67[iVar2 /*6*/], 0);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_67[iVar2 /*6*/], "EXILE_1_FIGHTER_JETS", 0f);
				Local_67[iVar2 /*6*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_67[iVar2 /*6*/], 26, func_117(5), -1, true, true);
				PED::CLEAR_ALL_PED_PROPS(Local_67[iVar2 /*6*/].f_1);
				PED::SET_PED_PROP_INDEX(Local_67[iVar2 /*6*/].f_1, 0, 2, 0, false);
				PED::SET_PED_COMPONENT_VARIATION(Local_67[iVar2 /*6*/].f_1, 8, 0, 0, 0);
				if (iVar2 == 1)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_67[iVar2 /*6*/].f_1, 0, 1, 0, 0);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_67[iVar2 /*6*/].f_1, 0, 0, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_67[iVar2 /*6*/].f_1, true);
				iVar2++;
			}
			func_25(&iLocal_183);
			CAM::POINT_CAM_AT_ENTITY(iLocal_183, iVar1, 0f, 10f, 0f, true);
			Local_417 = { 0f, 0f, 6.5f };
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_183, Local_67[1 /*6*/], Local_417, false);
			CAM::SET_CAM_FOV(iLocal_183, 60f);
			__LIB_0__::func_222(&uLocal_517, 8, 0, "MILITARYJET", 0, 1);
			__LIB_0__::func_222(&uLocal_517, 5, 0, "MILITARYJET2", 0, 1);
			func_178(1);
		}
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[iVar2 /*6*/], false) && !PED::IS_PED_INJURED(Local_67[iVar2 /*6*/].f_1))
			{
				fVar16 = 0f;
				fVar17 = 0f;
				fVar18 = 0f;
				Var21 = { ENTITY::GET_ENTITY_COORDS(Local_67[iVar2 /*6*/], true) };
				Var22 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				switch (iLocal_75)
				{
					case 1:
						fVar17 = 140f;
						if (iLocal_56 == 6)
						{
							fVar23 = ((Var21.f_2 + 40f) - Var22.f_2);
							if (fVar23 > 0f)
							{
								fVar18 = (fVar23 * -15f);
								if (fVar18 < -140f)
								{
									fVar18 = -140f;
								}
							}
							if (Var21.f_2 < 100f)
							{
								fVar18 = 0f;
							}
						}
						if (MISC::GET_GAME_TIMER() >= Local_67[iVar2 /*6*/].f_2)
						{
							if (iLocal_56 == 6)
							{
								Var19 = { 15f, 30f, 0f };
							}
							else
							{
								Var19 = { 15f, 30f, 20f };
							}
							if (Local_67[iVar2 /*6*/].f_5)
							{
								Var19.f_0 = (Var19.f_0 * -1f);
							}
							Var20 = { func_851(Var19) };
							if (Var20.f_2 > 1260f)
							{
								Var20.f_2 = 1260f;
							}
							if (Var20.f_2 < 100f)
							{
								Var20.f_2 = 100f;
							}
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_67[iVar2 /*6*/].f_1, Local_67[iVar2 /*6*/], Var20, 10000f, 0, func_117(11), 262144, 50f, -1f);
							Local_67[iVar2 /*6*/].f_2 = MISC::GET_GAME_TIMER() + 1000;
						}
						fVar24 = __LIB_0__::func_76(iVar1, Local_67[iVar2 /*6*/], 0);
						if (iLocal_56 == 6)
						{
							if (fVar24 < 400f)
							{
								if (!iLocal_323)
								{
									if (bLocal_322)
									{
										AUDIO::PLAY_STREAM_FRONTEND();
										iLocal_323 = 1;
									}
								}
							}
							if (fVar24 < 320f)
							{
								func_178(2);
							}
							else if (!bLocal_276)
							{
								if (fVar24 < 380f)
								{
									if ((iLocal_437 % 2) == 0)
									{
										sVar25 = "EXL1_JETS";
									}
									else
									{
										sVar25 = "EXL1_SEEJET";
									}
									if (func_98(sVar25, 0, 0, 0, 0))
									{
										bLocal_268 = true;
										bLocal_269 = true;
										bLocal_276 = true;
										bLocal_270 = true;
									}
								}
								else if (!bLocal_406)
								{
									if (fVar24 < 650f)
									{
										bLocal_406 = func_173(10);
									}
								}
							}
						}
						else if (fVar24 < 800f)
						{
							func_178(5);
						}
						break;
					case 2:
						fVar17 = 140f;
						fVar16 = 25f;
						if (!bLocal_277)
						{
							bLocal_277 = func_98("EXL1_PLCALL1", 0, 0, 0, 0);
						}
						if (MISC::GET_GAME_TIMER() >= Local_67[iVar2 /*6*/].f_2)
						{
							Var19 = { 400f, 1000f, 0f };
							if (Local_67[iVar2 /*6*/].f_5)
							{
								Var19.f_0 = (Var19.f_0 * -1f);
							}
							Var26 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_169, Var19) };
							if (Var26.f_2 > 1260f)
							{
								Var26.f_2 = 1260f;
							}
							if (Var26.f_2 < 100f)
							{
								Var26.f_2 = 100f;
							}
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_67[iVar2 /*6*/].f_1, Local_67[iVar2 /*6*/], Var26, 40f, 0, func_117(11), 262144, 50f, -1f);
							ENTITY::SET_ENTITY_LOD_DIST(Local_67[iVar2 /*6*/], 2000);
							Local_67[iVar2 /*6*/].f_2 = MISC::GET_GAME_TIMER() + 1000;
						}
						if (__LIB_31__::func_989(Local_67[0 /*6*/], iVar1, 55f) || __LIB_31__::func_989(Local_67[1 /*6*/], iVar1, 55f))
						{
							func_178(3);
						}
						break;
					case 3:
						if (iLocal_470 < 5)
						{
							switch (iLocal_470)
							{
								case 0:
									fVar27 = 999999f;
									iVar28 = 21000;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										StringCopy(&Var29, "EXL1_PLCALL5", 16);
									}
									else
									{
										StringCopy(&Var29, "EXL1_PLCALL4", 16);
									}
									break;
								case 1:
									fVar27 = 999999f;
									iVar28 = 0;
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										StringCopy(&Var29, "EXL1_REASON1", 16);
									}
									else
									{
										StringCopy(&Var29, "EXL1_REASON2", 16);
									}
									break;
								case 2:
									fVar27 = 4400f;
									iVar28 = 44000;
									StringCopy(&Var29, "EXL1_PLCALL2", 16);
									break;
								case 3:
									fVar27 = 3300f;
									iVar28 = 64000;
									StringCopy(&Var29, "EXL1_PLCALL3", 16);
									break;
								case 4:
									fVar27 = 999999f;
									iVar28 = 0;
									StringCopy(&Var29, "EXL1_REASON3", 16);
									break;
							}
							if (fVar0 < fVar27 || MISC::GET_GAME_TIMER() >= (iLocal_471 + iVar28))
							{
								if (func_98(&Var29, 0, 0, 0, 0))
								{
									iLocal_470++;
								}
							}
						}
						if (iVar2 == 1)
						{
							iLocal_333 = 0;
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[1 /*6*/], false))
							{
								Var30 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_166[2], ENTITY::GET_ENTITY_COORDS(Local_67[1 /*6*/], true)) };
								switch (iLocal_158)
								{
									case 0:
										if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_67[1 /*6*/], iLocal_166[2]))
										{
											fLocal_432 = 0f;
										}
										else if (ENTITY::IS_ENTITY_AT_COORD(Local_67[1 /*6*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], 0f, -95f, 12f), 90f, 90f, 60f, false, true, 0))
										{
											fLocal_432 = (fLocal_432 + (1f * SYSTEM::TIMESTEP()));
											if (fLocal_432 >= 3f)
											{
												Local_67[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
												fLocal_432 = 0f;
												iLocal_158 = 1;
											}
										}
										else
										{
											fLocal_432 = 0f;
										}
										break;
									case 1:
										fVar17 = 15f;
										if ((((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_67[1 /*6*/], iLocal_166[2]) || Var30.f_1 <= -80f) || Var30.f_2 >= 40f) || Var30.f_1 >= 50f) || Var30.f_2 <= -40f) || Var30.f_0 <= -75f) || Var30.f_0 >= 75f)
										{
											Local_67[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_432 = 0f;
											iLocal_158 = 0;
										}
										else if ((Var21.f_2 > Var22.f_2 && !iLocal_397) || (Var21.f_2 < Var22.f_2 && iLocal_397))
										{
											Local_67[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_432 = 0f;
										}
										else if (ENTITY::IS_ENTITY_AT_COORD(Local_67[1 /*6*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], -25f, 35f, 0f), 35f, 35f, 60f, false, true, 0) || MISC::GET_GAME_TIMER() >= Local_67[1 /*6*/].f_2 + 8000)
										{
											fLocal_432 = (fLocal_432 + (1f * SYSTEM::TIMESTEP()));
											if (fLocal_432 >= 3f)
											{
												Local_67[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
												fLocal_432 = 0f;
												iLocal_158 = 2;
											}
										}
										else
										{
											fLocal_432 = 0f;
										}
										break;
									case 2:
										fVar17 = 15f;
										if ((((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_67[1 /*6*/], iLocal_166[2]) || Var30.f_1 <= -60f) || Var30.f_2 >= 40f) || Var30.f_1 >= 50f) || Var30.f_2 <= -40f) || Var30.f_0 <= -75f) || Var30.f_0 >= 75f)
										{
											Local_67[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_432 = 0f;
											iLocal_158 = 0;
										}
										else if ((Var21.f_2 > (Var22.f_2 - 8f) && !iLocal_397) || (Var21.f_2 < (Var22.f_2 - 8f) && iLocal_397))
										{
											Local_67[1 /*6*/].f_2 = MISC::GET_GAME_TIMER();
											fLocal_432 = 0f;
										}
										else if (ENTITY::IS_ENTITY_AT_COORD(Local_67[1 /*6*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], -25f, 28f, 0f), 30f, 30f, 25f, false, true, 0))
										{
											fLocal_432 = (fLocal_432 + (1f * SYSTEM::TIMESTEP()));
											if (fLocal_432 >= 1.5f)
											{
												iLocal_333 = 1;
											}
										}
										else
										{
											fLocal_432 = 0f;
										}
										break;
									case 3:
										fLocal_432 = (fLocal_432 + (1f * SYSTEM::TIMESTEP()));
										if (fLocal_432 >= 3f)
										{
											Local_67[1 /*6*/].f_2 = 0;
											fLocal_432 = 0f;
											iLocal_158 = 4;
										}
										break;
									case 4:
										break;
									}
								}
						}
						if (MISC::GET_GAME_TIMER() >= Local_67[iVar2 /*6*/].f_2)
						{
							if ((iLocal_158 == 0 || iLocal_158 == 4) || iVar2 == 0)
							{
								Var19 = { 35f, -50f, -6f };
							}
							else if (iLocal_158 == 2)
							{
								if (Var21.f_2 >= (Var22.f_2 - 8f))
								{
									Var19 = { 25f, 50f, 7f };
									iLocal_397 = 1;
								}
								else
								{
									Var19 = { 25f, 50f, -5f };
									iLocal_397 = 0;
								}
							}
							else if (iLocal_158 == 1)
							{
								if (Var21.f_2 >= (Var22.f_2 - 8f))
								{
									Var19 = { 25f, 50f, 25f };
									iLocal_397 = 1;
								}
								else
								{
									Var19 = { 25f, 50f, -25f };
									iLocal_397 = 0;
								}
							}
							else if (iLocal_158 == 3)
							{
								Var19 = { 55f, 80f, 35f };
							}
							if (Local_67[iVar2 /*6*/].f_5)
							{
								Var19.f_0 = (Var19.f_0 * -1f);
							}
							Var20 = { func_851(Var19) };
							TASK::TASK_PLANE_CHASE(Local_67[iVar2 /*6*/].f_1, iVar1, Var19);
							Local_67[iVar2 /*6*/].f_2 = (MISC::GET_GAME_TIMER() + 1000000);
						}
						if (fVar0 < 2400f || MISC::GET_GAME_TIMER() >= (iLocal_471 + 85000))
						{
							if (fVar0 < 2400f)
							{
							}
							func_178(4);
							Local_67[1 /*6*/].f_2 += 1200;
						}
						break;
					case 4:
						if (!bLocal_284)
						{
							if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1176.0251f, 2000.5664f, 19.16425f, 3427.5676f, 6152.3945f, -0.12149f, false, false, 0))
							{
								bLocal_284 = func_98("EXL1_WFREE", 0, 0, 0, 0);
							}
							else
							{
								bLocal_284 = func_98("EXL1_PLCALL6", 0, 0, 0, 0);
								bLocal_286 = true;
							}
						}
						else if (!bLocal_286)
						{
							if (!bLocal_285)
							{
								bLocal_285 = func_98("EXL1_WFREE2", 0, 0, 0, 0);
							}
						}
						if (MISC::GET_GAME_TIMER() >= Local_67[iVar2 /*6*/].f_2)
						{
							Var19 = { 37f, -60f, 5f };
							if (Local_67[iVar2 /*6*/].f_5)
							{
								Var19.f_0 = (Var19.f_0 * -1f);
							}
							Var20 = { func_851(Var19) };
							TASK::TASK_PLANE_CHASE(Local_67[iVar2 /*6*/].f_1, iVar1, Var19);
						}
						if (MISC::GET_GAME_TIMER() >= Local_67[iVar2 /*6*/].f_2 + 5500)
						{
							func_178(5);
						}
						break;
					case 5:
						iVar32 = 0;
						bVar33 = false;
						iVar31 = 0;
						while (iVar31 < 4)
						{
							if (Local_68[iVar31 /*14*/] == 0)
							{
								bVar33 = true;
								switch (iVar31)
								{
									case 0:
										iVar32 = 2500;
										break;
									case 1:
										iVar32 = 3000;
										break;
									case 2:
										iVar32 = 2800;
										break;
									case 3:
										iVar32 = 3600;
										break;
								}
								if (MISC::GET_GAME_TIMER() >= (Local_67[iVar2 /*6*/].f_2 + iVar32))
								{
									Local_68[iVar31 /*14*/] = 1;
								}
							}
							iVar31++;
						}
						if (!bVar33)
						{
							if (iLocal_56 != 6)
							{
								func_178(7);
							}
							else
							{
								func_178(6);
							}
						}
						break;
					case 6:
						if (MISC::GET_GAME_TIMER() >= Local_67[iVar2 /*6*/].f_2)
						{
							if (Var21.f_2 >= (Var22.f_2 - 6f))
							{
								Var19 = { 80f, 200f, 40f };
							}
							else
							{
								Var19 = { 80f, 200f, -20f };
							}
							if (Local_67[iVar2 /*6*/].f_5)
							{
								Var19.f_0 = (Var19.f_0 * -1f);
							}
							Var20 = { func_851(Var19) };
							TASK::TASK_PLANE_CHASE(Local_67[iVar2 /*6*/].f_1, iVar1, Var19);
							Local_67[iVar2 /*6*/].f_2 = (MISC::GET_GAME_TIMER() + 100000);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_471 + 4000)
						{
							func_178(7);
						}
						break;
					case 7:
						if (iLocal_56 == 6)
						{
							if (MISC::GET_GAME_TIMER() >= Local_67[iVar2 /*6*/].f_2)
							{
								Var19 = { 50f, 1000f, 5f };
								fVar17 = 40f;
								fVar18 = 80f;
								if (Local_67[iVar2 /*6*/].f_5)
								{
									Var19.f_0 = (Var19.f_0 * -1f);
								}
								Var34 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_169, Var19) };
								if (Var34.f_2 > 1260f)
								{
									Var34.f_2 = 1260f;
								}
								if (Var34.f_2 < 100f)
								{
									Var34.f_2 = 100f;
								}
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_67[iVar2 /*6*/].f_1, Local_67[iVar2 /*6*/], Var34, 1000f, 0, func_117(11), 262144, 50f, -1f);
								Local_67[iVar2 /*6*/].f_2 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
						break;
				}
				if (!bLocal_294)
				{
					if (!bLocal_287)
					{
						if (iLocal_75 >= 5)
						{
							bLocal_287 = func_98("EXL1_SHOOT", 0, 0, 0, 0);
						}
					}
					else if (!bLocal_288)
					{
						if (bLocal_289)
						{
							bLocal_288 = true;
						}
						else
						{
							bLocal_288 = func_98("EXL1_MISSILE", 0, 0, 0, 0);
						}
					}
				}
				if (iVar2 == 0)
				{
					if (fVar16 != 0f)
					{
						fVar16 = (fVar16 * -1f);
					}
				}
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_67[iVar2 /*6*/], 0, fVar16, 0f, 0f, 0f, 10f, 0f, 0, true, true, true, false, true);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_67[iVar2 /*6*/], 0, 0f, fVar17, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_67[iVar2 /*6*/], 0, 0f, 0f, fVar18, 0f, 0f, 0f, 0, false, true, true, false, true);
				if ((bLocal_276 || iLocal_320) || iLocal_75 >= 2)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_67[iVar2 /*6*/].f_4))
					{
						Local_67[iVar2 /*6*/].f_4 = func_848(Local_67[iVar2 /*6*/], 1);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_67[iVar2 /*6*/].f_4))
			{
				HUD::REMOVE_BLIP(&(Local_67[iVar2 /*6*/].f_4));
			}
			iVar2++;
		}
	}
}

int func_848(int iParam0, bool bParam1)//Position - 0x90EFA
{
	if (func_125())
	{
		return __LIB_0__::func_639(iParam0, bParam1, 0);
	}
	return 0;
}

Vector3 func_851(struct<3> Param0)//Position - 0x90FCD
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_169, Param0) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false);
	if (fVar1 < 0f)
	{
		fVar1 = 0f;
	}
	fVar2 = (Var0.f_2 - fVar1);
	if (fVar2 <= 40f)
	{
		Var0.f_2 = (fVar1 + 40f);
	}
	return Var0;
}

void func_852(char* sParam0)//Position - 0x9101F
{
	if (iLocal_441 < 0)
	{
		func_295(-1);
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_441)
	{
		if (func_98(sParam0, 0, 0, 0, 0))
		{
			func_295(-1);
		}
	}
}

void func_853()//Position - 0x9104F
{
	struct<3> Var0;
	struct<3> Var1;
	if (iLocal_75 >= 2 && MISC::GET_GAME_TIMER() >= iLocal_472 + 2500)
	{
		if (!iLocal_278)
		{
			func_96("PF_JETHLP", 0, 0);
			iLocal_278 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_67[1 /*6*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_67[1 /*6*/], true) - ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true) };
			Var0.f_0 = (Var1.f_0 / 4f);
			if (Var0.f_0 > 20f)
			{
				Var0.f_0 = 20f;
			}
			else if (Var0.f_0 < -20f)
			{
				Var0.f_0 = -20f;
			}
			Var0.f_1 = (Var1.f_1 / 4f);
			if (Var0.f_1 > 20f)
			{
				Var0.f_1 = 20f;
			}
			else if (Var0.f_1 < -20f)
			{
				Var0.f_1 = -20f;
			}
			Var0.f_2 = 6.5f;
			if (Local_417.f_0 < Var0.f_0)
			{
				Local_417.f_0 = (Local_417.f_0 + (3f * SYSTEM::TIMESTEP()));
				if (Local_417.f_0 > Var0.f_0)
				{
					Local_417.f_0 = Var0.f_0;
				}
			}
			else if (Local_417.f_0 > Var0.f_0)
			{
				Local_417.f_0 = (Local_417.f_0 - (3f * SYSTEM::TIMESTEP()));
				if (Local_417.f_0 < Var0.f_0)
				{
					Local_417.f_0 = Var0.f_0;
				}
			}
			if (Local_417.f_1 < Var0.f_1)
			{
				Local_417.f_1 = (Local_417.f_1 + (3f * SYSTEM::TIMESTEP()));
				if (Local_417.f_1 > Var0.f_1)
				{
					Local_417.f_1 = Var0.f_1;
				}
			}
			else if (Local_417.f_1 > Var0.f_1)
			{
				Local_417.f_1 = (Local_417.f_1 - (3f * SYSTEM::TIMESTEP()));
				if (Local_417.f_1 < Var0.f_1)
				{
					Local_417.f_1 = Var0.f_1;
				}
			}
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_183, Local_67[1 /*6*/], Local_417, false);
		}
		if (__LIB_13__::func_796(&Local_28, 1, 0, 0) && iLocal_74 < 1)
		{
			if (!iLocal_279)
			{
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				iLocal_278 = 1;
				if (MISC::GET_GAME_TIMER() >= iLocal_478)
				{
					if (__LIB_0__::func_1("PF_JETHLP"))
					{
						HUD::CLEAR_HELP(false);
						iLocal_478 = MISC::GET_GAME_TIMER() + 1000;
					}
				}
				__LIB_17__::func_60();
				func_173(11);
				iLocal_279 = 1;
			}
		}
		else if (iLocal_279)
		{
			__LIB_17__::func_59();
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::DISPLAY_HUD(true);
			HUD::DISPLAY_RADAR(true);
			func_175(11);
			iLocal_279 = 0;
		}
	}
}

void func_855(int iParam0, float fParam1)//Position - 0x91298
{
	struct<3> Var0;
	ENTITY::SET_ENTITY_COORDS(iLocal_169, ENTITY::GET_ENTITY_COORDS(iParam0, true), true, false, false, true);
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
	if (iLocal_75 > 0)
	{
		if (Var0.f_1 > 360f)
		{
			Var0.f_1 = (Var0.f_1 - 360f);
		}
		else if (Var0.f_1 < 0f)
		{
			Var0.f_1 = (Var0.f_1 + 360f);
		}
		if ((Var0.f_1 > 70f && Var0.f_1 < 290f) || iLocal_75 < 3)
		{
			Var0.f_1 = 0f;
		}
		if ((Var0.f_0 <= -10f && fParam1 < 80f) || fParam1 < 40f)
		{
			Var0.f_0 = 0f;
		}
		ENTITY::SET_ENTITY_ROTATION(iLocal_169, Var0, 2, true);
	}
	else
	{
		ENTITY::SET_ENTITY_ROTATION(iLocal_169, 0f, 0f, Var0.f_2, 2, true);
	}
}

void func_856()//Position - 0x9136D
{
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_503))
	{
		AUDIO::STOP_SOUND(iLocal_503);
	}
	iLocal_250 = 0;
}

void func_857()//Position - 0x9138B
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar5;
	struct<3> Var6;
	int iVar7;
	struct<3> Var8;
	CAM::DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE();
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_166[2], true);
	}
	if (PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	}
	if (!iLocal_196)
	{
		func_874(1, 0);
		func_145();
		if (!iLocal_261)
		{
			if (bLocal_200)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					func_852("EXL1_UPPLAN");
				}
				else
				{
					func_852("EXL1_TBANT");
				}
			}
		}
		if (!iLocal_258)
		{
			func_114(0, 1065353216);
			iLocal_258 = 1;
		}
		if (MISC::GET_GAME_TIMER() >= iLocal_455 + 100)
		{
			if (!iLocal_260)
			{
				iLocal_260 = 1;
			}
		}
		if (!iLocal_275)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_455 + 500)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iVar0 = 0;
				while (iVar0 < Local_69.f_0)
				{
					if (!PED::IS_PED_INJURED(Local_69[iVar0 /*17*/]))
					{
						PED::SET_PED_CAN_RAGDOLL(Local_69[iVar0 /*17*/], true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_69[iVar0 /*17*/], false);
					}
					iVar0++;
				}
				iLocal_275 = 1;
			}
		}
		iVar2 = 0;
		bVar3 = false;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar1, joaat("COMPONENT_AT_AR_FLSH")))
		{
			iVar2 = 1;
			if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar1, joaat("COMPONENT_AT_AR_FLSH")))
			{
				bVar3 = true;
			}
		}
		else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), iVar1, joaat("COMPONENT_AT_PI_FLSH")))
		{
			iVar2 = 1;
			if (WEAPON::IS_PED_WEAPON_COMPONENT_ACTIVE(PLAYER::PLAYER_PED_ID(), iVar1, joaat("COMPONENT_AT_PI_FLSH")))
			{
				bVar3 = true;
			}
		}
		if (!bLocal_259)
		{
			if (bVar3)
			{
				bLocal_259 = true;
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_455 + 800)
			{
				if (iVar2 && !bVar3)
				{
					bLocal_259 = func_96("PF_FLSHLP", 0, 0);
				}
			}
		}
		else if (bVar3)
		{
			if (__LIB_0__::func_1("PF_FLSHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_478 + 500)
				{
					HUD::CLEAR_HELP(false);
					iLocal_478 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (Local_410.f_2 <= -6f)
		{
			func_22();
			func_129(0, 0);
			func_3(5);
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true) };
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeCargoPlaneClimb"), Var4.f_0, Var4.f_1, SYSTEM::FLOOR(ENTITY::GET_ENTITY_HEADING(iLocal_166[2])), 0);
			HUD::SET_RADAR_ZOOM_PRECISE(1f);
		}
		if (MISC::GET_GAME_TIMER() >= iLocal_455 + 200)
		{
			func_141(5);
		}
		if (!bLocal_360)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
			{
				iLocal_498 = func_873();
				if (iLocal_498 >= 0)
				{
					__LIB_0__::func_222(&uLocal_517, 6, Local_69[iLocal_498 /*17*/], "MERRYPLANE1", 0, 1);
					bLocal_360 = true;
				}
			}
		}
		else if (!bLocal_362)
		{
			bLocal_362 = func_98("EXL1_MW1", 0, 0, 0, 0);
			iLocal_500 = MISC::GET_GAME_TIMER();
		}
		else if (!bLocal_363)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_500 + 12000)
			{
				bLocal_363 = func_98("EXL1_MW2", 0, 0, 0, 0);
			}
		}
		if (!bLocal_200)
		{
			if (bLocal_252)
			{
				bLocal_200 = func_139("PF_KILL", 1, 0);
			}
		}
		if (bLocal_200)
		{
			if (!iLocal_361)
			{
				if (Local_410.f_1 >= -4f)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
					{
						iLocal_499 = func_873();
						if (iLocal_499 >= 0)
						{
							__LIB_0__::func_222(&uLocal_517, 7, Local_69[iLocal_499 /*17*/], "MERRYPLANE2", 0, 1);
							iLocal_361 = 1;
						}
					}
				}
			}
			else if (!bLocal_364)
			{
				bLocal_364 = func_98("EXL1_MWCOM", 0, 0, 0, 0);
			}
		}
		if (!bLocal_252)
		{
			if (bLocal_360)
			{
				if (bLocal_362 || PED::IS_PED_INJURED(Local_69[iLocal_498 /*17*/]))
				{
					bLocal_252 = func_98("EXL1_MERCR", 0, 0, 0, 0);
				}
			}
		}
		if (!iLocal_249)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_455 + 3000)
			{
				iVar5 = 0;
				while (iVar5 < Local_69.f_0)
				{
					if (!PED::IS_PED_INJURED(Local_69[iVar5 /*17*/]))
					{
						PED::SET_PED_ACCURACY(Local_69[iVar5 /*17*/], 25);
					}
					iVar5++;
				}
				iLocal_249 = 1;
			}
		}
		if (!iLocal_261)
		{
			if (iLocal_467 == 8)
			{
				iLocal_261 = 1;
			}
		}
		else
		{
			func_864();
			if (iLocal_257)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), true) < 0.6f)
				{
					PED::SET_PED_CAN_TORSO_REACT_IK(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			if (Local_410.f_2 >= -0.6f)
			{
				if (!iLocal_256)
				{
					VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_166[2], true);
					iLocal_256 = 1;
				}
			}
			else if (iLocal_256)
			{
				VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_166[2], false);
				iLocal_256 = 0;
			}
			if (!bLocal_387)
			{
				bLocal_387 = __LIB_17__::func_99("EXL1_HEAD_TO_COCKPIT");
			}
			Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (!iLocal_262)
			{
				if (!iLocal_257)
				{
					if (bLocal_255)
					{
						if (!iLocal_346)
						{
							iVar5 = 0;
							while (iVar5 < Local_69.f_0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar5 /*17*/]))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_69[iVar5 /*17*/]))
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_69[iVar5 /*17*/]));
									}
									else
									{
										PED::DELETE_PED(&(Local_69[iVar5 /*17*/]));
									}
								}
								iVar5++;
							}
							iLocal_346 = 1;
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_468)
						{
							iVar5 = 0;
							while (iVar5 <= 0)
							{
								if (!PED::IS_PED_INJURED(iLocal_165[iVar5]))
								{
									PED::SET_PED_ACCURACY(iLocal_165[iVar5], 20);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_512);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_512);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3600, false);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_512);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_165[iVar5], iLocal_512);
									iLocal_489 = MISC::GET_GAME_TIMER();
									iLocal_257 = 1;
								}
								iVar5++;
							}
						}
					}
				}
				else
				{
					if (!iLocal_356)
					{
						if (!PED::IS_PED_INJURED(iLocal_165[0]))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_489 + 8000)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_512);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 2928.93f, 767.2f, 462.4f, PLAYER::PLAYER_PED_ID(), 1f, false, 0.5f, 4f, false, 64, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_512);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_165[iVar5], iLocal_512);
								iLocal_356 = 1;
							}
						}
					}
					if (!bLocal_254)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_489 + 1000)
						{
							bLocal_254 = func_98("EXL1_PILOTA", 0, 0, 0, 0);
						}
					}
					else if (!bLocal_265)
					{
						bLocal_265 = func_98("EXL1_PFIGHT", 0, 0, 0, 0);
					}
					if (!iLocal_253)
					{
						iVar5 = 0;
						while (iVar5 <= 0)
						{
							if (!PED::IS_PED_INJURED(iLocal_165[iVar5]))
							{
								iLocal_179[iVar5] = func_862(iLocal_165[iVar5], 1);
							}
							iVar5++;
						}
						iLocal_253 = 1;
					}
				}
				if (bLocal_255)
				{
					iVar7 = 0;
					iVar5 = 0;
					while (iVar5 <= 0)
					{
						if (PED::IS_PED_INJURED(iLocal_165[iVar5]))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_179[iVar5]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_165[iVar5]))
								{
									__LIB_0__::func_497(163, 1, 0);
								}
								HUD::REMOVE_BLIP(&(iLocal_179[iVar5]));
							}
							iVar7++;
						}
						else
						{
							Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_165[iVar5], true) };
							if (Var8.f_2 <= (Var6.f_2 - 10f))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_165[iVar5]));
							}
						}
						iVar5++;
					}
					if (iVar7 == 1)
					{
						iLocal_495 = MISC::GET_GAME_TIMER();
						iLocal_262 = 1;
					}
				}
			}
			else
			{
				if (!iLocal_344)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_495 + 10000)
					{
						func_861(0, 0, -10f);
						iLocal_344 = 1;
					}
				}
				if (!bLocal_388)
				{
					bLocal_388 = __LIB_17__::func_99("EXL1_COCKPIT_ENTERED");
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_178))
				{
					iLocal_178 = func_287(func_860(), 0);
					if (HUD::DOES_BLIP_EXIST(iLocal_178))
					{
						HUD::SET_BLIP_COLOUR(iLocal_178, 2);
						HUD::SET_BLIP_SCALE(iLocal_178, 0.7f);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_178, "PF_CONTROLS");
					}
				}
				if (!bLocal_264)
				{
					bLocal_264 = func_98("EXL1_PKILL", 0, 0, 0, 0);
				}
				else if (!bLocal_263)
				{
					bLocal_263 = func_139("PF_CONT", 1, 0);
				}
				if (MISC::GET_GAME_TIMER() >= iLocal_495 + 30000)
				{
					bLocal_359 = true;
				}
				if (!iLocal_358)
				{
					if (Local_410.f_1 >= 27.2f)
					{
						iLocal_358 = 1;
					}
				}
				else if (Local_410.f_1 <= 26.9f)
				{
					iLocal_358 = 0;
				}
				if (iLocal_358 || bLocal_359)
				{
					if (!bLocal_359)
					{
						if (!iLocal_395)
						{
							__LIB_0__::func_190("PF_CONHLP");
							iLocal_395 = 1;
						}
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/) || bLocal_359)
					{
						iLocal_196 = 1;
					}
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_478)
				{
					if (__LIB_0__::func_1("PF_CONHLP"))
					{
						HUD::CLEAR_HELP(false);
						iLocal_395 = 0;
						iLocal_478 = MISC::GET_GAME_TIMER() + 100;
					}
				}
			}
		}
	}
	else
	{
		func_858();
	}
}

void func_858()//Position - 0x91C0E
{
	int iVar0;
	struct<3> Var1;
	switch (iLocal_61)
	{
		case 0:
			func_29(1, 1, 1, 1);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			func_859();
			func_293(0);
			func_131(0, 0);
			func_129(0, 0);
			func_299(0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 0);
			iVar0 = 0;
			while (iVar0 < Local_69.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*17*/]))
				{
					PED::DELETE_PED(&(Local_69[iVar0 /*17*/]));
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_165)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_165[iVar0]))
				{
					PED::DELETE_PED(&(iLocal_165[iVar0]));
				}
				iVar0++;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2]);
			}
			func_175(7);
			func_173(8);
			iLocal_480 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_480, iLocal_166[2], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_166[2], "seat_dside_f"));
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_480, func_136(0), "Sit_Pilot_Seat", 1000f, -8f, 2, 0, 1000f, 2);
			PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_480, 0.04f);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			func_129(3, 1);
			func_114(4, 1065353216);
			Var1 = { func_115(7) };
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				func_116(0);
				ENTITY::SET_ENTITY_COORDS(iLocal_166[2], 1592.9f, -3738.5f, Var1.f_2, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_166[2], 121f);
			}
			func_185(8);
			iLocal_399 = 0;
			iLocal_439 = MISC::GET_GAME_TIMER();
			iLocal_61 = 1;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				ENTITY::SET_ENTITY_ROTATION(iLocal_166[2], 0f, 0f, 121f, 2, true);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[2], 40f);
			}
			__LIB_31__::func_992(0.9f, 29f, 2.1f, 0.75f, 29f, 2.1f, &Local_418, 3f);
			__LIB_31__::func_992(-3.2f, 27.6f, 2.45f, -3.2f, 27.9f, 1.82f, &Local_419, 3f);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_180, iLocal_166[2], Local_418, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_180, iLocal_166[2], Local_419, true);
			if (!iLocal_399)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_439 + 2700)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_399 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_439 + 3000)
			{
				iLocal_61 = 2;
			}
			break;
		case 2:
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			func_29(0, 1, 1, 1);
			func_187(6, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1);
			break;
	}
}

void func_859()//Position - 0x91EEA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_62.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_62[iVar0 /*3*/]))
		{
			if (iVar0 != 0)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_62[iVar0 /*3*/]));
			}
			else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_62[iVar0 /*3*/], false))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_62[iVar0 /*3*/]));
				Global_96879 = 1;
			}
		}
		iVar0++;
	}
}

Vector3 func_860()//Position - 0x91F43
{
	return func_133(0f, 29.32f, 2f);
}

void func_861(int iParam0, int iParam1, float fParam2)//Position - 0x91F56
{
	if (Local_70.f_5 != fParam2)
	{
		Local_70.f_3 = iParam0;
		Local_70.f_4 = iParam1;
		Local_70.f_5 = fParam2;
	}
}

int func_862(int iParam0, bool bParam1)//Position - 0x91F7E
{
	if (func_125())
	{
		return __LIB_0__::func_666(iParam0, bParam1, 145);
	}
	return 0;
}

void func_864()//Position - 0x91FE5
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	fVar4 = 0f;
	Var5 = { PED::GET_PED_EXTRACTED_DISPLACEMENT(PLAYER::PLAYER_PED_ID(), false) };
	__LIB_0__::func_603(&uVar0, &iVar1, &uVar2, &uVar3, 0);
	Var6 = { func_871() };
	Var7 = { func_870() };
	if (iLocal_156 == 0)
	{
		Var8 = { Var6 };
	}
	else
	{
		Var8 = { Var7 };
	}
	if (!bLocal_255)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_176))
		{
			HUD::SET_BLIP_COORDS(iLocal_176, Var8);
		}
		else
		{
			iLocal_176 = func_287(Var8, 0);
		}
	}
	switch (iLocal_156)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var6, 0.5f, 0.4f, 1.3f, false, true, 1) && func_869(PLAYER::PLAYER_PED_ID(), iLocal_166[2], 40f)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && ((TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())))
			{
				func_867(1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "get_on_bottom_front_stand_high", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_136(1), "get_on_bottom_front_stand_high");
			}
			if (fVar4 >= 0.98f)
			{
				func_867(6);
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "get_off_bottom_front_stand", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_136(1), "get_off_bottom_front_stand");
			}
			else
			{
				func_867(0);
			}
			if (fVar4 >= 0.98f)
			{
				func_867(0);
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_136(2), "get_off_top_back_stand_right_hand", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_136(2), "get_off_top_back_stand_right_hand");
			}
			else
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), false, false);
				func_867(0);
			}
			if (fVar4 >= 0.98f)
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), false, false);
				func_867(0);
			}
			break;
		case 6:
			if (iVar1 < -100)
			{
				if (Local_411.f_2 < -0.2f)
				{
					func_867(4);
				}
			}
			else if (iVar1 > 100)
			{
				if (Local_411.f_2 > -2f)
				{
					func_867(5);
				}
				else
				{
					func_867(2);
				}
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "climb_up", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_136(1), "climb_up");
			}
			if (Local_411.f_2 >= -0.2f)
			{
				func_867(3);
			}
			else if (iVar1 >= -100)
			{
				if (fVar4 >= 0.9f)
				{
					func_867(6);
				}
			}
			break;
		case 5:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "climb_down", 3))
			{
				fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), func_136(1), "climb_down");
			}
			if (fVar4 >= 0.9f)
			{
				if (iVar1 <= 100 || Local_411.f_2 <= -2f)
				{
					func_867(6);
				}
			}
			break;
	}
	if (iLocal_156 > 0)
	{
		PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
		CAM::SET_FOLLOW_PED_CAM_LADDER_ALIGN_THIS_UPDATE();
		CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_ON_EXILE1_LADDER_CAMERA", 1500);
	}
	if (iLocal_156 != 0 && iLocal_156 != 2)
	{
		__LIB_17__::func_664(&Local_411, -0.75f, 0.4f);
		if (Local_411.f_2 >= -1.27f)
		{
			__LIB_17__::func_664(&(Local_411.f_1), (22.64f + 0.07f), 0.4f);
		}
		else if (Local_411.f_2 >= -1.56f)
		{
			__LIB_17__::func_664(&(Local_411.f_1), (22.64f + 0.02f), 0.4f);
		}
		else
		{
			__LIB_17__::func_664(&(Local_411.f_1), 22.64f, 0.4f);
		}
		fVar9 = -5f;
		if (iLocal_156 == 6)
		{
			if (Local_411.f_2 < -2f)
			{
				fVar9 = -2.4987f;
			}
			else if (Local_411.f_2 < -1f)
			{
				fVar9 = -1.4952f;
			}
			else
			{
				fVar9 = -0.500924f;
			}
			fVar10 = 0.4f;
			fVar11 = 1f;
		}
		else if (iLocal_156 == 4 || iLocal_156 == 1)
		{
			if (fVar4 >= 0.8f)
			{
				if (Local_411.f_2 >= -0.500924f)
				{
					fVar9 = -0.500924f;
					fVar10 = 100f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 >= -0.700924f)
				{
					fVar9 = -0.500924f;
					fVar10 = 0.2f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 >= -1.4952f)
				{
					fVar9 = -1.4952f;
					fVar10 = 100f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 >= -1.6952f)
				{
					fVar9 = -1.4952f;
					fVar10 = 0.2f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 >= -2.4987f)
				{
					fVar9 = -2.4987f;
					fVar10 = 100f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 >= -2.6987f)
				{
					fVar9 = -2.4987f;
					fVar10 = 0.2f;
					fVar11 = 0.2f;
				}
			}
		}
		else if (iLocal_156 == 5)
		{
			if (fVar4 >= 0.8f)
			{
				if (Local_411.f_2 <= -0.300924f)
				{
					fVar9 = -0.500924f;
					fVar10 = 0.2f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 <= -0.500924f)
				{
					fVar9 = -0.500924f;
					fVar10 = 100f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 <= -1.0952f)
				{
					fVar9 = -1.4952f;
					fVar10 = 0.2f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 <= -1.4952f)
				{
					fVar9 = -1.4952f;
					fVar10 = 100f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 <= -2.0987f)
				{
					fVar9 = -2.4987f;
					fVar10 = 0.2f;
					fVar11 = 0.2f;
				}
				else if (Local_411.f_2 <= -2.4987f)
				{
					fVar9 = -2.4987f;
					fVar10 = 100f;
					fVar11 = 0.2f;
				}
			}
		}
		if (fVar9 > -5f)
		{
			fVar12 = (fVar9 - Local_411.f_2);
			if (fVar12 < 0f)
			{
				fVar12 = (fVar12 * -1f);
			}
			if (fVar12 < fVar11)
			{
				__LIB_17__::func_664(&(Local_411.f_2), fVar9, fVar10);
			}
		}
		__LIB_28__::func_225(&Local_412, 0f, 0f, 0f, 30f);
		Local_411.f_2 = (Local_411.f_2 + Var5.f_2);
		if (iLocal_156 != 1)
		{
			Local_411.f_0 = (Local_411.f_0 + Var5.f_0);
			Local_411.f_1 = (Local_411.f_1 + Var5.f_1);
		}
		if (iLocal_156 != 3)
		{
			if (Local_411.f_2 > -0.2f)
			{
				Local_411.f_2 = -0.2f;
			}
			if (Local_411.f_2 < -1.56f)
			{
				if (Local_411.f_1 > 22.64f)
				{
					Local_411.f_1 = 22.64f;
				}
			}
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_166[2], 0, Local_411, Local_412, false, false, false, true, 2, true, 0);
	}
}

void func_867(int iParam0)//Position - 0x9271E
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_513 != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_513, iLocal_156 == 3);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			break;
		case 6:
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "base_left_hand_up", 8f, -8f, -1, 131073, 0f, false, false, false);
			break;
		case 4:
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "climb_up", 8f, -8f, -1, 131073, 0f, false, false, false);
			break;
		case 5:
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "climb_down", 8f, -8f, -1, 131073, 0f, false, false, false);
			break;
		case 1:
			if (!iLocal_376)
			{
				__LIB_0__::func_221(&uLocal_517, 4);
				if (!PED::IS_PED_INJURED(iLocal_165[0]))
				{
					__LIB_0__::func_222(&uLocal_517, 4, iLocal_165[0], "MERCPLANE", 0, 1);
				}
				iLocal_376 = 1;
			}
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_513, true);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			Local_411 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_166[2], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
			Local_412 = { ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) - ENTITY::GET_ENTITY_ROTATION(iLocal_166[2], 2) };
			Local_412.f_0 = __LIB_17__::func_58(Local_412.f_0);
			Local_412.f_1 = __LIB_17__::func_58(Local_412.f_1);
			Local_412.f_2 = __LIB_17__::func_58(Local_412.f_2);
			func_868(&Local_412, 0f);
			func_868(&(Local_412.f_1), 0f);
			func_868(&(Local_412.f_2), 0f);
			__LIB_17__::func_450(0, 1, 1, 0);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "get_on_bottom_front_stand_high", 4f, -8f, -1, 131074, 0.2f, false, false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			break;
		case 2:
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), false, false);
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_136(1), "get_off_bottom_front_stand", 8f, -8f, -1, 131072, 0f, false, false, false);
			break;
		case 3:
			if (!bLocal_255)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_176))
				{
					HUD::REMOVE_BLIP(&iLocal_176);
					__LIB_17__::func_450(0, 1, 0, 0);
				}
				PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.3f);
				iLocal_468 = MISC::GET_GAME_TIMER() + 800;
				bLocal_255 = true;
			}
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_136(2), "get_off_top_back_stand_right_hand", 8f, -8f, -1, 131072, 0f, false, false, false);
			break;
	}
	iLocal_156 = iParam0;
}

void func_868(var uParam0, float fParam1)//Position - 0x92991
{
	float fVar0;
	fVar0 = (*uParam0 - fParam1);
	if (fVar0 < -90f)
	{
		*uParam0 = (*uParam0 + 360f);
	}
	else if (fVar0 > 90f)
	{
		*uParam0 = (*uParam0 - 360f);
	}
}

int func_869(int iParam0, int iParam1, float fParam2)//Position - 0x929D2
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = __LIB_17__::func_58(ENTITY::GET_ENTITY_HEADING(iParam0));
	fVar1 = __LIB_17__::func_58(ENTITY::GET_ENTITY_HEADING(iParam1));
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	if (fVar2 <= fParam2 || fVar2 >= (360f - fParam2))
	{
		return 1;
	}
	return 0;
}

Vector3 func_870()//Position - 0x92A24
{
	return func_133(-0.8f, 30f, 2f);
}

Vector3 func_871()//Position - 0x92A3B
{
	return func_133(-0.8f, 22.7f, -3f);
}

int func_873()//Position - 0x92B2B
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar1 = -1;
	fVar2 = 9999999f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((iVar0 != 1 && iVar0 != iLocal_498) && iVar0 != iLocal_499)
		{
			if (!PED::IS_PED_INJURED(Local_69[iVar0 /*17*/]))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_69[iVar0 /*17*/], true), false);
				if (fVar3 < fVar2)
				{
					fVar2 = fVar3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_874(bool bParam0, bool bParam1)//Position - 0x92BAA
{
	if (!bLocal_329)
	{
		bLocal_329 = AUDIO::LOAD_STREAM("Plane_Wind_Pt1", "EXILE_1");
	}
	else if (bParam0)
	{
		if (!iLocal_330)
		{
			if (bParam1)
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2930f, 849.7f, 454.5f);
			}
			else
			{
				AUDIO::PLAY_STREAM_FROM_POSITION(2929.93f, 815.88f, 449.35f);
			}
			iLocal_330 = 1;
		}
		else if (bParam1)
		{
			AUDIO::SET_VARIABLE_ON_STREAM("INOUT", 0f);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_STREAM("INOUT", ((fLocal_430 - 1f) * -1f));
		}
	}
}

void func_875()//Position - 0x92C2A
{
	struct<3> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	if (!iLocal_196)
	{
		func_874(0, 0);
		if (!bLocal_195)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_166[1], false))
			{
				if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_166[1]) <= 700f)
				{
					PED::SET_AI_WEAPON_DAMAGE_MODIFIER(0.01f);
					if (!iLocal_347)
					{
						if (iLocal_337)
						{
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_166[1], false, iLocal_516);
							iLocal_337 = 0;
						}
						else if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_166[1]) > 300f && ENTITY::GET_ENTITY_HEALTH(iLocal_166[1]) > 300)
						{
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_166[1], true, iLocal_516);
							iLocal_337 = 1;
						}
					}
				}
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_166[1], joaat("WEAPON_RPG"), 0))
				{
					VEHICLE::EXPLODE_VEHICLE(iLocal_166[1], true, false);
				}
				if (!iLocal_347)
				{
					if (fLocal_423 >= 274000f)
					{
						if (iLocal_55 == 0)
						{
							if (!iLocal_348)
							{
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_166[1], true, iLocal_516);
								if (!PED::IS_PED_INJURED(iLocal_165[1]))
								{
									PED::SET_PED_ACCURACY(iLocal_165[1], 100);
								}
								WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_166[1]);
								iLocal_348 = 1;
							}
							if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_166[1], func_297(2), 0))
							{
								if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_166[1]) > -400f)
								{
									ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_166[1], false, iLocal_516);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_166[1], -400f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[1], false, false, false);
									iLocal_496 = MISC::GET_GAME_TIMER();
									iLocal_347 = 1;
								}
							}
						}
					}
				}
				else if (!bLocal_349)
				{
					if (iLocal_55 == 0)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_496 + 9500)
						{
							bLocal_349 = func_96("PF_GLDHLP", 0, 0);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
			{
				if (fLocal_426 < 1f)
				{
					fLocal_426 = VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_166[2], 2);
					if (fLocal_426 < 0.92f)
					{
						if (iLocal_510 < 0 || MISC::GET_GAME_TIMER() < iLocal_510 + 2000)
						{
							VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_166[2], true);
						}
						else
						{
							VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_166[2], false);
						}
						VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_166[2], false);
					}
					else
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
						VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_166[2], false);
						VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_166[2], true);
						fLocal_426 = 1f;
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_USES_LARGE_REAR_RAMP(iLocal_166[2], false);
					VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_166[2], true);
				}
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_166[2], 2, 0, 1f);
				if (iLocal_510 < 0)
				{
					iLocal_510 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_166[2], ENTITY::GET_ENTITY_COORDS(iLocal_166[1], true)) };
			if (!bLocal_195)
			{
				if (!bLocal_375)
				{
					func_897("EXL_1_MCS_1_P3_B", ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), 400f, 500f);
				}
				else
				{
					func_897("EXL_1_MCS_1_P3_B", ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), 2000f, 4000f);
				}
			}
			else
			{
				func_897("EXL_1_MCS_1_P3_B", ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), 2000f, 4000f);
			}
			if (!bLocal_195)
			{
				if (!iLocal_371)
				{
					if (fLocal_431 >= 0.06f)
					{
						fLocal_431 = (fLocal_431 - (0.08f * SYSTEM::TIMESTEP()));
						if (fLocal_431 < 0.06f)
						{
							fLocal_431 = 0.06f;
						}
					}
					VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iLocal_166[1], fLocal_431);
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_166[1], iLocal_166[2], 250f, 250f, 250f, false, false, 0))
					{
						iLocal_371 = 1;
					}
				}
				else
				{
					VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iLocal_166[1], 0f);
				}
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(iLocal_165[1]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ramp_Guard_L", iLocal_165[1], 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_165[2]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Ramp_Guard_R", iLocal_165[2], 0);
					}
					iVar1 = func_117(7);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 2, 1, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 0, 0, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 3, 1, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 4, 0, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 8, 0, 2, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Front", 9, 0, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Hold_Guard_Front", 0, 0, 1, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 2, 0, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 0, 1, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 3, 0, 5, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 4, 0, 2, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 8, 0, 1, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Middle", 9, 0, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 2, 0, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 0, 0, 2, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 3, 0, 1, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 4, 0, 1, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 8, 1, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Hold_Guard_Rear", 9, 0, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Hold_Guard_Rear", 0, 1, 0, iVar1);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Hold_Guard_Rear", 1, 0, 0, iVar1);
				}
				if (!bLocal_385)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_454 + 10000)
					{
						bLocal_385 = AUDIO::PREPARE_MUSIC_EVENT("EXL1_LAND_IN_CARGO_PLANE");
					}
				}
				func_886();
				__LIB_14__::func_655(iLocal_176, iLocal_166[2], 3000f, 0.9f, 0);
				if (fLocal_422 >= 3100f)
				{
					if (!bLocal_375)
					{
						func_3(4);
					}
				}
				if (!iLocal_241)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_454 + 500)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_166[1]);
						}
						iLocal_241 = 1;
					}
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1]))
				{
					if (!bLocal_252)
					{
						if (func_98("EXL1_WARN4", 0, 0, 0, 0))
						{
							bLocal_252 = true;
							func_175(4);
							func_173(6);
						}
					}
					else if (!bLocal_332)
					{
						if (fLocal_423 >= 253000f)
						{
							bLocal_332 = func_98("EXL1_NEARLS", 0, 0, 0, 0);
						}
					}
					if (!bLocal_244)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_454 + 4000)
						{
							bLocal_244 = func_96("PF_CRSHLP", 0, 0);
						}
					}
				}
				if (!iLocal_326)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_480))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_480) >= 0.98f)
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						func_884();
						iLocal_326 = 1;
					}
				}
				else
				{
					bVar3 = ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], 0f, -133f, 0f), 90f, 90f, 60f, false, true, 0);
					if (bLocal_252)
					{
						if (bLocal_200)
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1]))
							{
								if (!bLocal_243)
								{
									bVar4 = false;
									if (!PED::IS_PED_INJURED(iLocal_165[1]))
									{
										if (PED::IS_PED_SHOOTING(iLocal_165[1]))
										{
											bVar4 = true;
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_165[2]))
									{
										if (PED::IS_PED_SHOOTING(iLocal_165[2]))
										{
											bVar4 = true;
										}
									}
									if (bVar4)
									{
										if (iLocal_492 < 0)
										{
											iLocal_492 = MISC::GET_GAME_TIMER();
										}
										else if (MISC::GET_GAME_TIMER() >= iLocal_492 + 800)
										{
											bLocal_243 = func_98("EXL1_SHOOTD", 0, 0, 0, 0);
										}
									}
								}
								else if (!bLocal_242)
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_166[2], 1) < 80f && __LIB_31__::func_989(iLocal_166[1], iLocal_166[2], 30f))
									{
										bLocal_242 = func_98("EXL1_RAM", 0, 0, 0, 0);
									}
								}
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_165[1]))
					{
						if (iLocal_245)
						{
							if (!bVar3)
							{
								TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_165[1], iLocal_166[1], -1, false);
								iLocal_245 = 0;
							}
						}
						else if (bVar3)
						{
							PED::SET_PED_SHOOT_RATE(iLocal_165[1], 100);
							TASK::TASK_SHOOT_AT_ENTITY(iLocal_165[1], iLocal_166[1], 99999999, joaat("FIRING_PATTERN_FULL_AUTO"));
							iLocal_245 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_165[2]))
					{
						if (iLocal_443 < 3)
						{
							if ((bVar3 && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_166[1], iLocal_165[2], 30f, 30f, 30f, false, false, 0)) && MISC::GET_GAME_TIMER() >= iLocal_494 + 5000)
							{
								Var6 = { Var0 - Local_416 };
								if (Var6.f_0 >= 0f)
								{
									Var5.f_0 = 38f;
								}
								else
								{
									Var5.f_0 = -38f;
								}
								if (Var6.f_2 >= 0f)
								{
									Var5.f_2 = -30f;
								}
								else
								{
									Var5.f_2 = 30f;
								}
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_512);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_512);
								TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_166[1], true) + Var5, 2000, joaat("FIRING_PATTERN_FULL_AUTO"));
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_166[1], -1, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_512);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_165[2], iLocal_512);
								iLocal_494 = MISC::GET_GAME_TIMER();
								iLocal_443++;
							}
						}
					}
				}
			}
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], 0f, -47f, -3f), 12f, 12f, 12f, false, true, 0) || bLocal_195) || bLocal_375)
			{
				if (!bLocal_195)
				{
					bLocal_246 = true;
				}
				Var7 = { ENTITY::GET_ENTITY_ROTATION(iLocal_166[1], 2) };
				if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_166[2], 0f, -42f, -3f), 5f, 5f, 5f, false, true, 0) || bLocal_195) || bLocal_375)
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1]) || bLocal_195) || bLocal_375)
					{
						if (((__LIB_31__::func_989(iLocal_166[1], iLocal_166[2], 30f) && (Var7.f_1 <= 70f && Var7.f_1 >= -70f)) || bLocal_195) || bLocal_375)
						{
							if (func_125())
							{
								if (__LIB_0__::func_90())
								{
									iLocal_196 = 1;
								}
								else
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_166[1], true, true, true, true, true, false, false, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_166[1], true);
									VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_166[1], false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_166[1], false);
									bLocal_375 = true;
								}
							}
						}
					}
				}
			}
			else if (!bLocal_195)
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1]))
				{
					if (!bLocal_247)
					{
						if (bLocal_246)
						{
							bLocal_247 = func_98("EXL1_AGAIN", 0, 0, 0, 0);
						}
					}
					if (!bLocal_248)
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_166[1], iLocal_166[2]))
						{
							bLocal_248 = func_98("EXL1_CRASH", 0, 0, 0, 0);
						}
					}
				}
			}
			Local_416 = { Var0 };
		}
		if (!iLocal_196)
		{
			if (bLocal_375)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_166[1], true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (iLocal_507 < 0)
					{
						iLocal_507 = MISC::GET_GAME_TIMER();
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_507 + 30000)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("EXL1_MISSION_FAILED");
						func_881();
						func_187(5, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0);
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
			}
		}
	}
	else
	{
		func_876();
	}
}

void func_876()//Position - 0x93709
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	func_158();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_166[2], true);
	}
	switch (iLocal_61)
	{
		case 0:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_168, "EXL_Plane", 2, func_117(10), 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_165[1]))
			{
				ENTITY::DETACH_ENTITY(iLocal_165[1], true, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_165[1], "Ramp_Guard_L", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_165[2]))
			{
				ENTITY::DETACH_ENTITY(iLocal_165[2], true, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_165[2], "Ramp_Guard_R", 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_166[1], false))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_166[1], true, true, true, true, true, false, false, false);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_166[1], true);
			}
			RECORDING::REPLAY_START_EVENT(4);
			iVar0 = 0;
			if (PLAYER::GET_IS_USING_FPS_THIRD_PERSON_COVER() && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
			{
				iVar0 = 2048;
			}
			CUTSCENE::START_CUTSCENE(iVar0);
			CUTSCENE::SET_CUTSCENE_ORIGIN(2929f, 844f, 467f, 180f, -1);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_439 = MISC::GET_GAME_TIMER();
			iLocal_61 = 1;
			break;
		case 1:
			func_874(1, 1);
			if (!iLocal_198)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_880();
					__LIB_0__::func_345(&Local_28, 0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
					{
						VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_166[2], true);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), 1000f, true, false, false, false);
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_166[2], 0f);
						func_175(6);
						func_175(4);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_166[2], false, false);
					}
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_67[iVar1 /*6*/].f_1))
						{
							PED::DELETE_PED(&(Local_67[iVar1 /*6*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_67[iVar1 /*6*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_67[iVar1 /*6*/]));
						}
						iVar1++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[1]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_166[1]));
					}
					if (bLocal_195)
					{
						SYSTEM::WAIT(0);
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_195 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_198 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_165[1]))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_165[1], true, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_165[2]))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_165[2], true, false);
			}
			if (!iLocal_335)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 1500 && CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					GRAPHICS::SET_TIMECYCLE_MODIFIER("exile1_plane");
					GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);
					func_879();
					iLocal_335 = 1;
				}
			}
			if (!bLocal_386)
			{
				bLocal_386 = __LIB_17__::func_99("EXL1_LAND_IN_CARGO_PLANE");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_168))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("EXL_Plane", 0)))
				{
					iLocal_168 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("EXL_Plane", 0));
					VEHICLE::DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(iLocal_168, 255, 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_168, true, true, true, true, true, false, false, false);
					VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_168, false);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_168, false);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_168, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_168, false);
					VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iLocal_168, false);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_168, 3000);
					VEHICLE::SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(iLocal_168, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_168, true, true, false);
					func_290(1);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_168, true);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_168, 2, 0, 1f);
					iVar2 = 2;
					while (iVar2 <= 8)
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_168, iVar2, false);
						iVar2++;
					}
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_168, 7, true);
					VEHICLE::CONTROL_LANDING_GEAR(iLocal_168, 3);
					func_310(1, 1);
					func_313(1, 1);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_168);
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 2287)
			{
				if (!bLocal_368)
				{
					func_878();
				}
				else if (!bLocal_369)
				{
					func_307(0, 1, 1, 1, 0);
					bLocal_369 = true;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ramp_Guard_L", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ramp_Guard_R", 0))
			{
				iVar3 = 1;
				while (iVar3 <= 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_165[iVar3]))
					{
						PED::DELETE_PED(&(iLocal_165[iVar3]));
					}
					iVar3++;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("EXL_Plane", 0))
			{
				iVar4 = 0;
				while (iVar4 < Local_63.f_0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_63[iVar4 /*3*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_63[iVar4 /*3*/]));
						Local_63[iVar4 /*3*/].f_1 = 0;
					}
					iVar4++;
				}
				iVar4 = 0;
				while (iVar4 < Local_65.f_0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar4 /*3*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_65[iVar4 /*3*/]));
						Local_65[iVar4 /*3*/].f_1 = 0;
					}
					iVar4++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_172))
				{
					OBJECT::DELETE_OBJECT(&iLocal_172);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_168))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_168);
				}
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				bLocal_197 = true;
			}
			if (!bLocal_197)
			{
				if (!bLocal_366)
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
					{
						func_877();
						func_299(1);
						PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), true);
						PED::FORCE_INSTANT_LEG_IK_SETUP(PLAYER::PLAYER_PED_ID());
						bLocal_366 = true;
					}
				}
				else
				{
					func_116(1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!bLocal_368)
				{
					func_878();
					SYSTEM::WAIT(500);
				}
				if (!bLocal_369)
				{
					func_307(0, 1, 1, 1, 0);
					SYSTEM::WAIT(500);
				}
				if (bLocal_197)
				{
					if (!bLocal_366)
					{
						SYSTEM::WAIT(0);
						func_877();
						func_116(0);
						func_116(1);
						func_299(1);
						PED::FORCE_INSTANT_LEG_IK_SETUP(PLAYER::PLAYER_PED_ID());
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[1]))
				{
					VEHICLE::DELETE_VEHICLE(&(iLocal_166[1]));
				}
				RECORDING::REPLAY_STOP_EVENT();
				__LIB_0__::func_221(&uLocal_517, 6);
				func_29(0, 1, 1, 0);
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				RECORDING::REPLAY_STOP_EVENT();
				func_187(5, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1);
			}
			break;
		case 2:
			break;
	}
}

void func_877()//Position - 0x93C9A
{
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_133(func_115(9)), true, true, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), (ENTITY::GET_ENTITY_HEADING(iLocal_166[2]) - 90f));
	func_298(1);
	func_294();
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4 || PLAYER::GET_IS_USING_FPS_THIRD_PERSON_COVER())
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(90f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	else
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(30f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(8.4f, 1f);
	}
}

void func_878()//Position - 0x93D19
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_166[2], 2, true);
	}
	func_301(5);
	func_548();
	func_131(0, 0);
	func_300();
	iVar0 = 0;
	while (iVar0 < Local_69.f_0)
	{
		if (!PED::IS_PED_INJURED(Local_69[iVar0 /*17*/]))
		{
			TASK::TASK_AIM_GUN_AT_COORD(Local_69[iVar0 /*17*/], 2930.5f, 810.5f, 449.1f, -1, true, false);
		}
		iVar0++;
	}
	bLocal_368 = true;
}

void func_879()//Position - 0x93D92
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_168, false))
	{
		VEHICLE::DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(iLocal_168, 0, 255);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_172))
		{
			iLocal_172 = OBJECT::CREATE_OBJECT(func_117(18), ENTITY::GET_ENTITY_COORDS(iLocal_168, true), true, true, false);
			ENTITY::SET_ENTITY_COORDS(iLocal_172, ENTITY::GET_ENTITY_COORDS(iLocal_168, true), true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_172, ENTITY::GET_ENTITY_ROTATION(iLocal_168, 2), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_172, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_172, false, false);
		}
	}
}

void func_880()//Position - 0x93E07
{
	__LIB_17__::func_450(1, 1, 1, 0);
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	__LIB_17__::func_111();
}

void func_881()//Position - 0x93E26
{
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
		}
	}
	__LIB_0__::func_345(&Local_28, 0, 0);
	func_856();
	func_290(0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_753();
	func_280();
}

void func_884()//Position - 0x93EE8
{
	int iVar0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_165[iVar0]))
			{
				switch (iVar0)
				{
					case 1:
						Var1 = { Local_413 };
						break;
					case 2:
						Var1 = { Local_414 };
						break;
				}
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_165[iVar0], iLocal_166[2], 0, Var1, 0f, 0f, 180f, false, false, false, false, 2, true, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_165[iVar0], iLocal_166[1], -1, false);
			}
			iVar0++;
		}
	}
}

void func_886()//Position - 0x940DB
{
	func_891(1, 0, 0);
	func_890();
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], false))
	{
		if (iLocal_240 || iLocal_442 > 0)
		{
			__LIB_17__::func_71(&Local_28, iLocal_166[2], 0, 0, 1, 1, 1);
		}
	}
	if (!iLocal_403)
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			iLocal_403 = func_173(3);
		}
	}
	else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		func_175(3);
		iLocal_403 = 0;
	}
	if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]) || fLocal_423 >= 300000f)
	{
		func_3(3);
	}
}

void func_890()//Position - 0x941E1
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_166[2], true, true, false);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
		{
			fLocal_422 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_166[2], 0);
			fLocal_423 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_166[2]);
			fVar1 = 0.1f;
			fVar2 = 0.1f;
			bVar3 = false;
			Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (iLocal_56 == 4)
			{
				if (fLocal_422 <= 310f)
				{
					fVar0 = 0.7f;
				}
				else
				{
					fVar0 = 0.6f;
				}
			}
			else if (!iLocal_219)
			{
				if ((((fLocal_422 <= 3000f || Var4.f_0 < -381f) || Var4.f_0 > 3356f) || Var4.f_1 > 5915f) || Var4.f_1 < 2005f)
				{
					if (fLocal_422 > 3000f)
					{
						bLocal_354 = true;
					}
					iLocal_219 = 1;
					bVar3 = true;
					fVar0 = 1.1f;
				}
				else
				{
					fVar0 = 0f;
				}
			}
			else if (fLocal_423 >= 183000f)
			{
				fVar0 = 0.55f;
				fVar2 = 0.04f;
			}
			else
			{
				fVar7 = 0.81f;
				fVar8 = 0.57f;
				fVar9 = 0.41f;
				if (fLocal_423 >= 160000f)
				{
					fVar5 = 900f;
					fVar6 = 1300f;
				}
				else if (fLocal_423 >= 120000f)
				{
					fVar5 = 1100f;
					fVar6 = 1600f;
				}
				else if (fLocal_423 >= 90600f)
				{
					fVar5 = 1200f;
					fVar6 = 1700f;
				}
				else if (fLocal_423 >= 51400f)
				{
					fVar5 = 1800f;
					fVar6 = 2000f;
					fVar7 = 1.8f;
				}
				else if (fLocal_423 >= 33900f)
				{
					fVar5 = 1600f;
					fVar6 = 2000f;
				}
				else
				{
					fVar5 = 1500f;
					fVar6 = 3200f;
					fVar8 = 1.1f;
					fVar7 = 1.1f;
				}
				if (fLocal_422 < fVar5)
				{
					fVar0 = fVar7;
				}
				else if (fLocal_422 > fVar6)
				{
					fVar0 = fVar9;
				}
				else
				{
					fVar0 = fVar8;
				}
			}
			if (fLocal_421 < fVar0)
			{
				if (bVar3)
				{
					fLocal_421 = fVar0;
				}
				else
				{
					fLocal_421 = (fLocal_421 + (fVar1 * SYSTEM::TIMESTEP()));
					if (fLocal_421 > fVar0)
					{
						fLocal_421 = fVar0;
					}
				}
			}
			else if (fLocal_421 > fVar0)
			{
				fLocal_421 = (fLocal_421 - (fVar2 * SYSTEM::TIMESTEP()));
				if (fLocal_421 < fVar0)
				{
					fLocal_421 = fVar0;
				}
			}
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_166[2], fLocal_421);
		}
	}
}

void func_891(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9445B
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char* sVar5;
	int iVar6;
	bVar0 = true;
	bVar1 = true;
	bVar2 = true;
	bVar3 = true;
	bVar4 = false;
	if (bParam1)
	{
		if (!PED::IS_PED_INJURED(iLocal_161))
		{
			if (!PED::IS_PED_GROUP_MEMBER(iLocal_161, __LIB_0__::func_495()) && (iLocal_56 != 0 || bLocal_211))
			{
				bVar2 = false;
			}
		}
	}
	if (bParam0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
		{
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_161))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_161, iLocal_166[1], false))
					{
						bVar1 = false;
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], false))
			{
				bVar0 = false;
			}
		}
	}
	if (bParam2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bVar3 = false;
		}
	}
	if (bVar2)
	{
		if (bVar0)
		{
			iLocal_201 = 0;
			if (bParam0)
			{
				if (iLocal_440 < 2)
				{
					iLocal_440 = 2;
				}
			}
			if (bVar1)
			{
				if (bVar3)
				{
					bVar4 = true;
					iLocal_205 = 0;
					bLocal_206 = false;
					if (iLocal_56 > 0)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_176))
						{
							__LIB_17__::func_450(0, 1, 0, 0);
							func_22();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
							{
								iLocal_176 = func_848(iLocal_166[2], 0);
							}
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(iLocal_175))
					{
						__LIB_17__::func_450(0, 1, 0, 0);
						func_22();
						iLocal_175 = func_848(iLocal_166[1], 0);
						if (HUD::DOES_BLIP_EXIST(iLocal_175))
						{
							HUD::SET_BLIP_ROUTE(iLocal_175, true);
							HUD::SET_GPS_FLAGS(16, 10f);
						}
					}
					if (!bLocal_200)
					{
						if (iLocal_56 > 0)
						{
							if ((iLocal_56 == 1 || iLocal_56 == 2) || iLocal_56 == 3)
							{
								if (iLocal_202)
								{
									if (!iLocal_240)
									{
										bLocal_200 = func_139("PF_FLY", 1, 0);
										if (bLocal_200)
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 20f, 4);
										}
									}
									else if (!bLocal_220)
									{
										bLocal_200 = func_139("PF_FLYLOW", 1, 0);
									}
									else if (bLocal_235)
									{
										bLocal_200 = func_139("PF_FCLOSE", 1, 0);
									}
								}
							}
							else if (bLocal_252)
							{
								bLocal_200 = func_139("PF_CRASH", 1, 0);
							}
						}
						else if (iLocal_202)
						{
							if (!__LIB_0__::func_75())
							{
								bLocal_200 = func_139("PF_GOAIR", 1, 1);
							}
						}
					}
				}
				else
				{
					if (!iLocal_205)
					{
						func_22();
						iLocal_205 = 1;
					}
					else
					{
						func_895();
					}
					if (!bLocal_206)
					{
						bLocal_206 = func_139("LOSE_WANTED" /* GXT: Lose the Cops. */, 1, 0);
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_177))
				{
					__LIB_17__::func_450(0, 1, 0, 0);
					func_22();
					iLocal_177 = func_862(iLocal_161, 0);
				}
				if (!bLocal_209)
				{
					bLocal_209 = func_139("PF_WAIT", 1, 0);
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_175))
			{
				__LIB_17__::func_450(0, 1, 0, 0);
				func_22();
				if (iLocal_440 == 0 || iLocal_440 == 2)
				{
					iLocal_201 = 1;
				}
				iLocal_175 = func_848(iLocal_166[1], 0);
			}
			if (iLocal_201)
			{
				switch (iLocal_440)
				{
					case 0:
						sVar5 = "PF_PLANE";
						break;
					case 2:
						sVar5 = "PF_PLANE2";
						break;
				}
				if (iLocal_56 > 0 || iLocal_203)
				{
					if (func_139(sVar5, 1, 0))
					{
						iLocal_201 = 0;
						iLocal_440++;
					}
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161, 12f, 12f, 6f, false, true, 0))
	{
		if (bLocal_211 || iLocal_56 != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_161, __LIB_0__::func_495());
		}
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_177))
		{
			__LIB_17__::func_450(0, 1, 0, 0);
			func_22();
			iLocal_177 = func_862(iLocal_161, 0);
		}
		if (!bLocal_210)
		{
			bLocal_210 = func_139("PF_LEAVE", 1, 0);
		}
	}
	if (bParam1)
	{
		iVar6 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_INJURED(iLocal_161))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_161, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == PED::GET_VEHICLE_PED_IS_IN(iLocal_161, false))
					{
						iVar6 = 1;
					}
				}
			}
		}
		if (bVar4)
		{
			bVar4 = iVar6;
		}
	}
	if (bVar4)
	{
		if (__LIB_0__::func_719())
		{
			bVar4 = false;
		}
	}
	if (!bVar4)
	{
		if (!iLocal_204)
		{
			if (func_892())
			{
				__LIB_0__::func_325();
			}
		}
	}
}

int func_892()//Position - 0x94853
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if ((((((((((MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_BANTERb") || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_BANTERc")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN3")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN5")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN6")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_PBAN7")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_HAVEHGR")) || MISC::ARE_STRINGS_EQUAL(&Var0, "EXL1_NOHGR"))
		{
			iLocal_204 = 1;
			Local_685 = { Var0 };
			cLocal_686 = { __LIB_0__::func_485() };
			return 1;
		}
	}
	return 0;
}

void func_895()//Position - 0x94A0D
{
	if (HUD::DOES_BLIP_EXIST(iLocal_175))
	{
		HUD::REMOVE_BLIP(&iLocal_175);
	}
	if (__LIB_0__::func_501("PF_PLANE", 0, 0) || __LIB_0__::func_501("PF_PLANE2", 0, 0))
	{
		__LIB_17__::func_450(1, 1, 0, 0);
	}
}

void func_897(char* sParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x94A5D
{
	switch (iLocal_60)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam2, fParam2, fParam2, false, true, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
				iLocal_60 = 1;
			}
			break;
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_60 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam3, fParam3, fParam3, false, true, 0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_60 = 0;
			}
			break;
	}
}

void func_898()//Position - 0x94AD4
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	struct<6> Var12;
	float fVar13;
	float fVar14;
	float fVar15;
	bool bVar16;
	char* sVar17;
	bool bVar18;
	struct<3> Var19;
	struct<3> Var20;
	float fVar21;
	float fVar22;
	bool bVar23;
	if (!iLocal_196)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
		{
			fVar0 = func_169(iLocal_166[1], &fVar1);
			func_855(iLocal_166[1], fVar0);
		}
		if (!bLocal_378)
		{
			bLocal_378 = __LIB_17__::func_99("EXL1_TAKE_OFF");
		}
		func_847();
		func_844();
		if (!bLocal_374)
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (Var2.f_1 > 3791f && Var2.f_0 < -2064f)
			{
				if (!__LIB_30__::func_367("EXIL2_U" /* GXT: Eh T, theres some hick type dudes round here asking questions about you. I'm looking into it. */, 2))
				{
					bLocal_374 = __LIB_17__::func_70(1, "EXIL2_U" /* GXT: Eh T, theres some hick type dudes round here asking questions about you. I'm looking into it. */, 1, 0, 0, 0, 0, 1, 0, 1);
				}
			}
		}
		if (iLocal_320)
		{
			if (!iLocal_230)
			{
				__LIB_17__::func_450(1, 0, 0, 0);
				iLocal_230 = 1;
			}
			else if (!bLocal_321)
			{
				bLocal_321 = func_98("EXL1_JETSUP", 0, 0, 0, 0);
			}
		}
		if (!bLocal_218)
		{
			if (!PED::IS_PED_INJURED(iLocal_161))
			{
				if (!iLocal_217)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_161, false);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_512);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_512);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2158.3357f, 4790.001f, 40.12202f, 1f, 40000, 0.25f, 0, 40000f);
					TASK::TASK_ACHIEVE_HEADING(0, 80.7f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_512);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_161, iLocal_512);
					iLocal_217 = 1;
				}
				if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161, 360f, 360f, 360f, false, false, 0))
				{
					if (!__LIB_0__::func_75())
					{
						func_302(0);
						__LIB_0__::func_222(&uLocal_517, 3, 0, "NervousRon", 0, 1);
						bLocal_218 = true;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_167, false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_167);
			}
			else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_167, 300f, 300f, 300f, false, false, 0))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_167);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true) };
			func_886();
			if (!bLocal_354)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, Var4, true) < 2400f)
				{
					bLocal_354 = true;
				}
			}
			if (bLocal_354)
			{
				fVar5 = 3000f;
				fVar6 = 0.9f;
			}
			else
			{
				fVar5 = 5000f;
				fVar6 = 0.95f;
			}
			__LIB_14__::func_655(iLocal_176, iLocal_166[2], fVar5, fVar6, 0);
			if (fLocal_422 >= fVar5)
			{
				func_3(4);
			}
			if (!bLocal_220)
			{
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -909f, 5426f, -10f, -310f, 6078f, 200f, false, false, 0))
				{
					fVar7 = 130f;
				}
				else
				{
					fVar7 = 46f;
				}
				HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT((fVar1 + fVar7), false, 21);
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1]))
			{
				if (bLocal_218)
				{
					if (!bLocal_223)
					{
						bLocal_223 = func_98("EXL1_COME", 0, 0, 0, 0);
					}
					else if (!iLocal_224)
					{
						if (func_98("EXL1_RADAR", 0, 0, 0, 0))
						{
							iLocal_224 = 1;
							iLocal_445 = MISC::GET_GAME_TIMER();
							iLocal_447 = MISC::GET_GAME_TIMER();
						}
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_447 + 2000)
					{
						if (!bLocal_222)
						{
							iLocal_445 = MISC::GET_GAME_TIMER();
							bLocal_221 = true;
							bLocal_222 = func_96("PF_LOWHLP", 0, 0);
						}
					}
				}
				if (bLocal_221)
				{
					if (!bLocal_220)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_445 + 8000)
						{
							if (fVar0 > fLocal_429)
							{
								bVar8 = true;
							}
							else
							{
								bVar8 = false;
							}
							if (fVar0 >= fVar7)
							{
								bVar9 = false;
								if ((fLocal_423 < (183000f - 10000f) || fLocal_423 > (183000f + 5000f)) || fLocal_424 >= 3f)
								{
									fLocal_424 = (fLocal_424 + (1f * SYSTEM::TIMESTEP()));
								}
								else
								{
									fLocal_424 = (fLocal_424 + (0.2f * SYSTEM::TIMESTEP()));
									bVar9 = true;
								}
								if (!bVar9)
								{
									if (!bLocal_231)
									{
										if (!iLocal_320)
										{
											__LIB_17__::func_450(1, 0, 0, 0);
											bLocal_231 = true;
										}
									}
									else if (iLocal_487 < 4)
									{
										if (!iLocal_320)
										{
											if (!bLocal_226)
											{
												if (func_98("EXL1_THIGH", 0, 0, 0, 0))
												{
													__LIB_0__::func_497(162, 1, 0);
													bLocal_226 = true;
												}
											}
											else if (!iLocal_227)
											{
												if (fLocal_424 > 9f)
												{
													iLocal_227 = func_98("EXL1_TUHIGH", 0, 0, 0, 0);
												}
											}
										}
									}
								}
								if (!iLocal_250)
								{
									if (AUDIO::HAS_SOUND_FINISHED(iLocal_503))
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_451 + 1000)
										{
											AUDIO::PLAY_SOUND_FRONTEND(iLocal_503, "Altitude_Warning", "EXILE_1", true);
											iLocal_451 = MISC::GET_GAME_TIMER();
											iLocal_250 = 1;
										}
									}
								}
								else
								{
									if (!iLocal_229)
									{
										if (fLocal_424 >= 3f)
										{
											iLocal_487++;
											if (iLocal_487 >= 5)
											{
												iLocal_320 = 1;
											}
											iLocal_229 = 1;
										}
									}
									if (!AUDIO::HAS_SOUND_FINISHED(iLocal_503))
									{
										fVar11 = (fVar0 - fVar7);
										if (bVar8)
										{
											switch (iLocal_444)
											{
												case 0:
													if (fVar11 >= 50f || fLocal_424 >= 7f)
													{
														iLocal_444++;
													}
													break;
												case 1:
													if (fVar11 >= 100f || fLocal_424 >= 12f)
													{
														iLocal_444++;
													}
													break;
												}
										}
										switch (iLocal_444)
										{
											case 0:
												fVar10 = 0f;
												break;
											case 1:
												fVar10 = 0.5f;
												break;
											case 2:
												fVar10 = 1f;
												break;
										}
										AUDIO::SET_VARIABLE_ON_SOUND(iLocal_503, "Intensity", fVar10);
									}
								}
								if (!iLocal_225)
								{
									if (iLocal_486 < 2)
									{
										if (fLocal_424 > 2.8f)
										{
											if (func_96("PF_DWNHLP", 0, 0))
											{
												iLocal_450 = MISC::GET_GAME_TIMER();
												iLocal_486++;
												iLocal_225 = 1;
											}
										}
									}
								}
								if (fLocal_424 > 15f)
								{
									iLocal_320 = 1;
								}
							}
							else
							{
								if (bLocal_226)
								{
									if (__LIB_0__::func_75())
									{
										Var12 = { __LIB_0__::func_486() };
										if (MISC::ARE_STRINGS_EQUAL(&Var12, "EXL1_THIGH"))
										{
											iLocal_446 = MISC::GET_GAME_TIMER() + 1000;
											iLocal_228 = 1;
										}
									}
								}
								fLocal_424 = (fLocal_424 - (5f * SYSTEM::TIMESTEP()));
								if (fLocal_424 <= 0f)
								{
									iLocal_444 = 0;
									fLocal_424 = 0f;
									iLocal_229 = 0;
									bLocal_231 = false;
									bLocal_226 = false;
									iLocal_227 = 0;
									iLocal_225 = 0;
									iLocal_250 = 0;
								}
								if (iLocal_228)
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_446)
									{
										iLocal_228 = 0;
									}
									else if (__LIB_0__::func_75())
									{
										iLocal_446 = MISC::GET_GAME_TIMER() + 1000;
									}
									else if (func_98("EXL1_ONIT", 0, 0, 0, 0))
									{
										iLocal_228 = 0;
									}
								}
								if (__LIB_0__::func_1("PF_DWNHLP"))
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_450 + 2500 && MISC::GET_GAME_TIMER() >= iLocal_478 + 1000)
									{
										iLocal_478 = MISC::GET_GAME_TIMER();
										HUD::CLEAR_HELP(false);
									}
								}
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_503))
								{
									if (iLocal_57 != 9)
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_451 + 1000 && !iLocal_320)
										{
											AUDIO::STOP_SOUND(iLocal_503);
											iLocal_451 = MISC::GET_GAME_TIMER();
											iLocal_250 = 0;
										}
									}
								}
							}
							fLocal_429 = fVar0;
						}
					}
				}
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1]))
			{
				if (!bLocal_379)
				{
					if (iLocal_442 > 0)
					{
						bLocal_379 = __LIB_17__::func_99("EXL1_CARGO_PLANE_SPOTTED");
					}
				}
				else if (!bLocal_380)
				{
					if (iLocal_442 > 3)
					{
						bLocal_380 = __LIB_17__::func_99("EXL1_SENSE_OF_STYLE");
					}
				}
				else if (!bLocal_381)
				{
					if (iLocal_442 > 5)
					{
						bLocal_381 = __LIB_17__::func_99("EXL1_ON_YOUR_TOES");
					}
				}
				else if (!bLocal_382)
				{
					if (iLocal_233)
					{
						bLocal_382 = __LIB_17__::func_99("EXL1_START_CLIMBING");
					}
				}
				else if (!bLocal_383)
				{
					if (iLocal_442 > 8)
					{
						bLocal_383 = __LIB_17__::func_99("EXL1_IDENTIFY_YOURSELF");
					}
				}
				else if (!bLocal_384)
				{
					bLocal_384 = AUDIO::PREPARE_MUSIC_EVENT("EXL1_CARGO_DOORS_OPEN");
				}
				if (!iLocal_402)
				{
					if (iLocal_442 > 0)
					{
						if (func_173(2))
						{
							iLocal_402 = 1;
							func_175(1);
						}
					}
				}
				else if (!bLocal_404)
				{
					if (iLocal_442 > 6)
					{
						bLocal_404 = func_173(5);
					}
				}
				else if (!bLocal_405)
				{
					if (iLocal_442 > 11)
					{
						if (!__LIB_0__::func_75())
						{
							func_175(5);
						}
					}
				}
				if (!iLocal_251)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_166[1], 55f);
					if (MISC::GET_GAME_TIMER() >= iLocal_475)
					{
						iLocal_251 = 1;
					}
				}
				if (!iLocal_202)
				{
					if (!PED::IS_PED_INJURED(iLocal_161))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_161, func_115(12), 20f, 20f, 20f, false, false, 0))
						{
							iLocal_202 = func_98("EXL1_RADIO", 0, 0, 0, 0);
						}
						else
						{
							iLocal_202 = 1;
						}
					}
					else
					{
						iLocal_202 = 1;
					}
				}
				else if (iLocal_442 <= 11 && bLocal_200)
				{
					bVar16 = true;
					switch (iLocal_442)
					{
						case 0:
							bVar18 = false;
							Var19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							Var20 = { ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true) };
							fVar21 = __LIB_0__::func_932(Var19, Var20);
							fVar21 = __LIB_17__::func_58(fVar21);
							bVar18 = __LIB_17__::func_444(iLocal_166[1], fVar21, 30f);
							if (!bVar18)
							{
								sVar17 = "EXL1_SEECG";
							}
							else
							{
								sVar17 = "EXL1_HORIZ";
							}
							fVar13 = 2750f;
							fVar14 = 2750f;
							fVar15 = 0f;
							break;
						case 1:
							sVar17 = "EXL1_RONENC";
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 0f;
							bVar16 = false;
							break;
						case 2:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar17 = "EXL1_PBAN1";
							}
							else
							{
								sVar17 = "EXL1_PBAN2";
							}
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 27000f;
							bVar16 = false;
							break;
						case 3:
							sVar17 = "EXL1_PBAN3";
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 76000f;
							bVar16 = false;
							break;
						case 4:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar17 = "EXL1_PBAN4";
							}
							else
							{
								sVar17 = "EXL1_PBAN5";
							}
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 116000f;
							bVar16 = false;
							break;
						case 5:
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
							{
								sVar17 = "EXL1_PBAN6";
							}
							else
							{
								sVar17 = "EXL1_PBAN7";
							}
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 154000f;
							bVar16 = false;
							break;
						case 6:
							sVar17 = "EXL1_WARN1";
							fVar13 = 950f;
							fVar14 = 600f;
							fVar15 = 55000f;
							break;
						case 7:
							sVar17 = "EXL1_RESP1";
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 55000f;
							bVar16 = false;
							break;
						case 8:
							sVar17 = "EXL1_WARN2";
							fVar13 = 720f;
							fVar14 = 250f;
							fVar15 = 93000f;
							break;
						case 9:
							sVar17 = "EXL1_RESP2";
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 93000f;
							bVar16 = false;
							break;
						case 10:
							sVar17 = "EXL1_WARN3";
							fVar13 = 480f;
							fVar14 = 150f;
							fVar15 = 135000f;
							break;
						case 11:
							sVar17 = "EXL1_RESP3";
							fVar13 = 3000f;
							fVar14 = 3000f;
							fVar15 = 135000f;
							bVar16 = false;
							break;
					}
					if (fLocal_423 >= fVar15)
					{
						fVar22 = (Var3.f_2 - Var4.f_2);
						if (fVar22 < 0f)
						{
							fVar22 = (fVar22 * -1f);
						}
						if (((((((fLocal_422 <= fVar13 && fVar22 <= fVar14) && !iLocal_250) && !bLocal_231) && !bLocal_226) && !iLocal_228) && !iLocal_320) && fLocal_425 == 0f)
						{
							if (((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_166[2]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_166[2])) || !bVar16) && (iLocal_442 <= 5 || bLocal_220))
							{
								if (func_98(sVar17, 0, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
									iLocal_442++;
								}
							}
						}
					}
				}
				if (!iLocal_240)
				{
					if (iLocal_442 > 1)
					{
						bLocal_200 = false;
						iLocal_240 = 1;
					}
				}
				else
				{
					if (!iLocal_320)
					{
						if (iLocal_56 == 1)
						{
							if (func_125())
							{
								if (fLocal_423 >= 88000f && fLocal_422 < 1500f)
								{
									func_187(2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
								}
							}
						}
						else if (iLocal_56 == 2)
						{
							if (func_125())
							{
								if (bLocal_220)
								{
									func_187(3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1);
								}
							}
						}
					}
					if (!bLocal_220)
					{
						if (iLocal_56 == 2)
						{
							if ((fLocal_423 >= 183000f && (fLocal_422 < 900f || (Var3.f_0 >= 1791f && Var3.f_1 <= 5915f))) && !iLocal_320)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_503))
								{
									AUDIO::STOP_SOUND(iLocal_503);
								}
								iLocal_228 = 0;
								iLocal_250 = 0;
								if (__LIB_0__::func_1("PF_DWNHLP"))
								{
									HUD::CLEAR_HELP(false);
								}
								bLocal_200 = false;
								iLocal_445 = MISC::GET_GAME_TIMER();
								iLocal_442 = 6;
								HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
								bLocal_220 = true;
							}
						}
					}
					else if (!iLocal_233)
					{
						if (func_98("EXL1_CANGO", 0, 0, 0, 0))
						{
							iLocal_233 = 1;
							iLocal_448 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						if (!bLocal_235)
						{
							bLocal_235 = func_98("EXL1_HEREGO", 0, 0, 0, 0);
						}
						if (!bLocal_234)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_448 + 2000)
							{
								bLocal_234 = func_96("PF_UPHLP", 0, 0);
							}
						}
					}
					if (iLocal_56 == 3)
					{
						switch (iLocal_155)
						{
							case 0:
								func_900();
								iLocal_155 = 1;
								break;
							case 1:
								if (func_837() && func_828())
								{
									func_549();
									iLocal_155 = 2;
								}
								break;
							case 2:
								break;
							}
						}
				}
				bVar23 = false;
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2179.34f, 3098.39f, 31.81f, 950f, 950f, 2000f, false, false, 0))
				{
					if (!iLocal_237)
					{
						if (func_98("EXL1_MBASE", 0, 0, 0, 0))
						{
							iLocal_237 = 1;
							iLocal_449 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						if (!bLocal_239)
						{
							bLocal_239 = func_98("EXL1_REACT", 0, 0, 0, 0);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_449 + 2000)
						{
							if (!bLocal_236)
							{
								bLocal_236 = func_96("PF_BASHLP", 0, 0);
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_452 + 250)
					{
						if (__LIB_0__::func_875(Var3, 3, 2000, 0))
						{
							iLocal_228 = 0;
							if (!iLocal_232)
							{
								if (!iLocal_320)
								{
									__LIB_17__::func_450(1, 0, 0, 0);
									iLocal_232 = 1;
								}
							}
							if (!iLocal_238)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_453)
								{
									iLocal_238 = func_98("EXL1_FORT", 0, 0, 0, 0);
								}
							}
							fLocal_425 = (fLocal_425 + 0.25f);
							if (fLocal_425 >= 6f)
							{
								iLocal_320 = 1;
							}
						}
						else
						{
							bVar23 = true;
						}
						iLocal_452 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					bVar23 = true;
				}
				if (bVar23)
				{
					fLocal_425 = (fLocal_425 - (2f * SYSTEM::TIMESTEP()));
					if (fLocal_425 < 0f)
					{
						fLocal_425 = 0f;
					}
					if (iLocal_238)
					{
						iLocal_453 = MISC::GET_GAME_TIMER() + 3000;
						iLocal_238 = 0;
					}
					iLocal_232 = 0;
				}
				if (bLocal_220)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_166[2], 275f, 275f, 100f, false, true, 0) && iLocal_155 == 2)
					{
						if (__LIB_31__::func_989(iLocal_166[1], iLocal_166[2], 60f))
						{
							if (func_125())
							{
								func_187(4, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1);
							}
						}
					}
				}
			}
			else if (((__LIB_0__::func_1("PF_LOWHLP") || __LIB_0__::func_1("PF_DWNHLP")) || __LIB_0__::func_1("PF_BASHLP")) || __LIB_0__::func_1("PF_CRSHLP"))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_478)
				{
					HUD::CLEAR_HELP(false);
					iLocal_478 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
	}
}

void func_900()//Position - 0x9677D
{
	func_838(7);
	func_838(12);
	func_838(13);
	func_838(14);
	func_829(0);
}

void func_919()//Position - 0x978ED
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	__LIB_16__::func_322(51, 4);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"), 4, true, false);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(MISC::GET_HASH_KEY("DOORHASH_T_TRAILER_CS"), -1f, true, false);
	__LIB_32__::func_32(iLocal_161, &iLocal_339, &iLocal_493);
	switch (iLocal_157)
	{
		case 0:
			func_838(9);
			iLocal_157 = 1;
			break;
		case 1:
			if (func_837())
			{
				MISC::CLEAR_AREA(func_115(2), 10f, true, false, false, false);
				func_318(1, func_115(2), 27.5f, 1, 1, 0);
				iLocal_157 = 2;
			}
			break;
		case 2:
			break;
	}
	if (!iLocal_351)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_488 + 1000)
		{
			if (STREAMING::STREAMVOL_IS_VALID(iLocal_683))
			{
				STREAMING::STREAMVOL_DELETE(iLocal_683);
			}
			iLocal_351 = 1;
		}
	}
	__LIB_0__::func_496();
	if (!bLocal_336)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1973.5546f, 3818.5244f, 32.43631f, 400f, 400f, 400f, false, false, 0))
		{
			func_422();
		}
		else
		{
			if (!bLocal_340)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1972.0151f, 3817.516f, 35.51379f, 16f, 16f, 2f, false, false, 0))
				{
					fLocal_433 = (fLocal_433 + (1f * SYSTEM::TIMESTEP()));
					if (fLocal_433 >= 1.8f)
					{
						if (!PED::IS_PED_INJURED(iLocal_162))
						{
							bLocal_340 = func_98("EXL1_TRGOBAK", 0, 0, 0, 0);
						}
					}
				}
				else
				{
					fLocal_433 = 0f;
				}
			}
			if (PED::IS_PED_INJURED(iLocal_162))
			{
				func_3(12);
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iLocal_162, 328, true);
				if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_162, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_162, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_162, PLAYER::PLAYER_PED_ID(), true))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_162, 1000, true, 0);
				}
			}
			if (PED::IS_PED_INJURED(iLocal_163))
			{
				func_3(13);
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iLocal_163, 328, true);
				if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_163, PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_163, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_163, PLAYER::PLAYER_PED_ID(), true))
				{
					PED::APPLY_DAMAGE_TO_PED(iLocal_163, 1000, true, 0);
				}
			}
		}
	}
	if (!iLocal_212)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_161, false))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
			iLocal_212 = 1;
		}
	}
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
	{
		if (MISC::GET_GAME_TIMER() <= iLocal_488 + 1000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
	}
	if (!bLocal_211)
	{
		bVar1 = false;
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_161, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(iLocal_161) == PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))
			{
				bVar1 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161, 20f, 20f, 20f, false, false, 0))
		{
			bVar1 = true;
		}
		if (__LIB_14__::func_852() || func_924())
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_161, __LIB_0__::func_495());
			bLocal_211 = true;
		}
	}
	func_923();
	if (!bLocal_400)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[0], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[0], false))
			{
				bLocal_400 = func_173(0);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false) && !PED::IS_PED_INJURED(iLocal_161))
	{
		if (!iLocal_214)
		{
			func_891(0, 1, 1);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[1], false);
			if (PED::IS_PED_GROUP_MEMBER(iLocal_161, __LIB_0__::func_495()) || !bLocal_211)
			{
				if (bLocal_200)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_161, false))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(iLocal_161, false) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
						{
							if (iVar0 == 0)
							{
								if (!iLocal_203)
								{
									if ((iLocal_437 % 2) == 0)
									{
										iLocal_203 = func_98("EXL1_BANTERB", 0, 0, 0, 0);
									}
									else
									{
										iLocal_203 = func_98("EXL1_BANTERC", 0, 0, 0, 0);
									}
									if (iLocal_203)
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
									}
								}
								else
								{
									if (!iLocal_341)
									{
										Var2 = { __LIB_13__::func_743() };
										if (MISC::ARE_STRINGS_EQUAL(&Var2, "EXL1_BANTERb_33"))
										{
											__LIB_0__::func_325();
											iLocal_341 = 1;
										}
									}
									else if (!bLocal_342)
									{
										if (__LIB_13__::func_636(2) == 2)
										{
											bLocal_342 = func_98("EXL1_HAVEHGR", 0, 0, 0, 0);
										}
										else
										{
											bLocal_342 = func_98("EXL1_NOHGR", 0, 0, 0, 0);
										}
									}
									else if (!bLocal_343)
									{
										bLocal_343 = func_98("EXL1_BANTERB", 0, 35, 1, 0);
									}
									if (iLocal_204)
									{
										if (func_920())
										{
											iLocal_204 = 0;
										}
									}
								}
							}
						}
					}
				}
				if (((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_166[1], 10f, 10f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2124.4343f, 4802.5654f, 40.07504f, 16.5f, 16.5f, 4f, false, true, 0)) && PED::IS_PED_GROUP_MEMBER(iLocal_161, __LIB_0__::func_495())) && iVar0 == 0)
				{
					__LIB_0__::func_325();
					iLocal_203 = 0;
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[1], true);
					__LIB_17__::func_475(&(Global_106934.f_2890), &Global_106934, 0, 1, 1, 0);
					iLocal_214 = 1;
				}
			}
		}
		else
		{
			if (!iLocal_401)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_175(0);
					iLocal_401 = 1;
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161, 20f, 20f, 4f, false, true, 0))
			{
				if (iVar0 == 0)
				{
					if (!iLocal_203)
					{
						if (((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_166[1]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2137.2708f, 4794.185f, 40.00207f, 2122.5547f, 4787.165f, 43.99516f, 42f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2133.5708f, 4809.394f, 40.00207f, 2112.329f, 4799.4087f, 43.99516f, 8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2135.3018f, 4818.3726f, 40.00207f, 2105.4443f, 4804.136f, 43.99516f, 8f, false, true, 0))
						{
							iLocal_203 = func_98("EXL1_SEEPLNb", 0, 0, 0, 0);
							if (iLocal_203)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 4);
							}
						}
					}
					else if (!bLocal_215)
					{
						if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_166[1])
						{
							bLocal_215 = func_98("EXL1_SHOUT", 0, 0, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_203 = 1;
			}
			func_891(1, 0, 0);
			if (!iLocal_216)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && (ENTITY::IS_ENTITY_AT_COORD(iLocal_161, 2124.4343f, 4802.5654f, 40.07504f, 16.5f, 16.5f, 4f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_161, iLocal_166[1], 14f, 14f, 4f, false, true, 0)))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_161, false);
					PED::REMOVE_PED_FROM_GROUP(iLocal_161);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_512);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_512);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_115(12), 1f, 40000, 0.25f, 0, -179.12f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_512);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_161, iLocal_512);
					iLocal_216 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_166[1], false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161, 20f, 20f, 4f, false, true, 0))
			{
				__LIB_0__::func_325();
			}
			func_187(1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1);
		}
	}
	if (iLocal_56 == 0)
	{
		if (!iLocal_202)
		{
			if ((iLocal_437 % 2) == 0)
			{
				iLocal_202 = func_98("EXL1_RONPLAS", 0, 0, 0, 1);
			}
			else
			{
				iLocal_202 = func_98("EXL1_GOAIR2", 0, 0, 0, 1);
			}
		}
	}
}

int func_920()//Position - 0x9807A
{
	if (iLocal_204)
	{
		if (func_125())
		{
			if (__LIB_16__::func_936(&uLocal_517, "EXL1AUD", &Local_685, &cLocal_686, 8, 0, 0))
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

void func_923()//Position - 0x9810C
{
	if (!iLocal_213)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[0], false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_213 = 1;
		}
	}
}

int func_924()//Position - 0x9813B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_112417, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_112418))
		{
			if (!PED::IS_PED_INJURED(Global_112418))
			{
				if (PED::IS_PED_IN_VEHICLE(Global_112418, Global_112417, false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_112417, -2, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_929()//Position - 0x982DC
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_171) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_171, ENTITY::GET_ENTITY_COORDS(iLocal_166[2], true), true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_171, ENTITY::GET_ENTITY_ROTATION(iLocal_166[2], 2), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_171, true);
	}
}

void func_930()//Position - 0x98330
{
	func_932();
	switch (iLocal_55)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				func_1014();
				iLocal_194 = 1;
				func_1010();
			}
			break;
	}
}

void func_932()//Position - 0x98395
{
	bool bVar0;
	bool bVar1;
	if (!iLocal_196)
	{
		if (iLocal_56 <= 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_166[1]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
				{
					bVar0 = false;
					bVar1 = false;
					if (iLocal_347)
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_166[1], false) || ENTITY::IS_ENTITY_IN_WATER(iLocal_166[1]))
						{
							bVar0 = true;
						}
						else if (MISC::GET_GAME_TIMER() >= iLocal_496 + 32000)
						{
							func_895();
							func_3(14);
						}
					}
					else
					{
						bVar1 = true;
						bVar0 = true;
					}
					if (bVar1)
					{
						if (iLocal_56 != 4)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_166[1], false))
							{
								if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_166[1]) < 300f)
								{
									VEHICLE::EXPLODE_VEHICLE(iLocal_166[1], true, false);
								}
							}
						}
					}
					if (bVar0)
					{
						func_895();
						if (!PLAYER::HAS_PLAYER_LEFT_THE_WORLD(PLAYER::PLAYER_ID()))
						{
							func_3(1);
						}
						else
						{
							func_3(4);
						}
					}
				}
				else
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_166[1], 0) > 100f)
					{
						if (((iLocal_56 == 1 || iLocal_56 == 2) || iLocal_56 == 3) || iLocal_56 == 4)
						{
							func_3(6);
						}
					}
					if (((iLocal_56 == 1 || iLocal_56 == 2) || iLocal_56 == 3) || iLocal_56 == 4)
					{
						if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_166[1], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_166[1], 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_166[1], 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_166[1], 2, 30000))
						{
							func_895();
							func_3(11);
						}
					}
				}
			}
		}
		if (iLocal_56 <= 1)
		{
			if (!bLocal_218)
			{
				if (PED::IS_PED_INJURED(iLocal_161))
				{
					func_933();
					func_3(0);
				}
				else if (iLocal_56 == 0)
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_161, 0) > 100f)
					{
						func_3(7);
					}
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[2], false))
		{
			if (((((iLocal_56 == 1 || iLocal_56 == 2) || iLocal_56 == 3) || iLocal_56 == 4) || iLocal_56 == 6) || iLocal_56 == 5)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_176))
				{
					HUD::REMOVE_BLIP(&iLocal_176);
				}
				if ((__LIB_0__::func_501("PF_FLY", 0, 0) || __LIB_0__::func_501("PF_FCLOSE", 0, 0)) || __LIB_0__::func_501("PF_CRASH", 0, 0))
				{
					__LIB_17__::func_450(1, 1, 0, 0);
				}
				if (iLocal_56 != 6 || !PLAYER::HAS_PLAYER_LEFT_THE_WORLD(PLAYER::PLAYER_ID()))
				{
					func_3(2);
				}
				else
				{
					func_3(15);
				}
			}
		}
	}
}

void func_933()//Position - 0x9862B
{
	if (HUD::DOES_BLIP_EXIST(iLocal_177))
	{
		HUD::REMOVE_BLIP(&iLocal_177);
	}
	if (__LIB_0__::func_501("PF_WAIT", 0, 0) || __LIB_0__::func_501("PF_LEAVE", 0, 0))
	{
		__LIB_17__::func_450(1, 1, 0, 0);
	}
}

void func_934(bool bParam0)//Position - 0x9866B
{
	int iVar0;
	switch (iLocal_59)
	{
		case 0:
			if (func_935() || bParam0)
			{
				if (bParam0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = iLocal_56 + 1;
				}
				func_836(iVar0, 0, 1);
				func_831(iVar0, 0, 1);
				func_827(iVar0, 0, 1);
				func_822(iVar0, 0, 1);
				func_817(iVar0, 0, 1);
				func_810(iVar0, 0, 1);
				func_805(iVar0, 0, 1);
				func_804(0);
				iLocal_59 = 1;
			}
			break;
		case 1:
			if (((((((func_837() && func_832()) && func_828()) && func_823()) && func_818()) && func_811()) && func_806()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iLocal_59 = 2;
			}
			break;
	}
}

int func_935()//Position - 0x98736
{
	switch (iLocal_56)
	{
		case 0:
			if (iLocal_214)
			{
				return 1;
			}
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 1;
			break;
		case 4:
			return 1;
			break;
		case 5:
			if (iLocal_464 >= 2)
			{
				return 1;
			}
			break;
		case 6:
			return 1;
			break;
		case 7:
			return 0;
			break;
	}
	return 0;
}

int func_936()//Position - 0x987BB
{
	int iVar0;
	int iVar1;
	switch (iLocal_54)
	{
		case 0:
			__LIB_17__::func_450(1, 1, 1, 0);
			__LIB_16__::func_18(1);
			func_1009(0);
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			__LIB_17__::func_63(2, 1);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 12f);
			iVar0 = 0;
			while (iVar0 < Local_68.f_0)
			{
				Local_68[iVar0 /*14*/].f_12 = AUDIO::GET_SOUND_ID();
				iVar0++;
			}
			Global_113386.f_10049.f_100 = 3;
			if (!__LIB_0__::func_323())
			{
				iLocal_437 = 0;
			}
			else
			{
				iLocal_437 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[14 /*6*/].f_1 + 1;
			}
			iLocal_1955 = 0;
			func_1007(1);
			iLocal_54 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_323())
			{
				if (!iLocal_1955)
				{
					STREAMING::PREFETCH_SRL(sLocal_1956);
					STREAMING::SET_SRL_READAHEAD_TIMES(7, 7, 7, 7);
					iLocal_1955 = 1;
				}
				func_838(0);
				func_838(3);
				func_838(16);
				func_838(17);
				func_829(6);
				STREAMING::REQUEST_ANIM_DICT(sLocal_1931);
				__LIB_28__::func_224(&iLocal_160);
				while ((((!func_837() || !func_828()) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1931)) || !__LIB_37__::func_339(&iLocal_160)) || !STREAMING::IS_SRL_LOADED())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.2843f, 178.94594f, 71.22786f, -816.60114f, 177.17238f, 73.22786f, 1f, false, true, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					}
					SYSTEM::WAIT(0);
				}
				iVar1 = MISC::GET_GAME_TIMER();
				while ((MISC::GET_GAME_TIMER() < iVar1 + 2000 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.2843f, 178.94594f, 71.22786f, -816.60114f, 177.17238f, 73.22786f, 1f, false, true, 0))
				{
					SYSTEM::WAIT(0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_688 = 1;
				iLocal_54 = 5;
			}
			else
			{
				CUTSCENE::STOP_CUTSCENE(false);
				func_1001();
			}
			break;
		case 5:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (func_938(&uLocal_689))
			{
				__LIB_0__::func_620(0);
				iLocal_54 = 6;
			}
			else
			{
				return 0;
			}
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_938(var uParam0)//Position - 0x989EB
{
	int iVar0;
	float fVar1;
	struct<6> Var2;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_502)
	{
		case 0:
			__LIB_37__::func_338(&iLocal_160, 1, 20);
			break;
		case 1:
			__LIB_37__::func_338(&iLocal_160, 1, 21);
			break;
		case 2:
			__LIB_37__::func_338(&iLocal_160, 1, 3);
			break;
	}
	switch (iLocal_688)
	{
		case 0:
			break;
		case 1:
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			CAM::DESTROY_ALL_CAMS(false);
			func_999(uParam0, PLAYER::PLAYER_PED_ID(), uLocal_77[0]);
			__LIB_16__::func_29(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			__LIB_16__::func_937(-816.459f, 178.285f, 76.232f, -823.844f, 175.655f, 64.887f, 8f, -821.73596f, 182.88571f, 70.90462f, -57.6f, __LIB_13__::func_790(), 1, 0, 1, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(-817.6671f, 177.79582f, 71.22737f, 18f, 0);
			FIRE::STOP_FIRE_IN_RANGE(-817.6671f, 177.79582f, 71.22737f, 18f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-817.6671f, 177.79582f, 71.22737f, 18f);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-5000f, -5000f, -1000f, 5000f, 5000f, 1000f, false, true);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
			func_975();
			func_974(1);
			func_973();
			func_972();
			__LIB_0__::func_222(&uLocal_517, 0, uLocal_77[0], "MICHAEL", 0, 1);
			__LIB_0__::func_222(&uLocal_517, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			STREAMING::BEGIN_SRL();
			fLocal_1957 = -9999f;
			CAM::DO_SCREEN_FADE_IN(800);
			iLocal_438 = MISC::GET_GAME_TIMER();
			iLocal_1946 = 0;
			iLocal_1947 = 0;
			iLocal_1948 = 0;
			iLocal_1949 = 0;
			iLocal_1950 = 0;
			iLocal_1951 = 0;
			iLocal_1952 = 0;
			iLocal_1953 = 0;
			iLocal_688 = 2;
		case 2:
			if (__LIB_0__::func_500() && MISC::GET_GAME_TIMER() >= iLocal_438 + 1000)
			{
				CAM::DO_SCREEN_FADE_OUT(800);
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::END_SRL();
				STREAMING::REMOVE_ANIM_DICT(sLocal_1931);
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
				bLocal_197 = true;
				CUTSCENE::STOP_CUTSCENE(false);
				if (STREAMING::STREAMVOL_IS_VALID(iLocal_683))
				{
					STREAMING::STREAMVOL_DELETE(iLocal_683);
				}
				if (STREAMING::STREAMVOL_IS_VALID(iLocal_684))
				{
					STREAMING::STREAMVOL_DELETE(iLocal_684);
				}
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				func_1001();
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
				}
				return 0;
			}
			else
			{
				func_970();
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				fLocal_1957 = (fLocal_1957 + (MISC::GET_FRAME_TIME() * 1000f));
				if (fLocal_1957 < 0f)
				{
					fLocal_1957 = 0f;
				}
				STREAMING::SET_SRL_TIME(fLocal_1957);
				if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
				{
					iVar0 = iVar0;
					iVar0 = func_956(uParam0);
					fVar1 = fVar1;
					fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
					if (!iLocal_1946)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1934))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1934) >= fLocal_1940)
							{
								iLocal_1946 = 1;
							}
						}
					}
					if (iLocal_502 == 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1934))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1934) >= 0.548f)
							{
								iLocal_502 = 1;
							}
						}
					}
					if (!iLocal_1947)
					{
						if (fVar1 >= fLocal_1941)
						{
							func_955();
							iLocal_1947 = 1;
						}
					}
					if (!iLocal_1952)
					{
						if (fVar1 >= fLocal_1943)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinIn", 0, false);
							iLocal_1952 = 1;
						}
					}
					if (!iLocal_1953)
					{
						if (fVar1 >= fLocal_1944)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelMid", 0, false);
							iLocal_1953 = 1;
						}
					}
					if (!bLocal_1954)
					{
						if (fVar1 >= fLocal_1945)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_511 = MISC::GET_GAME_TIMER();
							bLocal_1954 = true;
						}
					}
					if (!iLocal_1951)
					{
						if (bLocal_1954)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_511 + 200)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_1951 = 1;
							}
						}
					}
					if (iLocal_1947 && !iLocal_1948)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1935))
						{
							PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1935, 0f);
						}
					}
					if (iVar0 > uParam0->f_1218)
					{
						INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME("v_trailerrm");
					}
					if (!iLocal_1948)
					{
						if (iVar0 > uParam0->f_1218)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1935))
							{
								PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1935, 1f);
							}
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[1]))
							{
								PED::DELETE_PED(&(uLocal_77[1]));
							}
							iLocal_502 = 2;
							iLocal_1948 = 1;
						}
					}
					if (!iLocal_1949)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1934))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1934) >= 0.849f)
							{
								if (__LIB_16__::func_936(&uLocal_517, "EXL1AUD", "EXL1_INT_LI", "EXL1_INT_LI_2", 8, 0, 0))
								{
									iLocal_509 = MISC::GET_GAME_TIMER();
									iLocal_1949 = 1;
								}
							}
						}
					}
					else if (!iLocal_398)
					{
						Var2 = { __LIB_13__::func_743() };
						if (MISC::ARE_STRINGS_EQUAL(&Var2, "EXL1_INT_LI_2") && MISC::GET_GAME_TIMER() >= iLocal_509 + 1000)
						{
							__LIB_0__::func_620(1);
							iLocal_398 = 1;
						}
					}
					if (!iLocal_1950)
					{
						if (fVar1 >= fLocal_1942)
						{
							__LIB_0__::func_620(0);
							iLocal_1950 = 1;
						}
					}
					if (!iLocal_365)
					{
						STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(1969.6719f, 3818.3833f, 33.59213f);
						if (fVar1 >= 0.7f)
						{
							CUTSCENE::REQUEST_CUTSCENE("exile_1_int", 8);
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1969.6719f, 3818.3833f, 33.59213f, true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
							iLocal_365 = 1;
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
						STREAMING::END_SRL();
						STREAMING::REMOVE_ANIM_DICT(sLocal_1931);
						__LIB_17__::func_313(&iLocal_160);
						iLocal_688 = 3;
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
		case 3:
			if (__LIB_0__::func_90())
			{
				func_970();
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_77[0], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_77[0], "Michael", 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_77[2], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_77[2], "Trevor", 0, 0, 0);
					}
				}
				func_423(6);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_161, "Ron", 2, func_117(2), 0);
				if (__LIB_14__::func_742(0f, 0f, 0f, 1))
				{
					__LIB_28__::func_238(0f, 0f, 0f, 0f, 1, 1);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1969.6719f, 3818.3833f, 33.59213f, 10f, 10f, 10f, false, false, 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1969.6719f, 3818.3833f, 33.59213f, true, false, false, true);
				}
				__LIB_0__::func_468(14);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				CUTSCENE::START_CUTSCENE(1024);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_198 = 0;
				bLocal_197 = false;
				iLocal_688 = 4;
			}
			else
			{
				return 0;
			}
			break;
		case 4:
			STREAMING::SET_STREAMING(true);
			__LIB_28__::func_216(&uLocal_77, 2, 2);
			__LIB_17__::func_512(&uLocal_77, 2);
			__LIB_17__::func_72(&uLocal_77, 0, 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1933))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1933, false))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1933);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1932))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1932, false))
				{
					OBJECT::DELETE_OBJECT(&iLocal_1932);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_77[2], false))
				{
					if (!PED::IS_PED_INJURED(uLocal_77[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_77[2], false);
						ENTITY::SET_ENTITY_VISIBLE(uLocal_77[2], true, false);
					}
				}
			}
			MISC::SET_TIME_SCALE(1f);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::DESTROY_CAM(uParam0->f_1, false);
				CAM::DESTROY_ALL_CAMS(false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			INTERIOR::UNPIN_INTERIOR(iLocal_687);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_688 = 5;
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ron", 0)))
				{
					iLocal_161 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ron", 0));
				}
			}
			if (!iLocal_350)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 120167)
				{
					func_543();
					iLocal_350 = 1;
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() >= 120000)
			{
				func_934(1);
			}
			if (!iLocal_207)
			{
				if (iLocal_59 == 2)
				{
					if (!iLocal_208)
					{
						func_940();
						iLocal_208 = 1;
					}
					else
					{
						func_547(0);
						iLocal_207 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				func_541();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[0], false) && !PED::IS_PED_INJURED(iLocal_161))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_161, iLocal_166[0], 20000, 0, 1f, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				func_939();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				func_29(0, 1, 0, 1);
				func_1001();
				GRAPHICS::RESET_ADAPTATION(6);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				iLocal_688 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_939()//Position - 0x992B4
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_115(1), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 48f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
}

void func_940()//Position - 0x992EB
{
	__LIB_17__::func_434(func_115(1));
	__LIB_17__::func_434(func_115(0));
}

void func_955()//Position - 0x99931
{
	int iVar0;
	if (__LIB_14__::func_466() == 0)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	else
	{
		iVar0 = uLocal_77[0];
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (!PED::IS_PED_INJURED(iVar0))
			{
				iLocal_1935 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1938, Local_1939, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
				TASK::CLEAR_PED_TASKS(iVar0);
				TASK::TASK_SYNCHRONIZED_SCENE(iVar0, iLocal_1935, sLocal_1930, "Michael_inTrailer", 1000f, -1000f, 4, 0, 1000f, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
				PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1935, 1f);
			}
		}
	}
}

int func_956(var uParam0)//Position - 0x999D1
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
				fLocal_53 = __LIB_0__::func_504(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			case 1:
				fLocal_53 = __LIB_15__::func_924(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 2:
				fLocal_53 = __LIB_15__::func_923(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 3:
				fLocal_53 = __LIB_15__::func_940(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_53);
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

void func_970()//Position - 0x9A3CF
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_17__::func_43("Michael", joaat("Player_Zero"), 0);
		__LIB_17__::func_43("Trevor", joaat("Player_Two"), 42);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Ron", 3, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ron", 0, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Ron", 1, 0, 0, 0);
	}
}

void func_972()//Position - 0x9A583
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1932))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1932, false))
		{
			OBJECT::DELETE_OBJECT(&iLocal_1932);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_1934 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1936, Local_1937, 2);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1934, sLocal_1930, "Franklin_atHouse", 1000f, -1000f, 4, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				Var0 = { -818.394f, 178.903f, 60f };
				Var1 = { 0f, 0f, 0f };
				Var2 = { 0f, 0f, 0f };
				iLocal_1932 = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing_03"), Var0, true, true, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1932))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1932, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), Var1, Var2, false, false, false, false, 2, true, 0);
				}
			}
		}
	}
}

void func_973()//Position - 0x9A686
{
	struct<3> Var0;
	Var0 = { 1974.7f, 3819.7f, 33.4f };
	iLocal_687 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, "v_trailer");
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_687))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_687);
		if (INTERIOR::IS_INTERIOR_READY(iLocal_687))
		{
		}
	}
}

void func_974(bool bParam0)//Position - 0x9A6CF
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	Var0 = { 1975.3f, 3820.5f, 32.4f };
	fVar1 = -150f;
	func_603(&(uLocal_77[0]), 0, Var0, fVar1, 1, 0, 0);
	if (!PED::IS_PED_INJURED(uLocal_77[0]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_77[0], true);
		ENTITY::SET_ENTITY_COLLISION(uLocal_77[0], false, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_77[0], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_77[0], joaat("PLAYER"));
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_77[0], true, 1);
		func_427(uLocal_77[0], 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		if (bParam0)
		{
			Var2 = { 1975.3f, 3820.5f, 22.4f };
			Var3 = { 0f, 0f, 0f };
			Var4 = { 0f, 0f, 0f };
			iLocal_1933 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_phone_ing"), Var2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_1933))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1933, false))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_1933, uLocal_77[0], PED::GET_PED_BONE_INDEX(uLocal_77[0], 60309), Var3, Var4, false, false, false, false, 2, true, 0);
				}
			}
		}
	}
}

void func_975()//Position - 0x9A7E3
{
	struct<3> Var0;
	float fVar1;
	Var0 = { 1969.8f, 3818.4f, 33f };
	fVar1 = -60f;
	func_603(&(uLocal_77[2]), 2, Var0, fVar1, 1, 0, 0);
	if (!PED::IS_PED_INJURED(uLocal_77[2]))
	{
		func_976(uLocal_77[2]);
		func_609(uLocal_77[2], 1);
	}
}

void func_976(int iParam0)//Position - 0x9A83D
{
	func_427(iParam0, 12, 42, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
}

void func_999(var uParam0, int iParam1, var uParam2)//Position - 0x9C207
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -818.1516f, 176.7675f, 72.7135f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { -4.2602f, -0.0064f, -48.9658f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 45f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
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
		uParam0->f_10[1 /*57*/].f_2 = 3;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 2000;
		uParam0->f_10[1 /*57*/].f_6 = { -818.319f, 176.7892f, 72.7218f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -3.6262f, -0.0064f, -51.0333f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 45f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
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
		uParam0->f_10[2 /*57*/].f_2 = 3;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 6500;
		uParam0->f_10[2 /*57*/].f_6 = { -819.9017f, 177.3299f, 72.4137f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 2.432f, -0.0064f, -59.8801f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 45f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 3;
		uParam0->f_10[2 /*57*/].f_29 = 1f;
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
		uParam0->f_10[3 /*57*/].f_2 = 3;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 2200;
		uParam0->f_10[3 /*57*/].f_6 = { -820.1751f, 177.1052f, 71.8574f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { -1.7255f, -0.0064f, -60.144f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 45f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 2;
		uParam0->f_10[3 /*57*/].f_23 = 0.2f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_2 = 3;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 3700;
		uParam0->f_10[4 /*57*/].f_6 = { -820.1777f, 177.1036f, 71.7557f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -1.7255f, -0.0064f, -60.144f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 45f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 2;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 2;
		uParam0->f_10[4 /*57*/].f_35 = 1f;
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
		uParam0->f_10[5 /*57*/].f_2 = 3;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { -820.1507f, 177.1195f, 72.805f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { -1.6181f, 0.1296f, -59.978f };
		uParam0->f_10[5 /*57*/].f_18 = 0;
		uParam0->f_10[5 /*57*/].f_19 = 0;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 45f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0.3f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 1;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 1;
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
		uParam0->f_10[7 /*57*/].f_2 = 3;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 0;
		uParam0->f_10[7 /*57*/].f_6 = { 1976.239f, 3820.676f, 32.5522f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { -5.6554f, 0.0838f, 87.401f };
		uParam0->f_10[7 /*57*/].f_18 = 0;
		uParam0->f_10[7 /*57*/].f_19 = 0;
		uParam0->f_10[7 /*57*/].f_20 = 0;
		uParam0->f_10[7 /*57*/].f_21 = 45f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0.5f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 1;
		uParam0->f_10[7 /*57*/].f_29 = 1f;
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
		uParam0->f_10[8 /*57*/].f_2 = 3;
		uParam0->f_10[8 /*57*/].f_3 = -1;
		uParam0->f_10[8 /*57*/].f_4 = 0;
		uParam0->f_10[8 /*57*/].f_5 = 600;
		uParam0->f_10[8 /*57*/].f_6 = { 1976.1722f, 3820.6797f, 33.2294f };
		uParam0->f_10[8 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_12 = 0f;
		uParam0->f_10[8 /*57*/].f_16 = 0f;
		uParam0->f_10[8 /*57*/].f_17 = 0;
		uParam0->f_10[8 /*57*/].f_9 = { -5.6609f, 0.0878f, 87.4019f };
		uParam0->f_10[8 /*57*/].f_18 = 0;
		uParam0->f_10[8 /*57*/].f_19 = 0;
		uParam0->f_10[8 /*57*/].f_20 = 0;
		uParam0->f_10[8 /*57*/].f_21 = 45f;
		uParam0->f_10[8 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[8 /*57*/].f_27 = 0;
		uParam0->f_10[8 /*57*/].f_50 = 0;
		uParam0->f_10[8 /*57*/].f_51 = 0f;
		uParam0->f_10[8 /*57*/].f_52 = 0f;
		uParam0->f_10[8 /*57*/].f_22 = 0.5f;
		uParam0->f_10[8 /*57*/].f_53 = 2;
		uParam0->f_10[8 /*57*/].f_23 = 0.2f;
		uParam0->f_10[8 /*57*/].f_28 = 0;
		uParam0->f_10[8 /*57*/].f_29 = 0f;
		uParam0->f_10[8 /*57*/].f_32 = 0.67f;
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
		uParam0->f_10[9 /*57*/].f_2 = 3;
		uParam0->f_10[9 /*57*/].f_3 = -1;
		uParam0->f_10[9 /*57*/].f_4 = 0;
		uParam0->f_10[9 /*57*/].f_5 = 3700;
		uParam0->f_10[9 /*57*/].f_6 = { 1976.1354f, 3820.5784f, 33.5507f };
		uParam0->f_10[9 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_12 = 0f;
		uParam0->f_10[9 /*57*/].f_16 = 0f;
		uParam0->f_10[9 /*57*/].f_17 = 0;
		uParam0->f_10[9 /*57*/].f_9 = { -5.6609f, 0.0878f, 87.4019f };
		uParam0->f_10[9 /*57*/].f_18 = 0;
		uParam0->f_10[9 /*57*/].f_19 = 0;
		uParam0->f_10[9 /*57*/].f_20 = 0;
		uParam0->f_10[9 /*57*/].f_21 = 45f;
		uParam0->f_10[9 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[9 /*57*/].f_27 = 0;
		uParam0->f_10[9 /*57*/].f_50 = 0;
		uParam0->f_10[9 /*57*/].f_51 = 0f;
		uParam0->f_10[9 /*57*/].f_52 = 0f;
		uParam0->f_10[9 /*57*/].f_22 = 0.3f;
		uParam0->f_10[9 /*57*/].f_53 = 2;
		uParam0->f_10[9 /*57*/].f_23 = 0.2f;
		uParam0->f_10[9 /*57*/].f_28 = 0;
		uParam0->f_10[9 /*57*/].f_29 = 0f;
		uParam0->f_10[9 /*57*/].f_32 = 0f;
		uParam0->f_10[9 /*57*/].f_30 = 0;
		uParam0->f_10[9 /*57*/].f_31 = 0;
		uParam0->f_10[9 /*57*/].f_33 = 1f;
		uParam0->f_10[9 /*57*/].f_34 = 0;
		uParam0->f_10[9 /*57*/].f_35 = 0f;
		uParam0->f_10[9 /*57*/].f_36 = 0;
		uParam0->f_10[9 /*57*/].f_37 = 0;
		uParam0->f_10[9 /*57*/].f_39 = 0f;
		uParam0->f_10[9 /*57*/].f_40 = 0f;
		uParam0->f_10[9 /*57*/].f_41 = 0;
		uParam0->f_10[9 /*57*/].f_42 = 0;
		uParam0->f_10[9 /*57*/].f_43 = 0;
		uParam0->f_10[9 /*57*/].f_38 = 0f;
		uParam0->f_10[9 /*57*/].f_45 = 0;
		uParam0->f_10[9 /*57*/].f_46 = 0;
		uParam0->f_10[9 /*57*/].f_47 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[9 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[10 /*57*/].f_2 = 3;
		uParam0->f_10[10 /*57*/].f_3 = -1;
		uParam0->f_10[10 /*57*/].f_4 = 0;
		uParam0->f_10[10 /*57*/].f_5 = 2000;
		uParam0->f_10[10 /*57*/].f_6 = { 1976.0815f, 3820.4841f, 34.051f };
		uParam0->f_10[10 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_12 = 0f;
		uParam0->f_10[10 /*57*/].f_16 = 0f;
		uParam0->f_10[10 /*57*/].f_17 = 0;
		uParam0->f_10[10 /*57*/].f_9 = { -4.9828f, 0.0878f, 87.4019f };
		uParam0->f_10[10 /*57*/].f_18 = 0;
		uParam0->f_10[10 /*57*/].f_19 = 0;
		uParam0->f_10[10 /*57*/].f_20 = 0;
		uParam0->f_10[10 /*57*/].f_21 = 45f;
		uParam0->f_10[10 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[10 /*57*/].f_27 = 0;
		uParam0->f_10[10 /*57*/].f_50 = 0;
		uParam0->f_10[10 /*57*/].f_51 = 0f;
		uParam0->f_10[10 /*57*/].f_52 = 0f;
		uParam0->f_10[10 /*57*/].f_22 = 0f;
		uParam0->f_10[10 /*57*/].f_53 = 2;
		uParam0->f_10[10 /*57*/].f_23 = 0.2f;
		uParam0->f_10[10 /*57*/].f_28 = 0;
		uParam0->f_10[10 /*57*/].f_29 = 0f;
		uParam0->f_10[10 /*57*/].f_32 = 0f;
		uParam0->f_10[10 /*57*/].f_30 = 0;
		uParam0->f_10[10 /*57*/].f_31 = 0;
		uParam0->f_10[10 /*57*/].f_33 = 1f;
		uParam0->f_10[10 /*57*/].f_34 = 0;
		uParam0->f_10[10 /*57*/].f_35 = 0f;
		uParam0->f_10[10 /*57*/].f_36 = 0;
		uParam0->f_10[10 /*57*/].f_37 = 0;
		uParam0->f_10[10 /*57*/].f_39 = 0f;
		uParam0->f_10[10 /*57*/].f_40 = 0f;
		uParam0->f_10[10 /*57*/].f_41 = 0;
		uParam0->f_10[10 /*57*/].f_42 = 0;
		uParam0->f_10[10 /*57*/].f_43 = 0;
		uParam0->f_10[10 /*57*/].f_38 = 0f;
		uParam0->f_10[10 /*57*/].f_45 = 0;
		uParam0->f_10[10 /*57*/].f_46 = 0;
		uParam0->f_10[10 /*57*/].f_47 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[10 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 11;
		uParam0->f_1218 = 6;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile1_FranklinToMichael.txt";
		uParam0->f_1225 = "CameraInfo_Exile1_FranklinToMichael.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_1001()//Position - 0x9D679
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_77[1]))
	{
		PED::DELETE_PED(&(uLocal_77[1]));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_117(1));
	PED::ADD_RELATIONSHIP_GROUP("Enemy Group", &iLocal_516);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_516);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_516, joaat("PLAYER"));
	STREAMING::SET_STREAMING(true);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__::func_323())
		{
			if (!CUTSCENE::WAS_CUTSCENE_SKIPPED() && !bLocal_197)
			{
				func_187(0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1);
			}
			else
			{
				func_940();
				SYSTEM::WAIT(0);
				func_187(0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1);
			}
		}
		else if (func_1003())
		{
		}
		else
		{
			iVar0 = __LIB_0__::func_344();
			if (iVar0 == 0)
			{
				func_187(0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1);
			}
			else
			{
				func_187(iVar0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1);
			}
		}
		if (!bLocal_195)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
	iLocal_54 = 6;
}

int func_1003()//Position - 0x9D7AD
{
	int iVar0;
	if (__LIB_0__::func_323())
	{
		if (Global_94618 == 1)
		{
			switch (__LIB_0__::func_344())
			{
				case 0:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
				case 2:
					iVar0 = 3;
					break;
				case 3:
					iVar0 = 4;
					break;
				case 4:
					iVar0 = 4;
					bLocal_195 = true;
					break;
				case 5:
					iVar0 = 6;
					break;
				case 6:
					iVar0 = 7;
					break;
				case 7:
					iVar0 = 7;
					bLocal_195 = true;
					break;
			}
			func_881();
			func_187(iVar0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1);
			if (!bLocal_195)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			return 1;
		}
	}
	return 0;
}

void func_1007(bool bParam0)//Position - 0x9D896
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_117(8), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_117(12), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_117(10), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_117(9), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_117(11), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_117(7), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_117(5), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_117(2), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cuban800"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("stunt"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("titan"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("jet"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("shamal"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("luxor"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mammatus"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("velum"), bParam0);
}

void func_1009(bool bParam0)//Position - 0x9D977
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1902.7424f, 4689.5273f, 0f, 2188.9465f, 4834.0786f, 100.69606f, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1003.4f, 2968.3f, -10f, 1778f, 3357.1f, 150f, bParam0, true);
}

void func_1010()//Position - 0x9D9C5
{
	int iVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("EXL1_MISSION_FAILED");
	func_281();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	__LIB_17__::func_450(1, 1, 1, 0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	HUD::SET_RADAR_ZOOM_PRECISE(0f);
	AUDIO::SET_VEHICLE_CONVERSATIONS_PERSIST(false, false);
	__LIB_0__::func_620(0);
	HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	if (ENTITY::DOES_ENTITY_EXIST(Local_62[0 /*3*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_62[0 /*3*/], false))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_62[0 /*3*/], false, 1);
		}
	}
	GRAPHICS::DISABLE_SCUFF_DECALS(false);
	__LIB_0__::func_429();
	TASK::REMOVE_COVER_POINT(iLocal_184);
	TASK::REMOVE_COVER_POINT(iLocal_185);
	TASK::REMOVE_COVER_POINT(iLocal_186);
	STREAMING::SET_STREAMING(true);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_683))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_683);
	}
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_684))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_684);
	}
	HUD::CLEAR_GPS_FLAGS();
	MISC::SET_WIND(-1f);
	MISC::SET_WIND_DIRECTION(-1f);
	PED::RESET_AI_WEAPON_DAMAGE_MODIFIER();
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_687))
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_687))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_687);
		}
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	if (iLocal_501 >= 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), iLocal_501);
	}
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 0, 0);
	GRAPHICS::SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_166[1], false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_166[1], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_166[1], false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_166[2], false))
	{
		VEHICLE::ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(iLocal_166[2]);
		if (iLocal_56 == 5 || (iLocal_56 == 7 && !bLocal_302))
		{
			if (iLocal_352)
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_166[2]));
			}
			else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166[2]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_166[2]);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_166[2], true);
				VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(iLocal_166[2], true);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iLocal_515[iVar0])
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_514[iVar0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_514[iVar0], false);
			}
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0f);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 215, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 216, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 217, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 221, false);
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
			{
				if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
		}
	}
	func_1011();
	CUTSCENE::REMOVE_CUTSCENE();
	func_1009(1);
	__LIB_16__::func_18(0);
	func_1007(0);
	if (!PED::IS_PED_INJURED(iLocal_161))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_161);
	}
	if (iLocal_194)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161))
		{
			PED::DELETE_PED(&iLocal_161);
		}
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_503))
	{
		AUDIO::STOP_SOUND(iLocal_503);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_504))
	{
		AUDIO::STOP_SOUND(iLocal_504);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_505))
	{
		AUDIO::STOP_SOUND(iLocal_505);
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_506))
	{
		AUDIO::STOP_SOUND(iLocal_506);
	}
	AUDIO::RELEASE_SOUND_ID(iLocal_503);
	AUDIO::RELEASE_SOUND_ID(iLocal_504);
	AUDIO::RELEASE_SOUND_ID(iLocal_505);
	AUDIO::RELEASE_SOUND_ID(iLocal_506);
	iVar0 = 0;
	while (iVar0 < Local_68.f_0)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_68[iVar0 /*14*/].f_12))
		{
			AUDIO::STOP_SOUND(Local_68[iVar0 /*14*/].f_12);
		}
		AUDIO::RELEASE_SOUND_ID(Local_68[iVar0 /*14*/].f_12);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(func_812(iVar0));
		iVar0++;
	}
	AUDIO::STOP_STREAM();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1011()//Position - 0x9DD3F
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_671(0);
	__LIB_0__::func_345(&Local_28, 0, 0);
	func_175(3);
	func_175(11);
	func_175(19);
	iLocal_403 = 0;
	iLocal_408 = 0;
}

void func_1012()//Position - 0x9DDAC
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
				if (!func_6(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_6();
		}
	}
}

void func_1014()//Position - 0x9DE5D
{
	__LIB_17__::func_63(2, 0);
	__LIB_0__::func_507(-822.2574f, 177.27713f, 70.32091f, 107.4f);
}

