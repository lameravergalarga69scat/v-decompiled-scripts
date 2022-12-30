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
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 1000;
	var uLocal_31 = 1000;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 4;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 4;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 4;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 4;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<20> Local_93 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<2> Local_108 = { 0, 0 } ;
	int iLocal_109 = 0;
	int iLocal_110[3] = { 0, 0, 0 };
	int iLocal_111 = 0;
	int iLocal_112[2] = { 0, 0 };
	struct<14> Local_113[10];
	struct<14> Local_114[10];
	struct<16> Local_115[8];
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119[3] = { 0, 0, 0 };
	struct<4> Local_120[5];
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132[2] = { 0, 0 };
	int iLocal_133[2] = { 0, 0 };
	int iLocal_134[4] = { 0, 0, 0, 0 };
	int iLocal_135[3] = { 0, 0, 0 };
	int iLocal_136[1] = { 0 };
	int iLocal_137 = 0;
	int iLocal_138[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149[3] = { 0, 0, 0 };
	var uLocal_150[2] = { 0, 0 };
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153[1] = { 0 };
	var uLocal_154[3] = { 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	var uLocal_159[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 21;
	var uLocal_168 = 6;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	int iLocal_172[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_174[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_175[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_176[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_177[1] = { 0 };
	int iLocal_178[2] = { 0, 0 };
	int iLocal_179[1] = { 0 };
	int iLocal_180 = 0;
	bool bLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	bool bLocal_186 = 0;
	bool bLocal_187[3] = { 0, 0, 0 };
	int iLocal_188[3] = { 0, 0, 0 };
	int iLocal_189[3] = { 0, 0, 0 };
	bool bLocal_190[3] = { 0, 0, 0 };
	int iLocal_191[3] = { 0, 0, 0 };
	bool bLocal_192[3] = { 0, 0, 0 };
	int iLocal_193[3] = { 0, 0, 0 };
	int iLocal_194[3] = { 0, 0, 0 };
	int iLocal_195 = 0;
	bool bLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	bool bLocal_205 = 0;
	bool bLocal_206 = 0;
	int iLocal_207 = 0;
	bool bLocal_208 = 0;
	bool bLocal_209 = 0;
	bool bLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	bool bLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	bool bLocal_218 = 0;
	bool bLocal_219 = 0;
	int iLocal_220 = 0;
	bool bLocal_221 = 0;
	int iLocal_222 = 0;
	bool bLocal_223 = 0;
	bool bLocal_224 = 0;
	bool bLocal_225 = 0;
	bool bLocal_226 = 0;
	int iLocal_227 = 0;
	bool bLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	bool bLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239[2] = { 0, 0 };
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	int iLocal_243 = 0;
	bool bLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	bool bLocal_250 = 0;
	bool bLocal_251 = 0;
	bool bLocal_252 = 0;
	int iLocal_253 = 0;
	bool bLocal_254 = 0;
	bool bLocal_255 = 0;
	int iLocal_256 = 0;
	bool bLocal_257 = 0;
	bool bLocal_258 = 0;
	bool bLocal_259 = 0;
	bool bLocal_260 = 0;
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	bool bLocal_263 = 0;
	int iLocal_264[1] = { 0 };
	bool bLocal_265 = 0;
	bool bLocal_266 = 0;
	bool bLocal_267 = 0;
	bool bLocal_268 = 0;
	int iLocal_269 = 0;
	bool bLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	bool bLocal_275 = 0;
	int iLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	bool bLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	bool bLocal_284 = 0;
	bool bLocal_285 = 0;
	bool bLocal_286 = 0;
	bool bLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	bool bLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	bool bLocal_297 = 0;
	int iLocal_298 = 0;
	bool bLocal_299 = 0;
	bool bLocal_300 = 0;
	bool bLocal_301 = 0;
	int iLocal_302 = 0;
	bool bLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	bool bLocal_314 = 0;
	bool bLocal_315 = 0;
	bool bLocal_316 = 0;
	bool bLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	struct<3> Local_327[1];
	struct<3> Local_328[1];
	struct<3> Local_329[3];
	struct<3> Local_330[3];
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	struct<3> Local_333[1];
	struct<3> Local_334[3];
	struct<3> Local_335 = { 0, 0, 0 } ;
	struct<3> Local_336[3];
	struct<3> Local_337[3];
	struct<3> Local_338 = { 0, 0, 0 } ;
	float fLocal_339 = 0f;
	float fLocal_340 = 0f;
	float fLocal_341 = 0f;
	float fLocal_342 = 0f;
	float fLocal_343 = 0f;
	float fLocal_344 = 0f;
	var uLocal_345[1] = { 0 };
	var uLocal_346[1] = { 0 };
	var uLocal_347[3] = { 0, 0, 0 };
	var uLocal_348[3] = { 0, 0, 0 };
	float fLocal_349 = 0f;
	float fLocal_350 = 0f;
	float fLocal_351 = 0f;
	float fLocal_352 = 0f;
	float fLocal_353[3] = { 0f, 0f, 0f };
	float fLocal_354[3] = { 0f, 0f, 0f };
	float fLocal_355[3] = { 0f, 0f, 0f };
	float fLocal_356 = 0f;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365[3] = { 0, 0, 0 };
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	var uLocal_380[3] = { 0, 0, 0 };
	int iLocal_381[3] = { 0, 0, 0 };
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	var uLocal_390[1] = { 0 };
	var uLocal_391[3] = { 0, 0, 0 };
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
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 16;
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
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	struct<6> Local_591 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_592[48] = "";
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 2;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 2;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 20;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = -1;
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
	var uLocal_638 = 1065353216;
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
	var uLocal_665 = -1;
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
	var uLocal_695 = 1065353216;
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
	var uLocal_722 = -1;
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
	var uLocal_752 = 1065353216;
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
	var uLocal_779 = -1;
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
	var uLocal_809 = 1065353216;
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
	var uLocal_836 = -1;
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
	var uLocal_866 = 1065353216;
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
	var uLocal_893 = -1;
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
	var uLocal_923 = 1065353216;
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
	var uLocal_950 = -1;
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
	var uLocal_980 = 1065353216;
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
	var uLocal_1007 = -1;
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
	var uLocal_1037 = 1065353216;
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
	var uLocal_1064 = -1;
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
	var uLocal_1094 = 1065353216;
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
	var uLocal_1121 = -1;
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
	var uLocal_1151 = 1065353216;
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
	var uLocal_1178 = -1;
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
	var uLocal_1208 = 1065353216;
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
	var uLocal_1235 = -1;
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
	var uLocal_1265 = 1065353216;
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
	var uLocal_1292 = -1;
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
	var uLocal_1322 = 1065353216;
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
	var uLocal_1349 = -1;
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
	var uLocal_1379 = 1065353216;
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
	var uLocal_1406 = -1;
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
	var uLocal_1436 = 1065353216;
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
	var uLocal_1463 = -1;
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
	var uLocal_1493 = 1065353216;
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
	var uLocal_1520 = -1;
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
	var uLocal_1550 = 1065353216;
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
	var uLocal_1577 = -1;
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
	var uLocal_1607 = 1065353216;
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
	var uLocal_1634 = -1;
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
	var uLocal_1664 = 1065353216;
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
	var uLocal_1691 = -1;
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
	var uLocal_1721 = 1065353216;
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
	var uLocal_1745 = 16;
	var uLocal_1746 = 0;
	var uLocal_1747 = -1082130432;
	var uLocal_1748 = 0;
	var uLocal_1749 = -1082130432;
	var uLocal_1750 = 0;
	var uLocal_1751 = -1082130432;
	var uLocal_1752 = 0;
	var uLocal_1753 = -1082130432;
	var uLocal_1754 = 0;
	var uLocal_1755 = -1082130432;
	var uLocal_1756 = 0;
	var uLocal_1757 = -1082130432;
	var uLocal_1758 = 0;
	var uLocal_1759 = -1082130432;
	var uLocal_1760 = 0;
	var uLocal_1761 = -1082130432;
	var uLocal_1762 = 0;
	var uLocal_1763 = -1082130432;
	var uLocal_1764 = 0;
	var uLocal_1765 = -1082130432;
	var uLocal_1766 = 0;
	var uLocal_1767 = -1082130432;
	var uLocal_1768 = 0;
	var uLocal_1769 = -1082130432;
	var uLocal_1770 = 0;
	var uLocal_1771 = -1082130432;
	var uLocal_1772 = 0;
	var uLocal_1773 = -1082130432;
	var uLocal_1774 = 0;
	var uLocal_1775 = -1082130432;
	var uLocal_1776 = 0;
	var uLocal_1777 = -1082130432;
	var uLocal_1778 = 16;
	var uLocal_1779 = 0;
	var uLocal_1780 = -1082130432;
	var uLocal_1781 = 0;
	var uLocal_1782 = -1082130432;
	var uLocal_1783 = 0;
	var uLocal_1784 = -1082130432;
	var uLocal_1785 = 0;
	var uLocal_1786 = -1082130432;
	var uLocal_1787 = 0;
	var uLocal_1788 = -1082130432;
	var uLocal_1789 = 0;
	var uLocal_1790 = -1082130432;
	var uLocal_1791 = 0;
	var uLocal_1792 = -1082130432;
	var uLocal_1793 = 0;
	var uLocal_1794 = -1082130432;
	var uLocal_1795 = 0;
	var uLocal_1796 = -1082130432;
	var uLocal_1797 = 0;
	var uLocal_1798 = -1082130432;
	var uLocal_1799 = 0;
	var uLocal_1800 = -1082130432;
	var uLocal_1801 = 0;
	var uLocal_1802 = -1082130432;
	var uLocal_1803 = 0;
	var uLocal_1804 = -1082130432;
	var uLocal_1805 = 0;
	var uLocal_1806 = -1082130432;
	var uLocal_1807 = 0;
	var uLocal_1808 = -1082130432;
	var uLocal_1809 = 0;
	var uLocal_1810 = -1082130432;
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
	var uLocal_1827 = -1082130432;
	var uLocal_1828 = -1082130432;
	var uLocal_1829 = 1;
	var uLocal_1830 = 1;
	var uLocal_1831 = 1;
	var uLocal_1832 = -1;
	var uLocal_1833 = -1;
	var uLocal_1834 = -1;
	struct<2> Local_1835 = { 0, 0 } ;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 2;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 2;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 20;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = -1;
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
	var uLocal_1878 = 1065353216;
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
	var uLocal_1905 = -1;
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
	var uLocal_1935 = 1065353216;
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
	var uLocal_1962 = -1;
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
	var uLocal_1992 = 1065353216;
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
	var uLocal_2019 = -1;
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
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 1065353216;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = -1;
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
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 1065353216;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
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
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = -1;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
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
	var uLocal_2163 = 1065353216;
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
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = -1;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
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
	var uLocal_2208 = 0;
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
	var uLocal_2220 = 1065353216;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
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
	var uLocal_2247 = -1;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 1065353216;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = -1;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 1065353216;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = -1;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 1065353216;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = -1;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 1065353216;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = -1;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 1065353216;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = -1;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 1065353216;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = -1;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 1065353216;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = -1;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 1065353216;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = -1;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 1065353216;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = -1;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 1065353216;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = -1;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 1065353216;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = -1;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 1065353216;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = -1;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 1065353216;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 16;
	var uLocal_2986 = 0;
	var uLocal_2987 = -1082130432;
	var uLocal_2988 = 0;
	var uLocal_2989 = -1082130432;
	var uLocal_2990 = 0;
	var uLocal_2991 = -1082130432;
	var uLocal_2992 = 0;
	var uLocal_2993 = -1082130432;
	var uLocal_2994 = 0;
	var uLocal_2995 = -1082130432;
	var uLocal_2996 = 0;
	var uLocal_2997 = -1082130432;
	var uLocal_2998 = 0;
	var uLocal_2999 = -1082130432;
	var uLocal_3000 = 0;
	var uLocal_3001 = -1082130432;
	var uLocal_3002 = 0;
	var uLocal_3003 = -1082130432;
	var uLocal_3004 = 0;
	var uLocal_3005 = -1082130432;
	var uLocal_3006 = 0;
	var uLocal_3007 = -1082130432;
	var uLocal_3008 = 0;
	var uLocal_3009 = -1082130432;
	var uLocal_3010 = 0;
	var uLocal_3011 = -1082130432;
	var uLocal_3012 = 0;
	var uLocal_3013 = -1082130432;
	var uLocal_3014 = 0;
	var uLocal_3015 = -1082130432;
	var uLocal_3016 = 0;
	var uLocal_3017 = -1082130432;
	var uLocal_3018 = 16;
	var uLocal_3019 = 0;
	var uLocal_3020 = -1082130432;
	var uLocal_3021 = 0;
	var uLocal_3022 = -1082130432;
	var uLocal_3023 = 0;
	var uLocal_3024 = -1082130432;
	var uLocal_3025 = 0;
	var uLocal_3026 = -1082130432;
	var uLocal_3027 = 0;
	var uLocal_3028 = -1082130432;
	var uLocal_3029 = 0;
	var uLocal_3030 = -1082130432;
	var uLocal_3031 = 0;
	var uLocal_3032 = -1082130432;
	var uLocal_3033 = 0;
	var uLocal_3034 = -1082130432;
	var uLocal_3035 = 0;
	var uLocal_3036 = -1082130432;
	var uLocal_3037 = 0;
	var uLocal_3038 = -1082130432;
	var uLocal_3039 = 0;
	var uLocal_3040 = -1082130432;
	var uLocal_3041 = 0;
	var uLocal_3042 = -1082130432;
	var uLocal_3043 = 0;
	var uLocal_3044 = -1082130432;
	var uLocal_3045 = 0;
	var uLocal_3046 = -1082130432;
	var uLocal_3047 = 0;
	var uLocal_3048 = -1082130432;
	var uLocal_3049 = 0;
	var uLocal_3050 = -1082130432;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = -1082130432;
	var uLocal_3068 = -1082130432;
	var uLocal_3069 = 1;
	var uLocal_3070 = 1;
	var uLocal_3071 = 1;
	var uLocal_3072 = -1;
	var uLocal_3073 = -1;
	var uLocal_3074 = -1;
	struct<2> Local_3075 = { 0, 0 } ;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 2;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 2;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 20;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = -1;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 1065353216;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = -1;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 1065353216;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = -1;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 1065353216;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = -1;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 1065353216;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = -1;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 1065353216;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = -1;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 1065353216;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = -1;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 1065353216;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = -1;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 1065353216;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = -1;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 1065353216;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = -1;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 1065353216;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = -1;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 1065353216;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = -1;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 1065353216;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = -1;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 1065353216;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = -1;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 1065353216;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = -1;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 1065353216;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = -1;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 1065353216;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = -1;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 1065353216;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = -1;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 1065353216;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = -1;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 1065353216;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = -1;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 1065353216;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 16;
	var uLocal_4226 = 0;
	var uLocal_4227 = -1082130432;
	var uLocal_4228 = 0;
	var uLocal_4229 = -1082130432;
	var uLocal_4230 = 0;
	var uLocal_4231 = -1082130432;
	var uLocal_4232 = 0;
	var uLocal_4233 = -1082130432;
	var uLocal_4234 = 0;
	var uLocal_4235 = -1082130432;
	var uLocal_4236 = 0;
	var uLocal_4237 = -1082130432;
	var uLocal_4238 = 0;
	var uLocal_4239 = -1082130432;
	var uLocal_4240 = 0;
	var uLocal_4241 = -1082130432;
	var uLocal_4242 = 0;
	var uLocal_4243 = -1082130432;
	var uLocal_4244 = 0;
	var uLocal_4245 = -1082130432;
	var uLocal_4246 = 0;
	var uLocal_4247 = -1082130432;
	var uLocal_4248 = 0;
	var uLocal_4249 = -1082130432;
	var uLocal_4250 = 0;
	var uLocal_4251 = -1082130432;
	var uLocal_4252 = 0;
	var uLocal_4253 = -1082130432;
	var uLocal_4254 = 0;
	var uLocal_4255 = -1082130432;
	var uLocal_4256 = 0;
	var uLocal_4257 = -1082130432;
	var uLocal_4258 = 16;
	var uLocal_4259 = 0;
	var uLocal_4260 = -1082130432;
	var uLocal_4261 = 0;
	var uLocal_4262 = -1082130432;
	var uLocal_4263 = 0;
	var uLocal_4264 = -1082130432;
	var uLocal_4265 = 0;
	var uLocal_4266 = -1082130432;
	var uLocal_4267 = 0;
	var uLocal_4268 = -1082130432;
	var uLocal_4269 = 0;
	var uLocal_4270 = -1082130432;
	var uLocal_4271 = 0;
	var uLocal_4272 = -1082130432;
	var uLocal_4273 = 0;
	var uLocal_4274 = -1082130432;
	var uLocal_4275 = 0;
	var uLocal_4276 = -1082130432;
	var uLocal_4277 = 0;
	var uLocal_4278 = -1082130432;
	var uLocal_4279 = 0;
	var uLocal_4280 = -1082130432;
	var uLocal_4281 = 0;
	var uLocal_4282 = -1082130432;
	var uLocal_4283 = 0;
	var uLocal_4284 = -1082130432;
	var uLocal_4285 = 0;
	var uLocal_4286 = -1082130432;
	var uLocal_4287 = 0;
	var uLocal_4288 = -1082130432;
	var uLocal_4289 = 0;
	var uLocal_4290 = -1082130432;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = -1082130432;
	var uLocal_4308 = -1082130432;
	var uLocal_4309 = 1;
	var uLocal_4310 = 1;
	var uLocal_4311 = 1;
	var uLocal_4312 = -1;
	var uLocal_4313 = -1;
	var uLocal_4314 = -1;
	bool bLocal_4315 = 0;
	bool bLocal_4316 = 0;
	int iLocal_4317 = 0;
	float fLocal_4318 = 0f;
	float fLocal_4319 = 0f;
	int iLocal_4320 = 0;
	struct<3> Local_4321 = { 0, 0, 0 } ;
	struct<3> Local_4322 = { 0, 0, 0 } ;
	float fLocal_4323 = 0f;
	float fLocal_4324 = 0f;
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
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	fLocal_40 = 1f;
	iLocal_129 = 786601;
	iLocal_382 = AUDIO::GET_SOUND_ID();
	fLocal_4318 = 0f;
	fLocal_4319 = 0f;
	Local_4321 = { 0.05f, 0.2f, 0.5f };
	Local_4322 = { 0f, 0f, 0f };
	fLocal_4323 = 0.05f;
	fLocal_4324 = 1.31f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1085();
		func_1078();
	}
	iLocal_200 = iLocal_200;
	uLocal_417 = uLocal_417;
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SaveMichaelAndTrevorP2", 0);
		if (func_1067())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_1065(0);
				func_1062();
				func_1057();
				func_1054();
				func_1052();
				switch (iLocal_43)
				{
					case 0:
						func_1048();
						break;
					case 1:
						func_1041();
						break;
					case 3:
						func_1009();
						break;
					case 2:
						func_904();
						break;
					case 4:
						func_839();
						break;
					case 5:
						func_286();
						break;
					case 6:
						func_1();
						break;
					}
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x14D
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (!bLocal_181)
	{
		if (!iLocal_202)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_363 + 10000)
			{
				iLocal_202 = func_283("FINC1_TGD", 0, 0, 0);
			}
		}
	}
	else
	{
		iLocal_202 = 1;
	}
	if (!iLocal_182)
	{
		func_281("fin_ext_p1", func_282(17), 100f, 120f);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 0, 0, 1, joaat("CS_Devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 0, 0, joaat("CS_Devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 10, 1, 0, joaat("CS_Devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 9, 1, 0, joaat("CS_Devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 6, 0, 0, joaat("CS_Devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 4, 4, 0, joaat("CS_Devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 3, 5, 0, joaat("CS_Devin"));
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 11, 0, 0, joaat("CS_Devin"));
		}
		if (!bLocal_314)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
			{
				if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_134[3]))
				{
					bLocal_314 = __LIB_17__::func_99("FINC2_DEVINS_CAR_RADIO");
				}
			}
		}
		if (!iLocal_215)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[1]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_134[1], false) || !ENTITY::IS_ENTITY_DEAD(iLocal_134[1], false))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_134[1], 300f, 300f, 300f, false, false, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_134[1]));
						func_279(6);
						iLocal_215 = 1;
					}
				}
			}
		}
		if (!iLocal_185)
		{
			if (func_270(1, 0, 1))
			{
				if (iLocal_306)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_406 || (MISC::GET_GAME_TIMER() >= iLocal_384 && iLocal_307))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FINALE_C2_DEVIN_INSIDE_TRUNK_MASTER", iLocal_134[3], 0, false, 0);
						}
						if (iLocal_307 && MISC::GET_GAME_TIMER() < iLocal_406)
						{
							iLocal_307 = 0;
						}
						else
						{
							iLocal_307 = 0;
							iLocal_306 = 0;
						}
					}
				}
				if (bLocal_290)
				{
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1576.9086f, 5159.752f, 18.79768f, 100f, 100f, 25f, false, true, 0))
					{
						bLocal_290 = func_283("FINC1_DEVARR", 0, 0, 0);
					}
					switch (iLocal_121)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() >= iLocal_383)
							{
								if (func_283("FINC1_DEVWAK", 0, 0, 0))
								{
									iLocal_306 = 1;
									iLocal_406 = MISC::GET_GAME_TIMER() + 8200;
									iLocal_121 = 1;
									iLocal_383 = MISC::GET_GAME_TIMER() + 7000;
								}
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() >= iLocal_383)
							{
								if (func_283("FINC1_DHIDDN", 0, 0, 0))
								{
									iLocal_121 = 2;
									iLocal_383 = MISC::GET_GAME_TIMER() + 4000;
								}
							}
							break;
						case 2:
							if (MISC::GET_GAME_TIMER() <= iLocal_383)
							{
								if (func_283("FINC2_SHUTUP", 0, 0, 0))
								{
									iLocal_306 = 1;
									iLocal_406 = MISC::GET_GAME_TIMER() + 9000;
									iLocal_121 = 3;
									iLocal_383 = MISC::GET_GAME_TIMER() + 20000;
								}
							}
							else
							{
								iLocal_306 = 1;
								iLocal_406 = MISC::GET_GAME_TIMER() + 9000;
								iLocal_121 = 3;
								iLocal_383 = MISC::GET_GAME_TIMER() + 20000;
							}
							break;
						case 3:
							if (MISC::GET_GAME_TIMER() >= iLocal_383)
							{
								if (func_283("FINC1_DEVTAK", 0, 0, 0))
								{
									iLocal_121 = 4;
								}
							}
							break;
						case 4:
							if (iLocal_203)
							{
								if (func_255())
								{
									iLocal_203 = 0;
								}
							}
							if (MISC::GET_GAME_TIMER() >= iLocal_383)
							{
								if (func_283("FINC1_DEAD", 0, 0, 0))
								{
									iLocal_306 = 1;
									iLocal_406 = MISC::GET_GAME_TIMER() + 3500;
									iLocal_121 = 5;
									iLocal_383 = MISC::GET_GAME_TIMER() + 8000;
								}
							}
							break;
						case 5:
							if (MISC::GET_GAME_TIMER() >= iLocal_383)
							{
								iLocal_121 = 6;
							}
							break;
						case 6:
							if (func_283("FINC1_BOOT", 0, 0, 0))
							{
								iLocal_121 = 7;
							}
							break;
						case 7:
							if (func_283("FINC2_SHUTUP", 0, 0, 0))
							{
								iLocal_383 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 30000));
								iLocal_306 = 1;
								iLocal_307 = 1;
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
								{
									case 0:
										iVar1 = -3000;
										break;
									case 1:
										iVar1 = -2500;
										break;
									case 2:
										iVar1 = -2000;
										break;
									case 3:
										iVar1 = -1500;
										break;
									case 4:
										iVar1 = -1000;
										break;
									case 5:
										iVar1 = 500;
										break;
								}
								iLocal_406 = (iLocal_383 + iVar1);
								iLocal_384 = (iLocal_406 - MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
								iLocal_121 = 5;
							}
							break;
						}
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_146))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
					func_253();
					func_252(0, 1, 1, 0);
					iLocal_146 = func_249(func_282(17), 1);
				}
				if (!bLocal_181)
				{
					if (!bLocal_186)
					{
						bLocal_186 = func_247("FC2_GORES", 1, 0);
					}
				}
				if (func_245())
				{
					if ((PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_282(17), 6f, 6f, 2f, true, true, 0)) && iVar0 == 0)
					{
						ENTITY::SET_ENTITY_PROOFS(iLocal_134[3], true, true, true, true, true, false, false, false);
						__LIB_17__::func_659();
						func_253();
						__LIB_0__::func_325();
						iLocal_361 = MISC::GET_GAME_TIMER();
						iLocal_185 = 1;
					}
				}
			}
			else if (iLocal_121 >= 5)
			{
				iLocal_121 = 5;
				if (MISC::GET_GAME_TIMER() >= iLocal_383)
				{
					iLocal_383 = MISC::GET_GAME_TIMER() + 5000;
				}
			}
			iVar2 = ENTITY::GET_ENTITY_HEALTH(iLocal_134[3]);
			if (iLocal_121 >= 2)
			{
				if (!iLocal_291)
				{
					if (iVar2 < iLocal_402)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_401)
						{
							iLocal_401 = MISC::GET_GAME_TIMER() + 800;
							iLocal_291 = 1;
						}
					}
					iLocal_402 = iVar2;
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[3], false))
				{
					if (func_283("FINC1_DEVCRA", 0, 0, 0))
					{
						iLocal_291 = 0;
						iLocal_402 = iVar2;
						iLocal_401 = MISC::GET_GAME_TIMER() + 12000;
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_401)
					{
						iLocal_402 = iVar2;
						iLocal_291 = 0;
					}
				}
				else
				{
					iLocal_402 = iVar2;
					iLocal_291 = 0;
				}
			}
			else
			{
				iLocal_402 = iVar2;
				iLocal_291 = 0;
			}
		}
		else
		{
			__LIB_17__::func_659();
			if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 10f, 1, 1056964608, 0, 1, 0))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_361 + 1000)
				{
					if (!__LIB_0__::func_75())
					{
						if (func_245())
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
							iLocal_182 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0x76C
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<20> Var5;
	struct<21> Var6;
	struct<21> Var7;
	struct<20> Var8;
	struct<21> Var9;
	struct<21> Var10;
	struct<20> Var11;
	struct<21> Var12;
	struct<21> Var13;
	var uVar14;
	int iVar15;
	var uVar16;
	var uVar17;
	struct<3> Var18;
	struct<3> Var19;
	iVar0 = func_238();
	iVar1 = func_237();
	iVar2 = func_236();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_48)
	{
		case 0:
			func_234(1, 1, 1, 0, 1, 0, 1000, 1);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0f);
			MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0f);
			MISC::WATER_OVERRIDE_SET_STRENGTH(0.1f);
			func_232(15, 1, 8000);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
			GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FIN1_RADIO_FADE");
			Global_96884 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			MISC::CLEAR_AREA(-1577.7725f, 5157.8325f, 18.7777f, 5f, true, false, false, false);
			MISC::CLEAR_AREA_OF_PROJECTILES(-1577.7725f, 5157.8325f, 18.7777f, 12f, 0);
			FIRE::STOP_FIRE_IN_RANGE(-1577.7725f, 5157.8325f, 18.7777f, 12f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-1577.7725f, 5157.8325f, 18.7777f, 12f);
			MISC::CLEAR_AREA_OF_PEDS(-1577.7725f, 5157.8325f, 18.7777f, 120f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1577.7725f, 5157.8325f, 18.7777f, 120f, false, false, false, false, false, false, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_134[3], -1577.7725f, 5157.8325f, 18.7777f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_134[3], 3.2f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_134[3], 5f);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_134[3], false, false, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_134[3], 0f);
			}
			iLocal_360 = MISC::GET_GAME_TIMER();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_48 = 1;
			break;
		case 1:
			switch (iLocal_109)
			{
				case 0:
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
					func_281("fin_ext_p1", func_282(17), 100f, 120f);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_360 + 8500)
					{
						if (__LIB_32__::func_85(27, &uLocal_160, 1, 0, 1, 1, 0))
						{
							while (!__LIB_0__::func_90())
							{
								PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
								PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
								SYSTEM::WAIT(0);
							}
							func_81(0, 0);
							func_81(2, 0);
							func_81(1, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
							{
								VEHICLE::SET_VEHICLE_LIGHTS(iLocal_134[3], 2);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_134[3], "Trevor_Cliff_Car", 0, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iVar1))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar1, "Trevor", 0, 0, 0);
							}
							if (!PED::IS_PED_INJURED(iVar0))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "Michael", 0, 0, 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "Michael", 2, func_74(0), 0);
							}
							if (!PED::IS_PED_INJURED(iVar2))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar2, "Franklin", 0, 0, 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar2, "Franklin", 2, func_74(1), 0);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_130, "Devin", 2, joaat("CS_Devin"), 0);
							RECORDING::REPLAY_START_EVENT(4);
							CUTSCENE::START_CUTSCENE(2048);
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
							iLocal_109 = 1;
						}
					}
					break;
				case 1:
					if (!iLocal_184)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							__LIB_17__::func_455(&uLocal_160, 0, 0, 2000, 1, 1, 0, 1);
							func_43();
							if (bLocal_181)
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(800);
								}
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							func_81(2, 0);
							func_42(10);
							MISC::CLEAR_AREA(func_282(17), 12f, true, false, false, false);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[2], false))
							{
								VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_134[2], 0, 0, 0f);
							}
							__LIB_17__::func_168(iLocal_134[3]);
							ENTITY::SET_ENTITY_PROOFS(iLocal_134[3], false, false, false, false, false, false, false, false);
							iLocal_184 = 1;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_130))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Devin", 0)))
						{
							iLocal_130 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Devin", 0));
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0)))
						{
							iLocal_49[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michael", 0));
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0)))
						{
							iLocal_49[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0));
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
					{
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								func_39(iVar1, 2, &Var3, &Var4, 0f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar1, iLocal_134[3], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_134[3], "seat_dside_f"), Var3, Var4, false, false, false, false, 2, true, 0);
								Var5.f_4 = 1065353216;
								Var5.f_5 = 1065353216;
								Var5.f_9 = 1065353216;
								Var5.f_10 = 1065353216;
								Var5.f_14 = 1065353216;
								Var5.f_15 = 1065353216;
								Var5.f_17 = 1040187392;
								Var5.f_18 = 1040187392;
								Var5.f_19 = -1;
								Var6.f_4 = 1065353216;
								Var6.f_5 = 1065353216;
								Var6.f_9 = 1065353216;
								Var6.f_10 = 1065353216;
								Var6.f_14 = 1065353216;
								Var6.f_15 = 1065353216;
								Var6.f_17 = 1040187392;
								Var6.f_18 = 1040187392;
								Var6.f_19 = -1;
								Var6.f_0 = 1;
								Var6.f_2 = func_38(2);
								Var6.f_1 = func_37(9);
								Var6.f_3 = 0f;
								Var6.f_4 = 0f;
								Var6.f_20 = 1;
								TASK::TASK_SCRIPTED_ANIMATION(iVar1, &Var6, &Var5, &Var5, 0f, 0f);
								Var7.f_4 = 1065353216;
								Var7.f_5 = 1065353216;
								Var7.f_9 = 1065353216;
								Var7.f_10 = 1065353216;
								Var7.f_14 = 1065353216;
								Var7.f_15 = 1065353216;
								Var7.f_17 = 1040187392;
								Var7.f_18 = 1040187392;
								Var7.f_19 = -1;
								Var7.f_0 = 1;
								Var7.f_2 = "PushCar_waitIdle_additive_T";
								Var7.f_1 = func_37(9);
								Var7.f_3 = 0f;
								Var7.f_4 = 1f;
								Var7.f_20 = 289;
								TASK::TASK_SCRIPTED_ANIMATION(iVar1, &Var7, &Var5, &Var5, 0f, 0f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar1, false, false);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
						{
							if (!PED::IS_PED_INJURED(iVar0))
							{
								func_39(iVar0, 0, &Var3, &Var4, 0f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iLocal_134[3], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_134[3], "seat_dside_f"), Var3, Var4, false, false, false, false, 2, true, 0);
								Var8.f_4 = 1065353216;
								Var8.f_5 = 1065353216;
								Var8.f_9 = 1065353216;
								Var8.f_10 = 1065353216;
								Var8.f_14 = 1065353216;
								Var8.f_15 = 1065353216;
								Var8.f_17 = 1040187392;
								Var8.f_18 = 1040187392;
								Var8.f_19 = -1;
								Var9.f_4 = 1065353216;
								Var9.f_5 = 1065353216;
								Var9.f_9 = 1065353216;
								Var9.f_10 = 1065353216;
								Var9.f_14 = 1065353216;
								Var9.f_15 = 1065353216;
								Var9.f_17 = 1040187392;
								Var9.f_18 = 1040187392;
								Var9.f_19 = -1;
								Var9.f_0 = 1;
								Var9.f_2 = func_38(0);
								Var9.f_1 = func_37(9);
								Var9.f_3 = 0f;
								Var9.f_4 = 0f;
								Var9.f_20 = 1;
								TASK::TASK_SCRIPTED_ANIMATION(iVar0, &Var9, &Var8, &Var8, 0f, 0f);
								Var10.f_4 = 1065353216;
								Var10.f_5 = 1065353216;
								Var10.f_9 = 1065353216;
								Var10.f_10 = 1065353216;
								Var10.f_14 = 1065353216;
								Var10.f_15 = 1065353216;
								Var10.f_17 = 1040187392;
								Var10.f_18 = 1040187392;
								Var10.f_19 = -1;
								Var10.f_0 = 1;
								Var10.f_2 = "PushCar_waitIdle_additive_M";
								Var10.f_1 = func_37(9);
								Var10.f_3 = 0f;
								Var10.f_4 = 1f;
								Var10.f_20 = 289;
								TASK::TASK_SCRIPTED_ANIMATION(iVar0, &Var10, &Var8, &Var8, 0f, 0f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
						{
							if (!PED::IS_PED_INJURED(iVar2))
							{
								func_39(iVar2, 1, &Var3, &Var4, 0f);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar2, iLocal_134[3], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_134[3], "seat_dside_f"), Var3, Var4, false, false, false, false, 2, true, 0);
								Var11.f_4 = 1065353216;
								Var11.f_5 = 1065353216;
								Var11.f_9 = 1065353216;
								Var11.f_10 = 1065353216;
								Var11.f_14 = 1065353216;
								Var11.f_15 = 1065353216;
								Var11.f_17 = 1040187392;
								Var11.f_18 = 1040187392;
								Var11.f_19 = -1;
								Var12.f_4 = 1065353216;
								Var12.f_5 = 1065353216;
								Var12.f_9 = 1065353216;
								Var12.f_10 = 1065353216;
								Var12.f_14 = 1065353216;
								Var12.f_15 = 1065353216;
								Var12.f_17 = 1040187392;
								Var12.f_18 = 1040187392;
								Var12.f_19 = -1;
								Var12.f_0 = 1;
								Var12.f_2 = func_38(1);
								Var12.f_1 = func_37(9);
								Var12.f_3 = 0f;
								Var12.f_4 = 0f;
								Var12.f_20 = 1;
								TASK::TASK_SCRIPTED_ANIMATION(iVar2, &Var12, &Var11, &Var11, 0f, 0f);
								Var13.f_4 = 1065353216;
								Var13.f_5 = 1065353216;
								Var13.f_9 = 1065353216;
								Var13.f_10 = 1065353216;
								Var13.f_14 = 1065353216;
								Var13.f_15 = 1065353216;
								Var13.f_17 = 1040187392;
								Var13.f_18 = 1040187392;
								Var13.f_19 = -1;
								Var13.f_0 = 1;
								Var13.f_2 = "PushCar_waitIdle_additive_F";
								Var13.f_1 = func_37(9);
								Var13.f_3 = 0f;
								Var13.f_4 = 1f;
								Var13.f_20 = 289;
								TASK::TASK_SCRIPTED_ANIMATION(iVar2, &Var13, &Var11, &Var11, 0f, 0f);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, false, false);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor_Cliff_Car", 0))
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_134[3], 5, true);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_134[3], 5f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_382, "CAR_WHEELS", iLocal_134[3], "FINALE_C2_SOUNDS", false, 0);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin_Bike", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Devin", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_130))
						{
							PED::DELETE_PED(&iLocal_130);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						RECORDING::REPLAY_STOP_EVENT();
						CLOCK::PAUSE_CLOCK(true);
						func_36();
						__LIB_0__::func_190("FC2_PUSHHLP");
						func_247("FC2_KILLDEV", 1, 0);
						func_33(11);
						GRAPHICS::RESET_ADAPTATION(6);
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						iLocal_47 = 0;
						iLocal_360 = MISC::GET_GAME_TIMER();
						iLocal_406 = MISC::GET_GAME_TIMER() + 2000;
						__LIB_0__::func_963(0, 0, 1, 0);
						iLocal_109 = 2;
					}
					break;
				case 2:
					PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
					__LIB_0__::func_603(&uVar14, &iVar15, &uVar16, &uVar17, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
					{
						Var18 = { func_30() };
						Local_332 = { Local_332 + Var18 - Local_332 * FtoV((5f * MISC::GET_FRAME_TIME())) };
						Local_332.f_2 = 20.3f;
						CAM::SET_CAM_COORD(iLocal_155, Local_332);
						Var19 = { ENTITY::GET_ENTITY_COORDS(iLocal_134[3], true) };
						if ((iVar15 < -100 && !PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/)) || ((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 32 /*INPUT_MOVE_UP_ONLY*/) && PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/)) && Var19.f_0 > -1588.87f))
						{
							if (!iLocal_296)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_404)
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Car_Push_Flex", iLocal_134[3], "FINALE_C2_SOUNDS", false, 0);
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
											{
												AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
											}
											break;
										case 1:
											if (!PED::IS_PED_INJURED(iLocal_49[0]))
											{
												AUDIO::PLAY_PAIN(iLocal_49[0], 23, 0f, 0);
											}
											break;
										case 2:
											if (!PED::IS_PED_INJURED(iLocal_49[2]))
											{
												AUDIO::PLAY_PAIN(iLocal_49[2], 23, 0f, 0);
											}
											break;
									}
									iLocal_404 = MISC::GET_GAME_TIMER() + 1500;
								}
								iLocal_296 = 1;
							}
							fLocal_339 = (fLocal_339 + (1.2f * SYSTEM::TIMESTEP()));
							if (fLocal_339 > 14f)
							{
								fLocal_339 = 14f;
							}
							fLocal_343 = (fLocal_343 + (1f * SYSTEM::TIMESTEP()));
							if (fLocal_343 > 1f)
							{
								fLocal_343 = 1f;
							}
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_134[3], 0, 0f, fLocal_339, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
						}
						else
						{
							iLocal_296 = 0;
							fLocal_339 = (fLocal_339 - (1.5f * SYSTEM::TIMESTEP()));
							if (fLocal_339 < 9f)
							{
								fLocal_339 = 9f;
							}
							fLocal_343 = (fLocal_343 - (1f * SYSTEM::TIMESTEP()));
							if (fLocal_343 < 0f)
							{
								fLocal_343 = 0f;
							}
						}
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::SET_ANIM_RATE(iVar0, fLocal_343, 0, false);
						}
						if (!PED::IS_PED_INJURED(iVar1))
						{
							TASK::SET_ANIM_RATE(iVar1, fLocal_343, 0, false);
						}
						if (!PED::IS_PED_INJURED(iVar2))
						{
							TASK::SET_ANIM_RATE(iVar2, fLocal_343, 0, false);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_406)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FINALE_C2_DEVIN_INSIDE_TRUNK_MASTER", iLocal_134[3], 0, false, 0);
							iLocal_406 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000));
						}
						if (!CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							func_281("fin_ext_p2", -1584.7f, 5163.71f, 18.56f, 100f, 120f);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_360 + 1000)
						{
							if (Var19.f_0 < -1588.87f)
							{
								if (__LIB_0__::func_90())
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
									{
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_134[3], "Trevor_Cliff_Car", 0, 0, 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[2], false))
									{
										if (ENTITY::GET_ENTITY_MODEL(iLocal_134[2]) == joaat("tailgater"))
										{
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_134[2], "Michaels_car", 0, 0, 0);
										}
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[0], false))
									{
										if (ENTITY::GET_ENTITY_MODEL(iLocal_134[0]) == joaat("bagger"))
										{
											CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_134[0], "Franklin_Bike", 0, 0, 0);
										}
									}
									if (!PED::IS_PED_INJURED(iVar1))
									{
										ENTITY::DETACH_ENTITY(iVar1, true, true);
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar1, "Trevor", 0, 0, 0);
									}
									if (!PED::IS_PED_INJURED(iVar0))
									{
										ENTITY::DETACH_ENTITY(iVar0, true, true);
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "Michael", 0, 0, 0);
									}
									if (!PED::IS_PED_INJURED(iVar2))
									{
										ENTITY::DETACH_ENTITY(iVar2, true, true);
										CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar2, "Franklin", 0, 0, 0);
									}
									AUDIO::STOP_SOUND(iLocal_382);
									HUD::CLEAR_HELP(true);
									iLocal_360 = MISC::GET_GAME_TIMER();
									iLocal_183 = 0;
									iLocal_184 = 0;
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
									RECORDING::REPLAY_START_EVENT(4);
									CUTSCENE::START_CUTSCENE(2048);
									CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
									HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
									iLocal_109 = 3;
								}
							}
						}
					}
					else
					{
						HUD::REQUEST_ADDITIONAL_TEXT("CREDIT", 0);
						func_28();
					}
					break;
				case 3:
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						iLocal_183 = 1;
					}
					if (!iLocal_184)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							func_42(11);
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							iLocal_184 = 1;
						}
					}
					if (!Global_96884)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 71400)
						{
							AUDIO::PLAY_END_CREDITS_MUSIC(true);
							AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(true);
							AUDIO::SET_MOBILE_PHONE_RADIO_STATE(true);
							AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
							AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */, "END_CREDITS_SAVE_MICHAEL_TREVOR", true);
							PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
							Global_96884 = 1;
						}
					}
					else
					{
						PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
					}
					if (!bLocal_316)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 90583)
						{
							__LIB_0__::func_646();
							if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
							{
								RECORDING::REPLAY_STOP_EVENT();
								func_25();
							}
						}
					}
					if (!bLocal_286)
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 95600)
						{
							__LIB_16__::func_874(5, 0);
							bLocal_286 = true;
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
					{
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
					{
						RECORDING::REPLAY_STOP_EVENT();
						func_28();
					}
					break;
				case 4:
					__LIB_0__::func_646();
					if (MISC::GET_GAME_TIMER() >= (iLocal_413 + 45000))
					{
						CAM::DO_SCREEN_FADE_OUT(5000);
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							SYSTEM::WAIT(0);
						}
						func_3();
					}
					break;
			}
			break;
		case 2:
			break;
	}
}

void func_3()//Position - 0x16DF
{
	__LIB_0__::func_497(264, 1, 0);
	if (!bLocal_286)
	{
		__LIB_16__::func_874(5, 0);
	}
	Global_96885 = 2;
	if (__LIB_0__::func_2(0))
	{
		Global_63156 = 1;
		__LIB_0__::func_46(1, 1);
	}
	__LIB_0__::func_526(1, 0);
	if (__LIB_0__::func_2(0))
	{
		Global_63154 = 0;
	}
	func_1078();
}

void func_25()//Position - 0x1CB4
{
	MISC::SET_CREDITS_ACTIVE(true);
	MISC::SET_CREDITS_FADE_OUT_WITH_SCREEN(false);
	AUDIO::START_AUDIO_SCENE("END_CREDITS_SCENE");
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
	bLocal_316 = true;
}

void func_28()//Position - 0x1CF6
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_49[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_130))
	{
		PED::DELETE_PED(&iLocal_130);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_134)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_134[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_183)
	{
	}
	func_29(&iLocal_155);
	CAM::SET_CAM_COORD(iLocal_155, -1573.8031f, 5160.573f, 20.7951f);
	CAM::SET_CAM_ROT(iLocal_155, 5.998f, -0.0062f, 83.9225f, 2);
	CAM::SET_CAM_FOV(iLocal_155, 40f);
	func_29(&iLocal_156);
	CAM::SET_CAM_COORD(iLocal_156, -1573.8031f, 5160.573f, 20.7951f);
	CAM::SET_CAM_ROT(iLocal_156, 5.998f, -0.0062f, 83.9225f, 2);
	CAM::SET_CAM_FOV(iLocal_156, 40f);
	CAM::SHAKE_CAM(iLocal_156, "HAND_SHAKE", 0.15f);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_156, iLocal_155, 2000, 1, 1);
	iLocal_413 = MISC::GET_GAME_TIMER();
	iLocal_109 = 4;
	if (!bLocal_316)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		func_25();
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}

void func_29(int iParam0)//Position - 0x1E5E
{
	if (CAM::DOES_CAM_EXIST(iLocal_156))
	{
		CAM::DESTROY_CAM(iLocal_156, false);
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

Vector3 func_30()//Position - 0x1EA1
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
	{
		Var0 = { 0.9f, (-4.3f + (fLocal_343 / 3f)), 0.8f };
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_134[3], Var0);
	}
	return 0f, 0f, 0f;
}

bool func_33(int iParam0)//Position - 0x1FEC
{
	return AUDIO::START_AUDIO_SCENE(func_34(iParam0));
}

char* func_34(int iParam0)//Position - 0x1FFE
{
	switch (iParam0)
	{
		case 0:
			return "FINALE_FRANKLIN_DRIVE";
			break;
		case 1:
			return "FINALE_FRANKLIN_ON_FOOT";
			break;
		case 2:
			return "FINALE_FRANKLIN_KILL_CHENG";
			break;
		case 3:
			return "FINALE_MICHAEL_DRIVE";
			break;
		case 4:
			return "FINALE_MICHAEL_ON_FOOT";
			break;
		case 5:
			return "FINALE_MICHAEL_KILL_STRETCH";
			break;
		case 6:
			return "FINALE_TREVOR_DRIVE";
			break;
		case 7:
			return "FINALE_TREVOR_ON_FOOT";
			break;
		case 8:
			return "FINALE_TREVOR_KILL_STEVE";
			break;
		case 9:
			return "FINALE_DRIVE_TO_DEVIN";
			break;
		case 10:
			return "FINALE_DRIVE_TO_OCEAN";
			break;
		case 11:
			return "FINALE_PUSH_CAR";
			break;
		case 12:
			return "FINALE_FRANKLIN_ESCAPE_TRIADS";
			break;
		case 13:
			return "FINALE_MICHAEL_KILL_BALLAS";
			break;
		case 14:
			return "FINALE_MICHAEL_ENEMY_CAR_ARRIVES";
			break;
		case 15:
			return "FINALE_TREVOR_FOCUS_ON_WHEEL";
			break;
		case 16:
			return "FINALE_TREVOR_WATCH_STEVE_CAMERA";
			break;
		case 17:
			return "FINALE_TREVOR_KILL_CAM";
			break;
		case 18:
			return "FINALE_DEVINS_HOUSE_OVERVIEW";
			break;
		case 19:
			return "FINALE_KIDNAP_DEVIN_STEALTH";
			break;
		case 20:
			return "FINALE_KIDNAP_DEVIN_ALERT";
			break;
	}
	return "";
}

void func_36()//Position - 0x2177
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
	{
		func_29(&iLocal_155);
		Local_332 = { func_30() };
		Local_332.f_2 = 20.3f;
		CAM::SET_CAM_COORD(iLocal_155, Local_332);
		CAM::SET_CAM_ROT(iLocal_155, -8.7f, 0f, 110.3f, 2);
		CAM::SET_CAM_FOV(iLocal_155, 41.5f);
		CAM::SHAKE_CAM(iLocal_155, "HAND_SHAKE", 0.3f);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
}

char* func_37(int iParam0)//Position - 0x21EE
{
	switch (iParam0)
	{
		case 0:
			return "MISSFINALE_C2IG_1";
			break;
		case 3:
			return "MISSFINALE_C2MCS_1";
			break;
		case 1:
			return "MISSFINALE_C2IG_2";
			break;
		case 2:
			return "MISSFINALE_C2IG_4";
			break;
		case 4:
			return "MISSFINALE_C2STEVE_CAMERAMAN_DEATH";
			break;
		case 5:
			return "MISSFINALE_C2IG_5";
			break;
		case 6:
			return "MISSFINALE_C2IG_7_ALT1";
			break;
		case 7:
			return "MISSFINALE_C2MCS_2_B";
			break;
		case 8:
			return "MISSFINALE_C2IG_8";
			break;
		case 9:
			return "MISSFINALE_C2IG_11";
			break;
		case 10:
			return "reaction@gunfire@intro_v1";
			break;
		case 11:
			return "reaction@gunfire@runs_v1";
			break;
		case 12:
			return "MISSFINALE_C2CAPTURE_DEVIN";
			break;
	}
	return "invalid!";
}

char* func_38(int iParam0)//Position - 0x22D1
{
	switch (iParam0)
	{
		case 2:
			return "PushCar_offCliff_T";
			break;
		case 0:
			return "PushCar_offCliff_M";
			break;
		case 1:
			return "PushCar_offCliff_F";
			break;
	}
	return "error";
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4)//Position - 0x2314
{
	float fVar0;
	if (fParam4 >= 0f)
	{
		fVar0 = fParam4;
	}
	else
	{
		fVar0 = func_40(iParam0, iParam1);
	}
	*uParam2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_37(9), func_38(iParam1), 0f, 0f, 0f, 0f, 0f, 0f, fVar0, 2) };
	*uParam3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_37(9), func_38(iParam1), 0f, 0f, 0f, 0f, 0f, 0f, fVar0, 2) };
}

float func_40(int iParam0, int iParam1)//Position - 0x236E
{
	char* sVar0;
	sVar0 = func_38(iParam1);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_37(9), sVar0, 3))
	{
		return ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, func_37(9), sVar0);
	}
	return 0f;
}

void func_42(int iParam0)//Position - 0x2420
{
	AUDIO::STOP_AUDIO_SCENE(func_34(iParam0));
}

void func_43()//Position - 0x2432
{
	func_252(1, 1, 1, 0);
	__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
	__LIB_17__::func_111();
}

int func_74(int iParam0)//Position - 0x2D7B
{
	switch (iParam0)
	{
		case 0:
			return __LIB_16__::func_512(0);
			break;
		case 1:
			return __LIB_16__::func_512(1);
			break;
		case 2:
			return __LIB_16__::func_512(2);
			break;
		case 3:
			return __LIB_15__::func_957(29);
			break;
		case 4:
			return __LIB_0__::func_634(0, 0);
			break;
		case 5:
			return __LIB_0__::func_634(1, 2);
			break;
		case 6:
			return __LIB_0__::func_634(2, 0);
			break;
		case 7:
			return joaat("tornado");
			break;
		case 8:
			return __LIB_15__::func_957(35);
			break;
		case 9:
			return __LIB_15__::func_957(21);
			break;
		case 10:
			return joaat("G_M_M_ChiGoon_02");
			break;
		case 11:
			return joaat("washington");
			break;
		case 12:
			return joaat("cavalcade");
			break;
		case 13:
			return joaat("felon");
			break;
		case 14:
			return joaat("CS_SteveHains");
			break;
		case 15:
			return joaat("S_M_Y_Grip_01");
			break;
		case 16:
			return joaat("A_F_Y_Hipster_04");
			break;
		case 17:
			return joaat("prop_v_cam_01");
			break;
		case 18:
			return __LIB_15__::func_957(37);
			break;
		case 19:
			return joaat("G_M_Y_BallaOrig_01");
			break;
		case 20:
			return joaat("S_M_Y_Cop_01");
			break;
		case 21:
			return joaat("S_M_Y_BlackOps_01");
			break;
		case 22:
			return joaat("prop_phone_ing_02");
			break;
		case 23:
			return joaat("prop_bskball_01");
			break;
		case 24:
			return joaat("prop_ld_ferris_wheel");
			break;
		case 25:
			return joaat("prop_ferris_car_01");
			break;
		case 26:
			return joaat("p_devin_box_01_s");
			break;
		case 27:
			return joaat("prop_devin_box_dummy_01");
			break;
		case 28:
			return joaat("prop_cs_tablet");
			break;
	}
	return 0;
}

void func_81(int iParam0, bool bParam1)//Position - 0x3283
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			iVar1 = 112;
			break;
		case 1:
			iVar1 = 158;
			break;
		case 2:
			iVar1 = 154;
			break;
	}
	if (__LIB_17__::func_341() == iParam0)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	else
	{
		iVar0 = iLocal_49[__LIB_0__::func_682(iParam0)];
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (bParam1)
		{
			func_175(iVar0, 14, iVar1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_82(iVar0, 14, iVar1);
		}
	}
}

int func_82(int iParam0, int iParam1, int iParam2)//Position - 0x330A
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_98(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_0__::func_459(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_82(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_0__::func_466(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_82(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_78130[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { __LIB_0__::func_459(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_85(iParam0, iVar0, &iVar7, 0))
	{
		func_175(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_83(iParam0, iVar0, &iVar7))
	{
		func_175(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_83(int iParam0, int iParam1, int iParam2)//Position - 0x34C6
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_98(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x358D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_98(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0, int iParam1, int iParam2)//Position - 0x67EA
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
				if (!func_98(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_98(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_98(iParam0, 14, iVar4))
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
			if (!func_98(iParam0, 14, uVar8[iVar7]))
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

int func_175(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1EE36
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
										func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_179(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_85(iParam0, iVar10, &iVar4, 1))
							{
								func_175(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_175(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_175(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_175(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_175(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_175(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_175(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_175(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_85(iParam0, iVar10, &iVar4, 0))
		{
			func_175(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_83(iParam0, iVar10, &iVar4))
		{
			func_175(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_179(int iParam0, int iParam1, int iParam2)//Position - 0x1F7D6
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

void func_232(int iParam0, bool bParam1, int iParam2)//Position - 0x23ECB
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	int iVar4;
	func_233(iParam0, &Var0, &Var1, &fVar2);
	func_29(&iLocal_155);
	CAM::DETACH_CAM(iLocal_155);
	CAM::STOP_CAM_POINTING(iLocal_155);
	CAM::SET_CAM_COORD(iLocal_155, Var0);
	CAM::SET_CAM_ROT(iLocal_155, Var1, 2);
	CAM::SET_CAM_FOV(iLocal_155, fVar2);
	if (iParam0 != 11)
	{
		iVar3 = 1;
		iVar4 = 1;
	}
	else
	{
		iVar3 = 0;
		iVar4 = 0;
	}
	if (bParam1)
	{
		func_233(iParam0 + 1, &Var0, &Var1, &fVar2);
		func_29(&iLocal_156);
		CAM::SET_CAM_COORD(iLocal_156, Var0);
		CAM::SET_CAM_ROT(iLocal_156, Var1, 2);
		CAM::SET_CAM_FOV(iLocal_156, fVar2);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_156, iLocal_155, iParam2, iVar3, iVar4);
	}
	if (iParam0 == 9 || iParam0 == 11)
	{
		CAM::SHAKE_CAM(iLocal_155, "HAND_SHAKE", 0.3f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_233(int iParam0, var uParam1, var uParam2, float fParam3)//Position - 0x23FA3
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1049.7f, -2017.96f, 51.39f };
			*uParam2 = { 9.71f, 0f, 98.15f };
			*fParam3 = 20.049f;
			break;
		case 8:
			*uParam1 = { -204.37f, -1507.27f, 32.29f };
			*uParam2 = { -11.68f, 0f, -145.99f };
			*fParam3 = 50f;
			break;
		case 1:
			*uParam1 = { -1662.64f, -1130.31f, 43.65f };
			*uParam2 = { -5.97f, 0f, 147.26f };
			*fParam3 = 46.848f;
			break;
		case 2:
			*uParam1 = { -3004.91f, 105.2f, 20.73f };
			*uParam2 = { -17.32f, 0f, 141.87f };
			*fParam3 = 50f;
			break;
		case 3:
			*uParam1 = { -207.51f, -1487.31f, 31.75f };
			*uParam2 = { -5.94f, 0f, -167.82f };
			*fParam3 = 34f;
			break;
		case 4:
			*uParam1 = { -2652.32f, 1779.98f, 193.98f };
			*uParam2 = { -17.4f, 0f, -20.84f };
			*fParam3 = 35.217f;
			break;
		case 9:
			*uParam1 = { -2711.9f, 1910.3f, 175.9f };
			*uParam2 = { -1.4f, 0f, -102.8f };
			*fParam3 = 37.3f;
			break;
		case 10:
			*uParam1 = { -2710.6f, 1908.8f, 175.8f };
			*uParam2 = { -1.8f, 0f, -102.2f };
			*fParam3 = 37.3f;
			break;
		case 11:
			*uParam1 = { -2636f, 1881.8f, 160.1f };
			*uParam2 = { 1.9f, 0f, 137.1f };
			*fParam3 = 29.5f;
			break;
		case 12:
			*uParam1 = { -2636.4f, 1881.4f, 160.2f };
			*uParam2 = { 1.9f, 0f, 137.1f };
			*fParam3 = 29.5f;
			break;
		case 13:
			*uParam1 = { -2647.9f, 1870.5f, 159.8f };
			*uParam2 = { 8.3f, 0f, -63.4f };
			*fParam3 = 37.5f;
			break;
		case 14:
			*uParam1 = { -2648.1f, 1870.4f, 159.7f };
			*uParam2 = { 8.3f, 0f, -63.4f };
			*fParam3 = 37.5f;
			break;
		case 5:
			*uParam1 = { -2650.38f, 1863.76f, 160.21f };
			*uParam2 = { -1.2f, 0f, -7.92f };
			*fParam3 = 35.217f;
			break;
		case 15:
			*uParam1 = { -1570.94f, 5159f, 20.71f };
			*uParam2 = { 0.93f, 0f, 86.76f };
			*fParam3 = 40f;
			break;
		case 16:
			*uParam1 = { -1576.1322f, 5160.8877f, 24.1175f };
			*uParam2 = { 4.8389f, -0.011f, 92.1057f };
			*fParam3 = 40f;
			break;
		case 7:
			*uParam1 = { -1662.34f, -1123.84f, 43.28f };
			*uParam2 = { -3.22f, 0f, 28.53f };
			*fParam3 = 33.32f;
			break;
	}
}

void func_234(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)//Position - 0x2433C
{
	func_252(bParam2, 1, 1, 0);
	__LIB_1__::func_373(bParam0, 1, 1, 0, 0, 0, 0);
	if (bParam0)
	{
		__LIB_17__::func_111();
		HUD::DISPLAY_RADAR(false);
		HUD::DISPLAY_HUD(false);
		iLocal_359 = MISC::GET_GAME_TIMER();
	}
	else
	{
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			__LIB_0__::func_671(0);
			CAM::RENDER_SCRIPT_CAMS(false, bParam3, iParam6, true, false, 0);
			if (CAM::DOES_CAM_EXIST(iLocal_157))
			{
				CAM::DESTROY_CAM(iLocal_157, false);
			}
			__LIB_17__::func_98(&iLocal_155);
			__LIB_17__::func_98(&iLocal_156);
			if (bParam7)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		else if (bParam5)
		{
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
		}
		iLocal_182 = 0;
		iLocal_183 = 0;
		iLocal_184 = 0;
		iLocal_185 = 0;
		iLocal_48 = 0;
		if (bParam4)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
	}
}

int func_236()//Position - 0x2441C
{
	if (__LIB_17__::func_341() == 1)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_49[1];
}

int func_237()//Position - 0x2443B
{
	if (__LIB_17__::func_341() == 2)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_49[2];
}

int func_238()//Position - 0x2445A
{
	if (__LIB_17__::func_341() == 0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_49[0];
}

int func_245()//Position - 0x246EB
{
	if ((iLocal_42 == 0 && Local_108.f_1 == 0) && !__LIB_0__::func_719())
	{
		return 1;
	}
	return 0;
}

int func_247(char* sParam0, int iParam1, int iParam2)//Position - 0x24725
{
	if (iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if ((iParam2 || !__LIB_0__::func_75()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_245())
			{
				__LIB_0__::func_229(sParam0, 7500, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_249(struct<3> Param0, bool bParam1)//Position - 0x24787
{
	if (func_245())
	{
		return __LIB_0__::func_488(Param0, bParam1);
	}
	return 0;
}

void func_252(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x247E7
{
	if (bParam0)
	{
		__LIB_0__::func_325();
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_75() || (bParam0 && !bParam3))
		{
			HUD::CLEAR_PRINTS();
		}
		HUD::CLEAR_REMINDER_MESSAGE();
	}
	if (bParam2)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_364 + 1000)
		{
			HUD::CLEAR_HELP(true);
			iLocal_364 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_253()//Position - 0x2483B
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(iLocal_146))
	{
		HUD::REMOVE_BLIP(&iLocal_146);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_147))
	{
		HUD::REMOVE_BLIP(&iLocal_147);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_148))
	{
		HUD::REMOVE_BLIP(&iLocal_148);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_151))
	{
		HUD::REMOVE_BLIP(&iLocal_151);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_152))
	{
		HUD::REMOVE_BLIP(&iLocal_152);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_149[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_149[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_150[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_150[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_0__::func_621(&(Local_113[iVar0 /*14*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_0__::func_621(&(Local_114[iVar0 /*14*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		__LIB_0__::func_621(&(Local_115[iVar0 /*16*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_153[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_153[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_154[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_154[iVar0]));
		}
		iVar0++;
	}
}

int func_255()//Position - 0x24A15
{
	if (iLocal_203)
	{
		if (func_245())
		{
			if (__LIB_17__::func_620(&uLocal_418, "FINC1AU", &Local_591, &cLocal_592, 8, 0, 0))
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

int func_270(bool bParam0, bool bParam1, bool bParam2)//Position - 0x25123
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	char* sVar9;
	iVar1 = __LIB_17__::func_341();
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	bVar6 = true;
	bVar7 = true;
	bVar8 = false;
	switch (__LIB_17__::func_341())
	{
		case 0:
			iVar0 = 2;
			break;
		case 1:
			iVar0 = 0;
			break;
		case 2:
			if (iLocal_43 == 6)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (bParam1)
	{
		bVar5 = false;
	}
	if (bParam0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[iVar0], false))
		{
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(iLocal_49[iVar2]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_49[iVar2], iLocal_134[iVar0], false))
					{
						bVar4 = false;
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[iVar0], false))
			{
				bVar3 = false;
			}
		}
		else
		{
			bVar7 = false;
		}
	}
	if (bParam2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bVar6 = false;
		}
	}
	if (bVar7)
	{
		if (bVar5)
		{
			if (bVar3)
			{
				if (iLocal_365[iVar1] < 2)
				{
					iLocal_365[iVar1] = 2;
				}
				if (bVar4)
				{
					if (bVar6)
					{
						bVar8 = true;
						if (!__LIB_0__::func_719())
						{
							iLocal_204 = 0;
							bLocal_205 = false;
							return 1;
						}
					}
					else
					{
						if (!iLocal_204)
						{
							func_253();
							iLocal_204 = 1;
						}
						else
						{
							func_277();
						}
						if (!bLocal_205)
						{
							bLocal_205 = func_247("LOSE_WANTED" /* GXT: Lose the Cops. */, 1, 0);
							MISC::ENABLE_DISPATCH_SERVICE(1, true);
							MISC::ENABLE_DISPATCH_SERVICE(7, true);
							PED::SET_CREATE_RANDOM_COPS(true);
						}
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_147))
				{
					func_252(0, 1, 0, 0);
					func_253();
					if (iLocal_365[iVar1] == 0 || iLocal_365[iVar1] == 2)
					{
						iLocal_201 = 1;
					}
					iLocal_147 = func_274(iLocal_134[iVar0], 0);
				}
				if (iLocal_201)
				{
					switch (iLocal_365[iVar1])
					{
						case 0:
							switch (iVar0)
							{
								case 0:
									sVar9 = "CMN_GENGETINBK" /* GXT: ~s~Get on the ~b~bike. */;
									break;
								case 2:
									sVar9 = "CMN_MGETIN" /* GXT: ~s~Get in ~b~Michael's car.~s~ */;
									break;
								case 1:
									sVar9 = "CMN_TGETIN" /* GXT: ~s~Get in ~b~Trevor's truck.~s~ */;
									break;
								case 3:
									sVar9 = "FC2_GODCAR1";
									break;
							}
							break;
						case 2:
							switch (iVar0)
							{
								case 0:
									sVar9 = "CMN_GENGETBCKBK" /* GXT: ~s~Get on the ~b~bike. */;
									break;
								case 2:
									sVar9 = "CMN_MGETBCK" /* GXT: ~s~Get back in ~b~Michael's car.~s~ */;
									break;
								case 1:
									sVar9 = "CMN_TGETBCK" /* GXT: ~s~Get back in ~b~Trevor's truck.~s~ */;
									break;
								case 3:
									sVar9 = "FC2_GODCAR2";
									break;
							}
							break;
					}
					if (iLocal_202 || iLocal_43 != 6)
					{
						if (func_247(sVar9, 1, 0))
						{
							iLocal_201 = 0;
							iLocal_365[iVar1]++;
						}
					}
				}
			}
		}
	}
	if (!bVar5)
	{
	}
	if (!bVar8)
	{
		if (!iLocal_203)
		{
			if (func_271())
			{
				__LIB_0__::func_325();
			}
		}
	}
	return 0;
}

int func_271()//Position - 0x253B6
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "FINC1_DEVTAK"))
		{
			iLocal_203 = 1;
			Local_591 = { Var0 };
			cLocal_592 = { __LIB_0__::func_485() };
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0, bool bParam1)//Position - 0x254C4
{
	if (func_245())
	{
		return __LIB_0__::func_639(iParam0, bParam1, 0);
	}
	return 0;
}

void func_277()//Position - 0x25597
{
	if (HUD::DOES_BLIP_EXIST(iLocal_147))
	{
		HUD::REMOVE_BLIP(&iLocal_147);
	}
	if (((((((((__LIB_0__::func_501("CMN_GENGETINBK" /* GXT: ~s~Get on the ~b~bike. */, 0, 0) || __LIB_0__::func_501("CMN_MGETIN" /* GXT: ~s~Get in ~b~Michael's car.~s~ */, 0, 0)) || __LIB_0__::func_501("CMN_TGETIN" /* GXT: ~s~Get in ~b~Trevor's truck.~s~ */, 0, 0)) || __LIB_0__::func_501("FC2_GODCAR1", 0, 0)) || __LIB_0__::func_501("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 0, 0)) || __LIB_0__::func_501("CMN_GENGETBCKBK" /* GXT: ~s~Get on the ~b~bike. */, 0, 0)) || __LIB_0__::func_501("CMN_MGETBCK" /* GXT: ~s~Get back in ~b~Michael's car.~s~ */, 0, 0)) || __LIB_0__::func_501("CMN_TGETBCK" /* GXT: ~s~Get back in ~b~Trevor's truck.~s~ */, 0, 0)) || __LIB_0__::func_501("FC2_GODCAR2", 0, 0)) || __LIB_0__::func_501("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 0, 0))
	{
		func_252(1, 1, 0, 0);
	}
}

void func_279(int iParam0)//Position - 0x25673
{
	int iVar0;
	if (iLocal_172[iParam0])
	{
		iVar0 = func_74(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_172[iParam0] = 0;
	}
}

void func_281(char* sParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x256B2
{
	switch (iLocal_47)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam2, fParam2, fParam2, false, true, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
				iLocal_47 = 1;
			}
			break;
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_47 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam3, fParam3, fParam3, false, true, 0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_47 = 0;
			}
			break;
	}
}

Vector3 func_282(int iParam0)//Position - 0x25729
{
	switch (iParam0)
	{
		case 0:
			return 1020.9311f, -2038.863f, 29.85838f;
			break;
		case 1:
			return 1112.35f, -2003.9f, 34.44f;
			break;
		case 2:
			return 1114.1f, -2003.12f, 34.44f;
			break;
		case 3:
			return 1022.91f, -2041.58f, 30.01f;
			break;
		case 4:
			return 974.3848f, -2081.0105f, 29.98432f;
			break;
		case 5:
			return 989.6733f, -2076.105f, 30.06461f;
			break;
		case 6:
			return -2997.2878f, 93.6371f, 10.6077f;
			break;
		case 7:
			return -1602.93f, -1021.84f, 12.07f;
			break;
		case 8:
			return -2550.93f, 1912.22f, 167.96f;
			break;
		case 9:
			return -2637.5356f, 1599.7463f, 124.22569f;
			break;
		case 10:
			return -205.444f, -1489.52f, 30.9925f;
			break;
		case 11:
			return -2581.06f, 1930.49f, 166.3f;
			break;
		case 12:
			return -1608.71f, -1061.97f, 12.02f;
			break;
		case 13:
			return -210.93f, -1492.2f, 30.26f;
			break;
		case 14:
			return -1613.36f, -1010.51f, 12.04f;
			break;
		case 15:
			return -3008.57f, 109.54f, 12.07f;
			break;
		case 16:
			return -2555.5137f, 1912.5114f, 167.89706f;
			break;
		case 17:
			return -1576.47f, 5153.91f, 18.97f;
			break;
		case 18:
			return -1663.97f, -1120.88f, 41.7839f;
			break;
		case 19:
			return -2645.9895f, 1871.412f, 159.15147f;
			break;
		case 20:
			return -1663.97f, -1126.7f, 30.7f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_283(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x25972
{
	struct<2> Var0;
	if ((iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!__LIB_0__::func_75())
		{
			if (func_245())
			{
				if (iParam2 == 0)
				{
					return __LIB_17__::func_506(&uLocal_418, "FINC1AU", sParam0, 8, 0, 0, 0);
				}
				else
				{
					StringCopy(&Var0, sParam0, 16);
					StringConCat(&Var0, "_", 16);
					StringIntConCat(&Var0, iParam2, 16);
					if (!bParam3)
					{
						return __LIB_17__::func_507(&uLocal_418, "FINC1AU", sParam0, &Var0, 8, 0, 0);
					}
					else
					{
						return __LIB_17__::func_620(&uLocal_418, "FINC1AU", sParam0, &Var0, 8, 0, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_286()//Position - 0x25AAE
{
	int iVar0;
	bool bVar1;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_182)
	{
		func_823();
		if (!iLocal_253)
		{
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2654.7f, 1861.9f, 159.30399f, -2602.7f, 1925.2f, 168.7f, false, true, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2604.2065f, 1859.182f, 164.80421f, -2598.3015f, 1905.657f, 168.7f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (!PED::IS_PED_INJURED(Local_115[iVar0 /*16*/]))
					{
						PED::SET_PED_COMBAT_RANGE(Local_115[iVar0 /*16*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_115[iVar0 /*16*/], 57, false);
					}
					iVar0++;
				}
				iLocal_253 = 1;
			}
		}
		if (!bLocal_249)
		{
			if (!bLocal_250)
			{
				bLocal_250 = func_247("FC2_KIDDEV", 1, 0);
			}
		}
		else if (!bLocal_252)
		{
			bVar1 = false;
			if (bLocal_297)
			{
				if ((PED::IS_PED_INJURED(Local_115[iLocal_322 /*16*/]) || bLocal_299) || MISC::GET_GAME_TIMER() >= iLocal_324 + 1200)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				if (__LIB_0__::func_501("FC2_KIDDEV", 0, 0))
				{
					func_252(0, 1, 0, 0);
				}
				bLocal_252 = func_247("FC2_KILLGUA", 1, 0);
			}
		}
		else if (!bLocal_251)
		{
			if (iLocal_386 == 0)
			{
				bLocal_251 = func_247("FC2_KIDDEV", 1, 0);
			}
		}
		if (!bLocal_283)
		{
			if (bLocal_249)
			{
				func_42(19);
				func_33(20);
				bLocal_283 = __LIB_17__::func_99("FINC2_ALERTED");
			}
		}
		else if (!bLocal_284)
		{
			if (iLocal_386 == 0)
			{
				bLocal_284 = __LIB_17__::func_99("FINC2_ALL_DEAD");
			}
		}
		if (bLocal_249)
		{
			if (iLocal_386 > 0)
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					func_822("FINC1_TRECOM", 10000, 16000);
				}
				else
				{
					func_822("FINC1_DEVIN", 10000, 16000);
				}
			}
		}
		if (!bLocal_297)
		{
			if (iLocal_302 || bLocal_249)
			{
				if (__LIB_0__::func_501("FC2_KIDDEV", 0, 0))
				{
					func_252(0, 1, 0, 0);
				}
			}
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
			{
				if (iLocal_302 || bLocal_249)
				{
					if (iLocal_322 < 0)
					{
						iLocal_322 = func_821();
					}
					if (iLocal_322 >= 0)
					{
						if (!PED::IS_PED_INJURED(Local_115[iLocal_322 /*16*/]))
						{
							__LIB_0__::func_222(&uLocal_418, 7, Local_115[iLocal_322 /*16*/], "MERRYGUARD2", 0, 1);
							iLocal_324 = MISC::GET_GAME_TIMER();
							bLocal_297 = true;
						}
					}
				}
			}
		}
		else if (!bLocal_299)
		{
			if (!PED::IS_PED_INJURED(Local_115[iLocal_322 /*16*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_115[iLocal_322 /*16*/], 27f, 27f, 5f, false, true, 0))
				{
					if (!bLocal_303)
					{
						bLocal_299 = func_283("FINC1_MW2", 0, 0, 0);
					}
					else
					{
						bLocal_299 = func_283("FINC1_MW5", 0, 0, 0);
					}
					iLocal_325 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else if (!bLocal_300)
		{
			if (!PED::IS_PED_INJURED(Local_115[iLocal_322 /*16*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_115[iLocal_322 /*16*/], 27f, 27f, 5f, false, true, 0))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_325 + 8000)
					{
						if (!bLocal_303)
						{
							bLocal_300 = func_283("FINC1_MW3", 0, 0, 0);
						}
						else
						{
							bLocal_300 = func_283("FINC1_MW6", 0, 0, 0);
						}
					}
				}
			}
		}
		if (bLocal_249)
		{
			if (!iLocal_298)
			{
				if (bLocal_297)
				{
					if (MISC::GET_GAME_TIMER() >= (iLocal_324 + 45000) || iLocal_386 < 4)
					{
						if (PED::IS_PED_INJURED(Local_115[iLocal_322 /*16*/]))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
							{
								iLocal_323 = func_821();
								if (iLocal_323 >= 0)
								{
									__LIB_0__::func_222(&uLocal_418, 7, Local_115[iLocal_323 /*16*/], "MERRYGUARD2", 0, 1);
									iLocal_298 = 1;
								}
							}
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(Local_115[iLocal_323 /*16*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_115[iLocal_323 /*16*/], 27f, 27f, 5f, false, true, 0))
				{
					if (!bLocal_301)
					{
						if (!bLocal_303)
						{
							bLocal_301 = func_283("FINC1_MW6", 0, 0, 0);
						}
						else
						{
							bLocal_301 = func_283("FINC1_MW3", 0, 0, 0);
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_130))
		{
			if (iLocal_386 == 0)
			{
				func_281("fin_c2_mcs_5", -2648.7568f, 1872.554f, 159.15071f, 50f, 75f);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(iLocal_130))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", iLocal_130, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 0, 0, joaat("CS_Devin"));
					}
				}
				if (!iLocal_185)
				{
					if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_130, 3.5f, 3.5f, 2.5f, false, true, 0) && iLocal_123 == 2) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						iLocal_185 = 1;
					}
				}
				else if (!__LIB_0__::func_75())
				{
					if (__LIB_0__::func_90())
					{
						iLocal_182 = 1;
					}
				}
			}
		}
	}
	else
	{
		func_287();
	}
}

void func_287()//Position - 0x25F90
{
	int iVar0;
	switch (iLocal_48)
	{
		case 0:
			__LIB_17__::func_171(14, 1, 1);
			__LIB_17__::func_171(15, 1, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_130))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_130, "DEVIN", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[3]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_134[3]));
				MISC::CLEAR_AREA(func_282(11), 5f, true, false, false, false);
				func_728(6, 3, func_282(11), -106.61f, 1, 1, 0, 1, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_134[3], "TORNADO" /* GXT: Tornado */, 0, 0, 32);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_143, "p_devin_box_01_s", 0, 0, 0);
			}
			__LIB_17__::func_99("FINC2_WE_GOT_HIM");
			func_42(19);
			func_42(20);
			CUTSCENE::START_CUTSCENE(2048);
			iLocal_320 = 0;
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_360 = MISC::GET_GAME_TIMER();
			iLocal_48 = 1;
			break;
		case 1:
			if (!iLocal_184)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					__LIB_17__::func_621(-2550.6035f, 1909.2734f, 167.0294f, -2558.1077f, 1912.6925f, 172.8753f, 0.7f, -2551.91f, 1909.08f, 168.88f, 57.85f, __LIB_13__::func_790(), 1, 0, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
					{
						OBJECT::DELETE_OBJECT(&iLocal_144);
					}
					func_43();
					MISC::CLEAR_AREA(-2649.0588f, 1872.4543f, 159.72034f, 8f, true, false, false, false);
					MISC::CLEAR_AREA_OF_PROJECTILES(-2649.0588f, 1872.4543f, 159.72034f, 12f, 0);
					FIRE::STOP_FIRE_IN_RANGE(-2649.0588f, 1872.4543f, 159.72034f, 12f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-2649.0588f, 1872.4543f, 159.72034f, 12f);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_184 = 1;
				}
			}
			if (!iLocal_320)
			{
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_320 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tornado" /* GXT: Tornado */, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
				{
					func_719(iLocal_134[3]);
					bLocal_285 = true;
				}
			}
			else if (!bLocal_285)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_134[3], true, true, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[3], -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Devin", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_130))
				{
					PED::DELETE_PED(&iLocal_130);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_115[iVar0 /*16*/]))
					{
						if (PED::IS_PED_INJURED(Local_115[iVar0 /*16*/]))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_115[iVar0 /*16*/]));
						}
						else
						{
							PED::DELETE_PED(&(Local_115[iVar0 /*16*/]));
						}
					}
					iVar0++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
				{
					OBJECT::DELETE_OBJECT(&iLocal_143);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
				{
					OBJECT::DELETE_OBJECT(&iLocal_144);
				}
				RECORDING::REPLAY_STOP_EVENT();
				func_234(0, 1, 1, 0, 1, 0, 1000, 1);
				func_288(6, 0, 1, 1, 0, 1, 1, 1);
			}
			break;
		case 2:
			break;
	}
}

void func_288(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0x262DF
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	if (bParam1 && iParam0 == 0)
	{
		func_718();
	}
	if (bParam1 && !bParam4)
	{
		switch (iParam0)
		{
			case 0:
				switch (__LIB_17__::func_341())
				{
					case 1:
						if (iLocal_241)
						{
							Var0 = { func_717(1) - Vector(2f, 0f, 0f) };
							fVar1 = func_716(1);
						}
						else
						{
							Var0 = { func_282(3) };
							fVar1 = 144.89f;
						}
						break;
					case 0:
						if (iLocal_241)
						{
							Var0 = { func_717(0) - Vector(2f, 0f, 0f) };
							fVar1 = func_716(0);
						}
						else
						{
							Var0 = { func_282(5) };
							fVar1 = 88.6f;
						}
						break;
					case 2:
						if (iLocal_241)
						{
							Var0 = { func_717(2) - Vector(2f, 0f, 0f) };
							fVar1 = func_716(2);
						}
						else
						{
							Var0 = { func_282(4) };
							fVar1 = 86.1f;
						}
						break;
				}
				break;
			case 3:
				Var0 = { func_282(6) };
				fVar1 = 139.04f;
				break;
			case 1:
				Var0 = { func_282(7) };
				fVar1 = 226.07f;
				break;
			case 2:
				Var0 = { func_282(10) };
				fVar1 = 139.38f;
				break;
			case 4:
				Var0 = { func_282(9) };
				fVar1 = -24.33f;
				break;
			case 5:
				Var0 = { -2553.7725f, 1911.678f, 167.94528f };
				fVar1 = 62.4f;
				break;
			case 6:
				if (!bLocal_181)
				{
					Var0 = { func_282(11) };
					fVar1 = -106.61f;
				}
				else
				{
					Var0 = { func_282(17) };
					fVar1 = 9.1f;
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
		if (__LIB_0__::func_323() && !iLocal_279)
		{
			__LIB_0__::func_427(Var0, fVar1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar1);
		}
	}
	if (bParam4)
	{
		if (!__LIB_0__::func_323())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_134[0]))
			{
				iLocal_310 = 1;
			}
		}
	}
	if (bParam6)
	{
		func_711(iParam0, !bParam4, 0);
		func_707(iParam0, !bParam4, 0);
		func_703(iParam0, !bParam4, 0);
		func_699(iParam0, !bParam4, 0);
		func_695(iParam0, !bParam4, 0);
		func_691(iParam0, !bParam4, 0);
		func_687(iParam0, !bParam4, 0);
		func_683(iParam0, !bParam4, 0);
	}
	if (bParam4)
	{
		while (((((((!func_682() || !func_680()) || !func_678()) || !func_677()) || !func_676()) || !func_675()) || !func_673()) || !func_672())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (bParam1)
	{
		bVar2 = false;
		bVar3 = false;
		bVar4 = false;
		bVar5 = false;
		bVar6 = false;
		bVar2 = true;
		bVar3 = true;
		bVar4 = true;
		if (__LIB_0__::func_323() && !Global_94618)
		{
			if (__LIB_13__::func_821())
			{
				bVar5 = true;
				__LIB_14__::func_532();
				switch (iParam0)
				{
					case 1:
					case 4:
					case 5:
						bVar3 = false;
						break;
					case 3:
						bVar2 = false;
						break;
					case 2:
						bVar4 = false;
						break;
					}
				}
		}
		if (iParam0 < 4)
		{
			if (bVar2)
			{
				if (!Global_96880[1])
				{
					func_668(5);
				}
			}
			if (bVar4)
			{
				if (!Global_96880[0])
				{
					func_668(4);
				}
			}
			if (!Global_96880[1])
			{
				func_668(1);
			}
			if (!Global_96880[0])
			{
				func_668(0);
			}
		}
		if (bVar3)
		{
			func_668(6);
		}
		func_668(2);
		if (!bParam4)
		{
			__LIB_17__::func_102();
		}
		while (!func_682())
		{
			SYSTEM::WAIT(0);
		}
		if (bVar5)
		{
			while (!__LIB_14__::func_531())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bVar6)
		{
			while (!__LIB_16__::func_871())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	__LIB_17__::func_662(1);
	CUTSCENE::REMOVE_CUTSCENE();
	iLocal_47 = 0;
	func_652(iParam0);
	if (bParam1)
	{
		func_253();
	}
	if (iParam0 == 3)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	__LIB_17__::func_103(&uLocal_21, 0);
	__LIB_17__::func_661(&uLocal_21);
	__LIB_0__::func_345(&uLocal_21, 0, 0);
	func_252((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	if (bParam1)
	{
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iLocal_110[iVar7] = 0;
			iVar7++;
		}
	}
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
	if (bParam1)
	{
		if (iParam0 != 0 || !iLocal_241)
		{
			iVar8 = func_647(iParam0);
			bVar9 = __LIB_0__::func_682(iVar8);
			if (__LIB_17__::func_341() != iVar8)
			{
				while (!func_646(&(iLocal_49[bVar9]), iVar8, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!__LIB_32__::func_86(&iLocal_49, bVar9))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_600(&iLocal_49, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				iVar7 = 0;
				while (iVar7 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar7]))
					{
						PED::DELETE_PED(&(iLocal_49[iVar7]));
					}
					iVar7++;
				}
			}
		}
	}
	if (bParam1)
	{
		if (bParam1)
		{
			iVar7 = 0;
			while (iVar7 <= 9)
			{
				__LIB_0__::func_221(&uLocal_418, iVar7);
				iVar7++;
			}
		}
		if (!iLocal_241)
		{
			PATHFIND::SET_GPS_DISABLED_ZONE(func_598(1), func_597(1));
		}
		switch (__LIB_17__::func_341())
		{
			case 0:
				__LIB_0__::func_222(&uLocal_418, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				break;
			case 2:
				__LIB_0__::func_222(&uLocal_418, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				break;
			case 1:
				__LIB_0__::func_222(&uLocal_418, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				break;
		}
		iLocal_49.f_6 = __LIB_0__::func_682(func_647(iParam0));
		if (!bParam4)
		{
			iLocal_134[0] = 0;
			iLocal_134[2] = 0;
			iLocal_134[1] = 0;
		}
		if (!bParam4)
		{
			if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			}
		}
		func_385(iParam0, bParam4);
		func_384(PLAYER::PLAYER_PED_ID(), func_647(iParam0), iParam0);
		if (bParam4)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[0], false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[0], false))
				{
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false) && !PED::IS_PED_INJURED(iLocal_49[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_49[2], iLocal_134[1], false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_49[2], iLocal_134[1], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[2], false) && !PED::IS_PED_INJURED(iLocal_49[0]))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_49[0], iLocal_134[2], false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_49[0], iLocal_134[2], -1);
				}
			}
		}
		if (bParam1)
		{
			if (!bParam4)
			{
				__LIB_17__::func_102();
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (bParam1)
	{
		if ((iParam0 == 3 || iParam0 == 2) || iParam0 == 1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_240 = 1;
		}
		else
		{
			iLocal_240 = 0;
		}
	}
	else
	{
		iLocal_240 = 0;
	}
	if (bParam3)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	switch (iParam0)
	{
		case 0:
			if (bParam4)
			{
				func_81(0, 1);
				func_81(2, 1);
				func_81(1, 1);
			}
			if (bParam1)
			{
				__LIB_0__::func_467();
				func_382();
				bLocal_221 = false;
				iLocal_222 = 0;
				bLocal_223 = false;
				bLocal_224 = false;
				iLocal_407 = -1;
			}
			else
			{
				func_380(1);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_17__::func_99("FINC2_STEVE_START");
				iLocal_262 = 1;
				iLocal_189[2] = 1;
				iLocal_197 = 0;
				func_382();
				bLocal_234 = false;
				iLocal_235 = 0;
				iLocal_233 = 1;
			}
			else
			{
				iLocal_262 = 0;
				iLocal_188[2] = 1;
			}
			__LIB_0__::func_222(&uLocal_418, 8, 0, "LESTER", 0, 1);
			func_33(8);
			func_379();
			func_377();
			break;
		case 3:
			__LIB_17__::func_99("FINC2_CHENG_START");
			if (bParam1)
			{
				iLocal_309 = 1;
				iLocal_199 = 0;
				bLocal_214 = false;
			}
			else
			{
				iLocal_188[1] = 1;
			}
			func_33(2);
			func_377();
			break;
		case 2:
			__LIB_17__::func_99("FINC2_STRETCH_START");
			if (bParam1)
			{
				iLocal_308 = 1;
				bLocal_244 = true;
				iLocal_198 = 0;
			}
			else
			{
				iLocal_188[0] = 1;
			}
			if (!iLocal_198)
			{
				iLocal_117 = 0;
			}
			func_376();
			func_33(5);
			func_377();
			func_375(10000);
			break;
		case 4:
			__LIB_17__::func_645(&iLocal_49);
			if (bParam1)
			{
				iLocal_365[2] = 2;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[1], false))
				{
					iLocal_365[2] = 2;
				}
				else
				{
					iLocal_365[2] = 0;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_134[1]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_134[1]);
				}
			}
			break;
		case 5:
			if (bParam1)
			{
				func_368();
				__LIB_17__::func_99("FINC2_OUTSIDE_DEVINS");
				func_33(19);
			}
			break;
		case 6:
			__LIB_17__::func_171(14, 1, 1);
			__LIB_17__::func_171(15, 1, 1);
			PATHFIND::SET_GPS_DISABLED_ZONE(-2553.461f, 1814.8883f, 127.72006f, -2481.3787f, 1859.3654f, 194.89583f);
			__LIB_0__::func_221(&uLocal_418, 8);
			__LIB_0__::func_222(&uLocal_418, 7, 0, "DEVIN", 0, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[3], false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_134[3], 1);
			}
			iLocal_383 = (MISC::GET_GAME_TIMER() + 45000);
			break;
	}
	if (bParam1)
	{
		func_81(0, 1);
		func_81(2, 1);
		func_81(1, 1);
	}
	func_366();
	if (iParam0 == 3 || iParam0 == 2)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(7, false);
	}
	else if (iParam0 == 5)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(7, false);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(1, true);
		MISC::ENABLE_DISPATCH_SERVICE(7, true);
	}
	PED::SET_CREATE_RANDOM_COPS(false);
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_279)
		{
			if (__LIB_0__::func_323())
			{
				if (__LIB_0__::func_324())
				{
					switch (iParam0)
					{
						case 0:
							switch (__LIB_17__::func_341())
							{
								case 0:
									iVar10 = iLocal_134[2];
									break;
								case 1:
									iVar10 = iLocal_134[0];
									break;
								case 2:
									iVar10 = iLocal_134[1];
									break;
							}
							break;
						case 3:
							iVar10 = iLocal_134[0];
							break;
						case 2:
							iVar10 = iLocal_134[2];
							break;
						case 1:
						case 4:
							iVar10 = iLocal_134[1];
							break;
						case 6:
							iVar10 = iLocal_134[3];
							break;
					}
					iVar11 = 1;
					iVar12 = -1;
					__LIB_0__::func_433(iVar10, iVar12, iVar11);
					iLocal_279 = 1;
				}
			}
		}
		if (bParam1)
		{
			if (!bParam4)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (iParam0 == 4)
			{
				if (bParam1)
				{
					SYSTEM::WAIT(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_134[1], 20f);
					}
				}
			}
			else if (iParam0 == 0)
			{
				if (!bParam4)
				{
					if (iLocal_241)
					{
						switch (__LIB_17__::func_341())
						{
							case 2:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_134[1], 20f);
								}
								break;
							case 0:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[2], false))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_134[2], 20f);
								}
								break;
							case 1:
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[0], false))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_134[0], 20f);
								}
								break;
							}
					}
					if (__LIB_17__::func_341() == 1)
					{
						SYSTEM::WAIT(1000);
					}
				}
			}
		}
		if (iParam0 == 1)
		{
			if (bParam1)
			{
				if (!iLocal_197)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-80f);
				}
			}
		}
		else if (iParam0 == 2)
		{
			if (!iLocal_198)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(35f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			}
		}
		else if (iParam0 == 3)
		{
			if (!iLocal_199)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(-2984.5771f, 443.11536f, 14.05719f, 10000f, true, false, false, false, false, false, 0);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			}
		}
		if (iLocal_310)
		{
			func_362(iLocal_134[0]);
			STREAMING::REQUEST_ANIM_DICT("veh@bike@police@front@base");
			while (!STREAMING::HAS_ANIM_DICT_LOADED("veh@bike@police@front@base"))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "veh@bike@police@front@base", "still", 1000f, -2f, 1000, 0, 0f, false, false, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			}
			SYSTEM::WAIT(0);
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			STREAMING::REMOVE_ANIM_DICT("veh@bike@police@front@base");
			iLocal_310 = 0;
		}
	}
	iParam7 = iParam7;
	iVar13 = 0;
	iVar14 = 0;
	if (iParam0 >= 6)
	{
		iVar13 = 1;
	}
	if (((iParam0 == 1 || iParam0 == 2) || iParam0 == 3) || iParam0 == 0)
	{
		iVar14 = 1;
	}
	iLocal_357 = iLocal_357;
	if (__LIB_17__::func_660(iParam0))
	{
		func_289(iParam0, func_360(iParam0), iVar13, iVar14, 0, 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_357 = 0;
		}
	}
	iLocal_363 = MISC::GET_GAME_TIMER();
	iLocal_43 = iParam0;
}

void func_289(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2703D
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
		func_290(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_290(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x271B3
{
	func_291(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_291(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x271CF
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_17__::func_341();
	uParam0->f_1 = __LIB_11__::func_762();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_510(&(uParam0->f_2884), 0);
		__LIB_17__::func_442(PLAYER::PLAYER_PED_ID());
		__LIB_17__::func_619(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_17__::func_341())
		{
			__LIB_17__::func_665(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		__LIB_17__::func_668(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

char* func_360(int iParam0)//Position - 0x2F772
{
	switch (iParam0)
	{
		case 0:
			return "Get to the hits";
			break;
		case 1:
			return "Trevor kill Steve";
			break;
		case 2:
			return "Michael kill Stretch";
			break;
		case 3:
			return "Franklin kill Cheng";
			break;
		case 4:
			return "Get to Devin's house";
			break;
		case 5:
			return "Kidnap Devin";
			break;
		case 6:
			return "Get to the cliff";
			break;
	}
	return "invalid";
}

void func_362(int iParam0)//Position - 0x2F836
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) == -1)
		{
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), false, 4096, -1);
		}
	}
}

void func_366()//Position - 0x2F963
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		__LIB_16__::func_15(&iLocal_49, iVar1, 0);
		iVar0++;
	}
}

void func_368()//Position - 0x2F9A2
{
	func_371();
	func_369(1);
	func_728(4, 3, func_282(11), -106.61f, 1, 1, 0, 1, 0);
}

void func_369(bool bParam0)//Position - 0x2F9C9
{
	struct<3> Var0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar6 = 0;
	while (iVar6 < 8)
	{
		iVar4 = iVar6;
		if (!ENTITY::DOES_ENTITY_EXIST(Local_115[iVar6 /*16*/]) || !bParam0)
		{
			bVar2 = false;
			bVar3 = true;
			switch (iVar4)
			{
				case 0:
					iVar5 = 4;
					Var0 = { -2601.2144f, 1931.0475f, 166.29492f };
					fVar1 = 96.6f;
					bVar3 = false;
					break;
				case 1:
					iVar5 = 5;
					Var0 = { -2584.2134f, 1917.4308f, 166.29663f };
					fVar1 = 0.4f;
					bVar2 = true;
					break;
				case 2:
					iVar5 = 4;
					Var0 = { -2568.892f, 1887.7073f, 162.69647f };
					fVar1 = 143.3f;
					bVar2 = true;
					break;
				case 3:
					iVar5 = 4;
					Var0 = { -2600.3171f, 1860.2126f, 166.30408f };
					fVar1 = 128.8f;
					bVar2 = true;
					break;
				case 4:
					iVar5 = 5;
					Var0 = { -2626.8699f, 1876.525f, 162.42644f };
					fVar1 = -160.1f;
					bVar2 = true;
					break;
				case 5:
					iVar5 = 4;
					Var0 = { -2606.6887f, 1923.9072f, 166.38388f };
					fVar1 = 4.7f;
					bVar2 = true;
					break;
				case 6:
					iVar5 = 4;
					Var0 = { -2624.3076f, 1901.7643f, 162.42647f };
					fVar1 = 40.6f;
					bVar2 = true;
					break;
				case 7:
					iVar5 = 4;
					Var0 = { -2613.5115f, 1870.6552f, 166.30359f };
					fVar1 = 127.4f;
					bVar2 = true;
					break;
			}
			if (bParam0)
			{
				Local_115[iVar6 /*16*/] = PED::CREATE_PED(26, func_74(21), Var0, fVar1, true, true);
			}
			else if (!PED::IS_PED_INJURED(Local_115[iVar6 /*16*/]))
			{
				TASK::CLEAR_PED_TASKS(Local_115[iVar6 /*16*/]);
				ENTITY::SET_ENTITY_COORDS(Local_115[iVar6 /*16*/], Var0, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_115[iVar6 /*16*/], fVar1);
			}
			if (bParam0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_115[iVar6 /*16*/], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_115[iVar6 /*16*/], true);
				PED::SET_PED_KEEP_TASK(Local_115[iVar6 /*16*/], true);
				PED::SET_PED_DIES_WHEN_INJURED(Local_115[iVar6 /*16*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_115[iVar6 /*16*/], iLocal_584);
				WEAPON::GIVE_WEAPON_TO_PED(Local_115[iVar6 /*16*/], func_370(iVar5), -1, bVar3, true);
				PED::SET_PED_CONFIG_FLAG(Local_115[iVar6 /*16*/], 249, true);
				PED::SET_PED_CONFIG_FLAG(Local_115[iVar6 /*16*/], 42, true);
				PED::SET_PED_CONFIG_FLAG(Local_115[iVar6 /*16*/], 188, true);
				PED::SET_PED_SEEING_RANGE(Local_115[iVar6 /*16*/], 30f);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_115[iVar6 /*16*/]);
				TASK::SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Local_115[iVar6 /*16*/], false);
				PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_115[iVar6 /*16*/]);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_115[iVar6 /*16*/], Var0, 8f, false, false);
				PED::SET_PED_ACCURACY(Local_115[iVar6 /*16*/], 15);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_115[iVar6 /*16*/], "FINALE_MERRYWEATHER_GROUP", 0f);
			}
			Local_115[iVar6 /*16*/].f_9 = 0;
			Local_115[iVar6 /*16*/].f_10 = 0;
			Local_115[iVar6 /*16*/].f_14 = -1;
			Local_115[iVar6 /*16*/].f_15 = 0f;
			if (!bVar2)
			{
				Local_115[iVar6 /*16*/].f_11 = 0;
			}
			else
			{
				Local_115[iVar6 /*16*/].f_11 = 1;
			}
			Local_115[iVar6 /*16*/].f_12 = 0;
			switch (iVar4)
			{
				case 0:
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_115[iVar6 /*16*/], "WORLD_HUMAN_SMOKING", -1, false);
					break;
				}
		}
		iVar6++;
	}
	bLocal_299 = false;
	bLocal_300 = false;
	bLocal_301 = false;
	bLocal_297 = false;
	iLocal_298 = 0;
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
	{
		bLocal_303 = true;
	}
	else
	{
		bLocal_303 = false;
	}
	iLocal_302 = 0;
	iLocal_322 = -1;
	iLocal_323 = -1;
	bLocal_255 = false;
	iLocal_408 = -1;
	bLocal_249 = false;
	iLocal_387 = 0;
}

int func_370(int iParam0)//Position - 0x2FD4D
{
	switch (iParam0)
	{
		case 0:
			return joaat("WEAPON_HEAVYSNIPER");
			break;
		case 1:
			return joaat("WEAPON_PISTOL");
			break;
		case 2:
			return joaat("WEAPON_MICROSMG");
			break;
		case 3:
			return joaat("WEAPON_STICKYBOMB");
			break;
		case 4:
			return joaat("WEAPON_CARBINERIFLE");
			break;
		case 5:
			return joaat("WEAPON_PUMPSHOTGUN");
			break;
	}
	return joaat("WEAPON_UNARMED");
}

void func_371()//Position - 0x2FDC7
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_130))
	{
		__LIB_16__::func_930(&iLocal_130, 29, -2644.4492f, 1872.9116f, 159.15158f, -75.3f, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		iLocal_143 = OBJECT::CREATE_OBJECT(func_74(26), -2649.078f, 1872.5195f, 159.15074f, true, true, false);
		ENTITY::SET_ENTITY_HEADING(iLocal_143, 120.81f);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_143, 250);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_143, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_144))
	{
		iLocal_144 = OBJECT::CREATE_OBJECT(func_74(27), -2649.468f, 1872.2896f, 159.00073f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_144, 65f, 0f, 120.81f, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_144, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_145))
	{
		iLocal_145 = OBJECT::CREATE_OBJECT(func_74(28), -2644f, 1872f, 160f, true, true, false);
	}
	iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(-2645.961f, 1872.599f, 159.153f, 0f, 0f, 102.44f, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_397, true);
	if (!PED::IS_PED_INJURED(iLocal_130))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_130, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_130, true);
		PED::SET_PED_KEEP_TASK(iLocal_130, true);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_130, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 8, 3, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 10, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 4, 4, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 3, 5, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_130, 11, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_130, iLocal_397, func_37(12), "LOUNGE_LOOP_DEV", 1000f, -8f, 1, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_143, iLocal_397, "LOUNGE_LOOP_BOX", func_37(12), 1000f, 8f, 0, 1000f);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_145, iLocal_397, "LOUNGE_LOOP_TAB", func_37(12), 1000f, 8f, 0, 1000f);
		PED::SET_PED_CONFIG_FLAG(iLocal_130, 227, true);
		__LIB_0__::func_222(&uLocal_418, 8, iLocal_130, "DEVIN", 0, 1);
		iLocal_123 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_128 = 0;
	}
}

void func_375(int iParam0)//Position - 0x300DC
{
	if (iParam0 >= 0)
	{
		iLocal_362 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		iLocal_362 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
	}
}

void func_376()//Position - 0x30109
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_370(1), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), func_370(1), 32, false, false);
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_370(1)) < 32)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), func_370(1), 32, false);
		}
	}
}

void func_377()//Position - 0x30165
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		iVar2 = __LIB_0__::func_682(iVar1);
		if (Global_96880[iVar1])
		{
			iLocal_119[iVar1] = 1;
			iLocal_49.f_18[iVar2] = 1;
		}
		else
		{
			iLocal_381[iVar0] = (func_378(iVar0) - 1);
			iLocal_194[iVar0] = 0;
			iLocal_119[iVar1] = 0;
			iLocal_49.f_18[iVar2] = 0;
		}
		iVar0++;
	}
}

int func_378(int iParam0)//Position - 0x301D2
{
	switch (iParam0)
	{
		case 2:
			return 9;
			break;
		case 1:
			return 11;
			break;
		case 0:
			return 3;
			break;
	}
	return 0;
}

void func_379()//Position - 0x3020B
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_370(0), false))
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), func_370(0), 20, false, false);
		}
		else if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_370(0)) < 20)
		{
			WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), func_370(0), 20, false);
		}
	}
}

void func_380(bool bParam0)//Position - 0x30267
{
	int iVar0;
	bool bVar1;
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
		{
			bVar1 = true;
			func_381(iLocal_49[iVar0], bVar1);
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (bParam0)
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 1);
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 211, false);
		if (iLocal_43 < 0)
		{
			PED::SET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200, 0);
		}
	}
}

void func_381(int iParam0, bool bParam1)//Position - 0x3030A
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("PLAYER"));
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, bParam1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam0, 3);
	PED::SET_PED_CAN_SWITCH_WEAPON(iParam0, false);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
	PED::SET_PED_MAX_HEALTH(iParam0, 10000);
	ENTITY::SET_ENTITY_HEALTH(iParam0, 10000, 0);
}

void func_382()//Position - 0x30383
{
	fLocal_340 = 0f;
	fLocal_341 = 0f;
	iLocal_233 = 0;
	iLocal_273 = 0;
}

void func_384(int iParam0, bool bParam1, int iParam2)//Position - 0x303A3
{
	iParam2 = iParam2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (bParam1)
		{
			case 0:
				func_175(iParam0, 12, 27, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				break;
			case 2:
				func_175(iParam0, 12, 46, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				break;
			}
	}
}

void func_385(int iParam0, bool bParam1)//Position - 0x303FC
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	switch (iParam0)
	{
		case 0:
			if (iLocal_241)
			{
				if (__LIB_17__::func_341() == 1)
				{
					Var0 = { func_717(1) };
					fVar3 = func_716(1);
				}
				else
				{
					Var0 = { func_596(1) };
					fVar3 = 0f;
				}
			}
			else
			{
				Var0 = { func_282(3) };
				fVar3 = 144.89f;
			}
			if (iLocal_241)
			{
				if (__LIB_17__::func_341() == 0)
				{
					Var1 = { func_717(0) };
					fVar4 = func_716(0);
				}
				else
				{
					Var1 = { func_596(0) };
					fVar4 = 0f;
				}
			}
			else
			{
				Var1 = { func_596(0) };
				fVar4 = 0f;
			}
			if (iLocal_241)
			{
				if (__LIB_17__::func_341() == 2)
				{
					Var2 = { func_717(2) };
					fVar5 = func_716(2);
				}
				else
				{
					Var2 = { func_596(2) };
					fVar5 = 0f;
				}
			}
			else
			{
				Var2 = { func_596(2) };
				fVar5 = 0f;
			}
			if (!Global_96880[1])
			{
				func_728(iParam0, 0, Var0, fVar3, 0, 1, 0, 0, !iLocal_241);
				if (__LIB_17__::func_341() != 1)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[0], true);
				}
			}
			if (!Global_96880[0])
			{
				func_728(iParam0, 2, Var1, fVar4, 0, 1, 0, 1, 1);
				if (__LIB_17__::func_341() != 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[2], true);
				}
			}
			func_728(iParam0, 1, Var2, fVar5, 0, 1, 0, 1, 1);
			if (__LIB_17__::func_341() != 2)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[1], true);
			}
			break;
		case 1:
		case 3:
		case 2:
			if (!Global_96880[1])
			{
				if (iParam0 == 3)
				{
					func_728(iParam0, 0, func_282(6), 139.04f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_728(iParam0, 0, func_596(1), 0f, 0, 1, 0, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[0], true);
				}
			}
			if (!Global_96880[0])
			{
				if (iParam0 == 2)
				{
					func_728(iParam0, 2, func_282(10), 139.38f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_728(iParam0, 2, func_596(0), 0f, 0, 1, 0, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[2], true);
				}
			}
			if (!Global_96880[2])
			{
				if (iParam0 == 1)
				{
					func_728(iParam0, 1, func_282(7), 226.07f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_728(iParam0, 1, func_596(2), 0f, 0, 1, 0, 1, 1);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[1], true);
				}
			}
			else
			{
				func_728(iParam0, 1, func_596(2), 226.07f, 0, 1, 0, 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[1], true);
			}
			break;
		case 4:
			func_728(iParam0, 1, func_282(9), -24.33f, 0, 1, 0, 1, 1);
			break;
		case 5:
			func_728(iParam0, 1, func_282(8), 71.08f, 0, 1, 0, 1, 1);
			break;
		case 6:
			func_728(iParam0, 1, func_282(8), 71.08f, 0, 0, 0, 1, 1);
			if (!bLocal_181)
			{
				func_728(iParam0, 3, func_282(11), -106.61f, 1, 1, 0, 1, 1);
			}
			else
			{
				func_728(iParam0, 3, func_282(17), 9.1f, 1, 1, 0, 1, 1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			switch (__LIB_17__::func_341())
			{
				case 1:
					if (!Global_96880[0])
					{
						func_387(0, iParam0, 0f, 0f, 0f, 0f, iLocal_134[2], -1, 0);
					}
					else
					{
						__LIB_0__::func_222(&uLocal_418, 0, 0, "MICHAEL", 0, 1);
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[0], false))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, false, false, true);
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[0], -1);
					}
					func_387(2, iParam0, 0f, 0f, 0f, 0f, iLocal_134[1], -1, 0);
					func_386();
					if (!bParam1)
					{
						func_362(iLocal_134[0]);
					}
					break;
				case 0:
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[2], -1);
					if (!Global_96880[1])
					{
						func_387(1, iParam0, 0f, 0f, 0f, 0f, iLocal_134[0], -1, 0);
					}
					else
					{
						__LIB_0__::func_222(&uLocal_418, 2, 0, "FRANKLIN", 0, 1);
					}
					func_387(2, iParam0, 0f, 0f, 0f, 0f, iLocal_134[1], -1, 0);
					func_386();
					if (!bParam1)
					{
						func_362(iLocal_134[2]);
					}
					break;
				case 2:
					if (!Global_96880[0])
					{
						func_387(0, iParam0, 0f, 0f, 0f, 0f, iLocal_134[2], -1, 0);
					}
					else
					{
						__LIB_0__::func_222(&uLocal_418, 0, 0, "MICHAEL", 0, 1);
					}
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[1], -1);
					if (!Global_96880[1])
					{
						func_387(1, iParam0, 0f, 0f, 0f, 0f, iLocal_134[0], -1, 0);
					}
					else
					{
						__LIB_0__::func_222(&uLocal_418, 2, 0, "FRANKLIN", 0, 1);
					}
					func_386();
					if (!bParam1)
					{
						func_362(iLocal_134[1]);
					}
					break;
			}
			break;
		case 1:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[1], -1);
			if (!Global_96880[0])
			{
				func_387(0, iParam0, 0f, 0f, 0f, 0f, iLocal_134[2], -1, 0);
			}
			else
			{
				__LIB_0__::func_222(&uLocal_418, 0, 0, "MICHAEL", 0, 1);
			}
			if (!Global_96880[1])
			{
				func_387(1, iParam0, 0f, 0f, 0f, 0f, iLocal_134[0], -1, 0);
			}
			else
			{
				__LIB_0__::func_222(&uLocal_418, 2, 0, "FRANKLIN", 0, 1);
			}
			func_386();
			func_362(iLocal_134[1]);
			break;
		case 2:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[2], -1);
			if (!Global_96880[1])
			{
				func_387(1, iParam0, 0f, 0f, 0f, 0f, iLocal_134[0], -1, 0);
			}
			else
			{
				__LIB_0__::func_222(&uLocal_418, 2, 0, "FRANKLIN", 0, 1);
			}
			func_387(2, iParam0, 0f, 0f, 0f, 0f, iLocal_134[1], -1, 0);
			func_386();
			func_362(iLocal_134[2]);
			break;
		case 3:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[0], -1);
			if (!Global_96880[0])
			{
				func_387(0, iParam0, 0f, 0f, 0f, 0f, iLocal_134[2], -1, 0);
			}
			else
			{
				__LIB_0__::func_222(&uLocal_418, 0, 0, "MICHAEL", 0, 1);
			}
			func_387(2, iParam0, 0f, 0f, 0f, 0f, iLocal_134[1], -1, 0);
			func_386();
			func_362(iLocal_134[0]);
			break;
		case 4:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[1], -1);
			func_362(iLocal_134[1]);
			break;
		case 5:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -2553.9614f, 1910.7549f, 167.91422f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 57.3f);
			func_362(iLocal_134[1]);
			break;
		case 6:
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_134[3], -1);
			break;
	}
}

void func_386()//Position - 0x30A73
{
	int iVar0;
	iVar0 = func_236();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (!PED::IS_PED_WEARING_HELMET(iVar0))
		{
			PED::SET_PED_HELMET_PROP_INDEX(iVar0, 6, true);
			PED::SET_PED_HELMET_TEXTURE_INDEX(iVar0, 0);
		}
	}
}

void func_387(bool bParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x30AA4
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_682(bParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam4, false))
		{
			while (!func_388(&(iLocal_49[iVar0]), bParam0, iParam4, iParam5, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_646(&(iLocal_49[iVar0]), bParam0, Param2, fParam3, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bParam6)
		{
			bVar1 = false;
			while (!bVar1)
			{
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_49[iVar0]))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_49[iVar0]))
	{
		bVar2 = false;
		bVar2 = true;
		func_381(iLocal_49[iVar0], bVar2);
		switch (bParam0)
		{
			case 0:
				__LIB_0__::func_222(&uLocal_418, 0, iLocal_49[iVar0], "MICHAEL", 0, 1);
				break;
			case 2:
				__LIB_0__::func_222(&uLocal_418, 1, iLocal_49[iVar0], "TREVOR", 0, 1);
				break;
			case 1:
				__LIB_0__::func_222(&uLocal_418, 2, iLocal_49[iVar0], "FRANKLIN", 0, 1);
				break;
		}
		func_384(iLocal_49[iVar0], bParam0, iParam1);
	}
}

int func_388(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x30BD6
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_16__::func_512(bParam1);
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
				func_588(*iParam0);
				__LIB_17__::func_456(*iParam0, 1, 0);
				__LIB_17__::func_449(*iParam0);
				__LIB_17__::func_448(*iParam0);
				func_390(*iParam0, bParam6);
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

int func_390(int iParam0, bool bParam1)//Position - 0x30D01
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_17__::func_107(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_394(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_394(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_98(iParam0, 3, 169))
					{
						func_175(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_98(iParam0, 12, 6))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 11))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 12, 10))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 12, 50))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 14, 59))
			{
				func_175(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_98(iParam0, 8, 22))
			{
				func_175(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_98(iParam0, 12, 14))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_98(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 4))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 12, 3))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 14, 82))
			{
				func_175(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_98(iParam0, 8, 76))
			{
				func_175(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_98(iParam0, 12, 1))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_98(iParam0, 12, 12))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 12, 15))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_98(iParam0, 3, 71))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_98(iParam0, 12, 7))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 12, 6))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_98(iParam0, 14, 88))
			{
				func_175(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_98(iParam0, 8, 17))
			{
				func_175(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_98(iParam0, 12, 11))
			{
				func_175(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_394(int iParam0, int iParam1)//Position - 0x31492
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_17__::func_107(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_179(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_401(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_17__::func_665(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_28__::func_248();
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

void func_401(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x31B1B
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
		iVar0 = __LIB_17__::func_107(iParam0);
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
			if (func_85(iParam0, iVar1, &iVar2, 0))
			{
				func_175(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_83(iParam0, iVar1, &iVar2))
			{
				func_175(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_567(iParam0);
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
			func_404(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_404(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_404(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_404(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x31FF7
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
			func_528(iVar5, iParam1, iParam2, 1);
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
						func_528(iVar5, 10, 0, 1);
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
									func_528(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_404(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_528(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_527(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_404(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_521(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_528(iVar5, 14, uVar18[iVar1], 1);
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
							func_404(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_528(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_404(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_513(iParam0);
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
						func_404(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_512(iVar5, iVar24, iVar23, iVar25);
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
							func_404(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_404(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_404(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_404(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_404(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_404(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_404(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_521(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_512(iVar5, func_527(iParam0, 8, -1), iParam2, func_527(iParam0, 4, -1));
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
				func_447(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_512(iVar5, iParam2, iVar44, iVar45);
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
			func_521(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_512(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_404(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_404(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_512(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_512(iVar5, iVar58, iVar57, iParam2);
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
						func_404(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_512(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_424(iParam0, 9, iVar63))
						{
							func_404(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_404(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_404(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_404(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_527(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_527(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_404(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_404(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_404(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_404(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_513(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_404(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_405(iParam0, &uVar4))
		{
			func_404(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_404(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_404(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_404(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_527(iParam0, 3, -1), iVar10);
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
				func_404(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_405(int iParam0, var uParam1)//Position - 0x33EA1
{
	int iVar0;
	int iVar1;
	*uParam1 = func_527(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_424(iParam0, iVar1, iVar0))
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

int func_424(int iParam0, int iParam1, int iParam2)//Position - 0x3815F
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
				if (!func_424(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_424(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_424(iParam0, 14, iVar6))
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
			if (!func_424(iParam0, 14, uVar11[iVar10]))
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
						return func_424(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_424(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_447(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3EE75
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
	func_448(iParam0, bParam3, 0, -1);
}

void func_448(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x3EEC2
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
		bVar3 = func_492(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_483(iParam0, iParam3);
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

int func_483(int iParam0, int iParam1)//Position - 0x4E1BC
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
				iVar3 = func_527(iParam0, 11, -1);
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
				iVar5 = func_527(iParam0, 11, -1);
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

int func_492(int iParam0, bool bParam1)//Position - 0x4E61A
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_527(iParam0, 11, -1), 0);
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
						iVar3 = func_527(iParam0, 11, -1);
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
						iVar5 = func_527(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_527(iParam0, 11, -1), 0);
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
						iVar8 = func_527(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_527(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_527(iParam0, 11, -1), 0);
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
						iVar12 = func_527(iParam0, 8, -1);
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

int func_512(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x574A6
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
					iVar0 = func_512(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_512(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_513(int iParam0)//Position - 0x587E2
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
		if (!func_518(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_518(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_518(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x591AC
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_527(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_521(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5BAC6
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_567(iParam0))
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

int func_527(int iParam0, int iParam1, int iParam2)//Position - 0x5BD77
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
				if (func_424(iParam0, iParam1, iVar0))
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
				if (func_424(iParam0, iParam1, iVar1))
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

void func_528(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5BE18
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
							func_528(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_528(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_528(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_528(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_528(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_528(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_528(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_528(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_528(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_528(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_567(int iParam0)//Position - 0x74AC2
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
				iVar1 = func_527(iParam0, 11, -1);
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
				iVar3 = func_527(iParam0, 11, -1);
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

void func_588(int iParam0)//Position - 0x760BA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_17__::func_107(iParam0);
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
		func_401(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_179(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_589(__LIB_16__::func_512(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_179(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_179(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_589(__LIB_16__::func_512(0), 3, 70, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 3, 71, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 3, 72, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 3, 73, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 3, 74, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 3, 75, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 4, 41, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 4, 42, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 4, 43, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 4, 44, 1, 0, 0, 0);
					func_589(__LIB_16__::func_512(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_179(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_401(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_589(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x76317
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_592(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_592(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x764D2
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
								func_592(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_592(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_592(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_592(iParam0, 14, iVar5, 1, 0);
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
								func_592(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_592(iParam0, 14, 17, 1, 0);
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

Vector3 func_596(int iParam0)//Position - 0x76AB7
{
	switch (iParam0)
	{
		case 0:
			return -2480.6f, 754.2f, 92.7f;
			break;
		case 2:
			return -2460.6f, 754.2f, 92.7f;
			break;
		case 1:
			return -2440.6f, 754.2f, 92.7f;
			break;
	}
	return 2163f, 7982f, 110f;
}

Vector3 func_597(int iParam0)//Position - 0x76B26
{
	switch (iParam0)
	{
		case 2:
			return 588f, -357f, 100f;
			break;
		case 1:
			return 183f, -1040f, 100f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_598(int iParam0)//Position - 0x76B6E
{
	switch (iParam0)
	{
		case 2:
			return -343f, -1993f, -100f;
			break;
		case 1:
			return -398f, -1862f, -100f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_600(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x76BD3
{
	int iVar0;
	int iVar1;
	int iVar2;
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
		iVar1 = __LIB_17__::func_341();
		if (!uParam0->f_23)
		{
			__LIB_17__::func_669(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_17__::func_669((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_17__::func_107(PLAYER::PLAYER_PED_ID()))
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
		if (__LIB_0__::func_374(__LIB_17__::func_341()))
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
		uParam0->f_5 = __LIB_0__::func_682(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_682(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_17__::func_438(iVar7);
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
				__LIB_17__::func_438(iVar0);
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
		__LIB_17__::func_501();
		__LIB_13__::func_799(iVar2);
		__LIB_28__::func_248();
		__LIB_13__::func_822(iVar2);
		__LIB_17__::func_625(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
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
		__LIB_13__::func_818(iVar2, &iVar7);
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
			__LIB_17__::func_500();
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

int func_646(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x7C4CD
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_16__::func_512(bParam1);
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
			func_588(*iParam0);
			__LIB_17__::func_456(*iParam0, 1, 0);
			__LIB_17__::func_449(*iParam0);
			__LIB_17__::func_448(*iParam0);
			func_390(*iParam0, bParam6);
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

int func_647(int iParam0)//Position - 0x7C56C
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 0;
			break;
		case 3:
			return 1;
			break;
		case 4:
			return 2;
			break;
		case 5:
			return 2;
			break;
		case 6:
			return 2;
			break;
	}
	return 0;
}

void func_652(int iParam0)//Position - 0x7C6F7
{
	int iVar0;
	func_653();
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				iLocal_365[iVar0] = 2;
				bLocal_187[iVar0] = 0;
				iVar0++;
			}
			bLocal_218 = false;
			bLocal_219 = false;
			iLocal_220 = 0;
			bLocal_214 = false;
			iLocal_198 = 0;
			iLocal_197 = 0;
			iLocal_199 = 0;
			iLocal_211 = 0;
			iLocal_212 = 0;
			iLocal_238 = 0;
			iLocal_213 = 0;
			iLocal_117 = 0;
			break;
		case 1:
			iLocal_125 = 0;
			Global_96880[2] = 0;
			iLocal_189[2] = 0;
			iLocal_188[2] = 0;
			bLocal_190[2] = 0;
			iLocal_191[2] = 0;
			bLocal_192[2] = 0;
			iLocal_195 = 0;
			bLocal_196 = false;
			bLocal_208 = false;
			iLocal_238 = 0;
			bLocal_266 = false;
			bLocal_267 = false;
			iLocal_269 = 0;
			iLocal_274 = 0;
			bLocal_275 = false;
			iLocal_276 = 0;
			bLocal_277 = false;
			iLocal_278 = 0;
			bLocal_287 = false;
			iLocal_292 = 0;
			iLocal_311 = 0;
			iLocal_312 = 0;
			bLocal_315 = false;
			iLocal_4320 = 0;
			bLocal_317 = false;
			iLocal_318 = 0;
			iLocal_594 = 0;
			Local_1835.f_0 = 0;
			Local_3075.f_0 = 0;
			bLocal_4315 = false;
			bLocal_4316 = false;
			iLocal_593 = 0;
			iLocal_394 = 0;
			iLocal_403 = 0;
			fLocal_352 = 0f;
			break;
		case 3:
			Global_96880[1] = 0;
			iLocal_216 = 0;
			iLocal_217 = 0;
			iLocal_189[1] = 0;
			iLocal_188[1] = 0;
			bLocal_190[1] = 0;
			iLocal_191[1] = 0;
			bLocal_192[1] = 0;
			iLocal_195 = 0;
			bLocal_196 = false;
			bLocal_209 = false;
			iLocal_231 = 0;
			iLocal_232 = 0;
			bLocal_265 = false;
			iLocal_272 = 0;
			iLocal_295 = 0;
			iLocal_305 = 0;
			iLocal_118 = 0;
			iLocal_409 = 0;
			fLocal_356 = 0f;
			break;
		case 2:
			Global_96880[0] = 0;
			iLocal_189[0] = 0;
			iLocal_188[0] = 0;
			bLocal_190[0] = 0;
			iLocal_191[0] = 0;
			bLocal_192[0] = 0;
			iLocal_195 = 0;
			bLocal_196 = false;
			iLocal_211 = 0;
			iLocal_212 = 0;
			iLocal_213 = 0;
			bLocal_225 = false;
			bLocal_244 = false;
			iLocal_245 = 0;
			bLocal_226 = false;
			iLocal_227 = 0;
			bLocal_228 = false;
			iLocal_229 = 0;
			iLocal_230 = 0;
			bLocal_210 = false;
			bLocal_242 = false;
			iLocal_243 = 0;
			iLocal_246 = 0;
			iLocal_256 = 0;
			iLocal_294 = 0;
			iLocal_304 = 0;
			iLocal_375 = 0;
			iLocal_376 = 0;
			iLocal_412 = -1;
			iLocal_118 = 0;
			break;
		case 4:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Global_96880[iVar0] = 1;
				iVar0++;
			}
			iLocal_124 = 0;
			iLocal_111 = 0;
			bLocal_261 = false;
			iLocal_293 = 0;
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Global_96880[iVar0] = 1;
				iVar0++;
			}
			bLocal_250 = false;
			bLocal_251 = false;
			bLocal_252 = false;
			iLocal_253 = 0;
			bLocal_254 = false;
			bLocal_283 = false;
			bLocal_284 = false;
			bLocal_285 = false;
			iLocal_291 = 0;
			iLocal_399 = 1;
			break;
		case 6:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				Global_96880[iVar0] = 1;
				iVar0++;
			}
			iLocal_109 = 0;
			iLocal_121 = 0;
			iLocal_365[2] = 2;
			iLocal_215 = 0;
			bLocal_290 = false;
			iLocal_296 = 0;
			iLocal_306 = 0;
			iLocal_307 = 0;
			bLocal_314 = false;
			fLocal_339 = 9f;
			fLocal_343 = 0f;
			break;
	}
}

void func_653()//Position - 0x7C9E6
{
	iLocal_45 = 0;
	iLocal_46 = 0;
	iLocal_48 = 0;
	iLocal_182 = 0;
	iLocal_183 = 0;
	iLocal_184 = 0;
	iLocal_185 = 0;
	bLocal_186 = false;
	iLocal_200 = 0;
	iLocal_201 = 0;
	iLocal_202 = 0;
	iLocal_203 = 0;
	iLocal_204 = 0;
	bLocal_205 = false;
	iLocal_236 = 0;
	iLocal_237 = 0;
	iLocal_362 = -1;
	Local_108.f_0 = __LIB_0__::func_682(__LIB_17__::func_341());
	Local_108.f_1 = 0;
}

void func_668(int iParam0)//Position - 0x80123
{
	int iVar0;
	iVar0 = func_74(iParam0);
	STREAMING::REQUEST_MODEL(iVar0);
	iLocal_172[iParam0] = 1;
}

int func_672()//Position - 0x80185
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_179[iVar0])
		{
			switch (iVar0)
			{
				case 0:
					return 0;
					break;
				}
		}
		iVar0++;
	}
	return 1;
}

int func_673()//Position - 0x801BE
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iLocal_178[iVar0])
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_674(iVar0), false, -1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_674(int iParam0)//Position - 0x801F7
{
	switch (iParam0)
	{
		case 0:
			return "FINALE_C2_DEVIN_INSIDE_TRUNK";
			break;
		case 1:
			return "FINALE_C2_STEVE_CAMERAMAN_DEATH";
			break;
	}
	return "invalid!";
}

int func_675()//Position - 0x8022C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_177[iVar0])
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

int func_676()//Position - 0x8025D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_176[iVar0])
		{
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(func_370(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_677()//Position - 0x80294
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (iLocal_175[iVar0])
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_37(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_678()//Position - 0x802CC
{
	int iVar0;
	struct<4> Var1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iLocal_174[iVar0])
		{
			Var1 = { func_679(iVar0) };
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

struct<4> func_679(int iParam0)//Position - 0x8030A
{
	struct<4> Var0;
	StringCopy(&Var0, "finc2", 16);
	StringIntConCat(&Var0, iParam0 + 1, 16);
	return Var0;
}

int func_680()//Position - 0x80327
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iLocal_173[iVar0])
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar0 + 1, __LIB_17__::func_663()))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_682()//Position - 0x8036E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iLocal_172[iVar0] == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(func_74(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_683(int iParam0, bool bParam1, bool bParam2)//Position - 0x803A7
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (func_686(iVar1, iParam0))
		{
			func_685(iVar1);
		}
		else if (!func_686(iVar1, iLocal_43) || !bParam2)
		{
			func_684(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_672())
		{
			__LIB_17__::func_102();
			while (!func_672())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_684(int iParam0)//Position - 0x80415
{
	if (iLocal_179[iParam0])
	{
		iLocal_179[iParam0] = 0;
		switch (iParam0)
		{
			case 0:
				break;
			}
	}
}

void func_685(int iParam0)//Position - 0x8043F
{
	iLocal_179[iParam0] = 1;
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_686(int iParam0, int iParam1)//Position - 0x8045F
{
	switch (iParam0)
	{
		case 0:
			if (((iParam1 == 0 || iParam1 == 1) || iParam1 == 3) || iParam1 == 2)
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_687(int iParam0, bool bParam1, bool bParam2)//Position - 0x804A1
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (func_690(iVar1, iParam0))
		{
			func_689(iVar1);
		}
		else if (!func_690(iVar1, iLocal_43) || !bParam2)
		{
			func_688(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_673())
		{
			__LIB_17__::func_102();
			while (!func_673())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_688(int iParam0)//Position - 0x8050F
{
	char* sVar0;
	if (iLocal_178[iParam0])
	{
		iLocal_178[iParam0] = 0;
		sVar0 = func_674(iParam0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sVar0);
	}
}

void func_689(int iParam0)//Position - 0x80537
{
	char* sVar0;
	iLocal_178[iParam0] = 1;
	sVar0 = func_674(iParam0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sVar0, false, -1);
}

int func_690(int iParam0, int iParam1)//Position - 0x80558
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_691(int iParam0, bool bParam1, bool bParam2)//Position - 0x8057F
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (__LIB_17__::func_435(iVar1, iParam0))
		{
			func_693(iVar1);
		}
		else if (!__LIB_17__::func_435(iVar1, iLocal_43) || !bParam2)
		{
			func_692(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_675())
		{
			__LIB_17__::func_102();
			while (!func_675())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_692(int iParam0)//Position - 0x805ED
{
	if (iLocal_177[iParam0])
	{
		iLocal_177[iParam0] = 0;
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
}

void func_693(int iParam0)//Position - 0x80612
{
	iLocal_177[iParam0] = 1;
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_695(int iParam0, bool bParam1, bool bParam2)//Position - 0x80643
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_698(iVar1, iParam0))
		{
			func_697(iVar1);
		}
		else if (!func_698(iVar1, iLocal_43) || !bParam2)
		{
			func_696(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_676())
		{
			__LIB_17__::func_102();
			while (!func_676())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_696(int iParam0)//Position - 0x806B1
{
	int iVar0;
	if (iLocal_176[iParam0])
	{
		iLocal_176[iParam0] = 0;
		iVar0 = func_370(iParam0);
		if (WEAPON::HAS_WEAPON_ASSET_LOADED(iVar0))
		{
			WEAPON::REMOVE_WEAPON_ASSET(iVar0);
		}
	}
}

void func_697(int iParam0)//Position - 0x806E2
{
	int iVar0;
	iLocal_176[iParam0] = 1;
	iVar0 = func_370(iParam0);
	WEAPON::REQUEST_WEAPON_ASSET(iVar0, 31, 0);
}

int func_698(int iParam0, int iParam1)//Position - 0x80703
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 == 0 || iParam1 == 2)
			{
				return 1;
			}
			break;
		case 2:
			if (iParam1 == 0 || iParam1 == 3)
			{
				return 1;
			}
			break;
		case 4:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 5:
			if ((iParam1 == 5 || iParam1 == 0) || iParam1 == 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_699(int iParam0, bool bParam1, bool bParam2)//Position - 0x8079D
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = iVar0;
		if (func_702(iVar1, iParam0))
		{
			func_701(iVar1);
		}
		else if (!func_702(iVar1, iLocal_43) || !bParam2)
		{
			func_700(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_677())
		{
			__LIB_17__::func_102();
			while (!func_677())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_700(int iParam0)//Position - 0x8080C
{
	char* sVar0;
	if (iLocal_175[iParam0])
	{
		iLocal_175[iParam0] = 0;
		sVar0 = func_37(iParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(sVar0);
		}
	}
}

void func_701(int iParam0)//Position - 0x8083D
{
	char* sVar0;
	iLocal_175[iParam0] = 1;
	sVar0 = func_37(iParam0);
	STREAMING::REQUEST_ANIM_DICT(sVar0);
}

int func_702(int iParam0, int iParam1)//Position - 0x8085B
{
	switch (iParam0)
	{
		case 9:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		case 12:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_703(int iParam0, bool bParam1, bool bParam2)//Position - 0x80891
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (func_706(iVar0, iParam0))
		{
			func_705(iVar0);
		}
		else if (!func_706(iVar0, iLocal_43) || !bParam2)
		{
			func_704(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_678())
		{
			__LIB_17__::func_102();
			while (!func_678())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_704(int iParam0)//Position - 0x808FC
{
	struct<4> Var0;
	if (iLocal_174[iParam0])
	{
		iLocal_174[iParam0] = 0;
		Var0 = { func_679(iParam0) };
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&Var0) == 0)
		{
			TASK::REMOVE_WAYPOINT_RECORDING(&Var0);
		}
	}
}

void func_705(int iParam0)//Position - 0x80930
{
	struct<4> Var0;
	iLocal_174[iParam0] = 1;
	Var0 = { func_679(iParam0) };
	TASK::REQUEST_WAYPOINT_RECORDING(&Var0);
}

int func_706(int iParam0, int iParam1)//Position - 0x80950
{
	switch (iParam0 + 1)
	{
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_707(int iParam0, bool bParam1, bool bParam2)//Position - 0x809C3
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_710(iVar0 + 1, iParam0))
		{
			func_709(iVar0 + 1);
		}
		else if (!func_710(iVar0 + 1, iLocal_43) || !bParam2)
		{
			func_708(iVar0 + 1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_680())
		{
			__LIB_17__::func_102();
			while (!func_680())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_708(int iParam0)//Position - 0x80A36
{
	if (iLocal_173[(iParam0 - 1)])
	{
		iLocal_173[(iParam0 - 1)] = 0;
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, __LIB_17__::func_663()))
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, __LIB_17__::func_663());
		}
	}
}

void func_709(int iParam0)//Position - 0x80A6B
{
	iLocal_173[(iParam0 - 1)] = 1;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, __LIB_17__::func_663());
}

int func_710(var uParam0, int iParam1)//Position - 0x80A87
{
	uParam0 = uParam0;
	iParam1 = iParam1;
	return 0;
}

void func_711(int iParam0, bool bParam1, bool bParam2)//Position - 0x80A98
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (func_712(iVar0, iParam0))
		{
			func_668(iVar0);
		}
		else if (!func_712(iVar0, iLocal_43) || !bParam2)
		{
			func_279(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_682())
		{
			__LIB_17__::func_102();
			while (!func_682())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_712(int iParam0, int iParam1)//Position - 0x80B03
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 1:
			break;
		case 5:
		case 6:
		case 4:
			break;
		case 3:
		case 21:
		case 26:
		case 27:
		case 28:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		case 7:
			if (iParam1 >= 5)
			{
				return 1;
			}
			break;
		case 24:
		case 25:
			break;
	}
	return 0;
}

float func_716(int iParam0)//Position - 0x80C88
{
	switch (iParam0)
	{
		case 0:
			return 47.9f;
			break;
		case 2:
			return 139.6f;
			break;
		case 1:
			return 62f;
			break;
	}
	return 0f;
}

Vector3 func_717(int iParam0)//Position - 0x80CCB
{
	switch (iParam0)
	{
		case 0:
			return 24.07882f, -1633.2817f, 27.30396f;
			break;
		case 2:
			return -1463.5166f, -781.0746f, 21.975964f;
			break;
		case 1:
			return -2419.62f, -232.66293f, 13.91232f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_718()//Position - 0x80D2E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!iLocal_241)
		{
			Global_96880[iVar0] = 0;
			iLocal_119[iVar0] = 0;
			iLocal_193[iVar0] = 0;
			iLocal_381[iVar0] = 0;
			iLocal_194[iVar0] = 0;
			fLocal_353[iVar0] = 50f;
		}
		else if (!Global_96880[iVar0])
		{
			iLocal_119[iVar0] = 0;
			iLocal_194[iVar0] = 0;
			iLocal_381[iVar0] = (func_378(iVar0) - 1);
		}
		else
		{
			iLocal_119[iVar0] = 1;
		}
		iVar0++;
	}
	iLocal_49.f_18[2] = Global_96880[2];
	iLocal_49.f_18[0] = Global_96880[0];
	iLocal_49.f_18[1] = Global_96880[1];
}

void func_719(int iParam0)//Position - 0x80DE7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 1, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 0, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 2, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 3, true);
		if (iParam0 == iLocal_134[3])
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam0, 5, true);
		}
	}
}

void func_728(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x816DB
{
	int iVar0;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[iParam1], false))
	{
		iVar0 = func_818(iParam1);
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 3)
				{
					if (__LIB_13__::func_821() && !Global_94618)
					{
						__LIB_32__::func_36(&(iLocal_134[iParam1]), Param2, fParam3, 0, 0, 0, 0, 1, func_74(iVar0), 0, 145, 1);
						iLocal_172[iVar0] = 0;
					}
					else
					{
						__LIB_17__::func_478(&(iLocal_134[iParam1]), 1, Param2, fParam3, 0, 2);
					}
				}
				else
				{
					__LIB_17__::func_478(&(iLocal_134[iParam1]), 1, Param2, fParam3, 0, 2);
				}
				break;
			case 1:
				if ((iParam0 == 1 || iParam0 == 4) || iParam0 == 5)
				{
					if (__LIB_13__::func_821() && !Global_94618)
					{
						__LIB_32__::func_36(&(iLocal_134[iParam1]), Param2, fParam3, 0, 0, 0, 0, 1, func_74(iVar0), 0, 145, 1);
						iLocal_172[iVar0] = 0;
					}
					else
					{
						__LIB_17__::func_478(&(iLocal_134[iParam1]), 2, Param2, fParam3, 0, 0);
					}
				}
				else
				{
					__LIB_17__::func_478(&(iLocal_134[iParam1]), 2, Param2, fParam3, 0, 0);
				}
				break;
			case 2:
				if (iParam0 == 2)
				{
					if (__LIB_13__::func_821() && !Global_94618)
					{
						__LIB_32__::func_36(&(iLocal_134[iParam1]), Param2, fParam3, 0, 0, 0, 0, 1, func_74(iVar0), 0, 145, 1);
						iLocal_172[iVar0] = 0;
					}
					else
					{
						__LIB_17__::func_478(&(iLocal_134[iParam1]), 0, Param2, fParam3, 0, 0);
					}
				}
				else
				{
					__LIB_17__::func_478(&(iLocal_134[iParam1]), 0, Param2, fParam3, 0, 0);
				}
				break;
			default:
				iLocal_134[iParam1] = VEHICLE::CREATE_VEHICLE(func_74(iVar0), Param2, fParam3, true, true, false);
				break;
		}
		if (bParam7)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_134[iParam1], 5f);
			if (bParam8)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_134[iParam1], true, true, false);
			}
		}
		if (!bParam4)
		{
			func_279(iVar0);
		}
		if (bParam6)
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_134[iParam1], false);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_134[iParam1], false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_134[iParam1], true, true, true, true, true, false, false, false);
		}
		func_729(iParam1);
		if (!bParam5)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_134[iParam1]));
		}
	}
}

void func_729(int iParam0)//Position - 0x81918
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[iParam0], false))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_134[iParam0], false);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_134[iParam0], false);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_134[iParam0], true);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_134[iParam0])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_134[iParam0])))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_134[iParam0], false);
		}
		switch (iParam0)
		{
			case 3:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_134[iParam0], 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_134[iParam0], " M0NIED ");
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_134[iParam0], 5, false);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_134[iParam0], 0f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_134[iParam0], 2);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_134[iParam0], true);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_134[iParam0], false);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_134[iParam0], true);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_134[iParam0], false);
				break;
			case 1:
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_134[iParam0], true);
				break;
			case 2:
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_134[iParam0], true);
				break;
			case 0:
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_134[iParam0], true);
				break;
			}
	}
}

int func_818(int iParam0)//Position - 0x89E14
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		case 1:
			return 6;
			break;
		case 2:
			return 4;
			break;
		case 3:
			return 7;
			break;
	}
	return 4;
}

int func_821()//Position - 0x89FA0
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
		if ((iVar0 != 1 && iVar0 != iLocal_322) && iVar0 != iLocal_323)
		{
			if (!PED::IS_PED_INJURED(Local_115[iVar0 /*16*/]))
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_115[iVar0 /*16*/], true), false);
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

int func_822(char* sParam0, int iParam1, int iParam2)//Position - 0x8A01F
{
	int iVar0;
	if (iLocal_362 < 0)
	{
		func_375(-1);
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_362)
	{
		if (func_283(sParam0, 0, 0, 0))
		{
			iVar0 = -1;
			if (iParam1 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam1, iParam2);
			}
			func_375(iVar0);
			return 1;
		}
	}
	return 0;
}

void func_823()//Position - 0x8A067
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_282(16), 300f, 300f, 300f, false, false, 0))
	{
		func_829(29);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_130))
	{
		if (iLocal_43 == 5)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_148))
			{
				iLocal_148 = func_827(iLocal_130, 0);
				if (HUD::DOES_BLIP_EXIST(iLocal_148))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_148, "BLIP_108" /* GXT: Devin */);
				}
			}
		}
		if (PED::IS_PED_INJURED(iLocal_130))
		{
			func_829(3);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_143, func_37(12), "LOUNGE_OUTRO_BOX", 3))
				{
					ENTITY::STOP_ENTITY_ANIM(iLocal_143, "LOUNGE_OUTRO_BOX", func_37(12), -1000f);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_145))
			{
				if (!iLocal_289)
				{
					bVar0 = false;
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_397))
					{
						if (iLocal_123 == 0)
						{
							bVar0 = true;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_397) >= 0.172f)
						{
							bVar0 = true;
						}
						if (bVar0)
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_145, -1000f, true);
							ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_145, 1, 0f, 0f, -0.1f, false, true, true, false);
						}
					}
					iLocal_289 = 1;
				}
			}
		}
		else
		{
			switch (iLocal_123)
			{
				case 0:
					bVar1 = false;
					if (bLocal_249)
					{
						bVar1 = true;
					}
					else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2659.0522f, 1859.6324f, 158.29218f, -2627.7031f, 1874.2089f, 194.41885f, false, true, 0) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2646.4285f, 1867.5575f, 159.24397f, -2629.0022f, 1882.9193f, 162.44397f, 15.25f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2627.6055f, 1874.1361f, 157.0591f, -2619.107f, 1880.3523f, 161.9f, 2.9f, false, true, 0)))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (iLocal_128 == 0)
							{
								iLocal_128 = 2;
							}
						}
						else if (iLocal_128 == 0)
						{
							iLocal_128 = 1;
						}
						bVar1 = true;
					}
					if (bVar1)
					{
						iLocal_397 = PED::CREATE_SYNCHRONIZED_SCENE(-2645.961f, 1872.599f, 159.153f, 0f, 0f, 102.44f, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_397, false);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_397, true);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_130, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_130, iLocal_397, func_37(12), "LOUNGE_OUTRO_DEV", 8f, -8f, 5, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_143, iLocal_397, "LOUNGE_OUTRO_BOX", func_37(12), 8f, 8f, 0, 1000f);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_145, iLocal_397, "LOUNGE_OUTRO_TAB", func_37(12), 8f, 8f, 0, 1000f);
						iLocal_123 = 1;
					}
					break;
				case 1:
					if (!bLocal_254)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_130, 23f, 23f, 8f, false, true, 0))
						{
							switch (iLocal_128)
							{
								case 0:
									sVar2 = "FINC1_DEVSND";
									break;
								case 1:
									sVar2 = "FINC1_DEVTRV";
									break;
								case 2:
									sVar2 = "FINC1_DEVWRD";
									break;
								case 3:
									sVar2 = "FINC1_DEVHID";
									break;
								case 4:
									sVar2 = "FINC1_DEVSHO";
									break;
							}
							bLocal_254 = func_283(sVar2, 0, 0, 0);
						}
					}
					else
					{
						bLocal_249 = true;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_397))
					{
						if (!iLocal_288)
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_397) >= 0.639f)
							{
								PED::SET_PED_CAN_RAGDOLL(iLocal_130, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_130, 227, false);
								iLocal_288 = 1;
							}
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_397) >= 1f)
						{
							iLocal_123 = 2;
						}
					}
					else
					{
						iLocal_123 = 2;
					}
					break;
				case 2:
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_130, 10f, 10f, 2f, false, true, 0))
					{
						if (iLocal_399 < 8)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_400)
							{
								if (func_283("FINC1_FNEBOX", 0, iLocal_399, 0))
								{
									iLocal_399++;
									iLocal_400 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
					{
						if (FIRE::IS_ENTITY_ON_FIRE(iLocal_143))
						{
							PED::APPLY_DAMAGE_TO_PED(iLocal_130, 1000, true, 0);
						}
					}
					break;
			}
			if (PED::IS_PED_RAGDOLL(iLocal_130))
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_130, 1000, true, 0);
			}
		}
	}
	func_824();
}

void func_824()//Position - 0x8A4A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	char* sVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	iVar0 = 0;
	if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), -2659.4446f, 1841.3193f, 134.24051f, -2536.5315f, 1949.5579f, 180.4836f, false, true))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if ((((((!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && iVar1 != joaat("WEAPON_STICKYBOMB")) && iVar1 != joaat("WEAPON_GRENADE")) && iVar1 != joaat("WEAPON_SMOKEGRENADE")) && iVar1 != joaat("WEAPON_BZGAS")) && iVar1 != joaat("WEAPON_MOLOTOV")) && iVar1 != joaat("WEAPON_STUNGUN"))
		{
			iVar0 = 1;
		}
	}
	iVar2 = 0;
	if (FIRE::IS_EXPLOSION_IN_AREA(-1, -2659.4446f, 1841.3193f, 134.24051f, -2536.5315f, 1949.5579f, 180.4836f))
	{
		if (iLocal_128 == 0)
		{
			iLocal_128 = 3;
		}
		iVar2 = 1;
	}
	bVar3 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		bVar3 = true;
	}
	bLocal_255 = false;
	if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2604.2644f, 1859.1249f, 161.8173f, -2553.1868f, 1938.961f, 180.04288f, false, true, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2650.5205f, 1860.7357f, 159.9552f, -2605.26f, 1924.8857f, 180.04639f, false, true, 0))
	{
		if (!func_826())
		{
			bLocal_255 = true;
			if (bVar3)
			{
				bLocal_249 = true;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (iLocal_43 == 4)
				{
					func_829(30);
				}
				bLocal_249 = true;
			}
		}
	}
	if (iLocal_408 >= 0)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_408 + 3000)
		{
			bLocal_249 = true;
		}
	}
	iLocal_386 = 0;
	iVar4 = 0;
	while (iVar4 < 8)
	{
		iVar5 = iVar4;
		if (!PED::IS_PED_INJURED(Local_115[iVar4 /*16*/]))
		{
			iLocal_386++;
			if (!bLocal_249)
			{
				PED::SET_PED_RESET_FLAG(Local_115[iVar4 /*16*/], 126, true);
			}
			if (PED::IS_PED_SHOOTING(Local_115[iVar4 /*16*/]) || bLocal_299)
			{
				bLocal_249 = true;
			}
			if (!Local_115[iVar4 /*16*/].f_9)
			{
				if (bLocal_255)
				{
					if (Local_115[iVar4 /*16*/].f_14 < 0)
					{
						if (PED::CAN_PED_SEE_HATED_PED(Local_115[iVar4 /*16*/], PLAYER::PLAYER_PED_ID()))
						{
							Local_115[iVar4 /*16*/].f_14 = MISC::GET_GAME_TIMER();
						}
					}
					else if (MISC::GET_GAME_TIMER() >= Local_115[iVar4 /*16*/].f_14 + 2000)
					{
						if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_115[iVar4 /*16*/]))
						{
							if (PED::CAN_PED_SEE_HATED_PED(Local_115[iVar4 /*16*/], PLAYER::PLAYER_PED_ID()))
							{
								iLocal_302 = 1;
								iLocal_322 = iVar4;
								Local_115[iVar4 /*16*/].f_9 = 1;
							}
							else if (MISC::GET_GAME_TIMER() >= Local_115[iVar4 /*16*/].f_14 + 3000)
							{
								Local_115[iVar4 /*16*/].f_14 = -1;
							}
						}
					}
				}
				if (!iLocal_302)
				{
					if (bLocal_255)
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_115[iVar4 /*16*/]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_115[iVar4 /*16*/]))
							{
								iLocal_302 = 1;
								iLocal_322 = iVar4;
								Local_115[iVar4 /*16*/].f_9 = 1;
							}
						}
					}
				}
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_115[iVar4 /*16*/], true) };
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_115[iVar4 /*16*/], PLAYER::PLAYER_PED_ID(), true))
				{
					if (!PED::IS_PED_BEING_STEALTH_KILLED(Local_115[iVar4 /*16*/]))
					{
						if (iLocal_128 == 0)
						{
							iLocal_128 = 4;
						}
						Local_115[iVar4 /*16*/].f_9 = 1;
					}
				}
				else if (((MISC::IS_SNIPER_BULLET_IN_AREA(Var6 - Vector(2f, 2f, 2f), Var6 + Vector(2f, 2f, 2f)) || MISC::IS_BULLET_IN_AREA(Var6, 2f, true)) || MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector(15f, 15f, 15f), Var6 + Vector(15f, 15f, 15f), false)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Var6, 30f) > 0)
				{
					if (iLocal_408 < 0)
					{
						iLocal_408 = MISC::GET_GAME_TIMER();
					}
					Local_115[iVar4 /*16*/].f_9 = 1;
				}
				if ((iVar0 || iVar2) || bLocal_249)
				{
					bLocal_249 = true;
					Local_115[iVar4 /*16*/].f_9 = 1;
				}
			}
			else
			{
				if (iLocal_387 == 1)
				{
					if (iVar5 == 0)
					{
						if (!PED::IS_TRACKED_PED_VISIBLE(Local_115[iVar4 /*16*/]) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_115[iVar4 /*16*/], 40f, 40f, 40f, false, true, 0))
						{
							PED::APPLY_DAMAGE_TO_PED(Local_115[iVar4 /*16*/], 1000, true, 0);
						}
					}
				}
				Var7 = { ENTITY::GET_ENTITY_COORDS(Local_115[iVar4 /*16*/], true) };
				if (Var7.f_2 < 159f)
				{
					PED::APPLY_DAMAGE_TO_PED(Local_115[iVar4 /*16*/], 1000, true, 0);
				}
				if (Local_115[iVar4 /*16*/].f_11 != 2)
				{
					PED::SET_PED_SEEING_RANGE(Local_115[iVar4 /*16*/], 60f);
					Local_115[iVar4 /*16*/].f_11 = 2;
				}
			}
			switch (Local_115[iVar4 /*16*/].f_11)
			{
				case 1:
					switch (Local_115[iVar4 /*16*/].f_12)
					{
						case 0:
						case 2:
							if (MISC::GET_GAME_TIMER() >= Local_115[iVar4 /*16*/].f_13)
							{
								switch (iVar5)
								{
									case 1:
										if (Local_115[iVar4 /*16*/].f_12 == 0)
										{
											sVar8 = "finc25";
										}
										else
										{
											sVar8 = "finc26";
										}
										break;
									case 2:
										if (Local_115[iVar4 /*16*/].f_12 == 0)
										{
											sVar8 = "finc27";
										}
										else
										{
											sVar8 = "finc28";
										}
										break;
									case 3:
										if (Local_115[iVar4 /*16*/].f_12 == 0)
										{
											sVar8 = "finc29";
										}
										else
										{
											sVar8 = "finc210";
										}
										break;
									case 6:
										if (Local_115[iVar4 /*16*/].f_12 == 0)
										{
											sVar8 = "finc211";
										}
										else
										{
											sVar8 = "finc212";
										}
										break;
									case 7:
										if (Local_115[iVar4 /*16*/].f_12 == 0)
										{
											sVar8 = "finc213";
										}
										else
										{
											sVar8 = "finc214";
										}
										break;
									case 4:
										if (Local_115[iVar4 /*16*/].f_12 == 0)
										{
											sVar8 = "finc215";
										}
										else
										{
											sVar8 = "finc216";
										}
										break;
									case 5:
										if (Local_115[iVar4 /*16*/].f_12 == 0)
										{
											sVar8 = "finc217";
										}
										else
										{
											sVar8 = "finc218";
										}
										break;
								}
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_115[iVar4 /*16*/], sVar8, 1, 1, -1);
								if (Local_115[iVar4 /*16*/].f_12 == 0)
								{
									Local_115[iVar4 /*16*/].f_12 = 1;
								}
								else
								{
									Local_115[iVar4 /*16*/].f_12 = 3;
								}
							}
							break;
						case 1:
						case 3:
							if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_115[iVar4 /*16*/]))
							{
								switch (iVar5)
								{
									case 1:
										if (Local_115[iVar4 /*16*/].f_12 == 1)
										{
											iVar9 = 15000;
										}
										else
										{
											iVar9 = 10000;
										}
										break;
									case 2:
										if (Local_115[iVar4 /*16*/].f_12 == 1)
										{
											iVar9 = 8000;
										}
										else
										{
											iVar9 = 7000;
										}
										break;
									case 3:
										if (Local_115[iVar4 /*16*/].f_12 == 1)
										{
											iVar9 = 10000;
										}
										else
										{
											iVar9 = 9000;
										}
										break;
									case 6:
										if (Local_115[iVar4 /*16*/].f_12 == 1)
										{
											iVar9 = 7000;
										}
										else
										{
											iVar9 = 12000;
										}
										break;
									case 7:
										if (Local_115[iVar4 /*16*/].f_12 == 1)
										{
											iVar9 = 11000;
										}
										else
										{
											iVar9 = 9000;
										}
										break;
									case 4:
										if (Local_115[iVar4 /*16*/].f_12 == 1)
										{
											iVar9 = 8000;
										}
										else
										{
											iVar9 = 8000;
										}
										break;
									case 5:
										if (Local_115[iVar4 /*16*/].f_12 == 1)
										{
											iVar9 = 9000;
										}
										else
										{
											iVar9 = 11000;
										}
										break;
								}
								if (iLocal_182)
								{
									iVar9 = 3000;
								}
								Local_115[iVar4 /*16*/].f_13 = (MISC::GET_GAME_TIMER() + iVar9);
								if (Local_115[iVar4 /*16*/].f_12 == 1)
								{
									Local_115[iVar4 /*16*/].f_12 = 2;
								}
								else
								{
									Local_115[iVar4 /*16*/].f_12 = 0;
								}
							}
							break;
					}
					break;
				case 2:
					if (!Local_115[iVar4 /*16*/].f_10)
					{
						bVar11 = false;
						switch (iVar5)
						{
							case 1:
								bVar11 = true;
								fVar10 = 0f;
								break;
							case 0:
								bVar11 = true;
								fVar10 = 5f;
								break;
							case 2:
							case 3:
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_115[iVar4 /*16*/], 20f, 20f, 20f, false, true, 0) || iLocal_253)
								{
									bVar11 = true;
									fVar10 = 4f;
								}
								break;
							case 4:
							case 5:
							case 6:
							case 7:
								if (iLocal_253)
								{
									bVar11 = true;
									fVar10 = 2f;
								}
								break;
						}
						if (bVar11)
						{
							Local_115[iVar4 /*16*/].f_15 = (Local_115[iVar4 /*16*/].f_15 + (1f * SYSTEM::TIMESTEP()));
							if (Local_115[iVar4 /*16*/].f_15 >= fVar10)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_115[iVar4 /*16*/], false);
								PED::SET_PED_COMBAT_MOVEMENT(Local_115[iVar4 /*16*/], 2);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_115[iVar4 /*16*/], 50, true);
								Local_115[iVar4 /*16*/].f_10 = 1;
							}
						}
					}
					if (!PED::IS_PED_IN_COMBAT(Local_115[iVar4 /*16*/], 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_115[iVar4 /*16*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 7 || PED::IS_PED_USING_ANY_SCENARIO(Local_115[iVar4 /*16*/]))
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_115[iVar4 /*16*/]);
						}
						TASK::TASK_COMBAT_PED(Local_115[iVar4 /*16*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					break;
				}
		}
		if (iLocal_43 == 5)
		{
			__LIB_0__::func_631(Local_115[iVar4 /*16*/], &(Local_115[iVar4 /*16*/].f_1), -1, 0, 0, 0, 100f, 0, -1, -1, 1, 0);
		}
		iVar4++;
	}
	iLocal_387 = iLocal_386;
}

bool func_826()//Position - 0x8AF7A
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2557.6992f, 1913.6799f, 167.86884f, -2549.767f, 1909.9801f, 171.5165f, 6.86f, false, true, 0);
}

int func_827(int iParam0, bool bParam1)//Position - 0x8AFB0
{
	if (func_245())
	{
		return __LIB_0__::func_666(iParam0, bParam1, 145);
	}
	return 0;
}

void func_829(int iParam0)//Position - 0x8B017
{
	char* sVar0;
	if (func_245())
	{
		func_253();
		func_252(1, 1, 1, 1);
		iLocal_42 = 1;
		iLocal_44 = iParam0;
		AUDIO::TRIGGER_MUSIC_EVENT("FINC2_FAIL");
		switch (iLocal_44)
		{
			case 0:
				sVar0 = "CMN_MDIED" /* GXT: ~s~Michael died. */;
				break;
			case 1:
				sVar0 = "CMN_FDIED" /* GXT: ~s~Franklin died. */;
				break;
			case 2:
				sVar0 = "CMN_TDIED" /* GXT: ~s~Trevor died. */;
				break;
			case 3:
				sVar0 = "FC2_FAIL1";
				break;
			case 4:
				sVar0 = "FC2_FAIL2";
				break;
			case 5:
				sVar0 = "FC2_FAIL4";
				break;
			case 6:
				sVar0 = "FC2_FAIL3";
				break;
			case 7:
				sVar0 = "CMN_MDEST" /* GXT: ~s~Michael's car was destroyed. */;
				break;
			case 8:
				sVar0 = "FC2_FAIL6";
				break;
			case 9:
				sVar0 = "FC2_FAIL5";
				break;
			case 10:
				sVar0 = "CMN_TDEST" /* GXT: ~s~Trevor's truck was destroyed. */;
				break;
			case 11:
				sVar0 = "FC2_FAIL8";
				break;
			case 12:
				sVar0 = "FC2_FAIL7";
				break;
			case 13:
				sVar0 = "FC2_FAIL11";
				break;
			case 14:
				sVar0 = "FC2_FAIL9";
				break;
			case 15:
				sVar0 = "FC2_FAIL10";
				break;
			case 16:
				sVar0 = "FC2_FAIL12";
				break;
			case 17:
				sVar0 = "FC2_FAIL13";
				break;
			case 18:
				sVar0 = "FC2_FAIL15";
				break;
			case 19:
				sVar0 = "FC2_FAIL16";
				break;
			case 20:
				sVar0 = "FC2_FAIL17";
				break;
			case 21:
				sVar0 = "FC2_FAIL15B";
				break;
			case 22:
				sVar0 = "FC2_FAIL16B";
				break;
			case 23:
				sVar0 = "FC2_FAIL17B";
				break;
			case 24:
				sVar0 = "FC2_FAIL18";
				break;
			case 25:
				sVar0 = "FC2_FAIL19";
				break;
			case 26:
				sVar0 = "FC2_FAIL20";
				break;
			case 27:
				sVar0 = "FC2_FAIL21";
				break;
			case 28:
				sVar0 = "FC2_FAIL22";
				break;
			case 29:
				sVar0 = "FC2_FAIL23";
				break;
			case 30:
				sVar0 = "FC2_FAIL24";
				break;
		}
		func_830(sVar0);
	}
}

void func_830(char* sParam0)//Position - 0x8B240
{
	__LIB_0__::func_381(sParam0);
	func_831(0);
}

void func_831(int iParam0)//Position - 0x8B253
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_832(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_832(int iParam0)//Position - 0x8B298
{
	int iVar0;
	int iVar1;
	__LIB_17__::func_505();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_833(&(Global_113386.f_2363.f_539), iVar1);
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

void func_833(var uParam0, int iParam1)//Position - 0x8B3A8
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
			if (!func_835(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_835(int iParam0, var uParam1, float fParam2)//Position - 0x8B57C
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
			return func_835(8, uParam1, fParam2);
			break;
		case 10:
			return func_835(8, uParam1, fParam2);
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

void func_839()//Position - 0x8C061
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (!iLocal_182)
	{
		func_846(1);
		switch (iLocal_111)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_282(16), 200f, 200f, 200f, false, false, 0))
				{
					func_668(3);
					func_668(7);
					func_668(21);
					func_668(26);
					func_668(27);
					func_668(28);
					func_697(4);
					func_697(5);
					func_701(12);
					func_705(4);
					func_705(5);
					func_705(6);
					func_705(7);
					func_705(8);
					func_705(9);
					func_705(10);
					func_705(11);
					func_705(12);
					func_705(13);
					func_705(14);
					func_705(15);
					func_705(16);
					func_705(17);
					iLocal_111 = 1;
				}
				break;
			case 1:
				if (((func_682() && func_677()) && func_676()) && func_678())
				{
					func_368();
					iLocal_111 = 2;
				}
				break;
			case 2:
				func_823();
				if ((bLocal_249 || iLocal_123 > 0) || bLocal_255)
				{
					if (func_245())
					{
						if (STREAMING::STREAMVOL_IS_VALID(iLocal_127))
						{
							STREAMING::STREAMVOL_DELETE(iLocal_127);
						}
						func_253();
						func_288(5, 0, 1, 1, 0, 1, 1, 1);
						func_42(19);
						func_33(20);
						__LIB_17__::func_99("FINC2_OUTSIDE_DEVINS");
						__LIB_17__::func_99("FINC2_ALERTED");
					}
				}
				break;
		}
		if (iLocal_43 == 4)
		{
			bVar1 = false;
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -2679.9f, 1793.3f, 137.7f, 2468.1f, 1976f, 252.7f, false, true, 0))
						{
							bVar1 = true;
						}
					}
				}
			}
			if (!iLocal_185 && !bVar1)
			{
				if (func_270(0, 0, 1))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_146))
					{
						func_253();
						func_252(0, 1, 1, 0);
						iLocal_146 = func_249(func_282(16), 1);
					}
					if (!bLocal_186)
					{
						if (!__LIB_0__::func_75())
						{
							bLocal_186 = func_247("FC2_GODEV", 1, 0);
						}
					}
					if (!STREAMING::STREAMVOL_IS_VALID(iLocal_127))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_282(16), 50f, 50f, 50f, false, true, 0))
						{
							iLocal_127 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-2711.9f, 1910.3f, 175.9f, __LIB_3__::func_80(-1.4f, 0f, -102.8f), 200f, 12, 127);
						}
					}
					else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_282(16), 75f, 75f, 75f, false, true, 0))
					{
						STREAMING::STREAMVOL_DELETE(iLocal_127);
					}
					if (iVar0 == 0)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_282(16), 1f, 1f, 2f, true, true, 0);
						if ((func_826() && iLocal_111 == 2) && __LIB_0__::func_494(1, 0, 1))
						{
							iLocal_385 = MISC::GET_GAME_TIMER() + 1000;
							iLocal_185 = 1;
						}
					}
				}
			}
			else
			{
				iVar3 = 1;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						iVar3 = __LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 8f, 1, 1056964608, 0, 1, 0);
					}
				}
				if (iVar3 || bVar1)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_385)
					{
						if (!__LIB_0__::func_75())
						{
							if (func_245())
							{
								iLocal_182 = 1;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		func_840();
	}
}

void func_840()//Position - 0x8C3D6
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	struct<3> Var8;
	int iVar9;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_48)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 8)
			{
				iVar9 = iVar0;
				if (!PED::IS_PED_INJURED(Local_115[iVar0 /*16*/]))
				{
					bVar6 = true;
					bVar7 = false;
					iVar5 = -1;
					switch (iVar9)
					{
						case 0:
							bVar6 = false;
							break;
						case 1:
							Var1 = { -2574.5706f, 1894.4084f, 166.29906f };
							fVar2 = 33.8f;
							sVar3 = "finc26";
							iVar4 = 2;
							break;
						case 2:
							Var1 = { -2568.419f, 1879.0773f, 162.69603f };
							fVar2 = -170.8f;
							sVar3 = "finc27";
							iVar5 = 0;
							iVar4 = 8;
							break;
						case 3:
							Var1 = { -2580.2961f, 1863.3666f, 162.69443f };
							fVar2 = 93.9f;
							sVar3 = "finc210";
							iVar4 = 0;
							break;
						case 4:
							Var1 = { -2624.391f, 1878.724f, 162.42613f };
							fVar2 = -57.5f;
							sVar3 = "finc215";
							iVar5 = 0;
							iVar4 = 3;
							break;
						case 5:
							Var1 = { -2604.3008f, 1898.9694f, 166.30452f };
							fVar2 = 91.9f;
							sVar3 = "finc218";
							iVar4 = 7;
							iVar5 = 0;
							break;
						case 6:
							Var1 = { -2607.8508f, 1878.9034f, 162.42644f };
							fVar2 = 129.1f;
							iVar5 = 1200;
							bVar7 = true;
							Var8 = { -2614.5796f, 1872.5586f, 166.3037f };
							break;
						case 7:
							Var1 = { -2643.2078f, 1872.8674f, 159.15184f };
							fVar2 = -114.6f;
							iVar5 = 7200;
							bVar7 = true;
							Var8 = { -2637.02f, 1869.9634f, 159.15202f };
							break;
					}
					if (bVar6)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_115[iVar0 /*16*/]);
						ENTITY::SET_ENTITY_COORDS(Local_115[iVar0 /*16*/], Var1, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_115[iVar0 /*16*/], fVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_416);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_416);
						if (iVar5 >= 0)
						{
							TASK::TASK_PAUSE(0, iVar5);
						}
						else
						{
							PED::FORCE_PED_MOTION_STATE(Local_115[iVar0 /*16*/], joaat("MotionState_Walk"), true, 1, false);
						}
						if (!bVar7)
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sVar3, iVar4, 1, -1);
						}
						else
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var8, 1f, 20000, 40000f, 0.5f);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_416);
						TASK::TASK_PERFORM_SEQUENCE(Local_115[iVar0 /*16*/], iLocal_416);
					}
				}
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(iLocal_130) && !PED::IS_PED_INJURED(Local_115[7 /*16*/]))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_130, Local_115[7 /*16*/], -1, 2048, 4);
				TASK::TASK_LOOK_AT_ENTITY(Local_115[7 /*16*/], iLocal_130, -1, 2048, 4);
			}
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f, 0);
			FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f);
			func_33(18);
			__LIB_17__::func_99("FINC2_OUTSIDE_DEVINS");
			func_234(1, 1, 1, 0, 1, 0, 1000, 1);
			__LIB_17__::func_159();
			func_253();
			func_247("FC2_PLC1", 1, 1);
			func_232(9, 1, 8000);
			iLocal_293 = 0;
			iLocal_320 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_360 = MISC::GET_GAME_TIMER();
			iLocal_48 = 1;
			break;
		case 1:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			switch (iLocal_124)
			{
				case 0:
					if (!iLocal_293)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_360 + 100)
						{
							if (STREAMING::STREAMVOL_IS_VALID(iLocal_127))
							{
								STREAMING::STREAMVOL_DELETE(iLocal_127);
							}
							iLocal_127 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-2636f, 1881.8f, 160.1f, __LIB_3__::func_80(1.9f, 0f, 137.1f), 20f, 12, 127);
							iLocal_293 = 1;
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_360 + 8000)
					{
						func_232(11, 1, 6000);
						func_252(1, 1, 1, 0);
						iLocal_360 = MISC::GET_GAME_TIMER();
						iLocal_293 = 0;
						iLocal_124 = 2;
					}
					OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-2642.3215f, 1870.6024f, 159.31302f, 10f);
					break;
				case 2:
					if (!iLocal_293)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_360 + 100)
						{
							if (STREAMING::STREAMVOL_IS_VALID(iLocal_127))
							{
								STREAMING::STREAMVOL_DELETE(iLocal_127);
							}
							iLocal_127 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_3__::func_80(0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())), 20f, 12, 127);
							iLocal_293 = 1;
						}
					}
					if (!bLocal_261)
					{
						bLocal_261 = func_283("FINC1_DGUARD", 0, 0, 0);
					}
					if (!iLocal_320)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_360 + 4700)
							{
								GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
								AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
								iLocal_320 = 1;
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_360 + 5000)
					{
						iLocal_48 = 2;
					}
					break;
			}
			func_842();
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_130) && !PED::IS_PED_INJURED(Local_115[7 /*16*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_130);
				TASK::TASK_CLEAR_LOOK_AT(Local_115[7 /*16*/]);
			}
			if (STREAMING::STREAMVOL_IS_VALID(iLocal_127))
			{
				STREAMING::STREAMVOL_DELETE(iLocal_127);
			}
			RECORDING::REPLAY_STOP_EVENT();
			func_369(0);
			__LIB_16__::func_887();
			func_42(18);
			func_33(19);
			func_234(0, 1, 1, 0, 1, 0, 1000, 1);
			func_288(5, 0, 1, 1, 0, 1, 1, 1);
			break;
	}
}

void func_842()//Position - 0x8C90E
{
	if (__LIB_0__::func_500() && MISC::GET_GAME_TIMER() >= iLocal_359 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(800);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__::func_366(0);
		__LIB_0__::func_325();
		iLocal_183 = 1;
		iLocal_48 = 2;
	}
}

void func_846(bool bParam0)//Position - 0x8CA72
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		switch (iVar1)
		{
			case 0:
				Var2 = { func_282(13) };
				break;
			case 1:
				Var2 = { func_282(15) };
				break;
			case 2:
				Var2 = { func_282(18) };
				break;
		}
		switch (iLocal_110[iVar1])
		{
			case 0:
				if (!Global_96880[iVar1])
				{
					if (iLocal_43 == 0 || iVar1 == __LIB_17__::func_341())
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2, 300f, 300f, 300f, false, false, 0))
						{
							if (iVar1 != 1 || __LIB_17__::func_341() == 1)
							{
								switch (iVar1)
								{
									case 0:
										func_668(18);
										func_668(19);
										func_668(13);
										func_668(22);
										func_668(23);
										func_701(6);
										func_701(7);
										func_701(10);
										func_701(11);
										func_705(0);
										func_705(1);
										func_705(2);
										break;
									case 1:
										func_668(8);
										func_668(9);
										func_668(10);
										func_668(11);
										func_668(12);
										func_701(8);
										func_705(3);
										break;
									case 2:
										func_668(14);
										func_668(15);
										func_668(16);
										func_668(20);
										func_668(17);
										func_701(0);
										func_701(3);
										func_701(2);
										func_701(4);
										func_701(1);
										func_701(5);
										func_689(1);
										break;
								}
								iLocal_110[iVar1] = 1;
							}
						}
					}
				}
				break;
			case 1:
				if (!Global_96880[iVar1])
				{
					if ((func_682() && func_677()) && func_678())
					{
						switch (iVar1)
						{
							case 0:
								func_898(iLocal_43);
								break;
							case 1:
								func_890(iLocal_43);
								break;
							case 2:
								func_885();
								break;
						}
						if (iLocal_240)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							CAM::DO_SCREEN_FADE_IN(800);
							iLocal_240 = 0;
						}
						if (iVar1 == 2)
						{
							iLocal_593 = 1;
							func_852(&iLocal_594, 1);
						}
						iLocal_110[iVar1] = 2;
					}
				}
				break;
			case 2:
				if (bParam0 || __LIB_17__::func_341() != iVar1)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var2, 350f, 350f, 350f, false, false, 0))
					{
						switch (iVar1)
						{
							case 0:
								func_851();
								func_279(18);
								func_279(19);
								func_279(22);
								func_279(23);
								func_279(13);
								func_700(6);
								func_700(7);
								func_700(10);
								func_700(11);
								func_704(0);
								func_704(1);
								func_704(2);
								break;
							case 1:
								func_850();
								func_279(8);
								func_279(9);
								func_279(10);
								func_279(11);
								func_279(12);
								func_700(8);
								func_704(3);
								break;
							case 2:
								func_849();
								func_848();
								func_847();
								func_279(14);
								func_279(15);
								func_279(16);
								func_279(17);
								func_279(20);
								func_700(0);
								func_700(3);
								func_700(2);
								func_700(4);
								func_700(1);
								func_700(5);
								func_688(1);
								break;
						}
						iLocal_110[iVar1] = 0;
					}
				}
				break;
		}
		iVar0++;
	}
}

void func_847()//Position - 0x8CDCA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_133[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_133[iVar0]));
		}
		iVar0++;
	}
}

void func_848()//Position - 0x8CDFD
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_120[iVar0 /*4*/][iVar1]))
			{
				PED::DELETE_PED(&(Local_120[iVar0 /*4*/][iVar1]));
			}
			iVar1++;
		}
		Local_120[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_849()//Position - 0x8CE54
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		OBJECT::DELETE_OBJECT(&iLocal_139);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_132[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_132[iVar0]));
		}
		iVar0++;
	}
}

void func_850()//Position - 0x8CE98
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_114[iVar0 /*14*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_114[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_135[iVar0]))
		{
			if ((iLocal_135[iVar0] != iLocal_134[0] && iLocal_135[iVar0] != iLocal_134[2]) && iLocal_135[iVar0] != iLocal_134[1])
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_135[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_851()//Position - 0x8CF2E
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		OBJECT::DELETE_OBJECT(&iLocal_141);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
	{
		OBJECT::DELETE_OBJECT(&iLocal_140);
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*14*/]))
		{
			PED::DELETE_PED(&(Local_113[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_136[iVar0]))
		{
			if ((iLocal_136[iVar0] != iLocal_134[0] && iLocal_136[iVar0] != iLocal_134[2]) && iLocal_136[iVar0] != iLocal_134[1])
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_136[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_852(int iParam0, bool bParam1)//Position - 0x8CFE4
{
	int iVar0;
	switch (iLocal_593)
	{
		case 0:
			break;
		case 1:
			STREAMING::REQUEST_PTFX_ASSET();
			break;
		case 2:
			if (bLocal_4315)
			{
				func_884(iParam0, PLAYER::PLAYER_PED_ID(), iLocal_132[0]);
			}
			else if (bLocal_4316)
			{
				func_883(iParam0, PLAYER::PLAYER_PED_ID(), iLocal_132[0]);
			}
			else
			{
				func_882(iParam0, PLAYER::PLAYER_PED_ID(), iLocal_132[0]);
			}
			STREAMING::REQUEST_PTFX_ASSET();
			__LIB_16__::func_29(iParam0);
			CAM::SET_CAM_ACTIVE(iParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			SYSTEM::SETTIMERB(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_4317 = 0;
			iLocal_593 = 3;
			break;
		case 3:
			iVar0 = func_853(iParam0);
			if (!iLocal_4320)
			{
				if (!bLocal_4315 && !bLocal_4316)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= fLocal_4323)
					{
						if (!PED::IS_PED_INJURED(iLocal_132[0]))
						{
							GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(iLocal_132[0]);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_finale2_blood_entry", iLocal_132[0], Local_4321, Local_4322, fLocal_4324, false, false, false);
							iLocal_4320 = 1;
						}
					}
				}
			}
			if (CAM::IS_CAM_ACTIVE(iParam0->f_1))
			{
				if (iVar0 >= iParam0->f_1218)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_4318);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_4319, 1f);
				}
				if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= 1f)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_4318);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_4319, 1f);
					iLocal_593 = 5;
				}
			}
			break;
		case 5:
			MISC::SET_TIME_SCALE(1f);
			if (!iLocal_4317)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				iLocal_4317 = 1;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_593 = 0;
			iParam0->f_1232 = 1;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return iParam0->f_1232;
}

int func_853(var uParam0)//Position - 0x8D1AF
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
				fLocal_40 = __LIB_0__::func_504(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			case 1:
				fLocal_40 = __LIB_15__::func_924(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 2:
				fLocal_40 = __LIB_15__::func_923(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 3:
				fLocal_40 = __LIB_15__::func_940(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_40);
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

void func_882(var uParam0, int iParam1, var uParam2)//Position - 0x8ECE0
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 5;
		uParam0->f_10[0 /*57*/].f_3 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1654.3093f, -1100.6057f, 22.3126f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 15f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[0 /*57*/].f_18 = 0;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 60f;
		if (!iLocal_197)
		{
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 1f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[1 /*57*/].f_2 = 6;
		uParam0->f_10[1 /*57*/].f_3 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 300;
		uParam0->f_10[1 /*57*/].f_6 = { -1659.3484f, -1107.9875f, 23.3689f };
		uParam0->f_10[1 /*57*/].f_13 = { -1662.8572f, -1116.3562f, 17.8841f };
		uParam0->f_10[1 /*57*/].f_12 = 6f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[1 /*57*/].f_18 = 0;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 35f;
		if (!iLocal_197)
		{
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0.5f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[2 /*57*/].f_2 = 6;
		uParam0->f_10[2 /*57*/].f_3 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 500;
		uParam0->f_10[2 /*57*/].f_6 = { -1659.9082f, -1108.8079f, 23.4863f };
		uParam0->f_10[2 /*57*/].f_13 = { -1662.8572f, -1116.3562f, 17.8841f };
		uParam0->f_10[2 /*57*/].f_12 = 5f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 35f;
		if (!iLocal_197)
		{
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.41f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 6;
		uParam0->f_10[3 /*57*/].f_3 = 1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 1;
		uParam0->f_10[3 /*57*/].f_6 = { -1659.9082f, -1108.8079f, 23.4863f };
		uParam0->f_10[3 /*57*/].f_13 = { -1662.8572f, -1116.3562f, 17.8841f };
		uParam0->f_10[3 /*57*/].f_12 = 5f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { 6.7401f, -0.0201f, 145.6815f };
		uParam0->f_10[3 /*57*/].f_18 = 0;
		uParam0->f_10[3 /*57*/].f_19 = 0;
		uParam0->f_10[3 /*57*/].f_20 = 0;
		uParam0->f_10[3 /*57*/].f_21 = 35f;
		if (!iLocal_197)
		{
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		}
		else
		{
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, -2f };
		}
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 0;
		uParam0->f_10[3 /*57*/].f_23 = 0f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 1;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 200f;
		uParam0->f_10[3 /*57*/].f_40 = 200f;
		uParam0->f_10[3 /*57*/].f_41 = 50;
		uParam0->f_10[3 /*57*/].f_42 = 50;
		uParam0->f_10[3 /*57*/].f_43 = 100;
		uParam0->f_10[3 /*57*/].f_38 = 0.41f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 4;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FINALEC2_KillSteveBulletCam.txt";
		uParam0->f_1225 = "CameraInfo_FINALEC2_KillSteveBulletCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_883(var uParam0, int iParam1, var uParam2)//Position - 0x8F58D
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1656.2043f, -1122.4706f, 16.6928f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 35f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 30f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[1 /*57*/].f_3 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 800;
		uParam0->f_10[1 /*57*/].f_6 = { -1656.204f, -1122.471f, 16.693f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 36f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 30f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[2 /*57*/].f_3 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1500;
		uParam0->f_10[2 /*57*/].f_6 = { -1656.204f, -1122.471f, 16.693f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 35f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 30f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.41f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 3;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FINALEC2_KillSteveGrenadeCam.txt";
		uParam0->f_1225 = "CameraInfo_FINALEC2_KillSteveGrenadeCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_884(var uParam0, int iParam1, var uParam2)//Position - 0x8FB99
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 3;
		uParam0->f_10[0 /*57*/].f_3 = 1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1631.6f, -1085.8401f, 42.3664f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 35f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0f, 0f, 0.0001f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 25f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 1f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 1;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[1 /*57*/].f_3 = 1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 800;
		uParam0->f_10[1 /*57*/].f_6 = { -1632.053f, -1086.2684f, 42.3135f };
		uParam0->f_10[1 /*57*/].f_13 = { -1662.8572f, -1116.3562f, 17.8841f };
		uParam0->f_10[1 /*57*/].f_12 = 36f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 25f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.1f;
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
		uParam0->f_10[2 /*57*/].f_3 = 1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1500;
		uParam0->f_10[2 /*57*/].f_6 = { -1633.5394f, -1087.6753f, 42.14f };
		uParam0->f_10[2 /*57*/].f_13 = { -1662.8572f, -1116.3562f, 17.8841f };
		uParam0->f_10[2 /*57*/].f_12 = 35f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 25f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 1;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 200f;
		uParam0->f_10[2 /*57*/].f_40 = 200f;
		uParam0->f_10[2 /*57*/].f_41 = 50;
		uParam0->f_10[2 /*57*/].f_42 = 50;
		uParam0->f_10[2 /*57*/].f_43 = 100;
		uParam0->f_10[2 /*57*/].f_38 = 0.41f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 3;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_FINALEC2_KillSteveExplosionCam.txt";
		uParam0->f_1225 = "CameraInfo_FINALEC2_KillSteveExplosionCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_885()//Position - 0x901C2
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_132[0]))
	{
		iLocal_132[0] = PED::CREATE_PED(26, func_74(14), -1663.9f, -1132f, 41.8f, 0f, true, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_132[1]))
	{
		iLocal_132[1] = PED::CREATE_PED(26, func_74(15), -1663.9f, -1142f, 41.8f, 0f, true, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_132[1], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_132[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_132[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_132[1], 8, 1, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_132[iVar0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_132[iVar0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_132[iVar0], true);
			PED::SET_PED_KEEP_TASK(iLocal_132[iVar0], true);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_132[iVar0], true);
			PED::SET_PED_CONFIG_FLAG(iLocal_132[iVar0], 118, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_132[iVar0], 208, true);
			PED::SET_PED_CONFIG_FLAG(iLocal_132[iVar0], 42, true);
			PED::SET_PED_CAN_RAGDOLL(iLocal_132[iVar0], false);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_132[iVar0], false);
			PED::SET_PED_MAX_HEALTH(iLocal_132[iVar0], 10000);
			ENTITY::SET_ENTITY_HEALTH(iLocal_132[iVar0], 10000, 0);
			iLocal_239[iVar0] = 0;
			if (iVar0 == 0)
			{
				__LIB_0__::func_609(iLocal_132[iVar0], 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_132[iVar0], true, 25f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_132[iVar0], "FINALE_STEVE_GROUP", 0f);
			}
		}
		iVar0++;
	}
	func_887(0, 0, 0);
	func_887(1, 0, 0);
	__LIB_0__::func_222(&uLocal_418, 4, iLocal_132[0], "STEVE", 0, 1);
	__LIB_0__::func_222(&uLocal_418, 7, iLocal_132[1], "CAMERAMAN", 0, 1);
	iLocal_139 = OBJECT::CREATE_OBJECT(func_74(17), -1663.9f, -1142f, 38.8f, true, true, false);
	func_886();
	iLocal_207 = 0;
	iLocal_271 = 0;
}

void func_886()//Position - 0x903B4
{
	if (!PED::IS_PED_INJURED(iLocal_132[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_139, iLocal_132[1], PED::GET_PED_BONE_INDEX(iLocal_132[1], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
	}
}

void func_887(int iParam0, int iParam1, int iParam2)//Position - 0x903FD
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bVar5 = false;
	bVar6 = false;
	fVar7 = 1f;
	if (iParam1 == 4)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_157))
		{
			CAM::DESTROY_CAM(iLocal_157, false);
		}
	}
	switch (iParam1)
	{
		case 2:
			sVar1 = func_37(3);
			if (iParam0 == 0)
			{
				sVar2 = "FIN_C2_MCS_1_STEVE";
			}
			else
			{
				sVar2 = "FIN_C2_MCS_1_CAMMAN";
			}
			bVar4 = false;
			bVar3 = true;
			bVar6 = true;
			break;
		case 0:
			sVar1 = func_37(0);
			if (iParam0 == 0)
			{
				sVar2 = "Film_Idle_PedA";
			}
			else
			{
				sVar2 = "Film_Idle_PedB";
			}
			bVar4 = true;
			bVar3 = false;
			break;
		case 1:
			sVar1 = func_37(0);
			if (iParam0 == 0)
			{
				sVar2 = "Film_Idle_Outro_PedA";
			}
			else
			{
				sVar2 = "Film_Idle_Outro_PedB";
			}
			bVar4 = false;
			bVar3 = false;
			break;
		case 3:
			sVar1 = func_37(0);
			if (iParam0 == 0)
			{
				sVar2 = "Relax_Idle_PedA";
			}
			else
			{
				sVar2 = "Relax_Idle_PedB";
			}
			bVar4 = true;
			bVar3 = false;
			bVar5 = true;
			break;
		case 4:
			if (iParam0 == 0)
			{
				sVar1 = func_37(2);
				sVar2 = "Reaction";
				bVar3 = false;
			}
			else
			{
				sVar1 = func_37(1);
				sVar2 = "Reaction";
				bVar3 = false;
			}
			fVar7 = 0.8f;
			bVar4 = false;
			break;
		case 5:
			if (iParam0 == 0)
			{
				sVar1 = func_37(2);
				sVar2 = "Idle";
			}
			else
			{
				sVar1 = func_37(1);
				sVar2 = "Idle";
			}
			bVar4 = true;
			bVar3 = false;
			break;
		case 6:
			break;
	}
	if (iParam0 == 0)
	{
		iVar0 = iLocal_132[0];
	}
	else
	{
		iVar0 = iLocal_132[1];
	}
	if (bVar3 || iParam2)
	{
		fVar8 = 1000f;
	}
	else if (bVar5)
	{
		fVar8 = 2f;
	}
	else
	{
		fVar8 = 8f;
	}
	if (bVar6)
	{
		fVar9 = -2f;
	}
	else
	{
		fVar9 = -8f;
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (iParam0 == 0)
		{
			if (iParam1 == 4)
			{
				TASK::TASK_LOOK_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
			}
			func_888(&iLocal_366, bVar4);
			TASK::TASK_SYNCHRONIZED_SCENE(iVar0, iLocal_366, sVar1, sVar2, fVar8, fVar9, 4, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_366, fVar7);
			if (iParam1 == 4)
			{
				iLocal_370 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			func_888(&iLocal_367, bVar4);
			TASK::TASK_SYNCHRONIZED_SCENE(iVar0, iLocal_367, sVar1, sVar2, fVar8, fVar9, 4, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_367, fVar7);
			if (iParam1 == 4)
			{
				iLocal_158 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_158, iLocal_367, "Reaction_Cam", sVar1);
			}
		}
		if (bVar3)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
		}
	}
	iLocal_112[iParam0] = iParam1;
}

void func_888(int iParam0, bool bParam1)//Position - 0x9067F
{
	*iParam0 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[3]))
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(*iParam0, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(*iParam0, iLocal_138[3], -1);
	}
	else
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(*iParam0, func_282(18), 0f, 0f, 0f, 2);
	}
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam0, bParam1);
}

void func_890(int iParam0)//Position - 0x90776
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
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
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_135[iVar0]))
		{
			iVar4 = iVar0;
			switch (iVar4)
			{
				case 0:
					iVar5 = 11;
					Var1 = { -3018.44f, 87.2183f, 10.6f };
					fVar2 = 62.91601f;
					break;
				case 1:
					iVar5 = 12;
					Var1 = { -3022.72f, 91.8035f, 10.6f };
					fVar2 = 41.65701f;
					break;
				case 2:
					iVar5 = 12;
					Var1 = { -3012.37f, 86.6375f, 10.6f };
					fVar2 = 97.91963f;
					break;
			}
			iLocal_135[iVar0] = VEHICLE::CREATE_VEHICLE(func_74(iVar5), Var1, fVar2, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_135[iVar0], 5f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_135[iVar0], 0);
			AUDIO::SET_HORN_ENABLED(iLocal_135[iVar0], false);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_135[iVar0], true, true, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_135[iVar0], true);
			VEHICLE::SET_VEHICLE_STEERING_BIAS_SCALAR(iLocal_135[iVar0], 0.3f);
			VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(iLocal_135[iVar0], true);
			if (iVar4 == 0)
			{
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_135[iVar0], 0, 0, 0.5f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_135[iVar0], "FINALE_CHENGS_VEHICLE_GROUP", 0f);
			}
			else
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_135[iVar0], "FINALE_TRIAD_VEHICLES_GROUP", 0f);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_114[iVar0 /*14*/]))
		{
			iVar6 = iVar0;
			iVar7 = 10;
			iVar3 = -1;
			switch (iVar6)
			{
				case 0:
					Var1 = { -3018.46f, 87.56f, 10.61f };
					fVar2 = -109.6f;
					iVar7 = 8;
					break;
				case 1:
					iVar3 = 0;
					iVar7 = 9;
					iVar8 = 2;
					break;
				case 2:
					Var1 = { -3018.43f, 85.71f, 10.61f };
					fVar2 = 62.4f;
					break;
				case 3:
					iVar3 = 0;
					iVar8 = 0;
					break;
				case 4:
					iVar3 = 1;
					iVar8 = -1;
					break;
				case 5:
					Var1 = { -3019.42f, 91.32f, 10.67f };
					fVar2 = -30.2f;
					break;
				case 6:
					Var1 = { -3019.3f, 89.01f, 10.74f };
					fVar2 = -83.2f;
					break;
				case 7:
					iVar3 = 2;
					iVar8 = -1;
					break;
				case 8:
					Var1 = { -3014f, 88.73f, 10.61f };
					fVar2 = 1.5f;
					break;
				case 9:
					Var1 = { -3016.98f, 87.08f, 10.69f };
					fVar2 = 67.2f;
					break;
			}
			Local_114[iVar0 /*14*/].f_9 = 0;
			Local_114[iVar0 /*14*/].f_10 = 0;
			Local_114[iVar0 /*14*/].f_11 = 0;
			Local_114[iVar0 /*14*/].f_13 = 0f;
			if (iVar6 == 0)
			{
				__LIB_16__::func_930(&(Local_114[iVar0 /*14*/]), 35, Var1, fVar2, 0);
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_114[iVar0 /*14*/]);
			}
			else if (iVar6 == 1)
			{
				__LIB_16__::func_317(&(Local_114[iVar0 /*14*/]), 21, iLocal_135[iVar3], iVar8, 0);
			}
			else
			{
				if (iVar3 >= 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar3], false))
					{
						Local_114[iVar0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_135[iVar3], 26, func_74(iVar7), iVar8, true, true);
					}
				}
				else
				{
					Local_114[iVar0 /*14*/] = PED::CREATE_PED(26, func_74(iVar7), Var1, fVar2, true, true);
				}
				switch (iVar6)
				{
					case 2:
						iVar9 = 2;
						iVar10 = 1;
						iVar11 = 0;
						iVar12 = 0;
						iVar13 = 1;
						iVar14 = 0;
						iVar15 = 0;
						iVar16 = 1;
						iVar17 = 0;
						break;
					case 3:
						iVar9 = 0;
						iVar10 = 2;
						iVar11 = 0;
						iVar12 = 1;
						iVar13 = 1;
						iVar14 = 1;
						iVar15 = 0;
						iVar16 = 0;
						iVar17 = 0;
						break;
					case 4:
						iVar9 = 1;
						iVar10 = 0;
						iVar11 = 2;
						iVar12 = 0;
						iVar13 = 0;
						iVar14 = 1;
						iVar15 = 2;
						iVar16 = 0;
						iVar17 = 0;
						break;
					case 5:
						iVar9 = 0;
						iVar10 = 1;
						iVar11 = 2;
						iVar12 = 1;
						iVar13 = 0;
						iVar14 = 0;
						iVar15 = 1;
						iVar16 = 1;
						iVar17 = 1;
						break;
					case 6:
						iVar9 = 2;
						iVar10 = 2;
						iVar11 = 0;
						iVar12 = 1;
						iVar13 = 2;
						iVar14 = 0;
						iVar15 = 2;
						iVar16 = 0;
						iVar17 = 0;
						break;
					case 7:
						iVar9 = 0;
						iVar10 = 0;
						iVar11 = 0;
						iVar12 = 1;
						iVar13 = 1;
						iVar14 = 1;
						iVar15 = 0;
						iVar16 = 1;
						iVar17 = 0;
						break;
					case 8:
						iVar9 = 1;
						iVar10 = 2;
						iVar11 = 0;
						iVar12 = 0;
						iVar13 = 2;
						iVar14 = 1;
						iVar15 = 0;
						iVar16 = 0;
						iVar17 = 0;
						break;
					case 9:
						iVar9 = 2;
						iVar10 = 1;
						iVar11 = 1;
						iVar12 = 0;
						iVar13 = 1;
						iVar14 = 0;
						iVar15 = 0;
						iVar16 = 0;
						iVar17 = 0;
						break;
				}
				PED::SET_PED_COMPONENT_VARIATION(Local_114[iVar0 /*14*/], 0, 0, iVar9, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_114[iVar0 /*14*/], 2, iVar10, iVar11, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_114[iVar0 /*14*/], 3, iVar12, iVar13, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_114[iVar0 /*14*/], 4, iVar14, iVar15, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_114[iVar0 /*14*/], 8, iVar16, iVar17, 0);
				if (iLocal_309)
				{
					bVar18 = false;
					while (!bVar18)
					{
						if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
						{
							if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_114[iVar0 /*14*/]))
							{
								bVar18 = true;
							}
						}
						else
						{
							bVar18 = true;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		iVar0++;
	}
	iLocal_116 = 0;
	bLocal_214 = false;
	bLocal_260 = false;
	bLocal_270 = false;
	iLocal_309 = 0;
	func_896();
	if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]))
	{
		__LIB_0__::func_222(&uLocal_418, 4, Local_114[0 /*14*/], "CHENGSR", 0, 1);
	}
	if (!PED::IS_PED_INJURED(Local_114[4 /*14*/]))
	{
		__LIB_0__::func_222(&uLocal_418, 5, Local_114[4 /*14*/], "F3TRIAD1", 0, 1);
	}
	if (iParam0 == 0)
	{
		func_891(2, 0, 1);
		bLocal_248 = true;
	}
	else if (iParam0 == 3)
	{
		func_891(2, 1, 0);
		bLocal_248 = false;
	}
}

void func_891(int iParam0, bool bParam1, bool bParam2)//Position - 0x90D1E
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	switch (iParam0)
	{
		case 2:
		case 0:
		case 1:
			iLocal_369 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false))
			{
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_369, iLocal_135[0], 0);
			}
			if (iParam0 == 0)
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_369, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_369, false);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_369, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_369, true);
			}
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = iVar0;
				bVar4 = true;
				if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
				{
					switch (iParam0)
					{
						case 2:
							sVar3 = func_37(8);
							switch (iVar1)
							{
								case 0:
									sVar2 = "IG8_PEDC";
									break;
								case 1:
									sVar2 = "IG8_PEDE";
									break;
								case 2:
									sVar2 = "IG8_PEDD";
									break;
								case 3:
									bVar4 = false;
									break;
								case 4:
									sVar2 = "IG8_PEDI";
									break;
								case 5:
									sVar2 = "IG8_PEDH";
									break;
								case 6:
									sVar2 = "IG8_PEDB";
									break;
								case 7:
									sVar2 = "IG8_PEDG";
									break;
								case 8:
									sVar2 = "IG8_PEDF";
									break;
								case 9:
									sVar2 = "IG8_PEDA";
									break;
							}
							break;
						case 0:
							switch (iVar1)
							{
								case 0:
									sVar2 = "IDLE_PEDC";
									break;
								case 1:
									sVar2 = "IDLE_PEDE";
									break;
								case 2:
									sVar2 = "IDLE_PEDD";
									break;
								case 3:
									bVar4 = false;
									break;
								case 4:
									sVar2 = "IDLE_PEDI";
									break;
								case 5:
									sVar2 = "IDLE_PEDH";
									break;
								case 6:
									sVar2 = "IDLE_PEDB";
									break;
								case 7:
									sVar2 = "IDLE_PEDG";
									break;
								case 8:
									sVar2 = "IDLE_PEDF";
									break;
								case 9:
									sVar2 = "IDLE_PEDA";
									break;
							}
							break;
						case 1:
							switch (iVar1)
							{
								case 0:
									sVar2 = "OUTRO_PEDC";
									break;
								case 1:
									sVar2 = "OUTRO_PEDE";
									break;
								case 2:
									sVar2 = "OUTRO_PEDD";
									break;
								case 3:
									bVar4 = false;
									break;
								case 4:
									sVar2 = "OUTRO_PEDI";
									break;
								case 5:
									sVar2 = "OUTRO_PEDH";
									break;
								case 6:
									sVar2 = "OUTRO_PEDB";
									break;
								case 7:
									sVar2 = "OUTRO_PEDG";
									break;
								case 8:
									sVar2 = "OUTRO_PEDF";
									break;
								case 9:
									sVar2 = "OUTRO_PEDA";
									break;
							}
							break;
					}
					if (bVar4)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_114[iVar0 /*14*/], false))
						{
							ENTITY::SET_ENTITY_COORDS(Local_114[iVar0 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_114[iVar0 /*14*/], true), true, false, false, true);
						}
						if (bParam1)
						{
							fVar5 = 1000f;
						}
						else
						{
							fVar5 = 8f;
						}
						TASK::TASK_SYNCHRONIZED_SCENE(Local_114[iVar0 /*14*/], iLocal_369, sVar3, sVar2, fVar5, -8f, 0, 0, 1000f, 0);
						if (bParam1)
						{
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_114[iVar1 /*14*/], false, false);
						}
					}
				}
				iVar0++;
			}
			if (iParam0 == 2)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					iVar6 = iVar0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar6], false))
					{
						switch (iVar6)
						{
							case 0:
								sVar2 = "IG8_WASH";
								break;
							case 1:
								sVar2 = "IG8_CAVFRONT";
								break;
							case 2:
								sVar2 = "IG8_CAVREAR";
								break;
						}
						if (bParam1)
						{
							fVar7 = 0.78f;
						}
						else
						{
							fVar7 = 0.6f;
						}
						ENTITY::PLAY_ENTITY_ANIM(iLocal_135[iVar6], sVar2, func_37(8), 1000f, false, false, false, fVar7, 0);
					}
					iVar0++;
				}
				func_895(1);
				if (bParam1)
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_369, 0.78f);
				}
				else
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_369, 0.6f);
				}
				if (bParam2)
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_369, 0f);
				}
				else
				{
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_369, 1f);
				}
			}
			break;
		case 3:
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = iVar0;
				if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_114[iVar0 /*14*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
					{
						func_894(iVar1);
					}
					iVar8 = func_893(iVar1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar8], false))
					{
						switch (iVar1)
						{
							case 4:
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_114[iVar1 /*14*/], iLocal_135[iVar8], "finc24", iLocal_129, 7, 0, -1, -1f, false, 2f);
								break;
							case 2:
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_416);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_416);
								TASK::TASK_PAUSE(0, 600);
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_135[iVar8], "finc24", iLocal_129, 4, 0, -1, -1f, false, 2f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_416);
								TASK::TASK_PERFORM_SEQUENCE(Local_114[iVar1 /*14*/], iLocal_416);
								break;
							case 7:
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_416);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_416);
								TASK::TASK_PAUSE(0, 1200);
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_135[iVar8], "finc24", iLocal_129, 3, 16, -1, -1f, false, 2f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_416);
								TASK::TASK_PERFORM_SEQUENCE(Local_114[iVar1 /*14*/], iLocal_416);
								break;
							}
						}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar0], false))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_135[iVar0], -1000f, true);
					func_892(iLocal_135[iVar0]);
					func_719(iLocal_135[iVar0]);
				}
				iVar0++;
			}
			break;
		case 4:
			iVar9 = 524462;
			switch (iLocal_409)
			{
				case 0:
					Local_338 = { -3067.67f, 1369.19f, 19.34f };
					break;
				case 1:
					Local_338 = { -2618.6882f, 2860.7244f, 15.70077f };
					break;
				case 2:
					Local_338 = { -1842.835f, 4669.3286f, 56.04228f };
					break;
				case 3:
					Local_338 = { -197.48712f, 6170.6006f, 30.2401f };
					break;
				case 4:
					Local_338 = { 245.7f, 6558.6006f, 30.3401f };
					break;
				case 5:
					Local_338 = { 617.38715f, 6526.6016f, 27.22127f };
					break;
				case 6:
					Local_338 = { 1495.6825f, 6433.737f, 21.45721f };
					break;
				case 7:
					Local_338 = { 1968.0751f, 6174.2227f, 44.76606f };
					break;
				case 8:
					Local_338 = { 2681.7156f, 4805.8916f, 43.58303f };
					break;
				case 9:
					Local_338 = { 2883.1182f, 3700.9927f, 51.67475f };
					break;
				case 10:
					Local_338 = { 1845.9951f, 2950.1113f, 44.75816f };
					break;
				case 11:
					Local_338 = { 982.8629f, 2695.7974f, 38.91315f };
					break;
				case 12:
					Local_338 = { -494.1223f, 2847.707f, 32.80378f };
					break;
				case 13:
					Local_338 = { -1818.5853f, 2398.8184f, 30.0306f };
					break;
				case 14:
					Local_338 = { -2680.5657f, 2289.689f, 19.73934f };
					break;
				case 15:
					Local_338 = { -494.1223f, 2847.707f, 32.80378f };
					break;
			}
			iLocal_409++;
			if (iLocal_409 == 16)
			{
				iLocal_409 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[1], false) && !PED::IS_PED_INJURED(Local_114[4 /*14*/]))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Local_114[4 /*14*/], iLocal_135[1], Local_338, 16f, iVar9, 10f);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[1], false)) && !PED::IS_PED_INJURED(Local_114[2 /*14*/]))
			{
				TASK::TASK_VEHICLE_ESCORT(Local_114[2 /*14*/], iLocal_135[0], iLocal_135[1], -1, 24f, iVar9, 12f, 20, 20f);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[2], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false)) && !PED::IS_PED_INJURED(Local_114[7 /*14*/]))
			{
				TASK::TASK_VEHICLE_ESCORT(Local_114[7 /*14*/], iLocal_135[2], iLocal_135[1], -1, 24f, iVar9, 24f, 20, 20f);
			}
			break;
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false) && !PED::IS_PED_INJURED(Local_114[2 /*14*/]))
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_114[2 /*14*/], iLocal_135[0], PLAYER::PLAYER_PED_ID(), 8, 20f, 786469, -1f, -1f, true);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[2], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false)) && !PED::IS_PED_INJURED(Local_114[7 /*14*/]))
			{
				TASK::TASK_VEHICLE_MISSION(Local_114[7 /*14*/], iLocal_135[2], iLocal_135[0], 7, 35f, 786469, -1f, -1f, true);
			}
			iLocal_405 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_393 = MISC::GET_GAME_TIMER();
			break;
		case 6:
			iLocal_405 = MISC::GET_GAME_TIMER() + 10000;
			break;
	}
	iLocal_378 = MISC::GET_GAME_TIMER();
	iLocal_116 = iParam0;
}

void func_892(int iParam0)//Position - 0x9165F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 1, 1, 0f);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 0, 1, 0f);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 2, 1, 0f);
		VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam0, 3, 1, 0f);
	}
}

int func_893(int iParam0)//Position - 0x91695
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
			break;
		case 4:
		case 5:
		case 6:
			return 1;
			break;
		case 7:
		case 8:
		case 9:
			return 2;
			break;
	}
	return 0;
}

void func_894(int iParam0)//Position - 0x916F6
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(Local_114[iParam0 /*14*/]))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Local_114[iParam0 /*14*/], false))
		{
			iVar0 = func_893(iParam0);
			switch (iParam0)
			{
				case 0:
					iVar1 = 1;
					break;
				case 1:
					iVar1 = 2;
					break;
				case 2:
					iVar1 = -1;
					break;
				case 3:
					iVar1 = 0;
					break;
				case 4:
					iVar1 = -1;
					break;
				case 5:
					iVar1 = 0;
					break;
				case 6:
					iVar1 = 1;
					break;
				case 7:
					iVar1 = -1;
					break;
				case 8:
					iVar1 = 0;
					break;
				case 9:
					iVar1 = 1;
					break;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar0], false))
			{
				TASK::CLEAR_PED_TASKS(Local_114[iParam0 /*14*/]);
				PED::SET_PED_INTO_VEHICLE(Local_114[iParam0 /*14*/], iLocal_135[iVar0], iVar1);
			}
		}
	}
}

void func_895(bool bParam0)//Position - 0x917D2
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
		{
			if (bParam0)
			{
				PED::SET_PED_MAX_HEALTH(Local_114[iVar0 /*14*/], 400);
				ENTITY::SET_ENTITY_HEALTH(Local_114[iVar0 /*14*/], 400, 0);
			}
			else
			{
				PED::SET_PED_MAX_HEALTH(Local_114[iVar0 /*14*/], 200);
				ENTITY::SET_ENTITY_HEALTH(Local_114[iVar0 /*14*/], 200, 0);
			}
		}
		iVar0++;
	}
}

void func_896()//Position - 0x9183C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
		{
			iVar1 = iVar0;
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_114[iVar0 /*14*/], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_114[iVar0 /*14*/], true);
			PED::SET_PED_KEEP_TASK(Local_114[iVar0 /*14*/], true);
			PED::SET_PED_DIES_WHEN_INJURED(Local_114[iVar0 /*14*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_114[iVar0 /*14*/], iLocal_583);
			PED::SET_PED_ACCURACY(Local_114[iVar0 /*14*/], 2);
			PED::REQUEST_PED_VISIBILITY_TRACKING(Local_114[iVar0 /*14*/]);
			if (!Local_114[iVar0 /*14*/].f_11)
			{
				__LIB_0__::func_609(Local_114[iVar0 /*14*/], 0);
				Local_114[iVar0 /*14*/].f_11 = 1;
			}
			if (iVar1 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(Local_114[iVar0 /*14*/], 188, true);
			}
			PED::SET_PED_CONFIG_FLAG(Local_114[iVar0 /*14*/], 42, true);
			bVar2 = true;
			bVar3 = false;
			bVar4 = false;
			switch (iVar1)
			{
				case 0:
					bVar4 = true;
					break;
				case 5:
					bVar3 = true;
					break;
				case 8:
					bVar3 = true;
					break;
			}
			if (bVar2)
			{
				if (bVar4)
				{
					iVar5 = func_370(5);
				}
				else
				{
					iVar5 = func_370(2);
				}
				WEAPON::GIVE_WEAPON_TO_PED(Local_114[iVar0 /*14*/], iVar5, -1, bVar3, true);
			}
		}
		iVar0++;
	}
}

void func_898(int iParam0)//Position - 0x919E4
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
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
	char* sVar15;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_136[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { -181.99211f, -1514.2926f, 32.21401f };
					fVar2 = -42.7f;
					iVar3 = 0;
					break;
				case 1:
					Var1 = { -219.4083f, -1491.9441f, 30.24725f };
					fVar2 = -44.4f;
					iVar3 = 0;
					break;
				case 2:
					Var1 = { -181.99211f, -1514.2926f, 32.21401f };
					fVar2 = -42.7f;
					iVar3 = 0;
					break;
			}
			iLocal_264[iVar0] = 0;
			iLocal_136[iVar0] = VEHICLE::CREATE_VEHICLE(func_74(13), Var1, fVar2, true, true, false);
			VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iLocal_136[iVar0], false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_136[iVar0], 5f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_136[iVar0], iVar3);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_136[iVar0], "FINALE_BALLA_CARS", 0f);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*14*/]))
		{
			iVar4 = iVar0;
			if (iVar4 == 0)
			{
				__LIB_16__::func_930(&(Local_113[iVar0 /*14*/]), 37, func_903(iVar4), func_902(iVar4), 0);
			}
			else
			{
				if (iVar4 < 8)
				{
					Local_113[iVar0 /*14*/] = PED::CREATE_PED(26, func_74(19), func_903(iVar4), func_902(iVar4), true, true);
				}
				else
				{
					switch (iVar4)
					{
						case 8:
							iVar5 = 0;
							iVar6 = -1;
							break;
						case 9:
							iVar5 = 0;
							iVar6 = 0;
							break;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_136[iVar5], false))
					{
						Local_113[iVar0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_136[iVar5], 26, func_74(19), iVar6, true, true);
					}
				}
				if (iVar4 <= 3)
				{
					switch (iVar4)
					{
						case 1:
							iVar7 = 0;
							iVar8 = 2;
							iVar9 = 0;
							iVar10 = 0;
							iVar11 = 1;
							iVar12 = 0;
							iVar13 = 0;
							break;
						case 2:
							iVar7 = 1;
							iVar8 = 0;
							iVar9 = 1;
							iVar10 = 3;
							iVar11 = 0;
							iVar12 = 0;
							iVar13 = 0;
							break;
						case 3:
							iVar7 = 1;
							iVar8 = 1;
							iVar9 = 0;
							iVar10 = 1;
							iVar11 = 2;
							iVar12 = 0;
							iVar13 = 0;
							break;
					}
					PED::SET_PED_COMPONENT_VARIATION(Local_113[iVar0 /*14*/], 0, iVar7, iVar8, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_113[iVar0 /*14*/], 3, iVar9, iVar10, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_113[iVar0 /*14*/], 4, 0, iVar11, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_113[iVar0 /*14*/], 8, iVar12, iVar13, 0);
					PED::CLEAR_ALL_PED_PROPS(Local_113[iVar0 /*14*/]);
					switch (iVar4)
					{
						case 1:
							PED::SET_PED_PROP_INDEX(Local_113[iVar0 /*14*/], 0, 1, 0, false);
							break;
					}
					if (iLocal_308)
					{
						bVar14 = false;
						while (!bVar14)
						{
							if (!PED::IS_PED_INJURED(Local_113[iVar0 /*14*/]))
							{
								if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_113[iVar0 /*14*/]))
								{
									bVar14 = true;
								}
							}
							else
							{
								bVar14 = true;
							}
							SYSTEM::WAIT(0);
						}
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_113[iVar0 /*14*/]))
			{
				if (iVar4 > 3 && iVar4 < 8)
				{
					switch (iVar4)
					{
						case 4:
							sVar15 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 5:
							sVar15 = "WORLD_HUMAN_HANG_OUT_STREET";
							break;
						case 6:
							sVar15 = "WORLD_HUMAN_SMOKING";
							break;
						case 7:
							sVar15 = "WORLD_HUMAN_DRINKING";
							break;
					}
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*14*/], sVar15, -1, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[iVar0 /*14*/], true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_113[iVar0 /*14*/], true);
				PED::SET_PED_KEEP_TASK(Local_113[iVar0 /*14*/], true);
				PED::SET_PED_DIES_WHEN_INJURED(Local_113[iVar0 /*14*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[iVar0 /*14*/], iLocal_585);
				PED::SET_PED_CONFIG_FLAG(Local_113[iVar0 /*14*/], 42, true);
				if ((iVar4 != 1 && iVar4 != 2) && iVar4 != 3)
				{
					PED::SET_PED_COMBAT_MOVEMENT(Local_113[iVar0 /*14*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*14*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*14*/], 1, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*14*/], 41, true);
				}
				if (iVar4 >= 8)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*14*/], 3, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*14*/], 7, true);
				}
				PED::REQUEST_PED_VISIBILITY_TRACKING(Local_113[iVar0 /*14*/]);
				PED::SET_PED_ACCURACY(Local_113[iVar0 /*14*/], 1);
				__LIB_0__::func_609(Local_113[iVar0 /*14*/], 0);
				WEAPON::GIVE_WEAPON_TO_PED(Local_113[iVar0 /*14*/], func_370(1), -1, false, true);
				if (iVar4 == 0)
				{
					iLocal_141 = OBJECT::CREATE_OBJECT(func_74(23), 0f, 1f, 2f, true, true, false);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_141, 100);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_141, Local_113[iVar0 /*14*/], PED::GET_PED_BONE_INDEX(Local_113[iVar0 /*14*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					PED::SET_PED_CONFIG_FLAG(Local_113[iVar0 /*14*/], 188, true);
					iLocal_140 = OBJECT::CREATE_OBJECT(func_74(22), 0f, 1f, 2f, true, true, false);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_140, 100);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_140, Local_113[iVar0 /*14*/], PED::GET_PED_BONE_INDEX(Local_113[iVar0 /*14*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
				}
				if (iVar4 == 0)
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_113[iVar0 /*14*/], "FINALE_STRETCH_GROUP", 0f);
				}
				else
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_113[iVar0 /*14*/], "FINALE_ENEMY_BALLAS", 0f);
				}
				Local_113[iVar0 /*14*/].f_10 = 0;
				Local_113[iVar0 /*14*/].f_11 = 0;
				Local_113[iVar0 /*14*/].f_12 = 0;
				Local_113[iVar0 /*14*/].f_13 = -1;
			}
		}
		iVar0++;
	}
	if (iParam0 == 2)
	{
		func_899(2, 1);
	}
	else
	{
		func_899(1, 1);
	}
	__LIB_0__::func_222(&uLocal_418, 4, Local_113[3 /*14*/], "GANGBANGER2", 0, 1);
	__LIB_0__::func_222(&uLocal_418, 6, Local_113[2 /*14*/], "TEAMMATE", 0, 1);
	__LIB_0__::func_222(&uLocal_418, 7, Local_113[0 /*14*/], "STRETCH" /* GXT: Stretch */, 0, 1);
	bLocal_259 = false;
	iLocal_282 = 0;
	iLocal_396 = -1;
	iLocal_308 = 0;
}

void func_899(int iParam0, bool bParam1)//Position - 0x91F4A
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	switch (iParam0)
	{
		case 0:
			iLocal_371 = PED::CREATE_SYNCHRONIZED_SCENE(-203.056f, -1509.578f, 34.581f, 0f, 0f, -64.8f, 2);
			break;
		case 1:
		case 2:
			iLocal_371 = PED::CREATE_SYNCHRONIZED_SCENE(-203.056f, -1509.578f, 30.615f, 0f, 0f, -64.8f, 2);
			break;
	}
	if (bParam1)
	{
		fVar1 = 1000f;
	}
	else
	{
		fVar1 = 8f;
	}
	if (iParam0 == 2)
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (iParam0 == 1)
	{
		fVar3 = 0f;
		iLocal_247 = 1;
	}
	else
	{
		fVar3 = 1f;
		iLocal_247 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar4 = iVar0;
		if (!PED::IS_PED_INJURED(Local_113[iVar4 /*14*/]))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar4 /*14*/], iLocal_371, func_901(iVar4, iParam0), func_900(iVar4, iParam0), fVar1, -8f, 1, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_371, bVar2);
			PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_371, fVar3);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar4 /*14*/], false, false);
			iLocal_372[iVar4] = MISC::GET_GAME_TIMER();
			Local_113[iVar4 /*14*/].f_9 = iParam0;
		}
		iVar0++;
	}
}

char* func_900(int iParam0, int iParam1)//Position - 0x9206C
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "MCS_2_B_Leadin_C";
					break;
				case 1:
					return "MCS_2_B_Leadin_A";
					break;
				case 2:
					return "MCS_2_B_Leadin_B";
					break;
				case 3:
					return "MCS_2_B_Leadin_D";
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "Idle_PEDC";
					break;
				case 1:
					return "Idle_PEDA";
					break;
				case 2:
					return "Idle_PEDB";
					break;
				case 3:
					return "Idle_PEDD";
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "MCS_2_B_TakeOut_Phone_PEDC";
					break;
				case 1:
					return "MCS_2_B_TakeOut_Phone_PEDA";
					break;
				case 2:
					return "MCS_2_B_TakeOut_Phone_PEDB";
					break;
				case 3:
					return "MCS_2_B_TakeOut_Phone_PEDD";
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "Outro_quick_PEDC";
					break;
				case 1:
					return "react_left";
					break;
				case 2:
					return "react_front";
					break;
				case 3:
					return "react_right";
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 1:
					return "react_left_run_fwd";
					break;
				case 2:
					return "react_front_run_left";
					break;
				case 3:
					return "react_right_run_bwd";
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "Outro_quick_PEDC";
					break;
				case 1:
					return "Outro_PEDA";
					break;
				case 2:
					return "Outro_PEDB";
					break;
				case 3:
					return "Outro_PEDD";
					break;
			}
			break;
	}
	return "error";
}

char* func_901(int iParam0, int iParam1)//Position - 0x92266
{
	switch (iParam1)
	{
		case 2:
			return func_37(6);
			break;
		case 4:
			return func_37(6);
			break;
		case 3:
			if (iParam0 == 0)
			{
				return func_37(6);
			}
			else
			{
				return func_37(10);
			}
			break;
		case 6:
			return func_37(11);
			break;
		case 1:
			return func_37(7);
			break;
	}
	return "error";
}

float func_902(int iParam0)//Position - 0x922E1
{
	switch (iParam0)
	{
		case 0:
			return 40f;
			break;
		case 1:
			return 88f;
			break;
		case 2:
			return 60f;
			break;
		case 3:
			return -95f;
			break;
		case 4:
			return 18.4f;
			break;
		case 5:
			return -159.8f;
			break;
		case 6:
			return -81.2f;
			break;
		case 7:
			return -46.3f;
			break;
	}
	return 0f;
}

Vector3 func_903(int iParam0)//Position - 0x92379
{
	switch (iParam0)
	{
		case 0:
			return -204.24f, -1508.53f, 30.61f;
			break;
		case 1:
			return -202.8f, -1508.26f, 30.61f;
			break;
		case 2:
			return -203.45f, -1508.76f, 30.61f;
			break;
		case 3:
			return -205.2f, -1508.67f, 30.61f;
			break;
		case 4:
			return -230.29129f, -1525.7146f, 30.53708f;
			break;
		case 5:
			return -230.86536f, -1524.27f, 30.49504f;
			break;
		case 6:
			return -231.68109f, -1525.0363f, 30.49134f;
			break;
		case 7:
			return -229.57817f, -1548.5732f, 30.58296f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_904()//Position - 0x92463
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	float fVar6;
	bool bVar7;
	func_980();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_182)
	{
		if (!iLocal_304)
		{
			if (iLocal_117 > 0)
			{
				__LIB_17__::func_99("FINC2_STRETCH_SHOT");
				iLocal_304 = 1;
			}
		}
		if (MISC::GET_GAME_TIMER() < iLocal_377)
		{
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		}
		if (!iLocal_256)
		{
			if (iLocal_117 > 0)
			{
				MISC::SET_INSTANCE_PRIORITY_HINT(1);
				iLocal_256 = 1;
			}
		}
		bVar1 = false;
		if (Local_113[0 /*14*/].f_9 < 5 && !bLocal_259)
		{
			if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[0 /*14*/]))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[0 /*14*/], -1, 2048, 2);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
		{
			if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[0 /*14*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
		else if (!iLocal_292)
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			iLocal_292 = 1;
		}
		if (!Global_96880[0])
		{
			if (iLocal_110[0] == 2)
			{
				if (!iLocal_189[0])
				{
					if (iLocal_117 == 0 && !iLocal_245)
					{
						if (bLocal_244)
						{
							if (func_283("FINC1_MHR", 0, 0, 0))
							{
								iLocal_189[0] = 1;
							}
						}
					}
					else
					{
						iLocal_189[0] = 1;
					}
				}
				else if (!iLocal_188[0] && !iLocal_245)
				{
					iLocal_188[0] = func_247("FC2_KILLSTR", 1, 0);
				}
				bVar2 = false;
				iVar0 = 0;
				while (iVar0 < 10)
				{
					iVar3 = iVar0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*14*/]))
					{
						if (PED::IS_PED_INJURED(Local_113[iVar0 /*14*/]))
						{
							if (iVar3 == 0)
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_151))
								{
									HUD::REMOVE_BLIP(&iLocal_151);
								}
								bVar2 = true;
							}
						}
						else if (iVar3 == 0)
						{
							bVar4 = __LIB_0__::func_114();
							if (func_245())
							{
								if (bVar4)
								{
									if (!bLocal_210 || !HUD::DOES_BLIP_EXIST(iLocal_151))
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_151))
										{
											HUD::REMOVE_BLIP(&iLocal_151);
										}
										func_978(1);
									}
								}
								else if (bLocal_210 || !HUD::DOES_BLIP_EXIST(iLocal_151))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_151))
									{
										HUD::REMOVE_BLIP(&iLocal_151);
									}
									func_978(0);
								}
							}
							bLocal_210 = bVar4;
							bVar5 = false;
							if (!bLocal_210)
							{
								fVar6 = 150f;
							}
							else
							{
								fVar6 = 300f;
							}
							__LIB_14__::func_655(iLocal_151, Local_113[iVar0 /*14*/], fVar6, 1061158912, 0);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*14*/], fVar6, fVar6, fVar6, false, false, 0))
							{
								bVar5 = true;
							}
							if (bVar5)
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_151))
								{
									HUD::REMOVE_BLIP(&iLocal_151);
								}
								func_829(25);
							}
						}
					}
					iVar0++;
				}
				if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[0 /*14*/], 35f, 35f, 35f, false, false, 0))
					{
						if (!bLocal_225)
						{
							if (iLocal_117 == 1)
							{
								bLocal_225 = true;
							}
							else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_113[0 /*14*/], true), true) < 17f && Local_113[0 /*14*/].f_9 >= 2)
							{
								if (!iLocal_245)
								{
									__LIB_0__::func_325();
									iLocal_245 = 1;
								}
								if (func_283("FINC1_MCOMB", 1, 0, 0))
								{
									iLocal_374 = MISC::GET_GAME_TIMER();
									bLocal_225 = true;
								}
							}
						}
						if (iLocal_117 != 0)
						{
							if (!bLocal_226)
							{
								if (bLocal_225)
								{
									iLocal_188[0] = 1;
									bLocal_226 = func_283("FINC1_SGCOMB", 1, 0, 0);
								}
							}
							else
							{
								if (!iLocal_227)
								{
									if (!PED::IS_PED_INJURED(Local_113[2 /*14*/]))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[2 /*14*/], 30f, 30f, 6f, false, true, 0))
										{
											iLocal_227 = func_283("FINC1_COWARD", 0, 0, 0);
										}
										else
										{
											iLocal_227 = 1;
										}
									}
									else
									{
										iLocal_227 = 1;
									}
								}
								else if (!bLocal_228)
								{
									if ((PED::IS_PED_INJURED(Local_113[1 /*14*/]) && PED::IS_PED_INJURED(Local_113[2 /*14*/])) && PED::IS_PED_INJURED(Local_113[3 /*14*/]))
									{
										bLocal_228 = func_283("FINC_MSTRET", 0, 0, 0);
										if (bLocal_228)
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
										}
									}
									else
									{
										bLocal_228 = func_283("FINC1_DISL", 0, 0, 0);
									}
								}
								else if (!iLocal_229)
								{
									if (func_283("FINC1_SICOMB", 0, 0, 0))
									{
										iLocal_229 = 1;
										iLocal_362 = MISC::GET_GAME_TIMER() + 12000;
									}
								}
								else
								{
									func_822("FINC1_SATT", 12000, 16000);
								}
								if (!iLocal_230)
								{
									if (Local_113[0 /*14*/].f_9 == 5 && MISC::GET_GAME_TIMER() >= iLocal_388 + 12000)
									{
										if (func_283("FINC1_SORDER", 0, 0, 0))
										{
											iLocal_230 = 1;
											iLocal_362 = MISC::GET_GAME_TIMER() + 7000;
										}
									}
								}
							}
						}
						else if (!bLocal_225)
						{
							if (!bLocal_244)
							{
								if (Local_113[0 /*14*/].f_9 >= 1)
								{
									bLocal_244 = func_283("FINC1_SPHINT", 0, 0, 0);
								}
							}
							else if (Local_113[0 /*14*/].f_9 == 2)
							{
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
								{
									if (iLocal_375 < 3)
									{
										if (func_822("FINC1_LPHONE", -1, -1))
										{
											iLocal_375++;
										}
									}
								}
								else if (iLocal_376 < 4)
								{
									if (func_822("FINC1_IG6", -1, -1))
									{
										iLocal_376++;
									}
								}
							}
						}
					}
				}
				if (bVar2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_113[0 /*14*/]))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_113[0 /*14*/], 0, 1))
						{
							__LIB_0__::func_630(272);
						}
					}
					if (func_245())
					{
						if (Global_96880[0] == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
						}
						iLocal_389 = MISC::GET_GAME_TIMER();
						MISC::SET_INSTANCE_PRIORITY_HINT(0);
						iLocal_49.f_18[0] = 1;
						func_42(5);
						func_33(13);
						fLocal_349 = 230f;
						Global_96880[0] = 1;
					}
				}
			}
		}
		else
		{
			fLocal_349 = (fLocal_349 - (0.4f * SYSTEM::TIMESTEP()));
			if (fLocal_349 < 0f)
			{
				fLocal_349 = 0f;
			}
			if (!iLocal_191[0])
			{
				if (__LIB_0__::func_501("FC2_KILLSTR", 0, 0))
				{
					func_252(0, 1, 0, 0);
				}
				if (!bLocal_257)
				{
					iLocal_191[0] = 1;
					func_42(13);
					func_42(14);
					iVar0 = 0;
					while (iVar0 < 10)
					{
						__LIB_0__::func_621(&(Local_113[iVar0 /*14*/].f_1));
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_113[iVar0 /*14*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[iVar0 /*14*/]));
						}
						iVar0++;
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						__LIB_17__::func_99("FINC2_STRETCH_DONE_FOOT");
					}
					else
					{
						__LIB_17__::func_99("FINC2_STRETCH_DONE");
					}
					func_253();
				}
				else if (!bLocal_192[0])
				{
					if (bLocal_242)
					{
						bLocal_192[0] = func_247("FC2_ESCHOOD", 1, 0);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_501("FC2_ESCHOOD", 0, 0))
				{
					func_252(0, 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || Local_108.f_1 != 0)
				{
					if (__LIB_0__::func_501("LOSE_WANTED" /* GXT: Lose the Cops. */, 0, 0))
					{
						func_252(0, 1, 0, 0);
					}
					bLocal_205 = false;
					if (!bLocal_190[0])
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						bLocal_190[0] = func_283("FINC1_MDH", 0, 0, 0);
					}
					else if (!iLocal_195)
					{
						iLocal_195 = func_975();
					}
					else
					{
						if (!bLocal_196)
						{
							AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
							bLocal_196 = func_974();
						}
						else
						{
							if (!iLocal_200)
							{
								if (Local_108.f_1 == 0)
								{
									iLocal_200 = func_247(func_973(), 1, 0);
								}
								if (!iLocal_49.f_18[2])
								{
									if (iLocal_49.f_18[1])
									{
										func_972(2);
									}
								}
								else if (!iLocal_49.f_18[1])
								{
									func_972(1);
								}
							}
							if (func_970())
							{
								func_907();
							}
						}
						if (iLocal_49.f_18[2])
						{
							if (func_906())
							{
								func_972(2);
								__LIB_15__::func_961(&iLocal_49, 2, 0, 1);
								iLocal_49.f_18[2] = 0;
							}
						}
					}
				}
				else
				{
					if (!bLocal_205)
					{
						bLocal_205 = func_247("LOSE_WANTED" /* GXT: Lose the Cops. */, 1, 0);
						MISC::ENABLE_DISPATCH_SERVICE(1, true);
						MISC::ENABLE_DISPATCH_SERVICE(7, true);
						PED::SET_CREATE_RANDOM_COPS(true);
					}
					iLocal_200 = 0;
				}
			}
		}
		if (func_245())
		{
			if (iLocal_319 == 0)
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
				iLocal_319 = 1;
			}
			bVar7 = false;
			if (Local_108.f_1 == 0)
			{
				if (__LIB_17__::func_341() == 1)
				{
					func_288(0, 0, 1, 1, 0, 1, 0, 1);
					bVar7 = true;
				}
				else if (__LIB_17__::func_341() == 2)
				{
					if (Global_96880[2])
					{
						func_288(4, 0, 1, 1, 0, 1, 1, 1);
						bVar7 = true;
					}
					else
					{
						func_288(0, 0, 1, 1, 0, 1, 0, 1);
						bVar7 = true;
					}
				}
				if (bVar7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
					{
						func_81(0, 0);
						func_394(iLocal_49[0], 1);
						PED::DELETE_PED(&(iLocal_49[0]));
						__LIB_0__::func_222(&uLocal_418, 0, 0, "MICHAEL", 0, 1);
					}
					func_279(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_134[2]));
					}
					func_279(4);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_146))
	{
		HUD::REMOVE_BLIP(&iLocal_146);
	}
}

int func_906()//Position - 0x92D3A
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!Global_96880[iVar1])
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_907()//Position - 0x92D68
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	var uVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	struct<3> Var16;
	int iVar17;
	int iVar18;
	bool bVar19;
	float fVar20;
	bool bVar21;
	bool bVar22;
	switch (Local_108.f_1)
	{
		case 0:
			if (!bLocal_206)
			{
				if (func_954(&iLocal_49, 0, 1))
				{
					if (iLocal_43 < 4 || iLocal_118 == 2)
					{
						iLocal_45 = 0;
						Local_108.f_0 = iLocal_49.f_7;
						Local_108.f_1 = 1;
						iVar0 = __LIB_0__::func_484(Local_108.f_0);
						iVar0 = iVar0;
						__LIB_0__::func_497(269, 1, 0);
						if (iLocal_47 >= 1)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							iLocal_47 = 0;
						}
						iLocal_220 = 0;
						bLocal_219 = false;
						bLocal_218 = false;
						bLocal_280 = false;
						iLocal_281 = 0;
						Local_93.f_19 = 0;
						iVar1 = func_378(__LIB_17__::func_341());
						iVar3 = -1;
						fVar4 = 9999999f;
						Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, func_953(__LIB_17__::func_341(), iVar2), false);
							if (fVar6 < fVar4 && fVar6 < 1000f)
							{
								fVar4 = fVar6;
								iVar3 = iVar2;
							}
							iVar2++;
						}
						if (iVar3 >= 0)
						{
							iLocal_381[__LIB_17__::func_341()] = iVar3;
						}
						else
						{
							iLocal_194[__LIB_17__::func_341()] = 1;
							Local_336[__LIB_17__::func_341() /*3*/] = { Var5 };
							fLocal_354[__LIB_17__::func_341()] = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
						}
						iLocal_415 = MISC::GET_GAME_TIMER();
						Local_108.f_1 = 1;
						if (((iLocal_43 == 0 || iLocal_43 == 1) || iLocal_43 == 3) || iLocal_43 == 2)
						{
							func_951(__LIB_17__::func_341(), 1099956224, 0, 0);
						}
					}
				}
			}
			break;
		case 1:
			if (!iLocal_281)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!PED::IS_PED_INJURED(iLocal_49[Local_108.f_0]))
					{
						if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_49[Local_108.f_0]) || MISC::GET_GAME_TIMER() >= iLocal_415 + 10000)
						{
							STREAMING::ALLOW_PLAYER_SWITCH_DESCENT();
							iLocal_281 = 1;
						}
					}
					else
					{
						iLocal_281 = 1;
					}
				}
			}
			if (!bLocal_219)
			{
				bVar7 = true;
				if (bVar7)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[Local_108.f_0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_49[Local_108.f_0]);
						iVar8 = iLocal_134[func_950(__LIB_0__::func_484(Local_108.f_0))];
						Var9 = { Var9 };
						uVar10 = uVar10;
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false))
						{
							Local_331 = { ENTITY::GET_ENTITY_COORDS(iVar8, true) };
							fLocal_351 = ENTITY::GET_ENTITY_HEADING(iVar8);
						}
						if (Global_96880[2] && __LIB_0__::func_484(Local_108.f_0) == 2)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_282(9), false) > 300f)
							{
								Local_331 = { func_282(9) };
								fLocal_351 = -24.33f;
							}
							else
							{
								Local_331 = { -2066.36f, 2011.39f, 190.49f };
								fLocal_351 = 104.63f;
							}
						}
						else if (!iLocal_194[Local_108.f_0])
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_953(__LIB_0__::func_484(Local_108.f_0), iLocal_381[__LIB_0__::func_484(Local_108.f_0)]), false) > 400f)
							{
							}
							else
							{
								iVar11 = -1;
								fVar12 = 100000000f;
								iVar13 = func_378(__LIB_0__::func_484(Local_108.f_0));
								iVar14 = 0;
								while (iVar14 < iVar13)
								{
									if (iVar14 != iLocal_381[__LIB_0__::func_484(Local_108.f_0)])
									{
										fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(func_953(__LIB_0__::func_484(Local_108.f_0), iLocal_381[__LIB_0__::func_484(Local_108.f_0)]), func_953(__LIB_0__::func_484(Local_108.f_0), iVar14), false);
										if (iVar14 < iLocal_381[__LIB_0__::func_484(Local_108.f_0)])
										{
											fVar15 = (fVar15 + 2000f);
										}
										if (fVar15 < fVar12)
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_953(__LIB_0__::func_484(Local_108.f_0), iVar14), false) > 400f)
											{
												fVar12 = fVar15;
												iVar11 = iVar14;
											}
										}
									}
									iVar14++;
								}
								if (iVar11 >= 0)
								{
									iLocal_381[__LIB_0__::func_484(Local_108.f_0)] = iVar11;
								}
							}
							Local_331 = { func_953(__LIB_0__::func_484(Local_108.f_0), iLocal_381[__LIB_0__::func_484(Local_108.f_0)]) };
							fLocal_351 = func_949(__LIB_0__::func_484(Local_108.f_0), iLocal_381[__LIB_0__::func_484(Local_108.f_0)]);
						}
						else
						{
							Local_331 = { Local_336[Local_108.f_0 /*3*/] };
							fLocal_351 = fLocal_354[Local_108.f_0];
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar8, false))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_49[Local_108.f_0], iVar8, false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_49[Local_108.f_0], iVar8, -1);
							}
							VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(iVar8, true);
							ENTITY::SET_ENTITY_COORDS(iVar8, Local_331, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar8, fLocal_351);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar8, 5f);
							ENTITY::FREEZE_ENTITY_POSITION(iVar8, true);
							ENTITY::SET_ENTITY_VISIBLE(iVar8, false, false);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_49[Local_108.f_0], false, false);
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_337[__LIB_0__::func_484(Local_108.f_0) /*3*/], false) > 400f)
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_49[Local_108.f_0], Local_337[__LIB_0__::func_484(Local_108.f_0) /*3*/], false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_49[Local_108.f_0], fLocal_355[__LIB_0__::func_484(Local_108.f_0)]);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_49[Local_108.f_0], Local_331, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_49[Local_108.f_0], fLocal_351);
						}
					}
				}
				bLocal_219 = true;
			}
			if (!iLocal_220)
			{
				if (Local_93.f_19)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[iLocal_49.f_5]))
					{
						Local_337[__LIB_0__::func_484(iLocal_49.f_5) /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_49[iLocal_49.f_5], true) };
						fLocal_355[__LIB_0__::func_484(iLocal_49.f_5)] = ENTITY::GET_ENTITY_HEADING(iLocal_49[iLocal_49.f_5]);
						if (iLocal_49.f_5 == 2 && Global_96880[2])
						{
							Local_337[2 /*3*/] = { -2601.99f, 1685.07f, 140.71f };
							fLocal_355[2] = 5.86f;
						}
						Var16 = { func_596(__LIB_0__::func_484(iLocal_49.f_5)) };
						iVar17 = iLocal_134[func_950(__LIB_0__::func_484(iLocal_49.f_5))];
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar17, false))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_49[iLocal_49.f_5], iVar17, false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_49[iLocal_49.f_5], iVar17, -1);
							}
							ENTITY::SET_ENTITY_COORDS(iVar17, Var16, true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iVar17, true);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_49[iLocal_49.f_5], Var16, true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_49[iLocal_49.f_5], true);
						}
					}
					func_253();
					iLocal_220 = 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar18 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
			if (!bLocal_218 || !bLocal_280)
			{
				if (Local_93.f_19)
				{
					bVar19 = false;
					if (bLocal_219)
					{
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && iLocal_281)
						{
							if ((STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() == 0 && !bLocal_218) || STREAMING::GET_PLAYER_SWITCH_STATE() >= 9)
							{
								if (bLocal_218)
								{
									bLocal_280 = true;
								}
								bVar19 = true;
							}
						}
					}
					if (bVar19)
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
						if (!ENTITY::IS_ENTITY_DEAD(iVar18, false))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar18, true, false);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar18, false))
						{
							if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iVar18))
							{
								bVar21 = false;
								fVar20 = 18f;
								if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
								{
									if (!bLocal_280 || !ENTITY::IS_ENTITY_AT_COORD(iVar18, Local_331, 10f, 10f, 10f, false, true, 0))
									{
										bVar21 = true;
										fVar20 = 8f;
									}
								}
								func_951(__LIB_17__::func_341(), fVar20, bVar21, 1);
							}
						}
						else if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_337[__LIB_17__::func_341() /*3*/], false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_355[__LIB_17__::func_341()]);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						bLocal_218 = true;
					}
				}
			}
			if (bLocal_218)
			{
				if (Local_93.f_19)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar18, false))
					{
						if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iVar18))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar18, 12f);
						}
					}
				}
			}
			if (((iLocal_43 == 0 || iLocal_43 == 1) || iLocal_43 == 3) || iLocal_43 == 2)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
			}
			bVar22 = false;
			bVar22 = func_908(Local_108.f_0, 0, 0, 1);
			if (bVar22)
			{
				iVar18 = iLocal_134[func_950(__LIB_17__::func_341())];
				if (!iLocal_193[__LIB_17__::func_341()])
				{
					PATHFIND::SET_GPS_DISABLED_ZONE(func_598(__LIB_17__::func_341()), func_597(__LIB_17__::func_341()));
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar18, false))
				{
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar18, 3);
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar18, 2);
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar18, 1);
					VEHICLE::RESET_VEHICLE_STUCK_TIMER(iVar18, 0);
					VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(iVar18, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar18, false);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar18))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar18);
					}
				}
				iLocal_194[__LIB_17__::func_341()] = 0;
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_253();
				iLocal_200 = 0;
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, true);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				Local_108.f_1 = 0;
				if (__LIB_17__::func_341() == 1)
				{
					iLocal_407 = MISC::GET_GAME_TIMER() + 5000;
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
			}
			break;
	}
}

int func_908(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x935D5
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	switch (iLocal_45)
	{
		case 0:
			func_252(0, 1, 1, 0);
			if (!__LIB_0__::func_75() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				HUD::CLEAR_PRINTS();
			}
			iLocal_49.f_39 = 1;
			iLocal_49.f_7 = iParam0;
			Local_93.f_12 = iLocal_49[iParam0];
			Local_93.f_18 = 0;
			Local_93.f_19 = 0;
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
			iLocal_45 = 1;
			break;
		case 1:
			if (!bParam1)
			{
				switch (iParam2)
				{
					case 0:
						bVar1 = __LIB_17__::func_671(&Local_93, 0, 512, 1148829696, 1148829696, 0, 0, 0, 0, 0);
						break;
					case 1:
						fVar2 = 0f;
						bVar1 = __LIB_17__::func_627(&Local_93, 0f, fVar2, iVar0, -1, 0, 800);
						break;
				}
				if (bVar1)
				{
					if (Local_93.f_18)
					{
						if (!Local_93.f_19)
						{
							if (func_600(&iLocal_49, 1, 1, 1))
							{
								func_380(0);
								iLocal_237 = 0;
								iLocal_236 = 0;
								Local_93.f_19 = 1;
							}
						}
					}
				}
				else if (__LIB_17__::func_341() == __LIB_0__::func_484(iParam0))
				{
					iVar3 = 0;
					while (iVar3 < Local_93.f_0)
					{
						if (CAM::DOES_CAM_EXIST(Local_93[iVar3]))
						{
							CAM::DESTROY_CAM(Local_93[iVar3], false);
						}
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 20)
					{
						if (CAM::DOES_CAM_EXIST(uLocal_159[iVar3]))
						{
							CAM::DESTROY_CAM(uLocal_159[iVar3], false);
						}
						iVar3++;
					}
					iLocal_358 = 0;
					if (CAM::DOES_CAM_EXIST(Local_93.f_9))
					{
						CAM::DESTROY_CAM(Local_93.f_9, false);
					}
					func_380(1);
					AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
					iLocal_45 = 2;
					return 1;
				}
			}
			else if (func_600(&iLocal_49, 1, bParam3, 0))
			{
				Local_93.f_19 = 1;
				func_380(1);
				iLocal_45 = 2;
				AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
				return 1;
			}
			break;
	}
	return 0;
}

float func_949(int iParam0, int iParam1)//Position - 0x95E5C
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 85.06f;
					break;
				case 1:
					return 46.3f;
					break;
				case 2:
					return 108.41f;
					break;
				case 3:
					return 64.5f;
					break;
				case 4:
					return -3.34f;
					break;
				case 5:
					return 27.76f;
					break;
				case 6:
					return 131.12f;
					break;
				case 7:
					return 36.14f;
					break;
				case 8:
					return func_716(iParam0);
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -9.81f;
					break;
				case 1:
					return 77.7f;
					break;
				case 2:
					return 83.3f;
					break;
				case 3:
					return 89.4f;
					break;
				case 4:
					return 65.5f;
					break;
				case 5:
					return 89.66f;
					break;
				case 6:
					return 87.87f;
					break;
				case 7:
					return 126.3f;
					break;
				case 8:
					return 47.89f;
					break;
				case 9:
					return 53.76f;
					break;
				case 10:
					return func_716(iParam0);
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 85.6f;
					break;
				case 1:
					return 42.76f;
					break;
				case 2:
					return func_716(iParam0);
					break;
			}
			break;
	}
	return func_716(iParam0);
}

int func_950(int iParam0)//Position - 0x9602B
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
	}
	return 2;
}

void func_951(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x96062
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	iVar0 = iLocal_134[func_950(iParam0)];
	Var1 = { func_952(iParam0) };
	if (iLocal_119[iParam0] != 1 || (Global_96880[2] && iParam0 == 2))
	{
		switch (iParam0)
		{
			case 0:
				iVar2 = func_238();
				break;
			case 1:
				iVar2 = func_236();
				break;
			case 2:
				iVar2 = func_237();
				break;
		}
		if (!PED::IS_PED_INJURED(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar0);
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(iVar2, Var1, 10f, 10f, 10f, false, false, 0) && (iLocal_119[iParam0] != 1 || (Global_96880[2] && iParam0 == 2)))
			{
				if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iVar0) || bParam2)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
					if (bParam2)
					{
						MISC::CLEAR_AREA(Local_331, 5f, true, false, false, false);
						ENTITY::SET_ENTITY_COORDS(iVar0, Local_331, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_351);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						fLocal_351 = fLocal_351;
					}
					if (!bParam3)
					{
					}
					TASK::TASK_VEHICLE_MISSION(iVar2, iVar0, 0, 1, fParam1, 786469, -1f, -1f, true);
					if (bParam2)
					{
						if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false)))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 12f);
						}
					}
				}
			}
		}
	}
}

Vector3 func_952(int iParam0)//Position - 0x961CE
{
	switch (iParam0)
	{
		case 0:
			return func_282(10);
			break;
		case 1:
			return func_282(15);
			break;
		case 2:
			if (!Global_96880[2])
			{
				return func_282(14);
			}
			else
			{
				return func_282(16);
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_953(int iParam0, int iParam1)//Position - 0x9622D
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 572.77f, -2041.91f, 28.29f;
					break;
				case 1:
					return 306.81f, -2130.84f, 13.98f;
					break;
				case 2:
					return -42.09f, -2043.54f, 19.06f;
					break;
				case 3:
					return -378.47f, -2076.81f, 24.75f;
					break;
				case 4:
					return -649.18f, -1472.77f, 9.62f;
					break;
				case 5:
					return -788.8f, -1074.18f, 10.28f;
					break;
				case 6:
					return -1123.68f, -792.15f, 16.45f;
					break;
				case 7:
					return -1296.71f, -880.73f, 10.7f;
					break;
				case 8:
					return func_717(iParam0);
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 943.9f, -1977.8f, 28.73f;
					break;
				case 1:
					return 940.13f, -1754.73f, 29.66f;
					break;
				case 2:
					return 717.67f, -1428.46f, 29.99f;
					break;
				case 3:
					return 300.89f, -1294.41f, 29f;
					break;
				case 4:
					return 156.9f, -1012.33f, 27.89f;
					break;
				case 5:
					return -540.68f, -829.72f, 27.52f;
					break;
				case 6:
					return -888.03f, -828.43f, 16.87f;
					break;
				case 7:
					return -1264.5f, -618.77f, 25.58f;
					break;
				case 8:
					return -1571.62f, -637.31f, 28.35f;
					break;
				case 9:
					return -1829.25f, -503.28f, 27.06f;
					break;
				case 10:
					return func_717(iParam0);
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 0:
					return 612.07f, -2039.58f, 27.89f;
					break;
				case 1:
					return 455.97f, -2013.61f, 22.22f;
					break;
				case 2:
					return func_717(iParam0);
					break;
			}
			break;
	}
	return func_717(iParam0);
}

bool func_954(var uParam0, bool bParam1, int iParam2)//Position - 0x964C4
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
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__::func_81());
	bVar8 = __LIB_13__::func_749(bParam1);
	uParam0->f_6 = __LIB_0__::func_682(__LIB_17__::func_341());
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
		__LIB_17__::func_109(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
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
			else if ((__LIB_15__::func_971(iVar10) && __LIB_17__::func_65(iVar10)) && iVar10 == __LIB_0__::func_682(Global_113386.f_2363.f_539.f_4323))
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
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_16__::func_14(uParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = __LIB_32__::func_86(uParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = __LIB_32__::func_86(uParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_16__::func_30(uParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = __LIB_32__::func_86(uParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
				{
					if (uParam0->f_34[0] == 3)
					{
						iVar11 = 0;
					}
					else if (uParam0->f_34[1] == 3)
					{
						iVar11 = 1;
					}
					else if (uParam0->f_34[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = __LIB_17__::func_341();
					}
					switch (iVar11)
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
								if (iVar11 != 0)
								{
									if (__LIB_32__::func_86(uParam0, 0))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (__LIB_32__::func_86(uParam0, 1))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (__LIB_32__::func_86(uParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (__LIB_32__::func_86(uParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_32__::func_86(uParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_32__::func_86(uParam0, bVar14))
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

int func_970()//Position - 0x97A5D
{
	if ((func_971() < 2 || iLocal_49.f_18[__LIB_0__::func_682(__LIB_17__::func_341())]) || Local_108.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_971()//Position - 0x97A93
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iLocal_49.f_18[iVar1])
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_972(int iParam0)//Position - 0x97AC3
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		if (iVar1 == iParam0)
		{
			__LIB_16__::func_15(&iLocal_49, iVar1, 1);
		}
		else
		{
			__LIB_16__::func_15(&iLocal_49, iVar1, 0);
		}
		iVar0++;
	}
}

char* func_973()//Position - 0x97AFD
{
	switch (__LIB_17__::func_341())
	{
		case 0:
			if (!iLocal_49.f_18[2])
			{
				if (!iLocal_49.f_18[1])
				{
					return "FC2_SWTF";
				}
				else
				{
					return "FC2_SWT";
				}
			}
			else if (!iLocal_49.f_18[1])
			{
				return "FC2_SWF";
			}
			break;
		case 1:
			if (!iLocal_49.f_18[2])
			{
				if (!iLocal_49.f_18[0])
				{
					return "FC2_SWMT";
				}
				else
				{
					return "FC2_SWT";
				}
			}
			else if (!iLocal_49.f_18[0])
			{
				return "FC2_SWM";
			}
			break;
		case 2:
			if (!iLocal_49.f_18[0])
			{
				if (!iLocal_49.f_18[1])
				{
					return "FC2_SWMF";
				}
				else
				{
					return "FC2_SWM";
				}
			}
			else if (!iLocal_49.f_18[1])
			{
				return "FC2_SWF";
			}
			break;
	}
	return "BADSTRING";
}

bool func_974()//Position - 0x97BEB
{
	char* sVar0;
	if (!func_906())
	{
		switch (__LIB_17__::func_341())
		{
			case 0:
				if (!iLocal_49.f_18[2])
				{
					if (!iLocal_49.f_18[1])
					{
						sVar0 = "FINC1_NFT";
					}
					else
					{
						sVar0 = "FINC1_NT";
					}
				}
				else if (!iLocal_49.f_18[1])
				{
					sVar0 = "FINC1_NF";
				}
				break;
			case 1:
				if (!iLocal_49.f_18[2])
				{
					if (!iLocal_49.f_18[0])
					{
						sVar0 = "FINC1_NTM";
					}
					else
					{
						sVar0 = "FINC1_NT";
					}
				}
				else if (!iLocal_49.f_18[0])
				{
					sVar0 = "FINC1_NM";
				}
				break;
			case 2:
				if (!iLocal_49.f_18[0])
				{
					if (!iLocal_49.f_18[1])
					{
						sVar0 = "FINC1_NFM";
					}
					else
					{
						sVar0 = "FINC1_NM";
					}
				}
				else if (!iLocal_49.f_18[1])
				{
					sVar0 = "FINC1_NF";
				}
				break;
		}
	}
	else
	{
		sVar0 = "FINC1_ND";
	}
	return func_283(sVar0, 0, 0, 0);
}

int func_975()//Position - 0x97CE6
{
	char* sVar0;
	switch (__LIB_17__::func_341())
	{
		case 0:
			if (func_906())
			{
				sVar0 = "FINC1_WF";
			}
			else if (!iLocal_49.f_18[2])
			{
				sVar0 = "FINC1_WF";
			}
			else
			{
				sVar0 = "FINC1_WT";
			}
			break;
		case 1:
			if (func_906())
			{
				sVar0 = "FINC1_WM";
			}
			else if (!iLocal_49.f_18[2])
			{
				if (!iLocal_49.f_18[0])
				{
					sVar0 = "FINC1_WT";
				}
				else
				{
					sVar0 = "FINC1_WM";
				}
			}
			else
			{
				sVar0 = "FINC1_WT";
			}
			break;
		case 2:
			if (!iLocal_49.f_18[0])
			{
				sVar0 = "FINC1_WF";
			}
			else
			{
				sVar0 = "FINC1_WM";
			}
			break;
	}
	return func_283(sVar0, 0, 0, 0);
}

void func_978(bool bParam0)//Position - 0x97F70
{
	if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
	{
		if (bParam0)
		{
		}
		else
		{
			iLocal_151 = func_827(Local_113[0 /*14*/], 1);
		}
	}
}

void func_980()//Position - 0x97FA3
{
	func_846(iLocal_43 == 0);
	func_1004();
	func_1000();
	if (!iLocal_182)
	{
		func_999();
		func_998();
		func_995();
		func_985();
		if (iLocal_43 < 4)
		{
			func_981();
		}
	}
}

void func_981()//Position - 0x97FDC
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	struct<3> Var11;
	struct<3> Var12;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	if (MISC::GET_GAME_TIMER() >= iLocal_373)
	{
		if (Local_108.f_1 == 0)
		{
			Var0 = { Var0 };
			fVar1 = fVar1;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				iVar3 = iVar2;
				iVar4 = __LIB_0__::func_682(iVar3);
				iVar6 = func_950(iVar3);
				switch (iVar3)
				{
					case 1:
						iVar5 = func_236();
						break;
					case 0:
						iVar5 = func_238();
						break;
					case 2:
						iVar5 = func_237();
						break;
				}
				if (!PED::IS_PED_INJURED(iVar5))
				{
					iVar7 = func_984(iVar3);
					bVar8 = true;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, false))
					{
						iVar9 = ENTITY::GET_ENTITY_MODEL(iVar7);
						if ((!VEHICLE::IS_THIS_MODEL_A_HELI(iVar9) && !VEHICLE::IS_THIS_MODEL_A_BOAT(iVar9)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar9))
						{
							if (iVar7 != iLocal_134[iVar6])
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[iVar6]))
								{
									if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_134[iVar6]))
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_134[iVar6]));
									}
								}
							}
							iLocal_134[iVar6] = iVar7;
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_134[iVar6]))
							{
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_134[iVar6], true);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_134[iVar6], true, true);
							}
						}
						else
						{
							bVar8 = false;
						}
					}
					else
					{
						bVar8 = false;
					}
					if (iVar3 == __LIB_17__::func_341())
					{
						bVar8 = false;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_134[iVar6], false))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_134[iVar6], bVar8);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_134[iVar6], !bVar8);
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_134[iVar6])))
						{
							VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_134[iVar6], !bVar8);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[iVar6]))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_134[iVar6]))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_134[iVar6]));
						}
					}
				}
				if (iVar3 != __LIB_17__::func_341() && !PED::IS_PED_INJURED(iLocal_49[iVar4]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[iVar6], false))
					{
						switch (iLocal_119[iVar3])
						{
							case 0:
								if (MISC::GET_GAME_TIMER() >= uLocal_380[iVar3])
								{
									if (!iLocal_194[iVar3])
									{
										iVar10 = func_378(iVar3);
										iLocal_381[iVar3]++;
										if (iLocal_381[iVar3] >= iVar10)
										{
											iLocal_381[iVar3] = (iVar10 - 1);
										}
										uLocal_380[iVar3] = MISC::GET_GAME_TIMER() + 15000;
									}
									else
									{
										Var11 = { func_953(iVar3, iLocal_381[iVar3]) };
										Var12 = { Var11 - Local_336[iVar3 /*3*/] };
										fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_336[iVar3 /*3*/], Var11, true);
										fVar14 = (fLocal_353[iVar3] / fVar13);
										Var15 = { Var12 * Vector(fVar14, fVar14, fVar14) };
										Var16 = { Local_336[iVar3 /*3*/] + Var15 };
										if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var16, &Var0, &fVar1, 12, 3f, 0f))
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var11, true) < 1000f)
											{
												iLocal_194[iVar3] = 0;
											}
											else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_336[iVar3 /*3*/], true) >= 15f)
											{
												fLocal_353[iVar3] = 50f;
												fVar17 = __LIB_0__::func_932(Var0, Var11);
												if (!func_982(fVar1, fVar17, 1119092736))
												{
													fVar1 = (fVar1 + 180f);
												}
												Local_336[iVar3 /*3*/] = { Var0 };
												fLocal_354[iVar3] = fVar1;
											}
											else
											{
												fLocal_353[iVar3] = (fLocal_353[iVar3] + 50f);
											}
										}
										else
										{
											fLocal_353[iVar3] = (fLocal_353[iVar3] + 50f);
										}
										uLocal_380[iVar3] = MISC::GET_GAME_TIMER() + 3000;
									}
								}
								break;
							}
						}
				}
				iVar2++;
			}
		}
		iLocal_373 = MISC::GET_GAME_TIMER() + 400;
	}
}

int func_982(float fParam0, float fParam1, float fParam2)//Position - 0x98376
{
	float fVar0;
	fVar0 = (fParam0 - fParam1);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 * -1f);
	}
	if (fVar0 <= fParam2 || fVar0 >= (360f - fParam2))
	{
		return 1;
	}
	return 0;
}

int func_984(int iParam0)//Position - 0x983CA
{
	int iVar0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_238();
			break;
		case 1:
			iVar0 = func_236();
			break;
		case 2:
			iVar0 = func_237();
			break;
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, false) == iVar0)
			{
				return iVar1;
			}
		}
	}
	return 0;
}

void func_985()//Position - 0x98435
{
	int iVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	struct<3> Var16;
	if (iLocal_110[1] == 2)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_114[iVar0 /*14*/]))
			{
				if (PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
				{
					bVar1 = ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_114[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), true);
					if (!Local_114[iVar0 /*14*/].f_10)
					{
						if (bVar1)
						{
							__LIB_0__::func_497(264, 1, 0);
						}
						Local_114[iVar0 /*14*/].f_10 = 1;
					}
				}
			}
			iVar0++;
		}
		if (!bLocal_214)
		{
			if (iLocal_116 < 3)
			{
				if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(-3016.44f, 89.4f, 11.98f, 15f) > 0 || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3021.878f, 79.211f, 0f, -2995.467f, 113.063f, 17.5f, 100f, false, true, 0)))
				{
					bLocal_214 = true;
				}
				else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3024.4338f, 82.5896f, 10.60847f, -3010.1384f, 89.91269f, 13.99329f, false, true, 0) || ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3024.4338f, 82.5896f, 10.60847f, -3017.8774f, 92.78082f, 13.99329f, false, true, 0))
				{
					bLocal_214 = true;
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_135)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar0], false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_135[iVar0], 20f, 20f, 20f, false, false, 0))
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							bLocal_214 = true;
						}
					}
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_135[iVar0], true), 10f, true) || FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_135[iVar0], true) - Vector(20f, 20f, 20f), ENTITY::GET_ENTITY_COORDS(iLocal_135[iVar0], true) + Vector(20f, 20f, 20f)))
					{
						bLocal_214 = true;
					}
					fVar2 = ENTITY::GET_ENTITY_SPEED(iLocal_135[iVar0]);
					if (fVar2 <= 1f)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_135[iVar0], 0f, 4f, 0f), 4f, 4f, 4f, false, true, 0))
						{
							fLocal_356 = (fLocal_356 + (1f * SYSTEM::TIMESTEP()));
							if (fLocal_356 >= 1.5f)
							{
								bLocal_214 = true;
							}
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar3 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
						{
							if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar3, iLocal_135[iVar0]) && ENTITY::GET_ENTITY_SPEED(iVar3) > 15f) && ENTITY::GET_ENTITY_SPEED(iVar3) > (fVar2 - 3f))
							{
								bLocal_214 = true;
							}
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_135[iVar0], PLAYER::PLAYER_PED_ID(), true))
					{
						bLocal_214 = true;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_135[iVar0]))
				{
					bLocal_214 = true;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < Local_114.f_0)
			{
				if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
				{
					if (iVar0 == 0)
					{
						PED::SET_PED_RESET_FLAG(Local_114[iVar0 /*14*/], 187, true);
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_114[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), true))
					{
						bLocal_214 = true;
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_114[iVar0 /*14*/]))
				{
					bLocal_214 = true;
				}
				iVar0++;
			}
		}
		if (iLocal_43 == 0 && !Global_96880[1])
		{
			if (bLocal_214 || !bLocal_248)
			{
				if (__LIB_17__::func_341() == 1)
				{
					iLocal_199 = 1;
					func_288(3, 0, 0, 1, 0, 0, 0, 1);
				}
				else if (PED::IS_PED_INJURED(Local_114[0 /*14*/]))
				{
					func_829(23);
				}
				else
				{
					func_829(20);
				}
			}
		}
		switch (iLocal_116)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					if (iLocal_43 == 3)
					{
						if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]))
						{
							func_891(2, 0, 0);
						}
					}
				}
				break;
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.98f)
					{
						func_891(2, 0, 0);
					}
				}
				break;
			case 2:
				if (bLocal_248)
				{
					iVar0 = 0;
					while (iVar0 < Local_114.f_0)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_114[iVar0 /*14*/]))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[iVar0 /*14*/], 85f, 85f, 85f, false, false, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_114[iVar0 /*14*/])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_114[iVar0 /*14*/]))
							{
								if (PED::IS_TRACKED_PED_VISIBLE(Local_114[iVar0 /*14*/]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
									{
										PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_369, 1f);
									}
									bLocal_248 = false;
								}
							}
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < 3)
					{
						iVar5 = iVar0;
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar5], false))
						{
							switch (iVar5)
							{
								case 0:
									sVar4 = "IG8_WASH";
									break;
								case 1:
									sVar4 = "IG8_CAVFRONT";
									break;
								case 2:
									sVar4 = "IG8_CAVREAR";
									break;
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_135[iVar5], func_37(8), sVar4, 3))
							{
								if (bLocal_248)
								{
									fVar6 = 0f;
								}
								else
								{
									fVar6 = 1f;
								}
								ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_135[iVar5], func_37(8), sVar4, fVar6);
							}
						}
						iVar0++;
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) >= 0.94f || func_993())
					{
						func_891(3, 1, 0);
					}
				}
				break;
			case 3:
				iVar0 = 0;
				while (iVar0 < iLocal_135)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar0], false))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_135[iVar0]))
						{
							if (bLocal_214)
							{
								TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_135[iVar0], 45f);
							}
							else
							{
								fVar7 = 18f;
								if (iVar0 == 0)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[1], false))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_135[iVar0], iLocal_135[1], 10f, 10f, 10f, false, false, 0))
										{
											fVar7 = 14f;
										}
									}
								}
								else if (iVar0 == 2)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_135[iVar0], iLocal_135[0], 10f, 10f, 10f, false, false, 0))
										{
											fVar7 = 16f;
										}
									}
								}
								TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_135[iVar0], fVar7);
							}
						}
					}
					iVar0++;
				}
				if (bLocal_214)
				{
					func_992();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[1], false))
				{
					Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_135[1], true) };
					if (Var8.f_1 > 160f)
					{
						func_891(4, 1, 0);
					}
				}
				else
				{
					func_891(5, 1, 0);
				}
				break;
			case 4:
				if (bLocal_214)
				{
					func_891(5, 1, 0);
				}
				else if (!bLocal_270)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[1], false))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_135[1], Local_338, 24f, 24f, 24f, false, false, 0))
						{
							func_891(4, 1, 0);
						}
					}
				}
				break;
			case 5:
				if (!iLocal_272)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_393 + 7000)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[1], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false)) && !PED::IS_PED_INJURED(Local_114[4 /*14*/]))
						{
							TASK::TASK_VEHICLE_MISSION(Local_114[4 /*14*/], iLocal_135[1], iLocal_135[0], 7, 35f, 786469, -1f, -1f, true);
						}
						iLocal_272 = 1;
					}
				}
				func_992();
				break;
			case 6:
				break;
		}
		if (iLocal_116 != 6)
		{
			if (bLocal_260)
			{
				func_891(6, 1, 0);
			}
		}
		if (bLocal_214)
		{
			bLocal_258 = false;
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (PED::IS_PED_INJURED(Local_114[0 /*14*/]))
				{
					bVar9 = false;
					if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
					{
						iVar10 = 0;
						while (iVar10 < 3)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar10], false))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_114[iVar0 /*14*/], iLocal_135[iVar10], false))
								{
									bVar9 = true;
								}
							}
							iVar10++;
						}
					}
					if (!bVar9)
					{
						if (!iLocal_191[1])
						{
							__LIB_0__::func_631(Local_114[iVar0 /*14*/], &(Local_114[iVar0 /*14*/].f_1), -1, 0, 0, 0, 320f, 0, -1, -1, 1, 0);
						}
					}
					else
					{
						__LIB_0__::func_621(&(Local_114[iVar0 /*14*/].f_1));
					}
				}
				iVar11 = iVar0;
				if (!PED::IS_PED_INJURED(Local_114[iVar11 /*14*/]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[iVar11 /*14*/], 250f, 250f, 250f, false, true, 0))
					{
						bLocal_258 = true;
					}
					if (!Local_114[iVar11 /*14*/].f_9)
					{
						bVar12 = false;
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) <= func_991(iVar11))
							{
								bVar12 = true;
							}
						}
						else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_114[iVar11 /*14*/], false))
						{
							bVar12 = true;
						}
						else
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_USING(Local_114[iVar11 /*14*/]);
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
							{
								bVar12 = true;
							}
							else
							{
								fVar14 = ENTITY::GET_ENTITY_SPEED(iVar13);
								if (iLocal_116 == 6)
								{
									bVar12 = true;
								}
								iVar15 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar13, -1, false);
								if (PED::IS_PED_INJURED(iVar15) && fVar14 < 2f)
								{
									bVar12 = true;
								}
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13, false))
								{
									bVar12 = true;
								}
							}
						}
						if (bVar12)
						{
							Local_114[iVar11 /*14*/].f_9 = 1;
						}
					}
					else if (!PED::IS_PED_IN_COMBAT(Local_114[iVar0 /*14*/], 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_114[iVar0 /*14*/], 1, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_114[iVar0 /*14*/], 41, true);
						PED::SET_PED_COMBAT_MOVEMENT(Local_114[iVar0 /*14*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_114[iVar0 /*14*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_114[iVar0 /*14*/], 7, true);
						TASK::TASK_COMBAT_PED(Local_114[iVar11 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				iVar0++;
			}
		}
		if (iLocal_116 == 6)
		{
			if (!iLocal_191[1])
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[iVar0], false))
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_135[iVar0], 320f, 320f, 320f, false, true, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_135[iVar0], false)) && (((!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_135[iVar0], -1, false)) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_135[iVar0], 0, false))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_135[iVar0], 1, false))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_135[iVar0], 2, false))))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_154[iVar0]))
							{
								Local_334[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_135[iVar0], true) };
								uLocal_154[iVar0] = func_249(Local_334[iVar0 /*3*/], 0);
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_154[iVar0], false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_154[iVar0], "BLIP_VEH" /* GXT: Vehicle */);
							}
							else
							{
								__LIB_28__::func_225(&(Local_334[iVar0 /*3*/]), ENTITY::GET_ENTITY_COORDS(iLocal_135[iVar0], true), 50f);
								HUD::SET_BLIP_COORDS(uLocal_154[iVar0], Local_334[iVar0 /*3*/]);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_154[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_154[iVar0]));
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_135[iVar0], -1, false)))
							{
								switch (iVar0)
								{
									case 0:
										Var16 = { -3f, 3f, 0f };
										break;
									case 1:
										Var16 = { 0f, -2.5f, 0f };
										break;
									case 2:
										Var16 = { 3f, 2f, 0f };
										break;
								}
								func_986(iLocal_135[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &(Local_329[iVar0 /*3*/]), &(uLocal_347[iVar0]), &(Local_330[iVar0 /*3*/]), &(uLocal_348[iVar0]), &(uLocal_391[iVar0]), Var16, 3000, 45f, fLocal_350);
							}
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_154[iVar0]))
					{
						HUD::REMOVE_BLIP(&(uLocal_154[iVar0]));
					}
					iVar0++;
				}
			}
		}
	}
}

void func_986(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam8, float fParam9, float fParam10)//Position - 0x98FF4
{
	float fVar0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam4, true) > 20f)
			{
				if (uParam4->f_2 == 0f)
				{
					__LIB_17__::func_170(iParam1, uParam4, uParam5);
				}
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam2, *uParam3, Param7) };
				__LIB_17__::func_170(iParam1, uParam4, uParam5);
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam8)
			{
				if (((__LIB_0__::func_76(iParam0, iParam1, 1) > fParam9 && __LIB_0__::func_76(iParam0, iParam1, 1) < fParam10) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, true), *uParam2, true) > 20f) && !ENTITY::IS_ENTITY_IN_AIR(iParam1))
				{
					if (!__LIB_0__::func_86(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam2, &fVar0, false, false);
							if (fVar0 > 2f)
							{
								if (((*uParam2 < -3068.5059f || *uParam2 > -2848.3557f) || uParam2->f_1 < -18.83005f) || uParam2->f_1 > 179.83005f)
								{
									MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, false, false, false, false, false, false, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
									fVar1 = ENTITY::GET_ENTITY_SPEED(iParam1);
									if (fVar1 < 10f)
									{
										fVar1 = 10f;
									}
									else if (fVar1 > 40f)
									{
										fVar1 = 40f;
									}
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, fVar1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
									*uParam6 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_991(int iParam0)//Position - 0x992CE
{
	switch (iParam0)
	{
		case 0:
			return 0f;
			break;
		case 1:
			return 0f;
			break;
		case 2:
			return 0f;
			break;
		case 3:
			return 0f;
			break;
		case 4:
			return 0f;
			break;
		case 5:
			return 0.771f;
			break;
		case 6:
			return 0.759f;
			break;
		case 7:
			return 0f;
			break;
		case 8:
			return 0.771f;
			break;
		case 9:
			return 0.853f;
			break;
	}
	return 0f;
}

void func_992()//Position - 0x99370
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = 0;
	while (iVar0 < Local_114.f_0)
	{
		iVar1 = iVar0;
		if (!Local_114[iVar1 /*14*/].f_9)
		{
			if (!PED::IS_PED_INJURED(Local_114[iVar0 /*14*/]))
			{
				if (iVar1 != 0 && iVar1 != 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_114[iVar0 /*14*/], false))
					{
						bVar2 = false;
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_114[iVar0 /*14*/], joaat("SCRIPT_TASK_DRIVE_BY")) == 7 && MISC::GET_GAME_TIMER() >= iLocal_378 + 2000)
						{
							if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Local_114[iVar0 /*14*/]))
							{
								if (MISC::GET_GAME_TIMER() >= Local_114[iVar0 /*14*/].f_12 + 10000)
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						if (bVar2)
						{
							TASK::TASK_DRIVE_BY(Local_114[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 120f, 10, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
							Local_114[iVar0 /*14*/].f_12 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_114[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_114[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
			}
		}
		iVar0++;
	}
}

int func_993()//Position - 0x99479
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369) && MISC::GET_GAME_TIMER() >= iLocal_378 + 1000)
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369);
		iVar1 = 0;
		while (iVar1 < 10)
		{
			iVar2 = iVar1;
			if (!PED::IS_PED_INJURED(Local_114[iVar2 /*14*/]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_114[iVar2 /*14*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
				{
					if (fVar0 < func_994(iVar2))
					{
						return 0;
					}
				}
			}
			iVar1++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

float func_994(int iParam0)//Position - 0x994F6
{
	switch (iParam0)
	{
		case 0:
			return 0.694f;
			break;
		case 1:
			return 0f;
			break;
		case 2:
			return 0f;
			break;
		case 3:
			return 0f;
			break;
		case 4:
			return 0f;
			break;
		case 5:
			return 0.822f;
			break;
		case 6:
			return 0.827f;
			break;
		case 7:
			return 0f;
			break;
		case 8:
			return 0.84f;
			break;
		case 9:
			return 0.91f;
			break;
	}
	return 0f;
}

void func_995()//Position - 0x9959C
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	float fVar24;
	int iVar25;
	struct<3> Var26;
	if (iLocal_110[0] == 2)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = iVar0;
			if (!PED::IS_PED_INJURED(Local_113[iVar1 /*14*/]))
			{
				if (iVar1 == 0)
				{
					PED::SET_PED_RESET_FLAG(Local_113[iVar0 /*14*/], 187, true);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_117 = 1;
				}
				switch (Local_113[iVar1 /*14*/].f_9)
				{
					case 0:
						if (iLocal_117 == 1)
						{
							func_997(iVar1, 3);
						}
						else if (iVar1 == 0)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 0.98f)
								{
									func_899(1, 0);
								}
							}
						}
						break;
					case 1:
						if (iLocal_247)
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(Local_113[iVar0 /*14*/]))
							{
								if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*14*/], 85f, 85f, 85f, false, false, 0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_113[iVar0 /*14*/])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_113[iVar0 /*14*/]))
								{
									if (PED::IS_TRACKED_PED_VISIBLE(Local_113[iVar0 /*14*/]))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
										{
											PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_371, 1f);
										}
										iLocal_247 = 0;
									}
								}
							}
						}
						if (iLocal_117 == 1)
						{
							func_997(iVar1, 3);
						}
						else if (iVar1 == 0)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) >= 0.98f)
								{
									func_899(2, 0);
								}
							}
						}
						break;
					case 2:
						if (iLocal_117 == 1)
						{
							switch (iVar1)
							{
								case 0:
									iVar2 = 0;
									break;
								case 1:
									iVar2 = 100;
									break;
								case 2:
									iVar2 = 0;
									break;
								case 3:
									iVar2 = 300;
									break;
							}
							if (MISC::GET_GAME_TIMER() >= (iLocal_396 + iVar2))
							{
								func_997(iVar1, 3);
							}
						}
						else if (iLocal_117 == 2)
						{
							func_997(iVar1, 4);
						}
						break;
					case 3:
						bVar3 = false;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar1 /*14*/], func_901(iVar1, 3), func_900(iVar1, 3), 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_113[iVar1 /*14*/], func_901(iVar1, 3), func_900(iVar1, 3)) >= 0.98f)
							{
								bVar3 = true;
							}
						}
						else
						{
							bVar3 = true;
						}
						if (bVar3)
						{
							if (iVar1 == 0)
							{
								func_997(iVar1, 5);
							}
							else
							{
								func_997(iVar1, 6);
							}
						}
						else if (iVar1 != 0)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_113[iVar1 /*14*/], 2f);
						}
						break;
					case 6:
						bVar4 = false;
						switch (iVar1)
						{
							case 1:
								fVar5 = 0.89f;
								break;
							case 2:
								fVar5 = 0.87f;
								break;
							case 3:
								fVar5 = 0.93f;
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar1 /*14*/], func_901(iVar1, 6), func_900(iVar1, 6), 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_113[iVar1 /*14*/], func_901(iVar1, 6), func_900(iVar1, 6)) >= fVar5)
							{
								bVar4 = true;
							}
						}
						else
						{
							bVar4 = true;
						}
						if (bVar4)
						{
							func_997(iVar1, 7);
						}
						else
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_113[iVar1 /*14*/], 2f);
						}
						break;
					case 4:
						bVar6 = false;
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar1 /*14*/], func_901(iVar1, 4), func_900(iVar1, 4), 3))
						{
							if (iVar1 == 0)
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_113[iVar1 /*14*/], func_901(iVar1, 4), func_900(iVar1, 4)) >= 0.98f)
								{
									bVar6 = true;
								}
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_113[iVar1 /*14*/], func_901(iVar1, 4), func_900(iVar1, 4)) >= 0.85f)
							{
								bVar6 = true;
							}
						}
						else
						{
							bVar6 = true;
						}
						if (bVar6)
						{
							if (iVar1 == 0)
							{
								func_997(iVar1, 5);
							}
							else
							{
								func_997(iVar1, 7);
							}
						}
						else if (iVar1 != 0)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_113[iVar1 /*14*/], 2f);
						}
						else if (iLocal_117 == 1)
						{
							func_997(iVar1, 5);
						}
						break;
					case 7:
						if (MISC::GET_GAME_TIMER() <= iLocal_372[iVar1] + 2000)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_113[iVar1 /*14*/], 2f);
							PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_113[iVar1 /*14*/], 2f);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar1 /*14*/], -1689270312) == 7)
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_113[iVar1 /*14*/], ENTITY::GET_ENTITY_COORDS(Local_113[iVar1 /*14*/], true), 8f, false, false);
							func_997(iVar1, 5);
						}
						break;
					case 5:
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar1 /*14*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
						{
							func_997(iVar1, 5);
						}
						break;
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*14*/]))
			{
				if (!Local_113[iVar0 /*14*/].f_10)
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), true))
					{
						__LIB_0__::func_497(264, 1, 0);
					}
					Local_113[iVar0 /*14*/].f_10 = 1;
				}
				iLocal_117 = 1;
				if (iLocal_396 < 0)
				{
					iLocal_396 = MISC::GET_GAME_TIMER();
				}
			}
			iVar0++;
		}
		if (Local_113[0 /*14*/].f_9 >= 2)
		{
			fVar7 = 15f;
		}
		else
		{
			fVar7 = 14f;
		}
		bVar8 = false;
		if (((MISC::IS_BULLET_IN_AREA(-202.78033f, -1509.742f, 30.61494f, 8f, true) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(-202.78033f, -1509.742f, 30.61494f, 14f) > 0) || ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_43 == 2)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -203.88301f, -1509.3727f, 30.61493f, 50f, 50f, 50f, false, false, 0))) || bLocal_259)
		{
			bVar8 = true;
			iLocal_117 = 1;
			if (iLocal_396 < 0)
			{
				iLocal_396 = MISC::GET_GAME_TIMER();
			}
		}
		else if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -202.78033f, -1509.742f, 30.61494f, true) < fVar7 && !bLocal_225) && Local_113[0 /*14*/].f_9 >= 2) || (bLocal_225 && MISC::GET_GAME_TIMER() >= iLocal_374 + 1000))
		{
			if (Local_113[0 /*14*/].f_9 >= 2)
			{
				if (iLocal_117 != 1)
				{
					bVar8 = true;
					iLocal_117 = 2;
					if (iLocal_396 < 0)
					{
						iLocal_396 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				bVar8 = true;
				iLocal_117 = 1;
				if (iLocal_396 < 0)
				{
					iLocal_396 = MISC::GET_GAME_TIMER();
				}
			}
		}
		if (bVar8)
		{
			if (!iLocal_246)
			{
				iLocal_246 = 1;
				__LIB_0__::func_325();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[0 /*14*/]))
		{
			if (!iLocal_211)
			{
				bVar9 = false;
				bVar10 = false;
				if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_113[0 /*14*/], MISC::GET_HASH_KEY("HIDE_PHONE")))
					{
						bVar9 = true;
					}
					else if (PED::IS_PED_RAGDOLL(Local_113[0 /*14*/]) || PED::IS_PED_IN_COMBAT(Local_113[0 /*14*/], 0))
					{
						bVar10 = true;
					}
				}
				else
				{
					bVar10 = true;
				}
				if (bVar9)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
					{
						OBJECT::DELETE_OBJECT(&iLocal_140);
					}
					iLocal_211 = 1;
				}
				else if (bVar10)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
					{
						ENTITY::DETACH_ENTITY(iLocal_140, true, true);
					}
					iLocal_211 = 1;
				}
			}
			if (!iLocal_212)
			{
				bVar11 = false;
				bVar12 = false;
				if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_113[0 /*14*/], MISC::GET_HASH_KEY("THROW_BBALL")))
					{
						bVar11 = true;
						bVar12 = true;
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_113[0 /*14*/], MISC::GET_HASH_KEY("DROP_BALL")))
					{
						bVar11 = true;
					}
					else if ((PED::IS_PED_RAGDOLL(Local_113[0 /*14*/]) || PED::IS_PED_IN_COMBAT(Local_113[0 /*14*/], 0)) || Local_113[0 /*14*/].f_9 == 5)
					{
						bVar11 = true;
					}
				}
				else
				{
					bVar11 = true;
				}
				if (bVar11)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
					{
						ENTITY::DETACH_ENTITY(iLocal_141, false, true);
						if (bVar12)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_141, 1, 0f, 8f, 4f, false, true, true, false);
						}
					}
					iLocal_212 = 1;
				}
			}
			if (!iLocal_213)
			{
				if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_113[0 /*14*/], MISC::GET_HASH_KEY("DRAW_GUN")))
					{
						if (!PED::IS_PED_INJURED(Local_113[0 /*14*/]))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Local_113[0 /*14*/], func_370(1), true);
							iLocal_213 = 1;
						}
					}
				}
			}
		}
		bLocal_257 = false;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			iVar13 = iVar0;
			if (iVar13 != 0)
			{
				if (PED::IS_PED_INJURED(Local_113[0 /*14*/]))
				{
					bVar14 = false;
					if (!PED::IS_PED_INJURED(Local_113[iVar0 /*14*/]))
					{
						iVar15 = 0;
						while (iVar15 < 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_136[iVar15], false))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_113[iVar0 /*14*/], iLocal_136[iVar15], false))
								{
									bVar14 = true;
								}
							}
							iVar15++;
						}
					}
					if (!bVar14)
					{
						if (!iLocal_191[0])
						{
							__LIB_0__::func_631(Local_113[iVar0 /*14*/], &(Local_113[iVar0 /*14*/].f_1), -1, 0, 0, 0, 320f, 0, -1, -1, 1, 0);
						}
					}
					else
					{
						__LIB_0__::func_621(&(Local_113[iVar0 /*14*/].f_1));
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_113[iVar0 /*14*/]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*14*/], 250f, 250f, 250f, false, true, 0))
				{
					bLocal_257 = true;
				}
				if (iVar13 >= 4)
				{
					if (!Local_113[iVar0 /*14*/].f_11)
					{
						bVar16 = false;
						if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_113[iVar0 /*14*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_113[iVar0 /*14*/]))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*14*/], 20f, 20f, 4f, false, true, 0))
							{
								if (PED::CAN_PED_SEE_HATED_PED(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_282 = 1;
									bVar16 = true;
								}
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_113[iVar0 /*14*/], false))
						{
							iVar17 = PED::GET_VEHICLE_PED_IS_IN(Local_113[iVar0 /*14*/], false);
							if (!ENTITY::IS_ENTITY_DEAD(iVar17, false))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar17, PLAYER::PLAYER_PED_ID(), true))
								{
									iLocal_282 = 1;
									bVar16 = true;
								}
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), true))
						{
							iLocal_282 = 1;
							bVar16 = true;
						}
						if ((bLocal_259 || Local_113[0 /*14*/].f_9 == 5) || Global_96880[0])
						{
							if (iVar13 < 8)
							{
								bVar16 = true;
							}
						}
						if (bVar16)
						{
							bLocal_259 = true;
							Local_113[iVar0 /*14*/].f_11 = 1;
						}
						if (iVar13 >= 8)
						{
							bVar18 = true;
							switch (iVar13)
							{
								case 8:
									iVar19 = 4000;
									break;
								case 9:
									iVar19 = 3000;
									break;
								default:
									iVar19 = 0;
									break;
							}
							if ((MISC::GET_GAME_TIMER() <= (iLocal_389 + iVar19) || !Global_96880[0]) && !(Local_113[0 /*14*/].f_9 == 5 && MISC::GET_GAME_TIMER() >= iLocal_388 + 15000))
							{
								bVar18 = false;
							}
							if (bVar18)
							{
								Local_113[iVar0 /*14*/].f_11 = 1;
							}
							else if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							}
						}
					}
					else
					{
						if ((!Global_96880[0] && !(Local_113[0 /*14*/].f_9 == 5 && MISC::GET_GAME_TIMER() >= iLocal_388 + 15000)) && !iLocal_282)
						{
							PED::SET_PED_RESET_FLAG(Local_113[iVar0 /*14*/], 128, true);
						}
						iVar20 = func_996(iVar13);
						if (iVar20 >= 0)
						{
							iLocal_264[iVar20] = 1;
						}
						if (Local_113[iVar0 /*14*/].f_13 < 0)
						{
							Local_113[iVar0 /*14*/].f_13 = MISC::GET_GAME_TIMER();
						}
						if (!bLocal_242)
						{
							if (PED::IS_PED_INJURED(Local_113[0 /*14*/]))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_389 + 1000)
								{
									if (!iLocal_243)
									{
										iVar22 = -1;
										fVar23 = 100000000f;
										iVar21 = 0;
										while (iVar21 < 10)
										{
											if (!PED::IS_PED_INJURED(Local_113[iVar21 /*14*/]))
											{
												if (iVar21 >= 4)
												{
													fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_113[iVar21 /*14*/], true), true);
													if (fVar24 < fVar23)
													{
														iVar22 = iVar21;
														fVar23 = fVar24;
													}
												}
											}
											iVar21++;
										}
										if (iVar22 >= 0)
										{
											iLocal_412 = iVar22;
											__LIB_0__::func_222(&uLocal_418, 5, Local_113[iLocal_412 /*14*/], "GANGBANGER1", 0, 1);
											iLocal_243 = 1;
										}
										else
										{
											iLocal_243 = 1;
											bLocal_242 = true;
										}
									}
									else if (iLocal_412 >= 0)
									{
										if (!PED::IS_PED_INJURED(Local_113[iLocal_412 /*14*/]))
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_113[iLocal_412 /*14*/], 30f, 30f, 6f, false, true, 0))
											{
												bLocal_242 = func_283("FINC1_REVSTR", 0, 0, 0);
											}
											else
											{
												bLocal_242 = true;
											}
										}
										else
										{
											bLocal_242 = true;
										}
									}
									else
									{
										bLocal_242 = true;
									}
								}
							}
						}
						if (!Local_113[iVar0 /*14*/].f_12)
						{
							switch (iVar13)
							{
								case 8:
									iVar25 = 5000;
									break;
								case 9:
									iVar25 = 3000;
									break;
								default:
									iVar25 = 0;
									break;
							}
							if ((MISC::GET_GAME_TIMER() >= (Local_113[iVar0 /*14*/].f_13 + iVar25) || ENTITY::IS_ENTITY_AT_ENTITY(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 15f, 15f, 5f, false, true, 0)) || !Global_96880[0])
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*14*/], 3, true);
								Local_113[iVar0 /*14*/].f_12 = 1;
							}
						}
						if (!PED::IS_PED_IN_COMBAT(Local_113[iVar0 /*14*/], 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*14*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 7 || PED::IS_PED_USING_ANY_SCENARIO(Local_113[iVar0 /*14*/]))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_113[iVar0 /*14*/]);
							}
							TASK::TASK_COMBAT_PED(Local_113[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
			}
			else
			{
				if (iVar13 >= 4)
				{
					iLocal_282 = 1;
				}
				bLocal_259 = true;
			}
			iVar0++;
		}
		if (Global_96880[0])
		{
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_136[iVar0], false))
				{
					if (!iLocal_191[0])
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_136[iVar0], 320f, 320f, 320f, false, true, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_136[iVar0], false)) && (((!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_136[iVar0], -1, false)) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_136[iVar0], 0, false))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_136[iVar0], 1, false))) || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_136[iVar0], 2, false))))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_153[iVar0]))
							{
								Local_333[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(iLocal_136[iVar0], true) };
								uLocal_153[iVar0] = func_249(Local_333[iVar0 /*3*/], 0);
								HUD::SET_BLIP_AS_FRIENDLY(uLocal_153[iVar0], false);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_153[iVar0], "BLIP_VEH" /* GXT: Vehicle */);
							}
							else
							{
								__LIB_28__::func_225(&(Local_333[iVar0 /*3*/]), ENTITY::GET_ENTITY_COORDS(iLocal_136[iVar0], true), 50f);
								HUD::SET_BLIP_COORDS(uLocal_153[iVar0], Local_333[iVar0 /*3*/]);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_153[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_153[iVar0]));
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (iLocal_264[iVar0])
							{
								if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_136[iVar0], -1, false)))
								{
									if (!iLocal_294)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_136[iVar0], PLAYER::PLAYER_PED_ID(), 50f, 50f, 50f, false, true, 0))
										{
											func_33(14);
											iLocal_294 = 1;
										}
									}
									switch (iVar0)
									{
										case 0:
											Var26 = { -3f, -4f, 0f };
											break;
										case 1:
											Var26 = { 3f, 0f, 0f };
											break;
										case 2:
											Var26 = { 0f, 4f, 0f };
											break;
									}
									func_986(iLocal_136[iVar0], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &(Local_327[iVar0 /*3*/]), &(uLocal_345[iVar0]), &(Local_328[iVar0 /*3*/]), &(uLocal_346[iVar0]), &(uLocal_390[iVar0]), Var26, 3000, 45f, fLocal_349);
								}
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_153[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_153[iVar0]));
				}
				iVar0++;
			}
		}
		if (!Global_96880[0])
		{
			if (iLocal_43 == 0)
			{
				if (iLocal_117 != 0)
				{
					if (__LIB_17__::func_341() == 0)
					{
						iLocal_198 = 1;
						func_288(2, 0, 0, 1, 0, 0, 0, 1);
					}
					else if (PED::IS_PED_INJURED(Local_113[0 /*14*/]))
					{
						func_829(22);
					}
					else
					{
						func_829(19);
					}
				}
			}
		}
	}
}

int func_996(int iParam0)//Position - 0x9A510
{
	switch (iParam0)
	{
		case 8:
		case 9:
			return 0;
			break;
	}
	return -1;
}

void func_997(int iParam0, int iParam1)//Position - 0x9A533
{
	char* sVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	if (!PED::IS_PED_INJURED(Local_113[iParam0 /*14*/]))
	{
		switch (iParam1)
		{
			case 5:
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_416);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_416);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 134217728, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_416);
				TASK::TASK_PERFORM_SEQUENCE(Local_113[iParam0 /*14*/], iLocal_416);
				if (iParam0 == 0)
				{
					iLocal_388 = MISC::GET_GAME_TIMER();
				}
				break;
			case 7:
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_113[iParam0 /*14*/], 2f);
				switch (iParam0)
				{
					case 1:
						if (Local_113[iParam0 /*14*/].f_9 == 6)
						{
							sVar0 = "finc23";
							iVar1 = 23;
						}
						else
						{
							sVar0 = "finc22";
							iVar1 = 1;
						}
						break;
					case 2:
						if (Local_113[iParam0 /*14*/].f_9 == 6)
						{
							sVar0 = "finc21";
							iVar1 = 8;
						}
						else
						{
							sVar0 = "finc23";
							iVar1 = 1;
						}
						break;
					case 3:
						if (Local_113[iParam0 /*14*/].f_9 == 6)
						{
							sVar0 = "finc22";
							iVar1 = 12;
						}
						else
						{
							sVar0 = "finc21";
							iVar1 = 1;
						}
						break;
				}
				TASK::TASK_CLEAR_LOOK_AT(Local_113[iParam0 /*14*/]);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_113[iParam0 /*14*/], sVar0, iVar1, 0, -1);
				break;
			default:
				bVar3 = false;
				switch (iParam1)
				{
					case 2:
						iVar6 = 1;
						bVar2 = true;
						break;
					case 4:
						if (iParam0 == 0)
						{
							iVar6 = 2;
							bVar3 = true;
						}
						else
						{
							iVar6 = 32768;
						}
						bVar2 = false;
						break;
					case 3:
						iVar6 = 2;
						bVar2 = false;
						if (iParam0 == 0)
						{
							bVar3 = true;
						}
						break;
					case 6:
						iVar6 = 32768;
						bVar2 = false;
						break;
				}
				if (bVar2)
				{
					fVar4 = 1000f;
				}
				else
				{
					fVar4 = 4f;
				}
				if (bVar3)
				{
					fVar5 = -1f;
				}
				else
				{
					fVar5 = -8f;
				}
				TASK::TASK_PLAY_ANIM(Local_113[iParam0 /*14*/], func_901(iParam0, iParam1), func_900(iParam0, iParam1), fVar4, fVar5, -1, iVar6, 0f, false, false, false);
				if (bVar2)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iParam0 /*14*/], false, false);
				}
				if (iParam1 == 4 || iParam1 == 3)
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_113[iParam0 /*14*/], PLAYER::PLAYER_PED_ID(), -1, 2064, 4);
				}
				break;
		}
		iLocal_372[iParam0] = MISC::GET_GAME_TIMER();
		Local_113[iParam0 /*14*/].f_9 = iParam1;
	}
}

void func_998()//Position - 0x9A753
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	bVar0 = false;
	if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (iVar1 != joaat("WEAPON_UNARMED"))
		{
			bVar0 = true;
		}
	}
	if (iLocal_110[2] == 2)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_133[iVar2]))
			{
				switch (iVar2)
				{
					case 0:
						Var3 = { -1619.9789f, -1082.3705f, 12.01724f };
						fVar4 = 47.6f;
						break;
					case 1:
						Var3 = { -1652.3342f, -1093.494f, 12.12104f };
						fVar4 = -132.8f;
						break;
				}
				iLocal_133[iVar2] = PED::CREATE_PED(6, func_74(20), Var3, fVar4, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_133[iVar2], func_370(1), -1, false, true);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_133[iVar2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			else if (bVar0)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_133[iVar2], 0f, 0f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_133[iVar2], 0f, 7f, 3f), 2f, false, true, 0))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
					}
				}
			}
			iVar2++;
		}
	}
}

void func_999()//Position - 0x9A8A4
{
	if (iLocal_110[2] == 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_138[3]))
		{
		}
		else if (!iLocal_207)
		{
			if (iLocal_110[2] == 2)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_366))
				{
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_366, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_366, iLocal_138[3], -1);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_367))
				{
					PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_367, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_367, iLocal_138[3], -1);
				}
				iLocal_207 = 1;
			}
		}
	}
}

void func_1000()//Position - 0x9A926
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	if (iLocal_110[2] == 2)
	{
		iLocal_238 = 0;
		if (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), -1878.2206f, -1214.3665f, -100.01662f, -1479.2462f, -977.3813f, 100.11576f, false, true))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
			if ((((((!WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && iVar0 != joaat("WEAPON_STICKYBOMB")) && iVar0 != joaat("WEAPON_GRENADE")) && iVar0 != joaat("WEAPON_SMOKEGRENADE")) && iVar0 != joaat("WEAPON_BZGAS")) && iVar0 != joaat("WEAPON_MOLOTOV")) && iVar0 != joaat("WEAPON_STUNGUN"))
			{
				iLocal_238 = 1;
			}
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = iVar1;
			if (!PED::IS_PED_INJURED(iLocal_132[iVar2]))
			{
				if (!iLocal_239[iVar2])
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_132[iVar1], PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_245())
						{
							if (iVar2 == 0)
							{
								func_888(&iLocal_366, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_132[iVar1], iLocal_366, func_37(4), "Death_Steve", 8f, -8f, 0, 0, 1000f, 0);
								AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_132[iVar1], 0f);
							}
							else
							{
								func_888(&iLocal_367, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_132[iVar1], iLocal_367, func_37(4), "Death_CamMan", -8f, -8f, 0, 0, 1000f, 0);
							}
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_132[iVar1], false);
							ENTITY::SET_ENTITY_PROOFS(iLocal_132[iVar1], true, true, true, true, true, false, false, false);
							AUDIO::STOP_PED_SPEAKING(iLocal_132[iVar1], true);
							iLocal_379 = MISC::GET_GAME_TIMER() + 100;
							iLocal_398 = MISC::GET_GAME_TIMER();
							iLocal_239[iVar1] = 1;
							if (iVar2 == 0)
							{
								if (!PED::IS_PED_INJURED(iLocal_132[iVar1]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_132[iVar1]))
									{
										__LIB_0__::func_429();
									}
								}
								bLocal_4315 = false;
								bLocal_4316 = false;
								if (!PED::IS_PED_INJURED(iLocal_132[0]))
								{
									if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true), 30f))
									{
										if (FIRE::IS_EXPLOSION_IN_SPHERE(0, ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true), 30f) || FIRE::IS_EXPLOSION_IN_SPHERE(1, ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true), 30f))
										{
											bLocal_4316 = true;
										}
										else if (FIRE::IS_EXPLOSION_IN_SPHERE(18, ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true), 30f) || FIRE::IS_EXPLOSION_IN_SPHERE(33, ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true), 30f))
										{
											bLocal_4315 = false;
										}
										else
										{
											bLocal_4315 = true;
										}
									}
									else
									{
										bLocal_4315 = false;
									}
								}
								else
								{
									bLocal_4315 = true;
								}
							}
						}
					}
					else
					{
						switch (iLocal_112[iVar2])
						{
							case 2:
								if (iVar2 == 0)
								{
									fLocal_352 = func_1001(iVar2);
								}
								else
								{
									PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_367, fLocal_352);
								}
								if (func_1001(iVar2) >= 1f)
								{
									func_887(iVar2, 3, 0);
								}
								break;
							case 1:
								if (iVar2 == 0)
								{
									fVar3 = 0.98f;
								}
								else
								{
									fVar3 = 0.99f;
								}
								if (func_1001(iVar2) >= fVar3)
								{
									func_887(iVar2, 3, 0);
								}
								break;
							case 4:
								if (func_1001(iVar2) >= 0.98f)
								{
									func_887(iVar2, 5, 0);
									iLocal_379 = MISC::GET_GAME_TIMER() + 100;
								}
								break;
							}
						}
					}
			}
			iVar1++;
		}
		bVar4 = false;
		if (((PED::IS_PED_INJURED(iLocal_132[1]) || PED::IS_PED_INJURED(iLocal_132[0])) || iLocal_239[0]) || iLocal_239[1])
		{
			bVar4 = true;
		}
		if (!PED::IS_PED_INJURED(iLocal_132[0]))
		{
			Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true) };
			if ((((((MISC::IS_SNIPER_BULLET_IN_AREA(Var5 - Vector(5f, 5f, 5f), Var5 + Vector(5f, 5f, 5f)) || MISC::IS_BULLET_IN_AREA(Var5, 5f, true)) || FIRE::IS_EXPLOSION_IN_AREA(-1, -1878.2206f, -1214.3665f, -100.01662f, -1479.2462f, -977.3813f, 100.11576f)) || iLocal_238) || MISC::IS_PROJECTILE_IN_AREA(Var5 - Vector(10f, 10f, 10f), Var5 + Vector(10f, 10f, 10f), false)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Var5, 10f) > 0) || (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_43 == 1))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_132[0], 30f, 30f, 10f, false, true, 0))
				{
					bLocal_267 = true;
				}
				bLocal_268 = false;
				bVar4 = true;
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_132[0], 10f, 10f, 6f, false, true, 0))
			{
				bLocal_268 = true;
				bLocal_267 = true;
				bVar4 = true;
			}
		}
		if (bVar4)
		{
			if (iLocal_112[0] < 4 && !iLocal_239[0])
			{
				func_887(0, 4, 0);
				iLocal_379 = MISC::GET_GAME_TIMER() + 100;
			}
			if (iLocal_112[1] < 4 && !iLocal_239[1])
			{
				func_887(1, 4, 0);
				iLocal_379 = MISC::GET_GAME_TIMER() + 100;
			}
			if (!Global_96880[2])
			{
				if (iLocal_43 == 0)
				{
					if (__LIB_17__::func_341() == 2)
					{
						iLocal_197 = 1;
						func_288(1, 0, 0, 1, 0, 1, 0, 1);
						iLocal_262 = 1;
					}
					else if (iLocal_239[0])
					{
						func_829(21);
					}
					else
					{
						func_829(18);
					}
				}
			}
		}
	}
}

float func_1001(int iParam0)//Position - 0x9AE5C
{
	if (iParam0 == 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_366))
		{
			return PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_366);
		}
	}
	else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_367))
	{
		return PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_367);
	}
	return 0f;
}

void func_1004()//Position - 0x9AEC7
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar3 = func_1008(iVar0);
		switch (Local_120[iVar0 /*4*/].f_3)
		{
			case 0:
				if (iLocal_110[2] == 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[iVar3]))
					{
						func_1006(iVar0, 1);
						iVar1 = 0;
						while (iVar1 < 2)
						{
							Local_120[iVar0 /*4*/][iVar1] = PED::CREATE_PED(26, func_74(16), ENTITY::GET_ENTITY_COORDS(iLocal_138[iVar3], true), 0f, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_120[iVar0 /*4*/][iVar1], true);
							PED::SET_PED_KEEP_TASK(Local_120[iVar0 /*4*/][iVar1], true);
							PED::SET_PED_CONFIG_FLAG(Local_120[iVar0 /*4*/][iVar1], 118, false);
							PED::SET_PED_CONFIG_FLAG(Local_120[iVar0 /*4*/][iVar1], 208, true);
							iVar4 = func_1005(iVar0, iVar1);
							switch (iVar4)
							{
								case 0:
									sVar2 = "Stand_Idle_1_PEDA";
									break;
								case 1:
									sVar2 = "Stand_Idle_1_PEDB";
									break;
								case 2:
									sVar2 = "Stand_Idle_2_PEDA";
									break;
								case 3:
									sVar2 = "Stand_Idle_2_PEDB";
									break;
							}
							TASK::TASK_SYNCHRONIZED_SCENE(Local_120[iVar0 /*4*/][iVar1], iLocal_368[iVar0], func_37(5), sVar2, 1000f, -8f, 0, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_120[iVar0 /*4*/][iVar1], false, false);
							iVar1++;
						}
						Local_120[iVar0 /*4*/].f_3 = 1;
					}
				}
				break;
			case 1:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[iVar3]))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_138[iVar3], true) };
					if ((((MISC::IS_SNIPER_BULLET_IN_AREA(Var5 - Vector(5f, 5f, 5f), Var5 + Vector(5f, 5f, 5f)) || MISC::IS_BULLET_IN_AREA(Var5, 5f, true)) || iLocal_238) || Global_96880[2]) || (iLocal_182 && bLocal_263))
					{
						Local_120[iVar0 /*4*/].f_3 = 2;
					}
					if (iLocal_410 == iVar0)
					{
						iVar1 = 0;
						while (iVar1 < 2)
						{
							if (!PED::IS_PED_INJURED(Local_120[iVar0 /*4*/][iVar1]))
							{
								if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_120[iVar0 /*4*/][iVar1]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_120[iVar0 /*4*/][iVar1]))
								{
									Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_120[iVar0 /*4*/][iVar1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
									if (((Var6.f_1 > -0.5f && Var6.f_1 < 20f) && (Var6.f_0 < 10f && Var6.f_0 > -10f)) && (Var6.f_2 < 3f || Var6.f_2 > -3f))
									{
										Local_120[iVar0 /*4*/].f_3 = 2;
									}
								}
							}
							else
							{
								Local_120[iVar0 /*4*/].f_3 = 2;
							}
							iVar1++;
						}
					}
				}
				break;
			case 2:
				if (MISC::GET_GAME_TIMER() >= iLocal_379)
				{
					func_1006(iVar0, 0);
					iVar1 = 0;
					while (iVar1 < 2)
					{
						if (!PED::IS_PED_INJURED(Local_120[iVar0 /*4*/][iVar1]))
						{
							iVar7 = func_1005(iVar0, iVar1);
							switch (iVar7)
							{
								case 0:
									sVar2 = "Reaction_1_PEDA";
									break;
								case 1:
									sVar2 = "Reaction_1_PEDB";
									break;
								case 2:
									sVar2 = "Reaction_2_PEDA";
									break;
								case 3:
									sVar2 = "Reaction_2_PEDB";
									break;
							}
							TASK::TASK_LOOK_AT_ENTITY(Local_120[iVar0 /*4*/][iVar1], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_120[iVar0 /*4*/][iVar1], iLocal_368[iVar0], func_37(5), sVar2, 8f, -8f, 0, 0, 1000f, 0);
						}
						iVar1++;
					}
					Local_120[iVar0 /*4*/].f_3 = 3;
					iLocal_379 = MISC::GET_GAME_TIMER() + 100;
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[iVar3]))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_368[iVar0]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_368[iVar0]) >= 0.98f)
						{
							func_1006(iVar0, 1);
							iVar1 = 0;
							while (iVar1 < 2)
							{
								if (!PED::IS_PED_INJURED(Local_120[iVar0 /*4*/][iVar1]))
								{
									iVar8 = func_1005(iVar0, iVar1);
									switch (iVar8)
									{
										case 0:
											sVar2 = "Cower_Idle_1_PEDA";
											break;
										case 1:
											sVar2 = "Cower_Idle_1_PEDB";
											break;
										case 2:
											sVar2 = "Cower_Idle_2_PEDA";
											break;
										case 3:
											sVar2 = "Cower_Idle_2_PEDB";
											break;
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_120[iVar0 /*4*/][iVar1], iLocal_368[iVar0], func_37(5), sVar2, 8f, -8f, 0, 0, 1000f, 0);
								}
								iVar1++;
							}
							Local_120[iVar0 /*4*/].f_3 = 4;
						}
					}
				}
				break;
		}
		iVar0++;
	}
	iLocal_410++;
	if (iLocal_410 >= 5)
	{
		iLocal_410 = 0;
	}
}

int func_1005(int iParam0, int iParam1)//Position - 0x9B37F
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		case 4:
			if (iParam1 == 0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
			break;
		case 5:
			if (iParam1 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_1006(int iParam0, bool bParam1)//Position - 0x9B42B
{
	float fVar0;
	fVar0 = func_1007(iParam0);
	iLocal_368[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, fVar0, 2);
	PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_368[iParam0], 0f, 0f, 0f, 0f, 0f, fVar0, 2);
	PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_368[iParam0], iLocal_138[func_1008(iParam0)], -1);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_368[iParam0], bParam1);
}

float func_1007(int iParam0)//Position - 0x9B485
{
	switch (iParam0)
	{
		case 0:
			return 180f;
			break;
		case 1:
			return 0f;
			break;
		case 2:
			return 90f;
			break;
		case 3:
			return 220f;
			break;
		case 4:
			return 317f;
			break;
		case 5:
			return 172f;
			break;
	}
	return 0f;
}

int func_1008(int iParam0)//Position - 0x9B4F7
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		case 1:
			return 5;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 8;
			break;
		case 4:
			return 13;
			break;
		case 5:
			return 11;
			break;
	}
	return 0;
}

void func_1009()//Position - 0x9B558
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	func_980();
	if (!iLocal_182)
	{
		if (!iLocal_231)
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if ((MISC::GET_GAME_TIMER() >= iLocal_363 + 20000 || iLocal_116 == 4) || iLocal_116 == 5)
			{
				iLocal_231 = 1;
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
		}
		if (!iLocal_305)
		{
			if (bLocal_214)
			{
				__LIB_17__::func_99("FINC2_CHENG_SHOT");
				iLocal_305 = 1;
			}
		}
		__LIB_14__::func_615(&uLocal_21, Local_114[0 /*14*/], 0, 0, 1, 1, 1);
		if (!iLocal_232)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_363 + 10000)
			{
				func_895(0);
				iLocal_232 = 1;
			}
		}
		if (bLocal_214)
		{
			if (!PED::IS_PED_INJURED(Local_114[1 /*14*/]))
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_405)
				{
					if (!__LIB_0__::func_75())
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
						{
							__LIB_0__::func_640(Local_114[1 /*14*/], "GENERIC_CURSE_HIGH", 9);
						}
						else
						{
							__LIB_0__::func_640(Local_114[1 /*14*/], "GENERIC_FUCK_YOU", 9);
						}
						iLocal_405 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 14000));
					}
					else
					{
						iLocal_405 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000));
					}
				}
			}
		}
		if (!Global_96880[1])
		{
			if (iLocal_110[1] == 2)
			{
				if (!iLocal_216)
				{
					if (iLocal_110[1] == 2)
					{
						if (bLocal_214)
						{
							iLocal_216 = 1;
						}
						else if (iLocal_116 == 2 && !bLocal_248)
						{
							if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[0 /*14*/], 40f, 40f, 10f, false, false, 0))
								{
									iLocal_216 = func_283("FINC1_CHLEA", 0, 11, 0);
								}
								else
								{
									iLocal_216 = 1;
								}
							}
						}
					}
				}
				else if (!iLocal_189[1])
				{
					if (!bLocal_214)
					{
						if (func_283("FINC1_FHR", 0, 0, 0))
						{
							iLocal_189[1] = 1;
						}
					}
					else
					{
						iLocal_189[1] = 1;
					}
				}
				else if (!iLocal_188[1])
				{
					iLocal_188[1] = func_247("FC2_KILLTRI", 1, 0);
					if (iLocal_188[1])
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 3);
					}
				}
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < 10)
				{
					iVar2 = iVar1;
					if (ENTITY::DOES_ENTITY_EXIST(Local_114[iVar1 /*14*/]))
					{
						if (PED::IS_PED_INJURED(Local_114[iVar1 /*14*/]))
						{
							if (iVar2 == 0)
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_152))
								{
									HUD::REMOVE_BLIP(&iLocal_152);
								}
								bVar0 = true;
							}
						}
						else if (iVar2 == 0)
						{
							bVar3 = func_1011();
							if (func_245())
							{
								if (bVar3)
								{
									if (!bLocal_209 || !HUD::DOES_BLIP_EXIST(iLocal_152))
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_152))
										{
											HUD::REMOVE_BLIP(&iLocal_152);
										}
										func_1010(1);
									}
								}
								else if (bLocal_209 || !HUD::DOES_BLIP_EXIST(iLocal_152))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_152))
									{
										HUD::REMOVE_BLIP(&iLocal_152);
									}
									func_1010(0);
								}
							}
							bLocal_209 = bVar3;
							bVar4 = false;
							__LIB_14__::func_655(iLocal_152, Local_114[iVar1 /*14*/], 300f, 1061158912, 0);
							if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[iVar1 /*14*/], 300f, 300f, 300f, false, false, 0))
							{
								bVar4 = true;
							}
							if (bVar4)
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_152))
								{
									HUD::REMOVE_BLIP(&iLocal_152);
								}
								func_829(26);
							}
						}
					}
					iVar1++;
				}
				if (bLocal_214)
				{
					if (iLocal_116 == 5 || iLocal_116 == 3)
					{
						if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]) && !PED::IS_PED_INJURED(Local_114[2 /*14*/]))
						{
							if (!iLocal_217)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[0 /*14*/], 40f, 40f, 10f, false, false, 0))
								{
									if (func_283("FINC1_CHHIT", 0, 0, 0))
									{
										iLocal_217 = 1;
										func_375(8000);
									}
								}
							}
						}
					}
					bVar5 = false;
					if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[0 /*14*/], 25f, 25f, 10f, false, false, 0))
						{
							bVar5 = true;
						}
						if (!iLocal_295)
						{
							if (PED::IS_PED_INJURED(Local_114[1 /*14*/]))
							{
								if (bVar5)
								{
									iLocal_295 = func_283("FINC1_CHCD", 0, 0, 0);
								}
								else
								{
									iLocal_295 = 1;
								}
							}
						}
						if (bVar5)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_114[0 /*14*/], false))
							{
								if (!PED::IS_PED_INJURED(Local_114[2 /*14*/]))
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										func_822("FINC1_CHGF", -1, -1);
									}
									else
									{
										func_822("FINC1_CHCS", -1, -1);
									}
								}
								else if (!PED::IS_PED_INJURED(Local_114[3 /*14*/]))
								{
									func_822("FINC1_CHGF", -1, -1);
								}
							}
							else
							{
								func_822("FINC1_CHSF", -1, -1);
							}
						}
					}
				}
				if (bVar0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_114[0 /*14*/]))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_114[0 /*14*/], func_370(3), 0))
						{
							__LIB_0__::func_630(270);
						}
					}
					if (func_245())
					{
						iLocal_49.f_18[1] = 1;
						func_891(6, 1, 0);
						fLocal_350 = 230f;
						func_42(2);
						func_33(12);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_135[0], 0f);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(12f, 8f, 3);
						Global_96880[1] = 1;
					}
				}
			}
		}
		else
		{
			fLocal_350 = (fLocal_350 - (0.4f * SYSTEM::TIMESTEP()));
			if (fLocal_350 < 0f)
			{
				fLocal_350 = 0f;
			}
			if (__LIB_0__::func_501("FC2_KILLTRI", 0, 0))
			{
				func_252(0, 1, 0, 0);
			}
			if (!bLocal_265)
			{
				bLocal_265 = func_283("FINC1_FKILCH", 0, 0, 0);
			}
			if (!iLocal_191[1])
			{
				if (!bLocal_258)
				{
					iVar6 = 0;
					while (iVar6 < 10)
					{
						__LIB_0__::func_621(&(Local_114[iVar6 /*14*/].f_1));
						if (ENTITY::DOES_ENTITY_EXIST(Local_114[iVar6 /*14*/]))
						{
							if (!PED::IS_PED_INJURED(Local_114[iVar6 /*14*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_114[iVar6 /*14*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_114[iVar6 /*14*/]));
						}
						iVar6++;
					}
					iVar6 = 0;
					while (iVar6 < 3)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_154[iVar6]))
						{
							HUD::REMOVE_BLIP(&(uLocal_154[iVar6]));
						}
						iVar6++;
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[1], false))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_135[1], 0f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[2], false))
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_135[2], 0f);
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						__LIB_17__::func_99("FINC2_CHENG_DONE_FOOT");
					}
					else
					{
						__LIB_17__::func_99("FINC2_CHENG_DONE");
					}
					func_42(12);
					iLocal_191[1] = 1;
				}
				else if (!bLocal_192[1])
				{
					if (bLocal_265)
					{
						bLocal_192[1] = func_247("FC2_ESCTRI", 1, 0);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_501("FC2_ESCTRI", 0, 0))
				{
					func_252(0, 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || Local_108.f_1 != 0)
				{
					if (__LIB_0__::func_501("LOSE_WANTED" /* GXT: Lose the Cops. */, 0, 0))
					{
						func_252(0, 1, 0, 0);
					}
					bLocal_205 = false;
					if (!bLocal_190[1])
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						bLocal_190[1] = func_283("FINC1_FDH", 0, 0, 0);
					}
					else if (!iLocal_195)
					{
						iLocal_195 = func_975();
					}
					else
					{
						if (!bLocal_196)
						{
							AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
							bLocal_196 = func_974();
						}
						else
						{
							if (!iLocal_200)
							{
								if (Local_108.f_1 == 0)
								{
									iLocal_200 = func_247(func_973(), 1, 0);
								}
								if (!iLocal_49.f_18[2])
								{
									if (iLocal_49.f_18[0])
									{
										func_972(2);
									}
								}
								else if (!iLocal_49.f_18[0])
								{
									func_972(0);
								}
							}
							if (func_970())
							{
								func_907();
							}
						}
						if (iLocal_49.f_18[2])
						{
							if (func_906())
							{
								func_972(2);
								__LIB_15__::func_961(&iLocal_49, 2, 0, 1);
								iLocal_49.f_18[2] = 0;
							}
						}
					}
				}
				else
				{
					if (!bLocal_205)
					{
						bLocal_205 = func_247("LOSE_WANTED" /* GXT: Lose the Cops. */, 1, 0);
						MISC::ENABLE_DISPATCH_SERVICE(1, true);
						MISC::ENABLE_DISPATCH_SERVICE(7, true);
						PED::SET_CREATE_RANDOM_COPS(true);
					}
					iLocal_200 = 0;
				}
			}
		}
		if (func_245())
		{
			bVar7 = false;
			if (Local_108.f_1 == 0)
			{
				if (__LIB_17__::func_341() == 0)
				{
					func_288(0, 0, 1, 1, 0, 1, 0, 1);
					bVar7 = true;
				}
				else if (__LIB_17__::func_341() == 2)
				{
					if (Global_96880[2])
					{
						func_288(4, 0, 1, 1, 0, 1, 1, 1);
						bVar7 = true;
					}
					else
					{
						func_288(0, 0, 1, 1, 0, 1, 0, 1);
						bVar7 = true;
					}
				}
				if (bVar7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
					{
						func_81(1, 0);
						func_394(iLocal_49[1], 1);
						PED::DELETE_PED(&(iLocal_49[1]));
					}
					__LIB_0__::func_222(&uLocal_418, 2, 0, "FRANKLIN", 0, 1);
					func_279(1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[0]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_134[0]));
					}
					func_279(5);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_146))
	{
		HUD::REMOVE_BLIP(&iLocal_146);
	}
}

void func_1010(bool bParam0)//Position - 0x9BDE8
{
	if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]))
	{
		if (bParam0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false))
			{
				iLocal_152 = func_274(iLocal_135[0], 1);
			}
		}
		else
		{
			iLocal_152 = func_827(Local_114[0 /*14*/], 1);
		}
	}
}

int func_1011()//Position - 0x9BE30
{
	if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_135[0], false))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_114[0 /*14*/], iLocal_135[0], false))
		{
			return 1;
		}
	}
	return 0;
}

void func_1041()//Position - 0x9D0C2
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	char* sVar6;
	bool bVar7;
	struct<3> Var8;
	bool bVar9;
	struct<3> Var10;
	struct<3> Var11;
	int iVar12;
	int iVar13;
	struct<3> Var14;
	struct<3> Var15;
	int iVar16;
	bool bVar17;
	func_980();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_182)
	{
		if (!Global_96880[2])
		{
			if (iLocal_110[2] == 2)
			{
				if (!iLocal_262 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (iLocal_110[2] == 2)
					{
						func_281("fin_c2_mcs_1", -1664.3428f, -1125.8206f, 12.23751f, 1000f, 2000f);
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							if (!PED::IS_PED_INJURED(iLocal_132[0]))
							{
								CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Steve_FBI", iLocal_132[0], 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_132[1]))
							{
								CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Grip_beside_director", iLocal_132[1], 0);
							}
						}
						if ((__LIB_0__::func_494(1, 0, 1) && func_245()) && !__LIB_0__::func_75())
						{
							if (iLocal_112[0] != 4 && iLocal_112[0] != 5)
							{
								if (iLocal_189[2])
								{
									if (__LIB_0__::func_90())
									{
										bLocal_263 = false;
										iLocal_182 = 1;
									}
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_235)
					{
						if (!bLocal_287)
						{
							if (iLocal_112[0] != 4 && iLocal_112[0] != 5)
							{
								bLocal_287 = func_1047("FC2_STVHLP");
							}
						}
					}
					switch (iLocal_125)
					{
						case 0:
							if (iLocal_110[2] == 2)
							{
								AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY("FIN_C2_MCS_1", iLocal_132[0]);
								iLocal_125 = 1;
							}
							break;
						case 1:
							if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("FIN_C2_MCS_1", 0))
							{
								if (iLocal_112[0] < 4)
								{
									func_887(0, 2, 0);
									func_887(1, 2, 0);
									func_1046(0, 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_157, iLocal_366, "FIN_C2_MCS_1_CAM", func_37(3));
									AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_366);
								}
								iLocal_125 = 2;
							}
							break;
						}
				}
				if (iLocal_112[0] == 2)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
				}
				if (iLocal_262)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_366) && iLocal_112[0] == 2)
					{
						fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_366);
						if (fVar2 >= 0.3f)
						{
							iLocal_312 = 1;
						}
						if (iLocal_394 < 4)
						{
							switch (iLocal_394)
							{
								case 0:
									fVar3 = 0f;
									iVar1 = 1;
									break;
								case 1:
									fVar3 = 0.3405f;
									iVar1 = 0;
									break;
								case 2:
									fVar3 = 0.5027f;
									iVar1 = 1;
									break;
								case 3:
									fVar3 = 0.711f;
									iVar1 = 0;
									break;
							}
							if (fVar2 >= fVar3)
							{
								bLocal_277 = iVar1;
								iLocal_394++;
							}
						}
					}
					else
					{
						bLocal_277 = false;
					}
					if (Global_75485)
					{
						iLocal_411 = MISC::GET_GAME_TIMER();
					}
					if (!bLocal_234)
					{
						if ((CAM::DOES_CAM_EXIST(iLocal_157) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_366)) && iLocal_112[0] == 2)
						{
							if (iLocal_125 == 2)
							{
								if (!iLocal_235)
								{
									iLocal_235 = func_1047("FC2_WHLHLP");
									if (iLocal_235)
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
									}
								}
							}
							if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
							{
								if ((((MISC::GET_GAME_TIMER() >= iLocal_411 + 1000 && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/)) && !PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/)) && !__LIB_0__::func_77(0)) && !iLocal_274)
								{
									func_1045();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									SYSTEM::WAIT(0);
									CAM::SET_CAM_ACTIVE(iLocal_157, true);
									func_33(16);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									HUD::DISPLAY_RADAR(false);
									AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
									CAM::SET_CINEMATIC_MODE_ACTIVE(false);
									RECORDING::REPLAY_START_EVENT(4);
									iLocal_235 = 1;
									bLocal_275 = false;
									iLocal_276 = 0;
									iLocal_395 = MISC::GET_GAME_TIMER();
									bLocal_234 = true;
								}
							}
							else
							{
								iLocal_274 = 0;
							}
						}
					}
					else
					{
						if (__LIB_0__::func_1("FC2_WHLHLP"))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_364 + 1000)
							{
								HUD::CLEAR_HELP(false);
								iLocal_364 = MISC::GET_GAME_TIMER();
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
						{
							VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_134[1], true);
						}
						iVar4 = 0;
						if (!PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
						{
							if (!iLocal_276)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_395 + 500)
								{
									iVar4 = 1;
									iLocal_274 = 0;
								}
								else
								{
									iLocal_276 = 1;
								}
								bLocal_275 = true;
							}
						}
						else if (bLocal_275)
						{
							iVar4 = 1;
							iLocal_274 = 1;
						}
						if (((iVar4 || !CAM::DOES_CAM_EXIST(iLocal_157)) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_366)) || iLocal_112[0] != 2)
						{
							if (CAM::DOES_CAM_EXIST(iLocal_157))
							{
								CAM::SET_CAM_ACTIVE(iLocal_157, false);
							}
							RECORDING::REPLAY_STOP_EVENT();
							func_42(16);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							HUD::DISPLAY_RADAR(true);
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							HUD::CLEAR_PRINTS();
							AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
							iLocal_278 = 0;
							bLocal_234 = false;
						}
					}
					if (bLocal_234)
					{
						if (iLocal_278)
						{
							if (!bLocal_277)
							{
								GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
								iLocal_278 = 0;
							}
						}
						else if (bLocal_277)
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam_cheap");
							iLocal_278 = 1;
						}
					}
					if (bLocal_234)
					{
						func_1045();
						__LIB_1__::func_33(0);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_366) && iLocal_112[0] == 2)
				{
					bVar7 = false;
					switch (iLocal_403)
					{
						case 0:
							fVar5 = 0f;
							sVar6 = "FC2_SUB1";
							break;
						case 1:
							fVar5 = 0.032f;
							bVar7 = true;
							break;
						case 2:
							fVar5 = 0.036f;
							sVar6 = "FC2_SUB2";
							break;
						case 3:
							fVar5 = 0.095f;
							bVar7 = true;
							break;
						case 4:
							fVar5 = 0.1f;
							sVar6 = "FC2_SUB3";
							break;
						case 5:
							fVar5 = 0.165f;
							bVar7 = true;
							break;
						case 6:
							fVar5 = 0.177f;
							sVar6 = "FC2_SUB4";
							break;
						case 7:
							fVar5 = 0.234f;
							bVar7 = true;
							break;
						case 8:
							fVar5 = 0.248f;
							sVar6 = "FC2_SUB5";
							break;
						case 9:
							fVar5 = 0.305f;
							bVar7 = true;
							break;
						case 10:
							fVar5 = 0.313f;
							sVar6 = "FC2_SUB6";
							break;
						case 11:
							fVar5 = 0.326f;
							bVar7 = true;
							break;
						case 12:
							fVar5 = 0.335f;
							sVar6 = "FC2_SUB7";
							break;
						case 13:
							fVar5 = 0.339f;
							bVar7 = true;
							break;
						case 14:
							fVar5 = 0.347f;
							sVar6 = "FC2_SUB8";
							break;
						case 15:
							fVar5 = 0.359f;
							bVar7 = true;
							break;
						case 16:
							fVar5 = 0.359f;
							sVar6 = "FC2_SUB9";
							break;
						case 17:
							fVar5 = 0.375f;
							bVar7 = true;
							break;
						case 18:
							fVar5 = 0.382f;
							sVar6 = "FC2_SUB10";
							break;
						case 19:
							fVar5 = 0.408f;
							bVar7 = true;
							break;
						case 20:
							fVar5 = 0.414f;
							sVar6 = "FC2_SUB11";
							break;
						case 21:
							fVar5 = 0.44f;
							bVar7 = true;
							break;
						case 22:
							fVar5 = 0.446f;
							sVar6 = "FC2_SUB12";
							break;
						case 23:
							fVar5 = 0.451f;
							bVar7 = true;
							break;
						case 24:
							fVar5 = 0.467f;
							sVar6 = "FC2_SUB13";
							break;
						case 25:
							fVar5 = 0.473f;
							bVar7 = true;
							break;
						case 26:
							fVar5 = 0.478f;
							sVar6 = "FC2_SUB14";
							break;
						case 27:
							fVar5 = 0.502f;
							bVar7 = true;
							break;
						case 28:
							fVar5 = 0.524f;
							sVar6 = "FC2_SUB15";
							break;
						case 29:
							fVar5 = 0.594f;
							bVar7 = true;
							break;
						case 30:
							fVar5 = 0.604f;
							sVar6 = "FC2_SUB16";
							break;
						case 31:
							fVar5 = 0.665f;
							bVar7 = true;
							break;
						case 32:
							fVar5 = 0.675f;
							sVar6 = "FC2_SUB17";
							break;
						case 33:
							fVar5 = 0.688f;
							bVar7 = true;
							break;
						case 34:
							fVar5 = 0.716f;
							sVar6 = "FC2_SUB18";
							break;
						case 35:
							fVar5 = 0.723f;
							bVar7 = true;
							break;
						case 36:
							fVar5 = 0.725f;
							sVar6 = "FC2_SUB19";
							break;
						case 37:
							fVar5 = 0.738f;
							bVar7 = true;
							break;
						case 38:
							fVar5 = 0.739f;
							sVar6 = "FC2_SUB20";
							break;
						case 39:
							fVar5 = 0.746f;
							bVar7 = true;
							break;
						case 40:
							fVar5 = 0.75f;
							sVar6 = "FC2_SUB21";
							break;
						case 41:
							fVar5 = 0.763f;
							bVar7 = true;
							break;
						case 42:
							fVar5 = 0.791f;
							sVar6 = "FC2_SUB22";
							break;
						case 43:
							fVar5 = 0.803f;
							bVar7 = true;
							break;
						case 44:
							fVar5 = 0.804f;
							sVar6 = "FC2_SUB23";
							break;
						case 45:
							fVar5 = 0.837f;
							bVar7 = true;
							break;
						case 46:
							fVar5 = 0.844f;
							sVar6 = "FC2_SUB24";
							break;
						case 47:
							fVar5 = 0.853f;
							bVar7 = true;
							break;
						case 48:
							fVar5 = 0.856f;
							sVar6 = "FC2_SUB25";
							break;
						case 49:
							fVar5 = 0.868f;
							bVar7 = true;
							break;
						case 50:
							fVar5 = 0.886f;
							sVar6 = "FC2_SUB26";
							break;
						case 51:
							fVar5 = 0.91f;
							bVar7 = true;
							break;
						case 52:
							fVar5 = 0.933f;
							sVar6 = "FC2_SUB27";
							break;
						case 53:
							fVar5 = 0.95f;
							bVar7 = true;
							break;
					}
					if (iLocal_403 < 54)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_366) >= fVar5)
						{
							if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (!bVar7)
								{
									if (bLocal_234)
									{
										HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
										__LIB_0__::func_229(sVar6, 7500, 1);
									}
								}
								else if (bLocal_234)
								{
									HUD::CLEAR_PRINTS();
								}
							}
							else if (bLocal_234)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_403++;
						}
					}
				}
				if (!iLocal_189[2])
				{
					if (iLocal_112[0] < 4)
					{
						if (func_283("FINC1_THR", 0, 0, 0))
						{
							__LIB_17__::func_99("FINC2_STEVE_START");
							iLocal_189[2] = 1;
						}
					}
					else
					{
						iLocal_189[2] = 1;
					}
				}
				else if (!iLocal_188[2])
				{
					if (!PED::IS_PED_INJURED(iLocal_132[0]))
					{
						if (iLocal_125 == 2)
						{
							iLocal_188[2] = func_247("FC2_KILLSTE", 1, 0);
						}
					}
				}
				if (iLocal_112[0] == 4 || iLocal_112[0] == 5)
				{
					if (!iLocal_239[0])
					{
						if (bLocal_267)
						{
							if (!bLocal_266)
							{
								if (bLocal_268)
								{
									bLocal_266 = func_283("FINC1_SSETRE", 0, 0, 0);
								}
								else
								{
									Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_132[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
									if (Var8.f_1 > 0f && Var8.f_2 > -1f)
									{
										bLocal_266 = func_283("FINC1_SSETRE", 0, 0, 0);
									}
									else
									{
										bLocal_266 = func_283("FINC1_STPAN", 0, 0, 0);
									}
								}
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_132[0]))
					{
						bVar9 = false;
						if (MISC::GET_GAME_TIMER() >= iLocal_370 + 7400)
						{
							bVar9 = true;
						}
						else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_366))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_366) >= 0.98f)
							{
								bVar9 = true;
							}
						}
						if (bVar9)
						{
							Var10 = { ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true) };
							Var11 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							if (Var10.f_2 > (Var11.f_2 + 5f) && !__LIB_0__::func_75())
							{
								func_829(17);
							}
						}
					}
				}
				iVar12 = 0;
				iVar0 = 0;
				while (iVar0 < 2)
				{
					iVar13 = iVar0;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_132[iVar0]))
					{
						if (PED::IS_PED_INJURED(iLocal_132[iVar0]) || iLocal_239[iVar0])
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_150[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_150[iVar0]));
							}
							if (iVar13 == 0)
							{
								iVar12 = 1;
								iLocal_593 = 2;
								iLocal_326 = iLocal_326;
								if (bLocal_4315)
								{
									iLocal_321 = 0;
									iLocal_326 = MISC::GET_GAME_TIMER();
									while (!func_852(&Local_1835, 1))
									{
										if (!iLocal_321)
										{
											if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
											{
												if (CAM::IS_CAM_ACTIVE(Local_1835.f_1))
												{
													if (CAM::GET_CAM_SPLINE_PHASE(Local_1835.f_1) >= 0.89f)
													{
														GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
														AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
														iLocal_321 = 1;
													}
												}
											}
										}
										func_1057();
										SYSTEM::WAIT(0);
									}
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
									bLocal_315 = true;
								}
								else if (bLocal_4316)
								{
									iLocal_321 = 0;
									iLocal_326 = MISC::GET_GAME_TIMER();
									while (!func_852(&Local_3075, 1))
									{
										if (!iLocal_321)
										{
											if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
											{
												if (CAM::IS_CAM_ACTIVE(Local_3075.f_1))
												{
													if (CAM::GET_CAM_SPLINE_PHASE(Local_3075.f_1) >= 0.89f)
													{
														GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
														AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
														iLocal_321 = 1;
													}
												}
											}
										}
										func_1057();
										SYSTEM::WAIT(0);
									}
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
									bLocal_315 = true;
								}
								else
								{
									if (!iLocal_318)
									{
										if (!PED::IS_PED_INJURED(iLocal_132[0]))
										{
											Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
											Var15 = { ENTITY::GET_ENTITY_COORDS(iLocal_132[0], true) };
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var14, Var15, true) < 5f)
											{
												bLocal_317 = true;
											}
											else
											{
												bLocal_317 = false;
											}
										}
										iLocal_318 = 1;
									}
									if (!bLocal_317)
									{
										while (!func_852(&iLocal_594, 1))
										{
											func_1057();
											SYSTEM::WAIT(0);
										}
									}
									if (!PED::IS_PED_INJURED(iLocal_132[1]) && !iLocal_239[1])
									{
										func_1043();
									}
									else
									{
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
										bLocal_315 = true;
									}
								}
							}
						}
						else if (iVar13 == 0)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_150[iVar0]))
							{
								uLocal_150[iVar0] = func_827(iLocal_132[iVar0], 1);
							}
							if (!iLocal_271)
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_132[iVar0], 150f, 150f, 150f, false, true, 0))
								{
									iLocal_271 = 1;
								}
								else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_132[iVar0], 330f, 330f, 330f, false, true, 0))
								{
									func_829(24);
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_132[iVar0], 210f, 210f, 210f, false, false, 0))
							{
								func_829(24);
							}
						}
					}
					iVar0++;
				}
				if (iVar12 && MISC::GET_GAME_TIMER() >= iLocal_398 + 120)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_132[0]))
					{
						if (PED::GET_PED_LAST_DAMAGE_BONE(iLocal_132[0], &iVar16))
						{
							if (iVar16 == 31086)
							{
								__LIB_0__::func_630(271);
							}
						}
					}
					if (func_245())
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 15f, 4);
						__LIB_0__::func_497(264, 1, 0);
						iLocal_49.f_18[2] = 1;
						func_42(8);
						func_42(15);
						func_42(16);
						func_42(17);
						__LIB_0__::func_345(&uLocal_21, 0, 0);
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						Global_96880[2] = 1;
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						}
						if (!bLocal_315)
						{
							if (!PED::IS_PED_INJURED(iLocal_132[1]) && !iLocal_239[1])
							{
								bLocal_263 = true;
								iLocal_182 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (!iLocal_269)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_392)
				{
					iVar0 = 0;
					while (iVar0 < 2)
					{
						if (!PED::IS_PED_INJURED(iLocal_133[iVar0]))
						{
							PED::SET_PED_ACCURACY(iLocal_133[iVar0], 40);
						}
						iVar0++;
					}
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_FIN_C2_01", 0f);
					PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
					iLocal_269 = 1;
				}
			}
			if (!iLocal_191[2])
			{
				if (__LIB_0__::func_501("FC2_KILLSTE", 0, 0))
				{
					func_252(0, 1, 0, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						__LIB_17__::func_99("FINC2_STEVE_DONE_FOOT");
					}
					else
					{
						__LIB_17__::func_99("FINC2_STEVE_DONE");
					}
					iLocal_191[2] = 1;
				}
				else if (!bLocal_192[2])
				{
					if (func_247("LOSE_WANTED" /* GXT: Lose the Cops. */, 1, 0))
					{
						bLocal_192[2] = 1;
						__LIB_17__::func_99("FINC2_STEVE_LOSE_COPS");
					}
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 || Local_108.f_1 != 0)
			{
				if (__LIB_0__::func_501("LOSE_WANTED" /* GXT: Lose the Cops. */, 0, 0))
				{
					func_252(0, 1, 0, 0);
				}
				bLocal_205 = false;
				if (!iLocal_311)
				{
					iVar0 = 0;
					while (iVar0 < 2)
					{
						if (!PED::IS_PED_INJURED(iLocal_133[iVar0]))
						{
							TASK::TASK_WANDER_STANDARD(iLocal_133[iVar0], 40000f, 0);
						}
						iVar0++;
					}
					iLocal_311 = 1;
				}
				if (!bLocal_190[2])
				{
					bLocal_190[2] = func_283("FINC1_TDH", 0, 0, 0);
				}
				else if (!iLocal_195)
				{
					if (func_906())
					{
						iLocal_195 = 1;
					}
					else
					{
						iLocal_195 = func_975();
					}
				}
				else if (func_906())
				{
					func_288(4, 0, 0, 1, 0, 1, 1, 1);
				}
				else if (!bLocal_196)
				{
					AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
					bLocal_196 = func_974();
				}
				else
				{
					if (!iLocal_200)
					{
						if (Local_108.f_1 == 0)
						{
							iLocal_200 = func_247(func_973(), 1, 0);
						}
						if (!iLocal_49.f_18[0])
						{
							if (iLocal_49.f_18[1])
							{
								func_972(0);
							}
						}
						else if (!iLocal_49.f_18[1])
						{
							func_972(1);
						}
					}
					if (func_970())
					{
						func_907();
					}
				}
			}
			else
			{
				iLocal_311 = 0;
				if (!bLocal_205)
				{
					bLocal_205 = func_247("LOSE_WANTED" /* GXT: Lose the Cops. */, 1, 0);
					MISC::ENABLE_DISPATCH_SERVICE(1, true);
					MISC::ENABLE_DISPATCH_SERVICE(7, true);
					PED::SET_CREATE_RANDOM_COPS(true);
				}
				iLocal_200 = 0;
			}
			if (func_245())
			{
				bVar17 = false;
				if (Local_108.f_1 == 0)
				{
					if (__LIB_17__::func_341() == 1 || __LIB_17__::func_341() == 0)
					{
						func_288(0, 0, 1, 1, 0, 1, 0, 1);
						bVar17 = true;
					}
				}
				if (bVar17)
				{
					if (!PED::IS_PED_INJURED(iLocal_49[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_49[2], iLocal_134[1], -1);
							ENTITY::SET_ENTITY_COORDS(iLocal_134[1], func_596(2), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_134[1], true);
						}
						else
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_49[2], func_596(2), true, false, false, true);
						}
					}
				}
			}
		}
	}
	else if (bLocal_263)
	{
		func_1043();
	}
	else
	{
		func_1042();
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_146))
	{
		HUD::REMOVE_BLIP(&iLocal_146);
	}
}

void func_1042()//Position - 0x9E30B
{
	int iVar0;
	bool bVar1;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_134[1], true);
	}
	switch (iLocal_48)
	{
		case 0:
			iLocal_360 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(iLocal_132[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_132[0], "Steve_FBI", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_132[1]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_132[1], "Grip_beside_director", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				ENTITY::DETACH_ENTITY(iLocal_139, true, true);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_139, "film_crew_Camera", 0, 0, 0);
			}
			iLocal_137 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_137 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
			else
			{
				Local_335 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fLocal_344 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			}
			iLocal_126 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_3__::func_80(0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())), 500f, 12, 127);
			func_701(3);
			CUTSCENE::START_CUTSCENE(0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			iLocal_48 = 1;
			break;
		case 1:
			if (!iLocal_184)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_43();
					__LIB_0__::func_345(&uLocal_21, 0, 0);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					func_42(15);
					__LIB_17__::func_661(&uLocal_21);
					__LIB_17__::func_103(&uLocal_21, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[3]))
					{
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_138[3], true), 30f, true, false, false, false);
					}
					MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f, 0);
					FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 8f);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_137, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_137, ENTITY::GET_ENTITY_COORDS(iLocal_137, true), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_137, ENTITY::GET_ENTITY_HEADING(iLocal_137));
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					__LIB_17__::func_168(iLocal_137);
					iLocal_184 = 1;
				}
			}
			switch (iLocal_394)
			{
				case 0:
					iVar0 = 5503;
					bVar1 = true;
					break;
				case 1:
					iVar0 = 10892;
					bVar1 = false;
					break;
				case 2:
					iVar0 = 14101;
					bVar1 = true;
					break;
				case 3:
					iVar0 = 21858;
					bVar1 = false;
					break;
				case 4:
					iVar0 = 25354;
					bVar1 = true;
					break;
			}
			if (iLocal_394 < 5)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= iVar0)
				{
					if (bVar1)
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam_cheap");
					}
					else
					{
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					}
					iLocal_394++;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Steve_FBI", 0))
			{
				func_887(0, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Grip_beside_director", 0))
			{
				func_887(1, 0, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("film_crew_Camera", 0))
			{
				func_886();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_137, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_137, -1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_137, 5f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), Local_335, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_344);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				if (STREAMING::STREAMVOL_IS_VALID(iLocal_126))
				{
					STREAMING::STREAMVOL_DELETE(iLocal_126);
				}
				iLocal_197 = 0;
				iLocal_233 = 1;
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				func_234(0, 1, 1, 0, 1, 0, 1000, 1);
				iLocal_394 = 0;
				iLocal_262 = 1;
			}
			break;
		case 2:
			break;
	}
}

void func_1043()//Position - 0x9E657
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[1], false))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_134[1], true);
	}
	switch (iLocal_48)
	{
		case 0:
			func_234(1, 1, 1, 0, 1, 0, 1000, 1);
			fLocal_342 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			if (!bLocal_4315 && !bLocal_4316)
			{
				CAM::SET_CAM_ACTIVE(iLocal_158, true);
				CAM::RENDER_SCRIPT_CAMS(true, !bLocal_317, 3000, true, false, 0);
				RECORDING::REPLAY_START_EVENT(4);
			}
			if (bLocal_317)
			{
				if (!PED::IS_PED_INJURED(iLocal_132[0]))
				{
					func_888(&iLocal_366, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_132[0], iLocal_366, func_37(4), "Death_Steve", 1000f, -8f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_132[0], false, false);
				}
				if (iLocal_112[1] != 6)
				{
					func_887(1, 4, 1);
				}
			}
			func_33(17);
			iLocal_126 = STREAMING::STREAMVOL_CREATE_FRUSTUM(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), __LIB_3__::func_80(0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())), 500f, 12, 127);
			iLocal_320 = 0;
			iLocal_360 = MISC::GET_GAME_TIMER();
			if (!bLocal_4315 && !bLocal_4316)
			{
				iLocal_48 = 1;
			}
			else
			{
				iLocal_48 = 2;
			}
			break;
		case 1:
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_342);
			if (!PED::IS_PED_INJURED(iLocal_132[1]) && !iLocal_239[1])
			{
				if (!bLocal_208)
				{
					bLocal_208 = func_283("FINC1_SHOT", 0, 0, 0);
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_360 + 5800 || (iLocal_239[1] && MISC::GET_GAME_TIMER() >= iLocal_360 + 2500))
			{
				if (!iLocal_183)
				{
					iLocal_48 = 2;
				}
			}
			if (!iLocal_320)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_360 + 5500)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_320 = 1;
					}
				}
			}
			if (!iLocal_183)
			{
				if (__LIB_0__::func_500() && MISC::GET_GAME_TIMER() >= iLocal_359 + 1000)
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					iLocal_183 = 1;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_0__::func_366(0);
				__LIB_0__::func_325();
				iLocal_48 = 2;
			}
			break;
		case 2:
			RECORDING::REPLAY_STOP_EVENT();
			if (iLocal_183)
			{
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_133[iVar0]))
				{
					PED::SET_PED_ACCURACY(iLocal_133[iVar0], 0);
				}
				iVar0++;
			}
			if (STREAMING::STREAMVOL_IS_VALID(iLocal_126))
			{
				STREAMING::STREAMVOL_DELETE(iLocal_126);
			}
			func_42(17);
			iLocal_392 = MISC::GET_GAME_TIMER() + 3000;
			func_234(0, 1, 1, 0, 1, 0, 1000, 1);
			PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
			break;
	}
}

void func_1045()//Position - 0x9E91D
{
	struct<3> Var0;
	struct<3> Var1;
	var uVar2;
	struct<3> Var3;
	struct<3> Var4;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		ENTITY::GET_ENTITY_MATRIX(iLocal_139, &Var1, &Var0, &uVar2, &Var3);
		Var4 = { Var3 + Var0 * Vector(0.165f, 0.165f, 0.165f) + Var1 * Vector(0.169f, 0.169f, 0.169f) };
		GRAPHICS::DRAW_SHADOWED_SPOT_LIGHT(Var4, Var0, 255, 255, 255, 4f, 0.2f, 20f, 25f, 2.5f, 0);
	}
}

void func_1046(bool bParam0, bool bParam1)//Position - 0x9E984
{
	if (CAM::DOES_CAM_EXIST(iLocal_157))
	{
		CAM::DESTROY_CAM(iLocal_157, false);
	}
	iLocal_157 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", bParam0);
	CAM::RENDER_SCRIPT_CAMS(bParam1, false, 3000, true, false, 0);
}

int func_1047(char* sParam0)//Position - 0x9E9B9
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_245())
		{
			__LIB_0__::func_151(sParam0, -1);
			return 1;
		}
	}
	return 0;
}

void func_1048()//Position - 0x9E9DC
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_17__::func_341();
	func_980();
	if (!iLocal_182)
	{
		if (!iLocal_193[__LIB_17__::func_341()])
		{
			if (Local_108.f_1 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), func_598(__LIB_17__::func_341()), func_597(__LIB_17__::func_341()), false, false, 0))
				{
					PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_193[__LIB_17__::func_341()] = 1;
				}
			}
		}
		if (iLocal_43 == 0)
		{
			if (!bLocal_221)
			{
				if (bLocal_187[iVar0])
				{
					if (Local_108.f_1 == 0)
					{
						if (iVar0 != 0)
						{
							if ((!Global_96880[2] && !Global_96880[0]) && !Global_96880[1])
							{
								AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
								bLocal_221 = func_283("FINC1_STARGS", 0, 0, 0);
								if (bLocal_221)
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 7f, 4);
								}
							}
						}
					}
				}
			}
			else if (Local_108.f_1 == 0)
			{
				if (!iLocal_222)
				{
					if (iVar0 == 1)
					{
						AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
						iLocal_222 = func_283("FINC1_FENCM", 0, 0, 0);
					}
					else if (iVar0 == 2)
					{
						AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
						iLocal_222 = func_283("FINC1_TENCM", 0, 0, 0);
					}
				}
				if (iVar0 == 1)
				{
					if (!bLocal_223)
					{
						if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_1051(iVar0), 3000f, 3000f, 3000f, false, false, 0) || (iLocal_407 >= 0 && MISC::GET_GAME_TIMER() >= iLocal_407)) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_1051(iVar0), 600f, 600f, 600f, false, false, 0))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
							{
								AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
								__LIB_0__::func_221(&uLocal_418, 3);
								__LIB_0__::func_222(&uLocal_418, 3, 0, "LAMAR", 0, 1);
								bLocal_223 = __LIB_17__::func_508(&uLocal_418, 19, "FINC1AU", "FINC1_LCALL5", 8, 1, 0, 0, 0);
							}
						}
					}
				}
				else if (iVar0 == 2)
				{
					if (!bLocal_224)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_1051(iVar0), 3000f, 3000f, 3000f, false, false, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_1051(iVar0), 600f, 600f, 600f, false, false, 0))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__::func_75())
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_414)
								{
									AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
									__LIB_0__::func_221(&uLocal_418, 3);
									__LIB_0__::func_222(&uLocal_418, 3, 0, "nervousron", 0, 1);
									bLocal_224 = __LIB_17__::func_508(&uLocal_418, 20, "CHATCAU", "CHATC_RON06", 8, 1, 0, 0, 0);
								}
							}
							else
							{
								iLocal_414 = MISC::GET_GAME_TIMER() + 3000;
							}
						}
					}
				}
			}
			else
			{
				iLocal_222 = 1;
			}
			if (!iLocal_185)
			{
				if (func_970())
				{
					func_907();
				}
				if (Local_108.f_1 == 0)
				{
					if (func_270(0, 0, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_146))
						{
							func_253();
							func_252(0, 1, 1, 0);
							iLocal_146 = func_249(func_1051(iVar0), 1);
							if (HUD::DOES_BLIP_EXIST(iLocal_146))
							{
								HUD::SET_BLIP_SCALE(iLocal_146, 0.7f);
								HUD::SET_BLIP_COLOUR(iLocal_146, 1);
								HUD::SET_BLIP_ROUTE_COLOUR(iLocal_146, 1);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_146, "BLIP_270" /* GXT: Enemy */);
							}
						}
						if (!bLocal_187[iVar0])
						{
							if (iLocal_119[iVar0] != 1)
							{
								switch (iVar0)
								{
									case 0:
										sVar1 = "FC2_KILLSTR";
										break;
									case 1:
										sVar1 = "FC2_KILLTRI";
										break;
									case 2:
										sVar1 = "FC2_KILLSTE";
										break;
								}
								bLocal_187[iVar0] = func_247(sVar1, 1, 0);
							}
						}
						if (iLocal_110[iVar0] == 2)
						{
							if (func_1049())
							{
								switch (iVar0)
								{
									case 0:
										iLocal_198 = 1;
										func_288(2, 0, 0, 1, 0, 0, 0, 1);
										break;
									case 2:
										iLocal_197 = 1;
										func_288(1, 0, 0, 1, 0, 0, 0, 1);
										break;
									case 1:
										iLocal_199 = 1;
										func_288(3, 0, 0, 1, 0, 0, 0, 1);
										break;
									}
								}
							}
						}
				}
			}
			else
			{
				__LIB_17__::func_659();
			}
		}
	}
}

int func_1049()//Position - 0x9EDBF
{
	switch (__LIB_17__::func_341())
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -196.27f, -1515.16f, 29.62f, -226.52f, -1490.69f, 33f, 75f, false, true, 0))
			{
				return 1;
			}
			break;
		case 2:
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1695.534f, -1156.338f, 12f, -1574.942f, -1012.826f, 15f, 52f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1728.331f, -1128.913f, 12f, -1661.748f, -1049.736f, 15f, 55f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1741.41f, -1116.077f, 12f, -1792.803f, -1177.224f, 15f, 18f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1609.1046f, -1012.95776f, 12.01757f, 10f, 10f, 3f, false, true, 0))
			{
				return 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3007.114f, 114.438f, 10f, -3038.896f, 85.495f, 17.5f, 25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -3042.929f, 114.96f, 10f, -2973.122f, 58.09f, 15f, 40f, false, true, 0))
			{
				return 1;
			}
			else if (!PED::IS_PED_INJURED(Local_114[0 /*14*/]))
			{
				if ((PED::IS_TRACKED_PED_VISIBLE(Local_114[0 /*14*/]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[0 /*14*/], 100f, 100f, 100f, false, false, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114[0 /*14*/], 50f, 50f, 100f, false, true, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

Vector3 func_1051(int iParam0)//Position - 0x9F01E
{
	switch (iParam0)
	{
		case 0:
			return -203.5079f, -1510.437f, 31.6161f;
			break;
		case 1:
			return -3018.1008f, 85.4329f, 11.5978f;
			break;
		case 2:
			return -1662.81f, -1121.16f, 42.9496f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_1052()//Position - 0x9F081
{
	if (!iLocal_182)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!iLocal_236)
			{
				func_1053(0);
				switch (__LIB_17__::func_341())
				{
					case 0:
						func_33(3);
						break;
					case 2:
						if (iLocal_43 < 4)
						{
							func_33(6);
						}
						else if (iLocal_43 == 4)
						{
							func_33(9);
						}
						else if (iLocal_43 == 6)
						{
							func_33(10);
						}
						break;
					case 1:
						func_33(0);
						break;
				}
				iLocal_237 = 0;
				iLocal_236 = 1;
			}
		}
		else if (!iLocal_237)
		{
			func_1053(0);
			switch (__LIB_17__::func_341())
			{
				case 0:
					func_33(4);
					break;
				case 2:
					if (iLocal_43 < 4)
					{
						func_33(7);
					}
					break;
				case 1:
					func_33(1);
					break;
			}
			iLocal_236 = 0;
			iLocal_237 = 1;
		}
	}
}

void func_1053(bool bParam0)//Position - 0x9F15F
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			func_42(iVar0);
			iVar0++;
		}
	}
	else
	{
		func_42(0);
		func_42(1);
		func_42(3);
		func_42(4);
		func_42(6);
		func_42(7);
		func_42(9);
		func_42(10);
		func_42(11);
	}
}

void func_1054()//Position - 0x9F1B8
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			__LIB_0__::func_377(iVar1, 258);
			__LIB_0__::func_505(iVar1, 259);
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
		__LIB_0__::func_377(0, 258);
		__LIB_0__::func_505(0, 259);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 263);
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, true);
		if (iVar2 == func_370(3))
		{
			__LIB_0__::func_497(267, 1, 0);
		}
	}
}

void func_1057()//Position - 0x9F2D3
{
	int iVar0;
	switch (iLocal_122)
	{
		case 0:
			if (iLocal_43 < 4 && !Global_96880[2])
			{
				func_668(24);
				func_668(25);
				iLocal_122 = 1;
			}
			break;
		case 1:
			if (func_682())
			{
				STREAMING::REMOVE_IPL("ferris_finale_Anim");
				iLocal_142 = OBJECT::CREATE_OBJECT(func_74(24), 0f, 1f, 2f, true, true, false);
				OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(iLocal_142);
				func_1061();
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_142, 1000);
				iVar0 = 0;
				while (iVar0 < 16)
				{
					iLocal_138[iVar0] = OBJECT::CREATE_OBJECT(func_74(25), 0f, 1f, 2f, true, true, false);
					OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(iLocal_138[iVar0]);
					func_1059(iVar0, 1);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_138[iVar0], 1000);
					iVar0++;
				}
				iLocal_122 = 2;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
			{
				if (STREAMING::IS_IPL_ACTIVE("ferris_finale_Anim"))
				{
					STREAMING::REMOVE_IPL("ferris_finale_Anim");
				}
				if ((((Global_96880[2] || iLocal_43 >= 4) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_282(20), 350f, 350f, 350f, false, false, 0)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_142))
				{
					func_849();
					func_848();
					func_279(14);
					func_279(15);
					func_279(16);
					func_279(17);
					func_279(20);
					func_700(0);
					func_700(3);
					func_700(2);
					func_700(4);
					func_700(1);
					func_700(5);
					func_688(1);
					func_1058();
					iLocal_122 = 0;
				}
				else if (iLocal_233)
				{
					if (!iLocal_273)
					{
						if (!Global_96880[2])
						{
							if (iLocal_312)
							{
								fLocal_341 = (fLocal_341 + (-0.1f * SYSTEM::TIMESTEP()));
								if (fLocal_341 < -6f)
								{
									fLocal_341 = -6f;
								}
							}
							else
							{
								fLocal_341 = (fLocal_341 + (-0.25f * SYSTEM::TIMESTEP()));
								if (fLocal_341 < -2f)
								{
									fLocal_341 = -2f;
								}
							}
						}
						else
						{
							fLocal_341 = (fLocal_341 - (-0.25f * SYSTEM::TIMESTEP()));
							if (fLocal_341 >= 0f)
							{
								fLocal_341 = 0f;
								iLocal_273 = 1;
							}
						}
						fLocal_340 = (fLocal_340 + (fLocal_341 * SYSTEM::TIMESTEP()));
						if (fLocal_340 > 360f)
						{
							fLocal_340 = (fLocal_340 - 360f);
						}
						func_1061();
						iVar0 = 0;
						while (iVar0 < 16)
						{
							func_1059(iVar0, 0);
							iVar0++;
						}
					}
				}
			}
			else
			{
				func_1058();
			}
			break;
	}
}

void func_1058()//Position - 0x9F546
{
	int iVar0;
	STREAMING::REQUEST_IPL("ferris_finale_Anim");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
	{
		OBJECT::DELETE_OBJECT(&iLocal_142);
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_138[iVar0]));
		}
		iVar0++;
	}
	func_279(24);
	func_279(25);
	iLocal_122 = 0;
}

void func_1059(int iParam0, bool bParam1)//Position - 0x9F5A4
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[iParam0]))
	{
		Var0 = { func_1060(iParam0) };
		if (bParam1)
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_138[iParam0], Var0, true, false, false, true);
		}
		else
		{
			OBJECT::SLIDE_OBJECT(iLocal_138[iParam0], Var0, 1f, 1f, 1f, false);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_138[iParam0], true);
	}
}

Vector3 func_1060(int iParam0)//Position - 0x9F5FF
{
	float fVar0;
	fVar0 = ((360f / 16f) * IntToFloat(iParam0));
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_142, 0f, (15.3f * SYSTEM::COS(fVar0)), (15.3f * SYSTEM::SIN(fVar0)));
}

void func_1061()//Position - 0x9F638
{
	ENTITY::SET_ENTITY_COORDS(iLocal_142, func_282(20), true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_142, fLocal_340, 0f, 0f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_142, true);
}

void func_1062()//Position - 0x9F667
{
	func_1064();
	switch (iLocal_42)
	{
		case 0:
			break;
		case 1:
			if (__LIB_0__::func_223())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					func_81(__LIB_17__::func_341(), 0);
				}
				iLocal_180 = 1;
				iLocal_313 = 1;
				func_1078();
			}
			break;
	}
}

void func_1064()//Position - 0x9F6E1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	if (!iLocal_182)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_49[iVar0]))
				{
					iVar1 = iVar0;
					if (iVar1 != __LIB_17__::func_341())
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_149[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_149[iVar0]));
						}
						if (__LIB_0__::func_501("FC1_GOMT", 0, 0))
						{
							func_252(1, 1, 0, 0);
						}
						switch (iVar1)
						{
							case 0:
								func_829(0);
								break;
							case 2:
								func_829(2);
								break;
							case 1:
								func_829(1);
								break;
							}
						}
					}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_134)
		{
			iVar2 = iVar0;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[iVar2]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_134[iVar2], false))
				{
					func_277();
					switch (iVar2)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							break;
						case 3:
							if (iLocal_43 == 6)
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_134[iVar2], false))
								{
									func_829(28);
								}
								else
								{
									func_829(4);
								}
							}
							break;
					}
				}
				else
				{
					bVar4 = true;
					switch (iVar2)
					{
						case 0:
							bVar4 = false;
							break;
						case 1:
							bVar4 = false;
							break;
						case 2:
							bVar4 = false;
							break;
						case 3:
							if (iLocal_43 == 6)
							{
								iVar3 = 2;
							}
							else
							{
								bVar4 = false;
							}
							break;
					}
					if (bVar4)
					{
						if (__LIB_17__::func_341() == iVar3)
						{
							if (Local_108.f_1 == 0)
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_134[iVar2], 0) > 100f)
								{
									switch (iVar2)
									{
										case 0:
											func_829(14);
											break;
										case 1:
											func_829(11);
											break;
										case 2:
											func_829(8);
											break;
										case 3:
											func_829(5);
											break;
										}
								}
								if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_134[iVar2], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_134[iVar2], 2, 30000)) || (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_134[iVar2], 1, 40000) && iVar2 != 0)) || (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_134[iVar2], 0, 7000) && iVar2 != 0))
								{
									func_277();
									switch (iVar2)
									{
										case 0:
											func_829(15);
											break;
										case 1:
											func_829(12);
											break;
										case 2:
											func_829(9);
											break;
										case 3:
											func_829(6);
											break;
										}
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

void func_1065(bool bParam0)//Position - 0x9F976
{
	int iVar0;
	switch (iLocal_46)
	{
		case 0:
			if (func_1066() || bParam0)
			{
				if (bParam0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = iLocal_43 + 1;
				}
				func_711(iVar0, 0, 1);
				func_707(iVar0, 0, 1);
				func_703(iVar0, 0, 1);
				func_699(iVar0, 0, 1);
				func_695(iVar0, 0, 1);
				func_691(iVar0, 0, 1);
				func_687(iVar0, 0, 1);
				func_683(iVar0, 0, 1);
				__LIB_17__::func_662(0);
				iLocal_46 = 1;
			}
			break;
		case 1:
			if ((((((((func_682() && func_680()) && func_678()) && func_677()) && func_676()) && func_675()) && func_673()) && func_672()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iLocal_46 = 2;
			}
			break;
	}
}

int func_1066()//Position - 0x9FA52
{
	switch (iLocal_43)
	{
		case 4:
			if (iLocal_182)
			{
				return 1;
			}
			break;
		case 5:
			if (iLocal_182)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1067()//Position - 0x9FA88
{
	struct<3> Var0;
	int iVar1;
	switch (iLocal_41)
	{
		case 0:
			if (BitTest(Global_113386.f_10016.f_25, 4))
			{
				if (__LIB_17__::func_341() != 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					}
					while (!func_646(&(iLocal_49[1]), 1, Var0, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					while (!__LIB_32__::func_86(&iLocal_49, 1))
					{
						SYSTEM::WAIT(0);
					}
					while (!func_600(&iLocal_49, 1, 0, 0))
					{
						SYSTEM::WAIT(0);
					}
					iVar1 = 0;
					while (iVar1 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar1]))
						{
							PED::DELETE_PED(&(iLocal_49[iVar1]));
						}
						iVar1++;
					}
				}
			}
			MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 4);
			Global_96884 = 0;
			func_252(1, 1, 1, 0);
			func_1077(1);
			func_1076(0);
			func_1075(1);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("extrasunny", 30f);
			if (!__LIB_0__::func_323())
			{
				iLocal_357 = 0;
			}
			else
			{
				iLocal_357 = Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_330_MF_MISSION_ARRAY[27 /*6*/].f_1 + 1;
			}
			iLocal_586 = PED::ADD_SCENARIO_BLOCKING_AREA(-254.15f, -1550.78f, -10f, -168.97f, -1472.22f, 100f, false, true, true, true);
			iLocal_587 = PED::ADD_SCENARIO_BLOCKING_AREA(-3063.049f, 98.93727f, -10f, -2966.6133f, 133.8536f, 28f, false, true, true, true);
			iLocal_588 = PED::ADD_SCENARIO_BLOCKING_AREA(-2647.4f, 1867f, 150f, -2637.9f, 1875.2f, 165.2f, false, true, true, true);
			iLocal_589 = PED::ADD_SCENARIO_BLOCKING_AREA(-2665.3113f, 1856.0164f, 142.52293f, -2587.7314f, 1923.1003f, 170.43306f, false, true, true, true);
			iLocal_590 = PED::ADD_SCENARIO_BLOCKING_AREA(-2558.8586f, 1913.6655f, 157.84938f, -2551.9875f, 1917.0747f, 177.53345f, false, true, true, true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			Global_113386.f_10049.f_100 = 3;
			func_1068();
			break;
		case 4:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			return 1;
			break;
	}
	return 0;
}

void func_1068()//Position - 0x9FCA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	PED::ADD_RELATIONSHIP_GROUP("Triad group", &iLocal_583);
	PED::ADD_RELATIONSHIP_GROUP("Merryweather group", &iLocal_584);
	PED::ADD_RELATIONSHIP_GROUP("Gangster group", &iLocal_585);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_584);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_584, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_583);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_583, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_585);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_585, joaat("PLAYER"));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!__LIB_0__::func_323())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
			{
				iLocal_134[0] = Global_96938[2];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_134[0], true, true);
				Global_96938[2] = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
			{
				iLocal_49[2] = Global_96938.f_9[0];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_49[2], true, true);
				Global_96938.f_9[0] = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
			{
				iLocal_49[0] = Global_96938.f_9[1];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_49[0], true, true);
				Global_96938.f_9[1] = 0;
			}
			func_288(0, 1, 1, 1, 1, 1, 1, 1);
			iLocal_241 = 0;
		}
		else if (func_1070())
		{
			if ((iLocal_43 == 1 || iLocal_43 == 3) || iLocal_43 == 2)
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar1 = __LIB_0__::func_344();
			iVar2 = iVar1;
			if ((iVar2 == 1 || iVar2 == 3) || iVar2 == 2)
			{
				iVar0 = 0;
			}
			if (iVar2 == 0)
			{
				if ((Global_96880[2] || Global_96880[1]) || Global_96880[0])
				{
					iLocal_241 = 1;
				}
				else
				{
					iLocal_241 = 0;
				}
			}
			func_288(iVar1, 1, 1, 1, 0, 1, 1, iVar0);
		}
		if (iVar0 && !bLocal_181)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
				SCRIPT::SHUTDOWN_LOADING_SCREEN();
			}
		}
	}
	iLocal_41 = 4;
}

int func_1070()//Position - 0x9FED0
{
	int iVar0;
	if (__LIB_0__::func_323())
	{
		if (Global_94618 == 1)
		{
			switch (__LIB_0__::func_344())
			{
				case 3:
					Global_96880[1] = 1;
					break;
				case 1:
					Global_96880[2] = 1;
					break;
				case 2:
					Global_96880[0] = 1;
					break;
			}
			switch (__LIB_0__::func_344())
			{
				case 0:
				case 3:
				case 1:
				case 2:
					if (!Global_96880[1])
					{
						iVar0 = 3;
					}
					else if (!Global_96880[2])
					{
						iVar0 = 1;
					}
					else if (!Global_96880[0])
					{
						iVar0 = 2;
					}
					else
					{
						iVar0 = 4;
					}
					break;
				case 4:
					iVar0 = 5;
					break;
				case 5:
					iVar0 = 6;
					break;
				case 6:
					iVar0 = 6;
					bLocal_181 = true;
					break;
			}
			func_1071();
			func_288(iVar0, 1, 1, 1, 0, 1, 1, 0);
			if (!bLocal_181)
			{
				if ((!iVar0 == 3 && !iVar0 == 1) && !iVar0 == 2)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_1071()//Position - 0x9FFE8
{
	func_253();
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
		}
	}
	func_1074();
	__LIB_17__::func_645(&iLocal_49);
	__LIB_17__::func_103(&uLocal_21, 0);
	__LIB_17__::func_661(&uLocal_21);
	__LIB_0__::func_345(&uLocal_21, 0, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_671(0);
	func_1072();
}

void func_1072()//Position - 0xA007A
{
	int iVar0;
	__LIB_0__::func_753();
	__LIB_17__::func_57();
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	func_1053(1);
	PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	func_1058();
	iLocal_49.f_18[0] = 0;
	iLocal_49.f_18[1] = 0;
	iLocal_49.f_18[2] = 0;
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_126))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_126);
	}
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_127))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_127);
	}
	SYSTEM::WAIT(100);
	AUDIO::STOP_SOUND(iLocal_382);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_49[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_130))
	{
		PED::DELETE_PED(&iLocal_130);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_131))
	{
		PED::DELETE_PED(&iLocal_131);
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_114[iVar0 /*14*/]))
		{
			PED::DELETE_PED(&(Local_114[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*14*/]))
		{
			PED::DELETE_PED(&(Local_113[iVar0 /*14*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_132[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_132[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_115[iVar0 /*16*/]))
		{
			PED::DELETE_PED(&(Local_115[iVar0 /*16*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_133[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_133[iVar0]));
		}
		iVar0++;
	}
	func_848();
	iVar0 = 0;
	while (iVar0 < iLocal_134)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_134[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_134[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_134[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_135[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_135[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_135[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_136[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_136[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		OBJECT::DELETE_OBJECT(&iLocal_139);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
	{
		OBJECT::DELETE_OBJECT(&iLocal_140);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		OBJECT::DELETE_OBJECT(&iLocal_141);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
	{
		OBJECT::DELETE_OBJECT(&iLocal_142);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
	{
		OBJECT::DELETE_OBJECT(&iLocal_143);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
	{
		OBJECT::DELETE_OBJECT(&iLocal_144);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_145))
	{
		OBJECT::DELETE_OBJECT(&iLocal_145);
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_138[iVar0]));
		}
		iVar0++;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_155))
	{
		CAM::DESTROY_CAM(iLocal_155, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_157))
	{
	}
	if (CAM::DOES_CAM_EXIST(iLocal_158))
	{
		CAM::DESTROY_CAM(iLocal_158, false);
	}
	MISC::CLEAR_AREA(func_282(0), 10000f, true, false, false, false);
}

void func_1074()//Position - 0xA03CD
{
	iLocal_49.f_18[0] = 0;
	iLocal_49.f_18[1] = 0;
	iLocal_49.f_18[2] = 0;
}

void func_1075(bool bParam0)//Position - 0xA03ED
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		switch (iVar0)
		{
			case 0:
				Var1 = { -1676.0637f, -1054.8746f, 10.05305f };
				Var2 = { -1441.9254f, -773.8369f, 31.43933f };
				break;
		}
		if (bParam0)
		{
			PATHFIND::SET_ROADS_IN_AREA(Var1, Var2, false, true);
		}
		else
		{
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Var1, Var2, 1);
		}
		iVar0++;
	}
	PATHFIND::SET_PED_PATHS_IN_AREA(-227.33f, -1525.38f, 10.58f, -184.8f, -1503.12f, 51.22f, !bParam0, 0);
}

void func_1076(bool bParam0)//Position - 0xA0486
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-3042.67f, 70.47f, 0.8f, -2993.63f, 104.81f, 41.62f, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1612.8573f, 5140.958f, -0.46138f, -1545.96f, 5192.4106f, 100f, bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-195.2724f, -1520.4767f, 27.33081f, -172.58878f, -1506.3273f, 36.9062f, bParam0, true);
}

void func_1077(bool bParam0)//Position - 0xA04FD
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_74(4), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_74(6), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_74(5), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_74(7), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_74(11), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_74(12), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_74(13), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tornado2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tornado3"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tornado4"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("voodoo2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("granger"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cavalcade2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("landstalker"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police2"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police3"), bParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_74(10), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_74(19), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_74(18), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_74(14), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_74(3), bParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_74(21), bParam0);
}

void func_1078()//Position - 0xA062B
{
	int iVar0;
	func_252(1, 1, 1, 0);
	func_1053(1);
	CLOCK::PAUSE_CLOCK(false);
	if (iLocal_313)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
		{
			OBJECT::DELETE_OBJECT(&iLocal_142);
		}
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_138[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_138[iVar0]));
			}
			iVar0++;
		}
	}
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
	__LIB_17__::func_667(64, 0, !iLocal_313, 1, 0);
	AUDIO::TRIGGER_MUSIC_EVENT("FINC2_FAIL");
	__LIB_0__::func_429();
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	__LIB_17__::func_171(14, 0, 1);
	__LIB_17__::func_171(15, 0, 1);
	AUDIO::STOP_SOUND(iLocal_382);
	AUDIO::RELEASE_SOUND_ID(iLocal_382);
	MISC::WATER_OVERRIDE_SET_STRENGTH(0f);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_126))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_126);
	}
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_127))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_127);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), -1, true);
			PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), -1);
		}
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
			{
				if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
		}
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iLocal_180)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[1]))
		{
			PED::DELETE_PED(&(iLocal_49[1]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[0]))
		{
			PED::DELETE_PED(&(iLocal_49[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_49[2]))
		{
			PED::DELETE_PED(&(iLocal_49[2]));
		}
	}
	func_1079();
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
	CUTSCENE::REMOVE_CUTSCENE();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	func_1077(0);
	func_1075(0);
	func_1076(1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_586, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_587, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_588, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_589, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_590, false);
	__LIB_0__::func_671(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1079()//Position - 0xA0863
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	}
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	__LIB_0__::func_671(0);
	__LIB_17__::func_103(&uLocal_21, 0);
	__LIB_17__::func_661(&uLocal_21);
	__LIB_0__::func_345(&uLocal_21, 0, 0);
}

void func_1085()//Position - 0xA4D24
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
				if (!func_832(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_17__::func_505();
		}
	}
}

