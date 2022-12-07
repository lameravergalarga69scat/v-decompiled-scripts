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
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	char* sLocal_50 = NULL;
	char* sLocal_51 = NULL;
	char* sLocal_52 = NULL;
	char* sLocal_53 = NULL;
	char* sLocal_54 = NULL;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_76 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<3> Local_79 = { 0, 0, 0 } ;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<7> Local_84 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	struct<13> Local_91 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<13> Local_92 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_93 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_94 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	struct<8> Local_101 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
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
	struct<67> Local_122 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<11> Local_134 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_135 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<6> Local_138 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	struct<6> Local_141 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	struct<6> Local_144 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	int iLocal_147[4] = { 0, 0, 0, 0 };
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 4;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 4;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 4;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 4;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 4;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 4;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	struct<14> Local_187 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 3;
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
	struct<4> Local_364 = { 0, 0, 0, 0 } ;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	var uLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	bool bLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
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
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
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
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	float fLocal_450 = 0f;
	struct<2> Local_451 = { 0, 0 } ;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	struct<2> Local_454 = { 0, 0 } ;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	struct<2> Local_457 = { 0, 0 } ;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	struct<2> Local_460 = { 0, 0 } ;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	struct<2> Local_463 = { 0, 0 } ;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	char cLocal_466[16] = "";
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	int iLocal_469 = 0;
	var uLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	var uLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
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
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_508 = 0;
	int iLocal_509[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_510 = 6;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 6;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 59;
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
	struct<26> Local_997[4];
	struct<26> Local_998[2];
	struct<26> Local_999[3];
	struct<26> Local_1000[2];
	struct<26> Local_1001[5];
	struct<26> Local_1002[2];
	struct<26> Local_1003[2];
	struct<26> Local_1004[2];
	struct<26> Local_1005[4];
	struct<26> Local_1006[3];
	struct<26> Local_1007[2];
	struct<26> Local_1008[2];
	int iLocal_1009 = 2;
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
	struct<14> Local_1062[5];
	struct<13> Local_1063[36];
	struct<7> Local_1064[3];
	struct<6> Local_1065[6];
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
	sLocal_48 = "MCH1CHIN1";
	sLocal_49 = "MCH1CHIN2";
	sLocal_50 = "MCH1CHIN3";
	sLocal_51 = "MCH1CHIN4";
	sLocal_52 = "MCH1CHIN5";
	sLocal_53 = "LB080984";
	sLocal_54 = "michaelone";
	iLocal_55 = joaat("G_M_M_ChiCold_01");
	iLocal_56 = joaat("burrito5");
	Local_57 = { -802.46f, 173.03f, 71.84f };
	Local_58 = { 3259.89f, -4573.24f, 117.09f };
	Local_59 = { 3264.36f, -4569.73f, 117.07f };
	Local_60 = { 1655.24f, 3237.49f, 39.55f };
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { -800f, 350f, 0f };
	Local_63 = { 0f, 0f, 0f };
	Local_64 = { 3854.3f, -4896.99f, 111.58f };
	Local_65 = { 0f, -0.25f, 1.2f };
	Local_66 = { 0f, 0f, 0f };
	Local_67 = { 5258.5f, -5119.35f, 83.92f };
	Local_68 = { 3851.85f, -5014.12f, 104.46f };
	Local_69 = { 3222.89f, -4708.41f, 111.88f };
	Local_70 = { -1.05f, 1.8f, -0.4f };
	Local_71 = { 1.05f, 1.8f, -0.4f };
	Local_72 = { -1.05f, -1.95f, -0.4f };
	Local_73 = { 1.05f, -1.95f, -0.4f };
	Local_74 = { -1f, 2.35f, 0.05f };
	Local_75 = { 1f, 2.35f, 0.05f };
	Local_76 = { -1.1f, -2.35f, -0.05f };
	Local_77 = { 1.1f, -2.35f, -0.05f };
	Local_78 = { 3264.0789f, -4670.7983f, 111.05582f };
	Local_79 = { 3266.3657f, -4562.407f, 121.417885f };
	StringCopy(&Local_451, "MCH1_GTLC", 16);
	StringCopy(&Local_454, "MCH1_GT_T1", 16);
	StringCopy(&Local_457, "CMN_TGETBCK" /* GXT: ~s~Get back in ~b~Trevor's truck.~s~ */, 16);
	StringCopy(&Local_460, "MCH1_GT_T3", 16);
	StringCopy(&Local_463, "CMN_GENGETINPL" /* GXT: ~s~Get in the ~b~plane. */, 16);
	StringCopy(&cLocal_466, "CMN_GENGETBCKPL" /* GXT: ~s~Get back in the ~b~plane. */, 16);
	iLocal_480 = -1;
	iLocal_481 = -1;
	iLocal_497 = -1;
	iLocal_498 = -1;
	iLocal_499 = -1;
	iLocal_500 = -1;
	iLocal_501 = -1;
	iLocal_502 = -1;
	iLocal_503 = -1;
	iLocal_504 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		__LIB_20__::func_514(func_965(0), 0);
		func_961();
		func_960();
		if (iLocal_390 == 1)
		{
			__LIB_11__::func_864(6);
			Global_95697 = 1;
			__LIB_11__::func_994(0);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_0__::func_294())
	{
		func_955(&iLocal_80, __LIB_0__::func_315());
		iLocal_83 = __LIB_11__::func_312(0);
		iLocal_382 = 1;
		if (Global_94618 == 1)
		{
			switch (iLocal_80)
			{
				case 1:
					switch (__LIB_11__::func_819())
					{
						case 2:
							iLocal_80 = 2;
							break;
						case 0:
							iLocal_80 = func_952(iLocal_80);
							break;
					}
					break;
				case 2:
					switch (__LIB_11__::func_819())
					{
						case 2:
							iLocal_80 = 6;
							break;
						case 0:
							iLocal_80 = func_952(iLocal_80);
							break;
					}
					break;
				default:
					iLocal_80 = func_952(iLocal_80);
					break;
				}
		}
		if (iLocal_80 == 6)
		{
			func_951(__LIB_11__::func_819(), &iLocal_401, &iLocal_400);
		}
	}
	else
	{
		__LIB_42__::func_871(0, "GET TO AIRPORT", 0, 0, 0, 1);
	}
	if (__LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_294())
		{
			iLocal_80 = 0;
			iLocal_382 = 1;
		}
	}
	while (true)
	{
		if (iLocal_383 == 1)
		{
			func_902(&iLocal_80, &iLocal_81);
		}
		if (iLocal_390 == 1)
		{
			func_900(iLocal_80, iLocal_428, iLocal_429, &iLocal_435);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Global_63165) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_63165) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_63165) != PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							__LIB_0__::func_409(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
						}
					}
				}
			}
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_BuryTheHatchet", 0);
		switch (iLocal_80)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				func_898();
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_709(&iLocal_371))
					{
						func_708();
						iLocal_80 = 1;
					}
				}
				break;
			case 1:
				switch (__LIB_20__::func_728())
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
						{
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
						}
						break;
					case 2:
						if (__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), Local_101.f_0, 0))
						{
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
						}
						break;
				}
				func_898();
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_691(&iLocal_371))
					{
						func_708();
						iLocal_80 = 3;
					}
				}
				break;
			case 2:
				if (__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), Local_101.f_0, 0))
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				}
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_690(&iLocal_371))
					{
						func_708();
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
						iLocal_80 = 3;
					}
				}
				break;
			case 3:
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_685(&iLocal_369, &iLocal_370))
					{
						func_708();
						if (__LIB_20__::func_728() == 0)
						{
							iLocal_80 = 4;
						}
						else if (__LIB_20__::func_728() == 2)
						{
							iLocal_80 = 6;
							iLocal_401 = 0;
							iLocal_400 = 1;
						}
					}
				}
				break;
			case 4:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_672(&iLocal_371))
					{
						func_708();
						iLocal_80 = 5;
					}
				}
				break;
			case 5:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_437(&iLocal_371))
					{
						func_708();
						iLocal_80 = 6;
					}
				}
				break;
			case 6:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_410(&iLocal_371))
					{
						func_708();
						iLocal_80 = 7;
					}
				}
				break;
			case 7:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_329(&iLocal_371))
					{
						func_708();
						iLocal_80 = 8;
					}
				}
				break;
			case 8:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_221(&iLocal_371))
					{
						func_708();
						iLocal_80 = 9;
					}
				}
				break;
			case 9:
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_137(&iLocal_371))
					{
						func_708();
						iLocal_80 = 10;
					}
				}
				break;
			case 10:
				if (func_781(iLocal_80, &iLocal_368, &iLocal_383, &uLocal_381, &iLocal_382))
				{
					if (func_68(&iLocal_371))
					{
						func_708();
						iLocal_80 = 11;
					}
				}
				break;
			case 11:
				__LIB_39__::func_850(4, 0);
				__LIB_6__::func_823(0, 0);
				func_960();
				if (iLocal_390 == 1)
				{
					func_43();
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			case 12:
				__LIB_20__::func_514(func_965(0), 0);
				func_32(iLocal_81, iLocal_390);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_296();
				if (!__LIB_0__::func_2(0))
				{
					__LIB_6__::func_826(35, 2);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FAIL");
				if (AUDIO::IS_STREAM_PLAYING())
				{
					AUDIO::STOP_STREAM();
				}
				if (iLocal_405 == 1)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 10f, 5, false);
					}
				}
				while (!__LIB_0__::func_204())
				{
					SYSTEM::WAIT(0);
				}
				switch (__LIB_20__::func_728())
				{
					case 0:
						if (iLocal_390 == 1)
						{
							__LIB_36__::func_65(PLAYER::PLAYER_PED_ID(), 1);
							__LIB_0__::func_428(-1039.6115f, -2740.5698f, 19.1693f, 328.9699f);
						}
						break;
					case 2:
						if (iLocal_392 == 1)
						{
							__LIB_0__::func_428(1782.9651f, 3314.927f, 40.4374f, 341.4644f);
						}
						break;
				}
				func_960();
				if (iLocal_390 == 1)
				{
					func_43();
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_320(PLAYER::PLAYER_PED_ID(), 410);
			if ((ENTITY::DOES_ENTITY_EXIST(Local_101.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_101.f_0, false))
			{
				__LIB_0__::func_320(Local_101.f_0, 409);
			}
			else
			{
				__LIB_0__::func_320(0, 409);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))))
			{
				__LIB_0__::func_320(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 406);
			}
			else
			{
				__LIB_0__::func_320(0, 406);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_32(int iParam0, int iParam1)//Position - 0x2AFC
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 0)
			{
				func_33("MCH1_MCUND");
			}
			else
			{
				func_33("MCH1_CUND");
			}
			break;
		case 2:
			if (iParam1 == 0)
			{
				func_33("CMN_MDEST" /* GXT: ~s~Michael's car was destroyed. */);
			}
			else
			{
				func_33("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
			}
			break;
		case 3:
			if (iParam1 == 0)
			{
				func_33("MCH1_MCLEFT");
			}
			else
			{
				func_33("MCH1_CLEFT");
			}
			break;
		case 6:
			func_33("MCH1_CLEFT");
			break;
		case 4:
			func_33("MCH1_FTRC");
			break;
		case 5:
			func_33("MCH1_FTRG");
			break;
		case 7:
			func_33("MCH1_TCUND");
			break;
		case 8:
			func_33("CMN_TDEST" /* GXT: ~s~Trevor's truck was destroyed. */);
			break;
		case 9:
			func_33("MCH1_TCLEFT");
			break;
		case 10:
			func_33("MCH1_PUND");
			break;
		case 11:
			func_33("MCH1_PDEAD");
			break;
		case 12:
			func_33("CMN_MDIED" /* GXT: ~s~Michael died. */);
			break;
		case 13:
			func_33("CMN_TDIED" /* GXT: ~s~Trevor died. */);
			break;
		case 14:
			func_33("MCH1_FAIL");
			break;
	}
}

void func_33(char* sParam0)//Position - 0x2C25
{
	__LIB_0__::func_324(sParam0);
	func_34(0);
}

void func_34(int iParam0)//Position - 0x2C38
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		if (!func_35(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_35(int iParam0)//Position - 0x2C7D
{
	int iVar0;
	int iVar1;
	__LIB_26__::func_546();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_36(&(Global_113386.f_2363.f_539), iVar1);
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

void func_36(var uParam0, int iParam1)//Position - 0x2D8D
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
			if (!func_38(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_38(int iParam0, var uParam1, float fParam2)//Position - 0x2F61
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
			return func_38(8, uParam1, fParam2);
			break;
		case 10:
			return func_38(8, uParam1, fParam2);
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

void func_43()//Position - 0x3A6F
{
	func_49();
	func_47();
	func_45();
	__LIB_11__::func_501(0);
	if (iLocal_388 == 1)
	{
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::UNLOAD_ALL_CLOUD_HATS();
	}
	else if (iLocal_388 == 0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::DISABLE_MOON_CYCLE_OVERRIDE();
	VEHICLE::SET_AMBIENT_VEHICLE_NEON_ENABLED(true);
	VEHICLE::DELETE_ALL_TRAINS();
}

void func_45()//Position - 0x3B22
{
	STREAMING::REMOVE_IPL("prologue01");
	STREAMING::REMOVE_IPL("prologue01c");
	STREAMING::REMOVE_IPL("prologue01d");
	STREAMING::REMOVE_IPL("prologue01e");
	STREAMING::REMOVE_IPL("prologue01f");
	STREAMING::REMOVE_IPL("prologue01g");
	STREAMING::REMOVE_IPL("prologue01h");
	STREAMING::REMOVE_IPL("prologue01i");
	STREAMING::REMOVE_IPL("prologue01j");
	STREAMING::REMOVE_IPL("prologue01k");
	STREAMING::REMOVE_IPL("prologue01z");
	STREAMING::REMOVE_IPL("prologue02");
	STREAMING::REMOVE_IPL("prologue03");
	STREAMING::REMOVE_IPL("prologue03b");
	STREAMING::REMOVE_IPL("prologue04");
	STREAMING::REMOVE_IPL("prologue04b");
	STREAMING::REMOVE_IPL("prologue05");
	STREAMING::REMOVE_IPL("prologue05b");
	STREAMING::REMOVE_IPL("prologue06");
	STREAMING::REMOVE_IPL("prologue06b");
	STREAMING::REMOVE_IPL("prologuerd");
	STREAMING::REMOVE_IPL("prologuerdb");
	STREAMING::REMOVE_IPL("prologue_occl");
	STREAMING::REMOVE_IPL("prologue_m2_door");
	STREAMING::REMOVE_IPL("prologue06_pannel");
	__LIB_30__::func_47("prologue_LODLights");
	__LIB_30__::func_47("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue03_grv_cov");
	STREAMING::REMOVE_IPL("prologue03_grv_dug");
	STREAMING::REMOVE_IPL("prologue_grv_torch");
}

void func_47()//Position - 0x3C97
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_48(iVar0);
		iVar0++;
	}
}

void func_48(int iParam0)//Position - 0x3CBA
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_1065[iParam0 /*6*/]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(Local_1065[iParam0 /*6*/], 0);
	}
}

void func_49()//Position - 0x3CDC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_50(iVar0);
		iVar0++;
	}
}

void func_50(int iParam0)//Position - 0x3CFF
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_1065[iParam0 /*6*/]))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_1065[iParam0 /*6*/], 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_1065[iParam0 /*6*/], 0, false, true);
	}
}

int func_68(int iParam0)//Position - 0x416D
{
	switch (*iParam0)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_94.f_0, false))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_94.f_0)))
					{
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_94.f_0, false);
					}
					__LIB_40__::func_977(Local_94.f_0, Local_94.f_2, Local_94.f_5, 24, 0);
					iLocal_430 = 1;
					SYSTEM::WAIT(1);
				}
			}
			if (iLocal_488 == 0)
			{
				__LIB_36__::func_66(19, "MIC1_END" /* GXT: Eh, crazy man! Meet at me at my crib. Me n Frank goin roll on tht last car for the rich dude. U in? */, 1, 1, 0, 0, 0, 1, 0, 1);
				iLocal_488 = 1;
			}
			return 1;
			break;
	}
	return 0;
}

int func_137(int iParam0)//Position - 0xB92F
{
	MISC::SET_BIT(&(Local_187.f_13), 20);
	switch (*iParam0)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_FLY_PRE_PHONECALL"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_FLY_PRE_PHONECALL");
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_469))
			{
				iLocal_469 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_469, Vector(5.372416f, 7499.777f, 3157.129f) + Local_62, 11.137081f, 0f, 145.80583f, 59.407524f, 0, 1, 1, 2);
			}
			HUD::DISPLAY_HUD(false);
			HUD::DISPLAY_RADAR(false);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
			{
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_101.f_0);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_101.f_0, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(Local_101.f_0, true);
			}
			iLocal_488 = 0;
			*iParam0++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(CAM::GET_CAM_COORD(iLocal_469), ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_101.f_0), 4500f, 0);
					iLocal_431 = MISC::GET_GAME_TIMER();
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_11__::func_307(10000, iLocal_431))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 12f, 4);
					*iParam0++;
				}
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missmic1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_101.f_0, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_101.f_0, Local_101.f_7, sLocal_54, true);
					VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_101.f_0, Local_62);
					VEHICLE::SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Local_101.f_0, Local_63);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_101.f_0, 500f);
					VEHICLE::SET_PLAYBACK_SPEED(Local_101.f_0, 0.9f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_101.f_0, true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_101.f_0);
					VEHICLE::CONTROL_LANDING_GEAR(Local_101.f_0, 3);
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_480))
				{
					iLocal_480 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_480, Local_101.f_0, 0);
					CAM::DESTROY_ALL_CAMS(false);
					iLocal_469 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_469, iLocal_480, "trevor_plane_cam", "missmic1");
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						iLocal_403 = 1;
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(4, 1);
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				Local_91.f_10 = MISC::GET_GAME_TIMER();
				CAM::DO_SCREEN_FADE_IN(2500);
				*iParam0++;
			}
			break;
		case 3:
			__LIB_11__::func_159();
			PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
			CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			if (__LIB_11__::func_307(8000, Local_91.f_10))
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, 3000, false, false, 0);
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				if (bLocal_385 == 0)
				{
					if (iLocal_403 == 0)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", true);
					}
				}
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				__LIB_0__::func_403(405, 0);
				iLocal_447 = 0;
				iLocal_445 = 0;
				iLocal_404 = 0;
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		case 4:
			if (iLocal_445 == 0)
			{
				MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 60f);
				iLocal_444 = MISC::GET_GAME_TIMER();
				iLocal_445 = 1;
			}
			fLocal_450 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_60, true);
			if (CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				if (iLocal_403 == 1)
				{
					if (iLocal_404 == 0)
					{
						if (SYSTEM::TIMERA() > 2700)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_404 = 1;
						}
					}
				}
			}
			else if (iLocal_403 == 1)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(4, 4);
				iLocal_403 = 0;
			}
			func_196(&(Local_91.f_12));
			__LIB_32__::func_811(&Local_187, Local_60, __LIB_11__::func_167(), 1, Local_101.f_0, "MCH1_GT_T8", &Local_463, &cLocal_466, 1, 0, 1, -1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_101.f_0))
				{
					if (iLocal_398 == 0)
					{
						if (__LIB_30__::func_201(Local_101.f_0) > 98f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_101.f_0);
						}
						if (__LIB_30__::func_200(Local_101.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_101.f_0);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							iLocal_398 = 1;
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1719.4526f, 3254.325f, 40.144505f, 1048.33f, 3073.8523f, 50.70406f, 34f, false, true, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_101.f_0, 1719.4526f, 3254.325f, 40.144505f, 1048.33f, 3073.8523f, 50.70406f, 34f, false, true, 0))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_101.f_0) < 2f)
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_101.f_0) < 10f || VEHICLE::IS_VEHICLE_STOPPED(Local_101.f_0))
							{
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		case 5:
			if (__LIB_6__::func_762(Local_101.f_0, 6f, 1, 1056964608, 0, 1, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
				CAM::DESTROY_ALL_CAMS(false);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLIGHT_LANDED");
				__LIB_20__::func_615(&Local_187, 0);
				__LIB_0__::func_402(0, -1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_196(var uParam0)//Position - 0xED3D
{
	switch (*uParam0)
	{
		case 0:
			if (__LIB_1__::func_126(PLAYER::PLAYER_PED_ID(), Local_101.f_0))
			{
				if (fLocal_450 != 0f && fLocal_450 < 6200f)
				{
					Local_91.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_126(PLAYER::PLAYER_PED_ID(), Local_101.f_0))
			{
				if (__LIB_41__::func_413(&uLocal_199, 35, "MCH1AUD", __LIB_1__::func_6(bLocal_385, "MCH1_CP04", "MCH1_CP04b"), 7, 0, 0, 1))
				{
					func_204("MCH1_CP04", 1);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 12f, 4);
					*uParam0++;
				}
			}
			break;
		case 2:
			if (func_202("MCH1_CP04"))
			{
				if (!__LIB_0__::func_75())
				{
					Local_91.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
				if (__LIB_1__::func_412())
				{
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_75())
			{
				*uParam0++;
			}
			break;
		case 4:
			__LIB_36__::func_488(35, 2, 1);
			*uParam0++;
			break;
		case 5:
			if (iLocal_488 == 0)
			{
				if (iLocal_491 == 0)
				{
					iLocal_491 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_11__::func_307(16000, iLocal_491))
				{
					__LIB_36__::func_66(19, "MIC1_END" /* GXT: Eh, crazy man! Meet at me at my crib. Me n Frank goin roll on tht last car for the rich dude. U in? */, 1, 1, 0, 0, 0, 1, 0, 1);
					iLocal_488 = 1;
					iLocal_491 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}

int func_202(char* sParam0)//Position - 0xF0FB
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_203(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)//Position - 0xF11A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_508)
	{
		if (iLocal_507[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_204(char* sParam0, bool bParam1)//Position - 0xF14B
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_202(sParam0))
		{
			iVar1 = iLocal_507;
			if (iLocal_508 < iVar1)
			{
				iLocal_507[iLocal_508] = iVar0;
				iLocal_508++;
			}
		}
	}
	else
	{
		iVar2 = func_203(iVar0);
		if (iVar2 != -1)
		{
			iLocal_507[iVar2] = 0;
			func_205();
			iLocal_508 = (iLocal_508 - 1);
		}
	}
}

void func_205()//Position - 0xF1AE
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_507;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_507[iVar1] == 0)
		{
			if (iLocal_507[iVar1 + 1] != 0)
			{
				iLocal_507[iVar1] = iLocal_507[iVar1 + 1];
				iLocal_507[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_221(int iParam0)//Position - 0xF90B
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_20__::func_679("mic_1_mcs_3", 1))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, false, true, false);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_93.f_0, "Chinese_Goon_Car", 0, 0, 0);
				}
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
				MISC::CLEAR_AREA(Local_92.f_2, 100f, true, false, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_92.f_2, 100f, false, false, false, false, false, false, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_42__::func_700("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Left_Gun", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Kneeling_Gunman", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 5, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 6, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 11, 1, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_223(&Local_997, 1, 1, 1);
				func_223(&Local_999, 1, 1, 1);
				func_223(&Local_998, 1, 1, 1);
				func_223(&Local_1000, 1, 1, 1);
				func_223(&Local_1002, 1, 1, 1);
				func_223(&Local_1003, 1, 1, 1);
				func_223(&Local_1001, 1, 1, 1);
				func_223(&Local_1005, 1, 1, 1);
				func_223(&Local_1004, 1, 1, 1);
				func_223(&Local_1006, 1, 1, 1);
				func_223(&Local_1007, 1, 1, 1);
				func_223(&Local_1008, 1, 1, 1);
				func_223(&iLocal_1009, 1, 1, 1);
				func_222(&Local_1062, 1, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			if (iLocal_414 == 0)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_KIDNAPPED"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_KIDNAPPED"))
					{
						iLocal_414 = 1;
					}
				}
			}
			if (iLocal_415 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 4500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_READY_TO_FLY"))
						{
							iLocal_415 = 1;
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("asea" /* GXT: Asea */, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, false, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (CAM::DOES_CAM_EXIST(iLocal_469))
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
				*iParam0++;
			}
			else if (!CAM::DOES_CAM_EXIST(iLocal_469))
			{
				iLocal_469 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_469, 3157.129f, 7499.777f, 5.372416f, 11.137081f, 0f, 145.80583f, 59.407524f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_469, "HAND_SHAKE", 0.25f);
			}
			break;
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_134.f_1))
				{
					PED::DELETE_PED(&(Local_134.f_1));
					VEHICLE::DELETE_MISSION_TRAIN(&Local_134);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_437))
				{
					AUDIO::STOP_SOUND(iLocal_437);
				}
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
					{
						VEHICLE::DELETE_VEHICLE(&Local_93);
					}
				}
				func_49();
				func_47();
				__LIB_36__::func_65(PLAYER::PLAYER_PED_ID(), 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_222(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xFCEF
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*14*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == (*uParam0)[iVar0 /*14*/])
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0[iVar0 /*14*/]);
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*14*/])->f_1))
			{
				HUD::REMOVE_BLIP(&((uParam0[iVar0 /*14*/])->f_1));
			}
			(uParam0[iVar0 /*14*/])->f_8 = 0;
			(uParam0[iVar0 /*14*/])->f_13 = 0;
			(uParam0[iVar0 /*14*/])->f_11 = 0;
			(uParam0[iVar0 /*14*/])->f_12 = 0;
		}
		else if (bParam1 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*14*/]))
			{
				if (iParam2 == 1)
				{
					if (iParam3 == 0)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*14*/]);
					}
					if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*14*/])->f_1))
					{
						HUD::REMOVE_BLIP(&((uParam0[iVar0 /*14*/])->f_1));
					}
				}
				else if (iParam2 == 0)
				{
					if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*14*/])->f_1))
					{
						HUD::REMOVE_BLIP(&((uParam0[iVar0 /*14*/])->f_1));
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*14*/]);
					(uParam0[iVar0 /*14*/])->f_8 = 0;
					(uParam0[iVar0 /*14*/])->f_11 = 0;
					(uParam0[iVar0 /*14*/])->f_12 = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_223(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xFE2E
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_224(iParam0[iVar0 /*26*/], bParam1, iParam2, bParam3);
		if (bParam1 == 1)
		{
			(iParam0[iVar0 /*26*/])->f_11 = 0;
		}
		iVar0++;
	}
}

void func_224(int* iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xFE6E
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					iParam0->f_19 = func_228(*iParam0);
					func_226(iParam0->f_19, &iLocal_443);
					PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
					if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_10))
					{
						ITEMSET::DESTROY_ITEMSET(iParam0->f_10);
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					PED::SET_PED_KEEP_TASK(*iParam0, bParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
				if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_10))
				{
					ITEMSET::DESTROY_ITEMSET(iParam0->f_10);
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (PED::IS_PED_INJURED(*iParam0) || !PED::IS_PED_INJURED(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
				}
				PED::DELETE_PED(iParam0);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
		if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_10))
		{
			ITEMSET::DESTROY_ITEMSET(iParam0->f_10);
		}
		__LIB_0__::func_489(&(iParam0->f_2));
		iParam0->f_11 = 0;
		iParam0->f_13 = 0;
		iParam0->f_12 = 0;
		iParam0->f_14 = 0;
		iParam0->f_21 = 0;
		iParam0->f_16 = 0;
		iParam0->f_15 = 0;
		iParam0->f_25 = 0;
		iParam0->f_17 = 0;
		iParam0->f_19 = 0;
	}
}

void func_226(int iParam0, var uParam1)//Position - 0x1004F
{
	switch (iParam0)
	{
		case 1:
			*uParam1++;
			__LIB_0__::func_401(402, 1, 0);
			break;
	}
}

int func_228(int iParam0)//Position - 0x10122
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (iVar1 == PLAYER::PLAYER_PED_ID())
				{
					if (__LIB_20__::func_728() == 0)
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				return 2;
			}
		}
	}
	return 0;
}

int func_329(int iParam0)//Position - 0x28F6A
{
	int iVar0;
	MISC::SET_BIT(&(Local_187.f_13), 20);
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	WEAPON::SET_PICKUP_AMMO_AMOUNT_SCALER(3f);
	if (*iParam0 < 40)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_93.f_1))
		{
			Local_93.f_1 = __LIB_6__::func_825(Local_93.f_0, 0, 0);
			func_407("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 7500, 1);
		}
		if (iLocal_406 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3276.6626f, -4691.7764f, 112.15877f, 3218.3528f, -4637.393f, 120.5423f, 16f, false, true, 0))
			{
				iLocal_406 = 1;
			}
		}
		if (func_406(PLAYER::PLAYER_PED_ID(), 3238.3467f, -4687.663f, 114.673004f, 36f, 15f, 4f))
		{
			iLocal_509[3] = 1;
			iLocal_509[6] = 0;
			*iParam0 = 40;
		}
	}
	func_403(PLAYER::PLAYER_PED_ID(), &uLocal_470, &iLocal_471, 4000, 1.25f);
	func_402(&iLocal_418, 1);
	func_400(&iLocal_419, iLocal_418, -1);
	func_398(&iLocal_420, iLocal_419);
	func_394(&iLocal_421, iLocal_420, -1);
	func_392(&iLocal_422, &iLocal_423, 1);
	func_391(&iLocal_424, iLocal_420);
	func_390(&iLocal_425, iLocal_424, iLocal_420);
	func_382(&(Local_1062[0 /*14*/].f_8));
	func_378(&(Local_1062[1 /*14*/].f_8));
	func_363(&(Local_1062[4 /*14*/].f_8));
	func_362();
	func_361(&iLocal_439);
	func_355(&(Local_1062[2 /*14*/].f_8));
	func_354(iLocal_416, &iLocal_82);
	func_343(&(Local_92.f_12), &(Local_92.f_11), &iLocal_373, &iLocal_374, &iLocal_375, &iLocal_376);
	func_222(&Local_1062, 0, 1, 1);
	func_341();
	func_340(&iLocal_482);
	switch (*iParam0)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_SHOOTOUT_STEALTH"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_SHOOTOUT_STEALTH");
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
			}
			if (iLocal_399 == 0)
			{
				iLocal_399 = 1;
			}
			iLocal_509[6] = 1;
			SYSTEM::SETTIMERB(0);
			Local_92.f_10 = MISC::GET_GAME_TIMER();
			*iParam0++;
			break;
		case 1:
			if (SYSTEM::TIMERB() > 5000)
			{
				*iParam0++;
			}
			break;
		case 40:
			if (!func_202("MCH1_RTC"))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f, false, true, 0))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_93.f_0, 1) > 25f)
					{
						HUD::CLEAR_PRINTS();
						func_407("MCH1_RTC", 7500, 1);
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, true))
			{
				__LIB_23__::func_171();
				if (HUD::DOES_BLIP_EXIST(Local_93.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_93.f_1));
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(Local_93.f_1))
			{
				Local_93.f_1 = __LIB_6__::func_825(Local_93.f_0, 0, 0);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_GET_TO_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_GET_TO_CAR");
			}
			func_336(&(Local_134.f_10));
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
			{
				__LIB_0__::func_686(1, 0, 1, 0);
				if (iLocal_485 == 0)
				{
					if (iLocal_484 == 0)
					{
						iLocal_484 = MISC::GET_GAME_TIMER();
					}
					else if (__LIB_11__::func_307(1000, iLocal_484))
					{
						iLocal_485 = 1;
					}
				}
				if (iLocal_486 == 0)
				{
					iVar0 = __LIB_11__::func_868(PLAYER::PLAYER_PED_ID(), iLocal_367, 0, 0, 28);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iVar0) < 5f)
							{
								iLocal_486 = 1;
							}
						}
					}
				}
				if ((PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || iLocal_486 == 1) || iLocal_485 == 1)
				{
					__LIB_0__::func_296();
					__LIB_6__::func_833();
					if (!__LIB_0__::func_75())
					{
						if (HUD::DOES_BLIP_EXIST(Local_93.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_93.f_1));
						}
						if (iLocal_397 == 1)
						{
							func_331(&Local_1063);
							iLocal_397 = 0;
						}
						AUDIO::STOP_SOUND(iLocal_438);
						STREAMING::REMOVE_ANIM_DICT("dead");
						STREAMING::REMOVE_ANIM_DICT("missmic1ig_2");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_GET_TO_CAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("MI_1_GET_TO_CAR");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_SHOOTOUT_ENEMIES_ALERTED"))
						{
							AUDIO::STOP_AUDIO_SCENE("MI_1_SHOOTOUT_ENEMIES_ALERTED");
						}
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT");
						__LIB_30__::func_202(&Local_144, 1);
						__LIB_30__::func_202(&Local_138, 1);
						__LIB_30__::func_202(&Local_141, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_84.f_0))
						{
							PED::DELETE_PED(&Local_84);
						}
						return 1;
					}
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("mic_1_mcs_3", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_42__::func_700("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Left_Gun", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Kneeling_Gunman", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 5, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 6, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 11, 1, 0, 0);
			}
			break;
	}
	return 0;
}

void func_331(var uParam0)//Position - 0x2944C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		TASK::REMOVE_COVER_POINT((*uParam0)[iVar0 /*13*/]);
		iVar0++;
	}
}

void func_336(var uParam0)//Position - 0x295C3
{
	switch (*uParam0)
	{
		case 0:
			if (func_337(&Local_134, 8f, 0))
			{
				*uParam0++;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_134.f_1))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_437))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds", false, -1))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(iLocal_437, "Train_Bell", 3217.51f, -4702.84f, 115.13f, "Prologue_Sounds", false, 0, false);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(Local_134.f_0, 4297.464f, -4725.5327f, 120.31227f, 10f, 10f, 10f, false, true, 0))
				{
					PED::DELETE_PED(&(Local_134.f_1));
					VEHICLE::DELETE_MISSION_TRAIN(&Local_134);
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_437))
					{
						AUDIO::STOP_SOUND(iLocal_437);
					}
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
					*uParam0++;
				}
			}
			break;
	}
}

int func_337(var uParam0, float fParam1, bool bParam2)//Position - 0x296AA
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_6);
		STREAMING::REQUEST_MODEL(uParam0->f_7);
		STREAMING::REQUEST_MODEL(uParam0->f_8);
		STREAMING::REQUEST_MODEL(uParam0->f_9);
		if (((STREAMING::HAS_MODEL_LOADED(uParam0->f_6) && STREAMING::HAS_MODEL_LOADED(uParam0->f_7)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_8)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_9))
		{
			*uParam0 = VEHICLE::CREATE_MISSION_TRAIN(uParam0->f_2, uParam0->f_3, bParam2, 0, 0);
			uParam0->f_1 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 26, uParam0->f_9, -1, true, true);
			VEHICLE::SET_TRAIN_SPEED(*uParam0, fParam1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(*uParam0, fParam1);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(*uParam0, false);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 116, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 29, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1, true);
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam0, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iVar1, false);
						ENTITY::SET_CAN_CLIMB_ON_ENTITY(iVar1, false);
					}
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_8);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_9);
			return 1;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		return 1;
	}
	return 0;
}

void func_340(int iParam0)//Position - 0x29886
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_84.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_84.f_0, false))
		{
			switch (*iParam0)
			{
				case 0:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_481))
					{
						STREAMING::REQUEST_ANIM_DICT("dead");
						if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_481))
							{
								iLocal_481 = PED::CREATE_SYNCHRONIZED_SCENE(3258.899f, -4574.09f, 115.35f, 173.88f, 51.48f, 5.04f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_84.f_0, iLocal_481, "dead", "dead_g", 1000f, -1000f, 4, 145, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_84.f_0, false, false);
								AUDIO::STOP_PED_SPEAKING(Local_84.f_0, true);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_84.f_0, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_84.f_0, true);
							}
						}
					}
					else
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_84.f_0, 4);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_84.f_0, 128);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_84.f_0, 32);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_84.f_0, 8192);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_84.f_0, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_84.f_0, 16);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_84.f_0, 64);
						*iParam0++;
					}
					break;
				case 1:
					break;
				}
			}
	}
}

void func_341()//Position - 0x2998E
{
	if (iLocal_386 == 0)
	{
		if (!func_202("MCH1_HWEAP"))
		{
			if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				__LIB_0__::func_151("MCH1_HWEAP", 10000);
				func_204("MCH1_HWEAP", 1);
				iLocal_386 = 1;
			}
		}
	}
}

void func_343(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x299E1
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	struct<6> Var7;
	switch (*uParam0)
	{
		case 0:
			if (!__LIB_18__::func_197(&Local_187, 1))
			{
				if (!__LIB_0__::func_75())
				{
					iVar0 = __LIB_30__::func_203(PLAYER::PLAYER_PED_ID(), iLocal_367, 0, 0);
					if (iVar0 != 0 && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
					{
						__LIB_0__::func_203(&uLocal_199, 6, iVar0, sLocal_51, 0, 1);
						if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSGCB", 7, 0, 0, 0))
						{
							*iParam3 = (5000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							*uParam1 = MISC::GET_GAME_TIMER();
							*iParam2 = MISC::GET_GAME_TIMER();
							*iParam5 = 0;
							*uParam0++;
						}
					}
				}
			}
			break;
		case 1:
			if (!func_202("MCH1_GSMA"))
			{
				if (func_350(&Local_998) >= 2)
				{
					if (!__LIB_0__::func_75())
					{
						if (!__LIB_18__::func_197(&Local_187, 1))
						{
							if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSMA", 7, 0, 0, 0))
							{
								func_204("MCH1_GSMA", 1);
							}
						}
					}
				}
			}
			if (!func_202("MCH1_GSS08"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_1062[0 /*14*/]))
				{
					if (((ENTITY::DOES_ENTITY_EXIST(Local_997[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_997[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_997[2 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_997[3 /*26*/]))
					{
						if (iLocal_429 == 1)
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_18__::func_197(&Local_187, 1))
								{
									iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
									if (!PED::IS_PED_INJURED(Local_997[iVar2 /*26*/]))
									{
										iVar3 = 3;
										while (iVar3 <= 7)
										{
											__LIB_0__::func_202(&uLocal_199, iVar3);
											iVar3++;
										}
										__LIB_0__::func_203(&uLocal_199, 6, Local_997[iVar2 /*26*/], sLocal_51, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSS08", 7, 0, 0, 0))
										{
											func_204("MCH1_GSS08", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										}
									}
								}
							}
						}
					}
				}
			}
			if ((!func_202("MCH1_GSGR2") && !func_202("MCH1_GSGR3")) && !func_202("MCH1_GSGR4"))
			{
				if (iLocal_378 == 1)
				{
					if (((ENTITY::DOES_ENTITY_EXIST(Local_997[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_997[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_997[2 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_997[3 /*26*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_18__::func_197(&Local_187, 1))
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
								if (!PED::IS_PED_INJURED(Local_997[iVar2 /*26*/]))
								{
									switch (iVar2)
									{
										case 0:
											iVar4 = 4;
											sVar5 = sLocal_49;
											sVar6 = "MCH1_GSGR2";
											break;
										case 1:
											iVar4 = 4;
											sVar5 = sLocal_49;
											sVar6 = "MCH1_GSGR2";
											break;
										case 2:
											iVar4 = 6;
											sVar5 = sLocal_51;
											sVar6 = "MCH1_GSGR3";
											break;
										case 3:
											iVar4 = 6;
											sVar5 = sLocal_51;
											sVar6 = "MCH1_GSGR4";
											break;
									}
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										__LIB_0__::func_202(&uLocal_199, iVar3);
										iVar3++;
									}
									__LIB_0__::func_203(&uLocal_199, iVar4, Local_997[iVar2 /*26*/], sVar5, 0, 1);
									if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", sVar6, 7, 0, 0, 0))
									{
										func_204(sVar6, 1);
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam2 = MISC::GET_GAME_TIMER();
										*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									}
								}
							}
						}
					}
				}
			}
			if (!func_202("MCH1_GSGCA"))
			{
				if ((func_202("MCH1_GSGR2") || func_202("MCH1_GSGR3")) || func_202("MCH1_GSGR4"))
				{
					if (iLocal_377 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_997[2 /*26*/]))
						{
							if (!PED::IS_PED_INJURED(Local_997[2 /*26*/]))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_18__::func_197(&Local_187, 1))
									{
										iVar3 = 3;
										while (iVar3 <= 7)
										{
											__LIB_0__::func_202(&uLocal_199, iVar3);
											iVar3++;
										}
										__LIB_0__::func_203(&uLocal_199, 6, Local_997[2 /*26*/], sLocal_51, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSGCA", 7, 0, 0, 0))
										{
											func_204("MCH1_GSGCA", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											if (iLocal_495 == 0)
											{
												if (iLocal_496 == 1)
												{
													RECORDING::REPLAY_STOP_EVENT();
													iLocal_495 = 1;
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
			if (!func_202("MCH1_GSM04"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3262.183f, -4629.6646f, 116.84507f, 30f, 2f, 3f, false, true, 0))
				{
					if (Local_1001[(Local_1001.f_0 - 1) /*26*/].f_11 == 1)
					{
						if (!__LIB_0__::func_75() && !__LIB_18__::func_197(&Local_187, 1))
						{
							if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSM04", 8, 0, 0, 0))
							{
								func_204("MCH1_GSM04", 1);
								*uParam1 = MISC::GET_GAME_TIMER();
								*iParam2 = MISC::GET_GAME_TIMER();
								*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
								*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							}
						}
					}
				}
			}
			if (!func_202("MCH1_GSGBA"))
			{
				if (iLocal_380 == 1)
				{
					if (((ENTITY::DOES_ENTITY_EXIST(Local_1005[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1005[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1005[2 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1005[3 /*26*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_18__::func_197(&Local_187, 1))
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
								if (!PED::IS_PED_INJURED(Local_1005[iVar2 /*26*/]))
								{
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										__LIB_0__::func_202(&uLocal_199, iVar3);
										iVar3++;
									}
									__LIB_0__::func_203(&uLocal_199, 7, Local_1005[iVar2 /*26*/], sLocal_52, 0, 1);
									if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSGBA", 7, 0, 0, 0))
									{
										func_204("MCH1_GSGBA", 1);
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam2 = MISC::GET_GAME_TIMER();
										*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_416 == 0)
			{
				if (!func_202("MCH1_MOVE1"))
				{
					if (iLocal_377 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_997[2 /*26*/]))
						{
							if (!PED::IS_PED_INJURED(Local_997[2 /*26*/]))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_18__::func_197(&Local_187, 1))
									{
										iVar3 = 3;
										while (iVar3 <= 7)
										{
											__LIB_0__::func_202(&uLocal_199, iVar3);
											iVar3++;
										}
										__LIB_0__::func_203(&uLocal_199, 3, Local_997[2 /*26*/], sLocal_48, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_MOVE1", 7, 0, 0, 0))
										{
											func_204("MCH1_MOVE1", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										}
									}
								}
							}
						}
					}
				}
				if (!__LIB_0__::func_75() && !__LIB_18__::func_197(&Local_187, 1))
				{
					if (!func_202("MCH1_MOVE3"))
					{
						if (iLocal_419 == 1)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_999[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_999[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_999[2 /*26*/]))
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								if (!PED::IS_PED_INJURED(Local_999[iVar2 /*26*/]))
								{
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										__LIB_0__::func_202(&uLocal_199, iVar3);
										iVar3++;
									}
									__LIB_0__::func_203(&uLocal_199, 5, Local_999[iVar2 /*26*/], sLocal_50, 0, 1);
									if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_MOVE3", 7, 0, 0, 0))
									{
										func_204("MCH1_MOVE3", 1);
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam2 = MISC::GET_GAME_TIMER();
										*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										*iParam4 = (4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2001));
									}
								}
							}
						}
					}
					if (Local_999[1 /*26*/].f_14 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_999[1 /*26*/]))
						{
							if (!PED::IS_PED_INJURED(Local_999[1 /*26*/]))
							{
								if (Local_999[1 /*26*/].f_17 != 0)
								{
									if (__LIB_11__::func_307(7500, Local_999[1 /*26*/].f_17))
									{
										if (!PED::IS_PED_INJURED(Local_999[1 /*26*/]))
										{
											iVar3 = 3;
											while (iVar3 <= 7)
											{
												__LIB_0__::func_202(&uLocal_199, iVar3);
												iVar3++;
											}
											__LIB_0__::func_203(&uLocal_199, 5, Local_999[1 /*26*/], sLocal_50, 0, 1);
										}
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SURR3", 7, 1, 0, 0))
										{
											Local_999[1 /*26*/].f_17 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else
								{
									Local_999[1 /*26*/].f_17 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (__LIB_11__::func_307(*iParam4, *iParam2))
					{
						iVar0 = __LIB_30__::func_203(PLAYER::PLAYER_PED_ID(), iLocal_367, MISC::GET_RANDOM_INT_IN_RANGE(0, 4), 0);
						if (iVar0 != 0 && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
						{
							iVar3 = 3;
							while (iVar3 <= 7)
							{
								__LIB_0__::func_202(&uLocal_199, iVar3);
								iVar3++;
							}
							if (func_348(PLAYER::PLAYER_PED_ID(), iLocal_367, 0) >= 1)
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
										__LIB_0__::func_203(&uLocal_199, 3, iVar0, sLocal_48, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_MOVE1", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									case 1:
										__LIB_0__::func_203(&uLocal_199, 3, iVar0, sLocal_48, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SURR1", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									case 2:
										__LIB_0__::func_203(&uLocal_199, 4, iVar0, sLocal_49, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_MOVE2", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									case 3:
										__LIB_0__::func_203(&uLocal_199, 4, iVar0, sLocal_49, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SURR2", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									}
							}
						}
						else
						{
							*iParam2 = MISC::GET_GAME_TIMER();
							*iParam4 = (2000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1001));
							*iParam5 = 0;
						}
					}
				}
			}
			else
			{
				if (((!func_202("MCH1_SPOT1") && !func_202("MCH1_SPOT2")) && !func_202("MCH1_SPOT3")) && !func_202("MCH1_SPOT4"))
				{
					if (!__LIB_0__::func_75())
					{
						if (!__LIB_18__::func_197(&Local_187, 1))
						{
							iVar0 = __LIB_30__::func_203(PLAYER::PLAYER_PED_ID(), iLocal_367, 0, 0);
							if (iVar0 != 0)
							{
								iVar3 = 3;
								while (iVar3 <= 7)
								{
									__LIB_0__::func_202(&uLocal_199, iVar3);
									iVar3++;
								}
								switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 4))
								{
									case 1:
										__LIB_0__::func_203(&uLocal_199, 3, iVar0, sLocal_48, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SPOT1", 7, 1, 0, 0))
										{
											func_204("MCH1_SPOT1", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											iLocal_417 = 1;
										}
										break;
									case 2:
										__LIB_0__::func_203(&uLocal_199, 4, iVar0, sLocal_49, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SPOT2", 7, 1, 0, 0))
										{
											func_204("MCH1_SPOT2", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											iLocal_417 = 1;
										}
										break;
									case 3:
										__LIB_0__::func_203(&uLocal_199, 5, iVar0, sLocal_50, 0, 1);
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SPOT3", 7, 1, 0, 0))
										{
											func_204("MCH1_SPOT3", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											iLocal_417 = 1;
										}
										break;
									}
								}
						}
					}
					else
					{
						__LIB_6__::func_771();
					}
				}
				else
				{
					if (__LIB_0__::func_75())
					{
						Var7 = { __LIB_0__::func_390() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
						{
							if (((MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT1") || MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT2")) || MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT3")) || MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT4"))
							{
								iLocal_417 = 1;
							}
							else
							{
								iLocal_417 = 0;
							}
						}
						else
						{
							iLocal_417 = 0;
						}
					}
					else
					{
						iLocal_417 = 0;
					}
					if (!func_202("MCH1_SURROUND"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_18__::func_197(&Local_187, 1))
							{
								iVar0 = __LIB_30__::func_203(PLAYER::PLAYER_PED_ID(), iLocal_367, 0, 0);
								if (iVar0 != 0)
								{
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										__LIB_0__::func_202(&uLocal_199, iVar3);
										iVar3++;
									}
									switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 4))
									{
										case 1:
											__LIB_0__::func_203(&uLocal_199, 3, iVar0, sLocal_48, 0, 1);
											if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SURR1", 7, 1, 0, 0))
											{
												func_204("MCH1_SURROUND", 1);
												*uParam1 = MISC::GET_GAME_TIMER();
												*iParam2 = MISC::GET_GAME_TIMER();
												*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												iLocal_417 = 1;
											}
											break;
										case 2:
											__LIB_0__::func_203(&uLocal_199, 4, iVar0, sLocal_49, 0, 1);
											if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SURR2", 7, 1, 0, 0))
											{
												func_204("MCH1_SURROUND", 1);
												*uParam1 = MISC::GET_GAME_TIMER();
												*iParam2 = MISC::GET_GAME_TIMER();
												*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												iLocal_417 = 1;
											}
											break;
										case 3:
											__LIB_0__::func_203(&uLocal_199, 5, iVar0, sLocal_50, 0, 1);
											if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_SURR3", 7, 1, 0, 0))
											{
												func_204("MCH1_SURROUND", 1);
												*uParam1 = MISC::GET_GAME_TIMER();
												*iParam2 = MISC::GET_GAME_TIMER();
												*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												iLocal_417 = 1;
											}
											break;
										}
									}
								}
							}
						}
				}
				if (!__LIB_18__::func_197(&Local_187, 1))
				{
					if (*iParam5 == 0)
					{
						if (func_348(PLAYER::PLAYER_PED_ID(), iLocal_367, 0) > 0)
						{
							if (func_344(PLAYER::PLAYER_PED_ID()))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
									case 1:
									case 2:
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSM02", 8, 0, 0, 0))
										{
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 1;
										}
										break;
									default:
										break;
									}
								}
							}
					}
					if (__LIB_11__::func_307(*iParam3, *uParam1))
					{
						iVar0 = __LIB_30__::func_203(PLAYER::PLAYER_PED_ID(), iLocal_367, 0, 0);
						if (iVar0 != 0)
						{
							fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iVar0, 1);
							if (fVar1 < 35f)
							{
								if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSM01", 7, 0, 0, 0))
								{
									*uParam1 = MISC::GET_GAME_TIMER();
									*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									*iParam5 = 0;
								}
							}
							else
							{
								*uParam1 = MISC::GET_GAME_TIMER();
								*iParam3 = (4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2001));
								*iParam5 = 0;
							}
						}
						else
						{
							*uParam1 = MISC::GET_GAME_TIMER();
							*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							*iParam5 = 0;
						}
					}
					if (__LIB_11__::func_307(*iParam4, *iParam2))
					{
						if (func_348(PLAYER::PLAYER_PED_ID(), iLocal_367, 0) == 1)
						{
							iVar0 = __LIB_30__::func_203(PLAYER::PLAYER_PED_ID(), iLocal_367, 0, 0);
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
							{
								case 0:
									iVar4 = 3;
									sVar5 = sLocal_48;
									sVar6 = "MCH1_GSGL1";
									break;
								case 1:
									iVar4 = 4;
									sVar5 = sLocal_49;
									sVar6 = "MCH1_GSGL2";
									break;
								case 2:
									iVar4 = 6;
									sVar5 = sLocal_51;
									sVar6 = "MCH1_GSGL3";
									break;
								case 3:
									iVar4 = 6;
									sVar5 = sLocal_51;
									sVar6 = "MCH1_GSGL4";
									break;
							}
							iVar3 = 3;
							while (iVar3 <= 7)
							{
								__LIB_0__::func_202(&uLocal_199, iVar3);
								iVar3++;
							}
							__LIB_0__::func_203(&uLocal_199, iVar4, iVar0, sVar5, 0, 1);
							if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", sVar6, 7, 0, 0, 0))
							{
								*iParam2 = MISC::GET_GAME_TIMER();
								*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
								*iParam5 = 0;
							}
						}
						else
						{
							iVar0 = __LIB_30__::func_203(PLAYER::PLAYER_PED_ID(), iLocal_367, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
							if (iVar0 != 0)
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
										{
											case 0:
												iVar4 = 3;
												sVar5 = sLocal_48;
												sVar6 = "MCH1_GSGA1";
												break;
											case 1:
												iVar4 = 4;
												sVar5 = sLocal_49;
												sVar6 = "MCH1_GSGA2";
												break;
											case 2:
												iVar4 = 6;
												sVar5 = sLocal_51;
												sVar6 = "MCH1_GSGA3";
												break;
											case 3:
												iVar4 = 6;
												sVar5 = sLocal_51;
												sVar6 = "MCH1_GSGA4";
												break;
											case 4:
												if (iLocal_380 == 1)
												{
													iVar4 = 7;
													sVar5 = sLocal_52;
													sVar6 = "MCH1_GSGA5";
												}
												else
												{
													iVar4 = 6;
													sVar5 = sLocal_51;
													sVar6 = "MCH1_GSGA4";
												}
												break;
										}
										break;
									case 1:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
										{
											case 0:
												iVar4 = 3;
												sVar5 = sLocal_48;
												sVar6 = "MCH1_GSGS1";
												break;
											case 1:
												iVar4 = 4;
												sVar5 = sLocal_49;
												sVar6 = "MCH1_GSGS2";
												break;
											case 2:
												iVar4 = 6;
												sVar5 = sLocal_51;
												sVar6 = "MCH1_GSGS3";
												break;
											case 3:
												iVar4 = 6;
												sVar5 = sLocal_51;
												sVar6 = "MCH1_GSGS4";
												break;
											case 4:
												if (iLocal_380 == 1)
												{
													iVar4 = 7;
													sVar5 = sLocal_52;
													sVar6 = "MCH1_GSGS5";
												}
												else
												{
													iVar4 = 6;
													sVar5 = sLocal_51;
													sVar6 = "MCH1_GSGS4";
												}
												break;
										}
										break;
								}
								iVar3 = 3;
								while (iVar3 <= 7)
								{
									__LIB_0__::func_202(&uLocal_199, iVar3);
									iVar3++;
								}
								__LIB_0__::func_203(&uLocal_199, iVar4, iVar0, sVar5, 0, 1);
								if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", sVar6, 7, 0, 0, 0))
								{
									*iParam2 = MISC::GET_GAME_TIMER();
									*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									*iParam5 = 0;
								}
							}
							else
							{
								*iParam2 = MISC::GET_GAME_TIMER();
								*iParam4 = (5000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
								*iParam5 = 0;
							}
						}
					}
					if (!func_202("MCH1_GSM05_1"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1062[1 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1062[1 /*14*/], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1062[1 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), Local_1062[1 /*14*/]))
								{
									if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSM05", 7, 0, 0, 0))
									{
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										func_204("MCH1_GSM05_1", 1);
									}
								}
							}
						}
					}
					if (!func_202("MCH1_GSM05_2"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1062[4 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1062[4 /*14*/], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1062[4 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), Local_1062[4 /*14*/]))
								{
									if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSM05", 7, 0, 0, 0))
									{
										func_204("MCH1_GSM05_2", 1);
									}
								}
							}
						}
					}
					else if (!func_202("MCH1_GSM06"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1062[4 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Local_1062[4 /*14*/], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_134.f_0, false))
							{
								if (VEHICLE::IS_VEHICLE_STOPPED(Local_1062[4 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_134.f_0, 3245.5815f, -4715.379f, 115.78874f, 128f, 32f, 6f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3227.0107f, -4693.1978f, 115.64585f, 28f, 22f, 6f, false, true, 0))
									{
										if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_GSM06", 7, 0, 0, 0))
										{
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											func_204("MCH1_GSM06", 1);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_344(int iParam0)//Position - 0x2AD2C
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SHOOTING(iParam0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
					return 1;
				}
			}
			else
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
	return 0;
}

int func_348(int iParam0, int iParam1, int iParam2)//Position - 0x2ADCA
{
	int iVar0[16];
	int iVar1;
	int iVar2;
	iVar1 = 0;
	iVar2 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, 28);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar1]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar1]))
				{
					if (iParam2 == 1)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar1]))
						{
							if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
							{
								iVar2++;
							}
						}
					}
					else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar1]) == iParam1)
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	return iVar2;
}

int func_350(int iParam0)//Position - 0x2AE82
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar0 /*26*/])->f_11 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
			{
				if (PED::IS_PED_INJURED((*iParam0)[iVar0 /*26*/]) || ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*26*/], false))
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_354(int iParam0, int iParam1)//Position - 0x2B0DE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (*iParam1 == 0)
		{
			if (iParam0 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3267.3638f, -4574.6685f, 119.15671f, 36f, 16f, 4f, false, true, 0))
				{
					*iParam1 = 1;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3266.1074f, -4602.593f, 117.67585f, 36f, 13f, 4f, false, true, 0))
				{
					*iParam1 = 2;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3264.7622f, -4626.325f, 117.186195f, 36f, 11f, 4f, false, true, 0))
				{
					*iParam1 = 3;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3262.0347f, -4655.0884f, 114.93609f, 36f, 17f, 4f, false, true, 0))
				{
					*iParam1 = 4;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3243.012f, -4691.706f, 113.654236f, 50f, 20f, 4f, false, true, 0))
				{
					*iParam1 = 5;
				}
			}
		}
	}
}

void func_355(var uParam0)//Position - 0x2B1E7
{
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_55);
			STREAMING::REQUEST_MODEL(iLocal_56);
			*uParam0++;
			break;
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_55);
			STREAMING::REQUEST_MODEL(iLocal_56);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_55) && STREAMING::HAS_MODEL_LOADED(iLocal_56))
			{
				Local_1062[2 /*14*/] = func_360(&(Local_1062[2 /*14*/]), 1000, 0, 1, 1, 0, 1, -1, -1, 0);
				Local_1062[3 /*14*/] = func_360(&(Local_1062[3 /*14*/]), 800, 0, 1, 1, 0, 1, -1, -1, 0);
				*uParam0++;
			}
			break;
	}
	func_359(&(Local_1062[2 /*14*/]), PLAYER::PLAYER_PED_ID(), 3222.8435f, -4688.6357f, 114.212746f, 12f, 16f, 3f);
	func_357(Local_1062[3 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 475, &(Local_1062[3 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 1, 45f, 70f);
	func_359(&(Local_1062[3 /*14*/]), PLAYER::PLAYER_PED_ID(), 3222.8435f, -4688.6357f, 114.212746f, 12f, 16f, 3f);
	func_356(Local_1062[2 /*14*/], 1, Local_71, 0.8f, 0, 1, Local_75, 150f, 1120403456);
	func_356(Local_1062[2 /*14*/], 0, Local_70, 0.8f, 0, 1, Local_74, 150f, 1120403456);
	func_356(Local_1062[2 /*14*/], 4, Local_72, 0.8f, 0, 1, Local_76, 150f, 1120403456);
	func_356(Local_1062[2 /*14*/], 5, Local_73, 0.8f, 0, 1, Local_77, 150f, 1120403456);
	func_356(Local_1062[3 /*14*/], 1, Local_71, 0.8f, 0, 1, Local_75, 150f, 1120403456);
	func_356(Local_1062[3 /*14*/], 0, Local_70, 0.8f, 0, 1, Local_74, 150f, 1120403456);
	func_356(Local_1062[3 /*14*/], 4, Local_72, 0.8f, 0, 1, Local_76, 150f, 1120403456);
	func_356(Local_1062[3 /*14*/], 5, Local_73, 0.8f, 0, 1, Local_77, 150f, 1120403456);
}

void func_356(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5, struct<3> Param6, float fParam7, float fParam8)//Position - 0x2B427
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iParam1, false))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param2), fParam3, bParam4))
				{
					switch (iParam1)
					{
						case 0:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 0, false, 1000f);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 0);
							break;
						case 1:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 1, false, 1000f);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 1);
							break;
						case 4:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 4, false, 1000f);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 2);
							break;
						case 5:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 5, false, 1000f);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 3);
							break;
					}
					if (iParam5 == 1)
					{
						VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Param6, fParam7, fParam8, true);
					}
				}
			}
		}
	}
}

void func_357(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, struct<3> Param5, struct<3> Param6, struct<3> Param7, int iParam8, float fParam9, float fParam10)//Position - 0x2B4F4
{
	float fVar0;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iParam0) == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam1, iParam0, Param5, false, true, 0))
					{
						VEHICLE::EXPLODE_VEHICLE(iParam0, true, false);
					}
					else
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -100f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, -100f);
					}
				}
				else if (ENTITY::GET_ENTITY_HEALTH(iParam0) < iParam2)
				{
					if (__LIB_30__::func_204(iParam1, iParam0))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam1, iParam0, Param5, false, true, 0))
						{
							if (iParam8 == 1)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
								{
									fVar0 = __LIB_30__::func_201(iParam0);
									if (fVar0 > fParam9 && fVar0 < fParam10)
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
										ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Param6, Param7, 0, true, true, true, false, true);
									}
								}
							}
							VEHICLE::EXPLODE_VEHICLE(iParam0, true, false);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 3);
						}
						else
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -100f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, -100f);
							ENTITY::SET_ENTITY_HEALTH(iParam0, 100, 0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
						}
					}
				}
				else if (ENTITY::GET_ENTITY_HEALTH(iParam0) < iParam3)
				{
					if (*uParam4 == 0)
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 50f);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(iParam0, true);
							*uParam4 = 1;
						}
					}
				}
			}
		}
	}
}

void func_359(var uParam0, int iParam1, struct<3> Param2, struct<3> Param3)//Position - 0x2B67C
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
				{
					if (uParam0->f_13 == 0)
					{
						if (PED::IS_PED_IN_VEHICLE(iParam1, *uParam0, false))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, Param2, Param3, false, true, 0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 50f);
								VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, false, true, false);
								VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, true);
								uParam0->f_13 = 1;
							}
						}
					}
				}
			}
		}
	}
}

int func_360(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x2B6FC
{
	int iVar0;
	iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_6, uParam0->f_2, uParam0->f_5, true, true, false);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam1, 0);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, SYSTEM::TO_FLOAT(iParam1));
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, SYSTEM::TO_FLOAT(iParam1));
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, bParam3);
	VEHICLE::SET_VEHICLE_UNDRIVEABLE(iVar0, !bParam4);
	VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iVar0, bParam5);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, iParam6);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar0, false);
	if (iParam2 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			uParam0->f_1 = __LIB_6__::func_825(iVar0, 1, 0);
		}
	}
	if (iParam7 != -1 && iParam8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, iParam7, iParam8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 0, 0);
	}
	if (bParam9 == 1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, bParam9);
		VEHICLE::SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(iVar0, bParam9);
	}
	return iVar0;
}

void func_361(int iParam0)//Position - 0x2B7BC
{
	if (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CHURCH_BELL", false, -1))
	{
	}
	else
	{
		switch (*iParam0)
		{
			case 0:
				*iParam0++;
				break;
			case 1:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3259.4714f, -4664.2544f, 116.15219f, 36f, 30f, 5f, false, true, 0))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_438, "RING", 3243.52f, -4665.81f, 126f, "CHURCH_BELL_SOUNDSET", false, 0, false);
					*iParam0++;
				}
				break;
			case 2:
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_438))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_438, "CHURCH_BELL_RING_COUNT", 0f);
				}
				else
				{
					*iParam0++;
				}
				break;
			}
	}
}

void func_362()//Position - 0x2B873
{
	if (iLocal_410 == 0)
	{
		if (iLocal_412 == 0)
		{
			if (func_350(&Local_998) == 2)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FIRST_TWO_DEAD"))
				{
					iLocal_410 = 1;
				}
			}
		}
	}
	if (iLocal_411 == 0)
	{
		if (iLocal_428 == 1)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_1ST_VAN"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_1ST_VAN"))
				{
					iLocal_411 = 1;
				}
			}
		}
	}
	if (iLocal_412 == 0)
	{
		if (iLocal_416 == 1)
		{
			if ((((func_202("MCH1_SPOT1") || func_202("MCH1_SPOT2")) || func_202("MCH1_SPOT3")) || func_202("MCH1_SPOT4")) || func_202("MCH1_SURROUND"))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_ALERTED"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ALERTED"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_SHOOTOUT_STEALTH");
						AUDIO::START_AUDIO_SCENE("MI_1_SHOOTOUT_ENEMIES_ALERTED");
						iLocal_412 = 1;
					}
				}
			}
		}
	}
	if (iLocal_413 == 0)
	{
		if (iLocal_380 == 1)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_TRAIN"))
			{
				iLocal_413 = 1;
			}
		}
	}
}

void func_363(var uParam0)//Position - 0x2B964
{
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3238.3467f, -4687.663f, 114.673004f, 36f, 15f, 4f, false, true, 0))
			{
				*uParam0++;
			}
			break;
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_56);
			STREAMING::REQUEST_MODEL(iLocal_55);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_1062[4 /*14*/].f_7, sLocal_54);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_56) && STREAMING::HAS_MODEL_LOADED(iLocal_55)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_1062[4 /*14*/].f_7, sLocal_54))
			{
				Local_1062[4 /*14*/] = func_360(&(Local_1062[4 /*14*/]), 950, 0, 1, 1, 0, 1, -1, -1, 0);
				Local_1005[0 /*26*/] = func_375(iLocal_55, Local_1062[4 /*14*/], -1, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 200, 0);
				Local_1005[1 /*26*/] = func_375(iLocal_55, Local_1062[4 /*14*/], 0, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 200, 0);
				Local_1005[2 /*26*/] = func_375(iLocal_55, Local_1062[4 /*14*/], 1, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 200, 0);
				Local_1005[3 /*26*/] = func_375(iLocal_55, Local_1062[4 /*14*/], 2, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 200, 0);
				func_374(&Local_1005, 0);
				func_371(Local_1062[4 /*14*/], sLocal_54, 1.2f, 0, 2750f, 0, 0, 1);
				AUDIO::START_AUDIO_SCENE("MI_1_VAN_ARRIVES_03");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1062[4 /*14*/], "MI_1_VAN_03", 0f);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1062[4 /*14*/], true);
				*uParam0++;
			}
			break;
		case 2:
			if (__LIB_30__::func_201(Local_1062[4 /*14*/]) > 98f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_1062[4 /*14*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_1062[4 /*14*/].f_1));
				}
				if (!PED::IS_PED_INJURED(Local_1005[0 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1005[0 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1005[0 /*26*/], false);
					func_370(Local_1005[0 /*26*/], 1, 2, 2, 29, 1);
					__LIB_30__::func_208(Local_1005[0 /*26*/], 3214.98f, -4716.22f, 111.82f, 2f, 0);
					__LIB_30__::func_207(Local_1005[0 /*26*/], 3, 100, joaat("FIRING_PATTERN_FULL_AUTO"));
					__LIB_30__::func_206(Local_1005[0 /*26*/], 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
					__LIB_30__::func_205(Local_1005[0 /*26*/], &(Local_1005[0 /*26*/].f_10), &(Local_1063[29 /*13*/]));
				}
				if (!PED::IS_PED_INJURED(Local_1005[1 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1005[1 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1005[1 /*26*/], false);
					func_370(Local_1005[1 /*26*/], 1, 2, 2, 29, 1);
					__LIB_30__::func_208(Local_1005[1 /*26*/], 3224.99f, -4716.13f, 111.41f, 1.5f, 0);
					__LIB_30__::func_207(Local_1005[1 /*26*/], 3, 100, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
				if (!PED::IS_PED_INJURED(Local_1005[2 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1005[2 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1005[2 /*26*/], false);
					func_370(Local_1005[2 /*26*/], 1, 2, 2, 29, 1);
					__LIB_30__::func_208(Local_1005[2 /*26*/], 3218.49f, -4716.52f, 111.37f, 2f, 0);
					__LIB_30__::func_207(Local_1005[2 /*26*/], 4, 100, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
				if (!PED::IS_PED_INJURED(Local_1005[3 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1005[3 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1005[3 /*26*/], false);
					func_370(Local_1005[3 /*26*/], 1, 2, 2, 29, 1);
					__LIB_30__::func_208(Local_1005[3 /*26*/], 3224.7f, -4718.32f, 111.37f, 1.5f, 0);
					__LIB_30__::func_207(Local_1005[3 /*26*/], 4, 100, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
				iLocal_380 = 1;
				Local_1062[4 /*14*/].f_9 = MISC::GET_GAME_TIMER();
				AUDIO::STOP_AUDIO_SCENE("MI_1_VAN_ARRIVES_03");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1062[4 /*14*/], 0f);
				*uParam0++;
			}
			break;
		case 3:
			if (__LIB_11__::func_307(34000, Local_1062[4 /*14*/].f_9))
			{
				if (!PED::IS_PED_INJURED(Local_1005[0 /*26*/]))
				{
					func_370(Local_1005[0 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[0 /*26*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[0 /*26*/], 28, true);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1005[0 /*26*/], false);
				}
				if (!PED::IS_PED_INJURED(Local_1005[1 /*26*/]))
				{
					func_370(Local_1005[1 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[1 /*26*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[1 /*26*/], 28, true);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1005[1 /*26*/], false);
				}
				if (!PED::IS_PED_INJURED(Local_1005[2 /*26*/]))
				{
					func_370(Local_1005[2 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[2 /*26*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[2 /*26*/], 28, true);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1005[2 /*26*/], false);
				}
				if (!PED::IS_PED_INJURED(Local_1005[3 /*26*/]))
				{
					func_370(Local_1005[3 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[3 /*26*/], 50, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1005[3 /*26*/], 28, true);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1005[3 /*26*/], false);
				}
				*uParam0++;
			}
			break;
	}
	func_223(&Local_1005, 0, 1, 1);
	func_357(Local_1062[4 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 500, &(Local_1062[4 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 0, 0, 1120403456);
	func_359(&(Local_1062[4 /*14*/]), PLAYER::PLAYER_PED_ID(), 3222.8435f, -4688.6357f, 114.212746f, 12f, 16f, 3f);
	func_359(&(Local_1062[4 /*14*/]), PLAYER::PLAYER_PED_ID(), 3217.266f, -4748.1196f, 112.924225f, 16f, 16f, 3f);
	func_356(Local_1062[4 /*14*/], 1, Local_71, 0.8f, 0, 1, Local_75, 150f, 1120403456);
	func_356(Local_1062[4 /*14*/], 0, Local_70, 0.8f, 0, 1, Local_74, 150f, 1120403456);
	func_356(Local_1062[4 /*14*/], 4, Local_72, 0.8f, 0, 1, Local_76, 150f, 1120403456);
	func_356(Local_1062[4 /*14*/], 5, Local_73, 0.8f, 0, 1, Local_77, 150f, 1120403456);
	func_364(&Local_1005, 1);
}

void func_364(int iParam0, int iParam1)//Position - 0x2BF76
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (iParam1 == 1)
		{
			__LIB_0__::func_499((*iParam0)[iVar0 /*26*/], &((iParam0[iVar0 /*26*/])->f_2), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		else
		{
			__LIB_0__::func_489(&((iParam0[iVar0 /*26*/])->f_2));
		}
		iVar0++;
	}
}

void func_370(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x2C2D0
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, iParam1);
		PED::SET_PED_COMBAT_ABILITY(iParam0, iParam2);
		PED::SET_PED_COMBAT_RANGE(iParam0, iParam3);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
		if (iParam4 != -1)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, iParam4, true);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, bParam5);
	}
}

void func_371(struct<8> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, int iParam9, float fParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2C339
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Param0.f_0, false))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0.f_0))
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Param0.f_7, sParam7))
			{
				if (iParam12 == 0)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Param0.f_0, Param0.f_7, sParam7, true);
				}
				else if (iParam12 == 1)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Param0.f_0, Param0.f_7, sParam7, iParam13, 0, 786603);
				}
				if (fParam10 > 0f)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0.f_0, fParam10);
				}
				else if (iParam11 == 1)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0.f_0, __LIB_11__::func_871(ENTITY::GET_ENTITY_COORDS(Param0.f_0, true), Param0.f_7, sParam7, 16));
				}
				VEHICLE::SET_PLAYBACK_SPEED(Param0.f_0, fParam8);
				if (iParam9 == 1)
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Param0.f_0);
				}
			}
		}
	}
}

void func_374(int iParam0, int iParam1)//Position - 0x2C4C2
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*26*/]))
		{
			TASK::TASK_STAND_STILL((*iParam0)[iVar0 /*26*/], -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*26*/], true);
			if (iParam1 == 1)
			{
				(iParam0[iVar0 /*26*/])->f_1 = __LIB_6__::func_825((*iParam0)[iVar0 /*26*/], 1, 0);
			}
			(iParam0[iVar0 /*26*/])->f_11 = 1;
		}
		iVar0++;
	}
}

int func_375(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x2C52A
{
	int iVar0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar0 = func_376(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true) + Vector(3f, 0f, 0f), 0f, iParam3, iParam4, iParam5, 0, iParam6, iParam7);
		PED::SET_PED_INTO_VEHICLE(iVar0, iParam1, iParam2);
	}
	return iVar0;
}

int func_376(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x2C567
{
	int iVar0;
	iVar0 = PED::CREATE_PED(26, iParam0, Param1, fParam2, true, true);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam7);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam7, 0);
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam8);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam3);
	PED::SET_PED_AS_ENEMY(iVar0, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 47, true);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam4, -1, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam4, true);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, true, iParam4);
	if (iParam5 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, iParam4, iParam5);
	}
	PED::SET_PED_DUCKING(iVar0, bParam6);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
	__LIB_0__::func_477(iVar0, 0);
	return iVar0;
}

void func_378(var uParam0)//Position - 0x2C6DA
{
	float fVar0;
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3266.92f, -4603.24f, 116.83f, 30f, 3.5f, 3f, false, true, 0) || (func_350(&Local_999) + func_350(&Local_997)) >= 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_55) && STREAMING::HAS_MODEL_LOADED(iLocal_56))
				{
					Local_1062[1 /*14*/] = func_360(&(Local_1062[1 /*14*/]), 600, 0, 1, 1, 0, 1, 56, 1, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1062[1 /*14*/], true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1062[1 /*14*/], true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1062[1 /*14*/], false);
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1062[1 /*14*/], true);
					Local_1002[0 /*26*/] = func_375(iLocal_55, Local_1062[1 /*14*/], -1, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 200, 0);
					Local_1002[1 /*26*/] = func_375(iLocal_55, Local_1062[1 /*14*/], 0, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 200, 0);
					func_374(&Local_1002, 0);
					func_371(Local_1062[1 /*14*/], sLocal_54, 1.4f, 0, 1750f, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("MI_1_VAN_ARRIVES_02");
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1062[1 /*14*/], "MI_1_VAN_02", 0f);
					iLocal_448 = 0;
					iLocal_449 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
			}
			break;
		case 1:
			if (func_381(Local_1062[1 /*14*/], &fVar0, &(Local_1062[1 /*14*/].f_11)))
			{
				if (fVar0 > 57.5f || Local_1062[1 /*14*/].f_11 == 1)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1062[1 /*14*/], false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1062[1 /*14*/], false);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1062[1 /*14*/], true);
				}
				if (fVar0 > 96f || Local_1062[1 /*14*/].f_11 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_1062[1 /*14*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_1062[1 /*14*/].f_1));
					}
				}
				if (fVar0 > 96f || Local_1062[1 /*14*/].f_11 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_1002[0 /*26*/]))
					{
						__LIB_30__::func_210(Local_1002[0 /*26*/], Local_78, Local_79, 48f, 0);
						func_370(Local_1002[0 /*26*/], 2, 1, 1, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1002[0 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1002[0 /*26*/], 28, true);
						__LIB_30__::func_207(Local_1002[0 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1002[0 /*26*/], 100f, 0);
					}
					if (!PED::IS_PED_INJURED(Local_1002[1 /*26*/]))
					{
						__LIB_30__::func_210(Local_1002[1 /*26*/], Local_78, Local_79, 48f, 0);
						func_370(Local_1002[1 /*26*/], 2, 1, 1, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1002[1 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1002[1 /*26*/], 28, true);
						__LIB_30__::func_207(Local_1002[1 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1002[1 /*26*/], 100f, 0);
					}
				}
				if (Local_1062[1 /*14*/].f_11 == 1)
				{
					Local_1062[1 /*14*/].f_11 = 0;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		case 2:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_VAN_ARRIVES_02"))
			{
				AUDIO::STOP_AUDIO_SCENE("MI_1_VAN_ARRIVES_02");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1062[1 /*14*/], false))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1062[1 /*14*/], 0f);
			}
			if (!PED::IS_PED_INJURED(Local_1002[0 /*26*/]))
			{
				if (Local_1002[0 /*26*/].f_13 == 0)
				{
					if (iLocal_406 == 1)
					{
						Local_1002[0 /*26*/].f_12 = 0;
						Local_1002[0 /*26*/].f_15 = 100;
						Local_1002[0 /*26*/].f_13 = 1;
					}
				}
				switch (Local_1002[0 /*26*/].f_15)
				{
					case 100:
						if (Local_1002[0 /*26*/].f_12 == 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1002[0 /*26*/], 100f, 0);
							func_370(Local_1002[0 /*26*/], 1, 1, 1, 29, 1);
							__LIB_30__::func_210(Local_1002[0 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
							__LIB_30__::func_209(Local_1002[0 /*26*/], 0.6f, 0.25f);
							__LIB_30__::func_206(Local_1002[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
							Local_1002[0 /*26*/].f_12 = 1;
						}
						break;
					}
			}
			if (!PED::IS_PED_INJURED(Local_1002[1 /*26*/]))
			{
				if (Local_1002[1 /*26*/].f_13 == 0)
				{
					if (iLocal_406 == 1)
					{
						Local_1002[1 /*26*/].f_12 = 0;
						Local_1002[1 /*26*/].f_15 = 100;
						Local_1002[1 /*26*/].f_13 = 1;
					}
				}
				switch (Local_1002[1 /*26*/].f_15)
				{
					case 100:
						if (Local_1002[1 /*26*/].f_12 == 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1002[1 /*26*/], 100f, 0);
							func_370(Local_1002[1 /*26*/], 1, 1, 1, 29, 1);
							__LIB_30__::func_210(Local_1002[1 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
							__LIB_30__::func_209(Local_1002[1 /*26*/], 0.75f, 0f);
							__LIB_30__::func_206(Local_1002[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
							Local_1002[1 /*26*/].f_12 = 1;
						}
						break;
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1003[0 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1003[0 /*26*/], false))
				{
					switch (Local_1003[0 /*26*/].f_15)
					{
						case 0:
							if (Local_1003[0 /*26*/].f_12 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[0 /*26*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[0 /*26*/], 13, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[0 /*26*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[0 /*26*/], 3, true);
								PED::SET_PED_COMBAT_RANGE(Local_1003[0 /*26*/], 2);
								PED::SET_PED_COMBAT_MOVEMENT(Local_1003[0 /*26*/], 2);
								__LIB_30__::func_207(Local_1003[0 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1003[0 /*26*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1003[0 /*26*/], false);
								Local_1003[0 /*26*/].f_12 = 1;
							}
							break;
						}
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1003[1 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1003[1 /*26*/], false))
				{
					switch (Local_1003[1 /*26*/].f_15)
					{
						case 0:
							if (Local_1003[1 /*26*/].f_12 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[1 /*26*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[1 /*26*/], 13, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[1 /*26*/], 1, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1003[1 /*26*/], 3, true);
								PED::SET_PED_COMBAT_RANGE(Local_1003[1 /*26*/], 1);
								PED::SET_PED_COMBAT_MOVEMENT(Local_1003[1 /*26*/], 2);
								__LIB_30__::func_207(Local_1003[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1003[1 /*26*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1003[1 /*26*/], false);
								Local_1003[1 /*26*/].f_12 = 1;
							}
							break;
						}
					}
			}
			break;
	}
	func_223(&Local_1002, 0, 1, 1);
	func_223(&Local_1003, 0, 1, 1);
	func_357(Local_1062[1 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 450, &(Local_1062[1 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 0, 0, 1120403456);
	func_359(&(Local_1062[1 /*14*/]), PLAYER::PLAYER_PED_ID(), 3238.3467f, -4687.663f, 114.673004f, 36f, 15f, 4f);
	func_356(Local_1062[1 /*14*/], 1, Local_71, 0.8f, 0, 1, Local_75, 150f, 1120403456);
	func_356(Local_1062[1 /*14*/], 0, Local_70, 0.8f, 0, 1, Local_74, 150f, 1120403456);
	func_356(Local_1062[1 /*14*/], 4, Local_72, 0.8f, 0, 1, Local_76, 150f, 1120403456);
	func_356(Local_1062[1 /*14*/], 5, Local_73, 0.8f, 0, 1, Local_77, 150f, 1120403456);
	if (iLocal_448 == 0)
	{
		if (iLocal_449 != 0)
		{
			if (__LIB_11__::func_307(2000, iLocal_449))
			{
				iLocal_448 = 1;
			}
		}
	}
	func_364(&Local_1002, iLocal_448);
	func_364(&Local_1003, iLocal_448);
}

int func_381(int iParam0, var uParam1, var uParam2)//Position - 0x2CEBF
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				*uParam1 = __LIB_30__::func_201(iParam0);
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (PED::IS_PED_INJURED(iVar0))
					{
						*uParam2 = 1;
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
					}
				}
				return 1;
			}
			else if (*uParam2 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_382(var uParam0)//Position - 0x2CF2C
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	int iVar4;
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missmic1ig_2");
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3267.5603f, -4588.9224f, 118.00573f, 30f, 3.5f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3287.8145f, -4589.952f, 116.589165f, 3294.0024f, -4561.976f, 120.122f, 12f, false, true, 0)) || (iLocal_442 != 0 && __LIB_11__::func_307(25000, iLocal_442)))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_55) && STREAMING::HAS_MODEL_LOADED(iLocal_56))
				{
					Local_1062[0 /*14*/] = func_360(&(Local_1062[0 /*14*/]), 800, 0, 1, 1, 1, 1, 30, 2, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1062[0 /*14*/], true);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1062[0 /*14*/], true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1062[0 /*14*/], false);
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_1062[0 /*14*/], true);
					Local_997[0 /*26*/] = func_375(iLocal_55, Local_1062[0 /*14*/], -1, iLocal_367, joaat("WEAPON_PISTOL"), 0, 200, 0);
					Local_997[1 /*26*/] = func_375(iLocal_55, Local_1062[0 /*14*/], 0, iLocal_367, joaat("WEAPON_PISTOL"), joaat("COMPONENT_AT_PI_FLSH"), 200, 0);
					Local_997[2 /*26*/] = func_375(iLocal_55, Local_1062[0 /*14*/], 1, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), joaat("COMPONENT_AT_AR_FLSH"), 200, 0);
					Local_997[3 /*26*/] = func_375(iLocal_55, Local_1062[0 /*14*/], 2, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 200, 0);
					func_374(&Local_997, 0);
					PED::SET_PED_SEEING_RANGE(Local_997[0 /*26*/], 20f);
					PED::SET_PED_SEEING_RANGE(Local_997[1 /*26*/], 15f);
					PED::SET_PED_SEEING_RANGE(Local_997[2 /*26*/], 20f);
					PED::SET_PED_SEEING_RANGE(Local_997[3 /*26*/], 20f);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_997[0 /*26*/], true);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_997[1 /*26*/], true);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_997[2 /*26*/], true);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_997[3 /*26*/], true);
					func_371(Local_1062[0 /*14*/], sLocal_54, 1.35f, 0, 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("MI_1_VAN_ARRIVES_01");
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1062[0 /*14*/], "MI_1_VAN_01", 0f);
					RECORDING::REPLAY_START_EVENT(3);
					iLocal_496 = 1;
					*uParam0++;
				}
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missmic1ig_2");
			if (func_381(Local_1062[0 /*14*/], &fVar0, &(Local_1062[0 /*14*/].f_11)))
			{
				if (fVar0 > 32f && fVar0 < 48f)
				{
					iLocal_428 = 1;
				}
				else if (fVar0 > 48f)
				{
					if (iLocal_429 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1062[0 /*14*/], false))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_1062[0 /*14*/], false);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1062[0 /*14*/], false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_1062[0 /*14*/], true);
							if (ENTITY::DOES_ENTITY_EXIST(Local_997[0 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_997[0 /*26*/], false))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_997[0 /*26*/], false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_997[1 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_997[1 /*26*/], false))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_997[1 /*26*/], false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_997[2 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_997[2 /*26*/], false))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_997[2 /*26*/], false);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_997[3 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_997[3 /*26*/], false))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_997[3 /*26*/], false);
								}
							}
						}
						iLocal_429 = 1;
					}
				}
				if (fVar0 > 97f)
				{
					if (Local_997[0 /*26*/].f_12 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1062[0 /*14*/], false))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_1062[0 /*14*/]);
						}
						Local_997[0 /*26*/].f_12 = 1;
					}
				}
				if (Local_1062[0 /*14*/].f_11 == 1)
				{
					Local_1062[0 /*14*/].f_11 = 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1062[0 /*14*/], PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_416 = 1;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missmic1ig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1ig_2"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
				{
					if (iLocal_416 == 0)
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_1062[0 /*14*/], true) };
						Var2 = { ENTITY::GET_ENTITY_ROTATION(Local_1062[0 /*14*/], 2) };
						if (!ENTITY::IS_ENTITY_DEAD(Local_997[0 /*26*/], false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_997[0 /*26*/]);
							func_389(Local_997[0 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_997[0 /*26*/], Local_1062[0 /*14*/], true);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda", Var1, Var2, 4f, -4f, -1, 4104, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_997[0 /*26*/], false, false);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 4096);
							func_388(&(Local_997[0 /*26*/]), 1);
							Local_997[0 /*26*/].f_15 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_997[1 /*26*/], false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_997[1 /*26*/]);
							func_389(Local_997[1 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_997[1 /*26*/], Local_1062[0 /*14*/], true);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb", Var1, Var2, 4f, -4f, -1, 4104, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_997[1 /*26*/], false, false);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 4096);
							func_388(&(Local_997[1 /*26*/]), 1);
							Local_997[1 /*26*/].f_15 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_997[2 /*26*/], false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_997[2 /*26*/]);
							func_389(Local_997[2 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_997[2 /*26*/], Local_1062[0 /*14*/], true);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc", Var1, Var2, 4f, -4f, -1, 4106, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_997[2 /*26*/], false, false);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 4096);
							func_388(&(Local_997[2 /*26*/]), 1);
							Local_997[2 /*26*/].f_15 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_997[3 /*26*/], false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_997[3 /*26*/]);
							func_389(Local_997[3 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_997[3 /*26*/], Local_1062[0 /*14*/], true);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd", Var1, Var2, 4f, -4f, -1, 4104, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_997[3 /*26*/], false, false);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 4096);
							func_388(&(Local_997[3 /*26*/]), 1);
							Local_997[3 /*26*/].f_15 = 0;
						}
						ENTITY::SET_ENTITY_HEALTH(Local_1062[0 /*14*/], __LIB_0__::func_310((ENTITY::GET_ENTITY_HEALTH(Local_1062[0 /*14*/]) - 100), 400, 700), 0);
						VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_1062[0 /*14*/], false);
					}
					else
					{
						func_388(&(Local_997[0 /*26*/]), 11);
						func_388(&(Local_997[1 /*26*/]), 11);
						func_388(&(Local_997[2 /*26*/]), 11);
						func_388(&(Local_997[3 /*26*/]), 11);
					}
				}
				AUDIO::STOP_AUDIO_SCENE("MI_1_VAN_ARRIVES_01");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1062[0 /*14*/], false))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_1062[0 /*14*/], 0f);
				}
				*uParam0++;
			}
			break;
		case 3:
			if (iLocal_416 == 0)
			{
				func_386(&Local_997);
			}
			else if (iLocal_416 == 1)
			{
				if (iLocal_417 == 1)
				{
					func_386(&Local_997);
				}
				if (iLocal_495 == 0)
				{
					RECORDING::REPLAY_STOP_EVENT();
					iLocal_495 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_997[0 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_997[0 /*26*/], false))
				{
					switch (Local_997[0 /*26*/].f_18)
					{
						case 1:
							switch (Local_997[0 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_997[0 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1062[0 /*14*/], 0, false, false);
												iLocal_378 = 1;
												Local_997[0 /*26*/].f_15++;
											}
										}
									}
									break;
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.975f)
										{
											Local_997[0 /*26*/].f_12 = 0;
											Local_997[0 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.4f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 4096);
											if (__LIB_8__::func_538(Local_997[0 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_997[0 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_388(&(Local_997[0 /*26*/]), 11);
												Local_997[0 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_997[0 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[0 /*26*/], PLAYER::PLAYER_PED_ID(), true))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_997[0 /*26*/]);
												func_388(&(Local_997[0 /*26*/]), 11);
												iLocal_416 = 1;
												Local_997[0 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								case 2:
									if (Local_997[0 /*26*/].f_12 == 0)
									{
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_997[0 /*26*/], Local_1063[28 /*13*/].f_1, -1, false, 0f, true, true, Local_1063[28 /*13*/], false);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_997[0 /*26*/], false);
										Local_997[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_997[0 /*26*/].f_12 = 1;
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_997[0 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[0 /*26*/], PLAYER::PLAYER_PED_ID(), true)) || iLocal_416 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.4f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[0 /*26*/], 4096);
									func_388(&(Local_997[0 /*26*/]), 11);
									Local_997[0 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_416 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1062[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1062[0 /*14*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_23__::func_175(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_1062[0 /*14*/], true), 4f))
										{
											iLocal_416 = 1;
										}
									}
								}
							}
							break;
						case 11:
							if (Local_997[0 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_997[0 /*26*/], 100f, 0);
								func_370(Local_997[0 /*26*/], 1, 2, 2, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[0 /*26*/], 28, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[0 /*26*/], 51, true);
								__LIB_30__::func_208(Local_997[0 /*26*/], 3266.66f, -4615.01f, 115.07f, 2.75f, 0);
								__LIB_30__::func_209(Local_997[0 /*26*/], 1f, 1f);
								__LIB_30__::func_206(Local_997[0 /*26*/], 1, 0, 0, 0, 6f, 0, 0f, 2.5f, 1082130432);
								__LIB_30__::func_207(Local_997[0 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
								__LIB_11__::func_168(Local_997[0 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_997[0 /*26*/], false);
								iLocal_416 = 1;
								Local_997[0 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.399f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_997[0 /*26*/], 0, false);
						TASK::SET_HIGH_FALL_TASK(Local_997[0 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_997[0 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, true, true, false, false, true);
					}
					if (iLocal_416 == 0)
					{
						if (Local_997[0 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_997[0 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_997[0 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_416 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3))
					{
						func_224(&(Local_997[0 /*26*/]), 0, 1, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_997[1 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_997[1 /*26*/], false))
				{
					switch (Local_997[1 /*26*/].f_18)
					{
						case 1:
							switch (Local_997[1 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_997[1 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1062[0 /*14*/], 1, false, false);
												iLocal_378 = 1;
												Local_997[1 /*26*/].f_15++;
											}
										}
									}
									break;
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.95f)
										{
											Local_997[1 /*26*/].f_12 = 0;
											Local_997[1 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.185f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 4096);
											if (__LIB_8__::func_538(Local_997[1 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_997[1 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_388(&(Local_997[1 /*26*/]), 11);
												Local_997[1 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_997[1 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[1 /*26*/], PLAYER::PLAYER_PED_ID(), true))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_997[1 /*26*/]);
												func_388(&(Local_997[1 /*26*/]), 11);
												iLocal_416 = 1;
												Local_997[1 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								case 2:
									if (Local_997[1 /*26*/].f_12 == 0)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar3);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_1063[2 /*13*/].f_1, 3254.1f, -4587.78f, 118.05f, 0.7f, false, 1f, 0f, true, 1, false, joaat("FIRING_PATTERN_FULL_AUTO"));
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_1063[2 /*13*/].f_1, -1, true, 0.25f, true, false, Local_1063[2 /*13*/], true);
										TASK::CLOSE_SEQUENCE_TASK(iVar3);
										TASK::TASK_PERFORM_SEQUENCE(Local_997[1 /*26*/], iVar3);
										TASK::CLEAR_SEQUENCE_TASK(&iVar3);
										func_370(Local_997[1 /*26*/], 1, 2, 2, 51, 1);
										__LIB_30__::func_208(Local_997[1 /*26*/], 3252.73f, -4600.65f, 115.64f, 1.5f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_997[1 /*26*/], false);
										Local_997[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_997[1 /*26*/].f_12 = 1;
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_997[1 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[1 /*26*/], PLAYER::PLAYER_PED_ID(), true)) || iLocal_416 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.185f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[1 /*26*/], 4096);
									func_388(&(Local_997[1 /*26*/]), 11);
									Local_997[1 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_416 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1062[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1062[0 /*14*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_23__::func_175(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_1062[0 /*14*/], true), 4f))
										{
											iLocal_416 = 1;
										}
									}
								}
							}
							break;
						case 11:
							if (Local_997[1 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_997[1 /*26*/], 100f, 0);
								func_370(Local_997[1 /*26*/], 1, 2, 1, 51, 1);
								__LIB_30__::func_208(Local_997[1 /*26*/], 3252.73f, -4600.65f, 115.64f, 1.5f, 0);
								__LIB_30__::func_207(Local_997[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[1 /*26*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[1 /*26*/], 28, true);
								PED::SET_COMBAT_FLOAT(Local_997[1 /*26*/], 0, 0.05f);
								__LIB_11__::func_168(Local_997[1 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_997[1 /*26*/], false);
								iLocal_416 = 1;
								Local_997[1 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.165f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_997[1 /*26*/], 0, false);
						TASK::SET_HIGH_FALL_TASK(Local_997[1 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_997[1 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, true, true, false, false, true);
					}
					if (iLocal_416 == 0)
					{
						if (Local_997[1 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_997[1 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_997[1 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_416 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3))
					{
						func_224(&(Local_997[1 /*26*/]), 0, 1, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_997[2 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_997[2 /*26*/], false))
				{
					switch (Local_997[2 /*26*/].f_18)
					{
						case 1:
							switch (Local_997[2 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_997[2 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1062[0 /*14*/], 2, false, false);
												iLocal_378 = 1;
												Local_997[2 /*26*/].f_15++;
											}
										}
									}
									break;
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3))
									{
										PED::SET_PED_RESET_FLAG(Local_997[2 /*26*/], 156, true);
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.925f)
										{
											Local_997[2 /*26*/].f_12 = 0;
											Local_997[2 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.585f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 4096);
											if (__LIB_8__::func_538(Local_997[2 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_997[2 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_388(&(Local_997[2 /*26*/]), 11);
												Local_997[2 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_997[2 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[2 /*26*/], PLAYER::PLAYER_PED_ID(), true))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_997[2 /*26*/]);
												func_388(&(Local_997[2 /*26*/]), 11);
												iLocal_416 = 1;
												Local_997[2 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								case 2:
									PED::SET_PED_RESET_FLAG(Local_997[2 /*26*/], 156, true);
									if (Local_997[2 /*26*/].f_12 == 0)
									{
										func_383(Local_997[2 /*26*/], 3260.4f, -4605.49f, 115.5f, 0.7f, 0, 3264.06f, -4588f, 116.88f, 0, 0, 0, 0, -1, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
										Local_997[2 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_997[2 /*26*/].f_12 = 1;
									}
									if (__LIB_11__::func_307(750, Local_997[2 /*26*/].f_16))
									{
										iLocal_377 = 1;
									}
									if (__LIB_11__::func_307(6000, Local_997[2 /*26*/].f_16))
									{
										func_388(&(Local_997[2 /*26*/]), 5);
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_997[2 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[2 /*26*/], PLAYER::PLAYER_PED_ID(), true)) || iLocal_416 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.585f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[2 /*26*/], 4096);
									func_388(&(Local_997[2 /*26*/]), 11);
									Local_997[2 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_416 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1062[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1062[0 /*14*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_23__::func_175(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_1062[0 /*14*/], true), 4f))
										{
											iLocal_416 = 1;
										}
									}
								}
							}
							break;
						case 5:
							if (Local_997[2 /*26*/].f_12 == 0)
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar4);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3264.06f, -4588f, 116.88f, 5000, false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3251.02f, -4590.45f, 117.24f, 5000, false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3264.06f, -4588f, 116.88f, 5000, false, false);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3272.29f, -4590.3f, 117.61f, 5000, false, false);
								TASK::SET_SEQUENCE_TO_REPEAT(iVar4, true);
								TASK::CLOSE_SEQUENCE_TASK(iVar4);
								TASK::TASK_PERFORM_SEQUENCE(Local_997[2 /*26*/], iVar4);
								TASK::CLEAR_SEQUENCE_TASK(&iVar4);
								Local_997[2 /*26*/].f_16 = MISC::GET_GAME_TIMER();
								Local_997[2 /*26*/].f_12 = 1;
							}
							if (__LIB_11__::func_307(10000, Local_997[2 /*26*/].f_16))
							{
								iLocal_379 = 1;
							}
							if (PED::IS_PED_IN_COMBAT(Local_997[2 /*26*/], 0) || iLocal_416 == 1)
							{
								func_388(&(Local_997[2 /*26*/]), 11);
								Local_997[2 /*26*/].f_15 = 0;
							}
							break;
						case 11:
							if (Local_997[2 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_997[2 /*26*/], 100f, 0);
								func_370(Local_997[2 /*26*/], 2, 1, 0, 13, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[2 /*26*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[2 /*26*/], 28, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[2 /*26*/], 51, true);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_997[2 /*26*/], false);
								__LIB_30__::func_206(Local_997[2 /*26*/], 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								__LIB_30__::func_207(Local_997[2 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_997[2 /*26*/], false);
								__LIB_11__::func_168(Local_997[2 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								iLocal_416 = 1;
								Local_997[2 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.51f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_997[2 /*26*/], 0, false);
						TASK::SET_HIGH_FALL_TASK(Local_997[2 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_997[2 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, true, true, false, false, true);
					}
					if (iLocal_416 == 0)
					{
						if (Local_997[2 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_997[2 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_997[2 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_416 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3))
					{
						func_224(&(Local_997[2 /*26*/]), 0, 1, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_997[3 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_997[3 /*26*/], false))
				{
					switch (Local_997[3 /*26*/].f_18)
					{
						case 1:
							switch (Local_997[3 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_997[3 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_1062[0 /*14*/], 3, false, false);
												iLocal_378 = 1;
												Local_997[3 /*26*/].f_15++;
											}
										}
									}
									break;
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.95f)
										{
											Local_997[3 /*26*/].f_12 = 0;
											Local_997[3 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.53f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 4096);
											if (__LIB_8__::func_538(Local_997[3 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_997[3 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_388(&(Local_997[3 /*26*/]), 11);
												Local_997[3 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_997[3 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[3 /*26*/], PLAYER::PLAYER_PED_ID(), true))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_997[3 /*26*/]);
												func_388(&(Local_997[3 /*26*/]), 11);
												iLocal_416 = 1;
												Local_997[3 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								case 2:
									if (Local_997[3 /*26*/].f_12 == 0)
									{
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_997[3 /*26*/], Local_1063[27 /*13*/].f_1, -1, false, 0f, true, false, Local_1063[27 /*13*/], false);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_997[3 /*26*/], false);
										Local_997[3 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_997[3 /*26*/].f_12 = 1;
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_997[3 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_997[3 /*26*/], PLAYER::PLAYER_PED_ID(), true)) || iLocal_416 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.53f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_997[3 /*26*/], 4096);
									func_388(&(Local_997[3 /*26*/]), 11);
									Local_997[3 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_416 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_1062[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_1062[0 /*14*/], false))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1062[0 /*14*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_23__::func_175(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_1062[0 /*14*/], true), 4f))
										{
											iLocal_416 = 1;
										}
									}
								}
							}
							break;
						case 11:
							if (Local_997[3 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_997[3 /*26*/], 100f, 0);
								func_370(Local_997[3 /*26*/], 1, 2, 1, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[3 /*26*/], 50, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[3 /*26*/], 28, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_997[3 /*26*/], 51, true);
								__LIB_30__::func_208(Local_997[3 /*26*/], 3259.12f, -4608.15f, 115.51f, 2.5f, 0);
								__LIB_30__::func_206(Local_997[3 /*26*/], 1, 0, 1, 0, 5f, 0, 0f, 2f, 1082130432);
								__LIB_30__::func_207(Local_997[3 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_997[3 /*26*/], false);
								__LIB_11__::func_168(Local_997[3 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								iLocal_416 = 1;
								Local_997[3 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.51f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_997[3 /*26*/], 0, false);
						TASK::SET_HIGH_FALL_TASK(Local_997[3 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_997[3 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, true, true, false, false, true);
					}
					if (iLocal_416 == 0)
					{
						if (Local_997[3 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_997[3 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_997[3 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_416 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_997[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3))
					{
						func_224(&(Local_997[3 /*26*/]), 0, 1, 1);
					}
				}
			}
			break;
	}
	func_357(Local_1062[0 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 400, &(Local_1062[0 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 1, 45f, 70f);
	func_359(&(Local_1062[0 /*14*/]), PLAYER::PLAYER_PED_ID(), 3238.3467f, -4687.663f, 114.673004f, 36f, 15f, 4f);
	func_356(Local_1062[0 /*14*/], 1, Local_71, 0.8f, 0, 1, Local_75, 150f, 1120403456);
	func_356(Local_1062[0 /*14*/], 0, Local_70, 0.8f, 0, 1, Local_74, 150f, 1120403456);
	func_356(Local_1062[0 /*14*/], 4, Local_72, 0.8f, 0, 1, Local_76, 150f, 1120403456);
	func_356(Local_1062[0 /*14*/], 5, Local_73, 0.8f, 0, 1, Local_77, 150f, 1120403456);
	func_364(&Local_997, 1);
}

void func_383(int iParam0, struct<3> Param1, float fParam2, int iParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, bool bParam14, float fParam15, int iParam16)//Position - 0x2EC60
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		if (iParam3 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam5, false))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param4, fParam2, bParam6, fParam12, fParam13, bParam14, iParam16, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam5, true), fParam2, bParam6, fParam12, fParam13, bParam14, iParam16, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
		}
		else if (iParam3 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam5, false))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param4, fParam2, bParam6, fParam12, fParam13, bParam14, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam5, fParam2, bParam6, fParam12, fParam13, bParam14, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			}
		}
		if (iParam7 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam5, false))
			{
				if (iParam8 == 1)
				{
					TASK::TASK_SHOOT_AT_COORD(0, Param4, iParam9, iParam10);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_COORD(0, Param4, iParam9, false, false);
				}
			}
			else if (iParam8 == 1)
			{
				TASK::TASK_SHOOT_AT_ENTITY(0, iParam5, iParam9, iParam10);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam5, iParam9, false);
			}
		}
		if (iParam11 == 1)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		}
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam15, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_386(int iParam0)//Position - 0x2EE08
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*26*/], false))
			{
				PED::SET_PED_RESET_FLAG((*iParam0)[iVar0 /*26*/], 128, true);
			}
		}
		iVar0++;
	}
}

void func_388(var uParam0, int iParam1)//Position - 0x2EE74
{
	uParam0->f_12 = 0;
	uParam0->f_18 = iParam1;
}

void func_389(int iParam0, bool bParam1)//Position - 0x2EE87
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(iParam0, true);
		if (iVar0 != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, bParam1);
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar0, true))
			{
				WEAPON::ADD_AMMO_TO_PED(iParam0, iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar0, true) * 2);
			}
		}
	}
}

void func_390(int iParam0, int iParam1, int iParam2)//Position - 0x2EEDD
{
	if (*iParam0 == 0)
	{
		if (iParam2 == 0 && iParam1 == 1)
		{
			if (func_350(&Local_1007) >= 1)
			{
				if (iLocal_426 == 0)
				{
					iLocal_426 = MISC::GET_GAME_TIMER();
				}
				else if (__LIB_11__::func_307(3000, iLocal_426))
				{
					Local_1008[0 /*26*/] = func_376(iLocal_55, 3283.0278f, -4639.9214f, 114.3816f, 7.6314f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), joaat("COMPONENT_AT_AR_FLSH"), 1, 200, 0);
					Local_1008[1 /*26*/] = func_376(iLocal_55, 3261.2634f, -4645.3687f, 112.9646f, 352.95f, iLocal_367, joaat("WEAPON_PISTOL"), 0, 1, 200, 0);
					func_374(&Local_1008, 0);
					*iParam0 = 1;
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1008[0 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1008[0 /*26*/], false))
			{
				switch (Local_1008[0 /*26*/].f_15)
				{
					case 0:
						if (Local_1008[0 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[0 /*26*/], 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[0 /*26*/], 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[0 /*26*/], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[0 /*26*/], 3, true);
							PED::SET_PED_COMBAT_RANGE(Local_1008[0 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_1008[0 /*26*/], 2);
							__LIB_30__::func_207(Local_1008[0 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
							PED::SET_COMBAT_FLOAT(Local_1008[0 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_1008[0 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1008[0 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1008[0 /*26*/], false);
							Local_1008[0 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1008[1 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1008[1 /*26*/], false))
			{
				switch (Local_1008[1 /*26*/].f_15)
				{
					case 0:
						if (Local_1008[1 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[1 /*26*/], 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[1 /*26*/], 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[1 /*26*/], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1008[1 /*26*/], 3, true);
							PED::SET_PED_COMBAT_RANGE(Local_1008[1 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_1008[1 /*26*/], 2);
							__LIB_30__::func_207(Local_1008[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
							PED::SET_COMBAT_FLOAT(Local_1008[1 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_1008[1 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1008[1 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1008[1 /*26*/], false);
							Local_1008[1 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		func_223(&Local_1008, 0, 1, 1);
	}
	func_364(&Local_1008, 1);
}

void func_391(int iParam0, int iParam1)//Position - 0x2F14E
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 0)
		{
			if (((func_350(&Local_999) + func_350(&Local_997)) + func_350(&Local_998)) >= 8)
			{
				Local_1007[0 /*26*/] = func_376(iLocal_55, 3265.5913f, -4642.531f, 113.3619f, 341.2f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), joaat("COMPONENT_AT_AR_FLSH"), 1, 200, 0);
				Local_1007[1 /*26*/] = func_376(iLocal_55, 3284.565f, -4651.472f, 113.3171f, 6.62f, iLocal_367, joaat("WEAPON_PUMPSHOTGUN"), 0, 1, 200, 0);
				func_374(&Local_1007, 0);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_1007[0 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1007[0 /*26*/], false))
			{
				switch (Local_1007[0 /*26*/].f_15)
				{
					case 0:
						if (Local_1007[0 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[0 /*26*/], 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[0 /*26*/], 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[0 /*26*/], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[0 /*26*/], 3, true);
							PED::SET_PED_COMBAT_RANGE(Local_1007[0 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_1007[0 /*26*/], 2);
							__LIB_30__::func_207(Local_1007[0 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
							PED::SET_COMBAT_FLOAT(Local_1007[0 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_1007[0 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1007[0 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1007[0 /*26*/], false);
							Local_1007[0 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_1007[1 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_1007[1 /*26*/], false))
			{
				switch (Local_1007[1 /*26*/].f_15)
				{
					case 0:
						if (Local_1007[1 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[1 /*26*/], 50, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[1 /*26*/], 13, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[1 /*26*/], 1, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_1007[1 /*26*/], 3, true);
							PED::SET_PED_COMBAT_RANGE(Local_1007[1 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_1007[1 /*26*/], 2);
							__LIB_30__::func_207(Local_1007[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
							PED::SET_COMBAT_FLOAT(Local_1007[1 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_1007[1 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1007[1 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1007[1 /*26*/], false);
							Local_1007[1 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		func_223(&Local_1007, 0, 1, 1);
	}
	func_364(&Local_1007, 1);
}

void func_392(int iParam0, int iParam1, int iParam2)//Position - 0x2F3A8
{
	if (*iParam1 == 0)
	{
		if (__LIB_30__::func_211(PLAYER::PLAYER_PED_ID(), 3294.089f, -4665.59f, 112.151215f, 3222.6924f, -4659.923f, 117.26117f, 16f))
		{
			*iParam1 = 1;
		}
	}
	if (*iParam0 == 0)
	{
		if (iParam2 == 1)
		{
			if (*iParam1 == 0 && __LIB_30__::func_211(PLAYER::PLAYER_PED_ID(), 3238.834f, -4639.374f, 113.51028f, 3234.5173f, -4652.8794f, 118.68617f, 14f))
			{
				Local_1006[0 /*26*/] = func_376(iLocal_55, 3240.9082f, -4665.7764f, 114.6382f, 0f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 0, 200, 0);
				Local_1006[1 /*26*/] = func_376(iLocal_55, 3244.522f, -4672.7925f, 113.1723f, 48.64f, iLocal_367, joaat("WEAPON_PUMPSHOTGUN"), 0, 0, 200, 0);
				Local_1006[2 /*26*/] = func_376(iLocal_55, 3231.536f, -4684.4062f, 111.6351f, 306.53f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 0, 200, 0);
				func_374(&Local_1006, 0);
				func_370(Local_1006[0 /*26*/], 1, 2, 2, 29, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[0 /*26*/], 51, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[0 /*26*/], 28, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[0 /*26*/], 57, false);
				__LIB_30__::func_210(Local_1006[0 /*26*/], 3239.5283f, -4665.0806f, 113.577934f, 3240.2786f, -4665.159f, 116.50867f, 1f, 0);
				__LIB_30__::func_205(Local_1006[0 /*26*/], &(Local_1006[0 /*26*/].f_10), &(Local_1063[25 /*13*/]));
				__LIB_30__::func_206(Local_1006[0 /*26*/], 1, 1, 0, 0, 8f, 0, 0f, 1f, 4.5f);
				__LIB_30__::func_207(Local_1006[0 /*26*/], 15, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1006[0 /*26*/], false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1006[0 /*26*/], 100f, 0);
				Local_1006[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
				func_383(Local_1006[1 /*26*/], 3237.66f, -4665.48f, 113.57f, 2f, 0, Local_61, PLAYER::PLAYER_PED_ID(), 0, 0, 1, 1000, joaat("FIRING_PATTERN_FULL_AUTO"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_370(Local_1006[1 /*26*/], 2, 2, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[1 /*26*/], 50, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[1 /*26*/], 51, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[1 /*26*/], 28, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[1 /*26*/], 57, false);
				__LIB_30__::func_207(Local_1006[1 /*26*/], 15, 125, joaat("FIRING_PATTERN_FULL_AUTO"));
				func_370(Local_1006[2 /*26*/], 2, 2, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[2 /*26*/], 50, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[2 /*26*/], 51, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[2 /*26*/], 28, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1006[2 /*26*/], 57, false);
				__LIB_30__::func_207(Local_1006[2 /*26*/], 15, 125, joaat("FIRING_PATTERN_FULL_AUTO"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1006[2 /*26*/], false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1006[2 /*26*/], 100f, 0);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		func_223(&Local_1006, 0, 1, 1);
	}
	func_364(&Local_1006, 1);
}

void func_394(int iParam0, int iParam1, int iParam2)//Position - 0x2F6DE
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_406(PLAYER::PLAYER_PED_ID(), 3262.183f, -4629.6646f, 116.84507f, 30f, 2f, 3f) || (func_397(&Local_1004) + func_397(&Local_1000)) <= iParam2)
			{
				Local_1001[0 /*26*/] = func_376(iLocal_55, 3253.03f, -4672.16f, 113.57f, 0f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 0, 200, 0);
				Local_1001[1 /*26*/] = func_376(iLocal_55, 3253.27f, -4686.1f, 111.96f, 341.08f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 0, 200, 0);
				Local_1001[2 /*26*/] = func_376(iLocal_55, 3257.5f, -4695.39f, 111.85f, 345.48f, iLocal_367, joaat("WEAPON_PUMPSHOTGUN"), 0, 0, 200, 0);
				Local_1001[3 /*26*/] = func_376(iLocal_55, 3251.4146f, -4686.4194f, 111.8743f, 350.8474f, iLocal_367, joaat("WEAPON_PUMPSHOTGUN"), 0, 0, 200, 0);
				Local_1001[4 /*26*/] = func_376(iLocal_55, 3261.0928f, -4693.9453f, 111.8941f, 0.7368f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 1, 200, 0);
				func_374(&Local_1001, 0);
				func_383(Local_1001[0 /*26*/], 3272.56f, -4664.5f, 112.84f, 2f, 0, Local_61, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
				__LIB_30__::func_207(Local_1001[0 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[0 /*26*/], 28, true);
				func_396(Local_1001[1 /*26*/], 1120403456);
				func_370(Local_1001[1 /*26*/], 1, 2, 2, 29, 1);
				__LIB_30__::func_208(Local_1001[1 /*26*/], 3256.53f, -4686.6f, 111.91f, 3f, 0);
				__LIB_30__::func_206(Local_1001[1 /*26*/], 1, 0, 1, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				__LIB_30__::func_207(Local_1001[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[1 /*26*/], 28, true);
				func_396(Local_1001[2 /*26*/], 1120403456);
				func_370(Local_1001[2 /*26*/], 1, 2, 2, 0, 1);
				__LIB_30__::func_208(Local_1001[2 /*26*/], 3255.64f, -4692.65f, 111.84f, 3f, 0);
				__LIB_30__::func_206(Local_1001[2 /*26*/], 1, 1, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				__LIB_30__::func_207(Local_1001[2 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[2 /*26*/], 28, true);
				func_396(Local_1001[3 /*26*/], 1120403456);
				func_370(Local_1001[3 /*26*/], 1, 2, 2, 29, 1);
				__LIB_30__::func_208(Local_1001[3 /*26*/], 3263.23f, -4672.08f, 112.81f, 1.5f, 0);
				__LIB_30__::func_206(Local_1001[3 /*26*/], 1, 1, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				__LIB_30__::func_207(Local_1001[3 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[3 /*26*/], 28, true);
				func_396(Local_1001[4 /*26*/], 1120403456);
				func_370(Local_1001[4 /*26*/], 1, 2, 2, 29, 1);
				__LIB_30__::func_208(Local_1001[4 /*26*/], 3261.49f, -4691.44f, 112.03f, 3f, 0);
				__LIB_30__::func_206(Local_1001[4 /*26*/], 1, 0, 1, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				__LIB_30__::func_207(Local_1001[4 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[4 /*26*/], 28, true);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_1001[0 /*26*/]))
		{
			if (Local_1001[0 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1001[0 /*26*/].f_12 = 0;
					Local_1001[0 /*26*/].f_15 = 100;
					Local_1001[0 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1001[0 /*26*/].f_15)
			{
				case 100:
					if (Local_1001[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1001[0 /*26*/], 100f, 0);
						func_370(Local_1001[0 /*26*/], 1, 2, 1, 29, 1);
						__LIB_30__::func_210(Local_1001[0 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1001[0 /*26*/], 0.5f, 0f);
						__LIB_30__::func_206(Local_1001[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1001[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1001[1 /*26*/]))
		{
			if (Local_1001[1 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1001[1 /*26*/].f_12 = 0;
					Local_1001[1 /*26*/].f_15 = 100;
					Local_1001[1 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1001[1 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.5054f, -4658.069f, 116.68029f, 36f, 10f, 4f, false, true, 0))
					{
						Local_1001[1 /*26*/].f_12 = 0;
						Local_1001[1 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_1001[1 /*26*/].f_12 == 0)
					{
						func_396(Local_1001[1 /*26*/], 1120403456);
						func_370(Local_1001[1 /*26*/], 2, 2, 1, 50, 1);
						__LIB_30__::func_206(Local_1001[1 /*26*/], 1, 0, 1, 0, 7.5f, 0, 0f, 2.5f, 5.5f);
						__LIB_30__::func_207(Local_1001[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_1001[1 /*26*/].f_12 = 1;
					}
					break;
				case 100:
					if (Local_1001[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1001[1 /*26*/], 100f, 0);
						func_370(Local_1001[1 /*26*/], 1, 2, 1, 29, 1);
						__LIB_30__::func_210(Local_1001[1 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1001[1 /*26*/], 0.5f, 0f);
						__LIB_30__::func_206(Local_1001[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1001[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1001[2 /*26*/]))
		{
			if (Local_1001[2 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1001[2 /*26*/].f_12 = 0;
					Local_1001[2 /*26*/].f_15 = 100;
					Local_1001[2 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1001[2 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.5054f, -4658.069f, 116.68029f, 36f, 10f, 4f, false, true, 0))
					{
						Local_1001[2 /*26*/].f_12 = 0;
						Local_1001[2 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_1001[2 /*26*/].f_12 == 0)
					{
						func_396(Local_1001[2 /*26*/], 1120403456);
						func_370(Local_1001[2 /*26*/], 2, 2, 1, 50, 1);
						__LIB_30__::func_206(Local_1001[2 /*26*/], 1, 1, 0, 0, 9f, 0, 0f, 3f, 4f);
						__LIB_30__::func_207(Local_1001[2 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_1001[2 /*26*/].f_12 = 1;
					}
					break;
				case 100:
					if (Local_1001[2 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1001[2 /*26*/], 100f, 0);
						func_370(Local_1001[2 /*26*/], 1, 2, 1, 29, 1);
						__LIB_30__::func_210(Local_1001[2 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1001[2 /*26*/], 0.5f, 0f);
						__LIB_30__::func_206(Local_1001[2 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						__LIB_30__::func_212(Local_1001[2 /*26*/], &(Local_1001[2 /*26*/].f_10));
						Local_1001[2 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1001[3 /*26*/]))
		{
			if (Local_1001[3 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1001[3 /*26*/].f_12 = 0;
					Local_1001[3 /*26*/].f_15 = 100;
					Local_1001[3 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1001[3 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.5054f, -4658.069f, 116.68029f, 36f, 10f, 4f, false, true, 0) || (func_397(&Local_1000) + func_397(&Local_1002)) < 3)
					{
						Local_1001[3 /*26*/].f_12 = 0;
						Local_1001[3 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_1001[3 /*26*/].f_12 == 0)
					{
						func_383(Local_1001[3 /*26*/], 3263.08f, -4665.64f, 112.71f, 2f, 0, Local_61, PLAYER::PLAYER_PED_ID(), 0, 1, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
						func_370(Local_1001[3 /*26*/], 2, 2, 1, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[3 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[3 /*26*/], 51, true);
						__LIB_30__::func_206(Local_1001[3 /*26*/], 1, 0, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
						__LIB_30__::func_207(Local_1001[3 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_1001[3 /*26*/].f_12 = 1;
					}
					break;
				case 100:
					if (Local_1001[3 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1001[3 /*26*/], 100f, 0);
						func_370(Local_1001[3 /*26*/], 1, 2, 1, 29, 1);
						__LIB_30__::func_210(Local_1001[3 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1001[3 /*26*/], 0.5f, 0f);
						__LIB_30__::func_206(Local_1001[3 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1001[3 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1001[4 /*26*/]))
		{
			if (Local_1001[4 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1001[4 /*26*/].f_12 = 0;
					Local_1001[4 /*26*/].f_15 = 100;
					Local_1001[4 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1001[4 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.5054f, -4658.069f, 116.68029f, 36f, 10f, 4f, false, true, 0) || (func_397(&Local_1000) + func_397(&Local_1002)) < 3)
					{
						Local_1001[4 /*26*/].f_12 = 0;
						Local_1001[4 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_1001[4 /*26*/].f_12 == 0)
					{
						func_383(Local_1001[4 /*26*/], 3261.9f, -4680.61f, 111.95f, 2f, 0, Local_61, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
						func_370(Local_1001[4 /*26*/], 1, 2, 1, 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1001[4 /*26*/], 51, true);
						__LIB_30__::func_208(Local_1001[4 /*26*/], 3268.94f, -4663.72f, 112.88f, 4f, 0);
						__LIB_30__::func_206(Local_1001[4 /*26*/], 1, 0, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
						__LIB_30__::func_207(Local_1001[4 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_1001[4 /*26*/].f_12 = 1;
					}
					break;
				case 100:
					if (Local_1001[4 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1001[4 /*26*/], 100f, 0);
						func_370(Local_1001[4 /*26*/], 1, 2, 1, 29, 1);
						__LIB_30__::func_210(Local_1001[4 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1001[4 /*26*/], 0.5f, 0f);
						__LIB_30__::func_206(Local_1001[4 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1001[4 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_223(&Local_1001, 0, 1, 1);
	}
	func_364(&Local_1001, 1);
}

void func_396(int iParam0, float fParam1)//Position - 0x302BE
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

int func_397(int iParam0)//Position - 0x302F8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*26*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_398(int iParam0, int iParam1)//Position - 0x3033F
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_406(PLAYER::PLAYER_PED_ID(), 3264.4094f, -4611.5605f, 117.02251f, 30f, 3f, 2f))
			{
				Local_1004[0 /*26*/] = func_376(iLocal_55, 3266.25f, -4642.72f, 113.23f, 324.2408f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 0, 200, 0);
				Local_1004[1 /*26*/] = func_376(iLocal_55, 3274.37f, -4640.03f, 113.66f, 0f, iLocal_367, joaat("WEAPON_PISTOL"), 0, 0, 200, 0);
				func_374(&Local_1004, 0);
				func_383(Local_1004[0 /*26*/], 3271.2998f, -4631.0703f, 114.7037f, 2f, 0, Local_61, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_370(Local_1004[0 /*26*/], 2, 0, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1004[0 /*26*/], 51, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1004[0 /*26*/], 28, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1004[0 /*26*/], 50, true);
				__LIB_30__::func_207(Local_1004[0 /*26*/], 4, 50, joaat("FIRING_PATTERN_FULL_AUTO"));
				func_383(Local_1004[1 /*26*/], 3273.3306f, -4623.358f, 114.7698f, 2f, 0, Local_61, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_370(Local_1004[1 /*26*/], 2, 0, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1004[1 /*26*/], 51, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1004[1 /*26*/], 28, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1004[1 /*26*/], 50, true);
				__LIB_30__::func_207(Local_1004[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				Local_1000[0 /*26*/] = func_376(iLocal_55, 3285.61f, -4651.54f, 112.84f, 0f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 0, 200, 0);
				Local_1000[1 /*26*/] = func_376(iLocal_55, 3279.87f, -4671.24f, 112.83f, 0f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 1, 200, 0);
				func_374(&Local_1000, 0);
				func_396(Local_1000[0 /*26*/], 1120403456);
				func_370(Local_1000[0 /*26*/], 1, 0, 2, 29, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1000[0 /*26*/], 28, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1000[0 /*26*/], 51, true);
				__LIB_30__::func_210(Local_1000[0 /*26*/], 3282.732f, -4650.3535f, 112.839226f, 3278.9382f, -4650.3364f, 115.636375f, 2f, 0);
				__LIB_30__::func_206(Local_1000[0 /*26*/], 1, 1, 0, 1, 6f, 0, 0f, 3f, 1082130432);
				__LIB_30__::func_207(Local_1000[0 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				func_399(Local_1000[1 /*26*/], 3277.91f, -4670.24f, 112.87f, 1f, -1, 1, 1120403456, 1048576000, 0);
				func_370(Local_1000[1 /*26*/], 1, 0, 2, 0, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1000[1 /*26*/], 28, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1000[1 /*26*/], 51, true);
				__LIB_30__::func_208(Local_1000[1 /*26*/], 3277.91f, -4670.24f, 112.87f, 2f, 0);
				__LIB_30__::func_207(Local_1000[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_1004[0 /*26*/]))
		{
			if (Local_1004[0 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1004[0 /*26*/].f_12 = 0;
					Local_1004[0 /*26*/].f_15 = 100;
					Local_1004[0 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1004[0 /*26*/].f_15)
			{
				case 0:
					if (PED::IS_PED_IN_COMBAT(Local_1004[0 /*26*/], 0))
					{
						Local_1004[0 /*26*/].f_12 = 0;
						Local_1004[0 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_1004[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1004[0 /*26*/], 100f, 0);
						func_370(Local_1004[0 /*26*/], 3, 0, 1, 0, 1);
						__LIB_30__::func_207(Local_1004[0 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_1004[0 /*26*/].f_12 = 1;
					}
					break;
				case 100:
					if (Local_1004[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1004[0 /*26*/], 100f, 0);
						func_370(Local_1004[0 /*26*/], 1, 0, 1, 29, 1);
						__LIB_30__::func_210(Local_1004[0 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1004[0 /*26*/], 0.5f, 0f);
						Local_1004[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1004[1 /*26*/]))
		{
			if (Local_1004[1 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1004[1 /*26*/].f_12 = 0;
					Local_1004[1 /*26*/].f_15 = 100;
					Local_1004[1 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1004[1 /*26*/].f_15)
			{
				case 0:
					if (PED::IS_PED_IN_COMBAT(Local_1004[1 /*26*/], 0))
					{
						Local_1004[1 /*26*/].f_12 = 0;
						Local_1004[1 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_1004[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1004[1 /*26*/], 100f, 0);
						func_370(Local_1004[1 /*26*/], 3, 0, 1, 0, 1);
						__LIB_30__::func_207(Local_1004[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_1004[1 /*26*/].f_12 = 1;
					}
					break;
				case 100:
					if (Local_1004[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1004[1 /*26*/], 100f, 0);
						func_370(Local_1004[1 /*26*/], 1, 0, 1, 29, 1);
						__LIB_30__::func_210(Local_1004[1 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1004[1 /*26*/], 0.5f, 0f);
						Local_1004[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1000[0 /*26*/]))
		{
			if (Local_1000[0 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1000[0 /*26*/].f_12 = 0;
					Local_1000[0 /*26*/].f_15 = 100;
					Local_1000[0 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1000[0 /*26*/].f_15)
			{
				case 100:
					if (Local_1000[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1000[0 /*26*/], 100f, 0);
						func_370(Local_1000[0 /*26*/], 1, 2, 1, 29, 1);
						__LIB_30__::func_210(Local_1000[0 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1000[0 /*26*/], 0.5f, 0f);
						__LIB_30__::func_206(Local_1000[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1000[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1000[1 /*26*/]))
		{
			if (Local_1000[1 /*26*/].f_13 == 0)
			{
				if (iLocal_406 == 1)
				{
					Local_1000[1 /*26*/].f_12 = 0;
					Local_1000[1 /*26*/].f_15 = 100;
					Local_1000[1 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1000[1 /*26*/].f_15)
			{
				case 100:
					if (Local_1000[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1000[1 /*26*/], 100f, 0);
						func_370(Local_1000[1 /*26*/], 1, 2, 1, 29, 1);
						__LIB_30__::func_210(Local_1000[1 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
						__LIB_30__::func_209(Local_1000[1 /*26*/], 0.5f, 0f);
						__LIB_30__::func_206(Local_1000[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1000[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_223(&Local_1004, 0, 1, 1);
		func_223(&Local_1000, 0, 1, 1);
	}
	func_364(&Local_1004, 1);
	func_364(&Local_1000, 1);
}

void func_399(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)//Position - 0x30AC3
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		if (iParam4 == 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, fParam2, iParam3, fParam6, iParam7, 40000f);
		}
		else
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, Param1, fParam2, iParam3, 40000f, 0.5f);
		}
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam5, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_400(int iParam0, int iParam1, int iParam2)//Position - 0x30B39
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if ((func_406(PLAYER::PLAYER_PED_ID(), 3267.5603f, -4588.9224f, 118.00573f, 30f, 3.5f, 2f) || (iLocal_442 != 0 && __LIB_11__::func_307(26000, iLocal_442))) || func_397(&Local_998) <= iParam2)
			{
				Local_999[0 /*26*/] = func_376(iLocal_55, 3270.125f, -4642.845f, 113.1802f, 5.9782f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 1, 200, 0);
				Local_999[1 /*26*/] = func_376(iLocal_55, 3275.9019f, -4645.06f, 113.2832f, 359.8844f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), joaat("COMPONENT_AT_AR_FLSH"), 1, 200, 0);
				Local_999[2 /*26*/] = func_376(iLocal_55, 3268.3623f, -4654.751f, 113.0602f, 359.9476f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), 0, 1, 200, 0);
				func_374(&Local_999, 0);
				PED::SET_PED_SEEING_RANGE(Local_999[0 /*26*/], 20f);
				PED::SET_PED_SEEING_RANGE(Local_999[1 /*26*/], 15f);
				PED::SET_PED_SEEING_RANGE(Local_999[2 /*26*/], 20f);
				func_388(&(Local_999[0 /*26*/]), 1);
				func_388(&(Local_999[1 /*26*/]), 1);
				func_388(&(Local_999[2 /*26*/]), 1);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (iLocal_416 == 0)
		{
			func_386(&Local_999);
		}
		else if (iLocal_416 == 1)
		{
			if (iLocal_417 == 1)
			{
				func_386(&Local_999);
			}
		}
		if (!PED::IS_PED_INJURED(Local_999[0 /*26*/]))
		{
			switch (Local_999[0 /*26*/].f_18)
			{
				case 1:
					switch (Local_999[0 /*26*/].f_15)
					{
						case 0:
							Local_999[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
							Local_999[0 /*26*/].f_15++;
							break;
						case 1:
							if (Local_999[0 /*26*/].f_12 == 0)
							{
								if (__LIB_11__::func_307(5000, Local_999[0 /*26*/].f_16))
								{
									func_401(Local_999[0 /*26*/], 3276.9f, -4617.48f, 115.02f, 1.65f, 0, 3273.65f, -4590.99f, 117.19f, 0, 0, -1, 0, 0, 0, 0, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
									func_370(Local_999[0 /*26*/], 1, 2, 2, 29, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[0 /*26*/], 51, true);
									__LIB_30__::func_208(Local_999[0 /*26*/], 3276.9f, -4617.48f, 115.02f, 2.75f, 0);
									__LIB_30__::func_206(Local_999[0 /*26*/], 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
									__LIB_30__::func_207(Local_999[0 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
									Local_999[0 /*26*/].f_12 = 1;
								}
							}
							if (Local_999[0 /*26*/].f_13 == 0)
							{
								if (iLocal_406 == 1)
								{
									Local_999[0 /*26*/].f_12 = 0;
									Local_999[0 /*26*/].f_15 = 100;
									Local_999[0 /*26*/].f_13 = 1;
								}
							}
							break;
						case 100:
							if (Local_999[0 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_999[0 /*26*/], 100f, 0);
								func_370(Local_999[0 /*26*/], 1, 2, 1, 29, 1);
								__LIB_30__::func_210(Local_999[0 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
								__LIB_30__::func_209(Local_999[0 /*26*/], 0.8f, 0.25f);
								__LIB_30__::func_206(Local_999[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
								Local_999[0 /*26*/].f_12 = 1;
							}
							break;
					}
					if (PED::IS_PED_IN_COMBAT(Local_999[0 /*26*/], 0) || iLocal_416 == 1)
					{
						func_388(&(Local_999[0 /*26*/]), 11);
					}
					break;
				case 11:
					if (Local_999[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_999[0 /*26*/], 100f, 0);
						func_370(Local_999[0 /*26*/], 1, 2, 2, 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[0 /*26*/], 51, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[0 /*26*/], 28, true);
						__LIB_30__::func_208(Local_999[0 /*26*/], 3276.9f, -4617.48f, 115.02f, 2.75f, 0);
						__LIB_30__::func_206(Local_999[0 /*26*/], 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
						__LIB_30__::func_207(Local_999[0 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						__LIB_11__::func_168(Local_999[0 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_999[0 /*26*/], false);
						iLocal_416 = 1;
						Local_999[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_999[1 /*26*/]))
		{
			switch (Local_999[1 /*26*/].f_18)
			{
				case 1:
					switch (Local_999[1 /*26*/].f_15)
					{
						case 0:
							Local_999[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
							Local_999[1 /*26*/].f_15++;
							break;
						case 1:
							if (Local_999[1 /*26*/].f_12 == 0)
							{
								if (__LIB_11__::func_307(5000, Local_999[1 /*26*/].f_16))
								{
									func_401(Local_999[1 /*26*/], 3269.19f, -4627.51f, 114.85f, 1.65f, 0, 3273.65f, -4590.99f, 117.19f, 0, 0, -1, 0, 0, 0, 0, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
									func_370(Local_999[1 /*26*/], 1, 2, 2, 29, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[1 /*26*/], 51, true);
									__LIB_30__::func_208(Local_999[1 /*26*/], 3269.19f, -4627.51f, 114.85f, 3f, 0);
									__LIB_30__::func_206(Local_999[1 /*26*/], 1, 0, 1, 0, 7f, 0, 0f, 3f, 1082130432);
									__LIB_30__::func_207(Local_999[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
									Local_999[1 /*26*/].f_12 = 1;
								}
							}
							if (iLocal_379 == 1)
							{
								func_388(&(Local_999[1 /*26*/]), 9);
							}
							if (Local_999[1 /*26*/].f_13 == 0)
							{
								if (iLocal_406 == 1)
								{
									Local_999[1 /*26*/].f_12 = 0;
									Local_999[1 /*26*/].f_15 = 100;
									Local_999[1 /*26*/].f_13 = 1;
								}
							}
							break;
						case 100:
							if (Local_999[1 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_999[1 /*26*/], 100f, 0);
								func_370(Local_999[1 /*26*/], 1, 2, 0, 29, 1);
								__LIB_30__::func_210(Local_999[1 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
								__LIB_30__::func_209(Local_999[1 /*26*/], 0.9f, 0.1f);
								__LIB_30__::func_206(Local_999[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
								Local_999[1 /*26*/].f_12 = 1;
							}
							break;
					}
					if (PED::IS_PED_IN_COMBAT(Local_999[1 /*26*/], 0) || iLocal_416 == 1)
					{
						func_388(&(Local_999[1 /*26*/]), 11);
					}
					break;
				case 9:
					PED::SET_PED_RESET_FLAG(Local_999[1 /*26*/], 206, true);
					if (Local_999[1 /*26*/].f_12 == 0)
					{
						TASK::REQUEST_WAYPOINT_RECORDING("mic1_c");
						STREAMING::REQUEST_ANIM_DICT("missmic1ig_3_patrol");
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_c") && STREAMING::HAS_ANIM_DICT_LOADED("missmic1ig_3_patrol"))
						{
							if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("mic1_c", ENTITY::GET_ENTITY_COORDS(Local_999[1 /*26*/], true), &iVar0) && iVar0 > 30)
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_999[1 /*26*/], "mic1_c", 32, 1, -1);
							}
							else
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_999[1 /*26*/], "mic1_c", 0, 9, -1);
							}
							Local_999[1 /*26*/].f_25 = 0;
							Local_999[1 /*26*/].f_14 = 1;
							Local_999[1 /*26*/].f_12 = 1;
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_999[1 /*26*/]) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_999[1 /*26*/], "missmic1ig_3_patrol", "search_walk_fwd_b", 3))
					{
						if (Local_999[1 /*26*/].f_25 != 0)
						{
							if (Local_999[1 /*26*/].f_25 != TASK::GET_PED_WAYPOINT_PROGRESS(Local_999[1 /*26*/]))
							{
								if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("mic1_c", &iVar1))
								{
									if (Local_999[1 /*26*/].f_25 < iVar1)
									{
										if (TASK::WAYPOINT_RECORDING_GET_COORD("mic1_c", Local_999[1 /*26*/].f_25 + 3, &uVar2))
										{
											TASK::TASK_PLAY_ANIM(Local_999[1 /*26*/], "missmic1ig_3_patrol", "search_walk_fwd_b", 1.5f, -1.5f, -1, 114737, 0f, false, false, false);
											Local_999[1 /*26*/].f_25 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_999[1 /*26*/]);
										}
									}
								}
							}
						}
						else
						{
							Local_999[1 /*26*/].f_25 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_999[1 /*26*/]);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_999[1 /*26*/], -1689270312) == 7)
					{
						func_388(&(Local_999[1 /*26*/]), 9);
					}
					if (PED::IS_PED_IN_COMBAT(Local_999[1 /*26*/], 0) || iLocal_416 == 1)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_999[1 /*26*/]);
						func_388(&(Local_999[1 /*26*/]), 11);
					}
					break;
				case 11:
					if (Local_999[1 /*26*/].f_12 == 0)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_999[1 /*26*/]);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_999[1 /*26*/], 100f, 0);
						func_370(Local_999[1 /*26*/], 2, 1, 0, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[1 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[1 /*26*/], 28, true);
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_999[1 /*26*/], false);
						__LIB_30__::func_207(Local_999[1 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_999[1 /*26*/], false);
						__LIB_11__::func_168(Local_999[1 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
						iLocal_416 = 1;
						Local_999[1 /*26*/].f_14 = 0;
						Local_999[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_999[2 /*26*/]))
		{
			switch (Local_999[2 /*26*/].f_18)
			{
				case 1:
					switch (Local_999[2 /*26*/].f_15)
					{
						case 0:
							Local_999[2 /*26*/].f_16 = MISC::GET_GAME_TIMER();
							Local_999[2 /*26*/].f_15++;
							break;
						case 1:
							if (Local_999[2 /*26*/].f_12 == 0)
							{
								if (__LIB_11__::func_307(5000, Local_999[2 /*26*/].f_16))
								{
									func_401(Local_999[2 /*26*/], 3279.21f, -4628.83f, 114.92f, 1.65f, 0, 3273.65f, -4590.99f, 117.19f, 0, 0, -1, 0, 0, 0, 0, 0, 1000, joaat("FIRING_PATTERN_BURST_FIRE"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
									func_370(Local_999[2 /*26*/], 1, 2, 2, 29, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[2 /*26*/], 51, true);
									__LIB_30__::func_208(Local_999[2 /*26*/], 3279.21f, -4628.83f, 114.92f, 3f, 0);
									__LIB_30__::func_206(Local_999[2 /*26*/], 1, 0, 1, 0, 5f, 0, 0f, 2.5f, 1082130432);
									__LIB_30__::func_207(Local_999[2 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
									Local_999[2 /*26*/].f_12 = 1;
								}
							}
							if (Local_999[2 /*26*/].f_13 == 0)
							{
								if (iLocal_406 == 1)
								{
									Local_999[2 /*26*/].f_12 = 0;
									Local_999[2 /*26*/].f_15 = 100;
									Local_999[2 /*26*/].f_13 = 1;
								}
							}
							break;
						case 100:
							if (Local_999[2 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_999[2 /*26*/], 100f, 0);
								func_370(Local_999[2 /*26*/], 1, 2, 0, 29, 1);
								__LIB_30__::func_210(Local_999[2 /*26*/], 3266.4731f, -4689.624f, 111.11398f, 3226.1074f, -4686.1577f, 118.63715f, 22f, 0);
								__LIB_30__::func_209(Local_999[2 /*26*/], 0.9f, 0.1f);
								__LIB_30__::func_206(Local_999[2 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
								Local_999[2 /*26*/].f_12 = 1;
							}
							break;
					}
					if (PED::IS_PED_IN_COMBAT(Local_999[2 /*26*/], 0) || iLocal_416 == 1)
					{
						func_388(&(Local_999[2 /*26*/]), 11);
					}
					break;
				case 11:
					if (Local_999[2 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_999[2 /*26*/], 100f, 0);
						func_370(Local_999[2 /*26*/], 1, 2, 2, 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[2 /*26*/], 51, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_999[2 /*26*/], 28, true);
						__LIB_30__::func_208(Local_999[2 /*26*/], 3279.21f, -4628.83f, 114.92f, 3f, 0);
						__LIB_30__::func_206(Local_999[2 /*26*/], 1, 0, 1, 0, 5f, 0, 0f, 2.5f, 1082130432);
						__LIB_30__::func_207(Local_999[2 /*26*/], 4, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
						__LIB_11__::func_168(Local_999[2 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
						Local_999[2 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_223(&Local_999, 0, 1, 1);
	}
	func_364(&Local_999, 1);
}

void func_401(int iParam0, struct<3> Param1, float fParam2, int iParam3, struct<3> Param4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, float fParam16, float fParam17, bool bParam18, float fParam19, int iParam20)//Position - 0x31761
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		if (iParam3 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam5, false))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param4, fParam2, bParam6, fParam16, fParam17, bParam18, iParam20, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam5, true), fParam2, bParam6, fParam16, fParam17, bParam18, iParam20, 0, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
		}
		else if (iParam3 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam5, false))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param4, fParam2, bParam6, fParam16, fParam17, bParam18, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam5, fParam2, bParam6, fParam16, fParam17, bParam18, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
			}
		}
		if (iParam11 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam5, false))
			{
				if (iParam12 == 1)
				{
					TASK::TASK_SHOOT_AT_COORD(0, Param4, iParam13, iParam14);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_COORD(0, Param4, iParam13, false, false);
				}
			}
			else if (iParam12 == 1)
			{
				TASK::TASK_SHOOT_AT_ENTITY(0, iParam5, iParam13, iParam14);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam5, iParam13, false);
			}
		}
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param1, iParam7, bParam8, 1.5f, bParam9, bParam10, 0, true);
		if (iParam15 == 1)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		}
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam19, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	}
}

void func_402(int iParam0, int iParam1)//Position - 0x318BA
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_55))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_998[0 /*26*/]))
				{
					Local_998[0 /*26*/] = func_376(iLocal_55, 3265.49f, -4590.883f, 115.9832f, 94.4126f, iLocal_367, joaat("WEAPON_PISTOL"), 0, 0, 200, 0);
				}
				Local_998[1 /*26*/] = func_376(iLocal_55, 3262.19f, -4593.96f, 115.82f, 0f, iLocal_367, joaat("WEAPON_ASSAULTRIFLE"), joaat("COMPONENT_AT_AR_FLSH"), 0, 200, 0);
				func_374(&Local_998, 0);
				func_370(Local_998[0 /*26*/], 1, 0, 2, 0, 1);
				__LIB_30__::func_210(Local_998[0 /*26*/], 3264.837f, -4590.8335f, 115.38544f, 3265.9773f, -4590.835f, 118.23644f, 1f, 0);
				__LIB_30__::func_205(Local_998[0 /*26*/], &(Local_998[0 /*26*/].f_10), &(Local_1063[1 /*13*/]));
				__LIB_30__::func_206(Local_998[0 /*26*/], 1, 1, 0, 0, 5f, 0, 0f, -1f, 1082130432);
				__LIB_30__::func_207(Local_998[0 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 50, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_998[0 /*26*/], false);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_998[0 /*26*/], 100f, 0);
				Local_998[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
				func_383(Local_998[1 /*26*/], 3264.27f, -4585.25f, 117.07f, 2f, 0, 3256.55f, -4575.72f, 118.63f, PLAYER::PLAYER_PED_ID(), 0, 0, 0, 1750, joaat("FIRING_PATTERN_FULL_AUTO"), 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_370(Local_998[1 /*26*/], 2, 0, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 50, true);
				__LIB_30__::func_207(Local_998[1 /*26*/], 3, 100, joaat("FIRING_PATTERN_BURST_FIRE"));
				Local_998[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_998[0 /*26*/]))
		{
			switch (Local_998[0 /*26*/].f_15)
			{
				case 0:
					if (__LIB_11__::func_307(10000, Local_998[0 /*26*/].f_16) || PED::IS_PED_INJURED(Local_998[1 /*26*/]))
					{
						Local_998[0 /*26*/].f_12 = 0;
						Local_998[0 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_998[0 /*26*/].f_12 == 0)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 28, true);
						__LIB_30__::func_206(Local_998[0 /*26*/], 1, 1, 0, 0, 10f, 0, 0f, 1f, 5f);
						Local_998[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
						Local_998[0 /*26*/].f_12 = 1;
					}
					if (__LIB_11__::func_307(18000, Local_998[0 /*26*/].f_16))
					{
						Local_998[0 /*26*/].f_12 = 0;
						Local_998[0 /*26*/].f_15++;
					}
					break;
				case 2:
					if (Local_998[0 /*26*/].f_12 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_998[0 /*26*/], false);
						func_370(Local_998[0 /*26*/], 2, 0, 0, 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 50, true);
						__LIB_30__::func_206(Local_998[0 /*26*/], 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_998[0 /*26*/], 100f, 0);
						Local_998[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
						Local_998[0 /*26*/].f_12 = 1;
					}
					if (__LIB_11__::func_307(10000, Local_998[0 /*26*/].f_16))
					{
						Local_998[0 /*26*/].f_12 = 0;
						Local_998[0 /*26*/].f_15++;
					}
					break;
				case 3:
					if (Local_998[0 /*26*/].f_12 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_998[0 /*26*/], false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 13, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[0 /*26*/], 28, true);
						PED::SET_PED_COMBAT_RANGE(Local_998[0 /*26*/], 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_998[0 /*26*/], 2);
						__LIB_30__::func_207(Local_998[0 /*26*/], 3, 125, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_998[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_998[1 /*26*/]))
		{
			switch (Local_998[1 /*26*/].f_15)
			{
				case 0:
					if (__LIB_11__::func_307(6000, Local_998[1 /*26*/].f_16) || PED::IS_PED_IN_COMBAT(Local_998[1 /*26*/], 0))
					{
						Local_998[1 /*26*/].f_12 = 0;
						Local_998[1 /*26*/].f_15++;
					}
					break;
				case 1:
					if (Local_998[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_998[1 /*26*/], 100f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 28, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 37, true);
						func_370(Local_998[1 /*26*/], 2, 1, 0, 29, 1);
						__LIB_30__::func_209(Local_998[1 /*26*/], 1f, 1f);
						__LIB_30__::func_208(Local_998[1 /*26*/], 3267.71f, -4577.71f, 117.21f, 1.25f, 0);
						__LIB_30__::func_206(Local_998[1 /*26*/], 1, 0, 0, 0, 6f, 0, 0f, 2f, 1082130432);
						__LIB_30__::func_207(Local_998[1 /*26*/], 3, 125, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_998[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
						Local_998[1 /*26*/].f_12 = 1;
					}
					if (__LIB_11__::func_307(15000, Local_998[1 /*26*/].f_16))
					{
						Local_998[1 /*26*/].f_12 = 0;
						Local_998[1 /*26*/].f_15++;
					}
					break;
				case 2:
					if (Local_998[1 /*26*/].f_12 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_998[1 /*26*/], false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 50, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 13, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_998[1 /*26*/], 28, true);
						PED::SET_PED_COMBAT_RANGE(Local_998[1 /*26*/], 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_998[1 /*26*/], 2);
						__LIB_30__::func_207(Local_998[1 /*26*/], 3, 150, joaat("FIRING_PATTERN_BURST_FIRE"));
						Local_998[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_223(&Local_998, 0, 1, 1);
		if (func_350(&Local_998) == 2)
		{
			if (iLocal_442 == 0)
			{
				iLocal_442 = MISC::GET_GAME_TIMER();
			}
		}
	}
	func_364(&Local_998, 1);
}

void func_403(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)//Position - 0x31EA7
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_COVER(iParam0, false) || PED::IS_PED_DUCKING(iParam0))
		{
			iVar0 = 0;
			if (func_405(iParam0, &Local_1064, fParam4, &iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || (ENTITY::DOES_ENTITY_EXIST(*uParam1) && __LIB_11__::func_307(iParam3, *iParam2)))
				{
					*uParam1 = __LIB_30__::func_203(iParam0, iLocal_367, 0, 1);
					*iParam2 = MISC::GET_GAME_TIMER();
				}
				func_404(*uParam1, Local_1064[iVar0 /*7*/].f_3, Local_1064[iVar0 /*7*/].f_6, 100);
			}
			else
			{
				*uParam1 = 0;
				*iParam2 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_404(int iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x31F48
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SHOOTING(iParam0))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true))
				{
					iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 1);
					Var2 = { (Param1.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam2, fParam2)), (Param1.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam2, fParam2)), (Param1.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam2, fParam2)) };
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, true), Var2, iParam3, true, iVar0, iParam0, true, true, -1f);
				}
			}
		}
	}
}

int func_405(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x31FCA
{
	int iVar0;
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), *(uParam1[iVar0 /*7*/]), true) < fParam2)
			{
				*iParam3 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_406(int iParam0, struct<3> Param1, struct<3> Param2)//Position - 0x32019
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, Param2, false, true, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_407(char* sParam0, int iParam1, bool bParam2)//Position - 0x3204E
{
	if (!func_202(sParam0))
	{
		__LIB_0__::func_325(sParam0, iParam1, 1);
		func_204(sParam0, bParam2);
	}
}

int func_410(int iParam0)//Position - 0x3209D
{
	switch (*iParam0)
	{
		case 0:
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_WALK_TO_GRAVEYARD");
			AUDIO::STOP_AUDIO_SCENE("MI_1_TREV_FLY_TO_LUDENDORFF");
			if (iLocal_401 == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("mic_1_mcs_2", 28, 8);
				*iParam0 = 3;
			}
			else if (iLocal_400 == 1)
			{
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					__LIB_23__::func_169(PLAYER::PLAYER_PED_ID(), Local_92.f_2, Local_92.f_5, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_91.f_0))
				{
					TASK::CLEAR_PED_TASKS(Local_91.f_0);
					__LIB_23__::func_169(Local_91.f_0, Local_91.f_2, Local_91.f_5, 0, 0, 0);
				}
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		case 1:
			if (iLocal_400 == 1)
			{
				__LIB_8__::func_611(0);
				func_427("MH1_SETTING");
				if (SYSTEM::TIMERA() > 5000)
				{
					*iParam0++;
				}
			}
			break;
		case 2:
			__LIB_8__::func_611(0);
			func_427("MH1_SETTING");
			func_426(0);
			func_425(1);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
			if (func_424(1) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")))
			{
				STREAMING::IPL_GROUP_SWAP_START("prologue03_grv_cov", "prologue03_grv_dug");
				*iParam0++;
			}
			break;
		case 3:
			if (iLocal_401 == 1)
			{
				if (__LIB_20__::func_679("mic_1_mcs_2", 28))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_91.f_0, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_91.f_0, "Trevor", 1, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_138.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_138.f_0, false))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_138.f_0))
							{
								ENTITY::DETACH_ENTITY(Local_138.f_0, true, true);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_138.f_0, "MIC1_Shovel", 1, Local_138.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_138.f_0, "MIC1_Shovel", 2, Local_138.f_1, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_84.f_0, "Dead_Brad", 2, joaat("CS_BradCadaver"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_141.f_0, "MIC1_PickAxe", 2, Local_141.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_144.f_0, "Coffin", 2, Local_144.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_998[0 /*26*/], "Chinese_gunman", 2, iLocal_55, 0);
					iLocal_472 = __LIB_20__::func_765(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 0, 0, 0, 0, 0, 0, 0);
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), joaat("COMPONENT_AT_PI_SUPP_02")))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(iLocal_472, joaat("COMPONENT_AT_PI_SUPP_02"));
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_472, "FBI_Agent_1_Gun", 0, 0, 0);
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					iLocal_391 = 1;
					*iParam0++;
				}
			}
			else if (iLocal_400 == 1)
			{
				__LIB_8__::func_611(0);
				func_427("MH1_SETTING");
				if ((__LIB_20__::func_679("mic_1_mcs_2", 1) && func_424(1)) && STREAMING::IPL_GROUP_SWAP_IS_READY())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_91.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_91.f_0, "Trevor", 1, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_91.f_0, "Trevor", 2, Local_91.f_6, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_84.f_0, "Dead_Brad", 2, joaat("CS_BradCadaver"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_138.f_0, "MIC1_Shovel", 2, Local_138.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_141.f_0, "MIC1_PickAxe", 2, Local_141.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_144.f_0, "Coffin", 2, Local_144.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_998[0 /*26*/], "Chinese_gunman", 2, iLocal_55, 0);
					iLocal_472 = __LIB_20__::func_765(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 0, 0, 0, 0, 0, 0, 0);
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), joaat("COMPONENT_AT_PI_SUPP_02")))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(iLocal_472, joaat("COMPONENT_AT_PI_SUPP_02"));
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_472, "FBI_Agent_1_Gun", 0, 0, 0);
					HUD::CLEAR_HELP(true);
					HUD::CLEAR_PRINTS();
					__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(256);
					*iParam0++;
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_42__::func_700("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				__LIB_38__::func_130("Trevor", __LIB_19__::func_811(2), 23);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_gunman", 2, 1, 0, 0);
			}
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::STOP_GAMEPLAY_HINT(true);
				MISC::CLEAR_AREA(Local_92.f_2, 250f, true, false, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_92.f_2, 250f, false, false, false, false, false, false, 0);
				if (CAM::DOES_CAM_EXIST(iLocal_469))
				{
					CAM::SET_CAM_ACTIVE(iLocal_469, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_469, false);
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
				{
					VEHICLE::DELETE_VEHICLE(&Local_94);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_93.f_0, Local_93.f_2, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_93.f_0, Local_93.f_5);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, false, true, false);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_93.f_0, true);
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_93.f_0, false);
						ENTITY::SET_ENTITY_HEALTH(Local_93.f_0, ENTITY::GET_ENTITY_HEALTH(Local_93.f_0) + 500, 0);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_93.f_0) + 500f));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0) + 500f));
						FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 2.5f);
					}
				}
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_GRAVE_CS");
				CLOCK::SET_CLOCK_TIME(0, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 0f, 4);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			break;
		case 5:
			if (iLocal_400 == 1)
			{
				if (iLocal_391 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 24634)
					{
						STREAMING::REQUEST_IPL("prologue_grv_torch");
						STREAMING::IPL_GROUP_SWAP_FINISH();
						iLocal_391 = 1;
						if (iLocal_490 == 0)
						{
							if (!PED::IS_PED_INJURED(Local_91.f_0))
							{
								PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(Local_91.f_0);
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 1, 0.59f, 0.72f, 25f, 1f, 1f, 0, true, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 1, 0.4f, 0.44f, 30f, 1f, 1f, 1, true, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 3, 0.4f, 0.12f, 30f, 0.6f, 1f, 1, true, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 2, 0.48f, 0.12f, 30f, 0.6f, 1f, 1, true, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 0, 0.644f, 0.407f, 30f, 1f, 1f, 6, true, "basic_dirt_cloth");
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 0, 0.86f, 0.632f, 90f, 1f, 1f, 6, true, "basic_dirt_cloth");
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 4, 0.775f, 0.55f, 0f, 1f, 1f, 0, true, "basic_dirt_cloth");
								PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 5, 0.415f, 0.75f, 36f, 1f, 1f, 1, true, "basic_dirt_cloth");
							}
							iLocal_490 = 1;
						}
					}
				}
			}
			if (iLocal_489 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 173000)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.621f, 0.755f, 55.084f, 0.01f, 1f, 1, true, "bruise");
							iLocal_489 = 1;
						}
					}
				}
			}
			if (iLocal_409 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 160000)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_SHOOTOUT_START"))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > 170500)
							{
								if (iLocal_409 == 0)
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_SHOOTOUT_START"))
									{
										iLocal_409 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Trevor", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
					{
						Local_91.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_84.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Dead_Brad", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dead_Brad", 0)))
					{
						Local_84.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dead_Brad", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_138.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("MIC1_Shovel", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_Shovel", 0)))
					{
						Local_138.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_Shovel", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_141.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("MIC1_PickAxe", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_PickAxe", 0)))
					{
						Local_141.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_PickAxe", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_144.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Coffin", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Coffin", 0)))
					{
						Local_144.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Coffin", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_998[0 /*26*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Chinese_gunman", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_gunman", 0)))
					{
						Local_998[0 /*26*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_gunman", 0));
						func_413(Local_998[0 /*26*/], iLocal_367, joaat("WEAPON_PISTOL"), 0, 200, 0, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dead_Brad", 0))
			{
				if (!PED::IS_PED_INJURED(Local_84.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_481))
						{
							iLocal_481 = PED::CREATE_SYNCHRONIZED_SCENE(3258.899f, -4574.09f, 115.35f, 173.88f, 51.48f, 5.04f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_84.f_0, iLocal_481, "dead", "dead_g", 1000f, -1000f, 4, 145, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_84.f_0, false, false);
							AUDIO::STOP_PED_SPEAKING(Local_84.f_0, true);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_84.f_0, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_84.f_0, true);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
				{
					PED::DELETE_PED(&Local_91);
				}
				if (!OBJECT::DOES_PICKUP_EXIST(iLocal_478))
				{
					iLocal_475 = 0;
					MISC::SET_BIT(&iLocal_475, 1);
					MISC::SET_BIT(&iLocal_475, 8);
					MISC::SET_BIT(&iLocal_475, 4);
					iLocal_478 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PISTOL"), 3258.789f, -4575.306f, 117.257f, -88.2f, 65.88f, 0f, iLocal_475, -1, 2, true, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					__LIB_23__::func_169(PLAYER::PLAYER_PED_ID(), 3256.5776f, -4575.252f, 117.267f, 267.6326f, 0, 0, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_1063[0 /*13*/].f_1, -1, true, 0f, true, true, Local_1063[0 /*13*/], false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FBI_Agent_1_Gun", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_472, PLAYER::PLAYER_PED_ID());
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-45f);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-72.37355f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chinese_gunman", 0))
			{
				if (!PED::IS_PED_INJURED(Local_998[0 /*26*/]))
				{
					__LIB_23__::func_169(Local_998[0 /*26*/], Local_1063[1 /*13*/].f_1, Local_1063[1 /*13*/].f_4, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_998[0 /*26*/], joaat("WEAPON_PISTOL"), true);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_998[0 /*26*/], Local_1063[1 /*13*/].f_1, -1, false, 0f, true, true, Local_1063[1 /*13*/], false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_998[0 /*26*/], false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MIC1_Shovel", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_138.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_138.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_138.f_0, Local_138.f_2, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_138.f_0, Local_138.f_5, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_138.f_0, true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MIC1_PickAxe", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_141.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_141.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_141.f_0, Local_141.f_2, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_141.f_0, Local_141.f_5, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_141.f_0, true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Coffin", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_144.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_144.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_144.f_0, Local_144.f_2, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_144.f_0, Local_144.f_5, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_144.f_0, true);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PISTOL")) && iLocal_397 == 1) && func_424(0))
				{
					if (iLocal_384 == 1)
					{
						if (iLocal_489 == 0)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.621f, 0.755f, 55.084f, 0.01f, 1f, 1, true, "bruise");
								iLocal_489 = 1;
							}
						}
						SYSTEM::WAIT(2000);
					}
					if (iLocal_384 == 1)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
								{
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-45f);
								}
							}
						}
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
					Local_92.f_10 = MISC::GET_GAME_TIMER();
					if (iLocal_384 == 0)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MIC1_GAMEPLAY_STARTS");
					}
					else
					{
						AUDIO::CANCEL_MUSIC_EVENT("MIC1_SHOOTOUT_START");
						AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ARGUE_CS_SKIP");
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
					{
						VEHICLE::DELETE_VEHICLE(&Local_94);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_472))
					{
						OBJECT::DELETE_OBJECT(&iLocal_472);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
					{
						PED::DELETE_PED(&Local_91);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					RECORDING::REPLAY_STOP_EVENT();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
					return 1;
				}
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("dead");
				WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PISTOL"), 31, 0);
				if (iLocal_397 == 0)
				{
					func_412(&Local_1063, Local_59);
					func_411(&Local_1064);
					iLocal_397 = 1;
				}
				if (iLocal_384 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
						iLocal_384 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

void func_411(var uParam0)//Position - 0x32DBC
{
	*(uParam0[0 /*7*/]) = { 3256.42f, -4575.27f, 117.15f };
	(uParam0[0 /*7*/])->f_3 = { 3256.39f, -4575.69f, 118.25f };
	(uParam0[0 /*7*/])->f_6 = 0.35f;
	*(uParam0[1 /*7*/]) = { 3254.712f, -4575.186f, 117.1567f };
	(uParam0[1 /*7*/])->f_3 = { 3254.68f, -4576.13f, 118.15f };
	(uParam0[1 /*7*/])->f_6 = 0.35f;
	*(uParam0[2 /*7*/]) = { 3252.7468f, -4575.3774f, 117.1567f };
	(uParam0[2 /*7*/])->f_3 = { 3252.76f, -4576.09f, 118.15f };
	(uParam0[2 /*7*/])->f_6 = 0.35f;
}

void func_412(var uParam0, struct<3> Param1)//Position - 0x32E72
{
	int iVar0;
	(uParam0[0 /*13*/])->f_1 = { 3256.5776f, -4575.252f, 117.267f };
	(uParam0[0 /*13*/])->f_4 = 180f;
	(uParam0[0 /*13*/])->f_5 = 3;
	(uParam0[0 /*13*/])->f_6 = 0;
	(uParam0[0 /*13*/])->f_7 = 2;
	(uParam0[0 /*13*/])->f_9 = 0;
	(uParam0[0 /*13*/])->f_10 = 0;
	(uParam0[1 /*13*/])->f_1 = { 3265.5886f, -4590.6963f, 116.0538f };
	(uParam0[1 /*13*/])->f_4 = 356.8507f;
	(uParam0[1 /*13*/])->f_5 = 1;
	(uParam0[1 /*13*/])->f_6 = 2;
	(uParam0[1 /*13*/])->f_7 = 2;
	(uParam0[1 /*13*/])->f_9 = 0;
	(uParam0[1 /*13*/])->f_10 = 0;
	(uParam0[2 /*13*/])->f_1 = { 3252.2168f, -4600.8184f, 115.6129f };
	(uParam0[2 /*13*/])->f_4 = 358.2709f;
	(uParam0[2 /*13*/])->f_5 = 0;
	(uParam0[2 /*13*/])->f_6 = 2;
	(uParam0[2 /*13*/])->f_7 = 2;
	(uParam0[2 /*13*/])->f_9 = 1;
	(uParam0[2 /*13*/])->f_10 = 0;
	(uParam0[3 /*13*/])->f_1 = { 3263.4075f, -4671.8623f, 112.9176f };
	(uParam0[3 /*13*/])->f_4 = 343.1592f;
	(uParam0[3 /*13*/])->f_5 = 3;
	(uParam0[3 /*13*/])->f_6 = 2;
	(uParam0[3 /*13*/])->f_7 = 2;
	(uParam0[3 /*13*/])->f_9 = 1;
	(uParam0[3 /*13*/])->f_10 = 0;
	(uParam0[4 /*13*/])->f_1 = { 3259.5498f, -4670.3813f, 113.0985f };
	(uParam0[4 /*13*/])->f_4 = 333.0004f;
	(uParam0[4 /*13*/])->f_5 = 0;
	(uParam0[4 /*13*/])->f_6 = 2;
	(uParam0[4 /*13*/])->f_7 = 2;
	(uParam0[4 /*13*/])->f_9 = 1;
	(uParam0[4 /*13*/])->f_10 = 0;
	(uParam0[5 /*13*/])->f_1 = { 3284.39f, -4619.99f, 115.01f };
	(uParam0[5 /*13*/])->f_4 = 333.0004f;
	(uParam0[5 /*13*/])->f_5 = 0;
	(uParam0[5 /*13*/])->f_6 = 2;
	(uParam0[5 /*13*/])->f_7 = 0;
	(uParam0[5 /*13*/])->f_9 = 1;
	(uParam0[5 /*13*/])->f_10 = 1;
	(uParam0[6 /*13*/])->f_1 = { 3281.66f, -4627.2f, 114.88f };
	(uParam0[6 /*13*/])->f_4 = 333.0004f;
	(uParam0[6 /*13*/])->f_5 = 0;
	(uParam0[6 /*13*/])->f_6 = 2;
	(uParam0[6 /*13*/])->f_7 = 0;
	(uParam0[6 /*13*/])->f_9 = 1;
	(uParam0[6 /*13*/])->f_10 = 1;
	(uParam0[7 /*13*/])->f_1 = { 3266.56f, -4624.87f, 115.22f };
	(uParam0[7 /*13*/])->f_4 = 333.0004f;
	(uParam0[7 /*13*/])->f_5 = 0;
	(uParam0[7 /*13*/])->f_6 = 2;
	(uParam0[7 /*13*/])->f_7 = 0;
	(uParam0[7 /*13*/])->f_9 = 1;
	(uParam0[7 /*13*/])->f_10 = 1;
	(uParam0[8 /*13*/])->f_1 = { 3272.55f, -4634.51f, 114.69f };
	(uParam0[8 /*13*/])->f_4 = 333.0004f;
	(uParam0[8 /*13*/])->f_5 = 0;
	(uParam0[8 /*13*/])->f_6 = 2;
	(uParam0[8 /*13*/])->f_7 = 0;
	(uParam0[8 /*13*/])->f_9 = 1;
	(uParam0[8 /*13*/])->f_10 = 1;
	(uParam0[9 /*13*/])->f_1 = { 3275.6057f, -4655.529f, 113.092f };
	(uParam0[9 /*13*/])->f_4 = 0f;
	(uParam0[9 /*13*/])->f_5 = 3;
	(uParam0[9 /*13*/])->f_6 = 0;
	(uParam0[9 /*13*/])->f_7 = 2;
	(uParam0[9 /*13*/])->f_9 = 1;
	(uParam0[9 /*13*/])->f_10 = 0;
	(uParam0[10 /*13*/])->f_1 = { 3270.976f, -4639.229f, 113.7132f };
	(uParam0[10 /*13*/])->f_4 = 0f;
	(uParam0[10 /*13*/])->f_5 = 0;
	(uParam0[10 /*13*/])->f_6 = 2;
	(uParam0[10 /*13*/])->f_7 = 2;
	(uParam0[10 /*13*/])->f_9 = 1;
	(uParam0[10 /*13*/])->f_10 = 0;
	(uParam0[11 /*13*/])->f_1 = { 3274.28f, -4639.303f, 113.7452f };
	(uParam0[11 /*13*/])->f_4 = 0f;
	(uParam0[11 /*13*/])->f_5 = 1;
	(uParam0[11 /*13*/])->f_6 = 2;
	(uParam0[11 /*13*/])->f_7 = 2;
	(uParam0[11 /*13*/])->f_9 = 1;
	(uParam0[11 /*13*/])->f_10 = 0;
	(uParam0[12 /*13*/])->f_1 = { 3269.2097f, -4627.741f, 114.8999f };
	(uParam0[12 /*13*/])->f_4 = 0f;
	(uParam0[12 /*13*/])->f_5 = 0;
	(uParam0[12 /*13*/])->f_6 = 0;
	(uParam0[12 /*13*/])->f_7 = 2;
	(uParam0[12 /*13*/])->f_9 = 1;
	(uParam0[12 /*13*/])->f_10 = 0;
	(uParam0[13 /*13*/])->f_1 = { 3275.9355f, -4617.3945f, 115.1056f };
	(uParam0[13 /*13*/])->f_4 = 0f;
	(uParam0[13 /*13*/])->f_5 = 1;
	(uParam0[13 /*13*/])->f_6 = 0;
	(uParam0[13 /*13*/])->f_7 = 2;
	(uParam0[13 /*13*/])->f_9 = 1;
	(uParam0[13 /*13*/])->f_10 = 0;
	(uParam0[14 /*13*/])->f_1 = { 3278.8743f, -4629.7856f, 115.0547f };
	(uParam0[14 /*13*/])->f_4 = 89.5197f;
	(uParam0[14 /*13*/])->f_5 = 0;
	(uParam0[14 /*13*/])->f_6 = 0;
	(uParam0[14 /*13*/])->f_7 = 2;
	(uParam0[14 /*13*/])->f_9 = 1;
	(uParam0[14 /*13*/])->f_10 = 0;
	(uParam0[15 /*13*/])->f_1 = { 3255.8416f, -4685.825f, 111.9065f };
	(uParam0[15 /*13*/])->f_4 = 346.24f;
	(uParam0[15 /*13*/])->f_5 = 0;
	(uParam0[15 /*13*/])->f_6 = 0;
	(uParam0[15 /*13*/])->f_7 = 2;
	(uParam0[15 /*13*/])->f_9 = 1;
	(uParam0[15 /*13*/])->f_10 = 0;
	(uParam0[16 /*13*/])->f_1 = { 3256.8f, -4692.0205f, 111.884f };
	(uParam0[16 /*13*/])->f_4 = 310.2977f;
	(uParam0[16 /*13*/])->f_5 = 1;
	(uParam0[16 /*13*/])->f_6 = 2;
	(uParam0[16 /*13*/])->f_7 = 0;
	(uParam0[16 /*13*/])->f_9 = 1;
	(uParam0[16 /*13*/])->f_10 = 0;
	(uParam0[17 /*13*/])->f_1 = { 3281.5632f, -4665.985f, 113.1895f };
	(uParam0[17 /*13*/])->f_4 = 0f;
	(uParam0[17 /*13*/])->f_5 = 1;
	(uParam0[17 /*13*/])->f_6 = 2;
	(uParam0[17 /*13*/])->f_7 = 2;
	(uParam0[17 /*13*/])->f_9 = 1;
	(uParam0[17 /*13*/])->f_10 = 0;
	(uParam0[18 /*13*/])->f_1 = { 3251.704f, -4684.279f, 112.0217f };
	(uParam0[18 /*13*/])->f_4 = 336.7272f;
	(uParam0[18 /*13*/])->f_5 = 1;
	(uParam0[18 /*13*/])->f_6 = 2;
	(uParam0[18 /*13*/])->f_7 = 5;
	(uParam0[18 /*13*/])->f_9 = 0;
	(uParam0[18 /*13*/])->f_10 = 1;
	(uParam0[19 /*13*/])->f_1 = { 3262.1086f, -4691.1997f, 112.0502f };
	(uParam0[19 /*13*/])->f_4 = 34.5997f;
	(uParam0[19 /*13*/])->f_5 = 0;
	(uParam0[19 /*13*/])->f_6 = 0;
	(uParam0[19 /*13*/])->f_7 = 0;
	(uParam0[19 /*13*/])->f_9 = 1;
	(uParam0[19 /*13*/])->f_10 = 0;
	(uParam0[20 /*13*/])->f_1 = { 3281.5667f, -4649.844f, 113.5098f };
	(uParam0[20 /*13*/])->f_4 = 0f;
	(uParam0[20 /*13*/])->f_5 = 1;
	(uParam0[20 /*13*/])->f_6 = 2;
	(uParam0[20 /*13*/])->f_7 = 2;
	(uParam0[20 /*13*/])->f_9 = 1;
	(uParam0[20 /*13*/])->f_10 = 0;
	(uParam0[21 /*13*/])->f_1 = { 3275.0962f, -4659.9f, 113.0035f };
	(uParam0[21 /*13*/])->f_4 = 0f;
	(uParam0[21 /*13*/])->f_5 = 3;
	(uParam0[21 /*13*/])->f_6 = 0;
	(uParam0[21 /*13*/])->f_7 = 2;
	(uParam0[21 /*13*/])->f_9 = 1;
	(uParam0[21 /*13*/])->f_10 = 0;
	(uParam0[22 /*13*/])->f_1 = { 3265.5234f, -4657.7856f, 113.0917f };
	(uParam0[22 /*13*/])->f_4 = 0f;
	(uParam0[22 /*13*/])->f_5 = 3;
	(uParam0[22 /*13*/])->f_6 = 0;
	(uParam0[22 /*13*/])->f_7 = 2;
	(uParam0[22 /*13*/])->f_9 = 1;
	(uParam0[22 /*13*/])->f_10 = 0;
	(uParam0[23 /*13*/])->f_1 = { 3246.5354f, -4679.597f, 112.1638f };
	(uParam0[23 /*13*/])->f_4 = 341.1975f;
	(uParam0[23 /*13*/])->f_5 = 1;
	(uParam0[23 /*13*/])->f_6 = 2;
	(uParam0[23 /*13*/])->f_7 = 2;
	(uParam0[23 /*13*/])->f_9 = 1;
	(uParam0[23 /*13*/])->f_10 = 0;
	(uParam0[24 /*13*/])->f_1 = { 3248.0078f, -4680.0767f, 112.3925f };
	(uParam0[24 /*13*/])->f_4 = 337.8813f;
	(uParam0[24 /*13*/])->f_5 = 1;
	(uParam0[24 /*13*/])->f_6 = 2;
	(uParam0[24 /*13*/])->f_7 = 2;
	(uParam0[24 /*13*/])->f_9 = 1;
	(uParam0[24 /*13*/])->f_10 = 0;
	(uParam0[25 /*13*/])->f_1 = { 3240.0486f, -4665.305f, 114.2898f };
	(uParam0[25 /*13*/])->f_4 = 0f;
	(uParam0[25 /*13*/])->f_5 = 1;
	(uParam0[25 /*13*/])->f_6 = 2;
	(uParam0[25 /*13*/])->f_7 = 2;
	(uParam0[25 /*13*/])->f_9 = 1;
	(uParam0[25 /*13*/])->f_10 = 0;
	(uParam0[26 /*13*/])->f_1 = { 3231.799f, -4681.494f, 111.9197f };
	(uParam0[26 /*13*/])->f_4 = 272.3667f;
	(uParam0[26 /*13*/])->f_5 = 0;
	(uParam0[26 /*13*/])->f_6 = 2;
	(uParam0[26 /*13*/])->f_7 = 2;
	(uParam0[26 /*13*/])->f_9 = 1;
	(uParam0[26 /*13*/])->f_10 = 0;
	(uParam0[27 /*13*/])->f_1 = { 3258.3953f, -4608.144f, 115.452f };
	(uParam0[27 /*13*/])->f_4 = 4.3189f;
	(uParam0[27 /*13*/])->f_5 = 0;
	(uParam0[27 /*13*/])->f_6 = 2;
	(uParam0[27 /*13*/])->f_7 = 2;
	(uParam0[27 /*13*/])->f_9 = 1;
	(uParam0[27 /*13*/])->f_10 = 0;
	(uParam0[28 /*13*/])->f_1 = { 3266.514f, -4616.439f, 115.048f };
	(uParam0[28 /*13*/])->f_4 = 3.0096f;
	(uParam0[28 /*13*/])->f_5 = 3;
	(uParam0[28 /*13*/])->f_6 = 2;
	(uParam0[28 /*13*/])->f_7 = 2;
	(uParam0[28 /*13*/])->f_9 = 1;
	(uParam0[28 /*13*/])->f_10 = 0;
	(uParam0[29 /*13*/])->f_1 = { 3213.1648f, -4715.6494f, 111.8129f };
	(uParam0[29 /*13*/])->f_4 = 295.1623f;
	(uParam0[29 /*13*/])->f_5 = 3;
	(uParam0[29 /*13*/])->f_6 = 2;
	(uParam0[29 /*13*/])->f_7 = 2;
	(uParam0[29 /*13*/])->f_9 = 0;
	(uParam0[29 /*13*/])->f_10 = 0;
	(uParam0[30 /*13*/])->f_1 = { 3265.426f, -4586.963f, 117.0842f };
	(uParam0[30 /*13*/])->f_4 = 180f;
	(uParam0[30 /*13*/])->f_5 = 3;
	(uParam0[30 /*13*/])->f_6 = 0;
	(uParam0[30 /*13*/])->f_7 = 2;
	(uParam0[30 /*13*/])->f_9 = 0;
	(uParam0[30 /*13*/])->f_10 = 0;
	(uParam0[31 /*13*/])->f_1 = { 3262.45f, -4586.9f, 117.11f };
	(uParam0[31 /*13*/])->f_4 = 180f;
	(uParam0[31 /*13*/])->f_5 = 3;
	(uParam0[31 /*13*/])->f_6 = 0;
	(uParam0[31 /*13*/])->f_7 = 2;
	(uParam0[31 /*13*/])->f_9 = 0;
	(uParam0[31 /*13*/])->f_10 = 0;
	(uParam0[32 /*13*/])->f_1 = { 3274.123f, -4635.4863f, 114.7559f };
	(uParam0[32 /*13*/])->f_4 = 180f;
	(uParam0[32 /*13*/])->f_5 = 3;
	(uParam0[32 /*13*/])->f_6 = 0;
	(uParam0[32 /*13*/])->f_7 = 2;
	(uParam0[32 /*13*/])->f_9 = 0;
	(uParam0[32 /*13*/])->f_10 = 0;
	(uParam0[33 /*13*/])->f_1 = { 3271.0203f, -4635.462f, 114.6817f };
	(uParam0[33 /*13*/])->f_4 = 180f;
	(uParam0[33 /*13*/])->f_5 = 3;
	(uParam0[33 /*13*/])->f_6 = 0;
	(uParam0[33 /*13*/])->f_7 = 2;
	(uParam0[33 /*13*/])->f_9 = 0;
	(uParam0[33 /*13*/])->f_10 = 0;
	(uParam0[34 /*13*/])->f_1 = { 3260.0383f, -4669.2715f, 112.8813f };
	(uParam0[34 /*13*/])->f_4 = 161.3189f;
	(uParam0[34 /*13*/])->f_5 = 1;
	(uParam0[34 /*13*/])->f_6 = 2;
	(uParam0[34 /*13*/])->f_7 = 2;
	(uParam0[34 /*13*/])->f_9 = 0;
	(uParam0[34 /*13*/])->f_10 = 0;
	(uParam0[35 /*13*/])->f_1 = { 3233.0288f, -4681.5645f, 112.2276f };
	(uParam0[35 /*13*/])->f_4 = 92.2093f;
	(uParam0[35 /*13*/])->f_5 = 1;
	(uParam0[35 /*13*/])->f_6 = 2;
	(uParam0[35 /*13*/])->f_7 = 2;
	(uParam0[35 /*13*/])->f_9 = 0;
	(uParam0[35 /*13*/])->f_10 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar0 /*13*/])->f_10 == 0)
		{
			(*uParam0)[iVar0 /*13*/] = TASK::ADD_COVER_POINT((uParam0[iVar0 /*13*/])->f_1, (uParam0[iVar0 /*13*/])->f_4, (uParam0[iVar0 /*13*/])->f_5, (uParam0[iVar0 /*13*/])->f_6, (uParam0[iVar0 /*13*/])->f_7, false);
		}
		(uParam0[iVar0 /*13*/])->f_8 = SYSTEM::VDIST2(Param1, (uParam0[iVar0 /*13*/])->f_1);
		(uParam0[iVar0 /*13*/])->f_11 = 0;
		(uParam0[iVar0 /*13*/])->f_12 = 0;
		iVar0++;
	}
}

void func_413(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x33A4C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam2, -1, false, true);
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, true, iParam2);
			PED::SET_PED_MAX_HEALTH(iParam0, iParam4);
			ENTITY::SET_ENTITY_HEALTH(iParam0, iParam4, 0);
			PED::ADD_ARMOUR_TO_PED(iParam0, iParam5);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			PED::SET_PED_AS_ENEMY(iParam0, true);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam0, bParam3);
			PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, bParam6);
			__LIB_0__::func_477(iParam0, 0);
		}
	}
}

int func_424(int iParam0)//Position - 0x36B1C
{
	if ((iParam0 == 1 && STREAMING::IS_IPL_ACTIVE("prologue03_grv_cov")) || ((iParam0 == 0 && STREAMING::IS_IPL_ACTIVE("prologue03_grv_dug")) && STREAMING::IS_IPL_ACTIVE("prologue_grv_torch")))
	{
		return 1;
	}
	else
	{
		func_425(iParam0);
	}
	return 0;
}

void func_425(int iParam0)//Position - 0x36B6A
{
	if (iParam0 == 1)
	{
		STREAMING::REQUEST_IPL("prologue03_grv_cov");
	}
	else
	{
		STREAMING::REQUEST_IPL("prologue03_grv_dug");
		STREAMING::REQUEST_IPL("prologue_grv_torch");
	}
}

void func_426(int iParam0)//Position - 0x36B93
{
	if (iParam0 == 1)
	{
		STREAMING::REMOVE_IPL("prologue03_grv_cov");
	}
	else
	{
		STREAMING::REMOVE_IPL("prologue03_grv_dug");
		STREAMING::REMOVE_IPL("prologue_grv_torch");
	}
}

void func_427(char* sParam0)//Position - 0x36BBC
{
	float fVar0;
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		HUD::SET_TEXT_SCALE(0.675f, 0.675f);
		fVar0 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.675f, 0);
	}
	else
	{
		HUD::SET_TEXT_SCALE(0.45f, 0.45f);
		fVar0 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.45f, 0);
	}
	HUD::SET_TEXT_CENTRE(true);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.5f - (fVar0 / 2f)), 0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	__LIB_6__::func_842();
}

int func_437(int iParam0)//Position - 0x36E8C
{
	MISC::SET_BIT(&(Local_187.f_13), 20);
	if (CLOCK::GET_CLOCK_HOURS() < 22 || (CLOCK::GET_CLOCK_HOURS() == 23 && CLOCK::GET_CLOCK_MINUTES() == 59))
	{
		CLOCK::SET_CLOCK_TIME(0, 0, 0);
	}
	func_341();
	func_671();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_58, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 75f)
	{
		CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("mic_1_mcs_2", 28, 8);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_42__::func_700("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_91.f_0, false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", Local_91.f_0, __LIB_19__::func_811(2));
				}
			}
			else
			{
				__LIB_38__::func_130("Trevor", __LIB_19__::func_811(2), 23);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_gunman", 2, 1, 0, 0);
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("mic_1_mcs_2") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	switch (*iParam0)
	{
		case 0:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_WALK_TO_GRAVEYARD"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					AUDIO::STOP_STREAM();
				}
				AUDIO::START_AUDIO_SCENE("MI_1_MIC_WALK_TO_GRAVEYARD");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
			{
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_92.f_1))
			{
				Local_92.f_1 = HUD::ADD_BLIP_FOR_COORD(Local_58);
			}
			if (!func_202("MCH1_GRAVE"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_92.f_1))
				{
					func_407("MCH1_GRAVE", 7500, 1);
				}
			}
			if (!func_202("MCH1_GBTLC"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_92.f_1))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f, false, true, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_93.f_2, true) > 25f)
						{
							HUD::CLEAR_PRINTS();
							func_407("MCH1_GBTLC", 7500, 1);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_91.f_0, false))
				{
					STREAMING::REQUEST_PTFX_ASSET();
					PED::SET_PED_RESET_FLAG(Local_91.f_0, 227, true);
					if (!ENTITY::DOES_ENTITY_EXIST(Local_138.f_0))
					{
						func_670(&Local_138, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_138.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_138.f_0, false))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_138.f_0))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_138.f_0, Local_91.f_0, PED::GET_PED_BONE_INDEX(Local_91.f_0, 28422), Local_61, Local_61, false, false, false, false, 2, true, 0);
							}
						}
					}
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_138.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_138.f_0, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0) && !ENTITY::IS_ENTITY_DEAD(Local_91.f_0, false))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_138.f_0, Local_91.f_0))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_91.f_0, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_91.f_0, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor") <= 0.1f)
										{
											iLocal_487 = 0;
										}
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_91.f_0, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor") >= 0.445f)
										{
											if (iLocal_487 == 0)
											{
												if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("cs_mich1_spade_dirt_throw", Local_91.f_0, Local_65, Local_66, 1f, false, false, false))
												{
													iLocal_487 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_91.f_0, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", 3))
					{
						STREAMING::REQUEST_ANIM_DICT("missmic1leadinoutmic_1_mcs_2");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1leadinoutmic_1_mcs_2"))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_91.f_0, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", Local_58, 0f, 0f, 137.88f, 1000f, -8f, -1, 4105, 0f, 2, 0);
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3240.2627f, -4574.43f, 115.94192f, 3294.2268f, -4574.135f, 120.94192f, 31f, false, true, 0))
					{
						iLocal_433 = 1;
						if (iLocal_432 == 0)
						{
							iLocal_432 = MISC::GET_GAME_TIMER();
						}
					}
					if (iLocal_433 == 1)
					{
						func_669();
						__LIB_11__::func_315(1, 0);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_91.f_0, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", 3))
						{
							if (__LIB_11__::func_307(3000, iLocal_432))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_91.f_0, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor") > 0.75f)
								{
									iLocal_401 = 1;
									STREAMING::REMOVE_ANIM_DICT("missmic1leadinoutmic_1_mcs_2");
									if (HUD::DOES_BLIP_EXIST(Local_92.f_1))
									{
										HUD::REMOVE_BLIP(&(Local_92.f_1));
									}
									AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
									AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_WALK_TO_GRAVEYARD");
									return 1;
								}
							}
						}
					}
				}
			}
			else if (func_466(&Local_91, 1, joaat("PLAYER"), 0, 2, 0, 0, 0, 0, -1, 1))
			{
				ENTITY::SET_ENTITY_LOD_DIST(Local_91.f_0, 150);
				PED::SET_PED_LOD_MULTIPLIER(Local_91.f_0, 5f);
				AUDIO::STOP_PED_SPEAKING(Local_91.f_0, true);
				PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 169, true);
				PED::SET_PED_CONFIG_FLAG(Local_91.f_0, 208, true);
				func_438(Local_91.f_0, 12, 23, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_91.f_0, true);
				if (iLocal_490 == 0)
				{
					PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(Local_91.f_0);
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 1, 0.59f, 0.72f, 25f, 1f, 1f, 0, true, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 1, 0.4f, 0.44f, 30f, 1f, 1f, 1, true, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 3, 0.4f, 0.12f, 30f, 0.6f, 1f, 1, true, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 2, 0.48f, 0.12f, 30f, 0.6f, 1f, 1, true, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 0, 0.644f, 0.407f, 30f, 1f, 1f, 6, true, "basic_dirt_cloth");
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 0, 0.86f, 0.632f, 90f, 1f, 1f, 6, true, "basic_dirt_cloth");
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 4, 0.775f, 0.55f, 0f, 1f, 1f, 0, true, "basic_dirt_cloth");
					PED::APPLY_PED_DAMAGE_DECAL(Local_91.f_0, 5, 0.415f, 0.75f, 36f, 1f, 1f, 1, true, "basic_dirt_cloth");
					iLocal_490 = 1;
				}
				iLocal_509[13] = 1;
			}
			break;
	}
	return 0;
}

int func_438(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3741D
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
										func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_447(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_446(iParam0, iVar10, &iVar4, 1))
							{
								func_438(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_438(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_438(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_438(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_438(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_438(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_438(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_438(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_446(iParam0, iVar10, &iVar4, 0))
		{
			func_438(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_439(iParam0, iVar10, &iVar4))
		{
			func_438(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_439(int iParam0, int iParam1, int iParam2)//Position - 0x37C2D
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_440(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0, int iParam1, int iParam2)//Position - 0x37CB9
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
				if (!func_440(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_440(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_440(iParam0, 14, iVar4))
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
			if (!func_440(iParam0, 14, uVar8[iVar7]))
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

int func_446(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x38740
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_440(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_447(int iParam0, int iParam1, int iParam2)//Position - 0x387D6
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
				if (func_440(iParam0, iParam1, iVar0))
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
				if (func_440(iParam0, iParam1, iVar1))
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

int func_466(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x3AB28
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					else if (__LIB_27__::func_933(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						func_666(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_6__::func_825(*iParam0, 0, 0);
						}
					}
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, false))
					{
						if (iParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_6, iParam9, true, true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						else if (__LIB_34__::func_941(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							func_666(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = __LIB_6__::func_825(*iParam0, 0, 0);
							}
						}
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_662(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					func_666(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = __LIB_6__::func_825(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, false))
				{
					if (func_467(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_666(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_6__::func_825(*iParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_467(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3AD07
{
	int iVar0;
	if (__LIB_0__::func_317(iParam1))
	{
		iVar0 = __LIB_19__::func_811(iParam1);
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
				__LIB_32__::func_735(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_654(*iParam0);
				__LIB_32__::func_730(*iParam0, 1, 0);
				__LIB_20__::func_721(*iParam0);
				__LIB_20__::func_720(*iParam0);
				func_469(*iParam0, bParam6);
				__LIB_0__::func_349(*iParam0);
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

int func_469(int iParam0, bool bParam1)//Position - 0x3AE32
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_20__::func_509(iParam0);
	if (__LIB_10__::func_3(iVar0))
	{
		__LIB_10__::func_2(iVar0, 0);
		func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_473(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_6__::func_843(iParam0))
		{
			__LIB_10__::func_2(iVar0, 0);
			func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_473(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_440(iParam0, 3, 169))
					{
						func_438(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_440(iParam0, 12, 6))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 20))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 21))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 22))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 11))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 12, 10))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 12, 50))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 14, 59))
			{
				func_438(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_440(iParam0, 8, 22))
			{
				func_438(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_440(iParam0, 12, 14))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_440(iParam0, 12, 13))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 14))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 15))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 4))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 12, 3))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 14, 82))
			{
				func_438(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_440(iParam0, 8, 76))
			{
				func_438(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_440(iParam0, 12, 1))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_440(iParam0, 12, 12))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 12, 15))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_440(iParam0, 3, 71))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 17))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 18))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 19))
			{
				if (!__LIB_38__::func_122(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_440(iParam0, 12, 7))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 12, 6))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_440(iParam0, 14, 88))
			{
				func_438(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_440(iParam0, 8, 17))
			{
				func_438(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_440(iParam0, 12, 11))
			{
				func_438(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_473(int iParam0, int iParam1)//Position - 0x3B5C3
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__::func_509(iParam0);
		if (__LIB_0__::func_317(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_447(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_10__::func_1(iVar0);
					func_480(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_26__::func_544(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_32__::func_797();
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

void func_480(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x3BC4C
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
		iVar0 = __LIB_20__::func_509(iParam0);
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
			if (func_446(iParam0, iVar1, &iVar2, 0))
			{
				func_438(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_439(iParam0, iVar1, &iVar2))
			{
				func_438(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_644(iParam0);
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
			func_483(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_350(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_483(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_6__::func_766(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_483(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_483(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3C12B
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
			func_605(iVar5, iParam1, iParam2, 1);
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
						func_605(iVar5, 10, 0, 1);
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
									func_605(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_483(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_605(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iVar0, func_604(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_18__::func_180(iVar5, 0) };
					func_483(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_598(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_605(iVar5, 14, uVar18[iVar1], 1);
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
							func_483(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_605(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_483(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			__LIB_39__::func_435(iParam0);
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
						func_483(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_483(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_589(iVar5, iVar24, iVar23, iVar25);
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
							func_483(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_483(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_483(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_483(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_483(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_483(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_483(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_598(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_589(iVar5, func_604(iParam0, 8, -1), iParam2, func_604(iParam0, 4, -1));
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
				func_526(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_6__::func_795(iParam0, 11);
				iVar45 = __LIB_6__::func_795(iParam0, 4);
				iVar46 = func_589(iVar5, iParam2, iVar44, iVar45);
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
			func_598(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_6__::func_795(iParam0, 11);
			if (__LIB_6__::func_808(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_6__::func_807(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_31__::func_927(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_589(iVar5, iParam2, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
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
						func_483(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_483(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_35__::func_544(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_589(iVar5, __LIB_6__::func_795(iParam0, 8), __LIB_6__::func_795(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_589(iVar5, iVar58, iVar57, iParam2);
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
						func_483(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_589(iVar5, iVar3, __LIB_6__::func_795(iParam0, 11), __LIB_6__::func_795(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_483(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_503(iParam0, 9, iVar63))
						{
							func_483(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_483(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_483(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_483(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_604(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_604(iParam0, 11, -1);
				}
				if (__LIB_6__::func_802(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_6__::func_801(iVar5, 4, iVar65, -1))
					{
						if (__LIB_6__::func_800(iVar5, 4, iVar65, &uVar67))
						{
							func_483(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_6__::func_801(iVar5, 4, iVar65, -1))
				{
					if (__LIB_6__::func_799(iVar5, 4, iVar65, &uVar67))
					{
						func_483(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_483(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_483(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_483(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_483(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_483(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_6__::func_758(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_483(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_483(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_6__::func_758(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_483(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				__LIB_39__::func_435(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_483(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_40__::func_849(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_483(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_484(iParam0, &uVar4))
		{
			func_483(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_483(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_483(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_483(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_254(iVar5, func_604(iParam0, 3, -1), iVar10);
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
				func_483(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_484(int iParam0, var uParam1)//Position - 0x3DFD5
{
	int iVar0;
	int iVar1;
	*uParam1 = func_604(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_503(iParam0, iVar1, iVar0))
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

int func_503(int iParam0, int iParam1, int iParam2)//Position - 0x42291
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
				if (!func_503(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_503(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_544(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_503(iParam0, 14, iVar6))
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
			if (!func_503(iParam0, 14, uVar11[iVar10]))
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
						return func_503(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_6__::func_799(iVar0, 4, iParam2, &uVar18))
				{
					return func_503(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_526(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x48FA7
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
	func_527(iParam0, bParam3, 0, -1);
}

void func_527(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x48FF4
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
		bVar3 = func_569(iParam0, 0);
		bVar4 = __LIB_31__::func_887(iParam0);
		bVar5 = func_560(iParam0, iParam3);
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

int func_560(int iParam0, int iParam1)//Position - 0x585C7
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
				iVar3 = func_604(iParam0, 11, -1);
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
				iVar5 = func_604(iParam0, 11, -1);
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

int func_569(int iParam0, bool bParam1)//Position - 0x58A25
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
							iVar2 = __LIB_18__::func_431(joaat("MP_M_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
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
						iVar3 = func_604(iParam0, 11, -1);
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
						iVar5 = func_604(iParam0, 8, -1);
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
							iVar7 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
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
						iVar8 = func_604(iParam0, 11, -1);
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
							iVar10 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_18__::func_431(joaat("MP_F_Freemode_01"), 11, func_604(iParam0, 11, -1), 0);
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
						iVar12 = func_604(iParam0, 8, -1);
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

int func_589(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x618B8
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
					iVar0 = func_589(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_589(iParam0, -99, __LIB_6__::func_807(iParam0, iParam1, 0), iParam3);
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

void func_598(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x65ED8
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_644(iParam0))
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

int func_604(int iParam0, int iParam1, int iParam2)//Position - 0x66189
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
				if (func_503(iParam0, iParam1, iVar0))
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
				if (func_503(iParam0, iParam1, iVar1))
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

void func_605(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6622A
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
							func_605(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_605(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_605(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_6__::func_758(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_605(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_605(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_605(iParam0, 8, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_605(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_35__::func_544(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_6__::func_811(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_605(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_605(iParam0, 7, __LIB_6__::func_758(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_6__::func_807(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_605(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_644(int iParam0)//Position - 0x7F0BE
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
				iVar1 = func_604(iParam0, 11, -1);
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
				iVar3 = func_604(iParam0, 11, -1);
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

void func_654(int iParam0)//Position - 0x7F930
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_20__::func_509(iParam0);
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
		func_480(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::func_365(49))
				{
					iVar1 = func_447(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_655(__LIB_19__::func_811(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_365(44))
				{
					iVar1 = func_447(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_447(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_655(__LIB_19__::func_811(0), 3, 70, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 3, 71, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 3, 72, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 3, 73, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 3, 74, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 3, 75, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 4, 41, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 4, 42, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 4, 43, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 4, 44, 1, 0, 0, 0);
					func_655(__LIB_19__::func_811(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_447(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_10__::func_1(iVar0);
				func_480(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_655(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x7FB8D
{
	__LIB_38__::func_82(iParam0, iParam1, iParam2, bParam3);
	func_658(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_364(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_38__::func_81(iParam0, iParam1, iParam2, 0);
	}
}

int func_658(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x7FD48
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
								func_658(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_38__::func_82(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_18__::func_247(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_658(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_658(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_658(iParam0, 14, iVar5, 1, 0);
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
								func_658(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_658(iParam0, 14, 17, 1, 0);
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

int func_662(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8032F
{
	int iVar0;
	if (__LIB_0__::func_317(iParam1))
	{
		iVar0 = __LIB_19__::func_811(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_32__::func_735(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_654(*iParam0);
			__LIB_32__::func_730(*iParam0, 1, 0);
			__LIB_20__::func_721(*iParam0);
			__LIB_20__::func_720(*iParam0);
			func_469(*iParam0, bParam6);
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

void func_666(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x804BA
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, bParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, bParam3);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, bParam4);
			PED::SET_PED_AS_ENEMY(iParam0, bParam5);
			if (iParam1 != joaat("NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			}
		}
	}
}

void func_669()//Position - 0x8065A
{
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_GAMEPLAY_HINT_FOV(30f);
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_91.f_0, 0f, 0f, 1f, true, -1, 2500, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(0.01f);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.025f);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.4f);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-4f);
	}
}

int func_670(int iParam0, bool bParam1)//Position - 0x806AE
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_1))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_1, iParam0->f_2, true, true, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_2, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_5, 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, bParam1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_671()//Position - 0x80727
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3198.785f, -4801.354f, 115.809845f, 5f, 5f, 5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3187.9243f, -4756.939f, 115.63997f, 20f, 46f, 5f, false, true, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
			}
		}
	}
}

int func_672(int iParam0)//Position - 0x807A6
{
	int iVar0;
	MISC::SET_BIT(&(Local_187.f_13), 20);
	if (CAM::DOES_CAM_EXIST(iLocal_469))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	if (CLOCK::GET_CLOCK_HOURS() < 22 || (CLOCK::GET_CLOCK_HOURS() == 23 && CLOCK::GET_CLOCK_MINUTES() == 59))
	{
		CLOCK::SET_CLOCK_TIME(0, 0, 0);
	}
	func_341();
	func_684(&Local_451);
	func_681(&iLocal_493);
	func_680(&(Local_134.f_10));
	func_671();
	switch (*iParam0)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DRIVE_TO_GRAVEYARD"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
			{
				AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, -1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_93.f_0, -20f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			func_679(&uLocal_524);
			__LIB_8__::func_770(1);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			*iParam0++;
			break;
		case 1:
			if (!CAM::DOES_CAM_EXIST(iLocal_469))
			{
				iLocal_469 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_469, 5442.244f, -5127.124f, 78.32706f, -0.382159f, -0.560862f, 56.809986f, 41.604355f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_469, "HAND_SHAKE", 0.1f);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_469))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				*iParam0++;
			}
			break;
		case 2:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START(5442.24f, -5127.12f, 78.24f, -0.84f, 0.55f, -0.01f, 128f, 0);
				iLocal_431 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_11__::func_307(10000, iLocal_431))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				*iParam0++;
			}
			break;
		case 3:
			if (CAM::DOES_CAM_EXIST(iLocal_469))
			{
				if (!CAM::IS_CAM_RENDERING(iLocal_469))
				{
					CAM::SET_CAM_PARAMS(iLocal_469, 5442.244f, -5127.124f, 78.32706f, -0.382159f, -0.560862f, 56.809986f, 41.604355f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_469, 5442.244f, -5127.124f, 78.086525f, -0.382159f, -0.560862f, 56.809986f, 41.604355f, 6000, 0, 0, 2);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 15f, 4);
				}
			}
			MISC::CLEAR_AREA_OF_VEHICLES(5433.34f, -5122.94f, 77.07f, 60f, false, false, false, false, false, false, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_371(Local_93, sLocal_54, 0.75f, 0, 3750f, 0, 0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("MIC1_DRIVE_TO_GRAVEYARD");
			iLocal_492 = 1;
			*iParam0++;
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_93.f_0))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_93.f_0) >= 6300f)
						{
							if (CAM::DOES_CAM_EXIST(iLocal_469))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									SYSTEM::SETTIMERA(0);
									SYSTEM::SETTIMERB(0);
									iLocal_404 = 0;
									iLocal_403 = 1;
									CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, 1);
								}
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
								CAM::SET_CAM_ACTIVE(iLocal_469, false);
								CAM::RENDER_SCRIPT_CAMS(false, true, 2750, true, false, 0);
								CAM::DESTROY_CAM(iLocal_469, false);
								HUD::DISPLAY_RADAR(true);
								HUD::DISPLAY_HUD(true);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							Local_93.f_7 = 4;
							__LIB_8__::func_770(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		case 5:
			CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
			if (CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
				if (iLocal_403 == 1)
				{
					if (iLocal_404 == 0)
					{
						if (SYSTEM::TIMERA() > 2500)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_404 = 1;
						}
					}
				}
			}
			else if (iLocal_403 == 1)
			{
				CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(1, 4);
				iLocal_403 = 0;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_93.f_0))
			{
				if (iLocal_398 == 0)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_93.f_0) >= 10250f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_93.f_0);
					}
					if (__LIB_30__::func_200(Local_93.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_93.f_0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						iLocal_398 = 1;
					}
				}
			}
			__LIB_32__::func_811(&Local_187, Local_92.f_7, 0.25f, 0.25f, 2f, 1, Local_93.f_0, &Local_451, "CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 1, 0, 1, -1);
			func_675(PLAYER::PLAYER_PED_ID());
			AUDIO::PREPARE_MUSIC_EVENT("MIC1_ARRIVED_CHURCH");
			if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_93.f_0, 3219.9766f, -4706.303f, 112.87656f, 18f, 20f, 2f, false, true, 0))
				{
					if (!CAM::DOES_CAM_EXIST(iLocal_469))
					{
						iLocal_469 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
						CAM::SET_CAM_PARAMS(iLocal_469, 3212.396f, -4728.6436f, 113.433495f, 7.027314f, 0.084961f, -27.492634f, 33.441017f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_469, 3213.254f, -4726.9946f, 113.662704f, 7.027314f, 0.084961f, -27.492634f, 33.441017f, 10000, 3, 3, 2);
						CAM::SHAKE_CAM(iLocal_469, "HAND_SHAKE", 0.1f);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 15f, 4);
					}
					if (CAM::DOES_CAM_EXIST(iLocal_469))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						func_371(Local_93, sLocal_54, 1f, 0, 1500f, 0, 0, 1);
						__LIB_8__::func_770(1);
						__LIB_6__::func_833();
						__LIB_11__::func_862();
						*iParam0++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
						{
							MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 5f, 0);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 5f);
						}
					}
					MISC::CLEAR_AREA(3223.31f, -4703.96f, 111.83f, 10f, true, false, false, false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_93.f_0, true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_93.f_0, true);
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, -1);
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3236.0076f, -4682.933f, 113.85805f, 36f, 16f, 3f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_93.f_0, 3236.0076f, -4682.933f, 113.85805f, 36f, 16f, 3f, false, true, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
					{
					}
				}
				__LIB_6__::func_833();
				*iParam0 = 9;
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_93.f_7, sLocal_54);
			break;
		case 6:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
			{
				if (iLocal_408 == 0)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_93.f_0) > 3750f)
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
							{
								iLocal_408 = 1;
							}
						}
					}
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_93.f_0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_93.f_0) >= 8200f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_93.f_0);
						ENTITY::SET_ENTITY_COORDS(Local_93.f_0, 3212.0027f, -4689.323f, 111.6762f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_93.f_0, 225.1631f);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_93.f_0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
						Local_92.f_10 = MISC::GET_GAME_TIMER();
						*iParam0++;
					}
				}
			}
			break;
		case 7:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
			{
				if (__LIB_11__::func_307(1000, Local_92.f_10))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
					{
						if (CAM::DOES_CAM_EXIST(iLocal_469))
						{
							CAM::SET_CAM_PARAMS(iLocal_469, 3209.036f, -4688.7793f, 113.42358f, -1.887575f, 0f, -81.36583f, 54.46621f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iLocal_469, 3209.036f, -4688.7793f, 113.42358f, -1.887575f, 0f, -78.470566f, 54.46621f, 3000, 3, 3, 2);
							CAM::SHAKE_CAM(iLocal_469, "HAND_SHAKE", 0.1f);
						}
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_LEAVE_VEHICLE(0, Local_93.f_0, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, 3255.48f, -4685.06f, 113.11f, 0);
						TASK::TASK_LOOK_AT_COORD(0, 3255.48f, -4685.06f, 113.11f, 3000, 0, 2);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						__LIB_11__::func_715();
						Local_92.f_10 = MISC::GET_GAME_TIMER();
						iLocal_404 = 0;
						*iParam0++;
					}
				}
			}
			break;
		case 8:
			if (CAM::DOES_CAM_EXIST(iLocal_469))
			{
				if (__LIB_11__::func_307(1500, Local_92.f_10))
				{
					*iParam0++;
				}
				else if (__LIB_11__::func_307(1200, Local_92.f_10))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						if (iLocal_404 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
							iLocal_404 = 1;
						}
					}
				}
			}
			break;
		case 9:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_93.f_0, false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_20__::func_615(&Local_187, 0);
			__LIB_8__::func_770(0);
			iLocal_401 = 1;
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
			if (!AUDIO::IS_STREAM_PLAYING())
			{
				AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
			}
			*iParam0++;
			break;
		case 10:
			if (CAM::DOES_CAM_EXIST(iLocal_469))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(45f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				}
				HUD::DISPLAY_HUD(true);
				HUD::DISPLAY_RADAR(true);
				CAM::DESTROY_CAM(iLocal_469, false);
				CAM::DESTROY_ALL_CAMS(false);
			}
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_134.f_1))
			{
				PED::DELETE_PED(&(Local_134.f_1));
				VEHICLE::DELETE_MISSION_TRAIN(&Local_134);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_437))
			{
				AUDIO::STOP_SOUND(iLocal_437);
			}
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
			return 1;
			break;
	}
	return 0;
}

void func_675(int iParam0)//Position - 0x811CC
{
	struct<8> Var0;
	float fVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_676(iParam0, &uLocal_524, &Var0))
		{
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var0, true);
			if (fVar1 > Var0.f_7)
			{
				if (Var0.f_5 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_187.f_5) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_405 = 1;
					}
				}
				else
				{
					iLocal_405 = 1;
				}
			}
			else if (fVar1 > Var0.f_6)
			{
				if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
				{
					if (!func_202("MCH1_GBRLC"))
					{
						if (__LIB_18__::func_197(&Local_187, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						func_407("MCH1_GBRLC", 7500, 1);
					}
				}
			}
		}
	}
}

int func_676(int iParam0, var uParam1, var uParam2)//Position - 0x81278
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	iVar0 = 0;
	fVar1 = 1000f;
	fVar2 = 0f;
	iVar3 = -1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if ((uParam1[iVar0 /*8*/])->f_4 == 0)
			{
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), *(uParam1[iVar0 /*8*/]), true);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
					(uParam1[iVar0 /*8*/])->f_3 = 1;
					if (iVar0 > 0)
					{
						if ((uParam1[(iVar0 - 1) /*8*/])->f_3 == 1)
						{
							(uParam1[(iVar0 - 1) /*8*/])->f_3 = 0;
							(uParam1[(iVar0 - 1) /*8*/])->f_4 = 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	*uParam2 = { *(uParam1[iVar3 /*8*/]) };
	return 1;
}

void func_679(var uParam0)//Position - 0x813BA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(uParam0[iVar0 /*8*/])->f_3 = 0;
		(uParam0[iVar0 /*8*/])->f_4 = 0;
		(uParam0[iVar0 /*8*/])->f_5 = 0;
		(uParam0[iVar0 /*8*/])->f_6 = 30f;
		(uParam0[iVar0 /*8*/])->f_7 = 65f;
		iVar0++;
	}
	*(uParam0[0 /*8*/]) = { 5389.937f, -5119.8447f, 77.2221f };
	(uParam0[0 /*8*/])->f_6 = 60f;
	(uParam0[0 /*8*/])->f_7 = 75f;
	*(uParam0[1 /*8*/]) = { 5345.9414f, -5119.0063f, 77.553f };
	*(uParam0[2 /*8*/]) = { 5296.898f, -5117.0566f, 77.7141f };
	*(uParam0[3 /*8*/]) = { 5247.0103f, -5118.9624f, 78.1801f };
	*(uParam0[4 /*8*/]) = { 5204.3687f, -5109.839f, 80.1127f };
	*(uParam0[5 /*8*/]) = { 5159.1436f, -5099.8164f, 82.9601f };
	*(uParam0[6 /*8*/]) = { 5108.6816f, -5096.338f, 85.0854f };
	*(uParam0[7 /*8*/]) = { 5062.918f, -5100.3804f, 86.1269f };
	*(uParam0[8 /*8*/]) = { 5015.0063f, -5099.804f, 87.3856f };
	*(uParam0[9 /*8*/]) = { 4969.421f, -5094.081f, 89.0202f };
	*(uParam0[10 /*8*/]) = { 4919.649f, -5074.7393f, 92.9304f };
	*(uParam0[11 /*8*/]) = { 4870.7705f, -5078.6123f, 93.9856f };
	*(uParam0[12 /*8*/]) = { 4832.3604f, -5084.3633f, 99.454f };
	*(uParam0[13 /*8*/]) = { 4785.051f, -5086.8774f, 105.334f };
	*(uParam0[14 /*8*/]) = { 4738.4673f, -5080.2607f, 105.8345f };
	*(uParam0[15 /*8*/]) = { 4686.5527f, -5076.7695f, 104.6976f };
	*(uParam0[16 /*8*/]) = { 4647.9287f, -5081.8486f, 104.5225f };
	*(uParam0[17 /*8*/]) = { 4602.0444f, -5065.8916f, 107.5456f };
	*(uParam0[18 /*8*/]) = { 4565.0513f, -5069.597f, 109.665f };
	*(uParam0[19 /*8*/]) = { 4536.746f, -5087.0767f, 109.574f };
	*(uParam0[20 /*8*/]) = { 4509.1904f, -5097.9014f, 109.6287f };
	*(uParam0[21 /*8*/]) = { 4456.6255f, -5103.6973f, 110.0983f };
	*(uParam0[22 /*8*/]) = { 4424.9f, -5098.854f, 109.9986f };
	*(uParam0[23 /*8*/]) = { 4396.002f, -5093.2793f, 110.1756f };
	*(uParam0[24 /*8*/]) = { 4353.397f, -5084.6865f, 110.0036f };
	*(uParam0[25 /*8*/]) = { 4320.799f, -5079.9478f, 109.9395f };
	*(uParam0[26 /*8*/]) = { 4291.6147f, -5075.3096f, 109.5563f };
	*(uParam0[27 /*8*/]) = { 4267.072f, -5073.1646f, 109.808f };
	*(uParam0[28 /*8*/]) = { 4226.2935f, -5070.5444f, 109.8746f };
	*(uParam0[29 /*8*/]) = { 4174.7227f, -5066.477f, 109.3556f };
	*(uParam0[30 /*8*/]) = { 4143.577f, -5062.4434f, 108.4574f };
	*(uParam0[31 /*8*/]) = { 4093.8284f, -5059.8164f, 107.4577f };
	*(uParam0[32 /*8*/]) = { 4052.0479f, -5055.226f, 107.6872f };
	(uParam0[32 /*8*/])->f_7 = 75f;
	*(uParam0[33 /*8*/]) = { 4004.298f, -5049.775f, 108.2748f };
	(uParam0[33 /*8*/])->f_7 = 75f;
	*(uParam0[34 /*8*/]) = { 3964.8726f, -5042.977f, 108.9244f };
	(uParam0[34 /*8*/])->f_7 = 80f;
	*(uParam0[35 /*8*/]) = { 3917.5972f, -5032.8413f, 109.8531f };
	(uParam0[35 /*8*/])->f_7 = 80f;
	*(uParam0[36 /*8*/]) = { 3878.258f, -5020.6216f, 110.4011f };
	(uParam0[36 /*8*/])->f_7 = 80f;
	*(uParam0[37 /*8*/]) = { 3833.2644f, -5007.942f, 110.8658f };
	(uParam0[37 /*8*/])->f_7 = 80f;
	*(uParam0[38 /*8*/]) = { 3794.0808f, -4991.224f, 110.7152f };
	(uParam0[38 /*8*/])->f_7 = 80f;
	*(uParam0[39 /*8*/]) = { 3760.8127f, -4980.0356f, 110.1112f };
	(uParam0[39 /*8*/])->f_7 = 80f;
	*(uParam0[40 /*8*/]) = { 3732.6055f, -4965.341f, 110.3322f };
	(uParam0[40 /*8*/])->f_7 = 80f;
	*(uParam0[41 /*8*/]) = { 3693.698f, -4948.2495f, 110.6774f };
	(uParam0[41 /*8*/])->f_7 = 80f;
	*(uParam0[42 /*8*/]) = { 3671.085f, -4935.0083f, 110.6896f };
	(uParam0[42 /*8*/])->f_7 = 80f;
	*(uParam0[43 /*8*/]) = { 3627.5833f, -4914.8174f, 110.6058f };
	*(uParam0[44 /*8*/]) = { 3590.403f, -4898.148f, 110.6681f };
	*(uParam0[45 /*8*/]) = { 3553.3826f, -4885.2036f, 110.7241f };
	*(uParam0[46 /*8*/]) = { 3524.905f, -4873.6226f, 110.7502f };
	*(uParam0[47 /*8*/]) = { 3481.6187f, -4862.8203f, 110.7855f };
	*(uParam0[48 /*8*/]) = { 3447.1887f, -4856.96f, 110.7985f };
	*(uParam0[49 /*8*/]) = { 3415.626f, -4851.4873f, 110.8072f };
	*(uParam0[50 /*8*/]) = { 3387.0598f, -4848.4624f, 110.7909f };
	*(uParam0[51 /*8*/]) = { 3343.5305f, -4845.694f, 110.8147f };
	*(uParam0[52 /*8*/]) = { 3313.5476f, -4842.952f, 110.814f };
	*(uParam0[53 /*8*/]) = { 3270.779f, -4839.164f, 110.8142f };
	*(uParam0[54 /*8*/]) = { 3242.13f, -4837.0957f, 110.8146f };
	*(uParam0[55 /*8*/]) = { 3212.8823f, -4833.655f, 110.815f };
	(uParam0[55 /*8*/])->f_6 = 25f;
	(uParam0[55 /*8*/])->f_7 = 50f;
	*(uParam0[56 /*8*/]) = { 3214.8853f, -4805.01f, 110.8144f };
	(uParam0[56 /*8*/])->f_6 = 35f;
	(uParam0[56 /*8*/])->f_7 = 55f;
	*(uParam0[57 /*8*/]) = { 3217.22f, -4777.529f, 110.8147f };
	*(uParam0[58 /*8*/]) = { 3220.8281f, -4727.3423f, 111.2513f };
	(uParam0[58 /*8*/])->f_5 = 1;
}

void func_680(var uParam0)//Position - 0x81A36
{
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 4363.457f, -5083.8f, 109.94129f, 32f, 164f, 8f, false, true, 0))
			{
				*uParam0++;
			}
			break;
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds", false, -1) && func_337(&Local_134, 16f, 0))
			{
				if (AUDIO::HAS_SOUND_FINISHED(iLocal_437))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_437, "Train_Bell", 3882.67f, -5017.19f, 113.72f, "Prologue_Sounds", false, 0, false);
				}
				*uParam0++;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_134.f_1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_134.f_0, 3960.78f, -5569.91f, 110f, 10f, 10f, 10f, false, true, 0))
				{
					PED::DELETE_PED(&(Local_134.f_1));
					VEHICLE::DELETE_MISSION_TRAIN(&Local_134);
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_437))
					{
						AUDIO::STOP_SOUND(iLocal_437);
					}
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
					*uParam0++;
				}
			}
			break;
	}
}

void func_681(int iParam0)//Position - 0x81B5C
{
	if (iLocal_492 == 1)
	{
		switch (*iParam0)
		{
			case 0:
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
					}
					if (AUDIO::LOAD_STREAM("FLASHBACK_01", "MICHAEL1_FLASHBACK_SOUNDSET"))
					{
						if (__LIB_1__::func_126(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_67, 42f, 128f, 8f, false, true, 0))
							{
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_494 = 0;
								func_204("FLASHBACK_01", 1);
								AUDIO::START_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
								*iParam0++;
							}
						}
					}
				}
				break;
			case 1:
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
					}
					if (AUDIO::LOAD_STREAM("FLASHBACK_02", "MICHAEL1_FLASHBACK_SOUNDSET"))
					{
						if (__LIB_1__::func_126(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_68, 132f, 196f, 16f, false, true, 0))
							{
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_494 = 10;
								func_204("FLASHBACK_02", 1);
								AUDIO::START_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
								*iParam0++;
							}
						}
					}
				}
				break;
			case 2:
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
					}
					if (AUDIO::LOAD_STREAM("FLASHBACK_03", "MICHAEL1_FLASHBACK_SOUNDSET"))
					{
						if (__LIB_1__::func_126(PLAYER::PLAYER_PED_ID(), Local_93.f_0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_69, 72f, 72f, 16f, false, true, 0))
							{
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_494 = 20;
								func_204("FLASHBACK_03", 1);
								AUDIO::START_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
								*iParam0++;
							}
						}
					}
				}
				break;
			}
	}
	switch (iLocal_494)
	{
		case 0:
			if (func_202("FLASHBACK_01"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::GET_STREAM_PLAY_TIME() >= 100)
					{
						if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
						{
							func_682("MCH1_FLASH1", 10000);
						}
						iLocal_494++;
					}
				}
			}
			break;
		case 1:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 10300)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH2", 7500);
					}
					iLocal_494++;
				}
			}
			break;
		case 2:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 13500)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH3", 10000);
					}
					iLocal_494++;
				}
			}
			break;
		case 3:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 23000)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH4", 7500);
					}
					iLocal_494++;
				}
			}
			break;
		case 4:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 26500)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH5", 10000);
					}
					iLocal_494++;
				}
			}
			break;
		case 5:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 36500)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH6", 10000);
					}
					iLocal_494++;
				}
			}
			break;
		case 6:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 42300)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH7", 5000);
						iLocal_494++;
					}
				}
			}
			break;
		case 10:
			if (func_202("FLASHBACK_02"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::GET_STREAM_PLAY_TIME() >= 100)
					{
						if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
						{
							func_682("MCH1_FLASH8", 7500);
						}
						iLocal_494++;
					}
				}
			}
			break;
		case 11:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 7500)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH9", 7500);
					}
					iLocal_494++;
				}
			}
			break;
		case 12:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 12500)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH10", 10000);
					}
					iLocal_494++;
				}
			}
			break;
		case 13:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 22600)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH11", 4300);
					}
					iLocal_494++;
				}
			}
			break;
		case 20:
			if (func_202("FLASHBACK_03"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::GET_STREAM_PLAY_TIME() >= 100)
					{
						if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
						{
							func_682("MCH1_FLASH12", 7500);
						}
						iLocal_494++;
					}
				}
			}
			break;
		case 21:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 4000)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH13", 7500);
					}
					iLocal_494++;
				}
			}
			break;
		case 22:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 7500)
				{
					if (!__LIB_0__::func_405("MCH1_GBRLC", 0, 0))
					{
						func_682("MCH1_FLASH14", 4500);
					}
					iLocal_494++;
				}
			}
			break;
	}
	if (AUDIO::IS_STREAM_PLAYING())
	{
		if (!__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), Local_93.f_0, 0) && iLocal_408 == 0)
		{
			AUDIO::STOP_STREAM();
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
			if (((((((((((((__LIB_0__::func_405("MCH1_FLASH1", 0, 0) || __LIB_0__::func_405("MCH1_FLASH2", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH3", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH4", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH5", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH6", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH7", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH8", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH9", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH10", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH11", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH12", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH13", 0, 0)) || __LIB_0__::func_405("MCH1_FLASH14", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
	}
}

void func_682(char* sParam0, int iParam1)//Position - 0x821A3
{
	HUD::FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(1);
	if (MISC::GET_PROFILE_SETTING(203) == 1)
	{
		HUD::CLEAR_PRINTS();
		__LIB_0__::func_325(sParam0, iParam1, 1);
	}
}

void func_684(char* sParam0)//Position - 0x821E5
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_202(sParam0))
		{
			if (__LIB_0__::func_405(sParam0, 0, 0))
			{
				func_204(sParam0, 1);
			}
		}
		else if (!__LIB_0__::func_405(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

int func_685(int iParam0, int iParam1)//Position - 0x8222A
{
	int iVar0;
	int iVar1;
	if (__LIB_20__::func_728() == 0)
	{
		switch (*iParam0)
		{
			case 0:
				if (__LIB_20__::func_679("mic_1_mcs_1", 1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_108, "Chinese_Goon_Car", 2, joaat("oracle2"), 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
					__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					*iParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_42__::func_700("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				break;
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					__LIB_11__::func_147(2, 0);
					if (CAM::DOES_CAM_EXIST(iLocal_469))
					{
						CAM::DESTROY_ALL_CAMS(false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						HUD::DISPLAY_HUD(true);
						HUD::DISPLAY_RADAR(true);
					}
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_92.f_2, ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 15f)
							{
								if (iVar0 != Local_93.f_0)
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
								}
								ENTITY::SET_ENTITY_COORDS(iVar0, Local_93.f_2, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar0, Local_93.f_5);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							}
						}
					}
					FIRE::STOP_FIRE_IN_RANGE(Local_92.f_2, 25f);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_92.f_2, 25f, false, false, false, false, false, false, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_92.f_2, 25f, 0);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_92.f_2, 25f);
					MISC::CLEAR_AREA_OF_PEDS(-1035.4146f, -2743.9492f, 19.16928f, 6f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-1035.5178f, -2739.1438f, 19.16928f, 3.5f, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					*iParam0++;
				}
				break;
			case 2:
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar1 != Local_93.f_0)
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_108))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Chinese_Goon_Car", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_Goon_Car", 0)))
						{
							iLocal_108 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_Goon_Car", 0));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_108, true, true, false);
							VEHICLE::SET_VEHICLE_LIGHTS(iLocal_108, 3);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chinese_Goon_Car", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_108);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_93);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_108);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
					*iParam0++;
				}
				else
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					}
					func_687();
					func_425(0);
				}
				break;
			case 3:
				if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (func_686() && func_424(0))
					{
						RECORDING::REPLAY_STOP_EVENT();
						return 1;
					}
				}
				break;
		}
	}
	else if (__LIB_20__::func_728() == 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_8__::func_611(0);
			switch (*iParam1)
			{
				case 0:
					func_687();
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
					*iParam1++;
					break;
				case 1:
					if (func_686() && func_424(1))
					{
						RECORDING::REPLAY_STOP_EVENT();
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_686()//Position - 0x825EA
{
	if ((((((((((((((((((((((((((STREAMING::IS_IPL_ACTIVE("prologue01") && STREAMING::IS_IPL_ACTIVE("prologue01c")) && STREAMING::IS_IPL_ACTIVE("prologue01d")) && STREAMING::IS_IPL_ACTIVE("prologue01e")) && STREAMING::IS_IPL_ACTIVE("prologue01f")) && STREAMING::IS_IPL_ACTIVE("prologue01g")) && STREAMING::IS_IPL_ACTIVE("prologue01h")) && STREAMING::IS_IPL_ACTIVE("prologue01i")) && STREAMING::IS_IPL_ACTIVE("prologue01j")) && STREAMING::IS_IPL_ACTIVE("prologue01k")) && STREAMING::IS_IPL_ACTIVE("prologue01z")) && STREAMING::IS_IPL_ACTIVE("prologue02")) && STREAMING::IS_IPL_ACTIVE("prologue03")) && STREAMING::IS_IPL_ACTIVE("prologue03b")) && STREAMING::IS_IPL_ACTIVE("prologue04")) && STREAMING::IS_IPL_ACTIVE("prologue04b")) && STREAMING::IS_IPL_ACTIVE("prologue05")) && STREAMING::IS_IPL_ACTIVE("prologue05b")) && STREAMING::IS_IPL_ACTIVE("prologue06")) && STREAMING::IS_IPL_ACTIVE("prologue06b")) && STREAMING::IS_IPL_ACTIVE("prologuerd")) && STREAMING::IS_IPL_ACTIVE("prologuerdb")) && STREAMING::IS_IPL_ACTIVE("prologue_occl")) && STREAMING::IS_IPL_ACTIVE("prologue_m2_door")) && STREAMING::IS_IPL_ACTIVE("prologue06_pannel")) && STREAMING::IS_IPL_ACTIVE("prologue_LODLights")) && STREAMING::IS_IPL_ACTIVE("prologue_DistantLights"))
	{
		return 1;
	}
	else
	{
		func_687();
	}
	return 0;
}

void func_687()//Position - 0x8275B
{
	STREAMING::REQUEST_IPL("prologue01");
	STREAMING::REQUEST_IPL("prologue01c");
	STREAMING::REQUEST_IPL("prologue01d");
	STREAMING::REQUEST_IPL("prologue01e");
	STREAMING::REQUEST_IPL("prologue01f");
	STREAMING::REQUEST_IPL("prologue01g");
	STREAMING::REQUEST_IPL("prologue01h");
	STREAMING::REQUEST_IPL("prologue01i");
	STREAMING::REQUEST_IPL("prologue01j");
	STREAMING::REQUEST_IPL("prologue01k");
	STREAMING::REQUEST_IPL("prologue01z");
	STREAMING::REQUEST_IPL("prologue02");
	STREAMING::REQUEST_IPL("prologue03");
	STREAMING::REQUEST_IPL("prologue03b");
	STREAMING::REQUEST_IPL("prologue04");
	STREAMING::REQUEST_IPL("prologue04b");
	STREAMING::REQUEST_IPL("prologue05");
	STREAMING::REQUEST_IPL("prologue05b");
	STREAMING::REQUEST_IPL("prologue06");
	STREAMING::REQUEST_IPL("prologue06b");
	STREAMING::REQUEST_IPL("prologuerd");
	STREAMING::REQUEST_IPL("prologuerdb");
	STREAMING::REQUEST_IPL("prologue_occl");
	STREAMING::REQUEST_IPL("prologue_m2_door");
	STREAMING::REQUEST_IPL("prologue06_pannel");
	STREAMING::REQUEST_IPL("prologue_LODLights");
	__LIB_30__::func_735("prologue_LODLights");
	STREAMING::REQUEST_IPL("prologue_DistantLights");
	__LIB_30__::func_735("prologue_DistantLights");
}

int func_690(int iParam0)//Position - 0x828B2
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	MISC::SET_BIT(&(Local_187.f_13), 20);
	Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	switch (*iParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_101.f_0, false))
				{
					if (HUD::DOES_BLIP_EXIST(Local_187.f_0))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_101.f_0, false, 1);
					}
					if (iLocal_407 == 0)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_101.f_0))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_TREVOR_PLANE"))
							{
								AUDIO::START_AUDIO_SCENE("MI_1_TREV_FLY_TO_LUDENDORFF");
								iLocal_407 = 1;
							}
						}
					}
					if (iLocal_445 == 0)
					{
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 60f);
						iLocal_444 = MISC::GET_GAME_TIMER();
						iLocal_445 = 1;
					}
					if (iLocal_446 == 0)
					{
						if (iLocal_445 == 1)
						{
							if (iLocal_444 != 0 && __LIB_11__::func_307(60000, iLocal_444))
							{
								MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("RAIN", 35f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_436, "MIC_1_RAIN_ON_PLANE_MASTER", Local_101.f_0, 0, false, 0);
								}
								iLocal_444 = MISC::GET_GAME_TIMER();
								iLocal_446 = 1;
							}
						}
					}
					if (iLocal_447 == 0)
					{
						if (iLocal_446 == 1)
						{
							if (iLocal_444 != 0 && __LIB_11__::func_307(35000, iLocal_444))
							{
								MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 35f);
								iLocal_447 = 1;
							}
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_187.f_0))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_101.f_0, true, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
			{
				fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_187.f_5), Var2, true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_135.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_135.f_0, false))
					{
						Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_135.f_0, Var2) };
					}
				}
			}
			if (!func_202("MCH1_TRON" /* GXT: Shit, T. Theres sum Chinese guys looking for you, asking where ur flying. I think its Chengs ppl. I didn't tell where u was goin. I swear I didn't! */))
			{
				if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
				{
					if (fVar0 > 0f && fVar0 < 2200f)
					{
						__LIB_36__::func_66(20, "MCH1_TRON" /* GXT: Shit, T. Theres sum Chinese guys looking for you, asking where ur flying. I think its Chengs ppl. I didn't tell where u was goin. I swear I didn't! */, 1, 1, 0, 0, 0, 1, 0, 1);
						func_204("MCH1_TRON" /* GXT: Shit, T. Theres sum Chinese guys looking for you, asking where ur flying. I think its Chengs ppl. I didn't tell where u was goin. I swear I didn't! */, 1);
					}
				}
			}
			if (__LIB_32__::func_811(&Local_187, Local_364.f_0, Local_364.f_1, Var2.f_2, Local_364.f_3, 0, Local_101.f_0, "MCH1_GT_T3", "CMN_GENGETINPL" /* GXT: ~s~Get in the ~b~plane. */, "CMN_GENGETBCKPL" /* GXT: ~s~Get back in the ~b~plane. */, 1, 0, 1, -1) || (((HUD::DOES_BLIP_EXIST(Local_187.f_5) && Var1.f_1 > 0f) && fVar0 > 0f) && fVar0 < 500f))
			{
				__LIB_20__::func_615(&Local_187, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLIGHT_ARRIVING");
				if (!PED::IS_PED_INJURED(Local_92.f_0))
				{
					TASK::CLEAR_PED_TASKS(Local_92.f_0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_92);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_93);
				}
				if (!PED::IS_PED_INJURED(iLocal_147[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_147[0]);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_147[0]));
				}
				if (HUD::DOES_BLIP_EXIST(Local_92.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_92.f_1));
				}
				__LIB_8__::func_611(0);
				__LIB_30__::func_202(&Local_135, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_101);
				}
				iLocal_400 = 1;
				CAM::DO_SCREEN_FADE_OUT(2500);
				*iParam0++;
			}
			break;
		case 1:
			__LIB_8__::func_611(0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_691(int iParam0)//Position - 0x82BB8
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	MISC::SET_BIT(&(Local_187.f_13), 20);
	func_701(&(Local_92.f_12), &(Local_91.f_12));
	switch (__LIB_20__::func_728())
	{
		case 0:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			}
			if (__LIB_0__::func_527() || __LIB_4__::func_234())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("mic_1_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1037.0256f, -2735.8008f, 19.1693f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
			{
				CUTSCENE::REQUEST_CUTSCENE("mic_1_mcs_1", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_42__::func_700("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("mic_1_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			func_695(&Local_91, &iLocal_483);
			switch (*iParam0)
			{
				case 0:
					VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(-1039.57f, -2664.37f, 12.83f, 30f);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DRIVE_TO_AIRPORT"))
					{
						AUDIO::START_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_AIRPORT");
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
							if (iLocal_434 == 0)
							{
								if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) * 255f)) > 20)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) * 255f)) > 20))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
									iLocal_434 = 1;
								}
							}
						}
						if (iLocal_395 == 0)
						{
							if (iLocal_393 == 0)
							{
								iLocal_393 = MISC::GET_GAME_TIMER();
							}
							else if (__LIB_11__::func_307(7500, iLocal_393))
							{
								iLocal_395 = 1;
							}
						}
						if (iLocal_395 == 1)
						{
							__LIB_36__::func_14(&Local_187, -1037.8436f, -2655.3862f, 12.8312f, 0.25f, 0.25f, 2f, 1, "MCH1_GTLSIA", 1, 1, -1);
						}
						if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
						{
							if (iLocal_394 == 0)
							{
								__LIB_11__::func_181(&(Local_187.f_5), -1051.6487f, -2712.0117f, 12.7057f, 241.7918f);
								iLocal_394 = 1;
							}
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1047.9495f, -2649.7324f, 12.331177f, -1027.132f, -2661.6055f, 15.981733f, 7f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1037.5494f, -2680.1265f, 12.481735f, -1047.7422f, -2670.5073f, 15.831176f, 7f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1057.4551f, -2653.3445f, 12.331177f, -1047.972f, -2671.0356f, 15.831175f, 7f, false, true, 0))
							{
								*iParam0++;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -962.3938f, -2736.5215f, 11.818534f, -1083.9254f, -2666.6536f, 28.817842f, 78f, false, true, 0))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									*iParam0++;
								}
							}
						}
						if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_57)))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_92.f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 50f)
							{
								INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_57));
							}
						}
					}
					break;
				case 1:
					if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 4f, 1, 1056964608, 0, 1, 0))
								{
									__LIB_20__::func_615(&Local_187, 0);
									*iParam0++;
								}
							}
							else
							{
								__LIB_20__::func_615(&Local_187, 0);
								*iParam0++;
							}
						}
					}
					break;
				case 2:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DRIVE_TO_AIRPORT"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_AIRPORT");
					}
					__LIB_36__::func_14(&Local_187, -1037.63f, -2737.48f, 19.17f, 0.25f, 0.25f, 2f, 1, "", 1, 1, -1);
					if (!func_202("MCH1_GTTE"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
						{
							if (!__LIB_18__::func_197(&Local_187, 2))
							{
								func_407("MCH1_GTTE", 7500, 1);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
					{
						if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_187.f_5))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_187.f_5), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 100f)
							{
								HUD::SET_BLIP_ROUTE(Local_187.f_5, false);
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_187.f_5), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 110f)
						{
							HUD::SET_BLIP_ROUTE(Local_187.f_5, true);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1026.3065f, -2741.3667f, 18.669733f, -1046.3296f, -2730.0032f, 23.169733f, 18f, false, true, 0))
								{
									*iParam0++;
								}
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1046.4106f, -2736.282f, 18.670202f, -1032.3845f, -2744.4832f, 23.170202f, 17f, false, true, 0))
							{
								*iParam0++;
							}
						}
					}
					break;
				case 3:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 4f, 1, 1056964608, 0, 1, 0))
							{
								__LIB_0__::func_296();
								if (!__LIB_0__::func_75())
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									__LIB_20__::func_615(&Local_187, 0);
									*iParam0++;
								}
							}
						}
						else
						{
							__LIB_0__::func_296();
							__LIB_20__::func_615(&Local_187, 0);
							*iParam0++;
						}
					}
					break;
				case 4:
					if (!CAM::DOES_CAM_EXIST(iLocal_469))
					{
						CAM::DESTROY_ALL_CAMS(false);
						iLocal_469 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
						CAM::SET_CAM_PARAMS(iLocal_469, -1011.7179f, -2738.0151f, 22.56395f, -0.092603f, -0.004846f, 82.387924f, 39.955357f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_469, -1012.978f, -2737.4597f, 22.56225f, 0.573072f, -0.004846f, 83.24618f, 39.955357f, 5000, 0, 0, 2);
						CAM::SHAKE_CAM(iLocal_469, "HAND_SHAKE", 0.2f);
						HUD::DISPLAY_HUD(false);
						HUD::DISPLAY_RADAR(false);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						Local_92.f_10 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1038.07f, -2738.51f, 19.17f, 1f, 20000, 0.25f, 0, 40000f);
						}
					}
					else if (CAM::IS_CAM_RENDERING(iLocal_469))
					{
						if (__LIB_11__::func_307(4000, Local_92.f_10) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1038.07f, -2738.51f, 19.17f, 2f, 2f, 2f, false, true, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!__LIB_0__::func_75())
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_93);
									}
									STREAMING::REMOVE_ANIM_DICT("missmic1ig_zero_hit_wheel");
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
		case 2:
			Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			func_684(&Local_454);
			func_684(&Local_460);
			func_684(&Local_457);
			func_684(&cLocal_466);
			func_684(&Local_463);
			switch (*iParam0)
			{
				case 0:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_TREV_DRIVE_TO_PLANE"))
					{
						AUDIO::START_AUDIO_SCENE("MI_1_TREV_DRIVE_TO_PLANE");
					}
					if (Local_91.f_10 == 0)
					{
						Local_91.f_10 = MISC::GET_GAME_TIMER();
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
					{
						if (iLocal_434 == 0)
						{
							if (Local_91.f_10 != 0)
							{
								if (__LIB_11__::func_307(3000, Local_91.f_10))
								{
									if (__LIB_30__::func_200(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
										iLocal_434 = 1;
									}
								}
								if (__LIB_11__::func_307(10000, Local_91.f_10))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
									iLocal_434 = 1;
								}
							}
						}
					}
					__LIB_36__::func_14(&Local_187, 1743.9327f, 3289.1938f, 40.1f, 0.25f, 0.25f, 2f, 1, &Local_454, 1, 1, -1);
					if (iLocal_402 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1743.9327f, 3289.1938f, 42.10308f, true) < 3800f)
						{
							iLocal_402 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1743.9327f, 3289.1938f, 42.10308f, 18f, 12f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1739.6665f, 3280.8691f, 39.093464f, 1726.7277f, 3328.008f, 44.226074f, 28f, false, true, 0))
					{
						__LIB_20__::func_615(&Local_187, 0);
						iLocal_509[7] = 0;
						iLocal_509[8] = 0;
						iLocal_509[9] = 0;
						Local_91.f_10 = MISC::GET_GAME_TIMER();
						iLocal_392 = 1;
						__LIB_42__::func_871(1, "FLY TO NORTH YANKTON", 0, 0, 0, 1);
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != Local_94.f_0)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), false))
								{
									if (__LIB_1__::func_198(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1))
									{
										iVar3 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
										if (ENTITY::DOES_ENTITY_EXIST(iVar3))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iVar3, false))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false))
												{
													__LIB_6__::func_760(iVar3, &Local_122);
												}
											}
										}
									}
								}
							}
						}
						*iParam0++;
					}
					break;
				case 1:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_TREV_DRIVE_TO_PLANE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_TREV_DRIVE_TO_PLANE");
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							__LIB_32__::func_811(&Local_187, Local_364, Local_364.f_3, 0, Local_101.f_0, &Local_460, &Local_463, &cLocal_466, 1, 0, 1, -1);
							if (HUD::DOES_BLIP_EXIST(Local_187.f_0))
							{
								if (HUD::DOES_BLIP_EXIST(Local_101.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_101.f_1));
								}
							}
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_101.f_0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 3f, 4);
								AUDIO::TRIGGER_MUSIC_EVENT("MIC1_TREVOR_PLANE");
								AUDIO::START_AUDIO_SCENE("MI_1_TREV_FLY_TO_LUDENDORFF");
								*iParam0++;
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_101.f_0, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_91.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
								{
									TASK::CLEAR_PED_TASKS(Local_91.f_0);
								}
							}
						}
					}
					break;
				case 2:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_101.f_0, false))
								{
									if (HUD::DOES_BLIP_EXIST(Local_187.f_0))
									{
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_101.f_0, false, 1);
									}
									if (iLocal_445 == 0)
									{
										MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 60f);
										iLocal_444 = MISC::GET_GAME_TIMER();
										iLocal_445 = 1;
									}
									if (iLocal_446 == 0)
									{
										if (iLocal_445 == 1)
										{
											if (iLocal_444 != 0 && __LIB_11__::func_307(60000, iLocal_444))
											{
												MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("RAIN", 35f);
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
												{
													AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_436, "MIC_1_RAIN_ON_PLANE_MASTER", Local_101.f_0, 0, false, 0);
												}
												iLocal_444 = MISC::GET_GAME_TIMER();
												iLocal_446 = 1;
											}
										}
									}
									if (iLocal_447 == 0)
									{
										if (iLocal_446 == 1)
										{
											if (iLocal_444 != 0 && __LIB_11__::func_307(35000, iLocal_444))
											{
												MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 35f);
												iLocal_447 = 1;
											}
										}
									}
								}
								else if (!HUD::DOES_BLIP_EXIST(Local_187.f_0))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_101.f_0, true, 1);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_135.f_0))
							{
								if (func_670(&Local_135, 1))
								{
									ENTITY::SET_ENTITY_HEADING(Local_135.f_0, 315f);
									ENTITY::SET_ENTITY_VISIBLE(Local_135.f_0, false, false);
									ENTITY::SET_ENTITY_COLLISION(Local_135.f_0, false, false);
								}
							}
							if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
							{
								fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_187.f_5), Var2, true);
								if (ENTITY::DOES_ENTITY_EXIST(Local_135.f_0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_135.f_0, false))
									{
										Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_135.f_0, Var2) };
									}
								}
							}
							if (!func_202("MCH1_TRON" /* GXT: Shit, T. Theres sum Chinese guys looking for you, asking where ur flying. I think its Chengs ppl. I didn't tell where u was goin. I swear I didn't! */))
							{
								if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
								{
									if (fVar0 > 0f && fVar0 < 2200f)
									{
										__LIB_36__::func_66(20, "MCH1_TRON" /* GXT: Shit, T. Theres sum Chinese guys looking for you, asking where ur flying. I think its Chengs ppl. I didn't tell where u was goin. I swear I didn't! */, 1, 1, 0, 0, 0, 1, 0, 1);
										func_204("MCH1_TRON" /* GXT: Shit, T. Theres sum Chinese guys looking for you, asking where ur flying. I think its Chengs ppl. I didn't tell where u was goin. I swear I didn't! */, 1);
									}
								}
							}
							if (__LIB_32__::func_811(&Local_187, Local_364.f_0, Local_364.f_1, Var2.f_2, Local_364.f_3, 0, Local_101.f_0, &Local_460, &Local_463, &cLocal_466, 1, 0, 1, -1) || (((HUD::DOES_BLIP_EXIST(Local_187.f_5) && Var1.f_1 > 0f) && fVar0 > 0f) && fVar0 < 500f))
							{
								__LIB_20__::func_615(&Local_187, 0);
								AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLIGHT_ARRIVING");
								*iParam0++;
							}
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_101.f_0))
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_101.f_0);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_101.f_0, false);
								VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_101.f_0, true);
							}
						}
					}
					break;
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
					{
						VEHICLE::DELETE_VEHICLE(&Local_93);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
					{
						VEHICLE::DELETE_VEHICLE(&Local_94);
					}
					__LIB_8__::func_611(0);
					__LIB_30__::func_202(&Local_135, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_101);
					}
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_436))
					{
						AUDIO::STOP_SOUND(iLocal_436);
					}
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_400 = 1;
					CAM::DO_SCREEN_FADE_OUT(2500);
					*iParam0++;
					break;
				case 4:
					__LIB_8__::func_611(0);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_695(int* iParam0, int iParam1)//Position - 0x839E3
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			switch (*iParam1)
			{
				case 0:
					TASK::REQUEST_WAYPOINT_RECORDING("mic1_tdrive");
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_tdrive"))
					{
						if (!PED::IS_PED_IN_VEHICLE(*iParam0, Local_93.f_0, false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
							{
								PED::SET_PED_INTO_VEHICLE(*iParam0, Local_93.f_0, -1);
							}
						}
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_93.f_2, 5f, 0);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 116, false);
						PED::SET_PED_CONFIG_FLAG(*iParam0, 29, false);
						__LIB_17__::func_337(&iLocal_497, Local_93.f_2, 4.5f);
						iParam0->f_10 = MISC::GET_GAME_TIMER();
						*iParam1++;
					}
					break;
				case 1:
					if (((((__LIB_11__::func_307(15000, iParam0->f_10) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.93f, 180.14f, 70.23f, -817.07f, 175.22f, 75.23f, 3.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -791.74f, 177f, 71.33f, -799.15f, 174.12f, 75.83f, 3f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.57f, 185.56f, 71.26f, -805.63f, 183.03f, 73.85f, 1.8f, false, true, 0)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.04f, 172.44f, 68.58f, -791.7f, 182.09f, 79.83f, 18f, false, true, 0)) || ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.52f, 177.49f, 71.02f, -796.41f, 186.11f, 75.1f, 6.5f, false, true, 0) && __LIB_4__::func_68(iLocal_497)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_497)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
							{
								if (!PED::IS_PED_IN_VEHICLE(*iParam0, Local_93.f_0, false))
								{
									PED::SET_PED_INTO_VEHICLE(*iParam0, Local_93.f_0, -1);
								}
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
								if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_93.f_0, 15f);
								}
								else
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_93.f_0, 12.5f);
								}
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(*iParam0, Local_93.f_0, "mic1_tdrive", 786468, 0, 0, -1, -1f, false, 2f);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
								__LIB_17__::func_236(&iLocal_497);
								__LIB_35__::func_888(Local_93.f_0, 0);
								Local_93.f_12 = 0;
								*iParam1++;
							}
						}
					}
					break;
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
							{
								if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_93.f_0) >= 10 || ENTITY::IS_ENTITY_AT_COORD(Local_93.f_0, -845.782f, 159.07556f, 67.05761f, 1.5f, 3f, 2f, false, true, 0))
								{
									iLocal_395 = 1;
								}
								if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_93.f_0) >= 45 || (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_93.f_0) >= 35 && __LIB_8__::func_538(*iParam0, PLAYER::PLAYER_PED_ID()) > 25f))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_93.f_0) || ENTITY::IS_ENTITY_OCCLUDED(Local_93.f_0))
									{
										PED::DELETE_PED(iParam0);
										VEHICLE::DELETE_VEHICLE(&Local_93);
										TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
									}
									else
									{
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(*iParam0, Local_93.f_0, PLAYER::PLAYER_PED_ID(), 8, 20f, 786468, 1000f, 10f, true);
										PED::SET_PED_KEEP_TASK(*iParam0, true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_93);
										TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
									}
								}
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!__LIB_4__::func_68(iLocal_497))
									{
										__LIB_17__::func_337(&iLocal_497, ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 4f);
									}
									else
									{
										GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_497, ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 4f);
									}
									if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_93.f_0) >= 17 && __LIB_8__::func_538(*iParam0, PLAYER::PLAYER_PED_ID()) > 35f)
									{
										if (__LIB_4__::func_68(iLocal_497) && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_497))
										{
											PED::DELETE_PED(iParam0);
											VEHICLE::DELETE_VEHICLE(&Local_93);
											TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
											__LIB_17__::func_236(&iLocal_497);
										}
									}
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
									{
										if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_93.f_0) >= 10)
										{
											if (__LIB_4__::func_68(iLocal_497) && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_497))
											{
												PED::DELETE_PED(iParam0);
												VEHICLE::DELETE_VEHICLE(&Local_93);
												TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
												__LIB_17__::func_236(&iLocal_497);
											}
										}
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}

void func_701(var uParam0, var uParam1)//Position - 0x83EA9
{
	if (__LIB_20__::func_728() == 0)
	{
		switch (*uParam0)
		{
			case 0:
				Local_92.f_11 = MISC::GET_GAME_TIMER();
				*uParam0++;
				break;
			case 1:
				if (!func_202("MCH1_TTMC"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_91.f_0, false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_91.f_0, false))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(Local_91.f_0), 17))
								{
									if (!__LIB_0__::func_75())
									{
										if (!__LIB_18__::func_197(&Local_187, 1))
										{
											if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_TTMC", 7, 0, 0, 0))
											{
												func_204("MCH1_TTMC", 1);
											}
										}
										else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
										{
											__LIB_5__::func_759(PLAYER::PLAYER_PED_ID(), "MCH1_AEAA", "MICHAEL", 6);
											func_204("MCH1_TTMC", 1);
										}
									}
								}
							}
						}
					}
					else
					{
						func_204("MCH1_TTMC", 1);
					}
				}
				if (iLocal_396 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
						{
							if (!__LIB_18__::func_197(&Local_187, 0))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(func_965(2)))
								{
									__LIB_0__::func_202(&uLocal_199, 2);
									__LIB_0__::func_203(&uLocal_199, 2, 0, "TREVOR", 0, 1);
								}
								if (__LIB_35__::func_985(&uLocal_199, 2, "MCH1AUD", "MCH1_CP01M", 9, 1, 0, 0, 0))
								{
									STREAMING::REQUEST_ANIM_DICT("missmic1ig_zero_hit_wheel");
									iLocal_396 = 1;
									*uParam0++;
								}
							}
						}
					}
				}
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					Local_92.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
				break;
			case 3:
				STREAMING::REQUEST_ANIM_DICT("missmic1ig_zero_hit_wheel");
				if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1ig_zero_hit_wheel"))
					{
						if (__LIB_11__::func_307(2000, Local_92.f_11))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_18__::func_197(&Local_187, 1))
								{
									if (__LIB_35__::func_984(&uLocal_199, "MCH1AUD", "MCH1_MSHIT", 7, 0, 0, 0))
									{
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
											{
												if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
												{
													TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missmic1ig_zero_hit_wheel", "michael_hit_wheel", 4f, -4f, -1, 48, 0f, false, false, false);
												}
											}
										}
										*uParam0++;
									}
								}
							}
						}
					}
				}
				break;
			case 4:
				if (!__LIB_0__::func_75())
				{
					Local_92.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
				break;
			case 5:
				if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
				{
					if (__LIB_11__::func_307(3500, Local_92.f_11))
					{
						if (!__LIB_18__::func_197(&Local_187, 0))
						{
							if (__LIB_35__::func_985(&uLocal_199, 30, "MCH1AUD", "MCH1_CP02", 9, 1, 0, 0, 0))
							{
								STREAMING::REMOVE_ANIM_DICT("missmic1ig_zero_hit_wheel");
								*uParam0++;
							}
						}
					}
				}
				break;
		}
	}
	else if (__LIB_20__::func_728() == 2)
	{
		if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
		{
			if (__LIB_0__::func_75())
			{
				if (__LIB_0__::func_436())
				{
					__LIB_0__::func_488(0);
				}
			}
		}
		else if (__LIB_0__::func_75())
		{
			if (!__LIB_0__::func_436())
			{
				__LIB_0__::func_488(1);
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_91.f_2, true) > 100f)
						{
							Local_91.f_11 = MISC::GET_GAME_TIMER();
							*uParam1++;
						}
					}
				}
				break;
			case 1:
				if (iLocal_396 == 0)
				{
					if (iLocal_402 == 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_91.f_2, true) > 100f)
							{
								if (__LIB_11__::func_307(10000, Local_91.f_11))
								{
									if (!__LIB_18__::func_197(&Local_187, 0))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(func_965(0)))
										{
											__LIB_0__::func_202(&uLocal_199, 0);
											__LIB_0__::func_203(&uLocal_199, 0, 0, "MICHAEL", 0, 1);
										}
										if (__LIB_41__::func_413(&uLocal_199, 0, "MCH1AUD", "MCH1_CP01T", 9, 0, 0, 1))
										{
											iLocal_396 = 1;
											*uParam1++;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_396 == 1)
				{
					*uParam1++;
				}
				break;
			case 2:
				if (!__LIB_0__::func_75())
				{
					Local_91.f_11 = MISC::GET_GAME_TIMER();
					*uParam1++;
				}
				break;
			case 3:
				if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_91.f_2, true) > 100f)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1738.4236f, 3291.4553f, 40.149773f, 500f, 500f, 50f, false, true, 0) && !__LIB_2__::func_15(PLAYER::PLAYER_PED_ID(), Local_101.f_0, 0))
							{
								if (__LIB_11__::func_307(5000, Local_91.f_11))
								{
									if (!__LIB_0__::func_75())
									{
										if (!__LIB_18__::func_197(&Local_187, 0))
										{
											if (__LIB_35__::func_985(&uLocal_199, 20, "MCH1AUD", "MCH1_CP03", 9, 1, 0, 0, 0))
											{
												*uParam1++;
											}
										}
									}
								}
							}
							else
							{
								*uParam1++;
							}
						}
					}
				}
				break;
			}
	}
}

void func_708()//Position - 0x845AE
{
	iLocal_368 = 1;
	iLocal_369 = 0;
	iLocal_370 = 0;
	iLocal_371 = 0;
	Local_92.f_10 = 0;
	Local_91.f_10 = 0;
	Local_92.f_11 = 0;
	Local_91.f_11 = 0;
	Local_92.f_12 = 0;
	Local_91.f_12 = 0;
	Local_134.f_10 = 0;
	iLocal_372 = 0;
	iLocal_373 = 0;
	iLocal_374 = 0;
	iLocal_375 = 0;
	iLocal_376 = 0;
	iLocal_378 = 0;
	iLocal_377 = 0;
	iLocal_379 = 0;
	iLocal_380 = 0;
	iLocal_391 = 0;
	iLocal_416 = 0;
	iLocal_417 = 0;
	iLocal_418 = 0;
	iLocal_419 = 0;
	iLocal_420 = 0;
	iLocal_421 = 0;
	iLocal_422 = 0;
	iLocal_423 = 0;
	iLocal_424 = 0;
	iLocal_425 = 0;
	iLocal_426 = 0;
	iLocal_427 = 0;
	iLocal_471 = 0;
	iLocal_393 = 0;
	iLocal_394 = 0;
	iLocal_395 = 0;
	iLocal_396 = 0;
	iLocal_398 = 0;
	iLocal_384 = 0;
	bLocal_385 = false;
	iLocal_428 = 0;
	iLocal_429 = 0;
	iLocal_435 = 0;
	iLocal_439 = 0;
	iLocal_431 = 0;
	iLocal_402 = 0;
	iLocal_405 = 0;
	iLocal_406 = 0;
	StringCopy(&Local_451, "MCH1_GTLC", 16);
	StringCopy(&Local_454, "MCH1_GT_T1", 16);
	StringCopy(&Local_457, "CMN_TGETBCK" /* GXT: ~s~Get back in ~b~Trevor's truck.~s~ */, 16);
	StringCopy(&Local_460, "MCH1_GT_T3", 16);
	StringCopy(&Local_463, "CMN_GENGETINPL" /* GXT: ~s~Get in the ~b~plane. */, 16);
	StringCopy(&cLocal_466, "CMN_GENGETBCKPL" /* GXT: ~s~Get back in the ~b~plane. */, 16);
	iLocal_82 = 0;
	iLocal_407 = 0;
	iLocal_409 = 0;
	iLocal_408 = 0;
	iLocal_410 = 0;
	iLocal_411 = 0;
	iLocal_412 = 0;
	iLocal_413 = 0;
	iLocal_414 = 0;
	iLocal_415 = 0;
	iLocal_442 = 0;
	iLocal_444 = 0;
	iLocal_445 = 0;
	iLocal_446 = 0;
	iLocal_447 = 0;
	iLocal_432 = 0;
	iLocal_433 = 0;
	iLocal_434 = 0;
	iLocal_448 = 0;
	iLocal_449 = 0;
	iLocal_392 = 0;
	fLocal_450 = 0f;
	iLocal_483 = 0;
	iLocal_482 = 0;
	iLocal_491 = 0;
	iLocal_484 = 0;
	iLocal_485 = 0;
	iLocal_486 = 0;
	iLocal_487 = 0;
	iLocal_492 = 0;
	iLocal_493 = 0;
	iLocal_494 = 0;
	iLocal_495 = 0;
	iLocal_496 = 0;
	iLocal_404 = 0;
	iLocal_403 = 0;
}

int func_709(var uParam0)//Position - 0x84741
{
	int iVar0;
	switch (*uParam0)
	{
		case 0:
			if (__LIB_20__::func_728() == 0)
			{
				if (__LIB_20__::func_679("mic_1_int", 15))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_91.f_0, "Trevor", 2, __LIB_19__::func_811(2), 0);
					__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_42__::func_700("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			else if (__LIB_20__::func_728() == 2)
			{
				__LIB_0__::func_686(1, 1, 1, 0);
				if (__LIB_20__::func_679("mic_1_int", 30))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_96938.f_9[0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
							Local_92.f_0 = Global_96938.f_9[0];
							func_666(Local_92.f_0, joaat("PLAYER"), 0, 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_92.f_0, "Michael", 1, joaat("Player_Zero"), 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_96938[0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
							Local_93.f_0 = Global_96938[0];
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_93.f_0, 3);
							VEHICLE::SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Local_93.f_0, true);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_93.f_0, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_93.f_0, "Michaels_car", 0, joaat("tailgater"), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938[0], true, true);
							VEHICLE::DELETE_VEHICLE(&(Global_96938[0]));
							MISC::CLEAR_AREA(Local_93.f_2, 10f, true, false, false, false);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_93.f_0, "Michaels_car", 2, joaat("tailgater"), 0);
						}
					}
					else if (((__LIB_26__::func_465() && func_778(1) == 2) && ENTITY::DOES_ENTITY_EXIST(__LIB_10__::func_691())) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_10__::func_691(), true))
					{
						if (__LIB_20__::func_510(__LIB_10__::func_691(), 0, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(__LIB_10__::func_691(), true, true);
							Local_93.f_0 = __LIB_10__::func_691();
							__LIB_30__::func_213(&Local_93, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_93.f_0, 3);
							ENTITY::SET_ENTITY_HEALTH(Local_93.f_0, ENTITY::GET_ENTITY_HEALTH(Local_93.f_0) + 500, 0);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_93.f_0) + 500f));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0) + 500f));
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 2.5f);
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 0, false))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 0);
							}
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 1, false))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 1);
							}
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 4, false))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 4);
							}
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 5, false))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 5);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_93.f_0, "Michaels_car", 0, joaat("tailgater"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_93.f_0, "Michaels_car", 2, joaat("tailgater"), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_93.f_0, "Michaels_car", 2, joaat("tailgater"), 0);
					}
					__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::REPLAY_START_EVENT(4);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_42__::func_700("Trevor", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if ((__LIB_11__::func_866(0) && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_314(0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_0__::func_314(0), true))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(__LIB_0__::func_314(0), true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(__LIB_0__::func_314(0), true, true);
						Local_93.f_0 = __LIB_0__::func_314(0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
					{
						FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 2.5f);
						ENTITY::SET_ENTITY_HEALTH(Local_93.f_0, ENTITY::GET_ENTITY_HEALTH(Local_93.f_0) + 500, 0);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_93.f_0) + 500f));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0) + 500f));
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 0, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 0);
						}
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 1, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 1);
						}
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 4, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 4);
						}
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 5, false))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 5);
						}
						__LIB_30__::func_213(&Local_93, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, false, true, false);
						ENTITY::SET_ENTITY_COORDS(Local_93.f_0, Local_93.f_2, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_93.f_0, Local_93.f_5);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
					}
				}
				if (__LIB_26__::func_465())
				{
					switch (func_778(1))
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
							{
								if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
										{
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
										}
										Local_93.f_0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
										__LIB_30__::func_213(&Local_93, 1);
										ENTITY::SET_ENTITY_HEALTH(Local_93.f_0, ENTITY::GET_ENTITY_HEALTH(Local_93.f_0) + 500, 0);
										VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_93.f_0) + 500f));
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_93.f_0) + 500f));
										FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_93.f_0, true), 2.5f);
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 0, false))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 0);
										}
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 1, false))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 1);
										}
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 4, false))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 4);
										}
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_93.f_0, 5, false))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_93.f_0, 5);
										}
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_93.f_0, true);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, false, true, false);
										ENTITY::SET_ENTITY_COORDS(Local_93.f_0, Local_93.f_2, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(Local_93.f_0, Local_93.f_5);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
									}
									else
									{
										__LIB_32__::func_763(24);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true);
										VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false, true, false);
										ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_94.f_2, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_94.f_5);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
										__LIB_40__::func_977(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_94.f_2, Local_94.f_5, 24, 0);
										__LIB_0__::func_313(24);
									}
								}
							}
							break;
						case 2:
							if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
							{
								if (!__LIB_20__::func_510(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
									}
									ENTITY::SET_ENTITY_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE()) + 500, 0);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE()) + 500f));
									VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE()) + 500f));
									FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true), 2.5f);
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 4, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 4);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5, false))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5);
									}
								}
							}
							break;
						}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
				{
					__LIB_36__::func_50(Local_93.f_0);
				}
				__LIB_11__::func_182(1);
				__LIB_11__::func_872(4, 1, 1);
				MISC::CLEAR_AREA(Local_92.f_2, 25f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PEDS(Local_92.f_2, 250f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_92.f_2, 250f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_92.f_2, 250f, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*uParam0++;
			}
			break;
		case 2:
			if (__LIB_20__::func_728() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Trevor", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
						{
							Local_91.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
							func_666(Local_91.f_0, joaat("PLAYER"), 0, 1, 0, 0);
							iLocal_147[2] = Local_91.f_0;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
				{
					switch (__LIB_20__::func_728())
					{
						case 0:
							if (((__LIB_26__::func_465() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
							{
								Local_93.f_0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_93.f_0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_93.f_0, true, false);
								}
								__LIB_30__::func_213(&Local_93, 1);
								ENTITY::SET_ENTITY_COORDS(Local_93.f_0, Local_93.f_2, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_93.f_0, Local_93.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_93.f_0, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_93.f_0, 1);
							}
							else
							{
								func_711(&Local_93, 1, 0, 0, 1, -1, -1, -1);
							}
							break;
						case 2:
							if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Michaels_car", 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_car", 0)))
								{
									Local_93.f_0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_car", 0));
									__LIB_30__::func_213(&Local_93, 1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
									VEHICLE::SET_VEHICLE_LIGHTS(Local_93.f_0, 3);
									VEHICLE::SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Local_93.f_0, true);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_93.f_0, 1);
								}
							}
							break;
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_93.f_0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
				{
					switch (__LIB_20__::func_728())
					{
						case 0:
							break;
						case 2:
							if (((__LIB_26__::func_465() && func_778(1) == 2) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								Local_94.f_0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_94.f_0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_94.f_0, true, false);
								}
								__LIB_30__::func_213(&Local_94, 1);
								ENTITY::SET_ENTITY_COORDS(Local_94.f_0, Local_94.f_2, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_94.f_0, Local_94.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_94.f_0, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_94.f_0, 5f);
							}
							else
							{
								func_711(&Local_94, 1, 0, 2, 1, -1, -1, -1);
							}
							break;
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_94.f_0, false))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_94.f_0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
				switch (__LIB_20__::func_728())
				{
					case 0:
						break;
					case 2:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_93.f_0, 10f);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_93.f_0, 1);
						}
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				switch (__LIB_20__::func_728())
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_384 == 0)
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
								__LIB_23__::func_169(PLAYER::PLAYER_PED_ID(), -808.4427f, 177.8966f, 71.3801f, 18.2986f, 0, 1, 0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -809.27f, 179.55f, 71.15f, 2f, 20000, 0.25f, 1, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.32f, 180.11f, 71.15f, 2f, 20000, 0.25f, 1, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.92f, 179.22f, 71.16f, 2f, 20000, 0.25f, 512, 111.3824f);
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -809.27f, 179.55f, 71.15f, 2f, 20000, 0.25f, 1, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.32f, 180.11f, 71.15f, 2f, 20000, 0.25f, 1, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.17f, 179.48f, 71.16f, 2f, 20000, 0.25f, 1, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.92f, 179.22f, 71.16f, 2f, 20000, 0.25f, 8192, 40000f);
								}
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
							}
							else
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
								__LIB_23__::func_169(PLAYER::PLAYER_PED_ID(), -813.9473f, 179.2056f, 71.1592f, 111.3824f, 0, 1, 0);
							}
						}
						break;
					case 2:
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				switch (__LIB_20__::func_728())
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_91.f_0, false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
									{
										PED::SET_PED_INTO_VEHICLE(Local_91.f_0, Local_93.f_0, -1);
									}
								}
							}
						}
						break;
					case 2:
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							iLocal_506 = 1;
							iLocal_505 = MISC::GET_GAME_TIMER();
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_tdrive"))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, false))
										{
											PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, -1);
										}
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_93.f_0, 10f);
										TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), Local_93.f_0, "mic1_tdrive", 786468, 0, 8, -1, -1f, false, 2f);
									}
								}
							}
						}
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((__LIB_20__::func_728() == 0 && func_711(&Local_93, 1, 0, 0, 1, -1, -1, -1)) || ((__LIB_20__::func_728() == 2 && func_711(&Local_94, 1, 0, 2, 1, -1, -1, -1)) && func_711(&Local_93, 1, 0, 0, 1, -1, -1, -1)))
				{
					if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_57)))
					{
						INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_57));
					}
					RECORDING::REPLAY_STOP_EVENT();
					if (__LIB_20__::func_728() == 0)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 15f, 4);
					}
					else
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 7f, 4);
					}
					__LIB_0__::func_372(46);
					__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					return 1;
				}
			}
			else if (iLocal_384 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_384 = 1;
				}
			}
			TASK::REQUEST_WAYPOINT_RECORDING("mic1_tdrive");
			break;
	}
	return 0;
}

int func_711(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)//Position - 0x854ED
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = __LIB_11__::func_171(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_758(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 0, !bParam4);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 1, !bParam4);
					}
					if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0->f_6) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0->f_6))
					{
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(*iParam0, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			__LIB_20__::func_657(iParam3, 0);
			if (__LIB_42__::func_333(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 0, !bParam4);
					VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(*iParam0, 1, !bParam4);
				}
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

int func_758(int iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x8A601
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_317(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_10__::func_267(iParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var0.f_0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][0 /*98*/] == Var0.f_0) || (iParam1 == 15 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][1 /*98*/] == Var0.f_0))
		{
			if (iParam1 == 17)
			{
				iVar1 = 0;
			}
			else if (iParam1 == 15)
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
				__LIB_18__::func_176(iParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_11__::func_861(*iParam0);
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
				__LIB_26__::func_559(iParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					__LIB_11__::func_861(*iParam0);
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

int func_778(int iParam0)//Position - 0x8B8FB
{
	if (iParam0 == 1)
	{
		return Global_103950.f_5;
	}
	return Global_106934.f_5;
}

int func_781(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x8B98D
{
	struct<3> Var0;
	int iVar1;
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		HUD::REQUEST_ADDITIONAL_TEXT("MCH1", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("MCH1AUD", 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_11__::func_311(0, 0), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_11__::func_311(2, 0), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_55, true);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_367);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_367, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_367);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_367, iLocal_367);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		if (__LIB_0__::func_294() || __LIB_0__::func_2(0))
		{
			__LIB_11__::func_182(1);
			__LIB_32__::func_763(0);
		}
		iLocal_437 = AUDIO::GET_SOUND_ID();
		iLocal_436 = AUDIO::GET_SOUND_ID();
		iLocal_438 = AUDIO::GET_SOUND_ID();
		if (*iParam4 == 0)
		{
			switch (__LIB_20__::func_728())
			{
				case 0:
					break;
				case 2:
					__LIB_0__::func_498(412);
					break;
				}
		}
		__LIB_11__::func_896(1415.83f, 3108.05f, 41f, 48f, 16f, 2f);
		TASK::ADD_COVER_BLOCKING_AREA((3278.6392f - 0.1f), (-4629.1587f - 0.1f), (115.86875f - 1.5f), (3278.6392f + 0.1f), (-4629.1587f + 0.1f), (115.86875f + 1.5f), true, true, true, false);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_895(iParam0);
		__LIB_11__::func_877(&uLocal_510, &uLocal_440);
		__LIB_23__::func_174(sLocal_54, &uLocal_517, &uLocal_441);
		func_892();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (__LIB_20__::func_728() == 0)
			{
				__LIB_23__::func_169(PLAYER::PLAYER_PED_ID(), Local_92.f_2, Local_92.f_5, 0, 1, 0);
			}
			else if (__LIB_20__::func_728() == 2)
			{
				__LIB_23__::func_169(PLAYER::PLAYER_PED_ID(), Local_91.f_2, Local_91.f_5, 0, 1, 0);
			}
			if (*uParam3)
			{
				if (iParam0 == 0 || (iParam0 == 1 && __LIB_20__::func_728() == 0))
				{
					while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_57)))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_57));
						SYSTEM::WAIT(0);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				__LIB_20__::func_720(PLAYER::PLAYER_PED_ID());
				AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f, true, false, false, false);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
			iLocal_490 = 0;
			iLocal_489 = 0;
			iLocal_386 = 0;
			iLocal_506 = 0;
			iLocal_505 = 0;
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 9:
				case 10:
					func_45();
					break;
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					func_687();
					func_425(0);
					break;
				}
		}
		if (*iParam4 == 1)
		{
			if (__LIB_20__::func_728() == 0)
			{
				__LIB_11__::func_728(Local_92.f_2, Local_92.f_5, 1, 0);
			}
			else if (__LIB_20__::func_728() == 2)
			{
				__LIB_11__::func_728(Local_91.f_2, Local_91.f_5, 1, 0);
			}
		}
		func_888(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (__LIB_11__::func_874(&uLocal_510, &uLocal_440))
		{
			if (__LIB_23__::func_172(sLocal_54, &uLocal_517, &uLocal_441))
			{
				*iParam1++;
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_885(0);
		switch (iParam0)
		{
			case 0:
				*iParam1++;
				break;
			case 1:
				if (__LIB_20__::func_728() == 0)
				{
					if (func_466(&Local_91, 1, joaat("PLAYER"), 0, 2, 0, 0, 0, Local_93.f_0, -1, 1))
					{
						iLocal_509[13] = 1;
						iLocal_509[8] = 1;
						iLocal_509[7] = 1;
						if ((*iParam4 == 1 && __LIB_24__::func_934()) && VEHICLE::IS_THIS_MODEL_A_CAR(__LIB_9__::func_997()))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
							{
								__LIB_32__::func_493();
								if (STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_997()))
								{
									Local_93.f_0 = __LIB_41__::func_992(Local_93.f_2, Local_93.f_5);
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_93.f_0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_997());
								}
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
							{
								iLocal_509[2] = 0;
								iLocal_509[1] = 0;
								iLocal_509[3] = 0;
								*iParam1++;
							}
						}
						else if (func_711(&Local_93, 1, 0, 0, 1, -1, -1, -1))
						{
							iLocal_509[2] = 0;
							iLocal_509[1] = 0;
							iLocal_509[3] = 0;
							*iParam1++;
						}
					}
				}
				else if (__LIB_20__::func_728() == 2)
				{
					if (func_711(&Local_101, 0, 0, 145, 1, 1, -1, -1))
					{
						iLocal_509[11] = 1;
						iLocal_509[10] = 1;
						if (func_711(&Local_93, 1, 0, 0, 1, -1, -1, -1))
						{
							iLocal_509[2] = 0;
							iLocal_509[1] = 0;
							iLocal_509[3] = 0;
							__LIB_0__::func_501(Local_93.f_0, 0);
							if (*iParam4 == 1 && __LIB_26__::func_465())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
								{
									__LIB_32__::func_733();
									if (STREAMING::HAS_MODEL_LOADED(__LIB_11__::func_687()))
									{
										Local_94.f_0 = func_854(Local_94.f_2, Local_94.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_94.f_0, true);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_94.f_0, 5f);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_11__::func_687());
									}
								}
								else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_94.f_0, false))
								{
									iLocal_509[8] = 0;
									iLocal_509[7] = 0;
									iLocal_509[9] = 0;
									*iParam1++;
								}
							}
							else if (func_711(&Local_94, 1, 0, 2, 1, -1, -1, -1))
							{
								iLocal_509[8] = 0;
								iLocal_509[7] = 0;
								iLocal_509[9] = 0;
								*iParam1++;
							}
						}
					}
				}
				break;
			case 2:
				if (func_670(&Local_135, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_135.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_135.f_0, false))
						{
							ENTITY::SET_ENTITY_HEADING(Local_135.f_0, 315f);
							ENTITY::SET_ENTITY_VISIBLE(Local_135.f_0, false, false);
							ENTITY::SET_ENTITY_COLLISION(Local_135.f_0, false, false);
						}
					}
					if (func_711(&Local_101, 0, 0, 145, 1, 1, -1, -1))
					{
						iLocal_509[11] = 1;
						iLocal_509[10] = 1;
						if (__LIB_20__::func_728() == 0)
						{
							if (func_466(&Local_91, 1, joaat("PLAYER"), 0, 2, 0, 0, 0, 0, -1, 1))
							{
								iLocal_147[2] = Local_91.f_0;
								iLocal_509[13] = 1;
								if (func_711(&Local_94, 1, 0, 2, 1, -1, -1, -1))
								{
									iLocal_509[8] = 0;
									iLocal_509[7] = 0;
									iLocal_509[9] = 0;
									*iParam1++;
								}
							}
						}
						else if (__LIB_20__::func_728() == 2)
						{
							if (*iParam4 == 1 && __LIB_24__::func_934())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
								{
									__LIB_32__::func_493();
									if (__LIB_26__::func_580())
									{
										Local_94.f_0 = __LIB_41__::func_992(Local_94.f_2, Local_94.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_94.f_0, true);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_94.f_0, 5f);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_997());
									}
								}
								else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_94.f_0, false))
								{
									iLocal_509[8] = 0;
									iLocal_509[7] = 0;
									iLocal_509[9] = 0;
									*iParam1++;
								}
							}
							else if (func_711(&Local_94, 1, 0, 2, 1, -1, -1, -1))
							{
								iLocal_509[8] = 0;
								iLocal_509[7] = 0;
								iLocal_509[9] = 0;
								*iParam1++;
							}
						}
					}
				}
				break;
			case 3:
				if (__LIB_20__::func_728() == 0)
				{
					*iParam1++;
				}
				else if (__LIB_20__::func_728() == 2)
				{
					*iParam1++;
				}
				break;
			case 4:
				if (func_711(&Local_93, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_509[2] = 1;
					iLocal_509[1] = 1;
					iLocal_509[3] = 1;
					iLocal_509[4] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_93.f_0, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_93.f_0, false);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_93.f_0, sLocal_53);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_93.f_0, true);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_93.f_0, true);
					}
					if (func_711(&Local_94, 0, 0, 145, 1, -1, -1, -1))
					{
						iLocal_509[8] = 0;
						iLocal_509[7] = 0;
						if (__LIB_20__::func_728() == 0)
						{
							*iParam1++;
						}
						else if (__LIB_20__::func_728() == 2)
						{
							if (func_466(&Local_92, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, Local_93.f_0, -1, 1))
							{
								iLocal_147[0] = Local_92.f_0;
								iLocal_509[12] = 1;
								*iParam1++;
							}
						}
					}
				}
				break;
			case 5:
				if (func_711(&Local_93, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_509[2] = 1;
					iLocal_509[1] = 1;
					iLocal_509[5] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_93.f_0, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_93.f_0, false);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_93.f_0, sLocal_53);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_93.f_0, true);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_93.f_0, false);
					}
					if (func_711(&Local_94, 0, 0, 145, 1, -1, -1, -1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_94.f_0, false))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_94.f_0, false);
						}
						if (__LIB_20__::func_728() == 0)
						{
							iLocal_509[13] = 1;
							iLocal_509[12] = 1;
							*iParam1++;
						}
						else if (__LIB_20__::func_728() == 2)
						{
							if (func_466(&Local_92, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, 0, -1, 1))
							{
								iLocal_147[0] = Local_92.f_0;
								iLocal_509[13] = 1;
								iLocal_509[12] = 1;
								*iParam1++;
							}
						}
					}
				}
				break;
			case 6:
				if (func_711(&Local_93, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_509[2] = 1;
					iLocal_509[1] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_93.f_0, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_93.f_0, false);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_93.f_0, sLocal_53);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_93.f_0, true);
					}
					if (__LIB_20__::func_728() == 0)
					{
						iLocal_509[13] = 1;
						iLocal_509[12] = 1;
						*iParam1++;
					}
					else if (__LIB_20__::func_728() == 2)
					{
						if (func_466(&Local_92, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, 0, -1, 1))
						{
							iLocal_147[0] = Local_92.f_0;
							iLocal_509[13] = 1;
							iLocal_509[12] = 1;
							*iParam1++;
						}
					}
				}
				break;
			case 7:
				if (iLocal_397 == 0)
				{
					func_412(&Local_1063, Local_59);
					func_411(&Local_1064);
					iLocal_397 = 1;
				}
				iLocal_443 = 0;
				if (((func_670(&Local_144, 1) && func_670(&Local_138, 1)) && func_670(&Local_141, 1)) && func_466(&Local_84, 0, joaat("NO_RELATIONSHIP"), 0, 145, 0, 0, 0, 0, -1, 1))
				{
					if (func_711(&Local_93, 0, 0, 145, 1, -1, 86, 0))
					{
						iLocal_509[2] = 1;
						iLocal_509[1] = 1;
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
						{
							AUDIO::SET_VEH_RADIO_STATION(Local_93.f_0, "OFF");
							AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_93.f_0, false);
							VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_93.f_0, sLocal_53);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_93.f_0, true);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_93.f_0, true);
						}
						if (__LIB_20__::func_728() == 0)
						{
							*iParam1++;
						}
						else if (__LIB_20__::func_728() == 2)
						{
							if (func_466(&Local_92, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, 0, -1, 1))
							{
								iLocal_147[0] = Local_92.f_0;
								iLocal_509[12] = 1;
								*iParam1++;
							}
						}
					}
				}
				break;
			case 8:
				if (func_711(&Local_93, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_509[2] = 1;
					iLocal_509[1] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_93.f_0, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_93.f_0, false);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_93.f_0, sLocal_53);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_93.f_0, true);
					}
					if (__LIB_20__::func_728() == 0)
					{
						*iParam1++;
					}
					else if (__LIB_20__::func_728() == 2)
					{
						if (func_466(&Local_92, 1, joaat("PLAYER"), 0, 0, 0, 0, 0, 0, -1, 1))
						{
							iLocal_147[0] = Local_92.f_0;
							iLocal_509[12] = 1;
							*iParam1++;
						}
					}
				}
				break;
			case 9:
			case 10:
				if (func_711(&Local_101, 0, 0, 145, 1, 1, -1, -1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
					{
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_101.f_0, true);
					}
					iLocal_509[11] = 1;
					iLocal_509[10] = 1;
					switch (iParam0)
					{
						case 9:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_101.f_0, true);
							}
							break;
						case 10:
							if (*uParam3 == 1 || *iParam4 == 1)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
								{
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_101.f_0);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_101.f_0, true, true, false);
								}
							}
							break;
					}
					if (__LIB_20__::func_728() == 0)
					{
						if (func_466(&Local_91, 1, joaat("PLAYER"), 0, 2, 0, 0, 0, Local_101.f_0, -1, 1))
						{
							iLocal_147[2] = Local_91.f_0;
							iLocal_509[13] = 1;
							if (__LIB_11__::func_819() == 2 && __LIB_24__::func_934())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
								{
									__LIB_32__::func_493();
									if (__LIB_26__::func_580())
									{
										MISC::CLEAR_AREA(Local_94.f_2, 10f, true, false, false, false);
										Local_94.f_0 = __LIB_41__::func_992(Local_94.f_2, Local_94.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_94.f_0, true);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_94.f_0, 5f);
										if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_9__::func_997()))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_94.f_0, true);
										}
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_997());
									}
								}
								else
								{
									*iParam1++;
								}
							}
							else if (__LIB_11__::func_819() == 0 && __LIB_24__::func_934())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
								{
									__LIB_32__::func_493();
									if (__LIB_26__::func_580())
									{
										MISC::CLEAR_AREA(Local_94.f_2, 10f, true, false, false, false);
										Local_94.f_0 = __LIB_41__::func_992(Local_94.f_2, Local_94.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_94.f_0, true);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_94.f_0, 5f);
										if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_9__::func_997()))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_94.f_0, true);
										}
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_997());
									}
								}
								else
								{
									*iParam1++;
								}
							}
							else if ((Local_122.f_66 == 0 && func_711(&Local_94, 1, 0, 2, 1, -1, -1, -1)) || Local_122.f_66 != 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_94.f_0, false))
									{
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_94.f_0)))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_94.f_0, true);
										}
									}
								}
								*iParam1++;
							}
						}
					}
					else if (__LIB_20__::func_728() == 2)
					{
						if (__LIB_11__::func_819() == 2 && __LIB_24__::func_934())
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
							{
								__LIB_32__::func_493();
								if (__LIB_26__::func_580())
								{
									MISC::CLEAR_AREA(Local_94.f_2, 10f, true, false, false, false);
									Local_94.f_0 = __LIB_41__::func_992(Local_94.f_2, Local_94.f_5);
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_94.f_0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_94.f_0, 5f);
									if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_9__::func_997()))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_94.f_0, true);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_997());
								}
							}
							else
							{
								*iParam1++;
							}
						}
						else if (__LIB_11__::func_819() == 0 && __LIB_24__::func_934())
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
							{
								__LIB_32__::func_493();
								if (__LIB_26__::func_580())
								{
									MISC::CLEAR_AREA(Local_94.f_2, 10f, true, false, false, false);
									Local_94.f_0 = __LIB_41__::func_992(Local_94.f_2, Local_94.f_5);
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_94.f_0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_94.f_0, 5f);
									if (VEHICLE::IS_THIS_MODEL_A_HELI(__LIB_9__::func_997()))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_94.f_0, true);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_997());
								}
							}
							else
							{
								*iParam1++;
							}
						}
						else if ((Local_122.f_66 == 0 && func_711(&Local_94, 1, 0, 2, 1, -1, -1, -1)) || Local_122.f_66 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_94.f_0, false))
								{
									if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_94.f_0)))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_94.f_0, true);
									}
								}
							}
							*iParam1++;
						}
					}
				}
				break;
			}
	}
	if (*iParam1 == 5)
	{
		iLocal_392 = 0;
		switch (iParam0)
		{
			case 0:
				break;
			case 1:
				switch (__LIB_20__::func_728())
				{
					case 0:
						__LIB_11__::func_872(4, 1, 1);
						break;
					case 2:
						PLAYER::EXTEND_WORLD_BOUNDARY_FOR_PLAYER(Local_364);
						__LIB_11__::func_872(4, 1, 1);
						break;
				}
				break;
			case 2:
				iLocal_392 = 1;
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					if (__LIB_39__::func_436(&iLocal_147, 2))
					{
						func_802(&iLocal_147, 1, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_147[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_147[0]))
							{
								PED::DELETE_PED(&(iLocal_147[0]));
							}
						}
					}
					PLAYER::EXTEND_WORLD_BOUNDARY_FOR_PLAYER(Local_364);
				}
				break;
			case 3:
				break;
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				if (__LIB_39__::func_436(&iLocal_147, 0))
				{
					func_802(&iLocal_147, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_147[2]))
					{
						if (!PED::IS_PED_INJURED(iLocal_147[2]))
						{
							PED::DELETE_PED(&(iLocal_147[2]));
						}
					}
				}
				break;
			case 9:
			case 10:
				iLocal_392 = 1;
				if (__LIB_39__::func_436(&iLocal_147, 2))
				{
					func_802(&iLocal_147, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_147[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_147[0]))
						{
							PED::DELETE_PED(&(iLocal_147[0]));
						}
					}
				}
				switch (iParam0)
				{
					case 9:
						PLAYER::EXTEND_WORLD_BOUNDARY_FOR_PLAYER(Local_101.f_2 + Local_62);
						break;
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 6)
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 9:
			case 10:
				__LIB_0__::func_54(1, 1);
				if (iLocal_390 == 1)
				{
					func_49();
					func_47();
					func_45();
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.789253f, 3679.3267f, -4973.8794f, 125.08284f, 192f, false, false, true);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3691.2114f, -4941.24f, 94.59368f, 3511.1155f, -4869.1914f, 126.76211f, 16f, false, false, true);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3510.0044f, -4865.81f, 94.69557f, 3204.4243f, -4833.817f, 126.815216f, 16f, false, false, true);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3186.5337f, -4832.798f, 109.81483f, 3202.1873f, -4833.993f, 114.814995f, 16f, false, false, true);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::DISABLE_MOON_CYCLE_OVERRIDE();
					VEHICLE::SET_AMBIENT_VEHICLE_NEON_ENABLED(true);
					__LIB_11__::func_144();
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_477))
					{
						OBJECT::REMOVE_PICKUP(iLocal_477);
					}
					if (__LIB_11__::func_645(0))
					{
						__LIB_9__::func_485(0, 0);
					}
					if (__LIB_11__::func_645(20))
					{
						__LIB_9__::func_485(20, 0);
					}
					if (__LIB_11__::func_645(5))
					{
						__LIB_9__::func_485(5, 0);
					}
					iLocal_390 = 0;
				}
				VEHICLE::SET_RANDOM_TRAINS(true);
				PATHFIND::SET_ALLOW_STREAM_PROLOGUE_NODES(false);
				__LIB_11__::func_501(0);
				MISC::ENABLE_DISPATCH_SERVICE(1, true);
				MISC::ENABLE_DISPATCH_SERVICE(2, true);
				MISC::ENABLE_DISPATCH_SERVICE(3, true);
				MISC::ENABLE_DISPATCH_SERVICE(4, true);
				MISC::ENABLE_DISPATCH_SERVICE(5, true);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				PED::SET_CREATE_RANDOM_COPS(true);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("asea2"), false);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mesa2"), false);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
				if (iLocal_388 == 1)
				{
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					MISC::UNLOAD_ALL_CLOUD_HATS();
					iLocal_388 = 0;
				}
				STREAMING::SET_MAPDATACULLBOX_ENABLED("prologue", false);
				STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", false);
				if ((iLocal_389 == 1 || *uParam3 == 1) || *iParam4 == 1)
				{
					switch (iParam0)
					{
						case 9:
						case 10:
							func_654(func_965(2));
							break;
						default:
							func_796();
							break;
					}
					iLocal_389 = 0;
				}
				if (iParam0 == 9)
				{
					CLOCK::SET_CLOCK_TIME(6, 15, 0);
					MISC::SET_WEATHER_TYPE_NOW("OVERCAST");
				}
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
				AUDIO::STOP_AUDIO_SCENE("MIC1_RADIO_DISABLE");
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZL_YANKTON_ZONE_KILL_LIST", true, true);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZONE_LIST_YANKTON", false, true);
				func_795();
				if (*uParam3 == 1)
				{
					if (iLocal_387 == 1)
					{
						switch (__LIB_20__::func_728())
						{
							case 0:
								__LIB_36__::func_65(PLAYER::PLAYER_PED_ID(), 1);
								break;
							case 2:
								__LIB_11__::func_994(0);
								break;
						}
						iLocal_387 = 0;
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, false, true);
					Global_39111[38] = 3;
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, false, true);
					Global_39111[39] = 3;
				}
				break;
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				__LIB_0__::func_54(0, 1);
				if (iLocal_390 == 0)
				{
					if (!__LIB_0__::func_295())
					{
						func_687();
						func_425(0);
					}
					func_792();
					func_790();
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.789253f, 3679.3267f, -4973.8794f, 125.08284f, 192f, false, true, true);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3691.2114f, -4941.24f, 94.59368f, 3511.1155f, -4869.1914f, 126.76211f, 16f, false, true, true);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3510.0044f, -4865.81f, 94.69557f, 3204.4243f, -4833.817f, 126.815216f, 16f, false, true, true);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3186.5337f, -4832.798f, 109.81483f, 3202.1873f, -4833.993f, 114.814995f, 16f, false, true, true);
					__LIB_11__::func_172();
					switch (iParam0)
					{
						case 4:
							CLOCK::SET_CLOCK_TIME(22, 0, 0);
							break;
						case 5:
						case 6:
						case 7:
						case 8:
							CLOCK::SET_CLOCK_TIME(0, 0, 0);
							break;
					}
					switch (__LIB_20__::func_728())
					{
						case 0:
							if (iLocal_387 == 0)
							{
								if (!bLocal_385)
								{
									func_787(PLAYER::PLAYER_PED_ID());
								}
								func_786(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 100);
								iLocal_387 = 1;
							}
							break;
						case 2:
							break;
					}
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_477))
					{
						iLocal_474 = 0;
						MISC::SET_BIT(&iLocal_474, 1);
						MISC::SET_BIT(&iLocal_474, 8);
						MISC::SET_BIT(&iLocal_474, 4);
						iLocal_477 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 3243.38f, -4647.38f, 114.975f, 0f, 0f, 94.5f, iLocal_474, -1, 2, true, 0);
					}
					__LIB_9__::func_485(0, 1);
					__LIB_9__::func_485(20, 1);
					__LIB_9__::func_485(5, 1);
					GRAPHICS::ENABLE_MOON_CYCLE_OVERRIDE(0.5f);
					VEHICLE::SET_AMBIENT_VEHICLE_NEON_ENABLED(false);
					iLocal_390 = 1;
				}
				switch (iParam0)
				{
					case 4:
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						break;
					case 5:
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("graveyard_shootout", 30f);
						break;
					case 6:
					case 7:
					case 8:
						if (*uParam3 == 1 || *iParam4 == 1)
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER("graveyard_shootout");
						}
						break;
				}
				switch (iParam0)
				{
					case 7:
						PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						if (!OBJECT::DOES_PICKUP_EXIST(iLocal_478))
						{
							iLocal_475 = 0;
							MISC::SET_BIT(&iLocal_475, 1);
							MISC::SET_BIT(&iLocal_475, 8);
							MISC::SET_BIT(&iLocal_475, 4);
							iLocal_478 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PISTOL"), 3258.789f, -4575.306f, 117.257f, -88.2f, 65.88f, 0f, iLocal_475, 12, 2, true, 0);
						}
						if (!OBJECT::DOES_PICKUP_EXIST(iLocal_479))
						{
							iLocal_476 = 0;
							MISC::SET_BIT(&iLocal_476, 1);
							MISC::SET_BIT(&iLocal_476, 8);
							MISC::SET_BIT(&iLocal_476, 4);
							iLocal_479 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 3265.805f, -4591.315f, 116.1286f, -70.2f, -14.4f, -28.8f, iLocal_476, 50, 2, true, 0);
						}
						break;
				}
				VEHICLE::SET_RANDOM_TRAINS(false);
				PATHFIND::SET_ALLOW_STREAM_PROLOGUE_NODES(true);
				__LIB_11__::func_501(1);
				MISC::ENABLE_DISPATCH_SERVICE(1, false);
				MISC::ENABLE_DISPATCH_SERVICE(2, false);
				MISC::ENABLE_DISPATCH_SERVICE(3, false);
				MISC::ENABLE_DISPATCH_SERVICE(4, false);
				MISC::ENABLE_DISPATCH_SERVICE(5, false);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(false);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("asea2"), true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mesa2"), true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold1"), true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold2"), true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), true);
				if (iLocal_388 == 0)
				{
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("SNOWLIGHT");
					MISC::UNLOAD_ALL_CLOUD_HATS();
					MISC::LOAD_CLOUD_HAT("Snowy 01", 0f);
					iLocal_388 = 1;
				}
				STREAMING::SET_MAPDATACULLBOX_ENABLED("prologue", true);
				STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", true);
				if (iLocal_389 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_965(0)))
					{
						if (!PED::IS_PED_INJURED(func_965(0)))
						{
							func_438(func_965(0), 12, 17, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_965(2)))
					{
						if (!PED::IS_PED_INJURED(func_965(2)))
						{
							func_438(func_965(2), 12, 23, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					iLocal_389 = 1;
				}
				switch (iParam0)
				{
					case 7:
					case 8:
						if (iLocal_489 == 0)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.621f, 0.755f, 55.084f, 0.01f, 1f, 1, true, "bruise");
								iLocal_489 = 1;
							}
						}
						break;
				}
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MIC1_RADIO_DISABLE"))
				{
					AUDIO::START_AUDIO_SCENE("MIC1_RADIO_DISABLE");
				}
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZL_YANKTON_ZONE_KILL_LIST", false, true);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZONE_LIST_YANKTON", true, true);
				func_785();
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					VEHICLE::DELETE_ALL_TRAINS();
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		if (iLocal_390 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (((((STREAMING::HAS_PTFX_ASSET_LOADED() && func_686()) && func_424(0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ICE_FOOTSTEPS", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SNOW_FOOTSTEPS", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT", false, -1))
			{
				*iParam1++;
			}
		}
		else if (iLocal_390 == 0)
		{
			STREAMING::REMOVE_PTFX_ASSET();
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT");
			*iParam1++;
		}
	}
	if (*iParam1 == 8)
	{
		__LIB_0__::func_202(&uLocal_199, 0);
		__LIB_0__::func_202(&uLocal_199, 2);
		__LIB_0__::func_202(&uLocal_199, 3);
		__LIB_0__::func_202(&uLocal_199, 4);
		__LIB_0__::func_202(&uLocal_199, 5);
		__LIB_0__::func_202(&uLocal_199, 6);
		__LIB_0__::func_202(&uLocal_199, 7);
		__LIB_0__::func_202(&uLocal_199, 8);
		AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
		switch (iParam0)
		{
			case 1:
			case 2:
				switch (__LIB_20__::func_728())
				{
					case 0:
						__LIB_0__::func_203(&uLocal_199, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						__LIB_0__::func_203(&uLocal_199, 2, 0, "TREVOR", 0, 1);
						break;
					case 2:
						__LIB_0__::func_203(&uLocal_199, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__::func_203(&uLocal_199, 0, 0, "MICHAEL", 0, 1);
						break;
				}
				__LIB_0__::func_203(&uLocal_199, 3, 0, "DAVE", 0, 1);
				__LIB_0__::func_203(&uLocal_199, 4, 0, "NERVOUSRON", 0, 1);
				__LIB_0__::func_203(&uLocal_199, 8, 0, "MCH1AIRTRAFFIC", 0, 1);
				__LIB_8__::func_770(0);
				__LIB_0__::func_367(0);
				break;
			case 4:
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_203(&uLocal_199, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				__LIB_8__::func_770(0);
				__LIB_0__::func_367(1);
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", true);
				break;
			case 7:
			case 8:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_203(&uLocal_199, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				__LIB_8__::func_770(0);
				__LIB_0__::func_367(1);
				break;
			case 9:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_203(&uLocal_199, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				__LIB_0__::func_203(&uLocal_199, 5, 0, "CHENGSR", 0, 1);
				__LIB_8__::func_770(0);
				__LIB_0__::func_367(1);
				break;
			case 10:
				__LIB_8__::func_770(0);
				__LIB_0__::func_367(0);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 1:
					switch (__LIB_20__::func_728())
					{
						case 0:
							*iParam1++;
							break;
						case 2:
							TASK::REQUEST_WAYPOINT_RECORDING("mic1_tdrive");
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_tdrive"))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, false))
										{
											PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93.f_0, -1);
										}
										MISC::CLEAR_AREA_OF_PEDS(-857.8701f, 172.5816f, 67.0251f, 10f, 0);
										MISC::CLEAR_AREA_OF_VEHICLES(-857.8701f, 172.5816f, 67.0251f, 10f, false, false, false, false, false, false, 0);
										ENTITY::SET_ENTITY_COORDS(Local_93.f_0, -857.8701f, 172.5816f, 67.0251f, true, false, false, true);
										ENTITY::SET_ENTITY_HEADING(Local_93.f_0, 355.2254f);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
										__LIB_36__::func_50(Local_93.f_0);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_93.f_0, 10f);
										TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), Local_93.f_0, "mic1_tdrive", 786468, 0, 8, -1, -1f, false, 2f);
										*iParam1++;
									}
								}
							}
							break;
					}
					break;
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 10)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				STREAMING::LOAD_SCENE(Var0);
				SYSTEM::WAIT(1000);
			}
			else
			{
				__LIB_6__::func_775(0, -1, 0);
			}
			switch (iParam0)
			{
				case 7:
					__LIB_23__::func_169(PLAYER::PLAYER_PED_ID(), 3256.5776f, -4575.252f, 117.267f, 267.6326f, 0, 0, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_1063[0 /*13*/].f_1, -1, true, 0f, true, true, Local_1063[0 /*13*/], false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
					if (iLocal_83 == 0 || iLocal_83 == joaat("WEAPON_UNARMED"))
					{
						iLocal_83 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), true);
						if (iLocal_83 == 0 || iLocal_83 == joaat("WEAPON_UNARMED"))
						{
							iLocal_83 = joaat("WEAPON_PISTOL");
						}
					}
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_83) < WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iLocal_83, true))
					{
						iVar1 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iLocal_83, true) * 2;
					}
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_83, iVar1, true, true);
					SYSTEM::WAIT(500);
					break;
				case 3:
				case 4:
					if (!PED::IS_PED_INJURED(func_965(0)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
						{
							PED::SET_PED_INTO_VEHICLE(func_965(0), Local_93.f_0, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_93.f_0, 5f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_93.f_0, true, true, false);
						}
					}
					break;
				case 9:
				case 10:
					if (!PED::IS_PED_INJURED(func_965(2)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, false))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(func_965(2), Local_101.f_0))
							{
								PED::SET_PED_INTO_VEHICLE(func_965(2), Local_101.f_0, -1);
							}
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_101.f_0, true, true, false);
						}
					}
					break;
			}
			if (*uParam3 == 1)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
			if (iParam0 == 7)
			{
				if (iLocal_399 == 0)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-45f);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-72.37355f);
					}
					iLocal_399 = 1;
				}
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			switch (iParam0)
			{
				case 7:
					AUDIO::TRIGGER_MUSIC_EVENT("MIC1_SHOOTOUT_RT");
					break;
				case 8:
					AUDIO::TRIGGER_MUSIC_EVENT("MIC1_SKIPPED_TO_KIDNAP");
					break;
				case 9:
					AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLY_HOME_RT");
					break;
			}
			switch (iParam0)
			{
				case 1:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), true);
					}
					break;
				default:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), false);
					}
					break;
			}
			switch (iParam0)
			{
				case 0:
				case 3:
				case 4:
				case 6:
				case 8:
				case 9:
					break;
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		switch (iParam0)
		{
			case 1:
				__LIB_42__::func_871(0, "GET TO AIRPORT", 0, 0, 0, 0);
				break;
			case 2:
				__LIB_42__::func_871(1, "FLY TO NORTH YANKTON", 0, 0, 0, 1);
				break;
			case 4:
				__LIB_42__::func_871(2, "GET TO GRAVEYARD", 0, 0, 0, 0);
				break;
			case 5:
				__LIB_42__::func_871(3, "GET TO GRAVE", 0, 0, 0, 0);
				break;
			case 7:
				__LIB_42__::func_871(4, "GRAVEYARD SHOOTOUT", 0, 0, 0, 0);
				break;
			case 9:
				__LIB_42__::func_871(5, "FLY HOME", 1, 0, 0, 0);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		*iParam1++;
	}
	if (*iParam1 == 13)
	{
		return 1;
	}
	return 0;
}

void func_785()//Position - 0x8DB35
{
	if (iLocal_498 == -1)
	{
		iLocal_498 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3242.716f, -4707.644f, 112f, 18.144f, 14.964f, 5f, 0f, false, 7);
	}
	if (iLocal_499 == -1)
	{
		iLocal_499 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3294.783f, -4613.386f, 112f, 4.2f, 6.294f, 5f, 0f, false, 7);
	}
	if (iLocal_500 == -1)
	{
		iLocal_500 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3263.877f, -4560.729f, 118f, 6.65f, 6f, 5f, 0f, false, 7);
	}
	if (iLocal_501 == -1)
	{
		iLocal_501 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3238.994f, -4592.786f, 115f, 6.65f, 6f, 5f, 0f, false, 7);
	}
	if (iLocal_502 == -1)
	{
		iLocal_502 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3198.355f, -4706.313f, 112f, 12.179f, 14.115f, 5f, 0f, false, 7);
	}
	if (iLocal_503 == -1)
	{
		iLocal_503 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3214f, -4765.436f, 112f, 64f, 32f, 8f, 0f, false, 7);
	}
	if (iLocal_504 == -1)
	{
		iLocal_504 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3259.8f, -4573.9f, 117.3f, 2.5f, 4f, 2f, 0f, false, 7);
	}
}

void func_786(int iParam0, int iParam1, int iParam2)//Position - 0x8DC62
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = 0;
			while (iVar0 <= (44 - 1))
			{
				iVar1 = __LIB_0__::func_263(iVar0);
				if (iVar1 != 0)
				{
					iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
					if ((iVar2 != iParam1 && iVar2 != joaat("WEAPON_UNARMED")) && iVar2 != 0)
					{
						WEAPON::SET_PED_AMMO(iParam0, iVar2, 0, false);
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
					}
				}
				iVar0++;
			}
			iVar4 = FILES::GET_NUM_DLC_WEAPONS();
			iVar3 = 0;
			while (iVar3 < iVar4)
			{
				if (FILES::GET_DLC_WEAPON_DATA(iVar3, &Var5))
				{
					iVar6 = Var5.f_1;
					if ((iVar6 != iParam1 && iVar6 != 0) && iVar6 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::SET_PED_AMMO(iParam0, iVar6, 0, false);
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar6);
					}
				}
				iVar3++;
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, false))
			{
				iVar7 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1);
				if (iVar7 < iParam2)
				{
					iVar8 = (iParam2 - iVar7);
					WEAPON::ADD_AMMO_TO_PED(iParam0, iParam1, iVar8);
				}
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, false, false);
			}
		}
	}
}

void func_787(int iParam0)//Position - 0x8DD72
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_20__::func_509(iParam0);
		__LIB_18__::func_178(iParam0, &(Global_113386.f_2363.f_539.f_1764));
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			Global_113386.f_2363.f_539.f_1730[iVar1 /*4*/][iVar0] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(iVar1);
			iVar1++;
		}
	}
}

void func_790()//Position - 0x8E06C
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_791(iVar0);
		iVar0++;
	}
}

void func_791(int iParam0)//Position - 0x8E08F
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_1065[iParam0 /*6*/]))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_1065[iParam0 /*6*/], 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_1065[iParam0 /*6*/], 1, false, true);
	}
}

void func_792()//Position - 0x8E0C1
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_793(iVar0);
		iVar0++;
	}
}

void func_793(int iParam0)//Position - 0x8E0E4
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_1065[iParam0 /*6*/]))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(Local_1065[iParam0 /*6*/], Local_1065[iParam0 /*6*/].f_4, Local_1065[iParam0 /*6*/].f_1, false, false, false);
	}
}

void func_795()//Position - 0x8E12E
{
	if (iLocal_498 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_498);
		iLocal_498 = -1;
	}
	if (iLocal_499 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_499);
		iLocal_499 = -1;
	}
	if (iLocal_500 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_500);
		iLocal_500 = -1;
	}
	if (iLocal_501 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_501);
		iLocal_501 = -1;
	}
	if (iLocal_502 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_502);
		iLocal_502 = -1;
	}
	if (iLocal_503 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_503);
		iLocal_503 = -1;
	}
	if (iLocal_504 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_504);
		iLocal_504 = -1;
	}
}

void func_796()//Position - 0x8E1B4
{
	__LIB_11__::func_157(&Global_103950);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_480(PLAYER::PLAYER_PED_ID(), &(Global_100166[__LIB_20__::func_509(PLAYER::PLAYER_PED_ID()) /*65*/]), 0, 0, 1, 0);
	}
}

int func_802(int* iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x8E380
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
	if (!iParam0->f_39)
	{
		if (iParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*iParam0)[iParam0->f_7] != PLAYER::PLAYER_PED_ID())
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
			if ((PED::IS_PED_RAGDOLL((*iParam0)[iParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*iParam0)[iParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*iParam0)[iParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*iParam0)[iParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*iParam0)[iParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		iVar1 = __LIB_20__::func_728();
		if (!iParam0->f_23)
		{
			__LIB_40__::func_634(iVar0, 0);
		}
		__LIB_11__::func_858(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_388(iParam0->f_7);
		__LIB_40__::func_634((*iParam0)[iParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_20__::func_509(PLAYER::PLAYER_PED_ID()))
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
		if (__LIB_0__::func_317(__LIB_20__::func_728()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*iParam0)[iParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_6__::func_854(0) || __LIB_6__::func_854(3))
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
		iParam0->f_5 = __LIB_0__::func_504(iVar1);
		if (iParam0->f_5 == 4)
		{
			iParam0->f_5 = 3;
		}
		(*iParam0)[iParam0->f_5] = iVar0;
		(*iParam0)[iParam0->f_7] = 0;
		iParam0->f_6 = __LIB_0__::func_504(iVar2);
		iParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_20__::func_723(iVar7);
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
				__LIB_20__::func_723(iVar0);
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
		__LIB_0__::func_385(PLAYER::PLAYER_PED_ID());
		__LIB_20__::func_722();
		__LIB_9__::func_998(iVar2);
		__LIB_32__::func_797();
		__LIB_26__::func_368(iVar2);
		__LIB_39__::func_917(__LIB_6__::func_815(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_368(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_368(68));
		}
		__LIB_20__::func_676(iVar2, &iVar7);
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
		if (!__LIB_0__::func_381())
		{
			__LIB_26__::func_477();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*iParam0)[iParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*iParam0)[iParam0->f_7])
		{
		}
	}
	return 0;
}

int func_854(struct<3> Param0, float fParam1)//Position - 0x93F00
{
	return __LIB_41__::func_390(&(Global_103950.f_2890), Param0, fParam1, 0);
}

void func_885(int iParam0)//Position - 0x95080
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_509 - 1))
	{
		iLocal_509[iVar0] = iParam0;
		iVar0++;
	}
}

void func_888(int iParam0)//Position - 0x95138
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			switch (__LIB_20__::func_728())
			{
				case 0:
					break;
				case 2:
					if (!ENTITY::DOES_ENTITY_EXIST(Local_101.f_0))
					{
						__LIB_11__::func_875(Local_101.f_6, &uLocal_510, 6, &uLocal_440);
					}
					break;
			}
			break;
		case 2:
			if (__LIB_20__::func_728() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
				{
					__LIB_11__::func_875(Local_91.f_6, &uLocal_510, 6, &uLocal_440);
				}
			}
			else if (__LIB_20__::func_728() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_92.f_0))
				{
					__LIB_11__::func_875(Local_91.f_6, &uLocal_510, 6, &uLocal_440);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_101.f_0))
			{
				__LIB_11__::func_875(Local_101.f_6, &uLocal_510, 6, &uLocal_440);
			}
			break;
		case 3:
			break;
		case 4:
			STREAMING::REQUEST_PTFX_ASSET();
			if (__LIB_20__::func_728() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_92.f_0))
				{
					__LIB_11__::func_875(Local_92.f_6, &uLocal_510, 6, &uLocal_440);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
			{
				__LIB_11__::func_875(Local_93.f_6, &uLocal_510, 6, &uLocal_440);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
			{
				__LIB_11__::func_875(Local_94.f_6, &uLocal_510, 6, &uLocal_440);
			}
			__LIB_23__::func_173(4, sLocal_54, &uLocal_517, 6, &uLocal_441);
			__LIB_23__::func_173(5, sLocal_54, &uLocal_517, 6, &uLocal_441);
			break;
		case 5:
			STREAMING::REQUEST_PTFX_ASSET();
			if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
			{
				__LIB_11__::func_875(Local_93.f_6, &uLocal_510, 6, &uLocal_440);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
			{
				__LIB_11__::func_875(Local_94.f_6, &uLocal_510, 6, &uLocal_440);
			}
			break;
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
			{
				__LIB_11__::func_875(Local_93.f_6, &uLocal_510, 6, &uLocal_440);
			}
			break;
		case 7:
			STREAMING::REQUEST_PTFX_ASSET();
			if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
			{
				__LIB_11__::func_875(Local_93.f_6, &uLocal_510, 6, &uLocal_440);
			}
			if (__LIB_20__::func_728() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_92.f_0))
				{
					__LIB_11__::func_875(Local_92.f_6, &uLocal_510, 6, &uLocal_440);
				}
			}
			__LIB_11__::func_875(iLocal_55, &uLocal_510, 6, &uLocal_440);
			__LIB_11__::func_875(iLocal_56, &uLocal_510, 6, &uLocal_440);
			__LIB_23__::func_173(Local_1062[0 /*14*/].f_7, sLocal_54, &uLocal_517, 6, &uLocal_441);
			__LIB_23__::func_173(Local_1062[1 /*14*/].f_7, sLocal_54, &uLocal_517, 6, &uLocal_441);
			__LIB_23__::func_173(Local_1062[4 /*14*/].f_7, sLocal_54, &uLocal_517, 6, &uLocal_441);
			break;
		case 8:
			STREAMING::REQUEST_PTFX_ASSET();
			if (!ENTITY::DOES_ENTITY_EXIST(Local_92.f_0))
			{
				__LIB_11__::func_875(Local_92.f_6, &uLocal_510, 6, &uLocal_440);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
			{
				__LIB_11__::func_875(Local_93.f_6, &uLocal_510, 6, &uLocal_440);
			}
			break;
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
			{
				__LIB_11__::func_875(Local_91.f_6, &uLocal_510, 6, &uLocal_440);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_101.f_0))
			{
				__LIB_11__::func_875(Local_101.f_6, &uLocal_510, 6, &uLocal_440);
			}
			__LIB_23__::func_173(Local_101.f_7, sLocal_54, &uLocal_517, 6, &uLocal_441);
			break;
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
			{
				__LIB_11__::func_875(Local_91.f_6, &uLocal_510, 6, &uLocal_440);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_101.f_0))
			{
				__LIB_11__::func_875(Local_101.f_6, &uLocal_510, 6, &uLocal_440);
			}
			break;
	}
}

void func_892()//Position - 0x9559F
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_507;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_507[iVar1] = 0;
		iVar1++;
	}
	iLocal_508 = 0;
}

void func_895(int iParam0)//Position - 0x95663
{
	Local_92.f_6 = __LIB_19__::func_811(0);
	Local_91.f_6 = __LIB_19__::func_811(2);
	Local_1065[0 /*6*/] = 380898258;
	Local_1065[0 /*6*/].f_1 = { 3293.6226f, -4611.3037f, 116.7559f };
	Local_1065[0 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_l");
	Local_1065[1 /*6*/] = -1889206990;
	Local_1065[1 /*6*/].f_1 = { 3293.2231f, -4615.06f, 116.754f };
	Local_1065[1 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_r");
	Local_1065[2 /*6*/] = -1834311451;
	Local_1065[2 /*6*/].f_1 = { 3239.1865f, -4594.8237f, 117.7705f };
	Local_1065[2 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_l");
	Local_1065[3 /*6*/] = 1669415571;
	Local_1065[3 /*6*/].f_1 = { 3239.9766f, -4591.13f, 117.7685f };
	Local_1065[3 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_r");
	Local_1065[4 /*6*/] = 22407341;
	Local_1065[4 /*6*/].f_1 = { 3262.5972f, -4561.6587f, 119.0779f };
	Local_1065[4 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_l");
	Local_1065[5 /*6*/] = -1132110067;
	Local_1065[5 /*6*/].f_1 = { 3266.3745f, -4561.663f, 119.076f };
	Local_1065[5 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_r");
	switch (iParam0)
	{
		case 0:
			Local_91.f_2 = { -802.4639f, 173.0358f, 71.8447f };
			Local_91.f_5 = 288.844f;
			Local_91.f_7 = { 1733.6469f, 3306.02f, 40.2261f };
			Local_92.f_2 = { -802.4639f, 173.0358f, 71.8447f };
			Local_92.f_5 = 288.844f;
			Local_92.f_7 = { -1033.2f, -2731.17f, 19.05f };
			Local_93.f_6 = __LIB_11__::func_311(0, 0);
			Local_93.f_2 = { -829.2751f, 176.4524f, 69.8634f };
			Local_93.f_5 = 151.863f;
			Local_93.f_7 = 3;
			Local_94.f_6 = __LIB_11__::func_311(2, 0);
			Local_94.f_2 = { -825.8718f, 157.3143f, 69.4619f };
			Local_94.f_5 = 90f;
			Local_94.f_7 = 1;
			Local_101.f_6 = joaat("cuban800");
			Local_101.f_2 = { 1731.8021f, 3308.911f, 40.2237f };
			Local_101.f_5 = 194.8553f;
			Local_101.f_7 = 2;
			Local_364 = { -3841.2847f, 5020.6064f, 174.8651f };
			Local_364.f_3 = { 0.5f, 0.5f, 0.5f };
			break;
		case 1:
			Local_91.f_2 = { -818.0981f, 158.3042f, 69.7868f };
			Local_91.f_5 = 109.1361f;
			Local_91.f_7 = { 1733.6469f, 3306.02f, 40.2261f };
			Local_92.f_2 = { -813.9473f, 179.2056f, 71.1592f };
			Local_92.f_5 = 111.3824f;
			Local_92.f_7 = { -1033.2f, -2731.17f, 19.05f };
			Local_93.f_6 = __LIB_11__::func_311(0, 0);
			Local_93.f_2 = { -829.2751f, 176.4524f, 69.8634f };
			Local_93.f_5 = 151.863f;
			Local_93.f_7 = 3;
			Local_94.f_6 = __LIB_11__::func_311(2, 0);
			Local_94.f_2 = { -825.8718f, 157.3143f, 69.4619f };
			Local_94.f_5 = 90f;
			Local_94.f_7 = 1;
			Local_101.f_6 = joaat("cuban800");
			Local_101.f_2 = { 1731.8021f, 3308.911f, 40.2237f };
			Local_101.f_5 = 194.8553f;
			Local_101.f_7 = 2;
			Local_364 = { -3841.2847f, 5020.6064f, 174.8651f };
			Local_364.f_3 = { 0.5f, 0.5f, 0.5f };
			Local_135.f_2 = { Local_364 };
			Local_135.f_5 = { 0f, 0f, 0f };
			Local_135.f_1 = joaat("prop_golf_ball");
			break;
		case 2:
			Local_91.f_2 = { 1746.7969f, 3291.4446f, 40.1072f };
			Local_91.f_5 = 55.8571f;
			Local_91.f_7 = { 1733.6469f, 3306.02f, 40.2261f };
			Local_92.f_2 = { -826.91f, 176.45f, 69.97f };
			Local_92.f_5 = 129.1458f;
			Local_92.f_7 = { -1033.2f, -2731.17f, 19.05f };
			Local_93.f_6 = __LIB_11__::func_311(0, 0);
			Local_93.f_2 = { -828.4514f, 177.0704f, 69.9859f };
			Local_93.f_5 = 147.0378f;
			Local_93.f_7 = 3;
			Local_94.f_6 = __LIB_11__::func_311(2, 0);
			Local_94.f_2 = { 1747.3265f, 3294.0227f, 40.1071f };
			Local_94.f_5 = 84.1211f;
			Local_94.f_7 = 1;
			Local_101.f_6 = joaat("cuban800");
			Local_101.f_2 = { 1731.8021f, 3308.911f, 40.2237f };
			Local_101.f_5 = 194.8553f;
			Local_101.f_7 = 2;
			Local_364 = { -3841.2847f, 5020.6064f, 174.8651f };
			Local_364.f_3 = { 0.5f, 0.5f, 0.5f };
			Local_135.f_2 = { Local_364 };
			Local_135.f_5 = { 0f, 0f, 0f };
			Local_135.f_1 = joaat("prop_golf_ball");
			break;
		case 3:
			Local_92.f_2 = { -1033.3214f, -2727.2915f, 19.1813f };
			Local_92.f_5 = 239.5299f;
			Local_92.f_7 = { 0f, 0f, 0f };
			Local_91.f_2 = { -1012.2794f, -2738.5303f, 19.1873f };
			Local_91.f_5 = 329.2714f;
			Local_91.f_7 = { 0f, 0f, 0f };
			Local_93.f_6 = __LIB_11__::func_311(0, 0);
			Local_93.f_2 = { -1033.4814f, -2728.8206f, 19.1441f };
			Local_93.f_5 = 239.6801f;
			Local_101.f_6 = joaat("cuban800");
			Local_101.f_2 = { 1731.8021f, 3308.911f, 40.2237f };
			Local_101.f_5 = 194.8553f;
			break;
		case 4:
			Local_92.f_2 = { 5482.5986f, -5125.985f, 77.437f };
			Local_92.f_5 = 264.8607f;
			Local_92.f_7 = { 3216.8445f, -4682.9536f, 111.7127f };
			Local_91.f_2 = { 3259.527f, -4571.694f, 117.1567f };
			Local_91.f_5 = 181.547f;
			Local_93.f_6 = joaat("asea2");
			Local_93.f_2 = { 5575.986f, -5130.2427f, 79.5043f };
			Local_93.f_5 = 86.0572f;
			Local_93.f_7 = 5;
			Local_94.f_6 = joaat("mesa2");
			Local_94.f_2 = { 3257.9006f, -4689.813f, 111.8699f };
			Local_94.f_5 = 278.2631f;
			Local_134.f_2 = 9;
			Local_134.f_3 = { Local_64 };
			Local_134.f_6 = joaat("freight");
			Local_134.f_7 = joaat("freightcar");
			Local_134.f_8 = joaat("freightgrain");
			Local_134.f_9 = joaat("S_M_M_Trucker_01");
			break;
		case 5:
			Local_92.f_2 = { 3216.5117f, -4688.0327f, 111.6721f };
			Local_92.f_5 = 268.5004f;
			Local_91.f_2 = { 3259.527f, -4571.694f, 117.1567f };
			Local_91.f_5 = 181.547f;
			Local_93.f_6 = joaat("asea2");
			Local_93.f_2 = { 3212.0027f, -4689.323f, 111.6762f };
			Local_93.f_5 = 225.1631f;
			Local_94.f_6 = joaat("mesa2");
			Local_94.f_2 = { 3257.9006f, -4689.813f, 111.8699f };
			Local_94.f_5 = 278.2631f;
			Local_138.f_2 = { 3259.571f, -4572.774f, 116.1162f };
			Local_138.f_5 = { -91f, -38f, 0f };
			Local_138.f_1 = joaat("prop_ld_shovel");
			Local_141.f_2 = { 3259.245f, -4573.03f, 116.8103f };
			Local_141.f_5 = { 158f, 0f, 77.4f };
			Local_141.f_1 = joaat("prop_tool_pickaxe");
			Local_144.f_2 = { 3259.734f, -4573.897f, 115.8785f };
			Local_144.f_5 = { 5f, 0f, -180f };
			Local_144.f_1 = joaat("prop_coffin_02");
			break;
		case 6:
			Local_84.f_2 = { 3240.7776f, -4559.611f, 116.9483f };
			Local_84.f_5 = 92.2719f;
			Local_84.f_6 = joaat("CS_BradCadaver");
			Local_92.f_2 = { 3258.16f, -4572.49f, 117.16f };
			Local_92.f_5 = 180f;
			Local_92.f_7 = { 0f, 0f, 0f };
			Local_91.f_2 = { 3257.53f, -4574.04f, 117.16f };
			Local_91.f_5 = 0f;
			Local_91.f_7 = { 0f, 0f, 0f };
			Local_93.f_6 = joaat("asea2");
			Local_93.f_2 = { 3211.3403f, -4688.4854f, 111.7328f };
			Local_93.f_5 = 222.9433f;
			Local_94.f_6 = joaat("mesa2");
			Local_94.f_2 = { 3257.9006f, -4689.813f, 111.8699f };
			Local_94.f_5 = 278.2631f;
			Local_138.f_2 = { 3259.571f, -4572.774f, 116.1162f };
			Local_138.f_5 = { -91f, -38f, 0f };
			Local_138.f_1 = joaat("prop_ld_shovel");
			Local_141.f_2 = { 3259.245f, -4573.03f, 116.8103f };
			Local_141.f_5 = { 158f, 0f, 77.4f };
			Local_141.f_1 = joaat("prop_tool_pickaxe");
			Local_144.f_2 = { 3259.734f, -4573.897f, 115.8785f };
			Local_144.f_5 = { 5f, 0f, -180f };
			Local_144.f_1 = joaat("prop_coffin_02");
			break;
		case 7:
			Local_84.f_2 = { 3240.7776f, -4559.611f, 116.9483f };
			Local_84.f_5 = 92.2719f;
			Local_84.f_6 = joaat("CS_BradCadaver");
			Local_92.f_2 = { 3256.4697f, -4575.113f, 117.1567f };
			Local_92.f_5 = 273.8974f;
			Local_92.f_7 = { 3248.8862f, -4687.963f, 114.84104f };
			Local_93.f_6 = joaat("asea2");
			Local_93.f_2 = { 3211.3403f, -4688.4854f, 111.7328f };
			Local_93.f_5 = 222.9433f;
			Local_138.f_2 = { 3259.571f, -4572.774f, 116.1162f };
			Local_138.f_5 = { -91f, -38f, 0f };
			Local_138.f_1 = joaat("prop_ld_shovel");
			Local_141.f_2 = { 3259.245f, -4573.03f, 116.8103f };
			Local_141.f_5 = { 158f, 0f, 77.4f };
			Local_141.f_1 = joaat("prop_tool_pickaxe");
			Local_144.f_2 = { 3259.734f, -4573.897f, 115.8785f };
			Local_144.f_5 = { 5f, 0f, -180f };
			Local_144.f_1 = joaat("prop_coffin_02");
			Local_1062[0 /*14*/].f_2 = { 3304.86f, -4641.48f, 113.08f };
			Local_1062[0 /*14*/].f_5 = 27.521f;
			Local_1062[0 /*14*/].f_6 = iLocal_56;
			Local_1062[0 /*14*/].f_7 = 12;
			Local_1062[1 /*14*/].f_2 = { 3242.78f, -4673.15f, 113.18f };
			Local_1062[1 /*14*/].f_5 = 53.3085f;
			Local_1062[1 /*14*/].f_6 = iLocal_56;
			Local_1062[1 /*14*/].f_7 = 13;
			Local_1062[2 /*14*/].f_2 = { 3259.67f, -4690.98f, 112.69f };
			Local_1062[2 /*14*/].f_5 = 303.13f;
			Local_1062[2 /*14*/].f_6 = iLocal_56;
			Local_1062[3 /*14*/].f_2 = { 3254.34f, -4683.82f, 112.67f };
			Local_1062[3 /*14*/].f_5 = 249.15f;
			Local_1062[3 /*14*/].f_6 = iLocal_56;
			Local_1062[4 /*14*/].f_2 = { 3235.7214f, -4835.266f, 110.8135f };
			Local_1062[4 /*14*/].f_5 = 84.1679f;
			Local_1062[4 /*14*/].f_6 = iLocal_56;
			Local_1062[4 /*14*/].f_7 = 15;
			Local_134.f_2 = 23;
			Local_134.f_3 = { 3154.38f, -4698.16f, 111.63f };
			Local_134.f_6 = joaat("freight");
			Local_134.f_7 = joaat("freightcar");
			Local_134.f_8 = joaat("freightcont1");
			Local_134.f_9 = joaat("S_M_M_Trucker_01");
			break;
		case 8:
			Local_92.f_2 = { 3217.397f, -4687.558f, 111.7128f };
			Local_92.f_5 = 94.6391f;
			Local_93.f_6 = joaat("asea2");
			Local_93.f_2 = { 3211.3403f, -4688.4854f, 111.7328f };
			Local_93.f_5 = 222.9433f;
			break;
		case 9:
			Local_91.f_2 = { -4568.295f, 4981.7153f, 136.762f };
			Local_91.f_5 = 259.5159f;
			Local_101.f_6 = joaat("cuban800");
			Local_101.f_2 = { -4568.295f, 4981.7153f, 136.762f };
			Local_101.f_5 = 259.5159f;
			Local_101.f_7 = 8;
			Local_94.f_6 = __LIB_11__::func_311(2, 0);
			Local_94.f_2 = { 1747.3265f, 3294.0227f, 40.1071f };
			Local_94.f_5 = 84.1211f;
			break;
		case 10:
			Local_91.f_2 = { 1725.0645f, 3304.4546f, 40.2237f };
			Local_91.f_5 = 345.1909f;
			Local_101.f_6 = joaat("cuban800");
			Local_101.f_2 = { 1732.3759f, 3306.6619f, 40.2237f };
			Local_101.f_5 = 14.8253f;
			Local_94.f_6 = __LIB_11__::func_311(2, 0);
			Local_94.f_2 = { 1747.3265f, 3294.0227f, 40.1071f };
			Local_94.f_5 = 84.1211f;
			break;
	}
}

void func_898()//Position - 0x963B1
{
	if (iLocal_506 == 1)
	{
		CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
		PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
		PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
		if (iLocal_505 != 0)
		{
			if (__LIB_11__::func_307(2000, iLocal_505))
			{
				iLocal_506 = 0;
			}
			else if (__LIB_11__::func_307(1700, iLocal_505))
			{
				if (iLocal_404 == 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_404 = 1;
				}
			}
		}
	}
}

void func_900(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x96439
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 8:
			break;
		case 7:
			switch (*uParam3)
			{
				case 0:
					func_791(0);
					func_791(1);
					*uParam3++;
					break;
				case 1:
					if (iParam1 == 1)
					{
						func_50(0);
						func_50(1);
						Local_1065[0 /*6*/].f_5 = 0;
						Local_1065[1 /*6*/].f_5 = 0;
						*uParam3++;
					}
					break;
				case 2:
					if (iParam2 == 1)
					{
						func_901(0, 0.075f, 0.05f);
						func_901(1, 0.075f, 0.05f);
						if (Local_1065[0 /*6*/].f_5 == 1 && Local_1065[1 /*6*/].f_5 == 1)
						{
							*uParam3++;
						}
					}
					break;
				case 3:
					func_791(0);
					func_791(1);
					*uParam3++;
					break;
			}
			break;
	}
}

void func_901(int iParam0, float fParam1, float fParam2)//Position - 0x9652E
{
	float fVar0;
	if (Local_1065[iParam0 /*6*/].f_5 == 0)
	{
		fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_1065[iParam0 /*6*/]);
		if (fVar0 <= -fParam2 || fVar0 >= fParam2)
		{
			if (fVar0 > 0f)
			{
				fVar0 = (fVar0 - fParam1);
			}
			else if (fVar0 < 0f)
			{
				fVar0 = (fVar0 + fParam1);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_1065[iParam0 /*6*/], fVar0, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_1065[iParam0 /*6*/], 1, false, true);
			MISC::CLEAR_AREA_OF_OBJECTS(Local_1065[iParam0 /*6*/].f_1, 2f, 0);
		}
		else
		{
			fVar0 = 0f;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_1065[iParam0 /*6*/], fVar0, false, false);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_1065[iParam0 /*6*/], 1, false, true);
			Local_1065[iParam0 /*6*/].f_5 = 1;
		}
	}
}

void func_902(int iParam0, var uParam1)//Position - 0x965DE
{
	if (*iParam0 != 11 && *iParam0 != 12)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING() && !__LIB_0__::func_381())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
			{
				if (iLocal_509[1] == 1)
				{
					if (__LIB_11__::func_142(&Local_93))
					{
						*uParam1 = 1;
						*iParam0 = 12;
					}
					if (*iParam0 == 4)
					{
						if (func_904(Local_93.f_0, &iLocal_372, 4000))
						{
							*uParam1 = 1;
							*iParam0 = 12;
						}
					}
				}
				if (iLocal_509[2] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, true))
					{
						*uParam1 = 2;
						*iParam0 = 12;
					}
				}
				if (iLocal_509[3] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93.f_0, false))
					{
						if (*iParam0 == 7)
						{
							if (!__LIB_30__::func_211(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f))
							{
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_93.f_0, 1) > 90f)
								{
									*uParam1 = 3;
									*iParam0 = 12;
								}
							}
							if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3165.7798f, -4700.698f, 113.62336f, 16f, 16f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3287.109f, -4719.236f, 113.77627f, 16f, 16f, 3f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3257.56f, -4712.963f, 111.1719f, 3273.7312f, -4714.4575f, 116.70526f, 18f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3229.4775f, -4768.5967f, 110.50034f, 3308.3965f, -4775.955f, 124.71813f, 100f, false, true, 0))
							{
								*uParam1 = 3;
								*iParam0 = 12;
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(func_965(0)))
						{
							if (__LIB_0__::func_76(func_965(0), Local_93.f_0, 1) > 90f)
							{
								*uParam1 = 3;
								*iParam0 = 12;
							}
						}
					}
				}
				if (iLocal_509[4] == 1)
				{
					if (*iParam0 == 4)
					{
						if (iLocal_405 == 1)
						{
							*uParam1 = 4;
							*iParam0 = 12;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3122.8843f, -4705.4478f, 110.70325f, 3107.7356f, -4895.8325f, 130.59102f, 64f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3165.7527f, -4756.5015f, 110.10921f, 3167.8508f, -4733.837f, 119.107994f, 32f, false, true, 0))
						{
							*uParam1 = 4;
							*iParam0 = 12;
						}
					}
				}
				if (iLocal_509[5] == 1)
				{
					if (*iParam0 == 5)
					{
						if (!__LIB_30__::func_211(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_93.f_2, true) > 90f)
							{
								*uParam1 = 5;
								*iParam0 = 12;
							}
						}
						if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3165.78f, -4700.7f, 113.62f, 16f, 16f, 3f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3287.11f, -4719.23f, 113.77f, 16f, 16f, 3f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3257.56f, -4712.96f, 111.17f, 3273.73f, -4714.45f, 116.7f, 18f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3229.4775f, -4768.5967f, 110.50034f, 3308.3965f, -4775.955f, 124.71813f, 100f, false, true, 0))
						{
							*uParam1 = 5;
							*iParam0 = 12;
						}
					}
				}
				if (iLocal_509[6] == 1)
				{
					if (*iParam0 == 7)
					{
						if (!func_406(PLAYER::PLAYER_PED_ID(), 3255.4128f, -4628.321f, 125.917946f, 58f, 78f, 16f))
						{
							*uParam1 = 6;
							*iParam0 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
			{
				if (iLocal_509[7] == 1)
				{
					if (__LIB_11__::func_142(&Local_94))
					{
						*uParam1 = 7;
						*iParam0 = 12;
					}
				}
				if (iLocal_509[8] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_94.f_0, true))
					{
						*uParam1 = 8;
						*iParam0 = 12;
					}
				}
				if (iLocal_509[9] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_94.f_0, false))
					{
						if (__LIB_0__::func_76(func_965(2), Local_94.f_0, 1) > 100f)
						{
							*uParam1 = 9;
							*iParam0 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_101.f_0))
			{
				if (iLocal_509[10] == 1)
				{
					if (func_903(&Local_101, 7000, 30000, 15000, 20000))
					{
						*uParam1 = 10;
						*iParam0 = 12;
					}
				}
				if (iLocal_509[11] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_101.f_0, true))
					{
						*uParam1 = 11;
						*iParam0 = 12;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_92.f_0))
			{
				if (iLocal_509[12] == 1)
				{
					if (PED::IS_PED_INJURED(Local_92.f_0))
					{
						*uParam1 = 12;
						*iParam0 = 12;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_91.f_0))
			{
				if (iLocal_509[13] == 1)
				{
					if (PED::IS_PED_INJURED(Local_91.f_0))
					{
						*uParam1 = 13;
						*iParam0 = 12;
					}
				}
			}
		}
	}
}

int func_903(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x96ADD
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, iParam1) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, iParam2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, iParam3)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_904(int iParam0, var uParam1, int iParam2)//Position - 0x96B32
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(iParam0);
			switch (iVar0)
			{
				case -1937569590:
				case -878560889:
				case 1619704960:
				case 1550304810:
					if ((!VEHICLE::IS_VEHICLE_STOPPED(iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) < 2f) || (VEHICLE::IS_VEHICLE_STOPPED(iParam0) && (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) * 255f)) >= 250 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/) * 255f)) >= 250)))
					{
						if (*uParam1 == 0)
						{
							*uParam1 = MISC::GET_GAME_TIMER();
						}
						else if (__LIB_11__::func_307(iParam2, *uParam1))
						{
							return 1;
						}
					}
					else
					{
						*uParam1 = 0;
					}
					break;
				default:
					*uParam1 = 0;
					break;
				}
			}
	}
	return 0;
}

void func_951(int iParam0, var uParam1, var uParam2)//Position - 0x9CC58
{
	if (iParam0 == 0)
	{
		*uParam1 = 1;
		*uParam2 = 0;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = 0;
		*uParam2 = 1;
	}
}

int func_952(int iParam0)//Position - 0x9CC7F
{
	var uVar0;
	var uVar1;
	if (iParam0 == 10)
	{
		return 10;
	}
	if (iParam0 == 1)
	{
		return 3;
	}
	uVar1 = iParam0 + 1;
	uVar0 = uVar1;
	return uVar0;
}

void func_955(var uParam0, int iParam1)//Position - 0x9CCDF
{
	if (iParam1 == 0)
	{
		*uParam0 = 1;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 4;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 5;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 7;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 9;
	}
	bLocal_385 = true;
}

void func_960()//Position - 0x9CDDF
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_6__::func_833();
	__LIB_0__::func_296();
	__LIB_11__::func_877(&uLocal_510, &uLocal_440);
	__LIB_23__::func_174(sLocal_54, &uLocal_517, &uLocal_441);
	__LIB_20__::func_615(&Local_187, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	if (iLocal_496 == 1)
	{
		RECORDING::REPLAY_STOP_EVENT();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), false);
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), false);
	}
	if (iLocal_389 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_965(0)))
		{
			if (!PED::IS_PED_INJURED(func_965(0)))
			{
				func_796();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_965(2)))
		{
			if (!PED::IS_PED_INJURED(func_965(2)))
			{
				func_654(func_965(2));
			}
		}
		iLocal_389 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_84.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_84.f_0, false))
		{
			PED::SET_PED_KEEP_TASK(Local_84.f_0, true);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_84);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_93.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_93.f_0, false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_93.f_0, true, 0);
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_93.f_0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_93.f_0, true))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_93);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_94.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_94.f_0, false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_94.f_0, true, 0);
			if (iLocal_430 == 0)
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_94.f_0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_94.f_0, true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_94);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_101.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_101.f_0, false))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_101.f_0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_101.f_0, true))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_101);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_134.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_134.f_0, false))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				VEHICLE::DELETE_MISSION_TRAIN(&Local_134);
			}
			else
			{
				VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&Local_134, false);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_108))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_108);
	}
	if (HUD::DOES_BLIP_EXIST(Local_92.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_92.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_91.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_91.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_93.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_93.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_94.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_94.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_101.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_101.f_1));
	}
	func_223(&Local_997, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_999, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_998, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1000, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1003, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1002, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1001, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1005, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1004, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1006, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1007, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&Local_1008, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_223(&iLocal_1009, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_222(&Local_1062, CAM::IS_SCREEN_FADED_OUT(), 0, 0);
	__LIB_30__::func_202(&Local_135, 0);
	__LIB_30__::func_202(&Local_144, 0);
	__LIB_30__::func_202(&Local_138, 0);
	__LIB_30__::func_202(&Local_141, 0);
	__LIB_17__::func_236(&iLocal_497);
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_477))
	{
		OBJECT::REMOVE_PICKUP(iLocal_477);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_478))
	{
		OBJECT::REMOVE_PICKUP(iLocal_478);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_479))
	{
		OBJECT::REMOVE_PICKUP(iLocal_479);
	}
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_11__::func_311(0, 0), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_11__::func_311(2, 0), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("asea2"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mesa2"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold1"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold2"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_55, false);
	__LIB_11__::func_182(0);
	__LIB_8__::func_770(0);
	__LIB_0__::func_367(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	AUDIO::STOP_SOUND(iLocal_437);
	AUDIO::RELEASE_SOUND_ID(iLocal_437);
	AUDIO::STOP_SOUND(iLocal_438);
	AUDIO::RELEASE_SOUND_ID(iLocal_438);
	AUDIO::STOP_SOUND(iLocal_436);
	AUDIO::RELEASE_SOUND_ID(iLocal_436);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.789253f, 3679.3267f, -4973.8794f, 125.08284f, 192f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(3691.2114f, -4941.24f, 94.59368f, 3511.1155f, -4869.1914f, 126.76211f, 16f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(3510.0044f, -4865.81f, 94.69557f, 3204.4243f, -4833.817f, 126.815216f, 16f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(3186.5337f, -4832.798f, 109.81483f, 3202.1873f, -4833.993f, 114.814995f, 16f, false, false, true);
	STREAMING::REMOVE_PTFX_ASSET();
	STREAMING::REMOVE_ANIM_DICT("missmic1ig_2");
	STREAMING::REMOVE_ANIM_DICT("missmic1ig_3_patrol");
	STREAMING::REMOVE_ANIM_DICT("missmic1ig_zero_hit_wheel");
	STREAMING::REMOVE_ANIM_DICT("missmic1leadinoutmic_1_mcs_2");
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Sounds");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::STOP_STREAM();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_ARRIVED_CHURCH");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_SHOOTOUT_START");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_1ST_VAN");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_ALERTED");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_KIDNAPPED");
	if ((iLocal_445 == 1 || iLocal_446 == 1) || iLocal_447 == 1)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	__LIB_0__::func_54(1, 1);
	func_795();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	__LIB_11__::func_144();
	__LIB_11__::func_872(4, 0, 1);
	VEHICLE::SET_RANDOM_TRAINS(true);
	PATHFIND::SET_ALLOW_STREAM_PROLOGUE_NODES(false);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::RESET_WORLD_BOUNDARY_FOR_PLAYER();
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (__LIB_11__::func_645(0))
	{
		__LIB_9__::func_485(0, 0);
	}
	if (__LIB_11__::func_645(20))
	{
		__LIB_9__::func_485(20, 0);
	}
	if (__LIB_11__::func_645(5))
	{
		__LIB_9__::func_485(5, 0);
	}
	VEHICLE::SET_AMBIENT_VEHICLE_NEON_ENABLED(true);
	AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
}

void func_961()//Position - 0x9D383
{
	int iVar0;
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_134())
		{
			iVar0 = __LIB_0__::func_323();
			if (iVar0 != -1)
			{
				if (!func_35(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__::func_546();
		}
	}
}

int func_965(int iParam0)//Position - 0x9D5CD
{
	if (__LIB_20__::func_728() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_147[__LIB_0__::func_504(iParam0)];
}

