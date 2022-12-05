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
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_72 = 0;
	bool bLocal_73 = 0;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<5> Local_80 = { 0, 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 21;
	var uLocal_84 = 6;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91[4] = { 0, 0, 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96[5] = { 0, 0, 0, 0, 0 };
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99[2] = { 0, 0 };
	int iLocal_100[2] = { 0, 0 };
	int iLocal_101[2] = { 0, 0 };
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int* iLocal_105 = NULL;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	bool bLocal_115 = 0;
	struct<3> Local_116[15];
	int iLocal_117 = 0;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	float fLocal_121 = 0f;
	struct<3> Local_122 = { 0, 0, 0 } ;
	float fLocal_123 = 0f;
	struct<3> Local_124 = { 0, 0, 0 } ;
	float fLocal_125 = 0f;
	struct<3> Local_126 = { 0, 0, 0 } ;
	float fLocal_127 = 0f;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	float fLocal_130 = 0f;
	struct<3> Local_131 = { 0, 0, 0 } ;
	float fLocal_132 = 0f;
	struct<3> Local_133 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	float fLocal_142 = 0f;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	float fLocal_145 = 0f;
	struct<3> Local_146 = { 0, 0, 0 } ;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	int iLocal_155 = 0;
	char* sLocal_156 = NULL;
	char* sLocal_157 = NULL;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	bool bLocal_175 = 0;
	bool bLocal_176 = 0;
	bool bLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	bool bLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	char* sLocal_201 = NULL;
	char[] cLocal_202[8] = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	float fLocal_212 = 0f;
	var uLocal_213 = 100;
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
	struct<3> Local_514 = { 0, 0, 0 } ;
	struct<3> Local_515 = { 0, 0, 0 } ;
	struct<3> Local_516 = { 0, 0, 0 } ;
	float fLocal_517 = 0f;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
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
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	struct<2> Local_543 = { 0, 0 } ;
	struct<2> Local_544 = { 0, 0 } ;
	struct<2> Local_545 = { 0, 0 } ;
	struct<2> Local_546 = { 0, 0 } ;
	int iLocal_547 = 0;
	char[] cLocal_548[8] = 0;
	struct<10> Local_549[16];
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	struct<6> Local_556 = { 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	struct<7> Local_561[2];
	int iLocal_562[2] = { 0, 0 };
	int iLocal_563[2] = { 0, 0 };
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	float fLocal_570 = 0f;
	int iLocal_571 = 0;
	struct<8> Local_572[2];
	float fLocal_573 = 0f;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	float fLocal_598 = 0f;
	float fLocal_599 = 0f;
	float fLocal_600 = 0f;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	struct<3> Local_603[4];
	int iLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	bool bLocal_607 = 0;
	struct<3> Local_608 = { 0, 0, 0 } ;
	float fLocal_609 = 0f;
	char* sLocal_610[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614[3] = { 0, 0, 0 };
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	bool bLocal_620 = 0;
	bool bLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	float fLocal_626 = 0f;
	var uLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	float fLocal_631 = 0f;
	struct<3> Local_632[4];
	struct<3> Local_633[6];
	struct<3> Local_634[6];
	struct<3> Local_635[5];
	struct<3> Local_636[4];
	struct<3> Local_637[5];
	struct<3> Local_638[5];
	float fLocal_639[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_640 = 4;
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
	var uLocal_653 = 4;
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
	var uLocal_666 = 15;
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
	var uLocal_712 = 15;
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
	var uLocal_758 = 8;
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
	var uLocal_783 = 8;
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
	struct<25> Local_808[2];
	var uLocal_809 = 8;
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
	var uLocal_834 = 6;
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
	var uLocal_853 = 6;
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
	int iLocal_872[2] = { 0, 0 };
	bool bLocal_873 = 0;
	int iLocal_874[2] = { 0, 0 };
	int iLocal_875[2] = { 0, 0 };
	int iLocal_876 = 0;
	bool bLocal_877 = 0;
	int iLocal_878 = 0;
	int iLocal_879 = 0;
	int iLocal_880[2] = { 0, 0 };
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	float fLocal_886 = 0f;
	float fLocal_887 = 0f;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	bool bLocal_890 = 0;
	float fLocal_891 = 0f;
	int iLocal_892 = 0;
	float fLocal_893[2] = { 0f, 0f };
	bool bLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	bool bLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	bool bLocal_902 = 0;
	float fLocal_903 = 0f;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	iLocal_68 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_69 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_70 = -1;
	iLocal_78 = 6;
	Local_118 = { -1614.5256f, -1137.8818f, 0.9178f };
	Local_119 = { -1626.0458f, -1137.165f, 0.47598f };
	Local_120 = { -805.4391f, 175.644f, 75.7407f };
	fLocal_121 = 336.1657f;
	Local_122 = { -804.3638f, 178.5257f, 75.7407f };
	fLocal_123 = 14.3431f;
	Local_124 = { -1862.5293f, -1211.2534f, 12.017f };
	fLocal_125 = 45.6064f;
	Local_126 = { -823.2707f, 181.5663f, 70.6967f };
	fLocal_127 = 136.7262f;
	Local_128 = { -2019.9211f, -1030.5253f, 0.001f };
	Local_129 = { -2008.7224f, -1033.1538f, 0f };
	fLocal_130 = 280.6858f;
	Local_131 = { -1072.7997f, -1703.9238f, 3.514f };
	fLocal_132 = 181.9476f;
	Local_133 = { -1105.9325f, -1695.8932f, 3.3731f };
	Local_134 = { -1106.2555f, -1694.9769f, 3.3742f };
	fLocal_135 = 122.547714f;
	Local_136 = { -1866.9508f, -1208.5293f, 12.63051f };
	Local_137 = { -1865.1531f, -1210.6937f, 12.606791f };
	fLocal_138 = 54.539898f;
	fLocal_139 = 65.01204f;
	Local_140 = { -1627.9978f, -1143.906f, -0.612126f };
	Local_141 = { -1608.7098f, -1116.1249f, 7.893201f };
	fLocal_142 = 45f;
	Local_143 = { -1084.2158f, -1707.0516f, -6.638385f };
	Local_144 = { -967.23444f, -1829.3663f, 40.314407f };
	fLocal_145 = 116f;
	Local_146 = { -1851.92f, -1217.7773f, 12.01752f };
	fLocal_147 = 332.3918f;
	fLocal_148 = 113.3809f;
	fLocal_149 = -107.75022f;
	bLocal_154 = true;
	sLocal_156 = "fam2";
	sLocal_157 = "fam2stairs";
	iLocal_158 = 2;
	iLocal_164 = 4;
	iLocal_165 = 4;
	iLocal_166 = 1;
	iLocal_168 = -1;
	iLocal_169 = -1;
	iLocal_170 = -1;
	iLocal_171 = 900;
	bLocal_174 = true;
	sLocal_201 = "family_2_mcs_4";
	cLocal_202 = "FAM2AUD";
	Local_209 = { -2030.409f, -1039.463f, -23.59287f };
	Local_210 = { -1797.853f, -982.6022f, 0f };
	Local_211 = { -934.5598f, -1360.5444f, 0f };
	fLocal_212 = 288.2051f;
	Local_514 = { -816.716f, 179.098f, 72.8274f };
	Local_515 = { -816.1068f, 177.5108f, 72.8274f };
	cLocal_548 = cLocal_202;
	StringCopy(&Local_556, "", 24);
	iLocal_602 = -1;
	fLocal_631 = 0f;
	fLocal_887 = 0f;
	fLocal_891 = 0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_11__.func_864(3);
		func_602();
		AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
		func_600();
	}
	MISC::SET_MISSION_FLAG(true);
	func_555();
	__LIB_0__.func_54(0, 1);
	iLocal_907 = 0;
	while (true)
	{
		if (!iLocal_173)
		{
			func_551();
		}
		if (!iLocal_172)
		{
			func_483();
		}
		func_480();
		func_477();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_DaddysLittleGirl", 0);
		switch (iLocal_70)
		{
			case -1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
				switch (iLocal_159)
				{
					case 0:
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
							{
								func_476(-808.0422f, 168.5755f, 75.7504f, 244.0649f);
							}
							else
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
								iLocal_89 = Global_96938.f_9[0];
							}
						}
						if (!INTERIOR::IS_VALID_INTERIOR(iLocal_113))
						{
							iLocal_113 = INTERIOR::GET_INTERIOR_AT_COORDS(-813.1963f, 179.4912f, 71.1592f);
						}
						STREAMING::REQUEST_ANIM_DICT("missfam2mcs_intp1");
						TASK::REQUEST_WAYPOINT_RECORDING(sLocal_157);
						STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_l"));
						STREAMING::REQUEST_MODEL(joaat("v_ilev_mm_doorm_r"));
						HUD::REQUEST_ADDITIONAL_TEXT("FAMILY2", 0);
						HUD::REQUEST_ADDITIONAL_TEXT(cLocal_202, 6);
						if (!iLocal_907)
						{
							STREAMING::PREFETCH_SRL("family_2_Timelapse_srl");
							iLocal_907 = 1;
						}
						if ((((((((((INTERIOR::IS_INTERIOR_READY(iLocal_113) && STREAMING::HAS_ANIM_DICT_LOADED("missfam2mcs_intp1")) && ENTITY::DOES_ENTITY_EXIST(iLocal_89)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", false, -1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_89)) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_mm_doorm_l"))) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_mm_doorm_r"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_157)) && STREAMING::IS_SRL_LOADED()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
						{
							RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							iLocal_906 = PED::CREATE_SYNCHRONIZED_SCENE(-817.311f, 179.33f, 71.241f, 0f, 0f, -113f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_906, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 8, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
							{
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 1f, false, false);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 1, false, true);
							}
							if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
							{
								OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, -1f, false, false);
								OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 1, false, true);
							}
							ENTITY::CREATE_MODEL_HIDE(Local_514, 1f, joaat("v_ilev_mm_doorm_l"), false);
							ENTITY::CREATE_MODEL_HIDE(Local_515, 1f, joaat("v_ilev_mm_doorm_r"), false);
							iLocal_109 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_l"), Local_514, true, true, false);
							iLocal_110 = OBJECT::CREATE_OBJECT(joaat("v_ilev_mm_doorm_r"), Local_515, true, true, false);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_109, iLocal_906, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1000f);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_110, iLocal_906, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1000f);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_109);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_110);
							CAM::DESTROY_ALL_CAMS(false);
							iLocal_111 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_111, iLocal_906, "fam_2_int_p1_cam", "missfam2mcs_intp1");
							CAM::SET_WIDESCREEN_BORDERS(true, 0);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							__LIB_0__.func_372(18);
							STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
							STREAMING::BEGIN_SRL();
							SYSTEM::SETTIMERA(0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_doorm_l"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_mm_doorm_r"));
							func_473(PLAYER::PLAYER_PED_ID(), 32);
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 17, 0);
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 16, 0);
							PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 6, 1, 0);
							PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								if (__LIB_0__.func_108(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									iVar0 = 0;
									while (iVar0 < 3)
									{
										if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar0]))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_97802[iVar0], true), Local_126) < 900f)
											{
												ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97802[iVar0], true, true);
												VEHICLE::DELETE_VEHICLE(&(Global_97802[iVar0]));
												iVar0 = 3;
											}
										}
										iVar0++;
									}
								}
							}
							__LIB_32__.func_562(Local_122, 1000f, 0);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							}
							else
							{
								iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
							}
							if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
							{
								if (!VEHICLE::IS_VEHICLE_MODEL(iVar1, joaat("taxi")) && !__LIB_6__.func_769(iVar1, 0, 1))
								{
									if (func_465(iVar1) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 50f)
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
										if (__LIB_0__.func_119(iVar1) == 0)
										{
											VEHICLE::DELETE_VEHICLE(&iVar1);
										}
										else
										{
											__LIB_39__.func_924(iVar1, -822.4229f, 157.8134f, 69.0913f, 91.16499f, 24, 0);
											ENTITY::SET_ENTITY_COORDS(iVar1, -822.4229f, 157.8134f, 69.0913f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iVar1, 91.16499f);
											VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, true);
										}
									}
								}
							}
							MISC::CLEAR_AREA(Local_126, 200f, true, false, false, false);
							__LIB_0__.func_313(24);
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f);
							PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
							iLocal_159++;
						}
						break;
					case 1:
						RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
						STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
						if (__LIB_6__.func_841(1000))
						{
							__LIB_11__.func_863(500);
							iLocal_159 += 2;
						}
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_906) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_906) > 0.95f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_906))
						{
							iLocal_906 = -1;
							Local_80.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
							CAM::ADD_CAM_SPLINE_NODE(Local_80.f_4, -835.1494f, 180.1434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(Local_80.f_4, -835.7494f, 180.2434f, 71.9064f, 12.6567f, 0f, -102.44f, 5000, 3, 2);
							CAM::SET_CAM_FOV(Local_80.f_4, 47.9931f);
							CAM::SET_CAM_ACTIVE(Local_80.f_4, true);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "TIME_LAPSE_MASTER", 0, true);
							__LIB_32__.func_723(&Local_80, 1, 0, 2000, 1, 1, 0, 1);
							CAM::SET_CAM_ACTIVE(iLocal_111, false);
							iLocal_905 = 10;
							PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
							iLocal_159++;
						}
						break;
					case 2:
						RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
						STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
						if (func_418(iLocal_905, 0, "EXTRASUNNY", "cirrocumulus", &Local_80, -1082130432, 0, 1, 1065353216))
						{
							AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
							SYSTEM::SETTIMERA(0);
							iLocal_159++;
						}
						if (__LIB_0__.func_404())
						{
							__LIB_32__.func_723(&Local_80, 0, 0, 2000, 1, 1, 0, 1);
							SYSTEM::WAIT(0);
							__LIB_11__.func_863(500);
							iLocal_159++;
						}
						break;
					case 3:
						RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
						if ((SYSTEM::TIMERA() > 300 && PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID())) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fam2Stairs"))
						{
							func_389(0, 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
							{
								ENTITY::SET_ENTITY_VISIBLE(iLocal_89, true, false);
								ENTITY::SET_ENTITY_COLLISION(iLocal_89, true, false);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_89, false);
							}
							CLOCK::SET_CLOCK_TIME(10, 0, 0);
							iLocal_159++;
						}
						break;
					case 4:
						RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
						iLocal_159 = 0;
						iLocal_70 = 0;
						break;
				}
				break;
			case 0:
				func_378();
				break;
			case 1:
				func_319();
				break;
			case 2:
				func_286();
				break;
			case 3:
				func_277();
				break;
			case 4:
				func_275();
				break;
			case 5:
				func_264();
				break;
			case 6:
				func_262();
				break;
			case 7:
				func_224();
				func_221();
				break;
			case 8:
				func_203();
				break;
			case 9:
				func_181();
				break;
			case 11:
				func_150();
				break;
			default:
				break;
		}
		__LIB_0__.func_400();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && !PED::IS_PED_INJURED(iLocal_89))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_95, false))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_89, false);
			}
		}
		func_147(0);
		func_102();
		func_1();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_89) && !PED::IS_PED_INJURED(iLocal_89))
		{
			PED::SET_PED_RESET_FLAG(iLocal_89, 328, true);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_88) && !PED::IS_PED_INJURED(iLocal_88))
		{
			PED::SET_PED_RESET_FLAG(iLocal_88, 328, true);
		}
		if (iLocal_152)
		{
			iLocal_152 = 0;
		}
		if (iLocal_153)
		{
			iLocal_153 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xB6E
{
	int iVar0;
	bool bVar1;
	switch (iLocal_567)
	{
		case 0:
			if (iLocal_70 == 5 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -2033.821f, -1031.864f, 4.89f) < 62500f)
			{
				STREAMING::REQUEST_MODEL(joaat("CSB_PornDudes"));
				STREAMING::REQUEST_MODEL(joaat("A_F_Y_Beach_01"));
				STREAMING::REQUEST_ANIM_DICT("missfam2leadinoutmcs3");
				if (((STREAMING::HAS_MODEL_LOADED(joaat("CSB_PornDudes")) && STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Beach_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("missfam2leadinoutmcs3")) && func_97(-2033.23f, -1032.27f, 4.89f, 0f))
				{
					if (!PED::IS_PED_INJURED(iLocal_88))
					{
						iLocal_91[0] = PED::CREATE_PED(26, joaat("CSB_PornDudes"), -2032.69f, -1031.36f, 5.59f, 0f, true, true);
						PED::SET_PED_LOD_MULTIPLIER(iLocal_91[0], 1.75f);
						iLocal_91[1] = PED::CREATE_PED(26, joaat("CSB_PornDudes"), -2034.42f, -1032.71f, 5.54f, 0f, true, true);
						iLocal_91[2] = PED::CREATE_PED(26, joaat("A_F_Y_Beach_01"), -2033.32f, -1031.07f, 5.54f, 0f, true, true);
						iLocal_91[3] = PED::CREATE_PED(26, joaat("A_F_Y_Beach_01"), -2034.48f, -1031.6f, 5.48f, 0f, true, true);
						iLocal_568 = PED::CREATE_SYNCHRONIZED_SCENE(-2033.821f, -1031.864f, 4.89f, 0f, 0f, -4.4f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_91[0], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_91[1], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_pornguy_b", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_91[2], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_a", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_91[3], iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_porngal_b", 1000f, -1000f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_88, iLocal_568, "missfam2leadinoutmcs3", "onboat_leadin_tracy", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_91[0], 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_91[0], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_91[0], 4, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_91[0], 1, 0, 0, false);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 0, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_91[1], 4, 2, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_91[1], 0, 0, 0, false);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_568, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CSB_PornDudes"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Beach_01"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TracyDiSanto"));
						iLocal_567++;
					}
				}
			}
			break;
		case 1:
			func_96("family_2_mcs_3", -2033.821f, -1031.864f, 4.89f, 100f, &iLocal_178);
			if (iLocal_178)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoplayer");
					func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[0]))
					{
						func_2("Guy_on_sofa", iLocal_91[0], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]) && !PED::IS_PED_INJURED(iLocal_91[1]))
					{
						func_2("Man_getting_wood", iLocal_91[1], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[2]) && !PED::IS_PED_INJURED(iLocal_91[2]))
					{
						func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[3]) && !PED::IS_PED_INJURED(iLocal_91[3]))
					{
						func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_88) && !PED::IS_PED_INJURED(iLocal_88))
					{
						func_2("Tracy", iLocal_88, 0, 2);
					}
				}
			}
			if (iLocal_178)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -2033.821f, -1031.864f, 4.89f) > (120f * 120f))
				{
					iLocal_178 = 0;
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -2033.821f, -1031.864f, 4.89f) > 75625f || (iLocal_70 != 5 && iLocal_70 != 6))
			{
				if (iLocal_70 != 6)
				{
					bVar1 = true;
					iVar0 = 0;
					while (iVar0 < iLocal_91)
					{
						if (!PED::IS_PED_INJURED(iLocal_91[iVar0]))
						{
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_91[iVar0]))
							{
								bVar1 = false;
							}
						}
						iVar0++;
					}
					if (!PED::IS_PED_INJURED(iLocal_88))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_88))
						{
							bVar1 = false;
						}
					}
					if (bVar1)
					{
						iVar0 = 0;
						while (iVar0 < iLocal_91)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[iVar0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_91[iVar0]);
								PED::DELETE_PED(&(iLocal_91[iVar0]));
							}
							iVar0++;
						}
					}
					iLocal_567 = 0;
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1030
{
	struct<50> Var0;
	int iVar1;
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_3(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_3(int iParam0, var uParam1, int iParam2)//Position - 0x10EB
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_24__.func_948(iParam0, &Var2, 0, -1);
	__LIB_24__.func_948(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (__LIB_0__.func_211(iVar4, __LIB_0__.func_33(iVar0), __LIB_0__.func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__.func_33(iVar0)), &iVar1))
			{
				Var3 = { func_15(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__.func_212(iVar4, __LIB_0__.func_33(iVar0), __LIB_0__.func_350(iParam0, Var2.f_13[iVar0], Var2[iVar0], __LIB_0__.func_33(iVar0)), &iVar1))
			{
				Var3 = { func_15(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (__LIB_0__.func_211(iVar4, 14, __LIB_6__.func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_15(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (__LIB_0__.func_212(iVar4, 14, __LIB_6__.func_766(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_15(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = __LIB_0__.func_24(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_15(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

struct<14> func_15(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x200E
{
	__LIB_0__.func_41();
	if (iParam0 == joaat("Player_Zero"))
	{
		func_66(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_One"))
	{
		__LIB_32__.func_568(iParam1, iParam2);
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		__LIB_32__.func_567(iParam1, iParam2);
	}
	return Global_78130[0 /*14*/];
}

void func_66(int iParam0, int iParam1)//Position - 0x1378F
{
	switch (iParam0)
	{
		case 0:
			__LIB_20__.func_235(iParam1);
			break;
		case 2:
			__LIB_12__.func_180(iParam1);
			break;
		case 3:
			__LIB_26__.func_242(iParam1);
			break;
		case 4:
			__LIB_20__.func_231(iParam1);
			break;
		case 6:
			__LIB_20__.func_230(iParam1);
			break;
		case 5:
			__LIB_20__.func_229(iParam1);
			break;
		case 8:
			__LIB_20__.func_228(iParam1);
			break;
		case 9:
			__LIB_20__.func_227(iParam1);
			break;
		case 10:
			__LIB_20__.func_226(iParam1);
			break;
		case 1:
			__LIB_20__.func_225(iParam1);
			break;
		case 7:
			__LIB_20__.func_224(iParam1);
			break;
		case 11:
			__LIB_20__.func_223(iParam1);
			break;
		case 12:
			__LIB_20__.func_222(iParam1);
			break;
		case 13:
			__LIB_20__.func_221(iParam1);
			break;
		case 14:
			__LIB_20__.func_220(iParam1);
			break;
	}
}

void func_96(char* sParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x19B88
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param1, true) < fParam2 && !*bParam3)
	{
		CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
		*bParam3 = 1;
	}
}

int func_97(struct<3> Param0, float fParam1)//Position - 0x19BBD
{
	switch (iLocal_566)
	{
		case 0:
			if (__LIB_11__.func_893(&iLocal_88, 15, -808.0422f, 168.5755f, 75.7504f, 244.0649f, 1))
			{
				iLocal_566++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_88))
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_88, 2, 3, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_88, 3, 4, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_88, 4, 4, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_88, 6, 2, 0);
				PED::SET_PED_PRELOAD_PROP_DATA(iLocal_88, 0, 0, 0);
				PED::SET_PED_PRELOAD_PROP_DATA(iLocal_88, 1, 1, 0);
				iLocal_566++;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_88))
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_88))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_88, 2, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_88, 3, 4, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_88, 4, 4, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_88, 6, 2, 0, 0);
					PED::SET_PED_PROP_INDEX(iLocal_88, 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(iLocal_88, 1, 1, 0, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_88, Param0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_88, fParam1);
					func_98(iLocal_88);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_88);
					PED::RELEASE_PED_PRELOAD_PROP_DATA(iLocal_88);
					iLocal_566 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x19CDE
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, false);
		PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 104, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
		PED::SET_PED_NEVER_LEAVES_GROUP(iParam0, true);
		PED::SET_PED_DIES_IN_WATER(iParam0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_114);
	}
}

void func_102()//Position - 0x19E2C
{
	bool bVar0;
	int iVar1;
	int iVar2;
	switch (iLocal_569)
	{
		case 0:
			if (iLocal_70 < 3 || (iLocal_70 == 11 && iLocal_72 < 3))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_133) < 40000f)
				{
					iLocal_569++;
				}
			}
			break;
		case 1:
			bVar0 = false;
			if ((iLocal_70 > 2 && iLocal_70 != 11) || (iLocal_70 == 11 && iLocal_72 > 2))
			{
				bVar0 = true;
			}
			if (func_145(bVar0))
			{
				fLocal_570 = 0f;
				iLocal_569++;
			}
			break;
		case 2:
			if (!iLocal_571)
			{
				if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1105.2411f, -1697.0247f, 3.3678f, 2f, joaat("prop_table_03_chr"), false))
				{
					iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1105.2411f, -1697.0247f, 3.3678f, 2f, joaat("prop_table_03_chr"), true, false, true);
					ENTITY::SET_ENTITY_PROOFS(iVar1, true, true, true, true, true, true, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
					iLocal_571 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_90))
			{
				if (!PED::IS_PED_FLEEING(iLocal_90))
				{
					if (!PED::IS_PED_USING_SCENARIO(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_90, Local_133, true, false, false, true);
						if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Local_133, "PROP_HUMAN_SEAT_CHAIR", 2f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_90, -1105.2411f, -1697.0247f, 3.3678f, 2f, 0);
						}
					}
				}
			}
			iVar2 = 0;
			while (iVar2 < iLocal_96)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[iVar2], false))
				{
					if (iLocal_70 <= 2)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_96[iVar2], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 9f)
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
						}
					}
					if (iLocal_70 < 2)
					{
						if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_96[iVar2]) != 2)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_96[iVar2], 2);
						}
					}
					else if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_96[iVar2]) == 2)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_96[iVar2], 1);
					}
				}
				iVar2++;
			}
			func_104();
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_133) > 44100f)
			{
				func_103();
				iLocal_569 = 0;
			}
			break;
	}
}

void func_103()//Position - 0x1A058
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
	{
		PED::DELETE_PED(&iLocal_90);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_96)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_96[iVar0]));
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tribike"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bmx"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cruiser"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scorcher"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_M_BikeHire_01"));
}

void func_104()//Position - 0x1A0C6
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	iVar1 = 0;
	bVar2 = false;
	iVar3 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("scorcher"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("cruiser"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("tribike"))) && !VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("bmx")))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar0)) > 2f)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -1106.309f, -1693.7155f, 5.12379f, 6.25f, 7f, 3.25f, false, true, 0))
			{
				iVar4 = 0;
				while (iVar4 < iLocal_96)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[iVar4], false))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_96[iVar4], iVar0))
						{
							bVar2 = true;
						}
					}
					iVar4++;
				}
			}
		}
	}
	if (iVar1 || bVar2)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[iVar4], false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_96[iVar4], false);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_96[iVar4], 0, 0f, 0f, -0.001f, 0f, 0f, 0f, 0, true, true, true, false, true);
			}
			iVar4++;
		}
		if (!PED::IS_PED_INJURED(iLocal_90))
		{
			if (bVar2)
			{
				func_105("FM2_BIKES");
			}
		}
	}
	bVar5 = false;
	if (!PED::IS_PED_INJURED(iLocal_90))
	{
		if ((((FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_90, true), 20f) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_90, true), 20f, true)) || MISC::IS_PROJECTILE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_90, true) + Vector(20f, 20f, 20f), ENTITY::GET_ENTITY_COORDS(iLocal_90, true) - Vector(20f, 20f, 20f), false)) || PED::IS_PED_FLEEING(iLocal_90)) || ((iLocal_70 == 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_133, 40f, 40f, 20f, false, true, 0)))
		{
			bVar5 = true;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_90, true)) < 100f)
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_90, PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_90))
				{
					fLocal_570 = (fLocal_570 + MISC::GET_FRAME_TIME());
					if (fLocal_570 > 0.5f)
					{
						bVar5 = true;
					}
				}
				else if (fLocal_570 > 0f)
				{
					fLocal_570 = (fLocal_570 - (MISC::GET_FRAME_TIME() * 2f));
				}
				else if (fLocal_570 != 0f)
				{
					fLocal_570 = 0f;
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(iLocal_90))
			{
				bVar5 = true;
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_90, true)) < 400f && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			iVar3 = 1;
			bVar5 = true;
		}
	}
	if (bVar5)
	{
		iVar4 = 0;
		while (iVar4 < iLocal_96)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar4]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_96[iVar4], false);
			}
			iVar4++;
		}
		if ((!PED::IS_PED_INJURED(iLocal_90) && !PED::IS_PED_FLEEING(iLocal_90)) && PED::IS_PED_USING_ANY_SCENARIO(iLocal_90))
		{
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iLocal_90, ENTITY::GET_ENTITY_COORDS(iLocal_90, true) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_90));
			TASK::TASK_SMART_FLEE_PED(iLocal_90, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
			}
		}
		if (((iLocal_70 == 1 || iLocal_70 == 2) || (iLocal_70 == 3 && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_89, iLocal_90, 30f, 30f, 30f, false, true, 0))) || iLocal_70 == 11)
		{
			if (!PED::IS_PED_INJURED(iLocal_89))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_89, 2, false);
				TASK::TASK_SMART_FLEE_PED(iLocal_89, PLAYER::PLAYER_PED_ID(), 200f, 20000, false, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_90) && (ENTITY::IS_ENTITY_DEAD(iLocal_90, false) || PED::IS_PED_INJURED(iLocal_90)))
	{
		if ((iLocal_70 < 3 || (iLocal_70 == 3 && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_89, iLocal_90, 30f, 30f, 30f, false, true, 0))) || iLocal_70 == 11)
		{
			func_105("FM2_BGHIT");
		}
	}
	else if ((((!PED::IS_PED_INJURED(iLocal_90) && PED::IS_PED_FLEEING(iLocal_90)) && iLocal_70 < 3) || fLocal_570 > 0.5f) || iVar3)
	{
		func_105("FM2_BGRUN");
	}
	else if (!PED::IS_PED_INJURED(iLocal_89) && PED::IS_PED_FLEEING(iLocal_89))
	{
		func_105("FM2_JSPOOK");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = 0;
	}
}

void func_105(char* sParam0)//Position - 0x1A59D
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "FM2_JSPOOK"))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iLocal_89))
		{
			sParam0 = "FM2_JIMHIT";
		}
	}
	func_132(sParam0);
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "FM2_TSPOOK") || MISC::ARE_STRINGS_EQUAL(sParam0, "FM2_JSPOOK"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_88, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_88);
			}
			TASK::TASK_SMART_FLEE_PED(iLocal_88, PLAYER::PLAYER_PED_ID(), 500f, 60000, false, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_89, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_89);
			}
			TASK::TASK_SMART_FLEE_PED(iLocal_89, PLAYER::PLAYER_PED_ID(), 500f, 60000, false, false);
		}
	}
	while (!__LIB_0__.func_204())
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_70 == 1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		else
		{
			iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
		}
		bVar1 = false;
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (__LIB_0__.func_108(iVar0))
			{
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_97802[iVar2]))
					{
						bVar1 = true;
						iVar2 = 3;
					}
					iVar2++;
				}
			}
			if (!VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")) && !bVar1)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 50f)
				{
					if (__LIB_0__.func_119(iVar0) != 0)
					{
						__LIB_39__.func_912(iVar0, 0, 145);
					}
				}
			}
		}
	}
	STREAMING::REMOVE_IPL("smboat");
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_101[iVar3]))
		{
			HUD::REMOVE_BLIP(&(iLocal_101[iVar3]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_100[iVar3]))
		{
			PED::DELETE_PED(&(iLocal_100[iVar3]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[iVar3]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_99[iVar3]));
		}
		iVar3++;
	}
	if (iLocal_70 >= 5 && iLocal_70 != 11)
	{
		while (!func_389(1, 1))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_0__.func_428(Local_124, fLocal_125);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		PED::DELETE_PED(&iLocal_89);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		PED::DELETE_PED(&iLocal_88);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_93);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_94);
	}
	func_600();
}

void func_132(char* sParam0)//Position - 0x1EB70
{
	__LIB_0__.func_324(sParam0);
	func_133(0);
}

void func_133(int iParam0)//Position - 0x1EB83
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_134(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_134(int iParam0)//Position - 0x1EBC8
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
	func_135(&(Global_113386.f_2363.f_539), iVar1);
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

void func_135(var uParam0, int iParam1)//Position - 0x1ECD8
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
			if (!func_137(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_137(int iParam0, var uParam1, float fParam2)//Position - 0x1EEAC
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
			return func_137(8, uParam1, fParam2);
			break;
		case 10:
			return func_137(8, uParam1, fParam2);
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

bool func_145(bool bParam0)//Position - 0x1FAF5
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	STREAMING::REQUEST_MODEL(joaat("U_M_M_BikeHire_01"));
	STREAMING::REQUEST_MODEL(joaat("cruiser"));
	STREAMING::REQUEST_MODEL(joaat("bmx"));
	STREAMING::REQUEST_MODEL(joaat("scorcher"));
	STREAMING::REQUEST_MODEL(joaat("tribike"));
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("U_M_M_BikeHire_01")) && STREAMING::HAS_MODEL_LOADED(joaat("cruiser"))) && STREAMING::HAS_MODEL_LOADED(joaat("bmx"))) && STREAMING::HAS_MODEL_LOADED(joaat("scorcher"))) && STREAMING::HAS_MODEL_LOADED(joaat("tribike")))
	{
		if (iLocal_166 != 0 || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96[0]))
			{
				iLocal_96[0] = VEHICLE::CREATE_VEHICLE(joaat("scorcher"), -1106.8845f, -1692.2295f, 4.0189f, 0f, true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[0], false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_96[0], -1106.8845f, -1692.2295f, 4.0189f, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_96[0], -0.0504f, -0.0723f, -0.4427f, 0.8923f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_96[0], 2);
			}
		}
		if ((iLocal_165 != 1 && iLocal_166 != 1) || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96[1]))
			{
				iLocal_96[1] = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), -1108.3959f, -1690.399f, 3.9549f, 0f, true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[1], false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_96[1], -1108.3959f, -1690.399f, 3.9549f, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_96[1], -0.0466f, -0.074f, -0.4628f, 0.8822f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_96[1], 1);
			}
		}
		if (iLocal_166 != 2 || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96[2]))
			{
				iLocal_96[2] = VEHICLE::CREATE_VEHICLE(joaat("bmx"), -1109.405f, -1688.7036f, 3.7501f, 0f, true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[2], false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_96[2], -1109.405f, -1688.7036f, 3.7501f, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_96[2], 0.0178f, 0.0525f, -0.4469f, 0.8929f);
			}
		}
		if (iLocal_166 != 3 || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96[3]))
			{
				iLocal_96[3] = VEHICLE::CREATE_VEHICLE(joaat("tribike"), -1111.001f, -1686.6287f, 3.9705f, 0f, true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[3], false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_96[3], -1111.001f, -1686.6287f, 3.9705f, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_96[3], -0.0563f, -0.0702f, -0.5377f, 0.8383f);
			}
		}
		if ((iLocal_165 != 4 && iLocal_166 != 4) || !bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96[4]))
			{
				iLocal_96[4] = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), -1105.6056f, -1693.98f, 3.9518f, 0f, true, true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[4], false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_96[4], -1105.6056f, -1693.98f, 3.9518f, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_96[4], -0.0437f, -0.0759f, -0.4104f, 0.9077f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_96[4], 0);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_96[4], true);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_90))
		{
			iLocal_90 = PED::CREATE_PED(26, joaat("U_M_M_BikeHire_01"), Local_133, fLocal_147, true, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_90);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_90, 17, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 128, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_90, 1024, true);
		__LIB_0__.func_203(&Local_549, 4, iLocal_90, "FAM2BIKEHIRE", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_90, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_90, joaat("HATES_PLAYER"));
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_90, false);
		PED::SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(iLocal_90, true);
		iVar0 = 0;
		while (iVar0 < iLocal_96)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar0]))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_96[iVar0], true, true, true, true, true, false, false, false);
			}
			iVar0++;
		}
	}
	if (bParam0)
	{
		iVar2 = 1;
		iVar3 = 0;
		while (iVar3 < iLocal_96)
		{
			if (iVar3 != iLocal_166 && iVar3 != iLocal_165)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar3]))
				{
					iVar2 = 0;
				}
			}
			iVar3++;
		}
		bVar1 = iVar2;
	}
	else
	{
		bVar1 = (((((ENTITY::DOES_ENTITY_EXIST(iLocal_96[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_96[1])) && ENTITY::DOES_ENTITY_EXIST(iLocal_96[2])) && ENTITY::DOES_ENTITY_EXIST(iLocal_96[3])) && ENTITY::DOES_ENTITY_EXIST(iLocal_96[4])) && ENTITY::DOES_ENTITY_EXIST(iLocal_90));
	}
	return bVar1;
}

void func_147(bool bParam0)//Position - 0x20017
{
	if (!iLocal_540 && !bParam0)
	{
		if (iLocal_70 < 5)
		{
			iLocal_539 = PED::ADD_SCENARIO_BLOCKING_AREA(-1120.292f, -1681.0181f, 13.274f, -1081.2887f, -1706.5221f, 1.5344f, false, true, true, true);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1082.0876f, -1714.033f, 3.285254f, -1107.201f, -1681.8702f, 14.290073f, 37.5f, false, false, true);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(5.919011f, -1697.3827f, -1112.6107f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.3827f, -1112.6107f) + Vector(2.75f, 30f, 42.688f), false, true);
			iLocal_564 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1107.517f, -1692.887f, 4.374f, 4.161f, 13.858f, 4.5f, __LIB_9__.func_257(36.0244f), false, 1);
			iLocal_540 = 1;
		}
	}
	else if (iLocal_70 >= 5 || bParam0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_539, false);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-1082.0876f, -1714.033f, 3.285254f, -1107.201f, -1681.8702f, 14.290073f, 37.5f, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(5.919011f, -1697.3827f, -1112.6107f) - Vector(2.75f, 30f, 42.688f), Vector(5.919011f, -1697.3827f, -1112.6107f) + Vector(2.75f, 30f, 42.688f), true, true);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_564))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_564);
		}
		iLocal_540 = 0;
	}
}

void func_150()//Position - 0x20217
{
	if (iLocal_70 != 11)
	{
		iLocal_72 = iLocal_70;
		iLocal_70 = 11;
		if (HUD::DOES_BLIP_EXIST(iLocal_102))
		{
			HUD::REMOVE_BLIP(&iLocal_102);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_103))
		{
			HUD::REMOVE_BLIP(&iLocal_103);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_104))
		{
			HUD::REMOVE_BLIP(&iLocal_104);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_105))
		{
			HUD::REMOVE_BLIP(&iLocal_105);
		}
		if (__LIB_0__.func_75())
		{
			if (!iLocal_555)
			{
				Local_556 = { __LIB_0__.func_389() };
				__LIB_6__.func_833();
				iLocal_555 = 1;
				iLocal_583 = 0;
				iLocal_585 = 0;
				iLocal_584 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_72 == 1)
	{
		func_104();
		if (!PED::IS_PED_INJURED(iLocal_89))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 625f)
			{
				if ((!iLocal_583 && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && !__LIB_0__.func_75())
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_WANTED", 8, 0, 0, 0))
					{
						iLocal_584 = MISC::GET_GAME_TIMER();
						iLocal_583 = 1;
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_584) > 15000 && !__LIB_0__.func_75())
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_LOSE", 8, 0, 0, 0))
					{
						iLocal_584 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_160(iLocal_89))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_104))
				{
					HUD::REMOVE_BLIP(&iLocal_104);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(iLocal_104))
			{
				__LIB_6__.func_771();
				iLocal_104 = __LIB_6__.func_850(iLocal_89, 0, 145);
			}
			else
			{
				if (!bLocal_176 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__.func_325("FM2_JIMGB", 7500, 1);
					bLocal_176 = true;
				}
				if (func_153(iLocal_89, 300f))
				{
					func_105("FM2_JIMAB");
				}
			}
		}
	}
	else if (iLocal_72 == 8)
	{
		if (!PED::IS_PED_INJURED(iLocal_88))
		{
			if (func_160(iLocal_88))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_104))
				{
					HUD::REMOVE_BLIP(&iLocal_104);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(iLocal_104))
			{
				__LIB_6__.func_771();
				iLocal_104 = __LIB_6__.func_850(iLocal_88, 0, 145);
			}
			else
			{
				if (!bLocal_177 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__.func_325("FM2_TRAGB", 7500, 1);
					bLocal_177 = true;
				}
				if (func_153(iLocal_88, 300f))
				{
					func_105("FM2_TRAAB");
				}
			}
		}
		if (!iLocal_585)
		{
			iLocal_585 = 1;
		}
	}
	else if (!iLocal_585)
	{
		iLocal_585 = 1;
	}
	if (!__LIB_0__.func_75())
	{
		__LIB_35__.func_210(&Local_546);
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (!iLocal_585)
		{
			if (iLocal_72 == 1)
			{
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 625f)
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_LOSTCOP", 8, 0, 0, 0))
						{
							iLocal_585 = 1;
						}
					}
				}
			}
		}
		else
		{
			iLocal_70 = iLocal_72;
			Local_546.f_1 = 0;
			HUD::CLEAR_PRINTS();
		}
	}
}

int func_153(int iParam0, float fParam1)//Position - 0x20505
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) > fParam1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_160(int iParam0)//Position - 0x20698
{
	if (PED::IS_PED_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 50f, 50f, 50f, false, true, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::GET_CAN_PED_BE_GRABBED_BY_SCRIPT(iLocal_89, false, true, false, false, false, false, true, -1))
			{
				PED::REMOVE_PED_FROM_GROUP(iParam0);
			}
		}
		return 1;
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, Global_19, false, true, 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(iParam0, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
	}
	if (PED::GET_CAN_PED_BE_GRABBED_BY_SCRIPT(iParam0, false, true, false, false, false, false, true, -1))
	{
	}
	if (PED::GET_CAN_PED_BE_GRABBED_BY_SCRIPT(iParam0, false, true, false, false, false, false, false, -1))
	{
	}
	return 0;
}

void func_181()//Position - 0x20F91
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	}
	switch (iLocal_159)
	{
		case 0:
			AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", true);
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("missfam2_pier");
			STREAMING::REQUEST_MODEL(joaat("prop_cigar_01"));
			STREAMING::REQUEST_MODEL(joaat("cruiser"));
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (bLocal_174)
				{
					CUTSCENE::REQUEST_CUTSCENE("family_2_mcs_4", 8);
				}
				else
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_4", 2, 8);
				}
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_88, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 1, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 0, 0, 0, 0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
				}
				iLocal_159++;
			}
			break;
		case 2:
			func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_88, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 0, 0, 0, 0);
			if (__LIB_0__.func_90())
			{
				__LIB_6__.func_771();
				__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, false, true, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_92, "Michaels_seashark", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_88))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_89, "Jimmy", 0, 0, 0);
				}
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				__LIB_6__.func_771();
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_COMPLETE");
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				STREAMING::REQUEST_ANIM_DICT("missfam2_pier");
				STREAMING::REQUEST_MODEL(joaat("prop_cigar_01"));
				STREAMING::REQUEST_MODEL(joaat("cruiser"));
				__LIB_11__.func_862();
				iLocal_159++;
			}
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f);
			__LIB_0__.func_46(1, 1);
			AUDIO::SET_AUDIO_FLAG("AvoidMissionCompleteDelay", false);
			iLocal_159++;
			break;
		case 4:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_92, 5f);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_92, 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
				{
					PED::DELETE_PED(&iLocal_89);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
				{
					PED::DELETE_PED(&iLocal_88);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1607.2512f, -1138.1034f, 1.1443f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 262.2968f);
			}
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.5f);
			if (CAM::IS_SCREEN_FADED_OUT() && CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				SYSTEM::SETTIMERA(0);
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 31400)
				{
					if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1500);
					}
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				__LIB_11__.func_715();
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(500);
				}
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_159++;
			}
			break;
		case 5:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
				{
					__LIB_39__.func_924(iLocal_95, -1060.5181f, -1691.8796f, 3.5097f, 185.4265f, 24, 0);
				}
				PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 0);
				PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 3);
				PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(PLAYER::PLAYER_PED_ID(), 2);
				while (!func_389(0, 1))
				{
					SYSTEM::WAIT(0);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				}
				SYSTEM::SETTIMERA(0);
				STREAMING::REMOVE_IPL("smboat");
				iLocal_159 = 100;
			}
			break;
		case 100:
			STREAMING::REQUEST_PTFX_ASSET();
			func_189(-1850.139f, -1250.253f, 8.59f, -120.1799f, 1);
			STREAMING::REQUEST_ANIM_DICT("missfam2_pier");
			STREAMING::REQUEST_MODEL(joaat("prop_cigar_01"));
			STREAMING::REQUEST_MODEL(joaat("cruiser"));
			while ((!STREAMING::HAS_ANIM_DICT_LOADED("missfam2_pier") || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cigar_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("cruiser")))
			{
				SYSTEM::WAIT(0);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			}
			AUDIO::SET_AUDIO_FLAG("HoldMissionCompleteWhenPrepared", false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1850.139f, -1250.253f, 8.59f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 134.28f);
			iLocal_208 = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), -1846.5731f, -1214.7306f, 12.5755f, 0f, true, true, false);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_208, -0.0155f, -0.0834f, -0.306f, 0.9483f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_208, 5f);
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			iLocal_207 = OBJECT::CREATE_OBJECT(joaat("prop_cigar_01"), -1850.139f, -1250.253f, 8.59f, true, true, false);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_207, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 180f, false, false, false, false, 2, true, 0);
			GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("cs_cig_smoke", iLocal_207, 0.05f, 0f, 0f, 0f, 0f, 90f, 1f, false, false, false);
			iLocal_206 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
			CAM::SET_CAM_PARAMS(iLocal_206, -1852.002f, -1250.2244f, 8.9706f, -3.6975f, 0f, -120.1799f, 45f, 0, 1, 1, 2);
			CAM::SET_CAM_PARAMS(iLocal_206, -1852.087f, -1250.3954f, 8.9706f, -1.3266f, 0f, -102.4498f, 45f, 10000, 1, 1, 2);
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("mission_stat_watcher")) > 0)
			{
				__LIB_0__.func_46(1, 1);
				while (!Global_78579)
				{
					SYSTEM::WAIT(0);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				}
				while (Global_78579)
				{
					SYSTEM::WAIT(0);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				}
			}
			else
			{
				SYSTEM::WAIT(3000);
			}
			MISC::CLEAR_AREA_OF_PEDS(-1850.15f, -1250.253f, 8.625f, 5f, 0);
			iLocal_205 = PED::CREATE_SYNCHRONIZED_SCENE(-1850.15f, -1250.253f, 8.625f, 0f, 0f, 134.28f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_205, "missfam2_pier", "pier_lean_toss_cigarette", 1000f, -4f, 0, 0, 1000f, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			SYSTEM::SETTIMERA(0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1500);
			}
			iLocal_159++;
			break;
		case 101:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_205) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_205) > 0.227f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_nose", PLAYER::PLAYER_PED_ID(), -0.025f, 0.12f, 0f, 0f, 90f, 0f, 31086, 1f, false, false, false);
				iLocal_159++;
			}
			break;
		case 102:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_205) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_205) > 0.563f)
			{
				CAM::SET_CAM_PARAMS(iLocal_206, CAM::GET_CAM_COORD(iLocal_206), CAM::GET_CAM_ROT(iLocal_206, 2), CAM::GET_CAM_FOV(iLocal_206), 0, 1, 1, 2);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) != 4)
				{
					CAM::SET_CAM_PARAMS(iLocal_206, -1852.9216f, -1252.6982f, 9.3524f, -2.9046f, 0f, -46.5763f, 50f, 4000, 1, 1, 2);
				}
				else
				{
					CAM::SET_CAM_PARAMS(iLocal_206, -1851.6848f, -1251.4376f, 9.3524f, -0.0547f, 0.0543f, -38.2308f, 50f, 4000, 1, 1, 2);
				}
				iLocal_159++;
			}
			break;
		case 103:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_207) && ENTITY::IS_ENTITY_ATTACHED(iLocal_207))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_205) > 0.711f)
				{
					ENTITY::DETACH_ENTITY(iLocal_207, true, true);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_207, Vector(8.3737f, -1250.9132f, -1852.4299f) - Vector(9.2628f, -1250.44f, -1850.8989f));
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_205) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_205) > 0.768f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
				iLocal_159++;
			}
			break;
		case 104:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_205) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_205) > 0.7116f)
			{
				GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("cs_cig_exhale_mouth", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
				__LIB_11__.func_784(&uLocal_521, PLAYER::PLAYER_PED_ID(), 0, 1069547520, 1000, 1000, 700, 0, 1045220557);
				iLocal_159++;
			}
			break;
		case 105:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_205))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_206))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_205) > 0.85f && __LIB_20__.func_655(&uLocal_521, 0, 1, 1, 0, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							if (CAM::DOES_CAM_EXIST(iLocal_206))
							{
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
								CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
								CAM::DESTROY_CAM(iLocal_206, false);
							}
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_205) > 0.98f)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_206))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
						CAM::DESTROY_CAM(iLocal_206, false);
					}
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					CAM::SET_WIDESCREEN_BORDERS(false, 100);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_207))
					{
						OBJECT::DELETE_OBJECT(&iLocal_207);
					}
					SYSTEM::SETTIMERA(0);
					iLocal_159++;
				}
			}
			break;
		case 106:
			if (SYSTEM::TIMERA() > 100)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_6__.func_823(0, 0);
				func_600();
			}
			break;
	}
}

void func_189(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x21EC8
{
	int iVar0;
	if (!__LIB_0__.func_295())
	{
		STREAMING::SET_FOCUS_POS_AND_VEL(Param0, 0f, 0f, 0f);
		STREAMING::NEW_LOAD_SCENE_START(Param0, SYSTEM::COS((fParam1 + 90f)), SYSTEM::SIN((fParam1 + 90f)), 0f, 25f, 0);
		SYSTEM::SETTIMERA(0);
		iVar0 = MISC::GET_GAME_TIMER();
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iVar0) < 12000)
		{
			SYSTEM::WAIT(0);
		}
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
		}
		STREAMING::CLEAR_FOCUS();
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
}

void func_203()//Position - 0x2227F
{
	bool bVar0;
	bool bVar1;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!PED::IS_PED_INJURED(iLocal_88))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_209) < 10f)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
		if (iLocal_159 < 100)
		{
			if (func_220(&iLocal_92, &uLocal_151, &iLocal_152) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				iLocal_159 = 100;
			}
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			AUDIO::START_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		switch (iLocal_159)
		{
			case 0:
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
				{
					if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
					}
					Local_545.f_1 = 0;
					iLocal_630 = 0;
					fLocal_631 = 0f;
					iLocal_170 = 0;
					iLocal_178 = 0;
					iLocal_159++;
					if (iLocal_155)
					{
						iLocal_159 = -1;
					}
				}
				break;
			case -1:
				STREAMING::REQUEST_IPL("smboat");
				while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
				{
					RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_DaddysLittleGirl", 0);
					SYSTEM::WAIT(0);
				}
				iLocal_159 = 1;
				break;
			case 1:
				func_217(&iLocal_92, &iLocal_105, Local_119, &iLocal_102, &Local_545);
				if (!__LIB_0__.func_75() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_88);
					ENTITY::SET_ENTITY_PROOFS(iLocal_92, false, false, false, false, false, false, false, false);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					if (!iLocal_155)
					{
						__LIB_0__.func_210("FM2_DRIVE", 5000, 1);
					}
					SYSTEM::SETTIMERA(0);
					if (iLocal_155)
					{
						iLocal_159 = -2;
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			case -2:
				func_217(&iLocal_92, &iLocal_105, Local_119, &iLocal_102, &Local_545);
				if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_TALK1", 8, 0, 0, 0))
				{
					iLocal_155 = 0;
					iLocal_159 = -3;
				}
				break;
			case -3:
				func_217(&iLocal_92, &iLocal_105, Local_119, &iLocal_102, &Local_545);
				if (!__LIB_0__.func_75())
				{
					SYSTEM::SETTIMERA(0);
					__LIB_0__.func_210("FM2_DRIVE", 5000, 1);
					iLocal_159 = 2;
				}
				break;
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					if (SYSTEM::TIMERA() > 5000 || (SYSTEM::TIMERA() > 2000 && MISC::GET_PROFILE_SETTING(203) == 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false) && !__LIB_0__.func_75())
						{
							if (!PED::IS_PED_HEADTRACKING_PED(iLocal_88, PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_88, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							}
							iLocal_186 = MISC::GET_GAME_TIMER();
							iLocal_518 = 0;
							iLocal_519 = 0;
							iLocal_554 = 0;
							iLocal_555 = 0;
							iLocal_159++;
						}
					}
					func_217(&iLocal_92, &iLocal_105, Local_119, &iLocal_102, &Local_545);
				}
				break;
			case 3:
				bVar0 = ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false));
				switch (iLocal_630)
				{
					case 0:
						if (!bLocal_191 && !bLocal_193)
						{
							if (__LIB_0__.func_294())
							{
								func_214("FAM2_TALK2", bVar0);
							}
							else
							{
								func_214("FAM2_TALK2b", bVar0);
							}
						}
						else
						{
							func_214("FAM2_KILTALK", bVar0);
						}
						if ((!__LIB_0__.func_75() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false)) && !iLocal_555)
						{
							iLocal_554 = 0;
							iLocal_555 = 0;
							TASK::TASK_CLEAR_LOOK_AT(iLocal_88);
							iLocal_630++;
						}
						break;
					case 1:
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_118) > 10000f)
						{
							if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false)) && ENTITY::GET_ENTITY_SPEED(iLocal_92) < 5f)
							{
								fLocal_631 = (fLocal_631 + MISC::GET_FRAME_TIME());
							}
							else if (fLocal_631 > 0f)
							{
								fLocal_631 = (fLocal_631 - (MISC::GET_FRAME_TIME() * 5f));
							}
						}
						if (fLocal_631 > 10f)
						{
							if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_GOBACK", 8, 0, 0, 0))
							{
								fLocal_631 = 0f;
							}
						}
						if (!bLocal_191 && !bLocal_193)
						{
						}
						break;
				}
				func_213();
				if (!PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_88, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_88, iLocal_92, 20000, 0, 2f, 1, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_104))
						{
							HUD::CLEAR_PRINTS();
							__LIB_6__.func_771();
							if (!bLocal_177)
							{
								__LIB_0__.func_325("FM2_WAIT2", 7500, 1);
								bLocal_177 = true;
							}
							iLocal_104 = __LIB_6__.func_850(iLocal_88, 0, 145);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							HUD::REMOVE_BLIP(&iLocal_102);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_104))
					{
						HUD::REMOVE_BLIP(&iLocal_104);
					}
					if (func_220(&iLocal_92, &uLocal_151, &iLocal_152))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_92, true), Local_119) < 50f)
						{
							bVar1 = true;
						}
					}
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_140, Local_141, fLocal_142, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_119 + Vector(0.3f, 0f, 0f), 1f, 1f, 2.5f, true, true, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						HUD::REMOVE_BLIP(&iLocal_102);
						bLocal_174 = true;
						iLocal_159++;
					}
				}
				if (!bVar1)
				{
					if (func_220(&iLocal_92, &uLocal_151, &iLocal_152) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
					{
						iLocal_159 = 100;
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_118) < 10000f)
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_88) < 2f)
							{
								iLocal_159 = 100;
							}
						}
					}
				}
				if (iLocal_159 < 100)
				{
					func_217(&iLocal_92, &iLocal_105, Local_119, &iLocal_102, &Local_545);
				}
				break;
			case 4:
				__LIB_6__.func_833();
				if (__LIB_6__.func_762(iLocal_92, 5f, 1, 1056964608, 0, 1, 0) || !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92))
				{
					__LIB_6__.func_833();
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					iLocal_159++;
				}
				break;
			case 5:
				if (!__LIB_0__.func_75())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 3f, 4);
					func_210(9);
				}
				break;
			case 100:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_118) < SYSTEM::POW(100f, 2f))
				{
					if (!PED::IS_PED_INJURED(iLocal_89))
					{
						HUD::CLEAR_HELP(true);
						Local_556 = { __LIB_0__.func_389() };
						__LIB_6__.func_771();
						iLocal_555 = 1;
						HUD::REMOVE_BLIP(&iLocal_102);
						sLocal_201 = "family_2_mcs_4p2";
						iLocal_178 = 0;
						iLocal_519 = 0;
						CUTSCENE::REMOVE_CUTSCENE();
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_4", 2, 8);
						SYSTEM::SETTIMERA(0);
						if (HUD::DOES_BLIP_EXIST(iLocal_105))
						{
							HUD::REMOVE_BLIP(&iLocal_105);
						}
						iLocal_102 = __LIB_6__.func_850(iLocal_89, 0, 145);
						__LIB_0__.func_210("FM2_ONFOOT", 7500, 1);
						if (!PED::IS_PED_GROUP_MEMBER(iLocal_88, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_88, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_88, 0);
						}
						bLocal_177 = false;
						iLocal_159++;
					}
				}
				else if (ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
				{
					func_105("FM2_SKIDED");
				}
				else
				{
					func_105("FM2_SKIGRN");
				}
				break;
			case 101:
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					if (func_160(iLocal_88))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							iLocal_102 = __LIB_6__.func_850(iLocal_89, 0, 145);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_104))
						{
							HUD::REMOVE_BLIP(&iLocal_104);
						}
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_89, true)) < 30f)
						{
							SYSTEM::SETTIMERA(0);
							iLocal_159++;
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							HUD::REMOVE_BLIP(&iLocal_102);
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_104))
						{
							if (!bLocal_177)
							{
								__LIB_0__.func_325("FM2_TRAGB", 7500, 1);
							}
							iLocal_104 = __LIB_6__.func_850(iLocal_88, 0, 145);
						}
					}
				}
				if (!bLocal_191 && !bLocal_193)
				{
					bVar0 = false;
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_88, false) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_88, true)) < 400f)
						{
							bVar0 = true;
						}
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_88, false) && PED::GET_VEHICLE_PED_IS_IN(iLocal_88, false) == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
					{
						bVar0 = true;
					}
				}
				break;
			case 102:
				if (SYSTEM::TIMERA() > 1000)
				{
					bLocal_174 = false;
					iLocal_159++;
				}
				break;
			case 103:
				__LIB_6__.func_833();
				if (!__LIB_0__.func_75())
				{
					func_210(9);
				}
				break;
		}
		if (iLocal_159 > 0)
		{
			func_207(9);
		}
		func_96(sLocal_201, Local_118, 100f, &iLocal_178);
		if (iLocal_178)
		{
			if (!iLocal_519)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Tracy", iLocal_88, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 1, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Tracy", 0, 0, 0, 0);
					iLocal_519 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (!__LIB_0__.func_75() && (MISC::GET_GAME_TIMER() - iLocal_169) > 7500)
			{
				__LIB_5__.func_759(iLocal_88, "GENERIC_SHOCKED_MED", "Tracey", 3);
				iLocal_169 = MISC::GET_GAME_TIMER();
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_89))
		{
			if (!iLocal_518)
			{
				if (!PED::IS_PED_INJURED(iLocal_88))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 5625f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_88, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 225f)
					{
						__LIB_6__.func_833();
						if (!__LIB_0__.func_75())
						{
							if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_SEES", 8, 0, 0, 0))
							{
								iLocal_518 = 1;
							}
						}
					}
				}
			}
		}
		switch (iLocal_170)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_118) < 90000f)
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_118, 5f))
					{
						MISC::CLEAR_AREA(Local_118, 4f, true, false, false, false);
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
						{
							func_204(&iLocal_89, 14, Local_118, fLocal_148);
						}
						iLocal_170 = 2;
					}
					else
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
						{
							func_204(&iLocal_89, 14, -1611.595f, -1121.0092f, 1.544f, 42.8275f);
						}
						iLocal_170++;
					}
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89, Local_118, 1f, -1, 0.25f, 512, fLocal_148);
					iLocal_170++;
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_89) && ENTITY::IS_ENTITY_AT_COORD(iLocal_89, Local_118, Global_22, false, true, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(200f, 2f))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_89, PLAYER::PLAYER_PED_ID(), 60f))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_89);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_520);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_520);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_89, iLocal_520);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_520);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							if (!PED::IS_PED_INJURED(iLocal_89))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							}
						}
					}
				}
				break;
		}
		if (iLocal_70 != 8)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			func_150();
		}
	}
}

void func_204(int iParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x22DF8
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (iParam1 == 15)
		{
			while (!func_97(Param2, fParam3))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_476(Param2, fParam3))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			TASK::CLEAR_PED_TASKS(*iParam0);
		}
	}
	else if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*iParam0, Param2, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(*iParam0, fParam3);
	}
}

int func_207(int iParam0)//Position - 0x23087
{
	int iVar0;
	int iVar1[10];
	int iVar2[3];
	int iVar3;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		iVar2[iVar0] = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			iVar1[0] = joaat("IG_JimmyDiSanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("cruiser");
			iVar1[3] = __LIB_28__.func_162(15, 1);
			break;
		case 2:
			iVar1[0] = joaat("IG_JimmyDiSanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("U_M_M_BikeHire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		case 3:
			iVar1[0] = joaat("IG_JimmyDiSanto");
			iVar1[1] = joaat("tailgater");
			iVar1[2] = joaat("U_M_M_BikeHire_01");
			iVar1[3] = joaat("cruiser");
			iVar2[0] = iLocal_158;
			iVar2[1] = 1;
			break;
		case 4:
			iVar1[0] = joaat("IG_JimmyDiSanto");
			iVar1[1] = joaat("cruiser");
			break;
		case 5:
			iVar1[0] = joaat("IG_JimmyDiSanto");
			iVar1[1] = joaat("cruiser");
			iVar1[2] = joaat("seashark");
			iVar1[3] = joaat("A_M_Y_MusclBeac_01");
			break;
		case 6:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("IG_TracyDiSanto");
			break;
		case 7:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("IG_TracyDiSanto");
			iVar1[2] = joaat("CSB_PornDudes");
			iVar1[3] = joaat("IG_JimmyDiSanto");
			break;
		case 8:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("IG_TracyDiSanto");
			iVar1[2] = joaat("IG_JimmyDiSanto");
			break;
		case 9:
			iVar1[0] = joaat("seashark");
			iVar1[1] = joaat("IG_TracyDiSanto");
			iVar1[2] = joaat("IG_JimmyDiSanto");
			break;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (iVar1[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1[iVar0]);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1[iVar0]))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (iVar2[iVar0] != 0)
		{
			VEHICLE::REQUEST_VEHICLE_RECORDING(iVar2[iVar0], "fam2");
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar2[iVar0], "fam2"))
			{
				iVar3 = 0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_210(int iParam0)//Position - 0x23729
{
	iLocal_172 = 0;
	iLocal_70 = iParam0;
}

void func_213()//Position - 0x238FD
{
	if ((!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && (MISC::GET_GAME_TIMER() - iLocal_167) > 5000)
	{
		if ((((((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && !PED::IS_PED_INJURED(iLocal_88)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false)) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false)) && ENTITY::IS_ENTITY_IN_WATER(iLocal_92)) && PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) != iLocal_92) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_88, true)) < 35f) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) && Local_545.f_1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_186) > 6000)
			{
				if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_GETOFF", 8, 0, 0, 0))
				{
					iLocal_186 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_214(char* sParam0, bool bParam1)//Position - 0x239E8
{
	if (bParam1)
	{
		if (!iLocal_554)
		{
			if (__LIB_35__.func_536(&Local_549, cLocal_548, sParam0, 8, 0, 0, 0))
			{
				iLocal_555 = 0;
				iLocal_554 = 1;
			}
		}
		if (iLocal_555)
		{
			if (__LIB_36__.func_42(&Local_549, cLocal_548, sParam0, &Local_556, 8, 0, 0))
			{
				iLocal_555 = 0;
			}
		}
	}
	if (!bParam1)
	{
		if (!iLocal_555)
		{
			Local_556 = { __LIB_0__.func_389() };
			__LIB_6__.func_833();
			iLocal_555 = 1;
		}
	}
}

void func_217(int iParam0, int* iParam1, struct<3> Param2, int* iParam3, var uParam4)//Position - 0x23ACE
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false) && ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, false))
		{
			if (!HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::CLEAR_PRINTS();
				if (!uParam4->f_1)
				{
					iLocal_167 = MISC::GET_GAME_TIMER();
					__LIB_35__.func_210(uParam4);
				}
				*iParam1 = __LIB_6__.func_825(*iParam0, 0, 0);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam3))
			{
				HUD::REMOVE_BLIP(iParam3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(*iParam3))
			{
				*iParam3 = __LIB_0__.func_392(Param2, 1);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(iParam1);
			}
		}
	}
}

int func_220(int iParam0, var uParam1, var uParam2)//Position - 0x23BAA
{
	*uParam2 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(*iParam0) && ENTITY::GET_ENTITY_SPEED(*iParam0) < 2f)
		{
			*uParam1 = (*uParam1 + MISC::GET_FRAME_TIME());
			return *uParam1 > 3f;
		}
		else
		{
			*uParam1 = 0f;
		}
	}
	return 0;
}

void func_221()//Position - 0x23BF6
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < Local_572.f_0)
	{
		switch (Local_572[iVar0 /*8*/].f_2)
		{
			case 0:
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_572[iVar0 /*8*/].f_4) < 2500f)
				{
					Var1 = { func_223(iVar0) };
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_572[iVar0 /*8*/].f_4, Var1.f_3, false, true, 0))
					{
						if (func_222(iVar0, joaat("squalo"), Var1))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 3);
							Local_572[iVar0 /*8*/].f_2++;
						}
					}
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(Local_572[iVar0 /*8*/].f_1) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_572[iVar0 /*8*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_572[iVar0 /*8*/]) && !VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Local_572[iVar0 /*8*/]))
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_572[iVar0 /*8*/], 5f, 5f, 5f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[0], false) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_99[0], Local_572[iVar0 /*8*/], 5f, 5f, 5f, false, true, 0))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[1], false) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_99[1], Local_572[iVar0 /*8*/], 5f, 5f, 5f, false, true, 0)))
						{
							VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Local_572[iVar0 /*8*/], 5000, 786469, true);
						}
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_572[iVar0 /*8*/]) && ENTITY::DOES_ENTITY_EXIST(Local_572[iVar0 /*8*/].f_1)) && (((!PED::IS_PED_INJURED(Local_572[iVar0 /*8*/].f_1) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_572[iVar0 /*8*/])) || PED::IS_PED_INJURED(Local_572[iVar0 /*8*/].f_1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_572[iVar0 /*8*/], false)))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_572[iVar0 /*8*/].f_1, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_572[iVar0 /*8*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_572[iVar0 /*8*/].f_1));
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_572[iVar0 /*8*/]));
					}
				}
				break;
		}
		iVar0++;
	}
}

int func_222(int iParam0, int iParam1, struct<3> Param2)//Position - 0x23E3A
{
	STREAMING::REQUEST_MODEL(iParam1);
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_GenStreet_01"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0 + 1, "fam2amb");
	if ((STREAMING::HAS_MODEL_LOADED(iParam1) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_GenStreet_01"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0 + 1, "fam2amb"))
	{
		Local_572[iParam0 /*8*/] = VEHICLE::CREATE_VEHICLE(iParam1, Param2, 0f, true, true, false);
		Local_572[iParam0 /*8*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_572[iParam0 /*8*/], 26, joaat("A_M_Y_GenStreet_01"), -1, true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_572[iParam0 /*8*/].f_1, true);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_572[iParam0 /*8*/], iParam0 + 1, "fam2amb", true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_572[iParam0 /*8*/], 2);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_GenStreet_01"));
		return 1;
	}
	return 0;
}

struct<10> func_223(int iParam0)//Position - 0x23EFA
{
	struct<10> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { -935.5378f, -1633.7369f, 0.3306f };
			Var0.f_3 = { 62.75f, 48.75f, 11f };
			Var0.f_6 = { -997.8688f, -1383.0035f, 0.406f };
			Var0.f_9 = 314.1291f;
			break;
		case 1:
			Var0 = { -928.3334f, -1359.1943f, 0.3531f };
			Var0.f_3 = { 28.25f, 34.75f, 11f };
			Var0.f_6 = { -723.3589f, -1350.0933f, 0.3208f };
			Var0.f_9 = 294.1011f;
			break;
	}
	return Var0;
}

void func_224()//Position - 0x23FAC
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
	{
		if ((!iLocal_895 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false)) && SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(iLocal_92)) > 324f)
		{
			iLocal_895 = 1;
		}
		if ((iLocal_895 && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(iLocal_92)) < 225f)
		{
			iLocal_895 = 0;
		}
		if (!iLocal_896)
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92))
			{
				iLocal_896 = 1;
			}
		}
		else
		{
			iLocal_896 = 0;
		}
		if ((iLocal_896 && iLocal_895) && PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	bLocal_73 = func_259();
	if (bLocal_73 < 7 && bLocal_73 > iLocal_75)
	{
		iLocal_75 = bLocal_73;
	}
	if (bLocal_73 != bLocal_74)
	{
		if (!BitTest(iLocal_76, bLocal_73))
		{
			MISC::SET_BIT(&iLocal_76, bLocal_73);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[0]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[0]);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[1]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[1]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[1]);
			}
		}
	}
	if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_92) && SYSTEM::TIMERA() > 500)
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
	}
	bLocal_74 = bLocal_73;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_107))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_107 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), Local_118, true, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_107, false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_107, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_107, true);
		}
	}
	switch (iLocal_159)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			if ((((func_258() && func_257(0, 0)) && func_257(1, 0)) && func_256()) && func_255())
			{
				if (!PED::IS_PED_INJURED(iLocal_91[0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_91[0], PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_91[0], iLocal_79);
				}
				if (!PED::IS_PED_INJURED(iLocal_88))
				{
					STREAMING::REQUEST_ANIM_DICT("missfam2_tracy_jetski");
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_92, 1000f);
					ENTITY::SET_ENTITY_PROOFS(iLocal_92, true, false, false, true, false, false, false, false);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_88, false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_88, 5000, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_88, 20, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_88, 2, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_88, true);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_88, true);
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_79, joaat("PLAYER"));
				__LIB_0__.func_202(&Local_549, 2);
				__LIB_0__.func_203(&Local_549, 2, iLocal_88, "TRACEY", 0, 1);
				__LIB_10__.func_889(1);
				func_252();
				func_251();
				iLocal_190 = 0;
				fLocal_887 = 0f;
				fLocal_891 = 0f;
				iLocal_876 = 0;
				bLocal_877 = false;
				iLocal_875[0] = 0;
				iLocal_875[1] = 0;
				bLocal_191 = false;
				iLocal_192 = 0;
				iLocal_194 = 0;
				iLocal_195 = 0;
				bLocal_193 = false;
				iLocal_878 = 0;
				bLocal_894 = false;
				iLocal_77 = 0;
				iLocal_78 = 6;
				iLocal_75 = 0;
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_ON_JETSKI");
				ENTITY::SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(iLocal_99[0], true);
				ENTITY::SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(iLocal_99[1], true);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_99[0], 101, "famtwo", 15f, 262144);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_99[1], 102, "famtwo", 15f, 262144);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_92, 1, "famtwoplayer", 24f, 262144);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_99[0], "FAMILY_2_ENEMY_JETSKI_Group", 0f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_99[1], "FAMILY_2_ENEMY_JETSKI_Group", 0f);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_92) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					AUDIO::SET_INITIAL_PLAYER_STATION("OFF");
					AUDIO::SET_VEH_RADIO_STATION(iLocal_92, "OFF");
					ENTITY::SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(iLocal_92, true);
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_CHASE"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_2_JETSKI_CHASE");
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, true, true, false);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				SYSTEM::SETTIMERB(0);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 4);
				func_250(0, 4f);
				iLocal_76 = 0;
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		case -1:
			STREAMING::REQUEST_IPL("smboat");
			while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_112))
			{
				if (SYSTEM::TIMERB() > 1000)
				{
					CAM::DESTROY_CAM(iLocal_112, false);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_549[7 /*10*/]) || PED::IS_PED_INJURED(Local_549[7 /*10*/]))
			{
				if (!PED::IS_PED_INJURED(iLocal_100[0]))
				{
					__LIB_0__.func_203(&Local_549, 7, iLocal_100[0], "FAM2MAN2", 0, 1);
				}
				else if (!PED::IS_PED_INJURED(iLocal_100[1]))
				{
					__LIB_0__.func_203(&Local_549, 7, iLocal_100[1], "FAM2MAN2", 0, 1);
				}
			}
			if (!iLocal_888)
			{
				if (bLocal_890)
				{
					iVar0 = 0;
					while (iVar0 <= 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_100[iVar0]))
						{
							PED::SET_PED_COMBAT_ABILITY(iLocal_100[iVar0], 0);
							PED::SET_PED_COMBAT_RANGE(iLocal_100[iVar0], 2);
							PED::SET_PED_ACCURACY(iLocal_100[iVar0], 0);
							PED::SET_PED_FIRING_PATTERN(iLocal_100[iVar0], joaat("FIRING_PATTERN_DELAY_FIRE_BY_ONE_SEC"));
							PED::SET_PED_SHOOT_RATE(iLocal_100[iVar0], 50);
						}
						iVar0++;
					}
					bLocal_890 = false;
				}
				if ((((((bLocal_73 == 7 && iLocal_190 < 100) || iLocal_874[0]) || iLocal_874[1]) || bLocal_73 < iLocal_75) || iLocal_889) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false)))
				{
					if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_562[0] = MISC::GET_GAME_TIMER();
						iLocal_562[1] = (MISC::GET_GAME_TIMER() - 1500);
						iLocal_888 = 1;
					}
				}
			}
			else
			{
				if (fLocal_891 > 10f && fLocal_891 < 12f)
				{
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					if ((!PED::IS_PED_INJURED(iLocal_100[0]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_100[0], true), ENTITY::GET_ENTITY_COORDS(iLocal_92, true)) < 225f) || (!PED::IS_PED_INJURED(iLocal_100[1]) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_100[1], true), ENTITY::GET_ENTITY_COORDS(iLocal_92, true)) < 225f))
					{
						fLocal_891 = (fLocal_891 + MISC::GET_FRAME_TIME());
					}
				}
				if (!bLocal_890)
				{
					iVar1 = 0;
					while (iVar1 <= 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_100[iVar1]) && !PED::IS_PED_INJURED(iLocal_100[iVar1]))
						{
							PED::SET_PED_COMBAT_ABILITY(iLocal_100[iVar1], 1);
							PED::SET_PED_COMBAT_RANGE(iLocal_100[iVar1], 2);
							PED::SET_PED_ACCURACY(iLocal_100[iVar1], 20);
							PED::SET_PED_FIRING_PATTERN(iLocal_100[iVar1], joaat("FIRING_PATTERN_SINGLE_SHOT"));
							PED::SET_PED_SHOOT_RATE(iLocal_100[iVar1], 40);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[iVar1]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[iVar1]))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[iVar1]);
								}
							}
						}
						iVar1++;
					}
					bLocal_890 = true;
				}
				else if ((bLocal_73 != 2 || (bLocal_73 == 2 && iLocal_77 == 0)) && !iLocal_876)
				{
					func_248();
				}
				if (((((!iLocal_874[0] && !iLocal_874[1]) && bLocal_73 != 7) && bLocal_73 >= iLocal_75) && !iLocal_889) && (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false)))
				{
					iLocal_888 = 0;
				}
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_888 = 0;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_91[0]))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_91[0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_91[0]));
				}
			}
			func_245();
			func_232();
			if (iLocal_190 < 100)
			{
				if (!iLocal_194)
				{
					if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						iLocal_194 = 1;
					}
				}
				else if (!iLocal_195)
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_SHOOT", 8, 0, 0, 0))
					{
						iLocal_195 = 1;
					}
				}
				if (!bLocal_191 || !bLocal_193)
				{
					bLocal_193 = true;
					iVar2 = 0;
					while (iVar2 < iLocal_100)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_100[iVar2]))
						{
							if (PED::IS_PED_INJURED(iLocal_100[iVar2]) || ENTITY::IS_ENTITY_DEAD(iLocal_100[iVar2], false))
							{
								bLocal_191 = true;
							}
							else
							{
								bLocal_193 = false;
							}
						}
						iVar2++;
					}
				}
				if ((bLocal_191 && !iLocal_192) && !bLocal_193)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
					{
						__LIB_6__.func_771();
						if (iLocal_190 < 50 || iLocal_190 >= 100)
						{
							iLocal_163 = iLocal_190;
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_105))
						{
							HUD::REMOVE_BLIP(&iLocal_105);
						}
						iLocal_190 = 50;
						iLocal_192 = 1;
					}
				}
				if (bLocal_73 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						HUD::REMOVE_BLIP(&iLocal_102);
						if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !__LIB_0__.func_75())
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				if (iLocal_190 < 5)
				{
					if (bLocal_73 == 1)
					{
						iLocal_190 = 5;
					}
				}
				func_230();
			}
			if (iLocal_190 != 60 && iLocal_190 != 61)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
				{
					if (iLocal_190 < 50 || iLocal_190 >= 100)
					{
						iLocal_163 = iLocal_190;
					}
					iLocal_190 = 60;
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_102) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
			{
				if (bLocal_73 == 1)
				{
					HUD::REMOVE_BLIP(&iLocal_102);
				}
			}
			switch (iLocal_190)
			{
				case 0:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam2_tracy_jetski"))
					{
						if (!PED::IS_PED_INJURED(iLocal_88))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 3))
							{
								if (func_229(0))
								{
									TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a", 8f, -8f, -1, 0, 0f, false, false, false);
								}
								else if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_COMING");
									TASK::TASK_LOOK_AT_ENTITY(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_a") > 0.12f)
							{
								if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_COMING", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_COMING");
									iLocal_190++;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
					break;
				case 1:
					if (SYSTEM::TIMERA() > 1000)
					{
						Var3 = { Local_210 - ENTITY::GET_ENTITY_COORDS(iLocal_92, true) };
						Var4 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_92) };
						fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var4.f_0, Var4.f_1, Var3.f_0, Var3.f_1);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
						if (fVar5 < -180f)
						{
							fVar5 = (fVar5 + 360f);
						}
						if (fVar5 < 0f)
						{
							if (fVar5 > -90f)
							{
								if (!PED::IS_PED_INJURED(iLocal_88))
								{
									TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_point_right", 4f, -8f, -1, 0, 0f, false, false, false);
								}
							}
						}
						else if (fVar5 < 90f)
						{
							if (!PED::IS_PED_INJURED(iLocal_88))
							{
								TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_point_left", 4f, -8f, -1, 0, 0f, false, false, false);
							}
						}
					}
					if ((((!__LIB_0__.func_75() || SYSTEM::TIMERA() > 3000) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false)) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false)) && !HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						iLocal_102 = __LIB_0__.func_392(Local_210, 0);
						iLocal_190++;
					}
					break;
				case 2:
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_MRESP", 8, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_210, 7500, 1, 2);
						SYSTEM::SETTIMERA(0);
						iLocal_190++;
					}
					break;
				case 3:
					if (!__LIB_0__.func_75())
					{
						__LIB_0__.func_325("FM2_CHASE1", 7500, 1);
						SYSTEM::SETTIMERA(0);
						iLocal_190++;
					}
					break;
				case 4:
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_210) > 900f)
					{
						func_228("FAM2_OLREM", "", 9000);
					}
					break;
				case 5:
					if (((ENTITY::DOES_ENTITY_EXIST(iLocal_100[0]) && !PED::IS_PED_INJURED(iLocal_100[0])) && PED::IS_PED_SHOOTING(iLocal_100[0])) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_100[1]) && !PED::IS_PED_INJURED(iLocal_100[1])) && PED::IS_PED_SHOOTING(iLocal_100[1])))
					{
						iLocal_190++;
					}
					break;
				case 6:
					if (!__LIB_0__.func_75())
					{
						if (!PED::IS_PED_INJURED(iLocal_88))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 3))
							{
								if (func_229(0))
								{
									TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c", 8f, -8f, -1, 0, 0f, false, false, false);
								}
								else if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_SHOOTING");
									TASK::TASK_LOOK_AT_ENTITY(iLocal_88, iLocal_100[0], -1, 0, 2);
									iLocal_190++;
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_c") > 0.12f)
							{
								if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_HESHOOT", 8, 0, 0, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FAM2_SHOOTING");
									iLocal_190++;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
					break;
				case 7:
					if (!__LIB_0__.func_75())
					{
						__LIB_0__.func_325("FM2_CHASE3", 7500, 1);
						SYSTEM::SETTIMERB(0);
						iLocal_190++;
					}
					break;
				case 8:
					if (SYSTEM::TIMERB() > 5000)
					{
						if (!__LIB_0__.func_75())
						{
							if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_LOSEM", 8, 0, 0, 0))
							{
								iLocal_190++;
							}
						}
					}
					break;
				case 9:
					if (!__LIB_0__.func_75())
					{
						if (__LIB_39__.func_915(&Local_549, cLocal_202, "FAM2_WHO", "FAM2_WHO_3", "FAM2_WHO", "FAM2_WHO_5", "FAM2_WHO", "FAM2_WHO_7", "FAM2_WHO", "FAM2_WHO_9", 8, 0, 0))
						{
							iLocal_190++;
						}
					}
					break;
				case 10:
					func_228("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					if (bLocal_73 == 2)
					{
						iLocal_190++;
					}
					break;
				case 11:
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_LOSET", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				case 12:
					func_228("FAM2_TSHOUT", "FAM2_MSHOUT", 8000);
					break;
				case 50:
					__LIB_6__.func_833();
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_KILLONE", 8, 0, 0, 0))
					{
						iLocal_190++;
					}
					break;
				case 51:
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_KILLER", 8, 0, 0, 0))
					{
						iLocal_190 = iLocal_163;
					}
					break;
				case 60:
					__LIB_6__.func_771();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_105))
						{
							iLocal_105 = __LIB_6__.func_825(iLocal_92, 0, 0);
							__LIB_35__.func_210(&Local_545);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							HUD::REMOVE_BLIP(&iLocal_102);
						}
						iLocal_881 = MISC::GET_GAME_TIMER();
						iLocal_190++;
					}
					break;
				case 61:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if ((((!PED::IS_PED_INJURED(iLocal_88) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_88, 20f, 20f, 20f, false, true, 0)) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, true))
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_881) > 6000)
								{
									if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_FALL", 8, 0, 0, 0))
									{
										iLocal_881 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
						{
							__LIB_6__.func_771();
							if (((bLocal_73 == 0 || bLocal_73 == 7) && !HUD::DOES_BLIP_EXIST(iLocal_102)) && iLocal_163 < 5)
							{
								iLocal_102 = __LIB_0__.func_392(Local_210, 0);
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_105))
							{
								HUD::REMOVE_BLIP(&iLocal_105);
							}
							HUD::CLEAR_PRINTS();
							iLocal_190 = iLocal_163;
						}
					}
					break;
				case 100:
					if (HUD::DOES_BLIP_EXIST(iLocal_101[0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_101[0]));
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_101[1]))
					{
						HUD::REMOVE_BLIP(&(iLocal_101[1]));
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						HUD::REMOVE_BLIP(&iLocal_102);
					}
					__LIB_6__.func_833();
					if (!__LIB_0__.func_75())
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
						{
							if (!PED::IS_PED_INJURED(iLocal_88))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 3))
								{
									TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d", 8f, -8f, -1, 0, 0f, false, false, false);
								}
								else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_d") > 0.25f)
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_CHASE"))
									{
										AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_CHASE");
									}
									TASK::TASK_CLEAR_LOOK_AT(iLocal_88);
									iLocal_190++;
								}
							}
						}
					}
					break;
				case 101:
					if (bLocal_193)
					{
						sVar6 = "FAM2_KILLTWO";
					}
					else if (bLocal_191)
					{
						sVar6 = "FAM2_ESCAPE";
					}
					else
					{
						sVar6 = "FAM2_LOST";
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
					{
						bLocal_894 = true;
					}
					func_214(sVar6, bLocal_894);
					if ((iLocal_554 && !__LIB_0__.func_75()) && !iLocal_555)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 3);
						iLocal_554 = 0;
						iLocal_190++;
					}
					break;
				case 102:
					if (bLocal_193 || bLocal_191)
					{
						sVar7 = "FAM2_KILLER2";
					}
					else
					{
						sVar7 = "FAM2_TALK1";
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false) && PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
					{
						bLocal_894 = true;
					}
					func_214(sVar7, bLocal_894);
					if ((iLocal_554 && !__LIB_0__.func_75()) && !iLocal_555)
					{
						STREAMING::REMOVE_ANIM_DICT("missfam2_tracy_jetski");
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
						iLocal_554 = 0;
						func_210(8);
					}
					break;
			}
			if ((((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_88, true)) > 30f)
			{
				iLocal_159 = 2;
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
			{
				iLocal_159 = 3;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) || func_220(&iLocal_92, &uLocal_151, &iLocal_152))
			{
				iLocal_159 = 4;
			}
			if ((((iLocal_190 < 100 && ((PED::IS_PED_INJURED(iLocal_100[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_100[0], false)) || iLocal_875[0])) && ((PED::IS_PED_INJURED(iLocal_100[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_100[1], false)) || iLocal_875[1])) && iLocal_190 != 60) && iLocal_190 != 61)
			{
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_LOST_HIM");
				iLocal_190 = 100;
			}
			if (iLocal_159 > 1)
			{
				HUD::CLEAR_PRINTS();
				__LIB_6__.func_833();
				iVar8 = 0;
				while (iVar8 < iLocal_100)
				{
					if (((!PED::IS_PED_INJURED(iLocal_100[iVar8]) && ENTITY::DOES_ENTITY_EXIST(iLocal_99[iVar8])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iVar8], false)) && PED::IS_PED_IN_VEHICLE(iLocal_100[iVar8], iLocal_99[iVar8], false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_100[iVar8]);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[iVar8]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[iVar8]);
						}
					}
					iVar8++;
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_102))
				{
					HUD::REMOVE_BLIP(&iLocal_102);
				}
				SYSTEM::SETTIMERA(0);
			}
			break;
		case 2:
			if (SYSTEM::TIMERA() > 2000)
			{
				func_105("FM2_TRAAB");
			}
			break;
		case 3:
			if (SYSTEM::TIMERA() > 2000)
			{
				func_105("FM2_TRAFELL");
			}
			break;
		case 4:
			if (SYSTEM::TIMERA() > 1000)
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
				if (ENTITY::IS_ENTITY_DEAD(iLocal_92, false))
				{
					func_105("FM2_SKIDED");
				}
				else
				{
					func_105("FM2_SKIGRN");
				}
			}
			break;
	}
}

void func_228(char* sParam0, char* sParam1, int iParam2)//Position - 0x257E7
{
	int iVar0;
	int iVar1;
	if (iLocal_892 > iLocal_881)
	{
		iParam2 = 3000;
	}
	if (((MISC::GET_GAME_TIMER() - iLocal_881) > iParam2 && !__LIB_0__.func_75()) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
		if (((!PED::IS_PED_INJURED(iLocal_100[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[0], false)) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_99[0], iLocal_92, 20f, 20f, 5f, false, true, 0)) && iLocal_892 < iLocal_881)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
		}
		if (iVar0 == 1 && bLocal_191)
		{
			iVar0 = 2;
		}
		if (iVar0 == 1 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (__LIB_35__.func_536(&Local_549, cLocal_202, sParam1, 8, 0, 0, 0))
			{
				iLocal_881 = MISC::GET_GAME_TIMER();
			}
		}
		else if (iVar0 == 2)
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, "FAM2_TSHOUT"))
			{
				if (func_229(0))
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					switch (iVar1)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_e", 4f, -4f, -1, 0, 0f, false, false, false);
							break;
						case 1:
							TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_f", 4f, -4f, -1, 0, 0f, false, false, false);
							break;
						case 2:
							TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_g", 4f, -4f, -1, 0, 0f, false, false, false);
							break;
						case 3:
							TASK::TASK_PLAY_ANIM(iLocal_88, "missfam2_tracy_jetski", "tracy_jetski_h", 4f, -4f, -1, 0, 0f, false, false, false);
							break;
						}
					}
			}
			if (bLocal_191)
			{
				if (!MISC::ARE_STRINGS_EQUAL(sParam0, "FAM2_ONE"))
				{
					sParam0 = "FAM2_ONE";
				}
			}
			if (__LIB_35__.func_536(&Local_549, cLocal_202, sParam0, 8, 0, 0, 0))
			{
				iLocal_881 = MISC::GET_GAME_TIMER();
			}
		}
		else if (iVar0 >= 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_549[7 /*10*/]) && !PED::IS_PED_INJURED(Local_549[7 /*10*/]))
			{
				if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_BGUY2", 8, 0, 0, 0))
				{
					iLocal_892 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

int func_229(int iParam0)//Position - 0x259F4
{
	struct<3> Var0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(iLocal_100[iParam0]) && !PED::IS_PED_INJURED(iLocal_88))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_100[iParam0], true) - ENTITY::GET_ENTITY_COORDS(iLocal_88, true) };
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_88) };
		if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1)) >= 60f)
		{
			return 1;
		}
	}
	return 0;
}

void func_230()//Position - 0x25A59
{
	int iVar0;
	float fVar1;
	float fVar2;
	if (bLocal_877)
	{
		if (iLocal_876)
		{
			fVar1 = 3f;
			fVar2 = 50f;
		}
		else if (bLocal_73 == 7)
		{
			fVar1 = 5f;
			fVar2 = 250f;
		}
		else
		{
			fVar1 = 5f;
			fVar2 = 100f;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (func_231(iVar0, fVar2, fVar1))
			{
				iLocal_875[iVar0] = 1;
				PED::DELETE_PED(&(iLocal_100[iVar0]));
				VEHICLE::DELETE_VEHICLE(&(iLocal_99[iVar0]));
				if (HUD::DOES_BLIP_EXIST(iLocal_101[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_101[iVar0]));
				}
			}
			iVar0++;
		}
	}
	else if (iLocal_876)
	{
		iLocal_876 = 0;
	}
	if (!iLocal_875[0] || !iLocal_875[1])
	{
		iVar0 = 0;
		while (iVar0 < iLocal_100)
		{
			if (!iLocal_875[iVar0])
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_100[iVar0]) && (PED::IS_PED_INJURED(iLocal_100[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_100[iVar0], false))) || !ENTITY::DOES_ENTITY_EXIST(iLocal_100[iVar0]))
				{
					iLocal_875[iVar0] = 1;
				}
			}
			iVar0++;
		}
	}
}

int func_231(int iParam0, float fParam1, float fParam2)//Position - 0x25B72
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iLocal_100[iParam0]))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_100[iParam0], true));
			if ((fVar0 > (fParam1 * fParam1) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_100[iParam0])) || fVar0 > 90000f)
			{
				if (fVar0 > 90000f)
				{
					fLocal_893[iParam0] = (fLocal_893[iParam0] + (MISC::GET_FRAME_TIME() * 10f));
				}
				fLocal_893[iParam0] = (fLocal_893[iParam0] + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_893[iParam0] > 0f)
			{
				fLocal_893[iParam0] = (fLocal_893[iParam0] - (MISC::GET_FRAME_TIME() * 3f));
			}
			else
			{
				fLocal_893[iParam0] = 0f;
			}
		}
		if (fLocal_893[iParam0] > fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_232()//Position - 0x25C50
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_100[iVar0]))
		{
			if ((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_100[iVar0], false) && ENTITY::IS_ENTITY_IN_WATER(iLocal_100[iVar0])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_100[iVar0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 100f)
			{
				PED::EXPLODE_PED_HEAD(iLocal_100[iVar0], joaat("WEAPON_SNIPERRIFLE"));
			}
		}
		iVar0++;
	}
	switch (bLocal_73)
	{
		case 0:
			if (SYSTEM::TIMERB() > 5000)
			{
				func_243(0, &uLocal_640, 101, "famtwo", 1, 0);
				func_243(1, &uLocal_653, 102, "famtwo", 1, 0);
			}
			if (SYSTEM::TIMERB() < 2000)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 27 /*INPUT_PHONE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
			}
			if (fLocal_887 < 1f)
			{
				fLocal_887 = (fLocal_887 + 0.01f);
			}
			else
			{
				fLocal_887 = 1f;
			}
			break;
		case 1:
			func_243(0, &uLocal_666, 201, "famtwo", 0, 0);
			func_243(1, &uLocal_712, 202, "famtwo", 0, 0);
			break;
		case 2:
			iLocal_77 = func_242();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_240(&(Local_808[0 /*25*/]), 1, func_241(iLocal_77));
					func_240(&(Local_808[1 /*25*/]), 2, func_241(iLocal_77));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[0]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[0]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[1]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_237(0);
			if (!iLocal_889)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_99[0], false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_99[0], true)) < 100f && ENTITY::GET_ENTITY_SPEED(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_99[1], false))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_99[1], true)) < 100f && ENTITY::GET_ENTITY_SPEED(iLocal_92) < 7f)
					{
						iLocal_889 = 1;
					}
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			if (iLocal_77 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_99[1], false))
				{
					if (func_235(ENTITY::GET_ENTITY_COORDS(iLocal_99[1], true), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_235(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[1] = 1;
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_99[0], false))
				{
					if (func_235(ENTITY::GET_ENTITY_COORDS(iLocal_99[0], true), 1, "famtwoCanalsAlt", &uLocal_809, 0) > func_235(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, "famtwoCanalsAlt", &uLocal_809, 0))
					{
						iLocal_874[0] = 1;
					}
				}
				func_243(1, &uLocal_809, 1, "famtwoCanalsAlt", 0, 0);
			}
			else if (!PED::IS_PED_INJURED(iLocal_100[1]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1061.2473f, -1027.5204f, -1.839872f, -1158.5621f, -864.5836f, 17.985117f, 250f, false, true, 0))
				{
					Var1 = { -1191.4796f, -1002.4274f, 0f };
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1061.2473f, -1027.5204f, -1.839872f, -1006.9393f, -1120.256f, 6.144058f, 250f, false, true, 0))
				{
					Var1 = { -1137.6525f, -1097.1637f, 0f };
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -900.0117f, -1305.718f, 15.900065f, -1006.9393f, -1120.256f, -8.855943f, 250f, false, true, 0))
				{
					Var1 = { -1083.9927f, -1189.7032f, 0f };
				}
				if (!__LIB_0__.func_86(Var1))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_99[1], Var1, 2.5f, 2.5f, 2f, false, true, 0))
					{
						Var2 = { Vector(-1.599754f, -1082.671f, -1114.9523f) + Vector(17.75f, 133.25f, 81.25f) };
						Var3 = { Vector(-1.599754f, -1082.671f, -1114.9523f) - Vector(17.75f, 133.25f, 81.25f) };
						if (PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(Var3.f_0, Var3.f_1, Var2.f_0, Var2.f_1))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_100[1], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) != 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_100[1], iLocal_99[1], Var1, 10f, 0, joaat("seashark"), 262144, 1f, 3f);
							}
						}
						if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_99[1], true), 2f) && !CAM::IS_SPHERE_VISIBLE(Var1, 2f))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_99[1], Var1, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_99[1], 214f);
						}
					}
				}
			}
			break;
		case 3:
			if ((((!PED::IS_PED_INJURED(iLocal_100[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_100[1], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[1], false)) && PED::IS_PED_IN_VEHICLE(iLocal_100[1], iLocal_99[1], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_100[1], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_100[1], joaat("SCRIPT_TASK_VEHICLE_CHASE")) != 2)
					{
						TASK::TASK_VEHICLE_CHASE(iLocal_100[1], PLAYER::PLAYER_PED_ID());
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_100[1], PLAYER::PLAYER_PED_ID(), 10f, 10f, 5f, false, true, 0))
				{
					iLocal_878 = 1;
				}
			}
			break;
		case 4:
			iLocal_77 = func_242();
			if (iLocal_77 != 6)
			{
				if (iLocal_77 != iLocal_78)
				{
					func_240(&(Local_808[0 /*25*/]), 1, func_241(iLocal_77));
					func_240(&(Local_808[1 /*25*/]), 2, func_241(iLocal_77));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[1]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[1]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[1]);
						}
					}
				}
				iLocal_78 = iLocal_77;
			}
			func_237(1);
			if (!iLocal_889)
			{
				if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_99[0], true)) < 100f || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_99[1], true)) < 100f) && ENTITY::GET_ENTITY_SPEED(iLocal_92) < 7f)
				{
					iLocal_889 = 1;
				}
			}
			else if (ENTITY::GET_ENTITY_SPEED(iLocal_92) > 10f)
			{
				iLocal_889 = 0;
			}
			break;
		case 5:
			func_243(0, &uLocal_758, 301, "famtwo", 0, 0);
			func_243(1, &uLocal_783, 302, "famtwo", 0, 0);
			break;
		case 6:
			if (!iLocal_876)
			{
				func_243(0, &uLocal_834, 401, "famtwo", 1, 0);
				func_243(1, &uLocal_853, 402, "famtwo", 1, 0);
				if (!bLocal_890)
				{
					if (fLocal_887 > 0.1f)
					{
						fLocal_887 = (fLocal_887 - 0.01f);
					}
					else
					{
						fLocal_887 = 0.1f;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_143, Local_144, fLocal_145, false, true, 0))
				{
					iVar4 = 0;
					while (iVar4 < iLocal_100)
					{
						if (!PED::IS_PED_INJURED(iLocal_100[iVar4]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_100[iVar4]);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_100[iVar4], iLocal_99[iVar4], -901.3011f, -1359.937f, 0f, 14, 20f, 262144, 3f, 3f, true);
						}
						iVar4++;
					}
					iLocal_876 = 1;
				}
			}
			break;
	}
	func_233(0);
	func_233(1);
	if ((bLocal_73 == 6 || bLocal_73 == 7) || iLocal_876)
	{
		if (!bLocal_877)
		{
			bLocal_877 = true;
		}
	}
	else if (bLocal_877)
	{
		bLocal_877 = false;
	}
}

void func_233(int iParam0)//Position - 0x263EC
{
	struct<3> Var0;
	struct<3> Var1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_101[iParam0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_100[iParam0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iParam0], false) && PED::IS_PED_IN_VEHICLE(iLocal_100[iParam0], iLocal_99[iParam0], false))
				{
					iLocal_101[iParam0] = __LIB_0__.func_392(ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true), 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_101[iParam0], "FM2_PURSUER");
					HUD::SET_BLIP_COLOUR(iLocal_101[iParam0], 1);
					HUD::SET_BLIP_PRIORITY(iLocal_101[iParam0], 9);
					iLocal_880[iParam0] = 1;
				}
				else
				{
					iLocal_101[iParam0] = __LIB_6__.func_850(iLocal_100[iParam0], 1, 145);
					iLocal_880[iParam0] = 0;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_100[iParam0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iParam0], false) && PED::IS_PED_IN_VEHICLE(iLocal_100[iParam0], iLocal_99[iParam0], false))
			{
				if (iLocal_880[iParam0])
				{
					Var0 = { HUD::GET_BLIP_COORDS(iLocal_101[iParam0]) };
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true) };
					Var0.f_0 = (Var0.f_0 + ((Var1.f_0 - Var0.f_0) / 25f));
					Var0.f_1 = (Var0.f_1 + ((Var1.f_1 - Var0.f_1) / 25f));
					Var0.f_2 = (Var0.f_2 + ((Var1.f_2 - Var0.f_2) / 25f));
					HUD::SET_BLIP_COORDS(iLocal_101[iParam0], Var0);
				}
				else
				{
					HUD::REMOVE_BLIP(&(iLocal_101[iParam0]));
				}
			}
			else if (iLocal_880[iParam0])
			{
				HUD::REMOVE_BLIP(&(iLocal_101[iParam0]));
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_101[iParam0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_101[iParam0]));
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_101[iParam0]))
	{
		HUD::REMOVE_BLIP(&(iLocal_101[iParam0]));
	}
}

float func_235(struct<3> Param0, int iParam1, char* sParam2, var uParam3, bool bParam4)//Position - 0x265DB
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = func_236(Param0, uParam3);
	fVar1 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
	fVar2 = (MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(Param0, *(uParam3[iVar0 /*3*/]), *(uParam3[iVar0 + 1 /*3*/]), true) * fVar1);
	if (bParam4)
	{
	}
	return ((fVar2 + (IntToFloat(iVar0) * fVar1)) - 0.1f);
}

int func_236(struct<3> Param0, var uParam1)//Position - 0x26634
{
	int iVar0;
	int iVar1;
	float fVar2;
	fVar2 = 999999f;
	iVar0 = 0;
	while (iVar0 < (*uParam1 - 1))
	{
		if (SYSTEM::VDIST2(MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), true), Param0) < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = SYSTEM::VDIST2(MISC::GET_CLOSEST_POINT_ON_LINE(Param0, *(uParam1[iVar0 /*3*/]), *(uParam1[iVar0 + 1 /*3*/]), true), Param0);
		}
		iVar0++;
	}
	return iVar1;
}

void func_237(int iParam0)//Position - 0x266AD
{
	if (bLocal_873)
	{
		func_243(iParam0, &(Local_808[0 /*25*/]), 1, func_241(iLocal_78), 0, 1);
	}
	else
	{
		func_243(iParam0, &(Local_808[1 /*25*/]), 2, func_241(iLocal_78), 0, 1);
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_879) > 500)
	{
		bLocal_873 = func_238(iLocal_78);
		iLocal_879 = MISC::GET_GAME_TIMER();
	}
}

bool func_238(int iParam0)//Position - 0x26706
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	Var1 = { __LIB_0__.func_79(Local_638[iParam0 /*3*/] - Local_637[iParam0 /*3*/]) };
	return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var1.f_0, Var1.f_1, Var0.f_0, Var0.f_1)) < 90f;
}

void func_240(var uParam0, int iParam1, char* sParam2)//Position - 0x2678E
{
	float fVar0;
	float fVar1;
	int iVar2;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, sParam2);
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2);
		fVar1 = (fVar0 / IntToFloat((*uParam0 - 1)));
		iVar2 = 0;
		while (iVar2 < *uParam0)
		{
			*(uParam0[iVar2 /*3*/]) = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam1, (fVar1 * IntToFloat(iVar2)), sParam2) };
			iVar2++;
		}
	}
}

char* func_241(int iParam0)//Position - 0x267E8
{
	switch (iParam0)
	{
		case 0:
			return "famtwoCanalsbottom";
			break;
		case 1:
			return "famtwoCanalstop";
			break;
		case 2:
			return "famtwoCanalsLeft";
			break;
		case 3:
			return "famtwoCanalsMiddle";
			break;
		case 4:
			return "famtwoCanalsRight";
			break;
	}
	return "famtwoCanalsbottom";
}

int func_242()//Position - 0x2684B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_637[iVar0 /*3*/], Local_638[iVar0 /*3*/], fLocal_639[iVar0], false, true, 0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 6;
}

void func_243(int iParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x26892
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if ((((((!PED::IS_PED_INJURED(iLocal_100[iParam0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_100[iParam0], false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_99[iParam0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iParam0], false)) && PED::IS_PED_IN_VEHICLE(iLocal_100[iParam0], iLocal_99[iParam0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
	{
		fVar0 = func_235(ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true), iParam2, sParam3, uParam1, 0);
		fVar1 = func_235(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iParam2, sParam3, uParam1, 0);
		Var2 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fVar0, sParam3) };
		Var3 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam2, fVar1, sParam3) };
		if (!iLocal_872[iParam0])
		{
			if (!bLocal_890)
			{
				if (((fVar0 < fVar1 && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true), 3f)) && !CAM::IS_SPHERE_VISIBLE(Var2, 3f)) && SYSTEM::VDIST2(Var3, ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true)) > 25f)
				{
					RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[iParam0]);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_99[iParam0], iParam2, sParam3, true);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iLocal_99[iParam0], 0f, 0f, 0.1f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_99[iParam0], __LIB_0__.func_301((fVar0 + (IntToFloat(iParam0) * 0.5f)), 0f, 999999f));
					iLocal_872[iParam0] = 1;
				}
			}
			if (bLocal_73 != 2)
			{
				iLocal_874[iParam0] = fVar0 > fVar1;
			}
			else
			{
				iLocal_874[iParam0] = 0;
			}
		}
		else
		{
			fVar4 = SYSTEM::VDIST2(Var3, Var2);
			fVar5 = 999999f;
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_99[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_99[1], false))
			{
				fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_99[0], true), ENTITY::GET_ENTITY_COORDS(iLocal_99[1], true));
			}
			if (((((CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true), 3f) && (fVar4 < 25f || iParam4)) || fVar4 < 9f) || fVar0 > fVar1) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[iParam0])) || fVar5 < (1.5f * 1.5f))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[iParam0]))
				{
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_99[iParam0], 262144);
				}
				else
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_99[iParam0], iParam2, sParam3, 20f, 262144);
				}
				if (iParam5 && (fVar0 > 0.85f || fVar0 < 0.15f))
				{
				}
				TASK::TASK_VEHICLE_CHASE(iLocal_100[iParam0], PLAYER::PLAYER_PED_ID());
				iLocal_872[iParam0] = 0;
			}
			else
			{
				fVar6 = 40f;
				if (iParam5 && (fVar0 > 0.8f || fVar0 < 0.2f))
				{
					fVar7 = 1f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_99[iParam0], __LIB_0__.func_301(((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) * (fVar7 / fVar6)) * fLocal_887), 0.2f, fVar7));
				}
				else
				{
					fVar7 = 1.3f;
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_99[iParam0], __LIB_0__.func_301(((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_99[iParam0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) * (fVar7 / fVar6)) * fLocal_887), 0.8f, fVar7));
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[iParam0]))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_99[iParam0]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_99[iParam0]);
		}
	}
}

void func_245()//Position - 0x26C38
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
	{
		switch (iLocal_882)
		{
			case 0:
				if (!iLocal_884)
				{
					__LIB_0__.func_151("FM2_JSHLP1", 12000);
					iLocal_883 = MISC::GET_GAME_TIMER();
					iLocal_884 = 1;
				}
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
				{
					fLocal_886 = (fLocal_886 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_886 > 3f || (MISC::GET_GAME_TIMER() - iLocal_883) > 10000)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			case 1:
				if (__LIB_0__.func_1("FM2_JSHLP1"))
				{
					if (!iLocal_885)
					{
						HUD::CLEAR_HELP(false);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = MISC::GET_GAME_TIMER();
					iLocal_882++;
				}
				break;
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			case 3:
				if (!iLocal_884)
				{
					__LIB_0__.func_151("FM2_JSHLP2", 12000);
					iLocal_883 = MISC::GET_GAME_TIMER();
					iLocal_884 = 1;
				}
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
				{
					fLocal_886 = (fLocal_886 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_886 > 1f || (MISC::GET_GAME_TIMER() - iLocal_883) > 10000)
				{
					iLocal_882++;
				}
				break;
			case 4:
				if (__LIB_0__.func_1("FM2_JSHLP2"))
				{
					if (!iLocal_885)
					{
						iLocal_885 = 1;
						HUD::CLEAR_HELP(false);
					}
				}
				else
				{
					iLocal_882++;
				}
				break;
			case 5:
				if ((MISC::GET_GAME_TIMER() - iLocal_883) > 2000)
				{
					iLocal_884 = 0;
					iLocal_885 = 0;
					iLocal_882++;
				}
				break;
			case 6:
				if (!iLocal_884)
				{
					__LIB_0__.func_151("FM2_JSHLP3", 12000);
					iLocal_883 = MISC::GET_GAME_TIMER();
					iLocal_884 = 1;
				}
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/))
				{
					fLocal_886 = (fLocal_886 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_886 > 2f || (MISC::GET_GAME_TIMER() - iLocal_883) > 7500)
				{
					fLocal_886 = 0f;
					iLocal_882++;
				}
				break;
			case 7:
				if (__LIB_0__.func_1("FM2_JSHLP3"))
				{
					if (!iLocal_885)
					{
						HUD::CLEAR_HELP(false);
						iLocal_885 = 1;
					}
				}
				else
				{
					iLocal_883 = MISC::GET_GAME_TIMER();
					iLocal_882++;
				}
				break;
		}
	}
	else if ((__LIB_0__.func_1("FM2_JSHLP1") || __LIB_0__.func_1("FM2_JSHLP2")) || __LIB_0__.func_1("FM2_JSHLP3"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_248()//Position - 0x26EB3
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iVar0], false) && !PED::IS_PED_INJURED(iLocal_100[iVar0])) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_100[iVar0], iLocal_99[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_99[iVar0], true) };
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_92, true) };
				if (SYSTEM::VDIST2(Var2, Local_561[0 /*7*/]) > 100f && SYSTEM::VDIST2(Var2, Local_561[1 /*7*/]) > 100f)
				{
					if (SYSTEM::VDIST2(Var2, Local_561[iVar0 /*7*/]) > 400f)
					{
						if (__LIB_30__.func_907(iLocal_99[iVar0], iLocal_92, iLocal_107, Var2, ENTITY::GET_ENTITY_ROTATION(iLocal_92, 2)))
						{
							Local_561[iVar0 /*7*/] = { Var2 };
							Local_561[iVar0 /*7*/].f_3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_92, 2) };
							Local_561[iVar0 /*7*/].f_6 = SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iLocal_99[iVar0]));
						}
					}
				}
				if (!__LIB_0__.func_86(Local_561[iVar0 /*7*/]) && Local_561[iVar0 /*7*/].f_2 < 1f)
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_99[iVar0]))
					{
						iLocal_563[iVar0] = MISC::GET_GAME_TIMER();
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_563[iVar0]) > 1000 && (MISC::GET_GAME_TIMER() - iLocal_562[iVar0]) > 2000)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Local_561[iVar0 /*7*/], 3f) && !CAM::IS_SPHERE_VISIBLE(Var1, 3f))
						{
							fVar3 = 99f;
							iVar4 = 0;
							if (iVar0 == 0)
							{
								iVar4 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iVar4], false))
							{
								fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_99[iVar4], true), Local_561[iVar0 /*7*/]);
							}
							if ((((SYSTEM::VDIST2(Var1, Var2) > 225f && SYSTEM::VDIST2(Var1, Local_561[iVar0 /*7*/]) < SYSTEM::VDIST2(Var1, Var2)) && SYSTEM::VDIST2(Var2, Local_561[iVar0 /*7*/]) > 225f) && fVar3 > 5f) && __LIB_30__.func_907(iLocal_99[iVar0], iLocal_92, iLocal_107, Local_561[iVar0 /*7*/], Local_561[iVar0 /*7*/].f_3))
							{
								MISC::CLEAR_AREA_OF_PEDS(Local_561[iVar0 /*7*/], 3f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(Local_561[iVar0 /*7*/], 3f, false, false, false, false, false, false, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_99[iVar0], Local_561[iVar0 /*7*/], true, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(iLocal_99[iVar0], Local_561[iVar0 /*7*/].f_3, 2, true);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_99[iVar0], (Local_561[iVar0 /*7*/].f_6 + 5f));
								TASK::TASK_VEHICLE_CHASE(iLocal_100[iVar0], PLAYER::PLAYER_PED_ID());
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_99[iVar0], true, true, false);
								iLocal_562[iVar0] = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_250(bool bParam0, float fParam1)//Position - 0x272DC
{
	if (bParam0)
	{
		MISC::WATER_OVERRIDE_FADE_IN(fParam1);
		MISC::WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(0.35f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(0.3f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(0.25f);
		MISC::WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(0.35f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(0.4f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(0.25f);
		MISC::WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(0.55f);
		MISC::WATER_OVERRIDE_SET_RIPPLEBUMPINESS(0.45f);
		MISC::WATER_OVERRIDE_SET_RIPPLEDISTURB(0.5f);
		MISC::WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(0.6f);
		MISC::WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(0.25f);
		MISC::WATER_OVERRIDE_SET_STRENGTH(0.75f);
	}
	else
	{
		MISC::WATER_OVERRIDE_FADE_OUT(fParam1);
	}
}

void func_251()//Position - 0x27364
{
	Local_637[0 /*3*/] = { -1237.2739f, -923.97003f, 5.135533f };
	Local_638[0 /*3*/] = { -985.1348f, -1359.6802f, -7.479084f };
	fLocal_639[0] = 23f;
	Local_637[1 /*3*/] = { -1003.90784f, -914.4536f, -1.611186f };
	Local_638[1 /*3*/] = { -880.54767f, -1124.6018f, 6.150022f };
	fLocal_639[1] = 29f;
	Local_637[2 /*3*/] = { -1169.4713f, -1027.0867f, 5.78508f };
	Local_638[2 /*3*/] = { -1003.9606f, -932.3284f, -2.993861f };
	fLocal_639[2] = 29f;
	Local_637[3 /*3*/] = { -1116.5543f, -1119.791f, 5.784778f };
	Local_638[3 /*3*/] = { -950.77606f, -1023.8228f, -1.496439f };
	fLocal_639[3] = 29f;
	Local_637[4 /*3*/] = { -1062.3909f, -1213.4738f, -2.315868f };
	Local_638[4 /*3*/] = { -897.3085f, -1116.901f, 4.92553f };
	fLocal_639[4] = 29f;
}

void func_252()//Position - 0x27489
{
	Local_632[0 /*3*/] = { -2033.74f, -1004.7763f, 1f };
	Local_632[1 /*3*/] = { -1801.4323f, -975.5541f, 1f };
	Local_632[2 /*3*/] = { -1796.2546f, -988.166f, 1f };
	Local_632[3 /*3*/] = { -2012.2445f, -1073.7762f, 1f };
	Local_633[5 /*3*/] = { -1241.138f, -933.0004f, 1f };
	Local_633[4 /*3*/] = { -1227.2028f, -924.2169f, 1f };
	Local_633[3 /*3*/] = { -1240.015f, -751.6861f, 1f };
	Local_633[2 /*3*/] = { -1431.8754f, -747.558f, 1f };
	Local_633[1 /*3*/] = { Local_632[1 /*3*/] };
	Local_633[0 /*3*/] = { Local_632[2 /*3*/] };
	Local_634[0 /*3*/] = { -988.3516f, -908.0377f, 1f };
	Local_634[1 /*3*/] = { -866.9206f, -1116.0399f, 1f };
	Local_634[2 /*3*/] = { -978.9424f, -1351.0541f, 1f };
	Local_634[3 /*3*/] = { -1007.6198f, -1362.3158f, 1f };
	Local_634[4 /*3*/] = { Local_633[5 /*3*/] };
	Local_634[5 /*3*/] = { Local_633[4 /*3*/] };
	Local_635[0 /*3*/] = { Local_634[3 /*3*/] };
	Local_635[1 /*3*/] = { Local_634[2 /*3*/] };
	Local_635[2 /*3*/] = { -844.5858f, -1302.0059f, 4.1001f };
	Local_635[3 /*3*/] = { -768.9856f, -1524.3383f, 4.98f };
	Local_635[4 /*3*/] = { -1052.3737f, -1553.313f, 13.0317f };
	Local_636[0 /*3*/] = { Local_635[4 /*3*/] };
	Local_636[1 /*3*/] = { Local_635[3 /*3*/] };
	Local_636[2 /*3*/] = { -1165.8938f, -1923.1788f, 2.5698f };
	Local_636[3 /*3*/] = { -1226.9473f, -1873.5306f, 4.8338f };
}

bool func_255()//Position - 0x2769D
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("CSB_PornDudes"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("CSB_PornDudes")))
		{
			iLocal_91[0] = PED::CREATE_PED(26, joaat("CSB_PornDudes"), -2028.3362f, -1026.3871f, 0.0897f, 222.4424f, true, true);
			if (bLocal_115)
			{
				iVar0 = 0;
				while (iVar0 < 12)
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_91[0], iVar0, Local_116[iVar0 /*3*/][0], Local_116[iVar0 /*3*/][1], 0);
					iVar0++;
				}
			}
			PED::SET_PED_DIES_IN_WATER(iLocal_91[0], false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_91[0], 17, true);
			PED::SET_PED_LOD_MULTIPLIER(iLocal_91[0], 1.75f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91[0], true);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 4, 3);
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]);
}

int func_256()//Position - 0x2776A
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, func_241(iVar1));
		VEHICLE::REQUEST_VEHICLE_RECORDING(2, func_241(iVar1));
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, func_241(iVar1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, func_241(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

int func_257(int iParam0, bool bParam1)//Position - 0x277C3
{
	struct<3> Var0;
	float fVar1;
	var uVar2;
	STREAMING::REQUEST_MODEL(joaat("seashark"));
	STREAMING::REQUEST_MODEL(joaat("CSB_PornDudes"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("seashark")) && STREAMING::HAS_MODEL_LOADED(joaat("CSB_PornDudes")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_99[iParam0]))
		{
			if (iParam0 == 0)
			{
				if (bParam1)
				{
					Var0 = { -2023.64f, -1047.0404f, 0.6916f };
					fVar1 = -108f;
				}
				else
				{
					Var0 = { -2024.7164f, -1046.3866f, 0f };
					fVar1 = -108.9627f;
				}
			}
			else if (bParam1)
			{
				Var0 = { -2027.4f, -1045.88f, 0.6916f };
				fVar1 = -108f;
			}
			else
			{
				Var0 = { -2021.2002f, -1046.9255f, 0f };
				fVar1 = -84.578f;
			}
			if (WATER::GET_WATER_HEIGHT(Var0, &uVar2))
			{
				Var0.f_2 = uVar2;
				iLocal_99[iParam0] = VEHICLE::CREATE_VEHICLE(joaat("seashark"), Var0, fVar1, true, true, false);
				if (iParam0 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_99[iParam0], 3);
				}
				else
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_99[iParam0], 1);
				}
				VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(iLocal_99[iParam0], 100f);
				VEHICLE::SET_BOAT_ANCHOR(iLocal_99[iParam0], bParam1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iParam0], false))
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_99[iParam0], true);
			ENTITY::SET_ENTITY_PROOFS(iLocal_99[iParam0], false, false, false, true, true, false, false, false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_99[iParam0], 3);
			if (bParam1)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_99[iParam0], false, true, false);
			}
			else
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_99[iParam0], true, true, false);
			}
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_99[iParam0], false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_100[iParam0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iParam0], false))
		{
			if (!bParam1)
			{
				iLocal_100[iParam0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_99[iParam0], 26, joaat("CSB_PornDudes"), -1, true, true);
			}
			else
			{
				iLocal_100[iParam0] = PED::CREATE_PED(26, joaat("CSB_PornDudes"), Vector(10.9101f, -1024.3993f, -2068.0266f) + Vector(0f, 0f, IntToFloat(iParam0)), 0f, true, true);
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_100[iParam0]) && !PED::IS_PED_INJURED(iLocal_100[iParam0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_99[iParam0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iParam0], false))
		{
			if (!bParam1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_100[iParam0], false);
				if (!PED::IS_PED_IN_VEHICLE(iLocal_100[iParam0], iLocal_99[iParam0], false))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_100[iParam0], iLocal_99[iParam0], -1);
				}
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_100[iParam0], true);
			}
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_100[iParam0], 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_100[iParam0], false, false, false, true, true, false, false, false);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_100[iParam0], joaat("WEAPON_PISTOL"), -1, false, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_100[iParam0], 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_100[iParam0], 1, true);
			PED::SET_PED_COMBAT_ABILITY(iLocal_100[iParam0], 0);
			PED::SET_PED_COMBAT_RANGE(iLocal_100[iParam0], 2);
			PED::SET_PED_ACCURACY(iLocal_100[iParam0], 0);
			PED::SET_PED_SHOOT_RATE(iLocal_100[iParam0], 15);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_100[iParam0], true, 1);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_100[iParam0], true);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_100[iParam0], false);
			PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(iLocal_100[iParam0], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_100[iParam0], iLocal_79);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_100[iParam0], false);
			if (iParam0 == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_100[iParam0], 0, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_100[iParam0], 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_100[iParam0], 4, 2, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_100[iParam0], 0, 0, 0, false);
			}
			else
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_100[iParam0], 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_100[iParam0], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_100[iParam0], 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_100[iParam0], 1, 1, 0, false);
			}
		}
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_100[iParam0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_99[iParam0])) && !PED::IS_PED_INJURED(iLocal_100[iParam0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iParam0], false)) && (PED::IS_PED_IN_VEHICLE(iLocal_100[iParam0], iLocal_99[iParam0], false) || bParam1))
	{
		return 1;
	}
	return 0;
}

int func_258()//Position - 0x27BD0
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(101, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(201, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(202, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(301, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(302, "famtwo");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoCanalsAlt");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoplayer");
	if ((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "famtwo") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(202, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(301, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(302, "famtwo")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "famtwoCanalsAlt"))
	{
		func_240(&uLocal_640, 101, "famtwo");
		func_240(&uLocal_653, 102, "famtwo");
		func_240(&uLocal_666, 201, "famtwo");
		func_240(&uLocal_712, 202, "famtwo");
		func_240(&uLocal_758, 301, "famtwo");
		func_240(&uLocal_783, 302, "famtwo");
		func_240(&uLocal_834, 401, "famtwo");
		func_240(&uLocal_853, 402, "famtwo");
		func_240(&uLocal_809, 1, "famtwoCanalsAlt");
		return 1;
	}
	return 0;
}

int func_259()//Position - 0x27D0D
{
	if (func_260(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_632, 0))
	{
		return 0;
	}
	if (func_260(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_633, 0))
	{
		return 1;
	}
	if (func_260(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_634, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_100[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_100[0], false))
		{
			return 2;
		}
		else if (iLocal_878)
		{
			return 4;
		}
		else
		{
			return 3;
		}
	}
	if (func_260(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_635, 0))
	{
		return 5;
	}
	if (func_260(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Local_636, 0))
	{
		return 6;
	}
	return 7;
}

int func_260(struct<3> Param0, var uParam1, bool bParam2)//Position - 0x27DBF
{
	int iVar0;
	int iVar1;
	if (*uParam1 < 3)
	{
	}
	iVar0 = 1;
	if (!__LIB_30__.func_928(Param0, *(uParam1[0 /*3*/]), *(uParam1[(*uParam1 - 1) /*3*/])))
	{
		if (bParam2)
		{
		}
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < (*uParam1 - 1))
	{
		if (!__LIB_30__.func_928(Param0, *(uParam1[iVar1 + 1 /*3*/]), *(uParam1[iVar1 /*3*/])))
		{
			if (bParam2)
			{
			}
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_262()//Position - 0x27E5E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	switch (iLocal_159)
	{
		case 0:
			bLocal_902 = false;
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "famtwoplayer");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "famtwo");
			VEHICLE::REQUEST_VEHICLE_RECORDING(102, "famtwo");
			STREAMING::REQUEST_ANIM_DICT("missfam2_tracy_jetski");
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("family_2_mcs_3", 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			iLocal_901 = 0;
			break;
		case -1:
			STREAMING::REQUEST_IPL("smboat");
			while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_159 = 3;
			iLocal_155 = 0;
			break;
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[0]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Guy_on_sofa", iLocal_91[0], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]) && !PED::IS_PED_INJURED(iLocal_91[1]))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Man_getting_wood", iLocal_91[1], 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[2]) && !PED::IS_PED_INJURED(iLocal_91[2]))
				{
					func_2("Girl_on_sofa", iLocal_91[2], 0, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[3]) && !PED::IS_PED_INJURED(iLocal_91[3]))
				{
					func_2("Girl_being_chatted_up", iLocal_91[3], 0, 2);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_88) && !PED::IS_PED_INJURED(iLocal_88))
				{
					func_2("Tracy", iLocal_88, 0, 2);
				}
				iLocal_159++;
			}
			break;
		case 2:
			iVar0 = 0;
			if (func_257(0, 1) && func_257(1, 1))
			{
				iVar0 = 1;
			}
			if (iVar0 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "famtwoplayer"))
			{
				iLocal_159++;
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
			}
			break;
		case 3:
			if (__LIB_0__.func_90())
			{
				bLocal_115 = false;
				__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
				if (!PED::IS_PED_INJURED(iLocal_88))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_88, "Tracy", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					VEHICLE::SET_BOAT_ANCHOR(iLocal_92, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_92, "Michaels_seashark", 0, 0, 0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, false, true, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "Prop_MP3_Dock", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_100[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_100[0], false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_100[0], true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_100[0], "Porn_Dude", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_100[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_100[1], false);
					PED::SET_PED_CAN_RAGDOLL(iLocal_100[1], true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_100[1], "Porn_Dude^1", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[0], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_99[0], "Porn_Dude_seashark", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[1], false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_99[1], "Porn_Dude_^1_seashark", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]) && !PED::IS_PED_INJURED(iLocal_91[0]))
				{
					PED::SET_PED_DIES_IN_WATER(iLocal_91[0], false);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_91[0], 17, true);
					PED::SET_PED_LOD_MULTIPLIER(iLocal_91[0], 1.75f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_91[0], true);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_91[0], PLAYER::PLAYER_PED_ID(), -1, 4, 3);
					bLocal_115 = true;
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_91[0], "Guy_on_sofa", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[1]) && !PED::IS_PED_INJURED(iLocal_91[1]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_91[1], "Man_getting_wood", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[2]) && !PED::IS_PED_INJURED(iLocal_91[2]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_91[2], "Girl_on_sofa", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[3]) && !PED::IS_PED_INJURED(iLocal_91[3]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_91[3], "Girl_being_chatted_up", 0, 0, 0);
				}
				CUTSCENE::START_CUTSCENE(2048);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				RECORDING::REPLAY_START_EVENT(4);
				__LIB_6__.func_771();
				func_207(7);
				__LIB_11__.func_862();
				AUDIO::PREPARE_MUSIC_EVENT("FAM2_NECK_GRAB");
				bLocal_899 = false;
				iLocal_900 = 0;
				iLocal_159++;
			}
			break;
		case 4:
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			MISC::CLEAR_AREA(-2006.2466f, -1043.8323f, -1.481001f, 200f, true, false, false, false);
			iLocal_159++;
			break;
		case 5:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tracy", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_88, iLocal_92, 0);
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_88, true);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_88, false, false);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude^1", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude_seashark", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Porn_Dude^1_seashark", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_seashark", 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, -1);
					}
					func_250(1, 0f);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_92, 1, "famtwoplayer", true);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_92, 0.66f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					ENTITY::SET_ENTITY_COORDS(iLocal_92, Local_129, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_92, fLocal_130);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, true, true, false);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_92, 15f);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
					WATER::GET_WATER_HEIGHT(Local_129, &fLocal_903);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_92, Local_129.f_0, Local_129.f_1, fLocal_903, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_92, fLocal_130);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, true, true, false);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_92, 17f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
					iVar1 = 0;
					while (iVar1 < iLocal_99)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(iLocal_99[iVar1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[iVar1], false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_100[iVar1])) && !PED::IS_PED_INJURED(iLocal_100[iVar1]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_100[iVar1], false);
							PED::SET_PED_CAN_RAGDOLL(iLocal_100[iVar1], true);
							VEHICLE::SET_BOAT_ANCHOR(iLocal_99[iVar1], false);
							if (!PED::IS_PED_IN_VEHICLE(iLocal_100[iVar1], iLocal_99[iVar1], false))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_100[iVar1], iLocal_99[iVar1], -1);
							}
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_99[iVar1], true) };
							WATER::GET_WATER_HEIGHT(Var2, &fVar3);
							ENTITY::SET_ENTITY_COORDS(iLocal_99[iVar1], Var2.f_0, Var2.f_1, fVar3, true, false, false, true);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_99[iVar1], (10f + (2f * SYSTEM::TO_FLOAT(iVar1))));
						}
						iVar1++;
					}
					if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CAM::DESTROY_ALL_CAMS(false);
						iLocal_112 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_112, 1);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_112, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2023.1742f, -1052.98f, 1.529f, 2.1162f, 0f, -39.8484f, 50f, true, 2), 0, 3);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_112, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -2008.224f, -1037.2172f, 1.8555f, -2.0921f, 0.0684f, -60.6791f, 50f, true, 2), 1400, 1);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_112, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1985.437f, -1024.5334f, 2.0868f, -3.9139f, 0f, -78.7979f, 50f, true, 2), 1850, 3);
						CAM::SET_CAM_ACTIVE(iLocal_112, true);
						CAM::POINT_CAM_AT_ENTITY(iLocal_112, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0.3f, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						__LIB_11__.func_784(&uLocal_521, PLAYER::PLAYER_PED_ID(), 0, 20f, 1000, 1000, 500, 0, 1045220557);
						SYSTEM::SETTIMERB(0);
					}
					else
					{
						bLocal_902 = true;
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
						func_250(1, 0.1f);
						WATER::GET_WATER_HEIGHT(Local_129, &fLocal_903);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_92, Local_129.f_0, Local_129.f_1, fLocal_903, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_92, fLocal_130);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, true, true, false);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_92, 18f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						}
					}
				}
			}
			if (!bLocal_899)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM2_NECK_GRAB") && CUTSCENE::GET_CUTSCENE_TIME() > 31250)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM2_NECK_GRAB");
					bLocal_899 = true;
				}
			}
			if (!iLocal_900)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 9700)
				{
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_FAMILY_2_BOAT_RADIO", false);
					iLocal_900 = 1;
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 37500)
			{
				if (!iLocal_904)
				{
					func_250(1, 1065353216);
					iLocal_904 = 1;
				}
			}
			if (!iLocal_901)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 45000)
				{
					if (!PED::IS_PED_INJURED(iLocal_91[0]))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_91[0], -2097.8667f, -973.0261f, -1f, 2f, -1, 40000f, 0.5f);
						iLocal_901 = 1;
					}
				}
			}
			if (!bLocal_115)
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0)) && !PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0))))
				{
					iVar4 = 0;
					while (iVar4 < 12)
					{
						Local_116[iVar4 /*3*/][0] = PED::GET_PED_DRAWABLE_VARIATION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0)), iVar4);
						Local_116[iVar4 /*3*/][1] = PED::GET_PED_TEXTURE_VARIATION(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Guy_on_sofa", 0)), iVar4);
						iVar4++;
					}
					bLocal_115 = true;
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_91[0]))
			{
				func_255();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::REPLAY_STOP_EVENT();
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
				{
					OBJECT::DELETE_OBJECT(&iLocal_106);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_mp3_dock"));
				}
				if (!bLocal_899)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM2_CS_SKIP");
				}
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				__LIB_11__.func_715();
				PLAYER::SPECIAL_ABILITY_CHARGE_LARGE(PLAYER::PLAYER_ID(), true, false, 0);
				if (!bLocal_899)
				{
					AUDIO::CANCEL_MUSIC_EVENT("FAM2_GRAB_NECK");
				}
				SYSTEM::SETTIMERA(0);
				if (!bLocal_902)
				{
					iLocal_159++;
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_92))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
					}
					func_210(7);
				}
			}
			break;
		case 6:
			if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				if (SYSTEM::TIMERB() > 2350)
				{
					CAM::RENDER_SCRIPT_CAMS(false, true, 1500, false, false, 0);
				}
				if (SYSTEM::TIMERB() > 2500)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_92))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
						}
						func_210(7);
					}
				}
			}
			else if (SYSTEM::TIMERB() > 2350)
			{
				if (__LIB_20__.func_655(&uLocal_521, 1, 1, 1, 0, 1, 0))
				{
					CAM::RENDER_SCRIPT_CAMS(false, true, 1500, false, false, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_92))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_92);
					}
					__LIB_11__.func_177(&uLocal_521);
					func_210(7);
				}
			}
			break;
	}
}

void func_264()//Position - 0x288E8
{
	int iVar0;
	bool bVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	func_273();
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_92) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_99[0]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[0], false))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_99[1]) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_99[1], false)))
	{
		func_105("FM2_TSPOOK");
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_106))
	{
		func_272();
	}
	iVar0 = 0;
	while (iVar0 < iLocal_99)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_99[iVar0]))
		{
			func_257(iVar0, 1);
		}
		iVar0++;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_91[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_91[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_91[iVar0], false))
			{
				func_105("FM2_TSPOOK");
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (((((((((((((((((MISC::IS_BULLET_IN_AREA(-2033.821f, -1031.864f, 4.89f, 5f, true) || FIRE::IS_EXPLOSION_IN_SPHERE(4, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(20, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(19, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(3, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, -2033.821f, -1031.864f, 4.89f, 10f)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, -2033.821f, -1031.864f, 4.89f, 10f)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_SMOKEGRENADE"), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_RPG"), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_GRENADE"), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_GRENADELAUNCHER"), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_GRENADELAUNCHER_SMOKE"), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_SMOKEGRENADE"), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_BZGAS"), 5f, true)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(-2033.821f, -1031.864f, 4.89f, joaat("WEAPON_MOLOTOV"), 5f, true)) || (PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), Vector(4.89f, -1031.864f, -2033.821f) - Vector(30f, 30f, 30f), Vector(4.89f, -1031.864f, -2033.821f) + Vector(30f, 30f, 30f), false, true) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())))
		{
			func_105("FM2_TSPOOK");
		}
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_102))
	{
		iLocal_102 = __LIB_0__.func_392(-2034.37f, -1032.23f, 4.88f, 0);
		HUD::SET_BLIP_COLOUR(iLocal_102, 3);
		HUD::SET_BLIP_SCALE(iLocal_102, 1f);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_102, "FM2_YACHTL");
	}
	switch (iLocal_159)
	{
		case 0:
			if (!__LIB_0__.func_1("FM2_DIVOFF"))
			{
				__LIB_0__.func_151("FM2_DIVOFF", -1);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0);
			__LIB_0__.func_403(207, 0);
			func_207(6);
			SYSTEM::SETTIMERA(0);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				sLocal_610[2] = "FM2_USWIM1_KM";
				sLocal_610[0] = "FM2_SWIM_KM";
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				sLocal_610[2] = "FM2_SWIM_FP";
				sLocal_610[0] = "FM2_SWIM_FP";
			}
			else
			{
				sLocal_610[2] = "FM2_USWIM1";
				sLocal_610[0] = "FM2_SWIM";
			}
			sLocal_610[3] = "FM2_USWIM2";
			sLocal_610[1] = "FM2_DIVE";
			sLocal_610[4] = "FM2_STAT1";
			sLocal_610[5] = "FM2_DROWN";
			iLocal_614[0] = "shouting_jimmy_idle_a";
			iLocal_614[1] = "shouting_jimmy_idle_b";
			iLocal_614[2] = "shouting_jimmy_idle_c";
			iLocal_615 = 0;
			iLocal_159++;
			iLocal_168 = -1;
			iLocal_618 = -1;
			iLocal_611 = -1;
			iLocal_616 = 0;
			bLocal_620 = false;
			iLocal_619 = 0;
			iLocal_178 = 0;
			STREAMING::REQUEST_ANIM_DICT("missfam2ig_3");
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			if (iLocal_155)
			{
				iLocal_159 = -1;
			}
			iLocal_617 = 1;
			break;
		case -1:
			STREAMING::REQUEST_IPL("smboat");
			while (!STREAMING::IS_IPL_ACTIVE("smBoat"))
			{
				SYSTEM::WAIT(0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Sprint"), false, 0, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, iLocal_171, 0f, true, false);
			}
			iLocal_159 = 1;
			iLocal_155 = 0;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (iLocal_617)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
				if (SYSTEM::TIMERA() < 1000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1871.0834f, -1203.1161f, 13.016579f, 2.5f, 2.5f, 3f, false, true, 0))
				{
					iLocal_617 = 0;
				}
			}
			if (iLocal_618 == -1 && (!__LIB_0__.func_75() || MISC::GET_PROFILE_SETTING(203) == 0))
			{
				__LIB_0__.func_325("FM2_YACHT", 7500, 1);
				iLocal_618 = MISC::GET_GAME_TIMER();
			}
			fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_89, true));
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfam2ig_3"))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), -1859.2643f, -1216.7756f, 13.0174f) > 3f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_89);
						iLocal_611 = 0;
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_89, -1859.2643f, -1216.7756f, 13.0174f, 1f, -1, 0.25f, 0, 40000f);
					}
				}
				else if (fVar2 < 900f)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_89, PLAYER::PLAYER_PED_ID(), 10f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 1 && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
						{
							TASK::CLEAR_PED_TASKS(iLocal_89);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							iLocal_611 = 0;
						}
					}
					else
					{
						switch (iLocal_611)
						{
							case -1:
								STREAMING::REQUEST_ANIM_DICT("missfam2ig_3");
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfam2ig_3"))
								{
									iLocal_611 = 0;
								}
								break;
							case 0:
								if ((MISC::GET_GAME_TIMER() - iLocal_613) > 1000)
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 3))
									{
										TASK::TASK_PLAY_ANIM(iLocal_89, "missfam2ig_3", "shouting_jimmy_base", 4f, -4f, -1, 49, 0f, false, false, false);
									}
									else
									{
										iLocal_611++;
									}
									iLocal_613 = MISC::GET_GAME_TIMER();
								}
								break;
							case 1:
								if ((((MISC::GET_GAME_TIMER() - iLocal_618) > 5000 || MISC::GET_PROFILE_SETTING(203) == 0) && fVar2 < 900f) && (iLocal_168 == -1 || (MISC::GET_GAME_TIMER() - iLocal_168) > 10000))
								{
									TASK::CLEAR_PED_TASKS(iLocal_89);
									if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_STOP", 8, 0, 0, 0))
									{
										TASK::TASK_PLAY_ANIM(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 4f, -4f, -1, 48, 0f, false, false, false);
										iLocal_168 = MISC::GET_GAME_TIMER();
										iLocal_611++;
									}
								}
								break;
							case 2:
								if ((MISC::GET_GAME_TIMER() - iLocal_168) > 1000)
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_89, "missfam2ig_3", iLocal_614[iLocal_612], 3))
									{
										TASK::CLEAR_PED_TASKS(iLocal_89);
										iLocal_612++;
										if (iLocal_612 >= iLocal_614)
										{
											iLocal_612 = 0;
										}
										iLocal_611 = 0;
									}
								}
								break;
							}
						}
					}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DIVE_INTO_WATER"))
			{
				if (PED::IS_PED_DIVING(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_2_DIVE_INTO_WATER");
				}
			}
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_209) < 100f)
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				if (Var3.f_2 < 2f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_89);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_93))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_93);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_94);
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DIVE_INTO_WATER"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DIVE_INTO_WATER");
				}
				iLocal_159++;
				SYSTEM::SETTIMERA(0);
				if (__LIB_0__.func_1("FM2_DIVOFF"))
				{
					HUD::CLEAR_HELP(false);
				}
				STREAMING::REMOVE_ANIM_DICT("missfam2ig_3");
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_SPLASH");
			}
			break;
		case 2:
			if (!__LIB_0__.func_1("FM2_DIVOFF") && SYSTEM::TIMERA() > 3000)
			{
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", true);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
				iLocal_159++;
			}
			break;
		case 3:
			if (!iLocal_616)
			{
				if (AUDIO::LOAD_STREAM("FAM2_BOAT_PARTY_MASTER", 0))
				{
					AUDIO::PLAY_STREAM_FROM_POSITION(-2032.5988f, -1032.6392f, 4.8831f);
					iLocal_616 = 1;
				}
			}
			func_266();
			if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_620)
					{
						bLocal_620 = true;
					}
				}
				else if (bLocal_620)
				{
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
					}
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2033.1241f, -1042.9813f, 0f, -2028.8629f, -1028.3284f, 8.97435f, 18.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2017.9991f, -1035.0532f, 5.946373f, -2023.1544f, -1033.719f, 1.287564f, 3.25f, false, true, 0)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_STREAM();
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 3);
				func_210(6);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2030.86f, -1035.4165f, 7.882243f, -2006.2466f, -1043.8323f, -1.481001f, 21.25f, false, true, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_NEAR_YACHT");
				iLocal_615 = 1;
				iLocal_159++;
			}
			if (!iLocal_615)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -2017.1554f, -1040.2144f, 1.4499f) < 400f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FAM2_NEAR_YACHT");
					iLocal_615 = 1;
				}
			}
			break;
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				if (__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
				{
					AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
					AUDIO::STOP_STREAM();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 3);
					func_210(6);
				}
			}
			break;
	}
	if (func_265(&uLocal_606, &iLocal_604, &uLocal_605))
	{
		func_105("FM2_JSPOOK");
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_89) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 30f)
		{
			func_105("FM2_JSPOOK");
		}
		else
		{
			func_150();
		}
	}
	if (!iLocal_619)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 3);
			iLocal_619 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	}
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_209) > 250000f)
	{
		func_105("FM2_TRAAB");
	}
	if (!PED::IS_PED_INJURED(iLocal_89))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_89, true) };
		fVar5 = Var4.f_2;
		if (fVar5 < 10f)
		{
			func_105("FM2_JIMHIT");
		}
	}
}

int func_265(var uParam0, int iParam1, var uParam2)//Position - 0x294FC
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		if (!*uParam0)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), 10f, true))
			{
				*uParam0 = 1;
			}
		}
		else if ((MISC::GET_GAME_TIMER() - *uParam2) > 200)
		{
			*iParam1++;
			*uParam2 = MISC::GET_GAME_TIMER();
			*uParam0 = 0;
		}
		if ((*iParam1 > 0 && !*uParam0) && (MISC::GET_GAME_TIMER() - *uParam2) > 1000)
		{
			*iParam1 = (*iParam1 - 1);
		}
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!__LIB_0__.func_75() && (MISC::GET_GAME_TIMER() - iLocal_169) > 7500)
		{
			__LIB_5__.func_759(iLocal_89, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = MISC::GET_GAME_TIMER();
		}
		if ((((((((*iParam1 > 5 || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(5f, 10f, 10f), joaat("WEAPON_GRENADE"), false)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(5f, 10f, 10f), joaat("WEAPON_GRENADELAUNCHER"), false)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(5f, 10f, 10f), joaat("WEAPON_GRENADELAUNCHER_SMOKE"), false)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(5f, 10f, 10f), joaat("WEAPON_RPG"), false)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(5f, 10f, 10f), joaat("WEAPON_MOLOTOV"), false)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(5f, 10f, 10f), joaat("WEAPON_BZGAS"), false)) || FIRE::IS_EXPLOSION_IN_AREA(2, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(2f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(2f, 10f, 10f))) || (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_94, iVar0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

void func_266()//Position - 0x29761
{
	iLocal_622 = bLocal_621;
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (!BitTest(uLocal_627, 5) && PLAYER::GET_PLAYER_UNDERWATER_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
			{
				if (bLocal_621 != 5)
				{
					bLocal_621 = 5;
				}
			}
			else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!BitTest(uLocal_627, 2))
				{
					if (bLocal_621 != 2)
					{
						bLocal_621 = 2;
					}
				}
				else if (!BitTest(uLocal_627, 3))
				{
					if (bLocal_621 != 3)
					{
						bLocal_621 = 3;
					}
				}
				else if (!BitTest(uLocal_627, 4))
				{
					if (bLocal_621 != 4)
					{
						bLocal_621 = 4;
					}
				}
			}
		}
		else if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (!BitTest(uLocal_627, 0))
			{
				if (bLocal_621 != 0)
				{
					bLocal_621 = false;
				}
			}
			else if (!BitTest(uLocal_627, 1))
			{
				if (bLocal_621 != 1)
				{
					bLocal_621 = true;
				}
			}
			else if (!BitTest(uLocal_627, 4))
			{
				if (bLocal_621 != 4)
				{
					bLocal_621 = 4;
				}
			}
		}
	}
	if (bLocal_621 != iLocal_622)
	{
		iLocal_624 = 0;
		iLocal_623 = 0;
		iLocal_625 = 0;
		fLocal_626 = 0f;
	}
	if (!iLocal_623)
	{
		if ((bLocal_621 != 1 && bLocal_621 != 2) && bLocal_621 != 3)
		{
			if (func_269(sLocal_610[bLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) != 4)
		{
			if (func_269(sLocal_610[bLocal_621], 0))
			{
				iLocal_623 = 1;
			}
		}
		else
		{
			iLocal_623 = 1;
		}
	}
	else if (__LIB_0__.func_1(sLocal_610[bLocal_621]))
	{
		fLocal_626 = (fLocal_626 + MISC::GET_FRAME_TIME());
		if (fLocal_626 > 2f || !func_268(bLocal_621))
		{
			if (!BitTest(uLocal_627, bLocal_621))
			{
				MISC::SET_BIT(&uLocal_627, bLocal_621);
			}
			if (!iLocal_624 && func_268(bLocal_621))
			{
				if (func_267(bLocal_621))
				{
					iLocal_624 = 1;
				}
			}
			else if (!iLocal_625)
			{
				HUD::CLEAR_HELP(false);
				iLocal_625 = 1;
			}
		}
	}
}

int func_267(bool bParam0)//Position - 0x29935
{
	switch (bParam0)
	{
		case 2:
		case 0:
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 4f)
			{
				return 1;
			}
			break;
		case 1:
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			break;
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/))
			{
				return 1;
			}
			break;
		case 5:
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_268(bool bParam0)//Position - 0x299C6
{
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
		{
			if (((bParam0 == 5 || bParam0 == 3) || bParam0 == 2) || bParam0 == 4)
			{
				return 1;
			}
		}
		else if ((bParam0 == 1 || bParam0 == 0) || bParam0 == 4)
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_269(char* sParam0, bool bParam1)//Position - 0x29A37
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !__LIB_0__.func_1(sParam0))
	{
		HUD::CLEAR_HELP(true);
	}
	else if (bParam1)
	{
		__LIB_0__.func_187(sParam0);
	}
	else
	{
		__LIB_0__.func_151(sParam0, -1);
	}
	if (__LIB_0__.func_1(sParam0))
	{
		return 1;
	}
	return 0;
}

bool func_272()//Position - 0x29ADD
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_106))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_mp3_dock"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_mp3_dock")))
		{
			iLocal_106 = OBJECT::CREATE_OBJECT(joaat("prop_mp3_dock"), -2032.539f, -1032.3503f, 5.421927f, true, true, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_106, -2032.539f, -1032.3503f, 5.421927f, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iLocal_106, 0f, 0f, 66.5523f, 2, true);
	}
	return ENTITY::DOES_ENTITY_EXIST(iLocal_106);
}

void func_273()//Position - 0x29B58
{
	struct<3> Var0;
	switch (iLocal_628)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("A_C_Stingray"));
			iLocal_628++;
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_Stingray")))
			{
				iLocal_628++;
			}
			break;
		case 2:
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (Var0.f_2 < 1f)
			{
				iLocal_629 = PED::CREATE_PED(26, joaat("A_C_Stingray"), -1885.4974f, -1189.8828f, -8.2945f, -136.1128f, true, true);
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_629, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, 20000, 40000f, 0.5f);
				iLocal_628++;
			}
			break;
		case 3:
			if (__LIB_0__.func_76(iLocal_629, PLAYER::PLAYER_PED_ID(), 1) > 20f || TASK::GET_SCRIPT_TASK_STATUS(iLocal_629, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Stingray"));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_629);
				iLocal_628++;
			}
			break;
	}
}

void func_275()//Position - 0x29CB0
{
	switch (iLocal_159)
	{
		case 0:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 6, 8);
				iLocal_159++;
			}
			else
			{
				iLocal_159 += 2;
			}
			break;
		case 1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				iLocal_159++;
			}
			break;
		case 2:
			__LIB_6__.func_771();
			if (__LIB_0__.func_90())
			{
				if (__LIB_10__.func_0("family_2_mcs_2"))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_89))
					{
						PED::SET_PED_SWEAT(iLocal_89, 100f);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_89, "Jimmy", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_93))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_93);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_94, false);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
						}
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_94, "FAM_2_Jimmys_bike", 0, 0, 0);
					}
					RECORDING::REPLAY_START_EVENT(4);
					CUTSCENE::START_CUTSCENE(0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					__LIB_11__.func_862();
					PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 3, 26, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID(), 4, 27, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
					}
					AUDIO::SET_PED_WALLA_DENSITY(0f, 0f);
					iLocal_159++;
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 5, 8);
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
			{
				if (bLocal_180)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_93, -1848.1947f, -1218.7057f, 12.583574f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_93, 129.35266f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_93, -1867.3827f, -1212.1979f, 12.574015f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_93, -0.030485f);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_93, 5f);
				PHYSICS::ACTIVATE_PHYSICS(iLocal_93);
			}
			MISC::CLEAR_AREA(-1859.0448f, -1215.5027f, 12.0665f, 2f, true, false, false, false);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			iLocal_159++;
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1.5f);
				if (CUTSCENE::GET_CUTSCENE_TIME() > 90500)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				func_389(1, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Sprint"), false, 1, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, iLocal_171, 0f, true, false);
				__LIB_0__.func_151("FM2_DIVOFF", -1);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_94, -1858.612f, -1214.5627f, 12.307f, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_94, 0.388f, -0.438f, 0.4777f, 0.6553f);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_94, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, true, true, false, false, true);
				}
				PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				__LIB_11__.func_715();
				func_210(5);
			}
			break;
	}
}

void func_277()//Position - 0x2A000
{
	int iVar0;
	float fVar1;
	float fVar2;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.7f);
	if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		if (((((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("cruiser")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("scorcher"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("tribike"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("tribike2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("tribike3"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("bmx")))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_93);
			iLocal_93 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar0 = 0;
			while (iVar0 < iLocal_96)
			{
				if (iLocal_96[iVar0] == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_96[iVar0] = 0;
				}
				iVar0++;
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_93, true, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
	{
		if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_95, true)) > 1000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_95)) && !CAM::IS_SPHERE_VISIBLE(Local_131, 5f))
		{
			if (SYSTEM::VDIST2(Local_131, ENTITY::GET_ENTITY_COORDS(iLocal_95, true)) < 625f)
			{
				__LIB_39__.func_924(iLocal_95, Local_131 + Vector(1f, 0f, 0f), fLocal_132, 24, 0);
				__LIB_0__.func_313(24);
			}
			VEHICLE::DELETE_VEHICLE(&iLocal_95);
		}
	}
	if ((!PED::IS_PED_INJURED(iLocal_89) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
	{
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1308.7146f, -1310.1353f, -22.620132f, -1171.372f, -1261.1484f, 47.98976f, 250f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1348.9252f, -1155.0413f, -20.531912f, -1163.3596f, -1143.4429f, 34.68446f, 142.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1386.3848f, -1054.306f, -16.121284f, -1245.2894f, -965.99146f, 32.39125f, 142.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1462.1641f, -972.0999f, -20.403019f, -1332.7198f, -833.9435f, 45.988754f, 227.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1178.1633f, -1629.2063f, 1.873874f, -1315.8883f, -1365.2944f, 25.025532f, 173.75f, false, true, 0))
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
		}
		else
		{
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(false);
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_93) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
			}
		}
		switch (iLocal_159)
		{
			case 0:
				fLocal_600 = 0f;
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_89, 1);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
				}
				iLocal_104 = __LIB_6__.func_825(iLocal_94, 0, 0);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_104, "BLIP_280" /* GXT: Friend */);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				iLocal_185 = 0;
				iLocal_184 = 0;
				bLocal_180 = false;
				iLocal_181 = 0;
				iLocal_601 = 0;
				iLocal_602 = (Local_603.f_0 - 1);
				iLocal_604 = 0;
				bLocal_607 = false;
				Local_603[0 /*3*/] = { -1266.2878f, -1689.5608f, 3.4691f };
				Local_603[1 /*3*/] = { -1345.0573f, -1263.8895f, 3.8977f };
				Local_603[2 /*3*/] = { -1564.5465f, -928.2069f, 12.0173f };
				Local_603[3 /*3*/] = { Local_146 };
				PATHFIND::SET_PED_PATHS_IN_AREA(Vector(5.75302f, -1325.827f, -1329.113f) + Vector(2.5f, 44f, 13.25f), Vector(5.75302f, -1325.827f, -1329.113f) - Vector(2.5f, 44f, 13.25f), false, 0);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-1361.5677f, -1207.0526f, 3.4492f, 10f, 0);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(-1396.3402f, -1059.0491f, 3.2013f, 15f, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_89, true, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_89, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_94, true, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_94, true);
				func_240(&uLocal_213, iLocal_158, sLocal_156);
				iLocal_159++;
				AUDIO::SET_PED_WALLA_DENSITY(0.5f, 0.5f);
				__LIB_10__.func_568(500);
				MISC::ENABLE_DISPATCH_SERVICE(1, false);
				MISC::ENABLE_DISPATCH_SERVICE(7, false);
				MISC::ENABLE_DISPATCH_SERVICE(2, false);
				MISC::ENABLE_DISPATCH_SERVICE(4, false);
				MISC::ENABLE_DISPATCH_SERVICE(10, false);
				MISC::ENABLE_DISPATCH_SERVICE(9, false);
				MISC::ENABLE_DISPATCH_SERVICE(8, false);
				STREAMING::REQUEST_IPL("smboat");
				break;
			case 1:
				if (PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_94, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_89, iLocal_94, -1092.3923f, -1708.092f, 3.2771f, 7f, 0, joaat("cruiser"), 786471, 3f, 4f);
					iLocal_159++;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_89, iLocal_94, -1, -1, 3f, 1, 0);
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_94, -1092.3923f, -1708.092f, 3.2771f, 4f, 4f, 4f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_89);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_159++;
				}
				break;
			case 3:
				fLocal_609 = func_283(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iLocal_158, sLocal_156, &uLocal_213);
				Local_608 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_158, fLocal_609, sLocal_156) };
				fLocal_600 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_608);
				if (bLocal_607)
				{
					if (fLocal_600 < 75f)
					{
						HUD::REMOVE_BLIP(&iLocal_102);
						bLocal_607 = false;
					}
					if (!iLocal_203)
					{
						__LIB_0__.func_210("FM2_RIDEBK", 7500, 1);
						iLocal_204 = MISC::GET_GAME_TIMER();
						iLocal_203 = 1;
					}
					if (fLocal_600 > 300f)
					{
						func_105("FM2_RACEFAIL");
					}
				}
				else
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_204) > 20000)
					{
						iLocal_203 = 0;
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_105))
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_104))
						{
							HUD::REMOVE_BLIP(&iLocal_104);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_93, true)) > 22500f)
						{
							func_105("FM2_BIKLOST");
						}
					}
					else if (!bLocal_180)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_104))
						{
							iLocal_104 = __LIB_6__.func_825(iLocal_94, 0, 0);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_104, "BLIP_280" /* GXT: Friend */);
						}
					}
					if (fLocal_600 > 150f)
					{
						HUD::REMOVE_BLIP(&iLocal_102);
						HUD::REMOVE_BLIP(&iLocal_104);
						HUD::CLEAR_GPS_MULTI_ROUTE();
						iLocal_602 = (Local_603.f_0 - 1);
						bLocal_607 = true;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, 15f, 15f, 10f, false, true, 0) && !__LIB_0__.func_75())
				{
					if (MISC::GET_GAME_TIMER() - iLocal_601) > MISC::GET_RANDOM_INT_IN_RANGE(1200, 1400)
					{
						__LIB_5__.func_759(iLocal_89, "BREATHING", "JIMMY_NORMAL", 24);
						iLocal_601 = MISC::GET_GAME_TIMER();
					}
				}
				if ((((((FIRE::IS_EXPLOSION_IN_AREA(2, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(3f, 3f, 3f)) || FIRE::IS_EXPLOSION_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(1, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(4, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(7, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(10, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(3f, 3f, 3f))) || FIRE::IS_EXPLOSION_IN_AREA(25, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(3f, 3f, 3f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(3f, 3f, 3f)))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_89, 2);
				}
				if (bLocal_180)
				{
					if (!iLocal_178)
					{
						CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 5, 8);
						iLocal_179 = 0;
						iLocal_178 = 1;
					}
					if (iLocal_178 && !iLocal_179)
					{
						if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1811.9055f, -1195.1542f, 11.767201f, -1846.9055f, -1237.2794f, 19.517199f, 21.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1816.3652f, -1234.0394f, 7.017199f, -1859.1967f, -1241.1412f, 22.870972f, 57.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1856.6233f, -1201.8318f, 7.017204f, -1859.1967f, -1241.1412f, 22.870972f, 57.75f, false, true, 0))
					{
						if (iLocal_179)
						{
							HUD::REMOVE_BLIP(&iLocal_102);
							HUD::REMOVE_BLIP(&iLocal_104);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(12f, 5f, 4);
							func_210(4);
						}
					}
				}
				else
				{
					func_282();
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_124) < 10000f)
					{
						if (!iLocal_178)
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("family_2_mcs_2", 6, 8);
							iLocal_178 = 1;
						}
						else if (!iLocal_179 && CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
						{
							func_2("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
							iLocal_179 = 1;
						}
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_146, Global_19, true, true, 0))
						{
							HUD::REMOVE_BLIP(&iLocal_102);
							HUD::REMOVE_BLIP(&iLocal_104);
							iLocal_159++;
						}
					}
				}
				break;
			case 4:
				if (__LIB_6__.func_762(iLocal_93, 30f, 1, 1056964608, 0, 1, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), -1823.195f, -1213.5262f, 12.152f, -1, 0, 3);
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, 0);
					iLocal_159++;
				}
				break;
			case 5:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false) && !PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_159++;
				}
				break;
			case 6:
				if (SYSTEM::TIMERA() > 800)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(12f, 5f, 4);
					func_210(4);
				}
				break;
		}
		if (!PED::IS_PED_INJURED(iLocal_89) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
		{
			if (func_265(&uLocal_606, &iLocal_604, &uLocal_605))
			{
				func_105("FM2_JSPOOK");
			}
			if (!iLocal_181)
			{
				if (iLocal_159 < 4)
				{
					fLocal_598 = func_283(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iLocal_158, sLocal_156, &uLocal_213);
					fLocal_599 = func_283(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), iLocal_158, sLocal_156, &uLocal_213);
					fVar1 = (fLocal_599 - fLocal_598);
					func_281(fVar1, fLocal_600, fLocal_598 > fLocal_599);
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_89, Local_146, Global_19, false, true, 0))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_94, true, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_89, true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_94, true);
						if (!bLocal_180)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							iLocal_178 = 0;
							bLocal_180 = true;
						}
						iLocal_181 = 1;
					}
				}
				else if ((!bLocal_180 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, -1806.9874f, -1191.7622f, -42.982376f, -1854.4397f, -1247.8114f, 30.4819f, 90f, false, true, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 36f)
				{
					HUD::REMOVE_BLIP(&iLocal_102);
					HUD::REMOVE_BLIP(&iLocal_104);
					func_210(4);
				}
			}
			if (iLocal_181 || (iLocal_159 >= 4 && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94)))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_94, false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_89) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 2500f)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
						}
					}
					else
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_94, true);
					}
				}
			}
		}
		if (iLocal_159 < 4 && iLocal_159 > 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_93))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_105))
					{
						HUD::CLEAR_PRINTS();
						if (iLocal_547)
						{
							__LIB_35__.func_210(&Local_544);
						}
						iLocal_105 = __LIB_6__.func_825(iLocal_93, 0, 0);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						HUD::REMOVE_BLIP(&iLocal_102);
						iLocal_602 = (Local_603.f_0 - 1);
						HUD::CLEAR_GPS_MULTI_ROUTE();
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_104))
					{
						HUD::REMOVE_BLIP(&iLocal_104);
					}
				}
				else
				{
					iLocal_547 = 1;
					if (bLocal_607)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							fVar2 = __LIB_0__.func_301((fLocal_609 + 10000f), 20000f, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_158, sLocal_156));
							iLocal_102 = __LIB_0__.func_392(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_158, fVar2, sLocal_156), 1);
						}
					}
					else
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							HUD::CLEAR_PRINTS();
							iLocal_102 = __LIB_0__.func_392(Local_146, 0);
						}
						func_280(&Local_603, &iLocal_602);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_105))
					{
						HUD::REMOVE_BLIP(&iLocal_105);
					}
				}
			}
		}
	}
	func_278();
}

void func_278()//Position - 0x2ACD2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_93) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
	{
		switch (iLocal_160)
		{
			case 0:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false) && !__LIB_0__.func_661())
				{
					if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
					{
						__LIB_0__.func_151("FM2_BIKE1", -1);
					}
					else
					{
						__LIB_0__.func_151("FM2_BIKE1_KM", -1);
					}
					iLocal_160++;
				}
				break;
			case 1:
				if (!MISC::IS_PC_VERSION())
				{
					if ((!__LIB_0__.func_1("FM2_BIKE1") && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false)) && !__LIB_0__.func_661())
					{
						__LIB_0__.func_151("FM2_BIKE2", -1);
						iLocal_160++;
					}
				}
				else if (((!__LIB_0__.func_1("FM2_BIKE1") && !__LIB_0__.func_1("FM2_BIKE1_KM")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false)) && !__LIB_0__.func_661())
				{
					__LIB_0__.func_151("FM2_BIKE2", -1);
					iLocal_160++;
				}
				break;
			case 2:
				if ((!__LIB_0__.func_1("FM2_BIKE2") && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false)) && !__LIB_0__.func_661())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_93, joaat("bmx")) || VEHICLE::IS_VEHICLE_MODEL(iLocal_93, joaat("scorcher")))
					{
						__LIB_0__.func_151("FM2_BIKE3", -1);
					}
					iLocal_160++;
				}
				break;
			case 3:
				if (((!__LIB_0__.func_1("FM2_BIKE2") && !__LIB_0__.func_1("FM2_BIKE3")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false)) && !__LIB_0__.func_661())
				{
					__LIB_0__.func_151("FM2_BIKE4", -1);
					iLocal_160++;
				}
				break;
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false) || __LIB_0__.func_661())
		{
			if (MISC::IS_PC_VERSION())
			{
				if (__LIB_0__.func_1("FM2_BIKE1_KM"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if ((((__LIB_0__.func_1("FM2_BIKE1") || __LIB_0__.func_1("FM2_BIKE2")) || __LIB_0__.func_1("FM2_BIKE3")) || __LIB_0__.func_1("FM2_BIKE4")) || __LIB_0__.func_1("FM2_WHEELIE"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

void func_280(int iParam0, int iParam1)//Position - 0x2AEFF
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
	while (iVar0 < (*iParam0 - 1))
	{
		fVar4 = SYSTEM::VDIST2(Var3, *(iParam0[iVar0 /*3*/]));
		if (iVar1 == -1 || fVar4 < fVar2)
		{
			iVar1 = iVar0;
			fVar2 = fVar4;
		}
		iVar0++;
	}
	if (SYSTEM::VDIST2(Var3, *(iParam0[iVar1 + 1 /*3*/])) < SYSTEM::VDIST2(*(iParam0[iVar1 /*3*/]), *(iParam0[iVar1 + 1 /*3*/])))
	{
		iVar1++;
	}
	if (*iParam1 != iVar1)
	{
		if (*iParam1 >= 0 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *(iParam0[*iParam1 /*3*/])) > 25f)
		{
			HUD::CLEAR_GPS_MULTI_ROUTE();
			HUD::START_GPS_MULTI_ROUTE(156, true, false);
			iVar0 = iVar1;
			while (iVar0 <= (*iParam0 - 1))
			{
				HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(iParam0[iVar0 /*3*/]));
				iVar0++;
			}
			HUD::ADD_POINT_TO_GPS_MULTI_ROUTE(*(iParam0[(*iParam0 - 1) /*3*/]));
			HUD::SET_GPS_MULTI_ROUTE_RENDER(true);
		}
		*iParam1 = iVar1;
	}
}

void func_281(float fParam0, float fParam1, bool bParam2)//Position - 0x2B00A
{
	float fVar0;
	fParam0 = MISC::ABSF(fParam0);
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false) && !PED::IS_PED_INJURED(iLocal_89))
	{
		switch (iLocal_184)
		{
			case 0:
				iLocal_196 = 0;
				iLocal_197 = 0;
				iLocal_198 = 0;
				iLocal_199 = 0;
				iLocal_200 = 0;
				iLocal_187 = 0;
				iLocal_188 = 0;
				iLocal_189 = 0;
				if (bParam2 && fParam0 > 15000f)
				{
					iLocal_199 = 1;
				}
				if (!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_PIER", 8, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_184++;
						}
					}
					else
					{
						iLocal_184++;
					}
				}
				break;
			case 1:
				if (SYSTEM::TIMERA() > 2000)
				{
					if ((!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93))
					{
						SYSTEM::SETTIMERA(0);
						HUD::CLEAR_PRINTS();
						__LIB_35__.func_210(&Local_543);
						iLocal_184++;
					}
				}
				break;
			case 2:
				if ((SYSTEM::TIMERA() > 1000 && !__LIB_0__.func_75()) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
				{
					if (fVar0 < 35f)
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_RACEM", 8, 0, 0, 0))
						{
							iLocal_184++;
						}
					}
				}
				else if (SYSTEM::TIMERA() > 15000)
				{
					iLocal_184++;
				}
				break;
			case 3:
				if ((!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 35f)
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_TRIA", 8, 0, 0, 0))
					{
						iLocal_184++;
					}
				}
				break;
			case 4:
				if (bParam2)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Player in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				else
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Jimmy in front", 0.01f, 0.68f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_196)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Michael take over line should fire", 0.01f, 0.7f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_197)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("Jimmy take over line should fire", 0.01f, 0.72f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_199)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("bPlayerHasCheated", 0.01f, 0.74f, 0f, 0, 0, 255, 255);
				}
				if (iLocal_200)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("bPlayerHasBumpedJimmy", 0.01f, 0.76f, 0f, 0, 0, 255, 255);
				}
				if (bParam2 != bLocal_557)
				{
					iLocal_558 = MISC::GET_GAME_TIMER();
					if (bParam2)
					{
						iLocal_196 = 1;
						iLocal_197 = 0;
						iLocal_186 = (MISC::GET_GAME_TIMER() - 10000);
					}
					else
					{
						iLocal_196 = 0;
						iLocal_197 = 1;
						iLocal_186 = (MISC::GET_GAME_TIMER() - 10000);
					}
				}
				if (iLocal_197)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_558) < 4000 && fVar0 < 30f) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_STUFF", 8, 0, 0, 0))
						{
							iLocal_197 = 0;
						}
					}
					else
					{
						iLocal_197 = 0;
					}
				}
				if (iLocal_196)
				{
					if (((MISC::GET_GAME_TIMER() - iLocal_558) < 4000 && fVar0 < 30f) && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_PASS", 8, 0, 0, 0))
						{
							iLocal_196 = 0;
						}
					}
					else
					{
						iLocal_196 = 0;
					}
				}
				if (!iLocal_199 && !iLocal_200)
				{
					if (bParam2)
					{
						if (!__LIB_0__.func_75())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_559) > 10000)
							{
								if ((!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 35f)
								{
									if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
									{
										iLocal_559 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_559) < 5000 && (MISC::GET_GAME_TIMER() - iLocal_186) > 10000)
							{
								if ((!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 40f)
								{
									if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_FRONT", 8, 0, 0, 0))
									{
										iLocal_186 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_559) > 10000)
					{
						if (((!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 35f) && !bParam2)
						{
							if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_CLOSE", 8, 0, 0, 0))
							{
								iLocal_559 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if ((MISC::GET_GAME_TIMER() - iLocal_559) < 5000 && (MISC::GET_GAME_TIMER() - iLocal_186) > 10000)
					{
						if ((!__LIB_0__.func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)) && fVar0 < 40f)
						{
							if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_BEH", 8, 0, 0, 0))
							{
								iLocal_186 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if ((fVar0 < 5f && (MISC::GET_GAME_TIMER() - iLocal_187) > 1000) && (MISC::GET_GAME_TIMER() - iLocal_188) > 10000)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_93, iLocal_94))
						{
							iLocal_200 = 1;
						}
						iLocal_187 = MISC::GET_GAME_TIMER();
					}
					if ((MISC::GET_GAME_TIMER() - iLocal_189) > 10000)
					{
						if (!iLocal_199)
						{
							if (fParam1 > 50f)
							{
								iLocal_199 = 1;
							}
						}
					}
				}
				else if (iLocal_199)
				{
					if ((fVar0 < 35f && !__LIB_0__.func_75()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_CHEAT", 8, 0, 0, 0))
						{
							iLocal_189 = MISC::GET_GAME_TIMER();
							iLocal_199 = 0;
						}
					}
				}
				else if (iLocal_200)
				{
					if ((fVar0 < 35f && !__LIB_0__.func_75()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_HIT", 8, 0, 0, 0))
						{
							iLocal_188 = MISC::GET_GAME_TIMER();
							iLocal_200 = 0;
						}
					}
				}
				if (!iLocal_198)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, -1545.9755f, -937.1822f, 10.332039f, -1556.0676f, -928.8806f, 16.722149f, 3.75f, false, true, 0) && fVar0 < 35f)
					{
						iLocal_184++;
						iLocal_186 = MISC::GET_GAME_TIMER();
						iLocal_198 = 1;
					}
				}
				break;
			case 5:
				if ((fVar0 < 35f && !__LIB_0__.func_75()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_JEND", 8, 0, 0, 0))
					{
						iLocal_186 = MISC::GET_GAME_TIMER();
						iLocal_184++;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
			case 6:
				if ((fVar0 < 35f && !__LIB_0__.func_75()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_ROFF", 8, 0, 0, 0))
					{
						iLocal_184 = 4;
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_186) > 5000)
				{
					iLocal_184 = 4;
				}
				break;
		}
		bLocal_557 = bParam2;
	}
}

void func_282()//Position - 0x2B791
{
	if (!PED::IS_PED_INJURED(iLocal_89) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_94, false))
		{
			fLocal_598 = func_283(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iLocal_158, sLocal_156, &uLocal_213);
			fLocal_599 = func_283(ENTITY::GET_ENTITY_COORDS(iLocal_94, true), iLocal_158, sLocal_156, &uLocal_213);
			if (!iLocal_596)
			{
				if (!iLocal_597)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, -1572.4738f, -994.6667f, 2.017392f, -1515.6342f, -926.80914f, 29.12276f, 100f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, -1382.9421f, -1442.319f, 3.013994f, -1367.6382f, -1471.8793f, 8.426488f, 22.25f, false, true, 0))
					{
						if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_94) || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_94, iLocal_158, sLocal_156, 15f, 262144);
						iLocal_597 = 1;
					}
				}
				else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, -1572.4738f, -994.6667f, 2.017392f, -1515.6342f, -926.80914f, 29.12276f, 100f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, -1382.9421f, -1442.319f, 3.013994f, -1367.6382f, -1471.8793f, 8.426488f, 22.25f, false, true, 0))
				{
					if (VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_94) || VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_94, iLocal_158, sLocal_156, 15f, 786549);
					iLocal_597 = 0;
				}
				if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_89, true)) > 10000f && fLocal_599 > 10f) && (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_158, sLocal_156) && fLocal_599 < (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_158, sLocal_156) - 10f)))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(iLocal_89) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_94)) && !CAM::IS_SPHERE_VISIBLE(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_158, fLocal_599, sLocal_156), 4f))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_94, false, false);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_94, iLocal_158, sLocal_156, true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_94, fLocal_599);
						iLocal_596 = 1;
					}
				}
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_89, true)) < 9025f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_94, true, false);
					VEHICLE::SET_PLAYBACK_TO_USE_AI(iLocal_94, 786549);
					iLocal_596 = 0;
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_89, iLocal_94, 20000, -1, 2f, 1, 0);
		}
	}
}

float func_283(struct<3> Param0, int iParam1, char* sParam2, var uParam3)//Position - 0x2BA32
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
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, sParam2))
	{
		iVar2[0] = (*uParam3 - 1);
		iVar2[1] = (*uParam3 - 2);
		iVar2[2] = (*uParam3 - 3);
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
		iVar12 = __LIB_0__.func_310(iVar12, 0, (*uParam3 - 2));
		fVar18 = (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam1, sParam2) / IntToFloat((*uParam3 - 1)));
		fVar19 = ((SYSTEM::VDIST(*(uParam3[iVar12 /*3*/]), Var13) / SYSTEM::VDIST(*(uParam3[iVar12 /*3*/]), *(uParam3[iVar12 + 1 /*3*/]))) * fVar18);
		return (fVar19 + (IntToFloat(iVar12) * fVar18));
	}
	return 0f;
}

void func_286()//Position - 0x2BCD7
{
	int iVar0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PLAYER::SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
	if (iLocal_159 != 1000)
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f)
		{
			iLocal_163 = iLocal_159;
			iLocal_159 = 1000;
		}
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
		}
	}
	if (iLocal_117 && iLocal_159 > 1)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_595) < 2000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		else
		{
			iLocal_117 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_89) && !PED::IS_PED_INJURED(iLocal_90))
	{
		switch (iLocal_159)
		{
			case 0:
				iLocal_547 = 0;
				PED::REMOVE_PED_FROM_GROUP(iLocal_89);
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_158, sLocal_156);
				STREAMING::REQUEST_ANIM_DICT("veh@bicycle@mountain_f@front@base");
				iLocal_159++;
				iLocal_165 = 0;
				iLocal_166 = 0;
				iLocal_164 = 4;
				iLocal_594 = 0;
				iLocal_595 = MISC::GET_GAME_TIMER();
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
				if (iLocal_155)
				{
					iLocal_159 = -1;
				}
				break;
			case -1:
				func_102();
				if ((!PED::IS_PED_INJURED(iLocal_90) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1105.2411f, -1697.0247f, 3.3678f, 2f, joaat("prop_table_03_chr"), false)) && PED::IS_PED_USING_SCENARIO(iLocal_90, "PROP_HUMAN_SEAT_CHAIR"))
				{
					iLocal_155 = 0;
					iLocal_159 = 1;
				}
				break;
			case 1:
				iLocal_102 = __LIB_0__.func_392(Local_133, 0);
				if (bLocal_182)
				{
					__LIB_0__.func_325("FM2_BK2BIKE", 7500, 1);
					SYSTEM::SETTIMERA(0);
				}
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, 40000, 4, 2);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), 40000, 4, 2);
				iLocal_591 = 0;
				if (__LIB_0__.func_75())
				{
					Var1 = { __LIB_0__.func_390() };
					if (!MISC::ARE_STRINGS_EQUAL("FAM2_HIRE1", &Var1))
					{
						__LIB_6__.func_833();
					}
				}
				iLocal_593 = 0;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				}
				iLocal_159++;
				break;
			case 2:
				if (Global_112433)
				{
					while (Global_112433)
					{
						SYSTEM::WAIT(0);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, true))
				{
					if (!__LIB_0__.func_75())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_95, false))
						{
							TASK::TASK_LEAVE_VEHICLE(iLocal_89, iLocal_95, 0);
						}
						else
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_89, 0, 0);
						}
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					iLocal_159++;
				}
				break;
			case 3:
				if (!PED::IS_PED_INJURED(iLocal_89) && SYSTEM::TIMERA() > 3000)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_89, PLAYER::PLAYER_PED_ID(), 60f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
						{
							TASK::CLEAR_PED_TASKS(iLocal_89);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_520);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_520);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_89, iLocal_520);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_520);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_89))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_89, PLAYER::PLAYER_PED_ID(), -1, 16, 2);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_90))
					{
						if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(iLocal_90, true)) > (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_90, true)) + 0.3f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1099.7557f, -1700.7261f, 3.349046f, -1111.5175f, -1683.9618f, 5.340389f, 7.25f, false, true, 0)) || SYSTEM::TIMERA() > 6000)
						{
							TASK::CLEAR_PED_TASKS(iLocal_89);
							iLocal_159++;
						}
					}
				}
				break;
			case 4:
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_89, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1099.7557f, -1700.7261f, 3.349046f, -1111.5175f, -1683.9618f, 5.340389f, 7.25f, false, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_95, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1102.1871f, -1697.891f, 3.3562f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_89, iVar2);
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_89, 1f);
					iLocal_159++;
				}
				break;
			case 5:
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_89, 1f);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1099.7557f, -1700.7261f, 3.349046f, -1111.5175f, -1683.9618f, 5.340389f, 7.25f, false, true, 0))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						__LIB_6__.func_771();
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_HIRE3", 8, 0, 0, 0))
						{
							HUD::CLEAR_PRINTS();
							TASK::TASK_LOOK_AT_ENTITY(iLocal_90, PLAYER::PLAYER_PED_ID(), 30000, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_90, 10000, 0, 2);
							HUD::REMOVE_BLIP(&iLocal_102);
							SYSTEM::SETTIMERA(0);
							iLocal_159++;
						}
					}
					else
					{
						iLocal_159++;
					}
				}
				break;
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[iLocal_164], false) && !PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_96[iLocal_164], false))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_96[iLocal_164], -1, false))
					{
						if (iLocal_593)
						{
							TASK::CLEAR_PED_TASKS(iLocal_89);
							iLocal_593 = 0;
						}
						if (iLocal_164 == 4)
						{
							iLocal_164 = 1;
						}
						else if (iLocal_164 == 1)
						{
							iLocal_164 = 4;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_93))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_89, 1f);
				}
				STREAMING::REQUEST_ANIM_DICT("veh@bicycle@mountain_f@front@base");
				if (STREAMING::HAS_ANIM_DICT_LOADED("veh@bicycle@mountain_f@front@base"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[iLocal_164], false))
					{
						if (!iLocal_593 && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_89, -1099.7557f, -1700.7261f, 3.349046f, -1111.5175f, -1683.9618f, 5.340389f, 9.25f, false, true, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_96[iLocal_164], -1099.7557f, -1700.7261f, 3.349046f, -1111.5175f, -1683.9618f, 5.340389f, 9.25f, false, true, 0)))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_96[iLocal_164], -1, -1, 2f, 1, 0);
							TASK::TASK_STAND_STILL(0, 2000);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_96[iLocal_164], -1099.6821f, -1694.0726f, 3.2758f, 5f, 0, joaat("cruiser"), 786471, 2f, 3f);
							TASK::CLOSE_SEQUENCE_TASK(iVar3);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_89, iVar3);
							TASK::CLEAR_SEQUENCE_TASK(&iVar3);
							iLocal_593 = 1;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_96[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[iVar0], false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89, iLocal_96[iVar0]))
							{
								iLocal_94 = iLocal_96[iVar0];
								PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_89, MISC::GET_HASH_KEY("MISS_FAMILY2_JIMMY_BICYCLE"));
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_94, false);
								func_287(0, 1, 20);
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
								{
									__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_JBIKE", 8, 0, 0, 0);
								}
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_89, 1);
								iLocal_165 = iVar0;
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_94, false);
							}
						}
						iVar0++;
					}
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, false))
				{
					func_105("FM2_JSPOOK");
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_93))
				{
					iVar0 = 0;
					while (iVar0 < iLocal_96)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_96[iVar0], false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_96[iVar0], true))
							{
								iLocal_93 = iLocal_96[iVar0];
								func_287(0, 1, 20);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_96[iVar0], false);
								HUD::CLEAR_PRINTS();
								iLocal_166 = iVar0;
								if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), -1108.6643f, -1691.6234f, 3.3746f) > 5f && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, false)) && iLocal_593)
								{
									iLocal_593 = 0;
								}
							}
						}
						iVar0++;
					}
					if (!iLocal_591)
					{
						if (SYSTEM::TIMERA() > 1000)
						{
							if (!__LIB_0__.func_75() || MISC::GET_PROFILE_SETTING(203) == 0)
							{
								__LIB_0__.func_210("FM2_CHSEBIKE", 7500, 1);
								iLocal_591 = 1;
							}
						}
					}
				}
				else
				{
					if (!iLocal_594)
					{
						if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_HIRE4", 8, 0, 0, 0))
						{
							iLocal_594 = 1;
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
					{
						iLocal_93 = 0;
					}
				}
				if (((((!__LIB_0__.func_75() && ENTITY::DOES_ENTITY_EXIST(iLocal_94)) && ENTITY::DOES_ENTITY_EXIST(iLocal_93)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_89, iLocal_94))
				{
					iLocal_96[iLocal_166] = 0;
					iLocal_96[iLocal_165] = 0;
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 3);
					iLocal_159++;
				}
				break;
			case 7:
				if (SYSTEM::TIMERA() > 3000)
				{
					func_210(3);
				}
				break;
			case 1000:
				if (!HUD::DOES_BLIP_EXIST(iLocal_104))
				{
					if (!bLocal_176)
					{
						HUD::CLEAR_PRINTS();
						__LIB_6__.func_771();
						__LIB_0__.func_325("FM2_JIMGB", 7500, 1);
					}
					iLocal_104 = __LIB_6__.func_850(iLocal_89, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_102))
				{
					if (HUD::GET_BLIP_ALPHA(iLocal_102) != 0)
					{
						HUD::SET_BLIP_ALPHA(iLocal_102, 0);
					}
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 400f || (!PED::IS_PED_INJURED(iLocal_90) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_90, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 900f))
				{
					iLocal_159 = iLocal_163;
					if (HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						if (HUD::GET_BLIP_ALPHA(iLocal_102) != 255)
						{
							HUD::SET_BLIP_ALPHA(iLocal_102, 255);
						}
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_104))
					{
						HUD::REMOVE_BLIP(&iLocal_104);
					}
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 22500f)
				{
					func_105("FM2_JIMAB");
				}
				break;
		}
		if (!iLocal_592)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false) && !PED::IS_PED_INJURED(iLocal_89)) && PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_94, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_94, false);
				iLocal_592 = 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_93) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, false))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			AUDIO::START_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
		}
	}
}

int func_287(int iParam0, int iParam1, int iParam2)//Position - 0x2C722
{
	if (__LIB_0__.func_183(iParam0) == 3)
	{
		return 0;
	}
	if (__LIB_0__.func_183(iParam0) == 4)
	{
		return 0;
	}
	return __LIB_11__.func_976(__LIB_0__.func_183(iParam0), 0, iParam1, iParam2, 0);
}

int func_299(bool bParam0)//Position - 0x2D4EF
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), iVar1, true);
		__LIB_0__.func_4(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	__LIB_11__.func_869(27, 1);
	return 1;
}

void func_319()//Position - 0x2DA20
{
	bool bVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_108))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_120) < 2500f)
			{
				STREAMING::REQUEST_MODEL(joaat("prop_cs_office_chair"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_office_chair")))
				{
					iLocal_108 = OBJECT::CREATE_OBJECT(joaat("prop_cs_office_chair"), -809.4098f, 172.7913f, 75.7732f, true, true, false);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_108, 0f, 0f, 0.3857f, 0.9226f);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_office_chair"));
				}
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_120) > 5625f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_108))
		{
			OBJECT::DELETE_OBJECT(&iLocal_108);
		}
	}
	func_375();
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_133) < 1000f)
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	if (!PED::IS_PED_INJURED(iLocal_89))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, false))
		{
			PED::SET_PED_RESET_FLAG(iLocal_89, 60, true);
		}
		switch (iLocal_159)
		{
			case 0:
				iLocal_590 = 0;
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
				{
					__LIB_40__.func_944(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_98, Local_126, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_98, fLocal_127);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
				{
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_98, true);
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_89))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_89, sLocal_157, 0, 8, -1);
				}
				bLocal_175 = false;
				bLocal_176 = false;
				CAM::DO_SCREEN_FADE_IN(500);
				AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_89) && !ENTITY::IS_ENTITY_VISIBLE(iLocal_89))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_89, true, false);
				}
				if (iLocal_155)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
					iLocal_155 = 0;
				}
				iLocal_159++;
				break;
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
				{
					__LIB_40__.func_633(&iLocal_97, 15, -812.4639f, 159.7855f, 71.0588f, 113.1515f, 1, 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
				{
					__LIB_40__.func_944(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_97) && ENTITY::DOES_ENTITY_EXIST(iLocal_98))
				{
					iLocal_159++;
				}
				break;
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_89) && !PED::IS_PED_IN_GROUP(iLocal_89))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_89) > 13)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_98) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_95) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
						}
						TASK::REMOVE_WAYPOINT_RECORDING(sLocal_157);
					}
				}
				if (!iLocal_590)
				{
					if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.1541f, 177.64313f, 75.12778f, -819.79114f, 176.99915f, 70.62586f, 3.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -795.1501f, 176.5434f, 74.135185f, -795.53033f, 177.55011f, 71.83518f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -793.7302f, 181.55104f, 74.135185f, -792.5385f, 182.00015f, 71.83518f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.4019f, 167.6163f, 79.10717f, -801.4336f, 165.46394f, 76.0724f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.89075f, 185.84567f, 71.43164f, -807.4306f, 187.2417f, 74.226456f, 1.75f, false, true, 0))
					{
						iLocal_590 = 1;
					}
				}
				bVar0 = false;
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_98, false)) || !ENTITY::DOES_ENTITY_EXIST(iLocal_98))
				{
					bVar0 = true;
				}
				if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 15f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && iLocal_590)
				{
					if (!bVar0)
					{
						TASK::CLEAR_PED_TASKS(iLocal_89);
					}
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_89, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_89, 0);
					iLocal_159++;
				}
				break;
			case 3:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_89))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_89) > 13)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_98) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_89, iLocal_98, -1, 0, 1f, 1, 0);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_95) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_89, iLocal_95, -1, 0, 1f, 1, 0);
							PED::FORCE_PED_MOTION_STATE(iLocal_89, joaat("MotionState_Walk"), false, 0, false);
						}
						TASK::REMOVE_WAYPOINT_RECORDING(sLocal_157);
					}
				}
				if (func_160(iLocal_89))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
					{
						if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_95 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, true, true);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_95, true);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
							__LIB_0__.func_409(iLocal_95, 209);
						}
					}
					else
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, false))
						{
							bLocal_175 = true;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
						{
							if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							{
								iLocal_95 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, true, true);
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_95, true);
								__LIB_0__.func_409(iLocal_95, 209);
							}
						}
						else
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_95);
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						bLocal_175 = false;
					}
					if (bLocal_175)
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_102))
						{
							if (!__LIB_0__.func_78(HUD::GET_BLIP_COORDS(iLocal_102), Local_131, 0))
							{
								HUD::REMOVE_BLIP(&iLocal_102);
							}
						}
						else
						{
							iLocal_102 = __LIB_0__.func_392(Local_131, 1);
						}
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						if (!__LIB_0__.func_78(HUD::GET_BLIP_COORDS(iLocal_102), -1103.2129f, -1695.1508f, 3.3416f, 0))
						{
							HUD::REMOVE_BLIP(&iLocal_102);
						}
					}
					else
					{
						iLocal_102 = __LIB_0__.func_392(-1103.2129f, -1695.1508f, 3.3416f, 0);
					}
					if (bLocal_175)
					{
						if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && ENTITY::IS_ENTITY_AT_COORD(iLocal_95, Local_131, 3f, 3f, 2f, true, true, 0)) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95))
						{
							HUD::REMOVE_BLIP(&iLocal_102);
							iLocal_159++;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1103.2129f, -1695.1508f, 3.3416f, 6f, 6f, 2f, true, true, 0))
					{
						func_210(2);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_104))
					{
						HUD::CLEAR_PRINTS();
						HUD::REMOVE_BLIP(&iLocal_104);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						HUD::REMOVE_BLIP(&iLocal_102);
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_104))
					{
						HUD::CLEAR_PRINTS();
						if (__LIB_0__.func_75())
						{
							Local_556 = { __LIB_0__.func_389() };
							__LIB_6__.func_833();
							iLocal_555 = 1;
						}
						__LIB_6__.func_771();
						if (!bLocal_176)
						{
							__LIB_0__.func_325("FM2_JIMGB", 7500, 1);
						}
						iLocal_104 = __LIB_6__.func_850(iLocal_89, 0, 145);
					}
				}
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == 0)
				{
					if (!__LIB_0__.func_75() && !iLocal_183)
					{
						__LIB_0__.func_325("FM2_BIGGERV", 7500, 1);
						iLocal_183 = 1;
					}
				}
				else if (!__LIB_0__.func_75() && iLocal_183)
				{
					HUD::CLEAR_PRINTS();
					iLocal_183 = 0;
				}
				break;
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
				{
					if (__LIB_6__.func_762(iLocal_95, 4f, 1, 1056964608, 0, 1, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_95, false))
						{
							if (__LIB_0__.func_77(0))
							{
								__LIB_6__.func_849(1);
							}
							__LIB_6__.func_833();
							TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_95, 10f, 5f, 0f), 20000, 4, 3);
							if (!__LIB_0__.func_75())
							{
								if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
								{
									iLocal_555 = 0;
									TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, 30000, 4, 2);
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_LEAVE_VEHICLE(0, iLocal_95, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1102.1871f, -1697.891f, 3.3562f, 1f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_89, iVar1);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									PED::REMOVE_PED_FROM_GROUP(iLocal_89);
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 4);
									iLocal_159 = 8;
								}
							}
						}
						else
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 3);
							__LIB_0__.func_409(0, 209);
							func_210(2);
						}
					}
				}
				break;
			case 5:
				if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_HIRE1", 8, 0, 0, 0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, 20000, 4, 3);
					SYSTEM::SETTIMERA(0);
					iLocal_159 = 8;
				}
				break;
			case 8:
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
				__LIB_0__.func_409(0, 209);
				func_210(2);
				break;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, false))
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		func_150();
	}
}

void func_375()//Position - 0x33D2A
{
	bool bVar0;
	struct<6> Var1;
	if ((((!PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, false) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 225f) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_89, 15f, 15f, 1f, false, true, 0)) && !__LIB_0__.func_300())
	{
		bVar0 = true;
	}
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, false)) && PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_95, false)) && !__LIB_0__.func_300())
	{
		bVar0 = true;
	}
	if (!iLocal_588)
	{
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, false)) && PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_95, false))
		{
			if (iLocal_586 == 0)
			{
				if (MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */))
				{
					fLocal_150 = (fLocal_150 + MISC::GET_FRAME_TIME());
				}
				if (fLocal_150 > 7f)
				{
					iLocal_588 = 1;
				}
			}
			else if (iLocal_586 == 4)
			{
				if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 8)
				{
					iLocal_586++;
					iLocal_588 = 1;
				}
			}
		}
	}
	else if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, false))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && !PED::IS_PED_IN_VEHICLE(iLocal_89, iLocal_95, false)))
	{
		iLocal_588 = 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_89, true)) < 15f)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_589)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_168) > 7500)
					{
						iLocal_589 = 1;
						bVar0 = false;
					}
				}
			}
		}
	}
	if (iLocal_589)
	{
		bVar0 = false;
		if (!__LIB_0__.func_75())
		{
			__LIB_5__.func_759(iLocal_88, "GENERIC_SHOCKED_MED", "Jimmy", 3);
			iLocal_169 = MISC::GET_GAME_TIMER();
			iLocal_589 = 0;
		}
	}
	if (!iLocal_588)
	{
		if (iLocal_161 < 7 && !MISC::ARE_STRINGS_EQUAL(&Local_556, "FAM2_DRIV2"))
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_95, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_95) > 30f)
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_95))
					{
						__LIB_6__.func_833();
						iLocal_555 = 0;
						iLocal_554 = 0;
						StringCopy(&Local_556, "", 24);
						iLocal_161 = 7;
					}
				}
				if ((Global_75250[5 /*9*/].f_1 - iLocal_587) > 3)
				{
					__LIB_6__.func_833();
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_161 = 7;
				}
			}
		}
		switch (iLocal_161)
		{
			case 0:
				if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_BEACH", 8, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 7f, 3);
					fLocal_150 = 0f;
					iLocal_587 = Global_75250[5 /*9*/].f_1;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					iLocal_162 = MISC::GET_GAME_TIMER();
					StringCopy(&Local_556, "", 24);
				}
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_162) > 2000)
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_102))
					{
						iLocal_102 = __LIB_0__.func_392(Local_133, 0);
					}
					else if (!__LIB_0__.func_75())
					{
						__LIB_0__.func_325("FM2_BK2BIKE", 7500, 1);
						iLocal_162 = MISC::GET_GAME_TIMER();
						iLocal_161++;
					}
				}
				break;
			case 2:
				if (((MISC::GET_GAME_TIMER() - iLocal_162) > 2000 && MISC::GET_PROFILE_SETTING(203) == 0) || (MISC::GET_GAME_TIMER() - iLocal_162) > 6000)
				{
					iLocal_161++;
				}
				break;
			case 3:
				if (__LIB_0__.func_294())
				{
					func_214("FAM2_WALK", bVar0);
				}
				else
				{
					func_214("FAM2_WALK2", bVar0);
				}
				if ((!__LIB_0__.func_75() && !iLocal_555) && iLocal_554)
				{
					fLocal_150 = 0f;
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = MISC::GET_GAME_TIMER();
				}
				break;
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_162) > 3000)
				{
					iLocal_161++;
				}
				break;
			case 5:
				if (__LIB_0__.func_294())
				{
					func_214("FAM2_DRIVB", bVar0);
				}
				else
				{
					func_214("FAM2_DRIVE", bVar0);
				}
				if ((!__LIB_0__.func_75() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
					iLocal_162 = MISC::GET_GAME_TIMER();
				}
				break;
			case 6:
				break;
			case 7:
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_89, false) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					bVar0 = false;
				}
				func_214("FAM2_DRIV2", bVar0);
				if ((!__LIB_0__.func_75() && !iLocal_555) && iLocal_554)
				{
					iLocal_161++;
					iLocal_555 = 0;
					iLocal_554 = 0;
					StringCopy(&Local_556, "", 24);
				}
				break;
		}
	}
	else
	{
		switch (iLocal_586)
		{
			case 0:
				if (__LIB_0__.func_75())
				{
					Local_556 = { __LIB_0__.func_389() };
					__LIB_6__.func_833();
					iLocal_555 = 1;
				}
				iLocal_586++;
				break;
			case 1:
				if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_JAZZ", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_586++;
				}
				break;
			case 2:
				if (SYSTEM::TIMERB() > 1000)
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(8);
					SYSTEM::SETTIMERB(0);
					iLocal_586++;
				}
				break;
			case 3:
				if (!__LIB_0__.func_75())
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_JAZZ2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_586++;
					}
				}
				break;
			case 4:
				iLocal_588 = 0;
				break;
			case 5:
				if ((__LIB_0__.func_75() && !__LIB_11__.func_869("FAM2_JAZZ")) && !__LIB_11__.func_869("FAM2_JAZZ2"))
				{
					Var1 = { __LIB_0__.func_389() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1) && !MISC::ARE_STRINGS_EQUAL("NULL", &Var1))
					{
						Local_556 = { Var1 };
					}
					__LIB_6__.func_833();
					iLocal_555 = 1;
				}
				if (!__LIB_0__.func_75())
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_JAZZ3", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_586++;
					}
				}
				break;
			case 6:
				if (!__LIB_0__.func_75())
				{
					if (__LIB_35__.func_536(&Local_549, cLocal_202, "FAM2_JAZZ4", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_586++;
					}
				}
				break;
			case 7:
				iLocal_588 = 0;
				break;
			}
	}
}

void func_378()//Position - 0x343BB
{
	switch (iLocal_159)
	{
		case 0:
			AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", false);
			iLocal_897 = 0;
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("family_2_int", 8);
				iLocal_159 = -1;
			}
			else
			{
				iLocal_159++;
			}
			break;
		case -1:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				func_382("Michael", __LIB_6__.func_757(0), 32);
				iLocal_159 = 1;
			}
			break;
		case 1:
			if (__LIB_0__.func_90())
			{
				if (__LIB_10__.func_0("family_2_int"))
				{
					__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_89, "Jimmy", 2, __LIB_2__.func_108(14), 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_89))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_89, "Jimmy", 0, 0, 0);
					}
					func_207(1);
					__LIB_11__.func_862();
					HUD::CLEAR_HELP(true);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					STREAMING::END_SRL();
					iLocal_159++;
				}
				else
				{
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_159 = 0;
				}
			}
			break;
		case 2:
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			MISC::SET_WIND(0.1f);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
			{
				OBJECT::DELETE_OBJECT(&iLocal_109);
				ENTITY::REMOVE_MODEL_HIDE(Local_514, 1f, joaat("v_ilev_mm_doorm_l"), false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
			{
				OBJECT::DELETE_OBJECT(&iLocal_110);
				ENTITY::REMOVE_MODEL_HIDE(Local_515, 1f, joaat("v_ilev_mm_doorm_r"), false);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, false, true);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, false, true);
			}
			STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_109, -1000f, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_109);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_110, -1000f, true);
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_110);
			}
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f);
			__LIB_32__.func_723(&Local_80, 0, 0, 2000, 1, 0, 0, 1);
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			iLocal_159++;
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_89))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy", 0)))
				{
					iLocal_89 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_89, Local_122, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_89, fLocal_123);
					PED::FORCE_PED_MOTION_STATE(iLocal_89, joaat("MotionState_Walk"), true, 1, false);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_89, sLocal_157, 0, 8, -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					func_98(iLocal_89);
				}
			}
			if (!iLocal_897)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					SYSTEM::SETTIMERA(0);
					if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_120, 30f, 2))
					{
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 5000)
						{
							CAM::DO_SCREEN_FADE_OUT(0);
							SYSTEM::WAIT(0);
						}
						STREAMING::NEW_LOAD_SCENE_STOP();
						iLocal_897 = 1;
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
			{
				if (__LIB_12__.func_180(0, 1, Local_126, 100f))
				{
					__LIB_20__.func_166(0, 1);
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				__LIB_40__.func_944(&iLocal_98, 0, Local_126, fLocal_127, 1, 1);
			}
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
				__LIB_11__.func_715();
				func_210(1);
				HUD::REQUEST_ADDITIONAL_TEXT("FAMILY2", 0);
				HUD::REQUEST_ADDITIONAL_TEXT(cLocal_202, 6);
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					func_98(iLocal_89);
				}
				RECORDING::REPLAY_STOP_EVENT();
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_113))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_113);
				}
				iLocal_898 = OBJECT::GET_RAYFIRE_MAP_OBJECT(-809.962f, 170.919f, 75.7407f, 3f, "des_tvsmash");
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_898))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_898, 9);
				}
				if (CAM::IS_SCREEN_FADED_OUT() || CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (!PED::IS_PED_INJURED(iLocal_89))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_89, Local_122, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_89, fLocal_123);
						PED::FORCE_PED_MOTION_STATE(iLocal_89, joaat("MotionState_Walk"), true, 1, false);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_89, sLocal_157, 3, 0, -1);
					}
					SYSTEM::WAIT(0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 1, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
				}
				__LIB_0__.func_313(24);
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", true);
				CAM::SET_WIDESCREEN_BORDERS(false, 0);
				CAM::DO_SCREEN_FADE_IN(500);
			}
			break;
	}
}

void func_382(char* sParam0, int iParam1, int iParam2)//Position - 0x349E1
{
	int iVar0;
	struct<14> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	uVar2 = 9;
	uVar8 = { __LIB_18__.func_180(iParam1, iParam2) };
	iVar9 = 0;
	if (uVar8[2] == -99 && uVar8[0] == -99)
	{
		iVar9 = 1;
	}
	iVar6 = 0;
	while (iVar6 <= 14)
	{
		iVar0 = iVar6;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar2 = { __LIB_18__.func_247(iParam1, uVar8[iVar6]) };
				iVar7 = 0;
				while (iVar7 <= 8)
				{
					iVar3 = iVar7;
					iVar4 = __LIB_0__.func_40(iVar3);
					iVar5 = __LIB_0__.func_29(iVar4);
					if (uVar2[iVar7] != iVar5)
					{
						Var1 = { func_15(iParam1, 14, uVar2[iVar7], -1) };
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar7++;
				}
			}
			else
			{
				Var1 = { func_15(iParam1, iVar0, uVar8[iVar6], -1) };
				if (((iVar6 == 2 || iVar6 == 0) && iVar9) || uVar8[iVar6] == -99)
				{
					Var1.f_3 = Global_113386.f_2363.f_539[Var1.f_5 /*65*/].f_13[iVar6];
					Var1.f_4 = Global_113386.f_2363.f_539[Var1.f_5 /*65*/][iVar6];
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, __LIB_0__.func_33(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar6++;
	}
}

int func_389(bool bParam0, bool bParam1)//Position - 0x37684
{
	if (bParam0)
	{
		func_473(PLAYER::PLAYER_PED_ID(), 51);
		if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) || !bParam1)
		{
			func_390(PLAYER::PLAYER_PED_ID(), 12, 51, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			return 1;
		}
	}
	else
	{
		func_473(PLAYER::PLAYER_PED_ID(), 32);
		if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()) || !bParam1)
		{
			func_390(PLAYER::PLAYER_PED_ID(), 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
			return 1;
		}
	}
	return 0;
}

int func_390(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x37717
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
		Global_78130[1 /*14*/] = { func_15(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__.func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__.func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__.func_795(iParam0, 9);
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
			iVar7 = __LIB_6__.func_788(iParam0, 1);
			if (!__LIB_6__.func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__.func_788(iParam0, 0);
			if (!__LIB_6__.func_779(iVar10, 14, iVar8, -1) && !__LIB_6__.func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__.func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__.func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { func_15(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__.func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { func_15(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_400(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_390(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__.func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__.func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_400(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_390(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { func_15(iVar10, iVar0, func_399(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_398(iParam0, iVar10, &iVar4, 1))
							{
								func_390(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_390(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_15(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_390(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_15(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_390(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_15(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_390(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_15(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_390(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_15(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_390(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__.func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { func_15(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_400(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_390(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__.func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_400(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_390(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_400(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_390(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_393(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_398(iParam0, iVar10, &iVar4, 0))
		{
			func_390(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_391(iParam0, iVar10, &iVar4))
		{
			func_390(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_391(int iParam0, int iParam1, int iParam2)//Position - 0x37F27
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_392(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_392(int iParam0, int iParam1, int iParam2)//Position - 0x37FB3
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
	Global_78130[1 /*14*/] = { func_15(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_392(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_392(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { func_15(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_392(iParam0, 14, iVar4))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { func_15(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_392(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_393(int iParam0, int iParam1, int iParam2)//Position - 0x3820D
{
	int iVar0;
	int iVar1;
	if (iParam0 == joaat("Player_Zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("Player_One"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("Player_Two"))
	{
		iVar0 = 4;
	}
	if (func_395(iParam0, 12, iVar0))
	{
		if (__LIB_0__.func_20(iParam0, iParam1, iParam2))
		{
			iVar1 = __LIB_0__.func_19(iParam0);
			if (iParam1 == 3)
			{
				Global_113386.f_2363.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_113386.f_2363.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

bool func_395(int iParam0, int iParam1, int iParam2)//Position - 0x38375
{
	Global_78130[1 /*14*/] = { func_15(iParam0, iParam1, iParam2, -1) };
	return BitTest(Global_78130[1 /*14*/].f_6, 2);
}

int func_398(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38A3A
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_392(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_399(int iParam0, int iParam1, int iParam2)//Position - 0x38AD0
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
				if (func_392(iParam0, iParam1, iVar0))
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
				if (func_392(iParam0, iParam1, iVar1))
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
				return __LIB_6__.func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__.func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_400(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x38B71
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
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = __LIB_6__.func_795(iParam0, 1);
				iVar0 = __LIB_0__.func_24(iParam1, iParam3, iVar1);
				break;
			case 1:
				iVar2 = __LIB_6__.func_795(iParam0, 2);
				iVar0 = __LIB_0__.func_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		__LIB_0__.func_211(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		__LIB_0__.func_212(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (__LIB_0__.func_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("Player_Zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									case 37:
										iVar0 = 17;
										break;
									case 38:
										iVar0 = 18;
										break;
									case 39:
										iVar0 = 18;
										break;
									case 40:
										iVar0 = 19;
										break;
									case 41:
										iVar0 = 19;
										break;
									case 42:
										iVar0 = 20;
										break;
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 135, 150))
									{
										iVar0 = func_403(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									case 61:
										iVar0 = 3;
										break;
									case 16:
										iVar0 = 1;
										break;
									case 114:
										iVar0 = 15;
										break;
									case 115:
										iVar0 = 17;
										break;
									case 116:
										iVar0 = 16;
										break;
									case 117:
										iVar0 = 18;
										break;
									case 118:
										iVar0 = 20;
										break;
									case 119:
										iVar0 = 19;
										break;
									case 125:
										iVar0 = 21;
										break;
									case 120:
										iVar0 = 22;
										break;
									case 124:
										iVar0 = 23;
										break;
									case 126:
										iVar0 = 24;
										break;
									case 121:
										iVar0 = 25;
										break;
									case 127:
										iVar0 = 26;
										break;
									case 128:
										iVar0 = 27;
										break;
									case 85:
										iVar0 = 6;
										break;
									case 77:
										iVar0 = 7;
										break;
									case 78:
										iVar0 = 8;
										break;
									case 79:
										iVar0 = 9;
										break;
									case 80:
										iVar0 = 10;
										break;
									case 81:
										iVar0 = 11;
										break;
									case 82:
										iVar0 = 12;
										break;
									case 83:
										iVar0 = 13;
										break;
									case 84:
										iVar0 = 14;
										break;
									case 21:
										iVar0 = 31;
										break;
									case 22:
										iVar0 = 30;
										break;
									case 23:
										iVar0 = 29;
										break;
									case 24:
										iVar0 = 28;
										break;
									case 25:
										iVar0 = 33;
										break;
									case 26:
										iVar0 = 35;
										break;
									case 27:
										iVar0 = 34;
										break;
									case 28:
										iVar0 = 32;
										break;
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			case joaat("Player_One"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									case 90:
										iVar0 = 1;
										break;
									case 268:
										iVar0 = 3;
										break;
									case 269:
										iVar0 = 5;
										break;
									case 270:
										iVar0 = 4;
										break;
									case 271:
										iVar0 = 6;
										break;
									case 272:
										iVar0 = 8;
										break;
									case 273:
										iVar0 = 7;
										break;
									case 279:
										iVar0 = 9;
										break;
									case 274:
										iVar0 = 10;
										break;
									case 278:
										iVar0 = 11;
										break;
									case 280:
										iVar0 = 12;
										break;
									case 275:
										iVar0 = 13;
										break;
									case 281:
										iVar0 = 14;
										break;
									case 282:
										iVar0 = 15;
										break;
									case 107:
										iVar0 = 16;
										break;
									case 108:
										iVar0 = 17;
										break;
									case 109:
										iVar0 = 18;
										break;
									case 110:
										iVar0 = 19;
										break;
									case 111:
										iVar0 = 20;
										break;
									case 112:
										iVar0 = 21;
										break;
									case 113:
										iVar0 = 22;
										break;
									case 114:
										iVar0 = 23;
										break;
									case 115:
										iVar0 = 24;
										break;
									case 116:
										iVar0 = 25;
										break;
									case 117:
										iVar0 = 52;
										break;
									case 118:
										iVar0 = 27;
										break;
									case 119:
										iVar0 = 28;
										break;
									case 120:
										iVar0 = 29;
										break;
									case 121:
										iVar0 = 30;
										break;
									case 122:
										iVar0 = 31;
										break;
									case 296:
										iVar0 = 32;
										break;
									case 297:
										iVar0 = 33;
										break;
									case 298:
										iVar0 = 34;
										break;
									case 299:
										iVar0 = 35;
										break;
									case 300:
										iVar0 = 36;
										break;
									case 301:
										iVar0 = 37;
										break;
									case 302:
										iVar0 = 38;
										break;
									case 309:
										iVar0 = 39;
										break;
									case 310:
										iVar0 = 40;
										break;
									case 311:
										iVar0 = 41;
										break;
									case 312:
										iVar0 = 42;
										break;
									case 313:
										iVar0 = 43;
										break;
									case 314:
										iVar0 = 44;
										break;
									case 315:
										iVar0 = 45;
										break;
									case 316:
										iVar0 = 46;
										break;
									case 317:
										iVar0 = 51;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 209, 222))
									{
										iVar0 = func_403(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!__LIB_6__.func_829(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_403(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_403(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_403(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_403(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!__LIB_6__.func_829(iParam0, 3, 176, 191) && !__LIB_6__.func_829(iParam0, 3, 227, 242))
									{
										iVar0 = func_403(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = __LIB_6__.func_795(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = __LIB_6__.func_795(iParam0, 11);
								iVar5 = func_402(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = __LIB_6__.func_795(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!__LIB_0__.func_22(joaat("Player_One"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = __LIB_6__.func_795(iParam0, 8);
								iVar8 = __LIB_6__.func_795(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_402(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_402(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = __LIB_6__.func_795(iParam0, 11);
								iVar0 = func_402(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			case joaat("Player_Two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									case 81:
										iVar0 = 5;
										break;
									case 82:
										iVar0 = 6;
										break;
									case 83:
										iVar0 = 7;
										break;
									case 84:
										iVar0 = 10;
										break;
									case 85:
										iVar0 = 9;
										break;
									case 86:
										iVar0 = 8;
										break;
									case 92:
										iVar0 = 22;
										break;
									case 87:
										iVar0 = 23;
										break;
									case 91:
										iVar0 = 24;
										break;
									case 93:
										iVar0 = 25;
										break;
									case 88:
										iVar0 = 26;
										break;
									case 94:
										iVar0 = 27;
										break;
									case 120:
										iVar0 = 11;
										break;
									case 121:
										iVar0 = 13;
										break;
									case 122:
										iVar0 = 14;
										break;
									case 124:
										iVar0 = 12;
										break;
									case 126:
										iVar0 = 18;
										break;
									case 128:
										iVar0 = 17;
										break;
									case 130:
										iVar0 = 19;
										break;
									case 131:
										iVar0 = 16;
										break;
									case 134:
										iVar0 = 15;
										break;
									case 135:
										iVar0 = 20;
										break;
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_402(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39A08
{
	int iVar0;
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_403(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_403(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_403(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39CCF
{
	int iVar0;
	int iVar1;
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_395(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_418(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x3AE24
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
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = __LIB_13__.func_95();
			iVar5 = __LIB_13__.func_95();
			__LIB_0__.func_142(&iVar5, iParam0);
			__LIB_0__.func_143(&iVar5, iParam1);
			__LIB_0__.func_144(&iVar5, 0);
			if (__LIB_12__.func_98(*uParam4, iVar5))
			{
				__LIB_32__.func_437(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_435(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			__LIB_32__.func_495((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
			}
			__LIB_10__.func_10();
			uParam4->f_10 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(uParam4->f_10, "TIME_LAPSE_MASTER", 0, true);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			__LIB_9__.func_994();
			uParam4->f_3++;
			break;
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
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
					if (uParam4->f_3 == 1)
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
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				__LIB_32__.func_437(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(__LIB_0__.func_196(iVar5), __LIB_0__.func_195(iVar5), __LIB_0__.func_483(iVar5));
				if (bParam7)
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				}
				AUDIO::STOP_SOUND(uParam4->f_10);
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
			fVar12 = __LIB_0__.func_301(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			__LIB_32__.func_437(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(__LIB_0__.func_196(iVar5), __LIB_0__.func_195(iVar5), __LIB_0__.func_483(iVar5));
			if (__LIB_0__.func_482(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(__LIB_0__.func_482(iVar5), __LIB_0__.func_411(iVar5), __LIB_1__.func_26(iVar5));
			}
			__LIB_6__.func_842();
			GRAPHICS::RESET_ADAPTATION(6);
			break;
	}
	return 0;
}

void func_435(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x3B34F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if (__LIB_12__.func_98(iParam0, iParam1))
	{
		iVar0 = __LIB_0__.func_411(iParam1);
		iVar1 = __LIB_1__.func_26(iParam0);
		iVar2 = (__LIB_1__.func_26(iParam0) - __LIB_1__.func_26(iParam1));
		iVar3 = (__LIB_0__.func_411(iParam0) - __LIB_0__.func_411(iParam1));
		iVar4 = (__LIB_0__.func_482(iParam0) - __LIB_0__.func_482(iParam1));
		iVar5 = (__LIB_0__.func_196(iParam0) - __LIB_0__.func_196(iParam1));
		iVar6 = (__LIB_0__.func_195(iParam0) - __LIB_0__.func_195(iParam1));
		iVar7 = (__LIB_0__.func_483(iParam0) - __LIB_0__.func_483(iParam1));
	}
	else
	{
		iVar0 = __LIB_0__.func_411(iParam0);
		iVar1 = __LIB_1__.func_26(iParam1);
		iVar2 = (__LIB_1__.func_26(iParam1) - __LIB_1__.func_26(iParam0));
		iVar3 = (__LIB_0__.func_411(iParam1) - __LIB_0__.func_411(iParam0));
		iVar4 = (__LIB_0__.func_482(iParam1) - __LIB_0__.func_482(iParam0));
		iVar5 = (__LIB_0__.func_196(iParam1) - __LIB_0__.func_196(iParam0));
		iVar6 = (__LIB_0__.func_195(iParam1) - __LIB_0__.func_195(iParam0));
		iVar7 = (__LIB_0__.func_483(iParam1) - __LIB_0__.func_483(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + __LIB_0__.func_139(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(__LIB_0__.func_732(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_465(int iParam0)//Position - 0x3DAA7
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	MISC::GET_MODEL_DIMENSIONS(iVar0, &Var1, &Var2);
	fVar3 = (-Var1.f_2 + Var2.f_2);
	if (fVar3 < 2.6f)
	{
		return 1;
	}
	return 0;
}

void func_473(int iParam0, int iParam1)//Position - 0x3DE9A
{
	int iVar0;
	struct<17> Var1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Var1 = { __LIB_18__.func_180(iVar0, iParam1) };
	func_474(iParam0, iVar0, &Var1);
}

void func_474(int iParam0, int iParam1, var uParam2)//Position - 0x3DEC1
{
	int iVar0;
	struct<14> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Var1 = { func_15(iParam1, __LIB_0__.func_33(iVar0), (*uParam2)[__LIB_0__.func_33(iVar0)], -1) };
		if (Var1.f_3 != -1 && Var1.f_4 != -1)
		{
			PED::SET_PED_PRELOAD_VARIATION_DATA(iParam0, iVar0, Var1.f_3, Var1.f_4);
		}
		iVar0++;
	}
	uVar6 = { __LIB_18__.func_247(iParam1, (*uParam2)[13]) };
	iVar2 = 0;
	while (iVar2 <= 8)
	{
		iVar3 = iVar2;
		iVar4 = __LIB_0__.func_40(iVar3);
		iVar5 = __LIB_0__.func_29(iVar4);
		if (uVar6[iVar2] != iVar5)
		{
			Var1 = { func_15(iParam1, 14, uVar6[iVar2], -1) };
			if (Var1.f_3 != -1 && Var1.f_3 != 255)
			{
				PED::SET_PED_PRELOAD_PROP_DATA(iParam0, iVar4, Var1.f_3, Var1.f_4);
			}
		}
		iVar2++;
	}
}

int func_476(struct<3> Param0, float fParam1)//Position - 0x3DFC1
{
	switch (iLocal_565)
	{
		case 0:
			if (__LIB_11__.func_893(&iLocal_89, 14, -808.0422f, 168.5755f, 75.7504f, 244.0649f, 1))
			{
				iLocal_565++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_89))
			{
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_89, 1, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_89, 3, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_89, 4, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_89, 6, 0, 0);
				PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_89, 10, 0, 0);
				iLocal_565++;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_89))
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_89))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_89, 1, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_89, 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_89, 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_89, 6, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_89, 10, 0, 0, 0);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_89);
					ENTITY::SET_ENTITY_COORDS(iLocal_89, Param0, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_89, fParam1);
					func_98(iLocal_89);
					PED::RELEASE_PED_PRELOAD_VARIATION_DATA(iLocal_89);
					iLocal_565 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_477()//Position - 0x3E0D0
{
	if (!iLocal_582)
	{
		fLocal_573 = 0f;
		iLocal_574 = 0;
		iLocal_575 = 0;
		iLocal_576 = 0;
		iLocal_577 = 0;
		iLocal_578 = 0;
		iLocal_579 = 0;
		iLocal_580 = 0;
		iLocal_581 = 0;
		iLocal_582 = 1;
	}
	switch (iLocal_70)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_95) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
			{
				if (fLocal_573 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_95)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_95)))
				{
					__LIB_0__.func_401(208, 1, 0);
				}
				fLocal_573 = (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_95)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_95));
			}
			else
			{
				fLocal_573 = 0f;
			}
			break;
		case 2:
			if (!iLocal_577)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_93) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_93, joaat("tribike")))
					{
						__LIB_0__.func_401(214, 0, 1);
					}
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_93, joaat("bmx")))
					{
						__LIB_0__.func_401(214, 1, 1);
					}
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_93, joaat("cruiser")))
					{
						__LIB_0__.func_401(214, 2, 1);
					}
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_93, joaat("scorcher")))
					{
						__LIB_0__.func_401(214, 3, 1);
					}
					iLocal_577 = 1;
				}
			}
			break;
		case 3:
			if (!iLocal_575)
			{
				__LIB_0__.func_403(211, 0);
				iLocal_575 = 1;
			}
			else if (!iLocal_576)
			{
				if (iLocal_185)
				{
					__LIB_0__.func_402(0, -1);
					iLocal_576 = 1;
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
			{
				if (!iLocal_574)
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93))
					{
						iLocal_574 = 1;
					}
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93))
				{
					if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_0__.func_401(206, 1, 0);
					}
					iLocal_574 = 0;
				}
			}
			break;
		case 5:
			if (!iLocal_578)
			{
				__LIB_0__.func_403(207, 0);
				iLocal_578 = 1;
			}
			else if (!iLocal_579)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2022.824f, -1045.762f, 1.449759f, -2018.3036f, -1032.2363f, 4.478201f, 8f, false, true, 0))
				{
					__LIB_0__.func_402(0, -1);
					iLocal_579 = 1;
				}
			}
			break;
		case 7:
			if (!iLocal_580)
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_101[0]))
				{
					__LIB_0__.func_403(213, 0);
					iLocal_580 = 1;
				}
				break;
			}
			if (!iLocal_581)
			{
				if ((!ENTITY::DOES_ENTITY_EXIST(iLocal_100[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_99[0])) || PED::IS_PED_INJURED(iLocal_100[0]))
				{
					__LIB_0__.func_402(0, -1);
					iLocal_581 = 1;
				}
			}
	}
}

void func_480()//Position - 0x3E468
{
	if (bLocal_154)
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (PLAYER::GET_PLAYER_SPRINT_TIME_REMAINING(PLAYER::PLAYER_ID()) <= 5f)
			{
				if (!__LIB_0__.func_67(29))
				{
					__LIB_0__.func_151("AM_H_NOSTAM" /* GXT: You have run out of stamina. Pushing your body any harder will cause you to lose health. */, -1);
					__LIB_0__.func_460(29);
				}
			}
		}
	}
}

void func_483()//Position - 0x3E526
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	func_490();
	if (!__LIB_0__.func_295())
	{
		if (iLocal_70 >= 4)
		{
			if (!STREAMING::IS_IPL_ACTIVE("smboat"))
			{
				STREAMING::REQUEST_IPL("smBoat");
			}
		}
		else if (STREAMING::IS_IPL_ACTIVE("smboat"))
		{
			STREAMING::REMOVE_IPL("smBoat");
		}
	}
	switch (iLocal_70)
	{
		case 0:
			if (iLocal_173)
			{
				func_189(-803.2507f, 172.9356f, 71.8447f, 108.735f, 1);
				while (!func_389(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				TASK::REQUEST_WAYPOINT_RECORDING(sLocal_157);
				while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_157))
				{
					SYSTEM::WAIT(0);
				}
				while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(-803.2507f, 172.9356f, 71.8447f)))
				{
					SYSTEM::WAIT(0);
				}
				func_204(&iLocal_89, 14, -809.6773f, 171.191f, 75.7409f, 138.7408f);
			}
			break;
		case 1:
			iLocal_203 = 0;
			iLocal_204 = 0;
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			if (!PED::IS_PED_INJURED(iLocal_89))
			{
				func_98(iLocal_89);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Mansion_1");
			if (iLocal_173)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_95);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_97))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_97);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_98);
				}
				while (!__LIB_40__.func_944(&iLocal_98, 0, Local_126, fLocal_127, 1, 1))
				{
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
				{
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_95, true);
				}
				while (!func_389(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				TASK::REQUEST_WAYPOINT_RECORDING(sLocal_157);
				while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_157))
				{
					SYSTEM::WAIT(0);
				}
				func_189(Local_120, fLocal_121, 1);
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_89);
				}
				func_204(&iLocal_89, 14, Local_122, fLocal_123);
				bVar0 = false;
				while (!bVar0)
				{
					if (!PED::IS_PED_INJURED(iLocal_89))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_89))
						{
							bVar0 = true;
						}
					}
					SYSTEM::WAIT(0);
				}
				if (!__LIB_0__.func_295())
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
			{
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_95, 5f);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_95, 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, true, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_95, -0.0062f, -0.0656f, 0.9462f, 0.3169f);
			}
			SYSTEM::SETTIMERA(0);
			break;
		case 2:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_98))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_95) && iLocal_95 != iLocal_98) || !ENTITY::DOES_ENTITY_EXIST(iLocal_95))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_98);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_97))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_95) && iLocal_95 != iLocal_97) || !ENTITY::DOES_ENTITY_EXIST(iLocal_95))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_97);
				}
			}
			if (iLocal_173)
			{
				while (!func_389(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
				{
					func_489(2, Local_131, fLocal_132);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_95, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_95, Local_131, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_95, fLocal_132);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_95, 5f);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_95, -1);
					func_488(&iLocal_89, 14, &iLocal_95, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_95, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_95, -1072.7998f, -1703.9235f, 4.138f, false, false, true);
						ENTITY::SET_ENTITY_QUATERNION(iLocal_95, 0.0123f, -0.0057f, 0.9998f, -0.0169f);
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1081.7975f, -1699.4921f, 3.5179f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 91.1321f);
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_89, -1085.2488f, -1703.1886f, 3.4167f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_89, 327.7033f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_93))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_93);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_94);
				}
				while (!func_145(0))
				{
					SYSTEM::WAIT(0);
				}
				MISC::CLEAR_AREA(Local_133, 10f, true, false, false, false);
				func_189(-1081.7975f, -1699.4921f, 3.5179f, 91.1321f, 1);
				bLocal_182 = true;
				iLocal_117 = 1;
			}
			break;
		case 3:
			iLocal_160 = 0;
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			iLocal_203 = 0;
			iLocal_204 = 0;
			if (iLocal_173)
			{
				while (!func_145(1))
				{
					SYSTEM::WAIT(0);
				}
				func_189(Local_134, fLocal_135, 1);
				while (!func_389(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_489(0, -1103.9978f, -1691.6907f, 3.3147f, 255.7254f);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_93, -1);
				func_489(1, -1100.827f, -1695.7578f, 3.3089f, 245.1632f);
				func_488(&iLocal_89, 14, &iLocal_94, -1);
				VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_158, sLocal_156);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_156);
				STREAMING::REQUEST_ANIM_DICT("veh@bicycle@mountain_f@front@base");
				while ((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_158, sLocal_156) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_156)) || !STREAMING::HAS_ANIM_DICT_LOADED("veh@bicycle@mountain_f@front@base"))
				{
					SYSTEM::WAIT(0);
				}
				bVar1 = false;
				if (!PED::IS_PED_INJURED(iLocal_89))
				{
					while (!bVar1)
					{
						SYSTEM::WAIT(0);
						if (!PED::IS_PED_INJURED(iLocal_89))
						{
							if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_89))
							{
								PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_89, MISC::GET_HASH_KEY("MISS_FAMILY2_JIMMY_BICYCLE"));
								bVar1 = true;
							}
						}
					}
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			iLocal_554 = 0;
			iLocal_555 = 0;
			StringCopy(&Local_556, "", 24);
			break;
		case 4:
			if (iLocal_173)
			{
				while (!func_389(0, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_189(Local_137, fLocal_139, 1);
				func_489(1, Local_137, fLocal_139);
				func_489(0, Local_136, fLocal_138);
				func_204(&iLocal_89, 14, -1859.0718f, -1217.3331f, 12.0174f, 24.6128f);
			}
			break;
		case 5:
			func_489(3, Local_128, fLocal_149);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_92, true);
			}
			iLocal_168 = -1;
			if (iLocal_173)
			{
				while (!func_389(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_189(Local_124, fLocal_125, 1);
				func_204(&iLocal_89, 14, -1859.0718f, -1217.3331f, 12.0174f, 24.6128f);
				func_489(1, Local_137, fLocal_139);
				func_489(0, Local_136, fLocal_138);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_93, -1867.5173f, -1209.1207f, 12.5769f, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_93, 0.0501f, -0.0721f, 0.4606f, 0.8833f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_94, -1858.6306f, -1214.6611f, 12.5761f, false, false, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_94, 0.0568f, -0.0661f, 0.6354f, 0.7672f);
				}
			}
			break;
		case 6:
			while (!func_389(1, 1))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_173)
			{
				func_189(-2059.9348f, -1026.109f, 9.7454f, 71.3421f, 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_92))
			{
				func_489(3, Local_128, fLocal_149);
			}
			while (!func_257(0, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_257(1, 1))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_272())
			{
				SYSTEM::WAIT(0);
			}
			func_204(&iLocal_88, 15, -2059.9348f, -1026.109f, 9.7454f, 71.3421f);
			func_204(&iLocal_89, 14, Local_118, fLocal_148);
			break;
		case 7:
			iLocal_159 = 0;
			iLocal_541 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(-10.77281f, -1509.8569f, -919.2169f) + Vector(13.25f, 231f, 232f), Vector(-10.77281f, -1509.8569f, -919.2169f) - Vector(13.25f, 231f, 232f), false, true, true, true);
			iLocal_542 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(-12.186346f, -888.8414f, -2055.108f) + Vector(14.5f, 250f, 246f), Vector(-12.186346f, -888.8414f, -2055.108f) + Vector(14.5f, 250f, 246f), false, true, false, true);
			func_487();
			if (iLocal_173)
			{
				func_250(1, 0f);
				while (!func_389(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_189(Local_128, fLocal_149, 1);
				func_489(3, Local_129, fLocal_130);
				func_488(&iLocal_88, 15, &iLocal_92, 0);
				bVar2 = false;
				while (!bVar2)
				{
					if (!PED::IS_PED_INJURED(iLocal_88))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_88))
						{
							bVar2 = true;
						}
					}
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, true, true, false);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_92, 17f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM2_CHASE_RT");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 1);
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, -1);
				}
				if (!PED::IS_PED_INJURED(iLocal_88))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_88, iLocal_92, 0);
					}
				}
			}
			func_204(&iLocal_89, 14, -1611.595f, -1121.0092f, 1.544f, 42.8275f);
			break;
		case 8:
			iLocal_159 = 0;
			func_486(0);
			SYSTEM::SETTIMERA(0);
			if (iLocal_173)
			{
				while (!func_389(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				func_189(Local_211, fLocal_212, 1);
				func_489(3, Local_211, fLocal_212);
				func_488(&iLocal_88, 15, &iLocal_92, 0);
				bVar3 = false;
				while (!bVar3)
				{
					if (!PED::IS_PED_INJURED(iLocal_88))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_88))
						{
							bVar3 = true;
						}
					}
					SYSTEM::WAIT(0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_92, -1);
					}
					if (!PED::IS_PED_INJURED(iLocal_88))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_88, iLocal_92, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_88, iLocal_92, 0);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_92, 10f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, true, true, false);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_92, 10f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_92, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_89))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_89, true);
			}
			break;
		case 9:
			if (iLocal_173)
			{
				while (!func_389(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1623.5543f, -1132.1362f, 0.8638f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 107.3556f);
				if (!__LIB_0__.func_295())
				{
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1624.9271f, -1136.7485f, 1.045f, 200f, 2);
					SYSTEM::SETTIMERA(0);
					iVar4 = MISC::GET_GAME_TIMER();
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && (MISC::GET_GAME_TIMER() - iVar4) < 10000)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				func_204(&iLocal_88, 15, Local_118 + Vector(0f, 1f, 0f), 0f);
				func_204(&iLocal_89, 14, Local_118, fLocal_148);
				func_489(3, Local_128, fLocal_149);
			}
			break;
		case 10:
			break;
	}
	if (iLocal_70 == 7)
	{
	}
	if (__LIB_0__.func_295())
	{
		switch (iLocal_70)
		{
			case 1:
			case 2:
			case 4:
			case 6:
				__LIB_6__.func_775(0, -1, 1);
				break;
			case 5:
				__LIB_6__.func_775(0, -1, 1);
				break;
			case 7:
				__LIB_6__.func_775(iLocal_92, -1, 1);
				break;
			case 8:
			case 9:
				__LIB_6__.func_775(iLocal_92, -1, 1);
				break;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		if (!PED::IS_PED_INJURED(iLocal_89))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_549[1 /*10*/]))
			{
				__LIB_0__.func_203(&Local_549, 1, iLocal_89, "JIMMY", 0, 1);
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Local_549[1 /*10*/]))
	{
		__LIB_0__.func_202(&Local_549, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		if (!PED::IS_PED_INJURED(iLocal_88))
		{
			if (Local_549[2 /*10*/] == 0)
			{
				__LIB_0__.func_203(&Local_549, 2, iLocal_88, "TRACEY", 0, 1);
			}
		}
	}
	else if (Local_549[2 /*10*/] != 0)
	{
		__LIB_0__.func_202(&Local_549, 2);
	}
	if (iLocal_70 != 9)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	HUD::CLEAR_PRINTS();
	if (iLocal_173 && iLocal_70 != 7)
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	iLocal_172 = 1;
	iLocal_173 = 0;
}

void func_486(bool bParam0)//Position - 0x3F269
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_572.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_572[iVar0 /*8*/].f_1))
		{
			if (!bParam0)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_572[iVar0 /*8*/].f_1));
			}
			else
			{
				PED::DELETE_PED(&(Local_572[iVar0 /*8*/].f_1));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_572[iVar0 /*8*/]))
		{
			if (!bParam0)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_572[iVar0 /*8*/]));
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(Local_572[iVar0 /*8*/]));
			}
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(iVar0 + 1, "fam2amb");
		iVar0++;
	}
}

void func_487()//Position - 0x3F2F1
{
	Local_572[0 /*8*/].f_4 = { -857.03143f, -1415.7921f, 1.034999f };
	Local_572[0 /*8*/].f_2 = 0;
	Local_572[1 /*8*/].f_4 = { -1037.3524f, -1272.711f, -6.625715f };
	Local_572[1 /*8*/].f_2 = 0;
}

void func_488(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3F33D
{
	struct<3> Var0;
	float fVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam2, true) };
			fVar1 = ENTITY::GET_ENTITY_HEADING(*iParam2);
			if (iParam1 == 15)
			{
				while (!func_97(Var0, fVar1))
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				while (!func_476(Var0, fVar1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(*iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam2, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(*iParam0, *iParam2, false))
			{
				PED::SET_PED_INTO_VEHICLE(*iParam0, *iParam2, iParam3);
			}
		}
	}
}

void func_489(int iParam0, struct<3> Param1, float fParam2)//Position - 0x3F3DC
{
	switch (iParam0)
	{
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
			{
				while (!__LIB_40__.func_944(&iLocal_95, 0, Param1, fParam2, 1, 0))
				{
					SYSTEM::WAIT(0);
				}
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_95, 0, false);
				VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_95, 1, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_95, true);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_95, "Mike's Car");
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_95, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_95, Param1, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_95, fParam2);
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_92))
			{
				STREAMING::REQUEST_MODEL(joaat("seashark"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("seashark")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_92 = VEHICLE::CREATE_VEHICLE(joaat("seashark"), Param1, fParam2, true, true, false);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_92, "Mike's Seashark");
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_92, false, true, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_92, 1);
				AUDIO::SET_VEH_RADIO_STATION(iLocal_92, "OFF");
				__LIB_0__.func_409(iLocal_92, 205);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_92, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_92, Param1, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_92, fParam2);
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_94))
			{
				STREAMING::REQUEST_MODEL(joaat("cruiser"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("cruiser")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_94 = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), Param1, fParam2, true, true, false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_94, false);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_94, "Jimmy's Bike");
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_94, 0);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_94, Param1, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_94, fParam2);
			}
			break;
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_93))
			{
				STREAMING::REQUEST_MODEL(joaat("cruiser"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("cruiser")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_93 = VEHICLE::CREATE_VEHICLE(joaat("cruiser"), Param1, fParam2, true, true, false);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(iLocal_93, "Mike's Bike");
				ENTITY::SET_ENTITY_PROOFS(iLocal_93, false, true, false, false, false, false, false, false);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_93, false);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_93, 1);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_93, Param1, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_93, fParam2);
			}
			break;
	}
}

void func_490()//Position - 0x3F5FF
{
	int iVar0;
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	HUD::CLEAR_GPS_MULTI_ROUTE();
	if (iLocal_70 != 7)
	{
		STREAMING::REMOVE_ANIM_DICT("missfam2_tracy_jetski");
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.6f);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_541, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_542, false);
	if ((iLocal_70 != 5 && iLocal_70 != 8) || iLocal_173)
	{
		HUD::CLEAR_PRINTS();
	}
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(7, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(10, true);
	MISC::ENABLE_DISPATCH_SERVICE(9, true);
	MISC::ENABLE_DISPATCH_SERVICE(8, true);
	func_550();
	func_549();
	func_547();
	if (iLocal_70 < 6 && ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		PED::DELETE_PED(&iLocal_88);
	}
	if (iLocal_70 == 3 || iLocal_70 == 7)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	}
	else
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
	{
		OBJECT::DELETE_OBJECT(&iLocal_108);
	}
	if (!PED::IS_PED_INJURED(iLocal_89))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_89, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_89);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_88))
	{
		if (PED::IS_PED_GROUP_MEMBER(iLocal_88, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
		{
			PED::REMOVE_PED_FROM_GROUP(iLocal_88);
		}
	}
	if (iLocal_173)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_101[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_101[iVar0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_100[iVar0]))
			{
				PED::DELETE_PED(&(iLocal_100[iVar0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_99[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_99[iVar0]));
			}
			iVar0++;
		}
		func_486(1);
		AUDIO::SET_PED_WALLA_DENSITY(0f, 0f);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DRIVE_TO_BEACH"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DRIVE_TO_BEACH");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_BIKE_RACE_JIMMY"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_BIKE_RACE_JIMMY");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_DIVE_INTO_WATER"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_DIVE_INTO_WATER");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_SWIM_TO_YACHT"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_SWIM_TO_YACHT");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_CHASE"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_CHASE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_2_JETSKI_GO_TO_BEACH"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAMILY_2_JETSKI_GO_TO_BEACH");
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FAM2_STOP");
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		__LIB_6__.func_771();
		func_103();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(false);
			CUTSCENE::REMOVE_CUTSCENE();
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_94))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_94);
			}
		}
		if (iLocal_70 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_93))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_93);
			}
		}
		if (iLocal_70 != 0)
		{
			STREAMING::END_SRL();
		}
		STREAMING::REMOVE_ANIM_DICT("missfam2ig_3");
		iLocal_582 = 0;
	}
	if (iLocal_70 > 5)
	{
		bLocal_154 = false;
	}
	if (iLocal_70 != 3)
	{
		STREAMING::REMOVE_ANIM_DICT("veh@bicycle@mountain_f@front@base");
	}
	while (!func_207(iLocal_70))
	{
		SYSTEM::WAIT(0);
	}
	if (!PED::IS_PED_INJURED(iLocal_89))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_89, 185, true);
	}
	if (iLocal_70 == 2)
	{
		__LIB_42__.func_735(1, "stage_hire_bike", 0, 0, 0, 1);
	}
	else if (iLocal_70 == 3)
	{
		__LIB_42__.func_735(1, "stage_hire_bike", 0, 0, 0, 0);
	}
	else if ((iLocal_70 == 4 || iLocal_70 == 5) || iLocal_70 == 6)
	{
		__LIB_42__.func_735(2, "stage_go_to_yacht", 0, 0, 0, 1);
	}
	else if (iLocal_70 == 7)
	{
		__LIB_42__.func_735(3, "stage_speedophile_chase", 0, 0, 0, 1);
	}
	else if (iLocal_70 == 8)
	{
		__LIB_42__.func_735(4, "stage_drive_to_beach", 1, 0, 0, 1);
		if (BitTest(iLocal_76, 1))
		{
			__LIB_42__.func_735(5, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (BitTest(iLocal_76, 2))
		{
			__LIB_42__.func_735(6, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (BitTest(iLocal_76, 5))
		{
			__LIB_42__.func_735(7, "stage_drive_to_beach", 1, 0, 0, 1);
		}
		if (BitTest(iLocal_76, 6))
		{
			__LIB_42__.func_735(8, "stage_drive_to_beach", 1, 0, 0, 1);
		}
	}
	iLocal_159 = 0;
	iLocal_163 = 0;
	if (iLocal_70 > 3)
	{
		func_103();
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_156);
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, sLocal_156);
	}
}

void func_547()//Position - 0x46D60
{
	Local_543 = { __LIB_0__.func_343("FM2_GOTOL") };
	Local_544 = { __LIB_0__.func_343("FM2_GETON") };
	Local_545 = { __LIB_0__.func_343("FM2_BKIN") };
	Local_546 = { __LIB_0__.func_343("FM2_COPS") };
}

void func_549()//Position - 0x46DB1
{
	HUD::REMOVE_BLIP(&iLocal_105);
	HUD::REMOVE_BLIP(&iLocal_103);
	HUD::REMOVE_BLIP(&iLocal_104);
	HUD::REMOVE_BLIP(&iLocal_105);
	HUD::REMOVE_BLIP(&iLocal_102);
}

void func_550()//Position - 0x46DD7
{
	iLocal_178 = 0;
	iLocal_554 = 0;
	iLocal_555 = 0;
	StringCopy(&Local_556, "", 24);
	iLocal_161 = 0;
	bLocal_176 = false;
	bLocal_177 = false;
	SYSTEM::SETTIMERA(0);
	SYSTEM::SETTIMERB(0);
}

void func_551()//Position - 0x46E09
{
	bool bVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89))
	{
		if (PED::IS_PED_INJURED(iLocal_89))
		{
			func_105("FM2_JIMDED");
		}
		if (func_553(iLocal_89))
		{
			func_105("FM2_JIMHIT");
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_88))
	{
		if (PED::IS_PED_INJURED(iLocal_88))
		{
			func_105("FM2_TRADED");
		}
		if (func_553(iLocal_88))
		{
			func_105("FM2_TRAHIT");
		}
	}
	if (iLocal_70 == 3)
	{
		bVar0 = false;
		if (func_552(iLocal_93, &bVar0))
		{
			if (!bVar0)
			{
				func_105("FM2_BIKDED");
			}
			else
			{
				func_105("FM2_BIKSTU");
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_93, false))
		{
			if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_93, 6, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_93, 7, false))
			{
				func_105("FM2_BIKDED");
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2109.599f, -998.3243f, -11.185677f, 167f, 122.5f, 32.25f, false, true, 0))
		{
			func_105("FM2_JIMAB");
		}
	}
	if (iLocal_70 == 1)
	{
		if (func_153(iLocal_89, 300f))
		{
			func_105("FM2_JIMAB");
		}
	}
	if (iLocal_70 == 7)
	{
		if (func_153(iLocal_88, 100f))
		{
			func_105("FM2_TRAAB");
		}
	}
	if (iLocal_70 == 8)
	{
		if (func_153(iLocal_88, 1125515264))
		{
			func_105("FM2_TRAAB");
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_89))
	{
		if ((FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(25f, 25f, 25f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(25f, 25f, 25f)) && !FIRE::IS_EXPLOSION_IN_AREA(13, ENTITY::GET_ENTITY_COORDS(iLocal_89, true) + Vector(25f, 25f, 25f), ENTITY::GET_ENTITY_COORDS(iLocal_89, true) - Vector(25f, 25f, 25f))) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_89, true), 25f, true))
		{
			func_105("FM2_JSPOOK");
		}
	}
}

int func_552(int iParam0, int iParam1)//Position - 0x46FE1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000))
				{
				}
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000))
				{
				}
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000))
				{
				}
				if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
				{
				}
				*iParam1 = 1;
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, true) && !VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), iParam0, -1, true, false))
			{
				if (iLocal_560 == 0)
				{
					iLocal_560 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_560) >= 5000)
				{
					*iParam1 = 1;
					return 1;
				}
			}
			else
			{
				iLocal_560 = 0;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_553(int iParam0)//Position - 0x470CF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_555()//Position - 0x4710E
{
	bool bVar0;
	int iVar1;
	__LIB_26__.func_264(7, 1);
	__LIB_26__.func_264(8, 1);
	__LIB_26__.func_264(9, 1);
	__LIB_26__.func_264(10, 1);
	__LIB_26__.func_264(11, 1);
	__LIB_26__.func_264(12, 1);
	__LIB_26__.func_264(13, 1);
	__LIB_26__.func_264(14, 1);
	__LIB_26__.func_264(15, 1);
	__LIB_26__.func_264(16, 1);
	__LIB_26__.func_264(17, 1);
	__LIB_26__.func_264(18, 1);
	__LIB_26__.func_264(19, 1);
	__LIB_26__.func_264(20, 1);
	__LIB_26__.func_264(21, 1);
	func_207(0);
	iLocal_71[0] = 0;
	iLocal_71[1] = 1;
	iLocal_71[2] = 2;
	iLocal_71[3] = 3;
	iLocal_71[4] = 4;
	iLocal_71[5] = 4;
	iLocal_71[6] = 5;
	iLocal_71[7] = 6;
	iLocal_71[8] = 7;
	iLocal_71[9] = 8;
	iLocal_71[10] = 9;
	HUD::REQUEST_ADDITIONAL_TEXT("FAMILY2", 0);
	HUD::REQUEST_ADDITIONAL_TEXT(cLocal_202, 6);
	TASK::REQUEST_WAYPOINT_RECORDING("fam2Stairs");
	__LIB_0__.func_367(1);
	func_547();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__.func_294())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			__LIB_32__.func_723(&Local_80, 0, 0, 2000, 1, 0, 0, 1);
			__LIB_11__.func_863(500);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
			iVar1 = __LIB_0__.func_315();
			if (Global_94618 == 1)
			{
				if (iVar1 == 1 || iVar1 == 2)
				{
					bVar0 = true;
				}
				if (iVar1 < 4)
				{
					if (iVar1 == 3)
					{
						iVar1 = 8;
					}
					else
					{
						iVar1++;
					}
				}
				else
				{
					iVar1 = 9;
				}
			}
			if (iVar1 > 8)
			{
				while (!func_389(1, 1))
				{
					SYSTEM::WAIT(0);
				}
				Local_516 = { -1623.5543f, -1132.1362f, 0.8638f };
				fLocal_517 = 107.3556f;
				STREAMING::REQUEST_MODEL(joaat("seashark"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("seashark")))
				{
					SYSTEM::WAIT(0);
				}
				iLocal_92 = VEHICLE::CREATE_VEHICLE(joaat("seashark"), -1490.0714f, -1406.3827f, 1.1279f, -94.2926f, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_92, -1490.0714f, -1406.3827f, 1.1279f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_92, 2.7893f, 9.6258f, -94.2926f, 2, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_92, -0.078f, -0.0393f, 0.7289f, -0.679f);
				ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_92, 0, 0f, 0f, -0.01f, 0f, 0f, 0f, 0, true, true, false, false, true);
				func_210(9);
				iLocal_173 = 1;
			}
			else
			{
				switch (iVar1)
				{
					case 0:
						iLocal_155 = 1;
						func_210(1);
						MISC::CLEAR_AREA(Local_126, 100f, true, false, false, false);
						Local_516 = { Local_120 };
						fLocal_517 = fLocal_121;
						break;
					case 1:
						iLocal_155 = 1;
						__LIB_41__.func_639(&iLocal_95, Local_131, fLocal_132, 0, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_133 + Vector(0f, 1f, 1f), true, false, false, true);
						MISC::CLEAR_AREA(Local_133, 100f, true, false, false, false);
						while (!func_145(0))
						{
							SYSTEM::WAIT(0);
						}
						func_210(2);
						Local_516 = { -1081.7975f, -1699.4921f, 3.5179f };
						fLocal_517 = 91.1321f;
						break;
					case 2:
						iLocal_155 = 1;
						if (bVar0)
						{
							Local_516 = { Local_137 };
							fLocal_517 = fLocal_139;
							STREAMING::REQUEST_IPL("smBoat");
							while (!STREAMING::IS_IPL_ACTIVE("smboat"))
							{
								SYSTEM::WAIT(0);
							}
							func_210(4);
						}
						else
						{
							if (((((__LIB_9__.func_997() == joaat("scorcher") || __LIB_9__.func_997() == joaat("bmx")) || __LIB_9__.func_997() == joaat("cruiser")) || __LIB_9__.func_997() == joaat("tribike")) || __LIB_9__.func_997() == joaat("tribike2")) || __LIB_9__.func_997() == joaat("tribike3"))
							{
								__LIB_41__.func_639(&iLocal_93, Local_136, fLocal_138, 1, 0, 0, 0, 1, joaat("asterope"), 0, 145, 1);
							}
							Local_516 = { Local_124 };
							fLocal_517 = fLocal_125;
							func_210(5);
						}
						break;
					case 3:
						iLocal_155 = 1;
						MISC::CLEAR_AREA_OF_VEHICLES(Local_128, 100f, true, false, false, false, false, false, 0);
						MISC::CLEAR_AREA_OF_PEDS(Local_128, 100f, 0);
						if (bVar0)
						{
							Local_516 = { -2018.7909f, -1033.8073f, 1.4462f };
							fLocal_517 = 71.2179f;
							func_210(6);
						}
						else
						{
							Local_516 = { Local_129 };
							fLocal_517 = fLocal_130;
							func_210(7);
						}
						break;
					case 4:
						Local_211 = { -1937.5155f, -1031.9191f, 0f };
						fLocal_212 = 288.2051f;
						MISC::SET_BIT(&iLocal_76, 0);
						MISC::CLEAR_AREA(Local_211, 500f, true, false, false, false);
						func_210(8);
						break;
					case 5:
						Local_211 = { -1693.7485f, -936.2038f, 0f };
						fLocal_212 = 293.6241f;
						MISC::SET_BIT(&iLocal_76, 1);
						MISC::CLEAR_AREA(Local_211, 500f, true, false, false, false);
						func_210(8);
						break;
					case 6:
						Local_211 = { -1198.6477f, -992.5767f, 0f };
						fLocal_212 = 209.213f;
						MISC::SET_BIT(&iLocal_76, 2);
						MISC::CLEAR_AREA(Local_211, 500f, true, false, false, false);
						func_210(8);
						break;
					case 7:
						Local_211 = { -966.1338f, -1365.776f, 0f };
						fLocal_212 = 279.4431f;
						MISC::SET_BIT(&iLocal_76, 5);
						MISC::CLEAR_AREA(Local_211, 500f, true, false, false, false);
						func_210(8);
						break;
					case 8:
						Local_211 = { -832.9591f, -1506.5366f, 0f };
						fLocal_212 = 151.4369f;
						MISC::SET_BIT(&iLocal_76, 6);
						MISC::CLEAR_AREA(Local_211, 500f, true, false, false, false);
						func_210(8);
						break;
				}
				if (iVar1 >= 4)
				{
					iLocal_155 = 1;
					Local_516 = { Local_211 };
					fLocal_517 = fLocal_212;
				}
				iLocal_173 = 1;
			}
			__LIB_0__.func_370(Local_516, fLocal_517, 0, 0);
		}
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		__LIB_0__.func_203(&Local_549, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__.func_320(PLAYER::PLAYER_PED_ID(), 212);
	}
	__LIB_11__.func_182(1);
	ENTITY::CREATE_FORCED_OBJECT(-1105.2411f, -1697.0247f, 3.3678f, 2f, joaat("prop_table_03_chr"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bmx"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_M_BikeHire_01"), true);
	PED::SET_CREATE_RANDOM_COPS(false);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Family5d");
	__LIB_0__.func_410(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.6f);
	PATHFIND::SET_ROADS_IN_AREA(Vector(5.785122f, -1682.9386f, -1057.899f) + Vector(4f, 30f, 29f), Vector(5.785122f, -1682.9386f, -1057.899f) - Vector(4f, 30f, 29f), false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(6.373647f, -1688.035f, -1112.913f) + Vector(3.5f, 24.75f, 22.75f), Vector(6.373647f, -1688.035f, -1112.913f) - Vector(3.5f, 24.75f, 22.75f), false, true);
	PED::ADD_RELATIONSHIP_GROUP("chasing_peds", &iLocal_79);
	PED::ADD_RELATIONSHIP_GROUP("buddies", &iLocal_114);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_79, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_79);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_79);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_79, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_114, iLocal_79);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_79, iLocal_114);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_114, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_114);
	if (__LIB_0__.func_2(0))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		while (!func_389(0, 1))
		{
			SYSTEM::WAIT(0);
		}
		while (!func_476(Local_122, fLocal_123))
		{
			SYSTEM::WAIT(0);
		}
		if (!__LIB_0__.func_295())
		{
			func_210(0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -803.2507f, 172.9356f, 71.8447f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 108.735f);
			CLOCK::SET_CLOCK_TIME(10, 0, 0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
}

void func_600()//Position - 0x4903D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_89) && !PED::IS_PED_INJURED(iLocal_89))
	{
		TASK::CLEAR_PED_TASKS(iLocal_89);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_88) && !PED::IS_PED_INJURED(iLocal_88))
	{
		TASK::CLEAR_PED_TASKS(iLocal_88);
	}
	__LIB_0__.func_367(0);
	__LIB_0__.func_54(1, 1);
	__LIB_26__.func_264(7, 0);
	__LIB_26__.func_264(8, 0);
	__LIB_26__.func_264(9, 0);
	__LIB_26__.func_264(10, 0);
	__LIB_26__.func_264(11, 0);
	__LIB_26__.func_264(12, 0);
	__LIB_26__.func_264(13, 0);
	__LIB_26__.func_264(14, 0);
	__LIB_26__.func_264(15, 0);
	__LIB_26__.func_264(16, 0);
	__LIB_26__.func_264(17, 0);
	__LIB_26__.func_264(18, 0);
	__LIB_26__.func_264(19, 0);
	__LIB_26__.func_264(20, 0);
	__LIB_26__.func_264(21, 0);
	__LIB_0__.func_296();
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_92);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_89);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_93);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_94);
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_88);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("Family5d");
	__LIB_0__.func_410(1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(5.785122f, -1682.9386f, -1057.899f) + Vector(4f, 30f, 29f), Vector(5.785122f, -1682.9386f, -1057.899f) - Vector(4f, 30f, 29f), 1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(5.75302f, -1325.827f, -1329.113f) + Vector(2.5f, 44f, 13.25f), Vector(5.75302f, -1325.827f, -1329.113f) - Vector(2.5f, 44f, 13.25f), 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(6.373647f, -1688.035f, -1112.913f) + Vector(3.5f, 24.75f, 22.75f), Vector(6.373647f, -1688.035f, -1112.913f) - Vector(3.5f, 24.75f, 22.75f), true, true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(4.37374f, -1694.2445f, -1106.8887f) + Vector(1f, 2.5f, 2.5f), Vector(4.37374f, -1694.2445f, -1106.8887f) - Vector(1f, 2.5f, 2.5f), 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(4.374632f, -1691.3973f, -1108.5488f) + Vector(1f, 2.5f, 2.5f), Vector(4.374632f, -1691.3973f, -1108.5488f) - Vector(1f, 2.5f, 2.5f), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_109))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_109);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_110))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_110);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_111))
	{
		CAM::DESTROY_CAM(iLocal_111, false);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_147(1);
	ENTITY::REMOVE_FORCED_OBJECT(-1105.2411f, -1697.0247f, 3.3678f, 2f, joaat("prop_table_03_chr"));
	AUDIO::SET_AUDIO_FLAG("AvoidMissionCompleteDelay", false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_602()//Position - 0x492D1
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
				if (!func_134(iVar0))
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

