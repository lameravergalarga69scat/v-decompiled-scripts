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
	struct<4> Local_37[10];
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	char cLocal_43[24] = "";
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	char cLocal_47[24] = "";
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	char cLocal_51[24] = "";
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	char cLocal_55[64] = "";
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	char cLocal_64[24] = "";
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	char cLocal_68[24] = "";
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	char cLocal_72[24] = "";
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	char cLocal_76[24] = "";
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	char cLocal_80[24] = "";
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	char cLocal_84[24] = "";
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	char cLocal_88[24] = "";
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	char cLocal_92[24] = "";
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	char cLocal_96[24] = "";
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	char cLocal_100[48] = "";
	char cLocal_101[24] = "";
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	char cLocal_105[24] = "";
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	char cLocal_109[24] = "";
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	char cLocal_113[32] = "";
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	char cLocal_118[16] = "";
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	char cLocal_121[16] = "";
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	char cLocal_131[16] = "";
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	char cLocal_134[32] = "";
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	struct<3> Local_146[4];
	struct<3> Local_147[4];
	struct<3> Local_148 = { 0, 0, 0 } ;
	struct<3> Local_149 = { 0, 0, 0 } ;
	struct<3> Local_150 = { 0, 0, 0 } ;
	struct<3> Local_151 = { 0, 0, 0 } ;
	struct<3> Local_152 = { 0, 0, 0 } ;
	struct<3> Local_153 = { 0, 0, 0 } ;
	struct<3> Local_154 = { 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	struct<3> Local_156 = { 0, 0, 0 } ;
	struct<3> Local_157 = { 0, 0, 0 } ;
	struct<3> Local_158 = { 0, 0, 0 } ;
	float fLocal_159 = 0f;
	struct<3> Local_160 = { 0, 0, 0 } ;
	struct<3> Local_161 = { 0, 0, 0 } ;
	struct<3> Local_162 = { 0, 0, 0 } ;
	struct<3> Local_163 = { 0, 0, 0 } ;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	struct<7> Local_167[4];
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int* iLocal_170 = NULL;
	int* iLocal_171 = NULL;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	struct<14> Local_174 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 3;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 16;
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
	struct<3> Local_351 = { 0, 0, 0 } ;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	char cLocal_355[24] = "";
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	bool bLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	bool bLocal_373 = 0;
	bool bLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	char* sLocal_390 = NULL;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	char* sLocal_405 = NULL;
	bool bLocal_406 = 0;
	bool bLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409[3] = { 0, 0, 0 };
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_413[28] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<10> Local_414[32];
	struct<8> Local_415[13];
	var uLocal_416 = 30;
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
	var uLocal_567 = 10;
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
	var uLocal_618 = 10;
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
	var uLocal_689 = 20;
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
	var uLocal_790 = 20;
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
	var uLocal_891 = 30;
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
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 5;
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
	var uLocal_1103 = 7;
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
	var uLocal_1153 = 5;
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
	var uLocal_1179 = 3;
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
	var uLocal_1195 = 21;
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
	var uLocal_1320 = 10;
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
	var uLocal_1371 = 5;
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
	var uLocal_1397 = 5;
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
	var uLocal_1426 = 10;
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
	var uLocal_1444 = 12;
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
	var uLocal_1457 = 12;
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
	var uLocal_1470 = 12;
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
	var uLocal_1483 = 9;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 9;
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
	var uLocal_1526 = 12;
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
	var uLocal_1539 = 12;
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
	var uLocal_1552 = 12;
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
	var uLocal_1565 = 9;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 9;
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
	var uLocal_1608 = 12;
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
	var uLocal_1621 = 12;
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
	var uLocal_1634 = 12;
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
	var uLocal_1647 = 9;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 9;
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
	var uLocal_1690 = 12;
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
	var uLocal_1703 = 12;
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
	var uLocal_1716 = 12;
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
	var uLocal_1729 = 9;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 9;
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
	var uLocal_1772 = 12;
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
	var uLocal_1785 = 12;
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
	var uLocal_1798 = 12;
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
	var uLocal_1811 = 9;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 9;
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
	var uLocal_1854 = 12;
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
	var uLocal_1867 = 12;
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
	var uLocal_1880 = 12;
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
	var uLocal_1893 = 9;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 9;
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
	var uLocal_1936 = 12;
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
	var uLocal_1949 = 12;
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
	var uLocal_1962 = 12;
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
	var uLocal_1975 = 9;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 9;
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
	var uLocal_2018 = 12;
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
	var uLocal_2031 = 12;
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
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 12;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 9;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 9;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 12;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 12;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 12;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 9;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 9;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 12;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 12;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 12;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 9;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 9;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	int iLocal_2247 = 0;
	int iLocal_2248 = 0;
	int iLocal_2249 = 0;
	int iLocal_2250 = 0;
	int iLocal_2251 = 0;
	int iLocal_2252 = 0;
	int iLocal_2253 = 0;
	int iLocal_2254 = 0;
	int iLocal_2255 = 0;
	int iLocal_2256 = 0;
	int iLocal_2257 = 0;
	int iLocal_2258 = 0;
	int iLocal_2259 = 0;
	int iLocal_2260 = 0;
	int iLocal_2261 = 0;
	struct<6> Local_2262[12];
	int iLocal_2263[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2264 = 0;
	int iLocal_2265 = 0;
	int iLocal_2266 = 0;
	int iLocal_2267 = 0;
	bool bLocal_2268 = 0;
	int iLocal_2269 = 0;
	int iLocal_2270 = 0;
	int iLocal_2271 = 0;
	int iLocal_2272 = 0;
	int iLocal_2273 = 0;
	int iLocal_2274 = 0;
	int iLocal_2275 = 0;
	float fLocal_2276 = 0f;
	int iLocal_2277 = 0;
	int iLocal_2278 = 0;
	float fLocal_2279 = 0f;
	float fLocal_2280 = 0f;
	int iLocal_2281 = 0;
	int iLocal_2282 = 0;
	int iLocal_2283 = 0;
	int iLocal_2284 = 0;
	int iLocal_2285 = 0;
	int iLocal_2286 = 0;
	int iLocal_2287 = 0;
	bool bLocal_2288 = 0;
	int iLocal_2289 = 0;
	int iLocal_2290 = 0;
	int iLocal_2291 = 0;
	int iLocal_2292 = 0;
	int iLocal_2293 = 0;
	int iLocal_2294 = 0;
	int iLocal_2295 = 0;
	bool bLocal_2296 = 0;
	int iLocal_2297 = 0;
	int iLocal_2298 = 0;
	bool bLocal_2299 = 0;
	int iLocal_2300 = 0;
	int iLocal_2301 = 0;
	int iLocal_2302 = 0;
	int iLocal_2303 = 0;
	int iLocal_2304 = 0;
	bool bLocal_2305 = 0;
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
	iLocal_42 = 1;
	StringCopy(&cLocal_43, "lester1a_follow_e", 24);
	StringCopy(&cLocal_47, "LS1AAUD", 24);
	StringCopy(&cLocal_51, "misslester1aig_1", 24);
	StringCopy(&cLocal_55, "amb@world_human_drinking@coffee@male@idle_a", 64);
	StringCopy(&cLocal_64, "misslester1aig_2main", 24);
	StringCopy(&cLocal_68, "misslester1aig_2exit", 24);
	StringCopy(&cLocal_72, "misslester1aig_7main", 24);
	StringCopy(&cLocal_76, "misslester1aig_7exit", 24);
	StringCopy(&cLocal_80, "misslester1aig_3main", 24);
	StringCopy(&cLocal_84, "misslester1aig_3exit", 24);
	StringCopy(&cLocal_88, "misslester1aig_4main", 24);
	StringCopy(&cLocal_92, "misslester1aig_4exit", 24);
	StringCopy(&cLocal_96, "misslester1aig_5intro", 24);
	StringCopy(&cLocal_100, "misslester1aig_5main", 24);
	StringCopy(&cLocal_101, "misslester1aig_5exit", 24);
	StringCopy(&cLocal_105, "misslester1aig_6", 24);
	StringCopy(&cLocal_109, "misslester1aig_9", 24);
	StringCopy(&cLocal_113, "FAKE_INTERIOR_OCCLUSION_SCENE", 32);
	StringCopy(&cLocal_118, "life_up", 16);
	StringCopy(&cLocal_121, "invad_exit", 16);
	iLocal_124 = joaat("IG_LifeInvad_01");
	iLocal_125 = joaat("A_M_Y_Hipster_01");
	iLocal_126 = joaat("A_F_Y_Hipster_01");
	iLocal_127 = joaat("A_F_Y_Hipster_04");
	iLocal_128 = joaat("prop_off_chair_01");
	iLocal_129 = joaat("prop_cs_paper_cup");
	iLocal_130 = joaat("prop_cs_milk_01");
	StringCopy(&cLocal_131, "breaking_news", 16);
	StringCopy(&cLocal_134, "misslester1b", 32);
	Local_139 = { -803.9083f, 171.848f, 72.8347f };
	Local_140 = { 0f, 0f, 297.2519f };
	Local_141 = { -802.4717f, 175.982f, 71.8348f };
	Local_142 = { -800.158f, 173.603f, 74.38f };
	Local_143 = { 0f, 0f, 69.13f };
	Local_144 = { 1f, 1f, 1f };
	Local_145 = { 3.163f, 1.783f, 1f };
	Local_148 = { 1283.7845f, -1728.9476f, 51.8119f };
	Local_149 = { 127.6313f, -209.8459f, 53.5463f };
	Local_150 = { -1054.357f, -240.242f, 43.217f };
	Local_151 = { 0f, 0f, 27.5f };
	Local_152 = { -1059.61f, -244.62f, 43.92f };
	Local_153 = { -1066.5713f, -244.5061f, 39.7332f };
	Local_154 = { 0f, 0f, 85.0757f };
	Local_155 = { -1067.689f, -243.949f, 39.7332f };
	Local_156 = { 0f, 0f, -117.5f };
	Local_157 = { -1049.633f, -220.7515f, 36.9051f };
	Local_158 = { -1044.357f, -229.9086f, 38.0141f };
	fLocal_159 = 246.7054f;
	Local_160 = { -1053.15f, -230.89f, 43.92f };
	Local_161 = { 90f, -58f, 0f };
	Local_162 = { -1044.4253f, -235.0814f, 43.021f };
	Local_163 = { 0f, 0f, 118.8f };
	iLocal_168 = -1;
	sLocal_390 = "";
	iLocal_2267 = -1;
	fLocal_2276 = 0f;
	fLocal_2279 = 0.5f;
	fLocal_2280 = 0.5f;
	iLocal_2283 = -1;
	iLocal_2285 = 1;
	iLocal_2286 = -1;
	iLocal_2292 = -1;
	iLocal_2300 = 3;
	iLocal_2302 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_877(10);
	}
	__LIB_37__::func_352();
	func_865();
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_17__::func_630(&uLocal_416);
		__LIB_16__::func_913(&uLocal_1426);
		func_860();
		func_822();
		func_821();
		func_578();
		func_574();
		func_1();
	}
}

void func_1()//Position - 0x331
{
	int iVar0;
	iVar0 = iLocal_2250;
	switch (iVar0)
	{
		case 0:
			func_539();
			break;
		case 1:
			func_467();
			break;
		case 2:
			func_456();
			break;
		case 3:
			func_453();
			break;
		case 4:
			func_329();
			break;
		case 5:
			func_326();
			break;
		case 6:
			func_321();
			break;
		case 7:
			func_230();
			break;
		case 8:
			func_137();
			break;
		case 9:
			func_126();
			break;
		case 10:
			func_2();
			break;
	}
	RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FriendRequest", 0);
}

void func_2()//Position - 0x3DD
{
	bool bVar0;
	func_124();
	func_95(0);
	switch (iLocal_2251)
	{
		case 0:
			__LIB_0__::func_506(129, 0);
			if (bLocal_2288)
			{
				if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) || (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15), 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15)) > 0.64f))
				{
					__LIB_37__::func_346(4);
					if (bLocal_2305)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
					}
					if (CAM::DOES_CAM_EXIST(iLocal_2301))
					{
						CAM::DESTROY_CAM(iLocal_2301, false);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					bLocal_406 = false;
					iLocal_2257 = MISC::GET_GAME_TIMER();
					iLocal_2251++;
				}
			}
			else
			{
				ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.79373f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), true);
				func_877(5);
			}
			break;
		case 1:
			if (!bLocal_406)
			{
				if (__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("walkinterruptible")))
					{
						bLocal_406 = true;
					}
				}
			}
			if (bLocal_406)
			{
				if (PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) != 0f || PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) != 0f)
				{
					bVar0 = true;
				}
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4 || (MISC::GET_GAME_TIMER() - iLocal_2257) >= 4000)
			{
				if (!__LIB_6__::func_572(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM")) || (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15), 1) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15)) >= 0.831f))
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", true);
					ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.79373f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_3();
				}
				else if (bVar0)
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", true);
					ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.79373f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_3();
				}
			}
			break;
	}
}

void func_3()//Position - 0x609
{
	HUD::CLEAR_PRINTS();
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_8();
	__LIB_0__::func_526(0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_8()//Position - 0x793
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	__LIB_0__::func_325();
	HUD::CLEAR_PRINTS();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2247))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2247, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2247);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2247);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (32 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_414[iVar0 /*10*/]))
		{
			func_83(&(Local_414[iVar0 /*10*/]), -1000f);
			if (ENTITY::IS_ENTITY_ATTACHED(Local_414[iVar0 /*10*/]))
			{
				ENTITY::DETACH_ENTITY(Local_414[iVar0 /*10*/], true, true);
			}
			if (Local_414[iVar0 /*10*/].f_1)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_414[iVar0 /*10*/], true) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[iVar0 /*10*/]));
				MISC::CLEAR_AREA(Var1, 0.5f, true, true, false, false);
				Local_414[iVar0 /*10*/].f_1 = 0;
			}
			else
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_414[iVar0 /*10*/], true) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[iVar0 /*10*/]));
				if (!Local_414[iVar0 /*10*/].f_7)
				{
					MISC::CLEAR_AREA(Var1, 0.5f, true, true, false, false);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 1 + 1;
	while (iVar0 <= (28 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[iVar0]) && !PED::IS_PED_INJURED(iLocal_413[iVar0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_413[iVar0], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
			{
				TASK::CLEAR_PED_TASKS(iLocal_413[iVar0]);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_413[iVar0]));
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Local_167.f_0)
	{
		if (Local_167[iVar2 /*7*/] != -1 && OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_167[iVar2 /*7*/]))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(Local_167[iVar2 /*7*/], 0);
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2248))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2248);
	}
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	AUDIO::RELEASE_SOUND_ID(iLocal_2272);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	__LIB_0__::func_552(1);
	__LIB_37__::func_354(16, 0, 0);
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	__LIB_41__::func_48(75, 1);
	__LIB_0__::func_714(&(iLocal_409[0]));
	__LIB_0__::func_714(&(iLocal_409[1]));
	__LIB_0__::func_714(&(iLocal_409[2]));
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_113))
	{
		AUDIO::STOP_AUDIO_SCENE(&cLocal_113);
	}
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	func_42();
	__LIB_0__::func_54(1, 1);
	__LIB_0__::func_671(0);
	Global_75595 = 0;
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	__LIB_37__::func_356(16, 0);
	__LIB_0__::func_506(129, 0);
	__LIB_0__::func_366(0);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", true, true);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
	__LIB_11__::func_816(6, 1);
	__LIB_0__::func_544(101, 0, 1, 1, 0);
}

void func_42()//Position - 0x8B06
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1368.1688f, -1686.1638f, 68.780426f, 1189.9807f, -1764.9642f, 31.711254f, 91.5f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(48.29568f, -238.24207f, -1057.5178f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.24207f, -1057.5178f) + Vector(11.8125f, 29f, 43f), true, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(Vector(48.29568f, -238.24207f, -1057.5178f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.24207f, -1057.5178f) + Vector(11.8125f, 29f, 43f), true, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_359, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
}

void func_83(var uParam0, float fParam1)//Position - 0xD298
{
	if (uParam0->f_2)
	{
		if (*uParam0 == 0)
		{
			if (!__LIB_0__::func_86(uParam0->f_4) && uParam0->f_3 != 0)
			{
				ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(uParam0->f_4, 1f, uParam0->f_3, fParam1);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_8) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_9))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_8, uParam0->f_9, 3))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam1, true);
			}
		}
		uParam0->f_3 = 0;
		uParam0->f_8 = "";
		uParam0->f_9 = "";
		uParam0->f_2 = 0;
	}
}

char* func_88(int iParam0)//Position - 0xD407
{
	switch (iParam0)
	{
		case 1:
			return "michael_tv_remote_idle";
			break;
		case 2:
			return "michael_tv_remote_fidget";
			break;
		case 3:
			return "michael_tv_remote_button_press_faster";
		case 4:
			return "michael_tv_remote_volume_into";
			break;
		case 5:
			return "michael_tv_remote_volume";
			break;
		case 6:
			return "michael_tv_remote_volume_outro";
			break;
		case 7:
			return "michael_phone_into";
			break;
		case 8:
			return "michael_phone_menu_exit";
			break;
		case 9:
			return "michael_phone_idle";
			break;
		case 10:
			return "michael_phone_single_screen_scroll";
			break;
		case 11:
			return "michael_phone_single_screen_press";
			break;
		case 12:
			return "michael_phone_detonate_to_wait_idle";
			break;
		case 13:
			return "michael_wait_idle";
			break;
		case 14:
			return "michael_explosion_reaction_to_wait_idle";
			break;
		case 15:
			return "michael_wait_idle_to_standing_idle_leadout";
			break;
	}
	return "NONE" /* GXT: None */;
}

void func_95(int iParam0)//Position - 0xD63A
{
	if (((iLocal_2291 == 12 || iLocal_2291 == 13) || iLocal_2291 == 14) || iLocal_2291 == 15)
	{
		func_123(0, 0);
	}
	else
	{
		func_123(0, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 29 /*INPUT_SPECIAL_ABILITY_SECONDARY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 171 /*INPUT_SPECIAL_ABILITY_PC*/, true);
	if (iParam0 && ((((((((((iLocal_2291 == 1 || iLocal_2291 == 2) || iLocal_2291 == 9) || iLocal_2291 == 8) || iLocal_2291 == 12) || iLocal_2291 == 14) || iLocal_2291 == 13) || iLocal_2291 == 7) || iLocal_2291 == 15) || iLocal_2291 == 11) || iLocal_2291 == 10))
	{
		if (__LIB_1__::func_861())
		{
			__LIB_0__::func_671(0);
		}
	}
	else if (!__LIB_1__::func_861())
	{
		__LIB_0__::func_671(1);
	}
	if (iLocal_2291 == 1 || iLocal_2291 == 2)
	{
		if (__LIB_0__::func_77(0))
		{
			func_121(7, 8f, -8f, 2562, 0);
		}
		else if (__LIB_38__::func_424(1) && !iLocal_2294)
		{
			if (__LIB_0__::func_121(Local_414[30 /*10*/]))
			{
			}
			func_121(3, 8f, -8f, 2562, 0);
		}
		else if (func_119())
		{
			func_121(4, 8f, -8f, 2562, 0);
		}
	}
	switch (iLocal_2291)
	{
		case 1:
			if (iLocal_2293)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_2292) >= 8000)
				{
					iLocal_2293 = 0;
					func_121(2, 8f, -8f, 2562, 0);
				}
			}
			break;
		case 2:
			if (func_118())
			{
				iLocal_2293 = 1;
				iLocal_2292 = MISC::GET_GAME_TIMER();
				func_121(1, 1000f, -8f, 2561, 0);
			}
			break;
		case 3:
			if (func_118())
			{
				func_121(1, 1000f, -8f, 2561, 0);
			}
			else if (__LIB_38__::func_424(1))
			{
				if (__LIB_0__::func_121(Local_414[30 /*10*/]))
				{
				}
				func_121(3, 8f, -8f, 2562, 0);
			}
			break;
		case 4:
			if (func_118())
			{
				func_121(5, 1000f, -8f, 2561, 0);
			}
			break;
		case 5:
			if (!func_119())
			{
				func_121(6, 8f, -8f, 2562, 0);
			}
			break;
		case 6:
			if (func_118())
			{
				func_121(1, 1000f, -8f, 2561, 0);
			}
			break;
		case 7:
			if (func_117(129) && iParam0)
			{
				func_121(12, 8f, -8f, 2562, 0);
			}
			else if (func_118())
			{
				func_121(9, 1000f, -8f, 2561, 0);
				Global_7451 = 145;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(7), 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(7)) > 0.376f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_414[31 /*10*/]))
					{
						Local_414[31 /*10*/] = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 28422, 0f, 0f, 0f), true, true, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[31 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					}
				}
			}
			break;
		case 9:
			if (!iLocal_2295)
			{
				if (func_117(129) && iParam0)
				{
					func_121(12, 8f, -8f, 2562, 0);
				}
				else if (!__LIB_0__::func_77(1))
				{
					func_121(8, 8f, -8f, 2562, 0);
				}
				else if (func_116())
				{
					func_121(10, 8f, -8f, 2562, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 176 /*INPUT_CELLPHONE_SELECT*/) && !__LIB_0__::func_686())
				{
					func_121(11, 8f, -8f, 2562, 0);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 177 /*INPUT_CELLPHONE_CANCEL*/))
				{
					func_121(11, 8f, -8f, 2562, 0);
				}
			}
			break;
		case 8:
			if (func_118())
			{
				func_121(1, 8f, -8f, 2561, 0);
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(8), 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(8)) > 0.376f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_414[31 /*10*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_414[31 /*10*/]));
					}
				}
			}
			break;
		case 10:
			if (func_117(129) && iParam0)
			{
				func_121(12, 8f, -8f, 2562, 0);
			}
			else if (func_117(129) && iParam0)
			{
				func_121(12, 8f, -8f, 2562, 0);
			}
			else if (func_118())
			{
				func_121(9, 1000f, -8f, 2561, 0);
			}
			break;
		case 11:
			if (func_117(129) && iParam0)
			{
				func_121(12, 8f, -8f, 2562, 0);
			}
			else if (func_118())
			{
				func_121(9, 1000f, -8f, 2561, 0);
			}
			break;
		case 12:
			if (!iLocal_2295)
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(12), 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(12)) > 0.305f)
					{
						GRAPHICS::SET_TV_CHANNEL(3);
						SYSTEM::SETTIMERA(0);
						__LIB_0__::func_671(1);
						iLocal_2295 = 1;
						iLocal_2284 = MISC::GET_GAME_TIMER();
						RECORDING::REPLAY_START_EVENT(3);
						iLocal_408 = 1;
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(12)) > 0.2f)
					{
						if (!bLocal_2299)
						{
							bLocal_2299 = __LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1B_TV", 7, 0, 0, 0);
						}
					}
				}
			}
			else if (func_118())
			{
				func_121(13, 1000f, -8f, 2561, 0);
			}
			break;
		case 13:
			if (!__LIB_16__::func_855())
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
				__LIB_0__::func_638();
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_2284) > 6500)
			{
				if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1B_REACT", 8, 0, 0, 0))
				{
					func_121(14, 8f, -8f, 2562, 0);
				}
			}
			break;
		case 14:
			if (func_118())
			{
				func_121(15, 1000f, -1.5f, 2562, 0);
			}
			break;
		case 15:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15), 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15)) > 0.321f)
				{
					__LIB_0__::func_123(&(Local_414[30 /*10*/]));
					__LIB_0__::func_123(&(Local_414[31 /*10*/]));
					if (iLocal_408)
					{
						RECORDING::REPLAY_STOP_EVENT();
						iLocal_408 = 0;
					}
				}
			}
			break;
	}
}

int func_116()//Position - 0xE4B0
{
	if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 172 /*INPUT_CELLPHONE_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 173 /*INPUT_CELLPHONE_DOWN*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 174 /*INPUT_CELLPHONE_LEFT*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 175 /*INPUT_CELLPHONE_RIGHT*/))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)//Position - 0xE4EE
{
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		if (Global_7451 == iParam0)
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

int func_118()//Position - 0xE51B
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(1), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(1)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(2), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(2)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(3), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(3)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(4), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(4)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(5), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(5)) > 0.9f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(6), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(6)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(7), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(7)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(8), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(8)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(9), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(9)) > 0.9f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(10), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(10)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(11), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(11)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(12), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(12)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(13), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(13)) > 0.9f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(14), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(14)) >= 1f)
		{
			return 1;
		}
	}
	else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15), 3))
	{
		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(15)) > 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0xE7EF
{
	int iVar0;
	int iVar1;
	iVar1 = 32;
	iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 196 /*INPUT_FRONTEND_AXIS_Y*/) - 127);
	if (iVar0 > (0 + iVar1) || iVar0 < (0 - iVar1))
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)//Position - 0xE86F
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(iParam0), 3))
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), &cLocal_134, func_88(iParam0), Local_139, Local_140, fParam1, fParam2, -1, iParam3, 0f, 2, 1);
		if (bParam4)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		}
		iLocal_2291 = iParam0;
	}
}

void func_123(bool bParam0, bool bParam1)//Position - 0xE8DB
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 64;
	if (bParam0)
	{
		if (__LIB_38__::func_424(0))
		{
			if (!iLocal_39)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_TV_CHANGE_CHANNEL_MASTER", 0, true);
				}
				if (GRAPHICS::GET_TV_CHANNEL() == 0)
				{
					GRAPHICS::SET_TV_CHANNEL(1);
				}
				else
				{
					GRAPHICS::SET_TV_CHANNEL(0);
				}
				iLocal_39 = 1;
			}
		}
		else if (iLocal_39)
		{
			iLocal_39 = 0;
		}
	}
	if (bParam1)
	{
		iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) - 127);
		if (!iLocal_40)
		{
			if (iVar1 > (0 + iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 - 0.5f);
				if (fVar2 < -36f)
				{
					fVar2 = -36f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_41 = MISC::GET_GAME_TIMER();
				iLocal_40 = 1;
			}
			if (iVar1 < (0 - iVar0))
			{
				fVar2 = GRAPHICS::GET_TV_VOLUME();
				fVar2 = (fVar2 + 0.5f);
				if (fVar2 > 0f)
				{
					fVar2 = 0f;
				}
				GRAPHICS::SET_TV_VOLUME(fVar2);
				iLocal_41 = MISC::GET_GAME_TIMER();
				iLocal_40 = 1;
			}
			if (iVar1 < (0 + iVar0) && iVar1 > (0 - iVar0))
			{
				iLocal_42 = 1;
			}
			else if (iLocal_42)
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SAFEHOUSE_MICHAEL_SIT_SOFA", false, -1))
				{
					if (fVar2 != -36f && fVar2 != 0f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_SOFA_REMOTE_CLICK_VOLUME_MASTER", 0, true);
					}
					iLocal_42 = 0;
				}
			}
		}
		if (iLocal_40)
		{
			if (iVar1 == 0 || MISC::GET_GAME_TIMER() > iLocal_41 + 24)
			{
				iLocal_40 = 0;
			}
		}
	}
}

void func_124()//Position - 0xEA26
{
	if (INTERIOR::IS_INTERIOR_SCENE() && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_166)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), -1, false, true);
		}
		__LIB_0__::func_189();
	}
}

void func_126()//Position - 0xEA7C
{
	func_124();
	func_95(0);
	func_136();
	func_135();
	switch (iLocal_2251)
	{
		case 0:
			SYSTEM::SETTIMERA(0);
			func_134(&uLocal_416, &cLocal_131, &iLocal_2289, 0);
			bLocal_2288 = true;
			iLocal_2251++;
			break;
		case 1:
			if (SYSTEM::TIMERA() > 11950 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2289))
			{
				__LIB_10__::func_910();
				GRAPHICS::SET_TV_CHANNEL(0);
				__LIB_17__::func_209(4);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2289, "SHOW_STATIC");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				SYSTEM::SETTIMERA(0);
				iLocal_2251++;
			}
			break;
		case 2:
			if (SYSTEM::TIMERA() < 7000)
			{
				if (!iLocal_2298)
				{
					__LIB_10__::func_910();
					GRAPHICS::SET_TV_CHANNEL(-1);
					GRAPHICS::CLEAR_TV_CHANNEL_PLAYLIST(3);
					iLocal_2298 = 1;
				}
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", false);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_3D_SOLID(iLocal_2289, Local_142, Local_143, Local_144, Local_145, 2);
			}
			else
			{
				if (iLocal_2300 != 3)
				{
					func_129(3, 2000);
				}
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", true);
				__LIB_0__::func_498(0, -1);
				iLocal_2251++;
			}
			break;
		case 3:
			AUDIO::START_AUDIO_SCENE("LESTER_1A_AFTER_EXPLOSION");
			func_121(15, 8f, -1.5f, 512, 0);
			func_127(10);
			break;
	}
}

int func_127(int iParam0)//Position - 0xEBB8
{
	if (iLocal_2249 == 0)
	{
		iLocal_2252 = iParam0;
		iLocal_2249 = 1;
		return 1;
	}
	return 0;
}

void func_129(int iParam0, int iParam1)//Position - 0xEC72
{
	float fVar0;
	fVar0 = CAM::GET_CAM_FOV(iLocal_2301);
	CAM::SET_CAM_PARAMS(iLocal_2301, Local_146[iParam0 /*3*/], Local_147[iParam0 /*3*/], fVar0, iParam1, 1, 1, 2);
	iLocal_2300 = iParam0;
}

int func_134(var uParam0, char* sParam1, var uParam2, bool bParam3)//Position - 0xEE04
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_656)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_656[iVar0 /*6*/].f_4, sParam1))
			{
				uParam0->f_656[iVar0 /*6*/].f_2 = 0;
				*uParam2 = uParam0->f_656[iVar0 /*6*/].f_5;
				if (!uParam0->f_656[iVar0 /*6*/].f_1)
				{
					uParam0->f_1007 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		if (bParam3)
		{
			*uParam2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(sParam1);
		}
		else
		{
			*uParam2 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(sParam1);
		}
		uParam0->f_656[iVar1 /*6*/] = 1;
		uParam0->f_656[iVar1 /*6*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_656[iVar1 /*6*/].f_4 = sParam1;
		uParam0->f_656[iVar1 /*6*/].f_5 = *uParam2;
		uParam0->f_1007 = 1;
		return 1;
	}
	return 0;
}

void func_135()//Position - 0xEEFB
{
	switch (iLocal_2285)
	{
		case 1:
			if (iLocal_2295)
			{
				if (iLocal_2286 == -1)
				{
					iLocal_2286 = AUDIO::GET_SOUND_ID();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_414[31 /*10*/]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2286, "Remote_Ring", Local_414[31 /*10*/], "Phone_SoundSet_Michael", false, 0);
					iLocal_2287 = MISC::GET_GAME_TIMER();
					iLocal_2285 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_2286 == -1)
			{
				iLocal_2286 = AUDIO::GET_SOUND_ID();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_2287) > 5000)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_2286))
				{
					AUDIO::STOP_SOUND(iLocal_2286);
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_2286, "Answer_Phone", Local_414[31 /*10*/], "Lester1B_Sounds", false, 0);
				iLocal_2287 = MISC::GET_GAME_TIMER();
				iLocal_2285 = 5;
			}
			break;
	}
}

void func_136()//Position - 0xEFB3
{
	if (CAM::DOES_CAM_EXIST(iLocal_2301))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_2301))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/))
			{
				if (MISC::IS_XBOX360_VERSION())
				{
					switch (iLocal_2300)
					{
						case 1:
							func_129(2, 0);
							break;
						case 2:
							func_129(3, 0);
							break;
						case 3:
							func_129(1, 0);
							break;
					}
				}
				else
				{
					switch (iLocal_2300)
					{
						case 0:
							func_129(1, 0);
							break;
						case 1:
							func_129(2, 0);
							break;
						case 2:
							func_129(3, 0);
							break;
						case 3:
							func_129(0, 0);
							break;
						}
					}
				}
			}
	}
}

void func_137()//Position - 0xF062
{
	bool bVar0;
	bool bVar1;
	func_124();
	func_136();
	if (iLocal_2283 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_2283) > 77083)
		{
			bVar0 = true;
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_2283) > 170000)
		{
			bVar1 = true;
		}
	}
	if (bVar0 && !bVar1)
	{
		func_95(1);
	}
	else
	{
		func_95(0);
	}
	func_135();
	switch (iLocal_2251)
	{
		case 0:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false) || !CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_2301))
				{
					iLocal_2301 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_146[3 /*3*/], Local_147[3 /*3*/], 40f, true, 2);
					CAM::SHAKE_CAM(iLocal_2301, "HAND_SHAKE", 0.3f);
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					bLocal_2305 = true;
					CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 1);
				}
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
				CAM::SET_CAM_ACTIVE(iLocal_2301, true);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracey", 0))
			{
				__LIB_0__::func_0(&(iLocal_413[27]));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || !CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (CAM::DOES_CAM_EXIST(iLocal_2301))
				{
					if (CAM::IS_CAM_ACTIVE(iLocal_2301))
					{
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
				}
				if (!__LIB_0__::func_798(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PLAY_ANIM"), 1))
				{
					func_121(1, 1000f, -8f, 2561, 1);
				}
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, true);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_414[30 /*10*/]))
				{
					func_227(&(Local_414[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 60309, 0f, 0f, 0f), 0);
					__LIB_16__::func_912(&uLocal_416, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[30 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
				}
				iLocal_2291 = 1;
				iLocal_2292 = MISC::GET_GAME_TIMER();
				iLocal_2293 = 1;
				__LIB_0__::func_671(1);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				__LIB_42__::func_370(129, 0, 0);
				func_219(1);
				GRAPHICS::SET_TV_CHANNEL_PLAYLIST(3, __LIB_7__::func_692(9), false);
				__LIB_44__::func_106(7, "8. Start TV", 1, 0, 0, 1);
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_190("TV_HLP_LEST1B_1");
				__LIB_16__::func_887();
				iLocal_2251++;
			}
			break;
		case 1:
			if (__LIB_38__::func_424(1))
			{
				func_145(4, 1, 8, 1);
				HUD::CLEAR_HELP(true);
				if (__LIB_0__::func_501("FIND_NEWS", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("FIND_NEWS");
				}
				__LIB_0__::func_499(391, 0);
				iLocal_2294 = 1;
				iLocal_2283 = MISC::GET_GAME_TIMER();
				iLocal_2251++;
			}
			else if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (!iLocal_2297)
				{
					__LIB_0__::func_229("FIND_NEWS", 7500, 0);
					iLocal_2297 = 1;
				}
			}
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_2283) > 5000)
			{
				__LIB_0__::func_151("WAIT_TO_DETONATE", 23000);
				iLocal_2251++;
			}
			break;
		case 3:
			if (bVar0)
			{
				Global_96869 = 10049;
				iLocal_2251++;
			}
			break;
		case 4:
			if (__LIB_0__::func_77(0))
			{
				__LIB_0__::func_187();
				__LIB_0__::func_973();
				__LIB_16__::func_921(129);
			}
			if (iLocal_2295)
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				func_127(9);
			}
			else if (bVar1)
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				iLocal_2295 = 0;
				func_127(10);
			}
			break;
	}
}

void func_145(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xF478
{
	if (iParam0 != -1)
	{
		if (!__LIB_13__::func_806(iParam0))
		{
			return;
		}
		GRAPHICS::SET_TV_CHANNEL_PLAYLIST(iParam1, __LIB_7__::func_692(iParam2), bParam3);
		GRAPHICS::SET_TV_CHANNEL(iParam1);
		Global_32020[iParam0 /*11*/] = iParam1;
		Global_32020[iParam0 /*11*/].f_1 = iParam2;
	}
}

void func_219(bool bParam0)//Position - 0x17B19
{
	if (bParam0)
	{
		MISC::SET_BIT(&Global_8137, 19);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8137, 19);
	}
}

void func_227(var uParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x17E17
{
	*uParam0 = OBJECT::CREATE_OBJECT(iParam1, Param2, true, true, false);
	uParam0->f_1 = 1;
	if (fParam3 != 0f)
	{
		ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
	}
}

void func_230()//Position - 0x17ECB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	func_124();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_413[7]))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_413[7], 5f, 5f, 5f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
		}
	}
	if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_166)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_0__::func_798(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE"), 1))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	}
	switch (iLocal_2251)
	{
		case 0:
			__LIB_44__::func_106(6, "7. Go home", 0, 0, 0, 1);
			func_320(1, 0);
			__LIB_0__::func_552(1);
			__LIB_37__::func_354(16, 0, 0);
			func_320(12, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			iLocal_2290 = 0;
			iLocal_2298 = 0;
			iLocal_2251++;
			break;
		case 1:
			if (func_276(&Local_174, Local_141, -805.3523f, 177.56497f, 71.84848f, -801.70416f, 168.16263f, 74.974594f, 9.0375f, 1, "WATCH_KEYNOTE", 1, 1, -1, 1))
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED() && iLocal_2290)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[7]))
					{
						PED::DELETE_PED(&(iLocal_413[7]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_414[23 /*10*/]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[23 /*10*/]));
					}
					__LIB_16__::func_905(&uLocal_416, "AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B");
					__LIB_13__::func_815(&Local_174, 1, 0);
					__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_413[27]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_413[27], "Tracy", 1, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
					RECORDING::REPLAY_START_EVENT(4);
					func_267(12);
					__LIB_17__::func_159();
					__LIB_16__::func_857(&uLocal_416, &cLocal_134);
					__LIB_16__::func_909(&uLocal_416, "Lester1B");
					__LIB_16__::func_909(&uLocal_416, "SAFEHOUSE_MICHAEL_SIT_SOFA");
					GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
					iLocal_2251++;
				}
				else
				{
					if (!CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING FOR: cutscene", 0.5f, 0.5f, 0f, 255, 0, 0, 255);
					}
					if (!iLocal_2290)
					{
						GRAPHICS::DRAW_DEBUG_TEXT_2D("WAITING FOR: bTVTurnedOn", 0.5f, 0.55f, 0f, 255, 0, 0, 255);
					}
				}
			}
			else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_166 && __LIB_16__::func_855())
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
			}
			else
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[27]) && __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_141, 1) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("LES_1B_MCS_1", 8);
					func_260(&uLocal_1426, PLAYER::PLAYER_PED_ID(), "Michael", 0);
					func_260(&uLocal_1426, iLocal_413[27], "Tracy", 0);
				}
			}
			else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_141, 1) > 120f || __LIB_6__::func_181())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (!iLocal_2290)
			{
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_141, 1) < 100f)
				{
					if (__LIB_17__::func_253(4))
					{
						__LIB_10__::func_910();
						__LIB_17__::func_218(4, 1, 11, 0, 1);
						iLocal_2290 = 1;
					}
				}
			}
			else if (iLocal_2290)
			{
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_141, 1) > 120f)
				{
					if (__LIB_17__::func_253(4))
					{
						__LIB_16__::func_868(1, 4);
					}
					iLocal_2290 = 0;
				}
			}
			if (iLocal_367)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1563127729, 0, true, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(759145763, 0, true, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-84399179, 0, true, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-461898059, 0, true, false);
				}
				else
				{
					bVar0 = true;
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-84399179) != 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-461898059) != 1)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1081.7913f, -260.7063f, 36.803814f, -1082.8005f, -258.81378f, 39.825764f, 3.25f, false, true, 0))
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-84399179, 1, true, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-461898059, 1, true, false);
						}
						else
						{
							bVar0 = false;
						}
					}
					if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1563127729) != 1 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(759145763) != 1)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1044.871f, -230.18385f, 38.014164f, -1046.8812f, -231.22552f, 41.074177f, 3.25f, false, true, 0))
						{
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1563127729, 1, true, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(759145763, 1, true, false);
						}
						else
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (((((((OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1563127729) == 1 && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1563127729)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(759145763) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(759145763)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-84399179) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-84399179)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-461898059) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-461898059)) <= 0.1f)
						{
							func_267(4);
							func_267(5);
							func_267(6);
							func_267(8);
							func_267(7);
							func_267(11);
							func_267(10);
							__LIB_37__::func_347(&uLocal_416, iLocal_164);
							__LIB_16__::func_912(&uLocal_416, iLocal_126);
							__LIB_16__::func_912(&uLocal_416, iLocal_127);
							__LIB_16__::func_912(&uLocal_416, iLocal_124);
							__LIB_16__::func_912(&uLocal_416, iLocal_125);
							__LIB_16__::func_912(&uLocal_416, iLocal_128);
							__LIB_16__::func_912(&uLocal_416, joaat("ig_JAY_Norris"));
							__LIB_16__::func_912(&uLocal_416, joaat("prop_paper_ball"));
							__LIB_16__::func_912(&uLocal_416, joaat("prop_hacky_sack_01"));
							__LIB_16__::func_912(&uLocal_416, joaat("p_michael_backpack_s"));
							__LIB_16__::func_905(&uLocal_416, &cLocal_80);
							__LIB_16__::func_905(&uLocal_416, &cLocal_84);
							__LIB_16__::func_905(&uLocal_416, &cLocal_88);
							__LIB_16__::func_905(&uLocal_416, &cLocal_92);
							__LIB_16__::func_905(&uLocal_416, &cLocal_100);
							__LIB_16__::func_905(&uLocal_416, &cLocal_96);
							__LIB_16__::func_905(&uLocal_416, &cLocal_100);
							__LIB_16__::func_905(&uLocal_416, &cLocal_101);
							__LIB_16__::func_905(&uLocal_416, &cLocal_55);
							__LIB_16__::func_905(&uLocal_416, &cLocal_109);
							__LIB_16__::func_905(&uLocal_416, &cLocal_64);
							__LIB_16__::func_905(&uLocal_416, &cLocal_68);
							__LIB_16__::func_905(&uLocal_416, &cLocal_72);
							__LIB_16__::func_905(&uLocal_416, &cLocal_76);
							__LIB_16__::func_905(&uLocal_416, &cLocal_51);
							__LIB_16__::func_905(&uLocal_416, &cLocal_105);
							__LIB_16__::func_905(&uLocal_416, "amb@prop_human_seat_computer@male@base");
							__LIB_17__::func_470(&uLocal_416, "Lester1A_Qub3d");
							__LIB_17__::func_470(&uLocal_416, "Lester1A");
							__LIB_17__::func_470(&uLocal_416, "COMPUTERS");
							iVar1 = 3;
							while (iVar1 <= 26)
							{
								if (iVar1 != 7)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[iVar1]))
									{
										PED::DELETE_PED(&(iLocal_413[iVar1]));
									}
								}
								iVar1++;
							}
							iVar2 = 1;
							while (iVar2 <= 29)
							{
								if (iVar2 != 23)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_414[iVar2 /*10*/]))
									{
										ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[iVar2 /*10*/]));
									}
								}
								iVar2++;
							}
							iLocal_367 = 0;
						}
					}
				}
			}
			if (func_237())
			{
				if (__LIB_0__::func_692(iLocal_413[27]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_413[27], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_413[27], true);
					func_877(7);
				}
				else
				{
					func_877(6);
				}
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_42__::func_371(-805.3523f, 177.56497f, 71.84848f, -801.70416f, 168.16263f, 74.974594f, 9.0375f, -828.2097f, 179.0565f, 70.2544f, 154.3327f, 1, 0, 1, 0, 0);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				__LIB_0__::func_123(&(Local_414[30 /*10*/]));
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				iLocal_2251++;
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
				iLocal_2283 = -1;
				func_127(8);
			}
			break;
	}
}

int func_237()//Position - 0x18EE0
{
	if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iLocal_413[27])) && !PED::IS_PED_INJURED(iLocal_413[27]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_413[27], PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (__LIB_14__::func_858(iLocal_413[27], 1, 0, 0, 0))
		{
			return 1;
		}
		if (func_238())
		{
			return 1;
		}
	}
	return 0;
}

int func_238()//Position - 0x18F5B
{
	if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::DOES_ENTITY_EXIST(iLocal_413[27])) && !PED::IS_PED_INJURED(iLocal_413[27]))
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_413[27]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_413[27]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.21313f, 182.8889f, 75.42337f, -796.6697f, 186.31412f, 71.60547f, 10.69f, false, true, 0))
			{
				if (__LIB_37__::func_306(iLocal_413[27], 1126825984))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_260(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x19981
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
	}
	else
	{
		Var2 = 12;
		Var2.f_13 = 12;
		Var2.f_26 = 12;
		Var2.f_39 = 9;
		Var2.f_49 = 9;
		__LIB_38__::func_745(iParam1, &Var2, 1, -1);
		iVar0 = 0;
		while (iVar0 < 12)
		{
			__LIB_17__::func_460(uParam0, sParam2, iVar0, Var2.f_13[iVar0], Var2[iVar0], iParam3);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			__LIB_17__::func_459(uParam0, sParam2, iVar1, Var2.f_39[iVar1], Var2.f_49[iVar1], iParam3);
			iVar1++;
		}
	}
}

void func_267(int iParam0)//Position - 0x19EFB
{
	if (func_269(iParam0) && !func_268(iParam0))
	{
		Local_415[iParam0 /*8*/].f_4 = 1;
	}
}

bool func_268(int iParam0)//Position - 0x19F22
{
	return Local_415[iParam0 /*8*/].f_4;
}

bool func_269(int iParam0)//Position - 0x19F33
{
	return Local_415[iParam0 /*8*/].f_3;
}

bool func_276(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, char* sParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x1A22E
{
	return __LIB_37__::func_355(iParam0, Param1, __LIB_15__::func_996(), Param2, Param3, bParam5, 3, 0, 0, 0, 0, sParam6, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 0, bParam7, __LIB_0__::func_591(), 1, 0, bParam8, iParam9, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), bParam10, fParam4);
}

int func_320(int iParam0, int iParam1)//Position - 0x1CAE4
{
	if (Local_415[iParam0 /*8*/].f_3 == 1 || Local_415[iParam0 /*8*/].f_4 == 1)
	{
		return 0;
	}
	Local_415[iParam0 /*8*/].f_3 = 1;
	Local_415[iParam0 /*8*/].f_4 = 0;
	Local_415[iParam0 /*8*/] = MISC::GET_GAME_TIMER();
	Local_415[iParam0 /*8*/].f_2 = iParam1;
	Local_415[iParam0 /*8*/].f_1 = 1;
	return 1;
}

void func_321()//Position - 0x1CB47
{
	switch (iLocal_2251)
	{
		case 0:
			__LIB_44__::func_106(5, "6. Leave the building", 0, 0, 0, 1);
			__LIB_16__::func_857(&uLocal_416, "AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B");
			__LIB_37__::func_348(&uLocal_416, &cLocal_121);
			func_320(4, 0);
			__LIB_41__::func_48(128, 0);
			__LIB_41__::func_48(129, 0);
			__LIB_0__::func_229("LES1A_7", 7500, 1);
			iLocal_378 = 0;
			iLocal_2251++;
			break;
		case 1:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_164)
			{
				iLocal_368 = 1;
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_LEAVE_OFFICE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_LEAVE_OFFICE");
				}
				func_127(7);
			}
			break;
	}
	switch (iLocal_378)
	{
		case 0:
			if ((!PED::IS_PED_INJURED(iLocal_413[3]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.18f, -245.31f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false)) && STREAMING::HAS_ANIM_DICT_LOADED("amb@prop_human_seat_computer@male@base"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_414[1 /*10*/]))
				{
					Local_414[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.18f, -245.31f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
				}
				ENTITY::SET_ENTITY_COORDS(Local_414[1 /*10*/], -1060.36f, -244.97f, 43.02f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_414[1 /*10*/], 117.456345f);
				ENTITY::FREEZE_ENTITY_POSITION(Local_414[1 /*10*/], true);
				TASK::CLEAR_PED_TASKS(iLocal_413[3]);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_413[3], 16);
				TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_413[3], "amb@prop_human_seat_computer@male@base", "base", -1060.36f, -244.96f, 43.52f, 0f, 0f, -62.4524f, 1000f, -8f, -1, 1025, 0f, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[3], false, false);
				if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[3]))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[3]);
				}
				iLocal_378++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1058.0175f, -237.58707f, 43.02128f, -1053.2711f, -246.44096f, 48.722553f, 3.8125f, false, true, 0))
			{
				iLocal_378++;
			}
			break;
		case 2:
			if (!__LIB_16__::func_855())
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_429();
				}
				__LIB_0__::func_222(&uLocal_186, 3, iLocal_413[3], "LIEngineer", 0, 1);
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED("AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B"))
			{
				if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_BYE", 8, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 3);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "AMB@PROP_HUMAN_SEAT_COMPUTER@MALE@IDLE_B", "IDLE_E", -1060.36f, -244.96f, 43.52f, 0f, 0f, -62.4524f, 1000f, -8f, -1, 1024, 0f, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "amb@prop_human_seat_computer@male@base", "base", -1060.36f, -244.96f, 43.52f, 0f, 0f, -62.4524f, 1000f, -8f, -1, 1025, 0f, 2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_413[3], iLocal_169);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_413[3], 5000, 2048, 4);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_413[3], PLAYER::PLAYER_PED_ID(), 4000, 2048, 4);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[3], false, false);
					iLocal_386 = MISC::GET_GAME_TIMER();
					iLocal_378++;
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "GENERIC_BYE", 3);
				iLocal_378++;
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_413[3]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_413[3], true)) < 7.5625f)
			{
				if (__LIB_16__::func_855() && (MISC::GET_GAME_TIMER() - iLocal_386) > 8000)
				{
					if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_HANG", 8, 0, 0, 0))
					{
						iLocal_386 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_326()//Position - 0x1D0B8
{
	struct<3> Var0;
	switch (iLocal_2251)
	{
		case 0:
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1053.66f, -231.77f, 43.99f, 0.5f, joaat("prop_security_case_01"), false))
			{
				Local_414[4 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1053.66f, -231.77f, 43.99f, 0.5f, joaat("prop_security_case_01"), true, false, true);
				__LIB_44__::func_106(4, "5. Plant the bomb", 0, 0, 0, 1);
				__LIB_0__::func_325();
				__LIB_0__::func_229("LES1A_6", 7500, 1);
				iLocal_170 = __LIB_0__::func_643(Local_414[4 /*10*/]);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_170, "PROTOTYPE");
				bLocal_373 = false;
				iLocal_2251++;
			}
			break;
		case 1:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_4", 8);
				iLocal_365 = 0;
				iLocal_2251++;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1053.8254f, -234.70067f, 43.021164f, -1057.1494f, -234.35349f, 46.205666f, 1f, false, true, 0) && CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				__LIB_0__::func_429();
				__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_RIG_EXPLOSIVE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_RIG_EXPLOSIVE");
				}
				__LIB_16__::func_857(&uLocal_416, &cLocal_88);
				__LIB_16__::func_857(&uLocal_416, &cLocal_72);
				__LIB_16__::func_857(&uLocal_416, "amb@prop_human_seat_computer@male@base");
				__LIB_16__::func_852(&uLocal_416, joaat("p_michael_backpack_s"));
				func_267(10);
				PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
				__LIB_0__::func_714(&iLocal_170);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 0f, 3);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_2251++;
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_414[1 /*10*/]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_414[1 /*10*/], true) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[1 /*10*/]));
				MISC::CLEAR_AREA(Var0, 1f, true, true, false, false);
			}
			if (!bLocal_373)
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					RECORDING::REPLAY_STOP_EVENT();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 3);
					bLocal_373 = true;
				}
			}
			if (bLocal_373)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_414[29 /*10*/]) && STREAMING::HAS_MODEL_LOADED(joaat("p_michael_backpack_s")))
				{
					func_227(&(Local_414[29 /*10*/]), joaat("p_michael_backpack_s"), Local_160, 0);
					ENTITY::SET_ENTITY_COLLISION(Local_414[29 /*10*/], false, false);
					ENTITY::SET_ENTITY_COORDS(Local_414[29 /*10*/], Local_160, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_414[29 /*10*/], Local_161, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_414[29 /*10*/], true);
				}
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
				AUDIO::START_AUDIO_SCENE("LESTER_1A_LEAVE_OFFICE");
				iLocal_2251++;
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1772472848))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1772472848, 0f, true, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1772472848, 4, true, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1772472848, 3, true, true);
					}
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			else if (CAM::IS_SCREEN_FADED_IN())
			{
				func_127(6);
			}
			break;
		case -1:
			break;
	}
	if (!iLocal_365)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 9, 0, 0);
			iLocal_365 = 1;
		}
	}
}

void func_329()//Position - 0x1D4C9
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	int iVar12;
	char* sVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	if (iLocal_2251 >= 1 && iLocal_2251 < 5)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			if (iLocal_2302 == 1)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "SET_SNAP_SPEED");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_2302 = 0;
			}
		}
		else if (iLocal_2302 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "SET_SNAP_SPEED");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(500f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_2302 = 1;
		}
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			fVar2 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 239 /*INPUT_CURSOR_X*/);
			fVar3 = PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 240 /*INPUT_CURSOR_Y*/);
			if (fLocal_2279 != fVar2 || fLocal_2280 != fVar3)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "SET_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fLocal_2276 = (fLocal_2276 + SYSTEM::TIMESTEP());
			}
			fLocal_2279 = fVar2;
			fLocal_2280 = fVar3;
		}
		else
		{
			__LIB_0__::func_341(&iVar4, &iVar5, &uVar6, &uVar7, 0, 0);
			if (iVar4 != 0 || iVar5 != 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "MOVE_CURSOR");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(((SYSTEM::TO_FLOAT(iVar4) * 5f) * SYSTEM::TIMESTEP()));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(((SYSTEM::TO_FLOAT(iVar5) * 5f) * SYSTEM::TIMESTEP()));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				fLocal_2276 = (fLocal_2276 + SYSTEM::TIMESTEP());
			}
		}
		if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_172))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "SET_INPUT_EVENT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(16);
				iLocal_172 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			}
		}
		else
		{
			iVar1 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_172);
			if (iLocal_2264 == 0 && fLocal_2276 >= 0.25f)
			{
				HUD::CLEAR_HELP(true);
				iLocal_2264 = 1;
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "COMPUTERS_MOUSE_CLICK", 0, true);
			__LIB_0__::func_497(389, 1, 0);
		}
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_173))
		{
			iVar8 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(iLocal_173);
			if (iVar8 != -1)
			{
				iLocal_2267 = iVar8;
				Local_2262[iVar8 /*6*/].f_1 = 1;
				if (Local_2262[iVar8 /*6*/].f_4 && Local_2262[iVar8 /*6*/].f_5 != -1)
				{
					AUDIO::STOP_SOUND(Local_2262[iVar8 /*6*/].f_5);
					Local_2262[iVar8 /*6*/].f_4 = 0;
					iLocal_2266 = (iLocal_2266 - 1);
				}
				if (iLocal_2264 < 2)
				{
					if (Local_2262[0 /*6*/].f_1)
					{
						HUD::CLEAR_HELP(true);
						if (func_450() == 0)
						{
							iLocal_2264 = 3;
						}
						else
						{
							iLocal_2264 = 2;
						}
					}
				}
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CLOSE_WINDOW", "LESTER1A_SOUNDS", true);
				__LIB_0__::func_497(390, 1, 0);
			}
		}
	}
	if (iLocal_2251 >= 1)
	{
		if (!iLocal_375 && STREAMING::HAS_MODEL_LOADED(joaat("prop_monitor_01c")))
		{
			if (bLocal_374)
			{
				ENTITY::CREATE_MODEL_SWAP(Local_152, 1f, joaat("prop_monitor_01d"), joaat("prop_monitor_01c"), true);
			}
			else
			{
				ENTITY::CREATE_MODEL_SWAP(Local_152, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01c"), true);
			}
			__LIB_16__::func_912(&uLocal_416, joaat("prop_monitor_01c"));
			iLocal_375 = 1;
		}
	}
	switch (iLocal_2251)
	{
		case 0:
			if (!iLocal_385 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_171))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2263[0]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				__LIB_0__::func_610("LES1A_ANTVI");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2263[1]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				__LIB_0__::func_610("LES1A_MYCOM");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2263[2]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
				__LIB_0__::func_610("LES1A_EXT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2263[3]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
				__LIB_0__::func_610("LES1A_FOLD");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2263[4]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
				__LIB_0__::func_610("LES1A_PRINT");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "ADD_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2263[5]);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(10);
				__LIB_0__::func_610("LES1A_TRASH");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iVar0 = 0;
				while (iVar0 <= 11)
				{
					if (Local_2262[iVar0 /*6*/] != -1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "SET_DATA_SLOT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_2262[iVar0 /*6*/]);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Local_2262[iVar0 /*6*/].f_2);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(Local_2262[iVar0 /*6*/].f_3);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					else
					{
						Local_2262[iVar0 /*6*/].f_1 = 1;
					}
					iVar0++;
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "RUN_PROGRAM");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_385 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LifeInvad_Chair", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) || CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				ENTITY::SET_ENTITY_COORDS(Local_414[1 /*10*/], -1060.36f, -244.97f, 43.02f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_414[1 /*10*/], 117.456345f);
				if (!__LIB_0__::func_798(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS"), 1))
				{
					if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_414[1 /*10*/], true), "PROP_HUMAN_SEAT_COMPUTER", 1.5f, false))
					{
						TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_414[1 /*10*/], true), 1.5f, -1);
					}
				}
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_171))
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						__LIB_0__::func_325();
					}
					sLocal_390 = "LS1A_LOOK";
					__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
					CUTSCENE::REMOVE_CUTSCENE();
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					HUD::CLEAR_PRINTS();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_171, 255, 255, 255, 0, 0);
					__LIB_0__::func_963(1, 1, 1, 0);
					func_448(8);
					func_448(6);
					func_448(7);
					iVar9 = 13;
					while (iVar9 <= 19)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[iVar9]))
						{
							PED::DELETE_PED(&(iLocal_413[iVar9]));
						}
						iVar9++;
					}
					iVar9 = 20;
					while (iVar9 <= 26)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[iVar9]))
						{
							PED::DELETE_PED(&(iLocal_413[iVar9]));
						}
						iVar9++;
					}
					func_83(&(Local_414[6 /*10*/]), -1000f);
					func_83(&(Local_414[7 /*10*/]), -1000f);
					func_83(&(Local_414[9 /*10*/]), -1000f);
					__LIB_16__::func_912(&uLocal_416, iLocal_125);
					__LIB_16__::func_912(&uLocal_416, iLocal_126);
					__LIB_16__::func_912(&uLocal_416, iLocal_127);
					__LIB_16__::func_912(&uLocal_416, joaat("prop_paper_ball"));
					__LIB_16__::func_905(&uLocal_416, &cLocal_100);
					__LIB_16__::func_905(&uLocal_416, &cLocal_96);
					__LIB_16__::func_905(&uLocal_416, &cLocal_105);
					__LIB_16__::func_905(&uLocal_416, &cLocal_80);
					__LIB_16__::func_905(&uLocal_416, &cLocal_84);
					__LIB_16__::func_905(&uLocal_416, &cLocal_88);
					__LIB_16__::func_905(&uLocal_416, &cLocal_92);
					__LIB_16__::func_852(&uLocal_416, joaat("prop_monitor_01c"));
					iLocal_375 = 0;
					iVar10 = 16;
					while (iVar10 <= 21)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[iVar10 /*10*/]))
						{
							Var11 = { ENTITY::GET_ENTITY_COORDS(Local_414[iVar10 /*10*/], true) };
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[iVar10 /*10*/]));
							MISC::CLEAR_AREA(Var11, 1f, true, true, false, false);
						}
						iVar10++;
					}
					__LIB_0__::func_499(385, 0);
					PAD::INIT_PC_SCRIPTED_CONTROLS("Lester1A_PopUpMinigame");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_POPUP_MINIGAME"))
					{
						AUDIO::START_AUDIO_SCENE("LESTER_1A_POPUP_MINIGAME");
					}
					iVar0 = 0;
					while (iVar0 <= (iLocal_2278 - 1))
					{
						if ((Local_2262[iVar0 /*6*/] != -1 && Local_2262[iVar0 /*6*/].f_5 != -1) && Local_2262[iVar0 /*6*/].f_4)
						{
							AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar0 /*6*/].f_5, "State", 2f);
						}
						iVar0++;
					}
					iLocal_2265 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
					iLocal_2277 = 0;
					iLocal_391 = 0;
					iLocal_2251++;
				}
			}
			break;
		case 1:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_3", 8);
				iLocal_365 = 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_414[1 /*10*/]))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), false))
				{
					Local_414[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), true, false, true);
				}
			}
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (iLocal_2264 == 0)
				{
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						__LIB_0__::func_190("LES1A_16_KM");
					}
					else
					{
						__LIB_0__::func_190("LES1A_16");
					}
				}
				else if (iLocal_2264 == 1)
				{
					__LIB_0__::func_190("LES1A_161");
				}
				else if (iLocal_2264 == 2)
				{
					__LIB_0__::func_190("LES1A_162");
				}
				else if (iLocal_2264 == 3)
				{
					__LIB_0__::func_190("LES1A_17");
				}
				else if (iLocal_2264 == 4)
				{
					__LIB_0__::func_190("LES1A_18");
				}
			}
			if (func_450() == 0)
			{
				if (iLocal_2264 < 3)
				{
					HUD::CLEAR_HELP(true);
					iLocal_2264 = 3;
					sLocal_390 = "LS1A_SOFT";
					__LIB_0__::func_638();
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_2265)
			{
				iLocal_2265 = MISC::GET_GAME_TIMER();
				if (iLocal_2273 != 0)
				{
					iLocal_2265 = (iLocal_2265 + MISC::GET_RANDOM_INT_IN_RANGE(100, 250));
				}
				else
				{
					switch (iLocal_2277)
					{
						case 0:
							iLocal_2265 = (iLocal_2265 + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
							break;
						case 1:
							iLocal_2265 = (iLocal_2265 + MISC::GET_RANDOM_INT_IN_RANGE(500, 1000));
							break;
						case 2:
						case 3:
							iLocal_2265 = (iLocal_2265 + MISC::GET_RANDOM_INT_IN_RANGE(6000, 7000));
							break;
						default:
							if (func_450() == 0)
							{
								iLocal_2265 += 10000;
							}
							else
							{
								iLocal_2265 = (iLocal_2265 + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							}
							break;
						}
				}
				if (func_450() < (iLocal_2278 - 1))
				{
					iLocal_2277++;
					iVar12 = -1;
					while ((iVar12 == -1 || iVar12 == iLocal_2267) || !Local_2262[iVar12 /*6*/].f_1)
					{
						iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_2278);
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "OPEN_POPUP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					AUDIO::PLAY_SOUND_FRONTEND(-1, "OPEN_WINDOW", "LESTER1A_SOUNDS", true);
					Local_2262[iVar12 /*6*/].f_1 = 0;
					if (Local_2262[iVar12 /*6*/].f_4 == 0 && Local_2262[iVar12 /*6*/].f_5 != -1)
					{
						if (iLocal_2266 < 6)
						{
							switch (iLocal_2266)
							{
								case 0:
									sVar13 = "POPUP_MUSIC_01";
									break;
								case 1:
									sVar13 = "POPUP_MUSIC_02";
									break;
								case 2:
									sVar13 = "POPUP_MUSIC_03";
									break;
								case 3:
									sVar13 = "POPUP_MUSIC_04";
									break;
								case 4:
									sVar13 = "POPUP_MUSIC_05";
									break;
								case 5:
									sVar13 = "POPUP_MUSIC_06";
									break;
								default:
									sVar13 = "POPUP_MUSIC_RND";
									break;
							}
						}
						else
						{
							sVar13 = "POPUP_MUSIC_RND";
						}
						AUDIO::PLAY_SOUND_FROM_COORD(Local_2262[iVar12 /*6*/].f_5, sVar13, -1059.63f, -244.61f, 43.92f, "LESTER1A_SOUNDS", false, 0, false);
						AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar12 /*6*/].f_5, "State", 2f);
						Local_2262[iVar12 /*6*/].f_4 = 1;
						iLocal_2266++;
					}
				}
			}
			switch (iVar1)
			{
				case 2:
					if (!bLocal_2268)
					{
						if (func_450() > 0)
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "OPEN_ANTIVIRUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							__LIB_0__::func_610("LES1A_AV2");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							if (!iLocal_391)
							{
								sLocal_390 = "LS1A_CLICK";
								iLocal_391 = 1;
							}
							__LIB_0__::func_638();
						}
						else
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "OPEN_ANTIVIRUS");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
							__LIB_0__::func_610("LES1A_AV1");
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							bLocal_2268 = true;
							if (iLocal_2264 != 4)
							{
								HUD::CLEAR_HELP(true);
								iLocal_2264 = 4;
								sLocal_390 = "LS1A_SCAN";
								__LIB_0__::func_638();
							}
						}
					}
					break;
				case 60:
					if (!GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(iLocal_173))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "LAST_POPUP_CLOSED");
						iLocal_173 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
					}
					break;
				case 50:
					if (bLocal_2268)
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2272, "FINDING_VIRUS", "LESTER1A_SOUNDS", true);
						if (iLocal_2264 != 5)
						{
							HUD::CLEAR_HELP(true);
							iLocal_2264 = 5;
							sLocal_390 = "LS1A_SCAN2";
							__LIB_0__::func_638();
						}
						iLocal_2273 = MISC::GET_GAME_TIMER();
						iLocal_2265 = iLocal_2273 + 100;
					}
					break;
				case 51:
					if (bLocal_2268)
					{
						HUD::CLEAR_HELP(true);
						__LIB_0__::func_638();
						__LIB_0__::func_498(0, -1);
						iLocal_2274 = 0;
						sLocal_390 = "LS1A_DALEK";
						iLocal_2251++;
					}
					break;
			}
			if (iLocal_2273 != 0)
			{
				iVar14 = (MISC::GET_GAME_TIMER() - iLocal_2273);
				switch (iLocal_2271)
				{
					case 0:
						if (iVar14 >= 1000)
						{
							AUDIO::STOP_SOUND(iLocal_2272);
							iLocal_2271++;
						}
						else
						{
							iLocal_2269 = iVar15;
							iVar15 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar14) / 1000f) * 85f));
						}
						break;
					case 1:
						if (iVar14 >= 3000)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2272, "FINDING_VIRUS", "LESTER1A_SOUNDS", true);
							iLocal_2271++;
						}
						else if (!iLocal_2270)
						{
							iLocal_2270 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					case 2:
						if (iVar14 >= 3250)
						{
							AUDIO::STOP_SOUND(iLocal_2272);
							iLocal_2271++;
						}
						else
						{
							if (iLocal_2270)
							{
								iLocal_2270 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2269 = iVar15;
							iVar15 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar14 - 3000)) / 250f) * 1f)) + 85;
						}
						break;
					case 3:
						if (iVar14 >= 3750)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2272, "FINDING_VIRUS", "LESTER1A_SOUNDS", true);
							iLocal_2271++;
						}
						else if (!iLocal_2270)
						{
							iLocal_2270 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					case 4:
						if (iVar14 >= 4500)
						{
							AUDIO::STOP_SOUND(iLocal_2272);
							iLocal_2271++;
						}
						else
						{
							if (iLocal_2270)
							{
								iLocal_2270 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2269 = iVar15;
							iVar15 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar14 - 3750)) / 750f) * 3f)) + 86;
						}
						break;
					case 5:
						if (iVar14 >= 4650)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2272, "FINDING_VIRUS", "LESTER1A_SOUNDS", true);
							iLocal_2271++;
						}
						else if (!iLocal_2270)
						{
							iLocal_2270 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					case 6:
						if (iVar14 >= 5000)
						{
							AUDIO::STOP_SOUND(iLocal_2272);
							iLocal_2271++;
						}
						else
						{
							if (iLocal_2270)
							{
								iLocal_2270 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2269 = iVar15;
							iVar15 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar14 - 4650)) / 350f) * 3f)) + 89;
						}
						break;
					case 7:
						if (iVar14 >= 6500)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2272, "FINDING_VIRUS", "LESTER1A_SOUNDS", true);
							iLocal_2271++;
						}
						else if (!iLocal_2270)
						{
							iLocal_2270 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					case 8:
						if (iVar14 >= 6850)
						{
							AUDIO::STOP_SOUND(iLocal_2272);
							iLocal_2271++;
						}
						else
						{
							if (iLocal_2270)
							{
								iLocal_2270 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2269 = iVar15;
							iVar15 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar14 - 6500)) / 350f) * 2f)) + 92;
						}
						break;
					case 9:
						if (iVar14 >= 7350)
						{
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_2272, "FINDING_VIRUS", "LESTER1A_SOUNDS", true);
							iLocal_2271++;
						}
						else if (!iLocal_2270)
						{
							iLocal_2270 = 1;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						break;
					case 10:
						if (iVar14 >= 8600)
						{
							AUDIO::STOP_SOUND(iLocal_2272);
							iLocal_2271++;
						}
						else
						{
							if (iLocal_2270)
							{
								iLocal_2270 = 0;
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "PLAY_SCAN_ANIM");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							iLocal_2269 = iVar15;
							iVar15 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT((iVar14 - 7350)) / 1250f) * 6f)) + 94;
						}
						break;
					case 11:
						AUDIO::STOP_SOUND(iLocal_2272);
						AUDIO::PLAY_SOUND(-1, "Virus_Eradicated", "LESTER1A_SOUNDS", false, 0, true);
						iLocal_2269 = iVar15;
						iVar15 = 100;
						iLocal_2273 = 0;
						break;
				}
				if (iLocal_2269 != iVar15)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "SET_SCAN_BAR");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar15);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar16 = 0;
			while (iVar16 < Local_2262.f_0)
			{
				if (Local_2262[iVar16 /*6*/].f_4 && Local_2262[iVar16 /*6*/].f_5 != -1)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar16 /*6*/].f_5, "TracksPlaying", SYSTEM::TO_FLOAT(__LIB_0__::func_340(iLocal_2266, 1, 12)));
				}
				iVar16++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_171, 255, 255, 255, 0, 0);
			break;
		case 2:
			if ((MISC::GET_GAME_TIMER() - iLocal_2275) >= 100)
			{
				while (!bVar17)
				{
					if (iLocal_2274 >= iLocal_2278)
					{
						SYSTEM::SETTIMERA(0);
						bVar17 = true;
						iLocal_2251++;
					}
					else if (!Local_2262[iLocal_2274 /*6*/].f_1 && Local_2262[iLocal_2274 /*6*/] != -1)
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_171, "CLOSE_POPUP");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_2274);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						if (Local_2262[iLocal_2274 /*6*/].f_4 && Local_2262[iLocal_2274 /*6*/].f_5 != -1)
						{
							AUDIO::STOP_SOUND(Local_2262[iLocal_2274 /*6*/].f_5);
							Local_2262[iLocal_2274 /*6*/].f_4 = 0;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CLOSE_WINDOW", "LESTER1A_SOUNDS", true);
						Local_2262[iLocal_2274 /*6*/].f_1 = 1;
						iLocal_2275 = MISC::GET_GAME_TIMER();
						bVar17 = true;
					}
					else
					{
						bVar17 = false;
					}
					iLocal_2274++;
				}
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_171, 255, 255, 255, 0, 0);
			break;
		case 3:
			sLocal_390 = "DONTPLAY";
			if (__LIB_16__::func_855())
			{
				if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_PASS", 8, 0, 0, 0))
				{
					iLocal_2251++;
				}
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_171, 255, 255, 255, 0, 0);
			break;
		case 4:
			if (!__LIB_0__::func_75())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_0__::func_498(0, -1);
				iLocal_2251++;
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_171, 255, 255, 255, 0, 0);
			break;
		case 5:
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_171, 255, 255, 255, 0, 0);
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_413[3]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_413[3], "Life_invader_Engineer", 0, 0, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_414[1 /*10*/], "LifeInvad_Chair", 0, joaat("prop_off_chair_01"), 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_POPUP_MINIGAME"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_POPUP_MINIGAME");
				}
				__LIB_16__::func_852(&uLocal_416, joaat("ig_JAY_Norris"));
				__LIB_16__::func_852(&uLocal_416, iLocal_125);
				__LIB_16__::func_852(&uLocal_416, iLocal_126);
				__LIB_16__::func_852(&uLocal_416, iLocal_127);
				__LIB_16__::func_852(&uLocal_416, joaat("prop_paper_ball"));
				__LIB_16__::func_852(&uLocal_416, joaat("prop_off_chair_01"));
				__LIB_16__::func_857(&uLocal_416, &cLocal_84);
				__LIB_16__::func_857(&uLocal_416, &cLocal_68);
				__LIB_16__::func_857(&uLocal_416, &cLocal_105);
				__LIB_16__::func_857(&uLocal_416, &cLocal_100);
				__LIB_16__::func_857(&uLocal_416, &cLocal_96);
				__LIB_16__::func_857(&uLocal_416, &cLocal_109);
				__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
				func_320(9, 0);
				func_320(6, 0);
				func_320(5, 0);
				func_320(8, 0);
				func_320(7, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
				iLocal_2251++;
			}
			break;
		case 6:
			__LIB_32__::func_34(&uLocal_416, &iLocal_171);
			iLocal_403 = 0;
			iLocal_404 = 0;
			iLocal_2251++;
			break;
		case 7:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LifeInvad_Chair", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_414[1 /*10*/], true);
				iLocal_403 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
				func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
				AUDIO::START_AUDIO_SCENE("LESTER_1A_RIG_EXPLOSIVE");
				func_320(10, 0);
				iLocal_404 = 1;
			}
			if (iLocal_404 && iLocal_403)
			{
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				func_127(5);
			}
			break;
		case -1:
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			break;
	}
	if (iLocal_2251 == 1)
	{
		if (!__LIB_0__::func_75())
		{
			if (iLocal_392 == -1)
			{
				iLocal_392 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			iLocal_392 = -1;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_390))
		{
			if (__LIB_16__::func_855())
			{
				if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, sLocal_390, 8, 0, 0, 0))
				{
					if (MISC::ARE_STRINGS_EQUAL(sLocal_390, "LS1A_LOOK"))
					{
						sLocal_390 = "LS1A_PCCHT";
					}
					else
					{
						sLocal_390 = "";
					}
					iLocal_392 = -1;
					iLocal_393 = 0;
				}
			}
		}
		else if (!MISC::ARE_STRINGS_EQUAL(sLocal_390, "DONTPLAY"))
		{
			if ((iLocal_392 != -1 && (MISC::GET_GAME_TIMER() - iLocal_392) > 3500) || iLocal_393)
			{
				if (__LIB_16__::func_855())
				{
					if (!iLocal_393)
					{
						if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_ENCOUR", 8, 0, 0, 0))
						{
							iLocal_393 = 1;
						}
					}
					else if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_DEAL", 8, 0, 0, 0))
					{
						iLocal_393 = 0;
					}
				}
			}
		}
	}
	if (!iLocal_365)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_43__::func_498("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			__LIB_17__::func_622(PLAYER::PLAYER_PED_ID(), 9, 15);
			iLocal_365 = 1;
		}
	}
}

int func_413(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x36BEE
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
										func_413(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_413(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_422(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_421(iParam0, iVar10, &iVar4, 1))
							{
								func_413(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_413(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_413(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_413(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_413(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_413(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_413(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_413(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_413(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_413(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_421(iParam0, iVar10, &iVar4, 0))
		{
			func_413(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_414(iParam0, iVar10, &iVar4))
		{
			func_413(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_414(int iParam0, int iParam1, int iParam2)//Position - 0x373FE
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_415(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_415(int iParam0, int iParam1, int iParam2)//Position - 0x3748A
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
				if (!func_415(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_415(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_415(iParam0, 14, iVar4))
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
			if (!func_415(iParam0, 14, uVar8[iVar7]))
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

int func_421(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x37F0F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_415(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2)//Position - 0x37FA5
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
				if (func_415(iParam0, iParam1, iVar0))
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
				if (func_415(iParam0, iParam1, iVar1))
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

void func_448(int iParam0)//Position - 0x3CEA9
{
	Local_415[iParam0 /*8*/].f_3 = 0;
	Local_415[iParam0 /*8*/].f_4 = 0;
	Local_415[iParam0 /*8*/] = 0;
	Local_415[iParam0 /*8*/].f_2 = 0;
	Local_415[iParam0 /*8*/].f_1 = 1;
	Local_415[iParam0 /*8*/].f_5 = 0;
	Local_415[iParam0 /*8*/].f_6 = 0;
	Local_415[iParam0 /*8*/].f_7 = 0;
}

int func_450()//Position - 0x3CF11
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		if (!Local_2262[iVar1 /*6*/].f_1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_453()//Position - 0x3D0EF
{
	int iVar0;
	switch (iLocal_2251)
	{
		case 0:
			__LIB_44__::func_106(3, "3. Follow Programmer", 0, 0, 0, 1);
			CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_2", 8);
			func_260(&uLocal_1426, PLAYER::PLAYER_PED_ID(), "Michael", 0);
			iLocal_365 = 0;
			__LIB_16__::func_852(&uLocal_416, iLocal_125);
			__LIB_16__::func_852(&uLocal_416, iLocal_126);
			__LIB_16__::func_852(&uLocal_416, iLocal_127);
			__LIB_16__::func_852(&uLocal_416, joaat("ig_JAY_Norris"));
			__LIB_16__::func_852(&uLocal_416, joaat("prop_paper_ball"));
			__LIB_16__::func_852(&uLocal_416, joaat("prop_off_chair_01"));
			__LIB_16__::func_852(&uLocal_416, joaat("prop_monitor_01d"));
			__LIB_16__::func_909(&uLocal_416, "COMPUTERS");
			__LIB_16__::func_909(&uLocal_416, "Lester1A_01");
			__LIB_16__::func_857(&uLocal_416, &cLocal_105);
			__LIB_16__::func_857(&uLocal_416, &cLocal_100);
			__LIB_16__::func_857(&uLocal_416, &cLocal_96);
			__LIB_16__::func_857(&uLocal_416, &cLocal_64);
			__LIB_16__::func_857(&uLocal_416, &cLocal_80);
			__LIB_16__::func_857(&uLocal_416, &cLocal_84);
			__LIB_37__::func_348(&uLocal_416, &cLocal_118);
			__LIB_16__::func_909(&uLocal_416, "Lester1A_Qub3d");
			func_134(&uLocal_416, "desktop_pc", &iLocal_171, 0);
			func_267(2);
			if (!PED::IS_PED_INJURED(iLocal_413[3]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_413[3], false);
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
			__LIB_41__::func_48(111, 0);
			__LIB_0__::func_229("LES1A_5", 7500, 1);
			iLocal_170 = __LIB_0__::func_666(iLocal_413[3], 0, 145);
			iLocal_387 = 1;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
			iLocal_2251++;
			break;
		case 1:
			func_320(5, 0);
			func_320(6, 0);
			func_320(8, 0);
			func_320(7, 0);
			func_320(11, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(Local_414[1 /*10*/]))
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), false))
				{
					Local_414[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), true, false, true);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_413[3]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1064.3628f, -240.88577f, 43.041534f, -1062.2366f, -245.068f, 44.89628f, 1.5f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_413[3]) && CUTSCENE::HAS_CUTSCENE_LOADED())
					{
						__LIB_0__::func_429();
						HUD::REMOVE_BLIP(&iLocal_170);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
						func_267(3);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_413[3], "Life_invader_Engineer", 0, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_414[1 /*10*/], "LifeInvad_Chair", 0, joaat("prop_off_chair_01"), 0);
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 0f, 3);
						RECORDING::REPLAY_START_EVENT(4);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_FOLLOW_PROGRAMMER"))
						{
							AUDIO::STOP_AUDIO_SCENE("LESTER_1A_FOLLOW_PROGRAMMER");
						}
						iVar0 = 0;
						while (iVar0 <= (iLocal_2278 - 1))
						{
							if ((Local_2262[iVar0 /*6*/] != -1 && Local_2262[iVar0 /*6*/].f_5 != -1) && Local_2262[iVar0 /*6*/].f_4)
							{
								AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar0 /*6*/].f_5, "State", 1f);
							}
							iVar0++;
						}
						func_448(5);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[8]))
						{
							PED::DELETE_PED(&(iLocal_413[8]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[10]))
						{
							PED::DELETE_PED(&(iLocal_413[10]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[11]))
						{
							PED::DELETE_PED(&(iLocal_413[11]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[9]))
						{
							PED::DELETE_PED(&(iLocal_413[9]));
						}
						__LIB_16__::func_912(&uLocal_416, joaat("ig_JAY_Norris"));
						__LIB_16__::func_912(&uLocal_416, joaat("prop_off_chair_01"));
						__LIB_16__::func_905(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
						__LIB_37__::func_349(&uLocal_416, &cLocal_118);
						__LIB_16__::func_905(&uLocal_416, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base");
						__LIB_16__::func_905(&uLocal_416, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a");
						iLocal_385 = 0;
						func_127(4);
					}
				}
			}
			break;
	}
	if (!iLocal_365)
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			iLocal_365 = 1;
		}
	}
}

void func_456()//Position - 0x3D59B
{
	struct<3> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Var0 = { -1057.9395f, -224.8114f, 37.1567f };
	if (!INTERIOR::IS_INTERIOR_SCENE())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_BUY_CLOTHES"))
		{
			AUDIO::STOP_AUDIO_SCENE("LESTER_1A_BUY_CLOTHES");
		}
	}
	switch (iLocal_2251)
	{
		case 0:
			__LIB_44__::func_106(2, "2. Goto Lifeinvader offices", 0, 0, 0, 1);
			func_320(0, 0);
			iLocal_399 = 0;
			iLocal_403 = 0;
			iLocal_404 = 0;
			iLocal_402 = 0;
			__LIB_11__::func_816(6, 1);
			iLocal_2251++;
			break;
		case 1:
			switch (iLocal_402)
			{
				case 0:
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
					{
						if (__LIB_16__::func_855())
						{
							if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, sLocal_405, 8, 0, 0, 0))
							{
								sLocal_405 = "";
								iLocal_402++;
							}
						}
					}
					else
					{
						iLocal_402++;
					}
					break;
				case 1:
					if (__LIB_0__::func_529(16))
					{
						if (__LIB_16__::func_855())
						{
							if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LES1A_LUCK", 8, 0, 0, 0))
							{
								iLocal_402++;
							}
						}
					}
					else
					{
						iLocal_402 = 3;
					}
					break;
				case 2:
					if (__LIB_0__::func_529(16))
					{
						if (__LIB_0__::func_529(16))
						{
							if (__LIB_16__::func_855() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
							{
								__LIB_0__::func_640(PLAYER::PLAYER_PED_ID(), "GENERIC_BYE", 3);
								iLocal_402++;
							}
						}
					}
					else
					{
						iLocal_402 = 3;
					}
					break;
				case 3:
					if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON() && __LIB_16__::func_854())
					{
						MISC::CLEAR_BIT(&(Local_174.f_13), 2);
						iLocal_402++;
					}
					break;
			}
			if (iLocal_402 > 2 || (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON()))
			{
				if (!bLocal_364)
				{
					StringCopy(&Var1, "LES1A_3", 16);
				}
				else
				{
					StringCopy(&Var1, "LES1A_4", 16);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_158, 1) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_1", 8);
					func_260(&uLocal_1426, PLAYER::PLAYER_PED_ID(), "Michael", 0);
					__LIB_17__::func_460(&uLocal_1426, "Michael", 9, 9, 0, 0);
					__LIB_16__::func_852(&uLocal_416, iLocal_124);
					__LIB_37__::func_184(&uLocal_416, iLocal_164);
					__LIB_16__::func_859(&uLocal_416, &cLocal_43);
				}
			}
			else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_158, 1) > 120f)
			{
				CUTSCENE::REMOVE_CUTSCENE();
				__LIB_16__::func_912(&uLocal_416, iLocal_124);
				__LIB_37__::func_347(&uLocal_416, iLocal_164);
				__LIB_31__::func_965(&uLocal_416, &cLocal_43);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !bLocal_364)
			{
				if (func_462(&Local_174, Var0, -1046.2869f, -219.51549f, 36.80881f, -1068.8085f, -231.2342f, 38.173355f, 5.3125f, 1, &Var1, "", 1, 0, 1, -1))
				{
					MISC::CLEAR_BIT(&(Local_174.f_13), 2);
					bLocal_364 = true;
					iLocal_399 = 1;
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_LIFEINVADER"))
				{
					AUDIO::START_AUDIO_SCENE("LESTER_1A_DRIVE_TO_LIFEINVADER");
				}
			}
			else if (func_276(&Local_174, Local_158, -1043.3318f, -231.80957f, 37.764164f, -1045.4519f, -224.95364f, 40.952034f, 4.625f, 0, &Var1, 1, 1, -1, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 3);
				iLocal_2251++;
			}
			else if (!bLocal_364 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_158) <= 900f)
			{
				MISC::CLEAR_BIT(&(Local_174.f_13), 2);
				bLocal_364 = true;
			}
			if (iLocal_399)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4f, 1, 0f, 0, 1, 0))
					{
						iLocal_399 = 0;
					}
				}
				else
				{
					iLocal_399 = 0;
				}
			}
			if (bLocal_364)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_LIFEINVADER"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_DRIVE_TO_LIFEINVADER");
				}
			}
			break;
		case 2:
			if (CUTSCENE::HAS_CUTSCENE_LOADED() && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_43))
			{
				func_267(0);
				__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Life_invader_Engineer", 2, iLocal_124, 0);
				CUTSCENE::START_CUTSCENE(0);
				__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_2251++;
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_458(iVar2, __LIB_13__::func_790()))
				{
					__LIB_42__::func_361(-1048.7177f, -212.83687f, 36.700832f, -1027.8401f, -233.548f, 39.98368f, 22.75f, -1053.5105f, -222.5092f, 37.0833f, 241.3186f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
				}
				else
				{
					__LIB_42__::func_371(-1043.1315f, -221.3606f, 36.801144f, -1034.7202f, -237.2896f, 42.920845f, 16.8125f, -1053.5105f, -222.5092f, 37.0833f, 241.3186f, 1, 1, 1, 0, 0);
				}
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_158, 20f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_158, 20f, 0);
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				iLocal_2251++;
			}
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413[3]))
			{
				iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Life_invader_Engineer", iLocal_124);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					iLocal_413[3] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
					iLocal_2251++;
				}
			}
			break;
		case 5:
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_FOLLOW_PROGRAMMER"))
				{
					AUDIO::START_AUDIO_SCENE("LESTER_1A_FOLLOW_PROGRAMMER");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_403 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Life_invader_Engineer", 0))
			{
				TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_43, 2, &Var4);
				ENTITY::SET_ENTITY_COORDS(iLocal_413[3], Var4, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_413[3], 113.2956f);
				__LIB_0__::func_222(&uLocal_186, 3, iLocal_413[3], "LIEngineer", 0, 1);
				func_320(3, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 4000, 115.2213f, false, false);
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED() && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1046.6028f, -232.4546f, 38.014f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 117.5673f);
				}
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-1047.5804f, -230.8085f, 39.8967f, 10f);
				iLocal_404 = 1;
				iLocal_367 = 1;
				__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
			}
			if (iLocal_404 && !iLocal_403)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((115.2213f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (iLocal_403 && iLocal_404)
			{
				iLocal_2251++;
			}
			break;
		case 6:
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
				func_127(3);
			}
			break;
	}
}

int func_458(int iParam0, struct<3> Param1)//Position - 0x3DC99
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (!__LIB_0__::func_86(Param1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &Var2);
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
			{
				Param1.f_0 = (Param1.f_0 + 3f);
				Param1.f_1 = (Param1.f_1 + 3f);
			}
			if ((Var2.f_0 - Var1.f_0) > Param1.f_0)
			{
				return 1;
			}
			else if ((Var2.f_1 - Var1.f_1) > Param1.f_1)
			{
				return 1;
			}
			else if ((Var2.f_2 - Var1.f_2) > Param1.f_2)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_462(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x3DEFF
{
	return __LIB_37__::func_355(iParam0, Param1, __LIB_15__::func_996(), Param2, Param3, bParam5, 5, 0, 0, 0, 0, sParam6, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), sParam7, 0, bParam8, __LIB_0__::func_591(), 1, iParam9, bParam10, iParam11, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 1, fParam4);
}

void func_467()//Position - 0x3E18A
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	Var0 = { 126.87f, -218.96f, 53.56f };
	Var1 = { 130.71f, -217.81f, 53.56f };
	if (iLocal_2251 <= 7 && iLocal_2251 != -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413[1]))
		{
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_149, 1) < 100f)
			{
				if (PED::GET_CLOSEST_PED(127.11f, -224.48f, 53.56f, 2f, false, true, &(iLocal_413[1]), false, true, -1))
				{
					__LIB_0__::func_222(&uLocal_186, 8, iLocal_413[1], "SHOPASSISTANT", 0, 1);
				}
			}
		}
		else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_149, 1) > 120f)
		{
			iLocal_413[1] = 0;
		}
	}
	if (iLocal_2251 < 6 && iLocal_2251 != -1)
	{
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_149, 1) < 100f && ENTITY::DOES_ENTITY_EXIST(iLocal_413[1]))
			{
				CUTSCENE::REQUEST_CUTSCENE("LES_1A_MCS_0", 8);
				func_260(&uLocal_1426, PLAYER::PLAYER_PED_ID(), "Michael", 0);
				__LIB_17__::func_460(&uLocal_1426, "Michael", 9, 9, 0, 0);
				__LIB_17__::func_459(&uLocal_1426, "Michael", 0, -1, 0, 0);
				func_260(&uLocal_1426, iLocal_413[1], "Shop_Assistant", 0);
				__LIB_14__::func_403(16, 0);
			}
		}
		else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Local_149, 1) > 120f || __LIB_6__::func_181())
		{
			__LIB_16__::func_864(&uLocal_1426);
			CUTSCENE::REMOVE_CUTSCENE();
			__LIB_14__::func_423(16, 0);
		}
	}
	if (((iLocal_2251 > 3 || __LIB_0__::func_529(16)) && iLocal_2251 < 6) && iLocal_2251 != -1)
	{
		if (!bLocal_407)
		{
			__LIB_17__::func_468(1);
			bLocal_407 = true;
		}
		__LIB_16__::func_309(1, 0);
	}
	else if (bLocal_407)
	{
		__LIB_13__::func_789();
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		bLocal_407 = false;
	}
	switch (iLocal_2251)
	{
		case 0:
			iLocal_395 = 0;
			if (__LIB_0__::func_545(16))
			{
				func_320(9, 0);
				bLocal_364 = false;
				iLocal_376 = 0;
				__LIB_41__::func_48(130, 1);
				__LIB_41__::func_48(131, 1);
				MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 120f);
				__LIB_44__::func_106(1, "1. Get clothes", 0, 0, 0, 1);
				__LIB_37__::func_356(16, 1);
				__LIB_37__::func_354(16, 1, 0);
				func_320(2, 0);
				bLocal_407 = false;
				iLocal_2251++;
			}
			__LIB_11__::func_816(6, 0);
			break;
		case 1:
			if (func_524(&Local_174, Local_149, 128.48456f, -207.42804f, 53.576126f, 127.08639f, -211.5256f, 56.73823f, 4.9375f, 1, "LES1A_1", 1, 1, -1) || (__LIB_0__::func_529(16) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)))
			{
				__LIB_13__::func_815(&Local_174, 1, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_STORE"))
				{
					AUDIO::STOP_AUDIO_SCENE("LESTER_1A_DRIVE_TO_STORE");
				}
				AUDIO::START_AUDIO_SCENE("LESTER_1A_BUY_CLOTHES");
				if (__LIB_12__::func_295(__LIB_33__::func_611()) < iLocal_396)
				{
					iVar2 = __LIB_0__::func_340((200 - __LIB_12__::func_295(__LIB_33__::func_611())), 100, 200);
					func_510(12, "LES1A_TXT1" /* GXT: Seein as you're having some liquidity problems, I wired some money into your account. Should b enough 4 the getup. */, 1, 1, 0, 0, 0, 1, 0, 1);
					__LIB_14__::func_593(__LIB_33__::func_611(), 32, iVar2, 0, 0);
				}
				iLocal_2251++;
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LESTER_1A_DRIVE_TO_STORE"))
				{
					AUDIO::START_AUDIO_SCENE("LESTER_1A_DRIVE_TO_STORE");
				}
			}
			break;
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 2f, 1, 1056964608, 0, 1, 0))
				{
					iLocal_2251++;
				}
			}
			else
			{
				iLocal_2251++;
			}
			break;
		case 3:
			if (__LIB_42__::func_373(&Local_174, 126.0279f, -222.9916f, 53.5578f, 8f, 9f, 2f, 0, "", 1, 1, -1, 1))
			{
				__LIB_13__::func_815(&Local_174, 1, 0);
				HUD::CLEAR_PRINTS();
				if ((!CAM::IS_GAMEPLAY_HINT_ACTIVE() && ENTITY::DOES_ENTITY_EXIST(iLocal_413[1])) && !PED::IS_PED_INJURED(iLocal_413[1]))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_413[1], 0f, 0f, 0f, true, -1, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.02f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 125.9931f, -221.0858f, 53.5578f, 1f, -1, 0.25f, 0, 193.8799f);
				iLocal_2251++;
			}
			break;
		case 4:
			if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LES1A_MCS0LI", 8, 0, 0, 0))
			{
				iLocal_2251++;
			}
			break;
		case 5:
			if (((CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::HAS_CUTSCENE_LOADED()) && !PED::IS_PED_INJURED(iLocal_413[1])) && !__LIB_0__::func_75())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7f, 0f, 3);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_413[1], "Shop_Assistant", 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				__LIB_37__::func_354(16, 1, 0);
				__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				sLocal_405 = "";
				iLocal_2251++;
			}
			break;
		case 6:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(true);
				}
				if (bLocal_407)
				{
					__LIB_13__::func_789();
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				}
				if (CUTSCENE::HAS_CUTSCENE_CUT_THIS_FRAME())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 4000 && CUTSCENE::GET_CUTSCENE_TIME() < 5000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						sLocal_405 = "LS1_SHOPHLP_1";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 7500 && CUTSCENE::GET_CUTSCENE_TIME() < 13000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						sLocal_405 = "";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 13000 && CUTSCENE::GET_CUTSCENE_TIME() < 15000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						sLocal_405 = "LS1_SHOPHLP_2";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 18000 && CUTSCENE::GET_CUTSCENE_TIME() < 20000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						sLocal_405 = "LS1_SHOPHLP_3";
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 22000)
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						sLocal_405 = "";
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
				{
					__LIB_14__::func_409(16, sLocal_405, 0);
				}
				else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				__LIB_0__::func_229("LES1A_2", 7500, 1);
				func_473(&(iLocal_409[0]), Var0, 0);
				func_473(&(iLocal_409[1]), Var1, 0);
				__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
				__LIB_14__::func_423(16, 0);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
				}
				iLocal_395 = 1;
				iLocal_401 = MISC::GET_GAME_TIMER() + 3000;
				sLocal_405 = "";
				iLocal_2251++;
			}
			break;
		case 7:
			if (__LIB_0__::func_529(16))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_401)
				{
					__LIB_37__::func_354(16, 0, 0);
				}
				if (iLocal_380)
				{
					iVar7 = func_422(PLAYER::PLAYER_PED_ID(), 3, -1);
					iVar8 = func_422(PLAYER::PLAYER_PED_ID(), 4, -1);
					func_472(0, &iVar9, &uVar10);
					if (iLocal_410 != iVar7)
					{
						iVar5 = 1;
					}
					if (iLocal_411 != iVar8)
					{
						iVar6 = 1;
					}
					if (((((iVar7 == 70 || iVar7 == 71) || iVar7 == 72) || iVar7 == 73) || iVar7 == 74) || iVar7 == 75)
					{
						__LIB_0__::func_714(&(iLocal_409[0]));
						iVar3 = 1;
					}
					else if (!HUD::DOES_BLIP_EXIST(iLocal_409[0]))
					{
						func_473(&(iLocal_409[0]), Var0, 0);
					}
					if ((((((((((((((((((((((((((((((((((((iVar8 == 41 || iVar8 == 42) || iVar8 == 43) || iVar8 == 44) || iVar8 == 45) || iVar8 == 96) || iVar8 == 97) || iVar8 == 98) || iVar8 == 99) || iVar8 == 100) || iVar8 == 101) || iVar8 == 102) || iVar8 == 103) || iVar8 == 104) || iVar8 == 105) || iVar8 == 106) || iVar8 == 107) || iVar8 == 108) || iVar8 == 109) || iVar8 == 110) || iVar8 == 111) || iVar8 == 55) || iVar8 == 56) || iVar8 == 57) || iVar8 == 58) || iVar8 == 59) || iVar8 == 60) || iVar8 == 61) || iVar8 == 62) || iVar8 == 63) || iVar8 == 64) || iVar8 == 65) || iVar8 == 66) || iVar8 == 67) || iVar8 == 68) || iVar8 == 69) || iVar8 == 70)
					{
						__LIB_0__::func_714(&(iLocal_409[1]));
						iVar4 = 1;
					}
					else if (!HUD::DOES_BLIP_EXIST(iLocal_409[1]))
					{
						func_473(&(iLocal_409[1]), Var1, 0);
					}
					if ((!HUD::DOES_BLIP_EXIST(iLocal_409[0]) && !HUD::DOES_BLIP_EXIST(iLocal_409[1])) && ((iVar5 && iVar9 == 3) || (iVar6 && iVar9 == 4)))
					{
						if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
						{
							sLocal_405 = "LES1A_FULL";
						}
					}
					else if (iVar5 && iVar9 == 3)
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_409[0]))
						{
							if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
							{
								sLocal_405 = "LES1A_UP_N";
							}
						}
						else if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
						{
							sLocal_405 = "LES1A_UP_Y";
						}
					}
					else if (iVar6 && iVar9 == 4)
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_409[1]))
						{
							if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
							{
								sLocal_405 = "LES1A_LOW_N";
							}
						}
						else if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
						{
							sLocal_405 = "LES1A_LOW_Y";
						}
					}
					if (((iVar5 && HUD::DOES_BLIP_EXIST(iLocal_409[0])) && iVar9 == 3) || ((iVar6 && HUD::DOES_BLIP_EXIST(iLocal_409[1])) && iVar9 == 4))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__::func_151("LES1A_H2", 3000);
						}
					}
				}
				else if (!__LIB_0__::func_921(16))
				{
					iLocal_410 = func_422(PLAYER::PLAYER_PED_ID(), 3, -1);
					iLocal_411 = func_422(PLAYER::PLAYER_PED_ID(), 4, -1);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_405))
					{
						if (__LIB_16__::func_855())
						{
							if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, sLocal_405, 8, 0, 0, 0))
							{
								sLocal_405 = "";
							}
						}
					}
				}
				if (!__LIB_0__::func_921(16))
				{
					iLocal_380 = 0;
				}
				else
				{
					iLocal_380 = 1;
				}
				if ((!__LIB_0__::func_921(16) && iVar3) && iVar4)
				{
					__LIB_0__::func_552(0);
					__LIB_37__::func_354(16, 1, 0);
					iLocal_363 = 1;
					__LIB_16__::func_21(&Local_174, 0);
					Global_100441.f_12[0] = iVar7;
					Global_100441.f_12[1] = iVar8;
					HUD::CLEAR_HELP(true);
					func_127(2);
				}
			}
			break;
		case -1:
			break;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_165))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_165)
		{
			if (!iLocal_376)
			{
				if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-565026078) == 1)
				{
					if (MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-565026078)) < 0.1f)
					{
						Global_8141 = 0;
						iLocal_376 = 1;
					}
				}
				else
				{
					__LIB_41__::func_48(75, 1);
				}
			}
		}
		else
		{
			func_469();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			if (!PED::IS_PED_INJURED(iLocal_413[2]))
			{
				if (iLocal_383 < 2 && MISC::GET_GAME_TIMER() > iLocal_384)
				{
					__LIB_0__::func_222(&uLocal_186, 8, iLocal_413[2], "Lester", 0, 1);
					AUDIO::PLAY_PAIN(iLocal_413[2], 19, 0, 0);
					iLocal_384 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000));
					iLocal_383++;
				}
				else if (__LIB_16__::func_855() && MISC::GET_GAME_TIMER() > iLocal_384)
				{
					if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LES1A_LEAVE", 8, 0, 0, 0))
					{
						iLocal_384 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(12000, 15000));
					}
				}
			}
			__LIB_41__::func_48(75, 0);
			iLocal_376 = 0;
			Global_8141 = 1;
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_413[2]) && !PED::IS_PED_INJURED(iLocal_413[2])) && (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_413[2], true)) > 900f || iLocal_376))
	{
		__LIB_16__::func_905(&uLocal_416, "MissLester1ALeadInOut");
		if (ENTITY::IS_ENTITY_ATTACHED(Local_414[0 /*10*/]))
		{
			ENTITY::DETACH_ENTITY(Local_414[0 /*10*/], true, true);
		}
		OBJECT::DELETE_OBJECT(&(Local_414[0 /*10*/]));
		PED::DELETE_PED(&(iLocal_413[2]));
		__LIB_0__::func_468(44);
	}
}

void func_469()//Position - 0x3EEE7
{
	int iVar0;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
	{
		if (!(iVar0 == joaat("WEAPON_UNARMED") || iVar0 == joaat("OBJECT")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		}
	}
}

bool func_472(bool bParam0, var uParam1, var uParam2)//Position - 0x3EF96
{
	*uParam1 = 12;
	*uParam2 = -99;
	if (__LIB_0__::func_374(bParam0))
	{
		*uParam1 = Global_100493.f_477[bParam0];
		*uParam2 = Global_100493.f_473[bParam0];
	}
	return *uParam2 != -99;
}

void func_473(int* iParam0, struct<3> Param1, bool bParam2)//Position - 0x3EFD5
{
	__LIB_0__::func_714(iParam0);
	*iParam0 = __LIB_0__::func_488(Param1, bParam2);
}

int func_510(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x40C58
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_511(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { __LIB_0__::func_167(iParam0) };
			Global_8823 = iParam0;
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

int func_511(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x40CE7
{
	int iVar0;
	bool bVar1;
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	__LIB_37__::func_220();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (__LIB_3__::func_17() == 0)
	{
		__LIB_3__::func_58();
		return 0;
	}
	__LIB_2__::func_833(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		__LIB_2__::func_830(0);
		__LIB_2__::func_830(2);
		__LIB_2__::func_830(1);
	}
	else
	{
		__LIB_37__::func_220();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					__LIB_2__::func_830(0);
					Global_8842 = 0;
					break;
				case 1:
					__LIB_2__::func_830(1);
					Global_8842 = 1;
					break;
				case 2:
					__LIB_2__::func_830(2);
					Global_8842 = 2;
					break;
				case 3:
					__LIB_2__::func_830(3);
					Global_8842 = 3;
					break;
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		__LIB_37__::func_220();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!__LIB_0__::func_629())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			__LIB_2__::func_829(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			__LIB_3__::func_68(1);
			__LIB_2__::func_829(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	__LIB_2__::func_846(iParam0, sParam1, bVar1, __LIB_1__::func_136(PLAYER::PLAYER_ID()));
	return 1;
}

int func_524(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, char* sParam6, bool bParam7, bool bParam8, int iParam9)//Position - 0x41CF5
{
	return __LIB_37__::func_355(iParam0, Param1, __LIB_15__::func_996(), Param2, Param3, bParam5, 1, 0, 0, 0, 0, sParam6, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 0, bParam7, __LIB_0__::func_591(), 1, 0, bParam8, iParam9, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 1, fParam4);
}

void func_539()//Position - 0x42297
{
	struct<3> Var0;
	Var0 = { 1273.7292f, -1712.0665f, 53.7715f };
	switch (iLocal_2251)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413[2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					iLocal_413[2] = Global_96938.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_413[2], true, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413[2], iLocal_361);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_414[0 /*10*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
				{
					Local_414[0 /*10*/] = Global_96938.f_28[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_414[0 /*10*/], true, true);
				}
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_413[2]) && ENTITY::DOES_ENTITY_EXIST(Local_414[0 /*10*/])) && !PED::IS_PED_INJURED(iLocal_413[2]))
			{
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(1368.1688f, -1686.1638f, 68.780426f, 1189.9807f, -1764.9642f, 31.711254f, 91.5f, false, false, true);
				iLocal_360 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(1279.4033f, -1730.4707f, 51.56739f, 20.3125f, 0f, false);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", false, true);
				__LIB_16__::func_857(&uLocal_416, "MissLester1ALeadInOut");
				__LIB_41__::func_48(75, 0);
				iLocal_2304 = -99;
				iLocal_2251++;
			}
			__LIB_11__::func_816(6, 0);
			break;
		case 1:
			if ((CUTSCENE::HAS_CUTSCENE_LOADED() && !PED::IS_PED_INJURED(iLocal_413[2])) && ENTITY::DOES_ENTITY_EXIST(Local_414[0 /*10*/]))
			{
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_413[2], "Lester", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_414[0 /*10*/], "Wheelchair_Lester", 0, 0, 0);
				__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
				__LIB_17__::func_622(PLAYER::PLAYER_PED_ID(), 9, 15);
				iLocal_2304 = __LIB_0__::func_349(PLAYER::PLAYER_PED_ID(), PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0), PED::GET_PED_PROP_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0), 0);
				if (iLocal_2304 != 0)
				{
					__LIB_17__::func_622(PLAYER::PLAYER_PED_ID(), 14, iLocal_2304);
				}
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_372 = 0;
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				iLocal_2251++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_42__::func_371(1275.839f, -1719.5605f, 53.539257f, 1270.7352f, -1708.3427f, 56.78841f, 9.6875f, Local_148, 115.1431f, 1, 1, 1, 0, 0);
				func_541(Local_148, 115.1431f, 0, 145);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
				PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				MISC::CLEAR_AREA_OF_PEDS(1272.1456f, -1716.1855f, 55.14111f, 23.75f, 0);
				MISC::CLEAR_AREA_OF_PEDS(1283.72f, -1751.16f, 51.03f, 12.688f, 0);
				CLOCK::SET_CLOCK_TIME(7, 0, 0);
				iLocal_2251++;
			}
			break;
		case 3:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_413(PLAYER::PLAYER_PED_ID(), 14, iLocal_2304, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 202.4595f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0f, true, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6f, 3);
				iLocal_372 = 1;
			}
			if ((iLocal_372 && STREAMING::HAS_ANIM_DICT_LOADED("MissLester1ALeadInOut")) && STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
			{
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1368.1688f, -1686.1638f, 68.780426f, 1189.9807f, -1764.9642f, 31.711254f, 91.5f, 1);
				if (iLocal_360 != -1)
				{
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_360);
					iLocal_360 = -1;
				}
				if (!PED::IS_PED_INJURED(iLocal_413[2]))
				{
					iLocal_412[0] = PED::CREATE_SYNCHRONIZED_SCENE(1277.661f, -1713.688f, 54.41f, 0f, 0f, -151.56f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[2], iLocal_412[0], "MissLester1ALeadInOut", "Lester_1_INT_LeadIn_loop_Lester", 1000f, -8f, 1, 144, 1000f, 0);
					func_540(&(Local_414[0 /*10*/]), iLocal_412[0], "Lester_1_INT_LeadIn_loop_wChair", "MissLester1ALeadInOut", 1000f, -8f, 1);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[0], true);
				}
				AUDIO::PLAY_PAIN(iLocal_413[2], 19, 0, 0);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
				iLocal_372 = 0;
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				iLocal_2251++;
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_127(1);
			break;
		case -1:
			__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
			break;
	}
}

void func_540(var uParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6)//Position - 0x427B9
{
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_2 = 1;
	uParam0->f_8 = sParam3;
	uParam0->f_9 = sParam2;
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(*uParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, 1000f);
}

void func_541(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x427F9
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_103950.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_103950.f_4, false))
		{
			if (__LIB_0__::func_343(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (__LIB_14__::func_665(ENTITY::GET_ENTITY_COORDS(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				__LIB_42__::func_374(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_574()//Position - 0x48360
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (Local_167[iVar0 /*7*/] != 0 && Local_167[iVar0 /*7*/].f_1)
		{
			bVar1 = false;
			fVar2 = 0f;
			func_576(iVar0, &bVar1, &fVar2);
			if (bVar1 != Local_167[iVar0 /*7*/].f_4 || fVar2 != Local_167[iVar0 /*7*/].f_2)
			{
				if (Local_167[iVar0 /*7*/].f_5 > 0 && Local_167[iVar0 /*7*/].f_6 > 0)
				{
					fVar3 = __LIB_0__::func_331((IntToFloat((MISC::GET_GAME_TIMER() - Local_167[iVar0 /*7*/].f_6)) / SYSTEM::TO_FLOAT(Local_167[iVar0 /*7*/].f_5)), 0f, 1f);
					if (fVar3 != 1f)
					{
						fVar2 = (Local_167[iVar0 /*7*/].f_3 + (fVar3 * (Local_167[iVar0 /*7*/].f_2 - Local_167[iVar0 /*7*/].f_3)));
						bVar1 = true;
					}
					else
					{
						bVar1 = Local_167[iVar0 /*7*/].f_4;
						fVar2 = Local_167[iVar0 /*7*/].f_2;
						Local_167[iVar0 /*7*/].f_1 = 0;
						Local_167[iVar0 /*7*/].f_5 = 0;
						Local_167[iVar0 /*7*/].f_6 = 0;
						Local_167[iVar0 /*7*/].f_1 = 0;
					}
				}
				else
				{
					if (Local_167[iVar0 /*7*/].f_4)
					{
						bVar1 = true;
					}
					else
					{
						bVar1 = false;
					}
					fVar2 = Local_167[iVar0 /*7*/].f_2;
					Local_167[iVar0 /*7*/].f_5 = 0;
					Local_167[iVar0 /*7*/].f_6 = 0;
					Local_167[iVar0 /*7*/].f_1 = 0;
				}
				if (fVar2 != 100f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_167[iVar0 /*7*/], fVar2, false, true);
				}
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iVar0 /*7*/], 1, false, true);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iVar0 /*7*/], 0, false, true);
				}
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_167[iVar0 /*7*/], fVar2, false, true);
				if (bVar1)
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iVar0 /*7*/], 1, false, true);
				}
				else
				{
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iVar0 /*7*/], 0, false, true);
				}
				Local_167[iVar0 /*7*/].f_5 = 0;
				Local_167[iVar0 /*7*/].f_6 = 0;
				Local_167[iVar0 /*7*/].f_1 = 0;
			}
		}
		iVar0++;
	}
}

void func_576(int iParam0, int iParam1, float fParam2)//Position - 0x48571
{
	int iVar0;
	if (Local_167[iParam0 /*7*/] != 0)
	{
		*fParam2 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_167[iParam0 /*7*/]);
		iVar0 = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Local_167[iParam0 /*7*/]);
		*iParam1 = __LIB_37__::func_350(iVar0);
	}
}

void func_578()//Position - 0x485D3
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	bool bVar3;
	int iVar4;
	char* sVar5;
	if (iLocal_2255 == 1)
	{
		if (iLocal_2249 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
			}
			else
			{
				func_127(iLocal_2256);
			}
		}
		else if (iLocal_2249 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_814();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			__LIB_0__::func_222(&uLocal_186, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			__LIB_16__::func_863(&uLocal_416);
			if (__LIB_13__::func_821())
			{
				__LIB_14__::func_532();
			}
			if (!__LIB_0__::func_324())
			{
				func_808(iLocal_2256, &Var1, &fVar2);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar2);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				__LIB_16__::func_910(&uLocal_416, Var1, 50f, 0);
			}
			switch (iLocal_2250)
			{
				case 0:
					CUTSCENE::REQUEST_CUTSCENE("lester_1_int", 8);
					__LIB_17__::func_459(&uLocal_1426, "Lester", 1, 0, 0, 0);
					__LIB_16__::func_852(&uLocal_416, joaat("IG_LesterCrest"));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_wheelchair_01_s"));
					break;
				case 1:
					__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				case 2:
					__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				case 3:
					__LIB_16__::func_852(&uLocal_416, iLocal_124);
					__LIB_16__::func_852(&uLocal_416, iLocal_125);
					__LIB_16__::func_852(&uLocal_416, iLocal_126);
					__LIB_16__::func_852(&uLocal_416, iLocal_127);
					__LIB_16__::func_859(&uLocal_416, &cLocal_43);
					__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				case 4:
					__LIB_16__::func_909(&uLocal_416, "COMPUTERS");
					__LIB_16__::func_909(&uLocal_416, "Lester1A_01");
					__LIB_16__::func_909(&uLocal_416, "Lester1A_Qub3d");
					__LIB_16__::func_852(&uLocal_416, iLocal_124);
					func_134(&uLocal_416, "desktop_pc", &iLocal_171, 0);
					__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
					break;
				case 5:
					__LIB_16__::func_852(&uLocal_416, joaat("ig_JAY_Norris"));
					__LIB_16__::func_852(&uLocal_416, iLocal_124);
					__LIB_16__::func_852(&uLocal_416, iLocal_125);
					__LIB_16__::func_852(&uLocal_416, iLocal_126);
					__LIB_16__::func_852(&uLocal_416, iLocal_127);
					__LIB_16__::func_852(&uLocal_416, joaat("prop_paper_ball"));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_monitor_01c"));
					__LIB_16__::func_857(&uLocal_416, "MOVE_P_M_ZERO_RUCKSACK");
					__LIB_16__::func_857(&uLocal_416, &cLocal_100);
					__LIB_16__::func_857(&uLocal_416, &cLocal_96);
					__LIB_16__::func_857(&uLocal_416, &cLocal_105);
					__LIB_16__::func_857(&uLocal_416, &cLocal_68);
					__LIB_16__::func_857(&uLocal_416, &cLocal_84);
					__LIB_16__::func_857(&uLocal_416, &cLocal_109);
					__LIB_16__::func_852(&uLocal_416, joaat("prop_off_chair_01"));
					__LIB_16__::func_909(&uLocal_416, "Lester1A_01");
					__LIB_16__::func_909(&uLocal_416, "Lester1A_Qub3d");
					break;
				case 6:
					__LIB_16__::func_852(&uLocal_416, joaat("ig_JAY_Norris"));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_off_chair_01"));
					__LIB_16__::func_852(&uLocal_416, iLocal_124);
					__LIB_16__::func_852(&uLocal_416, iLocal_125);
					__LIB_16__::func_852(&uLocal_416, iLocal_126);
					__LIB_16__::func_852(&uLocal_416, iLocal_127);
					__LIB_16__::func_852(&uLocal_416, joaat("prop_paper_ball"));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_hacky_sack_01"));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_monitor_01c"));
					__LIB_16__::func_852(&uLocal_416, joaat("p_michael_backpack_s"));
					__LIB_16__::func_857(&uLocal_416, &cLocal_105);
					__LIB_16__::func_857(&uLocal_416, &cLocal_72);
					__LIB_16__::func_857(&uLocal_416, &cLocal_100);
					__LIB_16__::func_857(&uLocal_416, &cLocal_96);
					__LIB_16__::func_857(&uLocal_416, &cLocal_88);
					__LIB_16__::func_909(&uLocal_416, "Lester1A_01");
					__LIB_16__::func_909(&uLocal_416, "Lester1A_Qub3d");
					__LIB_16__::func_857(&uLocal_416, "amb@prop_human_seat_computer@male@base");
					break;
				case 7:
					__LIB_16__::func_852(&uLocal_416, iLocal_126);
					break;
				case 8:
					__LIB_16__::func_852(&uLocal_416, __LIB_0__::func_493(15));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_cs_remote_01"));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_phone_ing"));
					__LIB_16__::func_857(&uLocal_416, &cLocal_134);
					__LIB_16__::func_909(&uLocal_416, "Lester1B");
					__LIB_16__::func_909(&uLocal_416, "SAFEHOUSE_MICHAEL_SIT_SOFA");
					break;
				case 9:
					__LIB_16__::func_852(&uLocal_416, __LIB_0__::func_493(15));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_cs_remote_01"));
					__LIB_16__::func_852(&uLocal_416, joaat("prop_phone_ing"));
					__LIB_16__::func_857(&uLocal_416, &cLocal_134);
					__LIB_16__::func_909(&uLocal_416, "Lester1B");
					__LIB_16__::func_909(&uLocal_416, "SAFEHOUSE_MICHAEL_SIT_SOFA");
					break;
				case 10:
					__LIB_16__::func_910(&uLocal_416, -803.3376f, 172.338f, 71.8447f, 10f, 0);
					break;
			}
			while (!__LIB_17__::func_632(&uLocal_416))
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_13__::func_821())
			{
				__LIB_14__::func_532();
				while (!__LIB_14__::func_531())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (iLocal_366)
			{
				while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_366 = 1;
			}
			switch (iLocal_2250)
			{
				case 0:
					Global_8141 = 1;
					Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("IG_LesterCrest"), 1275.3646f, -1710.7744f, 53.7715f, 333.7887f, true, true);
					Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), 1275.3646f, -1710.7744f, 53.7715f, true, true, false);
					__LIB_0__::func_552(1);
					__LIB_17__::func_233(16, 0);
					func_801();
					func_799(0, 1);
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					bVar3 = true;
					break;
				case 1:
					CLOCK::SET_CLOCK_TIME(7, 0, 0);
					Global_100441.f_12[0] = -1;
					Global_100441.f_12[1] = -1;
					Global_100441.f_12[2] = -1;
					func_622();
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(Local_148, 115.1431f);
					}
					func_320(2, 0);
					__LIB_0__::func_552(1);
					__LIB_37__::func_354(16, 0, 0);
					func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
					func_801();
					if (__LIB_0__::func_324())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2247))
						{
							__LIB_0__::func_433(iLocal_2247, -1, 1);
						}
						else
						{
							__LIB_0__::func_433(0, -1, 1);
						}
					}
					func_799(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 2:
					__LIB_17__::func_233(16, 1);
					MISC::CLEAR_AREA(Local_149, 25f, true, false, false, false);
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(127.5399f, -197.6886f, 53.4039f, 251.4021f);
					}
					__LIB_0__::func_552(0);
					__LIB_37__::func_354(16, 1, 0);
					func_580();
					func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
					func_320(9, 0);
					func_320(2, 0);
					func_801();
					iLocal_363 = 1;
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					func_799(0, 0);
					__LIB_41__::func_48(__LIB_13__::func_833(16, 0), 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 3:
					__LIB_17__::func_233(16, 1);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_43, 1, &Var0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 124.0412f);
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(Local_157, fLocal_159);
					}
					__LIB_0__::func_552(0);
					__LIB_37__::func_354(16, 1, 0);
					func_580();
					func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_43, 2, &Var0);
					iLocal_413[3] = PED::CREATE_PED(26, iLocal_124, Var0, 118.9741f, true, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_413[3], false);
					__LIB_0__::func_222(&uLocal_186, 3, iLocal_413[3], "LIEngineer", 0, 1);
					func_320(9, 0);
					Local_415[3 /*8*/].f_7 = 0;
					func_320(3, 0);
					func_801();
					iLocal_363 = 1;
					iLocal_367 = 1;
					__LIB_41__::func_48(128, 0);
					__LIB_41__::func_48(129, 0);
					AUDIO::START_AUDIO_SCENE("LESTER_1A_FOLLOW_PROGRAMMER");
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					func_799(1, 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 117.8704f, false, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 4:
					__LIB_17__::func_233(16, 1);
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(Local_157, fLocal_159);
					}
					__LIB_0__::func_552(0);
					__LIB_37__::func_354(16, 1, 0);
					func_580();
					func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
					iLocal_413[3] = PED::CREATE_PED(26, iLocal_124, -1063.4578f, -243.7453f, 43.0347f, 260.8757f, true, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_413[3], false);
					__LIB_0__::func_222(&uLocal_186, 3, iLocal_413[3], "LIEngineer", 0, 1);
					func_801();
					iLocal_363 = 1;
					iLocal_367 = 1;
					__LIB_41__::func_48(111, 0);
					__LIB_41__::func_48(128, 0);
					__LIB_41__::func_48(129, 0);
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					func_799(0, 0);
					iVar4 = 0;
					while (iVar4 <= (iLocal_2278 - 1))
					{
						if ((Local_2262[iVar4 /*6*/] != -1 && Local_2262[iVar4 /*6*/].f_5 != -1) && Local_2262[iVar4 /*6*/].f_4 == 0)
						{
							if (iLocal_2266 < 6)
							{
								switch (iLocal_2266)
								{
									case 0:
										sVar5 = "POPUP_MUSIC_01";
										break;
									case 1:
										sVar5 = "POPUP_MUSIC_02";
										break;
									case 2:
										sVar5 = "POPUP_MUSIC_03";
										break;
									case 3:
										sVar5 = "POPUP_MUSIC_04";
										break;
									case 4:
										sVar5 = "POPUP_MUSIC_05";
										break;
									case 5:
										sVar5 = "POPUP_MUSIC_06";
										break;
									default:
										sVar5 = "POPUP_MUSIC_RND";
										break;
								}
							}
							else
							{
								sVar5 = "POPUP_MUSIC_RND";
							}
							AUDIO::PLAY_SOUND_FROM_COORD(Local_2262[iVar4 /*6*/].f_5, sVar5, -1059.63f, -244.61f, 43.92f, "LESTER1A_SOUNDS", false, 0, false);
							AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar4 /*6*/].f_5, "State", 2f);
							Local_2262[iVar4 /*6*/].f_4 = 1;
							iLocal_2266++;
						}
						iVar4++;
					}
					iVar4 = 0;
					while (iVar4 < Local_2262.f_0)
					{
						if (Local_2262[iVar4 /*6*/].f_4 && Local_2262[iVar4 /*6*/].f_5 != -1)
						{
							AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar4 /*6*/].f_5, "TracksPlaying", SYSTEM::TO_FLOAT(__LIB_0__::func_340(iLocal_2266, 1, 12)));
						}
						iVar4++;
					}
					while (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), false))
					{
						SYSTEM::WAIT(0);
					}
					Local_414[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), true, false, true);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 5:
					__LIB_17__::func_233(16, 1);
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(Local_157, fLocal_159);
					}
					__LIB_0__::func_552(0);
					__LIB_37__::func_354(16, 1, 0);
					func_580();
					func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
					iLocal_413[3] = PED::CREATE_PED(26, iLocal_124, -1063.4578f, -243.7453f, 43.0347f, 260.8757f, true, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_413[3], false);
					__LIB_0__::func_222(&uLocal_186, 3, iLocal_413[3], "LIEngineer", 0, 1);
					func_320(9, 0);
					func_320(6, 0);
					func_320(5, 0);
					func_320(8, 0);
					func_320(7, 0);
					func_320(10, 0);
					func_320(11, 0);
					func_801();
					iLocal_363 = 1;
					iLocal_367 = 1;
					__LIB_41__::func_48(111, 0);
					__LIB_41__::func_48(128, 0);
					__LIB_41__::func_48(129, 0);
					AUDIO::START_AUDIO_SCENE("LESTER_1A_RIG_EXPLOSIVE");
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					func_799(1, 0);
					while (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), false))
					{
						SYSTEM::WAIT(0);
					}
					Local_414[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), true, false, true);
					if (!iLocal_375)
					{
						if (bLocal_374)
						{
							ENTITY::CREATE_MODEL_SWAP(Local_152, 1f, joaat("prop_monitor_01d"), joaat("prop_monitor_01c"), true);
						}
						else
						{
							ENTITY::CREATE_MODEL_SWAP(Local_152, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01c"), true);
						}
						__LIB_16__::func_912(&uLocal_416, joaat("prop_monitor_01c"));
						iLocal_375 = 1;
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 1, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 6:
					__LIB_17__::func_233(16, 1);
					__LIB_41__::func_48(111, 0);
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(Local_157, fLocal_159);
					}
					__LIB_0__::func_552(0);
					__LIB_37__::func_354(16, 1, 0);
					func_580();
					iLocal_413[3] = PED::CREATE_PED(26, iLocal_124, -1062.2268f, -243.147f, 43.0212f, 293.0184f, true, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_413[3], false);
					__LIB_0__::func_222(&uLocal_186, 3, iLocal_413[3], "LIEngineer", 0, 1);
					func_320(6, 0);
					func_320(5, 0);
					func_320(8, 0);
					func_320(7, 0);
					func_320(9, 0);
					func_320(11, 0);
					func_801();
					iLocal_363 = 1;
					iLocal_367 = 1;
					func_227(&(Local_414[29 /*10*/]), joaat("p_michael_backpack_s"), Local_160, 0);
					ENTITY::SET_ENTITY_COLLISION(Local_414[29 /*10*/], false, false);
					ENTITY::SET_ENTITY_COORDS(Local_414[29 /*10*/], Local_160, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_414[29 /*10*/], Local_161, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_414[29 /*10*/], true);
					__LIB_41__::func_48(128, 0);
					__LIB_41__::func_48(129, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1772472848, 0f, true, true);
					AUDIO::START_AUDIO_SCENE("LESTER_1A_LEAVE_OFFICE");
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					func_799(1, 0);
					while (!OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), false))
					{
						SYSTEM::WAIT(0);
					}
					Local_414[1 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1060.1737f, -245.2477f, 43.6942f, 1f, joaat("prop_off_chair_01"), true, false, true);
					if (!iLocal_375)
					{
						if (bLocal_374)
						{
							ENTITY::CREATE_MODEL_SWAP(Local_152, 1f, joaat("prop_monitor_01d"), joaat("prop_monitor_01c"), true);
						}
						else
						{
							ENTITY::CREATE_MODEL_SWAP(Local_152, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01c"), true);
						}
						__LIB_16__::func_912(&uLocal_416, joaat("prop_monitor_01c"));
						iLocal_375 = 1;
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 7:
					__LIB_17__::func_233(16, 1);
					__LIB_0__::func_552(1);
					__LIB_37__::func_354(16, 0, 0);
					func_580();
					iLocal_363 = 1;
					__LIB_41__::func_48(111, 1);
					__LIB_41__::func_48(128, 1);
					__LIB_41__::func_48(129, 1);
					__LIB_41__::func_48(130, 1);
					__LIB_41__::func_48(131, 1);
					func_320(9, 0);
					func_320(12, 0);
					iLocal_367 = 0;
					iLocal_368 = 1;
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(Local_157, fLocal_159);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					func_799(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 8:
					__LIB_17__::func_233(16, 1);
					__LIB_0__::func_552(1);
					__LIB_37__::func_354(16, 0, 0);
					func_580();
					iLocal_363 = 1;
					iLocal_367 = 0;
					iLocal_368 = 1;
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(-827.0287f, 175.9394f, 69.8927f, 331.2491f);
					}
					__LIB_41__::func_48(111, 1);
					__LIB_41__::func_48(128, 1);
					__LIB_41__::func_48(129, 1);
					__LIB_41__::func_48(130, 1);
					__LIB_41__::func_48(131, 1);
					func_227(&(Local_414[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 60309, 0f, 0f, 0f), 0);
					__LIB_16__::func_912(&uLocal_416, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[30 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					iLocal_2301 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_146[3 /*3*/], Local_147[3 /*3*/], 40f, true, 2);
					CAM::SHAKE_CAM(iLocal_2301, "HAND_SHAKE", 0.3f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					func_121(1, 1000f, -8f, 2563, 1);
					while (!__LIB_17__::func_253(4))
					{
						SYSTEM::WAIT(0);
					}
					__LIB_17__::func_218(4, 0, 1, 0, 0);
					func_145(4, 1, 11, 1);
					iLocal_2290 = 1;
					func_799(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 9:
					__LIB_17__::func_233(16, 1);
					__LIB_0__::func_552(1);
					__LIB_37__::func_354(16, 0, 0);
					func_580();
					iLocal_363 = 1;
					__LIB_41__::func_48(111, 1);
					__LIB_41__::func_48(128, 1);
					__LIB_41__::func_48(129, 1);
					__LIB_41__::func_48(130, 1);
					__LIB_41__::func_48(131, 1);
					func_227(&(Local_414[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 60309, 0f, 0f, 0f), 0);
					__LIB_16__::func_912(&uLocal_416, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[30 /*10*/], PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					iLocal_367 = 0;
					iLocal_368 = 1;
					bLocal_2288 = true;
					if (__LIB_13__::func_821())
					{
						iLocal_2247 = __LIB_37__::func_363(-827.0287f, 175.9394f, 69.8927f, 331.2491f);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					iLocal_2301 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_146[3 /*3*/], Local_147[3 /*3*/], 40f, true, 2);
					CAM::SHAKE_CAM(iLocal_2301, "HAND_SHAKE", 0.3f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					func_121(1, 1000f, -8f, 2563, 1);
					func_799(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
				case 10:
					__LIB_17__::func_233(16, 1);
					__LIB_0__::func_552(1);
					__LIB_37__::func_354(16, 0, 0);
					func_580();
					iLocal_363 = 1;
					__LIB_41__::func_48(111, 1);
					__LIB_41__::func_48(128, 1);
					__LIB_41__::func_48(129, 1);
					__LIB_41__::func_48(130, 1);
					__LIB_41__::func_48(131, 1);
					iLocal_367 = 0;
					iLocal_368 = 1;
					bLocal_2288 = true;
					if (__LIB_13__::func_821())
					{
						while (!__LIB_14__::func_531())
						{
							SYSTEM::WAIT(0);
						}
						iLocal_2247 = __LIB_37__::func_363(-827.0287f, 175.9394f, 69.8927f, 331.2491f);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					func_799(0, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					break;
			}
			if ((CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN()) && !bVar3)
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_2255 = 0;
		}
	}
}

void func_580()//Position - 0x49D73
{
	if (Global_100441.f_12[0] == -1)
	{
		func_582(__LIB_17__::func_706(0), 3, 70, 1, 1);
		func_413(PLAYER::PLAYER_PED_ID(), 3, 70, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	else
	{
		func_582(__LIB_17__::func_706(0), 3, Global_100441.f_12[0], 1, 1);
		func_413(PLAYER::PLAYER_PED_ID(), 3, Global_100441.f_12[0], 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (Global_100441.f_12[1] == -1)
	{
		func_582(__LIB_17__::func_706(0), 4, 41, 1, 1);
		func_413(PLAYER::PLAYER_PED_ID(), 4, 41, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	else
	{
		func_582(__LIB_17__::func_706(0), 4, Global_100441.f_12[1], 1, 1);
		func_413(PLAYER::PLAYER_PED_ID(), 4, Global_100441.f_12[1], 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	__LIB_16__::func_888(0);
}

int func_582(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x49E7B
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
								func_582(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_582(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_582(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_582(iParam0, 14, iVar5, 1, 0);
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
								func_582(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_582(iParam0, 14, 17, 1, 0);
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

void func_622()//Position - 0x4BF76
{
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 3, 70))
	{
		func_582(__LIB_17__::func_706(0), 3, 70, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 3, 71))
	{
		func_582(__LIB_17__::func_706(0), 3, 71, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 3, 72))
	{
		func_582(__LIB_17__::func_706(0), 3, 72, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 3, 73))
	{
		func_582(__LIB_17__::func_706(0), 3, 73, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 3, 74))
	{
		func_582(__LIB_17__::func_706(0), 3, 74, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 3, 75))
	{
		func_582(__LIB_17__::func_706(0), 3, 75, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 4, 41))
	{
		func_582(__LIB_17__::func_706(0), 4, 41, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 4, 42))
	{
		func_582(__LIB_17__::func_706(0), 4, 42, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 4, 43))
	{
		func_582(__LIB_17__::func_706(0), 4, 43, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 4, 44))
	{
		func_582(__LIB_17__::func_706(0), 4, 44, 0, 1);
	}
	if (!__LIB_13__::func_829(__LIB_17__::func_706(0), 4, 45))
	{
		func_582(__LIB_17__::func_706(0), 4, 45, 0, 1);
	}
	func_623(PLAYER::PLAYER_PED_ID());
}

void func_623(int iParam0)//Position - 0x4C0DC
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_25__::func_663(iParam0);
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
		func_628(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_422(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_624(__LIB_17__::func_706(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_422(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_422(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_624(__LIB_17__::func_706(0), 3, 70, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 3, 71, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 3, 72, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 3, 73, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 3, 74, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 3, 75, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 4, 41, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 4, 42, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 4, 43, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 4, 44, 1, 0, 0, 0);
					func_624(__LIB_17__::func_706(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_422(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_628(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_624(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x4C339
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_582(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

void func_628(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x4C50A
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
		bVar0 = __LIB_25__::func_663(iParam0);
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
			if (func_421(iParam0, iVar1, &iVar2, 0))
			{
				func_413(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_414(iParam0, iVar1, &iVar2))
			{
				func_413(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_792(iParam0);
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
			func_631(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_631(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_631(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_631(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x4C9E6
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
			func_753(iVar5, iParam1, iParam2, 1);
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
						func_753(iVar5, 10, 0, 1);
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
									func_753(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_631(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_753(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_752(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_631(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_746(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_753(iVar5, 14, uVar18[iVar1], 1);
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
							func_631(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_753(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_631(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_738(iParam0);
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
						func_631(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_631(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_737(iVar5, iVar24, iVar23, iVar25);
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
							func_631(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_631(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_631(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_631(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_631(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_631(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_631(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_746(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_737(iVar5, func_752(iParam0, 8, -1), iParam2, func_752(iParam0, 4, -1));
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
				func_677(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_737(iVar5, iParam2, iVar44, iVar45);
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
			func_746(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_737(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_631(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_631(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_737(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_737(iVar5, iVar58, iVar57, iParam2);
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
						func_631(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_737(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_631(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_654(iParam0, 9, iVar63))
						{
							func_631(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_631(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_631(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_631(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_752(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_752(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_631(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_631(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_631(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_631(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_631(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_631(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_631(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_631(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_631(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_631(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_738(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_631(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_631(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_632(iParam0, &uVar4))
		{
			func_631(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_631(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_631(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_631(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_752(iParam0, 3, -1), iVar10);
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
				func_631(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_632(int iParam0, var uParam1)//Position - 0x4E890
{
	int iVar0;
	int iVar1;
	*uParam1 = func_752(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_654(iParam0, iVar1, iVar0))
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

int func_654(int iParam0, int iParam1, int iParam2)//Position - 0x52B8D
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
				if (!func_654(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_654(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_654(iParam0, 14, iVar6))
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
			if (!func_654(iParam0, 14, uVar11[iVar10]))
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
						return func_654(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_654(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_677(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x598B8
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
	func_678(iParam0, bParam3, 0, -1);
}

void func_678(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x59906
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
		bVar3 = func_717(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_708(iParam0, iParam3);
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

int func_708(int iParam0, int iParam1)//Position - 0x68D8C
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
				iVar3 = func_752(iParam0, 11, -1);
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
				iVar5 = func_752(iParam0, 11, -1);
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

int func_717(int iParam0, bool bParam1)//Position - 0x691EA
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_752(iParam0, 11, -1), 0);
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
						iVar3 = func_752(iParam0, 11, -1);
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
						iVar5 = func_752(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_752(iParam0, 11, -1), 0);
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
						iVar8 = func_752(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_752(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_752(iParam0, 11, -1), 0);
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
						iVar12 = func_752(iParam0, 8, -1);
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

int func_737(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x72077
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
					iVar0 = func_737(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_737(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_738(int iParam0)//Position - 0x733B2
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
		if (!func_743(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_743(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_743(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x73D7C
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_752(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_746(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7676E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_792(iParam0))
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

int func_752(int iParam0, int iParam1, int iParam2)//Position - 0x76A1F
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
				if (func_654(iParam0, iParam1, iVar0))
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
				if (func_654(iParam0, iParam1, iVar1))
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

void func_753(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x76AC0
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
							func_753(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_753(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_753(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_753(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_753(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_753(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_753(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_753(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_753(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_753(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_792(int iParam0)//Position - 0x8F757
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
				iVar1 = func_752(iParam0, 11, -1);
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
				iVar3 = func_752(iParam0, 11, -1);
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

void func_799(bool bParam0, bool bParam1)//Position - 0x8FE7F
{
	bool bVar0;
	bool bVar1;
	bVar0 = true;
	while (bVar0)
	{
		bVar1 = true;
		if (bParam0)
		{
			func_822();
		}
		if (func_269(6))
		{
			if (!Local_415[6 /*8*/].f_7)
			{
				bVar1 = false;
			}
		}
		if (func_269(3))
		{
			if (!Local_415[3 /*8*/].f_7)
			{
				bVar1 = false;
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				bVar1 = false;
			}
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_545(16))
			{
				bVar1 = false;
			}
		}
		if (bVar1)
		{
			bVar0 = false;
		}
		else
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!__LIB_0__::func_324())
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		__LIB_16__::func_904(&uLocal_416);
	}
}

void func_801()//Position - 0x8FF3D
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(1368.1688f, -1686.1638f, 68.780426f, 1189.9807f, -1764.9642f, 31.711254f, 91.5f, false, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(55.317688f, -199.94856f, 130.63531f) - Vector(2.125f, 14.375f, 12.1875f), Vector(55.317688f, -199.94856f, 130.63531f) + Vector(2.125f, 14.375f, 12.1875f), false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Vector(55.317688f, -199.94856f, 130.63531f) - Vector(2.125f, 14.375f, 12.1875f), Vector(55.317688f, -199.94856f, 130.63531f) + Vector(2.125f, 14.375f, 12.1875f), 0);
	MISC::CLEAR_AREA_OF_VEHICLES(128.87f, -205.99f, 53.52f, 30f, false, false, false, false, false, false, 0);
	iLocal_359 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(48.29568f, -238.24207f, -1057.5178f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.24207f, -1057.5178f) + Vector(11.8125f, 29f, 43f), true, true, true, true);
	PATHFIND::SET_PED_PATHS_IN_AREA(Vector(48.29568f, -238.24207f, -1057.5178f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.24207f, -1057.5178f) + Vector(11.8125f, 29f, 43f), false, 0);
	PED::SET_PED_NON_CREATION_AREA(Vector(48.29568f, -238.24207f, -1057.5178f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.24207f, -1057.5178f) + Vector(11.8125f, 29f, 43f));
	MISC::CLEAR_AREA_OF_PEDS(-1057.5178f, -238.24207f, 48.29568f, 266.25f, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(48.29568f, -238.24207f, -1057.5178f) - Vector(11.8125f, 29f, 43f), Vector(48.29568f, -238.24207f, -1057.5178f) + Vector(11.8125f, 29f, 43f), false, true);
}

void func_808(int iParam0, var uParam1, var uParam2)//Position - 0x90C56
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1274.3231f, -1710.7501f, 53.7715f };
			*uParam2 = 0f;
			break;
		case 1:
			*uParam1 = { 1279.1504f, -1729.9221f, 51.5473f };
			*uParam2 = 202.8531f;
			break;
		case 2:
			*uParam1 = { 126.6064f, -212.3286f, 53.5578f };
			*uParam2 = 341.1025f;
			break;
		case 3:
			*uParam1 = { -1047.914f, -233.2071f, 38.0145f };
			*uParam2 = 124.0412f;
			break;
		case 4:
			*uParam1 = { -1060.9747f, -244.5783f, 43.0211f };
			*uParam2 = 21.504f;
			break;
		case 5:
			*uParam1 = { -1060.9747f, -244.5783f, 43.0211f };
			*uParam2 = 21.504f;
			break;
		case 6:
			*uParam1 = { -1055.0518f, -231.8623f, 43.0211f };
			*uParam2 = 203.6044f;
			break;
		case 7:
			*uParam1 = { -1080.3341f, -263.5708f, 36.7904f };
			*uParam2 = 286.3264f;
			break;
		case 8:
			*uParam1 = { -803.3376f, 172.338f, 71.8447f };
			*uParam2 = 284.537f;
			break;
		case 9:
			*uParam1 = { -803.3376f, 172.338f, 71.8447f };
			*uParam2 = 284.537f;
			break;
		case 10:
			*uParam1 = { -803.3376f, 172.338f, 71.8447f };
			*uParam2 = 284.537f;
			break;
	}
}

void func_814()//Position - 0x9109A
{
	int iVar0;
	struct<3> Var1;
	func_820(0, uLocal_369);
	func_623(PLAYER::PLAYER_PED_ID());
	func_622();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 242, false);
	}
	__LIB_0__::func_552(1);
	__LIB_37__::func_354(16, 0, 0);
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
		__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	}
	func_819();
	__LIB_13__::func_815(&Local_174, 1, 0);
	__LIB_0__::func_429();
	__LIB_0__::func_325();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::DESTROY_ALL_CAMS(false);
	__LIB_41__::func_48(75, 1);
	__LIB_0__::func_221(&uLocal_186, 0);
	__LIB_0__::func_221(&uLocal_186, 3);
	__LIB_0__::func_221(&uLocal_186, 4);
	__LIB_0__::func_221(&uLocal_186, 5);
	__LIB_0__::func_221(&uLocal_186, 6);
	__LIB_0__::func_221(&uLocal_186, 7);
	iVar0 = 0;
	while (iVar0 <= (32 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_414[iVar0 /*10*/]))
		{
			if (Local_414[iVar0 /*10*/].f_1)
			{
				OBJECT::DELETE_OBJECT(&(Local_414[iVar0 /*10*/]));
				Local_414[iVar0 /*10*/].f_1 = 0;
			}
			else
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_414[iVar0 /*10*/], true) };
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[iVar0 /*10*/]));
				MISC::CLEAR_AREA(Var1, 1f, true, true, false, false);
			}
		}
		Local_414[iVar0 /*10*/].f_2 = 0;
		Local_414[iVar0 /*10*/].f_4 = { 0f, 0f, 0f };
		Local_414[iVar0 /*10*/].f_1 = 0;
		Local_414[iVar0 /*10*/].f_8 = "";
		Local_414[iVar0 /*10*/].f_9 = "";
		Local_414[iVar0 /*10*/].f_3 = 0;
		Local_414[iVar0 /*10*/].f_7 = 0;
		iVar0++;
	}
	iVar0 = 1 + 1;
	while (iVar0 <= (28 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_413[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2248))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_2248);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2247))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2247, false))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_2247);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_170))
	{
		HUD::REMOVE_BLIP(&iLocal_170);
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (Local_2262[iVar0 /*6*/] != -1)
		{
			if (Local_2262[iVar0 /*6*/].f_5 != -1)
			{
				AUDIO::STOP_SOUND(Local_2262[iVar0 /*6*/].f_5);
			}
			Local_2262[iVar0 /*6*/].f_1 = 0;
			Local_2262[iVar0 /*6*/].f_4 = 0;
		}
		else
		{
			Local_2262[iVar0 /*6*/].f_1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_412)
	{
		iLocal_412[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_409)
	{
		__LIB_0__::func_714(&(iLocal_409[iVar0]));
		iVar0++;
	}
	if (iLocal_408)
	{
		RECORDING::REPLAY_CANCEL_EVENT();
	}
	iLocal_408 = 0;
	iLocal_2281 = 0;
	iLocal_2273 = 0;
	iLocal_2269 = 0;
	iLocal_2271 = 0;
	iLocal_363 = 0;
	iLocal_2264 = 0;
	bLocal_2268 = false;
	iLocal_2274 = 0;
	iLocal_2275 = 0;
	fLocal_2276 = 0f;
	bLocal_364 = false;
	iLocal_368 = 0;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_385 = 0;
	Global_8141 = 0;
	iLocal_2298 = 0;
	iLocal_2290 = 0;
	func_42();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	MISC::CLEAR_AREA_OF_PEDS(-1061.6774f, -242.1771f, 43.0213f, 50f, 0);
	__LIB_42__::func_375("LES1A_TXT1" /* GXT: Seein as you're having some liquidity problems, I wired some money into your account. Should b enough 4 the getup. */);
	__LIB_42__::func_375("LES1A_TXT2" /* GXT: Blend in with the hipster developer d bags, find the prototype, and fit it with the device in ur bag. */);
	__LIB_37__::func_351(0);
	__LIB_0__::func_506(129, 0);
	__LIB_0__::func_671(0);
	AUDIO::STOP_AUDIO_SCENES();
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", true, true);
	GRAPHICS::ENABLE_MOVIE_SUBTITLES(true);
	__LIB_0__::func_468(44);
}

void func_819()//Position - 0x91577
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		if (func_269(iVar0))
		{
			func_448(iVar0);
		}
		iVar0++;
	}
}

void func_820(bool bParam0, var uParam1)//Position - 0x915A3
{
	if (!__LIB_0__::func_374(bParam0))
	{
		return;
	}
	Global_113386.f_2363.f_539.f_2332[bParam0] = uParam1;
}

void func_821()//Position - 0x915CB
{
	switch (iLocal_2249)
	{
		case 1:
			iLocal_2249 = 2;
			iLocal_2251 = -1;
			break;
		case 2:
			iLocal_2249 = 3;
			iLocal_2251 = 0;
			iLocal_2250 = iLocal_2252;
			iLocal_2253 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			iLocal_2252 = -1;
			iLocal_2249 = 0;
			break;
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_2254) > 2500)
			{
				iLocal_2254 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

void func_822()//Position - 0x91639
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		if (Local_415[iVar0 /*8*/].f_3 == 1 && Local_415[iVar0 /*8*/].f_4 != 1)
		{
			iVar1 = (MISC::GET_GAME_TIMER() - Local_415[iVar0 /*8*/]);
			if (iVar1 > Local_415[iVar0 /*8*/].f_2)
			{
				switch (iVar0)
				{
					case 0:
						func_857();
						break;
					case 1:
						func_854();
						break;
					case 2:
						func_852();
						break;
					case 3:
						func_848();
						break;
					case 4:
						func_846();
						break;
					case 5:
						func_844();
						break;
					case 8:
						func_842();
						break;
					case 6:
						func_841();
						break;
					case 7:
						func_839();
						break;
					case 9:
						func_838();
						break;
					case 10:
						func_835();
						break;
					case 11:
						func_833();
						break;
					case 12:
						func_823();
						break;
					}
				}
		}
		iVar0++;
	}
}

void func_823()//Position - 0x91740
{
	if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_141, 200f, 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2248))
		{
			func_827(&iLocal_2248, 15, -813.3314f, 159.8796f, 70.328f, 112.3623f, 1, 0);
		}
	}
	else if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_141, 230f, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2248))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2248);
		}
	}
	if (__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_141, 100f, 1))
	{
		if (!bLocal_2296)
		{
			__LIB_37__::func_184(&uLocal_416, iLocal_166);
			__LIB_16__::func_852(&uLocal_416, __LIB_0__::func_493(15));
			__LIB_16__::func_852(&uLocal_416, joaat("prop_cs_remote_01"));
			__LIB_16__::func_852(&uLocal_416, joaat("prop_phone_ing"));
			__LIB_16__::func_857(&uLocal_416, "misslester1b");
			bLocal_2296 = true;
		}
	}
	else if (!__LIB_0__::func_725(PLAYER::PLAYER_PED_ID(), Local_141, 110f, 1))
	{
		if (bLocal_2296)
		{
			__LIB_37__::func_347(&uLocal_416, iLocal_166);
			__LIB_16__::func_912(&uLocal_416, __LIB_0__::func_493(15));
			__LIB_16__::func_912(&uLocal_416, joaat("prop_cs_remote_01"));
			__LIB_16__::func_912(&uLocal_416, joaat("prop_phone_ing"));
			__LIB_16__::func_905(&uLocal_416, "misslester1b");
			bLocal_2296 = false;
		}
	}
	if (bLocal_2296)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_413[27]) && STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(15))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_remote_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misslester1b"))
		{
			if (__LIB_0__::func_648(&(iLocal_413[27]), 15, -803.0255f, 172.6011f, 71.8348f, 129.7437f, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_413[27], false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413[27], iLocal_362);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[27], true);
				if (!ENTITY::DOES_ENTITY_EXIST(Local_414[30 /*10*/]))
				{
					func_227(&(Local_414[30 /*10*/]), joaat("prop_cs_remote_01"), PED::GET_PED_BONE_COORDS(iLocal_413[27], 60309, 0f, 0f, 0f), 0);
					__LIB_16__::func_912(&uLocal_416, joaat("prop_cs_remote_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[30 /*10*/], iLocal_413[27], PED::GET_PED_BONE_INDEX(iLocal_413[27], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
				}
				func_824();
				iLocal_412[8] = PED::CREATE_SYNCHRONIZED_SCENE(-803.51f, 171.95f, 71.84f, 0f, 0f, 120.32f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[27], iLocal_412[8], "misslester1b", "watchtv", 1000f, -1.5f, 0, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[8], true);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", false);
				ENTITY::CREATE_MODEL_HIDE(-804.4475f, 172.79373f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), false);
				__LIB_16__::func_912(&uLocal_416, __LIB_0__::func_493(15));
			}
		}
	}
	else
	{
		ENTITY::REMOVE_MODEL_HIDE(-804.4475f, 172.79373f, 72.34801f, 0.5f, joaat("prop_cs_remote_01"), false);
		if (ENTITY::DOES_ENTITY_EXIST(Local_414[30 /*10*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_414[30 /*10*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[27]))
		{
			PED::DELETE_PED(&(iLocal_413[27]));
		}
	}
}

void func_824()//Position - 0x91A4A
{
	PED::SET_PED_COMPONENT_VARIATION(iLocal_413[27], 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_413[27], 4, 5, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_413[27], 6, 2, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_413[27], 8, 1, 0, 0);
}

int func_827(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x91B63
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_374(bParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_17__::func_152(bParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (bParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (bParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (bParam1 == 15)
			{
				iVar1 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_372(iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_17__::func_153(*iParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				__LIB_37__::func_353(iParam0, Var0);
				if (bParam1 == 17 || bParam1 == 15)
				{
					__LIB_17__::func_153(*iParam0);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0.f_0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_833()//Position - 0x927BA
{
	switch (Local_415[11 /*8*/].f_1)
	{
		case 1:
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1067.3899f, -247.87686f, 43.02128f, -1051.0098f, -239.45573f, 46.95878f, 10f, false, true, 0) && (MISC::GET_GAME_TIMER() - iLocal_2258) >= iLocal_2259) && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if ((((iLocal_2250 != 5 && (!func_269(10) || func_268(10))) && !PED::IS_PED_INJURED(iLocal_413[19])) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1063.654f, -246.72934f, 43.02128f) < 10.5625f)
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							__LIB_0__::func_709(iLocal_413[19], "LES1A_AUAA", "LIFEINVADERM1", 3);
							break;
						case 1:
							__LIB_0__::func_709(iLocal_413[19], "LES1A_AVAA", "LIFEINVADERM1", 3);
							break;
					}
					Local_415[11 /*8*/].f_1++;
				}
				else if ((!PED::IS_PED_INJURED(iLocal_413[18]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[18])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1058.56f, -242.61f, 43.02f) < 10.5625f)
				{
					if (iLocal_2250 >= 5 && !iLocal_2261)
					{
						__LIB_0__::func_709(iLocal_413[18], "LES1A_AXAA", "LIFEINVADERM1", 3);
						iLocal_2261 = 1;
					}
					else
					{
						__LIB_0__::func_709(iLocal_413[18], "LES1A_AWAA", "LIFEINVADERM1", 3);
					}
					Local_415[11 /*8*/].f_1++;
				}
			}
			break;
		case 2:
			iLocal_2258 = MISC::GET_GAME_TIMER();
			iLocal_2259 = MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000);
			Local_415[11 /*8*/].f_1 = (Local_415[11 /*8*/].f_1 - 1);
			break;
	}
}

void func_835()//Position - 0x929D7
{
	switch (Local_415[10 /*8*/].f_1)
	{
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_413[3]) && !PED::IS_PED_INJURED(iLocal_413[19]))
			{
				switch (iLocal_2250)
				{
					case 5:
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_109) && ENTITY::DOES_ENTITY_EXIST(Local_414[9 /*10*/]))
						{
							func_83(&(Local_414[9 /*10*/]), -1000f);
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[9 /*10*/], false);
							ENTITY::SET_ENTITY_COORDS(Local_414[9 /*10*/], -1063.9155f, -246.8907f, 43.0306f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_414[9 /*10*/], 121.36f);
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[9 /*10*/], true);
							iLocal_2282 = 0;
							iLocal_377 = 0;
							Local_415[10 /*8*/].f_1 = 2;
						}
						break;
					}
			}
			break;
		case 2:
			if (func_837(iLocal_413[3]) && func_837(iLocal_413[19]))
			{
				if (!iLocal_377)
				{
					if (__LIB_16__::func_855() && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1065.3656f, -241.40758f, 43.02811f, -1063.1749f, -245.6033f, 45.29254f, 3.5f, false, true, 0))
					{
						if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_WTF", 8, 0, 0, 0))
						{
							iLocal_377 = 1;
						}
					}
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[7]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[7]) == 1f)
				{
					if (iLocal_377 || iLocal_2282 > 10)
					{
						iLocal_412[7] = PED::CREATE_SYNCHRONIZED_SCENE(-1063.542f, -245.794f, 43.032f, 0f, 0f, 27.8f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[3], iLocal_412[7], &cLocal_109, "idle_to_sit_pedb", 1000f, -8f, 5, 16, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[7], &cLocal_109, "idle_to_sit_peda", 1000f, -8f, 5, 16, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[3], false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[19]);
						}
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[3]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[3]);
						}
						Local_415[10 /*8*/].f_1++;
					}
					else
					{
						iLocal_412[7] = PED::CREATE_SYNCHRONIZED_SCENE(-1063.542f, -245.794f, 43.032f, 0f, 0f, 27.8f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[3], iLocal_412[7], &cLocal_109, "idle_standing_pedb", 1000f, -8f, 5, 16, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[7], &cLocal_109, "idle_standing_peda", 1000f, -8f, 5, 16, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[3], false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
						iLocal_2282++;
					}
				}
				else if (!iLocal_377)
				{
					if (!PED::IS_PED_INJURED(iLocal_413[3]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[3]))
						{
							__LIB_0__::func_709(iLocal_413[3], "GUITAR", "LIEngineer", 3);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_413[19]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
						{
							__LIB_0__::func_709(iLocal_413[19], "PIANO", "AIRPIANIST", 3);
						}
					}
				}
			}
			break;
		case 3:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[7]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[7]) == 1f)
			{
				if (func_837(iLocal_413[19]) && func_837(iLocal_413[3]))
				{
					iLocal_412[7] = PED::CREATE_SYNCHRONIZED_SCENE(-1063.542f, -245.794f, 43.032f, 0f, 0f, 27.8f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[3], iLocal_412[7], &cLocal_109, "idle_sitting_pedb", 1000f, -8f, 5, 16, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[7], &cLocal_109, "idle_sitting_peda", 1000f, -8f, 5, 16, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[7], true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[3], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
					Local_415[10 /*8*/].f_1++;
				}
			}
		case 4:
			if (iLocal_377)
			{
				if (__LIB_16__::func_855())
				{
					if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_EXPLAIN", 8, 0, 0, 0))
					{
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[19]);
						}
						if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[3]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[3]);
						}
						iLocal_377 = 0;
					}
				}
			}
			else if (Local_415[10 /*8*/].f_1 == 4)
			{
				Local_415[10 /*8*/].f_1++;
			}
			break;
		case 5:
			if (!__LIB_0__::func_75())
			{
				func_836(10, 5000);
				Local_415[10 /*8*/].f_1++;
			}
			break;
		case 6:
			if (__LIB_16__::func_855())
			{
				if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), -1063.45f, -245.74f, 43.14f, 1) <= 2.75f)
				{
					if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_RETURN", 8, 0, 0, 0))
					{
						Local_415[10 /*8*/].f_1 = (Local_415[10 /*8*/].f_1 - 1);
					}
				}
			}
			break;
	}
}

void func_836(int iParam0, int iParam1)//Position - 0x92F33
{
	Local_415[iParam0 /*8*/] = MISC::GET_GAME_TIMER();
	Local_415[iParam0 /*8*/].f_2 = iParam1;
}

int func_837(int iParam0)//Position - 0x92F51
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		switch (ENTITY::GET_ENTITY_TYPE(iParam0))
		{
			case 1:
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
				{
					return 1;
				}
				break;
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
				{
					return 1;
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_838()//Position - 0x92FD0
{
	if (iLocal_2250 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413[7]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1088.11f, -262.09f, 36.79f, true) < 30f)
			{
				__LIB_16__::func_852(&uLocal_416, iLocal_126);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_126))
				{
					MISC::CLEAR_AREA_OF_PEDS(-1084.3562f, -246.5053f, 36.7634f, 5f, 0);
					__LIB_41__::func_48(130, 1);
					__LIB_41__::func_48(131, 1);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1083.76f, -246.05f, 37.41f, 2f, false) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[23 /*10*/]))
						{
							Local_414[23 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
							Local_414[23 /*10*/].f_7 = 1;
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[23 /*10*/], true);
						}
						iLocal_413[7] = PED::CREATE_PED(26, iLocal_126, -1085.393f, -248.0326f, 36.7632f, 187.3241f, true, true);
						ENTITY::SET_ENTITY_COLLISION(iLocal_413[7], false, false);
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_413[7], -1083.76f, -246.05f, 37.41f, 2f, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_413[7], true);
						PED::SET_PED_KEEP_TASK(iLocal_413[7], true);
					}
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1083.87f, -246.33f, 36.76f, true) > 35f)
		{
			PED::DELETE_PED(&(iLocal_413[7]));
			__LIB_16__::func_912(&uLocal_416, iLocal_126);
		}
	}
	else
	{
		switch (Local_415[9 /*8*/].f_1)
		{
			case 1:
				iLocal_370 = 0;
				iLocal_381 = 0;
				Local_415[9 /*8*/].f_1++;
				break;
			case 2:
				if (STREAMING::HAS_MODEL_LOADED(iLocal_126))
				{
					MISC::CLEAR_AREA_OF_PEDS(-1084.3562f, -246.5053f, 36.7634f, 5f, 0);
					__LIB_41__::func_48(130, 1);
					__LIB_41__::func_48(131, 1);
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(-1083.76f, -246.05f, 37.41f, 2f, false) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[23 /*10*/]))
						{
							Local_414[23 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1083.87f, -246.33f, 36.76f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
							Local_414[23 /*10*/].f_7 = 1;
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[23 /*10*/], true);
						}
						iLocal_413[7] = PED::CREATE_PED(26, iLocal_126, -1085.393f, -248.0326f, 36.7632f, 187.3241f, true, true);
						ENTITY::SET_ENTITY_COLLISION(iLocal_413[7], false, false);
						TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_413[7], -1083.76f, -246.05f, 37.41f, 2f, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_413[7], true);
						PED::SET_PED_KEEP_TASK(iLocal_413[7], true);
						Local_415[9 /*8*/].f_1++;
					}
				}
				break;
			case 3:
				if (INTERIOR::IS_INTERIOR_SCENE())
				{
					switch (iLocal_2250)
					{
						case 3:
						case 4:
						case 5:
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1083.435f, -245.20396f, 36.763268f) < 34.4569f)
							{
								__LIB_0__::func_222(&uLocal_186, 4, iLocal_413[7], "LIReceptionist", 0, 1);
								if (!__LIB_16__::func_855())
								{
									__LIB_0__::func_638();
								}
								else if (iLocal_381 < 3)
								{
									if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_REC2", 8, 0, 0, 0))
									{
										Local_415[9 /*8*/].f_1 = -301;
										iLocal_381++;
									}
								}
								else if (iLocal_381 < 7)
								{
									if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LS1A_REC3", 8, 0, 0, 0))
									{
										Local_415[9 /*8*/].f_1 = -301;
										iLocal_381++;
									}
								}
							}
							break;
						case 6:
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1084.7039f, -253.40427f, 36.513294f, -1081.7261f, -259.22113f, 39.759724f, 10.75f, false, true, 0))
							{
								__LIB_0__::func_222(&uLocal_186, 4, iLocal_413[7], "LIReceptionist", 0, 1);
								if (__LIB_16__::func_855())
								{
									if (__LIB_38__::func_746(&uLocal_186, "LS1AAUD", "LS1A_REC", 9, 0, 0, 0))
									{
										func_836(9, 2000);
										Local_415[9 /*8*/].f_1++;
									}
								}
							}
							break;
						}
				}
				break;
			case -301:
				if (!__LIB_0__::func_75())
				{
					Local_415[9 /*8*/].f_1 = 3;
					func_836(9, MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
				}
				break;
			case 4:
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "UNLOCK_DOOR", -1080.4f, -257.84f, 37.92f, "LESTER1A_SOUNDS", false, 0, false);
				__LIB_41__::func_48(130, 0);
				__LIB_41__::func_48(131, 0);
				Local_415[9 /*8*/].f_1++;
				break;
			case 5:
				if (!INTERIOR::IS_INTERIOR_SCENE() && !__LIB_0__::func_75())
				{
					Local_415[9 /*8*/].f_4 = 1;
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_413[7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_2250)
			{
				case 3:
				case 4:
				case 5:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1083.435f, -245.20396f, 36.763268f) < 34.4569f)
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_413[7], -1, 0, 2);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_413[7], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						TASK::TASK_CLEAR_LOOK_AT(iLocal_413[7]);
					}
					break;
				case 6:
					if (Local_415[9 /*8*/].f_1 > 3)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1088.8507f, -254.18138f, 39.258392f, -1074.9954f, -246.90616f, 36.513264f, 11.625f, false, true, 0))
						{
							if (!iLocal_370)
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_413[7], -1, 0, 2);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_413[7], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								iLocal_370 = 1;
							}
						}
						else if (iLocal_370)
						{
							TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							TASK::TASK_CLEAR_LOOK_AT(iLocal_413[7]);
							iLocal_370 = 0;
						}
					}
					break;
				}
			}
	}
}

void func_839()//Position - 0x935FA
{
	float fVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	if (Local_415[7 /*8*/].f_1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_414[11 /*10*/]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1054.1595f, -241.7358f, 43.6537f, 1f, joaat("prop_off_chair_01"), false))
		{
			Local_414[11 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1054.1595f, -241.7358f, 43.6537f, 1f, joaat("prop_off_chair_01"), true, false, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_414[10 /*10*/]) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1053.2346f, -245.2269f, 43.6272f, 1f, joaat("prop_off_chair_01"), false))
		{
			Local_414[10 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1053.2346f, -245.2269f, 43.6272f, 1f, joaat("prop_off_chair_01"), true, false, true);
		}
		if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_125) && STREAMING::HAS_MODEL_LOADED(iLocal_126)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_paper_ball"))) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_105)) && ENTITY::DOES_ENTITY_EXIST(Local_414[11 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_414[10 /*10*/])) && (!CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::GET_CUTSCENE_TIME() > 3700))
		{
			iLocal_413[14] = PED::CREATE_PED(26, iLocal_126, -1054.9045f, -241.1034f, 43.0211f, 297.0785f, true, true);
			iLocal_413[13] = PED::CREATE_PED(26, iLocal_125, -1053.4689f, -243.68f, 43.0211f, 118.6611f, true, true);
			func_840(14);
			func_840(13);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[11 /*10*/], iLocal_413[14], false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[10 /*10*/], iLocal_413[13], false);
			iLocal_2281 = 1;
			iLocal_379 = 1;
			iLocal_394 = 0;
			Local_415[7 /*8*/].f_1++;
		}
	}
	if (Local_415[7 /*8*/].f_1 > 1)
	{
		switch (Local_415[7 /*8*/].f_1)
		{
			case 2:
				if (((func_837(iLocal_413[14]) && func_837(iLocal_413[13])) && func_837(Local_414[11 /*10*/])) && func_837(Local_414[10 /*10*/]))
				{
					fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
					if ((((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[4]) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[4]) == 1f) && (fVar0 <= 0.6f || iLocal_379)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[14])) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[13])) && !iLocal_394) && ((iLocal_379 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1060.4808f, -240.9797f, 43.02112f, -1053.2329f, -237.16844f, 45.77112f, 3.75f, false, true, 0)) || !iLocal_379))
					{
						switch (iLocal_2281)
						{
							case 0:
								sVar1 = "paper_throw_01_f";
								sVar2 = "paper_throw_01_m";
								sVar3 = "paper_throw_01_f_chair";
								sVar4 = "paper_throw_01_m_chair";
								sVar5 = "paper_throw_01_paper_ball";
								break;
							case 1:
								sVar1 = "paper_throw_03_f";
								sVar2 = "paper_throw_03_m";
								sVar3 = "paper_throw_03_f_chair";
								sVar4 = "paper_throw_03_m_chair";
								sVar5 = "paper_throw_03_paper_ball";
								break;
							case 2:
								sVar1 = "paper_throw_06_f";
								sVar2 = "paper_throw_06_m";
								sVar3 = "paper_throw_06_f_chair";
								sVar4 = "paper_throw_06_m_chair";
								sVar5 = "paper_throw_06_paper_ball";
								break;
						}
						func_227(&(Local_414[2 /*10*/]), joaat("prop_paper_ball"), -1052.7799f, -245.6611f, 43.0211f, 0);
						ENTITY::SET_ENTITY_COLLISION(Local_414[2 /*10*/], false, false);
						iLocal_412[4] = PED::CREATE_SYNCHRONIZED_SCENE(Local_150, Local_151, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[14], iLocal_412[4], &cLocal_105, sVar1, 4f, -8f, 4, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[13], iLocal_412[4], &cLocal_105, sVar2, 4f, -8f, 4, 0, 1000f, 0);
						func_540(&(Local_414[11 /*10*/]), iLocal_412[4], sVar3, &cLocal_105, 8f, -8f, 4);
						func_540(&(Local_414[10 /*10*/]), iLocal_412[4], sVar4, &cLocal_105, 8f, -8f, 4);
						func_540(&(Local_414[2 /*10*/]), iLocal_412[4], sVar5, &cLocal_105, 8f, -8f, 4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[13], false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[14], false, false);
						iLocal_379 = 0;
						iLocal_394 = 1;
						iLocal_2281++;
						if (iLocal_2281 > 2)
						{
							iLocal_2281 = 0;
						}
						Local_415[7 /*8*/].f_1++;
					}
					else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[4]) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[4]) == 1f)
					{
						iLocal_412[4] = PED::CREATE_SYNCHRONIZED_SCENE(Local_150, Local_151, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[14], iLocal_412[4], &cLocal_105, "paper_throw_base_f", 8f, -4f, 4, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[13], iLocal_412[4], &cLocal_105, "paper_throw_base_m", 8f, -4f, 4, 0, 1000f, 0);
						func_540(&(Local_414[11 /*10*/]), iLocal_412[4], "paper_throw_base_f_chair", &cLocal_105, 8f, -8f, 4);
						func_540(&(Local_414[10 /*10*/]), iLocal_412[4], "paper_throw_base_m_chair", &cLocal_105, 8f, -8f, 4);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[13], false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[14], false, false);
						iLocal_394 = 0;
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1053.1111f, -242.02936f, 43.02128f) < 24.3838f)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0 && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[14]))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										__LIB_0__::func_709(iLocal_413[14], "LES1A_BEAA", "LIFEINVADERF3", 3);
										break;
									case 1:
										__LIB_0__::func_709(iLocal_413[14], "LES1A_BFAA", "LIFEINVADERF3", 3);
										break;
								}
							}
							else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[13]))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										__LIB_0__::func_709(iLocal_413[13], "LES1A_AYAA", "LIFEINVADERM3", 3);
										break;
									case 1:
										__LIB_0__::func_709(iLocal_413[13], "LES1A_AZAA", "LIFEINVADERM3", 3);
										break;
									}
								}
							}
						}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_414[2 /*10*/], -1054.5258f, -240.29875f, 43.02112f, -1054.1686f, -240.19713f, 43.121117f, 0.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_414[2 /*10*/], -1053.178f, -241.09819f, 43.02112f, -1053.0632f, -241.39322f, 43.121117f, 0.5f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_414[2 /*10*/]))
					{
						ENTITY::DETACH_ENTITY(Local_414[2 /*10*/], true, true);
					}
					else
					{
						func_83(&(Local_414[2 /*10*/]), -8f);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Local_414[2 /*10*/], true);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[2 /*10*/]));
					Local_415[7 /*8*/].f_1 = 2;
				}
				break;
			}
	}
}

void func_840(int iParam0)//Position - 0x93D03
{
	var uVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[iParam0]) && !PED::IS_PED_INJURED(iLocal_413[iParam0]))
	{
		uVar0 = 12;
		uVar0.f_13 = 12;
		uVar0.f_26 = 12;
		uVar0.f_39 = 9;
		uVar0.f_49 = 9;
		iVar1 = 0;
		while (iVar1 < 12)
		{
			uVar0.f_13[iVar1] = -1;
			uVar0[iVar1] = -1;
			iVar1++;
		}
		switch (iParam0)
		{
			case 20:
				uVar0.f_13[0] = 0;
				uVar0[0] = 0;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				break;
			case 12:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 3;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[8] = 0;
				uVar0[8] = 0;
				break;
			case 10:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 1;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 11:
				uVar0.f_13[0] = 1;
				uVar0[0] = 1;
				uVar0.f_13[2] = 1;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			case 9:
			case 5:
				uVar0.f_13[0] = 1;
				uVar0[0] = 2;
				uVar0.f_13[2] = 2;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 4;
				uVar0.f_13[4] = 1;
				uVar0[4] = 2;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 4:
			case 8:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 2;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			case 6:
				uVar0.f_13[0] = 0;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 16:
				uVar0.f_13[0] = 0;
				uVar0[0] = 2;
				uVar0.f_13[2] = 2;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 2;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[8] = 0;
				uVar0[8] = 0;
				break;
			case 17:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 2;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 18:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 1;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 19:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 15:
				uVar0.f_13[0] = 0;
				uVar0[0] = 2;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 0;
				uVar0[3] = 0;
				uVar0.f_13[4] = 0;
				uVar0[4] = 0;
				uVar0.f_13[8] = 0;
				uVar0[8] = 2;
				break;
			case 14:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 2;
				uVar0.f_13[3] = 1;
				uVar0[3] = 0;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			case 13:
				uVar0.f_13[0] = 0;
				uVar0[0] = 2;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 21:
				uVar0.f_13[0] = 1;
				uVar0[0] = 2;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 0;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 22:
				uVar0.f_13[0] = 1;
				uVar0[0] = 1;
				uVar0.f_13[2] = 1;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 5;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 23:
				uVar0.f_13[0] = 0;
				uVar0[0] = 0;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 1;
				uVar0[3] = 2;
				uVar0.f_13[4] = 1;
				uVar0[4] = 2;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 24:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 1;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 1;
				uVar0.f_13[8] = 1;
				uVar0[8] = 0;
				break;
			case 25:
				uVar0.f_13[0] = 0;
				uVar0[0] = 1;
				uVar0.f_13[2] = 0;
				uVar0[2] = 0;
				uVar0.f_13[3] = 0;
				uVar0[3] = 1;
				uVar0.f_13[4] = 0;
				uVar0[4] = 2;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			case 26:
				uVar0.f_13[0] = 1;
				uVar0[0] = 0;
				uVar0.f_13[2] = 1;
				uVar0[2] = 1;
				uVar0.f_13[3] = 1;
				uVar0[3] = 2;
				uVar0.f_13[4] = 1;
				uVar0[4] = 0;
				uVar0.f_13[5] = 0;
				uVar0[5] = 0;
				break;
			default:
				break;
		}
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (uVar0.f_13[iVar1] != -1 || uVar0[iVar1] != -1)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_413[iParam0], iVar1, uVar0.f_13[iVar1], uVar0[iVar1], 0);
			}
			iVar1++;
		}
	}
}

void func_841()//Position - 0x943F1
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[3]))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[3]);
	}
	else
	{
		fVar0 = 1f;
	}
	switch (Local_415[6 /*8*/].f_1)
	{
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iLocal_125))
			{
				switch (iLocal_2250)
				{
					case 3:
						if ((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_80) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_84)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_monitor_01d")))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1082.8501f, -244.79752f, 42.79504f, -1073.8993f, -248.9113f, 45.52112f, 1f, false, true, 0))
							{
								if (!bLocal_374)
								{
									ENTITY::CREATE_MODEL_SWAP(Local_152, 1f, joaat("prop_monitor_li"), joaat("prop_monitor_01d"), true);
									__LIB_16__::func_912(&uLocal_416, joaat("prop_monitor_01d"));
									bLocal_374 = true;
								}
								iVar1 = 1;
								iVar2 = 1;
								Local_415[6 /*8*/].f_1 = 101;
							}
						}
						break;
					case 4:
					case 5:
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_84))
						{
							iVar1 = 1;
							iVar2 = 1;
							Local_415[6 /*8*/].f_1 = 3;
						}
						break;
					case 6:
						if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_88))
						{
							iVar1 = 1;
							iVar2 = 1;
							Local_415[6 /*8*/].f_1 = 5;
						}
						break;
				}
				if (iVar2 && iVar1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[15]))
					{
						PED::DELETE_PED(&(iLocal_413[15]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[16]))
					{
						PED::DELETE_PED(&(iLocal_413[16]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[17]))
					{
						PED::DELETE_PED(&(iLocal_413[17]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[18]))
					{
						PED::DELETE_PED(&(iLocal_413[18]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[19]))
					{
						PED::DELETE_PED(&(iLocal_413[19]));
					}
					iLocal_413[15] = PED::CREATE_PED(26, iLocal_125, -1064.7488f, -238.4493f, 43.0211f, 54.0951f, true, true);
					iLocal_413[16] = PED::CREATE_PED(26, iLocal_125, -1064.7488f, -238.4493f, 43.0211f, 54.0951f, true, true);
					iLocal_413[17] = PED::CREATE_PED(26, iLocal_125, -1064.7488f, -238.4493f, 43.0211f, 54.0951f, true, true);
					iLocal_413[18] = PED::CREATE_PED(26, iLocal_125, -1064.7488f, -238.4493f, 43.0211f, 54.0951f, true, true);
					iLocal_413[19] = PED::CREATE_PED(26, iLocal_125, -1063.5718f, -246.7145f, 44.0194f, -22.918f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[15], "OFFICE_boss");
					PED::SET_PED_NAME_DEBUG(iLocal_413[16], "OFFICE_a");
					PED::SET_PED_NAME_DEBUG(iLocal_413[17], "OFFICE_b");
					PED::SET_PED_NAME_DEBUG(iLocal_413[18], "OFFICE_c");
					PED::SET_PED_NAME_DEBUG(iLocal_413[19], "OFFICE_d");
					func_840(15);
					func_840(16);
					func_840(17);
					func_840(18);
					func_840(19);
					if (!ENTITY::DOES_ENTITY_EXIST(Local_414[5 /*10*/]))
					{
						Local_414[5 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1068.078f, -238.9636f, 43.0229f, 1f, iLocal_128, true, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[5 /*10*/]))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_414[5 /*10*/], -1068.078f, -238.9636f, 43.0229f, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(Local_414[5 /*10*/], 0f, 0f, 52.5f, 2, true);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[5 /*10*/], iLocal_413[15], false);
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[5 /*10*/], true);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_414[6 /*10*/]))
					{
						Local_414[6 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1066.25f, -238.04f, 43.02f, 1f, iLocal_128, true, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[6 /*10*/]))
						{
							if (Local_415[6 /*8*/].f_1 == 3 || Local_415[6 /*8*/].f_1 == 4)
							{
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_414[6 /*10*/], -1065.5271f, -237.9645f, 43.0258f, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_414[6 /*10*/], -0.1264f, 0.0338f, -88.9461f, 2, true);
							}
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[6 /*10*/], iLocal_413[16], false);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_414[7 /*10*/]))
					{
						Local_414[7 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1065.51f, -239.51f, 43.02f, 1f, iLocal_128, true, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[7 /*10*/]))
						{
							if (Local_415[6 /*8*/].f_1 == 3 || Local_415[6 /*8*/].f_1 == 4)
							{
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_414[7 /*10*/], -1064.8973f, -240.5339f, 43.0251f, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_414[7 /*10*/], 0f, -0.0005f, 167.7005f, 2, true);
							}
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[7 /*10*/], iLocal_413[17], false);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_414[8 /*10*/]))
					{
						Local_414[8 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1057.86f, -243.51f, 43.02f, 1f, iLocal_128, true, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[8 /*10*/]))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_414[8 /*10*/], -1058.1906f, -243.0693f, 43.0229f, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(Local_414[8 /*10*/], 0f, 0f, -134.5749f, 2, true);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[8 /*10*/], iLocal_413[18], false);
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[8 /*10*/], true);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_414[9 /*10*/]))
					{
						Local_414[9 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1063.61f, -246.65f, 43.02f, 1f, iLocal_128, true, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(Local_414[9 /*10*/]))
						{
							if (iLocal_2250 < 4)
							{
								ENTITY::SET_ENTITY_COORDS(Local_414[9 /*10*/], -1063.832f, -246.746f, 43.023f, true, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_414[9 /*10*/], -0.04f, 0.04f, 159.275f, 2, true);
							}
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[9 /*10*/], iLocal_413[19], false);
						}
					}
				}
			}
			break;
		case 101:
			if ((func_837(iLocal_413[18]) && func_837(iLocal_413[19])) && func_837(Local_414[9 /*10*/]))
			{
				iLocal_412[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[18], iLocal_412[3], &cLocal_84, "air_guitar_01_exitloop_c", 1000f, -8f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[3], &cLocal_84, "air_guitar_01_exitloop_d", 1000f, -8f, 0, 0, 1000f, 0);
				func_540(&(Local_414[9 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_d", &cLocal_84, 8f, -8f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[3], true);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[18], false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
				Local_415[6 /*8*/].f_1++;
			}
			break;
		case 102:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.8431f, -246.0792f, 42.77128f, -1067.1719f, -249.25089f, 46.78306f, 5.75f, false, true, 0) && AUDIO::REQUEST_MISSION_AUDIO_BANK("Lester1A_01", false, -1))
			{
				__LIB_0__::func_222(&uLocal_186, 7, iLocal_413[15], "LIOffice1", 0, 1);
				__LIB_0__::func_222(&uLocal_186, 8, iLocal_413[16], "LIOffice2", 0, 1);
				__LIB_0__::func_222(&uLocal_186, 6, iLocal_413[17], "LIOfficeGroup", 0, 1);
				iVar3 = 0;
				while (iVar3 <= (iLocal_2278 - 1))
				{
					if ((Local_2262[iVar3 /*6*/] != -1 && Local_2262[iVar3 /*6*/].f_5 != -1) && Local_2262[iVar3 /*6*/].f_4 == 0)
					{
						if (iLocal_2266 < 6)
						{
							switch (iLocal_2266)
							{
								case 0:
									sVar4 = "POPUP_MUSIC_01";
									break;
								case 1:
									sVar4 = "POPUP_MUSIC_02";
									break;
								case 2:
									sVar4 = "POPUP_MUSIC_03";
									break;
								case 3:
									sVar4 = "POPUP_MUSIC_04";
									break;
								case 4:
									sVar4 = "POPUP_MUSIC_05";
									break;
								case 5:
									sVar4 = "POPUP_MUSIC_06";
									break;
								default:
									sVar4 = "POPUP_MUSIC_RND";
									break;
							}
						}
						else
						{
							sVar4 = "POPUP_MUSIC_RND";
						}
						AUDIO::PLAY_SOUND_FROM_COORD(Local_2262[iVar3 /*6*/].f_5, sVar4, -1059.63f, -244.61f, 43.92f, "LESTER1A_SOUNDS", false, 0, false);
						AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar3 /*6*/].f_5, "State", 0f);
						Local_2262[iVar3 /*6*/].f_4 = 1;
						iLocal_2266++;
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < Local_2262.f_0)
				{
					if (Local_2262[iVar3 /*6*/].f_4 && Local_2262[iVar3 /*6*/].f_5 != -1)
					{
						AUDIO::SET_VARIABLE_ON_SOUND(Local_2262[iVar3 /*6*/].f_5, "TracksPlaying", SYSTEM::TO_FLOAT(__LIB_0__::func_340(iLocal_2266, 1, 12)));
					}
					iVar3++;
				}
				Local_415[6 /*8*/].f_1 = 2;
			}
			break;
		case 2:
			if (((((((func_837(iLocal_413[16]) && func_837(iLocal_413[17])) && func_837(iLocal_413[18])) && func_837(iLocal_413[19])) && func_837(iLocal_413[15])) && func_837(Local_414[6 /*10*/])) && func_837(Local_414[7 /*10*/])) && func_837(Local_414[9 /*10*/]))
			{
				if ((__LIB_16__::func_855() && __LIB_38__::func_746(&uLocal_186, &cLocal_47, "LES_1A_IG_3", 8, 1, 0, 0)) || __LIB_0__::func_75())
				{
					iLocal_412[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[15], iLocal_412[3], &cLocal_80, "air_guitar_01_boss", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[16], iLocal_412[3], &cLocal_80, "air_guitar_01_a", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[17], iLocal_412[3], &cLocal_80, "air_guitar_01_b", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[18], iLocal_412[3], &cLocal_80, "air_guitar_01_c", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[3], &cLocal_80, "air_guitar_01_d", 1000f, -8f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[15], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[16], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[17], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[18], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
					func_540(&(Local_414[5 /*10*/]), iLocal_412[3], "air_guitar_01_chair_boss", &cLocal_80, 8f, -8f, 0);
					func_540(&(Local_414[6 /*10*/]), iLocal_412[3], "air_guitar_01_chair_a", &cLocal_80, 8f, -8f, 0);
					func_540(&(Local_414[7 /*10*/]), iLocal_412[3], "air_guitar_01_chair_b", &cLocal_80, 8f, -8f, 0);
					func_540(&(Local_414[9 /*10*/]), iLocal_412[3], "air_guitar_01_chair_d", &cLocal_80, 8f, -8f, 0);
					Local_415[6 /*8*/].f_7 = 1;
					Local_415[6 /*8*/].f_1++;
				}
			}
			break;
		case 3:
			if (fVar0 == 1f || ((CUTSCENE::IS_CUTSCENE_PLAYING() && iLocal_2250 == 4) && iLocal_2251 > 5))
			{
				if (((((((func_837(iLocal_413[16]) && func_837(iLocal_413[17])) && func_837(iLocal_413[18])) && func_837(iLocal_413[19])) && func_837(iLocal_413[15])) && func_837(Local_414[6 /*10*/])) && func_837(Local_414[7 /*10*/])) && func_837(Local_414[9 /*10*/]))
				{
					iLocal_412[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[15], iLocal_412[3], &cLocal_84, "air_guitar_01_exitloop_boss", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[16], iLocal_412[3], &cLocal_84, "air_guitar_01_exitloop_a", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[17], iLocal_412[3], &cLocal_84, "air_guitar_01_exitloop_b", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[18], iLocal_412[3], &cLocal_84, "air_guitar_01_exitloop_c", 1000f, -8f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[15], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[16], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[17], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[18], false, false);
					func_540(&(Local_414[5 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_boss", &cLocal_84, 8f, -8f, 0);
					func_540(&(Local_414[6 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_a", &cLocal_84, 1000f, -8f, 0);
					func_540(&(Local_414[7 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_b", &cLocal_84, 1000f, -8f, 0);
					if (iLocal_2250 < 4)
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[3], &cLocal_84, "air_guitar_01_exitloop_d", 1000f, -8f, 0, 0, 1000f, 0);
						func_540(&(Local_414[9 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_d", &cLocal_84, 1000f, -8f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
					}
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[3], true);
					__LIB_16__::func_905(&uLocal_416, &cLocal_80);
					Local_415[6 /*8*/].f_7 = 1;
					Local_415[6 /*8*/].f_6 = 0;
					Local_415[6 /*8*/].f_1++;
				}
			}
			else
			{
				if (__LIB_0__::func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_413[15]))
					{
						if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_413[15]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1066.78f, -239.63f, 43.86f) > 225f)
						{
							__LIB_0__::func_638();
						}
					}
				}
				if (Local_415[6 /*8*/].f_6 == 0 && fVar0 > 0.8f)
				{
					__LIB_16__::func_857(&uLocal_416, &cLocal_84);
					Local_415[6 /*8*/].f_6 = 1;
				}
				if (!PED::IS_PED_INJURED(iLocal_413[15]))
				{
					if (fVar0 > 0.745f && fVar0 < 0.93f)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[15]))
						{
							__LIB_0__::func_709(iLocal_413[15], "AIRROCKING", "LIENGINEER2", 3);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_413[19]))
				{
					if (fVar0 > 0.745f && fVar0 < 0.93f)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
						{
							__LIB_0__::func_709(iLocal_413[19], "DRUMMING", "AIRDRUMMER", 3);
						}
					}
					else if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[19]);
					}
				}
			}
			break;
		case 4:
			if (iLocal_2250 >= 6)
			{
				Local_415[6 /*8*/].f_1++;
			}
			break;
		case 5:
			if (((((((func_837(iLocal_413[16]) && func_837(iLocal_413[17])) && func_837(iLocal_413[18])) && func_837(iLocal_413[19])) && func_837(iLocal_413[15])) && func_837(Local_414[6 /*10*/])) && func_837(Local_414[7 /*10*/])) && func_837(Local_414[9 /*10*/]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_413[15]);
				TASK::CLEAR_PED_TASKS(iLocal_413[16]);
				TASK::CLEAR_PED_TASKS(iLocal_413[17]);
				TASK::CLEAR_PED_TASKS(iLocal_413[18]);
				TASK::CLEAR_PED_TASKS(iLocal_413[19]);
				func_83(&(Local_414[6 /*10*/]), -1000f);
				func_83(&(Local_414[7 /*10*/]), -1000f);
				func_83(&(Local_414[9 /*10*/]), -1000f);
				iLocal_412[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[15], iLocal_412[3], &cLocal_88, "air_guitar_02_boss", 1000f, -8f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[16], iLocal_412[3], &cLocal_88, "air_guitar_02_a", 1000f, -8f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[17], iLocal_412[3], &cLocal_88, "air_guitar_02_b", 1000f, -8f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[18], iLocal_412[3], &cLocal_88, "air_guitar_02_c", 1000f, -8f, 0, 0, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[3], &cLocal_88, "air_guitar_02_d", 1000f, -8f, 0, 0, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[15], false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[16], false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[17], false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[18], false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
				func_540(&(Local_414[6 /*10*/]), iLocal_412[3], "air_guitar_02_chair_a", &cLocal_88, 1000f, -8f, 0);
				func_540(&(Local_414[7 /*10*/]), iLocal_412[3], "air_guitar_02_chair_b", &cLocal_88, 1000f, -8f, 0);
				func_540(&(Local_414[9 /*10*/]), iLocal_412[3], "air_guitar_02_chair_d", &cLocal_88, 1000f, -8f, 0);
				__LIB_16__::func_905(&uLocal_416, &cLocal_84);
				Local_415[6 /*8*/].f_7 = 1;
				Local_415[6 /*8*/].f_1++;
			}
			break;
		case 6:
			if (fVar0 == 1f)
			{
				if (((((((func_837(iLocal_413[16]) && func_837(iLocal_413[17])) && func_837(iLocal_413[18])) && func_837(iLocal_413[19])) && func_837(iLocal_413[15])) && func_837(Local_414[6 /*10*/])) && func_837(Local_414[7 /*10*/])) && func_837(Local_414[9 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[15]);
					TASK::CLEAR_PED_TASKS(iLocal_413[16]);
					TASK::CLEAR_PED_TASKS(iLocal_413[17]);
					TASK::CLEAR_PED_TASKS(iLocal_413[18]);
					TASK::CLEAR_PED_TASKS(iLocal_413[19]);
					func_83(&(Local_414[6 /*10*/]), -1000f);
					func_83(&(Local_414[7 /*10*/]), -1000f);
					func_83(&(Local_414[9 /*10*/]), -1000f);
					iLocal_412[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[15], iLocal_412[3], &cLocal_92, "air_guitar_02_exit_boss", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[16], iLocal_412[3], &cLocal_92, "air_guitar_02_exit_a", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[17], iLocal_412[3], &cLocal_92, "air_guitar_02_exit_b", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[18], iLocal_412[3], &cLocal_92, "air_guitar_02_exit_c", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[3], &cLocal_92, "air_guitar_02_exit_d", 1000f, -8f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[15], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[16], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[17], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[18], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
					func_540(&(Local_414[6 /*10*/]), iLocal_412[3], "air_guitar_02_exit_chair_a", &cLocal_92, 1000f, -8f, 0);
					func_540(&(Local_414[7 /*10*/]), iLocal_412[3], "air_guitar_02_exit_chair_b", &cLocal_92, 1000f, -8f, 0);
					func_540(&(Local_414[9 /*10*/]), iLocal_412[3], "air_guitar_02_exit_chair_d", &cLocal_92, 1000f, -8f, 0);
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[19]);
					}
					__LIB_16__::func_905(&uLocal_416, &cLocal_88);
					Local_415[6 /*8*/].f_1++;
				}
			}
			else
			{
				if (__LIB_0__::func_75())
				{
					if (!PED::IS_PED_INJURED(iLocal_413[15]))
					{
						if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_413[15]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1066.78f, -239.63f, 43.86f) > 225f)
						{
							__LIB_0__::func_638();
						}
					}
				}
				if (Local_415[6 /*8*/].f_6 == 0 && fVar0 > 0.8f)
				{
					__LIB_16__::func_857(&uLocal_416, &cLocal_92);
					Local_415[6 /*8*/].f_6 = 1;
				}
				if (!PED::IS_PED_INJURED(iLocal_413[19]))
				{
					if (((fVar0 > 0.135f && fVar0 < 0.216f) || (fVar0 > 0.329f && fVar0 < 0.419f)) || (fVar0 > 0.824f && fVar0 < 0.99f))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
						{
							__LIB_0__::func_709(iLocal_413[19], "DRUMMING", "AIRDRUMMER", 3);
						}
					}
					else if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[19]);
					}
				}
			}
			break;
		case 7:
			if (fVar0 >= 1f)
			{
				if (((((((func_837(iLocal_413[16]) && func_837(iLocal_413[17])) && func_837(iLocal_413[18])) && func_837(iLocal_413[19])) && func_837(iLocal_413[15])) && func_837(Local_414[6 /*10*/])) && func_837(Local_414[7 /*10*/])) && func_837(Local_414[9 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[15]);
					TASK::CLEAR_PED_TASKS(iLocal_413[16]);
					TASK::CLEAR_PED_TASKS(iLocal_413[17]);
					TASK::CLEAR_PED_TASKS(iLocal_413[18]);
					TASK::CLEAR_PED_TASKS(iLocal_413[19]);
					func_83(&(Local_414[5 /*10*/]), -1000f);
					func_83(&(Local_414[6 /*10*/]), -1000f);
					func_83(&(Local_414[7 /*10*/]), -1000f);
					func_83(&(Local_414[9 /*10*/]), -1000f);
					iLocal_412[3] = PED::CREATE_SYNCHRONIZED_SCENE(-1067.002f, -239.245f, 43.021f, 0f, 0f, 27.75f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[15], iLocal_412[3], &cLocal_92, "air_guitar_01_exitloop_boss", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[16], iLocal_412[3], &cLocal_92, "air_guitar_01_exitloop_a", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[17], iLocal_412[3], &cLocal_92, "air_guitar_01_exitloop_b", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[18], iLocal_412[3], &cLocal_92, "air_guitar_01_exitloop_c", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[19], iLocal_412[3], &cLocal_92, "air_guitar_01_exitloop_d", 1000f, -8f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[15], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[16], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[17], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[18], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[19], false, false);
					func_540(&(Local_414[5 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_boss", &cLocal_92, 8f, -8f, 0);
					func_540(&(Local_414[6 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_a", &cLocal_92, 1000f, -8f, 0);
					func_540(&(Local_414[9 /*10*/]), iLocal_412[3], "air_guitar_01_exitloop_chair_d", &cLocal_92, 1000f, -8f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[3], true);
					if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[19]))
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_413[19]);
					}
					Local_415[6 /*8*/].f_1++;
				}
			}
			break;
	}
}

void func_842()//Position - 0x95C73
{
	float fVar0;
	float fVar1;
	bool bVar2;
	char cVar3[32];
	struct<8> Var4[5];
	struct<8> Var5[5];
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[5]))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[5]);
	}
	else
	{
		fVar0 = 1f;
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[6]))
	{
		fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[6]);
	}
	else
	{
		fVar1 = 1f;
	}
	if (Local_415[8 /*8*/].f_1 == 1)
	{
		if (((STREAMING::HAS_MODEL_LOADED(joaat("ig_JAY_Norris")) && STREAMING::HAS_MODEL_LOADED(iLocal_125)) && STREAMING::HAS_MODEL_LOADED(iLocal_126)) && (!CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::GET_CUTSCENE_TIME() > 3700))
		{
			switch (iLocal_2250)
			{
				case 3:
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1082.8501f, -244.79752f, 42.79504f, -1073.8993f, -248.9113f, 45.52112f, 1f, false, true, 0) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_100)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_96))
					{
						bVar2 = true;
						Local_415[8 /*8*/].f_1++;
					}
					break;
				case 4:
				case 5:
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_100) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_96))
					{
						bVar2 = true;
						Local_415[8 /*8*/].f_1++;
					}
					break;
				case 6:
					if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_100) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_96))
					{
						bVar2 = true;
						Local_415[8 /*8*/].f_1++;
					}
					break;
			}
			if (bVar2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[20]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[20]);
				}
				else
				{
					iLocal_413[20] = PED::CREATE_PED(26, joaat("ig_JAY_Norris"), -1045.5f, -229f, 43.41f, 0f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[20], "JayNorris");
					func_840(20);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[25]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[25]);
				}
				else
				{
					iLocal_413[25] = PED::CREATE_PED(26, iLocal_126, -1045.07f, -229.78f, 43.41f, 0f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[25], "BoardFemaleB");
					func_840(25);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[26]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[26]);
				}
				else
				{
					iLocal_413[26] = PED::CREATE_PED(26, iLocal_126, -1045.07f, -229.78f, 43.41f, 0f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[26], "BoardFemaleC");
					func_840(26);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[21]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[21]);
				}
				else
				{
					iLocal_413[21] = PED::CREATE_PED(26, iLocal_125, -1045.07f, -229.78f, 43.41f, 0f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[21], "BoardMaleA");
					func_840(21);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[22]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[22]);
				}
				else
				{
					iLocal_413[22] = PED::CREATE_PED(26, iLocal_125, -1045.07f, -229.78f, 43.41f, 0f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[22], "BoardMaleB");
					func_840(22);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[23]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[23]);
				}
				else
				{
					iLocal_413[23] = PED::CREATE_PED(26, iLocal_125, -1045.07f, -229.78f, 43.41f, 0f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[23], "BoardMaleE");
					func_840(23);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[24]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[24]);
				}
				else
				{
					iLocal_413[24] = PED::CREATE_PED(26, iLocal_125, -1045.07f, -229.78f, 43.41f, 0f, true, true);
					PED::SET_PED_NAME_DEBUG(iLocal_413[24], "BoardMaleF");
					func_840(24);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_414[22 /*10*/]))
				{
					func_227(&(Local_414[22 /*10*/]), joaat("prop_off_chair_01"), -1045.07f, -229.78f, 43.41f, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_414[22 /*10*/]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_414[22 /*10*/], iLocal_413[20]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_414[22 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_414[22 /*10*/], false, true);
						}
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[22 /*10*/], iLocal_413[20], PED::GET_PED_BONE_INDEX(iLocal_413[20], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					}
				}
			}
		}
	}
	if (Local_415[8 /*8*/].f_1 > 1)
	{
		switch (Local_415[8 /*8*/].f_1)
		{
			case 2:
				if (func_843())
				{
					iLocal_400 = 0;
					Local_415[8 /*8*/].f_1++;
				}
				break;
			case 3:
				if ((((((func_837(iLocal_413[20]) && func_837(iLocal_413[25])) && func_837(iLocal_413[26])) && func_837(iLocal_413[21])) && func_837(iLocal_413[22])) && func_837(iLocal_413[23])) && func_837(iLocal_413[24]))
				{
					iLocal_412[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[20], iLocal_412[5], &cLocal_96, "boardroom_intro_jaynorris", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[21], iLocal_412[5], &cLocal_96, "boardroom_intro_m_a", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[22], iLocal_412[5], &cLocal_96, "boardroom_intro_m_b", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[24], iLocal_412[5], &cLocal_96, "boardroom_intro_m_f", 1000f, -8f, 0, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[5], true);
					iLocal_412[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[25], iLocal_412[6], &cLocal_96, "boardroom_intro_f_b", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[26], iLocal_412[6], &cLocal_96, "boardroom_intro_f_c", 1000f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[23], iLocal_412[6], &cLocal_96, "boardroom_intro_m_e", 1000f, -8f, 0, 0, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[6], true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[20], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[21], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[22], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[24], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[25], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[26], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[23], false, false);
					__LIB_16__::func_857(&uLocal_416, &cLocal_100);
					Local_415[8 /*8*/].f_1++;
				}
				break;
			case 4:
			case 6:
			case 8:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1047.7473f, -238.05757f, 43.02124f, -1050.8712f, -239.66249f, 45.921116f, 10f, false, true, 0))
				{
					if (!__LIB_16__::func_855())
					{
						__LIB_0__::func_638();
					}
					else if (((((((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_100) && func_837(iLocal_413[20])) && func_837(iLocal_413[25])) && func_837(iLocal_413[26])) && func_837(iLocal_413[21])) && func_837(iLocal_413[22])) && func_837(iLocal_413[23])) && func_837(iLocal_413[24]))
					{
						switch (Local_415[8 /*8*/].f_1)
						{
							case 4:
								__LIB_0__::func_222(&uLocal_186, 5, iLocal_413[20], "JAYNORRIS", 0, 1);
								__LIB_0__::func_222(&uLocal_186, 6, iLocal_413[21], "LIBoard3", 0, 1);
								__LIB_0__::func_222(&uLocal_186, 7, iLocal_413[24], "LIBoard1", 0, 1);
								StringCopy(&cVar3, "LES_1A_IG_5a", 32);
								MemCopy(&(Var4[0 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[0 /*8*/]), "LES_1A_IG_5a_jayNorris", 32);
								MemCopy(&(Var4[1 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[1 /*8*/]), "LES_1A_IG_5a_jNor_chair", 32);
								MemCopy(&(Var4[2 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[2 /*8*/]), "LES_1A_IG_5a_m_a", 32);
								MemCopy(&(Var4[3 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[3 /*8*/]), "LES_1A_IG_5a_m_b", 32);
								MemCopy(&(Var4[4 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[4 /*8*/]), "LES_1A_IG_5a_m_f", 32);
								break;
							case 6:
								__LIB_0__::func_222(&uLocal_186, 5, iLocal_413[20], "JAYNORRIS", 0, 1);
								__LIB_0__::func_222(&uLocal_186, 8, iLocal_413[21], "LIBoard2", 0, 1);
								StringCopy(&cVar3, "LES_1A_IG_5b", 32);
								MemCopy(&(Var4[0 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[0 /*8*/]), "LES_1A_IG_5b_jayNorris", 32);
								MemCopy(&(Var4[1 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[1 /*8*/]), "LES_1A_IG_5b_jNor_chair", 32);
								MemCopy(&(Var4[2 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[2 /*8*/]), "LES_1A_IG_5b_m_a", 32);
								MemCopy(&(Var4[3 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[3 /*8*/]), "LES_1A_IG_5b_m_b", 32);
								MemCopy(&(Var4[4 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[4 /*8*/]), "LES_1A_IG_5b_m_f", 32);
								break;
							case 8:
								__LIB_0__::func_222(&uLocal_186, 5, iLocal_413[20], "JAYNORRIS", 0, 1);
								__LIB_0__::func_222(&uLocal_186, 6, iLocal_413[21], "LIBoard3", 0, 1);
								StringCopy(&cVar3, "LES_1A_IG_5c", 32);
								MemCopy(&(Var4[0 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[0 /*8*/]), "LES_1A_IG_5c_jayNorris", 32);
								MemCopy(&(Var4[1 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[1 /*8*/]), "LES_1A_IG_5c_jNor_chair", 32);
								MemCopy(&(Var4[2 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[2 /*8*/]), "LES_1A_IG_5c_m_a", 32);
								MemCopy(&(Var4[3 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[3 /*8*/]), "LES_1A_IG_5c_m_b", 32);
								MemCopy(&(Var4[4 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[4 /*8*/]), "LES_1A_IG_5c_m_f", 32);
								break;
						}
						if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, &cVar3, 8, 1, 0, 0))
						{
							iLocal_412[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[20], iLocal_412[5], &(Var4[0 /*8*/]), &(Var5[0 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
							if (ENTITY::IS_ENTITY_ATTACHED(Local_414[22 /*10*/]))
							{
								ENTITY::DETACH_ENTITY(Local_414[22 /*10*/], true, true);
							}
							func_540(&(Local_414[22 /*10*/]), iLocal_412[5], &(Var5[1 /*8*/]), &(Var4[1 /*8*/]), 8f, -8f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[21], iLocal_412[5], &(Var4[2 /*8*/]), &(Var5[2 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[22], iLocal_412[5], &(Var4[3 /*8*/]), &(Var5[3 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[24], iLocal_412[5], &(Var4[4 /*8*/]), &(Var5[4 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
							if (Local_415[8 /*8*/].f_1 == 4)
							{
								iLocal_412[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[23], iLocal_412[6], &cLocal_100, "boardroom_react_m_e", 8f, -8f, 0, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[25], iLocal_412[6], &cLocal_100, "boardroom_react_f_b", 8f, -8f, 0, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[26], iLocal_412[6], &cLocal_100, "boardroom_react_f_c", 8f, -8f, 0, 0, 1000f, 0);
							}
							__LIB_16__::func_905(&uLocal_416, &cLocal_96);
							Local_415[8 /*8*/].f_1++;
						}
					}
				}
				break;
			case 5:
			case 7:
				if (fVar0 == 1f)
				{
					if (((((((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_100) && func_837(iLocal_413[20])) && func_837(iLocal_413[25])) && func_837(iLocal_413[26])) && func_837(iLocal_413[21])) && func_837(iLocal_413[22])) && func_837(iLocal_413[23])) && func_837(iLocal_413[24]))
					{
						switch (Local_415[8 /*8*/].f_1)
						{
							case 5:
								MemCopy(&(Var4[0 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[0 /*8*/]), "idle_01_jayNorris", 32);
								MemCopy(&(Var4[1 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[1 /*8*/]), "idle_01_jNor_chair", 32);
								MemCopy(&(Var4[2 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[2 /*8*/]), "idle_01_m_a", 32);
								MemCopy(&(Var4[3 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[3 /*8*/]), "idle_01_m_b", 32);
								MemCopy(&(Var4[4 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[4 /*8*/]), "idle_01_m_f", 32);
								break;
							case 7:
								MemCopy(&(Var4[0 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[0 /*8*/]), "idle_02_jayNorris", 32);
								MemCopy(&(Var4[1 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[1 /*8*/]), "idle_02_jNor_chair", 32);
								MemCopy(&(Var4[2 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[2 /*8*/]), "idle_01_m_a", 32);
								MemCopy(&(Var4[3 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[3 /*8*/]), "idle_01_m_b", 32);
								MemCopy(&(Var4[4 /*8*/]), {cLocal_100}, 8);
								StringCopy(&(Var5[4 /*8*/]), "idle_01_m_f", 32);
								break;
						}
						iLocal_412[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[20], iLocal_412[5], &(Var4[0 /*8*/]), &(Var5[0 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
						if (ENTITY::IS_ENTITY_ATTACHED(Local_414[22 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_414[22 /*10*/], true, true);
						}
						func_540(&(Local_414[22 /*10*/]), iLocal_412[5], &(Var5[1 /*8*/]), &(Var4[1 /*8*/]), 8f, -8f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[21], iLocal_412[5], &(Var4[2 /*8*/]), &(Var5[2 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[22], iLocal_412[5], &(Var4[3 /*8*/]), &(Var5[3 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[24], iLocal_412[5], &(Var4[4 /*8*/]), &(Var5[4 /*8*/]), 8f, -8f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[5], true);
						func_836(8, 3500);
						Local_415[8 /*8*/].f_1++;
					}
				}
				break;
			case 9:
				if (fVar0 == 1f)
				{
					if ((((((func_837(iLocal_413[20]) && func_837(iLocal_413[25])) && func_837(iLocal_413[26])) && func_837(iLocal_413[21])) && func_837(iLocal_413[22])) && func_837(iLocal_413[23])) && func_837(iLocal_413[24]))
					{
						iLocal_412[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[20], iLocal_412[5], &cLocal_101, "boardroom_into_exit_jaynorris", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[21], iLocal_412[5], &cLocal_101, "boardroom_into_exit_m_a", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[22], iLocal_412[5], &cLocal_101, "boardroom_into_exit_m_b", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[24], iLocal_412[5], &cLocal_101, "boardroom_into_exit_m_f", 8f, -8f, 0, 0, 1000f, 0);
						iLocal_412[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[25], iLocal_412[6], &cLocal_101, "boardroom_into_exit_f_b", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[26], iLocal_412[6], &cLocal_101, "boardroom_into_exit_f_c", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[23], iLocal_412[6], &cLocal_101, "boardroom_into_exit_m_e", 8f, -8f, 0, 0, 1000f, 0);
						__LIB_16__::func_905(&uLocal_416, &cLocal_100);
						Local_415[8 /*8*/].f_1++;
					}
				}
				else if (Local_415[8 /*8*/].f_6 == 0 && fVar0 > 0.8f)
				{
					__LIB_16__::func_857(&uLocal_416, &cLocal_101);
					Local_415[8 /*8*/].f_6 = 1;
				}
				break;
			case 10:
				if (fVar0 == 1f && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_101))
				{
					if ((((((func_837(iLocal_413[20]) && func_837(iLocal_413[25])) && func_837(iLocal_413[26])) && func_837(iLocal_413[21])) && func_837(iLocal_413[22])) && func_837(iLocal_413[23])) && func_837(iLocal_413[24]))
					{
						iLocal_412[5] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[20], iLocal_412[5], &cLocal_101, "boardroom_exitloop_jaynorris", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[21], iLocal_412[5], &cLocal_101, "boardroom_exitloop_m_a", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[22], iLocal_412[5], &cLocal_101, "boardroom_exitloop_m_b", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[24], iLocal_412[5], &cLocal_101, "boardroom_exitloop_m_f", 8f, -8f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[5], true);
						iLocal_412[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[25], iLocal_412[6], &cLocal_101, "boardroom_exitloop_f_b", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[26], iLocal_412[6], &cLocal_101, "boardroom_exitloop_f_c", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[23], iLocal_412[6], &cLocal_101, "boardroom_exitloop_m_e", 8f, -8f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[6], true);
						Local_415[8 /*8*/].f_1++;
					}
				}
				break;
		}
		if (Local_415[8 /*8*/].f_1 > 4)
		{
			if (!iLocal_400)
			{
				if (fVar1 == 1f)
				{
					if ((func_837(iLocal_413[25]) && func_837(iLocal_413[26])) && func_837(iLocal_413[23]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_413[25]);
						TASK::CLEAR_PED_TASKS(iLocal_413[26]);
						TASK::CLEAR_PED_TASKS(iLocal_413[23]);
						iLocal_412[6] = PED::CREATE_SYNCHRONIZED_SCENE(Local_162, Local_163, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[25], iLocal_412[6], &cLocal_100, "boardroom_listen_loop_f_b", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[26], iLocal_412[6], &cLocal_100, "boardroom_listen_loop_f_c", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[23], iLocal_412[6], &cLocal_100, "boardroom_listen_loop_m_e", 8f, -8f, 0, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[6], true);
						iLocal_400 = 1;
					}
				}
			}
		}
	}
}

int func_843()//Position - 0x97068
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[12 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1043.98f, -238.39f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false))
		{
			Local_414[12 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1043.98f, -238.39f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[12 /*10*/], -1043.74f, -238.72f, 43.02f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[12 /*10*/], 0f, 0f, 152.5f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[12 /*10*/], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[13 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1046.38f, -233.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false))
		{
			Local_414[13 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1046.38f, -233.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[13 /*10*/], -1046.89f, -232.61f, 43.02f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[13 /*10*/], 0f, 0f, 63.15f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[13 /*10*/], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[14 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1044.53f, -232.09f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false))
		{
			Local_414[14 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1044.53f, -232.09f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[14 /*10*/], -1044.78f, -231.92f, 43.02f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[14 /*10*/], 0f, 0f, -27.5f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[14 /*10*/], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[15 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1042.13f, -237.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false))
		{
			Local_414[15 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1042.13f, -237.24f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[15 /*10*/], -1041.9f, -237.63f, 43.02f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[15 /*10*/], 0f, 0f, -92.5f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[15 /*10*/], true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[16 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1043.03f, -235.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false) && !PED::IS_PED_INJURED(iLocal_413[21]))
		{
			Local_414[16 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1043.03f, -235.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[16 /*10*/], -1042.8325f, -235.5175f, 43.03f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[16 /*10*/], 0f, -0.04f, -72.11f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[16 /*10*/], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[16 /*10*/], iLocal_413[21], false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[17 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1045.9f, -234.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false) && !PED::IS_PED_INJURED(iLocal_413[22]))
		{
			Local_414[17 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1045.9f, -234.22f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[17 /*10*/], -1046.3765f, -234.1675f, 43.03f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[17 /*10*/], -0.03f, -0.03f, 88.64f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[17 /*10*/], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[17 /*10*/], iLocal_413[22], false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[18 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1043.49f, -234.33f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false) && !PED::IS_PED_INJURED(iLocal_413[23]))
		{
			Local_414[18 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1043.49f, -234.33f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[18 /*10*/], -1043.3405f, -234.2f, 43.03f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[18 /*10*/], -0.03f, -0.03f, -61.92f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[18 /*10*/], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[18 /*10*/], iLocal_413[23], false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[19 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1045.02f, -236.15f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false) && !PED::IS_PED_INJURED(iLocal_413[24]))
		{
			Local_414[19 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1045.02f, -236.15f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[19 /*10*/], -1044.9955f, -236.94f, 43.0225f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[19 /*10*/], 0f, 0.07f, 121.765f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[19 /*10*/], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[19 /*10*/], iLocal_413[24], false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[20 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1045.48f, -235.26f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false) && !PED::IS_PED_INJURED(iLocal_413[25]))
		{
			Local_414[20 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1045.48f, -235.26f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[20 /*10*/], -1045.6705f, -235.5025f, 43.03f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[20 /*10*/], 0.02f, 0.02f, 120.59f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[20 /*10*/], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[20 /*10*/], iLocal_413[25], false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_414[21 /*10*/]))
	{
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1044.45f, -237.14f, 43.02f, 0.5f, joaat("prop_off_chair_01"), false) && !PED::IS_PED_INJURED(iLocal_413[26]))
		{
			Local_414[21 /*10*/] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1044.45f, -237.14f, 43.02f, 0.5f, joaat("prop_off_chair_01"), true, false, true);
			ENTITY::SET_ENTITY_COORDS(Local_414[21 /*10*/], -1044.2515f, -237.905f, 43.03f, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(Local_414[21 /*10*/], 0f, 0f, 129.24f, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_414[21 /*10*/], true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_414[21 /*10*/], iLocal_413[26], false);
		}
	}
	if (((((ENTITY::DOES_ENTITY_EXIST(Local_414[20 /*10*/]) && ENTITY::DOES_ENTITY_EXIST(Local_414[21 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_414[16 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_414[17 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_414[18 /*10*/])) && ENTITY::DOES_ENTITY_EXIST(Local_414[19 /*10*/]))
	{
		return 1;
	}
	return 0;
}

void func_844()//Position - 0x977A0
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { -1080.48f, -244.68f, 43.96f };
	Var1 = { 0f, 0f, 27.5f };
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[2]))
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[2]);
	}
	else
	{
		fVar2 = 1f;
	}
	switch (Local_415[5 /*8*/].f_1)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[11]))
			{
				PED::DELETE_PED(&(iLocal_413[11]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[10]))
			{
				PED::DELETE_PED(&(iLocal_413[10]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[12]))
			{
				PED::DELETE_PED(&(iLocal_413[12]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[8]))
			{
				PED::DELETE_PED(&(iLocal_413[8]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[9]))
			{
				PED::DELETE_PED(&(iLocal_413[9]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_414[3 /*10*/]))
			{
				OBJECT::DELETE_OBJECT(&(Local_414[3 /*10*/]));
			}
			switch (iLocal_2250)
			{
				case 3:
					if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1070.6537f, -243.59155f, 40.611217f, -1072.5265f, -240.03702f, 44.76282f, 3.25f, false, true, 0) && STREAMING::HAS_MODEL_LOADED(iLocal_125)) && STREAMING::HAS_MODEL_LOADED(iLocal_127)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_64))
					{
						iLocal_413[8] = PED::CREATE_PED(26, iLocal_127, -1076.32f, -246.03f, 44.04f, 93.97f, true, true);
						iLocal_413[9] = PED::CREATE_PED(26, iLocal_125, -1078.2277f, -246.6952f, 43.0211f, 184.1198f, true, true);
						iLocal_413[10] = PED::CREATE_PED(26, iLocal_125, -1076.4138f, -248.0054f, 43.0211f, 295.9542f, true, true);
						func_840(8);
						func_840(9);
						func_840(10);
						__LIB_0__::func_429();
						Local_415[5 /*8*/].f_1++;
					}
					else if (!iLocal_2260 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.4517f, -243.96448f, 38.73318f, -1063.5181f, -241.4176f, 42.01213f, 8.375f, false, true, 0))
					{
						__LIB_0__::func_638();
						iLocal_2260 = 1;
					}
					break;
				case 4:
				case 5:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_125) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_68))
					{
						iLocal_413[9] = PED::CREATE_PED(26, iLocal_125, -1078.2277f, -246.6952f, 43.0211f, 184.1198f, true, true);
						iLocal_413[10] = PED::CREATE_PED(26, iLocal_125, -1076.4138f, -248.0054f, 43.0211f, 295.9542f, true, true);
						func_840(9);
						func_840(10);
						Local_415[5 /*8*/].f_1 = 4;
					}
					break;
				case 6:
					if (((STREAMING::HAS_MODEL_LOADED(iLocal_125) && STREAMING::HAS_MODEL_LOADED(iLocal_127)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_hacky_sack_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_72))
					{
						Local_415[5 /*8*/].f_1 = 5;
					}
					break;
			}
			iLocal_2303 = 0;
			break;
		case 2:
			if ((func_837(iLocal_413[9]) && func_837(iLocal_413[8])) && func_837(iLocal_413[10]))
			{
				__LIB_0__::func_221(&uLocal_186, 4);
				__LIB_0__::func_221(&uLocal_186, 5);
				__LIB_0__::func_222(&uLocal_186, 4, iLocal_413[8], "LIHRLady", 0, 1);
				__LIB_0__::func_222(&uLocal_186, 5, iLocal_413[10], "LIInterviewee", 0, 1);
				TASK::CLEAR_PED_TASKS(iLocal_413[9]);
				TASK::CLEAR_PED_TASKS(iLocal_413[10]);
				iLocal_412[2] = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[9], iLocal_412[2], &cLocal_64, "hr_greet_gamer", 1000f, -8f, 1, 16, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[10], iLocal_412[2], &cLocal_64, "hr_greet_m", 1000f, -8f, 1, 16, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[8], iLocal_412[2], &cLocal_64, "hr_greet_f", 1000f, -1.5f, 3, 16, 1000f, 0);
				Local_415[5 /*8*/].f_1++;
			}
			break;
		case 3:
			if (__LIB_16__::func_855())
			{
				if (__LIB_38__::func_746(&uLocal_186, &cLocal_47, "LES_1A_IG_2", 8, 1, 0, 0))
				{
					Local_415[5 /*8*/].f_1++;
				}
			}
			else if (__LIB_0__::func_75())
			{
				__LIB_0__::func_429();
			}
			break;
		case 4:
			if (fVar2 == 1f)
			{
				if ((STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_68) && func_837(iLocal_413[9])) && func_837(iLocal_413[10]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_413[9]);
					TASK::CLEAR_PED_TASKS(iLocal_413[10]);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_413[9], &cLocal_68, "hr_greet_exitloop_gamer", Var0, Var1, 1000f, -8f, -1, 790537, 0f, 2, 1);
					TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_413[10], &cLocal_68, "hr_greet_exitloop_m", Var0, Var1, 1000f, -8f, -1, 790537, 0f, 2, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[9], false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_413[10], false, false);
					if (!PED::IS_PED_INJURED(iLocal_413[8]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_413[8]));
					}
					__LIB_16__::func_905(&uLocal_416, &cLocal_64);
					Local_415[5 /*8*/].f_6 = 0;
					Local_415[5 /*8*/].f_1++;
				}
			}
			else
			{
				PED::SET_PED_RESET_FLAG(iLocal_413[10], 129, true);
				if (__LIB_0__::func_75())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1072.9583f, -250.49545f, 43.02128f, -1069.4298f, -248.66016f, 45.83378f, 3.75f, false, true, 0))
					{
						if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_413[8]))
						{
							__LIB_0__::func_638();
						}
					}
				}
				if (func_837(iLocal_413[8]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_413[8], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_413[8], MISC::GET_HASH_KEY("ENDS_IN_RUN")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Walk"), false);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1071.804f, -241.9532f, 41.2713f, 1f, 20000, 40000f, 0.5f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1065.5614f, -241.8892f, 38.7332f, 1f, 20000, 0.25f, 1, 37.5678f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[8], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
					}
				}
				if (Local_415[5 /*8*/].f_6 == 0 && fVar2 > 0.8f)
				{
					__LIB_16__::func_857(&uLocal_416, &cLocal_68);
					__LIB_16__::func_852(&uLocal_416, joaat("prop_hacky_sack_01"));
					Local_415[5 /*8*/].f_6 = 1;
				}
			}
			break;
		case 5:
			if (iLocal_2250 >= 6)
			{
				__LIB_16__::func_857(&uLocal_416, &cLocal_72);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.4972f, -248.06621f, 43.02124f, -1069.5397f, -248.63118f, 45.52124f, 4f, false, true, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[9]))
					{
						PED::DELETE_PED(&(iLocal_413[9]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[8]))
					{
						PED::DELETE_PED(&(iLocal_413[8]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[10]))
					{
						if (!PED::IS_PED_INJURED(iLocal_413[10]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_413[10]);
						}
					}
					else
					{
						iLocal_413[10] = PED::CREATE_PED(26, iLocal_125, -1076.4138f, -248.0054f, 43.0211f, 295.9542f, true, true);
						func_840(10);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413[11]))
					{
						iLocal_413[11] = PED::CREATE_PED(26, iLocal_127, -1082.2778f, -247.6897f, 43.0211f, 0f, true, true);
						func_840(11);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413[12]))
					{
						iLocal_413[12] = PED::CREATE_PED(26, iLocal_125, -1080.5645f, -246.6328f, 43.0211f, 0f, true, true);
						func_840(12);
					}
					func_227(&(Local_414[3 /*10*/]), joaat("prop_hacky_sack_01"), -1081.5645f, -246.6328f, 43.0211f, 0);
					__LIB_16__::func_912(&uLocal_416, joaat("prop_hacky_sack_01"));
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[3 /*10*/], iLocal_413[12], PED::GET_PED_BONE_INDEX(iLocal_413[12], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
					__LIB_16__::func_905(&uLocal_416, &cLocal_68);
					Local_415[5 /*8*/].f_1++;
				}
			}
			break;
		case 6:
			if ((func_837(iLocal_413[12]) && func_837(iLocal_413[11])) && func_837(iLocal_413[10]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_413[12]);
				TASK::CLEAR_PED_TASKS(iLocal_413[10]);
				TASK::CLEAR_PED_TASKS(iLocal_413[11]);
				__LIB_0__::func_429();
				__LIB_0__::func_222(&uLocal_186, 4, iLocal_413[12], "LIInterviewer", 0, 1);
				__LIB_0__::func_222(&uLocal_186, 5, iLocal_413[10], "LIInterviewee", 0, 1);
				Local_415[5 /*8*/].f_1++;
			}
			break;
		case 7:
			if ((func_837(iLocal_413[12]) && func_837(iLocal_413[11])) && func_837(iLocal_413[10]))
			{
				if (__LIB_38__::func_746(&uLocal_186, "LS1AAUD", "LES_1A_IG_7", 8, 1, 0, 0))
				{
					iLocal_412[2] = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[11], iLocal_412[2], &cLocal_72, "interview_f", 1000f, -8f, 1, 16, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[10], iLocal_412[2], &cLocal_72, "interview_m", 1000f, -1.5f, 3, 16, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[12], iLocal_412[2], &cLocal_72, "interview_boss", 1000f, -1.5f, 3, 16, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[2], 0.1f);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_412[2], false);
					__LIB_16__::func_857(&uLocal_416, &cLocal_76);
					Local_415[5 /*8*/].f_1++;
				}
			}
			break;
		case 8:
			if ((func_837(iLocal_413[12]) && func_837(iLocal_413[11])) && func_837(iLocal_413[10]))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_414[3 /*10*/]) && ENTITY::IS_ENTITY_ATTACHED(Local_414[3 /*10*/])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_414[3 /*10*/], -1082.6685f, -247.49294f, 43.02112f, -1082.2598f, -247.4884f, 43.121117f, 0.35f, false, true, 0))
				{
					ENTITY::DETACH_ENTITY(Local_414[3 /*10*/], true, true);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_414[3 /*10*/]));
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_413[12], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_413[12], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Walk"), false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1048.6239f, -238.3391f, 43.0213f, 1f, 20000, 0.25f, 0, 288.1765f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[12], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_413[10], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_413[10], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Walk"), false);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1051.1515f, -236.258f, 43.0213f, 1f, 20000, 0.25f, 0, 237.9632f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[10], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
					}
				}
				if (STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_76))
				{
					if (fVar2 == 1f)
					{
						TASK::CLEAR_PED_TASKS(iLocal_413[11]);
						iLocal_412[2] = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var1, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[11], iLocal_412[2], &cLocal_76, "interview_exitloop_f", 1000f, -8f, 1, 16, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[2], true);
						__LIB_16__::func_905(&uLocal_416, &cLocal_72);
						Local_415[5 /*8*/].f_6 = 0;
						Local_415[5 /*8*/].f_1++;
					}
				}
			}
			break;
		case 9:
			Local_415[5 /*8*/].f_1++;
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[11]) && !PED::IS_PED_INJURED(iLocal_413[11]))
	{
		if (!iLocal_2303 && Local_415[5 /*8*/].f_1 > 8)
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_413[11], 1) < 3f)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_413[11]))
				{
					__LIB_0__::func_640(iLocal_413[11], "GENERIC_HI", 3);
					iLocal_2303 = 1;
				}
			}
		}
	}
}

void func_846()//Position - 0x984B5
{
	float fVar0;
	struct<3> Var1;
	switch (Local_415[4 /*8*/].f_1)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1075.4348f, -244.67526f, 43.02124f, -1076.7457f, -242.23326f, 47.445156f, 1.5f, false, true, 0))
			{
				__LIB_16__::func_857(&uLocal_416, &cLocal_51);
				__LIB_16__::func_857(&uLocal_416, &cLocal_55);
				__LIB_16__::func_852(&uLocal_416, iLocal_129);
				__LIB_16__::func_852(&uLocal_416, iLocal_130);
				Local_415[4 /*8*/].f_1++;
			}
			break;
		case 2:
			if ((((STREAMING::HAS_MODEL_LOADED(iLocal_126) && STREAMING::HAS_MODEL_LOADED(iLocal_125)) && STREAMING::HAS_MODEL_LOADED(iLocal_129)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_51)) && STREAMING::HAS_ANIM_DICT_LOADED(&cLocal_55))
			{
				iLocal_413[4] = PED::CREATE_PED(26, iLocal_126, -1066.2509f, -241.2682f, 38.7331f, 68.4967f, true, true);
				func_840(4);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[4], true);
				iLocal_413[5] = PED::CREATE_PED(26, iLocal_125, Local_153, Local_154.f_2, true, true);
				func_840(5);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[5], true);
				iLocal_413[6] = PED::CREATE_PED(26, iLocal_125, Local_155, Local_156.f_2, true, true);
				func_840(6);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[6], true);
				func_227(&(Local_414[24 /*10*/]), iLocal_130, PED::GET_PED_BONE_COORDS(iLocal_413[4], 28422, 0f, 0f, 0f), 0);
				__LIB_16__::func_912(&uLocal_416, iLocal_130);
				func_227(&(Local_414[25 /*10*/]), iLocal_129, -1066.8055f, -241.0743f, 39.7336f, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_414[25 /*10*/], -1066.8055f, -241.0743f, 39.7336f, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_414[25 /*10*/], true);
				func_227(&(Local_414[26 /*10*/]), iLocal_129, PED::GET_PED_BONE_COORDS(iLocal_413[5], 28422, 0f, 0f, 0f), 0);
				func_227(&(Local_414[27 /*10*/]), iLocal_129, PED::GET_PED_BONE_COORDS(iLocal_413[6], 28422, 0f, 0f, 0f), 0);
				__LIB_16__::func_912(&uLocal_416, iLocal_129);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[26 /*10*/], iLocal_413[5], PED::GET_PED_BONE_INDEX(iLocal_413[5], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[27 /*10*/], iLocal_413[6], PED::GET_PED_BONE_INDEX(iLocal_413[6], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
				iLocal_388 = 0;
				iLocal_389 = 0;
				Local_415[4 /*8*/].f_1++;
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1068.9714f, -246.41397f, 38.73314f, -1070.0914f, -244.42676f, 42.95113f, 4f, false, true, 0))
			{
				__LIB_0__::func_429();
				__LIB_0__::func_221(&uLocal_186, 4);
				__LIB_0__::func_222(&uLocal_186, 4, iLocal_413[4], "Woman", 0, 1);
				Local_415[4 /*8*/].f_1++;
			}
			break;
		case 4:
			if (__LIB_16__::func_855() && func_837(iLocal_413[4]))
			{
				if (__LIB_38__::func_746(&uLocal_186, "LS1AAUD", "LES_1A_IG_1", 8, 1, 0, 0))
				{
					iLocal_412[1] = PED::CREATE_SYNCHRONIZED_SCENE(-1065.19f, -240f, 39.65f, 0f, 0f, 27.5f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[4], iLocal_412[1], &cLocal_51, "milkLady_f", 1000f, -8f, 261, 16, 1000f, 0);
					func_847(&(Local_414[28 /*10*/]), -1065.91f, -240.78f, 39.17f, joaat("prop_cub_door_lifeblurb"), iLocal_412[1], &cLocal_51, "milklady_cupboard", 1000f);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[1], 0.2f);
					Local_415[4 /*8*/].f_1++;
				}
			}
			break;
		case 5:
			if (func_837(iLocal_413[4]))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_412[1]))
				{
					fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_412[1]);
				}
				else
				{
					fVar0 = 1f;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_413[4], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) != 1)
				{
					__LIB_0__::func_429();
					if (ENTITY::DOES_ENTITY_EXIST(Local_414[25 /*10*/]))
					{
						ENTITY::DETACH_ENTITY(Local_414[25 /*10*/], true, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_414[24 /*10*/]))
					{
						ENTITY::DETACH_ENTITY(Local_414[24 /*10*/], true, true);
					}
					TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1024, 2);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_413[4], iLocal_169);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
					Local_415[4 /*8*/].f_1++;
				}
				else if (fVar0 == 1f || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_413[4], 1) > 8.5f)
				{
					iLocal_412[1] = PED::CREATE_SYNCHRONIZED_SCENE(-1065.19f, -240f, 39.65f, 0f, 0f, 27.5f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_413[4], iLocal_412[1], &cLocal_51, "milkLady_exitLoop_f", 8f, -8f, 257, 16, 1000f, 0);
					func_847(&(Local_414[28 /*10*/]), -1065.91f, -240.78f, 39.17f, joaat("prop_cub_door_lifeblurb"), iLocal_412[1], &cLocal_51, "milklady_exitloop_cupboard", 8f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_412[1], true);
					__LIB_0__::func_638();
					if (ENTITY::DOES_ENTITY_EXIST(Local_414[24 /*10*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_414[24 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_414[24 /*10*/], true, true);
						}
						OBJECT::DELETE_OBJECT(&(Local_414[24 /*10*/]));
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_414[25 /*10*/]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[25 /*10*/], iLocal_413[4], PED::GET_PED_BONE_INDEX(iLocal_413[4], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
					}
					Local_415[4 /*8*/].f_1++;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_414[24 /*10*/]))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_414[24 /*10*/]))
						{
							if (fVar0 >= 0.119f)
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[24 /*10*/], iLocal_413[4], PED::GET_PED_BONE_INDEX(iLocal_413[4], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							}
						}
						else if (fVar0 >= 0.386f)
						{
							ENTITY::DETACH_ENTITY(Local_414[24 /*10*/], false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[24 /*10*/], true);
							OBJECT::DELETE_OBJECT(&(Local_414[24 /*10*/]));
						}
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_414[25 /*10*/]))
					{
						if (fVar0 >= 0.755f)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_414[25 /*10*/], false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_414[25 /*10*/], iLocal_413[4], PED::GET_PED_BONE_INDEX(iLocal_413[4], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							Var1 = { PED::GET_PED_BONE_COORDS(iLocal_413[4], 28422, 0f, 0f, 0f) };
						}
					}
				}
			}
			break;
	}
	if (!Local_415[4 /*8*/].f_4)
	{
		if (Local_415[4 /*8*/].f_1 > 4)
		{
			if (func_837(iLocal_413[5]))
			{
				if (!__LIB_0__::func_798(iLocal_413[5], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
				{
					if (!iLocal_388)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_a", Local_153, Local_154, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_b", Local_153, Local_154, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_b", Local_153, Local_154, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_a", Local_153, Local_154, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_b", Local_153, Local_154, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_169, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[5], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
						iLocal_388 = 1;
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_414[26 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_414[26 /*10*/], true, true);
						}
						PED::SET_PED_KEEP_TASK(iLocal_413[5], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 3000);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[5], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_413[5], PLAYER::PLAYER_PED_ID(), 5000, 2048, 4);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_413[5]));
					}
				}
			}
			if (func_837(iLocal_413[6]))
			{
				if (!__LIB_0__::func_798(iLocal_413[6], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
				{
					if (!iLocal_389)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_b", Local_155, Local_156, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_c", Local_155, Local_156, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_b", Local_155, Local_156, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_a", Local_155, Local_156, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(0, &cLocal_55, "idle_b", Local_155, Local_156, 8f, -8f, -1, 0, 0f, 2, 0);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_169, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[6], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
						iLocal_389 = 1;
					}
					else
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_414[27 /*10*/]))
						{
							ENTITY::DETACH_ENTITY(Local_414[27 /*10*/], true, true);
						}
						PED::SET_PED_KEEP_TASK(iLocal_413[6], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_STAND_STILL(0, 3000);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[6], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_413[6], PLAYER::PLAYER_PED_ID(), 5000, 2048, 4);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_413[6]));
					}
				}
			}
		}
	}
}

void func_847(var uParam0, struct<3> Param1, int iParam2, float fParam3, char* sParam4, char* sParam5, float fParam6)//Position - 0x98E97
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_4 = { Param1 };
	uParam0->f_3 = iParam2;
	uParam0->f_2 = 1;
	ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(Param1, 1f, iParam2, fParam3, sParam5, sParam4, fParam6, -8f, 0, 1000f);
}

void func_848()//Position - 0x98EDC
{
	float fVar0;
	bool bVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[3]) && !PED::IS_PED_INJURED(iLocal_413[3]))
	{
		if (1 == Local_415[3 /*8*/].f_1)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413[3], true);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, &cLocal_43, 3, 256, -1);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			TASK::TASK_ACHIEVE_HEADING(0, 160f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_413[3], iLocal_169);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
			PED::FORCE_PED_MOTION_STATE(iLocal_413[3], joaat("MotionState_Walk"), false, 1, false);
			__LIB_16__::func_857(&uLocal_416, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base");
			__LIB_16__::func_857(&uLocal_416, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a");
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
			{
				case 0:
					StringCopy(&Local_351, "LS1A_WLKCT2", 24);
					break;
				case 1:
					StringCopy(&Local_351, "LS1A_WLKCT3", 24);
					break;
			}
			StringCopy(&cLocal_355, "", 24);
			iLocal_382 = 0;
			iLocal_387 = 0;
			iLocal_2260 = 0;
			Local_415[3 /*8*/].f_7 = 1;
			Local_415[3 /*8*/] = 0;
			Local_415[3 /*8*/].f_1 = 2;
		}
		else
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_413[3], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			if (fVar0 < 36f)
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_413[3], -1, 0, 4);
			}
			else if (fVar0 >= 100f)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			if (SYSTEM::VDIST2(-1063.57f, -241.33f, 39.91f, ENTITY::GET_ENTITY_COORDS(iLocal_413[3], true)) < 25f)
			{
				PED::SET_PED_RESET_FLAG(iLocal_413[3], 60, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_413[3], 104, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_413[3], 104, false);
			}
			switch (iLocal_382)
			{
				case 0:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_413[3], -1061.159f, -240.23051f, 38.73318f, -1066.04f, -242.66113f, 41.85818f, 2.9375f, false, true, 0))
					{
						bVar1 = true;
					}
					break;
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_413[3], -1066.6577f, -247.58345f, 38.73318f, -1070.3088f, -243.85165f, 43.312668f, 2.9375f, false, true, 0))
					{
						bVar1 = true;
					}
					break;
				case 2:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_413[3], -1074.7173f, -242.90964f, 42.689636f, -1079.1516f, -245.2583f, 46.14628f, 7.0625f, false, true, 0))
					{
						bVar1 = true;
					}
					break;
				case 3:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_413[3], -1075.3632f, -248.93542f, 43.02128f, -1070.2664f, -250.37108f, 46.14628f, 7.0625f, false, true, 0))
					{
						bVar1 = true;
					}
					break;
			}
			switch (Local_415[3 /*8*/].f_1)
			{
				case 2:
					if (!__LIB_0__::func_798(iLocal_413[3], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1))
					{
						Local_415[3 /*8*/].f_1 = 5;
					}
					else if (bVar1)
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_413[3], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 25f)
						{
							iLocal_382++;
						}
						else
						{
							TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_413[3], true, false);
							if (!iLocal_2260)
							{
								if (__LIB_0__::func_75())
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_413[3]))
									{
										Local_351 = { __LIB_0__::func_486() };
										cLocal_355 = { __LIB_0__::func_485() };
									}
									__LIB_0__::func_638();
								}
							}
							Local_415[3 /*8*/].f_1 = 3;
						}
					}
					break;
				case 3:
				case 4:
					if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(iLocal_413[3]))
					{
						if (bVar1)
						{
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164 && fVar0 < 25f)
							{
								TASK::WAYPOINT_PLAYBACK_RESUME(iLocal_413[3], false, -1, 0);
								if (!iLocal_2260)
								{
									if (__LIB_0__::func_75())
									{
										__LIB_0__::func_638();
									}
								}
								Local_415[3 /*8*/].f_1 = 2;
								iLocal_382++;
							}
						}
					}
					break;
				case 5:
					if (!__LIB_0__::func_798(iLocal_413[3], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1) && !__LIB_0__::func_798(iLocal_413[3], joaat("SCRIPT_TASK_PLAY_ANIM"), 1))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_169);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@base", "base", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "AMB@WORLD_HUMAN_STAND_IMPATIENT@MALE@No_Sign@idle_a", "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::SET_SEQUENCE_TO_REPEAT(iLocal_169, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_169);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_413[3], iLocal_169);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_169);
					}
					break;
			}
			if (!iLocal_2260)
			{
				switch (Local_415[3 /*8*/].f_1)
				{
					case 2:
						if (iLocal_382 == 4)
						{
							if (__LIB_16__::func_855())
							{
								if (__LIB_38__::func_746(&uLocal_186, "LS1AAUD", "LS1A_POINT", 8, 0, 0, 0))
								{
									StringCopy(&Local_351, "", 24);
									StringCopy(&cLocal_355, "", 24);
									iLocal_382++;
								}
							}
							else if (__LIB_0__::func_75())
							{
								__LIB_0__::func_638();
							}
						}
						else if (iLocal_387 && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_351))
						{
							if (__LIB_16__::func_855())
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_355))
								{
									if (__LIB_38__::func_746(&uLocal_186, "LS1AAUD", &Local_351, 8, 0, 0, 0))
									{
										StringCopy(&Local_351, "", 24);
									}
								}
								else if (__LIB_41__::func_47(&uLocal_186, "LS1AAUD", &Local_351, &cLocal_355, 8, 0, 0))
								{
									StringCopy(&Local_351, "", 24);
									StringCopy(&cLocal_355, "", 24);
								}
							}
						}
						break;
					case 3:
					case 4:
						if (fVar0 <= 25f || (fVar0 < 144f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164))
						{
							if ((MISC::GET_GAME_TIMER() - Local_415[3 /*8*/]) >= 7000)
							{
								if (!iLocal_2260)
								{
									if (__LIB_16__::func_855())
									{
										if (Local_415[3 /*8*/].f_1 == 3)
										{
											if (__LIB_38__::func_746(&uLocal_186, "LS1AAUD", "LS1A_LFTB", 8, 0, 0, 0))
											{
												Local_415[3 /*8*/] = MISC::GET_GAME_TIMER();
												Local_415[3 /*8*/].f_1 = 4;
											}
										}
										else if (__LIB_38__::func_746(&uLocal_186, "LS1AAUD", "LS1A_COMON", 8, 0, 0, 0))
										{
											Local_415[3 /*8*/] = MISC::GET_GAME_TIMER();
										}
									}
								}
								else
								{
									Local_415[3 /*8*/] = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!iLocal_2260)
						{
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_638();
							}
						}
						break;
					}
				}
		}
	}
	else
	{
		func_267(3);
	}
}

void func_852()//Position - 0x996A7
{
	int iVar0;
	switch (Local_415[2 /*8*/].f_1)
	{
		case 1:
			if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 9)
			{
				__LIB_17__::func_622(PLAYER::PLAYER_PED_ID(), 9, 0);
				Local_415[2 /*8*/].f_1 = 2;
			}
			else
			{
				__LIB_17__::func_622(PLAYER::PLAYER_PED_ID(), 9, 15);
				Local_415[2 /*8*/].f_1 = 3;
			}
			break;
		case 2:
			if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) != 9 || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ((__LIB_0__::func_719() && !__LIB_0__::func_921(16)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())))
			{
				func_413(PLAYER::PLAYER_PED_ID(), 9, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				__LIB_17__::func_622(PLAYER::PLAYER_PED_ID(), 9, 15);
				if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					Local_415[2 /*8*/].f_1 = 4;
				}
				else
				{
					Local_415[2 /*8*/].f_1++;
				}
			}
			break;
		case 3:
			if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 9 || (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !__LIB_0__::func_719()))
			{
				func_413(PLAYER::PLAYER_PED_ID(), 9, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				__LIB_17__::func_622(PLAYER::PLAYER_PED_ID(), 9, 0);
				Local_415[2 /*8*/].f_1 = (Local_415[2 /*8*/].f_1 - 1);
			}
			break;
		case 4:
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_415[2 /*8*/].f_1 = 2;
			}
			break;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 9) == 9 && iVar0 == joaat("WEAPON_UNARMED"))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED("MOVE_P_M_ZERO_RUCKSACK"))
		{
			PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "MOVE_P_M_ZERO_RUCKSACK");
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	else
	{
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}
}

void func_854()//Position - 0x99895
{
	switch (Local_415[1 /*8*/].f_1)
	{
		case 1:
			if ((((((((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_164 && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-1563127729) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-1563127729)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(759145763) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(759145763)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-84399179) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-84399179)) <= 0.1f) && OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(-461898059) == 1) && MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(-461898059)) <= 0.1f)
			{
				iLocal_371 = MISC::GET_GAME_TIMER() + 5000;
				Local_415[1 /*8*/].f_1++;
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_371 || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_221(&uLocal_186, 8);
				__LIB_0__::func_222(&uLocal_186, 8, 0, "LESTER", 0, 1);
				Local_415[1 /*8*/].f_1++;
			}
			break;
		case 3:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_38__::func_747(&uLocal_186, 12, &cLocal_47, "LES1A_01", 12, 1, 0, 0, 0))
				{
					Local_415[1 /*8*/].f_1++;
				}
			}
			break;
		case 4:
			if (__LIB_13__::func_810())
			{
				Local_415[1 /*8*/].f_1++;
			}
			break;
		case 5:
			if (!__LIB_13__::func_810())
			{
				__LIB_0__::func_221(&uLocal_186, 8);
				func_267(1);
			}
			break;
	}
}

void func_857()//Position - 0x99AD2
{
	switch (Local_415[0 /*8*/].f_1)
	{
		case 1:
			iLocal_371 = 0;
			Local_415[0 /*8*/].f_1++;
			break;
		case 2:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_371 = MISC::GET_GAME_TIMER() + 5000;
				Local_415[0 /*8*/].f_1 = 4;
			}
			else if (__LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), 127.7614f, -209.5459f, 53.55f, 1) >= 30f)
			{
				iLocal_371 = MISC::GET_GAME_TIMER() + 15000;
				Local_415[0 /*8*/].f_1 = 3;
			}
			break;
		case 3:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_415[0 /*8*/].f_1 = (Local_415[0 /*8*/].f_1 - 1);
			}
		case 4:
			if (MISC::GET_GAME_TIMER() > iLocal_371)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					Local_415[0 /*8*/].f_1 = 7;
				}
				else
				{
					__LIB_0__::func_221(&uLocal_186, 8);
					__LIB_0__::func_222(&uLocal_186, 8, 0, "LESTER", 0, 1);
					if (!__LIB_0__::func_75())
					{
						if (__LIB_38__::func_747(&uLocal_186, 12, &cLocal_47, "LES_1A_CALL", 8, 1, 0, 0, 0))
						{
							Local_415[0 /*8*/].f_1 = 5;
						}
					}
				}
			}
			break;
		case 5:
			if (__LIB_13__::func_810())
			{
				Local_415[0 /*8*/].f_1++;
			}
			break;
		case 6:
			if (!__LIB_13__::func_810())
			{
				if (__LIB_1__::func_859() || __LIB_16__::func_599())
				{
					func_836(0, 10000);
					Local_415[0 /*8*/].f_1++;
				}
				else
				{
					__LIB_0__::func_221(&uLocal_186, 8);
					func_267(0);
				}
			}
			break;
		case 7:
			func_510(12, "LES1A_TXT2" /* GXT: Blend in with the hipster developer d bags, find the prototype, and fit it with the device in ur bag. */, 1, 1, 0, 0, 0, 1, 0, 1);
			func_267(0);
			break;
	}
}

void func_860()//Position - 0x99CC0
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (iLocal_2250 == 0)
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			__LIB_0__::func_377(iVar1, -1);
			__LIB_0__::func_505(iVar1, -1);
		}
		else
		{
			__LIB_0__::func_377(0, -1);
			__LIB_0__::func_505(0, -1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[2]))
	{
		if (PED::IS_PED_INJURED(iLocal_413[2]) || FIRE::IS_ENTITY_ON_FIRE(iLocal_413[2]))
		{
			func_877(0);
		}
	}
	if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1010.5142f, -215.74692f, 36.9178f, -1136.7448f, -279.6932f, 66.87083f, 88.4375f, false, true, 0) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || MISC::IS_BULLET_IN_BOX(-1109.98f, -263.37f, 37.73f, -1008.46f, -216.71f, 56.92f, true)) || MISC::IS_PROJECTILE_IN_AREA(-1109.98f, -263.37f, 37.73f, -1008.46f, -216.71f, 56.92f, true))
	{
		func_877(1);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164)
	{
		func_877(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[3]) && PED::IS_PED_INJURED(iLocal_413[3]))
	{
		func_877(1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1010.5142f, -215.74692f, 36.9178f, -1136.7448f, -279.6932f, 66.87083f, 88.4375f, false, true, 0) && ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && (((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) || VEHICLE::IS_VEHICLE_SIREN_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1))
	{
		func_877(1);
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1043.0898f, -228.1496f, 38.013393f, -1047.866f, -230.59686f, 48.139465f, 7.875f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_877(1);
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-1045.6338f, -230.61554f, 38.093407f, 2f) && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-1082.1836f, -259.8893f, 36.81472f, 2f))
	{
		func_877(1);
	}
	if ((iLocal_2250 == 1 && iLocal_395) && !__LIB_0__::func_719())
	{
		if (((((__LIB_13__::func_829(__LIB_17__::func_706(0), 3, 70) || __LIB_13__::func_829(__LIB_17__::func_706(0), 3, 71)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 3, 72)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 3, 73)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 3, 74)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 3, 75))
		{
			bVar2 = true;
		}
		if (((((((((((((((((((((((((((((((((((((__LIB_13__::func_829(__LIB_17__::func_706(0), 4, 41) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 42)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 43)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 44)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 45)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 45)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 96)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 97)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 98)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 99)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 100)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 101)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 102)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 103)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 104)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 105)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 106)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 107)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 108)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 109)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 110)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 111)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 55)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 56)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 57)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 58)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 59)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 60)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 61)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 62)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 63)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 64)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 65)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 66)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 67)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 68)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 69)) || __LIB_13__::func_829(__LIB_17__::func_706(0), 4, 70))
		{
			bVar3 = true;
		}
		if (!bVar2 && !bVar3)
		{
			if (__LIB_12__::func_295(__LIB_33__::func_611()) < iLocal_396)
			{
				func_877(4);
			}
		}
		else if (!bVar2)
		{
			if (__LIB_12__::func_295(__LIB_33__::func_611()) < iLocal_397)
			{
				func_877(4);
			}
		}
		else if (!bVar3)
		{
			if (__LIB_12__::func_295(__LIB_33__::func_611()) < iLocal_398)
			{
				func_877(4);
			}
		}
	}
	if (iLocal_2250 <= 2)
	{
		if ((iLocal_2250 > 0 && !__LIB_0__::func_545(16)) && iLocal_363 == 0)
		{
			func_877(3);
		}
		if (iLocal_2251 < 4 && iLocal_2251 != -1)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164)
			{
				func_877(1);
			}
		}
	}
	if (iLocal_2250 >= 2)
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_113))
			{
				AUDIO::START_AUDIO_SCENE(&cLocal_113);
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&cLocal_113))
		{
			AUDIO::STOP_AUDIO_SCENE(&cLocal_113);
		}
	}
	if (iLocal_2250 >= 3)
	{
		iVar0 = 3;
		while (iVar0 <= 26)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_413[iVar0]))
				{
					func_877(1);
				}
			}
			iVar0++;
		}
		if (iLocal_2250 <= 5)
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != iLocal_164)
			{
				if (iLocal_168 < 0)
				{
					iLocal_168 = MISC::GET_GAME_TIMER();
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_168) > 3000)
				{
					if (iLocal_2250 == 3)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_2253) > 5000)
						{
							func_877(2);
						}
					}
					else
					{
						func_877(2);
					}
				}
			}
			else
			{
				iLocal_168 = -1;
			}
		}
		if (iLocal_2250 <= 6)
		{
			if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
			{
				func_877(1);
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_877(1);
			}
			if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
			{
				func_877(1);
			}
		}
	}
	if (iLocal_2250 >= 7)
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_166)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_877(8);
			}
		}
	}
	if (iLocal_367)
	{
		func_469();
	}
	if (iLocal_367)
	{
		if (!iLocal_368)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
		if (!__LIB_1__::func_861())
		{
			__LIB_0__::func_671(1);
		}
	}
	else if (iLocal_2250 < 8)
	{
		if (__LIB_1__::func_861())
		{
			__LIB_0__::func_671(0);
		}
	}
	iVar4 = iLocal_2250;
	if (((((iVar4 == 3 || iVar4 == 4) || iVar4 == 5) || iVar4 == 6) || iVar4 == 8) || iVar4 == 9)
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	}
}

void func_865()//Position - 0x9A6F2
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	struct<14> Var3;
	int iVar4;
	MISC::SET_MISSION_FLAG(true);
	if (__LIB_0__::func_323() || __LIB_0__::func_2(0))
	{
		if (__LIB_0__::func_2(0))
		{
			__LIB_11__::func_816(6, 0);
		}
		if (__LIB_0__::func_323())
		{
			iLocal_2256 = __LIB_0__::func_344();
			if (Global_94618)
			{
				iLocal_2256++;
			}
		}
		else if (__LIB_0__::func_2(0))
		{
			Global_100441.f_12[0] = -1;
			Global_100441.f_12[1] = -1;
			Global_100441.f_12[2] = -1;
			iLocal_2256 = 0;
		}
		switch (iLocal_2256)
		{
			case 0:
				iLocal_2256 = 0;
				break;
			case 1:
				iLocal_2256 = 1;
				break;
			case 2:
				iLocal_2256 = 2;
				break;
			case 3:
				iLocal_2256 = 3;
				break;
			case 4:
				iLocal_2256 = 5;
				break;
			case 5:
				iLocal_2256 = 6;
				break;
			case 6:
				iLocal_2256 = 7;
				break;
			case 7:
				iLocal_2256 = 8;
				break;
			case 8:
				iLocal_2256 = 10;
				break;
		}
		if (__LIB_0__::func_323())
		{
			func_808(iLocal_2256, &Var0, &uVar1);
			__LIB_16__::func_3(Var0, uVar1, 1, 0);
		}
		iLocal_2255 = 1;
	}
	else
	{
		Global_100441.f_12[0] = -1;
		Global_100441.f_12[1] = -1;
		Global_100441.f_12[2] = -1;
	}
	__LIB_0__::func_544(101, 1, 0, 1, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("LEST1", 0);
	func_623(PLAYER::PLAYER_PED_ID());
	func_622();
	iLocal_413[0] = PLAYER::PLAYER_PED_ID();
	__LIB_16__::func_596(16);
	__LIB_17__::func_154(16, 1, 0);
	iLocal_2263[0] = 8;
	iLocal_2263[1] = 2;
	iLocal_2263[2] = 14;
	iLocal_2263[3] = 5;
	iLocal_2263[4] = 11;
	iLocal_2263[5] = 17;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_2262[0 /*6*/] = 2;
		Local_2262[1 /*6*/] = 0;
		Local_2262[2 /*6*/] = 5;
		Local_2262[3 /*6*/] = 7;
		Local_2262[4 /*6*/] = 1;
		Local_2262[5 /*6*/] = 3;
		Local_2262[6 /*6*/] = 4;
		Local_2262[7 /*6*/] = 11;
		Local_2262[8 /*6*/] = 8;
		Local_2262[9 /*6*/] = 9;
		Local_2262[10 /*6*/] = 10;
		Local_2262[11 /*6*/] = 6;
		Local_2262[0 /*6*/].f_2 = 0.1f;
		Local_2262[0 /*6*/].f_3 = 0.20833333f;
		Local_2262[1 /*6*/].f_2 = 0.13671875f;
		Local_2262[1 /*6*/].f_3 = 0.06944445f;
		Local_2262[2 /*6*/].f_2 = 0.078125f;
		Local_2262[2 /*6*/].f_3 = 0.1388889f;
		Local_2262[3 /*6*/].f_2 = 0.3125f;
		Local_2262[3 /*6*/].f_3 = 0.05f;
		Local_2262[4 /*6*/].f_2 = 0.5f;
		Local_2262[4 /*6*/].f_3 = 0.05f;
		Local_2262[5 /*6*/].f_2 = 0.4296875f;
		Local_2262[5 /*6*/].f_3 = 0.4f;
		Local_2262[6 /*6*/].f_2 = 0.1171875f;
		Local_2262[6 /*6*/].f_3 = 0.44444445f;
		Local_2262[7 /*6*/].f_2 = 0.390625f;
		Local_2262[7 /*6*/].f_3 = 0f;
		Local_2262[8 /*6*/].f_2 = 0.5078125f;
		Local_2262[8 /*6*/].f_3 = 0.41666666f;
		Local_2262[9 /*6*/].f_2 = 0.025f;
		Local_2262[9 /*6*/].f_3 = 0.45f;
		Local_2262[10 /*6*/].f_2 = 0.3125f;
		Local_2262[10 /*6*/].f_3 = 0.20833333f;
		Local_2262[11 /*6*/].f_2 = 0.3515625f;
		Local_2262[11 /*6*/].f_3 = 0.2777778f;
	}
	else
	{
		Local_2262[0 /*6*/] = 2;
		Local_2262[1 /*6*/] = 5;
		Local_2262[2 /*6*/] = 3;
		Local_2262[3 /*6*/] = 4;
		Local_2262[4 /*6*/] = 8;
		Local_2262[5 /*6*/] = 9;
		Local_2262[6 /*6*/] = 10;
		Local_2262[7 /*6*/] = 6;
		Local_2262[0 /*6*/].f_2 = 0.0390625f;
		Local_2262[0 /*6*/].f_3 = 0.2083f;
		Local_2262[1 /*6*/].f_2 = 0.078125f;
		Local_2262[1 /*6*/].f_3 = 0.1388f;
		Local_2262[2 /*6*/].f_2 = 0.4296875f;
		Local_2262[2 /*6*/].f_3 = 0.5f;
		Local_2262[3 /*6*/].f_2 = 0.1171875f;
		Local_2262[3 /*6*/].f_3 = 0.4444f;
		Local_2262[4 /*6*/].f_2 = 0.35f;
		Local_2262[4 /*6*/].f_3 = 0.4166f;
		Local_2262[5 /*6*/].f_2 = 0.05859375f;
		Local_2262[5 /*6*/].f_3 = 0.4861f;
		Local_2262[6 /*6*/].f_2 = 0.3125f;
		Local_2262[6 /*6*/].f_3 = 0.2083f;
		Local_2262[7 /*6*/].f_2 = 0.3515625f;
		Local_2262[7 /*6*/].f_3 = 0.2777f;
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	iLocal_2278 = 0;
	iVar2 = 0;
	while (iVar2 <= 11)
	{
		if (Local_2262[iVar2 /*6*/] != -1)
		{
			Local_2262[iVar2 /*6*/].f_1 = 0;
			Local_2262[iVar2 /*6*/].f_5 = AUDIO::GET_SOUND_ID();
			Local_2262[iVar2 /*6*/].f_4 = 0;
			iLocal_2278++;
		}
		else
		{
			Local_2262[iVar2 /*6*/].f_1 = 1;
		}
		iVar2++;
	}
	iLocal_2272 = AUDIO::GET_SOUND_ID();
	iLocal_165 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1273.7292f, -1712.0665f, 53.7715f, "v_lesters");
	iLocal_164 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1047.5997f, -232.3503f, 38.0135f, "v_faceoffice");
	iLocal_166 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-803.1297f, 171.9331f, 71.8348f, "v_michael");
	uLocal_369 = __LIB_0__::func_473(0);
	func_869(0, -1048.28f, -236.82f, 44.17f, joaat("v_ilev_fib_door2"), 0);
	func_869(1, -1047.08f, -239.12f, 44.17f, joaat("v_ilev_fib_door2"), 0);
	func_869(2, -1063.84f, -240.65f, 43.02f, joaat("v_ilev_fb_sl_door01"), 0);
	func_869(3, -1057.77f, -237.48f, 43.02f, joaat("v_ilev_fb_sl_door01"), 0);
	func_868(2, 1, 0f, 0);
	func_868(3, 1, 0f, 0);
	func_868(0, 1, 0f, 0);
	func_868(1, 1, 0f, 0);
	__LIB_41__::func_48(128, 1);
	__LIB_41__::func_48(129, 1);
	__LIB_41__::func_48(130, 1);
	__LIB_41__::func_48(131, 1);
	func_801();
	iVar2 = 0;
	while (iVar2 < iLocal_412)
	{
		iLocal_412[iVar2] = -1;
		iVar2++;
	}
	if (__LIB_0__::func_2(0))
	{
		__LIB_0__::func_54(1, 1);
	}
	else
	{
		__LIB_0__::func_54(0, 1);
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_124, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("CS_LifeInvad_01"), true);
	PED::ADD_RELATIONSHIP_GROUP("REL_FREIND", &iLocal_361);
	PED::ADD_RELATIONSHIP_GROUP("Family", &iLocal_362);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_361);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_362);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_361, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_361, iLocal_362);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_362);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_362, iLocal_361);
	Global_75595 = 1;
	iVar4 = 70;
	while (iVar4 <= 75)
	{
		Var3 = { func_867(iVar4) };
		if (Var3.f_7 > iLocal_397)
		{
			iLocal_397 = Var3.f_7;
		}
		iVar4++;
	}
	iVar4 = 41;
	while (iVar4 <= 45)
	{
		Var3 = { func_866(iVar4) };
		if (Var3.f_7 > iLocal_398)
		{
			iLocal_398 = Var3.f_7;
		}
		iVar4++;
	}
	iLocal_396 = (iLocal_397 + iLocal_398);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	Local_146[0 /*3*/] = { -802.25275f, 173.03743f, 74.35708f };
	Local_147[0 /*3*/] = { 0.914659f, 0f, -69.59251f };
	Local_146[1 /*3*/] = { -804.1746f, 172.36208f, 74.32456f };
	Local_147[1 /*3*/] = { 0.914659f, 0f, -71.189026f };
	Local_146[2 /*3*/] = { -804.1575f, 170.53049f, 73.04112f };
	Local_147[2 /*3*/] = { 14.629187f, 0f, -54.17662f };
	Local_146[3 /*3*/] = { -805.6417f, 171.1509f, 73.2577f };
	Local_147[3 /*3*/] = { 2.1993f, 0f, -68.9021f };
	__LIB_0__::func_222(&uLocal_186, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
}

struct<14> func_866(int iParam0)//Position - 0x9AE7D
{
	__LIB_0__::func_41();
	__LIB_12__::func_891(iParam0);
	return Global_78130[0 /*14*/];
}

struct<14> func_867(int iParam0)//Position - 0x9AE99
{
	__LIB_0__::func_41();
	__LIB_12__::func_898(iParam0);
	return Global_78130[0 /*14*/];
}

void func_868(int iParam0, bool bParam1, float fParam2, int iParam3)//Position - 0x9AEB5
{
	if (Local_167[iParam0 /*7*/] != 0)
	{
		if (iParam3 <= 0)
		{
			if (fParam2 != 100f)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_167[iParam0 /*7*/], fParam2, false, true);
			}
			if (bParam1)
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iParam0 /*7*/], 1, false, true);
			}
			else
			{
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iParam0 /*7*/], 0, false, true);
			}
			Local_167[iParam0 /*7*/].f_6 = 0;
			Local_167[iParam0 /*7*/].f_5 = 0;
		}
		else if (fParam2 != 100f)
		{
			Local_167[iParam0 /*7*/].f_1 = 1;
			Local_167[iParam0 /*7*/].f_4 = bParam1;
			Local_167[iParam0 /*7*/].f_2 = fParam2;
			Local_167[iParam0 /*7*/].f_6 = MISC::GET_GAME_TIMER();
			Local_167[iParam0 /*7*/].f_5 = iParam3;
			Local_167[iParam0 /*7*/].f_3 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_167[iParam0 /*7*/]);
		}
	}
}

void func_869(int iParam0, struct<3> Param1, int iParam2, bool bParam3)//Position - 0x9AF7D
{
	char cVar0[24];
	StringCopy(&cVar0, "LESTER1A_DOOR_", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	Local_167[iParam0 /*7*/] = MISC::GET_HASH_KEY(&cVar0);
	OBJECT::ADD_DOOR_TO_SYSTEM(Local_167[iParam0 /*7*/], iParam2, Param1, false, true, false);
	if (bParam3)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_167[iParam0 /*7*/], 1f, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iParam0 /*7*/], 6, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_167[iParam0 /*7*/], 4, true, false);
	}
}

void func_877(int iParam0)//Position - 0x9B226
{
	char* sVar0;
	if (iParam0 == 10)
	{
		func_893();
		func_8();
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				sVar0 = "LES1A_F1";
				break;
			case 2:
				sVar0 = "LES1A_F2";
				break;
			case 3:
				sVar0 = "LES1A_F3";
				break;
			case 4:
				sVar0 = "LES1A_F5";
				break;
			case 0:
				sVar0 = "LES1A_F4";
				break;
			case 5:
				sVar0 = "F_DETONATE";
				break;
			case 6:
				sVar0 = "F_TRACY_DEAD";
				break;
			case 7:
				sVar0 = "F_TRACEY_FLED";
				break;
			case 8:
				sVar0 = "F_WANT_HOME";
				break;
			case 9:
				sVar0 = "LES1A_FF";
				break;
			case 10:
			default:
				sVar0 = "LES1A_DF";
				break;
		}
		func_884(sVar0);
		while (!__LIB_0__::func_223())
		{
			SYSTEM::WAIT(0);
		}
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_164)
		{
			__LIB_0__::func_507(-1048.4845f, -219.1426f, 36.8756f, 234.6454f);
			__LIB_14__::func_555(Local_157, fLocal_159);
		}
		else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_165)
		{
			__LIB_0__::func_507(1282.1167f, -1736.8835f, 51.2234f, 22.2041f);
		}
		else if ((iLocal_2250 == 8 || iLocal_2250 == 9) || iLocal_2250 == 10)
		{
			__LIB_0__::func_507(-802.86f, 172.6933f, 71.8447f, 286.1387f);
		}
		__LIB_17__::func_154(16, 0, 0);
		if (iParam0 == 9)
		{
			func_814();
		}
		func_878();
		func_8();
		__LIB_10__::func_910();
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_878()//Position - 0x9B3C7
{
	__LIB_15__::func_986(&Global_103950);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_628(PLAYER::PLAYER_PED_ID(), &(Global_100166[__LIB_25__::func_663(PLAYER::PLAYER_PED_ID()) /*65*/]), 0, 0, 1, 0);
	}
}

void func_884(char* sParam0)//Position - 0x9B5B3
{
	__LIB_0__::func_381(sParam0);
	func_885(0);
}

void func_885(int iParam0)//Position - 0x9B5C6
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_886(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_886(int iParam0)//Position - 0x9B60B
{
	int iVar0;
	int iVar1;
	__LIB_37__::func_360();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_887(&(Global_113386.f_2363.f_539), iVar1);
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

void func_887(var uParam0, int iParam1)//Position - 0x9B71B
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
			if (!func_889(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_889(int iParam0, var uParam1, float fParam2)//Position - 0x9B8EF
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
			return func_889(8, uParam1, fParam2);
			break;
		case 10:
			return func_889(8, uParam1, fParam2);
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

void func_893()//Position - 0x9C3D2
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
				if (!func_886(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_37__::func_360();
		}
	}
}

