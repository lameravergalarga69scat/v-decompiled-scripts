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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 1000;
	var uLocal_53 = 1000;
	var uLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	char* sLocal_56 = NULL;
	char* sLocal_57 = NULL;
	char* sLocal_58 = NULL;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
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
	float fLocal_105 = 0f;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	struct<3> Local_109 = { 0, 0, 8 } ;
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
	struct<174> Local_150 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 3;
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
	var uLocal_211 = 4;
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
	var uLocal_276 = 2;
	var uLocal_277 = 0;
	var uLocal_278 = 4;
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
	var uLocal_344 = 4;
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
	var uLocal_415 = 12;
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
	var uLocal_596 = 3;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	int iLocal_600 = 0;
	struct<3> Local_601 = { 0, 0, 0 } ;
	int iLocal_602 = 0;
	char cLocal_603[16] = "";
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	int iLocal_606 = 0;
	bool bLocal_607 = 0;
	int* iLocal_608 = NULL;
	var uLocal_609 = 1;
	var uLocal_610 = 0;
	int iLocal_611 = 0;
	int* iLocal_612 = NULL;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	int* iLocal_615 = NULL;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	int* iLocal_618 = NULL;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	int* iLocal_621 = NULL;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	int* iLocal_624 = NULL;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	struct<3> Local_627 = { 0, 0, 0 } ;
	struct<3> Local_628 = { 0, 0, 0 } ;
	struct<3> Local_629 = { 0, 0, 0 } ;
	float fLocal_630 = 0f;
	int iLocal_631 = 0;
	var uLocal_632 = 10;
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
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int* iLocal_645 = NULL;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	bool bLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	var uLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	float fLocal_667 = 0f;
	float fLocal_668 = 0f;
	float fLocal_669 = 0f;
	struct<526> Local_670 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, -1082130432, -1082130432, -1082130432, 1065353216, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_671[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	struct<3> Local_674 = { 0, 0, 0 } ;
	struct<3> Local_675 = { 0, 0, 0 } ;
	struct<3> Local_676 = { 0, 0, 0 } ;
	struct<3> Local_677 = { 0, 0, 0 } ;
	struct<3> Local_678 = { 0, 0, 0 } ;
	int iLocal_679 = 0;
	int* iLocal_680 = NULL;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	struct<3> Local_683 = { 0, 0, 0 } ;
	struct<3> Local_684 = { 0, 0, 0 } ;
	struct<3> Local_685 = { 0, 0, 0 } ;
	struct<3> Local_686 = { 0, 0, 0 } ;
	float fLocal_687 = 0f;
	float fLocal_688 = 0f;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	var uLocal_691 = 0;
	int iLocal_692 = 0;
	struct<2> Local_693 = { 0, 0 } ;
	struct<11> Local_694 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_695 = NULL;
	var uLocal_696 = 0;
	int* iLocal_697 = NULL;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	int iLocal_704[3] = { 0, 0, 0 };
	int iLocal_705[3] = { 0, 0, 0 };
	int iLocal_706[3] = { 0, 0, 0 };
	struct<3> Local_707 = { 0, 0, 0 } ;
	struct<38> Local_708[12];
	struct<10> Local_709[12];
	var uLocal_710 = 35;
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
	var uLocal_1026 = 50;
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
	var uLocal_1130 = 40;
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
	var uLocal_1686 = 1;
	var uLocal_1687 = 0;
	var uLocal_1688 = 1;
	var uLocal_1689 = 1;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 1;
	var uLocal_1694 = 1;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	int iLocal_1697 = 0;
	int* iLocal_1698 = NULL;
	var uLocal_1699 = 0;
	var uLocal_1700 = 8;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 4;
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
	var uLocal_1719 = 4;
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
	var uLocal_1734 = 4;
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
	var uLocal_1749 = 4;
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
	var uLocal_1764 = 4;
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
	var uLocal_1779 = 4;
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
	var uLocal_1794 = 4;
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
	var uLocal_1809 = 4;
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
	bool bLocal_1822 = 0;
	bool bLocal_1823 = 0;
	bool bLocal_1824 = 0;
	bool bLocal_1825 = 0;
	bool bLocal_1826 = 0;
	int iLocal_1827 = 0;
	var uLocal_1828 = 0;
	int* iLocal_1829 = NULL;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 35;
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
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
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
	var uLocal_2018 = 0;
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
	var uLocal_2049 = 0;
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
	var uLocal_2100 = 0;
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
	var uLocal_2133 = 0;
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
	var uLocal_2148 = 50;
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
	var uLocal_2182 = 0;
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
	var uLocal_2220 = 0;
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
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 40;
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
	var uLocal_2277 = 0;
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
	var uLocal_2304 = 0;
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
	var uLocal_2334 = 0;
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
	var uLocal_2361 = 0;
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
	var uLocal_2391 = 0;
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
	var uLocal_2418 = 0;
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
	var uLocal_2448 = 0;
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
	var uLocal_2475 = 0;
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
	var uLocal_2505 = 0;
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
	var uLocal_2532 = 0;
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
	var uLocal_2562 = 0;
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
	var uLocal_2589 = 0;
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
	var uLocal_2619 = 0;
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
	var uLocal_2646 = 0;
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
	var uLocal_2676 = 0;
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
	var uLocal_2703 = 0;
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
	var uLocal_2733 = 0;
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
	var uLocal_2760 = 0;
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
	var uLocal_2790 = 0;
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
	var uLocal_2808 = 1;
	var uLocal_2809 = 0;
	var uLocal_2810 = 1;
	var uLocal_2811 = 1;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 1;
	var uLocal_2816 = 1;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	int iLocal_2819 = 0;
	char* sLocal_2820 = NULL;
	int* iLocal_2821 = NULL;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	int iLocal_2826 = 0;
	int iLocal_2827 = 0;
	int iLocal_2828 = 0;
	int iLocal_2829 = 0;
	int iLocal_2830 = 0;
	int iLocal_2831 = 0;
	bool bLocal_2832 = 0;
	int iLocal_2833 = 0;
	int iLocal_2834 = 0;
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
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 8;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 4;
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
	var uLocal_2872 = 4;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
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
	var uLocal_2887 = 4;
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
	var uLocal_2902 = 4;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
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
	var uLocal_2917 = 4;
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
	var uLocal_2931 = 0;
	var uLocal_2932 = 4;
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
	var uLocal_2947 = 4;
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
	var uLocal_2961 = 0;
	var uLocal_2962 = 4;
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
	struct<3> Local_2980 = { 0, 0, 0 } ;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	char* sLocal_2983 = NULL;
	struct<13> Local_2984 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_2985 = { 0, 0, 0, 0 } ;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	struct<18> Local_2988 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2989 = 16;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
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
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
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
	var uLocal_3118 = 0;
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
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	struct<3> Local_3154 = { 0, 0, 0 } ;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	float fLocal_3157 = 0f;
	float fLocal_3158 = 0f;
	float fLocal_3159 = 0f;
	float fLocal_3160 = 0f;
	int iLocal_3161 = 0;
	float fLocal_3162 = 0f;
	int* iLocal_3163 = NULL;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	int iLocal_3166 = 0;
	int iLocal_3167 = 0;
	struct<8> Local_3168 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3169 = 0;
	bool bLocal_3170 = 0;
	bool bLocal_3171 = 0;
	bool bLocal_3172 = 0;
	bool bLocal_3173 = 0;
	bool bLocal_3174 = 0;
	int iLocal_3175 = 0;
	int iLocal_3176 = 0;
	int iLocal_3177 = 0;
	int iLocal_3178 = 0;
	int iLocal_3179 = 0;
	int iLocal_3180 = 0;
	struct<3> Local_3181 = { 0, 0, 0 } ;
	struct<3> Local_3182 = { 0, 0, 0 } ;
	struct<3> Local_3183 = { 0, 0, 0 } ;
	int iLocal_3184 = 0;
	int iLocal_3185 = 0;
	int* iLocal_3186 = NULL;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	int* iLocal_3189 = NULL;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	int iLocal_3192 = 0;
	int iLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	var uLocal_3198 = 0;
	int iLocal_3199 = 0;
	struct<3> Local_3200 = { 0, 0, 0 } ;
	float fLocal_3201 = 0f;
	int iLocal_3202 = 0;
	int* iLocal_3203 = NULL;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 12;
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
	var uLocal_3219 = 12;
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
	var uLocal_3232 = 12;
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
	var uLocal_3245 = 9;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 9;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
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
	int* iLocal_3271 = NULL;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 1132396544;
	var uLocal_3277 = 1132396544;
	var uLocal_3278 = 1132396544;
	var uLocal_3279 = 0;
	var uLocal_3280 = -1082130432;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 8;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
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
	var uLocal_3316 = 0;
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
	var uLocal_3340 = -1;
	var uLocal_3341 = 1092616192;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	int iLocal_3344 = 0;
	float fLocal_3345 = 0f;
	float fLocal_3346 = 0f;
	bool bLocal_3347 = 0;
	bool bLocal_3348 = 0;
	struct<3> Local_3349 = { 0, 0, 0 } ;
	struct<3> Local_3350 = { 0, 0, 0 } ;
	struct<3> Local_3351 = { 0, 0, 0 } ;
	struct<3> Local_3352 = { 0, 0, 0 } ;
	struct<3> Local_3353 = { 0, 0, 0 } ;
	struct<3> Local_3354 = { 0, 0, 0 } ;
	struct<3> Local_3355 = { 0, 0, 0 } ;
	float fLocal_3356 = 0f;
	float fLocal_3357 = 0f;
	var uLocal_3358 = 0;
	int iLocal_3359 = 0;
	float fLocal_3360 = 0f;
	float fLocal_3361 = 0f;
	bool bLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	int iLocal_3366 = 0;
	int iLocal_3367 = 0;
	struct<3> Local_3368 = { 0, 0, 0 } ;
	int* iLocal_3369 = NULL;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	bool bLocal_3372 = 0;
	int* iLocal_3373 = NULL;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	int iLocal_3376 = 0;
	var uLocal_3377 = 0;
	int* iLocal_3378 = NULL;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_55 = { 500f, 500f, 500f };
	sLocal_56 = "CHECKPOINT_NORMAL";
	sLocal_57 = "CHECKPOINT_MISSED";
	sLocal_58 = "CHECKPOINT_PERFECT";
	Local_59 = { 1694.7395f, 3276.5024f, 41.2796f };
	Local_60 = { 8.79494f, 0.59893f, 154.8464f };
	Local_68 = { 0f, 0f, 0f };
	Local_70 = { -1155.4f, -2715.5f, 64f };
	Local_71 = { -10.3f, 0f, 113.1f };
	Local_72 = { -1175.8738f, -2804.4434f, 30.3758f };
	iLocal_73 = -1;
	iLocal_74 = 2;
	iLocal_75 = 2;
	iLocal_76 = 2;
	iLocal_77 = 2;
	iLocal_78 = 2;
	iLocal_84 = 2;
	iLocal_85 = 2;
	fLocal_105 = ((0.05f + 0.275f) - 0.01f);
	Local_601 = { 0f, 0f, 0f };
	iLocal_602 = joaat("S_M_M_Pilot_02");
	StringCopy(&cLocal_603, "pilotSchool", 16);
	iLocal_606 = joaat("stunt");
	iLocal_650 = 1;
	iLocal_652 = 1;
	iLocal_663 = 1;
	fLocal_668 = -1f;
	Local_674 = { 0f, 0f, 0f };
	Local_675 = { -12.6533f, -49.3726f, -16.0138f };
	Local_676 = { -5.0812f, -36.9571f, -0.4403f };
	Local_677 = { -10.934f, -47.6023f, -14.3079f };
	Local_678 = { -3.2242f, -38.179f, -2.4549f };
	fLocal_687 = 0f;
	fLocal_688 = 5f;
	sLocal_695 = "PilotSchool";
	iLocal_700 = 2;
	Local_707 = { -1154.1101f, -2715.2026f, 18.8824f };
	sLocal_2820 = "";
	fLocal_3157 = 0f;
	fLocal_3158 = 0f;
	fLocal_3159 = 100f;
	fLocal_3160 = 0f;
	fLocal_3162 = 0f;
	iLocal_3166 = 1000;
	iLocal_3167 = 1;
	iLocal_3175 = -1;
	iLocal_3176 = -1;
	iLocal_3177 = 1;
	iLocal_3178 = 1;
	iLocal_3179 = 1;
	iLocal_3180 = 1;
	iLocal_3185 = 1;
	Local_3200 = { Local_601 };
	fLocal_3201 = -1f;
	fLocal_3345 = 0.2f;
	fLocal_3346 = 0.2f;
	Local_3349 = { 0f, 0f, 0f };
	Local_3350 = { 0f, 0f, 0f };
	Local_3351 = { 0f, 0f, 0f };
	Local_3352 = { 0f, 0f, 0f };
	fLocal_3357 = 0f;
	fLocal_3360 = 0.008f;
	fLocal_3361 = 0.013f;
	iLocal_3367 = 1;
	bLocal_3372 = true;
	Local_627 = { Local_627 };
	func_1175();
	while (iLocal_663)
	{
		func_1174();
		HUD::HIDE_STREET_AND_CAR_NAMES_THIS_FRAME();
		if (iLocal_665 == 7)
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		func_1172(bVar0);
		func_1162();
		switch (iLocal_665)
		{
			case 0:
				switch (iLocal_664)
				{
					case 0:
						__LIB_30__.func_684(&iScriptParam_3378);
						func_1160();
						break;
					case 1:
						if (!func_1159(&iScriptParam_3378))
						{
							func_1160();
						}
						break;
					case 2:
						iLocal_665 = 1;
						func_1160();
						break;
				}
				break;
			case 1:
				if (MISC::IS_PC_VERSION())
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				}
				switch (iLocal_664)
				{
					case 0:
						func_1158();
						func_1142();
						func_1160();
						break;
					case 1:
						func_1160();
						break;
					case 2:
						iLocal_665 = 2;
						func_1160();
						break;
				}
				break;
			case 2:
				if (MISC::IS_PC_VERSION())
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
				}
				switch (iLocal_664)
				{
					case 0:
						if (func_1141(3, 1000, -1082130432))
						{
							func_1160();
						}
						break;
					case 1:
						if (!func_969())
						{
							func_1160();
						}
						break;
					case 2:
						if (func_1141(1, 1000, -1082130432))
						{
							func_968();
							iLocal_665 = 3;
							func_1160();
						}
						break;
				}
				break;
			case 3:
				switch (iLocal_664)
				{
					case 0:
						if (func_1141(1, 1000, -1082130432))
						{
							func_1158();
							GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(0f);
							func_400();
							__LIB_30__.func_937();
							func_397();
							func_395();
							__LIB_31__.func_338(1);
							Call_Loc(iLocal_63);
							func_1160();
						}
						break;
					case 1:
						func_1160();
						break;
					case 2:
						if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MinigameTransitionIn"))
						{
							GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
						}
						if (Local_670.f_52.f_6 || iLocal_656)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, false);
							}
							iLocal_665 = 5;
						}
						else
						{
							iLocal_665 = 4;
							func_1160();
						}
						break;
				}
				break;
			case 4:
				switch (iLocal_664)
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_670.f_0, 1500, 0);
							ENTITY::SET_ENTITY_COORDS(Local_670.f_0, Local_683, true, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, true);
						}
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						MISC::SET_OVERRIDE_WEATHER("EXTRASUNNY");
						iLocal_648 = CLOCK::GET_CLOCK_HOURS();
						CLOCK::SET_CLOCK_TIME(12, CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
						iLocal_3359 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("TV_FRAME");
						__LIB_26__.func_455(&iLocal_645);
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_683, 1200f, 0))
						{
							Local_684 = { Local_684 };
							__LIB_0__.func_686(1, 1, 1, 0);
							func_1160();
						}
						break;
					case 1:
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3359))
						{
							GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_3359, 255, 255, 255, 255, 0);
							if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || __LIB_26__.func_294(&iLocal_645, 12f))
							{
								if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_26__.func_294(&iLocal_645, 12f))
								{
									__LIB_0__.func_735(&iLocal_645);
									STREAMING::NEW_LOAD_SCENE_STOP();
									func_1160();
								}
							}
						}
						break;
					case 2:
						if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3359))
						{
							GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_3359, 255, 255, 255, 255, 0);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
						}
						else
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						}
						if (!__LIB_2__.func_49(Local_670.f_0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_670.f_0, true);
							ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, false);
						}
						iLocal_665 = 5;
						func_1160();
						break;
				}
				break;
			case 5:
				Call_Loc(iLocal_62);
				CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
				switch (iLocal_664)
				{
					case 0:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
						}
						if (func_1141(3, 1000, -1082130432))
						{
							func_1160();
						}
						break;
					case 1:
						if (func_381())
						{
							func_1160();
						}
						break;
					case 2:
						if (func_1141(1, 1000, -1082130432))
						{
							MISC::CLEAR_OVERRIDE_WEATHER();
							CLOCK::SET_CLOCK_TIME(iLocal_648, CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
							if (STREAMING::IS_STREAMVOL_ACTIVE())
							{
								STREAMING::STREAMVOL_DELETE(iLocal_643);
							}
							__LIB_0__.func_296();
							__LIB_6__.func_771();
							func_367();
							iLocal_656 = 0;
							__LIB_0__.func_686(0, 0, 1, 0);
							iLocal_665 = 6;
							func_1160();
						}
						break;
				}
				break;
			case 6:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
				switch (iLocal_664)
				{
					case 0:
						Call_Loc(iLocal_64);
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
							PED::CLEAR_PED_ENV_DIRT(PLAYER::PLAYER_PED_ID());
							PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
							PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
						}
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 2)
						{
							CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(6, 1);
						}
						__LIB_26__.func_455(&iLocal_645);
						func_1160();
						break;
					case 1:
						if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && STREAMING::IS_NEW_LOAD_SCENE_LOADED()) || __LIB_32__.func_785(&iLocal_645, 10f))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							if (ENTITY::GET_ENTITY_MODEL(Local_670.f_0) != joaat("maverick"))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, false);
							}
							func_1160();
						}
						break;
					case 2:
						if (!__LIB_2__.func_49(Local_670.f_0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_670.f_0, false);
						}
						iLocal_665 = 7;
						func_1160();
						break;
				}
				break;
			case 7:
				switch (iLocal_664)
				{
					case 0:
						func_365(3, 1000, 0);
						if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
						func_1160();
						break;
					case 1:
						Call_Loc(iLocal_61);
						if (!StackVal)
						{
							func_1160();
						}
						break;
					case 2:
						Call_Loc(iLocal_65);
						if (bLocal_1822)
						{
							iLocal_665 = 8;
						}
						else if (iLocal_656)
						{
							iLocal_665 = 3;
						}
						else if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							iLocal_665 = 1;
						}
						else
						{
							iLocal_665 = 1;
						}
						func_1160();
						break;
				}
				break;
			case 8:
				switch (iLocal_664)
				{
					case 0:
						if (func_1141(1, 1000, -1082130432))
						{
							func_1158();
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
								PED::CLEAR_PED_ENV_DIRT(PLAYER::PLAYER_PED_ID());
								PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
								PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
							}
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_707, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 328.5558f);
							STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_707, 50f, 0);
							__LIB_26__.func_455(&iLocal_645);
							while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && __LIB_7__.func_42(&iLocal_645) < 10000f)
							{
								SYSTEM::WAIT(0);
							}
							STREAMING::NEW_LOAD_SCENE_STOP();
							func_10();
							func_1160();
						}
						break;
					case 1:
						func_1160();
						break;
					case 2:
						if (func_1141(3, 1000, -1082130432))
						{
							iLocal_663 = 0;
						}
						break;
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
	bLocal_607 = Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][11 /*10*/].f_8 != false;
	if (bLocal_607 && !__LIB_0__.func_61(11, 0))
	{
		__LIB_6__.func_770(11, 1);
	}
	__LIB_0__.func_55();
	__LIB_0__.func_131();
}

void func_10()//Position - 0xADC
{
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	__LIB_21__.func_672();
	__LIB_11__.func_629();
	__LIB_9__.func_485(23, 0);
	HUD::SET_MINIMAP_COMPONENT(0, true, -1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(0f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	AUDIO::STOP_AUDIO_SCENES();
	__LIB_31__.func_338(0);
	__LIB_0__.func_181(123, 1);
	__LIB_0__.func_55();
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	STREAMING::REQUEST_IPL("MG-Flight School 5");
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_STOP");
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_FAIL");
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(6, iLocal_672);
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(4, iLocal_673);
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_3, false))
	{
		VEHICLE::SET_PLAYERS_LAST_VEHICLE(Local_670.f_3);
		ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_3, false);
		PHYSICS::ACTIVATE_PHYSICS(Local_670.f_3);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	__LIB_11__.func_144();
	__LIB_10__.func_718(1);
	__LIB_11__.func_647(2, 0);
	__LIB_11__.func_647(1, 0);
	__LIB_11__.func_647(3, 0);
	__LIB_11__.func_647(4, 0);
	__LIB_11__.func_647(5, 0);
	__LIB_11__.func_647(6, 0);
	__LIB_11__.func_647(7, 0);
	__LIB_30__.func_649(0);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	func_345(PLAYER::PLAYER_PED_ID(), 0);
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_18__.func_173() == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
		}
		else if (__LIB_18__.func_173() == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
		}
		else if (__LIB_18__.func_173() == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 0, 0, 0);
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		func_334(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
		func_41(PLAYER::PLAYER_PED_ID(), &uLocal_3206, 0, 0, 1, 0);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	func_36();
	if (CAM::DOES_CAM_EXIST(iLocal_66))
	{
		CAM::DESTROY_CAM(iLocal_66, false);
	}
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	MISC::SET_GAME_PAUSED(false);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	__LIB_0__.func_131();
	__LIB_8__.func_770(0);
	__LIB_6__.func_833();
	__LIB_20__.func_578();
	if (PLAYER::IS_PLAYER_ONLINE() && func_23())
	{
		if (func_22(Local_708[iLocal_2830 /*38*/], 0))
		{
			func_11(iLocal_2830, func_17(Local_670.f_52, Local_670.f_42, 0), SYSTEM::FLOOR((Local_670.f_42 * 1000f)), 0);
		}
		else
		{
			func_11(iLocal_2830, func_17(Local_670.f_52, Local_670.f_42, 0), 0, Local_670.f_42.f_3);
		}
	}
}

void func_11(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0xD83
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[1];
	struct<8> Var4[1];
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (fParam3 < 0f || fParam3 > 999999f)
	{
		fParam3 = 999999f;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam1 >= 90)
	{
		iVar2++;
	}
	else if (iParam1 >= 80)
	{
		iVar1++;
	}
	else if (iParam1 >= 70)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0 /*8*/]), "Location", 32);
	switch (iParam0)
	{
		case 0:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_01", 24);
			break;
		case 1:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_02", 24);
			break;
		case 2:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_03", 24);
			break;
		case 3:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_04", 24);
			break;
		case 5:
			iLocal_161 = 1;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_05", 24);
			break;
		case 4:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_06", 24);
			break;
		case 6:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_07", 24);
			break;
		case 7:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_08", 24);
			break;
		case 8:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_09", 24);
			break;
		case 9:
			iLocal_161 = 1;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_10", 24);
			break;
		case 10:
			iLocal_161 = 1;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_11", 24);
			break;
		case 11:
			iLocal_161 = 0;
			StringCopy(&(Var3[0 /*6*/]), "LESSON_12", 24);
			break;
	}
	switch (iLocal_161)
	{
		case 0:
			if (__LIB_1__.func_29(850, &Var3, &Var4, 1, -1, 1, 0))
			{
				__LIB_13__.func_99(850, 131, -iParam2, SYSTEM::TO_FLOAT(-iParam2), 0);
				__LIB_13__.func_99(850, 2, iParam2, 0f, 0);
				__LIB_13__.func_99(850, 157, iVar0, 0f, 0);
				__LIB_13__.func_99(850, 158, iVar1, 0f, 0);
				__LIB_13__.func_99(850, 86, iVar2, 0f, 0);
				__LIB_13__.func_99(850, 109, 1, 0f, 0);
				__LIB_13__.func_99(850, 96, __LIB_0__.func_310(((iVar0 + iVar1 * 2) + iVar2 * 3), 0, 3), 0f, 0);
			}
			break;
		case 1:
			if (__LIB_1__.func_29(192, &Var3, &Var4, 1, -1, 1, 0))
			{
				__LIB_13__.func_99(192, 159, 0, -fParam3, 0);
				__LIB_13__.func_99(192, 2, 0, 0f, 0);
				__LIB_13__.func_99(192, 93, 0, fParam3, 0);
				__LIB_13__.func_99(192, 157, iVar0, 0f, 0);
				__LIB_13__.func_99(192, 158, iVar1, 0f, 0);
				__LIB_13__.func_99(192, 86, iVar2, 0f, 0);
				__LIB_13__.func_99(192, 109, 1, 0f, 0);
				__LIB_13__.func_99(192, 96, __LIB_0__.func_310(((iVar0 + iVar1 * 2) + iVar2 * 3), 0, 3), 0f, 0);
			}
			break;
	}
}

int func_17(struct<38> Param0, struct<10> Param1, bool bParam2)//Position - 0x13BA
{
	int iVar0[5];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam2)
	{
		if (Param0.f_5 == 0)
		{
			return -1;
		}
	}
	iVar1 = 0;
	if (func_22(Param0, 0))
	{
		if (Param1.f_0 < 0f)
		{
			return -1;
		}
		iVar0[iVar1] = func_21(Param0, Param1);
		if (iVar0[iVar1] < 70)
		{
			return -1;
		}
		iVar1++;
	}
	if (func_22(Param0, 2))
	{
		iVar0[iVar1] = func_20(Param0, Param1);
		if (iVar0[iVar1] < 70)
		{
			return -1;
		}
		iVar1++;
	}
	if (func_22(Param0, 3))
	{
		iVar0[iVar1] = func_19(Param0, Param1);
		if (iVar0[iVar1] < 70)
		{
			return -1;
		}
		iVar1++;
	}
	if (func_22(Param0, 4))
	{
		iVar0[iVar1] = func_18(Param0, Param1);
		if (iVar0[iVar1] < 70)
		{
			return -1;
		}
		iVar1++;
	}
	iVar2 = 0;
	iVar3 = 101;
	iVar4 = 0;
	if (iVar1 > 1)
	{
		iVar4 = 0;
		while (iVar4 < iVar1)
		{
			if (iVar0[iVar4] >= 0)
			{
				if (iVar0[iVar4] < iVar3)
				{
					if (iVar0[iVar4] < 70)
					{
						iVar0[iVar4] = -1;
					}
					else if (iVar0[iVar4] < 80)
					{
						iVar3 = iVar0[iVar4];
					}
					else if (iVar0[iVar4] < 90)
					{
						iVar3 = iVar0[iVar4];
					}
					else
					{
						iVar3 = iVar0[iVar4];
					}
					if (iVar3 == iVar0[iVar4])
					{
						iVar2 = 1;
					}
				}
			}
			iVar4++;
		}
	}
	else
	{
		iVar1 = 0;
		iVar3 = iVar0[iVar1];
		iVar2 = 1;
	}
	if ((iVar2 && iVar3 > 0) && iVar3 < 101)
	{
		return iVar3;
	}
	return -1;
}

int func_18(struct<38> Param0, struct<7> Param1, var uParam2, var uParam3, var uParam4)//Position - 0x157F
{
	return (100 * SYSTEM::ROUND(((Param0.f_37 - Param1.f_6) / Param0.f_37)));
}

int func_19(struct<37> Param0, var uParam1, struct<6> Param2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x159C
{
	return (Param2.f_5 * 100 / Param0.f_36);
}

int func_20(struct<36> Param0, var uParam1, var uParam2, struct<4> Param3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x15AF
{
	if (Param3.f_3 < 0f)
	{
		return -1;
	}
	if (Param3.f_3 <= Param0.f_33)
	{
		return 100;
	}
	if (Param3.f_3 > Param0.f_33 && Param3.f_3 <= Param0.f_34)
	{
		return 80;
	}
	if (Param0.f_35 == -1f || (Param3.f_3 > Param0.f_34 && Param3.f_3 <= Param0.f_35))
	{
		return 70;
	}
	return -1;
}

int func_21(struct<33> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)//Position - 0x1629
{
	int iVar0;
	iVar0 = SYSTEM::FLOOR((fParam6 * 1000f));
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (iVar0 <= SYSTEM::FLOOR((Param0.f_30 * 1000f)))
	{
		return 100;
	}
	if (iVar0 <= SYSTEM::FLOOR((Param0.f_31 * 1000f)))
	{
		return 80;
	}
	if (Param0.f_32 == -1f || iVar0 <= SYSTEM::FLOOR((Param0.f_32 * 1000f)))
	{
		return 70;
	}
	return -1;
}

bool func_22(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9)//Position - 0x16AB
{
	return BitTest(Param0.f_29, iParam9);
}

int func_23()//Position - 0x16BA
{
	return iLocal_162;
}

void func_36()//Position - 0x19E3
{
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("pilotSchool");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("PS_Menu");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPMedals_FEED");
	__LIB_1__.func_30(&Local_3154);
	__LIB_30__.func_936(iLocal_1697);
	__LIB_35__.func_51(&iLocal_2827);
}

void func_41(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1A54
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
		iVar0 = __LIB_18__.func_168(iParam0);
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
		if (__LIB_0__.func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_333(iParam0, iVar1, &iVar2, 0))
			{
				func_318(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_259(iParam0, iVar1, &iVar2))
			{
				func_318(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_256(iParam0);
			__LIB_0__.func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__.func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__.func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__.func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_54(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__.func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_54(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__.func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_54(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__.func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__.func_186(iVar9);
			}
			__LIB_0__.func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__.func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__.func_796(161, 1, -1, 1);
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

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2802
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
		if (!__LIB_0__.func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_78128 > 1)
		{
		}
		else
		{
			func_202(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__.func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
					}
					if (BitTest(Global_78130[1 /*14*/].f_6, 1))
					{
						func_202(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__.func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_202(iVar5, iVar0, uVar14[iVar0], 1);
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
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_54(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_202(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iVar0, func_192(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__.func_180(iVar5, 0) };
					func_54(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__.func_468();
			if (iVar17 != -1)
			{
				__LIB_25__.func_43(iVar17, 0, iParam10);
			}
			func_186(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__.func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_202(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__.func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_54(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_202(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_54(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_177(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_54(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_54(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar19 = __LIB_0__.func_33(iParam1);
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
				iVar23 = __LIB_6__.func_795(iParam0, 11);
				iVar24 = __LIB_6__.func_795(iParam0, 8);
				iVar25 = __LIB_6__.func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__.func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_174(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__.func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__.func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_54(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__.func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__.func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__.func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__.func_821(iParam0, iParam2);
							iVar31 = __LIB_6__.func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_54(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_54(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__.func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_54(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__.func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__.func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__.func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__.func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__.func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__.func_806(iVar5, __LIB_6__.func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_54(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__.func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__.func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_54(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_54(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__.func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_186(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_174(iVar5, func_192(iParam0, 8, -1), iParam2, func_192(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__.func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__.func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__.func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__.func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_106(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__.func_795(iParam0, 11);
				iVar45 = __LIB_6__.func_795(iParam0, 4);
				iVar46 = func_174(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_186(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__.func_795(iParam0, 11);
			if (__LIB_6__.func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__.func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__.func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_174(iVar5, iParam2, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__.func_795(iParam0, 7);
				if (!__LIB_24__.func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__.func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__.func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__.func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__.func_424(135, iParam10);
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
				__LIB_31__.func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__.func_795(iParam0, 11);
			iVar58 = __LIB_6__.func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_54(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__.func_806(iVar5, iParam2, __LIB_6__.func_807(iVar5, iVar58, 0)))
					{
						func_54(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_174(iVar5, __LIB_6__.func_795(iParam0, 8), __LIB_6__.func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_174(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__.func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__.func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__.func_254(iVar5, iVar60, iVar62) == iVar59)
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
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_54(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_174(iVar5, iVar3, __LIB_6__.func_795(iParam0, 11), __LIB_6__.func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_54(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__.func_223(iParam0))
				{
					iVar63 = __LIB_6__.func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_78(iParam0, 9, iVar63))
						{
							func_54(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_54(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_54(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__.func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__.func_183(iParam0, iVar64), __LIB_0__.func_217(iParam0, iVar64), __LIB_0__.func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__.func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__.func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__.func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__.func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_54(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_192(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_192(iParam0, 11, -1);
				}
				if (__LIB_6__.func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__.func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__.func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_54(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__.func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__.func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_54(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__.func_795(iParam0, 4);
				iVar75 = __LIB_6__.func_795(iParam0, 6);
				if (__LIB_0__.func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_54(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_54(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_54(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_54(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__.func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__.func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_54(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__.func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_54(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__.func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_54(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__.func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_54(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_177(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_54(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__.func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_54(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_55(iParam0, &uVar4))
		{
			func_54(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_54(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_54(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_54(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__.func_254(iVar5, func_192(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__.func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_54(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_55(int iParam0, var uParam1)//Position - 0x46AD
{
	int iVar0;
	int iVar1;
	*uParam1 = func_192(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__.func_534(754, Global_78127, 0) != -99 && __LIB_6__.func_781())
	{
		if (__LIB_0__.func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__.func_534(754, Global_78127, 0) == 0 && __LIB_0__.func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				if (__LIB_0__.func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__.func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__.func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__.func_534(755, Global_78127, 0);
		if (!func_78(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__.func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__.func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__.func_534(753, Global_78127, 0);
			}
			__LIB_0__.func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__.func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1, int iParam2)//Position - 0x89D4
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__.func_180(iVar0, iParam2) };
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
				if (!func_78(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__.func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_78(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_78(iParam0, 14, iVar6))
										{
											if (!__LIB_24__.func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__.func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__.func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__.func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__.func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_78(iParam0, 14, uVar11[iVar10]))
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
		if (Global_78130[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)) && Global_78130[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, __LIB_0__.func_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_78129++;
			if (Global_78129 == 1)
			{
				if (__LIB_6__.func_802(iVar0, 11, __LIB_6__.func_795(iParam0, 11), -1))
				{
					if (__LIB_6__.func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_78(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__.func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_78(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_106(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1071D
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__.func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__.func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__.func_43(iVar1, 1, iParam2);
	}
	func_107(iParam0, bParam3, 0, -1);
}

void func_107(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1076A
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
		iVar2 = __LIB_0__.func_250(iParam0);
		bVar3 = func_153(iParam0, 0);
		bVar4 = __LIB_31__.func_887(iParam0);
		bVar5 = func_144(iParam0, iParam3);
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
			if (__LIB_18__.func_432(iVar6, iVar0))
			{
				if (__LIB_6__.func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__.func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__.func_432(123, iVar0))
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
					if (__LIB_18__.func_432(iVar10, iVar0))
					{
						if (__LIB_25__.func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__.func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__.func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_144(int iParam0, int iParam1)//Position - 0x1F91C
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_192(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__.func_534(1759, -1, 0);
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
				iVar5 = func_192(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_153(int iParam0, bool bParam1)//Position - 0x1FD7A
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
							iVar2 = __LIB_18__.func_431(joaat("MP_M_Freemode_01"), 11, func_192(iParam0, 11, -1), 0);
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
						if (__LIB_18__.func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__.func_432(72, -1))
						{
						}
						else if (__LIB_18__.func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_192(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_192(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_192(iParam0, 11, -1), 0);
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
						iVar8 = func_192(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_192(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__.func_431(joaat("MP_F_Freemode_01"), 11, func_192(iParam0, 11, -1), 0);
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
						iVar12 = func_192(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_174(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28C50
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_174(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__.func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__.func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__.func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__.func_252(iVar4);
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
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_174(iParam0, -99, __LIB_6__.func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__.func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__.func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__.func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__.func_758(iParam0, iVar12, 3, 4);
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

void func_177(int iParam0)//Position - 0x2A105
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
		if (!func_182(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__.func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__.func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__.func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__.func_257(iVar13, 11, -1))
				{
					if (__LIB_0__.func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__.func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__.func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__.func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_182(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_182(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2AACF
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__.func_709(iVar0, 14, func_192(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D4B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_256(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__.func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__.func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__.func_795(iParam0, 11);
				if (!__LIB_6__.func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__.func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__.func_42(iVar0, iParam2, 13) && !__LIB_25__.func_42(iVar0, iParam2, 14)) && !__LIB_25__.func_42(iVar0, iParam2, 15)) && !__LIB_25__.func_42(iVar0, iParam2, 16)) && !__LIB_25__.func_42(iVar0, iParam2, 71)) && !__LIB_25__.func_42(iVar0, iParam2, 72))
				{
					__LIB_31__.func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__.func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__.func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__.func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_192(int iParam0, int iParam1, int iParam2)//Position - 0x2D768
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
				if (func_78(iParam0, iParam1, iVar0))
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
				if (func_78(iParam0, iParam1, iVar1))
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

void func_202(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x304DD
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
		if (Global_78127 != __LIB_0__.func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__.func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__.func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_202(iParam0, __LIB_0__.func_33(iVar4), uVar3, 0);
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
									func_202(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_202(iParam0, __LIB_0__.func_33(Global_4538457[iVar1]), __LIB_6__.func_758(iParam0, Global_4538446[iVar1], __LIB_0__.func_33(Global_4538457[iVar1]), 4), 1);
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
			if (__LIB_0__.func_36(iParam1, Global_78130[1 /*14*/].f_2, &iVar6))
			{
				iVar7 = __LIB_0__.func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__.func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_202(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_202(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_202(iParam0, 8, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_202(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__.func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__.func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_202(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_202(iParam0, 7, __LIB_6__.func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__.func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_202(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_256(int iParam0)//Position - 0x4D648
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_192(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__.func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__.func_160() && __LIB_0__.func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_192(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__.func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_259(int iParam0, int iParam1, int iParam2)//Position - 0x4D9BA
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_260(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_260(int iParam0, int iParam1, int iParam2)//Position - 0x4DA46
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
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
				if (!func_260(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_260(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_260(iParam0, 14, iVar4))
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
						Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, iVar2, iVar1, -1) };
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
			if (!func_260(iParam0, 14, uVar8[iVar7]))
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

int func_318(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x604D8
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
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iParam1, iParam2, -1) };
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
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__.func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_318(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								iVar3 = __LIB_40__.func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_318(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_322(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_333(iParam0, iVar10, &iVar4, 1))
							{
								func_318(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_318(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__.func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_318(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_318(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_318(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_318(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_318(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
			Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__.func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__.func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__.func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_318(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_318(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__.func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_318(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__.func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_333(iParam0, iVar10, &iVar4, 0))
		{
			func_318(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_259(iParam0, iVar10, &iVar4))
		{
			func_318(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_322(int iParam0, int iParam1, int iParam2)//Position - 0x60E78
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
				if (func_260(iParam0, iParam1, iVar0))
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
				if (func_260(iParam0, iParam1, iVar1))
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

int func_333(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x62B35
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_260(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_334(int iParam0)//Position - 0x62BCB
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_18__.func_168(iParam0);
	if (__LIB_0__.func_43(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__.func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__.func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
				}
			}
		}
		func_41(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__.func_365(49))
				{
					iVar1 = func_322(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_335(__LIB_6__.func_757(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__.func_365(44))
				{
					iVar1 = func_322(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_322(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_335(__LIB_6__.func_757(0), 3, 70, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 3, 71, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 3, 72, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 3, 73, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 3, 74, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 3, 75, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 4, 41, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 4, 42, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 4, 43, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 4, 44, 1, 0, 0, 0);
					func_335(__LIB_6__.func_757(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_322(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__.func_1(iVar0);
				func_41(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_335(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x62E28
{
	__LIB_38__.func_82(iParam0, iParam1, iParam2, bParam3);
	func_338(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__.func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__.func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_338(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x62FE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iParam0, iParam1, iParam2, -1) };
	if (BitTest(Global_78130[1 /*14*/].f_6, 0) && !BitTest(Global_78130[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
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
					uVar3 = { __LIB_18__.func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_338(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__.func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__.func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_338(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__.func_82(iParam0, 14, uVar4[iVar2], 1);
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
			__LIB_0__.func_31(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
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
								func_338(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_338(iParam0, 14, iVar5, 1, 0);
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
								func_338(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_338(iParam0, 14, 17, 1, 0);
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

void func_345(int iParam0, int iParam1)//Position - 0x63844
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_18__.func_168(iParam0);
		if (__LIB_0__.func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_322(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__.func_1(iVar0);
					func_41(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_24__.func_948(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__.func_816();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__.func_39(0) && !__LIB_0__.func_39(1)) && !__LIB_0__.func_39(2)) && !__LIB_0__.func_39(3)) && !__LIB_0__.func_39(4)) && !__LIB_0__.func_39(9)) && !__LIB_0__.func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__.func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__.func_795(iParam0, __LIB_0__.func_33(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_113386.f_9085.f_99.f_58[121])
						{
							Global_113386.f_9085.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

void func_365(int iParam0, int iParam1, float fParam2)//Position - 0x64A72
{
	if (!iLocal_3167)
	{
	}
	iLocal_3161 = iParam0;
	iLocal_3166 = iParam1;
	fLocal_3162 = fParam2;
}

void func_367()//Position - 0x64AAE
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3192))
	{
		func_373();
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_7))
	{
		PED::DELETE_PED(&(Local_670.f_7));
	}
	if (CAM::DOES_CAM_EXIST(Local_670.f_516))
	{
		CAM::DESTROY_CAM(Local_670.f_516, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_670.f_517))
	{
		CAM::DESTROY_CAM(Local_670.f_517, false);
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	HUD::DISPLAY_RADAR(true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_6))
	{
		PED::DELETE_PED(&(Local_670.f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_7))
	{
		PED::DELETE_PED(&(Local_670.f_7));
	}
	if (!__LIB_2__.func_49(Local_670.f_0))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0);
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(Local_670.f_0)))
		{
			VEHICLE::CONTROL_LANDING_GEAR(Local_670.f_0, 2);
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_670.f_0, Local_628, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_670.f_0, Local_629, 2, true);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_670.f_0, 5f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, true);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	if (__LIB_0__.func_75())
	{
		AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING();
	}
	__LIB_6__.func_833();
	func_369(1);
	func_368();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}

void func_368()//Position - 0x64BD4
{
	if (!iLocal_659)
	{
		if (Global_112413 != 10)
		{
			if (Global_112413 != 9)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, -1);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_670.f_0, 5f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_670.f_0, true, true, false);
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_670.f_0);
						iLocal_659 = 1;
					}
				}
			}
		}
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_369(bool bParam0)//Position - 0x64C71
{
	func_370();
	Local_670.f_90.f_9 = 0;
	Local_670.f_42.f_5 = Local_670.f_90.f_9;
	Local_670.f_90.f_10 = 0;
	Local_670.f_90.f_11 = -1f;
	Local_670.f_90.f_8 = -1;
	Local_670.f_90.f_7 = -1;
	Local_670.f_90.f_1 = 0;
	Local_670.f_90.f_3 = 0;
	Local_670.f_90.f_2 = 0;
	Local_670.f_90.f_5 = 0;
	Local_670.f_90.f_4 = 0;
	Local_670.f_90 = 0;
	Local_2988.f_13 = 0;
	if (__LIB_0__.func_736(&iLocal_3271))
	{
		__LIB_0__.func_735(&iLocal_3271);
	}
	Local_670.f_520 = 0;
	Local_670.f_521 = !bParam0;
}

void func_370()//Position - 0x64D08
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_670.f_181)
	{
		func_371(&(Local_670.f_181[iVar0 /*6*/]));
		iVar0++;
	}
	GRAPHICS::DELETE_CHECKPOINT(Local_670.f_13);
	Local_670.f_520 = 0;
	Local_670.f_521 = 0;
}

void func_371(int* iParam0)//Position - 0x64D4D
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	GRAPHICS::DELETE_CHECKPOINT(iParam0->f_1);
	iParam0->f_1 = 0;
	iParam0->f_2 = { Local_601 };
	iParam0->f_5 = 0;
}

void func_373()//Position - 0x64DA4
{
	int iVar0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3192))
	{
		if (!__LIB_2__.func_49(iLocal_3192) && !__LIB_7__.func_141(iLocal_3192, 0, 0, 0, 0, 0, 1, 0, 1))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3192, -1, false);
			PED::SPECIAL_FUNCTION_DO_NOT_USE(iVar0, true);
			PED::DELETE_PED(&iVar0);
		}
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_3192))
		{
			VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iLocal_3192, &uVar1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar1);
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_3192);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3194))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3194, false);
	}
}

int func_381()//Position - 0x65098
{
	if (__LIB_6__.func_841(1000))
	{
		return 1;
	}
	else if (__LIB_32__.func_785(&iLocal_697, fLocal_688))
	{
		return 1;
	}
	return 0;
}

void func_395()//Position - 0x65324
{
	__LIB_0__.func_203(&uLocal_2989, 0, 0, "PilotDispatch", 0, 1);
}

void func_397()//Position - 0x653D7
{
	int iVar0;
	if (!iLocal_656)
	{
		bLocal_657 = false;
	}
	func_398();
	iLocal_608 = 0;
	iLocal_701 = 0;
	iLocal_3195 = 0;
	iLocal_3196 = 0;
	iLocal_611 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_670.f_0, true, false);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
	__LIB_0__.func_735(&(Local_670.f_17));
	__LIB_0__.func_735(&(Local_670.f_20));
	__LIB_0__.func_735(&(Local_3154.f_2));
	__LIB_0__.func_735(&(Local_670.f_23));
	__LIB_0__.func_735(&iLocal_1829);
	__LIB_0__.func_735(&iLocal_612);
	Local_3154.f_1 = 0;
	Local_683 = { 0f, 0f, 0f };
	Local_670.f_32.f_3 = 0f;
	iLocal_649 = 0;
	iLocal_650 = 1;
	iLocal_702 = 0;
	Local_2988.f_13 = 0;
	iLocal_3177 = 1;
	iLocal_666 = 0;
	fLocal_668 = -1f;
	fLocal_687 = 0f;
	sLocal_695 = "PilotSchool";
	fLocal_3201 = -1f;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	Local_670.f_32.f_6 = 0;
	Local_2984.f_3 = 0;
	Local_2984.f_1 = 0;
	Local_2984.f_0 = 0;
	Local_2984.f_3 = 0;
	Local_2984.f_4 = 0;
	Local_2984.f_5 = 0;
	Local_2984.f_6 = 0;
	iLocal_658 = 0;
	iLocal_3167 = 1;
	iLocal_661 = 0;
	Local_2988.f_15 = 0;
	Local_2988.f_16 = 0;
	bLocal_3172 = false;
	bLocal_3173 = false;
	Local_2988.f_14 = 0;
	Local_2988.f_9 = 0;
	bLocal_3170 = false;
	bLocal_3171 = false;
	iLocal_2819 = 0;
	bLocal_2832 = false;
	iLocal_659 = 0;
	iLocal_689 = 0;
	iLocal_690 = 0;
	iLocal_662 = 0;
	iLocal_3197 = 0;
	iLocal_3199 = 0;
	iLocal_162 = 0;
	iLocal_3176 = -1;
	iLocal_3175 = -1;
	iLocal_3166 = 1000;
	Local_2988.f_11 = 0;
	iLocal_76 = 2;
	iLocal_77 = 2;
	iLocal_78 = 2;
	iLocal_79 = 0;
	iLocal_80 = 0;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_84 = 2;
	iLocal_85 = 2;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_704)
	{
		iLocal_704[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_704)
	{
		iLocal_705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_704)
	{
		iLocal_706[iVar0] = 0;
		iVar0++;
	}
}

void func_398()//Position - 0x655C2
{
	Local_3168.f_0 = 0;
	Local_3168.f_2 = 0;
	Local_3168.f_3 = { Local_601 };
	Local_3168.f_6 = 0;
	Local_3168.f_7 = 0;
	Local_3168.f_1 = 0f;
}

void func_400()//Position - 0x6561A
{
	switch (Global_112413)
	{
		case 0:
			iLocal_63 = 521286/*func_967*/;
			iLocal_62 = 521087/*func_966*/;
			iLocal_64 = 520130/*func_961*/;
			iLocal_61 = 518425/*func_957*/;
			iLocal_65 = 518361/*func_956*/;
			break;
		case 1:
			iLocal_63 = 517974/*func_955*/;
			iLocal_62 = 517399/*func_953*/;
			iLocal_64 = 517208/*func_951*/;
			iLocal_61 = 514858/*func_947*/;
			iLocal_65 = 514794/*func_946*/;
			break;
		case 2:
			iLocal_63 = 514559/*func_945*/;
			iLocal_62 = 514388/*func_944*/;
			iLocal_64 = 514274/*func_942*/;
			iLocal_61 = 510983/*func_935*/;
			iLocal_65 = 510919/*func_934*/;
			break;
		case 3:
			iLocal_63 = 510696/*func_933*/;
			iLocal_62 = 510542/*func_932*/;
			iLocal_64 = 510428/*func_930*/;
			iLocal_61 = 507779/*func_924*/;
			iLocal_65 = 507717/*func_923*/;
			break;
		case 6:
			iLocal_63 = 507482/*func_922*/;
			iLocal_62 = 507328/*func_921*/;
			iLocal_64 = 507214/*func_919*/;
			iLocal_61 = 503431/*func_911*/;
			iLocal_65 = 503369/*func_910*/;
			break;
		case 4:
			iLocal_63 = 503115/*func_908*/;
			iLocal_62 = 502961/*func_907*/;
			iLocal_64 = 502466/*func_905*/;
			iLocal_61 = 500718/*func_897*/;
			iLocal_65 = 500619/*func_895*/;
			break;
		case 5:
			iLocal_63 = 500243/*func_894*/;
			iLocal_62 = 500084/*func_893*/;
			iLocal_64 = 499892/*func_891*/;
			iLocal_61 = 497295/*func_883*/;
			iLocal_65 = 497192/*func_882*/;
			break;
		case 11:
			iLocal_63 = 496972/*func_881*/;
			iLocal_62 = 496812/*func_880*/;
			iLocal_64 = 496253/*func_878*/;
			iLocal_61 = 494766/*func_872*/;
			iLocal_65 = 494620/*func_871*/;
			break;
		case 7:
			iLocal_63 = 494319/*func_870*/;
			iLocal_62 = 494163/*func_869*/;
			iLocal_64 = 493648/*func_867*/;
			iLocal_61 = 491986/*func_860*/;
			iLocal_65 = 491905/*func_859*/;
			break;
		case 8:
			iLocal_63 = 485036/*func_827*/;
			iLocal_62 = 484569/*func_825*/;
			iLocal_64 = 484084/*func_823*/;
			iLocal_61 = 479868/*func_791*/;
			iLocal_65 = 479787/*func_790*/;
			break;
		case 9:
			iLocal_63 = 478867/*func_789*/;
			iLocal_62 = 478368/*func_787*/;
			iLocal_64 = 477465/*func_785*/;
			iLocal_61 = 474497/*func_781*/;
			iLocal_65 = 474272/*func_779*/;
			break;
		case 10:
			iLocal_63 = 469412/*func_737*/;
			iLocal_62 = 466986/*func_719*/;
			iLocal_64 = 465647/*func_715*/;
			iLocal_61 = 416645/*func_414*/;
			iLocal_65 = 415746/*func_401*/;
			break;
		default:
			break;
	}
}

void func_401()//Position - 0x65802
{
	int iVar0;
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_STOP");
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_FAIL");
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(4, iLocal_631);
	func_413(&Local_3200);
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	HUD::REMOVE_BLIP(&uLocal_3377);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (!PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_373();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
	}
	func_334(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	func_41(PLAYER::PLAYER_PED_ID(), &uLocal_3206, 0, 0, 1, 0);
	func_402();
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_670);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3192))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3192, -1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		VEHICLE::DELETE_VEHICLE(&iLocal_3192);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_602);
	TASK::REMOVE_WAYPOINT_RECORDING("ps_trucktarget_cw");
}

void func_402()//Position - 0x6590B
{
	__LIB_9__.func_981(&uLocal_43, 0, 0);
	__LIB_8__.func_770(1);
	MISC::SET_GAME_PAUSED(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), false))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}

void func_405()//Position - 0x65A5D
{
	if (iLocal_3175 != -1)
	{
		__LIB_2__.func_29(&iLocal_3175);
	}
	AUDIO::STOP_AUDIO_SCENES();
	func_406(0);
}

void func_406(int iParam0)//Position - 0x65A7C
{
	bLocal_2832 = iParam0;
	__LIB_30__.func_649(iParam0);
}

void func_408(int iParam0)//Position - 0x65AB0
{
	Local_2988.f_15 = iParam0;
	func_409(iParam0);
}

void func_409(var uParam0)//Position - 0x65AC5
{
	Local_2988.f_9 = uParam0;
}

void func_410(int iParam0)//Position - 0x65AD4
{
	Local_2984.f_5 = iParam0;
}

void func_411(int iParam0)//Position - 0x65AE3
{
	Local_2985.f_0 = iParam0;
	if (!Local_2985.f_0)
	{
		func_412(iParam0);
	}
}

void func_412(int iParam0)//Position - 0x65AFD
{
	Local_2985.f_1 = iParam0;
}

void func_413(var uParam0)//Position - 0x65B0C
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (!__LIB_2__.func_49(iLocal_3192))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3192, -1, false);
		ENTITY::GET_ENTITY_MATRIX(iLocal_3192, &Var3, &uVar1, &uVar1, &Var2);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			Var3 = { Vector(10f, 10f, 10f) * Var3 };
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(iVar0, iLocal_3192, Var2 + Var3, ENTITY::GET_ENTITY_SPEED(iLocal_3192), 0, ENTITY::GET_ENTITY_MODEL(iLocal_3192), 786469, 2f, 2f);
		}
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iLocal_3192, true) };
	}
}

int func_414()//Position - 0x65B85
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		func_549();
		if (PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
		}
		if ((iLocal_85 == 7 || iLocal_85 == 0) || iLocal_85 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_3192, false))
			{
				Local_3200 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3192, 0f, -5f, 1f) };
				if (iLocal_85 != 0 && iLocal_85 != 1)
				{
					func_548(Local_3200, &iLocal_3203);
				}
				Local_670.f_522 = { Local_3200 };
			}
		}
		else if (iLocal_85 >= 5)
		{
			func_547(&Local_3200, &uLocal_3377, 1);
		}
		switch (iLocal_85)
		{
			case 2:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_85 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						func_543();
						if (func_514(0))
						{
							func_545();
						}
						break;
					case 2:
						func_543();
						iLocal_85 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						func_543();
						__LIB_0__.func_151("PSCHUTE_1", -1);
						func_509("PS_POMT", "PS_POMT_1", "PS_POMT", "PS_POMT_2", 0);
						iLocal_3180++;
						__LIB_18__.func_276(&(Local_670.f_482));
						func_545();
						break;
					case 1:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 0.08f && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
							{
								ENTITY::SET_ENTITY_COORDS(Local_670.f_0, Local_628, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_670.f_0, fLocal_630);
								iLocal_651 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_651, Local_670.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_670.f_0, "Chassis"));
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_651, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_651, 0.6f);
							}
							func_508(&uLocal_3377);
							HUD::CLEAR_HELP(true);
							func_506();
							__LIB_6__.func_892(&(Local_670.f_482));
							iLocal_85 = 5;
							func_505(0);
						}
						else
						{
							func_543();
						}
						break;
					case 2:
						func_545();
						break;
				}
				break;
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_651) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_651) > 0.92f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Parachuting"), false);
					TASK::TASK_PARACHUTE(0, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				switch (func_546())
				{
					case 0:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 0f)
						{
							Local_670.f_482.f_3.f_2 = __LIB_0__.func_301(Local_670.f_482.f_3.f_2, -8.909f, 8.909f);
							Local_670.f_482.f_15.f_2 = (Local_670.f_482.f_15.f_2 + Local_670.f_482.f_3.f_2);
							Var2 = { __LIB_0__.func_298(Local_670.f_482.f_9, Local_670.f_482.f_3.f_2) };
							CAM::SET_CAM_PARAMS(Local_670.f_516, Local_670.f_482.f_6 + Var2, Local_670.f_482.f_15, Local_670.f_482.f_18, 300, 1, 1, 2);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_670.f_517, Local_670.f_516, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
							func_545();
						}
						break;
					case 1:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 0f)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::RENDER_SCRIPT_CAMS(false, true, SYSTEM::FLOOR((1000f * (1.1f - 0f))), false, false, 0);
							func_545();
						}
						break;
					case 2:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 1.1f)
						{
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false);
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_jump", 3))
							{
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								func_502();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_411(1);
								if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
								{
									CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
								}
								__LIB_0__.func_735(&(Local_670.f_482));
								iLocal_85 = 6;
								func_545();
							}
						}
						break;
				}
				break;
			case 6:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3192, false))
				{
					Local_3200 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3192, 0f, -5f, 1f) };
				}
				switch (func_546())
				{
					case 0:
						__LIB_0__.func_151("PSCHUTE_2", -1);
						func_509("PS_POMT", "PS_POMT_4", "PS_POMT", "PS_POMT_5", 0);
						iLocal_3180++;
						func_545();
						break;
					case 1:
						if ((ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
						{
							HUD::CLEAR_PRINTS();
							HUD::CLEAR_HELP(true);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
							WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
							__LIB_18__.func_276(&(Local_670.f_26));
							func_545();
						}
						else
						{
							if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3)
							{
								HUD::CLEAR_HELP(true);
							}
							else if (!Local_670.f_52.f_8)
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
									HUD::CLEAR_HELP(true);
									__LIB_0__.func_151("PSCHUTE_3", -1);
									Local_670.f_52.f_8 = 1;
								}
							}
							else if (!Local_670.f_52.f_9)
							{
								Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
								if (Var1.f_2 <= 100f)
								{
									HUD::CLEAR_HELP(true);
									if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
									{
										__LIB_0__.func_151("PSCHUTE_4_KM", 10000);
									}
									else
									{
										__LIB_0__.func_151("PSCHUTE_4", 10000);
									}
									Local_670.f_52.f_9 = 1;
								}
							}
							if (func_475() && func_474())
							{
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
								WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
								__LIB_18__.func_276(&(Local_670.f_26));
								func_545();
								iLocal_69 = 5;
							}
						}
						break;
					case 2:
						Local_670.f_52.f_8 = 0;
						Local_670.f_52.f_9 = 0;
						iLocal_85 = 7;
						iLocal_3177 = 1;
						__LIB_6__.func_892(&iLocal_3203);
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (__LIB_7__.func_78(&(Local_670.f_26)) > 0.25f)
						{
							__LIB_0__.func_735(&(Local_670.f_26));
							func_545();
						}
						break;
					case 2:
						iLocal_85 = func_472();
						if (iLocal_85 != 7)
						{
							iLocal_3177 = 1;
							iLocal_3180 = 4;
							if (iLocal_85 == 0)
							{
								func_471(Local_3200);
								func_470(0);
							}
							iLocal_654 = 1;
							func_545();
						}
						break;
				}
				break;
			case 0:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 1);
							func_369(0);
							func_448("PS_POMT", "PS_POMT_6", "PS_POMT_7", "PS_POMT_8", "PS_POMT_9", 0, 0);
							iLocal_3178++;
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_653) > 500)
							{
								func_416(1);
								func_545();
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 1:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 1);
								if (iLocal_654 == 1)
								{
									func_448("PS_POMT", "PS_POMT_6", "PS_POMT_7", "PS_POMT_8", "PS_POMT_9", 0, 0);
								}
								else
								{
									func_448("PS_POMT", "PS_POMT_6", "PS_POMT_7", "PS_POMT_8", "", 0, 0);
								}
								iLocal_3178++;
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

int func_415()//Position - 0x6641E
{
	return iLocal_2819;
}

void func_416(bool bParam0)//Position - 0x66429
{
	if (func_447())
	{
		if (bParam0 == 1)
		{
		}
		bParam0 = false;
	}
	__LIB_2__.func_29(&iLocal_3176);
	if (bParam0)
	{
		func_440();
	}
	else
	{
		func_369(1);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(false);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_FLOATING_HELP(0, true);
	func_438();
	func_437();
	func_411(0);
	func_435(0);
	func_408(0);
	func_433(0);
	func_428(1);
	func_427(0);
	func_426(0);
	func_421(0, 6);
	func_410(0);
	func_420();
	func_418(0);
	HUD::DISPLAY_RADAR(false);
	__LIB_0__.func_735(&iLocal_624);
	if (bParam0)
	{
		func_417(1);
		iLocal_2830 = Global_112413;
	}
}

void func_417(int iParam0)//Position - 0x6650D
{
	iLocal_162 = iParam0;
}

void func_418(bool bParam0)//Position - 0x6651A
{
	bLocal_3172 = bParam0;
	func_419(bParam0);
}

void func_419(bool bParam0)//Position - 0x6652D
{
	bLocal_3170 = bParam0;
}

void func_420()//Position - 0x6653A
{
	Local_2988.f_10 = 0;
}

void func_421(int iParam0, int iParam1)//Position - 0x66548
{
	func_425();
	func_424();
	func_422(iParam1);
	func_410(iParam0);
	Local_2984.f_4 = iParam0;
}

void func_422(int iParam0)//Position - 0x6656B
{
	Local_2984.f_5 = 1;
	Local_2984.f_7 = iParam0;
	switch (Local_2984.f_7)
	{
		case 0:
			Local_2984.f_8 = "PS_BAR_ROLL";
			Local_2984.f_11 = 0.046f;
			Local_2984.f_12 = 0.692f;
			Local_2984.f_10 = 360f;
			break;
		case 1:
			Local_2984.f_8 = "PS_BAR_INVERT";
			Local_2984.f_11 = 0.046f;
			Local_2984.f_12 = 0.692f;
			Local_2984.f_10 = 15f;
			break;
		case 2:
		case 3:
		case 4:
			Local_2984.f_8 = "PS_BAR_KNIFE";
			Local_2984.f_11 = 0.046f;
			Local_2984.f_12 = 0.692f;
			Local_2984.f_10 = 5f;
			break;
		case 5:
			Local_2984.f_8 = "PS_BAR_LOOP";
			Local_2984.f_11 = 0.046f;
			Local_2984.f_12 = 0.692f;
			Local_2984.f_10 = 360f;
			break;
		case 6:
			Local_2984.f_8 = "PS_BAR_IMMEL";
			Local_2984.f_11 = 0.046f;
			Local_2984.f_12 = 0.692f;
			Local_2984.f_10 = 180f;
			break;
		case 7:
			Local_2984.f_8 = "PS_BAR_IMROLL";
			Local_2984.f_11 = 0.046f;
			Local_2984.f_12 = 0.692f;
			Local_2984.f_10 = 360f;
			break;
		case 8:
			Local_2984.f_8 = "PS_BAR_HEALTH";
			Local_2984.f_11 = 0.046f;
			Local_2984.f_12 = 0.692f;
			Local_2984.f_10 = 20f;
			break;
	}
	Local_2984.f_8 = Local_2984.f_8;
	Local_2984.f_11 = Local_2984.f_11;
	Local_2984.f_12 = Local_2984.f_12;
	Local_2984.f_10 = Local_2984.f_10;
	func_423();
}

void func_423()//Position - 0x66715
{
	Local_2984.f_9 = 0f;
	__LIB_0__.func_735(&(Local_670.f_20));
}

void func_424()//Position - 0x6672C
{
	Local_2984.f_3 = 0;
	Local_2984.f_1 = 0;
	Local_2984.f_0 = 0;
	Local_2984.f_3 = 0;
	Local_2984.f_4 = 0;
}

void func_425()//Position - 0x66750
{
	Local_670.f_32.f_1 = 0;
	Local_670.f_32 = 0;
	Local_670.f_32.f_2 = 0f;
	Local_670.f_32.f_3 = 0f;
	Local_670.f_32.f_6 = 0;
	__LIB_0__.func_735(&(Local_670.f_32.f_7));
}

void func_426(int iParam0)//Position - 0x66789
{
	func_425();
	func_424();
	func_422(5);
	func_410(iParam0);
	Local_2984.f_3 = iParam0;
}

void func_427(int iParam0)//Position - 0x667AB
{
	func_425();
	func_424();
	func_422(0);
	func_410(iParam0);
	Local_2984.f_1 = iParam0;
}

void func_428(int iParam0)//Position - 0x667CD
{
	func_406(iParam0);
	if (iLocal_69 == 0)
	{
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "IB_YES" /* GXT: Yes */, 2, 201, 1, 1, 0);
		__LIB_12__.func_133(&iLocal_1698, "IB_NO" /* GXT: No */, 2, 202, 1, 1, 0);
	}
	else
	{
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "PSER_CONTINUE", 2, 201, 1, 1, 0);
		__LIB_12__.func_133(&iLocal_1698, "IB_QUIT" /* GXT: Quit */, 2, 202, 1, 1, 0);
		__LIB_12__.func_133(&iLocal_1698, "PSER_RETRY", 2, 203, 1, 1, 0);
	}
	__LIB_6__.func_892(&(Local_670.f_17));
	__LIB_0__.func_518(iParam0);
	iLocal_2819 = iParam0;
}

void func_433(int iParam0)//Position - 0x669D6
{
	func_434(iParam0);
}

void func_434(var uParam0)//Position - 0x669E4
{
	Local_2988.f_14 = uParam0;
}

void func_435(int iParam0)//Position - 0x669F3
{
	Local_2988.f_16 = iParam0;
	func_436(iParam0);
}

void func_436(var uParam0)//Position - 0x66A08
{
	Local_2988.f_17 = uParam0;
}

void func_437()//Position - 0x66A17
{
	func_398();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_438()//Position - 0x66A28
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		func_439(Local_109.f_2[iVar0 /*5*/].f_1);
		iVar0++;
	}
}

void func_439(char* sParam0)//Position - 0x66A54
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(Local_109.f_2[iVar0 /*5*/].f_1) && MISC::ARE_STRINGS_EQUAL(Local_109.f_2[iVar0 /*5*/].f_1, sParam0)) || (!MISC::IS_STRING_NULL_OR_EMPTY(Local_109.f_2[iVar0 /*5*/].f_2) && MISC::ARE_STRINGS_EQUAL(Local_109.f_2[iVar0 /*5*/].f_2, sParam0)))
		{
			Local_109.f_2[iVar0 /*5*/] = 0;
			Local_109.f_2[iVar0 /*5*/].f_1 = 0;
			Local_109.f_2[iVar0 /*5*/].f_2 = 0;
			Local_109.f_2[iVar0 /*5*/].f_3 = 0f;
			Local_109.f_2[iVar0 /*5*/].f_4 = 0f;
			Local_109.f_0 = (Local_109.f_0 - 1);
			return;
		}
		iVar0++;
	}
}

void func_440()//Position - 0x66B01
{
	switch (Global_112413)
	{
		case 0:
			__LIB_24__.func_943(181, 0, 0);
			break;
		case 1:
			__LIB_24__.func_943(182, 0, 0);
			break;
		case 2:
			__LIB_24__.func_943(183, 0, 0);
			break;
		case 3:
			__LIB_24__.func_943(184, 0, 0);
			break;
		case 6:
			__LIB_24__.func_943(185, 0, 0);
			break;
		case 4:
			__LIB_24__.func_943(186, 0, 0);
			break;
		case 5:
			__LIB_24__.func_943(187, 0, 0);
			break;
		case 11:
			__LIB_24__.func_943(188, 0, 0);
			break;
		case 7:
			__LIB_24__.func_943(189, 0, 0);
			break;
		case 8:
			__LIB_24__.func_943(190, 0, 0);
			break;
		case 9:
			__LIB_24__.func_943(191, 0, 0);
			break;
		case 10:
			__LIB_24__.func_943(192, 0, 0);
			break;
	}
}

int func_447()//Position - 0x67264
{
	if (iLocal_69 == 0)
	{
		return 0;
	}
	return 1;
}

void func_448(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)//Position - 0x67277
{
	if (iLocal_666 >= 90)
	{
		func_451(sParam0, sParam3, 0);
	}
	else if (iLocal_666 >= 80)
	{
		func_451(sParam0, sParam2, 0);
	}
	else if (iLocal_666 >= 70)
	{
		func_451(sParam0, sParam1, 0);
	}
	else
	{
		switch (iLocal_69)
		{
			case 25:
			case 9:
			case 16:
			case 13:
			case 0:
				break;
			case 3:
			case 4:
			case 5:
			case 12:
			case 8:
			case 11:
			case 14:
			case 18:
			case 20:
			case 21:
			case 17:
				func_450();
				break;
			default:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6) && iLocal_652 == 3)
				{
					func_451(sParam0, sParam6, 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iLocal_652 == 2)
				{
					func_451(sParam0, sParam5, 0);
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4) && iLocal_652 == 1)
				{
					func_451(sParam0, sParam4, 0);
				}
				else
				{
					func_449();
				}
				break;
			}
	}
}

void func_449()//Position - 0x67399
{
	struct<2> Var0;
	char cVar1[16];
	int iVar2;
	int iVar3;
	StringCopy(&Var0, "PS_GENF", 16);
	StringCopy(&cVar1, "PS_GENF_", 16);
	iVar2 = 4;
	iVar3 = __LIB_0__.func_310((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % iVar2 + 1), 1, iVar2);
	StringIntConCat(&cVar1, iVar3, 16);
	func_451(&Var0, &cVar1, 0);
}

void func_450()//Position - 0x673DD
{
	struct<2> Var0;
	char cVar1[16];
	int iVar2;
	StringCopy(&Var0, "PS_SPECF", 16);
	StringCopy(&cVar1, "PS_SPECF_", 16);
	iVar2 = 1;
	switch (iLocal_69)
	{
		case 3:
			iVar2 = 5;
			break;
		case 4:
			iVar2 = 5;
			break;
		case 5:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 3;
			}
			break;
		case 12:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 2;
			}
			else
			{
				iVar2 = 3;
			}
			break;
		case 8:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
				{
					iVar2 = 2;
				}
				else
				{
					iVar2 = 3;
				}
			}
			else
			{
				iVar2 = 7;
			}
			break;
		case 9:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
				{
					iVar2 = 4;
				}
				else
				{
					iVar2 = 6;
				}
			}
			else if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 9;
			}
			else
			{
				iVar2 = 10;
			}
			break;
		case 11:
			iVar2 = 8;
			break;
		case 13:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
				{
					iVar2 = 7;
				}
				else
				{
					iVar2 = 6;
				}
			}
			else if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 9;
			}
			else
			{
				iVar2 = 10;
			}
			break;
		case 14:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 10;
			}
			break;
		case 16:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
				{
					iVar2 = 7;
				}
				else
				{
					iVar2 = 6;
				}
			}
			else if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 9;
			}
			else
			{
				iVar2 = 10;
			}
			break;
		case 18:
			iVar2 = 6;
			break;
		case 20:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 9;
			}
			else
			{
				iVar2 = 10;
			}
			break;
		case 21:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 9;
			}
			else
			{
				iVar2 = 1;
			}
			break;
		case 17:
			if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2) == 1)
			{
				iVar2 = 1;
			}
			else
			{
				iVar2 = 10;
			}
			break;
	}
	StringIntConCat(&cVar1, iVar2, 16);
	func_451(&Var0, &cVar1, 0);
}

int func_451(char* sParam0, char* sParam1, bool bParam2)//Position - 0x6762A
{
	if (__LIB_0__.func_75())
	{
		__LIB_6__.func_833();
	}
	if (bParam2)
	{
		return __LIB_35__.func_901(&uLocal_2989, "MGPSAUD", sParam0, sParam1, 9, 0, 0);
	}
	return __LIB_35__.func_901(&uLocal_2989, "MGPSAUD", sParam0, sParam1, 5, 0, 0);
}

void func_464(struct<3> Param0, bool bParam1)//Position - 0x67D21
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	if (!bParam1)
	{
		if (iLocal_658)
		{
			return;
		}
		else
		{
			func_468(Param0);
		}
		if (!Local_670.f_52.f_7 && !func_447())
		{
			func_467(Local_670.f_52, Local_670.f_42);
		}
	}
	if (func_447())
	{
		return;
	}
	iVar2 = func_17(Local_670.f_52, Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/], 0);
	if (!bParam1)
	{
		iVar1 = func_17(Local_670.f_52, Local_670.f_42, 0);
		if (func_22(Local_670.f_52, 4) || func_22(Local_670.f_52, 3))
		{
			bVar0 = true;
		}
		else if (func_22(Local_670.f_52, 2))
		{
			if (Local_670.f_52.f_7)
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		iVar1 = iLocal_671[Global_112413];
	}
	bVar3 = false;
	bVar4 = false;
	if (!func_447() && iVar1 >= 70)
	{
		if (iVar1 > iVar2)
		{
			bVar3 = true;
		}
		else if (iVar1 == iVar2)
		{
			if (func_447())
			{
				bVar3 = false;
			}
			else
			{
				bVar3 = true;
			}
			bVar4 = true;
		}
	}
	else if (bVar0)
	{
		bVar3 = false;
		bVar4 = true;
	}
	else if (__LIB_0__.func_114())
	{
		bVar3 = true;
	}
	else
	{
		bVar4 = true;
	}
	iLocal_666 = iVar1;
	Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_1 = Local_670.f_42;
	Local_670.f_42.f_1 = Local_670.f_42;
	Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_2 = Local_670.f_42.f_3;
	Local_670.f_42.f_2 = Local_670.f_42.f_3;
	if (iVar1 >= 90)
	{
		Local_670.f_42.f_9 = 3;
		Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_9 = 3;
	}
	else if (iVar1 >= 80)
	{
		Local_670.f_42.f_9 = 2;
		Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_9 = 2;
	}
	else if (iVar1 >= 70)
	{
		Local_670.f_42.f_9 = 1;
		Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_9 = 1;
	}
	if (bVar3)
	{
		if (iVar1 >= 90)
		{
			Local_670.f_42.f_8 = 3;
			Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_8 = 3;
		}
		else if (iVar1 >= 80)
		{
			Local_670.f_42.f_8 = 2;
			Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_8 = 2;
		}
		else if (iVar1 >= 70)
		{
			Local_670.f_42.f_8 = 1;
			Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_8 = 1;
		}
		iLocal_671[Global_112413] = iVar1;
		if (__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) == 0)
		{
			__LIB_0__.func_503(71, 1);
		}
		Local_670.f_42.f_7 = 1;
		Local_670.f_52.f_5 = 2;
		bVar4 = true;
	}
	bVar5 = false;
	if (bVar4)
	{
		if (func_22(Local_670.f_52, 0))
		{
			if (bVar3 || __LIB_0__.func_114())
			{
				if (Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/] < 0f || Local_670.f_42 < Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/])
				{
					bVar5 = true;
				}
			}
		}
		else if (func_22(Local_670.f_52, 2))
		{
			if (bVar3 || __LIB_0__.func_114())
			{
				if (Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_3 < 0f || Local_670.f_42.f_3 < Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_3)
				{
					bVar5 = true;
				}
			}
		}
		else if (func_22(Local_670.f_52, 4))
		{
			if (bVar3 || __LIB_0__.func_114())
			{
				if (Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_6 < 0f || Local_670.f_42.f_6 > Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/].f_6)
				{
					bVar5 = true;
				}
			}
		}
	}
	if (bVar5)
	{
		Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/] = { Local_670.f_42 };
	}
	iLocal_658 = 1;
}

void func_467(struct<38> Param0, struct<10> Param1)//Position - 0x681C8
{
	int iVar0;
	if (iLocal_69 == 0)
	{
		if (func_22(Param0, 4))
		{
			iVar0 = func_18(Param0, Param1);
			if (iVar0 < 70)
			{
				iLocal_69 = 7;
			}
		}
		if (func_22(Param0, 3))
		{
			iVar0 = func_19(Param0, Param1);
			if (iVar0 < 70)
			{
				iLocal_69 = 10;
			}
		}
		if (func_22(Param0, 2))
		{
			iVar0 = func_20(Param0, Param1);
			if (iVar0 < 70)
			{
				iLocal_69 = 2;
			}
		}
		if (func_22(Param0, 0))
		{
			iVar0 = func_21(Param0, Param1);
			if (iVar0 < 70)
			{
				iLocal_69 = 1;
			}
		}
	}
}

void func_468(struct<3> Param0)//Position - 0x68273
{
	if (func_22(Local_670.f_52, 0))
	{
		if (Local_670.f_90 > 1)
		{
			Local_670.f_42 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(Local_670.f_90.f_12));
		}
		else
		{
			Local_670.f_42 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(__LIB_7__.func_42(&(Local_670.f_14))));
		}
	}
	else
	{
		Local_670.f_42 = -1f;
	}
	if (func_22(Local_670.f_52, 2))
	{
		if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			Local_670.f_42.f_4 = (Local_670.f_42.f_4 + (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) / 30f));
		}
		else
		{
			Local_670.f_42.f_4 = 1f;
		}
		if (!__LIB_0__.func_78(Local_601, Param0, 0))
		{
			if ((!__LIB_2__.func_49(Local_670.f_0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false))
			{
				Local_670.f_42.f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true), Param0, false);
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) || ENTITY::GET_ENTITY_MODEL(Local_670.f_0) != joaat("cargoplane"))
			{
				Local_670.f_42.f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0, false);
			}
		}
		else
		{
			Local_670.f_42.f_3 = -2f;
		}
		if (Global_112413 == 9 || Global_112413 == 10)
		{
			Local_670.f_42.f_3 = (Local_670.f_42.f_3 * Local_670.f_42.f_4);
		}
	}
	else
	{
		Local_670.f_42.f_3 = -1f;
	}
	if (func_22(Local_670.f_52, 3))
	{
	}
	else
	{
		Local_670.f_42.f_5 = -1;
	}
	if (func_22(Local_670.f_52, 4))
	{
		Local_670.f_42.f_6 = __LIB_7__.func_42(&(Local_670.f_23));
	}
	else
	{
		Local_670.f_42.f_6 = -1f;
	}
	iLocal_658 = 1;
}

void func_470(int iParam0)//Position - 0x68473
{
	if (Local_670.f_90.f_5)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_56, "HUD_MINI_GAME_SOUNDSET", true);
			break;
		case 1:
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_58, "HUD_MINI_GAME_SOUNDSET", true);
			break;
		case 2:
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_57, "HUD_MINI_GAME_SOUNDSET", true);
			break;
	}
}

void func_471(struct<3> Param0)//Position - 0x684D1
{
	var uVar0;
	var uVar1;
	var uVar2;
	if (Local_670.f_521 == 0)
	{
		HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &(Local_670.f_519));
		Local_670.f_522 = { Param0 };
		Local_670.f_521 = 1;
	}
}

int func_472()//Position - 0x68507
{
	struct<3> Var0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_69 = 25;
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_69 = 13;
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_3193, false))
	{
		iLocal_69 = 9;
		return 1;
	}
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_3193, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		if (Var0.f_2 > 17f)
		{
			iLocal_69 = 17;
			return 1;
		}
		else
		{
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !iLocal_3199)
			{
				iLocal_3199 = 1;
				PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 500, 1500, 1, true, true, false);
				PED::SET_PED_RAGDOLL_ON_COLLISION(PLAYER::PLAYER_PED_ID(), false);
			}
			return 7;
		}
	}
	if (Var0.f_2 < -2.5f || Var0.f_2 > 4.5f)
	{
		iLocal_69 = 2;
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3193, false))
	{
		if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3193))
		{
			Local_670.f_42.f_3 = 0f;
			iLocal_671[Global_112413] = 90;
			return 0;
		}
	}
	Var0.f_0 = __LIB_2__.func_320((MISC::ABSF(Var0.f_0) - 1.305f), 0f);
	if (Var0.f_1 >= 0f)
	{
		Var0.f_1 = __LIB_2__.func_320((Var0.f_1 - 5.98f), 0f);
	}
	else
	{
		Var0.f_1 = __LIB_2__.func_320((-Var0.f_1 - 6.21f), 0f);
	}
	if (Var0.f_0 == 0f && Var0.f_1 == 0f)
	{
		Local_670.f_42.f_3 = 0f;
		iLocal_671[Global_112413] = 90;
		return 0;
	}
	if (Var0.f_1 == 0f)
	{
		if (Var0.f_0 > Local_708[10 /*38*/].f_35)
		{
			iLocal_69 = 2;
			return 1;
		}
		else
		{
			Local_670.f_42.f_3 = Var0.f_0;
			if (Local_670.f_42.f_3 > Local_708[10 /*38*/].f_34)
			{
				iLocal_671[Global_112413] = 70;
			}
			else
			{
				iLocal_671[Global_112413] = 80;
			}
			return 0;
		}
	}
	if (Var0.f_0 == 0f)
	{
		if (Var0.f_1 > Local_708[10 /*38*/].f_35)
		{
			iLocal_69 = 2;
			return 1;
		}
		else
		{
			Local_670.f_42.f_3 = Var0.f_1;
			if (Local_670.f_42.f_3 > Local_708[10 /*38*/].f_34)
			{
				iLocal_671[Global_112413] = 70;
			}
			else
			{
				iLocal_671[Global_112413] = 80;
			}
			return 0;
		}
	}
	Var0.f_0 = ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1));
	if (Var0.f_0 > (Local_708[10 /*38*/].f_35 * Local_708[10 /*38*/].f_35))
	{
		iLocal_69 = 2;
		return 1;
	}
	Local_670.f_42.f_3 = SYSTEM::SQRT(Var0.f_0);
	if (Local_670.f_42.f_3 > Local_708[10 /*38*/].f_34)
	{
		iLocal_671[Global_112413] = 70;
	}
	else
	{
		iLocal_671[Global_112413] = 80;
	}
	return 0;
}

int func_474()//Position - 0x687B8
{
	if (__LIB_0__.func_736(&iLocal_618))
	{
		if (__LIB_32__.func_785(&iLocal_618, 30f))
		{
			return 1;
		}
		if (iLocal_650 == 1 && __LIB_26__.func_294(&iLocal_618, (30f * 0.5f)))
		{
			func_451("PS_INTER", "PS_INTER_6", 0);
			iLocal_650++;
		}
	}
	return 0;
}

int func_475()//Position - 0x68818
{
	func_499();
	if (!__LIB_0__.func_86(Local_674) && fLocal_668 > 0f)
	{
		if (__LIB_10__.func_567(Local_674, 0) > (fLocal_668 + 400f))
		{
			if (!__LIB_0__.func_736(&iLocal_618))
			{
				if (!func_495())
				{
					func_494(9, Local_674);
				}
				func_451("PS_INTER", "PS_INTER_4", 1);
				__LIB_18__.func_276(&iLocal_618);
			}
			return 1;
		}
	}
	if (__LIB_0__.func_736(&iLocal_618))
	{
		func_476();
		__LIB_0__.func_735(&iLocal_618);
	}
	return 0;
}

void func_476()//Position - 0x688A1
{
	func_371(&(Local_670.f_181[0 /*6*/]));
	if (!func_493())
	{
		if (func_492() <= func_491() && func_490(Local_670.f_90.f_7))
		{
			func_478(Local_670.f_90.f_7, 0);
		}
		if (func_477() == 2 || func_477() == 3)
		{
			if (func_492() < func_491() && func_490(Local_670.f_90.f_8))
			{
				func_478(Local_670.f_90.f_8, 1);
			}
		}
	}
}

int func_477()//Position - 0x68922
{
	return Local_670.f_90;
}

void func_478(int iParam0, bool bParam1)//Position - 0x6892F
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	int iVar4;
	char cVar5[16];
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	struct<3> Var10;
	if (__LIB_0__.func_78(Local_670.f_181[iParam0 /*6*/].f_2, Local_601, 0))
	{
		return;
	}
	if (HUD::DOES_BLIP_EXIST(Local_670.f_181[iParam0 /*6*/]))
	{
		HUD::REMOVE_BLIP(&(Local_670.f_181[iParam0 /*6*/]));
	}
	if (Local_670.f_181[iParam0 /*6*/].f_1 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(Local_670.f_181[iParam0 /*6*/].f_1);
	}
	fVar1 = 1.2f;
	fVar2 = 15f;
	bVar3 = false;
	StringCopy(&cVar5, "PS_BLPNAME", 16);
	if (iParam0 == Local_670.f_90.f_10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
		{
			Var10 = { Local_670.f_181[iParam0 /*6*/].f_2 + __LIB_0__.func_79(Local_670.f_181[iParam0 /*6*/].f_2 - ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true)) };
		}
	}
	else
	{
		Var10 = { Local_670.f_181[iParam0 + 1 /*6*/].f_2 };
	}
	if (bParam1)
	{
		fVar1 = 0.7f;
		fVar2 = 10f;
	}
	iVar4 = func_488(Local_670.f_181[iParam0 /*6*/].f_5);
	__LIB_11__.func_746(__LIB_21__.func_656(func_486(Local_670.f_181[iParam0 /*6*/].f_5)), &iVar6, &iVar7, &iVar8, &uVar9);
	if (Local_670.f_90 != 5)
	{
		switch (Local_670.f_181[iParam0 /*6*/].f_5)
		{
			case 9:
				bVar3 = true;
				break;
			case 2:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(func_482(iParam0), Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				break;
			case 1:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(func_482(iParam0), Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				break;
			case 3:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(40, Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				StringCopy(&cVar5, "PS_BLPINVRT", 16);
				break;
			case 4:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(38, Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				StringCopy(&cVar5, "PS_BLPKNIFE", 16);
				break;
			case 5:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(39, Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				StringCopy(&cVar5, "PS_BLPKNIFE", 16);
				break;
			case 6:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(38, Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				StringCopy(&cVar5, "PS_BLPKNIFE", 16);
				break;
			case 7:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(39, Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				StringCopy(&cVar5, "PS_BLPKNIFE", 16);
				break;
			case 8:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(16, Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				break;
			case 10:
				iVar0 = GRAPHICS::CREATE_CHECKPOINT(16, Local_670.f_181[iParam0 /*6*/].f_2, Var10, fVar2, iVar6, iVar7, iVar8, __LIB_30__.func_545(Local_670.f_181[iParam0 /*6*/].f_2, 25, 200), 0);
				break;
			}
	}
	Local_670.f_181[iParam0 /*6*/].f_1 = iVar0;
	Local_670.f_181[iParam0 /*6*/] = __LIB_0__.func_392(Local_670.f_181[iParam0 /*6*/].f_2, 0);
	HUD::SET_BLIP_SCALE(Local_670.f_181[iParam0 /*6*/], fVar1);
	HUD::SET_BLIP_COLOUR(Local_670.f_181[iParam0 /*6*/], iVar4);
	if (Local_670.f_181[iParam0 /*6*/].f_5 == 8)
	{
		HUD::SET_BLIP_SPRITE(Local_670.f_181[iParam0 /*6*/], 38);
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("PS_sFINISH");
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(Local_670.f_181[iParam0 /*6*/]);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME(&cVar5);
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(Local_670.f_181[iParam0 /*6*/]);
	}
	HUD::SET_BLIP_FLASHES(Local_670.f_181[iParam0 /*6*/], bVar3);
}

int func_482(int iParam0)//Position - 0x68E31
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (iParam0 < Local_670.f_90.f_10)
	{
		Var0 = { Local_670.f_181[iParam0 /*6*/].f_2 };
		if (iParam0 + 1 == Local_670.f_90.f_10)
		{
			Var1 = { Local_670.f_181[0 /*6*/].f_2 };
		}
		else
		{
			Var1 = { Local_670.f_181[iParam0 + 1 /*6*/].f_2 };
		}
		if ((iParam0 - 1) >= 0)
		{
			Var2 = { Local_670.f_181[(iParam0 - 1) /*6*/].f_2 };
		}
		Var3 = { Var2 - Var0 };
		Var4 = { Var1 - Var0 };
		fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1);
		if (fVar5 > 180f)
		{
			fVar5 = (360f - fVar5);
		}
		if (fVar5 < fLocal_29)
		{
			return 14;
		}
		else if (fVar5 < fLocal_30)
		{
			return 13;
		}
		else if (fVar5 < fLocal_31)
		{
			return 12;
		}
	}
	return 12;
}

int func_486(int iParam0)//Position - 0x68FA3
{
	switch (iParam0)
	{
		case 3:
			return 9;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			return 18;
			break;
	}
	return __LIB_1__.func_164();
}

int func_488(int iParam0)//Position - 0x68FEE
{
	switch (iParam0)
	{
		case 3:
			return 3;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			return 2;
			break;
	}
	return 5;
}

int func_490(int iParam0)//Position - 0x69069
{
	if (iParam0 < 0)
	{
		return 0;
	}
	else if (Local_670.f_181[iParam0 /*6*/].f_5 != 0)
	{
		return 1;
	}
	return 0;
}

int func_491()//Position - 0x69092
{
	return Local_670.f_90.f_10;
}

int func_492()//Position - 0x690A1
{
	return Local_670.f_90.f_7;
}

bool func_493()//Position - 0x690B0
{
	return Local_670.f_90.f_3;
}

void func_494(int iParam0, struct<3> Param1)//Position - 0x690BF
{
	int iVar0;
	if (iParam0 == 9)
	{
		Local_670.f_181[0 /*6*/].f_2 = { Param1 };
		Local_670.f_181[0 /*6*/].f_5 = iParam0;
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_670.f_90.f_10 + 2)
	{
		if (iVar0 > 0)
		{
			if (!func_490(iVar0))
			{
				Local_670.f_181[iVar0 /*6*/].f_2 = { Param1 };
				Local_670.f_181[iVar0 /*6*/].f_5 = iParam0;
				Local_670.f_90.f_10++;
				return;
			}
		}
		iVar0++;
	}
}

int func_495()//Position - 0x6914B
{
	if (Local_670.f_181[0 /*6*/].f_5 == 9)
	{
		return 1;
	}
	return 0;
}

void func_499()//Position - 0x691D5
{
	struct<3> Var0;
	struct<3> Var1;
	Local_674 = { func_501() };
	Var0 = { func_501() };
	if (func_492() > 1)
	{
		Var1 = { func_500() };
	}
	else
	{
		Var1 = { Local_628 };
	}
	Var0.f_2 = 0f;
	Var1.f_2 = 0f;
	fLocal_668 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
}

Vector3 func_500()//Position - 0x69224
{
	if (func_490((Local_670.f_90.f_7 - 1)))
	{
		return Local_670.f_181[(Local_670.f_90.f_7 - 1) /*6*/].f_2;
	}
	return Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2;
}

Vector3 func_501()//Position - 0x69265
{
	if (func_490(Local_670.f_90.f_7))
	{
		return Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2;
	}
	return Local_670.f_181[Local_670.f_90.f_10 /*6*/].f_2;
}

void func_502()//Position - 0x692A5
{
	__LIB_6__.func_892(&(Local_670.f_14));
}

void func_505(int iParam0)//Position - 0x69321
{
	iLocal_611 = iParam0;
}

void func_506()//Position - 0x6932E
{
	struct<3> Var0;
	if (!CAM::DOES_CAM_EXIST(Local_670.f_517))
	{
		Local_670.f_517 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		CAM::SET_CAM_COORD(Local_670.f_517, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_670.f_0, 2f, -0.3f, -7.7824f));
		Var0 = { CAM::GET_CAM_ROT(Local_670.f_516, 2) };
		Var0.f_0 = 0f;
		CAM::SET_CAM_ROT(Local_670.f_517, Var0, 2);
		CAM::SET_CAM_FOV(Local_670.f_517, CAM::GET_CAM_FOV(Local_670.f_516));
		CAM::SET_CAM_NEAR_CLIP(Local_670.f_517, __LIB_13__.func_63());
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	__LIB_6__.func_892(&(Local_670.f_482));
}

void func_508(var uParam0)//Position - 0x693F1
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_3192, false))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_3192, true, true, false);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_3193, false) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_3192))
		{
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_3192, iLocal_3193, 1f);
			*uParam0 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3193);
		}
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3192, -1, false), iLocal_3192, "ps_trucktarget_cw", 262144, 0, 18, -1, 5f, true, 2f);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_3192, 2000);
	}
}

int func_509(char* sParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)//Position - 0x6946F
{
	if (__LIB_0__.func_75())
	{
		__LIB_6__.func_833();
		while (__LIB_0__.func_75())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (bParam4)
	{
		return __LIB_40__.func_698(&uLocal_2989, "MGPSAUD", sParam0, sParam1, sParam2, sParam3, 9, 0, 0);
	}
	return __LIB_40__.func_698(&uLocal_2989, "MGPSAUD", sParam0, sParam1, sParam2, sParam3, 5, 0, 0);
}

int func_514(int iParam0)//Position - 0x6992E
{
	func_524();
	if (!__LIB_0__.func_736(&(Local_670.f_17)))
	{
		__LIB_6__.func_892(&(Local_670.f_17));
	}
	else if (__LIB_26__.func_294(&(Local_670.f_17), 1.5f))
	{
		if (__LIB_37__.func_493(&Local_3154, 1, 1, 1, 3, 1, 0, 0))
		{
			__LIB_0__.func_735(&(Local_670.f_17));
			return 1;
		}
		if (iParam0 && func_515())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	return 0;
}

int func_515()//Position - 0x6999B
{
	if (__LIB_0__.func_517(Local_3154.f_1, 8))
	{
		return 1;
	}
	return 0;
}

void func_524()//Position - 0x69DD8
{
	struct<6> Var0;
	int iVar1;
	iVar1 = Global_112413;
	__LIB_35__.func_898(Var0, 0, 0, 0, 0, iVar1);
}

void func_543()//Position - 0x6ACF1
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	__LIB_30__.func_665(&uVar1, &uVar2, &iVar3, &iVar4, PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()), 1);
	Var0.f_0 = (SYSTEM::TO_FLOAT(iVar3) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar4) / -128f);
	if (PAD::IS_LOOK_INVERTED())
	{
		Var0.f_1 = (Var0.f_1 * -1f);
	}
	Local_670.f_482.f_12.f_2 = (Local_670.f_482.f_12.f_2 - ((Var0.f_0 * MISC::GET_FRAME_TIME()) * 130f));
	Local_670.f_482.f_12 = (Local_670.f_482.f_12 + ((Var0.f_1 * MISC::GET_FRAME_TIME()) * 130f));
	if (MISC::ABSF(Local_670.f_482.f_12.f_2) > 0.001f)
	{
		Local_670.f_482.f_12.f_2 = (Local_670.f_482.f_12.f_2 - ((Local_670.f_482.f_12.f_2 * MISC::GET_FRAME_TIME()) * 4f));
	}
	else
	{
		Local_670.f_482.f_12.f_2 = 0f;
	}
	if (MISC::ABSF(Local_670.f_482.f_12) > 0.001f)
	{
		Local_670.f_482.f_12 = (Local_670.f_482.f_12 - ((Local_670.f_482.f_12 * MISC::GET_FRAME_TIME()) * 5f));
	}
	else
	{
		Local_670.f_482.f_12 = 0f;
	}
	Local_670.f_482.f_3.f_2 = (Local_670.f_482.f_3.f_2 + (Local_670.f_482.f_12.f_2 * MISC::GET_FRAME_TIME()));
	if (Local_670.f_482.f_3.f_2 > (0.5f * 43.7465f))
	{
		Local_670.f_482.f_3.f_2 = (0.5f * 43.7465f);
		Local_670.f_482.f_12.f_2 = 0f;
	}
	else if (Local_670.f_482.f_3.f_2 < (-0.5f * 43.7465f))
	{
		Local_670.f_482.f_3.f_2 = (-0.5f * 43.7465f);
		Local_670.f_482.f_12.f_2 = 0f;
	}
	Local_670.f_482.f_3 = (Local_670.f_482.f_3 + (Local_670.f_482.f_12 * MISC::GET_FRAME_TIME()));
	if (Local_670.f_482.f_3 > (0.5f * 21.6f))
	{
		Local_670.f_482.f_3 = (0.5f * 21.6f);
		Local_670.f_482.f_12 = 0f;
	}
	else if (Local_670.f_482.f_3 < (-0.5f * 21.6f))
	{
		Local_670.f_482.f_3 = (-0.5f * 21.6f);
		Local_670.f_482.f_12 = 0f;
	}
	Var5 = { __LIB_0__.func_298(Local_670.f_482.f_9, Local_670.f_482.f_3.f_2) };
	CAM::SET_CAM_COORD(Local_670.f_516, Local_670.f_482.f_6 + Var5);
	CAM::SET_CAM_ROT(Local_670.f_516, (-33f + Local_670.f_482.f_3), 0f, ((-88.515f + fLocal_630) + Local_670.f_482.f_3.f_2), 2);
	CAM::SET_CAM_NEAR_CLIP(Local_670.f_516, __LIB_13__.func_63());
}

void func_545()//Position - 0x6B093
{
	switch (iLocal_611)
	{
		case 0:
			iLocal_611 = 1;
			break;
		case 1:
			iLocal_611 = 2;
			break;
		case 2:
			iLocal_611 = 0;
			break;
	}
}

int func_546()//Position - 0x6B0CA
{
	return iLocal_611;
}

void func_547(var uParam0, var uParam1, bool bParam2)//Position - 0x6B0D5
{
	if (!__LIB_2__.func_49(iLocal_3192))
	{
		*uParam0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3192, 0f, -5f, 1f) };
		__LIB_2__.func_49(iLocal_3192);
		if (HUD::DOES_BLIP_EXIST(*uParam1))
		{
			HUD::SET_BLIP_COORDS(*uParam1, ENTITY::GET_ENTITY_COORDS(iLocal_3192, true));
		}
		else
		{
			*uParam1 = __LIB_0__.func_392(ENTITY::GET_ENTITY_COORDS(iLocal_3192, true), 0);
			HUD::SET_BLIP_SCALE(*uParam1, 1.2f);
		}
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("PS_BLPMTARG");
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
		GRAPHICS::DRAW_MARKER(6, *uParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, __LIB_30__.func_545(*uParam0, 100, 200), false, false, 2, false, 0, 0, false);
		GRAPHICS::DRAW_MARKER(6, *uParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, __LIB_30__.func_545(*uParam0, 100, 200), false, false, 2, false, 0, 0, false);
		GRAPHICS::DRAW_MARKER(6, *uParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, __LIB_30__.func_545(*uParam0, 100, 200), false, false, 2, false, 0, 0, false);
		if (bParam2)
		{
		}
	}
}

void func_548(struct<3> Param0, int* iParam1)//Position - 0x6B1DF
{
	float fVar0;
	int iVar1;
	if (!__LIB_0__.func_736(iParam1))
	{
		return;
	}
	fVar0 = __LIB_7__.func_78(iParam1);
	if (fVar0 > 1.4f)
	{
		__LIB_0__.func_735(iParam1);
		return;
	}
	iVar1 = (128 - SYSTEM::CEIL(((128f * fVar0) / 1.4f)));
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, false, false, 2, false, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, false, false, 2, false, 0, 0, false);
	GRAPHICS::DRAW_MARKER(6, Param0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, false, false, 2, false, 0, 0, false);
}

void func_549()//Position - 0x6B29C
{
	if (!BitTest(iLocal_608, 1))
	{
		if (iLocal_85 >= 5)
		{
			if (__LIB_30__.func_619("MGPS_START", &iLocal_608, 0))
			{
				__LIB_30__.func_618("MGPS_START", &iLocal_608, 1);
			}
		}
	}
	else if (!BitTest(iLocal_608, 3) && !BitTest(iLocal_608, 5))
	{
		if (iLocal_85 == 0)
		{
			if (__LIB_30__.func_619("MGPS_STOP", &iLocal_608, 2))
			{
				__LIB_30__.func_618("MGPS_STOP", &iLocal_608, 3);
			}
		}
		else if (iLocal_85 == 1)
		{
			if (__LIB_30__.func_619("MGPS_STOP", &iLocal_608, 4))
			{
				__LIB_30__.func_618("MGPS_STOP", &iLocal_608, 5);
			}
		}
	}
}

void func_552()//Position - 0x6B394
{
	func_688();
	func_579();
	func_578();
	func_577();
	func_557();
	func_553();
}

void func_553()//Position - 0x6B3B4
{
	float fVar0;
	int iVar1;
	if (Local_109.f_1)
	{
		if (Local_109.f_0 == 0)
		{
			Local_109.f_1 = 0;
			return;
		}
		fVar0 = MISC::GET_FRAME_TIME();
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_109.f_0)
		{
			if (Local_109.f_2[iVar1 /*5*/].f_4 == 0f && Local_109.f_2[iVar1 /*5*/].f_3 > 0f)
			{
				Local_109.f_2[iVar1 /*5*/].f_3 = (Local_109.f_2[iVar1 /*5*/].f_3 - fVar0);
				if (Local_109.f_2[iVar1 /*5*/].f_3 <= 0f)
				{
					Local_109.f_2[iVar1 /*5*/].f_3 = 0f;
					if (Local_109.f_2[iVar1 /*5*/] == 1)
					{
						if (__LIB_0__.func_1(Local_109.f_2[iVar1 /*5*/].f_1))
						{
							HUD::CLEAR_HELP(false);
						}
					}
					else if (Local_109.f_2[iVar1 /*5*/] == 2)
					{
						HUD::CLEAR_THIS_PRINT(Local_109.f_2[iVar1 /*5*/].f_1);
					}
				}
			}
			if (Local_109.f_2[iVar1 /*5*/].f_4 > 0f)
			{
				Local_109.f_2[iVar1 /*5*/].f_4 = (Local_109.f_2[iVar1 /*5*/].f_4 - fVar0);
				if (Local_109.f_2[iVar1 /*5*/].f_4 <= 0f)
				{
					Local_109.f_2[iVar1 /*5*/].f_4 = 0f;
					if (Local_109.f_2[iVar1 /*5*/] == 1)
					{
						HUD::CLEAR_HELP(true);
						__LIB_0__.func_187(Local_109.f_2[iVar1 /*5*/].f_1);
						if (Local_109.f_2[iVar1 /*5*/].f_3 == -1f)
						{
							Local_109.f_2[iVar1 /*5*/].f_3 = SYSTEM::TO_FLOAT(7);
						}
						else if (Local_109.f_2[iVar1 /*5*/].f_3 == -2f)
						{
						}
					}
					else if (Local_109.f_2[iVar1 /*5*/] == 2)
					{
						if (Local_109.f_2[iVar1 /*5*/].f_3 == -2f)
						{
							__LIB_0__.func_325(Local_109.f_2[iVar1 /*5*/].f_1, 7500, 1);
							Local_109.f_2[iVar1 /*5*/].f_3 = SYSTEM::TO_FLOAT(7);
						}
						else
						{
							__LIB_0__.func_325(Local_109.f_2[iVar1 /*5*/].f_1, SYSTEM::CEIL(Local_109.f_2[iVar1 /*5*/].f_3), 1);
						}
					}
					else if (Local_109.f_2[iVar1 /*5*/] == 3)
					{
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Local_109.f_0)
		{
			if (Local_109.f_2[iVar1 /*5*/].f_3 == 0f)
			{
				func_439(Local_109.f_2[iVar1 /*5*/].f_1);
			}
			iVar1++;
		}
		func_554();
	}
}

void func_554()//Position - 0x6B5B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (Local_109.f_2[iVar0 /*5*/] == 0)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_109.f_0)
			{
				if (iVar1 > iVar2)
				{
					Local_109.f_2[iVar2 /*5*/] = { Local_109.f_2[iVar1 /*5*/] };
					iVar2++;
				}
				iVar1++;
			}
			Local_109.f_0 = (Local_109.f_0 - 1);
		}
		iVar0++;
	}
}

void func_557()//Position - 0x6B653
{
	if (!func_576())
	{
		return;
	}
	if (func_495())
	{
		if (!HUD::DOES_BLIP_EXIST(Local_670.f_181[0 /*6*/]))
		{
			func_575();
			func_574(Local_670.f_90.f_7);
			if (func_490(Local_670.f_90.f_8))
			{
				func_574(Local_670.f_90.f_8);
			}
		}
		return;
	}
	if (Local_670.f_90.f_3)
	{
		return;
	}
	switch (Local_670.f_90)
	{
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
			{
				Local_670.f_90.f_11 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true), Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2, true);
			}
			if (func_492() <= func_491())
			{
				if (func_573(1106247680) || func_572())
				{
					func_566();
				}
			}
			break;
		case 2:
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
			{
				break;
			}
			Local_670.f_90.f_11 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true), Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2, true);
			if (func_492() < func_491())
			{
				if (func_573(1106247680) || func_572())
				{
					func_566();
				}
			}
			else if (func_492() == func_491())
			{
				if (func_563())
				{
					func_566();
				}
			}
			break;
		case 3:
			__LIB_2__.func_49(Local_670.f_0);
			Local_670.f_90.f_11 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true), Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2, true);
			if (func_492() <= func_491())
			{
				if (func_573(1106247680) || func_572())
				{
					func_566();
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false))
				{
					Local_670.f_90.f_11 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2, true);
					if (func_492() < func_491())
					{
						if (func_573(1106247680))
						{
							func_566();
						}
					}
					else if (func_492() == func_491())
					{
						if (func_563())
						{
							func_566();
						}
					}
				}
				else
				{
					Local_670.f_90.f_11 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2, true);
					if (func_492() < func_491())
					{
						if (func_573(1106247680) || func_572())
						{
							func_566();
						}
					}
				}
			}
			break;
		case 5:
			__LIB_30__.func_654(func_501());
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false))
				{
					Local_670.f_90.f_11 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2, true);
					if (func_492() < func_491())
					{
						if (func_573(1106247680) || func_572())
						{
							func_566();
						}
					}
					else if (func_492() == func_491())
					{
						if (func_563())
						{
							func_566();
						}
					}
				}
				else
				{
					Local_670.f_90.f_11 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2, true);
					if (func_492() < func_491())
					{
						if (func_573(1106247680) || func_572())
						{
							func_566();
						}
					}
				}
			}
			break;
	}
	func_558();
}

void func_558()//Position - 0x6B9C0
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (func_492() == func_491())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true) };
	}
	Var0 = { func_501() };
	Var1 = { func_561() };
	if (!__LIB_0__.func_394(Var0, Var1, 1056964608, 0))
	{
		if (SYSTEM::VDIST2(Var2, Var0) > SYSTEM::VDIST2(Var2, Var1))
		{
			if (__LIB_0__.func_156(Var2, Var1) > 0f)
			{
				Local_670.f_90.f_2 = 1;
			}
		}
		else
		{
			Var3 = { Var2 - Var0 };
			Var4 = { Var1 - Var0 };
			if (__LIB_0__.func_156(Var3, Var4) > 0f)
			{
				if (__LIB_0__.func_156(Var2, Var1) > 0f)
				{
					Local_670.f_90.f_2 = 1;
				}
			}
		}
	}
}

Vector3 func_561()//Position - 0x6BB37
{
	if (func_490(Local_670.f_90.f_8))
	{
		return Local_670.f_181[Local_670.f_90.f_8 /*6*/].f_2;
	}
	return Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_2;
}

int func_563()//Position - 0x6BC0C
{
	if (!func_576() || !func_490(Local_670.f_90.f_7))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(Local_670.f_0) < 1f && Local_670.f_90.f_11 <= 7.5f)
			{
				return 1;
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		if (func_565())
		{
			if (func_564())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_564()//Position - 0x6BC97
{
	if (__LIB_0__.func_736(&iLocal_3271))
	{
		if (__LIB_32__.func_785(&iLocal_3271, 0.5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_565()//Position - 0x6BCC0
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		if ((((!ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && Local_670.f_90.f_11 <= 8f) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 1f) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 5f)
		{
			if (!__LIB_0__.func_736(&iLocal_3271))
			{
				__LIB_18__.func_276(&iLocal_3271);
				return 1;
			}
			return 1;
		}
	}
	if (__LIB_0__.func_736(&iLocal_3271))
	{
		__LIB_0__.func_735(&iLocal_3271);
	}
	return 0;
}

void func_566()//Position - 0x6BD5D
{
	if (func_572())
	{
		Local_670.f_90.f_2 = 0;
		Local_670.f_520 = 1;
		func_571(2);
	}
	else if (Local_670.f_90 == 3)
	{
		func_571(func_569());
	}
	else
	{
		func_571(0);
	}
	if (func_492() < func_491())
	{
		Local_670.f_90.f_7++;
		func_574(Local_670.f_90.f_8);
		func_478(Local_670.f_90.f_7, 0);
	}
	else if (func_492() == func_491())
	{
		Local_670.f_90.f_3 = 1;
		Local_670.f_90.f_12 = __LIB_7__.func_42(&(Local_670.f_14));
		func_567(Local_670.f_90.f_7, Local_670.f_90.f_7);
		return;
	}
	if (Local_670.f_90 == 2 || Local_670.f_90 == 3)
	{
		if (func_492() < func_491())
		{
			Local_670.f_90.f_8++;
			func_478(Local_670.f_90.f_8, 1);
		}
	}
	func_567((Local_670.f_90.f_7 - 1), Local_670.f_90.f_7);
}

void func_567(int iParam0, int iParam1)//Position - 0x6BE5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (Local_670.f_13 == 0)
	{
		if (Local_670.f_520 == 1)
		{
			Local_670.f_525 = 6;
		}
		else
		{
			Local_670.f_525 = 1;
		}
		HUD::GET_HUD_COLOUR(Local_670.f_525, &iVar0, &iVar1, &iVar2, &(Local_670.f_519));
		Local_670.f_13 = GRAPHICS::CREATE_CHECKPOINT(func_568(iParam0), Local_670.f_181[iParam0 /*6*/].f_2, Local_670.f_181[iParam1 /*6*/].f_2, 15f, iVar0, iVar1, iVar2, Local_670.f_519, 0);
	}
}

int func_568(int iParam0)//Position - 0x6BED8
{
	switch (Local_670.f_181[iParam0 /*6*/].f_5)
	{
		case 9:
			return 37;
			break;
		case 2:
		case 1:
			return func_482(iParam0);
			break;
		case 3:
			return 40;
			break;
		case 4:
			return 38;
			break;
		case 5:
			return 39;
			break;
		case 6:
			return 38;
			break;
		case 7:
			return 39;
			break;
		case 8:
			return 16;
			break;
		case 10:
			return 16;
			break;
		default:
			return 37;
			break;
	}
	return 37;
}

int func_569()//Position - 0x6BF82
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &uVar0, &Var1, &Var2, &uVar3);
	switch (func_570())
	{
		case 3:
			if (Var2.f_2 < 0f)
			{
				if (MISC::ABSF(Var1.f_2) < 0.1736f)
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
				return 2;
			}
			break;
		case 4:
		case 5:
			if (MISC::ABSF(Var2.f_2) < 0.342f)
			{
				return 1;
			}
			else if (MISC::ABSF(Var2.f_2) < 0.7071f)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case 6:
			if (Var1.f_2 <= 0f)
			{
				return 2;
			}
			else if (MISC::ABSF(Var2.f_2) < 0.342f)
			{
				return 1;
			}
			else if (MISC::ABSF(Var2.f_2) < 0.7071f)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case 7:
			if (Var1.f_2 >= 0f)
			{
				return 2;
			}
			else if (MISC::ABSF(Var2.f_2) < 0.342f)
			{
				return 1;
			}
			else if (MISC::ABSF(Var2.f_2) < 0.7071f)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 0;
}

int func_570()//Position - 0x6C0B7
{
	return Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_5;
}

void func_571(int iParam0)//Position - 0x6C0CF
{
	Local_670.f_90.f_6 = iParam0;
	switch (iParam0)
	{
		case 2:
			func_574(Local_670.f_90.f_7);
			func_470(2);
			if (__LIB_0__.func_736(&(Local_670.f_14)))
			{
				__LIB_2__.func_186(&(Local_670.f_14), (__LIB_7__.func_78(&(Local_670.f_14)) - -2f));
			}
			Local_2988.f_13 = 5;
			Local_670.f_520 = 1;
			break;
		case 0:
			Local_670.f_90.f_9++;
			func_574(Local_670.f_90.f_7);
			func_470(0);
			break;
		case 1:
			Local_670.f_90.f_9++;
			func_574(Local_670.f_90.f_7);
			func_470(1);
			if (__LIB_0__.func_736(&(Local_670.f_14)))
			{
				__LIB_2__.func_186(&(Local_670.f_14), (__LIB_7__.func_78(&(Local_670.f_14)) - -2f));
			}
			Local_2988.f_13 = -2;
			break;
	}
	if (!Local_670.f_90.f_5)
	{
		Local_670.f_42.f_5 = Local_670.f_90.f_9;
		Local_670.f_90.f_4 = 1;
	}
}

bool func_572()//Position - 0x6C1D0
{
	return Local_670.f_90.f_2;
}

int func_573(float fParam0)//Position - 0x6C1DF
{
	if (!func_576() || !func_490(Local_670.f_90.f_7))
	{
		return 0;
	}
	if (Local_670.f_90.f_11 <= fParam0)
	{
		return 1;
	}
	return 0;
}

void func_574(int iParam0)//Position - 0x6C21A
{
	if (func_490(iParam0))
	{
		GRAPHICS::DELETE_CHECKPOINT(Local_670.f_181[iParam0 /*6*/].f_1);
		Local_670.f_181[iParam0 /*6*/].f_1 = 0;
		if (HUD::DOES_BLIP_EXIST(Local_670.f_181[iParam0 /*6*/]))
		{
			HUD::REMOVE_BLIP(&(Local_670.f_181[iParam0 /*6*/]));
		}
	}
}

void func_575()//Position - 0x6C263
{
	func_478(0, 0);
}

int func_576()//Position - 0x6C271
{
	if (Local_670.f_90.f_1)
	{
		return 1;
	}
	return 0;
}

void func_577()//Position - 0x6C288
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (Local_670.f_521 == 1)
	{
		Local_670.f_519 = (Local_670.f_519 - 25);
		if (Local_670.f_519 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::DRAW_MARKER(6, Local_670.f_522, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, iVar0, iVar1, iVar2, Local_670.f_519, false, false, 2, false, 0, 0, false);
			GRAPHICS::DRAW_MARKER(6, Local_670.f_522, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, iVar0, iVar1, iVar2, Local_670.f_519, false, false, 2, false, 0, 0, false);
			GRAPHICS::DRAW_MARKER(6, Local_670.f_522, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, iVar0, iVar1, iVar2, Local_670.f_519, false, false, 2, false, 0, 0, false);
		}
		else
		{
			Local_670.f_521 = 0;
		}
	}
}

void func_578()//Position - 0x6C35D
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (Local_670.f_13 != 0)
	{
		Local_670.f_519 = (Local_670.f_519 - 25);
		if (Local_670.f_519 > 0)
		{
			HUD::GET_HUD_COLOUR(Local_670.f_525, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_670.f_13, iVar0, iVar1, iVar2, Local_670.f_519);
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_670.f_13, iVar0, iVar1, iVar2, Local_670.f_519);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_670.f_13);
			Local_670.f_13 = 0;
			Local_670.f_520 = 0;
		}
	}
}

void func_579()//Position - 0x6C3DC
{
	if (Local_2988.f_9)
	{
		func_677();
	}
	if (Local_2988.f_16)
	{
		func_673();
	}
	func_640();
	if (Local_2984.f_5)
	{
		func_635();
	}
	if (Local_2985.f_1)
	{
	}
	if (bLocal_3170)
	{
		func_633();
	}
	if (bLocal_3171)
	{
		func_632();
	}
	if (bLocal_2832)
	{
		func_631();
	}
	if (iLocal_2819)
	{
		func_580();
	}
}

void func_580()//Position - 0x6C43C
{
	bool bVar0;
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	bVar0 = true;
	switch (iLocal_2826)
	{
		case 0:
			iLocal_2821 = __LIB_30__.func_939();
			Local_2980.f_0 = __LIB_0__.func_729();
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			__LIB_6__.func_892(&(Local_670.f_17));
			iLocal_2826 = 1;
			break;
		case 1:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !func_447())
			{
				if (__LIB_18__.func_173() == 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 0, false);
				}
				else if (__LIB_18__.func_173() == 1)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 0, false);
				}
				else if (__LIB_18__.func_173() == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 0, false);
				}
				if ((PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false)) && ENTITY::IS_ENTITY_IN_AIR(Local_670.f_0))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), Local_670.f_0, Local_670.f_52.f_21, Local_670.f_52.f_21.f_1, (Local_670.f_52.f_21.f_2 + 15f), 4, ENTITY::GET_ENTITY_SPEED(Local_670.f_0), 262144, 10f, 10f, true);
				}
				if (Local_670.f_52.f_11 == 0)
				{
					Local_3354 = { Local_708[Global_112413 /*38*/].f_21 };
					Local_3355 = { Local_708[Global_112413 /*38*/].f_24 };
					fLocal_3356 = Local_708[Global_112413 /*38*/].f_27;
					iLocal_2829 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_3354, Local_3355, fLocal_3356, false, 2);
				}
				else if (Local_670.f_52.f_11 == 1)
				{
					if (Global_112413 == 5)
					{
						if (Local_670.f_42.f_3 < 60f)
						{
							Local_3354 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + func_624() };
							Local_3355 = { -2.4588f, 0.1874f, -74.7957f };
							bVar0 = true;
							fLocal_3356 = 41.145f;
						}
						else if (Local_670.f_42.f_3 > 225f)
						{
							Local_3354 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + func_624() };
							Local_3355 = { -5.4571f, 0.2719f, 159.8754f };
							bVar0 = true;
							fLocal_3356 = 41.145f;
						}
						else
						{
							Local_3354 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + func_624() };
							Local_3355 = { -10.0662f, 0.2719f, 105.7053f };
							bVar0 = false;
							fLocal_3356 = 41.145f;
						}
					}
					else if (Global_112413 == 10)
					{
						fLocal_3356 = 38.0338f;
						Local_3354 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + func_624() };
					}
					else
					{
						fLocal_3356 = 41.145f;
						Local_3354 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + func_624() };
					}
					iLocal_2829 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_3354, Local_3355, fLocal_3356, false, 2);
				}
				else
				{
					iLocal_2829 = __LIB_30__.func_623();
				}
				CAM::SET_CAM_ACTIVE(iLocal_2829, true);
				if (bVar0)
				{
					CAM::POINT_CAM_AT_COORD(iLocal_2829, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				CAM::SHAKE_CAM(iLocal_2829, "HAND_SHAKE", 0.07f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				GRAPHICS::DELETE_CHECKPOINT(Local_670.f_13);
				Local_670.f_520 = 0;
				Local_670.f_521 = 0;
				iLocal_2826 = 2;
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(iLocal_2828))
				{
					CAM::DESTROY_CAM(iLocal_2828, false);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_2829))
				{
					CAM::DESTROY_CAM(iLocal_2829, false);
				}
				AUDIO::PLAY_MISSION_COMPLETE_AUDIO("DEAD");
				__LIB_10__.func_842(&uLocal_2835, 1);
				sLocal_2983 = func_621();
				iLocal_2826 = 11;
			}
			break;
		case 2:
			CAM::STOP_CAM_POINTING(iLocal_2829);
			__LIB_26__.func_455(&(Local_670.f_52.f_12));
			iLocal_2826 = 3;
			break;
		case 3:
			if (__LIB_32__.func_785(&(Local_670.f_52.f_12), fLocal_3357))
			{
				func_618(iLocal_2829);
				__LIB_26__.func_455(&(Local_670.f_52.f_12));
				__LIB_26__.func_455(&(Local_670.f_52.f_15));
				__LIB_26__.func_455(&(Local_670.f_52.f_18));
				Local_3353 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				iLocal_2826 = 4;
			}
			break;
		case 4:
			if (__LIB_7__.func_42(&(Local_670.f_52.f_18)) >= 2f)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					Local_3353 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					__LIB_2__.func_186(&(Local_670.f_52.f_12), 1f);
				}
				else if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_ON_SCREEN(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					Local_3353 = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
					__LIB_2__.func_186(&(Local_670.f_52.f_12), 1f);
				}
				else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_3193) && !ENTITY::IS_ENTITY_DEAD(iLocal_3193, false)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3193)) && ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::PLAYER_PED_ID()))
				{
					Local_3353 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else if (ENTITY::IS_ENTITY_ON_SCREEN(PLAYER::PLAYER_PED_ID()))
				{
					Local_3353 = { 0f, 0f, 0f };
				}
				if (!__LIB_0__.func_394(Local_3353, 0f, 0f, 0f, 1056964608, 0))
				{
					func_614(&iLocal_2829, Local_3353);
				}
			}
			if (__LIB_7__.func_42(&(Local_670.f_52.f_12)) >= 2f || __LIB_7__.func_42(&(Local_670.f_52.f_15)) >= 3f)
			{
				__LIB_0__.func_540(1, 0);
				__LIB_0__.func_735(&(Local_670.f_52.f_18));
				__LIB_0__.func_735(&(Local_670.f_52.f_15));
				__LIB_0__.func_533();
				__LIB_30__.func_656(iLocal_1697, 0);
				iLocal_2826 = 7;
			}
			break;
		case 7:
			func_610();
			__LIB_32__.func_724(1);
			iLocal_2826 = 5;
			break;
		case 5:
			while (!AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
			{
				SYSTEM::WAIT(0);
			}
			__LIB_6__.func_892(&(Local_670.f_52.f_12));
			if (CAM::DOES_CAM_EXIST(iLocal_2828))
			{
				CAM::DESTROY_CAM(iLocal_2828, false);
			}
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
			CAM::STOP_CAM_SHAKING(iLocal_2829, false);
			Local_3354 = { CAM::GET_CAM_COORD(iLocal_2829) };
			Local_3355 = { CAM::GET_CAM_ROT(iLocal_2829, 2) };
			iLocal_2828 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_3354.f_0, Local_3354.f_1, (Local_3354.f_2 + 1000f), 90f, Local_3355.f_1, Local_3355.f_2, fLocal_3356, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_2828, iLocal_2829, 500, 1, 1);
			__LIB_30__.func_655();
			if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, true);
					ENTITY::SET_ENTITY_VELOCITY(Local_670.f_0, Local_601);
					ENTITY::SET_ENTITY_VISIBLE(Local_670.f_0, false, false);
					ENTITY::SET_ENTITY_COLLISION(Local_670.f_0, false, false);
				}
			}
			iLocal_2826 = 9;
			break;
		case 9:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			__LIB_6__.func_892(&(Local_670.f_52.f_12));
			iLocal_2826 = 6;
			break;
		case 6:
			func_607();
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_2828) && !CAM::IS_CAM_INTERPOLATING(iLocal_2829))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true), true, false, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_670);
				}
				if (iLocal_666 >= 90)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", true);
				}
				else if (iLocal_666 >= 80)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", true);
				}
				else if (iLocal_666 >= 70)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", true);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "FLIGHT_SCHOOL_LESSON_PASSED", "HUD_AWARDS", true);
				}
				iLocal_2826 = 8;
			}
			break;
		case 8:
			if (func_607())
			{
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
				iLocal_656 = 0;
				bLocal_657 = false;
				iLocal_2826 = 13;
			}
			break;
		case 11:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			if (func_584(&uLocal_2835, &uLocal_2841, &Local_2980, "PSER_FAIL", sLocal_2983, &iLocal_656, 78))
			{
				bLocal_657 = iLocal_656;
				iLocal_2826 = 13;
			}
			break;
		case 13:
			__LIB_30__.func_938(&iLocal_2821);
			__LIB_0__.func_540(0, 0);
			__LIB_10__.func_840(&Local_2980);
			if (CAM::DOES_CAM_EXIST(iLocal_2829))
			{
				CAM::DESTROY_CAM(iLocal_2829, false);
			}
			if (iLocal_666 >= 90)
			{
				func_581(3);
			}
			else if (iLocal_666 >= 80)
			{
				func_581(2);
			}
			else if (iLocal_666 >= 70)
			{
				func_581(1);
			}
			func_428(0);
			iLocal_2826 = 0;
			break;
	}
}

int func_581(int iParam0)//Position - 0x6CC1C
{
	if (iParam0 == 1)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_670.f_52));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED" /* GXT: Medal */);
	}
	else if (iParam0 == 2)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_670.f_52));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED" /* GXT: Medal */);
	}
	else if (iParam0 == 3)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_670.f_52));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED" /* GXT: Medal */);
	}
	return -1;
}

int func_584(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x6CCCE
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", true);
			__LIB_26__.func_455(&(uParam0->f_1));
			__LIB_39__.func_509();
			func_605(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			break;
		case 1:
			if (func_596() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!__LIB_0__.func_517(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", true);
					__LIB_6__.func_896(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!__LIB_0__.func_517(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", true);
					__LIB_6__.func_896(&(uParam0->f_4), 2);
				}
				func_588(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		case 2:
			if (func_588(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				__LIB_39__.func_508(0, 1);
				__LIB_40__.func_696(0, 1);
				__LIB_39__.func_509();
				if (*iParam5)
				{
					MISC::IGNORE_NEXT_RESTART(true);
				}
				else if (!uParam0->f_5)
				{
					__LIB_10__.func_841(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				MISC::PAUSE_DEATH_ARREST_RESTART(false);
				*uParam0 = 3;
			}
			break;
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(true);
				__LIB_39__.func_508(0, 1);
				__LIB_40__.func_696(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				return 1;
			}
			break;
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(false);
			return 1;
			break;
	}
	return 0;
}

int func_588(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x6CFF3
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(true);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (__LIB_0__.func_517(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			__LIB_0__.func_478(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (__LIB_0__.func_517(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!__LIB_0__.func_517(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
			}
			__LIB_31__.func_99(&(uParam1->f_10), 0, 1, 1, 1);
			__LIB_12__.func_133(&(uParam1->f_10), "IB_RETRY" /* GXT: Retry */, 2, 201, 1, 1, 0);
			__LIB_12__.func_133(&(uParam1->f_10), "FE_HLP16" /* GXT: Exit */, 2, 202, 1, 1, 0);
			if (__LIB_0__.func_517(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (__LIB_0__.func_517(iParam5, 8))
			{
				switch (__LIB_18__.func_173())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, false);
						break;
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, false);
						break;
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, false);
						break;
					}
			}
			if (!__LIB_0__.func_736(&(uParam1->f_1)))
			{
				__LIB_18__.func_276(&(uParam1->f_1));
			}
			if (__LIB_0__.func_517(iParam5, 2))
			{
				if (!__LIB_0__.func_736(&(uParam1->f_4)))
				{
					__LIB_18__.func_276(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (__LIB_0__.func_517(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			__LIB_26__.func_454(uParam0, 0, 0);
			if (!__LIB_0__.func_517(iParam5, 16) && (__LIB_7__.func_78(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				__LIB_20__.func_627(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::SET_MOUSE_CURSOR_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__.func_517(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_1__.func_899(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__.func_517(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_1__.func_899(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (__LIB_0__.func_517(iParam5, 2))
			{
				if (__LIB_7__.func_78(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__.func_517(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_1__.func_899(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		case 3:
			__LIB_26__.func_454(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (__LIB_0__.func_517(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			__LIB_6__.func_892(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		case 4:
			if (__LIB_7__.func_78(&(uParam1->f_4)) <= 0.1f)
			{
				__LIB_26__.func_454(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

int func_596()//Position - 0x6D7BA
{
	if (!BitTest(iLocal_41, 0) && !BitTest(iLocal_41, 1))
	{
		SYSTEM::SETTIMERA(0);
		__LIB_39__.func_508(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PED::SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!BitTest(iLocal_41, 1))
		{
			__LIB_40__.func_696(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_42 == 0)
			{
				iLocal_42 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				__LIB_30__.func_620(0, 2, 1);
				__LIB_26__.func_367(1, 1, 1, 0, 0, 0, 0);
				__LIB_8__.func_770(1);
				HUD::SET_FRONTEND_ACTIVE(false);
				HUD::SET_PAUSE_MENU_ACTIVE(false);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				__LIB_39__.func_508(0, 0);
				__LIB_30__.func_621(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_605(var uParam0, float fParam1, float fParam2)//Position - 0x6DB92
{
	if (__LIB_0__.func_736(&(uParam0->f_1)))
	{
		__LIB_0__.func_735(&(uParam0->f_1));
	}
	if (__LIB_0__.func_736(&(uParam0->f_4)))
	{
		__LIB_0__.func_735(&(uParam0->f_4));
	}
	__LIB_1__.func_899(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

int func_607()//Position - 0x6DC00
{
	float fVar0;
	fVar0 = 0f;
	if (!__LIB_0__.func_736(&(Local_2980.f_2)))
	{
		__LIB_6__.func_892(&(Local_2980.f_2));
	}
	else
	{
		fVar0 = __LIB_7__.func_78(&(Local_2980.f_2));
	}
	if (!iLocal_2833)
	{
		if (fVar0 > 1f)
		{
			iLocal_2833 = 1;
		}
	}
	if (!iLocal_2834)
	{
		if (fVar0 > 4.75f)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_2980.f_0, "TRANSITION_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.5f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_2834 = 1;
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_2980.f_0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_2980.f_0, 255, 255, 255, 255, 0);
	}
	if (fVar0 > 5f)
	{
		__LIB_0__.func_735(&(Local_2980.f_2));
		iLocal_2833 = 0;
		iLocal_2834 = 0;
		return 1;
	}
	return 0;
}

void func_610()//Position - 0x6DD37
{
	char* sVar0;
	sVar0 = __LIB_30__.func_622(2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_2980.f_0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_2980.f_0, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("PSER_SUCCESS");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Local_670.f_52));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	Local_2980.f_1 = 5000;
	__LIB_0__.func_735(&(Local_2980.f_2));
	iLocal_2833 = 0;
	iLocal_2834 = 0;
}

void func_614(int iParam0, struct<3> Param1)//Position - 0x6DE69
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	if (!CAM::DOES_CAM_EXIST(*iParam0))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(*iParam0))
	{
		return;
	}
	Var1 = { CAM::GET_CAM_ROT(*iParam0, 2) };
	Var2 = { CAM::GET_CAM_COORD(*iParam0) };
	Var3 = { __LIB_2__.func_162((Var1.f_0 + 90f), Var1.f_1, Var1.f_2) };
	Var4 = { Param1 - Var2 };
	Var4 = { __LIB_0__.func_79(Var4) };
	fVar5 = MISC::ATAN2((Param1.f_2 - Var2.f_2), MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Var2, false));
	fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Param1.f_0 - Var2.f_0), (Param1.f_1 - Var2.f_1));
	fVar6 = __LIB_0__.func_732(fVar6, -180f, 180f);
	Local_3349 = { Local_3349 };
	Local_3350 = { Local_3350 };
	Local_3351 = { Local_3351 };
	fVar0 = __LIB_0__.func_156(__LIB_2__.func_162(fVar5, Var1.f_1, Var1.f_2), Var3);
	fVar7 = (fVar5 - Var1.f_0);
	if (fVar7 > 270f)
	{
		fVar7 = (fVar7 - 360f);
	}
	else if (fVar7 < -270f)
	{
		fVar7 = (fVar7 + 360f);
	}
	fVar5 = (Var1.f_0 + fVar7);
	if ((bLocal_3348 && fVar5 > Var1.f_0) || (!bLocal_3348 && fVar5 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_3345 = (fLocal_3345 * 0.9f);
		Var1.f_0 = __LIB_0__.func_408(Var1.f_0, fVar5, fLocal_3345);
	}
	fVar8 = (fVar6 - Var1.f_2);
	if (fVar8 > 270f)
	{
		fVar8 = (fVar8 - 360f);
	}
	else if (fVar8 < -270f)
	{
		fVar8 = (fVar8 + 360f);
	}
	fVar6 = (Var1.f_2 + fVar8);
	if ((bLocal_3347 && fVar8 > 0f) || (!bLocal_3347 && fVar8 < 0f))
	{
		fLocal_3346 = (fLocal_3346 * 0.9f);
		Var1.f_2 = __LIB_0__.func_408(Var1.f_2, fVar6, fLocal_3346);
	}
	CAM::SET_CAM_ROT(*iParam0, Var1, 2);
}

void func_618(int iParam0)//Position - 0x6E0E4
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	var uVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	var uVar10;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::GET_ENTITY_MATRIX(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), &Var0, &uVar6, &uVar6, &Var1);
	}
	else if ((!ENTITY::IS_ENTITY_DEAD(iLocal_3193, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_3192, false)) && (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3193) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3192)))
	{
		ENTITY::GET_ENTITY_MATRIX(iLocal_3192, &Var0, &uVar6, &uVar6, &Var1);
	}
	else
	{
		ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &Var0, &uVar6, &uVar6, &Var1);
	}
	Var5 = { CAM::GET_CAM_ROT(iParam0, 2) };
	Var4 = { CAM::GET_CAM_COORD(iParam0) };
	Local_3352 = { __LIB_0__.func_79(__LIB_2__.func_162(Var5)) };
	Var2 = { __LIB_1__.func_13(Local_3352, 2) };
	Var3 = { -__LIB_0__.func_620(Local_3352, Var2) };
	Local_3352 = { Local_3352 * Vector(10f, 10f, 10f) };
	Local_3350 = { Var3 * Vector(10f, 10f, 10f) };
	Local_3351 = { Var2 * Vector(10f, 10f, 10f) };
	fLocal_3345 = 0.2f;
	fLocal_3346 = 0.5f;
	Var7 = { CAM::GET_CAM_COORD(iParam0) - Var1 };
	Var8 = { Var1 + FtoV(MISC::ABSF(__LIB_0__.func_156(Var7, Var0))) * Var0 };
	if (Var8.f_2 > Var4.f_2)
	{
		bLocal_3348 = true;
	}
	else
	{
		bLocal_3348 = false;
	}
	Local_3349 = { Var8 };
	fVar9 = __LIB_0__.func_156(Var8, Var2);
	uVar10 = __LIB_0__.func_156(Var8, Var3);
	if (fVar9 < 0f)
	{
		bLocal_3347 = true;
	}
	else
	{
		bLocal_3347 = false;
	}
}

char* func_621()//Position - 0x6E307
{
	switch (iLocal_69)
	{
		case 24:
			break;
		case 0:
			break;
		case 22:
			return sLocal_2820;
			break;
		case 1:
			return "PS_FAIL_2";
			break;
		case 2:
			return "PS_FAIL_3";
			break;
		case 7:
			return "PS_FAIL_3A";
			break;
		case 4:
			return "PS_FAIL_4";
			break;
		case 3:
			return "PS_FAIL_4A";
			break;
		case 5:
			return "PS_FAIL_5";
			break;
		case 6:
			return "PS_FAIL_6";
			break;
		case 8:
			return "PS_FAIL_7";
			break;
		case 9:
			return "PS_FAIL_8";
			break;
		case 10:
			return "PS_FAIL_9";
			break;
		case 11:
			return "PS_FAIL_9A";
			break;
		case 12:
			return "PS_FAIL_10";
			break;
		case 13:
			return "PS_FAIL_11";
			break;
		case 14:
			return "PS_FAIL_12";
			break;
		case 15:
			return "PS_FAIL_13";
			break;
		case 16:
			return "PS_FAIL_14";
			break;
		case 17:
			return "PS_FAIL_15";
			break;
		case 18:
			return "PS_FAIL_16";
			break;
		case 19:
			return "PS_FAIL_17";
			break;
		case 20:
			return "PS_FAIL_18";
			break;
		case 21:
			return "PS_FAIL_19";
			break;
		case 23:
			break;
		case 25:
			return "PS_FAIL_1";
			break;
	}
	return "PS_FAIL_1";
}

Vector3 func_624()//Position - 0x6E4FE
{
	struct<3> Var0;
	struct<3> Var1;
	bool bVar2;
	int iVar3;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var1 = { func_628() };
	bVar2 = __LIB_30__.func_657(Var0, Var1);
	iVar3 = 1;
	while (!bVar2 && iVar3 < 5)
	{
		Var1 = { func_628() };
		bVar2 = __LIB_30__.func_657(Var0, Var1);
		iVar3++;
		SYSTEM::WAIT(0);
	}
	if (!bVar2)
	{
		Var1 = { func_625() };
	}
	return Var1;
}

Vector3 func_625()//Position - 0x6E571
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	bool bVar3;
	int iVar4;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar1 = 20f;
	Var2 = { __LIB_35__.func_219(Var0, fVar1) };
	bVar3 = __LIB_30__.func_657(Var0, Var2);
	iVar4 = 1;
	while (!bVar3 && iVar4 < 5)
	{
		Var2 = { __LIB_35__.func_219(Var0, fVar1) };
		bVar3 = __LIB_30__.func_657(Var0, Var2);
		iVar4++;
		SYSTEM::WAIT(0);
	}
	if (!bVar3)
	{
		Var2 = { CAM::GET_GAMEPLAY_CAM_COORD() - Var0 };
	}
	return Var2;
}

Vector3 func_628()//Position - 0x6E748
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	if (Global_112413 == 5)
	{
		if (Local_670.f_42.f_3 < 60f)
		{
			Var1 = { -2072.534f, 4497.3003f, 64.7865f };
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		}
		else if (Local_670.f_42.f_3 > 225f)
		{
			Var1 = { -1775.6553f, 4775.4155f, 63.8575f };
			Var2 = { -1798.6398f, 4720.8994f, 59.4579f };
		}
		else
		{
			Var1 = { -1792.3553f, 4684.262f, 66.2932f };
			Var2 = { -1829.9429f, 4686.9795f, 56.0048f };
		}
		Var0 = { Var1 - Var2 };
		return Var0;
	}
	else if (Global_112413 == 10)
	{
		return Vector(15.4142f, -3377.0222f, -971.4432f) - Vector(15.8357f, -3355.613f, -969.2137f);
	}
	else
	{
		iLocal_3344 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		switch (iLocal_3344)
		{
			case 0:
				return 23.8064f, 47.7415f, 5.5222f;
			case 1:
				return 0.2155f, 75.6974f, 3.3072f;
			case 2:
				return 10.1127f, 55.6987f, -5.624f;
			case 3:
				return 7.9834f, 45.93713f, 2.73109f;
			}
		default:
	}
	return 0f, 0f, 0f;
}

void func_631()//Position - 0x6E8C5
{
	if (!__LIB_2__.func_49(Local_670.f_0))
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Local_670.f_0))
		{
			FIRE::STOP_ENTITY_FIRE(Local_670.f_0);
		}
	}
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
}

void func_632()//Position - 0x6E8EE
{
	fLocal_3160 = fLocal_3160;
}

void func_633()//Position - 0x6E8FC
{
	if (fLocal_3157 > fLocal_3159)
	{
		if (iLocal_3175 == -1)
		{
			iLocal_3175 = AUDIO::GET_SOUND_ID();
			__LIB_20__.func_176("DRUG_TRAFFIC_AIR_ALTITUDE_ALARM_MASTER", &iLocal_3175, 1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		__LIB_2__.func_29(&iLocal_3175);
	}
}

void func_635()//Position - 0x6E9AF
{
	int iVar0;
	iVar0 = 6;
	switch (Local_2984.f_7)
	{
		case 0:
			Local_2984.f_9 = MISC::ABSF(Local_670.f_32.f_3);
			break;
		case 5:
			Local_2984.f_9 = MISC::ABSF(Local_670.f_32.f_3);
			break;
		case 6:
			Local_2984.f_9 = MISC::ABSF(Local_670.f_32.f_3);
			break;
		case 7:
			Local_2984.f_9 = MISC::ABSF(Local_670.f_32.f_3);
			break;
		case 1:
			if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
			{
				Local_2984.f_9 = __LIB_7__.func_78(&(Local_670.f_32.f_7));
			}
			break;
		case 2:
		case 4:
		case 3:
			if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
			{
				Local_2984.f_9 = __LIB_7__.func_78(&(Local_670.f_32.f_7));
			}
			break;
		case 8:
			if (__LIB_0__.func_736(&(Local_670.f_23)))
			{
				Local_2984.f_9 = (Local_2984.f_10 - __LIB_7__.func_78(&(Local_670.f_23)));
			}
			else
			{
				Local_2984.f_9 = Local_2984.f_10;
			}
			if (Local_2984.f_9 < (Local_2984.f_10 * 0.33f))
			{
				if (iLocal_3176 == -1)
				{
					iLocal_3176 = AUDIO::GET_SOUND_ID();
					__LIB_20__.func_176("DRUG_TRAFFIC_AIR_ALTITUDE_ALARM_MASTER", &iLocal_3176, 1, 0, 0, 0, 0, 0);
					func_451("PS_FORM", "PS_FORM_5", 1);
				}
				iVar0 = 6;
			}
			else
			{
				iVar0 = 18;
				__LIB_2__.func_29(&iLocal_3176);
			}
			break;
	}
	if (!Local_2984.f_6)
	{
		if (Local_2984.f_9 > Local_2984.f_10)
		{
			Local_2984.f_9 = (Local_2984.f_9 % Local_2984.f_10);
		}
	}
	func_636(SYSTEM::ROUND((Local_2984.f_9 * 100f)), SYSTEM::ROUND((Local_2984.f_10 * 100f)), Local_2984.f_8, iVar0, 0, 1, 2);
}

void func_636(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6EB60
{
	__LIB_11__.func_984(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
}

void func_640()//Position - 0x6EE67
{
	if (func_672())
	{
		if (!Local_3168.f_0)
		{
			Local_3168.f_0 = 1;
			bLocal_3174 = true;
		}
		else
		{
			bLocal_3174 = false;
		}
	}
	else if (__LIB_31__.func_324())
	{
		if (!bLocal_3174 || func_670() >= 1f)
		{
			if (Local_3168.f_0)
			{
				Local_3168.f_0 = 0;
			}
		}
	}
	if (__LIB_30__.func_624())
	{
		func_668();
	}
	else
	{
		func_667();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && Local_3168.f_0)
	{
		switch (Local_3168.f_6)
		{
			case 0:
				if (!__LIB_0__.func_86(Local_3168.f_3) && !__LIB_35__.func_71(Local_3168.f_3))
				{
					__LIB_41__.func_444(&uLocal_43, Local_3168.f_3);
				}
				else
				{
					if (CAM::DOES_CAM_EXIST(Local_3168.f_7))
					{
						CAM::DESTROY_CAM(Local_3168.f_7, false);
					}
					if (__LIB_35__.func_71(Local_3168.f_3))
					{
						Local_3168.f_3 = { func_561() };
					}
					__LIB_35__.func_67(&uLocal_43, 0);
					Local_3168.f_0 = 0;
				}
				break;
			case 1:
				if (!CAM::DOES_CAM_EXIST(Local_3168.f_7))
				{
					Local_3168.f_7 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_601, Local_601, 45f, true, 2);
					CAM::ATTACH_CAM_TO_ENTITY(Local_3168.f_7, Local_670.f_0, 0f, 0f, -10f, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_3168.f_2))
				{
					CAM::POINT_CAM_AT_ENTITY(Local_3168.f_7, Local_3168.f_2, Local_601, true);
					CAM::SET_CAM_FOV(Local_3168.f_7, 40f);
				}
				else if (!__LIB_0__.func_86(Local_3168.f_3))
				{
					CAM::POINT_CAM_AT_COORD(Local_3168.f_7, Local_3168.f_3);
					CAM::SET_CAM_FOV(Local_3168.f_7, 40f);
				}
				break;
			case 2:
				if (ENTITY::DOES_ENTITY_EXIST(Local_3168.f_2))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_3168.f_2, Local_601, true, 2000, 2000, 2000, 0);
				}
				else if (!__LIB_0__.func_86(Local_3168.f_3))
				{
					CAM::SET_GAMEPLAY_COORD_HINT(Local_3168.f_3, 2000, 2000, 2000, 0);
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Local_3168.f_2) && !ENTITY::IS_ENTITY_DEAD(Local_3168.f_2, false))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_3168.f_2, Local_601, true, 2000, 2000, 2000, 0);
				}
				else if (!__LIB_0__.func_86(Local_3168.f_3))
				{
					CAM::SET_GAMEPLAY_COORD_HINT(Local_3168.f_3, 2000, 2000, 2000, 0);
				}
				break;
			default:
				if (ENTITY::DOES_ENTITY_EXIST(Local_3168.f_2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_3168.f_2, false))
					{
						__LIB_41__.func_444(&uLocal_43, ENTITY::GET_ENTITY_COORDS(Local_3168.f_2, true));
					}
				}
				else if (!__LIB_0__.func_86(Local_3168.f_3))
				{
					__LIB_41__.func_444(&uLocal_43, Local_3168.f_3);
				}
				break;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_3168.f_7))
	{
		switch (Local_3168.f_6)
		{
			case 1:
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				break;
			default:
				break;
		}
		CAM::DESTROY_CAM(Local_3168.f_7, false);
	}
	else
	{
		if (__LIB_35__.func_71(Local_3168.f_3))
		{
			Local_3168.f_3 = { func_561() };
		}
		__LIB_35__.func_67(&uLocal_43, 0);
		Local_3168.f_0 = 0;
	}
}

void func_667()//Position - 0x7009B
{
	Local_3168.f_1 = 0f;
}

void func_668()//Position - 0x700A9
{
	Local_3168.f_1 = (Local_3168.f_1 + MISC::GET_FRAME_TIME());
}

float func_670()//Position - 0x700CF
{
	return Local_3168.f_1;
}

bool func_672()//Position - 0x700EB
{
	return PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/);
}

void func_673()//Position - 0x700FA
{
	if (fLocal_3158 >= 0f)
	{
		__LIB_18__.func_254(SYSTEM::FLOOR(fLocal_3158), "PSER_DISTANCE", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
}

void func_677()//Position - 0x70406
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
	char* sVar15;
	int iVar16;
	char* sVar17;
	struct<4> Var18;
	char* sVar19;
	var uVar20;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = 0;
	iVar6 = -1;
	iVar7 = -1;
	iVar8 = -1;
	iVar9 = 1;
	iVar10 = 12;
	iVar11 = 1;
	iVar12 = 1;
	iVar13 = -1;
	iVar14 = -1;
	sVar15 = "";
	iVar16 = 6;
	sVar17 = "";
	StringCopy(&Var18, "PS_HUD_TIME", 16);
	sVar19 = "PS_HUD_CHPR";
	uVar20 = Local_2988.f_4;
	if (__LIB_0__.func_736(&(Local_670.f_14)))
	{
		iVar0 = SYSTEM::FLOOR((__LIB_7__.func_78(&(Local_670.f_14)) * 1000f));
	}
	func_687(&iVar6, &iVar12);
	Var18 = { Local_2988 };
	iVar7 = SYSTEM::FLOOR((Local_2988.f_5 * 1000f));
	iVar5 = Local_2988.f_11 * 1000;
	if (Local_2988.f_10)
	{
		iVar13 = (func_686() + func_685());
		iVar14 = func_684();
		sVar15 = "PS_REMAINING";
	}
	__LIB_1__.func_428();
	func_678(iVar0, sVar17, iVar3, iVar4, "", iVar1, iVar2, "", iVar5, iVar9, -1, -1, sVar19, iVar10, iVar13, iVar14, sVar15, iVar16, iVar7, &Var18, uVar20, iVar11, iVar6, "", 0, 1, 1, iVar8, 0, -1082130432, 1);
}

void func_678(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, var uParam19, var uParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, int iParam30)//Position - 0x70512
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar7;
	if (fParam29 > -1f)
	{
		__LIB_18__.func_254(0, "", iParam27, iParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (__LIB_0__.func_786(sVar0))
		{
			sVar0 = "TIM_DAMAGE" /* GXT: DAMAGE */;
		}
		__LIB_11__.func_984(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (__LIB_0__.func_786(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN" /* GXT: CHECKPOINT */;
		}
		__LIB_35__.func_312((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (__LIB_0__.func_786(sVar2))
		{
			sVar2 = "TIM_POSIT" /* GXT: POSITION */;
		}
		__LIB_11__.func_983(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (__LIB_0__.func_786(sVar3))
		{
			sVar3 = "TIM_LAP" /* GXT: LAP */;
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = uParam19;
		if (__LIB_0__.func_786(sVar4))
		{
			sVar4 = "TIMER_BESTIME" /* GXT: BEST TIME */;
		}
		__LIB_35__.func_311(iParam18, sVar4, 0, 1, iParam27, uParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (__LIB_0__.func_786(sVar5))
		{
			sVar5 = "TIMER_BESTIME" /* GXT: BEST TIME */;
		}
		__LIB_35__.func_311(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD" /* GXT: ~HUD_COLOUR_GREEN~BONUS~s~ */, 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL" /* GXT: ~HUD_COLOUR_RED~PENALTY~s~ */, 64);
	}
	else if (__LIB_0__.func_786(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER" /* GXT: TIME */, 64);
	}
	iParam26 = iParam26;
	iVar7 = 4;
	__LIB_35__.func_311(iParam0, &Var6, iParam8, iVar7, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

int func_684()//Position - 0x70AE0
{
	return iLocal_1827;
}

int func_685()//Position - 0x70AEB
{
	if (__LIB_0__.func_736(&(Local_670.f_14)))
	{
		return ((iLocal_1827 + Local_2988.f_12) - SYSTEM::CEIL((__LIB_7__.func_78(&(Local_670.f_14)) * 1000f)));
	}
	return 0;
}

int func_686()//Position - 0x70B23
{
	return uLocal_1828;
}

void func_687(int iParam0, int iParam1)//Position - 0x70B2E
{
	float fVar0;
	if (func_22(Local_708[Global_112413 /*38*/], 0))
	{
		fVar0 = Global_113386.f_1988[__LIB_18__.func_168(PLAYER::PLAYER_PED_ID()) /*121*/][Global_112413 /*10*/];
		if (fVar0 <= Local_708[Global_112413 /*38*/].f_30)
		{
			*iParam1 = 109;
			*iParam0 = SYSTEM::FLOOR((fVar0 * 1000f));
		}
		else if (fVar0 <= Local_708[Global_112413 /*38*/].f_31)
		{
			*iParam1 = 108;
			*iParam0 = SYSTEM::FLOOR((fVar0 * 1000f));
		}
		else if (fVar0 <= Local_708[Global_112413 /*38*/].f_32)
		{
			*iParam1 = 107;
			*iParam0 = SYSTEM::FLOOR((fVar0 * 1000f));
		}
		else
		{
			*iParam0 = -1;
		}
	}
}

void func_688()//Position - 0x70BDF
{
	var uVar0;
	struct<4> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	if (Local_2988.f_15)
	{
		func_712(&(Local_670.f_14), &(Local_2988.f_13));
		func_711(Local_670.f_14, &uVar0, &Var1, &uVar2);
		func_710(uVar0, Var1, &uVar2);
	}
	if (Local_2988.f_16)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_707(__LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), func_709(), 1));
		}
	}
	if (Local_2985.f_0)
	{
		if (func_576())
		{
			if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(func_501(), &uVar3, &uVar4))
			{
				func_705();
				func_412(1);
			}
			else
			{
				func_412(0);
			}
		}
		else if (!__LIB_0__.func_78(Local_3200, Local_601, 0))
		{
			if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_3200, &uVar5, &uVar6))
			{
				func_705();
				func_412(1);
			}
			else
			{
				func_412(0);
			}
		}
	}
	if (bLocal_3172)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(Local_670.f_0))
			{
				Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var8, &fVar7, false, false);
				Var9 = { Var8 };
				Var9.f_2 = fVar7;
				fVar7 = SYSTEM::VDIST(Var8, Var9);
				if (WATER::TEST_PROBE_AGAINST_WATER(Var8, Var9, &Var10))
				{
					fVar7 = SYSTEM::VDIST(Var8, Var10);
				}
				func_704((fVar7 - fLocal_667));
			}
		}
	}
	if (bLocal_3173)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_703(ENTITY::GET_ENTITY_ROLL(Local_670.f_0));
		}
	}
	if (((Local_2984.f_1 || Local_2984.f_0) || Local_2984.f_3) || Local_2984.f_2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_692();
		}
	}
	if (Local_2984.f_4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Local_2984.f_7 == 6)
			{
				func_691();
			}
			else if (Local_2984.f_7 == 7)
			{
				func_689();
			}
		}
	}
}

void func_689()//Position - 0x70DDD
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		iVar0 = Local_670.f_0;
		Var1 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
		fVar2 = Var1.f_1;
		fVar3 = ENTITY::GET_ENTITY_PITCH(iVar0);
		if (MISC::ABSF(fVar3) > 45f && MISC::ABSF(fVar3) < 135f)
		{
			func_690(1);
		}
		if (Local_670.f_32 < 0)
		{
			Local_670.f_32 = 0;
			Local_670.f_32.f_1 = 0;
			fVar2 = __LIB_0__.func_301(fVar2, -10f, 10f);
			Local_670.f_32.f_2 = fVar2;
		}
		else
		{
			fVar4 = (fVar2 - Local_670.f_32.f_2);
			if (fVar4 > 270f)
			{
				fVar4 = (fVar4 - 360f);
			}
			else if (fVar4 < -270f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (fVar4 > 0f)
			{
				if (Local_670.f_32.f_5)
				{
					Local_670.f_32.f_3 = fVar2;
					Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
					Local_670.f_32.f_1 = 0;
				}
				Local_670.f_32.f_5 = 0;
			}
			else
			{
				if (!Local_670.f_32.f_5)
				{
					Local_670.f_32.f_3 = fVar2;
					Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
					Local_670.f_32.f_1 = 0;
				}
				Local_670.f_32.f_5 = 1;
			}
			Local_670.f_32.f_1 = SYSTEM::FLOOR((MISC::ABSF(Local_670.f_32.f_3) / 350f));
			Local_670.f_32.f_2 = fVar2;
			Local_670.f_32.f_3 = (Local_670.f_32.f_3 + fVar4);
		}
	}
}

void func_690(int iParam0)//Position - 0x70F4C
{
	Local_670.f_32.f_6 = iParam0;
}

void func_691()//Position - 0x70F5D
{
	int iVar0;
	float fVar1;
	var uVar2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	float fVar6;
	float fVar7;
	iVar0 = Local_670.f_0;
	fVar1 = ENTITY::GET_ENTITY_PITCH(iVar0);
	ENTITY::GET_ENTITY_MATRIX(iVar0, &uVar2, &Var3, &uVar4, &uVar5);
	if (Local_670.f_32 < 0)
	{
		Local_670.f_32 = 0;
		Local_670.f_32.f_1 = 0;
		Local_670.f_32.f_2 = fVar1;
	}
	else
	{
		if (MISC::ABSF(Var3.f_2) > 0.5f)
		{
			Local_670.f_32.f_3 = 0f;
			func_690(1);
			return;
		}
		fVar6 = (fVar1 - Local_670.f_32.f_2);
		if (fVar1 < 0f)
		{
			fVar6 = 0f;
		}
		if (fVar6 > 270f)
		{
			fVar6 = (fVar6 - 360f);
		}
		else if (fVar6 < -270f)
		{
			fVar6 = (fVar6 + 360f);
		}
		if (fVar6 > 1f)
		{
			if (Local_670.f_32.f_5)
			{
				if (Local_670.f_32.f_3 > 75f)
				{
					Local_670.f_32.f_3 = 0f;
					func_690(1);
				}
				Local_670.f_32.f_3 = __LIB_0__.func_301(fVar1, 0f, 30f);
				Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
				Local_670.f_32.f_1 = 0;
			}
			Local_670.f_32.f_5 = 0;
		}
		else if (fVar6 < -1f)
		{
			if (!Local_670.f_32.f_5)
			{
				if (Local_670.f_32.f_3 > 75f)
				{
					Local_670.f_32.f_3 = 0f;
					func_690(1);
				}
				Local_670.f_32.f_3 = __LIB_0__.func_301(fVar1, 0f, 30f);
				Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
				Local_670.f_32.f_1 = 0;
			}
			Local_670.f_32.f_5 = 1;
		}
		Local_670.f_32.f_1 = SYSTEM::FLOOR(__LIB_0__.func_301((MISC::ABSF(Local_670.f_32.f_3) / 330f), MISC::ABSF(fVar1), 330f));
		fVar6 = __LIB_0__.func_301(fVar6, -2f, 2f);
		Local_670.f_32.f_2 = fVar1;
		fVar7 = (Local_670.f_32.f_3 + fVar6);
		if (fVar7 > 0f)
		{
			Local_670.f_32.f_3 = fVar7;
		}
		else
		{
			Local_670.f_32.f_3 = 0f;
		}
	}
}

void func_692()//Position - 0x7113A
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	var uVar3;
	struct<3> Var4;
	var uVar5;
	var uVar6;
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_ROTATION(Local_670.f_0, 2) };
	fVar1 = ENTITY::GET_ENTITY_ROLL(Local_670.f_0);
	fVar2 = ENTITY::GET_ENTITY_PITCH(Local_670.f_0);
	ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &uVar3, &Var4, &uVar5, &uVar6);
	switch (Local_2984.f_7)
	{
		case 0:
			func_702(Var0, fVar1, fVar2);
			break;
		case 1:
			func_700(Var0, fVar1, fVar2);
			break;
		case 2:
			if (func_699())
			{
				func_698(Var0, fVar1, fVar2);
			}
			else if (func_697())
			{
				func_695(Var0, fVar1, fVar2);
			}
			else if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
			{
				__LIB_0__.func_735(&(Local_670.f_32.f_7));
			}
			break;
		case 3:
			func_698(Var0, fVar1, fVar2);
			break;
		case 4:
			func_695(Var0, fVar1, fVar2);
			break;
		case 5:
			fLocal_669 = Local_670.f_32.f_3;
			func_693(Var4, Var0, fVar1, fVar2);
			break;
		case 6:
			fLocal_669 = Local_670.f_32.f_3;
			func_693(Var4, Var0, fVar1, fVar2);
			break;
		case 7:
			break;
		case 8:
			break;
	}
}

void func_693(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x71282
{
	float fVar0;
	__LIB_30__.func_660(Param1, fParam2, fParam3);
	fVar0 = (fParam3 - Local_670.f_32.f_2);
	if (fVar0 > 270f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -270f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (MISC::ABSF(Param0.f_2) > 0.574f)
	{
		Local_670.f_32.f_3 = 0f;
		func_690(1);
		return;
	}
	if (fVar0 > 1f)
	{
		if (Local_670.f_32.f_5)
		{
			if (Local_670.f_32.f_3 > 75f || (fParam3 < -45f && fParam3 > -135f))
			{
				Local_670.f_32.f_3 = 0f;
				func_690(1);
			}
			Local_670.f_32.f_3 = 0f;
			Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
			Local_670.f_32.f_1 = 0;
		}
		Local_670.f_32.f_5 = 0;
	}
	else if (fVar0 < -1f)
	{
		if (!Local_670.f_32.f_5)
		{
			if (Local_670.f_32.f_3 > 75f || (fParam3 < -45f && fParam3 > -135f))
			{
				Local_670.f_32.f_3 = 0f;
				func_690(1);
			}
			Local_670.f_32.f_3 = 0f;
			Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
			Local_670.f_32.f_1 = 0;
		}
		Local_670.f_32.f_5 = 1;
	}
	Local_670.f_32.f_1 = SYSTEM::FLOOR((MISC::ABSF(Local_670.f_32.f_3) / 330f));
	if (Local_670.f_32.f_1 == 0 && (MISC::ABSF(Local_670.f_32.f_3) / 330f) > 0.75f)
	{
		if (fParam3 > -5f && fParam2 < 10f)
		{
			Local_670.f_32.f_1++;
			Local_670.f_32.f_3 = 0f;
			Local_670.f_32.f_2 = 0f;
		}
	}
	fVar0 = __LIB_0__.func_301(fVar0, 0f, 2f);
	Local_670.f_32.f_3 = (Local_670.f_32.f_3 + fVar0);
	Local_670.f_32.f_2 = fParam3;
}

void func_695(struct<3> Param0, float fParam1, float fParam2)//Position - 0x71492
{
	__LIB_30__.func_660(Param0, fParam1, fParam2);
	if (func_697())
	{
		if (!__LIB_0__.func_736(&(Local_670.f_32.f_7)))
		{
			__LIB_26__.func_455(&(Local_670.f_32.f_7));
		}
		else if (__LIB_1__.func_637(&(Local_670.f_32.f_7)))
		{
			__LIB_11__.func_933(&(Local_670.f_32.f_7));
		}
	}
	else if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
	{
		__LIB_0__.func_735(&(Local_670.f_32.f_7));
	}
}

bool func_697()//Position - 0x7153A
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 < 0f;
}

void func_698(struct<3> Param0, float fParam1, float fParam2)//Position - 0x7157B
{
	__LIB_30__.func_660(Param0, fParam1, fParam2);
	if (func_699())
	{
		if (!__LIB_0__.func_736(&(Local_670.f_32.f_7)))
		{
			__LIB_26__.func_455(&(Local_670.f_32.f_7));
		}
		else if (__LIB_1__.func_637(&(Local_670.f_32.f_7)))
		{
			__LIB_11__.func_933(&(Local_670.f_32.f_7));
		}
	}
	else if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
	{
		__LIB_0__.func_735(&(Local_670.f_32.f_7));
	}
}

bool func_699()//Position - 0x715E8
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 > 0f;
}

void func_700(struct<3> Param0, float fParam1, float fParam2)//Position - 0x71629
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
		{
			__LIB_10__.func_565(&(Local_670.f_32.f_7));
		}
		return;
	}
	__LIB_30__.func_660(Param0, fParam1, fParam2);
	ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &uVar0, &uVar1, &Var2, &uVar3);
	if (Var2.f_2 <= -0.7071f)
	{
		if (!__LIB_0__.func_736(&(Local_670.f_32.f_7)))
		{
			__LIB_26__.func_455(&(Local_670.f_32.f_7));
		}
	}
	else if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
	{
		__LIB_6__.func_892(&(Local_670.f_32.f_7));
	}
}

void func_702(struct<3> Param0, float fParam1, float fParam2)//Position - 0x716ED
{
	float fVar0;
	__LIB_30__.func_660(Param0, fParam1, fParam2);
	if (MISC::ABSF(fParam2) > 45f && MISC::ABSF(fParam2) < 135f)
	{
		func_690(1);
	}
	fVar0 = (fParam1 - Local_670.f_32.f_2);
	if (fVar0 > 270f)
	{
		fVar0 = (fVar0 - 360f);
	}
	else if (fVar0 < -270f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > 0f)
	{
		if (Local_670.f_32.f_5)
		{
			Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
			Local_670.f_32.f_3 = 0f;
			Local_670.f_32.f_1 = 0;
		}
		Local_670.f_32.f_5 = 0;
	}
	else
	{
		if (!Local_670.f_32.f_5)
		{
			Local_670.f_32 = (Local_670.f_32 + Local_670.f_32.f_1);
			Local_670.f_32.f_3 = 0f;
			Local_670.f_32.f_1 = 0;
		}
		Local_670.f_32.f_5 = 1;
	}
	Local_670.f_32.f_1 = SYSTEM::FLOOR((MISC::ABSF(Local_670.f_32.f_3) / Local_2984.f_10));
	if (MISC::ABSF(fVar0) > 90f)
	{
		fVar0 = 0f;
	}
	Local_670.f_32.f_2 = fParam1;
	Local_670.f_32.f_3 = (Local_670.f_32.f_3 + fVar0);
}

void func_703(float fParam0)//Position - 0x7181A
{
	fLocal_3160 = fParam0;
}

void func_704(float fParam0)//Position - 0x71827
{
	fLocal_3157 = fParam0;
}

void func_705()//Position - 0x71834
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	if (func_576())
	{
		Var3 = { func_501() };
		if (!func_493() && !__LIB_0__.func_78(Var3, Local_601, 0))
		{
			HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Var3, &fVar0, &fVar1);
		}
	}
	else
	{
		HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(Local_3200, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		Var2.f_0 = (fVar0 - 0.5f);
	}
	else
	{
		Var2.f_0 = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		Var2.f_1 = (fVar1 - 0.5f);
	}
	else
	{
		Var2.f_1 = (0.5f - fVar1);
	}
	Var2.f_2 = 0f;
	__LIB_0__.func_79(Var2);
	Var2.f_0 = (Var2.f_0 * 0.75f);
	Var2.f_1 = (Var2.f_1 * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + Var2.f_0);
	}
	else
	{
		fVar0 = (0.5f - Var2.f_0);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + Var2.f_1);
	}
	else
	{
		fVar1 = (0.5f - Var2.f_1);
	}
	func_706(fVar0, fVar1);
}

void func_706(float fParam0, float fParam1)//Position - 0x71945
{
	Local_2985.f_2 = fParam0;
	Local_2985.f_3 = fParam1;
}

void func_707(float fParam0)//Position - 0x7195B
{
	fLocal_3158 = fParam0;
}

Vector3 func_709()//Position - 0x719A2
{
	return Local_670.f_181[Local_670.f_90.f_10 /*6*/].f_2;
}

void func_710(var uParam0, char[16] cParam1, var uParam2)//Position - 0x719BC
{
	Local_2988 = { cParam1 };
	Local_2988.f_5 = uParam0;
	Local_2988.f_4 = *uParam2;
}

void func_711(int* iParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5)//Position - 0x719DC
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (__LIB_0__.func_736(&iParam0))
	{
		fVar0 = __LIB_7__.func_78(&iParam0);
	}
	fVar1 = Local_670.f_52.f_30;
	fVar3 = Local_670.f_52.f_32;
	fVar2 = Local_670.f_52.f_31;
	if (fVar0 < fVar1)
	{
		StringCopy(sParam4, "PS_HUDTARG_G", 16);
		*uParam3 = fVar1;
		*uParam5 = 3;
	}
	else if (fVar0 < fVar2)
	{
		StringCopy(sParam4, "PS_HUDTARG_S", 16);
		*uParam3 = fVar2;
		*uParam5 = 2;
	}
	else if (fVar0 < fVar3)
	{
		StringCopy(sParam4, "PS_HUDTARG_B", 16);
		*uParam3 = fVar3;
		*uParam5 = 1;
	}
	else
	{
		*uParam3 = -1f;
		StringCopy(sParam4, "", 16);
		*uParam5 = 0;
	}
}

void func_712(int* iParam0, var uParam1)//Position - 0x71A76
{
	if (*uParam1 != 0)
	{
		Local_2988.f_11 = *uParam1;
		__LIB_35__.func_72(iParam0, SYSTEM::TO_FLOAT(*uParam1));
		__LIB_6__.func_892(&(Local_2988.f_6));
		*uParam1 = 0;
	}
	if (Local_2988.f_11 != 0)
	{
		if (__LIB_32__.func_785(&(Local_2988.f_6), 2f))
		{
			Local_2988.f_11 = 0;
		}
	}
}

void func_715()//Position - 0x71AEF
{
	struct<3> Var0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	func_367();
	MISC::CLEAR_AREA(Local_628, 1600f, true, false, false, false);
	func_718();
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
	{
		PED::DELETE_PED(&(Local_670.f_6));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_7, false))
	{
		PED::DELETE_PED(&(Local_670.f_7));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__.func_108(52));
	if (!ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
	{
		Local_670.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_606, Local_628, fLocal_630, true, true, false);
	}
	else
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_670.f_0);
		ENTITY::SET_ENTITY_COORDS(Local_670.f_0, Local_628, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_670.f_0, fLocal_630);
	}
	VEHICLE::SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Local_670.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_670.f_0, true);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_670.f_0, true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_670.f_0, true, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, true);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_670.f_5))
	{
		Local_670.f_5 = PED::CREATE_PED_INSIDE_VEHICLE(Local_670.f_0, 26, iLocal_602, -1, true, true);
	}
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_670.f_0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, true);
		if (!__LIB_2__.func_49(Local_670.f_0))
		{
			iLocal_651 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_651, Local_670.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_670.f_0, "Chassis"));
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_651, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_651, true);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		if (__LIB_18__.func_173() == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
		}
		else if (__LIB_18__.func_173() == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
		}
		else if (__LIB_18__.func_173() == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		}
	}
	func_718();
	func_716();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	Local_670.f_482.f_3 = { 10.2986f, 0f, 8.909f };
	Local_670.f_482.f_9 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + fLocal_630)), SYSTEM::SIN((-97.4239f + fLocal_630))) };
	Local_670.f_482.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_670.f_0, 1.12046f, -0.317773f, 1.3385f) };
	Var1 = { __LIB_0__.func_298(Local_670.f_482.f_9, Local_670.f_482.f_3.f_2) };
	Local_670.f_482.f_15 = { (-33f + Local_670.f_482.f_3), 0f, (-88.515f + fLocal_630) };
	Local_670.f_482.f_18 = 26f;
	Var0 = { Local_670.f_482.f_15 };
	Var0.f_2 = (Var0.f_2 + Local_670.f_482.f_3.f_2);
	if (CAM::DOES_CAM_EXIST(Local_670.f_516))
	{
		CAM::DESTROY_CAM(Local_670.f_516, false);
	}
	STREAMING::NEW_LOAD_SCENE_START(Local_670.f_482.f_6 + Local_670.f_482.f_9, Local_670.f_482.f_9, 7000f, 0);
	Local_670.f_516 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_670.f_482.f_6 + Var1, Var0, Local_670.f_482.f_18, true, 2);
	CAM::SET_CAM_NEAR_CLIP(Local_670.f_516, __LIB_13__.func_63());
	CAM::SHAKE_SCRIPT_GLOBAL("SKY_DIVING_SHAKE", 0.15f);
	Local_670.f_482.f_12 = { 0f, 0f, 0f };
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_716()//Position - 0x71E57
{
	Local_3200 = { -1048.5212f, -3211.0261f, 12.9443f };
	func_369(1);
	func_494(2, -1048.5212f, -3211.0261f, 12.9443f);
}

void func_718()//Position - 0x71EB2
{
	int iVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3192))
	{
		iLocal_3192 = VEHICLE::CREATE_VEHICLE(joaat("phantom"), -959.5065f, -3361.259f, 12.9445f, 59.7732f, true, true, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_3192, 4);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3192, true, 1);
	}
	else
	{
		VEHICLE::SET_VEHICLE_FIXED(iLocal_3192);
		ENTITY::SET_ENTITY_COORDS(iLocal_3192, -959.5065f, -3361.259f, 12.9445f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_3192, 59.7732f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3193))
	{
		iLocal_3193 = VEHICLE::CREATE_VEHICLE(joaat("trflat"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3192, 0f, -10f, 0f), 59.7732f, true, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_3193, true, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_3193, 2000);
	}
	else
	{
		VEHICLE::SET_VEHICLE_FIXED(iLocal_3193);
	}
	if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_3192))
	{
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_3192, iLocal_3193, 1f);
	}
	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3192, -1, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_3192, 26, iLocal_602, -1, true, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	else if (!PED::IS_PED_INJURED(iVar0))
	{
		TASK::CLEAR_PED_TASKS(iVar0);
		ENTITY::SET_ENTITY_HEALTH(iVar0, ENTITY::GET_ENTITY_MAX_HEALTH(iVar0), 0);
		PED::RESET_PED_VISIBLE_DAMAGE(iVar0);
		if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_3192, false) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3192, -1, false) != iVar0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				PED::SPECIAL_FUNCTION_DO_NOT_USE(iVar0, true);
			}
			PED::SET_PED_INTO_VEHICLE(iVar0, iLocal_3192, -1);
		}
	}
	TASK::TASK_STAND_STILL(iVar0, -1);
}

int func_719()//Position - 0x7202A
{
	CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Local_670.f_6);
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				func_721("PS_PREV10", "PS_PREV10_1", "PS_PREV10_2", "PS_PREV10_3", "PS_PREV10_4", "PS_PREV10_5");
				break;
			case 3:
				func_720();
				break;
			case 4:
				break;
			case 5:
				break;
		}
		return 1;
	}
	return 0;
}

void func_720()//Position - 0x720A0
{
	switch (iLocal_679)
	{
		case 2:
			fLocal_688 = 20f;
			__LIB_6__.func_892(&iLocal_680);
			if (!__LIB_2__.func_49(iLocal_3192))
			{
				Local_3200 = { ENTITY::GET_ENTITY_COORDS(iLocal_3192, true) };
			}
			iLocal_679 = 5;
			break;
		case 5:
			if (__LIB_26__.func_294(&iLocal_680, 5f))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
				{
					TASK::TASK_PARACHUTE_TO_TARGET(Local_670.f_6, Local_3200);
				}
				iLocal_679 = 6;
			}
			break;
		case 6:
			if (__LIB_26__.func_294(&iLocal_680, 7f))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
				{
					iLocal_679 = 8;
					PED::SET_PED_KEEP_TASK(Local_670.f_6, true);
					TASK::SET_PARACHUTE_TASK_TARGET(Local_670.f_6, Local_3200);
				}
			}
			break;
		case 8:
			break;
	}
}

void func_721(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)//Position - 0x72160
{
	sParam1 = sParam1;
	sParam2 = sParam2;
	sParam3 = sParam3;
	if (MISC::IS_STRING_NULL(sParam1))
	{
	}
	else if (MISC::IS_STRING_NULL(sParam2))
	{
		Local_150.f_165 = sParam1;
		Local_150.f_170 = sParam1;
	}
	else if (MISC::IS_STRING_NULL(sParam3))
	{
		Local_150.f_165 = sParam1;
		Local_150.f_166 = sParam2;
		Local_150.f_170 = sParam1;
	}
	else if (MISC::IS_STRING_NULL(sParam4))
	{
		Local_150.f_165 = sParam1;
		Local_150.f_166 = sParam2;
		Local_150.f_167 = sParam3;
		Local_150.f_170 = sParam1;
	}
	else if (MISC::IS_STRING_NULL(sParam5))
	{
		Local_150.f_165 = sParam1;
		Local_150.f_166 = sParam2;
		Local_150.f_167 = sParam3;
		Local_150.f_168 = sParam4;
		Local_150.f_170 = sParam1;
	}
	else
	{
		Local_150.f_165 = sParam1;
		Local_150.f_166 = sParam2;
		Local_150.f_167 = sParam3;
		Local_150.f_168 = sParam4;
		Local_150.f_169 = sParam5;
		Local_150.f_170 = sParam1;
	}
	__LIB_35__.func_536(&Local_150, "MGPSAUD", sParam0, 9, 1, 1, 0);
}

void func_723()//Position - 0x72289
{
	HUD::DISPLAY_RADAR(false);
	func_368();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
}

int func_724()//Position - 0x722A4
{
	if (iLocal_701 > 0 && iLocal_701 < 5)
	{
		func_578();
		func_557();
	}
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	switch (iLocal_701)
	{
		case 0:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3359))
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_3359, 255, 255, 255, 255, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			Local_670.f_518 = 0;
			if (Local_670.f_52.f_6 || iLocal_656)
			{
				iLocal_701 = 5;
				break;
			}
			if (MISC::IS_PC_VERSION())
			{
				Local_693.f_0 = __LIB_30__.func_626(300f, 0);
				Local_693.f_1 = __LIB_12__.func_887(538f, 0);
			}
			else
			{
				Local_693.f_0 = __LIB_30__.func_626(300f, 0);
				Local_693.f_1 = __LIB_12__.func_887(548f, 0);
			}
			__LIB_30__.func_625(&Local_694, 0);
			Local_694.f_2 = 0.54f;
			if (MISC::IS_PC_VERSION())
			{
				func_733(__LIB_30__.func_626(300f, 0), __LIB_12__.func_887(568f, 0), __LIB_30__.func_626(300f, 0), 0.95f);
			}
			else
			{
				func_733(__LIB_30__.func_626(300f, 0), __LIB_12__.func_887(578f, 0), 0, 0);
			}
			__LIB_2__.func_186(&iLocal_697, 0f);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("scanline_cam");
			iLocal_701 = 2;
			break;
		case 2:
			__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
			__LIB_12__.func_133(&iLocal_1698, "IB_SKIP" /* GXT: Skip */, 2, 201, 1, 1, 0);
			iLocal_701 = 3;
			break;
		case 3:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_3359))
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_3359, 255, 255, 255, 255, 0);
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::DRAW_RECT(__LIB_30__.func_626(640f, 0), __LIB_12__.func_887(576f, 0), __LIB_30__.func_626(1280f, 0), __LIB_12__.func_887(95f, 0), 0, 0, 78, 196, false);
				GRAPHICS::DRAW_RECT(__LIB_30__.func_626(640f, 0), __LIB_12__.func_887(529f, 0), __LIB_30__.func_626(1280f, 0), __LIB_12__.func_887(1f, 0), 255, 255, 255, 196, false);
				GRAPHICS::DRAW_RECT(__LIB_30__.func_626(640f, 0), __LIB_12__.func_887(623f, 0), __LIB_30__.func_626(1280f, 0), __LIB_12__.func_887(1f, 0), 255, 255, 255, 196, false);
			}
			else
			{
				GRAPHICS::DRAW_RECT(__LIB_30__.func_626(640f, 0), __LIB_12__.func_887(576f, 0), __LIB_30__.func_626(1280f, 0), __LIB_12__.func_887(75f, 0), 0, 0, 78, 196, false);
				GRAPHICS::DRAW_RECT(__LIB_30__.func_626(640f, 0), __LIB_12__.func_887(539f, 0), __LIB_30__.func_626(1280f, 0), __LIB_12__.func_887(1f, 0), 255, 255, 255, 196, false);
				GRAPHICS::DRAW_RECT(__LIB_30__.func_626(640f, 0), __LIB_12__.func_887(613f, 0), __LIB_30__.func_626(1280f, 0), __LIB_12__.func_887(1f, 0), 255, 255, 255, 196, false);
			}
			GRAPHICS::DRAW_SPRITE("pilotSchool", "FlightSchool_Logo_256", __LIB_30__.func_626(196f, 0), __LIB_12__.func_887(576f, 0), __LIB_30__.func_626(128f, 0), __LIB_12__.func_887(128f, 0), 0f, 255, 255, 255, 255, false, 0);
			__LIB_30__.func_661(Local_693, Local_694, &(Local_708[Global_112413 /*38*/]));
			if (__LIB_7__.func_42(&iLocal_697) >= 1f)
			{
				__LIB_20__.func_627(&iLocal_1698, 1128792064, 1, 0, 1, 1065353216);
			}
			func_728();
			break;
		case 5:
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_3359);
			func_727();
			func_725();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			iLocal_701 = 6;
			break;
		default:
			break;
	}
	return 1;
}

void func_725()//Position - 0x725FC
{
	__LIB_0__.func_202(&Local_150, 0);
}

void func_727()//Position - 0x72628
{
	Local_150.f_165 = 0;
	Local_150.f_166 = 0;
	Local_150.f_167 = 0;
	Local_150.f_168 = 0;
	Local_150.f_169 = 0;
	Local_150.f_170 = 0;
}

void func_728()//Position - 0x7264E
{
	var uVar0;
	if (__LIB_0__.func_75() && AUDIO::IS_SCRIPTED_CONVERSATION_LOADED())
	{
		MemCopy(&uVar0, {__LIB_9__.func_980()}, 8);
		if (!MISC::IS_STRING_NULL(&uVar0))
		{
			if (!MISC::ARE_STRINGS_EQUAL(Local_150.f_170, &uVar0))
			{
				if (MISC::ARE_STRINGS_EQUAL(&uVar0, Local_150.f_165))
				{
					Local_150.f_170 = Local_150.f_165;
				}
				else if (!MISC::IS_STRING_NULL(Local_150.f_166) && MISC::ARE_STRINGS_EQUAL(&uVar0, Local_150.f_166))
				{
					Local_150.f_170 = Local_150.f_166;
				}
				else if (!MISC::IS_STRING_NULL(Local_150.f_167) && MISC::ARE_STRINGS_EQUAL(&uVar0, Local_150.f_167))
				{
					Local_150.f_170 = Local_150.f_167;
				}
				else if (!MISC::IS_STRING_NULL(Local_150.f_168) && MISC::ARE_STRINGS_EQUAL(&uVar0, Local_150.f_168))
				{
					Local_150.f_170 = Local_150.f_168;
				}
				else if (!MISC::IS_STRING_NULL(Local_150.f_169) && MISC::ARE_STRINGS_EQUAL(&uVar0, Local_150.f_169))
				{
					Local_150.f_170 = Local_150.f_169;
				}
				else if (MISC::IS_STRING_NULL(&uVar0))
				{
				}
			}
			__LIB_30__.func_661(Local_150.f_171, Local_150.f_173, Local_150.f_170);
		}
	}
}

void func_733(var uParam0, var uParam1, int iParam2, float fParam3)//Position - 0x72889
{
	__LIB_0__.func_203(&Local_150, 0, 0, "pilotDispatch", 0, 1);
	Local_150.f_165 = 0;
	Local_150.f_166 = 0;
	Local_150.f_167 = 0;
	Local_150.f_168 = 0;
	Local_150.f_169 = 0;
	Local_150.f_171 = uParam0;
	Local_150.f_171.f_1 = uParam1;
	Local_150.f_173 = 0;
	Local_150.f_173.f_1 = 0.202f;
	Local_150.f_173.f_2 = 0.409f;
	Local_150.f_173.f_3 = 255;
	Local_150.f_173.f_4 = 255;
	Local_150.f_173.f_5 = 255;
	Local_150.f_173.f_6 = 255;
	Local_150.f_173.f_7 = 0;
	Local_150.f_173.f_8 = iParam2;
	Local_150.f_173.f_9 = fParam3;
	Local_150.f_173.f_10 = 3;
}

void func_737()//Position - 0x729A4
{
	int iVar0;
	iLocal_662 = 0;
	iLocal_606 = joaat("maverick");
	iLocal_3179 = 1;
	iLocal_3178 = 1;
	iLocal_3180 = 1;
	iLocal_692 = -1;
	iLocal_679 = 2;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	func_716();
	Local_628 = { -846.7234f, -3697.9106f, 1248.2856f };
	fLocal_630 = 102.2189f;
	Local_685 = { -1929.2f, -2791.4f, 616.3f };
	Local_686 = { __LIB_0__.func_79(Vector(614.9f, -2793.5f, -1925.6f) - Local_685) };
	func_778(1.5f);
	func_740();
	Local_683 = { Local_70 };
	iVar0 = __LIB_2__.func_108(52);
	TASK::REQUEST_WAYPOINT_RECORDING("ps_trucktarget_cw");
	STREAMING::REQUEST_ANIM_DICT("veh@helicopter@rps@base");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@");
	__LIB_0__.func_371();
	STREAMING::REQUEST_MODEL(joaat("phantom"));
	STREAMING::REQUEST_MODEL(joaat("trflat"));
	STREAMING::REQUEST_MODEL(iLocal_602);
	STREAMING::REQUEST_PTFX_ASSET();
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(joaat("prop_parapack_01"));
	while ((((((((((!__LIB_0__.func_109() || !STREAMING::HAS_MODEL_LOADED(iVar0)) || !STREAMING::HAS_ANIM_DICT_LOADED("veh@helicopter@rps@base")) || !STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@")) || !STREAMING::HAS_MODEL_LOADED(joaat("phantom"))) || !STREAMING::HAS_MODEL_LOADED(joaat("trflat"))) || !STREAMING::HAS_MODEL_LOADED(iLocal_602)) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_parapack_01"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("ps_trucktarget_cw")) || !PED::CAN_CREATE_RANDOM_DRIVER())
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1366.7184f, -1773.0824f, -3.5f, -1526.6874f, -3390.18f, 1.9358f, false, true);
	SYSTEM::SETTIMERA(0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_18__.func_173() == 0)
		{
			func_318(PLAYER::PLAYER_PED_ID(), 12, 19, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
		}
		else if (__LIB_18__.func_173() == 1)
		{
			func_318(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
		}
		else if (__LIB_18__.func_173() == 2)
		{
			func_318(PLAYER::PLAYER_PED_ID(), 12, 16, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		}
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 2, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), -1925.6293f, -2793.5227f, 700f, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 239.6148f);
	}
	Local_670.f_6 = PED::CREATE_PED(26, iVar0, -1925.6293f, -2793.5227f, 650f, 0f, true, true);
	if (!PED::IS_PED_INJURED(Local_670.f_6))
	{
		ENTITY::SET_ENTITY_HEADING(Local_670.f_6, 239.6148f);
		WEAPON::GIVE_WEAPON_TO_PED(Local_670.f_6, joaat("GADGET_PARACHUTE"), 1, true, true);
		while (!WEAPON::HAS_PED_GOT_WEAPON(Local_670.f_6, joaat("GADGET_PARACHUTE"), false))
		{
			SYSTEM::WAIT(0);
		}
		WEAPON::SET_PED_GADGET(Local_670.f_6, joaat("GADGET_PARACHUTE"), true);
		PED::SET_PED_GRAVITY(Local_670.f_6, true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_670.f_6);
		TASK::TASK_SKY_DIVE(Local_670.f_6, false);
		while ((!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false) && PED::GET_PED_PARACHUTE_STATE(Local_670.f_6) != 0) && SYSTEM::TIMERA() < 3000)
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_740()//Position - 0x72D0A
{
	func_742();
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	MISC::CLEAR_AREA(Local_628, 1000f, true, false, false, false);
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_670);
	}
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	iLocal_69 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	__LIB_8__.func_770(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
	func_741();
	STREAMING::REQUEST_MODEL(iLocal_606);
	Local_2980.f_0 = __LIB_0__.func_729();
	while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DRUG_TRAFFIC_AIR", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_606))
	{
		SYSTEM::WAIT(0);
	}
}

void func_741()//Position - 0x72DA7
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(&cLocal_603, false);
	while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(&cLocal_603))
	{
		SYSTEM::WAIT(0);
	}
}

void func_742()//Position - 0x72DCA
{
	__LIB_40__.func_697(&uLocal_1832);
}

void func_778(float fParam0)//Position - 0x73C93
{
	fLocal_667 = fParam0;
}

void func_779()//Position - 0x73CA0
{
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_STOP");
	AUDIO::CANCEL_MUSIC_EVENT("MGPS_FAIL");
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(4, iLocal_631);
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
	}
	if (!PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	}
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	func_780();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
	}
	func_334(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	func_41(PLAYER::PLAYER_PED_ID(), &uLocal_3206, 0, 0, 1, 0);
	func_402();
	func_369(1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_602);
}

void func_780()//Position - 0x73D67
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_3194))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_3194, false);
	}
}

int func_781()//Position - 0x73D81
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		func_784();
		if (PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
		}
		switch (iLocal_84)
		{
			case 2:
				switch (func_546())
				{
					case 0:
						func_783(5, 1, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_84 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						func_543();
						if (func_514(0))
						{
							func_545();
						}
						break;
					case 2:
						func_543();
						iLocal_84 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						func_543();
						__LIB_0__.func_151("PSCHUTE_1", -1);
						func_451("PS_POT", "PS_POT_1", 0);
						iLocal_3180++;
						__LIB_18__.func_276(&(Local_670.f_482));
						func_545();
						break;
					case 1:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 0.08f && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
							{
								ENTITY::SET_ENTITY_COORDS(Local_670.f_0, Local_628, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_670.f_0, fLocal_630);
								iLocal_651 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_651, Local_670.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_670.f_0, "Chassis"));
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_651, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_651, 0.6f);
							}
							HUD::CLEAR_HELP(true);
							func_506();
							__LIB_6__.func_892(&(Local_670.f_482));
							iLocal_84 = 5;
							func_505(0);
						}
						else
						{
							func_543();
						}
						break;
					case 2:
						func_545();
						break;
				}
				break;
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_651) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_651) > 0.92f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FORCE_MOTION_STATE(0, joaat("MotionState_Parachuting"), false);
					TASK::TASK_PARACHUTE(0, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
				switch (func_546())
				{
					case 0:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 0f)
						{
							Local_670.f_482.f_3.f_2 = __LIB_0__.func_301(Local_670.f_482.f_3.f_2, -8.909f, 8.909f);
							Local_670.f_482.f_15.f_2 = (Local_670.f_482.f_15.f_2 + Local_670.f_482.f_3.f_2);
							Var2 = { __LIB_0__.func_298(Local_670.f_482.f_9, Local_670.f_482.f_3.f_2) };
							CAM::SET_CAM_PARAMS(Local_670.f_516, Local_670.f_482.f_6 + Var2, Local_670.f_482.f_15, Local_670.f_482.f_18, 300, 1, 1, 2);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_670.f_517, Local_670.f_516, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
							func_545();
						}
						break;
					case 1:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 0f)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::RENDER_SCRIPT_CAMS(false, true, SYSTEM::FLOOR((1000f * (1.1f - 0f))), false, false, 0);
							func_545();
						}
						break;
					case 2:
						if (__LIB_7__.func_78(&(Local_670.f_482)) > 1.1f)
						{
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false);
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_jump", 3))
							{
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
								func_502();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_411(1);
								if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
								{
									CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
								}
								__LIB_0__.func_735(&(Local_670.f_482));
								iLocal_84 = 6;
								func_545();
							}
						}
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						__LIB_0__.func_151("PSCHUTE_2", -1);
						func_451("PS_POT", "PS_POT_2", 0);
						iLocal_3180++;
						func_545();
						break;
					case 1:
						if ((ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
						{
							HUD::CLEAR_PRINTS();
							HUD::CLEAR_HELP(true);
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
							WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
							__LIB_18__.func_276(&(Local_670.f_26));
							func_545();
						}
						else
						{
							if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3)
							{
								HUD::CLEAR_HELP(true);
							}
							else if (!Local_670.f_52.f_8)
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
									HUD::CLEAR_HELP(true);
									__LIB_0__.func_151("PSCHUTE_3", -1);
									Local_670.f_52.f_8 = 1;
								}
							}
							else if (!Local_670.f_52.f_9)
							{
								Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
								if (Var1.f_2 <= 110f)
								{
									HUD::CLEAR_HELP(true);
									Local_670.f_181[0 /*6*/].f_2.f_2 = (Local_670.f_181[0 /*6*/].f_2.f_2 - 2f);
									if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
									{
										__LIB_0__.func_151("PSCHUTE_4_KM", 10000);
									}
									else
									{
										__LIB_0__.func_151("PSCHUTE_4", 10000);
									}
									Local_670.f_52.f_9 = 1;
								}
							}
							if (func_475() && func_474())
							{
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
								WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
								__LIB_18__.func_276(&(Local_670.f_26));
								func_545();
								iLocal_69 = 5;
							}
						}
						break;
					case 2:
						Local_670.f_52.f_8 = 0;
						Local_670.f_52.f_9 = 0;
						iLocal_84 = 7;
						iLocal_3177 = 1;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (__LIB_7__.func_78(&(Local_670.f_26)) > 0.25f)
						{
							__LIB_0__.func_735(&(Local_670.f_26));
							func_545();
						}
						break;
					case 2:
						iLocal_84 = func_782();
						if (iLocal_84 != 7)
						{
							iLocal_3177 = 1;
							iLocal_3180 = 4;
							if (iLocal_84 == 0)
							{
								func_471(func_501());
								func_470(0);
							}
							iLocal_654 = 1;
							func_545();
						}
						break;
				}
				break;
			case 0:
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
				}
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 1);
							func_369(0);
							func_448("PS_POT", "PS_POT_5", "PS_POT_6", "PS_POT_7", "PS_POT_8", 0, 0);
							iLocal_3179++;
							__LIB_6__.func_892(&iLocal_3203);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_653) > 500)
							{
								func_416(1);
								func_545();
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 1:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 1);
								if (iLocal_654 == 1)
								{
									func_448("PS_POT", "PS_POT_5", "PS_POT_6", "PS_POT_7", "PS_POT_8", 0, 0);
								}
								else
								{
									func_448("PS_POT", "PS_POT_5", "PS_POT_6", "PS_POT_7", "", 0, 0);
								}
								iLocal_3179++;
								iLocal_653 = MISC::GET_GAME_TIMER();
								__LIB_6__.func_892(&iLocal_3203);
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

int func_782()//Position - 0x74598
{
	struct<3> Var0;
	float fVar1;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_69 = 25;
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_69 = 13;
		return 1;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - func_709() };
	if (ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		if (Var0.f_2 > 17f)
		{
			iLocal_69 = 17;
			return 1;
		}
		else
		{
			return 7;
		}
	}
	if (Var0.f_2 < -2f || Var0.f_2 > 5f)
	{
		iLocal_69 = 2;
		return 1;
	}
	fVar1 = ((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1));
	if (fVar1 > (Local_708[9 /*38*/].f_35 * Local_708[9 /*38*/].f_35))
	{
		iLocal_69 = 2;
		return 1;
	}
	Local_670.f_42.f_3 = SYSTEM::SQRT(fVar1);
	if (Local_670.f_42.f_3 > Local_708[9 /*38*/].f_34)
	{
		iLocal_671[Global_112413] = 70;
	}
	else if (Local_670.f_42.f_3 > Local_708[9 /*38*/].f_33)
	{
		iLocal_671[Global_112413] = 80;
	}
	else
	{
		iLocal_671[Global_112413] = 90;
	}
	return 0;
}

void func_783(int iParam0, int iParam1, int iParam2)//Position - 0x746AD
{
	if (Local_670.f_90.f_1 == 1)
	{
		return;
	}
	Local_670.f_90 = iParam0;
	Local_670.f_90.f_5 = iParam2;
	Local_670.f_520 = 0;
	Local_670.f_521 = 0;
	switch (Local_670.f_90)
	{
		case 1:
			Local_670.f_90.f_7 = iParam1;
			if (func_490(Local_670.f_90.f_7))
			{
				func_478(Local_670.f_90.f_7, 0);
			}
			Local_670.f_90.f_1 = 1;
			break;
		case 2:
			Local_670.f_90.f_7 = iParam1;
			if (func_490(Local_670.f_90.f_7 + 1))
			{
				Local_670.f_90.f_8 = Local_670.f_90.f_7 + 1;
			}
			else
			{
				Local_670.f_90.f_8 = Local_670.f_90.f_7;
			}
			if (func_490(Local_670.f_90.f_7))
			{
				func_478(Local_670.f_90.f_7, 0);
				func_478(Local_670.f_90.f_8, 1);
			}
			Local_670.f_90.f_1 = 1;
			break;
		case 3:
			Local_670.f_90.f_7 = iParam1;
			if (func_490(Local_670.f_90.f_7 + 1))
			{
				Local_670.f_90.f_8 = Local_670.f_90.f_7 + 1;
			}
			else
			{
				Local_670.f_90.f_8 = Local_670.f_90.f_7;
			}
			if (func_490(Local_670.f_90.f_7))
			{
				func_478(Local_670.f_90.f_7, 0);
				func_478(Local_670.f_90.f_8, 1);
			}
			Local_670.f_90.f_1 = 1;
			break;
		case 4:
			Local_670.f_90.f_7 = iParam1;
			Local_670.f_90.f_8 = Local_670.f_90.f_7 + 1;
			if (func_490(Local_670.f_90.f_7))
			{
				func_478(Local_670.f_90.f_7, 0);
			}
			Local_670.f_90.f_1 = 1;
			break;
		case 5:
			Local_670.f_90.f_7 = iParam1;
			if (func_490(Local_670.f_90.f_7))
			{
				func_478(Local_670.f_90.f_7, 0);
			}
			if (func_490(Local_670.f_90.f_8))
			{
				func_478(Local_670.f_90.f_8, 1);
			}
			Local_670.f_90.f_8 = Local_670.f_90.f_7 + 1;
			Local_670.f_90.f_1 = 1;
			break;
	}
}

void func_784()//Position - 0x748A3
{
	if (!BitTest(iLocal_608, 1))
	{
		if (iLocal_84 >= 5)
		{
			if (__LIB_30__.func_619("MGPS_START", &iLocal_608, 0))
			{
				__LIB_30__.func_618("MGPS_START", &iLocal_608, 1);
			}
		}
	}
	else if (!BitTest(iLocal_608, 3) && !BitTest(iLocal_608, 5))
	{
		if (iLocal_84 == 0 || iLocal_84 == 1)
		{
			if (__LIB_30__.func_619("MGPS_STOP", &iLocal_608, 2))
			{
				__LIB_30__.func_618("MGPS_STOP", &iLocal_608, 3);
			}
		}
	}
}

void func_785()//Position - 0x74919
{
	struct<3> Var0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	func_367();
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
	{
		PED::DELETE_PED(&(Local_670.f_6));
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_7, false))
	{
		PED::DELETE_PED(&(Local_670.f_7));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_2__.func_108(52));
	MISC::CLEAR_AREA(Local_628, 2000f, true, false, false, false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
	{
		Local_670.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_606, Local_628, fLocal_630, true, true, false);
	}
	else
	{
		VEHICLE::SET_VEHICLE_FIXED(Local_670.f_0);
		ENTITY::SET_ENTITY_COORDS(Local_670.f_0, Local_628, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_670.f_0, fLocal_630);
	}
	VEHICLE::SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Local_670.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_670.f_0, true);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_670.f_0, true, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_670.f_0, true, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, true);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_670.f_5))
	{
		Local_670.f_5 = PED::CREATE_PED_INSIDE_VEHICLE(Local_670.f_0, 26, iLocal_602, -1, true, true);
	}
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_670.f_0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, true);
		if (!__LIB_2__.func_49(Local_670.f_0))
		{
			iLocal_651 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_651, Local_670.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_670.f_0, "Chassis"));
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_651, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1000f, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_651, true);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		if (__LIB_18__.func_173() == 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
		}
		else if (__LIB_18__.func_173() == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
		}
		else if (__LIB_18__.func_173() == 2)
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		}
	}
	func_786();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	Local_670.f_482.f_3 = { 10.2986f, 0f, 8.909f };
	Local_670.f_482.f_9 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + fLocal_630)), SYSTEM::SIN((-97.4239f + fLocal_630))) };
	Local_670.f_482.f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_670.f_0, 1.12046f, -0.317773f, 1.3385f) };
	Var1 = { __LIB_0__.func_298(Local_670.f_482.f_9, Local_670.f_482.f_3.f_2) };
	Local_670.f_482.f_15 = { (-33f + Local_670.f_482.f_3), 0f, (-88.515f + fLocal_630) };
	Local_670.f_482.f_18 = 26f;
	Var0 = { Local_670.f_482.f_15 };
	Var0.f_2 = (Var0.f_2 + Local_670.f_482.f_3.f_2);
	if (CAM::DOES_CAM_EXIST(Local_670.f_516))
	{
		CAM::DESTROY_CAM(Local_670.f_516, false);
	}
	STREAMING::NEW_LOAD_SCENE_START(Local_670.f_482.f_6 + Local_670.f_482.f_9, Local_670.f_482.f_9, 7000f, 0);
	Local_670.f_516 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_670.f_482.f_6 + Var1, Var0, Local_670.f_482.f_18, true, 2);
	CAM::SET_CAM_NEAR_CLIP(Local_670.f_516, __LIB_13__.func_63());
	CAM::SHAKE_SCRIPT_GLOBAL("SKY_DIVING_SHAKE", 0.15f);
	Local_670.f_482.f_12 = { 0f, 0f, 0f };
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

void func_786()//Position - 0x74C7E
{
	func_369(1);
	func_494(10, -1016.4353f, -2600.243f, 40.1061f);
}

int func_787()//Position - 0x74CA0
{
	CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Local_670.f_6);
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				func_721("PS_PREV9", "PS_PREV9_1", "PS_PREV9_2", "PS_PREV9_3", 0, 0);
				func_783(5, 1, 0);
				Local_670.f_516 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				CAM::SHAKE_CAM(Local_670.f_516, "VIBRATE_SHAKE", 1f);
				if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false) && !ENTITY::IS_ENTITY_DEAD(Local_670.f_7, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_670.f_7, ENTITY::GET_ENTITY_COORDS(Local_670.f_6, true), true, false, false, true);
					ENTITY::SET_ENTITY_VELOCITY(Local_670.f_7, ENTITY::GET_ENTITY_VELOCITY(Local_670.f_6));
				}
				CAM::ATTACH_CAM_TO_ENTITY(Local_670.f_516, Local_670.f_7, 3f, -4f, 1f, true);
				CAM::POINT_CAM_AT_ENTITY(Local_670.f_516, Local_670.f_6, 0f, 0f, 0f, true);
				CAM::SET_CAM_ACTIVE(Local_670.f_516, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				break;
			case 3:
				func_788();
				if (__LIB_0__.func_736(&iLocal_680))
				{
					if (__LIB_7__.func_78(&iLocal_680) > 7f)
					{
						CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
					}
				}
				break;
			case 5:
				break;
		}
		return 1;
	}
	return 0;
}

void func_788()//Position - 0x74DD3
{
	switch (iLocal_679)
	{
		case 2:
			fLocal_688 = 17f;
			__LIB_6__.func_892(&iLocal_680);
			iLocal_679 = 6;
			break;
		case 5:
			if (__LIB_26__.func_294(&iLocal_680, 5f))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
				{
					TASK::TASK_PARACHUTE_TO_TARGET(Local_670.f_6, func_501());
				}
				iLocal_679 = 6;
			}
			break;
		case 6:
			if (__LIB_26__.func_294(&iLocal_680, 7f))
			{
				iLocal_679 = 8;
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
				{
					PED::SET_PED_KEEP_TASK(PLAYER::PLAYER_PED_ID(), true);
					TASK::SET_PARACHUTE_TASK_TARGET(Local_670.f_6, func_501());
				}
			}
			break;
		case 8:
			break;
	}
}

void func_789()//Position - 0x74E93
{
	int iVar0;
	iLocal_662 = 0;
	iLocal_606 = joaat("maverick");
	iLocal_3177 = 1;
	iLocal_3180 = 1;
	iLocal_3179 = 1;
	iLocal_3178 = 1;
	iLocal_692 = -1;
	iLocal_679 = 2;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	func_786();
	Local_628 = { -2064.2603f, -2995.904f, 1105.6519f };
	fLocal_630 = 14.6945f;
	Local_685 = { -1087.4f, -3330f, 604.6f };
	Local_686 = { __LIB_0__.func_79(Vector(599.7f, -3326.1f, -1090.4f) - Local_685) };
	func_778(1.5f);
	func_740();
	Local_627 = { Local_628 };
	Local_683 = { Local_70 };
	iVar0 = __LIB_2__.func_108(52);
	STREAMING::REQUEST_ANIM_DICT("veh@helicopter@rps@base");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@");
	__LIB_0__.func_371();
	STREAMING::REQUEST_MODEL(iVar0);
	STREAMING::REQUEST_MODEL(iLocal_602);
	STREAMING::REQUEST_MODEL(joaat("prop_parapack_01"));
	STREAMING::REQUEST_PTFX_ASSET();
	while ((((((!STREAMING::HAS_MODEL_LOADED(iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED("veh@helicopter@rps@base")) || !STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@")) || !STREAMING::HAS_MODEL_LOADED(iLocal_602)) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_parapack_01"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1366.7184f, -1773.0824f, 0f, -1526.6874f, -3390.18f, 1500f, false, true);
	SYSTEM::SETTIMERA(0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 2, true, true);
		if (__LIB_18__.func_173() == 0)
		{
			func_318(PLAYER::PLAYER_PED_ID(), 12, 19, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 5, 0, 0);
		}
		else if (__LIB_18__.func_173() == 1)
		{
			func_318(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 1, 0, 0);
		}
		else if (__LIB_18__.func_173() == 2)
		{
			func_318(PLAYER::PLAYER_PED_ID(), 12, 16, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 8, 3, 0, 0);
		}
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(PLAYER::PLAYER_PED_ID(), -1090.4011f, -3326.0393f, 700f, false, false, true);
	}
	Local_670.f_6 = PED::CREATE_PED(26, iVar0, -1090.4011f, -3326.0393f, 650f, 0f, true, true);
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_670.f_6, joaat("GADGET_PARACHUTE"), 1, true, true);
		while (!WEAPON::HAS_PED_GOT_WEAPON(Local_670.f_6, joaat("GADGET_PARACHUTE"), false))
		{
			SYSTEM::WAIT(0);
		}
		WEAPON::SET_PED_GADGET(Local_670.f_6, joaat("GADGET_PARACHUTE"), true);
		PED::SET_PED_GRAVITY(Local_670.f_6, true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_670.f_6);
		TASK::TASK_SKY_DIVE(Local_670.f_6, false);
	}
	Local_670.f_7 = PED::CREATE_PED(26, iVar0, -1090.4011f, -3326.0393f, 650f, 0f, true, true);
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_7, false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_670.f_7, joaat("GADGET_PARACHUTE"), 1, true, true);
		while (!WEAPON::HAS_PED_GOT_WEAPON(Local_670.f_7, joaat("GADGET_PARACHUTE"), false))
		{
			SYSTEM::WAIT(0);
		}
		WEAPON::SET_PED_GADGET(Local_670.f_7, joaat("GADGET_PARACHUTE"), true);
		PED::SET_PED_GRAVITY(Local_670.f_7, true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_670.f_7);
		TASK::TASK_SKY_DIVE(Local_670.f_7, false);
		ENTITY::SET_ENTITY_COLLISION(Local_670.f_7, false, false);
		ENTITY::SET_ENTITY_VISIBLE(Local_670.f_7, false, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false))
	{
		while ((!ENTITY::IS_ENTITY_DEAD(Local_670.f_6, false) && PED::GET_PED_PARACHUTE_STATE(Local_670.f_6) != 0) && SYSTEM::TIMERA() < 3000)
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_790()//Position - 0x7522B
{
	func_402();
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	if (iLocal_644 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_644, false);
		iLocal_644 = 0;
	}
	func_369(1);
}

int func_791()//Position - 0x7527C
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		switch (iLocal_82)
		{
			case 0:
				switch (func_546())
				{
					case 0:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false) && !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_670.f_0, -1, false)))
						{
							ENTITY::SET_ENTITY_COORDS(Local_670.f_0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, 1500f, "PilotSchool"), true, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(Local_670.f_0, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, 1500f, "PilotSchool"), 2, true);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_670.f_0, -1, false), Local_670.f_0, func_822(1), 4, 70f, 262144, 0f, 100f, true);
						}
						iLocal_82 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
						iLocal_82 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(2, 1, 0);
						func_820("PS_HSR", "PS_HSR_1", "PS_HSR", "PS_HSR_2", "PS_HSR", "PS_HSR_3", 0);
						func_411(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_803())
						{
							iLocal_82 = 6;
							func_505(0);
						}
						else if (func_802())
						{
							func_545();
						}
						break;
					case 2:
						func_433(1);
						func_502();
						func_801(SYSTEM::FLOOR((Local_708[8 /*38*/].f_32 * 1000f)));
						func_408(1);
						iLocal_82 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_437();
						func_545();
						break;
					case 1:
						if (func_803())
						{
							iLocal_82 = 6;
							func_505(0);
						}
						else if (func_802())
						{
							func_545();
						}
						else
						{
							func_793();
						}
						break;
					case 2:
						func_464(func_709(), 0);
						if (func_792(Local_670.f_52, Local_670.f_42))
						{
							iLocal_82 = 5;
						}
						else
						{
							iLocal_82 = 6;
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(func_709(), 0);
							func_448("PS_HSR", "PS_HSR_8", "PS_HSR_9", "PS_HSR_10", "PS_HSR_11", 0, 0);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(func_709(), 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_HSR", "PS_HSR_8", "PS_HSR_9", "PS_HSR_10", "PS_HSR_11", 0, 0);
								}
								else
								{
									func_448("PS_HSR", "PS_HSR_8", "PS_HSR_9", "PS_HSR_10", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

int func_792(struct<38> Param0, struct<10> Param1)//Position - 0x75688
{
	func_467(Param0, Param1);
	if (iLocal_69 == 0)
	{
		if (func_17(Param0, Param1, 0) >= 70)
		{
			return 1;
		}
	}
	return 0;
}

void func_793()//Position - 0x756BD
{
	if (func_576() && func_800())
	{
		if (!__LIB_0__.func_75())
		{
			switch (func_492())
			{
				case 0:
					break;
				case 1:
					break;
				case 4:
					if (func_799() != 2)
					{
						func_451("PS_HSR", "PS_HSR_5", 0);
					}
					break;
				case 7:
					if (func_799() != 2)
					{
						func_451("PS_HSR", "PS_HSR_6", 0);
					}
					break;
				case 13:
				case 14:
				case 15:
					break;
				case 16:
					func_451("PS_HSR", "PS_HSR_7", 0);
					break;
				default:
					if (__LIB_30__.func_942())
					{
						if (func_799() == 2)
						{
							func_795(func_799());
						}
						else
						{
							func_795(1);
						}
					}
					func_794();
					break;
			}
		}
		else
		{
			func_794();
		}
	}
}

void func_794()//Position - 0x75795
{
	Local_670.f_90.f_4 = 0;
}

void func_795(int iParam0)//Position - 0x757A5
{
	struct<2> Var0;
	char cVar1[16];
	int iVar2;
	bool bVar3;
	if (__LIB_0__.func_75())
	{
		return;
	}
	bVar3 = true;
	while (bVar3)
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
		switch (iParam0)
		{
			case 0:
				StringCopy(&cVar1, "PS_GENI_", 16);
				StringCopy(&Var0, "PS_GENI", 16);
				iVar2 = (iVar2 % 9) + 1;
				StringIntConCat(&cVar1, iVar2, 16);
				break;
			case 1:
				StringCopy(&cVar1, "PS_GENR_", 16);
				StringCopy(&Var0, "PS_GENR", 16);
				iVar2 = (iVar2 % 10) + 1;
				StringIntConCat(&cVar1, iVar2, 16);
				break;
			case 2:
				StringCopy(&cVar1, "PS_GEND_", 16);
				StringCopy(&Var0, "PS_GEND", 16);
				iVar2 = (iVar2 % 11) + 1;
				StringIntConCat(&cVar1, iVar2, 16);
				break;
		}
		if (func_796(iParam0, iVar2))
		{
			bVar3 = true;
		}
		else
		{
			bVar3 = false;
			func_451(&Var0, &cVar1, 0);
			return;
		}
	}
}

int func_796(int iParam0, int iParam1)//Position - 0x75873
{
	switch (iParam0)
	{
		case 0:
			return __LIB_30__.func_941(&iLocal_704, iParam1);
			break;
		case 1:
			return __LIB_30__.func_941(&iLocal_705, iParam1);
			break;
		case 2:
			return __LIB_30__.func_941(&iLocal_706, iParam1);
			break;
	}
	return 0;
}

int func_799()//Position - 0x75944
{
	return Local_670.f_90.f_6;
}

var func_800()//Position - 0x75953
{
	return Local_670.f_90.f_4;
}

void func_801(int iParam0)//Position - 0x75962
{
	Local_2988.f_10 = 1;
	Local_2988.f_12 = SYSTEM::CEIL((__LIB_7__.func_78(&(Local_670.f_14)) * 1000f));
	iLocal_1827 = iParam0;
}

int func_802()//Position - 0x7598D
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_82)
		{
			case 0:
				return 0;
				break;
			case 3:
				return 0;
				break;
			case 4:
				switch (func_546())
				{
					case 1:
						if (func_492() > 1)
						{
							return 1;
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (func_493())
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

int func_803()//Position - 0x75A1D
{
	if (func_546() == 1)
	{
		switch (iLocal_82)
		{
			case 0:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			default:
				if (func_685() <= 0)
				{
					iLocal_69 = 1;
					return 1;
				}
				if (func_492() == func_491())
				{
					if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
					{
						return 1;
					}
				}
				else if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_804(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x75AB4
{
	bool bVar0;
	bVar0 = true;
	if (((ENTITY::IS_ENTITY_DEAD(*iParam0, false) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false)) || VEHICLE::GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(*iParam0) > 0)
	{
		iLocal_69 = 9;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		return 1;
	}
	if (bVar0)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			iLocal_69 = 19;
			return 1;
		}
	}
	if (bParam7)
	{
		if (func_817())
		{
			if (func_816())
			{
				iLocal_69 = 13;
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (func_572() || (!func_814(func_822(1)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_822(1), true) > 5f))
		{
			iLocal_69 = 11;
			return 1;
		}
		if (func_812())
		{
			if (func_811())
			{
				iLocal_69 = 12;
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (func_810())
		{
			if (func_809())
			{
				iLocal_69 = 8;
				return 1;
			}
		}
	}
	if (bParam6)
	{
		if (func_807())
		{
			iLocal_69 = 18;
			return 1;
		}
	}
	if (bParam5)
	{
		if (func_806())
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 6000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 3000))
			{
				iLocal_69 = 14;
				return 1;
			}
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cuban800"))
			{
				if (!VEHICLE::GET_LANDING_GEAR_STATE(*iParam0) == 5)
				{
					if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0))
					{
						if (VEHICLE::GET_LANDING_GEAR_STATE(*iParam0) != 3 && VEHICLE::GET_LANDING_GEAR_STATE(*iParam0) != 0)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2820))
							{
								iLocal_69 = 22;
								return 1;
							}
						}
					}
				}
				else
				{
					iLocal_69 = 9;
					return 1;
				}
			}
		}
	}
	if (bParam4)
	{
		if (func_806())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, true))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(*iParam0)))
				{
					iLocal_69 = 3;
				}
				else
				{
					iLocal_69 = 4;
				}
				return 1;
			}
		}
		else
		{
			iLocal_69 = 9;
			return 1;
		}
	}
	if (bParam3)
	{
		if (func_576() && !func_493())
		{
			if (func_475())
			{
				if (func_474())
				{
					iLocal_69 = 5;
					return 1;
				}
			}
			else
			{
				iLocal_650 = 1;
			}
		}
		else if (func_805())
		{
			if (func_474())
			{
				iLocal_69 = 5;
				return 1;
			}
		}
		else
		{
			iLocal_650 = 1;
		}
	}
	if (bParam8)
	{
		if (!__LIB_0__.func_736(&(iParam0->f_29)))
		{
			__LIB_18__.func_276(&(iParam0->f_29));
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 6000))
		{
			iLocal_69 = 14;
			return 1;
		}
		if (!ENTITY::IS_ENTITY_IN_AIR(*iParam0) && ENTITY::IS_ENTITY_UPSIDEDOWN(*iParam0))
		{
			if (__LIB_7__.func_42(&(iParam0->f_29)) >= 1f)
			{
				iLocal_69 = 14;
				return 1;
			}
		}
		else
		{
			__LIB_6__.func_892(&(iParam0->f_29));
		}
	}
	return 0;
}

int func_805()//Position - 0x75D50
{
	Local_674 = { func_709() };
	fLocal_668 = 6100f;
	if (!__LIB_0__.func_86(Local_674) && fLocal_668 > 0f)
	{
		if (__LIB_10__.func_567(Local_674, 1) > (fLocal_668 + 400f))
		{
			if (!__LIB_0__.func_736(&iLocal_618))
			{
				if (!func_495())
				{
					func_494(9, Local_674);
				}
				func_451("PS_INTER", "PS_INTER_4", 1);
				__LIB_18__.func_276(&iLocal_618);
			}
			return 1;
		}
	}
	if (__LIB_0__.func_736(&iLocal_618))
	{
		func_476();
		__LIB_0__.func_735(&iLocal_618);
	}
	return 0;
}

int func_806()//Position - 0x75DE6
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_807()//Position - 0x75E0A
{
	if (!__LIB_0__.func_736(&iLocal_624))
	{
		if (!__LIB_2__.func_49(Local_670.f_0) && ENTITY::GET_ENTITY_SPEED(Local_670.f_0) == 0f)
		{
			__LIB_6__.func_878(&iLocal_624, 0f);
		}
	}
	else if (__LIB_0__.func_736(&iLocal_624))
	{
		if (__LIB_32__.func_785(&iLocal_624, 120f))
		{
			if (!__LIB_2__.func_49(Local_670.f_0) && ENTITY::GET_ENTITY_SPEED(Local_670.f_0) == 0f)
			{
				return 1;
			}
		}
		else if (!__LIB_2__.func_49(Local_670.f_0) && ENTITY::GET_ENTITY_SPEED(Local_670.f_0) > 0f)
		{
			__LIB_0__.func_735(&iLocal_624);
		}
	}
	return 0;
}

int func_809()//Position - 0x75EB5
{
	if (__LIB_0__.func_736(&iLocal_615))
	{
		if (__LIB_32__.func_785(&iLocal_615, 5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_810()//Position - 0x75EDA
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		if (!(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_670.f_0) - fLocal_667) > 0f)
		{
			if (!__LIB_0__.func_736(&iLocal_615))
			{
				func_451("PS_INTER", "PS_INTER_2", 1);
				__LIB_18__.func_276(&iLocal_615);
				return 1;
			}
			return 1;
		}
	}
	if (__LIB_0__.func_736(&iLocal_615))
	{
		__LIB_0__.func_735(&iLocal_615);
	}
	return 0;
}

int func_811()//Position - 0x75F3B
{
	if (__LIB_0__.func_736(&iLocal_612))
	{
		if (__LIB_32__.func_785(&iLocal_612, 5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_812()//Position - 0x75F60
{
	if ((ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_670.f_0) - fLocal_667) > 0f)
	{
		if (__LIB_0__.func_736(&iLocal_612))
		{
			__LIB_0__.func_735(&iLocal_612);
			return 0;
		}
		return 0;
	}
	else if (!__LIB_35__.func_70())
	{
		if (!__LIB_0__.func_736(&iLocal_612))
		{
			func_451("PS_INTER", "PS_INTER_1", 1);
			__LIB_26__.func_455(&iLocal_612);
		}
		return 1;
	}
	else if (__LIB_0__.func_736(&iLocal_612))
	{
		__LIB_0__.func_735(&iLocal_612);
	}
	return 0;
}

int func_814(struct<3> Param0)//Position - 0x7607D
{
	struct<3> Var0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (func_815())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
		{
			ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &Var3, &uVar1, &uVar1, &Var0);
		}
		Var2 = { Param0 - Var0 };
		Var2.f_2 = 0f;
		Var3.f_2 = 0f;
		fVar4 = __LIB_0__.func_156(Var2, Var3);
		if (fVar4 <= 0f)
		{
			return 0;
		}
	}
	return 1;
}

bool func_815()//Position - 0x760D7
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &uVar0, &uVar1, &Var2, &uVar3);
	return Var2.f_2 >= 0.966f;
}

int func_816()//Position - 0x76107
{
	if (__LIB_0__.func_736(&iLocal_621))
	{
		if (__LIB_32__.func_785(&iLocal_621, 3f))
		{
			return 1;
		}
	}
	return 0;
}

int func_817()//Position - 0x7612C
{
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || (((ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false)) && ENTITY::IS_ENTITY_IN_WATER(Local_670.f_0)))
	{
		if (!__LIB_0__.func_736(&iLocal_621))
		{
			__LIB_18__.func_276(&iLocal_621);
			return 1;
		}
		return 1;
	}
	if (__LIB_0__.func_736(&iLocal_621))
	{
		__LIB_0__.func_735(&iLocal_621);
	}
	return 0;
}

void func_818(struct<3> Param0)//Position - 0x761A3
{
	struct<3> Var0;
	if (__LIB_0__.func_86(Param0))
	{
		Param0 = { func_501() };
	}
	Var0 = { func_561() };
	if (__LIB_35__.func_71(Param0))
	{
		Local_3168.f_3 = { Var0 };
	}
	else
	{
		Local_3168.f_3 = { Param0 };
	}
}

void func_819(bool bParam0, int iParam1)//Position - 0x761EA
{
	bParam0 = bParam0;
	Local_3168.f_6 = iParam1;
	if (!bParam0)
	{
		Local_3168.f_3 = { Local_601 };
	}
}

int func_820(char* sParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x7620F
{
	if (__LIB_0__.func_75())
	{
		__LIB_6__.func_833();
		while (__LIB_0__.func_75())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (bParam6)
	{
		return __LIB_39__.func_512(&uLocal_2989, "MGPSAUD", sParam0, sParam1, sParam2, sParam3, iParam4, iParam5, 9, 0, 0);
	}
	return __LIB_39__.func_512(&uLocal_2989, "MGPSAUD", sParam0, sParam1, sParam2, sParam3, iParam4, iParam5, 5, 0, 0);
}

Vector3 func_822(int iParam0)//Position - 0x762CE
{
	if (func_490(iParam0))
	{
		return Local_670.f_181[iParam0 /*6*/].f_2;
	}
	return Local_601;
}

void func_823()//Position - 0x762F4
{
	func_824();
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		ENTITY::SET_ENTITY_COORDS(Local_670.f_0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, 1500f, "PilotSchool"), true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_670.f_0, VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, 1500f, "PilotSchool"), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, true);
	}
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(2538.59f, 889.7548f, 262.7056f, __LIB_0__.func_79(Vector(254.392f, 882.0132f, 2544.7478f) - Vector(262.7056f, 889.7548f, 2538.59f)), 5000f, 0);
}

void func_824()//Position - 0x7638B
{
	func_369(1);
	func_494(1, 2587.401f, 574.9205f, 220f);
	func_494(1, 2575.466f, 184.5f, 180f);
	func_494(1, 2373.067f, -286.2998f, 140f);
	func_494(1, 2004.5393f, -676.9011f, 140f);
	func_494(1, 1389.7465f, -1088.1499f, 120f);
	func_494(1, 1060.711f, -1434.218f, 120f);
	func_494(1, 1201.078f, -1944.7361f, 120f);
	func_494(1, 1319.481f, -2430.741f, 120f);
	func_494(1, 800.9724f, -2624.508f, 100f);
	func_494(1, 361.7378f, -2668.927f, 80f);
	func_494(1, -85.8033f, -2554.787f, 80f);
	func_494(1, -267.8112f, -2428.595f, 97f);
	func_494(1, -547.2916f, -2230.844f, 97f);
	func_494(1, -794.8572f, -2211.246f, 75f);
	func_494(1, -1061.4908f, -2581.505f, 75f);
	func_494(8, -1145.2367f, -2864.861f, 15.0426f);
}

int func_825()//Position - 0x764D9
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(2, iLocal_702 + 1, 1);
				func_721("PS_PREV8", "PS_PREV8_1", "PS_PREV8_2", "PS_PREV8_3", 0, 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

int func_826(int iParam0, var uParam1, float fParam2)//Position - 0x76575
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	iVar4 = 0;
	Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam0, fParam2, sLocal_695) };
	Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iParam0, (fParam2 + 500f), sLocal_695) };
	fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam1[iVar4 /*6*/])->f_2, Var0, true);
	iVar2 = iVar4;
	iVar3 = iVar4;
	fVar6 = fVar5;
	iVar4 = 0;
	while (iVar4 < *uParam1)
	{
		fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS((uParam1[iVar4 /*6*/])->f_2, Var0, true);
		if (fVar5 < fVar6)
		{
			iVar3 = iVar2;
			iVar2 = iVar4;
			fVar6 = fVar5;
		}
		iVar4++;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS((uParam1[iVar2 /*6*/])->f_2, Var1, true) < MISC::GET_DISTANCE_BETWEEN_COORDS((uParam1[iVar2 /*6*/])->f_2, Var0, true))
	{
		return iVar2;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS((uParam1[iVar3 /*6*/])->f_2, Var1, true) < MISC::GET_DISTANCE_BETWEEN_COORDS((uParam1[iVar3 /*6*/])->f_2, Var0, true))
	{
		return iVar3;
	}
	if (iVar2 > iVar3)
	{
		if (iVar2 + 1 < *uParam1)
		{
			return iVar2 + 1;
		}
		else
		{
			return -1;
		}
	}
	if (iVar2 < iVar3)
	{
		if (iVar3 + 1 < *uParam1)
		{
			return iVar3 + 1;
		}
		else
		{
			return -1;
		}
	}
	return iVar2;
}

void func_827()//Position - 0x766AC
{
	Local_628 = { 2544.724f, 884.7112f, 230f };
	Local_629 = { 0f, 0f, 180f };
	fLocal_630 = 220f;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_3177 = 1;
	iLocal_662 = 0;
	iLocal_606 = joaat("frogger");
	func_824();
	func_740();
	__LIB_0__.func_371();
	iLocal_703 = 110;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 76000f;
	fLocal_688 = 17f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	iLocal_644 = PED::ADD_SCENARIO_BLOCKING_AREA(-1177.866f, -2802.9944f, 11.3277f, -1066.8466f, -2953.8477f, 16.1229f, false, true, true, true);
	MISC::CLEAR_AREA(-1143.9893f, -2865.044f, 12.9484f, 25f, true, true, false, false);
	func_778(1f);
	func_828();
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_670.f_0, false);
}

void func_828()//Position - 0x767D5
{
	Local_670.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_606, Local_628, fLocal_630, true, true, false);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iLocal_606))
	{
		VEHICLE::SET_VEHICLE_EXTRA(Local_670.f_0, 1, false);
		VEHICLE::SET_VEHICLE_EXTRA(Local_670.f_0, 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(Local_670.f_0, 5, false);
		VEHICLE::SET_VEHICLE_EXTRA(Local_670.f_0, 8, false);
		VEHICLE::SET_VEHICLE_EXTRA(Local_670.f_0, 9, false);
	}
	if (!__LIB_2__.func_49(Local_670.f_0))
	{
		VEHICLE::SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Local_670.f_0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_670.f_0, true);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_670.f_0, true, false);
		VEHICLE::SET_VEHICLE_NAME_DEBUG(Local_670.f_0, "PS_Main.myVehicle");
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(Local_670.f_0)))
		{
			AUDIO::ENABLE_STALL_WARNING_SOUNDS(Local_670.f_0, false);
		}
		if (bLocal_657)
		{
			__LIB_24__.func_999(Local_670.f_0, &(Local_670.f_103), 0, 1);
		}
		else
		{
			__LIB_6__.func_760(Local_670.f_0, &(Local_670.f_103));
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_670.f_0, -1);
		}
	}
}

void func_859()//Position - 0x78181
{
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_402();
	func_369(1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
	if (iLocal_644 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_644, false);
		iLocal_644 = 0;
	}
}

int func_860()//Position - 0x781D2
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		switch (iLocal_83)
		{
			case 0:
				switch (func_546())
				{
					case 0:
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_83 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_83 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						func_433(1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(2, 1, 0);
						func_509("PS_HOC", "PS_HOC_1", "PS_HOC", "PS_HOC_2", 0);
						func_502();
						func_411(1);
						func_408(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_866())
						{
							iLocal_83 = 6;
							func_505(0);
						}
						else if (func_865())
						{
							func_545();
						}
						else if (bLocal_3372)
						{
							func_862();
						}
						break;
					case 2:
						iLocal_83 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_437();
						func_545();
						break;
					case 1:
						if (func_866())
						{
							iLocal_83 = 6;
							func_505(0);
						}
						else if (func_865())
						{
							func_545();
						}
						else if (bLocal_3372)
						{
							func_862();
						}
						else
						{
							func_861();
						}
						break;
					case 2:
						func_464(func_501(), 0);
						if (func_792(Local_670.f_52, Local_670.f_42))
						{
							iLocal_83 = 5;
						}
						else
						{
							iLocal_83 = 6;
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(func_709(), 0);
							func_448("PS_HOC", "PS_HOC_6", "PS_HOC_7", "PS_HOC_8", "PS_HOC_9", 0, 0);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(func_709(), 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_HOC", "PS_HOC_6", "PS_HOC_7", "PS_HOC_8", "PS_HOC_9", 0, 0);
								}
								else
								{
									func_448("PS_HOC", "PS_HOC_6", "PS_HOC_7", "PS_HOC_8", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_861()//Position - 0x7854C
{
	if (func_576() && func_800())
	{
		if (!__LIB_0__.func_75())
		{
			switch (func_492())
			{
				case 0:
					break;
				case 1:
					break;
				case 5:
					if (func_799() != 2)
					{
						func_451("PS_HOC", "PS_HOC_3", 0);
					}
					break;
				case 11:
					func_451("PS_HOC", "PS_HOC_4", 0);
					break;
				case 17:
				case 18:
				case 19:
					break;
				case 20:
					func_451("PS_HOC", "PS_HOC_5", 0);
					break;
				default:
					if (__LIB_30__.func_942())
					{
						if (func_799() == 2)
						{
							func_795(func_799());
						}
						else
						{
							func_795(1);
						}
					}
					func_794();
					break;
			}
		}
		else
		{
			func_794();
		}
	}
}

void func_862()//Position - 0x7861C
{
	switch (iLocal_3376)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			func_864("PSHELITUT_A", -1f, 1.5f);
			func_863();
			__LIB_0__.func_735(&iLocal_3373);
			__LIB_26__.func_455(&iLocal_3373);
			iLocal_3376 = 1;
			break;
		case 1:
			if (func_492() == 2 || __LIB_32__.func_785(&iLocal_3373, 7.5f))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__.func_151("PSHELITUT_B", -1);
				__LIB_6__.func_892(&iLocal_3373);
				iLocal_3376 = 2;
			}
			break;
		case 2:
			if (func_492() >= 2 && __LIB_26__.func_294(&iLocal_3373, 5f))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__.func_151("PSHELITUT_C", -1);
				__LIB_6__.func_892(&iLocal_3373);
				iLocal_3376 = 3;
			}
			break;
		case 3:
			if (__LIB_32__.func_785(&iLocal_3373, 5f))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__.func_735(&iLocal_3373);
				bLocal_3372 = false;
			}
			break;
	}
}

void func_863()//Position - 0x786FA
{
	Local_109.f_1 = 1;
}

void func_864(char* sParam0, float fParam1, float fParam2)//Position - 0x78707
{
	struct<5> Var0;
	Var0.f_0 = 1;
	Var0.f_1 = sParam0;
	Var0.f_3 = fParam1;
	Var0.f_4 = fParam2;
	Local_109.f_2[Local_109.f_0 /*5*/] = { Var0 };
	Local_109.f_0++;
}

int func_865()//Position - 0x78738
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_83)
		{
			case 0:
				return 0;
				break;
			case 3:
				return 0;
				break;
			case 4:
				switch (func_546())
				{
					case 1:
						if (func_492() > 1)
						{
							return 1;
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (func_493())
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

int func_866()//Position - 0x787C8
{
	if (func_546() == 1)
	{
		switch (iLocal_83)
		{
			case 0:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			default:
				if (func_492() == func_491())
				{
					if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
					{
						return 1;
					}
				}
				else if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_867()//Position - 0x78850
{
	func_868();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(-1154.268f, -2879.1084f, 17.71f, __LIB_0__.func_79(Vector(17.1644f, -2875.7458f, -1152.327f) - Vector(17.71f, -2879.1084f, -1154.268f)), 5000f, 0);
}

void func_868()//Position - 0x788A1
{
	func_369(1);
	func_494(1, -1066.622f, -2785.158f, 80f);
	func_494(1, -712.5f, -2568f, 65f);
	func_494(1, -349.43f, -2355.211f, 30f);
	func_494(1, -75.4834f, -2323.608f, 26.5f);
	func_494(1, 202.0167f, -2323.5723f, 46.4372f);
	func_494(1, 352.7669f, -2319.3196f, 46.5509f);
	func_494(1, 619.9371f, -2232.867f, 38.5773f);
	func_494(1, 672.0545f, -1889.356f, 30f);
	func_494(1, 678.6499f, -1584.523f, 30f);
	func_494(1, 541.267f, -1260.121f, 52.507f);
	func_494(1, 340.0385f, -1049.919f, 70.4692f);
	func_494(1, 30.0475f, -970.975f, 95f);
	func_494(1, -175.3369f, -898.9467f, 125f);
	func_494(1, -271.193f, -951.4211f, 150.9396f);
	func_494(1, -564.673f, -1676.8342f, 55.2971f);
	func_494(1, -981.2974f, -2634.3062f, 105.1028f);
	func_494(1, -1114.823f, -2631.1f, 80f);
	func_494(1, -1226.4f, -2679.5f, 75.1f);
	func_494(1, -1266.9f, -2799f, 60f);
	func_494(1, -1165.123f, -2860.793f, 40.7f);
	func_494(8, -1146.4918f, -2864.2168f, 13f);
}

int func_869()//Position - 0x78A53
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(2, iLocal_702 + 1, 1);
				func_721("PS_PREV7", "PS_PREV7_1", "PS_PREV7_2", "PS_PREV7_3", 0, 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_870()//Position - 0x78AEF
{
	Local_628 = { -1145.8069f, -2864.45f, 13.6562f };
	Local_629 = { 0f, 0f, 330f };
	fLocal_630 = 330f;
	iLocal_3177 = 1;
	iLocal_662 = 0;
	iLocal_606 = joaat("frogger");
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	func_868();
	iLocal_3376 = 0;
	func_740();
	__LIB_0__.func_371();
	iLocal_703 = 109;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 30000f;
	fLocal_688 = 18f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	iLocal_644 = PED::ADD_SCENARIO_BLOCKING_AREA(-1177.866f, -2802.9944f, 11.3277f, -1066.8466f, -2953.8477f, 16.1229f, false, true, true, true);
	MISC::CLEAR_AREA(-1143.9893f, -2865.044f, 12.9484f, 25f, true, true, false, false);
	func_778(1f);
	func_828();
	AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_670.f_0, false);
}

void func_871()//Position - 0x78C1C
{
	struct<3> Var0;
	struct<3> Var1;
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_402();
	func_369(1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
	Var0 = { Vector(26.694818f, -3203.5464f, -1514.9275f) - Vector(20f, 200f, 200f) };
	Var1 = { Vector(26.694818f, -3203.5464f, -1514.9275f) + Vector(20f, 200f, 200f) };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, true, true);
}

int func_872()//Position - 0x78CAE
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		func_877();
		switch (iLocal_81)
		{
			case 0:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_81 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_81 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						func_433(1);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(3, 1, 0);
						func_509("PS_POC", "PS_POC_1", "PS_POC", "PS_POC_2", 0);
						func_502();
						func_411(1);
						func_408(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_876())
						{
							iLocal_81 = 6;
							func_505(0);
						}
						else if (func_875())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_81 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_437();
						__LIB_0__.func_151("PS_HELP_GATE", -1);
						func_545();
						break;
					case 1:
						if (func_876())
						{
							iLocal_81 = 6;
							func_505(0);
						}
						else if (func_875())
						{
							func_545();
						}
						else
						{
							func_873();
						}
						break;
					case 2:
						func_464(Local_601, 0);
						if (func_792(Local_670.f_52, Local_670.f_42))
						{
							iLocal_81 = 5;
						}
						else
						{
							iLocal_81 = 6;
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 0);
							func_448("PS_POC", "PS_POC_5", "PS_POC_6", "PS_POC_7", "PS_POC_8", 0, 0);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_POC", "PS_POC_5", "PS_POC_6", "PS_POC_7", "PS_POC_8", 0, 0);
								}
								else
								{
									func_448("PS_POC", "PS_POC_5", "PS_POC_6", "PS_POC_7", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_873()//Position - 0x7901A
{
	if ((func_576() && func_800()) && !__LIB_0__.func_75())
	{
		switch (func_492())
		{
			case 0:
				break;
			case 1:
				break;
			case 3:
				func_451("PS_POC", "PS_POC_3", 0);
				func_794();
				break;
			case 5:
				func_451("PS_POC", "PS_POC_4", 0);
				func_794();
				break;
			default:
				if (func_874() != 2 && func_874() != 8)
				{
					func_795(func_799());
					func_794();
				}
				break;
			}
	}
}

int func_874()//Position - 0x790B5
{
	if (func_490((Local_670.f_90.f_7 - 1)))
	{
		return Local_670.f_181[(Local_670.f_90.f_7 - 1) /*6*/].f_5;
	}
	return Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_5;
}

int func_875()//Position - 0x790F2
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_81)
		{
			case 0:
				return 0;
				break;
			case 3:
				return 0;
				break;
			case 4:
				switch (func_546())
				{
					case 1:
						if (func_492() > 1)
						{
							return 1;
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (func_493())
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

int func_876()//Position - 0x79182
{
	if (func_546() == 1)
	{
		switch (iLocal_81)
		{
			case 0:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 1, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			default:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_877()//Position - 0x791E6
{
	if (!BitTest(iLocal_608, 1))
	{
		if (iLocal_81 < 3)
		{
			if (__LIB_30__.func_619("FS_OBSTACLE_START", &iLocal_608, 0))
			{
				__LIB_30__.func_618("FS_OBSTACLE_START", &iLocal_608, 1);
			}
		}
	}
	else if (!BitTest(iLocal_608, 3) && !BitTest(iLocal_608, 5))
	{
		if (iLocal_81 == 5)
		{
			if (__LIB_30__.func_619("FS_OBSTACLE_STOP", &iLocal_608, 2))
			{
				__LIB_30__.func_618("FS_OBSTACLE_STOP", &iLocal_608, 3);
			}
		}
		else if (iLocal_81 == 6)
		{
			if (__LIB_30__.func_619("FS_OBSTACLE_FAIL", &iLocal_608, 4))
			{
				__LIB_30__.func_618("FS_OBSTACLE_FAIL", &iLocal_608, 5);
			}
		}
	}
}

void func_878()//Position - 0x7927D
{
	struct<3> Var0;
	struct<3> Var1;
	func_879();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	Var0 = { Vector(26.694818f, -3203.5464f, -1514.9275f) - Vector(20f, 200f, 200f) };
	Var1 = { Vector(26.694818f, -3203.5464f, -1514.9275f) + Vector(20f, 200f, 200f) };
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Var0, Var1, false, true);
	STREAMING::NEW_LOAD_SCENE_START(-1618.1404f, -2980.8284f, 17.4172f, __LIB_0__.func_79(Vector(17.0217f, -2983.094f, -1614.2157f) - Vector(17.4172f, -2980.8284f, -1618.1404f)), 5000f, 0);
}

void func_879()//Position - 0x79322
{
	func_369(1);
	func_494(2, -948.3597f, -3367.634f, 69.518f);
	func_494(2, -240.2299f, -3641.9639f, 52.849f);
	func_494(4, 504.4131f, -3523.5945f, 48.6284f);
	func_494(2, 766.7775f, -2990.6262f, 68.1908f);
	func_494(3, 794.2898f, -2620.9307f, 104.213f);
	func_494(2, 834.3015f, -2324.581f, 88.713f);
	func_494(5, 940.7796f, -1969.1132f, 80.292f);
	func_494(2, 982.0824f, -1673.1564f, 90.792f);
	func_494(2, 980.3978f, -1393.132f, 105f);
	func_494(4, 912.2797f, -1168.751f, 105f);
	func_494(2, 650.5259f, -1018.4594f, 70.244f);
	func_494(2, 339.9143f, -1047.7452f, 67.003f);
	func_494(2, 34f, -971f, 64.7536f);
	func_494(4, -309f, -865f, 70.334f);
	func_494(2, -530.2971f, -964.972f, 74.747f);
	func_494(5, -829.11f, -1306.81f, 68.4979f);
	func_494(3, -1339.7749f, -1638.012f, 40.054f);
	func_494(4, -1743.356f, -2152.134f, 64.206f);
	func_494(8, -1698.677f, -2939.1848f, 44.7581f);
}

int func_880()//Position - 0x794AC
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(3, iLocal_702 + 1, 1);
				func_721("PS_PREV6", "PS_PREV6_1", "PS_PREV6_2", "PS_PREV6_3", "PS_PREV6_4", 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_881()//Position - 0x7954C
{
	Local_628 = { -1601.2122f, -2990.6f, 12.9693f };
	Local_629 = { 0f, 0f, 240f };
	fLocal_630 = 240f;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_662 = 0;
	iLocal_606 = joaat("stunt");
	func_879();
	func_740();
	__LIB_0__.func_371();
	iLocal_703 = 108;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, "PilotSchool") || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 45000f;
	fLocal_688 = 16f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	func_778(1.5f);
	func_828();
}

void func_882()//Position - 0x79628
{
	sLocal_2820 = "";
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_369(1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-1506.49f, 5000f, 62.0109f, -2177.8604f, 4408.885f, 59.1266f, 1);
	func_402();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
}

int func_883()//Position - 0x7968F
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		if (iLocal_80 == 0 || iLocal_80 == 3)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 108 /*INPUT_VEH_FLY_ROLL_LEFT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 109 /*INPUT_VEH_FLY_ROLL_RIGHT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 111 /*INPUT_VEH_FLY_PITCH_UP_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 112 /*INPUT_VEH_FLY_PITCH_DOWN_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
		}
		switch (iLocal_80)
		{
			case 0:
				func_889(&Local_670, 70f, 0, Local_629.f_0, Local_629.f_1);
				switch (func_546())
				{
					case 0:
						ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_0, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_80 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				func_889(&Local_670, 70f, 0, Local_629.f_0, Local_629.f_1);
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_80 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(4, 1, 0);
						func_509("PS_LAND", "PS_LAND_1", "PS_LAND", "PS_LAND_2", 0);
						func_411(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_888())
						{
							iLocal_80 = 6;
							func_505(0);
						}
						else if (func_887())
						{
							func_545();
						}
						else if (!__LIB_0__.func_75() && iLocal_3177 == 1)
						{
							__LIB_0__.func_325("PLANDING_A", 7500, 1);
							iLocal_3177++;
						}
						break;
					case 2:
						iLocal_3177 = 1;
						func_818(func_501());
						iLocal_80 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						iLocal_3202 = 0;
						func_864("PLANDING_B", 7500f, 1f);
						func_863();
						func_509("PS_LAND", "PS_LAND_3", "PS_LAND", "PS_LAND_4", 0);
						func_435(1);
						func_545();
						break;
					case 1:
						if (func_888())
						{
							iLocal_80 = 6;
							func_505(0);
						}
						else if (func_887())
						{
							func_545();
						}
						else if ((!func_886() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && iLocal_3177 == 1)
						{
							func_451("PS_LANDOBJ", "PS_LANDOBJ_1", 0);
							func_863();
							iLocal_3177++;
						}
						if (iLocal_3202)
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
						}
						else if (func_885())
						{
							iLocal_3202 = 1;
						}
						break;
					case 2:
						if (__LIB_2__.func_49(Local_670.f_0))
						{
							iLocal_69 = 9;
						}
						func_884();
						func_464(func_501(), 0);
						func_435(0);
						if (!__LIB_2__.func_49(Local_670.f_0) && func_792(Local_670.f_52, Local_670.f_42))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_670.f_0, true);
							VEHICLE::BRING_VEHICLE_TO_HALT(Local_670.f_0, 3f, 1, false);
							iLocal_80 = 5;
						}
						else
						{
							iLocal_69 = 9;
							iLocal_80 = 6;
						}
						if (iLocal_69 == 2 || iLocal_69 == 8)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_670.f_0, -1777.3949f, 4741.145f, 55.20026f, -2029.5542f, 4489.505f, 58.19543f, 20f, false, true, 0))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(Local_670.f_0, 3f, 1, false);
								Local_670.f_52.f_7 = 1;
								iLocal_69 = 0;
								iLocal_80 = 5;
							}
						}
						ENTITY::SET_ENTITY_INVINCIBLE(Local_670.f_0, true);
						if (iLocal_80 == 5)
						{
							func_566();
						}
						else
						{
							func_574(func_491());
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(func_709(), 0);
							if (!__LIB_2__.func_49(Local_670.f_0) && ENTITY::GET_ENTITY_SPEED(Local_670.f_0) < 5f)
							{
								VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_670.f_0, true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_670.f_0, false, true, false);
							}
							if (func_814(func_709()))
							{
								func_448("PS_LAND", "PS_LAND_5", "PS_LAND_6", "PS_LAND_7", "PS_LAND_8", 0, 0);
							}
							else
							{
								func_448("PS_LAND", "PS_LAND_5", "PS_LAND_6", "PS_LAND_7", "PS_LAND_9", 0, 0);
							}
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447() && !__LIB_2__.func_49(Local_670.f_0))
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							if (__LIB_2__.func_49(Local_670.f_0))
							{
							}
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								if (__LIB_2__.func_49(Local_670.f_0))
								{
									iLocal_69 = 9;
								}
								func_464(func_709(), 0);
								if (!__LIB_2__.func_49(Local_670.f_0) && ENTITY::GET_ENTITY_SPEED(Local_670.f_0) < 5f)
								{
									VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_670.f_0, true);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_670.f_0, false, true, false);
								}
								if (iLocal_654 == 1)
								{
									if (func_814(func_709()))
									{
										func_448("PS_LAND", "PS_LAND_5", "PS_LAND_6", "PS_LAND_7", "PS_LAND_8", 0, 0);
									}
									else
									{
										func_448("PS_LAND", "PS_LAND_5", "PS_LAND_6", "PS_LAND_7", "PS_LAND_9", 0, 0);
									}
								}
								else
								{
									func_448("PS_LAND", "PS_LAND_5", "PS_LAND_6", "PS_LAND_7", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_884()//Position - 0x79CCF
{
	struct<3> Var0;
	struct<3> Var1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		Var0 = { func_501() };
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true) };
		if (Var1.f_2 < (Var0.f_2 - 5f))
		{
			iLocal_69 = 22;
		}
	}
}

int func_885()//Position - 0x79D16
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_SPEED(Local_670.f_0);
	if (fVar0 < 30f)
	{
		if (fLocal_3201 == -1f)
		{
			fLocal_3201 = fVar0;
		}
		else if (fLocal_3201 < (fVar0 + 1f))
		{
			fLocal_3201 = -1f;
			return 1;
		}
	}
	else
	{
		fLocal_3201 = -1f;
	}
	return 0;
}

bool func_886()//Position - 0x79D5D
{
	return Local_109.f_1;
}

int func_887()//Position - 0x79D69
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_80)
		{
			case 0:
				return 0;
				break;
			case 3:
				return 0;
				break;
			case 4:
				switch (func_546())
				{
					case 1:
						if (func_492() > 1 || func_493())
						{
							return 1;
						}
						break;
				}
				break;
			case 7:
				if (ENTITY::GET_ENTITY_SPEED(Local_670.f_0) < 5f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_670.f_0, -1777.3949f, 4741.145f, 55.20026f, -2029.5542f, 4489.505f, 58.19543f, 20f, false, true, 0))
					{
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_888()//Position - 0x79E27
{
	if (func_546() == 1)
	{
		switch (iLocal_80)
		{
			case 0:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			case 7:
				if (func_804(&Local_670, 0, 0, 1, 1, 0, 1, 1, 1))
				{
					return 1;
				}
				if (ENTITY::GET_ENTITY_SPEED(Local_670.f_0) < 5f)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_670.f_0, -1777.3949f, 4741.145f, 55.20026f, -2029.5542f, 4489.505f, 58.19543f, 20f, false, true, 0))
					{
						iLocal_69 = 2;
						return 1;
					}
				}
				break;
			default:
				if (func_804(&Local_670, 0, 1, 1, 1, 0, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_889(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4)//Position - 0x79EEE
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 90 /*INPUT_VEH_FLY_YAW_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
	{
		iParam2 = iParam2;
		__LIB_30__.func_652(*iParam0, fParam1, 0, fParam3, fParam4);
	}
}

void func_891()//Position - 0x7A0B4
{
	func_892();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	if (!__LIB_2__.func_49(Local_670.f_0))
	{
		ENTITY::SET_ENTITY_ROTATION(Local_670.f_0, Local_629, 2, true);
		func_889(&Local_670, 70f, 0, Local_629.f_0, Local_629.f_1);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	STREAMING::NEW_LOAD_SCENE_START(-828.8492f, 5675.985f, 395.345f, __LIB_0__.func_79(Vector(384.8416f, 5652.1562f, -855.9717f) - Vector(395.345f, 5675.985f, -828.8492f)), 5000f, 0);
}

void func_892()//Position - 0x7A13E
{
	func_369(1);
	func_494(2, -1546.1194f, 4970.3354f, 115.6974f);
	func_494(10, -1980.931f, 4538.223f, 59.1218f);
}

int func_893()//Position - 0x7A174
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(3, iLocal_702, 1);
				func_721("PS_PREV5", "PS_PREV5_1", "PS_PREV5_2", "PS_PREV5_3", 0, 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_894()//Position - 0x7A213
{
	func_892();
	Local_628 = { -824.4f, 5680.4f, 395.1864f };
	fLocal_630 = 134.5f;
	Local_629 = { -16f, 0f, fLocal_630 };
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_662 = 0;
	iLocal_3177 = 1;
	sLocal_2820 = "PS_FAIL_3A";
	iLocal_606 = joaat("stunt");
	func_740();
	__LIB_0__.func_371();
	PATHFIND::SET_ROADS_IN_AREA(-1506.49f, 5000f, 62.0109f, -2177.8604f, 4408.885f, 59.1266f, false, true);
	MISC::CLEAR_AREA(Vector(62.0109f, 5000f, -1506.49f) + Vector(59.1266f, 4408.885f, -2177.8604f) - Vector(62.0109f, 5000f, -1506.49f), 500f, true, false, false, false);
	func_778(1.5f);
	iLocal_703 = 107;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_670.f_0, true);
	}
	fLocal_3201 = -1f;
	fLocal_687 = 17000f;
	fLocal_688 = 15f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	func_828();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	ENTITY::SET_ENTITY_MAX_SPEED(Local_670.f_0, 70.001f);
}

void func_895()//Position - 0x7A38B
{
	HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(0f, false, 21);
	func_896();
	func_411(0);
	func_418(0);
	func_410(0);
	func_433(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_369(1);
	func_402();
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
}

void func_896()//Position - 0x7A3DF
{
	__LIB_2__.func_29(&iLocal_3175);
}

int func_897()//Position - 0x7A3EE
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		switch (iLocal_79)
		{
			case 0:
				switch (func_546())
				{
					case 0:
						HUD::SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(50f, false, 21);
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_79 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_79 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(3, 1, 0);
						func_509("PS_FLYLOW", "PS_FLYLOW_1", "PS_FLYLOW", "PS_FLYLOW_2", 0);
						func_502();
						Local_3368 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						func_704((Local_3368.f_2 - fLocal_667));
						func_433(1);
						func_418(1);
						func_411(1);
						func_408(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_901())
						{
							iLocal_79 = 6;
							func_505(0);
						}
						else if (func_900())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_79 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_545();
						iLocal_3179 = 1;
						SYSTEM::SETTIMERA(0);
						break;
					case 1:
						if (func_901())
						{
							iLocal_79 = 6;
							func_505(0);
						}
						else if (func_900())
						{
							func_545();
						}
						else if (SYSTEM::TIMERA() > 0)
						{
							func_898();
						}
						break;
					case 2:
						func_464(Local_601, 0);
						if (func_792(Local_670.f_52, Local_670.f_42))
						{
							iLocal_79 = 5;
						}
						else
						{
							iLocal_79 = 6;
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 0);
							iLocal_652 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
							func_448("PS_FLYLOW", "PS_FLYLOW_4", "PS_FLYLOW_5", "PS_FLYLOW_6", "PS_FLYLOW_7", "PS_FLYLOW_8", 0);
							func_418(0);
							func_896();
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_FLYLOW", "PS_FLYLOW_4", "PS_FLYLOW_5", "PS_FLYLOW_6", "PS_FLYLOW_7", "PS_FLYLOW_8", 0);
								}
								else
								{
									func_448("PS_FLYLOW", "PS_FLYLOW_4", "PS_FLYLOW_5", "PS_FLYLOW_6", "", 0, 0);
								}
								func_418(0);
								func_896();
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_898()//Position - 0x7A7A8
{
	if (iLocal_3179 == 1 && SYSTEM::TIMERA() > 1000)
	{
		if (Local_709[Global_112413 /*10*/].f_8 != 0)
		{
			iLocal_3179 = 7;
		}
		else
		{
			iLocal_3179++;
		}
	}
	else if (iLocal_3179 == 2 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		__LIB_0__.func_151("PFLYLOW_F", -1);
		iLocal_3179++;
	}
	else if (iLocal_3179 == 3 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		__LIB_0__.func_151("PFLYLOW_B", -1);
		iLocal_3179++;
	}
	else if (iLocal_3179 == 4 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		__LIB_0__.func_151("PFLYLOW_B1", -1);
		iLocal_3179++;
	}
	else if (iLocal_3179 == 5 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		__LIB_0__.func_151("PFLYLOW_D", -1);
		iLocal_3179++;
	}
	else if (iLocal_3179 == 6 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		iLocal_3179++;
	}
	else if (iLocal_3179 == 7 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_899();
	}
}

void func_899()//Position - 0x7A8B5
{
	if ((func_576() && func_800()) && !__LIB_0__.func_75())
	{
		switch (func_492())
		{
			case 0:
				break;
			case 1:
				break;
			default:
				if (__LIB_30__.func_942())
				{
					if (func_799() == 2)
					{
						func_795(func_799());
					}
					else
					{
						func_795(1);
					}
				}
				func_794();
				break;
			}
	}
}

int func_900()//Position - 0x7A918
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_79)
		{
			case 0:
				return 0;
				break;
			case 3:
				return 0;
				break;
			case 4:
				switch (func_546())
				{
					case 1:
						if (func_492() > 1)
						{
							return 1;
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (func_493())
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

int func_901()//Position - 0x7A9A8
{
	if (func_546() == 1)
	{
		switch (iLocal_79)
		{
			case 0:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 1, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			case 7:
				if (func_903())
				{
					if (func_902())
					{
						iLocal_69 = 15;
						return 1;
					}
				}
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			default:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_902()//Position - 0x7AA41
{
	if (__LIB_0__.func_736(&iLocal_3369))
	{
		if (__LIB_32__.func_785(&iLocal_3369, 5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_903()//Position - 0x7AA66
{
	if (func_904() > 50f)
	{
		if (!__LIB_0__.func_736(&iLocal_3369))
		{
			func_451("PS_INTER", "PS_INTER_5", 1);
			__LIB_18__.func_276(&iLocal_3369);
			return 1;
		}
		return 1;
	}
	if (__LIB_0__.func_736(&iLocal_3369))
	{
		__LIB_0__.func_735(&iLocal_3369);
	}
	return 0;
}

float func_904()//Position - 0x7AAB7
{
	return fLocal_3157;
}

void func_905()//Position - 0x7AAC2
{
	func_906();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(-1618.1404f, -2980.8284f, 17.4172f, __LIB_0__.func_79(Vector(16.7974f, -2984.3794f, -1611.9894f) - Vector(17.4172f, -2980.8284f, -1618.1404f)), 5000f, 0);
}

void func_906()//Position - 0x7AB13
{
	func_369(1);
	func_494(2, -957.4382f, -3362.367f, 32.6549f);
	func_494(2, -723.2173f, -3497.1792f, 30.4632f);
	func_494(2, -452.31f, -3558.261f, 15f);
	func_494(2, -89.7333f, -3585.237f, 15f);
	func_494(2, 296.5815f, -3582.789f, 15f);
	func_494(2, 654.1344f, -3565.408f, 15f);
	func_494(2, 1050.116f, -3546.357f, 15f);
	func_494(2, 1380.296f, -3464.242f, 15f);
	func_494(2, 1588.478f, -3221.401f, 15f);
	func_494(2, 1555.99f, -2950.957f, 15f);
	func_494(2, 1363.256f, -2782.541f, 15f);
	func_494(2, 1072.981f, -2704.208f, 15f);
	func_494(2, 851.705f, -2774.272f, 15f);
	func_494(2, 689.5747f, -2910.523f, 30.9228f);
	func_494(2, 475.6135f, -3006.5f, 35f);
	func_494(2, 383.1139f, -3130.475f, 15f);
	func_494(2, 318.2879f, -3475.4753f, 15f);
	func_494(2, 14.5475f, -3788.176f, 15f);
	func_494(2, -424.7075f, -3672.252f, 38.4119f);
	func_494(8, -963.2404f, -3358.9646f, 45.6356f);
}

int func_907()//Position - 0x7ACB1
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(3, iLocal_702, 1);
				func_721("PS_PREV4", "PS_PREV4_1", "PS_PREV4_2", "PS_PREV4_3", 0, 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_908()//Position - 0x7AD4B
{
	Local_628 = { -1601.2122f, -2990.6f, 12.9693f };
	Local_629 = { 0f, 0f, 240f };
	fLocal_630 = 240f;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_662 = 0;
	iLocal_606 = joaat("stunt");
	func_906();
	func_740();
	__LIB_0__.func_371();
	iLocal_703 = 106;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 65000f;
	fLocal_688 = 14f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	iLocal_3180 = 1;
	iLocal_3178 = 1;
	iLocal_3179 = 1;
	func_778(1.5f);
	func_909(50f);
	func_828();
}

void func_909(float fParam0)//Position - 0x7AE3C
{
	fLocal_3159 = fParam0;
}

void func_910()//Position - 0x7AE49
{
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_402();
	func_369(1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
}

int func_911()//Position - 0x7AE87
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		switch (iLocal_78)
		{
			case 2:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_78 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(1, 1, 0);
						func_509("PS_LOOP", "PS_LOOP_1", "PS_LOOP", "PS_LOOP_2", 0);
						func_502();
						func_411(1);
						func_408(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						else if ((iLocal_3178 == 1 && !__LIB_0__.func_75()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							__LIB_0__.func_325("PSLOOP_A", 7500, 1);
						}
						break;
					case 2:
						func_411(0);
						func_819(0, 0);
						func_437();
						iLocal_78 = 5;
						iLocal_3177 = 1;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						func_545();
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 6;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						func_509("PS_LOOP", "PS_LOOP_3", "PS_LOOP", "PS_LOOP_4", 0);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						if (!func_815())
						{
							__LIB_0__.func_210("PSBARREL_E", 7500, 1);
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						iLocal_78 = 8;
						func_545();
						break;
				}
				break;
			case 8:
				switch (func_546())
				{
					case 0:
						func_451("PS_LOOPOBJ", "PS_LOOPOBJ_1", 0);
						func_864("PSLOOP_C", -1f, 1.5f);
						func_863();
						func_425();
						SYSTEM::SETTIMERA(0);
						func_426(1);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						else if ((!__LIB_0__.func_75() && MISC::ABSF(Local_670.f_32.f_3) > 130f) && iLocal_3177 == 1)
						{
							func_451("PS_LOOP", "PS_LOOP_5", 0);
							iLocal_3177++;
						}
						else if ((func_913() && (MISC::ABSF(fLocal_669) / Local_2984.f_10) >= 0.33f) && !__LIB_0__.func_75())
						{
							func_690(0);
							Local_670.f_32.f_3 = 0f;
							func_912();
							SYSTEM::SETTIMERA(0);
						}
						break;
					case 2:
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						func_425();
						func_426(0);
						iLocal_3177 = 1;
						iLocal_78 = 9;
						func_545();
						break;
				}
				break;
			case 9:
				switch (func_546())
				{
					case 0:
						func_451("PS_LOOP", "PS_LOOP_6", 0);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 11;
						func_545();
						break;
				}
				break;
			case 11:
				switch (func_546())
				{
					case 0:
						func_451("PS_LOOP", "PS_LOOP_7", 0);
						func_425();
						func_426(1);
						func_410(0);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 12;
						func_545();
						break;
				}
				break;
			case 12:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						if (!func_815())
						{
							__LIB_0__.func_210("PSBARREL_E", 7500, 1);
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						func_425();
						func_426(1);
						func_410(0);
						iLocal_3177 = 1;
						iLocal_78 = 13;
						func_545();
						break;
				}
				break;
			case 13:
				switch (func_546())
				{
					case 0:
						func_451("PS_LOOPOBJ", "PS_LOOPOBJ_1", 0);
						func_410(1);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						else if ((!__LIB_0__.func_75() && MISC::ABSF(Local_670.f_32.f_3) > 130f) && iLocal_3177 == 1)
						{
							func_451("PS_LOOP", "PS_LOOP_5", 0);
							iLocal_3177++;
						}
						else if ((func_913() && (MISC::ABSF(fLocal_669) / Local_2984.f_10) >= 0.33f) && !__LIB_0__.func_75())
						{
							func_690(0);
							func_912();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						func_425();
						func_426(0);
						iLocal_78 = 14;
						func_545();
						break;
				}
				break;
			case 14:
				switch (func_546())
				{
					case 0:
						func_509("PS_LOOP", "PS_LOOP_8", "PS_LOOP", "PS_LOOP_9", 0);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_3177 = 1;
						iLocal_78 = 16;
						func_545();
						break;
				}
				break;
			case 16:
				switch (func_546())
				{
					case 0:
						func_509("PS_LOOP", "PS_LOOP_10", "PS_LOOP", "PS_LOOP_11", 0);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 17;
						func_545();
						break;
				}
				break;
			case 17:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						if (!func_815())
						{
							__LIB_0__.func_210("PSBARREL_E", 7500, 1);
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						iLocal_3177 = 1;
						func_425();
						func_426(0);
						iLocal_78 = 18;
						func_545();
						break;
				}
				break;
			case 18:
				switch (func_546())
				{
					case 0:
						func_451("PS_LOOPOBJ", "PS_LOOPOBJ_2", 0);
						func_425();
						func_421(1, 6);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						else if ((func_913() && (MISC::ABSF(fLocal_669) / Local_2984.f_10) >= 0.33f) && !__LIB_0__.func_75())
						{
							func_690(0);
							func_912();
						}
						break;
					case 2:
						iLocal_3177 = 1;
						func_421(0, 6);
						iLocal_78 = 19;
						func_545();
						break;
				}
				break;
			case 19:
				switch (func_546())
				{
					case 0:
						func_451("PS_LOOPOBJ", "PS_LOOPOBJ_4", 0);
						func_425();
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (func_915())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 20;
						func_545();
						break;
				}
				break;
			case 20:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_78 = 21;
						func_545();
						break;
				}
				break;
			case 21:
				switch (func_546())
				{
					case 0:
						__LIB_6__.func_892(&iLocal_3186);
						func_545();
						break;
					case 1:
						if (func_918())
						{
							iLocal_78 = 1;
							func_505(0);
						}
						else if (__LIB_32__.func_785(&iLocal_3186, 1f))
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						func_464(Local_601, 0);
						if (func_792(Local_670.f_52, Local_670.f_42))
						{
							iLocal_78 = 0;
						}
						else
						{
							iLocal_78 = 1;
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 0:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 0);
							func_448("PS_LOOP", "PS_LOOP_13", "PS_LOOP_14", "PS_LOOP_15", "PS_LOOP_16", 0, 0);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 1:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_LOOP", "PS_LOOP_13", "PS_LOOP_14", "PS_LOOP_15", "PS_LOOP_16", 0, 0);
								}
								else
								{
									func_448("PS_LOOP", "PS_LOOP_13", "PS_LOOP_14", "PS_LOOP_15", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_912()//Position - 0x7B9AC
{
	if ((__LIB_0__.func_736(&iLocal_3189) && __LIB_7__.func_78(&iLocal_3189) > 10f) && SYSTEM::TIMERA() > 15)
	{
		func_451("PS_INTER", "PS_INTER_7", 0);
		__LIB_6__.func_892(&iLocal_3189);
	}
	else if (__LIB_0__.func_736(&iLocal_3189))
	{
		if (__LIB_7__.func_78(&iLocal_3189) > 10f)
		{
			func_451("PS_INTER", "PS_INTER_7", 0);
			__LIB_6__.func_892(&iLocal_3189);
		}
	}
	else
	{
		func_451("PS_INTER", "PS_INTER_7", 0);
		__LIB_6__.func_892(&iLocal_3189);
	}
}

var func_913()//Position - 0x7BA41
{
	return Local_670.f_32.f_6;
}

int func_915()//Position - 0x7BA69
{
	switch (iLocal_78)
	{
		case 2:
			return 0;
			break;
		case 3:
			return 0;
			break;
		case 4:
			switch (func_546())
			{
				case 1:
					if (func_492() > 1 || func_493())
					{
						return 1;
					}
					break;
			}
			break;
		case 5:
			if (!__LIB_0__.func_75())
			{
				return 1;
			}
			break;
		case 6:
			if (!__LIB_0__.func_75())
			{
				return 1;
			}
			break;
		case 7:
			if (func_815())
			{
				return 1;
			}
			break;
		case 8:
			if (func_917() > 0)
			{
				return 1;
			}
			break;
		case 9:
			if (!__LIB_0__.func_75())
			{
				return 1;
			}
			break;
		case 11:
			if (!__LIB_0__.func_75())
			{
				return 1;
			}
			break;
		case 12:
			if (func_815())
			{
				return 1;
			}
			break;
		case 13:
			if (func_917() > 0)
			{
				return 1;
			}
			break;
		case 14:
			if (!__LIB_0__.func_75())
			{
				return 1;
			}
			break;
		case 16:
			if (!__LIB_0__.func_75())
			{
				return 1;
			}
			break;
		case 17:
			if (func_815())
			{
				return 1;
			}
			break;
		case 18:
			switch (func_546())
			{
				case 1:
					if (MISC::ABSF(Local_670.f_32.f_3) > 160f && (ENTITY::GET_ENTITY_ROLL(Local_670.f_0) < -135f || ENTITY::GET_ENTITY_ROLL(Local_670.f_0) > 135f))
					{
						return 1;
					}
					break;
			}
			break;
		case 19:
			switch (func_546())
			{
				case 1:
					if (ENTITY::GET_ENTITY_PITCH(Local_670.f_0) < -45f && ENTITY::GET_ENTITY_PITCH(Local_670.f_0) > -135f)
					{
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						iLocal_78 = 18;
						func_505(0);
					}
					else if (func_916(0.5f))
					{
						return 1;
					}
					break;
			}
			break;
		case 20:
			if (func_916(1f))
			{
				return 1;
			}
			break;
		case 21:
			break;
	}
	return 0;
}

int func_916(float fParam0)//Position - 0x7BC81
{
	if (func_815())
	{
		if (!__LIB_0__.func_736(&(Local_670.f_32.f_7)))
		{
			__LIB_26__.func_455(&(Local_670.f_32.f_7));
		}
		if (__LIB_32__.func_785(&(Local_670.f_32.f_7), fParam0))
		{
			return 1;
		}
	}
	else if (__LIB_0__.func_736(&(Local_670.f_32.f_7)))
	{
		__LIB_6__.func_892(&(Local_670.f_32.f_7));
	}
	return 0;
}

int func_917()//Position - 0x7BCDB
{
	return Local_670.f_32.f_1;
}

int func_918()//Position - 0x7BCEA
{
	if (func_546() == 1)
	{
		switch (iLocal_78)
		{
			case 2:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 1, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			default:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_919()//Position - 0x7BD4E
{
	func_920();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(-1637.295f, -2732.1042f, 17.4674f, __LIB_0__.func_79(Vector(17.1325f, -2728.888f, -1635.4385f) - Vector(17.4674f, -2732.1042f, -1637.295f)), 5000f, 0);
}

void func_920()//Position - 0x7BD9F
{
	func_369(1);
	func_494(2, -1286.3641f, -2124.377f, 62f);
}

int func_921()//Position - 0x7BDC0
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(1, iLocal_702, 1);
				func_721("PS_PREV3", "PS_PREV3_1", "PS_PREV3_2", "PS_PREV3_3", 0, 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_922()//Position - 0x7BE5A
{
	func_920();
	iLocal_78 = 2;
	iLocal_703 = 105;
	Local_628 = { -1627.5929f, -2715.295f, 12.9445f };
	Local_629 = { 10.5441f, 0f, 330f };
	fLocal_630 = 330f;
	iLocal_3180 = 1;
	iLocal_3179 = 1;
	iLocal_3178 = 1;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_606 = joaat("stunt");
	func_778(1.5f);
	func_740();
	__LIB_0__.func_371();
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 44000f;
	fLocal_688 = 15f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	func_828();
}

void func_923()//Position - 0x7BF45
{
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_402();
	func_369(1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_606);
}

int func_924()//Position - 0x7BF83
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		switch (iLocal_77)
		{
			case 2:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_77 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_77 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(1, 1, 0);
						func_411(1);
						func_451("PS_KNIFE", "PS_KNIFE_1", 0);
						func_502();
						func_408(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (func_926())
						{
							func_545();
						}
						else if (!__LIB_0__.func_75() && iLocal_3367 == 1)
						{
							func_451("PS_KNIFE", "PS_KNIFE_2", 0);
							iLocal_3367++;
						}
						else if (!__LIB_0__.func_75() && iLocal_3367 == 2)
						{
							__LIB_0__.func_325("PSKNIFING_A", 7500, 1);
							iLocal_3367++;
						}
						break;
					case 2:
						func_437();
						func_411(0);
						func_819(0, 0);
						func_451("PS_KNIFE", "PS_KNIFE_3", 0);
						iLocal_3367 = 1;
						iLocal_77 = 5;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (func_926())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						__LIB_0__.func_296();
						iLocal_77 = 6;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						func_451("PS_KNIFEOBJ", "PS_KNIFEOBJ_1", 0);
						func_545();
						func_925(1);
						func_423();
						func_422(2);
						func_410(1);
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75() && func_926())
						{
							func_545();
						}
						break;
					case 2:
						__LIB_0__.func_296();
						iLocal_3367 = 1;
						iLocal_77 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						__LIB_0__.func_151("PSKNIFING_D", -1);
						func_509("PS_KNIFE", "PS_KNIFE_5", "PS_KNIFE", "PS_KNIFE_6", 0);
						func_545();
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (func_926())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						func_925(0);
						func_423();
						iLocal_77 = 8;
						func_545();
						break;
				}
				break;
			case 8:
				switch (func_546())
				{
					case 0:
						func_451("PS_KNIFEOBJ", "PS_KNIFEOBJ_4", 0);
						func_545();
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75() && func_926())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						iLocal_77 = 9;
						func_545();
						break;
				}
				break;
			case 9:
				switch (func_546())
				{
					case 0:
						func_509("PS_KNIFE", "PS_KNIFE_7", "PS_KNIFE", "PS_KNIFE_8", 0);
						func_545();
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (func_926())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						__LIB_0__.func_296();
						iLocal_77 = 10;
						func_545();
						break;
				}
				break;
			case 10:
				switch (func_546())
				{
					case 0:
						if (!__LIB_0__.func_75())
						{
							if (!__LIB_2__.func_49(Local_670.f_0))
							{
								func_451("PS_KNIFEOBJ", "PS_KNIFEOBJ_3", 0);
								func_423();
								func_925(1);
								if (iLocal_3184 == 4)
								{
									func_422(3);
								}
								else
								{
									func_422(4);
								}
								func_410(1);
								func_545();
							}
						}
						else if (func_929())
						{
							iLocal_77 = 1;
						}
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (func_926())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_HELP(true);
						iLocal_3367 = 1;
						iLocal_77 = 11;
						func_545();
						break;
				}
				break;
			case 11:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (func_926())
						{
							func_545();
						}
						else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && iLocal_3367 == 1)
						{
							func_451("PS_KNIFEOBJ", "PS_KNIFEOBJ_9", 0);
							iLocal_3367++;
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						func_925(0);
						func_423();
						iLocal_77 = 12;
						func_545();
						break;
				}
				break;
			case 12:
				switch (func_546())
				{
					case 0:
						func_451("PS_KNIFEOBJ", "PS_KNIFEOBJ_4", 0);
						func_410(0);
						func_545();
						break;
					case 1:
						if (func_929())
						{
							iLocal_77 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75() && func_926())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						func_464(Local_601, 0);
						if (func_792(Local_670.f_52, Local_670.f_42))
						{
							iLocal_77 = 0;
						}
						else
						{
							iLocal_77 = 1;
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 0:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 0);
							iLocal_652 = 1;
							func_448("PS_KNIFE", "PS_KNIFE_10", "PS_KNIFE_11", "PS_KNIFE_12", "PS_KNIFE_13", 0, 0);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 1:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_KNIFE", "PS_KNIFE_10", "PS_KNIFE_11", "PS_KNIFE_12", "PS_KNIFE_13", 0, 0);
								}
								else
								{
									func_448("PS_KNIFE", "PS_KNIFE_10", "PS_KNIFE_11", "PS_KNIFE_12", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_925(int iParam0)//Position - 0x7C722
{
	func_425();
	func_424();
	func_422(2);
	func_410(iParam0);
	Local_2984.f_2 = iParam0;
}

int func_926()//Position - 0x7C744
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_77)
		{
			case 2:
				return 0;
				break;
			case 3:
				return 0;
				break;
			case 4:
				switch (func_546())
				{
					case 1:
						if (func_492() > 1 || func_493())
						{
							return 1;
						}
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 1:
						if (!__LIB_0__.func_75())
						{
							return 1;
						}
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 1:
						if (func_699())
						{
							func_422(3);
							iLocal_3184 = 3;
							return 1;
						}
						else if (func_697())
						{
							func_422(4);
							iLocal_3184 = 4;
							return 1;
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (func_928(5f))
						{
							return 1;
						}
						break;
				}
				break;
			case 8:
				switch (func_546())
				{
					case 1:
						if (func_916(0.5f))
						{
							return 1;
						}
						break;
				}
				break;
			case 9:
				switch (func_546())
				{
					case 1:
						if (!__LIB_0__.func_75())
						{
							return 1;
						}
						break;
				}
				break;
			case 10:
				switch (func_546())
				{
					case 1:
						if (func_927() == 3)
						{
							if (func_928(0.5f))
							{
								return 1;
							}
						}
						else if (func_927() == 4)
						{
							if (func_928(0.5f))
							{
								return 1;
							}
						}
						break;
				}
				break;
			case 11:
				switch (func_546())
				{
					case 1:
						if (func_927() == 3)
						{
							if (func_928(5f))
							{
								return 1;
							}
						}
						else if (func_927() == 4)
						{
							if (func_928(5f))
							{
								return 1;
							}
						}
						break;
				}
				break;
			case 12:
				switch (func_546())
				{
					case 1:
						if (func_916(0.5f))
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

int func_927()//Position - 0x7C95E
{
	return Local_2984.f_7;
}

bool func_928(float fParam0)//Position - 0x7C96B
{
	return __LIB_26__.func_294(&(Local_670.f_32.f_7), fParam0);
}

int func_929()//Position - 0x7C980
{
	switch (iLocal_77)
	{
		case 2:
			return 0;
		case 3:
			return 0;
		case 4:
			if (func_804(&Local_670, 1, 0, 1, 1, 1, 1, 1, 1))
			{
				return 1;
			}
			break;
		default:
			if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_930()//Position - 0x7C9DC
{
	func_931();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(-1637.295f, -2732.1042f, 17.4674f, __LIB_0__.func_79(Vector(16.9657f, -2727.2866f, -1634.5145f) - Vector(17.4674f, -2732.1042f, -1637.295f)), 5000f, 0);
}

void func_931()//Position - 0x7CA2D
{
	func_369(1);
	func_494(2, -1286.3641f, -2124.377f, 62f);
}

int func_932()//Position - 0x7CA4E
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(1, iLocal_702, 1);
				func_721("PS_PREV2", "PS_PREV2_1", "PS_PREV2_2", "PS_PREV2_3", 0, 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_933()//Position - 0x7CAE8
{
	func_931();
	iLocal_77 = 2;
	Local_628 = { -1627.5929f, -2715.295f, 12.9445f };
	Local_629 = { 10.5441f, 0f, 330f };
	fLocal_630 = 330f;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_606 = joaat("stunt");
	func_740();
	__LIB_0__.func_371();
	func_778(1.5f);
	iLocal_703 = 104;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 28000f;
	fLocal_688 = 11f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	func_828();
}

void func_934()//Position - 0x7CBC7
{
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_402();
	func_369(1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stunt"));
}

int func_935()//Position - 0x7CC07
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
		{
			ENTITY::GET_ENTITY_MATRIX(Local_670.f_0, &uVar0, &uVar1, &Var2, &uVar3);
		}
		func_552();
		switch (iLocal_76)
		{
			case 2:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_76 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(1, 1, 0);
						func_864("PSINVERT_B", -1f, 0.5f);
						func_863();
						func_451("PS_INVERT", "PS_INVERT_1", 0);
						iLocal_3177 = -1;
						func_502();
						func_411(1);
						func_408(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (func_938())
						{
							func_545();
						}
						if (iLocal_3177 == -1 && ENTITY::GET_ENTITY_SPEED(Local_670.f_0) > 25f)
						{
							HUD::CLEAR_HELP(true);
							iLocal_3177++;
						}
						else if (iLocal_3177 == 0 && ENTITY::GET_ENTITY_SPEED(Local_670.f_0) > 25f)
						{
							__LIB_0__.func_151("PSINVERT_C", -1);
							iLocal_3177++;
						}
						else if ((!__LIB_0__.func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_3177 == 1)
						{
							func_451("PS_INVERT", "PS_INVERT_2", 0);
							iLocal_3177++;
						}
						else if ((!__LIB_0__.func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && iLocal_3177 == 2)
						{
							__LIB_0__.func_325("PSINVERT_A", 7500, 1);
							iLocal_3177++;
						}
						break;
					case 2:
						func_411(0);
						func_819(0, 0);
						iLocal_3177 = 1;
						iLocal_3179 = 3;
						iLocal_76 = 5;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						func_451("PS_INVERT", "PS_INVERT_3", 0);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 6;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						func_451("PS_INVERT", "PS_INVERT_4", 0);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_451("PS_INVERTOBJ", "PS_INVERTOBJ_1", 0);
						iLocal_3177++;
						func_864("PSINVERT_E", -1f, 1.5f);
						func_864("PSINVERT_C1", -1f, 4.5f);
						func_863();
						func_425();
						func_427(1);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_410(0);
							func_505(0);
						}
						else if (func_938())
						{
							func_410(0);
							func_545();
						}
						break;
					case 2:
						func_425();
						func_438();
						HUD::CLEAR_PRINTS();
						iLocal_76 = 8;
						func_545();
						break;
				}
				break;
			case 8:
				switch (func_546())
				{
					case 0:
						func_509("PS_INVERT", "PS_INVERT_5", "PS_INVERT", "PS_INVERT_6", 0);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 9;
						func_545();
						break;
				}
				break;
			case 9:
				switch (func_546())
				{
					case 0:
						if (!__LIB_2__.func_49(Local_670.f_0))
						{
							if (!func_815())
							{
								func_937("PSBARREL_E", -1f, 0.5f);
								func_864("PSINVERT_G", -1f, 2f);
								func_863();
							}
							else
							{
								func_545();
							}
						}
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (func_938())
						{
							func_545();
						}
						break;
					case 2:
						func_438();
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						iLocal_3177 = 1;
						iLocal_76 = 10;
						func_545();
						break;
				}
				break;
			case 10:
				switch (func_546())
				{
					case 0:
						func_451("PS_INVERT", "PS_INVERT_7", 0);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 11;
						func_545();
						break;
				}
				break;
			case 11:
				switch (func_546())
				{
					case 0:
						func_451("PS_INVERTOBJ", "PS_INVERTOBJ_2", 0);
						func_425();
						func_410(1);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_410(0);
							func_505(0);
						}
						else if (func_938())
						{
							func_410(0);
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 12;
						func_545();
						break;
				}
				break;
			case 12:
				switch (func_546())
				{
					case 0:
						func_451("PS_INVERT", "PS_INVERT_8", 0);
						func_425();
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 13;
						func_545();
						break;
				}
				break;
			case 13:
				switch (func_546())
				{
					case 0:
						if (!__LIB_2__.func_49(Local_670.f_0))
						{
							if (!func_815())
							{
								__LIB_0__.func_325("PSBARREL_E", 7500, 1);
							}
							else
							{
								func_545();
							}
						}
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (func_938())
						{
							func_545();
						}
						break;
					case 2:
						func_438();
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						iLocal_3177 = 1;
						iLocal_76 = 14;
						func_545();
						break;
				}
				break;
			case 14:
				switch (func_546())
				{
					case 0:
						func_509("PS_INVERT", "PS_INVERT_9", "PS_INVERT", "PS_INVERT_10", 0);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						iLocal_3177 = 1;
						iLocal_76 = 15;
						func_545();
						break;
				}
				break;
			case 15:
				switch (func_546())
				{
					case 0:
						if (Var2.f_2 <= -0.7071f)
						{
						}
						else
						{
							func_451("PS_INVERTOBJ", "PS_INVERTOBJ_3", 0);
						}
						iLocal_3177++;
						func_423();
						__LIB_2__.func_186(&(Local_670.f_20), 0f);
						__LIB_10__.func_565(&(Local_670.f_20));
						func_425();
						func_936(1);
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (func_938())
						{
							func_545();
						}
						else if (!__LIB_0__.func_75() && iLocal_3177 == 2)
						{
							if (Var2.f_2 <= -0.7071f)
							{
								func_451("PS_INVERTOBJ", "PS_INVERTOBJ_4", 0);
								iLocal_3177++;
							}
						}
						break;
					case 2:
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						iLocal_76 = 16;
						func_545();
						break;
				}
				break;
			case 16:
				switch (func_546())
				{
					case 0:
						func_936(0);
						func_425();
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (!__LIB_0__.func_75())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_76 = 17;
						func_545();
						break;
				}
				break;
			case 17:
				switch (func_546())
				{
					case 0:
						if (!__LIB_2__.func_49(Local_670.f_0))
						{
							if (!func_815())
							{
								func_451("PS_INVERTOBJ", "PS_INVERTOBJ_5", 0);
							}
							else
							{
								func_545();
							}
						}
						func_545();
						break;
					case 1:
						if (func_941())
						{
							iLocal_76 = 1;
							func_505(0);
						}
						else if (func_938())
						{
							func_545();
						}
						break;
					case 2:
						func_464(Local_601, 0);
						if (func_792(Local_670.f_52, Local_670.f_42))
						{
							iLocal_76 = 0;
						}
						else
						{
							iLocal_76 = 1;
						}
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 0:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 0);
							iLocal_652 = 1;
							func_448("PS_INVERT", "PS_INVERT_11", "PS_INVERT_12", "PS_INVERT_13", "PS_INVERT_14", 0, 0);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 1:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_INVERT", "PS_INVERT_11", "PS_INVERT_12", "PS_INVERT_13", "PS_INVERT_14", 0, 0);
								}
								else
								{
									func_448("PS_INVERT", "PS_INVERT_11", "PS_INVERT_12", "PS_INVERT_13", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

void func_936(int iParam0)//Position - 0x7D6A2
{
	func_425();
	func_424();
	func_422(1);
	func_410(iParam0);
	Local_2984.f_0 = iParam0;
}

void func_937(char* sParam0, float fParam1, float fParam2)//Position - 0x7D6C2
{
	struct<5> Var0;
	Var0.f_0 = 2;
	Var0.f_1 = sParam0;
	Var0.f_3 = fParam1;
	Var0.f_4 = fParam2;
	Local_109.f_2[Local_109.f_0 /*5*/] = { Var0 };
	Local_109.f_0++;
}

int func_938()//Position - 0x7D6F3
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_76)
		{
			case 4:
				switch (func_546())
				{
					case 1:
						if (func_492() > 1 || func_493())
						{
							return 1;
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (func_917() > 0)
						{
							return 1;
						}
						break;
				}
				break;
			case 9:
				switch (func_546())
				{
					case 1:
						if (func_916(0.5f))
						{
							return 1;
						}
						break;
				}
				break;
			case 11:
				switch (func_546())
				{
					case 1:
						if ((func_917() + func_940()) > 2)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						break;
				}
				break;
			case 13:
				switch (func_546())
				{
					case 1:
						if (func_916(0.5f))
						{
							return 1;
						}
						break;
				}
				break;
			case 15:
				switch (func_546())
				{
					case 1:
						if (func_939(15f))
						{
							return 1;
						}
						break;
				}
				break;
			case 17:
				switch (func_546())
				{
					case 1:
						if (func_916(0.5f))
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

int func_939(float fParam0)//Position - 0x7D854
{
	if (__LIB_32__.func_785(&(Local_670.f_32.f_7), fParam0))
	{
		return 1;
	}
	return 0;
}

int func_940()//Position - 0x7D871
{
	return Local_670.f_32;
}

int func_941()//Position - 0x7D87E
{
	if (func_546() == 1)
	{
		switch (iLocal_76)
		{
			case 2:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 1, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			default:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_942()//Position - 0x7D8E2
{
	func_943();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(-1637.295f, -2732.1042f, 17.4674f, __LIB_0__.func_79(Vector(17.0676f, -2728.265f, -1635.0789f) - Vector(17.4674f, -2732.1042f, -1637.295f)), 5000f, 0);
}

void func_943()//Position - 0x7D933
{
	func_369(1);
	func_494(2, -1286.3641f, -2124.377f, 62f);
}

int func_944()//Position - 0x7D954
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(1, iLocal_702, 1);
				func_721("PS_PREV1", "PS_PREV1_1", "PS_PREV1_2", "PS_PREV1_3", 0, 0);
				break;
			case 3:
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_945()//Position - 0x7D9FF
{
	func_943();
	iLocal_76 = 2;
	iLocal_703 = 103;
	Local_628 = { -1627.5929f, -2715.295f, 12.9445f };
	Local_629 = { 10.5441f, 0f, 330f };
	fLocal_630 = 330f;
	iLocal_3180 = 1;
	iLocal_3179 = 1;
	iLocal_3178 = 1;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_606 = joaat("stunt");
	func_778(1.5f);
	func_740();
	__LIB_0__.func_371();
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 38000f;
	fLocal_688 = 13f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	func_828();
}

void func_946()//Position - 0x7DAEA
{
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_402();
	func_369(1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stunt"));
}

int func_947()//Position - 0x7DB2A
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		if (iLocal_75 == 2 || iLocal_75 == 3)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 108 /*INPUT_VEH_FLY_ROLL_LEFT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 109 /*INPUT_VEH_FLY_ROLL_RIGHT_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 111 /*INPUT_VEH_FLY_PITCH_UP_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 112 /*INPUT_VEH_FLY_PITCH_DOWN_ONLY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
		}
		switch (iLocal_75)
		{
			case 2:
				func_889(&Local_670, 70f, 0, 0, 0);
				switch (func_546())
				{
					case 0:
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_670.f_0, Local_628, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_670.f_0, Local_629, 2, true);
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_75 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				func_889(&Local_670, 70f, 0, 0, 0);
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_75 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(4, 1, 0);
						func_864("PS_TAXI_A", -1f, 0.5f);
						func_864("PS_TAXI_C", -1f, 5.5f);
						func_863();
						func_509("PS_TAXI", "PS_TAXI_1", "PS_TAXI", "PS_TAXI_2", 0);
						func_502();
						func_411(1);
						func_408(1);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_950())
						{
							iLocal_75 = 1;
							func_505(0);
						}
						else if (func_949())
						{
							func_545();
						}
						if (func_948())
						{
							func_439("PS_TAXI_C");
						}
						break;
					case 2:
						HUD::CLEAR_HELP(false);
						iLocal_75 = 5;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false) && ENTITY::IS_ENTITY_IN_AIR(Local_670.f_0))
						{
							func_864("PS_TAXI_B", -1f, 0.5f);
							func_863();
							func_451("PS_TAXI", "PS_TAXI_3", 0);
						}
						func_545();
						break;
					case 1:
						if (func_950())
						{
							iLocal_75 = 1;
							func_505(0);
						}
						else if (func_949())
						{
							func_545();
						}
						if (func_948())
						{
							func_439("PS_TAXI_C");
						}
						break;
					case 2:
						HUD::CLEAR_HELP(false);
						iLocal_75 = 6;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						func_411(0);
						func_819(0, 0);
						if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false) && ENTITY::IS_ENTITY_IN_AIR(Local_670.f_0))
						{
							func_509("PS_TAXI", "PS_TAXI_4", "PS_TAXI", "PS_TAXI_5", 0);
						}
						func_545();
						break;
					case 1:
						if (func_950())
						{
							iLocal_75 = 1;
							func_505(0);
						}
						else if (func_949())
						{
							func_566();
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_HELP(false);
						iLocal_75 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_864("PS_TAXI_D", -1f, 0.5f);
						func_863();
						func_509("PS_TAXI", "PS_TAXI_6", "PS_TAXI", "PS_TAXI_7", 0);
						func_545();
						break;
					case 1:
						if (func_950())
						{
							iLocal_75 = 1;
							func_505(0);
						}
						else if (func_949())
						{
							func_545();
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_670.f_0, func_501(), 40f, 40f, 10f, false, true, 0))
							{
								if (!__LIB_0__.func_1("PS_TAXI_E") && !__LIB_0__.func_1("PS_TAXI_D"))
								{
									__LIB_0__.func_187("PS_TAXI_E");
								}
							}
						}
						break;
					case 2:
						HUD::CLEAR_HELP(false);
						iLocal_75 = 0;
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 0:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(Local_670.f_0, 1f, 10, false);
							}
							func_464(Local_601, 0);
							iLocal_652 = 1;
							func_448("PS_LAND", "PS_LAND_6", "PS_LAND_7", "PS_LAND_7", "PS_LAND_9", 0, 0);
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 1:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_TAXI", "PS_TAXI_8", "PS_TAXI_8", "PS_TAXI_8", "PS_TAXI_9", 0, 0);
								}
								else
								{
									func_448("PS_TAXI", "PS_TAXI_8", "PS_TAXI_8", "PS_TAXI_8", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

int func_948()//Position - 0x7E128
{
	if (VEHICLE::GET_LANDING_GEAR_STATE(Local_670.f_0) == 3 || VEHICLE::GET_LANDING_GEAR_STATE(Local_670.f_0) == 0)
	{
		return 1;
	}
	return 0;
}

int func_949()//Position - 0x7E150
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_75)
		{
			case 4:
				switch (func_546())
				{
					case 1:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_670.f_0, Local_3181, 30f, 30f, 30f, false, false, 0))
						{
							return 1;
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true), func_822(func_492())) < SYSTEM::VDIST2(Local_3181, func_822(func_492())))
						{
							return 1;
						}
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 1:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_670.f_0, Local_3182, 30f, 30f, 30f, false, false, 0))
						{
							return 1;
						}
						else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_670.f_0, true), func_822(func_492())) < SYSTEM::VDIST2(Local_3182, func_822(func_492())))
						{
							return 1;
						}
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 1:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_670.f_0, Local_3183, 30f, 30f, 30f, false, false, 0))
						{
							return 1;
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_670.f_0, func_501(), 15f, 15f, 15f, false, true, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_670.f_0) < 1f)
							{
								func_566();
								Local_670.f_90.f_12 = __LIB_7__.func_42(&(Local_670.f_14));
								return 1;
							}
							if (Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_1 != 0)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(Local_670.f_0, func_501(), 10f, 10f, 10f, false, true, 0))
								{
									Local_670.f_90.f_12 = __LIB_7__.func_42(&(Local_670.f_14));
								}
							}
						}
						else if (Local_670.f_181[Local_670.f_90.f_7 /*6*/].f_1 == 0)
						{
							func_478(Local_670.f_90.f_7, 0);
						}
						break;
				}
				break;
			}
	}
	return 0;
}

int func_950()//Position - 0x7E35F
{
	if (func_546() == 1)
	{
		switch (iLocal_75)
		{
			case 2:
				return 0;
			case 3:
				return 0;
			case 4:
				if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			case 5:
				if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			case 6:
				if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			case 7:
				if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_670.f_0, -1454.5598f, -2802.2583f, 10f, -1635.7618f, -2698.1902f, 17f, 160f, false, true, 0))
				{
					iLocal_69 = 5;
					return 1;
				}
				break;
			default:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_951()//Position - 0x7E458
{
	func_952();
	if (!ENTITY::IS_ENTITY_DEAD(Local_670.f_0, false))
	{
		VEHICLE::CONTROL_LANDING_GEAR(Local_670.f_0, 3);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_670.f_0);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_670.f_0, Local_628, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(Local_670.f_0, Local_629, 2, true);
	}
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(-934.1227f, -1514.2896f, 128.628f, __LIB_0__.func_79(Vector(126.1967f, -1538.1844f, -947.9191f) - Vector(128.628f, -1514.2896f, -934.1227f)), 5000f, 0);
}

void func_952()//Position - 0x7E4E1
{
	func_369(1);
	func_494(2, -1617.374f, -2698.5027f, 14.5794f);
	func_494(10, -1605.727f, -2793.0781f, 14.5808f);
}

int func_953()//Position - 0x7E517
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				Local_670.f_516 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				Local_670.f_517 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
				CAM::ATTACH_CAM_TO_ENTITY(Local_670.f_516, Local_670.f_0, -2f, -6f, 1f, true);
				CAM::POINT_CAM_AT_ENTITY(Local_670.f_516, Local_670.f_0, 0f, 0f, 0f, true);
				CAM::SET_CAM_ACTIVE(Local_670.f_516, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				func_783(4, iLocal_702, 1);
				func_721("PS_PREV02", "PS_PREV02_1", "PS_PREV02_2", 0, 0, 0);
				break;
			case 3:
				switch (Local_670.f_518)
				{
					case 0:
						if (__LIB_7__.func_78(&iLocal_697) > 4.5f)
						{
							CAM::DETACH_CAM(Local_670.f_516);
							CAM::STOP_CAM_POINTING(Local_670.f_516);
							CAM::SET_CAM_COORD(Local_670.f_516, -1457.3f, -2450.3f, 15.3f);
							CAM::SET_CAM_ROT(Local_670.f_516, 2.5f, 0f, -8.2f, 2);
							VEHICLE::CONTROL_LANDING_GEAR(Local_670.f_0, 0);
							iLocal_3366 = 0;
							Local_670.f_518 = 1;
						}
						else if (__LIB_7__.func_78(&iLocal_697) == 3f)
						{
							if (!iLocal_3366)
							{
								iLocal_643 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1457.3f, -2450.3f, 15.3f, __LIB_30__.func_682(2.5f, 0f, 138f), 5000f, 12, 127);
								iLocal_3366 = 1;
							}
						}
						break;
					case 1:
						if (__LIB_7__.func_78(&iLocal_697) > 7.5f)
						{
							CAM::SET_CAM_COORD(Local_670.f_516, -1457.3f, -2450.3f, 15.3f);
							CAM::SET_CAM_ROT(Local_670.f_516, 2.5f, 0f, 138f, 2);
							Local_670.f_518 = 2;
						}
						break;
				}
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_955()//Position - 0x7E756
{
	func_952();
	iLocal_75 = 2;
	iLocal_703 = 102;
	Local_628 = { -889.9432f, -1437.7682f, 125f };
	Local_629 = { -2f, 0f, 150f };
	fLocal_630 = 150f;
	Local_685 = { -1312.8f, -2168.9f, 67.7f };
	Local_686 = { __LIB_0__.func_79(Vector(65f, -2173.6f, -1318.1f) - Local_685) };
	Local_3181 = { -1375.5485f, -2278.7483f, 12.9444f };
	Local_3182 = { -1531.9657f, -2549.5588f, 12.9444f };
	Local_3183 = { -1617.374f, -2698.5027f, 14.5794f };
	iLocal_3180 = 1;
	iLocal_3179 = 1;
	iLocal_3178 = 1;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_606 = joaat("cuban800");
	func_778(1.5f);
	func_740();
	__LIB_0__.func_371();
	sLocal_2820 = "PS_FAIL_7A";
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 11000f;
	fLocal_688 = 10f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	func_828();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_670.f_0, 2);
		VEHICLE::CONTROL_LANDING_GEAR(Local_670.f_0, 3);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_670.f_0);
	}
}

void func_956()//Position - 0x7E8D9
{
	func_411(0);
	func_410(0);
	func_408(0);
	func_405();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	func_402();
	func_369(1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_703, "PilotSchool");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("stunt"));
}

int func_957()//Position - 0x7E919
{
	if (__LIB_0__.func_109() && !iLocal_662)
	{
		func_552();
		switch (iLocal_74)
		{
			case 2:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						func_545();
						break;
					case 2:
						iLocal_74 = 3;
						func_545();
						break;
				}
				break;
			case 3:
				switch (func_546())
				{
					case 0:
						func_545();
						break;
					case 1:
						if (func_514(1))
						{
							func_545();
						}
						break;
					case 2:
						iLocal_74 = 4;
						func_545();
						break;
				}
				break;
			case 4:
				switch (func_546())
				{
					case 0:
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_783(1, 1, 0);
						func_864("PS_TAKEOFF_A", -1f, 0.5f);
						func_863();
						func_820("PS_TAKEOFF", "PS_TAKEOFF_1", "PS_TAKEOFF", "PS_TAKEOFF_2", "PS_TAKEOFF", "PS_TAKEOFF_3", 0);
						func_502();
						func_408(1);
						func_545();
						break;
					case 1:
						if (func_959())
						{
							iLocal_74 = 1;
							func_505(0);
						}
						else if (func_958())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_HELP(true);
						iLocal_74 = 5;
						func_545();
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 0:
						HUD::CLEAR_HELP(true);
						__LIB_0__.func_151("PS_TAKEOFF_B", -1);
						func_545();
						break;
					case 1:
						if (func_959())
						{
							iLocal_74 = 1;
							func_505(0);
						}
						else if (func_958())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_HELP(false);
						iLocal_74 = 6;
						func_545();
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 0:
						if (func_948())
						{
							func_864("PS_TAKEOFF_C", -1f, 0.5f);
							func_863();
							func_451("PS_TAKEOFF", "PS_TAKEOFF_4", 0);
						}
						func_545();
						break;
					case 1:
						if (func_959())
						{
							iLocal_74 = 1;
							func_505(0);
						}
						else if (func_958())
						{
							func_545();
						}
						break;
					case 2:
						HUD::CLEAR_HELP(false);
						iLocal_74 = 7;
						func_545();
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 0:
						func_509("PS_TAKEOFF", "PS_TAKEOFF_5", "PS_TAKEOFF", "PS_TAKEOFF_7", 0);
						func_819(1, 0);
						func_818(func_501());
						func_545();
						break;
					case 1:
						if (func_959())
						{
							iLocal_74 = 1;
							func_505(0);
						}
						else if (func_958())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_74 = 0;
						iLocal_654 = 1;
						func_545();
						break;
				}
				break;
			case 0:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							func_464(Local_601, 0);
							iLocal_652 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
							func_448("PS_TAKEOFF", "PS_TAKEOFF_8", "PS_TAKEOFF_8", "PS_TAKEOFF_8", "PS_TAKEOFF_9", "PS_TAKEOFF_10", "PS_TAKEOFF_11");
							iLocal_653 = MISC::GET_GAME_TIMER();
							iLocal_655 = 1;
						}
						if (!func_447())
						{
							func_416(1);
							func_545();
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
			case 1:
				switch (func_546())
				{
					case 0:
						if (iLocal_655 == 0)
						{
							if (__LIB_0__.func_75())
							{
								__LIB_6__.func_771();
							}
							else
							{
								func_464(Local_601, 0);
								if (iLocal_654 == 1)
								{
									func_448("PS_TAKEOFF", "PS_TAKEOFF_8", "PS_TAKEOFF_8", "PS_TAKEOFF_8", "PS_TAKEOFF_9", "PS_TAKEOFF_10", "PS_TAKEOFF_11");
								}
								else
								{
									func_448("PS_TAKEOFF", "PS_TAKEOFF_8", "PS_TAKEOFF_8", "PS_TAKEOFF_8", "", 0, 0);
								}
								iLocal_653 = MISC::GET_GAME_TIMER();
								iLocal_655 = 1;
							}
						}
						else if (!__LIB_0__.func_75() || (MISC::GET_GAME_TIMER() - iLocal_653) > 4500)
						{
							func_416(0);
							func_545();
						}
						break;
					case 1:
						if (!func_415())
						{
							func_545();
						}
						break;
					case 2:
						iLocal_662 = 1;
						func_545();
						break;
				}
				break;
		}
		return 1;
	}
	return 0;
}

int func_958()//Position - 0x7ED7D
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		switch (iLocal_74)
		{
			case 4:
				switch (func_546())
				{
					case 1:
						if (!__LIB_0__.func_75())
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_670.f_0) > 20f)
							{
								return 1;
							}
						}
						break;
				}
				break;
			case 5:
				switch (func_546())
				{
					case 1:
						if (!__LIB_0__.func_75())
						{
							if (ENTITY::IS_ENTITY_IN_AIR(Local_670.f_0))
							{
								return 1;
							}
						}
						break;
				}
				break;
			case 6:
				switch (func_546())
				{
					case 1:
						if (!__LIB_0__.func_75())
						{
							iVar0 = VEHICLE::GET_LANDING_GEAR_STATE(Local_670.f_0);
							if (iVar0 == 4)
							{
								return 1;
							}
						}
						break;
				}
				break;
			case 7:
				switch (func_546())
				{
					case 1:
						if (func_493())
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

int func_959()//Position - 0x7EE6D
{
	int iVar0;
	if (func_546() == 1)
	{
		switch (iLocal_74)
		{
			case 2:
				return 0;
				break;
			case 4:
				if (func_804(&Local_670, 1, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			case 5:
				if (func_804(&Local_670, 1, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				break;
			case 6:
				if (func_804(&Local_670, 0, 0, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				if (func_960() > 0)
				{
					iVar0 = VEHICLE::GET_LANDING_GEAR_STATE(Local_670.f_0);
					if ((iVar0 == 0 || iVar0 == 3) || iVar0 == 5)
					{
						iLocal_69 = 21;
						return 1;
					}
				}
				break;
			case 7:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				iVar0 = VEHICLE::GET_LANDING_GEAR_STATE(Local_670.f_0);
				if ((iVar0 == 0 || iVar0 == 3) || iVar0 == 5)
				{
					iLocal_69 = 21;
					return 1;
				}
				break;
			default:
				if (func_804(&Local_670, 0, 1, 1, 1, 1, 1, 1, 1))
				{
					return 1;
				}
				iVar0 = VEHICLE::GET_LANDING_GEAR_STATE(Local_670.f_0);
				if ((iVar0 == 0 || iVar0 == 3) || iVar0 == 5)
				{
					iLocal_69 = 21;
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_960()//Position - 0x7EFB3
{
	return Local_670.f_90.f_9;
}

void func_961()//Position - 0x7EFC2
{
	int iVar0;
	if (STATS::STAT_GET_INT(__LIB_12__.func_134(__LIB_18__.func_173(), 5), &iVar0, -1))
	{
		if (iVar0 < (func_963() - 10))
		{
			STATS::STAT_SET_INT(__LIB_12__.func_134(__LIB_18__.func_173(), 5), (func_963() - 10), true);
		}
	}
	func_962();
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	STREAMING::NEW_LOAD_SCENE_START(-1637.597f, -2732.631f, 22.5273f, __LIB_0__.func_79(Vector(20.9882f, -2727.6628f, -1634.7294f) - Vector(22.5273f, -2732.631f, -1637.597f)), 5000f, 0);
}

void func_962()//Position - 0x7F048
{
	func_369(1);
	func_494(2, -1286.3641f, -2124.377f, 62f);
	func_494(8, -1065.917f, -1742.3917f, 70f);
}

int func_963()//Position - 0x7F07E
{
	switch (Global_112413)
	{
		case 0:
			return 30;
		case 1:
			return 40;
		case 2:
			return 50;
		case 3:
			return 60;
		case 6:
			return 70;
		case 4:
			return 75;
		case 5:
			return 80;
		case 11:
			return 85;
		case 7:
			return 90;
		case 8:
			return 95;
		case 9:
			return 0;
		case 10:
			return 0;
		default:
	}
	return 0;
}

int func_966()//Position - 0x7F37F
{
	if (func_724())
	{
		switch (iLocal_701)
		{
			case 2:
				func_723();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (!__LIB_2__.func_49(Local_670.f_0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, iLocal_703, "PilotSchool", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_670.f_0, fLocal_687);
				}
				iLocal_702 = func_826(iLocal_703, &(Local_670.f_181), fLocal_687);
				func_783(1, iLocal_702, 1);
				func_721("PS_PREV01", "PS_PREV01_1", "PS_PREV01_2", 0, 0, 0);
				break;
			case 3:
				if (ENTITY::IS_ENTITY_IN_AIR(Local_670.f_0) && VEHICLE::GET_LANDING_GEAR_STATE(Local_670.f_0) == 0)
				{
					VEHICLE::CONTROL_LANDING_GEAR(Local_670.f_0, 1);
				}
				break;
			case 5:
				func_367();
				break;
		}
		return 1;
	}
	return 0;
}

void func_967()//Position - 0x7F446
{
	func_962();
	iLocal_74 = 2;
	iLocal_703 = 101;
	Local_628 = { -1627.5929f, -2715.295f, 12.9445f };
	Local_629 = { 8.804f, 0f, 330f };
	fLocal_630 = 330f;
	iLocal_3180 = 1;
	iLocal_3179 = 1;
	iLocal_3178 = 1;
	iLocal_652 = 1;
	iLocal_654 = 0;
	iLocal_655 = 0;
	iLocal_606 = joaat("cuban800");
	func_778(1.5f);
	func_740();
	__LIB_0__.func_371();
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_703, sLocal_695);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695) || !__LIB_0__.func_109())
	{
		SYSTEM::WAIT(0);
	}
	fLocal_687 = 5000f;
	fLocal_688 = 12f;
	Local_627 = { Local_628 };
	if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_703, sLocal_695))
	{
		Local_683 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
		Local_684 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_703, fLocal_687, sLocal_695) };
	}
	func_828();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_0, false))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_670.f_0, 2);
	}
}

void func_968()//Position - 0x7F544
{
	if (bLocal_1823)
	{
		Local_670.f_52 = { Local_708[Global_112413 /*38*/] };
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	__LIB_21__.func_672();
	__LIB_11__.func_629();
	HUD::CLEAR_HELP(true);
	__LIB_30__.func_936(iLocal_1697);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2827);
	GRAPHICS::TRIGGER_SCREENBLUR_FADE_OUT(0f);
	__LIB_8__.func_770(0);
	__LIB_6__.func_833();
}

int func_969()//Position - 0x7F595
{
	func_1172(1);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (bLocal_1825)
	{
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				bLocal_1825 = !bLocal_1825;
				func_1136();
				__LIB_30__.func_679();
				func_1134();
			}
			if (!bLocal_1826 && __LIB_11__.func_621(&uLocal_163))
			{
				bLocal_1826 = true;
				func_1130(bLocal_1826);
			}
			__LIB_20__.func_627(&iLocal_1698, 1128792064, 1, 0, 1, 1065353216);
			func_1038(&iLocal_2827, Global_112413, &(Local_708[Global_112413 /*38*/]));
		}
		else if (__LIB_26__.func_185(&iLocal_600, 0))
		{
			iLocal_600 = 0;
			bLocal_1825 = !bLocal_1825;
			func_1134();
		}
		return 1;
	}
	else
	{
		if (iLocal_2831 && PLAYER::IS_PLAYER_ONLINE())
		{
			func_1134();
			iLocal_2831 = 0;
		}
		if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/) && (!PLAYER::IS_PLAYER_ONLINE() || !func_23())) && !bLocal_1824)
		{
			bLocal_1825 = !bLocal_1825;
			__LIB_30__.func_678();
			bLocal_1826 = __LIB_11__.func_621(&uLocal_163);
			func_1130(bLocal_1826);
			return 1;
		}
		else if (func_1015(&bLocal_1823))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (bLocal_1824)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PS_QTITLE", "PS_QUIT", 36, 0, false, -1, 0, 0, true, 0);
			}
			else if (!CAM::IS_CAM_INTERPOLATING(iLocal_66))
			{
				if (CAM::IS_CAM_ACTIVE(iLocal_66))
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				func_970(&uLocal_710);
			}
			return 1;
		}
	}
	return 0;
}

void func_970(var uParam0)//Position - 0x7F6FD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	struct<2> Var7;
	struct<2> Var8;
	struct<11> Var9;
	struct<11> Var10;
	char* sVar11;
	char cVar12[16];
	struct<2> Var13;
	struct<11> Var14;
	struct<11> Var15;
	__LIB_20__.func_627(&iLocal_1698, 1128792064, 1, 0, 1, 1065353216);
	if (!bLocal_3362)
	{
		if (!MISC::IS_PC_VERSION())
		{
			HUD::SET_WIDESCREEN_FORMAT(1);
		}
	}
	__LIB_35__.func_81("Shared", "BGGradient_32x1024", uParam0[1 /*9*/], 0, 0, 1, 0);
	__LIB_21__.func_6(uParam0->f_420[0 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[1 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[2 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[3 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[4 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[5 /*8*/], 0, 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	__LIB_15__.func_148(&(uParam0->f_741.f_165));
	__LIB_35__.func_166(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "PS_TITLE", 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	__LIB_16__.func_404(&(uParam0->f_741.f_187));
	__LIB_21__.func_6(uParam0->f_420[7 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[8 /*8*/], 0, 0);
	__LIB_30__.func_675(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	__LIB_35__.func_80(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "PSM_SELECT", 1, 0);
	__LIB_30__.func_674(&(uParam0->f_741.f_176));
	__LIB_30__.func_675(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	__LIB_35__.func_80(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "PSM_INFO", 1, 0);
	__LIB_30__.func_674(&(uParam0->f_741.f_176));
	__LIB_30__.func_675(&(uParam0->f_741.f_176), &(uParam0->f_420[2 /*8*/]), 0f, 0f);
	__LIB_35__.func_80(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "PSM_AWARD_TITLE", 1, 0);
	__LIB_30__.func_674(&(uParam0->f_741.f_176));
	__LIB_15__.func_148(&(uParam0->f_741.f_187));
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 9;
	iVar3 = 17;
	iVar4 = 2;
	sVar5 = "Shared";
	sVar6 = "Locked_Icon_32";
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (iVar0 == Global_112413)
		{
			__LIB_15__.func_148(&(uParam0->f_741.f_187));
			if (func_22(Local_708[Global_112413 /*38*/], 0))
			{
				if (Local_709[Global_112413 /*10*/].f_1 >= 0f)
				{
					__LIB_35__.func_166(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_187), "PSM_RTIME", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[22 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_79(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_187), SYSTEM::FLOOR((Local_709[Global_112413 /*10*/].f_1 * 1000f)), 6, "", 0, 1);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
				}
				else
				{
					if (Local_708[iVar0 /*38*/].f_5 == 0)
					{
						__LIB_15__.func_148(&(uParam0->f_741.f_187));
					}
					__LIB_35__.func_166(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_187), "PSM_RTIME", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[22 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_80(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_187), "SC_LB_EMPTY" /* GXT: – */, 0, 1);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
					__LIB_15__.func_148(&(uParam0->f_741.f_187));
				}
				if (Local_709[Global_112413 /*10*/] >= 0f)
				{
					__LIB_35__.func_166(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_187), "PSM_BTIME", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[23 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_79(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_187), SYSTEM::FLOOR((Local_709[Global_112413 /*10*/] * 1000f)), 6, "", 0, 1);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
				}
				else
				{
					if (Local_708[iVar0 /*38*/].f_5 == 0)
					{
						__LIB_15__.func_148(&(uParam0->f_741.f_187));
					}
					__LIB_35__.func_166(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_187), "PSM_BTIME", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[23 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_80(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_187), "SC_LB_EMPTY" /* GXT: – */, 0, 1);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
					__LIB_15__.func_148(&(uParam0->f_741.f_187));
				}
			}
			else if (func_22(Local_708[Global_112413 /*38*/], 2))
			{
				if (Local_709[Global_112413 /*10*/].f_2 >= 0f)
				{
					__LIB_35__.func_166(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_187), "PSM_RDIST", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[22 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_68(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_187), "NUMBER", __LIB_30__.func_673(Local_709[Global_112413 /*10*/].f_2), 2, 2);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
				}
				else
				{
					if (Local_708[iVar0 /*38*/].f_5 == 0)
					{
						__LIB_15__.func_148(&(uParam0->f_741.f_187));
					}
					__LIB_35__.func_166(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_187), "PSM_RDIST", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[22 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_80(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_187), "SC_LB_EMPTY" /* GXT: – */, 0, 1);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
					__LIB_15__.func_148(&(uParam0->f_741.f_187));
				}
				if (Local_709[Global_112413 /*10*/].f_3 >= 0f)
				{
					__LIB_35__.func_166(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_187), "PSM_BDIST", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[23 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_68(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_187), "NUMBER", __LIB_30__.func_673(Local_709[Global_112413 /*10*/].f_3), 2, 2);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
				}
				else
				{
					if (Local_708[iVar0 /*38*/].f_5 == 0)
					{
						__LIB_15__.func_148(&(uParam0->f_741.f_187));
					}
					__LIB_35__.func_166(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_187), "PSM_BDIST", 0);
					__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[23 /*8*/]), 0.0047f, 0.0055f);
					__LIB_35__.func_80(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_187), "SC_LB_EMPTY" /* GXT: – */, 0, 1);
					__LIB_30__.func_674(&(uParam0->f_741.f_187));
					__LIB_15__.func_148(&(uParam0->f_741.f_187));
				}
			}
			iVar1 = 3;
			__LIB_16__.func_404(&(uParam0->f_741.f_187));
			__LIB_21__.func_6(uParam0->f_420[21 /*8*/], 0, 0);
			__LIB_21__.func_6(uParam0->f_420[22 /*8*/], 0, 0);
			__LIB_21__.func_6(uParam0->f_420[23 /*8*/], 0, 0);
			__LIB_21__.func_6(uParam0->f_420[24 /*8*/], 0, 0);
			__LIB_21__.func_6(uParam0->f_420[25 /*8*/], 0, 0);
			__LIB_21__.func_6(uParam0->f_420[26 /*8*/], 0, 0);
			if (iLocal_671[iVar0] >= 90)
			{
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_35__.func_166(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_187), "PSM_AWARDS_SUB", 0);
				__LIB_12__.func_945(uParam0[iVar4 /*9*/], 1);
				__LIB_12__.func_945(uParam0[28 /*9*/], 1);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Gold_128", uParam0[28 /*9*/], 0, 0, 5, 0);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0, 0);
				__LIB_30__.func_672(&(uParam0->f_741.f_187));
				HUD::SET_TEXT_RIGHT_JUSTIFY(true);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0.0047f, 0.0055f);
				__LIB_35__.func_166(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_187), "PS_sGOLD", 0);
				HUD::SET_TEXT_RIGHT_JUSTIFY(false);
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_30__.func_674(&(uParam0->f_741.f_187));
				(uParam0[29 /*9*/])->f_7 = SYSTEM::ROUND(255f);
				(uParam0[30 /*9*/])->f_7 = SYSTEM::ROUND(255f);
				(uParam0[31 /*9*/])->f_7 = SYSTEM::ROUND(255f);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Gold_128", uParam0[29 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Silver_128", uParam0[30 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[31 /*9*/], 0, 0, 5, 0);
			}
			else if (iLocal_671[iVar0] >= 80)
			{
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_35__.func_166(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_187), "PSM_AWARDS_SUB", 0);
				__LIB_12__.func_945(uParam0[iVar4 /*9*/], 1);
				__LIB_12__.func_945(uParam0[28 /*9*/], 1);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Silver_128", uParam0[28 /*9*/], 0, 0, 5, 0);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0, 0);
				__LIB_30__.func_671(&(uParam0->f_741.f_187));
				HUD::SET_TEXT_RIGHT_JUSTIFY(true);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0.0047f, 0.0055f);
				__LIB_35__.func_166(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_187), "PS_sSILVER", 0);
				HUD::SET_TEXT_RIGHT_JUSTIFY(false);
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_30__.func_674(&(uParam0->f_741.f_187));
				(uParam0[29 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				(uParam0[30 /*9*/])->f_7 = SYSTEM::ROUND(255f);
				(uParam0[31 /*9*/])->f_7 = SYSTEM::ROUND(255f);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Gold_128", uParam0[29 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Silver_128", uParam0[30 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[31 /*9*/], 0, 0, 5, 0);
			}
			else if (iLocal_671[iVar0] >= 70)
			{
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_35__.func_166(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_187), "PSM_AWARDS_SUB", 0);
				__LIB_12__.func_945(uParam0[iVar4 /*9*/], 1);
				__LIB_12__.func_945(uParam0[28 /*9*/], 1);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[28 /*9*/], 0, 0, 5, 0);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0, 0);
				__LIB_35__.func_78(&(uParam0->f_741.f_187));
				HUD::SET_TEXT_RIGHT_JUSTIFY(true);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0.0047f, 0.0055f);
				__LIB_35__.func_166(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_187), "PS_sBRONZE", 0);
				HUD::SET_TEXT_RIGHT_JUSTIFY(false);
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_30__.func_674(&(uParam0->f_741.f_187));
				(uParam0[29 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				(uParam0[30 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				(uParam0[31 /*9*/])->f_7 = SYSTEM::ROUND(255f);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Gold_128", uParam0[29 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Silver_128", uParam0[30 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[31 /*9*/], 0, 0, 5, 0);
			}
			else if (Local_708[iVar0 /*38*/].f_5 == 0)
			{
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_35__.func_166(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_187), "PSM_AWARDS_SUB", 0);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0, 0);
				HUD::SET_TEXT_RIGHT_JUSTIFY(true);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0.0047f, 0.0055f);
				__LIB_35__.func_166(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_187), "SC_LB_EMPTY" /* GXT: – */, 0);
				HUD::SET_TEXT_RIGHT_JUSTIFY(false);
				__LIB_30__.func_674(&(uParam0->f_741.f_187));
				__LIB_12__.func_945(uParam0[28 /*9*/], 1);
				(uParam0[28 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[28 /*9*/], 0, 0, 1, 0);
				(uParam0[29 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				(uParam0[30 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				(uParam0[31 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Gold_128", uParam0[29 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Silver_128", uParam0[30 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[31 /*9*/], 0, 0, 5, 0);
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
			}
			else
			{
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_35__.func_166(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_187), "PSM_AWARDS_SUB", 0);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0, 0);
				HUD::SET_TEXT_RIGHT_JUSTIFY(true);
				__LIB_30__.func_675(&(uParam0->f_741.f_187), &(uParam0->f_420[21 /*8*/]), 0.0047f, 0.0055f);
				__LIB_35__.func_166(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_187), "SC_LB_EMPTY" /* GXT: – */, 0);
				HUD::SET_TEXT_RIGHT_JUSTIFY(false);
				__LIB_30__.func_674(&(uParam0->f_741.f_187));
				__LIB_12__.func_945(uParam0[28 /*9*/], 1);
				(uParam0[28 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[28 /*9*/], 0, 0, 1, 0);
				(uParam0[29 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				(uParam0[30 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				(uParam0[31 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Gold_128", uParam0[29 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Silver_128", uParam0[30 /*9*/], 0, 0, 5, 0);
				__LIB_35__.func_81("pilotSchool", "FlightSchool_Bronze_128", uParam0[31 /*9*/], 0, 0, 5, 0);
			}
		}
		else
		{
			iVar1 = 0;
		}
		if (iVar1 == 3)
		{
			__LIB_12__.func_916(&(uParam0->f_420[iVar2 /*8*/]), 1, 1);
		}
		else
		{
			__LIB_12__.func_917(&(uParam0->f_420[iVar2 /*8*/]));
		}
		__LIB_21__.func_6(uParam0->f_420[iVar2 /*8*/], 0, 0);
		if (Local_708[iVar0 /*38*/].f_5 == 2)
		{
			if (iVar0 == Global_112413)
			{
				__LIB_16__.func_404(&(uParam0->f_741.f_187));
				__LIB_12__.func_913(uParam0[iVar4 /*9*/], 2);
			}
			else
			{
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
				__LIB_12__.func_913(uParam0[iVar4 /*9*/], 1);
			}
			Var8 = { uParam0->f_316[iVar3 /*2*/] };
			__LIB_35__.func_73(&Var7, 269f, 0f, 32f, 32f, 0);
			__LIB_12__.func_945(&Var7, 1);
			Var7.f_1 = (uParam0->f_316[iVar3 /*2*/].f_1 + fLocal_3361);
			Var8.f_0 = (Var7.f_0 + fLocal_3360);
			if (!bLocal_3362)
			{
				__LIB_30__.func_670(&Var7, 0);
			}
			__LIB_35__.func_81("Shared", "NewStar_32", &Var7, 0, 0, 5, 0);
			if (!bLocal_3362)
			{
				__LIB_30__.func_669(&Var8, &(uParam0->f_741.f_187));
			}
			__LIB_30__.func_674(&(uParam0->f_741.f_187));
			if (MISC::IS_PC_VERSION())
			{
				Var9 = { uParam0->f_741.f_187 };
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
				{
					Var9.f_1 = 0.325f;
					Var9.f_2 = 0.325f;
				}
				__LIB_35__.func_166(&Var8, &Var9, &(Local_708[iVar0 /*38*/]), 0);
			}
			else
			{
				__LIB_35__.func_166(&Var8, &(uParam0->f_741.f_187), &(Local_708[iVar0 /*38*/]), 0);
			}
		}
		else
		{
			if (iVar0 == Global_112413)
			{
				__LIB_16__.func_404(&(uParam0->f_741.f_187));
			}
			else
			{
				__LIB_15__.func_148(&(uParam0->f_741.f_187));
			}
			__LIB_30__.func_674(&(uParam0->f_741.f_187));
			if (MISC::IS_PC_VERSION())
			{
				Var10 = { uParam0->f_741.f_187 };
				if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 7)
				{
					Var10.f_1 = 0.325f;
					Var10.f_2 = 0.325f;
				}
				__LIB_35__.func_166(&(uParam0->f_316[iVar3 /*2*/]), &Var10, &(Local_708[iVar0 /*38*/]), 0);
			}
			else
			{
				__LIB_35__.func_166(&(uParam0->f_316[iVar3 /*2*/]), &(uParam0->f_741.f_187), &(Local_708[iVar0 /*38*/]), 0);
			}
			__LIB_15__.func_148(&(uParam0->f_741.f_187));
			__LIB_12__.func_913(uParam0[iVar4 /*9*/], 1);
			if (iLocal_671[iVar0] >= 70)
			{
				sVar5 = "PS_Menu";
				sVar6 = "Common_Medal";
				if (iLocal_671[iVar0] >= 90)
				{
					__LIB_35__.func_77(uParam0[iVar4 + 12 /*9*/]);
				}
				else if (iLocal_671[iVar0] >= 80)
				{
					__LIB_35__.func_76(uParam0[iVar4 + 12 /*9*/]);
				}
				else if (iLocal_671[iVar0] >= 70)
				{
					__LIB_35__.func_75(uParam0[iVar4 + 12 /*9*/]);
				}
				__LIB_35__.func_81(sVar5, sVar6, uParam0[iVar4 + 12 /*9*/], 0, 0, 5, 0);
			}
			else
			{
				sVar5 = "Shared";
				sVar6 = "Locked_Icon_32";
				if (iVar0 == Global_112413)
				{
					__LIB_16__.func_404(&(uParam0->f_741.f_187));
					__LIB_30__.func_668(uParam0[iVar4 /*9*/]);
				}
				else
				{
					__LIB_15__.func_148(&(uParam0->f_741.f_187));
					__LIB_12__.func_945(uParam0[iVar4 /*9*/], 1);
				}
				__LIB_35__.func_81(sVar5, sVar6, uParam0[iVar4 /*9*/], 0, 0, 5, 0);
			}
		}
		__LIB_15__.func_148(&(uParam0->f_741.f_187));
		iVar2++;
		iVar3++;
		iVar4++;
		iVar0++;
	}
	sVar11 = "Locked_Icon_32";
	switch (Global_112413)
	{
		case 0:
			sVar11 = "FlightSchool_1a_RunwayTakeOff";
			break;
		case 1:
			sVar11 = "FlightSchool_2a_RunwayLanding";
			break;
		case 2:
			sVar11 = "FlightSchool_1_Invert";
			break;
		case 3:
			sVar11 = "FlightSchool_2_Knife";
			break;
		case 6:
			sVar11 = "FlightSchool_3_Loop";
			break;
		case 4:
			sVar11 = "FlightSchool_4_LowFly";
			break;
		case 5:
			sVar11 = "FlightSchool_5_Land";
			break;
		case 7:
			sVar11 = "FlightSchool_7_HeliObstacle";
			break;
		case 8:
			sVar11 = "FlightSchool_8_HeliSpeed";
			break;
		case 9:
			sVar11 = "FlightSchool_9_SkyDive";
			break;
		case 10:
			sVar11 = "FlightSchool_10_SkyDiveMoving";
			break;
		case 11:
			sVar11 = "FlightSchool_6_Obstacle";
			break;
	}
	__LIB_35__.func_81("PS_Menu", sVar11, uParam0[26 /*9*/], 0, 0, 5, 0);
	StringCopy(&cVar12, "PS_DESC_", 16);
	StringIntConCat(&cVar12, Global_112413 + 1, 16);
	if (Local_708[Global_112413 /*38*/].f_5 == 0)
	{
		__LIB_15__.func_148(&(uParam0->f_741.f_198));
		__LIB_15__.func_148(&(uParam0->f_741.f_187));
	}
	else
	{
		__LIB_15__.func_148(&(uParam0->f_741.f_198));
		__LIB_15__.func_148(&(uParam0->f_741.f_187));
	}
	__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[30 /*8*/]), 0.0047f, 0.0055f);
	HUD::SET_TEXT_LEADING(1);
	Var13 = { uParam0->f_316[16 /*2*/] };
	Var14 = { uParam0->f_741.f_198 };
	if (!bLocal_3362)
	{
		Var14.f_9 = (Var14.f_9 - 0.116f);
		__LIB_30__.func_669(&Var13, &Var14);
	}
	if (bLocal_3362)
	{
		__LIB_30__.func_667(&(uParam0->f_420[30 /*8*/]), &cVar12, &Var13, &Var14, 27f, 2f, 5, 159f);
	}
	else
	{
		__LIB_30__.func_667(&(uParam0->f_420[30 /*8*/]), &cVar12, &Var13, &Var14, 18f, 1.55f, 5, 106f);
	}
	__LIB_21__.func_6(uParam0->f_420[30 /*8*/], 0, 0);
	__LIB_35__.func_166(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar12, 0);
	__LIB_30__.func_674(&(uParam0->f_741.f_198));
	__LIB_16__.func_404(&(uParam0->f_741.f_187));
	__LIB_21__.func_6(uParam0->f_420[27 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[28 /*8*/], 0, 0);
	__LIB_21__.func_6(uParam0->f_420[29 /*8*/], 0, 0);
	Var15 = { uParam0->f_741.f_187 };
	if (func_22(Local_708[Global_112413 /*38*/], 0))
	{
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[27 /*8*/]), 0, 0);
		__LIB_35__.func_79(&(uParam0->f_316[13 /*2*/]), &Var15, SYSTEM::FLOOR((Local_708[Global_112413 /*38*/].f_30 * 1000f)), 6, "", 1, 0);
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[27 /*8*/]), 0, 0);
		__LIB_35__.func_79(&(uParam0->f_316[14 /*2*/]), &Var15, SYSTEM::FLOOR((Local_708[Global_112413 /*38*/].f_31 * 1000f)), 6, "", 1, 0);
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[27 /*8*/]), 0, 0);
		if (Local_708[Global_112413 /*38*/].f_32 > 0f)
		{
			__LIB_35__.func_79(&(uParam0->f_316[15 /*2*/]), &Var15, SYSTEM::FLOOR((Local_708[Global_112413 /*38*/].f_32 * 1000f)), 6, "", 1, 0);
		}
		else
		{
			__LIB_35__.func_80(&(uParam0->f_316[15 /*2*/]), &Var15, "PS_sFINISH", 1, 0);
		}
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
	}
	else if (func_22(Local_708[Global_112413 /*38*/], 2))
	{
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[27 /*8*/]), 0, 0);
		__LIB_35__.func_68(&(uParam0->f_316[13 /*2*/]), &Var15, "NUMBER", __LIB_30__.func_673(Local_708[Global_112413 /*38*/].f_33), 2, 0);
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[27 /*8*/]), 0, 0);
		__LIB_35__.func_68(&(uParam0->f_316[14 /*2*/]), &Var15, "NUMBER", __LIB_30__.func_673(Local_708[Global_112413 /*38*/].f_34), 2, 0);
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[27 /*8*/]), 0, 0);
		if (Local_708[Global_112413 /*38*/].f_35 > 0f)
		{
			__LIB_35__.func_68(&(uParam0->f_316[15 /*2*/]), &Var15, "NUMBER", __LIB_30__.func_673(Local_708[Global_112413 /*38*/].f_35), 2, 0);
		}
		else
		{
			__LIB_35__.func_80(&(uParam0->f_316[15 /*2*/]), &Var15, "PS_sFINISH", 1, 0);
		}
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
	}
	else if (func_22(Local_708[Global_112413 /*38*/], 4))
	{
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[27 /*8*/]), 0, 0);
		__LIB_35__.func_164(&(uParam0->f_316[13 /*2*/]), &Var15, "PERCENTAGE" /* GXT: ~1~% */, 90, 0);
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[28 /*8*/]), 0, 0);
		__LIB_35__.func_164(&(uParam0->f_316[14 /*2*/]), &Var15, "PERCENTAGE" /* GXT: ~1~% */, 80, 0);
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
		__LIB_30__.func_675(&(uParam0->f_741.f_198), &(uParam0->f_420[29 /*8*/]), 0, 0);
		__LIB_35__.func_164(&(uParam0->f_316[15 /*2*/]), &Var15, "PERCENTAGE" /* GXT: ~1~% */, 70, 0);
		__LIB_30__.func_674(&(uParam0->f_741.f_198));
	}
	__LIB_15__.func_148(&(uParam0->f_741.f_187));
	__LIB_15__.func_148(&(uParam0->f_741.f_198));
}

int func_1015(int iParam0)//Position - 0x81446
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	if (bLocal_1824)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		HUD::SET_WARNING_MESSAGE_WITH_HEADER("PS_QTITLE", "PS_QUIT", 36, 0, false, -1, 0, 0, true, 0);
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			*iParam0 = 0;
			iLocal_665 = 8;
			CAM::DO_SCREEN_FADE_OUT(0);
			iLocal_664 = 0;
			__LIB_30__.func_678();
			if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MinigameTransitionIn"))
			{
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
			}
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			bLocal_1824 = false;
			__LIB_30__.func_679();
		}
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		bLocal_1824 = true;
		__LIB_30__.func_679();
		HUD::CLEAR_HELP(true);
		return 1;
	}
	if (!bLocal_1824 && PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		iVar1 = 12;
		Global_4539961 = __LIB_35__.func_69(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, iVar1, 128, 0, 1);
		__LIB_2__.func_158(0, Global_112413, 1);
		if (__LIB_2__.func_157())
		{
			if (Global_4539961 == Global_112413)
			{
				iVar0 = 1;
			}
			else
			{
				__LIB_30__.func_676();
				Global_112413 = Global_4539961;
				func_1134();
			}
		}
	}
	if (!bLocal_1824 && (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0))
	{
		if (!Local_708[Global_112413 /*38*/].f_5 == 0)
		{
			*iParam0 = 1;
			__LIB_30__.func_678();
			return 0;
		}
		else
		{
			__LIB_30__.func_679();
		}
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/)) || __LIB_30__.func_677(0, &uLocal_609))
	{
		iVar2 = (Global_112413 - 1);
		if (iVar2 < 0)
		{
			iVar2 = (12 - 1);
		}
		__LIB_30__.func_676();
		Global_112413 = iVar2;
		func_1134();
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/)) || __LIB_30__.func_677(1, &uLocal_609))
	{
		iVar3 = Global_112413 + 1;
		if (iVar3 >= 12)
		{
			iVar3 = 0;
		}
		__LIB_30__.func_676();
		Global_112413 = iVar3;
		func_1134();
	}
	return 1;
}

void func_1038(int iParam0, int iParam1, char[4] cParam2)//Position - 0x8207E
{
	HUD::DISABLE_FRONTEND_THIS_FRAME();
	func_1119(iParam1, cParam2);
	func_1039(iParam0, &uLocal_163);
}

void func_1039(var uParam0, var uParam1)//Position - 0x8209B
{
	int iVar0;
	bool bVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	__LIB_0__.func_495(&(Global_2103068.f_49), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	__LIB_1__.func_304();
	__LIB_8__.func_611(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	__LIB_7__.func_167(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	__LIB_0__.func_660(1);
	__LIB_0__.func_733(1);
	if (!__LIB_19__.func_797())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!BitTest(uParam1->f_42, 3))
	{
		*uParam0 = __LIB_5__.func_29();
		MISC::SET_BIT(&(uParam1->f_42), 3);
	}
	Var10 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())) || Global_2097536.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_2097536.f_2829 != 2)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::NETWORK_HAS_AGE_RESTRICTIONS())
			{
				if (Global_2097536.f_2829 != 3)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 3;
				}
			}
			else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
			{
				if (Global_2097536.f_2829 != 4)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 4;
				}
			}
			else if (Global_2097536.f_2832 != 0)
			{
				if (Global_2097536.f_2829 != 5)
				{
					MISC::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_2097536.f_2829 = 5;
				}
			}
			if (!BitTest(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
				{
					if (!__LIB_5__.func_27(uParam1->f_44))
					{
						if (Global_2097536.f_2780.f_26 > 0)
						{
							Var6 = { Global_2097536.f_2780.f_9 };
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else if (!Global_2097536.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
						if (Global_2097536.f_2780.f_26 > 0)
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
						}
						else
						{
							__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
						}
					}
					__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_1103(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_1103(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_1103(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_42), 1);
				__LIB_5__.func_24(*uParam0);
				MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				HUD::CLEAR_HELP(true);
			}
			else
			{
				__LIB_5__.func_24(*uParam0);
			}
		}
		else
		{
			if (Global_2097536.f_2829 != 1)
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_2097536.f_2829 = 1;
			}
			if (!__LIB_41__.func_445(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				MISC::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!BitTest(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!__LIB_5__.func_27(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					MISC::SET_BIT(&(uParam1->f_42), 0);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_2097536.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0" /* GXT: Downloading */, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_1103(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_1103(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_1103(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						__LIB_5__.func_10(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825 = 1;
					__LIB_0__.func_579(&(Global_2097536.f_2823));
				}
				else if (__LIB_2__.func_47(&(Global_2097536.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_2097536.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_1103(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_1103(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_1103(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						__LIB_5__.func_10(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_2097536.f_2825++;
					if (Global_2097536.f_2825 > 3)
					{
						Global_2097536.f_2825 = 0;
					}
					__LIB_0__.func_579(&(Global_2097536.f_2823));
				}
				__LIB_5__.func_24(*uParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!BitTest(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					__LIB_5__.func_28(*uParam0, Global_2097536.f_2780);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_2097536.f_2780.f_1)))
					{
						if (!__LIB_5__.func_27(uParam1->f_44))
						{
							if (Global_2097536.f_2780.f_26 > 0)
							{
								Var6 = { Global_2097536.f_2780.f_9 };
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &Var6, 1, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &cVar7, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else if (!Global_2097536.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5" /* GXT: Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6" /* GXT: Co-Driver */, 64);
							if (Global_2097536.f_2780.f_26 > 0)
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, Global_2097536.f_2780.f_26);
							}
							else
							{
								__LIB_5__.func_26(*uParam0, &(Global_2097536.f_2780.f_1), &Var6, &(Global_2097536.f_2780.f_9), Global_2097536.f_2780.f_25, -1);
							}
						}
						__LIB_5__.func_25(*uParam0, "SCLB_C_RANK" /* GXT: POSITION */, &(Global_2097536.f_2717), Global_2097536.f_2708);
					}
					if (!BitTest(uParam1->f_42, 6))
					{
						__LIB_1__.func_902(&Global_2101867);
						__LIB_37__.func_171(uParam1, &Global_2101867);
						__LIB_5__.func_7(uParam1, &Global_2101867);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_2097536.f_2704[0] > 1 || (Global_2097536.f_2704[0] > 0 && Global_2097536.f_2775[0] != -1)) || (((Global_2097536.f_2704[0] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_2101867[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_1103(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_2097536.f_2704[1] < 1 && Global_2097536.f_2775[1] == -1) && !(((Global_2097536.f_2704[1] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[1] != -1))
									{
										func_1103(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_1103(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_2101867[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
									{
										bVar14 = true;
									}
									else if (!NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
									{
										bVar14 = true;
									}
									if ((Global_2097536.f_2704[2] < 2 && Global_2097536.f_2775[2] == -1) && !(((Global_2097536.f_2704[2] > 0 && Global_2097536.f_2780.f_27) && __LIB_5__.func_27(uParam1->f_44)) && Global_2097536.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_1103(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_1103(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (__LIB_0__.func_585(Global_2101867[iVar0 /*100*/].f_32))
							{
								if (__LIB_5__.func_27(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar11);
									if (!Global_2101867[iVar0 /*100*/].f_74 && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_2097536.f_2780.f_27)
									{
										if (__LIB_5__.func_6(&(Global_2101867[iVar0 /*100*/].f_32), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (__LIB_5__.func_27(uParam1->f_44))
									{
										Var6 = { Global_2101867[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2101867[iVar0 /*100*/].f_84)) && !MISC::ARE_STRINGS_EQUAL(&(Global_2101867[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_2101867[iVar0 /*100*/].f_84), 64);
										}
										__LIB_5__.func_5(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &Var6, &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										__LIB_5__.func_5(*uParam0, iVar3, iVar9, Global_2101867[iVar0 /*100*/].f_59, &(Global_2101867[iVar0 /*100*/]), &(Global_2101867[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_2101867[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									bVar1 = false;
									while (bVar1 < Global_2097536.f_2708)
									{
										bVar5 = false;
										if (BitTest(Global_2097536.f_2770, bVar1))
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2754[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												__LIB_20__.func_979(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], 0, Global_2101867[iVar0 /*100*/].f_58);
											}
											else
											{
												__LIB_20__.func_979(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_67[bVar1], Global_2101867[iVar0 /*100*/].f_74, Global_2101867[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (BitTest(Global_2097536.f_2768, bVar1))
											{
												if (Global_2097536.f_2761[bVar1] == Global_2101867[iVar0 /*100*/].f_67[bVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												__LIB_19__.func_792(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], 0);
											}
											else
											{
												__LIB_19__.func_792(Global_2097536.f_2780, bVar1, Global_2101867[iVar0 /*100*/].f_60[bVar1], Global_2101867[iVar0 /*100*/].f_74);
											}
										}
										bVar1++;
									}
									__LIB_5__.func_1();
									uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_2101867[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_2101867[iVar0 /*100*/].f_59 > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											__LIB_5__.func_0(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_1103(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_1103(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_1103(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_42), 1);
					MISC::CLEAR_BIT(&(uParam1->f_42), 2);
					__LIB_5__.func_24(*uParam0);
					HUD::CLEAR_HELP(true);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_2097536.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							__LIB_5__.func_0(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					__LIB_5__.func_24(*uParam0);
					__LIB_21__.func_617(uParam0, uParam1);
				}
			}
		}
	}
}

void func_1103(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8926A
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	sVar0 = "";
	if (BitTest(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL" /* GXT: GLOBAL */;
	}
	else if (BitTest(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS" /* GXT: FRIENDS */;
	}
	else if (BitTest(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if ((__LIB_0__.func_52() || __LIB_0__.func_53()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				sVar0 = "SCLB_CREW" /* GXT: CREW */;
			}
			else
			{
				Var4 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW" /* GXT: CREW */;
					}
				}
				else
				{
					sVar0 = "SCLB_CREW" /* GXT: CREW */;
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW" /* GXT: CREW */;
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL" /* GXT: Sign in to view leaderboard data. */;
		}
		else if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			sVar0 = "SCLB_NO_ROS" /* GXT: The Rockstar game services are unavailable right now. Please try again later. */;
		}
		else if (Global_2097536.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL" /* GXT: Unable to retrieve leaderboard data. Please try again later. */;
		}
		else
		{
			sVar0 = "HUD_PERM" /* GXT: Your profile does not have the correct permissions to access Social Club functionality. */;
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (BitTest(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL" /* GXT: No data available yet for this leaderboard. */;
		}
		else if (BitTest(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS" /* GXT: No friends listed on this leaderboard. */;
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb" /* GXT: Search for friends on Social Club to add and compare your scores with. */;
			}
		}
		else if (BitTest(iParam2, 6))
		{
			if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
			{
				if (NETWORK::NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
					{
						if ((__LIB_0__.func_52() || __LIB_0__.func_53()) && !NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
						{
							sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
						}
						else
						{
							Var6 = { __LIB_0__.func_604(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb" /* GXT: No ~a~ members listed on this leaderboard. */;
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc" /* GXT: No Crew members listed on this leaderboard. */;
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa" /* GXT: Visit ~HUD_COLOUR_SOCIAL_CLUB~www.rockstargames.com/socialclub~s~ to participate in a Crew. */;
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe" /* GXT: ~HUD_COLOUR_SOCIAL_CLUB~Social Club~s~ policies have been updated. Visit the Players menu, and press ~INPUT_FRONTEND_Y~ to view and accept the updated policies. */;
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd" /* GXT: Sign up to Social Club to gain access to Crew leaderboards. */;
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&Var2);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_1119(int iParam0, char[4] cParam1)//Position - 0x89827
{
	struct<3> Var0;
	int iVar1;
	switch (iParam0)
	{
		case 0:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_01", 24);
			cParam1 = "PSLBT_01";
			break;
		case 1:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_02", 24);
			cParam1 = "PSLBT_02";
			break;
		case 2:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_03", 24);
			cParam1 = "PSLBT_03";
			break;
		case 3:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_04", 24);
			cParam1 = "PSLBT_04";
			break;
		case 5:
			iVar1 = 83;
			StringCopy(&Var0, "LESSON_05", 24);
			cParam1 = "PSLBT_05";
			break;
		case 4:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_06", 24);
			cParam1 = "PSLBT_06";
			break;
		case 6:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_07", 24);
			cParam1 = "PSLBT_07";
			break;
		case 7:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_08", 24);
			cParam1 = "PSLBT_08";
			break;
		case 8:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_09", 24);
			cParam1 = "PSLBT_09";
			break;
		case 9:
			iVar1 = 83;
			StringCopy(&Var0, "LESSON_10", 24);
			cParam1 = "PSLBT_10";
			break;
		case 10:
			iVar1 = 83;
			StringCopy(&Var0, "LESSON_11", 24);
			cParam1 = "PSLBT_11";
			break;
		case 11:
			iVar1 = 82;
			StringCopy(&Var0, "LESSON_12", 24);
			cParam1 = "PSLBT_12";
			break;
	}
	__LIB_19__.func_798(&uLocal_163, iVar1, &Var0, cParam1, -1, -1, 0, 0);
}

void func_1130(bool bParam0)//Position - 0x8EF75
{
	__LIB_1__.func_899(&iLocal_1698);
	if (bParam0)
	{
		__LIB_1__.func_904(&uLocal_163);
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "FE_HLP3" /* GXT: Back */, 2, 202, 1, 1, 0);
		__LIB_12__.func_133(&iLocal_1698, "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
	}
	else
	{
		__LIB_1__.func_904(&uLocal_163);
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "FE_HLP3" /* GXT: Back */, 2, 202, 1, 1, 0);
	}
	__LIB_30__.func_646(&iLocal_1698, 1);
}

void func_1134()//Position - 0x8F115
{
	__LIB_1__.func_899(&iLocal_1698);
	if (Local_708[Global_112413 /*38*/].f_5 == 0)
	{
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "IB_QUIT" /* GXT: Quit */, 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && !func_23())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 0;
		}
		else
		{
			iLocal_2831 = 0;
		}
	}
	else
	{
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "FE_HLP4" /* GXT: Select */, 2, 201, 1, 1, 0);
		__LIB_12__.func_133(&iLocal_1698, "IB_QUIT" /* GXT: Quit */, 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && !func_23())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 0;
		}
		else
		{
			iLocal_2831 = 0;
		}
	}
	__LIB_30__.func_646(&iLocal_1698, 1);
}

void func_1136()//Position - 0x8F247
{
	__LIB_19__.func_72(&uLocal_163, 0);
}

int func_1141(int iParam0, int iParam1, float fParam2)//Position - 0x8F54D
{
	if (!iLocal_3167)
	{
	}
	if (iParam0 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 1;
		}
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	if (!(CAM::IS_SCREEN_FADING_IN() || CAM::IS_SCREEN_FADING_OUT()))
	{
		func_365(iParam0, iParam1, fParam2);
		return 0;
	}
	return 0;
}

void func_1142()//Position - 0x8F59C
{
	func_1172(1);
	func_1157();
	func_1152();
	func_1143();
	PAD::SET_CURSOR_POSITION(0.5f, 0.5f);
}

void func_1143()//Position - 0x8F5C4
{
	bLocal_1825 = false;
	HUD::CLEAR_HELP(true);
	__LIB_11__.func_629();
	func_1149();
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", false);
	while (!func_1147() || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		func_1172(1);
		SYSTEM::WAIT(0);
	}
	func_1172(1);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_670);
	}
	GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
	bLocal_1823 = false;
	func_1144(&uLocal_710);
}

void func_1144(var uParam0)//Position - 0x8F64B
{
	__LIB_12__.func_956(uParam0);
	__LIB_35__.func_74(&(uParam0->f_741));
	__LIB_8__.func_770(1);
	func_1134();
	bLocal_3362 = GRAPHICS::GET_IS_WIDESCREEN();
	__LIB_37__.func_571(uParam0);
}

int func_1147()//Position - 0x907B9
{
	if ((((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("pilotSchool") && HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("PSCHOOL", 3)) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("PS_Menu")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED")) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1697)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2827)) && __LIB_30__.func_647(&Local_3154))
	{
		return 1;
	}
	return 0;
}

void func_1149()//Position - 0x9083F
{
	HUD::REQUEST_ADDITIONAL_TEXT("PSCHOOL", 3);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("pilotSchool", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("PS_Menu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", false);
	__LIB_30__.func_648(&Local_3154);
	iLocal_1697 = __LIB_30__.func_683();
	iLocal_2827 = __LIB_5__.func_29();
}

void func_1152()//Position - 0x908B1
{
	int iVar0;
	int iVar1;
	func_1154();
	func_1153();
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_708[iVar0 /*38*/].f_5 = 1;
		iVar0++;
	}
	iVar1 = __LIB_18__.func_168(PLAYER::PLAYER_PED_ID());
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_709[iVar0 /*10*/] = { Global_113386.f_1988[iVar1 /*121*/][iVar0 /*10*/] };
		if (Local_709[iVar0 /*10*/].f_7)
		{
			iLocal_671[iVar0] = func_17(Local_708[iVar0 /*38*/], Local_709[iVar0 /*10*/], 1);
		}
		else
		{
			iLocal_671[iVar0] = -1;
		}
		if (iLocal_671[iVar0] >= 70)
		{
			Local_708[iVar0 /*38*/].f_6 = 1;
			Local_708[iVar0 /*38*/].f_5 = 1;
		}
		else
		{
			Local_708[iVar0 /*38*/].f_5 = 0;
			if (iVar0 > 0)
			{
				if (Local_708[(iVar0 - 1) /*38*/].f_5 == 1)
				{
					Local_708[iVar0 /*38*/].f_5 = 2;
				}
			}
		}
		iVar0++;
	}
	if (Local_708[0 /*38*/].f_5 == 0)
	{
		Local_708[0 /*38*/].f_5 = 2;
		Local_709[0 /*10*/] = -1f;
		iLocal_671[0] = -1;
	}
	if (iLocal_671[11] != -1)
	{
		bLocal_607 = true;
	}
}

void func_1153()//Position - 0x909CF
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Local_708[iVar0 /*38*/].f_5 = 0;
		Local_709[iVar0 /*10*/] = -1f;
		Local_709[iVar0 /*10*/].f_8 = 0;
		iLocal_671[iVar0] = -1;
		iVar0++;
	}
	Local_708[2 /*38*/].f_5 = 2;
}

void func_1154()//Position - 0x90A1A
{
	StringCopy(&(Local_708[0 /*38*/]), "MGFS_0" /* GXT: Training Take Off */, 16);
	Local_708[0 /*38*/].f_4 = 0;
	Local_708[0 /*38*/].f_5 = 1;
	__LIB_30__.func_681(&(Local_708[0 /*38*/]), 0);
	Local_708[0 /*38*/].f_10 = 0;
	Local_708[0 /*38*/].f_11 = 0;
	Local_708[0 /*38*/].f_21 = { -1041.1238f, -1678.2046f, 82.1664f };
	Local_708[0 /*38*/].f_24 = { -10.6176f, 0f, 168.3095f };
	Local_708[0 /*38*/].f_27 = 36.0423f;
	Local_708[0 /*38*/].f_30 = 32f;
	Local_708[0 /*38*/].f_31 = 50f;
	Local_708[0 /*38*/].f_32 = 60f;
	StringCopy(&(Local_708[1 /*38*/]), "MGFS_1" /* GXT: Runway Landing */, 16);
	Local_708[1 /*38*/].f_4 = 1;
	Local_708[1 /*38*/].f_5 = 1;
	__LIB_30__.func_681(&(Local_708[1 /*38*/]), 0);
	Local_708[1 /*38*/].f_10 = 0;
	Local_708[1 /*38*/].f_11 = 0;
	Local_708[1 /*38*/].f_21 = { -1626.0165f, -2810.988f, 15.3684f };
	Local_708[1 /*38*/].f_24 = { 1.659f, 0f, -52.8546f };
	Local_708[1 /*38*/].f_27 = 31.2089f;
	Local_708[1 /*38*/].f_30 = 35f;
	Local_708[1 /*38*/].f_31 = 55f;
	Local_708[1 /*38*/].f_32 = 70f;
	StringCopy(&(Local_708[2 /*38*/]), "MGFS_2" /* GXT: Inverted Flight */, 16);
	Local_708[2 /*38*/].f_4 = 2;
	Local_708[2 /*38*/].f_5 = 1;
	__LIB_30__.func_681(&(Local_708[2 /*38*/]), 0);
	Local_708[2 /*38*/].f_10 = 0;
	Local_708[2 /*38*/].f_11 = 1;
	Local_708[2 /*38*/].f_30 = 100f;
	Local_708[2 /*38*/].f_31 = 120f;
	Local_708[2 /*38*/].f_32 = 140f;
	StringCopy(&(Local_708[3 /*38*/]), "MGFS_3" /* GXT: Knife Flight */, 16);
	Local_708[3 /*38*/].f_4 = 3;
	Local_708[3 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[3 /*38*/]), 0);
	__LIB_30__.func_944(&(Local_708[3 /*38*/]), 2);
	Local_708[3 /*38*/].f_10 = 0;
	Local_708[3 /*38*/].f_11 = 1;
	Local_708[3 /*38*/].f_30 = 54f;
	Local_708[3 /*38*/].f_31 = 75f;
	Local_708[3 /*38*/].f_32 = 100f;
	StringCopy(&(Local_708[6 /*38*/]), "MGFS_6" /* GXT: Loop the Loop */, 16);
	Local_708[6 /*38*/].f_4 = 6;
	Local_708[6 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[6 /*38*/]), 0);
	__LIB_30__.func_944(&(Local_708[6 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[6 /*38*/]), 3);
	Local_708[6 /*38*/].f_10 = 0;
	Local_708[6 /*38*/].f_11 = 1;
	Local_708[6 /*38*/].f_30 = 95f;
	Local_708[6 /*38*/].f_31 = 100f;
	Local_708[6 /*38*/].f_32 = 125f;
	StringCopy(&(Local_708[4 /*38*/]), "MGFS_4" /* GXT: Flat Hatting */, 16);
	Local_708[4 /*38*/].f_4 = 4;
	Local_708[4 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[4 /*38*/]), 0);
	__LIB_30__.func_681(&(Local_708[4 /*38*/]), 3);
	__LIB_30__.func_944(&(Local_708[4 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[4 /*38*/]), 3);
	Local_708[4 /*38*/].f_10 = 0;
	Local_708[4 /*38*/].f_11 = 0;
	Local_708[4 /*38*/].f_21 = { -1083.5435f, -3394.338f, 37.9642f };
	Local_708[4 /*38*/].f_24 = { -2.3317f, 0f, -57.5431f };
	Local_708[4 /*38*/].f_27 = 36.0423f;
	Local_708[4 /*38*/].f_30 = 135f;
	Local_708[4 /*38*/].f_31 = 155f;
	Local_708[4 /*38*/].f_32 = 180f;
	Local_708[4 /*38*/].f_36 = 21;
	StringCopy(&(Local_708[5 /*38*/]), "MGFS_5" /* GXT: Touch Down */, 16);
	Local_708[5 /*38*/].f_4 = 5;
	Local_708[5 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[5 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[5 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[5 /*38*/]), 3);
	Local_708[5 /*38*/].f_10 = 1;
	Local_708[5 /*38*/].f_11 = 1;
	Local_708[5 /*38*/].f_33 = 10f;
	Local_708[5 /*38*/].f_34 = 45f;
	Local_708[5 /*38*/].f_35 = -1f;
	StringCopy(&(Local_708[7 /*38*/]), "MGFS_7" /* GXT: Helicopter Course */, 16);
	Local_708[7 /*38*/].f_4 = 7;
	Local_708[7 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[7 /*38*/]), 0);
	__LIB_30__.func_681(&(Local_708[7 /*38*/]), 3);
	__LIB_30__.func_944(&(Local_708[7 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[7 /*38*/]), 3);
	Local_708[7 /*38*/].f_10 = 1;
	Local_708[7 /*38*/].f_11 = 0;
	Local_708[7 /*38*/].f_21 = { -1176.5013f, -2806.8284f, 27.4228f };
	Local_708[7 /*38*/].f_24 = { -8.3478f, 0.248f, -145.6417f };
	Local_708[7 /*38*/].f_27 = 31.6506f;
	Local_708[7 /*38*/].f_30 = 160f;
	Local_708[7 /*38*/].f_31 = 195f;
	Local_708[7 /*38*/].f_32 = 225f;
	Local_708[7 /*38*/].f_36 = 21;
	StringCopy(&(Local_708[8 /*38*/]), "MGFS_8" /* GXT: Helicopter Speed Run */, 16);
	Local_708[8 /*38*/].f_4 = 8;
	Local_708[8 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[8 /*38*/]), 0);
	__LIB_30__.func_681(&(Local_708[8 /*38*/]), 3);
	__LIB_30__.func_944(&(Local_708[8 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[8 /*38*/]), 3);
	Local_708[8 /*38*/].f_10 = 1;
	Local_708[8 /*38*/].f_11 = 0;
	Local_708[8 /*38*/].f_21 = { -1222.389f, -2819.4983f, 14.5588f };
	Local_708[8 /*38*/].f_24 = { 2.0598f, 0.248f, -114.4249f };
	Local_708[8 /*38*/].f_27 = 28.7074f;
	Local_708[8 /*38*/].f_30 = 130f;
	Local_708[8 /*38*/].f_31 = 180f;
	Local_708[8 /*38*/].f_32 = 210f;
	Local_708[8 /*38*/].f_36 = 16;
	StringCopy(&(Local_708[9 /*38*/]), "MGFS_9" /* GXT: Skydiving */, 16);
	Local_708[9 /*38*/].f_4 = 9;
	Local_708[9 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[9 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[9 /*38*/]), 6);
	Local_708[9 /*38*/].f_10 = 3;
	Local_708[9 /*38*/].f_11 = 0;
	Local_708[9 /*38*/].f_21 = { -1037.2793f, -2611.4773f, 42.3121f };
	Local_708[9 /*38*/].f_24 = { -4.7096f, 0f, -60.1639f };
	Local_708[9 /*38*/].f_27 = 35.2742f;
	Local_708[9 /*38*/].f_33 = 3f;
	Local_708[9 /*38*/].f_34 = 10f;
	Local_708[9 /*38*/].f_35 = 20f;
	StringCopy(&(Local_708[10 /*38*/]), "MGFS_10" /* GXT: Drop Zone */, 16);
	Local_708[10 /*38*/].f_4 = 10;
	Local_708[10 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[10 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[10 /*38*/]), 9);
	Local_708[10 /*38*/].f_10 = 3;
	Local_708[10 /*38*/].f_11 = 1;
	Local_708[10 /*38*/].f_33 = 0f;
	Local_708[10 /*38*/].f_34 = 7f;
	Local_708[10 /*38*/].f_35 = 20f;
	StringCopy(&(Local_708[11 /*38*/]), "MGFS_11" /* GXT: Earn Your Wings */, 16);
	Local_708[11 /*38*/].f_4 = 11;
	Local_708[11 /*38*/].f_5 = 0;
	__LIB_30__.func_681(&(Local_708[11 /*38*/]), 0);
	__LIB_30__.func_681(&(Local_708[11 /*38*/]), 3);
	__LIB_30__.func_944(&(Local_708[11 /*38*/]), 2);
	__LIB_30__.func_944(&(Local_708[11 /*38*/]), 3);
	Local_708[11 /*38*/].f_10 = 0;
	Local_708[11 /*38*/].f_11 = 0;
	Local_708[11 /*38*/].f_21 = { -1718.0992f, -2953.94f, 39.7682f };
	Local_708[11 /*38*/].f_24 = { 6.1396f, 0f, -46.1617f };
	Local_708[11 /*38*/].f_27 = 35.2742f;
	Local_708[11 /*38*/].f_30 = 170f;
	Local_708[11 /*38*/].f_31 = 195f;
	Local_708[11 /*38*/].f_32 = 220f;
	Local_708[11 /*38*/].f_36 = 19;
}

void func_1157()//Position - 0x911AE
{
	int iVar0;
	if (CAM::DOES_CAM_EXIST(iLocal_66))
	{
		CAM::DESTROY_CAM(iLocal_66, false);
	}
	SYSTEM::SETTIMERA(0);
	STREAMING::NEW_LOAD_SCENE_START(Local_72, __LIB_30__.func_682(Local_71), 1000f, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_707, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 328.5558f);
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && SYSTEM::TIMERA() < 5000)
		{
			func_1172(1);
			SYSTEM::WAIT(0);
		}
		func_1172(1);
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	if (__LIB_0__.func_78(Local_68, 0f, 0f, 0f, 0))
	{
		iVar0 = CAM::GET_RENDERING_CAM();
		iLocal_66 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_70, Local_71, 50f, true, 2);
		Local_68 = { Local_70 };
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	else
	{
		iVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_70.f_0, Local_70.f_1, (Local_70.f_2 + 1000f), Local_71, 50f, true, 2);
		if (CAM::DOES_CAM_EXIST(iVar0))
		{
			CAM::SET_CAM_ACTIVE(iVar0, true);
		}
		if (CAM::IS_CAM_ACTIVE(iVar0))
		{
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		iLocal_66 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_70, Local_71, 50f, false, 2);
		GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_66, iVar0, 500, 1, 1);
		__LIB_30__.func_655();
		GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionOut");
		GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_2828))
	{
		CAM::DESTROY_CAM(iLocal_2828, false);
	}
	if (CAM::DOES_CAM_EXIST(iVar0))
	{
		CAM::SET_CAM_ACTIVE(iVar0, false);
		CAM::DESTROY_CAM(iVar0, true);
	}
}

void func_1158()//Position - 0x91341
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		if (iLocal_656)
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_628, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), Local_629.f_2);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_707, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 328.5558f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_0))
	{
		VEHICLE::DELETE_VEHICLE(&Local_670);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_5))
	{
		PED::DELETE_PED(&(Local_670.f_5));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_501[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(Local_670.f_501[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_506[iVar0]))
		{
			PED::DELETE_PED(&(Local_670.f_506[iVar0]));
		}
		iVar0++;
	}
}

int func_1159(int* iParam0)//Position - 0x9141F
{
	switch (iParam0->f_3)
	{
		case 0:
			if (CAM::DOES_CAM_EXIST(iLocal_66))
			{
				CAM::DESTROY_CAM(iLocal_66, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_67))
			{
				CAM::DESTROY_CAM(iLocal_67, false);
			}
			iLocal_67 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1150.0171f, -2714.254f, 20.6792f, 34.3772f, 0f, 99.9707f, 50f, true, 2);
			__LIB_6__.func_892(iParam0);
			iParam0->f_3 = 1;
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				}
			}
			__LIB_6__.func_892(iParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iParam0->f_3 = 2;
			break;
		case 2:
			if (__LIB_26__.func_294(iParam0, 1f))
			{
				iParam0->f_3 = 3;
			}
			break;
		case 3:
			__LIB_20__.func_176("PAN_SOFT_LONG", &iLocal_73, 0, 0, 0f, 0f, 0f, "HUD_MINI_GAME_SOUNDSET");
			iLocal_66 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_70, Local_71, 50f, false, 2);
			if (CAM::DOES_CAM_EXIST(iLocal_66))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_66, iLocal_67, 5000, 1, 1);
			}
			__LIB_6__.func_892(iParam0);
			iParam0->f_3 = 4;
			break;
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_66))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				iParam0->f_3 = 6;
			}
			break;
		case 6:
			if (CAM::DOES_CAM_EXIST(iLocal_67))
			{
				CAM::DESTROY_CAM(iLocal_67, false);
			}
			return 0;
			break;
	}
	return 1;
}

void func_1160()//Position - 0x915A3
{
	switch (iLocal_664)
	{
		case 0:
			iLocal_664 = 1;
			break;
		case 1:
			iLocal_664 = 2;
			break;
		case 2:
			iLocal_664 = 0;
			break;
	}
}

void func_1162()//Position - 0x915E7
{
	if (func_23() && PLAYER::IS_PLAYER_ONLINE())
	{
		func_1119(iLocal_2830, &(Local_708[iLocal_2830 /*38*/]));
		if (func_22(Local_708[iLocal_2830 /*38*/], 0))
		{
			if (func_1164(iLocal_2830, func_17(Local_670.f_52, Local_670.f_42, 0), SYSTEM::FLOOR((Local_670.f_42 * 1000f)), 0))
			{
				func_417(0);
				if ((iLocal_665 == 2 && !bLocal_1824) && !bLocal_1825)
				{
					func_1163();
				}
			}
		}
		else if (func_1164(iLocal_2830, func_17(Local_670.f_52, Local_670.f_42, 0), 0, Local_670.f_42.f_3))
		{
			func_417(0);
			if ((iLocal_665 == 2 && !bLocal_1824) && !bLocal_1825)
			{
				func_1163();
			}
		}
	}
}

void func_1163()//Position - 0x916C0
{
	__LIB_1__.func_899(&iLocal_1698);
	if (Local_708[Global_112413 /*38*/].f_5 == 0)
	{
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "IB_QUIT" /* GXT: Quit */, 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && !func_23())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 0;
		}
		else
		{
			iLocal_2831 = 0;
		}
	}
	else
	{
		__LIB_31__.func_99(&iLocal_1698, 0, 0, 1, 1);
		__LIB_12__.func_133(&iLocal_1698, "FE_HLP4" /* GXT: Select */, 2, 201, 1, 1, 0);
		__LIB_12__.func_133(&iLocal_1698, "IB_QUIT" /* GXT: Quit */, 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && !func_23())
		{
			__LIB_12__.func_133(&iLocal_1698, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_2831 = 0;
		}
		else
		{
			iLocal_2831 = 0;
		}
	}
	__LIB_30__.func_646(&iLocal_1698, 1);
}

int func_1164(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x917DA
{
	if (Global_2097157.f_1 && !Global_2097157.f_2)
	{
		func_11(iParam0, iParam1, iParam2, fParam3);
		Global_2097157.f_2 = 1;
	}
	if (__LIB_40__.func_551(&uLocal_163))
	{
		Global_2097532 = 1;
		return 1;
	}
	return 0;
}

void func_1172(bool bParam0)//Position - 0x91E9F
{
	if (bParam0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	__LIB_30__.func_685(1, 1);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 12 /*INPUT_WEAPON_WHEEL_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 14 /*INPUT_WEAPON_WHEEL_NEXT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 15 /*INPUT_WEAPON_WHEEL_PREV*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 16 /*INPUT_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 17 /*INPUT_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_1174()//Position - 0x91F4A
{
	if (iLocal_3167)
	{
		switch (iLocal_3161)
		{
			case 0:
				break;
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_3161 = 2;
				}
				else if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(iLocal_3166);
					__LIB_6__.func_892(&iLocal_3163);
				}
				break;
			case 2:
				if (fLocal_3162 > 0f)
				{
					if (!__LIB_0__.func_736(&iLocal_3163))
					{
						__LIB_6__.func_878(&iLocal_3163, 0f);
					}
					else if (__LIB_32__.func_785(&iLocal_3163, fLocal_3162))
					{
						__LIB_0__.func_735(&iLocal_3163);
						iLocal_3161 = 3;
					}
				}
				else if (fLocal_3162 < 0f)
				{
					iLocal_3161 = 0;
				}
				else
				{
					iLocal_3161 = 3;
				}
				break;
			case 3:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					iLocal_3161 = 0;
				}
				else if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(iLocal_3166);
				}
				break;
			}
	}
}

void func_1175()//Position - 0x92011
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_10();
	}
	__LIB_9__.func_485(23, 1);
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	STREAMING::REMOVE_IPL("MG-Flight School 5");
	iLocal_672 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6);
	iLocal_673 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	__LIB_29__.func_694(5);
	PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(false);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	__LIB_0__.func_130();
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	HUD::SET_MINIMAP_COMPONENT(0, false, -1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	HUD::CLEAR_HELP(true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	__LIB_11__.func_172();
	__LIB_10__.func_718(0);
	__LIB_11__.func_147(2, 0);
	__LIB_11__.func_147(1, 0);
	__LIB_11__.func_147(3, 0);
	__LIB_11__.func_147(4, 0);
	__LIB_11__.func_147(5, 0);
	__LIB_11__.func_147(6, 0);
	__LIB_11__.func_147(7, 0);
	Local_670.f_3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_670.f_3, false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_670.f_3, true, true);
		VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(Local_670.f_3, &(Local_670.f_4));
		if (ENTITY::DOES_ENTITY_EXIST(Local_670.f_4))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_670.f_4, true, true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_670.f_3, true);
	}
	if (__LIB_18__.func_173() == 1)
	{
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
	}
	func_345(PLAYER::PLAYER_PED_ID(), 0);
	__LIB_24__.func_948(PLAYER::PLAYER_PED_ID(), &uLocal_3206, 1, -1);
	if (__LIB_18__.func_173() == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 0, 8, 0, 0);
	}
	else if (__LIB_18__.func_173() == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 0, 12, 0, 0);
	}
	else if (__LIB_18__.func_173() == 0)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 0, 21, 0, 0);
	}
	__LIB_8__.func_770(1);
	__LIB_0__.func_296();
}

