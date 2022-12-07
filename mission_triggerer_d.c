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
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 16;
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
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 16;
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
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	struct<3> Local_419 = { 0, 0, 0 } ;
	struct<3> Local_420 = { 0, 0, 0 } ;
	int iLocal_421 = 0;
	struct<3> Local_422 = { 0, 0, 0 } ;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	int iLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	struct<3> Local_430 = { 0, 0, 0 } ;
	int iLocal_431 = 0;
	var uLocal_432 = 4;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 4;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 4;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 4;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 4;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 4;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 4;
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
	var uLocal_480 = 4;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 3;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	struct<3> Local_499 = { 0, 0, 0 } ;
	struct<3> Local_500 = { 0, 0, 0 } ;
	struct<3> Local_501 = { 0, 0, 0 } ;
	struct<3> Local_502 = { 0, 0, 0 } ;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	int iLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 16;
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
	struct<3> Local_674 = { 0, 0, 0 } ;
	struct<3> Local_675 = { 0, 0, 0 } ;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	struct<3> Local_681 = { 0, 0, 0 } ;
	float fLocal_682 = 0f;
	float fLocal_683 = 0f;
	float fLocal_684 = 0f;
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
	struct<3> Local_701 = { 0, 0, 0 } ;
	struct<3> Local_702 = { 0, 0, 0 } ;
	var uLocal_703 = 16;
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
	struct<3> Local_874 = { 0, 0, 0 } ;
	struct<3> Local_875 = { 0, 0, 0 } ;
	struct<3> Local_876 = { 0, 0, 0 } ;
	float fLocal_877 = 0f;
	float fLocal_878 = 0f;
	float fLocal_879 = 0f;
	var uLocal_880 = 16;
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
	int iLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	struct<3> Local_1052 = { 0, 0, 0 } ;
	struct<3> Local_1053 = { 0, 0, 0 } ;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	float fLocal_1057 = 0f;
	float fLocal_1058 = 0f;
	float fLocal_1059 = 0f;
	float fLocal_1060 = 0f;
	float fLocal_1061 = 0f;
	var uLocal_1062 = 0;
	int iLocal_1063 = 0;
	int iLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 263;
	var uLocal_1068 = 0;
	var uLocal_1069 = 1065353216;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	struct<3> Local_1074 = { 0, 0, 0 } ;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 2;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	struct<3> Local_1081 = { 0, 0, 0 } ;
	struct<3> Local_1082 = { 0, 0, 0 } ;
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
	var uLocal_1094 = 49;
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
	var uLocal_1144 = 2;
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
	struct<3> Local_1163 = { 0, 0, 0 } ;
	var uLocal_1164 = 0;
	struct<3> Local_1165 = { 0, 0, 0 } ;
	var uLocal_1166 = 0;
	char* sLocal_1167 = NULL;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	struct<3> Local_1171 = { 0, 0, 0 } ;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	int iLocal_1176 = 0;
	int iLocal_1177 = 0;
	int iLocal_1178 = 0;
	int iLocal_1179 = 0;
	int iLocal_1180 = 0;
	int iLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	int* iLocal_1185 = NULL;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	int iLocal_1188 = 0;
	int iLocal_1189 = 0;
	struct<3> Local_1190 = { 0, 0, 0 } ;
	struct<3> Local_1191 = { 0, 0, 0 } ;
	struct<8> Local_1192 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1193 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_1194 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_1195 = 0f;
	int iLocal_1196 = 0;
	int iLocal_1197 = 0;
	int iLocal_1198 = 0;
	int iLocal_1199[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	int iLocal_1203 = 0;
	int iLocal_1204[3] = { 0, 0, 0 };
	int iLocal_1205 = 0;
	int iLocal_1206 = 0;
	int iLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	struct<3> Local_1212 = { 0, 0, 0 } ;
	struct<3> Local_1213 = { 0, 0, 0 } ;
	var uLocal_1214 = 0;
	struct<3> Local_1215 = { 0, 0, 0 } ;
	float fLocal_1216 = 0f;
	float fLocal_1217 = 0f;
	float fLocal_1218 = 0f;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 16;
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
	char cLocal_1407[32] = "";
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	char* sLocal_1412 = NULL;
	char* sLocal_1413 = NULL;
	var uLocal_1414 = 263;
	var uLocal_1415 = 0;
	var uLocal_1416 = 1065353216;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	struct<3> Local_1422 = { 0, 0, 0 } ;
	struct<3> Local_1423 = { 0, 0, 0 } ;
	var uLocal_1424 = 263;
	var uLocal_1425 = 0;
	var uLocal_1426 = 1065353216;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	float fLocal_1435 = 0f;
	int iLocal_1436 = 0;
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
	int iLocal_1458 = 0;
	int iLocal_1459 = 0;
	int iLocal_1460 = 0;
	int iLocal_1461 = 0;
	var uLocal_1462 = 0;
	float fLocal_1463 = 0f;
	float fLocal_1464 = 0f;
	float fLocal_1465 = 0f;
	float fLocal_1466 = 0f;
	float fLocal_1467 = 0f;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 263;
	var uLocal_1472 = 0;
	var uLocal_1473 = 1065353216;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	float fLocal_1482 = 0f;
	float fLocal_1483 = 0f;
	float fLocal_1484 = 0f;
	float fLocal_1485 = 0f;
	float fLocal_1486 = 0f;
	int iLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	struct<3> Local_1491 = { 0, 0, 0 } ;
	struct<3> Local_1492 = { 0, 0, 0 } ;
	struct<3> Local_1493 = { 0, 0, 0 } ;
	float fLocal_1494 = 0f;
	float fLocal_1495 = 0f;
	float fLocal_1496 = 0f;
	var uLocal_1497 = 16;
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
	var uLocal_1662 = 16;
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
	var uLocal_1772 = 0;
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
	var uLocal_1785 = 0;
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
	var uLocal_1809 = 0;
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
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	struct<3> Local_1827 = { 0, 0, 0 } ;
	struct<3> Local_1828 = { 0, 0, 0 } ;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	struct<3> Local_1835 = { 0, 0, 0 } ;
	float fLocal_1836 = 0f;
	float fLocal_1837 = 0f;
	float fLocal_1838 = 0f;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 16;
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
	struct<3> Local_2013 = { 0, 0, 0 } ;
	struct<3> Local_2014 = { 0, 0, 0 } ;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	struct<116> Var0;
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
	iLocal_238 = 1496005418;
	iLocal_239 = -1863079210;
	Local_430 = { 500f, 500f, 500f };
	iLocal_431 = -1;
	iLocal_493 = -1;
	iLocal_494 = -1;
	Local_499 = { 1987.235f, 3052.738f, 46.22f };
	Local_500 = { 1986.785f, 3052.088f, 46.32f };
	Local_501 = { 1987.035f, 3052.288f, 46.34f };
	Local_502 = { 0f, 0f, 53.64f };
	iLocal_505 = 999;
	Local_674 = { -1159.737f, -1520.509f, 9.629f };
	Local_675 = { 0f, 0f, 45f };
	Local_681 = { -1158.2783f, -1521.0677f, 11.3094f };
	fLocal_682 = 0.65f;
	fLocal_683 = 0f;
	fLocal_684 = 35f;
	Local_701 = { -1159.9227f, -1520.5026f, 9.6327f };
	Local_702 = { 0f, 0f, 40f };
	Local_874 = { -1159.9227f, -1520.5026f, 9.6327f };
	Local_875 = { 0f, 0f, 40f };
	Local_876 = { -1158.2783f, -1521.0677f, 10.8094f };
	fLocal_877 = 0.65f;
	fLocal_878 = -0.16f;
	fLocal_879 = 35f;
	iLocal_1049 = -1;
	Local_1052 = { -440.132f, 1058.52f, 326.69f };
	Local_1053 = { 0f, 0f, 0f };
	fLocal_1057 = 30f;
	fLocal_1058 = 0.38f;
	fLocal_1059 = 0f;
	fLocal_1060 = 0.095f;
	fLocal_1061 = 0.05f;
	iLocal_1063 = -1;
	iLocal_1064 = -1;
	Local_1074 = { 0.2f, 2.2f, 0f };
	Local_1081 = { 0f, 0f, 0f };
	Local_1082 = { Local_1081 };
	Local_1163 = { 0f, 0f, 0f };
	Local_1165 = { 0f, 0f, 0f };
	sLocal_1167 = "FBIPRAU";
	Local_1171 = { 0f, 0f, 0f };
	iLocal_1178 = -1;
	iLocal_1179 = -1;
	iLocal_1180 = -1;
	Local_1190 = { 1276.88f, -1712.571f, 54.415f };
	Local_1191 = { 0f, 0f, -142.02f };
	fLocal_1195 = -0.64f;
	Local_1212 = { 95.84f, -1291.44f, 28.275f };
	Local_1213 = { 0f, 0f, 30f };
	Local_1215 = { 92.83592f, -1291.2959f, 29.36181f };
	fLocal_1216 = 0.35f;
	fLocal_1217 = 0f;
	fLocal_1218 = 40f;
	StringCopy(&cLocal_1407, "jhp1a_sec_arrive", 32);
	sLocal_1412 = "jhp2a_alt";
	sLocal_1413 = "jhp2a_main";
	Local_1422 = { 441.86075f, -1015.75806f, 27.66605f };
	Local_1423 = { -1511.4557f, -654.47925f, 28.23983f };
	fLocal_1435 = 999999f;
	iLocal_1436 = -1;
	iLocal_1461 = 613961892;
	fLocal_1463 = 30f;
	fLocal_1464 = 0.46f;
	fLocal_1465 = 0f;
	fLocal_1466 = -0.02f;
	fLocal_1467 = 0.1f;
	fLocal_1482 = 25f;
	fLocal_1483 = 0.5f;
	fLocal_1484 = 0f;
	fLocal_1485 = -0.005f;
	fLocal_1486 = 0.1f;
	Local_1491 = { -803.523f, 171.887f, 72.321f };
	Local_1492 = { 0f, 0f, -59.24f };
	Local_1493 = { -803.8107f, 172.2809f, 73.0846f };
	fLocal_1494 = 0.35f;
	fLocal_1495 = -0.02f;
	fLocal_1496 = 30f;
	Local_1827 = { 1972.956f, 3812.079f, 32.84f };
	Local_1828 = { 0f, 0f, 31f };
	Local_1835 = { 1972.9822f, 3814.1045f, 33.9045f };
	fLocal_1836 = 0.35f;
	fLocal_1837 = -0.78f;
	fLocal_1838 = 30f;
	Local_2013 = { -1148.219f, -1522.4f, 10.633f };
	Local_2014 = { 0f, 0f, -53.75f };
	Var0.f_1 = 8;
	Var0.f_115.f_7 = 21;
	Var0.f_115.f_8 = 6;
	Var0.f_110 = 0;
	Var0.f_111 = -1;
	Var0.f_0 = 31864/*func_168*/;
	__LIB_30__::func_346();
	while (true)
	{
		if (!Var0.f_106)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false))
			{
				Var0.f_106 = 1;
				if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(115))
				{
					if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 1)
					{
						__LIB_42__::func_0(&Var0);
						Var0.f_106 = 0;
					}
					else
					{
						__LIB_42__::func_544(&Var0);
					}
				}
			}
		}
		if (!__LIB_0__::func_176(46) || Global_113386.f_9085.f_1)
		{
			__LIB_42__::func_544(&Var0);
		}
		__LIB_42__::func_854(&Var0);
		SYSTEM::WAIT(0);
	}
}

void func_168(int iParam0, var uParam1, var uParam2)//Position - 0x7C78
{
	switch (iParam0)
	{
		case 66:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 574571/*func_1058*/;
			uParam2->f_2 = 574525/*func_1057*/;
			uParam2->f_3 = 574466/*func_1056*/;
			uParam2->f_4 = 574410/*func_1055*/;
			uParam2->f_5 = 573991/*func_1054*/;
			uParam2->f_6 = 573940/*func_1053*/;
			uParam2->f_7 = 573889/*func_1052*/;
			uParam2->f_10 = 573700/*func_1051*/;
			uParam2->f_11 = 573597/*func_1050*/;
			uParam2->f_12 = 573588/*func_1049*/;
			uParam2->f_8 = 572261/*func_1047*/;
			uParam2->f_9 = 572178/*func_1046*/;
			break;
		case 68:
			__LIB_30__::func_345(uParam1, iParam0, 80f, 100f, 50f, 3, 500f, 1);
			uParam2->f_1 = 572170/*func_1045*/;
			uParam2->f_2 = 572144/*func_1044*/;
			uParam2->f_3 = 572108/*func_1043*/;
			uParam2->f_4 = 572077/*func_1042*/;
			uParam2->f_5 = 571792/*func_1041*/;
			uParam2->f_6 = 571574/*func_1039*/;
			uParam2->f_7 = 571491/*func_1038*/;
			uParam2->f_10 = 570327/*func_1035*/;
			uParam2->f_11 = 570318/*func_1034*/;
			uParam2->f_12 = 570309/*func_1033*/;
			uParam2->f_8 = 570070/*func_1032*/;
			uParam2->f_9 = 569944/*func_1029*/;
			break;
		case 69:
			__LIB_30__::func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 569928/*func_1028*/;
			uParam2->f_2 = 569883/*func_1027*/;
			uParam2->f_3 = 569828/*func_1026*/;
			uParam2->f_4 = 569760/*func_1025*/;
			uParam2->f_5 = 569099/*func_1024*/;
			uParam2->f_6 = 569018/*func_1023*/;
			uParam2->f_7 = 568937/*func_1022*/;
			uParam2->f_10 = 568156/*func_1019*/;
			uParam2->f_11 = 568016/*func_1018*/;
			uParam2->f_12 = 568001/*func_1017*/;
			uParam2->f_8 = 567993/*func_1016*/;
			uParam2->f_9 = 567985/*func_1015*/;
			break;
		case 70:
			__LIB_30__::func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 567973/*func_1014*/;
			uParam2->f_2 = 567910/*func_1013*/;
			uParam2->f_3 = 567847/*func_1012*/;
			uParam2->f_4 = 567751/*func_1011*/;
			uParam2->f_5 = 545342/*func_952*/;
			uParam2->f_6 = 545193/*func_951*/;
			uParam2->f_7 = 545044/*func_950*/;
			uParam2->f_10 = 545008/*func_949*/;
			uParam2->f_11 = 544999/*func_948*/;
			uParam2->f_12 = 544990/*func_947*/;
			uParam2->f_8 = 543850/*func_942*/;
			uParam2->f_9 = 543842/*func_941*/;
			break;
		case 4:
			__LIB_30__::func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 543834/*func_940*/;
			uParam2->f_2 = 543814/*func_939*/;
			uParam2->f_3 = 543802/*func_938*/;
			uParam2->f_4 = 543783/*func_937*/;
			uParam2->f_5 = 543726/*func_936*/;
			uParam2->f_6 = 543707/*func_935*/;
			uParam2->f_7 = 543688/*func_934*/;
			uParam2->f_10 = 543572/*func_933*/;
			uParam2->f_11 = 543563/*func_932*/;
			uParam2->f_12 = 543554/*func_931*/;
			uParam2->f_8 = 543439/*func_930*/;
			uParam2->f_9 = 543431/*func_929*/;
			break;
		case 5:
			__LIB_30__::func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 543423/*func_928*/;
			uParam2->f_2 = 543403/*func_927*/;
			uParam2->f_3 = 543391/*func_926*/;
			uParam2->f_4 = 543372/*func_925*/;
			uParam2->f_5 = 543364/*func_924*/;
			uParam2->f_6 = 543356/*func_923*/;
			uParam2->f_7 = 543348/*func_922*/;
			uParam2->f_10 = 543256/*func_921*/;
			uParam2->f_11 = 543247/*func_920*/;
			uParam2->f_12 = 543225/*func_919*/;
			uParam2->f_8 = 543110/*func_918*/;
			uParam2->f_9 = 543102/*func_917*/;
			break;
		case 6:
			__LIB_30__::func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 543094/*func_916*/;
			uParam2->f_2 = 543074/*func_915*/;
			uParam2->f_3 = 543062/*func_914*/;
			uParam2->f_4 = 543043/*func_913*/;
			uParam2->f_5 = 543035/*func_912*/;
			uParam2->f_6 = 543027/*func_911*/;
			uParam2->f_7 = 543019/*func_910*/;
			uParam2->f_10 = 542919/*func_909*/;
			uParam2->f_11 = 542910/*func_908*/;
			uParam2->f_12 = 542888/*func_907*/;
			uParam2->f_8 = 542773/*func_906*/;
			uParam2->f_9 = 542765/*func_905*/;
			break;
		case 7:
			__LIB_30__::func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0f, 4);
			uParam2->f_1 = 542757/*func_904*/;
			uParam2->f_2 = 542737/*func_903*/;
			uParam2->f_3 = 542725/*func_902*/;
			uParam2->f_4 = 542706/*func_901*/;
			uParam2->f_5 = 542618/*func_900*/;
			uParam2->f_6 = 542599/*func_899*/;
			uParam2->f_7 = 542580/*func_898*/;
			uParam2->f_10 = 542488/*func_897*/;
			uParam2->f_11 = 542479/*func_896*/;
			uParam2->f_12 = 542457/*func_895*/;
			uParam2->f_8 = 542309/*func_893*/;
			uParam2->f_9 = 542301/*func_892*/;
			break;
		case 11:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 542293/*func_891*/;
			uParam2->f_2 = 542285/*func_890*/;
			uParam2->f_3 = 542277/*func_889*/;
			uParam2->f_4 = 542268/*func_888*/;
			uParam2->f_5 = 542260/*func_887*/;
			uParam2->f_6 = 542252/*func_886*/;
			uParam2->f_7 = 542244/*func_885*/;
			uParam2->f_10 = 542172/*func_884*/;
			uParam2->f_11 = 542163/*func_883*/;
			uParam2->f_12 = 542154/*func_882*/;
			uParam2->f_8 = 542146/*func_881*/;
			uParam2->f_9 = 542138/*func_880*/;
			break;
		case 22:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 542130/*func_879*/;
			uParam2->f_2 = 542122/*func_878*/;
			uParam2->f_3 = 542114/*func_877*/;
			uParam2->f_4 = 542105/*func_876*/;
			uParam2->f_5 = 542097/*func_875*/;
			uParam2->f_6 = 542085/*func_874*/;
			uParam2->f_7 = 542073/*func_873*/;
			uParam2->f_10 = 542001/*func_872*/;
			uParam2->f_11 = 541992/*func_871*/;
			uParam2->f_12 = 541983/*func_870*/;
			uParam2->f_8 = 541975/*func_869*/;
			uParam2->f_9 = 541967/*func_868*/;
			break;
		case 23:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 541939/*func_867*/;
			uParam2->f_2 = 541919/*func_866*/;
			uParam2->f_3 = 541866/*func_865*/;
			uParam2->f_4 = 541839/*func_864*/;
			uParam2->f_5 = 541808/*func_863*/;
			uParam2->f_6 = 541715/*func_862*/;
			uParam2->f_7 = 541629/*func_861*/;
			uParam2->f_10 = 541560/*func_860*/;
			uParam2->f_11 = 541529/*func_859*/;
			uParam2->f_12 = 541520/*func_858*/;
			uParam2->f_8 = 526144/*func_841*/;
			uParam2->f_9 = 526136/*func_840*/;
			break;
		case 24:
			__LIB_30__::func_345(uParam1, iParam0, 100f, 110f, 50f, 0, 0, 0);
			uParam2->f_1 = 526128/*func_839*/;
			uParam2->f_2 = 526120/*func_838*/;
			uParam2->f_3 = 526112/*func_837*/;
			uParam2->f_4 = 526103/*func_836*/;
			uParam2->f_5 = 525917/*func_835*/;
			uParam2->f_6 = 525859/*func_834*/;
			uParam2->f_7 = 525801/*func_833*/;
			uParam2->f_10 = 525610/*func_832*/;
			uParam2->f_11 = 525601/*func_831*/;
			uParam2->f_12 = 525592/*func_830*/;
			uParam2->f_8 = 525462/*func_829*/;
			uParam2->f_9 = 525454/*func_828*/;
			break;
		case 25:
			__LIB_30__::func_345(uParam1, iParam0, 120f, 130f, 50f, 0, 0, 0);
			uParam2->f_1 = 525446/*func_827*/;
			uParam2->f_2 = 525438/*func_826*/;
			uParam2->f_3 = 525430/*func_825*/;
			uParam2->f_4 = 525421/*func_824*/;
			uParam2->f_5 = 525261/*func_823*/;
			uParam2->f_6 = 525234/*func_822*/;
			uParam2->f_7 = 525187/*func_820*/;
			uParam2->f_10 = 524975/*func_818*/;
			uParam2->f_11 = 524966/*func_817*/;
			uParam2->f_12 = 524957/*func_816*/;
			uParam2->f_8 = 522201/*func_811*/;
			uParam2->f_9 = 522193/*func_810*/;
			break;
		case 26:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 522177/*func_809*/;
			uParam2->f_2 = 521908/*func_806*/;
			uParam2->f_3 = 521839/*func_805*/;
			uParam2->f_4 = 521769/*func_804*/;
			uParam2->f_5 = 521280/*func_802*/;
			uParam2->f_6 = 520930/*func_801*/;
			uParam2->f_7 = 520711/*func_797*/;
			uParam2->f_10 = 520509/*func_795*/;
			uParam2->f_11 = 520367/*func_794*/;
			uParam2->f_12 = 520358/*func_793*/;
			uParam2->f_8 = 503274/*func_774*/;
			uParam2->f_9 = 503266/*func_773*/;
			break;
		case 78:
			__LIB_30__::func_345(uParam1, iParam0, 140f, 150f, 50f, 7, 500f, 0);
			uParam2->f_1 = 503258/*func_772*/;
			uParam2->f_2 = 503223/*func_771*/;
			uParam2->f_3 = 503188/*func_770*/;
			uParam2->f_4 = 503121/*func_769*/;
			uParam2->f_5 = 502013/*func_766*/;
			uParam2->f_6 = 501932/*func_765*/;
			uParam2->f_7 = 501851/*func_764*/;
			uParam2->f_10 = 501566/*func_761*/;
			uParam2->f_11 = 501523/*func_760*/;
			uParam2->f_12 = 501514/*func_759*/;
			uParam2->f_8 = 501506/*func_758*/;
			uParam2->f_9 = 501498/*func_757*/;
			break;
		case 79:
			__LIB_30__::func_345(uParam1, iParam0, 130f, 150f, 50f, 7, 500f, 0);
			uParam2->f_1 = 501433/*func_756*/;
			uParam2->f_2 = 501379/*func_755*/;
			uParam2->f_3 = 501329/*func_754*/;
			uParam2->f_4 = 501252/*func_753*/;
			uParam2->f_5 = 499394/*func_751*/;
			uParam2->f_6 = 499293/*func_750*/;
			uParam2->f_7 = 499158/*func_749*/;
			uParam2->f_10 = 498766/*func_747*/;
			uParam2->f_11 = 498621/*func_744*/;
			uParam2->f_12 = 498607/*func_743*/;
			uParam2->f_8 = 497467/*func_741*/;
			uParam2->f_9 = 497459/*func_740*/;
			break;
		case 80:
		case 81:
		case 82:
			__LIB_30__::func_345(uParam1, iParam0, 150f, 160f, 50f, 0, 0f, 1);
			uParam2->f_1 = 497421/*func_739*/;
			uParam2->f_2 = 497404/*func_738*/;
			uParam2->f_3 = 497387/*func_737*/;
			uParam2->f_4 = 497362/*func_736*/;
			uParam2->f_5 = 497060/*func_733*/;
			uParam2->f_6 = 496964/*func_732*/;
			uParam2->f_7 = 496868/*func_731*/;
			uParam2->f_10 = 495971/*func_725*/;
			uParam2->f_11 = 495962/*func_724*/;
			uParam2->f_12 = 495953/*func_723*/;
			uParam2->f_8 = 495704/*func_722*/;
			uParam2->f_9 = 490321/*func_701*/;
			break;
		case 83:
			__LIB_30__::func_345(uParam1, iParam0, 300f, 320f, 225f, 0, 500f, 0);
			uParam2->f_1 = 490313/*func_700*/;
			uParam2->f_2 = 490296/*func_699*/;
			uParam2->f_3 = 490279/*func_698*/;
			uParam2->f_4 = 490254/*func_697*/;
			uParam2->f_5 = 490059/*func_696*/;
			uParam2->f_6 = 490014/*func_695*/;
			uParam2->f_7 = 489969/*func_694*/;
			uParam2->f_10 = 489879/*func_693*/;
			uParam2->f_11 = 489704/*func_692*/;
			uParam2->f_12 = 489690/*func_691*/;
			uParam2->f_8 = 489682/*func_690*/;
			uParam2->f_9 = 489674/*func_689*/;
			break;
		case 77:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 489666/*func_688*/;
			uParam2->f_2 = 489620/*func_687*/;
			uParam2->f_3 = 489574/*func_686*/;
			uParam2->f_4 = 489498/*func_685*/;
			uParam2->f_5 = 489043/*func_683*/;
			uParam2->f_6 = 488996/*func_682*/;
			uParam2->f_7 = 488949/*func_681*/;
			uParam2->f_10 = 481902/*func_675*/;
			uParam2->f_11 = 481751/*func_674*/;
			uParam2->f_12 = 481742/*func_673*/;
			uParam2->f_8 = 481734/*func_672*/;
			uParam2->f_9 = 481726/*func_671*/;
			break;
		case 84:
			__LIB_30__::func_345(uParam1, iParam0, 40f, 55f, 50f, 0, 0, 0);
			uParam2->f_1 = 481718/*func_670*/;
			uParam2->f_2 = 481704/*func_669*/;
			uParam2->f_3 = 481690/*func_668*/;
			uParam2->f_4 = 481669/*func_667*/;
			uParam2->f_5 = 481111/*func_662*/;
			uParam2->f_6 = 481087/*func_661*/;
			uParam2->f_7 = 481063/*func_660*/;
			uParam2->f_10 = 481005/*func_659*/;
			uParam2->f_11 = 480996/*func_658*/;
			uParam2->f_12 = 480987/*func_657*/;
			uParam2->f_8 = 480979/*func_656*/;
			uParam2->f_9 = 480971/*func_655*/;
			break;
		case 85:
			__LIB_30__::func_345(uParam1, iParam0, 40f, 55f, 50f, 0, 0, 0);
			uParam2->f_1 = 480963/*func_654*/;
			uParam2->f_2 = 480949/*func_653*/;
			uParam2->f_3 = 480878/*func_651*/;
			uParam2->f_4 = 480842/*func_649*/;
			uParam2->f_5 = 480784/*func_647*/;
			uParam2->f_6 = 480760/*func_646*/;
			uParam2->f_7 = 480736/*func_645*/;
			uParam2->f_10 = 480441/*func_644*/;
			uParam2->f_11 = 480432/*func_643*/;
			uParam2->f_12 = 480372/*func_641*/;
			uParam2->f_8 = 480364/*func_640*/;
			uParam2->f_9 = 480356/*func_639*/;
			break;
		case 42:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 480348/*func_638*/;
			uParam2->f_2 = 480340/*func_637*/;
			uParam2->f_3 = 480332/*func_636*/;
			uParam2->f_4 = 480323/*func_635*/;
			uParam2->f_5 = 480301/*func_634*/;
			uParam2->f_6 = 480289/*func_633*/;
			uParam2->f_7 = 480277/*func_632*/;
			uParam2->f_10 = 480199/*func_631*/;
			uParam2->f_11 = 480190/*func_630*/;
			uParam2->f_12 = 480181/*func_629*/;
			uParam2->f_8 = 480127/*func_628*/;
			uParam2->f_9 = 480119/*func_627*/;
			break;
		case 47:
			__LIB_30__::func_345(uParam1, iParam0, 150f, 175f, 50f, 0, 0, 0);
			uParam2->f_1 = 480090/*func_626*/;
			uParam2->f_2 = 479953/*func_623*/;
			uParam2->f_3 = 479873/*func_622*/;
			uParam2->f_4 = 479690/*func_619*/;
			uParam2->f_5 = 60803/*func_282*/;
			uParam2->f_6 = 60636/*func_281*/;
			uParam2->f_7 = 60469/*func_280*/;
			uParam2->f_10 = 59419/*func_278*/;
			uParam2->f_11 = 58975/*func_277*/;
			uParam2->f_12 = 58966/*func_276*/;
			uParam2->f_8 = 58958/*func_275*/;
			uParam2->f_9 = 58950/*func_274*/;
			break;
		case 48:
			__LIB_30__::func_345(uParam1, iParam0, 50f, 75f, 50f, 0, 0, 0);
			uParam2->f_1 = 58934/*func_273*/;
			uParam2->f_2 = 58926/*func_272*/;
			uParam2->f_3 = 58918/*func_271*/;
			uParam2->f_4 = 58909/*func_270*/;
			uParam2->f_5 = 58901/*func_269*/;
			uParam2->f_6 = 58893/*func_268*/;
			uParam2->f_7 = 58885/*func_267*/;
			uParam2->f_10 = 58704/*func_266*/;
			uParam2->f_11 = 58695/*func_265*/;
			uParam2->f_12 = 58686/*func_264*/;
			uParam2->f_8 = 58678/*func_263*/;
			uParam2->f_9 = 58670/*func_262*/;
			break;
		case 49:
			__LIB_30__::func_345(uParam1, iParam0, 180f, 190f, 50f, 0, 0, 0);
			uParam2->f_1 = 58662/*func_261*/;
			uParam2->f_2 = 58654/*func_260*/;
			uParam2->f_3 = 58646/*func_259*/;
			uParam2->f_4 = 58633/*func_258*/;
			uParam2->f_5 = 58625/*func_257*/;
			uParam2->f_6 = 58617/*func_256*/;
			uParam2->f_7 = 58609/*func_255*/;
			uParam2->f_10 = 58537/*func_254*/;
			uParam2->f_11 = 58528/*func_253*/;
			uParam2->f_12 = 57377/*func_246*/;
			uParam2->f_8 = 57369/*func_245*/;
			uParam2->f_9 = 57361/*func_244*/;
			break;
		case 60:
			__LIB_30__::func_345(uParam1, iParam0, 150f, 160f, 50f, 0, 0, 0);
			uParam2->f_1 = 57341/*func_243*/;
			uParam2->f_2 = 57280/*func_242*/;
			uParam2->f_3 = 57219/*func_241*/;
			uParam2->f_4 = 57125/*func_240*/;
			uParam2->f_5 = 56087/*func_237*/;
			uParam2->f_6 = 55559/*func_234*/;
			uParam2->f_7 = 55425/*func_233*/;
			uParam2->f_10 = 55219/*func_232*/;
			uParam2->f_11 = 55071/*func_231*/;
			uParam2->f_12 = 55062/*func_230*/;
			uParam2->f_8 = 51248/*func_208*/;
			uParam2->f_9 = 51240/*func_207*/;
			break;
		case 61:
			__LIB_30__::func_345(uParam1, iParam0, 200f, 220f, 50f, 0, 0, 0);
			uParam2->f_1 = 51232/*func_206*/;
			uParam2->f_2 = 51197/*func_205*/;
			uParam2->f_3 = 51151/*func_204*/;
			uParam2->f_4 = 51098/*func_203*/;
			uParam2->f_5 = 50308/*func_200*/;
			uParam2->f_6 = 50241/*func_199*/;
			uParam2->f_7 = 36455/*func_190*/;
			uParam2->f_10 = 36392/*func_189*/;
			uParam2->f_11 = 36383/*func_188*/;
			uParam2->f_12 = 36374/*func_187*/;
			uParam2->f_8 = 36338/*func_186*/;
			uParam2->f_9 = 36330/*func_185*/;
			break;
		case 54:
		case 55:
		case 58:
			__LIB_30__::func_345(uParam1, iParam0, 150f, 190f, 50f, 0, 0f, 4);
			uParam2->f_1 = 36322/*func_184*/;
			uParam2->f_2 = 36305/*func_183*/;
			uParam2->f_3 = 36288/*func_182*/;
			uParam2->f_4 = 36263/*func_181*/;
			uParam2->f_5 = 36158/*func_180*/;
			uParam2->f_6 = 36139/*func_179*/;
			uParam2->f_7 = 36015/*func_177*/;
			uParam2->f_10 = 35645/*func_173*/;
			uParam2->f_11 = 35636/*func_172*/;
			uParam2->f_12 = 35614/*func_171*/;
			uParam2->f_8 = 35606/*func_170*/;
			uParam2->f_9 = 35598/*func_169*/;
			break;
		default:
			return;
			break;
	}
	*uParam2 = 1;
}

void func_186()//Position - 0x8DF2
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Global_96938[3] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
}

int func_189()//Position - 0x8E28
{
	struct<3> Var0;
	Var0 = { __LIB_30__::func_321(212, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) < 2.5f)
		{
			return 1;
		}
	}
	return 0;
}

void func_190()//Position - 0x8E67
{
	__LIB_30__::func_324(&(Global_96938[0]));
	__LIB_30__::func_324(&(Global_96938[1]));
	__LIB_30__::func_324(&(Global_96938[2]));
	__LIB_30__::func_324(&(Global_96938[3]));
	__LIB_21__::func_894(24, 1);
	STREAMING::NEW_LOAD_SCENE_STOP();
	__LIB_30__::func_330();
}

void func_199()//Position - 0xC441
{
	__LIB_30__::func_307(&(Global_96938[0]));
	__LIB_30__::func_307(&(Global_96938[1]));
	__LIB_30__::func_307(&(Global_96938[2]));
	__LIB_30__::func_307(&(Global_96938[3]));
	STREAMING::NEW_LOAD_SCENE_STOP();
	__LIB_21__::func_894(24, 1);
	__LIB_30__::func_330();
}

void func_200()//Position - 0xC484
{
	MISC::CLEAR_AREA(-1026.8f, -492.1f, 36f, 18f, true, false, false, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
	__LIB_21__::func_894(24, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1006f, -478f, 49f, 15f, 0);
	MISC::CLEAR_AREA(-1024.1f, -485.3321f, 35.9816f, 5f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("rapidgt"), -1024.1f, -485.3321f, 35.9816f, 209.7233f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[0], 112, 112);
	ENTITY::SET_ENTITY_HEALTH(Global_96938[0], 3000, 0);
	VEHICLE::SET_VEHICLE_STRONG(Global_96938[0], true);
	ENTITY::SET_ENTITY_PROOFS(Global_96938[0], false, true, false, false, false, false, false, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rapidgt"), true);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[0], true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_96938[0], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
	MISC::CLEAR_AREA(-1037.3977f, -491.6539f, 35.5545f, 5f, true, false, false, false);
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("surano"), -1037.3977f, -491.6539f, 35.5545f, 208.889f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[1], 0, 0);
	ENTITY::SET_ENTITY_HEALTH(Global_96938[1], 3000, 0);
	VEHICLE::SET_VEHICLE_STRONG(Global_96938[1], true);
	ENTITY::SET_ENTITY_PROOFS(Global_96938[1], false, true, true, false, false, false, false, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("surano"), true);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[1], true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_96938[1], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
	MISC::CLEAR_AREA(-1033.9381f, -489.7475f, 35.8323f, 5f, true, false, false, false);
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("carbonizzare"), -1033.9381f, -489.7475f, 35.8323f, 207.1758f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Global_96938[2], 89, 89);
	ENTITY::SET_ENTITY_HEALTH(Global_96938[2], 3000, 0);
	VEHICLE::SET_VEHICLE_STRONG(Global_96938[2], true);
	ENTITY::SET_ENTITY_PROOFS(Global_96938[2], false, true, true, false, false, false, false, false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("carbonizzare"), true);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Global_96938[2], true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Global_96938[2], true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
	__LIB_34__::func_978(61, "sol_3_int", 0, -1, -1);
}

int func_203()//Position - 0xC79A
{
	if ((STREAMING::HAS_MODEL_LOADED(joaat("rapidgt")) && STREAMING::HAS_MODEL_LOADED(joaat("carbonizzare"))) && STREAMING::HAS_MODEL_LOADED(joaat("surano")))
	{
		return 1;
	}
	return 0;
}

void func_204()//Position - 0xC7CF
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rapidgt"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("carbonizzare"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("surano"));
	STREAMING::NEW_LOAD_SCENE_STOP();
	__LIB_21__::func_894(24, 1);
}

void func_205()//Position - 0xC7FD
{
	STREAMING::REQUEST_MODEL(joaat("rapidgt"));
	STREAMING::REQUEST_MODEL(joaat("carbonizzare"));
	STREAMING::REQUEST_MODEL(joaat("surano"));
}

void func_208()//Position - 0xC830
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 0)
		{
			switch (iLocal_1487)
			{
				case 0:
					func_229();
					break;
				case 1:
					func_212();
					break;
				case 2:
					func_209();
					break;
				}
			}
	}
}

void func_209()//Position - 0xC87F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_211())
			{
				if (func_210())
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[2], 0f, 0f, 0f, true, 60000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1482);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1483);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1484);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1485);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_1486);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				}
			}
		}
		else if (func_210())
		{
			CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
		}
		else
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_75())
	{
		CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(false);
		iLocal_1487 = 3;
	}
}

int func_210()//Position - 0xC916
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1032.1132f, -543.7176f, 32.31895f, -1047.3583f, -515.1872f, 39.0386f, 4.09f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1032.6454f, -542.87946f, 32.33058f, -1008.5995f, -526.5407f, 39.62954f, 8.6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1060.3419f, -555.0635f, 32.43643f, -1032.6309f, -543.3942f, 39.31255f, 21.04f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

int func_211()//Position - 0xC9BC
{
	if (((((((((((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1])) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[0])) && ENTITY::DOES_ENTITY_EXIST(Global_96938[1])) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false)) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[1], false)) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[2], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false)) && !FIRE::IS_ENTITY_ON_FIRE(Global_96938[0])) && !FIRE::IS_ENTITY_ON_FIRE(Global_96938[1]))
	{
		return 1;
	}
	return 0;
}

void func_212()//Position - 0xCA9D
{
	if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027.3105f, -550.6376f, 33.121124f, -1044.7231f, -514.8788f, 120.78873f, 20f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1004.8053f, -530.9731f, 32.27923f, -1060.6128f, -554.6837f, 120.90538f, 21.37f, false, true, 0)) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
	{
		if (func_211())
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1021.0201f, -532.5411f, 34.98043f, -1024.51f, -525.2033f, 120.90538f, 16.13f, false, true, 0))
			{
				if (__LIB_36__::func_92(&(Global_96938.f_44), "SOL2AUD", "SOL2_INTA_LI", 8, 0, 0, 0))
				{
					Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(-1034.4126f, -545.05914f, 34.64f, 0f, 0f, 22.1f, 2);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_96938.f_358, true);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], Global_96938.f_358, "misssolomon_2leadinout", "idle_03_sol_2_int_rocco", 8f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], Global_96938.f_358, "misssolomon_2leadinout", "idle_03_sol_2_int_milton", 8f, -8f, 0, 0, 1000f, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], Global_96938.f_358, "misssolomon_2leadinout", "idle_03_sol_2_int_solomon", 8f, -8f, 0, 0, 1000f, 0);
					__LIB_34__::func_977();
					iLocal_1487 = 2;
				}
			}
			else
			{
				iLocal_1487 = 3;
			}
		}
	}
}

void func_229()//Position - 0xD5B5
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(213, 0) };
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
	if (((ENTITY::DOES_ENTITY_EXIST(Global_96938[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938[1])) && !ENTITY::IS_ENTITY_DEAD(Global_96938[0], false)) && !ENTITY::IS_ENTITY_DEAD(Global_96938[1], false))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[0], 4);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[1], 1);
	}
	if (fVar1 < (75f * 75f))
	{
		if (func_211())
		{
			STREAMING::SET_HD_AREA(Var0, 50f);
			Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(-1034.4126f, -545.05914f, 34.64f, 0f, 0f, 22.1f, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_96938.f_358, true);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], Global_96938.f_358, "misssolomon_2leadinout", "idle_02_sol_2_int_rocco", 8f, -8f, 0, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], Global_96938.f_358, "misssolomon_2leadinout", "idle_02_sol_2_int_milton", 8f, -8f, 0, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], Global_96938.f_358, "misssolomon_2leadinout", "idle_02_sol_2_int_solomon", 8f, -8f, 0, 0, 1000f, 0);
			iLocal_1487 = 1;
		}
	}
}

int func_231()//Position - 0xD71F
{
	if (!func_211())
	{
		CAM::STOP_GAMEPLAY_HINT(true);
		return 1;
	}
	else if ((MISC::IS_BULLET_IN_BOX(-1027.1349f, -550.491f, 30.06013f, -1035.0724f, -534.8494f, 40.7644f, false) || MISC::IS_PROJECTILE_IN_AREA(-1025.5258f, -545.9699f, 30.06013f, -1042.3894f, -538.64526f, 40.7644f, false)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1032.8613f, -543.89264f, 34.29076f, 26f))
	{
		CAM::STOP_GAMEPLAY_HINT(true);
		return 1;
	}
	return 0;
}

int func_232()//Position - 0xD7B3
{
	struct<3> Var0;
	float fVar1;
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !(PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())))
	{
		Var0 = { __LIB_30__::func_321(213, 0) };
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (iLocal_1487 == 3)
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
			if (!__LIB_0__::func_75())
			{
				return 1;
			}
		}
		else if (fVar1 < (15.5f * 15.5f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1009.1336f, -547.054f, 51.83326f, -1042.9508f, -559.6316f, 19.5009f, 6.5f, false, true, 0))
		{
			if (!__LIB_0__::func_75())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_233()//Position - 0xD881
{
	__LIB_30__::func_324(&(Global_96938[0]));
	__LIB_30__::func_324(&(Global_96938[1]));
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_40__::func_657(&(Global_96938.f_9[1]));
	__LIB_40__::func_657(&(Global_96938.f_9[2]));
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fugitive"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_RoccoPelosi"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_Y_Guido_01"), false);
	__LIB_30__::func_330();
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
}

void func_234()//Position - 0xD907
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_30__::func_307(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == 2)
		{
			__LIB_39__::func_464(&(Global_96938.f_9[iVar0]));
		}
		else
		{
			__LIB_39__::func_460(&(Global_96938.f_9[iVar0]));
		}
		iVar0++;
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fugitive"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_RoccoPelosi"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_Y_Guido_01"), false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__::func_330();
}

void func_237()//Position - 0xDB17
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { -1032.97f, -544.14f, 35.3f };
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("IG_RoccoPelosi"), Var0, -103.17f, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
	__LIB_0__::func_203(&(Global_96938.f_44), 3, Global_96938.f_9[0], "ROCCO", 0, 1);
	Var0 = { -1031.72f, -543.42f, 35.26f };
	Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("U_M_Y_Guido_01"), Var0, 110.43f, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[1], true);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_96938.f_9[1]);
	Var0 = { -1031.94f, -544.25f, 35.29f };
	Global_96938.f_9[2] = PED::CREATE_PED(26, joaat("IG_Solomon"), Var0, 40.97f, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[2], true);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Global_96938.f_9[2]);
	__LIB_11__::func_318(Global_96938.f_9[2], Global_96938.f_42);
	Var1 = { -1041.64f, -545.08f, 34.81f };
	MISC::CLEAR_AREA(Var1, 6f, true, false, false, false);
	Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("fugitive"), Var1, 116.57f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[0], 4);
	Var1 = { -1046.1864f, -554.2908f, 33.4636f };
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("baller2"), Var1, 101.5845f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[1], 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fugitive"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller2"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("IG_RoccoPelosi"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_Y_Guido_01"), true);
	Global_96938.f_358 = PED::CREATE_SYNCHRONIZED_SCENE(-1034.4126f, -545.05914f, 34.64f, 0f, 0f, 22.1f, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(Global_96938.f_358, true);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], Global_96938.f_358, "misssolomon_2leadinout", "idle_01_sol_2_int_rocco", 1000f, -8f, 0, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], Global_96938.f_358, "misssolomon_2leadinout", "idle_01_sol_2_int_milton", 1000f, -8f, 0, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], Global_96938.f_358, "misssolomon_2leadinout", "idle_01_sol_2_int_solomon", 1000f, -8f, 0, 0, 1000f, 0);
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(-1065.4022f, -494.2596f, 60.47529f, -986.20276f, -561.6414f, 17.43359f, false, true, true, true);
	__LIB_34__::func_978(60, "SOL_2_INT_ALT1", 0, -1, -1);
}

int func_240()//Position - 0xDF25
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("IG_RoccoPelosi")) && STREAMING::HAS_MODEL_LOADED(joaat("U_M_Y_Guido_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Solomon"))) && STREAMING::HAS_MODEL_LOADED(joaat("fugitive"))) && STREAMING::HAS_MODEL_LOADED(joaat("baller2"))) && STREAMING::HAS_ANIM_DICT_LOADED("misssolomon_2leadinout"))
	{
		return 1;
	}
	return 0;
}

void func_241()//Position - 0xDF83
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_RoccoPelosi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("U_M_Y_Guido_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Solomon"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("fugitive"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller2"));
	STREAMING::REMOVE_ANIM_DICT("misssolomon_2leadinout");
}

void func_242()//Position - 0xDFC0
{
	STREAMING::REQUEST_MODEL(joaat("IG_RoccoPelosi"));
	STREAMING::REQUEST_MODEL(joaat("U_M_Y_Guido_01"));
	STREAMING::REQUEST_MODEL(joaat("IG_Solomon"));
	STREAMING::REQUEST_MODEL(joaat("fugitive"));
	STREAMING::REQUEST_MODEL(joaat("baller2"));
	STREAMING::REQUEST_ANIM_DICT("misssolomon_2leadinout");
}

void func_243()//Position - 0xDFFD
{
	Global_96938.f_357 = 0;
	iLocal_1487 = 0;
}

int func_246()//Position - 0xE021
{
	if (!__LIB_10__::func_829(18))
	{
		return 1;
	}
	return 0;
}

int func_254()//Position - 0xE4A9
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(211, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_258()//Position - 0xE509
{
	return 1;
	return 1;
}

int func_266()//Position - 0xE550
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	Var0 = { __LIB_30__::func_321(210, 0) };
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !Global_112433)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			fVar1 = 1089f;
		}
		else
		{
			fVar1 = (7f * 7f);
		}
		fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar3 < fVar1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2, false))
				{
					if (__LIB_6__::func_762(iVar2, 500f, 1, 20f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_277()//Position - 0xE65F
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 < Global_96938.f_9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
			{
				if (PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
				{
					return 1;
				}
				else if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[iVar0], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(Global_96938.f_9[iVar0])) || FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Global_96938)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(Global_96938[iVar0], false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[iVar0], false))
				{
					return 1;
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(-4.701051f, -1445.258f, 29.05389f, -27.657207f, -1446.8651f, 39.652313f, 20f, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, -4.701051f, -1445.258f, 29.05389f, -27.657207f, -1446.8651f, 39.652313f, 20f))
	{
		return 1;
	}
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(-14.23323f, -1441.4862f, 30.10742f, 8.75f, 0, 23);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) || MISC::IS_AREA_OCCUPIED(Vector(30.10742f, -1441.4862f, -14.23323f) - Vector(5f, 5f, 5f), Vector(30.10742f, -1441.4862f, -14.23323f) + Vector(5f, 5f, 5f), false, true, false, false, false, 0, false))
	{
		return 1;
	}
	return 0;
}

int func_278()//Position - 0xE81B
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { __LIB_30__::func_321(209, __LIB_26__::func_499()) };
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (75f * 75f))
		{
			if (iLocal_1460 == 0)
			{
				iLocal_1460 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.5468f, -1437.9185f, 30.2015f, "v_franklins");
			}
			else if (iLocal_1459 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_1460);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_1460))
				{
				}
				else
				{
					STREAMING::SET_INTERIOR_ACTIVE(iLocal_1460, true);
					iLocal_1459 = 1;
				}
			}
		}
		else if (fVar1 > (80f * 80f))
		{
			if (iLocal_1460 != 0)
			{
				if (iLocal_1459 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_1460);
					iLocal_1459 = 0;
				}
			}
		}
		if (!Global_97361)
		{
			iVar2 = VEHICLE::GET_CLOSEST_VEHICLE(-14.23323f, -1441.4862f, 30.10742f, 8.75f, 0, 7);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2) && !MISC::IS_AREA_OCCUPIED(Vector(30.10742f, -1441.4862f, -14.23323f) - Vector(5f, 5f, 5f), Vector(30.10742f, -1441.4862f, -14.23323f) + Vector(5f, 5f, 5f), false, true, false, false, false, 0, false))
			{
				if ((((__LIB_26__::func_499() != 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -27.723364f, -1451.5203f, 28.912764f, -5.230825f, -1450.8317f, 39.548096f, 30f, false, true, 0)) || (__LIB_26__::func_499() == 1 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.701051f, -1445.258f, 29.05389f, -27.657207f, -1446.8651f, 39.652313f, 20f, false, true, 0))) && !__LIB_30__::func_339(-4.701051f, -1445.258f, 29.05389f, -27.657207f, -1446.8651f, 39.652313f, 20f)) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_34__::func_977();
					MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 100f, 0);
				}
			}
		}
		else if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("MIC_2_INT"))
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1461))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1461, joaat("v_ilev_fa_frontdoor"), -14.8689f, -1441.1821f, 31.1932f, true, true, false);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1458))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]))
				{
					Global_96938.f_28[1] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-14.8689f, -1441.1821f, 31.1932f, 1f, joaat("v_ilev_fa_frontdoor"), true, false, true);
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_RATE(iLocal_1458) < 1f)
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_96938.f_28[1], false, false);
					if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_1461) != 1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_1461) != 4)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_1461, 1f, false, false);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1461, 4, false, true);
					}
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458, 0.01f);
					PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1458, 1f);
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_96938.f_9[3], -14.9856f, -1446.9579f, 29.6462f, 1f, 20000, 0.25f, 0, 40000f);
						__LIB_30__::func_308(&(Global_96938.f_28[2]));
					}
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458) >= 0.75f)
				{
					return 1;
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -7.118235f, -1445.5593f, 29.185593f, -20.304062f, -1446.6294f, 33.622505f, 8f, false, true, 0) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -0.967271f, -1445.2034f, 29.053888f, -30.5764f, -1446.5764f, 44.35346f, 28f, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_280()//Position - 0xEC35
{
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_40__::func_657(&(Global_96938.f_9[1]));
	__LIB_40__::func_657(&(Global_96938.f_9[2]));
	__LIB_40__::func_657(&(Global_96938.f_9[3]));
	__LIB_30__::func_308(&(Global_96938.f_28[0]));
	__LIB_30__::func_309(&(Global_96938.f_28[1]));
	__LIB_30__::func_308(&(Global_96938.f_28[2]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1461))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1461, 0);
	}
	if (iLocal_1460 != 0)
	{
		if (iLocal_1459 == 1)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_1460);
			iLocal_1459 = 0;
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__::func_330();
}

void func_281()//Position - 0xECDC
{
	__LIB_39__::func_460(&(Global_96938.f_9[0]));
	__LIB_39__::func_460(&(Global_96938.f_9[1]));
	__LIB_39__::func_460(&(Global_96938.f_9[2]));
	__LIB_39__::func_460(&(Global_96938.f_9[3]));
	__LIB_30__::func_309(&(Global_96938.f_28[0]));
	__LIB_30__::func_309(&(Global_96938.f_28[1]));
	__LIB_30__::func_309(&(Global_96938.f_28[2]));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1461))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1461, 0);
	}
	if (iLocal_1460 != 0)
	{
		if (iLocal_1459 == 1)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_1460);
			iLocal_1459 = 0;
		}
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__::func_330();
}

void func_282()//Position - 0xED83
{
	if (iLocal_1460 == 0)
	{
		iLocal_1460 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.5468f, -1437.9185f, 30.2015f, "v_franklins");
	}
	MISC::CLEAR_AREA(__LIB_30__::func_321(171, 0), 40f, true, false, false, false);
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(30.549818f, -1452.6478f, -13.219224f) - Vector(10f, 20f, 20f), Vector(30.549818f, -1452.6478f, -13.219224f) + Vector(10f, 20f, 20f), false, true, true, true);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ilev_fa_frontdoor"), Vector(31.1932f, -1441.1821f, -14.8689f) + Vector(0.01f, -0.03f, 0f), true, true, false);
	ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[0], 0f, 0f, -179.5f, 2, true);
	__LIB_27__::func_933(&(Global_96938.f_9[0]), 44, -14.2667f, -1443.4365f, 30.1058f, 162.9857f, 1);
	PED::SET_PED_LOD_MULTIPLIER(Global_96938.f_9[0], 2f);
	__LIB_11__::func_318(Global_96938.f_9[0], Global_96938.f_42);
	Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("CSB_Denise_friend"), -15.103f, -1442.799f, 30.1058f, -108.3768f, true, true);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 3, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 4, 1, 0, 0);
	PED::SET_PED_LOD_MULTIPLIER(Global_96938.f_9[1], 2f);
	__LIB_11__::func_318(Global_96938.f_9[1], Global_96938.f_42);
	Global_96938.f_9[2] = PED::CREATE_PED(26, joaat("CSB_Denise_friend"), -13.5914f, -1443.0289f, 30.1058f, 159.0737f, true, true);
	PED::SET_PED_LOD_MULTIPLIER(Global_96938.f_9[2], 2f);
	__LIB_11__::func_318(Global_96938.f_9[2], Global_96938.f_42);
	if (__LIB_26__::func_499() == 2)
	{
		func_289(&(Global_96938.f_9[3]), 1, -14.6627f, -1452.0387f, 29.5395f, 349.9372f, 1, 1, 0);
		__LIB_11__::func_318(Global_96938.f_9[3], Global_96938.f_42);
		Global_96938.f_28[2] = OBJECT::CREATE_OBJECT(joaat("prop_phone_ing"), ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[3], true), true, true, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[2], Global_96938.f_9[3], PED::GET_PED_BONE_INDEX(Global_96938.f_9[3], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		TASK::TASK_PLAY_ANIM(Global_96938.f_9[3], "cellphone@", "cellphone_text_in", 1.5f, -1.5f, -1, 2, 0f, false, false, false);
	}
	iLocal_1458 = PED::CREATE_SYNCHRONIZED_SCENE(Vector(31.193f, -1441.182f, -14.869f) + Vector(0.01f, -0.03f, 0f), 0f, 0f, 180f, 2);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iLocal_1458, "mic_2_int_alt1_leadin_door", "missmic2leadinmic_2_int", 1000f, -1000f, 0, 1000f);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1458, "missmic2leadinmic_2_int", "mic_2_int_alt1_leadin_denise", 1000f, -1000f, 1, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[1], iLocal_1458, "missmic2leadinmic_2_int", "mic_2_int_alt1_leadin_f1", 1000f, -1000f, 1, 0, 1000f, 0);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[2], iLocal_1458, "missmic2leadinmic_2_int", "mic_2_int_alt1_leadin_f2", 1000f, -1000f, 1, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1458, 0f);
	PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_1458, 0f);
	STREAMING::REMOVE_ANIM_DICT("missmic2leadinmic_2_int");
	STREAMING::REMOVE_ANIM_DICT("cellphone@");
	func_288(1);
	__LIB_34__::func_986(44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CSB_Denise_friend"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_fa_frontdoor"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
	__LIB_34__::func_978(47, "MIC_2_INT", -1, 0, 0);
	__LIB_34__::func_985(47, "DENISE", Global_96938.f_9[0]);
	__LIB_34__::func_985(47, "Denises_Friend_1", Global_96938.f_9[1]);
	__LIB_34__::func_985(47, "Denises_Friend_2", Global_96938.f_9[2]);
}

void func_288(int iParam0)//Position - 0xF3AA
{
	if (__LIB_0__::func_317(iParam0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_12__::func_95(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

int func_289(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xF3CF
{
	int iVar0;
	if (__LIB_0__::func_317(iParam1))
	{
		iVar0 = __LIB_12__::func_95(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_26__::func_464(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_609(*iParam0);
			__LIB_32__::func_806(*iParam0, 1, 0);
			__LIB_20__::func_773(*iParam0);
			__LIB_20__::func_772(*iParam0);
			func_291(*iParam0, bParam6);
			__LIB_0__::func_349(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_291(int iParam0, bool bParam1)//Position - 0xF4E7
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__::func_763(iParam0);
	if (__LIB_10__::func_3(iVar0))
	{
		__LIB_0__::func_376(iVar0, 0);
		func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_379(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_0__::func_376(iVar0, 0);
			func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_379(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_359(iParam0, 3, 169))
					{
						func_572(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_359(iParam0, 12, 6))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 11))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 12, 10))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 12, 50))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 14, 59))
			{
				func_572(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_359(iParam0, 8, 22))
			{
				func_572(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_359(iParam0, 12, 14))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_359(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 4))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 12, 3))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 14, 82))
			{
				func_572(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_359(iParam0, 8, 76))
			{
				func_572(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_359(iParam0, 12, 1))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_359(iParam0, 12, 12))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 12, 15))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_359(iParam0, 3, 71))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_359(iParam0, 12, 7))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 12, 6))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_359(iParam0, 14, 88))
			{
				func_572(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_359(iParam0, 8, 17))
			{
				func_572(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_359(iParam0, 12, 11))
			{
				func_572(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_359(int iParam0, int iParam1, int iParam2)//Position - 0x26BC0
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_359(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_359(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_359(iParam0, 14, iVar4))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar2);
						Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, iVar2, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_78130[2 /*14*/])))
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
		uVar8 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_359(iParam0, 14, uVar8[iVar7]))
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

void func_379(int iParam0, int iParam1)//Position - 0x2B19E
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__::func_763(iParam0);
		if (__LIB_0__::func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_571(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_390(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_36__::func_84(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_38__::func_159();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[iVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][iVar0] = __LIB_6__::func_795(iParam0, __LIB_0__::func_33(iVar3));
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

void func_390(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x2C17D
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
		iVar0 = __LIB_20__::func_763(iParam0);
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
		if (__LIB_0__::func_317(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_569(iParam0, iVar1, &iVar2, 0))
			{
				func_572(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_567(iParam0, iVar1, &iVar2))
			{
				func_572(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_565(iParam0);
			__LIB_0__::func_427(754, uParam1->f_60, Global_78127, 1, 0);
			__LIB_0__::func_427(755, uParam1->f_61, Global_78127, 1, 0);
			iVar5 = __LIB_0__::func_350(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("MP_M_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_181(iVar5);
				}
				else if (iVar1 == joaat("MP_F_Freemode_01"))
				{
					iVar6 = __LIB_18__::func_186(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_396(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_396(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_396(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_18__::func_181(iVar9);
			}
			else
			{
				iVar9 = __LIB_18__::func_186(iVar9);
			}
			__LIB_0__::func_427(753, iVar9, Global_78127, 1, 0);
			__LIB_0__::func_427(2053, iVar9, Global_78127, 1, 0);
			__LIB_6__::func_796(161, 1, -1, 1);
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

int func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2C919
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
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
			func_523(iVar5, iParam1, iParam2, 1);
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
			uVar14 = { __LIB_18__::func_180(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar14[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar14.f_16)
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 10, 0, -1) };
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
						func_523(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, uVar14[iVar0], -1) };
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
								uVar15 = { __LIB_18__::func_247(iVar5, uVar14[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_523(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_396(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_523(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_520(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_396(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		PED::SET_PED_COMPONENT_VARIATION(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1), 0);
		Global_2883588 = uVar12;
		Global_2883589 = uVar13;
		if (iParam5 == 0)
		{
			iVar17 = __LIB_18__::func_468();
			if (iVar17 != -1)
			{
				__LIB_25__::func_43(iVar17, 0, iParam10);
			}
			func_514(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_18__::func_247(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_523(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_40__::func_849(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		if (BitTest(Global_78130[1 /*14*/].f_6, 1))
		{
			func_523(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_396(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_505(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_396(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar23 = __LIB_6__::func_795(iParam0, 11);
				iVar24 = __LIB_6__::func_795(iParam0, 8);
				iVar25 = __LIB_6__::func_795(iParam0, 4);
				if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
					}
					if ((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_ROBE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SILK_PYJAMAS"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SMOKING_JACKET"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("SANTA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("MORPH_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("GORKA_SUIT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar8 = __LIB_6__::func_795(iParam0, 8);
					}
				}
				iVar26 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar26, joaat("GLOVES"), 0))
				{
					iVar27 = func_504(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar23, 3, 0);
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
							iVar22 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
							if (__LIB_0__::func_254(iVar5, iVar27, iVar28) == iVar26)
							{
								iVar10 = iVar28;
								iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar28++;
						}
					}
				}
				iVar22 = -1;
				if ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar23 = __LIB_6__::func_795(iParam0, 11);
					if (iVar23 >= 256)
					{
						iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
					}
					if (iVar23 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0))
					{
						iVar29 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar29 != -99)
						{
							func_396(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (__LIB_6__::func_808(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("MP_M_Freemode_01"))
					{
						if (iVar23 >= 237)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 3);
						}
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						if (iVar23 >= 256)
						{
							iVar22 = __LIB_0__::func_420(iVar5, iVar23, 11, 4);
						}
					}
					iVar8 = -99;
					if (!__LIB_6__::func_808(iVar5, iVar23, -1))
					{
						if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("MP_F_Freemode_01") && iVar23 >= 256) && ((((((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("HEIST_DRAW_12"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_8"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("APART_DRAW_9"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_4"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar22, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar30 = __LIB_37__::func_821(iParam0, iParam2);
							iVar31 = __LIB_6__::func_809(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_396(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_396(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar32, -1) };
									iVar31 = __LIB_6__::func_809(iVar5, iVar32, iParam2, Global_78130[1 /*14*/].f_4);
									iVar33 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if ((iVar31 == -99 || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("BIKER_VEST"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar33, joaat("OPEN_SHORT"), 0))
									{
										iVar31 = 240;
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar31 = 120;
									}
									else
									{
										iVar31 = 48;
									}
								}
								func_396(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_37__::func_821(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 8, iVar24, -1) };
							iVar36 = Global_78130[1 /*14*/].f_4;
							iVar38 = __LIB_6__::func_807(iVar5, iVar24, iVar36);
							if (iVar37 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								iVar39 = iVar37;
							}
							else if (iVar38 == -99)
							{
								iVar39 = iVar24;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar40 = __LIB_0__::func_420(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || __LIB_0__::func_252(iVar40) == 6) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar40, joaat("BIKER_VEST"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								iVar41 = -1;
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 3);
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									iVar41 = __LIB_0__::func_420(iVar5, iVar24, 8, 4);
								}
								if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar41, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
									iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, iVar36);
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 240;
										}
									}
								}
								else if (iVar5 == joaat("MP_F_Freemode_01"))
								{
									if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!__LIB_6__::func_806(iVar5, __LIB_6__::func_795(iParam0, 4), iVar38))
										{
											iVar39 = 48;
										}
									}
								}
							}
							if (iVar39 != -99)
							{
								func_396(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_356(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_6__::func_809(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_396(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_396(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_31__::func_927(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_514(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_504(iVar5, func_520(iParam0, 8, -1), iParam2, func_520(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = __LIB_0__::func_534(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = __LIB_0__::func_534(2160, iParam10, 0);
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
						iVar42 = __LIB_18__::func_181(iParam2);
					}
					else if (iVar5 == joaat("MP_F_Freemode_01"))
					{
						iVar42 = __LIB_18__::func_186(iParam2);
					}
					if (iVar42 != -99 && iParam2 != iVar42)
					{
						iParam2 = iVar42;
					}
				}
				func_439(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_504(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar44, 3, 0);
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
						iVar47 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar46, iVar48) == iVar43)
						{
							iVar10 = iVar48;
							iVar11 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar48++;
					}
				}
			}
			func_514(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_504(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar51 = __LIB_6__::func_795(iParam0, 7);
				if (!__LIB_24__::func_966(iVar5, iVar51, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HEAD"), 0)))
			{
				iVar52 = __LIB_0__::func_534(2100, iParam10, 0);
				iVar53 = __LIB_0__::func_534(2101, iParam10, 0);
				iVar54 = __LIB_0__::func_534(2102, iParam10, 0);
				fVar55 = __LIB_0__::func_424(135, iParam10);
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
				__LIB_31__::func_910(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar57 = __LIB_6__::func_795(iParam0, 11);
			iVar58 = __LIB_6__::func_795(iParam0, 8);
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_396(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_6__::func_806(iVar5, iParam2, __LIB_6__::func_807(iVar5, iVar58, 0)))
					{
						func_396(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_504(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_504(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_40__::func_849(iParam0, iVar5, 11, iVar57, 3, 0);
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
						iVar61 = __LIB_0__::func_420(iVar5, iParam2, 11, 4);
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
						if (__LIB_0__::func_254(iVar5, iVar60, iVar62) == iVar59)
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
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_396(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_504(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_396(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (__LIB_0__::func_223(iParam0))
				{
					iVar63 = __LIB_6__::func_803(iParam0, iVar5, iParam1, iParam2);
					if (iVar63 > 0)
					{
						iVar63 = (iVar63 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_416(iParam0, 9, iVar63))
						{
							func_396(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_396(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_396(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar64 = __LIB_0__::func_534(2042, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, __LIB_18__::func_183(iParam0, iVar64), __LIB_0__::func_217(iParam0, iVar64), __LIB_0__::func_114(iParam0, iVar64));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, __LIB_18__::func_183(PLAYER::PLAYER_PED_ID(), iVar64), __LIB_0__::func_217(PLAYER::PLAYER_PED_ID(), iVar64), false);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), __LIB_0__::func_114(PLAYER::PLAYER_PED_ID(), iVar64));
					__LIB_6__::func_782(PLAYER::PLAYER_ID(), iVar64);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("MP_M_Freemode_01") && iParam2 >= 92) || (iVar5 == joaat("MP_F_Freemode_01") && iParam2 >= 55))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("BIG_CHAIN"), 0))
					{
						func_396(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_520(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_520(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_396(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_396(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar74 = __LIB_6__::func_795(iParam0, 4);
				iVar75 = __LIB_6__::func_795(iParam0, 6);
				if (__LIB_0__::func_215(iVar5, iVar70))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_396(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_396(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_396(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_396(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
				if (__LIB_0__::func_215(iVar5, iVar73))
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar73, joaat("ALT_LEGS"), 0) != __LIB_6__::func_797(iVar5, iVar75, iVar73))
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
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 3);
										iVar73 = iVar78;
										func_396(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_396(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar70, joaat("ALT_FEET"), 0) != __LIB_6__::func_798(iVar5, iVar74, iVar70))
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
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 3);
										iVar70 = iVar78;
										func_396(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_396(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_505(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_396(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_396(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_397(iParam0, &uVar4))
		{
			func_396(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_396(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_396(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_396(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_520(iParam0, 3, -1), iVar10);
		if (iVar84 != -1)
		{
			if (iVar5 == joaat("MP_M_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 3);
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				iVar9 = __LIB_6__::func_758(iVar5, iVar84, 3, 4);
			}
			if (iVar9 != -99)
			{
				iVar9 = (iVar9 + iVar11);
				func_396(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_397(int iParam0, var uParam1)//Position - 0x2E7C3
{
	int iVar0;
	int iVar1;
	*uParam1 = func_520(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (__LIB_0__::func_534(754, Global_78127, 0) != -99 && __LIB_6__::func_781())
	{
		if (__LIB_0__::func_214() == 4)
		{
			return 1;
		}
		if (__LIB_0__::func_534(754, Global_78127, 0) == 0 && __LIB_0__::func_534(755, Global_78127, 0) == 0)
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				if (__LIB_0__::func_534(2053, Global_78127, 0) == 0)
				{
					return 0;
				}
			}
			else if (__LIB_0__::func_534(753, Global_78127, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = __LIB_0__::func_534(754, Global_78127, 0);
		iVar1 = __LIB_0__::func_534(755, Global_78127, 0);
		if (!func_416(iParam0, iVar1, iVar0))
		{
			if (__LIB_0__::func_421(161, Global_78127))
			{
				*uParam1 = __LIB_0__::func_534(2053, Global_78127, 0);
			}
			else
			{
				*uParam1 = __LIB_0__::func_534(753, Global_78127, 0);
			}
			__LIB_0__::func_427(754, -99, Global_78127, 1, 0);
			__LIB_0__::func_427(755, 2, Global_78127, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_416(int iParam0, int iParam1, int iParam2)//Position - 0x32A80
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2883588;
	uVar3 = Global_2883589;
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { __LIB_18__::func_180(iVar0, iParam2) };
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
				if (!func_416(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2883588 = uVar2;
					Global_2883589 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { __LIB_18__::func_247(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_416(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_416(iParam0, 14, iVar6))
										{
											if (!__LIB_24__::func_955(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_78130[2 /*14*/])))
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
						iVar1 = __LIB_6__::func_795(iParam0, iVar4);
						Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, iVar4, iVar1, -1) };
						if (!__LIB_24__::func_955(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_78130[2 /*14*/])))
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
			if (__LIB_0__::func_534(1759, Global_78127, 0) != uVar8[10])
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
		uVar11 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_416(iParam0, 14, uVar11[iVar10]))
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
				if (__LIB_6__::func_802(iVar0, 11, __LIB_6__::func_795(iParam0, 11), -1))
				{
					if (__LIB_6__::func_800(iVar0, 4, iParam2, &uVar18))
					{
						return func_416(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_416(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_439(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x397AC
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_31__::func_926(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = __LIB_6__::func_805(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_78127;
		}
		__LIB_25__::func_43(iVar1, 1, iParam2);
	}
	func_440(iParam0, bParam3, 0, -1);
}

void func_440(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x397F9
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
		iVar2 = __LIB_0__::func_250(iParam0);
		bVar3 = func_484(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_475(iParam0, iParam3);
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
			if (__LIB_18__::func_432(iVar6, iVar0))
			{
				if (__LIB_6__::func_785(&Var1, iVar6, iVar2, iParam0, -1))
				{
					if (__LIB_25__::func_69(iParam0, &Var1, iVar6, Var1.f_4, Var1.f_8, bVar3, bVar4, bParam1, bVar5))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar6++;
		}
		if (__LIB_18__::func_432(123, iVar0))
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
					if (__LIB_18__::func_432(iVar10, iVar0))
					{
						if (__LIB_25__::func_69(iParam0, &(Var9.f_7), iVar10, Var9.f_2, Var9.f_6, bVar3, bVar4, bParam1, bVar5))
						{
							if (!__LIB_31__::func_925(Var9.f_2, Var9.f_3, iVar10))
							{
								PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var9.f_2, Var9.f_3);
								__LIB_0__::func_235(iParam0, Var9.f_2, Var9.f_3);
							}
						}
					}
				}
			}
			iVar7++;
		}
	}
}

int func_475(int iParam0, int iParam1)//Position - 0x48A4E
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
			if (iParam1 != -1)
			{
				iVar2 = iParam1;
			}
			if (iVar0 > 15)
			{
				iVar3 = func_520(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
			iVar2 = __LIB_0__::func_534(1759, -1, 0);
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
				iVar5 = func_520(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar5, 11, 4);
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

int func_484(int iParam0, bool bParam1)//Position - 0x48EAC
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
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_520(iParam0, 11, -1), 0);
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
						if (__LIB_18__::func_432(13, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(14, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(15, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(16, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(71, -1))
						{
							return 1;
						}
						else if (__LIB_18__::func_432(72, -1))
						{
						}
						else if (__LIB_18__::func_185(PLAYER::PLAYER_ID(), 1) && Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_520(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar3, 11, 3);
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
						iVar5 = func_520(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar5, 8, 3);
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
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_520(iParam0, 11, -1), 0);
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
						iVar8 = func_520(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar8, 11, 4);
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
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_520(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_520(iParam0, 11, -1), 0);
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
						iVar12 = func_520(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar12, 8, 4);
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

int func_504(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x51D45
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 3);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 3);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_0_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_1_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_M_TORSO_2_0"), 3, 3);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0))
					{
						iVar0 = 5;
					}
				}
				else
				{
					iVar0 = func_504(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar7, 3, 3);
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
				iVar2 = __LIB_0__::func_420(iParam0, iParam2, 11, 4);
				iVar1 = __LIB_0__::func_252(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = __LIB_0__::func_420(iParam0, iParam1, 8, 4);
				iVar3 = __LIB_0__::func_252(iVar4);
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
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_0_0"), 3, 4);
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_1"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_1_0"), 3, 4);
					}
					else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_2"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("BIKER_DRAW_5"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("X17_DRAW_6"), 0))
					{
						iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_BIKER_F_TORSO_2_0"), 3, 4);
					}
				}
				else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_9"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_10"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("BIKER_DRAW_11"), 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = func_504(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = __LIB_6__::func_758(iParam0, joaat("DLC_MP_H4_F_TORSO_0_0"), 3, 4);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVERCOAT_ACCS"), 0))
			{
				iVar0 = 3;
			}
			else if (((iVar4 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("VEST_SHIRT"), 0)) && !__LIB_6__::func_808(iParam0, iParam2, -1)) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar2, joaat("SILK_ROBE"), 0))
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
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_420(iParam0, iParam3, 4, 4), joaat("HIGH_WAIST"), 0))
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
									iVar0 = __LIB_6__::func_758(iParam0, iVar12, 3, 4);
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

void func_505(int iParam0)//Position - 0x53080
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
		if (!func_510(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			if (__LIB_0__::func_258(iVar9, 0, 0, &iVar16))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar16, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar17, -1))
					{
						if (__LIB_0__::func_257(iVar17, 11, Var15.f_1))
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
			if (__LIB_0__::func_258(iVar9, 1, 0, &iVar19))
			{
				FILES::GET_SHOP_PED_COMPONENT(iVar19, &Var15);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, Var15.f_3, Var15.f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, 11));
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 10) == 0 && __LIB_0__::func_257(iVar13, 11, -1))
				{
					if (__LIB_0__::func_257(iVar13, 11, Var15.f_1))
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, iVar7, iVar8, 0);
					}
					else if (__LIB_0__::func_256(iVar13, 10, &iVar20, -1))
					{
						if (__LIB_0__::func_257(iVar20, 11, Var15.f_1))
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
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar11, joaat("HAZ_HOOD"), 0) || __LIB_0__::func_255(iParam0, iVar9))
	{
		iVar6 = iVar2;
		if (!func_510(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x53A4A
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_709(iVar0, 14, func_520(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_514(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x5670E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_565(iParam0))
		{
			return;
		}
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (__LIB_6__::func_808(iVar0, iParam2, -1))
				{
					iParam1 = 8;
					iParam2 = __LIB_6__::func_795(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = __LIB_6__::func_795(iParam0, 11);
				if (!__LIB_6__::func_808(iVar0, iVar1, -1))
				{
					return;
				}
			}
			__LIB_31__::func_926(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!__LIB_25__::func_42(iVar0, iParam2, 13) && !__LIB_25__::func_42(iVar0, iParam2, 14)) && !__LIB_25__::func_42(iVar0, iParam2, 15)) && !__LIB_25__::func_42(iVar0, iParam2, 16)) && !__LIB_25__::func_42(iVar0, iParam2, 71)) && !__LIB_25__::func_42(iVar0, iParam2, 72))
				{
					__LIB_31__::func_926(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_18__::func_431(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					__LIB_18__::func_467(iParam0, iVar2, 0);
				}
				else
				{
					__LIB_25__::func_43(iVar2, 1, Global_78127);
				}
			}
		}
	}
}

int func_520(int iParam0, int iParam1, int iParam2)//Position - 0x569BF
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
				if (func_416(iParam0, iParam1, iVar0))
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
				if (func_416(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

void func_523(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x56B3E
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
		if (Global_78127 != __LIB_0__::func_5() || iParam2 == -99)
		{
			return;
		}
		Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
		if (BitTest(Global_78130[2 /*14*/].f_6, 1) && BitTest(Global_78130[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
			}
			else
			{
				__LIB_7__::func_238(Global_2883588, 2, 1, 1, -1);
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
							__LIB_7__::func_238(iVar2, 2, 1, 1, -1);
							if (iVar5 < Global_4538446)
							{
								Global_4538446[iVar5] = iVar2;
								Global_4538457[iVar5] = iVar4;
								iVar5++;
							}
						}
						else
						{
							func_523(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_523(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_523(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
				iVar7 = __LIB_0__::func_534(iVar6, Global_78127, 0);
				MISC::SET_BIT(&iVar7, Global_78130[2 /*14*/].f_1);
				__LIB_0__::func_427(iVar6, iVar7, Global_78127, 1, 0);
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
							func_523(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_523(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_523(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_523(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_523(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_523(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_523(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_565(int iParam0)//Position - 0x6F892
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_520(iParam0, 11, -1);
				if (iVar1 >= 237)
				{
					iVar2 = __LIB_0__::func_420(joaat("MP_M_Freemode_01"), iVar1, 11, 3);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::func_160() && __LIB_0__::func_357(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_520(iParam0, 11, -1);
				if (iVar3 >= 237)
				{
					iVar4 = __LIB_0__::func_420(joaat("MP_F_Freemode_01"), iVar3, 11, 4);
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

int func_567(int iParam0, int iParam1, int iParam2)//Position - 0x6FBEC
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_359(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_569(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6FCB3
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_359(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_571(int iParam0, int iParam1, int iParam2)//Position - 0x6FF73
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
				if (func_359(iParam0, iParam1, iVar0))
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
				if (func_359(iParam0, iParam1, iVar1))
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
				return __LIB_6__::func_788(iParam0, iParam2);
			}
		}
		else
		{
			return __LIB_6__::func_795(iParam0, iParam1);
		}
	}
	return -99;
}

int func_572(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x70014
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
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iParam1, iParam2, -1) };
		if (!__LIB_0__::func_32(iParam3))
		{
			Global_78128 = (Global_78128 - 1);
			return 0;
		}
		__LIB_20__::func_322(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("Player_One"))
			{
				iVar5 = __LIB_6__::func_795(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = __LIB_6__::func_795(iParam0, 9);
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
			iVar7 = __LIB_6__::func_788(iParam0, 1);
			if (!__LIB_6__::func_780(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = __LIB_6__::func_788(iParam0, 0);
			if (!__LIB_6__::func_779(iVar10, 14, iVar8, -1) && !__LIB_6__::func_827(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("Player_One"))
			{
				iVar9 = __LIB_6__::func_788(iParam0, 2);
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
			uVar11 = { __LIB_18__::func_180(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, uVar11[iVar0], -1) };
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
							uVar12 = { __LIB_18__::func_247(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar12[iVar1], -1) };
							__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
							__LIB_20__::func_322(14);
							if (Global_78128 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_572(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							__LIB_0__::func_211(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, __LIB_0__::func_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iVar0), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, iParam4);
						}
						__LIB_20__::func_322(iVar0);
						if (Global_78128 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = __LIB_40__::func_943(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_572(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_571(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_569(iParam0, iVar10, &iVar4, 1))
							{
								func_572(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_572(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { __LIB_35__::func_896(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_572(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_572(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_572(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_572(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_572(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { __LIB_18__::func_247(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, 14, uVar15[iVar1], -1) };
			__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			__LIB_20__::func_322(14);
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_40__::func_943(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_572(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		__LIB_6__::func_810(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
		__LIB_20__::func_322(iParam1);
		if (Global_78128 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_572(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar3 = __LIB_40__::func_943(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_572(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			__LIB_39__::func_857(iVar10, iParam1, iParam2);
		}
	}
	if (Global_78128 == 1)
	{
		if (func_569(iParam0, iVar10, &iVar4, 0))
		{
			func_572(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_567(iParam0, iVar10, &iVar4))
		{
			func_572(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_609(int iParam0)//Position - 0x746F9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_20__::func_763(iParam0);
	if (__LIB_0__::func_317(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_352(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_10__::func_1(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_352(iParam0);
				}
			}
		}
		func_390(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_571(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_610(__LIB_12__::func_95(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_571(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_571(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_610(__LIB_12__::func_95(0), 3, 70, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 3, 71, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 3, 72, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 3, 73, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 3, 74, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 3, 75, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 4, 41, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 4, 42, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 4, 43, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 4, 44, 1, 0, 0, 0);
					func_610(__LIB_12__::func_95(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_571(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_390(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_610(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x74956
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_613(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_613(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x74B11
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iParam0, iParam1, iParam2, -1) };
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
					uVar3 = { __LIB_18__::func_180(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_613(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_613(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_38__::func_82(iParam0, 14, uVar4[iVar2], 1);
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
								func_613(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_613(iParam0, 14, iVar5, 1, 0);
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
								func_613(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_613(iParam0, 14, 17, 1, 0);
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

int func_619()//Position - 0x751CA
{
	if ((((((STREAMING::HAS_ANIM_DICT_LOADED("missmic2leadinmic_2_int") && STREAMING::HAS_ANIM_DICT_LOADED("cellphone@")) && __LIB_34__::func_987(1)) && func_620(44)) && STREAMING::HAS_MODEL_LOADED(joaat("CSB_Denise_friend"))) && STREAMING::HAS_MODEL_LOADED(joaat("v_ilev_fa_frontdoor"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing")))
	{
		return 1;
	}
	return 0;
}

int func_620(int iParam0)//Position - 0x7522E
{
	if (!__LIB_0__::func_317(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_793(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_622()//Position - 0x75281
{
	STREAMING::REMOVE_ANIM_DICT("missmic2leadinmic_2_int");
	STREAMING::REMOVE_ANIM_DICT("cellphone@");
	func_288(1);
	__LIB_34__::func_986(44);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CSB_Denise_friend"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("v_ilev_fa_frontdoor"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_1461))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_1461, 0);
	}
}

void func_623()//Position - 0x752D1
{
	STREAMING::REQUEST_ANIM_DICT("missmic2leadinmic_2_int");
	STREAMING::REQUEST_ANIM_DICT("cellphone@");
	__LIB_34__::func_989(1);
	__LIB_34__::func_988(44);
	STREAMING::REQUEST_MODEL(joaat("CSB_Denise_friend"));
	STREAMING::REQUEST_MODEL(joaat("v_ilev_fa_frontdoor"));
	STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
}

void func_626()//Position - 0x7535A
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_628()//Position - 0x7537F
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 9.206559f, 530.09717f, 175.3782f, 4f, 3.75f, 1.75f, false, true, 0))
	{
		__LIB_11__::func_315(1, 0);
	}
}

int func_631()//Position - 0x753C7
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(203, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			__LIB_11__::func_315(1, 0);
			return 1;
		}
	}
	return 0;
}

void func_634()//Position - 0x7542D
{
	__LIB_34__::func_978(42, "FRA_2_INT", -1, 0, -1);
}

bool func_641()//Position - 0x75474
{
	return !__LIB_0__::func_368(34);
}

int func_644()//Position - 0x754B9
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = __LIB_26__::func_499();
		bVar1 = false;
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(120.7764f, -1292.8864f, 28.2815f, "v_strip3");
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar2)
		{
			bVar1 = true;
		}
		if (__LIB_2__::func_188(CLOCK::GET_CLOCK_HOURS(), Global_91229[85 /*34*/].f_13, Global_91229[85 /*34*/].f_14))
		{
			if (bVar1)
			{
				if (!Global_97357)
				{
					Global_97357 = 1;
				}
			}
			if (__LIB_0__::func_317(iVar0))
			{
				switch (iVar0)
				{
					case 0:
					case 1:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 113.952866f, -1293.9154f, 28.270266f, 115.79063f, -1297.2335f, 31.519138f, 2.75f, false, true, 0))
						{
							return 1;
						}
						break;
					case 2:
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 117.460655f, -1293.6525f, 28.282537f, 118.77676f, -1295.8711f, 31.51958f, 2.75f, false, true, 0))
						{
							return 1;
						}
						break;
					}
			}
		}
		else if (bVar1)
		{
			return 1;
		}
		else if (Global_97357)
		{
			Global_97357 = 0;
		}
	}
	return 0;
}

void func_645()//Position - 0x755E0
{
	__LIB_30__::func_330();
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 0, false, true);
}

void func_647()//Position - 0x75610
{
	__LIB_30__::func_350(4);
	__LIB_34__::func_978(85, "BS_2B_MCS_3", 14, 12, 15);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 1, false, true);
}

int func_649()//Position - 0x7564A
{
	if (__LIB_29__::func_732(4))
	{
		return 1;
	}
	return 0;
}

void func_651()//Position - 0x7566E
{
	__LIB_29__::func_733(4, 0);
}

void func_653()//Position - 0x756B5
{
	__LIB_29__::func_733(4, 1);
}

int func_659()//Position - 0x756ED
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(120.7764f, -1292.8864f, 28.2815f, "v_strip3");
	}
	return 0;
}

void func_662()//Position - 0x75757
{
	int iVar0;
	int iVar1;
	__LIB_30__::func_350(4);
	__LIB_34__::func_978(84, "BS_2A_MCS_10", 30, 28, 0);
	iVar0 = __LIB_11__::func_685(4, 4);
	iVar1 = __LIB_11__::func_685(4, 0);
	__LIB_30__::func_351(84, "HACKER_SELECTION", 0, Global_96316[iVar0 /*5*/].f_2, 0);
	__LIB_30__::func_351(84, "HACKER_SELECTION", 2, Global_96316[iVar0 /*5*/].f_3, 0);
	if (iVar0 == 6 || iVar0 == 7)
	{
		__LIB_30__::func_351(84, "HACKER_SELECTION", 5, 0, 0);
	}
	else
	{
		__LIB_30__::func_351(84, "HACKER_SELECTION", 5, 2, 0);
	}
	__LIB_30__::func_351(84, "HACKER_SELECTION", 3, Global_96316[iVar0 /*5*/].f_3, 0);
	__LIB_30__::func_351(84, "HACKER_SELECTION", 4, Global_96316[iVar0 /*5*/].f_3, 0);
	__LIB_30__::func_351(84, "HACKER_SELECTION", 8, 0, 0);
	__LIB_30__::func_351(84, "gunman_selection_1", 0, Global_96316[iVar1 /*5*/].f_2, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 1, false, true);
}

int func_674()//Position - 0x759D7
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 99.79075f, -1293.3499f, 27.749529f, 103.507774f, -1299.9585f, 31.018785f, 2.375f, false, true, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_675()//Position - 0x75A6E
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = __LIB_26__::func_499();
	if (__LIB_0__::func_317(iVar0))
	{
		switch (iVar0)
		{
			case 0:
			case 1:
				Var2 = { __LIB_30__::func_321(241, __LIB_26__::func_499()) };
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var2) < (2.5f * 2.5f))
					{
						iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
							{
								__LIB_39__::func_465(24, -23.9f, -1437.3f, 31.2f, 0f);
								ENTITY::SET_ENTITY_COORDS(iVar1, -23.9f, -1437.3f, 31.2f, true, false, false, true);
							}
						}
						return 1;
					}
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 99.67842f, -1295.231f, 27.515306f, 101.81054f, -1294.0288f, 30.768753f, 5f, false, true, 0))
				{
					iVar1 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
						{
							__LIB_39__::func_465(24, 138.5988f, -1274.9763f, 28.298f, 292.4026f);
							ENTITY::SET_ENTITY_COORDS(iVar1, 138.5988f, -1274.9763f, 28.298f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iVar1, 292.4026f);
						}
					}
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_681()//Position - 0x775F5
{
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_30__::func_330();
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 0, false, true);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_682()//Position - 0x77624
{
	__LIB_39__::func_460(&(Global_96938.f_9[0]));
	__LIB_30__::func_330();
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 0, false, true);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_683()//Position - 0x77653
{
	int iVar0;
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	if (__LIB_26__::func_499() == 2)
	{
		__LIB_27__::func_933(&(Global_96938.f_9[0]), 12, 99.266f, -1294.164f, 28.265f, 217.5577f, 1);
		__LIB_11__::func_318(Global_96938.f_9[0], Global_96938.f_42);
		PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 1, 0, 0, false);
		Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 99.8142f, -1293.7738f, 28.2679f, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(99.266f, -1294.164f, 28.265f, 0f, 0f, -43f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iVar0, "MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT", "LESTER_BASE_IDLE", 8f, -8f, 5, 0, 1000f, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar0, true);
	}
	__LIB_30__::func_350(4);
	__LIB_34__::func_978(77, "BS_2A_2B_INT", 4, 6, 0);
	__LIB_30__::func_361(77, "LESTER", 1, 0, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382825971, 1, false, true);
}

int func_685()//Position - 0x7781A
{
	if (__LIB_26__::func_499() == 2)
	{
		if ((!func_620(12) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) || !STREAMING::HAS_ANIM_DICT_LOADED("MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT"))
		{
			return 0;
		}
	}
	if (!__LIB_29__::func_732(4))
	{
		return 0;
	}
	return 1;
}

void func_686()//Position - 0x77866
{
	if (__LIB_26__::func_499() == 2)
	{
		__LIB_34__::func_986(12);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
		STREAMING::REMOVE_ANIM_DICT("MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT");
	}
	__LIB_29__::func_733(4, 0);
}

void func_687()//Position - 0x77894
{
	if (__LIB_26__::func_499() == 2)
	{
		__LIB_34__::func_988(12);
		STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
		STREAMING::REQUEST_ANIM_DICT("MISSBIGSCORE2ALEADINOUT@BS_2A_2B_INT");
	}
	__LIB_29__::func_733(4, 1);
}

int func_691()//Position - 0x778DA
{
	return __LIB_0__::func_368(35);
}

int func_692()//Position - 0x778E8
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[1], false))
	{
		if (((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 50f, true) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[1], true), 50f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 50f)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[1], true), 50f))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_693()//Position - 0x77997
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(240, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[83 /*34*/].f_11, __LIB_26__::func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (250f * 250f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_694()//Position - 0x779F1
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_40__::func_657(&(Global_96938.f_9[1]));
}

void func_695()//Position - 0x77A1E
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
	__LIB_39__::func_460(&(Global_96938.f_9[0]));
	__LIB_39__::func_460(&(Global_96938.f_9[1]));
}

void func_696()//Position - 0x77A4B
{
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(2595.1243f, 2807.558f, 30.7274f, 2649.7778f, 2988.829f, 53.4642f, false, true, true, true);
	PED::SET_PED_NON_CREATION_AREA(2595.1243f, 2807.558f, 30.7274f, 2649.7778f, 2988.829f, 53.4642f);
	MISC::CLEAR_AREA_OF_PEDS(2627.9658f, 2941.1003f, 39.4282f, 30f, 0);
	Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 2628.9084f, 2947.6255f, 40.428f, 338.9562f, true, true);
	Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 2632.8145f, 2933.482f, 43.7436f, 53.5715f, true, true);
}

int func_697()//Position - 0x77B0E
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Construct_01")))
	{
		return 1;
	}
	return 0;
}

void func_698()//Position - 0x77B27
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Construct_01"));
}

void func_699()//Position - 0x77B38
{
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Construct_01"));
}

void func_701()//Position - 0x77B51
{
	int iVar0;
	if (__LIB_0__::func_368(30) && Global_43052 == 15)
	{
		if (Global_97359 == -15)
		{
			Global_97359 = __LIB_13__::func_95();
			if (Global_97358)
			{
				__LIB_32__::func_437(&Global_97359, 0, 30, 2, 0, 0, 0);
			}
			else
			{
				__LIB_32__::func_437(&Global_97359, 0, 30, 7, 0, 0, 0);
			}
		}
		else if (__LIB_32__::func_438(Global_97359))
		{
			__LIB_18__::func_203("AM_H_GAUNT_R" /* GXT: Gauntlets are required before attempting the heist. Check your email for locations. */, 0, 0, -1, 10000, 7, 0, 0, 0);
			Global_97359 = -15;
			Global_97358 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_77137.f_577)
		{
			func_720();
			if (!__LIB_0__::func_510())
			{
				if ((Global_78582 != 80 && Global_78582 != 81) && Global_78582 != 82)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!iLocal_1206)
						{
							iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
							{
								if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("gauntlet")))
								{
									if (func_709())
									{
										switch (__LIB_30__::func_303())
										{
											case 80:
												if (!__LIB_0__::func_176(80))
												{
													iLocal_1204[0] = 1;
												}
												break;
											case 81:
												if (__LIB_0__::func_176(80) && !__LIB_0__::func_176(81))
												{
													iLocal_1204[1] = 1;
												}
												break;
											case 82:
												if ((__LIB_0__::func_176(80) && __LIB_0__::func_176(81)) && !__LIB_0__::func_176(82))
												{
													iLocal_1204[2] = 1;
												}
												break;
										}
									}
									else
									{
										iLocal_1206 = 1;
									}
								}
							}
						}
					}
					else if (iLocal_1206)
					{
						iLocal_1206 = 0;
					}
				}
			}
			if (Global_96938.f_359 != -1)
			{
				if ((MISC::GET_GAME_TIMER() - Global_96938.f_359) > 30)
				{
					func_702();
					Global_96938.f_359 = -1;
				}
			}
			else
			{
				Global_96938.f_359 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_702()//Position - 0x77D2C
{
	int iVar0;
	if (!Global_96938.f_357)
	{
		iVar0 = 80;
		while (iVar0 <= 82)
		{
			if (!__LIB_0__::func_368(func_708(iVar0)) && __LIB_0__::func_176(iVar0))
			{
				if (func_707(iVar0, 1))
				{
					func_738();
					if (func_736())
					{
						func_704(iVar0);
						iLocal_1207 = iVar0;
						Global_96938.f_357 = 1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (!func_707(iLocal_1207, 0))
	{
		__LIB_30__::func_307(&(Global_96938[func_703(iLocal_1207)]));
		func_737();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), false);
		Global_96938.f_357 = 0;
	}
}

int func_703(int iParam0)//Position - 0x77DCA
{
	switch (iParam0)
	{
		case 80:
			return 0;
			break;
		case 81:
			return 1;
			break;
		case 82:
			return 2;
			break;
	}
	return 0;
}

void func_704(int iParam0)//Position - 0x77E01
{
	struct<3> Var0;
	int iVar1;
	switch (iParam0)
	{
		case 80:
			Var0 = { -311.1739f, -771.6993f, 52.2467f };
			func_705(Var0, 182.106f, iParam0, 13);
			break;
		case 81:
			Var0 = { -657.8753f, -272.2921f, 34.7628f };
			func_705(Var0, 30.6575f, iParam0, 4);
			break;
		case 82:
			Var0 = { 307.123f, -1084.8005f, 28.3597f };
			func_705(Var0, 299.7018f, iParam0, 0);
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iLocal_1204[iVar1] = 0;
		iVar1++;
	}
}

void func_705(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x77EAF
{
	MISC::CLEAR_AREA(Param0, 12f, true, false, false, false);
	while (!ENTITY::DOES_ENTITY_EXIST(Global_96938[func_703(iParam2)]))
	{
		Global_96938[func_703(iParam2)] = VEHICLE::CREATE_VEHICLE(joaat("gauntlet"), Param0, fParam1, true, true, false);
		SYSTEM::WAIT(0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_96938[func_703(iParam2)], false))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Global_96938[func_703(iParam2)], iParam3);
		if (!DECORATOR::DECOR_EXIST_ON(Global_96938[func_703(iParam2)], "MapGauntlet"))
		{
			DECORATOR::DECOR_SET_INT(Global_96938[func_703(iParam2)], "MapGauntlet", iParam2);
		}
		__LIB_11__::func_696(Global_96938[func_703(iParam2)]);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) <= (2.5f * 2.5f) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938[func_703(iParam2)]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96938[func_703(iParam2)], -1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			}
		}
	}
	iLocal_1207 = iParam2;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), true);
}

int func_707(int iParam0, bool bParam1)//Position - 0x7801C
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	switch (iParam0)
	{
		case 80:
			Var0 = { __LIB_30__::func_321(237, 0) };
			break;
		case 81:
			Var0 = { __LIB_30__::func_321(238, 0) };
			break;
		case 82:
			Var0 = { __LIB_30__::func_321(239, 0) };
			break;
	}
	fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
	fVar2 = 150f;
	if (!bParam1)
	{
		fVar2 = 160f;
	}
	if (fVar1 <= (fVar2 * fVar2))
	{
		return 1;
	}
	return 0;
}

int func_708(int iParam0)//Position - 0x7809E
{
	switch (iParam0)
	{
		case 80:
			return 31;
			break;
		case 81:
			return 32;
			break;
		case 82:
			return 33;
			break;
	}
	return -1;
}

int func_709()//Position - 0x780D8
{
	iLocal_1205 = __LIB_0__::func_183(__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()));
	if (__LIB_11__::func_92(iLocal_1205) >= 11000)
	{
		if (!func_718())
		{
			return 1;
		}
		else
		{
			__LIB_4__::func_67("AM_H_FHPCREP" /* GXT: $~1~ needed to purchase the mods required, and repair the vehicle, for the heist. */, func_711(1), 10000);
			return 0;
		}
	}
	else if (!iLocal_1206)
	{
		__LIB_4__::func_67("AM_H_FHPCCASH" /* GXT: $~1~ needed to purchase the mods required for the heist. */, func_711(0), 10000);
		iLocal_1206 = 1;
	}
	return 0;
}

int func_711(bool bParam0)//Position - 0x7815D
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = MISC::ABSI((__LIB_11__::func_92(iLocal_1205) - (11000 + __LIB_18__::func_446(Global_96938[func_703(__LIB_30__::func_303())], 0))));
	}
	else
	{
		iVar0 = MISC::ABSI((__LIB_11__::func_92(iLocal_1205) - 11000));
	}
	return iVar0;
}

int func_718()//Position - 0x78E9A
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[func_703(__LIB_30__::func_303())]))
	{
		iLocal_1205 = __LIB_0__::func_183(__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()));
		if ((__LIB_11__::func_92(iLocal_1205) - __LIB_18__::func_446(Global_96938[func_703(__LIB_30__::func_303())], 0)) < 11000)
		{
			return 1;
		}
	}
	return 0;
}

void func_720()//Position - 0x78EFD
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -442.3102f, -2178.7183f, 9.3993f) > 10000f)
	{
		iVar0 = 1616809629;
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0, 0);
		}
		iVar0 = -1380475172;
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iVar0, 0);
		}
	}
	else
	{
		Var1 = { -442.56024f, -2184.6055f, 14.55648f };
		Var2 = { -442.66803f, -2172.4956f, 9.39933f };
		fVar3 = 13.47f;
		iVar0 = 1616809629;
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("prop_com_gar_door_01"), -440.0606f, -2171.8267f, 11.3672f, true, true, false);
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var2, fVar3, false, true, 0))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, true, true);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, true, true);
		}
		iVar0 = -1380475172;
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iVar0))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iVar0, joaat("prop_com_gar_door_01"), -445.3054f, -2171.8267f, 11.3672f, true, true, false);
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var2, fVar3, false, true, 0))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 1, true, true);
		}
		else
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iVar0, 0, true, true);
		}
	}
}

void func_722()//Position - 0x79058
{
	int iVar0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_77137.f_577)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!iLocal_1206)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938[func_703(__LIB_30__::func_303())]) && !ENTITY::IS_ENTITY_DEAD(Global_96938[func_703(__LIB_30__::func_303())], false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96938[func_703(__LIB_30__::func_303())], false))
						{
							if (func_709())
							{
								iLocal_1206 = 1;
								iLocal_1204[func_703(__LIB_30__::func_303())] = 1;
								return;
							}
							else
							{
								iLocal_1206 = 1;
							}
						}
						else
						{
							iLocal_1206 = 0;
						}
					}
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("gauntlet")))
						{
							if (func_709())
							{
								iLocal_1206 = 1;
								iLocal_1204[func_703(__LIB_30__::func_303())] = 1;
							}
							else
							{
								iLocal_1206 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_1206 = 0;
			}
		}
	}
}

int func_725()//Position - 0x79163
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1204[func_703(__LIB_30__::func_303())] && !Global_77137.f_577)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[func_703(iLocal_1207)]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_96938[func_703(iLocal_1207)], true))
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_96938[func_703(iLocal_1207)], "MapGauntlet"))
					{
						if (iLocal_1207 == 80)
						{
							__LIB_0__::func_503(31, 1);
							Global_97358 = 0;
						}
						else if (iLocal_1207 == 81)
						{
							__LIB_0__::func_503(32, 1);
							Global_97358 = 0;
						}
						else if (iLocal_1207 == 82)
						{
							__LIB_0__::func_503(33, 1);
							Global_97358 = 0;
						}
					}
				}
			}
			__LIB_19__::func_856("AM_H_GAUNT_R" /* GXT: Gauntlets are required before attempting the heist. Check your email for locations. */, 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), true);
			return 1;
		}
	}
	return 0;
}

void func_731()//Position - 0x794E4
{
	int iVar0;
	if ((!iLocal_1204[0] && !iLocal_1204[1]) && !iLocal_1204[2])
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), false);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_1204[iVar0] = 0;
		iVar0++;
	}
	__LIB_30__::func_324(&(Global_96938[func_703(__LIB_30__::func_303())]));
}

void func_732()//Position - 0x79544
{
	int iVar0;
	if ((!iLocal_1204[0] && !iLocal_1204[1]) && !iLocal_1204[2])
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gauntlet"), false);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_1204[iVar0] = 0;
		iVar0++;
	}
	__LIB_30__::func_307(&(Global_96938[func_703(__LIB_30__::func_303())]));
}

void func_733()//Position - 0x795A4
{
	int iVar0;
	float fVar1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iVar0, "MapGauntlet"))
		{
			func_734();
			func_704(__LIB_30__::func_303());
		}
		else if (DECORATOR::DECOR_GET_INT(iVar0, "MapGauntlet") != __LIB_30__::func_303())
		{
			func_734();
			func_704(__LIB_30__::func_303());
		}
		else
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true));
			if (fVar1 > (150f * 150f))
			{
				func_734();
				func_704(__LIB_30__::func_303());
			}
		}
	}
	else
	{
		func_734();
		func_704(__LIB_30__::func_303());
	}
}

void func_734()//Position - 0x7964B
{
	struct<3> Var0;
	if (__LIB_30__::func_303() == 81)
	{
		Var0 = { -653.4072f, -280.5184f, 34.5603f };
		func_735(Var0);
		Var0 = { -662.522f, -265.6498f, 34.9485f };
		func_735(Var0);
	}
}

void func_735(struct<3> Param0)//Position - 0x79692
{
	int iVar0;
	iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(Param0, 2.51f, joaat("gauntlet"), 4);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		VEHICLE::DELETE_VEHICLE(&iVar0);
	}
}

int func_736()//Position - 0x796D2
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("gauntlet")))
	{
		return 1;
	}
	return 0;
}

void func_737()//Position - 0x796EB
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gauntlet"));
}

void func_738()//Position - 0x796FC
{
	STREAMING::REQUEST_MODEL(joaat("gauntlet"));
}

void func_739()//Position - 0x7970D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar0++;
	}
	Global_96938.f_359 = -1;
	iLocal_1206 = 0;
}

void func_741()//Position - 0x7973B
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", true);
		}
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[6]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[6]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_96938.f_9[6], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
					{
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(861.3f, -1565f, 29.4f, 5f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Global_96938.f_9[6], 861.3f, -1565f, 29.4f, 5f, 0);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[7]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[7]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Global_96938.f_9[7], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS")) != 1)
					{
						if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.8774f, 29.3866f, 5f, true))
						{
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Global_96938.f_9[7], 940.2881f, -1573.8774f, 29.3866f, 5f, 0);
						}
					}
				}
			}
		}
	}
	if (iLocal_1199[0] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 5f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
					iLocal_1199[0] = 1;
				}
			}
		}
	}
	if (iLocal_1199[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.4009f, 29.9673f, 5f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[1], 917.5028f, -1517.4009f, 29.9673f, 5f, 0);
					iLocal_1199[1] = 1;
				}
			}
		}
	}
	if (iLocal_1199[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[2]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.4226f, 29.2516f, 5f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[2], 869.6423f, -1541.4226f, 29.2516f, 5f, 0);
					iLocal_1199[2] = 1;
				}
			}
		}
	}
	if (iLocal_1199[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[3]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.1875f, 29.8247f, 5f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[3], 884.3046f, -1573.1875f, 29.8247f, 5f, 0);
					iLocal_1199[3] = 1;
				}
			}
		}
	}
	if (iLocal_1199[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[4]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.0199f, 29.8327f, 5f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[4], 903.8805f, -1575.0199f, 29.8327f, 5f, 0);
					iLocal_1199[4] = 1;
				}
			}
		}
	}
	if (iLocal_1199[5] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[5]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[5]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.1078f, 29.8125f, 5f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[5], 906.2186f, -1575.1078f, 29.8125f, 5f, 0);
					iLocal_1199[5] = 1;
				}
			}
		}
	}
	if (iLocal_1199[6] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[8]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[8]))
			{
				if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.4847f, 29.6539f, 5f, true))
				{
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Global_96938.f_9[8], 889.285f, -1561.4847f, 29.6539f, 5f, 0);
					iLocal_1199[6] = 1;
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[3]))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			Global_96938[3] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (iLocal_1197 == 0)
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (__LIB_1__::func_562(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				iLocal_1197 = 1;
			}
			else
			{
				iLocal_1197 = 1;
			}
		}
	}
}

int func_744()//Position - 0x79BBD
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[1], false))
		{
			iLocal_1198 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[2], false))
		{
			iLocal_1198 = 1;
		}
	}
	if (iLocal_1198 == 1)
	{
		__LIB_0__::func_296();
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_151("HELP_2", -1);
		return 1;
	}
	return 0;
}

int func_747()//Position - 0x79C4E
{
	struct<3> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[2], false))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(Global_96938[2], true) };
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) < 90f)
			{
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1200);
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1201);
				return 1;
			}
		}
		else
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) < 65f)
			{
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1200);
				PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1201);
				return 1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[6]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[6]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[6], 1) < 10f)
					{
						return 1;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[7]))
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[7]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[7], 1) < 10f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_749()//Position - 0x79DD6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_30__::func_324(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		__LIB_40__::func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", false);
		}
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1200);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1201);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1202, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1203, false);
}

void func_750()//Position - 0x79E5D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_30__::func_307(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		__LIB_39__::func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1200);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1201);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1202, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_1203, false);
}

void func_751()//Position - 0x79EC2
{
	PED::ADD_RELATIONSHIP_GROUP("WorkerPedGroup", &iLocal_1200);
	PED::ADD_RELATIONSHIP_GROUP("GuardGroup", &iLocal_1201);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1201, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1200, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1201, iLocal_1200);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1200, iLocal_1201);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1201, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1201);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1200, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1200);
	MISC::CLEAR_AREA(897.3f, -1556.1f, 30.4f, 40f, true, false, false, false);
	iLocal_1202 = PED::ADD_SCENARIO_BLOCKING_AREA(851.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, false, true, true, true);
	iLocal_1203 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, false, true, true, true);
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
	{
		MISC::CLEAR_AREA(919.5082f, -1546.9348f, 29.7786f, 5f, true, false, false, false);
		Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer2"), 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
	{
		MISC::CLEAR_AREA(918.2448f, -1551.2578f, 29.782f, 5f, true, false, false, false);
		Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
	}
	if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(Global_96938[2]))
	{
		VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Global_96938[2], Global_96938[1], 0.5f);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		MISC::CLEAR_AREA(912.34f, -1543.2975f, 29.6469f, 2f, true, false, false, false);
		Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 912.34f, -1543.2975f, 29.6469f, 16.169f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[0], iLocal_1200);
		__LIB_11__::func_168(Global_96938.f_9[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		MISC::CLEAR_AREA(917.5028f, -1517.4009f, 29.9673f, 2f, true, false, false, false);
		Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 917.5028f, -1517.4009f, 29.9673f, 158.5738f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[1], iLocal_1200);
		__LIB_11__::func_168(Global_96938.f_9[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[1], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[2]))
	{
		MISC::CLEAR_AREA(869.6423f, -1541.4226f, 29.2516f, 2f, true, false, false, false);
		Global_96938.f_9[2] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 869.6423f, -1541.4226f, 29.2516f, 346.9848f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[2], iLocal_1200);
		__LIB_11__::func_168(Global_96938.f_9[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[2], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
	{
		MISC::CLEAR_AREA(884.3046f, -1573.1875f, 29.8247f, 2f, true, false, false, false);
		Global_96938.f_9[3] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 884.3046f, -1573.1875f, 29.8247f, 182.9722f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[3], iLocal_1200);
		__LIB_11__::func_168(Global_96938.f_9[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[3], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
	{
		MISC::CLEAR_AREA(903.8805f, -1575.0199f, 29.8327f, 2f, true, false, false, false);
		Global_96938.f_9[4] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 903.8805f, -1575.0199f, 29.8327f, 308.1952f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[4], iLocal_1200);
		__LIB_11__::func_168(Global_96938.f_9[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[4], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[5]))
	{
		MISC::CLEAR_AREA(906.2186f, -1575.1078f, 29.8125f, 2f, true, false, false, false);
		Global_96938.f_9[5] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 906.2186f, -1575.1078f, 29.8125f, 55.9906f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[5], iLocal_1200);
		__LIB_11__::func_168(Global_96938.f_9[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[5], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[8]))
	{
		MISC::CLEAR_AREA(889.285f, -1561.4847f, 29.6539f, 2f, true, false, false, false);
		Global_96938.f_9[8] = PED::CREATE_PED(26, joaat("S_M_Y_Construct_01"), 889.285f, -1561.4847f, 29.6539f, 22.2456f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[8], iLocal_1200);
		__LIB_11__::func_168(Global_96938.f_9[8], 20f, 5f, 120f, -45f, 45f);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[8], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[6]))
	{
		MISC::CLEAR_AREA(863.1551f, -1564.5721f, 29.3231f, 2f, true, false, false, false);
		Global_96938.f_9[6] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 863.1551f, -1564.5721f, 29.3231f, 130.7946f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[6], iLocal_1201);
		__LIB_11__::func_168(Global_96938.f_9[6], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[6], true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[7]))
	{
		MISC::CLEAR_AREA(940.2881f, -1573.8774f, 29.3866f, 2f, true, false, false, false);
		Global_96938.f_9[7] = PED::CREATE_PED(26, joaat("S_M_M_Security_01"), 940.2881f, -1573.8774f, 29.3866f, 269.1856f, true, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[7], iLocal_1201);
		__LIB_11__::func_168(Global_96938.f_9[7], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[7], true);
	}
}

int func_753()//Position - 0x7A604
{
	if ((((HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && STREAMING::HAS_MODEL_LOADED(joaat("armytrailer2"))) && STREAMING::HAS_MODEL_LOADED(joaat("packer"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Construct_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_Security_01")))
	{
		return 1;
	}
	return 0;
}

void func_754()//Position - 0x7A651
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("armytrailer2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("packer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Construct_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_Security_01"));
	HUD::CLEAR_ADDITIONAL_TEXT(0, true);
}

void func_755()//Position - 0x7A683
{
	HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);
	STREAMING::REQUEST_MODEL(joaat("armytrailer2"));
	STREAMING::REQUEST_MODEL(joaat("packer"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Construct_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_Security_01"));
}

void func_756()//Position - 0x7A6B9
{
	iLocal_1198 = 0;
	iLocal_1197 = 0;
	iLocal_1199[0] = 0;
	iLocal_1199[1] = 0;
	iLocal_1199[2] = 0;
	iLocal_1199[3] = 0;
	iLocal_1199[4] = 0;
	iLocal_1199[5] = 0;
	iLocal_1199[6] = 0;
}

int func_761()//Position - 0x7A73E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 331.3899f, -1569.8737f, 60f, 434.0138f, -1659.1022f, 28.1882f, 90f, false, true, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
			{
				__LIB_6__::func_825(Global_96938[0], 0, 0);
			}
			return 1;
		}
	}
	return 0;
}

void func_764()//Position - 0x7A85B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_30__::func_324(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_40__::func_657(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
}

void func_765()//Position - 0x7A8AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_30__::func_307(&(Global_96938[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_39__::func_460(&(Global_96938.f_9[iVar0]));
		iVar0++;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
}

void func_766()//Position - 0x7A8FD
{
	struct<3> Var0;
	struct<3> Var1;
	func_768();
	Var0 = { 372.9868f, -1623.5312f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 8f, true, false, false, false);
	while (!ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		Global_96938[0] = VEHICLE::CREATE_VEHICLE(joaat("policet"), Var0, 321.7075f, true, true, false);
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(351.0698f, -1594.3324f, 28.2928f, 10f, true, false, false, false);
	MISC::CLEAR_AREA(368.356f, -1609.6256f, 28.2928f, 10f, true, false, false, false);
	Var1 = { 353.1191f, -1589.6061f, 28.2928f };
	Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(402.9022f, -1633.6042f, 25.0472f, 315.6288f, -1558.8143f, 38.7931f, false, true, true, true);
	Global_96938.f_9[0] = PED::CREATE_PED(26, joaat("S_M_Y_Cop_01"), Var1, 270.0968f, true, true);
	TASK::TASK_START_SCENARIO_AT_POSITION(Global_96938.f_9[0], "WORLD_HUMAN_HANG_OUT_STREET", Var1, 270.0968f, 0, false, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], false);
	PED::SET_PED_NAME_DEBUG(Global_96938.f_9[0], "COP 1");
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_96938.f_9[0], 2);
	Var1 = { 354.557f, -1590.5488f, 28.2928f };
	Global_96938.f_9[1] = PED::CREATE_PED(26, joaat("S_M_Y_Cop_01"), Var1, 16.3702f, true, true);
	TASK::TASK_START_SCENARIO_AT_POSITION(Global_96938.f_9[1], "WORLD_HUMAN_STAND_MOBILE", Var1, 3.8862f, 0, false, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[1], false);
	PED::SET_PED_NAME_DEBUG(Global_96938.f_9[1], "COP 2");
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_96938.f_9[1], 2);
	Var1 = { 369.8186f, -1611.0293f, 28.2928f };
	Global_96938.f_9[2] = PED::CREATE_PED(26, joaat("S_M_Y_Cop_01"), Var1, 9.0837f, true, true);
	TASK::TASK_USE_MOBILE_PHONE(Global_96938.f_9[2], true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[2], false);
	PED::SET_PED_NAME_DEBUG(Global_96938.f_9[2], "COP 3");
	PED::SET_PED_TARGET_LOSS_RESPONSE(Global_96938.f_9[2], 2);
	func_767();
	Var0 = { 400.5771f, -1618.9274f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 6f, true, false, false, false);
	Global_96938[1] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Var0, 48.8115f, true, true, false);
	Var0 = { 396.6843f, -1623.222f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 6f, true, false, false, false);
	Global_96938[2] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Var0, 231.3392f, true, true, false);
	Var0 = { 394.3527f, -1625.3374f, 28.2928f };
	MISC::CLEAR_AREA(Var0, 6f, true, false, false, false);
	Global_96938[3] = VEHICLE::CREATE_VEHICLE(joaat("police3"), Var0, 49.3732f, true, true, false);
}

void func_767()//Position - 0x7ABE7
{
	if (((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1])) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false)) && !ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[1], false))
	{
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 9, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[0], 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 9, 2, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[1], 10, 0, 1, 0);
	}
}

void func_768()//Position - 0x7AD0B
{
	iLocal_1196 = -1469527606;
	OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_1196, joaat("prop_fnclink_03gate5"), 391.86f, -1636.07f, 29.97f, true, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_1196, 4, true, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[13 /*31*/], 4, true, false);
}

int func_769()//Position - 0x7AD51
{
	if (((STREAMING::HAS_MODEL_LOADED(joaat("police3")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Cop_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("policet"))) && AUDIO::PREPARE_MUSIC_EVENT("FHPRA_START"))
	{
		return 1;
	}
	return 0;
}

void func_770()//Position - 0x7AD94
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Cop_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policet"));
}

void func_771()//Position - 0x7ADB7
{
	STREAMING::REQUEST_MODEL(joaat("police3"));
	STREAMING::REQUEST_MODEL(joaat("policet"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Cop_01"));
}

void func_774()//Position - 0x7ADEA
{
	if ((__LIB_0__::func_524(PLAYER::PLAYER_PED_ID()) && __LIB_0__::func_524(Global_96938.f_9[0])) && __LIB_0__::func_524(Global_96938.f_28[0]))
	{
		if (!BitTest(iLocal_1188, 0))
		{
			if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 1275.72f, -1719.97f, 54.97f, 1) < 5f)
			{
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "UNLOCK_DOOR", 1275.72f, -1719.97f, 54.97f, "LESTER1A_SOUNDS", false, 0, false);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", false, true);
				MISC::SET_BIT(&iLocal_1188, 0);
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1275.72f, -1719.97f, 54.97f) < (50f * 50f))
		{
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		}
		if (!BitTest(iLocal_1188, 1))
		{
			if (__LIB_35__::func_203(&Local_1193) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			{
				__LIB_12__::func_13(0);
				__LIB_39__::func_906(75, 1);
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-565026078, 0f, true, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-565026078, 1, true, true);
				MISC::SET_BIT(&iLocal_1188, 1);
			}
		}
		else
		{
			__LIB_11__::func_315(1, 0);
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (__LIB_35__::func_203(&Local_1194))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
			}
			if (!BitTest(iLocal_1188, 2))
			{
				iLocal_1189 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1190, Local_1191, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1189, "missfinale_c2leadinoutfin_c_int", "_LEADIN_ACTION_LESTER", 1000f, -8f, 5, 16, 1000f, 0);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iLocal_1189, "_LEADIN_ACTION_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1000f);
				MISC::SET_BIT(&iLocal_1188, 2);
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1189))
			{
				if (!BitTest(iLocal_1188, 3))
				{
					if (__LIB_36__::func_92(&(Global_96938.f_44), "FINC1AU", "FINC1_INTLI", 9, 0, 0, 0))
					{
						MISC::SET_BIT(&iLocal_1188, 3);
						if (__LIB_0__::func_524(Global_96938.f_9[0]) && __LIB_0__::func_524(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2048, 4);
						}
						__LIB_26__::func_973(&iLocal_1185);
					}
				}
				if (!BitTest(iLocal_1188, 4))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1189) >= 0.99f)
					{
						iLocal_1189 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1190, Local_1191, 2);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1189, true);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1189, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP2_LESTER", 1000f, -8f, 5, 16, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iLocal_1189, "_LEADIN_LOOP2_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1000f);
						MISC::SET_BIT(&iLocal_1188, 4);
					}
				}
			}
		}
	}
}

int func_794()//Position - 0x7F0AF
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
		{
			if (PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				return 1;
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_96938.f_9[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_ANGLED_AREA(Local_1192, Local_1192.f_3, Local_1192.f_6, true) || FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_1193, Local_1193.f_3, Local_1193.f_6))
	{
		return 1;
	}
	return 0;
}

int func_795()//Position - 0x7F13D
{
	if (BitTest(iLocal_1188, 3))
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (__LIB_0__::func_524(Global_96938.f_9[0]))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOV(50f);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.35f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_1195);
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.3f);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
			}
		}
		else
		{
			CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
		}
		if (!__LIB_0__::func_75() && __LIB_30__::func_331(&iLocal_1185) > 2.1f)
		{
			return 1;
		}
	}
	return 0;
}

void func_797()//Position - 0x7F207
{
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	__LIB_30__::func_330();
	__LIB_9__::func_995();
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_30__::func_308(&(Global_96938.f_28[0]));
	__LIB_0__::func_202(&(Global_96938.f_44), 0);
	__LIB_0__::func_202(&(Global_96938.f_44), 1);
	__LIB_39__::func_906(75, 0);
	if (__LIB_9__::func_611() != 26)
	{
		__LIB_6__::func_295(6, 1);
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", true, true);
}

void func_801()//Position - 0x7F2E2
{
	var uVar0;
	char* sVar1;
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	__LIB_30__::func_330();
	__LIB_9__::func_995();
	if (__LIB_0__::func_524(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	CAM::STOP_GAMEPLAY_HINT(false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
	{
		PED::SET_PED_KEEP_TASK(Global_96938.f_9[0], true);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_39__::func_457(Global_96938.f_9[0]);
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(Global_96938.f_9[0], &uVar0);
		if (!MISC::IS_STRING_NULL(sVar1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sVar1, SCRIPT::GET_THIS_SCRIPT_NAME()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Global_96938.f_9[0], true))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Global_96938.f_9[0]))
					{
						ENTITY::DETACH_ENTITY(Global_96938.f_9[0], true, true);
					}
					ENTITY::SET_ENTITY_COLLISION(Global_96938.f_9[0], true, false);
				}
				TASK::CLEAR_PED_SECONDARY_TASK(Global_96938.f_9[0]);
				ENTITY::SET_ENTITY_HAS_GRAVITY(Global_96938.f_9[0], true);
				ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Global_96938.f_9[0]));
			}
		}
	}
	__LIB_30__::func_309(&(Global_96938.f_28[0]));
	__LIB_0__::func_202(&(Global_96938.f_44), 0);
	__LIB_0__::func_202(&(Global_96938.f_44), 1);
	__LIB_39__::func_906(75, 0);
	if (__LIB_9__::func_611() != 26)
	{
		__LIB_6__::func_295(6, 1);
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_LESTERS_DOGS", true, true);
}

void func_802()//Position - 0x7F440
{
	__LIB_34__::func_978(26, "FIN_C_INT", -1, 0, -1);
	Local_1192 = { __LIB_30__::func_220(1273.3252f, -1709.4578f, 53.77147f, 1274.8347f, -1712.467f, 56.27147f, 5.5f) };
	Local_1193 = { __LIB_30__::func_220(1274.5181f, -1718.665f, 53.77147f, 1272.7361f, -1707.6084f, 55.77311f, 6.5f) };
	Local_1194 = { __LIB_30__::func_220(1271.8542f, -1712.8351f, 53.77147f, 1276.3843f, -1710.6321f, 56.888542f, 3.2f) };
	PED::ADD_RELATIONSHIP_GROUP("TS_FINC1", &(Global_96938.f_42));
	Global_96938.f_9[0] = PED::CREATE_PED(26, __LIB_11__::func_793(12), Local_1190, 338.0729f, true, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_793(12));
	__LIB_11__::func_318(Global_96938.f_9[0], Global_96938.f_42);
	PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 1, 0, 0, false);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_wheelchair_01_s"), Local_1190, true, true, false);
	iLocal_1189 = PED::CREATE_SYNCHRONIZED_SCENE(Local_1190, Local_1191, 2);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1189, true);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_1189, "missfinale_c2leadinoutfin_c_int", "_LEADIN_LOOP1_LESTER", 1000f, -8f, 5, 16, 1000f, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iLocal_1189, "_LEADIN_LOOP1_WCHAIR", "missfinale_c2leadinoutfin_c_int", 1000f, 8f, 4, 1000f);
	__LIB_0__::func_203(&(Global_96938.f_44), 0, Global_96938.f_9[0], "LESTER", 0, 1);
	__LIB_0__::func_203(&(Global_96938.f_44), 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_39__::func_906(75, 0);
}

int func_804()//Position - 0x7F629
{
	if (((STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_793(12)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_wheelchair_01_s"))) && STREAMING::HAS_ANIM_DICT_LOADED("missfinale_c2leadinoutfin_c_int")) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false, -1))
	{
		return 1;
	}
	return 0;
}

void func_805()//Position - 0x7F66F
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_793(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_wheelchair_01_s"));
	STREAMING::REMOVE_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
	__LIB_0__::func_202(&(Global_96938.f_44), 0);
	__LIB_0__::func_202(&(Global_96938.f_44), 1);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	__LIB_39__::func_906(75, 0);
}

void func_806()//Position - 0x7F6B4
{
	STREAMING::REQUEST_MODEL(__LIB_11__::func_793(12));
	STREAMING::REQUEST_MODEL(joaat("prop_wheelchair_01_s"));
	STREAMING::REQUEST_ANIM_DICT("missfinale_c2leadinoutfin_c_int");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Lester1A_01", false, -1);
	__LIB_25__::func_609(6, 0);
}

void func_809()//Position - 0x7F7C1
{
	iLocal_1188 = 0;
	iLocal_1189 = 0;
}

void func_811()//Position - 0x7F7D9
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_41__::func_665(0, "MICHAEL", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 22, 1, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 26, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 4, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		__LIB_42__::func_1("Franklin", PLAYER::PLAYER_PED_ID(), joaat("Player_One"), 2);
	}
}

int func_818()//Position - 0x802AF
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(199, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[25 /*34*/].f_11, __LIB_26__::func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (8f * 8f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_455(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						return 1;
					}
					else
					{
						__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0);
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_820()//Position - 0x80383
{
	__LIB_30__::func_330();
	if (__LIB_9__::func_611() != 25)
	{
		__LIB_0__::func_54(1, 1);
	}
}

void func_823()//Position - 0x803CD
{
	__LIB_0__::func_54(0, 1);
	__LIB_34__::func_978(25, "FIN_B_MCS_1_aandb", -1, 0, -1);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_41__::func_665(0, "MICHAEL", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 3, 22, 1, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 4, 26, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 6, 4, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MICHAEL", 10, 0, 0, 0);
		__LIB_42__::func_1("Franklin", PLAYER::PLAYER_PED_ID(), joaat("Player_One"), 2);
	}
}

void func_829()//Position - 0x80496
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_41__::func_665(2, "Trevor", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 3, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 4, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 6, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 10, 0, 0, 0);
		__LIB_42__::func_1("Franklin", PLAYER::PLAYER_PED_ID(), joaat("Player_One"), 2);
	}
}

int func_832()//Position - 0x8052A
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(198, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[24 /*34*/].f_11, __LIB_26__::func_499()))
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 25, false, false);
			}
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (8f * 8f))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (__LIB_0__::func_455(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						return 1;
					}
					else
					{
						__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0);
					}
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_833()//Position - 0x805E9
{
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, 1);
	if (__LIB_9__::func_611() != 24)
	{
		__LIB_0__::func_54(1, 1);
	}
}

void func_835()//Position - 0x8065D
{
	__LIB_0__::func_54(0, 1);
	PATHFIND::SET_ROADS_IN_AREA(1199.4f, -2661.9f, 70f, 1597.1f, -2447.7f, -5f, false, true);
	__LIB_34__::func_978(24, "FIN_A_INT", -1, 0, -1);
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		__LIB_41__::func_665(2, "Trevor", 2);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 3, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 4, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 5, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 6, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 8, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 9, 0, 0, 0);
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Trevor", 10, 0, 0, 0);
		__LIB_42__::func_1("Franklin", PLAYER::PLAYER_PED_ID(), joaat("Player_One"), 2);
	}
}

void func_841()//Position - 0x80740
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && __LIB_26__::func_499() == 1)
	{
		switch (iLocal_1176)
		{
			case 0:
				func_843();
				break;
			case 1:
				func_842();
				break;
			}
	}
}

void func_842()//Position - 0x80781
{
	struct<3> Var0;
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (SYSTEM::VDIST2(Var0, -7.2915f, 512.9512f, 173.6282f) < 81f || SYSTEM::VDIST2(Var0, 7.5179f, 539.526f, 176.1781f) < 6.5f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, 0f, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 1, false, true);
		if (HUD::DOES_BLIP_EXIST(iLocal_1177))
		{
			HUD::REMOVE_BLIP(&iLocal_1177);
		}
		iLocal_1176 = 2;
	}
	if (iLocal_1179 != -1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 8.18818f, 538.83167f, 178.22221f, 4.80666f, 533.29614f, 174.34355f, 5f, false, true, 0) || (MISC::GET_GAME_TIMER() - iLocal_1180) > 5000)
		{
			AUDIO::STOP_SOUND(iLocal_1179);
			AUDIO::RELEASE_SOUND_ID(iLocal_1179);
			iLocal_1179 = -1;
		}
	}
}

void func_843()//Position - 0x80866
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (iLocal_1178 == -1)
	{
		if (SYSTEM::VDIST2(Var0, __LIB_30__::func_321(197, 0)) < 3f)
		{
			if (!CAM::IS_SPHERE_VISIBLE(7.5179f, 539.526f, 176.1781f, 1.5f))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, 0f, false, true);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 1, false, true);
				iLocal_1178 = MISC::GET_GAME_TIMER();
				__LIB_34__::func_977();
				MISC::SET_BIT(&(Global_91229[23 /*34*/].f_15), 11);
				__LIB_10__::func_604(Global_91229[23 /*34*/].f_10, 0, 0);
			}
			else
			{
				fVar1 = 0f;
				if (MISC::ABSF(fVar1) < 0.02f)
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, fVar1, false, true);
					iLocal_1178 = MISC::GET_GAME_TIMER();
					__LIB_34__::func_977();
					MISC::SET_BIT(&(Global_91229[23 /*34*/].f_15), 11);
					__LIB_10__::func_604(Global_91229[23 /*34*/].f_10, 0, 0);
				}
			}
		}
	}
	else if ((MISC::GET_GAME_TIMER() - iLocal_1178) > 3000 || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 8.18818f, 538.83167f, 178.22221f, 4.80666f, 533.29614f, 174.34355f, 5f, false, true, 0))
	{
		__LIB_32__::func_669(4);
		iLocal_1177 = __LIB_0__::func_392(7.8325f, 538.7512f, 175.0281f, 0);
		iLocal_1176 = 1;
		if (!iLocal_1181)
		{
			iLocal_1179 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_1179, "DOOR_BUZZER_LOOP", 7.1155f, 539.1238f, 175.0281f, "FINALE_INTRO_SOUNDSET", false, 0, false);
			iLocal_1180 = MISC::GET_GAME_TIMER();
			iLocal_1181 = 1;
		}
		if (!Global_96938.f_357)
		{
			iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, false);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar2, 8.09956f, 539.1997f, 175.02812f, 5f, 5f, 5f, false, true, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iVar2, 2.7713f, 546.1324f, 173.5474f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar2, 125.6127f);
						Global_96938.f_357 = 1;
					}
				}
			}
			else
			{
				Global_96938.f_357 = 1;
			}
		}
	}
}

int func_859()//Position - 0x84359
{
	if (iLocal_1176 == 1)
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_860()//Position - 0x84378
{
	if (iLocal_1176 == 2)
	{
		if (iLocal_1179 != -1)
		{
			AUDIO::STOP_SOUND(iLocal_1179);
			AUDIO::RELEASE_SOUND_ID(iLocal_1179);
			iLocal_1179 = -1;
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1040675994, 0f, false, true);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 0, false, true);
		return 1;
	}
	return 0;
}

void func_861()//Position - 0x843BD
{
	__LIB_30__::func_330();
	if (iLocal_1179 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1179);
		AUDIO::RELEASE_SOUND_ID(iLocal_1179);
		iLocal_1179 = -1;
	}
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 0, false, true);
	MISC::CLEAR_BIT(&(Global_91229[23 /*34*/].f_15), 11);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (HUD::DOES_BLIP_EXIST(iLocal_1177))
	{
		HUD::REMOVE_BLIP(&iLocal_1177);
	}
}

void func_862()//Position - 0x84413
{
	__LIB_30__::func_330();
	if (iLocal_1179 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1179);
		AUDIO::RELEASE_SOUND_ID(iLocal_1179);
		iLocal_1179 = -1;
	}
	if (iLocal_1176 == 2)
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1040675994, 0, false, true);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_1177))
	{
		HUD::REMOVE_BLIP(&iLocal_1177);
	}
	MISC::CLEAR_BIT(&(Global_91229[23 /*34*/].f_15), 11);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
}

void func_863()//Position - 0x84470
{
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_867();
	__LIB_34__::func_978(23, "CHOICE_INT", -1, 0, -1);
}

int func_864()//Position - 0x8448F
{
	if (AUDIO::REQUEST_MISSION_AUDIO_BANK("INTERCOM", false, -1))
	{
		return 1;
	}
	return 0;
}

void func_865()//Position - 0x844AA
{
	if (iLocal_1179 != -1)
	{
		AUDIO::STOP_SOUND(iLocal_1179);
		AUDIO::RELEASE_SOUND_ID(iLocal_1179);
		iLocal_1179 = -1;
	}
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	MISC::CLEAR_BIT(&(Global_91229[23 /*34*/].f_15), 11);
}

void func_866()//Position - 0x844DF
{
	AUDIO::REQUEST_MISSION_AUDIO_BANK("INTERCOM", false, -1);
}

void func_867()//Position - 0x844F3
{
	Global_96938.f_357 = 0;
	iLocal_1178 = -1;
	iLocal_1179 = -1;
	iLocal_1176 = 0;
}

int func_872()//Position - 0x84531
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(185, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}

int func_884()//Position - 0x845DC
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(174, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
		if (fVar1 < (2.5f * 2.5f))
		{
			return 1;
		}
	}
	return 0;
}

void func_893()//Position - 0x84665
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 809.4f, -1075.1f, 29f);
	if (fVar0 < 625f)
	{
		if (iLocal_431 == -1)
		{
			iLocal_431 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_431, "ASS_PAYPHONE_RING_master", 809.4f, -1075.1f, 29f, 0, false, 0, false);
		}
	}
	else if (iLocal_431 != -1)
	{
		__LIB_2__::func_29(&iLocal_431);
		iLocal_431 = -1;
	}
}

int func_897()//Position - 0x84718
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(168, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[7 /*34*/].f_11, __LIB_26__::func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (4f * 4f))
			{
				__LIB_2__::func_29(&iLocal_431);
				iLocal_431 = -1;
				return 1;
			}
		}
	}
	return 0;
}

void func_906()//Position - 0x84835
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -26.204f, -109.798f, 57f);
	if (fVar0 < 625f)
	{
		if (iLocal_431 == -1)
		{
			iLocal_431 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_431, "ASS_PAYPHONE_RING_master", -26.204f, -109.798f, 57f, 0, false, 0, false);
		}
	}
	else if (iLocal_431 != -1)
	{
		__LIB_2__::func_29(&iLocal_431);
		iLocal_431 = -1;
	}
}

int func_909()//Position - 0x848C7
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(167, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[6 /*34*/].f_11, __LIB_26__::func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (3.5f * 3.5f))
			{
				__LIB_2__::func_29(&iLocal_431);
				iLocal_431 = -1;
				return 1;
			}
		}
	}
	return 0;
}

void func_918()//Position - 0x84986
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 214.3494f, -853.0786f, 30.7142f);
	if (fVar0 < 625f)
	{
		if (iLocal_431 == -1)
		{
			iLocal_431 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_431, "ASS_PAYPHONE_RING_master", 214.3494f, -853.0786f, 30.7142f, 0, false, 0, false);
		}
	}
	else if (iLocal_431 != -1)
	{
		__LIB_2__::func_29(&iLocal_431);
		iLocal_431 = -1;
	}
}

int func_921()//Position - 0x84A18
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(166, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[5 /*34*/].f_11, __LIB_26__::func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (4f * 4f))
			{
				__LIB_2__::func_29(&iLocal_431);
				iLocal_431 = -1;
				return 1;
			}
		}
	}
	return 0;
}

void func_930()//Position - 0x84ACF
{
	float fVar0;
	fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -700.1431f, -917.7708f, 18.2147f);
	if (fVar0 < 625f)
	{
		if (iLocal_431 == -1)
		{
			iLocal_431 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_431, "ASS_PAYPHONE_RING_master", -700.1431f, -917.7708f, 19f, 0, false, 0, false);
		}
	}
	else if (iLocal_431 != -1)
	{
		__LIB_2__::func_29(&iLocal_431);
		iLocal_431 = -1;
	}
}

int func_933()//Position - 0x84B54
{
	struct<3> Var0;
	float fVar1;
	Var0 = { __LIB_30__::func_321(165, 0) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BitTest(Global_91229[4 /*34*/].f_11, __LIB_26__::func_499()))
		{
			fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
			if (fVar1 < (6f * 6f))
			{
				STREAMING::SET_HD_AREA(-717.8348f, -932.1736f, 18.01735f, 26f);
				__LIB_2__::func_29(&iLocal_431);
				iLocal_431 = -1;
				return 1;
			}
		}
	}
	return 0;
}

void func_942()//Position - 0x84C6A
{
	int iVar0;
	int iVar1;
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(715.9622f, -964.9521f, 29.3953f, "v_sweatempty");
	if ((INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar0) && ((__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 0 && iLocal_427 > 1) || (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 1 && iLocal_427 > 0)))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 1, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 1, true, false);
	}
	else
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-826072862, 0, true, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(763780711, 0, true, false);
	}
	switch (iLocal_427)
	{
		case 0:
			if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iVar0)
			{
				if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 0)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], false);
					iLocal_427++;
				}
				else if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 1)
				{
					if (__LIB_36__::func_92(&(Global_96938.f_44), "AH3BAUD", "AH_INTF", 8, 0, 0, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], false);
						ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[1], false);
						__LIB_34__::func_977();
						iLocal_427++;
					}
				}
			}
			break;
		case 1:
			if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.73956f, -963.9054f, 31.64567f, 3.25f, 3.125f, 2.25f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
					{
						if (!__LIB_0__::func_75())
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHeistFBI3BleadInOut", "ah_3b_int_leadin_lester", 709.855f, -963.434f, 29.39f, 0f, 0f, 0f, 1000f, -1000f, -1, 4104, 0f, 2, 0);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, "MISSHeistFBI3BleadInOut", "AH_3B_INT_loop_Lester", 709.855f, -963.434f, 29.39f, 0f, 0f, 0f, 1000f, -8f, -1, 4105, 0f, 2, 0);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Global_96938.f_9[0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
							{
								CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, -1, 2000, 2000, 0);
								CAM::SET_GAMEPLAY_HINT_FOV(30f);
								CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.7f);
								CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
								CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.02f);
								CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
								CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
							}
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 710.9573f, -964.1301f, 29.3953f, 1f, -1, 0.25f, 1, 93.3411f);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_96938.f_9[0], -1);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar1);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 0, 3);
							}
							__LIB_34__::func_977();
							Global_96938.f_358 = MISC::GET_GAME_TIMER() + 1000;
							iLocal_427++;
						}
					}
				}
			}
			else if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 1)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 717.4507f, -968.1054f, 27.97803f, 717.49243f, -965.03796f, 31.39561f, 4.0625f, false, true, 0))
				{
					__LIB_6__::func_771();
					iLocal_427 = 4;
				}
				else if (!__LIB_0__::func_75())
				{
					iLocal_427 = 4;
				}
			}
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() > Global_96938.f_358)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_36__::func_92(&(Global_96938.f_44), "AH3BAUD", "AH_INTL", 8, 0, 0, 0))
					{
						iLocal_427++;
					}
				}
			}
			break;
		case 3:
			if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 0 && !PED::IS_PED_INJURED(Global_96938.f_9[0]))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_96938.f_9[0], "MISSHeistFBI3BleadInOut", "AH_3B_INT_leadin_lester", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Global_96938.f_9[0], "MISSHeistFBI3BleadInOut", "AH_3B_INT_leadin_lester") >= 0.764f)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_6__::func_833();
					}
					if (!__LIB_0__::func_75())
					{
						iLocal_427 = 4;
					}
				}
			}
			break;
	}
}

int func_949()//Position - 0x850F0
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_427 >= 4)
		{
			func_1014();
			return 1;
		}
	}
	return 0;
}

void func_950()//Position - 0x85114
{
	Global_96938[0] = 0;
	__LIB_30__::func_324(&(Global_96938[1]));
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_40__::func_657(&(Global_96938.f_9[1]));
	__LIB_30__::func_308(&(Global_96938.f_28[0]));
	__LIB_30__::func_308(&(Global_96938.f_28[1]));
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-874851305, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 0, false, true);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(949391213, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 0, false, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 0, false, true);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__::func_330();
}

void func_951()//Position - 0x851A9
{
	Global_96938[0] = 0;
	__LIB_30__::func_307(&(Global_96938[1]));
	__LIB_39__::func_464(&(Global_96938.f_9[0]));
	__LIB_39__::func_464(&(Global_96938.f_9[1]));
	__LIB_30__::func_309(&(Global_96938.f_28[0]));
	__LIB_30__::func_309(&(Global_96938.f_28[1]));
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-874851305, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 0, false, true);
	OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(949391213, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 0, false, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 0, false, true);
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
	__LIB_30__::func_330();
}

void func_952()//Position - 0x8523E
{
	__LIB_34__::func_978(70, "AH_3B_INT", 0, 2, -1);
	__LIB_30__::func_361(70, "Lester", 1, 0, 0);
	PED::ADD_RELATIONSHIP_GROUP("REL_TS_FRIENDLY", &(Global_96938.f_42));
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, -1f, false, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 1, false, true);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(949391213, 1f, false, true);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 1, false, true);
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1480820165, 0f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 1, false, true);
	if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 0)
	{
		__LIB_27__::func_933(&(Global_96938.f_9[0]), 12, 707.1259f, -961.3305f, 29.3957f, 165.8747f, 0);
		Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 707.1259f, -961.3305f, 29.3957f, true, true, false);
		Global_96938.f_28[1] = OBJECT::CREATE_OBJECT(joaat("prop_cs_lester_crate"), 707.8559f, -964.3258f, 29.5025f, true, true, false);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Global_96938.f_28[1], 707.8559f, -964.3258f, 29.5025f, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Global_96938.f_28[1], -147.8231f);
		ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_28[1], true);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
		__LIB_0__::func_203(&(Global_96938.f_44), 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (__LIB_20__::func_763(PLAYER::PLAYER_PED_ID()) == 1)
	{
		if (!__LIB_30__::func_365(0, 1, __LIB_30__::func_321(Global_91229[70 /*34*/].f_10, 0), 110f))
		{
			__LIB_40__::func_993(&(Global_96938[1]), 0, 718.3592f, -983.2876f, 23.1379f, 270.6242f, 1, 0);
		}
		__LIB_27__::func_933(&(Global_96938.f_9[0]), 12, 711.9644f, -965.5922f, 29.3957f, 359.9821f, 0);
		func_289(&(Global_96938.f_9[1]), 0, 711.8387f, -963.7095f, 29.3957f, 183.2461f, 0, 0, 0);
		__LIB_11__::func_318(Global_96938.f_9[1], Global_96938.f_42);
		ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[1], true);
		__LIB_0__::func_203(&(Global_96938.f_44), 0, Global_96938.f_9[1], "MICHAEL", 0, 1);
	}
	PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 1, 0, 0, false);
	__LIB_11__::func_318(Global_96938.f_9[0], Global_96938.f_42);
	ENTITY::FREEZE_ENTITY_POSITION(Global_96938.f_9[0], true);
	__LIB_0__::func_203(&(Global_96938.f_44), 3, Global_96938.f_9[0], "Lester", 0, 1);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, true);
}

int func_1011()//Position - 0x8A9C7
{
	if (((((STREAMING::HAS_MODEL_LOADED(joaat("Player_Zero")) && STREAMING::HAS_MODEL_LOADED(__LIB_6__::func_830(0, 0))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_LesterCrest"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_lester_crate"))) && STREAMING::HAS_ANIM_DICT_LOADED("MISSHeistFBI3BleadInOut"))
	{
		return 1;
	}
	return 0;
}

void func_1012()//Position - 0x8AA27
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_6__::func_830(0, 0));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_LesterCrest"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_lester_crate"));
	STREAMING::REMOVE_ANIM_DICT("MISSHeistFBI3BleadInOut");
}

void func_1013()//Position - 0x8AA66
{
	STREAMING::REQUEST_MODEL(joaat("Player_Zero"));
	STREAMING::REQUEST_MODEL(joaat("IG_LesterCrest"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_lester_crate"));
	STREAMING::REQUEST_MODEL(__LIB_6__::func_830(0, 0));
	STREAMING::REQUEST_ANIM_DICT("MISSHeistFBI3BleadInOut");
}

void func_1014()//Position - 0x8AAA5
{
	iLocal_427 = 0;
}

bool func_1017()//Position - 0x8AAC1
{
	return !__LIB_0__::func_368(12);
}

int func_1018()//Position - 0x8AAD0
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			if (((FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[0]) || PED::IS_PED_RAGDOLL(Global_96938.f_9[0])) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 5f, true)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Global_96938.f_9[0], true), 5f))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1019()//Position - 0x8AB5C
{
	switch (iLocal_417)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 714.499f, -965.007f, 29.395f, 720.499f, -965.007f, 31.395f, 4.5f, false, true, 0))
			{
				__LIB_34__::func_977();
				Local_419 = { 708.119f, -966.655f, 30.411f };
				Local_420 = { 0f, 0f, 50.4f };
				iLocal_418 = PED::CREATE_SYNCHRONIZED_SCENE(Local_419, Local_420, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_418, "missheist_agency3aleadinoutah_3a_int", "_leadin_action_lester", 8f, -8f, 0, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_418, 0.15f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[0], false, false);
				__LIB_10__::func_617(&(Global_96938.f_44), "fbiS4AU", "ah3a_INT_LI", 9, 0, 0);
				iLocal_417++;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 714.477f, -966.454f, 29.396f, 714.477f, -958.954f, 32.396f, 3.1f, false, true, 0))
			{
				CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.2f);
				CAM::SET_GAMEPLAY_COORD_HINT(705.8f, -964.4f, 31.3f, 10000, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_421);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 710.1847f, -964.2543f, 29.3957f, 1f, -1, 0.2f, 0, 89.755f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_421);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_421);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_421);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				iLocal_417++;
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_418))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_418) >= 0.78f)
				{
					if (!__LIB_0__::func_75())
					{
						CAM::STOP_GAMEPLAY_HINT(false);
						return 1;
					}
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 709.789f, -965.364f, 29.396f, 709.789f, -963.614f, 32.396f, 2.2f, false, true, 0))
			{
				if (__LIB_30__::func_366(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE"), 1, -2))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_421);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 705.8f, -964.4f, 31.3f, 1f, -1, 0.2f, 0, 89.755f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_421);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_421);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_421);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_418) >= 0.78f)
			{
				if (!__LIB_0__::func_75())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1022()//Position - 0x8AE69
{
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_30__::func_308(&(Global_96938.f_28[0]));
	__LIB_30__::func_308(&(Global_96938.f_28[1]));
	__LIB_30__::func_330();
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-874851305, 0);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1480820165, 0);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(949391213, 0);
}

void func_1023()//Position - 0x8AEBA
{
	__LIB_39__::func_464(&(Global_96938.f_9[0]));
	__LIB_30__::func_309(&(Global_96938.f_28[0]));
	__LIB_30__::func_309(&(Global_96938.f_28[1]));
	__LIB_30__::func_330();
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-874851305, 0);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1480820165, 0);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(949391213, 0);
}

void func_1024()//Position - 0x8AF0B
{
	PED::ADD_RELATIONSHIP_GROUP("Player Group", &(Global_96938.f_42));
	__LIB_0__::func_203(&(Global_96938.f_44), 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	__LIB_27__::func_933(&(Global_96938.f_9[0]), 12, 708.123f, -966.4412f, 29.3956f, 16.7531f, 1);
	PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 1, 0, 0, false);
	__LIB_11__::func_318(Global_96938.f_9[0], Global_96938.f_42);
	__LIB_0__::func_203(&(Global_96938.f_44), 5, Global_96938.f_9[0], "lester", 0, 1);
	Global_96938.f_28[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_walking_stick"), 708.123f, -966.4412f, 30.3956f, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Global_96938.f_28[0], Global_96938.f_9[0], PED::GET_PED_BONE_INDEX(Global_96938.f_9[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
	Local_419 = { 708.119f, -966.655f, 30.411f };
	Local_420 = { 0f, 0f, 50.4f };
	iLocal_418 = PED::CREATE_SYNCHRONIZED_SCENE(Local_419, Local_420, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_418, "missheist_agency3aleadinoutah_3a_int", "_leadin_loop_lester", 1000f, -8f, 1, 0, 1000f, 0);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_418, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_96938.f_9[0], false, false);
	Global_96938.f_28[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_lester_crate"), 707.32f, -964.61f, 29.5f, true, true, false);
	ENTITY::SET_ENTITY_HEADING(Global_96938.f_28[1], 253.5f);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-874851305))
	{
		Local_422 = { __LIB_0__::func_347(64) };
		OBJECT::ADD_DOOR_TO_SYSTEM(-874851305, Local_422.f_3, Local_422, true, true, false);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-874851305, -1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-874851305, 4, false, true);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1480820165))
	{
		Local_422 = { __LIB_0__::func_347(65) };
		OBJECT::ADD_DOOR_TO_SYSTEM(-1480820165, Local_422.f_3, Local_422, true, true, false);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-1480820165, 0f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1480820165, 4, false, true);
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(949391213))
	{
		Local_422 = { __LIB_0__::func_347(66) };
		OBJECT::ADD_DOOR_TO_SYSTEM(949391213, Local_422.f_3, Local_422, true, true, false);
	}
	OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(949391213, 1f, false, false);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(949391213, 4, false, true);
	__LIB_34__::func_978(69, "AH_3A_INT", 0, -1, -1);
	__LIB_34__::func_985(69, "lester", Global_96938.f_9[0]);
	__LIB_30__::func_361(69, "lester", 1, 0, 0);
}

int func_1025()//Position - 0x8B1A0
{
	if (((STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_793(12)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_lester_crate"))) && STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3aleadinoutah_3a_int"))
	{
		return 1;
	}
	return 0;
}

void func_1026()//Position - 0x8B1E4
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_793(12));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_lester_crate"));
	STREAMING::REMOVE_ANIM_DICT("missheist_agency3aleadinoutah_3a_int");
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_1027()//Position - 0x8B21B
{
	STREAMING::REQUEST_MODEL(__LIB_11__::func_793(12));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_lester_crate"));
	STREAMING::REQUEST_ANIM_DICT("missheist_agency3aleadinoutah_3a_int");
}

void func_1028()//Position - 0x8B248
{
	iLocal_417 = 0;
	iLocal_418 = -1;
}

void func_1029()//Position - 0x8B258
{
	if (__LIB_17__::func_252())
	{
		__LIB_11__::func_144();
	}
	if (!iLocal_416)
	{
		Global_32184 = 0;
		StringCopy(&Global_32185, "NULL", 32);
		Global_32018 = 0;
		iLocal_416 = 1;
	}
	else if ((Global_32184 == 0 || !MISC::ARE_STRINGS_EQUAL(&Global_32185, "NULL")) || Global_32018 == 0)
	{
		iLocal_416 = 0;
	}
}

void func_1032()//Position - 0x8B2D6
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("firetruk")))
		{
			iVar1 = 0;
			while (iVar1 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar1]) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) < 30f)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_96938.f_42, joaat("PLAYER"));
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				}
				iVar1++;
			}
		}
	}
	if (__LIB_17__::func_252())
	{
		__LIB_11__::func_144();
	}
	if (!iLocal_416)
	{
		Global_32184 = 0;
		StringCopy(&Global_32185, "NULL", 32);
		Global_32018 = 0;
		iLocal_416 = 1;
	}
	else if ((Global_32184 == 0 || !MISC::ARE_STRINGS_EQUAL(&Global_32185, "NULL")) || Global_32018 == 0)
	{
		iLocal_416 = 0;
	}
}

int func_1035()//Position - 0x8B3D7
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (Global_96938.f_358 == 0)
	{
		Global_96938.f_358 = MISC::GET_HASH_KEY("AGENCY_PREP_1");
	}
	if (!Global_97300)
	{
		switch (__LIB_11__::func_512("AM_H_AHP1" /* GXT: Steal a fire truck to help prepare for the heist. */))
		{
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_18__::func_203("AM_H_AHP1" /* GXT: Steal a fire truck to help prepare for the heist. */, 2, 0, 2000, 7500, 7, 0, 0, 0);
				}
				break;
			case 1:
				Global_97300 = 1;
				break;
			}
	}
	if (Global_97302 == -15)
	{
		Global_97302 = __LIB_13__::func_95();
		if (Global_97301)
		{
			__LIB_32__::func_437(&Global_97302, 0, 0, 2, 0, 0, 0);
		}
		else
		{
			__LIB_32__::func_437(&Global_97302, 0, 0, 7, 0, 0, 0);
		}
	}
	else if (__LIB_32__::func_438(Global_97302))
	{
		switch (__LIB_11__::func_512("AM_H_PREP6" /* GXT: Find a way to get a fire truck. */))
		{
			case 2:
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_18__::func_203("AM_H_PREP6" /* GXT: Find a way to get a fire truck. */, 2, 0, 1000, 10000, 3, 0, 0, 0);
				}
				break;
			case 1:
				Global_97302 = __LIB_13__::func_95();
				if (Global_97301)
				{
					__LIB_32__::func_437(&Global_97302, 0, 0, 2, 0, 0, 0);
				}
				else
				{
					__LIB_32__::func_437(&Global_97302, 0, 0, 7, 0, 0, 0);
				}
				StringCopy(&Global_112029, "", 16);
				break;
		}
	}
	else if (!Global_97301)
	{
		if (!Global_78588.f_1)
		{
			if (__LIB_8__::func_915(68))
			{
				iVar0 = 0;
				iVar1 = 0;
				while (iVar1 < 7)
				{
					if (Global_91193[iVar1 /*5*/] != -1)
					{
						iVar0++;
					}
					iVar1++;
				}
				if (iVar0 <= 1)
				{
					Global_97302 = __LIB_13__::func_95();
					Global_97301 = 1;
				}
			}
		}
	}
	if (!Global_96938.f_357)
	{
		Var2 = { 202.0504f, -1655.7734f, 28.8031f };
		Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Var2 - Vector(10f, 30f, 30f), Var2 + Vector(10f, 30f, 30f), false, true, true, true);
		MISC::CLEAR_AREA(Var2, 20f, true, false, false, false);
		Global_96938.f_357 = 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("firetruk")))
			{
				Global_96938[0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				return 1;
			}
			if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("towtruck2")))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))), false))
					{
						if (!__LIB_7__::func_141(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))), 0, 0, 0, 0, 0, 1, 0, 1))
						{
							ENTITY::DETACH_ENTITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))), true, true);
						}
						else
						{
							Global_96938[1] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							Global_96938[0] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)));
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_1038()//Position - 0x8B863
{
	int iVar0;
	__LIB_30__::func_324(&(Global_96938[0]));
	iVar0 = 0;
	while (iVar0 < Global_96938.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
		{
			__LIB_40__::func_657(&(Global_96938.f_9[iVar0]));
		}
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_1039()//Position - 0x8B8B6
{
	int iVar0;
	__LIB_30__::func_307(&(Global_96938[0]));
	iVar0 = 0;
	while (iVar0 < Global_96938.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[iVar0]))
		{
			__LIB_39__::func_461(&(Global_96938.f_9[iVar0]));
		}
		iVar0++;
	}
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_1041()//Position - 0x8B990
{
	int iVar0;
	PED::ADD_RELATIONSHIP_GROUP("FIREMEN", &(Global_96938.f_42));
	Global_96938.f_9[0] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 215.7186f, -1644.622f, 28.7719f, 357.5736f, true, true);
	Global_96938.f_9[1] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 214.4446f, -1643.7203f, 28.7776f, 279.1055f, true, true);
	Global_96938.f_9[2] = PED::CREATE_PED(21, joaat("S_M_Y_Fireman_01"), 217.0826f, -1644.1172f, 28.7155f, 72.8262f, true, true);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[iVar0]))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(Global_96938.f_9[iVar0], "WORLD_HUMAN_SMOKING", 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Global_96938.f_9[iVar0], 17, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[iVar0], Global_96938.f_42);
			PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[iVar0], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Global_96938.f_9[iVar0], 0, (iVar0 % 2), iVar0, 0);
		}
		iVar0++;
	}
}

bool func_1042()//Position - 0x8BAAD
{
	return (STREAMING::HAS_MODEL_LOADED(joaat("firetruk")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_Fireman_01")));
}

void func_1043()//Position - 0x8BACC
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("firetruk"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_Fireman_01"));
	PED::REMOVE_RELATIONSHIP_GROUP(Global_96938.f_42);
}

void func_1044()//Position - 0x8BAF0
{
	STREAMING::REQUEST_MODEL(joaat("firetruk"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_Fireman_01"));
}

void func_1046()//Position - 0x8BB12
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 696.42596f, -961.0247f, 22.882015f, 739.2752f, -961.2941f, 35.816986f, 30.5f, false, true, 0) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
}

void func_1047()//Position - 0x8BB65
{
	struct<6> Var0;
	if ((!PED::IS_PED_INJURED(Global_96938.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_414)
		{
			iLocal_415 = INTERIOR::GET_INTERIOR_AT_COORDS(719.363f, -962.3938f, 29.906418f);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_415);
			iLocal_414 = 1;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_415))
			{
				STREAMING::REQUEST_MODEL(joaat("v_ind_ss_chair3_cso"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("v_ind_ss_chair3_cso")))
				{
					Global_96938.f_28[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("v_ind_ss_chair3_cso"), 719.363f, -962.3938f, 29.906418f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[0], 0f, 0f, 13.506772f, 2, true);
				}
			}
		}
		if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 717.7486f, -958.60034f, 28.474697f, 717.8596f, -969.3919f, 32.667175f, 10.25f, false, true, 0)) && !PED::IS_PED_INJURED(Global_96938.f_9[0])) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], 160f))
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(Global_96938.f_9[0], 0f, 0f, 0f, true, 13000, 2000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(40f);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.46f);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(0f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(-0.02f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.1f);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				}
			}
			else
			{
				CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
			}
		}
		else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.52545f, -964.7198f, 30.14533f, 4.25f, 5.75f, 2.5f, false, true, 0))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
		{
			if (!iLocal_413)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 717.4453f, -965.7586f, 29.14533f, 1.5f, 10f, 2.25f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
					{
						__LIB_0__::func_203(&uLocal_247, 1, Global_96938.f_9[0], "LESTER", 0, 1);
						__LIB_0__::func_203(&uLocal_247, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					}
					__LIB_34__::func_977();
					iLocal_246 = PED::CREATE_SYNCHRONIZED_SCENE(719.362f, -962.388f, 29.91f, 0f, 0f, 0f, 2);
					TASK::CLEAR_PED_TASKS(Global_96938.f_9[0]);
					TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_246, "missheistfbisetup1leadinoutah_1_int", "_leadin_action_lester", 8f, -4f, 0, 0, 1000f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iLocal_246, "_leadin_action_chair", "missheistfbisetup1leadinoutah_1_int", 8f, -8f, 0, 1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[1], iLocal_246, "_leadin_action_cane", "missheistfbisetup1leadinoutah_1_int", 8f, -8f, 0, 1000f);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Global_96938.f_9[0], -1, 2048, 3);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 718.8762f, -964.1069f, 29.3953f, 1f, -1, 0.25f, 512, 352.5665f);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					iLocal_413 = 1;
				}
			}
			else
			{
				if (!__LIB_0__::func_75())
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_246) > 0.125f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_246) < 0.5f)
					{
						__LIB_36__::func_92(&uLocal_247, "FBS1AUD", "FBS1_INT_LI", 8, 0, 0, 0);
					}
				}
				Var0 = { __LIB_0__::func_390() };
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_246) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_246) >= 0.95f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_246))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&Var0, "FBS1_INT_LI"))
					{
						iLocal_412 = 1;
					}
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_246) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_245))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_246) >= 1f)
					{
						iLocal_245 = PED::CREATE_SYNCHRONIZED_SCENE(719.362f, -962.388f, 29.91f, 0f, 0f, 0f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_245, "missheistfbisetup1leadinoutah_1_int", "_intro_loop_lester", 4f, -8f, 0, 0, 1000f, 0);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[0], iLocal_245, "_intro_loop_chair", "missheistfbisetup1leadinoutah_1_int", 1000f, -8f, 0, 1000f);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[1], iLocal_245, "_intro_loop_cane", "missheistfbisetup1leadinoutah_1_int", 1000f, -8f, 0, 1000f);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_245, true);
					}
				}
			}
		}
		PED::SET_PED_RESET_FLAG(Global_96938.f_9[0], 328, true);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 696.42596f, -961.0247f, 22.882015f, 739.2752f, -961.2941f, 35.816986f, 30.5f, false, true, 0) && INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	}
}

int func_1050()//Position - 0x8C09D
{
	if ((PED::IS_PED_INJURED(Global_96938.f_9[0]) || FIRE::IS_ENTITY_ON_FIRE(Global_96938.f_9[0])) || ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
		return 1;
	}
	return 0;
}

int func_1051()//Position - 0x8C104
{
	if (!Global_96938.f_357)
	{
		MISC::CLEAR_AREA(717.8286f, -961.6875f, 29.3953f, 5f, true, false, false, false);
		MISC::CLEAR_AREA(714.3016f, -971.0053f, 29.3953f, 5f, true, false, false, false);
		Global_96938.f_43 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(29.3953f, -963.6519f, 714.334f) - Vector(0f, 20f, 20f), Vector(29.3953f, -963.6519f, 714.334f) + Vector(10f, 20f, 20f), false, true, true, true);
		Global_96938.f_357 = 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_412)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_96938.f_43, false);
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			return 1;
		}
	}
	return 0;
}

void func_1052()//Position - 0x8C1C1
{
	__LIB_40__::func_657(&(Global_96938.f_9[0]));
	__LIB_30__::func_308(&(Global_96938.f_28[0]));
	__LIB_30__::func_308(&(Global_96938.f_28[1]));
	__LIB_30__::func_330();
}

void func_1053()//Position - 0x8C1F4
{
	__LIB_39__::func_464(&(Global_96938.f_9[0]));
	__LIB_30__::func_309(&(Global_96938.f_28[0]));
	__LIB_30__::func_309(&(Global_96938.f_28[1]));
	__LIB_30__::func_330();
}

void func_1054()//Position - 0x8C227
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		__LIB_27__::func_933(&(Global_96938.f_9[0]), 12, 719.362f, -962.388f, 29.91f, 0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_96938.f_9[0], joaat("PLAYER"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_96938.f_9[0], true);
		PED::SET_PED_PROP_INDEX(Global_96938.f_9[0], 1, 0, 0, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1]))
	{
		Global_96938.f_28[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cs_walking_stick"), 719.061f, -963.204f, 30.4097f, true, true, false);
		ENTITY::SET_ENTITY_ROTATION(Global_96938.f_28[1], 0f, 0f, -73.7522f, 2, true);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]) && ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[1])) && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_245))
	{
		iLocal_245 = PED::CREATE_SYNCHRONIZED_SCENE(719.362f, -962.388f, 29.91f, 0f, 0f, 0f, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(Global_96938.f_9[0], iLocal_245, "missheistfbisetup1leadinoutah_1_int", "_intro_loop_lester", 1000f, -8f, 0, 0, 1000f, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Global_96938.f_28[1], iLocal_245, "_intro_loop_cane", "missheistfbisetup1leadinoutah_1_int", 1000f, -8f, 0, 1000f);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_245, true);
	}
	ENTITY::CREATE_MODEL_HIDE(718.8765f, -962.5751f, 29.905f, 0.1f, joaat("v_ind_ss_chair01"), true);
	if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
	{
		__LIB_34__::func_978(66, "AH_1_INT", 0, -1, -1);
	}
	if (iLocal_414)
	{
		iLocal_414 = 0;
	}
	iLocal_413 = 0;
	iLocal_412 = 0;
}

bool func_1055()//Position - 0x8C3CA
{
	return (((STREAMING::HAS_ANIM_DICT_LOADED("missheistfbisetup1leadinoutah_1_int") && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_793(12))) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6));
}

void func_1056()//Position - 0x8C402
{
	STREAMING::REMOVE_ANIM_DICT("missheistfbisetup1leadinoutah_1_int");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_793(12));
	HUD::CLEAR_ADDITIONAL_TEXT(6, true);
	if (iLocal_414)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_415);
		iLocal_414 = 0;
	}
}

void func_1057()//Position - 0x8C43D
{
	STREAMING::REQUEST_ANIM_DICT("missheistfbisetup1leadinoutah_1_int");
	STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
	STREAMING::REQUEST_MODEL(__LIB_11__::func_793(12));
	HUD::REQUEST_ADDITIONAL_TEXT("FBS1AUD", 6);
}

