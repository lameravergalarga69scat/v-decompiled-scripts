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
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = -1;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 1000;
	var uLocal_58 = 1000;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	int iLocal_83 = 0;
	var uLocal_84 = 16;
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
	char cLocal_250[24] = "";
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	int iLocal_254 = 0;
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
	struct<5> Local_288[30];
	int iLocal_289 = 0;
	struct<6> Local_290[60];
	var uLocal_291 = 0;
	int iLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_310 = 0;
	int iLocal_311[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_312 = 0;
	var uLocal_313 = 10;
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
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	struct<21> Local_332 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_346 = 4;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 4;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 4;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 4;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 4;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 4;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 4;
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
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	struct<40> Local_393[55];
	struct<40> Local_394[40];
	struct<40> Local_395[3];
	struct<19> Local_396[35];
	var uLocal_397 = 0;
	struct<10> Local_398[16];
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int* iLocal_415 = NULL;
	int iLocal_416 = 0;
	bool bLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	float fLocal_431 = 0f;
	float fLocal_432 = 0f;
	float fLocal_433 = 0f;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437[5] = { 0, 0, 0, 0, 0 };
	int iLocal_438 = 0;
	var uLocal_439[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_440 = 0;
	int iLocal_441[5] = { 0, 0, 0, 0, 0 };
	int iLocal_442[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_443[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_444 = 5;
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
	struct<3> Local_460 = { 0, 0, 0 } ;
	struct<3> Local_461 = { 0, 0, 0 } ;
	struct<3> Local_462 = { 0, 0, 0 } ;
	struct<3> Local_463 = { 0, 0, 0 } ;
	int iLocal_464[3] = { 0, 0, 0 };
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	int iLocal_470[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477[4] = { 0, 0, 0, 0 };
	int* iLocal_478 = NULL;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_484 = 0;
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
	var uLocal_495 = 4;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	int iLocal_502 = 0;
	var uLocal_503 = 0;
	int iLocal_504 = 0;
	var uLocal_505 = 3;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	var uLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	int iLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	struct<20> Local_539 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	bool bLocal_558 = 0;
	float fLocal_559 = 0f;
	struct<3> Local_560 = { 0, 0, 0 } ;
	var uLocal_561 = 2;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	struct<3> Local_569 = { 0, 0, 0 } ;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	float fLocal_572 = 0f;
	float fLocal_573 = 0f;
	float fLocal_574 = 0f;
	float fLocal_575 = 0f;
	float fLocal_576 = 0f;
	float fLocal_577 = 0f;
	float fLocal_578 = 0f;
	float fLocal_579 = 0f;
	float fLocal_580 = 0f;
	float fLocal_581 = 0f;
	float fLocal_582 = 0f;
	float fLocal_583 = 0f;
	struct<3> Local_584 = { 0, 0, 0 } ;
	struct<3> Local_585 = { 0, 0, 0 } ;
	struct<3> Local_586 = { 0, 0, 0 } ;
	struct<3> Local_587 = { 0, 0, 0 } ;
	struct<3> Local_588 = { 0, 0, 0 } ;
	struct<3> Local_589 = { 0, 0, 0 } ;
	struct<3> Local_590 = { 0, 0, 0 } ;
	struct<3> Local_591 = { 0, 0, 0 } ;
	struct<3> Local_592 = { 0, 0, 0 } ;
	struct<3> Local_593 = { 0, 0, 0 } ;
	float fLocal_594 = 0f;
	float fLocal_595 = 0f;
	struct<3> Local_596 = { 0, 0, 0 } ;
	struct<3> Local_597 = { 0, 0, 0 } ;
	struct<3> Local_598 = { 0, 0, 0 } ;
	struct<3> Local_599 = { 0, 0, 0 } ;
	struct<3> Local_600 = { 0, 0, 0 } ;
	struct<3> Local_601 = { 0, 0, 0 } ;
	struct<3> Local_602 = { 0, 0, 0 } ;
	struct<3> Local_603 = { 0, 0, 0 } ;
	struct<3> Local_604 = { 0, 0, 0 } ;
	struct<3> Local_605 = { 0, 0, 0 } ;
	struct<3> Local_606 = { 0, 0, 0 } ;
	struct<3> Local_607 = { 0, 0, 0 } ;
	struct<3> Local_608 = { 0, 0, 0 } ;
	struct<3> Local_609 = { 0, 0, 0 } ;
	struct<3> Local_610 = { 0, 0, 0 } ;
	struct<3> Local_611 = { 0, 0, 0 } ;
	var uLocal_612 = 0;
	int iLocal_613 = 0;
	float fLocal_614 = 0f;
	float fLocal_615 = 0f;
	float fLocal_616 = 0f;
	int iLocal_617 = 0;
	struct<15> Local_618 = { 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_619 = 8;
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
	var uLocal_640 = 8;
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
	var uLocal_758 = 5;
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
	var uLocal_770 = 1065353216;
	var uLocal_771 = 1065353216;
	var uLocal_772 = 1036831949;
	var uLocal_773 = 1000593162;
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
	var uLocal_855 = 5;
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
	var uLocal_867 = 1065353216;
	var uLocal_868 = 1065353216;
	var uLocal_869 = 1036831949;
	var uLocal_870 = 1000593162;
	struct<19> Local_871[2];
	struct<6> Local_872 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_873 = 0;
	var uLocal_874 = 1092616192;
	var uLocal_875 = 1101004800;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 3;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	struct<5> Local_892 = { 0, 0, 0, 0, 0 } ;
	struct<27> Local_893[15];
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 10;
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
	float fLocal_930 = 0f;
	int iLocal_931 = 0;
	struct<1233> Local_932 = { 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 20, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 16, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_933 = -1082130432;
	var uLocal_934 = -1082130432;
	var uLocal_935 = 1;
	var uLocal_936 = 1;
	var uLocal_937 = 1;
	var uLocal_938 = -1;
	var uLocal_939 = -1;
	var uLocal_940 = -1;
	float fLocal_941 = 0f;
	float fLocal_942 = 0f;
	float fLocal_943 = 0f;
	float fLocal_944 = 0f;
	float fLocal_945 = 0f;
	int iLocal_946 = 0;
	float fLocal_947 = 0f;
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	struct<3> Local_953 = { 0, 0, 0 } ;
	int iLocal_954 = 0;
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
	char* sLocal_965 = NULL;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	char* sLocal_975 = NULL;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	var uLocal_980 = 3;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	struct<3> Local_986 = { 0, 0, 0 } ;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	struct<3> Local_991 = { 0, 0, 0 } ;
	struct<3> Local_992 = { 0, 0, 0 } ;
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
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	int iLocal_1008 = 0;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
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
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_60 = 1f;
	iLocal_254 = -1;
	sLocal_404 = "missbigscore2big_5";
	sLocal_405 = "missbigscore2big_6";
	sLocal_406 = "missbigscore2big_7_p2";
	fLocal_431 = 4f;
	fLocal_432 = 6f;
	fLocal_433 = -6f;
	Local_460 = { 486.5248f, -3201.5293f, 39.754f };
	Local_461 = { 491.3913f, -3408.279f, 0.5384f };
	Local_463 = { 527.26f, -3164.78f, -0.6f };
	iLocal_529 = 3;
	iLocal_554 = AUDIO::GET_SOUND_ID();
	iLocal_555 = AUDIO::GET_SOUND_ID();
	iLocal_556 = AUDIO::GET_SOUND_ID();
	iLocal_557 = AUDIO::GET_SOUND_ID();
	bLocal_558 = true;
	Local_569 = { 488.4018f, -3159.7063f, 5f };
	fLocal_572 = 5.5f;
	fLocal_573 = -7.6f;
	fLocal_574 = -4.8f;
	fLocal_575 = -14f;
	fLocal_576 = 15f;
	fLocal_577 = -76.6f;
	fLocal_578 = 5f;
	fLocal_579 = 5f;
	fLocal_580 = 2f;
	fLocal_581 = 5f;
	fLocal_582 = 5f;
	fLocal_583 = 2f;
	Local_584 = { -15.1069f, -25.8024f, 8.8412f };
	Local_585 = { -15.1064f, -25.8022f, 8.841f };
	Local_586 = { -13.6553f, -23.6718f, 7.3063f };
	Local_587 = { -7.4302f, -25.8017f, 11.759f };
	Local_588 = { -6.4453f, -23.4199f, 10.2238f };
	Local_589 = { -13.6548f, -23.6745f, 8.3039f };
	Local_590 = { -15.1069f, -25.5991f, -10f };
	Local_591 = { -13.6548f, -23.1884f, -10.5f };
	Local_592 = { -1.512f, 3f, -3.678f };
	Local_593 = { -89f, 0f, -90f };
	fLocal_594 = 100f;
	fLocal_595 = 45.0193f;
	Local_596 = { -0.6f, -0.7f, -0.3f };
	Local_597 = { -0.6f, -0.7f, 0.2f };
	Local_598 = { 0.6f, -0.7f, -0.3f };
	Local_599 = { 0.6f, -0.7f, 0.2f };
	Local_600 = { -0.6f, 0.7f, -0.3f };
	Local_601 = { -0.6f, 0.7f, 0.2f };
	Local_602 = { 0.6f, 0.7f, -0.3f };
	Local_603 = { 0.6f, 0.7f, 0.2f };
	Local_604 = { 2.6f, 0.05f, 0.3f };
	Local_605 = { 2.65f, -0.05f, 0.2f };
	Local_606 = { 2.6f, 0.05f, 0.3f };
	Local_607 = { 2.65f, 0.05f, 0.2f };
	Local_608 = { -2.6f, 0.05f, 0.3f };
	Local_609 = { -2.65f, -0.05f, 0.2f };
	Local_610 = { -2.6f, 0.05f, 0.3f };
	Local_611 = { -2.65f, 0.05f, 0.2f };
	iLocal_613 = 120;
	fLocal_614 = 3.5f;
	fLocal_615 = 2f;
	fLocal_616 = 1.3f;
	fLocal_930 = 25f;
	fLocal_941 = 15f;
	fLocal_942 = 0.2f;
	fLocal_943 = 10f;
	fLocal_944 = 0f;
	fLocal_945 = 0f;
	fLocal_947 = 0.18f;
	sLocal_965 = "D2BAUD";
	iLocal_1008 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_969();
		AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
		func_957(1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (iLocal_491)
		{
		}
		func_954();
		func_929();
		func_928();
		__LIB_0__::func_467();
		func_925();
		if (iLocal_894 > 3)
		{
		}
		if (iLocal_894 > 5 || iLocal_894 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_396[1 /*19*/], false, -190f, -190f, -190f);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_396[1 /*19*/], false, -190f, -190f, -190f);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (func_924("STABALISE"))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
					{
						VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], 0, fLocal_433);
						func_921("STABALISE", 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
				{
					VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], Local_396[1 /*19*/], fLocal_433);
					func_921("STABALISE", 1);
				}
			}
		}
		if (iLocal_894 > 3 && iLocal_894 < 6)
		{
			if (func_924("SEE THE PLANE"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[26 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[26 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[26 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[26 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_396[26 /*19*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[10 /*40*/]))
								{
									PED::DELETE_PED(&(Local_394[10 /*40*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_02"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[30 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[30 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[30 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[30 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_396[30 /*19*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[11 /*40*/]))
								{
									PED::DELETE_PED(&(Local_394[11 /*40*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_02"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[31 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[31 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[31 /*19*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[31 /*19*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_396[31 /*19*/]));
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[12 /*40*/]))
								{
									PED::DELETE_PED(&(Local_394[12 /*40*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Pilot_02"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
							}
						}
					}
				}
			}
			if (func_924("SEE THE SHIPS"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[27 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[27 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[27 /*19*/]) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_396[27 /*19*/], 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[27 /*19*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[7 /*40*/]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_394[7 /*40*/]));
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_396[27 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(27, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[28 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[28 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[28 /*19*/]) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_396[28 /*19*/], 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[28 /*19*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[8 /*40*/]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_394[8 /*40*/]));
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_396[28 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(28, "DHF2");
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[29 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[29 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[29 /*19*/]) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_396[29 /*19*/], 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[29 /*19*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_394[9 /*40*/]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_394[9 /*40*/]));
								}
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_396[29 /*19*/]));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dinghy"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
								VEHICLE::REMOVE_VEHICLE_RECORDING(29, "DHF2");
							}
						}
					}
				}
			}
		}
		switch (iLocal_894)
		{
			case 0:
				func_902();
				break;
			case 1:
				func_881();
				break;
			case 2:
				func_872();
				break;
			case 3:
				func_867();
				break;
			case 4:
				func_861();
				break;
			case 5:
				func_859();
				break;
			case 6:
				func_846();
				break;
			case 7:
				func_839();
				break;
			case 8:
				func_833();
				break;
			case 9:
				func_691();
				break;
			case 10:
				func_279();
				break;
			case 11:
				func_221();
				break;
			case 12:
				func_55();
				break;
			case 13:
				func_30();
				break;
			case 14:
				func_3();
				break;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 621);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 625);
			}
			else
			{
				__LIB_0__::func_505(0, 625);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			__LIB_0__::func_377(Local_396[1 /*19*/], 626);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			__LIB_0__::func_377(Local_396[0 /*19*/], 627);
		}
	}
}

void func_3()//Position - 0xA4D
{
	char* sVar0;
	int iVar1;
	switch (iLocal_896)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FAILED";
			break;
		case 1:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_TREVDEAD";
			break;
		case 6:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_TREVLEFT";
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MICHDEAD";
			break;
		case 7:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MICHLEFT";
			break;
		case 3:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FRANDEAD";
			break;
		case 8:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FRANLEFT";
			break;
		case 5:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FLOYDDEAD";
			break;
		case 4:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_WADEDEAD";
			break;
		case 13:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_FABANCREW";
			break;
		case 9:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_HELIDEAD";
			break;
		case 10:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_HELISTUCK";
			break;
		case 12:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_SUBDEAD";
			break;
		case 11:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MCARDEAD";
			break;
		case 14:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_CARGOAB";
			break;
		case 15:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_BANKALERT";
			break;
		case 16:
			HUD::CLEAR_PRINTS();
			sVar0 = "DS2_MERRYWF";
			break;
	}
	AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
	if (((((iLocal_895 == 6 || iLocal_895 == 7) || iLocal_895 == 5) || iLocal_895 == 8) || iLocal_895 == 4) || iLocal_895 == 9)
	{
		__LIB_0__::func_507(-1577.8319f, 5175.624f, 18.5209f, 130.8145f);
		__LIB_14__::func_555(-1574.9478f, 5169.657f, 18.5775f, 163.3193f);
	}
	if (((iLocal_895 == 10 || iLocal_895 == 11) || iLocal_895 == 3) || iLocal_895 == 12)
	{
		__LIB_0__::func_507(1745.9387f, 3292.6257f, 40.1041f, 182.7365f);
		__LIB_14__::func_555(1756.6458f, 3283.6611f, 40.1061f, 274.9329f);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("annihilator") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("cargobob3")) || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("submersible"))
		{
		}
	}
	func_8(sVar0);
	__LIB_0__::func_364(38, 1);
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	func_957(1);
}

void func_8(char* sParam0)//Position - 0xDC5
{
	__LIB_0__::func_381(sParam0);
	func_9(0);
}

void func_9(int iParam0)//Position - 0xDD8
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_10(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_10(int iParam0)//Position - 0xE1D
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
	func_11(&(Global_113386.f_2363.f_539), iVar1);
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

void func_11(var uParam0, int iParam1)//Position - 0xF2D
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
			if (!func_13(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_13(int iParam0, var uParam1, float fParam2)//Position - 0x1101
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
			return func_13(8, uParam1, fParam2);
			break;
		case 10:
			return func_13(8, uParam1, fParam2);
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

void func_30()//Position - 0x1E7A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_16__::func_878(1))
	{
		__LIB_16__::func_866(1, __LIB_16__::func_594(1, iVar0), 1);
		iVar0++;
	}
	__LIB_16__::func_849(1, 10000000);
	__LIB_16__::func_877(1, 10000000);
	__LIB_16__::func_874(7, 0);
	__LIB_0__::func_526(0, 0);
	func_957(1);
}

void func_55()//Position - 0x24B0
{
	switch (iLocal_517)
	{
		case 0:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RETURN_TO_AIRSTRIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_RETURN_TO_AIRSTRIP");
			}
			__LIB_0__::func_544(94, 1, 0, 1, 0);
			iLocal_471 = 0;
			__LIB_0__::func_325();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			__LIB_31__::func_967();
			__LIB_38__::func_768(10, "Closing Cutscene", 0, 0, 0, 1);
			iLocal_471 = 0;
			iLocal_537 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 0f, 4);
			iLocal_517++;
			break;
		case 1:
			if (__LIB_31__::func_967())
			{
				func_56();
				iLocal_517++;
			}
			break;
		case 2:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_517 = 0;
			iLocal_894 = 13;
			break;
	}
}

void func_56()//Position - 0x2569
{
	iLocal_485 = 0;
	iLocal_487 = 0;
	iLocal_494 = 1;
	iLocal_486 = 0;
	while (iLocal_494)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeist2B", 0);
		if (iLocal_485 == 0)
		{
			if (iLocal_488)
			{
				iLocal_488 = 0;
			}
			else if (iLocal_487 == 0)
			{
				iLocal_494 = 1;
				__LIB_0__::func_544(94, 1, 0, 1, 0);
				CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
				iLocal_1015 = 0;
				iLocal_489 = 0;
				iLocal_487++;
			}
			else if (iLocal_487 == 1)
			{
				if (__LIB_0__::func_90())
				{
					if (!PED::IS_PED_INJURED(iLocal_414))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_414, "Wade", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_415))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_415, "Lester", 1, 0, 0);
					}
					if (__LIB_13__::func_741(0, 0) == joaat("tailgater"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[4 /*19*/], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_396[4 /*19*/], "michaels_car", 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "showroom_car", 3, joaat("premier"), 0);
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[4 /*19*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_396[4 /*19*/], "Showroom_Car", 1, 0, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michaels_car", 3, joaat("tailgater"), 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_346[0], "Michael", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_346[2], "Trevor", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_346[1]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_346[1], false))
						{
							ENTITY::DETACH_ENTITY(iLocal_346[1], true, true);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_346[1], "Franklin", 1, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::DETACH_ENTITY(Local_396[1 /*19*/], true, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_396[1 /*19*/], "Submarine", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_396[0 /*19*/], "FBI_5_Heli", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], false, false, false);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
						PED::SET_ENABLE_SCUBA(PLAYER::PLAYER_PED_ID(), false);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						PED::REMOVE_PED_HELMET(iLocal_346[2], true);
						PED::SET_ENABLE_SCUBA(iLocal_346[2], false);
					}
					HUD::CLEAR_HELP(true);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					iLocal_486 = 0;
					iLocal_487 = 0;
					iLocal_485 = 1;
				}
			}
		}
		if (iLocal_485 == 1)
		{
			if (!iLocal_1015)
			{
				iLocal_1017 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FBI_5_Heli", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1017))
				{
					iLocal_1016 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iLocal_1017);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1016, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1016, false, false, false);
						iLocal_1015 = 1;
					}
				}
			}
			if (iLocal_489 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					if (__LIB_14__::func_466() != 2)
					{
						__LIB_16__::func_896(&iLocal_346, 2);
						__LIB_37__::func_936(&iLocal_346, 1, 1, 1);
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[0], iLocal_391);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], false, false, false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], false, false, false);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						PED::REMOVE_PED_HELMET(iLocal_346[2], true);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						PED::SET_ENABLE_SCUBA(iLocal_346[2], false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_442[1]));
					}
					iLocal_489 = 1;
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 75000)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
				if (!iLocal_486 && iLocal_489 == 1)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						iLocal_486 = 1;
					}
				}
				if (iLocal_472 == 1 && iLocal_473 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Showroom_Car", 0)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Showroom_Car", 0)), false))
						{
							VEHICLE::SET_VEHICLE_COLOURS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Showroom_Car", 0)), iLocal_429, iLocal_430);
							iLocal_473 = 1;
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), __LIB_16__::func_879(0), 0f);
				__LIB_6__::func_359(PLAYER::PLAYER_PED_ID(), 30000, 0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
				{
					PED::DELETE_PED(&(iLocal_346[1]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
				{
					PED::DELETE_PED(&(iLocal_346[0]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FBI_5_Heli", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_396[0 /*19*/]));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Submarine", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_396[1 /*19*/], 1763.7795f, 3289.0815f, 41.8658f, false, false, true);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_489 == 1)
			{
				while (CAM::IS_SCREEN_FADING_OUT())
				{
					SYSTEM::WAIT(0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_485 = 2;
			}
		}
		if (iLocal_485 == 2)
		{
			if (iLocal_486)
			{
				RECORDING::REPLAY_CANCEL_EVENT();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, true);
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_487 = 0;
			iLocal_494 = 0;
			iLocal_485 = 0;
		}
		if (iLocal_485 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, true);
			iLocal_486 = 1;
			iLocal_485 = 1;
		}
	}
}

void func_221()//Position - 0x15ECE
{
	CAM::SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(true);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1750.6334f, 3285.0278f, 40.0871f, 250f, 250f, 130f, false, true, 0))
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_396[0 /*19*/], 0f);
		}
		else
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_396[0 /*19*/], 1f);
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1754.4716f, 3283.0715f, 40.0925f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 300f)
	{
		if (iLocal_1014 == 0)
		{
			iLocal_1014 = 1;
			CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
		}
	}
	else if (iLocal_1014 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1754.4716f, 3283.0715f, 40.0925f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 400f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_1014 = 0;
		}
	}
	if (iLocal_472 == 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[4 /*19*/], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(Local_396[4 /*19*/], &iLocal_429, &iLocal_430);
			iLocal_472 = 1;
		}
	}
	switch (iLocal_517)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
				}
			}
			iLocal_471 = 0;
			__LIB_0__::func_325();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
				__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_PLANE"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_PLANE");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
			}
			__LIB_0__::func_544(94, 1, 0, 1, 0);
			__LIB_16__::func_318(&Local_872, 1, 0);
			iLocal_471 = 0;
			iLocal_537 = 0;
			__LIB_38__::func_768(9, "Drop the sub at airstrip", 0, 0, 0, 1);
			__LIB_16__::func_918(500);
			iLocal_1019 = -1;
			iLocal_517++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (__LIB_17__::func_733(&Local_872, 1754.4716f, 3283.0715f, 40.0925f, 0.1f, 0.1f, 2f, 1, Local_396[0 /*19*/], "DS2_DROP_SUB", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
				{
				}
				else if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1750.6334f, 3285.0278f, 40.0871f, 250f, 250f, 130f, false, true, 0))
					{
						if (iLocal_471 == 1)
						{
							if (__LIB_0__::func_501("DS2_FLYTLOD", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_324))
							{
								HUD::REMOVE_BLIP(&iLocal_324);
							}
							__LIB_0__::func_229("DS2_DROP_SUB", 7500, 0);
							iLocal_471 = 0;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1683.8723f, 3247.4294f, 39.81261f, 1804.1207f, 3280.5703f, 63.77226f, 65f, false, true, 0))
						{
							if (!__LIB_0__::func_1("DS2_GRAP_HELP2"))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1018 + 1000)
								{
									__LIB_0__::func_190("DS2_GRAP_HELP2");
									iLocal_1018 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
							{
								if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
								{
									PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
								}
							}
							if (__LIB_0__::func_1("DS2_GRAP_HELP2"))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_1018 + 1000)
								{
									HUD::CLEAR_HELP(true);
									iLocal_1018 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
							}
						}
						if (iLocal_471 == 0)
						{
							HUD::CLEAR_PRINTS();
							__LIB_0__::func_229("DS2_FLYTLOD", 7500, 0);
							iLocal_471 = 1;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], 0, fLocal_433);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_SUB_RETURNED"))
							{
								ENTITY::DETACH_ENTITY(Local_396[1 /*19*/], true, true);
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									HUD::REMOVE_BLIP(&(Local_872.f_5));
								}
								if (__LIB_0__::func_501("DS2_DROP_SUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								HUD::CLEAR_HELP(true);
								__LIB_16__::func_880(&iLocal_346, 1, 1);
								__LIB_16__::func_880(&iLocal_346, 2, 0);
								Local_332.f_15 = 0;
								CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
								iLocal_517++;
							}
						}
					}
				}
			}
			break;
		case 2:
			if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_872.f_5));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (iLocal_1019 < 0)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_396[1 /*19*/]))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DOCKS_HEIST_FINALE_2A_SUB_LAND", Local_396[1 /*19*/], "DOCKS_HEIST_FINALE_2A_SOUNDS", false, 0);
						iLocal_1019 = MISC::GET_GAME_TIMER();
					}
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_1019 + 3000)
				{
					iLocal_517++;
				}
			}
			break;
		case 3:
			iLocal_517 = 0;
			iLocal_894 = 12;
			break;
	}
}

void func_279()//Position - 0x1906C
{
	func_689();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.6748f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 550f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
		{
			func_299(22, 0f, 0f, 0f, 0f, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_414))
		{
			func_299(24, 0f, 0f, 0f, 0f, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_396[4 /*19*/]))
		{
			func_299(23, 0f, 0f, 0f, 0f, 0, 1);
		}
		else if (iLocal_472 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[4 /*19*/], false))
			{
				VEHICLE::GET_VEHICLE_COLOURS(Local_396[4 /*19*/], &iLocal_429, &iLocal_430);
				iLocal_472 = 1;
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.6748f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
	{
		if (iLocal_1014 == 0)
		{
			iLocal_1014 = 1;
			CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
		}
	}
	else if (iLocal_1014 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.6748f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 120f)
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_1014 = 0;
		}
	}
	CAM::SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(true);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
	{
		if (!PED::IS_PED_INJURED(iLocal_346[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
			}
		}
	}
	if (bLocal_417 == 1)
	{
		if (__LIB_14__::func_466() == 1)
		{
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), true);
			CAM::SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-20f, 50f);
			CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-60f, 0f);
			CAM::SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(1f, 1f);
		}
	}
	__LIB_40__::func_494(Local_396[10 /*19*/], joaat("dinghy"), 1);
	__LIB_40__::func_494(Local_396[11 /*19*/], joaat("dinghy"), 1);
	__LIB_40__::func_494(Local_396[12 /*19*/], joaat("dinghy"), 1);
	__LIB_40__::func_494(Local_396[13 /*19*/], joaat("dinghy"), 1);
	__LIB_40__::func_494(Local_396[14 /*19*/], joaat("buzzard"), 1);
	__LIB_40__::func_494(Local_396[15 /*19*/], joaat("buzzard"), 1);
	__LIB_40__::func_494(Local_396[16 /*19*/], joaat("buzzard"), 1);
	__LIB_40__::func_494(Local_396[17 /*19*/], joaat("buzzard"), 1);
	__LIB_40__::func_494(Local_396[18 /*19*/], joaat("buzzard"), 1);
	__LIB_40__::func_494(Local_396[19 /*19*/], joaat("buzzard"), 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_441[1]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_441[1]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_lev_des_barge_01"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_441[2]))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_441[2]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_lev_des_barge_01"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_414))
	{
		PED::DELETE_PED(&iLocal_414);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_413))
	{
		PED::DELETE_PED(&iLocal_413);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Floyd"));
	}
	if (__LIB_14__::func_466() == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	}
	switch (iLocal_517)
	{
		case 0:
			iLocal_471 = 0;
			iLocal_514 = 0;
			__LIB_16__::func_880(&iLocal_346, 0, 0);
			__LIB_16__::func_880(&iLocal_346, 1, 0);
			__LIB_16__::func_880(&iLocal_346, 2, 1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
				PED::SET_PED_CONFIG_FLAG(iLocal_346[2], 29, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
			}
			iLocal_519 = 0;
			while (iLocal_519 <= 39)
			{
				if (HUD::DOES_BLIP_EXIST(Local_394[iLocal_519 /*40*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_394[iLocal_519 /*40*/].f_1));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_394[iLocal_519 /*40*/]))
				{
					__LIB_16__::func_920(Local_394[iLocal_519 /*40*/], joaat("S_M_Y_BlackOps_01"), 0, 0, 0);
				}
				iLocal_519++;
			}
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
			AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RETURN_TO_AIRSTRIP"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_RETURN_TO_AIRSTRIP");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[0 /*19*/], 1, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
			}
			HUD::CLEAR_HELP(true);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
			func_921("DROPPED THE SUB", 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			__LIB_16__::func_318(&Local_872, 1, 0);
			__LIB_16__::func_918(500);
			iLocal_524 = 0;
			__LIB_0__::func_544(94, 1, 0, 1, 0);
			__LIB_38__::func_768(8, "Fly Away", 0, 0, 0, 1);
			iLocal_520 = MISC::GET_GAME_TIMER();
			MISC::CLEAR_AREA(1754.4716f, 3283.0715f, 40.0925f, 200f, true, false, false, false);
			iLocal_517++;
			break;
		case 1:
			if (__LIB_17__::func_733(&Local_872, 1754.4716f, 3283.0715f, 40.0925f, 0.1f, 0.1f, 2f, 1, Local_396[0 /*19*/], "DS2_FLYTD", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1754.4716f, 3283.0715f, 40.0925f, 250f, 250f, 250f, false, true, 0))
					{
						if (!func_924("DS2A_SEEAIR"))
						{
							if (!__LIB_13__::func_755(&Local_872, 1))
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_SEEAIR", 8, 0, 0, 0))
								{
									func_921("DS2A_SEEAIR", 1);
								}
							}
						}
						else
						{
							__LIB_16__::func_318(&Local_872, 1, 0);
							iLocal_517++;
						}
					}
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_40__::func_496(0))
						{
							if (iLocal_514 == 0)
							{
								if (!func_924("DS2A_P8"))
								{
									if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P8", 8, 0, 0, 0))
									{
										func_921("DS2A_P8", 1);
										iLocal_514 = 1;
									}
								}
							}
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
						{
							if (func_924("DROPPED THE SUB"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_872.f_5, 255);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
								{
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], Local_396[1 /*19*/], fLocal_433);
								}
								if (__LIB_0__::func_501("DS2_GIPOSFSUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_481))
								{
									HUD::REMOVE_BLIP(&iLocal_481);
								}
								func_921("DROPPED THE SUB", 0);
							}
						}
						else if (!func_924("DROPPED THE SUB"))
						{
							if (iLocal_514 == 1)
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									if (__LIB_0__::func_568())
									{
										HUD::CLEAR_PRINTS();
										__LIB_0__::func_620(0);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], 0, fLocal_433);
							}
							if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_872.f_5, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_481))
								{
									iLocal_481 = __LIB_0__::func_639(Local_396[1 /*19*/], 0, 0);
									__LIB_16__::func_919("DS2_GIPOSFSUB");
								}
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
							func_921("DROPPED THE SUB", 1);
						}
					}
				}
				if (iLocal_514 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
					{
						if (__LIB_0__::func_568())
						{
							HUD::CLEAR_PRINTS();
							__LIB_0__::func_620(0);
						}
					}
					else if (!__LIB_0__::func_568())
					{
						if (__LIB_0__::func_501("DS2_FLYGB", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						__LIB_0__::func_620(1);
					}
				}
			}
			break;
		case 2:
			CAM::DO_SCREEN_FADE_IN(2500);
			HUD::CLEAR_HELP(true);
			CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_465 = 0;
			iLocal_517 = 0;
			iLocal_471 = 0;
			iLocal_894 = 11;
			break;
	}
}

int func_299(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x1A01E
{
	struct<3> Var0;
	if (!__LIB_0__::func_86(Param1))
	{
	}
	if (fParam2 != 0f)
	{
	}
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[3 /*19*/]))
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				__LIB_16__::func_939(&(Local_396[3 /*19*/]), 2, Param1, fParam2, 1, 0);
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("bodhi2")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[3 /*19*/], false))
					{
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[3 /*19*/], true);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_396[3 /*19*/], true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_396[3 /*19*/], false, 0);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_396[3 /*19*/], 5f);
						return 1;
					}
				}
			}
			break;
		case 1:
			if (bParam3)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
				STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 0));
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
			STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 0));
			if (STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[4 /*19*/]))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					__LIB_16__::func_939(&(Local_396[4 /*19*/]), 0, Param1, fParam2, 1, 0);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[4 /*19*/], false))
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[4 /*19*/], true);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_396[4 /*19*/], true);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_396[4 /*19*/], true);
							return 1;
						}
					}
				}
			}
			break;
		case 2:
			if (bParam3)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
				STREAMING::REQUEST_MODEL(__LIB_13__::func_741(1, 0));
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
			STREAMING::REQUEST_MODEL(__LIB_13__::func_741(1, 0));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buffalo")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("buffalo")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[32 /*19*/]))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
					__LIB_16__::func_939(&(Local_396[32 /*19*/]), 1, Param1, fParam2, 1, 0);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buffalo"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("buffalo")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[32 /*19*/], false))
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[32 /*19*/], true);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_396[32 /*19*/], true);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_396[32 /*19*/], true);
							return 1;
						}
					}
				}
			}
			break;
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[5 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("packer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("packer")))
				{
					Local_396[5 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 1731.78f, 3443.08f, 38.54f, 205.99f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_396[5 /*19*/], 0);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("packer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1731.78f, 3443.08f, 38.54f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_396[5 /*19*/], false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_396[5 /*19*/], 5f);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[5 /*19*/], true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[5 /*19*/], "DH_2B_TRUCK_GROUP", 0f);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[6 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("armytrailer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("armytrailer")))
				{
					Local_396[6 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 1728.12f, 3450.66f, 40.74f, 205.34f, true, true, false);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("armytrailer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1728.12f, 3450.66f, 40.74f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_396[6 /*19*/], 5f);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_396[6 /*19*/], 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_396[5 /*19*/]))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_396[5 /*19*/], Local_396[6 /*19*/], 1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_396[6 /*19*/], false, 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_396[5 /*19*/], false, 0);
					return 1;
				}
			}
			break;
		case 8:
			if (func_299(7, Param1, fParam2, 0, 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
				{
					if (func_299(6, 1729.84f, 3447.04f, 41.36f, 205.41f, 0, 1))
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_396[1 /*19*/]))
							{
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[1 /*19*/], false);
								VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_396[1 /*19*/], Local_396[6 /*19*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
							}
							else
							{
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0f);
								return 1;
							}
						}
					}
				}
			}
			break;
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[5 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("packer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("packer")))
				{
					Local_396[5 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 1728.96f, 3264.86f, 41.22f, 116.4f, true, true, false);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_396[5 /*19*/], 0);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("packer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1728.96f, 3264.86f, 41.22f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_396[5 /*19*/], 5f);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[5 /*19*/], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[6 /*19*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("armytrailer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("armytrailer")))
				{
					Local_396[6 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 1736.6f, 3268.56f, 43.06f, 115.39f, true, true, false);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("armytrailer"));
					STREAMING::REQUEST_COLLISION_AT_COORD(1728.96f, 3264.86f, 41.22f);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_396[6 /*19*/], 5f);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_396[6 /*19*/], 0);
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Local_396[5 /*19*/]))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_396[5 /*19*/], Local_396[6 /*19*/], 1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_396[6 /*19*/], false, 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_396[5 /*19*/], false, 0);
					return 1;
				}
			}
			break;
		case 9:
			if (func_299(10, Param1, fParam2, 0, 1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
				{
					if (func_299(6, 1733f, 3266.85f, 43.81f, 115.47f, 0, 1))
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_396[1 /*19*/]))
							{
								VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_396[1 /*19*/], Local_396[6 /*19*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
							}
							else
							{
								AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0f);
								return 1;
							}
						}
					}
				}
			}
			break;
		case 11:
			if (func_299(7, 0f, 0f, 0f, 0, 0, 1))
			{
				if (func_299(6, 1732.576f, 3270.578f, 44.1069f, 139.4393f, 0, 1))
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_396[1 /*19*/]))
						{
							VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_396[1 /*19*/], Local_396[6 /*19*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_441[0]))
						{
							STREAMING::REQUEST_MODEL(joaat("prop_sub_cover_01"));
							if (STREAMING::HAS_MODEL_LOADED(joaat("prop_sub_cover_01")))
							{
								iLocal_441[0] = OBJECT::CREATE_OBJECT(joaat("prop_sub_cover_01"), 1732.576f, 3270.578f, 54.1069f, true, true, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_441[0], Local_396[1 /*19*/], 0, -0.02f, -2.38f, 0.17f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
						else
						{
							return 1;
						}
					}
				}
			}
			break;
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
			{
				func_427(&(iLocal_346[0]), 0, Param1, fParam2, 1, 0, 0);
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_346[0]))
				{
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_346[0], false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[0], iLocal_391);
					if (bParam4)
					{
						__LIB_17__::func_41(iLocal_346[0], 49);
						func_311(iLocal_346[0], 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						PED::CLEAR_PED_PROP(iLocal_346[0], 1);
					}
				}
				return 1;
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
			{
				func_427(&(iLocal_346[1]), 1, Param1, fParam2, 1, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_346[1], false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[1], iLocal_391);
				if (bParam4)
				{
					__LIB_17__::func_41(iLocal_346[1], 41);
					func_311(iLocal_346[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				return 1;
			}
			break;
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
			{
				func_427(&(iLocal_346[2]), 2, Param1, fParam2, 1, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_346[2], false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[2], iLocal_391);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_346[2], 1);
				if (bParam4)
				{
					__LIB_17__::func_41(iLocal_346[2], 47);
					func_311(iLocal_346[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					PED::CLEAR_PED_PROP(iLocal_346[2], 0);
					PED::CLEAR_PED_PROP(iLocal_346[2], 1);
				}
				return 1;
			}
			break;
		case 22:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
			{
				if (__LIB_16__::func_930(&iLocal_415, 12, 1743.23f, 3295.97f, 41.11f, -136.36f, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_415, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_415, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_415, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_415, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_415, iLocal_391);
					PED::SET_PED_AS_ENEMY(iLocal_415, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_415, true, false);
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_415))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_415, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_415, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_415, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_415, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_415, iLocal_391);
					PED::SET_PED_AS_ENEMY(iLocal_415, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_415, true, false);
				}
				return 1;
			}
			break;
		case 23:
			if (bParam3)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
				STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 0));
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
			STREAMING::REQUEST_MODEL(__LIB_13__::func_741(0, 0));
			if (STREAMING::HAS_MODEL_LOADED(__LIB_13__::func_741(0, 0)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[4 /*19*/]))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					__LIB_16__::func_939(&(Local_396[4 /*19*/]), 0, 1740.76f, 3294.06f, 40.76f, 247.69f, 1, 0);
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("tailgater"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("tailgater")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[4 /*19*/], false))
						{
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[4 /*19*/], true);
							VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_396[4 /*19*/], true);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_396[4 /*19*/], true);
							return 1;
						}
					}
				}
			}
			break;
		case 24:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_414))
			{
				if (__LIB_16__::func_930(&iLocal_414, 24, 1743.55f, 3297.09f, 41.15f, -133.5f, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_414, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_414, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_414, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, iLocal_391);
					PED::SET_PED_CONFIG_FLAG(iLocal_414, 151, true);
					PED::SET_PED_AS_ENEMY(iLocal_414, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_414, true, false);
					__LIB_0__::func_222(&Local_398, 4, iLocal_414, "WADE", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_398[4 /*10*/] != iLocal_414)
				{
					__LIB_0__::func_222(&Local_398, 4, iLocal_414, "WADE", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_414))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_414, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_414, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_414, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, iLocal_391);
					PED::SET_PED_CONFIG_FLAG(iLocal_414, 151, true);
					PED::SET_PED_AS_ENEMY(iLocal_414, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_414, true, false);
				}
				return 1;
			}
			break;
		case 20:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_414))
			{
				if (__LIB_16__::func_930(&iLocal_414, 24, Param1, fParam2, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_414, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_414, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_414, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, iLocal_391);
					PED::SET_PED_CONFIG_FLAG(iLocal_414, 151, true);
					PED::SET_PED_AS_ENEMY(iLocal_414, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_414, true, false);
					__LIB_0__::func_222(&Local_398, 4, iLocal_414, "WADE", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_398[4 /*10*/] != iLocal_414)
				{
					__LIB_0__::func_222(&Local_398, 4, iLocal_414, "WADE", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_414))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_414, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_414, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_414, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_414, iLocal_391);
					PED::SET_PED_CONFIG_FLAG(iLocal_414, 151, true);
					PED::SET_PED_AS_ENEMY(iLocal_414, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_414, true, false);
				}
				return 1;
			}
			break;
		case 21:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413))
			{
				if (__LIB_16__::func_930(&iLocal_413, 32, Param1, fParam2, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_413, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_413, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413, iLocal_391);
					PED::SET_PED_AS_ENEMY(iLocal_413, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_413, 151, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_413, true, false);
					__LIB_0__::func_222(&Local_398, 5, iLocal_413, "FLOYD", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_398[3 /*10*/] != iLocal_413)
				{
					__LIB_0__::func_222(&Local_398, 5, iLocal_413, "FLOYD", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_413))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_413, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_413, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_413, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_413, iLocal_391);
					PED::SET_PED_AS_ENEMY(iLocal_413, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_413, 151, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_413, true, false);
				}
				return 1;
			}
			break;
		case 16:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("cargobob3"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
			}
			PHYSICS::ROPE_LOAD_TEXTURES();
			STREAMING::REQUEST_MODEL(joaat("cargobob3"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("cargobob3")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					Local_396[0 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cargobob3"), Param1, fParam2, true, true, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_396[0 /*19*/], true);
					__LIB_14__::func_867(Local_396[0 /*19*/], 0);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[0 /*19*/], true);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_396[0 /*19*/], false);
					VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_396[0 /*19*/], true);
					VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_396[0 /*19*/], fLocal_432, fLocal_431, false);
					func_304(Local_396[0 /*19*/], __LIB_16__::func_891(0, 5));
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cargobob3")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
						{
							VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_396[0 /*19*/], 0);
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], true);
							VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_396[0 /*19*/], false);
							VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_396[0 /*19*/], true);
							VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_396[0 /*19*/], fLocal_432, fLocal_431, false);
							func_304(Local_396[0 /*19*/], __LIB_16__::func_891(0, 5));
							__LIB_14__::func_867(Local_396[0 /*19*/], 0);
							return 1;
						}
					}
				}
			}
			break;
		case 17:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("cargobob3"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
			}
			PHYSICS::ROPE_LOAD_TEXTURES();
			STREAMING::REQUEST_MODEL(joaat("cargobob3"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("cargobob3")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					Local_396[0 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cargobob3"), Param1, fParam2, true, true, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_396[0 /*19*/], true);
					__LIB_14__::func_867(Local_396[0 /*19*/], 0);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[0 /*19*/], true);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_396[0 /*19*/], false);
					VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_396[0 /*19*/], true);
					func_304(Local_396[0 /*19*/], __LIB_16__::func_891(0, 5));
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cargobob3")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], true);
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_396[0 /*19*/], false);
						VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_396[0 /*19*/], true);
						func_304(Local_396[0 /*19*/], __LIB_16__::func_891(0, 5));
						__LIB_14__::func_867(Local_396[0 /*19*/], 0);
						return 1;
					}
				}
			}
			break;
		case 12:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("cargobob3"));
				STREAMING::REQUEST_MODEL(joaat("submersible"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("cargobob3"));
			STREAMING::REQUEST_MODEL(joaat("submersible"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("cargobob3")))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cargobob3"), 3);
					Local_396[0 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("cargobob3"), Param1, fParam2, true, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_396[0 /*19*/], false);
					VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_396[0 /*19*/], true);
					__LIB_14__::func_867(Local_396[0 /*19*/], 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], true);
					VEHICLE::SET_VEHICLE_STRONG(Local_396[0 /*19*/], true);
					if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
					{
						VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_396[0 /*19*/], 0);
					}
					VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_396[0 /*19*/], fLocal_432, fLocal_431, true);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_396[0 /*19*/], false);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("submersible")))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
					Local_396[1 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), Param1.f_0, Param1.f_1, (Param1.f_2 - 10f), fParam2, true, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_396[1 /*19*/], false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], true);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0f);
					__LIB_14__::func_867(Local_396[1 /*19*/], 1);
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("submersible")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						Local_953 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
						Local_953 = { Local_953 + Vector(-10f, 0f, 0f) };
						if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], Local_396[1 /*19*/], fLocal_433);
								return 1;
							}
							else
							{
								ENTITY::SET_ENTITY_COORDS(Local_396[1 /*19*/], Local_953, true, false, false, true);
								VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/], -1, 0f, 0f, 0.5f);
							}
						}
						else
						{
							VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_396[0 /*19*/], 0);
							VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_396[0 /*19*/], fLocal_432, fLocal_431, true);
							ENTITY::SET_ENTITY_COORDS(Local_396[1 /*19*/], Local_953, true, false, false, true);
							VEHICLE::ATTACH_VEHICLE_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/], -1, 0f, 0f, 1f);
						}
					}
				}
			}
			break;
		case 6:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("submersible"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("submersible"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("submersible")))
				{
					Local_396[1 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), Param1, fParam2, true, true, false);
					ENTITY::SET_ENTITY_COORDS(Local_396[1 /*19*/], Param1, true, false, false, true);
					__LIB_14__::func_867(Local_396[1 /*19*/], 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[1 /*19*/], true, 1);
					STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("submersible"));
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
					VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_396[1 /*19*/], false, -190f, -190f, -190f);
					STREAMING::REQUEST_COLLISION_AT_COORD(Param1);
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("submersible"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("submersible")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_396[1 /*19*/], false, -190f, -190f, -190f);
						return 1;
					}
				}
			}
			break;
		case 13:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("dinghy"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[2 /*19*/]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")))
				{
					Local_396[2 /*19*/] = VEHICLE::CREATE_VEHICLE(joaat("dinghy"), Param1, fParam2, true, true, false);
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("dinghy")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[2 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_396[2 /*19*/], true);
						ENTITY::SET_ENTITY_LOD_DIST(Local_396[2 /*19*/], 1000);
						return 1;
					}
				}
			}
			break;
		case 18:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("prop_military_pickup_01"));
			}
			STREAMING::REQUEST_MODEL(joaat("prop_military_pickup_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_military_pickup_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
				{
					iLocal_442[1] = OBJECT::CREATE_OBJECT(joaat("prop_military_pickup_01"), Param1, true, true, false);
					ENTITY::SET_ENTITY_HEADING(iLocal_442[1], fParam2);
					ENTITY::SET_ENTITY_ROTATION(iLocal_442[1], 0f, 0f, -89.8046f, 2, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_442[1], 0f, 0f, -0.7059f, 0.7083f);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_442[1], -1255.38f, 6795.72f, -179.1137f, false, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_442[1], true);
				}
				else
				{
					return 1;
				}
			}
			break;
		case 33:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("A_C_Fish"));
			}
			STREAMING::REQUEST_MODEL(joaat("A_C_Fish"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_Fish")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_443[1]))
				{
					iLocal_443[1] = PED::CREATE_PED(26, joaat("A_C_Fish"), -1260.04f, 6802.21f, -174.41f, 0f, true, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_443[1], -159.48f);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_443[1], 100);
					TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_443[1], "WORLD_FISH_FLEE", 0, false);
				}
				else
				{
					return 1;
				}
			}
			break;
		case 27:
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("A_C_SharkTiger"));
			}
			STREAMING::REQUEST_MODEL(joaat("A_C_SharkTiger"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_SharkTiger")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_443[0]))
				{
					iLocal_443[0] = PED::CREATE_PED(26, joaat("A_C_SharkTiger"), -1244.6625f, 6783.5034f, -177.7454f, 0f, true, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_443[0], 49.7381f);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_443[0], 200);
				}
				else
				{
					return 1;
				}
			}
			break;
		case 19:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(joaat("A_C_SharkTiger"));
			}
			STREAMING::REQUEST_MODEL(joaat("A_C_SharkTiger"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_SharkTiger")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_443[2]))
				{
					iLocal_443[2] = PED::CREATE_PED(26, joaat("A_C_SharkTiger"), (Var0.f_0 + 2f), Var0.f_1, Var0.f_2, 0f, true, true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_443[2], 100);
				}
				else
				{
					if (!PED::IS_PED_INJURED(iLocal_443[2]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_443[2], true);
					}
					return 1;
				}
			}
			break;
		case 25:
			if (bParam3)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[20 /*19*/]))
				{
					func_303(20, joaat("dinghy"), -1393.8087f, 6161.4653f, 0.505434f, -128.46663f, joaat("S_M_Y_BlackOps_01"), 1, 0, 1, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[20 /*19*/], 700);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[21 /*19*/]))
				{
					func_303(21, joaat("dinghy"), -1387.4049f, 6134.791f, 0.492382f, -87.67314f, joaat("S_M_Y_BlackOps_01"), 1, 2, 2, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[21 /*19*/], 700);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[22 /*19*/]))
				{
					func_303(22, joaat("dinghy"), -1369.5331f, 6161.245f, 0.307101f, 112.634995f, joaat("S_M_Y_BlackOps_01"), 1, 5, 1, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[22 /*19*/], 700);
				}
				else
				{
					return 1;
				}
			}
			break;
		case 28:
			if (bParam3)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("dinghy"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(27, "DHF2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(28, "DHF2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(29, "DHF2");
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(27, "DHF2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(28, "DHF2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(29, "DHF2"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[27 /*19*/]))
				{
					func_303(27, joaat("dinghy"), -406.5101f, 4449.4565f, 27.6139f, 257.3971f, joaat("S_M_Y_BlackOps_01"), 1, 7, 0, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[27 /*19*/], 1500);
					VEHICLE::SET_VEHICLE_COLOURS(Local_396[27 /*19*/], 0, 0);
					VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_396[27 /*19*/], true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[28 /*19*/]))
				{
					func_303(28, joaat("dinghy"), -441.2678f, 4432.4106f, 26.8193f, 280.1574f, joaat("S_M_Y_BlackOps_01"), 1, 8, 0, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[28 /*19*/], 1500);
					VEHICLE::SET_VEHICLE_COLOURS(Local_396[28 /*19*/], 0, 0);
					VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_396[28 /*19*/], true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[29 /*19*/]))
				{
					func_303(29, joaat("dinghy"), -376.0573f, 4423.9873f, 27.5698f, 236.8367f, joaat("S_M_Y_BlackOps_01"), 1, 9, 0, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[29 /*19*/], 1500);
					VEHICLE::SET_VEHICLE_COLOURS(Local_396[29 /*19*/], 0, 0);
					VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_396[29 /*19*/], true);
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[27 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[27 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[27 /*19*/], 27, "DHF2", true);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[28 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[28 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[28 /*19*/], 28, "DHF2", true);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[29 /*19*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[29 /*19*/]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[29 /*19*/], 29, "DHF2", true);
						}
					}
					return 1;
				}
			}
			break;
		case 29:
			STREAMING::REQUEST_MODEL(joaat("lazer"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(97, "DHF2");
			if ((STREAMING::HAS_MODEL_LOADED(joaat("lazer")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(97, "DHF2"))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[26 /*19*/]))
				{
					func_303(26, joaat("lazer"), 1010.1705f, 7373.888f, 433.244f, 100.0127f, joaat("S_M_Y_BlackOps_01"), 1, 10, 0, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[26 /*19*/], 3000);
					__LIB_14__::func_867(Local_396[26 /*19*/], 2);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[30 /*19*/]))
				{
					func_303(30, joaat("lazer"), 1010.1705f, 7373.888f, 533.244f, -128.46663f, joaat("S_M_Y_BlackOps_01"), 1, 11, 0, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[30 /*19*/], 3000);
					__LIB_14__::func_867(Local_396[30 /*19*/], 3);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[31 /*19*/]))
				{
					func_303(31, joaat("lazer"), -214.0745f, 7287.873f, 256.5554f, -128.46663f, joaat("S_M_Y_BlackOps_01"), 1, 12, 0, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::SET_ENTITY_LOD_DIST(Local_396[31 /*19*/], 3000);
					__LIB_14__::func_867(Local_396[31 /*19*/], 4);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[26 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[30 /*19*/], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[31 /*19*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[26 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[26 /*19*/], 97, "DHF2", true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_396[26 /*19*/], true);
						VEHICLE::SET_PLAYBACK_SPEED(Local_396[26 /*19*/], 1.6f);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[30 /*19*/], 97, "DHF2", true);
						VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_396[30 /*19*/], -100f, 20f, -10f);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_396[30 /*19*/], true);
						VEHICLE::SET_PLAYBACK_SPEED(Local_396[30 /*19*/], 1.6f);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[31 /*19*/], 97, "DHF2", true);
						VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_396[31 /*19*/], 50f, -20f, -8f);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_396[31 /*19*/], true);
						VEHICLE::SET_PLAYBACK_SPEED(Local_396[31 /*19*/], 1.6f);
						return 1;
					}
				}
			}
			break;
		case 30:
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_393[0 /*40*/]))
				{
					func_300(0, -1309.16f, 6145.46f, 3.1f, -50.31f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_393[0 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("S_M_Y_BlackOps_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_393[0 /*40*/], true);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_393[0 /*40*/], "WORLD_HUMAN_CLIPBOARD", 0, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_393[1 /*40*/]))
				{
					func_300(1, -1310.03f, 6122.33f, 3.1f, 156.17f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_393[1 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("S_M_Y_BlackOps_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_393[1 /*40*/], true);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_393[1 /*40*/], "WORLD_HUMAN_CLIPBOARD", 0, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_393[2 /*40*/]))
				{
					func_300(2, -1308.89f, 6145.38f, 3.1f, -74.23f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_393[2 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("S_M_Y_BlackOps_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_393[2 /*40*/], true);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_393[2 /*40*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_393[3 /*40*/]))
				{
					func_300(3, -1311.39f, 6123.26f, 3.01f, -97.4f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_393[3 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("S_M_Y_BlackOps_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_393[3 /*40*/], true);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_393[3 /*40*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_393[4 /*40*/]))
				{
					func_300(4, -1293.21f, 6134.04f, 3.1f, -80.79f, 0, 0);
					if (!PED::IS_PED_INJURED(Local_393[4 /*40*/]))
					{
						STREAMING::REQUEST_COLLISION_FOR_MODEL(joaat("S_M_Y_BlackOps_01"));
						STREAMING::REQUEST_COLLISION_AT_COORD(-1309.16f, 6145.46f, 2.36f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_393[4 /*40*/], true);
						TASK::TASK_START_SCENARIO_IN_PLACE(Local_393[4 /*40*/], "WORLD_HUMAN_BINOCULARS", 0, false);
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		case 31:
			STREAMING::REQUEST_MODEL(joaat("prop_lev_des_barge_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_lev_des_barge_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_441[1]))
				{
					iLocal_441[1] = OBJECT::CREATE_OBJECT(joaat("prop_lev_des_barge_01"), -1301.52f, 6128.91f, -0.79f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_441[1], -3.45f, 2.11f, -33.1f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_441[1], true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_441[1], 2500);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_441[2]))
				{
					iLocal_441[2] = OBJECT::CREATE_OBJECT(joaat("prop_lev_des_barge_01"), -1316.14f, 6137.97f, -0.63f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_441[2], 0f, 0f, -33.55f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_441[2], true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_441[2], 2500);
				}
				else
				{
					return 1;
				}
			}
			break;
		case 32:
			STREAMING::REQUEST_PTFX_ASSET();
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 1;
			}
			break;
		case 26:
			if (bParam3)
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("buzzard"), 3);
			}
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[23 /*19*/]))
				{
					func_303(23, joaat("buzzard"), -1393.8087f, 6161.4653f, 24.505434f, -128.46663f, joaat("S_M_Y_BlackOps_01"), 1, 7, 1, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[23 /*19*/], true);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(Local_396[24 /*19*/]))
				{
					func_303(24, joaat("buzzard"), -1387.4049f, 6134.791f, 27.492382f, -87.67314f, joaat("S_M_Y_BlackOps_01"), 1, 9, 1, 0, -1, joaat("WEAPON_MICROSMG"));
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[24 /*19*/], true);
				}
				else
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_300(int iParam0, struct<3> Param1, float fParam2, bool bParam3, bool bParam4)//Position - 0x1C15C
{
	char cVar0[24];
	TASK::REMOVE_COVER_POINT(Local_393[iParam0 /*40*/].f_13);
	Local_393[iParam0 /*40*/] = PED::CREATE_PED(26, Local_393[iParam0 /*40*/].f_7, Param1, fParam2, true, true);
	if (bParam3)
	{
		Local_393[iParam0 /*40*/].f_1 = __LIB_0__::func_666(Local_393[iParam0 /*40*/], 1, 145);
		HUD::SET_BLIP_SCALE(Local_393[iParam0 /*40*/].f_1, 0.5f);
	}
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_393[iParam0 /*40*/]);
	PED::SET_PED_DIES_WHEN_INJURED(Local_393[iParam0 /*40*/], true);
	__LIB_0__::func_609(Local_393[iParam0 /*40*/], 1);
	__LIB_0__::func_609(Local_393[iParam0 /*40*/], 1);
	PED::SET_PED_MONEY(Local_393[iParam0 /*40*/], 0);
	ENTITY::SET_ENTITY_HEALTH(Local_393[iParam0 /*40*/], 110, 0);
	PED::SET_PED_DIES_WHEN_INJURED(Local_393[iParam0 /*40*/], true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_393[iParam0 /*40*/], iLocal_392);
	WEAPON::GIVE_WEAPON_TO_PED(Local_393[iParam0 /*40*/], Local_393[iParam0 /*40*/].f_6, 999, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(Local_393[iParam0 /*40*/], Local_393[iParam0 /*40*/].f_6, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_393[iParam0 /*40*/], bParam4);
	PED::SET_PED_AS_ENEMY(Local_393[iParam0 /*40*/], true);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_393[iParam0 /*40*/], true, false);
	PED::SET_PED_COMBAT_MOVEMENT(Local_393[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_RANGE(Local_393[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_ABILITY(Local_393[iParam0 /*40*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_393[iParam0 /*40*/], 49, true);
	PED::SET_PED_ACCURACY(Local_393[iParam0 /*40*/], 10);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_393[iParam0 /*40*/], 1);
	StringCopy(&cVar0, "Enemy ", 24);
	StringIntConCat(&cVar0, iParam0, 24);
	PED::SET_PED_NAME_DEBUG(Local_393[iParam0 /*40*/], &cVar0);
}

void func_303(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x1C3BF
{
	int iVar0;
	Local_396[iParam0 /*19*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
	if (iParam0 != 2)
	{
		if (iParam9 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_396[iParam0 /*19*/], iParam9);
		}
	}
	if (bParam5)
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[iParam0 /*19*/], -1, false))
		{
			Local_394[iParam6 /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_396[iParam0 /*19*/], 26, iParam4, -1, true, true);
		}
		WEAPON::GIVE_WEAPON_TO_PED(Local_394[iParam6 /*40*/], iParam10, 999, true, true);
		WEAPON::GIVE_WEAPON_TO_PED(Local_394[iParam6 /*40*/], joaat("WEAPON_PISTOL"), -1, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_394[iParam6 /*40*/], iLocal_392);
		PED::SET_PED_AS_ENEMY(Local_394[iParam6 /*40*/], true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_394[iParam6 /*40*/], true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_394[iParam6 /*40*/], true);
		PED::SET_PED_MONEY(Local_394[iParam6 /*40*/], 0);
		PED::SET_PED_ACCURACY(Local_394[iParam6 /*40*/], 3);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_396[iParam0 /*19*/], 1);
		PED::SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(false);
		PED::SET_PED_DIES_WHEN_INJURED(Local_394[iParam6 /*40*/], true);
		if (Local_394[iParam6 /*40*/] != 0)
		{
			__LIB_0__::func_609(Local_394[iParam6 /*40*/], 1);
		}
	}
	if (iParam7 > 0)
	{
		if (iParam7 > VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_396[iParam0 /*19*/]))
		{
			iParam7 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_396[iParam0 /*19*/]);
		}
		iVar0 = 1;
		while (iVar0 <= iParam7)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[iParam0 /*19*/], (iVar0 - 1), false))
			{
				Local_394[(iParam6 + iVar0) /*40*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_396[iParam0 /*19*/], 26, iParam4, (iVar0 - 1), true, true);
			}
			PED::SET_PED_MONEY(Local_394[iParam6 + 1 /*40*/], 0);
			WEAPON::GIVE_WEAPON_TO_PED(Local_394[(iParam6 + iVar0) /*40*/], joaat("WEAPON_CARBINERIFLE"), 200, true, true);
			PED::SET_PED_COMBAT_ABILITY(Local_394[(iParam6 + iVar0) /*40*/], 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_394[(iParam6 + iVar0) /*40*/], 13, true);
			PED::SET_PED_ACCURACY(Local_394[(iParam6 + iVar0) /*40*/], 5);
			PED::SET_PED_COMBAT_MOVEMENT(Local_394[(iParam6 + iVar0) /*40*/], 2);
			PED::SET_PED_COMBAT_RANGE(Local_394[(iParam6 + iVar0) /*40*/], 2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_394[(iParam6 + iVar0) /*40*/], iLocal_392);
			PED::SET_PED_AS_ENEMY(Local_394[(iParam6 + iVar0) /*40*/], true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_394[(iParam6 + iVar0) /*40*/], true);
			ENTITY::SET_ENTITY_PROOFS(Local_396[iParam0 /*19*/], false, false, false, bParam8, bParam8, false, false, false);
			PED::SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(false);
			PED::SET_PED_DIES_WHEN_INJURED(Local_394[(iParam6 + iVar0) /*40*/], true);
			__LIB_0__::func_609(Local_394[(iParam6 + iVar0) /*40*/], 1);
			iVar0++;
		}
	}
}

void func_304(int iParam0, int iParam1)//Position - 0x1C609
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam1 >= 90)
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iParam0, 0.75f);
		}
		else if (iParam1 >= 80)
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iParam0, 0.8f);
		}
		else if (iParam1 >= 70)
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iParam0, 0.85f);
		}
		else if (iParam1 >= 60)
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iParam0, 0.9f);
		}
		else if (iParam1 >= 50)
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iParam0, 0.95f);
		}
		else
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(iParam0, 1f);
		}
	}
}

int func_311(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x1C7CD
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
										func_311(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_311(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_321(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_320(iParam0, iVar10, &iVar4, 1))
							{
								func_311(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_311(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_311(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_311(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_311(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_311(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_311(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_311(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_311(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_311(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_320(iParam0, iVar10, &iVar4, 0))
		{
			func_311(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_312(iParam0, iVar10, &iVar4))
		{
			func_311(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_312(int iParam0, int iParam1, int iParam2)//Position - 0x1CFDD
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_313(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0, int iParam1, int iParam2)//Position - 0x1D069
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
				if (!func_313(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_313(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_313(iParam0, 14, iVar4))
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
			if (!func_313(iParam0, 14, uVar8[iVar7]))
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

int func_320(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1DB29
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_313(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_321(int iParam0, int iParam1, int iParam2)//Position - 0x1DBBF
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
				if (func_313(iParam0, iParam1, iVar0))
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
				if (func_313(iParam0, iParam1, iVar1))
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

int func_427(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3A8E8
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
			func_621(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_429(*iParam0, bParam6);
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

int func_429(int iParam0, bool bParam1)//Position - 0x3AA00
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_433(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_433(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_313(iParam0, 3, 169))
					{
						func_311(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_313(iParam0, 12, 6))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 11))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 12, 10))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 12, 50))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 14, 59))
			{
				func_311(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_313(iParam0, 8, 22))
			{
				func_311(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_313(iParam0, 12, 14))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_313(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 4))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 12, 3))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 14, 82))
			{
				func_311(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_313(iParam0, 8, 76))
			{
				func_311(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_313(iParam0, 12, 1))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_313(iParam0, 12, 12))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 12, 15))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_313(iParam0, 3, 71))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_313(iParam0, 12, 7))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 12, 6))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_313(iParam0, 14, 88))
			{
				func_311(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_313(iParam0, 8, 17))
			{
				func_311(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_313(iParam0, 12, 11))
			{
				func_311(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_433(int iParam0, int iParam1)//Position - 0x3B191
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
				iVar1 = func_321(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_435(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
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

void func_435(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3B40D
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
			if (func_320(iParam0, iVar1, &iVar2, 0))
			{
				func_311(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_312(iParam0, iVar1, &iVar2))
			{
				func_311(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_600(iParam0);
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
			func_438(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_438(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_438(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3B8E9
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
			func_561(iVar5, iParam1, iParam2, 1);
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
						func_561(iVar5, 10, 0, 1);
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
									func_561(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_438(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_561(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_560(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_438(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_554(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_561(iVar5, 14, uVar18[iVar1], 1);
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
							func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_561(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_438(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_546(iParam0);
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
						func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_545(iVar5, iVar24, iVar23, iVar25);
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
							func_438(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_438(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_438(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_438(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_438(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_438(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_438(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_554(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_545(iVar5, func_560(iParam0, 8, -1), iParam2, func_560(iParam0, 4, -1));
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
				func_481(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_545(iVar5, iParam2, iVar44, iVar45);
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
			func_554(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_545(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_438(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_438(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_545(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_545(iVar5, iVar58, iVar57, iParam2);
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
						func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_545(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_458(iParam0, 9, iVar63))
						{
							func_438(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_438(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_438(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_438(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_560(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_560(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_438(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_438(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_438(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_438(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_546(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_438(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_439(iParam0, &uVar4))
		{
			func_438(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_438(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_438(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_438(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_560(iParam0, 3, -1), iVar10);
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
				func_438(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_439(int iParam0, var uParam1)//Position - 0x3D795
{
	int iVar0;
	int iVar1;
	*uParam1 = func_560(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_458(iParam0, iVar1, iVar0))
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

int func_458(int iParam0, int iParam1, int iParam2)//Position - 0x41A52
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
				if (!func_458(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_458(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_458(iParam0, 14, iVar6))
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
			if (!func_458(iParam0, 14, uVar11[iVar10]))
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
						return func_458(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_458(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_481(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4877D
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
	func_482(iParam0, bParam3, 0, -1);
}

void func_482(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x487CB
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
		bVar3 = func_525(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_516(iParam0, iParam3);
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

int func_516(int iParam0, int iParam1)//Position - 0x57D28
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
				iVar3 = func_560(iParam0, 11, -1);
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
				iVar5 = func_560(iParam0, 11, -1);
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

int func_525(int iParam0, bool bParam1)//Position - 0x58187
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
						iVar3 = func_560(iParam0, 11, -1);
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
						iVar5 = func_560(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
						iVar8 = func_560(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_560(iParam0, 11, -1), 0);
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
						iVar12 = func_560(iParam0, 8, -1);
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

int func_545(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x61030
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
					iVar0 = func_545(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_545(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_546(int iParam0)//Position - 0x6236B
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
		if (!func_551(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_551(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_551(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x62D35
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_560(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_554(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x65651
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_600(iParam0))
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

int func_560(int iParam0, int iParam1, int iParam2)//Position - 0x65902
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
				if (func_458(iParam0, iParam1, iVar0))
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
				if (func_458(iParam0, iParam1, iVar1))
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

void func_561(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x659A3
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
							func_561(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_561(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_561(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_561(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_561(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_561(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_561(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_561(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_561(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_561(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_600(int iParam0)//Position - 0x7E654
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
				iVar1 = func_560(iParam0, 11, -1);
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
				iVar3 = func_560(iParam0, 11, -1);
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

void func_621(int iParam0)//Position - 0x7FC4C
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
		func_435(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_321(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_622(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_321(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_321(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_622(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_622(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_321(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_435(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_622(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7FEA9
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_625(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_625(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x80066
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
								func_625(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_625(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_625(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_625(iParam0, 14, iVar5, 1, 0);
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
								func_625(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_625(iParam0, 14, 17, 1, 0);
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

void func_689()//Position - 0x890F9
{
	switch (iLocal_966)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_396[1 /*19*/]))
				{
					iLocal_968 = MISC::GET_RANDOM_INT_IN_RANGE(1, 8);
					if (iLocal_968 == 1)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_BANG1", 8, 0, 0, 0))
							{
								iLocal_967 = MISC::GET_GAME_TIMER();
								iLocal_966++;
							}
						}
					}
					else if (iLocal_968 == 2)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_BANG2", 8, 0, 0, 0))
							{
								iLocal_967 = MISC::GET_GAME_TIMER();
								iLocal_966++;
							}
						}
					}
					else if (iLocal_968 == 3)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_BANG3", 8, 0, 0, 0))
							{
								iLocal_967 = MISC::GET_GAME_TIMER();
								iLocal_966++;
							}
						}
					}
					else if (iLocal_968 == 4)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_BANG4", 8, 0, 0, 0))
							{
								iLocal_967 = MISC::GET_GAME_TIMER();
								iLocal_966++;
							}
						}
					}
					else if (iLocal_968 == 5)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_BANG5", 8, 0, 0, 0))
							{
								iLocal_967 = MISC::GET_GAME_TIMER();
								iLocal_966++;
							}
						}
					}
					else if (iLocal_968 == 6)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_BANG6", 8, 0, 0, 0))
							{
								iLocal_967 = MISC::GET_GAME_TIMER();
								iLocal_966++;
							}
						}
					}
					else if (iLocal_968 == 7)
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_GENBANG", 8, 0, 0, 0))
							{
								iLocal_967 = MISC::GET_GAME_TIMER();
								iLocal_966++;
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_COOLMC", 8, 0, 0, 0))
				{
					iLocal_967 = MISC::GET_GAME_TIMER();
					iLocal_966++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&iLocal_967, MISC::GET_RANDOM_INT_IN_RANGE(10000, 16000)))
			{
				iLocal_966 = 0;
			}
			break;
	}
}

void func_691()//Position - 0x89332
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	int iVar7;
	int iVar8;
	if (__LIB_14__::func_466() == 1)
	{
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		__LIB_0__::func_502();
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		VEHICLE::SET_VEHICLE_CEILING_HEIGHT(Local_396[0 /*19*/], 300f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
		}
	}
	CAM::SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(true);
	if (!PED::IS_PED_INJURED(iLocal_346[1]))
	{
		PED::SET_PED_FIRING_PATTERN(iLocal_346[1], joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_346[1], 0);
	}
	if (__LIB_14__::func_466() == 1)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Local_396[0 /*19*/], false, iLocal_392);
		}
	}
	else
	{
		iVar0 = iLocal_346[1];
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Local_396[0 /*19*/], true, iLocal_392);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_396[12 /*19*/], false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_396[12 /*19*/], true) };
		if (Var1.f_2 > 4.5f || Var1.f_2 < -4f)
		{
			if ((!ENTITY::IS_ENTITY_IN_WATER(Local_396[12 /*19*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_396[12 /*19*/])) && !CAM::IS_SPHERE_VISIBLE(-1049.782f, 5635.9116f, 0.8559f, 5f))
			{
				ENTITY::SET_ENTITY_COORDS(Local_396[12 /*19*/], -1049.782f, 5635.9116f, 0.8559f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_396[12 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_396[13 /*19*/], false))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(Local_396[13 /*19*/], true) };
		if (Var2.f_2 > 4.5f || Var2.f_2 < -4f)
		{
			if ((!ENTITY::IS_ENTITY_IN_WATER(Local_396[13 /*19*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_396[13 /*19*/])) && !CAM::IS_SPHERE_VISIBLE(-1039.4417f, 5640.9355f, 0.9954f, 5f))
			{
				ENTITY::SET_ENTITY_COORDS(Local_396[13 /*19*/], -1039.4417f, 5640.9355f, 0.9954f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_396[13 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
			}
		}
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 95, true);
		WEAPON::GET_AMMO_IN_CLIP(iVar0, joaat("WEAPON_COMBATMG"), &iVar4);
		if (PED::IS_PED_RELOADING(iVar0) || iVar4 <= 0)
		{
			if (iLocal_952 != 2)
			{
				TASK::CLEAR_PED_TASKS(iVar0);
			}
		}
		if (iVar3 != joaat("WEAPON_COMBATMG"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, joaat("WEAPON_COMBATMG"), -1, true, true);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, joaat("WEAPON_COMBATMG"), joaat("COMPONENT_COMBATMG_CLIP_02"));
			WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, true);
			WEAPON::SET_AMMO_IN_CLIP(iVar0, joaat("WEAPON_COMBATMG"), 100);
		}
		else
		{
			WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, true);
			WEAPON::SET_AMMO_IN_CLIP(iVar0, joaat("WEAPON_COMBATMG"), 100);
		}
	}
	func_831();
	if (iLocal_517 > 0)
	{
		if (iLocal_517 < 4)
		{
			func_829(&Local_393);
			func_829(&Local_394);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
	{
		if (!PED::IS_PED_INJURED(iLocal_346[2]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
			if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
			}
		}
	}
	if (__LIB_0__::func_611(&iLocal_989, 5000))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_434))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_434, false);
		}
	}
	if (iLocal_517 > 1)
	{
		func_778(0, 0, 1, 1, 0, 1);
		func_776();
		func_775(&(Local_396[10 /*19*/].f_8));
		func_774(&(Local_396[11 /*19*/].f_8));
	}
	switch (iLocal_517)
	{
		case 0:
			iLocal_471 = 0;
			iLocal_514 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_396[0 /*19*/], true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
				ENTITY::SET_ENTITY_PROOFS(Local_396[1 /*19*/], false, false, false, false, false, false, false, false);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
				__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_346[2], 29, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
			}
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_CARBINERIFLE"), 31, 0);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_COMBATMG"), 31, 0);
			__LIB_0__::func_620(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_ENEMIES"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
			}
			AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
			__LIB_16__::func_318(&Local_872, 1, 0);
			__LIB_16__::func_918(500);
			iLocal_524 = 0;
			__LIB_12__::func_768(iLocal_524);
			iLocal_1001 = 0;
			iLocal_952 = 0;
			iLocal_994 = 0;
			__LIB_0__::func_544(94, 1, 0, 1, 0);
			__LIB_38__::func_768(7, "Defend Against Merryweather", 0, 0, 0, 1);
			func_772();
			iLocal_520 = MISC::GET_GAME_TIMER();
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			iLocal_1005 = 0;
			bLocal_417 = false;
			iLocal_997 = 0;
			STREAMING::REQUEST_ANIM_DICT("missheistdocks2bcarbob_cams");
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			iLocal_1011 = MISC::GET_GAME_TIMER();
			iLocal_517++;
			break;
		case 1:
			if (__LIB_17__::func_733(&Local_872, 1754.4716f, 3283.0715f, 40.0925f, 0.1f, 0.1f, 2f, 1, Local_396[0 /*19*/], "DS2_FLYTD", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (Var5.f_1 >= 6280f)
					{
						fVar6 = -1018f;
					}
					else
					{
						fVar6 = -1180f;
					}
					if (Var5.f_0 >= fVar6 && __LIB_0__::func_611(&iLocal_1011, 17000))
					{
						__LIB_16__::func_318(&Local_872, 1, 0);
						__LIB_0__::func_325();
						__LIB_16__::func_880(&iLocal_346, 0, 0);
						__LIB_16__::func_880(&iLocal_346, 1, 1);
						__LIB_16__::func_880(&iLocal_346, 2, 1);
						iLocal_1011 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(iLocal_346[1]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[1], true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[1], 3, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[1], 2, true);
							PED::SET_PED_ACCURACY(iLocal_346[1], 100);
							PED::SET_PED_FIRING_PATTERN(iLocal_346[1], joaat("FIRING_PATTERN_FULL_AUTO"));
							PED::SET_PED_CONFIG_FLAG(iLocal_346[1], 101, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_346[1], 1000f, 0);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_396[1 /*19*/], true, false);
							}
						}
						iLocal_1012 = 0;
						iLocal_517++;
					}
					else if (!func_924("DS2A_P7"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_872, 1))
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P7", 8, 0, 0, 0))
								{
									func_921("DS2A_P7", 1);
								}
							}
						}
					}
					else if (!func_924("DS2A_EXPL"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_872, 1))
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_EXPL", 8, 0, 0, 0))
								{
									func_921("DS2A_EXPL", 1);
								}
							}
						}
					}
					else if (!func_924("DS2A_PISSD"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_872, 1))
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_PISSD", 8, 0, 0, 0))
								{
									func_921("DS2A_PISSD", 1);
								}
							}
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
						{
							if (func_924("DROPPED THE SUB"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_872.f_5, 255);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
								{
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], Local_396[1 /*19*/], fLocal_433);
								}
								if (__LIB_0__::func_501("DS2_GIPOSFSUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_481))
								{
									HUD::REMOVE_BLIP(&iLocal_481);
								}
								func_921("DROPPED THE SUB", 0);
							}
						}
						else if (!func_924("DROPPED THE SUB"))
						{
							if (iLocal_514 == 1)
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									if (__LIB_0__::func_568())
									{
										HUD::CLEAR_PRINTS();
										__LIB_0__::func_620(0);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], 0, fLocal_433);
							}
							if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_872.f_5, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_481))
								{
									iLocal_481 = __LIB_0__::func_639(Local_396[1 /*19*/], 0, 0);
									__LIB_16__::func_919("DS2_GIPOSFSUB");
								}
							}
							func_921("DROPPED THE SUB", 1);
						}
					}
				}
			}
			break;
		case 2:
			if (!iLocal_1012)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1011 + 1000)
				{
					__LIB_16__::func_880(&iLocal_346, 0, 0);
					__LIB_16__::func_880(&iLocal_346, 1, 0);
					__LIB_16__::func_880(&iLocal_346, 2, 1);
					__LIB_17__::func_78(&iLocal_346, 1, 1);
					iLocal_1012 = 1;
				}
			}
			if (__LIB_14__::func_466() != 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_346[1], joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 7)
					{
						PED::SET_PED_ACCURACY(iLocal_346[1], 100);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[1], 23, false);
						PED::SET_PED_CONFIG_FLAG(iLocal_346[1], 101, true);
						PED::SET_PED_FIRING_PATTERN(iLocal_346[1], joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_346[1], 1000f, 0);
					}
				}
			}
			if (!func_924("DS2A_SBOATS"))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_SBOATS", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
							func_921("DS2A_SBOATS", 1);
						}
					}
				}
			}
			else if (!func_924("DS2A_P6c"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6c", 8, 0, 0, 0))
					{
						func_921("DS2A_P6c", 1);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_611(&iLocal_1011, 40000))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2bcarbob_cams"))
					{
						if (__LIB_0__::func_501("DS2_S2FH", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_AS_MICHAEL"))
						{
							AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
						}
						iLocal_517++;
					}
				}
				if (__LIB_14__::func_466() != 1)
				{
					if (!__LIB_13__::func_755(&Local_872, 2))
					{
						if (__LIB_0__::func_611(&iLocal_1011, 4000))
						{
							if (!func_924("DS2_S2FH"))
							{
								__LIB_16__::func_919("DS2_S2FH");
								func_921("DS2_S2FH", 1);
							}
						}
					}
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdocks2bcarbob_cams"))
				{
					if (__LIB_0__::func_501("DS2_S2FH", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, true);
					PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), true);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_CLEAR_MERRY");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_AS_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
					}
					iLocal_517++;
				}
			}
			if (iLocal_517 > 2)
			{
				__LIB_0__::func_499(633, 0);
			}
			break;
		case 3:
			if (__LIB_14__::func_466() != 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_346[1], joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")) == 7)
					{
						PED::SET_PED_ACCURACY(iLocal_346[1], 100);
						PED::SET_PED_FIRING_PATTERN(iLocal_346[1], joaat("FIRING_PATTERN_FULL_AUTO"));
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_346[1], 1000f, 0);
					}
				}
			}
			else
			{
				__LIB_17__::func_78(&iLocal_346, 1, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				Local_992 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
			}
			VEHICLE::SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(200f);
			func_767();
			if (func_750())
			{
				__LIB_0__::func_498(1, 633);
				__LIB_0__::func_638();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
				{
					OBJECT::DELETE_OBJECT(&iLocal_409);
				}
				iVar7 = 0;
				while (iVar7 <= 39)
				{
					__LIB_0__::func_621(&(Local_394[iVar7 /*40*/].f_23));
					iVar7++;
				}
				AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
				AUDIO::TRIGGER_MUSIC_EVENT("DH2B_ALL_DEAD");
				iLocal_1013 = MISC::GET_GAME_TIMER();
				Local_539.f_12 = iLocal_346[0];
				__LIB_16__::func_896(&iLocal_346, 0);
				if (__LIB_14__::func_466() == 1)
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				else if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_346[1], true, false);
				}
				iLocal_517++;
			}
			else if (__LIB_14__::func_466() == 1)
			{
			}
			else if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_346[1], true, false);
			}
			break;
		case 4:
			func_736();
			if (!func_924("DS2A_P6k"))
			{
				if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6k", 8, 0, 0, 0))
				{
					func_921("DS2A_P6k", 1);
					iLocal_514 = 1;
				}
			}
			else if (__LIB_14__::func_466() != 0)
			{
				if (!__LIB_13__::func_755(&Local_872, 2))
				{
					if (!func_924("DS2_S2MH"))
					{
						__LIB_16__::func_880(&iLocal_346, 0, 0);
						__LIB_16__::func_880(&iLocal_346, 1, 1);
						__LIB_16__::func_880(&iLocal_346, 2, 1);
						__LIB_16__::func_919("DS2_S2MH");
						__LIB_17__::func_78(&iLocal_346, 0, 1);
						HUD::CLEAR_HELP(true);
						func_921("DS2_S2MH", 1);
					}
				}
				if (__LIB_0__::func_611(&iLocal_1013, 12000))
				{
					if (!__LIB_17__::func_97(&Local_539, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
					{
					}
					else if (Local_539.f_18)
					{
						if (!Local_539.f_19)
						{
							if (__LIB_37__::func_936(&iLocal_346, 1, 1, 0))
							{
								Local_539.f_19 = 1;
							}
						}
					}
				}
			}
			else
			{
				__LIB_17__::func_78(&iLocal_346, 0, 0);
				if (__LIB_0__::func_501("DS2_S2MH", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::CLEAR_HELP(true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_396[1 /*19*/], true, false);
				}
				iVar8 = 0;
				while (iVar8 <= 39)
				{
					__LIB_0__::func_621(&(Local_394[iVar8 /*40*/].f_23));
					iVar8++;
				}
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_396[0 /*19*/], 2, false);
				iLocal_517++;
			}
			break;
		case 5:
			func_692();
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), false);
			CAM::DO_SCREEN_FADE_IN(2500);
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_465 = 0;
			iLocal_517 = 0;
			iLocal_471 = 0;
			iLocal_894 = 10;
			break;
	}
}

void func_692()//Position - 0x8A111
{
	if (((((((((((((((((((((((((((((((((((PED::IS_PED_INJURED(Local_394[0 /*40*/]) && PED::IS_PED_INJURED(Local_394[1 /*40*/])) && PED::IS_PED_INJURED(Local_394[2 /*40*/])) && PED::IS_PED_INJURED(Local_394[3 /*40*/])) && PED::IS_PED_INJURED(Local_394[4 /*40*/])) && PED::IS_PED_INJURED(Local_394[5 /*40*/])) && PED::IS_PED_INJURED(Local_394[6 /*40*/])) && PED::IS_PED_INJURED(Local_394[7 /*40*/])) && PED::IS_PED_INJURED(Local_394[8 /*40*/])) && PED::IS_PED_INJURED(Local_394[9 /*40*/])) && PED::IS_PED_INJURED(Local_394[10 /*40*/])) && PED::IS_PED_INJURED(Local_394[11 /*40*/])) && PED::IS_PED_INJURED(Local_394[12 /*40*/])) && PED::IS_PED_INJURED(Local_394[13 /*40*/])) && PED::IS_PED_INJURED(Local_394[14 /*40*/])) && PED::IS_PED_INJURED(Local_394[15 /*40*/])) && PED::IS_PED_INJURED(Local_394[16 /*40*/])) && PED::IS_PED_INJURED(Local_394[17 /*40*/])) && PED::IS_PED_INJURED(Local_394[18 /*40*/])) && PED::IS_PED_INJURED(Local_394[19 /*40*/])) && PED::IS_PED_INJURED(Local_394[24 /*40*/])) && PED::IS_PED_INJURED(Local_394[25 /*40*/])) && PED::IS_PED_INJURED(Local_394[26 /*40*/])) && PED::IS_PED_INJURED(Local_394[27 /*40*/])) && PED::IS_PED_INJURED(Local_394[28 /*40*/])) && PED::IS_PED_INJURED(Local_394[29 /*40*/])) && PED::IS_PED_INJURED(Local_394[30 /*40*/])) && PED::IS_PED_INJURED(Local_394[31 /*40*/])) && PED::IS_PED_INJURED(Local_394[32 /*40*/])) && PED::IS_PED_INJURED(Local_394[33 /*40*/])) && PED::IS_PED_INJURED(Local_394[34 /*40*/])) && PED::IS_PED_INJURED(Local_394[35 /*40*/])) && PED::IS_PED_INJURED(Local_394[36 /*40*/])) && PED::IS_PED_INJURED(Local_394[37 /*40*/])) && PED::IS_PED_INJURED(Local_394[38 /*40*/])) && PED::IS_PED_INJURED(Local_394[39 /*40*/]))
	{
		__LIB_0__::func_630(632);
	}
}

void func_736()//Position - 0x8B76E
{
	float fVar0;
	bool bVar1;
	if (CAM::DOES_CAM_EXIST(iLocal_996))
	{
		CAM::DESTROY_CAM(iLocal_996, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_745(iLocal_952 == 0);
	}
	if (bLocal_417 == 1)
	{
		if (__LIB_14__::func_466() == 1)
		{
			fVar0 = 0.4f;
			if (MISC::IS_PC_VERSION() && GRAPHICS::GET_ASPECT_RATIO(true) > 1.8f)
			{
				fVar0 = 0.2f;
			}
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), true);
			CAM::SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-20f, 50f);
			CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-60f, 0f);
			CAM::SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(1f, 1f);
			CAM::SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(fVar0);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
		}
		switch (iLocal_952)
		{
			case 0:
				if (((!__LIB_0__::func_477() && !__LIB_0__::func_104(1)) && !func_743(1)) && !__LIB_2__::func_65(1))
				{
					if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						if (iLocal_995)
						{
							iLocal_999 = 2;
							func_740();
						}
						else
						{
							iLocal_999 = 1;
							func_739();
						}
					}
				}
				break;
			case 1:
				if (((!__LIB_0__::func_477() && !__LIB_0__::func_104(1)) && !func_743(1)) && !__LIB_2__::func_65(1))
				{
					if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						if (iLocal_995 || iLocal_994)
						{
							iLocal_999 = 2;
							func_740();
						}
						else
						{
							iLocal_999 = 0;
							func_737();
						}
					}
				}
				break;
			case 2:
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
				if (((!__LIB_0__::func_477() && !__LIB_0__::func_104(1)) && !func_743(1)) && !__LIB_2__::func_65(1))
				{
					if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
					{
						bVar1 = false;
						if (!iLocal_998)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
							{
								iLocal_999 = 1;
								func_739();
								iLocal_998 = 1;
								bVar1 = true;
							}
						}
						if (!bVar1)
						{
							iLocal_999 = 0;
							func_737();
						}
					}
				}
				break;
			}
	}
}

void func_737()//Position - 0x8B952
{
	if (__LIB_0__::func_1("DS2_SWITCHS") || __LIB_0__::func_1("DS2_SWITCHS2"))
	{
		HUD::CLEAR_HELP(true);
	}
	func_921("DS2_SWITCHS", 1);
	if (__LIB_14__::func_466() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_738();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_346[1]))
				{
					ENTITY::DETACH_ENTITY(iLocal_346[1], true, true);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, true);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[0 /*19*/], 1, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], 1);
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], true);
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
			func_921("GO TO REAR", 0);
			bLocal_417 = false;
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", PLAYER::PLAYER_PED_ID(), "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
			iLocal_997 = 0;
			iLocal_952 = 0;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_346[1]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_346[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_346[1], false))
			{
				ENTITY::DETACH_ENTITY(iLocal_346[1], true, true);
			}
		}
		PED::SET_PED_CONFIG_FLAG(iLocal_346[1], 101, true);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[0 /*19*/], 1, false))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
		}
		func_921("GO TO REAR", 0);
		bLocal_417 = false;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", iLocal_346[1], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
		iLocal_952 = 0;
	}
}

void func_738()//Position - 0x8BAE9
{
	iLocal_996 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
	CAM::SET_CAM_COORD(iLocal_996, CAM::GET_GAMEPLAY_CAM_COORD() + ENTITY::GET_ENTITY_VELOCITY(Local_396[0 /*19*/]) * FtoV(MISC::GET_FRAME_TIME()));
	CAM::SET_CAM_ROT(iLocal_996, CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
	CAM::SET_CAM_FOV(iLocal_996, CAM::GET_GAMEPLAY_CAM_FOV());
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_739()//Position - 0x8BB3E
{
	if (__LIB_0__::func_1("DS2_SWITCHS") || __LIB_0__::func_1("DS2_SWITCHS2"))
	{
	}
	func_921("DS2_SWITCHS", 1);
	if (__LIB_14__::func_466() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_738();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_346[1]))
				{
					ENTITY::DETACH_ENTITY(iLocal_346[1], true, true);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, true);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[0 /*19*/], 2, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], 2);
			}
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], true);
			PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
			func_921("GO TO REAR", 0);
			bLocal_417 = false;
			func_921("FORCE CAM INTO POSITION", 0);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", PLAYER::PLAYER_PED_ID(), "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
			if (iLocal_997 == 1)
			{
			}
			iLocal_997 = 0;
			iLocal_952 = 1;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_346[1]))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_346[1], 101, true);
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_346[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_346[1], false))
			{
				ENTITY::DETACH_ENTITY(iLocal_346[1], true, true);
			}
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[0 /*19*/], 2, false))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 2);
		}
		func_921("GO TO REAR", 0);
		bLocal_417 = false;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", iLocal_346[1], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
		iLocal_952 = 1;
	}
}

void func_740()//Position - 0x8BCE1
{
	if (__LIB_0__::func_1("DS2_SWITCHS") || __LIB_0__::func_1("DS2_SWITCHS2"))
	{
		HUD::CLEAR_HELP(true);
	}
	func_921("DS2_SWITCHS", 1);
	if (__LIB_14__::func_466() == 1)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATMG"), -1, true, true);
			WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_COMBATMG"), joaat("COMPONENT_COMBATMG_CLIP_02"));
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 101, true);
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1, 0.0477f, -3.6f, 0.2f, 0f, 0f, 180f, true, false, true, true, 2, true, 0);
			PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], true);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		bLocal_417 = true;
		iLocal_995 = 0;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", PLAYER::PLAYER_PED_ID(), "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
		iLocal_997 = 0;
		iLocal_952 = 2;
	}
	else if (!PED::IS_PED_INJURED(iLocal_346[1]))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_346[1]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_346[1], false))
			{
				ENTITY::DETACH_ENTITY(iLocal_346[1], true, true);
			}
		}
		ENTITY::SET_ENTITY_VISIBLE(iLocal_346[1], true, false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_346[1]);
		PED::SET_PED_CONFIG_FLAG(iLocal_346[1], 101, true);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_346[1], Local_396[0 /*19*/], -1, 0.0477f, -3.6f, 0.2f, 0f, 0f, 180f, true, false, true, true, 2, true, 0);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_346[1], Local_396[0 /*19*/], true);
		bLocal_417 = true;
		iLocal_995 = 0;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SWAP_POSITION", iLocal_346[1], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
		iLocal_952 = 2;
	}
}

int func_743(bool bParam0)//Position - 0x8C020
{
	if (Global_23011.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/) || (!bParam0 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/)))
	{
		return 1;
	}
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 169 /*INPUT_SELECT_CHARACTER_MULTIPLAYER*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_745(bool bParam0)//Position - 0x8C0FC
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	bVar2 = false;
	iVar4 = -1;
	fVar5 = 999999f;
	iVar3 = 10;
	while (iVar3 <= 25)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[iVar3 /*19*/], false))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_396[iVar3 /*19*/], -1, false)))
			{
				fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_396[iVar3 /*19*/], true), false);
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_396[0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_396[iVar3 /*19*/], true)) };
				if ((Var7.f_0 < 0f && bParam0) || (Var7.f_0 > 0f && !bParam0))
				{
					if (fVar6 < fVar5)
					{
						fVar5 = fVar6;
						iVar4 = iVar3;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar4 >= 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[iVar4 /*19*/], false))
		{
			Var8 = { ENTITY::GET_ENTITY_COORDS(Local_396[iVar4 /*19*/], true) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			fVar9 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var8.f_0, Var8.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar9 > 360f)
			{
				fVar9 = (fVar9 - 360f);
			}
			else if (fVar9 < 0f)
			{
				fVar9 = (fVar9 + 360f);
			}
			if (bParam0)
			{
				if (fVar9 > 180f)
				{
					if (fVar9 > 270f)
					{
						fVar9 = 0f;
					}
					else
					{
						fVar9 = 180f;
					}
				}
			}
			else
			{
				fVar9 = (fVar9 - 360f);
				if (fVar9 < -180f)
				{
					if (fVar9 < -270f)
					{
						fVar9 = 0f;
					}
					else
					{
						fVar9 = 180f;
					}
				}
			}
			Var11 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_396[iVar4 /*19*/], true)) };
			fVar12 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_396[iVar4 /*19*/], 0);
			fVar13 = Var11.f_2;
			fVar10 = MISC::ATAN((fVar13 / fVar12));
			fVar0 = fVar9;
			fVar1 = fVar10;
		}
		else
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
		if (bParam0)
		{
			fVar0 = 90f;
		}
		else
		{
			fVar0 = -90f;
		}
		fVar1 = 0f;
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar1, 1f);
}

int func_750()//Position - 0x8C432
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	func_765(10, 0);
	func_765(11, 0);
	func_765(14, 1);
	func_765(15, 1);
	func_765(16, 1);
	func_765(17, 1);
	func_765(18, 1);
	func_765(19, 1);
	func_765(12, 0);
	func_765(13, 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_1001 > 0)
	{
	}
	if (iLocal_1001 > 2)
	{
		if (iLocal_999 == 0)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_396[12 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[13 /*19*/])) && ENTITY::DOES_ENTITY_EXIST(Local_396[14 /*19*/]))
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[12 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[13 /*19*/], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[14 /*19*/], false))
				{
					if (!func_924("DS2A_RIGHTDR"))
					{
						if (!__LIB_13__::func_755(&Local_872, 1))
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_RIGHTDR", 8, 0, 0, 0))
							{
								func_921("DS2A_RIGHTDR", 1);
							}
						}
					}
				}
			}
		}
		func_764();
		func_763(&(Local_396[12 /*19*/].f_8));
		func_758(&(Local_396[13 /*19*/].f_8));
		func_757(&(Local_396[14 /*19*/].f_8));
	}
	if (iLocal_1001 > 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[14 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[14 /*19*/], false))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_01_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_01_ARRIVES");
				}
			}
		}
	}
	if (iLocal_1001 > 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[18 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[19 /*19*/]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
			{
				if (!func_924("DS2A_MOREHEL"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_MOREHEL", 8, 0, 0, 0))
						{
							func_921("DS2A_MOREHEL", 1);
						}
					}
				}
			}
		}
		func_756(&(Local_396[18 /*19*/].f_8));
		func_755(&(Local_396[19 /*19*/].f_8));
	}
	if (iLocal_1001 > 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[18 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[18 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_02_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_02_ARRIVES");
				}
			}
			if (!func_924("DS2A_P6i_1"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6i", 8, 0, 0, 0))
					{
						func_921("DS2A_P6i_1", 1);
					}
				}
			}
		}
	}
	if (iLocal_1001 > 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[17 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[16 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
			{
				if (!func_924("DS2A_MHELI"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_MHELI", 8, 0, 0, 0))
						{
							func_921("DS2A_MHELI", 1);
						}
					}
				}
			}
		}
		func_754(&(Local_396[16 /*19*/].f_8));
		func_751(&(Local_396[17 /*19*/].f_8));
	}
	if (iLocal_1001 > 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[16 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[17 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_03_ARRIVES"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_03_ARRIVES");
				}
				if (!func_924("DS2A_P6i_2"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6i", 8, 0, 0, 0))
						{
							func_921("DS2A_P6i_2", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_1005)
	{
		func_736();
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		Local_991 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
	}
	if (iLocal_1001 >= 4)
	{
		if (__LIB_14__::func_466() == 0)
		{
			if (!iLocal_1009)
			{
				__LIB_0__::func_190("DS2_SWITCHS2");
				iLocal_1009 = 1;
			}
		}
	}
	if (iLocal_1001 >= 3 && iLocal_1001 <= 6)
	{
		if (__LIB_14__::func_466() == 1)
		{
			if (!func_924("DS2_SWITCHS"))
			{
				__LIB_0__::func_190("DS2_SWITCHS");
				func_921("DS2_SWITCHS", 1);
			}
		}
	}
	switch (iLocal_1001)
	{
		case 0:
			if (!__LIB_13__::func_755(&Local_872, 2))
			{
				__LIB_16__::func_919("DS2_DEFTM");
				bLocal_417 = false;
				iLocal_995 = 0;
				iLocal_1009 = 0;
				iLocal_998 = 0;
				iLocal_999 = 0;
				iLocal_1001++;
			}
			break;
		case 1:
			if ((Local_991.f_0 < -1030f && (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[10 /*19*/], false) || VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[11 /*19*/], false))) && !func_924("DS2A_P6d"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6d", 8, 0, 0, 0))
					{
						func_921("DS2A_P6d", 1);
					}
				}
			}
			else
			{
				iLocal_1003 = MISC::GET_GAME_TIMER();
				iLocal_1004 = MISC::GET_GAME_TIMER() + 11000;
				iLocal_1001++;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[10 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[11 /*19*/]))
			{
				if (Local_991.f_1 > 6280f)
				{
					fVar0 = -730f;
				}
				else
				{
					fVar0 = -970f;
				}
				if ((((((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[10 /*19*/], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[11 /*19*/], false)) || PED::IS_PED_INJURED(Local_394[0 /*40*/])) || PED::IS_PED_INJURED(Local_394[4 /*40*/])) || __LIB_0__::func_611(&iLocal_1003, 90000)) || Local_991.f_0 > fVar0) || (__LIB_14__::func_466() != 1 && __LIB_0__::func_611(&iLocal_1003, 30000)))
				{
					iLocal_1003 = MISC::GET_GAME_TIMER();
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_01_ARRIVES"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_ENEMY_HELI_01_ARRIVES");
					}
					iLocal_1005 = 1;
					iLocal_1001++;
				}
			}
			break;
		case 3:
			if (!func_924("DS2A_P6e"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6e", 8, 0, 0, 0))
					{
						func_921("DS2A_P6e", 1);
					}
				}
			}
			else
			{
				iLocal_1005 = 1;
				iLocal_1008 = -1;
				iLocal_1001++;
			}
			break;
		case 4:
			if (iLocal_999 == 1)
			{
				if (!func_924("DS2A_P6g"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6g", 8, 0, 0, 0))
						{
							func_921("DS2A_P6g", 1);
						}
					}
				}
			}
			if (iLocal_1008 >= 0)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_1008 + 2000)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ENEMY_HELI_02_ARRIVES"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_ENEMY_HELI_02_ARRIVES");
					}
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_HELIS_ARRIVE");
					iLocal_1006 = 0;
					iLocal_1007 = 0;
					iLocal_1008 = -1;
					iLocal_1001++;
				}
			}
			else if ((ENTITY::DOES_ENTITY_EXIST(Local_396[12 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[13 /*19*/])) && ENTITY::DOES_ENTITY_EXIST(Local_396[14 /*19*/]))
			{
				iVar1 = 0;
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[14 /*19*/], false))
				{
					iVar1 = 1;
				}
				else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_396[14 /*19*/], -1, false)))
				{
					iVar1 = 1;
				}
				if (iVar1 || __LIB_0__::func_611(&iLocal_1003, 120000))
				{
					iLocal_1003 = MISC::GET_GAME_TIMER();
					iLocal_1008 = MISC::GET_GAME_TIMER();
				}
			}
			break;
		case 5:
			if (iLocal_1008 < 0)
			{
				if (!func_924("DS2A_P6mo"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6mo", 8, 0, 0, 0))
						{
							func_921("DS2A_P6mo", 1);
						}
					}
				}
				if (!func_924("Speed up"))
				{
					if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[12 /*19*/], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[13 /*19*/], false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
					{
						func_921("Speed up", 1);
					}
				}
				if (iLocal_1006 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_396[18 /*19*/], 300f, 300f, 300f, false, false, 0))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[18 /*19*/]))
							{
								ENTITY::SET_ENTITY_COORDS(Local_396[18 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 195f, -195f, 50f), true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_396[18 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
								VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[18 /*19*/]);
								iLocal_1006 = 1;
							}
						}
						else
						{
							iLocal_1006 = 1;
						}
					}
				}
				if (iLocal_1007 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_396[19 /*19*/], 300f, 300f, 300f, false, false, 0))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[19 /*19*/]))
							{
								ENTITY::SET_ENTITY_COORDS(Local_396[19 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -135f, -285f, 60f), true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_396[19 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
								VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[19 /*19*/]);
								iLocal_1007 = 1;
							}
						}
						else
						{
							iLocal_1007 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[18 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[19 /*19*/]))
				{
					bVar2 = true;
					bVar3 = true;
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false))
					{
						bVar2 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_396[18 /*19*/], -1, false)))
					{
						bVar2 = false;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
					{
						bVar3 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_396[19 /*19*/], -1, false)))
					{
						bVar3 = false;
					}
					if (!bVar2 && !bVar3)
					{
						iLocal_1008 = MISC::GET_GAME_TIMER();
						AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PORT_OF_LS_2B_HELICOPTER_DOOR_SMASH", false, -1);
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_1008 + 2500)
			{
				iLocal_993 = MISC::GET_GAME_TIMER();
				iLocal_1008 = -1;
				iLocal_1001++;
			}
			break;
		case 6:
			if (!func_924("DS2A_P6f"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6f", 8, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
						func_921("DS2A_P6f", 1);
					}
				}
			}
			else
			{
				iLocal_995 = 1;
				iLocal_994 = 1;
				iLocal_1001++;
			}
			break;
		case 7:
			if (bLocal_417)
			{
				if (__LIB_0__::func_501("DS2_GETREAR", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				__LIB_0__::func_638();
				if (!func_924("DS2A_P6g"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6g", 8, 0, 0, 0))
						{
							func_921("DS2A_P6g", 1);
						}
					}
				}
				else
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_ENEMY_HELI_02_ARRIVES");
					AUDIO::START_AUDIO_SCENE("DH_2B_ENEMY_HELI_03_ARRIVES");
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Door_Open", "DOCKS_HEIST_FINALE_2B_SOUNDS", true);
					iLocal_1002 = MISC::GET_GAME_TIMER();
					iLocal_1006 = 0;
					iLocal_1007 = 0;
					iLocal_1001++;
				}
			}
			else if (!func_924("DS2_GETREAR"))
			{
				if (!__LIB_13__::func_755(&Local_872, 2))
				{
					__LIB_16__::func_919("DS2_GETREAR");
					func_921("DS2_SWITCHS", 0);
					func_921("DS2_GETREAR", 1);
				}
			}
			else if (__LIB_14__::func_466() == 1)
			{
				if (!func_924("DS2_SWITCHS"))
				{
					__LIB_0__::func_190("DS2_SWITCHS");
					func_921("DS2_SWITCHS", 1);
				}
			}
			else if (!func_924("DS2_SWITCHS"))
			{
				__LIB_0__::func_190("DS2_SWITCHS2");
				func_921("DS2_SWITCHS", 1);
			}
			break;
		case 8:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (__LIB_0__::func_611(&iLocal_1002, 800))
				{
					if (iLocal_1006 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[15 /*19*/], false))
						{
							ENTITY::SET_ENTITY_COORDS(Local_396[15 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -45f, -95f, 6f), true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_396[15 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[15 /*19*/]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
						{
							ENTITY::SET_ENTITY_COORDS(Local_396[16 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 45f, -65f, 6f), true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_396[16 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[16 /*19*/]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
						{
							ENTITY::SET_ENTITY_COORDS(Local_396[17 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 0f, -55f, 10f), true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_396[17 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[17 /*19*/]);
						}
						iLocal_1006 = 1;
					}
				}
				if (__LIB_0__::func_611(&iLocal_1002, 1000))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_396[0 /*19*/], 2, false, false);
					VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_396[0 /*19*/], 2, false);
					iLocal_1006 = 0;
					iLocal_1001++;
				}
			}
			break;
		case 9:
			if (!func_924("DS2A_P6f"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6f", 8, 0, 0, 0))
					{
						func_921("DS2A_P6f", 1);
					}
				}
			}
			else
			{
				iLocal_1003 = MISC::GET_GAME_TIMER();
				iLocal_1001++;
			}
			break;
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[16 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[17 /*19*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
				{
					iLocal_1001++;
				}
			}
			break;
		case 11:
			if (iLocal_1008 < 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[16 /*19*/]) && ENTITY::DOES_ENTITY_EXIST(Local_396[17 /*19*/]))
				{
					bVar4 = true;
					bVar5 = true;
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
					{
						bVar4 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_396[16 /*19*/], -1, false)))
					{
						bVar4 = false;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						bVar5 = false;
					}
					else if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_396[17 /*19*/], -1, false)))
					{
						bVar5 = false;
					}
					if (!bVar4 && !bVar5)
					{
						iLocal_1008 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_0__::func_611(&iLocal_1003, 60000))
					{
						if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_396[15 /*19*/], false), true) > 420f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_396[16 /*19*/], false), true) > 420f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_396[17 /*19*/], false), true) > 420f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[15 /*19*/], false))
							{
								VEHICLE::EXPLODE_VEHICLE(Local_396[15 /*19*/], true, false);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
							{
								VEHICLE::EXPLODE_VEHICLE(Local_396[16 /*19*/], true, false);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
							{
								VEHICLE::EXPLODE_VEHICLE(Local_396[17 /*19*/], true, false);
							}
						}
					}
				}
				else
				{
					iLocal_1008 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_1008 + 1500)
			{
				iLocal_1006 = 0;
				iLocal_1001 = 99;
			}
			break;
		case 99:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_396[1 /*19*/], false);
			}
			return 1;
			break;
	}
	return 0;
}

void func_751(var uParam0)//Position - 0x8D3A6
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
	{
		func_753(&(Local_396[17 /*19*/].f_12));
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_396[17 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				func_303(17, joaat("buzzard"), Local_396[17 /*19*/].f_14, Local_396[17 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 28, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_396[17 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 0f, -65f, 35f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_396[17 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
				}
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_396[17 /*19*/], true);
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), Local_396[17 /*19*/], Local_394[28 /*40*/]);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[17 /*19*/], true, 1);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_394[28 /*40*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_394[28 /*40*/], true);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[17 /*19*/], "DH_2B_HELI_GROUP_03", 0f);
				iLocal_470[17] = 0;
				__LIB_16__::func_881(Local_394[28 /*40*/], 634);
				__LIB_16__::func_881(Local_394[29 /*40*/], 634);
				__LIB_16__::func_881(Local_394[30 /*40*/], 634);
				__LIB_16__::func_881(Local_394[31 /*40*/], 634);
				*uParam0++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[28 /*40*/], Local_396[17 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 3f, -65f, -7f), 4, 120f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]), (SYSTEM::ROUND(Local_991.f_2) - 2), 8, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[29 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[29 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[29 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[30 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[30 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[30 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[31 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[31 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[31 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							Local_396[17 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_753(var uParam0)//Position - 0x8D6FB
{
	if (*uParam0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[17 /*19*/]))
		{
			if (__LIB_0__::func_611(&iLocal_993, 35000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_396[17 /*19*/]))
					{
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), Local_396[17 /*19*/], Local_394[28 /*40*/]);
							WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_394[28 /*40*/], joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
							if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
							{
								PED::SET_PED_ACCURACY(Local_394[28 /*40*/], 100);
							}
							*uParam0 = 3;
						}
					}
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
				{
					STREAMING::REQUEST_MODEL(joaat("prop_pool_ball_01"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_pool_ball_01")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							iLocal_409 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_pool_ball_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(15, 20)), 0f, IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(8, 10))), true, true, false);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pool_ball_01"));
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_409, true);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_409, false, false);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
							if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
							{
								PED::SET_PED_ACCURACY(Local_394[28 /*40*/], 100);
							}
							*uParam0++;
						}
					}
				}
			}
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
			{
				if (bLocal_417 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
					{
						VEHICLE::DISABLE_VEHICLE_WEAPON(false, joaat("VEHICLE_WEAPON_SPACE_ROCKET"), Local_396[17 /*19*/], Local_394[28 /*40*/]);
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_394[28 /*40*/], joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
						Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), 2000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_409, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 15f, 0f, 10f), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
						}
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], iLocal_409, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_409, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 12f, 0f, 7f), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
						}
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], iLocal_409, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_409, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 12f, 0f, 8f), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
						}
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], iLocal_409, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_409, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -12f, 0f, 10f), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
						}
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], iLocal_409, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_409, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 12f, 0f, 8f), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
						}
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], iLocal_409, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 7:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_409, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -12f, 0f, 10f), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
						}
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], iLocal_409, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 8:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_409, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 15f, 0f, 8f), true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_409, true);
						}
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], iLocal_409, 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Miss", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], Local_396[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 10:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], Local_396[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], Local_396[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0++;
						}
					}
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_611(&(Local_396[17 /*19*/].f_13), MISC::GET_RANDOM_INT_IN_RANGE(4000, 5000)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[17 /*19*/], false))
					{
						if (!PED::IS_PED_INJURED(Local_394[28 /*40*/]))
						{
							VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(Local_394[28 /*40*/], Local_396[0 /*19*/], 0f, 0f, 0f);
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Missile_Incoming_Hit", Local_396[0 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
							Local_396[17 /*19*/].f_13 = MISC::GET_GAME_TIMER();
							*uParam0 = (*uParam0 - 1);
						}
					}
				}
			}
			break;
	}
}

void func_754(var uParam0)//Position - 0x8E029
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_396[16 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				func_303(16, joaat("buzzard"), Local_396[16 /*19*/].f_14, Local_396[16 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 24, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[16 /*19*/], true, 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), Local_396[16 /*19*/], Local_394[24 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_394[24 /*40*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_394[24 /*40*/], true);
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_396[16 /*19*/], true);
				Local_396[16 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[16 /*19*/], "DH_2B_HELI_GROUP_03", 0f);
				iLocal_470[16] = 0;
				__LIB_16__::func_881(Local_394[24 /*40*/], 634);
				__LIB_16__::func_881(Local_394[25 /*40*/], 634);
				__LIB_16__::func_881(Local_394[26 /*40*/], 634);
				__LIB_16__::func_881(Local_394[27 /*40*/], 634);
				*uParam0++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&(Local_396[16 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[24 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[24 /*40*/], Local_396[16 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 45f, 20f, 5f), 4, 70f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]), SYSTEM::ROUND(Local_991.f_2), 10, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[25 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[25 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									PED::SET_PED_ACCURACY(Local_394[25 /*40*/], 50);
									TASK::TASK_DRIVE_BY(Local_394[25 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[26 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[26 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									PED::SET_PED_ACCURACY(Local_394[26 /*40*/], 50);
									TASK::TASK_DRIVE_BY(Local_394[26 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[27 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[27 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									PED::SET_PED_ACCURACY(Local_394[27 /*40*/], 10);
									TASK::TASK_DRIVE_BY(Local_394[27 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 30, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							Local_396[16 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (__LIB_0__::func_611(&(Local_396[16 /*19*/].f_18), 4000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_396[16 /*19*/], PLAYER::PLAYER_PED_ID(), true))
					{
						Local_396[16 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						Local_396[16 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&(Local_396[16 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[24 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[16 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[24 /*40*/], Local_396[16 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 45f, 42f, 8f), 4, 70f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]), SYSTEM::ROUND(Local_991.f_2), 10, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[25 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[25 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[25 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[26 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[26 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[26 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[27 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[27 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[27 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 30, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							Local_396[16 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_755(var uParam0)//Position - 0x8E4B2
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_396[19 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				func_303(19, joaat("buzzard"), Local_396[19 /*19*/].f_14, Local_396[19 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 36, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[19 /*19*/], true, 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), Local_396[19 /*19*/], Local_394[36 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_394[36 /*40*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_394[36 /*40*/], true);
				Local_396[19 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				iLocal_470[19] = 0;
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[19 /*19*/], "DH_2B_HELI_GROUP_02", 0f);
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_396[19 /*19*/], true);
				__LIB_16__::func_881(Local_394[36 /*40*/], 634);
				__LIB_16__::func_881(Local_394[37 /*40*/], 634);
				__LIB_16__::func_881(Local_394[38 /*40*/], 634);
				__LIB_16__::func_881(Local_394[39 /*40*/], 634);
				*uParam0++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&(Local_396[19 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[36 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[36 /*40*/], Local_396[19 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 45f, 40f, 5f), 4, 60f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]), SYSTEM::ROUND(Local_991.f_2), 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[37 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[37 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[37 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[37 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[38 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[38 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[38 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[38 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[39 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[39 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[39 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[39 /*40*/], 40);
								}
							}
							Local_396[19 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (__LIB_0__::func_611(&(Local_396[19 /*19*/].f_18), 2000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_396[19 /*19*/], PLAYER::PLAYER_PED_ID(), true))
					{
						Local_396[19 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						Local_396[19 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&(Local_396[19 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[36 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[19 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[36 /*40*/], Local_396[19 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 45f, 30f, 0f), 4, 60f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]), SYSTEM::ROUND(Local_991.f_2), 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[37 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[37 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[37 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[37 /*40*/], 60);
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[38 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[38 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[38 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[38 /*40*/], 60);
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[39 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[39 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[39 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[39 /*40*/], 60);
								}
							}
							Local_396[19 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_756(var uParam0)//Position - 0x8E962
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_396[18 /*19*/], 0f);
	}
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				func_303(18, joaat("buzzard"), Local_396[18 /*19*/].f_14, Local_396[18 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 32, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[18 /*19*/], true, 1);
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), Local_396[18 /*19*/], Local_394[32 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_394[32 /*40*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_394[32 /*40*/], true);
				Local_396[18 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[18 /*19*/], "DH_2B_HELI_GROUP_02", 0f);
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_396[18 /*19*/], true);
				iLocal_470[18] = 0;
				__LIB_16__::func_881(Local_394[32 /*40*/], 634);
				__LIB_16__::func_881(Local_394[33 /*40*/], 634);
				__LIB_16__::func_881(Local_394[34 /*40*/], 634);
				__LIB_16__::func_881(Local_394[35 /*40*/], 634);
				*uParam0++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&(Local_396[18 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[32 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[32 /*40*/], Local_396[18 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -30f, 30f, 5f), 4, 60f, 0.1f, -1f, SYSTEM::ROUND(Local_991.f_2) + 10, 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[33 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[33 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[33 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[33 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[34 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[34 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[34 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[34 /*40*/], 40);
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[35 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[35 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[35 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
									PED::SET_PED_ACCURACY(Local_394[35 /*40*/], 40);
								}
							}
							Local_396[18 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (__LIB_0__::func_611(&(Local_396[18 /*19*/].f_18), 4000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_396[18 /*19*/], PLAYER::PLAYER_PED_ID(), true))
					{
						Local_396[18 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						Local_396[18 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&(Local_396[18 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[32 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[18 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[32 /*40*/], Local_396[18 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -50f, 43f, 12f), 4, 60f, 0.1f, ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]), SYSTEM::ROUND(Local_991.f_2), 20, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[33 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[33 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[33 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[34 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[34 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[34 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[35 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[35 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[35 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							Local_396[18 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_757(var uParam0)//Position - 0x8EDE8
{
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("buzzard"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("buzzard")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				func_303(14, joaat("buzzard"), Local_396[14 /*19*/].f_14, Local_396[14 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 16, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[14 /*19*/], false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_396[14 /*19*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 95f, -95f, 65f), true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_396[14 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
				}
				AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_396[14 /*19*/], true);
				VEHICLE::DISABLE_VEHICLE_WEAPON(true, joaat("WEAPON_VEHICLE_ROCKET"), Local_396[14 /*19*/], Local_394[16 /*40*/]);
				WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_394[16 /*40*/], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_394[16 /*40*/], true);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[14 /*19*/], "DH_2B_HELI_GROUP_01", 0f);
				Local_396[14 /*19*/].f_18 = MISC::GET_GAME_TIMER();
				iLocal_470[14] = 0;
				__LIB_16__::func_881(Local_394[16 /*40*/], 634);
				__LIB_16__::func_881(Local_394[17 /*40*/], 634);
				__LIB_16__::func_881(Local_394[18 /*40*/], 634);
				__LIB_16__::func_881(Local_394[19 /*40*/], 634);
				*uParam0++;
			}
			break;
		case 1:
			VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_396[14 /*19*/], 0f);
			if (__LIB_0__::func_611(&(Local_396[14 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[16 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[14 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[16 /*40*/], Local_396[14 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 30f, 17f, 5f), 4, 60f, 0.1f, -1f, SYSTEM::ROUND(Local_991.f_2) + 10, 25, -1f, 320);
						}
						if (!PED::IS_PED_INJURED(Local_394[17 /*40*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[17 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
							{
								if (__LIB_14__::func_466() == 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[17 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
								else
								{
									TASK::TASK_DRIVE_BY(Local_394[17 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[18 /*40*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[18 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
							{
								if (__LIB_14__::func_466() == 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[18 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
								else
								{
									TASK::TASK_DRIVE_BY(Local_394[18 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[19 /*40*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[19 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
							{
								if (__LIB_14__::func_466() == 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[19 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 30, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
								else
								{
									TASK::TASK_DRIVE_BY(Local_394[19 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
						}
						Local_396[14 /*19*/].f_9 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (__LIB_0__::func_611(&(Local_396[14 /*19*/].f_18), 5000))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[14 /*19*/], false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_396[14 /*19*/], PLAYER::PLAYER_PED_ID(), true))
					{
						Local_396[14 /*19*/].f_18 = MISC::GET_GAME_TIMER();
						*uParam0++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&(Local_396[14 /*19*/].f_9), 50))
			{
				if (!PED::IS_PED_INJURED(Local_394[16 /*40*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[14 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							TASK::TASK_HELI_MISSION(Local_394[16 /*40*/], Local_396[14 /*19*/], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 30f, 35f, 5f), 4, 60f, 0.1f, -1f, SYSTEM::ROUND(Local_991.f_2) + 10, 25, -1f, 320);
							if (!PED::IS_PED_INJURED(Local_394[17 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[17 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[17 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[18 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[18 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[18 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							if (!PED::IS_PED_INJURED(Local_394[19 /*40*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[19 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[19 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							Local_396[14 /*19*/].f_9 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			break;
	}
}

void func_758(var uParam0)//Position - 0x8F2D8
{
	struct<3> Var0;
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				func_303(13, joaat("dinghy"), Local_396[13 /*19*/].f_14, Local_396[13 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 12, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[13 /*19*/], false))
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 140f, -65f, 0f) };
						Var0.f_2 = 0.62f;
						ENTITY::SET_ENTITY_COORDS(Local_396[13 /*19*/], Var0, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_396[13 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[13 /*19*/], true, 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_396[13 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_396[13 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_396[13 /*19*/], true);
				if (!PED::IS_PED_INJURED(Local_394[12 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[12 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[12 /*40*/], 118, false);
					__LIB_16__::func_881(Local_394[12 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[13 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[13 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[13 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[13 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[13 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[14 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[14 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[14 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[14 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[14 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[15 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[15 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[15 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[15 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[15 /*40*/], 634);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[13 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0f);
				*uParam0++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_394[12 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[13 /*19*/], false))
					{
						func_762(Local_394[12 /*40*/], Local_396[13 /*19*/], 1, &(Local_396[13 /*19*/].f_9), 90, 55, 100f, 30f, 0f);
						func_759(Local_396[13 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_394[13 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[13 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[13 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[13 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[13 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[13 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[14 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[14 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[14 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[14 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[14 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[14 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[15 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[15 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[15 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[15 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[15 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[15 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_759(int iParam0)//Position - 0x8F6F2
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (__LIB_31__::func_989(iParam0, Local_396[0 /*19*/], 25f))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_396[0 /*19*/], ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
				if (Var0.f_1 < -3f)
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 2, 0f, 20f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
				}
			}
		}
	}
}

void func_762(int iParam0, int iParam1, bool bParam2, var uParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8)//Position - 0x8F809
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (__LIB_0__::func_86(fParam6, fParam7, fParam8))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
			Var0.f_2 = 0f;
		}
		else
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], fParam6, fParam7, fParam8) };
			Var0.f_2 = 0f;
		}
	}
	if (!__LIB_0__::func_86(Var0))
	{
		if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
			{
				if ((MISC::GET_GAME_TIMER() - *uParam3) > 2000)
				{
					if (bParam2)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, true);
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_MICROSMG"), false))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("WEAPON_MICROSMG"), -1, true, true);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_MICROSMG"), true);
						TASK::TASK_DRIVE_BY(iParam0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, -1f, 50, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, true, 1);
					if (iParam5 > 0)
					{
					}
					if (iParam4 > 0)
					{
					}
					TASK::TASK_BOAT_MISSION(iParam0, iParam1, 0, 0, Var0, 4, SYSTEM::TO_FLOAT(iParam4), 786469, -1f, 7);
					*uParam3 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_763(var uParam0)//Position - 0x8F936
{
	struct<3> Var0;
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				func_303(12, joaat("dinghy"), Local_396[12 /*19*/].f_14, Local_396[12 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 8, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[12 /*19*/], false))
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], 110f, -60f, 0f) };
						Var0.f_2 = 0.62f;
						ENTITY::SET_ENTITY_COORDS(Local_396[12 /*19*/], Var0, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_396[12 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[12 /*19*/], true, 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_396[12 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_396[12 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_396[12 /*19*/], true);
				if (!PED::IS_PED_INJURED(Local_394[8 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[8 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[8 /*40*/], 118, false);
					__LIB_16__::func_881(Local_394[8 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[9 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[9 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[9 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[9 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[9 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[10 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[10 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[10 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[10 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[10 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[11 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[11 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[11 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[11 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[11 /*40*/], 634);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[12 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0f);
				*uParam0++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_394[8 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[12 /*19*/], false))
					{
						func_762(Local_394[8 /*40*/], Local_396[12 /*19*/], 1, &(Local_396[12 /*19*/].f_9), 90, 55, 80f, 50f, 0f);
						func_759(Local_396[12 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_394[9 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[9 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[9 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[9 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[9 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[9 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[10 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[10 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[10 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[10 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[10 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[10 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[11 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[11 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[11 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[11 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[11 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[11 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_764()//Position - 0x8FD50
{
	int iVar0;
	bool bVar1;
	if (MISC::GET_GAME_TIMER() >= iLocal_1004)
	{
		bVar1 = false;
		if (iLocal_1001 != 7)
		{
			iVar0 = 10;
			while (iVar0 <= 25)
			{
				if (!bVar1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[iVar0 /*19*/], false))
					{
						if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_396[iVar0 /*19*/], -1, false)))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_396[iVar0 /*19*/], true), false) < 100f)
							{
								bVar1 = true;
							}
						}
					}
				}
				iVar0++;
			}
		}
		if (bVar1)
		{
			if (!__LIB_13__::func_755(&Local_872, 2) && !__LIB_0__::func_75())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[iVar0 /*19*/]))
				{
					if (ENTITY::GET_ENTITY_MODEL(Local_396[iVar0 /*19*/]) == joaat("buzzard"))
					{
						if (iVar0 == 17 && bLocal_417)
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6j", 8, 0, 0, 0))
							{
								iLocal_1004 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
							}
						}
						else if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6j", 8, 0, 0, 0))
						{
							iLocal_1004 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
						}
					}
					else if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6j", 8, 0, 0, 0))
					{
						iLocal_1004 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 19000));
					}
				}
			}
		}
		else
		{
			iLocal_1004 = MISC::GET_GAME_TIMER() + 5000;
		}
	}
}

void func_765(int iParam0, bool bParam1)//Position - 0x8FEAA
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(Local_396[iParam0 /*19*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_396[iParam0 /*19*/], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_396[iParam0 /*19*/], PLAYER::PLAYER_PED_ID(), true))
			{
				bVar0 = true;
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_396[iParam0 /*19*/], iLocal_346[1], true))
				{
					bVar0 = true;
				}
			}
		}
	}
	switch (Local_396[iParam0 /*19*/].f_10)
	{
		case 0:
			Local_396[iParam0 /*19*/].f_10++;
			break;
		case 1:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_396[iParam0 /*19*/]) < 1000)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 800, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 500, 0);
					}
					Local_396[iParam0 /*19*/].f_10++;
				}
			}
			break;
		case 2:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_396[iParam0 /*19*/]) < 500)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 450, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 400, 0);
					}
					Local_396[iParam0 /*19*/].f_10++;
				}
			}
			break;
		case 3:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_396[iParam0 /*19*/]) < 400)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 350, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 300, 0);
					}
					Local_396[iParam0 /*19*/].f_10++;
				}
			}
			break;
		case 4:
			if (bVar0)
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_396[iParam0 /*19*/]) < 300)
				{
					if (bParam1)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 250, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_HEALTH(Local_396[iParam0 /*19*/], 200, 0);
					}
					Local_396[iParam0 /*19*/].f_10++;
				}
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_396[iParam0 /*19*/], false))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Local_396[iParam0 /*19*/]) < 200)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[iParam0 /*19*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_396[iParam0 /*19*/]);
					}
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_396[iParam0 /*19*/], -100f);
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_396[iParam0 /*19*/], -500f);
					Local_396[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
					Local_396[iParam0 /*19*/].f_10++;
				}
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Local_396[iParam0 /*19*/], false))
			{
				if (!__LIB_0__::func_611(&(Local_396[iParam0 /*19*/].f_11), 600))
				{
					if (__LIB_0__::func_680())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[iParam0 /*19*/], 0, MISC::GET_RANDOM_FLOAT_IN_RANGE(33f, 48f), 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
						VEHICLE::EXPLODE_VEHICLE(Local_396[iParam0 /*19*/], true, false);
					}
					Local_396[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
					Local_396[iParam0 /*19*/].f_10++;
				}
			}
			break;
		case 7:
			if (!ENTITY::IS_ENTITY_DEAD(Local_396[iParam0 /*19*/], false))
			{
				if (!__LIB_0__::func_611(&(Local_396[iParam0 /*19*/].f_11), 600))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[iParam0 /*19*/], 0, MISC::GET_RANDOM_FLOAT_IN_RANGE(33f, 48f), 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
					VEHICLE::EXPLODE_VEHICLE(Local_396[iParam0 /*19*/], true, false);
					Local_396[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
					Local_396[iParam0 /*19*/].f_10++;
				}
			}
			else
			{
				Local_396[iParam0 /*19*/].f_11 = MISC::GET_GAME_TIMER();
				Local_396[iParam0 /*19*/].f_10++;
			}
			break;
		case 8:
			if (__LIB_0__::func_611(&(Local_396[iParam0 /*19*/].f_11), MISC::GET_RANDOM_INT_IN_RANGE(600, 2000)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_396[iParam0 /*19*/], false))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_396[iParam0 /*19*/]))
					{
						VEHICLE::EXPLODE_VEHICLE(Local_396[iParam0 /*19*/], true, false);
						Local_396[iParam0 /*19*/].f_10++;
					}
				}
			}
			break;
	}
	iVar1 = iParam0;
	if ((((((((iVar1 == 14 || iVar1 == 15) || iVar1 == 16) || iVar1 == 17) || iVar1 == 18) || iVar1 == 19) || iVar1 == 23) || iVar1 == 24) || iVar1 == 25)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[iParam0 /*19*/], false))
		{
			bVar2 = false;
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_396[iParam0 /*19*/], false), true);
			if (fVar3 > 1000f)
			{
				if (iLocal_470[iParam0])
				{
					bVar2 = true;
				}
			}
			else if (fVar3 > 350f)
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_396[iParam0 /*19*/]))
				{
					bVar2 = true;
				}
			}
			else if (fVar3 < 400f)
			{
				iLocal_470[iParam0] = 1;
			}
			if (bVar2)
			{
				VEHICLE::EXPLODE_VEHICLE(Local_396[iParam0 /*19*/], true, false);
			}
		}
	}
}

void func_767()//Position - 0x903C4
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_40__::func_490(PLAYER::PLAYER_PED_ID(), iLocal_392, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_MODEL(iVar0, joaat("S_M_Y_BlackOps_01")))
			{
				if (__LIB_0__::func_611(&iLocal_1010, 9000))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 120f)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						if (iVar1 == 0)
						{
							__LIB_0__::func_709(iVar0, "DH2B_HGAA", "MERRYWEATHER1", 15);
							iLocal_1010 = MISC::GET_GAME_TIMER();
						}
						if (iVar1 == 1)
						{
							__LIB_0__::func_709(iVar0, "DH2B_HHAA", "MERRYWEATHER1", 15);
							iLocal_1010 = MISC::GET_GAME_TIMER();
						}
						if (iVar1 == 2)
						{
							__LIB_0__::func_709(iVar0, "DH2B_HIAA", "MERRYWEATHER1", 15);
							iLocal_1010 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_772()//Position - 0x9060F
{
	Local_396[10 /*19*/].f_14 = { -991.26f, 6330.41f, 0.62f };
	Local_396[10 /*19*/].f_17 = 113.26f;
	Local_396[11 /*19*/].f_14 = { -1032.55f, 6303.47f, 0.24f };
	Local_396[11 /*19*/].f_17 = 131.26f;
	Local_396[12 /*19*/].f_14 = { -1527.6051f, 5411.4316f, 0f };
	Local_396[12 /*19*/].f_17 = 327.8288f;
	Local_396[13 /*19*/].f_14 = { -1646.5157f, 5654.109f, 0f };
	Local_396[13 /*19*/].f_17 = 326.2217f;
	Local_396[14 /*19*/].f_14 = { -1147.5525f, 4923.6914f, 120.0419f };
	Local_396[14 /*19*/].f_17 = 1.1023f;
	Local_396[15 /*19*/].f_14 = { -1147.5525f, 4923.6914f, 320.0419f };
	Local_396[15 /*19*/].f_17 = 264.5329f;
	Local_396[16 /*19*/].f_14 = { -769.4426f, 5541.166f, 232.4886f };
	Local_396[16 /*19*/].f_17 = 196.6876f;
	Local_396[17 /*19*/].f_14 = { -732.1653f, 5812.6724f, 216.4172f };
	Local_396[17 /*19*/].f_17 = 236.9917f;
	Local_396[18 /*19*/].f_14 = { -1147.5525f, 4923.6914f, 150.0419f };
	Local_396[18 /*19*/].f_17 = 264.5329f;
	Local_396[19 /*19*/].f_14 = { -769.4426f, 5541.166f, 152.4886f };
	Local_396[19 /*19*/].f_17 = 196.6876f;
}

void func_774(var uParam0)//Position - 0x907AD
{
	struct<3> Var0;
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -100f, -55f, 0f) };
				Var0.f_2 = 0.62f;
				func_303(11, joaat("dinghy"), Var0, Local_396[11 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 4, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[11 /*19*/], false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_396[11 /*19*/], Var0, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_396[11 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[11 /*19*/], true, 1);
				ENTITY::SET_ENTITY_LOD_DIST(Local_396[11 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_396[11 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_396[11 /*19*/], true);
				if (!PED::IS_PED_INJURED(Local_394[4 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[4 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[4 /*40*/], 118, false);
					__LIB_16__::func_881(Local_394[4 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[5 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[5 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[5 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[5 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[5 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[6 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[6 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[6 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[6 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[6 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[7 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[7 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[7 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[7 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[7 /*40*/], 634);
				}
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[11 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0f);
				*uParam0++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_394[4 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[11 /*19*/], false))
					{
						if (Local_992.f_2 < 50f)
						{
							func_762(Local_394[4 /*40*/], Local_396[11 /*19*/], 1, &(Local_396[11 /*19*/].f_9), 1000, 55, -90f, 55f, 0f);
						}
						else
						{
							func_762(Local_394[4 /*40*/], Local_396[11 /*19*/], 1, &(Local_396[11 /*19*/].f_9), 1000, 55, -95f, 55f, 0f);
						}
						func_759(Local_396[11 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_394[5 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[5 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[5 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[5 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[5 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[5 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[6 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[6 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[6 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[6 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[6 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[6 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[7 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[7 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[7 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[7 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[7 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[7 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_775(var uParam0)//Position - 0x90BD6
{
	struct<3> Var0;
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("dinghy"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("dinghy")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -95f, -50f, 0f) };
				Var0.f_2 = 0.62f;
				func_303(10, joaat("dinghy"), Var0, Local_396[10 /*19*/].f_17, joaat("S_M_Y_BlackOps_01"), 1, 0, 3, 1, -1, joaat("WEAPON_CARBINERIFLE"));
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[10 /*19*/], false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_396[10 /*19*/], Var0, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_396[10 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
					}
				}
				ENTITY::SET_ENTITY_LOD_DIST(Local_396[10 /*19*/], 1500);
				VEHICLE::SET_VEHICLE_COLOURS(Local_396[10 /*19*/], 0, 0);
				VEHICLE::SET_BOAT_SINKS_WHEN_WRECKED(Local_396[10 /*19*/], true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[10 /*19*/], true, 1);
				if (!PED::IS_PED_INJURED(Local_394[0 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[0 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[0 /*40*/], 118, false);
					__LIB_16__::func_881(Local_394[0 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[1 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[1 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[1 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[1 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[1 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[2 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[2 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[2 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[2 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[2 /*40*/], 634);
				}
				if (!PED::IS_PED_INJURED(Local_394[3 /*40*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_394[3 /*40*/], 116, false);
					PED::SET_PED_CONFIG_FLAG(Local_394[3 /*40*/], 118, false);
					WEAPON::GIVE_WEAPON_TO_PED(Local_394[3 /*40*/], joaat("WEAPON_MICROSMG"), -1, true, true);
					__LIB_16__::func_881(Local_394[3 /*40*/], 634);
				}
				iLocal_515 = 0;
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[10 /*19*/], "DH_2B_ENEMY_BOATS_GROUP", 0f);
				*uParam0++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_394[0 /*40*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[10 /*19*/], false))
					{
						if (Local_992.f_2 < 50f)
						{
							func_762(Local_394[0 /*40*/], Local_396[10 /*19*/], 1, &(Local_396[10 /*19*/].f_9), 1000, 55, -70f, 30f, 0f);
						}
						else
						{
							func_762(Local_394[0 /*40*/], Local_396[10 /*19*/], 1, &(Local_396[10 /*19*/].f_9), 1000, 55, -90f, 30f, 0f);
						}
						func_759(Local_396[10 /*19*/]);
						if (!PED::IS_PED_INJURED(Local_394[1 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[1 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[1 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[1 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[1 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[1 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[2 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[2 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[2 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[2 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[2 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[2 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (!PED::IS_PED_INJURED(Local_394[3 /*40*/]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_394[3 /*40*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[3 /*40*/], joaat("SCRIPT_TASK_DRIVE_BY")) != 1)
								{
									TASK::TASK_DRIVE_BY(Local_394[3 /*40*/], 0, Local_396[0 /*19*/], 0f, 0f, 0f, -1f, 60, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_394[3 /*40*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
							{
								TASK::TASK_COMBAT_PED(Local_394[3 /*40*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
			break;
	}
}

void func_776()//Position - 0x91003
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	bool bVar3;
	float fVar4;
	struct<3> Var5;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
	}
	if (__LIB_14__::func_466() == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			}
			Var1 = { ENTITY::GET_ENTITY_ROTATION(Local_396[0 /*19*/], 2) };
			if (Var1.f_0 > 15f)
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[0 /*19*/], 2, 0f, 0f, 1f, 0f, -12f, 0f, 0, true, true, true, false, true);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[0 /*19*/], 2, 0f, 0f, -1f, 0f, 12f, 0f, 0, true, true, true, false, true);
			}
			else if (Var1.f_0 < -15f)
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[0 /*19*/], 2, 0f, 0f, -1f, 0f, -12f, 0f, 0, true, true, true, false, true);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[0 /*19*/], 2, 0f, 0f, 1f, 0f, 12f, 0f, 0, true, true, true, false, true);
			}
		}
	}
	if (iLocal_1000 == 0)
	{
		if (__LIB_14__::func_466() == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_346[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[0], true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_396[1 /*19*/], true);
				}
				bVar3 = false;
				fVar4 = 30f;
				iVar2 = 0;
				while (iVar2 < 5)
				{
					if (!bVar3)
					{
						Var5 = { func_777(iVar2) };
						if (Var0.f_0 < Var5.f_0 && !ENTITY::IS_ENTITY_AT_COORD(Local_396[0 /*19*/], Var5, 35f, 35f, 35f, false, true, 0))
						{
							switch (iVar2)
							{
								case 0:
									fVar4 = 13f;
									break;
								case 1:
									fVar4 = 15f;
									break;
								case 2:
									fVar4 = 22f;
									break;
								case 3:
									fVar4 = 28f;
									break;
							}
							Local_462 = { Var5 };
							bVar3 = true;
						}
					}
					iVar2++;
				}
				if (!bVar3)
				{
					Local_462 = { 1754.4716f, 3283.0715f, 40.0925f };
				}
				TASK::TASK_HELI_MISSION(iLocal_346[0], Local_396[0 /*19*/], 0, 0, Local_462, 4, fVar4, 5f, -1f, SYSTEM::FLOOR(Local_462.f_2), 15, -1f, 320);
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_396[0 /*19*/], 0f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_396[1 /*19*/], false, false);
				}
				AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_FRANKLIN");
				AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_346[1], 0f);
				}
				else
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
				}
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(PLAYER::PLAYER_PED_ID(), 0f);
				iLocal_1000 = 1;
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(Local_396[0 /*19*/], Local_462, 30f, 30f, 30f, false, true, 0) || Var0.f_0 > Local_462.f_0)
	{
		iLocal_1000 = 0;
	}
	if (__LIB_14__::func_466() == 0)
	{
		if (iLocal_1000 == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_396[1 /*19*/], false);
				}
				AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_AS_FRANKLIN");
				AUDIO::START_AUDIO_SCENE("DH_2B_ESCAPE_AS_MICHAEL");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_346[1], "DH_2B_FRANKLIN_GROUP", 0f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[1], true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[1], 3, false);
				PED::SET_PED_ACCURACY(iLocal_346[1], 100);
				PED::SET_PED_FIRING_PATTERN(iLocal_346[1], joaat("FIRING_PATTERN_BURST_FIRE"));
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_346[1], 1000f, 0);
				PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::SET_ENTITY_COLLISION(Local_396[1 /*19*/], true, false);
				}
				iLocal_1000 = 0;
			}
		}
	}
}

Vector3 func_777(int iParam0)//Position - 0x91391
{
	switch (iParam0)
	{
		case 0:
			return -963f, 5561f, 60f;
			break;
		case 1:
			return -701f, 5412f, 136f;
			break;
		case 2:
			return -343f, 4842f, 266f;
			break;
		case 3:
			return 468f, 4066f, 220f;
			break;
		case 4:
			return 1754.4716f, 3283.0715f, 40.0925f;
			break;
	}
	return 1754.4716f, 3283.0715f, 40.0925f;
}

void func_778(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x91436
{
	float fVar0;
	int iVar1;
	switch (iLocal_537)
	{
		case 0:
			if (__LIB_17__::func_474(&iLocal_346, 0, 1))
			{
				HUD::CLEAR_HELP(true);
				CAM::DESTROY_ALL_CAMS(false);
				Local_539.f_12 = iLocal_346[iLocal_346.f_7];
				if (iLocal_894 == 8)
				{
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
							}
						}
					}
				}
				iLocal_537++;
			}
			if (bParam4 == 1)
			{
				Local_539.f_12 = iLocal_346[2];
				iLocal_931 = 2;
				iLocal_537++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_539.f_12))
			{
				if (PED::IS_PED_IN_COVER(Local_539.f_12, false))
				{
					if (PED::IS_PED_IN_COVER_FACING_LEFT(Local_539.f_12))
					{
						fVar0 = -90f;
					}
					else
					{
						fVar0 = 90f;
					}
				}
			}
			if (bParam0)
			{
				if (!__LIB_17__::func_97(&Local_539, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if (__LIB_37__::func_936(&iLocal_346, 1, 1, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_346[iLocal_346.f_5]))
						{
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_346[iLocal_346.f_5], false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_346[iLocal_346.f_5], false);
							PED::SET_PED_DIES_WHEN_INJURED(iLocal_346[iLocal_346.f_5], true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[iLocal_346.f_5], iLocal_391);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 12, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 29, true);
							PED::SET_PED_MAX_HEALTH(iLocal_346[iLocal_346.f_5], 1800);
							ENTITY::SET_ENTITY_HEALTH(iLocal_346[iLocal_346.f_5], 1800, 0);
						}
						__LIB_0__::func_497(624, 1, 0);
						iLocal_537 = 0;
					}
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
				}
			}
			if (bParam1)
			{
				if (!__LIB_17__::func_97(&Local_539, 3, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					if (__LIB_37__::func_936(&iLocal_346, 1, 1, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_346[iLocal_346.f_5]))
						{
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_346[iLocal_346.f_5], false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_346[iLocal_346.f_5], false);
							PED::SET_PED_DIES_WHEN_INJURED(iLocal_346[iLocal_346.f_5], true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[iLocal_346.f_5], iLocal_391);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 12, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 29, true);
							PED::SET_PED_MAX_HEALTH(iLocal_346[iLocal_346.f_5], 1800);
							ENTITY::SET_ENTITY_HEALTH(iLocal_346[iLocal_346.f_5], 1800, 0);
						}
						__LIB_0__::func_497(624, 1, 0);
						iLocal_537 = 0;
					}
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar0);
				}
			}
			if (bParam4)
			{
				if (!func_780(&Local_932, 0))
				{
					if (CAM::DOES_CAM_EXIST(Local_932.f_1))
					{
						if (__LIB_14__::func_466() != 2)
						{
							if (CAM::GET_CAM_SPLINE_NODE_INDEX(Local_932.f_1) >= Local_932.f_1218)
							{
								if (__LIB_16__::func_896(&iLocal_346, 2))
								{
									if (__LIB_37__::func_936(&iLocal_346, 1, 1, 1))
									{
										if (!PED::IS_PED_INJURED(iLocal_346[iLocal_346.f_5]))
										{
											PED::SET_PED_CAN_BE_TARGETTED(iLocal_346[iLocal_346.f_5], false);
											PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_346[iLocal_346.f_5], false);
											PED::SET_PED_DIES_WHEN_INJURED(iLocal_346[iLocal_346.f_5], true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[iLocal_346.f_5], iLocal_391);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 12, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 29, true);
											PED::SET_PED_MAX_HEALTH(iLocal_346[iLocal_346.f_5], 1800);
											ENTITY::SET_ENTITY_HEALTH(iLocal_346[iLocal_346.f_5], 1800, 0);
										}
										__LIB_0__::func_497(624, 1, 0);
									}
								}
							}
						}
					}
				}
				else
				{
					iLocal_537 = 0;
				}
			}
			if (bParam2)
			{
				if (bParam3)
				{
					iVar1 = 3;
				}
				else
				{
					iVar1 = 0;
				}
				iVar1 = 0;
				if (!__LIB_17__::func_97(&Local_539, iVar1, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
				{
					__LIB_0__::func_497(624, 1, 0);
					iLocal_537 = 0;
				}
				else
				{
					if (Local_539.f_19)
					{
						if (__LIB_14__::func_466() == 1)
						{
							PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
						}
					}
					if (Local_539.f_18)
					{
						if (!Local_539.f_19)
						{
							if (__LIB_37__::func_936(&iLocal_346, 1, 1, 0))
							{
								if (!PED::IS_PED_INJURED(iLocal_346[iLocal_346.f_5]))
								{
									PED::SET_PED_CAN_BE_TARGETTED(iLocal_346[iLocal_346.f_5], false);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_346[iLocal_346.f_5], false);
									PED::SET_PED_DIES_WHEN_INJURED(iLocal_346[iLocal_346.f_5], true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[iLocal_346.f_5], iLocal_391);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 12, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_346[iLocal_346.f_5], 29, true);
									PED::SET_PED_MAX_HEALTH(iLocal_346[iLocal_346.f_5], 1800);
									ENTITY::SET_ENTITY_HEALTH(iLocal_346[iLocal_346.f_5], 1800, 0);
								}
								if (__LIB_14__::func_466() == 1)
								{
									PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), true);
									PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
									func_779();
									if (bParam5)
									{
										if (iLocal_952 <= 1)
										{
											func_745(iLocal_952 == 0);
										}
									}
								}
								else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
								{
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								}
								Local_539.f_19 = 1;
							}
						}
					}
				}
			}
			break;
	}
}

void func_779()//Position - 0x9193E
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (!iLocal_515)
	{
		if (__LIB_14__::func_466() == 1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
				if (Var0.f_1 > 6280f)
				{
					fVar1 = -750f;
				}
				else
				{
					fVar1 = -920f;
				}
				if (Var0.f_0 < fVar1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[10 /*19*/], false))
					{
						Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_396[0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_396[10 /*19*/], true)) };
						if (Var2.f_1 < -10f)
						{
							Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -70f, -10f, 0f) };
							Var3.f_2 = 0f;
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &fVar4, false, false);
							if ((fVar4 <= 0f && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var3, -995.7561f, 6278.966f, -8.795349f, -772.1373f, 5839.6143f, 27.650452f, 90f, false, true)) && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var3, -892.7561f, 6052.966f, -8.795349f, -772.1373f, 5839.6143f, 27.650452f, 150f, false, true))
							{
								ENTITY::SET_ENTITY_COORDS(Local_396[10 /*19*/], Var3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_396[10 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[10 /*19*/], 30f);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[11 /*19*/], false))
					{
						Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_396[0 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_396[11 /*19*/], true)) };
						if (Var2.f_1 < -5f)
						{
							Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[0 /*19*/], -90f, -5f, 0f) };
							Var3.f_2 = 0f;
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &fVar4, false, false);
							if ((fVar4 <= 0f && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var3, -995.7561f, 6278.966f, -8.795349f, -772.1373f, 5839.6143f, 27.650452f, 90f, false, true)) && !OBJECT::IS_POINT_IN_ANGLED_AREA(Var3, -892.7561f, 6052.966f, -8.795349f, -772.1373f, 5839.6143f, 27.650452f, 150f, false, true))
							{
								ENTITY::SET_ENTITY_COORDS(Local_396[11 /*19*/], Var3, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_396[11 /*19*/], ENTITY::GET_ENTITY_HEADING(Local_396[0 /*19*/]));
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[11 /*19*/], 30f);
							}
						}
					}
				}
			}
		}
		iLocal_515 = 1;
	}
}

int func_780(var uParam0, bool bParam1)//Position - 0x91BA8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	switch (iLocal_931)
	{
		case 0:
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			func_812(uParam0, Local_396[1 /*19*/]);
			if (__LIB_15__::func_968(uParam0) && STREAMING::HAS_ANIM_DICT_LOADED("missswitch"))
			{
				CAM::DESTROY_ALL_CAMS(false);
				__LIB_16__::func_29(uParam0);
				CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				SYSTEM::SETTIMERB(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_396[1 /*19*/], 3);
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true) };
				Var1.f_2 = fLocal_941;
				ENTITY::SET_ENTITY_COORDS(Local_396[0 /*19*/], -1389.2123f, 6163.0684f, 16.4602f, true, true, true, true);
				ENTITY::SET_ENTITY_ROTATION(Local_396[0 /*19*/], -1.218f, 0.0503f, 39.5149f, 2, true);
				if (ENTITY::IS_ENTITY_IN_WATER(Local_396[1 /*19*/]) && Var2.f_2 > 9.5f)
				{
					CAM::SET_CAM_SPLINE_PHASE(uParam0->f_1, 0.5f);
				}
				else
				{
					Var1.f_2 = (Var1.f_2 - 6.7f);
					ENTITY::SET_ENTITY_COORDS(Local_396[1 /*19*/], -1389.2494f, 6163.116f, 10.2905f, true, true, true, true);
					ENTITY::SET_ENTITY_ROTATION(Local_396[1 /*19*/], -27.9389f, 1.3027f, 39.7102f, 2, true);
				}
				ENTITY::SET_ENTITY_VELOCITY(Local_396[0 /*19*/], ENTITY::GET_ENTITY_VELOCITY(Local_396[0 /*19*/]) * Vector(fLocal_942, fLocal_942, fLocal_942));
				ENTITY::SET_ENTITY_VELOCITY(Local_396[1 /*19*/], ENTITY::GET_ENTITY_VELOCITY(Local_396[1 /*19*/]) * Vector(fLocal_942, fLocal_942, fLocal_942));
				iLocal_946 = 0;
				iLocal_948 = 0;
				iLocal_949 = 0;
				iLocal_931 = 3;
			}
			break;
		case 3:
			iVar0 = __LIB_17__::func_108(uParam0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_944);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_945, 1f);
			if (!iLocal_946)
			{
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) > fLocal_947)
				{
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missswitch", "mid_mission_inside_helicopter_trevor", 4f, -8f, -1, 8, 0f, false, false, false);
					iLocal_946 = 1;
				}
			}
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218 + 1 && !iLocal_948)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_523 = MISC::GET_GAME_TIMER();
					iLocal_948 = 1;
				}
				if (((iVar0 >= uParam0->f_1218 + 2 && iLocal_948) && !iLocal_949) && MISC::GET_GAME_TIMER() >= iLocal_523 + 300)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_949 = 1;
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					iLocal_931 = 5;
				}
				else
				{
					return 0;
				}
			}
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, false);
				CAM::DESTROY_CAM(uParam0->f_1, false);
			}
			CAM::DESTROY_ALL_CAMS(false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(true);
			HUD::DISPLAY_HUD(true);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_VELOCITY(Local_396[1 /*19*/], ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_396[1 /*19*/]) * Vector(fLocal_943, fLocal_943, fLocal_943));
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], true, true, false);
			SYSTEM::SETTIMERA(0);
			iLocal_931 = 0;
			uParam0->f_1232 = 1;
			Local_332.f_20 = 0;
			STREAMING::REMOVE_ANIM_DICT("missswitch");
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_812(var uParam0, var uParam1)//Position - 0x93AA2
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -6.3674f, 8.7696f, 13f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 2.641f, -1.973f, 5.2269f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 20f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 0f;
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
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1000;
		uParam0->f_10[1 /*57*/].f_6 = { -6.361f, 9.2298f, 13.5f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 2.57f, -1.3947f, 3.8611f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 20f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0.965f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 0.05f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 1;
		uParam0->f_10[1 /*57*/].f_37 = 10;
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
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 1000;
		uParam0->f_10[2 /*57*/].f_6 = { -6.361f, 9.2298f, 13.5f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { 2.57f, -1.3947f, 3.8611f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 20f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0.965f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 0;
		uParam0->f_10[2 /*57*/].f_23 = 0f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 0.5f;
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
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 1000;
		uParam0->f_10[3 /*57*/].f_6 = { -6.4675f, 9.8042f, 6.2917f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { 0.2768f, -0.5341f, 1.5624f };
		uParam0->f_10[3 /*57*/].f_18 = 1;
		uParam0->f_10[3 /*57*/].f_19 = 1;
		uParam0->f_10[3 /*57*/].f_20 = 1;
		uParam0->f_10[3 /*57*/].f_21 = 25f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0.3f;
		uParam0->f_10[3 /*57*/].f_53 = 0;
		uParam0->f_10[3 /*57*/].f_23 = 0f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0f;
		uParam0->f_10[3 /*57*/].f_30 = 0;
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
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 1000;
		uParam0->f_10[4 /*57*/].f_6 = { -4.4901f, 10.2047f, 3.243f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { 0.546f, 0.4726f, -0.4947f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0.3f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0.5f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 1000;
		uParam0->f_10[5 /*57*/].f_6 = { 3.5055f, 8.4825f, 1.0037f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 35f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 2f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
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
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 1000;
		uParam0->f_10[6 /*57*/].f_6 = { 10.1406f, -1.3298f, 2.2008f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.064f, -0.0139f, 0.3411f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 40f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 0f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 0;
		uParam0->f_10[7 /*57*/].f_5 = 1000;
		uParam0->f_10[7 /*57*/].f_6 = { 1.068f, -14.402f, 2.1636f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 0.3122f, -0.0042f, 2.1375f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 49f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 0;
		uParam0->f_10[7 /*57*/].f_23 = 0f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 0f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 1;
		uParam0->f_10[7 /*57*/].f_37 = 11;
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
		uParam0->f_1151[0 /*2*/] = 0f;
		uParam0->f_1151[0 /*2*/].f_1 = 0.4f;
		uParam0->f_1151[1 /*2*/] = 1f;
		uParam0->f_1151[1 /*2*/].f_1 = 0.4f;
		uParam0->f_1151[2 /*2*/] = 1f;
		uParam0->f_1151[2 /*2*/].f_1 = 1f;
		uParam0->f_1151[3 /*2*/] = 2f;
		uParam0->f_1151[3 /*2*/].f_1 = 10f;
		uParam0->f_1151[4 /*2*/] = 3f;
		uParam0->f_1151[4 /*2*/].f_1 = 20f;
		uParam0->f_1151[5 /*2*/] = 3.6f;
		uParam0->f_1151[5 /*2*/].f_1 = 20f;
		uParam0->f_1151[6 /*2*/] = 4.4f;
		uParam0->f_1151[6 /*2*/].f_1 = 5f;
		uParam0->f_1151[7 /*2*/] = 5.8f;
		uParam0->f_1151[7 /*2*/].f_1 = 20f;
		uParam0->f_1151[8 /*2*/] = 6f;
		uParam0->f_1151[8 /*2*/].f_1 = 20f;
		uParam0->f_1151[9 /*2*/] = 7f;
		uParam0->f_1151[9 /*2*/].f_1 = 40f;
		uParam0->f_1184[0 /*2*/] = 0f;
		uParam0->f_1184[0 /*2*/].f_1 = 0f;
		uParam0->f_1184[1 /*2*/] = 0f;
		uParam0->f_1184[1 /*2*/].f_1 = 0f;
		uParam0->f_1184[2 /*2*/] = 0f;
		uParam0->f_1184[2 /*2*/].f_1 = 0f;
		uParam0->f_1184[3 /*2*/] = 0f;
		uParam0->f_1184[3 /*2*/].f_1 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 0;
		uParam0->f_1233 = 0.13f;
		uParam0->f_1234 = 0.5f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 100;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine_B.txt";
		uParam0->f_1225 = "CameraInfo_HEIST_DOCKS_MichaelToSubmarine_B.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = uParam1;
}

void func_829(int iParam0)//Position - 0x9615F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*40*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*iParam0)[iVar0 /*40*/], 1) < 320f || (iParam0[iVar0 /*40*/])->f_39 == 1)
			{
				__LIB_0__::func_631((*iParam0)[iVar0 /*40*/], &((iParam0[iVar0 /*40*/])->f_23), -1, PLAYER::PLAYER_ID(), 1, 0, 300f, 0, -1, -1, 1, 0);
			}
			else
			{
				__LIB_0__::func_621(&((iParam0[iVar0 /*40*/])->f_23));
			}
		}
		iVar0++;
	}
}

void func_831()//Position - 0x963D3
{
	if (__LIB_14__::func_466() == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	}
	else if (__LIB_14__::func_466() == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	}
}

void func_833()//Position - 0x9646C
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		VEHICLE::SET_VEHICLE_CEILING_HEIGHT(Local_396[0 /*19*/], 100f);
	}
	if (__LIB_14__::func_466() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_443[0]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_443[0], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 50f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_443[0]))
			{
				PED::DELETE_PED(&(iLocal_443[0]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_SharkTiger"));
			}
		}
	}
	if (iLocal_517 == 1)
	{
		func_778(0, 1, 0, 1, 0, 0);
		if (__LIB_14__::func_466() == 0 && iLocal_537 == 0)
		{
			if (iLocal_988 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_346[2], 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_988 = 1;
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		iLocal_411 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/]);
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
			{
				__LIB_0__::func_151("DS2_REL_WRONG", -1);
			}
			else if (__LIB_0__::func_1("DS2_REL_WRONG"))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		else if (__LIB_0__::func_1("DS2_REL_WRONG"))
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (iLocal_517 > 0)
	{
		if (__LIB_0__::func_611(&iLocal_990, 60000))
		{
			if (!func_924("FLYING SKILL PICK"))
			{
				if (__LIB_0__::func_425(71))
				{
					if ((__LIB_16__::func_883(0, 0) == 2 && __LIB_16__::func_883(0, 1) == 2) || (__LIB_16__::func_883(0, 0) == 3 && __LIB_16__::func_883(0, 1) == 3))
					{
						if (!__LIB_13__::func_755(&Local_872, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FLYLOT", 8, 0, 0, 0))
								{
									func_921("FLYING SKILL PICK", 1);
								}
							}
						}
					}
					else if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FEWFLY", 8, 0, 0, 0))
							{
								func_921("FLYING SKILL PICK", 1);
							}
						}
					}
				}
				else if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_NOFLY", 8, 0, 0, 0))
						{
							func_921("FLYING SKILL PICK", 1);
						}
					}
				}
			}
		}
	}
	switch (iLocal_517)
	{
		case 0:
			iLocal_471 = 0;
			iLocal_514 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			__LIB_0__::func_620(0);
			if (__LIB_14__::func_466() == 2)
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 1);
			}
			else if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_346[2], 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_346[2], 29, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_346[1], 101, true);
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[0 /*19*/], 1, false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_396[1 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_396[1 /*19*/], true, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[1 /*19*/], false);
				ENTITY::SET_ENTITY_PROOFS(Local_396[1 /*19*/], false, false, false, true, false, false, false, false);
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[1 /*19*/], 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, false, false, true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_442[1]))
					{
						ENTITY::DETACH_ENTITY(iLocal_442[1], true, true);
					}
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_442[1], -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_442[1], Local_396[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, true, false, true, false, 2, true, 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[0 /*19*/], 20f);
				VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_396[0 /*19*/], 0f);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_346[2], 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
			}
			__LIB_16__::func_880(&iLocal_346, 2, 0);
			__LIB_15__::func_306(1);
			__LIB_16__::func_918(500);
			iLocal_514 = 0;
			AUDIO::REQUEST_AMBIENT_AUDIO_BANK("PORT_OF_LS_2B_SUB_LIFT", false, -1);
			if (__LIB_14__::func_466() != 0)
			{
				__LIB_0__::func_229("DS2_S2MH", 7500, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
				{
					VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_396[0 /*19*/], 0);
				}
				VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_396[0 /*19*/], fLocal_432, fLocal_431, false);
			}
			__LIB_38__::func_768(6, "Pick Up Sub", 0, 0, 0, 1);
			iLocal_520 = MISC::GET_GAME_TIMER();
			iLocal_988 = 0;
			func_921("DROPPED THE SUB", 0);
			func_921("DS2_SUBBLIP", 0);
			STREAMING::REQUEST_PTFX_ASSET();
			iLocal_990 = MISC::GET_GAME_TIMER();
			func_921("FLYING SKILL PICK", 0);
			iLocal_517++;
			break;
		case 1:
			if (__LIB_14__::func_466() == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
					{
						VEHICLE::CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Local_396[0 /*19*/], 0);
						VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_396[0 /*19*/], fLocal_432, fLocal_431, false);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_396[1 /*19*/], "DH_2B_SUBMARINE_GROUP", 0f);
				}
				__LIB_17__::func_78(&iLocal_346, 0, 0);
				__LIB_16__::func_880(&iLocal_346, 0, 0);
				__LIB_16__::func_880(&iLocal_346, 1, 1);
				__LIB_16__::func_880(&iLocal_346, 2, 1);
				if (!func_924("CLEAR TC"))
				{
					func_921("CLEAR TC", 1);
				}
				if (__LIB_0__::func_501("DS2_S2MH", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_SURFACE"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_SURFACE");
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					if (__LIB_17__::func_733(&Local_872, ENTITY::GET_ENTITY_COORDS(Local_396[1 /*19*/], true), 0.1f, 0.1f, 0.1f, 0, Local_396[0 /*19*/], "DS2_FLYO", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_PICK_UP_SUB_CARGO"))
							{
								AUDIO::START_AUDIO_SCENE("DH_2B_PICK_UP_SUB_CARGO");
							}
							if (HUD::GET_BLIP_COLOUR(Local_872.f_5) != 3)
							{
								HUD::SET_BLIP_COLOUR(Local_872.f_5, 3);
							}
							if (!func_924("DS2_SUBBLIP"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_872.f_5, "DS2_SUBBLIP");
									func_921("DS2_SUBBLIP", 1);
								}
							}
							if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
							{
								if (!func_924("DS2_GRAP_HELP1"))
								{
									__LIB_0__::func_151("DS2_GRAP_HELP1", -1);
									func_921("DS2_GRAP_HELP1", 1);
								}
							}
							else if (__LIB_0__::func_1("DS2_GRAP_HELP1"))
							{
								HUD::CLEAR_HELP(true);
							}
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("PORT_OF_LS_2B_SUB_LIFT", false, -1))
							{
								if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], Local_396[1 /*19*/], fLocal_433);
									if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
									{
										if (STREAMING::HAS_PTFX_ASSET_LOADED())
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
											{
												iLocal_434 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_pls_sub_water_drips", Local_396[1 /*19*/], 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
												iLocal_989 = MISC::GET_GAME_TIMER();
											}
											HUD::REMOVE_BLIP(&(Local_872.f_5));
											__LIB_16__::func_318(&Local_872, 1, 0);
											VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
											{
												AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Sub_Lift", Local_396[1 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
											}
											if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
											{
												AUDIO::STOP_AUDIO_SCENE("DH_2B_ATTACH_SUB");
											}
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 4);
											iLocal_514 = 0;
											if (!PED::IS_PED_INJURED(iLocal_346[2]))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
												{
													if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
													{
														PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
														VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
													}
												}
											}
											__LIB_0__::func_345(&uLocal_48, 0, 0);
											iLocal_517++;
										}
									}
								}
								else if (__LIB_0__::func_611(&iLocal_520, 30000))
								{
									if (!func_924("DS2A_P6"))
									{
										if (!__LIB_13__::func_755(&Local_872, 1))
										{
											if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6", 8, 0, 0, 0))
											{
												func_921("DS2A_P6", 1);
												iLocal_538 = MISC::GET_GAME_TIMER();
											}
										}
									}
									else if (__LIB_0__::func_611(&iLocal_538, (15000 + MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000))))
									{
										func_921("DS2A_P6", 1);
									}
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							if (!__LIB_13__::func_755(&Local_872, 1))
							{
								if (__LIB_40__::func_496(0))
								{
									if (iLocal_514 == 0)
									{
										if (!__LIB_13__::func_755(&Local_872, 1))
										{
											if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P6", 8, 0, 0, 0))
											{
												iLocal_514 = 1;
											}
										}
									}
								}
							}
						}
						if (iLocal_514 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
							{
								if (__LIB_0__::func_568())
								{
									HUD::CLEAR_PRINTS();
									__LIB_0__::func_620(0);
								}
							}
							else if (!__LIB_0__::func_568())
							{
								if (__LIB_0__::func_501("DS2_FLYGB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								__LIB_0__::func_620(1);
							}
						}
					}
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
				}
				if (!func_924("ASSIGN MICHAEL TASK"))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(Local_396[1 /*19*/], true) };
					Var0.f_2 = 60.8358f;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						if (!PED::IS_PED_INJURED(iLocal_346[0]))
						{
							TASK::TASK_HELI_MISSION(iLocal_346[0], Local_396[0 /*19*/], 0, 0, Var0, 4, 50f, 2f, -1f, 100, 60, -1f, 0);
							func_921("ASSIGN MICHAEL TASK", 1);
						}
					}
				}
				else if (!func_924("DS2A_P5a"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P5a", 8, 0, 0, 0))
						{
							func_921("DS2A_P5a", 1);
						}
					}
				}
			}
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (!func_924("DS2A_CONNECT"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_CONNECT", 8, 0, 0, 0))
						{
							func_921("DS2A_CONNECT", 1);
						}
					}
				}
				else
				{
					iLocal_517++;
				}
			}
			break;
		case 3:
			if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GOT_SUB_2ND"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_872.f_5));
				}
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[1 /*19*/], -1, false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_346[2], true, false);
							}
						}
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_PICK_UP_SUB_CARGO"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_PICK_UP_SUB_CARGO");
				}
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (__LIB_14__::func_466() != 0)
				{
					__LIB_0__::func_229("DS2_S2MH", 7500, 0);
				}
				__LIB_16__::func_882(&iLocal_346, 0, 2, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
					iLocal_517++;
				}
			}
			break;
		case 4:
			func_778(0, 0, 1, 1, 0, 0);
			if (__LIB_14__::func_466() == 0 && iLocal_537 == 0)
			{
				func_304(Local_396[0 /*19*/], __LIB_16__::func_891(0, 5));
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_465 = 0;
				iLocal_517 = 0;
				iLocal_471 = 0;
				iLocal_894 = 9;
			}
			break;
	}
}

void func_839()//Position - 0x97220
{
	struct<3> Var0;
	if (__LIB_14__::func_466() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			}
		}
	}
	if (__LIB_14__::func_466() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_346[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
			}
		}
	}
	func_842();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_443[0]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_443[0], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 75f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_443[0]))
			{
				PED::DELETE_PED(&(iLocal_443[0]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_SharkTiger"));
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_346[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (iLocal_985 == 0)
			{
				Local_986 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_396[1 /*19*/], 100f, 100f, 0f) };
				Local_986.f_2 = 80f;
				TASK::TASK_HELI_MISSION(iLocal_346[0], Local_396[0 /*19*/], 0, 0, Local_986, 4, 20f, 30f, -1f, 80, 70, -1f, 320);
				iLocal_987 = MISC::GET_GAME_TIMER();
				iLocal_985 = 1;
			}
			else if (__LIB_0__::func_611(&iLocal_987, 3000))
			{
				iLocal_985 = 0;
			}
		}
	}
	switch (iLocal_517)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&Local_398, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[0]))
			{
				__LIB_0__::func_222(&Local_398, 1, iLocal_346[0], "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_0__::func_222(&Local_398, 3, iLocal_346[2], "FRANKLIN", 0, 1);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_SURFACE"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_GET_TO_SURFACE");
			}
			MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_346[1], 101, true);
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[0 /*19*/], 1, false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[1 /*19*/], -1, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_346[2], true, false);
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
				if (!PED::IS_PED_INJURED(iLocal_346[0]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_346[0], Local_396[0 /*19*/], false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_346[0], Local_396[0 /*19*/], -1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_396[1 /*19*/], false, -190f, -190f, -190f);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_396[1 /*19*/], 3);
			}
			__LIB_15__::func_306(1);
			__LIB_16__::func_918(500);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
			iLocal_520 = MISC::GET_GAME_TIMER();
			__LIB_38__::func_768(5, "Get to the surface", 0, 0, 0, 1);
			iLocal_491 = 1;
			iLocal_985 = 0;
			iLocal_517++;
			break;
		case 1:
			if (__LIB_0__::func_611(&iLocal_520, 1000))
			{
				iLocal_491 = 1;
				iLocal_514 = 0;
				__LIB_0__::func_229("DS2_ASSSUR", 7500, 0);
				iLocal_520 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_325();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_396[1 /*19*/], false, false, false, false, false, false, false, false);
				}
				iLocal_517++;
			}
			break;
		case 2:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (__LIB_0__::func_611(&iLocal_520, 60000))
			{
				if (!func_924("DS2A_P5c"))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P5c", 8, 0, 0, 0))
					{
						func_921("DS2A_P5c", 1);
						iLocal_538 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (__LIB_0__::func_611(&iLocal_538, 10000))
			{
				if (func_924("DS2A_P5c"))
				{
					func_921("DS2A_P5c", 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
				{
					if (Var0.f_2 > -2f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						__LIB_16__::func_880(&iLocal_346, 0, 0);
						__LIB_16__::func_880(&iLocal_346, 1, 1);
						__LIB_16__::func_880(&iLocal_346, 2, 1);
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						__LIB_0__::func_229("DS2_S2MH", 7500, 0);
						AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 4);
						iLocal_517++;
					}
					if (__LIB_0__::func_611(&iLocal_520, 5000))
					{
						if (!__LIB_13__::func_755(&Local_872, 1))
						{
							if (__LIB_40__::func_496(0))
							{
								if (iLocal_514 == 0)
								{
									if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P5", 8, 0, 0, 0))
									{
										iLocal_514 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_872.f_5));
			}
			__LIB_16__::func_882(&iLocal_346, 0, 2, 1);
			__LIB_17__::func_78(&iLocal_346, 0, 1);
			func_841();
			iLocal_517++;
			break;
		case 4:
			__LIB_16__::func_884(&iLocal_346);
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_465 = 0;
			iLocal_517 = 0;
			iLocal_471 = 0;
			iLocal_894 = 8;
			break;
	}
}

void func_841()//Position - 0x977D0
{
	if (HUD::DOES_BLIP_EXIST(iLocal_325))
	{
		HUD::REMOVE_BLIP(&iLocal_325);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_324))
	{
		HUD::REMOVE_BLIP(&iLocal_324);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_326))
	{
		HUD::REMOVE_BLIP(&iLocal_326);
	}
}

void func_842()//Position - 0x9780B
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	iVar0 = iLocal_442[1];
	iVar1 = Local_396[1 /*19*/];
	if (__LIB_0__::func_121(iVar0) && __LIB_0__::func_121(iVar1))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, iVar1))
		{
			func_844();
		}
		else if (!iLocal_954)
		{
			if ((!__LIB_16__::func_885(iVar0, -1255.3114f, 6793.4546f, -183.54549f, -1255.4441f, 6787.877f, -178.75322f, 4f) && !__LIB_16__::func_885(iVar0, -1255.5355f, 6803.3926f, -183.51219f, -1255.366f, 6797.565f, -177.5468f, 4f)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, -1258.6155f, 6783.494f, -182.62186f, -1257.913f, 6807.9717f, -173.94173f, 20f, false, true, 0))
			{
				fVar2 = 1.4f;
				fVar3 = 1f;
				fVar4 = 400f;
				Var5 = { -1f, -1f, -1f };
				Var6 = { -1f, -1f, -0.99f };
				Var7 = { 0f, -2.2f, -2.9f };
				Var8 = { 0f, 0f, 0f };
				Var9 = { 0f, 0f, -90f };
				if (ENTITY::IS_ENTITY_ATTACHED(iVar0))
				{
					ENTITY::DETACH_ENTITY(iVar0, false, true);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(iVar0, fVar4, fVar3, Var6, Var5, -1f, -1f, fVar2);
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(iVar0, iVar1, -1, 1, Var7, Var8, Var9, -1f, true, true, false, true, 2);
				iLocal_954 = 1;
			}
		}
	}
}

void func_844()//Position - 0x97ABF
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_442[1];
	iVar1 = Local_396[1 /*19*/];
	if (__LIB_0__::func_121(iVar0) && __LIB_0__::func_121(iVar1))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, iVar1))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iVar1, 1, 0f, -2f, -1.7f, 0f, 0f, 90f, true, false, true, false, 2, true, 0);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar0, iVar1, false);
			ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iVar1, iVar0, false);
			iLocal_954 = 0;
		}
	}
}

void func_846()//Position - 0x97B53
{
	if (__LIB_14__::func_466() == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_346[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1260.04f, 6802.21f, -174.41f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 200f)
	{
		func_299(27, 0f, 0f, 0f, 0f, 0, 1);
	}
	if (!func_924("WORLD_SHARK_SWIM"))
	{
		if (!PED::IS_PED_INJURED(iLocal_443[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_442[1], true), 50f, 50f, 100f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_443[0]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1291.6602f, 6841.8726f, -176.0327f, 1f, -1, 40000f, 0.5f);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1310.5876f, 6952.566f, -208.4632f, 1f, -1, 40000f, 0.5f);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_SHARK_SWIM", 0, false);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 150f, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_443[0], iLocal_617);
						func_921("WORLD_SHARK_SWIM", 1);
					}
				}
			}
		}
	}
	switch (iLocal_517)
	{
		case 0:
			if (func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1))
			{
				__LIB_16__::func_918(500);
				iLocal_471 = 0;
				iLocal_514 = 0;
				iLocal_520 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_229("DS2_USESON", 7500, 0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIND_CONTAINER"))
				{
					AUDIO::START_AUDIO_SCENE("DH_2B_FIND_CONTAINER");
				}
				__LIB_0__::func_741(1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
				{
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[1 /*19*/], false);
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_396[1 /*19*/], false);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_396[1 /*19*/], true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[1 /*19*/], false);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_396[1 /*19*/], 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[26 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_396[26 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_394[10 /*40*/]))
				{
					PED::DELETE_PED(&(Local_394[10 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[30 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_396[30 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_394[11 /*40*/]))
				{
					PED::DELETE_PED(&(Local_394[11 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[31 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_396[31 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("lazer"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_394[12 /*40*/]))
				{
					PED::DELETE_PED(&(Local_394[12 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_393[10 /*40*/]))
				{
					PED::DELETE_PED(&(Local_393[10 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_393[11 /*40*/]))
				{
					PED::DELETE_PED(&(Local_393[11 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_393[12 /*40*/]))
				{
					PED::DELETE_PED(&(Local_393[12 /*40*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_BlackOps_01"));
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(26, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(30, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(31, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(34, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(35, "DHF2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(97, "DHF2");
				if (!PED::IS_PED_INJURED(iLocal_346[0]))
				{
					__LIB_0__::func_222(&Local_398, 1, iLocal_346[0], "MICHAEL", 0, 1);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_222(&Local_398, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], false);
				}
				ENTITY::SET_ENTITY_PROOFS(Local_396[1 /*19*/], false, false, false, true, false, false, false, false);
				__LIB_15__::func_306(1);
				iLocal_520 = MISC::GET_GAME_TIMER();
				__LIB_38__::func_768(4, "Find the crate", 0, 0, 0, 1);
				__LIB_0__::func_499(628, 0);
				VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_396[1 /*19*/], false, -190f, -190f, -190f);
				iLocal_517++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&iLocal_520, 2000))
			{
				__LIB_16__::func_886(-1241.86f, 6796.08f, -180.88f, 1, 0);
				func_849(0);
				iLocal_471 = 0;
				iLocal_520 = MISC::GET_GAME_TIMER();
				__LIB_0__::func_151("DS2_TRACK_HELP", -1);
				iLocal_517++;
			}
			else
			{
				__LIB_1__::func_33(0);
				if (!func_924("DS2A_NOAPP"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_NOAPP", 8, 0, 0, 0))
							{
								func_921("DS2A_NOAPP", 1);
							}
						}
					}
				}
			}
			break;
		case 2:
			if (!func_924("DS2_SUB_CONT"))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_151("DS2_SUB_CONT", -1);
					func_921("DS2_SUB_CONT", 1);
				}
			}
			if (__LIB_0__::func_739())
			{
				if (!func_924("DS2A_LIVEAPP"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_LIVEAPP", 8, 0, 0, 0))
							{
								func_921("DS2A_LIVEAPP", 1);
							}
						}
					}
				}
			}
			else if (iLocal_471 == 0)
			{
				if (__LIB_0__::func_611(&iLocal_520, 5000))
				{
					HUD::CLEAR_PRINTS();
					__LIB_0__::func_229("DS2_LAPP", 7500, 0);
					iLocal_471 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
				{
					if (__LIB_17__::func_733(&Local_872, ENTITY::GET_ENTITY_COORDS(iLocal_442[1], true), 0.1f, 0.1f, 0.1f, 0, Local_396[1 /*19*/], "DS2_USESON", "DS2_CONG", "DS2_CONGB", 1, 0, 1, -1))
					{
					}
					else
					{
						if (iLocal_514 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
								{
									if (__LIB_0__::func_568())
									{
										HUD::CLEAR_PRINTS();
										__LIB_0__::func_620(0);
									}
								}
								else if (!__LIB_0__::func_568())
								{
									if (__LIB_0__::func_501("DS2_FLYGB", 0, 0))
									{
										HUD::CLEAR_PRINTS();
									}
									__LIB_0__::func_620(1);
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							HUD::SET_BLIP_ALPHA(Local_872.f_5, 0);
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_442[1], true), 30f, 30f, 30f, false, true, 0))
							{
								if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("PORT_OF_LS_ATTACH_CARGO", false, -1))
								{
									if (!func_924("DS2A_SEEDEV"))
									{
										if (!__LIB_13__::func_755(&Local_872, 1))
										{
											if (!__LIB_0__::func_75())
											{
												if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_SEEDEV", 8, 0, 0, 0))
												{
													func_921("DS2A_SEEDEV", 1);
												}
											}
										}
									}
									else
									{
										__LIB_0__::func_366(1);
										__LIB_16__::func_318(&Local_872, 1, 0);
										iLocal_517++;
									}
								}
							}
							else if (iLocal_514 == 0)
							{
								if (func_924("DS2A_LIVEAPP"))
								{
									if (__LIB_0__::func_611(&iLocal_520, 2000))
									{
										if (!__LIB_13__::func_755(&Local_872, 1))
										{
											if (__LIB_40__::func_496(0))
											{
												if (iLocal_514 == 0)
												{
													if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P2", 8, 0, 0, 0))
													{
														iLocal_520 = MISC::GET_GAME_TIMER();
														iLocal_514 = 1;
													}
												}
											}
										}
									}
								}
							}
							else if (!func_924("DS2A_UPD1"))
							{
								if (__LIB_0__::func_611(&iLocal_520, 30000))
								{
									if (!__LIB_13__::func_755(&Local_872, 1))
									{
										if (!__LIB_0__::func_75())
										{
											if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_UPD1", 8, 0, 0, 0))
											{
												func_921("DS2A_UPD1", 1);
												iLocal_520 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else if (!func_924("DS2A_UPD2"))
							{
								if (__LIB_0__::func_611(&iLocal_520, 24000))
								{
									if (!__LIB_13__::func_755(&Local_872, 1))
									{
										if (!__LIB_0__::func_75())
										{
											if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_UPD2", 8, 0, 0, 0))
											{
												func_921("DS2A_UPD2", 1);
												iLocal_520 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
							else if (!func_924("DS2A_UPD3"))
							{
								if (__LIB_0__::func_611(&iLocal_520, 24000))
								{
									if (!__LIB_13__::func_755(&Local_872, 1))
									{
										if (!__LIB_0__::func_75())
										{
											if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_UPD3", 8, 0, 0, 0))
											{
												func_921("DS2A_UPD3", 1);
												iLocal_520 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
				{
					if (__LIB_17__::func_733(&Local_872, ENTITY::GET_ENTITY_COORDS(iLocal_442[1], true), 0.1f, 0.1f, 0.1f, 0, Local_396[1 /*19*/], "DS2_GETCON", "DS2_CONG", "DS2_CONGB", 1, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							if (!func_924("DS2_CONTBLIP"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_872.f_5, "DS2_CONTBLIP");
									func_921("DS2_CONTBLIP", 1);
								}
							}
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_396[1 /*19*/], iLocal_442[1]))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									if (HUD::DOES_BLIP_EXIST(iLocal_324))
									{
										HUD::REMOVE_BLIP(&iLocal_324);
									}
									func_844();
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Attach_Cargo", Local_396[1 /*19*/], "DOCKS_HEIST_FINALE_2B_SOUNDS", false, 0);
									__LIB_16__::func_318(&Local_872, 1, 0);
									__LIB_0__::func_498(1, 628);
									__LIB_0__::func_741(0);
									__LIB_0__::func_366(1);
									iLocal_537 = 0;
									iLocal_517++;
								}
								else if (!func_924("DS2_PICKUPCH"))
								{
									__LIB_0__::func_151("DS2_PICKUPCH", -1);
									func_921("DS2_PICKUPCH", 1);
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], false))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_442[1], true), 40f, 40f, 40f, false, true, 0))
								{
									if (iLocal_471 == 0)
									{
										HUD::CLEAR_PRINTS();
										HUD::CLEAR_HELP(true);
										if (!HUD::DOES_BLIP_EXIST(iLocal_324))
										{
											iLocal_324 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_442[1], true));
										}
										__LIB_0__::func_229("DS2_RETCON", 7500, 0);
										iLocal_471 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		case 4:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 3);
			func_844();
			if (HUD::DOES_BLIP_EXIST(iLocal_324))
			{
				HUD::REMOVE_BLIP(&iLocal_324);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_396[0 /*19*/], -1411.9094f, 5957.873f, 40.3783f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_396[0 /*19*/], 221f);
			}
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIND_CONTAINER"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_FIND_CONTAINER");
			}
			iLocal_517++;
			break;
		case 5:
			if (!func_924("DS2A_GETDEV"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_GETDEV", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 4);
							func_921("DS2A_GETDEV", 1);
						}
					}
				}
			}
			else if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GOT_CONTAINER"))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_517 = 0;
				iLocal_537 = 0;
				iLocal_894 = 7;
			}
			break;
	}
}

int func_849(int iParam0)//Position - 0x98726
{
	if (__LIB_26__::func_655(17, 0, 1, 0))
	{
		if (iParam0 == 1)
		{
			MISC::SET_BIT(&Global_8137, 22);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_8137, 22);
		}
		return 1;
	}
	return 0;
}

void func_859()//Position - 0x991E8
{
	struct<3> Var0;
	if (!func_924("DS2A_SPLANE"))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(-999.2316f, 6248.24f, 1.13868f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false) < 1500f)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[26 /*19*/], false))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), ENTITY::GET_ENTITY_COORDS(Local_396[26 /*19*/], true), true))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_396[26 /*19*/]))
					{
						if (__LIB_0__::func_611(&iLocal_428, 12000))
						{
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_PLANE"))
							{
								AUDIO::START_AUDIO_SCENE("DH_2B_SEE_PLANE");
							}
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_SPLANE", 8, 0, 0, 0))
							{
								func_921("DS2A_SPLANE", 1);
							}
						}
					}
				}
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 250f, 250f, 130f, false, true, 0))
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_396[0 /*19*/], 0f);
		}
		else
		{
			VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_396[0 /*19*/], 1f);
		}
	}
	if (iLocal_517 > 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(Local_396[1 /*19*/]))
			{
				if (!func_924("VEHICLE_WATER_SPLASH_HEAVY_SCRIPT"))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "VEHICLE_WATER_SPLASH_HEAVY_SCRIPT", Local_396[1 /*19*/], 0, false, 0);
					func_921("VEHICLE_WATER_SPLASH_HEAVY_SCRIPT", 1);
				}
			}
		}
	}
	switch (iLocal_517)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
				}
			}
			__LIB_16__::func_918(500);
			iLocal_471 = 0;
			__LIB_0__::func_325();
			__LIB_0__::func_620(0);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RELEASE_SUB"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_RELEASE_SUB");
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
				__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_346[2], 29, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], false);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 6.5f, 4);
			iLocal_471 = 0;
			iLocal_491 = 1;
			iLocal_537 = 0;
			func_921("DS2_GRAP_HELP2", 0);
			__LIB_38__::func_768(3, "Drop the sub", 0, 0, 0, 1);
			iLocal_950 = 0;
			iLocal_517++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (__LIB_17__::func_733(&Local_872, -1388.26f, 6160.88f, 0.34f, 0.1f, 0.1f, 0.1f, 0, Local_396[0 /*19*/], "DS2_RELSUB", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
				{
				}
				else if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 250f, 250f, 130f, false, true, 0))
					{
						if (iLocal_950 == 0)
						{
							if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
							{
								iLocal_950 = MISC::GET_GAME_TIMER();
							}
						}
						iLocal_984 = 1;
						if (!func_924("DS2_GRAP_HELP2"))
						{
							__LIB_0__::func_151("DS2_GRAP_HELP2", -1);
							func_921("DS2_GRAP_HELP2", 1);
						}
						if (iLocal_471 == 1)
						{
							if (__LIB_0__::func_501("DS2_FLYRET", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_324))
							{
								HUD::REMOVE_BLIP(&iLocal_324);
							}
							__LIB_0__::func_229("DS2_RELSUB", 7500, 0);
							iLocal_471 = 0;
						}
						if (!func_860() || (ENTITY::IS_ENTITY_IN_WATER(Local_396[1 /*19*/]) && ENTITY::GET_ENTITY_HEIGHT(Local_396[1 /*19*/], ENTITY::GET_ENTITY_COORDS(Local_396[1 /*19*/], true), true, true) < 1f))
						{
							if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
								{
									if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
									{
										HUD::REMOVE_BLIP(&(Local_872.f_5));
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
									{
										VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], 0, fLocal_433);
									}
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									__LIB_16__::func_880(&iLocal_346, 1, 1);
									__LIB_16__::func_880(&iLocal_346, 2, 0);
									Local_332.f_15 = 0;
									iLocal_950 = MISC::GET_GAME_TIMER();
									iLocal_517++;
								}
							}
						}
						else
						{
							Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							if (!func_924("DS2A_P1c"))
							{
								if (Var0.f_2 > 100f)
								{
									if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P1c", 8, 0, 0, 0))
									{
										func_921("DS2A_P1c", 1);
										iLocal_538 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (__LIB_0__::func_611(&iLocal_538, (15000 + MISC::GET_RANDOM_INT_IN_RANGE(1000, 5000))))
							{
								func_921("DS2A_P1c", 1);
							}
						}
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
							{
								PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
							}
						}
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 260f, 260f, 130f, false, true, 0))
						{
							if (iLocal_471 == 0)
							{
								if (iLocal_984 == 1)
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									__LIB_0__::func_229("DS2_FLYRET", 7500, 0);
									iLocal_471 = 1;
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_872.f_5));
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RELEASE_SUB"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_RELEASE_SUB");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_396[1 /*19*/], -1, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], -1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				func_304(Local_396[0 /*19*/], __LIB_16__::func_891(0, 5));
			}
			iLocal_517++;
			break;
		case 3:
			func_778(0, 0, 0, 0, 1, 0);
			if (Local_932.f_1232)
			{
				if (__LIB_14__::func_466() == 2 && iLocal_537 == 0)
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_396[1 /*19*/], 0f);
					func_921("SUB IN WATER", 1);
					__LIB_17__::func_78(&iLocal_346, 2, 0);
					if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_TREV_SUB"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_396[1 /*19*/], true);
						}
						AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
						__LIB_16__::func_884(&iLocal_346);
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						Local_932.f_1232 = 0;
						iLocal_517++;
					}
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_346[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						TASK::TASK_HELI_MISSION(iLocal_346[0], Local_396[0 /*19*/], Local_396[1 /*19*/], 0, 0f, 0f, 0f, 12, 20f, 20f, -1f, 30, 20, -1f, 0);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[1 /*19*/], 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, false, false, true);
			}
			iLocal_465 = 0;
			iLocal_517 = 0;
			iLocal_894 = 6;
			break;
	}
}

int func_860()//Position - 0x99905
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_396[1 /*19*/], -1331.4f, 6129.2f, 6.6f, -1284.1f, 6136.8f, 6f, 60f, true, false, 0))
	{
		return 1;
	}
	return 0;
}

void func_861()//Position - 0x99941
{
	func_689();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_346[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
			}
		}
	}
	if (!func_924("TURN OFF PROOFS"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_396[6 /*19*/], true), ENTITY::GET_ENTITY_COORDS(Local_396[1 /*19*/], true), true) > 30f)
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
					ENTITY::SET_ENTITY_PROOFS(Local_396[1 /*19*/], false, false, false, false, false, false, false, false);
					func_921("TURN OFF PROOFS", 1);
				}
			}
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SUB_PICKED_UP_SCENE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_396[6 /*19*/], true), ENTITY::GET_ENTITY_COORDS(Local_396[1 /*19*/], true), true) > 10f)
				{
					AUDIO::STOP_AUDIO_SCENE("DH_2B_SUB_PICKED_UP_SCENE");
				}
			}
		}
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1388.26f, 6160.88f, 0.34f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 2500f)
		{
			func_299(31, 0f, 0f, 0f, 0, 0, 1);
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.6334f, 3285.0278f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 400f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_413))
				{
					PED::DELETE_PED(&iLocal_413);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Floyd"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Floyd"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_414))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_414))
				{
					PED::DELETE_PED(&iLocal_414);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[5 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[5 /*19*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_396[5 /*19*/], 0f);
					VEHICLE::DELETE_VEHICLE(&(Local_396[5 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[6 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[6 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_396[6 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer"));
				}
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[4 /*19*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_396[4 /*19*/]))
				{
					VEHICLE::DELETE_VEHICLE(&(Local_396[4 /*19*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_741(0, 0));
				}
			}
		}
	}
	if (iLocal_517 > 0)
	{
		__LIB_0__::func_467();
		if (!func_924("SEE THE SHIPS"))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-164.3709f, 4176.9414f, 30.3069f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false) < 1000f)
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), -164.3709f, 4176.9414f, 30.3069f, true))
				{
					if (func_299(28, 0f, 0f, 0f, 0, 0, 1))
					{
						func_921("SEE THE SHIPS", 1);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						iLocal_427 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		else if (!func_924("DS2A_SBOATS"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[27 /*19*/], false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_396[27 /*19*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false) < 300f)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_396[27 /*19*/]))
					{
						if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), ENTITY::GET_ENTITY_COORDS(Local_396[27 /*19*/], true), false))
						{
							if (__LIB_0__::func_611(&iLocal_427, 4000))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_BOATS"))
								{
									if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
									{
										AUDIO::START_AUDIO_SCENE("DH_2B_SEE_BOATS");
									}
									if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_SBOATS", 8, 0, 0, 0))
									{
										func_921("DS2A_SBOATS", 1);
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[27 /*19*/], false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(-164.3709f, 4176.9414f, 30.3069f, ENTITY::GET_ENTITY_COORDS(Local_396[27 /*19*/], true), false) < 300f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[27 /*19*/], false))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_396[27 /*19*/], 786469);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[28 /*19*/], false))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_396[28 /*19*/], 786469);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[29 /*19*/], false))
					{
						VEHICLE::SET_PLAYBACK_TO_USE_AI(Local_396[29 /*19*/], 786469);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[27 /*19*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_396[27 /*19*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false) > 700f)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
					{
						AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_BOATS");
					}
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_BOATS");
			}
		}
		if (!func_924("SEE THE PLANE"))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-999.2316f, 6248.24f, 1.13868f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false) < 1000f)
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), -1131.8038f, 5913.6406f, 25.2705f, true))
				{
					if (func_299(29, 0f, 0f, 0f, 0, 0, 1))
					{
						func_921("SEE THE PLANE", 1);
						iLocal_428 = MISC::GET_GAME_TIMER();
					}
				}
			}
		}
		else if (!func_924("DS2A_SPLANE"))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-999.2316f, 6248.24f, 1.13868f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), false) < 1500f)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[26 /*19*/], false))
				{
					if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("submersible"), ENTITY::GET_ENTITY_COORDS(Local_396[26 /*19*/], true), true))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_396[26 /*19*/]))
						{
							if (__LIB_0__::func_611(&iLocal_428, 12000))
							{
								if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_PLANE"))
								{
									AUDIO::START_AUDIO_SCENE("DH_2B_SEE_PLANE");
								}
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_SPLANE", 8, 0, 0, 0))
								{
									func_921("DS2A_SPLANE", 1);
								}
							}
						}
					}
				}
			}
		}
	}
	switch (iLocal_517)
	{
		case 0:
			__LIB_0__::func_620(0);
			if (__LIB_14__::func_466() != 0)
			{
				func_862(0, 1);
			}
			else
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
					PED::SET_PED_CONFIG_FLAG(iLocal_346[2], 29, true);
					__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
				}
				__LIB_16__::func_882(&iLocal_346, 0, 2, 1);
				__LIB_38__::func_768(2, "FLY_TO_SEA", 0, 0, 0, 1);
				iLocal_514 = 0;
				VEHICLE::REMOVE_VEHICLE_RECORDING(33, "DHF2");
				iLocal_517++;
			}
			break;
		case 1:
			__LIB_16__::func_918(500);
			iLocal_491 = 1;
			iLocal_514 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_DROP_ZONE"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
			}
			iLocal_517++;
			break;
		case 2:
			if (__LIB_17__::func_733(&Local_872, -1388.26f, 6160.88f, 0.34f, 600f, 600f, 600f, 0, Local_396[0 /*19*/], "DS2_FLY", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
						{
							iLocal_517++;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
						{
							if (func_924("DROPPED THE SUB"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									if (__LIB_0__::func_568())
									{
										HUD::CLEAR_PRINTS();
										__LIB_0__::func_620(0);
									}
								}
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									HUD::SET_BLIP_ALPHA(Local_872.f_5, 255);
								}
								if (__LIB_0__::func_501("DS2_GIPOSFSUB", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_481))
								{
									HUD::REMOVE_BLIP(&iLocal_481);
								}
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], Local_396[1 /*19*/], fLocal_433);
								func_921("DROPPED THE SUB", 0);
							}
						}
						else if (!func_924("DROPPED THE SUB"))
						{
							if (iLocal_514 == 1)
							{
								if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
								{
									if (!__LIB_0__::func_568())
									{
										HUD::CLEAR_PRINTS();
										__LIB_0__::func_620(1);
									}
								}
							}
							if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_872.f_5, 0);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
							{
								VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], 0, fLocal_433);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
							{
								if (!HUD::DOES_BLIP_EXIST(iLocal_481))
								{
									iLocal_481 = __LIB_0__::func_639(Local_396[1 /*19*/], 0, 0);
									__LIB_16__::func_919("DS2_GIPOSFSUB");
								}
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
							func_921("DROPPED THE SUB", 1);
						}
					}
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (__LIB_40__::func_496(0))
						{
							if (iLocal_514 == 0)
							{
								if (!func_924("DS2A_P1"))
								{
									if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P1", 8, 0, 0, 0))
									{
										func_921("DS2A_P1", 1);
										iLocal_514 = 1;
									}
								}
							}
							else if (!func_924("DS2A_P1a"))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1388.26f, 6160.88f, 0.34f, 850f, 850f, 850f, false, true, 0))
								{
									if (!PED::IS_PED_INJURED(iLocal_346[1]))
									{
										if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_346[1]))
										{
											if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_P1a", 8, 0, 0, 0))
											{
												func_921("DS2A_P1a", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_514 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
					{
						if (__LIB_0__::func_568() && !func_924("DROPPED THE SUB"))
						{
							HUD::CLEAR_PRINTS();
							__LIB_0__::func_620(0);
						}
					}
					else if (!__LIB_0__::func_568())
					{
						if (__LIB_0__::func_501("DS2_FLYGB", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						__LIB_0__::func_620(1);
					}
				}
			}
			break;
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_872.f_5));
			}
			func_841();
			iLocal_517++;
			break;
		case 4:
			iLocal_465 = 0;
			iLocal_517 = 0;
			iLocal_471 = 0;
			iLocal_894 = 5;
			break;
	}
}

int func_862(int iParam0, bool bParam1)//Position - 0x9A3B5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_12__::func_894(iVar0);
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
		func_865(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_427(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_37__::func_936(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_865(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9A573
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
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, iParam3, true, true);
				__LIB_16__::func_895(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_621(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_429(*iParam0, bParam6);
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

void func_867()//Position - 0x9A62D
{
	int iVar0;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1723.2611f, 3262.0757f, 40.152885f, 1743.8894f, 3271.9702f, 45.189598f, 7.4375f, false, true, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_396[0 /*19*/]) != 1)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_396[0 /*19*/], 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_396[1 /*19*/]) != 1)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_396[1 /*19*/], 1);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		iLocal_411 = VEHICLE::GET_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/]);
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
			{
				if (!func_924("DS2_REL_WRONG"))
				{
					__LIB_0__::func_151("DS2_REL_WRONG", -1);
					func_921("DS2_REL_WRONG", 1);
				}
			}
			else if (__LIB_0__::func_1("DS2_REL_WRONG"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (__LIB_0__::func_1("DS2_REL_WRONG"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
	{
		if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
			{
				if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
				{
					if (!func_924("DS2_GRAPPLEH"))
					{
						VEHICLE::SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Local_396[0 /*19*/], fLocal_432, fLocal_431, false);
						HUD::CLEAR_HELP(true);
						__LIB_0__::func_151("DS2_GRAPPLEH", -1);
						func_921("DS2_GRAPPLEH", 1);
					}
				}
				else if (!func_924("DS2_GRAP_HELP1"))
				{
					__LIB_0__::func_151("DS2_GRAP_HELP1", -1);
					func_921("DS2_GRAP_HELP1", 1);
				}
			}
		}
		else
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 103 /*INPUT_VEH_GRAPPLING_HOOK*/, true);
				}
			}
			if (__LIB_0__::func_1("DS2_GRAPPLEH"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
	if (!func_924("DH2B_START"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_START"))
				{
					func_921("DH2B_START", 1);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
				}
			}
		}
	}
	if (!func_924("BUDDIES LEAVE"))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.6334f, 3285.0278f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
		{
			if (!PED::IS_PED_INJURED(iLocal_413))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1728.44f, 3294.27f, 41.22f, 1f, 45000, 0.25f, 0, -112.87f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iLocal_617);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_413, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (!PED::IS_PED_INJURED(iLocal_414))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_PAUSE(0, 500);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1727.38f, 3293.09f, 41.2f, 1f, 45000, 0.25f, 0, -144.39f);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_414, iLocal_617);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_414, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			func_921("BUDDIES LEAVE", 1);
		}
	}
	if (!func_924("ASSIGN TREVOR GET IN SUB"))
	{
		if (!PED::IS_PED_INJURED(iLocal_346[2]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_346[2], false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_346[2], false);
				if (PED::IS_PED_IN_ANY_HELI(iLocal_346[2]))
				{
					if (ENTITY::GET_ENTITY_SPEED(iVar0) < 0.1f && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iVar0) < 0.2f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
							TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1738.64f, 3267.09f, 41.18f, 1f, 45000, 0.25f, 0, 25f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_346[2], iLocal_617);
							PED::REMOVE_PED_FROM_GROUP(iLocal_346[2]);
							func_921("ASSIGN TREVOR GET IN SUB", 1);
							STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1738.64f, 3267.09f, 41.18f, 1f, 45000, 0.25f, 0, 25f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_346[2], iLocal_617);
					PED::REMOVE_PED_FROM_GROUP(iLocal_346[2]);
					func_921("ASSIGN TREVOR GET IN SUB", 1);
					STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1738.64f, 3267.09f, 41.18f, 1f, 45000, 0.25f, 0, 25f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_346[2], iLocal_617);
				PED::REMOVE_PED_FROM_GROUP(iLocal_346[2]);
				func_921("ASSIGN TREVOR GET IN SUB", 1);
				STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
			}
		}
	}
	else if (!func_924("PLAY GET IN ANIM"))
	{
		STREAMING::REQUEST_ANIM_DICT("missdocksheist2bfinale");
		if (STREAMING::HAS_ANIM_DICT_LOADED("missdocksheist2bfinale"))
		{
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				if (__LIB_16__::func_931(iLocal_346[2], 1738.64f, 3267.09f, 41.18f, 25f, 0.3f, 0.3f, 0.3f, 1135869952, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1738.64f, 3267.09f, 41.18f, 1f, 1f, 1f, false, true, 2))
				{
					iLocal_977 = PED::CREATE_SYNCHRONIZED_SCENE(1738.643f, 3267.095f, 41.179f, 0f, 0f, 25f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_346[2], iLocal_977, "missdocksheist2bfinale", "get_in_sub", 8f, -1000f, 2052, 16, 4f, 0);
					func_921("PLAY GET IN ANIM", 1);
				}
			}
		}
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) > 0.768f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) < 0.99f)
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_396[1 /*19*/], 0, false, false);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_346[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) > 0.99f)
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_346[2]);
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_396[1 /*19*/], 0, true);
							STREAMING::REMOVE_ANIM_DICT("missdocksheist2bfinale");
						}
					}
				}
			}
		}
	}
	switch (iLocal_517)
	{
		case 0:
			iLocal_471 = 0;
			iLocal_514 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
			}
			__LIB_0__::func_620(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(Local_396[0 /*19*/], 0f);
				VEHICLE::SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Local_396[0 /*19*/], 0f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
				ENTITY::SET_ENTITY_PROOFS(Local_396[1 /*19*/], false, false, false, true, false, false, false, false);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_346[2], true);
				PED::SET_PED_CONFIG_FLAG(iLocal_346[2], 29, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
			}
			__LIB_38__::func_768(1, "PICK_UP_THE_SUB_FROM_AIRSTRIP", 0, 0, 0, 1);
			__LIB_16__::func_880(&iLocal_346, 2, 0);
			__LIB_16__::func_318(&Local_872, 0, 0);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_DRIVE_TO_AIRSTRIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_2B_DRIVE_TO_AIRSTRIP");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_ATTACH_SUB");
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			__LIB_15__::func_306(1);
			__LIB_0__::func_638();
			__LIB_16__::func_918(500);
			iLocal_491 = 1;
			iLocal_514 = 0;
			iLocal_517++;
			break;
		case 1:
			if (!func_924("DS2A_TGIS"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_TGIS", 8, 0, 0, 0))
						{
							func_921("DS2A_TGIS", 1);
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
				{
					if (!func_924("DS2A_CHOP"))
					{
						if (!__LIB_13__::func_755(&Local_872, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_CHOP", 8, 0, 0, 0))
								{
									func_921("DS2A_CHOP", 1);
								}
							}
						}
					}
					else
					{
						iLocal_978 = MISC::GET_GAME_TIMER();
						iLocal_517++;
					}
				}
				else if (!func_924("DS2A_CHOP"))
				{
					if (!__LIB_13__::func_755(&Local_872, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_CHOP", 8, 0, 0, 0))
							{
								func_921("DS2A_CHOP", 1);
							}
						}
					}
				}
				else
				{
					iLocal_978 = MISC::GET_GAME_TIMER();
					iLocal_517++;
				}
			}
			break;
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_977) < 0.1f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
						}
					}
				}
			}
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_977) && !PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_DROP_ZONE"))
					{
						AUDIO::START_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
					}
				}
				else if (!func_924("DS2A_GETIN"))
				{
					if (__LIB_0__::func_611(&iLocal_978, MISC::GET_RANDOM_INT_IN_RANGE(20000, 24000)))
					{
						if (!__LIB_13__::func_755(&Local_872, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_GETIN", 8, 0, 0, 0))
								{
									func_921("DS2A_GETIN", 1);
									iLocal_978 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_978, MISC::GET_RANDOM_INT_IN_RANGE(20000, 24000)))
				{
					func_921("DS2A_GETIN", 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false) && !PED::IS_PED_INJURED(iLocal_346[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_441[0]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_441[0]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sub_cover_01"));
				}
				if (__LIB_32__::func_101(&Local_872, ENTITY::GET_ENTITY_COORDS(Local_396[1 /*19*/], true), 0.1f, 0.1f, 0.1f, 0, iLocal_346[1], Local_396[0 /*19*/], "DS2_GIPOSFSUB", "", "DS2_FLYGI", "DS2_FLYGB", 1, 0, 1, -1))
				{
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false) && !PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
						{
							if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_872.f_5, 0);
							}
						}
						else
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
							}
							if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
							{
								HUD::SET_BLIP_ALPHA(Local_872.f_5, 255);
							}
							if (__LIB_0__::func_501("DS2A_WAITTREV", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
						}
					}
					if (!func_924("DS2_SUBBLIP"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_872.f_5, "DS2_SUBBLIP");
							func_921("DS2_SUBBLIP", 1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
					{
						if (!VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
						{
							if (!func_924("DS2_GRAP_HELP1"))
							{
								__LIB_0__::func_151("DS2_GRAP_HELP1", -1);
								func_921("DS2_GRAP_HELP1", 1);
							}
						}
						else if (__LIB_0__::func_1("DS2_GRAP_HELP1"))
						{
							HUD::CLEAR_HELP(true);
						}
						if (HUD::GET_BLIP_COLOUR(Local_872.f_5) != 3)
						{
							HUD::SET_BLIP_COLOUR(Local_872.f_5, 3);
						}
						if (PED::IS_PED_IN_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], false))
						{
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Local_396[0 /*19*/]))
							{
								if (VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
								{
									HUD::CLEAR_PRINTS();
									HUD::CLEAR_HELP(true);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
									{
										VEHICLE::FORCE_SUBMARINE_SURFACE_MODE(Local_396[1 /*19*/], true);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
										VEHICLE::SET_VEHICLE_LIGHTS(Local_396[1 /*19*/], 4);
									}
									VEHICLE::STABILISE_ENTITY_ATTACHED_TO_HELI(Local_396[0 /*19*/], Local_396[1 /*19*/], fLocal_433);
									if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
									{
										HUD::REMOVE_BLIP(&(Local_872.f_5));
									}
									__LIB_16__::func_318(&Local_872, 1, 0);
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
									{
										AUDIO::STOP_AUDIO_SCENE("DH_2B_ATTACH_SUB");
									}
									AUDIO::START_AUDIO_SCENE("DH_2B_SUB_PICKED_UP_SCENE");
									iLocal_514 = 0;
									iLocal_517++;
								}
								else
								{
									if (func_924("DS2A_GSUB_DONE"))
									{
										if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_396[0 /*19*/], 1723.0226f, 3291.4106f, 39.20444f, 1740.8878f, 3254.1858f, 69.64639f, 36f, false, true, 0))
										{
											if (!func_924("DS2A_LOWER"))
											{
												if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_396[0 /*19*/]) > 56.2049f)
												{
													if (!__LIB_13__::func_755(&Local_872, 1))
													{
														if (!__LIB_0__::func_75())
														{
															if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_LOWER", 8, 0, 0, 0))
															{
																func_921("DS2A_LOWER", 1);
																iLocal_979 = MISC::GET_GAME_TIMER();
															}
														}
													}
												}
											}
											else if (__LIB_0__::func_611(&iLocal_979, MISC::GET_RANDOM_INT_IN_RANGE(14000, 16000)))
											{
												func_921("DS2A_LOWER", 0);
											}
										}
										else if (!func_924("DS2A_FLYOFF"))
										{
											if (!__LIB_13__::func_755(&Local_872, 1))
											{
												if (!__LIB_0__::func_75())
												{
													if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FLYOFF", 8, 0, 0, 0))
													{
														func_921("DS2A_FLYOFF", 1);
														iLocal_979 = MISC::GET_GAME_TIMER();
													}
												}
											}
										}
										else if (__LIB_0__::func_611(&iLocal_979, MISC::GET_RANDOM_INT_IN_RANGE(14000, 16000)))
										{
											func_921("DS2A_FLYOFF", 0);
										}
									}
									if (!func_924("FLYING SKILL AIRSTRIP"))
									{
										if (__LIB_0__::func_425(71))
										{
											if ((__LIB_16__::func_883(0, 0) == 2 || __LIB_16__::func_883(0, 0) == 3) && (__LIB_16__::func_883(0, 1) == 2 || __LIB_16__::func_883(0, 1) == 3))
											{
												if (!__LIB_13__::func_755(&Local_872, 1))
												{
													if (!__LIB_0__::func_75())
													{
														if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FLYLOT", 8, 0, 0, 0))
														{
															func_921("FLYING SKILL AIRSTRIP", 1);
														}
													}
												}
											}
											else if (!__LIB_13__::func_755(&Local_872, 1))
											{
												if (!__LIB_0__::func_75())
												{
													if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FEWFLY", 8, 0, 0, 0))
													{
														func_921("FLYING SKILL AIRSTRIP", 1);
													}
												}
											}
										}
										else if (!__LIB_13__::func_755(&Local_872, 1))
										{
											if (!__LIB_0__::func_75())
											{
												if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_NOFLY", 8, 0, 0, 0))
												{
													func_921("FLYING SKILL AIRSTRIP", 1);
												}
											}
										}
									}
								}
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
					{
						if (!__LIB_13__::func_755(&Local_872, 1))
						{
							if (__LIB_40__::func_496(0))
							{
								if (iLocal_514 == 0)
								{
									if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_PSUB", 8, 0, 0, 0))
									{
										iLocal_514 = 1;
										iLocal_416 = MISC::GET_GAME_TIMER();
									}
								}
								else if (!func_924("DS2A_GSUB"))
								{
									if (__LIB_0__::func_611(&iLocal_416, 7000))
									{
										if (!__LIB_13__::func_755(&Local_872, 1))
										{
											if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_GSUB", 8, 0, 0, 0))
											{
												func_921("DS2A_GSUB", 1);
												func_921("DS2A_GSUB_DONE", 1);
												iLocal_520 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (__LIB_0__::func_611(&iLocal_520, 16000))
								{
									func_921("DS2A_GSUB", 0);
								}
							}
						}
					}
					if (iLocal_514 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							if (__LIB_0__::func_568())
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_620(0);
							}
						}
						else if (!__LIB_0__::func_568())
						{
							if (__LIB_0__::func_501("DS2_FLYGB", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							__LIB_0__::func_620(1);
						}
					}
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				iLocal_517++;
			}
			break;
		case 4:
			if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_872.f_5));
			}
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GOT_SUB"))
				{
					iLocal_517++;
				}
			}
			break;
		case 5:
			if (!func_924("DS2A_GRABBED"))
			{
				if (!__LIB_13__::func_755(&Local_872, 1))
				{
					if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_GRABBED", 8, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
						func_921("DS2A_GRABBED", 1);
					}
				}
			}
			else
			{
				func_778(0, 0, 1, 1, 0, 0);
				if (__LIB_14__::func_466() == 0 && iLocal_537 == 0)
				{
					func_304(Local_396[0 /*19*/], __LIB_16__::func_891(0, 5));
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_465 = 0;
					iLocal_517 = 0;
					iLocal_471 = 0;
					iLocal_894 = 4;
				}
			}
			break;
	}
}

void func_872()//Position - 0x9B95B
{
	var uVar0[1];
	func_880();
	if (ENTITY::DOES_ENTITY_EXIST(Local_396[3 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[3 /*19*/], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[3 /*19*/], false))
			{
				if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), Local_396[3 /*19*/], -1, false, false))
				{
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1757.8193f, 3270.4543f, 40.2458f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 300f)
		{
			func_299(17, 1750.6334f, 3285.0278f, 40.0871f, 134.9916f, 0, 1);
		}
	}
	else
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(1757.8193f, 3270.4543f, 40.2458f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 350f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_396[0 /*19*/]));
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cargobob3"));
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_396[0 /*19*/]) != 2)
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_396[0 /*19*/], 2);
			}
		}
	}
	if (iLocal_974 == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[5 /*19*/]))
			{
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (!func_924("GO TO AI RECORDING"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1728.97f, 3264.86f, 41.22f, ENTITY::GET_ENTITY_COORDS(Local_396[5 /*19*/], true), true) < 2f)
					{
					}
				}
			}
			else if (!func_924("GO TO AI RECORDING"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[6 /*19*/], true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_396[5 /*19*/], true);
					func_921("GO TO AI RECORDING", 1);
				}
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1745.6748f, 3418.855f, 36.94403f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 560f)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_413))
		{
			func_299(21, 1730.73f, 3265.25f, 41.16f, -124.36f, 0, 1);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_414))
		{
			func_299(20, 1729.204f, 3262.7756f, 40.1735f, 274.1224f, 0, 1);
		}
		if (iLocal_973 == 0)
		{
			if (iLocal_974 == 0)
			{
				if (func_299(8, 1745.6003f, 3418.2341f, 36.9515f, 209.7394f, 0, 1))
				{
					iLocal_973 = 1;
				}
			}
		}
		else if (iLocal_974 == 0)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(34, "DHF2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(35, "DHF2");
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(34, "DHF2") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(35, "DHF2"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[6 /*19*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[5 /*19*/]) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[6 /*19*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[5 /*19*/], 34, "DHF2", true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_396[6 /*19*/], 35, "DHF2", true);
						VEHICLE::SET_PLAYBACK_SPEED(Local_396[5 /*19*/], 1.2f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_396[6 /*19*/], 1.2f);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_413) && ENTITY::DOES_ENTITY_EXIST(iLocal_414))
					{
						if (!PED::IS_PED_INJURED(iLocal_413) && !PED::IS_PED_INJURED(iLocal_414))
						{
							if (!__LIB_1__::func_606(iLocal_413, Local_396[5 /*19*/], -1))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_413, Local_396[5 /*19*/], -1);
							}
							if (!__LIB_1__::func_606(iLocal_414, Local_396[5 /*19*/], 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_414, Local_396[5 /*19*/], 0);
							}
							iLocal_974 = 1;
						}
					}
				}
			}
		}
		if (iLocal_974 == 1)
		{
			if (iLocal_973 == 0)
			{
				if (func_299(9, 1728.97f, 3264.86f, 40.0871f, 116.37f, 0, 1))
				{
					iLocal_973 = 1;
				}
			}
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.6334f, 3285.0278f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 650f)
	{
		if (iLocal_974 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[5 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_396[5 /*19*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_396[1 /*19*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("submersible"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[6 /*19*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_396[6 /*19*/]));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer"));
			}
			if (iLocal_973 == 1)
			{
				iLocal_973 = 0;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_413))
			{
				PED::DELETE_PED(&iLocal_413);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Floyd"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_414))
			{
				PED::DELETE_PED(&iLocal_414);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_396[1 /*19*/]) != 2)
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_396[1 /*19*/], false);
			}
		}
	}
	if (!func_924("DH_2B_DRIVE_TO_AIRSTRIP"))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_DRIVE_TO_AIRSTRIP"))
			{
				AUDIO::START_AUDIO_SCENE("DH_2B_DRIVE_TO_AIRSTRIP");
				func_921("DH_2B_DRIVE_TO_AIRSTRIP", 1);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			}
		}
	}
	if (iLocal_517 > 0)
	{
		__LIB_0__::func_467();
	}
	switch (iLocal_517)
	{
		case 0:
			__LIB_0__::func_620(0);
			if (__LIB_14__::func_466() != 0)
			{
				func_862(0, 1);
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_AREA_OCCUPIED(Vector(4.600849f, -1520.6035f, -1155.6343f) - Vector(1.5f, 4.5f, 3.5f), Vector(4.600849f, -1520.6035f, -1155.6343f) + Vector(1.5f, 4.5f, 3.5f), false, true, false, false, false, 0, false))
					{
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_222(&Local_398, 1, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_346[2], joaat("WEAPON_UNARMED"), false);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_346[2], 150);
					__LIB_0__::func_222(&Local_398, 2, iLocal_346[2], "TREVOR", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					__LIB_0__::func_222(&Local_398, 3, iLocal_346[1], "FRANKLIN", 0, 1);
				}
				__LIB_16__::func_882(&iLocal_346, 0, 2, 1);
				PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_396[4 /*19*/]))
				{
					uVar0[0] = Local_396[4 /*19*/];
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0[0], false) && __LIB_15__::func_990(uVar0[0], &Local_872, 3))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[2]) && PED::IS_PED_INJURED(iLocal_346[2]))
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_346[2], uVar0[0], 20000, 0, 1f, 1, 0);
						TASK::TASK_ENTER_VEHICLE(iLocal_346[1], uVar0[0], 20000, 2, 1f, 1, 0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_346[2], 1f);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_346[1], 1f);
				}
				__LIB_0__::func_364(38, 0);
				__LIB_0__::func_544(94, 1, 0, 1, 0);
				iLocal_973 = 0;
				iLocal_974 = 0;
				sLocal_975 = "DS2_GTAIR";
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				iLocal_517++;
			}
			break;
		case 1:
			__LIB_16__::func_918(500);
			iLocal_491 = 1;
			iLocal_514 = 0;
			if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_WHERET", 8, 0, 0, 0))
			{
				iLocal_517++;
			}
			break;
		case 2:
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				sLocal_975 = "DS2_GTAIRFLY";
			}
			else
			{
				sLocal_975 = "DS2_GTAIR";
			}
			if (func_878(&Local_872, 1757.8193f, 3270.4543f, 40.2458f, 0.001f, 0.001f, 2f, 1, iLocal_346[2], iLocal_346[1], 0, sLocal_975, "DS2_LEFTTREV", "DS2_LEFTFRAN", "", "DS2_WAITCREW", "DS2_FINDCAR", "DS2_AIRGBV", 0, 1, 3, 1, -1))
			{
			}
			else
			{
				func_876(iLocal_346[1], &uLocal_474);
				func_876(iLocal_346[2], &uLocal_475);
				if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
				{
					if (iLocal_435 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_435);
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1757.8193f, 3270.4543f, 40.2458f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 10f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1718.1594f, 3255.241f, 39.38364f, 1760.7218f, 3296.3428f, 48.133595f, 39.25f, false, true, 0))
					{
						if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 8f, 1, 1056964608, 0, 1, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_346[1]))
							{
								TASK::TASK_PAUSE(iLocal_346[1], 3000);
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
							__LIB_0__::func_638();
							iLocal_517++;
						}
					}
					if (iLocal_514 == 0)
					{
						if (__LIB_1__::func_854(PLAYER::PLAYER_PED_ID(), iLocal_346[2]) && __LIB_1__::func_854(PLAYER::PLAYER_PED_ID(), iLocal_346[1]))
						{
							if (!func_924("DS2A_DRI"))
							{
								if (!__LIB_13__::func_755(&Local_872, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_DRI", 8, 0, 0, 0))
										{
											func_921("DS2A_DRI", 1);
											iLocal_514 = 1;
										}
									}
								}
							}
						}
					}
					else if (!func_924("DS2A_DRIb"))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_DRIb", 8, 0, 0, 0))
						{
							func_921("DS2A_DRIb", 1);
						}
					}
					else if (!func_924("FLYING SKILL"))
					{
						if (__LIB_0__::func_425(71))
						{
							if ((__LIB_16__::func_883(0, 0) == 2 || __LIB_16__::func_883(0, 0) == 3) && (__LIB_16__::func_883(0, 1) == 2 || __LIB_16__::func_883(0, 1) == 3))
							{
								if (!__LIB_13__::func_755(&Local_872, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FLYVG", 8, 0, 0, 0))
										{
											func_921("FLYING SKILL", 1);
										}
									}
								}
							}
							else if (!__LIB_13__::func_755(&Local_872, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FLYOK", 8, 0, 0, 0))
									{
										func_921("FLYING SKILL", 1);
									}
								}
							}
						}
						else if (!__LIB_13__::func_755(&Local_872, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_FLYSH", 8, 0, 0, 0))
								{
									func_921("FLYING SKILL", 1);
								}
							}
						}
					}
					else if (!func_924("DS2A_1"))
					{
						if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_1", 8, 0, 0, 0))
						{
							func_921("DS2A_1", 1);
						}
					}
					if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1713.6846f, 3246.1907f, 39.57296f, 1786.5734f, 3298.6218f, 44.28436f, 53.5f, false, true, 0))
							{
								__LIB_0__::func_638();
								__LIB_16__::func_318(&Local_872, 1, 0);
								iLocal_517++;
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(1750.6334f, 3285.0278f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
				{
					if (!func_924("ASSIGN BUDDY TASKS"))
					{
						if (iLocal_974 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[5 /*19*/]))
								{
									if (!PED::IS_PED_INJURED(iLocal_413))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_413, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
										if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_413, false))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 0);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1730.73f, 3265.25f, 41.16f, 1f, 45000, 0.25f, 0, -124.36f);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_413, iLocal_617);
									}
									if (!PED::IS_PED_INJURED(iLocal_414))
									{
										TASK::TASK_LOOK_AT_ENTITY(iLocal_414, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
										if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_414, false))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1729.204f, 3262.7756f, 40.1735f, 1f, 45000, 0.25f, 0, 274.1224f);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, true);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_414, iLocal_617);
									}
									func_921("ASSIGN BUDDY TASKS", 1);
								}
							}
						}
					}
				}
				if (iLocal_517 == 2)
				{
					if (iLocal_514 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
						{
							if (__LIB_0__::func_568())
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_620(0);
							}
						}
						else if (!__LIB_0__::func_568())
						{
							if (__LIB_0__::func_501("DS2_AIRGB", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							__LIB_0__::func_620(1);
						}
					}
				}
			}
			break;
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_872.f_5))
			{
				HUD::REMOVE_BLIP(&(Local_872.f_5));
			}
			__LIB_0__::func_638();
			func_841();
			iLocal_976 = MISC::GET_GAME_TIMER();
			iLocal_517++;
			break;
		case 4:
			if (!func_924("DS2A_ARRIVE"))
			{
				if (__LIB_15__::func_872(&Local_398, "D2BAUD", "DS2A_ARRIVE", 8, 0, 0, 0) || __LIB_0__::func_611(&iLocal_976, 2000))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(7f, 4f, 3);
					func_921("DS2A_ARRIVE", 1);
				}
			}
			else
			{
				iLocal_465 = 0;
				iLocal_517 = 0;
				iLocal_471 = 0;
				iLocal_894 = 3;
			}
			break;
	}
}

void func_876(int iParam0, var uParam1)//Position - 0x9C86D
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		if (!*uParam1)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_346[1], true);
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			iVar2 = __LIB_0__::func_336(iParam0, 0);
			if (iVar1 == joaat("bodhi2") && (iVar2 != -1 && iVar2 != 0))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 106, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 107, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 108, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 109, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 110, true);
			}
		}
		*uParam1 = 1;
	}
	else
	{
		if (*uParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 106, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 107, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 108, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 109, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 110, false);
		}
		*uParam1 = 0;
	}
}

bool func_878(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, var uParam5, int iParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, bool bParam14, bool bParam15, int iParam16, bool bParam17, int iParam18)//Position - 0x9C9B1
{
	return __LIB_17__::func_223(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 5, uParam4, uParam5, iParam6, 0, sParam7, sParam8, sParam9, sParam10, sParam11, sParam12, bParam14, bParam15, sParam13, 0, iParam16, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

void func_880()//Position - 0x9CA39
{
	switch (iLocal_971)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_396[5 /*19*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1728.97f, 3264.86f, 40.0871f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
					{
						AUDIO::SET_HORN_PERMANENTLY_ON_TIME(Local_396[5 /*19*/], 500f);
						iLocal_972 = MISC::GET_GAME_TIMER();
						iLocal_971++;
					}
				}
			}
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false))
			{
				if (__LIB_0__::func_611(&iLocal_972, 1000))
				{
					AUDIO::SET_HORN_PERMANENTLY_ON_TIME(Local_396[5 /*19*/], 600f);
					iLocal_971++;
				}
			}
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[5 /*19*/], false))
			{
				if (__LIB_0__::func_611(&iLocal_972, 1000))
				{
					AUDIO::SET_HORN_PERMANENTLY_ON_TIME(Local_396[5 /*19*/], 800f);
					iLocal_971++;
				}
			}
			break;
	}
}

void func_881()//Position - 0x9CB27
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	iLocal_494 = 1;
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_396[4 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[4 /*19*/], false))
		{
			VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_396[4 /*19*/]);
		}
	}
	if (iLocal_485 == 0)
	{
		if (iLocal_488)
		{
			__LIB_16__::func_918(500);
			iLocal_488 = 0;
		}
		else if (iLocal_487 == 0)
		{
			MISC::SET_WEATHER_TYPE_PERSIST("extrasunny");
			iLocal_494 = 1;
			if (__LIB_14__::func_466() == 2)
			{
				CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_INT", 8);
			}
			if (__LIB_14__::func_466() == 0)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("LSDH_2B_INT", 124, 8);
			}
			if (__LIB_14__::func_466() == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("LSDH_2B_INT", 112, 8);
			}
			if (!PED::IS_PED_INJURED(Global_96938.f_9[2]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[2], true, true);
				iLocal_346[2] = Global_96938.f_9[2];
			}
			if (!PED::IS_PED_INJURED(Global_96938.f_9[3]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[3], true, true);
				iLocal_346[0] = Global_96938.f_9[3];
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_410))
			{
				iLocal_410 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1158.581f, -1519.2471f, 9.6308f, 2f, joaat("v_res_tre_sofa_mess_c"), true, false, true);
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_410, false, false);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(4.80476f, -1523.046f, -1157.1743f) - Vector(1.75f, 65f, 65f), Vector(4.80476f, -1523.046f, -1157.1743f) + Vector(1.75f, 65f, 65f), false, true);
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			iLocal_970 = 0;
			iLocal_489 = 0;
			iLocal_487++;
		}
		else if (iLocal_487 == 1)
		{
			if (__LIB_0__::func_90())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				else
				{
					SYSTEM::WAIT(0);
				}
				if (__LIB_14__::func_466() != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
					{
						while (!func_299(5, -1155.21f, -1517.32f, 3.36f, 0f, 0, 1))
						{
							SYSTEM::WAIT(0);
						}
						iLocal_970 = 1;
					}
				}
				if (__LIB_14__::func_466() == 2)
				{
					if (__LIB_14__::func_466() != 0)
					{
						__LIB_16__::func_896(&iLocal_346, 0);
						__LIB_37__::func_936(&iLocal_346, 1, 1, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[2], iLocal_391);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iLocal_346[2]);
					}
				}
				if (__LIB_14__::func_466() == 1)
				{
					if (__LIB_14__::func_466() != 0)
					{
						__LIB_16__::func_896(&iLocal_346, 0);
						__LIB_37__::func_936(&iLocal_346, 1, 1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_346[1], iLocal_391);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iLocal_346[1]);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], false, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_96938.f_9[0], "Wade", 1, joaat("IG_Wade"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[1], false, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Global_96938.f_9[1], "Floyd", 1, joaat("IG_Floyd"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_346[2], false, true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_346[2], "Trevor", 0, joaat("Player_Two"), 0);
					}
				}
				else if (__LIB_14__::func_466() != 2)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Trevor", 2, joaat("Player_Two"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_346[1], false, true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_346[1], "Franklin", 0, joaat("Player_One"), 0);
					}
				}
				else if (__LIB_14__::func_466() != 1)
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Franklin", 2, joaat("Player_One"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_346[0], false, true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_346[0], "Michael", 0, joaat("Player_Zero"), 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_490))
				{
				}
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				if (__LIB_14__::func_466() == 2)
				{
					CUTSCENE::START_CUTSCENE(256);
				}
				else if (__LIB_14__::func_466() == 0)
				{
					CUTSCENE::START_CUTSCENE(0);
				}
				else if (__LIB_14__::func_466() == 1)
				{
					CUTSCENE::START_CUTSCENE(256);
				}
				RECORDING::REPLAY_START_EVENT(4);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				iLocal_486 = 0;
				iLocal_485 = 1;
			}
		}
	}
	if (iLocal_485 == 1)
	{
		if (!iLocal_486)
		{
			if (iLocal_489 == 1)
			{
				if (__LIB_0__::func_611(&iLocal_969, 2000))
				{
					if (__LIB_1__::func_254())
					{
						iLocal_486 = 1;
					}
				}
			}
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_489 == 0)
			{
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
					if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")) && __LIB_14__::func_660(ENTITY::GET_ENTITY_MODEL(iVar0), __LIB_13__::func_790(), 1))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 50f)
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
							iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
							MISC::GET_MODEL_DIMENSIONS(iVar1, &Var2, &Var3);
							fVar4 = (-Var2.f_2 + Var3.f_2);
							if (__LIB_0__::func_119(iVar0) == 2 || fVar4 > 2.6f)
							{
								VEHICLE::DELETE_VEHICLE(&iVar0);
							}
							else if (!__LIB_38__::func_169(2, 1, -1150.4517f, -1531.4274f, 3.2486f, 5f))
							{
								__LIB_31__::func_730(iVar0, -1157.6465f, -1522.1222f, 3.3238f, 35.2272f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -1157.6465f, -1522.1222f, 3.3238f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar0, 35.2272f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
							}
							else if (!MISC::IS_POSITION_OCCUPIED(-1155.5046f, -1520.1312f, 3.3472f, 5f, false, true, false, false, false, 0, false) || ENTITY::IS_ENTITY_AT_COORD(iVar0, -1155.5046f, -1520.1312f, 3.3472f, 5f, 5f, 5f, false, true, 0))
							{
								__LIB_31__::func_730(iVar0, -1155.5046f, -1520.1312f, 3.3472f, 35.1124f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -1155.5046f, -1520.1312f, 3.3472f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar0, 35.1124f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
							}
							else
							{
								__LIB_31__::func_730(iVar0, -1191.0647f, -1504.3447f, 3.3697f, 303.3213f, 24, 0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -1191.0647f, -1504.3447f, 3.3697f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar0, 303.3213f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
							}
						}
					}
				}
				MISC::CLEAR_AREA(-1154.6117f, -1520.07f, 3.3456f, 20f, true, false, false, false);
				__LIB_0__::func_342(24);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[0]))
					{
						if (PED::IS_PED_WEARING_HELMET(iLocal_346[0]))
						{
							PED::REMOVE_PED_HELMET(iLocal_346[0], true);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (PED::IS_PED_WEARING_HELMET(iLocal_346[1]))
						{
							PED::REMOVE_PED_HELMET(iLocal_346[1], true);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (PED::IS_PED_WEARING_HELMET(iLocal_346[2]))
						{
							PED::REMOVE_PED_HELMET(iLocal_346[2], true);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					}
				}
				iLocal_490 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 49);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
				{
					__LIB_17__::func_41(iLocal_346[1], 41);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
				{
					__LIB_17__::func_41(iLocal_346[2], 47);
				}
				CAM::STOP_GAMEPLAY_HINT(true);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Floyd"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
				iLocal_969 = MISC::GET_GAME_TIMER();
				iLocal_489 = 1;
			}
		}
		if (!__LIB_38__::func_169(2, 1, -1154.6028f, -1524.2793f, 3.2583f, 40f))
		{
			if (iLocal_970 == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_396[3 /*19*/]))
				{
					if (!MISC::IS_POSITION_OCCUPIED(-1155.5077f, -1520.1217f, 3.3467f, 5f, false, true, false, false, false, 0, false))
					{
						func_299(0, -1155.5077f, -1520.1217f, 3.3467f, 35.335f, 0, 1);
					}
					else if (!MISC::IS_POSITION_OCCUPIED(-1158.4879f, -1529.3704f, 3.2503f, 5f, false, true, false, false, false, 0, false))
					{
						func_299(0, -1158.4879f, -1529.3704f, 3.2503f, 35.6275f, 0, 1);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_396[3 /*19*/]))
			{
				if (!MISC::IS_POSITION_OCCUPIED(-1155.5077f, -1520.1217f, 3.3467f, 5f, false, true, false, false, false, 0, false))
				{
					func_299(0, -1155.5077f, -1520.1217f, 3.3467f, 35.335f, 0, 1);
				}
				else if (!MISC::IS_POSITION_OCCUPIED(-1158.4879f, -1529.3704f, 3.2503f, 5f, false, true, false, false, false, 0, false))
				{
					func_299(0, -1158.4879f, -1529.3704f, 3.2503f, 35.6275f, 0, 1);
				}
			}
		}
		if (CUTSCENE::GET_CUTSCENE_TIME() > 134367)
		{
			if (!func_924("PRELOAD OUTFITS"))
			{
				__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 49);
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					__LIB_17__::func_41(iLocal_346[1], 41);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					__LIB_17__::func_41(iLocal_346[2], 47);
				}
				func_921("PRELOAD OUTFITS", 1);
			}
		}
		if (CUTSCENE::GET_CUTSCENE_TIME() > 144367)
		{
			if (!func_924("SWITCH OUTFIT"))
			{
				__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 49);
				func_311(PLAYER::PLAYER_PED_ID(), 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_16__::func_888(0);
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					__LIB_17__::func_41(iLocal_346[1], 41);
					func_311(iLocal_346[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					__LIB_16__::func_888(1);
				}
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					__LIB_17__::func_41(iLocal_346[2], 47);
					func_311(iLocal_346[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					__LIB_16__::func_888(2);
				}
				func_921("SWITCH OUTFIT", 1);
			}
		}
		if (iLocal_489 == 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
			{
				iVar5 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Franklin", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					iLocal_346[1] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar5);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
			{
				iVar6 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar6))
				{
					iLocal_346[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!iLocal_486)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1153.01f, -1524.73f, 4.26f, 1f, 20000, 0.25f, 0, 40000f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_346[2], true, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_346[1], true, 1);
					PED::FORCE_PED_MOTION_STATE(iLocal_346[1], joaat("MotionState_Walk"), true, 1, false);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_489 == 1)
			{
				iLocal_485 = 2;
			}
		}
	}
	if (iLocal_485 == 2)
	{
		if (iLocal_486)
		{
			RECORDING::REPLAY_CANCEL_EVENT();
			CUTSCENE::STOP_CUTSCENE(false);
			if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_16__::func_928(500);
			}
			while (!func_299(4, -1155.21f, -1517.32f, 3.36f, 0, 0, 1) || !func_299(3, -1157.92f, -1519.33f, 3.36f, 0, 0, 1))
			{
				SYSTEM::WAIT(0);
			}
			__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 49);
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_17__::func_41(iLocal_346[1], 41);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				__LIB_17__::func_41(iLocal_346[2], 47);
			}
			while (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				SYSTEM::WAIT(0);
			}
			while (!PED::IS_PED_INJURED(iLocal_346[2]) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_346[2]))
			{
				SYSTEM::WAIT(0);
			}
			while (!PED::IS_PED_INJURED(iLocal_346[1]) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_346[1]))
			{
				SYSTEM::WAIT(0);
			}
			func_311(PLAYER::PLAYER_PED_ID(), 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_311(iLocal_346[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_311(iLocal_346[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_16__::func_888(0);
			__LIB_16__::func_888(2);
			__LIB_16__::func_888(1);
			func_885(0);
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1149.6552f, -1521.8536f, 3.3298f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 76.515f);
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_346[2], -1148.6027f, -1525.542f, 3.3486f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_346[2], 79.3802f);
			}
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_346[1], -1148.9454f, -1523.2805f, 3.3434f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_346[1], 48.7325f);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_410))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_410, true, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_410);
		}
		RECORDING::REPLAY_STOP_EVENT();
		__LIB_16__::func_887();
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		iLocal_487 = 0;
		iLocal_894 = 2;
		iLocal_485 = 0;
		__LIB_0__::func_552(0);
		__LIB_0__::func_468(75);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(4.80476f, -1523.046f, -1157.1743f) - Vector(1.75f, 65f, 65f), Vector(4.80476f, -1523.046f, -1157.1743f) + Vector(1.75f, 65f, 65f), true, true);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		MISC::SET_WEATHER_TYPE_PERSIST("extrasunny");
		iLocal_494 = 0;
	}
	if (iLocal_485 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_486 = 1;
		iLocal_485 = 1;
	}
}

void func_885(bool bParam0)//Position - 0x9D996
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]) && !PED::IS_PED_INJURED(iLocal_346[0]))
	{
		if (!bParam0)
		{
			func_311(iLocal_346[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_886(iLocal_346[0], 14, 112);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]) && !PED::IS_PED_INJURED(iLocal_346[1]))
	{
		if (!bParam0)
		{
			func_311(iLocal_346[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_886(iLocal_346[1], 14, 158);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]) && !PED::IS_PED_INJURED(iLocal_346[2]))
	{
		if (!bParam0)
		{
			func_311(iLocal_346[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_886(iLocal_346[2], 14, 154);
		}
	}
}

int func_886(int iParam0, int iParam1, int iParam2)//Position - 0x9DA85
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
	if (!func_313(iParam0, iParam1, iParam2))
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
				func_886(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_886(iParam0, 14, uVar5[iVar3]))
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
	if (func_320(iParam0, iVar0, &iVar7, 0))
	{
		func_311(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_312(iParam0, iVar0, &iVar7))
	{
		func_311(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

void func_902()//Position - 0x9F9D7
{
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.9403f, 3923.9775f, 549.3435f) - Vector(29.25f, 250f, 250f), Vector(44.9403f, 3923.9775f, 549.3435f) + Vector(29.25f, 250f, 250f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.618195f, 4237.4746f, -148.38226f) - Vector(29.25f, 250f, 250f), Vector(44.618195f, 4237.4746f, -148.38226f) + Vector(29.25f, 250f, 250f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(56.610474f, 3277.4119f, 1740.1006f) - Vector(18.5f, 78.25f, 78.25f), Vector(56.610474f, 3277.4119f, 1740.1006f) + Vector(18.5f, 78.25f, 78.25f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(51.0751f, 5189.528f, -2174.8457f) - Vector(59f, 250f, 250f), Vector(51.0751f, 5189.528f, -2174.8457f) + Vector(59f, 250f, 250f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(36.12573f, 6266.9785f, -1002.4548f) - Vector(59f, 250f, 250f), Vector(36.12573f, 6266.9785f, -1002.4548f) + Vector(59f, 250f, 250f), false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(37.04243f, 5366.7896f, -1385.1182f) - Vector(59f, 250f, 250f), Vector(37.04243f, 5366.7896f, -1385.1182f) + Vector(59f, 250f, 250f), false, true, true, true);
	MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
	MISC::CLEAR_AREA(-1063.6212f, 6311.7153f, -6.9619f, 500f, true, false, false, false);
	if (__LIB_14__::func_466() == 0)
	{
		uLocal_403 = __LIB_13__::func_804(0);
	}
	if (__LIB_14__::func_466() == 2)
	{
		uLocal_403 = __LIB_13__::func_804(2);
	}
	if (__LIB_14__::func_466() == 1)
	{
		uLocal_403 = __LIB_13__::func_804(1);
	}
	__LIB_0__::func_424(1);
	__LIB_15__::func_955(6, 1);
	__LIB_0__::func_364(38, 0);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKH2B", 0);
	__LIB_0__::func_544(94, 1, 0, 1, 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_391);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_392);
	PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_391);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_392);
	__LIB_16__::func_889(0, 3, 1);
	__LIB_16__::func_889(1, 3, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_392, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_392, iLocal_391);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_391, iLocal_392);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_391, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_391);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_392, iLocal_392);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1735.5898f, 3222.9558f, 47.8356f, 1770.1437f, 3264.656f, 28.1638f, false, true);
	MISC::CLEAR_AREA(1770.1437f, 3264.656f, 28.1638f, 1000f, true, true, false, false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	while (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\PORT_OF_LS_01_GENERAL", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	if (__LIB_0__::func_323())
	{
		if (__LIB_0__::func_344() >= 0 && __LIB_0__::func_344() < 13)
		{
			iLocal_536 = __LIB_0__::func_344();
			if (Global_94618 == 1)
			{
				if (iLocal_536 < 13)
				{
					if (iLocal_536 == 0)
					{
						__LIB_0__::func_427(1751.7072f, 3286.3362f, 40.114f, 103.6627f, 1, 0);
						iLocal_894 = 3;
					}
					else if (iLocal_536 == 1)
					{
						__LIB_0__::func_427(910.1729f, 3335.728f, 270.3783f, 39.5182f, 1, 0);
						iLocal_894 = 4;
					}
					else if (iLocal_536 == 2)
					{
						__LIB_0__::func_427(-1389.311f, 6163.189f, 40.3783f, 39.5182f, 1, 0);
						iLocal_894 = 5;
					}
					else if (iLocal_536 == 3)
					{
						__LIB_0__::func_427(-1402.3759f, 6145.041f, -12.5895f, 39.5182f, 1, 0);
						iLocal_894 = 6;
					}
					else if (iLocal_536 == 4)
					{
						__LIB_0__::func_427(-1255.28f, 6795.65f, -135.63f, 39.5182f, 1, 0);
						iLocal_894 = 7;
					}
					else if (iLocal_536 == 5)
					{
						__LIB_0__::func_427(-1552.4729f, 6488.5664f, 118.626f, 347.6931f, 1, 0);
						iLocal_894 = 8;
					}
					else if (iLocal_536 == 6)
					{
						__LIB_0__::func_427(-1411.9094f, 5957.873f, 40.3783f, 221.983f, 1, 0);
						iLocal_894 = 9;
					}
					else if (iLocal_536 == 7)
					{
						__LIB_0__::func_427(-152.3409f, 4654.3423f, 261.3565f, 219.9027f, 1, 0);
						iLocal_894 = 10;
					}
					else if (iLocal_536 == 8)
					{
						__LIB_0__::func_427(1748.0168f, 3283.6812f, 95.0743f, 186.6673f, 1, 0);
						iLocal_894 = 11;
					}
					else if (iLocal_536 == 9)
					{
						__LIB_0__::func_427(1755.7994f, 3275.817f, 40.1628f, 310.7707f, 1, 0);
						iLocal_894 = 12;
					}
				}
				else
				{
					iLocal_894 = 13;
				}
			}
			else if (iLocal_536 < 13)
			{
				if (iLocal_536 == 0)
				{
					__LIB_0__::func_427(-1149.6552f, -1521.8536f, 3.3298f, 76.515f, 1, 0);
					iLocal_894 = 2;
				}
				else if (iLocal_536 == 1)
				{
					__LIB_0__::func_427(1751.7072f, 3286.3362f, 40.114f, 103.6627f, 1, 0);
					iLocal_894 = 3;
				}
				else if (iLocal_536 == 2)
				{
					__LIB_0__::func_427(910.1729f, 3335.728f, 270.3783f, 39.5182f, 1, 0);
					iLocal_894 = 4;
				}
				else if (iLocal_536 == 3)
				{
					__LIB_0__::func_427(-1389.311f, 6163.189f, 40.3783f, 39.5182f, 1, 0);
					iLocal_894 = 5;
				}
				else if (iLocal_536 == 4)
				{
					__LIB_0__::func_427(-1402.3759f, 6145.041f, -12.5895f, 39.5182f, 1, 0);
					iLocal_894 = 6;
				}
				else if (iLocal_536 == 5)
				{
					__LIB_0__::func_427(-1255.28f, 6795.65f, -135.63f, 39.5182f, 1, 0);
					iLocal_894 = 7;
				}
				else if (iLocal_536 == 6)
				{
					__LIB_0__::func_427(-1552.4729f, 6488.5664f, 118.626f, 347.6931f, 1, 0);
					iLocal_894 = 8;
				}
				else if (iLocal_536 == 7)
				{
					__LIB_0__::func_427(-1411.9094f, 5957.873f, 40.3783f, 221.983f, 1, 0);
					iLocal_894 = 9;
				}
				else if (iLocal_536 == 8)
				{
					__LIB_0__::func_427(-152.3409f, 4654.3423f, 261.3565f, 221.983f, 1, 0);
					iLocal_894 = 10;
				}
				else if (iLocal_536 == 9)
				{
					__LIB_0__::func_427(1748.0168f, 3283.6812f, 95.0743f, 186.6673f, 1, 0);
					iLocal_894 = 11;
				}
				else if (iLocal_536 == 10)
				{
					__LIB_0__::func_427(1755.7994f, 3275.817f, 40.1628f, 310.7707f, 1, 0);
					iLocal_894 = 12;
				}
			}
			else
			{
				iLocal_894 = 13;
			}
		}
		else if (iLocal_536 == 0)
		{
			if (Global_94618 == 1)
			{
				iLocal_894 = 3;
			}
			else
			{
				iLocal_894 = 2;
			}
		}
		else
		{
			iLocal_894 = 1;
		}
		func_912(iLocal_894);
	}
	else
	{
		func_911();
		iLocal_894 = 1;
	}
	if (iLocal_894 != 1)
	{
		while (!iLocal_493)
		{
			SYSTEM::WAIT(0);
			func_903(iLocal_894);
		}
	}
}

void func_903(int iParam0)//Position - 0xA0111
{
	if (!iLocal_492)
	{
		func_957(0);
		MISC::CLEAR_AREA(1764.9365f, 3270.3894f, 40.3731f, 1000f, true, true, false, false);
		MISC::CLEAR_AREA(1764.9365f, 3270.3894f, 40.3731f, 1000f, true, true, false, false);
		MISC::CLEAR_AREA(526.2101f, -3160.0996f, -8.2578f, 1000f, true, true, false, false);
		iLocal_492 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
		{
			VEHICLE::SET_SUBMARINE_CRUSH_DEPTHS(Local_396[1 /*19*/], false, -190f, -190f, -190f);
		}
	}
	switch (iLocal_516)
	{
		case 0:
			PED::REMOVE_SCENARIO_BLOCKING_AREAS();
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.9403f, 3923.9775f, 549.3435f) - Vector(29.25f, 250f, 250f), Vector(44.9403f, 3923.9775f, 549.3435f) + Vector(29.25f, 250f, 250f), false, true, true, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(44.618195f, 4237.4746f, -148.38226f) - Vector(29.25f, 250f, 250f), Vector(44.618195f, 4237.4746f, -148.38226f) + Vector(29.25f, 250f, 250f), false, true, true, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(56.610474f, 3277.4119f, 1740.1006f) - Vector(18.5f, 78.25f, 78.25f), Vector(56.610474f, 3277.4119f, 1740.1006f) + Vector(18.5f, 78.25f, 78.25f), false, true, true, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(51.0751f, 5189.528f, -2174.8457f) - Vector(59f, 250f, 250f), Vector(51.0751f, 5189.528f, -2174.8457f) + Vector(59f, 250f, 250f), false, true, true, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(36.12573f, 6266.9785f, -1002.4548f) - Vector(59f, 250f, 250f), Vector(36.12573f, 6266.9785f, -1002.4548f) + Vector(59f, 250f, 250f), false, true, true, true);
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(37.04243f, 5366.7896f, -1385.1182f) - Vector(59f, 250f, 250f), Vector(37.04243f, 5366.7896f, -1385.1182f) + Vector(59f, 250f, 250f), false, true, true, true);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
			AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
			PHYSICS::ROPE_LOAD_TEXTURES();
			__LIB_0__::func_424(1);
			__LIB_15__::func_955(6, 1);
			func_911();
			__LIB_16__::func_928(200);
			__LIB_0__::func_364(38, 0);
			iLocal_517 = 0;
			if (iParam0 == 2)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					iLocal_897 = __LIB_14__::func_466();
					func_910(joaat("cargobob3"));
					MISC::CLEAR_AREA(-1151.1503f, -1521.5975f, 3.3605f, 100f, true, false, false, false);
					iLocal_516++;
				}
			}
			else if (iParam0 == 3)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					__LIB_0__::func_544(94, 1, 0, 1, 0);
					iLocal_897 = __LIB_14__::func_466();
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					iLocal_516++;
				}
			}
			else if (iParam0 == 4)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					iLocal_897 = __LIB_14__::func_466();
					func_910(joaat("dinghy"));
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
					iLocal_516++;
				}
			}
			else if (iParam0 == 5)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					iLocal_897 = __LIB_14__::func_466();
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
					iLocal_516++;
				}
			}
			else if (iParam0 == 6)
			{
				if (__LIB_14__::func_466() != 2)
				{
					func_862(2, 1);
				}
				else
				{
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
					iLocal_516++;
				}
			}
			else if (iParam0 == 7)
			{
				if (__LIB_14__::func_466() != 2)
				{
					func_862(2, 1);
				}
				else
				{
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					func_910(joaat("prop_military_pickup_01"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
					iLocal_516++;
				}
			}
			else if (iParam0 == 8)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					func_910(joaat("prop_military_pickup_01"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
					iLocal_516++;
				}
			}
			else if (iParam0 == 9)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					func_910(joaat("prop_military_pickup_01"));
					func_910(joaat("cargobob3"));
					MISC::CLEAR_AREA(-833.074f, 6397.145f, -10.1586f, 500f, true, false, false, false);
					iLocal_516++;
				}
			}
			else if (iParam0 == 10)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					func_910(joaat("prop_military_pickup_01"));
					func_910(joaat("cargobob3"));
					iLocal_516++;
				}
			}
			else if (iParam0 == 11)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					func_910(joaat("prop_military_pickup_01"));
					func_910(joaat("cargobob3"));
					iLocal_516++;
				}
			}
			else if (iParam0 == 12)
			{
				if (__LIB_14__::func_466() != 0)
				{
					func_862(0, 1);
				}
				else
				{
					func_910(joaat("cargobob3"));
					func_910(joaat("submersible"));
					func_910(joaat("prop_military_pickup_01"));
					func_910(joaat("cargobob3"));
					iLocal_516++;
				}
			}
			else if (iParam0 > 12)
			{
				iLocal_516++;
			}
			break;
		case 1:
			if (func_909())
			{
				if (__LIB_14__::func_466() == 0)
				{
				}
				if (__LIB_14__::func_466() == 1)
				{
				}
				if (__LIB_14__::func_466() == 2)
				{
				}
				__LIB_16__::func_888(0);
				__LIB_16__::func_888(2);
				__LIB_16__::func_888(1);
				if (iParam0 == 2)
				{
					while ((!func_299(16, 1750.6334f, 3285.0278f, 40.0871f, 134.9916f, 0, 1) || !func_299(4, -1155.21f, -1517.32f, 3.36f, 0, 0, 1)) || !func_299(3, -1157.92f, -1519.33f, 3.36f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!__LIB_38__::func_169(2, 1, -1154.7112f, -1520.1177f, 3.3521f, 60f))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_396[3 /*19*/]))
						{
							if (!MISC::IS_POSITION_OCCUPIED(-1155.5077f, -1520.1217f, 3.3467f, 5f, false, true, false, false, false, 0, false))
							{
								while (!func_299(0, -1155.5077f, -1520.1217f, 3.3467f, 35.335f, 0, 1))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (!MISC::IS_POSITION_OCCUPIED(-1158.4879f, -1529.3704f, 3.2503f, 5f, false, true, false, false, false, 0, false))
							{
								while (!func_299(0, -1158.4879f, -1529.3704f, 3.2503f, 35.6275f, 0, 1))
								{
									SYSTEM::WAIT(0);
								}
							}
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_391, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_391);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1149.6552f, -1521.8536f, 3.3298f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 76.515f);
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_346[1], -1148.9454f, -1523.2805f, 3.3434f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_346[1], 48.7325f);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_346[2], -1148.6027f, -1525.542f, 3.3486f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_346[2], 79.3802f);
					}
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					func_907();
					func_885(0);
					iLocal_894 = 2;
					iLocal_493 = 1;
					iLocal_516 = 0;
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
					}
					else
					{
						STREAMING::LOAD_SCENE(-1149.6552f, -1521.8536f, 3.3298f);
					}
				}
				else if (iParam0 == 3)
				{
					while (((((!func_299(17, 1750.6334f, 3285.0278f, 40.0871f, 134.9916f, 0, 1) || !func_299(9, 1728.97f, 3264.86f, 40.0871f, 116.37f, 0, 1)) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(21, 1728.44f, 3294.27f, 41.22f, -112.87f, 0, 1)) || !func_299(20, 1727.38f, 3293.09f, 41.2f, -144.39f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 0);
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_391, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_391);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
					}
					MISC::CLEAR_AREA(1750.6334f, 3285.0278f, 40.0871f, 1000f, true, true, false, false);
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(1750.6334f, 3285.0278f, 40.0871f);
					}
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					func_921("ASSIGN TREVOR GET IN SUB", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_PICK_UP_RT");
					func_907();
					func_885(0);
					iLocal_894 = 3;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 4)
				{
					while ((!func_299(12, 910.1729f, 3335.728f, 270.3783f, 39.5182f, 0, 1) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_442[0], true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], true, true, false);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_391, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_391);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(910.1729f, 3335.728f, 270.3783f);
					}
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_SEA_RT");
					func_907();
					func_885(0);
					iLocal_894 = 4;
					iLocal_493 = 1;
					iLocal_516 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[0 /*19*/], 20f);
					}
				}
				else if (iParam0 == 5)
				{
					while ((((!func_299(12, -1389.311f, 6163.189f, 40.3783f, 39.5182f, 0, 1) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					__LIB_0__::func_366(1);
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], true, true, false);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_442[0], true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], false, true, false);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1389.311f, 6163.189f, 40.3783f);
					}
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_DROP_SUB_RT");
					func_907();
					func_885(0);
					iLocal_894 = 5;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 6)
				{
					while (((((!func_299(16, -1388.26f, 6160.88f, 370.3783f, 39.5182f, 0, 1) || !func_299(6, -1402.3759f, 6145.041f, -12.5895f, 39.5182f, 0, 1)) || !func_299(5, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					__LIB_0__::func_366(1);
					if (!PED::IS_PED_INJURED(iLocal_346[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[0], Local_396[0 /*19*/], -1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_442[0], true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_396[1 /*19*/], true);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[1 /*19*/], 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, true, true, false, false, true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[1 /*19*/], true, true, false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[1 /*19*/], 8f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
					{
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[1 /*19*/], true);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[1 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1402.3759f, 6145.041f, -12.5895f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FIND_CONT_RT");
					func_907();
					func_885(0);
					iLocal_894 = 6;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 7)
				{
					while (((((!func_299(16, -1388.26f, 6160.88f, 370.3783f, 39.5182f, 0, 1) || !func_299(5, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(31, 0f, 0f, 0f, 0, 0, 1)) || !func_299(6, -1255.28f, 6795.65f, -135.63f, 39.5182f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					__LIB_0__::func_366(1);
					if (!PED::IS_PED_INJURED(iLocal_346[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[0], Local_396[0 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], true);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
						}
					}
					func_842();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_396[1 /*19*/], true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[1 /*19*/], false);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_396[1 /*19*/], 3);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
					{
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_396[1 /*19*/], false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[0]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_442[0], true);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[1 /*19*/], -1, 1);
					}
					else
					{
						STREAMING::LOAD_SCENE(-1255.28f, 6795.65f, -135.63f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_396[1 /*19*/], 3, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, true, true, true, false, true);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_GET_SURFACE_RT");
					func_907();
					func_885(0);
					iLocal_894 = 7;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 8)
				{
					while (((((!func_299(16, -1552.4729f, 6488.5664f, 118.626f, 347.6931f, 0, 1) || !func_299(6, -1255.28f, 6795.65f, 0.34f, 39.5182f, 0, 1)) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[0 /*19*/], 20f);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], true, true, false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (!PED::IS_PED_INJURED(iLocal_346[2]))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
							ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], true);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_442[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_442[1], Local_396[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, true, false, true, false, 2, true, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_442[1], Local_396[1 /*19*/], false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_396[1 /*19*/], iLocal_442[1], false);
							}
						}
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
						}
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1552.4729f, 6488.5664f, 118.626f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_PICK_SUB_RT");
					func_907();
					func_885(0);
					iLocal_894 = 8;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 9)
				{
					while ((((!func_299(12, -1571.9094f, 6204.873f, 40.3783f, -137.983f, 0, 1) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], true, true, false);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_442[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_442[1], Local_396[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, true, false, true, false, 2, true, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_442[1], Local_396[1 /*19*/], false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_396[1 /*19*/], iLocal_442[1], false);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-1571.9094f, 6204.873f, 40.3783f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_AWAY_RT");
					func_907();
					func_885(0);
					iLocal_894 = 9;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 10)
				{
					while ((((!func_299(12, -152.3409f, 4654.3423f, 261.3565f, 219.9027f, 0, 1) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(31, 0f, 0f, 0f, 0, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_396[0 /*19*/], true, true, false);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_442[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_442[1], Local_396[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, true, false, true, false, 2, true, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_442[1], Local_396[1 /*19*/], false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_396[1 /*19*/], iLocal_442[1], false);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[0 /*19*/], false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_396[1 /*19*/], false);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(-152.3409f, 4654.3423f, 261.3565f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_AWAY_RT");
					func_907();
					func_885(0);
					iLocal_894 = 10;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 11)
				{
					while (((((((!func_299(12, 1748.0168f, 3283.6812f, 95.0743f, 186.6673f, 0, 1) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(31, 0f, 0f, 0f, 0, 0, 1)) || !func_299(22, 0f, 0f, 0f, 0f, 0, 1)) || !func_299(24, 0f, 0f, 0f, 0f, 0, 1)) || !func_299(23, 0f, 0f, 0f, 0f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_442[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_442[1], Local_396[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, true, false, true, false, 2, true, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_442[1], Local_396[1 /*19*/], false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_396[1 /*19*/], iLocal_442[1], false);
							}
						}
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(1748.0168f, 3283.6812f, 95.0743f);
					}
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FLY_AWAY_RT");
					func_907();
					func_885(0);
					iLocal_894 = 11;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
				else if (iParam0 == 12)
				{
					while ((((((!func_299(12, 1748.0168f, 3283.6812f, 95.0743f, 186.6673f, 0, 1) || !func_299(4, -1158.3065f, -1518.4401f, 9.6346f, 237.8801f, 0, 1)) || !func_299(3, -1154.9404f, -1521.8251f, 9.6346f, 113.9594f, 0, 1)) || !func_299(18, -1255.38f, 6795.72f, -179.1137f, 0f, 0, 1)) || !func_299(22, 0f, 0f, 0f, 0f, 0, 1)) || !func_299(24, 0f, 0f, 0f, 0f, 0, 1)) || !func_299(23, 0f, 0f, 0f, 0f, 0, 1))
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_396[0 /*19*/]);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_396[0 /*19*/], 10f);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[1], Local_396[0 /*19*/], 1);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_346[2], Local_396[1 /*19*/], -1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[1]))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_442[1]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_442[1], Local_396[1 /*19*/], 1, 0f, -2f, -1.7f, 0f, 0f, 90f, true, false, true, false, 2, true, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_442[1], Local_396[1 /*19*/], false);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_396[1 /*19*/], iLocal_442[1], false);
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(iLocal_346[1]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_346[1], false))
						{
							ENTITY::DETACH_ENTITY(iLocal_346[1], true, true);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
					{
						ENTITY::DETACH_ENTITY(Local_396[1 /*19*/], true, true);
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_396[1 /*19*/], true), 100f, true, false, false, false);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_396[1 /*19*/], 1763.7795f, 3289.0815f, 41.8658f, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_396[1 /*19*/], 143.22f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_396[1 /*19*/], 5f);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(Local_396[0 /*19*/], -1, 1);
					}
					else
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], -1);
						}
						STREAMING::LOAD_SCENE(1755.7994f, 3275.817f, 40.1628f);
					}
					CUTSCENE::REQUEST_CUTSCENE("LSDH_2B_MCS_1", 8);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					func_911();
					func_908();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					func_907();
					func_885(0);
					iLocal_894 = 12;
					iLocal_493 = 1;
					iLocal_516 = 0;
				}
			}
			break;
	}
}

void func_907()//Position - 0xA2232
{
	if (__LIB_14__::func_466() != 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_346[0]))
		{
			__LIB_17__::func_41(iLocal_346[0], 49);
			func_311(iLocal_346[0], 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::CLEAR_PED_PROP(iLocal_346[0], 1);
		}
	}
	else
	{
		__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 49);
		func_311(PLAYER::PLAYER_PED_ID(), 12, 49, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (__LIB_14__::func_466() != 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_346[1]))
			{
				__LIB_17__::func_41(iLocal_346[1], 41);
				func_311(iLocal_346[1], 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	else
	{
		__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 41);
		func_311(PLAYER::PLAYER_PED_ID(), 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (__LIB_14__::func_466() != 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
		{
			if (!PED::IS_PED_INJURED(iLocal_346[2]))
			{
				__LIB_17__::func_41(iLocal_346[2], 47);
				func_311(iLocal_346[2], 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::CLEAR_PED_PROP(iLocal_346[2], 0);
				PED::CLEAR_PED_PROP(iLocal_346[2], 1);
			}
		}
	}
	else
	{
		__LIB_17__::func_41(PLAYER::PLAYER_PED_ID(), 47);
		func_311(PLAYER::PLAYER_PED_ID(), 12, 47, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 1);
	}
}

void func_908()//Position - 0xA23AF
{
	int iVar0;
	if (iLocal_310 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_310 - 1))
		{
			if (iLocal_311[iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_311[iVar0]);
				iLocal_311[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_310 = 0;
}

int func_909()//Position - 0xA23F6
{
	int iVar0;
	if (iLocal_310 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_310 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_311[iVar0]))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

void func_910(int iParam0)//Position - 0xA2434
{
	int iVar0;
	bool bVar1;
	STREAMING::REQUEST_MODEL(iParam0);
	if (iLocal_310 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_310 - 1))
		{
			if (iLocal_311[iVar0] == iParam0)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			iLocal_311[iLocal_310] = iParam0;
			iLocal_310++;
		}
	}
	else if (iLocal_310 == 0)
	{
		iLocal_311[0] = iParam0;
		iLocal_310++;
	}
}

void func_911()//Position - 0xA24A0
{
	Local_395[0 /*40*/].f_2 = { -332.2557f, -2767.9988f, 4.1403f };
	Local_395[0 /*40*/].f_5 = 77.2407f;
	Local_395[0 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_395[0 /*40*/].f_7 = __LIB_15__::func_957(20);
	Local_396[7 /*19*/].f_2 = { 591.86f, -3126.65f, 5.53f };
	Local_396[7 /*19*/].f_5 = 80.21f;
	Local_396[23 /*19*/].f_2 = { 488.73f, -3120.27f, 6.15f };
	Local_396[23 /*19*/].f_5 = 182.92f;
	Local_393[0 /*40*/].f_2 = { 616.25f, -3197.86f, 6.07f };
	Local_393[0 /*40*/].f_5 = 75.78f;
	Local_393[0 /*40*/].f_6 = joaat("WEAPON_PISTOL");
	Local_393[0 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[1 /*40*/].f_2 = { 613.19f, -3052.95f, 5.11f };
	Local_393[1 /*40*/].f_5 = -7.38f;
	Local_393[1 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[1 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[2 /*40*/].f_2 = { 609.54f, -3201.64f, 5.069f };
	Local_393[2 /*40*/].f_5 = 61.53f;
	Local_393[2 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[2 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[3 /*40*/].f_2 = { 599.0598f, -3140.7258f, 5.069f };
	Local_393[3 /*40*/].f_5 = 20.3269f;
	Local_393[3 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[3 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[3 /*40*/].f_8 = { 581.1614f, -3122.6624f, 5.0693f };
	Local_393[4 /*40*/].f_2 = { 597.8522f, -3137.7893f, 5.0694f };
	Local_393[4 /*40*/].f_5 = 201.0221f;
	Local_393[4 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[4 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[4 /*40*/].f_8 = { 581.4792f, -3125.019f, 5.0693f };
	Local_393[5 /*40*/].f_2 = { 546.5981f, -3169.6133f, 21.7621f };
	Local_393[5 /*40*/].f_5 = 100.434f;
	Local_393[5 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[5 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[6 /*40*/].f_2 = { 541.4543f, -3119.221f, 7.5634f };
	Local_393[6 /*40*/].f_5 = 29.3428f;
	Local_393[6 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[6 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[7 /*40*/].f_2 = { 587.0986f, -3118.3572f, 17.7141f };
	Local_393[7 /*40*/].f_5 = 180.4285f;
	Local_393[7 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[7 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[8 /*40*/].f_2 = { 557.8976f, -3130.9917f, 16.361f };
	Local_393[8 /*40*/].f_5 = 91.5429f;
	Local_393[8 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[8 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[9 /*40*/].f_2 = { 549.73f, -3175.39f, 6.07f };
	Local_393[9 /*40*/].f_5 = 3.39f;
	Local_393[9 /*40*/].f_6 = joaat("WEAPON_PISTOL");
	Local_393[9 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[10 /*40*/].f_2 = { 576.4f, -3111.26f, 9.88f };
	Local_393[10 /*40*/].f_5 = 13.53f;
	Local_393[10 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[10 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[11 /*40*/].f_2 = { 567.7729f, -3126.2927f, 17.7686f };
	Local_393[11 /*40*/].f_5 = 183.7132f;
	Local_393[11 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[11 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[12 /*40*/].f_2 = { 620.5584f, -3171.3035f, 5.0687f };
	Local_393[12 /*40*/].f_5 = 286.0132f;
	Local_393[12 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[12 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[13 /*40*/].f_2 = { 591.06f, -3288.66f, 18.72f };
	Local_393[13 /*40*/].f_5 = 0f;
	Local_393[13 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[13 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[14 /*40*/].f_2 = { 591.47f, -3287.71f, 18.72f };
	Local_393[14 /*40*/].f_5 = -178.76f;
	Local_393[14 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[14 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[15 /*40*/].f_2 = { 596.5318f, -3288.6238f, 17.7143f };
	Local_393[15 /*40*/].f_5 = 220.6964f;
	Local_393[15 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[15 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[16 /*40*/].f_2 = { 512.5623f, -3128.1653f, 5.0696f };
	Local_393[16 /*40*/].f_5 = 271.0057f;
	Local_393[16 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[16 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[17 /*40*/].f_2 = { 495.7888f, -3142.5996f, 5.0419f };
	Local_393[17 /*40*/].f_5 = 9.4754f;
	Local_393[17 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[17 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[18 /*40*/].f_2 = { 545.9113f, -3157.1587f, 5.0699f };
	Local_393[18 /*40*/].f_5 = -89.95f;
	Local_393[18 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[18 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[19 /*40*/].f_2 = { 510.9347f, -3163.1167f, 5.1579f };
	Local_393[19 /*40*/].f_5 = 279.8616f;
	Local_393[19 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[19 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[20 /*40*/].f_2 = { 566.8541f, -3123.1355f, 17.7686f };
	Local_393[20 /*40*/].f_5 = 118.0292f;
	Local_393[20 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[20 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[21 /*40*/].f_2 = { 547.5675f, -3123.069f, 5.0699f };
	Local_393[21 /*40*/].f_5 = 183.9746f;
	Local_393[21 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[21 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[22 /*40*/].f_2 = { 549.0079f, -3127.4082f, 5.0701f };
	Local_393[22 /*40*/].f_5 = 175.374f;
	Local_393[22 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[22 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[23 /*40*/].f_2 = { 509.53f, -3337.7878f, 5.0699f };
	Local_393[23 /*40*/].f_5 = 188.8407f;
	Local_393[23 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[23 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[24 /*40*/].f_2 = { 503.9503f, -3128.2463f, 5.0699f };
	Local_393[24 /*40*/].f_5 = 278.316f;
	Local_393[24 /*40*/].f_6 = joaat("WEAPON_ASSAULTSHOTGUN");
	Local_393[24 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[25 /*40*/].f_2 = { 500.2828f, -3132.6196f, 5.0699f };
	Local_393[25 /*40*/].f_5 = 272.6464f;
	Local_393[25 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[25 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[26 /*40*/].f_2 = { 496.1426f, -3123.9343f, 5.0699f };
	Local_393[26 /*40*/].f_5 = 269.1508f;
	Local_393[26 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[26 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[27 /*40*/].f_2 = { 507.8749f, -3124.6238f, 5.0698f };
	Local_393[27 /*40*/].f_5 = 271.4555f;
	Local_393[27 /*40*/].f_6 = joaat("WEAPON_ASSAULTSHOTGUN");
	Local_393[27 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[28 /*40*/].f_2 = { 496.6405f, -3124.6785f, 5.0699f };
	Local_393[28 /*40*/].f_5 = 267.4851f;
	Local_393[28 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[28 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[29 /*40*/].f_2 = { 496.7787f, -3121.9277f, 5.0695f };
	Local_393[29 /*40*/].f_5 = 353.9953f;
	Local_393[29 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[29 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[30 /*40*/].f_2 = { 495.8472f, -3121.9832f, 5.0699f };
	Local_393[30 /*40*/].f_5 = 359.6471f;
	Local_393[30 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[30 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[31 /*40*/].f_2 = { 533.1688f, -3119.3777f, 11.9102f };
	Local_393[31 /*40*/].f_5 = 274.4106f;
	Local_393[31 /*40*/].f_6 = joaat("WEAPON_ASSAULTSHOTGUN");
	Local_393[31 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[32 /*40*/].f_2 = { 480.1254f, -3138.539f, 5.0695f };
	Local_393[32 /*40*/].f_5 = 13.7647f;
	Local_393[32 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[32 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[33 /*40*/].f_2 = { 471.6332f, -3123.8315f, 5.0695f };
	Local_393[33 /*40*/].f_5 = 13.7647f;
	Local_393[33 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[33 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[34 /*40*/].f_2 = { 469.1807f, -3134.7798f, 5.0695f };
	Local_393[34 /*40*/].f_5 = 287.3908f;
	Local_393[34 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[34 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[35 /*40*/].f_2 = { 587.5251f, -3119.0803f, 17.7151f };
	Local_393[35 /*40*/].f_5 = 182.4486f;
	Local_393[35 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[35 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[36 /*40*/].f_2 = { 591.213f, -3131.069f, 16.3609f };
	Local_393[36 /*40*/].f_5 = 90.3731f;
	Local_393[36 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[36 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[37 /*40*/].f_2 = { 547.3473f, -3139.2258f, 5.0699f };
	Local_393[37 /*40*/].f_5 = 180.3411f;
	Local_393[37 /*40*/].f_6 = joaat("WEAPON_ASSAULTSHOTGUN");
	Local_393[37 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[38 /*40*/].f_2 = { 501.7275f, -3119.6602f, 5.0694f };
	Local_393[38 /*40*/].f_5 = 269.4093f;
	Local_393[38 /*40*/].f_6 = joaat("WEAPON_ASSAULTSHOTGUN");
	Local_393[38 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[39 /*40*/].f_2 = { 520.2127f, -3120.0176f, 17.9144f };
	Local_393[39 /*40*/].f_5 = 132.5665f;
	Local_393[39 /*40*/].f_6 = joaat("WEAPON_SNIPERRIFLE");
	Local_393[39 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[40 /*40*/].f_2 = { 528.5178f, -3121.2793f, 5.0694f };
	Local_393[40 /*40*/].f_5 = 176.8235f;
	Local_393[40 /*40*/].f_6 = joaat("WEAPON_ASSAULTSHOTGUN");
	Local_393[40 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[41 /*40*/].f_2 = { 520.871f, -3126.4878f, 5.0699f };
	Local_393[41 /*40*/].f_5 = 2.4706f;
	Local_393[41 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[41 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[42 /*40*/].f_2 = { 498.9655f, -3134.0022f, 5.0699f };
	Local_393[42 /*40*/].f_5 = 288.6624f;
	Local_393[42 /*40*/].f_6 = joaat("WEAPON_PISTOL");
	Local_393[42 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[43 /*40*/].f_2 = { 500.4205f, -3172.66f, 5.0693f };
	Local_393[43 /*40*/].f_5 = 269.2941f;
	Local_393[43 /*40*/].f_6 = joaat("WEAPON_ASSAULTSHOTGUN");
	Local_393[43 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[44 /*40*/].f_2 = { 612.23f, -3147.81f, 6.11f };
	Local_393[44 /*40*/].f_5 = 359.9166f;
	Local_393[44 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[44 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[45 /*40*/].f_2 = { 614.52f, -3152.42f, 6.07f };
	Local_393[45 /*40*/].f_5 = 2.1169f;
	Local_393[45 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[45 /*40*/].f_7 = joaat("S_M_M_DockWork_01");
	Local_393[46 /*40*/].f_2 = { 513.22f, -3123.82f, 6.07f };
	Local_393[46 /*40*/].f_5 = -94.54f;
	Local_393[46 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[46 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[47 /*40*/].f_2 = { 484.83f, -3110.55f, 6.11f };
	Local_393[47 /*40*/].f_5 = 0f;
	Local_393[47 /*40*/].f_6 = joaat("WEAPON_PISTOL");
	Local_393[47 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[48 /*40*/].f_2 = { 500.26f, -3154.82f, 6.07f };
	Local_393[48 /*40*/].f_5 = 120.89f;
	Local_393[48 /*40*/].f_6 = joaat("WEAPON_ADVANCEDRIFLE");
	Local_393[48 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[49 /*40*/].f_2 = { 500.23f, -3153.88f, 6.07f };
	Local_393[49 /*40*/].f_5 = 0f;
	Local_393[49 /*40*/].f_6 = joaat("WEAPON_PISTOL");
	Local_393[49 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[50 /*40*/].f_2 = { 592.09f, -3156.96f, 6.07f };
	Local_393[50 /*40*/].f_5 = -98.12f;
	Local_393[50 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[50 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
	Local_393[51 /*40*/].f_2 = { 500.74f, -3060.28f, 5.11f };
	Local_393[51 /*40*/].f_5 = 0f;
	Local_393[51 /*40*/].f_6 = joaat("WEAPON_UNARMED");
	Local_393[51 /*40*/].f_7 = joaat("S_M_Y_BlackOps_01");
}

void func_912(int iParam0)//Position - 0xA3309
{
	if (iParam0 == 0)
	{
		Local_560 = { 910.1729f, 3335.728f, 270.3783f };
		fLocal_559 = 39.5182f;
	}
	else if (iParam0 == 4)
	{
		Local_560 = { 2129.443f, 4799.7305f, 40.1567f };
		fLocal_559 = 39.5182f;
	}
	else if (iParam0 == 5)
	{
		Local_560 = { -2842.8845f, 3567.469f, 2.0187f };
		fLocal_559 = 39.5182f;
	}
	else if (iParam0 == 6)
	{
		Local_560 = { -853.2222f, 6407.857f, -20.8874f };
		fLocal_559 = 108.3685f;
	}
	else if (iParam0 == 9)
	{
		Local_560 = { 526.2101f, -3160.0996f, -8.2578f };
		fLocal_559 = 108.3685f;
	}
	else if (iParam0 == 10)
	{
		Local_560 = { 526.2101f, -3160.0996f, -8.2578f };
		fLocal_559 = 108.3685f;
	}
	if (!__LIB_0__::func_86(Local_560))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(Local_560);
		__LIB_16__::func_929(Local_560, fLocal_559, 1);
	}
}

void func_921(char* sParam0, bool bParam1)//Position - 0xA362E
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_299)
		{
			if (iLocal_299[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_299[iVar1] == 0)
			{
				iLocal_299[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_923(iVar0);
		if (iVar3 != -1)
		{
			iLocal_299[iVar3] = 0;
			func_922();
		}
	}
}

void func_922()//Position - 0xA36A9
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_299 - 1))
	{
		if (iLocal_299[iVar0] == 0)
		{
			if (iLocal_299[iVar0 + 1] != 0)
			{
				iLocal_299[iVar0] = iLocal_299[iVar0 + 1];
				iLocal_299[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_923(int iParam0)//Position - 0xA36FC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_299)
	{
		if (iLocal_299[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_299[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_924(char* sParam0)//Position - 0xA373F
{
	return func_923(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_925()//Position - 0xA3753
{
	if (__LIB_0__::func_75())
	{
		if (__LIB_0__::func_114())
		{
			if (iLocal_504 == 0)
			{
				__LIB_0__::func_620(1);
				iLocal_504 = 1;
			}
		}
		else if (iLocal_504 == 1)
		{
			__LIB_0__::func_620(0);
			iLocal_504 = 0;
		}
	}
}

void func_928()//Position - 0xA379D
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	Var0 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || ((((Var0.f_1 < 3726f && Var0.f_1 > 3709f) && Var0.f_0 > 3509f) && Var0.f_0 < 3541f) && Var0.f_2 < 17.5f))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_UNDERWATER_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("BIOTECH_HEIST_UNDERWATER_SCENE");
		}
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_554))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_554, "UW_Ambience", 0, true);
		}
		if (AUDIO::HAS_SOUND_FINISHED(iLocal_555))
		{
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_555, "UW_Rebreather", 0, true);
		}
		if (__LIB_14__::func_466() == 0)
		{
			if (func_313(PLAYER::PLAYER_PED_ID(), 12, 10))
			{
				fVar1 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				if (fVar1 > 1f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_557))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_557, "FBI_05_RAID_FOOT_SWISH", PLAYER::PLAYER_PED_ID(), 0, false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_557, "SwimSpeed", ((fVar1 - 1f) / 4f));
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_557, "SwimSpeed", ((fVar1 - 1f) / 4f));
					}
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_557))
				{
					AUDIO::STOP_SOUND(iLocal_557);
				}
				if (bLocal_558)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_556))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_556, "FBI_05_RAID_BREATH", 0, true);
					}
				}
			}
		}
		if (__LIB_14__::func_466() == 1)
		{
			if (func_313(PLAYER::PLAYER_PED_ID(), 12, 3))
			{
				fVar2 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				if (fVar2 > 1f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_557))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_557, "FBI_05_RAID_FOOT_SWISH", PLAYER::PLAYER_PED_ID(), 0, false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_557, "SwimSpeed", ((fVar2 - 1f) / 4f));
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_557, "SwimSpeed", ((fVar2 - 1f) / 4f));
					}
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_557))
				{
					AUDIO::STOP_SOUND(iLocal_557);
				}
				if (bLocal_558)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_556))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_556, "FBI_05_RAID_BREATH", 0, true);
					}
				}
			}
		}
		if (__LIB_14__::func_466() == 2)
		{
			if (func_313(PLAYER::PLAYER_PED_ID(), 12, 6))
			{
				fVar3 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
				if (fVar3 > 1f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_557))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_557, "FBI_05_RAID_FOOT_SWISH", PLAYER::PLAYER_PED_ID(), 0, false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_557, "SwimSpeed", ((fVar3 - 1f) / 4f));
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_557, "SwimSpeed", ((fVar3 - 1f) / 4f));
					}
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(iLocal_557))
				{
					AUDIO::STOP_SOUND(iLocal_557);
				}
				if (bLocal_558)
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_556))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_556, "FBI_05_RAID_BREATH", 0, true);
					}
				}
			}
		}
	}
	else
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_UNDERWATER_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_UNDERWATER_SCENE");
		}
		if (iLocal_554 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_554))
			{
				AUDIO::STOP_SOUND(iLocal_554);
			}
		}
		if (iLocal_555 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_555))
			{
				AUDIO::STOP_SOUND(iLocal_555);
			}
		}
		if (iLocal_557 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_557))
			{
				AUDIO::STOP_SOUND(iLocal_557);
			}
		}
		if (iLocal_556 != 0)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_556))
			{
				AUDIO::STOP_SOUND(iLocal_556);
			}
		}
	}
}

void func_929()//Position - 0xA3A9D
{
	if (iLocal_894 == 8)
	{
		if (iLocal_517 < 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
					{
						__LIB_17__::func_118(&uLocal_48, Local_396[1 /*19*/], 0, 0, 1, 1, 1);
					}
					else
					{
						__LIB_0__::func_345(&uLocal_48, 0, 0);
					}
				}
				else
				{
					__LIB_0__::func_345(&uLocal_48, 0, 0);
				}
			}
		}
	}
}

void func_954()//Position - 0xA4A79
{
	if (iLocal_894 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_414))
		{
			if (PED::IS_PED_INJURED(iLocal_414))
			{
				iLocal_895 = iLocal_894;
				iLocal_896 = 4;
				iLocal_894 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_413))
		{
			if (PED::IS_PED_INJURED(iLocal_413))
			{
				iLocal_895 = iLocal_894;
				iLocal_896 = 5;
				iLocal_894 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_396[0 /*19*/], false))
				{
					if (iLocal_894 == 9)
					{
						VEHICLE::EXPLODE_VEHICLE(Local_396[0 /*19*/], true, false);
					}
				}
				iLocal_895 = iLocal_894;
				iLocal_896 = 9;
				iLocal_894 = 14;
			}
			else if (__LIB_14__::func_522(&(Local_396[0 /*19*/])))
			{
				iLocal_895 = iLocal_894;
				iLocal_896 = 10;
				iLocal_894 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[1 /*19*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[1 /*19*/], false))
			{
				iLocal_895 = iLocal_894;
				iLocal_896 = 12;
				iLocal_894 = 14;
			}
			else
			{
				if (iLocal_894 == 6)
				{
					if (!func_924("SUB OUT OF WATER"))
					{
						if (!ENTITY::IS_ENTITY_IN_WATER(Local_396[1 /*19*/]))
						{
							iLocal_951 = MISC::GET_GAME_TIMER();
							func_921("SUB OUT OF WATER", 1);
						}
					}
					else
					{
						if (ENTITY::IS_ENTITY_IN_WATER(Local_396[1 /*19*/]))
						{
							func_921("SUB OUT OF WATER", 0);
						}
						if (__LIB_17__::func_612(Local_396[1 /*19*/], &iLocal_951))
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 12;
							iLocal_894 = 14;
						}
					}
				}
				if (iLocal_894 == 5)
				{
					if (iLocal_517 == 1)
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(Local_396[0 /*19*/], Local_396[1 /*19*/]))
						{
							if (__LIB_0__::func_611(&iLocal_950, 8000))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_441[1]) || ENTITY::DOES_ENTITY_EXIST(iLocal_441[2]))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_396[1 /*19*/], iLocal_441[1]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_396[1 /*19*/], iLocal_441[2]))
									{
										if (!ENTITY::IS_ENTITY_IN_WATER(Local_396[1 /*19*/]))
										{
											iLocal_895 = iLocal_894;
											iLocal_896 = 12;
											iLocal_894 = 14;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_894 == 6 || iLocal_894 == 8)
				{
					if (__LIB_14__::func_522(&(Local_396[1 /*19*/])))
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 12;
						iLocal_894 = 14;
					}
				}
			}
		}
		if (iLocal_894 == 2)
		{
			if (__LIB_14__::func_466() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[1], true), true) > 1200f)
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 8;
							iLocal_894 = 14;
						}
					}
					else
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 3;
						iLocal_894 = 14;
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_346[1]))
			{
				iLocal_895 = iLocal_894;
				iLocal_896 = 3;
				iLocal_894 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
		{
			if (PED::IS_PED_INJURED(iLocal_346[2]))
			{
				iLocal_895 = iLocal_894;
				iLocal_896 = 1;
				iLocal_894 = 14;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
		{
			if (PED::IS_PED_INJURED(iLocal_346[0]))
			{
				iLocal_895 = iLocal_894;
				iLocal_896 = 1;
				iLocal_894 = 14;
			}
		}
		if (((iLocal_894 == 6 || iLocal_894 == 7) || iLocal_894 == 5) || iLocal_894 == 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_346[0]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[0], true), true) > 1200f)
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 7;
						iLocal_894 = 14;
					}
				}
				else
				{
					iLocal_895 = iLocal_894;
					iLocal_896 = 2;
					iLocal_894 = 14;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
			{
				if (!PED::IS_PED_INJURED(iLocal_346[2]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[2], true), true) > 1000f)
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 6;
						iLocal_894 = 14;
					}
				}
				else
				{
					iLocal_895 = iLocal_894;
					iLocal_896 = 1;
					iLocal_894 = 14;
				}
			}
		}
		if ((iLocal_894 == 6 || iLocal_894 == 7) || iLocal_894 == 5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_346[1]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[1], true), true) > 1200f)
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 8;
						iLocal_894 = 14;
					}
				}
				else
				{
					iLocal_895 = iLocal_894;
					iLocal_896 = 3;
					iLocal_894 = 14;
				}
			}
		}
		else if (iLocal_894 == 8)
		{
			if (__LIB_14__::func_466() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[1], true), true) > 1200f)
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 8;
							iLocal_894 = 14;
						}
					}
					else
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 3;
						iLocal_894 = 14;
					}
				}
			}
			if (__LIB_14__::func_466() == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[1]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[1], true), true) > 300f)
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 8;
							iLocal_894 = 14;
						}
					}
					else
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 3;
						iLocal_894 = 14;
					}
				}
			}
		}
		if (iLocal_894 == 10 || iLocal_894 == 4)
		{
			if (__LIB_14__::func_466() == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_396[0 /*19*/], false))
					{
						if (ENTITY::IS_ENTITY_IN_AIR(Local_396[0 /*19*/]))
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 14;
							iLocal_894 = 14;
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_396[0 /*19*/], true), true) > 25f)
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 14;
							iLocal_894 = 14;
						}
					}
				}
			}
		}
		if (((iLocal_894 == 5 || iLocal_894 == 11) || iLocal_894 == 8) || iLocal_894 == 7)
		{
			if (__LIB_14__::func_466() != 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[2], true), true) > 1000f)
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 6;
							iLocal_894 = 14;
						}
					}
					else
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 1;
						iLocal_894 = 14;
					}
				}
			}
		}
		else if (iLocal_894 != 10)
		{
			if (__LIB_14__::func_466() != 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
				{
					if (!PED::IS_PED_INJURED(iLocal_346[2]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_346[2], true), true) > 250f)
						{
							iLocal_895 = iLocal_894;
							iLocal_896 = 6;
							iLocal_894 = 14;
						}
					}
					else
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 1;
						iLocal_894 = 14;
					}
				}
			}
		}
		if (iLocal_894 == 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_396[0 /*19*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_396[0 /*19*/], false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1754.4716f, 3283.0715f, 40.0925f, true) < 200f)
					{
						iLocal_895 = iLocal_894;
						iLocal_896 = 16;
						iLocal_894 = 14;
					}
				}
			}
		}
	}
}

void func_957(bool bParam0)//Position - 0xA5246
{
	int iVar0;
	AUDIO::TRIGGER_MUSIC_EVENT("DH2B_FAIL");
	if (bParam0 == 0)
	{
		__LIB_13__::func_803(2, uLocal_403);
		__LIB_13__::func_803(0, uLocal_403);
		__LIB_13__::func_803(1, uLocal_403);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(uLocal_477[iVar0])))
		{
			PHYSICS::DELETE_ROPE(&(uLocal_477[iVar0]));
		}
		iVar0++;
	}
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_409))
	{
		OBJECT::DELETE_OBJECT(&iLocal_409);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_410))
	{
		ENTITY::SET_ENTITY_VISIBLE(iLocal_410, true, false);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_410);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		PED::RELEASE_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
	{
		if (!PED::IS_PED_INJURED(iLocal_346[0]))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(iLocal_346[0]);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_346[0]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
	{
		if (!PED::IS_PED_INJURED(iLocal_346[2]))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(iLocal_346[2]);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_346[2]);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
	{
		if (!PED::IS_PED_INJURED(iLocal_346[1]))
		{
			PED::RELEASE_PED_PRELOAD_PROP_DATA(iLocal_346[1]);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_346[1]);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_434))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_434, false);
	}
	__LIB_0__::func_552(1);
	func_968();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	__LIB_0__::func_544(94, 1, 0, 1, 0);
	__LIB_0__::func_345(&uLocal_48, 0, 0);
	func_967();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	__LIB_0__::func_741(0);
	__LIB_16__::func_889(0, 3, 0);
	__LIB_16__::func_889(1, 3, 0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	if (CAM::DOES_CAM_EXIST(Local_332.f_9))
	{
		CAM::DESTROY_CAM(Local_332.f_9, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_443[0]))
	{
		PED::DELETE_PED(&(iLocal_443[0]));
	}
	iVar0 = 0;
	while (iVar0 <= 39)
	{
		__LIB_0__::func_621(&(Local_394[iVar0 /*40*/].f_23));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 54)
	{
		__LIB_0__::func_621(&(Local_393[iVar0 /*40*/].f_23));
		iVar0++;
	}
	CAM::DESTROY_ALL_CAMS(false);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, false);
	}
	__LIB_15__::func_306(0);
	func_966(0);
	iLocal_464[0] = 0;
	iLocal_464[1] = 0;
	iLocal_464[2] = 0;
	iLocal_466 = 0;
	func_965();
	if (HUD::DOES_BLIP_EXIST(iLocal_480))
	{
		HUD::REMOVE_BLIP(&iLocal_480);
	}
	iVar0 = 0;
	while (iVar0 < Local_893.f_0)
	{
		func_964(&(Local_893[iVar0 /*27*/]), bParam0);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_478))
	{
		func_964(&iLocal_478, bParam0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_442)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_442[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_442[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_441)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_441[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_441[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_443)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_443[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_443[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_412)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_412[iVar0]))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(iLocal_412[iVar0], false);
		}
		iVar0++;
	}
	CAM::DESTROY_ALL_CAMS(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (CAM::DOES_CAM_EXIST(iLocal_479))
	{
		CAM::DESTROY_CAM(iLocal_479, false);
	}
	iLocal_519 = 0;
	while (iLocal_519 <= 9)
	{
		TASK::REMOVE_COVER_POINT(uLocal_483[iLocal_519]);
		iLocal_519++;
	}
	iLocal_519 = 0;
	while (iLocal_519 <= 34)
	{
		Local_396[iLocal_519 /*19*/].f_8 = 0;
		Local_396[iLocal_519 /*19*/].f_10 = 0;
		Local_396[iLocal_519 /*19*/].f_12 = 0;
		if (HUD::DOES_BLIP_EXIST(Local_396[iLocal_519 /*19*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_396[iLocal_519 /*19*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_396[iLocal_519 /*19*/]))
		{
			if (bParam0)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_396[iLocal_519 /*19*/]));
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_396[iLocal_519 /*19*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_396[iLocal_519 /*19*/]));
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_396[iLocal_519 /*19*/]))
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_396[iLocal_519 /*19*/]))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_396[iLocal_519 /*19*/]));
						}
					}
				}
			}
		}
		iLocal_519++;
	}
	iLocal_519 = 0;
	while (iLocal_519 <= 54)
	{
		if (HUD::DOES_BLIP_EXIST(Local_393[iLocal_519 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_393[iLocal_519 /*40*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_393[iLocal_519 /*40*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(Local_393[iLocal_519 /*40*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_393[iLocal_519 /*40*/], 40f, 0);
					PED::SET_PED_KEEP_TASK(Local_393[iLocal_519 /*40*/], true);
				}
				Local_393[iLocal_519 /*40*/].f_15 = 0;
				TASK::REMOVE_COVER_POINT(Local_393[iLocal_519 /*40*/].f_13);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::DELETE_PED(&(Local_393[iLocal_519 /*40*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_393[iLocal_519 /*40*/]));
				}
			}
			else
			{
				TASK::REMOVE_COVER_POINT(Local_393[iLocal_519 /*40*/].f_13);
				PED::DELETE_PED(&(Local_393[iLocal_519 /*40*/]));
			}
		}
		iLocal_519++;
	}
	iLocal_519 = 0;
	while (iLocal_519 <= 39)
	{
		if (HUD::DOES_BLIP_EXIST(Local_394[iLocal_519 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_394[iLocal_519 /*40*/].f_1));
		}
		Local_394[iLocal_519 /*40*/].f_12 = 0;
		Local_394[iLocal_519 /*40*/].f_15 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_394[iLocal_519 /*40*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(Local_393[iLocal_519 /*40*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_393[iLocal_519 /*40*/], 40f, 0);
					PED::SET_PED_KEEP_TASK(Local_393[iLocal_519 /*40*/], true);
				}
				TASK::REMOVE_COVER_POINT(Local_394[iLocal_519 /*40*/].f_13);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_394[iLocal_519 /*40*/]));
			}
			else
			{
				TASK::REMOVE_COVER_POINT(Local_394[iLocal_519 /*40*/].f_13);
				PED::DELETE_PED(&(Local_394[iLocal_519 /*40*/]));
			}
		}
		iLocal_519++;
	}
	iLocal_519 = 0;
	while (iLocal_519 <= 2)
	{
		if (HUD::DOES_BLIP_EXIST(Local_395[iLocal_519 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_395[iLocal_519 /*40*/].f_1));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_395[iLocal_519 /*40*/]))
		{
			if (bParam0)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_395[iLocal_519 /*40*/]));
			}
			else
			{
				PED::DELETE_PED(&(Local_395[iLocal_519 /*40*/]));
			}
		}
		iLocal_519++;
	}
	iLocal_519 = 0;
	while (iLocal_519 <= 24)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_439[iLocal_519]))
		{
			if (bParam0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_439[iLocal_519]));
			}
			else
			{
				OBJECT::DELETE_OBJECT(&(uLocal_439[iLocal_519]));
			}
		}
		iLocal_519++;
	}
	iLocal_519 = 0;
	while (iLocal_519 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_437[iLocal_519]))
		{
			if (bParam0)
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_437[iLocal_519]));
			}
			else
			{
				OBJECT::DELETE_OBJECT(&(uLocal_437[iLocal_519]));
			}
		}
		iLocal_519++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_438))
	{
		if (bParam0)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_438);
		}
		else
		{
			OBJECT::DELETE_OBJECT(&iLocal_438);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[0]))
	{
		if (bParam0)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_346[0]));
		}
		else
		{
			PED::DELETE_PED(&(iLocal_346[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[2]))
	{
		if (bParam0)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_346[2]));
		}
		else
		{
			PED::DELETE_PED(&(iLocal_346[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_346[1]))
	{
		if (bParam0)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_346[1]));
		}
		else
		{
			PED::DELETE_PED(&(iLocal_346[1]));
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_UNDERWATER_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_UNDERWATER_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BIOTECH_HEIST_GASMASK_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("BIOTECH_HEIST_GASMASK_SCENE");
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_482);
	__LIB_16__::func_318(&Local_872, 1, 0);
	__LIB_17__::func_221(&Local_872, 0);
	func_908();
	func_841();
	func_962(0);
	if (Local_892.f_4)
	{
		PHYSICS::DELETE_ROPE(&Local_892);
		Local_892.f_4 = 0;
	}
	__LIB_17__::func_437(&uLocal_677);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_0__::func_424(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
		if (iLocal_502 == 0)
		{
			__LIB_0__::func_325();
		}
		AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	else
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		}
		if (iLocal_502 == 0)
		{
			__LIB_0__::func_325();
		}
		iLocal_517 = 0;
		iLocal_516 = 0;
	}
}

void func_962(bool bParam0)//Position - 0xA5D1A
{
	int iVar0;
	func_964(&(Local_618.f_2), 1);
	func_964(&(Local_618.f_1), 1);
	func_964(&(Local_618.f_3), 1);
	func_964(&Local_618, 1);
	func_964(&(Local_618.f_13), 1);
	func_964(&(Local_618.f_14), 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_871.f_0)
	{
		func_964(&(Local_871[iVar0 /*19*/].f_1), bParam0);
		func_964(&(Local_871[iVar0 /*19*/].f_2), bParam0);
		func_964(&(Local_871[iVar0 /*19*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_618.f_4)
	{
		func_964(&(Local_618.f_4[iVar0]), 1);
		iVar0++;
	}
}

void func_964(int* iParam0, bool bParam1)//Position - 0xA5DD3
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, true, true);
			}
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_965()//Position - 0xA5E18
{
	int iVar0;
	Local_80 = { 0f, 0f, 0f };
	Local_81 = { 0f, 0f, 0f };
	Local_82 = { 0f, 0f, 0f };
	iLocal_83 = 0;
	StringCopy(&cLocal_250, "", 24);
	iLocal_254 = -1;
	iLocal_289 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Local_288[iVar0 /*5*/].f_1 = -1;
		Local_288[iVar0 /*5*/].f_2 = 0;
		Local_288[iVar0 /*5*/].f_3 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Local_290[iVar0 /*6*/].f_4 = 0;
		Local_290[iVar0 /*6*/].f_5 = 0;
		iVar0++;
	}
	iLocal_292 = 0;
}

void func_966(int iParam0)//Position - 0xA5EA5
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_393[44 /*40*/].f_19))
	{
		if (iParam0 == 0)
		{
			OBJECT::DELETE_OBJECT(&(Local_393[44 /*40*/].f_19));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_393[44 /*40*/].f_19, false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_393[44 /*40*/].f_19))
			{
				ENTITY::DETACH_ENTITY(Local_393[44 /*40*/].f_19, true, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_393[44 /*40*/].f_19));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_393[44 /*40*/]))
	{
		if (iParam0 == 0)
		{
			PED::DELETE_PED(&(Local_393[44 /*40*/]));
		}
		else if (!PED::IS_PED_INJURED(Local_393[44 /*40*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_393[44 /*40*/]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_393[45 /*40*/].f_19))
	{
		if (iParam0 == 0)
		{
			OBJECT::DELETE_OBJECT(&(Local_393[45 /*40*/].f_19));
		}
		else if (!ENTITY::IS_ENTITY_DEAD(Local_393[45 /*40*/].f_19, false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_393[45 /*40*/].f_19))
			{
				ENTITY::DETACH_ENTITY(Local_393[45 /*40*/].f_19, true, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_393[45 /*40*/].f_19));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_393[45 /*40*/]))
	{
		if (iParam0 == 0)
		{
			PED::DELETE_PED(&(Local_393[45 /*40*/]));
		}
		else if (!PED::IS_PED_INJURED(Local_393[45 /*40*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_393[45 /*40*/]));
		}
	}
	if (((!ENTITY::DOES_ENTITY_EXIST(Local_393[44 /*40*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_393[45 /*40*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_393[44 /*40*/].f_19)) && !ENTITY::DOES_ENTITY_EXIST(Local_393[45 /*40*/].f_19))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
		STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelroll");
	}
}

void func_967()//Position - 0xA6045
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_299)
	{
		iLocal_299[iVar0] = 0;
		iVar0++;
	}
}

void func_968()//Position - 0xA606C
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_DRIVE_TO_AIRSTRIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_DRIVE_TO_AIRSTRIP");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ATTACH_SUB"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_ATTACH_SUB");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_DROP_ZONE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_DROP_ZONE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_SEE_BOATS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_SEE_BOATS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_CHOPPERS_APPEAR"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_CHOPPERS_APPEAR");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIGHT_CHOPPERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_FIGHT_CHOPPERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RELEASE_SUB"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_RELEASE_SUB");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_FIND_CONTAINER"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_FIND_CONTAINER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_GET_TO_SURFACE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_GET_TO_SURFACE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_PICK_UP_SUB_CARGO"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_PICK_UP_SUB_CARGO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_ESCAPE_ENEMIES"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_ESCAPE_ENEMIES");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_2B_RETURN_TO_AIRSTRIP"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_2B_RETURN_TO_AIRSTRIP");
	}
}

void func_969()//Position - 0xA616C
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
				if (!func_10(iVar0))
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

