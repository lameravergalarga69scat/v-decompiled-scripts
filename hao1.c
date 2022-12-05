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
	int iLocal_34 = 0;
	struct<4> Local_35[10];
	bool bLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	struct<3> Local_39 = { 0, 0, 0 } ;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
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
	float fLocal_71 = 0f;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 3;
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
	var uLocal_123 = 4;
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
	var uLocal_188 = 2;
	var uLocal_189 = 0;
	var uLocal_190 = 4;
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
	var uLocal_256 = 4;
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
	var uLocal_327 = 12;
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
	var uLocal_508 = 3;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	var uLocal_518 = 0;
	int iLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	struct<6> Local_536 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<12> Local_537 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
	struct<250> Local_538 = { 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	struct<18> Local_542[15];
	int iLocal_543 = 0;
	bool bLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	float fLocal_554 = 0f;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_559 = { 0, 0, 0 } ;
	struct<3> Local_560 = { 0, 0, 0 } ;
	struct<3> Local_561 = { 0, 0, 0 } ;
	struct<3> Local_562 = { 0, 0, 0 } ;
	struct<3> Local_563 = { 0, 0, 0 } ;
	struct<3> Local_564 = { 0, 0, 0 } ;
	struct<3> Local_565 = { 0, 0, 0 } ;
	struct<3> Local_566 = { 0, 0, 0 } ;
	struct<3> Local_567 = { 0, 0, 0 } ;
	struct<3> Local_568 = { 0, 0, 0 } ;
	struct<3> Local_569 = { 0, 0, 0 } ;
	struct<3> Local_570 = { 0, 0, 0 } ;
	struct<3> Local_571 = { 0, 0, 0 } ;
	struct<3> Local_572 = { 0, 0, 0 } ;
	struct<3> Local_573 = { 0, 0, 0 } ;
	struct<3> Local_574 = { 0, 0, 0 } ;
	struct<3> Local_575 = { 0, 0, 0 } ;
	struct<3> Local_576 = { 0, 0, 0 } ;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 4200;
	var uLocal_584 = 3600;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 8;
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
	var uLocal_598 = 8;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 4;
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
	var uLocal_617 = 4;
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
	var uLocal_632 = 4;
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
	var uLocal_647 = 4;
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
	var uLocal_662 = 4;
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
	var uLocal_677 = 4;
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
	var uLocal_692 = 4;
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
	var uLocal_707 = 4;
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
	var uLocal_720 = 8;
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
	var uLocal_745 = 8;
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
	var uLocal_771 = 2;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	int iLocal_776 = 0;
	int* iLocal_777 = NULL;
	int* iLocal_778 = NULL;
	int* iLocal_779 = NULL;
	char* sLocal_780 = NULL;
	struct<3> Local_781 = { 0, 0, 0 } ;
	struct<3> Local_782 = { 0, 0, 0 } ;
	struct<3> Local_783 = { 0, 0, 0 } ;
	float fLocal_784 = 0f;
	struct<3> Local_785 = { 0, 0, 0 } ;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int* iLocal_788 = NULL;
	struct<3> Local_789 = { 0, 0, 0 } ;
	float fLocal_790 = 0f;
	struct<3> Local_791 = { 0, 0, 0 } ;
	float fLocal_792 = 0f;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	char* sLocal_795 = NULL;
	int iLocal_796 = 0;
	struct<3> Local_797 = { 0, 0, 0 } ;
	struct<3> Local_798 = { 0, 0, 0 } ;
	float fLocal_799 = 0f;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	var uLocal_803 = 16;
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
	int iLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	int iLocal_972 = 0;
	int iLocal_973 = 0;
	struct<61> Local_974 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	char* sLocal_978 = NULL;
	int* iLocal_979 = NULL;
	struct<3> Local_980 = { 0, 0, 0 } ;
	struct<3> Local_981 = { 0, 0, 0 } ;
	struct<3> Local_982 = { 0, 0, 0 } ;
	struct<3> Local_983 = { 0, 0, 0 } ;
	struct<3> Local_984 = { 0, 0, 0 } ;
	float fLocal_985 = 0f;
	struct<3> Local_986 = { 0, 0, 0 } ;
	float fLocal_987 = 0f;
	struct<3> Local_988 = { 0, 0, 0 } ;
	struct<3> Local_989 = { 0, 0, 0 } ;
	float fLocal_990 = 0f;
	struct<3> Local_991 = { 0, 0, 0 } ;
	struct<3> Local_992 = { 0, 0, 0 } ;
	float fLocal_993 = 0f;
	struct<3> Local_994 = { 0, 0, 0 } ;
	struct<3> Local_995 = { 0, 0, 0 } ;
	float fLocal_996 = 0f;
	struct<3> Local_997 = { 0, 0, 0 } ;
	struct<3> Local_998 = { 0, 0, 0 } ;
	float fLocal_999 = 0f;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	float fLocal_1002 = 0f;
	var uLocal_1003 = 0;
	struct<3> Local_1004 = { 0, 0, 0 } ;
	struct<3> Local_1005 = { 0, 0, 0 } ;
	float fLocal_1006 = 0f;
	int iLocal_1007 = 0;
	char* sLocal_1008 = NULL;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	bool bLocal_1012 = 0;
	int iLocal_1013 = 0;
	bool bLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	bool bLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	struct<3> Local_1025 = { 0, 0, 0 } ;
	struct<3> Local_1026 = { 0, 0, 0 } ;
	float fLocal_1027 = 0f;
	struct<3> Local_1028 = { 0, 0, 0 } ;
	struct<3> Local_1029 = { 0, 0, 0 } ;
	float fLocal_1030 = 0f;
	struct<3> Local_1031 = { 0, 0, 0 } ;
	struct<3> Local_1032 = { 0, 0, 0 } ;
	float fLocal_1033 = 0f;
	int iLocal_1034 = 0;
	var uLocal_1035 = 16;
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
	struct<61> Local_1200 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	uLocal_38 = __LIB_2__.func_108(53);
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	Local_52 = { 500f, 500f, 500f };
	fLocal_71 = ((0.05f + 0.275f) - 0.01f);
	iLocal_516 = -1;
	iLocal_517 = -1;
	iLocal_519 = 1;
	iLocal_534 = -1;
	iLocal_547 = -1;
	iLocal_548 = -1;
	iLocal_555 = -1;
	iLocal_578 = AUDIO::GET_SOUND_ID();
	sLocal_780 = "random@street_race";
	iLocal_786 = 1;
	iLocal_787 = 1;
	iLocal_793 = -1;
	Local_797 = { 0f, 0f, 0f };
	Local_798 = { 0f, 0f, 0f };
	fLocal_799 = 0f;
	iLocal_972 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_973 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_978 = "hao1_Hao";
	Local_980 = { -144.96967f, -1550.7091f, 33.487854f };
	Local_981 = { -59.64f, -1808.68f, 26.76f };
	Local_982 = { -66.36402f, -1812.8695f, 23.765099f };
	Local_983 = { -46.690018f, -1790.171f, 29.893478f };
	Local_984 = { -79.29f, -1264.51f, 28.74f };
	fLocal_985 = 270.3906f;
	Local_986 = { -72.4774f, -1262.7596f, 27.989f };
	fLocal_987 = 349.5845f;
	Local_988 = { -80.26438f, -1262.4749f, 27.014877f };
	Local_989 = { -64.89045f, -1262.2561f, 30.031475f };
	fLocal_990 = 11f;
	Local_991 = { -115.662796f, -1261.4532f, 27.156199f };
	Local_992 = { -85.77514f, -1260.5076f, 30.29771f };
	fLocal_993 = 8f;
	Local_994 = { -91.50914f, -1267.8999f, 27.148733f };
	Local_995 = { -91.27182f, -1278.8363f, 29.15185f };
	fLocal_996 = 9f;
	Local_997 = { -99.922195f, -1101.0879f, 23.907503f };
	Local_998 = { -109.29104f, -1385.9946f, 30.313572f };
	fLocal_999 = 40f;
	fLocal_1002 = 0f;
	Local_1004 = { -137.7f, -1551f, 35.3f };
	Local_1005 = { -144.1f, -1558.7f, 33.6f };
	fLocal_1006 = 6f;
	sLocal_1008 = "special_ped@hao@base";
	iLocal_1011 = 1;
	bLocal_1012 = true;
	iLocal_1013 = 1;
	iLocal_1015 = 1;
	iLocal_1016 = 1;
	iLocal_1017 = 1;
	iLocal_1018 = 1;
	iLocal_1020 = 1;
	Local_1025 = { -189.57138f, -1613.5171f, 31.75359f };
	Local_1026 = { -131.69415f, -1538.0621f, 34.259357f };
	fLocal_1027 = 20f;
	Local_1028 = { -254.96872f, -1422.7487f, 20.337524f };
	Local_1029 = { 75.873474f, -1692.7092f, 38.14151f };
	fLocal_1030 = 500f;
	Local_1031 = { -134.44238f, -1532.8138f, 34.241035f };
	Local_1032 = { -225.42033f, -1456.1486f, 29.321934f };
	fLocal_1033 = 5f;
	Local_974 = { ScriptParam_1200 };
	__LIB_20__.func_264(&Local_974);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__.func_135("Force cleanup [TERMINATING]");
		__LIB_38__.func_39(1);
		func_726();
	}
	__LIB_6__.func_863(24);
	if (__LIB_0__.func_294())
	{
		Global_78564 = 1;
		iLocal_37 = 0;
		while (!func_717(&Local_974))
		{
			SYSTEM::WAIT(0);
		}
		__LIB_10__.func_700(&Local_974, 0, 1);
		Global_78564 = 0;
	}
	if (Global_113386.f_18574.f_389 == 0)
	{
		Global_113386.f_18574.f_389 = 1;
	}
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_SW", 0);
		__LIB_35__.func_898(Local_974.f_9, 0, 0, 0, 0, 0);
		SYSTEM::WAIT(0);
		if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_975)
			{
				case 0:
					func_608();
					break;
				case 1:
					func_607();
					break;
				case 2:
					func_585();
					break;
				case 3:
					func_546();
					break;
				case 4:
					func_515();
					break;
				case 5:
					func_512();
					break;
				case 6:
					func_492();
					break;
				case 7:
					func_385();
					break;
				case 8:
					func_275();
					break;
				case 9:
					func_34();
					break;
				case 10:
					func_26();
					break;
				}
		}
		func_12();
		func_1();
	}
}

void func_1()//Position - 0x473
{
	int iVar0;
	if ((iLocal_975 == 3 || iLocal_975 == 4) || iLocal_975 == 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < Local_538.f_249)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_3) && ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_6))
			{
				if (PED::IS_PED_INJURED(Local_542[iVar0 /*18*/].f_3) || !__LIB_1__.func_183(Local_542[iVar0 /*18*/].f_6))
				{
					iLocal_975 = 10;
					iLocal_976 = 0;
					iLocal_530 = 5;
					iLocal_529 = 1;
				}
				else if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_542[iVar0 /*18*/].f_3, PLAYER::PLAYER_PED_ID(), true) || __LIB_32__.func_572(Local_542[iVar0 /*18*/].f_3, 1, 0, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_542[iVar0 /*18*/].f_6, PLAYER::PLAYER_PED_ID(), true)) || (PED::IS_PED_BEING_JACKED(Local_542[iVar0 /*18*/].f_3) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))) || __LIB_20__.func_625(Local_542[iVar0 /*18*/].f_6)) || ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_542[iVar0 /*18*/].f_6)))
				{
					iLocal_975 = 10;
					iLocal_976 = 0;
					iLocal_530 = 5;
					iLocal_529 = 1;
				}
			}
			iVar0++;
		}
	}
}

void func_12()//Position - 0xA51
{
	if (iLocal_975 != 10 && iLocal_975 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_974.f_28[0]))
		{
			if (PED::IS_PED_INJURED(Local_974.f_28[0]))
			{
				iLocal_975 = 10;
				iLocal_976 = 0;
				iLocal_977 = 2;
			}
			else if (__LIB_38__.func_135(Local_974.f_28[0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || (PED::IS_PED_BEING_JACKED(Local_974.f_28[0]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())))
			{
				iLocal_975 = 10;
				iLocal_976 = 0;
				iLocal_977 = 1;
			}
		}
		if (((iLocal_975 == 3 || iLocal_975 == 4) || iLocal_975 == 5) && __LIB_1__.func_183(Local_974.f_35[0]))
		{
			if (__LIB_30__.func_189(Local_974.f_35[0], &uLocal_1001, &uLocal_1003, &uLocal_1000, &fLocal_1002, 5, 1082130432) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_974.f_35[0], true))
			{
				iLocal_975 = 10;
				iLocal_976 = 0;
				iLocal_977 = 1;
			}
		}
		else if (__LIB_1__.func_183(Local_974.f_35[0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_974.f_35[0], PLAYER::PLAYER_PED_ID(), true))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_974.f_35[0]);
			}
		}
	}
}

void func_26()//Position - 0x11DA
{
	char* sVar0;
	switch (iLocal_976)
	{
		case 0:
			func_31(1);
			__LIB_0__.func_402(1, 844);
			AUDIO::STOP_AUDIO_SCENE("STREET_RACE_DURING_RACE");
			if (ENTITY::DOES_ENTITY_EXIST(Local_974.f_28[0]))
			{
				if (PED::IS_PED_INJURED(Local_974.f_28[0]))
				{
					iLocal_977 = 2;
				}
			}
			if (iLocal_530 == 5)
			{
				switch (iLocal_529)
				{
					case 1:
						sVar0 = "RACES_R_INJ" /* GXT: Franklin spooked a rival racer. */;
						break;
					case 2:
						sVar0 = "RACES_R_DEAD" /* GXT: A rival racer died. */;
						break;
					case 3:
						sVar0 = "RACES_WRECK" /* GXT: Franklin's vehicle was destroyed. */;
						break;
					case 4:
						sVar0 = "RACES_ABAND" /* GXT: Franklin abandoned the race. */;
						break;
					case 5:
						sVar0 = "RACES_MISS" /* GXT: Franklin missed a checkpoint. */;
						break;
					case 6:
						sVar0 = "RACES_COPS" /* GXT: Franklin alerted the cops. */;
						break;
				}
			}
			else
			{
				switch (iLocal_977)
				{
					case 0:
						break;
					case 2:
						sVar0 = "HAO1_FAIL1";
						break;
					case 1:
						sVar0 = "HAO1_FAIL2";
						break;
					case 3:
						sVar0 = "HAO1_FAIL3";
						break;
					}
			}
			if (iLocal_977 == 0 && iLocal_529 == 0)
			{
				__LIB_38__.func_39(1);
			}
			else
			{
				__LIB_39__.func_861(sVar0, 1);
			}
			iLocal_976 = 1;
			break;
		case 1:
			if (__LIB_0__.func_204())
			{
				func_726();
			}
			break;
	}
}

void func_31(int iParam0)//Position - 0x141D
{
	int iVar0;
	func_33();
	if (iParam0 == 1 && HUD::DOES_BLIP_EXIST(Local_39.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_39.f_1));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		__LIB_0__.func_523(&(Local_542[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

void func_33()//Position - 0x148D
{
	if (HUD::DOES_BLIP_EXIST(iLocal_549))
	{
		HUD::REMOVE_BLIP(&iLocal_549);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_550))
	{
		HUD::REMOVE_BLIP(&iLocal_550);
	}
	if (iLocal_551 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(iLocal_551);
	}
}

void func_34()//Position - 0x14C5
{
	switch (iLocal_976)
	{
		case 0:
			func_273(0);
			func_272();
			func_31(1);
			if (__LIB_0__.func_2(0))
			{
				func_74();
			}
			else
			{
				iLocal_976 = 1;
			}
			break;
		case 1:
			iLocal_1021 = MISC::GET_GAME_TIMER() + 2000;
			iLocal_976 = 3;
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() > iLocal_1021)
			{
				if (__LIB_27__.func_930(joaat("TEXT_HAO1"), 3, 2, 53, 1000, 5000, -1, 14, -1, 0, 1))
				{
					__LIB_40__.func_942(1, 1, 200, 1, 1);
					func_74();
				}
			}
			break;
	}
}

void func_74()//Position - 0x2B9E
{
	__LIB_24__.func_943(140, 0, 0);
	func_268(843, Local_537.f_10);
	__LIB_9__.func_989(0, 8, 1);
	MISC::SET_BIT(&(Global_113386.f_24979.f_1), 0);
	MISC::SET_BIT(&(Global_113386.f_24979.f_1), 1);
	func_75(106, 1);
	func_726();
}

void func_75(int iParam0, bool bParam1)//Position - 0x2BE9
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
	func_96();
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

void func_96()//Position - 0x3749
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
				if (func_210(iVar1, 14, iVar2))
				{
					func_97(iVar1, 14, iVar2);
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

int func_97(int iParam0, int iParam1, int iParam2)//Position - 0x380A
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
	if (!func_210(iParam0, iParam1, iParam2))
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
				func_97(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_97(iParam0, 14, uVar5[iVar3]))
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
	if (func_137(iParam0, iVar0, &iVar7, 0))
	{
		func_100(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_98(iParam0, iVar0, &iVar7))
	{
		func_100(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_98(int iParam0, int iParam1, int iParam2)//Position - 0x39C6
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_210(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_100(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x3A8D
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
										func_100(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_100(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__.func_896(iVar10, iVar0, func_106(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_137(iParam0, iVar10, &iVar4, 1))
							{
								func_100(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__.func_180(iVar10, 0) };
						func_100(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_100(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_100(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_100(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_100(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__.func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__.func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_100(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_100(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_100(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_100(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_137(iParam0, iVar10, &iVar4, 0))
		{
			func_100(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_98(iParam0, iVar10, &iVar4))
		{
			func_100(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_106(int iParam0, int iParam1, int iParam2)//Position - 0x4ACC
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
				if (func_210(iParam0, iParam1, iVar0))
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
				if (func_210(iParam0, iParam1, iVar1))
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

int func_137(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB105
{
	int iVar0;
	iVar0 = __LIB_0__.func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_210(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_210(int iParam0, int iParam1, int iParam2)//Position - 0x21753
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
				if (!func_210(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__.func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_210(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__.func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_210(iParam0, 14, iVar4))
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
			if (!func_210(iParam0, 14, uVar8[iVar7]))
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

void func_268(int iParam0, var uParam1)//Position - 0x28D38
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_75249)
	{
		if (Global_75250[iVar0 /*9*/] == iParam0)
		{
			Global_75250[iVar0 /*9*/].f_1 = uParam1;
			return;
		}
		iVar0++;
	}
}

void func_272()//Position - 0x29340
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		__LIB_0__.func_523(&(Local_542[iVar0 /*18*/].f_7));
		iVar0++;
	}
}

void func_273(int iParam0)//Position - 0x29368
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		if (iVar0 < Local_538.f_249)
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_542[iVar0 /*18*/].f_5, false);
		}
		if (iParam0 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_3))
			{
				PED::DELETE_PED(&(Local_542[iVar0 /*18*/].f_3));
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_6))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_542[iVar0 /*18*/].f_6));
			}
		}
		else
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_542[iVar0 /*18*/].f_3, false))
				{
					PED::SET_PED_KEEP_TASK(Local_542[iVar0 /*18*/].f_3, true);
					if (ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_542[iVar0 /*18*/].f_6, false))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_542[iVar0 /*18*/].f_3, false);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_542[iVar0 /*18*/].f_6, false, 1);
						if (Local_536.f_0 == 8)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_542[iVar0 /*18*/].f_6, 380.1007f, -3498.0776f, -29.3627f, 20f, 0, ENTITY::GET_ENTITY_MODEL(Local_542[iVar0 /*18*/].f_6), 786603, 10f, 5f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_542[iVar0 /*18*/].f_6, 20f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(Local_542[iVar0 /*18*/].f_3, iVar1);
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(Local_542[iVar0 /*18*/].f_3, Local_542[iVar0 /*18*/].f_6, 20f, 786603);
						}
					}
				}
				__LIB_0__.func_124(&(Local_542[iVar0 /*18*/].f_3), 1, 0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_542[iVar0 /*18*/].f_6, false))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_542[iVar0 /*18*/].f_6, false);
					VEHICLE::SET_VEHICLE_STRONG(Local_542[iVar0 /*18*/].f_6, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_542[iVar0 /*18*/].f_6, false);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_542[iVar0 /*18*/].f_6, true);
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_542[iVar0 /*18*/].f_6));
			}
		}
		iVar0++;
	}
}

void func_275()//Position - 0x295AC
{
	if (Local_537.f_8 == 1 && Local_537.f_6 < 3)
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	else
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
	}
	HUD::HIDE_STREET_AND_CAR_NAMES_THIS_FRAME();
	__LIB_0__.func_186();
	switch (iLocal_976)
	{
		case 0:
			AUDIO::STOP_SOUND(iLocal_578);
			iLocal_532 = 0;
			iLocal_802 = -1;
			__LIB_0__.func_151("HAO1_LAP_HELP", -1);
			iLocal_545 = Local_537.f_11;
			iLocal_546 = MISC::GET_GAME_TIMER() + 7500;
			func_373(1);
			__LIB_35__.func_395(1, 0);
			__LIB_35__.func_395(7, 0);
			iLocal_1018 = 1;
			iLocal_1017 = 1;
			func_370();
			iLocal_1023 = 0;
			iLocal_1024 = MISC::GET_GAME_TIMER() + 10000;
			iLocal_1034 = 0;
			__LIB_0__.func_403(844, 0);
			iLocal_976 = 1;
			break;
		case 1:
			func_350(1, 1);
			func_349();
			func_327();
			func_321();
			func_320();
			func_319();
			func_317();
			if (iLocal_535 > MISC::GET_GAME_TIMER())
			{
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			}
			if (func_316() && Local_537.f_11 > 1)
			{
				iLocal_977 = 3;
				iLocal_975 = 10;
				iLocal_976 = 0;
				return;
			}
			func_313();
			func_312();
			func_293();
			if (func_278() && func_373(1))
			{
				iLocal_976 = 3;
				AUDIO::STOP_AUDIO_SCENE("STREET_RACE_DURING_RACE");
				AUDIO::START_AUDIO_SCENE("STREET_RACE_OUTRO");
			}
			break;
		case 3:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 2f, 4);
			if (Local_537.f_11 == 1)
			{
				__LIB_0__.func_402(1, 844);
				iLocal_975 = 9;
			}
			else
			{
				iLocal_977 = 3;
				iLocal_975 = 10;
			}
			iLocal_976 = 0;
			break;
	}
	func_277();
	func_276();
}

void func_276()//Position - 0x29725
{
	if (iLocal_530 == 5)
	{
		iLocal_975 = 10;
		iLocal_976 = 0;
	}
}

void func_277()//Position - 0x2973D
{
	switch (iLocal_533)
	{
		case 0:
			if (iLocal_534 > 0)
			{
				if (MISC::GET_GAME_TIMER() < iLocal_534)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
					{
						if (__LIB_1__.func_183(Local_39.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0))
						{
							if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Local_39.f_0)))
							{
								AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_39.f_0, true);
							}
							GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
							iLocal_534 = MISC::GET_GAME_TIMER() + 2000;
							iLocal_533 = 1;
						}
					}
				}
				else
				{
					iLocal_533 = 2;
				}
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() > iLocal_534)
			{
				if (__LIB_1__.func_183(Local_39.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Local_39.f_0)))
					{
						AUDIO::SET_VEHICLE_BOOST_ACTIVE(Local_39.f_0, false);
					}
					iLocal_533 = 2;
				}
			}
			else if (__LIB_1__.func_183(Local_39.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_39.f_0, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
			}
			break;
	}
}

int func_278()//Position - 0x29831
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			iLocal_529 = 6;
			iLocal_530 = 5;
			iLocal_531 = 0;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_39.f_0, false) && !func_292())
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, false))
			{
				func_290();
				func_281();
				return 1;
			}
			else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_529 = 4;
				iLocal_530 = 5;
				iLocal_531 = 0;
			}
			else
			{
				func_31(0);
				if (__LIB_0__.func_1("RACES_RHELP" /* GXT: Press and hold ~INPUT_VEH_EXIT~ to return to the race. */) && MISC::GET_GAME_TIMER() > iLocal_776)
				{
					HUD::CLEAR_HELP(true);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_39.f_1) && !(Local_536.f_1 == 2 && (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 0, 1000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 1, 1000))))
				{
					Local_39.f_1 = HUD::ADD_BLIP_FOR_ENTITY(Local_39.f_0);
					HUD::SET_BLIP_AS_FRIENDLY(Local_39.f_1, true);
					HUD::SET_BLIP_SCALE(Local_39.f_1, 1f);
					if (Local_536.f_1 == 3)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MGSR_FELL_OFF");
					}
					if (Local_39.f_2 == 0)
					{
						Local_39.f_2 = 1;
						switch (Local_536.f_1)
						{
							case 1:
								__LIB_0__.func_210("BIKE_BACK", 7500, 1);
								break;
							case 2:
								__LIB_0__.func_210("CAR_BACK", 7500, 1);
								break;
							case 3:
								__LIB_0__.func_210("SEA_BACK", 7500, 1);
								break;
							}
						}
					}
			}
		}
		else
		{
			func_290();
			iLocal_529 = 3;
			iLocal_530 = 5;
			iLocal_531 = 0;
		}
	}
	return 0;
}

void func_281()//Position - 0x299D2
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 272, true);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iLocal_801 = 1;
				iLocal_532 = 3;
			}
			if (!__LIB_0__.func_1("RACES_RHELP" /* GXT: Press and hold ~INPUT_VEH_EXIT~ to return to the race. */))
			{
				if (!func_289())
				{
					__LIB_0__.func_187("RACES_RHELP" /* GXT: Press and hold ~INPUT_VEH_EXIT~ to return to the race. */);
					iLocal_776 = MISC::GET_GAME_TIMER() + 1000;
				}
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 3, 60000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 0, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 1, 3000))
				{
					__LIB_0__.func_187("RACES_RHELP" /* GXT: Press and hold ~INPUT_VEH_EXIT~ to return to the race. */);
					iLocal_776 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_776)
			{
				if ((((func_289() || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 3, 60000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 0, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 1, 3000))
				{
					HUD::CLEAR_HELP(true);
				}
			}
		}
	}
	if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || iLocal_801 == 1)
	{
		switch (iLocal_532)
		{
			case 0:
				iLocal_802 = MISC::GET_GAME_TIMER();
				iLocal_532 = 1;
				break;
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_802) > 500)
				{
					iLocal_802 = MISC::GET_GAME_TIMER();
					iLocal_532 = 2;
				}
				break;
			case 2:
				__LIB_20__.func_579((MISC::GET_GAME_TIMER() - iLocal_802), 1500, "RACES_RMETER" /* GXT: RESPAWNING */, 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
				if ((MISC::GET_GAME_TIMER() - iLocal_802) >= 400)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_802) >= 1500)
				{
					iLocal_532 = 3;
				}
				break;
			case 3:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_0))
				{
					if (Local_537.f_6 > 0)
					{
						Var4 = { Local_538[(Local_537.f_6 - 1) /*3*/] };
					}
					else
					{
						Var4 = { Local_538.f_181[Local_538.f_249 /*3*/] };
					}
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_795, Var4, &iVar0);
					iVar1 = iVar0 + 1;
					if (iVar1 >= iLocal_968)
					{
						iVar1 = 0;
					}
					TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, iVar0, &Var2);
					TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, iVar1, &Var3);
					if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var2, 5f) || __LIB_0__.func_529(Local_39.f_0, Var2, 1) < 5f)
					{
						ENTITY::SET_ENTITY_COORDS(Local_39.f_0, Var2, true, false, false, true);
						__LIB_20__.func_718(Local_39.f_0, Var3);
						VEHICLE::SET_VEHICLE_FIXED(Local_39.f_0);
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, -1);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (__LIB_0__.func_1("RACES_RHELP" /* GXT: Press and hold ~INPUT_VEH_EXIT~ to return to the race. */))
						{
							HUD::CLEAR_HELP(true);
						}
						iLocal_532 = 4;
					}
				}
				break;
			case 4:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
				{
					PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					iLocal_802 = -1;
					iLocal_801 = 0;
					iLocal_532 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_802 = -1;
		iLocal_801 = 0;
		iLocal_532 = 0;
	}
}

int func_289()//Position - 0x2A09C
{
	if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (Local_536.f_1 == 2 || Local_536.f_1 == 1)
		{
			return 0;
		}
		else if (iLocal_793 >= 0)
		{
			iLocal_793 = -1;
		}
	}
	else if (Local_536.f_1 == 3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			iLocal_793 = -1;
			return 1;
		}
		if (iLocal_793 < 0)
		{
			iLocal_793 = MISC::GET_GAME_TIMER() + 2000;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_793)
		{
			return 0;
		}
	}
	return 1;
}

void func_290()//Position - 0x2A124
{
	if (HUD::DOES_BLIP_EXIST(Local_39.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_39.f_1));
		if (Local_536.f_1 == 3)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MGSR_BACK_ON");
		}
	}
	if ((__LIB_0__.func_405("CAR_BACK", 0, 0) || __LIB_0__.func_405("BIKE_BACK", 0, 0)) || __LIB_0__.func_405("SEA_BACK", 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
}

int func_292()//Position - 0x2A1A0
{
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, false) && Local_536.f_1 == 2)
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 0, 1000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_39.f_0, 1, 1000))
		{
			return 1;
		}
	}
	return 0;
}

void func_293()//Position - 0x2A1E5
{
	if (MISC::GET_GAME_TIMER() > iLocal_1024)
	{
		if ((__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_197(Local_974.f_28[0])) && __LIB_0__.func_508(Local_974.f_28[0], PLAYER::PLAYER_PED_ID(), 15f, 1))
		{
			if (__LIB_37__.func_799(&uLocal_1035, "HAO1AU", "HAO1_HSPC", 8, 0, 0, 0))
			{
				iLocal_1024 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_312()//Position - 0x2A9D5
{
	if (MISC::GET_GAME_TIMER() > iLocal_1023)
	{
		if ((__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_197(Local_974.f_28[0])) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_974.f_28[0], PLAYER::PLAYER_PED_ID()))
		{
			if (__LIB_37__.func_799(&uLocal_1035, "HAO1AU", "HAO1_HRAM", 8, 0, 0, 0))
			{
				iLocal_1023 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_313()//Position - 0x2AA39
{
	if (MISC::GET_GAME_TIMER() > iLocal_1034)
	{
		if (func_315())
		{
			__LIB_0__.func_401(845, 1, 0);
			iLocal_1034 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
}

int func_315()//Position - 0x2AB0F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		if (__LIB_1__.func_183(Local_542[iVar0 /*18*/].f_6))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_39.f_0, Local_542[iVar0 /*18*/].f_6))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_316()//Position - 0x2AB56
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		if (Local_542[iVar0 /*18*/].f_9 > Local_538.f_247)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_317()//Position - 0x2AB8C
{
	if (Global_113386.f_24979.f_6 == 0)
	{
		if ((Local_537.f_6 >= 4 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && __LIB_0__.func_294())
		{
			if (__LIB_37__.func_280() > 0)
			{
				if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					__LIB_0__.func_151("HAO1_ABILITY_HELP_KM", -1);
				}
				else
				{
					__LIB_0__.func_151("HAO1_ABILITY_HELP", -1);
				}
			}
			Global_113386.f_24979.f_6 = 1;
		}
	}
}

void func_319()//Position - 0x2AC42
{
	if ((iLocal_1017 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && Global_113386.f_24979.f_5 < 3)
	{
		__LIB_0__.func_151("FM_IHELP_SLP" /* GXT: You can slipstream by driving close behind another racer. This will give you a speed boost. */, -1);
		iLocal_1017 = 0;
		Global_113386.f_24979.f_5++;
	}
}

void func_320()//Position - 0x2AC8B
{
	if (iLocal_1018 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (Local_537.f_11 <= 3)
		{
			__LIB_0__.func_151("HAO1_LOOK_HELP", -1);
			iLocal_1018 = 0;
		}
	}
}

void func_321()//Position - 0x2ACB9
{
	if (__LIB_18__.func_173() == 1)
	{
		if (Local_537.f_11 < iLocal_545)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_546 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, false))
			{
				__LIB_5__.func_759(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "FRANKLIN_NORMAL", 10);
				iLocal_545 = Local_537.f_11;
				iLocal_546 = MISC::GET_GAME_TIMER() + 7500;
			}
			else
			{
				iLocal_545 = Local_537.f_11;
			}
		}
		else if (Local_537.f_11 > iLocal_545)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_546 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, false))
			{
				__LIB_5__.func_759(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "FRANKLIN_NORMAL", 10);
				iLocal_545 = Local_537.f_11;
				iLocal_546 = MISC::GET_GAME_TIMER() + 7500;
			}
			else
			{
				iLocal_545 = Local_537.f_11;
			}
		}
		if (__LIB_1__.func_183(Local_39.f_0))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_546 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, false))
			{
				if (func_315())
				{
					__LIB_5__.func_759(PLAYER::PLAYER_PED_ID(), "RACE_CRASH", "FRANKLIN_NORMAL", 10);
					iLocal_546 = MISC::GET_GAME_TIMER() + 7500;
				}
			}
		}
	}
	if (Local_536.f_1 != 3)
	{
		if (__LIB_0__.func_437(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_547 < 0)
			{
				iLocal_547 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2500, 5000));
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_547)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_548, "DISTANT_RACERS", Local_542[func_322() /*18*/].f_6, "ROAD_RACE_SOUNDSET", false, 0);
				iLocal_547 = -1;
			}
		}
		else if (iLocal_547 > 0)
		{
			iLocal_547 = -1;
		}
	}
}

int func_322()//Position - 0x2AE25
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar1 = 0f;
	fVar2 = 1E+10f;
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		if (__LIB_1__.func_183(Local_542[iVar0 /*18*/].f_6))
		{
			fVar1 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_542[iVar0 /*18*/].f_6, 1);
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

void func_327()//Position - 0x2B128
{
	if ((((Local_536.f_0 == 5 || Local_536.f_0 == 6) || Local_536.f_0 == 7) || Local_536.f_0 == 8) || Local_536.f_0 == 1)
	{
		__LIB_1__.func_428();
		__LIB_34__.func_951((MISC::GET_GAME_TIMER() - Local_537.f_5), 0, "", Local_537.f_11, Local_538.f_249 + 1, "", 0, 1, Local_537.f_6, Local_537.f_7, "", 1, 1, -1, "", -1f, 1, -1f, iLocal_516, 0, -1, -1, 0);
	}
	else
	{
		func_346();
		__LIB_0__.func_480(1, -1);
		if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 20 /*INPUT_MULTIPLAYER_INFO*/))
		{
			if (!Global_1836356)
			{
				Global_1836356 = 1;
			}
		}
		else if (Global_1836356)
		{
			Global_1836356 = 0;
		}
		__LIB_1__.func_428();
		__LIB_37__.func_418((MISC::GET_GAME_TIMER() - Local_537.f_5), 0, "", Local_537.f_8, Local_538.f_247, "", Local_537.f_11, Local_538.f_249 + 1, "", 0, 1, Local_537.f_6, Local_537.f_7, "", 1, -1, -1, "", 6, Local_537.f_10, "", (MISC::GET_GAME_TIMER() - Local_537.f_9), "", 0, 1, -1, "", -1f, 1, 1, -1f, iLocal_516, 0, -1, -1, 0, 0);
	}
}

void func_346()//Position - 0x2BFD9
{
	switch (iLocal_579)
	{
		case 1:
			iLocal_580 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_580))
			{
				iLocal_579 = 2;
			}
			break;
		case 2:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_580, "SHOW_SHARD_MIDSIZED_MESSAGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BM_LAP_STR" /* GXT: ~a~ ~1~/~1~ */);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("BM_LAP" /* GXT: LAP */);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Local_537.f_8);
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Local_538.f_247);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			iLocal_581 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_579 = 3;
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() < (iLocal_581 - 500))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_580))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_580, 255, 255, 255, 255, 0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				}
			}
			else
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_580, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				iLocal_579 = 4;
			}
			break;
		case 4:
			if (MISC::GET_GAME_TIMER() < iLocal_581)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_580))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_580, 255, 255, 255, 255, 0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
				}
			}
			else
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_580))
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_580);
				}
				iLocal_579 = 0;
			}
			break;
	}
}

void func_349()//Position - 0x2C3AB
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Local_537.f_11 = 1;
		iVar0 = Local_537.f_6;
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_538[Local_537.f_6 /*3*/], true);
		if (fVar1 > (fLocal_554 + 100f))
		{
			iVar2 = Local_537.f_6 + 1;
			if (iVar2 >= Local_538.f_248)
			{
				iVar2 = 0;
			}
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_538[iVar2 /*3*/], true);
			fVar4 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_538[iVar2 /*3*/], Local_538[Local_537.f_6 /*3*/], true) + 20f);
			if (fVar3 < fVar4)
			{
				iLocal_529 = 5;
			}
			else
			{
				iLocal_529 = 4;
			}
			iLocal_530 = 5;
			iLocal_531 = 0;
			return;
		}
		else if (fVar1 > (fLocal_554 + 7.5f))
		{
			iVar5 = 0;
			fVar6 = 9999f;
			iVar5 = 0;
			while (iVar5 < Local_538.f_248)
			{
				if (iVar5 < Local_537.f_6)
				{
					fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_538[iVar5 /*3*/], true);
					if (fVar7 < fVar6)
					{
						fVar6 = fVar7;
						iVar0 = iVar5;
					}
				}
				iVar5++;
			}
		}
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 < Local_538.f_249)
		{
			if (__LIB_0__.func_121(Local_542[iVar9 /*18*/].f_3))
			{
				if (Local_542[iVar9 /*18*/] == 3)
				{
					Local_537.f_11++;
				}
				else if (Local_542[iVar9 /*18*/].f_9 > Local_537.f_8)
				{
					Local_537.f_11++;
				}
				else if (Local_542[iVar9 /*18*/].f_9 == Local_537.f_8)
				{
					if (Local_542[iVar9 /*18*/].f_8 > iVar0)
					{
						Local_537.f_11++;
					}
					else if (Local_542[iVar9 /*18*/].f_8 == iVar0)
					{
						fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_538[iVar0 /*3*/], true);
						fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_542[iVar9 /*18*/].f_6, true), Local_538[Local_542[iVar9 /*18*/].f_8 /*3*/], true);
						if (fVar8 < fVar1)
						{
							Local_537.f_11++;
						}
					}
				}
			}
			iVar9++;
		}
	}
}

void func_350(int iParam0, int iParam1)//Position - 0x2C5BB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		func_352(iVar0, iParam0, iParam1);
		iVar0++;
	}
	func_351();
}

void func_351()//Position - 0x2C5E9
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (MISC::GET_GAME_TIMER() > iLocal_556)
	{
		fVar1 = 10000000f;
		iVar3 = 0;
		while (iVar3 <= (Local_538.f_249 - 1))
		{
			if (__LIB_1__.func_183(Local_542[iVar3 /*18*/].f_6))
			{
				fVar0 = __LIB_0__.func_76(PLAYER::PLAYER_PED_ID(), Local_542[iVar3 /*18*/].f_6, 1);
				if (fVar0 < fVar1)
				{
					fVar0 = fVar1;
					iVar2 = iVar3;
				}
			}
			iVar3++;
		}
		if (Local_536.f_1 == 3)
		{
			if (iLocal_555 > -1 && __LIB_1__.func_183(Local_542[iLocal_555 /*18*/].f_6))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_542[iLocal_555 /*18*/].f_6, 0f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_542[iLocal_555 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0f);
			}
			if (__LIB_1__.func_183(Local_542[iVar2 /*18*/].f_6))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_542[iVar2 /*18*/].f_6, "SEA_RACE_DURING_RACE_COLSEST_NPC", 0f);
			}
		}
		else
		{
			if (iLocal_555 > -1 && __LIB_1__.func_183(Local_542[iLocal_555 /*18*/].f_6))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_542[iLocal_555 /*18*/].f_6, 0f);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_542[iLocal_555 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0f);
			}
			if (__LIB_1__.func_183(Local_542[iVar2 /*18*/].f_6))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_542[iVar2 /*18*/].f_6, "STREET_RACE_NPC_CLOSEST", 0f);
			}
		}
		iLocal_555 = iVar2;
		iLocal_556 = MISC::GET_GAME_TIMER() + 2000;
	}
}

void func_352(int iParam0, var uParam1, int iParam2)//Position - 0x2C72B
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	if (iParam0 >= 0 || iParam0 < Local_538.f_249)
	{
		if (func_368(iParam0))
		{
			func_365(iParam0, iParam2);
			if (!PED::IS_PED_IN_VEHICLE(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, false))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true), 3f))
				{
					func_364(iParam0);
				}
				else
				{
					func_363(iParam0);
				}
			}
			else if (func_362(iParam0))
			{
				if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true), 3f))
				{
					func_364(iParam0);
				}
			}
			else
			{
				func_361(iParam0);
				func_360(iParam0);
				switch (Local_542[iParam0 /*18*/])
				{
					case 0:
						Local_542[iParam0 /*18*/].f_8 = 0;
						Local_542[iParam0 /*18*/].f_9 = 1;
						if (Local_536.f_1 == 2)
						{
							if (uParam1 || iParam0 != 6)
							{
								TASK::TASK_VEHICLE_TEMP_ACTION(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, 30, iParam0 + 1 * 100);
							}
						}
						Local_542[iParam0 /*18*/] = 1;
						break;
					case 1:
						if (((MISC::GET_GAME_TIMER() - Local_537.f_5) > iParam0 + 1 * 100 || Local_536.f_1 != 2) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_795))
						{
							Local_542[iParam0 /*18*/].f_2 = func_359(iParam0);
							if ((((Local_536.f_0 == 0 || Local_536.f_0 == 1) || Local_536.f_0 == 2) || Local_536.f_0 == 3) || Local_536.f_0 == 4)
							{
								if ((iParam0 == 0 || iParam0 == 2) || iParam0 == 4)
								{
									iVar0 = 0;
								}
								else
								{
									iVar0 = 1;
								}
								Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_542[iVar0 /*18*/].f_6, 0f, 20f, 0f) };
								fVar2 = __LIB_0__.func_529(Local_542[iParam0 /*18*/].f_6, Var1, 1);
								TASK::OPEN_SEQUENCE_TASK(&iVar3);
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_542[iParam0 /*18*/].f_6, Var1, Local_542[iParam0 /*18*/].f_2, 1, ENTITY::GET_ENTITY_MODEL(Local_542[iParam0 /*18*/].f_6), 17563684, 3f, fVar2);
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_542[iParam0 /*18*/].f_6, sLocal_795, 786468, 0, 24, -1, Local_542[iParam0 /*18*/].f_2, bLocal_544, 2f);
								TASK::CLOSE_SEQUENCE_TASK(iVar3);
								TASK::TASK_PERFORM_SEQUENCE(Local_542[iParam0 /*18*/].f_3, iVar3);
								TASK::CLEAR_SEQUENCE_TASK(&iVar3);
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, sLocal_795, 786468, 0, 16, -1, Local_542[iParam0 /*18*/].f_2, bLocal_544, 2f);
							}
							Local_542[iParam0 /*18*/] = 2;
						}
						break;
					case 2:
						if (func_358(iParam0) && Local_542[iParam0 /*18*/].f_15 != 1)
						{
							func_356(iParam0);
						}
						Local_542[iParam0 /*18*/].f_10 = 0;
						break;
					case 3:
						break;
					}
			}
			__LIB_27__.func_781(&(Local_542[iParam0 /*18*/].f_7), Local_542[iParam0 /*18*/].f_6, 1, 1092616192, 1);
		}
	}
}

void func_356(int iParam0)//Position - 0x2CB28
{
	int iVar0;
	if (Local_538.f_247 == 0)
	{
		iVar0 = (Local_538.f_248 - 2);
	}
	else
	{
		iVar0 = (Local_538.f_248 - 1);
	}
	if (Local_542[iParam0 /*18*/].f_8 == iVar0)
	{
		Local_542[iParam0 /*18*/].f_8 = 0;
		Local_542[iParam0 /*18*/].f_9++;
		if (Local_542[iParam0 /*18*/].f_9 > Local_538.f_247)
		{
			TASK::TASK_VEHICLE_DRIVE_WANDER(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, 30f, 786468);
		}
	}
	else
	{
		Local_542[iParam0 /*18*/].f_8++;
	}
	if (Local_542[iParam0 /*18*/] == 2)
	{
		func_357(iParam0);
	}
}

void func_357(int iParam0)//Position - 0x2CBD2
{
	float fVar0;
	float fVar1;
	fVar0 = func_359(iParam0);
	fVar1 = __LIB_0__.func_76(Local_542[iParam0 /*18*/].f_6, PLAYER::PLAYER_PED_ID(), 1);
	if ((Local_542[iParam0 /*18*/].f_8 - 1) < Local_537.f_6)
	{
		if (fVar1 > 50f)
		{
			fVar0 = (fVar0 + (fVar0 * 1f));
		}
		else if (fVar1 > 25f)
		{
			fVar0 = (fVar0 + (fVar0 * 0.7f));
		}
		else
		{
			fVar0 = (fVar0 + (fVar0 * 0.3f));
		}
	}
	else if (fVar1 > 100f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.3f));
	}
	else if (fVar1 > 25f)
	{
		fVar0 = (fVar0 - (fVar0 * 0.1f));
	}
	if (Local_542[iParam0 /*18*/].f_2 != fVar0)
	{
		Local_542[iParam0 /*18*/].f_2 = fVar0;
		TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_542[iParam0 /*18*/].f_3, fVar0);
	}
}

int func_358(int iParam0)//Position - 0x2CCA7
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_538[Local_542[iParam0 /*18*/].f_8 /*3*/], false) <= 12f)
	{
		return 1;
	}
	iVar2 = 0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_795, ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true), &iVar1);
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if ((iVar1 - iVar2) > 0)
		{
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, (iVar1 - iVar2), &Var0);
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_538[Local_542[iParam0 /*18*/].f_8 /*3*/], false) <= 12f)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

float func_359(int iParam0)//Position - 0x2CD53
{
	var uVar0;
	switch (Local_542[iParam0 /*18*/].f_1)
	{
		case 0:
			uVar0 = Local_538.f_250;
			break;
		case 1:
			uVar0 = Local_538.f_251;
			break;
		case 2:
			uVar0 = Local_538.f_252;
			break;
	}
	return uVar0;
}

void func_360(int iParam0)//Position - 0x2CD9B
{
	if (__LIB_1__.func_183(Local_39.f_0) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		if (Local_542[iParam0 /*18*/].f_13)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_39.f_0, Local_542[iParam0 /*18*/].f_6))
			{
				Local_542[iParam0 /*18*/].f_13 = 0;
				Local_542[iParam0 /*18*/].f_14 = MISC::GET_GAME_TIMER() + 4000;
			}
		}
		else if (Local_542[iParam0 /*18*/].f_14 > MISC::GET_GAME_TIMER())
		{
			PED::SET_IK_TARGET(Local_542[iParam0 /*18*/].f_3, 1, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0, 150, 400);
		}
		else
		{
			Local_542[iParam0 /*18*/].f_13 = 1;
		}
	}
}

void func_361(int iParam0)//Position - 0x2CE2D
{
	struct<3> Var0;
	switch (Local_542[iParam0 /*18*/].f_11)
	{
		case 0:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true)) };
			if ((Var0.f_0 > -2f && Var0.f_0 < 2f) || iParam0 == 0)
			{
				Local_542[iParam0 /*18*/].f_12 = MISC::GET_GAME_TIMER() + 2000;
				Local_542[iParam0 /*18*/].f_11 = 1;
			}
			else
			{
				Local_542[iParam0 /*18*/].f_11 = 2;
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() > Local_542[iParam0 /*18*/].f_12)
			{
				Local_542[iParam0 /*18*/].f_11 = 2;
			}
			else
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(Local_542[iParam0 /*18*/].f_6, 0, 0f, 25f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
			}
			break;
	}
}

int func_362(int iParam0)//Position - 0x2CEEF
{
	if (Local_536.f_1 == 2)
	{
		if ((ENTITY::IS_ENTITY_UPSIDEDOWN(Local_542[iParam0 /*18*/].f_6) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_542[iParam0 /*18*/].f_6, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_542[iParam0 /*18*/].f_6, 1, 40000))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_WATER(Local_542[iParam0 /*18*/].f_6))
	{
		if (Local_536.f_1 == 2 || Local_536.f_1 == 1)
		{
			return 1;
		}
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_542[iParam0 /*18*/].f_6, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_542[iParam0 /*18*/].f_6, 3, 30000))
	{
		return 1;
	}
	return 0;
}

void func_363(int iParam0)//Position - 0x2CF9E
{
	int iVar0;
	if (Local_542[iParam0 /*18*/].f_10 == 0)
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_795, ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true), &iVar0);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_796);
		TASK::TASK_ENTER_VEHICLE(0, Local_542[iParam0 /*18*/].f_6, 10000, -1, 2f, 1, 0);
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, Local_542[iParam0 /*18*/].f_6, sLocal_795, 786468, iVar0, 16, -1, (func_359(iParam0) * 2f), bLocal_544, 2f);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_796);
		TASK::TASK_PERFORM_SEQUENCE(Local_542[iParam0 /*18*/].f_3, iLocal_796);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_796);
		Local_542[iParam0 /*18*/].f_10 = 1;
	}
}

void func_364(int iParam0)//Position - 0x2D03D
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_795, ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, iVar0, &Var1);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, iVar0 + 1, &Var2);
	if (!CAM::IS_SPHERE_VISIBLE(Var1, 3f))
	{
		if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var1, 5f) || __LIB_0__.func_529(Local_542[iParam0 /*18*/].f_6, Var1, 1) < 5f)
		{
			ENTITY::SET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, Var1, true, false, false, true);
			__LIB_20__.func_718(Local_542[iParam0 /*18*/].f_6, Var2);
			if (!PED::IS_PED_IN_VEHICLE(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, -1);
			}
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, sLocal_795, 786468, iVar0, 16, -1, (func_359(iParam0) * 2f), bLocal_544, 2f);
			iLocal_535 = MISC::GET_GAME_TIMER() + 1500;
			iLocal_535 = iLocal_535;
		}
	}
}

void func_365(int iParam0, int iParam1)//Position - 0x2D145
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	struct<3> Var8;
	struct<3> Var9;
	if (iParam1 && iParam0 == (Local_538.f_249 - 1))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 30f;
	}
	switch (Local_542[iParam0 /*18*/].f_15)
	{
		case 0:
			if (((func_367(iParam0, iParam1) && PED::IS_PED_IN_VEHICLE(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, false)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_542[iParam0 /*18*/].f_6)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_795))
			{
				iVar1 = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(Local_542[iParam0 /*18*/].f_6);
				if (iVar1 < 1)
				{
					iVar1 = 1;
				}
				if (iVar1 < iLocal_968)
				{
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar3 = 1;
				}
				if ((TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_795, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar2) && TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, iVar3, &Var5)) && TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, iVar2, &Var6))
				{
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var6, Var5, true);
					if (((((fVar4 > 40f || Local_542[iParam0 /*18*/].f_9 < Local_537.f_8) && !__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_542[iParam0 /*18*/].f_6, fVar0, 1)) && !__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Var5, fVar0, 1)) && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true), 5f)) && !CAM::IS_SPHERE_VISIBLE(Var5, 5f))
					{
						if (iParam1 && iParam0 == (Local_538.f_249 - 1))
						{
							Local_542[iParam0 /*18*/].f_17 = MISC::GET_GAME_TIMER() + 90;
						}
						else
						{
							Local_542[iParam0 /*18*/].f_17 = (MISC::GET_GAME_TIMER() + 100 + iParam0 * 10);
						}
						Local_542[iParam0 /*18*/].f_16 = iVar3;
						Local_542[iParam0 /*18*/].f_15 = 1;
					}
				}
			}
			break;
		case 1:
			if (Local_542[iParam0 /*18*/].f_16 < iLocal_968)
			{
				iVar7 = Local_542[iParam0 /*18*/].f_16 + 1;
			}
			else
			{
				iVar7 = 1;
			}
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, Local_542[iParam0 /*18*/].f_16, &Var8))
			{
				if (((((__LIB_0__.func_508(PLAYER::PLAYER_PED_ID(), Local_542[iParam0 /*18*/].f_6, fVar0, 1) || __LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Var8, fVar0, 1)) || CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, true), 5f)) || CAM::IS_SPHERE_VISIBLE(Var8, 5f)) || (Local_542[iParam0 /*18*/].f_9 == Local_537.f_8 && Local_542[iParam0 /*18*/].f_8 >= Local_537.f_6)) || Local_542[iParam0 /*18*/].f_9 > Local_537.f_8)
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, sLocal_795, 786468, iVar7, 16, -1, func_359(iParam0), bLocal_544, 2f);
					if (Local_536.f_1 == 3)
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_542[iParam0 /*18*/].f_6, (func_359(iParam0) * 0.25f));
					}
					else
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_542[iParam0 /*18*/].f_6, (func_359(iParam0) * 0.5f));
					}
					Local_542[iParam0 /*18*/].f_15 = 0;
				}
				else if (MISC::GET_GAME_TIMER() > Local_542[iParam0 /*18*/].f_17)
				{
					if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var8, 5f) || __LIB_0__.func_530(Local_542[iParam0 /*18*/].f_6, Var8, 5f, 1))
					{
						if (TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_795, iVar7, &Var9))
						{
							ENTITY::SET_ENTITY_COORDS(Local_542[iParam0 /*18*/].f_6, Var8, true, false, false, true);
							__LIB_20__.func_718(Local_542[iParam0 /*18*/].f_6, Var9);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var8, Local_538[Local_542[iParam0 /*18*/].f_8 /*3*/], false) <= (12f * 2f))
							{
								func_356(iParam0);
							}
							Local_542[iParam0 /*18*/].f_16 = iVar7;
							Local_542[iParam0 /*18*/].f_17 = (MISC::GET_GAME_TIMER() + 100 + iParam0 * 10);
							if (!PED::IS_PED_IN_VEHICLE(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_542[iParam0 /*18*/].f_3, Local_542[iParam0 /*18*/].f_6, -1);
							}
							iLocal_535 = MISC::GET_GAME_TIMER() + 1500;
							iLocal_535 = iLocal_535;
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

int func_367(int iParam0, int iParam1)//Position - 0x2D56D
{
	if (Local_542[iParam0 /*18*/].f_9 < Local_537.f_8)
	{
		return 1;
	}
	if (Local_542[iParam0 /*18*/].f_9 > Local_537.f_8)
	{
		return 0;
	}
	if (Local_542[iParam0 /*18*/].f_9 == Local_537.f_8 && Local_542[iParam0 /*18*/].f_8 >= Local_537.f_6)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	if (iParam1 && iParam0 != (Local_538.f_249 - 1))
	{
		return 1;
	}
	if ((iParam1 && iParam0 == (Local_538.f_249 - 1)) && Local_542[iParam0 /*18*/].f_8 > 1)
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0)//Position - 0x2D614
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_542[iParam0 /*18*/].f_3))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_542[iParam0 /*18*/].f_3, false))
		{
			iLocal_529 = 2;
			iLocal_530 = 5;
			iLocal_531 = 0;
		}
		else if (PED::IS_PED_INJURED(Local_542[iParam0 /*18*/].f_3))
		{
			iLocal_529 = 2;
			iLocal_530 = 5;
			iLocal_531 = 0;
		}
		else if (__LIB_32__.func_572(Local_542[iParam0 /*18*/].f_3, 1, 0, 0, 0))
		{
			iLocal_529 = 1;
			iLocal_530 = 5;
			iLocal_531 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_542[iParam0 /*18*/].f_6))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_542[iParam0 /*18*/].f_6, false))
		{
			iLocal_529 = 2;
			iLocal_530 = 5;
			iLocal_531 = 0;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_542[iParam0 /*18*/].f_6, PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_529 = 1;
			iLocal_530 = 5;
			iLocal_531 = 0;
		}
	}
	if (__LIB_0__.func_121(Local_542[iParam0 /*18*/].f_3) && __LIB_0__.func_121(Local_542[iParam0 /*18*/].f_6))
	{
		return 1;
	}
	return 0;
}

void func_370()//Position - 0x2D74D
{
	iLocal_548 = AUDIO::GET_SOUND_ID();
	iLocal_547 = -1;
}

int func_373(bool bParam0)//Position - 0x2D84F
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_375(bParam0);
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_538[Local_537.f_6 /*3*/], true) <= 12f)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
			if (Local_537.f_6 == (Local_537.f_7 - 1))
			{
				iVar0 = (MISC::GET_GAME_TIMER() - Local_537.f_9);
				if (Local_537.f_10 < 0 || Local_537.f_10 > iVar0)
				{
					Local_537.f_10 = iVar0;
				}
				Local_537.f_9 = MISC::GET_GAME_TIMER();
				if (Local_537.f_8 == Local_538.f_247)
				{
					func_33();
					return 1;
				}
				else
				{
					Local_537.f_8++;
					Local_537.f_6 = 0;
					iLocal_579 = 1;
				}
			}
			else
			{
				Local_537.f_6++;
			}
			func_374();
			func_33();
		}
	}
	return 0;
}

void func_374()//Position - 0x2D924
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fLocal_554 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_538[Local_537.f_6 /*3*/], true);
	}
}

void func_375(bool bParam0)//Position - 0x2D954
{
	int iVar0;
	iVar0 = Local_537.f_6 + 1;
	if (Local_536.f_5)
	{
		if (Local_537.f_6 == (Local_538.f_248 - 1))
		{
			func_377((Local_538.f_248 - 1), 1, bParam0);
		}
		else
		{
			func_377(Local_537.f_6, 0, bParam0);
			if (iVar0 == (Local_538.f_248 - 1))
			{
				func_376(Local_538[iVar0 /*3*/], 1);
			}
			else
			{
				func_376(Local_538[iVar0 /*3*/], 0);
			}
		}
	}
	else if (Local_537.f_6 == (Local_538.f_248 - 1))
	{
		if (Local_537.f_8 == Local_538.f_247)
		{
			func_377(Local_537.f_6, 1, bParam0);
		}
		else
		{
			func_377(Local_537.f_6, 0, bParam0);
			func_376(Local_538[0 /*3*/], 0);
		}
	}
	else
	{
		func_377(Local_537.f_6, 0, bParam0);
		if (iVar0 == (Local_538.f_248 - 1))
		{
			func_376(Local_538[iVar0 /*3*/], 1);
		}
		else
		{
			func_376(Local_538[iVar0 /*3*/], 0);
		}
	}
}

void func_376(struct<3> Param0, bool bParam1)//Position - 0x2DA45
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_550))
	{
		iLocal_550 = HUD::ADD_BLIP_FOR_COORD(Param0);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_550, false);
		if (!bParam1)
		{
			HUD::SET_BLIP_COLOUR(iLocal_550, 5);
			HUD::SET_BLIP_SCALE(iLocal_550, 0.7f);
		}
		else if (Local_537.f_8 == Local_538.f_247)
		{
			HUD::SET_BLIP_SPRITE(iLocal_550, 38);
			HUD::SET_BLIP_SCALE(iLocal_550, 1.2f);
		}
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_550, "BLIP_CPOINT" /* GXT: Checkpoint */);
	}
}

void func_377(int iParam0, bool bParam1, bool bParam2)//Position - 0x2DAB6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	struct<3> Var12;
	struct<3> Var13;
	float fVar14;
	float fVar15;
	float fVar16;
	bool bVar17;
	iVar9 = func_382(iParam0);
	HUD::GET_HUD_COLOUR(13, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::GET_HUD_COLOUR(134, &iVar4, &iVar5, &iVar6, &uVar7);
	iVar3 = func_381(iParam0);
	if (HUD::DOES_BLIP_EXIST(iLocal_549))
	{
		if (iLocal_551 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_551, iVar0, iVar1, iVar2, iVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_551, iVar4, iVar5, iVar6, iVar3);
		}
	}
	else
	{
		Var10 = { Local_538[iParam0 /*3*/] };
		Var13 = { Var10 };
		Var13.f_2 = (Var13.f_2 + 20f);
		bVar17 = false;
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var13, &fVar16, false, false))
		{
			if (fVar16 > (Var10.f_2 + 1f))
			{
				fVar14 = ((7.5f * 1f) * 0.66f);
				fVar15 = 2f;
				bVar17 = true;
			}
			else
			{
				fVar14 = (8.5f * 1.333f);
				fVar15 = 6f;
			}
		}
		else
		{
			fVar14 = (8.5f * 1.333f);
			fVar15 = 6f;
		}
		if (iParam0 == (Local_538.f_248 - 1))
		{
			Var11 = { Local_538[0 /*3*/] };
		}
		else
		{
			Var11 = { Local_538[iParam0 + 1 /*3*/] };
		}
		iVar8 = (iParam0 - 1);
		if (iVar8 < 0)
		{
			iVar8 = (Local_538.f_248 - 1);
		}
		Var12 = { Local_538[iVar8 /*3*/] };
		iLocal_549 = HUD::ADD_BLIP_FOR_COORD(Var10);
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_549, false);
		if (!bParam1)
		{
			HUD::SET_BLIP_COLOUR(iLocal_549, 5);
			HUD::SET_BLIP_SCALE(iLocal_549, 1.2f);
			HUD::SET_BLIP_PRIORITY(iLocal_549, 9);
			if (bVar17)
			{
				switch (iVar9)
				{
					case 19:
					case 8:
						iVar9 = 14;
						break;
					case 18:
					case 7:
						iVar9 = 13;
						break;
					case 17:
					case 6:
						iVar9 = 12;
						break;
					}
			}
			iLocal_551 = GRAPHICS::CREATE_CHECKPOINT(iVar9, Var10 + Vector(fVar15, 0f, 0f), Var11, fVar14, iVar0, iVar1, iVar2, iVar3, 0);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_551, iVar4, iVar5, iVar6, iVar3);
			__LIB_34__.func_781(iLocal_551, Var10);
		}
		else
		{
			HUD::SET_BLIP_SPRITE(iLocal_549, 38);
			HUD::SET_BLIP_PRIORITY(iLocal_549, 7);
			HUD::SET_BLIP_SCALE(iLocal_549, 1.2f);
			iLocal_551 = GRAPHICS::CREATE_CHECKPOINT(10, Var10 + Vector(fVar15, 0f, 0f), Var11, fVar14, iVar0, iVar1, iVar2, iVar3, 0);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_551, iVar4, iVar5, iVar6, iVar3);
			__LIB_34__.func_781(iLocal_551, Var10);
		}
		if (bParam2)
		{
			iVar9 = func_382(iVar8);
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iLocal_553);
			iLocal_553 = 180;
			if (iLocal_552 != 0)
			{
				GRAPHICS::DELETE_CHECKPOINT(iLocal_552);
			}
			iLocal_552 = GRAPHICS::CREATE_CHECKPOINT(iVar9, Var12 + Vector(fVar15, 0f, 0f), Var10, fVar14, iVar0, iVar1, iVar2, iLocal_553, 0);
		}
		if (Local_536.f_1 == 3)
		{
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_551, 16f, 16f, 100f);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_552, 16f, 16f, 100f);
		}
		else
		{
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_551, 9.5f, 9.5f, 100f);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_552, 9.5f, 9.5f, 100f);
		}
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_549, "BLIP_CPOINT" /* GXT: Checkpoint */);
	}
	if (iLocal_552 != 0)
	{
		iLocal_553 = (iLocal_553 - 25);
		if (iLocal_553 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_552, iVar0, iVar1, iVar2, iLocal_553);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_552);
		}
	}
}

int func_381(int iParam0)//Position - 0x2DFDB
{
	float fVar0;
	int iVar1;
	iVar1 = 240;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_538[iParam0 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
		if (fVar0 > 100f)
		{
			iVar1 = 240;
		}
		else
		{
			iVar1 = SYSTEM::ROUND((fVar0 * 2.4f));
		}
	}
	return iVar1;
}

int func_382(int iParam0)//Position - 0x2E02F
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	Var0 = { Local_538[iParam0 /*3*/] };
	if (iParam0 + 1 == Local_538.f_248)
	{
		Var1 = { Local_538[0 /*3*/] };
	}
	else
	{
		Var1 = { Local_538[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		Var2 = { Local_538[(iParam0 - 1) /*3*/] };
	}
	Var3 = { Var2 - Var0 };
	Var4 = { Var1 - Var0 };
	fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	if (fVar5 < fLocal_28)
	{
		return 8;
	}
	else if (fVar5 < fLocal_29)
	{
		return 7;
	}
	else if (fVar5 < fLocal_30)
	{
		return 6;
	}
	else
	{
		return 6;
	}
	return 6;
}

void func_385()//Position - 0x2E11E
{
	int iVar0;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_489();
	__LIB_0__.func_186();
	switch (iLocal_976)
	{
		case 0:
			__LIB_0__.func_523(&iLocal_979);
			__LIB_1__.func_11(&Local_537);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", true, -1);
			__LIB_42__.func_415(1, "Race start", 1, 0, 0, 1);
			__LIB_35__.func_395(1, 0);
			__LIB_35__.func_395(7, 0);
			iLocal_543 = 0;
			iLocal_1015 = 1;
			iLocal_534 = -1;
			iLocal_533 = 0;
			__LIB_7__.func_204(&(Local_537.f_1), 8);
			__LIB_7__.func_204(&(Local_537.f_1), 4);
			__LIB_7__.func_204(&(Local_537.f_1), 2);
			__LIB_7__.func_204(&(Local_537.f_1), 1);
			__LIB_1__.func_37(&(Local_537.f_2));
			if (__LIB_1__.func_183(Local_39.f_0))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				VEHICLE::SET_VEHICLE_HANDBRAKE(Local_39.f_0, true);
			}
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_5__.func_759(PLAYER::PLAYER_PED_ID(), "RACE_REACH_START", "FRANKLIN_NORMAL", 10);
			}
			iLocal_976 = 1;
			break;
		case 1:
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_321_GO", true, -1);
			if (__LIB_11__.func_514(&Local_537))
			{
				func_373(0);
				if (__LIB_34__.func_332(&Local_537, 1, 0, 0, 3, 1, 0, 0))
				{
					iLocal_976 = 3;
				}
				if (bLocal_1014)
				{
					if (__LIB_0__.func_517(Local_537.f_1, 2))
					{
						func_394();
					}
				}
				if (__LIB_0__.func_517(Local_537.f_1, 8))
				{
					if (iLocal_534 < 0)
					{
						iLocal_534 = MISC::GET_GAME_TIMER() + 500;
					}
					if (iLocal_543 == 0)
					{
						iLocal_543 = 1;
						func_393();
						iVar0 = PLAYER::GET_PLAYER_INDEX();
						PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0);
						if (__LIB_1__.func_183(Local_39.f_0))
						{
							VEHICLE::SET_VEHICLE_HANDBRAKE(Local_39.f_0, false);
						}
						AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
						if (Local_536.f_1 == 3)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MGSR_START");
						}
						func_392();
					}
					func_350(0, 0);
				}
			}
			break;
		case 3:
			__LIB_1__.func_30(&Local_537);
			func_373(0);
			func_386();
			iLocal_975 = 8;
			iLocal_976 = 0;
			break;
	}
	func_277();
}

void func_386()//Position - 0x2E2DD
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	__LIB_0__.func_124(&iLocal_777, 1, 0, 1);
	__LIB_0__.func_124(&iLocal_778, 1, 0, 1);
	__LIB_0__.func_124(&iLocal_779, 1, 0, 1);
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, false);
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0);
	}
	if (Local_536.f_1 == 1 || Local_536.f_1 == 2)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_800, false);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_797, Local_798, fLocal_799, 1);
	}
	__LIB_7__.func_279(0, 1, 0, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	HUD::CLEAR_HELP(true);
}

void func_392()//Position - 0x2E531
{
	int iVar0;
	if (Local_536.f_1 == 3)
	{
		AUDIO::START_AUDIO_SCENE("SEA_RACE_DURING_RACE");
	}
	else
	{
		AUDIO::START_AUDIO_SCENE("STREET_RACE_DURING_RACE");
	}
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		if (__LIB_1__.func_183(Local_542[iVar0 /*18*/].f_6))
		{
			if (Local_536.f_1 == 3)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_542[iVar0 /*18*/].f_6, "SEA_RACE_DURING_RACE_NPC_GENERAL", 0f);
			}
			else
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_542[iVar0 /*18*/].f_6, "STREET_RACE_NPC_GENERAL", 0f);
			}
		}
		iVar0++;
	}
}

void func_393()//Position - 0x2E5B1
{
	Local_537.f_5 = MISC::GET_GAME_TIMER();
	Local_537.f_6 = 0;
	Local_537.f_8 = 1;
	Local_537.f_9 = MISC::GET_GAME_TIMER();
	Local_537.f_7 = Local_538.f_248;
	func_374();
}

void func_394()//Position - 0x2E5E5
{
	struct<3> Var0;
	struct<3> Var1;
	if ((iLocal_1015 && __LIB_1__.func_183(Local_974.f_35[0])) && __LIB_1__.func_197(Local_974.f_28[0]))
	{
		if (!__LIB_0__.func_530(Local_974.f_35[0], Local_538.f_181[(Local_538.f_249 - 1) /*3*/], 10f, 1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_974.f_28[0]);
			VEHICLE::BRING_VEHICLE_TO_HALT(Local_974.f_35[0], 0.1f, 1, false);
			if (!PED::IS_PED_IN_VEHICLE(Local_974.f_28[0], Local_974.f_35[0], false) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_974.f_35[0], -1, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_974.f_28[0], Local_974.f_35[0], -1);
			}
			Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_538.f_181[(Local_538.f_249 - 1) /*3*/], Local_538.f_230[(Local_538.f_249 - 1)], 0f, -5f, 0f) };
			Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_538.f_181[(Local_538.f_249 - 1) /*3*/], Local_538.f_230[(Local_538.f_249 - 1)], 0f, 2.3f, 0f) };
			ENTITY::SET_ENTITY_COORDS(Local_974.f_35[0], Var0, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_974.f_35[0], Local_538.f_230[(Local_538.f_249 - 1)]);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_974.f_35[0], 5f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_974.f_35[0], 5f);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(Local_974.f_28[0], Local_974.f_35[0], Var1, 5f, 0, ENTITY::GET_ENTITY_MODEL(Local_974.f_35[0]), 17039360, 0.5f, 15f);
			iLocal_1015 = 0;
		}
	}
}

int func_489()//Position - 0x35BA2
{
	int iVar0;
	int iVar1;
	if (Local_536.f_1 == 3)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_558[0]))
		{
			if (MISC::GET_GAME_TIMER() > iLocal_794)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558[1], iLocal_558[0], 500, 0, 1);
				CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_558[1], 1f);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDER_WATER_COME_UP", 0, true);
				CAM::DESTROY_CAM(iLocal_558[0], false);
			}
			else
			{
				func_491(0);
			}
		}
		else if (CAM::DOES_CAM_EXIST(iLocal_558[1]))
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_558[1]))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558[2], iLocal_558[1], 3000, 0, 1);
				CAM::SHAKE_CAM(iLocal_558[2], "HAND_SHAKE", 0.3f);
				CAM::DESTROY_CAM(iLocal_558[1], false);
			}
			else
			{
				func_491(1);
			}
		}
		else if (CAM::DOES_CAM_EXIST(iLocal_558[2]))
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_558[2]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_558[3], true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558[4], iLocal_558[3], 5000, 3, 1);
				CAM::SHAKE_CAM(iLocal_558[4], "HAND_SHAKE", 0.3f);
				CAM::DESTROY_CAM(iLocal_558[2], false);
				iLocal_794 = MISC::GET_GAME_TIMER() + 2000;
			}
			else
			{
				func_491(1);
			}
		}
		else if (CAM::DOES_CAM_EXIST(iLocal_558[4]))
		{
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_558[4]))
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_558)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_558[iVar0]))
					{
						CAM::DESTROY_CAM(iLocal_558[iVar0], false);
					}
					iVar0++;
				}
			}
			else
			{
				func_491(1);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_794)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_558[1]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_558[1]))
		{
			if (iLocal_794 < 0)
			{
				iLocal_794 = MISC::GET_GAME_TIMER() + 1000;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_794)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558[3], iLocal_558[2], 4000, 0, 1);
				CAM::SHAKE_CAM(iLocal_558[2], "HAND_SHAKE", 1f);
				CAM::SHAKE_CAM(iLocal_558[3], "HAND_SHAKE", 1f);
				CAM::DESTROY_CAM(iLocal_558[1], false);
			}
		}
		else
		{
			func_491(0);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_558[3]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_558[3]))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558[5], iLocal_558[4], 4000, 0, 1);
			CAM::SHAKE_CAM(iLocal_558[4], "HAND_SHAKE", 1f);
			CAM::SHAKE_CAM(iLocal_558[5], "HAND_SHAKE", 1f);
			CAM::DESTROY_CAM(iLocal_558[3], false);
			if (Local_536.f_0 == 2 || Local_536.f_0 == 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_39.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_39.f_0, Local_538.f_181[Local_538.f_249 /*3*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_39.f_0, Local_538.f_230[Local_538.f_249]);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_39.f_0, 5f);
					}
				}
			}
		}
		else
		{
			if (__LIB_1__.func_197(iLocal_777))
			{
				if (iLocal_786)
				{
					if (__LIB_37__.func_799(&uLocal_803, "STR1AUD", "STR1_GIRL1", 8, 0, 0, 0))
					{
						iLocal_786 = 0;
					}
				}
			}
			func_491(1);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_558[5]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_558[5]))
		{
			if (func_490())
			{
				CAM::SET_CAM_ACTIVE(iLocal_558[6], true);
			}
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558[7], iLocal_558[6], 3000, 3, 1);
			CAM::SHAKE_CAM(iLocal_558[6], "HAND_SHAKE", 1f);
			CAM::SHAKE_CAM(iLocal_558[7], "HAND_SHAKE", 1f);
			CAM::DESTROY_CAM(iLocal_558[5], false);
			return 1;
		}
		else
		{
			if (__LIB_1__.func_197(iLocal_779))
			{
				if (iLocal_787)
				{
					if (__LIB_37__.func_799(&uLocal_803, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						iLocal_787 = 0;
					}
				}
			}
			func_491(1);
		}
	}
	else if (CAM::DOES_CAM_EXIST(iLocal_558[7]))
	{
		if (!CAM::IS_CAM_INTERPOLATING(iLocal_558[7]))
		{
			CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_558)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_558[iVar1]))
				{
					CAM::DESTROY_CAM(iLocal_558[iVar1], false);
				}
				iVar1++;
			}
		}
		else
		{
			if (__LIB_1__.func_197(iLocal_779))
			{
				if (iLocal_787)
				{
					if (__LIB_37__.func_799(&uLocal_803, "STR1AUD", "STR1_GIRL2", 8, 0, 0, 0))
					{
						iLocal_787 = 0;
					}
				}
			}
			func_491(1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_490()//Position - 0x35FF6
{
	int iVar0;
	if (__LIB_1__.func_183(Local_39.f_0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(Local_39.f_0);
		if (iVar0 == MISC::GET_HASH_KEY("MONSTER" /* GXT: The Liberator */) || iVar0 == MISC::GET_HASH_KEY("MARSHALL" /* GXT: Marshall */))
		{
			return 1;
		}
	}
	return 0;
}

void func_491(bool bParam0)//Position - 0x36035
{
	if (iLocal_577 == 0)
	{
		if (Local_536.f_1 == 3)
		{
			if (AUDIO::LOAD_STREAM("INTRO_STREAM", "SEA_RACES_SOUNDSET"))
			{
				if (bParam0)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_577 = 1;
				}
			}
		}
		else if (Local_536.f_1 == 1)
		{
			if (AUDIO::LOAD_STREAM("VESPUCCI_CANAL_INTRO", "ROAD_RACE_SOUNDSET"))
			{
				if (bParam0)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_577 = 1;
				}
			}
		}
		else if (AUDIO::LOAD_STREAM("INTRO_STREAM", "ROAD_RACE_SOUNDSET"))
		{
			if (bParam0)
			{
				AUDIO::PLAY_STREAM_FRONTEND();
				iLocal_577 = 1;
			}
		}
	}
}

void func_492()//Position - 0x360B4
{
	int iVar0;
	int iVar1;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_976)
	{
		case 0:
			__LIB_0__.func_523(&iLocal_979);
			__LIB_40__.func_643();
			if (PLAYER::GET_PLAYERS_LAST_VEHICLE() != Local_974.f_35[1])
			{
				__LIB_11__.func_32(&(Local_974.f_35[1]));
			}
			func_507();
			func_506();
			func_505();
			func_502();
			iLocal_577 = 0;
			bLocal_1019 = false;
			__LIB_0__.func_84(500, 1);
			__LIB_42__.func_415(1, "Race start", 1, 0, 0, 1);
			iLocal_976 = 1;
			break;
		case 1:
			if (func_489())
			{
				func_500(0.32f);
				iLocal_975 = 7;
				iLocal_976 = 0;
			}
			if (__LIB_6__.func_841(1000))
			{
				__LIB_10__.func_696(500, 1);
				bLocal_1019 = true;
				func_496();
				iVar0 = 0;
				while (iVar0 <= (Local_538.f_249 - 1))
				{
					if (__LIB_1__.func_197(Local_542[iVar0 /*18*/].f_3))
					{
						TASK::CLEAR_PED_TASKS(Local_542[iVar0 /*18*/].f_3);
					}
					if (__LIB_1__.func_183(Local_542[iVar0 /*18*/].f_6))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_542[iVar0 /*18*/].f_6, 0.1f, 1, false);
						__LIB_10__.func_698(Local_542[iVar0 /*18*/].f_6, Local_538.f_181[iVar0 /*3*/]);
						ENTITY::SET_ENTITY_HEADING(Local_542[iVar0 /*18*/].f_6, Local_538.f_230[iVar0]);
					}
					iVar0++;
				}
				__LIB_0__.func_0(&iLocal_778);
				__LIB_0__.func_0(&iLocal_779);
				iLocal_976 = 3;
			}
			break;
		case 3:
			func_496();
			func_500(0.27f);
			if (bLocal_1019)
			{
				func_496();
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				SYSTEM::WAIT(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_558)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_558[iVar1]))
				{
					CAM::DESTROY_CAM(iLocal_558[iVar1], false);
				}
				iVar1++;
			}
			iLocal_975 = 7;
			iLocal_976 = 0;
			__LIB_0__.func_84(500, 1);
			break;
	}
}

void func_496()//Position - 0x36327
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_39.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_39.f_0, Local_538.f_181[Local_538.f_249 /*3*/], true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_39.f_0, Local_538.f_230[Local_538.f_249]);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_39.f_0, 5f);
			}
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::SET_ENTITY_VISIBLE(Local_39.f_0, true, false);
		}
	}
}

void func_500(float fParam0)//Position - 0x36457
{
	int iVar0;
	if (Local_536.f_1 == 2)
	{
		if (__LIB_1__.func_197(iLocal_777))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_PLAY_ANIM(0, sLocal_780, "grid_girl_race_start", 4f, -8f, -1, 8, fParam0, false, false, false);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_785, 1f, 20000, 40000f, 0.5f);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_777, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		}
	}
}

void func_502()//Position - 0x36507
{
	int iVar0;
	struct<3> Var1;
	if (Local_536.f_1 == 2)
	{
		STREAMING::REQUEST_MODEL(joaat("A_F_Y_GenHot_01"));
		STREAMING::REQUEST_ANIM_DICT(sLocal_780);
		func_504();
		while (!STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_GenHot_01")))
		{
			SYSTEM::WAIT(0);
		}
		while (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_780))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_777 = PED::CREATE_PED(25, joaat("A_F_Y_GenHot_01"), Local_781, fLocal_784, true, true);
		__LIB_20__.func_718(iLocal_777, Local_785);
		iLocal_778 = PED::CREATE_PED(25, joaat("A_F_Y_GenHot_01"), Local_782, fLocal_784, true, true);
		__LIB_20__.func_718(iLocal_778, Local_785);
		iLocal_779 = PED::CREATE_PED(25, joaat("A_F_Y_GenHot_01"), Local_783, fLocal_784, true, true);
		__LIB_20__.func_718(iLocal_779, Local_785);
		TASK::TASK_PAUSE(iLocal_777, -1);
		__LIB_0__.func_203(&uLocal_803, 3, iLocal_777, "GIRL1", 0, 1);
		iLocal_786 = 1;
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_778, 0f, 20f, 0f) };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, sLocal_780, "grid_girl_a", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var1, 1f, 20000, 40000f, 0.5f);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_778, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_779, 0f, 15f, 0f) };
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_PLAY_ANIM(0, sLocal_780, "grid_girl_b", 8f, -8f, -1, 9, 0f, false, false, false);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var1, 1f, 20000, 40000f, 0.5f);
		TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_779, iVar0);
		TASK::CLEAR_SEQUENCE_TASK(&iVar0);
		__LIB_0__.func_203(&uLocal_803, 4, iLocal_779, "GIRL2", 0, 1);
		iLocal_787 = 1;
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_GenHot_01"));
	}
}

void func_504()//Position - 0x36772
{
	switch (Local_536.f_0)
	{
		case 0:
			Local_781 = { -155.6468f, -1566.9487f, 33.993595f };
			Local_782 = { -153.63f, -1563.7f, 34.95f };
			Local_783 = { -148.09f, -1557.66f, 34.75f };
			fLocal_784 = -30.86f;
			Local_785 = { -141.65f, -1550.75f, 33.46f };
			break;
		case 1:
			Local_781 = { 367.61606f, 312.45715f, 102.58612f };
			Local_782 = { 368.45474f, 312.21085f, 102.567795f };
			Local_783 = { 375.17f, 310.64f, 103.44f };
			fLocal_784 = -103.75f;
			Local_785 = { 386.63f, 307.77f, 102.2f };
			break;
		case 2:
			Local_781 = { -813.80334f, -2546.8008f, 12.800132f };
			Local_782 = { -814.4293f, -2547.7476f, 12.80057f };
			Local_783 = { -816.56f, -2554.45f, 13.77f };
			fLocal_784 = 157.75f;
			Local_785 = { -819.68f, -2562.68f, 12.75f };
			break;
		case 3:
			Local_781 = { 777.3962f, -1148.09f, 28.05913f };
			Local_782 = { 778.63116f, -1148.0701f, 28.008192f };
			Local_783 = { 787f, -1148.06f, 28.92f };
			fLocal_784 = -89.3f;
			Local_785 = { 795.3f, -1147.23f, 27.98f };
			break;
	}
}

void func_505()//Position - 0x36906
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_558)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_558[iVar0]))
		{
			CAM::DESTROY_CAM(iLocal_558[iVar0], false);
		}
		iVar0++;
	}
	if (Local_536.f_1 == 3)
	{
		iLocal_558[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_559, Local_560, 35f, false, 2);
		CAM::SET_CAM_ACTIVE(iLocal_558[0], true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
		iLocal_558[1] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_575, Local_576, 35f, false, 2);
		iLocal_558[2] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_561, Local_562, 35f, false, 2);
		iLocal_558[3] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_563, Local_564, 50f, false, 2);
		iLocal_558[4] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_565, Local_566, 50f, false, 2);
		iLocal_794 = MISC::GET_GAME_TIMER() + 250;
	}
	else
	{
		if (Local_536.f_0 == 4)
		{
			iLocal_558[0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_559, Local_560, 40f, false, 2);
		}
		else
		{
			iLocal_558[0] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::SET_CAM_FOV(iLocal_558[0], 40f);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_558[0], Local_39.f_0, Local_559, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_558[0], Local_39.f_0, Local_560, true);
		}
		iLocal_558[1] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_FOV(iLocal_558[1], 40f);
		CAM::ATTACH_CAM_TO_ENTITY(iLocal_558[1], Local_39.f_0, Local_561, true);
		CAM::POINT_CAM_AT_ENTITY(iLocal_558[1], Local_39.f_0, Local_562, true);
		CAM::SET_CAM_ACTIVE(iLocal_558[0], true);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_558[1], iLocal_558[0], 3000, 1, 1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
		CAM::SHAKE_CAM(iLocal_558[0], "ROAD_VIBRATION_SHAKE", 0.5f);
		CAM::SHAKE_CAM(iLocal_558[1], "ROAD_VIBRATION_SHAKE", 0.5f);
		iLocal_558[2] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_563, Local_564, 40f, false, 2);
		iLocal_558[3] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_565, Local_566, 40f, false, 2);
		iLocal_558[4] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_567, Local_568, 40f, false, 2);
		iLocal_558[5] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_569, Local_570, 40f, false, 2);
		if (func_490())
		{
			iLocal_558[6] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::SET_CAM_FOV(iLocal_558[6], 50f);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_558[6], Local_39.f_0, Local_571, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_558[6], Local_39.f_0, Local_572, true);
			iLocal_558[7] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
			CAM::SET_CAM_FOV(iLocal_558[7], 50f);
			CAM::ATTACH_CAM_TO_ENTITY(iLocal_558[7], Local_39.f_0, Local_573, true);
			CAM::POINT_CAM_AT_ENTITY(iLocal_558[7], Local_39.f_0, Local_574, true);
		}
		else
		{
			iLocal_558[6] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_571, Local_572, 50f, false, 2);
			iLocal_558[7] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_573, Local_574, 50f, false, 2);
		}
		iLocal_794 = -1;
	}
}

void func_506()//Position - 0x36C5F
{
	if (__LIB_1__.func_183(Local_974.f_35[0]) && __LIB_1__.func_197(Local_974.f_28[0]))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_974.f_28[0]);
		VEHICLE::BRING_VEHICLE_TO_HALT(Local_974.f_35[0], 0.1f, 1, false);
		if (!PED::IS_PED_IN_VEHICLE(Local_974.f_28[0], Local_974.f_35[0], false) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_974.f_35[0], -1, false))
		{
			PED::SET_PED_INTO_VEHICLE(Local_974.f_28[0], Local_974.f_35[0], -1);
		}
		ENTITY::SET_ENTITY_COORDS(Local_974.f_35[0], Local_538.f_181[(Local_538.f_249 - 1) /*3*/], true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_974.f_35[0], Local_538.f_230[(Local_538.f_249 - 1)]);
	}
}

void func_507()//Position - 0x36D21
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_39.f_0, false))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_39.f_0, -1, false))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, -1);
				}
				iVar0 = PLAYER::GET_PLAYER_INDEX();
				MISC::CLEAR_AREA(__LIB_0__.func_85(iVar0), 50f, true, false, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(__LIB_0__.func_85(iVar0), 500f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PEDS(__LIB_0__.func_85(iVar0), 500f, 0);
				Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_538.f_181[Local_538.f_249 /*3*/], Local_538.f_230[Local_538.f_249], 0f, -15f, 1f) };
				__LIB_29__.func_681(&Var1, 0);
				fVar2 = Local_538.f_230[Local_538.f_249];
				if (Local_536.f_0 == 2)
				{
					Var1 = { -825.03f, -2575.13f, 13.25f };
					fVar2 = 334.98f;
				}
				else if (Local_536.f_0 == 4)
				{
					Var1 = { -1093.4932f, -1173.1614f, 2.4978f };
				}
				else if (Local_536.f_1 == 3)
				{
					Var1 = { Local_538.f_181[Local_538.f_249 /*3*/] };
				}
				if (Local_536.f_1 == 1)
				{
					Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_538.f_181[Local_538.f_249 /*3*/], Local_538.f_230[Local_538.f_249], 0f, -1f, 0f) };
					fVar4 = 7f;
				}
				else
				{
					Var3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_538.f_181[Local_538.f_249 /*3*/], Local_538.f_230[Local_538.f_249], 0f, 2.3f, 0f) };
					fVar4 = 3f;
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_39.f_0, true, true, false);
				ENTITY::SET_ENTITY_HEADING(Local_39.f_0, fVar2);
				__LIB_10__.func_698(Local_39.f_0, Var1);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_39.f_0, true);
				VEHICLE::SET_VEHICLE_IS_RACING(Local_39.f_0, true);
				if (Local_536.f_1 == 3)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_39.f_0, 5f);
					VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Local_39.f_0, 0f);
					VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Local_39.f_0, true);
					VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(Local_39.f_0, true);
					if (VEHICLE::CAN_ANCHOR_BOAT_HERE(Local_39.f_0))
					{
						VEHICLE::SET_BOAT_ANCHOR(Local_39.f_0, true);
					}
				}
				else
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_39.f_0, Var3, fVar4, 0, ENTITY::GET_ENTITY_MODEL(Local_39.f_0), 17039360, 0.5f, 15f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_39.f_0, fVar4);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_39.f_0);
				}
				ENTITY::SET_ENTITY_VISIBLE(Local_39.f_0, true, false);
				VEHICLE::SET_VEHICLE_STRONG(Local_39.f_0, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_39.f_0, true);
				if ((Local_536.f_1 == 3 && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
				}
			}
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	}
}

void func_512()//Position - 0x3710F
{
	if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_980, 350f, 1))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	switch (iLocal_976)
	{
		case 0:
			__LIB_0__.func_523(&iLocal_979);
			HUD::CLEAR_PRINTS();
			__LIB_0__.func_210("HAO1_6", 7500, 1);
			iLocal_976 = 1;
			break;
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				iLocal_976 = 3;
			}
			break;
		case 3:
			if (bLocal_1012)
			{
				if (func_513())
				{
					iLocal_975 = 4;
					iLocal_976 = 0;
				}
				else
				{
					iLocal_975 = 3;
					iLocal_976 = 0;
				}
			}
			else
			{
				iLocal_975 = 4;
				iLocal_976 = 0;
			}
			break;
	}
}

int func_513()//Position - 0x371B0
{
	int iVar0;
	int iVar1;
	int iVar2[89];
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_557 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (__LIB_1__.func_183(iLocal_557))
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_557);
			if (__LIB_9__.func_238(iVar0))
			{
				return 0;
			}
			if (((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2"))
			{
				return 0;
			}
			if (((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0) || VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0)) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 0;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("pranger");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = joaat("police");
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = joaat("boxville3");
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = joaat("blimp");
			iVar2[81] = joaat("blimp2");
			iVar2[82] = joaat("submersible");
			iVar2[83] = joaat("submersible2");
			iVar2[84] = joaat("blazer3");
			iVar2[85] = joaat("pony2");
			iVar2[86] = joaat("rumpo2");
			iVar2[87] = joaat("taxi");
			iVar2[88] = 0;
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 0;
				}
				iVar1++;
			}
			return 1;
		}
	}
	return 0;
}

void func_515()//Position - 0x376D9
{
	if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_980, 350f, 1))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	if (iLocal_1016 && __LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_980, 300f, 1))
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Local_980, 150f, false, false, false, false, false, false, 0);
		iLocal_1016 = 0;
	}
	func_537();
	switch (iLocal_976)
	{
		case 0:
			__LIB_0__.func_523(&iLocal_979);
			iLocal_979 = __LIB_10__.func_658(Local_980, 5, 1);
			iLocal_1013 = 1;
			iLocal_1016 = 1;
			iLocal_1020 = 1;
			iLocal_1022 = 0;
			HUD::CLEAR_PRINTS();
			if (bLocal_1012)
			{
				__LIB_0__.func_210("HAO1_2", 7500, 1);
				bLocal_1012 = false;
			}
			iLocal_976 = 1;
			break;
		case 1:
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_980, 1f, 1f, 2f, true, true, 0) || __LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_980, 4f, 1)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1004, Local_1005, fLocal_1006, false, true, 0))
			{
				if (func_513())
				{
					iLocal_976 = 3;
				}
				else
				{
					if (iLocal_1013)
					{
						__LIB_0__.func_210("HAO1_3", 7500, 1);
						iLocal_1013 = 0;
					}
					func_535();
				}
			}
			else
			{
				func_535();
			}
			func_534();
			if (iLocal_1020 && __LIB_1__.func_183(Local_974.f_35[0]))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_974.f_35[0]))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(Local_974.f_35[0]))
					{
						ENTITY::SET_ENTITY_COORDS(Local_974.f_35[0], Local_538.f_181[(Local_538.f_249 - 1) /*3*/], true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_974.f_35[0], Local_538.f_230[(Local_538.f_249 - 1)]);
						iLocal_1020 = 0;
					}
				}
			}
			break;
		case 3:
			if (__LIB_1__.func_183(iLocal_557))
			{
				if (__LIB_6__.func_762(iLocal_557, 3.5f, 1, 1056964608, 0, 1, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 4);
					Local_536.f_0 = 0;
					Local_536.f_1 = 2;
					func_522(1, 0);
					iLocal_976 = 0;
					__LIB_6__.func_771();
					if (func_519())
					{
						bLocal_1014 = true;
						if (__LIB_4__.func_739())
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						}
						else
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						}
						VEHICLE::SET_VEHICLE_IS_RACING(iLocal_557, true);
						iLocal_975 = 7;
					}
					else
					{
						bLocal_1014 = false;
						iLocal_975 = 6;
					}
				}
			}
			break;
	}
	func_517();
	func_516();
}

void func_516()//Position - 0x3791E
{
	int iVar0;
	if (__LIB_1__.func_197(Local_974.f_28[0]))
	{
		if (__LIB_1__.func_183(Local_974.f_35[0]))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_974.f_35[0]) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_978))
			{
				if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_978, ENTITY::GET_ENTITY_COORDS(Local_974.f_28[0], true), &iVar0))
				{
					if (iVar0 >= 54)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_974.f_35[0]);
						TASK::TASK_VEHICLE_TEMP_ACTION(Local_974.f_28[0], Local_974.f_35[0], 24, 500);
					}
				}
			}
		}
	}
}

void func_517()//Position - 0x379A4
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_975 = 5;
		iLocal_976 = 0;
	}
}

int func_519()//Position - 0x379D9
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-168.42691f, -1582.631f, 33.966496f, 20f))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1004, Local_1005, fLocal_1006, false, true, 0))
	{
		return 0;
	}
	fVar0 = Local_538.f_230[Local_538.f_249];
	fVar1 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	while (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	while (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar2 = (fVar0 - fVar1);
	if (fVar2 < 20f && fVar2 > -20f)
	{
		return 1;
	}
	return 0;
}

void func_522(bool bParam0, int iParam1)//Position - 0x37AB4
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_0))
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		__LIB_0__.func_203(&uLocal_803, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			Local_39.f_0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		}
		else
		{
			Local_39.f_0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (__LIB_1__.func_183(Local_39.f_0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_39.f_0, -1);
			}
		}
	}
	iLocal_530 = 0;
	iLocal_531 = 0;
	iLocal_529 = 0;
	__LIB_30__.func_245(Local_536, &Local_538);
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	func_529();
	if (bParam0)
	{
		func_528();
	}
	else
	{
		func_526();
	}
	func_525();
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
	PED::SET_CREATE_RANDOM_COPS(false);
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(true);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f, 0);
	if ((iParam1 && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (Local_536.f_1 == 1 || Local_536.f_1 == 2)
		{
			iLocal_800 = __LIB_11__.func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 60f);
			__LIB_29__.func_811(Local_536.f_0, &Local_797, &Local_798, &fLocal_799);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_797, Local_798, fLocal_799, false, false, true);
		}
		MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	Local_39.f_2 = 0;
}

void func_525()//Position - 0x37DD3
{
	switch (Local_536.f_0)
	{
		case 0:
			Local_789 = { -168.6f, -1575.16f, 34.7f };
			fLocal_790 = 141.57f;
			Local_791 = { -170.0685f, -1573.8658f, 34.307f };
			fLocal_792 = 191.3066f;
			break;
		case 1:
			Local_789 = { 353.12f, 321.39f, 103.65f };
			fLocal_790 = 77.4f;
			Local_791 = { 353.4853f, 323.3662f, 103.0862f };
			fLocal_792 = 127.4f;
			break;
		case 2:
			Local_789 = { -794.5402f, -2527.393f, 12.7891f };
			fLocal_790 = 332.72f;
			Local_791 = { -792.37f, -2527.87f, 13.83f };
			fLocal_792 = 22.72f;
			break;
		case 3:
			Local_789 = { 818.13f, -1161.54f, 28f };
			fLocal_790 = 76.46f;
			Local_791 = { 818.5804f, -1159.6426f, 27.2778f };
			fLocal_792 = 126.46f;
			break;
		case 4:
			Local_789 = { -1025.28f, -1130.25f, 1.7f };
			fLocal_790 = 305.27f;
			Local_791 = { -1024.5483f, -1131.2539f, 1.1861f };
			fLocal_792 = 355.27f;
			break;
	}
}

void func_526()//Position - 0x37F28
{
	switch (Local_536.f_0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_542[0 /*18*/].f_5 = joaat("banshee");
			Local_542[1 /*18*/].f_5 = joaat("feltzer2");
			Local_542[2 /*18*/].f_5 = joaat("sentinel");
			Local_542[3 /*18*/].f_5 = joaat("banshee");
			Local_542[4 /*18*/].f_5 = joaat("feltzer2");
			Local_542[5 /*18*/].f_5 = joaat("sentinel");
			Local_542[6 /*18*/].f_5 = joaat("banshee");
			break;
		case 4:
			Local_542[0 /*18*/].f_5 = joaat("bati");
			Local_542[1 /*18*/].f_5 = joaat("bati");
			Local_542[2 /*18*/].f_5 = joaat("ruffian");
			Local_542[3 /*18*/].f_5 = joaat("ruffian");
			Local_542[4 /*18*/].f_5 = joaat("bati");
			Local_542[5 /*18*/].f_5 = joaat("ruffian");
			Local_542[6 /*18*/].f_5 = joaat("bati");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			Local_542[0 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[1 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[2 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[3 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[4 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[5 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[6 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[7 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[8 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[9 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[10 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[11 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[12 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[13 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			Local_542[14 /*18*/].f_5 = __LIB_29__.func_810(Local_536.f_1);
			break;
	}
	switch (Local_536.f_0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			Local_542[0 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
			Local_542[1 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
			Local_542[2 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
			Local_542[3 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
			Local_542[4 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
			Local_542[5 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
			Local_542[6 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
			Local_542[7 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
			Local_542[8 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
			Local_542[9 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
			Local_542[10 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
			Local_542[11 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
			Local_542[12 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
			Local_542[13 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
			Local_542[14 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
			break;
		case 4:
			Local_542[0 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			Local_542[1 /*18*/].f_4 = joaat("A_M_Y_MotoX_01");
			Local_542[2 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			Local_542[3 /*18*/].f_4 = joaat("A_M_Y_MotoX_01");
			Local_542[4 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			Local_542[5 /*18*/].f_4 = joaat("A_M_Y_MotoX_01");
			Local_542[6 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			Local_542[7 /*18*/].f_4 = joaat("A_M_Y_MotoX_01");
			Local_542[8 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			Local_542[9 /*18*/].f_4 = joaat("A_M_Y_MotoX_01");
			Local_542[10 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			Local_542[11 /*18*/].f_4 = joaat("A_M_Y_MotoX_01");
			Local_542[12 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			Local_542[13 /*18*/].f_4 = joaat("A_M_Y_MotoX_01");
			Local_542[14 /*18*/].f_4 = joaat("A_M_Y_MotoX_02");
			break;
		case 5:
		case 6:
		case 7:
		case 8:
			Local_542[0 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[1 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[2 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[3 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[4 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[5 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[6 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[7 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[8 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[9 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[10 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[11 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[12 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[13 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			Local_542[14 /*18*/].f_4 = joaat("A_M_Y_Jetski_01");
			break;
	}
}

void func_528()//Position - 0x3841C
{
	Local_542[0 /*18*/].f_5 = joaat("prairie");
	Local_542[1 /*18*/].f_5 = joaat("dominator");
	Local_542[2 /*18*/].f_5 = joaat("sentinel");
	Local_542[3 /*18*/].f_5 = joaat("prairie");
	Local_542[4 /*18*/].f_5 = joaat("dominator");
	Local_542[5 /*18*/].f_5 = joaat("sentinel");
	Local_542[6 /*18*/].f_5 = joaat("prairie");
	Local_542[0 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
	Local_542[1 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
	Local_542[2 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
	Local_542[3 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
	Local_542[4 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
	Local_542[5 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
	Local_542[6 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
	Local_542[7 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
	Local_542[8 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
	Local_542[9 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
	Local_542[10 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
	Local_542[11 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
	Local_542[12 /*18*/].f_4 = joaat("A_M_M_SoCenLat_01");
	Local_542[13 /*18*/].f_4 = joaat("A_M_Y_Hipster_02");
	Local_542[14 /*18*/].f_4 = joaat("A_M_Y_EastSA_01");
}

void func_529()//Position - 0x38549
{
	if (Local_536.f_1 == 2)
	{
		if (func_530())
		{
			Local_559 = { -0.7054f, 6.3148f, 2.0821f };
			Local_560 = { 0.9495f, 3.9011f, 2.7419f };
			Local_561 = { -0.567f, 2.6724f, 1.0077f };
			Local_562 = { 0.094f, -0.2423f, 0.7483f };
		}
		else if (func_490())
		{
			Local_559 = { -1.6831f, 6.0271f, 4.2228f };
			Local_560 = { -0.0245f, 3.5705f, 4.6855f };
			Local_561 = { -1.0281f, 4.6872f, 0.9868f };
			Local_562 = { -0.185f, 1.8112f, 1.1221f };
		}
		else
		{
			Local_559 = { -1.5802f, 5.8398f, 2.2274f };
			Local_560 = { 0.197f, 3.5006f, 2.8356f };
			Local_561 = { -0.6678f, 1.974f, 0.6876f };
			Local_562 = { 0.144f, -0.9013f, 0.417f };
		}
	}
	switch (Local_536.f_0)
	{
		case 0:
			Local_563 = { -159.2159f, -1564.1248f, 34.6164f };
			Local_564 = { -0.073293f, 0.055f, -119.27354f };
			Local_565 = { -158.81148f, -1563.3685f, 34.617287f };
			Local_566 = { -0.073293f, 0.055f, -123.73054f };
			Local_567 = { -156.86082f, -1565.3424f, 35.709652f };
			Local_568 = { -8.040299f, -0.0005f, -49.006474f };
			Local_569 = { -155.17683f, -1567.1415f, 35.709652f };
			Local_570 = { -8.040299f, -0.0005f, -41.346287f };
			Local_571 = { -142.31241f, -1550.5736f, 34.58047f };
			Local_572 = { -2.928405f, -0.000499f, 142.62029f };
			Local_573 = { -141.3225f, -1546.8904f, 34.7891f };
			Local_574 = { -2.8368f, 0f, 139.8128f };
			break;
		case 1:
			Local_563 = { 368.3612f, 317.4821f, 102.8912f };
			Local_564 = { 4.9194f, 0.0225f, -176.9747f };
			Local_565 = { 369.0639f, 317.4726f, 102.8941f };
			Local_566 = { 5.042f, 0.0225f, 178.1396f };
			Local_567 = { 367.0291f, 314.8014f, 104.37f };
			Local_568 = { -7.4995f, 0.0233f, -111.5294f };
			Local_569 = { 366.4452f, 312.9081f, 104.3692f };
			Local_570 = { -7.4995f, 0.0233f, -100.7122f };
			Local_571 = { 386.8919f, 308.6107f, 103.2039f };
			Local_572 = { 0.3447f, 0.0472f, 82.1591f };
			Local_573 = { 390.2213f, 309.4721f, 103.7617f };
			Local_574 = { -4.3057f, 0.0299f, 76.2809f };
			break;
		case 2:
			Local_563 = { -809.5582f, -2548.8481f, 13.2619f };
			Local_564 = { 6.3036f, 0.0031f, 78.738f };
			Local_565 = { -809.6061f, -2549.2407f, 13.2619f };
			Local_566 = { 3.5967f, 0.0031f, 75.5951f };
			Local_567 = { -811.1327f, -2544.3936f, 14.5064f };
			Local_568 = { -5.1571f, 0.0031f, 151.0646f };
			Local_569 = { -812.3164f, -2543.757f, 14.5063f };
			Local_570 = { -5.1571f, 0.0031f, 154.2332f };
			Local_571 = { -819.8916f, -2564.1191f, 13.8366f };
			Local_572 = { -3.7349f, 0.0039f, -21.4233f };
			Local_573 = { -819.4815f, -2566.3877f, 14.1387f };
			Local_574 = { -5.6248f, 0.0039f, -24.2558f };
			break;
		case 3:
			Local_563 = { 776.7724f, -1143.7301f, 28.3016f };
			Local_564 = { 11.6472f, -0.0085f, -162.2849f };
			Local_565 = { 778.136f, -1143.352f, 28.3014f };
			Local_566 = { 10.4548f, -0.0085f, -170.727f };
			Local_567 = { 775.2812f, -1146.7396f, 29.6806f };
			Local_568 = { -6.3919f, -0.0085f, -92.6672f };
			Local_569 = { 775.3398f, -1148.5911f, 29.6808f };
			Local_570 = { -6.3919f, -0.0085f, -84.5603f };
			Local_571 = { 795.929f, -1146.4519f, 29.5086f };
			Local_572 = { -2.946f, -0.0103f, 96.9974f };
			Local_573 = { 799.178f, -1144.6638f, 29.6776f };
			Local_574 = { -3.7454f, -0.0103f, 96.6498f };
			break;
		case 4:
			Local_559 = { -1081.7926f, -1162.1034f, 6.1895f };
			Local_560 = { 9.5571f, 0.0247f, 143.3313f };
			Local_561 = { -0.2995f, 1.6679f, 0.9952f };
			Local_562 = { 0.7073f, -1.1228f, 0.5493f };
			Local_563 = { -1059.4303f, -1154.9667f, 1.585626f };
			Local_564 = { 5.101318f, 0.220638f, 46.046375f };
			Local_565 = { -1060.0989f, -1155.6536f, 1.589301f };
			Local_566 = { 5.101318f, 0.220639f, 55.210567f };
			Local_567 = { -1057.8326f, -1153.6396f, 2.157057f };
			Local_568 = { -1.541381f, 0.155416f, 92.089836f };
			Local_569 = { -1058.7991f, -1151.6946f, 3.019048f };
			Local_570 = { -8.483372f, 0.155417f, 120.07286f };
			Local_571 = { -1073.3243f, -1160.2255f, 2.467393f };
			Local_572 = { -9.078616f, 0.014872f, -56.525623f };
			Local_573 = { -1074.4067f, -1161.5408f, 2.727543f };
			Local_574 = { -9.078616f, 0.014872f, -56.525623f };
			break;
		case 5:
			Local_559 = { 3071.7053f, 680.42865f, -0.578093f };
			Local_560 = { -14.997413f, 0f, 169.47026f };
			Local_575 = { 3071.258f, 678.94855f, 3.839843f };
			Local_576 = { -0.639399f, 0f, 168.92458f };
			Local_561 = { 3070.7612f, 677.42487f, 3.822088f };
			Local_562 = { -0.639399f, 0f, 169.17427f };
			Local_563 = { 3074.7922f, 632.81665f, 2.242464f };
			Local_564 = { 0.235991f, 0f, 58.909027f };
			Local_565 = { 3072.6787f, 629.8298f, 2.241469f };
			Local_566 = { 0.235991f, 0f, 32.61848f };
			break;
		case 6:
			Local_559 = { 3482.4507f, 5171.1196f, -2.622287f };
			Local_560 = { -12.389264f, 0f, 26.136166f };
			Local_575 = { 3481.7466f, 5172.5537f, 6.65429f };
			Local_576 = { -9.870142f, 0f, 26.136162f };
			Local_561 = { 3479.1267f, 5173.103f, 6.487341f };
			Local_562 = { -9.603036f, 0f, 21.927107f };
			Local_563 = { 3457.3281f, 5187.8604f, 4.6358f };
			Local_564 = { -24.8126f, 0.0397f, -41.5662f };
			Local_565 = { 3456.5105f, 5197.8965f, 3.9627f };
			Local_566 = { -23.4737f, 0.0397f, -128.4928f };
			break;
		case 7:
			Local_559 = { 190.5428f, 3596.8794f, 28.210274f };
			Local_560 = { -16.612904f, -1E-06f, -17.123419f };
			Local_575 = { 190.92812f, 3598.4456f, 33.46021f };
			Local_576 = { -6.51379f, 0f, -20.806368f };
			Local_561 = { 189.05548f, 3599.1936f, 33.459087f };
			Local_562 = { -6.431107f, 0f, -24.99328f };
			Local_563 = { 187.35356f, 3623.2532f, 31.377996f };
			Local_564 = { 0.968793f, 0f, -171.13333f };
			Local_565 = { 189.63628f, 3623.8484f, 31.370586f };
			Local_566 = { 0.968793f, 0f, 175.61841f };
			break;
		case 8:
			Local_559 = { 617.70526f, -2150.8865f, -6.053663f };
			Local_560 = { -12.894878f, -2E-06f, -21.27229f };
			Local_575 = { 616.81384f, -2149.2224f, 1.441951f };
			Local_576 = { 5.644659f, -2E-06f, -24.942902f };
			Local_561 = { 615.142f, -2147.5957f, 1.518046f };
			Local_562 = { 3.451776f, -2E-06f, -29.075584f };
			Local_563 = { 615.47614f, -2124.192f, 1.467611f };
			Local_564 = { 0.143961f, 0f, -156.62263f };
			Local_565 = { 617.97076f, -2122.319f, 1.464393f };
			Local_566 = { 0.143961f, 0f, 179.06412f };
			break;
	}
	if (func_490())
	{
		Local_571 = { -2.0797f, -1.409f, 1.3288f };
		Local_572 = { -2.1875f, 1.5807f, 1.1049f };
		Local_573 = { -0.6528f, -5.8087f, 2.317f };
		Local_574 = { -0.7557f, -2.8423f, 1.8806f };
	}
}

int func_530()//Position - 0x38EF2
{
	int iVar0;
	if (__LIB_1__.func_183(Local_39.f_0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(Local_39.f_0);
		if (((((((((((((((((((((((((((((((iVar0 == joaat("baller") || iVar0 == joaat("baller2")) || iVar0 == joaat("bison")) || iVar0 == joaat("bison2")) || iVar0 == joaat("bison3")) || iVar0 == joaat("bobcatxl")) || iVar0 == joaat("cavalcade")) || iVar0 == joaat("cavalcade2")) || iVar0 == joaat("crusader")) || iVar0 == joaat("dubsta")) || iVar0 == joaat("dubsta2")) || iVar0 == joaat("fq2")) || iVar0 == joaat("granger")) || iVar0 == joaat("gresley")) || iVar0 == joaat("landstalker")) || iVar0 == joaat("mesa")) || iVar0 == joaat("mesa2")) || iVar0 == joaat("mesa3")) || iVar0 == joaat("patriot")) || iVar0 == joaat("radi")) || iVar0 == joaat("rancherxl")) || iVar0 == joaat("rancherxl2")) || iVar0 == joaat("rebel")) || iVar0 == joaat("rocoto")) || iVar0 == joaat("sadler")) || iVar0 == joaat("sadler2")) || iVar0 == joaat("sandking")) || iVar0 == joaat("sandking2")) || iVar0 == joaat("seminole")) || iVar0 == joaat("superd")) || iVar0 == MISC::GET_HASH_KEY("huntley" /* GXT: Huntley S */)) || iVar0 == MISC::GET_HASH_KEY("DUBSTA3" /* GXT: Dubsta 6x6 */))
		{
			return 1;
		}
	}
	return 0;
}

void func_534()//Position - 0x3B0B4
{
	if (!func_513())
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_1009)
			{
				__LIB_0__.func_151("HAO1_4", -1);
				iLocal_1009 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (__LIB_0__.func_1("HAO1_4"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_535()//Position - 0x3B108
{
	if (MISC::GET_GAME_TIMER() > iLocal_1022)
	{
		if (((__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()) && __LIB_1__.func_197(Local_974.f_28[0])) && __LIB_0__.func_530(Local_974.f_28[0], Local_538.f_181[(Local_538.f_249 - 1) /*3*/], 10f, 1)) && __LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_980, 25f, 1))
		{
			if (__LIB_37__.func_799(&uLocal_1035, "HAO1AU", "HAO1_HWAR", 8, 0, 0, 0))
			{
				iLocal_1022 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_537()//Position - 0x3B1C5
{
	if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_980, 200f, 1))
	{
		func_528();
		func_538(Local_974.f_28[0], Local_974.f_35[0]);
	}
}

void func_538(int iParam0, int iParam1)//Position - 0x3B1FB
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	int iVar3;
	iVar0 = (Local_538.f_249 - 1);
	if ((__LIB_1__.func_197(iParam0) && __LIB_1__.func_183(iParam1)) && !ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_6))
	{
		Local_542[iVar0 /*18*/].f_6 = iParam1;
		Local_542[iVar0 /*18*/].f_5 = ENTITY::GET_ENTITY_MODEL(iParam1);
		Local_542[iVar0 /*18*/].f_3 = iParam0;
		Local_542[iVar0 /*18*/].f_4 = ENTITY::GET_ENTITY_MODEL(iParam0);
		func_545(iVar0);
	}
	func_544(1);
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		while (!ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_6))
		{
			if (STREAMING::HAS_MODEL_LOADED(Local_542[iVar0 /*18*/].f_5))
			{
				Var1 = { Local_538.f_181[iVar0 /*3*/] };
				if (Local_536.f_1 == 3)
				{
					Var1.f_0 = (Var1.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
					Var1.f_1 = (Var1.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f));
				}
				else
				{
					Var1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_538.f_181[iVar0 /*3*/], Local_538.f_230[iVar0], 0f, -3f, 0f) };
				}
				Local_542[iVar0 /*18*/].f_6 = VEHICLE::CREATE_VEHICLE(Local_542[iVar0 /*18*/].f_5, Var1, Local_538.f_230[iVar0], true, true, false);
				if (Local_536.f_1 == 3)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_542[iVar0 /*18*/].f_6, 5f);
					VEHICLE::SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Local_542[iVar0 /*18*/].f_6, 0f);
					VEHICLE::SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Local_542[iVar0 /*18*/].f_6, true);
					VEHICLE::SET_FORCE_LOW_LOD_ANCHOR_MODE(Local_542[iVar0 /*18*/].f_6, true);
					if (VEHICLE::CAN_ANCHOR_BOAT_HERE(Local_542[iVar0 /*18*/].f_6))
					{
						VEHICLE::SET_BOAT_ANCHOR(Local_542[iVar0 /*18*/].f_6, true);
					}
					ENTITY::SET_ENTITY_DYNAMIC(Local_542[iVar0 /*18*/].f_6, false);
				}
				else
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_542[iVar0 /*18*/].f_6, 5f);
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_542[iVar0 /*18*/].f_5, true);
			}
			SYSTEM::WAIT(0);
		}
		func_543();
		if (__LIB_1__.func_197(iParam0))
		{
			Local_542[(Local_538.f_249 - 1) /*18*/].f_1 = 2;
		}
		while (!ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_3))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(Local_542[iVar0 /*18*/].f_6) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_542[iVar0 /*18*/].f_6, false)) && STREAMING::HAS_MODEL_LOADED(Local_542[iVar0 /*18*/].f_4))
			{
				Local_542[iVar0 /*18*/].f_3 = PED::CREATE_PED_INSIDE_VEHICLE(Local_542[iVar0 /*18*/].f_6, 26, Local_542[iVar0 /*18*/].f_4, -1, true, true);
				if (Local_536.f_1 != 3)
				{
					VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(Local_542[iVar0 /*18*/].f_6, true);
					Var2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Local_538.f_181[iVar0 /*3*/], Local_538.f_230[iVar0], 0f, 2.3f, 0f) };
					if (iVar0 == 0)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_PAUSE(0, 2800);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_542[iVar0 /*18*/].f_6, Var2, 1.5f, 0, Local_542[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_PERFORM_SEQUENCE(Local_542[iVar0 /*18*/].f_3, iVar3);
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					}
					else if (iVar0 == 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_PAUSE(0, 3300);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_542[iVar0 /*18*/].f_6, Var2, 1.2f, 0, Local_542[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_PERFORM_SEQUENCE(Local_542[iVar0 /*18*/].f_3, iVar3);
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar3);
						TASK::TASK_PAUSE(0, (5500 + iVar0 * 100));
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_542[iVar0 /*18*/].f_6, Var2, 0.8f, 0, Local_542[iVar0 /*18*/].f_5, 17039360, 0.5f, 15f);
						TASK::CLOSE_SEQUENCE_TASK(iVar3);
						TASK::TASK_PERFORM_SEQUENCE(Local_542[iVar0 /*18*/].f_3, iVar3);
						TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					}
				}
				if (Local_536.f_1 == 1)
				{
					PED::GIVE_PED_HELMET(Local_542[iVar0 /*18*/].f_3, true, 4096, -1);
				}
				func_539(iVar0);
				if (__LIB_1__.func_197(Local_542[iVar0 /*18*/].f_3))
				{
					func_545(iVar0);
				}
			}
			SYSTEM::WAIT(0);
		}
		iVar0++;
	}
	if (__LIB_1__.func_197(iParam0))
	{
		Local_542[(Local_538.f_249 - 1) /*18*/].f_1 = 2;
	}
	func_544(0);
	switch (Local_536.f_0)
	{
		case 0:
			sLocal_795 = "CityRace0_route1";
			break;
		case 1:
			sLocal_795 = "CityRace1_route1";
			break;
		case 2:
			sLocal_795 = "CityRace3_route1";
			break;
		case 3:
			sLocal_795 = "CityRace4_route1";
			break;
		case 4:
			sLocal_795 = "CityRace5_route1";
			break;
		case 5:
			sLocal_795 = "SeaRace0_route1";
			break;
		case 6:
			sLocal_795 = "SeaRace1_route1";
			break;
		case 7:
			sLocal_795 = "SeaRace2_route1";
			break;
		case 8:
			sLocal_795 = "SeaRace3_route1";
			break;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_795);
	while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_795))
	{
		SYSTEM::WAIT(0);
	}
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_795, &iLocal_968);
	iLocal_968 = (iLocal_968 - 1);
	if (Local_538.f_247 == 0)
	{
		bLocal_544 = false;
	}
	else
	{
		bLocal_544 = true;
	}
}

void func_539(int iParam0)//Position - 0x3B6E7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_542[iParam0 /*18*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_542[iParam0 /*18*/].f_6, false))
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_542[iParam0 /*18*/].f_6, MISC::GET_RANDOM_INT_IN_RANGE(0, VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(Local_542[iParam0 /*18*/].f_6)));
		if (VEHICLE::GET_NUM_MOD_KITS(Local_542[iParam0 /*18*/].f_6) > 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(Local_542[iParam0 /*18*/].f_6, 0);
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 0) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 0, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 0), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 1) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 1, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 1), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 2) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 2, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 2), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 3) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 3, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 3), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 4) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 4, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 4), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 5) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 5, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 5), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 6) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 6, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 6), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 8) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 8, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 8), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 9) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 9, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 9), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 11) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 11, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 11), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 12) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 12, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 12), false);
			}
			if (VEHICLE::GET_NUM_VEHICLE_MODS(Local_542[iParam0 /*18*/].f_6, 13) > 0)
			{
				VEHICLE::SET_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 13, __LIB_37__.func_417(Local_542[iParam0 /*18*/].f_6, 13), false);
			}
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 18, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 17, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(Local_542[iParam0 /*18*/].f_6, 22, true);
		}
	}
}

void func_543()//Position - 0x3BA62
{
	if (Local_536.f_0 == 3)
	{
		Local_542[0 /*18*/].f_1 = 2;
		Local_542[1 /*18*/].f_1 = 2;
		Local_542[2 /*18*/].f_1 = 2;
		Local_542[3 /*18*/].f_1 = 1;
		Local_542[4 /*18*/].f_1 = 1;
		Local_542[5 /*18*/].f_1 = 0;
		Local_542[6 /*18*/].f_1 = 0;
	}
	else if (Local_536.f_0 == 7)
	{
		Local_542[0 /*18*/].f_1 = 2;
		Local_542[1 /*18*/].f_1 = 1;
		Local_542[2 /*18*/].f_1 = 0;
	}
	else
	{
		Local_542[0 /*18*/].f_1 = 2;
		Local_542[1 /*18*/].f_1 = 2;
		Local_542[2 /*18*/].f_1 = 1;
		Local_542[3 /*18*/].f_1 = 1;
		Local_542[4 /*18*/].f_1 = 0;
		Local_542[5 /*18*/].f_1 = 0;
		Local_542[6 /*18*/].f_1 = 0;
	}
}

void func_544(int iParam0)//Position - 0x3BB17
{
	int iVar0;
	if (iParam0 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_538.f_249 - 1))
		{
			if (Local_542[iVar0 /*18*/].f_4 == 0 || Local_542[iVar0 /*18*/].f_4 == 0)
			{
			}
			STREAMING::REQUEST_MODEL(Local_542[iVar0 /*18*/].f_4);
			STREAMING::REQUEST_MODEL(Local_542[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Local_538.f_249 - 1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_542[iVar0 /*18*/].f_4);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_542[iVar0 /*18*/].f_5);
			iVar0++;
		}
	}
}

void func_545(int iParam0)//Position - 0x3BBAB
{
	if (__LIB_1__.func_197(Local_542[iParam0 /*18*/].f_3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_542[iParam0 /*18*/].f_3, true);
		VEHICLE::SET_VEHICLE_IS_RACING(Local_542[iParam0 /*18*/].f_6, true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_542[iParam0 /*18*/].f_6, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_542[iParam0 /*18*/].f_6, true, true, false);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_542[iParam0 /*18*/].f_3, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_542[iParam0 /*18*/].f_6, true);
		VEHICLE::SET_VEHICLE_STRONG(Local_542[iParam0 /*18*/].f_6, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_542[iParam0 /*18*/].f_6, true);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_542[iParam0 /*18*/].f_6, false);
		PED::SET_PED_CONFIG_FLAG(Local_542[iParam0 /*18*/].f_3, 32, false);
		PED::SET_PED_CONFIG_FLAG(Local_542[iParam0 /*18*/].f_3, 29, false);
		PED::SET_PED_CONFIG_FLAG(Local_542[iParam0 /*18*/].f_3, 116, false);
		PED::SET_PED_CONFIG_FLAG(Local_542[iParam0 /*18*/].f_3, 118, false);
		PED::SET_PED_CONFIG_FLAG(Local_542[iParam0 /*18*/].f_3, 26, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_542[iParam0 /*18*/].f_6, true, 1);
		PED::SET_PED_DIES_IN_WATER(Local_542[iParam0 /*18*/].f_3, false);
		if (Local_536.f_1 == 3)
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_542[iParam0 /*18*/].f_6, false);
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_542[iParam0 /*18*/].f_3, 3);
		}
		Local_542[iParam0 /*18*/] = 0;
	}
}

void func_546()//Position - 0x3BCDD
{
	if (__LIB_0__.func_530(PLAYER::PLAYER_PED_ID(), Local_980, 350f, 1))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
	}
	func_537();
	switch (iLocal_976)
	{
		case 0:
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_978);
			if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_978))
			{
				if (iLocal_1011)
				{
					__LIB_24__.func_930();
					if ((__LIB_1__.func_197(Local_974.f_28[0]) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && __LIB_37__.func_799(&uLocal_1035, "HAO1AU", "HAO1_MCS1LO", 8, 0, 0, 0))
					{
						if (__LIB_1__.func_183(Local_974.f_35[0]))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_974.f_28[0], Local_974.f_35[0], sLocal_978, 786469, 0, 8, -1, -1f, false, 2f);
						}
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_982, Local_983, 0);
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_980 - Vector(300f, 300f, 300f), Local_980 + Vector(300f, 300f, 300f), 0);
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_982, Local_983, false, true);
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_980 - Vector(300f, 300f, 300f), Local_980 + Vector(300f, 300f, 300f), false, true);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1025, Local_1026, fLocal_1027, false, false, true);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1028, Local_1029, fLocal_1030, false, false, true);
						__LIB_41__.func_636(0f, 0f, 0f, 0f, 1, 1);
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1031, Local_1032, fLocal_1033, false, false, true);
						__LIB_0__.func_523(&iLocal_979);
						HUD::CLEAR_PRINTS();
						iLocal_976 = 1;
					}
				}
				else
				{
					iLocal_976 = 2;
				}
			}
			break;
		case 1:
			__LIB_24__.func_930();
			if (!__LIB_0__.func_75())
			{
				if (iLocal_1011)
				{
					__LIB_0__.func_210("HAO1_1", 7500, 1);
					iLocal_1011 = 0;
				}
				iLocal_976 = 2;
			}
			break;
		case 2:
			if (!(__LIB_1__.func_183(Local_974.f_35[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_974.f_35[0], true)))
			{
				if (func_513())
				{
					HUD::CLEAR_HELP(true);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 3);
					iLocal_976 = 3;
				}
				else
				{
					func_534();
				}
			}
			func_535();
			break;
		case 3:
			iLocal_975 = 4;
			iLocal_976 = 0;
			break;
	}
	func_517();
	func_516();
}

void func_585()//Position - 0x41D38
{
	float fVar0;
	int iVar1;
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	switch (iLocal_976)
	{
		case 0:
			__LIB_26__.func_478("hao_mcs_1", 0);
			if (__LIB_18__.func_170(1, 1093140480, 0))
			{
				if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
				}
				if (__LIB_1__.func_197(Local_974.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_974.f_28[0], "Hao", 0, 0, 0);
				}
				if (__LIB_1__.func_183(Local_974.f_35[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_974.f_35[0], "hao_car", 0, 0, 0);
				}
				__LIB_0__.func_84(500, 0);
				__LIB_26__.func_252();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				SYSTEM::WAIT(0);
				__LIB_0__.func_123(&(Local_974.f_41[0]));
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				fVar0 = 0f;
				if (__LIB_1__.func_183(iVar1))
				{
					fVar0 = ENTITY::GET_ENTITY_HEADING(iVar1);
				}
				if (fVar0 > 0f && fVar0 < 180f)
				{
					fLocal_985 = 90.3906f;
				}
				else
				{
					fLocal_985 = 270.3906f;
				}
				__LIB_32__.func_755(Local_988, Local_989, fLocal_990, Local_984, fLocal_985, __LIB_9__.func_996(), 1, 1, 1, 0, 0);
				__LIB_32__.func_755(Local_991, Local_992, fLocal_993, Local_984, fLocal_985, __LIB_9__.func_996(), 1, 1, 1, 0, 0);
				__LIB_32__.func_755(Local_994, Local_995, fLocal_996, Local_984, fLocal_985, __LIB_9__.func_996(), 1, 1, 1, 0, 0);
				if (iVar1 != Local_974.f_35[1])
				{
					if (__LIB_1__.func_183(Local_974.f_35[1]))
					{
						__LIB_10__.func_698(Local_974.f_35[1], -91.07f, -1273.45f, 28.86f);
						ENTITY::SET_ENTITY_HEADING(Local_974.f_35[1], 0.57f);
					}
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_997, Local_998, fLocal_999, false, false, true);
				func_591(Local_986, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_976 = 1;
			}
			break;
		case 1:
			if (__LIB_1__.func_197(Local_974.f_28[0]) && __LIB_1__.func_183(Local_974.f_35[0]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Hao", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("hao_car", 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_974.f_28[0], Local_974.f_35[0], -1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_974.f_35[0], 0, true);
				}
			}
			if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -72.4639f, -1261.2433f, 28.093f, true, false, false, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				__LIB_32__.func_576(1, 1, 1, 1);
				iLocal_976 = 3;
			}
			break;
		case 3:
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_10__.func_700(&Local_974, 0, 1);
			PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_997, Local_998, fLocal_999, 1);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, false);
			}
			iLocal_1011 = 1;
			bLocal_1012 = true;
			__LIB_0__.func_84(500, 1);
			iLocal_975 = 3;
			iLocal_976 = 0;
			__LIB_26__.func_264(39, 1);
			__LIB_10__.func_604(59, 0, 0);
			break;
	}
}

void func_591(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x4230F
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
					if (func_210(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_100(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_210(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_100(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_210(PLAYER::PLAYER_PED_ID(), 8, 1) || func_210(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_100(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_210(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_100(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			iLocal_34 = 0;
			if (__LIB_0__.func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__.func_84(500, 0);
		}
	}
}

void func_607()//Position - 0x42F17
{
	int iVar0;
	struct<3> Var1;
	__LIB_24__.func_930();
	__LIB_26__.func_478("hao_mcs_1", 0);
	switch (iLocal_976)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT(sLocal_1008);
			if (((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_1008) && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && __LIB_1__.func_197(Local_974.f_28[0])) && __LIB_1__.func_183(Local_974.f_35[0]))
			{
				iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_974.f_35[0], "chassis_dummy");
				Var1 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_974.f_35[0], iVar0) };
				iLocal_1007 = PED::CREATE_SYNCHRONIZED_SCENE(Var1, ENTITY::GET_ENTITY_ROTATION(Local_974.f_35[0], 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_1007, 0f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_1007, false);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_1007, true);
				TASK::TASK_SYNCHRONIZED_SCENE(Local_974.f_28[0], iLocal_1007, sLocal_1008, "hao_leadin", 8f, -8f, 9, 16, 1000f, 0);
				TASK::TASK_LOOK_AT_ENTITY(Local_974.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_974.f_28[0], 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				iLocal_976 = 1;
			}
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_1007))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_1007) >= 0.9f)
				{
					iLocal_976 = 3;
				}
			}
			else
			{
				iLocal_976 = 3;
			}
			break;
		case 3:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(false);
			}
			iLocal_975 = 2;
			iLocal_976 = 0;
			break;
	}
}

void func_608()//Position - 0x4307C
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	switch (iLocal_976)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("HAO1", 0);
			sLocal_795 = "CityRace0_route1";
			__LIB_0__.func_203(&uLocal_1035, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			if (__LIB_1__.func_197(Local_974.f_28[0]))
			{
				__LIB_0__.func_203(&uLocal_1035, 3, Local_974.f_28[0], "HAO", 0, 1);
				TASK::TASK_CLEAR_LOOK_AT(Local_974.f_28[0]);
			}
			if (__LIB_1__.func_183(Local_974.f_35[0]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_974.f_35[0], false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(Local_974.f_35[0], true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_974.f_35[0], 3);
			}
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			STREAMING::SET_REDUCE_PED_MODEL_BUDGET(true);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(true);
			__LIB_30__.func_244(1);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_978);
			Local_536.f_0 = 0;
			Local_536.f_1 = 2;
			__LIB_30__.func_245(Local_536, &Local_538);
			func_528();
			__LIB_0__.func_367(1);
			iLocal_976 = 1;
			break;
		case 1:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				if (__LIB_0__.func_294())
				{
					iVar1 = __LIB_0__.func_315();
					if (Global_94618 == 1)
					{
						iVar1++;
					}
					switch (iVar1)
					{
						case 0:
							__LIB_0__.func_370(-72.4774f, -1262.7596f, 27.9891f, 119.6309f, 1, 0);
							iVar2 = __LIB_0__.func_314(24);
							if (__LIB_1__.func_183(iVar2))
							{
								if (__LIB_19__.func_977(ENTITY::GET_ENTITY_COORDS(iVar2, true), 1, &Var3, &fVar4))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Var3, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iVar2, fVar4);
								}
							}
							__LIB_42__.func_703(&iVar0, Local_984, fLocal_985, 0, 1, 0, 0, 1, joaat("buffalo"), 0, 145, 1);
							if (__LIB_1__.func_197(Local_974.f_28[0]) && __LIB_1__.func_183(Local_974.f_35[0]))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_974.f_35[0], -1000f, true);
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_974.f_28[0], -1000f, true);
								SYSTEM::WAIT(0);
							}
							if ((__LIB_1__.func_197(Local_974.f_28[0]) && __LIB_1__.func_183(Local_974.f_35[0])) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_974.f_35[0], -1, false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_974.f_28[0], Local_974.f_35[0], -1);
								__LIB_10__.func_698(Local_974.f_35[0], -89.0261f, -1260.9956f, 28.2992f);
								ENTITY::SET_ENTITY_HEADING(Local_974.f_35[0], 112.5636f);
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_974.f_35[0], true, true, false);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_974.f_35[0], 5f);
							}
							__LIB_6__.func_775(0, -1, 1);
							__LIB_32__.func_751(1, 1, 1);
							iLocal_976 = 3;
							iLocal_975 = 2;
							break;
						case 1:
							__LIB_0__.func_370(Local_981, 1.31f, 1, 0);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_513())
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								VEHICLE::BRING_VEHICLE_TO_HALT(iVar0, 0.1f, 1, false);
							}
							else
							{
								__LIB_42__.func_703(&iVar0, Local_981, 1.31f, 0, 1, 0, 0, 1, joaat("buffalo"), 0, 145, 1);
								if (__LIB_1__.func_183(iVar0))
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
								}
							}
							__LIB_6__.func_775(iVar0, -1, 1);
							if (__LIB_1__.func_197(Local_974.f_28[0]) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_974.f_28[0], "special_ped@hao@base", "hao_base", 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_974.f_28[0], -1000f, true);
							}
							if (__LIB_1__.func_183(Local_974.f_35[0]) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_974.f_35[0], "special_ped@hao@base", "hao_base_penumbra", 2))
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_974.f_35[0], -1000f, true);
							}
							MISC::CLEAR_AREA_OF_VEHICLES(__LIB_0__.func_85(PLAYER::PLAYER_ID()), 500f, false, false, false, false, false, false, 0);
							Local_536.f_0 = 0;
							Local_536.f_1 = 2;
							func_522(1, 1);
							func_507();
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							__LIB_40__.func_643();
							while (func_610())
							{
								func_537();
							}
							func_506();
							func_609();
							if (!__LIB_1__.func_197(Local_974.f_28[0]))
							{
							}
							if (!__LIB_1__.func_183(Local_974.f_35[0]))
							{
							}
							iLocal_976 = 3;
							iLocal_975 = 6;
							break;
						case 2:
							__LIB_0__.func_370(-29.86f, -1833.06f, 25.37f, 234.16f, 1, 0);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (__LIB_1__.func_183(iVar0))
								{
								}
								else
								{
									__LIB_42__.func_703(&iVar0, -29.86f, -1833.06f, 25.37f, 234.16f, 0, 0, 0, 0, 1, joaat("buffalo"), 0, 145, 1);
								}
							}
							else
							{
								__LIB_42__.func_703(&iVar0, -29.86f, -1833.06f, 25.37f, 234.16f, 0, 0, 0, 0, 1, joaat("buffalo"), 0, 145, 1);
							}
							__LIB_6__.func_775(iVar0, -1, 1);
							__LIB_32__.func_751(1, 1, 1);
							iLocal_976 = 0;
							iLocal_975 = 9;
							break;
						default:
							break;
					}
				}
				else
				{
					iLocal_976 = 3;
				}
			}
			break;
		case 3:
			iLocal_975 = 1;
			iLocal_976 = 0;
			break;
	}
}

void func_609()//Position - 0x43541
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		if (__LIB_1__.func_197(Local_542[iVar0 /*18*/].f_3) && __LIB_1__.func_183(Local_542[iVar0 /*18*/].f_6))
		{
			TASK::CLEAR_PED_TASKS(Local_542[iVar0 /*18*/].f_3);
			VEHICLE::BRING_VEHICLE_TO_HALT(Local_542[iVar0 /*18*/].f_6, 0.1f, 1, false);
			ENTITY::SET_ENTITY_HEADING(Local_542[iVar0 /*18*/].f_6, Local_538.f_230[iVar0]);
			__LIB_10__.func_698(Local_542[iVar0 /*18*/].f_6, Local_538.f_181[iVar0 /*3*/]);
		}
		iVar0++;
	}
}

int func_610()//Position - 0x435D5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_538.f_249 - 1))
	{
		if (!__LIB_1__.func_197(Local_542[iVar0 /*18*/].f_3))
		{
			return 1;
		}
		if (!__LIB_1__.func_183(Local_542[iVar0 /*18*/].f_6))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_717(var uParam0)//Position - 0x4A9EC
{
	int iVar0[4];
	int iVar1;
	int iVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	struct<3> Var6;
	sVar3 = "special_ped@hao@base";
	iVar0[0] = uLocal_38;
	iVar0[1] = joaat("penumbra");
	iVar0[2] = joaat("prop_npc_phone");
	iVar0[3] = joaat("ruiner");
	switch (iLocal_37)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -72.13491f, -1256.7122f, 27.683605f };
			uParam0->f_17[1 /*3*/] = { -72.18015f, -1267.5868f, 29.248524f };
			uParam0->f_24 = 25f;
			uParam0->f_27 = 0;
			uParam0->f_25 = 1;
			uParam0->f_26 = 0;
			StringCopy(&(uParam0->f_9), "HAO_MCS_1", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			STREAMING::REQUEST_ANIM_DICT(sVar3);
			iLocal_37 = 1;
			break;
		case 1:
			if (!__LIB_10__.func_716(&iVar0) || !STREAMING::HAS_ANIM_DICT_LOADED(sVar3))
			{
				return 0;
			}
			iLocal_37 = 2;
			break;
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!__LIB_26__.func_256(&(uParam0->f_28[0]), 53, -71.936844f, -1259.7f, 28.193594f, -177.55f, "HAO LAUNCHER RC - HAO", 1))
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[0]), iVar0[1], -72.3226f, -1258.6433f, 28.1915f, 90.8326f);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 38, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 91, 0);
				VEHICLE::SET_VEHICLE_MOD_KIT(uParam0->f_35[0], 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 0, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 1, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 2, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 3, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 4, 1);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 6, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 7, 2);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 10, 0);
				VEHICLE::PRELOAD_VEHICLE_MOD(uParam0->f_35[0], 23, 20);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 0, 2, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 1, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 2, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 3, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 4, 1, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 6, 0, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 7, 2, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 10, 0, false);
				VEHICLE::SET_VEHICLE_MOD(uParam0->f_35[0], 23, 20, false);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 18, true);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 17, true);
				VEHICLE::TOGGLE_VEHICLE_MOD(uParam0->f_35[0], 22, true);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
				VEHICLE::ROLL_DOWN_WINDOW(uParam0->f_35[0], 0);
				VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_35[0], 2);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_35[0], 5f);
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				__LIB_20__.func_649(&(uParam0->f_35[1]), iVar0[3], -91.07f, -1273.45f, 28.86f, 0.57f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 10);
			}
			if (__LIB_0__.func_121(uParam0->f_28[0]))
			{
				__LIB_10__.func_697(&(uParam0->f_41[0]), iVar0[2], -71.936844f, -1259.0775f, 28.193594f, -177.55f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[0], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
			}
			if (bVar4)
			{
				iLocal_37 = 3;
			}
			break;
		case 3:
			if (__LIB_1__.func_197(uParam0->f_28[0]) && __LIB_1__.func_183(uParam0->f_35[0]))
			{
				iVar5 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_35[0], "chassis_dummy");
				Var6 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_35[0], iVar5) };
				iVar2 = PED::CREATE_SYNCHRONIZED_SCENE(Var6, ENTITY::GET_ENTITY_ROTATION(uParam0->f_35[0], 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar2, true);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iVar2, false);
				TASK::TASK_SYNCHRONIZED_SCENE(uParam0->f_28[0], iVar2, sVar3, "hao_base", 8f, -8f, 9, 16, 1000f, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
			}
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

void func_726()//Position - 0x4B06D
{
	__LIB_0__.func_55();
	__LIB_26__.func_252();
	if (__LIB_26__.func_257())
	{
		func_736(0);
	}
	__LIB_0__.func_367(0);
	__LIB_32__.func_757(&Local_974, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_736(bool bParam0)//Position - 0x4B221
{
	__LIB_0__.func_523(&iLocal_979);
	if (__LIB_1__.func_183(Local_974.f_35[0]))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_974.f_35[0], true);
	}
	if (bParam0)
	{
		__LIB_0__.func_0(&(Local_974.f_28[0]));
		__LIB_11__.func_32(&(Local_974.f_35[0]));
		__LIB_11__.func_32(&(Local_974.f_35[1]));
	}
	else
	{
		__LIB_0__.func_124(&(Local_974.f_28[0]), 1, 0, 1);
		__LIB_0__.func_106(&(Local_974.f_35[0]));
		__LIB_0__.func_106(&(Local_974.f_35[1]));
	}
	func_737(bParam0);
	__LIB_26__.func_264(39, 0);
	__LIB_10__.func_604(59, 1, 0);
	__LIB_35__.func_395(1, 1);
	__LIB_35__.func_395(7, 1);
	__LIB_30__.func_244(0);
	if (CAM::DOES_CAM_EXIST(iLocal_1010))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(iLocal_1010, false);
		CAM::DESTROY_CAM(iLocal_1010, false);
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_978);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_982, Local_983, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_980 - Vector(300f, 300f, 300f), Local_980 + Vector(300f, 300f, 300f), true, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1025, Local_1026, fLocal_1027, false, true, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1031, Local_1032, fLocal_1033, false, true, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_1028, Local_1029, fLocal_1030, false, true, true);
	HUD::CLEAR_PRINTS();
}

void func_737(bool bParam0)//Position - 0x4B372
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_30__.func_240(&uLocal_582, 1, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if ((Local_537.f_11 == 1 || Local_537.f_11 == 2) || Local_537.f_11 == 3)
	{
		func_740();
	}
	if (Local_537.f_11 == 1)
	{
		func_738();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
	}
	if (__LIB_1__.func_197(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
	}
	STREAMING::SET_REDUCE_PED_MODEL_BUDGET(false);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_REDUCE_VEHICLE_MODEL_BUDGET(false);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_RANDOM_TRAINS(true);
	TASK::SET_SCENARIO_TYPE_ENABLED("DRIVE", true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-7000f, -7000f, -100f, 7000f, 7000f, 100f, true, true);
	func_31(1);
	func_273(bParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_795))
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sLocal_795);
	}
	__LIB_0__.func_124(&iLocal_788, 1, 0, 1);
	__LIB_0__.func_124(&iLocal_777, 1, 0, 1);
	__LIB_0__.func_124(&iLocal_778, 1, 0, 1);
	__LIB_0__.func_124(&iLocal_779, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_39.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_39.f_0, false))
		{
			VEHICLE::SET_VEHICLE_STRONG(Local_39.f_0, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_39.f_0, false);
			if ((Local_536.f_1 == 3 && __LIB_1__.func_197(PLAYER::PLAYER_PED_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		__LIB_0__.func_106(&Local_39);
	}
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(false);
	Global_1836356 = 0;
	if (Local_536.f_1 == 3)
	{
		AUDIO::STOP_SOUND(iLocal_578);
		AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	}
	else
	{
		AUDIO::STOP_STREAM();
	}
	if (Local_536.f_1 == 3)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("MGSR_STOP");
	}
}

void func_738()//Position - 0x4B51D
{
	switch (Local_536.f_0)
	{
		case 5:
			if (!BitTest(Global_113386.f_24976.f_1, 0))
			{
				__LIB_11__.func_504(82, 1);
				MISC::SET_BIT(&(Global_113386.f_24976.f_1), 0);
				__LIB_0__.func_533();
			}
			break;
		case 6:
			if (!BitTest(Global_113386.f_24976.f_1, 1))
			{
				__LIB_11__.func_504(83, 1);
				MISC::SET_BIT(&(Global_113386.f_24976.f_1), 1);
				__LIB_0__.func_533();
			}
			break;
		case 7:
			if (!BitTest(Global_113386.f_24976.f_1, 2))
			{
				__LIB_11__.func_504(84, 1);
				MISC::SET_BIT(&(Global_113386.f_24976.f_1), 2);
				__LIB_0__.func_533();
			}
			break;
		case 8:
			if (!BitTest(Global_113386.f_24976.f_1, 3))
			{
				__LIB_11__.func_504(85, 1);
				MISC::SET_BIT(&(Global_113386.f_24976.f_1), 3);
				__LIB_0__.func_533();
			}
			break;
		case 0:
			if (!BitTest(Global_113386.f_24979.f_2, 0))
			{
				__LIB_11__.func_504(86, 1);
				MISC::SET_BIT(&(Global_113386.f_24979.f_2), 0);
				__LIB_0__.func_533();
			}
			break;
		case 1:
			if (!BitTest(Global_113386.f_24979.f_2, 1))
			{
				__LIB_11__.func_504(87, 1);
				MISC::SET_BIT(&(Global_113386.f_24979.f_2), 1);
				__LIB_0__.func_533();
			}
			break;
		case 2:
			if (!BitTest(Global_113386.f_24979.f_2, 2))
			{
				__LIB_11__.func_504(88, 1);
				MISC::SET_BIT(&(Global_113386.f_24979.f_2), 2);
				__LIB_0__.func_533();
			}
			break;
		case 3:
			if (!BitTest(Global_113386.f_24979.f_2, 3))
			{
				__LIB_11__.func_504(89, 1);
				MISC::SET_BIT(&(Global_113386.f_24979.f_2), 3);
				__LIB_0__.func_533();
			}
			break;
		case 4:
			if (!BitTest(Global_113386.f_24979.f_2, 4))
			{
				__LIB_11__.func_504(90, 1);
				MISC::SET_BIT(&(Global_113386.f_24979.f_2), 4);
				__LIB_0__.func_533();
			}
			break;
	}
}

void func_740()//Position - 0x4B775
{
	bool bVar0;
	int iVar1;
	bVar0 = false;
	iVar1 = -1;
	switch (Local_536.f_0)
	{
		case 0:
			if (!BitTest(Global_113386.f_24979.f_1, 1))
			{
				MISC::SET_BIT(&(Global_113386.f_24979.f_1), 1);
				bVar0 = true;
			}
			break;
		case 1:
			if (!BitTest(Global_113386.f_24979.f_1, 2) && Global_113386.f_24979 != 2)
			{
				Global_113386.f_24979 = 2;
				iVar1 = joaat("TEXT_STREET_RACE_AIRPORT");
				bVar0 = true;
			}
			break;
		case 2:
			if (!BitTest(Global_113386.f_24979.f_1, 3) && Global_113386.f_24979 != 3)
			{
				Global_113386.f_24979 = 3;
				iVar1 = joaat("TEXT_STREET_RACE_FREEWAY");
				bVar0 = true;
			}
			break;
		case 3:
			if (!BitTest(Global_113386.f_24979.f_1, 4) && Global_113386.f_24979 != 4)
			{
				Global_113386.f_24979 = 4;
				iVar1 = joaat("TEXT_STREET_RACE_CANALS");
				bVar0 = true;
			}
			break;
		case 4:
			break;
	}
	if (bVar0)
	{
		if (iVar1 != -1)
		{
			__LIB_27__.func_930(iVar1, 1, 2, 53, 2880000, 10000, -1, 189, -1, 0, 1);
		}
		__LIB_0__.func_533();
	}
}

