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
	struct<3> Local_22 = { 0, 0, 0 } ;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
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
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 5;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 5;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 5;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 5;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 5;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 5;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 5;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 5;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 5;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 5;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 5;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 5;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 5;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 5;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 5;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	float fLocal_185 = 0f;
	float fLocal_186 = 0f;
	var uLocal_187 = 0;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	float fLocal_190 = 0f;
	float fLocal_191 = 0f;
	var uLocal_192 = 0;
	float fLocal_193 = 0f;
	float fLocal_194 = 0f;
	float fLocal_195 = 0f;
	float fLocal_196 = 0f;
	float fLocal_197 = 0f;
	float fLocal_198 = 0f;
	float fLocal_199 = 0f;
	float fLocal_200 = 0f;
	float fLocal_201 = 0f;
	float fLocal_202 = 0f;
	float fLocal_203 = 0f;
	float fLocal_204 = 0f;
	float fLocal_205 = 0f;
	var uLocal_206 = 5;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 5;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 5;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 5;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 5;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 5;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 5;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 5;
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
	var uLocal_281 = 5;
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
	var uLocal_297 = 5;
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
	var uLocal_357 = 5;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 5;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 5;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 5;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 3;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 5;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 5;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 3;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 3;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	struct<61> Local_411 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	struct<16> Local_421[5];
	int iLocal_422 = 0;
	int* iLocal_423 = NULL;
	struct<3> Local_424 = { 0, 0, 0 } ;
	struct<3> Local_425 = { 0, 0, 0 } ;
	char* sLocal_426 = NULL;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int* iLocal_429 = NULL;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	struct<8> Local_441 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_442 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_443 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_444 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_445 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_446 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_447 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_448 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_449 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int* iLocal_450 = NULL;
	int iLocal_451 = 0;
	var uLocal_452 = 16;
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
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	struct<3> Local_620 = { 0, 0, 0 } ;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	char* sLocal_642 = NULL;
	int iLocal_643 = 0;
	char* sLocal_644 = NULL;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	struct<3> Local_648 = { 0, 0, 0 } ;
	struct<3> Local_649 = { 0, 0, 0 } ;
	float fLocal_650 = 0f;
	int iLocal_651 = 0;
	char* sLocal_652 = NULL;
	char* sLocal_653 = NULL;
	char* sLocal_654 = NULL;
	char* sLocal_655 = NULL;
	struct<3> Local_656 = { 0, 0, 0 } ;
	struct<3> Local_657 = { 0, 0, 0 } ;
	struct<3> Local_658 = { 0, 0, 0 } ;
	struct<3> Local_659 = { 0, 0, 0 } ;
	struct<3> Local_660 = { 0, 0, 0 } ;
	float fLocal_661 = 0f;
	struct<3> Local_662 = { 0, 0, 0 } ;
	struct<3> Local_663 = { 0, 0, 0 } ;
	float fLocal_664 = 0f;
	struct<3> Local_665 = { 0, 0, 0 } ;
	struct<3> Local_666 = { 0, 0, 0 } ;
	float fLocal_667 = 0f;
	struct<3> Local_668 = { 0, 0, 0 } ;
	float fLocal_669 = 0f;
	struct<3> Local_670 = { 0, 0, 0 } ;
	float fLocal_671 = 0f;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	float fLocal_675 = 0f;
	struct<61> Local_676 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_41 = __LIB_2__.func_108(64);
	uLocal_42 = __LIB_2__.func_108(63);
	iLocal_43 = joaat("U_M_M_Aldinapoli");
	iLocal_44 = joaat("premier");
	iLocal_60 = 1;
	iLocal_67 = 1;
	iLocal_89 = 1;
	fLocal_185 = 120f;
	fLocal_186 = 0f;
	fLocal_188 = 1f;
	fLocal_189 = 0f;
	fLocal_190 = 1f;
	fLocal_191 = 30f;
	fLocal_193 = 1f;
	fLocal_194 = 5f;
	fLocal_195 = 1f;
	fLocal_196 = 1f;
	fLocal_197 = 100f;
	fLocal_198 = 100f;
	fLocal_199 = 0f;
	fLocal_200 = 7000f;
	fLocal_201 = 0f;
	fLocal_202 = 0f;
	fLocal_203 = 0.3f;
	fLocal_204 = 0.5f;
	fLocal_205 = 50f;
	iLocal_251 = -1;
	iLocal_259 = -1;
	iLocal_260 = -1;
	iLocal_415 = 6;
	Local_424 = { -626.87f, -268.85f, 38f };
	Local_425 = { -642.32f, -238.21f, 36.86f };
	sLocal_426 = "NIG1C";
	iLocal_427 = 1;
	iLocal_431 = joaat("A_F_Y_Hipster_04");
	iLocal_432 = joaat("A_M_Y_Business_01");
	iLocal_433 = joaat("A_C_Rottweiler");
	iLocal_434 = joaat("S_M_M_Trucker_01");
	iLocal_435 = joaat("taxi");
	iLocal_436 = joaat("sentinel");
	iLocal_437 = joaat("habanero");
	iLocal_438 = joaat("landstalker");
	iLocal_439 = joaat("banshee");
	iLocal_440 = joaat("bjxl");
	iLocal_639 = 1;
	iLocal_641 = 1;
	sLocal_642 = "NIG1CBrake";
	iLocal_643 = 102;
	sLocal_644 = "NIG1CCrash";
	iLocal_645 = 101;
	iLocal_646 = 103;
	Local_648 = { -603.9266f, -293.94788f, 34.779064f };
	Local_649 = { -636.4999f, -242.54436f, 39.160896f };
	fLocal_650 = 20f;
	sLocal_652 = "rcmnigel1c";
	sLocal_653 = "misschop_vehicle@back_of_van";
	sLocal_654 = "gestures@f@standing@casual";
	sLocal_655 = "random@nigel@1c";
	Local_656 = { -643.8831f, -108.9039f, 36.936f };
	Local_657 = { -662.3463f, -126.844f, 36.8854f };
	Local_658 = { -627.8564f, -92.9756f, 38.0087f };
	Local_659 = { -606.6835f, -293.85635f, 34.779278f };
	Local_660 = { -642.65594f, -236.12224f, 38.889034f };
	fLocal_661 = 20f;
	Local_662 = { -608.48315f, -286.60696f, 39.750637f };
	Local_663 = { -634.5681f, -246.60818f, 36.346996f };
	fLocal_664 = 20f;
	Local_665 = { -620.5983f, -263.04395f, 38.76393f };
	Local_666 = { -665.5768f, -220.70885f, 35.374737f };
	fLocal_667 = 30f;
	Local_668 = { -641.8198f, -235.57211f, 37.88144f };
	fLocal_669 = 65.317154f;
	Local_670 = { -665.364f, -232.79039f, 36.64935f };
	fLocal_671 = 81.83719f;
	fLocal_675 = 1f;
	Local_411 = { ScriptParam_676 };
	__LIB_20__.func_264(&Local_411);
	__LIB_26__.func_252();
	MISC::SET_MISSION_FLAG(true);
	__LIB_9__.func_485(2, 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FAIL");
		__LIB_38__.func_39(1);
		func_504();
	}
	if (__LIB_0__.func_294())
	{
		Global_78564 = 1;
		iLocal_40 = 0;
		while (!func_501(&Local_411))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1C_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("NIGEL_1C_SCENE");
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	if (__LIB_0__.func_294())
	{
		iVar0 = __LIB_0__.func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				__LIB_0__.func_370(-605.2227f, -291.6463f, 35.7791f, 38.21f, 1, 0);
				func_497(1, 1);
				func_496(1);
				func_484();
				func_478(2);
				break;
			case 1:
				__LIB_0__.func_370(-636.6826f, -97.2394f, 37.1276f, 152.2261f, 1, 0);
				__LIB_41__.func_639(&iVar1, -649.19f, -105.83f, 37.63f, 125.45f, 0, 0, 0, 1, 1, joaat("asterope"), 0, 145, 1);
				__LIB_6__.func_775(0, -1, 1);
				__LIB_0__.func_84(500, 1);
				__LIB_38__.func_158(1, 1, 1);
				__LIB_0__.func_498(789);
				iLocal_623 = 1;
				func_286();
				break;
			default:
				break;
		}
	}
	else if (__LIB_0__.func_2(0))
	{
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.1522f, -292.7876f, 35.7793f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 30.357f);
			SYSTEM::WAIT(0);
			__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
		__LIB_0__.func_84(500, 1);
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_VSTLA", 0);
		__LIB_35__.func_898(Local_411.f_9, 0, 0, 0, 0, 0);
		switch (iLocal_419)
		{
			case 0:
				func_484();
				break;
			case 1:
				func_261();
				break;
			case 2:
				func_259();
				break;
			case 3:
				func_254();
				break;
			case 4:
				func_251();
				break;
			case 5:
				func_242();
				break;
			case 6:
				func_224();
				break;
			case 7:
				func_72();
				break;
			case 8:
				func_66();
				break;
			case 9:
				func_65();
				break;
			case 10:
				func_48();
				break;
		}
		if (iLocal_419 != 10)
		{
			func_46();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x576
{
	char* sVar0;
	int iVar1;
	if (__LIB_1__.func_197(iLocal_422) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_422))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_422, iLocal_618);
			iLocal_638 = 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_422, PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_422))
			{
				PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_422, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			TASK::CLEAR_PED_TASKS(iLocal_422);
			TASK::TASK_SMART_FLEE_PED(iLocal_422, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
		}
		if (!PED::IS_PED_FLEEING(iLocal_422))
		{
			if ((__LIB_36__.func_105(iLocal_422, 1126825984) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_422, PLAYER::PLAYER_PED_ID(), true)) && !__LIB_32__.func_572(iLocal_422, 1, 0, 0, 0))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_422))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_422, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				TASK::CLEAR_PED_TASKS(iLocal_422);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_422, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_SMART_FLEE_PED(iLocal_422, PLAYER::PLAYER_PED_ID(), 80f, -1, false, false);
				iLocal_638 = 1;
			}
		}
		if ((iLocal_638 == 1 && MISC::GET_GAME_TIMER() > iLocal_651) && __LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_422, 10f, 1))
		{
			if (__LIB_0__.func_75())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			switch (iVar1)
			{
				case 0:
					sVar0 = "NIG1C_GUN";
					break;
				case 1:
					sVar0 = "NIG1C_BUMP";
					break;
				case 2:
					sVar0 = "NIG1C_HIT";
					break;
				case 3:
					sVar0 = "NIG1C_SHOCK";
					break;
				default:
					sVar0 = "NIG1C_RUN";
					break;
			}
			if (__LIB_35__.func_536(&uLocal_452, "NIG1CAU", sVar0, 7, __LIB_30__.func_420(), 0, 0))
			{
				iLocal_651 = MISC::GET_GAME_TIMER() + 5000;
				iLocal_637 = 1;
			}
		}
	}
}

void func_46()//Position - 0x18FE
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423))
	{
		if (PED::IS_PED_INJURED(iLocal_423))
		{
			iLocal_414 = 3;
			iLocal_420 = 0;
			iLocal_419 = 10;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_423, PLAYER::PLAYER_PED_ID(), true) || func_47())
		{
			PED::SET_PED_TO_RAGDOLL(iLocal_423, 500, 1000, 0, true, true, false);
			iLocal_414 = 4;
			iLocal_420 = 0;
			iLocal_419 = 10;
		}
		else if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_423, true), 2f) > 0)
		{
			PED::SET_PED_TO_RAGDOLL(iLocal_423, 500, 1000, 0, true, true, false);
			iLocal_414 = 3;
			iLocal_420 = 0;
			iLocal_419 = 10;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_422))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_422, false))
		{
			iLocal_414 = 1;
			iLocal_420 = 0;
			iLocal_419 = 10;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_422, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_414 = 0;
			iLocal_420 = 0;
			iLocal_419 = 10;
		}
		else if (__LIB_10__.func_620(iLocal_422, 1, 8f, 15f) || __LIB_26__.func_246(iLocal_422, 5f, 0, 0))
		{
			if (__LIB_1__.func_197(iLocal_422) && !PED::IS_PED_FLEEING(iLocal_422))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_422))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_422, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_422, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			}
			if (__LIB_1__.func_197(iLocal_423) && !PED::IS_PED_FLEEING(iLocal_423))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_423, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			}
			iLocal_414 = 2;
			iLocal_420 = 0;
			iLocal_419 = 10;
		}
	}
	if ((iLocal_419 == 4 || iLocal_419 == 5) || iLocal_419 == 6)
	{
		if (__LIB_1__.func_197(iLocal_423) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_423, 100f, 1))
			{
				iLocal_414 = 5;
				iLocal_420 = 0;
				iLocal_419 = 10;
			}
			else if (iLocal_623 == 0)
			{
				if (!__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_423, 50f, 1))
				{
					__LIB_0__.func_498(789);
					iLocal_623 = 1;
				}
			}
		}
	}
}

int func_47()//Position - 0x1AFB
{
	if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_423, PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	return 0;
}

void func_48()//Position - 0x1B32
{
	char* sVar0;
	switch (iLocal_420)
	{
		case 0:
			__LIB_6__.func_833();
			if (__LIB_0__.func_75())
			{
				__LIB_0__.func_296();
			}
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			if (HUD::DOES_BLIP_EXIST(iLocal_451))
			{
				HUD::REMOVE_BLIP(&iLocal_451);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FAIL");
			if (!__LIB_1__.func_197(iLocal_423))
			{
				iLocal_414 = 3;
			}
			switch (iLocal_414)
			{
				case 1:
					sVar0 = "N1C_F_EXMOD";
					break;
				case 3:
					sVar0 = "N1C_F_EXDOG";
					break;
				case 0:
					sVar0 = "N1C_F_MOD";
					break;
				case 2:
					sVar0 = "N1_C_F_THREAT";
					break;
				case 4:
					sVar0 = "N1C_F_DOG";
					break;
				case 5:
					sVar0 = "N1C_F_LOST";
					break;
				default:
					break;
			}
			if (iLocal_414 == 6)
			{
				__LIB_38__.func_39(1);
			}
			else
			{
				__LIB_39__.func_861(sVar0, 1);
			}
			iLocal_420 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_54();
				if (__LIB_0__.func_77(0))
				{
					__LIB_6__.func_849(0);
				}
				if (__LIB_0__.func_75())
				{
					__LIB_0__.func_296();
				}
				func_504();
			}
			break;
	}
}

void func_54()//Position - 0x1DAA
{
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	__LIB_0__.func_0(&iLocal_422);
	__LIB_0__.func_0(&iLocal_423);
	__LIB_0__.func_0(&(Local_421[0 /*16*/]));
	__LIB_0__.func_0(&(Local_421[1 /*16*/]));
	__LIB_0__.func_0(&(Local_421[2 /*16*/]));
	__LIB_0__.func_0(&(Local_421[3 /*16*/]));
	__LIB_0__.func_0(&(Local_421[4 /*16*/]));
	__LIB_0__.func_0(&iLocal_429);
	func_57(Local_442);
	func_57(Local_441);
	func_57(Local_443);
	func_57(Local_445);
	func_57(Local_446);
	func_57(Local_447);
	func_57(Local_448);
	func_57(Local_449);
	func_57(Local_444);
	__LIB_11__.func_32(&iLocal_450);
}

void func_57(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1F28
{
	__LIB_0__.func_0(&(Param0.f_1));
	__LIB_11__.func_32(&Param0);
}

void func_65()//Position - 0x2043
{
	if (iLocal_629 == 0)
	{
		if (__LIB_0__.func_75())
		{
			iLocal_629 = 1;
		}
	}
	if (iLocal_629 == 1)
	{
		if (!__LIB_0__.func_75())
		{
			HUD::CLEAR_PRINTS();
			func_286();
		}
	}
}

void func_66()//Position - 0x2074
{
	switch (iLocal_420)
	{
		case 0:
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			}
			if (__LIB_1__.func_197(iLocal_423))
			{
				TASK::CLEAR_PED_TASKS(iLocal_423);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423, 0.5f, 1f, 0f), 2.5f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -650.2209f, -120.7035f, 36.832f, 2.5f, 20000, 1f, 0, 40000f);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 50f, -1, true, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_423, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1C_SCENE"))
			{
				AUDIO::STOP_AUDIO_SCENE("NIGEL_1C_SCENE");
			}
			if (__LIB_1__.func_197(iLocal_422))
			{
				if (__LIB_8__.func_538(iLocal_422, PLAYER::PLAYER_PED_ID()) < 30f)
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_422, iLocal_423, 0f, 0f, 0f, 2f, -1, 3f, true);
				}
			}
			iLocal_673 = -1;
			iLocal_420 = 1;
			break;
		case 1:
			if (!__LIB_0__.func_75())
			{
				if (iLocal_673 < 0)
				{
					iLocal_673 = MISC::GET_GAME_TIMER() + 3000;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_673)
				{
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					__LIB_0__.func_202(&uLocal_452, 3);
					__LIB_0__.func_202(&uLocal_452, 4);
					__LIB_0__.func_202(&uLocal_452, 5);
					__LIB_0__.func_202(&uLocal_452, 6);
					__LIB_0__.func_203(&uLocal_452, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
					__LIB_0__.func_203(&uLocal_452, 3, 0, "NIGEL", 0, 1);
					__LIB_0__.func_203(&uLocal_452, 4, 0, "MRSTHORNHILL", 0, 1);
					if (__LIB_38__.func_30(&uLocal_452, 64, "NIG1CAU", "NIG1C_OUT", 9, 1, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 1);
						iLocal_419 = 9;
					}
				}
			}
			break;
	}
}

void func_72()//Position - 0x23AF
{
	struct<3> Var0;
	switch (iLocal_420)
	{
		case 0:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 1);
			func_220();
			__LIB_0__.func_203(&uLocal_452, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_665, Local_666, fLocal_667, false, true, 0))
			{
				__LIB_10__.func_696(500, 1);
				__LIB_39__.func_484(Local_665, Local_666, fLocal_667, Local_670, fLocal_671, __LIB_9__.func_996(), 1, 1, 1, 0, 0);
				func_91(Local_668, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				__LIB_10__.func_698(PLAYER::PLAYER_PED_ID(), Local_668);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_669);
			}
			else
			{
				__LIB_39__.func_484(-636.6932f, -96.5854f, 36.547657f, -628.8387f, -97.43069f, 38.069145f, 7f, -641.35f, -99.5f, 37.62f, 135.52f, __LIB_9__.func_996(), 1, 1, 1, 0, 0);
				func_91(-636.7341f, -99.131f, 37.0476f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			}
			STREAMING::REQUEST_ANIM_DICT(sLocal_655);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_655))
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_1__.func_197(iLocal_423))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_423);
			}
			AUDIO::STOP_SCRIPTED_CONVERSATION(true);
			if (HUD::DOES_BLIP_EXIST(iLocal_451))
			{
				HUD::REMOVE_BLIP(&iLocal_451);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			if (__LIB_1__.func_197(iLocal_423))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				__LIB_10__.func_698(PLAYER::PLAYER_PED_ID(), Var0);
				iLocal_430 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_430, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_430, false);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_430, sLocal_655, "take_collar_trevor", 8f, -4f, 1, 16, 1000f, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_423, iLocal_430, sLocal_655, "take_collar_dog", 8f, -4f, 1, 16, 1000f, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				iLocal_622 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_622, iLocal_430, "take_collar_cam", sLocal_655);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			__LIB_0__.func_84(500, 1);
			while (!__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_COLLAR", "NIG1C_COLLAR_2", 7, 0, 0))
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				__LIB_6__.func_833();
				SYSTEM::WAIT(0);
			}
			__LIB_0__.func_0(&iLocal_422);
			iLocal_633 = 0;
			func_87(1);
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_END");
			iLocal_420 = 1;
			break;
		case 1:
			if (((iLocal_633 == 0 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_430)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_430) >= 0.75f) && __LIB_1__.func_197(iLocal_423))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "COLLAR", iLocal_423, "NIGEL_1C_SOUNDSET", false, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_423, 3, 1, 0, 0);
				iLocal_633 = 1;
			}
			else if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_430) && !__LIB_0__.func_75())
			{
				if (__LIB_36__.func_42(&uLocal_452, "NIG1CAU", "NIG1C_COLLAR", "NIG1C_COLLAR_3", 7, 0, 0))
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
					if (CAM::DOES_CAM_EXIST(iLocal_622))
					{
						CAM::SET_CAM_ACTIVE(iLocal_622, false);
						CAM::DESTROY_CAM(iLocal_622, false);
					}
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					__LIB_32__.func_574(1, 1, 1, 1);
					iLocal_420 = 0;
					iLocal_419 = 8;
				}
			}
			if (__LIB_6__.func_841(1000))
			{
				iLocal_420 = 2;
			}
			break;
		case 2:
			__LIB_10__.func_696(500, 1);
			func_91(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_430))
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_430, 1f);
			}
			SYSTEM::WAIT(3000);
			if (__LIB_0__.func_75())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (__LIB_1__.func_197(iLocal_423))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_423, 3, 1, 0, 0);
			}
			func_73(0, 1);
			iLocal_420 = 0;
			iLocal_419 = 8;
			__LIB_32__.func_574(1, 1, 1, 1);
			__LIB_0__.func_84(500, 1);
			break;
	}
}

void func_73(bool bParam0, bool bParam1)//Position - 0x2782
{
	CAM::RENDER_SCRIPT_CAMS(false, bParam0, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_622))
	{
		CAM::SET_CAM_ACTIVE(iLocal_622, false);
		CAM::DESTROY_CAM(iLocal_622, false);
	}
	if (bParam1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5f, 1f);
	}
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	__LIB_32__.func_574(1, 1, 1, 1);
}

void func_87(bool bParam0)//Position - 0x2BEB
{
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-533.3358f, -316.634f, 30.996708f, -696.2714f, -30.989979f, 45.693817f, 250f, true, bParam0, true);
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f, 0);
	}
	else
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_656, 50f, false, false, false, false, false, false, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-698.44f, -333.93f, 33f, -532.67f, -44.35f, 40f, false, true);
		PED::SET_PED_NON_CREATION_AREA(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f);
		PED::ADD_SCENARIO_BLOCKING_AREA(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f, false, true, true, true);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_657, Local_658, false, true, true, true);
		PED::ADD_SCENARIO_BLOCKING_AREA(-714.4662f, -233.7738f, 33.0351f, -611.951f, -89.9566f, 57.408f, false, true, true, true);
		PATHFIND::SET_PED_PATHS_IN_AREA(-654.77f, -100.04f, 44.87f, -623.99f, -165.2f, 36.78f, false, 0);
		MISC::CLEAR_AREA_OF_PEDS(-640.00476f, -140.21254f, 36.37851f, 24.25f, 0);
		MISC::CLEAR_AREA_OF_PEDS(Local_656, 50f, 0);
	}
}

void func_91(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x2E15
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__.func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__.func_173())
			{
				case 0:
					if (func_208(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_93(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_208(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_93(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_208(PLAYER::PLAYER_PED_ID(), 8, 1) || func_208(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_93(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_208(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_93(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam8)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, false);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, true);
		if (bParam10)
		{
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
		}
		HUD::CLEAR_PRINTS();
		if (iParam9 == 1)
		{
			HUD::CLEAR_HELP(true);
		}
		if (iParam1 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_37 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_37 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

int func_93(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2FE6
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
										func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_102(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_101(iParam0, iVar10, &iVar4, 1))
							{
								func_93(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_93(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_93(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_93(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_93(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_93(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_93(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_93(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_101(iParam0, iVar10, &iVar4, 0))
		{
			func_93(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_94(iParam0, iVar10, &iVar4))
		{
			func_93(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_94(int iParam0, int iParam1, int iParam2)//Position - 0x37F6
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_208(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x40EB
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_208(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2)//Position - 0x4181
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
				if (func_208(iParam0, iParam1, iVar0))
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
				if (func_208(iParam0, iParam1, iVar1))
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

int func_208(int iParam0, int iParam1, int iParam2)//Position - 0x20E0A
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
				if (!func_208(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_208(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_208(iParam0, 14, iVar4))
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
			if (!func_208(iParam0, 14, uVar8[iVar7]))
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

void func_220()//Position - 0x21A89
{
	func_223(Local_441);
	func_223(Local_442);
	func_223(Local_443);
	func_223(Local_445);
	func_221(Local_444);
	func_221(Local_447);
	func_221(Local_448);
	func_221(Local_449);
	func_221(Local_446);
}

void func_221(struct<8> Param0)//Position - 0x21AEB
{
	if (func_222(Param0))
	{
		if (PED::IS_PED_IN_VEHICLE(Param0.f_1, Param0.f_0, false))
		{
			TASK::CLEAR_PED_TASKS(Param0.f_1);
			TASK::TASK_VEHICLE_DRIVE_WANDER(Param0.f_1, Param0.f_0, 10f, 786599);
		}
	}
}

int func_222(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x21B28
{
	if (__LIB_1__.func_197(Param0.f_1) && __LIB_1__.func_183(Param0.f_0))
	{
		return 1;
	}
	return 0;
}

void func_223(struct<8> Param0)//Position - 0x21B4B
{
	if (func_222(Param0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0.f_0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Param0.f_0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(Param0.f_1, Param0.f_0, 10f, 786599);
		}
	}
}

void func_224()//Position - 0x21B81
{
	float fVar0;
	switch (iLocal_420)
	{
		case 0:
			if (__LIB_1__.func_197(iLocal_423))
			{
				TASK::CLEAR_PED_TASKS(iLocal_423);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, -641.7725f, -104.2859f, 37.0147f, 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_653, "chop_growl", 8f, -8f, -1, 9, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_423, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_423, true, false);
			}
			func_87(1);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 1);
			__LIB_0__.func_203(&uLocal_452, 6, iLocal_423, "MrMuffyCakes", 0, 1);
			iLocal_420 = 1;
			break;
		case 1:
			__LIB_10__.func_618(iLocal_451, iLocal_423, 100f, 0.7f, 0);
			func_240();
			func_235();
			func_234();
			func_232();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_423))
				{
					PED::SET_PED_TO_RAGDOLL(iLocal_423, 500, 1000, 0, false, false, false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_423, 0, 0);
				}
			}
			if (func_230())
			{
				func_227();
			}
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) == 1f)
			{
				fVar0 = 1f;
			}
			else
			{
				fVar0 = 2f;
			}
			if (func_225(fVar0) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_420 = 0;
				iLocal_419 = 7;
			}
			break;
	}
}

int func_225(float fParam0)//Position - 0x21CC9
{
	struct<3> Var0;
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_197(iLocal_423))
	{
		if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_423, Local_662, Local_663, fLocal_664, false, true, 0) && __LIB_11__.func_326(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423, 0f, 1f, 0f), 1.5f)) && !ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_423))
		{
			PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 500, 1000, 0, false, false, false);
			PED::SET_PED_RAGDOLL_FORCE_FALL(PLAYER::PLAYER_PED_ID());
			__LIB_35__.func_536(&uLocal_452, "NIG1CAU", "NIG1C_CLOSE", 7, __LIB_30__.func_420(), 0, 0);
			return 0;
		}
		if (__LIB_0__.func_508(iLocal_423, PLAYER::PLAYER_PED_ID(), (0.8f + fParam0), 1))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_423, true)) };
			if (Var0.f_1 > 0f && Var0.f_2 < 0.1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_227()//Position - 0x21E33
{
	if (Local_421[0 /*16*/].f_14)
	{
		if (iLocal_630 == 0)
		{
			if ((__LIB_1__.func_197(Local_421[0 /*16*/]) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FLEEING(Local_421[0 /*16*/]))
			{
				if (func_229() || __LIB_0__.func_508(Local_421[0 /*16*/], PLAYER::PLAYER_PED_ID(), 5f, 1))
				{
					if (__LIB_0__.func_508(Local_421[0 /*16*/], PLAYER::PLAYER_PED_ID(), 12f, 1))
					{
						__LIB_0__.func_203(&uLocal_452, 5, Local_421[0 /*16*/], "ShockedHipsterFemale", 0, 1);
						if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_1", 7, __LIB_30__.func_420(), 0))
						{
							TASK::CLEAR_PED_TASKS(Local_421[0 /*16*/]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_421[0 /*16*/].f_9, 1f, 20000, 0.25f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
							TASK::TASK_PERFORM_SEQUENCE(Local_421[0 /*16*/], iLocal_617);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
							iLocal_630 = 1;
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_421[0 /*16*/], 5000, 0, 2);
						}
					}
				}
			}
		}
		else if (iLocal_631 == 0)
		{
			if (!__LIB_0__.func_75())
			{
				if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_2", 7, __LIB_30__.func_420(), 0))
				{
					iLocal_631 = 1;
				}
			}
		}
	}
	if (iLocal_632 == 1)
	{
		if ((__LIB_1__.func_197(Local_421[2 /*16*/]) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FLEEING(Local_421[2 /*16*/]))
		{
			__LIB_0__.func_203(&uLocal_452, 4, Local_421[2 /*16*/], "ShockedBusinessMan", 0, 1);
			if (__LIB_0__.func_508(Local_421[2 /*16*/], PLAYER::PLAYER_PED_ID(), 50f, 1))
			{
				if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_3", 7, __LIB_30__.func_420(), 0))
				{
					iLocal_632 = 0;
				}
			}
			else if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_3", 7, 1, 0))
			{
				iLocal_632 = 0;
			}
		}
	}
	if (Local_421[1 /*16*/].f_14 == 1)
	{
		if (iLocal_636 == 1)
		{
			if ((__LIB_1__.func_197(Local_421[1 /*16*/]) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FLEEING(Local_421[1 /*16*/]))
			{
				if (__LIB_0__.func_508(Local_421[1 /*16*/], PLAYER::PLAYER_PED_ID(), 8f, 1))
				{
					if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_4", 7, __LIB_30__.func_420(), 0))
					{
						TASK::CLEAR_PED_TASKS(Local_421[1 /*16*/]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_421[1 /*16*/].f_9, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_421[1 /*16*/], iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_421[1 /*16*/], 3500, 0, 2);
						iLocal_636 = 0;
					}
				}
			}
		}
	}
	if (iLocal_634 == 1)
	{
		if (func_228() > 40)
		{
			if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_DOG", "NIG1C_DOG_5", 7, __LIB_30__.func_420(), 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_423, -1, 0, 2);
				iLocal_634 = 0;
				iLocal_635 = 1;
			}
		}
	}
	if (iLocal_635)
	{
		if (__LIB_1__.func_197(iLocal_423) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), iLocal_423, 10f, 1))
			{
				if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_COLLAR", "NIG1C_COLLAR_1", 7, __LIB_30__.func_420(), 0))
				{
					iLocal_635 = 0;
				}
			}
		}
	}
}

int func_228()//Position - 0x22197
{
	var uVar0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_426, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &uVar0);
	return uVar0;
}

int func_229()//Position - 0x221B4
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_421[0 /*16*/], sLocal_652, "avoid_rf", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_421[0 /*16*/], sLocal_652, "avoid_rb", 3))
	{
		return 1;
	}
	return 0;
}

int func_230()//Position - 0x221EF
{
	if (!__LIB_0__.func_75())
	{
		if (!__LIB_0__.func_405("N1C_WRN_DOG", 0, 0))
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

void func_232()//Position - 0x22237
{
	if (iLocal_628 == 0)
	{
		if (func_222(Local_445) && __LIB_1__.func_197(iLocal_423))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_445.f_0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_445.f_0, fLocal_675);
				if (func_233() > 35)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_445.f_0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(2, "NIG1C_COMET2");
					TASK::CLEAR_PED_TASKS(Local_445.f_1);
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_445.f_1, Local_445.f_0, 20f, 139);
					if (func_222(Local_447))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(Local_447.f_1, Local_447.f_0, 15f, 139);
					}
					iLocal_628 = 1;
				}
				if (iLocal_626 == 0)
				{
					if (__LIB_0__.func_508(Local_445.f_0, iLocal_423, 6f, 1))
					{
						VEHICLE::START_VEHICLE_HORN(Local_445.f_0, 4000, 0, false);
						iLocal_626 = 1;
					}
				}
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_423))
			{
				if (func_233() == 19)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_445.f_0, 2, "NIG1C_COMET2", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_445.f_0, 4400f);
					TASK::TASK_LOOK_AT_ENTITY(Local_445.f_1, iLocal_423, -1, 0, 2);
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_445.f_0, true);
				}
			}
		}
	}
}

int func_233()//Position - 0x22338
{
	var uVar0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_426, ENTITY::GET_ENTITY_COORDS(iLocal_423, true), &uVar0);
	return uVar0;
}

void func_234()//Position - 0x22354
{
	if (iLocal_627 == 0)
	{
		if (func_222(Local_443) && __LIB_1__.func_197(iLocal_423))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_443.f_0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_443.f_0, fLocal_675);
				if (func_233() > 32)
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_443.f_0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1C_COMET");
					TASK::CLEAR_PED_TASKS(Local_443.f_1);
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_443.f_1, Local_443.f_0, 20f, 786599);
					iLocal_627 = 1;
				}
				if (iLocal_625 == 0)
				{
					if (__LIB_0__.func_508(Local_443.f_0, iLocal_423, 6f, 1))
					{
						VEHICLE::START_VEHICLE_HORN(Local_443.f_0, 3000, 0, false);
						iLocal_625 = 1;
					}
				}
			}
			else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_423))
			{
				if (func_233() > 25)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_443.f_0, 1, "NIG1C_COMET", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_443.f_0, 2500f);
					TASK::TASK_LOOK_AT_ENTITY(Local_443.f_1, iLocal_423, -1, 0, 2);
					if (__LIB_1__.func_197(iLocal_429))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_429, iLocal_423, -1, 0, 2);
					}
				}
			}
			VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_443.f_0, true);
		}
	}
}

void func_235()//Position - 0x2244E
{
	if (iLocal_412 != 6)
	{
		if ((func_222(Local_442) && func_222(Local_441)) && func_222(Local_446))
		{
			if (iLocal_624 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_423, -662.7688f, -208.31711f, 35.493214f, -674.6289f, -214.65187f, 38.80591f, 6.5f, false, true, 0))
				{
					VEHICLE::START_VEHICLE_HORN(Local_441.f_0, 1500, 0, false);
					TASK::TASK_LOOK_AT_ENTITY(Local_441.f_1, iLocal_423, 5000, 0, 2);
					if (__LIB_1__.func_197(Local_421[2 /*16*/]))
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(Local_421[2 /*16*/]))
						{
							PED::SET_PED_PANIC_EXIT_SCENARIO(Local_421[2 /*16*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_PAUSE(0, 500);
						TASK::TASK_PLAY_ANIM(0, sLocal_652, "reaction_backward_big_intro_c", 8f, -8f, -1, 8192, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_652, "react_big_variations_a", 8f, -8f, -1, 8192, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_652, "exit_to_generic", 8f, -8f, -1, 8192, 0f, false, false, false);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_421[2 /*16*/], iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
					}
					iLocal_624 = 1;
				}
			}
			switch (iLocal_412)
			{
				case 0:
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_423))
					{
						if (func_233() > 8)
						{
							iLocal_412 = 1;
						}
					}
					break;
				case 1:
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_441.f_0, iLocal_643, sLocal_642, true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_442.f_0, iLocal_645, sLocal_644, true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_446.f_0, iLocal_646, sLocal_644, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_441.f_0, 2000f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_442.f_0, 2650f);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_446.f_0, 6000f);
					iLocal_412 = 2;
					break;
				case 2:
					if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_442.f_0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_446.f_0)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_441.f_0))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_441.f_0, 0.7f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_442.f_0, 0.7f);
						VEHICLE::SET_PLAYBACK_SPEED(Local_446.f_0, 0.85f);
						if (__LIB_0__.func_508(Local_442.f_0, Local_446.f_0, 7f, 1))
						{
							iLocal_412 = 3;
						}
					}
					break;
				case 3:
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_442.f_0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_645, sLocal_644);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_446.f_0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_646, sLocal_644);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_441.f_0);
					VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_643, sLocal_642);
					TASK::TASK_VEHICLE_MISSION(Local_446.f_1, Local_446.f_0, Local_442.f_0, 2, 20f, 262144, 0.5f, 2f, true);
					TASK::TASK_VEHICLE_MISSION(Local_442.f_1, Local_442.f_0, Local_446.f_0, 2, 20f, 262144, 0.5f, 2f, true);
					VEHICLE::START_VEHICLE_HORN(Local_442.f_0, 800, 0, false);
					iLocal_412 = 4;
					break;
				case 4:
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_442.f_0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_446.f_0, 5, 1000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_446.f_1, iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_VEHICLE_TEMP_ACTION(Local_442.f_1, Local_442.f_0, 4, 1000);
						VEHICLE::SMASH_VEHICLE_WINDOW(Local_442.f_0, 2);
						VEHICLE::SMASH_VEHICLE_WINDOW(Local_442.f_0, 0);
						iLocal_632 = 1;
						EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(81 /*EVENT_SHOCKING_CAR_PILE_UP*/, Local_446.f_0, -1f);
						if (func_222(Local_449))
						{
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_449.f_1, Local_449.f_0, -567.85f, -288.8f, 34.08f, 12f, 0, iLocal_437, 24, 5f, 5f);
						}
						iLocal_412 = 5;
					}
					break;
				case 5:
					if (ENTITY::GET_ENTITY_SPEED(Local_442.f_0) < 0.5f && ENTITY::GET_ENTITY_SPEED(Local_446.f_0) < 0.5f)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_PAUSE(0, 1000);
						TASK::TASK_LEAVE_VEHICLE(0, Local_446.f_0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_442.f_1, -1f, 1f, 0f), 1.3f, 20000, 0.25f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_442.f_1, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_652, "react_big_variations_a", 8f, -8f, -1, 8192, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_652, "exit_to_generic", 8f, -8f, -1, 8192, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_446.f_1, iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_LEAVE_VEHICLE(0, Local_441.f_0, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_446.f_0, 2500);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_442.f_1, -1f, 1f, 0f), 1.2f, 20000, 1f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_442.f_1, 0);
						TASK::TASK_PLAY_ANIM(0, sLocal_652, "react_big_variations_a", 8f, -8f, -1, 8192, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, sLocal_652, "exit_to_generic", 8f, -8f, -1, 8192, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_441.f_1, iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
						ENTITY::SET_ENTITY_HEALTH(Local_442.f_1, 0, 0);
						iLocal_417 = 0;
						iLocal_418 = 0;
						iLocal_412 = 6;
					}
					break;
				case 6:
					break;
			}
		}
		else if (func_222(Local_449))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_423))
			{
				if (func_233() > 19)
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_449.f_1, Local_449.f_0, -567.85f, -288.8f, 34.08f, 12f, 0, iLocal_437, 24, 5f, 5f);
					iLocal_412 = 6;
				}
			}
		}
	}
	else if ((__LIB_1__.func_183(Local_442.f_0) && __LIB_1__.func_183(Local_441.f_0)) && __LIB_1__.func_183(Local_446.f_0))
	{
		VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_442.f_0, true);
		VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_441.f_0, true);
		VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_446.f_0, true);
		func_236();
	}
}

void func_236()//Position - 0x229CB
{
	if ((__LIB_1__.func_197(Local_446.f_1) && __LIB_0__.func_121(Local_446.f_0)) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_417)
		{
			case 0:
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_442.f_0, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_441.f_0, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_446.f_0, false))
				{
					TASK::CLEAR_PED_TASKS(Local_446.f_1);
					if (func_239() == joaat("WEAPON_UNARMED"))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_446.f_1, 5, true);
					}
					TASK::TASK_COMBAT_PED(Local_446.f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_417 = 1;
				}
				if (PED::IS_PED_FLEEING(Local_446.f_1))
				{
					iLocal_417 = 4;
				}
				break;
			case 1:
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_446.f_0, false))
				{
					if (((!__LIB_0__.func_508(Local_446.f_1, Local_446.f_0, 20f, 1) && !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_446.f_0, 20f, 1)) && !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_446.f_1, 10f, 1)) && !PED::IS_PED_FLEEING(Local_446.f_1))
					{
						TASK::CLEAR_PED_TASKS(Local_446.f_1);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_446.f_1, PLAYER::PLAYER_PED_ID(), -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_446.f_1, 17, true);
						iLocal_417 = 2;
					}
				}
				if (PED::IS_PED_FLEEING(Local_446.f_1))
				{
					iLocal_417 = 4;
				}
				if (__LIB_39__.func_918(Local_446.f_1, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_446.f_1, 5, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_446.f_1, 17, true);
					TASK::CLEAR_PED_TASKS(Local_446.f_1);
					TASK::TASK_SMART_FLEE_PED(Local_446.f_1, PLAYER::PLAYER_PED_ID(), 60f, -1, false, false);
					iLocal_417 = 4;
				}
				break;
			case 2:
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_446.f_1, 1) < 8f)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_446.f_1, 5, true);
					TASK::TASK_COMBAT_PED(Local_446.f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_417 = 1;
				}
				if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_446.f_1, 1) > 20f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
					TASK::TASK_ENTER_VEHICLE(0, Local_446.f_0, -1, -1, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
					TASK::TASK_PERFORM_SEQUENCE(Local_446.f_1, iLocal_617);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
					iLocal_417 = 3;
				}
				if (PED::IS_PED_FLEEING(Local_446.f_1))
				{
					iLocal_417 = 4;
				}
				break;
			case 3:
				if (__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_446.f_1, 8f, 1))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_446.f_1, 5, true);
					TASK::TASK_COMBAT_PED(Local_446.f_1, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_417 = 1;
				}
				if (PED::IS_PED_FLEEING(Local_446.f_1))
				{
					iLocal_417 = 4;
				}
				break;
			}
	}
	if (__LIB_1__.func_197(Local_441.f_1))
	{
		switch (iLocal_418)
		{
			case 0:
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_442.f_0, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_441.f_0, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_446.f_0, false))
				{
					TASK::CLEAR_PED_TASKS(Local_441.f_1);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_441.f_1, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_418 = 1;
				}
				break;
			case 1:
				break;
			case 2:
				break;
			}
	}
}

int func_239()//Position - 0x22DEA
{
	var uVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &uVar0, true);
	return uVar0;
}

void func_240()//Position - 0x22E00
{
	if (func_222(Local_444) && __LIB_1__.func_197(iLocal_423))
	{
		switch (iLocal_413)
		{
			case 0:
				break;
			case 1:
				ENTITY::SET_ENTITY_COORDS(Local_444.f_0, -616.56f, -176.6f, 37.26f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_444.f_0, 117.29f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_444.f_0, 5f);
				if (__LIB_1__.func_183(Local_442.f_0))
				{
					TASK::TASK_VEHICLE_MISSION(Local_444.f_1, Local_444.f_0, Local_442.f_0, 12, 15f, 262144, 20f, 5f, true);
				}
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_444.f_0, 10f);
				iLocal_413 = 2;
				break;
			case 2:
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_444.f_1, 15f);
				if (__LIB_0__.func_508(iLocal_423, Local_444.f_1, 18f, 1))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 0);
					iLocal_413 = 3;
				}
				break;
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_444.f_0, 10, 500);
				TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_444.f_0, 4, 1000);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_LEAVE_VEHICLE(0, Local_444.f_0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(Local_444.f_1, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
				VEHICLE::START_VEHICLE_HORN(Local_444.f_0, 1000, 0, false);
				iLocal_413 = 4;
				break;
			case 4:
				if ((TASK::GET_SCRIPT_TASK_STATUS(Local_444.f_1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1 && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_444.f_0, -1, false)) && !PED::IS_PED_FLEEING(Local_444.f_1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_444.f_0, -2f, 2f, 0f), 2f, 20000, 0.25f, 0, 40000f);
					if (__LIB_1__.func_197(Local_441.f_1))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_441.f_1, 5000);
					}
					else
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
					}
					TASK::TASK_ENTER_VEHICLE(0, Local_444.f_0, -1, -1, 1.8f, 9, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_444.f_0, 10f, 131);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
					TASK::TASK_PERFORM_SEQUENCE(Local_444.f_1, iLocal_617);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
					iLocal_413 = 5;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_444.f_0, false) && !PED::IS_PED_FLEEING(Local_444.f_1))
				{
					TASK::CLEAR_PED_TASKS(Local_444.f_1);
					iLocal_413 = 6;
				}
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_444.f_0, true);
				break;
			case 5:
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_444.f_0, false) && !PED::IS_PED_FLEEING(Local_444.f_1))
				{
					TASK::CLEAR_PED_TASKS(Local_444.f_1);
					iLocal_413 = 6;
				}
				break;
			case 6:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
				TASK::TASK_ENTER_VEHICLE(0, Local_444.f_0, -1, -1, 2.5f, 9, 0);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_444.f_0, PLAYER::PLAYER_PED_ID(), 8, 20f, 20, 100f, 5f, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(Local_444.f_1, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
				iLocal_413 = 7;
				break;
			case 7:
				break;
			}
	}
}

void func_242()//Position - 0x2323E
{
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	switch (iLocal_420)
	{
		case 0:
			func_250();
			iLocal_628 = 0;
			iLocal_627 = 0;
			iLocal_624 = 0;
			iLocal_630 = 0;
			iLocal_631 = 0;
			iLocal_632 = 0;
			iLocal_634 = 0;
			iLocal_636 = 0;
			MISC::CLEAR_AREA_OF_VEHICLES(-628.8963f, -183.17413f, 36.76265f, 50f, true, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-679.2649f, -250.06047f, 35.60568f, 21.75f, true, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-655.583f, -298.5198f, 34.45316f, 39.75f, true, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-670.7004f, -99.16148f, 36.779835f, 60f, true, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-561.3182f, -153.08977f, 36.634796f, 50f, true, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-590.6263f, -247.09229f, 34.69418f, 35f, true, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_656, 50f, false, false, false, false, false, false, 0);
			if (!func_249())
			{
				return;
			}
			iLocal_412 = 0;
			iLocal_413 = 0;
			func_248(0);
			func_248(1);
			func_248(2);
			func_248(4);
			if (__LIB_1__.func_197(Local_421[0 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_421[0 /*16*/], "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, true);
			}
			if (__LIB_1__.func_197(Local_421[2 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_421[2 /*16*/], "WORLD_HUMAN_WINDOW_SHOP_BROWSE", 0, true);
			}
			if (__LIB_1__.func_197(Local_421[4 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_421[4 /*16*/], "WORLD_HUMAN_STAND_MOBILE", 0, false);
			}
			if (__LIB_1__.func_197(Local_421[1 /*16*/]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(Local_421[1 /*16*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
				PED::SET_PED_COMPONENT_VARIATION(Local_421[1 /*16*/], 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_421[1 /*16*/], 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_421[1 /*16*/], 3, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(Local_421[1 /*16*/], 4, 0, 0, 0);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_435);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_436);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_437);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_440);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_439);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_432);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_434);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_438);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_431);
			if (func_222(Local_448))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_448.f_0, -758.84f, -115.64f, 36.89f, 12f, 0, Local_448.f_2, 17, 1f, 1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(Local_448.f_1, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
			}
			if (func_222(Local_447))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_447.f_0, -655.18f, -202.16f, 36.43f, 18f, 0, iLocal_440, 17, 1f, 1f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_447.f_0, -643.56f, -196.16f, 36.58f, 10f, 0, iLocal_440, 17, 1f, 1f);
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_447.f_0, -633.4f, -191.1f, 36.67f, 5f, 0, iLocal_440, 17, 1f, 1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(Local_447.f_1, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
			}
			Local_421[0 /*16*/].f_13 = 0;
			Local_421[0 /*16*/].f_14 = 0;
			Local_421[1 /*16*/].f_13 = 0;
			Local_421[1 /*16*/].f_14 = 0;
			Local_421[4 /*16*/].f_13 = 0;
			Local_421[4 /*16*/].f_14 = 0;
			iLocal_636 = 1;
			iLocal_634 = 1;
			iLocal_639 = 1;
			iLocal_640 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 1);
			iLocal_420 = 1;
			break;
		case 1:
			__LIB_10__.func_618(iLocal_451, iLocal_423, 100f, 0.7f, 0);
			if (func_230())
			{
				func_227();
			}
			if (iLocal_639 == 1)
			{
				if (func_233() > 7)
				{
					if (func_222(Local_448))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_448.f_0, -758.84f, -115.64f, 36.89f, 12f, 0, Local_448.f_2, 17, 1f, 1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_448.f_1, iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
					}
					if (func_222(Local_447))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_447.f_0, -655.18f, -202.16f, 36.43f, 18f, 0, iLocal_440, 17, 1f, 1f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_447.f_0, -643.56f, -196.16f, 36.58f, 10f, 0, iLocal_440, 17, 1f, 1f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_447.f_0, -633.4f, -191.1f, 36.67f, 5f, 0, iLocal_440, 17, 1f, 1f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_447.f_1, iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
					}
					iLocal_639 = 0;
				}
			}
			else if (iLocal_640 == 0)
			{
				if (func_222(Local_448))
				{
					if (func_228() > 25)
					{
						TASK::CLEAR_PED_TASKS(Local_448.f_1);
						ENTITY::SET_ENTITY_COORDS(Local_448.f_0, -678.85f, -95.08f, 36.86f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_448.f_0, 208.7f);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_448.f_1, Local_448.f_0, -567.85f, -288.8f, 34.08f, 12f, 0, iLocal_435, 786599, 5f, 5f);
						iLocal_640 = 1;
					}
				}
			}
			if (iLocal_413 == 0)
			{
				if (func_233() > 12)
				{
					iLocal_413 = 1;
				}
			}
			func_246();
			func_245(0);
			func_245(1);
			func_244();
			func_240();
			func_235();
			func_234();
			func_232();
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_423, Local_620, 3f, 3f, 2f, false, true, 0))
			{
				iLocal_420 = 0;
				iLocal_419 = 6;
			}
			if (func_225(0))
			{
				func_243();
			}
			break;
	}
}

void func_243()//Position - 0x237AB
{
	if (__LIB_1__.func_197(iLocal_422))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_422, PLAYER::PLAYER_PED_ID(), -1);
	}
	iLocal_420 = 0;
	iLocal_419 = 7;
}

void func_244()//Position - 0x237D1
{
	if (__LIB_1__.func_197(Local_421[4 /*16*/]) && __LIB_1__.func_197(iLocal_423))
	{
		if (Local_421[4 /*16*/].f_13 == 0)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(Local_421[4 /*16*/], iLocal_423, 2.5f, 2.5f, 2f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(Local_421[4 /*16*/]);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Local_421[4 /*16*/], 1500, 2000, 1, -ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_421[4 /*16*/]), 1f, 0f, 0f, 0f, 0f, 0f, 0f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_423, -1, 0, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -631.84f, -153.48f, 36.83f, 1f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_423, 0);
				TASK::TASK_PAUSE(0, 1500);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(Local_421[4 /*16*/], iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
				Local_421[4 /*16*/].f_13 = 1;
			}
		}
	}
}

void func_245(int iParam0)//Position - 0x238BF
{
	struct<3> Var0;
	if (!Local_421[iParam0 /*16*/].f_14)
	{
		if (__LIB_1__.func_197(Local_421[iParam0 /*16*/]) && __LIB_1__.func_197(iLocal_423))
		{
			if (!Local_421[iParam0 /*16*/].f_13)
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_423))
				{
					if (func_233() > Local_421[iParam0 /*16*/].f_12)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
						if (iLocal_416 == 3)
						{
							TASK::TASK_PAUSE(0, 1000);
						}
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_421[iParam0 /*16*/].f_6, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
						TASK::TASK_PERFORM_SEQUENCE(Local_421[iParam0 /*16*/], iLocal_617);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
						Local_421[iParam0 /*16*/].f_13 = 1;
					}
				}
			}
			else if (__LIB_0__.func_508(Local_421[iParam0 /*16*/], iLocal_423, 3f, 1))
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_421[iParam0 /*16*/], ENTITY::GET_ENTITY_COORDS(iLocal_423, true)) };
				TASK::CLEAR_PED_TASKS(Local_421[iParam0 /*16*/]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_423, -1, 0, 2);
				if (Var0.f_1 > 0.7f)
				{
					TASK::TASK_PLAY_ANIM(0, sLocal_652, Local_421[iParam0 /*16*/].f_15, 8f, -4f, -1, 0, 0f, false, false, false);
				}
				else
				{
					TASK::TASK_PLAY_ANIM(0, sLocal_652, "avoid_rb", 8f, -4f, -1, 0, 0f, false, false, false);
				}
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_423, 0);
				TASK::TASK_PAUSE(0, 1000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_421[iParam0 /*16*/].f_9, 1f, 20000, 0.25f, 0, 40000f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(Local_421[iParam0 /*16*/], iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
				Local_421[iParam0 /*16*/].f_14 = 1;
			}
		}
	}
}

void func_246()//Position - 0x23A5D
{
	if ((__LIB_1__.func_197(iLocal_422) && __LIB_0__.func_529(iLocal_422, Local_425, 1) < 5f) && __LIB_0__.func_529(PLAYER::PLAYER_PED_ID(), Local_425, 1) < 25f)
	{
		if (iLocal_427)
		{
			if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_CHASE", "NIG1C_CHASE_2", 7, __LIB_30__.func_420(), 0))
			{
				iLocal_427 = 0;
				iLocal_428 = MISC::GET_GAME_TIMER() + 5000;
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_423, -1, 0, 2);
			}
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_428 && !__LIB_0__.func_75())
		{
			if (__LIB_35__.func_536(&uLocal_452, "NIG1CAU", "NIG1C_WAIT", 7, __LIB_30__.func_420(), 0, 0))
			{
				iLocal_428 = MISC::GET_GAME_TIMER() + 5000;
			}
		}
	}
}

void func_248(int iParam0)//Position - 0x23B55
{
	struct<3> Var0;
	float fVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_421[iParam0 /*16*/]))
	{
		PED::DELETE_PED(&(Local_421[iParam0 /*16*/]));
	}
	if (STREAMING::HAS_MODEL_LOADED(Local_421[iParam0 /*16*/].f_1))
	{
		Local_421[iParam0 /*16*/] = PED::CREATE_PED(5, Local_421[iParam0 /*16*/].f_1, Local_421[iParam0 /*16*/].f_2, Local_421[iParam0 /*16*/].f_5, true, true);
		Var0 = { Local_421[iParam0 /*16*/].f_2 };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false);
		ENTITY::SET_ENTITY_COORDS(Local_421[iParam0 /*16*/], Var0.f_0, Var0.f_1, fVar1, true, false, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_421[iParam0 /*16*/], iLocal_619);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_421[iParam0 /*16*/], 17, true);
	}
}

int func_249()//Position - 0x23C00
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_441.f_0))
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_441.f_2) && STREAMING::HAS_MODEL_LOADED(Local_441.f_3))
			{
				Local_441.f_0 = VEHICLE::CREATE_VEHICLE(Local_441.f_2, Local_441.f_4, Local_441.f_7, true, true, false);
				Local_441.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_441.f_0, 4, Local_441.f_3, -1, true, true);
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_441.f_0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_441.f_0, 3);
				PED::SET_PED_MONEY(Local_441.f_1, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_441.f_1, 17, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_441.f_1, iLocal_619);
				PED::SET_PED_CONFIG_FLAG(Local_441.f_1, 115, true);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_442.f_0))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_437) && STREAMING::HAS_MODEL_LOADED(iLocal_432))
			{
				Local_442.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_437, -591.7191f, -166.3491f, 37.8459f, 35f, true, true, false);
				Local_442.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_442.f_0, 5, iLocal_432, -1, true, true);
				PED::SET_PED_CONFIG_FLAG(Local_442.f_1, 32, true);
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_442.f_0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_442.f_0, 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_442.f_1, 17, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_442.f_1, iLocal_619);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_443.f_0))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_435) && STREAMING::HAS_MODEL_LOADED(iLocal_434))
			{
				Local_443.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_435, -651.4f, -153.68f, 36.95f, 217.44f, true, true, false);
				Local_443.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_443.f_0, 4, iLocal_434, -1, true, true);
				iLocal_429 = PED::CREATE_PED_INSIDE_VEHICLE(Local_443.f_0, 4, iLocal_432, 2, true, true);
				VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_443.f_0, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_443.f_0, 3);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_443.f_1, 17, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_429, 17, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_443.f_1, iLocal_619);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_429, iLocal_619);
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_445.f_0))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_436) && STREAMING::HAS_MODEL_LOADED(iLocal_432))
			{
				Local_445.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_436, -525.33f, -137.35f, 38.04f, 111.2f, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_445.f_0, 5f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_445.f_0, 3);
				if (!__LIB_1__.func_197(Local_445.f_1))
				{
					Local_445.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_445.f_0, 4, iLocal_432, -1, true, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_445.f_1, 17, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_445.f_1, iLocal_619);
				}
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_446.f_0))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_435) && STREAMING::HAS_MODEL_LOADED(iLocal_434))
			{
				Local_446.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_435, Local_446.f_4, Local_446.f_7, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_446.f_0, 5f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_446.f_0, 3);
				if (!__LIB_1__.func_197(Local_446.f_1))
				{
					Local_446.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_446.f_0, 4, iLocal_434, -1, true, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_446.f_1, 17, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_446.f_1, iLocal_619);
				}
			}
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_444.f_0))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_438) && STREAMING::HAS_MODEL_LOADED(iLocal_432))
			{
				Local_444.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_438, -584.32f, -156.66f, 36.95f, 117.29f, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_444.f_0, 5f);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_444.f_0, 3);
				Local_444.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_444.f_0, 4, iLocal_432, -1, true, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_444.f_1, 17, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_444.f_1, iLocal_619);
			}
			return 0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_447.f_0))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_447.f_2) && STREAMING::HAS_MODEL_LOADED(iLocal_434))
		{
			Local_447.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_440, -683.3f, -238.03f, 36.63f, 29.79f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_447.f_0, 5f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_447.f_0, 3);
			if (!__LIB_1__.func_197(Local_447.f_1))
			{
				Local_447.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_447.f_0, 4, iLocal_434, -1, true, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_447.f_1, 17, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_447.f_1, iLocal_619);
			}
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_448.f_0))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_448.f_2) && STREAMING::HAS_MODEL_LOADED(Local_448.f_3))
		{
			Local_448.f_0 = VEHICLE::CREATE_VEHICLE(Local_448.f_2, Local_448.f_4, Local_448.f_7, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_448.f_0, 5f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_448.f_0, 3);
			if (!__LIB_1__.func_197(Local_448.f_1))
			{
				Local_448.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_448.f_0, 4, Local_448.f_3, -1, true, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_448.f_1, 17, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_448.f_1, iLocal_619);
			}
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_449.f_0))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_437) && STREAMING::HAS_MODEL_LOADED(iLocal_434))
		{
			Local_449.f_0 = VEHICLE::CREATE_VEHICLE(iLocal_437, Local_449.f_4, Local_449.f_7, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_449.f_0, 5f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_449.f_0, 3);
			if (!__LIB_1__.func_197(Local_449.f_1))
			{
				Local_449.f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_449.f_0, 4, iLocal_434, -1, true, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_449.f_1, 17, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_449.f_1, iLocal_619);
			}
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_450))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("firetruk")))
		{
			iLocal_450 = VEHICLE::CREATE_VEHICLE(joaat("firetruk"), -637.88f, -112.82f, 38.1f, 83.08f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_450, 5f);
		}
		return 0;
	}
	return 1;
}

void func_250()//Position - 0x24181
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_645, sLocal_644);
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_646, sLocal_644);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "NIG1C_COMET");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "NIG1C_COMET2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "NIG1CEscort");
	VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_643, sLocal_642);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "NIG1C_FIRE");
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_426);
	STREAMING::REQUEST_MODEL(iLocal_435);
	STREAMING::REQUEST_MODEL(iLocal_436);
	STREAMING::REQUEST_MODEL(iLocal_437);
	STREAMING::REQUEST_MODEL(iLocal_440);
	STREAMING::REQUEST_MODEL(iLocal_439);
	STREAMING::REQUEST_MODEL(iLocal_438);
	STREAMING::REQUEST_MODEL(iLocal_431);
	STREAMING::REQUEST_MODEL(iLocal_432);
	STREAMING::REQUEST_MODEL(joaat("firetruk"));
	STREAMING::REQUEST_MODEL(iLocal_434);
	STREAMING::REQUEST_ANIM_DICT(sLocal_652);
	STREAMING::REQUEST_ANIM_DICT(sLocal_655);
	STREAMING::REQUEST_ANIM_DICT(sLocal_654);
	STREAMING::REQUEST_ANIM_DICT(sLocal_653);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("NIGEL_1C_COLLAR", false, -1);
}

void func_251()//Position - 0x24241
{
	bool bVar0;
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	func_250();
	switch (iLocal_420)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(iLocal_451))
			{
				iLocal_451 = __LIB_10__.func_711(iLocal_423, 1, 1, 5);
			}
			__LIB_0__.func_210("N1C_CATCH", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_START");
			CAM::STOP_GAMEPLAY_HINT(false);
			func_87(0);
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_426, &iLocal_621);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_426, (iLocal_621 - 1), &Local_620);
			if (__LIB_1__.func_197(iLocal_423))
			{
				TASK::CLEAR_PED_TASKS(iLocal_423);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_426, 0, 616, -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_423, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
			}
			if ((iLocal_674 != 1 && __LIB_1__.func_197(iLocal_422)) && __LIB_1__.func_197(iLocal_423))
			{
				TASK::CLEAR_PED_TASKS(iLocal_422);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				if (iLocal_674 == 2)
				{
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_423, -1, 0, 2);
					TASK::TASK_PAUSE(0, 500);
				}
				else
				{
					TASK::TASK_LOOK_AT_ENTITY(0, iLocal_423, -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_423, 1500);
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_425, 2.2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_PLAY_ANIM(0, sLocal_652, "IDLE_D", 2f, -8f, -1, 8193, 0f, false, false, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_422, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
			}
			iLocal_427 = 1;
			iLocal_428 = 0;
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 1);
			iLocal_420 = 1;
			break;
		case 1:
			if (!__LIB_0__.func_75() || iLocal_637 == 1)
			{
				bVar0 = false;
				if ((__LIB_1__.func_197(iLocal_422) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && __LIB_0__.func_508(iLocal_422, PLAYER::PLAYER_PED_ID(), 35f, 1))
				{
					bVar0 = __LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_CHASE", "NIG1C_CHASE_1", 9, __LIB_30__.func_420(), 0);
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					iLocal_420 = 2;
				}
			}
			if (func_225(0))
			{
				func_243();
			}
			__LIB_10__.func_618(iLocal_451, iLocal_423, 100f, 0.7f, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_423, 2f);
			break;
		case 2:
			__LIB_10__.func_618(iLocal_451, iLocal_423, 100f, 0.7f, 0);
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_423, 3f);
			func_246();
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_423))
			{
				iLocal_420 = 0;
				iLocal_419 = 5;
			}
			if (func_225(0))
			{
				func_243();
			}
			break;
	}
}

void func_254()//Position - 0x24524
{
	switch (iLocal_420)
	{
		case 0:
			if (func_239() != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				iLocal_415 = 0;
			}
			else
			{
				iLocal_415 = 1;
			}
			iLocal_420 = 1;
			break;
		case 1:
			func_256();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			if (iLocal_637 == 1)
			{
				iLocal_674 = 1;
				iLocal_420 = 0;
				iLocal_419 = 4;
			}
			if (func_255())
			{
				if (__LIB_0__.func_75())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(true);
				}
				iLocal_674 = 0;
				iLocal_420 = 0;
				iLocal_419 = 4;
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iLocal_422) == iLocal_618)
			{
				if (__LIB_0__.func_75())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				}
				iLocal_674 = 3;
				iLocal_420 = 0;
				iLocal_419 = 4;
			}
			break;
	}
}

int func_255()//Position - 0x245D4
{
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_197(iLocal_423))
	{
		if (__LIB_0__.func_508(iLocal_423, PLAYER::PLAYER_PED_ID(), 6.5f, 1))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -630.4753f, -263.95523f, 37.405323f, -621.4487f, -258.8588f, 39.22013f, 4f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_256()//Position - 0x2463D
{
	struct<20> Var0;
	struct<22> Var1;
	switch (iLocal_415)
	{
		case 0:
			if (func_239() == joaat("WEAPON_UNARMED"))
			{
				iLocal_415 = 1;
			}
			break;
		case 1:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Var0.f_4 = 1065353216;
				Var0.f_5 = 1065353216;
				Var0.f_9 = 1065353216;
				Var0.f_10 = 1065353216;
				Var0.f_14 = 1065353216;
				Var0.f_15 = 1065353216;
				Var0.f_17 = 1040187392;
				Var0.f_18 = 1040187392;
				Var0.f_19 = -1;
				Var1.f_4 = 1065353216;
				Var1.f_5 = 1065353216;
				Var1.f_9 = 1065353216;
				Var1.f_10 = 1065353216;
				Var1.f_14 = 1065353216;
				Var1.f_15 = 1065353216;
				Var1.f_17 = 1040187392;
				Var1.f_18 = 1040187392;
				Var1.f_19 = -1;
				Var1.f_0 = 1;
				Var1.f_2 = "hailing_whistle_waive_a";
				Var1.f_1 = sLocal_652;
				Var1.f_3 = 0f;
				Var1.f_4 = 1f;
				Var1.f_5 = 0.5f;
				Var1.f_16 = MISC::GET_HASH_KEY("BONEMASK_HEAD_NECK_AND_L_ARM");
				Var1.f_20 = 48;
				Var1.f_21 = 1024;
				TASK::TASK_SCRIPTED_ANIMATION(PLAYER::PLAYER_PED_ID(), &Var1, &Var0, &Var0, 0.25f, 0.25f);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 0);
			if (__LIB_0__.func_121(iLocal_423))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_423, 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
			}
			iLocal_672 = MISC::GET_GAME_TIMER() + 750;
			iLocal_415 = 2;
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > iLocal_672 && __LIB_1__.func_197(iLocal_422))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_422))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_422, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
				iLocal_415 = 3;
			}
			break;
		case 3:
			if (__LIB_1__.func_197(iLocal_422) && __LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_MODEL", "NIG1C_MODEL_1", 7, 0, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_422, PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_617);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_654, "gesture_easy_now", 8f, -8f, -1, 8, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_617);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_422, iLocal_617);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_617);
				iLocal_641 = 1;
				iLocal_672 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_415 = 5;
			}
			break;
		case 5:
			func_258();
			if (MISC::GET_GAME_TIMER() > iLocal_672 && __LIB_1__.func_197(iLocal_423))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_423, -628.1631f, -261.5749f, 37.6045f, 1.5f, 20000, 0.25f, 0, -15.13f);
				iLocal_415 = 4;
			}
			break;
		case 4:
			func_258();
			if (__LIB_1__.func_197(iLocal_423) && __LIB_0__.func_530(iLocal_423, -628.1631f, -261.5749f, 37.6045f, 2f, 1))
			{
				HUD::CLEAR_PRINTS();
				iLocal_674 = 0;
				iLocal_420 = 0;
				iLocal_419 = 4;
			}
			break;
	}
}

void func_258()//Position - 0x2493F
{
	if (iLocal_641)
	{
		if (!__LIB_0__.func_75())
		{
			if (__LIB_35__.func_901(&uLocal_452, "NIG1CAU", "NIG1C_MODEL", "NIG1C_MODEL_2", 7, 1, 0))
			{
				iLocal_641 = 0;
			}
		}
	}
}

void func_259()//Position - 0x24971
{
	func_260();
	switch (iLocal_420)
	{
		case 0:
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_422, -1, 0, 2);
			if (!HUD::DOES_BLIP_EXIST(iLocal_451))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 1);
				iLocal_451 = __LIB_10__.func_711(iLocal_423, 1, 1, 5);
				__LIB_0__.func_210("N1C_INIT", 7500, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FORA");
			}
			iLocal_420 = 1;
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_662, Local_663, fLocal_664, false, true, 0))
			{
				iLocal_420 = 0;
				iLocal_419 = 3;
			}
			if (PED::IS_PED_FLEEING(iLocal_422))
			{
				if (__LIB_0__.func_75())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				}
				iLocal_674 = 1;
				iLocal_420 = 0;
				iLocal_419 = 4;
			}
			break;
	}
}

void func_260()//Position - 0x24A27
{
	bool bVar0;
	if (__LIB_1__.func_197(iLocal_422))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_647 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_648, Local_649, fLocal_650, false, true, 0))
		{
			bVar0 = false;
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				bVar0 = __LIB_35__.func_536(&uLocal_452, "NIG1CAU", "NIG1C_SHOP", 8, 1, 0, 0);
			}
			else
			{
				bVar0 = __LIB_35__.func_536(&uLocal_452, "NIG1CAU", "NIG1C_SHOP", 8, 0, 0, 0);
			}
			if (bVar0)
			{
				iLocal_647 = MISC::GET_GAME_TIMER() + 7000;
			}
		}
	}
}

void func_261()//Position - 0x24AA7
{
	func_260();
	switch (iLocal_420)
	{
		case 0:
			iLocal_451 = __LIB_10__.func_711(iLocal_423, 1, 1, 5);
			__LIB_0__.func_210("N1C_INIT", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_FORA");
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_659, Local_660, fLocal_661, false, true, 0))
			{
				iLocal_420 = 0;
				iLocal_419 = 2;
			}
			else
			{
				iLocal_420 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_659, Local_660, fLocal_661, false, true, 0))
			{
				iLocal_420 = 0;
				iLocal_419 = 2;
			}
			if (PED::IS_PED_FLEEING(iLocal_422))
			{
				if (__LIB_0__.func_75())
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				}
				HUD::CLEAR_PRINTS();
				__LIB_0__.func_210("N1C_CATCH", 7500, 1);
				AUDIO::TRIGGER_MUSIC_EVENT("NIGEL1C_START");
				iLocal_674 = 1;
				iLocal_420 = 0;
				iLocal_419 = 4;
			}
			break;
	}
}

void func_286()//Position - 0x25B47
{
	func_287(98, 1);
	func_504();
}

void func_287(int iParam0, bool bParam1)//Position - 0x25B5A
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__.func_205();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_112473[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_112473[iVar0 /*10*/].f_6)
	{
		return;
	}
	__LIB_38__.func_136(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__.func_56(&(Global_112473[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::START_FIRING_AMNESTY(5000);
		}
	}
	__LIB_32__.func_577(iVar0, 1, 0, 0);
	__LIB_0__.func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__.func_339(iVar0)}, 4);
	__LIB_0__.func_44(&sVar1, __LIB_26__.func_250());
	func_313();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__.func_18();
	}
	__LIB_35__.func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__.func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__.func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__.func_943(iParam0, 0, 0);
	}
	__LIB_0__.func_533();
}

void func_313()//Position - 0x26CD8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_97810[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = __LIB_18__.func_168(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				case 1:
					iVar2 = 158;
					break;
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_208(iVar1, 14, iVar2))
				{
					func_314(iVar1, 14, iVar2);
				}
				if (Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_113386.f_2363.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_314(int iParam0, int iParam1, int iParam2)//Position - 0x26D99
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
	Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_208(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__.func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_314(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__.func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_314(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__.func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__.func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_101(iParam0, iVar0, &iVar7, 0))
	{
		func_93(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_94(iParam0, iVar0, &iVar7))
	{
		func_93(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

void func_478(int iParam0)//Position - 0x3A0C6
{
	int iVar0;
	func_497(1, 1);
	func_46();
	HUD::CLEAR_PRINTS();
	if (__LIB_1__.func_197(iLocal_423))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_423);
	}
	if (__LIB_1__.func_197(iLocal_422))
	{
		TASK::CLEAR_PED_TASKS(iLocal_422);
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	iLocal_637 = 0;
	iLocal_638 = 0;
	__LIB_8__.func_770(0);
	func_73(0, 1);
	if (HUD::DOES_BLIP_EXIST(iLocal_451))
	{
		HUD::REMOVE_BLIP(&iLocal_451);
	}
	__LIB_0__.func_0(&(Local_421[0 /*16*/]));
	__LIB_0__.func_0(&(Local_421[1 /*16*/]));
	__LIB_0__.func_0(&(Local_421[2 /*16*/]));
	__LIB_0__.func_0(&(Local_421[3 /*16*/]));
	__LIB_0__.func_0(&(Local_421[4 /*16*/]));
	__LIB_0__.func_0(&iLocal_429);
	__LIB_0__.func_0(&iLocal_422);
	__LIB_0__.func_0(&iLocal_423);
	func_57(Local_442);
	func_57(Local_441);
	func_57(Local_443);
	func_57(Local_445);
	func_57(Local_446);
	func_57(Local_447);
	func_57(Local_448);
	func_57(Local_449);
	func_57(Local_444);
	__LIB_11__.func_32(&iLocal_450);
	MISC::CLEAR_AREA_OF_VEHICLES(-669.0843f, -209.14258f, 36.272766f, 25.25f, false, false, false, false, false, false, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_656, 50f, false, false, false, false, false, false, 0);
	MISC::CLEAR_AREA_OF_PEDS(-670.1719f, -208.0861f, 36.258213f, 7.25f, 0);
	iLocal_420 = 0;
	__LIB_0__.func_203(&uLocal_452, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	switch (iParam0)
	{
		case 0:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.82f, -350.1f, 34.01f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -7.52f);
			func_496(1);
			func_481();
			iLocal_419 = 1;
			break;
		case 1:
			func_250();
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -604.82f, -350.1f, 34.01f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -7.52f);
			func_496(1);
			func_481();
			__LIB_0__.func_203(&uLocal_452, 3, iLocal_422, "KERRY", 0, 1);
			iLocal_419 = 1;
			break;
		case 2:
			func_250();
			func_479();
			if (!__LIB_0__.func_295())
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -605.2227f, -291.6463f, 35.7791f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 38.21f);
			}
			func_496(1);
			func_481();
			__LIB_0__.func_203(&uLocal_452, 3, iLocal_422, "KERRY", 0, 1);
			iLocal_419 = 2;
			break;
		case 3:
			func_250();
			func_479();
			iLocal_451 = __LIB_10__.func_711(iLocal_423, 1, 1, 5);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -630.43f, -255.38f, 37.5f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 27.58f);
			iLocal_422 = PED::CREATE_PED(5, iLocal_431, Local_424, 27.58f, true, true);
			__LIB_10__.func_698(iLocal_422, Local_424);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_422, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_422, 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_422, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_422, 4, 0, 0, 0);
			iLocal_423 = PED::CREATE_PED(26, iLocal_433, -633.89f, -250.1f, 37.38f, 50f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_423, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_423, 4, 0, 1, 0);
			__LIB_0__.func_203(&uLocal_452, 3, iLocal_422, "KERRY", 0, 1);
			func_87(0);
			iLocal_419 = 4;
			break;
		case 4:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_426);
			STREAMING::REQUEST_MODEL(iLocal_433);
			while (!STREAMING::HAS_MODEL_LOADED(iLocal_433))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_423 = PED::CREATE_PED(26, iLocal_433, -636.42f, -95.84f, 37.48f, -95.46f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_423, 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_423, 4, 0, 1, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -636.21f, -96.51f, 37.2f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -5.46f);
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			iLocal_419 = 7;
			break;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_433);
	if (__LIB_0__.func_295())
	{
		__LIB_41__.func_639(&iVar0, -597.52f, -307.37f, 34.5f, 120.04f, 0, 0, 0, 1, 1, joaat("asterope"), 0, 145, 1);
		PED::INSTANTLY_FILL_PED_POPULATION();
		__LIB_6__.func_775(0, -1, 1);
	}
	else
	{
		__LIB_20__.func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
		PED::INSTANTLY_FILL_PED_POPULATION();
	}
	__LIB_38__.func_158(1, 1, 1);
}

void func_479()//Position - 0x3A51A
{
	while (!func_480())
	{
		SYSTEM::WAIT(0);
	}
}

int func_480()//Position - 0x3A532
{
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_435))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_436))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_437))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_440))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_439))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_438))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_431))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_432))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("firetruk")))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_434))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_652))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_654))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_653))
	{
		return 0;
	}
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_431, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_432, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_434, true);
	return 1;
}

void func_481()//Position - 0x3A618
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423))
	{
		PED::DELETE_PED(&iLocal_423);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_422))
	{
		PED::DELETE_PED(&iLocal_422);
	}
	iLocal_40 = 0;
	while (!func_501(&Local_411))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_422 = Local_411.f_28[0];
	iLocal_423 = Local_411.f_28[1];
	__LIB_10__.func_698(iLocal_422, Local_424);
}

void func_484()//Position - 0x3A709
{
	func_496(0);
	if (func_495())
	{
		func_494();
		func_493();
		if (__LIB_0__.func_77(0))
		{
			__LIB_6__.func_849(0);
		}
		__LIB_24__.func_951(64, 2, 0);
		PED::ADD_RELATIONSHIP_GROUP("PUSHED", &iLocal_618);
		PED::ADD_RELATIONSHIP_GROUP("DRIVERS", &iLocal_619);
		MISC::CLEAR_AREA_OF_VEHICLES(-633.4493f, -248.26906f, 35.87451f, 50f, false, false, false, false, false, false, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(Local_656, 50f, false, false, false, false, false, false, 0);
		__LIB_29__.func_735();
		func_250();
		iLocal_422 = Local_411.f_28[0];
		if (__LIB_1__.func_197(iLocal_422))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_422, true);
		}
		iLocal_423 = Local_411.f_28[1];
		if (__LIB_1__.func_197(iLocal_423))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_423, true);
		}
		__LIB_0__.func_203(&uLocal_452, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		__LIB_0__.func_203(&uLocal_452, 3, iLocal_422, "KERRY", 0, 1);
		iLocal_647 = MISC::GET_GAME_TIMER() + 3000;
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("firetruk"), true);
		iLocal_420 = 0;
		iLocal_419 = 1;
	}
}

void func_493()//Position - 0x3AAFD
{
	Local_441.f_2 = iLocal_439;
	Local_441.f_4 = { -655.81f, -278.73f, 35.21f };
	Local_441.f_7 = 35f;
	Local_441.f_3 = iLocal_431;
	Local_442.f_2 = iLocal_437;
	Local_442.f_4 = { -591.7191f, -166.3491f, 37.8459f };
	Local_442.f_7 = 35f;
	Local_442.f_3 = iLocal_432;
	Local_443.f_2 = iLocal_435;
	Local_443.f_4 = { -651.4f, -153.68f, 36.95f };
	Local_443.f_7 = 217.44f;
	Local_443.f_3 = iLocal_434;
	Local_445.f_2 = iLocal_436;
	Local_445.f_4 = { -525.33f, -137.35f, 38.04f };
	Local_445.f_7 = 111.2f;
	Local_445.f_3 = iLocal_432;
	Local_447.f_2 = iLocal_437;
	Local_447.f_4 = { -683.3f, -238.03f, 36.63f };
	Local_447.f_7 = 29.79f;
	Local_447.f_3 = iLocal_434;
	Local_448.f_2 = iLocal_435;
	Local_448.f_4 = { -674.44f, -262.95f, 35.97f };
	Local_448.f_7 = 29.8f;
	Local_448.f_3 = iLocal_434;
	Local_446.f_2 = iLocal_435;
	Local_446.f_4 = { -644.56f, -155.68f, 37.32f };
	Local_446.f_7 = 208.31f;
	Local_446.f_3 = iLocal_434;
	Local_449.f_2 = iLocal_437;
	Local_449.f_4 = { -641.91f, -158.94f, 36.7f };
	Local_449.f_7 = 208.7f;
	Local_449.f_3 = iLocal_434;
}

void func_494()//Position - 0x3AC85
{
	Local_421[0 /*16*/].f_1 = iLocal_431;
	Local_421[0 /*16*/].f_5 = 65.71f;
	Local_421[0 /*16*/].f_2 = { -645.97f, -177.03f, 37f };
	Local_421[0 /*16*/].f_6 = { -643.84f, -181.83f, 36.69f };
	Local_421[0 /*16*/].f_9 = { -691.2f, -207.27f, 36.25f };
	Local_421[0 /*16*/].f_12 = 21;
	Local_421[0 /*16*/].f_13 = 0;
	Local_421[0 /*16*/].f_14 = 0;
	Local_421[0 /*16*/].f_15 = "avoid_rf";
	Local_421[1 /*16*/].f_1 = iLocal_431;
	Local_421[1 /*16*/].f_5 = -50f;
	Local_421[1 /*16*/].f_2 = { -643.92f, -135.89f, 37.84f };
	Local_421[1 /*16*/].f_6 = { -634.06f, -147.8f, 36.87f };
	Local_421[1 /*16*/].f_9 = { -623.98f, -162.83f, 36.85f };
	Local_421[1 /*16*/].f_12 = 28;
	Local_421[1 /*16*/].f_13 = 0;
	Local_421[1 /*16*/].f_14 = 0;
	Local_421[1 /*16*/].f_15 = "avoid_fr";
	Local_421[2 /*16*/].f_1 = iLocal_432;
	Local_421[2 /*16*/].f_5 = 5.73f;
	Local_421[2 /*16*/].f_2 = { -671.58f, -195.03f, 37.39f };
	Local_421[2 /*16*/].f_14 = 0;
	Local_421[4 /*16*/].f_1 = iLocal_432;
	Local_421[4 /*16*/].f_5 = -108.48f;
	Local_421[4 /*16*/].f_2 = { -632.18f, -154.89f, 37.83f };
	Local_421[4 /*16*/].f_13 = 0;
}

int func_495()//Position - 0x3AE18
{
	if ((STREAMING::HAS_MODEL_LOADED(iLocal_431) && STREAMING::HAS_MODEL_LOADED(iLocal_433)) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		return 1;
	}
	return 0;
}

void func_496(bool bParam0)//Position - 0x3AE45
{
	HUD::REQUEST_ADDITIONAL_TEXT("NIG1CAU", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("NIGEL1C", 0);
	STREAMING::REQUEST_MODEL(iLocal_431);
	STREAMING::REQUEST_MODEL(iLocal_433);
	if (bParam0)
	{
		while (!func_495())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_497(bool bParam0, bool bParam1)//Position - 0x3AE82
{
	if (bParam0)
	{
		__LIB_32__.func_792(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_91(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

int func_501(var uParam0)//Position - 0x3AFD3
{
	int iVar0[2];
	int iVar1;
	char* sVar2;
	int iVar3;
	sVar2 = "rcmnigel1cnmt_1c";
	iVar0[0] = joaat("IG_KerryMcIntosh");
	iVar0[1] = joaat("A_C_Rottweiler");
	switch (iLocal_40)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -650.55585f, -217.06265f, 35.55435f };
			uParam0->f_17[1 /*3*/] = { -601.40985f, -300.3887f, 64.24574f };
			uParam0->f_24 = 35f;
			uParam0->f_27 = 1;
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			iLocal_40 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				return 0;
			}
			iLocal_40 = 2;
			break;
		case 2:
			uParam0->f_28[0] = PED::CREATE_PED(26, iVar0[0], -626.87f, -268.85f, 38f, 121f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_28[0], 17, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[0], 132, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[0], true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], false);
			AUDIO::STOP_PED_SPEAKING(uParam0->f_28[0], true);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "dexy_stay_there", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "price_tag", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "such_a_good", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "this_looks", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "base", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, sVar2, "who_would", 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::SET_SEQUENCE_TO_REPEAT(iVar3, true);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(uParam0->f_28[0], iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			uParam0->f_28[1] = PED::CREATE_PED(26, iVar0[1], -627.4f, -267.12f, 38.23f, -59.95f, true, true);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 3, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_28[1], 132, true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uParam0->f_28[1], true);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_504()//Position - 0x3B361
{
	if (__LIB_26__.func_257())
	{
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("NIGEL_1C_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("NIGEL_1C_SCENE");
		}
		func_87(1);
		CAM::STOP_GAMEPLAY_HINT(false);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_ADDITIONAL_TEXT(6, true);
		HUD::CLEAR_ADDITIONAL_TEXT(0, true);
	}
	func_516();
	__LIB_9__.func_485(2, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("firetruk"), false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_32__.func_757(&Local_411, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_516()//Position - 0x3B5DD
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_618);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_619);
	if (HUD::DOES_BLIP_EXIST(iLocal_451))
	{
		HUD::REMOVE_BLIP(&iLocal_451);
	}
	__LIB_0__.func_124(&iLocal_422, 1, 0, 1);
	__LIB_0__.func_124(&iLocal_423, 1, 0, 1);
	__LIB_0__.func_124(&iLocal_429, 0, 0, 1);
	__LIB_0__.func_106(&iLocal_450);
	func_518(Local_442);
	func_518(Local_444);
	func_518(Local_441);
	func_518(Local_443);
	func_518(Local_445);
	func_518(Local_446);
	func_518(Local_447);
	func_518(Local_448);
	func_518(Local_449);
	func_517(0);
	func_517(1);
	func_517(2);
	func_517(4);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(PLAYER::PLAYER_PED_ID(), false);
	STREAMING::REMOVE_ANIM_DICT(sLocal_652);
	STREAMING::REMOVE_ANIM_DICT(sLocal_655);
	STREAMING::REMOVE_ANIM_DICT(sLocal_653);
	STREAMING::REMOVE_ANIM_DICT(sLocal_654);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_645, sLocal_644);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_646, sLocal_644);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_643, sLocal_642);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1C_COMET");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "NIG1C_COMET2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1CEscort");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "NIG1C_FIRE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_431, false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_432, false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_434, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_435);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_436);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_437);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_440);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_439);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_438);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_431);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_433);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_432);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_434);
}

void func_517(int iParam0)//Position - 0x3B760
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_421[iParam0 /*16*/]))
	{
		__LIB_0__.func_124(&(Local_421[iParam0 /*16*/]), 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_421[iParam0 /*16*/].f_1);
	}
}

void func_518(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x3B791
{
	__LIB_0__.func_124(&(Param0.f_1), 1, 0, 1);
	__LIB_0__.func_106(&Param0);
}

