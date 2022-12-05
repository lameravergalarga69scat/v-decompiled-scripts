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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	struct<110> Local_49 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_102 = 3;
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
	var uLocal_199 = 16;
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
	var uLocal_364 = 16;
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
	var uLocal_530 = 3;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 1092616192;
	var uLocal_537 = 1101004800;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 3;
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
	var uLocal_594 = 5;
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
	var uLocal_611 = 5;
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
	var uLocal_671 = 3;
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
	var uLocal_690 = 13;
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
	var uLocal_719 = 4;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 4;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 4;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 4;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 4;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 4;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 4;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 8;
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
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_803 = 0;
	var uLocal_804 = 16;
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
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	struct<3> Local_971 = { 0, 0, 0 } ;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = 0;
	int iLocal_981 = 0;
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	struct<3> Local_984 = { 0, 0, 0 } ;
	struct<3> Local_985 = { 0, 0, 0 } ;
	struct<2> Local_986 = { 0, 0 } ;
	var uLocal_987 = 0;
	struct<2> Local_988 = { 0, 0 } ;
	var uLocal_989 = 0;
	int iLocal_990 = 0;
	char[] cLocal_991[8] = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	char[] cLocal_995[8] = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	bool bLocal_999 = 0;
	int iLocal_1000 = 0;
	char cLocal_1001[48] = "";
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_48 = joaat("p_amb_phone_01");
	Local_971 = { 693.11584f, -1012.41815f, 21.72802f };
	Local_984 = { 692.8695f, -998.7867f, 22.3201f };
	Local_985 = { 693.3784f, -1025.671f, 21.506f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_111();
		func_109();
		func_107();
	}
	func_99();
	MISC::SET_MISSION_FLAG(true);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_TheAgencyHeistPrep1", 0);
		if (!iLocal_974)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_971, 200f, 200f, 200f, false, true, 0) && !CAM::IS_SPHERE_VISIBLE(Local_971, 50f))
			{
				MISC::CLEAR_AREA(Local_971, 50f, true, false, false, false);
				iLocal_974 = 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_971, 200f, 200f, 200f, false, true, 0))
		{
			iLocal_974 = 0;
		}
		if (!iLocal_979)
		{
			if (Global_96938.f_358 == MISC::GET_HASH_KEY("AHP1_TRUCKCALLED") || Global_96868)
			{
				__LIB_0__.func_498(543);
				Global_96938.f_358 = 0;
				iLocal_979 = 1;
			}
		}
		func_97();
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_802[iVar0]) && !PED::IS_PED_INJURED(iLocal_802[iVar0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_800))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_802[iVar0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f)
				{
					PED::SET_PED_KEEP_TASK(iLocal_802[iVar0], true);
					TASK::TASK_SMART_FLEE_PED(iLocal_802[iVar0], PLAYER::PLAYER_PED_ID(), 300f, 20000, true, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_802[iVar0]));
				}
			}
			iVar0++;
		}
		if (iLocal_1004 < 8 && iLocal_969 >= 0)
		{
			func_95();
		}
		switch (iLocal_969)
		{
			case -1:
				iVar1 = 0;
				while (iVar1 < iLocal_802)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_802[iVar1]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
						{
							iVar2 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar2, true)) < 30f) && VEHICLE::IS_VEHICLE_MODEL(iVar2, joaat("firetruk")))
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_803);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_803, joaat("PLAYER"));
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
								PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
							}
						}
					}
					iVar1++;
				}
				if (func_94())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 15f, 4);
					AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
					iLocal_969++;
				}
				break;
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_800))
				{
					func_94();
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()) == joaat("firetruk"))
					{
						iLocal_800 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_800, true, true);
					}
				}
				else
				{
					func_45();
					if (!iLocal_975 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false))
					{
						__LIB_0__.func_409(iLocal_800, -1);
						__LIB_0__.func_320(iLocal_800, -1);
						__LIB_0__.func_403(541, 0);
						iLocal_975 = 1;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_971) < SYSTEM::POW(100f, 2f))
					{
						PATHFIND::SET_IGNORE_NO_GPS_FLAG(true);
					}
					func_94();
					if (bLocal_980)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, false))
						{
							func_36(iLocal_801);
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801) && ENTITY::IS_ENTITY_AT_COORD(iLocal_800, Local_971, Global_19, true, true, 0))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_798))
								{
									HUD::REMOVE_BLIP(&iLocal_798);
								}
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
								iLocal_969++;
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false))
					{
						func_36(iLocal_800);
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800) && ENTITY::IS_ENTITY_AT_COORD(iLocal_800, Local_971, Global_19, true, true, 0))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_798))
							{
								HUD::REMOVE_BLIP(&iLocal_798);
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 4);
							iLocal_969++;
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
					iLocal_969 = 100;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_800))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false))
				{
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_800, true)) > 22500f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_800)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_800, true)) > 90000f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false))
				{
					if (__LIB_6__.func_762(iLocal_800, 1093140480, 1, 1056964608, 0, 1, 0))
					{
						if (!iLocal_978)
						{
							__LIB_0__.func_210("AHP_GETOUT", 7500, 1);
							iLocal_978 = 1;
						}
						AUDIO::TRIGGER_MUSIC_EVENT("AHP1_STOP");
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
						iLocal_969++;
					}
				}
				break;
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_800, Local_971, Global_19 + Vector(2f, 2f, 2f), true, true, 0))
					{
						iLocal_969 = 0;
					}
					else if (bLocal_980)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_801))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_801, iLocal_800))
							{
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_800, false, 0);
								if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_800))
								{
									VEHICLE::SET_VEHICLE_SIREN(iLocal_800, false);
								}
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_800, 2);
								HUD::CLEAR_PRINTS();
								SYSTEM::SETTIMERA(0);
								iLocal_969++;
							}
							else
							{
								VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_801, iLocal_800);
							}
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, false))
					{
						if (VEHICLE::IS_VEHICLE_SIREN_ON(iLocal_800))
						{
							VEHICLE::SET_VEHICLE_SIREN(iLocal_800, false);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_800, 2);
						HUD::CLEAR_PRINTS();
						SYSTEM::SETTIMERA(0);
						iLocal_969++;
					}
				}
				break;
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false))
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
						func_6();
					}
				}
				break;
			case 100:
				if (HUD::DOES_BLIP_EXIST(iLocal_798))
				{
					HUD::REMOVE_BLIP(&iLocal_798);
				}
				if (!__LIB_0__.func_368(13))
				{
					__LIB_0__.func_503(13, 1);
				}
				iLocal_969++;
				break;
			case 101:
				func_94();
				if (bLocal_980)
				{
					func_36(iLocal_801);
				}
				else
				{
					func_36(iLocal_800);
				}
				if (!iLocal_981)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, false)) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801, false)))
					{
						if ((ENTITY::IS_ENTITY_IN_ZONE(PLAYER::PLAYER_PED_ID(), "DAVIS" /* GXT: Davis */) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (__LIB_0__.func_502())
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_01", 0f);
							}
							else
							{
								AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_AH_PREP_02", 0f);
							}
							iLocal_981 = 1;
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_800))
				{
					func_14("AHP_LOSTTRUCK");
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						HUD::CLEAR_PRINTS();
						iLocal_969 = 0;
					}
					else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800))
					{
						if (!iLocal_977)
						{
							__LIB_0__.func_210("AHP_LOSECOPS", 7500, 1);
							iLocal_977 = 1;
							iLocal_970 = MISC::GET_GAME_TIMER();
						}
					}
					else if ((iLocal_977 && (MISC::GET_GAME_TIMER() - iLocal_970) < 7500) && HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_PRINTS();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_800, true)) > 22500f)
					{
						func_14("AHP_LOSTTRUCK");
					}
				}
				else
				{
					func_14("AHP_DEADTRUCK");
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_800))
		{
			if (!__LIB_0__.func_328(iLocal_800))
			{
				__LIB_0__.func_501(iLocal_800, 0);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_6()//Position - 0x92E
{
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	__LIB_6__.func_823(0, 0);
	func_107();
}

void func_14(char* sParam0)//Position - 0xC8B
{
	int iVar0;
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	func_20(sParam0);
	while (!__LIB_0__.func_204())
	{
		SYSTEM::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_800))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, false))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_800);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_802)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_802[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_802[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_96938.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
		{
			PED::DELETE_PED(&(Global_96938.f_9[iVar0]));
		}
		iVar0++;
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 100f, true, true, false, false);
	AUDIO::TRIGGER_MUSIC_EVENT("AHP1_FAIL");
	if (__LIB_11__.func_719())
	{
		func_111();
	}
	else if (func_17())
	{
		__LIB_0__.func_428(229.1676f, -1614.9794f, 28.2892f, 142.5156f);
	}
	func_107();
}

int func_17()//Position - 0xDF5
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 226.67654f, -1668.9421f, 25.460825f, 185.64464f, -1635.8359f, 39.29184f, 57.75f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(char* sParam0)//Position - 0xE8C
{
	__LIB_0__.func_324(sParam0);
	func_21(0);
}

void func_21(int iParam0)//Position - 0xE9F
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__.func_2(0))
	{
		iVar0 = __LIB_0__.func_323();
		if (!func_22(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_22(int iParam0)//Position - 0xEE4
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
	func_23(&(Global_113386.f_2363.f_539), iVar1);
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

void func_23(var uParam0, int iParam1)//Position - 0xFF4
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
			if (!func_25(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_25(int iParam0, var uParam1, float fParam2)//Position - 0x11C8
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
			return func_25(8, uParam1, fParam2);
			break;
		case 10:
			return func_25(8, uParam1, fParam2);
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

void func_36(int iParam0)//Position - 0x1E3C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_799))
					{
						HUD::REMOVE_BLIP(&iLocal_799);
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_799))
				{
					iLocal_799 = __LIB_6__.func_825(iParam0, 0, 0);
				}
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_799))
			{
				HUD::REMOVE_BLIP(&iLocal_799);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_798))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_973)
				{
					__LIB_0__.func_325("AHP_DROPOFF", 7500, 1);
					iLocal_973 = 1;
				}
				iLocal_798 = __LIB_0__.func_392(Local_971, 1);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_798))
			{
				HUD::REMOVE_BLIP(&iLocal_798);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_799))
			{
				HUD::CLEAR_PRINTS();
				if (!iLocal_972)
				{
					__LIB_0__.func_325("AHP_GETBAKIN", 7500, 1);
					iLocal_972 = 1;
				}
				iLocal_799 = __LIB_6__.func_825(iParam0, 0, 0);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_799))
		{
			HUD::REMOVE_BLIP(&iLocal_799);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_798))
		{
			HUD::REMOVE_BLIP(&iLocal_798);
		}
	}
}

void func_45()//Position - 0x2140
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_980)
	{
		iVar0 = iLocal_801;
	}
	else
	{
		iVar0 = iLocal_800;
	}
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		switch (iLocal_982)
		{
			case 0:
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					iVar1 = 0;
					while (iVar1 < 3)
					{
						iVar2 = __LIB_9__.func_605(iVar1);
						if ((!PED::IS_PED_INJURED(iVar2) && PED::IS_PED_IN_VEHICLE(iVar2, iVar0, false)) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == iVar2)
						{
							if (!func_91(iVar2) && __LIB_9__.func_604(iVar2, 0))
							{
								if (func_89(iVar2, 0))
								{
									iLocal_1003 = 0;
									iLocal_983 = iVar1;
									iLocal_982 = 1;
								}
							}
						}
						iVar1++;
					}
				}
				break;
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if ((((PED::IS_PED_INJURED(__LIB_9__.func_605(iLocal_983)) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != __LIB_9__.func_605(iLocal_983)) || !PED::IS_PED_IN_VEHICLE(__LIB_9__.func_605(iLocal_983), iVar0, false)) || !func_91(__LIB_9__.func_605(iLocal_983))) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
					{
						func_88(__LIB_9__.func_605(iLocal_983));
						iLocal_982 = 0;
					}
					else
					{
						switch (iLocal_1003)
						{
							case 0:
								iLocal_1003 = 2;
								break;
							case 1:
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(Local_986.f_0, Local_986.f_1, Local_988.f_0, Local_988.f_1))
								{
									iLocal_1003++;
								}
								break;
							case 2:
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(__LIB_9__.func_605(iLocal_983), iVar0, Local_971, 15f, 0, joaat("firetruk"), 786484, 5f, 5f);
								if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_971) > 250f)
								{
									VEHICLE::SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(iVar0, SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_800, true), Local_971));
								}
								iLocal_1003++;
								break;
							case 3:
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 697.6884f, -1013.3638f, 27.496796f, 688.3482f, -1013.17914f, 22.329676f, 29.25f, false, true, 0))
								{
									if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_984) < SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true), Local_985))
									{
										if (bLocal_980)
										{
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(__LIB_9__.func_605(iLocal_983), iVar0, Local_985, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
										}
										else
										{
											TASK::TASK_VEHICLE_PARK(__LIB_9__.func_605(iLocal_983), iVar0, Local_971, 180f, 1, 15f, false);
										}
									}
									else if (bLocal_980)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(__LIB_9__.func_605(iLocal_983), iVar0, Local_984, 5f, 0, ENTITY::GET_ENTITY_MODEL(iVar0), 262144, 2f, 2f);
									}
									else
									{
										TASK::TASK_VEHICLE_PARK(__LIB_9__.func_605(iLocal_983), iVar0, Local_971, 0f, 1, 15f, false);
									}
									iLocal_1003++;
								}
								break;
							case 4:
								break;
							}
						}
				}
				func_46();
				break;
		}
	}
	else if (iLocal_982 != 0)
	{
		if (func_88(__LIB_9__.func_605(iLocal_983)))
		{
			iLocal_982 = 0;
		}
	}
}

void func_46()//Position - 0x244A
{
	bool bVar0;
	var uVar1;
	bVar0 = false;
	if (!PED::IS_PED_INJURED(__LIB_9__.func_605(iLocal_983)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_800) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, false)) && PED::IS_PED_IN_VEHICLE(__LIB_9__.func_605(iLocal_983), iLocal_800, false)) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_801) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801, false)) && PED::IS_PED_IN_VEHICLE(__LIB_9__.func_605(iLocal_983), iLocal_801, false)))
		{
			bVar0 = true;
		}
	}
	switch (iLocal_990)
	{
		case 0:
			uVar1 = __LIB_28__.func_361();
			if (func_71(0, 1, 145, 0, uVar1, &cLocal_991, &cLocal_995, 1))
			{
				__LIB_0__.func_202(&uLocal_804, 0);
				__LIB_0__.func_202(&uLocal_804, 1);
				__LIB_0__.func_202(&uLocal_804, 2);
				if (__LIB_18__.func_173() == 1)
				{
					__LIB_0__.func_203(&uLocal_804, 0, __LIB_9__.func_605(0), "MICHAEL", 0, 1);
					__LIB_0__.func_203(&uLocal_804, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				else
				{
					__LIB_0__.func_203(&uLocal_804, 1, __LIB_9__.func_605(1), "FRANKLIN", 0, 1);
					__LIB_0__.func_203(&uLocal_804, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				if (!iLocal_1000)
				{
					iLocal_1002 = MISC::GET_GAME_TIMER();
				}
				iLocal_990 = 1;
			}
			break;
		case 1:
			if (bVar0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_1002) > 5000 || iLocal_1000)
				{
					if (__LIB_35__.func_536(&uLocal_804, &cLocal_991, &cLocal_995, 8, 0, 0, 0))
					{
						iLocal_1000 = 1;
						iLocal_990 = 2;
					}
				}
			}
			break;
		case 2:
			if (!bLocal_999)
			{
				if (!bVar0)
				{
					cLocal_1001 = { __LIB_0__.func_389() };
					__LIB_0__.func_296();
					bLocal_999 = true;
				}
			}
			else if (bVar0)
			{
				if (__LIB_36__.func_42(&uLocal_804, &cLocal_991, &cLocal_995, &cLocal_1001, 8, 0, 0))
				{
					bLocal_999 = false;
				}
			}
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || (!bLocal_999 && !__LIB_0__.func_75()))
			{
				__LIB_6__.func_833();
				iLocal_990 = 3;
				iLocal_1002 = MISC::GET_GAME_TIMER();
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_1002) > 10000)
			{
				iLocal_990 = 0;
			}
			break;
	}
}

int func_71(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, char* sParam5, char* sParam6, bool bParam7)//Position - 0x2FD7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_20__.func_260(iParam0);
	iVar1 = __LIB_20__.func_260(iParam1);
	iVar2 = __LIB_20__.func_260(iParam2);
	if ((iVar0 == 7 || iVar1 == 7) || (iVar2 == 7 && iParam2 != 145))
	{
		return 0;
	}
	if (iVar2 == 7)
	{
		iVar5 = __LIB_9__.func_604(iVar0, iVar1);
		if (iVar5 >= 9)
		{
			return 0;
		}
		if (((iParam0 == 1 && iParam1 == 19) && __LIB_0__.func_368(137)) && iParam3 == 1)
		{
			if (__LIB_28__.func_360(&(Global_113386.f_18103.f_388), iParam3, &iVar3, &iVar4, uParam4))
			{
				if (bParam7)
				{
					__LIB_34__.func_226(&(Global_113386.f_18103.f_388), iParam3, iVar3);
				}
				iVar3 += 6;
			}
			else
			{
				return 0;
			}
		}
		else if (__LIB_28__.func_360(&(Global_113386.f_18103.f_175[iVar5 /*19*/].f_9), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				__LIB_34__.func_226(&(Global_113386.f_18103.f_175[iVar5 /*19*/].f_9), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		iVar6 = __LIB_29__.func_832(iVar0, iVar1, iVar2);
		if (iVar6 >= 2)
		{
			return 0;
		}
		if (__LIB_28__.func_360(&(Global_113386.f_18103.f_347[iVar6 /*7*/]), iParam3, &iVar3, &iVar4, uParam4))
		{
			if (bParam7)
			{
				__LIB_34__.func_226(&(Global_113386.f_18103.f_347[iVar6 /*7*/]), iParam3, iVar3);
			}
		}
		else
		{
			return 0;
		}
	}
	*sParam6 = { __LIB_34__.func_227(iVar0, iVar1, iVar2, 2) };
	*sParam5 = { *sParam6 };
	StringConCat(sParam5, "AU", 16);
	StringConCat(sParam6, "_", 16);
	if (iVar3 == 0)
	{
		StringConCat(sParam6, "A", 16);
	}
	else if (iVar3 == 1)
	{
		StringConCat(sParam6, "B", 16);
	}
	else if (iVar3 == 2)
	{
		StringConCat(sParam6, "C", 16);
	}
	else if (iVar3 == 3)
	{
		StringConCat(sParam6, "D", 16);
	}
	else if (iVar3 == 4)
	{
		StringConCat(sParam6, "E", 16);
	}
	else if (iVar3 == 5)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iVar3 == 6)
	{
		StringConCat(sParam6, "G", 16);
	}
	else if (iVar3 == 7)
	{
		StringConCat(sParam6, "H", 16);
	}
	else if (iVar3 == 8)
	{
		StringConCat(sParam6, "I", 16);
	}
	else if (iVar3 == 9)
	{
		StringConCat(sParam6, "J", 16);
	}
	else if (iVar3 == 10)
	{
		StringConCat(sParam6, "K", 16);
	}
	else if (iVar3 == 11)
	{
		StringConCat(sParam6, "L", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	if (iParam3 == 0)
	{
		StringConCat(sParam6, "F", 16);
	}
	else if (iParam3 == 1)
	{
		StringConCat(sParam6, "M", 16);
	}
	else if (iParam3 == 2)
	{
		StringConCat(sParam6, "D", 16);
	}
	else
	{
		StringConCat(sParam6, "X", 16);
		return 0;
	}
	StringIntConCat(sParam6, iVar4, 16);
	return 1;
}

int func_88(int iParam0)//Position - 0x3B00
{
	bool bVar0;
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_18__.func_168(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (__LIB_9__.func_605(bVar0) != iParam0)
		{
			return 0;
		}
		if (!BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		MISC::CLEAR_BIT(&Global_96295, bVar0);
		return 1;
	}
	return 0;
}

int func_89(int iParam0, int iParam1)//Position - 0x3B55
{
	bool bVar0;
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_18__.func_168(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (__LIB_9__.func_605(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				return 0;
			}
		}
		if (BitTest(Global_96294, bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, false, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, false, 1);
			MISC::SET_BIT(&Global_96295, bVar0);
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0)//Position - 0x3C2F
{
	bool bVar0;
	return 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_18__.func_168(iParam0);
		if (bVar0 > 3)
		{
			return 0;
		}
		if (__LIB_9__.func_605(bVar0) != iParam0)
		{
			return 0;
		}
		if (BitTest(Global_96295, bVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_94()//Position - 0x3CE1
{
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_800) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_801)
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("firetruk")))
		{
			iLocal_800 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_800, true, true);
			iLocal_975 = 0;
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck2")))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))), false))
				{
					iLocal_801 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_801, true, true);
					if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_801)) != iLocal_800)
					{
						iLocal_800 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)));
						iLocal_975 = 0;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_800, true, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_95()//Position - 0x3E04
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	if (iLocal_1004 < 8)
	{
		if (iLocal_1004 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iLocal_1004]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[iLocal_1004]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[iLocal_1004], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 900f)
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[iLocal_1004], true, true);
						iLocal_802[iLocal_1004] = Global_96938.f_9[iLocal_1004];
						bVar0 = true;
						Global_96938.f_9[iLocal_1004] = 0;
					}
					else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[iLocal_1004], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 2500f && ENTITY::IS_ENTITY_OCCLUDED(Global_96938.f_9[iLocal_1004]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[iLocal_1004], true, true);
						PED::DELETE_PED(&(Global_96938.f_9[iLocal_1004]));
					}
				}
			}
		}
		if (!bVar0)
		{
			if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, true, true, &iVar1, false, true, 21))
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1)) && !__LIB_11__.func_719(iVar1, &iLocal_802))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					iLocal_802[iLocal_1004] = iVar1;
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			if (!PED::IS_PED_INJURED(iLocal_802[iLocal_1004]))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_802[iLocal_1004], iLocal_803);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_802[iLocal_1004], 17, false);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
			}
			iLocal_1004++;
		}
	}
}

void func_97()//Position - 0x3FE5
{
	if (bLocal_980)
	{
		if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, false) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, false) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_800, iLocal_801))) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_800, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_800, false))) || (ENTITY::DOES_ENTITY_EXIST(iLocal_801) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_801, true)) > 250f))
		{
			bLocal_980 = false;
		}
	}
	else if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_801, false) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_801, false)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_800, iLocal_801))
	{
		bLocal_980 = true;
	}
}

void func_99()//Position - 0x4112
{
	struct<3> Var0;
	int iVar1;
	if ((ENTITY::DOES_ENTITY_EXIST(Global_96938[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96938[0], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
		iLocal_800 = Global_96938[0];
		Global_96938[0] = 0;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Global_96938[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96938[1], false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))), false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[1], true, true);
			iLocal_801 = Global_96938[1];
			Global_96938[1] = 0;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
			iLocal_800 = Global_96938[0];
			Global_96938[0] = 0;
			bLocal_980 = true;
		}
	}
	HUD::REQUEST_ADDITIONAL_TEXT("AHPREP1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("FireMen", &iLocal_803);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_803);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_803, joaat("PLAYER"));
	if (__LIB_0__.func_2(0))
	{
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_Fireman_01"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Fireman_01")))
		{
			SYSTEM::WAIT(0);
		}
		Var0 = { 202.0504f, -1655.7734f, 28.8031f };
		iLocal_1005 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(10f, 30f, 30f), Var0 + Vector(10f, 30f, 30f), false, true, true, true);
		MISC::CLEAR_AREA(Var0, 20f, true, false, false, false);
		iLocal_802[0] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, true, true);
		iLocal_802[1] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 214.4446f, -1643.7203f, 28.7776f, 279.1055f, true, true);
		iLocal_802[2] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 217.0826f, -1644.1172f, 28.7155f, 72.8262f, true, true);
		iVar1 = 0;
		while (iVar1 <= (iLocal_802 - 1))
		{
			if (!PED::IS_PED_INJURED(iLocal_802[iVar1]))
			{
				TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_802[iVar1], "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_802[iVar1], 17, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_802[iVar1], iLocal_803);
			}
			iVar1++;
		}
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), iLocal_803);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_803, joaat("PLAYER"));
		iLocal_969 = -1;
		if (__LIB_0__.func_294())
		{
			__LIB_0__.func_370(354.3055f, -1722.2062f, 28.259f, 109.6154f, 1, 0);
			__LIB_6__.func_775(0, -1, 1);
		}
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	if (func_17())
	{
		iLocal_976 = 1;
	}
	if (!__LIB_0__.func_2(0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AHP1_START");
	}
	iLocal_975 = 0;
	__LIB_11__.func_731(68);
}

void func_107()//Position - 0x468C
{
	__LIB_11__.func_729();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_800))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_800);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1005, false);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_109()//Position - 0x46C2
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
				if (!func_22(iVar0))
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

void func_111()//Position - 0x4771
{
	if (iLocal_976 == 1)
	{
		__LIB_0__.func_428(354.3055f, -1722.2062f, 28.259f, 109.6154f);
	}
}

