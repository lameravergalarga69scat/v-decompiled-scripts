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
	struct<110> Local_28[4];
	struct<94> Local_29 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = -1;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	struct<8> Local_46[5];
	int iLocal_47[1] = { 0 };
	struct<4> Local_48 = { 0, 0, 0, 0 } ;
	char cLocal_49[64] = "";
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	char cLocal_59[24] = "";
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	bool bLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 30;
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
	var uLocal_221 = 10;
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
	var uLocal_272 = 10;
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
	var uLocal_343 = 20;
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
	var uLocal_444 = 20;
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
	var uLocal_545 = 30;
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
	var uLocal_726 = 5;
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
	var uLocal_757 = 7;
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
	var uLocal_807 = 5;
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
	var uLocal_833 = 3;
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
	var uLocal_849 = 21;
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
	var uLocal_974 = 10;
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
	var uLocal_1025 = 5;
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
	var uLocal_1051 = 5;
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
	int* iLocal_1080 = NULL;
	var uLocal_1081 = 3;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 1092616192;
	var uLocal_1088 = 1101004800;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 3;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	struct<8> Local_1105[5];
	struct<32> Local_1106[20];
	char cLocal_1107[32] = "";
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 16;
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
	bool bLocal_1277 = 0;
	int iLocal_1278 = 0;
	int iLocal_1279 = 0;
	int iLocal_1280 = 0;
	int iLocal_1281 = 0;
	int iLocal_1282 = 0;
	int iLocal_1283 = 0;
	char cLocal_1284[16] = "";
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	char cLocal_1287[16] = "";
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	int iLocal_1290 = 0;
	float fLocal_1291 = 0f;
	int iLocal_1292 = 0;
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295 = 0;
	int iLocal_1296 = 0;
	int iLocal_1297 = 0;
	char cLocal_1298[16] = "";
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	bool bLocal_1303 = 0;
	int iLocal_1304 = 0;
	int iLocal_1305 = 0;
	int iLocal_1306 = 0;
	int iLocal_1307 = 0;
	struct<2> Local_1308 = { 0, 0 } ;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	struct<2> Local_1311 = { 0, 0 } ;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	int iLocal_1314 = 0;
	bool bLocal_1315 = 0;
	int iLocal_1316 = 0;
	int iLocal_1317 = 0;
	int iLocal_1318 = 0;
	bool bLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	int iLocal_1325 = 0;
	int iLocal_1326 = 0;
	int iLocal_1327 = 0;
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
	StringCopy(&Local_48, "JHP1ADS", 16);
	StringCopy(&cLocal_49, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_58 = { 154.94778f, -3092.5234f, 4.911984f };
	StringCopy(&cLocal_59, "jhp1a_sec_arrive", 24);
	iLocal_63 = 0;
	iLocal_69 = 6;
	iLocal_1278 = -1;
	iLocal_1282 = -1;
	iLocal_1283 = -1;
	StringCopy(&cLocal_1284, "", 16);
	StringCopy(&cLocal_1287, "", 16);
	fLocal_1291 = 100000000f;
	iLocal_1294 = 1;
	iLocal_1297 = -1;
	StringCopy(&cLocal_1298, "", 16);
	iLocal_1301 = -1;
	iLocal_1302 = 1;
	iLocal_1306 = -1;
	iLocal_1307 = -1;
	StringCopy(&Local_1308, "", 16);
	StringCopy(&Local_1311, "", 16);
	iLocal_1314 = 1;
	iLocal_1316 = 1;
	iLocal_1320 = -1;
	iLocal_1322 = -1;
	iLocal_1323 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_300(6);
	}
	MISC::SET_MISSION_FLAG(true);
	func_293();
	func_252();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_JewelStoreJobPrep1A", 0);
		if (bLocal_68)
		{
			func_250();
		}
		func_247(&uLocal_70);
		func_189();
		if (!bLocal_66)
		{
			func_187();
			func_176();
			__LIB_29__.func_739(&Local_1105);
		}
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x143
{
	switch (iLocal_63)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		case 1:
			func_2();
			break;
	}
}

void func_2()//Position - 0x175
{
	int iVar0;
	if ((iLocal_1323 != -1 && ENTITY::DOES_ENTITY_EXIST(Local_46[iLocal_1323 /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iLocal_1323 /*8*/], false))
	{
		iVar0 = ENTITY::GET_ENTITY_HEALTH(Local_46[iLocal_1323 /*8*/]);
		__LIB_0__.func_320(Local_46[iLocal_1323 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_96866 = 1000;
	}
	else
	{
		Global_96866 = iVar0;
	}
	if (!__LIB_29__.func_738(&(Local_1105[3 /*8*/])))
	{
		__LIB_0__.func_498(699);
	}
	func_8(0);
	if (__LIB_0__.func_176(88))
	{
		__LIB_6__.func_823(0, 1);
	}
	else
	{
		__LIB_6__.func_823(0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_8(bool bParam0)//Position - 0x3B0
{
	int iVar0;
	int iVar1;
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (bParam0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	PED::SET_CREATE_RANDOM_COPS(true);
	__LIB_39__.func_440(&Local_1105);
	__LIB_20__.func_618(&iLocal_1080, 1, 0);
	bLocal_1277 = false;
	iLocal_1278 = -1;
	iLocal_1317 = 0;
	iLocal_1318 = 0;
	bLocal_1319 = false;
	iLocal_1320 = -1;
	iLocal_1322 = -1;
	iLocal_1323 = -1;
	iLocal_1324 = 0;
	iLocal_1325 = 0;
	iLocal_1321 = 0;
	if (bParam0)
	{
		__LIB_6__.func_771();
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		MISC::CLEAR_AREA_OF_PEDS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_COPS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_OBJECTS(158.78f, -3100.44f, 6.0019f, 100f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(158.78f, -3100.44f, 6.0019f, 100f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA_OF_PROJECTILES(158.78f, -3100.44f, 6.0019f, 100f, 0);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_47[iVar0]))
		{
			if (bParam0)
			{
				OBJECT::DELETE_OBJECT(&(iLocal_47[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_47[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_29, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					PED::DELETE_PED(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				VEHICLE::DELETE_VEHICLE(&(Local_46[iVar0 /*8*/]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (AUDIO::IS_ALARM_PLAYING(&cLocal_49))
	{
		AUDIO::STOP_ALARM(&cLocal_49, bParam0);
	}
	if (iLocal_1327 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1327, false);
	}
	__LIB_11__.func_729();
}

void func_10(int* iParam0, bool bParam1)//Position - 0x615
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
	iParam0->f_5 = 0;
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_39 = 0;
	iParam0->f_41 = 0;
	iParam0->f_93 = 1;
	iParam0->f_102 = 0;
	iParam0->f_47 = 0;
	iParam0->f_46 = 0;
	iParam0->f_48 = 0;
	iParam0->f_37 = -1;
	iParam0->f_103 = -1;
	iParam0->f_40 = 0;
	iParam0->f_92 = -1;
	iParam0->f_43 = { 0f, 0f, 0f };
	iParam0->f_88 = { 0f, 0f, 0f };
	iParam0->f_91 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_105))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0->f_105))
		{
			ENTITY::DETACH_ENTITY(iParam0->f_105, true, true);
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(&(iParam0->f_105));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_105));
		}
	}
	iParam0->f_106 = -1;
	iParam0->f_107 = 0;
	iParam0->f_109 = 0;
	iParam0->f_104 = 0;
}

void func_24(int iParam0)//Position - 0xAD8
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_64 = 0;
		bLocal_65 = false;
		iLocal_63 = iParam0;
	}
}

int func_25()//Position - 0xAF6
{
	bool bVar0;
	if (!bLocal_65)
	{
		__LIB_11__.func_726(&uLocal_70, "SCRIPT\JWL_HA_RAID_STORE");
		__LIB_11__.func_689(&uLocal_70, joaat("S_M_M_Security_01"));
		__LIB_29__.func_740(&(Local_1105[1 /*8*/]), 0, 0, 1);
		__LIB_29__.func_740(&(Local_1105[0 /*8*/]), 0, 0, 1);
		__LIB_29__.func_740(&(Local_1105[4 /*8*/]), 0, 0, 1);
		__LIB_41__.func_636(0f, 0f, 0f, 0f, 1, __LIB_18__.func_173());
		Global_96866 = 1000;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		__LIB_0__.func_210("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_65 = true;
	}
	if (bLocal_65)
	{
		switch (iLocal_64)
		{
			case 0:
				if (func_105(1) == 0)
				{
					__LIB_20__.func_618(&iLocal_1080, 1, 0);
					__LIB_0__.func_320(0, -1);
					__LIB_0__.func_409(0, -1);
				}
				else if ((func_103() && ENTITY::DOES_ENTITY_EXIST(Local_46[func_102() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[func_102() /*8*/], false))
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					if (iLocal_1323 != func_102())
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
						__LIB_0__.func_320(Local_46[func_102() /*8*/], -1);
						__LIB_0__.func_409(Local_46[func_102() /*8*/], -1);
						iLocal_1323 = func_102();
					}
					if (func_100(&iLocal_1080, 692.8256f, -1012.5445f, 21.722f, 692.9143f, -1003.5558f, 21.508389f, 692.6511f, -1021.6041f, 26.206753f, 9.75f, 1, Local_46[func_102() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_64++;
					}
				}
				else if (func_99())
				{
					VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
					__LIB_38__.func_120(&iLocal_1080, 692.8256f, -1012.5445f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_1324, "", "", "", 1, 0, 1, -1);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_46[func_54() /*8*/], 692.9143f, -1003.5558f, 21.508389f, 692.6511f, -1021.6041f, 26.206753f, 9.75f, false, true, 0))
					{
						iLocal_64++;
					}
				}
				else
				{
					__LIB_11__.func_718(&iLocal_1080);
					__LIB_0__.func_320(0, -1);
					__LIB_0__.func_409(0, -1);
				}
				break;
			case 1:
				if (func_103())
				{
					if (__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_99())
				{
					if (__LIB_6__.func_762(iLocal_1324, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (__LIB_0__.func_176(88))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
						ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
						__LIB_12__.func_13(1);
						__LIB_11__.func_315(1, 0);
						iLocal_64 = 1000;
					}
					else
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
						iLocal_64++;
					}
					if (func_103())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_46[iLocal_1323 /*8*/], false);
					}
					else if (func_99())
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_46[func_54() /*8*/], false);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_46[func_54() /*8*/], true);
						VEHICLE::DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Local_46[func_54() /*8*/]);
					}
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				break;
			case 2:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
				break;
			case 1000:
				__LIB_11__.func_315(1, 0);
				if (!__LIB_11__.func_693())
				{
					__LIB_6__.func_833();
				}
				else
				{
					__LIB_0__.func_203(&uLocal_1112, 3, 0, "LESTER", 0, 1);
					if (__LIB_38__.func_30(&uLocal_1112, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_64++;
					}
				}
				break;
			case 1001:
				__LIB_11__.func_315(1, 0);
				if (__LIB_10__.func_9())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
					iLocal_64++;
				}
				break;
			case 1002:
				__LIB_11__.func_315(1, 0);
				if (!__LIB_10__.func_9())
				{
					__LIB_9__.func_995();
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_54()//Position - 0x1AFF
{
	int iVar0;
	if (func_99())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1324, Local_46[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_99()//Position - 0x43EF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1324, false))
	{
		return 1;
	}
	return 0;
}

bool func_100(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, int iParam11, bool bParam12, int iParam13)//Position - 0x4413
{
	return __LIB_32__.func_737(iParam0, Param1, __LIB_11__.func_167(), Param2, Param3, bParam5, 5, 0, 0, 0, iParam6, sParam7, __LIB_0__.func_459(), __LIB_0__.func_459(), __LIB_0__.func_459(), __LIB_0__.func_459(), sParam8, 0, bParam10, sParam9, 1, iParam11, bParam12, iParam13, __LIB_0__.func_459(), __LIB_0__.func_459(), __LIB_0__.func_459(), 1, fParam4);
}

int func_102()//Position - 0x4473
{
	int iVar0;
	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[iVar0 /*8*/], true))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_103()//Position - 0x44DA
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[iVar0 /*8*/], false))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_105(bool bParam0)//Position - 0x4549
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(Local_46[iVar1 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar1 /*8*/], false)) && !__LIB_30__.func_884(Local_46[iVar1 /*8*/])) && (!bParam0 || func_106(Local_46[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_106(int iParam0)//Position - 0x45B4
{
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == iLocal_1281)
	{
		if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 500f)
		{
			return 1;
		}
	}
	else if (__LIB_0__.func_76(iParam0, PLAYER::PLAYER_PED_ID(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

void func_176()//Position - 0xB3DC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bVar2 = false;
	if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 70f)
	{
		HUD::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	if (iLocal_1322 == 9)
	{
		if (!iLocal_1321)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_1321 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_29.f_0))
		{
			if (__LIB_0__.func_76(Local_29.f_0, PLAYER::PLAYER_PED_ID(), 1) > 300f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_29);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1324) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1324, false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_1324, Local_46[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_1324 = 0;
		}
	}
	if (func_186())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), Local_46[iVar0 /*8*/]))
				{
					iLocal_1324 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			iVar0++;
		}
	}
	func_179();
	if (iLocal_63 == 0)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 182.95369f, -3119.8838f, 101.92259f, 115f, 260f, 120f, false, true, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_28[iVar1 /*110*/], 1) > 300f) && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 300f)
				{
					PED::DELETE_PED(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/]));
					if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (__LIB_30__.func_884(Local_46[iVar0 /*8*/]))
				{
					if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_106(Local_46[iVar0 /*8*/]))
				{
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_46[iVar0 /*8*/]) == iLocal_1281)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_1322 == 9 && func_102() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_46[func_102() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[func_102() /*8*/], false)) && !__LIB_30__.func_884(Local_46[func_102() /*8*/])) || (((iLocal_1322 == 10 && func_54() != -1) && ENTITY::DOES_ENTITY_EXIST(Local_46[func_54() /*8*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[func_54() /*8*/], false)))
			{
				if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
				}
			}
			else if ((((ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false)) && !__LIB_30__.func_884(Local_46[iVar0 /*8*/])) && func_106(Local_46[iVar0 /*8*/])) && iLocal_64 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
				{
					Local_46[iVar0 /*8*/].f_1 = __LIB_6__.func_825(Local_46[iVar0 /*8*/], 0, 0);
					HUD::SET_BLIP_PRIORITY(Local_46[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_1322 == 9 || iLocal_1322 == 10)
		{
			if (__LIB_0__.func_405("JHP1A_BKIN", 0, 0) || __LIB_0__.func_405("JHP1A_BKINANY", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		else if (iLocal_64 == 0)
		{
			if (!iLocal_1316)
			{
				if (func_105(1) == 1)
				{
					__LIB_0__.func_210("JHP1A_BKIN", 7500, 1);
				}
				iLocal_1316 = 1;
			}
		}
		if (func_105(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_300(iVar4);
			}
		}
	}
}

void func_179()//Position - 0xB851
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[3 /*8*/], true))
		{
			iLocal_1322 = 11;
		}
		else if (func_185())
		{
			iLocal_1322 = 7;
		}
		else if (func_184())
		{
			iLocal_1322 = 6;
		}
		else if (func_103())
		{
			iLocal_1322 = 9;
			iLocal_1316 = 0;
		}
		else if (func_99())
		{
			iLocal_1322 = 10;
		}
		else if (func_183())
		{
			iLocal_1322 = 8;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1325) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1325, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1325, true)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1325, Local_58, 119.72285f, -3092.4724f, 13.461255f, 44f, false, true, 0))
		{
			iLocal_1322 = 5;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_182()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_58, 119.72285f, -3092.4724f, 13.461255f, 44f, false, true, 0))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 5;
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_58, 119.72285f, -3092.4724f, 13.461255f, 44f, false, true, 0))
		{
			iLocal_1322 = 2;
		}
		else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_1325) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1325, false)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1325, true)) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1325, 170.8236f, -3092.4058f, 4.849259f, 154.32996f, -3092.4502f, 9.783653f, 14.0625f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iLocal_1325, 115.75562f, -3092.2944f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1322 = 4;
		}
		else if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !func_182()) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 170.8236f, -3092.4058f, 4.849259f, 154.32996f, -3092.4502f, 9.783653f, 14.0625f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 115.75562f, -3092.2944f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 4;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !func_182()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_58, 119.72285f, -3092.4724f, 13.461255f, 44f, false, true, 0))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 3;
		}
		else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !func_182()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 170.8236f, -3092.4058f, 4.849259f, 154.32996f, -3092.4502f, 9.783653f, 14.0625f, false, true, 0))
		{
			iLocal_1325 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			iLocal_1322 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.75562f, -3092.2944f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_1322 = 1;
		}
		else
		{
			iLocal_1325 = 0;
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_1322 = 0;
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 115.75562f, -3092.2944f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_1322 = 0;
			}
			else
			{
				iLocal_1322 = -1;
			}
		}
		if (iLocal_1322 == 1)
		{
			if (func_181(Local_28[0 /*110*/]))
			{
				__LIB_11__.func_168(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_181(Local_28[0 /*110*/]))
		{
			__LIB_11__.func_168(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_1319)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 155, true);
		}
		if ((iLocal_1322 != -1 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && PED::IS_COP_PED_IN_AREA_3D(Vector(101.92259f, -3119.8838f, 182.95369f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.92259f, -3119.8838f, 182.95369f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

int func_181(int iParam0)//Position - 0xBD61
{
	if (iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0))
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

int func_182()//Position - 0xBDCF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
		{
			if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_183()//Position - 0xBE1B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_46[iVar0 /*8*/], PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_184()//Position - 0xBE5D
{
	int iVar0;
	if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == Local_46[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_185()//Position - 0xBEBB
{
	int iVar0;
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[iVar0 /*8*/], true))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_186()//Position - 0xBF34
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_187()//Position - 0xBF85
{
	int iVar0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_300(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					__LIB_0__.func_499(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
				else
				{
					__LIB_0__.func_499(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
			}
			if (!func_181(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_46.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && Local_46[iVar0 /*8*/].f_7)
		{
			if (!func_181(Local_46[iVar0 /*8*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_46[iVar0 /*8*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_46[iVar0 /*8*/].f_1));
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_46[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

void func_189()//Position - 0xC2AA
{
	struct<3> Var0;
	float fVar1;
	if (bLocal_66 == 1)
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
			func_24(iLocal_67);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			func_8(1);
			if (!__LIB_0__.func_295())
			{
				func_245(iLocal_63, &Var0, &fVar1);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_11__.func_727(&uLocal_70, Var0, 50f, 0);
			}
			__LIB_11__.func_701(&uLocal_70);
			switch (iLocal_63)
			{
				case 0:
					__LIB_11__.func_689(&uLocal_70, joaat("burrito2"));
					__LIB_11__.func_689(&uLocal_70, joaat("S_M_Y_PestCont_01"));
					__LIB_11__.func_689(&uLocal_70, joaat("S_M_M_Security_01"));
					__LIB_11__.func_689(&uLocal_70, joaat("dilettante2"));
					__LIB_11__.func_689(&uLocal_70, joaat("p_amb_clipboard_01"));
					__LIB_11__.func_697(&uLocal_70, &cLocal_59);
					__LIB_11__.func_695(&uLocal_70, "misslsdhsclipboard@base");
					__LIB_11__.func_695(&uLocal_70, "misslsdhsclipboard@idle_a");
					__LIB_11__.func_695(&uLocal_70, "misstrevor3");
					__LIB_29__.func_734(&uLocal_70, iLocal_1281);
					if (((__LIB_24__.func_934() && !VEHICLE::IS_THIS_MODEL_A_BOAT(__LIB_9__.func_997())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_9__.func_997())) && !VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_9__.func_997()))
					{
						__LIB_11__.func_689(&uLocal_70, __LIB_9__.func_997());
					}
					break;
				case 1:
					__LIB_11__.func_689(&uLocal_70, joaat("burrito2"));
					break;
			}
			while (!func_236(&uLocal_70))
			{
				SYSTEM::WAIT(0);
				func_187();
			}
			switch (iLocal_63)
			{
				case 0:
					if (((__LIB_24__.func_934() && !VEHICLE::IS_THIS_MODEL_A_BOAT(__LIB_9__.func_997())) && !VEHICLE::IS_THIS_MODEL_A_PLANE(__LIB_9__.func_997())) && !VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_9__.func_997()))
					{
						while (!__LIB_26__.func_580())
						{
							SYSTEM::WAIT(0);
						}
						Local_46[4 /*8*/] = __LIB_39__.func_860(189.3979f, -2932.7214f, 5.6127f, 180.5455f);
					}
					if (__LIB_0__.func_295())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_46[4 /*8*/]))
						{
							__LIB_6__.func_775(Local_46[4 /*8*/], -1, 1);
						}
						else
						{
							__LIB_6__.func_775(0, -1, 1);
						}
					}
					else
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						if (ENTITY::DOES_ENTITY_EXIST(Local_46[4 /*8*/]))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_46[4 /*8*/], -1);
						}
					}
					while (!func_190(0))
					{
						SYSTEM::WAIT(0);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 1:
					if (!__LIB_0__.func_176(88))
					{
						Local_46[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 693.725f, -1006.3015f, 21.8355f, 359.884f, true, true, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_46[0 /*8*/], false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_46[0 /*8*/], 5f);
					}
					if (__LIB_0__.func_295())
					{
						__LIB_6__.func_775(0, -1, 1);
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
				if (!__LIB_0__.func_176(88) || iLocal_63 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			bLocal_66 = false;
		}
	}
}

int func_190(bool bParam0)//Position - 0xC602
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
		{
			Local_46[0 /*8*/] = Global_96938[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[0 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
		{
			Local_46[1 /*8*/] = Global_96938[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[1 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
		{
			Local_46[2 /*8*/] = Global_96938[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[2 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_96938.f_9[0];
			if (!PED::IS_PED_INJURED(Local_28[1 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[1 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[1 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_96938.f_28[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[1 /*110*/].f_105, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_96938.f_9[2];
			if (!PED::IS_PED_INJURED(Local_28[0 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[0 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[0 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_96938.f_9[3];
			if (!PED::IS_PED_INJURED(Local_28[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[2 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[2 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_96938.f_9[4];
			if (!PED::IS_PED_INJURED(Local_28[3 /*110*/]))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_28[3 /*110*/], false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_28[3 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[5]))
		{
			Local_29.f_0 = Global_96938.f_9[5];
			if (!PED::IS_PED_INJURED(Local_29.f_0))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_29.f_0, false, 1);
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_29.f_0, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938[3]))
		{
			Local_46[3 /*8*/] = Global_96938[3];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_46[3 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_46[0 /*8*/]))
		{
			Local_46[0 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, true, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_46[1 /*8*/]))
		{
			Local_46[1 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, true, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/]))
		{
			Local_46[2 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("burrito2"), 129.9696f, -3089.3313f, 4.8796f, 269.9255f, true, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 126.2174f, -3089.3833f, 4.9199f, 275.4068f, true, true);
			ENTITY::SET_ENTITY_HEALTH(Local_28[1 /*110*/], 150, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[1 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[1 /*110*/], 0, 1, 0, false);
			PED::SET_PED_PROP_INDEX(Local_28[1 /*110*/], 1, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[1 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = OBJECT::CREATE_OBJECT(joaat("p_amb_clipboard_01"), PED::GET_PED_BONE_COORDS(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], PED::GET_PED_BONE_INDEX(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 155.74f, -3098.89f, 5.93f, 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[0 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[0 /*110*/], 0, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[0 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 159.8f, -3085.96f, 6f, 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[2 /*110*/], 10, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[2 /*110*/], 1, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[2 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = PED::CREATE_PED(26, joaat("S_M_Y_PestCont_01"), 159.06f, -3085f, 6.01f, 0f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 4, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_28[3 /*110*/], 10, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_28[3 /*110*/], 0, 0, 0, false);
			PED::SET_PED_LOD_MULTIPLIER(Local_28[3 /*110*/], 2f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_29.f_0) && !ENTITY::DOES_ENTITY_EXIST(Local_46[3 /*8*/]))
		{
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				Local_46[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, true, true, false);
				Local_29.f_0 = PED::CREATE_PED_INSIDE_VEHICLE(Local_46[3 /*8*/], 26, joaat("S_M_M_Security_01"), -1, true, true);
			}
			else
			{
				Local_46[3 /*8*/] = VEHICLE::CREATE_VEHICLE(joaat("dilettante2"), 169.3554f, -3110.0254f, 4.8228f, 88.4411f, true, true, false);
				Local_29.f_0 = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 161.7414f, -3117.0742f, 4.9643f, 333.7041f, true, true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_46[0 /*8*/]))
	{
		__LIB_10__.func_728(Local_46[0 /*8*/], 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_46[0 /*8*/], 7);
		VEHICLE::SET_VEHICLE_ALARM(Local_46[0 /*8*/], true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_46[0 /*8*/], true);
		Local_46[0 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_46[1 /*8*/]))
	{
		__LIB_10__.func_728(Local_46[1 /*8*/], 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_46[1 /*8*/], true, true, false);
		VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_46[1 /*8*/], 4, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[1 /*8*/], 0, true, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[1 /*8*/], 4, false, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_46[1 /*8*/], true);
		Local_46[1 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/]))
	{
		__LIB_10__.func_728(Local_46[2 /*8*/], 2);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[2 /*8*/], 2, true, false);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_46[2 /*8*/], 3, true, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_46[2 /*8*/], true);
		Local_46[2 /*8*/].f_7 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[1 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[1 /*110*/], iLocal_1279);
		AUDIO::STOP_PED_SPEAKING(Local_28[1 /*110*/], true);
		__LIB_11__.func_168(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[0 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[0 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[0 /*110*/], iLocal_1279);
		AUDIO::STOP_PED_SPEAKING(Local_28[0 /*110*/], true);
		__LIB_11__.func_168(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		PED::SET_PED_HEARING_RANGE(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[2 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[2 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[2 /*110*/], iLocal_1279);
		__LIB_11__.func_168(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_28[2 /*110*/], true);
		PED::SET_PED_HEARING_RANGE(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_28[3 /*110*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_28[3 /*110*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_28[3 /*110*/], iLocal_1279);
		PED::SET_PED_HEARING_RANGE(Local_28[3 /*110*/], 50f);
		__LIB_11__.func_168(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		AUDIO::STOP_PED_SPEAKING(Local_28[3 /*110*/], true);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_29.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_46[3 /*8*/]))
	{
		PED::SET_PED_NAME_DEBUG(Local_29.f_0, &(Local_29.f_1));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_29.f_0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_29.f_0, iLocal_1279);
		PED::SET_PED_TARGET_LOSS_RESPONSE(Local_29.f_0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_29.f_0, 2, false);
		WEAPON::GIVE_WEAPON_TO_PED(Local_29.f_0, joaat("WEAPON_NIGHTSTICK"), -1, false, true);
		PED::SET_PED_ACCURACY(Local_29.f_0, 5);
		__LIB_11__.func_168(Local_29.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_29.f_1), "sec", 16);
		Local_29.f_86 = 1;
		Local_29.f_87 = 1;
		Local_29.f_93 = 0;
		if (Global_96938.f_357 == 1)
		{
			if (!__LIB_0__.func_583(Local_29.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
			{
				if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, true))
				{
					iLocal_1326 = 0;
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_46[3 /*8*/], &cLocal_59, 786599, 0, 0, -1, -1f, false, 2f);
					TASK::TASK_LEAVE_VEHICLE(0, Local_46[3 /*8*/], 0);
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(Local_29.f_0, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!__LIB_0__.func_583(Local_29.f_0, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS"), 1))
		{
			if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, true))
			{
				iLocal_1326 = 1;
				TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Local_29.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((ENTITY::DOES_ENTITY_EXIST(Local_46[0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_46[1 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_46[3 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[1 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[0 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[2 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_28[3 /*110*/])) && ENTITY::DOES_ENTITY_EXIST(Local_29.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_236(var uParam0)//Position - 0xF01C
{
	if (func_247(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_245(int iParam0, var uParam1, var uParam2)//Position - 0xF5E7
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		case 1:
			*uParam1 = { 692.067f, -1004.8117f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

int func_247(var uParam0)//Position - 0xF64F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (uParam0->f_1007)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (STREAMING::HAS_MODEL_LOADED((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED((uParam0[iVar1 /*5*/])->f_4);
						__LIB_11__.func_694(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						STREAMING::REMOVE_ANIM_DICT(uParam0->f_273[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						TASK::REMOVE_WAYPOINT_RECORDING(uParam0->f_374[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_656[iVar1 /*6*/].f_5));
						__LIB_11__.func_694(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_RECORDING(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (WEAPON::HAS_WEAPON_ASSET_LOADED(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						WEAPON::REMOVE_WEAPON_ASSET(uParam0->f_202[iVar1 /*7*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(uParam0->f_151[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4, false, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uParam0->f_737[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (INTERIOR::IS_INTERIOR_READY(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						INTERIOR::UNPIN_INTERIOR(uParam0->f_763[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = GRAPHICS::QUERY_MOVIE_MESH_SET_STATE(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								__LIB_11__.func_694(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (INTERIOR::IS_INTERIOR_READY(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = GRAPHICS::LOAD_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = MISC::GET_GAME_TIMER();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							GRAPHICS::RELEASE_MOVIE_MESH_SET(uParam0->f_687[iVar1 /*7*/].f_5);
							__LIB_11__.func_694(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						__LIB_11__.func_694(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_904[iVar1 /*5*/])
			{
				if (!uParam0->f_904[iVar1 /*5*/].f_1)
				{
					if (TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED(uParam0->f_904[iVar1 /*5*/].f_4))
					{
						uParam0->f_904[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_904[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_904[iVar1 /*5*/].f_1)
					{
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE(uParam0->f_904[iVar1 /*5*/].f_4);
						__LIB_11__.func_694(&(uParam0->f_904[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_955[iVar1 /*5*/])
			{
				if (!uParam0->f_955[iVar1 /*5*/].f_1)
				{
					if (AUDIO::PREPARE_ALARM(uParam0->f_955[iVar1 /*5*/].f_4))
					{
						uParam0->f_955[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_955[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_955[iVar1 /*5*/].f_1)
					{
						__LIB_11__.func_694(&(uParam0->f_955[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						HUD::CLEAR_ADDITIONAL_TEXT(iVar1, true);
						__LIB_11__.func_694(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_885)
		{
			if (!uParam0->f_885.f_1)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					uParam0->f_885.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_885.f_2)
			{
				if (uParam0->f_885.f_1)
				{
					STREAMING::REMOVE_PTFX_ASSET();
					__LIB_11__.func_694(&(uParam0->f_885));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_889)
		{
			if (!uParam0->f_889.f_1)
			{
				if (PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					uParam0->f_889.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_889.f_2)
			{
				if (uParam0->f_889.f_1)
				{
					PHYSICS::ROPE_UNLOAD_TEXTURES();
					__LIB_11__.func_694(&(uParam0->f_889));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_893 && STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			if (!uParam0->f_893.f_1)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					uParam0->f_893.f_1 = 1;
					if (uParam0->f_1008)
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						__LIB_11__.func_721(uParam0);
						uParam0->f_1008 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_893.f_2)
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				__LIB_11__.func_694(&(uParam0->f_893));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_981[iVar1 /*5*/])
			{
				if (!uParam0->f_981[iVar1 /*5*/].f_1)
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam0->f_981[iVar1 /*5*/].f_4))
					{
						uParam0->f_981[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_981[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_981[iVar1 /*5*/].f_1)
					{
						__LIB_11__.func_694(&(uParam0->f_981[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1 = (iVar1 + 1);
		}
		if (bVar0)
		{
			uParam0->f_1007 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_250()//Position - 0x10057
{
	if (__LIB_0__.func_204())
	{
		func_8(1);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_252()//Position - 0x1009C
{
	__LIB_29__.func_743(&(Local_1105[1 /*8*/]), 68936/*func_271*/, "AI Controller");
	__LIB_29__.func_743(&(Local_1105[0 /*8*/]), 67301/*func_262*/, "Dialogue");
	__LIB_29__.func_743(&(Local_1105[3 /*8*/]), 66328/*func_257*/, "Alarms & Wanted Level");
	__LIB_29__.func_743(&(Local_1105[4 /*8*/]), 65776/*func_253*/, "Music Manager");
}

void func_253(var uParam0)//Position - 0x100F0
{
	if (!__LIB_29__.func_737(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((AUDIO::IS_ALARM_PLAYING(&cLocal_49) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || __LIB_29__.func_738(&(Local_1105[3 /*8*/])))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_ATTACK");
				__LIB_29__.func_741(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_START");
					__LIB_29__.func_741(uParam0, 2, 0);
				}
				break;
			case 2:
				if (iLocal_1322 == 3 || iLocal_1322 == 2)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_WAREHOUSE");
					__LIB_29__.func_741(uParam0, 3, 0);
				}
				break;
			case 3:
				if (iLocal_1322 == 6 || iLocal_1322 == 9)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_VAN");
					__LIB_29__.func_741(uParam0, 4, 0);
				}
				break;
			case 4:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (iLocal_1322 == 9 && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_1"))
						{
							AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_1");
							__LIB_29__.func_742(uParam0);
						}
					}
				}
				break;
			case 5:
				if ((AUDIO::IS_ALARM_PLAYING(&cLocal_49) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && iLocal_1318)
				{
					__LIB_29__.func_741(uParam0, 6, 0);
				}
				break;
			case 6:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("JHP1A_RADIO_2"))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_RADIO_2");
						__LIB_29__.func_741(uParam0, 6, 0);
						__LIB_29__.func_742(uParam0);
					}
				}
				break;
			}
	}
	if (__LIB_29__.func_737(uParam0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
}

void func_257(var uParam0)//Position - 0x10318
{
	if (!__LIB_29__.func_737(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				__LIB_29__.func_741(uParam0, 2, 2000);
				break;
			case 2:
				if (AUDIO::PREPARE_ALARM(&cLocal_49))
				{
					AUDIO::START_ALARM(&cLocal_49, false);
					func_260(&cLocal_1107, Local_58, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_1107, "", 32);
					__LIB_29__.func_741(uParam0, 3, 5000);
				}
				break;
			case 3:
				func_258(&Local_29, 3, 1, "ALARM EVENT SET IT", 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				PLAYER::SET_MAX_WANTED_LEVEL(2);
				PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
				PED::SET_CREATE_RANDOM_COPS(false);
				PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				uParam0->f_2 = MISC::GET_GAME_TIMER() + 15000;
				__LIB_29__.func_741(uParam0, 4, 0);
				break;
			case 4:
				if (MISC::GET_GAME_TIMER() > uParam0->f_2)
				{
					PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
					PED::SET_CREATE_RANDOM_COPS(true);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					iLocal_1318 = 1;
					__LIB_29__.func_742(uParam0);
				}
				PLAYER::UPDATE_WANTED_POSITION_THIS_FRAME(PLAYER::PLAYER_ID());
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				break;
			}
	}
}

int func_258(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)//Position - 0x1042D
{
	return func_259(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_259(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x10449
{
	if (func_181(*uParam0))
	{
		if (!bParam5 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = MISC::GET_GAME_TIMER();
			if (iParam1 != uParam0->f_5 || !MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam7)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam6;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = MISC::GET_GAME_TIMER();
				if (!__LIB_0__.func_86(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam4 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam4))
				{
					uParam0->f_91 = iParam4;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_260(char* sParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1051C
{
	struct<32> Var0;
	Var0.f_0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam3;
	Var0.f_26 = fParam2;
	Var0.f_29 = iParam4;
	Var0.f_30 = iParam5;
	Var0.f_31 = iParam6;
	Var0.f_23 = { Param1 };
	func_261(&Var0, 0);
}

int func_261(var uParam0, char* sParam1)//Position - 0x10568
{
	int iVar0;
	int iVar1;
	if ((MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1)) && *uParam0 != -1) && (!ENTITY::DOES_ENTITY_EXIST(Local_28[*uParam0 /*110*/]) || PED::IS_PED_INJURED(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1106[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1106.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (MISC::IS_STRING_NULL_OR_EMPTY(sParam1) || MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_17))))
		{
			Local_1106[iVar0 /*32*/] = *uParam0;
			Local_1106[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1106[iVar0 /*32*/].f_23 = { ENTITY::GET_ENTITY_COORDS(Local_28[*uParam0 /*110*/], true) };
			}
			else
			{
				Local_1106[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1106[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1106[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1106[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1106[iVar0 /*32*/].f_27 = MISC::GET_GAME_TIMER();
			Local_1106[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1106[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_262(var uParam0)//Position - 0x106E5
{
	char cVar0[24];
	bool bVar1;
	struct<3> Var2;
	if (!__LIB_29__.func_737(uParam0))
	{
		if (__LIB_0__.func_75())
		{
			iLocal_1278 = -1;
		}
		else if (iLocal_1278 == -1)
		{
			iLocal_1278 = MISC::GET_GAME_TIMER();
			iLocal_1301 = -1;
			iLocal_1302 = 1;
		}
		if (iLocal_1282 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1284))
		{
			if (((Local_28[iLocal_1282 /*110*/] != 0 && ENTITY::DOES_ENTITY_EXIST(Local_28[iLocal_1282 /*110*/])) && !PED::IS_PED_INJURED(Local_28[iLocal_1282 /*110*/])) && !PED::IS_CONVERSATION_PED_DEAD(Local_28[iLocal_1282 /*110*/]))
			{
				if (!PED::IS_PED_RAGDOLL(Local_28[iLocal_1282 /*110*/]))
				{
					if (__LIB_0__.func_75())
					{
						if (iLocal_1292 && (iLocal_1302 || iLocal_1283 > iLocal_1301))
						{
							if (bLocal_1303)
							{
								iLocal_1306 = iLocal_1297;
								iLocal_1307 = iLocal_1301;
								MemCopy(&Local_1308, {__LIB_0__.func_390()}, 4);
								MemCopy(&Local_1311, {__LIB_0__.func_389()}, 4);
								iLocal_1314 = iLocal_1302;
								bLocal_1315 = iLocal_1304;
							}
							if (iLocal_1293)
							{
								__LIB_6__.func_771();
							}
							else
							{
								__LIB_6__.func_833();
							}
						}
					}
					if (__LIB_11__.func_693())
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_1278) > iLocal_1290)
						{
							if (__LIB_15__.func_56(iLocal_1282))
							{
								MemCopy(&cVar0, {Local_48}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_1282)
							{
								case 0:
									__LIB_0__.func_203(&uLocal_1112, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								case 1:
									__LIB_0__.func_203(&uLocal_1112, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								case 2:
									__LIB_0__.func_203(&uLocal_1112, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								case 3:
									__LIB_0__.func_203(&uLocal_1112, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1287))
							{
								if (__LIB_35__.func_536(&uLocal_1112, &cVar0, &cLocal_1284, 8, 0, 0, 0))
								{
									bVar1 = true;
								}
							}
							else if (__LIB_36__.func_42(&uLocal_1112, &cVar0, &cLocal_1284, &cLocal_1287, 8, 0, 0))
							{
								bVar1 = true;
							}
							if (bVar1)
							{
								func_261(&(Local_28[iLocal_1282 /*110*/].f_50), &cLocal_1284);
								iLocal_1301 = iLocal_1283;
								iLocal_1302 = iLocal_1294;
								bLocal_1303 = iLocal_1296;
								iLocal_1304 = iLocal_1295;
								iLocal_1282 = -1;
								iLocal_1283 = -1;
								StringCopy(&cLocal_1284, "", 16);
								iLocal_1290 = 0;
								fLocal_1291 = 9999999f;
								iLocal_1292 = 0;
								iLocal_1293 = 0;
								iLocal_1294 = 1;
								iLocal_1296 = 0;
								iLocal_1295 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1282 = -1;
				iLocal_1283 = -1;
				StringCopy(&cLocal_1284, "", 16);
				iLocal_1290 = 0;
				fLocal_1291 = 9999999f;
				iLocal_1292 = 0;
				iLocal_1293 = 0;
				iLocal_1294 = 1;
				iLocal_1295 = 0;
			}
		}
		if (((__LIB_0__.func_75() && iLocal_1297 != -1) && iLocal_1304) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1298))
		{
			Var2 = { ENTITY::GET_ENTITY_COORDS(Local_28[iLocal_1297 /*110*/], true) };
			if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Var2, 1) >= 25f)
			{
				iLocal_1306 = iLocal_1297;
				iLocal_1307 = iLocal_1301;
				MemCopy(&Local_1308, {__LIB_0__.func_390()}, 4);
				MemCopy(&Local_1311, {__LIB_0__.func_389()}, 4);
				iLocal_1314 = iLocal_1302;
				bLocal_1315 = iLocal_1304;
				__LIB_6__.func_771();
				iLocal_1297 = -1;
				iLocal_1301 = -1;
				StringCopy(&cLocal_1298, "", 16);
				iLocal_1302 = 0;
				iLocal_1304 = 0;
			}
		}
		if (iLocal_1306 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1308))
		{
			if (Local_28[iLocal_1306 /*110*/].f_5 > iLocal_1307)
			{
				iLocal_1306 = -1;
				iLocal_1307 = -1;
				StringCopy(&Local_1308, "", 16);
				StringCopy(&Local_1311, "", 16);
				iLocal_1314 = 1;
			}
		}
		if (iLocal_1282 == -1 && MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_1284))
		{
			if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 10000)
			{
				if (iLocal_1306 != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_1308))
				{
					func_264(iLocal_1306, &Local_1308, iLocal_1307, 0, 0, iLocal_1314, 0, 1, &Local_1311, bLocal_1315);
					iLocal_1306 = -1;
					iLocal_1307 = -1;
					StringCopy(&Local_1308, "", 16);
					StringCopy(&Local_1311, "", 16);
					iLocal_1314 = 1;
				}
			}
		}
	}
	__LIB_11__.func_93(bLocal_1315);
}

int func_264(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)//Position - 0x10AB8
{
	float fVar0;
	bool bVar1;
	fVar0 = __LIB_0__.func_76(Local_28[iParam0 /*110*/], PLAYER::PLAYER_PED_ID(), 1);
	if ((iParam2 > iLocal_1283 || iParam2 == 4) || ((iParam2 == iLocal_1283 && (fVar0 < fLocal_1291 || (__LIB_15__.func_56(iParam0) && !__LIB_15__.func_56(iLocal_1282)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_1282 = iParam0;
			iLocal_1283 = iParam2;
			StringCopy(&cLocal_1284, sParam1, 16);
			StringCopy(&cLocal_1287, sParam8, 16);
			fLocal_1291 = fVar0;
			iLocal_1292 = iParam3;
			iLocal_1293 = iParam4;
			iLocal_1290 = iParam6;
			iLocal_1294 = iParam5;
			iLocal_1296 = iParam7;
			iLocal_1295 = iParam9;
			return 1;
		}
	}
	return 0;
}

void func_271(var uParam0)//Position - 0x10D48
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	if (!__LIB_29__.func_737(uParam0))
	{
		bLocal_1319 = true;
		if (!iLocal_1317)
		{
			if (func_183())
			{
				iLocal_1317 = 1;
				iLocal_1320 = MISC::GET_GAME_TIMER();
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_1320) > 3000)
		{
			iLocal_1317 = 0;
			iLocal_1320 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_291(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_291(&Local_29);
		}
		iVar1 = 0;
		while (iVar1 < Local_1106.f_0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1106[iVar1 /*32*/].f_1)) && Local_1106[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1106[iVar1 /*32*/].f_28 == -1 || (MISC::GET_GAME_TIMER() - Local_1106[iVar1 /*32*/].f_27) < Local_1106[iVar1 /*32*/].f_28)
				{
					if (Local_1106[iVar1 /*32*/].f_29 <= 0 || (MISC::GET_GAME_TIMER() - Local_1106[iVar1 /*32*/].f_27) > Local_1106[iVar1 /*32*/].f_29)
					{
						if (Local_1106[iVar1 /*32*/] != -1 && func_181(Local_28[Local_1106[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(Local_28[Local_1106[iVar1 /*32*/] /*110*/], true) };
							Local_1106[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1106[iVar1 /*32*/].f_23 };
						}
						if (!__LIB_29__.func_738(&(Local_1105[3 /*8*/])))
						{
							if (Local_1106[iVar1 /*32*/].f_31 && MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Local_58, true) < 35f)
							{
								__LIB_29__.func_740(&(Local_1105[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28.f_0)
						{
							if (Local_1106[iVar1 /*32*/] == -1 || (iVar0 != Local_1106[iVar1 /*32*/] && Local_28[Local_1106[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/]) && !PED::IS_PED_INJURED(Local_28[iVar0 /*110*/]))
								{
									if (__LIB_0__.func_529(Local_28[iVar0 /*110*/], Var2, 1) < (Local_1106[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1106[iVar1 /*32*/].f_30)
										{
											if (!__LIB_29__.func_738(&(Local_1105[3 /*8*/])))
											{
												__LIB_29__.func_740(&(Local_1105[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_1107, {Local_1106[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((MISC::GET_GAME_TIMER() - Local_1106[iVar1 /*32*/].f_27) > Local_1106[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1106[iVar1 /*32*/].f_1), "", 64);
					Local_1106[iVar1 /*32*/] = -1;
					Local_1106[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1106[iVar1 /*32*/].f_26 = 0f;
					Local_1106[iVar1 /*32*/].f_27 = -1;
					Local_1106[iVar1 /*32*/].f_28 = -1;
					Local_1106[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_285(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_276(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_181(Local_28[iVar0 /*110*/]))
			{
				func_275(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_181(Local_29.f_0))
		{
			func_273(&Local_29);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!ENTITY::DOES_ENTITY_EXIST(Local_28[iVar0 /*110*/]) || PED::IS_PED_INJURED(Local_28[iVar0 /*110*/])) || PED::IS_PED_RUNNING_RAGDOLL_TASK(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar3 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar4 = true;
				}
				if (bVar3 || bVar4)
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						ENTITY::DETACH_ENTITY(Local_28[iVar0 /*110*/].f_105, true, true);
					}
					if (bVar3)
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar4)
					{
						OBJECT::DELETE_OBJECT(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && STREAMING::HAS_MODEL_LOADED(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = OBJECT::CREATE_OBJECT(Local_28[iVar0 /*110*/].f_107, PED::GET_PED_BONE_COORDS(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), true, true, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], PED::GET_PED_BONE_INDEX(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_28[iVar1 /*110*/]) && !PED::IS_PED_INJURED(Local_28[iVar1 /*110*/]))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_28[iVar1 /*110*/]);
				WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_272();
	}
	if (__LIB_29__.func_737(uParam0))
	{
	}
}

void func_272()//Position - 0x11273
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_181(Local_46[iVar0 /*8*/]))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_46[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_273(int iParam0)//Position - 0x112A6
{
	int iVar0;
	int iVar1;
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*iParam0);
	if (func_274(*iParam0))
	{
		Local_29.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (CLOCK::GET_CLOCK_HOURS() >= 5 && CLOCK::GET_CLOCK_HOURS() < 21)
			{
				if ((!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS"), 1) && !__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1)) || iLocal_1326)
				{
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(203.68f, -3132.46f, 4.79f, 1f, true))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_1326 = 0;
					}
				}
			}
			else if (!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS"), 1) || !iLocal_1326)
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(162.69f, -3115.67f, 4.95f, 1f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_1326 = 1;
				}
			}
			break;
		case 3:
			PED::SET_PED_USING_ACTION_MODE(*iParam0, true, -1, "DEFAULT_ACTION");
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case joaat("FIGHT_RETURN"):
				case joaat("RAN_OVER"):
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("WEAPON_PISTOL"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("WEAPON_NIGHTSTICK"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("WEAPON_NIGHTSTICK"), -1, true, true);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true))
					{
						if (iVar0 != joaat("WEAPON_NIGHTSTICK"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_NIGHTSTICK"), false);
						}
					}
					break;
				case joaat("killed"):
				case joaat("PLAYER_KILLED"):
				case joaat("DEAD_BODY"):
				case joaat("PLAYER_KO"):
				case joaat("GUN_AIMED_AT"):
				case joaat("PROJ_AIMED"):
				case joaat("gunshot"):
				case joaat("SEEN_WEAPON"):
				case joaat("STEALING_VAN"):
				case joaat("GET_IN_VAN"):
				case joaat("STEALING_SEC_CAR"):
					if (WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("WEAPON_NIGHTSTICK"), false))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(*iParam0, joaat("WEAPON_NIGHTSTICK"));
					}
					if (!WEAPON::HAS_PED_GOT_WEAPON(*iParam0, joaat("WEAPON_PISTOL"), false))
					{
						WEAPON::GIVE_WEAPON_TO_PED(*iParam0, joaat("WEAPON_PISTOL"), -1, true, true);
					}
					if (WEAPON::GET_CURRENT_PED_WEAPON(*iParam0, &iVar0, true))
					{
						if (iVar0 != joaat("WEAPON_PISTOL"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*iParam0, joaat("WEAPON_PISTOL"), false);
						}
					}
					break;
			}
			if (!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_COMBAT"), 1) || func_274(*iParam0))
			{
				TASK::TASK_COMBAT_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::TASK_LOOK_AT_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
			break;
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("HEARD_SEC_CAR"):
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, ENTITY::GET_ENTITY_COORDS(iParam0->f_91, true), 180f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000)
						{
							if (!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), 1) || func_274(*iParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET"), 1) || func_274(*iParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				case joaat("HEARD_PLAYER"):
					if (iParam0->f_41 && !__LIB_0__.func_394(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!__LIB_0__.func_86(iParam0->f_88))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*iParam0, iParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - iParam0->f_37) < 5000)
						{
							if ((!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1) || func_274(*iParam0)) || iVar1)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, 0);
								TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1) || func_274(*iParam0)) || iVar1)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				case -1940555668:
					break;
				case joaat("SOUND_LOST"):
					if (!__LIB_0__.func_86(iParam0->f_88))
					{
						if (!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1) || func_274(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*iParam0, iParam0->f_88, -1);
							TASK::TASK_LOOK_AT_COORD(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
				case joaat("VAN_LOST"):
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_91))
					{
						if (!__LIB_0__.func_583(*iParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), 1) || func_274(*iParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iParam0->f_91, -1);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_274(struct<26> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84)//Position - 0x117A1
{
	if (Param0.f_5 != Param0.f_7 || !MISC::ARE_STRINGS_EQUAL(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_275(var uParam0)//Position - 0x117CD
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam0);
	if (func_274(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28.f_0)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS"), 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(155.74f, -3098.89f, 4.93f, 0.5f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					case 1:
						if ((!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) || func_274(*uParam0)) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base"))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
								if (!__LIB_0__.func_394(ENTITY::GET_ENTITY_COORDS(*uParam0, true), 126.8496f, -3089.2493f, 4.9141f, 0.75f, 0))
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 126.8496f, -3089.2493f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								TASK::TASK_ACHIEVE_HEADING(0, 264.2812f, 0);
								TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
								TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_46[2 /*8*/]))
							{
								TASK::TASK_LOOK_AT_COORD(*uParam0, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_46[2 /*8*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_46[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 2) || uParam0->f_46 == 2) && MISC::GET_GAME_TIMER() > uParam0->f_37)
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0f, false, false, false);
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
										TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
										uParam0->f_46 = 1;
									}
									break;
								case 1:
									if (TASK::GET_SEQUENCE_PROGRESS(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					case 2:
					case 3:
						if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS"), 1))
						{
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.82f, -3085.93f, 5f, 0.1f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(160.15f, -3084.79f, 4.99f, 0.1f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (TASK::DOES_SCENARIO_EXIST_IN_AREA(159.09f, -3085.02f, 5.01f, 0.1f, true))
							{
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		case 1:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case joaat("HEARD_VAN"):
				case joaat("CHECK_DRIVER"):
				case joaat("SEE_VAN_LEAVING"):
				case joaat("SEE_VAN_LEAVING_1"):
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, ENTITY::GET_ENTITY_COORDS(uParam0->f_91, true), 180f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000)
						{
							if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), 1) || func_274(*uParam0))
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
								TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET"), 1) || func_274(*uParam0))
						{
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				case joaat("HEARD_PLAYER"):
					if (uParam0->f_41 && !__LIB_0__.func_394(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar3 = 1;
					}
					if (!__LIB_0__.func_86(uParam0->f_88))
					{
						if (!PED::IS_PED_HEADING_TOWARDS_POSITION(*uParam0, uParam0->f_88, 90f) && (MISC::GET_GAME_TIMER() - uParam0->f_37) < 5000)
						{
							if ((!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1) || func_274(*uParam0)) || iVar3)
							{
								TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, 0);
								TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1) || func_274(*uParam0)) || iVar3)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				case -1940555668:
					break;
				case joaat("SOUND_LOST"):
					if (!__LIB_0__.func_86(uParam0->f_88))
					{
						if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_COORD"), 1) || func_274(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(*uParam0, uParam0->f_88, -1);
							TASK::TASK_LOOK_AT_COORD(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
				case joaat("VAN_LOST"):
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_91))
					{
						if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY"), 1) || func_274(*uParam0))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(*uParam0, uParam0->f_91, -1);
							TASK::TASK_LOOK_AT_ENTITY(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(*uParam0, -1);
					}
					break;
			}
			break;
		case 2:
			if (((MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_FOOT_LEAVE") || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "ENT_VEH_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_FOOT_LEAVE")) || MISC::ARE_STRINGS_EQUAL(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_274(*uParam0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_STAND_STILL(0, 2000);
					TASK::SET_SEQUENCE_TO_REPEAT(iLocal_1280, true);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
					TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1325) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1325, false))
				{
					fVar6 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_1325, 1);
				}
				if ((iLocal_1322 == 3 || iLocal_1322 == 2) || iLocal_1322 == 8)
				{
					iVar4 = PLAYER::PLAYER_PED_ID();
					fVar7 = 2f;
				}
				else if (iLocal_1322 == 0 || iLocal_1322 == 1)
				{
					iVar4 = PLAYER::PLAYER_PED_ID();
					fVar7 = 1f;
				}
				else if (iLocal_1322 == 5 && ENTITY::DOES_ENTITY_EXIST(iLocal_1325))
				{
					if (fVar6 > 10f)
					{
						iVar4 = PLAYER::PLAYER_PED_ID();
						fVar7 = 2f;
					}
					else
					{
						iVar4 = iLocal_1325;
						fVar7 = 2f;
					}
				}
				else if (iLocal_1322 == 4 && ENTITY::DOES_ENTITY_EXIST(iLocal_1325))
				{
					iVar4 = iLocal_1325;
					fVar7 = 1f;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					fVar5 = __LIB_0__.func_76(*uParam0, iVar4, 1);
				}
				if (fVar5 <= 7.5f)
				{
					if (((!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) && !__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY"), 1)) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_274(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_1280, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
				}
				else if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_GO_TO_ENTITY"), 1) || func_274(*uParam0))
				{
					if (fVar7 > 1f)
					{
						fVar8 = 6f;
					}
					else
					{
						fVar8 = 3f;
					}
					TASK::TASK_GO_TO_ENTITY(*uParam0, iVar4, -1, fVar8, fVar7, 2f, 0);
					TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
			break;
		case 3:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case joaat("FIGHT_RETURN"):
				case joaat("RAN_OVER"):
				case joaat("WH_FAILED_LEAVE"):
				case joaat("STEALING_VAN"):
				case joaat("GET_IN_VAN"):
				case joaat("EXIT_VAN"):
				case joaat("PLAYER_KO"):
					if (WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar9, true))
					{
						if (iVar9 != joaat("WEAPON_UNARMED"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), false);
						}
					}
					if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_COMBAT"), 1))
					{
						TASK::TASK_COMBAT_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				case joaat("FIGHT_ESC"):
					if ((!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) || !PED::IS_PED_FACING_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 90f)) || func_274(*uParam0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 2000);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_1280, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_1280);
						TASK::TASK_PERFORM_SEQUENCE(*uParam0, iLocal_1280);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_1280);
						TASK::TASK_LOOK_AT_ENTITY(*uParam0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					break;
			}
			break;
		case 5:
			if (__LIB_0__.func_529(*uParam0, 177.7484f, -3240.8967f, 4.6079f, 1) < 15f)
			{
				if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_SMART_FLEE_PED"), 1))
				{
					TASK::TASK_SMART_FLEE_PED(*uParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				}
			}
			else if ((!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_SMART_FLEE_PED"), 1) && !__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD"), 1)) || func_274(*uParam0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam0, 177.7484f, -3240.8967f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
			}
			break;
		case 4:
			switch (MISC::GET_HASH_KEY(&(uParam0->f_9)))
			{
				case joaat("GUN_AIMED_AT"):
					if (!__LIB_0__.func_583(*uParam0, joaat("SCRIPT_TASK_HANDS_UP"), 1) || func_274(*uParam0))
					{
						TASK::TASK_HANDS_UP(*uParam0, -1, PLAYER::PLAYER_PED_ID(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_276(int iParam0)//Position - 0x122B8
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, true);
	fVar1 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("WEAPON_UNARMED"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_283(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_258(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 88))
	{
		func_258(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_282(4))
	{
		func_258(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_281(*iParam0, 2))
	{
		func_258(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_258(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 11)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_SEC_CAR", Local_46[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 6)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 10)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 3, "STEALING_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 42)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 114)) || func_278(*iParam0, 0))
	{
		func_258(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 103)) || func_278(*iParam0, 1))
	{
		func_258(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_258(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_258(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1106.f_0 - 1))
	{
		bVar8 = Local_1106[iParam0->f_34 /*32*/].f_30;
		switch (MISC::GET_HASH_KEY(&(Local_1106[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case joaat("PLAYER_KILLED"):
			case joaat("DEAD_BODY"):
			case joaat("PLAYER_KO"):
			case joaat("GUN_AIMED_AT"):
			case joaat("PROJ_AIMED"):
			case joaat("SEEN_WEAPON"):
			case joaat("fight"):
			case joaat("FIGHT_RETURN"):
			case joaat("RAN_OVER"):
			case joaat("STEALING_VAN"):
			case joaat("GET_IN_VAN"):
			case joaat("gunshot"):
			case joaat("STEALING_SEC_CAR"):
				func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			case joaat("HEARD_PLAYER"):
				func_277(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 0, bVar8);
				break;
			case joaat("HEARD_VAN"):
			case joaat("HEARD_SEC_CAR"):
				func_280(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), Local_46[func_102() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		case 1:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("VAN_LOST"):
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				case joaat("HEARD_PLAYER"):
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && __LIB_0__.func_529(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_258(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				case joaat("SOUND_LOST"):
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case joaat("FIGHT_RETURN"):
				case joaat("RAN_OVER"):
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 65f) && (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				case joaat("killed"):
				case joaat("PLAYER_KILLED"):
				case joaat("DEAD_BODY"):
				case joaat("PLAYER_KO"):
				case joaat("GUN_AIMED_AT"):
				case joaat("PROJ_AIMED"):
				case joaat("gunshot"):
				case joaat("SEEN_WEAPON"):
				case joaat("STEALING_VAN"):
				case joaat("GET_IN_VAN"):
				case joaat("STEALING_SEC_CAR"):
					if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 300f && __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 150f)
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_277(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam4, int iParam5, bool bParam6)//Position - 0x129DC
{
	return func_259(iParam0, iParam1, sParam2, Param3, 0, bParam4, iParam5, bParam6);
}

int func_278(struct<110> Param0, bool bParam1)//Position - 0x129F9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_279(Param0, Local_28[iVar0 /*110*/], bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_279(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, bool bParam220)//Position - 0x12A30
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam110) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam110, PLAYER::PLAYER_PED_ID(), bParam220))
	{
		if (__LIB_0__.func_76(iParam0, iParam110, 1) < 15f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x12A74
{
	return func_259(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)//Position - 0x12A91
{
	if ((iParam0 != 0 && ENTITY::DOES_ENTITY_EXIST(iParam0)) && !PED::IS_PED_INJURED(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam110) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)//Position - 0x12AE8
{
	if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam0) && (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
	{
		return 1;
	}
	return 0;
}

int func_283(struct<110> Param0, var uParam1, var uParam2, var uParam3)//Position - 0x12B1D
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_284(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam1 = bVar2;
				*uParam2 = bVar3;
				*uParam3 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam1 = 1;
				}
				if (bVar3)
				{
					*uParam2 = 1;
				}
				if (bVar4)
				{
					*uParam3 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*uParam2 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam1 = 0;
	*uParam2 = 0;
	*uParam3 = 0;
	return 0;
}

int func_284(struct<40> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, struct<104> Param71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80)//Position - 0x12BC6
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::DOES_ENTITY_EXIST(Param71.f_0) && PED::IS_PED_INJURED(Param71.f_0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Param71.f_0, false) };
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Param0.f_0, true), Var0, true) < 10f)
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Param0.f_0, Param71.f_0))
			{
				if ((MISC::GET_GAME_TIMER() - Param71.f_103) < 3000)
				{
					*uParam78 = 1;
				}
				else
				{
					*uParam78 = 0;
				}
				if (*uParam78)
				{
					iVar1 = PED::GET_PED_SOURCE_OF_DEATH(Param71.f_0);
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if ((iVar2 == PLAYER::PLAYER_PED_ID() && !PED::IS_PED_INJURED(iVar2)) && Param0.f_39)
						{
							*uParam79 = 1;
						}
						else
						{
							*uParam79 = 0;
						}
					}
					else
					{
						*uParam79 = 0;
					}
				}
				else
				{
					*uParam79 = 0;
				}
				iVar3 = PED::GET_PED_CAUSE_OF_DEATH(Param71.f_0);
				if (iVar3 == joaat("WEAPON_UNARMED") || (iVar3 != joaat("WEAPON_UNARMED") && WEAPON::GET_WEAPON_DAMAGE_TYPE(iVar3) == 2))
				{
					*uParam80 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_285(int iParam0)//Position - 0x12CB9
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar5;
	var uVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<6> Var12;
	bool bVar13;
	float fVar14;
	float fVar15;
	struct<3> Var16;
	struct<3> Var17;
	struct<4> Var18;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, true);
	fVar1 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), *iParam0, 1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam0))
	{
		iVar3 = 1;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, PLAYER::PLAYER_PED_ID(), true))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("WEAPON_UNARMED"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar5 = func_283(*iParam0, &uVar6, &bVar7, &bVar8);
	if (((iParam0->f_5 != 5 && uVar5) && uVar6) && !bVar8)
	{
		if (bVar7)
		{
			func_258(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_258(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 125)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 126)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 23)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 88))
	{
		func_258(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_282(4))
	{
		func_258(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_281(*iParam0, 2))
	{
		func_258(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 5))
	{
		func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 7)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 6)
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_1322 == 10)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 3, "STEALING_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_54() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 42)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 114)) || func_278(*iParam0, 0))
	{
		func_258(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 103)) || func_278(*iParam0, 1))
	{
		func_258(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_258(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar5)
	{
		if ((uVar6 && bVar7) && bVar8)
		{
			func_258(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar7)
		{
			func_258(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_1322 == 9) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER")) && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_280(iParam0, 1, "SEE_VAN_LEAVING", Local_46[func_102() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_280(iParam0, 1, "HEARD_VAN", Local_46[func_102() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_1322 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_1322 == 0 || iLocal_1322 == 1) || iLocal_1322 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_1322 == 3 || iLocal_1322 == 2) || iLocal_1322 == 5)))
		{
			if ((iLocal_1322 == 5 || iLocal_1322 == 4) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(*iParam0, iLocal_1325, 19))
			{
				switch (iLocal_1322)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_258(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_1322)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_258(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_277(iParam0, 1, "HEARD_PLAYER", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1106.f_0 - 1))
	{
		bVar9 = Local_1106[iParam0->f_34 /*32*/].f_30;
		switch (MISC::GET_HASH_KEY(&(Local_1106[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case joaat("PLAYER_KILLED"):
			case joaat("DEAD_BODY"):
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("PLAYER_KO"):
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("GUN_AIMED_AT"):
				if (iParam0->f_5 != 4)
				{
					if (__LIB_0__.func_529(*iParam0, Local_1106[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_258(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar9);
					}
					else
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar9);
					}
				}
				break;
			case joaat("PROJ_AIMED"):
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("SEEN_WEAPON"):
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("fight"):
			case joaat("FIGHT_RETURN"):
			case joaat("RAN_OVER"):
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("STEALING_VAN"):
			case joaat("GET_IN_VAN"):
			case joaat("EXIT_VAN"):
				if (((iParam0->f_5 != 4 && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "STEALING_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "GET_IN_VAN")) && !MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_258(iParam0, 3, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_258(iParam0, 5, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("ENT_FOOT"):
				if (iParam0->f_86)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("ENT_VEH"):
				if (iParam0->f_86)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("WH_FOOT"):
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("WH_VEH"):
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case -1349994105:
				if (iParam0->f_87)
				{
					func_258(iParam0, 2, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), 0, bVar9);
				}
				break;
			case joaat("HEARD_PLAYER"):
				if (iParam0->f_87)
				{
					func_277(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, 0, bVar9);
				}
				break;
			case joaat("HEARD_VAN"):
				if (iParam0->f_87)
				{
					func_280(iParam0, 1, &(Local_1106[iParam0->f_34 /*32*/].f_1), Local_46[func_102() /*8*/], 1, 0, bVar9);
				}
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!MISC::ARE_STRINGS_EQUAL(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar10 = 0;
	while (iVar10 < Local_28.f_0)
	{
		if (Local_28[iVar10 /*110*/] == *iParam0)
		{
			iVar11 = iVar10;
		}
		iVar10++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case joaat("SEEN_WEAPON"):
				case joaat("PROJ_AIMED"):
				case joaat("killed"):
				case joaat("PLAYER_KILLED"):
				case joaat("DEAD_BODY"):
					if ((func_290(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_181(Local_29.f_0))
					{
						if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("gunshot") || MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("SEEN_WEAPON")) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("PROJ_AIMED"))
						{
							if (__LIB_15__.func_56(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_GUN1") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_ARM1", 24);
										break;
									case 3:
										StringCopy(&Var12, "SOL1_ARM2", 24);
										break;
								}
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("killed") || MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("PLAYER_KILLED")) || MISC::GET_HASH_KEY(&(iParam0->f_9)) == joaat("DEAD_BODY"))
						{
							if (__LIB_15__.func_56(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_KILL") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_GETSEC") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SECIN1", 24);
									break;
								case 3:
									StringCopy(&Var12, "SOL1_SECIN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		case 4:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("GUN_AIMED"):
					if (func_281(*iParam0, 4))
					{
						func_258(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 1000)
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				case joaat("GUN_AIMED_AT"):
					if (func_281(*iParam0, 4))
					{
						func_258(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 15000 || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 3000) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_290(*iParam0) || iParam0->f_48 == 0)
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_HND1") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_HND1") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_SCAR1", 24);
									break;
								case 3:
									StringCopy(&Var12, "SOL1_SCAR2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		case 0:
			switch (iVar11)
			{
				case 1:
					if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
					{
						switch (iLocal_1305)
						{
							case 0:
								func_264(iVar11, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 1:
								func_264(iVar11, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 2:
								func_264(iVar11, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 3:
								func_264(iVar11, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 4:
								func_264(iVar11, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 5:
								func_264(iVar11, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 6:
								func_264(iVar11, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 7:
								func_264(iVar11, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 8:
								func_264(iVar11, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 9:
								func_264(iVar11, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305++;
								break;
							case 10:
								func_264(iVar11, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_1305 = 0;
								break;
							}
					}
					break;
				case 2:
					if (!iParam0->f_49)
					{
						if (func_264(iVar11, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							__LIB_0__.func_203(&uLocal_1112, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							__LIB_0__.func_203(&uLocal_1112, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		case 1:
			if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var16 = { __LIB_0__.func_79(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
				Var17 = { __LIB_0__.func_79(ENTITY::GET_ENTITY_COORDS(Local_28[iVar11 /*110*/], true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
				fVar14 = __LIB_0__.func_156(Var16, Var17);
				fVar15 = MISC::ACOS(fVar14);
				if ((fVar15 < 90f && fVar1 < 8f) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
				{
					bVar13 = true;
				}
			}
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("SEE_VAN_LEAVING"):
				case joaat("SEE_VAN_LEAVING_1"):
					if (func_290(*iParam0) && MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_LVE1") };
							func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar13)
					{
						func_280(iParam0, 1, "CHECK_DRIVER", Local_46[func_102() /*8*/], 0, 1, 0);
					}
					else if (__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_258(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				case joaat("VAN_LOST"):
					if (func_290(*iParam0))
					{
						Var12 = { func_289(iVar11, "JS_VAN_LVE2") };
						func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 3000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				case joaat("CHECK_DRIVER"):
					if (bVar13)
					{
						if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
						{
							func_258(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_280(iParam0, 1, "SEE_VAN_LEAVING_1", Local_46[func_102() /*8*/], 0, 1, 0);
					}
					break;
				case joaat("HEARD_PLAYER"):
					if (((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && __LIB_0__.func_529(*iParam0, iParam0->f_88, 1) < 3f) && TASK::IS_PED_STILL(*iParam0))
					{
						func_258(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_290(*iParam0))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SND_INV") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				case joaat("SOUND_LOST"):
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SNDLOST2") };
							func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_290(*iParam0))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_SNDLOST1") };
							func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		case 3:
			switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case joaat("FIGHT_RETURN"):
				case joaat("RAN_OVER"):
				case -419867425:
					if ((((MISC::GET_GAME_TIMER() - iParam0->f_38) > 8000 && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 65f) && (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > 10f || (MISC::GET_GAME_TIMER() - iParam0->f_38) > 16000)) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						func_258(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_290(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (__LIB_15__.func_56(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_MELE_1") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar11)
								{
									case 2:
										StringCopy(&Var12, "SOL1_FIGHT1", 24);
										break;
									case 3:
										StringCopy(&Var12, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_MELE_2") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_FIGHT1", 24);
									break;
								case 3:
									StringCopy(&Var12, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				case joaat("FIGHT_ESC"):
					if ((MISC::GET_GAME_TIMER() - iParam0->f_37) > 4000)
					{
						func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_290(*iParam0))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_MELE_ESC") };
							func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				case joaat("STEALING_VAN"):
					if (((((MISC::GET_GAME_TIMER() - iParam0->f_37) > 2000 && iParam0->f_39) && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)) && iLocal_1322 != 9) && iLocal_1322 != 10)
					{
						func_258(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_290(*iParam0))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN2") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 2000)
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_TK") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				case joaat("GET_IN_VAN"):
					if (func_290(*iParam0))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN1") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 2000)
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_TK") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				case joaat("EXIT_VAN"):
					if (func_290(*iParam0))
					{
						if (__LIB_15__.func_56(iVar11))
						{
							Var12 = { func_289(iVar11, "JS_VAN_IN2") };
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar11)
							{
								case 2:
									StringCopy(&Var12, "SOL1_VAN1", 24);
									break;
								case 3:
									StringCopy(&Var12, "SOL1_VAN2", 24);
									break;
							}
							if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_288(iParam0, &(iParam0->f_9), &Var12, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iParam0->f_38) > 5000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
			{
				if (iVar11 == 1)
				{
					func_264(iVar11, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_1305 = 0;
				}
				func_258(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((MISC::GET_GAME_TIMER() - iParam0->f_38) > 1000 && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0))
					{
						if (((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "ENT_VEH")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT")) || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH"))
						{
							Var18 = { iParam0->f_9 };
							StringConCat(&Var18, "_LEAVE", 32);
							func_258(iParam0, 2, 0, &Var18, 1, 0);
						}
					}
					if ((MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_FOOT") || MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_VEH")) || (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_9), "WH_DITCH_VEH") && !AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_1278 != -1) && (MISC::GET_GAME_TIMER() - iLocal_1278) > 7000) && (MISC::GET_GAME_TIMER() - iParam0->f_38) == 0)
						{
							func_258(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (MISC::GET_HASH_KEY(&(iParam0->f_9)))
				{
					case joaat("ENT_FOOT"):
						if (func_290(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_289(iVar11, "JS_ENT_F1") };
										func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_ENT_F1_P") };
										func_264(iVar11, &Var12, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (__LIB_15__.func_56(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_289(iVar11, "JS_ENT_F2") };
									func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var12 = { func_289(iVar11, "JS_ENT_F2_P") };
									func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
						{
							if (__LIB_15__.func_56(iVar11))
							{
								if (!iParam0->f_83)
								{
									Var12 = { func_289(iVar11, "JS_ENT_F") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var12 = { func_289(iVar11, "JS_ENT_F_P") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					case joaat("ENT_VEH"):
						if (func_290(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (MISC::ARE_STRINGS_EQUAL(&(iParam0->f_17), "WH_VEH"))
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (__LIB_15__.func_56(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
								if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
						{
							if (__LIB_15__.func_56(iVar11))
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
								func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					case joaat("WH_FOOT"):
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										Var12 = { func_289(iVar11, "JS_WH") };
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					case joaat("WH_DITCH_VEH"):
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_289(iVar11, "JS_ENT_V4") };
										}
										else
										{
											Var12 = { func_289(iVar11, "JS_ENT_V3") };
										}
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					case joaat("WH_VEH"):
						if (func_290(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH1") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_WH2") };
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var12 = { func_289(iVar11, "JS_ENT_V3") };
										}
										else
										{
											Var12 = { func_289(iVar11, "JS_WH") };
										}
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_WH_F") };
									}
									if (func_264(iVar11, &Var12, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_288(iParam0, &(iParam0->f_9), &Var12, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_288(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					case joaat("ENT_DITCH_VEH"):
						if (iParam0->f_48 == 0)
						{
							if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 1000)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V4") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var12 = { func_289(iVar11, "JS_ENT_V4") };
							}
							else
							{
								Var12 = { func_289(iVar11, "JS_ENT_V3") };
							}
							func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					case joaat("ENT_FOOT_LEAVE"):
						if (iParam0->f_48 == 0)
						{
							if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 1000)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									if (!iParam0->f_83)
									{
										Var12 = { func_289(iVar11, "JS_ENT_F3") };
										func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var12 = { func_289(iVar11, "JS_ENT_F3_P") };
										func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_48++;
							}
						}
						break;
					case joaat("ENT_VEH_LEAVE"):
					case joaat("WH_FOOT_LEAVE"):
					case joaat("WH_VEH_LEAVE"):
						if (iParam0->f_48 == 0)
						{
							if (__LIB_11__.func_693() && (MISC::GET_GAME_TIMER() - iLocal_1278) > 1000)
							{
								if (__LIB_15__.func_56(iVar11))
								{
									Var12 = { func_289(iVar11, "JS_ENT_V5") };
									func_264(iVar11, &Var12, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

void func_288(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x153ED
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_50 = iVar1;
	StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
	iParam0->f_50.f_28 = iParam4;
	iParam0->f_50.f_26 = fParam3;
	iParam0->f_50.f_29 = iParam5;
	iParam0->f_50.f_30 = iParam7;
	iParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_261(&(iParam0->f_50), 0);
	}
}

struct<6> func_289(int iParam0, char* sParam1)//Position - 0x15469
{
	struct<6> Var0;
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_290(struct<34> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76)//Position - 0x15489
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0)//Position - 0x154A7
{
	if (PED::CAN_PED_SEE_HATED_PED(*iParam0, PLAYER::PLAYER_PED_ID()))
	{
		iParam0->f_40 = MISC::GET_GAME_TIMER();
		iParam0->f_39 = 1;
	}
	else if ((MISC::GET_GAME_TIMER() - iParam0->f_40) > 2000 || !PED::IS_PED_FACING_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 90f))
	{
		iParam0->f_40 = MISC::GET_GAME_TIMER();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_1319 = false;
	}
	if (bLocal_1319)
	{
		PED::SET_PED_RESET_FLAG(*iParam0, 188, true);
	}
	if (!func_292())
	{
		iParam0->f_41 = PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
	}
	else
	{
		iParam0->f_41 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_102 = 1;
			break;
		default:
			iParam0->f_102 = 0;
			break;
	}
}

int func_292()//Position - 0x1557C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_46[iVar0 /*8*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_46[iVar0 /*8*/], false))
		{
			if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_46[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_293()//Position - 0x155C8
{
	struct<3> Var0;
	var uVar1;
	PED::ADD_RELATIONSHIP_GROUP("BUGSTAR", &iLocal_1279);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("PLAYER"), iLocal_1279);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1279, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1279);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1279, joaat("COP"));
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(8.64631f, -3092.9624f, 139.57953f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.9624f, 139.57953f) + Vector(4.1875f, 24f, 33.3125f), false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(7.27131f, -3092.467f, 138.42677f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.42677f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	MISC::CLEAR_AREA(138.43f, -3092.47f, 4.9f, 28.375f, true, false, false, false);
	if (__LIB_0__.func_294() || __LIB_0__.func_2(0))
	{
		iLocal_67 = 0;
		if (__LIB_0__.func_294())
		{
			if (Global_94618)
			{
				iLocal_67++;
			}
		}
		if (__LIB_0__.func_294())
		{
			func_245(iLocal_67, &Var0, &uVar1);
			__LIB_11__.func_728(Var0, uVar1, 1, 0);
		}
		bLocal_66 = true;
	}
	else
	{
		while (!func_190(1))
		{
			SYSTEM::WAIT(0);
			func_298(&uLocal_70);
		}
	}
	__LIB_29__.func_736(&uLocal_70, "JHP1A", 0);
	__LIB_11__.func_695(&uLocal_70, "misslsdhsclipboard@base");
	__LIB_11__.func_695(&uLocal_70, "misslsdhsclipboard@idle_a");
	__LIB_11__.func_695(&uLocal_70, "misstrevor3");
	__LIB_11__.func_689(&uLocal_70, joaat("p_amb_clipboard_01"));
	__LIB_29__.func_734(&uLocal_70, iLocal_1281);
	__LIB_11__.func_697(&uLocal_70, &cLocal_59);
	PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.15f);
	__LIB_11__.func_731(87);
	__LIB_0__.func_203(&uLocal_1112, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	__LIB_0__.func_203(&uLocal_1112, 3, 0, "LESTER", 0, 1);
	__LIB_11__.func_93(bLocal_1277);
	__LIB_29__.func_735();
	iLocal_1281 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Local_58, "po1_08_warehouseint1");
	AUDIO::PREPARE_ALARM(&cLocal_49);
	iLocal_1327 = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_298(var uParam0)//Position - 0x15951
{
	func_247(uParam0);
}

void func_300(int iParam0)//Position - 0x159F5
{
	struct<3> Var0;
	char[] cVar1[8];
	if (iParam0 == 6)
	{
		func_312();
		func_8(0);
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else if (!bLocal_68)
	{
		bLocal_68 = true;
		iLocal_69 = iParam0;
		switch (iLocal_69)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
		{
			func_310(&Var0);
		}
		else
		{
			func_301(&Var0, &cVar1);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1A_FAIL");
	}
}

void func_301(char* sParam0, char* sParam1)//Position - 0x15ABB
{
	__LIB_0__.func_500(sParam0, sParam1);
	func_302(0);
}

void func_302(int iParam0)//Position - 0x15AD0
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_303(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_303(int iParam0)//Position - 0x15B15
{
	int iVar0;
	int iVar1;
	__LIB_26__.func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__.func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_304(&(Global_113386.f_2363.f_539), iVar1);
	if (Global_94616 == Global_100478)
	{
		Global_113386.f_9085.f_330[iVar1 /*6*/].f_1++;
	}
	if (!BitTest(Global_91229[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
		}
	}
	Global_113386.f_9085.f_330[iVar1 /*6*/].f_2++;
	Global_94616 = Global_100478;
	if (iParam0 == -1)
	{
		if (Global_113386.f_9085)
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

void func_304(var uParam0, int iParam1)//Position - 0x15C25
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !BitTest(Global_113386.f_9085.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_306(Global_113386.f_18533[iVar0], &Var2, &fVar3))
			{
				Global_113386.f_18533[iVar0] = 318;
				__LIB_0__.func_17(&(uParam0->f_2296[iVar0]));
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

int func_306(int iParam0, var uParam1, float fParam2)//Position - 0x15DF9
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
			return func_306(8, uParam1, fParam2);
			break;
		case 10:
			return func_306(8, uParam1, fParam2);
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

void func_310(char* sParam0)//Position - 0x168D1
{
	__LIB_0__.func_324(sParam0);
	func_302(0);
}

void func_312()//Position - 0x16923
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		if (!__LIB_0__.func_134())
		{
			iVar0 = __LIB_0__.func_323();
			if (iVar0 != -1)
			{
				if (!func_303(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__.func_260();
		}
	}
}

