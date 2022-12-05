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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	var uLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	struct<3> Local_74 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<3> Local_79 = { 0, 0, 0 } ;
	bool bLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	char[] cLocal_85[8] = 0;
	char* sLocal_86 = NULL;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char* sLocal_91 = NULL;
	char* sLocal_92 = NULL;
	char* sLocal_93 = NULL;
	char* sLocal_94 = NULL;
	char* sLocal_95 = NULL;
	char* sLocal_96 = NULL;
	char* sLocal_97 = NULL;
	char* sLocal_98 = NULL;
	char* sLocal_99 = NULL;
	char* sLocal_100 = NULL;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = 0;
	bool bLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	bool bLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	float fLocal_139 = 0f;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_144 = { 0, 0, 0 } ;
	struct<3> Local_145 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 16;
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
	char[] cLocal_319[8] = 0;
	char[] cLocal_320[8] = 0;
	char[] cLocal_321[8] = 0;
	char* sLocal_322 = NULL;
	char* sLocal_323 = NULL;
	char* sLocal_324 = NULL;
	char* sLocal_325 = NULL;
	char* sLocal_326 = NULL;
	char* sLocal_327 = NULL;
	char* sLocal_328 = NULL;
	char* sLocal_329 = NULL;
	char* sLocal_330 = NULL;
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_332 = { 0, 0, 0 } ;
	char[] cLocal_333[8] = 0;
	char[] cLocal_334[8] = 0;
	int iLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = -1;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 1000;
	var uLocal_346 = 1000;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 15;
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
	var uLocal_622 = 1;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	struct<3> Local_626 = { 0, 0, 0 } ;
	struct<2> Local_627 = { 0, 5 } ;
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
	var uLocal_643 = 5;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_81 = { -131.052f, -1627.0002f, 31.1755f };
	Local_82 = { 287.888f, -284.603f, 52.967f };
	Local_83 = { -319.66f, -832.28f, 31.61f };
	Local_84 = { 31f, -1019f, 28.5f };
	sLocal_102 = "";
	cLocal_319 = "RANDOM@MUGGING3";
	cLocal_320 = "pickup_object";
	cLocal_333 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_335 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_46 == 5 || iLocal_46 == 12)
		{
			__LIB_40__.func_742(25, bLocal_80);
			func_278();
		}
		else
		{
			func_278();
		}
	}
	Local_104 = { ScriptParam_627.f_1[0 /*3*/] };
	__LIB_30__.func_935(&uLocal_349, 3);
	func_276();
	if ((bLocal_80 == 1 && __LIB_29__.func_775(55)) && !__LIB_0__.func_528(55))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_233(Local_104, 25, bLocal_80, 0, 0))
	{
		__LIB_35__.func_176(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		__LIB_32__.func_563(&uLocal_349);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		__LIB_30__.func_879(iLocal_63, &uLocal_348);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_123)
		{
			switch (iLocal_44)
			{
				case 0:
					if (func_212())
					{
						PED::SET_CREATE_RANDOM_COPS(false);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.0844f, 36.4128f, 10f, false, false, false, false, false, false, 0);
						iLocal_130 = 1;
						iLocal_44 = 1;
					}
					else if (func_211())
					{
						func_278();
					}
					break;
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (iLocal_117 == 0)
						{
							iLocal_117 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(101 /*EVENT_SHOCKING_MUGGING*/, Local_104, 0f);
						}
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						switch (iLocal_46)
						{
							case 1:
								func_203();
								break;
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_47)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (PED::IS_PED_INJURED(iLocal_61) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), false))
										{
											bVar0 = PED::IS_PED_INJURED(iLocal_60);
											if (!OBJECT::DOES_PICKUP_EXIST(iLocal_151))
											{
											}
											if (bVar0 == 0 && bLocal_80 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(iLocal_60, 500, 1000, 0, false, false, false);
												TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
												PED::SET_PED_KEEP_TASK(iLocal_60, true);
												__LIB_30__.func_870(1);
												func_197();
											}
										}
										else
										{
											func_167();
										}
										if (iLocal_625 == 1 && bLocal_123 == 1)
										{
											iLocal_46 = 4;
										}
										else if (bLocal_123)
										{
											iLocal_47 = 2;
										}
										break;
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_166();
										if (iLocal_52 && !__LIB_0__.func_75())
										{
											iLocal_47 = 4;
										}
										break;
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_164())
										{
											func_163();
										}
										if (bLocal_129)
										{
											iLocal_47 = 5;
										}
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
											TASK::TASK_LOOK_AT_ENTITY(0, iLocal_61, 5000, 0, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 4f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
										}
										break;
									case 5:
										func_160();
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
											{
												TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_61, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
												TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
												TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
												TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
											}
										}
										break;
								}
								if (func_159())
								{
									iLocal_46 = 11;
								}
								if (bLocal_123)
								{
								}
								func_158();
								if (iLocal_47 == 0)
								{
									if (func_156())
									{
										if (iLocal_119 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_64))
											{
												HUD::REMOVE_BLIP(&iLocal_64);
											}
											if (HUD::DOES_BLIP_EXIST(iLocal_63))
											{
												HUD::REMOVE_BLIP(&iLocal_63);
											}
											if (!HUD::DOES_BLIP_EXIST(iLocal_65))
											{
												iLocal_65 = __LIB_35__.func_190(iLocal_151);
											}
											iLocal_46 = 4;
										}
										else
										{
											iLocal_46 = 3;
										}
									}
									if (func_153())
									{
										func_152();
									}
								}
								if (func_151())
								{
									func_150();
									func_149();
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_60, Local_146, 7f, 7f, 7f, false, true, 0))
									{
										iLocal_119 = 2;
										iLocal_46 = 3;
									}
									else
									{
										iLocal_46 = 4;
									}
								}
								if (bLocal_123)
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_61, 0))
									{
										__LIB_35__.func_189(iLocal_64, &uLocal_118);
									}
									else if (HUD::DOES_BLIP_EXIST(iLocal_64))
									{
										if (HUD::GET_BLIP_COLOUR(iLocal_64) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(iLocal_64, false);
											HUD::SET_BLIP_COLOUR(iLocal_64, 1);
										}
									}
								}
								if (func_146())
								{
									iLocal_46 = 10;
								}
								break;
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_145(1);
								if (func_164())
								{
									func_163();
									func_160();
								}
								if (func_159())
								{
									iLocal_46 = 11;
								}
								func_137();
								break;
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_145(1);
								if (!bLocal_126)
								{
									func_136(iLocal_60, &uLocal_153);
									uLocal_153 = uLocal_153;
									func_135();
									func_134();
									func_133();
									if (func_132())
									{
										func_131();
										func_197();
									}
									if (__LIB_9__.func_231(__LIB_18__.func_173()) < iLocal_152)
									{
										iLocal_46 = 12;
									}
								}
								func_61();
								break;
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_60();
								break;
							case 3:
								func_59();
								break;
							case 11:
								func_58();
								break;
							case 6:
								if (func_159())
								{
									iLocal_46 = 11;
								}
								func_41();
								break;
							case 8:
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, false, true, 0))
									{
										iLocal_46 = 6;
									}
									else
									{
										func_278();
									}
								}
								break;
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
								{
									if (PED::IS_PED_INJURED(iLocal_61))
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_64))
										{
											HUD::REMOVE_BLIP(&iLocal_64);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_60))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
											{
												OBJECT::DELETE_OBJECT(&iLocal_62);
											}
											func_40();
											iLocal_54 = 1;
											func_137();
										}
									}
								}
								break;
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
								{
									OBJECT::DELETE_OBJECT(&iLocal_62);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_197();
								break;
							case 13:
								func_39();
								break;
							}
					}
					if (bLocal_58)
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								if (SYSTEM::VDIST(Local_146, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 150f)
								{
									func_278();
								}
							}
						}
					}
					else if (bLocal_123)
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							if (iLocal_46 != 6)
							{
								if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_61)))
								{
									__LIB_9__.func_981(&uLocal_336, 0, 0);
									iLocal_46 = 8;
								}
								else
								{
									func_4();
									__LIB_10__.func_618(iLocal_64, iLocal_61, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							__LIB_9__.func_981(&uLocal_336, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
								{
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, iLocal_60))
									{
										ENTITY::DETACH_ENTITY(iLocal_62, true, true);
									}
								}
							}
						}
					}
					if (iLocal_124)
					{
						if (!iLocal_137)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false) && !ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true), true) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
									iLocal_137 = 1;
								}
							}
						}
					}
					if (bLocal_123 && !iLocal_124)
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							if (bLocal_80 == 3)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_61);
									TASK::TASK_SMART_FLEE_PED(iLocal_61, iLocal_60, 200f, -1, false, false);
									PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
									iLocal_124 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_61);
								TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
								iLocal_124 = 1;
							}
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_61, joaat("ends_in_run")))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_61, iLocal_60, 200f, -1, false, false);
								PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
								iLocal_124 = 1;
							}
							if (bLocal_80 == 1 || bLocal_80 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_319, sLocal_329, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_319, sLocal_329) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
										iLocal_124 = 1;
									}
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_319, sLocal_327, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_319, sLocal_327) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
										PED::FORCE_PED_MOTION_STATE(iLocal_61, joaat("MotionState_Run"), true, 0, false);
										iLocal_124 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_278();
		}
	}
}

void func_1()//Position - 0xA1F
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
	{
		if (PED::IS_PED_INJURED(iLocal_60))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (PED::IS_PED_INJURED(iLocal_61))
				{
					func_278();
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_61))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
	}
	if (!iLocal_135)
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			__LIB_0__.func_202(&uLocal_154, 1);
			iLocal_135 = 1;
		}
	}
	if (!iLocal_136)
	{
		if (PED::IS_PED_INJURED(iLocal_60))
		{
			__LIB_0__.func_202(&uLocal_154, 2);
			iLocal_136 = 1;
		}
	}
}

void func_4()//Position - 0xC27
{
	if (!PED::IS_PED_INJURED(iLocal_61) || !bLocal_109)
	{
		__LIB_40__.func_938(&uLocal_336, iLocal_61, 0, 0, 1, 1, 1);
	}
	else
	{
		__LIB_9__.func_981(&uLocal_336, 0, 0);
	}
}

void func_39()//Position - 0x1EBB
{
	func_278();
}

void func_40()//Position - 0x1EC7
{
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			Local_146 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_61, 1.2f, 1.5f) };
		}
		else
		{
			Local_146 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), 1.2f, 1.5f) };
		}
		iLocal_151 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_WALLET"), Local_146, iLocal_120, iLocal_152, true, iLocal_77);
		iLocal_65 = __LIB_35__.func_190(iLocal_151);
		__LIB_9__.func_981(&uLocal_336, 0, 0);
		bLocal_58 = true;
	}
}

void func_41()//Position - 0x1F3C
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_92, 4, 0, 0, 0);
		iLocal_128 = 1;
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
		func_278();
	}
}

void func_58()//Position - 0x2767
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::CLEAR_PED_TASKS(iLocal_60);
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			OBJECT::DELETE_OBJECT(&iLocal_62);
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	if (PED::IS_PED_INJURED(iLocal_61) || PED::IS_PED_INJURED(iLocal_60))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
			{
				iLocal_54 = 1;
				func_137();
			}
			else
			{
				func_145(0);
				func_278();
			}
		}
		else
		{
			func_278();
		}
	}
}

void func_59()//Position - 0x2820
{
	bool bVar0;
	func_137();
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
		{
		}
	}
	if (iLocal_119 == 1)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
					}
				}
			}
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 2)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_60, OBJECT::GET_PICKUP_COORDS(iLocal_151), 10f, 10f, 10f, false, true, 0))
						{
							if (bLocal_80 == 3)
							{
								if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
								{
									TASK::CLEAR_PED_TASKS(iLocal_60);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, 0, 40000f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
									iLocal_49 = 1;
								}
							}
							else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_330, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_326, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_328, 3))
							{
								TASK::CLEAR_PED_TASKS(iLocal_60);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(iLocal_151), 1f, 20000, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
								iLocal_49 = 1;
							}
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
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (bLocal_80 == 3)
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "handsup_standing_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
							if (HUD::DOES_BLIP_EXIST(iLocal_63))
							{
								HUD::REMOVE_BLIP(&iLocal_63);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
							iLocal_49 = 1;
							iLocal_46 = 9;
						}
					}
					else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_330, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_326, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, sLocal_328, 3))
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 9;
					}
				}
			}
		}
	}
	if (iLocal_119 == 3)
	{
		if (!iLocal_49)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_61, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				TASK::CLEAR_PED_TASKS(iLocal_60);
				TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_60, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
			}
			iLocal_54 = 1;
			iLocal_49 = 1;
		}
	}
	if (iLocal_119 == 1 || iLocal_119 == 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_60))
		{
			if (iLocal_49)
			{
				if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_320, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_60, cLocal_320, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
									{
										__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(iLocal_151);
										bLocal_50 = true;
									}
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_PLAY_ANIM(0, cLocal_320, "pickup_low", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
					}
					else if (bLocal_50)
					{
						PED::SET_PED_MONEY(iLocal_60, iLocal_152);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						__LIB_30__.func_870(3);
						func_197();
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						iLocal_49 = 1;
						iLocal_46 = 12;
					}
				}
				else if (bLocal_50)
				{
					PED::SET_PED_MONEY(iLocal_60, iLocal_152);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
					__LIB_30__.func_870(3);
					func_197();
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_63))
					{
						HUD::REMOVE_BLIP(&iLocal_63);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
					iLocal_49 = 1;
					iLocal_46 = 12;
				}
			}
		}
		else
		{
			iLocal_46 = 9;
		}
	}
}

void func_60()//Position - 0x2D53
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::CLEAR_PED_TASKS(iLocal_60);
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
}

void func_61()//Position - 0x2D8A
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	struct<2> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar8;
	int iVar9;
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_126)
		{
			if (iLocal_127)
			{
				Var7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				iVar8 = 1;
				if (bLocal_80 == 1)
				{
					if (Var7.f_2 > 33.5f)
					{
						iVar8 = 0;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5f, 5f, 5f, false, true, 0) && iVar8 == 1)
				{
					if (__LIB_35__.func_178(2))
					{
						HUD::CLEAR_HELP(true);
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (__LIB_0__.func_398(1, 0, 1))
						{
							if (!__LIB_35__.func_188())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									__LIB_7__.func_279(1, 1, 1, 0, 0, 0, 0);
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										while (!__LIB_6__.func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fLocal_71, 1, 1056964608, 0, 1, 0) || __LIB_0__.func_75())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											SYSTEM::WAIT(0);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									if (!PED::IS_PED_INJURED(iLocal_60))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_60, false);
									}
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
									EVENT::REMOVE_SHOCKING_EVENT(iLocal_117);
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										__LIB_6__.func_771();
									}
									bLocal_126 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_106(ENTITY::GET_ENTITY_COORDS(iLocal_60, true), &uLocal_70, &fLocal_71);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 15f, 15f, 15f, false, true, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				if (iLocal_45 == 2)
				{
					TASK::TASK_PLAY_ANIM(0, cLocal_333, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0f, false, false, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				PED::FORCE_PED_MOTION_STATE(iLocal_60, joaat("MotionState_Walk"), false, 0, false);
				iLocal_127 = 1;
			}
		}
		if (bLocal_126)
		{
			switch (iLocal_125)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							__LIB_35__.func_187(iLocal_60, &Local_105, &Local_106, cLocal_321, sLocal_323);
							if (bLocal_80 == 1)
							{
								if (Local_106.f_2 > 225f && Local_106.f_2 < 265f)
								{
									if (Local_106.f_2 < 245f)
									{
										Local_106.f_2 = 225f;
									}
									else
									{
										Local_106.f_2 = 265f;
									}
								}
								else if (Local_106.f_2 > 45f && Local_106.f_2 < 85f)
								{
									if (Local_106.f_2 < 65f)
									{
										Local_106.f_2 = 45f;
									}
									else
									{
										Local_106.f_2 = 85f;
									}
								}
							}
							Local_105.f_2 = (Local_105.f_2 + 2f);
							MISC::GET_GROUND_Z_FOR_3D_COORD(Local_105, &(Local_105.f_2), false, false);
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 0f, 2) };
							Var4 = { Var1 - Local_105 };
							Var4.f_2 = 0f;
							fVar5 = SYSTEM::VMAG(Var4);
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2), false, false);
							fVar6 = (Local_105.f_2 - Var1.f_2);
							Local_106.f_0 = MISC::ATAN2(fVar6, fVar5);
							if (Local_106.f_0 > 30f || Local_106.f_0 < -30f)
							{
								Local_106.f_0 = 0f;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar2, &Var3);
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_105, (Var3.f_1 + 1.5f), (Var3.f_1 + 1.5f), 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 0f, 2), (Var3.f_1 + 1f), (Var3.f_1 + 1f), 3f, false, true, 0))
								{
									if (bLocal_80 == 1)
									{
										if (Local_106.f_2 > 40f && Local_106.f_2 < 220f)
										{
											Local_74 = { -148.3897f, -1647.2146f, 31.5867f };
											fLocal_73 = 331.9427f;
										}
										else
										{
											Local_74 = { -129.5632f, -1622.2823f, 31.1122f };
											fLocal_73 = 148.9075f;
										}
									}
									else if (bLocal_80 == 3)
									{
										if (Local_106.f_2 > 160f && Local_106.f_2 < 340f)
										{
											Local_74 = { -319.709f, -837.0066f, 30.449f };
											fLocal_73 = 61.7986f;
										}
										else
										{
											Local_74 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_73 = 269.6216f;
										}
									}
									else if (bLocal_80 == 4)
									{
										if (Local_106.f_2 > 240f || Local_106.f_2 < 60f)
										{
											Local_74 = { 37.222f, -1005.0401f, 28.4648f };
											fLocal_73 = 156.7986f;
										}
										else
										{
											Local_74 = { 29.9887f, -1033.1838f, 28.3794f };
											fLocal_73 = 344.6216f;
										}
									}
									else
									{
										fLocal_73 = ENTITY::GET_ENTITY_HEADING(iVar0);
										Local_74 = { __LIB_35__.func_186(Local_105, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 0f, 2)) };
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
									{
										ENTITY::SET_ENTITY_COORDS(iVar0, Local_74, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_73);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
									}
								}
							}
						}
						MISC::CLEAR_AREA_OF_OBJECTS(Local_105, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_105, 20f, 0);
						MISC::CLEAR_AREA(Local_105, 2f, true, true, false, false);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
						iLocal_62 = OBJECT::CREATE_OBJECT(iLocal_77, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true, true, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
						}
						iLocal_107 = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_106, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_107, false);
						iLocal_108 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_108, iLocal_107, sLocal_324, cLocal_321);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_107, cLocal_321, sLocal_322, 1000f, -8f, 0, 0, 1000f, 0);
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_60);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_60, iLocal_107, cLocal_321, sLocal_323, 1000f, -8f, 0, 0, 1000f, 0);
						}
						CAM::SET_CAM_ACTIVE(iLocal_108, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_97, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_125++;
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				case 1:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_107) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_107) > 0.9f) || __LIB_6__.func_841(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(iLocal_108, false);
						CAM::DESTROY_CAM(iLocal_108, false);
						__LIB_30__.func_906();
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_60);
							PED::SET_PED_MONEY(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_321, sLocal_323, Local_105, Local_106, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2), false, false);
							ENTITY::SET_ENTITY_COORDS(iLocal_60, Var1, true, false, false, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60, false);
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_321, sLocal_323, Local_105, Local_106, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(iLocal_60, Var1.f_2);
							if (bLocal_80 == 4)
							{
								if (__LIB_4__.func_230(Var1.f_2, 0f, 90f))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.7108f, 28.4411f, 1f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_60), 1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
								TASK::TASK_WANDER_STANDARD(0, Var1.f_2, 1);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_60, cLocal_334, 0.25f);
							PED::FORCE_PED_MOTION_STATE(iLocal_60, joaat("MotionState_Walk"), true, 0, false);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
						{
							OBJECT::DELETE_OBJECT(&iLocal_62);
						}
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							PED::SET_PED_MONEY(iLocal_60, (iLocal_152 - (iLocal_152 / 10)));
							PED::SET_PED_CAN_RAGDOLL(iLocal_60, true);
						}
						iVar9 = (iLocal_152 / 100);
						iVar9 *= 90;
						SYSTEM::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
						__LIB_40__.func_982(__LIB_18__.func_173(), 1, iVar9);
						__LIB_0__.func_180(joaat("RC_WALLETS_RETURNED"), 1);
						__LIB_30__.func_870(3);
						func_197();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), joaat("detach")))
					{
						if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(iLocal_62, false, true);
								if (PED::IS_PED_MALE(iLocal_60))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, iLocal_60, PED::GET_PED_BONE_INDEX(iLocal_60, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_62, iLocal_60, PED::GET_PED_BONE_INDEX(iLocal_60, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								}
								if (!iLocal_59)
								{
									if (__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || __LIB_0__.func_509())
									{
										iLocal_59 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_59)
					{
						if (__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0) || __LIB_0__.func_509())
						{
							iLocal_59 = 1;
						}
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				}
		}
	}
	else
	{
		func_278();
	}
}

void func_106(struct<3> Param0, var uParam1, float fParam2)//Position - 0x5433
{
	bool bVar0;
	struct<3> Var1;
	float fVar2;
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - Param0 };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
		if (__LIB_30__.func_887(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar2, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
		if (__LIB_30__.func_887(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), fVar2, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*uParam1 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*uParam1 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*uParam1 = (6f * 2f);
		}
		else
		{
			*uParam1 = 6f;
		}
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
	else
	{
		*uParam1 = 6f;
		*fParam2 = ((*uParam1 / 1.33f) - 1f);
	}
}

void func_131()//Position - 0x5D81
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
	}
}

int func_132()//Position - 0x5DB1
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { 3f, 3f, 3f };
	Var1 = { -3f, -3f, -3f };
	if (PED::IS_PED_INJURED(iLocal_60))
	{
		return 1;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 5f, true))
		{
			return 1;
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f) };
		Var1 = { Var1 + PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_GRENADE"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var1, Var0, joaat("WEAPON_STICKYBOMB"), true))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_133()//Position - 0x5E9A
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true)) > (fLocal_139 + 50f))
		{
			func_197();
		}
		else if (__LIB_9__.func_231(__LIB_18__.func_173()) < iLocal_152)
		{
			func_197();
		}
	}
}

void func_134()//Position - 0x5EE5
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, Global_19, false, true, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 3000, 0, 2);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}
}

void func_135()//Position - 0x5F2A
{
	float fVar0;
	if (bLocal_80 == 1)
	{
		fVar0 = 13f;
	}
	if (bLocal_80 == 4)
	{
		fVar0 = 5.75f;
	}
	if (bLocal_80 == 1 || bLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_140, Local_141, fVar0, false, true, 0))
		{
			if (!iLocal_131)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_131 = 1;
					iLocal_132 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_142, Local_143, fVar0, false, true, 0))
		{
			if (!iLocal_132)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_132 = 1;
					iLocal_131 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_144, Local_145, fVar0, false, true, 0))
		{
			if (!iLocal_133)
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					iLocal_133 = 1;
				}
			}
		}
	}
	if (!iLocal_134)
	{
		if (!PED::IS_PED_INJURED(iLocal_60))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, false, true, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_90, 4, 0, 0, 0) || __LIB_0__.func_509())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_outro_shopkeeper", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						if (iLocal_45 == 2)
						{
							TASK::TASK_PLAY_ANIM(0, cLocal_333, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0f, false, false, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						iLocal_134 = 1;
					}
				}
			}
		}
	}
}

void func_136(int iParam0, var uParam1)//Position - 0x60AC
{
	float fVar0;
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				SYSTEM::SETTIMERA(0);
				*uParam1++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_137()//Position - 0x6164
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_151))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
		{
			fLocal_139 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_60, true));
		}
		__LIB_0__.func_180(joaat("RC_WALLETS_RECOVERED"), 1);
		PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 200, 250);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			OBJECT::DELETE_OBJECT(&iLocal_62);
		}
		func_140();
		__LIB_30__.func_878(&uLocal_348);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, false);
			}
		}
		func_145(0);
		OBJECT::REMOVE_PICKUP(iLocal_151);
		if (!iLocal_54)
		{
			iLocal_46 = 5;
			__LIB_35__.func_172(2);
		}
		else
		{
			iLocal_46 = 12;
		}
	}
}

void func_140()//Position - 0x62E5
{
	iLocal_65 = 0;
	if (!HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
		{
			iLocal_63 = __LIB_35__.func_198(iLocal_60, 0, 0);
		}
	}
}

void func_145(bool bParam0)//Position - 0x642A
{
	if (!PED::IS_PED_INJURED(iLocal_60) && bLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::CLEAR_PED_TASKS(iLocal_60);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
}

int func_146()//Position - 0x6510
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_62, iLocal_60))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 18f, 18f, 18f, false, true, 0))
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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

void func_149()//Position - 0x65DB
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 8f, 8f, 18f, false, true, 0) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_60))
		{
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_150()//Position - 0x661C
{
	if (HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		HUD::REMOVE_BLIP(&iLocal_64);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_62))
		{
			ENTITY::DETACH_ENTITY(iLocal_62, true, true);
			OBJECT::DELETE_OBJECT(&iLocal_62);
			func_40();
		}
	}
	else
	{
		func_40();
	}
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || __LIB_0__.func_509())
		{
			if (iLocal_45 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 2, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1, false);
				TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_61, true);
		}
	}
}

int func_151()//Position - 0x66BB
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
		{
			if (bLocal_123)
			{
				return 1;
			}
		}
	}
	else if (bLocal_123)
	{
		return 1;
	}
	return 0;
}

void func_152()//Position - 0x66F2
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		TASK::CLEAR_PED_TASKS(iLocal_60);
		TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_60, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
	}
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		PED::SET_PED_KEEP_TASK(iLocal_61, true);
		SYSTEM::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
}

int func_153()//Position - 0x678C
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_60))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()//Position - 0x67F2
{
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 18f, 18f, 18f, false, true, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_119 = 1;
							return 1;
						}
					}
				}
				if (func_157())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_61))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
						{
							if (!PED::IS_PED_INJURED(iLocal_60))
							{
								TASK::CLEAR_PED_TASKS(iLocal_60);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, false);
							}
						}
						SYSTEM::SETTIMERB(0);
						iLocal_119 = 2;
						return 1;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), true))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_119 = 2;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_60, false);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						TASK::CLEAR_PED_TASKS(iLocal_61);
						TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
					}
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_119 = 3;
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_157()//Position - 0x6996
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (PED::CAN_PED_SEE_HATED_PED(iLocal_61, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 20f, 20f, 20f, false, true, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

void func_158()//Position - 0x6A20
{
	if (iLocal_56)
	{
		if (!iLocal_57)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (WEAPON::IS_PED_ARMED(iLocal_61, 4))
				{
					if ((__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0) || __LIB_0__.func_509()) || __LIB_0__.func_509())
					{
						iLocal_57 = 1;
					}
				}
				else if ((__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_89, 4, 0, 0, 0) || __LIB_0__.func_509()) || __LIB_0__.func_509())
				{
					iLocal_57 = 1;
				}
			}
		}
	}
	else if (func_157())
	{
		if ((__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_98, 4, 0, 0, 0) || __LIB_0__.func_509()) || __LIB_0__.func_509())
		{
			if (WEAPON::IS_PED_ARMED(iLocal_61, 4))
			{
				TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			else
			{
				func_150();
			}
			iLocal_56 = 1;
		}
	}
}

int func_159()//Position - 0x6AEA
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 20f, 20f, 20f, false, true, 0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
				{
					return 1;
				}
			}
		}
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if (iVar0 == joaat("WEAPON_STUNGUN"))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_60, joaat("WEAPON_STUNGUN"), 0))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 3f, true))
	{
		return 1;
	}
	return 0;
}

void func_160()//Position - 0x6BA6
{
	if (iLocal_45 == 2)
	{
	}
	if (!__LIB_0__.func_75())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_60))
				{
					__LIB_6__.func_834(iLocal_60, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_58)
	{
		if (__LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 200f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_61))
			{
				iLocal_46 = 8;
			}
		}
	}
}

void func_163()//Position - 0x6E2B
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_51)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_backward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_60, cLocal_319, "flee_forward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0f, false, false, false);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
				TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
				iLocal_138 = 3;
				bLocal_51 = true;
			}
			else
			{
				bLocal_51 = true;
			}
		}
		if (bLocal_51)
		{
			if (!iLocal_112)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 7f, 7f, 7f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
					{
						if (TASK::GET_SEQUENCE_PROGRESS(iLocal_60) == iLocal_138)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
							bLocal_129 = true;
							iLocal_112 = 1;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_60, true);
						__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_88, 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_129 = true;
						iLocal_112 = 1;
					}
				}
			}
		}
	}
}

int func_164()//Position - 0x708C
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 12f, 12f, 5f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_166()//Position - 0x70E0
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!bLocal_110)
		{
			iLocal_114 = MISC::GET_GAME_TIMER();
			bLocal_110 = true;
		}
		if (bLocal_110)
		{
			iLocal_115 = MISC::GET_GAME_TIMER();
			if (!iLocal_52)
			{
				if ((iLocal_115 - iLocal_114) > 500)
				{
					if (!__LIB_0__.func_75())
					{
						if (__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_87, 4, 0, 0, 0) || __LIB_0__.func_509())
						{
							if (iLocal_45 == 2)
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									if (!PED::IS_PED_INJURED(iLocal_61))
									{
									}
								}
							}
							if (iLocal_45 == 1)
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
								}
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_63))
							{
								HUD::REMOVE_BLIP(&iLocal_63);
							}
							iLocal_52 = 1;
						}
					}
				}
			}
		}
	}
}

void func_167()//Position - 0x717C
{
	float fVar0;
	if (!bLocal_53)
	{
		if (bLocal_80 == 1)
		{
			fVar0 = 1f;
		}
		if (bLocal_80 == 2)
		{
			fVar0 = 4f;
		}
		if (bLocal_80 != 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if (!__LIB_35__.func_175())
				{
					if (func_181())
					{
						func_278();
					}
				}
				if (func_180())
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_66))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
						{
							iLocal_66 = __LIB_35__.func_198(iLocal_61, 1, 0);
						}
						__LIB_40__.func_733(1);
					}
				}
				if (func_171())
				{
					func_170();
					if (bLocal_80 == 3)
					{
						if (!iLocal_55)
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_61, 16000, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_79, 1f, 20000, fVar0, 4, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							iLocal_55 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_60, -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0f, false, false, false);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_79, iLocal_60, 1f, false, 1.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_60, -1, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						SYSTEM::SETTIMERA(0);
						bLocal_53 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (bLocal_80 == 1)
						{
							sLocal_93 = sLocal_93;
						}
						func_169();
						bLocal_53 = true;
						bLocal_123 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}
	if (bLocal_53)
	{
		if (!iLocal_111)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 60f, 60f, 50f, false, true, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_60, iLocal_61, 0);
					}
					iLocal_111 = 1;
				}
				else
				{
					iLocal_111 = 1;
				}
			}
		}
		if (iLocal_111 && !bLocal_109)
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if (__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_86, 4, 0, 0, 0) || __LIB_0__.func_509())
				{
					TASK::CLEAR_PED_TASKS(iLocal_60);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
					TASK::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_enter", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_base", 8f, -4f, 7000, 0, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, cLocal_319, "handsup_standing_exit", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
					func_170();
					iLocal_151 = OBJECT::CREATE_PICKUP(joaat("PICKUP_MONEY_PURSE"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_60, 0f, 2.5f, 0f), 1.2f, 1.5f), iLocal_120, iLocal_152, true, iLocal_77);
					bLocal_109 = true;
				}
			}
		}
		if (bLocal_109)
		{
			if (PED::IS_PED_INJURED(iLocal_61))
			{
				func_168();
			}
			else
			{
				switch (iLocal_623)
				{
					case 0:
						Local_626 = { OBJECT::GET_PICKUP_COORDS(iLocal_151) - Vector(0f, 0f, 0.75f) };
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
						{
							TASK::CLEAR_PED_TASKS(iLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_626, iLocal_60, 2f, false, 0.1f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							iLocal_624 = MISC::GET_GAME_TIMER();
						}
						iLocal_623 = 1;
						break;
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
						{
							Local_626 = { OBJECT::GET_PICKUP_COORDS(iLocal_151) - Vector(0f, 0f, 0.75f) };
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_61, true), Local_626, true) > 1f)
								{
									iLocal_625 = 1;
									iLocal_623 = 4;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_61);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
									TASK::TASK_PLAY_ANIM(0, cLocal_320, "pickup_low", 8f, -4f, -1, 8224, 0f, false, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
									iLocal_623 = 2;
								}
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_624) > 15000)
						{
							iLocal_625 = 1;
							iLocal_623 = 4;
						}
						break;
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_320, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_151))
							{
								OBJECT::REMOVE_PICKUP(iLocal_151);
								iLocal_623 = 3;
							}
							else
							{
								iLocal_623 = 4;
							}
						}
						break;
					case 3:
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_320, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_320, "pickup_low") > 0.58f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_320, "pickup_low", 3))
						{
							iLocal_623 = 4;
						}
						break;
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, true, 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 50f, -1, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_61, false, false);
						bLocal_123 = true;
						break;
					}
				}
			}
	}
}

void func_168()//Position - 0x7612
{
	if (HUD::DOES_BLIP_EXIST(iLocal_63))
	{
		HUD::REMOVE_BLIP(&iLocal_63);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_151))
		{
			iLocal_65 = __LIB_35__.func_190(iLocal_151);
		}
	}
	iLocal_46 = 4;
}

void func_169()//Position - 0x7647
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (PED::IS_PED_FACING_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 90f))
	{
		TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_327, 1000f, -1000f, -1, 8, 0f, false, false, false);
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_328, 8f, -8f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (bLocal_80 == 4)
		{
			iLocal_335 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.3917f, 28.4847f, 4f, 4f, 4f, 0f, false, 4);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_328, 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_329, 1000f, -1000f, -1, 8, 0f, false, false, false);
		if (iLocal_45 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_330, 8f, -8f, -1, 8, 0.1f, false, false, false);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.6864f, 30.2862f, 3000);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else if (bLocal_80 == 4)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, sLocal_330, 8f, -4f, -1, 8, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_a", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_b", 8f, -4f, -1, 0, 0f, false, false, false);
			TASK::TASK_PLAY_ANIM(0, cLocal_319, "agitated_loop_c", 8f, -4f, -1, 1, 0f, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
		}
	}
}

void func_170()//Position - 0x7AB5
{
	if (HUD::DOES_BLIP_EXIST(iLocal_66))
	{
		HUD::REMOVE_BLIP(&iLocal_66);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
		{
			iLocal_64 = __LIB_35__.func_198(iLocal_61, 1, 0);
		}
	}
}

int func_171()//Position - 0x7AEB
{
	int iVar0;
	iVar0 = 0;
	if (bLocal_80 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.30515f, -1670.3619f, 53.730835f, -91.94043f, -1578.8281f, 24.96221f, 18f, false, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 2)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_61, true), true) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.326782f, -959.64435f, 38.444405f, 119.920845f, -1021.23083f, 21.857378f, 123.75f, false, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_180()//Position - 0x8018
{
	int iVar0;
	iVar0 = 0;
	if (bLocal_80 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.10301f, -1682.4211f, 53.693f, -83.53208f, -1567.5836f, 25.187452f, 40.75f, false, false, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.15063f, -296.19617f, 62.765713f, 210.46458f, -243.51062f, 46.13731f, 123.75f, false, true, 0))
		{
			iVar0 = 1;
		}
	}
	else if (bLocal_80 == 3)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -325.7037f, -829.31f, 30.5812f, true) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_181()//Position - 0x80CE
{
	if (!__LIB_6__.func_763(5))
	{
		return 1;
	}
	if (__LIB_35__.func_173())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__.func_568())
		{
			return 0;
		}
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_182(float fParam0, bool bParam1)//Position - 0x8130
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			iVar5 = __LIB_26__.func_250();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (BitTest(Global_113386.f_18574[iVar1 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar1 /*6*/], 3))
				{
					__LIB_35__.func_191(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_197()//Position - 0x9EAB
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
	}
	__LIB_40__.func_742(25, bLocal_80);
	__LIB_0__.func_109();
	__LIB_20__.func_174();
	func_278();
}

void func_203()//Position - 0x9F74
{
	switch (iLocal_116)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0f, false, false, false);
			}
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				TASK::TASK_PLAY_ANIM(iLocal_60, cLocal_321, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0f, false, false, false);
			}
			iLocal_116++;
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					if (func_180())
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_66))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
							{
								iLocal_66 = __LIB_35__.func_198(iLocal_61, 1, 0);
							}
							if (!__LIB_35__.func_175())
							{
								__LIB_40__.func_733(1);
							}
						}
					}
					if (func_171())
					{
						__LIB_37__.func_799(&uLocal_154, cLocal_85, "REMG2_ARG", 4, 0, 0, 0);
						func_170();
						iLocal_147 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_150 = 1;
						iLocal_116++;
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_60, Local_121, 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					SYSTEM::WAIT(0);
					func_209();
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_208())
				{
					iLocal_116 = 4;
				}
				if (func_157())
				{
					iLocal_116 = 9;
				}
				if (func_207())
				{
					iLocal_116 = 6;
				}
				if (func_206())
				{
					iLocal_116 = 4;
				}
			}
			if (!__LIB_35__.func_175())
			{
				if (func_181())
				{
					func_278();
				}
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 6f, 6f, 15f, false, true, 0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_61, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 3f, 3f, 15f, false, true, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_61, 65f))
							{
								iLocal_149 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
							else
							{
								iLocal_149 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_116++;
							}
						}
					}
				}
			}
			if (func_208() || func_206())
			{
				iLocal_116 = 4;
			}
			if (func_157())
			{
				iLocal_116 = 9;
			}
			if (func_207())
			{
				iLocal_116 = 6;
			}
			break;
		case 3:
			if ((iLocal_148 - iLocal_149) > 12500)
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_116 = 4;
				}
			}
			if ((iLocal_148 - iLocal_149) > 5500)
			{
				if (!bLocal_113)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							TASK::TASK_COMBAT_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_113 = true;
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
							{
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
									TASK::TASK_SMART_FLEE_COORD(iLocal_60, Local_121, 250f, -1, false, false);
									PED::SET_PED_KEEP_TASK(iLocal_60, true);
									SYSTEM::WAIT(0);
								}
								if (!PED::IS_PED_INJURED(iLocal_60))
								{
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_63))
								{
									HUD::REMOVE_BLIP(&iLocal_63);
								}
							}
						}
					}
				}
			}
			if (bLocal_113)
			{
				iLocal_116 = 10;
			}
			else
			{
				if (func_208())
				{
					iLocal_116 = 4;
				}
				if (func_157())
				{
					iLocal_116 = 9;
				}
				if (func_207())
				{
					iLocal_116 = 6;
				}
				if (func_205())
				{
					iLocal_116 = 9;
				}
				if (func_206())
				{
					iLocal_116 = 4;
				}
			}
			break;
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (PED::IS_PED_INJURED(iLocal_61) || __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), iLocal_61, 1) > 100f)
				{
					__LIB_0__.func_296();
					func_209();
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_61, false), 150f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
						}
						iLocal_122 = 1;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_60);
						TASK::TASK_SMART_FLEE_PED(iLocal_60, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_60, true);
						if (HUD::DOES_BLIP_EXIST(iLocal_63))
						{
							HUD::REMOVE_BLIP(&iLocal_63);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					TASK::CLEAR_PED_TASKS(iLocal_61);
					TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_61, true);
					if (HUD::DOES_BLIP_EXIST(iLocal_64))
					{
						HUD::REMOVE_BLIP(&iLocal_64);
					}
				}
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				__LIB_6__.func_771();
			}
			SYSTEM::WAIT(0);
			if (!iLocal_122)
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					__LIB_37__.func_799(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_278();
			}
			break;
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
				{
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 17, true);
						PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						SYSTEM::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, false, 1);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
						__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_95, 4, 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
				{
					if (!PED::IS_PED_INJURED(iLocal_60))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), true))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							iLocal_122 = 1;
						}
					}
				}
				if (!iLocal_122)
				{
					SYSTEM::WAIT(0);
					func_278();
				}
			}
			break;
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
					{
						if (!PED::IS_PED_INJURED(iLocal_60))
						{
							TASK::CLEAR_PED_TASKS(iLocal_60);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_60, true);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_60);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_96, 4, 0, 0, 0);
							TASK::CLEAR_PED_TASKS(iLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, iLocal_103);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
							PED::SET_PED_KEEP_TASK(iLocal_61, true);
						}
					}
				}
				SYSTEM::WAIT(0);
				func_278();
			}
			break;
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_116++;
			break;
		case 8:
			if (SYSTEM::TIMERA() > 200)
			{
				func_209();
			}
			break;
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_61, 50f, 0);
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						__LIB_6__.func_771();
					}
					SYSTEM::WAIT(0);
					__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_94, 4, 0, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
			{
				if (!PED::IS_PED_INJURED(iLocal_60))
				{
					TASK::CLEAR_PED_TASKS(iLocal_60);
					TASK::TASK_COWER(iLocal_60, 2000);
					iLocal_122 = 1;
				}
			}
			break;
	}
	if (iLocal_116 != 8 && iLocal_122)
	{
		iLocal_116 = 7;
	}
	iLocal_148 = MISC::GET_GAME_TIMER();
	if (iLocal_150 && !bLocal_113)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_61) && ENTITY::DOES_ENTITY_EXIST(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
			{
				if ((((iLocal_148 - iLocal_147) > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 3f, 3f, 35f, false, true, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61)) && !__LIB_0__.func_75())
				{
					if ((__LIB_37__.func_799(&uLocal_154, cLocal_85, "REMG2_FKIT", 4, 0, 0, 0) || __LIB_0__.func_509()) || __LIB_0__.func_509())
					{
						PED::SET_PED_RESET_FLAG(iLocal_61, 156, true);
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_61, PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), false);
						TASK::CLEAR_PED_TASKS(iLocal_60);
						ENTITY::SET_ENTITY_HEALTH(iLocal_60, 99, 0);
						TASK::TASK_SMART_FLEE_COORD(iLocal_61, Local_121, 250f, -1, false, false);
						PED::SET_PED_KEEP_TASK(iLocal_61, true);
						func_278();
					}
				}
			}
		}
	}
}

int func_205()//Position - 0xA777
{
	if (!PED::IS_PED_INJURED(iLocal_60) && !PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 2f, 2f, 2f, false, true, 0))
		{
		}
	}
	return 0;
}

int func_206()//Position - 0xA7CA
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 20f, 20f, 20f, false, true, 0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61, false))
	{
		if (func_157())
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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

int func_207()//Position - 0xA858
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_60, 5.3f, 5.3f, 6f, false, true, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_60, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
							{
								SYSTEM::SETTIMERB(0);
								return 1;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_60) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_60))
					{
						SYSTEM::SETTIMERB(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_208()//Position - 0xA916
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_60, false))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_60, 31086, 0f, 0f, 0f), 5f, true))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_209()//Position - 0xA94E
{
	if (!PED::IS_PED_INJURED(iLocal_60))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_60))
		{
			if (__LIB_35__.func_175())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_COWER")) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						__LIB_6__.func_771();
					}
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						if (!PED::IS_PED_FLEEING(iLocal_60))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_60, iLocal_61, 150f, -1, false, false);
						}
					}
					else if (iLocal_45 == 3)
					{
						if (!PED::IS_PED_FLEEING(iLocal_60))
						{
							TASK::TASK_SMART_FLEE_COORD(iLocal_60, Local_104, 150f, -1, false, false);
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					SYSTEM::WAIT(0);
					__LIB_37__.func_799(&uLocal_154, cLocal_85, sLocal_91, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (iLocal_152 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_152 / 100) * 90);
						__LIB_40__.func_982(__LIB_18__.func_173(), 1, iLocal_152);
						SYSTEM::WAIT(0);
						__LIB_40__.func_942(__LIB_18__.func_173(), 1, (iLocal_152 / 10), 0, 1);
					}
					__LIB_30__.func_870(3);
					func_197();
				}
			}
			else
			{
				func_278();
			}
		}
		else
		{
			func_278();
		}
	}
	else
	{
		func_278();
	}
}

int func_211()//Position - 0xAB2E
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__.func_568())
		{
			return 0;
		}
	}
	if (__LIB_35__.func_173())
	{
		return 1;
	}
	if (func_182(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_212()//Position - 0xABB4
{
	func_223();
	__LIB_20__.func_178(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	__LIB_20__.func_178(&uLocal_349, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	__LIB_20__.func_178(&uLocal_349, cLocal_333);
	__LIB_20__.func_178(&uLocal_349, cLocal_321);
	__LIB_31__.func_176(&uLocal_349, iLocal_75);
	__LIB_31__.func_176(&uLocal_349, iLocal_76);
	__LIB_31__.func_176(&uLocal_349, iLocal_77);
	__LIB_20__.func_178(&uLocal_349, cLocal_320);
	__LIB_20__.func_178(&uLocal_349, cLocal_319);
	__LIB_20__.func_178(&uLocal_349, cLocal_334);
	__LIB_20__.func_178(&uLocal_349, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (__LIB_35__.func_887(&uLocal_349))
	{
		func_213();
		return 1;
	}
	return 0;
}

void func_213()//Position - 0xAC41
{
	iLocal_60 = PED::CREATE_PED(26, iLocal_75, Local_67, fLocal_69, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_60, true);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_60, false);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 8, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_60, 512, true);
	AUDIO::STOP_PED_SPEAKING(iLocal_60, true);
	PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_60);
	PED::SET_PED_MONEY(iLocal_60, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_60, true);
	if (iLocal_75 == joaat("A_M_Y_GenStreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 3, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 4, 0, 2, 0);
	}
	if (iLocal_75 == joaat("A_M_Y_Business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_60, 8, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &iLocal_78);
	iLocal_61 = PED::CREATE_PED(26, iLocal_76, Local_68, fLocal_72, true, true);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_61, true, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_61, true, 0f);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_61, joaat("WEAPON_PISTOL"), -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 13, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_61, 17, false);
	PED::SET_PED_DIES_WHEN_INJURED(iLocal_61, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_61, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_61, 137, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 2, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_61, iLocal_78);
	AUDIO::STOP_PED_SPEAKING(iLocal_61, true);
	if (!MISC::IS_STRING_NULL(sLocal_102))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_60, sLocal_102);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_61, sLocal_101);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVMALE"), iLocal_78);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("CIVFEMALE"), iLocal_78);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_78, joaat("CIVMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_78, joaat("CIVFEMALE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_78, joaat("PLAYER"));
	switch (__LIB_18__.func_173())
	{
		case 0:
			__LIB_0__.func_203(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		case 1:
			__LIB_0__.func_203(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		case 2:
			__LIB_0__.func_203(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	__LIB_0__.func_203(&uLocal_154, 1, iLocal_61, sLocal_100, 0, 1);
	__LIB_0__.func_203(&uLocal_154, 2, iLocal_60, sLocal_99, 0, 1);
	if (iLocal_45 == 2)
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 1, false);
	}
	if (bLocal_80 == 1 || bLocal_80 == 4)
	{
		func_214();
	}
	if (bLocal_80 == 3)
	{
		Local_105 = { -325.4189f, -828.8596f, 31.1f };
		Local_106 = { 0f, 0f, 180f };
		iLocal_107 = PED::CREATE_SYNCHRONIZED_SCENE(Local_105, Local_106, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_61, iLocal_107, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1000f, 0);
	}
	if (bLocal_80 == 4)
	{
		PATHFIND::DISABLE_NAVMESH_IN_AREA(Vector(28.5315f, -1027.5654f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.5654f, 37.1197f) + Vector(1f, 1f, 1f), true);
	}
}

void func_214()//Position - 0xAF02
{
	struct<3> Var0;
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_61, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_319, sLocal_325, Local_331, Local_332, 0f, 2), false, false, true);
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_319, sLocal_325, Local_331, Local_332, 0f, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_61, Var0.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_60, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_319, sLocal_326, Local_331, Local_332, 0f, 2), false, false, true);
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_319, sLocal_326, Local_331, Local_332, 0f, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_60, Var0.f_2);
	TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_319, sLocal_325, 1000f, -1000f, -1, 9, 0f, false, false, false);
	TASK::TASK_PLAY_ANIM(iLocal_60, cLocal_319, sLocal_326, 1000f, -1000f, -1, 9, 0f, false, false, false);
}

void func_223()//Position - 0xB324
{
	func_276();
	MISC::SET_BIT(&iLocal_120, 3);
	MISC::SET_BIT(&iLocal_120, 4);
	MISC::SET_BIT(&iLocal_120, 1);
	if (bLocal_80 == 1)
	{
		cLocal_319 = "RANDOM@MUGGING1";
		sLocal_325 = "STRUGGLE_Loop_A_Thief";
		sLocal_326 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_327 = "FLEE_BACKWARD_Thief";
		sLocal_330 = "FLEE_FORWARD_Shopkeeper";
		sLocal_329 = "FLEE_FORWARD_Thief";
		func_225();
		iLocal_152 = 200;
		iLocal_46 = 2;
		Local_121 = { -132.2607f, -1628.3357f, 31.2107f };
		iLocal_75 = joaat("A_M_Y_Business_02");
		iLocal_76 = joaat("G_M_Y_StrPunk_01");
		Local_67 = { -138.814f, -1635.9751f, 31.357f };
		fLocal_69 = 318.519f;
		Local_68 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_72 = 98f;
		Local_331 = { Local_67 };
		Local_332 = { 0f, 0f, fLocal_69 };
		Local_140 = { -103.89513f, -1593.239f, 30.491978f };
		Local_141 = { -89.29615f, -1575.4436f, 32.30938f };
		Local_142 = { -152.03673f, -1654.3793f, 31.735992f };
		Local_143 = { -169.81827f, -1669.5555f, 33.941727f };
		Local_144 = { -152.03673f, -1654.3793f, 31.735992f };
		Local_145 = { -103.89513f, -1593.239f, 30.491978f };
		fLocal_73 = 340.0645f;
		Local_74 = { -151.0793f, -1650.322f, 31.6504f };
		Local_79 = { -133.6872f, -1630.2448f, 31.2527f };
		iLocal_77 = joaat("prop_ld_wallet_pickup");
		cLocal_85 = "REMG1AU";
		sLocal_86 = "REMG1_VIC";
		sLocal_87 = "REMG1_SHT";
		sLocal_88 = "REMG1_ASK";
		sLocal_89 = "REMG1_DRP";
		sLocal_90 = "REMG1_OHY";
		sLocal_91 = "REMG1_THK";
		sLocal_92 = "REMG1_GIV";
		sLocal_93 = "REMG1_MUGA";
		sLocal_94 = "REMG1_WHO";
		switch (__LIB_18__.func_173())
		{
			case 0:
				sLocal_97 = "REMG1_HOM";
				sLocal_98 = "REMG1_WAM";
				break;
			case 1:
				sLocal_97 = "REMG1_HOF";
				sLocal_98 = "REMG1_WAF";
				break;
			case 2:
				sLocal_97 = "REMG1_HOT";
				sLocal_98 = "REMG1_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_102 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_99 = "MuggedMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (bLocal_80 == 2)
	{
		cLocal_319 = "random@mugging2";
		cLocal_321 = "random@mugging2";
		iLocal_46 = 1;
		Local_121 = { 287.888f, -284.603f, 52.967f };
		iLocal_75 = joaat("A_F_Y_GenHot_01");
		iLocal_76 = joaat("G_M_Y_StrPunk_01");
		Local_67 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_69 = 260.7569f;
		Local_68 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_72 = 45f;
		fLocal_73 = 251f;
		Local_74 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_77 = joaat("prop_ld_handbag");
		cLocal_85 = "REMG2AU";
		sLocal_86 = "REMG2_VIC";
		sLocal_87 = "REMG2_SHT";
		sLocal_88 = "REMG2_ASK";
		sLocal_89 = "REMG2_DRP";
		sLocal_90 = "REMG2_OHY";
		sLocal_91 = "REMG2_THK";
		sLocal_92 = "REMG2_GIV";
		sLocal_94 = "REMG2_WHO";
		sLocal_95 = "REMG2_GUN";
		sLocal_96 = "REMG2_FUT";
		switch (__LIB_18__.func_173())
		{
			case 0:
				sLocal_97 = "REMG2_HOM";
				sLocal_98 = "REMG2_WAM";
				break;
			case 1:
				sLocal_97 = "REMG2_HOF";
				sLocal_98 = "REMG2_WAF";
				break;
			case 2:
				sLocal_97 = "REMG2_HOT";
				sLocal_98 = "REMG2_WAT";
				break;
		}
		sLocal_101 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_99 = "MuggedYMan";
		sLocal_100 = "MuggerGang";
		iLocal_48 = 1;
		cLocal_334 = "move_m@hurry@b";
	}
	if (iLocal_45 == 1)
	{
		func_224();
		iLocal_152 = 2000;
		iLocal_46 = 2;
		if (bLocal_80 == 3)
		{
			cLocal_319 = "RANDOM@MUGGING3";
			Local_121 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_75 = joaat("A_F_Y_Hipster_01");
			iLocal_76 = joaat("A_M_O_Tramp_01");
			Local_67 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_69 = 80.7161f;
			Local_68 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_72 = 336.5502f;
			fLocal_73 = 81.8694f;
			Local_74 = { -322.3941f, -835.7213f, 30.6001f };
			Local_79 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_77 = joaat("prop_ld_purse_01");
			cLocal_85 = "REMG3AU";
			sLocal_86 = "REMG3_VIC";
			sLocal_87 = "REMG3_SHT";
			sLocal_88 = "REMG3_ASK";
			sLocal_89 = "REMG3_DRP";
			sLocal_90 = "REMG3_OHY";
			sLocal_91 = "REMG3_THK";
			sLocal_92 = "REMG3_GIV";
			sLocal_93 = "REMG3_MUGB";
			sLocal_94 = "REMG3_WHO";
			sLocal_95 = "REMG3_GUN";
			sLocal_96 = "REMG3_FUT";
			switch (__LIB_18__.func_173())
			{
				case 0:
					sLocal_97 = "REMG3_HOM";
					sLocal_98 = "REMG3_WAM";
					break;
				case 1:
					sLocal_97 = "REMG3_HOF";
					sLocal_98 = "REMG3_WAF";
					break;
				case 2:
					sLocal_97 = "REMG3_HOT";
					sLocal_98 = "REMG3_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_99 = "MUGGEDHIPSTER";
			sLocal_100 = "MuggerTramp";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
		if (bLocal_80 == 4)
		{
			func_224();
			cLocal_319 = "RANDOM@MUGGING4";
			sLocal_325 = "STRUGGLE_Loop_B_Thief";
			sLocal_326 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_328 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_327 = "FLEE_BACKWARD_Thief";
			sLocal_330 = "FLEE_FORWARD_Shopkeeper";
			sLocal_329 = "FLEE_FORWARD_Thief";
			Local_121 = { 32.8802f, -1016.0609f, 28.4527f };
			iLocal_75 = joaat("A_F_M_Tourist_01");
			iLocal_76 = joaat("G_M_Y_ArmGoon_02");
			Local_67 = { 32.2169f, -1020.8641f, 28.456f };
			fLocal_69 = 159.1445f;
			Local_331 = { Local_67 };
			Local_332 = { 0f, 0f, fLocal_69 };
			Local_68 = { 38.1933f, -1023.5788f, 28.4889f };
			fLocal_72 = 60.1372f;
			fLocal_73 = 248f;
			Local_74 = { 42.5323f, -990.353f, 28.248f };
			Local_140 = { 38.151863f, -1001.48535f, 28.422756f };
			Local_141 = { 40.136692f, -995.2711f, 30.371975f };
			Local_142 = { 37.217583f, -1040.3536f, 28.41506f };
			Local_143 = { 19.914917f, -1036.814f, 30.280445f };
			Local_144 = { 28.4511f, -1035.7179f, 28.3329f };
			Local_145 = { 38.6536f, -1001.0728f, 28.407f };
			Local_79 = { 32.536f, -1020.2932f, 28.4576f };
			iLocal_77 = joaat("prop_ld_wallet_pickup");
			cLocal_85 = "REMG4AU";
			sLocal_86 = "REMG4_VIC";
			sLocal_87 = "REMG4_SHT";
			sLocal_88 = "REMG4_ASK";
			sLocal_89 = "REMG4_DRP";
			sLocal_90 = "REMG4_OHY";
			sLocal_91 = "REMG4_THK";
			sLocal_92 = "REMG4_GIV";
			sLocal_93 = "REMG4_MUGB";
			sLocal_94 = "REMG4_WHO";
			sLocal_95 = "REMG4_GUN";
			sLocal_96 = "REMG4_FUT";
			switch (__LIB_18__.func_173())
			{
				case 0:
					sLocal_97 = "REMG4_HOM";
					sLocal_98 = "REMG4_WAM";
					break;
				case 1:
					sLocal_97 = "REMG4_HOF";
					sLocal_98 = "REMG4_WAF";
					break;
				case 2:
					sLocal_97 = "REMG4_HOT";
					sLocal_98 = "REMG4_WAT";
					break;
			}
			sLocal_101 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_99 = "MuggedWoman";
			sLocal_100 = "MuggerGang";
			iLocal_48 = 1;
			cLocal_334 = "move_f@hurry@a";
		}
	}
}

void func_224()//Position - 0xB9B3
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Female";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Female";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Female";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_225()//Position - 0xBA27
{
	cLocal_321 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_322 = "Return_Wallet_Positive_A_Player";
			sLocal_323 = "Return_Wallet_Positive_A_Male";
			sLocal_324 = "Return_Wallet_Positive_A_Cam";
			break;
		case 1:
			sLocal_322 = "Return_Wallet_Positive_B_Player";
			sLocal_323 = "Return_Wallet_Positive_B_Male";
			sLocal_324 = "Return_Wallet_Positive_B_Cam";
			break;
		case 2:
			sLocal_322 = "Return_Wallet_Positive_C_Player";
			sLocal_323 = "Return_Wallet_Positive_C_Male";
			sLocal_324 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

int func_233(struct<3> Param0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xBD24
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = __LIB_35__.func_171();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!__LIB_0__.func_116())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !__LIB_0__.func_568())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (__LIB_0__.func_2(0))
		{
			return 0;
		}
		if (__LIB_35__.func_173())
		{
			return 0;
		}
		if (__LIB_2__.func_477())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			if (func_182(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!__LIB_30__.func_899(iParam1))
		{
			return 0;
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			if (__LIB_30__.func_867(__LIB_18__.func_173()) == 4 || __LIB_30__.func_867(__LIB_18__.func_173()) == 5)
			{
				return 0;
			}
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			if (!__LIB_39__.func_550(iParam1, bParam2, 145))
			{
				return 0;
			}
		}
		if (!__LIB_32__.func_438(Global_113386.f_24995.f_43[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (__LIB_39__.func_551())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!__LIB_32__.func_573(4))
		{
			return 0;
		}
		if (!__LIB_6__.func_763(5))
		{
			return 0;
		}
		if (__LIB_30__.func_866(iParam1, bParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (bParam2 == 2 || bParam2 == 5)) && !__LIB_30__.func_866(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (__LIB_30__.func_899(30) && !__LIB_30__.func_866(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (__LIB_0__.func_43(__LIB_18__.func_173()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_113386.f_2363.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_113386.f_2363.f_539.f_2296[iVar2];
				if (__LIB_9__.func_51(iVar4))
				{
					if (__LIB_41__.func_659(iVar2))
					{
						if (!__LIB_0__.func_78(Var3, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3) < (210f * 210f))
							{
								if (__LIB_18__.func_173() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

void func_276()//Position - 0xD3A9
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(Local_104, Local_81) < 20f)
		{
			bLocal_80 = true;
			iLocal_45 = 2;
		}
		if (SYSTEM::VDIST(Local_104, Local_82) < 20f)
		{
			bLocal_80 = 2;
			iLocal_45 = 3;
		}
		if (SYSTEM::VDIST(Local_104, Local_83) < 20f)
		{
			bLocal_80 = 3;
			iLocal_45 = 1;
		}
		if (SYSTEM::VDIST(Local_104, Local_84) < 20f)
		{
			bLocal_80 = 4;
			iLocal_45 = 1;
		}
	}
}

void func_278()//Position - 0xD440
{
	if (iLocal_130)
	{
		if (iLocal_48)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_75);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_76);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_77);
		}
		if (!PED::IS_PED_INJURED(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			}
			PED::SET_PED_KEEP_TASK(iLocal_61, true);
			if (!bLocal_58)
			{
				PED::SET_PED_MONEY(iLocal_61, iLocal_152);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_60))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_60, true);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_WANDER_STANDARD")) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_60, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_103);
					if (PED::IS_PED_DUCKING(iLocal_60))
					{
						TASK::TASK_TOGGLE_DUCK(0, 0);
					}
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					TASK::TASK_SMART_FLEE_COORD(0, Local_104, 250f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_103);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_60, iLocal_103);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_103);
					PED::SET_PED_KEEP_TASK(iLocal_60, true);
					if (!iLocal_128 && !iLocal_122)
					{
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							__LIB_6__.func_771();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_63))
		{
			HUD::REMOVE_BLIP(&iLocal_63);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_62);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
	}
	if (iLocal_335 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_335))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_335);
		}
		iLocal_335 = -1;
	}
	if (__LIB_35__.func_175())
	{
		PED::SET_CREATE_RANDOM_COPS(true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	__LIB_9__.func_981(&uLocal_336, 0, 0);
	__LIB_7__.func_279(0, 1, 1, 0, 0, 0, 0);
	__LIB_41__.func_466(-1);
	__LIB_38__.func_29(&uLocal_349, 0);
	if (iLocal_117 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_117);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

