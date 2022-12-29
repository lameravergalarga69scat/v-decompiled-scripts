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
	struct<10> Local_48[16];
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53[120] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_66 = 0;
	int iLocal_67[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_68 = NULL;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
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
	var uLocal_110[4] = { 0, 0, 0, 0 };
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 4;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 4;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 4;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 4;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 4;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 4;
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
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	struct<40> Local_153[55];
	var uLocal_154 = 40;
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
	struct<40> Local_1755[3];
	struct<19> Local_1756[35];
	var uLocal_1757 = 0;
	int iLocal_1758 = 0;
	int iLocal_1759 = 0;
	int iLocal_1760 = 0;
	int iLocal_1761 = 0;
	int iLocal_1762 = 0;
	int iLocal_1763 = 0;
	int iLocal_1764 = 0;
	int iLocal_1765 = 0;
	int iLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	int iLocal_1769 = 0;
	int iLocal_1770 = 0;
	int iLocal_1771 = 0;
	int iLocal_1772 = 0;
	int iLocal_1773 = 0;
	int iLocal_1774 = 0;
	int iLocal_1775 = 0;
	int iLocal_1776 = 0;
	int iLocal_1777 = 0;
	int iLocal_1778 = 0;
	int iLocal_1779 = 0;
	int iLocal_1780 = 0;
	int iLocal_1781 = 0;
	int iLocal_1782 = 0;
	int iLocal_1783 = 0;
	int iLocal_1784 = 0;
	int iLocal_1785 = 0;
	int iLocal_1786 = 0;
	int iLocal_1787 = 0;
	int iLocal_1788 = 0;
	int iLocal_1789 = 0;
	int iLocal_1790 = 0;
	int iLocal_1791 = 0;
	int iLocal_1792 = 0;
	int iLocal_1793 = 0;
	int iLocal_1794 = 0;
	int iLocal_1795 = 0;
	int iLocal_1796 = 0;
	int iLocal_1797 = 0;
	int iLocal_1798 = 0;
	int iLocal_1799 = 0;
	int iLocal_1800 = 0;
	int iLocal_1801 = 0;
	int iLocal_1802 = 0;
	struct<6> Local_1803 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_1804 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1805 = 0;
	int iLocal_1806 = 0;
	int iLocal_1807 = 0;
	int iLocal_1808 = 0;
	int iLocal_1809 = 0;
	var uLocal_1810 = 0;
	int iLocal_1811 = 0;
	var uLocal_1812 = 0;
	int iLocal_1813 = 0;
	int iLocal_1814 = 0;
	int iLocal_1815 = 0;
	int iLocal_1816 = 0;
	int iLocal_1817 = 0;
	int iLocal_1818 = 0;
	int iLocal_1819 = 0;
	int iLocal_1820 = 0;
	int iLocal_1821 = 0;
	int iLocal_1822 = 0;
	int iLocal_1823 = 0;
	int iLocal_1824 = 0;
	int iLocal_1825 = 0;
	var uLocal_1826 = 0;
	int iLocal_1827 = 0;
	int iLocal_1828 = 0;
	int iLocal_1829 = 0;
	int iLocal_1830 = 0;
	float fLocal_1831 = 0f;
	int iLocal_1832 = 0;
	int iLocal_1833[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1834 = 0;
	int iLocal_1835 = 0;
	int iLocal_1836 = 0;
	int iLocal_1837 = 0;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	int iLocal_1841[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1842[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1843 = 0;
	int iLocal_1844 = 0;
	int iLocal_1845 = 0;
	int iLocal_1846 = 0;
	bool bLocal_1847 = 0;
	int iLocal_1848 = 0;
	bool bLocal_1849 = 0;
	bool bLocal_1850 = 0;
	bool bLocal_1851 = 0;
	bool bLocal_1852 = 0;
	bool bLocal_1853 = 0;
	var uLocal_1854 = 0;
	int iLocal_1855 = 0;
	int iLocal_1856[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1857 = 10;
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
	int iLocal_1868 = 0;
	bool bLocal_1869 = 0;
	int iLocal_1870 = 0;
	int iLocal_1871 = 0;
	bool bLocal_1872 = 0;
	int iLocal_1873[4] = { 0, 0, 0, 0 };
	int iLocal_1874 = 0;
	int iLocal_1875 = 0;
	int iLocal_1876 = 0;
	int iLocal_1877 = 0;
	var uLocal_1878[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	float fLocal_1890 = 0f;
	float fLocal_1891 = 0f;
	float fLocal_1892 = 0f;
	float fLocal_1893 = 0f;
	float fLocal_1894 = 0f;
	float fLocal_1895 = 0f;
	float fLocal_1896 = 0f;
	float fLocal_1897 = 0f;
	float fLocal_1898 = 0f;
	int iLocal_1899 = 0;
	bool bLocal_1900 = 0;
	struct<3> Local_1901 = { 0, 0, 0 } ;
	struct<3> Local_1902 = { 0, 0, 0 } ;
	int iLocal_1903 = 0;
	int iLocal_1904 = 0;
	struct<3> Local_1905 = { 0, 0, 0 } ;
	struct<3> Local_1906 = { 0, 0, 0 } ;
	int* iLocal_1907 = NULL;
	int iLocal_1908 = 0;
	int iLocal_1909 = 0;
	int iLocal_1910 = 0;
	int iLocal_1911[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1912[3] = { 0, 0, 0 };
	var uLocal_1913 = 0;
	int iLocal_1914 = 0;
	struct<3> Local_1915 = { 0, 0, 0 } ;
	struct<3> Local_1916 = { 0, 0, 0 } ;
	struct<3> Local_1917 = { 0, 0, 0 } ;
	struct<3> Local_1918 = { 0, 0, 0 } ;
	int iLocal_1919 = 0;
	int iLocal_1920 = 0;
	int iLocal_1921 = 0;
	int iLocal_1922 = 0;
	int iLocal_1923 = 0;
	int iLocal_1924 = 0;
	int iLocal_1925 = 0;
	int iLocal_1926 = 0;
	int iLocal_1927 = 0;
	int iLocal_1928 = 0;
	int iLocal_1929 = 0;
	int iLocal_1930 = 0;
	int iLocal_1931 = 0;
	int iLocal_1932 = 0;
	int iLocal_1933 = 0;
	int iLocal_1934 = 0;
	int iLocal_1935 = 0;
	int iLocal_1936 = 0;
	int iLocal_1937 = 0;
	int iLocal_1938 = 0;
	int iLocal_1939 = 0;
	int iLocal_1940 = 0;
	int iLocal_1941 = 0;
	int iLocal_1942 = 0;
	int iLocal_1943 = 0;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	struct<8> Local_1960[1];
	struct<16> Local_1961[1];
	struct<16> Local_1962[3];
	struct<16> Local_1963[2];
	struct<16> Local_1964[5];
	struct<16> Local_1965[3];
	struct<16> Local_1966[1];
	struct<16> Local_1967[2];
	struct<16> Local_1968[1];
	struct<16> Local_1969[1];
	struct<16> Local_1970[4];
	struct<16> Local_1971[3];
	int iLocal_1972[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1973[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_1974[13];
	float fLocal_1975[13] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_1976[13];
	float fLocal_1977[13] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_1978[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_1979 = { 0, 0, 0, 0 } ;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	struct<4> Local_1983 = { 0, 0, 0, 0 } ;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	struct<4> Local_1987 = { 0, 0, 0, 0 } ;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	struct<4> Local_1991 = { 0, 0, 0, 0 } ;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	struct<4> Local_1995 = { 0, 0, 0, 0 } ;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	struct<4> Local_1999 = { 0, 0, 0, 0 } ;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	struct<3> Local_2003 = { 0, 0, 0 } ;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	struct<4> Local_2008 = { 0, 0, 0, 0 } ;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	struct<4> Local_2012 = { 0, 0, 0, 0 } ;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	struct<4> Local_2016 = { 0, 0, 0, 0 } ;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	int iLocal_2020 = 0;
	int iLocal_2021 = 0;
	int iLocal_2022 = 0;
	int iLocal_2023 = 0;
	int iLocal_2024 = 0;
	var uLocal_2025 = 0;
	int iLocal_2026 = 0;
	float fLocal_2027[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2028[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2029 = 0f;
	float fLocal_2030 = 0f;
	float fLocal_2031 = 0f;
	float fLocal_2032 = 0f;
	float fLocal_2033 = 0f;
	float fLocal_2034[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_2035 = 0f;
	float fLocal_2036 = 0f;
	float fLocal_2037 = 0f;
	float fLocal_2038 = 0f;
	var uLocal_2039[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2040[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2041 = 0;
	int iLocal_2042 = 0;
	int iLocal_2043 = 0;
	int iLocal_2044 = 0;
	int iLocal_2045 = 0;
	var uLocal_2046[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_2047 = 0;
	int iLocal_2048 = 0;
	int iLocal_2049 = 0;
	int iLocal_2050 = 0;
	int iLocal_2051 = 0;
	int iLocal_2052 = 0;
	int iLocal_2053 = 0;
	int iLocal_2054[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2055[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2056 = 0;
	int iLocal_2057 = 0;
	struct<3> Local_2058 = { 0, 0, 0 } ;
	struct<3> Local_2059 = { 0, 0, 0 } ;
	struct<3> Local_2060 = { 0, 0, 0 } ;
	struct<3> Local_2061 = { 0, 0, 0 } ;
	struct<3> Local_2062[15];
	struct<13> Local_2063[15];
	struct<3> Local_2064[22];
	struct<13> Local_2065[22];
	struct<3> Local_2066 = { 0, 0, 0 } ;
	struct<3> Local_2067 = { 0, 0, 0 } ;
	struct<3> Local_2068 = { 0, 0, 0 } ;
	struct<3> Local_2069 = { 0, 0, 0 } ;
	struct<3> Local_2070[6];
	struct<3> Local_2071 = { 0, 0, 0 } ;
	var uLocal_2072[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_2073[3] = { 0, 0, 0 };
	int* iLocal_2074 = NULL;
	int* iLocal_2075 = NULL;
	var uLocal_2076[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2077[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_2078 = 0f;
	float fLocal_2079 = 0f;
	float fLocal_2080 = 0f;
	float fLocal_2081 = 0f;
	float fLocal_2082 = 0f;
	float fLocal_2083 = 0f;
	float fLocal_2084 = 0f;
	float fLocal_2085 = 0f;
	float fLocal_2086 = 0f;
	float fLocal_2087 = 0f;
	float fLocal_2088 = 0f;
	float fLocal_2089 = 0f;
	int iLocal_2090 = 0;
	float fLocal_2091 = 0f;
	float fLocal_2092 = 0f;
	float fLocal_2093 = 0f;
	int iLocal_2094 = 0;
	struct<3> Local_2095 = { 0, 0, 0 } ;
	struct<3> Local_2096 = { 0, 0, 0 } ;
	struct<3> Local_2097 = { 0, 0, 0 } ;
	struct<3> Local_2098 = { 0, 0, 0 } ;
	struct<3> Local_2099 = { 0, 0, 0 } ;
	struct<3> Local_2100 = { 0, 0, 0 } ;
	struct<3> Local_2101 = { 0, 0, 0 } ;
	struct<3> Local_2102 = { 0, 0, 0 } ;
	struct<3> Local_2103 = { 0, 0, 0 } ;
	struct<3> Local_2104 = { 0, 0, 0 } ;
	float fLocal_2105 = 0f;
	float fLocal_2106 = 0f;
	struct<3> Local_2107 = { 0, 0, 0 } ;
	struct<3> Local_2108 = { 0, 0, 0 } ;
	struct<3> Local_2109 = { 0, 0, 0 } ;
	struct<3> Local_2110 = { 0, 0, 0 } ;
	struct<3> Local_2111 = { 0, 0, 0 } ;
	struct<3> Local_2112 = { 0, 0, 0 } ;
	struct<3> Local_2113 = { 0, 0, 0 } ;
	struct<3> Local_2114 = { 0, 0, 0 } ;
	struct<3> Local_2115 = { 0, 0, 0 } ;
	struct<3> Local_2116 = { 0, 0, 0 } ;
	struct<3> Local_2117 = { 0, 0, 0 } ;
	struct<3> Local_2118 = { 0, 0, 0 } ;
	struct<3> Local_2119 = { 0, 0, 0 } ;
	struct<3> Local_2120 = { 0, 0, 0 } ;
	struct<3> Local_2121 = { 0, 0, 0 } ;
	struct<3> Local_2122 = { 0, 0, 0 } ;
	struct<6> Local_2123 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_2124 = 0;
	var uLocal_2125 = 1092616192;
	var uLocal_2126 = 1101004800;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 3;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	int iLocal_2143 = 0;
	var uLocal_2144 = 16;
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
	int iLocal_2316 = 0;
	int iLocal_2317 = 0;
	int iLocal_2318 = 0;
	struct<25> Local_2319[2];
	struct<89> Local_2320 = { 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	int iLocal_2323 = 0;
	int iLocal_2324 = 0;
	int iLocal_2325 = 0;
	int iLocal_2326 = 0;
	int iLocal_2327 = 0;
	int iLocal_2328 = 0;
	int iLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	int iLocal_2332 = 0;
	int iLocal_2333 = 0;
	int iLocal_2334 = 0;
	int iLocal_2335 = 0;
	int iLocal_2336 = 0;
	int iLocal_2337 = 0;
	int iLocal_2338 = 0;
	int iLocal_2339 = 0;
	int iLocal_2340 = 0;
	int iLocal_2341 = 0;
	int iLocal_2342 = 0;
	int iLocal_2343 = 0;
	int iLocal_2344 = 0;
	int iLocal_2345 = 0;
	struct<3> Local_2346 = { 0, 0, 0 } ;
	int iLocal_2347 = 0;
	int iLocal_2348 = 0;
	float fLocal_2349 = 0f;
	int iLocal_2350 = 0;
	int iLocal_2351 = 0;
	int iLocal_2352 = 0;
	int iLocal_2353 = 0;
	int iLocal_2354 = 0;
	char* sLocal_2355 = NULL;
	int iLocal_2356 = 0;
	int iLocal_2357 = 0;
	int iLocal_2358 = 0;
	int iLocal_2359 = 0;
	int iLocal_2360 = 0;
	int iLocal_2361 = 0;
	int iLocal_2362 = 0;
	struct<3> Local_2363 = { 0, 0, 0 } ;
	int iLocal_2364 = 0;
	int iLocal_2365 = 0;
	int iLocal_2366 = 0;
	int iLocal_2367 = 0;
	int iLocal_2368 = 0;
	int iLocal_2369 = 0;
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
	iLocal_1795 = AUDIO::GET_SOUND_ID();
	iLocal_1797 = AUDIO::GET_SOUND_ID();
	iLocal_1800 = -1;
	bLocal_1849 = true;
	iLocal_1876 = 1;
	fLocal_1890 = 1f;
	fLocal_1891 = 0.48f;
	fLocal_1892 = 0.42f;
	fLocal_1893 = -5.7f;
	fLocal_1894 = 9.8f;
	fLocal_1895 = 30f;
	fLocal_1896 = 7f;
	fLocal_1897 = 7f;
	fLocal_1898 = 10.1f;
	Local_1902 = { -53.6982f, -2415.79f, 5.05f };
	Local_1905 = { -1.3f, -6.08f, 1.4f };
	Local_1906 = { 1.3f, -6.08f, 1.4f };
	Local_1915 = { -0.8f, 0f, 0f };
	Local_1916 = { -2f, 0f, 1.3f };
	Local_1917 = { 0f, 0f, 0f };
	iLocal_1950 = joaat("prop_dock_rtg_ld");
	iLocal_1951 = joaat("p_dock_crane_sld_s");
	iLocal_1952 = joaat("p_dock_rtg_ld_cab");
	iLocal_1953 = joaat("prop_container_ld");
	iLocal_1954 = joaat("p_dock_rtg_ld_wheel");
	iLocal_1955 = joaat("p_dock_rtg_ld_wheel");
	iLocal_1956 = joaat("p_dock_rtg_ld_wheel");
	iLocal_1957 = joaat("prop_cntrdoor_ld_l");
	iLocal_1958 = joaat("prop_cntrdoor_ld_r");
	iLocal_1959 = iLocal_1954;
	fLocal_2029 = 133.1177f;
	fLocal_2031 = 30.6234f;
	fLocal_2032 = 30.6234f;
	fLocal_2033 = 233.1648f;
	fLocal_2035 = 0.8f;
	fLocal_2036 = 0.8f;
	fLocal_2037 = 3.1f;
	fLocal_2038 = 3.5f;
	Local_2058 = { -1154.9279f, -1521.5001f, 9.6346f };
	Local_2059 = { -1154.9279f, -1521.5001f, 9.6346f };
	Local_2060 = { -1149.9487f, -1528.3273f, 3.2755f };
	Local_2061 = { -1149.9487f, -1526.3273f, 3.2755f };
	Local_2066 = { 18.1416f, -2532.4927f, 5.0504f };
	Local_2067 = { -95.8455f, -2455.7607f, 5.0191f };
	Local_2068 = { 12.2127f, -2531.0344f, 5.0509f };
	Local_2069 = { -59.0169f, -2531.692f, 5.0103f };
	Local_2071 = { -52.94f, -2415.64f, 14.76f };
	fLocal_2078 = 5.5f;
	fLocal_2079 = -6.4f;
	fLocal_2080 = -3f;
	fLocal_2081 = -14f;
	fLocal_2082 = 5f;
	fLocal_2083 = -56.6f;
	fLocal_2084 = 3f;
	fLocal_2085 = 3f;
	fLocal_2086 = 3f;
	fLocal_2087 = 5f;
	fLocal_2088 = 3f;
	fLocal_2089 = 3f;
	iLocal_2090 = 120;
	fLocal_2091 = 1.4f;
	fLocal_2092 = 4f;
	fLocal_2093 = 1.3f;
	Local_2095 = { 15.1064f, -25.8022f, 11.841f };
	Local_2096 = { 13.6553f, -23.6718f, 10.3063f };
	Local_2097 = { 20f, -21.4f, 14.2f };
	Local_2098 = { 2.8f, -2.8f, 4.343f };
	Local_2099 = { 15.1069f, -25.8024f, 11.8412f };
	Local_2100 = { 13.6548f, -23.6745f, 10.3039f };
	Local_2101 = { 15.1069f, -25.5991f, -10f };
	Local_2102 = { 13.6548f, -23.1884f, -10.5f };
	Local_2103 = { -1.512f, 0f, -1.078f };
	Local_2104 = { -89f, 0f, -90f };
	fLocal_2105 = 100f;
	fLocal_2106 = 45.0193f;
	Local_2107 = { -2.6f, -1f, 0.285f };
	Local_2108 = { 1f, -2.55f, 1.75f };
	Local_2109 = { 2.6f, -1f, 0.285f };
	Local_2110 = { 1f, 2.65f, 1.75f };
	Local_2111 = { -2.6f, 1f, 0.285f };
	Local_2112 = { -1f, -2.55f, 1.75f };
	Local_2113 = { 2.6f, 1f, 0.285f };
	Local_2114 = { -1f, 2.65f, 1.75f };
	Local_2115 = { 2.6f, 0.05f, 0.285f };
	Local_2116 = { -0.05f, 2.65f, 1.75f };
	Local_2117 = { 2.6f, -0.05f, 0.285f };
	Local_2118 = { 0.05f, 2.65f, 1.75f };
	Local_2119 = { -2.6f, 0.05f, 0.285f };
	Local_2120 = { -0.05f, -2.55f, 1.75f };
	Local_2121 = { -2.6f, -0.05f, 0.285f };
	Local_2122 = { 0.05f, -2.55f, 1.75f };
	iLocal_2143 = joaat("WEAPON_ADVANCEDRIFLE");
	iLocal_2316 = 3;
	iLocal_2326 = 270;
	iLocal_2327 = 225;
	iLocal_2328 = -1;
	iLocal_2329 = 9999;
	iLocal_2357 = 1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_869();
		__LIB_0__::func_681(20, 0);
		iLocal_1760 = 0;
		func_861(0, 0);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistSetup", 0);
		if (iLocal_1787 > MISC::GET_GAME_TIMER())
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (iLocal_1805)
		{
			func_858();
		}
		if (iLocal_1809)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iLocal_2024))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2024, "Generic_Alarm_Electronic_01", 0, true);
			}
		}
		if (iLocal_2317 == 9)
		{
			if (iLocal_2021 > 5)
			{
				if (iLocal_2021 != 99 || iLocal_2021 != 98)
				{
					func_857();
				}
			}
		}
		if (iLocal_2317 == 10)
		{
			func_857();
		}
		if (iLocal_2317 > 5)
		{
			TASK::SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(25.3383f);
		}
		if (iLocal_2317 < 9)
		{
			func_856();
			func_855();
		}
		if (iLocal_2317 > 5 && iLocal_2317 < 9)
		{
			func_854();
		}
		func_853();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_2317 > 0 && iLocal_2317 < 5)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_2066, true) < 200f)
				{
					func_847(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
			}
			else if (iLocal_2317 > 0)
			{
				if (iLocal_2317 > 4 && Local_1962[0 /*16*/].f_4 > 7)
				{
					if (iLocal_1972[12] == 1)
					{
						iLocal_1972[12] = 0;
					}
					if (iLocal_1972[1] == 1)
					{
						iLocal_1972[1] = 0;
					}
					if (iLocal_1972[2] == 1)
					{
						iLocal_1972[2] = 0;
					}
					if (iLocal_1972[3] == 1)
					{
						iLocal_1972[3] = 0;
					}
					if (iLocal_1972[5] == 1)
					{
						iLocal_1972[5] = 0;
					}
					if (iLocal_1972[7] == 1)
					{
						iLocal_1972[7] = 0;
					}
					if (iLocal_1972[4] == 1)
					{
						iLocal_1972[4] = 0;
					}
					iLocal_2022 = 0;
					while (iLocal_2022 < Local_1960.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1960[iLocal_2022 /*8*/]))
						{
							func_846(&(Local_1960[iLocal_2022 /*8*/]), 1, 0);
						}
						iLocal_2022++;
					}
					iLocal_2022 = 0;
					while (iLocal_2022 < Local_1965.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1965[iLocal_2022 /*16*/]))
						{
							func_845(&(Local_1965[iLocal_2022 /*16*/]), 1, 0);
						}
						iLocal_2022++;
					}
					iLocal_2022 = 0;
					while (iLocal_2022 < Local_1967.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1967[iLocal_2022 /*16*/]))
						{
							func_845(&(Local_1967[iLocal_2022 /*16*/]), 1, 0);
						}
						iLocal_2022++;
					}
					iLocal_2022 = 0;
					while (iLocal_2022 < Local_1971.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1971[iLocal_2022 /*16*/]))
						{
							func_845(&(Local_1971[iLocal_2022 /*16*/]), 1, 0);
						}
						iLocal_2022++;
					}
					iLocal_2022 = 0;
					while (iLocal_2022 < Local_1964.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1964[iLocal_2022 /*16*/]))
						{
							func_845(&(Local_1964[iLocal_2022 /*16*/]), 1, 0);
						}
						iLocal_2022++;
					}
					iLocal_2022 = 0;
					while (iLocal_2022 < Local_1970.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1970[iLocal_2022 /*16*/]))
						{
							func_845(&(Local_1970[iLocal_2022 /*16*/]), 1, 0);
						}
						iLocal_2022++;
					}
					iLocal_2022 = 0;
					while (iLocal_2022 < Local_1963.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1963[iLocal_2022 /*16*/]))
						{
							func_845(&(Local_1963[iLocal_2022 /*16*/]), 1, 0);
						}
						iLocal_2022++;
					}
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
					STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_b");
					STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@base");
				}
			}
		}
		func_844();
		func_843();
		if (iLocal_2317 < 4)
		{
			if (Global_32196 == 0)
			{
				Global_32196 = 1;
			}
		}
		else if (Global_32196 == 1)
		{
			__LIB_0__::func_635(2, PLAYER::PLAYER_PED_ID());
			__LIB_0__::func_635(3, PLAYER::PLAYER_PED_ID());
			Global_32196 = 0;
		}
		if (iLocal_2317 > 8)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 497.62558f, -3113.2363f, 4.570056f, 471.18622f, -3113.17f, 15.352262f, 13.25f, false, true, 0))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
		}
		if (iLocal_2317 > 2 && iLocal_2317 < 9)
		{
			func_840();
		}
		if (iLocal_2317 >= 4)
		{
			func_837();
		}
		switch (iLocal_2317)
		{
			case 0:
				func_813();
				break;
			case 1:
				func_713();
				break;
			case 2:
				func_704();
				break;
			case 3:
				func_700();
				break;
			case 4:
				func_685();
				break;
			case 5:
				func_678();
				break;
			case 6:
				func_675();
				break;
			case 7:
				func_656();
				break;
			case 8:
				func_623();
				break;
			case 9:
				func_573();
				break;
			case 10:
				func_334();
				break;
			case 11:
				func_329();
				break;
			case 12:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x982
{
	char* sVar0;
	int iVar1;
	int iVar2;
	AUDIO::TRIGGER_MUSIC_EVENT("AHP1_FAIL");
	switch (iLocal_2323)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED";
			break;
		case 5:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FL";
			break;
		case 6:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FD";
			break;
		case 7:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_WL";
			break;
		case 20:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_WD";
			break;
		case 4:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FFLD";
			break;
		case 3:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FLD";
			break;
		case 1:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TTD";
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TTS";
			break;
		case 10:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TRD";
			break;
		case 11:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_TRS";
			break;
		case 8:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_CBL";
			break;
		case 9:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_CBL";
			break;
		case 14:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_DC";
			break;
		case 16:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_DC";
			break;
		case 12:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_HD";
			break;
		case 13:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_HS";
			break;
		case 15:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_HCD";
			break;
		case 18:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_FWD";
			break;
		case 17:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_AD";
			break;
		case 19:
			HUD::CLEAR_PRINTS();
			sVar0 = "AW_FAILED_DTC";
			break;
	}
	func_316(sVar0);
	__LIB_0__::func_681(20, 0);
	if (__LIB_16__::func_55(141) != 0)
	{
		__LIB_0__::func_544(141, 0, 0, 1, 0);
	}
	if (__LIB_16__::func_55(139) != 0)
	{
		__LIB_0__::func_544(139, 0, 0, 1, 0);
	}
	if (__LIB_16__::func_55(140) != 0)
	{
		__LIB_0__::func_544(140, 0, 0, 1, 0);
	}
	while (!__LIB_0__::func_223())
	{
		if (bLocal_1853)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 8)
			{
				PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_2320.f_15[iVar1]);
				PHYSICS::STOP_ROPE_WINDING(Local_2320.f_15[iVar1]);
				iVar1++;
			}
		}
		SYSTEM::WAIT(0);
	}
	__LIB_13__::func_803(2, iLocal_1848);
	func_9();
	if (iLocal_2318 > 2)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
					{
						if ((((VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("handler")) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("hauler"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("forklift"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("barracks"))) || VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("barracks2")))
						{
						}
						if (ENTITY::GET_ENTITY_MODEL(iVar2) == __LIB_13__::func_741(2, 0))
						{
							__LIB_14__::func_555(27.8582f, -2553.9465f, 5.0001f, 263.0292f);
						}
					}
				}
			}
		}
		__LIB_0__::func_507(20.1336f, -2536.1494f, 5.0502f, 232.2569f);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar2, __LIB_13__::func_741(2, 0)))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar2, -1, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar2, -1);
						}
					}
				}
			}
		}
	}
	func_861(0, 0);
}

void func_9()//Position - 0x1029
{
	__LIB_15__::func_986(&Global_103950);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_10(PLAYER::PLAYER_PED_ID(), &(Global_100166[__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()) /*65*/]), 0, 0, 1, 0);
	}
}

void func_10(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x105F
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
			if (func_302(iParam0, iVar1, &iVar2, 0))
			{
				func_287(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_228(iParam0, iVar1, &iVar2))
			{
				func_287(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_225(iParam0);
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
			func_23(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_23(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_23(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1E0D
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
			func_171(iVar5, iParam1, iParam2, 1);
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
						func_171(iVar5, 10, 0, 1);
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
									func_171(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_23(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_171(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_161(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_23(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_155(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_171(iVar5, 14, uVar18[iVar1], 1);
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
							func_23(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_171(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_23(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_146(iParam0);
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
						func_23(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_23(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_143(iVar5, iVar24, iVar23, iVar25);
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
							func_23(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_23(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_23(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_23(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_23(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_23(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_23(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_155(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_143(iVar5, func_161(iParam0, 8, -1), iParam2, func_161(iParam0, 4, -1));
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
				func_75(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_143(iVar5, iParam2, iVar44, iVar45);
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
			func_155(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_143(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_23(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_23(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_143(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_143(iVar5, iVar58, iVar57, iParam2);
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
						func_23(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_143(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_23(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_47(iParam0, 9, iVar63))
						{
							func_23(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_23(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_23(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_23(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_161(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_161(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_23(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_23(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_23(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_23(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_23(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_23(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_23(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_23(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_23(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_23(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_146(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_23(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_23(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_24(iParam0, &uVar4))
		{
			func_23(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_23(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_23(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_23(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_161(iParam0, 3, -1), iVar10);
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
				func_23(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_24(int iParam0, var uParam1)//Position - 0x3CB7
{
	int iVar0;
	int iVar1;
	*uParam1 = func_161(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_47(iParam0, iVar1, iVar0))
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

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x7FDE
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
				if (!func_47(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_47(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_47(iParam0, 14, iVar6))
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
			if (!func_47(iParam0, 14, uVar11[iVar10]))
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
						return func_47(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_47(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_75(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xFD28
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
	func_76(iParam0, bParam3, 0, -1);
}

void func_76(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xFD75
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
		bVar3 = func_122(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_113(iParam0, iParam3);
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

int func_113(int iParam0, int iParam1)//Position - 0x1EFA1
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
				iVar3 = func_161(iParam0, 11, -1);
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
				iVar5 = func_161(iParam0, 11, -1);
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

int func_122(int iParam0, bool bParam1)//Position - 0x1F3FF
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_161(iParam0, 11, -1), 0);
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
						iVar3 = func_161(iParam0, 11, -1);
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
						iVar5 = func_161(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_161(iParam0, 11, -1), 0);
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
						iVar8 = func_161(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_161(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_161(iParam0, 11, -1), 0);
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
						iVar12 = func_161(iParam0, 8, -1);
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

int func_143(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x282CA
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
					iVar0 = func_143(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_143(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_146(int iParam0)//Position - 0x2977F
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
		if (!func_151(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_151(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2A149
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_161(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2CB32
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_225(iParam0))
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

int func_161(int iParam0, int iParam1, int iParam2)//Position - 0x2CDE1
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
				if (func_47(iParam0, iParam1, iVar0))
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
				if (func_47(iParam0, iParam1, iVar1))
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

void func_171(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2FB54
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
							func_171(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_171(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_171(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_171(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_171(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_171(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_171(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_171(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_171(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_171(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_225(int iParam0)//Position - 0x4CCA7
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
				iVar1 = func_161(iParam0, 11, -1);
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
				iVar3 = func_161(iParam0, 11, -1);
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

int func_228(int iParam0, int iParam1, int iParam2)//Position - 0x4D019
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_229(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0, int iParam1, int iParam2)//Position - 0x4D0A5
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
				if (!func_229(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_229(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_229(iParam0, 14, iVar4))
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
			if (!func_229(iParam0, 14, uVar8[iVar7]))
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

int func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x5FB40
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
										func_287(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_287(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_291(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_302(iParam0, iVar10, &iVar4, 1))
							{
								func_287(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_287(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_287(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_287(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_287(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_287(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_287(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_287(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_287(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_287(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_302(iParam0, iVar10, &iVar4, 0))
		{
			func_287(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_228(iParam0, iVar10, &iVar4))
		{
			func_287(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_291(int iParam0, int iParam1, int iParam2)//Position - 0x604E2
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
				if (func_229(iParam0, iParam1, iVar0))
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
				if (func_229(iParam0, iParam1, iVar1))
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

int func_302(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6219F
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_229(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_316(char* sParam0)//Position - 0x668F0
{
	__LIB_0__::func_381(sParam0);
	func_317(0);
}

void func_317(int iParam0)//Position - 0x66903
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_318(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_318(int iParam0)//Position - 0x66948
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
	func_319(&(Global_113386.f_2363.f_539), iVar1);
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

void func_319(var uParam0, int iParam1)//Position - 0x66A58
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
			if (!func_321(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_321(int iParam0, var uParam1, float fParam2)//Position - 0x66C2C
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
			return func_321(8, uParam1, fParam2);
			break;
		case 10:
			return func_321(8, uParam1, fParam2);
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

void func_329()//Position - 0x6787E
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_0__::func_630(579);
	__LIB_16__::func_917(1, 1, 1);
	__LIB_0__::func_681(20, 1);
	if (__LIB_16__::func_55(141) != 1)
	{
		__LIB_0__::func_544(141, 1, 0, 1, 0);
	}
	if (__LIB_16__::func_55(139) != 1)
	{
		__LIB_0__::func_544(139, 1, 0, 1, 0);
	}
	if (__LIB_16__::func_55(140) != 1)
	{
		__LIB_0__::func_544(140, 1, 0, 1, 0);
	}
	__LIB_0__::func_526(1, 0);
	func_861(0, 1);
}

void func_334()//Position - 0x67AAA
{
	int iVar0;
	int iVar1;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1147.401f, -1522.5767f, 9.413f, true) < 30f)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	}
	if (iLocal_2021 > 0)
	{
		if (iLocal_2369 == 0)
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_2368 == 0)
				{
					iLocal_2368 = 1;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
					iLocal_2367 = MISC::GET_GAME_TIMER();
				}
			}
			else if (iLocal_2368 == 0)
			{
				iLocal_2368 = 1;
			}
			if (__LIB_0__::func_611(&iLocal_2366, 60000) || (__LIB_0__::func_611(&iLocal_2367, 7500) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_570())
					{
						if (func_569(&Local_48, 20, "D1AUD", "DS1_12", 9, 0, 0, 1))
						{
							iLocal_2369 = 1;
						}
					}
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1150.459f, -1521.5513f, 9.632723f, -1153.7548f, -1516.6011f, 12.382723f, 22.25f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.8f);
	}
	func_568();
	switch (iLocal_2021)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_566();
			}
			while (!func_565(10))
			{
				SYSTEM::WAIT(0);
			}
			STREAMING::REQUEST_MODEL(joaat("tiptruck"));
			__LIB_0__::func_424(0);
			__LIB_38__::func_768(9, "Drive home", 1, 0, 0, 1);
			__LIB_15__::func_955(6, 0);
			__LIB_16__::func_793(6, 0);
			__LIB_0__::func_544(139, 1, 0, 1, 0);
			__LIB_0__::func_544(140, 1, 0, 1, 0);
			__LIB_0__::func_544(141, 1, 0, 1, 0);
			iLocal_1813 = 0;
			iLocal_1781 = AUDIO::GET_SOUND_ID();
			func_489(1);
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
			AUDIO::RELEASE_AMBIENT_AUDIO_BANK();
			iLocal_2366 = MISC::GET_GAME_TIMER();
			iLocal_2369 = 0;
			__LIB_0__::func_222(&Local_48, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_222(&Local_48, 0, 0, "NERVOUSRON", 0, 1);
			iLocal_2021++;
			break;
		case 1:
			iLocal_2021++;
			break;
		case 2:
			if (!func_487("Floyd_Beating"))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("SCRIPT\PORT_OF_LS_01_FLOYD_BEATING", false, -1))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1781, "Floyd_Beating", 479f, -3106f, 8f, "DOCKS_HEIST_SETUP_SOUNDS", false, 0, false);
					func_484("Floyd_Beating", 1);
				}
			}
			if (STREAMING::HAS_MODEL_LOADED(joaat("tiptruck")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2048))
				{
					func_483(&iLocal_2048, joaat("tiptruck"), 465.8751f, -3037.0837f, 5.0686f, 126.3433f, -1, 1f, 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!iLocal_1845)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1147.401f, -1522.5767f, 9.413f) < 5625f)
					{
						__LIB_0__::func_681(20, 1);
						iLocal_1845 = 1;
					}
				}
				else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1147.401f, -1522.5767f, 9.413f) > 6400f)
				{
					__LIB_0__::func_681(16, 0);
					iLocal_1845 = 0;
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1147.401f, -1522.5767f, 9.413f, true) < 30f)
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 3f);
			}
			if (!func_487("Pin interior"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1147.401f, -1522.5767f, 9.413f, true) < 100f)
				{
					iLocal_1919 = INTERIOR::GET_INTERIOR_AT_COORDS(-1158.3411f, -1520.893f, 9.6345f);
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					if (INTERIOR::IS_VALID_INTERIOR(iLocal_1919))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1919);
						func_484("Pin interior", 1);
					}
				}
			}
			else
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1147.401f, -1522.5767f, 9.413f, true) < 100f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
					{
						func_405(7, Local_2061, fLocal_2032);
					}
					else if (!func_487("wade_sit_couch"))
					{
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
						TASK::REQUEST_WAYPOINT_RECORDING("d1leadin");
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1leadinoutlsdhs_mcs_3") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("d1leadin"))
							{
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 0, 0, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 1, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 3, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 4, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 5, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 6, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 10, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 11, 0, 0, 0);
								TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("d1leadin", true, 1f, 0.5f);
								iLocal_1799 = PED::CREATE_SYNCHRONIZED_SCENE(-1158.595f, -1519.261f, 9.608f, 0f, 0f, -51f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2042, iLocal_1799, "missheistdockssetup1leadinoutlsdhs_mcs_3", "wade_sit_couch", 1000f, -1000f, 4, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1799, true);
								PED::SET_PED_KEEP_TASK(iLocal_2042, true);
								func_484("wade_sit_couch", 1);
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1147.401f, -1522.5767f, 9.413f, true) > 120f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
					{
						PED::DELETE_PED(&iLocal_2042);
						func_484("wade_sit_couch", 0);
					}
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					if (iLocal_1919 != 0)
					{
						INTERIOR::UNPIN_INTERIOR(iLocal_1919);
						func_484("Pin interior", 0);
					}
				}
			}
			if (__LIB_16__::func_39(&Local_2123, -1156.1887f, -1519.613f, 9.6327f, 0.1f, 0.1f, 2f, 1, "AW_RETURN_HOME", 1, 1, -1))
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1781))
				{
					AUDIO::STOP_SOUND(iLocal_1781);
					AUDIO::RELEASE_SOUND_ID(iLocal_1781);
				}
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
				iLocal_2021++;
			}
			else
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1153.9951f, -1518.8536f, 9.632723f, -1155.0956f, -1517.3762f, 12.382723f, 2.25f, false, true, 0))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1781))
					{
						AUDIO::STOP_SOUND(iLocal_1781);
						AUDIO::RELEASE_SOUND_ID(iLocal_1781);
					}
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					iLocal_2021++;
				}
				iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
				if (iVar0 == 0)
				{
					iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
					if (iVar1 == 4)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1149.638f, -1522.3674f, 9.382867f, -1151.3535f, -1519.9012f, 12.382729f, 1.5f, false, true, 0))
						{
							if (!func_487("DS1_MCS3LI"))
							{
								if (!__LIB_13__::func_755(&Local_2123, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_16__::func_9(&Local_48, "D1AUD", "DS1_MCS3LI", "DS1_MCS3LI_3", 7, 0, 0))
										{
											func_484("DS1_MCS3LI", 1);
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
			iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
			if (iVar0 == 0)
			{
				iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				if (iVar1 != 4)
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_3");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1leadinoutlsdhs_mcs_3"))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
							TASK::TASK_SWAP_WEAPON(0, true);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1155.5874f, -1518.9718f, 9.6327f, 1f, 20000, 0.25f, 1, 40000f);
							TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1leadinoutlsdhs_mcs_3", "trevor_react", 4f, -4f, -1, 0, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_2056);
						}
						SYSTEM::SETTIMERB(0);
						iLocal_2021++;
					}
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					SYSTEM::SETTIMERB(1500);
					iLocal_2021++;
				}
			}
			break;
		case 4:
			if (SYSTEM::TIMERB() > 420)
			{
				if (!__LIB_0__::func_77(0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				}
				if (SYSTEM::TIMERB() > 1500)
				{
					iVar0 = CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
					if (iVar0 == 0)
					{
						iVar1 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
						if (iVar1 != 4)
						{
							if (!func_487("DS1_MCS3LI"))
							{
								if (!__LIB_13__::func_755(&Local_2123, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_MCS3LI", 7, 0, 0, 0))
										{
											func_484("DS1_MCS3LI", 1);
										}
									}
								}
							}
							else if (!__LIB_0__::func_75())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
								{
									if (!PED::IS_PED_INJURED(iLocal_2042))
									{
										Global_96938.f_9[0] = iLocal_2042;
									}
								}
								func_336();
								func_335();
							}
						}
						else if (!__LIB_0__::func_75())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
							{
								if (!PED::IS_PED_INJURED(iLocal_2042))
								{
									Global_96938.f_9[0] = iLocal_2042;
								}
							}
							func_336();
							func_335();
						}
					}
				}
			}
			break;
	}
}

void func_335()//Position - 0x6833C
{
	iLocal_2317++;
	func_336();
}

void func_336()//Position - 0x68350
{
	iLocal_2021 = 0;
	iLocal_2023 = 0;
	iLocal_2020 = 0;
	bLocal_1869 = false;
	iLocal_1855 = 0;
	iLocal_2094 = 0;
	__LIB_16__::func_21(&Local_2123, 0);
	iLocal_1873[0] = 0;
	iLocal_1873[1] = 0;
	iLocal_1873[2] = 0;
}

int func_405(int iParam0, struct<3> Param1, float fParam2)//Position - 0x6B6FF
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2050))
				{
					func_483(&iLocal_2050, joaat("hauler"), -117.9839f, -2416.6272f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false))
					{
						func_483(&iLocal_2051, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2050, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_2050), -1, 0, 1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2051, 1, true);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_2050, 0, false);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_2050, 1, false);
						__LIB_0__::func_679(iLocal_2051, 0);
						__LIB_0__::func_679(iLocal_2050, 1);
						return 1;
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2051, false))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2051, 1, true);
					}
					return 1;
				}
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_contr_03b_ld"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_contr_03b_ld")))
				{
					iLocal_1912[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), -96.71f, -2455.31f, 5.02f, true, true, false);
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_1912[0]))
					{
						OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1912[0], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, -1f, -1f);
					}
					ENTITY::SET_ENTITY_ROTATION(iLocal_1912[0], 0f, 0f, 55f, 2, true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_1912[0], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
			{
				iLocal_1912[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), -99.99f, -2461.02f, 5.02f, true, true, false);
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_1912[1]))
				{
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1912[1], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, -1f, -1f);
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_1912[1], 0.03f, 0.02f, 54.13f, 2, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_1912[1], true);
			}
			else
			{
				return 1;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_contr_03b_ld"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_contr_03b_ld")))
				{
					iLocal_1912[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), 42.8294f, -2476.966f, 4.933219f, true, true, false);
					if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_1912[0]))
					{
						OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1912[0], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, -1f, -1f);
					}
					ENTITY::SET_ENTITY_ROTATION(iLocal_1912[0], 0f, 0f, 55.24812f, 2, true);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_1912[0], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
			{
				iLocal_1912[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_contr_03b_ld"), 39.75147f, -2481.1128f, 4.981983f, true, true, false);
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_1912[1]))
				{
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1912[1], 5000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, -1f, -1f);
				}
				ENTITY::SET_ENTITY_ROTATION(iLocal_1912[1], 0f, 0f, 55.002975f, 2, true);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_1912[1], true);
			}
			else
			{
				return 1;
			}
			break;
		case 4:
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
				{
					func_483(&iLocal_2047, joaat("hauler"), 479.47f, -3109.19f, 6.28f, 180.19f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
					{
						func_483(&iLocal_2052, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2047, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_2047), -1, 0, 1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, false);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_2047, 0, 0);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2047, false);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_2047);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_2052);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
						__LIB_0__::func_679(iLocal_2047, 2);
						__LIB_0__::func_679(iLocal_2052, 3);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_2047, 0, false);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_2047, 1, false);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
		case 12:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2041) && ENTITY::DOES_ENTITY_EXIST(uLocal_2039[4])) && ENTITY::DOES_ENTITY_EXIST(uLocal_2039[5]))
						{
							if ((!PED::IS_PED_INJURED(iLocal_2041) && !PED::IS_PED_INJURED(uLocal_2039[4])) && !PED::IS_PED_INJURED(uLocal_2039[5]))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1779))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2041, true);
									PED::REMOVE_PED_FROM_GROUP(iLocal_2041);
									iLocal_1779 = PED::CREATE_SYNCHRONIZED_SCENE(478.596f, -3116.911f, 5.069f, 0f, 0f, 53.446f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1779, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_dockworker", 2f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_2039[4], iLocal_1779, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard1", 2f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(uLocal_2039[5], iLocal_1779, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard2", 2f, -8f, 1, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1779, true);
									return 1;
								}
							}
						}
						else if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2039[4]))
							{
								func_481(4, 0);
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2039[5]))
							{
								func_481(5, 0);
							}
						}
					}
				}
			}
			else if (__LIB_16__::func_930(&iLocal_2041, 32, 479.753f, -3114.32f, 5.07f, 0f, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_2041, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2041, true);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2041, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2041, joaat("PLAYER"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2041, iLocal_151);
				ENTITY::SET_ENTITY_PROOFS(iLocal_2041, false, false, false, true, false, false, false, false);
				PED::SET_PED_AS_ENEMY(iLocal_2041, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_2041, 151, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2041, true, false);
				__LIB_0__::func_222(&Local_48, 3, iLocal_2041, "FLOYD", 0, 1);
			}
			break;
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				__LIB_16__::func_939(&iLocal_2044, 2, Param1, fParam2, 1, 0);
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("bodhi2")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2044, true);
						__LIB_0__::func_377(iLocal_2044, -1);
						__LIB_0__::func_505(iLocal_2044, -1);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_2044, true);
						VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_2044, true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2044, false, 0);
						VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_2044, false);
						return 1;
					}
				}
			}
			break;
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
			{
				if (__LIB_16__::func_930(&iLocal_2041, 32, Param1, fParam2, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_2041, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2041, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2041, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2041, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2041, iLocal_151);
					ENTITY::SET_ENTITY_PROOFS(iLocal_2041, false, false, false, true, false, false, false, false);
					PED::SET_PED_AS_ENEMY(iLocal_2041, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_2041, 151, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2041, true, false);
					__LIB_0__::func_222(&Local_48, 3, iLocal_2041, "FLOYD", 0, 1);
					if (iLocal_2317 == 1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 1, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 8, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 11, 0, 0, 0);
						PED::CLEAR_ALL_PED_PROPS(iLocal_2041);
					}
					return 1;
				}
			}
			else
			{
				if (Local_48[3 /*10*/] != iLocal_2041)
				{
					__LIB_0__::func_222(&Local_48, 3, iLocal_2041, "FLOYD", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_2041, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2041, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2041, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2041, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2041, iLocal_151);
					ENTITY::SET_ENTITY_PROOFS(iLocal_2041, false, false, false, true, false, false, false, false);
					PED::SET_PED_AS_ENEMY(iLocal_2041, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_2041, 151, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2041, true, false);
				}
				return 1;
			}
			break;
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
			{
				if (__LIB_16__::func_930(&iLocal_2042, 24, Param1, fParam2, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_2042, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2042, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2042, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2042, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2042, iLocal_151);
					ENTITY::SET_ENTITY_PROOFS(iLocal_2042, false, false, false, true, false, false, false, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_2042, 151, true);
					PED::SET_PED_AS_ENEMY(iLocal_2042, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2042, true, false);
					__LIB_0__::func_222(&Local_48, 4, iLocal_2042, "WADE", 0, 1);
					return 1;
				}
			}
			else
			{
				if (Local_48[4 /*10*/] != iLocal_2042)
				{
					__LIB_0__::func_222(&Local_48, 4, iLocal_2042, "WADE", 0, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_2042))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_2042, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2042, true);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2042, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2042, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2042, iLocal_151);
					ENTITY::SET_ENTITY_PROOFS(iLocal_2042, false, false, false, true, false, false, false, false);
					PED::SET_PED_CONFIG_FLAG(iLocal_2042, 151, true);
					PED::SET_PED_AS_ENEMY(iLocal_2042, false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2042, true, false);
				}
				return 1;
			}
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2043))
			{
				STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2043))
					{
						func_407(&iLocal_2043, joaat("S_M_M_DockWork_01"), Local_2068, fLocal_2033, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2043, 16);
						PED::SET_PED_CAPSULE(iLocal_2043, 0.4f);
						return 1;
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("handler"), 3);
				STREAMING::REQUEST_MODEL(joaat("handler"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("handler")))
				{
					func_483(&iLocal_2045, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 0, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2045, 5f);
					VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_2045, false);
					__LIB_0__::func_679(iLocal_2045, 4);
					return 1;
				}
			}
			else
			{
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("handler"), 3);
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("handler")))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						return 1;
					}
				}
			}
			break;
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2053))
			{
				STREAMING::REQUEST_MODEL(joaat("towtruck"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("towtruck")))
				{
					func_483(&iLocal_2053, joaat("towtruck"), 505.882f, -3053.231f, 5.0695f, 180.3786f, -1, 0, 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_2053, "5T3ALM3");
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case 11:
			if ((!ENTITY::DOES_ENTITY_EXIST(uLocal_2039[4]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_2039[5])) && !ENTITY::DOES_ENTITY_EXIST(uLocal_2039[6]))
			{
				STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")))
				{
					func_481(4, 0);
					func_481(5, 0);
					func_481(6, 0);
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(uLocal_2039[4]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2039[4], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
				}
				if (!PED::IS_PED_INJURED(uLocal_2039[5]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2039[5], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
				}
				if (!PED::IS_PED_INJURED(uLocal_2039[6]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2039[6], "WORLD_HUMAN_GUARD_STAND", 0, false);
				}
				return 1;
			}
			break;
		case 0:
			if (__LIB_0__::func_86(Param1))
			{
			}
			if (fParam2 > 0f)
			{
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
			{
				STREAMING::REQUEST_MODEL(iLocal_1950);
				STREAMING::REQUEST_MODEL(iLocal_1951);
				STREAMING::REQUEST_MODEL(iLocal_1952);
				STREAMING::REQUEST_MODEL(iLocal_1954);
				STREAMING::REQUEST_MODEL(iLocal_1955);
				STREAMING::REQUEST_MODEL(iLocal_1956);
				STREAMING::REQUEST_MODEL(iLocal_1953);
				STREAMING::REQUEST_MODEL(iLocal_1957);
				STREAMING::REQUEST_MODEL(iLocal_1958);
				STREAMING::REQUEST_COLLISION_FOR_MODEL(iLocal_1951);
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1leadinoutlsdhs_mcs_1_p2");
				PHYSICS::ROPE_LOAD_TEXTURES();
				if (((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_1950) && STREAMING::HAS_MODEL_LOADED(iLocal_1951)) && STREAMING::HAS_MODEL_LOADED(iLocal_1952)) && STREAMING::HAS_MODEL_LOADED(iLocal_1953)) && STREAMING::HAS_MODEL_LOADED(iLocal_1957)) && STREAMING::HAS_MODEL_LOADED(iLocal_1958)) && STREAMING::HAS_MODEL_LOADED(iLocal_1954)) && STREAMING::HAS_MODEL_LOADED(iLocal_1955)) && STREAMING::HAS_MODEL_LOADED(iLocal_1956)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane", false, -1)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Stress", false, -1)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Impact_Sweeteners", false, -1)) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1leadinoutlsdhs_mcs_1_p2")) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
				{
					STREAMING::REMOVE_IPL("pcranecont");
					Local_2320.f_33 = { Local_1902 };
					Local_2320.f_0 = OBJECT::CREATE_OBJECT(iLocal_1950, Local_2320.f_33, true, true, false);
					ENTITY::SET_ENTITY_HEADING(Local_2320.f_0, 180f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_0, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1950);
					Local_2320.f_1 = OBJECT::CREATE_OBJECT(iLocal_1952, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_0, Local_2320.f_24), true, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2320.f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_0, Local_2320.f_24), false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_2320.f_1, ENTITY::GET_ENTITY_HEADING(Local_2320.f_0));
					ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_1, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1952);
					Local_2320.f_27 = { 0f, 0f, -7f };
					Local_2320.f_2 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_1951, Local_2071, true, true, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_2320.f_2, false);
					OBJECT::SET_OBJECT_PHYSICS_PARAMS(Local_2320.f_2, -1f, -1f, -1f, -1f, -1f, 1f, 2.3f, 0.7f, -1f, -1f, -1f);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2320.f_2, Local_2320.f_1, -1, Local_2320.f_27, 0f, 0f, -90f, false, false, false, false, 2, true, 0);
					ENTITY::DETACH_ENTITY(Local_2320.f_2, true, false);
					Local_1901 = { Local_2320.f_27 - Vector(-7f, 0f, 0f) };
					Local_2320.f_13 = OBJECT::CREATE_OBJECT(iLocal_1951, Local_2071, true, true, false);
					ENTITY::SET_ENTITY_HEADING(Local_2320.f_13, ENTITY::GET_ENTITY_HEADING(Local_2320.f_1));
					ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_13, true);
					ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_13, false, false);
					ENTITY::SET_ENTITY_COLLISION(Local_2320.f_13, false, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1951);
					Local_2320.f_86 = 0;
					Local_2320.f_36[0 /*3*/] = { 4.7f, 9.45f, 0.68f };
					Local_2320.f_36[1 /*3*/] = { 3.3f, 9.45f, 0.68f };
					Local_2320.f_36[2 /*3*/] = { -5f, 9.45f, 0.68f };
					Local_2320.f_36[3 /*3*/] = { -3.6f, 9.45f, 0.68f };
					Local_2320.f_36[4 /*3*/] = { 4.7f, -9.025f, 0.68f };
					Local_2320.f_36[5 /*3*/] = { 3.3f, -9.025f, 0.68f };
					Local_2320.f_36[6 /*3*/] = { -5f, -9.025f, 0.68f };
					Local_2320.f_36[7 /*3*/] = { -3.6f, -9.025f, 0.68f };
					iVar0 = 0;
					while (iVar0 < Local_2320.f_4)
					{
						if (iVar0 > 3)
						{
							iLocal_1959 = iLocal_1955;
							Local_2320.f_4[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_1959, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_0, Local_2320.f_36[iVar0 /*3*/]), true, true, false);
							ENTITY::SET_ENTITY_HEADING(Local_2320.f_4[iVar0], (ENTITY::GET_ENTITY_HEADING(Local_2320.f_0) - 180f));
						}
						else
						{
							Local_2320.f_4[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_1959, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_0, Local_2320.f_36[iVar0 /*3*/]), true, true, false);
							ENTITY::SET_ENTITY_HEADING(Local_2320.f_4[iVar0], ENTITY::GET_ENTITY_HEADING(Local_2320.f_0));
						}
						iVar0++;
					}
					iVar0 = 0;
					while (iVar0 < Local_2320.f_4)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2320.f_4[iVar0], Local_2320.f_0, -1, Local_2320.f_36[iVar0 /*3*/], 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						iVar0++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1954);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1955);
					Local_2320.f_80 = AUDIO::GET_SOUND_ID();
					Local_2320.f_83 = AUDIO::GET_SOUND_ID();
					Local_2320.f_82 = AUDIO::GET_SOUND_ID();
					Local_2320.f_84 = AUDIO::GET_SOUND_ID();
					Local_2320.f_85 = AUDIO::GET_SOUND_ID();
					Local_2320.f_81 = AUDIO::GET_SOUND_ID();
					Local_2320.f_79 = 0;
				}
			}
			else if (!bLocal_1853)
			{
				if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_2320.f_2) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_2320.f_1))
				{
					if (bLocal_1872 && iLocal_2317 > 6)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_1, false);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2320.f_33, true, false, false, true);
						STREAMING::LOAD_SCENE(Local_2320.f_33);
						SYSTEM::WAIT(500);
					}
					Local_2320.f_15[0] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, -1f, -2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					Local_2320.f_15[1] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, -1f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					Local_2320.f_15[2] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, 1f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					Local_2320.f_15[3] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, 1f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					Local_2320.f_15[4] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, -0.05f, -2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					Local_2320.f_15[5] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, -0.05f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					Local_2320.f_15[6] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, 0.05f, -2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					Local_2320.f_15[7] = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, 0.05f, 2.7f, -1.78f), 0f, 0f, 0f, 15.26f, 0, 7f, fLocal_2092, fLocal_2091, false, false, true, 1f, false, 0);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[0], true);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[1], true);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[2], true);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[3], true);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[4], true);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[5], true);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[6], true);
					PHYSICS::ROPE_SET_SMOOTH_REELIN(Local_2320.f_15[7], true);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[0], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[1], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[2], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[3], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[4], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[5], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[6], 2);
					PHYSICS::ROPE_SET_UPDATE_ORDER(Local_2320.f_15[7], 2);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[0], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2107), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2108), 7f, false, false, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[1], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2109), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2110), 7f, false, false, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[2], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2111), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2112), 7f, false, false, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[3], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2113), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2114), 7f, false, false, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[4], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2115), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2116), 7f, false, false, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[5], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2117), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2118), 7f, false, false, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[6], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2119), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2120), 7f, false, false, 0, 0);
					PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_2320.f_15[7], Local_2320.f_1, Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2121), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, Local_2122), 7f, false, false, 0, 0);
					if (iLocal_2317 != 8)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[14]))
						{
							if (!PED::IS_PED_INJURED(iLocal_2040[14]))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1784))
								{
									iLocal_1784 = PED::CREATE_SYNCHRONIZED_SCENE(3.05f, -0.35f, 0.35f, 0f, 0f, 180f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1784, Local_2320.f_1, -1);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2040[14], iLocal_1784, "missheistdockssetup1leadinoutlsdhs_mcs_1_p2", "leadin_idle_b", 1000f, -1000f, 1, 16, 1000f, 0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2040[14], Local_2320.f_1, false);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1784, true);
								}
							}
						}
					}
					bLocal_1853 = true;
					ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_2, false);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_2320.f_2, 1, 0f, 0f, 0.01f, false, false, true, false);
					if (bLocal_1872 && iLocal_2317 > 4)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_1, true);
					}
					return 1;
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_2320.f_2))
					{
					}
					if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_2320.f_1))
					{
					}
				}
			}
			else
			{
				return 1;
			}
			break;
		case 13:
			STREAMING::REQUEST_MODEL(iLocal_1953);
			STREAMING::REQUEST_MODEL(iLocal_1957);
			STREAMING::REQUEST_MODEL(iLocal_1958);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_1953) && STREAMING::HAS_MODEL_LOADED(iLocal_1957)) && STREAMING::HAS_MODEL_LOADED(iLocal_1958))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
				{
					Local_2319[0 /*25*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_1953, -53.2547f, -2412.8684f, 5.0007f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(Local_2319[0 /*25*/], 91.2705f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_2319[0 /*25*/], true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_1))
				{
					Local_2319[0 /*25*/].f_1 = OBJECT::CREATE_OBJECT(iLocal_1957, -53.2547f, -2411.8684f, 5.0007f, true, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2319[0 /*25*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[0 /*25*/], Local_1905), false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_2319[0 /*25*/].f_1, (ENTITY::GET_ENTITY_HEADING(Local_2319[0 /*25*/]) - 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_2319[0 /*25*/].f_1, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_2))
				{
					Local_2319[0 /*25*/].f_2 = OBJECT::CREATE_OBJECT(iLocal_1958, -53.2547f, -2413.8684f, 5.0007f, true, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2319[0 /*25*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[0 /*25*/], Local_1906), false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_2319[0 /*25*/].f_2, (ENTITY::GET_ENTITY_HEADING(Local_2319[0 /*25*/]) + 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_2319[0 /*25*/].f_2, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
				{
					Local_2319[1 /*25*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_1953, -52.8189f, -2418.3357f, 5.0009f, true, true, false);
					ENTITY::SET_ENTITY_HEADING(Local_2319[1 /*25*/], 91.2705f);
					ENTITY::FREEZE_ENTITY_POSITION(Local_2319[1 /*25*/], true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_1))
				{
					Local_2319[1 /*25*/].f_1 = OBJECT::CREATE_OBJECT(iLocal_1957, -52.8189f, -2417.3357f, 5.0009f, true, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2319[1 /*25*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[1 /*25*/], Local_1905), false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_2319[1 /*25*/].f_1, (ENTITY::GET_ENTITY_HEADING(Local_2319[0 /*25*/]) - 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_2319[1 /*25*/].f_1, true);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_2))
				{
					Local_2319[1 /*25*/].f_2 = OBJECT::CREATE_OBJECT(iLocal_1958, -52.8189f, -2415.3357f, 5.0009f, true, true, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2319[1 /*25*/].f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[1 /*25*/], Local_1906), false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_2319[1 /*25*/].f_2, (ENTITY::GET_ENTITY_HEADING(Local_2319[0 /*25*/]) + 150f));
					ENTITY::FREEZE_ENTITY_POSITION(Local_2319[1 /*25*/].f_2, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_1))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[0 /*25*/].f_1, Local_2319[0 /*25*/], -1, Local_1905, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_2319[0 /*25*/].f_1, Local_2319[0 /*25*/], true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_2))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[0 /*25*/].f_2, Local_2319[0 /*25*/], -1, Local_1906, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_2319[0 /*25*/].f_2, Local_2319[0 /*25*/], true);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_1) && ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_1))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[1 /*25*/].f_1, Local_2319[1 /*25*/], -1, Local_1905, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_2319[1 /*25*/].f_1, Local_2319[1 /*25*/], true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_2) && ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_2))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[1 /*25*/].f_2, Local_2319[1 /*25*/], -1, Local_1906, 0f, 0f, 0f, false, false, true, false, 2, true, 0);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_2319[1 /*25*/].f_2, Local_2319[1 /*25*/], true);
					}
					return 1;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1953);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1957);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1958);
			}
			break;
	}
	return 0;
}

void func_407(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x6D1A5
{
	STREAMING::REQUEST_MODEL(iParam1);
	while (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
		if (iParam4 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
	}
}

void func_481(int iParam0, int iParam1)//Position - 0x765D4
{
	char cVar0[16];
	func_407(&(uLocal_2039[iParam0]), joaat("S_M_Y_BlackOps_01"), Local_2062[iParam0 /*3*/], fLocal_2027[iParam0], 0);
	if (!PED::IS_PED_INJURED(uLocal_2039[iParam0]))
	{
		PED::SET_PED_COMBAT_RANGE(uLocal_2039[iParam0], 2);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_2039[iParam0], 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_2039[iParam0], iLocal_151);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(uLocal_2039[iParam0], true);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_2039[iParam0], iLocal_2143, -1, true, true);
		if (iParam1 == 1)
		{
			if (iLocal_1841[iParam0] == 0)
			{
				StringCopy(&cVar0, "miss_merc", 16);
				StringIntConCat(&cVar0, iParam0, 16);
				if (!__LIB_0__::func_86(Local_2063[iParam0 /*13*/][0 /*3*/]))
				{
					TASK::DELETE_PATROL_ROUTE(&cVar0);
					TASK::OPEN_PATROL_ROUTE(&cVar0);
					if (!__LIB_0__::func_86(Local_2063[iParam0 /*13*/][0 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(1, "WORLD_HUMAN_GUARD_STAND", Local_2063[iParam0 /*13*/][0 /*3*/], Local_2063[iParam0 /*13*/][0 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(500, 1500));
					}
					if (!__LIB_0__::func_86(Local_2063[iParam0 /*13*/][1 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(2, "WORLD_HUMAN_GUARD_STAND", Local_2063[iParam0 /*13*/][1 /*3*/], Local_2063[iParam0 /*13*/][1 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
					}
					if (!__LIB_0__::func_86(Local_2063[iParam0 /*13*/][2 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(3, "WORLD_HUMAN_GUARD_STAND", Local_2063[iParam0 /*13*/][2 /*3*/], Local_2063[iParam0 /*13*/][2 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
					}
					if (!__LIB_0__::func_86(Local_2063[iParam0 /*13*/][3 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(4, "WORLD_HUMAN_GUARD_STAND", Local_2063[iParam0 /*13*/][3 /*3*/], Local_2063[iParam0 /*13*/][3 /*3*/], MISC::GET_RANDOM_INT_IN_RANGE(1000, 6000));
					}
					TASK::ADD_PATROL_ROUTE_LINK(1, 2);
					TASK::ADD_PATROL_ROUTE_LINK(2, 3);
					TASK::ADD_PATROL_ROUTE_LINK(3, 4);
					TASK::ADD_PATROL_ROUTE_LINK(4, 1);
					TASK::CLOSE_PATROL_ROUTE();
					TASK::CREATE_PATROL_ROUTE();
					if (!PED::IS_PED_INJURED(uLocal_2039[iParam0]))
					{
						TASK::TASK_PATROL(uLocal_2039[iParam0], &cVar0, 0, true, true);
					}
				}
				iLocal_1841[iParam0] = 1;
			}
		}
	}
}

void func_483(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x767EA
{
	STREAMING::REQUEST_MODEL(iParam1);
	while (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		if (iParam4 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam4, iParam4);
		}
		if (fParam5 >= 0f)
		{
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam5);
		}
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(*iParam0, bParam6);
	}
}

void func_484(char* sParam0, bool bParam1)//Position - 0x76867
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
		while (!bVar2 && iVar1 < iLocal_53)
		{
			if (iLocal_53[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_53[iVar1] == 0)
			{
				iLocal_53[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_486(iVar0);
		if (iVar3 != -1)
		{
			iLocal_53[iVar3] = 0;
			func_485();
		}
	}
}

void func_485()//Position - 0x768DD
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_53 - 1))
	{
		if (iLocal_53[iVar0] == 0)
		{
			if (iLocal_53[iVar0 + 1] != 0)
			{
				iLocal_53[iVar0] = iLocal_53[iVar0 + 1];
				iLocal_53[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_486(int iParam0)//Position - 0x7692A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_53)
	{
		if (iLocal_53[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_53[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_487(char* sParam0)//Position - 0x7696A
{
	return func_486(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_489(bool bParam0)//Position - 0x76A19
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	iLocal_1805 = 1;
	iLocal_1813 = 0;
	if (bParam0)
	{
		__LIB_16__::func_918(500);
	}
}

bool func_565(int iParam0)//Position - 0x7ED84
{
	return func_405(iParam0, 0f, 0f, 0f, 0);
}

void func_566()//Position - 0x7ED96
{
	func_287(PLAYER::PLAYER_PED_ID(), 12, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_16__::func_888(2);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
	{
		if (!PED::IS_PED_INJURED(iLocal_2041))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 5, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 11, 0, 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
	{
		if (!PED::IS_PED_INJURED(iLocal_2042))
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 5, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 10, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 11, 0, 0, 0);
		}
	}
}

void func_568()//Position - 0x7EF1B
{
	switch (iLocal_1949)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2047, false))
				{
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 485.27502f, -3108.4976f, 5.069427f, 485.7743f, -3285.9507f, 17.068666f, 52f, false, true, 0))
				{
					iLocal_1949 = 1;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.22684f, -3083.3257f, 3.819052f, 497.85074f, -3085.0005f, 16.605831f, 63.75f, false, true, 0))
				{
					iLocal_2022 = 0;
					while (iLocal_2022 <= 14)
					{
						if (!PED::IS_PED_INJURED(uLocal_2039[iLocal_2022]))
						{
							if ((((((((PED::HAS_PED_RECEIVED_EVENT(uLocal_2039[iLocal_2022], 124) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], -15f, -15f, -15f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], 15f, 15f, 15f), false, true)) || MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], -2f, -2f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], 2f, 2f, 1f))) || PED::HAS_PED_RECEIVED_EVENT(uLocal_2039[iLocal_2022], 125)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_2039[iLocal_2022], PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(uLocal_2039[iLocal_2022], 88)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.61093f, -3121.3037f, 13.559713f, 484.69946f, -3121.5142f, 4.570057f, 12.75f, joaat("WEAPON_GRENADE"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.61093f, -3121.3037f, 13.559713f, 484.69946f, -3121.5142f, 4.570057f, 12.75f, joaat("WEAPON_SMOKEGRENADE"), false)) || ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_2039[iLocal_2022]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_2039[iLocal_2022])) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_2039[iLocal_2022], 10f, 10f, 10f, false, true, 0)))
							{
								iLocal_1949 = 1;
							}
						}
						iLocal_2022++;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.22684f, -3083.3257f, 3.819052f, 497.85074f, -3085.0005f, 16.605831f, 63.75f, false, true, 0))
			{
				iLocal_2022 = 0;
				while (iLocal_2022 <= 14)
				{
					if (!PED::IS_PED_INJURED(uLocal_2039[iLocal_2022]))
					{
						if ((((((((PED::HAS_PED_RECEIVED_EVENT(uLocal_2039[iLocal_2022], 124) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], -15f, -15f, -15f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], 15f, 15f, 15f), false, true)) || MISC::IS_SNIPER_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], -2f, -2f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_2039[iLocal_2022], 2f, 2f, 1f))) || PED::HAS_PED_RECEIVED_EVENT(uLocal_2039[iLocal_2022], 125)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_2039[iLocal_2022], PLAYER::PLAYER_PED_ID(), true)) || PED::HAS_PED_RECEIVED_EVENT(uLocal_2039[iLocal_2022], 88)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.61093f, -3121.3037f, 13.559713f, 484.69946f, -3121.5142f, 4.570057f, 12.75f, joaat("WEAPON_GRENADE"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(471.61093f, -3121.3037f, 13.559713f, 484.69946f, -3121.5142f, 4.570057f, 12.75f, joaat("WEAPON_SMOKEGRENADE"), false)) || ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uLocal_2039[iLocal_2022]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_2039[iLocal_2022])) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_2039[iLocal_2022], 10f, 10f, 10f, false, true, 0)))
						{
							iLocal_1949 = 1;
						}
					}
					iLocal_2022++;
				}
			}
			break;
		case 1:
			iLocal_2022 = 0;
			while (iLocal_2022 <= 14)
			{
				if (!PED::IS_PED_INJURED(uLocal_2039[iLocal_2022]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_2039[iLocal_2022], iLocal_152);
					TASK::TASK_COMBAT_PED(uLocal_2039[iLocal_2022], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1781))
				{
					AUDIO::STOP_SOUND(iLocal_1781);
					AUDIO::RELEASE_SOUND_ID(iLocal_1781);
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, false);
				iLocal_1786 = MISC::GET_GAME_TIMER();
				iLocal_1949 = 2;
				iLocal_2022++;
			}
			break;
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1780))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if (!PED::IS_PED_INJURED(iLocal_2041))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1779))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1779) > 0.99f)
								{
									if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
									{
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
									}
									iLocal_1780 = PED::CREATE_SYNCHRONIZED_SCENE(478.596f, -3116.911f, 5.069f, 0f, 0f, 53.446f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1780, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_dockworker", 2f, -2f, 5, 16, 1000f, 0);
								}
							}
						}
					}
				}
			}
			if (iLocal_2317 == 9 || (iLocal_2317 == 10 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 478.596f, -3116.911f, 5.069f) < 40000f))
			{
				if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
				{
					if (__LIB_0__::func_611(&iLocal_1786, 7000))
					{
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
			}
			break;
	}
}

bool func_569(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x7F4FF
{
	__LIB_0__::func_487(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21653 = 0;
	Global_21612 = 1;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_21610 = 0;
	Global_21657 = 0;
	Global_21659 = 0;
	Global_2883585 = 0;
	return __LIB_15__::func_773(sParam3, iParam4, bParam7);
}

int func_570()//Position - 0x7F54D
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2043))
	{
		if (!PED::IS_PED_INJURED(iLocal_2043))
		{
			if (Local_48[1 /*10*/] == 0)
			{
				__LIB_0__::func_222(&Local_48, 1, iLocal_2043, "GATEGUARD", 0, 1);
			}
		}
	}
	else if (Local_48[1 /*10*/] != 0)
	{
		__LIB_0__::func_221(&Local_48, 1);
	}
	__LIB_0__::func_222(&Local_48, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
	{
		if (!PED::IS_PED_INJURED(iLocal_2041))
		{
			if (Local_48[3 /*10*/].f_7 == 0)
			{
				__LIB_0__::func_222(&Local_48, 3, iLocal_2041, "FLOYD", 0, 1);
			}
		}
	}
	else if (Local_48[3 /*10*/].f_7 == 1)
	{
		__LIB_0__::func_221(&Local_48, 3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
	{
		if (!PED::IS_PED_INJURED(iLocal_2042))
		{
			if (Local_48[4 /*10*/] == 0)
			{
				__LIB_0__::func_222(&Local_48, 4, iLocal_2042, "WADE", 0, 1);
			}
		}
	}
	else if (Local_48[4 /*10*/] != 0)
	{
		__LIB_0__::func_221(&Local_48, 4);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1961[0 /*16*/]))
	{
		if (!PED::IS_PED_INJURED(Local_1961[0 /*16*/]))
		{
			__LIB_0__::func_222(&Local_48, 6, Local_1961[0 /*16*/], "SUPERVISOR1", 0, 1);
		}
	}
	else if (Local_48[6 /*10*/] != 0)
	{
		__LIB_0__::func_221(&Local_48, 6);
	}
	if (iLocal_2317 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1967[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1967[0 /*16*/]))
			{
				__LIB_0__::func_222(&Local_48, 5, Local_1967[0 /*16*/], "LONGSHOREMAN", 0, 1);
			}
		}
		else if (Local_48[5 /*10*/] != 0)
		{
			__LIB_0__::func_221(&Local_48, 5);
		}
	}
	if (iLocal_2317 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1968[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
			{
				__LIB_0__::func_222(&Local_48, 7, Local_1968[0 /*16*/], "SUPERVISOR2", 0, 1);
			}
		}
		else if (Local_48[7 /*10*/] != 0)
		{
			__LIB_0__::func_221(&Local_48, 7);
		}
	}
	if (iLocal_2317 > 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[14]))
		{
			if (!PED::IS_PED_INJURED(iLocal_2040[14]))
			{
				__LIB_0__::func_222(&Local_48, 8, iLocal_2040[14], "SIGNALMAN", 0, 1);
			}
		}
		else if (Local_48[8 /*10*/] != 0)
		{
			__LIB_0__::func_221(&Local_48, 8);
		}
	}
	return 1;
}

void func_573()//Position - 0x7F78F
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -108.58572f, -2429.4622f, 26.250675f, -108.808174f, -2400.434f, 16.000675f, 13f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.25f);
	}
	if (!func_487("TEXT FROM RON"))
	{
		if (__LIB_0__::func_611(&iLocal_2359, 5000))
		{
			__LIB_17__::func_70(20, "TXT_PHOTO_R" /* GXT: Photos received, boss. I'll turn up some info and get back to you when I have something. Ron */, 1, 0, 0, 0, 0, 1, 0, 1);
			func_484("TEXT FROM RON", 1);
		}
	}
	func_607();
	if (!func_487("DH_1_GET_TO_TRUCK"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_PHONE_RON"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_1_PHONE_RON");
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("DH_1_GET_TO_TRUCK");
			func_484("DH_1_GET_TO_TRUCK", 1);
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2047, false))
		{
			if (!func_487("DH_1_DRIVE_TO_DOCKS"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_GET_TO_TRUCK"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_GET_TO_TRUCK");
				}
				else
				{
					AUDIO::START_AUDIO_SCENE("DH_1_DRIVE_TO_DOCKS");
					func_484("DH_1_DRIVE_TO_DOCKS", 1);
				}
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -207.14667f, -2515.5693f, 4.152911f, -187.41817f, -2515.7332f, 13.297941f, 43f, false, true, 0))
	{
		__LIB_17__::func_171(3, 1, 0);
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[3 /*31*/], true);
	}
	else
	{
		__LIB_17__::func_124(3, 0);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 20.904465f, -2527.1533f, 4.268342f, 9.272564f, -2544.3157f, 11.300495f, 46.25f, false, true, 0))
	{
		__LIB_17__::func_171(1, 1, 0);
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_41748[1 /*31*/], true);
	}
	else
	{
		__LIB_17__::func_124(1, 0);
	}
	func_603();
	if (!iLocal_2364)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -183.03952f, -2523.4082f, 13.262724f, -208.73598f, -2522.9028f, 4.504209f, 12.75f, false, true, 0))
		{
			iLocal_2364 = 1;
		}
	}
	if (iLocal_2364)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(5.0966f, -2528.8704f, 5.0503f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 300f)
		{
			__LIB_16__::func_920(uLocal_2039[0], joaat("S_M_Y_BlackOps_01"), 1, 0, 0);
			__LIB_16__::func_920(uLocal_2039[1], joaat("S_M_Y_BlackOps_01"), 1, 0, 0);
			__LIB_16__::func_920(uLocal_2039[2], joaat("S_M_Y_BlackOps_01"), 1, 0, 0);
			__LIB_16__::func_920(uLocal_2039[3], joaat("S_M_Y_BlackOps_01"), 1, 0, 0);
			__LIB_16__::func_920(uLocal_2039[7], joaat("S_M_Y_BlackOps_01"), 1, 0, 0);
			__LIB_16__::func_920(uLocal_2039[8], joaat("S_M_Y_BlackOps_01"), 1, 0, 0);
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(485.0831f, -3051.7222f, 5.2262f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
	{
		if (!func_487("REQ_MERRYWEATHER_GUARDS_AT_OTHER_DOCKS"))
		{
			if (func_565(11))
			{
				func_484("REQ_MERRYWEATHER_GUARDS_AT_OTHER_DOCKS", 1);
			}
		}
	}
	if ((iLocal_2021 < 6 || iLocal_2021 == 98) || iLocal_2021 == 99)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[5 /*31*/], 1f, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[5 /*31*/], 5, true, false);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 497.51868f, -3065.0544f, 3.576474f, 471.4108f, -3065.4539f, 35.069195f, 100f, false, true, 0))
		{
			func_568();
			func_601();
		}
	}
	switch (iLocal_2021)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_566();
			}
			Local_2320.f_70 = fLocal_2083;
			Local_2320.f_74 = 0f;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_2045);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[17]))
			{
				PED::DELETE_PED(&(iLocal_2040[17]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[18]))
			{
				PED::DELETE_PED(&(iLocal_2040[18]));
			}
			if (func_570())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
					{
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2041);
								ENTITY::SET_ENTITY_COORDS(iLocal_2041, -120.1837f, -2418.3833f, 5.0014f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_2041, 2.055f);
								ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_2041, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -118.3164f, -2412.3242f, 5f, 1f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_STAND_IMPATIENT", -118.3164f, -2412.3242f, 5f, 330.0682f, 0, false, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
							}
						}
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, false);
						if (!PED::IS_PED_INJURED(iLocal_2040[13]))
						{
							TASK::TASK_WANDER_STANDARD(iLocal_2040[13], 40000f, 0);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2040[13]));
						}
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
						STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_a");
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2047, true);
						STREAMING::REQUEST_MODEL(joaat("tiptruck"));
						iLocal_1769 = 17;
						iLocal_2360 = 0;
						iLocal_1825 = 0;
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						__LIB_38__::func_768(8, "Drive to the other docks", 0, 0, 0, 1);
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
						MISC::CLEAR_AREA(476.4661f, -3040.6094f, 6.0984f, 100f, false, false, false, false);
						PED::SET_PED_NON_CREATION_AREA(682.4604f, -2936.8667f, 2.9499f, 260.5602f, -3529.1248f, -17.7944f);
						PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, true);
						ENTITY::CREATE_FORCED_OBJECT(479.2571f, -3115.5513f, 5.0701f, 50f, joaat("prop_gate_docks_ld"), true);
						__LIB_0__::func_635(5, PLAYER::PLAYER_PED_ID());
						if (bLocal_1872 == 1)
						{
							Local_1902 = { -110.2902f, -2415.79f, 5.05f };
							Local_2071 = { -109.87f, -2415.71f, 14.67f };
							if (func_565(0))
							{
								iLocal_2364 = 0;
								iLocal_2021++;
							}
						}
						else
						{
							iLocal_2364 = 0;
							iLocal_2021++;
						}
					}
				}
			}
			break;
		case 1:
			if (iLocal_1819 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_2047, -117.1943f, -2415.8176f, 5.0001f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_2047, 89.5928f);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/]));
						}
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -118.3399f, -2410.1582f, 5.0013f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 145.9175f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
						{
							if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
							{
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_2041))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2047, 0, false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2041, iLocal_2047, 0);
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/]));
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2047, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2052, false);
					}
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, false);
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
					STREAMING::REQUEST_ANIM_DICT("amb@code_human_police_crowd_control@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
					STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
					STREAMING::REQUEST_MODEL(joaat("tiptruck"));
					STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
					iLocal_1819 = 1;
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2047, false);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2052, false);
					}
					func_489(1);
					func_600(21, 1);
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
					STREAMING::REQUEST_ANIM_DICT("amb@code_human_police_crowd_control@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
					STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
					STREAMING::REQUEST_MODEL(joaat("tiptruck"));
					STREAMING::REQUEST_MODEL(joaat("prop_barrier_work06a"));
					iLocal_2021 = 99;
				}
				else
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
				}
			}
			break;
		case 99:
			STREAMING::REQUEST_MODEL(joaat("tiptruck"));
			if (((((((STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@code_human_police_crowd_control@idle_a")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pencil_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("tiptruck"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2054[2]))
				{
					iLocal_2054[2] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), -128.2126f, -2568.8252f, 5.001f, true, true, false);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2055[2]))
				{
					iLocal_2055[2] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), -128.2126f, -2568.8252f, 5.001f, true, true, false);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2054[3]))
				{
					iLocal_2054[3] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), Local_2066, true, true, false);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2055[3]))
				{
					iLocal_2055[3] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), Local_2066, true, true, false);
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[15]))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[15]))
						{
							PED::CLEAR_ALL_PED_PROPS(iLocal_2040[15]);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2055[3], iLocal_2040[15], PED::GET_PED_BONE_INDEX(iLocal_2040[15], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2054[3], iLocal_2040[15], PED::GET_PED_BONE_INDEX(iLocal_2040[15], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
							TASK::TASK_PLAY_ANIM(iLocal_2040[15], "misslsdhsclipboard@base", "base", 1000f, -1000f, -1, 1, 0f, false, false, false);
							__LIB_0__::func_222(&Local_48, 5, iLocal_2040[15], "GATEGUARD", 0, 1);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_2040[15], false);
							PED::SET_PED_KEEP_TASK(iLocal_2040[15], true);
						}
					}
					if (STREAMING::HAS_MODEL_LOADED(joaat("tiptruck")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2049))
						{
							func_483(&iLocal_2049, joaat("tiptruck"), 491.91f, -3051.15f, 5.77f, 6.2f, -1, 1f, 0);
						}
					}
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1911[0]))
						{
							iLocal_1911[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_barrier_work06a"), 488.82f, -3048.82f, 5.11f, true, true, false);
						}
					}
					if (STREAMING::HAS_MODEL_LOADED(joaat("prop_barrier_work06a")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1911[1]))
						{
							iLocal_1911[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_barrier_work06a"), 494.7f, -3049.03f, 5.11f, true, true, false);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[16]))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[16]))
						{
							PED::CLEAR_ALL_PED_PROPS(iLocal_2040[16]);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2055[2], iLocal_2040[16], PED::GET_PED_BONE_INDEX(iLocal_2040[16], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2054[2], iLocal_2040[16], PED::GET_PED_BONE_INDEX(iLocal_2040[16], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
							TASK::TASK_PLAY_ANIM(iLocal_2040[16], "misslsdhsclipboard@base", "base", 1000f, -1000f, -1, 1, 0f, false, false, false);
							__LIB_0__::func_222(&Local_48, 6, iLocal_2040[16], "GATEGUARD", 0, 1);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_2040[16], false);
							PED::SET_PED_KEEP_TASK(iLocal_2040[16], true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[21]))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[21]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_2040[16], -1, 0, 2);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 1000));
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_a", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_c", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "amb@code_human_police_crowd_control@idle_a", "idle_b", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::SET_SEQUENCE_TO_REPEAT(iLocal_2056, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_2040[21], iLocal_2056);
							PED::SET_PED_KEEP_TASK(iLocal_2040[21], true);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_2040[21], false);
						}
					}
					if (bLocal_1872)
					{
						iLocal_2021 = 3;
					}
					else
					{
						iLocal_2021 = 2;
					}
				}
			}
			break;
		case 2:
			Local_2363 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (Local_2363.f_2 > 6.1f)
			{
				if (__LIB_16__::func_39(&Local_2123, -106.4769f, -2404.5315f, 5.0013f, 0.1f, 0.1f, 2f, 1, "DESCRA", 0, 1, -1))
				{
				}
				else if (Local_2363.f_2 < 6.1f)
				{
					if (!func_487("DS1_37"))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_2123, 1))
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_37", 8, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
										func_484("DS1_37", 1);
									}
								}
							}
						}
						else
						{
							func_484("DS1_37", 1);
						}
					}
					else
					{
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_1");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_2");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_3");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_4");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_5");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_6");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_7");
						TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_8");
						__LIB_13__::func_815(&Local_2123, 1, 0);
						iLocal_2365 = MISC::GET_GAME_TIMER();
						iLocal_2021 = 98;
					}
				}
			}
			else if (Local_2363.f_2 < 6.1f)
			{
				if (!func_487("DS1_37"))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_37", 8, 0, 0, 0))
								{
									func_484("DS1_37", 1);
								}
							}
						}
					}
					else
					{
						func_484("DS1_37", 1);
					}
				}
				else
				{
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_1");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_2");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_3");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_4");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_5");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_6");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_7");
					TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_8");
					__LIB_13__::func_815(&Local_2123, 1, 0);
					iLocal_2365 = MISC::GET_GAME_TIMER();
					iLocal_2021 = 98;
				}
			}
			break;
		case 98:
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_2041, iLocal_2047, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2041, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_2041, iLocal_2047, 20000, 0, 1f, 1048576, 0);
						}
					}
				}
			}
			if (__LIB_0__::func_611(&iLocal_2365, 5000))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_2041) || PED::IS_PED_IN_VEHICLE(iLocal_2041, iLocal_2047, false))
						{
							__LIB_13__::func_815(&Local_2123, 1, 0);
							iLocal_1875 = 0;
							iLocal_1776 = MISC::GET_GAME_TIMER();
							iLocal_2021 = 3;
						}
					}
				}
			}
			if (!func_487("DS1_37b"))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_37b", 8, 0, 0, 0))
						{
							func_484("DS1_37b", 1);
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
								{
									TASK::CLEAR_PED_TASKS(iLocal_2041);
									TASK::TASK_ENTER_VEHICLE(iLocal_2041, iLocal_2047, 20000, 0, 1f, 1048576, 0);
								}
							}
							iLocal_1776 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
				{
					if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_2041) || PED::IS_PED_IN_VEHICLE(iLocal_2041, iLocal_2047, false))
					{
						__LIB_13__::func_815(&Local_2123, 1, 0);
						iLocal_1875 = 0;
						iLocal_1776 = MISC::GET_GAME_TIMER();
						iLocal_2021 = 3;
					}
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_2041, iLocal_2047, false))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2041, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_2041, iLocal_2047, 20000, 0, 1f, 1048576, 0);
						}
					}
				}
			}
			if (!func_487("GET IN BIG RIG"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 2))
				{
					__LIB_16__::func_919("AW_TREVTRU");
					func_484("GET IN BIG RIG", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.72974f, -3121.692f, 4.570057f, 484.0707f, -3121.8857f, 11.820057f, 11.25f, false, true, 0))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 8;
					iLocal_2317 = 12;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.67294f, -3107.9705f, 4.570056f, 474.00424f, -3108.6865f, 12.070057f, 12.75f, false, true, 0))
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 8;
				iLocal_2317 = 12;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
				{
					if (__LIB_31__::func_971(&Local_2123, 476.4661f, -3040.6094f, 5.0913f, 0.1f, 0.1f, 2f, 0, iLocal_2041, iLocal_2047, "AW_DRI_SUB", "AW_DONT_LEAVE_T", "", "AW_GETBACK_INT", 0, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 476.4661f, -3040.6094f, 6.0984f, 7f, 7f, 7f, false, true, 0))
							{
								STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
								if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
								{
									__LIB_0__::func_638();
									if (!PED::IS_PED_INJURED(iLocal_2040[15]))
									{
										fVar0 = __LIB_0__::func_76(iLocal_2040[15], iLocal_2047, 1);
									}
									if (!PED::IS_PED_INJURED(iLocal_2040[16]))
									{
										fVar1 = __LIB_0__::func_76(iLocal_2040[16], iLocal_2047, 1);
									}
									if (fVar0 < fVar1)
									{
										iVar2 = iLocal_2040[15];
									}
									else
									{
										iVar2 = iLocal_2040[16];
									}
									if (!PED::IS_PED_INJURED(iVar2))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
										TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
										TASK::TASK_PERFORM_SEQUENCE(iVar2, iLocal_2056);
									}
									CUTSCENE::REMOVE_CUTSCENE();
									CUTSCENE::REQUEST_CUTSCENE("LSDHS_MCS_2", 8);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
									__LIB_13__::func_815(&Local_2123, 1, 0);
									iLocal_2021++;
								}
							}
							if (!func_487("DS1_37c"))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_2123, 1))
									{
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_37c", 7, 0, 0, 0))
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 4);
											func_484("DS1_37c", 1);
										}
									}
								}
							}
							else if (iLocal_1875 == 0)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_2123, 1))
									{
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_16", 7, 0, 0, 0))
										{
											iLocal_1875 = 1;
										}
									}
								}
							}
							else if (!func_487("DS1_39"))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_2123, 1))
									{
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_39", 7, 0, 0, 0))
										{
											func_484("DS1_39", 1);
										}
									}
								}
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2047, false))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_2123.f_0))
							{
								Local_2123.f_0 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2047);
								HUD::SET_BLIP_COLOUR(Local_2123.f_0, 3);
							}
						}
						if (iLocal_1875 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
							{
								if (__LIB_0__::func_568())
								{
									HUD::CLEAR_PRINTS();
									__LIB_0__::func_620(0);
								}
							}
							else if (!__LIB_0__::func_568())
							{
								if (__LIB_0__::func_501("AW_GETBACK_INT", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								__LIB_0__::func_620(1);
							}
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_1776, 3000))
				{
					if (HUD::DOES_BLIP_EXIST(Local_2123.f_5) || HUD::DOES_BLIP_EXIST(Local_2123.f_0))
					{
						__LIB_13__::func_815(&Local_2123, 1, 0);
					}
				}
			}
			break;
		case 4:
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Floyd", iLocal_2041, 0);
			}
			if (!func_487("DS1_17"))
			{
				if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_17", 8, 0, 0, 0))
				{
					func_484("DS1_17", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 471.72974f, -3121.692f, 4.570057f, 484.0707f, -3121.8857f, 11.820057f, 11.25f, false, true, 0))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 8;
					iLocal_2317 = 12;
				}
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.67294f, -3107.9705f, 4.570056f, 474.00424f, -3108.6865f, 12.070057f, 12.75f, false, true, 0))
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 8;
				iLocal_2317 = 12;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2052, 478.71194f, -3105.5574f, 4.570057f, 479.1657f, -3123.5422f, 10.820057f, 6.5f, false, true, 0))
						{
							if (__LIB_31__::func_971(&Local_2123, 478.8654f, -3107.202f, 5.069f, 5f, 5f, 2f, 1, iLocal_2041, iLocal_2047, "", "AW_DONT_LEAVE_T", "AW_DOCK1", "AW_GETBACK_INT", 0, 0, 1, -1))
							{
								if (!func_487("HALT"))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Truck_Stop", iLocal_2047, "DOCKS_HEIST_SETUP_SOUNDS", false, 0);
										func_484("HALT", 1);
									}
								}
								if (__LIB_0__::func_213(iLocal_2047, 6f, 1, 1056964608, 0, 1, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 0f, 3);
									iLocal_1818 = 1;
									__LIB_0__::func_325();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									CUTSCENE::REQUEST_CUTSCENE("LSDHS_MCS_2", 8);
									iLocal_1843 = 1;
									iLocal_1762 = 0;
									iLocal_1759 = 0;
									iLocal_2021++;
								}
							}
						}
						else
						{
							iLocal_2318 = iLocal_2317;
							iLocal_2323 = 8;
							iLocal_2317 = 12;
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(Local_2123.f_5) || HUD::DOES_BLIP_EXIST(Local_2123.f_0))
				{
					__LIB_13__::func_815(&Local_2123, 1, 0);
				}
			}
			break;
		case 5:
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_TO_DOCKS"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_TO_DOCKS");
				}
				func_579();
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
				STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
				iLocal_2362 = MISC::GET_GAME_TIMER();
				iLocal_2021++;
			}
			break;
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2053))
			{
				func_565(10);
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_2044);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_741(2, 0));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_13__::func_741(2, 0));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
					{
						PED::DELETE_PED(&iLocal_2042);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_957(24));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_957(24));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1971[0 /*16*/].f_6))
					{
						OBJECT::DELETE_OBJECT(&(Local_1971[0 /*16*/].f_6));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_package_01"));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_package_01"));
					}
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@base");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_4@main_action");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@talk");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@base");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@main_action");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_5@base");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_7");
					STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_c");
					func_577();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2047, false);
					}
					__LIB_0__::func_483(5, PLAYER::PLAYER_PED_ID(), 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[5 /*31*/], 0f, true, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[5 /*31*/], 1, true, false);
					iLocal_2021++;
				}
			}
			break;
		case 7:
			if (__LIB_0__::func_611(&iLocal_2362, 3000))
			{
				func_568();
			}
			if (!func_487("DS1_SOF"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_SOF", 7, 0, 0, 0))
						{
							func_484("DS1_SOF", 1);
						}
					}
				}
			}
			if (func_574(&Local_2123, 476.6509f, -3048.0332f, 5.0939f, 522.4032f, -3048.6885f, 4.068941f, 465.62198f, -3048.312f, 21.16893f, 8f, 0, "LEAVE_RESTA", 0, 1, -1))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
				__LIB_13__::func_815(&Local_2123, 1, 0);
				iLocal_2021++;
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
				{
					HUD::REMOVE_BLIP(&(Local_2123.f_5));
				}
				if (SYSTEM::VDIST(476.6509f, -3048.0332f, 5.0939f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 100f)
				{
					if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
					{
						HUD::REMOVE_BLIP(&(Local_2123.f_5));
					}
					__LIB_13__::func_815(&Local_2123, 1, 0);
					iLocal_2021++;
				}
			}
			break;
		case 8:
			__LIB_15__::func_955(6, 0);
			__LIB_16__::func_793(6, 0);
			func_336();
			func_335();
			break;
	}
}

bool func_574(int* iParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, float fParam4, bool bParam5, char* sParam6, bool bParam7, bool bParam8, int iParam9)//Position - 0x8110C
{
	return __LIB_15__::func_982(iParam0, Param1, __LIB_15__::func_996(), Param2, Param3, bParam5, 1, 0, 0, 0, 0, sParam6, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 0, bParam7, __LIB_0__::func_591(), 1, 0, bParam8, iParam9, __LIB_0__::func_591(), __LIB_0__::func_591(), __LIB_0__::func_591(), 1, fParam4);
}

void func_577()//Position - 0x8122A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[iVar0])))
		{
			PHYSICS::DELETE_ROPE(&(Local_2320.f_15[iVar0]));
		}
		bLocal_1853 = false;
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
	{
		OBJECT::DELETE_OBJECT(&Local_2320);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_2320.f_1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
	{
		OBJECT::DELETE_OBJECT(&(Local_2320.f_2));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_3))
	{
		OBJECT::DELETE_OBJECT(&(Local_2320.f_3));
	}
	iVar0 = 0;
	while (iVar0 < Local_2320.f_4)
	{
		__LIB_16__::func_13(&(Local_2320.f_4[iVar0]), 1);
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_13))
	{
		OBJECT::DELETE_OBJECT(&(Local_2320.f_13));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_14))
	{
		OBJECT::DELETE_OBJECT(&(Local_2320.f_14));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1951);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1952);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1953);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1954);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1955);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1956);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1957);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1958);
}

void func_579()//Position - 0x81375
{
	int iVar0;
	int iVar1;
	iLocal_1876 = 1;
	while (iLocal_1876)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistSetup", 0);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[5 /*31*/], 1f, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[5 /*31*/], 5, true, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2053))
		{
			func_565(10);
		}
		if (iLocal_1762 == 0)
		{
			if (iLocal_1760)
			{
				iLocal_1760 = 0;
			}
			else if (iLocal_1759 == 0)
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action") && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action"))
				{
					iLocal_1876 = 1;
					iLocal_1840 = 0;
					CUTSCENE::REQUEST_CUTSCENE("LSDHS_MCS_2", 8);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
					{
						AUDIO::SET_VEH_RADIO_STATION(iLocal_2047, "OFF");
					}
					iLocal_1759++;
				}
			}
			else if (iLocal_1759 == 1)
			{
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2047, "Trevors_Lorry", 0, 0, 0);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2047, 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2047, 1, 0, 0f);
					}
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2041, "Floyd", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_2039[4]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_2039[4], "Guard_kick_Floyd_back", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_2039[5]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_2039[5], "Office_guard", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(uLocal_2039[6]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_2039[6], "Guard_with_gun", 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					iLocal_1758 = 0;
					iLocal_1759 = 0;
					iLocal_1762 = 1;
				}
			}
		}
		if (iLocal_1762 == 1)
		{
			if (iLocal_1840 == 1)
			{
				if (!iLocal_1758)
				{
					if (__LIB_1__::func_254())
					{
						iLocal_1758 = 1;
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_1840 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2052, 5f);
					}
					MISC::CLEAR_AREA(476.4661f, -3040.6094f, 6.0984f, 100f, true, true, false, false);
					iLocal_1840 = 1;
				}
			}
			if (!func_487("DAMAGE FLOYD"))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Floyd", joaat("CS_Floyd"));
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Floyd_Beaten")))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							PED::APPLY_PED_DAMAGE_DECAL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 0.426f, 0.755f, 218.157f, 1f, 1f, 3, true, "bruise");
							func_484("DAMAGE FLOYD", 1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_BRIEFCASE_02"), -1, true, true);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), true, 1, false);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 3000, 1.2757f, false, false);
				}
				else
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 3f, 3000, 1.2757f, false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Floyd", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2041) && ENTITY::DOES_ENTITY_EXIST(uLocal_2039[4])) && ENTITY::DOES_ENTITY_EXIST(uLocal_2039[5]))
					{
						if ((!PED::IS_PED_INJURED(iLocal_2041) && !PED::IS_PED_INJURED(uLocal_2039[4])) && !PED::IS_PED_INJURED(uLocal_2039[5]))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1779))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2041, true);
								PED::REMOVE_PED_FROM_GROUP(iLocal_2041);
								iLocal_1779 = PED::CREATE_SYNCHRONIZED_SCENE(478.596f, -3116.911f, 5.069f, 0f, 0f, 53.446f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1779, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_dockworker", 2f, -8f, 5, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_2039[4], iLocal_1779, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard1", 2f, -8f, 5, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_2039[5], iLocal_1779, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard2", 2f, -8f, 5, 16, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1779, true);
								PED::SET_PED_KEEP_TASK(iLocal_2041, true);
								PED::SET_PED_KEEP_TASK(uLocal_2039[4], true);
								PED::SET_PED_KEEP_TASK(uLocal_2039[5], true);
							}
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_1840 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_2039[6]))
				{
					if (!PED::IS_PED_INJURED(uLocal_2039[6]))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_2039[6], 481.6f, -3119.79f, 6.07f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(uLocal_2039[6], 51.57f);
						TASK::TASK_START_SCENARIO_IN_PLACE(uLocal_2039[6], "WORLD_HUMAN_GUARD_STAND", 0, false);
					}
				}
				iLocal_1762 = 2;
			}
		}
		if (iLocal_1762 == 2)
		{
			if (iLocal_1758)
			{
				RECORDING::REPLAY_CANCEL_EVENT();
				CUTSCENE::STOP_CUTSCENE(false);
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_1759 = 0;
			iLocal_1762 = 0;
			iLocal_1876 = 0;
		}
		if (iLocal_1762 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			iLocal_1758 = 1;
			iLocal_1762 = 1;
		}
	}
}

void func_600(int iParam0, int iParam1)//Position - 0x81E7A
{
	char cVar0[16];
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2040[iParam0]))
	{
		if (__LIB_0__::func_86(Local_2064[iParam0 /*3*/]))
		{
		}
		func_407(&(iLocal_2040[iParam0]), joaat("S_M_M_DockWork_01"), Local_2064[iParam0 /*3*/], fLocal_2028[iParam0], 0);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_2040[iParam0], true);
		PED::SET_PED_CONFIG_FLAG(iLocal_2040[iParam0], 185, true);
	}
	else if (!PED::IS_PED_INJURED(iLocal_2040[iParam0]))
	{
		PED::SET_PED_COMBAT_RANGE(iLocal_2040[iParam0], 2);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_2040[iParam0], 3);
		PED::SET_PED_CONFIG_FLAG(iLocal_2040[iParam0], 128, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2040[iParam0], iLocal_151);
		if (iParam0 == 7)
		{
			if (!PED::IS_PED_INJURED(iLocal_2040[14]))
			{
				if (Local_48[8 /*10*/] == 0)
				{
					__LIB_0__::func_222(&Local_48, 8, iLocal_2040[14], "SIGNALMAN", 0, 1);
				}
			}
		}
		if (iParam1 == 1)
		{
			if (iLocal_1842[iParam0] == 0)
			{
				StringCopy(&cVar0, "miss_dock", 16);
				StringIntConCat(&cVar0, iParam0, 16);
				if (!__LIB_0__::func_86(Local_2065[iParam0 /*13*/][0 /*3*/]))
				{
					TASK::DELETE_PATROL_ROUTE(&cVar0);
					TASK::OPEN_PATROL_ROUTE(&cVar0);
					if (!__LIB_0__::func_86(Local_2065[iParam0 /*13*/][0 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(1, "StandGuard", Local_2065[iParam0 /*13*/][0 /*3*/], Local_2065[iParam0 /*13*/][0 /*3*/], 1000);
					}
					if (!__LIB_0__::func_86(Local_2065[iParam0 /*13*/][1 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(2, "StandGuard", Local_2065[iParam0 /*13*/][1 /*3*/], Local_2065[iParam0 /*13*/][1 /*3*/], 1000);
					}
					if (!__LIB_0__::func_86(Local_2065[iParam0 /*13*/][2 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(3, "StandGuard", Local_2065[iParam0 /*13*/][2 /*3*/], Local_2065[iParam0 /*13*/][2 /*3*/], 1000);
					}
					if (!__LIB_0__::func_86(Local_2065[iParam0 /*13*/][3 /*3*/]))
					{
						TASK::ADD_PATROL_ROUTE_NODE(4, "StandGuard", Local_2065[iParam0 /*13*/][3 /*3*/], Local_2065[iParam0 /*13*/][3 /*3*/], 1000);
					}
					TASK::ADD_PATROL_ROUTE_LINK(1, 2);
					TASK::ADD_PATROL_ROUTE_LINK(2, 3);
					TASK::ADD_PATROL_ROUTE_LINK(3, 4);
					TASK::ADD_PATROL_ROUTE_LINK(4, 1);
					TASK::CLOSE_PATROL_ROUTE();
					TASK::CREATE_PATROL_ROUTE();
					if (!PED::IS_PED_INJURED(iLocal_2040[iParam0]))
					{
						TASK::TASK_PATROL(iLocal_2040[iParam0], &cVar0, 0, true, true);
					}
				}
				iLocal_1842[iParam0] = 1;
			}
		}
	}
}

void func_601()//Position - 0x820C1
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2047, false))
		{
			if (iLocal_1825 == 0)
			{
				__LIB_15__::func_955(6, 1);
				iLocal_2022 = 0;
				while (iLocal_2022 <= 14)
				{
					if (!PED::IS_PED_INJURED(uLocal_2039[iLocal_2022]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_2039[iLocal_2022], iLocal_151);
					}
					iLocal_2022++;
				}
				iLocal_1825 = 1;
			}
		}
		else if (iLocal_1825 == 1)
		{
			__LIB_15__::func_955(6, 0);
			__LIB_16__::func_793(6, 0);
			iLocal_2022 = 0;
			while (iLocal_2022 <= 14)
			{
				if (!PED::IS_PED_INJURED(uLocal_2039[iLocal_2022]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_2039[iLocal_2022], iLocal_152);
				}
				iLocal_2022++;
			}
			iLocal_1825 = 0;
		}
	}
	else if (iLocal_1825 == 1)
	{
		__LIB_15__::func_955(6, 0);
		__LIB_16__::func_793(6, 0);
		iLocal_2022 = 0;
		while (iLocal_2022 <= 14)
		{
			if (!PED::IS_PED_INJURED(uLocal_2039[iLocal_2022]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_2039[iLocal_2022], iLocal_152);
			}
			iLocal_2022++;
		}
		iLocal_1825 = 0;
	}
}

int func_603()//Position - 0x82228
{
	if (iLocal_2317 == 2)
	{
		if (iLocal_1873[0] == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_2066, true) < 100f)
			{
				STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
				STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
				STREAMING::REQUEST_MODEL(joaat("biff"));
				STREAMING::REQUEST_MODEL(joaat("forklift"));
				if (((STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("biff"))) && STREAMING::HAS_MODEL_LOADED(joaat("forklift")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[0]))
					{
						func_483(&(uLocal_2046[0]), joaat("biff"), Local_2070[0 /*3*/], fLocal_2034[0], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[1]))
					{
						func_483(&(uLocal_2046[1]), joaat("forklift"), Local_2070[1 /*3*/], fLocal_2034[1], -1, 1f, 0);
					}
					else
					{
						func_481(0, 1);
						func_481(1, 1);
						func_481(2, 1);
						func_481(3, 0);
						func_481(7, 0);
						func_481(8, 0);
						func_600(4, 1);
						func_600(5, 1);
						func_600(6, 1);
						func_600(7, 1);
						func_600(8, 1);
						if (iLocal_2317 != 6)
						{
							func_600(12, 1);
						}
						func_600(13, 1);
						func_600(14, 1);
						func_600(17, 1);
						func_600(18, 1);
						iLocal_1873[0] = 1;
					}
				}
			}
		}
	}
	if (iLocal_2317 > 2 && iLocal_2317 < 5)
	{
		if (iLocal_1873[0] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
			STREAMING::REQUEST_MODEL(joaat("biff"));
			STREAMING::REQUEST_MODEL(joaat("forklift"));
			if (((STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("biff"))) && STREAMING::HAS_MODEL_LOADED(joaat("forklift")))
			{
				if (iLocal_2317 == 3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[2]))
					{
						func_483(&(uLocal_2046[2]), joaat("biff"), Local_2070[2 /*3*/], fLocal_2034[2], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[3]))
					{
						func_483(&(uLocal_2046[3]), joaat("biff"), Local_2070[3 /*3*/], fLocal_2034[3], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[0]))
					{
						func_483(&(uLocal_2046[0]), joaat("biff"), Local_2070[0 /*3*/], fLocal_2034[0], -1, 1f, 0);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[1]))
					{
						func_483(&(uLocal_2046[1]), joaat("forklift"), Local_2070[1 /*3*/], fLocal_2034[1], -1, 1f, 0);
					}
					else
					{
						func_481(0, 1);
						func_481(1, 1);
						func_481(2, 1);
						func_481(3, 0);
						func_481(7, 0);
						func_481(8, 0);
						func_600(4, 1);
						func_600(5, 1);
						func_600(6, 1);
						func_600(7, 1);
						func_600(8, 1);
						if (iLocal_2317 != 6)
						{
							func_600(12, 1);
						}
						func_600(13, 1);
						func_600(14, 1);
						func_600(17, 1);
						func_600(18, 1);
						iLocal_1873[0] = 1;
					}
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[1]))
				{
					func_483(&(uLocal_2046[1]), joaat("forklift"), Local_2070[1 /*3*/], fLocal_2034[1], -1, 1f, 0);
				}
				else
				{
					func_481(0, 1);
					func_481(1, 1);
					func_481(2, 1);
					func_481(3, 0);
					func_481(7, 0);
					func_481(8, 0);
					func_600(4, 1);
					func_600(5, 1);
					func_600(6, 1);
					func_600(7, 1);
					func_600(8, 1);
					if (iLocal_2317 != 6)
					{
						func_600(12, 1);
					}
					func_600(13, 1);
					func_600(14, 1);
					func_600(17, 1);
					func_600(18, 1);
					iLocal_1873[0] = 1;
				}
			}
		}
	}
	if (iLocal_2317 > 4)
	{
		if (iLocal_1873[0] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_BlackOps_01")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01")))
			{
				func_481(0, 1);
				func_481(1, 1);
				func_481(2, 1);
				func_481(3, 0);
				func_481(7, 0);
				func_481(8, 0);
				func_600(4, 1);
				func_600(5, 1);
				func_600(6, 1);
				func_600(7, 1);
				func_600(8, 1);
				if (iLocal_2317 != 6)
				{
					func_600(12, 1);
				}
				func_600(13, 1);
				func_600(14, 1);
				func_600(17, 1);
				func_600(18, 1);
				iLocal_1873[0] = 1;
			}
		}
	}
	if (iLocal_2317 > 3 && iLocal_2317 < 11)
	{
		if (iLocal_1873[1] == 0)
		{
			if (iLocal_1873[0] == 1)
			{
				STREAMING::REQUEST_MODEL(joaat("handler"));
				STREAMING::REQUEST_MODEL(joaat("forklift"));
				STREAMING::REQUEST_MODEL(joaat("prop_contr_03b_ld"));
				if ((STREAMING::HAS_MODEL_LOADED(joaat("forklift")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_contr_03b_ld"))) && STREAMING::HAS_MODEL_LOADED(joaat("handler")))
				{
					if (iLocal_2317 < 7)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
						{
							if (iLocal_2317 == 6)
							{
								func_483(&iLocal_2045, joaat("handler"), -92.7994f, -2448.4775f, 5.0163f, 257.5271f, -1, 1f, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, false);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2045, 0);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2045, false, 0);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_2045, false);
							}
							else
							{
								func_483(&iLocal_2045, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 1f, 0);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, false);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2045, 0);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2045, false, 0);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_2045, true);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_2045, false);
							}
						}
					}
					if (!PED::IS_PED_INJURED(uLocal_2039[3]))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_2039[3], "WORLD_HUMAN_GUARD_STAND", -123.91f, -2352.94f, 9.32f, -0.21f, 0, false, true);
					}
					if (!PED::IS_PED_INJURED(uLocal_2039[7]))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_2039[7], "WORLD_HUMAN_SMOKING", -133.26f, -2379.25f, 9.32f, 153.86f, 0, false, true);
					}
					if (!PED::IS_PED_INJURED(uLocal_2039[8]))
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_2039[8], "WORLD_HUMAN_BINOCULARS", -216.83f, -2376.18f, 26.46f, -160.35f, 0, false, true);
					}
					if (!PED::IS_PED_INJURED(iLocal_2040[6]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[6], "WORLD_HUMAN_WELDING", 0, false);
						PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_2040[6], false);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2040[6], 16);
					}
					if (!PED::IS_PED_INJURED(iLocal_2040[8]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[8], "WORLD_HUMAN_STAND_MOBILE", 0, false);
					}
					if (!PED::IS_PED_INJURED(iLocal_2040[13]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[13], "WORLD_HUMAN_CLIPBOARD", 0, false);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2040[13], 16);
					}
					iLocal_1873[1] = 1;
				}
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_2040[6]))
		{
			PED::SET_PED_CAPSULE(iLocal_2040[6], 0.5f);
		}
	}
	if (iLocal_2317 == 7)
	{
		if (iLocal_1873[3] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2050))
				{
					func_483(&iLocal_2050, joaat("hauler"), -117.9839f, -2416.6272f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false))
					{
						func_483(&iLocal_2051, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2050, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_2050), -1, 0, 1);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_2050);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_2051);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2051, 1, true);
					}
				}
				else
				{
					iLocal_1873[3] = 1;
				}
			}
		}
	}
	if (iLocal_2317 == 8)
	{
		if (iLocal_1873[3] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("hauler"));
			STREAMING::REQUEST_MODEL(joaat("docktrailer"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("hauler")) && STREAMING::HAS_MODEL_LOADED(joaat("docktrailer")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
				{
					func_483(&iLocal_2047, joaat("hauler"), -117.9839f, -2416.6272f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
					{
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_2047, 0, 0);
						func_483(&iLocal_2052, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2047, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_2047), -1, 0, 1);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_2047);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_2052);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, true);
					}
				}
				else
				{
					iLocal_1873[3] = 1;
				}
			}
		}
	}
	if (iLocal_2317 > 8)
	{
		if (iLocal_1873[2] == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
			STREAMING::REQUEST_MODEL(joaat("tiptruck"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01")) && STREAMING::HAS_MODEL_LOADED(joaat("tiptruck")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2048))
				{
					func_483(&iLocal_2048, joaat("tiptruck"), 465.8751f, -3037.0837f, 5.0686f, 126.3433f, -1, 0, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2040[15]))
				{
					func_600(15, 1);
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2040[16]))
				{
					func_600(16, 1);
				}
				else
				{
					iLocal_1873[2] = 1;
				}
			}
		}
	}
	if (iLocal_2317 > 2)
	{
		if (iLocal_2317 == 3)
		{
			if (iLocal_1873[0] == 1)
			{
				func_604();
				return 1;
			}
		}
		if (iLocal_2317 == 3)
		{
			if (iLocal_1873[0] == 1)
			{
				func_604();
				return 1;
			}
		}
		if (iLocal_2317 == 4)
		{
			if (iLocal_1873[0] == 1 && iLocal_1873[1] == 1)
			{
				func_604();
				return 1;
			}
		}
		if (iLocal_2317 == 5)
		{
			if (iLocal_1873[0] == 1 && iLocal_1873[1] == 1)
			{
				func_604();
				return 1;
			}
		}
		if (iLocal_2317 == 6)
		{
			if (iLocal_1873[0] == 1 && iLocal_1873[1] == 1)
			{
				func_604();
				return 1;
			}
		}
		if (iLocal_2317 == 7)
		{
			if ((iLocal_1873[0] == 1 && iLocal_1873[1] == 1) && iLocal_1873[3] == 1)
			{
				func_604();
				return 1;
			}
		}
		if (iLocal_2317 == 8)
		{
			if ((iLocal_1873[0] == 1 && iLocal_1873[1] == 1) && iLocal_1873[3] == 1)
			{
				func_604();
				return 1;
			}
		}
		if (iLocal_2317 == 9)
		{
			if ((iLocal_1873[0] == 1 && iLocal_1873[1] == 1) && iLocal_1873[2] == 1)
			{
				func_604();
				return 1;
			}
		}
	}
	return 0;
}

void func_604()//Position - 0x82CA2
{
	int iVar0;
	if (iLocal_64 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			if (iLocal_65[iVar0] != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_65[iVar0]);
				iLocal_65[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_64 = 0;
}

void func_607()//Position - 0x82DC2
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(-119.67f, -2415.13f, 6f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 100f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_2320.f_0))
			{
				OBJECT::DELETE_OBJECT(&Local_2320);
				OBJECT::DELETE_OBJECT(&(Local_2320.f_1));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_2));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_13));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[0]));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[1]));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[2]));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[3]));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[4]));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[5]));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[6]));
				OBJECT::DELETE_OBJECT(&(Local_2320.f_4[7]));
				OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/]));
				OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_1));
				OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_2));
				OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/]));
				OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_1));
				OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_2));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1950);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1951);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1952);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1953);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1954);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1955);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1956);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1957);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1958);
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
				STREAMING::REQUEST_IPL("pcranecont");
			}
		}
	}
}

void func_623()//Position - 0x83F90
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -108.58572f, -2429.4622f, 26.250675f, -108.808174f, -2400.434f, 16.000675f, 13f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0.25f);
	}
	if (!func_487("DH_1_TAKE_PHOTOS"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_USE_CRANE"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_1_USE_CRANE");
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("DH_1_TAKE_PHOTOS");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
			func_484("DH_1_TAKE_PHOTOS", 1);
		}
	}
	if (iLocal_2021 > 0)
	{
		if (!iLocal_2356)
		{
			if (__LIB_16__::func_926())
			{
				__LIB_0__::func_497(585, 1, 0);
				iLocal_2356 = 1;
			}
		}
		else if (!__LIB_16__::func_926())
		{
			iLocal_2356 = 0;
		}
	}
	func_653(0);
	if (iLocal_2021 > 2 && iLocal_2021 != 66)
	{
		func_649();
	}
	if (iLocal_2358 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
	}
	else if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
	if (iLocal_2021 > 2)
	{
		if (!func_487("START SKIP FADE"))
		{
			if (bLocal_1872 == 1)
			{
				if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					iLocal_1792 = MISC::GET_GAME_TIMER();
					func_484("START SKIP FADE", 1);
				}
			}
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || !CAM::IS_SCREEN_FADING_IN())
		{
			if (__LIB_0__::func_611(&iLocal_1792, 800))
			{
				func_489(1);
				bLocal_1872 = false;
			}
		}
	}
	switch (iLocal_2021)
	{
		case 0:
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_1");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_2");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_3");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_4");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_5");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_6");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_7");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("pols_8");
			iLocal_2358 = 0;
			iLocal_2357 = 1;
			__LIB_38__::func_489(1);
			iLocal_2356 = 0;
			Local_1902 = { -110.2902f, -2415.79f, 5.05f };
			Local_2071 = { -109.87f, -2415.71f, 14.67f };
			if (bLocal_1872 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				if (func_565(0))
				{
					__LIB_38__::func_768(7, "Photograph Boat", 0, 0, 0, 1);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					iLocal_2021++;
				}
			}
			else
			{
				Global_32196 = 0;
				__LIB_38__::func_768(7, "Photograph Boat", 0, 0, 0, 1);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				iLocal_2021++;
			}
			break;
		case 1:
			Local_1902 = { -110.2902f, -2415.79f, 5.05f };
			if (bLocal_1872 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			}
			if (HUD::IS_RADAR_HIDDEN())
			{
				HUD::DISPLAY_RADAR(true);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_566();
			}
			__LIB_20__::func_864(20);
			if (func_645(0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
				{
					if (func_570())
					{
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -114.5969f, -2406.8113f, 22.2282f, 2f, 2f, 2f, false, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -114.5969f, -2406.8113f, 22.2282f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 359.8527f);
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_1))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_2));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_1))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_1));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_2))
						{
							OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_2));
						}
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(PLAYER::PLAYER_PED_ID(), true);
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (!__LIB_0__::func_77(0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
						}
						SYSTEM::SETTIMERA(0);
						iLocal_1769 = 13;
						iLocal_1763 = 0;
						iLocal_1764 = 0;
						if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_1))
						{
							ENTITY::SET_ENTITY_COLLISION(Local_2320.f_1, true, false);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_68))
						{
							HUD::REMOVE_BLIP(&iLocal_68);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_1908))
						{
							HUD::REMOVE_BLIP(&iLocal_1908);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_1909))
						{
							HUD::REMOVE_BLIP(&iLocal_1909);
						}
						iLocal_2021++;
					}
				}
			}
			break;
		case 2:
			if (bLocal_1872 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
					{
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2047, 5f);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2052, 5f);
				}
			}
			__LIB_20__::func_832(1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
			__LIB_0__::func_671(0);
			HUD::UNLOCK_MINIMAP_ANGLE();
			if (bLocal_1872 == 0)
			{
				func_489(1);
			}
			iLocal_2021 = 66;
			break;
		case 66:
			if (bLocal_1872 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			}
			if (!func_487("DH1_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DH1_START");
				func_484("DH1_START", 1);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!func_487("DS1_SNAP"))
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_SNAP", 8, 0, 0, 0))
					{
						func_484("DS1_SNAP", 1);
					}
				}
				else if (bLocal_1872 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
					{
						if (__LIB_17__::func_786(&Local_2123, -114.5757f, -2407.0234f, 22.4f, 0.5f, 0.5f, 2f, 1, "AW_VANTAGE", 0, 1, -1, 1))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_68))
							{
								HUD::REMOVE_BLIP(&iLocal_68);
							}
							HUD::REMOVE_BLIP(&(Local_2123.f_5));
							if (__LIB_0__::func_501("AW_VANTAGE", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_2358 = 1;
							iLocal_2021 = 3;
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -114.597664f, -2406.9893f, 22.04523f, -112.79329f, -2407.0793f, 24.337223f, 1.75f, false, true, 0))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_68))
							{
								HUD::REMOVE_BLIP(&iLocal_68);
							}
							HUD::REMOVE_BLIP(&(Local_2123.f_5));
							if (__LIB_0__::func_501("AW_VANTAGE", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_2358 = 1;
							iLocal_2021 = 3;
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_68))
					{
						HUD::REMOVE_BLIP(&iLocal_68);
					}
					HUD::REMOVE_BLIP(&(Local_2123.f_5));
					if (__LIB_0__::func_501("AW_VANTAGE", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					iLocal_2021 = 3;
				}
			}
			break;
		case 3:
			if (!func_487("AW_TAKE_PHOTO"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					__LIB_16__::func_919("AW_TAKE_PHOTO");
					func_484("AW_TAKE_PHOTO", 1);
				}
			}
			if (BitTest(Global_8136, 21))
			{
				if (__LIB_0__::func_1("PHOTO_H1A"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("S_M_M_DockWork_01"), -84.0127f, -2365.9124f, 16.5003f, true) && __LIB_13__::func_784(-84.0127f, -2365.9124f, 16.5003f, 0.2f, 200f))
			{
				if (__LIB_16__::func_926())
				{
					if (!__LIB_16__::func_801())
					{
						HUD::CLEAR_HELP(true);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						iLocal_1914 = MISC::GET_GAME_TIMER();
						iLocal_1763 = 1;
						iLocal_2021 = 99;
					}
					if (iLocal_2021 != 99)
					{
						if (iLocal_2357)
						{
							iLocal_2357 = 0;
						}
					}
				}
			}
			break;
		case 99:
			__LIB_0__::func_646();
			if (!__LIB_16__::func_926())
			{
				if (!PED::IS_PED_INJURED(uLocal_2039[0]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_2039[0]);
				}
				if (!PED::IS_PED_INJURED(uLocal_2039[1]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_2039[1]);
				}
				if (!PED::IS_PED_INJURED(uLocal_2039[2]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_2039[2]);
				}
				if (!PED::IS_PED_INJURED(uLocal_2039[3]))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(uLocal_2039[3]);
				}
				iLocal_2021 = 4;
			}
			break;
		case 4:
			__LIB_0__::func_646();
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (BitTest(Global_8136, 21))
			{
				if (__LIB_0__::func_1("PHOTO_H2A"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (((!PED::IS_PED_INJURED(uLocal_2039[0]) && !PED::IS_PED_INJURED(uLocal_2039[1])) && !PED::IS_PED_INJURED(uLocal_2039[2])) && !PED::IS_PED_INJURED(uLocal_2039[3]))
			{
				if (((PED::IS_TRACKED_PED_VISIBLE(uLocal_2039[0]) || PED::IS_TRACKED_PED_VISIBLE(uLocal_2039[1])) || PED::IS_TRACKED_PED_VISIBLE(uLocal_2039[2])) || PED::IS_TRACKED_PED_VISIBLE(uLocal_2039[3]))
				{
					if (((func_631(uLocal_2039[0], fLocal_1891, fLocal_1892) || func_631(uLocal_2039[1], fLocal_1891, fLocal_1892)) || func_631(uLocal_2039[2], fLocal_1891, fLocal_1892)) || func_631(uLocal_2039[3], fLocal_1891, fLocal_1892))
					{
						if (__LIB_16__::func_926())
						{
							if (!__LIB_16__::func_801())
							{
								HUD::CLEAR_HELP(true);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								iLocal_1763 = 2;
								iLocal_1914 = MISC::GET_GAME_TIMER();
								iLocal_2021 = 98;
							}
							if (iLocal_2021 != 98)
							{
								if (iLocal_2357)
								{
									iLocal_2357 = 0;
								}
							}
						}
					}
				}
			}
			break;
		case 98:
			__LIB_0__::func_646();
			if (!__LIB_16__::func_926())
			{
				iLocal_2021 = 5;
			}
			break;
		case 5:
			__LIB_0__::func_646();
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (BitTest(Global_8136, 21))
			{
				if (__LIB_0__::func_1("PHOTO_H2A"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("S_M_M_DockWork_01"), -220.3576f, -2365.8496f, 28.6856f, true))
			{
				if (__LIB_16__::func_926() && __LIB_0__::func_611(&iLocal_1914, 2200))
				{
					if (!__LIB_16__::func_801())
					{
						if (__LIB_16__::func_923())
						{
							__LIB_16__::func_922(0);
						}
						__LIB_20__::func_833(1);
						__LIB_16__::func_919("PHOTO_OB1");
						iLocal_1763 = 3;
						iLocal_2021++;
						SYSTEM::SETTIMERA(0);
					}
					if (iLocal_2021 != 6)
					{
						if (iLocal_2357)
						{
							iLocal_2357 = 0;
						}
					}
				}
			}
			break;
		case 6:
			__LIB_0__::func_646();
			if (__LIB_0__::func_686())
			{
				if (__LIB_0__::func_77(0))
				{
					__LIB_0__::func_630(578);
					__LIB_16__::func_921(20);
					iLocal_2021++;
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			break;
		case 7:
			if (__LIB_21__::func_288(20))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
				iLocal_2358 = 0;
				iLocal_2021++;
				__LIB_20__::func_833(0);
				SYSTEM::SETTIMERA(0);
			}
			break;
		case 8:
			if (!func_487("DH_1_PHONE_RON"))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_TAKE_PHOTOS"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_TAKE_PHOTOS");
				}
				else
				{
					AUDIO::START_AUDIO_SCENE("DH_1_PHONE_RON");
					func_484("DH_1_PHONE_RON", 1);
				}
			}
			if (SYSTEM::TIMERA() > 2000)
			{
				iLocal_1876 = 0;
				__LIB_20__::func_832(0);
				SYSTEM::SETTIMERA(0);
				iLocal_2359 = MISC::GET_GAME_TIMER();
				iLocal_2021++;
			}
			break;
		case 9:
			if (SYSTEM::TIMERA() > 2000)
			{
				iLocal_2021++;
			}
			break;
		case 10:
			if (func_844())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2047, true);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("DH1_STOP");
				__LIB_38__::func_489(0);
				func_336();
				iLocal_2317 = 9;
			}
			break;
	}
}

int func_631(int iParam0, float fParam1, float fParam2)//Position - 0x84BD2
{
	float fVar0;
	float fVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
				{
					if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam0, true), 0.001f))
					{
						GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, &fVar1);
						if (((fVar0 > (0.5f - fParam1) && fVar0 < (0.5f + fParam1)) && fVar1 > (0.5f - fParam2)) && fVar1 < (0.5f + fParam2))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_645(bool bParam0)//Position - 0x84F1F
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
	{
		iVar0 = 0;
		SYSTEM::WAIT(0);
		if (bParam0)
		{
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1941))
				{
					iLocal_1941 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.15f, -0.35f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1941, Local_2320.f_1, -1);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1941, "missheistdockssetup1trevor_crane", "idle", 8f, -8f, 1, 16, 1000f, 0);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1941, false);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1941, true);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[0 /*25*/].f_1, Local_2319[0 /*25*/], -1, Local_1905, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_2))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[0 /*25*/].f_2, Local_2319[0 /*25*/], -1, Local_1906, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_1))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[1 /*25*/].f_1, Local_2319[1 /*25*/], -1, Local_1905, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_2))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[1 /*25*/].f_2, Local_2319[1 /*25*/], -1, Local_1906, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			}
		}
		ENTITY::DETACH_ENTITY(Local_2320.f_1, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_1, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2320.f_1, Local_2320.f_0, -1, Local_2320.f_24, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		iVar0 = 0;
		while (iVar0 < Local_2320.f_4)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2320.f_4[iVar0], Local_2320.f_0, -1, Local_2320.f_36[iVar0 /*3*/], 0f, 0f, 0f, false, false, false, false, 2, true, 0);
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_649()//Position - 0x8517E
{
	switch (iLocal_1764)
	{
		case 0:
			if (!BitTest(Global_8136, 21))
			{
			}
			if (!__LIB_16__::func_925())
			{
				if (__LIB_0__::func_1("PH_HELP2"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (!__LIB_0__::func_77(0))
			{
				if (iLocal_1763 == 3)
				{
					if (!__LIB_21__::func_288(20))
					{
						if (!func_487("PH_HELP6"))
						{
							__LIB_0__::func_151("PH_HELP6", -1);
							func_484("PH_HELP6", 1);
						}
					}
				}
				if (__LIB_0__::func_1("PH_HELP2"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			else
			{
				if (__LIB_0__::func_1("PH_HELP1"))
				{
					HUD::CLEAR_HELP(true);
				}
				iLocal_1764++;
			}
			break;
		case 1:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
			{
				if (iLocal_1763 != 3)
				{
					if (!__LIB_0__::func_1("PH_HELP2"))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
						__LIB_0__::func_190("PH_HELP2");
					}
				}
			}
			else
			{
				if (iLocal_1763 == 3)
				{
					if (!__LIB_21__::func_288(20))
					{
						if (!func_487("PH_HELP6"))
						{
							__LIB_0__::func_151("PH_HELP6", -1);
							func_484("PH_HELP6", 1);
						}
					}
				}
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
				if (BitTest(Global_8136, 18))
				{
					iLocal_1764++;
				}
			}
			if (!__LIB_0__::func_77(0))
			{
				iLocal_1764 = 0;
			}
			break;
		case 2:
			if (iLocal_1763 == 0)
			{
				if (!__LIB_0__::func_1("PHOTO_H1A"))
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					SYSTEM::SETTIMERA(0);
					if (!BitTest(Global_8136, 21))
					{
						__LIB_0__::func_151("PHOTO_H1A", 60000);
					}
				}
			}
			else
			{
				if (iLocal_1763 == 1)
				{
					iLocal_1764++;
				}
				if (iLocal_1763 == 2)
				{
					iLocal_1764 = 4;
				}
				if (iLocal_1763 == 3)
				{
					iLocal_1764 = 5;
				}
			}
			if (__LIB_0__::func_77(0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					iLocal_1764 = 1;
				}
			}
			else
			{
				iLocal_1764 = 0;
			}
			break;
		case 3:
			if (iLocal_1763 == 1)
			{
				if (!__LIB_0__::func_1("PHOTO_H2A"))
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					SYSTEM::SETTIMERA(0);
					if (!BitTest(Global_8136, 21))
					{
						__LIB_0__::func_151("PHOTO_H2A", 60000);
					}
				}
			}
			else
			{
				if (iLocal_1763 == 2)
				{
					iLocal_1764++;
				}
				if (iLocal_1763 == 3)
				{
					iLocal_1764 = 5;
				}
			}
			if (__LIB_0__::func_77(0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					iLocal_1764 = 1;
				}
			}
			else
			{
				iLocal_1764 = 0;
			}
			break;
		case 4:
			if (iLocal_1763 == 2)
			{
				if (!__LIB_0__::func_1("PHOTO_H3A"))
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					SYSTEM::SETTIMERA(0);
					if (!BitTest(Global_8136, 21))
					{
						__LIB_0__::func_151("PHOTO_H3A", 60000);
					}
				}
			}
			else if (iLocal_1763 == 3)
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
				SYSTEM::SETTIMERA(0);
				if (!BitTest(Global_8136, 21))
				{
					__LIB_0__::func_190("PH_HELP5");
					iLocal_1764++;
				}
			}
			if (__LIB_0__::func_77(0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					iLocal_1764 = 1;
				}
			}
			else
			{
				iLocal_1764 = 0;
			}
			break;
		case 5:
			if (__LIB_0__::func_77(0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) != 0)
				{
					if (__LIB_0__::func_686())
					{
						if (__LIB_0__::func_1("PH_HELP5"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					if (!__LIB_21__::func_288(20))
					{
					}
					else
					{
						if (__LIB_0__::func_1("PH_HELP5"))
						{
							HUD::CLEAR_HELP(true);
						}
						iLocal_1764++;
					}
				}
				else
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_1764 = 0;
				}
			}
			else
			{
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_HELP(true);
				}
				iLocal_1764 = 0;
			}
			break;
		case 6:
			if (iLocal_1763 == 3)
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					iLocal_1764++;
					HUD::CLEAR_HELP(true);
				}
			}
			break;
	}
}

void func_653(bool bParam0)//Position - 0x8555C
{
	if (bParam0 == 0)
	{
	}
	ENTITY::CREATE_MODEL_HIDE(-72.16f, -2390.39f, 24.11f, 200f, joaat("prop_dock_crane_02"), bParam0);
}

void func_656()//Position - 0x85649
{
	if (!func_487("DH_1_USE_CRANE"))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_CLIMB_UP_CRANE"))
		{
			AUDIO::STOP_AUDIO_SCENE("DH_1_CLIMB_UP_CRANE");
		}
		else
		{
			AUDIO::START_AUDIO_SCENE("DH_1_USE_CRANE");
			func_484("DH_1_USE_CRANE", 1);
		}
	}
	func_653(0);
	func_603();
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	switch (iLocal_2021)
	{
		case 0:
			func_674();
			iLocal_1802 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0);
			if (bLocal_1872)
			{
				Local_2320.f_70 = 0.297f;
				Local_2320.f_74 = 0f;
				Local_1902 = { -53.6982f, -2415.79f, 5.05f };
				Local_2071 = { -53.02f, -2416.04f, 14.75f };
				func_484("DS1_10", 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_2045, -166.8165f, -2460.648f, 5.2973f, true, false, false, true);
					VEHICLE::DELETE_VEHICLE(&iLocal_2045);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
				}
				while ((!func_565(0) || !func_565(1)) || !func_565(13))
				{
					SYSTEM::WAIT(0);
					RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistSetup", 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2051, false))
				{
					VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2050, iLocal_2051, 1f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2050, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2051, true);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_2051, 1, true);
					VEHICLE::SET_VEHICLE_STRONG(iLocal_2051, true);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2051, true);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_566();
				}
				if (func_570())
				{
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2041, -114.33f, -2426.18f, 6f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_2041, -4.84f);
					}
					iLocal_1910 = HUD::GET_MAIN_PLAYER_BLIP_ID();
					if (HUD::DOES_BLIP_EXIST(iLocal_1910))
					{
						HUD::SET_BLIP_ALPHA(iLocal_1910, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[12]))
					{
						PED::DELETE_PED(&(iLocal_2040[12]));
					}
					Global_32196 = 0;
					iLocal_1769 = 12;
					iLocal_1765 = 0;
					STREAMING::REMOVE_IPL("pcranecont");
					func_673(1);
					__LIB_38__::func_768(6, "Use Crane", 0, 0, 0, 1);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
					iLocal_2021++;
				}
			}
			else
			{
				func_484("DS1_10", 1);
				__LIB_38__::func_768(6, "Use Crane", 0, 0, 0, 1);
				func_570();
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::DESTROY_CAM(iLocal_2057, false);
				func_669(1);
				iLocal_1838 = 0;
				iLocal_1837 = 0;
				iLocal_1765 = 0;
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(false);
				iLocal_2021++;
			}
			break;
		case 1:
			if (!bLocal_1872)
			{
				func_669(1);
				if (func_645(1))
				{
					if (!PED::IS_PED_INJURED(iLocal_2040[13]))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2040[13], -116.91f, -2401.23f, 6f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_2040[13], 163.87f);
					}
					if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2055[1]))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_2055[1]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2054[1]))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_2054[1]));
						}
						TASK::TASK_WANDER_IN_AREA(Local_1968[0 /*16*/], -149.3773f, -2482.7092f, 5.0189f, 15f, 3f, 6f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2045, -166.8165f, -2460.648f, 5.2973f, true, false, false, true);
						VEHICLE::DELETE_VEHICLE(&iLocal_2045);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_2045);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
					}
					iLocal_2021++;
				}
			}
			else if (func_645(1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2051, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2050))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_2051, 1, true);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2050, iLocal_2051, 1f);
						ENTITY::SET_ENTITY_PROOFS(iLocal_2051, false, false, false, true, false, false, false, false);
					}
					if (!PED::IS_PED_INJURED(iLocal_2040[11]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2046[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_2040[11], uLocal_2046[0], false))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_2046[0], 1, "AWDock1", true);
								VEHICLE::SET_PLAYBACK_SPEED(uLocal_2046[0], 0.8f);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[13]))
						{
							ENTITY::SET_ENTITY_COORDS(iLocal_2040[13], -116.91f, -2401.23f, 6f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iLocal_2040[13], 163.87f);
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2050, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2051, true);
						iLocal_2021++;
					}
				}
			}
			break;
		case 2:
			func_669(1);
			if (bLocal_1872 == 0)
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
			{
				bLocal_1872 = false;
				STREAMING::REQUEST_ANIM_DICT("misslsdhs");
				Local_2320.f_77 = 0;
				func_489(1);
				if (CAM::DOES_CAM_EXIST(iLocal_1801))
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1904, iLocal_1801, 2000, 1, 1);
				}
				AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", true);
				AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_04_PUNK" /* GXT: Channel X */);
				__LIB_0__::func_499(584, 0);
				__LIB_0__::func_366(0);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.2f);
				iLocal_2021++;
			}
			break;
		case 3:
			__LIB_1__::func_33(0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
			if (!bLocal_1872)
			{
				if (!iLocal_1838)
				{
					if (func_565(1))
					{
						iLocal_1838 = 1;
					}
				}
			}
			if (!iLocal_1837)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2051, false))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2050))
						{
							VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2050, iLocal_2051, 1f);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2050, true);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2051, true);
							VEHICLE::SET_VEHICLE_EXTRA(iLocal_2051, 1, true);
							iLocal_1837 = 1;
						}
					}
				}
			}
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
			PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
			func_669(0);
			func_662();
			if (bLocal_1869)
			{
				if (!PED::IS_PED_INJURED(iLocal_2040[13]))
				{
					if (func_487("CLAMP SOUND"))
					{
						AUDIO::STOP_SOUND(iLocal_1795);
						func_484("CLAMP SOUND", 0);
					}
					__LIB_0__::func_498(0, -1);
					__LIB_0__::func_221(&Local_48, 8);
					__LIB_0__::func_222(&Local_48, 8, iLocal_2040[13], "SIGNALMAN", 0, 1);
					iLocal_2021++;
				}
			}
			break;
		case 4:
			func_660();
			if (iLocal_1903)
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_THEFT_EXPORT_CARS_CRANE_SECTION_SCENE");
				iLocal_1903 = 0;
			}
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			GRAPHICS::CASCADE_SHADOWS_ENABLE_FREEZER(true);
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			func_659();
			iLocal_2021++;
			break;
		case 5:
			iLocal_1910 = HUD::GET_MAIN_PLAYER_BLIP_ID();
			if (HUD::DOES_BLIP_EXIST(iLocal_1910))
			{
				HUD::SET_BLIP_ALPHA(iLocal_1910, 100);
			}
			__LIB_13__::func_808(&iLocal_2074);
			__LIB_13__::func_808(&iLocal_1907);
			CAM::STOP_GAMEPLAY_HINT(false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2047, true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2047, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_2052, true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_68))
			{
				HUD::REMOVE_BLIP(&iLocal_68);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_1908))
			{
				HUD::REMOVE_BLIP(&iLocal_1908);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_1909))
			{
				HUD::REMOVE_BLIP(&iLocal_1909);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1trevor_crane");
			SYSTEM::SETTIMERA(0);
			AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			iLocal_2021++;
			break;
		case 6:
			if (func_844())
			{
				STREAMING::REMOVE_ANIM_DICT("map_objects");
				func_657();
				func_336();
				func_335();
			}
			break;
	}
}

void func_657()//Position - 0x85D8A
{
	if (HUD::DOES_BLIP_EXIST(iLocal_69))
	{
		HUD::REMOVE_BLIP(&iLocal_69);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_68))
	{
		HUD::REMOVE_BLIP(&iLocal_68);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_70))
	{
		HUD::REMOVE_BLIP(&iLocal_70);
	}
}

void func_659()//Position - 0x85DDD
{
	if (MISC::IS_PC_VERSION())
	{
		if (iLocal_2324)
		{
			PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
			iLocal_2324 = 0;
		}
	}
}

void func_660()//Position - 0x85DFA
{
	int iVar0;
	SYSTEM::SETTIMERA(0);
	iLocal_1876 = 1;
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	while (iLocal_1876)
	{
		SYSTEM::WAIT(0);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		if (!func_487("DS1_10j"))
		{
			if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10j", 8, 0, 0, 0))
			{
				func_484("DS1_10j", 1);
			}
		}
		switch (iLocal_1899)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
				{
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					iLocal_1819 = 0;
					if (!PED::IS_PED_INJURED(iLocal_2040[13]))
					{
						PED::CLEAR_ALL_PED_PROPS(iLocal_2040[13]);
					}
					iVar0 = 0;
					while (iVar0 < Local_2319.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[iVar0 /*25*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2319[iVar0 /*25*/], false))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar0 /*25*/]))
							{
								ENTITY::DETACH_ENTITY(Local_2319[iVar0 /*25*/], true, true);
								ENTITY::SET_ENTITY_COORDS(Local_2319[iVar0 /*25*/], -110.21107f, -2416.4353f, 6.472473f, true, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(Local_2319[iVar0 /*25*/], -0.051485f, 1E-06f, 91.33805f, 2, true);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_2052) && !ENTITY::IS_ENTITY_DEAD(iLocal_2052, false))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[iVar0 /*25*/], iLocal_2052, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2052, -110.21107f, -2416.4353f, 6.472473f), 0f, 0f, 0f, true, false, true, false, 2, true, 0);
								}
							}
						}
						iVar0++;
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					__LIB_0__::func_671(0);
					CAM::DESTROY_ALL_CAMS(false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					Local_2320.f_70 = 0.297f;
					Local_2320.f_74 = 0f;
					iLocal_1811 = 1;
					func_489(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_0__::func_325();
					__LIB_0__::func_221(&Local_48, 8);
					__LIB_0__::func_222(&Local_48, 8, iLocal_2040[13], "SIGNALMAN", 0, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[14]))
					{
						PED::DELETE_PED(&(iLocal_2040[14]));
					}
					if (!CAM::DOES_CAM_EXIST(iLocal_2057))
					{
						iLocal_2057 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
					}
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2320.f_0, -110.2902f, -2415.79f, 5f, false, false, true);
					CAM::PLAY_CAM_ANIM(iLocal_2057, "get_out_cam", "missheistdockssetup1trevor_crane", -108.078f, -2413.115f, 20.586f, 0f, 0f, 180f, false, 2);
					CAM::SET_CAM_ACTIVE(iLocal_2057, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					iLocal_1941 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.1f, -0.35f, 0f, 0f, 0f, 2);
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1941, true);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1941, false);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1941, Local_2320.f_1, -1);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1941, "missheistdockssetup1trevor_crane", "get_out", 8f, -4f, 5, 0, 1000f, 0);
					AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
					RECORDING::REPLAY_START_EVENT(4);
					iLocal_1899++;
				}
				break;
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
				{
					if (!PED::IS_PED_INJURED(iLocal_2040[13]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -4f, -1, 262144, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 8f, -4f, -1, 262144, 0f, false, false, false);
						TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_CLIPBOARD", 0, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2040[13], iLocal_2056);
					}
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					}
					ENTITY::SET_ENTITY_COLLISION(Local_2320.f_1, true, false);
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_1802);
					iLocal_1899++;
				}
				break;
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1941))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1941) > 0.95f)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(PLAYER::PLAYER_PED_ID(), -105.3195f, -2603.9893f, 5.0007f, 0);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_WIDESCREEN_BORDERS(false, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						__LIB_16__::func_918(500);
						HUD::CLEAR_PRINTS();
						CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
						CAM::SET_WIDESCREEN_BORDERS(false, 0);
						MISC::SET_TIME_SCALE(1f);
						HUD::DISPLAY_RADAR(true);
						STREAMING::REMOVE_ANIM_DICT("misslsdhs");
						__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
						HUD::DISPLAY_HUD(true);
						__LIB_0__::func_671(0);
						HUD::CLEAR_HELP(true);
						__LIB_0__::func_325();
						RECORDING::REPLAY_STOP_EVENT();
						__LIB_0__::func_203(0, 0);
						__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
						iLocal_1899 = 0;
						iLocal_1805 = 0;
						iLocal_1876 = 0;
					}
				}
				break;
		}
	}
}

void func_662()//Position - 0x86334
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_1893);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_1893);
	func_666();
	if (iLocal_1765 > 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(Local_2319[0 /*25*/], false) };
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
		{
			Var7 = { ENTITY::GET_ENTITY_COORDS(Local_2319[1 /*25*/], false) };
		}
		if (func_665(Var6, Var3) || func_665(Var7, Var3))
		{
			if (Local_2320.f_77 == 0)
			{
				if (iLocal_1765 < 15)
				{
					if (!__LIB_0__::func_1("CRH_PICKUC"))
					{
						__LIB_0__::func_190("CRH_PICKUC");
					}
				}
			}
			else if (bLocal_1900)
			{
				if (!__LIB_0__::func_1("CRH_H3A"))
				{
					__LIB_0__::func_190("CRH_H3A");
				}
			}
			else if (!__LIB_0__::func_1("CRH_H3B"))
			{
				__LIB_0__::func_190("CRH_H3B");
			}
		}
		else if (Local_2320.f_77 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2052, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[1 /*25*/], iLocal_2052, 1.5f, 1f, 1f, false, true, 0))
					{
						func_664();
						if (iLocal_1765 < 15)
						{
							if (!__LIB_0__::func_1("CRH_RELC"))
							{
								__LIB_0__::func_190("CRH_RELC");
							}
						}
					}
					else if (bLocal_1900)
					{
						if (!__LIB_0__::func_1("CRH_H3A"))
						{
							__LIB_0__::func_190("CRH_H3A");
						}
					}
					else if (!__LIB_0__::func_1("CRH_H3B"))
					{
						__LIB_0__::func_190("CRH_H3B");
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2052, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[0 /*25*/], iLocal_2052, 1.5f, 1f, 1f, false, true, 0))
					{
						func_664();
						if (!__LIB_0__::func_1("CRH_RELC"))
						{
							__LIB_0__::func_190("CRH_RELC");
						}
					}
					else if (bLocal_1900)
					{
						if (!__LIB_0__::func_1("CRH_H3A"))
						{
							__LIB_0__::func_190("CRH_H3A");
						}
					}
					else if (!__LIB_0__::func_1("CRH_H3B"))
					{
						__LIB_0__::func_190("CRH_H3B");
					}
				}
			}
		}
		else if (bLocal_1900)
		{
			if (!__LIB_0__::func_1("CRH_H3A"))
			{
				__LIB_0__::func_190("CRH_H3A");
			}
		}
		else if (!__LIB_0__::func_1("CRH_H3B"))
		{
			__LIB_0__::func_190("CRH_H3B");
		}
	}
	if (iLocal_1765 == 5)
	{
		if (bLocal_1900)
		{
			if (!__LIB_0__::func_1("CRH_HELP2A"))
			{
				__LIB_0__::func_190("CRH_HELP2A");
			}
		}
		else if (!__LIB_0__::func_1("CRH_HELP2B"))
		{
			__LIB_0__::func_190("CRH_HELP2B");
		}
	}
	if (iLocal_1765 == 6)
	{
		if (MISC::ABSF((Var3.f_0 - Var4.f_0)) < 5f)
		{
		}
		if (bLocal_1900)
		{
			if (!__LIB_0__::func_1("CRH_HELP3A"))
			{
				__LIB_0__::func_190("CRH_HELP3A");
			}
		}
		else if (!__LIB_0__::func_1("CRH_HELP3B"))
		{
			__LIB_0__::func_190("CRH_HELP3B");
		}
	}
	if (iLocal_1765 == 1)
	{
		if (bLocal_1900)
		{
			if (!__LIB_0__::func_1("CRH_H1A"))
			{
				__LIB_0__::func_190("CRH_H1A");
			}
		}
		else if (!__LIB_0__::func_1("CRH_H1B"))
		{
			__LIB_0__::func_190("CRH_H1B");
		}
	}
	if (iLocal_1765 > 8)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_2050))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_2050) > 9757f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_2051);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2050))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_2050);
					}
				}
			}
		}
	}
	if (iLocal_1765 > 10 && iLocal_1765 < 15)
	{
		if (Local_2320.f_77)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_68))
				{
					iLocal_68 = __LIB_0__::func_488(ENTITY::GET_ENTITY_COORDS(iLocal_2052, true), 0);
					ENTITY::SET_ENTITY_PROOFS(iLocal_2052, true, true, true, true, true, false, false, false);
					HUD::SET_BLIP_COLOUR(iLocal_68, 3);
				}
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_1908))
			{
				HUD::REMOVE_BLIP(&iLocal_1908);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_1909))
			{
				HUD::REMOVE_BLIP(&iLocal_1909);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_68))
			{
				HUD::REMOVE_BLIP(&iLocal_68);
			}
			if (iLocal_1871 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_1908) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Local_2319[0 /*25*/])))
					{
						iLocal_1908 = __LIB_0__::func_639(Local_2319[0 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(iLocal_1908, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_1908))
			{
				HUD::REMOVE_BLIP(&iLocal_1908);
			}
			if (iLocal_1870 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_1909) && !HUD::DOES_BLIP_EXIST(HUD::GET_BLIP_FROM_ENTITY(Local_2319[1 /*25*/])))
					{
						iLocal_1909 = __LIB_0__::func_639(Local_2319[1 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(iLocal_1909, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_1909))
			{
				HUD::REMOVE_BLIP(&iLocal_1909);
			}
		}
	}
	else if (iLocal_1765 > 0)
	{
		if (Local_2320.f_77)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_1908))
			{
				HUD::REMOVE_BLIP(&iLocal_1908);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_1909))
			{
				HUD::REMOVE_BLIP(&iLocal_1909);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2051, false))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_68))
				{
					iLocal_68 = __LIB_0__::func_488(ENTITY::GET_ENTITY_COORDS(iLocal_2051, true), 0);
					HUD::SET_BLIP_COLOUR(iLocal_68, 3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_68))
			{
				HUD::REMOVE_BLIP(&iLocal_68);
			}
			if (iLocal_1871 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_1908))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
					{
						iLocal_1908 = __LIB_0__::func_639(Local_2319[0 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(iLocal_1908, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_1908))
			{
				HUD::REMOVE_BLIP(&iLocal_1908);
			}
			if (iLocal_1870 == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_1909))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
					{
						iLocal_1909 = __LIB_0__::func_639(Local_2319[1 /*25*/], 0, 0);
						HUD::SET_BLIP_COLOUR(iLocal_1909, 2);
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_1909))
			{
				HUD::REMOVE_BLIP(&iLocal_1909);
			}
		}
	}
	if (func_487("DS1_10a"))
	{
		if (!func_487("DS1_10a2"))
		{
			if (!__LIB_13__::func_755(&Local_2123, 1))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10a2", 7, 0, 0, 0))
					{
						func_484("DS1_10a2", 1);
					}
				}
			}
		}
	}
	switch (iLocal_1765)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DOCKS_HEIST_USING_CRANE"))
			{
				AUDIO::START_AUDIO_SCENE("DOCKS_HEIST_USING_CRANE");
			}
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			func_663(1);
			func_663(0);
			func_663(3);
			func_663(2);
			if (!func_487("DS1_10"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10", 7, 0, 0, 0))
					{
						func_484("DS1_10", 1);
					}
				}
			}
			else if (!__LIB_13__::func_755(&Local_2123, 2))
			{
				__LIB_16__::func_919("AW_GRAB_CR");
				iLocal_1908 = __LIB_0__::func_639(Local_2319[0 /*25*/], 0, 0);
				iLocal_1909 = __LIB_0__::func_639(Local_2319[1 /*25*/], 0, 0);
				HUD::SET_BLIP_COLOUR(iLocal_1908, 2);
				HUD::SET_BLIP_COLOUR(iLocal_1909, 2);
				if (bLocal_1900)
				{
					if (!__LIB_0__::func_1("CRH_H1A"))
					{
						__LIB_0__::func_190("CRH_H1A");
					}
				}
				else if (!__LIB_0__::func_1("CRH_H1B"))
				{
					__LIB_0__::func_190("CRH_H1B");
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				__LIB_0__::func_366(1);
				SYSTEM::SETTIMERA(0);
				iLocal_1855 = 0;
				iLocal_1785 = MISC::GET_GAME_TIMER();
				Local_1918 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_1, false) };
				iLocal_1765++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&iLocal_1785, 200))
			{
				if (!func_487("DS1_10a"))
				{
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10a", 7, 0, 0, 0))
						{
							func_484("DS1_10a", 1);
						}
					}
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_1, false) };
				Var1 = { ENTITY::GET_ENTITY_COORDS(Local_2319[0 /*25*/], false) };
				Var2 = { ENTITY::GET_ENTITY_COORDS(Local_2319[1 /*25*/], false) };
				if ((SYSTEM::VDIST(Local_1918, Var0) > 1f || MISC::ABSF((Var0.f_0 - Var1.f_0)) < 1f) || MISC::ABSF((Var0.f_0 - Var2.f_0)) < 1f)
				{
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true) };
				}
				if (func_665(ENTITY::GET_ENTITY_COORDS(Local_2319[0 /*25*/], false), Var3) || func_665(ENTITY::GET_ENTITY_COORDS(Local_2319[1 /*25*/], false), Var3))
				{
					HUD::CLEAR_HELP(true);
					if (!__LIB_0__::func_1("CRH_SPR"))
					{
						__LIB_0__::func_190("CRH_SPR");
					}
					iLocal_1785 = MISC::GET_GAME_TIMER();
					Local_1918 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_1, false) };
					func_663(2);
					iLocal_1765++;
				}
				if (Var0.f_1 < -2418.09f || Var0.f_1 > -2413.05f)
				{
					HUD::CLEAR_HELP(true);
					if (!__LIB_0__::func_1("CRH_SPR"))
					{
						__LIB_0__::func_190("CRH_SPR");
					}
					iLocal_1785 = MISC::GET_GAME_TIMER();
					Local_1918 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_1, false) };
					func_663(2);
					iLocal_1765++;
				}
				else
				{
					func_663(2);
				}
			}
			else
			{
				func_663(1);
				func_663(0);
				func_663(3);
				func_663(2);
			}
			break;
		case 2:
			if (!func_487("DS1_10b"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10b", 7, 0, 0, 0))
						{
							func_484("DS1_10b", 1);
						}
					}
				}
			}
			else
			{
				iLocal_1765++;
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&iLocal_1785, 1000))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (!func_487("DS1_10c"))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10c", 7, 0, 0, 0))
							{
								func_484("DS1_10c", 1);
							}
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true) };
				}
				if (func_665(ENTITY::GET_ENTITY_COORDS(Local_2319[0 /*25*/], false), Var3) || func_665(ENTITY::GET_ENTITY_COORDS(Local_2319[1 /*25*/], false), Var3))
				{
					if (__LIB_0__::func_1("CRH_SPR"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (__LIB_0__::func_501("AW_GRAB_CR", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!__LIB_0__::func_1("CRH_PICKUC"))
					{
						__LIB_0__::func_190("CRH_PICKUC");
					}
					SYSTEM::SETTIMERA(0);
					iLocal_1765++;
				}
				else
				{
					func_663(2);
				}
			}
			else
			{
				func_663(1);
				func_663(0);
				func_663(3);
				func_663(2);
			}
			break;
		case 4:
			if (Local_2320.f_77)
			{
				if (__LIB_0__::func_1("CRH_PICKUC"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2051, false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2051, true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_2051, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2051, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_2051, true, true, true, true, true, false, false, false);
				}
				HUD::REMOVE_BLIP(&iLocal_1908);
				HUD::REMOVE_BLIP(&iLocal_1909);
				if (bLocal_1900)
				{
					if (!__LIB_0__::func_1("CRH_HELP2A"))
					{
						__LIB_0__::func_190("CRH_HELP2A");
					}
				}
				else if (!__LIB_0__::func_1("CRH_HELP2B"))
				{
					__LIB_0__::func_190("CRH_HELP2B");
				}
				iLocal_1765++;
			}
			else if (!__LIB_13__::func_755(&Local_2123, 1))
			{
				if (!func_487("DS1_10d"))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10d", 7, 0, 0, 0))
						{
							func_484("DS1_10d", 1);
						}
					}
				}
			}
			break;
		case 5:
			if (Local_2320.f_77)
			{
				if (Local_2320.f_70 < -55f)
				{
					if (__LIB_0__::func_1("CRH_HELP2A"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iLocal_2051, true);
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_2047);
					VEHICLE::DELETE_VEHICLE(&iLocal_2052);
					func_663(2);
					iLocal_1765++;
				}
				else
				{
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (!func_487("DS1_10e"))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10e", 7, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
									func_484("DS1_10e", 1);
								}
							}
						}
					}
					if (func_487("DS1_10e"))
					{
						if (!func_487("DS1_10e3"))
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10e3", 7, 0, 0, 0))
									{
										func_484("DS1_10e3", 1);
									}
								}
							}
						}
						else if (!func_487("DS1_10e5"))
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10e5", 7, 0, 0, 0))
									{
										func_484("DS1_10e5", 1);
									}
								}
							}
						}
					}
					func_663(2);
				}
			}
			break;
		case 6:
			if ((!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2051, false))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[1 /*25*/], iLocal_2051, 1.5f, 1f, 1f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(Local_2319[1 /*25*/]) < 0.3f) || (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[0 /*25*/], iLocal_2051, 1.5f, 1f, 1f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(Local_2319[0 /*25*/]) < 0.3f))
				{
					if (!__LIB_0__::func_1("CRH_RELC"))
					{
						__LIB_0__::func_190("CRH_RELC");
					}
					func_664();
					func_663(2);
					iLocal_1765++;
				}
				else
				{
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (!func_487("DS1_10f"))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10f", 7, 0, 0, 0))
								{
									func_484("DS1_10f", 1);
								}
							}
						}
					}
					if (func_487("DS1_10f"))
					{
						if (!func_487("DS1_10e2"))
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10e2", 7, 0, 0, 0))
									{
										func_484("DS1_10e2", 1);
									}
								}
							}
						}
					}
					func_663(2);
				}
			}
			break;
		case 7:
			if ((!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2051, false))
			{
				if ((ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[1 /*25*/], iLocal_2051, 1.5f, 1f, 1f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(Local_2319[1 /*25*/]) < 0.3f) || (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[0 /*25*/], iLocal_2051, 1.5f, 1f, 1f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(Local_2319[0 /*25*/]) < 0.3f))
				{
					func_664();
					if (Local_2320.f_77 == 0)
					{
						if (__LIB_0__::func_1("CRH_RELC"))
						{
							HUD::CLEAR_HELP(true);
						}
						func_663(2);
						func_663(1);
						func_663(0);
						func_663(3);
						iLocal_1765++;
					}
				}
				else
				{
					func_663(2);
				}
			}
			if (func_487("DS1_10f"))
			{
				if (!func_487("DS1_10e2"))
				{
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10e2", 7, 0, 0, 0))
							{
								func_484("DS1_10e2", 1);
							}
						}
					}
				}
			}
			break;
		case 8:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2051, false))
			{
				if (Local_2320.f_77 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_68))
					{
						HUD::REMOVE_BLIP(&iLocal_68);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[1 /*25*/], iLocal_2051, 1.5f, 1f, 1f, false, true, 0))
							{
								func_664();
								if (ENTITY::GET_ENTITY_SPEED(Local_2319[1 /*25*/]) < 0.3f)
								{
									if (!HUD::DOES_BLIP_EXIST(iLocal_1908))
									{
										iLocal_1908 = __LIB_0__::func_639(Local_2319[0 /*25*/], 0, 0);
									}
									HUD::REMOVE_BLIP(&iLocal_68);
									if (HUD::DOES_BLIP_EXIST(iLocal_1909))
									{
										HUD::REMOVE_BLIP(&iLocal_1909);
									}
									Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2051, ENTITY::GET_ENTITY_COORDS(Local_2319[1 /*25*/], true)) };
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[1 /*25*/], iLocal_2051, 0, Var8, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
									iLocal_1870 = 1;
									iLocal_1855 = 1;
									Local_2319[1 /*25*/].f_15 = 1;
								}
							}
							else
							{
								if (!ENTITY::IS_ENTITY_ATTACHED(Local_2319[1 /*25*/]))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_2319[1 /*25*/]) < 0.2f)
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[1 /*25*/], iLocal_2051, 10.5f, 2f, 10f, false, true, 0))
										{
											if (!__LIB_13__::func_755(&Local_2123, 1))
											{
												if (!func_487("DS1_10l"))
												{
													if (!__LIB_0__::func_75())
													{
														if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10l", 7, 0, 0, 0))
														{
															func_484("DS1_10l", 1);
														}
													}
												}
											}
										}
									}
								}
								if (!ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[0 /*25*/], iLocal_2051, 1.5f, 1f, 1f, false, true, 0))
									{
										func_664();
										if (ENTITY::GET_ENTITY_SPEED(Local_2319[0 /*25*/]) < 0.3f)
										{
											if (!HUD::DOES_BLIP_EXIST(iLocal_1909))
											{
												iLocal_1909 = __LIB_0__::func_639(Local_2319[1 /*25*/], 0, 0);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_1908))
											{
												HUD::REMOVE_BLIP(&iLocal_1908);
											}
											HUD::REMOVE_BLIP(&iLocal_68);
											Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2051, ENTITY::GET_ENTITY_COORDS(Local_2319[0 /*25*/], true)) };
											ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[0 /*25*/], iLocal_2051, 0, Var8, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_2050, false);
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_2051, false);
											iLocal_1871 = 1;
											iLocal_1855 = 1;
											Local_2319[0 /*25*/].f_15 = 1;
										}
									}
									else if (!ENTITY::IS_ENTITY_ATTACHED(Local_2319[0 /*25*/]))
									{
										if (ENTITY::GET_ENTITY_SPEED(Local_2319[0 /*25*/]) < 0.2f)
										{
											if (!__LIB_13__::func_755(&Local_2123, 1))
											{
												if (!func_487("DS1_10l"))
												{
													if (!__LIB_0__::func_75())
													{
														if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10l", 7, 0, 0, 0))
														{
															func_484("DS1_10l", 1);
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_1871 || iLocal_1870)
					{
						func_663(0);
						func_663(2);
						if (!func_487("DS1_10f3"))
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10f3", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
										func_484("DS1_10f3", 1);
									}
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2050, false))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_2051, Local_2319[0 /*25*/]) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_2051, Local_2319[1 /*25*/]))
							{
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "AWDocks1"))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2050, false);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2051, false);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_2050, 2, "AWDocks1", true);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
									iLocal_2094 = 1;
									iLocal_1766 = MISC::GET_GAME_TIMER();
									iLocal_1824 = 1;
									func_484("DS1_10l", 0);
									iLocal_1765++;
								}
								else
								{
									VEHICLE::REQUEST_VEHICLE_RECORDING(2, "AWDocks1");
								}
							}
						}
					}
				}
				else
				{
					func_663(1);
					func_663(0);
					func_663(3);
				}
			}
			break;
		case 9:
			func_663(2);
			func_663(0);
			if (!__LIB_13__::func_755(&Local_2123, 1))
			{
				if (!func_487("DS1_10g"))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10g", 7, 0, 0, 0))
						{
							func_484("DS1_10g", 1);
						}
					}
				}
			}
			if (!__LIB_0__::func_611(&iLocal_1766, 1000))
			{
				iVar5 = 0;
				while (iVar5 < 8)
				{
					PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_2320.f_15[iVar5]);
					PHYSICS::START_ROPE_WINDING(Local_2320.f_15[iVar5]);
					iVar5++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_82))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_82, "CRANE_MOVE_U_D", Local_2320.f_2, 0, false, 0);
				}
			}
			if (__LIB_0__::func_611(&iLocal_1766, 5000))
			{
				iLocal_1824 = 0;
				iLocal_2094 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_1766 = MISC::GET_GAME_TIMER();
				iLocal_1765++;
			}
			break;
		case 10:
			if (!func_487("DS1_10g"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10g", 7, 0, 0, 0))
						{
							func_484("DS1_10g", 1);
						}
					}
				}
			}
			else if (!func_487("DS1_10g2"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10g2", 7, 0, 0, 0))
						{
							func_484("DS1_10g2", 1);
						}
					}
				}
			}
			if (__LIB_0__::func_611(&iLocal_1766, 3000))
			{
				iLocal_1855 = 0;
			}
			if (Local_2320.f_77)
			{
				func_663(2);
			}
			if (Local_2320.f_77 || Local_2320.f_70 > -22f)
			{
				HUD::CLEAR_PRINTS();
				iLocal_1855 = 0;
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
				{
					func_483(&iLocal_2047, joaat("hauler"), -117.9839f, -2416.6272f, 5.0003f, 91.3366f, -1, 0, 1);
				}
				else
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
						{
							func_483(&iLocal_2052, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2047, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_2047), -1, 0, 1);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_2047, 0, 0);
							VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_2041, iLocal_2047, 20000, -1, 2f, 1, 0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
								{
									VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2047, true);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_2052, true);
									ENTITY::SET_ENTITY_PROOFS(iLocal_2052, false, false, false, true, false, false, false, false);
									iLocal_1765++;
								}
							}
						}
					}
				}
			}
			break;
		case 11:
			if (!func_487("DS1_10g3"))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10g3", 7, 0, 0, 0))
						{
							func_484("DS1_10g3", 1);
						}
					}
				}
			}
			if (Local_2320.f_77 == 1)
			{
				func_663(2);
			}
			if (Local_2320.f_70 < -55f)
			{
				iLocal_1765++;
			}
			break;
		case 12:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_2047, true) };
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
				{
					if (Local_2320.f_77 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[1 /*25*/], iLocal_2052, 1.5f, 1f, 1f, false, true, 0))
								{
									func_664();
									if (ENTITY::GET_ENTITY_SPEED(Local_2319[1 /*25*/]) < 0.3f)
									{
										if (iLocal_1870 == 0)
										{
											ENTITY::DETACH_ENTITY(Local_2319[1 /*25*/], true, true);
											Local_2319[1 /*25*/].f_15 = 1;
											Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2052, ENTITY::GET_ENTITY_COORDS(Local_2319[1 /*25*/], true)) };
											ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[1 /*25*/], iLocal_2052, 0, Var9, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
											iLocal_1870 = 1;
											iLocal_1855 = 1;
											PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
											if (HUD::DOES_BLIP_EXIST(iLocal_1908))
											{
												HUD::REMOVE_BLIP(&iLocal_1908);
											}
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_2050))
											{
												VEHICLE::DELETE_VEHICLE(&iLocal_2050);
											}
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
											{
												VEHICLE::DELETE_VEHICLE(&iLocal_2051);
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
											{
												OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/]));
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_1))
											{
												OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_1));
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/].f_2))
											{
												OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_2));
											}
											HUD::CLEAR_PRINTS();
											iLocal_1765++;
										}
									}
								}
								else if (iLocal_1871 == 0)
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false))
									{
										if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2319[0 /*25*/], iLocal_2052, 1.5f, 1f, 1f, false, true, 0))
										{
											func_664();
											if (ENTITY::GET_ENTITY_SPEED(Local_2319[0 /*25*/]) < 0.3f)
											{
												Local_2319[0 /*25*/].f_15 = 1;
												ENTITY::DETACH_ENTITY(Local_2319[0 /*25*/], true, true);
												Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_2052, ENTITY::GET_ENTITY_COORDS(Local_2319[0 /*25*/], true)) };
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2319[0 /*25*/], iLocal_2052, 0, Var9, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
												iLocal_1871 = 1;
												iLocal_1855 = 1;
												PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
												if (HUD::DOES_BLIP_EXIST(iLocal_1909))
												{
													HUD::REMOVE_BLIP(&iLocal_1909);
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_2050))
												{
													VEHICLE::DELETE_VEHICLE(&iLocal_2050);
												}
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
												{
													VEHICLE::DELETE_VEHICLE(&iLocal_2051);
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
												{
													OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/]));
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_1))
												{
													OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_1));
												}
												if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/].f_2))
												{
													OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_2));
												}
												HUD::CLEAR_PRINTS();
												iLocal_1765++;
											}
										}
										else if (!func_487("DS1_noton"))
										{
											if (!__LIB_13__::func_755(&Local_2123, 1))
											{
												if (!__LIB_0__::func_75())
												{
													if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_noton", 7, 0, 0, 0))
													{
														func_484("DS1_noton", 1);
													}
												}
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
		case 13:
			func_663(2);
			if (Local_2320.f_77 == 0)
			{
				if (Local_2320.f_70 < -55f)
				{
					HUD::CLEAR_PRINTS();
					SYSTEM::SETTIMERA(0);
					iLocal_2094 = 1;
					iLocal_1824 = 1;
					iLocal_1765++;
				}
				else
				{
					SYSTEM::SETTIMERA(0);
				}
			}
			break;
		case 14:
			if (Local_2320.f_77 == 0)
			{
				iVar5 = 0;
				while (iVar5 < 8)
				{
					PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_2320.f_15[iVar5]);
					PHYSICS::START_ROPE_WINDING(Local_2320.f_15[iVar5]);
					iVar5++;
				}
				if (SYSTEM::TIMERA() > 3000)
				{
					if (Local_2320.f_70 < -55f)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2047, false);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_2052, false);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_68))
						{
							HUD::REMOVE_BLIP(&iLocal_68);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_1908))
						{
							HUD::REMOVE_BLIP(&iLocal_1908);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_1909))
						{
							HUD::REMOVE_BLIP(&iLocal_1909);
						}
						if (!AUDIO::HAS_SOUND_FINISHED(Local_2320.f_82))
						{
							AUDIO::STOP_SOUND(Local_2320.f_82);
						}
						HUD::UNLOCK_MINIMAP_ANGLE();
						__LIB_0__::func_630(577);
						bLocal_1869 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DOCKS_HEIST_USING_CRANE"))
						{
							AUDIO::STOP_AUDIO_SCENE("DOCKS_HEIST_USING_CRANE");
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_1824 = 0;
						iLocal_1765++;
					}
				}
				else if (!Local_2320.f_79)
				{
					if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_82))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_82, "CRANE_MOVE_U_D", Local_2320.f_2, 0, false, 0);
					}
					AUDIO::SET_VARIABLE_ON_SOUND(Local_2320.f_82, "Speed", (fLocal_2085 / 2f));
				}
				else if (!AUDIO::HAS_SOUND_FINISHED(Local_2320.f_82))
				{
					AUDIO::STOP_SOUND(Local_2320.f_82);
				}
			}
			else
			{
				func_663(2);
			}
			break;
		case 15:
			HUD::UNLOCK_MINIMAP_ANGLE();
			HUD::DISPLAY_RADAR(true);
			if (!__LIB_13__::func_755(&Local_2123, 1))
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				HUD::CLEAR_HELP(true);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_68))
			{
				HUD::REMOVE_BLIP(&iLocal_68);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_1908))
			{
				HUD::REMOVE_BLIP(&iLocal_1908);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_1909))
			{
				HUD::REMOVE_BLIP(&iLocal_1909);
			}
			break;
	}
}

void func_663(int iParam0)//Position - 0x87DE7
{
	if (iParam0 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/, true);
	}
	if (iParam0 == 2)
	{
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/, true);
	}
	if (iParam0 == 1)
	{
		if (bLocal_1900)
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/, true);
		}
	}
	if (iParam0 == 3)
	{
		if (bLocal_1900)
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/, true);
		}
	}
}

void func_664()//Position - 0x87E49
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2051, false))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
		{
			func_663(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2052, false))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
		{
			func_663(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2051, false))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
		{
			func_663(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2052, false))
	{
		if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
		{
			func_663(0);
		}
	}
}

int func_665(struct<3> Param0, struct<3> Param1)//Position - 0x87F09
{
	if (!iLocal_1855)
	{
		if (MISC::ABSF((Param0.f_0 - Param1.f_0)) < fLocal_2035)
		{
			if (MISC::ABSF((Param0.f_1 - Param1.f_1)) < fLocal_2036)
			{
				if ((Param1.f_2 - Param0.f_2) > fLocal_2037)
				{
					if ((Param1.f_2 - Param0.f_2) < fLocal_2038)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_666()//Position - 0x87F61
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2051, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2319[0 /*25*/], iLocal_2051))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
			{
				func_663(0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[0 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2052, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2319[0 /*25*/], iLocal_2052))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
			{
				func_663(0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2051, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2319[1 /*25*/], iLocal_2051))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
			{
				func_663(0);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2319[1 /*25*/], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_2052, false))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2319[1 /*25*/], iLocal_2052))
		{
			if (PAD::GET_CONTROL_UNBOUND_NORMAL(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < 0f)
			{
				func_663(0);
			}
		}
	}
}

void func_669(bool bParam0)//Position - 0x880DF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	struct<3> Var28;
	float fVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	struct<3> Var33;
	float fVar34;
	struct<3> Var35;
	struct<3> Var36;
	float fVar37;
	int iVar38;
	int iVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	struct<3> Var43;
	struct<3> Var44;
	float fVar45;
	float fVar46;
	struct<3> Var47;
	struct<3> Var48;
	struct<3> Var49;
	struct<3> Var50;
	struct<3> Var51;
	struct<3> Var52;
	struct<3> Var53;
	struct<3> Var54;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(0 /*PLAYER_CONTROL*/);
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(2 /*FRONTEND_CONTROL*/);
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakePortContainersPO102"), -80f, -2410f, 0, 0);
	if (bLocal_1900)
	{
		HUD::LOCK_MINIMAP_ANGLE(iLocal_2326);
		if (!func_487("CRANE TIMECYCLE"))
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			GRAPHICS::SET_TIMECYCLE_MODIFIER("crane_cam");
			func_484("CRANE TIMECYCLE", 1);
			func_484("CINEMATIC TIMECYCLE", 0);
		}
	}
	else
	{
		HUD::LOCK_MINIMAP_ANGLE(iLocal_2327);
		if (!func_487("CINEMATIC TIMECYCLE"))
		{
			GRAPHICS::CASCADE_SHADOWS_SET_SPLIT_Z_EXP_WEIGHT(0.5f);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.2f);
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			GRAPHICS::SET_TIMECYCLE_MODIFIER("crane_cam_cinematic");
			func_484("CINEMATIC TIMECYCLE", 1);
			func_484("CRANE TIMECYCLE", 0);
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iLocal_2094 == 0)
	{
		iVar0 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 220 /*INPUT_SCRIPT_RIGHT_AXIS_X*/) - 128);
		iVar1 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 221 /*INPUT_SCRIPT_RIGHT_AXIS_Y*/) - 128);
		iVar2 = (PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) - 128);
	}
	iVar3 = 0;
	iVar4 = -1;
	iVar3 = 0;
	while (iVar3 < Local_2319.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2319[iVar3 /*25*/]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar3 /*25*/]))
			{
				iVar4 = iVar3;
			}
		}
		iVar3++;
	}
	if (MISC::ABSI(iVar0) < 15)
	{
		iVar0 = 0;
	}
	if (MISC::ABSI(iVar1) < 15)
	{
		iVar1 = 0;
	}
	if (MISC::ABSI(iVar2) < 15)
	{
		iVar2 = 0;
	}
	Var5 = { ENTITY::GET_ENTITY_VELOCITY(Local_2320.f_2) };
	Var6 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true) };
	Var7 = { ENTITY::GET_ENTITY_ROTATION(Local_2320.f_2, 2) };
	if (iVar4 >= 0)
	{
		Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, 0f, 5f, -3.5f) };
		Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, 0f, -5f, -3.5f) };
	}
	else
	{
		Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, 0f, 5f, -1f) };
		Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, 0f, -5f, -1f) };
	}
	STREAMING::REQUEST_ANIM_DICT("map_objects");
	if (!Local_2320.f_79)
	{
		if (iVar2 >= 1)
		{
			Local_2320.f_87++;
			if (Local_2320.f_87 > 10)
			{
				if ((Var5.f_2 > -0.1f && MISC::ABSF(Var7.f_1) < 5f) && MISC::ABSF((Local_2320.f_67.f_1 - Var7.f_1)) < 0.5f)
				{
					Local_2320.f_79 = 1;
					Local_2320.f_87 = 0;
					Local_2320.f_88 = 0;
				}
			}
		}
		else
		{
			Local_2320.f_87 = 0;
			Local_2320.f_88 = 0;
		}
	}
	else
	{
		if (iVar0 != 0)
		{
			Local_2320.f_88++;
		}
		if (((MISC::ABSF((Local_2320.f_64.f_2 - Var6.f_2)) > 0.01f || MISC::ABSF((Local_2320.f_67.f_1 - Var7.f_1)) > 0.5f) || MISC::ABSF(Var7.f_1) > 5f) || MISC::ABSF(Var7.f_0) > 5f)
		{
			func_663(0);
			Local_2320.f_79 = 0;
			Local_2320.f_87 = 0;
			Local_2320.f_88 = 0;
		}
	}
	Local_2320.f_64 = { Var6 };
	Local_2320.f_67 = { Var7 };
	iVar3 = 0;
	while (iVar3 < 8)
	{
		PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_2320.f_15[iVar3]);
		PHYSICS::STOP_ROPE_WINDING(Local_2320.f_15[iVar3]);
		if (iVar2 < 0)
		{
			PHYSICS::START_ROPE_WINDING(Local_2320.f_15[iVar3]);
		}
		if (iVar2 > 0)
		{
			PHYSICS::START_ROPE_UNWINDING_FRONT(Local_2320.f_15[iVar3]);
		}
		iVar3++;
	}
	if (iVar2 > 0)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var12 + Vector(50f, 0f, 0f), &fVar14, false, false);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var13 + Vector(50f, 0f, 0f), &fVar15, false, false);
		if (fVar14 > Var12.f_2 || fVar15 > Var13.f_2)
		{
			iVar2 = 0;
		}
	}
	if (iVar0 != 0)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var8 + Vector(50f, 0f, 0f), &fVar16, false, false);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var9 + Vector(50f, 0f, 0f), &fVar17, false, false);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var10 + Vector(50f, 0f, 0f), &fVar18, false, false);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var11 + Vector(50f, 0f, 0f), &fVar19, false, false);
		if (fVar16 > Var8.f_2 || fVar17 > Var9.f_2)
		{
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
		}
		else if (fVar18 > Var10.f_2 || fVar19 > Var11.f_2)
		{
			if (iVar0 > 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (iVar1 != 0)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var8 + Vector(50f, 0f, 0f), &fVar20, false, false);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var9 + Vector(50f, 0f, 0f), &fVar21, false, false);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var10 + Vector(50f, 0f, 0f), &fVar22, false, false);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var11 + Vector(50f, 0f, 0f), &fVar23, false, false);
		if (fVar20 > Var8.f_2 || fVar21 > Var9.f_2)
		{
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		else if (fVar22 > Var10.f_2 || fVar23 > Var11.f_2)
		{
			if (iVar1 > 0)
			{
				iVar1 = 0;
			}
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_2319.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2319[iVar3 /*25*/]))
		{
			if (iVar3 != iVar4)
			{
				if (iVar0 != 0)
				{
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var8, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, 6f, 3f), 3f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var9, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, 6f, 3f), 3f, false, true))
					{
						if (iVar0 < 0)
						{
							iVar0 = 0;
						}
					}
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var10, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, 6f, 3f), 3f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var11, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, 6f, 3f), 3f, false, true))
					{
						if (iVar0 > 0)
						{
							iVar0 = 0;
						}
					}
				}
				if (iVar2 > 0)
				{
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var12, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, 6f, 2.7f), 3f, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var13, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, -6f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2319[iVar3 /*25*/], 0f, 6f, 2.7f), 3f, false, true))
					{
						iVar2 = 0;
					}
				}
			}
		}
		iVar3++;
	}
	if (!iLocal_1903)
	{
		AUDIO::START_AUDIO_SCENE("CAR_THEFT_EXPORT_CARS_CRANE_SECTION_SCENE");
		iLocal_1903 = 1;
	}
	if (MISC::ABSI(iVar0) > MISC::ABSI(iVar1))
	{
		iVar1 = 0;
	}
	else
	{
		iVar0 = 0;
	}
	fVar24 = 1f;
	if (MISC::ABSF((Local_2320.f_24.f_1 - fLocal_2078)) < 4f && Local_2320.f_71 > 0f)
	{
		fVar24 = (MISC::ABSF((Local_2320.f_24.f_1 - fLocal_2078)) / 4f);
	}
	else if (MISC::ABSF((Local_2320.f_24.f_1 - fLocal_2079)) < 4f && Local_2320.f_71 < 0f)
	{
		fVar24 = (MISC::ABSF((Local_2320.f_24.f_1 - fLocal_2079)) / 4f);
	}
	if (bLocal_1900)
	{
		fVar25 = (((SYSTEM::TO_FLOAT(iVar0) / 128f) * fLocal_2084) * fVar24);
		__LIB_17__::func_151(&(Local_2320.f_71), fVar25, fLocal_2087, 1);
		Local_2320.f_24.f_1 = (Local_2320.f_24.f_1 + (Local_2320.f_71 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fVar25 = (((SYSTEM::TO_FLOAT(iVar1) / -128f) * fLocal_2084) * fVar24);
		__LIB_17__::func_151(&(Local_2320.f_71), fVar25, fLocal_2087, 1);
		Local_2320.f_24.f_1 = (Local_2320.f_24.f_1 + (Local_2320.f_71 * SYSTEM::TIMESTEP()));
	}
	if (Local_2320.f_24.f_1 < fLocal_2079)
	{
		Local_2320.f_24.f_1 = fLocal_2079;
		Local_2320.f_71 = 0f;
	}
	else if (Local_2320.f_24.f_1 > fLocal_2078)
	{
		Local_2320.f_24.f_1 = fLocal_2078;
		Local_2320.f_71 = 0f;
	}
	if (MISC::ABSF(Local_2320.f_71) > 0.01f)
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_80))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_80, "Move_L_R", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
		}
		AUDIO::SET_VARIABLE_ON_SOUND(Local_2320.f_80, "Speed", MISC::ABSF((Local_2320.f_71 / fLocal_2084)));
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(Local_2320.f_80))
	{
		AUDIO::STOP_SOUND(Local_2320.f_80);
	}
	fVar26 = 1f;
	if (MISC::ABSF((Local_2320.f_27.f_2 - fLocal_2080)) < 4f && Local_2320.f_72 > 0f)
	{
		fVar26 = (MISC::ABSF((Local_2320.f_27.f_2 - fLocal_2080)) / 4f);
	}
	else if (MISC::ABSF((Local_2320.f_27.f_2 - fLocal_2081)) < 4f && Local_2320.f_72 < 0f)
	{
		fVar26 = (MISC::ABSF((Local_2320.f_27.f_2 - fLocal_2081)) / 4f);
	}
	fVar27 = (((SYSTEM::TO_FLOAT(iVar2) / 128f) * -fLocal_2085) * fVar26);
	if (Local_2320.f_79)
	{
		if (fVar27 < 0f)
		{
			fVar27 = 0f;
		}
	}
	if (bLocal_1900)
	{
		fVar27 = (((SYSTEM::TO_FLOAT(iVar2) / 128f) * fLocal_2085) * fVar26);
		__LIB_17__::func_151(&(Local_2320.f_72), fVar27, fLocal_2088, 1);
		Local_2320.f_27.f_2 = (Local_2320.f_27.f_2 + (Local_2320.f_72 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fVar27 = (((SYSTEM::TO_FLOAT(iVar2) / 128f) * -fLocal_2085) * fVar26);
		__LIB_17__::func_151(&(Local_2320.f_72), fVar27, fLocal_2088, 1);
		Local_2320.f_27.f_2 = (Local_2320.f_27.f_2 + (Local_2320.f_72 * SYSTEM::TIMESTEP()));
	}
	if (Local_2320.f_27.f_2 < fLocal_2081)
	{
		Local_2320.f_27.f_2 = fLocal_2081;
		Local_2320.f_72 = 0f;
	}
	else if (Local_2320.f_27.f_2 > fLocal_2080)
	{
		Local_2320.f_27.f_2 = fLocal_2080;
		Local_2320.f_72 = 0f;
	}
	Local_1901 = { Local_2320.f_27, Local_2320.f_27.f_1, (Local_2320.f_27.f_2 - -7f) };
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_1))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2320.f_13, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_1901), false, false, true);
	}
	if (!__LIB_0__::func_611(&iLocal_2325, 5000))
	{
		if (!func_487("CLAMP SOUND"))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1795, "Clamp", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
			func_484("CLAMP SOUND", 1);
		}
	}
	else if (func_487("CLAMP SOUND"))
	{
		AUDIO::STOP_SOUND(iLocal_1795);
		func_484("CLAMP SOUND", 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
	{
		Var28 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true) };
	}
	if (iVar2 != 0 && !Local_2320.f_79)
	{
		if (Var28.f_2 > 17.52f)
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_82))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_82, "Move_Fail", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
			}
			AUDIO::SET_VARIABLE_ON_SOUND(Local_2320.f_82, "Speed", (fLocal_2085 / 2f));
		}
		else
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_82))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_82, "Move_U_D", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
			}
			AUDIO::SET_VARIABLE_ON_SOUND(Local_2320.f_82, "Speed", (fLocal_2085 / 2f));
		}
	}
	else if (!iLocal_1824)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_2320.f_82))
		{
			AUDIO::STOP_SOUND(Local_2320.f_82);
		}
	}
	if (bLocal_1900)
	{
		fVar29 = ((SYSTEM::TO_FLOAT(iVar1) / 128f) * -fLocal_2086);
		__LIB_17__::func_151(&(Local_2320.f_74), fVar29, fLocal_2089, 1);
		Local_2320.f_70 = (Local_2320.f_70 + (Local_2320.f_74 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fVar30 = ((SYSTEM::TO_FLOAT(iVar0) / 128f) * -fLocal_2086);
		__LIB_17__::func_151(&(Local_2320.f_74), fVar30, fLocal_2089, 1);
		Local_2320.f_70 = (Local_2320.f_70 + (Local_2320.f_74 * SYSTEM::TIMESTEP()));
	}
	if (Local_2320.f_70 < fLocal_2083)
	{
		Local_2320.f_70 = fLocal_2083;
		Local_2320.f_74 = 0f;
	}
	else if (Local_2320.f_70 > fLocal_2082)
	{
		Local_2320.f_70 = fLocal_2082;
		Local_2320.f_74 = 0f;
	}
	fVar31 = 0f;
	if (MISC::ABSI(iVar1) > 0 || MISC::ABSI(iVar0) > 0)
	{
		Local_2320.f_86 = -1;
		Var32 = { ENTITY::GET_ENTITY_VELOCITY(Local_2320.f_2) };
		Var33 = { Local_2320.f_74, -Local_2320.f_71, Var32.f_2 };
		fVar34 = 0.3f;
		ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_2320.f_2, 1, Var33 - Var32 * Vector(fVar34, fVar34, fVar34), false, false, true, false);
	}
	else
	{
		if (Local_2320.f_86 == -1)
		{
			Local_2320.f_86 = iLocal_2090;
		}
		if (Local_2320.f_86 > 0)
		{
			fVar31 = fLocal_2093;
			Local_2320.f_86 = (Local_2320.f_86 - 1);
		}
	}
	PHYSICS::SET_DAMPING(Local_2320.f_2, 1, fVar31);
	if (MISC::ABSF(Local_2320.f_74) > 0.01f)
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_83))
		{
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_83, "Move_Base", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
		}
		AUDIO::SET_VARIABLE_ON_SOUND(Local_2320.f_83, "Speed", MISC::ABSF((Local_2320.f_74 / fLocal_2086)));
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(Local_2320.f_83))
	{
		AUDIO::STOP_SOUND(Local_2320.f_83);
	}
	Var35 = { ENTITY::GET_ENTITY_VELOCITY(Local_2320.f_2) };
	if ((Var35.f_0 == 0f && Var35.f_1 == 0f) && Var35.f_2 == 0f)
	{
		if (iVar2 < -10)
		{
			ENTITY::SET_ENTITY_VELOCITY(Local_2320.f_2, 0f, 0f, 4f);
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_2319.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2319[iVar3 /*25*/]))
		{
			Local_2319[iVar3 /*25*/].f_18 = Local_2319[iVar3 /*25*/].f_17;
			Local_2319[iVar3 /*25*/].f_17 = MISC::ABSF(func_671(ENTITY::GET_ENTITY_VELOCITY(Local_2319[iVar3 /*25*/]), 0));
			Var36 = { ENTITY::GET_ENTITY_COORDS(Local_2319[iVar3 /*25*/], true) };
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar3 /*25*/]))
			{
				if (Local_2319[iVar3 /*25*/].f_17 < 0.02f)
				{
					if (Var36.f_2 > 1f)
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_2319[iVar3 /*25*/], true);
					}
				}
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]))
				{
					if (!func_665(ENTITY::GET_ENTITY_COORDS(Local_2319[0 /*25*/], true), ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
						{
							if (!func_665(ENTITY::GET_ENTITY_COORDS(Local_2319[1 /*25*/], true), ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true)))
							{
								if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_81))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_81, "Attach_Container_Fail", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
								}
							}
						}
					}
				}
				func_670(&(Local_2319[iVar3 /*25*/]));
			}
			fVar37 = MISC::ABSF((Local_2319[iVar3 /*25*/].f_17 - Local_2319[iVar3 /*25*/].f_18));
			if (fVar37 > 6f)
			{
				iVar38 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iVar38, "Container_Impact", Local_2319[iVar3 /*25*/], "CRANE_SOUNDS", false, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(iVar38, "Speed", (fVar37 / 100f));
				AUDIO::RELEASE_SOUND_ID(iVar38);
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar3 /*25*/]))
			{
				if (!Local_2319[iVar3 /*25*/].f_24)
				{
					if ((MISC::GET_GAME_TIMER() - Local_2319[iVar3 /*25*/].f_22) < 3000 && (MISC::GET_GAME_TIMER() - Local_2319[iVar3 /*25*/].f_23) > 4000)
					{
						if (Local_2319[iVar3 /*25*/].f_17 > 5f)
						{
							Local_2319[iVar3 /*25*/].f_24 = 1;
						}
					}
				}
				else if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_2319[iVar3 /*25*/]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Impact_Land", Local_2319[iVar3 /*25*/], "CRANE_SOUNDS", false, 0);
					Local_2319[iVar3 /*25*/].f_24 = 0;
					Local_2319[iVar3 /*25*/].f_23 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				Local_2319[iVar3 /*25*/].f_24 = 0;
				Local_2319[iVar3 /*25*/].f_23 = 0;
			}
		}
		iVar3++;
	}
	iVar39 = 0;
	if (MISC::ABSF(Local_2320.f_72) > 0.01f)
	{
		iVar39 = 0;
		while (iVar39 < 8)
		{
			PHYSICS::ROPE_RESET_LENGTH(Local_2320.f_15[iVar39], 0f);
			iVar39++;
		}
	}
	else
	{
		iVar39 = 0;
		while (iVar39 < 8)
		{
			PHYSICS::ROPE_RESET_LENGTH(Local_2320.f_15[iVar39], 1E-45f);
			iVar39++;
		}
		fVar40 = 0f;
		fVar41 = 1000f;
		iVar39 = 0;
		while (iVar39 < 8)
		{
			fVar42 = PHYSICS::ROPE_GET_DISTANCE_BETWEEN_ENDS(Local_2320.f_15[iVar39]);
			if (fVar42 > fVar40)
			{
				fVar40 = fVar42;
			}
			if (fVar42 < fVar41)
			{
				fVar41 = fVar42;
			}
			iVar39++;
		}
		if ((fVar40 - fVar41) > 0.02f)
		{
			iVar39 = 0;
			while (iVar39 < 8)
			{
				PHYSICS::ROPE_FORCE_LENGTH(Local_2320.f_15[iVar39], fVar40);
				iVar39++;
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 236 /*INPUT_SCRIPT_SELECT*/))
	{
		bLocal_1900 = !bLocal_1900;
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_1904))
	{
		iLocal_1904 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		CAM::SHAKE_CAM(iLocal_1904, "HAND_SHAKE", 0.1f);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_2320.f_0, Local_2320.f_33 + Vector(0f, 0f, Local_2320.f_70), false, false, true);
	ENTITY::DETACH_ENTITY(Local_2320.f_1, true, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2320.f_1, Local_2320.f_0, -1, Local_2320.f_24, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	iVar3 = 0;
	while (iVar3 < Local_2320.f_4)
	{
		ENTITY::DETACH_ENTITY(Local_2320.f_4[iVar3], true, true);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_2320.f_4[iVar3], Local_2320.f_0, -1, Local_2320.f_36[iVar3 /*3*/], 0f, ((Local_2320.f_70 * 70f) * -1f), 0f, false, false, false, false, 2, true, 0);
		iVar3++;
	}
	if (!bLocal_1900)
	{
		Var43 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_2320.f_1, Var6) };
		Var44 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_2320.f_0, Var6) };
		if (Var43.f_2 < fLocal_2081)
		{
			Var43.f_2 = fLocal_2081;
		}
		else if (Var43.f_2 > fLocal_2080)
		{
			Var43.f_2 = fLocal_2080;
		}
		if (Var44.f_0 < fLocal_2079)
		{
			Var44.f_0 = fLocal_2079;
		}
		else if (Var44.f_0 > fLocal_2078)
		{
			Var44.f_0 = fLocal_2078;
		}
		fVar45 = ((Var44.f_0 - fLocal_2079) / (fLocal_2078 - fLocal_2079));
		fVar46 = (1f - ((Var43.f_2 - fLocal_2081) / (fLocal_2080 - fLocal_2081)));
		if (bParam0)
		{
			Local_2320.f_75 = fVar46;
			Local_2320.f_76 = fVar45;
		}
		else
		{
			Local_2320.f_75 = (Local_2320.f_75 + ((fVar46 - Local_2320.f_75) * 0.2f));
			Local_2320.f_76 = (Local_2320.f_76 + ((fVar45 - Local_2320.f_76) * 0.1f));
		}
		Var47 = { Local_2095 };
		Var47.f_0 = (Var47.f_0 + ((Local_2097.f_0 - Local_2095.f_0) * Local_2320.f_76));
		Var47.f_1 = (Var47.f_1 + ((Local_2097.f_1 - Local_2095.f_1) * Local_2320.f_76));
		Var47.f_2 = (Var47.f_2 + ((Local_2097.f_2 - Local_2095.f_2) * Local_2320.f_76));
		Var47.f_0 = (Var47.f_0 + ((Local_2101.f_0 - Local_2099.f_0) * Local_2320.f_75));
		Var47.f_1 = (Var47.f_1 + ((Local_2101.f_1 - Local_2099.f_1) * Local_2320.f_75));
		Var47.f_2 = (Var47.f_2 + ((Local_2101.f_2 - Local_2099.f_2) * Local_2320.f_75));
		Var48 = { Local_2096 };
		Var48.f_0 = (Var48.f_0 + ((Local_2098.f_0 - Local_2096.f_0) * Local_2320.f_76));
		Var48.f_1 = (Var48.f_1 + ((Local_2098.f_1 - Local_2096.f_1) * Local_2320.f_76));
		Var48.f_2 = (Var48.f_2 + ((Local_2098.f_2 - Local_2096.f_2) * Local_2320.f_76));
		Var48.f_0 = (Var48.f_0 + ((Local_2102.f_0 - Local_2100.f_0) * Local_2320.f_75));
		Var48.f_1 = (Var48.f_1 + ((Local_2102.f_1 - Local_2100.f_1) * Local_2320.f_75));
		Var48.f_2 = (Var48.f_2 + ((Local_2102.f_2 - Local_2100.f_2) * Local_2320.f_75));
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_1904, Local_2320.f_1, Var47, true);
		CAM::POINT_CAM_AT_ENTITY(iLocal_1904, Local_2320.f_1, Var48, true);
		CAM::SET_CAM_FOV(iLocal_1904, fLocal_2106);
		CAM::SHAKE_CAM(iLocal_1904, "HAND_SHAKE", 0.1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-70f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-70f, 1f);
	}
	else
	{
		Var49 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true) };
		Var50 = { ENTITY::GET_ENTITY_COORDS(Local_2320.f_1, true) };
		Var51.f_0 = (((Var50.f_0 + Var49.f_0) * 0.5f) - Var49.f_0);
		Var51.f_1 = (((Var50.f_1 + Var49.f_1) * 0.5f) - Var49.f_1);
		Var51.f_2 = (Local_2103.f_2 - 1.55f);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_1904, Local_2320.f_1, Var51, true);
		CAM::STOP_CAM_POINTING(iLocal_1904);
		CAM::SET_CAM_NEAR_CLIP(iLocal_1904, 0.1f);
		CAM::SET_CAM_ROT(iLocal_1904, Local_2104, 2);
		CAM::SET_CAM_FOV(iLocal_1904, fLocal_2105);
	}
	Var52 = { Var6 };
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &(Var52.f_2), false, false);
	Var52.f_2 = (Var52.f_2 + 0.5f);
	if (!Local_2320.f_77)
	{
		iVar3 = 0;
		while (iVar3 < Local_2319.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2319[iVar3 /*25*/]))
			{
				Var53 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_2319[iVar3 /*25*/], Var52) };
				if (MISC::ABSF(Var53.f_0) < 1.3f)
				{
					if (MISC::ABSF(Var53.f_1) < 6f)
					{
						if (Var53.f_2 < 2.8f)
						{
							Var54 = { ENTITY::GET_ENTITY_COORDS(Local_2319[iVar3 /*25*/], true) };
							Var52.f_2 = (Var54.f_2 + 3f);
						}
					}
				}
			}
			iVar3++;
		}
	}
	if (!Local_2320.f_77)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
		{
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, 1.2658f, 6.0654f, -0.6602f), 0f, 0f, -1f, 0, 255, 0, fLocal_1894, fLocal_1895, fLocal_1896, fLocal_1897, fLocal_1898);
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, -1.2819f, 6.0349f, -0.7461f), 0f, 0f, -1f, 0, 255, 0, fLocal_1894, fLocal_1895, fLocal_1896, fLocal_1897, fLocal_1898);
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, -1.2073f, -5.9944f, -0.6715f), 0f, 0f, -1f, 0, 255, 0, fLocal_1894, fLocal_1895, fLocal_1896, fLocal_1897, fLocal_1898);
			GRAPHICS::DRAW_SPOT_LIGHT(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_2, 1.1668f, -5.9398f, -0.5084f), 0f, 0f, -1f, 0, 255, 0, fLocal_1894, fLocal_1895, fLocal_1896, fLocal_1897, fLocal_1898);
		}
	}
	if (Local_2320.f_77)
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_2320.f_85))
		{
			iVar3 = 0;
			while (iVar3 < Local_2319.f_0)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2319[iVar3 /*25*/], Local_2320.f_2))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_2320.f_85, "Strain", Local_2319[iVar3 /*25*/], "CRANE_SOUNDS", false, 0);
				}
				iVar3++;
			}
		}
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(Local_2320.f_85))
	{
		AUDIO::STOP_SOUND(Local_2320.f_85);
	}
}

void func_670(var uParam0)//Position - 0x8964E
{
	if (!iLocal_1855)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*uParam0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_2320.f_2, "Dock_crane_SLD_unload", "map_objects", 8f, false, true, false, 0f, 0);
				ENTITY::DETACH_ENTITY(*uParam0, true, false);
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(*uParam0, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1f);
				AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Detach_Container", *uParam0, "CRANE_SOUNDS", false, 0);
				iLocal_2325 = MISC::GET_GAME_TIMER();
				Local_2320.f_77 = 0;
			}
			else if (!Local_2320.f_77)
			{
				if (func_665(ENTITY::GET_ENTITY_COORDS(*uParam0, true), ENTITY::GET_ENTITY_COORDS(Local_2320.f_2, true)))
				{
					ENTITY::PLAY_ENTITY_ANIM(Local_2320.f_2, "Dock_crane_SLD_load", "map_objects", 8f, false, true, false, 0f, 0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(*uParam0, Local_2320.f_2, -1, -1, Local_1915, Local_1916, Local_1917, -1f, bLocal_1849, bLocal_1850, bLocal_1851, bLocal_1852, 2);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Attach_Container", *uParam0, "CRANE_SOUNDS", false, 0);
					iLocal_2325 = MISC::GET_GAME_TIMER();
					Local_2320.f_77 = 1;
				}
			}
		}
	}
}

float func_671(struct<3> Param0, bool bParam1)//Position - 0x89770
{
	float fVar0;
	fVar0 = (((Param0.f_0 * Param0.f_0) + (Param0.f_1 * Param0.f_1)) + (Param0.f_2 * Param0.f_2));
	if (bParam1)
	{
		return SYSTEM::SQRT(fVar0);
	}
	return fVar0;
}

void func_673(bool bParam0)//Position - 0x89801
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_2, bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_0, bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_1))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_1, bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_3))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_3, bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_14))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_14, bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
	{
		ENTITY::SET_ENTITY_COORDS(Local_2320.f_2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2320.f_1, Local_2320.f_27) - Vector(1f, 0f, 0f), true, false, false, true);
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[0])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[1])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[2])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[3])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[4])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[5])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[6])))
	{
	}
	if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[7])))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[0]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[0], bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[1]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[1], bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[2]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[2], bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[3]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[3], bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[4]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[4], bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[5]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[5], bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[6]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[6], bParam0, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_4[7]))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_2320.f_4[7], bParam0, false);
	}
}

void func_674()//Position - 0x89A12
{
	if (MISC::IS_PC_VERSION())
	{
		if (!iLocal_2324)
		{
			PAD::INIT_PC_SCRIPTED_CONTROLS("Port_LS_Heist_crane");
			iLocal_2324 = 1;
		}
	}
}

void func_675()//Position - 0x89A36
{
	func_677();
	func_603();
	func_676();
	if (iLocal_2021 > 0 && iLocal_2021 < 8)
	{
		TASK::REQUEST_WAYPOINT_RECORDING("cranassist");
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cranassist"))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("cranassist", true, 1f, 0.5f);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[14]) && !iLocal_1846)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2040[14], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2040[14], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2040[14], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2040[14], 8, 1, 0, 0);
		iLocal_1846 = 1;
	}
	if (iLocal_2021 < 5)
	{
		if (!func_487("GOT TO CABIN EARLY"))
		{
			if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.946228f, -2414.4392f, 20.533628f, -51.96425f, -2413.2139f, 22.335625f, 1.75f, false, true, 0))
				{
					iLocal_2021 = 5;
					func_484("GOT TO CABIN EARLY", 1);
				}
			}
		}
	}
	switch (iLocal_2021)
	{
		case 0:
			if (func_570())
			{
				Local_2320.f_70 = 0.297f;
				Local_2320.f_74 = 0f;
				Local_2071 = { -53.02f, -2416.04f, 14.75f };
				while (!func_565(0))
				{
					SYSTEM::WAIT(0);
					RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistSetup", 0);
				}
				if (bLocal_1872 == 1)
				{
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_lets_get_going", 8f, -8f, 1, 16, 1000f, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
							iLocal_1790 = 4;
						}
					}
				}
				func_673(1);
				iLocal_1769 = 11;
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2041, true);
				}
				CUTSCENE::REMOVE_CUTSCENE();
				__LIB_38__::func_768(5, "Follow Floyd to crane", 0, 0, 0, 1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					while (!func_565(13))
					{
						SYSTEM::WAIT(0);
						RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistSetup", 0);
					}
					func_566();
				}
				STREAMING::REMOVE_IPL("pcranecont");
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[12]))
				{
					PED::DELETE_PED(&(iLocal_2040[12]));
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, false);
				sLocal_2355 = "AW_CLIMB_CRA";
				iLocal_2021++;
			}
			break;
		case 1:
			func_489(1);
			iLocal_2021++;
			break;
		case 2:
			if (__LIB_16__::func_39(&Local_2123, -49.847f, -2404.4475f, 5.0006f, 0.1f, 0.1f, 2f, 1, "AW_DRIVE_TO_CRA", 0, 1, -1))
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
				{
					HUD::SET_BLIP_ROUTE(Local_2123.f_5, false);
				}
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
				{
					__LIB_13__::func_815(&Local_2123, 1, 0);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
					iLocal_2021 = 3;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -36.008926f, -2398.9478f, 5f, -65.41509f, -2398.9507f, 15.036324f, 35f, false, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
							iLocal_2021++;
						}
						else
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
							__LIB_13__::func_815(&Local_2123, 1, 0);
							iLocal_2021 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
				{
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						if (iLocal_1790 == 5)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1942) > 0.6f)
								{
									if (!PED::IS_PED_INJURED(iLocal_2041))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
										{
											TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, 0);
											ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					__LIB_13__::func_815(&Local_2123, 1, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_2021++;
				}
			}
			break;
		case 4:
			if (!func_487("DH_1_CLIMB_UP_CRANE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_HANDLER_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("DH_1_HANDLER_START");
						}
						else
						{
							AUDIO::START_AUDIO_SCENE("DH_1_CLIMB_UP_CRANE");
							func_484("DH_1_CLIMB_UP_CRANE", 1);
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
				{
					sLocal_2355 = "";
					iLocal_2021 = (iLocal_2021 - 1);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (iLocal_1790 == 5)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1942) > 0.6f)
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
									{
										TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, 0);
									}
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
								}
							}
						}
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
			{
				if (__LIB_17__::func_786(&Local_2123, -49.847f, -2404.4475f, 5.0006f, 0.1f, 0.1f, 2f, 1, sLocal_2355, 0, 1, -1, 1))
				{
					iLocal_2021++;
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -48.895756f, -2405.314f, 4.250962f, -50.765312f, -2405.31f, 7.750961f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -48.72139f, -2405.79f, 7.76052f, -50.12113f, -2405.8037f, 9.510519f, 1f, false, true, 0))
				{
					__LIB_13__::func_815(&Local_2123, 1, 0);
					iLocal_2021++;
				}
			}
			break;
		case 5:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -53.425056f, -2407.8374f, 14.789022f, -49.81722f, -2407.8823f, 17.539022f, 1.25f, false, true, 0))
			{
				if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
			}
			if (!func_487("DS1_MCS1_P2"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.256855f, -2406.5515f, 18.55877f, -50.18517f, -2406.5764f, 20.95283f, 1.5f, false, true, 0))
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_MCS1_P2", 8, 0, 0, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_2040[14], PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
						func_484("DS1_MCS1_P2", 1);
					}
				}
			}
			else if (!__LIB_0__::func_75())
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_487("DS1_getin"))
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_getin", 8, 0, 0, 0))
							{
								func_484("DS1_getin", 1);
							}
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
			{
				AUDIO::SET_GPS_ACTIVE(false);
			}
			if (__LIB_17__::func_786(&Local_2123, -52.253f, -2413.9524f, 20.5856f, 0.1f, 0.1f, 2f, 1, "", 0, 1, -1, 1))
			{
			}
			else if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -51.946228f, -2414.4392f, 20.533628f, -51.96425f, -2413.2139f, 22.335625f, 1.75f, false, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_68))
					{
						HUD::REMOVE_BLIP(&iLocal_68);
					}
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
					HUD::REMOVE_BLIP(&(Local_2123.f_5));
					iLocal_2021++;
				}
			}
			break;
		case 6:
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_2057))
				{
					iLocal_2057 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
				}
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Container_Lifter");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Creak_V1");
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CAM::PLAY_CAM_ANIM(iLocal_2057, "get_in_cam", "missheistdockssetup1trevor_crane", -53.139f, -2415.768f, 22.604f, 0f, 0f, -178.2f, false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_2057, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				iLocal_1941 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.1f, -0.35f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1941, Local_2320.f_1, -1);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1941, "missheistdockssetup1trevor_crane", "get_in", 1000f, -8f, 0, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1941, true);
				iLocal_2021++;
			}
			break;
		case 7:
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			func_565(13);
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1941))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1941) == 1f)
					{
						__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
						iLocal_1941 = PED::CREATE_SYNCHRONIZED_SCENE(-0.1f, -0.1f, -0.35f, 0f, 0f, 0f, 2);
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1941, Local_2320.f_1, -1);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_1941, "missheistdockssetup1trevor_crane", "idle", 8f, -8f, 5, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1941, false);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1941, true);
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (!PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_climbin", 8, 0, 0, 0))
									{
										func_484("DS1_climbin", 1);
									}
								}
							}
						}
						iLocal_2021++;
					}
				}
			}
			break;
		case 8:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_2045, -166.8165f, -2460.648f, 5.2973f, true, false, false, true);
				VEHICLE::DELETE_VEHICLE(&iLocal_2045);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("handler"));
			}
			TASK::REMOVE_WAYPOINT_RECORDING("cranassist");
			iLocal_2021++;
			break;
		case 9:
			if (func_844())
			{
				func_336();
				func_335();
			}
			break;
	}
}

void func_676()//Position - 0x8A41C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
	{
		if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_2045))
		{
			Local_2346 = { ENTITY::GET_ENTITY_ROTATION(iLocal_2045, 2) };
			if (Local_2346.f_0 > 80f || Local_2346.f_0 < -80f)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_2041, iLocal_2045))
				{
					ENTITY::DETACH_ENTITY(iLocal_2041, true, true);
					func_484("HANDLER NOT SAFE", 1);
				}
			}
		}
		else
		{
			func_484("HANDLER NOT SAFE", 0);
		}
	}
}

void func_677()//Position - 0x8A48F
{
	if (!func_487("HANDLER NOT SAFE"))
	{
		switch (iLocal_1790)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
				if (iLocal_2317 == 6)
				{
					iLocal_1790 = 6;
				}
				else
				{
					iLocal_1790++;
				}
				break;
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_lets_get_going", 8f, -8f, 1, 16, 1000f, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
							iLocal_1790++;
						}
					}
				}
				break;
			case 2:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1942) == 1f)
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
								{
									iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_get_to_the_containers", 8f, -8f, 1, 16, 1000f, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
									iLocal_1790++;
								}
							}
						}
					}
				}
				break;
			case 3:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1942) == 1f)
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
								{
									iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_idle_base", 8f, -8f, 1, 16, 1000f, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1942, true);
									iLocal_1790++;
								}
							}
						}
					}
				}
				break;
			case 4:
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if (iLocal_2317 != 6)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
							{
								if (__LIB_0__::func_76(iLocal_2045, iLocal_1912[0], 1) < 8f || __LIB_0__::func_76(iLocal_2045, iLocal_1912[1], 1) < 8f)
								{
									if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
									{
										iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_ok_now_grab_the_container", 8f, -8f, 1, 16, 1000f, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
										iLocal_1790 = 3;
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
							{
								if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_2045, true), -97.1716f, -2459.1846f, 5.0204f, true) > 10f)
									{
										iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_take_this_to_the_loading_area", 8f, -8f, 1, 16, 1000f, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
										iLocal_1790 = 3;
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
							{
								if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
									{
										if (!func_487("GOOD WORK"))
										{
											iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_good_work", 8f, -8f, 1, 16, 1000f, 0);
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
											ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
											func_484("GOOD WORK", 1);
											iLocal_1790 = 3;
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
							{
								if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
									{
										if (func_487("GOOD WORK"))
										{
											if (!func_487("TASK COMPLETE"))
											{
												iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_task_complete", 8f, -8f, 1, 16, 1000f, 0);
												PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
												ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
												func_484("TASK COMPLETE", 1);
												iLocal_1790 = 3;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_2021 > 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_climb_down", 8f, -8f, 1, 16, 1000f, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
							iLocal_1790 = 5;
						}
					}
				}
				break;
			case 5:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1942) == 1f)
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
								{
									if (!PED::IS_PED_INJURED(iLocal_2041))
									{
										PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2041, 16);
									}
									TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -120.65f, -2422.97f, 6f, 1f, -1, 0.25f, 0, -38.16f);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, true);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
									iLocal_1790 = 7;
								}
							}
						}
					}
				}
				break;
			case 6:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
				{
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_idle_base", 8f, -8f, 0, 0, 1000f, 0);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, true);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1942, true);
							func_484("TASK COMPLETE", 1);
							func_484("GOOD WORK", 1);
							iLocal_1790 = 4;
						}
					}
				}
				break;
			}
	}
}

void func_678()//Position - 0x8ABAB
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2045, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
		{
			VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(2f);
			PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(2f);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	if (!func_487("DH_1_HANDLER_START"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER"))
				{
					AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
				}
				else
				{
					AUDIO::START_AUDIO_SCENE("DH_1_HANDLER_START");
					func_484("DH_1_HANDLER_START", 1);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]))
	{
		if (!PED::IS_PED_INJURED(Local_1962[0 /*16*/]))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1962[0 /*16*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 5f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1962[0 /*16*/]))
				{
					PED::DELETE_PED(&(Local_1962[0 /*16*/]));
				}
			}
		}
	}
	if (Local_1962[0 /*16*/].f_4 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1962[1 /*16*/]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1962[1 /*16*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 5f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1962[1 /*16*/]))
					{
						PED::DELETE_PED(&(Local_1962[1 /*16*/]));
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_1962[2 /*16*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 5f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1962[2 /*16*/]))
					{
						PED::DELETE_PED(&(Local_1962[2 /*16*/]));
					}
				}
			}
		}
	}
	if (!func_487("SET UP PHYSICS FOR 0"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_1912[0]))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1912[0], 15000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, -1f, -1f);
				func_484("SET UP PHYSICS FOR 0", 1);
			}
		}
	}
	if (!func_487("SET UP PHYSICS FOR 1"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(iLocal_1912[1]))
			{
				OBJECT::SET_OBJECT_PHYSICS_PARAMS(iLocal_1912[1], 15000f, -1f, 0f, 0f, 0f, 0f, 0f, 0f, -1f, -1f, -1f);
				func_484("SET UP PHYSICS FOR 1", 1);
			}
		}
	}
	func_676();
	func_603();
	func_405(2, 0f, 0f, 0f, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
	{
		func_677();
	}
	else
	{
		func_603();
	}
	if (iLocal_2021 > 0)
	{
		if (bLocal_1872 == 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
				{
					func_489(1);
					bLocal_1872 = false;
				}
			}
		}
	}
	switch (iLocal_2021)
	{
		case 0:
			if (func_570())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_566();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
					{
						func_684(&iLocal_69, &iLocal_2045, 1);
					}
				}
				__LIB_38__::func_768(4, "Handler Work", 0, 0, 0, 1);
				iLocal_1814 = 0;
				iLocal_1790 = 0;
				iLocal_1769 = 9;
				iLocal_2354 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, true);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_2045, false);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_2041);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2041, true);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[12]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2040[12]))
					{
						PED::DELETE_PED(&(iLocal_2040[12]));
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[7]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2040[7]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[7], "WORLD_HUMAN_AA_SMOKE", 0, false);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[13]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2040[13]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[13], "WORLD_HUMAN_CLIPBOARD", 0, false);
					}
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, false);
				STREAMING::REQUEST_IPL("pcranecont");
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2045, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
					{
						if (bLocal_1872 == 0)
						{
							if (iLocal_1813 == 0)
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_07h", 7, 0, 0, 0))
								{
									iLocal_1771 = 0;
									iLocal_1813 = 0;
									iLocal_2021++;
								}
							}
						}
						else
						{
							if (!func_487("AW_HAND_TASK"))
							{
								__LIB_0__::func_382("AW_HAND_TASK", 7500, 0);
								func_484("AW_HAND_TASK", 1);
							}
							iLocal_1771 = 0;
							iLocal_1813 = 0;
							iLocal_2021++;
						}
					}
					else
					{
						iLocal_1771 = 0;
						iLocal_1813 = 0;
						iLocal_2021++;
					}
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2045, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
				{
					if (__LIB_0__::func_501("AW_GETIN_HAND", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_69))
					{
						HUD::REMOVE_BLIP(&iLocal_69);
					}
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_07ha", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
						__LIB_0__::func_499(583, 0);
						iLocal_1822 = 0;
						iLocal_1814 = 0;
						iLocal_1823 = 0;
						iLocal_1836 = 0;
						iLocal_2021++;
					}
				}
				else
				{
					if (!__LIB_0__::func_75())
					{
						if (iLocal_1814 == 0)
						{
							__LIB_16__::func_919("AW_GETIN_HAND");
							iLocal_1814 = 1;
						}
					}
					if (iLocal_1814 == 1)
					{
						if (!func_487("DS1_Act"))
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_Act", 7, 0, 0, 0))
								{
									func_484("DS1_Act", 1);
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			func_679();
			if (iLocal_1836 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
					{
						if (!__LIB_13__::func_755(&Local_2123, 1))
						{
							__LIB_16__::func_919("AW_HAND_TASK");
							iLocal_1836 = 1;
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (iLocal_1835 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
					{
						if (iLocal_2354 == 0)
						{
							iLocal_2353 = MISC::GET_GAME_TIMER();
							iLocal_2354 = 1;
						}
						if (iLocal_2354 == 1)
						{
							if (func_487("CONTAINER LAND") || __LIB_0__::func_611(&iLocal_2353, 1000))
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									HUD::CLEAR_HELP(true);
								}
								func_657();
								__LIB_13__::func_808(&iLocal_2075);
								__LIB_0__::func_498(0, -1);
								iLocal_1793 = MISC::GET_GAME_TIMER();
								__LIB_0__::func_638();
								iLocal_2021++;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&iLocal_1793, 2000))
			{
				if (!__LIB_13__::func_755(&Local_2123, 1))
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_08a", 7, 0, 0, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[14]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -57.339f, -2448.3562f, 6.2399f, 1f, 20000, 0.25f, 0, 40000f);
							TASK::TASK_ACHIEVE_HEADING(0, 144.9673f, 0);
							TASK::TASK_STAND_STILL(0, 2000);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_COFFEE", 0, true);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_2040[14], iLocal_2056);
						}
						if (!PED::IS_PED_INJURED(iLocal_2043))
						{
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2043);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
						iLocal_2021++;
					}
				}
			}
			break;
		case 4:
			if (func_844())
			{
				bLocal_1872 = false;
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
				__LIB_13__::func_808(&(uLocal_2073[0]));
				__LIB_13__::func_808(&(uLocal_2073[1]));
				__LIB_13__::func_808(&(uLocal_2073[2]));
				func_336();
				func_335();
			}
			break;
	}
}

void func_679()//Position - 0x8B37D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
	{
		if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
		{
			iLocal_1835 = 1;
		}
		else
		{
			iLocal_1835 = 0;
		}
	}
	func_682();
	if (iLocal_1771 > 1)
	{
		func_681();
	}
	switch (iLocal_1771)
	{
		case 0:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", false, -1);
			func_484("HD_HELP1", 0);
			iLocal_1771++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
				{
					if (func_487("DS1_07hc"))
					{
						func_484("DS1_07hc", 0);
					}
					if (__LIB_0__::func_501("AW_BACK_IN_HAND", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_69))
					{
						__LIB_13__::func_808(&iLocal_69);
					}
					if (!func_487("HD_HELP1"))
					{
						__LIB_0__::func_190("HD_HELP1");
						func_484("HD_HELP1", 1);
					}
					if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
							{
								func_680(&(uLocal_2073[0]), ENTITY::GET_ENTITY_COORDS(iLocal_1912[0], true), 0);
								HUD::SET_BLIP_COLOUR(uLocal_2073[0], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_2073[0], "CONT_LABEL");
							}
							else
							{
								__LIB_13__::func_808(&(uLocal_2073[0]));
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
							{
								func_680(&(uLocal_2073[1]), ENTITY::GET_ENTITY_COORDS(iLocal_1912[1], true), 0);
								HUD::SET_BLIP_COLOUR(uLocal_2073[1], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_2073[1], "CONT_LABEL");
							}
							else
							{
								__LIB_13__::func_808(&(uLocal_2073[1]));
							}
						}
					}
					iLocal_1822 = 0;
					iLocal_1771++;
				}
				else
				{
					if (iLocal_1822 == 0)
					{
						if (!__LIB_0__::func_501("AW_BACK_IN_HAND", 0, 0))
						{
							__LIB_13__::func_808(&(uLocal_2073[0]));
							__LIB_13__::func_808(&(uLocal_2073[1]));
							__LIB_13__::func_808(&iLocal_2075);
							func_684(&iLocal_69, &iLocal_2045, 1);
							__LIB_0__::func_638();
							if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_HELP(true);
							}
							HUD::CLEAR_PRINTS();
							if (!__LIB_13__::func_755(&Local_2123, 2))
							{
								if (!func_487("AW_BACK_IN_HAND"))
								{
									__LIB_0__::func_382("AW_BACK_IN_HAND", 7500, 0);
									func_484("AW_BACK_IN_HAND", 1);
								}
								iLocal_1822 = 1;
							}
						}
					}
					if (func_487("AW_BACK_IN_HAND"))
					{
						if (!func_487("DS1_07hc"))
						{
							__LIB_0__::func_638();
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_07hc", 7, 0, 0, 0))
								{
									func_484("DS1_07hc", 1);
								}
							}
						}
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
			{
				iLocal_1771 = 1;
			}
			if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
			{
				if (__LIB_0__::func_1("HD_HELP2"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_2073[0]))
							{
								func_680(&(uLocal_2073[0]), ENTITY::GET_ENTITY_COORDS(iLocal_1912[0], true), 0);
								HUD::SET_BLIP_COLOUR(uLocal_2073[0], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_2073[0], "CONT_LABEL");
							}
						}
						else
						{
							func_484("1st CONTAINER IN", 1);
							__LIB_13__::func_808(&(uLocal_2073[0]));
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_2073[1]))
							{
								func_680(&(uLocal_2073[1]), ENTITY::GET_ENTITY_COORDS(iLocal_1912[1], true), 0);
								HUD::SET_BLIP_COLOUR(uLocal_2073[1], 2);
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_2073[1], "CONT_LABEL");
							}
						}
						else
						{
							func_484("2nd CONTAINER IN", 1);
							__LIB_13__::func_808(&(uLocal_2073[1]));
						}
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_2075))
					{
						__LIB_13__::func_808(&iLocal_2075);
					}
					if (__LIB_0__::func_76(iLocal_2045, iLocal_1912[0], 1) < 30f || __LIB_0__::func_76(iLocal_2045, iLocal_1912[1], 1) < 30f)
					{
						if (iLocal_1823 == 0)
						{
							if (!__LIB_0__::func_1("HD_HELP1"))
							{
								__LIB_0__::func_151("HD_HELP1", -1);
								func_484("HD_HELP1", 1);
								iLocal_1823 = 1;
							}
						}
					}
				}
				else
				{
					__LIB_13__::func_808(&(uLocal_2073[0]));
					__LIB_13__::func_808(&(uLocal_2073[1]));
					__LIB_13__::func_808(&(uLocal_2073[2]));
					func_680(&iLocal_2075, Local_2067, 0);
					iLocal_1814 = 0;
					iLocal_2351 = 0;
					iLocal_1771++;
				}
			}
			break;
		case 3:
			if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
			{
				if (!__LIB_13__::func_755(&Local_2123, 2))
				{
					if (iLocal_1814 == 0)
					{
						if (func_487("AW_HAND_GOTC"))
						{
							__LIB_0__::func_382("AW_HAND_GOTC", 7500, 0);
							iLocal_1814 = 1;
						}
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
			{
				iLocal_1771 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
					{
						HUD::CLEAR_PRINTS();
						__LIB_13__::func_808(&iLocal_2075);
						if (!func_487("AW_HAND_TASK"))
						{
							__LIB_0__::func_382("AW_HAND_TASK", 7500, 0);
							func_484("AW_HAND_TASK", 1);
						}
					}
					if (__LIB_0__::func_501("AW_HAND_GOTC", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (__LIB_0__::func_501("AW_HAND_DROP", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					iLocal_1771 = 2;
				}
				else if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
				{
					if (iLocal_2351 == 0)
					{
						if (VEHICLE::IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045, iLocal_1912[0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -93.6264f, -2450.864f, 28.266687f, -102.87257f, -2464.1228f, 3.520514f, 16.25f, false, true, 0))
						{
							if (!func_487("AW_HAND_DROP"))
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_382("AW_HAND_DROP", 7500, 0);
								func_484("AW_HAND_DROP", 1);
							}
							__LIB_0__::func_151("HD_HELP2", -1);
							iLocal_2351 = 1;
						}
						if (VEHICLE::IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045, iLocal_1912[1]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -93.6264f, -2450.864f, 28.266687f, -102.87257f, -2464.1228f, 3.520514f, 16.25f, false, true, 0))
						{
							if (!func_487("AW_HAND_DROP"))
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_382("AW_HAND_DROP", 7500, 0);
								func_484("AW_HAND_DROP", 1);
							}
							__LIB_0__::func_151("HD_HELP2", -1);
							iLocal_2351 = 1;
						}
					}
				}
			}
			break;
	}
}

void func_680(int* iParam0, struct<3> Param1, bool bParam2)//Position - 0x8BAAE
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
		HUD::SET_BLIP_ROUTE(*iParam0, bParam2);
	}
}

void func_681()//Position - 0x8BAD5
{
	switch (iLocal_1796)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if ((ENTITY::GET_ENTITY_SPEED(iLocal_2045) > 30f && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_2045)) || fLocal_2349 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_2045)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2045)))
					{
						if (!func_487("DS1_07hb"))
						{
							AUDIO::INTERRUPT_CONVERSATION(iLocal_2041, "DH1_DXAA", "FLOYD");
							iLocal_2350 = MISC::GET_GAME_TIMER();
							func_484("DS1_07hb", 1);
						}
						else if (__LIB_0__::func_611(&iLocal_2350, 12000))
						{
							func_484("DS1_07hb", 0);
						}
					}
				}
				fLocal_2349 = (IntToFloat(ENTITY::GET_ENTITY_HEALTH(iLocal_2045)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_2045));
				if (!func_487("DS1_41b"))
				{
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
						{
							if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
							{
								if (ENTITY::GET_ENTITY_SPEED(iLocal_1912[0]) > 4f || ENTITY::GET_ENTITY_SPEED(iLocal_1912[1]) > 4f)
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_41b", 7, 0, 0, 0))
									{
										iLocal_1789 = MISC::GET_GAME_TIMER();
										func_484("DS1_41b", 1);
									}
								}
							}
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_1789, 7000))
				{
					func_484("DS1_41b", 0);
				}
				if (!func_487("DS1_sees"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1912[0], 1) < 15f || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1912[1], 1) < 15f)
						{
							__LIB_0__::func_638();
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_sees", 7, 0, 0, 0))
								{
									func_484("DS1_sees", 1);
								}
							}
						}
					}
				}
				if (!func_487("DS1_line"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
					{
						if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1912[0], 1) < 4f || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_1912[1], 1) < 4f)
						{
							__LIB_0__::func_638();
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_line", 7, 0, 0, 0))
								{
									func_484("DS1_line", 1);
								}
							}
						}
					}
				}
				if (!func_487("DS1_attach"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
					{
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
							{
								if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[0]))
								{
									if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
									{
										__LIB_0__::func_638();
										if (!__LIB_13__::func_755(&Local_2123, 1))
										{
											if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_attach", 7, 0, 0, 0))
											{
												func_484("DS1_attach", 1);
											}
										}
									}
								}
							}
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
							{
								if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[1]))
								{
									if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
									{
										__LIB_0__::func_638();
										if (!__LIB_13__::func_755(&Local_2123, 1))
										{
											if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_attach", 7, 0, 0, 0))
											{
												func_484("DS1_attach", 1);
											}
										}
									}
								}
							}
						}
					}
				}
				else if (func_487("DS1_08"))
				{
					if (!func_487("DS1_attach2"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
						{
							if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
								{
									if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[0]))
									{
										if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
										{
											__LIB_0__::func_638();
											if (!__LIB_13__::func_755(&Local_2123, 1))
											{
												if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_attach", 7, 0, 0, 0))
												{
													func_484("DS1_attach2", 1);
												}
											}
										}
									}
								}
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
								{
									if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[1]))
									{
										if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
										{
											__LIB_0__::func_638();
											if (!__LIB_13__::func_755(&Local_2123, 1))
											{
												if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_attach", 7, 0, 0, 0))
												{
													func_484("DS1_attach2", 1);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!func_487("DS1_dockf"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
						{
							if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
							{
								__LIB_0__::func_638();
								if (!__LIB_13__::func_755(&Local_2123, 1))
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_dockf", 7, 0, 0, 0))
									{
										func_484("DS1_dockf", 1);
									}
								}
							}
						}
					}
				}
				if (!func_487("DS1_13"))
				{
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_13", 7, 0, 0, 0))
						{
							func_484("DS1_13", 1);
						}
					}
				}
				else if (func_487("DS1_attach2"))
				{
					if (!func_487("DS1_13b"))
					{
						if (!__LIB_13__::func_755(&Local_2123, 1))
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_13b", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
								func_484("DS1_13b", 1);
							}
						}
					}
				}
				if (func_487("DS1_dockf"))
				{
					if (!func_487("DS1_13c"))
					{
						if (!__LIB_13__::func_755(&Local_2123, 1))
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_13c", 7, 0, 0, 0))
							{
								func_484("DS1_13c", 1);
							}
						}
					}
					else if (!func_487("DS1_08"))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[0], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[1], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
						{
							__LIB_0__::func_638();
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_Drop", 7, 0, 0, 0))
								{
									func_484("DS1_08", 1);
								}
							}
						}
					}
					else if (!func_487("DS1_13d"))
					{
						if (!__LIB_13__::func_755(&Local_2123, 1))
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_13d", 7, 0, 0, 0))
							{
								func_484("DS1_13d", 1);
							}
						}
					}
				}
			}
			break;
	}
	if (!func_487("DS1_07hb"))
	{
		if (!__LIB_13__::func_755(&Local_2123, 1))
		{
			if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_07hb", 7, 0, 0, 0))
			{
				func_484("DS1_07hb", 1);
			}
		}
	}
}

void func_682()//Position - 0x8C204
{
	VEHICLE::SET_VEHICLE_LIGHTS(iLocal_2045, 1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
		{
			if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
			{
				if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[0]) || VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[1]))
				{
					if (!func_487("HD_HELP1B"))
					{
						if (__LIB_0__::func_1("HD_HELP1"))
						{
							HUD::CLEAR_HELP(true);
						}
						else
						{
							iLocal_2348 = MISC::GET_GAME_TIMER();
							__LIB_0__::func_190("HD_HELP1B");
							func_484("HD_HELP1B", 1);
						}
					}
				}
				else if (func_487("HD_HELP1B"))
				{
					if (__LIB_0__::func_611(&iLocal_2348, 3000))
					{
						if (__LIB_0__::func_1("HD_HELP1B"))
						{
							HUD::CLEAR_HELP(true);
							func_484("HD_HELP1B", 0);
						}
					}
				}
			}
		}
	}
	if (func_487("PICKED UP A CONTAINER"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
		{
			if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
			{
				if (!func_487("Container_Release_audio"))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Release", iLocal_2045, "CONTAINER_LIFTER_SOUNDS", false, 0);
					iLocal_1783 = MISC::GET_GAME_TIMER();
					func_484("CONTAINER LAND", 0);
					func_484("Container_Release_audio", 1);
				}
			}
		}
	}
	else if (VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
	{
		if (!func_487("PICKED UP A CONTAINER"))
		{
			func_484("PICKED UP A CONTAINER", 1);
		}
	}
	if (func_487("PICKED UP A CONTAINER"))
	{
		if (__LIB_0__::func_611(&iLocal_1783, 20))
		{
			if (!func_487("CONTAINER LAND"))
			{
				if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_1912[0]) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_1912[1]))
					{
						if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", false, -1))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Land", iLocal_2045, "CONTAINER_LIFTER_SOUNDS", false, 0);
						}
						func_484("CONTAINER LAND", 1);
					}
				}
			}
		}
	}
	if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
	{
		if (__LIB_0__::func_611(&iLocal_1783, 1000))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
				{
					if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
						{
							if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[0]))
							{
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", false, -1))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Attach", iLocal_2045, "CONTAINER_LIFTER_SOUNDS", false, 0);
								}
								VEHICLE::ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(iLocal_2045, iLocal_1912[0]);
								if (!func_487("PICKED UP A CONTAINER"))
								{
									func_484("PICKED UP A CONTAINER", 1);
								}
								func_484("Container_Release_audio", 0);
							}
						}
					}
					if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
					{
						if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 51 /*INPUT_CONTEXT*/))
						{
							if (VEHICLE::IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(iLocal_2045, iLocal_1912[1]))
							{
								if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Container_Lifter", false, -1))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Container_Attach", iLocal_2045, "CONTAINER_LIFTER_SOUNDS", false, 0);
								}
								VEHICLE::ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(iLocal_2045, iLocal_1912[1]);
								if (!func_487("PICKED UP A CONTAINER"))
								{
									func_484("PICKED UP A CONTAINER", 1);
								}
								func_484("Container_Release_audio", 0);
							}
						}
					}
				}
			}
		}
	}
	else if (__LIB_0__::func_1("HD_HELP1B"))
	{
		HUD::CLEAR_HELP(true);
	}
}

void func_684(int iParam0, int iParam1, bool bParam2)//Position - 0x8C52C
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1, false))
			{
				*iParam0 = HUD::ADD_BLIP_FOR_ENTITY(*iParam1);
				HUD::SET_BLIP_AS_FRIENDLY(*iParam0, bParam2);
			}
		}
	}
}

void func_685()//Position - 0x8C568
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
	{
		func_483(&iLocal_2045, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 1f, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, false);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2045, 0);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2045, false, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_2045, true);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_2045, false);
	}
	if (iLocal_1844 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_2041))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2041, -89.28268f, -2481.7344f, 1.273084f, -91.874f, -2485.4617f, 10.770866f, 2.25f, false, true, 0))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
				AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
				iLocal_1844 = 1;
			}
		}
	}
	if (iLocal_2021 > 6 && iLocal_2021 < 12)
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -127.40107f, -2416.4036f, 4.500676f, -127.35187f, -2418.0193f, 7.250676f, 1.75f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		else if (iLocal_2021 < 10)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		}
	}
	if (iLocal_2021 > 0 && iLocal_2021 < 7)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
	}
	func_603();
	func_676();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
	{
		if (!PED::IS_PED_INJURED(iLocal_2042))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2042))
			{
				PED::DELETE_PED(&iLocal_2042);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
			}
		}
	}
	if (!iLocal_1821)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[1], false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2045, 3);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, false);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_2046[1], false);
				iLocal_1821 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_2041))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2041))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
		}
	}
	if (iLocal_2021 > 4 && iLocal_2021 < 7)
	{
		func_690();
	}
	if (iLocal_2021 > 2)
	{
		if (iLocal_1817 == 0)
		{
			if (__LIB_0__::func_501("AW_FLOW_FLO", 0, 0))
			{
				if (__LIB_0__::func_611(&iLocal_1770, 5000))
				{
					HUD::CLEAR_PRINTS();
					iLocal_1817 = 1;
				}
			}
		}
	}
	if (iLocal_2021 < 7)
	{
		STREAMING::REQUEST_CLIP_SET("ANIM_GROUP_GESTURE_MISS_DocksSetup1");
		if (STREAMING::HAS_ANIM_SET_LOADED("ANIM_GROUP_GESTURE_MISS_DocksSetup1"))
		{
			PED::SET_PED_GESTURE_GROUP(PLAYER::PLAYER_PED_ID(), "ANIM_GROUP_GESTURE_MISS_DocksSetup1");
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				PED::SET_PED_GESTURE_GROUP(iLocal_2041, "ANIM_GROUP_GESTURE_MISS_DocksSetup1");
			}
		}
	}
	switch (iLocal_2021)
	{
		case 0:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, 15f, 15f, 15f, false, true, 0))
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.8f);
				}
			}
			if (func_570())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
				}
				func_689(&iLocal_68, &iLocal_2041, 1);
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks6");
				iLocal_1972[7] = 1;
				iLocal_1972[11] = 1;
				iLocal_1972[3] = 1;
				iLocal_1972[6] = 1;
				iLocal_1868 = 0;
				iLocal_1814 = 0;
				iLocal_1813 = 0;
				iLocal_1821 = 0;
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1b");
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				STREAMING::REQUEST_IPL("pcranecont");
				iLocal_1769 = 3;
				__LIB_38__::func_768(3, "Follow Floyd", 0, 0, 0, 1);
				iLocal_1948 = 0;
				__LIB_0__::func_671(1);
				iLocal_1776 = MISC::GET_GAME_TIMER();
				iLocal_1856[6] = 0;
				iLocal_1856[5] = 0;
				bLocal_1872 = false;
				iLocal_1844 = 0;
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), false);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_566();
				}
				iLocal_1796 = 0;
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_START"))
				{
					AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
				}
				iLocal_2021++;
			}
			break;
		case 1:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, 15f, 15f, 15f, false, true, 0))
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.8f);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, 6f, 6f, 6f, false, true, 0))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks6"))
					{
						if (iLocal_1816 == 0)
						{
							if (!__LIB_0__::func_501("AW_FLOW_FLO", 0, 0))
							{
								__LIB_0__::func_325();
								__LIB_0__::func_229("AW_FLOW_FLO", 7500, 1);
							}
							iLocal_1816 = 1;
						}
						PED::REMOVE_PED_FROM_GROUP(iLocal_2041);
						iLocal_1770 = MISC::GET_GAME_TIMER();
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_4@main_action");
						func_489(1);
						iLocal_2021++;
					}
				}
				else if (iLocal_1816 == 0)
				{
					iLocal_1770 = MISC::GET_GAME_TIMER();
					if (!__LIB_0__::func_501("AW_FLOW_FLO", 0, 0))
					{
						__LIB_0__::func_325();
						__LIB_0__::func_229("AW_FLOW_FLO", 7500, 1);
					}
					iLocal_1816 = 1;
				}
			}
			break;
		case 2:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@main_action"))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1"))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2041);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "floyddocks1", 0, 8, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
					iLocal_1834 = 1;
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2041, false);
					iLocal_2021++;
				}
			}
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2041))
			{
				iLocal_2021++;
			}
			break;
		case 4:
			if (func_565(13))
			{
				iLocal_2021++;
			}
			break;
		case 5:
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks3"))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1"))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_2041);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_2041, false);
						iLocal_1972[8] = 1;
						iLocal_2021++;
					}
				}
			}
			else
			{
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
			}
			break;
		case 6:
			if (iLocal_1972[11] == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -102.1558f, -2475.921f, 5.0203f, 3f, 3f, 3f, false, true, 0))
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
					iLocal_1972[11] = 1;
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 5f, 5f, 5f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_2041, -121.87f, -2425.34f, 6f, 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1868 = 0;
					__LIB_0__::func_325();
					func_688();
					if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -123.5851f, -2422.352f, 5.0013f, 1f, 20000, 0.25f, 8192, 40000f);
						TASK::TASK_LOOK_AT_ENTITY(0, Local_1968[0 /*16*/], 6000, 2048, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
					}
					HUD::CLEAR_PRINTS();
					iLocal_2021++;
				}
				else if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 10f, 10f, 10f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_2041, -121.87f, -2425.34f, 6f, 5f, 5f, 5f, false, true, 0)) && !__LIB_0__::func_75())
				{
					__LIB_0__::func_325();
					func_688();
					if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -123.5851f, -2422.352f, 5.0013f, 1f, 20000, 0.25f, 8192, 40000f);
						TASK::TASK_LOOK_AT_ENTITY(0, Local_1968[0 /*16*/], 6000, 0, 2);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
					}
					HUD::CLEAR_PRINTS();
					iLocal_2021++;
				}
				else if (!func_487("ANIMATEFLOYD"))
				{
					STREAMING::REQUEST_ANIM_DICT("MissHeistDocksSetup1");
					if (!STREAMING::HAS_ANIM_DICT_LOADED("MissHeistDocksSetup1"))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2041, -121.87f, -2425.34f, 6f, 5f, 5f, 5f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 5f, 5f, 5f, false, true, 0))
						{
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							TASK::TASK_PLAY_ANIM(0, "MissHeistDocksSetup1", "Beckon", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::TASK_PLAY_ANIM(0, "amb@dockworker@stand@idle_a", "idle_a", 8f, -8f, -1, 1, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
							func_484("ANIMATEFLOYD", 1);
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -121.87f, -2425.34f, 6f, 5f, 5f, 5f, false, true, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_2041);
				}
			}
			break;
		case 7:
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
			STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@main_action") && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@start_idle"))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_2041, 6000, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_9@main_action", "forklift_supervise_mainaction_supervisor", 8f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_9@start_idle", "forklift_supervise_idlea_supervisor", 8f, -8f, -1, 262145, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
						TASK::TASK_PERFORM_SEQUENCE(Local_1968[0 /*16*/], iLocal_2056);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1968[0 /*16*/], 16);
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_9@main_action");
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_2046[1]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[1], false))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_2046[1]))
						{
							VEHICLE::DELETE_VEHICLE(&(uLocal_2046[1]));
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[12]))
				{
					if (!PED::IS_PED_INJURED(iLocal_2040[12]))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2040[12]))
						{
							PED::DELETE_PED(&(iLocal_2040[12]));
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2045, 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, false);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_68))
				{
					HUD::REMOVE_BLIP(&iLocal_68);
				}
				STREAMING::REMOVE_ANIM_SET("ANIM_GROUP_GESTURE_MISS_DocksSetup1");
				TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), true);
				iLocal_2021++;
			}
			break;
		case 8:
			if (!func_487("DS1_05e"))
			{
				if (func_570())
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_05e", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
						func_484("DS1_05e", 1);
					}
				}
			}
			else
			{
				iLocal_2347 = MISC::GET_GAME_TIMER();
				iLocal_2021++;
			}
			break;
		case 9:
			if (__LIB_0__::func_611(&iLocal_2347, 2000))
			{
				if (!func_487("TASK FLOYD"))
				{
					PED::SET_PED_STEERS_AROUND_VEHICLES(iLocal_2041, false);
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, -127.37f, -2417.29f, 5.54f, 1f, 20000, 88.64f, 0.5f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
						func_484("TASK FLOYD", 1);
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
						{
							if (__LIB_16__::func_931(iLocal_2041, -127.37f, -2417.29f, 5.94f, 97.5f, 0.2f, 0.2f, 2f, 1135869952, 0))
							{
								iLocal_1942 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1942, "missheistdockssetup1ig_14", "floyd_climb_up", 8f, -8f, 1, 16, 8f, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2041, iLocal_2045, false);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1942, iLocal_2045, -1);
								PED::SET_PED_STEERS_AROUND_VEHICLES(iLocal_2041, false);
								iLocal_2021++;
							}
						}
					}
				}
			}
			break;
		case 10:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1942) > 0.5f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2045, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						func_684(&iLocal_69, &iLocal_2045, 1);
					}
					iLocal_2021++;
				}
			}
			break;
		case 11:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1942))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1942) >= 1f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2045, 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						func_684(&iLocal_69, &iLocal_2045, 1);
					}
					if (func_844())
					{
						__LIB_13__::func_808(&iLocal_68);
						func_336();
						func_335();
					}
				}
			}
			break;
	}
}

void func_688()//Position - 0x8D360
{
	if (!PED::IS_PED_INJURED(iLocal_2041))
	{
		TASK::CLEAR_PED_TASKS(iLocal_2041);
		PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iLocal_2041, -8f);
		PED::CLEAR_PED_ALTERNATE_WALK_ANIM(PLAYER::PLAYER_PED_ID(), -8f);
	}
	if (iLocal_1972[12] == 1)
	{
		iLocal_1972[12] = 0;
	}
	if (iLocal_1972[1] == 1)
	{
		iLocal_1972[1] = 0;
	}
	if (iLocal_1972[2] == 1)
	{
		iLocal_1972[2] = 0;
	}
	if (iLocal_1972[3] == 1)
	{
		iLocal_1972[3] = 0;
	}
	if (iLocal_1972[5] == 1)
	{
		iLocal_1972[5] = 0;
	}
	if (iLocal_1972[7] == 1)
	{
		iLocal_1972[7] = 0;
	}
	if (iLocal_1972[4] == 1)
	{
		iLocal_1972[4] = 0;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1960.f_0)
	{
		func_846(&(Local_1960[iLocal_2022 /*8*/]), 1, 0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1965.f_0)
	{
		func_845(&(Local_1965[iLocal_2022 /*16*/]), 1, 0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1967.f_0)
	{
		func_845(&(Local_1967[iLocal_2022 /*16*/]), 1, 0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1971.f_0)
	{
		func_845(&(Local_1971[iLocal_2022 /*16*/]), 1, 0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1964.f_0)
	{
		func_845(&(Local_1964[iLocal_2022 /*16*/]), 1, 0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1970.f_0)
	{
		func_845(&(Local_1970[iLocal_2022 /*16*/]), 1, 0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1963.f_0)
	{
		func_845(&(Local_1963[iLocal_2022 /*16*/]), 1, 0);
		iLocal_2022++;
	}
	STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
	STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_a");
	STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@idle_b");
	STREAMING::REMOVE_ANIM_DICT("missdocksshowoffcar@base");
	STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@main_action");
	STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2045, false);
	}
}

void func_689(int iParam0, int iParam1, bool bParam2)//Position - 0x8D557
{
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1, false))
			{
				*iParam0 = __LIB_0__::func_639(*iParam1, !bParam2, 0);
			}
		}
	}
}

void func_690()//Position - 0x8D58E
{
	struct<6> Var0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	if (!PED::IS_PED_INJURED(iLocal_2041))
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_2041, false);
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1.2f || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_2041) < 0.1f)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_2041);
		}
		if (MISC::GET_GAME_TIMER() <= iLocal_1776 + 1500)
		{
		}
		if (MISC::GET_GAME_TIMER() <= iLocal_1776 + 1000)
		{
		}
		if (iLocal_1830)
		{
			fLocal_1831 = (fLocal_1831 + (0.014f * SYSTEM::TIMESTEP()));
			if (fLocal_1831 > 1.08f)
			{
				fLocal_1831 = 1.08f;
			}
		}
		if (!iLocal_1827)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, 7f, 7f, 4f, false, true, 0))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_8");
				STREAMING::REQUEST_ANIM_DICT("MissHeistDocksSetup1");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_8") && STREAMING::HAS_ANIM_DICT_LOADED("MissHeistDocksSetup1"))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					iLocal_2345 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
					if (iLocal_2345 == 0)
					{
						TASK::TASK_PLAY_ANIM(0, "MissHeistDocksSetup1", "Beckon", 8f, -8f, -1, 0, 0f, false, false, false);
					}
					else if (iLocal_2345 == 1)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "are_you_coming", 8f, -8f, -1, 0, 0f, false, false, false);
					}
					else if (iLocal_2345 == 2)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "Are_You_Gonna_Hurt", 8f, -8f, -1, 0, 0f, false, false, false);
					}
					else if (iLocal_2345 == 3)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "its_over_here_if", 8f, -8f, -1, 0, 0f, false, false, false);
					}
					else if (iLocal_2345 == 4)
					{
						TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_8", "this_dont_make_me", 8f, -8f, -1, 0, 0f, false, false, false);
					}
					TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
					TASK::CLEAR_PED_SECONDARY_TASK(iLocal_2041);
					TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					iLocal_1828 = 0;
					iLocal_1829 = 0;
					iLocal_1834 = 0;
					iLocal_1827 = 1;
				}
			}
			else
			{
				func_699();
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, 7f, 3.2f, 4f, false, true, 0))
				{
					iLocal_1830 = 1;
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_2041, 1) < 1f)
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.91f);
				}
				else
				{
					PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.94f);
				}
				if (iLocal_1832)
				{
					if (func_697())
					{
						iLocal_1832 = 0;
						iLocal_1834 = 1;
					}
				}
				if (iLocal_1834 == 1)
				{
					if (__LIB_0__::func_75())
					{
						Var0 = { __LIB_13__::func_743() };
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05a_1"))
						{
							iLocal_1800 = 0;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05a_3"))
						{
							iLocal_1800 = 1;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05b_1"))
						{
							iLocal_1800 = 2;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05b_13"))
						{
							iLocal_1800 = 3;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_05b_11"))
						{
							iLocal_1800 = 4;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_1"))
						{
							iLocal_1800 = 5;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_8"))
						{
							iLocal_1800 = 6;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_12"))
						{
							iLocal_1800 = 7;
						}
						else if (MISC::ARE_STRINGS_EQUAL(&Var0, "DS1_06_15"))
						{
							iLocal_1800 = 8;
						}
						if (iLocal_1800 >= 0)
						{
							if (!iLocal_1833[iLocal_1800])
							{
								switch (iLocal_1800)
								{
									case 0:
										sVar1 = "you_ever_get_helicopters_trevor";
										sVar2 = "you_ever_get_helicopters_floyd";
										sVar3 = "missheistdockssetup1ig_2_p2";
										break;
									case 1:
										sVar1 = "now_this_is_restricted_trevor";
										sVar2 = "now_this_is_restricted_floyd";
										sVar3 = "missheistdockssetup1ig_2_p2";
										break;
									case 2:
										sVar1 = "how_is_a_man_trevor";
										sVar2 = "how_is_a_man_floyd";
										sVar3 = "missheistdockssetup1ig_2_p3";
										break;
									case 3:
										sVar1 = "i_just_said_they_trevor";
										sVar2 = "i_just_said_they_floyd";
										sVar3 = "missheistdockssetup1ig_2_p3";
										break;
									case 4:
										sVar1 = "maybe_ill_have_to_trevor";
										sVar2 = "maybe_ill_have_to_floyd";
										sVar3 = "missheistdockssetup1ig_2_p3";
										break;
									case 5:
										sVar1 = "thats_the_freighter_i_trevor";
										sVar2 = "thats_the_freighter_i_floyd";
										sVar3 = "missheistdockssetup1ig_7";
										break;
									case 6:
										sVar1 = "but_these_are_marked_trevor";
										sVar2 = "but_these_are_marked_floyd";
										sVar3 = "missheistdockssetup1ig_7";
										break;
									case 7:
										sVar1 = "the_government_stuff_is_floyd";
										sVar2 = "the_government_stuff_is_trevor";
										sVar3 = "missheistdockssetup1ig_7";
										break;
									case 8:
										sVar1 = "you_are_beginning_to_trevor";
										sVar2 = "you_are_beginning_to_floyd";
										sVar3 = "missheistdockssetup1ig_7";
										break;
								}
								if (bLocal_1847)
								{
									TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sVar3, sVar1, 8f, -8f, -1, 114736, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(iLocal_2041, sVar3, sVar2, 8f, -8f, -1, 114736, 0f, false, false, false);
								}
								iLocal_1833[iLocal_1800] = 1;
								STREAMING::REMOVE_ANIM_DICT(sVar3);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!iLocal_1828)
			{
				func_693();
				iLocal_1828 = 1;
			}
			if (!iLocal_1829)
			{
				if (iLocal_2021 > 5)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_1775)
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
						}
						else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_2041) || !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							__LIB_0__::func_709(iLocal_2041, "DH1_CAAA", "FLOYD", 9);
							iLocal_1829 = 1;
							iLocal_1775 = MISC::GET_GAME_TIMER() + 10000;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, 3.2f, 3.2f, 4f, false, true, 0))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2041, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, -1, 0, 2);
				if (__LIB_0__::func_568())
				{
					__LIB_0__::func_620(0);
					HUD::CLEAR_PRINTS();
				}
				else
				{
					func_691();
					iLocal_1828 = 0;
					iLocal_1834 = 1;
					iLocal_1827 = 0;
				}
			}
		}
	}
}

void func_691()//Position - 0x8DB32
{
	if (!PED::IS_PED_INJURED(iLocal_2041))
	{
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_2041, "floyddocks1", 0, 40, -1);
	}
}

void func_693()//Position - 0x8DB6E
{
	struct<6> Var0;
	if (__LIB_0__::func_75())
	{
		Var0 = { __LIB_0__::func_486() };
		iLocal_1832 = 1;
		Local_1803 = { Var0 };
		Local_1804 = { __LIB_0__::func_485() };
		__LIB_0__::func_638();
	}
}

int func_697()//Position - 0x8DCB5
{
	if (iLocal_1832)
	{
		if (!__LIB_0__::func_75())
		{
			__LIB_16__::func_936(&Local_48, "D1AUD", &Local_1803, &Local_1804, 8, 0, 0);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_699()//Position - 0x8DD41
{
	if (!PED::IS_PED_INJURED(iLocal_2041))
	{
		if (!func_487("FLOYD SEEN BOAT"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2041, -101.65862f, -2472.183f, 4.021717f, -98.12972f, -2474.6987f, 8.271718f, 2.25f, false, true, 0))
			{
				func_484("FLOYD SEEN BOAT", 1);
			}
		}
		switch (iLocal_1948)
		{
			case 0:
				if (!__LIB_0__::func_75())
				{
					if (func_570())
					{
						if (!__LIB_13__::func_755(&Local_2123, 1))
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_04", 8, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
								iLocal_1948++;
							}
						}
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_05a", 8, 0, 0, 0))
					{
						iLocal_1948++;
					}
				}
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					if (!func_487("DS1_05b"))
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_05b", 8, 0, 0, 0))
						{
							func_484("DS1_05b", 1);
						}
					}
					else
					{
						iLocal_1948 = 4;
					}
				}
				break;
			case 3:
				if (!__LIB_0__::func_75())
				{
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_05c", 8, 0, 0, 0))
					{
						iLocal_1948++;
					}
				}
				break;
			case 4:
				if (func_487("FLOYD SEEN BOAT"))
				{
					if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CREAK_V1", false, -1))
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER"))
						{
							AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
						}
						if (!__LIB_0__::func_75())
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_06", 8, 0, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "CREAK_01", -212.592f, -2375.6167f, 16.3326f, "DOCKS_HEIST_SETUP_SOUNDS", false, 0, false);
								iLocal_1948++;
							}
						}
					}
				}
				break;
			case 5:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1927) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1928)) || PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1929))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_04b", 8, 0, 0, 0))
						{
							if (!PED::IS_PED_INJURED(Local_1962[0 /*16*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_2041, Local_1962[0 /*16*/], 5000, 2048, 4);
							}
							iLocal_1948++;
						}
					}
				}
				break;
			}
	}
}

void func_700()//Position - 0x8DF95
{
	if (!func_487("DS1_02b"))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -39.35932f, -2382.8088f, 4.25079f, -130.74667f, -2514.0603f, 14.204694f, 83f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -291.89883f, -2400.5962f, 4.250148f, -124.852646f, -2449.2632f, 7.767045f, 144f, false, true, 0))
		{
			if (__LIB_0__::func_680())
			{
				if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_02b", 7, 0, 0, 0))
				{
					iLocal_2344 = MISC::GET_GAME_TIMER();
					func_484("DS1_02b", 1);
				}
			}
			else if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 7, 0, 0, 0))
			{
				iLocal_2344 = MISC::GET_GAME_TIMER();
				func_484("DS1_38", 1);
			}
		}
	}
	else if (__LIB_0__::func_611(&iLocal_2344, MISC::GET_RANDOM_INT_IN_RANGE(12000, 22000)))
	{
		func_484("DS1_02b", 0);
	}
	if (iLocal_2021 > 2)
	{
		if (__LIB_0__::func_611(&iLocal_2343, 4000))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, 0);
				}
			}
		}
	}
	func_702();
	func_603();
	if (iLocal_2021 > 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
		{
			if (!PED::IS_PED_INJURED(iLocal_2042))
			{
				if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("IG_Wade"), ENTITY::GET_ENTITY_COORDS(iLocal_2042, true), true) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2042))
				{
					PED::DELETE_PED(&iLocal_2042);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
				}
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", 3))
			{
				TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", -8f);
			}
		}
	}
	if (iLocal_2021 > 1)
	{
		__LIB_0__::func_671(1);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0.5f);
		if (!func_487("DH_1_FOLLOW_FLOYD_START"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_APPROACH_DOCKS"))
			{
				AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_APPROACH_DOCKS");
			}
			else
			{
				AUDIO::START_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
				func_484("DH_1_FOLLOW_FLOYD_START", 1);
			}
		}
	}
	switch (iLocal_2021)
	{
		case 0:
			if (func_570())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_566();
					if (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2041) && !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2042))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iLocal_1777 = 0;
				}
				__LIB_38__::func_768(2, "Park up", 0, 0, 0, 1);
				iLocal_1972[5] = 1;
				iLocal_1972[12] = 1;
				iLocal_1972[4] = 1;
				iLocal_1972[3] = 1;
				iLocal_1769 = 2;
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
				STREAMING::REQUEST_IPL("pcranecont");
				Global_32196 = 0;
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, true, 0f, 0f, 0f);
				bLocal_1872 = false;
				func_489(1);
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
				if (iLocal_1839 == 0)
				{
					STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
					{
						if (!PED::IS_PED_INJURED(iLocal_2043))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
							TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 2f, -4f, -1, 262144, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -4f, -1, 262144, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -4f, -1, 262144, 0f, false, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_2043, iLocal_2056);
							iLocal_1839 = 1;
						}
					}
				}
				iLocal_2021++;
			}
			break;
		case 1:
			if (__LIB_16__::func_933(&Local_2123, Local_2069, 0.001f, 0.001f, 2f, 1, iLocal_2041, iLocal_2042, 0, iLocal_2044, "AW_GO_PARK", "AW_DONT_LEAVE_T", "AW_DONT_LEAVE_W", "", "AW_PICK_UP_B", "AW_DOCK1", "AW_GETBACK_IN", 0, 0, 1, -1))
			{
				iLocal_1972[1] = 1;
				iLocal_1814 = 0;
				iLocal_1813 = 0;
				__LIB_0__::func_325();
				HUD::REMOVE_BLIP(&(Local_2123.f_5));
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
				iLocal_2343 = MISC::GET_GAME_TIMER();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_2021++;
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -70.137924f, -2523.7942f, 4.010104f, -56.489647f, -2533.6624f, 9.010103f, 7.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -60.260574f, -2528.6047f, 4.010104f, -55.287464f, -2531.8586f, 9.010103f, 11.5f, false, true, 0)) && __LIB_0__::func_494(1, 1, 1))
					{
						if (__LIB_0__::func_213(iLocal_2044, 5f, -1, 1056964608, 0, 1, 0))
						{
							iLocal_1972[1] = 1;
							iLocal_1814 = 0;
							iLocal_1813 = 0;
							__LIB_0__::func_325();
							HUD::REMOVE_BLIP(&(Local_2123.f_5));
							STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
							iLocal_2343 = MISC::GET_GAME_TIMER();
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
							iLocal_2021++;
						}
					}
				}
				if (iLocal_1820 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1.572346f, -2541.4016f, 4.841759f, 14.998902f, -2521.3604f, 6.507655f, 2.25f, false, true, 0) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						if (!PED::IS_PED_INJURED(iLocal_2041))
						{
							TASK::CLEAR_PED_TASKS(iLocal_2041);
						}
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							TASK::CLEAR_PED_TASKS(iLocal_2042);
						}
						iLocal_1820 = 1;
					}
				}
			}
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@start_idle"))
				{
					if (func_570())
					{
						OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, false, 0f, 0f, 0f);
						if (__LIB_0__::func_501("AW_GO_PARK", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						__LIB_0__::func_638();
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_2042, 226, true);
						}
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, true);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
						}
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_2041);
								PED::SET_PED_CAN_RAGDOLL(iLocal_2041, false);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_2042, 3000, 0, 2);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
								{
									if (!__LIB_16__::func_927(iLocal_2044, 238.3604f, 60f))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -62.05f, -2524.82f, 6.01f, 1f, 20000, 0.1f, 1, 40000f);
									}
								}
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1974[1 /*3*/], 1f, 20000, 0.1f, 512, fLocal_1975[1]);
								TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_2_p1@start_idle", "supervisor_exitdoor_startidle_floyd", 8f, -8f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
							}
							if (!PED::IS_PED_INJURED(iLocal_2042))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_2042);
								PED::SET_PED_CAN_RAGDOLL(iLocal_2042, false);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iLocal_2041, 3000, 0, 2);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -58.3f, -2525.55f, 6.16f, 1f, 20000, 0.1f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1976[1 /*3*/], 1f, 20000, 0.1f, 512, fLocal_1977[1]);
								TASK::TASK_PLAY_ANIM(0, "missheistdockssetup1ig_2_p1@start_idle", "supervisor_exitdoor_startidle_wade", 8f, -8f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_2042, iLocal_2056);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
							}
						}
						func_689(&iLocal_68, &iLocal_2041, 1);
						if (!PED::IS_PED_INJURED(iLocal_2041))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2041, -1, 0, 2);
						}
						iLocal_1782 = MISC::GET_GAME_TIMER();
						iLocal_2021++;
					}
				}
			}
			break;
		case 3:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
			}
			if (!func_487("DS1_02a"))
			{
				if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_02a", 7, 0, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 7f, 4);
					func_484("DS1_02a", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041) && !PED::IS_PED_INJURED(iLocal_2042))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_2041, iLocal_2044, false) && !PED::IS_PED_IN_VEHICLE(iLocal_2042, iLocal_2044, false))
					{
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2042, 16);
						}
						if (!PED::IS_PED_INJURED(iLocal_2041))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2041, 16);
						}
						iLocal_1814 = 0;
						iLocal_1813 = 0;
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, false);
						iLocal_2021++;
					}
				}
			}
			break;
		case 4:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			if (__LIB_0__::func_611(&iLocal_1782, 4000))
			{
				if (!PED::IS_PED_INJURED(iLocal_2042))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_2042, 1f);
				}
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_2041, 1f);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
			if (Local_1961[0 /*16*/].f_4 > 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, 0);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_2041, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				}
				if (!PED::IS_PED_INJURED(iLocal_2042))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_2042, 226, false);
				}
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@start_idle");
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, true, 0f, 0f, 0f);
				iLocal_1972[7] = 1;
				iLocal_1972[11] = 1;
				iLocal_1972[6] = 1;
				iLocal_1813 = 0;
				iLocal_1817 = 0;
				iLocal_1814 = 0;
				iLocal_2021++;
			}
			break;
		case 5:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, 0);
				}
				else if (func_844())
				{
					func_336();
					iLocal_2317 = 4;
				}
			}
			break;
	}
}

void func_702()//Position - 0x8EA8B
{
	switch (iLocal_1777)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_2043))
			{
				STREAMING::REQUEST_ANIM_DICT("misslsdhs");
				STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
				iLocal_1777++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_2043))
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2043, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						iLocal_1778 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_2043))
			{
				if (__LIB_0__::func_611(&iLocal_1778, 1000))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2043, "misslsdhsclipboard@idle_a", "idle_a", 3))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 6.580805f, -2543.8547f, 5.050115f, 19.95751f, -2525.0479f, 6.009008f, 20f, false, true, 0))
						{
							STREAMING::REQUEST_ANIM_DICT("misslsdhs");
							STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
							{
								if (!PED::IS_PED_INJURED(iLocal_2043))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -4f, -1, 262144, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 8f, -4f, -1, 262144, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -4f, -1, 262145, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_2043, iLocal_2056);
									iLocal_1777++;
								}
							}
						}
					}
					else
					{
						STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
						if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
						{
							if (!PED::IS_PED_INJURED(iLocal_2043))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
								TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -4f, -1, 262145, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_2043, iLocal_2056);
								iLocal_1777++;
							}
						}
					}
				}
			}
			break;
	}
}

void func_704()//Position - 0x8ECC1
{
	func_603();
	func_712();
	switch (iLocal_2021)
	{
		case 0:
			if ((func_570() && func_405(6, Local_2060, fLocal_2031)) && func_405(7, Local_2061, fLocal_2032))
			{
				__LIB_16__::func_18(1);
				iLocal_1813 = 0;
				iLocal_1769 = 0;
				__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
				bLocal_1872 = false;
				func_710();
				iLocal_1839 = 0;
				iLocal_1813 = 0;
				iLocal_1814 = 0;
				SYSTEM::SETTIMERA(0);
				Global_32196 = 1;
				OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, true, 0f, 0f, 0f);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!func_487("TOD SWITCH"))
					{
						CLOCK::SET_CLOCK_TIME(6, 0, 0);
						func_484("TOD SWITCH", 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1156.5227f, -1523.5519f, 3.3044f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 306.1213f);
							}
							else
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1156.886f, -1524.1942f, 3.2833f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 313.4019f);
								PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 100, 0f, true, false);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_2041))
						{
							if (!__LIB_1__::func_606(iLocal_2041, iLocal_2044, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_2041, iLocal_2044, 0);
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							if (!__LIB_1__::func_606(iLocal_2042, iLocal_2044, 1))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_2042, iLocal_2044, 1);
							}
						}
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (__LIB_13__::func_807(3))
					{
						__LIB_17__::func_209(3);
					}
				}
				iLocal_2021 = 99;
			}
			break;
		case 99:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_566();
			}
			__LIB_0__::func_544(145, 1, 0, 1, 0);
			__LIB_0__::func_544(146, 0, 0, 1, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(18.38092f, -2524.4602f, 10.000374f, 10.180921f, -2534.4602f, 4.800374f, false, true, true, true);
			MISC::CLEAR_AREA(Local_2066, 40f, true, false, false, false);
			__LIB_0__::func_483(1, PLAYER::PLAYER_PED_ID(), 0);
			OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(Global_41748[1 /*31*/], false);
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[1 /*31*/], 0f, true, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[1 /*31*/], 1, true, false);
			func_489(1);
			__LIB_16__::func_18(0);
			iLocal_1875 = 0;
			iLocal_2021 = 1;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			if (!func_487("DH_1_DRIVE_START"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
					{
						AUDIO::START_AUDIO_SCENE("DH_1_DRIVE_START");
						func_484("DH_1_DRIVE_START", 1);
					}
				}
			}
			else if (!func_487("DH_1_DRIVE_APPROACH_DOCKS"))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 352.88464f, -2391.7583f, 8.183699f, 351.2024f, -2238.5288f, 12.79882f, 29f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 369.15298f, -2225.73f, 9.336354f, 342.83194f, -2223.6228f, 27.368328f, 86.5f, false, true, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_START"))
					{
						AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_START");
					}
					else
					{
						AUDIO::START_AUDIO_SCENE("DH_1_DRIVE_APPROACH_DOCKS");
						func_484("DH_1_DRIVE_APPROACH_DOCKS", 1);
					}
				}
			}
			if (!func_487("TURN OFF RAGDOLL"))
			{
				if (!PED::IS_PED_INJURED(iLocal_2042))
				{
					if (__LIB_1__::func_606(iLocal_2042, iLocal_2044, 1))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2042, 0);
						PED::SET_PED_CAN_RAGDOLL(iLocal_2042, true);
						func_484("TURN OFF RAGDOLL", 1);
					}
				}
			}
			if (__LIB_16__::func_933(&Local_2123, Local_2066, 0.1f, 0.1f, 2f, 1, iLocal_2041, iLocal_2042, 0, iLocal_2044, "AW_GO_DOCKS", "AW_DONT_LEAVE_T", "AW_DONT_LEAVE_W", "", "AW_PICK_UP_B", "AW_YTREVTRU", "AW_GETBACK_IN", 0, 1, 1, -1))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
				iLocal_1814 = 0;
				iLocal_1875 = 0;
				__LIB_0__::func_325();
				iLocal_2021++;
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
				{
					if (func_487("DS1_01b"))
					{
						func_484("DS1_01b", 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_2041, true);
					}
					if (!PED::IS_PED_INJURED(iLocal_2042))
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_2042, true);
					}
					if (__LIB_0__::func_501("AW_YTREVTRU", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					if (!__LIB_13__::func_755(&Local_2123, 1))
					{
						if (iLocal_1875 == 0)
						{
							if (func_570())
							{
								if (__LIB_16__::func_932() == 0)
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_01", 7, 0, 0, 0))
									{
										iLocal_1875 = 1;
									}
								}
								else if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_01", 7, 0, 0, 0))
								{
									iLocal_1875 = 1;
								}
							}
						}
					}
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 11.94329f, -2544.413f, 4.79992f, 23.731033f, -2528.0288f, 8.649944f, 22.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 11.94329f, -2544.413f, 4.79992f, 23.731033f, -2528.0288f, 8.649944f, 22.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 10.628066f, -2533.845f, 7.54014f, 32.967224f, -2550.3354f, 19.500061f, 16f, false, true, 0))
					{
						if (iLocal_1839 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a"))
							{
								if (!PED::IS_PED_INJURED(iLocal_2043))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_to_truck", 8f, -8f, -1, 262144, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, "misslsdhs", "wave_truck", 8f, -8f, -1, 262144, 0f, false, false, false);
									TASK::TASK_PLAY_ANIM(0, "misslsdhsclipboard@idle_a", "idle_a", 8f, -8f, -1, 262145, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_2043, iLocal_2056);
									iLocal_1839 = 1;
								}
							}
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2044, 11f, 1, false);
						iLocal_1814 = 0;
						STREAMING::REQUEST_IPL("Talklaugh_Pipe");
						__LIB_13__::func_815(&Local_2123, 1, 0);
						__LIB_0__::func_638();
						iLocal_2021++;
					}
				}
				else
				{
					if (!func_487("DS1_01b"))
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_01b", 7, 0, 0, 0))
									{
										func_484("DS1_01b", 1);
									}
								}
							}
						}
					}
					if (!func_487("DS1_00"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_2123.f_0))
						{
							if (!__LIB_13__::func_755(&Local_2123, 1))
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_00", 7, 0, 0, 0))
								{
									func_484("DS1_00", 1);
								}
							}
						}
					}
				}
				if (iLocal_1875 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
							HUD::CLEAR_PRINTS();
						}
					}
					else if (__LIB_0__::func_75())
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
							HUD::CLEAR_PRINTS();
						}
					}
				}
			}
			break;
		case 2:
			if (!func_487("DS1_02"))
			{
				if (func_570())
				{
					__LIB_0__::func_638();
					if (!__LIB_0__::func_75())
					{
						if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_02", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
							func_484("DS1_02", 1);
						}
					}
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", 3))
						{
							TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", -8f);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
					TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_from_truck_fps", 4f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_2041, iLocal_2056);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
					TASK::TASK_PLAY_ANIM(0, "misslsdhs", "reaction_from_truck_fds", 4f, -4f, -1, 48, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_2056);
				}
				iLocal_1972[5] = 1;
				iLocal_1972[4] = 1;
				iLocal_1972[12] = 1;
				STREAMING::REMOVE_ANIM_DICT("misslsdhs");
				STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@idle_a");
				STREAMING::REMOVE_ANIM_DICT("misslsdhsclipboard@base");
				Global_32196 = 0;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_2021++;
			}
			break;
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", 3))
					{
						TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "misslsdhs", "reaction_from_truck_fds", -8f);
					}
				}
			}
			if (func_844())
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_2041);
				}
				if (!PED::IS_PED_INJURED(iLocal_2042))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_2042);
				}
				func_336();
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
				func_335();
			}
			break;
	}
}

void func_710()//Position - 0x8F689
{
	Local_2320.f_24 = { 0f, 0f, 18f };
	Local_2062[0 /*3*/] = { -104.07f, -2374.69f, 8.3191f };
	fLocal_2027[0] = 93.83f;
	Local_2063[0 /*13*/][0 /*3*/] = { -104.07f, -2374.69f, 8.3191f };
	Local_2063[0 /*13*/][1 /*3*/] = { -147.4f, -2378.3f, 8.3191f };
	Local_2063[0 /*13*/][2 /*3*/] = { -104.07f, -2374.69f, 8.3191f };
	Local_2063[0 /*13*/][3 /*3*/] = { -147.4f, -2378.3f, 8.3191f };
	Local_2062[1 /*3*/] = { -212.235f, -2377.4456f, 16.3326f };
	fLocal_2027[1] = 94.3986f;
	Local_2063[1 /*13*/][0 /*3*/] = { -212.235f, -2377.4456f, 16.3326f };
	Local_2063[1 /*13*/][1 /*3*/] = { -231.7264f, -2377.5935f, 16.3319f };
	Local_2063[1 /*13*/][2 /*3*/] = { -232.1804f, -2374.6602f, 16.3308f };
	Local_2063[1 /*13*/][3 /*3*/] = { -231.7264f, -2377.5935f, 16.3319f };
	Local_2062[2 /*3*/] = { -248.9245f, -2376.2087f, 8.3191f };
	fLocal_2027[2] = 274.0258f;
	Local_2063[2 /*13*/][0 /*3*/] = { -248.9245f, -2376.2087f, 8.3191f };
	Local_2063[2 /*13*/][1 /*3*/] = { -209.7266f, -2378.2537f, 8.3191f };
	Local_2063[2 /*13*/][2 /*3*/] = { -186.3949f, -2377.6677f, 8.3191f };
	Local_2063[2 /*13*/][3 /*3*/] = { -163.5379f, -2378.049f, 8.3191f };
	Local_2062[3 /*3*/] = { -123.4885f, -2352.8262f, 8.3191f };
	fLocal_2027[3] = 3.7757f;
	Local_2063[3 /*13*/][0 /*3*/] = { -151.35f, -2408.0063f, 5.0005f };
	Local_2063[3 /*13*/][1 /*3*/] = { -102.0827f, -2408.0342f, 5.0005f };
	Local_2063[3 /*13*/][2 /*3*/] = { -102.24f, -2423.97f, 5.0005f };
	Local_2063[3 /*13*/][3 /*3*/] = { -61.0789f, -2423.8125f, 5.0012f };
	Local_2062[4 /*3*/] = { 483.6f, -3119.91f, 5.0696f };
	fLocal_2027[4] = -11.93f;
	Local_2062[5 /*3*/] = { 484.6697f, -3110.7073f, 5.2948f };
	fLocal_2027[5] = 1.5744f;
	Local_2062[6 /*3*/] = { 482.53f, -3119.3f, 6.07f };
	fLocal_2027[6] = 44.12f;
	Local_2062[7 /*3*/] = { -124.56f, -2371.68f, 9.32f };
	fLocal_2027[7] = -75.45f;
	Local_2062[8 /*3*/] = { 482.53f, -3119.3f, 6.07f };
	fLocal_2027[8] = 44.12f;
	Local_2064[0 /*3*/] = { -151.35f, -2408.0063f, 5.0005f };
	fLocal_2028[0] = 268.7411f;
	Local_2065[0 /*13*/][0 /*3*/] = { -151.35f, -2408.0063f, 5.0005f };
	Local_2065[0 /*13*/][1 /*3*/] = { -102.0827f, -2408.0342f, 5.0005f };
	Local_2065[0 /*13*/][2 /*3*/] = { -102.24f, -2423.97f, 5.0005f };
	Local_2065[0 /*13*/][3 /*3*/] = { -61.0789f, -2423.8125f, 5.0012f };
	Local_2064[1 /*3*/] = { -43.6959f, -2520.3784f, 6.3988f };
	fLocal_2028[1] = 321.2447f;
	Local_2064[2 /*3*/] = { -176.3674f, -2408.1582f, 5.0007f };
	fLocal_2028[2] = 271.7324f;
	Local_2064[3 /*3*/] = { -62.19f, -2539.51f, 6.01f };
	fLocal_2028[3] = -157.31f;
	Local_2064[4 /*3*/] = { -56.7946f, -2448.8533f, 6.2398f };
	fLocal_2028[4] = 66.4825f;
	Local_2064[5 /*3*/] = { 14.2126f, -2507.8977f, 5.0067f };
	fLocal_2028[5] = 102.59998f;
	Local_2064[6 /*3*/] = { -121.86f, -2451.69f, 5.02f };
	fLocal_2028[6] = -5.8f;
	Local_2064[7 /*3*/] = { -133.5132f, -2450.7058f, 5.0167f };
	fLocal_2028[7] = 321.2153f;
	Local_2064[8 /*3*/] = { -104.743f, -2496.9646f, 5.0058f };
	fLocal_2028[8] = 319.1118f;
	Local_2064[9 /*3*/] = { -124.0598f, -2479.0505f, 5.0196f };
	fLocal_2028[9] = 329.9548f;
	Local_2064[10 /*3*/] = { -72.4153f, -2485.4336f, 5.0334f };
	fLocal_2028[10] = 52.6711f;
	Local_2065[10 /*13*/][0 /*3*/] = { -72.4153f, -2485.4336f, 5.0334f };
	Local_2065[10 /*13*/][1 /*3*/] = { -96.9927f, -2468.286f, 5.0208f };
	Local_2065[10 /*13*/][2 /*3*/] = { -88.6509f, -2456.401f, 5.0196f };
	Local_2065[10 /*13*/][3 /*3*/] = { -135.2554f, -2449.3057f, 5.017f };
	Local_2064[11 /*3*/] = { -115.3376f, -2517.0283f, 5.0005f };
	fLocal_2028[11] = 245.6216f;
	Local_2064[12 /*3*/] = { -106.1724f, -2464.829f, 5.0208f };
	fLocal_2028[12] = 125.7997f;
	Local_2064[13 /*3*/] = { -98.68f, -2467.15f, 6.02f };
	fLocal_2028[13] = -7.74f;
	Local_2064[14 /*3*/] = { -67.21f, -2437.73f, 7.25f };
	fLocal_2028[14] = 81.13f;
	Local_2064[15 /*3*/] = { 481.98f, -3052.5f, 6.23f };
	fLocal_2028[15] = -0.95f;
	Local_2064[16 /*3*/] = { 489.35f, -3050.57f, 6.12f };
	fLocal_2028[16] = 346.3188f;
	Local_2064[17 /*3*/] = { 488.6217f, -3050.3328f, 5.1097f };
	fLocal_2028[17] = 2.1321f;
	Local_2064[18 /*3*/] = { 479.67f, -3049.37f, 5.1097f };
	fLocal_2028[18] = 2.1321f;
	Local_2064[19 /*3*/] = { -227.7128f, -2426.82f, 5.1497f };
	fLocal_2028[19] = 327.6013f;
	Local_2064[20 /*3*/] = { 463.81f, -3040.37f, 6.07f };
	fLocal_2028[20] = 327.6013f;
	Local_2064[21 /*3*/] = { 493.09f, -3047.2f, 6.11f };
	fLocal_2028[21] = 135.22f;
	Local_2070[0 /*3*/] = { -104.8244f, -2513.3738f, 4.5183f };
	fLocal_2034[0] = 56.5885f;
	Local_2070[1 /*3*/] = { -104.7854f, -2465.9553f, 5.0208f };
	fLocal_2034[1] = 235.9101f;
	Local_2070[2 /*3*/] = { -69.5243f, -2505.926f, 5.0075f };
	fLocal_2034[2] = 324.8585f;
	Local_2070[3 /*3*/] = { -39.19f, -2449.159f, 5.0043f };
	fLocal_2034[3] = 144.4548f;
	Local_1962[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1962[1 /*16*/].f_2 = joaat("S_M_Y_BlackOps_01");
	Local_1962[2 /*16*/].f_2 = joaat("S_M_Y_BlackOps_01");
	Local_1962[0 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1962[0 /*16*/].f_10 = 0f;
	Local_1962[1 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1962[1 /*16*/].f_10 = 0f;
	Local_1962[2 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1962[2 /*16*/].f_10 = 0f;
	Local_1961[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1961[0 /*16*/].f_7 = { -62.229f, -2518.5679f, 6.4002f };
	Local_1961[0 /*16*/].f_10 = 143.9633f;
	Local_1968[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1968[0 /*16*/].f_7 = { -122.25f, -2419.58f, 6f };
	Local_1968[0 /*16*/].f_10 = 179.2108f;
	Local_1969[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1969[0 /*16*/].f_7 = { -96.715f, -2455.2817f, 5.0189f };
	Local_1969[0 /*16*/].f_10 = 225.5408f;
	Local_1967[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1967[0 /*16*/].f_7 = { -110.41f, -2481.24f, 6.02f };
	Local_1967[0 /*16*/].f_10 = -109.52f;
	Local_1967[1 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1967[1 /*16*/].f_7 = { -108.83f, -2482.12f, 6.02f };
	Local_1967[1 /*16*/].f_10 = -88.92f;
	Local_1970[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1970[1 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1970[2 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1970[3 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1970[0 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1970[1 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1970[2 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1970[3 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1970[0 /*16*/].f_10 = 143.9633f;
	Local_1970[1 /*16*/].f_10 = 143.9633f;
	Local_1970[2 /*16*/].f_10 = 143.9633f;
	Local_1970[3 /*16*/].f_10 = 143.9633f;
	Local_1963[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1963[1 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1963[0 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1963[1 /*16*/].f_7 = { -69.5243f, -2505.926f, 5.0075f };
	Local_1963[0 /*16*/].f_10 = 143.9633f;
	Local_1963[1 /*16*/].f_10 = 143.9633f;
	Local_1966[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1966[0 /*16*/].f_7 = { -107.9554f, -2465.78f, 7.8185f };
	Local_1966[0 /*16*/].f_10 = 331.6483f;
	Local_1964[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1964[1 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1964[2 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1964[3 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1964[4 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1960[0 /*8*/].f_1 = joaat("buffalo");
	Local_1960[0 /*8*/].f_4 = { -109.5377f, -2519.489f, 5f };
	Local_1960[0 /*8*/].f_7 = 51.6828f;
	Local_1964[0 /*16*/].f_7 = { -105.6039f, -2520.684f, 5f };
	Local_1964[0 /*16*/].f_10 = 10f;
	Local_1964[1 /*16*/].f_7 = { -107.4489f, -2523.3547f, 5f };
	Local_1964[1 /*16*/].f_10 = 22f;
	Local_1964[2 /*16*/].f_7 = { -111.844f, -2520.272f, 5f };
	Local_1964[2 /*16*/].f_10 = 55f;
	Local_1964[3 /*16*/].f_7 = { -110.1655f, -2516.717f, 5f };
	Local_1964[3 /*16*/].f_10 = 43f;
	Local_1964[4 /*16*/].f_7 = { -114.7683f, -2516.2803f, 5.0999f };
	Local_1964[4 /*16*/].f_10 = 84f;
	Local_1965[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1965[1 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1965[2 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1965[0 /*16*/].f_7 = { -77.0331f, -2527.0872f, 5.0101f };
	Local_1965[1 /*16*/].f_7 = { -75.1044f, -2529.4731f, 5.0101f };
	Local_1965[2 /*16*/].f_7 = { -73.6988f, -2529.5952f, 5.0101f };
	Local_1965[0 /*16*/].f_10 = 20f;
	Local_1965[1 /*16*/].f_10 = 60f;
	Local_1965[2 /*16*/].f_10 = 266f;
	Local_1971[0 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1971[1 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1971[2 /*16*/].f_2 = joaat("S_M_M_DockWork_01");
	Local_1965[0 /*16*/].f_12 = { -68.32f, -2531.518f, 5.06f };
	Local_1965[0 /*16*/].f_15 = 3.64f;
	Local_1965[1 /*16*/].f_12 = { -68.32f, -2531.518f, 5.06f };
	Local_1965[1 /*16*/].f_15 = 3.64f;
	Local_1965[2 /*16*/].f_12 = { -68.32f, -2531.518f, 5.06f };
	Local_1965[2 /*16*/].f_15 = 3.64f;
	Local_1970[0 /*16*/].f_12 = { -115.7235f, -2477.5984f, 22.2266f };
	Local_1970[1 /*16*/].f_12 = { -117.2564f, -2479.7366f, 22.2266f };
	Local_1970[2 /*16*/].f_12 = { -114.1917f, -2475.4312f, 22.2266f };
	Local_1970[3 /*16*/].f_12 = { -117.7939f, -2480.5886f, 22.2266f };
	Local_1979 = { -60.173f, -2525.329f, 4.925f };
	Local_1979.f_3 = { 0f, 0f, 59.25f };
	Local_2016 = { -88.341f, -2502.575f, 5.011f };
	Local_2016.f_3 = { 0f, 0f, -32.844f };
	Local_1995 = { -68.929f, -2530.365f, 5.126f };
	Local_1995.f_3 = { 0f, 0f, 46f };
	Local_2012 = { -110.715f, -2429.089f, 5.001f };
	Local_2012.f_3 = { 0f, 0f, 91f };
	Local_2003 = { -131.496f, -2423.041f, 5f };
	Local_2016.f_3 = { 0f, 0f, 63.72f };
	Local_1983 = { -116.113f, -2475.791f, 22.206f };
	Local_1983.f_3 = { 0f, 0f, 145.52f };
	Local_1987 = { -29.053f, -2481.937f, 22.205f };
	Local_1987.f_3 = { 0f, 0f, 147.28f };
	Local_1999 = { -108.066f, -2464.675f, 5.02f };
	Local_1999.f_3 = { 0f, 0f, 55f };
	Local_1961[0 /*16*/].f_12 = { -62.118767f, -2519.221f, 7.414408f };
	Local_1961[0 /*16*/].f_15 = -170.75f;
	Local_1974[2 /*3*/] = { -76.45f, -2508.3f, 6.01f };
	fLocal_1975[2] = -38.15f;
}

void func_712()//Position - 0x904DD
{
	if (!func_487("CREATE DOCKS SECURITY"))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_2066, true) < 100f)
		{
			func_565(8);
			STREAMING::REQUEST_ANIM_DICT("misslsdhs");
			STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@idle_a");
			STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
			STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
			STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
			if ((((STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@idle_a")) && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pencil_01")))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2054[0]))
					{
						iLocal_2054[0] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), Local_2066, true, true, false);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2055[0]))
					{
						iLocal_2055[0] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), Local_2066, true, true, false);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2043))
					{
						if (!PED::IS_PED_INJURED(iLocal_2043))
						{
							PED::CLEAR_ALL_PED_PROPS(iLocal_2043);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2055[0], iLocal_2043, PED::GET_PED_BONE_INDEX(iLocal_2043, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2054[0], iLocal_2043, PED::GET_PED_BONE_INDEX(iLocal_2043, 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2054[0], iLocal_2043, true);
							TASK::TASK_PLAY_ANIM(iLocal_2043, "misslsdhsclipboard@base", "base", 1000f, -1000f, -1, 262145, 0f, false, false, false);
							__LIB_0__::func_222(&Local_48, 1, iLocal_2043, "GATEGUARD", 0, 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_2043, 16);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_2043, false);
							func_484("CREATE DOCKS SECURITY", 1);
						}
					}
				}
			}
		}
	}
}

void func_713()//Position - 0x906A4
{
	int iVar0;
	int iVar1;
	iLocal_1876 = 1;
	func_812();
	if (__LIB_14__::func_466() != 2)
	{
		func_734(2, 1);
	}
	if (iLocal_1762 == 0)
	{
		if (iLocal_1760)
		{
			__LIB_16__::func_918(500);
			iLocal_1760 = 0;
		}
		else if (iLocal_1759 == 0)
		{
			iLocal_1876 = 1;
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
				iLocal_2041 = Global_96938.f_9[0];
			}
			if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[1], true, true);
				iLocal_2042 = Global_96938.f_9[1];
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1761, false))
			{
			}
			if (__LIB_0__::func_2(0))
			{
				while (!func_405(6, Local_2060, fLocal_2031) || !func_405(7, Local_2061, fLocal_2032))
				{
					SYSTEM::WAIT(0);
				}
			}
			STREAMING::REQUEST_MODEL(__LIB_13__::func_741(2, 1));
			CUTSCENE::REQUEST_CUTSCENE("LSDH_INT", 8);
			__LIB_16__::func_888(2);
			iLocal_1840 = 0;
			iLocal_1759++;
		}
		else if (iLocal_1759 == 1)
		{
			if (!__LIB_0__::func_2(0) || CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (__LIB_0__::func_2(0))
				{
					PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
				}
				if (__LIB_0__::func_2(0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Floyd", iLocal_2041, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Floyd", iLocal_2041, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_2042))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Wade", iLocal_2042, 0);
				}
				iLocal_1759++;
			}
		}
		else if (iLocal_1759 == 2)
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				else
				{
					SYSTEM::WAIT(0);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_2042))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2042, "Wade", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2041, "Floyd", 0, 0, 0);
				}
				GRAPHICS::ENABLE_MOVIE_SUBTITLES(false);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
				CUTSCENE::START_CUTSCENE(0);
				__LIB_0__::func_468(71);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				iLocal_2338 = 0;
				iLocal_1758 = 0;
				iLocal_1762 = 1;
			}
		}
	}
	if (iLocal_1762 == 1)
	{
		if (!iLocal_1758)
		{
			if (__LIB_1__::func_254())
			{
			}
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (iLocal_1840 == 0)
			{
				if (__LIB_0__::func_2(0))
				{
					__LIB_16__::func_918(500);
				}
				iLocal_1761 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				__LIB_16__::func_18(1);
				__LIB_17__::func_454(1187f, -1398f, 4.3f, 10f, 0);
				__LIB_16__::func_935(7);
				__LIB_16__::func_937(-1167.1868f, -1506.0436f, 2.992951f, -1146.5308f, -1533.7604f, 6.597246f, 9f, -1187.1825f, -1491.174f, 3.3797f, 304.3311f, 5f, 5f, 3f, 1, 1, 1, 0, 0);
				MISC::CLEAR_AREA(-1154.6117f, -1520.07f, 3.3456f, 200f, true, false, false, false);
				__LIB_16__::func_850(2, 0);
				CAM::STOP_GAMEPLAY_HINT(true);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
				iLocal_1840 = 1;
			}
			if (!func_487("TOD SWITCH"))
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 111300)
				{
					CLOCK::SET_CLOCK_TIME(6, 0, 0);
					func_566();
					func_484("TOD SWITCH", 1);
				}
			}
		}
		if (iLocal_1840 == 1)
		{
			func_405(5, -1155.02f, -1522.81f, 3.3397f, 38.4f);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
			{
				iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iLocal_2042 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
			{
				iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Floyd_Wades_Cousin", 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					iLocal_2041 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
				}
			}
			if (!func_487("LSDH_INT CAMERA EXIT"))
			{
			}
			if (!func_487("LSDH_INT TREVOR EXIT"))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						func_566();
					}
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
					{
						TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, -1, -1, 1f, 1048576, 0);
					}
					func_484("LSDH_INT TREVOR EXIT", 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Floyd", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
				{
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 5, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 10, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2041, 11, 0, 0, 0);
						}
						PED::FORCE_PED_MOTION_STATE(iLocal_2041, joaat("MotionState_Walk"), true, 1, false);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
				{
					if (!PED::IS_PED_INJURED(iLocal_2042))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 1, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 3, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 5, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 6, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 7, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 8, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 9, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 10, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_2042, 11, 0, 0, 0);
						}
						PED::FORCE_PED_MOTION_STATE(iLocal_2042, joaat("MotionState_Walk"), true, 1, false);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_1840 == 1)
			{
				iLocal_1762 = 2;
			}
		}
	}
	if (iLocal_1762 == 2)
	{
		if (iLocal_1758)
		{
			RECORDING::REPLAY_CANCEL_EVENT();
			CUTSCENE::STOP_CUTSCENE(false);
			if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_16__::func_928(500);
			}
			if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			while ((!func_405(6, Local_2060, fLocal_2031) || !func_405(7, Local_2061, fLocal_2032)) || !func_405(5, -1155.02f, -1522.81f, 3.3397f, 38.4f))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2044, -1, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, -1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2041, false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2044, 0, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2041, Local_2060, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_2041, fLocal_2031);
						PED::SET_PED_INTO_VEHICLE(iLocal_2041, iLocal_2044, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2042, false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2044, 1, false))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_2042, Local_2060, true, false, false, true);
						PED::SET_PED_INTO_VEHICLE(iLocal_2042, iLocal_2044, 1);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2044, false))
			{
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2044, false, 0);
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_2044, true);
			}
		}
		RECORDING::REPLAY_STOP_EVENT();
		__LIB_16__::func_887();
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		iLocal_1759 = 0;
		iLocal_2317 = 2;
		iLocal_1762 = 0;
		__LIB_0__::func_552(0);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		iLocal_1876 = 0;
	}
	if (iLocal_1762 == 3)
	{
		CUTSCENE::STOP_CUTSCENE(false);
		iLocal_1758 = 1;
		iLocal_1762 = 1;
	}
}

int func_734(int iParam0, bool bParam1)//Position - 0x9323E
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
		func_810(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_777(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_17__::func_72(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_777(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x98C7B
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
			func_802(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_779(*iParam0, bParam6);
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

int func_779(int iParam0, bool bParam1)//Position - 0x98D93
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_783(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_783(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_229(iParam0, 3, 169))
					{
						func_287(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_229(iParam0, 12, 6))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 11))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 12, 10))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 12, 50))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 14, 59))
			{
				func_287(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_229(iParam0, 8, 22))
			{
				func_287(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_229(iParam0, 12, 14))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_229(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 4))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 12, 3))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 14, 82))
			{
				func_287(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_229(iParam0, 8, 76))
			{
				func_287(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_229(iParam0, 12, 1))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_229(iParam0, 12, 12))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 12, 15))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_229(iParam0, 3, 71))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_229(iParam0, 12, 7))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 12, 6))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_229(iParam0, 14, 88))
			{
				func_287(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_229(iParam0, 8, 17))
			{
				func_287(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_229(iParam0, 12, 11))
			{
				func_287(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_783(int iParam0, int iParam1)//Position - 0x99524
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
				iVar1 = func_291(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_10(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
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

void func_802(int iParam0)//Position - 0x9AA00
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
		func_10(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_291(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_803(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_291(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_291(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_803(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_803(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_291(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_10(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_803(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x9AC5D
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_806(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_806(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x9AE18
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
								func_806(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_806(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_806(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_806(iParam0, 14, iVar5, 1, 0);
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
								func_806(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_806(iParam0, 14, 17, 1, 0);
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

int func_810(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x9B3FD
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
				func_802(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_779(*iParam0, bParam6);
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

void func_812()//Position - 0x9B4DD
{
	switch (iLocal_2338)
	{
		case 0:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2339))
				{
					iLocal_2340 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Trevor", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2340))
					{
						iLocal_2339 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_2340);
					}
				}
				else
				{
					iLocal_2338++;
				}
			}
			break;
		case 1:
			iLocal_2342 = PED::GET_PED_DRAWABLE_VARIATION(iLocal_2339, 4);
			iLocal_2341 = PED::GET_PED_TEXTURE_VARIATION(iLocal_2339, 4);
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_2339, 4, 25, 0);
			iLocal_2338++;
			break;
		case 2:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 54435)
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_2339))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_2339, 4, 25, 0, 0);
					PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_2339, 4, iLocal_2342, iLocal_2341);
					iLocal_2338++;
				}
			}
			break;
		case 3:
			if (CUTSCENE::GET_CUTSCENE_TIME() > 76453)
			{
				if (PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(iLocal_2339))
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_2339, 4, iLocal_2342, iLocal_2341, 0);
					iLocal_2338++;
				}
			}
			break;
	}
}

void func_813()//Position - 0x9B5DD
{
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38.31939f, -3161.031f, 509.77576f) - Vector(43f, 240f, 87.25f), Vector(38.31939f, -3161.031f, 509.77576f) + Vector(43f, 240f, 87.25f), false, true, true, true);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-107f, -2415.304f, 5.381f, 16.4f, 15.3f, 1.6f, -1.619f, false, 7);
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-53.081f, -2415.703f, 5.119f, 16.4f, 15.3f, 1.6f, 1.584f, false, 7);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.000994f, -2415.8008f, -73.98793f) - Vector(3.25f, 8f, 43.25f), Vector(8.000994f, -2415.8008f, -73.98793f) + Vector(3.25f, 8f, 43.25f), false, true, true, true);
	__LIB_14__::func_804(1);
	__LIB_0__::func_552(0);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKH1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	__LIB_12__::func_849(23, 1);
	func_831(1);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_151);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_152);
	PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_151);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_152);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_151, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_151);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_152, iLocal_151);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_152, iLocal_152);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_152, iLocal_152);
	PED::SET_GROUP_SEPARATION_RANGE(__LIB_0__::func_495(), 150f);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.4f);
	__LIB_0__::func_424(1);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("biff"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(__LIB_15__::func_957(24), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(__LIB_15__::func_957(32), true);
	iLocal_1848 = __LIB_13__::func_804(2);
	func_570();
	if (__LIB_0__::func_323())
	{
		if (__LIB_0__::func_344() > 0 && __LIB_0__::func_344() < 11)
		{
			iLocal_1774 = __LIB_0__::func_344();
			if (Global_94618 == 1)
			{
				iLocal_1774++;
				if (iLocal_1774 < 11)
				{
					if (iLocal_1774 == 1)
					{
						__LIB_0__::func_427(24.4835f, -2536.4578f, 5.041f, 55.2078f, 1, 0);
						iLocal_2317 = 3;
					}
					else if (iLocal_1774 == 2)
					{
						__LIB_0__::func_427(24.4835f, -2536.4578f, 5.041f, 55.2078f, 1, 0);
						iLocal_2317 = 3;
					}
					else if (iLocal_1774 == 3)
					{
						__LIB_0__::func_427(-61.5066f, -2525.512f, 5.0101f, 56.9516f, 1, 0);
						iLocal_2317 = 4;
					}
					else if (iLocal_1774 == 4)
					{
						__LIB_0__::func_427(-125.5439f, -2421.8813f, 5.0005f, 49.08f, 1, 0);
						iLocal_2317 = 5;
					}
					else if (iLocal_1774 == 5)
					{
						__LIB_0__::func_427(-88.8838f, -2451.5679f, 5.0175f, 317.2729f, 1, 0);
						iLocal_2317 = 6;
					}
					else if (iLocal_1774 == 6)
					{
						__LIB_0__::func_427(-50.2985f, -2403.9036f, 5.0003f, 191.216f, 1, 0);
						iLocal_2317 = 7;
					}
					else if (iLocal_1774 == 7)
					{
						__LIB_0__::func_427(-114.5969f, -2406.8113f, 22.2282f, 359.8527f, 1, 0);
						iLocal_2317 = 8;
					}
					else if (iLocal_1774 == 8)
					{
						__LIB_0__::func_427(-120.9023f, -2411.2688f, 5.0007f, 195.5543f, 1, 0);
						iLocal_2317 = 9;
					}
					else if (iLocal_1774 == 9)
					{
						__LIB_0__::func_427(479.0352f, -3050.491f, 5.0937f, 0.7722f, 1, 0);
						iLocal_2317 = 10;
					}
					else if (iLocal_1774 == 10)
					{
						iLocal_2317 = 11;
						__LIB_0__::func_427(-1153.4308f, -1517.1697f, 9.6327f, 126.3936f, 1, 0);
						iLocal_2317 = 11;
					}
					else if (iLocal_1774 == 11)
					{
						iLocal_2317 = 11;
						__LIB_0__::func_427(-1153.4308f, -1517.1697f, 9.6327f, 126.3936f, 1, 0);
						iLocal_2317 = 11;
					}
				}
				else
				{
					CAM::DO_SCREEN_FADE_IN(250);
					iLocal_2317 = 11;
				}
			}
			else if (iLocal_1774 == 0)
			{
				__LIB_0__::func_427(-1156.4092f, -1523.9283f, 3.2957f, 323.2638f, 1, 0);
				iLocal_2317 = 2;
			}
			else if (iLocal_1774 == 2)
			{
				__LIB_0__::func_427(24.4835f, -2536.4578f, 5.041f, 55.2078f, 1, 0);
				iLocal_2317 = 3;
			}
			else if (iLocal_1774 == 3)
			{
				__LIB_0__::func_427(-61.5066f, -2525.512f, 5.0101f, 56.9516f, 1, 0);
				iLocal_2317 = 4;
			}
			else if (iLocal_1774 == 4)
			{
				__LIB_0__::func_427(-125.5439f, -2421.8813f, 5.0005f, 49.08f, 1, 0);
				iLocal_2317 = 5;
			}
			else if (iLocal_1774 == 5)
			{
				__LIB_0__::func_427(-88.8838f, -2451.5679f, 5.0175f, 317.2729f, 1, 0);
				iLocal_2317 = 6;
			}
			else if (iLocal_1774 == 6)
			{
				__LIB_0__::func_427(-50.2985f, -2403.9036f, 5.0003f, 191.216f, 1, 0);
				iLocal_2317 = 7;
			}
			else if (iLocal_1774 == 7)
			{
				__LIB_0__::func_427(-114.5969f, -2406.8113f, 22.2282f, 359.8527f, 1, 0);
				iLocal_2317 = 8;
			}
			else if (iLocal_1774 == 8)
			{
				__LIB_0__::func_427(-120.9023f, -2411.2688f, 5.0007f, 195.5543f, 1, 0);
				iLocal_2317 = 9;
			}
			else if (iLocal_1774 == 9)
			{
				__LIB_0__::func_427(479.0352f, -3050.491f, 5.0937f, 0.7722f, 1, 0);
				iLocal_2317 = 10;
			}
		}
		else if (iLocal_1774 == 0)
		{
			if (Global_94618 == 1)
			{
				iLocal_2317 = 3;
			}
			else
			{
				iLocal_2317 = 2;
			}
		}
		else
		{
			iLocal_2317 = 1;
		}
	}
	else
	{
		iLocal_2317 = 1;
	}
	if (iLocal_2317 != 1)
	{
		while (!iLocal_1807)
		{
			SYSTEM::WAIT(0);
			func_814(iLocal_2317);
		}
	}
	iLocal_1807 = 0;
}

void func_814(int iParam0)//Position - 0x9BBBA
{
	int iVar0;
	if (!iLocal_1806)
	{
		if (iLocal_1874 == 1)
		{
			__LIB_16__::func_928(500);
		}
		if (__LIB_0__::func_77(0))
		{
			__LIB_0__::func_366(0);
		}
		PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		__LIB_12__::func_849(23, 1);
		func_861(1, 0);
		HUD::CLEAR_PRINTS();
		if (iParam0 != 1)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		PED::ADD_SCENARIO_BLOCKING_AREA(18.38092f, -2524.4602f, 10.000374f, 10.180921f, -2534.4602f, 4.800374f, false, true, true, true);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(38.31939f, -3161.031f, 509.77576f) - Vector(43f, 240f, 87.25f), Vector(38.31939f, -3161.031f, 509.77576f) + Vector(43f, 240f, 87.25f), false, true, true, true);
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1712.584f, 3304.912f, 41.96f, 13f, 13.6f, 3.7f, 15.578f, false, 7);
		PED::ADD_SCENARIO_BLOCKING_AREA(18.38092f, -2524.4602f, 10.000374f, 10.180921f, -2534.4602f, 4.800374f, false, true, true, true);
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-107f, -2415.304f, 5.381f, 16.4f, 15.3f, 1.6f, -1.619f, false, 7);
		PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-53.081f, -2415.703f, 5.119f, 16.4f, 15.3f, 1.6f, 1.584f, false, 7);
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(8.000994f, -2415.8008f, -73.98793f) - Vector(3.25f, 8f, 43.25f), Vector(8.000994f, -2415.8008f, -73.98793f) + Vector(3.25f, 8f, 43.25f), false, true, true, true);
		MISC::CLEAR_AREA(Local_2058, 1000f, true, true, false, false);
		MISC::CLEAR_AREA(Local_2066, 1000f, true, true, false, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		iLocal_1841[0] = 0;
		iLocal_1841[1] = 0;
		iLocal_1841[2] = 0;
		iLocal_2020 = 0;
		iLocal_1759 = 0;
		iLocal_1778 = 0;
		iLocal_1809 = 0;
		iLocal_1821 = 0;
		iLocal_1819 = 0;
		bLocal_1872 = true;
		iLocal_1762 = 0;
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			iLocal_1856[iVar0] = 0;
			iVar0++;
		}
		iLocal_1805 = 0;
		iLocal_1870 = 0;
		iLocal_1871 = 0;
		iLocal_1855 = 0;
		bLocal_1872 = true;
		__LIB_0__::func_424(1);
		__LIB_0__::func_552(0);
		iLocal_1806 = 1;
	}
	switch (iLocal_2020)
	{
		case 0:
			func_710();
			func_831(1);
			if (iParam0 == 1)
			{
				if (func_734(2, 1))
				{
					iLocal_2020++;
				}
			}
			else if (iParam0 == 2)
			{
				if (func_734(2, 1))
				{
					while (((!func_405(6, Local_2060, fLocal_2031) || !func_405(7, Local_2061, fLocal_2032)) || !func_405(5, -1155.02f, -1522.81f, 3.3397f, 38.4f)) || !func_565(8))
					{
						SYSTEM::WAIT(0);
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						func_824();
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						func_824();
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 3)
			{
				if (func_734(2, 1))
				{
					while (((!func_565(8) || !func_405(5, 21.3604f, -2534.8997f, 5.0505f, 55.3357f)) || !func_405(6, Local_2060, fLocal_2031)) || !func_405(7, Local_2061, fLocal_2032))
					{
						SYSTEM::WAIT(0);
					}
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(24));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("biff"));
					func_821(joaat("forklift"));
					STREAMING::REQUEST_ANIM_DICT("misslsdhs");
					func_824();
					if (!PED::IS_PED_INJURED(iLocal_2041))
					{
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2044, 1, false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2042, iLocal_2044, 1);
								}
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2044, 0, false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2041, iLocal_2044, 0);
								}
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2044, true, true, false);
								MISC::CLEAR_AREA(12.2127f, -2531.0344f, 5.0509f, 100f, true, true, true, false);
								PED::SET_PED_NON_CREATION_AREA(Vector(5.0509f, -2531.0344f, 12.2127f) - Vector(10f, 10f, 10f), Vector(5.0509f, -2531.0344f, 12.2127f) + Vector(10f, 10f, 10f));
							}
						}
					}
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(iLocal_2044, -1, 1);
						func_824();
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2044, -1, false))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, -1);
							}
						}
						STREAMING::LOAD_SCENE(21.3604f, -2534.8997f, 5.0505f);
						func_824();
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 4)
			{
				if (func_734(2, 1))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks1");
					TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
					TASK::REQUEST_WAYPOINT_RECORDING("docksplayer1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("biff"));
					func_821(joaat("forklift"));
					func_824();
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 5)
			{
				if (func_734(2, 1))
				{
					while (!func_405(2, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("biff"));
					func_821(joaat("forklift"));
					func_824();
					Local_1962[0 /*16*/].f_4 = 8;
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 6)
			{
				if (func_734(2, 1))
				{
					while (!func_405(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_14");
					AUDIO::START_AUDIO_SCENE("DH_1_HANDLER_START");
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("biff"));
					func_821(joaat("forklift"));
					func_821(joaat("prop_contr_03b_ld"));
					func_824();
					Local_1962[0 /*16*/].f_4 = 8;
					iLocal_1790 = 0;
					Local_2071 = { -53.02f, -2416.04f, 14.75f };
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 7)
			{
				if (func_734(2, 1))
				{
					while (!func_405(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(2, "AWDocks1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1trevor_crane");
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("biff"));
					func_821(joaat("forklift"));
					func_821(joaat("hauler"));
					func_821(joaat("docktrailer"));
					func_824();
					Local_1962[0 /*16*/].f_4 = 8;
					Local_2071 = { -53.02f, -2416.04f, 14.75f };
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 8)
			{
				if (func_734(2, 1))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					while (!func_405(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("hauler"));
					func_821(joaat("docktrailer"));
					func_824();
					Local_1962[0 /*16*/].f_4 = 8;
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 9)
			{
				if (func_734(2, 1))
				{
					while (!func_405(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("biff"));
					func_821(joaat("forklift"));
					func_821(joaat("biff"));
					func_821(joaat("hauler"));
					func_821(joaat("docktrailer"));
					func_824();
					Local_1962[0 /*16*/].f_4 = 8;
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						STREAMING::LOAD_SCENE(-120.9023f, -2411.2688f, 5.0007f);
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 10)
			{
				if (func_734(2, 1))
				{
					while (!func_405(3, 0f, 0f, 0f, 0))
					{
						SYSTEM::WAIT(0);
					}
					while (!func_565(4))
					{
						SYSTEM::WAIT(0);
					}
					while (!func_565(12))
					{
						SYSTEM::WAIT(0);
					}
					func_821(joaat("S_M_Y_BlackOps_01"));
					func_821(joaat("S_M_M_DockWork_01"));
					func_821(__LIB_15__::func_957(32));
					func_821(joaat("biff"));
					func_821(joaat("hauler"));
					func_821(joaat("docktrailer"));
					func_824();
					Local_1962[0 /*16*/].f_4 = 8;
					if (__LIB_0__::func_324())
					{
						__LIB_0__::func_433(0, -1, 1);
						iLocal_2020++;
					}
					else
					{
						func_822(iParam0);
						iLocal_2020++;
					}
				}
			}
			else if (iParam0 == 11)
			{
				if (__LIB_0__::func_324())
				{
					__LIB_0__::func_433(0, -1, 1);
					iLocal_2020++;
				}
				else
				{
					STREAMING::LOAD_SCENE(-1153.4308f, -1517.1697f, 9.6327f);
					func_822(iParam0);
					iLocal_2020++;
				}
			}
			break;
		case 1:
			if (func_820())
			{
				if (func_819("AWDocks1"))
				{
					if (iParam0 == 1)
					{
						iLocal_2020++;
					}
					else if (iParam0 == 2)
					{
						if (func_734(2, 1))
						{
							func_566();
							if ((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2041) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2042)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
							{
								iLocal_2020++;
							}
						}
					}
					else if (iParam0 == 3)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
						{
							func_818(&iLocal_2041, __LIB_15__::func_957(32), Local_2060, fLocal_2031, 1, joaat("WEAPON_UNARMED"), 1, "FLOYD", 3);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
						{
							func_818(&iLocal_2042, __LIB_15__::func_957(24), Local_2061, fLocal_2032, 1, joaat("WEAPON_UNARMED"), 1, "WADE", 4);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
						{
							func_405(5, Local_2066, 55.2078f);
						}
						else if (func_603())
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2054[0]))
							{
								iLocal_2054[0] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), Local_2066, true, true, false);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2055[0]))
							{
								iLocal_2055[0] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), Local_2066, true, true, false);
								func_566();
							}
							else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2043))
							{
								if (!PED::IS_PED_INJURED(iLocal_2043))
								{
									STREAMING::REQUEST_ANIM_DICT("misslsdhsclipboard@base");
									if (STREAMING::HAS_ANIM_DICT_LOADED("misslsdhsclipboard@base") && STREAMING::HAS_ANIM_DICT_LOADED("misslsdhs"))
									{
										if (!PED::IS_PED_INJURED(iLocal_2041) && !PED::IS_PED_INJURED(iLocal_2042))
										{
											if ((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2041) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_2042)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
											{
												PED::CLEAR_ALL_PED_PROPS(iLocal_2043);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2055[0], iLocal_2043, PED::GET_PED_BONE_INDEX(iLocal_2043, 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2054[0], iLocal_2043, PED::GET_PED_BONE_INDEX(iLocal_2043, 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true, 0);
												ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_2054[0], iLocal_2043, true);
												TASK::TASK_PLAY_ANIM(iLocal_2043, "misslsdhsclipboard@base", "base", 1000f, -8f, -1, 1, 0f, false, false, false);
												__LIB_0__::func_222(&Local_48, 1, iLocal_2043, "GATEGUARD", 0, 1);
												PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_2043, false);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2043, false, false);
												iLocal_2020++;
											}
										}
									}
								}
							}
						}
					}
					else if (iParam0 == 4)
					{
						if (((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksplayer1")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								func_818(&iLocal_2041, __LIB_15__::func_957(32), -63.91f, -2523.12f, 5.011f, 58.62f, 1, joaat("WEAPON_UNARMED"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
							{
								while (!func_405(5, Local_2069, 56f))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (func_603())
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
								}
								iLocal_2020++;
							}
						}
					}
					else if (iParam0 == 5)
					{
						if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks3"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								func_818(&iLocal_2041, __LIB_15__::func_957(32), -58.7087f, -2524.6753f, 5.011f, 191.0631f, 1, joaat("WEAPON_UNARMED"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
							{
								while (!func_405(5, Local_2069, 56f))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
							{
								func_483(&iLocal_2045, joaat("handler"), -129.77f, -2418.28f, 6.24f, 183.085f, -1, 1f, 1);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2045, 0);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_2045, false);
							}
							else if (func_603())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_1968[0 /*16*/]))
								{
									STREAMING::REQUEST_MODEL(Local_1968[0 /*16*/].f_2);
									if (STREAMING::HAS_MODEL_LOADED(Local_1968[0 /*16*/].f_2))
									{
										Local_1968[0 /*16*/] = func_817(Local_1968[0 /*16*/].f_2, Local_1968[0 /*16*/].f_7, Local_1968[0 /*16*/].f_10, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
									}
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
									if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@start_idle"))
									{
										STREAMING::REQUEST_MODEL(joaat("p_cs_clipboard"));
										if (STREAMING::HAS_MODEL_LOADED(joaat("p_cs_clipboard")))
										{
											if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2054[1]))
											{
												iLocal_2054[1] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), -131.08f, -2423.25f, 8f, true, true, false);
											}
											else
											{
												STREAMING::REQUEST_MODEL(joaat("prop_pencil_01"));
												if (STREAMING::HAS_MODEL_LOADED(joaat("prop_pencil_01")))
												{
													if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2055[1]))
													{
														iLocal_2055[1] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), -131.08f, -2423.25f, 8f, true, true, false);
													}
													else if (ENTITY::DOES_ENTITY_EXIST(Local_1968[0 /*16*/]))
													{
														if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2055[1]))
														{
															if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2055[1], Local_1968[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_1968[0 /*16*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
															}
														}
														else if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2054[1]))
														{
															if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
															{
																ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2054[1], Local_1968[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_1968[0 /*16*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
															}
														}
														else
														{
															if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
															{
																VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_2044, false);
															}
															iLocal_2020++;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else if (iParam0 == 6)
					{
						if ((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2")) && STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_14"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								func_818(&iLocal_2041, __LIB_15__::func_957(32), -129.77f, -2418.28f, 6.24f, 191.0631f, 1, joaat("WEAPON_UNARMED"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
							{
								while (!func_405(5, Local_2069, 56f))
								{
									SYSTEM::WAIT(0);
								}
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
							{
								func_483(&iLocal_2045, joaat("handler"), -88.8838f, -2451.5679f, 5.0175f, 317.2729f, -1, 1f, 1);
								VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2045, 0);
								VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_2045, false);
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2045, -1, false))
									{
										PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, -1);
									}
								}
								else if (func_603())
								{
									iLocal_2020++;
								}
							}
						}
					}
					else if (iParam0 == 7)
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1trevor_crane"))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
								{
									func_818(&iLocal_2041, __LIB_15__::func_957(32), -120.65f, -2422.97f, 5f, -38.16f, 1, joaat("WEAPON_UNARMED"), 1, "FLOYD", 3);
								}
								else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
								{
									while (!func_405(5, Local_2069, 56f))
									{
										SYSTEM::WAIT(0);
									}
								}
								else if (func_603())
								{
									iLocal_2020++;
								}
							}
						}
					}
					else if (iParam0 == 8)
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								func_818(&iLocal_2041, __LIB_15__::func_957(32), -145.1769f, -2472.315f, 5.031f, fLocal_2031, 1, joaat("WEAPON_UNARMED"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
							{
								func_483(&iLocal_2047, joaat("hauler"), -117.9839f, -2416.6272f, 5.0003f, 91.3366f, -1, 0, 1);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
								{
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_2047, 0, 0);
									func_483(&iLocal_2052, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2047, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_2047), -1, 0, 1);
									VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, false);
								}
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
								{
									if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
									}
									else
									{
										if (!PED::IS_PED_INJURED(iLocal_2041))
										{
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
											{
												if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2047, 0, false))
												{
													PED::SET_PED_INTO_VEHICLE(iLocal_2041, iLocal_2047, 0);
												}
											}
										}
										if (func_603())
										{
											iLocal_2020++;
										}
										ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
									}
								}
							}
						}
					}
					else if (iParam0 == 9)
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
							{
								func_818(&iLocal_2041, __LIB_15__::func_957(32), -145.1769f, -2472.315f, 5.031f, fLocal_2031, 1, joaat("WEAPON_UNARMED"), 1, "FLOYD", 3);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
							{
								func_483(&iLocal_2047, joaat("hauler"), -116.3106f, -2415.3901f, 5.0005f, 88.7066f, -1, 0, 1);
							}
							else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
								{
									VEHICLE::SET_VEHICLE_COLOURS(iLocal_2047, 0, 0);
									func_483(&iLocal_2052, joaat("docktrailer"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2047, -0.3f, -9.5f, -0.25f), ENTITY::GET_ENTITY_HEADING(iLocal_2047), -1, 0, 1);
									VEHICLE::SET_VEHICLE_EXTRA(iLocal_2052, 1, false);
								}
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
								{
									if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
									{
										VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_2047, iLocal_2052, 1f);
									}
									else if (!PED::IS_PED_INJURED(iLocal_2041))
									{
										if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2047, 0, false))
										{
											PED::SET_PED_INTO_VEHICLE(iLocal_2041, iLocal_2047, 0);
										}
										if (func_603())
										{
											STREAMING::REQUEST_IPL("pcranecont");
											iLocal_2020++;
										}
									}
								}
							}
						}
					}
					else if (iParam0 == 10)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2048))
						{
							func_483(&iLocal_2048, joaat("tiptruck"), 465.8751f, -3037.0837f, 5.0686f, 126.3433f, -1, 1f, 1);
						}
						else
						{
							iLocal_2020++;
						}
					}
					else if (iParam0 == 11)
					{
						if (__LIB_0__::func_324())
						{
							__LIB_0__::func_433(0, -1, 1);
							iLocal_2020++;
						}
						else
						{
							func_822(iParam0);
							iLocal_2020++;
						}
					}
				}
			}
			break;
		case 2:
			if (iParam0 > 1)
			{
				func_566();
			}
			if (iParam0 > 3)
			{
				__LIB_0__::func_635(2, PLAYER::PLAYER_PED_ID());
				__LIB_0__::func_635(3, PLAYER::PLAYER_PED_ID());
				__LIB_0__::func_483(1, PLAYER::PLAYER_PED_ID(), 0);
			}
			if (iParam0 != 2 || iParam0 != 1)
			{
				iLocal_2021 = 0;
				if (!__LIB_0__::func_323())
				{
					func_822(iParam0);
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			if (iParam0 == 1)
			{
				iLocal_2021 = 0;
				iLocal_2317 = 1;
				func_816();
			}
			else if (iParam0 == 2)
			{
				iLocal_2021 = 0;
				iLocal_2317 = 2;
				if (iLocal_1874 == 1)
				{
				}
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				func_816();
			}
			else if (iParam0 == 3)
			{
				iLocal_2317 = 3;
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				func_816();
			}
			else if (iParam0 == 4)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_2041, joaat("MotionState_Walk"), false, 1, false);
				}
				iLocal_2317 = 4;
				func_816();
			}
			else if (iParam0 == 5)
			{
				func_604();
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_2045, -1, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, -1);
					}
				}
				iLocal_2317 = 5;
				func_816();
			}
			else if (iParam0 == 6)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				iLocal_2317 = 6;
				func_816();
			}
			else if (iParam0 == 7)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				iLocal_2317 = 7;
				func_816();
			}
			else if (iParam0 == 8)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				iLocal_2317 = 8;
				CAM::STOP_GAMEPLAY_HINT(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				SYSTEM::SETTIMERA(0);
				func_816();
			}
			else if (iParam0 == 9)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				iLocal_2317 = 9;
				func_816();
			}
			else if (iParam0 == 10)
			{
				STREAMING::REQUEST_IPL("Talklaugh_Pipe");
				func_604();
				func_815();
				iLocal_2317 = 10;
				func_816();
			}
			else if (iParam0 == 11)
			{
				func_604();
				func_815();
				iLocal_2317 = 11;
				func_816();
			}
			break;
	}
}

void func_815()//Position - 0x9D2CC
{
	int iVar0;
	if (iLocal_1877 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_1877 - 1))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED(uLocal_1878[iVar0]))
			{
				STREAMING::REMOVE_ANIM_DICT(uLocal_1878[iVar0]);
			}
			iVar0++;
		}
	}
	iLocal_1877 = 0;
}

void func_816()//Position - 0x9D30E
{
	func_336();
	iLocal_1807 = 1;
}

int func_817(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x9D31E
{
	int iVar0;
	if (__LIB_0__::func_86(Param1))
	{
	}
	iVar0 = PED::CREATE_PED(iParam7, iParam0, Param1, fParam2, true, true);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, true, true);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam6);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam4);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam4, 0);
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam5);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam3);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
	return iVar0;
}

void func_818(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8)//Position - 0x9D388
{
	STREAMING::REQUEST_MODEL(iParam1);
	if (STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam3, true, true);
		}
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			WEAPON::GIVE_WEAPON_TO_PED(*iParam0, iParam5, 800, true, true);
			PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(*iParam0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, iLocal_151);
			ENTITY::SET_ENTITY_PROOFS(*iParam0, false, false, false, false, false, false, false, false);
			ENTITY::SET_ENTITY_HEALTH(*iParam0, 200, 0);
			if (iParam6 == 1)
			{
			}
			PED::SET_PED_AS_ENEMY(*iParam0, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iParam4 == 1)
			{
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				__LIB_0__::func_222(&Local_48, iParam8, *iParam0, sParam7, 0, 1);
			}
		}
	}
}

int func_819(char* sParam0)//Position - 0x9D455
{
	int iVar0;
	if (iLocal_66 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_66 - 1))
		{
			if (!MISC::IS_STRING_NULL(sParam0))
			{
				if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_67[iVar0], sParam0))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_820()//Position - 0x9D49A
{
	int iVar0;
	if (iLocal_64 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iLocal_65[iVar0]))
			{
				SYSTEM::WAIT(0);
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

void func_821(int iParam0)//Position - 0x9D4D8
{
	int iVar0;
	bool bVar1;
	STREAMING::REQUEST_MODEL(iParam0);
	if (iLocal_64 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_64 - 1))
		{
			if (iLocal_65[iVar0] == iParam0)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		if (!bVar1)
		{
			iLocal_65[iLocal_64] = iParam0;
			iLocal_64++;
		}
	}
	else if (iLocal_64 == 0)
	{
		iLocal_65[0] = iParam0;
		iLocal_64++;
	}
}

void func_822(int iParam0)//Position - 0x9D544
{
	if (iParam0 == 0 || iParam0 == 2)
	{
		Local_2058 = { Local_2059 };
		fLocal_2030 = fLocal_2029;
	}
	else if (iParam0 == 3)
	{
		Local_2058 = { 24.4835f, -2536.4578f, 5.041f };
		fLocal_2030 = 55.2078f;
	}
	else if (iParam0 == 4)
	{
		Local_2058 = { -61.5066f, -2525.512f, 5.0101f };
		fLocal_2030 = 56.9516f;
	}
	else if (iParam0 == 5)
	{
		Local_2058 = { -125.5439f, -2421.8813f, 5.0005f };
		fLocal_2030 = 49.08f;
	}
	else if (iParam0 == 6)
	{
		Local_2058 = { -88.8838f, -2451.5679f, 5.0175f };
		fLocal_2030 = 317.2729f;
	}
	else if (iParam0 == 7)
	{
		Local_2058 = { -50.2985f, -2403.9036f, 5.0003f };
		fLocal_2030 = 191.216f;
	}
	else if (iParam0 == 8)
	{
		Local_2058 = { -114.5969f, -2406.8113f, 22.2282f };
		fLocal_2030 = 359.8527f;
	}
	else if (iParam0 == 9)
	{
		Local_2058 = { -120.9023f, -2411.2688f, 5.0007f };
		fLocal_2030 = 195.5543f;
	}
	else if (iParam0 == 10)
	{
		Local_2058 = { -120.9023f, -2411.2688f, 5.0007f };
		fLocal_2030 = 195.5543f;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		}
		__LIB_16__::func_929(Local_2058, fLocal_2030, 1);
	}
}

void func_824()//Position - 0x9D71C
{
	iLocal_1873[0] = 0;
	iLocal_1873[1] = 0;
	iLocal_1873[2] = 0;
}

void func_831(bool bParam0)//Position - 0x9D91A
{
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_01", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_02", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_03", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_04", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_05", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_06", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_07", bParam0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LS_DOCKS_RADIO_08", bParam0);
}

void func_837()//Position - 0x9DADA
{
	if (Local_1962[0 /*16*/].f_4 > 0 && Local_1962[0 /*16*/].f_4 < 5)
	{
		if (!func_487("MERRYWEATHER SHOUT"))
		{
			if (__LIB_0__::func_680())
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Local_1962[1 /*16*/], true))
				{
					__LIB_0__::func_640(Local_1962[1 /*16*/], "GENERIC_INSULT_HIGH", 24);
					func_484("MERRYWEATHER SHOUT", 1);
					iLocal_2352 = MISC::GET_GAME_TIMER();
				}
			}
			else if (!PED::IS_PED_DEAD_OR_DYING(Local_1962[2 /*16*/], true))
			{
				__LIB_0__::func_640(Local_1962[2 /*16*/], "GENERIC_INSULT_HIGH", 24);
				func_484("MERRYWEATHER SHOUT", 1);
				iLocal_2352 = MISC::GET_GAME_TIMER();
			}
		}
		else if (__LIB_0__::func_611(&iLocal_2352, MISC::GET_RANDOM_INT_IN_RANGE(7000, 14000)))
		{
			func_484("MERRYWEATHER SHOUT", 0);
		}
	}
	if (Local_1962[0 /*16*/].f_4 < 7)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
		{
			if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
			{
				if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1962[0 /*16*/]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1962[0 /*16*/])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_1962[0 /*16*/]))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1962[0 /*16*/], -4f, true);
					TASK::TASK_SMART_FLEE_COORD(Local_1962[0 /*16*/], -294.5143f, -2497.9805f, 5.0015f, 100f, -1, false, false);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1962[1 /*16*/], -4f, true);
					TASK::TASK_COMBAT_PED(Local_1962[1 /*16*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1962[2 /*16*/], -4f, true);
					TASK::TASK_COMBAT_PED(Local_1962[2 /*16*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					Local_1962[0 /*16*/].f_4 = 7;
				}
			}
		}
	}
	if (iLocal_1972[11])
	{
		func_839(0);
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]))
		{
			if (iLocal_2317 > 2 && iLocal_2317 < 5)
			{
				STREAMING::REQUEST_MODEL(Local_1962[0 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_1962[1 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_1962[2 /*16*/].f_2);
				if ((STREAMING::HAS_MODEL_LOADED(Local_1962[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_1962[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1962[2 /*16*/].f_2))
				{
					Local_1962[0 /*16*/] = func_817(Local_1962[0 /*16*/].f_2, -294.5143f, -2497.9805f, 5.0015f, 87.3385f, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1962[0 /*16*/], true);
					PED::SET_PED_CAPSULE(Local_1962[0 /*16*/], 0.4f);
					Local_1962[1 /*16*/] = func_817(Local_1962[1 /*16*/].f_2, -295.4659f, -2496.8794f, 5.0015f, 349.2262f, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1962[1 /*16*/], true);
					Local_1962[2 /*16*/] = func_817(Local_1962[2 /*16*/].f_2, -294.3614f, -2495.9116f, 5.0015f, 181.5108f, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1962[2 /*16*/], true);
					func_838(&Local_1962, "Blackwater with dockworker");
				}
			}
		}
		else if (iLocal_1972[11])
		{
			if (Local_1962[0 /*16*/].f_4 > 3)
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
			switch (Local_1962[0 /*16*/].f_4)
			{
				case 0:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_2012, true) < 60f)
					{
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
						AUDIO::INIT_SYNCH_SCENE_AUDIO_WITH_POSITION("LSDHS_IG_13", Local_2012);
						Local_1962[0 /*16*/].f_4++;
					}
					break;
				case 1:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
					if (AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("LSDHS_IG_13", 0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@start_idle"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_2012, true) < 60f)
							{
								if ((ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
								{
									if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
									{
										if (!PED::IS_PED_INJURED(Local_1965[0 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_1965[0 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1965[0 /*16*/]));
										}
										if (!PED::IS_PED_INJURED(Local_1965[1 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_1965[1 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1965[1 /*16*/]));
										}
										if (!PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_1965[2 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1965[2 /*16*/]));
										}
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_a");
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_b");
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_c");
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_d");
										if (!PED::IS_PED_INJURED(Local_1967[0 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_1967[0 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1967[0 /*16*/]));
										}
										if (!PED::IS_PED_INJURED(Local_1967[1 /*16*/]))
										{
											TASK::CLEAR_PED_TASKS(Local_1967[1 /*16*/]);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1967[1 /*16*/]));
										}
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_5@base");
										iLocal_1927 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2012, Local_2012.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[0 /*16*/], iLocal_1927, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_dockworker", 2f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[1 /*16*/], iLocal_1927, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard1", 2f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[2 /*16*/], iLocal_1927, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard2", 2f, -8f, 1, 16, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1927, true);
										STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@main_action");
										Local_1962[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				case 2:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@main_action");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@main_action"))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_2012) < 50f)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_1962[0 /*16*/]))
									{
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1927))
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1927) > 0.99f)
											{
												iLocal_1928 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2012, Local_2012.f_3, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[0 /*16*/], iLocal_1928, "missheistdockssetup1ig_13@main_action", "guard_beatup_mainaction_dockworker", 2f, -8f, 1, 16, 1000f, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[1 /*16*/], iLocal_1928, "missheistdockssetup1ig_13@main_action", "guard_beatup_mainaction_guard1", 2f, -8f, 1, 16, 1000f, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[2 /*16*/], iLocal_1928, "missheistdockssetup1ig_13@main_action", "guard_beatup_mainaction_guard2", 2f, -8f, 1, 16, 1000f, 0);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1928, false);
												if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@start_idle"))
												{
													STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@start_idle");
												}
												AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_1928);
												STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
												Local_1962[0 /*16*/].f_4 = 4;
											}
										}
									}
								}
							}
						}
					}
					break;
				case 3:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1928))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1928) >= 1f)
									{
										iLocal_1929 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2012, Local_2012.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[0 /*16*/], iLocal_1929, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_dockworker", 2f, -1000f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[1 /*16*/], iLocal_1929, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard1", 2f, -1000f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[2 /*16*/], iLocal_1929, "missheistdockssetup1ig_13@kick_idle", "guard_beatup_kickidle_guard2", 2f, -1000f, 1, 16, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1929, false);
										if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@main_action"))
										{
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@main_action");
										}
										STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
										Local_1962[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				case 4:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1928))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1928) > 0.99f)
									{
										if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@kick_idle"))
										{
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@kick_idle");
										}
										if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@main_action"))
										{
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@main_action");
										}
										iLocal_1930 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2012, Local_2012.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[0 /*16*/], iLocal_1930, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_dockworker", 2f, -1000f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[1 /*16*/], iLocal_1930, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_guard1", 2f, -4f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[2 /*16*/], iLocal_1930, "missheistdockssetup1ig_13@exit", "guard_beatup_exit_guard2", 2f, -4f, 1, 16, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1930, false);
										Local_1962[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				case 5:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1930))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1930) > 0.99f)
									{
										iLocal_1931 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2012, Local_2012.f_3, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1962[0 /*16*/], iLocal_1931, "missheistdockssetup1ig_13@exit", "GUARD_Beatup_RollIdle_DockWorker", 2f, -8f, 1, 16, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1931, true);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1962[1 /*16*/], -4f, true);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1962[2 /*16*/], -4f, true);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
										TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000, 0, 2);
										TASK::TASK_PAUSE(0, 1000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -116.125f, -2386.3333f, 5f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
										TASK::TASK_PERFORM_SEQUENCE(Local_1962[1 /*16*/], iLocal_2056);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
										if (!PED::IS_PED_INJURED(Local_1962[1 /*16*/]))
										{
											PED::SET_PED_CONFIG_FLAG(Local_1962[1 /*16*/], 132, true);
										}
										PED::SET_PED_KEEP_TASK(Local_1962[1 /*16*/], true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1962[1 /*16*/]));
										TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -68.8121f, -2431.8848f, 5.0005f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
										TASK::TASK_PERFORM_SEQUENCE(Local_1962[2 /*16*/], iLocal_2056);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_2056);
										if (!PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
										{
											PED::SET_PED_CONFIG_FLAG(Local_1962[2 /*16*/], 132, true);
										}
										PED::SET_PED_KEEP_TASK(Local_1962[2 /*16*/], true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1962[2 /*16*/]));
										Local_1962[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				case 6:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_13@exit");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_13@exit"))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
						{
							if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1931))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1931) > 0.99f)
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1962[0 /*16*/], -4f, true);
										TASK::CLEAR_PED_TASKS(Local_1962[0 /*16*/]);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1962[0 /*16*/]));
										Local_1962[0 /*16*/].f_4++;
									}
								}
							}
						}
					}
					break;
				case 7:
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_13@exit");
					Local_1962[0 /*16*/].f_4++;
					iLocal_1972[11] = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_1962[0 /*16*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1962[0 /*16*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1962[1 /*16*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1962[1 /*16*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1962[2 /*16*/]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1962[2 /*16*/]));
					}
					break;
				}
			}
	}
}

void func_838(int iParam0, char* sParam1)//Position - 0x9E810
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*16*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*16*/], true);
			if (!(iParam0[iVar0 /*16*/])->f_3 == 1)
			{
				(iParam0[iVar0 /*16*/])->f_3 = 1;
			}
			(iParam0[iVar0 /*16*/])->f_4 = 0;
			if ((iParam0[iVar0 /*16*/])->f_5 != 0)
			{
				(iParam0[iVar0 /*16*/])->f_5 = 0;
			}
			sParam1 = sParam1;
		}
		iVar0++;
	}
}

void func_839(int iParam0)//Position - 0x9E880
{
	switch (iParam0)
	{
		case 0:
			if ((!PED::IS_PED_INJURED(Local_1962[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1962[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1962[2 /*16*/]))
			{
				if (Local_1962[0 /*16*/].f_4 == 0)
				{
				}
			}
			break;
		case 1:
			if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
			{
			}
			break;
	}
}

void func_840()//Position - 0x9E909
{
	int iVar0;
	if (!WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if (iLocal_2317 != 8)
			{
				if (iVar0 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_77(0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 262 /*INPUT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 261 /*INPUT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 45 /*INPUT_RELOAD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 13 /*INPUT_WEAPON_WHEEL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
}

void func_843()//Position - 0x9EAC1
{
	if (!PED::IS_PED_INJURED(iLocal_2040[15]))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_2040[15], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(iLocal_2040[15]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2055[3]))
			{
				ENTITY::DETACH_ENTITY(iLocal_2055[3], true, true);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2054[3]))
			{
				ENTITY::DETACH_ENTITY(iLocal_2054[3], true, true);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_2043))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_2043, PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(iLocal_2043))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2055[0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_2055[0], true, true);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2054[0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_2054[0], true, true);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_2040[16]))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_2040[16], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(iLocal_2040[16]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2055[2]))
			{
				ENTITY::DETACH_ENTITY(iLocal_2055[2], true, true);
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_2054[2]))
			{
				ENTITY::DETACH_ENTITY(iLocal_2054[2], true, true);
			}
		}
	}
}

int func_844()//Position - 0x9EBE9
{
	int iVar0;
	iVar0 = iLocal_2317 + 1;
	switch (iLocal_2023)
	{
		case 0:
			if (iVar0 == 0)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 1)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 2)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 3)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks4");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks5");
				iLocal_2023++;
			}
			else if (iVar0 == 4)
			{
				func_604();
				TASK::REQUEST_WAYPOINT_RECORDING("floyddocks1");
				TASK::REQUEST_WAYPOINT_RECORDING("docksplayer1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDock1");
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
				iLocal_2023++;
			}
			else if (iVar0 == 5)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks3");
				iLocal_2023++;
			}
			else if (iVar0 == 6)
			{
				func_604();
				func_821(joaat("prop_dock_rtg_ld"));
				func_821(joaat("p_dock_rtg_ld_spdr"));
				func_821(joaat("p_dock_rtg_ld_cab"));
				func_821(joaat("prop_container_ld"));
				func_821(joaat("p_dock_rtg_ld_wheel"));
				func_821(joaat("p_dock_rtg_ld_wheel"));
				func_821(joaat("prop_cntrdoor_ld_l"));
				func_821(joaat("prop_cntrdoor_ld_r"));
				iLocal_2023++;
			}
			else if (iVar0 == 7)
			{
				func_604();
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "AWDocks1");
				func_821(joaat("biff"));
				func_821(joaat("hauler"));
				func_821(joaat("docktrailer"));
				iLocal_2023++;
			}
			else if (iVar0 == 8)
			{
				func_604();
				func_821(joaat("biff"));
				func_821(joaat("hauler"));
				func_821(joaat("docktrailer"));
				iLocal_2023++;
			}
			else if (iVar0 == 9)
			{
				func_604();
				func_821(joaat("hauler"));
				func_821(joaat("docktrailer"));
				func_821(joaat("tiptruck"));
				func_821(joaat("S_M_Y_BlackOps_01"));
				func_821(joaat("S_M_M_DockWork_01"));
				iLocal_2023++;
			}
			break;
		case 1:
			if (func_820() && func_819("AWDocks1"))
			{
				iLocal_2023++;
			}
			break;
		case 2:
			if (iVar0 == 0)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 1)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 2)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 3)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 4)
			{
				if (((TASK::GET_IS_WAYPOINT_RECORDING_LOADED("floyddocks1") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksplayer1")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDock1")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
				{
					iLocal_2023++;
				}
			}
			else if (iVar0 == 5)
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks3"))
				{
					iLocal_2023++;
				}
			}
			else if (iVar0 == 6)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 7)
			{
				iLocal_2023++;
			}
			else if (iVar0 == 8)
			{
				func_815();
				func_604();
				iLocal_2023++;
			}
			else if (iVar0 == 9)
			{
				iLocal_2023++;
			}
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_845(int* iParam0, bool bParam1, bool bParam2)//Position - 0x9EEF2
{
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			TASK::CLEAR_PED_TASKS(*iParam0);
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, 0f, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_6))
		{
			ENTITY::DETACH_ENTITY(iParam0->f_6, true, true);
			if (bParam2)
			{
				OBJECT::DELETE_OBJECT(&(iParam0->f_6));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_6));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (bParam2)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		TASK::REMOVE_COVER_POINT(iParam0->f_11);
	}
	if (bParam1)
	{
		iParam0->f_3 = 0;
		iParam0->f_4 = 0;
		iParam0->f_5 = 0;
	}
}

void func_846(int* iParam0, bool bParam1, bool bParam2)//Position - 0x9EFA4
{
	if (bParam2)
	{
		VEHICLE::DELETE_VEHICLE(iParam0);
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (bParam1)
	{
		iParam0->f_2 = 0;
		if (iParam0->f_3 != 0)
		{
			iParam0->f_3 = 0;
		}
	}
}

void func_847(struct<3> Param0)//Position - 0x9EFD7
{
	STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_BlackOps_01"));
	if (!func_852(1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1961[0 /*16*/]))
		{
			if (iLocal_2317 > 2 && iLocal_2317 < 4)
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
				STREAMING::REQUEST_MODEL(Local_1961[0 /*16*/].f_2);
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@new_structure") && STREAMING::HAS_MODEL_LOADED(Local_1961[0 /*16*/].f_2))
				{
					Local_1961[0 /*16*/] = func_817(Local_1961[0 /*16*/].f_2, Local_1961[0 /*16*/].f_12, Local_1961[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					__LIB_0__::func_222(&Local_48, 6, Local_1961[0 /*16*/], "SUPERVISOR1", 0, 1);
					func_838(&Local_1961, "Arrive at docks");
					Local_1974[1 /*3*/] = { -61.3f, -2523.86f, 6.16f };
					fLocal_1975[1] = -31.41f;
					Local_1976[1 /*3*/] = { -60.5f, -2523.52f, 6.16f };
					fLocal_1977[1] = 59.25f;
				}
			}
		}
		else if (iLocal_1972[1])
		{
			switch (Local_1961[0 /*16*/].f_4)
			{
				case 0:
					if ((ENTITY::DOES_ENTITY_EXIST(Local_1961[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_2042)) && ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
					{
						if ((!PED::IS_PED_INJURED(Local_1961[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_2042)) && !PED::IS_PED_INJURED(iLocal_2041))
						{
							if (func_570())
							{
								iLocal_1920 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1979, Local_1979.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1961[0 /*16*/], iLocal_1920, "missheistdockssetup1ig_2_p1@new_structure", "walk_down_supervisor", 8f, -8f, 1, 16, 1000f, 0);
								Local_1961[0 /*16*/].f_4++;
							}
						}
					}
					break;
				case 1:
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1920) > 0.1f)
					{
						if (!func_487("DS1_03b"))
						{
							if (!PED::IS_PED_INJURED(Local_1961[0 /*16*/]))
							{
								__LIB_0__::func_709(Local_1961[0 /*16*/], "DH1_BXAB", "SUPERVISOR", 4);
								func_484("DS1_03b", 1);
							}
						}
					}
					if ((ENTITY::DOES_ENTITY_EXIST(Local_1961[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_2042)) && ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
					{
						if ((!PED::IS_PED_INJURED(Local_1961[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_2042)) && !PED::IS_PED_INJURED(iLocal_2041))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1920))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1920) == 1f)
								{
									iLocal_1920 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1979, Local_1979.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1961[0 /*16*/], iLocal_1920, "missheistdockssetup1ig_2_p1@new_structure", "wait_loop_supervisor", 4f, -8f, 1, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1920, true);
									Local_1961[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				case 2:
					if ((ENTITY::DOES_ENTITY_EXIST(Local_1961[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_2042)) && ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
					{
						if ((!PED::IS_PED_INJURED(Local_1961[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_2042)) && !PED::IS_PED_INJURED(iLocal_2041))
						{
							if (__LIB_16__::func_931(iLocal_2042, Local_1976[1 /*3*/], fLocal_1977[1], 0.2f, 0.2f, 2f, 360f, 1) && __LIB_16__::func_931(iLocal_2041, Local_1974[1 /*3*/], fLocal_1975[1], 0.2f, 0.2f, 2f, 360f, 1))
							{
								if (!func_487("DS1_03c"))
								{
									if (!__LIB_0__::func_75())
									{
										if (!__LIB_13__::func_755(&Local_2123, 1))
										{
											if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_03c", 8, 0, 0, 0))
											{
												RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 7f, 4);
												func_484("DS1_03c", 1);
											}
										}
									}
								}
								else
								{
									iLocal_1921 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1979, Local_1979.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1961[0 /*16*/], iLocal_1921, "missheistdockssetup1ig_2_p1@new_structure", "push_guy_back_supervisor", 4f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2042, iLocal_1921, "missheistdockssetup1ig_2_p1@new_structure", "push_guy_back_wade", 4f, -8f, 1, 16, 4f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1921, "missheistdockssetup1ig_2_p1@new_structure", "push_guy_back_floyd", 4f, -8f, 1, 16, 4f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1921, false);
									Local_1961[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				case 3:
					if ((ENTITY::DOES_ENTITY_EXIST(Local_1961[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_2042)) && ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
					{
						if ((!PED::IS_PED_INJURED(Local_1961[0 /*16*/]) && !PED::IS_PED_INJURED(iLocal_2042)) && !PED::IS_PED_INJURED(iLocal_2041))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1921))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1921) > 0.7f)
								{
									OBJECT::SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(joaat("p_cut_door_02"), -63.19f, -2519.27f, 7.79f, true, 0f, 0f, 0f);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@end_idle");
									Local_1961[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				case 4:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@end_idle"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
						{
							if (!PED::IS_PED_INJURED(iLocal_2041))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1921))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1921) == 1f)
									{
										if (iLocal_2317 == 3)
										{
											iLocal_1921 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1979, Local_1979.f_3, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1921, "missheistdockssetup1ig_2_p1@end_idle", "supervisor_exitdoor_endidle_floyd", 8f, -4f, 1, 0, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1921, true);
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
											iLocal_1978[1] = 1;
											Local_1961[0 /*16*/].f_4++;
										}
										else if (iLocal_2317 == 4)
										{
											if (iLocal_2021 < 3)
											{
												iLocal_1921 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1979, Local_1979.f_3, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(iLocal_2041, iLocal_1921, "missheistdockssetup1ig_2_p1@end_idle", "supervisor_exitdoor_endidle_floyd", 8f, -4f, 1, 0, 1000f, 0);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1921, true);
												STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
												iLocal_1978[1] = 1;
												Local_1961[0 /*16*/].f_4++;
											}
										}
									}
								}
							}
						}
					}
					break;
				case 5:
					break;
				}
			}
	}
	if (!func_852(2))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1971[0 /*16*/]))
		{
			if (iLocal_2317 > 2)
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
				STREAMING::REQUEST_MODEL(Local_1971[0 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_1971[1 /*16*/].f_2);
				STREAMING::REQUEST_MODEL(Local_1971[2 /*16*/].f_2);
				if (((STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@start_idle") && STREAMING::HAS_MODEL_LOADED(Local_1971[0 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1971[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1971[2 /*16*/].f_2))
				{
					Local_1971[0 /*16*/] = func_817(Local_1971[0 /*16*/].f_2, Local_1971[0 /*16*/].f_12, Local_1971[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					Local_1971[1 /*16*/] = func_817(Local_1971[1 /*16*/].f_2, Local_1971[1 /*16*/].f_12, Local_1971[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					Local_1971[2 /*16*/] = func_817(Local_1971[2 /*16*/].f_2, Local_1971[2 /*16*/].f_12, Local_1971[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					func_838(&Local_1971, "Floyd Grabs Package");
				}
			}
		}
		else
		{
			PED::SET_PED_CAPSULE(Local_1971[0 /*16*/], 0.4f);
			PED::SET_PED_CAPSULE(Local_1971[1 /*16*/], 0.7f);
			PED::SET_PED_CAPSULE(Local_1971[2 /*16*/], 0.4f);
			switch (Local_1971[0 /*16*/].f_4)
			{
				case 0:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@start_idle"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1971[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1971[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1971[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
						{
							if (((!PED::IS_PED_INJURED(Local_1971[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1971[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1971[2 /*16*/])) && !PED::IS_PED_INJURED(iLocal_2041))
							{
								iLocal_1947 = PED::CREATE_SYNCHRONIZED_SCENE(-88.341f, -2502.575f, 5.011f, 0f, 0f, -32.844f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1971[0 /*16*/], iLocal_1947, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker1", 8f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1971[1 /*16*/], iLocal_1947, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker2", 8f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1971[2 /*16*/], iLocal_1947, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker3", 8f, -8f, 1, 16, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1947, true);
								Local_1971[0 /*16*/].f_4++;
							}
						}
					}
					break;
				case 1:
					if (iLocal_2317 == 4)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1971[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1971[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1971[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
						{
							if (func_487("FLOYD SEEN BOAT"))
							{
								if (((!PED::IS_PED_INJURED(Local_1971[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1971[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1971[2 /*16*/])) && !PED::IS_PED_INJURED(iLocal_2041))
								{
									if ((!ENTITY::IS_ENTITY_ON_SCREEN(Local_1971[0 /*16*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_1971[1 /*16*/])) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_1971[2 /*16*/]))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1971[0 /*16*/], -4f, true);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1971[1 /*16*/], -4f, true);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_1971[2 /*16*/], -4f, true);
										TASK::CLEAR_PED_TASKS(Local_1971[0 /*16*/]);
										TASK::CLEAR_PED_TASKS(Local_1971[1 /*16*/]);
										TASK::CLEAR_PED_TASKS(Local_1971[2 /*16*/]);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1971[0 /*16*/]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1971[1 /*16*/]));
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1971[2 /*16*/]));
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
										iLocal_1978[2] = 1;
									}
								}
							}
						}
					}
					break;
				}
			}
	}
	if (!func_852(5))
	{
		if (iLocal_1972[5])
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1965[0 /*16*/]))
			{
				if (iLocal_2317 > 2)
				{
					STREAMING::REQUEST_MODEL(Local_1965[0 /*16*/].f_2);
					STREAMING::REQUEST_MODEL(Local_1965[1 /*16*/].f_2);
					STREAMING::REQUEST_MODEL(Local_1965[2 /*16*/].f_2);
					if ((STREAMING::HAS_MODEL_LOADED(Local_1965[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_1965[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1965[2 /*16*/].f_2))
					{
						Local_1965[0 /*16*/] = func_817(Local_1965[0 /*16*/].f_2, Local_1965[0 /*16*/].f_12, Local_1965[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
						Local_1965[1 /*16*/] = func_817(Local_1965[1 /*16*/].f_2, Local_1965[1 /*16*/].f_12, Local_1965[1 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 1, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 3, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 8, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_1965[1 /*16*/], 11, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(Local_1965[1 /*16*/], 0, 0, 0, false);
						Local_1965[2 /*16*/] = func_817(Local_1965[2 /*16*/].f_2, Local_1965[2 /*16*/].f_12, Local_1965[2 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
						func_838(&Local_1965, "Working on pipe");
					}
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_1995, true) < 100f)
			{
				switch (Local_1965[0 /*16*/].f_4)
				{
					case 0:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@base");
						Local_1965[0 /*16*/].f_4++;
						break;
					case 1:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@base"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_1965[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1965[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1965[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
								{
									iLocal_1922 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[0 /*16*/], iLocal_1922, "missheistdockssetup1ig_10@base", "talk_pipe_base_worker1", 1000f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[1 /*16*/], iLocal_1922, "missheistdockssetup1ig_10@base", "talk_pipe_base_worker2", 1000f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[2 /*16*/], iLocal_1922, "missheistdockssetup1ig_10@base", "talk_pipe_base_worker3", 1000f, -8f, 1, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1922, true);
									Local_1965[0 /*16*/].f_4++;
								}
							}
						}
						break;
					case 2:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_1995, true) < 20f)
						{
							STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@laugh");
							if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@laugh"))
							{
								if ((ENTITY::DOES_ENTITY_EXIST(Local_1965[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1965[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1965[2 /*16*/]))
								{
									if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
									{
										iLocal_1923 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[0 /*16*/], iLocal_1923, "missheistdockssetup1ig_10@laugh", "laugh_pipe_worker1", 8f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[1 /*16*/], iLocal_1923, "missheistdockssetup1ig_10@laugh", "laugh_pipe_worker2", 8f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[2 /*16*/], iLocal_1923, "missheistdockssetup1ig_10@laugh", "laugh_pipe_worker3", 8f, -8f, 1, 16, 1000f, 0);
										STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@laugh");
										STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@idle_b");
										Local_1965[0 /*16*/].f_4++;
									}
								}
							}
						}
						break;
					case 3:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@idle_b"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_1965[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1965[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1965[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
								{
									PED::SET_PED_CAPSULE(Local_1965[0 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_1965[1 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_1965[2 /*16*/], 0.5f);
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1923))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1923) == 1f)
										{
											iLocal_1924 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[0 /*16*/], iLocal_1924, "missheistdockssetup1ig_10@idle_b", "talk_pipe_b_worker1", 1000f, -8f, 1, 16, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[1 /*16*/], iLocal_1924, "missheistdockssetup1ig_10@idle_b", "talk_pipe_b_worker2", 1000f, -8f, 1, 16, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[2 /*16*/], iLocal_1924, "missheistdockssetup1ig_10@idle_b", "talk_pipe_b_worker3", 1000f, -8f, 1, 16, 1000f, 0);
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_b");
											STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@idle_c");
											Local_1965[0 /*16*/].f_4++;
										}
									}
								}
							}
						}
						break;
					case 4:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@idle_c"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_1965[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1965[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1965[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
								{
									PED::SET_PED_CAPSULE(Local_1965[0 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_1965[1 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_1965[2 /*16*/], 0.5f);
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1924))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1924) == 1f)
										{
											iLocal_1925 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[0 /*16*/], iLocal_1925, "missheistdockssetup1ig_10@idle_c", "talk_pipe_c_worker1", 1000f, -8f, 1, 16, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[1 /*16*/], iLocal_1925, "missheistdockssetup1ig_10@idle_c", "talk_pipe_c_worker2", 1000f, -8f, 1, 16, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[2 /*16*/], iLocal_1925, "missheistdockssetup1ig_10@idle_c", "talk_pipe_c_worker3", 1000f, -8f, 1, 16, 1000f, 0);
											STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_c");
											STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_10@idle_d");
											Local_1965[0 /*16*/].f_4++;
										}
									}
								}
							}
						}
						break;
					case 5:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_10@idle_d"))
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_1965[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1965[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1965[2 /*16*/]))
							{
								if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
								{
									PED::SET_PED_CAPSULE(Local_1965[0 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_1965[1 /*16*/], 0.5f);
									PED::SET_PED_CAPSULE(Local_1965[2 /*16*/], 0.5f);
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1925))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1925) == 1f)
										{
											iLocal_1926 = PED::CREATE_SYNCHRONIZED_SCENE(-68.32f, -2531.518f, 5.06f, 0f, 0f, 3.64f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[0 /*16*/], iLocal_1926, "missheistdockssetup1ig_10@idle_d", "talk_pipe_d_worker1", 1000f, -8f, 1, 16, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[1 /*16*/], iLocal_1926, "missheistdockssetup1ig_10@idle_d", "talk_pipe_d_worker2", 1000f, -8f, 1, 16, 1000f, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_1965[2 /*16*/], iLocal_1926, "missheistdockssetup1ig_10@idle_d", "talk_pipe_d_worker3", 1000f, -8f, 1, 16, 1000f, 0);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1926, true);
											Local_1965[0 /*16*/].f_4++;
										}
									}
								}
							}
						}
						break;
					case 6:
						if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
						{
							if ((!ENTITY::IS_ENTITY_ON_SCREEN(Local_1965[0 /*16*/]) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_1965[1 /*16*/])) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_1965[2 /*16*/]))
							{
								if (!PED::IS_PED_INJURED(Local_1965[0 /*16*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_1965[0 /*16*/]);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1965[0 /*16*/]));
								}
								if (!PED::IS_PED_INJURED(Local_1965[1 /*16*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_1965[1 /*16*/]);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1965[1 /*16*/]));
								}
								if (!PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_1965[2 /*16*/]);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1965[2 /*16*/]));
								}
								STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_10@idle_d");
								iLocal_1978[5] = 1;
							}
						}
						break;
					}
				}
			}
	}
	if (iLocal_1972[3])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1970[0 /*16*/]))
		{
			STREAMING::REQUEST_MODEL(Local_1970[0 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1970[1 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1970[2 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1970[3 /*16*/].f_2);
			if (((STREAMING::HAS_MODEL_LOADED(Local_1970[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_1970[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1970[2 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1970[3 /*16*/].f_2))
			{
				Local_1970[0 /*16*/] = func_817(Local_1970[0 /*16*/].f_2, Local_1970[0 /*16*/].f_12, Local_1970[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1970[1 /*16*/] = func_817(Local_1970[1 /*16*/].f_2, Local_1970[1 /*16*/].f_12, Local_1970[1 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1970[2 /*16*/] = func_817(Local_1970[2 /*16*/].f_2, Local_1970[2 /*16*/].f_12, Local_1970[2 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1970[3 /*16*/] = func_817(Local_1970[3 /*16*/].f_2, Local_1970[3 /*16*/].f_12, Local_1970[3 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				func_838(&Local_1970, "Gantry guys dynamic");
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_1983, true) < 100f)
		{
			switch (Local_1970[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@base");
					Local_1970[0 /*16*/].f_4++;
					break;
				case 1:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@base");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@base"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1970[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1970[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[3 /*16*/]))
						{
							if (((!PED::IS_PED_INJURED(Local_1970[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1970[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[2 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[3 /*16*/]))
							{
								iLocal_1932 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1983, Local_1983.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[0 /*16*/], iLocal_1932, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker1", 1000f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[1 /*16*/], iLocal_1932, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker2", 1000f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[2 /*16*/], iLocal_1932, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker3", 1000f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[3 /*16*/], iLocal_1932, "missheistdockssetup1ig_12@base", "TALK_Gantry_Idle_Base_Worker4", 1000f, -8f, 1, 16, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1932, true);
								Local_1970[0 /*16*/].f_4++;
							}
						}
					}
					break;
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_1983, true) < 50f)
					{
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@idle_a"))
						{
							if (((ENTITY::DOES_ENTITY_EXIST(Local_1970[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1970[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[3 /*16*/]))
							{
								if (((!PED::IS_PED_INJURED(Local_1970[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1970[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[2 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[3 /*16*/]))
								{
									iLocal_1933 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1983, Local_1983.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[0 /*16*/], iLocal_1933, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker1", 4f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[1 /*16*/], iLocal_1933, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker2", 4f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[2 /*16*/], iLocal_1933, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker3", 4f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[3 /*16*/], iLocal_1933, "missheistdockssetup1ig_12@idle_a", "TALK_Gantry_Idle_A_Worker4", 4f, -8f, 1, 16, 1000f, 0);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_b");
									Local_1970[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				case 3:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_b");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@idle_b"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1970[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1970[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[3 /*16*/]))
						{
							if (((!PED::IS_PED_INJURED(Local_1970[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1970[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[2 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[3 /*16*/]))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1933) == 1f)
								{
									iLocal_1934 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1983, Local_1983.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[0 /*16*/], iLocal_1934, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker1", 8f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[1 /*16*/], iLocal_1934, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker2", 8f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[2 /*16*/], iLocal_1934, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker3", 8f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[3 /*16*/], iLocal_1934, "missheistdockssetup1ig_12@idle_b", "TALK_Gantry_Idle_B_Worker4", 8f, -8f, 1, 16, 1000f, 0);
									STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@idle_c");
									Local_1970[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				case 4:
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_b");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@idle_c"))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1970[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1970[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1970[3 /*16*/]))
						{
							if (((!PED::IS_PED_INJURED(Local_1970[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1970[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[2 /*16*/])) && !PED::IS_PED_INJURED(Local_1970[3 /*16*/]))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1934) == 1f)
								{
									iLocal_1935 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1983, Local_1983.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[0 /*16*/], iLocal_1935, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker1", 8f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[1 /*16*/], iLocal_1935, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker2", 8f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[2 /*16*/], iLocal_1935, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker3", 8f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1970[3 /*16*/], iLocal_1935, "missheistdockssetup1ig_12@idle_c", "TALK_Gantry_Idle_C_Worker4", 8f, -8f, 1, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1935, true);
									Local_1970[0 /*16*/].f_4++;
								}
							}
						}
					}
					break;
				case 5:
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_a");
					STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_12@idle_c");
					break;
				}
			}
	}
	if (iLocal_1972[4])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1964[4 /*16*/]))
		{
			STREAMING::REQUEST_MODEL(Local_1964[0 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1964[1 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1964[2 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1964[3 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1964[4 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(joaat("buffalo"));
			if (((((STREAMING::HAS_MODEL_LOADED(Local_1964[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_1964[1 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1964[2 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1964[3 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1964[4 /*16*/].f_2)) && STREAMING::HAS_MODEL_LOADED(Local_1960[0 /*8*/].f_1))
			{
				Local_1960[0 /*8*/] = func_851(joaat("buffalo"), Local_1960[0 /*8*/].f_4, Local_1960[0 /*8*/].f_7);
				if (!Local_1960[0 /*8*/].f_2)
				{
					Local_1960[0 /*8*/].f_2 = 1;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_1960[0 /*8*/].f_1);
				Local_1964[0 /*16*/] = func_817(Local_1964[0 /*16*/].f_2, Local_1964[0 /*16*/].f_7, Local_1964[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1964[1 /*16*/] = func_817(Local_1964[1 /*16*/].f_2, Local_1964[1 /*16*/].f_7, Local_1964[1 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1964[2 /*16*/] = func_817(Local_1964[2 /*16*/].f_2, Local_1964[2 /*16*/].f_7, Local_1964[2 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1964[3 /*16*/] = func_817(Local_1964[3 /*16*/].f_2, Local_1964[3 /*16*/].f_7, Local_1964[3 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1964[4 /*16*/] = func_817(Local_1964[4 /*16*/].f_2, Local_1964[4 /*16*/].f_7, Local_1964[4 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				func_838(&Local_1964, "Show off car");
			}
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1960[0 /*8*/], false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(Local_1960[0 /*8*/], true), true) < 100f)
			{
				if (Local_1964[0 /*16*/].f_4 > 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(Local_1960[0 /*8*/], true), true) > 20f)
					{
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_b");
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@base");
						Local_1964[0 /*16*/].f_4 = 1;
					}
				}
				switch (Local_1964[0 /*16*/].f_4)
				{
					case 0:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@base");
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1960[0 /*8*/], false))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_1960[0 /*8*/], false);
							ENTITY::FREEZE_ENTITY_POSITION(Local_1960[0 /*8*/], true);
						}
						Local_1964[0 /*16*/].f_4++;
						break;
					case 1:
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1showcar@base"))
						{
							if ((((ENTITY::DOES_ENTITY_EXIST(Local_1964[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1964[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[3 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[4 /*16*/]))
							{
								if ((((!PED::IS_PED_INJURED(Local_1964[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1964[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[2 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[3 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[4 /*16*/]))
								{
									iLocal_1936 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1991, Local_1991.f_3, 2);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1960[0 /*8*/], false))
									{
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1936, Local_1960[0 /*8*/], -1);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[0 /*16*/], iLocal_1936, "missheistdockssetup1showcar@base", "base_1", 1000f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[1 /*16*/], iLocal_1936, "missheistdockssetup1showcar@base", "base_2", 1000f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[2 /*16*/], iLocal_1936, "missheistdockssetup1showcar@base", "base_3", 1000f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[3 /*16*/], iLocal_1936, "missheistdockssetup1showcar@base", "base_4", 1000f, -8f, 1, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[4 /*16*/], iLocal_1936, "missheistdockssetup1showcar@base", "base_5", 1000f, -8f, 1, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1936, true);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1964[0 /*16*/], Local_1960[0 /*8*/], false);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1964[1 /*16*/], Local_1960[0 /*8*/], false);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1964[2 /*16*/], Local_1960[0 /*8*/], false);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1964[3 /*16*/], Local_1960[0 /*8*/], false);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1964[4 /*16*/], Local_1960[0 /*8*/], false);
									Local_1964[0 /*16*/].f_4++;
								}
							}
						}
						break;
					case 2:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(Local_1960[0 /*8*/], true), true) < 15f)
						{
							STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_a");
							Local_1964[0 /*16*/].f_4++;
						}
						break;
					case 3:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_a");
						if (((((STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1showcar@idle_a") && ENTITY::DOES_ENTITY_EXIST(Local_1964[0 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[3 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[4 /*16*/]))
						{
							if ((((!PED::IS_PED_INJURED(Local_1964[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1964[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[2 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[3 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[4 /*16*/]))
							{
								iLocal_1937 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1991, Local_1991.f_3, 2);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1960[0 /*8*/], false))
								{
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1937, Local_1960[0 /*8*/], -1);
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[0 /*16*/], iLocal_1937, "missheistdockssetup1showcar@idle_a", "idle_a_1", 1000f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[1 /*16*/], iLocal_1937, "missheistdockssetup1showcar@idle_a", "idle_a_2", 1000f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[2 /*16*/], iLocal_1937, "missheistdockssetup1showcar@idle_a", "idle_a_3", 1000f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[3 /*16*/], iLocal_1937, "missheistdockssetup1showcar@idle_a", "idle_a_4", 1000f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[4 /*16*/], iLocal_1937, "missheistdockssetup1showcar@idle_a", "idle_a_5", 1000f, -8f, 1, 16, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1937, true);
								STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
								STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_b");
								Local_1964[0 /*16*/].f_4++;
							}
						}
						break;
					case 4:
						STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1showcar@idle_b");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1showcar@idle_b"))
						{
							if ((((ENTITY::DOES_ENTITY_EXIST(Local_1964[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1964[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[2 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[3 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1964[4 /*16*/]))
							{
								if ((((!PED::IS_PED_INJURED(Local_1964[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1964[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[2 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[3 /*16*/])) && !PED::IS_PED_INJURED(Local_1964[4 /*16*/]))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1937) == 1f)
									{
										iLocal_1938 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1991, Local_1991.f_3, 2);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1960[0 /*8*/], false))
										{
											PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_1938, Local_1960[0 /*8*/], -1);
										}
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[0 /*16*/], iLocal_1938, "missheistdockssetup1showcar@idle_b", "idle_b_1", 1000f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[1 /*16*/], iLocal_1938, "missheistdockssetup1showcar@idle_b", "idle_b_2", 1000f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[2 /*16*/], iLocal_1938, "missheistdockssetup1showcar@idle_b", "idle_b_3", 1000f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[3 /*16*/], iLocal_1938, "missheistdockssetup1showcar@idle_b", "idle_b_4", 1000f, -8f, 1, 16, 1000f, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_1964[4 /*16*/], iLocal_1938, "missheistdockssetup1showcar@idle_b", "idle_b_5", 1000f, -8f, 1, 16, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1938, true);
										Local_1964[0 /*16*/].f_4++;
									}
								}
							}
						}
						break;
					case 5:
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_b");
						STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
						Local_1964[0 /*16*/].f_4++;
						break;
				}
			}
			else
			{
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_b");
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1showcar@idle_a");
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1966[0 /*16*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1966[0 /*16*/].f_2);
		STREAMING::REQUEST_MODEL(joaat("prop_weld_torch"));
		if (STREAMING::HAS_MODEL_LOADED(Local_1966[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(joaat("prop_weld_torch")))
		{
			if (Local_1966[0 /*16*/].f_4 < 1)
			{
				Local_1966[0 /*16*/] = func_817(Local_1966[0 /*16*/].f_2, Local_1966[0 /*16*/].f_7, Local_1966[0 /*16*/].f_10, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1966[0 /*16*/].f_6 = OBJECT::CREATE_OBJECT(joaat("prop_weld_torch"), -110.56f, -2463.63f, 5.04f, true, true, false);
				PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1966[0 /*16*/], 16);
				func_838(&Local_1966, "Welder");
			}
		}
	}
	else if (iLocal_1972[6])
	{
		switch (Local_1966[0 /*16*/].f_4)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -102.1558f, -2475.921f, 5.0203f, 10f, 10f, 10f, false, true, 0))
				{
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_3@enter");
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_3@talk");
					Local_1966[0 /*16*/].f_4++;
				}
				break;
			case 1:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_3@enter"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1966[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1966[0 /*16*/]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_1966[0 /*16*/]))
							{
								iLocal_1944 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1999, Local_1999.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1966[0 /*16*/], iLocal_1944, "missheistdockssetup1ig_3@enter", "welding_enter_dockworker", 8f, -8f, 5, 16, 1000f, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_1966[0 /*16*/].f_6, Local_1966[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_1966[0 /*16*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@enter");
								Local_1966[0 /*16*/].f_4++;
							}
						}
					}
				}
				break;
			case 2:
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_3@talk"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1966[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1966[0 /*16*/]))
						{
							PED::SET_PED_CAPSULE(Local_1966[0 /*16*/], 0.4f);
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1944))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1944) == 1f)
								{
									iLocal_1944 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1999, Local_1999.f_3, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_1966[0 /*16*/], iLocal_1944, "missheistdockssetup1ig_3@talk", "oh_hey_vin_dockworker", 8f, -8f, 1, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1944, true);
									STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_3@talk");
									Local_1966[0 /*16*/].f_4++;
								}
							}
						}
					}
				}
				break;
			case 3:
				if (!PED::IS_PED_INJURED(Local_1966[0 /*16*/]))
				{
					PED::SET_PED_CAPSULE(Local_1966[0 /*16*/], 0.4f);
				}
				break;
			}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1967[0 /*16*/]))
	{
		STREAMING::REQUEST_MODEL(Local_1967[0 /*16*/].f_2);
		STREAMING::REQUEST_MODEL(Local_1967[1 /*16*/].f_2);
		if (STREAMING::HAS_MODEL_LOADED(Local_1967[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_1967[1 /*16*/].f_2))
		{
			if (Local_1967[0 /*16*/].f_4 < 0)
			{
				Local_1967[0 /*16*/] = func_817(Local_1967[0 /*16*/].f_2, Local_1967[0 /*16*/].f_7, Local_1967[0 /*16*/].f_10, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1967[1 /*16*/] = func_817(Local_1967[1 /*16*/].f_2, Local_1967[1 /*16*/].f_7, Local_1967[1 /*16*/].f_10, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				func_838(&Local_1967, "Dockworkers talking by crates");
			}
		}
	}
	else if (iLocal_1972[7])
	{
		if (Local_1967[0 /*16*/].f_4 == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_1967[0 /*16*/].f_7, true) < 20f)
			{
				Local_1967[0 /*16*/].f_4 = 1;
			}
			else
			{
				STREAMING::REMOVE_ANIM_DICT("missheistdockssetup1ig_5@base");
			}
		}
		switch (Local_1967[0 /*16*/].f_4)
		{
			case 0:
				break;
			case 1:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_5@base");
				Local_1967[0 /*16*/].f_4++;
				break;
			case 2:
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_5@base");
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_5@base"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_1967[1 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1967[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1967[1 /*16*/]) && !PED::IS_PED_INJURED(Local_1967[0 /*16*/]))
						{
							iLocal_1939 = PED::CREATE_SYNCHRONIZED_SCENE(-110.402f, -2481.259f, 6.018f, 0f, 0f, -122f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1967[0 /*16*/], iLocal_1939, "missheistdockssetup1ig_5@base", "workers_talking_base_dockworker1", 8f, -8f, 1, 16, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1939, true);
							iLocal_1940 = PED::CREATE_SYNCHRONIZED_SCENE(-109.253f, -2481.959f, 6.018f, 0f, 0f, 26.64f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_1967[1 /*16*/], iLocal_1940, "missheistdockssetup1ig_5@base", "workers_talking_base_dockworker2", 8f, -8f, 1, 16, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1940, true);
							Local_1967[0 /*16*/].f_4++;
						}
					}
				}
				break;
			case 3:
				break;
			}
	}
	if (iLocal_1972[8])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1968[0 /*16*/]))
		{
			if (iLocal_2317 > 2)
			{
				STREAMING::REQUEST_MODEL(Local_1968[0 /*16*/].f_2);
				if (STREAMING::HAS_MODEL_LOADED(Local_1968[0 /*16*/].f_2))
				{
					Local_1968[0 /*16*/] = func_817(Local_1968[0 /*16*/].f_2, Local_1968[0 /*16*/].f_7, Local_1968[0 /*16*/].f_10, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
					func_838(&Local_1968, "Supervisor A");
					PED::SET_PED_COMPONENT_VARIATION(Local_1968[0 /*16*/], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1968[0 /*16*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1968[0 /*16*/], 4, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_1968[0 /*16*/], 8, 0, 0, 0);
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_2003, true) < 50f)
		{
			switch (Local_1968[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_9@start_idle");
					Local_1968[0 /*16*/].f_4++;
					break;
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_9@start_idle"))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2054[1]))
						{
							iLocal_2054[1] = OBJECT::CREATE_OBJECT(joaat("p_cs_clipboard"), -131.08f, -2423.25f, 8f, true, true, false);
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2055[1]))
						{
							iLocal_2055[1] = OBJECT::CREATE_OBJECT(joaat("prop_pencil_01"), -131.08f, -2423.25f, 8f, true, true, false);
						}
						else if (ENTITY::DOES_ENTITY_EXIST(Local_1968[0 /*16*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2055[1], Local_1968[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_1968[0 /*16*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2054[1], Local_1968[0 /*16*/], PED::GET_PED_BONE_INDEX(Local_1968[0 /*16*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, false, false, false, 2, true, 0);
								TASK::TASK_PLAY_ANIM(Local_1968[0 /*16*/], "missheistdockssetup1ig_9@start_idle", "forklift_supervise_idlebase_supervisor", 8f, -8f, -1, 1, 0f, false, false, false);
								PED::SET_PED_CAN_RAGDOLL(Local_1968[0 /*16*/], true);
								Local_1968[0 /*16*/].f_4++;
							}
						}
					}
					break;
				case 2:
					break;
				}
			}
	}
	if (iLocal_1972[9])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1969[0 /*16*/]))
		{
			if (iLocal_2317 > 2 && iLocal_2317 < 5)
			{
				STREAMING::REQUEST_MODEL(Local_1969[0 /*16*/].f_2);
				if (STREAMING::HAS_MODEL_LOADED(Local_1969[0 /*16*/].f_2))
				{
					if (func_850(Local_2008))
					{
						Local_1969[0 /*16*/] = func_817(Local_1969[0 /*16*/].f_2, Local_1969[0 /*16*/].f_7, Local_1967[0 /*16*/].f_10, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
						func_838(&Local_1968, "Supervisor B");
					}
					else
					{
						func_848(9);
					}
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_2008, true) < 50f)
		{
			switch (Local_1969[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
					Local_1969[0 /*16*/].f_4++;
					break;
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@new_structure"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1969[0 /*16*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1969[0 /*16*/]))
							{
								iLocal_1943 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2008, Local_2008.f_3, 2);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1943, true);
								Local_1969[0 /*16*/].f_4++;
							}
						}
					}
					break;
				case 2:
					break;
				}
			}
	}
	if (iLocal_1972[12])
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1963[0 /*16*/]))
		{
			STREAMING::REQUEST_MODEL(Local_1963[0 /*16*/].f_2);
			STREAMING::REQUEST_MODEL(Local_1963[1 /*16*/].f_2);
			if (STREAMING::HAS_MODEL_LOADED(Local_1963[0 /*16*/].f_2) && STREAMING::HAS_MODEL_LOADED(Local_1963[1 /*16*/].f_2))
			{
				Local_1963[0 /*16*/] = func_817(Local_1963[0 /*16*/].f_2, Local_1963[0 /*16*/].f_12, Local_1963[0 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				Local_1963[1 /*16*/] = func_817(Local_1963[1 /*16*/].f_2, Local_1963[1 /*16*/].f_12, Local_1963[1 /*16*/].f_15, iLocal_151, 200, 0, joaat("WEAPON_UNARMED"), 26);
				func_838(&Local_1963, "Static Crane guys");
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Local_1987, true) < 100f)
		{
			switch (Local_1963[0 /*16*/].f_4)
			{
				case 0:
					STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_12@base");
					Local_1963[0 /*16*/].f_4++;
					break;
				case 1:
					if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_12@base"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1963[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1963[1 /*16*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1963[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1963[1 /*16*/]))
							{
								iLocal_1945 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1987, Local_1987.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1963[0 /*16*/], iLocal_1945, "missheistdockssetup1ig_12@base", "talk_gantry_idle_base_worker2", 8f, -8f, 1, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1963[1 /*16*/], iLocal_1945, "missheistdockssetup1ig_12@base", "talk_gantry_idle_base_worker1", 8f, -8f, 1, 16, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1945, true);
								Local_1963[0 /*16*/].f_4++;
							}
						}
					}
					break;
				case 2:
					break;
				}
			}
	}
}

void func_848(int iParam0)//Position - 0xA1EC7
{
	switch (iParam0)
	{
		case 1:
			if (!func_850(Local_1979))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_2_p1@new_structure");
				STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_2_p1@new_structure") && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1920))
					{
						uLocal_1973[0] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						uLocal_1973[1] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						uLocal_1973[2] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						iLocal_1946 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1979, Local_1979.f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[0], iLocal_1946, "missheistdockssetup1ig_2_p1@new_structure", "supervisor_exitdoor_startidle_supervisor", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[1], iLocal_1946, "missheistdockssetup1ig_2_p1@new_structure", "supervisor_exitdoor_startidle_wade", 8f, -8f, 0, 16, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[2], iLocal_1946, "missheistdockssetup1ig_2_p1@new_structure", "supervisor_exitdoor_startidle_floyd", 8f, -8f, 0, 16, 1000f, 0);
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_1973[0]))
						{
							Local_1961[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[0], true) };
							Local_1961[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[0]);
							PED::DELETE_PED(&(uLocal_1973[0]));
						}
						if (!PED::IS_PED_INJURED(uLocal_1973[1]))
						{
							Local_1976[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[1], true) };
							fLocal_1977[1] = ENTITY::GET_ENTITY_HEADING(uLocal_1973[1]);
							PED::DELETE_PED(&(uLocal_1973[1]));
						}
						if (!PED::IS_PED_INJURED(uLocal_1973[2]))
						{
							Local_1974[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[2], true) };
							fLocal_1975[1] = ENTITY::GET_ENTITY_HEADING(uLocal_1973[2]);
							PED::DELETE_PED(&(uLocal_1973[2]));
						}
						Local_1979.f_6 = 1;
					}
				}
			}
			break;
		case 5:
			if (!func_850(Local_1979))
			{
				STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1946))
					{
						uLocal_1973[0] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						uLocal_1973[1] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						uLocal_1973[2] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						iLocal_1946 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1995, Local_1995.f_3, 2);
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_1973[0]))
						{
							Local_1965[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[0], true) };
							Local_1965[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[0]);
							PED::DELETE_PED(&(uLocal_1973[0]));
						}
						if (!PED::IS_PED_INJURED(uLocal_1973[1]))
						{
							Local_1965[1 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[1], true) };
							Local_1965[1 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[1]);
							PED::DELETE_PED(&(uLocal_1973[1]));
						}
						if (!PED::IS_PED_INJURED(uLocal_1973[2]))
						{
							Local_1965[2 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[2], true) };
							Local_1965[2 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[2]);
							PED::DELETE_PED(&(uLocal_1973[2]));
						}
						Local_1995.f_6 = 1;
					}
				}
			}
			break;
		case 11:
			if (!func_850(Local_2012))
			{
				STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1946))
				{
					uLocal_1973[0] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
					uLocal_1973[1] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
					uLocal_1973[2] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
					iLocal_1946 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2012, Local_2012.f_3, 2);
				}
				else
				{
					if (!PED::IS_PED_INJURED(uLocal_1973[0]))
					{
						Local_1962[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[0], true) };
						Local_1962[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[0]);
						PED::DELETE_PED(&(uLocal_1973[0]));
					}
					if (!PED::IS_PED_INJURED(uLocal_1973[1]))
					{
						Local_1962[1 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[1], true) };
						Local_1962[1 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[1]);
						PED::DELETE_PED(&(uLocal_1973[1]));
					}
					if (!PED::IS_PED_INJURED(uLocal_1973[2]))
					{
						Local_1962[2 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[2], true) };
						Local_1962[2 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[2]);
						PED::DELETE_PED(&(uLocal_1973[2]));
					}
					Local_2012.f_6 = 1;
				}
			}
			break;
		case 2:
			if (!func_850(Local_2016))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_4@start_idle");
				STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_4@start_idle") && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1946))
					{
						uLocal_1973[0] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						uLocal_1973[1] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						uLocal_1973[2] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						uLocal_1973[3] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						iLocal_1946 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2016, Local_2016.f_3, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[0], iLocal_1946, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker1", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[1], iLocal_1946, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker2", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[2], iLocal_1946, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_DockWorker3", 8f, -8f, 0, 0, 1000f, 0);
						TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[3], iLocal_1946, "missheistdockssetup1ig_4@start_idle", "FLOYD_FellPackage_StartIdle_Floyd", 8f, -8f, 0, 16, 1000f, 0);
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_1973[0]))
						{
							Local_1971[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[0], true) };
							Local_1971[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[0]);
							PED::DELETE_PED(&(uLocal_1973[0]));
						}
						if (!PED::IS_PED_INJURED(uLocal_1973[1]))
						{
							Local_1971[1 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[1], true) };
							Local_1971[1 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[1]);
							PED::DELETE_PED(&(uLocal_1973[1]));
						}
						if (!PED::IS_PED_INJURED(uLocal_1973[2]))
						{
							Local_1971[2 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[2], true) };
							Local_1971[2 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[2]);
							PED::DELETE_PED(&(uLocal_1973[2]));
						}
						if (!PED::IS_PED_INJURED(uLocal_1973[3]))
						{
							Local_1974[2 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[3], true) };
							fLocal_1975[2] = ENTITY::GET_ENTITY_HEADING(uLocal_1973[3]);
							PED::DELETE_PED(&(uLocal_1973[3]));
						}
						Local_2016.f_6 = 1;
					}
				}
			}
			break;
		case 6:
			if (!func_850(Local_1999))
			{
				STREAMING::REQUEST_ANIM_DICT("missheistdockssetup1ig_3");
				STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
				if (STREAMING::HAS_ANIM_DICT_LOADED("missheistdockssetup1ig_3") && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01")))
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1946))
					{
						uLocal_1973[0] = func_849(joaat("S_M_M_DockWork_01"), -81.7436f, -2456.1165f, 5.0189f, 87.3373f, iLocal_151, 2000, 0, 26);
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_1973[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_1973[0]))
							{
								iLocal_1946 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1999, Local_1999.f_3, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(uLocal_1973[0], iLocal_1946, "missheistdockssetup1ig_3", "welding_enter_dockworker", 8f, -8f, 0, 0, 1000f, 0);
							}
						}
					}
					else
					{
						if (!PED::IS_PED_INJURED(uLocal_1973[0]))
						{
							Local_1966[0 /*16*/].f_12 = { ENTITY::GET_ENTITY_COORDS(uLocal_1973[0], true) };
							Local_1966[0 /*16*/].f_15 = ENTITY::GET_ENTITY_HEADING(uLocal_1973[0]);
							PED::DELETE_PED(&(uLocal_1973[0]));
						}
						Local_1999.f_6 = 1;
					}
				}
			}
			break;
	}
}

int func_849(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA27D8
{
	int iVar0;
	iVar0 = PED::CREATE_PED(iParam6, iParam0, Param1, fParam2, true, true);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam4);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam4, 0);
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam5);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, true, false);
	ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam3);
	return iVar0;
}

int func_850(struct<7> Param0)//Position - 0xA2824
{
	if (Param0.f_6)
	{
		return 1;
	}
	return 0;
}

int func_851(int iParam0, struct<3> Param1, float fParam2)//Position - 0xA283B
{
	int iVar0;
	iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam2, true, true, false);
	return iVar0;
}

int func_852(int iParam0)//Position - 0xA2856
{
	if (iLocal_1978[iParam0])
	{
		return 1;
	}
	return 0;
}

void func_853()//Position - 0xA286D
{
	switch (iLocal_1769)
	{
		case 0:
			if (iLocal_2317 == 2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
				{
					if (HUD::DOES_BLIP_EXIST(Local_2123.f_5))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 352.88464f, -2391.7583f, 8.183699f, 351.2024f, -2238.5288f, 12.79882f, 29f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 369.15298f, -2225.73f, 9.336354f, 342.83194f, -2223.6228f, 27.368328f, 86.5f, false, true, 0))
						{
							if (func_570())
							{
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_01a", 8, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
									iLocal_1769++;
								}
							}
						}
					}
				}
			}
			break;
		case 1:
			if (iLocal_2317 == 2)
			{
				iLocal_1769++;
			}
			break;
		case 2:
			if (iLocal_2317 == 3)
			{
				if (iLocal_2021 >= 4)
				{
					iLocal_1769++;
				}
			}
			break;
		case 3:
			iLocal_1769++;
			break;
		case 4:
			iLocal_1769++;
			break;
		case 5:
			iLocal_1769++;
			break;
		case 6:
			iLocal_1769++;
			break;
		case 7:
			iLocal_1769++;
			break;
		case 8:
			if (iLocal_2317 == 4)
			{
				if (iLocal_1876)
				{
					if (iLocal_2026 > 0)
					{
						if (func_570())
						{
							iLocal_1769++;
						}
					}
				}
			}
			break;
		case 9:
			if (iLocal_2317 == 5)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
					{
						if (func_570())
						{
							iLocal_1769++;
						}
					}
				}
			}
			break;
		case 10:
			if (iLocal_2317 == 5)
			{
				iLocal_1769++;
			}
			break;
		case 11:
			if (iLocal_2317 == 6)
			{
				if (func_570())
				{
					iLocal_1813 = 0;
					iLocal_1814 = 0;
					iLocal_1769++;
				}
			}
			break;
		case 12:
			if (iLocal_2317 == 7)
			{
				if (iLocal_2021 > 1)
				{
					if (func_570())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[14]))
						{
							if (!PED::IS_PED_INJURED(iLocal_2040[14]))
							{
								__LIB_0__::func_222(&Local_48, 8, iLocal_2040[14], "SIGNALMAN", 0, 1);
							}
						}
						else if (Local_48[8 /*10*/] != 0)
						{
							__LIB_0__::func_221(&Local_48, 8);
						}
						iLocal_1769++;
					}
				}
			}
			break;
		case 13:
			if (iLocal_2317 == 8)
			{
				if (iLocal_2021 == 2)
				{
					if (func_570())
					{
						if (!__LIB_0__::func_501("AW_TAKE_PHOTO", 0, 0))
						{
							if (func_570())
							{
								iLocal_1769++;
							}
						}
					}
				}
			}
			break;
		case 14:
			if (iLocal_2317 == 8)
			{
				if (iLocal_2021 == 4)
				{
					if (func_570())
					{
						iLocal_1769++;
					}
				}
			}
			break;
		case 15:
			if (iLocal_2317 == 8)
			{
				if (iLocal_2021 == 5)
				{
					if (func_570())
					{
						iLocal_1769++;
					}
				}
			}
			break;
		case 16:
			iLocal_1769++;
			break;
		case 17:
			if (iLocal_2317 == 9)
			{
				if (func_570())
				{
					iLocal_1769++;
				}
			}
			break;
		case 18:
			break;
	}
}

void func_854()//Position - 0xA2B9D
{
	switch (iLocal_1798)
	{
		case 0:
			if ((AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane", false, -1) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Stress", false, -1)) && AUDIO::REQUEST_AMBIENT_AUDIO_BANK("Crane_Impact_Sweeteners", false, -1))
			{
				iLocal_1798++;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2319[0 /*25*/], Local_2320.f_2) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2319[1 /*25*/], Local_2320.f_2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1797, "Strain_No_Container", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
						iLocal_1798++;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2319[0 /*25*/], Local_2320.f_2) || ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2319[1 /*25*/], Local_2320.f_2))
					{
						iLocal_1798++;
					}
				}
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2319[0 /*25*/]) && ENTITY::DOES_ENTITY_EXIST(Local_2319[1 /*25*/]))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2319[0 /*25*/], Local_2320.f_2) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_2319[1 /*25*/], Local_2320.f_2))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_1797, "Strain_No_Container", Local_2320.f_2, "CRANE_SOUNDS", false, 0);
						iLocal_1798 = 1;
					}
				}
			}
			break;
	}
}

void func_855()//Position - 0xA2D3A
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_1966[0 /*16*/]))
	{
		if (!PED::IS_PED_INJURED(Local_1966[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (__LIB_0__::func_611(&iLocal_1791, MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000)))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_2041, true), ENTITY::GET_ENTITY_COORDS(Local_1966[0 /*16*/], true), true) < 10f)
					{
						if (!PED::IS_PED_INJURED(Local_1966[0 /*16*/]))
						{
							__LIB_0__::func_709(Local_1966[0 /*16*/], "DH1_CRAA", "DOCKWORKER1", 6);
							iLocal_1791 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[5]))
	{
		if (!PED::IS_PED_INJURED(iLocal_2040[5]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_2040[5], true), true) < 10f)
			{
				if (!func_487("DH1_CUAA"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_2040[5]))
					{
						__LIB_0__::func_709(iLocal_2040[5], "DH1_CUAA", "DS1DOCKW3", 3);
						func_484("DH1_CUAA", 1);
					}
				}
				else if (!func_487("DH1_CUAB"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_2040[5]))
					{
						__LIB_0__::func_709(iLocal_2040[5], "DH1_CUAB", "DS1DOCKW3", 3);
						func_484("DH1_CUAB", 1);
					}
				}
				else if (!func_487("DH1_CUAC"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_2040[5]))
					{
						__LIB_0__::func_709(iLocal_2040[5], "DH1_CUAC", "DS1DOCKW3", 3);
						func_484("DH1_CUAC", 1);
					}
				}
				else if (!func_487("DH1_CUAD"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_2040[5]))
					{
						__LIB_0__::func_709(iLocal_2040[5], "DH1_CUAD", "DS1DOCKW3", 3);
						func_484("DH1_CUAD", 1);
						iLocal_2336 = MISC::GET_GAME_TIMER();
					}
				}
				else if (__LIB_0__::func_611(&iLocal_2336, MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000)))
				{
					func_484("DH1_CUAD", 0);
					func_484("DH1_CUAC", 0);
					func_484("DH1_CUAB", 0);
					func_484("DH1_CUAA", 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_1965[0 /*16*/]))
	{
		if ((!PED::IS_PED_INJURED(Local_1965[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1965[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1965[2 /*16*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_1965[0 /*16*/], true), true) < 10f)
			{
				if (!func_487("DH1_CYAA"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[0 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[0 /*16*/], "DH1_CYAA", "DS1DOCKW4", 3);
						func_484("DH1_CYAA", 1);
					}
				}
				else if (!func_487("DH1_CYAB"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[0 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[1 /*16*/], "DH1_CYAB", "DS1DOCKW5", 3);
						func_484("DH1_CYAB", 1);
					}
				}
				else if (!func_487("DH1_CYAC"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[1 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[0 /*16*/], "DH1_CYAC", "DS1DOCKW4", 3);
						func_484("DH1_CYAC", 1);
					}
				}
				else if (!func_487("DH1_CYAD"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[0 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[2 /*16*/], "DH1_CYAD", "DS1DOCKW6", 3);
						func_484("DH1_CYAD", 1);
					}
				}
				else if (!func_487("DH1_CYAE"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[2 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[0 /*16*/], "DH1_CYAE", "DS1DOCKW4", 3);
						func_484("DH1_CYAE", 1);
					}
				}
				else if (!func_487("DH1_CYAF"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[0 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[2 /*16*/], "DH1_CYAF", "DS1DOCKW6", 3);
						func_484("DH1_CYAF", 1);
					}
				}
				else if (!func_487("DH1_CYAG"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[2 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[0 /*16*/], "DH1_CYAG", "DS1DOCKW4", 3);
						func_484("DH1_CYAG", 1);
					}
				}
				else if (!func_487("DH1_CYAH"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[0 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[2 /*16*/], "DH1_CYAH", "DS1DOCKW6", 3);
						func_484("DH1_CYAH", 1);
					}
				}
				else if (!func_487("DH1_CYAI"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[2 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[1 /*16*/], "DH1_CYAI", "DS1DOCKW5", 3);
						func_484("DH1_CYAI", 1);
					}
				}
				else if (!func_487("DH1_CYAJ"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1965[1 /*16*/]))
					{
						__LIB_0__::func_709(Local_1965[0 /*16*/], "DH1_CYAJ", "DS1DOCKW4", 3);
						func_484("DH1_CYAJ", 1);
						iLocal_2337 = MISC::GET_GAME_TIMER();
					}
				}
				else if (__LIB_0__::func_611(&iLocal_2337, MISC::GET_RANDOM_INT_IN_RANGE(8000, 15000)))
				{
					func_484("DH1_CYAJ", 1);
					func_484("DH1_CYAI", 1);
					func_484("DH1_CYAH", 1);
					func_484("DH1_CYAF", 1);
					func_484("DH1_CYAE", 1);
					func_484("DH1_CYAD", 1);
					func_484("DH1_CYAC", 1);
					func_484("DH1_CYAB", 1);
					func_484("DH1_CYAA", 1);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[7]))
	{
		if (!PED::IS_PED_INJURED(iLocal_2040[7]))
		{
			if (__LIB_0__::func_611(&iLocal_1791, MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000)))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_2040[7], true), true) < 10f)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_2040[7], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
					__LIB_0__::func_709(iLocal_2040[7], "DH1_CZAA", "DS1DOCKW4", 3);
					iLocal_1791 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1971[0 /*16*/]) && ENTITY::DOES_ENTITY_EXIST(Local_1971[1 /*16*/])) && ENTITY::DOES_ENTITY_EXIST(Local_1971[2 /*16*/]))
	{
		if ((!PED::IS_PED_INJURED(Local_1971[0 /*16*/]) && !PED::IS_PED_INJURED(Local_1971[1 /*16*/])) && !PED::IS_PED_INJURED(Local_1971[2 /*16*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_1971[0 /*16*/], true), true) < 10f)
			{
				if (!func_487("DH1_COAA"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[0 /*16*/]))
					{
						__LIB_0__::func_709(Local_1971[0 /*16*/], "DH1_COAA", "DS1DOCKWORKER1", 3);
						func_484("DH1_COAA", 1);
					}
				}
				else if (!func_487("DH1_COAB"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[1 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1971[1 /*16*/]))
						{
							__LIB_0__::func_709(Local_1971[1 /*16*/], "DH1_COAB", "DS1DOCKW2", 3);
							func_484("DH1_COAB", 1);
						}
					}
				}
				else if (!func_487("DH1_COAC"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[0 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[1 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1971[0 /*16*/]))
						{
							__LIB_0__::func_709(Local_1971[0 /*16*/], "DH1_COAC", "DS1DOCKWORKER1", 3);
							func_484("DH1_COAC", 1);
						}
					}
				}
				else if (!func_487("DH1_COAD"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[1 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1971[1 /*16*/]))
						{
							__LIB_0__::func_709(Local_1971[1 /*16*/], "DH1_COAD", "DS1DOCKW2", 3);
							iLocal_2335 = MISC::GET_GAME_TIMER();
							func_484("DH1_COAD", 1);
						}
					}
				}
				else if (!func_487("DH1_COAE"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[0 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[1 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1971[0 /*16*/]))
						{
							__LIB_0__::func_709(Local_1971[0 /*16*/], "DH1_COAE", "DS1DOCKWORKER1", 3);
							iLocal_2335 = MISC::GET_GAME_TIMER();
							func_484("DH1_COAE", 1);
						}
					}
				}
				else if (!func_487("DH1_COAF"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[1 /*16*/]) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_1971[0 /*16*/]))
					{
						if (!PED::IS_PED_INJURED(Local_1971[1 /*16*/]))
						{
							__LIB_0__::func_709(Local_1971[1 /*16*/], "DH1_COAF", "DS1DOCKW2", 3);
							iLocal_2335 = MISC::GET_GAME_TIMER();
							func_484("DH1_COAF", 1);
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_2335, 25000))
				{
					func_484("DH1_COAA", 0);
					func_484("DH1_COAB", 0);
					func_484("DH1_COAC", 0);
					func_484("DH1_COAD", 0);
					func_484("DH1_COAE", 0);
					func_484("DH1_COAF", 0);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[13]))
	{
		if (!PED::IS_PED_INJURED(iLocal_2040[13]))
		{
			if (iLocal_2317 == 5)
			{
				if (iLocal_1835 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_2045, true), ENTITY::GET_ENTITY_COORDS(iLocal_2040[13], true), true) < 15f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_2040[13], true), true) < 8f)
							{
								if (__LIB_0__::func_611(&iLocal_1791, MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000)))
								{
									if (!PED::IS_PED_INJURED(iLocal_2040[13]))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2040[13], PLAYER::PLAYER_PED_ID(), 0);
										TASK::TASK_LOOK_AT_ENTITY(iLocal_2040[13], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
										__LIB_0__::func_709(iLocal_2040[13], "DH1_AYAA", "SUPERVISOR2", 3);
										iLocal_1791 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_2045, true), ENTITY::GET_ENTITY_COORDS(iLocal_2040[13], true), true) < 15f)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_2040[13], true), true) < 12f)
							{
								if (__LIB_0__::func_611(&iLocal_1791, MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000)))
								{
									if (!PED::IS_PED_INJURED(iLocal_2040[13]))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_2040[13], PLAYER::PLAYER_PED_ID(), 0);
										TASK::TASK_LOOK_AT_ENTITY(iLocal_2040[13], PLAYER::PLAYER_PED_ID(), 5000, 0, 2);
										__LIB_0__::func_709(iLocal_2040[13], "DH1_AZAA", "SUPERVISOR2", 3);
										iLocal_1791 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_856()//Position - 0xA376D
{
	int iVar0;
	if (iLocal_2317 < 5 && iLocal_2317 > 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1968[0 /*16*/]))
		{
			if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (!PED::IS_PED_INJURED(Local_1968[0 /*16*/]))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_1968[0 /*16*/]))
							{
								iLocal_2323 = 8;
								iLocal_2317 = 12;
							}
						}
					}
				}
				if (PED::IS_PED_RAGDOLL(Local_1968[0 /*16*/]))
				{
					iLocal_2323 = 8;
					iLocal_2317 = 12;
				}
			}
		}
	}
	if (iLocal_2317 > 2 && iLocal_2317 < 5)
	{
		if (!func_487("WORLD_HUMAN_JANITOR"))
		{
			if (!PED::IS_PED_INJURED(iLocal_2040[3]))
			{
				TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_2040[3], "WORLD_HUMAN_JANITOR", -62.19f, -2539.51f, 6.01f, -157.31f, 0, false, true);
				func_484("WORLD_HUMAN_JANITOR", 1);
			}
		}
	}
	if (iLocal_2317 == 3)
	{
		if (iLocal_1856[9] == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[1]))
			{
				if (!PED::IS_PED_INJURED(iLocal_2040[1]))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[1], "WORLD_HUMAN_STAND_MOBILE", 0, false);
					iLocal_1856[9] = 1;
				}
			}
		}
		if (iLocal_1856[10] == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[3], false))
			{
				if (!PED::IS_PED_INJURED(iLocal_2040[17]))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks5");
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks5"))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_2040[17], uLocal_2046[3], false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2046[3]))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_2046[3], 1, "AWDocks5", true);
								VEHICLE::SET_PLAYBACK_SPEED(uLocal_2046[3], 0.7f);
								iLocal_1856[10] = 1;
							}
						}
						else if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_2046[3], -1, false))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_2040[17], uLocal_2046[3], -1);
						}
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks5");
					}
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_2040[17]))
			{
				PED::DELETE_PED(&(iLocal_2040[17]));
			}
		}
		if (SYSTEM::TIMERA() > 4000)
		{
			if (iLocal_1856[11] == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2046[2]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[2], false))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[18]))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks4");
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks4"))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_2040[18], uLocal_2046[2], false))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2046[2]))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_2046[2], 1, "AWDocks4", true);
										VEHICLE::SET_PLAYBACK_SPEED(uLocal_2046[2], 0.7f);
										iLocal_1856[11] = 1;
									}
								}
								else if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_2046[2], -1, false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_2040[18], uLocal_2046[2], -1);
								}
							}
							else
							{
								VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks4");
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[18]))
					{
						PED::DELETE_PED(&(iLocal_2040[18]));
					}
				}
			}
		}
	}
	else if (iLocal_2317 >= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2046[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[2], false))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uLocal_2046[2], 1) > 30f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_2046[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_2046[2]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "AWDocks4");
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2046[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[3], false))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), uLocal_2046[3], 1) > 30f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_2046[3]))
					{
						VEHICLE::DELETE_VEHICLE(&(uLocal_2046[3]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
						VEHICLE::REMOVE_VEHICLE_RECORDING(1, "AWDocks5");
					}
				}
			}
		}
	}
	if (iLocal_2317 > 3 && iLocal_2317 < 9)
	{
		if (!PED::IS_PED_INJURED(iLocal_2041))
		{
			if (iLocal_1856[0] == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_2040[11]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[0], false))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_2056);
					TASK::TASK_ENTER_VEHICLE(0, uLocal_2046[0], 1, -1, 2f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_2056);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_2040[11], iLocal_2056);
				}
				iLocal_1856[0] = 1;
			}
			if (iLocal_1856[1] == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_2040[11]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_2040[11], uLocal_2046[0], false))
					{
						iLocal_1856[1] = 1;
					}
				}
			}
			if (iLocal_1856[2] == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_2040[4]) && !PED::IS_PED_INJURED(iLocal_2040[5]))
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_2040[4], "WORLD_HUMAN_SMOKING", -109.06f, -2481.83f, 6.02f, 144.23f, 0, false, true);
					TASK::TASK_START_SCENARIO_AT_POSITION(iLocal_2040[5], "WORLD_HUMAN_HANG_OUT_STREET", -110.18f, -2482.25f, 6.02f, -80.21f, 0, false, true);
					iLocal_1856[2] = 1;
				}
			}
			if (iLocal_2317 == 4 || iLocal_2317 == 5)
			{
				if (iLocal_1856[5] == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_2040[14]))
					{
						TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[14], "WORLD_HUMAN_DRINKING", 0, false);
						iLocal_1856[5] = 1;
					}
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				if (iLocal_1856[6] == 0)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2041, -106.5262f, -2482.1042f, 5.0181f, 5f, 5f, 5f, false, true, 0) || (iLocal_2317 > 4 && iLocal_2317 < 9))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[12]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[1], false))
						{
							if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_2046[1], -1, false))
							{
								iLocal_1787 = MISC::GET_GAME_TIMER() + 1000;
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_2046[1], 3);
								PED::SET_PED_INTO_VEHICLE(iLocal_2040[12], uLocal_2046[1], -1);
								VEHICLE::SET_FORKLIFT_FORK_HEIGHT(uLocal_2046[1], 1f);
							}
							else
							{
								PED::DELETE_PED(&(iLocal_2040[12]));
							}
							iLocal_1856[6] = 1;
						}
					}
				}
				if (iLocal_1856[6] == 1)
				{
					if (iLocal_1856[7] == 0)
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "AWDocks2");
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "AWDocks2"))
						{
							if (!PED::IS_PED_INJURED(iLocal_2040[12]) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_2046[1], false))
							{
								if (!PED::IS_PED_INJURED(iLocal_2040[7]))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_2040[7], "WORLD_HUMAN_AA_SMOKE", 0, false);
								}
								if (PED::IS_PED_IN_VEHICLE(iLocal_2040[12], uLocal_2046[1], false))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_2046[1], 1, "AWDocks2", true);
									VEHICLE::SET_PLAYBACK_SPEED(uLocal_2046[1], 1.1f);
									iLocal_1856[7] = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_857()//Position - 0xA3E18
{
	switch (iLocal_2360)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_2041))
			{
				iLocal_2361 = MISC::GET_GAME_TIMER();
				AUDIO::PLAY_PAIN(iLocal_2041, 4, 0, 0);
				iLocal_2360++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(uLocal_2039[4]))
			{
				if (__LIB_0__::func_611(&iLocal_2361, MISC::GET_RANDOM_INT_IN_RANGE(9000, 24000)))
				{
					iLocal_2361 = MISC::GET_GAME_TIMER();
					if (__LIB_0__::func_680())
					{
						__LIB_0__::func_640(uLocal_2039[4], "GENERIC_INSULT_HIGH", 35);
					}
					else if (!PED::IS_PED_INJURED(uLocal_2039[5]))
					{
						__LIB_0__::func_640(uLocal_2039[5], "GENERIC_INSULT_HIGH", 35);
					}
					iLocal_2360++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&iLocal_2361, MISC::GET_RANDOM_INT_IN_RANGE(2000, 6000)))
			{
				iLocal_2360 = 0;
			}
			break;
	}
}

void func_858()//Position - 0xA3EEA
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	int iVar4[5];
	int iVar5;
	int iVar6;
	int iVar7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_2318 = iLocal_2317;
		iLocal_2317 = 12;
	}
	if (iLocal_2317 != 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 1;
				iLocal_2317 = 12;
			}
			else if (__LIB_15__::func_929(&iLocal_2044))
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 2;
				iLocal_2317 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
			{
				if (iLocal_2317 < 4)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(iLocal_2042))
						{
							func_859(ENTITY::GET_ENTITY_COORDS(iLocal_2042, true), 150f, 200f, "AW_DONT_LEAVE_W", "AW_DISTWARNW", 7);
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042) && ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
		{
			if (iLocal_2317 < 4)
			{
				if (PED::IS_PED_INJURED(iLocal_2042) && PED::IS_PED_INJURED(iLocal_2041))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 18;
					iLocal_2317 = 12;
				}
				else if (PED::IS_PED_INJURED(iLocal_2042))
				{
					if (iLocal_2317 < 4)
					{
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 20;
						iLocal_2317 = 12;
					}
				}
				else if (PED::IS_PED_INJURED(iLocal_2041))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 6;
					iLocal_2317 = 12;
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
		{
			if (PED::IS_PED_INJURED(iLocal_2041))
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 6;
				iLocal_2317 = 12;
			}
		}
		if (iLocal_2317 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
			{
				if (!PED::IS_PED_INJURED(iLocal_2041))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_2317 == 2)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_2041, iLocal_2044, false))
								{
									func_859(ENTITY::GET_ENTITY_COORDS(iLocal_2041, true), 190f, 250f, "AW_DONT_LEAVE_T", "AW_DISTWARNF", 5);
								}
							}
						}
						else if (iLocal_2317 == 4)
						{
							func_859(ENTITY::GET_ENTITY_COORDS(iLocal_2041, true), 190f, 250f, "AW_DONT_LEAVE_T", "AW_DISTWARNF", 5);
						}
						else if (iLocal_2317 == 6)
						{
							func_859(-65.59f, -2467.65f, 5.96f, 180f, 250f, "AW_DISTWARNL", "AW_DISTWARND", 17);
						}
						else if (iLocal_2317 == 7)
						{
							func_859(-65.59f, -2467.65f, 5.96f, 180f, 250f, "AW_DISTWARNL", "AW_DISTWARND", 17);
						}
						else
						{
							if (iLocal_2317 == 3)
							{
								if (iLocal_2021 > 1)
								{
									func_859(-65.59f, -2467.65f, 5.96f, 250f, 270f, "AW_DISTWARNL", "AW_DISTWARND", 17);
								}
							}
							if (iLocal_2317 > 3 && iLocal_2317 < 9)
							{
								if (iLocal_2317 != 6 || iLocal_2317 != 7)
								{
									func_859(-65.59f, -2467.65f, 5.96f, 250f, 270f, "AW_DISTWARNL", "AW_DISTWARND", 17);
								}
							}
						}
						if (iLocal_2317 > 3 && iLocal_2317 < 4)
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_2041))
								{
									if (PED::IS_PED_RAGDOLL(iLocal_2041))
									{
										iLocal_2318 = iLocal_2317;
										iLocal_2323 = 8;
										iLocal_2317 = 12;
									}
								}
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_2041))
								{
									iLocal_2318 = iLocal_2317;
									iLocal_2323 = 8;
									iLocal_2317 = 12;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_2317 > 7 && iLocal_1818 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 10;
					iLocal_2317 = 12;
				}
				else if (__LIB_15__::func_929(&iLocal_2047))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 11;
					iLocal_2317 = 12;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 14;
					iLocal_2317 = 12;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
					{
						if (ENTITY::IS_ENTITY_IN_WATER(iLocal_2052))
						{
							iLocal_2318 = iLocal_2317;
							iLocal_2323 = 14;
							iLocal_2317 = 12;
						}
					}
				}
			}
		}
		if (iLocal_2317 == 9)
		{
			if (iLocal_2021 > 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2047, false))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_2047))
						{
							if (!func_487("TRAILER DISCONNECTED"))
							{
								iLocal_2334 = MISC::GET_GAME_TIMER();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2052, false))
								{
									if (!HUD::DOES_BLIP_EXIST(iLocal_2332))
									{
										iLocal_2332 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2052);
										HUD::SET_BLIP_COLOUR(iLocal_2332, 3);
									}
								}
								if (__LIB_0__::func_75())
								{
									if (!__LIB_0__::func_568())
									{
										__LIB_0__::func_620(1);
									}
								}
								__LIB_16__::func_919("AW_RECONTRA");
								func_484("TRAILER DISCONNECTED", 1);
							}
							else if (__LIB_0__::func_611(&iLocal_2334, 45000))
							{
								iLocal_2318 = iLocal_2317;
								iLocal_2323 = 19;
								iLocal_2317 = 12;
							}
						}
						else if (func_487("TRAILER DISCONNECTED"))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_2332))
							{
								HUD::REMOVE_BLIP(&iLocal_2332);
							}
							if (__LIB_0__::func_568())
							{
								__LIB_0__::func_620(0);
							}
							if (__LIB_0__::func_501("AW_RECONTRA", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							func_484("TRAILER DISCONNECTED", 0);
						}
					}
				}
			}
		}
		if (iLocal_2317 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false) || ENTITY::IS_ENTITY_IN_WATER(iLocal_2045))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 12;
					iLocal_2317 = 12;
				}
				else if (__LIB_15__::func_929(&iLocal_2045))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 13;
					iLocal_2317 = 12;
				}
			}
		}
		if (iLocal_2317 == 7)
		{
			if (iLocal_1772 == 0)
			{
				iVar1 = 0;
				iVar1 = 0;
				while (iVar1 < Local_2319.f_0)
				{
					if (Local_2319[iVar1 /*25*/].f_15 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2319[iVar1 /*25*/]))
						{
							Var2 = { ENTITY::GET_ENTITY_ROTATION(Local_2319[iVar1 /*25*/], 2) };
							Var3 = { ENTITY::GET_ENTITY_VELOCITY(Local_2319[iVar1 /*25*/]) };
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar1 /*25*/]))
							{
								if (Var2.f_1 > 45f || Var2.f_1 < -45f)
								{
									iLocal_1772 = MISC::GET_GAME_TIMER();
								}
							}
							else if (Var2.f_1 > 32f || Var2.f_1 < -32f)
							{
								iLocal_1772 = MISC::GET_GAME_TIMER();
							}
							if (Local_2319[iVar1 /*25*/].f_19.f_2 < -8f)
							{
								if ((Var3.f_2 - Local_2319[iVar1 /*25*/].f_19.f_2) > 5f)
								{
									iLocal_1772 = MISC::GET_GAME_TIMER();
								}
							}
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar1 /*25*/]))
							{
								if (Var2.f_2 > (91.2705f + 15f) || Var2.f_2 < (91.2705f - 15f))
								{
									iLocal_1772 = MISC::GET_GAME_TIMER();
								}
							}
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar1 /*25*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2319[iVar1 /*25*/], -48.327007f, -2415.7195f, 2.000961f, -110.64208f, -2416.208f, 22.250463f, 14.5f, false, true, 0))
								{
									iLocal_1772 = MISC::GET_GAME_TIMER();
								}
							}
							if (iLocal_1772 == 0)
							{
								if (!__LIB_13__::func_755(&Local_2123, 1))
								{
									if (MISC::ABSF((SYSTEM::VMAG(Var3) - SYSTEM::VMAG(Local_2319[iVar1 /*25*/].f_19))) > 4f)
									{
										__LIB_0__::func_638();
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10h", 7, 0, 0, 0))
										{
											iLocal_1773 = MISC::GET_GAME_TIMER();
										}
									}
									if (((MISC::GET_GAME_TIMER() - iLocal_1773) > 8000 && MISC::ABSF(Var2.f_1) > 45f) && ENTITY::IS_ENTITY_ATTACHED(Local_2319[iVar1 /*25*/]))
									{
										__LIB_0__::func_638();
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_10h", 7, 0, 0, 0))
										{
											iLocal_1773 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							Local_2319[iVar1 /*25*/].f_19 = { Var3 };
						}
					}
					iVar1++;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1772) > 1000)
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 14;
				iLocal_2317 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_1912[0]))
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 16;
				iLocal_2317 = 12;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iLocal_1912[1]))
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 16;
				iLocal_2317 = 12;
			}
		}
		if ((iLocal_2317 > 2 || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2066, 20f, 20f, 20f, false, true, 0) && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))) && iLocal_2317 < 10)
		{
			if (iLocal_1843 == 0)
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 8;
					iLocal_2317 = 12;
				}
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
				{
					__LIB_0__::func_638();
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
				iVar5 = 0;
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar4, -1);
					iVar5 = 0;
					while (iVar5 <= (iVar4 - 1))
					{
						if (!PED::IS_PED_INJURED(iVar4[iVar5]))
						{
							if (!PED::IS_PED_MODEL(iVar4[iVar5], joaat("IG_Wade")) && !PED::IS_PED_MODEL(iVar4[iVar5], joaat("IG_Floyd")))
							{
								if (PED::IS_PED_MODEL(iVar4[iVar5], joaat("S_M_Y_BlackOps_01")))
								{
									if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4[iVar5], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_COMBAT(iVar4[iVar5], PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar4[iVar5]))
									{
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar4[iVar5], iLocal_152);
										PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_152, joaat("PLAYER"));
										TASK::TASK_COMBAT_PED(iVar4[iVar5], PLAYER::PLAYER_PED_ID(), 0, 16);
										__LIB_0__::func_325();
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_2318 = iLocal_2317;
											iLocal_2323 = 8;
											iLocal_2317 = 12;
										}
									}
									if (PED::HAS_PED_RECEIVED_EVENT(iVar4[iVar5], 67))
									{
										__LIB_0__::func_325();
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_2318 = iLocal_2317;
											iLocal_2323 = 9;
											iLocal_2317 = 12;
										}
									}
								}
								else
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4[iVar5], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_COMBAT(iVar4[iVar5], PLAYER::PLAYER_PED_ID()))
									{
										__LIB_0__::func_325();
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_2318 = iLocal_2317;
											iLocal_2323 = 8;
											iLocal_2317 = 12;
										}
									}
									if (PED::HAS_PED_RECEIVED_EVENT(iVar4[iVar5], 67))
									{
										__LIB_0__::func_325();
										if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
										{
											iLocal_2318 = iLocal_2317;
											iLocal_2323 = 9;
											iLocal_2317 = 12;
										}
									}
								}
							}
						}
						iVar5++;
					}
				}
				iVar5 = 0;
				while (iVar5 <= (iVar4 - 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar4[iVar5]))
					{
						if (!PED::IS_PED_INJURED(iVar4[iVar5]))
						{
							if ((PED::IS_PED_MODEL(iVar4[iVar5], joaat("S_M_Y_BlackOps_01")) || PED::IS_PED_MODEL(iVar4[iVar5], joaat("S_M_Y_DockWork_01"))) || PED::IS_PED_MODEL(iVar4[iVar5], joaat("S_M_M_DockWork_01")))
							{
								if (!PED::IS_PED_MODEL(iVar4[iVar5], joaat("IG_Wade")) && !PED::IS_PED_MODEL(iVar4[iVar5], joaat("IG_Floyd")))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4[iVar5], iLocal_1912[0], true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4[iVar5], iLocal_1912[1], true))
										{
											TASK::TASK_SMART_FLEE_PED(iVar4[iVar5], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
											iLocal_2318 = iLocal_2317;
											iLocal_2323 = 8;
											iLocal_2317 = 12;
										}
									}
								}
							}
						}
					}
					iVar5++;
				}
				iVar5 = 0;
				while (iVar5 < iLocal_2040)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[iVar5]))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[iVar5]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (PED::HAS_PED_RECEIVED_EVENT(iLocal_2040[iVar5], 61) || PED::HAS_PED_RECEIVED_EVENT(iLocal_2040[iVar5], 67))
								{
									if (!func_487("DS1_41"))
									{
										if (!PED::IS_PED_INJURED(iLocal_2041))
										{
											__LIB_0__::func_325();
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2045, false))
												{
													if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2045, false))
													{
														__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 4);
													}
													else if (__LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), iLocal_2041))
													{
														__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 4);
													}
													else
													{
														__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 6);
													}
												}
												else if (__LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), iLocal_2041))
												{
													__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 4);
												}
												else
												{
													__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 6);
												}
											}
											else if (__LIB_0__::func_570(PLAYER::PLAYER_PED_ID(), iLocal_2041))
											{
												__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 4);
											}
											else
											{
												__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 6);
											}
											func_484("DS1_41", 1);
											iLocal_2333 = MISC::GET_GAME_TIMER();
										}
									}
									else if (__LIB_0__::func_611(&iLocal_2333, 9000))
									{
										func_484("DS1_41", 0);
									}
								}
							}
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2040[iVar5], PLAYER::PLAYER_PED_ID(), true) || (PED::IS_PED_RAGDOLL(iLocal_2040[iVar5]) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_2040[iVar5], PLAYER::PLAYER_PED_ID())))
							{
								__LIB_0__::func_325();
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
								{
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
									PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
									iLocal_2318 = iLocal_2317;
									iLocal_2323 = 8;
									iLocal_2317 = 12;
								}
							}
						}
						else
						{
							__LIB_0__::func_325();
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
								iLocal_2318 = iLocal_2317;
								iLocal_2323 = 8;
								iLocal_2317 = 12;
							}
						}
					}
					iVar5++;
				}
				if (!PED::IS_PED_INJURED(iLocal_2043))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (PED::HAS_PED_RECEIVED_EVENT(iLocal_2043, 61) || PED::HAS_PED_RECEIVED_EVENT(iLocal_2043, 67))
						{
							if (!func_487("DS1_41"))
							{
								if (!PED::IS_PED_INJURED(iLocal_2041))
								{
									__LIB_0__::func_325();
									__LIB_0__::func_709(iLocal_2041, "DH1_EWAA", "FLOYD", 6);
									func_484("DS1_41", 1);
									iLocal_2333 = MISC::GET_GAME_TIMER();
								}
							}
							else if (__LIB_0__::func_611(&iLocal_2333, 9000))
							{
								func_484("DS1_41", 0);
							}
						}
					}
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_325();
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
				if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_325();
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
				if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0))
				{
					__LIB_0__::func_325();
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -63.84386f, -2515.9592f, 6.150424f, -51.076782f, -2525.0745f, 9.171206f, 4.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -63.257442f, -2519.0747f, 8.900423f, -62.217762f, -2519.835f, 6.150424f, 0.5f, false, true, 0))
				{
					__LIB_0__::func_325();
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -77.75518f, -2364.3325f, 38.79614f, -252.81828f, -2363.6917f, -2.910417f, 35.75f, false, true, 0))
				{
					__LIB_0__::func_325();
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
				if (!func_487("MERRYWEATHER ALERTED"))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uLocal_2039[4]) && ENTITY::DOES_ENTITY_EXIST(uLocal_2039[5])) && ENTITY::DOES_ENTITY_EXIST(uLocal_2039[5]))
					{
						if ((!PED::IS_PED_INJURED(uLocal_2039[4]) && !PED::IS_PED_INJURED(uLocal_2039[5])) && !PED::IS_PED_INJURED(uLocal_2039[6]))
						{
							if ((PED::IS_PED_IN_COMBAT(uLocal_2039[4], 0) || PED::IS_PED_IN_COMBAT(uLocal_2039[5], 0)) || PED::IS_PED_IN_COMBAT(uLocal_2039[6], 0))
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1781))
								{
									AUDIO::STOP_SOUND(iLocal_1781);
									AUDIO::RELEASE_SOUND_ID(iLocal_1781);
								}
								iLocal_1788 = MISC::GET_GAME_TIMER();
								func_484("MERRYWEATHER ALERTED", 1);
							}
						}
						else if (iLocal_2317 == 9 || (iLocal_2317 == 10 && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 478.596f, -3116.911f, 5.069f) < 40000f))
						{
							__LIB_0__::func_325();
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
								iLocal_2318 = iLocal_2317;
								iLocal_2323 = 8;
								iLocal_2317 = 12;
							}
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_1788, 6000))
				{
					__LIB_0__::func_325();
					if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
						iLocal_2318 = iLocal_2317;
						iLocal_2323 = 8;
						iLocal_2317 = 12;
					}
				}
			}
		}
		if (iLocal_1843 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -63.60088f, -2517.614f, 6.400066f, -61.07001f, -2519.3726f, 8.900066f, 1.75f, false, true, 0))
			{
				__LIB_0__::func_325();
				if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
					iLocal_2318 = iLocal_2317;
					iLocal_2323 = 8;
					iLocal_2317 = 12;
				}
			}
			if (iLocal_2317 > 2)
			{
				iVar6 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(-62.7f, -2527.79f, 5.01f, 40f, 0, 4);
				if (iVar6 != iLocal_2044)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar6))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar6, -52.457756f, -2535.2578f, 4.010103f, -73.38586f, -2520.3413f, 8.510103f, 14.25f, false, true, 0))
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
							iLocal_2318 = iLocal_2317;
							iLocal_2323 = 8;
							iLocal_2317 = 12;
						}
					}
				}
				iVar7 = 0;
				while (iVar7 <= 21)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[iVar7]))
					{
						if (!PED::IS_PED_INJURED(iLocal_2040[iVar7]))
						{
							if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_2040[iVar7]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_2040[iVar7]))
							{
								__LIB_0__::func_325();
								if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_2040[iVar7], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									iLocal_2318 = iLocal_2317;
									iLocal_2323 = 8;
									iLocal_2317 = 12;
								}
							}
						}
					}
					iVar7++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2043))
				{
					if (!PED::IS_PED_INJURED(iLocal_2043))
					{
						if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_2043) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_2043))
						{
							__LIB_0__::func_325();
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_2043, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								iLocal_2318 = iLocal_2317;
								iLocal_2323 = 8;
								iLocal_2317 = 12;
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2043, PLAYER::PLAYER_PED_ID(), true))
						{
							if (__LIB_16__::func_7(&Local_48, "D1AUD", "DS1_38", 8, 0, 0, 0))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, iLocal_151);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_152, joaat("PLAYER"));
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_151, iLocal_152);
								iLocal_2318 = iLocal_2317;
								iLocal_2323 = 8;
								iLocal_2317 = 12;
							}
						}
					}
				}
				iVar7 = 0;
				while (iVar7 <= 21)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[iVar7]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_1912[1]))
						{
							if (!PED::IS_PED_INJURED(iLocal_2040[iVar7]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2040[iVar7], iLocal_1912[0], true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2040[iVar7], iLocal_1912[1], true))
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_2040[iVar7], PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									iLocal_2318 = iLocal_2317;
									iLocal_2323 = 8;
									iLocal_2317 = 12;
								}
							}
							else
							{
								iLocal_2318 = iLocal_2317;
								iLocal_2323 = 8;
								iLocal_2317 = 12;
							}
						}
					}
					iVar7++;
				}
			}
		}
		if (iLocal_2317 == 5)
		{
			if (iLocal_1794 == 0)
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < iLocal_1912)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[iVar9]))
					{
						if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
						{
							if (!VEHICLE::IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(iLocal_2045))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_1912[iVar9], -92.52367f, -2461.8f, 8.267201f, -103.63812f, -2453.9893f, 4.520514f, 14.75f, false, true, 0))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[iVar9]))
									{
										Var10 = { ENTITY::GET_ENTITY_ROTATION(iLocal_1912[iVar9], 2) };
										if (Var10.f_1 > 75f || Var10.f_1 < -75f)
										{
											iLocal_1794 = MISC::GET_GAME_TIMER();
										}
										if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_1912[iVar9]))
										{
											if (Var10.f_2 > (55.003f + 35f) || Var10.f_2 < (55.003f - 35f))
											{
												iLocal_1794 = MISC::GET_GAME_TIMER();
											}
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1912[iVar9]))
									{
										Var8 = { ENTITY::GET_ENTITY_COORDS(iLocal_1912[iVar9], true) };
										if (Var8.f_2 > 10.6f)
										{
											iLocal_1794 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
					iVar9++;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_1794) > 2000)
			{
				iLocal_2318 = iLocal_2317;
				iLocal_2323 = 15;
				iLocal_2317 = 12;
			}
		}
	}
}

void func_859(struct<3> Param0, float fParam1, float fParam2, char* sParam3, char* sParam4, int iParam5)//Position - 0xA55C4
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0, true) > fParam2)
	{
		iLocal_2318 = iLocal_2317;
		iLocal_2323 = iParam5;
		iLocal_2317 = 12;
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0, true) > fParam1)
	{
		if (!iLocal_1815)
		{
			__LIB_16__::func_919(sParam3);
			iLocal_1815 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param0, true) < (fParam1 - 25f))
	{
		if (iLocal_1815)
		{
			__LIB_16__::func_919(sParam4);
			iLocal_1815 = 0;
		}
	}
}

void func_861(bool bParam0, int iParam1)//Position - 0xA56AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(PLAYER::PLAYER_PED_ID(), 2, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(PLAYER::PLAYER_PED_ID(), true);
	}
	__LIB_38__::func_489(0);
	__LIB_14__::func_804(0);
	GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	func_831(0);
	func_867();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	__LIB_12__::func_849(23, 0);
	ENTITY::REMOVE_FORCED_OBJECT(479.2571f, -3115.5513f, 5.0701f, 50f, joaat("prop_gate_docks_ld"));
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_2");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_3");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_4");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_5");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_6");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_7");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("pols_8");
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("cranassist"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("cranassist");
	}
	if (iLocal_1903)
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_THEFT_EXPORT_CARS_CRANE_SECTION_SCENE");
		iLocal_1903 = 0;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(iLocal_1795))
	{
		AUDIO::STOP_SOUND(iLocal_1795);
		AUDIO::RELEASE_SOUND_ID(iLocal_1795);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DOCKS_HEIST_USING_CRANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DOCKS_HEIST_USING_CRANE");
	}
	if (__LIB_13__::func_806(3))
	{
		if (__LIB_17__::func_252(3))
		{
			__LIB_17__::func_209(3);
		}
	}
	__LIB_0__::func_483(5, PLAYER::PLAYER_PED_ID(), 0);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[5 /*31*/], 0f, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[5 /*31*/], 1, true, false);
	__LIB_17__::func_171(3, 0, 0);
	__LIB_17__::func_171(1, 0, 0);
	HUD::UNLOCK_MINIMAP_ANGLE();
	AUDIO::SET_AUDIO_FLAG("MobileRadioInGame", false);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	__LIB_20__::func_833(0);
	__LIB_20__::func_832(0);
	MISC::CLEAR_BIT(&Global_8136, 22);
	__LIB_16__::func_18(0);
	__LIB_0__::func_203(0, 0);
	iLocal_1843 = 0;
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	if (HUD::DOES_BLIP_EXIST(iLocal_2075))
	{
		HUD::REMOVE_BLIP(&iLocal_2075);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_1833)
	{
		iLocal_1833[iVar0] = 0;
		iVar0++;
	}
	func_864();
	iLocal_1910 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(iLocal_1910))
	{
		HUD::SET_BLIP_ALPHA(iLocal_1910, 100);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(false);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_2053);
			}
			else
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				VEHICLE::DELETE_VEHICLE(&iLocal_2053);
			}
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2053);
		}
	}
	else
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2053);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[14]))
	{
		if (!PED::IS_PED_INJURED(iLocal_2040[14]))
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_2040[14], true);
			AUDIO::STOP_PED_SPEAKING(iLocal_2040[14], true);
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_2040[14]))
			{
				PED::DELETE_PED(&(iLocal_2040[14]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2040[14]));
			}
		}
	}
	Local_1902 = { -53.6982f, -2415.79f, 5.05f };
	iLocal_1819 = 0;
	Global_32196 = 0;
	iVar1 = 0;
	while (iVar1 < iLocal_1972)
	{
		iLocal_1972[iVar1] = 0;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < iLocal_1978)
	{
		iLocal_1978[iVar1] = 0;
		iVar1++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1960.f_0)
	{
		func_846(&(Local_1960[iLocal_2022 /*8*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1962.f_0)
	{
		func_845(&(Local_1962[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1965.f_0)
	{
		func_845(&(Local_1965[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1967.f_0)
	{
		func_845(&(Local_1967[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1968.f_0)
	{
		func_845(&(Local_1968[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1969.f_0)
	{
		func_845(&(Local_1969[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1962.f_0)
	{
		func_845(&(Local_1962[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1963.f_0)
	{
		func_845(&(Local_1963[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1964.f_0)
	{
		func_845(&(Local_1964[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1961.f_0)
	{
		func_845(&(Local_1961[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 < Local_1966.f_0)
	{
		func_845(&(Local_1966[iLocal_2022 /*16*/]), 1, bParam0);
		iLocal_2022++;
	}
	__LIB_0__::func_552(1);
	__LIB_0__::func_424(0);
	func_604();
	func_815();
	func_863("");
	__LIB_0__::func_221(&Local_48, 0);
	__LIB_0__::func_221(&Local_48, 1);
	__LIB_0__::func_221(&Local_48, 2);
	__LIB_0__::func_221(&Local_48, 3);
	__LIB_0__::func_221(&Local_48, 4);
	__LIB_0__::func_221(&Local_48, 5);
	__LIB_0__::func_221(&Local_48, 6);
	__LIB_0__::func_221(&Local_48, 7);
	__LIB_0__::func_221(&Local_48, 8);
	__LIB_0__::func_221(&Local_48, 9);
	__LIB_0__::func_325();
	if (HUD::DOES_BLIP_EXIST(uLocal_2073[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_2073[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2073[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_2073[1]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_2073[2]))
	{
		HUD::REMOVE_BLIP(&(uLocal_2073[2]));
	}
	iLocal_2094 = 0;
	iLocal_1855 = 0;
	iLocal_1818 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2044, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2044, false))
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_2044, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_2044);
				}
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
	{
		__LIB_0__::func_366(0);
		MISC::SET_GAME_PAUSED(false);
	}
	if (!bParam0)
	{
		func_489(0);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("forklift"), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("biff"), false);
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 9)
	{
		if (bParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2054[iLocal_2022]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_2054[iLocal_2022]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2054[iLocal_2022]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_2054[iLocal_2022]));
		}
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 9)
	{
		if (bParam0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2055[iLocal_2022]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_2055[iLocal_2022]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_2055[iLocal_2022]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_2055[iLocal_2022]));
		}
		iLocal_2022++;
	}
	iLocal_1769 = 0;
	iLocal_1798 = 0;
	iLocal_2022 = 0;
	while (iLocal_2022 <= 34)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1756[iLocal_2022 /*19*/]))
		{
			if (bParam0)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_1756[iLocal_2022 /*19*/]));
					}
					else
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
						VEHICLE::DELETE_VEHICLE(&(Local_1756[iLocal_2022 /*19*/]));
					}
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&(Local_1756[iLocal_2022 /*19*/]));
				}
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_1756[iLocal_2022 /*19*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1756[iLocal_2022 /*19*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1756[iLocal_2022 /*19*/].f_1));
		}
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 54)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_153[iLocal_2022 /*40*/]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(Local_153[iLocal_2022 /*40*/]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_153[iLocal_2022 /*40*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_153[iLocal_2022 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_153[iLocal_2022 /*40*/].f_1));
		}
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1755[iLocal_2022 /*40*/]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(Local_1755[iLocal_2022 /*40*/]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1755[iLocal_2022 /*40*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1755[iLocal_2022 /*40*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1755[iLocal_2022 /*40*/].f_1));
		}
		iLocal_2022++;
	}
	if (iLocal_1808 == 1)
	{
		__LIB_0__::func_131();
	}
	if (iLocal_1842[0] == 1)
	{
		TASK::DELETE_PATROL_ROUTE("miss_dock");
		iLocal_1842[0] = 0;
	}
	if (iLocal_1842[1] == 1)
	{
		TASK::DELETE_PATROL_ROUTE("miss_merc0");
		TASK::DELETE_PATROL_ROUTE("miss_merc1");
		TASK::DELETE_PATROL_ROUTE("miss_merc2");
		iLocal_1842[1] = 0;
	}
	if (iLocal_1841[0] == 1)
	{
		TASK::DELETE_PATROL_ROUTE("miss_merc0");
		TASK::DELETE_PATROL_ROUTE("miss_merc1");
		TASK::DELETE_PATROL_ROUTE("miss_merc2");
		iLocal_1842[0] = 0;
		iLocal_1842[1] = 0;
		iLocal_1842[2] = 0;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 24)
	{
		if (iLocal_2077[iLocal_2022])
		{
			GRAPHICS::REMOVE_PARTICLE_FX(uLocal_2076[iLocal_2022], false);
			iLocal_2077[iLocal_2022] = 0;
		}
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2040[iLocal_2022]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(iLocal_2040[iLocal_2022]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_2040[iLocal_2022]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_2072[iLocal_2022]))
		{
			HUD::REMOVE_BLIP(&(uLocal_2072[iLocal_2022]));
		}
		iLocal_2022++;
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 14)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2039[iLocal_2022]))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&(uLocal_2039[iLocal_2022]));
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_2039[iLocal_2022]));
			}
		}
		iLocal_2022++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_110[0]))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&(uLocal_110[0]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_110[0]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_110[2]))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&(uLocal_110[2]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_110[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_110[1]))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&(uLocal_110[1]));
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_110[1]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2041))
	{
		if (bParam0)
		{
			PED::DELETE_PED(&iLocal_2041);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2041);
		}
	}
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2042))
		{
			if (bParam0)
			{
				PED::DELETE_PED(&iLocal_2042);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2042);
			}
		}
	}
	iLocal_2022 = 0;
	while (iLocal_2022 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2046[iLocal_2022]))
		{
			if (bParam0)
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_2046[iLocal_2022]));
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_2046[iLocal_2022]));
			}
		}
		iLocal_2022++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2044))
	{
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_2044);
				}
				else
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_2044);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_2044);
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2044, false))
		{
			if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_2044, false))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2044);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2047))
	{
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_2047);
				}
				else
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
					VEHICLE::DELETE_VEHICLE(&iLocal_2047);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_2047);
			}
		}
		else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_2047, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2047);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2052))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2052);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2052);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2050))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2050);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2050);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2051))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2051);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2051);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2049))
	{
		if (bParam0)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_2049);
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2049);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2045))
	{
		if (bParam0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_2045);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					VEHICLE::DELETE_VEHICLE(&iLocal_2045);
				}
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_2045);
			}
		}
		else if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_2045, false))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2045);
		}
	}
	if (bLocal_1853)
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 8)
		{
			if (PHYSICS::DOES_ROPE_EXIST(&(Local_2320.f_15[iVar2])))
			{
				PHYSICS::DELETE_ROPE(&(Local_2320.f_15[iVar2]));
			}
			iVar2++;
		}
		bLocal_1853 = false;
	}
	STREAMING::REMOVE_ANIM_DICT("map_objects");
	if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -62.8851f, -2406.8723f, 5.0009f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 338.2688f);
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2320.f_2))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_2320.f_2, true);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			OBJECT::DELETE_OBJECT(&Local_2320);
			OBJECT::DELETE_OBJECT(&(Local_2320.f_1));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_2));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_13));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[0]));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[1]));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[2]));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[3]));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[4]));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[5]));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[6]));
			OBJECT::DELETE_OBJECT(&(Local_2320.f_4[7]));
			OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/]));
			OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_1));
			OBJECT::DELETE_OBJECT(&(Local_2319[0 /*25*/].f_2));
			OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/]));
			OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_1));
			OBJECT::DELETE_OBJECT(&(Local_2319[1 /*25*/].f_2));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&Local_2320);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_1));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_2));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_13));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[0]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[1]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[2]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[3]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[4]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[5]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[6]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2320.f_4[7]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2319[0 /*25*/]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2319[0 /*25*/].f_1));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2319[0 /*25*/].f_2));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2319[1 /*25*/]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2319[1 /*25*/].f_1));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_2319[1 /*25*/].f_2));
		}
	}
	if (__LIB_16__::func_923())
	{
		__LIB_16__::func_922(0);
	}
	func_657();
	func_604();
	func_863("AWDocks1");
	func_815();
	if (bParam0)
	{
		MISC::CLEAR_AREA(Local_2059, 200f, true, true, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(Local_2059, 200f, 0);
		MISC::CLEAR_AREA(Local_2066, 500f, true, true, false, false);
		MISC::CLEAR_AREA_OF_OBJECTS(Local_2066, 500f, 0);
		GRAPHICS::WASH_DECALS_IN_RANGE(Local_2066, 500f, 1f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_2066, 500f);
		OBJECT::REMOVE_ALL_PICKUPS_OF_TYPE(joaat("PICKUP_WEAPON_ASSAULTRIFLE"));
		HUD::CLEAR_PRINTS();
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		iLocal_2022 = 0;
		while (iLocal_2022 <= 24)
		{
			iLocal_2077[iLocal_2022] = 0;
			iLocal_2022++;
		}
	}
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
	MISC::SET_TIME_SCALE(1f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	func_659();
	if (!bParam0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_863(char* sParam0)//Position - 0xA672C
{
	int iVar0;
	if (iLocal_66 > 0)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_66 - 1))
		{
			if (!MISC::IS_STRING_NULL(sParam0))
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_67[iVar0], sParam0);
				iLocal_67[iVar0] = 0;
			}
			iVar0++;
		}
	}
	iLocal_66 = 0;
}

void func_864()//Position - 0xA6774
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_53)
	{
		iLocal_53[iVar0] = 0;
		iVar0++;
	}
}

void func_867()//Position - 0xA67D7
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_APPROACH_DOCKS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_APPROACH_DOCKS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_FOLLOW_FLOYD_SEE_FREIGHTER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_HANDLER_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_HANDLER_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_CLIMB_UP_CRANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_CLIMB_UP_CRANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_USE_CRANE"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_USE_CRANE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_TAKE_PHOTOS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_TAKE_PHOTOS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_PHONE_RON"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_PHONE_RON");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_GET_TO_TRUCK"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_GET_TO_TRUCK");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_1_DRIVE_TO_DOCKS"))
	{
		AUDIO::STOP_AUDIO_SCENE("DH_1_DRIVE_TO_DOCKS");
	}
}

void func_869()//Position - 0xA690B
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
				if (!func_318(iVar0))
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

