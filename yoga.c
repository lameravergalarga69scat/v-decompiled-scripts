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
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	int iLocal_33[3] = { 0, 0, 0 };
	int iLocal_34[3] = { 0, 0, 0 };
	var uLocal_35 = 2;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	struct<16> Local_38[3];
	struct<22> Local_39[3];
	struct<22> Local_40[3];
	struct<3> Local_41[2];
	struct<3> Local_42[2];
	float fLocal_43[2] = { 0f, 0f };
	struct<7> Local_44[8];
	struct<7> Local_45[8];
	struct<3> Local_46[8];
	int iLocal_47[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_48[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_49[8];
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int* iLocal_55 = NULL;
	int* iLocal_56 = NULL;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	float fLocal_59 = 0f;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	struct<4> Local_89 = { 0, 0, 0, 0 } ;
	struct<15> Local_90 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<6> Local_133 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	struct<6> Local_136 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<6> Local_139 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	struct<6> Local_142 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	struct<6> Local_145 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	struct<6> Local_148 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	struct<8> Local_151 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_152 = { 0, 0, 0, 0 } ;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	int* iLocal_160 = NULL;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	bool bLocal_168 = 0;
	float fLocal_169 = 0f;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_181 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_183 = { 0, 0, 0 } ;
	var uLocal_184 = 0;
	var uLocal_185 = 12;
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
	var uLocal_883 = 1065353216;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895[3] = { 0, 0, 0 };
	int iLocal_896[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	fLocal_28 = 0.5f;
	fLocal_29 = 0.88f;
	fLocal_30 = 0.609375f;
	fLocal_31 = 0.266666f;
	fLocal_32 = 1.2f;
	iLocal_69 = 3;
	fLocal_72 = 80f;
	fLocal_73 = 140f;
	fLocal_74 = 180f;
	iLocal_80 = 1;
	iLocal_81 = 65;
	iLocal_82 = 49;
	iLocal_83 = 64;
	iLocal_172 = -1;
	iLocal_173 = -1;
	iLocal_174 = -1;
	MISC::SET_MINIGAME_IN_PROGRESS(true);
	__LIB_0__::func_671(1);
	__LIB_0__::func_130();
	PAD::INIT_PC_SCRIPTED_CONTROLS("Yoga");
	bLocal_68 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_412();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	AUDIO::STOP_SMOKE_GRENADE_EXPLOSION_SOUNDS();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	while (!__LIB_40__::func_702())
	{
		SYSTEM::WAIT(0);
	}
	bLocal_168 = false;
	fLocal_169 = 1f;
	while (true)
	{
		if (iLocal_163 == 1)
		{
			func_410(&iLocal_86, &iLocal_87);
		}
		func_397();
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), true);
		switch (iLocal_86)
		{
			case 0:
				if (func_385(iLocal_86, &iLocal_161, &iLocal_163, &uLocal_164, &uLocal_165))
				{
					func_384();
					iLocal_86 = 1;
				}
				break;
			case 1:
				if (func_385(iLocal_86, &iLocal_161, &iLocal_163, &uLocal_164, &uLocal_165))
				{
					if (func_371(&iLocal_162))
					{
						func_384();
						iLocal_86 = 2;
					}
				}
				break;
			case 2:
				if (func_385(iLocal_86, &iLocal_161, &iLocal_163, &uLocal_164, &uLocal_165))
				{
					if (func_370(&iLocal_162))
					{
						func_384();
						iLocal_86 = 3;
					}
				}
				break;
			case 3:
				if (func_385(iLocal_86, &iLocal_161, &iLocal_163, &uLocal_164, &uLocal_165))
				{
					if (func_369(&iLocal_162))
					{
						func_384();
						iLocal_86 = 4;
					}
				}
				break;
			case 4:
				if (func_385(iLocal_86, &iLocal_161, &iLocal_163, &uLocal_164, &uLocal_165))
				{
					if (func_324(&iLocal_162))
					{
						func_384();
						iLocal_86 = 5;
					}
				}
				break;
			case 5:
			case 6:
				if (func_385(iLocal_86, &iLocal_161, &iLocal_163, &uLocal_164, &uLocal_165))
				{
					if (func_9(&iLocal_162))
					{
						func_384();
						switch (iLocal_86)
						{
							case 5:
								iLocal_86 = 7;
								break;
							case 6:
								iLocal_86 = 8;
								break;
							}
						}
				}
				break;
			case 7:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), fLocal_169, true, 0);
				}
				__LIB_0__::func_716(300, 0, 0);
				__LIB_0__::func_210();
				func_412();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			case 8:
				func_412();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_9(int iParam0)//Position - 0x96A
{
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			*iParam0++;
			break;
		case 1:
			if (!bLocal_168)
			{
				STREAMING::REQUEST_ANIM_DICT("mini@yoga");
				STREAMING::REQUEST_MODEL(Local_136.f_1);
				STREAMING::REQUEST_MODEL(Local_148.f_1);
				STREAMING::REQUEST_ANIM_DICT("move_p_m_zero_idles@generic");
				__LIB_32__::func_14(&iLocal_160);
				if ((((STREAMING::HAS_ANIM_DICT_LOADED("mini@yoga") && STREAMING::HAS_MODEL_LOADED(Local_136.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_148.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("move_p_m_zero_idles@generic")) && __LIB_17__::func_311(&iLocal_160))
				{
					*iParam0++;
				}
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
				{
					*iParam0 = 30;
				}
			}
			break;
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_173))
			{
				iLocal_173 = PED::CREATE_SYNCHRONIZED_SCENE(Local_178, Local_179, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_173, true);
				if (func_320(&Local_136, 1))
				{
				}
				if (func_320(&Local_148, 1))
				{
					__LIB_17__::func_310(&iLocal_160, 1, 0);
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_173, "mini@yoga", "outro_1", 1000f, -1000f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				iLocal_171 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_171, iLocal_173, "outro_1_cam", "mini@yoga");
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (iLocal_87 == 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_END"))
					{
					}
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_136.f_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_148.f_1);
				STREAMING::NEW_LOAD_SCENE_START(Local_182, Local_183, 200f, 0);
				*iParam0++;
			}
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_173))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_148.f_0))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_173) >= 0.305f)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_148.f_0, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_148.f_0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_173) >= 1f)
				{
					if (iLocal_87 == 1)
					{
						func_13(0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_151.f_4, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_151.f_7);
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "move_p_m_zero_idles@generic", "fidget_impatient", 1000f, -1.5f, -1, 2, 0.445f, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							CAM::DESTROY_ALL_CAMS(false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							__LIB_37__::func_899(&Local_148, 1);
							*iParam0 = 20;
						}
					}
					else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_174))
					{
						iLocal_174 = PED::CREATE_SYNCHRONIZED_SCENE(Local_180, Local_181, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_174, "mini@yoga", "outro_2", 1000f, -4f, 0, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_171, iLocal_174, "outro_2_cam", "mini@yoga");
						if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_END"))
						{
						}
						*iParam0 = 10;
					}
				}
			}
			break;
		case 10:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_174))
			{
				if (iLocal_166 == 1)
				{
					func_13(0);
					iLocal_166 = 0;
				}
				__LIB_37__::func_899(&Local_136, 1);
				__LIB_37__::func_899(&Local_148, 1);
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_174) >= 0.95f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_174) >= 1f)
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
					CAM::DESTROY_ALL_CAMS(false);
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::REMOVE_ANIM_DICT("mini@yoga");
					*iParam0 = 40;
				}
			}
			break;
		case 20:
			__LIB_37__::func_899(&Local_136, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "move_p_m_zero_idles@generic", "fidget_impatient", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "move_p_m_zero_idles@generic", "fidget_impatient") >= 0.99f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						*iParam0 = 40;
					}
				}
			}
			break;
		case 30:
			if (bLocal_168 == 1)
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_151.f_4, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_151.f_7);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				__LIB_37__::func_899(&Local_136, 1);
				__LIB_37__::func_899(&Local_148, 1);
				if (iLocal_166 == 1)
				{
					func_13(0);
					iLocal_166 = 0;
				}
				*iParam0 = 40;
			}
			break;
		case 40:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				STREAMING::NEW_LOAD_SCENE_STOP();
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::REMOVE_ANIM_DICT("mini@yoga");
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				return 1;
			}
			break;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_173) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_174))
	{
		func_10(&Local_90, 0, 0f, 0.0005f);
	}
	return 0;
}

void func_10(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0xEFF
{
	if (iParam1 == 1)
	{
		switch (iParam0->f_7)
		{
			case 0:
				GRAPHICS::SET_TIMECYCLE_MODIFIER("STONED_CUTSCENE");
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(iParam0->f_50);
				break;
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				__LIB_17__::func_211(&(iParam0->f_50), iParam0->f_51, 0.0001f, 1);
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(iParam0->f_50);
				break;
		}
	}
	else
	{
		__LIB_17__::func_211(&(iParam0->f_50), fParam2, fParam3, 1);
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(iParam0->f_50);
	}
}

void func_13(int iParam0)//Position - 0x1028
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				func_132(PLAYER::PLAYER_PED_ID());
				break;
			case 1:
				func_14(PLAYER::PLAYER_PED_ID(), 0);
				break;
			}
	}
}

void func_14(int iParam0, int iParam1)//Position - 0x1066
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			switch (iParam1)
			{
				case 0:
					func_15(iParam0, 12, 7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
				case 1:
					break;
				case 2:
					break;
				}
			}
	}
}

int func_15(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x10B9
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
										func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_25(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_24(iParam0, iVar10, &iVar4, 1))
							{
								func_15(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_15(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_15(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_15(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_15(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_15(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_15(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_15(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_24(iParam0, iVar10, &iVar4, 0))
		{
			func_15(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_16(iParam0, iVar10, &iVar4))
		{
			func_15(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_16(int iParam0, int iParam1, int iParam2)//Position - 0x18C9
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_17(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2)//Position - 0x1955
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
				if (!func_17(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_17(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_17(iParam0, 14, iVar4))
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
			if (!func_17(iParam0, 14, uVar8[iVar7]))
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

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2415
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_17(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1, int iParam2)//Position - 0x24AB
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
				if (func_17(iParam0, iParam1, iVar0))
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
				if (func_17(iParam0, iParam1, iVar1))
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

void func_132(int iParam0)//Position - 0x1EEDE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_216(iParam0);
	if (__LIB_0__::func_43(iVar0))
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
		func_141(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_25(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_133(__LIB_0__::func_154(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_25(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_25(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_133(__LIB_0__::func_154(0), 3, 70, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 3, 71, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 3, 72, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 3, 73, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 3, 74, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 3, 75, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 4, 41, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 4, 42, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 4, 43, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 4, 44, 1, 0, 0, 0);
					func_133(__LIB_0__::func_154(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_25(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_141(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_133(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x1F13B
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_136(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1F2F6
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
								func_136(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_136(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_136(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_136(iParam0, 14, iVar5, 1, 0);
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
								func_136(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_136(iParam0, 14, 17, 1, 0);
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

void func_141(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1F7B8
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
			if (func_24(iParam0, iVar1, &iVar2, 0))
			{
				func_15(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_16(iParam0, iVar1, &iVar2))
			{
				func_15(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_312(iParam0);
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
			func_144(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_144(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_144(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1FC94
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
			func_273(iVar5, iParam1, iParam2, 1);
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
						func_273(iVar5, 10, 0, 1);
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
									func_273(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_144(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_273(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_272(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_144(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_266(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_273(iVar5, 14, uVar18[iVar1], 1);
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
							func_144(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_273(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_144(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_258(iParam0);
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
						func_144(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_257(iVar5, iVar24, iVar23, iVar25);
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
							func_144(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_144(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_144(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_266(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_257(iVar5, func_272(iParam0, 8, -1), iParam2, func_272(iParam0, 4, -1));
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
				func_191(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_257(iVar5, iParam2, iVar44, iVar45);
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
			func_266(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_257(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_144(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_144(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_257(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_257(iVar5, iVar58, iVar57, iParam2);
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
						func_144(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_257(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_168(iParam0, 9, iVar63))
						{
							func_144(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_144(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_144(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_144(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_272(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_272(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_144(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_144(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_258(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_145(iParam0, &uVar4))
		{
			func_144(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_144(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_144(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_144(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_272(iParam0, 3, -1), iVar10);
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
				func_144(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_145(int iParam0, var uParam1)//Position - 0x21B40
{
	int iVar0;
	int iVar1;
	*uParam1 = func_272(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_168(iParam0, iVar1, iVar0))
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

int func_168(int iParam0, int iParam1, int iParam2)//Position - 0x25E68
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
				if (!func_168(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_168(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_168(iParam0, 14, iVar6))
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
			if (!func_168(iParam0, 14, uVar11[iVar10]))
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
						return func_168(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_168(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2CB81
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
	func_192(iParam0, bParam3, 0, -1);
}

void func_192(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2CBCE
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
		bVar3 = func_237(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_228(iParam0, iParam3);
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

int func_228(int iParam0, int iParam1)//Position - 0x3BFA1
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
				iVar3 = func_272(iParam0, 11, -1);
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
				iVar5 = func_272(iParam0, 11, -1);
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

int func_237(int iParam0, bool bParam1)//Position - 0x3C400
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_272(iParam0, 11, -1), 0);
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
						iVar3 = func_272(iParam0, 11, -1);
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
						iVar5 = func_272(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_272(iParam0, 11, -1), 0);
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
						iVar8 = func_272(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_272(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_272(iParam0, 11, -1), 0);
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
						iVar12 = func_272(iParam0, 8, -1);
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

int func_257(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4528F
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
					iVar0 = func_257(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_257(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_258(int iParam0)//Position - 0x465CA
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
		if (!func_263(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_263(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_263(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x46F94
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_272(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_266(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x498AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_312(iParam0))
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

int func_272(int iParam0, int iParam1, int iParam2)//Position - 0x49B5E
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
				if (func_168(iParam0, iParam1, iVar0))
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
				if (func_168(iParam0, iParam1, iVar1))
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

void func_273(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x49BFF
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
							func_273(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_273(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_273(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_273(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_273(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_273(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_273(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_273(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_273(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_312(int iParam0)//Position - 0x62A9F
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
				iVar1 = func_272(iParam0, 11, -1);
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
				iVar3 = func_272(iParam0, 11, -1);
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

int func_320(int iParam0, bool bParam1)//Position - 0x6319A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_1))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_1, iParam0->f_2, true, true, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_2, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_5, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam1);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

int func_324(int iParam0)//Position - 0x63252
{
	switch (*iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(iLocal_170))
			{
				iLocal_170 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (iLocal_88 == 0)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, -782.80237f, 187.4389f, 73.326614f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, -787.03296f, 186.88234f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_88 == 1)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, 2870.8262f, 5943.485f, 356.91214f, 11.166323f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, 2867.6682f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(iLocal_170, "HAND_SHAKE", 0.25f);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				CAM::SET_CAM_FAR_CLIP(iLocal_170, 500f);
			}
			*iParam0++;
			break;
		case 1:
			if (iLocal_167 == 0)
			{
				if (Local_90.f_7 == 1)
				{
					if (Local_90.f_9 == 4)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
							{
								iLocal_167 = 1;
							}
						}
					}
				}
			}
			if (iLocal_175 == 0)
			{
				func_368(&Local_90);
				func_10(&Local_90, 1, 0, 981668463);
				if (func_327(&Local_90, 2, 1, 0, 0, 1, iLocal_88, 1))
				{
					func_326();
					func_325(&Local_90, 0, 0);
					iLocal_167 = 0;
					*iParam0++;
				}
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_325(int iParam0, int iParam1, int iParam2)//Position - 0x63417
{
	*iParam0 = 0;
	iParam0->f_1 = { 0f, 0f, 0f };
	iParam0->f_4 = { 0f, 0f, 0f };
	iParam0->f_7 = 0;
	iParam0->f_9 = 0;
	iParam0->f_19 = 0;
	iParam0->f_18 = 0;
	iParam0->f_14 = 0;
	iParam0->f_16 = 0;
	iParam0->f_41 = 0;
	iParam0->f_15 = 0;
	iParam0->f_47 = 0;
	iParam0->f_53 = 0;
	if (iParam1 == 1)
	{
		iParam0->f_50 = 0f;
		iParam0->f_51 = 0f;
	}
	if (iParam2 == 1)
	{
		iParam0->f_54 = 0f;
	}
}

void func_326()//Position - 0x63482
{
	if (Local_90.f_14 > 0)
	{
		fLocal_169 = (fLocal_169 - (0.125f * SYSTEM::TO_FLOAT(Local_90.f_14)));
		if (fLocal_169 < 0f)
		{
			fLocal_169 = 0f;
		}
	}
}

int func_327(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x634B5
{
	*uParam0 = PLAYER::PLAYER_PED_ID();
	uParam0->f_8 = iParam1;
	uParam0->f_11 = "missfam5_yoga";
	__LIB_40__::func_701(uParam0);
	func_366();
	switch (uParam0->f_7)
	{
		case 0:
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				ENTITY::SET_ENTITY_HEALTH(*uParam0, PED::GET_PED_MAX_HEALTH(*uParam0), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(*uParam0, true);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), true);
				if (uParam0->f_54 == 0f)
				{
					PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
					PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, true, "blushing");
				}
				uParam0->f_1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
				uParam0->f_4 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
				iLocal_55 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_buttons");
				if (MISC::IS_PC_VERSION())
				{
					iLocal_56 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_keys");
				}
				if (__LIB_40__::func_702() && func_365())
				{
					func_364(iParam1, iParam6);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_FORCE_FOOTSTEP_UPDATE(*uParam0, true);
					__LIB_40__::func_700(uParam0, 0);
					uParam0->f_13 = 0;
					uParam0->f_18 = 0;
					uParam0->f_24 = AUDIO::GET_SOUND_ID();
					uParam0->f_25 = AUDIO::GET_SOUND_ID();
					uParam0->f_26 = AUDIO::GET_SOUND_ID();
					uParam0->f_15 = 0;
					uParam0->f_41 = 0;
					uParam0->f_20 = 0;
					uParam0->f_21 = 0;
					uParam0->f_22 = 0;
					uParam0->f_23 = 0;
					uParam0->f_37 = 0;
					uParam0->f_38 = 0;
					uParam0->f_42 = 0;
					uParam0->f_43 = 0;
					uParam0->f_44 = 0;
					uParam0->f_45 = 0;
					uParam0->f_47 = 0;
					uParam0->f_7 = 1;
					uParam0->f_48 = 32f;
					uParam0->f_49 = 0;
					uParam0->f_52 = 0;
					iLocal_50 = 0;
					iLocal_51 = 0;
					iLocal_52 = 0;
				}
			}
			break;
		case 1:
			if (func_346(uParam0, iParam1, 3, iParam2, 1.15f, iParam3, iParam4))
			{
				uParam0->f_7 = 6;
			}
			else if (uParam0->f_9 == 6)
			{
				uParam0->f_7 = 2;
			}
			if (uParam0->f_9 != 4 && uParam0->f_9 != 5)
			{
				func_340(uParam0, iParam1);
			}
			break;
		case 2:
			AUDIO::STOP_SOUND(uParam0->f_24);
			AUDIO::STOP_SOUND(uParam0->f_25);
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_26, "YOGA_FAIL", *uParam0, "FAMILY_5_SOUNDS", false, 0);
			uParam0->f_14++;
			uParam0->f_12 = 1;
			uParam0->f_17 = uParam0->f_16;
			uParam0->f_56 = 0;
			uParam0->f_13 = 0;
			uParam0->f_16 = 0;
			uParam0->f_15 = 0;
			uParam0->f_41 = 0;
			uParam0->f_22 = 0;
			uParam0->f_42 = 0;
			uParam0->f_43 = 0;
			uParam0->f_35 = 0;
			uParam0->f_36 = 0;
			uParam0->f_44 = 0;
			uParam0->f_45 = 0;
			uParam0->f_49 = 0;
			uParam0->f_52 = 0;
			uParam0->f_51 = 0f;
			uParam0->f_54 = __LIB_0__::func_331((uParam0->f_54 - 0.08f), 0f, 0.5f);
			uParam0->f_53 = 0;
			func_337(&iLocal_55);
			if (MISC::IS_PC_VERSION())
			{
				func_337(&iLocal_56);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
				PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, false, "blushing");
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 7))
			{
				case 1:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_1", 0);
					break;
				case 2:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_2", 0);
					break;
				case 3:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_3", 0);
					break;
				case 4:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_4", 0);
					break;
				case 5:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_5", 0);
					break;
				case 6:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_6", 0);
					break;
			}
			__LIB_40__::func_692(uParam0);
			uParam0->f_19 = MISC::GET_GAME_TIMER();
			uParam0->f_18 = 0;
			HUD::CLEAR_HELP(true);
			iLocal_50 = 0;
			iLocal_51 = 0;
			iLocal_52 = 0;
			uParam0->f_7 = 3;
			break;
		case 3:
			if (__LIB_16__::func_302(1000, uParam0->f_19))
			{
				uParam0->f_12 = 0;
			}
			if (iParam7 == 1)
			{
				if (__LIB_16__::func_302(1000, uParam0->f_19))
				{
					if (uParam0->f_53 == 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									__LIB_0__::func_640(*uParam0, "GENERIC_CURSE_MED", 6);
									break;
							}
							uParam0->f_53 = 1;
						}
					}
				}
			}
			if (__LIB_16__::func_302(2500, uParam0->f_19))
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				uParam0->f_7 = 4;
			}
			break;
		case 4:
			iLocal_55 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_buttons");
			if (MISC::IS_PC_VERSION())
			{
				iLocal_56 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_keys");
			}
			if (func_365())
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_57))
				{
					if (__LIB_40__::func_691(*uParam0, 2))
					{
						__LIB_40__::func_700(uParam0, 0);
						uParam0->f_9 = 0;
						uParam0->f_7 = 1;
					}
				}
				else if (__LIB_16__::func_302(3000, uParam0->f_19))
				{
					if (!PED::IS_PED_INJURED(*uParam0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
						__LIB_40__::func_700(uParam0, 1);
						uParam0->f_19 = MISC::GET_GAME_TIMER();
						uParam0->f_7 = 5;
					}
				}
			}
			break;
		case 5:
			if (__LIB_40__::func_691(*uParam0, 2))
			{
				uParam0->f_9 = 0;
				uParam0->f_7 = 1;
			}
			break;
		case 6:
			if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
			{
				if (__LIB_40__::func_703())
				{
					HUD::CLEAR_HELP(true);
					iLocal_50 = 0;
					iLocal_51 = 0;
					iLocal_52 = 0;
				}
				__LIB_17__::func_219(__LIB_0__::func_216(*uParam0), 1, iParam5);
				__LIB_17__::func_219(__LIB_0__::func_216(*uParam0), 2, iParam5);
				__LIB_17__::func_219(__LIB_0__::func_216(*uParam0), 3, iParam5);
				AUDIO::STOP_SOUND(uParam0->f_26);
				AUDIO::STOP_SOUND(uParam0->f_24);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_26);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_24);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_25);
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(*uParam0, false);
				func_337(&iLocal_55);
				if (MISC::IS_PC_VERSION())
				{
					func_337(&iLocal_56);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_55);
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_56);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_57))
				{
					CAM::SET_CAM_ACTIVE(iLocal_57, false);
					CAM::DESTROY_CAM(iLocal_57, false);
				}
				uParam0->f_7 = 7;
			}
			break;
		case 7:
			__LIB_0__::incrementGlobal_58896ByIndex(117, 1);
			return 1;
			break;
	}
	return 0;
}

void func_337(int* iParam0)//Position - 0x64285
{
	iLocal_53 = 0;
	iLocal_54 = 0;
	iLocal_60 = 255;
	iLocal_61 = 255;
	iLocal_62 = 255;
	iLocal_63 = 255;
	iLocal_64 = 255;
	iLocal_65 = 255;
	__LIB_40__::func_693(&uLocal_35);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "REMOVE_BUTTONS");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
}

void func_340(var uParam0, int iParam1)//Position - 0x6431A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	HUD::SET_WIDESCREEN_FORMAT(1);
	if ((((GRAPHICS::GET_IS_WIDESCREEN() == 0 || MISC::GET_PROFILE_SETTING(206) == 8) || MISC::GET_PROFILE_SETTING(206) == 9) || MISC::GET_PROFILE_SETTING(206) == 10) || MISC::GET_PROFILE_SETTING(206) == 12)
	{
		fLocal_29 = 0.825f;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_56, fLocal_28, fLocal_29, (fLocal_30 * fLocal_32), (fLocal_31 * fLocal_32), 100, 100, 100, 255, 0);
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_55, fLocal_28, fLocal_29, (fLocal_30 * fLocal_32), (fLocal_31 * fLocal_32), 100, 100, 100, 255, 0);
		}
	}
	if (uParam0->f_9 != 3)
	{
		if (uParam0->f_16 < iLocal_33[iParam1])
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				func_344(uParam0, iParam1, &iLocal_56);
			}
			else
			{
				func_344(uParam0, iParam1, &iLocal_55);
			}
		}
	}
	else if (uParam0->f_9 == 3)
	{
		iLocal_60 = 255;
		iLocal_61 = 255;
		iLocal_62 = 255;
		iLocal_63 = 255;
		iLocal_64 = 255;
		iLocal_65 = 255;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			func_343(uParam0, &iLocal_56);
		}
		else
		{
			func_343(uParam0, &iLocal_55);
		}
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_54 == 0)
		{
			__LIB_40__::func_695(&iLocal_55);
			if (MISC::IS_PC_VERSION())
			{
				__LIB_40__::func_695(&iLocal_56);
			}
			iLocal_54 = 1;
		}
		if (uParam0->f_9 == 2)
		{
			HUD::GET_HUD_COLOUR(129, &iVar0, &iVar1, &iVar2, &uVar3);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				__LIB_40__::func_694(uParam0, &iLocal_56, iVar0, iVar1, iVar2);
			}
			else
			{
				__LIB_40__::func_694(uParam0, &iLocal_55, iVar0, iVar1, iVar2);
			}
		}
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_55, "REMOVE_BUTTONS");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_56, "REMOVE_BUTTONS");
		}
		__LIB_40__::func_693(&uLocal_35);
	}
}

void func_343(var uParam0, int iParam1)//Position - 0x64665
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bLocal_68)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "HIDE_STICK_POINTER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "HIDE_STICK_POINTER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_27);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_28);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_60);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_61);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_62);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_63);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_64);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_65);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_344(var uParam0, int iParam1, int iParam2)//Position - 0x64794
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bLocal_68)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (__LIB_0__::func_1("STICKS"))
		{
			__LIB_0__::func_190("STICKS_KM");
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (__LIB_0__::func_1("STICKS_KM"))
		{
			__LIB_0__::func_190("STICKS");
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_39[iParam1 /*22*/][uParam0->f_16 /*3*/][0]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_39[iParam1 /*22*/][uParam0->f_16 /*3*/][1]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_60);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_61);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_62);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_63);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_64);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_65);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (uParam0->f_31 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "HIDE_STICK_POINTER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_HIGHLIGHT_ANGLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_29);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_32 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "HIDE_STICK_POINTER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_HIGHLIGHT_ANGLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_30);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_346(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)//Position - 0x64975
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			if (func_356(uParam0, iParam1, uParam0->f_16, 0))
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				__LIB_40__::func_698(uParam0, Local_38[iParam1 /*16*/][uParam0->f_16 * 2], Local_38[iParam1 /*16*/][uParam0->f_16 * 2 + 1]);
				uParam0->f_49 = 1;
				uParam0->f_52 = 1;
				uParam0->f_9 = 1;
			}
			else
			{
				if (iParam5 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (__LIB_0__::func_1("STICKS_KM"))
						{
							iVar0 = 1;
						}
					}
					if (!__LIB_0__::func_1("STICKS") && iVar0 == 0)
					{
						if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							if (!iLocal_50)
							{
								if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
								{
									__LIB_0__::func_190("STICKS_KM");
								}
								else
								{
									__LIB_0__::func_190("STICKS");
								}
								iLocal_50 = 1;
								iLocal_51 = 0;
								iLocal_52 = 0;
							}
						}
					}
				}
				iLocal_53 = 0;
				iLocal_54 = 0;
			}
			break;
		case 1:
			if (func_356(uParam0, iParam1, uParam0->f_16, 1))
			{
				func_354(uParam0, iParam1, fParam4);
				if (__LIB_40__::func_691(*uParam0, 2))
				{
					SYSTEM::SETTIMERA(0);
					HUD::CLEAR_HELP(true);
					iLocal_53 = 1;
					uParam0->f_9 = 2;
					uParam0->f_10 = 3;
					uParam0->f_46 = MISC::GET_GAME_TIMER();
					if (iParam6 == 1 && uParam0->f_47 == 0)
					{
						uParam0->f_10 = 2;
					}
					uParam0->f_35 = 0;
					uParam0->f_36 = 0;
					uParam0->f_34 = 0f;
					uParam0->f_33 = 0f;
					uParam0->f_20 = 0;
					uParam0->f_22 = 0;
					uParam0->f_21 = 0;
					uParam0->f_23 = 0;
					uParam0->f_37 = 0;
					uParam0->f_38 = 0;
					uParam0->f_42 = 0;
					uParam0->f_43 = 0;
					uParam0->f_15 = 0;
					uParam0->f_41 = 0;
				}
			}
			else
			{
				uParam0->f_9 = 6;
			}
			break;
		case 2:
			if (func_356(uParam0, iParam1, uParam0->f_16, 1))
			{
				switch (uParam0->f_10)
				{
					case 2:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_51)
										{
											__LIB_0__::func_190("INHALE_NEW");
											iLocal_50 = 0;
											iLocal_51 = 1;
											iLocal_52 = 0;
										}
									}
								}
							}
						}
						if (__LIB_16__::func_302(2000, uParam0->f_46))
						{
							uParam0->f_47 = 1;
							uParam0->f_10 = 0;
						}
						break;
					case 3:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_51)
										{
											__LIB_0__::func_190("INHALE_NEW");
											iLocal_50 = 0;
											iLocal_51 = 1;
											iLocal_52 = 0;
										}
									}
								}
							}
						}
						if (__LIB_16__::func_302(500, uParam0->f_46))
						{
							uParam0->f_10 = 0;
						}
						break;
					case 0:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_51)
										{
											__LIB_0__::func_190("INHALE_NEW");
											iLocal_50 = 0;
											iLocal_51 = 1;
											iLocal_52 = 0;
										}
									}
								}
							}
						}
						if (uParam0->f_35 == 0)
						{
							if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/) && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
								{
									PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face", uParam0->f_11);
									AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_24, "YOGA_INHALE", *uParam0, "FAMILY_5_SOUNDS", false, 0);
									uParam0->f_34 = 40f;
									uParam0->f_33 = 30f;
									uParam0->f_35 = 1;
									uParam0->f_36 = 0;
									uParam0->f_40 = 0;
									uParam0->f_37 = 0;
									uParam0->f_38 = 0;
									uParam0->f_42 = 0;
									uParam0->f_44 = 0;
									uParam0->f_45 = 0;
									uParam0->f_22 = 1;
									uParam0->f_23 = 0;
								}
							}
						}
						else
						{
							uParam0->f_34 = __LIB_0__::func_331((uParam0->f_34 + (uParam0->f_48 * SYSTEM::TIMESTEP())), 40f, 100f);
							uParam0->f_33 = __LIB_0__::func_331((uParam0->f_33 + (uParam0->f_48 * SYSTEM::TIMESTEP())), 30f, 90f);
							if ((AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25)) && (uParam0->f_33 == 90f && uParam0->f_34 == 100f))
							{
								if (uParam0->f_40 == 0)
								{
									uParam0->f_39 = (1200 + MISC::GET_RANDOM_INT_IN_RANGE(0, 401));
									uParam0->f_40 = MISC::GET_GAME_TIMER();
								}
								else if (__LIB_16__::func_302(uParam0->f_39, uParam0->f_40))
								{
									uParam0->f_10 = 1;
									uParam0->f_21 = 0;
									uParam0->f_23 = 0;
									uParam0->f_55 = MISC::GET_GAME_TIMER();
									if (__LIB_40__::func_703())
									{
										HUD::CLEAR_HELP(true);
										SYSTEM::SETTIMERA(0);
										iLocal_50 = 0;
										iLocal_51 = 0;
										iLocal_52 = 0;
									}
								}
							}
						}
						if (__LIB_43__::func_614(uParam0, SYSTEM::FLOOR(uParam0->f_34), 40, 100))
						{
							uParam0->f_37 = 1;
						}
						else
						{
							uParam0->f_37 = 0;
						}
						break;
					case 1:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("EXHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_52)
										{
											__LIB_0__::func_190("EXHALE_NEW");
											iLocal_50 = 0;
											iLocal_51 = 0;
											iLocal_52 = 1;
										}
									}
								}
							}
						}
						if (uParam0->f_36 == 0)
						{
							if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
								{
									iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
									switch (iVar1)
									{
										case 1:
										case 4:
										case 5:
											AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_25, "YOGA_EXHALE", *uParam0, "FAMILY_5_SOUNDS", false, 0);
											AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_25, "Version", SYSTEM::TO_FLOAT(iVar1));
											PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face_exhale", uParam0->f_11);
											break;
										case 2:
										case 3:
											AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_25, "YOGA_EXHALE", *uParam0, "FAMILY_5_SOUNDS", false, 0);
											AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_25, "Version", SYSTEM::TO_FLOAT(iVar1));
											PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face_exhale_oow", uParam0->f_11);
											break;
									}
									uParam0->f_34 = 100f;
									uParam0->f_33 = 90f;
									uParam0->f_36 = 1;
									uParam0->f_35 = 0;
									uParam0->f_40 = 0;
									uParam0->f_38 = 0;
									uParam0->f_23 = 1;
									uParam0->f_45 = 0;
								}
							}
							else if (__LIB_16__::func_302(15000, uParam0->f_55))
							{
								uParam0->f_9 = 6;
							}
						}
						else
						{
							uParam0->f_34 = __LIB_0__::func_331((uParam0->f_34 - (uParam0->f_48 * SYSTEM::TIMESTEP())), 40f, 100f);
							uParam0->f_33 = __LIB_0__::func_331((uParam0->f_33 - (uParam0->f_48 * SYSTEM::TIMESTEP())), 30f, 90f);
							if ((AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25)) && (uParam0->f_33 == 30f && uParam0->f_34 == 40f))
							{
								if (uParam0->f_40 == 0)
								{
									uParam0->f_39 = (500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 251));
									uParam0->f_40 = MISC::GET_GAME_TIMER();
								}
								else if (__LIB_16__::func_302(uParam0->f_39, uParam0->f_40))
								{
									uParam0->f_15++;
									uParam0->f_10 = 0;
									uParam0->f_20 = 0;
									uParam0->f_22 = 0;
								}
							}
						}
						if (__LIB_43__::func_613(uParam0, SYSTEM::FLOOR(uParam0->f_33), SYSTEM::FLOOR(uParam0->f_34), 40, 100))
						{
							uParam0->f_38 = 1;
							if (uParam0->f_37 == 1 && uParam0->f_38 == 1)
							{
								if (uParam0->f_42 == 0)
								{
									uParam0->f_41++;
									uParam0->f_42 = 1;
								}
								uParam0->f_43 = 1;
							}
						}
						if (uParam0->f_43 == 1)
						{
							uParam0->f_16++;
							uParam0->f_54 = __LIB_0__::func_331((uParam0->f_54 + 0.035f), uParam0->f_54, 0.5f);
							uParam0->f_51 = __LIB_0__::func_331((uParam0->f_51 + 0.01035f), uParam0->f_51, 0.145f);
							if (!PED::IS_PED_INJURED(*uParam0))
							{
								PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
								PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, false, "blushing");
							}
							uParam0->f_44 = 0;
							uParam0->f_45 = 0;
							if (uParam0->f_16 == iLocal_33[iParam1])
							{
								if (iParam3 == 0)
								{
									uParam0->f_9 = 5;
								}
								else if (iParam3 == 1)
								{
									__LIB_40__::func_698(uParam0, Local_38[iParam1 /*16*/][(iLocal_34[iParam1] - 1)], "START_POSE");
									uParam0->f_49 = 1;
									uParam0->f_9 = 4;
								}
							}
							else
							{
								uParam0->f_15 = 0;
								uParam0->f_41 = 0;
								iLocal_53 = 0;
								iLocal_54 = 0;
								uParam0->f_27 = Local_39[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0];
								uParam0->f_28 = Local_39[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1];
								uParam0->f_9 = 3;
							}
						}
						else if (uParam0->f_15 == iParam2)
						{
							uParam0->f_9 = 6;
						}
						break;
				}
			}
			else
			{
				uParam0->f_9 = 6;
			}
			break;
		case 3:
			if (__LIB_40__::func_703())
			{
				HUD::CLEAR_HELP(true);
				iLocal_50 = 0;
				iLocal_51 = 0;
				iLocal_52 = 0;
			}
			uParam0->f_31 = 1;
			uParam0->f_32 = 1;
			__LIB_40__::func_704(Local_39[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0], Local_39[iParam1 /*22*/][uParam0->f_16 /*3*/][0], Local_40[iParam1 /*22*/][uParam0->f_16 /*3*/][0], &(uParam0->f_27), 4);
			__LIB_40__::func_704(Local_39[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1], Local_39[iParam1 /*22*/][uParam0->f_16 /*3*/][1], Local_40[iParam1 /*22*/][uParam0->f_16 /*3*/][1], &(uParam0->f_28), 4);
			if (uParam0->f_27 == Local_39[iParam1 /*22*/][uParam0->f_16 /*3*/][0] && uParam0->f_28 == Local_39[iParam1 /*22*/][uParam0->f_16 /*3*/][1])
			{
				uParam0->f_9 = 0;
			}
			break;
		case 4:
			if (__LIB_40__::func_703())
			{
				HUD::CLEAR_HELP(true);
				iLocal_50 = 0;
				iLocal_51 = 0;
				iLocal_52 = 0;
			}
			func_354(uParam0, iParam1, fParam4);
			if (__LIB_40__::func_691(*uParam0, 2))
			{
				HUD::CLEAR_HELP(true);
				uParam0->f_9 = 5;
			}
			break;
		case 5:
			return 1;
			break;
		case 6:
			break;
	}
	return 0;
}

void func_354(var uParam0, int iParam1, float fParam2)//Position - 0x654F6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_34[iParam1] - 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, Local_38[iParam1 /*16*/][iVar0], 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(*uParam0, uParam0->f_11, Local_38[iParam1 /*16*/][iVar0], fParam2);
		}
		iVar0++;
	}
}

int func_356(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x655C8
{
	var uVar0;
	int iVar1;
	int iVar2;
	fLocal_59 = 0f;
	iLocal_60 = 255;
	iLocal_61 = 255;
	iLocal_62 = 255;
	iLocal_63 = 255;
	iLocal_64 = 255;
	iLocal_65 = 255;
	iVar1 = 0;
	iVar2 = 0;
	if (func_358(&(uParam0->f_29), &(uParam0->f_31), 0, Local_39[iParam1 /*22*/][iParam2 /*3*/][0], iParam3))
	{
		fLocal_59 = (fLocal_59 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_60, &iLocal_61, &iLocal_62, &uVar0);
		iVar1 = 1;
	}
	if (func_358(&(uParam0->f_30), &(uParam0->f_32), 1, Local_39[iParam1 /*22*/][iParam2 /*3*/][1], iParam3))
	{
		fLocal_59 = (fLocal_59 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_63, &iLocal_64, &iLocal_65, &uVar0);
		iVar2 = 1;
	}
	fLocal_59 = __LIB_40__::func_699(fLocal_59, 100f);
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 10, SYSTEM::FLOOR(fLocal_59));
	if (iVar1 && iVar2)
	{
		return 1;
	}
	return 0;
}

int func_358(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x656DE
{
	*uParam0 = func_361(iParam2);
	*uParam1 = func_359(iParam2);
	if (*uParam1 == 0)
	{
		switch (iParam4)
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						if (*uParam0 >= 345 || *uParam0 <= 15)
						{
							return 1;
						}
						break;
					case 45:
						if (*uParam0 >= 30 && *uParam0 <= 60)
						{
							return 1;
						}
						break;
					case 90:
						if (*uParam0 >= 75 && *uParam0 <= 105)
						{
							return 1;
						}
						break;
					case 135:
						if (*uParam0 >= 120 && *uParam0 <= 150)
						{
							return 1;
						}
						break;
					case 180:
						if (*uParam0 >= 165 && *uParam0 <= 195)
						{
							return 1;
						}
						break;
					case 225:
						if (*uParam0 >= 210 && *uParam0 <= 240)
						{
							return 1;
						}
						break;
					case 270:
						if (*uParam0 >= 255 && *uParam0 <= 285)
						{
							return 1;
						}
						break;
					case 315:
						if (*uParam0 >= 300 && *uParam0 <= 330)
						{
							return 1;
						}
						break;
				}
				break;
			case 1:
				switch (iParam3)
				{
					case 0:
						if (*uParam0 >= 305 || *uParam0 <= 55)
						{
							return 1;
						}
						break;
					case 45:
						if (*uParam0 >= 350 || *uParam0 <= 100)
						{
							return 1;
						}
						break;
					case 90:
						if (*uParam0 >= 35 && *uParam0 <= 145)
						{
							return 1;
						}
						break;
					case 135:
						if (*uParam0 >= 80 && *uParam0 <= 190)
						{
							return 1;
						}
						break;
					case 180:
						if (*uParam0 >= 125 && *uParam0 <= 235)
						{
							return 1;
						}
						break;
					case 225:
						if (*uParam0 >= 170 && *uParam0 <= 280)
						{
							return 1;
						}
						break;
					case 270:
						if (*uParam0 >= 215 && *uParam0 <= 325)
						{
							return 1;
						}
						break;
					case 315:
						if (*uParam0 >= 260 || *uParam0 <= 10)
						{
							return 1;
						}
						break;
				}
				break;
			}
	}
	return 0;
}

int func_359(int iParam0)//Position - 0x65944
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	var uVar5;
	var uVar6;
	__LIB_0__::func_603(&iVar0, &iVar1, &iVar2, &iVar3, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (bLocal_68)
		{
			uVar5 = iVar2;
			uVar6 = iVar3;
			iVar2 = iVar0;
			iVar3 = iVar1;
			iVar0 = uVar5;
			iVar1 = uVar6;
		}
	}
	switch (iParam0)
	{
		case 0:
			if (((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && iLocal_66 != 0) && iLocal_67 != 0) && bLocal_68 == 1)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar0), IntToFloat(iVar1), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
		case 1:
			if (((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && iLocal_66 != 0) && iLocal_67 != 0) && bLocal_68 == 0)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar2), IntToFloat(iVar3), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_361(int iParam0)//Position - 0x65AFA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	__LIB_0__::func_341(&iVar2, &iVar3, &iVar4, &iVar5, 0, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bLocal_68)
		{
			uVar6 = iVar4;
			uVar7 = iVar5;
			iVar4 = iVar2;
			iVar5 = iVar3;
			iVar2 = uVar6;
			iVar3 = uVar7;
			iVar2 = (iVar2 / 4);
			iVar3 = (iVar3 / 4);
			if (iVar2 == 0 || iVar3 == 0)
			{
				iVar2 = iLocal_66;
				iVar3 = iLocal_67;
			}
			iLocal_66 = iVar2;
			iLocal_67 = iVar3;
		}
		else
		{
			iVar4 = (iVar4 / 4);
			iVar5 = (iVar5 / 4);
			if (iVar4 == 0 || iVar5 == 0)
			{
				iVar4 = iLocal_66;
				iVar5 = iLocal_67;
			}
			iLocal_66 = iVar4;
			iLocal_67 = iVar5;
		}
	}
	iVar0 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3)));
	iVar1 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar4), SYSTEM::TO_FLOAT(iVar5)));
	if (iVar2 < 0)
	{
		iVar0 = (180 + (180 - iVar0));
	}
	if (iVar4 < 0)
	{
		iVar1 = (180 + (180 - iVar1));
	}
	switch (iParam0)
	{
		case 0:
			return iVar0;
			break;
		case 1:
			return iVar1;
			break;
	}
	return 0;
}

void func_364(int iParam0, int iParam1)//Position - 0x65E79
{
	iLocal_33[0] = 3;
	iLocal_33[1] = 4;
	iLocal_33[2] = 7;
	iLocal_34[0] = 7;
	Local_38[0 /*16*/][0] = "start_to_a1";
	Local_38[0 /*16*/][1] = "a1_pose";
	Local_38[0 /*16*/][2] = "a1_to_a2";
	Local_38[0 /*16*/][3] = "a2_pose";
	Local_38[0 /*16*/][4] = "a2_to_a3";
	Local_38[0 /*16*/][5] = "a3_pose";
	Local_38[0 /*16*/][6] = "a3_to_start";
	iLocal_34[1] = 9;
	Local_38[1 /*16*/][0] = "start_to_a1";
	Local_38[1 /*16*/][1] = "a1_pose";
	Local_38[1 /*16*/][2] = "a1_to_a2";
	Local_38[1 /*16*/][3] = "a2_pose";
	Local_38[1 /*16*/][4] = "a2_to_a3";
	Local_38[1 /*16*/][5] = "a3_pose";
	Local_38[1 /*16*/][6] = "a3_to_b4";
	Local_38[1 /*16*/][7] = "b4_pose";
	Local_38[1 /*16*/][8] = "b4_to_start";
	iLocal_34[2] = 15;
	Local_38[2 /*16*/][0] = "start_to_c1";
	Local_38[2 /*16*/][1] = "c1_pose";
	Local_38[2 /*16*/][2] = "c1_to_c2";
	Local_38[2 /*16*/][3] = "c2_pose";
	Local_38[2 /*16*/][4] = "c2_to_c3";
	Local_38[2 /*16*/][5] = "c3_pose";
	Local_38[2 /*16*/][6] = "c3_to_c4";
	Local_38[2 /*16*/][7] = "c4_pose";
	Local_38[2 /*16*/][8] = "c4_to_c5";
	Local_38[2 /*16*/][9] = "c5_pose";
	Local_38[2 /*16*/][10] = "c5_to_c6";
	Local_38[2 /*16*/][11] = "c6_pose";
	Local_38[2 /*16*/][12] = "c6_to_c7";
	Local_38[2 /*16*/][13] = "c7_pose";
	Local_38[2 /*16*/][14] = "c7_to_start";
	Local_39[0 /*22*/][0 /*3*/][0] = 180;
	Local_39[0 /*22*/][0 /*3*/][1] = 180;
	Local_40[0 /*22*/][0 /*3*/][0] = 0;
	Local_40[0 /*22*/][0 /*3*/][1] = 0;
	Local_39[0 /*22*/][1 /*3*/][0] = 270;
	Local_39[0 /*22*/][1 /*3*/][1] = 90;
	Local_40[0 /*22*/][1 /*3*/][0] = 0;
	Local_40[0 /*22*/][1 /*3*/][1] = 1;
	Local_39[0 /*22*/][2 /*3*/][0] = 315;
	Local_39[0 /*22*/][2 /*3*/][1] = 135;
	Local_40[0 /*22*/][2 /*3*/][0] = 0;
	Local_40[0 /*22*/][2 /*3*/][1] = 0;
	Local_39[1 /*22*/][0 /*3*/][0] = 225;
	Local_39[1 /*22*/][0 /*3*/][1] = 135;
	Local_40[1 /*22*/][0 /*3*/][0] = 0;
	Local_40[1 /*22*/][0 /*3*/][1] = 0;
	Local_39[1 /*22*/][1 /*3*/][0] = 315;
	Local_39[1 /*22*/][1 /*3*/][1] = 45;
	Local_40[1 /*22*/][1 /*3*/][0] = 0;
	Local_40[1 /*22*/][1 /*3*/][1] = 1;
	Local_39[1 /*22*/][2 /*3*/][0] = 270;
	Local_39[1 /*22*/][2 /*3*/][1] = 135;
	Local_40[1 /*22*/][2 /*3*/][0] = 1;
	Local_40[1 /*22*/][2 /*3*/][1] = 0;
	Local_39[1 /*22*/][3 /*3*/][0] = 225;
	Local_39[1 /*22*/][3 /*3*/][1] = 0;
	Local_40[1 /*22*/][3 /*3*/][0] = 1;
	Local_40[1 /*22*/][3 /*3*/][1] = 1;
	Local_39[2 /*22*/][0 /*3*/][0] = 270;
	Local_39[2 /*22*/][0 /*3*/][1] = 90;
	Local_40[2 /*22*/][0 /*3*/][0] = 0;
	Local_40[2 /*22*/][0 /*3*/][1] = 0;
	Local_39[2 /*22*/][1 /*3*/][0] = 180;
	Local_39[2 /*22*/][1 /*3*/][1] = 180;
	Local_40[2 /*22*/][1 /*3*/][0] = 1;
	Local_40[2 /*22*/][1 /*3*/][1] = 0;
	Local_39[2 /*22*/][2 /*3*/][0] = 225;
	Local_39[2 /*22*/][2 /*3*/][1] = 135;
	Local_40[2 /*22*/][2 /*3*/][0] = 0;
	Local_40[2 /*22*/][2 /*3*/][1] = 1;
	Local_39[2 /*22*/][3 /*3*/][0] = 180;
	Local_39[2 /*22*/][3 /*3*/][1] = 180;
	Local_40[2 /*22*/][3 /*3*/][0] = 1;
	Local_40[2 /*22*/][3 /*3*/][1] = 0;
	Local_39[2 /*22*/][4 /*3*/][0] = 0;
	Local_39[2 /*22*/][4 /*3*/][1] = 0;
	Local_40[2 /*22*/][4 /*3*/][0] = 0;
	Local_40[2 /*22*/][4 /*3*/][1] = 1;
	Local_39[2 /*22*/][5 /*3*/][0] = 225;
	Local_39[2 /*22*/][5 /*3*/][1] = 135;
	Local_40[2 /*22*/][5 /*3*/][0] = 1;
	Local_40[2 /*22*/][5 /*3*/][1] = 0;
	Local_39[2 /*22*/][6 /*3*/][0] = 45;
	Local_39[2 /*22*/][6 /*3*/][1] = 315;
	Local_40[2 /*22*/][6 /*3*/][0] = 0;
	Local_40[2 /*22*/][6 /*3*/][1] = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Local_44[0 /*7*/][0 /*3*/] = { -788.3289f, 187.78987f, 72.757515f };
					Local_45[0 /*7*/][0 /*3*/] = { -2.995436f, 0.021138f, 119.40729f };
					Local_46[0 /*3*/][0] = 38.843723f;
					Local_44[0 /*7*/][1 /*3*/] = { -788.3289f, 187.78987f, 72.757515f };
					Local_45[0 /*7*/][1 /*3*/] = { -2.995436f, 0.021138f, 119.40729f };
					Local_46[0 /*3*/][1] = 38.843723f;
					iLocal_48[0] = 0;
					Local_49[0 /*4*/][0] = 0;
					Local_49[0 /*4*/][1] = 0;
					Local_49[0 /*4*/][2] = 0;
					Local_44[1 /*7*/][0 /*3*/] = { -777.07263f, 178.25827f, 73.16133f };
					Local_45[1 /*7*/][0 /*3*/] = { 0.894393f, 0.026403f, 59.980026f };
					Local_46[1 /*3*/][0] = 38.472504f;
					Local_44[1 /*7*/][1 /*3*/] = { -777.07263f, 178.25827f, 73.16133f };
					Local_45[1 /*7*/][1 /*3*/] = { 0.894393f, 0.026403f, 59.980026f };
					Local_46[1 /*3*/][1] = 38.472504f;
					iLocal_48[1] = 0;
					Local_49[1 /*4*/][0] = 0;
					Local_49[1 /*4*/][1] = 0;
					Local_49[1 /*4*/][2] = 0;
					Local_44[2 /*7*/][0 /*3*/] = { -789.17566f, 189.2423f, 72.39192f };
					Local_45[2 /*7*/][0 /*3*/] = { 7.114471f, 0.02728f, 162.32434f };
					Local_46[2 /*3*/][0] = 39.136875f;
					Local_44[2 /*7*/][1 /*3*/] = { -789.17566f, 189.2423f, 72.39192f };
					Local_45[2 /*7*/][1 /*3*/] = { 7.114471f, 0.02728f, 162.32434f };
					Local_46[2 /*3*/][1] = 39.136875f;
					iLocal_48[2] = 0;
					Local_49[2 /*4*/][0] = 1;
					Local_49[2 /*4*/][1] = 0;
					Local_49[2 /*4*/][2] = 1;
					Local_44[3 /*7*/][0 /*3*/] = { -789.80994f, 186.57169f, 73.313194f };
					Local_45[3 /*7*/][0 /*3*/] = { -4.724632f, -0.029824f, 123.259636f };
					Local_46[3 /*3*/][0] = 36.660973f;
					Local_44[3 /*7*/][1 /*3*/] = { -789.80994f, 186.57169f, 73.313194f };
					Local_45[3 /*7*/][1 /*3*/] = { 2.853551f, -0.029824f, 107.23911f };
					Local_46[3 /*3*/][1] = 36.660973f;
					iLocal_47[3] = 2500;
					iLocal_48[3] = 0;
					Local_49[3 /*4*/][0] = 1;
					Local_49[3 /*4*/][1] = 1;
					Local_49[3 /*4*/][2] = 1;
					break;
				case 1:
					Local_44[0 /*7*/][0 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_45[0 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_46[0 /*3*/][0] = 39.35555f;
					Local_44[0 /*7*/][1 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_45[0 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_46[0 /*3*/][1] = 39.35555f;
					iLocal_48[0] = 0;
					Local_49[0 /*4*/][0] = 0;
					Local_49[0 /*4*/][1] = 0;
					Local_49[0 /*4*/][2] = 0;
					Local_44[1 /*7*/][0 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_45[1 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_46[1 /*3*/][0] = 39.35555f;
					Local_44[1 /*7*/][1 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_45[1 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_46[1 /*3*/][1] = 39.35555f;
					iLocal_48[1] = 0;
					Local_49[1 /*4*/][0] = 0;
					Local_49[1 /*4*/][1] = 0;
					Local_49[1 /*4*/][2] = 0;
					Local_44[2 /*7*/][0 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_45[2 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_46[2 /*3*/][0] = 39.35555f;
					Local_44[2 /*7*/][1 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_45[2 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_46[2 /*3*/][1] = 39.35555f;
					iLocal_48[2] = 0;
					Local_49[2 /*4*/][0] = 1;
					Local_49[2 /*4*/][1] = 0;
					Local_49[2 /*4*/][2] = 1;
					Local_44[3 /*7*/][0 /*3*/] = { 2863.8467f, 5945.488f, 357.8748f };
					Local_45[3 /*7*/][0 /*3*/] = { 8.808952f, 0.000863f, 79.57675f };
					Local_46[3 /*3*/][0] = 39.35555f;
					Local_44[3 /*7*/][1 /*3*/] = { 2863.3684f, 5945.4023f, 357.95956f };
					Local_45[3 /*7*/][1 /*3*/] = { 14.608078f, 0.000863f, 76.6072f };
					Local_46[3 /*3*/][1] = 39.35555f;
					iLocal_47[3] = 3500;
					iLocal_48[3] = 0;
					Local_49[3 /*4*/][0] = 1;
					Local_49[3 /*4*/][1] = 1;
					Local_49[3 /*4*/][2] = 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Local_44[0 /*7*/][0 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_45[0 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_46[0 /*3*/][0] = 39.35555f;
					Local_44[0 /*7*/][1 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_45[0 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_46[0 /*3*/][1] = 39.35555f;
					iLocal_48[0] = 0;
					Local_49[0 /*4*/][0] = 1;
					Local_49[0 /*4*/][1] = 0;
					Local_49[0 /*4*/][2] = 0;
					Local_44[1 /*7*/][0 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_45[1 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_46[1 /*3*/][0] = 39.35555f;
					Local_44[1 /*7*/][1 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_45[1 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_46[1 /*3*/][1] = 39.35555f;
					iLocal_48[1] = 0;
					Local_49[1 /*4*/][0] = 1;
					Local_49[1 /*4*/][1] = 0;
					Local_49[1 /*4*/][2] = 1;
					Local_44[2 /*7*/][0 /*3*/] = { -788.8512f, 184.02661f, 72.53404f };
					Local_45[2 /*7*/][0 /*3*/] = { 4.066512f, -0.006667f, 50.292328f };
					Local_46[2 /*3*/][0] = 35.458775f;
					Local_44[2 /*7*/][1 /*3*/] = { -788.8512f, 184.02661f, 72.53404f };
					Local_45[2 /*7*/][1 /*3*/] = { 4.066512f, -0.006667f, 50.292328f };
					Local_46[2 /*3*/][1] = 35.458775f;
					iLocal_48[2] = 1500;
					Local_49[2 /*4*/][0] = 1;
					Local_49[2 /*4*/][1] = 0;
					Local_49[2 /*4*/][2] = 1;
					Local_44[3 /*7*/][0 /*3*/] = { -789.0597f, 187.83965f, 72.44362f };
					Local_45[3 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_46[3 /*3*/][0] = 38.76796f;
					Local_44[3 /*7*/][1 /*3*/] = { -789.0597f, 187.83965f, 72.44362f };
					Local_45[3 /*7*/][1 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_46[3 /*3*/][1] = 38.76796f;
					iLocal_48[3] = 1500;
					Local_49[3 /*4*/][0] = 1;
					Local_49[3 /*4*/][1] = 0;
					Local_49[3 /*4*/][2] = 1;
					Local_44[4 /*7*/][0 /*3*/] = { -789.0597f, 187.83965f, 72.44362f };
					Local_45[4 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_46[4 /*3*/][0] = 38.76796f;
					Local_44[4 /*7*/][1 /*3*/] = { -790.05273f, 187.87793f, 73.247765f };
					Local_45[4 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.77707f };
					Local_46[4 /*3*/][1] = 39.35555f;
					iLocal_47[4] = 5000;
					iLocal_48[4] = 0;
					Local_49[4 /*4*/][0] = 1;
					Local_49[4 /*4*/][1] = 1;
					Local_49[4 /*4*/][2] = 1;
					break;
				case 1:
					Local_44[0 /*7*/][0 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_45[0 /*7*/][0 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_46[0 /*3*/][0] = 39.35555f;
					Local_44[0 /*7*/][1 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_45[0 /*7*/][1 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_46[0 /*3*/][1] = 39.35555f;
					iLocal_48[0] = 0;
					Local_49[0 /*4*/][0] = 1;
					Local_49[0 /*4*/][1] = 0;
					Local_49[0 /*4*/][2] = 0;
					Local_44[1 /*7*/][0 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_45[1 /*7*/][0 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_46[1 /*3*/][0] = 39.35555f;
					Local_44[1 /*7*/][1 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_45[1 /*7*/][1 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_46[1 /*3*/][1] = 39.35555f;
					iLocal_48[1] = 0;
					Local_49[1 /*4*/][0] = 1;
					Local_49[1 /*4*/][1] = 0;
					Local_49[1 /*4*/][2] = 1;
					Local_44[2 /*7*/][0 /*3*/] = { 2867.4824f, 5947.726f, 358.18396f };
					Local_45[2 /*7*/][0 /*3*/] = { 2.762805f, -0.036948f, 111.423454f };
					Local_46[2 /*3*/][0] = 39.35555f;
					Local_44[2 /*7*/][1 /*3*/] = { 2867.4824f, 5947.726f, 358.18396f };
					Local_45[2 /*7*/][1 /*3*/] = { 2.762805f, -0.036948f, 111.423454f };
					Local_46[2 /*3*/][1] = 39.35555f;
					iLocal_48[2] = 1500;
					Local_49[2 /*4*/][0] = 1;
					Local_49[2 /*4*/][1] = 0;
					Local_49[2 /*4*/][2] = 1;
					Local_44[3 /*7*/][0 /*3*/] = { 2863.6633f, 5943.965f, 357.336f };
					Local_45[3 /*7*/][0 /*3*/] = { 12.750703f, 0.011422f, 62.85451f };
					Local_46[3 /*3*/][0] = 39.35555f;
					Local_44[3 /*7*/][1 /*3*/] = { 2863.6633f, 5943.965f, 357.336f };
					Local_45[3 /*7*/][1 /*3*/] = { 12.750703f, 0.011422f, 62.85451f };
					Local_46[3 /*3*/][1] = 39.35555f;
					iLocal_48[3] = 1500;
					Local_49[3 /*4*/][0] = 1;
					Local_49[3 /*4*/][1] = 0;
					Local_49[3 /*4*/][2] = 1;
					Local_44[4 /*7*/][0 /*3*/] = { 2863.6633f, 5943.965f, 357.336f };
					Local_45[4 /*7*/][0 /*3*/] = { 12.750703f, 0.011422f, 62.85451f };
					Local_46[4 /*3*/][0] = 39.35555f;
					Local_44[4 /*7*/][1 /*3*/] = { 2863.3408f, 5944.931f, 357.7342f };
					Local_45[4 /*7*/][1 /*3*/] = { 19.264002f, -0.043584f, 59.654526f };
					Local_46[4 /*3*/][1] = 39.35555f;
					iLocal_47[4] = 5000;
					iLocal_48[4] = 0;
					Local_49[4 /*4*/][0] = 1;
					Local_49[4 /*4*/][1] = 1;
					Local_49[4 /*4*/][2] = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Local_44[0 /*7*/][0 /*3*/] = { -790.05273f, 187.87793f, 73.247765f };
					Local_45[0 /*7*/][0 /*3*/] = { -0.7329f, -0.070113f, 153.77707f };
					Local_46[0 /*3*/][0] = 39.35555f;
					Local_44[0 /*7*/][1 /*3*/] = { -790.05273f, 187.87793f, 73.247765f };
					Local_45[0 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.77707f };
					Local_46[0 /*3*/][1] = 39.35555f;
					iLocal_48[0] = 0;
					Local_49[0 /*4*/][0] = 0;
					Local_49[0 /*4*/][1] = 0;
					Local_49[0 /*4*/][2] = 1;
					Local_44[1 /*7*/][0 /*3*/] = { -789.2074f, 185.48311f, 71.91133f };
					Local_45[1 /*7*/][0 /*3*/] = { 25.596989f, -0.035805f, 57.89385f };
					Local_46[1 /*3*/][0] = 38.164177f;
					Local_44[1 /*7*/][1 /*3*/] = { -789.2074f, 185.48311f, 71.91133f };
					Local_45[1 /*7*/][1 /*3*/] = { 25.596989f, -0.035805f, 57.89385f };
					Local_46[1 /*3*/][1] = 38.164177f;
					iLocal_48[1] = 0;
					Local_49[1 /*4*/][0] = 1;
					Local_49[1 /*4*/][1] = 0;
					Local_49[1 /*4*/][2] = 1;
					Local_44[2 /*7*/][0 /*3*/] = { -788.8375f, 183.62415f, 71.953735f };
					Local_45[2 /*7*/][0 /*3*/] = { 10.657258f, -0.03214f, 28.324736f };
					Local_46[2 /*3*/][0] = 39.14109f;
					Local_44[2 /*7*/][1 /*3*/] = { -788.8375f, 183.62415f, 71.953735f };
					Local_45[2 /*7*/][1 /*3*/] = { 10.657258f, -0.03214f, 28.324736f };
					Local_46[2 /*3*/][1] = 39.14109f;
					iLocal_48[2] = 1500;
					Local_49[2 /*4*/][0] = 1;
					Local_49[2 /*4*/][1] = 0;
					Local_49[2 /*4*/][2] = 1;
					Local_44[3 /*7*/][0 /*3*/] = { -788.9983f, 186.10419f, 72.044945f };
					Local_45[3 /*7*/][0 /*3*/] = { 5.022902f, -0.035508f, 79.215454f };
					Local_46[3 /*3*/][0] = 29.573942f;
					Local_44[3 /*7*/][1 /*3*/] = { -788.9983f, 186.10419f, 72.044945f };
					Local_45[3 /*7*/][1 /*3*/] = { 5.022902f, -0.035508f, 79.215454f };
					Local_46[3 /*3*/][1] = 29.573942f;
					iLocal_48[3] = 1500;
					Local_49[3 /*4*/][0] = 1;
					Local_49[3 /*4*/][1] = 0;
					Local_49[3 /*4*/][2] = 1;
					Local_44[4 /*7*/][0 /*3*/] = { -790.51306f, 188.46843f, 71.985f };
					Local_45[4 /*7*/][0 /*3*/] = { 10.313763f, -0.036726f, 167.24973f };
					Local_46[4 /*3*/][0] = 31.385864f;
					Local_44[4 /*7*/][1 /*3*/] = { -790.51306f, 188.46843f, 71.985f };
					Local_45[4 /*7*/][1 /*3*/] = { 10.313763f, -0.036726f, 167.24973f };
					Local_46[4 /*3*/][1] = 31.385864f;
					iLocal_48[4] = 1500;
					Local_49[4 /*4*/][0] = 1;
					Local_49[4 /*4*/][1] = 0;
					Local_49[4 /*4*/][2] = 1;
					Local_44[5 /*7*/][0 /*3*/] = { -786.6319f, 188.01498f, 72.13353f };
					Local_45[5 /*7*/][0 /*3*/] = { 4.104248f, -0.02012f, 115.94087f };
					Local_46[5 /*3*/][0] = 38.67459f;
					Local_44[5 /*7*/][1 /*3*/] = { -787.84155f, 187.67157f, 72.22159f };
					Local_45[5 /*7*/][1 /*3*/] = { 4.104248f, -0.02012f, 118.84765f };
					Local_46[5 /*3*/][1] = 38.67459f;
					iLocal_47[5] = 25000;
					iLocal_48[5] = 1500;
					Local_49[5 /*4*/][0] = 1;
					Local_49[5 /*4*/][1] = 1;
					Local_49[5 /*4*/][2] = 1;
					Local_44[6 /*7*/][0 /*3*/] = { -787.4744f, 188.10706f, 72.18631f };
					Local_45[6 /*7*/][0 /*3*/] = { 4.013949f, 0.013702f, 116.10933f };
					Local_46[6 /*3*/][0] = 38.67459f;
					Local_44[6 /*7*/][1 /*3*/] = { -787.4744f, 188.10706f, 72.18631f };
					Local_45[6 /*7*/][1 /*3*/] = { 4.013949f, 0.013702f, 116.10933f };
					Local_46[6 /*3*/][1] = 38.67459f;
					iLocal_48[6] = 1500;
					Local_49[6 /*4*/][0] = 0;
					Local_49[6 /*4*/][1] = 0;
					Local_49[6 /*4*/][2] = 1;
					Local_44[7 /*7*/][0 /*3*/] = { -788.8564f, 186.74655f, 72.63398f };
					Local_45[7 /*7*/][0 /*3*/] = { 2.036967f, 0.013663f, 104.24606f };
					Local_46[7 /*3*/][0] = 38.67459f;
					Local_44[7 /*7*/][1 /*3*/] = { -788.8564f, 186.74655f, 72.63398f };
					Local_45[7 /*7*/][1 /*3*/] = { 13.553912f, 0.013663f, 104.24606f };
					Local_46[7 /*3*/][1] = 38.67459f;
					iLocal_47[7] = 3000;
					iLocal_48[7] = 1500;
					Local_49[7 /*4*/][0] = 1;
					Local_49[7 /*4*/][1] = 1;
					Local_49[7 /*4*/][2] = 1;
					break;
				case 1:
					Local_44[0 /*7*/][0 /*3*/] = { 2863.3408f, 5944.931f, 357.7342f };
					Local_45[0 /*7*/][0 /*3*/] = { 19.264002f, -0.043584f, 59.654526f };
					Local_46[0 /*3*/][0] = 39.35555f;
					Local_44[0 /*7*/][1 /*3*/] = { 2863.3408f, 5944.931f, 357.7342f };
					Local_45[0 /*7*/][1 /*3*/] = { 19.264002f, -0.043584f, 59.654526f };
					Local_46[0 /*3*/][1] = 39.35555f;
					iLocal_48[0] = 0;
					Local_49[0 /*4*/][0] = 0;
					Local_49[0 /*4*/][1] = 0;
					Local_49[0 /*4*/][2] = 1;
					Local_44[1 /*7*/][0 /*3*/] = { 2864.4006f, 5936.752f, 358.64877f };
					Local_45[1 /*7*/][0 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_46[1 /*3*/][0] = 39.35555f;
					Local_44[1 /*7*/][1 /*3*/] = { 2864.4006f, 5936.752f, 358.64877f };
					Local_45[1 /*7*/][1 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_46[1 /*3*/][1] = 39.35555f;
					iLocal_48[1] = 0;
					Local_49[1 /*4*/][0] = 1;
					Local_49[1 /*4*/][1] = 0;
					Local_49[1 /*4*/][2] = 1;
					Local_44[2 /*7*/][0 /*3*/] = { 2862.146f, 5943.1934f, 357.363f };
					Local_45[2 /*7*/][0 /*3*/] = { 9.662308f, -0.009141f, 12.365748f };
					Local_46[2 /*3*/][0] = 39.35554f;
					Local_44[2 /*7*/][1 /*3*/] = { 2862.146f, 5943.1934f, 357.363f };
					Local_45[2 /*7*/][1 /*3*/] = { 9.662308f, -0.009141f, 12.365748f };
					Local_46[2 /*3*/][1] = 39.35554f;
					iLocal_48[2] = 1500;
					Local_49[2 /*4*/][0] = 1;
					Local_49[2 /*4*/][1] = 0;
					Local_49[2 /*4*/][2] = 1;
					Local_44[3 /*7*/][0 /*3*/] = { 2863.213f, 5945.368f, 357.28064f };
					Local_45[3 /*7*/][0 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_46[3 /*3*/][0] = 39.35555f;
					Local_44[3 /*7*/][1 /*3*/] = { 2863.213f, 5945.368f, 357.28064f };
					Local_45[3 /*7*/][1 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_46[3 /*3*/][1] = 39.35555f;
					iLocal_48[3] = 1500;
					Local_49[3 /*4*/][0] = 1;
					Local_49[3 /*4*/][1] = 0;
					Local_49[3 /*4*/][2] = 1;
					Local_44[4 /*7*/][0 /*3*/] = { 2859.7124f, 5949.6074f, 357.3627f };
					Local_45[4 /*7*/][0 /*3*/] = { 10.394834f, -0.009141f, -152.23247f };
					Local_46[4 /*3*/][0] = 39.35555f;
					Local_44[4 /*7*/][1 /*3*/] = { 2859.7124f, 5949.6074f, 357.3627f };
					Local_45[4 /*7*/][1 /*3*/] = { 10.394834f, -0.009141f, -152.23247f };
					Local_46[4 /*3*/][1] = 39.35555f;
					iLocal_48[4] = 1500;
					Local_49[4 /*4*/][0] = 1;
					Local_49[4 /*4*/][1] = 0;
					Local_49[4 /*4*/][2] = 1;
					Local_44[5 /*7*/][0 /*3*/] = { 2870.4316f, 5948.1343f, 357.55786f };
					Local_45[5 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_46[5 /*3*/][0] = 39.35555f;
					Local_44[5 /*7*/][1 /*3*/] = { 2868.0322f, 5947.4717f, 357.7983f };
					Local_45[5 /*7*/][1 /*3*/] = { 6.054419f, 0.025583f, 108.79508f };
					Local_46[5 /*3*/][1] = 39.35555f;
					iLocal_47[5] = 25000;
					iLocal_48[5] = 1500;
					Local_49[5 /*4*/][0] = 1;
					Local_49[5 /*4*/][1] = 1;
					Local_49[5 /*4*/][2] = 1;
					Local_44[6 /*7*/][0 /*3*/] = { 2870.4316f, 5948.1343f, 357.55786f };
					Local_45[6 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_46[6 /*3*/][0] = 39.35555f;
					Local_44[6 /*7*/][1 /*3*/] = { 2870.4316f, 5948.1343f, 357.55786f };
					Local_45[6 /*7*/][1 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_46[6 /*3*/][1] = 39.35555f;
					iLocal_48[6] = 1500;
					Local_49[6 /*4*/][0] = 0;
					Local_49[6 /*4*/][1] = 0;
					Local_49[6 /*4*/][2] = 1;
					Local_44[7 /*7*/][0 /*3*/] = { 2863.6287f, 5945.854f, 357.84564f };
					Local_45[7 /*7*/][0 /*3*/] = { 8.768853f, -0.026652f, 91.796844f };
					Local_46[7 /*3*/][0] = 39.35555f;
					Local_44[7 /*7*/][1 /*3*/] = { 2863.1848f, 5946.305f, 358.17773f };
					Local_45[7 /*7*/][1 /*3*/] = { 8.00841f, -0.026652f, 105.28273f };
					Local_46[7 /*3*/][1] = 39.35555f;
					iLocal_47[7] = 3000;
					iLocal_48[7] = 0;
					Local_49[7 /*4*/][0] = 1;
					Local_49[7 /*4*/][1] = 1;
					Local_49[7 /*4*/][2] = 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			Local_41[0 /*3*/] = { -790.58887f, 186.56451f, 72.96992f };
			Local_42[0 /*3*/] = { -1.638374f, 0.042595f, -117.007965f };
			fLocal_43[0] = 31.157114f;
			Local_41[1 /*3*/] = { -791.59436f, 188.75871f, 72.86561f };
			Local_42[1 /*3*/] = { 0.094575f, 0.05061f, -126.9435f };
			fLocal_43[1] = 28.413298f;
			break;
		case 1:
			Local_41[0 /*3*/] = { -789.15674f, 189.34433f, 72.052315f };
			Local_42[0 /*3*/] = { 12.437154f, -0.037231f, -164.07465f };
			fLocal_43[0] = 19.247688f;
			Local_41[1 /*3*/] = { -789.3468f, 185.26166f, 72.098404f };
			Local_42[1 /*3*/] = { 11.946778f, -0.005908f, 19.566986f };
			fLocal_43[1] = 23.4548f;
			break;
		case 2:
			Local_41[0 /*3*/] = { -790.52167f, 187.28793f, 73.18652f };
			Local_42[0 /*3*/] = { -0.678966f, -0.045711f, -139.55168f };
			fLocal_43[0] = 28.094011f;
			Local_41[1 /*3*/] = { -790.42487f, 186.15308f, 73.241264f };
			Local_42[1 /*3*/] = { -0.614909f, 0.001498f, -30.896523f };
			fLocal_43[1] = 32.06593f;
			break;
	}
}

int func_365()//Position - 0x67B68
{
	if (MISC::IS_PC_VERSION())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_55) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_56))
		{
			return 1;
		}
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_55))
	{
		return 1;
	}
	return 0;
}

void func_366()//Position - 0x67BA3
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/))
	{
		if (bLocal_68 == 1)
		{
			bLocal_68 = false;
		}
		else
		{
			bLocal_68 = true;
		}
		iLocal_66 = 0;
		iLocal_67 = 0;
	}
}

void func_368(var uParam0)//Position - 0x67D9A
{
	switch (uParam0->f_7)
	{
		case 1:
			if (uParam0->f_49 == 1)
			{
				if (Local_49[uParam0->f_16 /*4*/][0] == 1)
				{
					if (!CAM::DOES_CAM_EXIST(iLocal_58))
					{
						iLocal_58 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
					}
					if (CAM::DOES_CAM_EXIST(iLocal_58))
					{
						CAM::SET_CAM_PARAMS(iLocal_58, Local_44[uParam0->f_16 /*7*/][0 /*3*/], Local_45[uParam0->f_16 /*7*/][0 /*3*/], Local_46[uParam0->f_16 /*3*/][0], 0, 1, 1, 2);
						if (Local_49[uParam0->f_16 /*4*/][1] == 1)
						{
							CAM::SET_CAM_PARAMS(iLocal_58, Local_44[uParam0->f_16 /*7*/][1 /*3*/], Local_45[uParam0->f_16 /*7*/][1 /*3*/], Local_46[uParam0->f_16 /*3*/][1], iLocal_47[uParam0->f_16], 1, 1, 2);
						}
						CAM::SHAKE_CAM(iLocal_58, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(iLocal_58, Local_49[uParam0->f_16 /*4*/][2]);
					}
				}
				uParam0->f_49 = 0;
			}
			break;
		case 3:
		case 4:
			if (CAM::DOES_CAM_EXIST(iLocal_58))
			{
				if (CAM::IS_CAM_RENDERING(iLocal_58) || CAM::IS_CAM_INTERPOLATING(iLocal_58))
				{
					if (iLocal_48[uParam0->f_17] == 0)
					{
						CAM::DESTROY_CAM(iLocal_58, false);
					}
					else if (uParam0->f_56 == 0)
					{
						uParam0->f_56 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_16__::func_302(iLocal_48[uParam0->f_17], uParam0->f_56))
					{
						CAM::DESTROY_CAM(iLocal_58, false);
					}
				}
			}
			break;
		case 7:
			if (CAM::DOES_CAM_EXIST(iLocal_58))
			{
				switch (uParam0->f_8)
				{
					case 0:
						CAM::SET_CAM_ACTIVE(iLocal_58, false);
						break;
					default:
						break;
					}
			}
			break;
	}
}

int func_369(int iParam0)//Position - 0x67F3A
{
	switch (*iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(iLocal_170))
			{
				iLocal_170 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (iLocal_88 == 0)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, -782.80237f, 187.4389f, 73.326614f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, -787.03296f, 186.88234f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_88 == 1)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, 2870.8262f, 5943.485f, 356.91214f, 11.166323f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, 2867.6682f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(iLocal_170, "HAND_SHAKE", 0.25f);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				CAM::SET_CAM_FAR_CLIP(iLocal_170, 500f);
			}
			*iParam0++;
			break;
		case 1:
			if (iLocal_167 == 0)
			{
				if (Local_90.f_7 == 1)
				{
					if (Local_90.f_9 == 4)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
							{
								iLocal_167 = 1;
							}
						}
					}
				}
			}
			if (iLocal_175 == 0)
			{
				func_368(&Local_90);
				func_10(&Local_90, 1, 0, 981668463);
				if (func_327(&Local_90, 1, 1, 0, 0, 1, iLocal_88, 1))
				{
					func_326();
					func_325(&Local_90, 0, 0);
					iLocal_167 = 0;
					*iParam0++;
				}
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_370(int iParam0)//Position - 0x68100
{
	switch (*iParam0)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(iLocal_170))
			{
				iLocal_170 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				if (iLocal_88 == 0)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, -782.80237f, 187.4389f, 73.326614f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, -787.03296f, 186.88234f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_88 == 1)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, 2870.8262f, 5943.485f, 356.91214f, 11.166323f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, 2867.6682f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(iLocal_170, "HAND_SHAKE", 0.25f);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				CAM::SET_CAM_FAR_CLIP(iLocal_170, 500f);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_170))
			{
				if (iLocal_88 == 0)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, -782.80237f, 187.4389f, 73.326614f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, -787.03296f, 186.88234f, 73.06341f, -3.376375f, 0f, 97.66577f, 39.35555f, 25000, 1, 1, 2);
				}
				else if (iLocal_88 == 1)
				{
					CAM::SET_CAM_PARAMS(iLocal_170, 2870.8262f, 5943.485f, 356.91214f, 11.166323f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_170, 2867.6682f, 5944.266f, 357.5547f, 9.696003f, 0.034384f, 75.40434f, 39.35555f, 25000, 1, 1, 2);
				}
				CAM::SHAKE_CAM(iLocal_170, "HAND_SHAKE", 0.25f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			*iParam0++;
			break;
		case 1:
			if (iLocal_167 == 0)
			{
				if (Local_90.f_7 == 1)
				{
					if (Local_90.f_9 == 4)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_POSITION_COMPLETE"))
							{
								iLocal_167 = 1;
							}
						}
					}
				}
			}
			if (iLocal_175 == 0)
			{
				func_368(&Local_90);
				func_10(&Local_90, 1, 0, 981668463);
				if (func_327(&Local_90, 0, 1, 1, 0, 1, iLocal_88, 1))
				{
					func_326();
					func_325(&Local_90, 0, 0);
					iLocal_167 = 0;
					*iParam0++;
				}
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_371(int iParam0)//Position - 0x683A5
{
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("mini@yoga");
			STREAMING::REQUEST_MODEL(Local_136.f_1);
			STREAMING::REQUEST_MODEL(Local_148.f_1);
			__LIB_32__::func_14(&iLocal_160);
			if (((STREAMING::HAS_ANIM_DICT_LOADED("mini@yoga") && STREAMING::HAS_MODEL_LOADED(Local_136.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_148.f_1)) && __LIB_17__::func_311(&iLocal_160))
			{
				*iParam0++;
			}
			break;
		case 1:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_172))
			{
				__LIB_14__::func_592(Local_152.f_4, Local_152.f_7, Local_152.f_10, Local_152, Local_152.f_3, 0, 0, 1, 0, 0);
				MISC::CLEAR_AREA(Local_89, 15f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PEDS(Local_89, 20f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_89, 20f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_89, 20f, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_89, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_89, 20f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_89, 20f);
				iLocal_172 = PED::CREATE_SYNCHRONIZED_SCENE(Local_176, Local_177, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_172, true);
				if (func_320(&Local_136, 1))
				{
				}
				if (func_320(&Local_148, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
					{
						__LIB_17__::func_310(&iLocal_160, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_148.f_0, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
				}
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_172, "mini@yoga", "intro", 1000f, -1000f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_171 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_171, iLocal_172, "intro_cam", "mini@yoga");
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_136.f_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_148.f_1);
				*iParam0++;
			}
			break;
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_172))
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("YOGA_MINIGAME_TRANQUIL"))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MGYG_START");
					AUDIO::START_AUDIO_SCENE("YOGA_MINIGAME_TRANQUIL");
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_148.f_0))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_172) >= 0.395f)
						{
							ENTITY::DETACH_ENTITY(Local_148.f_0, false, true);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_148.f_0, Local_148.f_2, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(Local_148.f_0, Local_148.f_5, 2, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_148.f_0, true);
						}
					}
				}
				if (iLocal_166 == 0)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_172) >= 0.8f)
					{
						func_13(1);
						iLocal_166 = 1;
					}
				}
				if (((func_320(&Local_133, 1) && func_320(&Local_139, 1)) && func_320(&Local_142, 1)) && func_320(&Local_145, 1))
				{
					if (iLocal_166 == 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
							{
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_172))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_172) >= 1f)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					}
					__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), Local_89, Local_89.f_3, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 1000f, -8f, -1, 1, 0f, false, true, false);
					*iParam0++;
				}
			}
			break;
		case 4:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_172))
			{
				if (iLocal_88 == 0)
				{
					iLocal_170 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_PARAMS(iLocal_170, -782.80237f, 187.4389f, 73.326614f, -3.540541f, 0f, 99.79994f, 39.35555f, 0, 1, 1, 2);
				}
				else if (iLocal_88 == 1)
				{
					iLocal_170 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_PARAMS(iLocal_170, 2870.8262f, 5943.485f, 356.91214f, 11.166323f, 0.034383f, 76.03407f, 39.35555f, 0, 1, 1, 2);
				}
				CAM::DESTROY_CAM(iLocal_171, false);
				STREAMING::REMOVE_ANIM_DICT("mini@yoga");
				return 1;
			}
			break;
	}
	return 0;
}

void func_384()//Position - 0x693A9
{
	iLocal_161 = 1;
	iLocal_162 = 0;
	iLocal_167 = 0;
}

int func_385(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)//Position - 0x693BD
{
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_391(PLAYER::PLAYER_PED_ID(), 1);
		}
		CLOCK::PAUSE_CLOCK(true);
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_389(iParam0);
		func_325(&Local_90, 1, 0);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_389(iParam0);
		func_388();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *uParam4 == 1)
		{
			__LIB_28__::func_227(PLAYER::PLAYER_PED_ID(), Local_89, Local_89.f_3, 0, 1, 0);
		}
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		func_387(0);
		switch (iParam0)
		{
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("YOGA_MINIGAME_TRANQUIL"))
				{
					AUDIO::START_AUDIO_SCENE("YOGA_MINIGAME_TRANQUIL");
					if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_START"))
					{
					}
				}
				if (iLocal_166 == 0)
				{
					func_13(1);
					iLocal_166 = 1;
				}
				if (((func_320(&Local_133, 0) && func_320(&Local_139, 1)) && func_320(&Local_142, 1)) && func_320(&Local_145, 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_133.f_0, Local_133.f_2, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_133.f_0, Local_133.f_5, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_133.f_0, true);
					iLocal_895[1] = 1;
					*iParam1++;
				}
				break;
			default:
				*iParam1++;
				break;
			}
	}
	if (*iParam1 == 4)
	{
		if (*uParam3 == 1 || *uParam4 == 1)
		{
			STREAMING::LOAD_SCENE(Local_89);
			MISC::CLEAR_AREA(Local_89, 15f, true, false, false, false);
			MISC::CLEAR_AREA_OF_PEDS(Local_89, 20f, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_89, 15f, false, false, false, false, false, false, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_89, 20f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			*uParam3 = 0;
			*uParam4 = 0;
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_14__::func_524(500);
			}
		}
		*iParam1++;
	}
	if (*iParam1 == 5)
	{
		*iParam2 = 1;
		*iParam1++;
	}
	if (*iParam1 == 6)
	{
		return 1;
	}
	return 0;
}

void func_387(int iParam0)//Position - 0x69637
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_895 - 1))
	{
		iLocal_895[iVar0] = iParam0;
		iVar0++;
	}
}

void func_388()//Position - 0x69661
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_896;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_896[iVar1] = 0;
		iVar1++;
	}
}

void func_389(int iParam0)//Position - 0x6968C
{
	struct<3> Var0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true) };
	}
	if (__LIB_0__::func_490(Var0, -790.906f, 186.293f, 71.835f, 15f, 0))
	{
		iLocal_88 = 0;
		Local_152 = { -786.0774f, 193.25336f, 55.16871f };
		Local_152.f_3 = 88.5632f;
		Local_152.f_4 = { -783.84564f, 173.65877f, 75.97994f };
		Local_152.f_7 = { -793.906f, 189.293f, 71.8351f };
		Local_152.f_10 = 29.5f;
		Local_151 = { -791.5933f, 188.4993f, 71.8352f };
		Local_151.f_3 = 223.3349f;
		Local_151.f_4 = { -788.8267f, 185.6219f, 71.8352f };
		Local_151.f_7 = 223.7161f;
		Local_89 = { -790.906f, 186.293f, 71.8351f };
		Local_89.f_3 = 275.07422f;
		Local_176 = { -790.271f, 185.76f, 71.842f };
		Local_177 = { 0f, 0f, -65f };
		Local_178 = { -790.271f, 185.76f, 71.842f };
		Local_179 = { 0f, 0f, -65f };
		Local_180 = { -793.75f, 172.2f, 71.555f };
		Local_181 = { 0f, 0f, -162.24f };
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				Local_133.f_2 = { -791.0036f, 186.3552f, 71.8295f };
				Local_133.f_5 = { 0f, 0f, -87.1403f };
				Local_133.f_1 = joaat("prop_yoga_mat_03");
				break;
			case 4:
			case 5:
				Local_133.f_2 = { -791.48f, 186.325f, 71.835f };
				Local_133.f_5 = { 0f, 0f, 0f };
				Local_133.f_1 = joaat("prop_yoga_mat_03");
				break;
		}
		Local_139.f_2 = { -789.4f, 187.8659f, 71.8349f };
		Local_139.f_5 = { 0f, 0f, 105.48f };
		Local_139.f_1 = joaat("prop_mem_candle_04");
		Local_142.f_2 = { -789.47f, 187.5759f, 71.8349f };
		Local_142.f_5 = { 0f, 0f, -37.44f };
		Local_142.f_1 = joaat("prop_mem_candle_05");
		Local_145.f_2 = { -789.75f, 187.7759f, 71.8349f };
		Local_145.f_5 = { 0f, 0f, 52.2f };
		Local_145.f_1 = joaat("prop_mem_candle_06");
		Local_136.f_2 = { -790.647f, 188.616f, 71.908f };
		Local_136.f_5 = { 0f, 0f, -17f };
		Local_136.f_1 = joaat("prop_mp3_dock");
		Local_148.f_2 = { -790.6667f, 188.5546f, 71.9111f };
		Local_148.f_5 = { 0.3273f, -0.4297f, -18.2587f };
		Local_148.f_1 = joaat("prop_phone_ing");
		Local_182 = { -793.52f, 174.39f, 73.2f };
		Local_183 = { 0.26f, -0.97f, 0.03f };
	}
	else if (__LIB_0__::func_490(Var0, 2862.15f, 5945.49f, 357.11f, 15f, 0))
	{
		iLocal_88 = 1;
		Local_152 = { 2840.0188f, 5955.4077f, 353.0921f };
		Local_152.f_3 = 225.4881f;
		Local_152.f_4 = { 2893.8125f, 5906.2627f, 368.2f };
		Local_152.f_7 = { 2833.079f, 5967.084f, 346.33112f };
		Local_152.f_10 = 63.5f;
		Local_151 = { 2861.3835f, 5945.8013f, 357.0977f };
		Local_151.f_3 = 75.974f;
		Local_151.f_4 = { 2857.6204f, 5946.8945f, 356.6815f };
		Local_151.f_7 = 74.0123f;
		Local_89 = { 2861.4485f, 5945.8584f, 357.0606f };
		Local_89.f_3 = 255.0873f;
		Local_176 = { 2862.325f, 5944.692f, 357.07f };
		Local_177 = { 0f, 0f, -85f };
		Local_178 = { 2862.325f, 5944.692f, 357.07f };
		Local_179 = { 0f, 0f, -85f };
		Local_180 = { 2859.625f, 5946.542f, 357.05f };
		Local_181 = { 0f, 0f, 82.8f };
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				Local_133.f_2 = { 2861.47f, 5945.9f, 357.06f };
				Local_133.f_5 = { 0f, -0.5f, 70f };
				Local_133.f_1 = joaat("prop_yoga_mat_03");
				break;
			case 4:
			case 5:
				Local_133.f_2 = { 2860.9f, 5946.04f, 357.06f };
				Local_133.f_5 = { 0f, -0.5f, -20f };
				Local_133.f_1 = joaat("prop_yoga_mat_03");
				break;
		}
		Local_139.f_2 = { 2864.176f, 5943.609f, 357.0612f };
		Local_139.f_5 = { 0f, 0f, 0f };
		Local_139.f_1 = joaat("prop_mem_candle_04");
		Local_142.f_2 = { 2863.931f, 5943.665f, 357.0606f };
		Local_142.f_5 = { 0f, 0f, 142.92f };
		Local_142.f_1 = joaat("prop_mem_candle_05");
		Local_145.f_2 = { 2864.084f, 5943.869f, 357.055f };
		Local_145.f_5 = { 0f, 0f, -95.76f };
		Local_145.f_1 = joaat("prop_mem_candle_06");
		Local_136.f_2 = { 2862.946f, 5947.504f, 357.131f };
		Local_136.f_5 = { 0f, 0f, -38.5f };
		Local_136.f_1 = joaat("prop_mp3_dock");
		Local_148.f_2 = { 2862.9082f, 5947.4536f, 357.1394f };
		Local_148.f_5 = { 0.2939f, -0.4187f, -38.2439f };
		Local_148.f_1 = joaat("prop_phone_ing");
		Local_182 = { 2861.51f, 5945.42f, 358.69f };
		Local_183 = { -0.98f, 0.17f, 0.03f };
	}
}

void func_391(int iParam0, int iParam1)//Position - 0x69CD3
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_216(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_25(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_141(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_14__::func_529(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_127();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::isGlobal_43052EqualsValue(0) && !__LIB_0__::isGlobal_43052EqualsValue(1)) && !__LIB_0__::isGlobal_43052EqualsValue(2)) && !__LIB_0__::isGlobal_43052EqualsValue(3)) && !__LIB_0__::isGlobal_43052EqualsValue(4)) && !__LIB_0__::isGlobal_43052EqualsValue(9)) && !__LIB_0__::isGlobal_43052EqualsValue(10)))
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

void func_397()//Position - 0x6ABB3
{
	if (CAM::IS_SCREEN_FADED_IN() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (iLocal_175 == 0)
		{
			if (((iLocal_86 == 1 || iLocal_86 == 2) || iLocal_86 == 3) || iLocal_86 == 4)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
				{
					MISC::SET_GAME_PAUSED(true);
					iLocal_175 = 1;
				}
				func_398();
			}
		}
		else
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("YOGA_QUIT", "YOGA_QUIT_INST", 36, 0, false, -1, 0, 0, true, 0);
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				iLocal_175 = 0;
				MISC::SET_GAME_PAUSED(false);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				iLocal_86 = 6;
				bLocal_168 = true;
				func_384();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				iLocal_175 = 0;
				MISC::SET_GAME_PAUSED(false);
			}
		}
	}
}

void func_398()//Position - 0x6AC8F
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_893))
	{
		if (iLocal_894)
		{
			__LIB_1__::func_539(&uLocal_184);
			__LIB_2__::func_817(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/, true), "H_YOGA_QUIT", &uLocal_184, 0);
		}
		__LIB_1__::func_538(&iLocal_893, &uLocal_884, &uLocal_184, __LIB_1__::func_402(&uLocal_184));
	}
	else
	{
		iLocal_893 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("instructional_buttons");
		iLocal_894 = 1;
	}
}

void func_410(var uParam0, var uParam1)//Position - 0x6B261
{
	if (*uParam0 != 7)
	{
		if (*uParam0 != 8)
		{
			if ((*uParam0 == 2 || *uParam0 == 3) || *uParam0 == 4)
			{
				if (iLocal_895[1] == 1)
				{
					if (Local_90.f_14 == 3)
					{
						if (Local_90.f_7 == 4)
						{
							if (__LIB_40__::func_691(Local_90.f_0, 2))
							{
								func_384();
								*uParam1 = 1;
								*uParam0 = 6;
							}
						}
					}
				}
			}
		}
	}
}

void func_412()//Position - 0x6B31F
{
	if (CAM::DOES_CAM_EXIST(iLocal_170))
	{
		CAM::SET_CAM_ACTIVE(iLocal_170, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_170, false);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PLAYER::PLAYER_PED_ID(), 1, "blushing");
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_37__::func_899(&Local_136, 1);
	__LIB_37__::func_899(&Local_133, 1);
	__LIB_37__::func_899(&Local_139, 1);
	__LIB_37__::func_899(&Local_142, 1);
	__LIB_37__::func_899(&Local_145, 1);
	__LIB_37__::func_899(&Local_148, 1);
	__LIB_17__::func_313(&iLocal_160);
	__LIB_0__::func_74();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_0__::func_671(0);
	__LIB_0__::func_131();
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_MtLion"), false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("YOGA_MINIGAME_TRANQUIL"))
	{
		AUDIO::STOP_AUDIO_SCENE("YOGA_MINIGAME_TRANQUIL");
	}
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (iLocal_166 == 1)
	{
		func_13(0);
		iLocal_166 = 0;
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_893);
	if (AUDIO::TRIGGER_MUSIC_EVENT("MGYG_END"))
	{
	}
	CLOCK::PAUSE_CLOCK(false);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
}

