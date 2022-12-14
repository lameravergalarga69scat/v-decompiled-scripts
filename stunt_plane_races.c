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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	struct<3> Local_30 = { 0, 0, 0 } ;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<328> Local_45 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 4;
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
	var uLocal_76 = 4;
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
	var uLocal_91 = 4;
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
	var uLocal_106 = 4;
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
	var uLocal_121 = 4;
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
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	struct<3> Local_184 = { 0, 0, 0 } ;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int* iLocal_187 = NULL;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	bool bLocal_190 = 0;
	bool bLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196[5] = { 0, 0, 0, 0, 0 };
	float fLocal_197 = 0f;
	float fLocal_198 = 0f;
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
	float fLocal_218 = 0f;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	bool bLocal_222 = 0;
	var uLocal_223 = 35;
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
	var uLocal_539 = 50;
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
	var uLocal_643 = 40;
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
	var uLocal_1199 = 1;
	var uLocal_1200 = 0;
	var uLocal_1201 = 1;
	var uLocal_1202 = 1;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 1;
	var uLocal_1207 = 1;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 3;
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
	var uLocal_1258 = 4;
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
	var uLocal_1323 = 2;
	var uLocal_1324 = 0;
	var uLocal_1325 = 4;
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
	var uLocal_1391 = 4;
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
	var uLocal_1462 = 12;
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
	var uLocal_1643 = 3;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	int iLocal_1647 = 0;
	var uLocal_1648 = 0;
	int iLocal_1649 = 0;
	int iLocal_1650 = 0;
	int iLocal_1651 = 0;
	int iLocal_1652 = 0;
	int iLocal_1653 = 0;
	int iLocal_1654 = 0;
	int iLocal_1655 = 0;
	int iLocal_1656 = 0;
	int iLocal_1657 = 0;
	int iLocal_1658 = 0;
	int iLocal_1659 = 0;
	int iLocal_1660 = 0;
	int iLocal_1661 = 0;
	int iLocal_1662 = 0;
	int iLocal_1663 = 0;
	int iLocal_1664 = 0;
	int iLocal_1665 = 0;
	int iLocal_1666 = 0;
	int iLocal_1667 = 0;
	int iLocal_1668 = 0;
	int iLocal_1669 = 0;
	int* iLocal_1670 = NULL;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	int* iLocal_1673 = NULL;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	int* iLocal_1676 = NULL;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	int* iLocal_1679 = NULL;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	int* iLocal_1682 = NULL;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	int* iLocal_1685 = NULL;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	int* iLocal_1688 = NULL;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	int* iLocal_1691 = NULL;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	int* iLocal_1694 = NULL;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	int* iLocal_1697 = NULL;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	int* iLocal_1700 = NULL;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	int* iLocal_1703 = NULL;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	int iLocal_1706 = 0;
	int iLocal_1707 = 0;
	int* iLocal_1708 = NULL;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	int iLocal_1713[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1714[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1715[5] = { 0, 0, 0, 0, 0 };
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	int iLocal_1718 = 0;
	float fLocal_1719 = 0f;
	int iLocal_1720 = 0;
	int iLocal_1721 = 0;
	int iLocal_1722 = 0;
	int* iLocal_1723 = NULL;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 16;
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
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
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
	char* sLocal_1892 = NULL;
	float fLocal_1893 = 0f;
	float fLocal_1894 = 0f;
	bool bLocal_1895 = 0;
	bool bLocal_1896 = 0;
	struct<3> Local_1897 = { 0, 0, 0 } ;
	struct<3> Local_1898 = { 0, 0, 0 } ;
	struct<3> Local_1899 = { 0, 0, 0 } ;
	float fLocal_1900 = 0f;
	float fLocal_1901 = 0f;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = -1;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 1000;
	var uLocal_1912 = 1000;
	var uLocal_1913 = 0;
	char[] cLocal_1914[8] = 0;
	char* sLocal_1915 = NULL;
	bool bLocal_1916 = 0;
	int* iLocal_1917 = NULL;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	int* iLocal_1920 = NULL;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	int* iLocal_1923 = NULL;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	bool bLocal_1926 = 0;
	int iLocal_1927 = 0;
	int iLocal_1928 = 0;
	struct<7> Local_1929 = { 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	int iLocal_1935 = 0;
	int iLocal_1936 = 0;
	char* sLocal_1937 = NULL;
	char* sLocal_1938 = NULL;
	char* sLocal_1939 = NULL;
	struct<3> Local_1940 = { 0, 0, 0 } ;
	struct<3> Local_1941 = { 0, 0, 0 } ;
	int iLocal_1942 = 0;
	int iLocal_1943 = 0;
	int iLocal_1944 = 0;
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	struct<7> Local_1950 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 1132396544;
	var uLocal_1955 = 1132396544;
	var uLocal_1956 = 1132396544;
	var uLocal_1957 = 0;
	var uLocal_1958 = -1082130432;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 8;
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
	var uLocal_2018 = -1;
	var uLocal_2019 = 1092616192;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	int* iLocal_2022 = NULL;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	int* iLocal_2025 = NULL;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	int iLocal_2028 = 0;
	int iLocal_2029 = 0;
	bool bLocal_2030 = 0;
	bool bLocal_2031 = 0;
	int* iLocal_2032 = NULL;
	bool bLocal_2033 = 0;
	int iLocal_2034 = 0;
	struct<2863> Local_2035 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2036 = 1;
	var uLocal_2037 = 0;
	int* iLocal_2038 = NULL;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	struct<3> Local_2041 = { 0, 0, 0 } ;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	Local_43 = { 1691.2277f, 3251.785f, 44.2574f };
	Local_44 = { 2.5652f, 0f, -4.1481f };
	Local_184 = { 500f, 500f, 500f };
	iLocal_185 = -1;
	iLocal_194 = 1;
	fLocal_197 = 0.008f;
	fLocal_198 = 0.013f;
	fLocal_218 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1719 = -1f;
	iLocal_1720 = 1;
	fLocal_1893 = 0.2f;
	fLocal_1894 = 0.2f;
	fLocal_1901 = 0f;
	cLocal_1914 = "SPR_UI_FAILD";
	sLocal_1915 = "SPR_UI_FRETRY";
	sLocal_1937 = "CHECKPOINT_NORMAL";
	sLocal_1938 = "CHECKPOINT_MISSED";
	sLocal_1939 = "CHECKPOINT_PERFECT";
	Local_1940 = { 1694.7395f, 3276.5024f, 41.2796f };
	Local_1941 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2030 = true;
	bLocal_2031 = true;
	bLocal_2033 = true;
	Local_2041 = { -1497.7083f, -3449.5762f, 7.3477f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_614();
	}
	MISC::SET_MISSION_FLAG(true);
	Local_1950.f_1 = 0;
	Local_1950.f_5 = 0;
	Local_1950.f_6 = 0;
	while (true)
	{
		__LIB_0__::func_467();
		switch (Local_1950.f_1)
		{
			case 0:
				if (!func_602())
				{
					Local_1950.f_1 = 1;
				}
				break;
			case 1:
				if (!func_1())
				{
					Local_1950.f_1 = 2;
				}
				break;
			case 2:
				func_614();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1CD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_45.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45.f_1, false))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Local_45.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		Local_45.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		Local_45.f_1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, joaat("stunt"), 0);
	}
	if (Local_2035.f_2861 != 0)
	{
		Local_2035.f_2862 = (Local_2035.f_2862 - 25);
		if (Local_2035.f_2862 <= 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_2035.f_2861);
			Local_2035.f_2861 = 0;
			bLocal_1916 = false;
		}
		else
		{
			if (bLocal_1916)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			__LIB_21__::func_959(__LIB_19__::func_206(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_2035.f_2861, iVar0, iVar1, iVar2, __LIB_3__::func_778(SYSTEM::CEIL((1.5f * IntToFloat(Local_2035.f_2862))), 255));
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_2035.f_2861, iVar0, iVar1, iVar2, Local_2035.f_2862);
		}
	}
	func_597();
	TASK::SET_EXCLUSIVE_SCENARIO_GROUP("AMMUNATION");
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	if (Local_1950.f_6 == 4)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45.f_1, false))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_45.f_1))
			{
				FIRE::STOP_ENTITY_FIRE(Local_45.f_1);
			}
		}
	}
	switch (Local_1950.f_6)
	{
		case 0:
			AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			Local_1950.f_0 = -1;
			Local_45.f_10 = 0;
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1734.8021f, 3224.1047f, 41.3709f, 1762.0674f, 3258.69f, 40.5188f, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_45.f_1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_45.f_1, 1);
				Local_2035.f_2859 = 0;
				Local_1950.f_6 = 3;
			}
			else
			{
				Local_1950.f_6 = 1;
			}
			break;
		case 1:
			Local_1950.f_6 = 18;
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_45.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_45.f_1, 1);
				Local_2035.f_2859 = 0;
				Local_1950.f_6 = 3;
			}
			break;
		case 3:
			if (Local_2035.f_0)
			{
			}
			else if ((CAM::DOES_CAM_EXIST(iLocal_1706) && CAM::IS_CAM_ACTIVE(iLocal_1706)) && CAM::IS_SCREEN_FADED_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_2035.f_2858))
				{
					CAM::DESTROY_CAM(Local_2035.f_2858, false);
				}
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionOut");
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
				Local_2035.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_43, Local_44, 34.9705f, true, 2);
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
				CAM::SET_CAM_COORD(iLocal_1706, Local_43.f_0, Local_43.f_1, (Local_43.f_2 + 1000f));
				CAM::SET_CAM_ROT(iLocal_1706, 90f, Local_44.f_1, Local_44.f_2, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2035.f_2858, iLocal_1706, 500, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			else
			{
				__LIB_40__::func_49(500);
				if (CAM::DOES_CAM_EXIST(Local_2035.f_2858))
				{
					CAM::DESTROY_CAM(Local_2035.f_2858, false);
				}
				Local_2035.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_43, Local_44, 34.9705f, true, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			__LIB_1__::func_300(&iLocal_1930);
			__LIB_33__::func_306(1);
			STREAMING::CLEAR_FOCUS();
			Local_1950.f_6 = 4;
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_45.f_1, true, false, false);
			}
			if (MISC::IS_PC_VERSION())
			{
				PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			}
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			HUD::DISPLAY_RADAR(false);
			Local_2035.f_2 = Local_2035.f_0;
			if (Local_2035.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2035.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_1650 = 0;
				Local_2035.f_0 = 0;
				func_563();
				Local_1950.f_6 = 8;
			}
			else if (Local_2035.f_2859)
			{
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if ((Local_2035.f_2859 && PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/)) && SYSTEM::TIMERA() > 500)
					{
						AUDIO::PLAY_SOUND(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
						Local_2035.f_2859 = 0;
						Local_2035.f_2860 = 1;
						func_562(&(Local_45.f_119));
						SYSTEM::SETTIMERA(0);
					}
					if (!Local_2035.f_2860 && __LIB_16__::func_732(&uLocal_1210))
					{
						Local_2035.f_2860 = 1;
						func_559(Local_2035.f_2860);
					}
					func_492(&(Local_45.f_118), Global_112416, &(Local_45.f_24[Global_112416 /*8*/]));
				}
				else if (__LIB_14__::func_440(&iLocal_1647, 0))
				{
					Local_2035.f_2859 = 0;
					iLocal_1647 = 0;
					func_562(&(Local_45.f_119));
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if ((func_442(&Local_2035, 0) && !iLocal_192) && !bLocal_191)
				{
					func_562(&(Local_45.f_119));
				}
				if (iLocal_195 && PLAYER::IS_PLAYER_ONLINE())
				{
					func_562(&(Local_45.f_119));
					iLocal_195 = 0;
				}
				if ((((!Local_2035.f_2859 && !iLocal_192) && !bLocal_191) && (iLocal_194 || !PLAYER::IS_PLAYER_ONLINE())) && (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/)))
				{
					Local_2035.f_2859 = 1;
					AUDIO::PLAY_SOUND(-1, "SELECT" /* GXT: Filter List */, "HUD_MINI_GAME_SOUNDSET", false, 0, true);
					__LIB_2__::func_546(&uLocal_1210);
					Local_2035.f_2860 = __LIB_16__::func_732(&uLocal_1210);
					func_559(Local_2035.f_2860);
					SYSTEM::SETTIMERA(0);
				}
				if (func_382(&uLocal_2036, &(Local_2035.f_1)))
				{
					iLocal_1650 = 0;
					if (Local_45.f_10 != -1)
					{
						func_374();
						func_563();
						if (ENTITY::IS_ENTITY_AT_COORD(Local_45.f_1, Local_1940, 5f, 5f, 5f, false, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
							{
								__LIB_1__::func_362(&iLocal_2038);
								Local_1950.f_6 = 8;
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(Local_45.f_1, false))
						{
							Local_1950.f_6 = 8;
						}
					}
					else
					{
						Local_1950.f_6 = 7;
					}
				}
			}
			break;
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_45.f_1, false))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				Local_1950.f_6 = 18;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2035.f_358[0 /*189*/].f_9, false);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1940, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), Local_1941, 2, true);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 5f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_START(Local_1940, ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_1950.f_6 = 18;
					}
				}
				else
				{
					Local_1950.f_6 = 18;
				}
			}
			break;
		case 8:
			RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
			if (Local_45.f_10 == 0)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_45.f_1);
				if (__LIB_1__::func_490(iLocal_1927, 16))
				{
					__LIB_38__::func_800(&iLocal_1927, 16);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_45.f_1, true, true, false);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_45.f_1, -1);
				VEHICLE::SET_VEHICLE_FIXED(Local_45.f_1);
				func_369();
				iLocal_1706 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1702.4866f, 3279.5454f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, true, 2);
				CAM::SET_CAM_ACTIVE(Local_2035.f_2858, false);
				Local_1950.f_6 = 9;
			}
			else if (__LIB_40__::func_42(1000))
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				VEHICLE::SET_VEHICLE_FIXED(Local_45.f_1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_45.f_1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_369();
					Local_1950.f_6 = 10;
				}
			}
			break;
		case 9:
			if (!((CAM::IS_CAM_ACTIVE(iLocal_1706) && CAM::IS_CAM_INTERPOLATING(iLocal_1706)) || (CAM::IS_CAM_ACTIVE(Local_2035.f_2858) && CAM::IS_CAM_INTERPOLATING(Local_2035.f_2858))))
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(true, 0f, 3, 0);
				func_369();
				Local_1950.f_6 = 10;
			}
			break;
		case 10:
			Local_2035.f_25 = 0;
			Local_1950.f_6 = 11;
			break;
		case 11:
			if (!func_354(&Local_2035))
			{
				__LIB_33__::func_306(1);
				if (Local_2035.f_2)
				{
					STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
				}
				if (Local_45.f_10 == 0)
				{
					__LIB_0__::func_382("SPR_TAXI_GATE", 10000, 1);
					if (!__LIB_1__::func_490(iLocal_1927, 16))
					{
						func_345(&Local_2035, 0, 1);
						__LIB_38__::func_899(&iLocal_1927, 16);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					}
					HUD::DISPLAY_HUD(true);
					HUD::DISPLAY_RADAR(true);
					Local_1950.f_6 = 13;
				}
				else
				{
					Local_1950.f_6 = 13;
				}
				Local_2035.f_2 = 0;
			}
			break;
		case 13:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2035.f_358[0 /*189*/].f_9, false);
				func_369();
				if (__LIB_1__::func_490(iLocal_1927, 16))
				{
					__LIB_38__::func_800(&iLocal_1927, 16);
				}
				if (Local_45.f_10 == 0)
				{
					if (__LIB_40__::func_49(500))
					{
						Local_2035.f_26 = 0;
						Local_1950.f_6 = 14;
					}
				}
				else
				{
					func_343(&Local_2035);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					if (__LIB_40__::func_49(500))
					{
						Local_2035.f_26 = 0;
						Local_1950.f_6 = 14;
					}
				}
			}
			break;
		case 14:
			if (Local_1950.f_0 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2035))
			{
				return 1;
			}
			iLocal_1650 = 3;
			func_23();
			func_13();
			if (!Local_2035.f_0)
			{
				__LIB_15__::func_248(&(Local_2035.f_6));
				func_9(&(Local_2035.f_358[0 /*189*/]), Local_45.f_3, Local_45.f_6, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2035.f_358[0 /*189*/].f_9, 5f);
				}
				if (STREAMING::NEW_LOAD_SCENE_START(Local_43, __LIB_3__::func_80(Local_44), 4500f, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && __LIB_2__::func_572(&(Local_2035.f_6)) < 20f)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_43, __LIB_3__::func_80(Local_44));
					__LIB_1__::func_377(&(Local_2035.f_6));
					Local_1950.f_6 = 15;
				}
				else if (__LIB_15__::func_251(&(Local_2035.f_6), 20f))
				{
					__LIB_1__::func_377(&(Local_2035.f_6));
					Local_1950.f_6 = 15;
				}
			}
			else
			{
				Local_1950.f_6 = 3;
			}
			break;
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
			}
			Local_2035.f_2859 = 0;
			Local_1950.f_6 = 3;
			break;
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
			}
			func_442(&Local_2035, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				__LIB_40__::func_49(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_9(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0xDF5
{
	ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_9, fParam2);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam3);
}

void func_13()//Position - 0xE7C
{
	if (Global_113386.f_19043.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_113386.f_19043.f_6[4] > 0f)
		{
			if (Global_113386.f_19043.f_6[4] <= func_22(4))
			{
				__LIB_0__::func_716(125, 0, 0);
			}
		}
	}
}

float func_22(int iParam0)//Position - 0x156A
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		case 1:
			return 120f;
			break;
		case 2:
			return 120f;
			break;
		case 3:
			return 170f;
			break;
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()//Position - 0x15CF
{
	iLocal_1942 = 0;
	iLocal_1943 = 0;
	iLocal_1944 = 0;
	iLocal_1945 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	iLocal_1949 = 0;
}

int func_24(var uParam0)//Position - 0x15F7
{
	switch (uParam0->f_26)
	{
		case 0:
			__LIB_38__::func_800(&iLocal_1927, 4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			__LIB_40__::func_38(uParam0);
			uParam0->f_17 = __LIB_1__::func_6();
			if (Local_45.f_10 == 0)
			{
				if (!__LIB_1__::func_490(iLocal_1927, 16))
				{
					func_345(uParam0, 0, 1);
					func_345(uParam0, 1, 0);
					__LIB_38__::func_899(&iLocal_1927, 16);
				}
			}
			else
			{
				func_343(uParam0);
				if (!__LIB_1__::func_490(iLocal_1927, 16))
				{
					func_345(uParam0, 0, 1);
					func_345(uParam0, 1, 0);
					__LIB_38__::func_899(&iLocal_1927, 16);
				}
			}
			__LIB_1__::func_377(&(uParam0->f_14));
			iLocal_1935 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			uParam0->f_26 = 1;
			break;
		case 1:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (Local_45.f_10 == 0)
			{
				if (__LIB_1__::func_490(iLocal_1927, 16))
				{
					__LIB_38__::func_800(&iLocal_1927, 16);
				}
				func_339(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_343(uParam0);
				if (!func_314(&(uParam0->f_14)))
				{
					if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
					{
						CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					}
					if (__LIB_1__::func_490(iLocal_1927, 16))
					{
						__LIB_38__::func_800(&iLocal_1927, 16);
					}
					HUD::DISPLAY_HUD(true);
					func_339(uParam0);
					if (Local_45.f_10 == 0 && (Global_113386.f_19043.f_6[0] > Local_45.f_112[0] || Global_113386.f_19043.f_6[0] == 0f))
					{
						__LIB_0__::func_151("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		case 2:
			if (!__LIB_1__::func_490(iLocal_1927, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_274(uParam0);
				__LIB_1__::func_214(&(Local_45.f_119), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_45.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				__LIB_37__::func_435(&(Local_45.f_119), 1);
				__LIB_38__::func_899(&iLocal_1927, 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_501("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_501("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			SYSTEM::SETTIMERA(0);
			func_268();
			func_267(0);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			__LIB_38__::func_945(1);
			uParam0->f_26 = 4;
			break;
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			__LIB_0__::func_646();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0 /*189*/].f_9) && CAM::DOES_CAM_EXIST(iLocal_1707))
				{
					CAM::GET_CAM_ROT(iLocal_1707, 2);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0 /*189*/].f_9, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, true);
					func_263();
				}
			}
			if (!func_249(uParam0, bLocal_2030, bLocal_2031))
			{
				func_263();
				__LIB_0__::func_704(0);
				HUD::CLEAR_HELP(true);
				if (__LIB_1__::func_490(iLocal_1927, 1))
				{
					__LIB_38__::func_800(&iLocal_1927, 1);
				}
				__LIB_0__::func_734(0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				iLocal_2034 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				__LIB_1__::func_377(&iLocal_1917);
				uParam0->f_26 = 5;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_9, Local_1940, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_358[0 /*189*/].f_9, Local_1941, 2, true);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0 /*189*/].f_9, true, false);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_358[0 /*189*/].f_9, 5f);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0 /*189*/].f_9, false);
			}
			iLocal_2029 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		case 6:
			uParam0->f_26 = 8;
			break;
		case 7:
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_1930, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!__LIB_1__::func_490(iLocal_1927, 16))
			{
				func_345(uParam0, 0, 1);
				func_345(uParam0, 1, 0);
				__LIB_38__::func_899(&iLocal_1927, 16);
				func_267(1);
				func_246(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_212(uParam0);
				func_210(uParam0);
			}
			else
			{
				__LIB_38__::func_940(&uLocal_1902, 0);
				func_263();
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			}
			if (!func_41(uParam0, Local_45.f_0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
				func_28(uParam0);
				__LIB_1__::func_377(&(uParam0->f_14));
				uParam0->f_26 = 2;
				__LIB_1__::func_377(&(uParam0->f_22));
			}
			break;
		case 8:
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			__LIB_15__::func_240(&(uParam0->f_17));
			func_263();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()//Position - 0x1AA5
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_1__::func_490(uLocal_1716, iVar0))
		{
			__LIB_38__::func_800(&uLocal_1716, iVar0);
		}
		if (__LIB_1__::func_490(uLocal_1717, iVar0))
		{
			__LIB_38__::func_800(&uLocal_1717, iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1714[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_1714[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1715[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_1715[iVar0]));
		}
		iVar0++;
	}
	__LIB_37__::func_599(&iLocal_1713);
	iVar0 = 0;
	while (iVar0 < iLocal_1713)
	{
		iLocal_1713[iVar0] = 0;
		iVar0++;
	}
}

void func_28(var uParam0)//Position - 0x1B8A
{
	int iVar0;
	if (!__LIB_2__::func_213(&(uParam0->f_3)))
	{
		__LIB_14__::func_599(&(uParam0->f_3));
	}
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0 /*189*/].f_9, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	func_39(uParam0);
	if (Local_45.f_0 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			__LIB_0__::func_467(&(uParam0->f_358[iVar0 /*189*/]));
		}
		iVar0++;
	}
}

void func_30(var uParam0)//Position - 0x1C12
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (Local_45.f_0 != 0)
		{
			__LIB_0__::func_467();
		}
	}
}

void func_32(var uParam0)//Position - 0x1C39
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar0 /*189*/].f_8, false))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_37(Local_45.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_45.f_10, uParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_45.f_10);
				func_34(Local_45.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_45.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)//Position - 0x1D0F
{
	Global_113386.f_19043.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)//Position - 0x1D26
{
	Local_45.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)//Position - 0x1D38
{
	var uVar0;
	uVar0 = Global_113386.f_19043.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)//Position - 0x1D51
{
	Global_113386.f_19043[iParam0] = uParam1;
}

int func_37(int iParam0)//Position - 0x1D66
{
	int iVar0;
	iVar0 = 0;
	iVar0 = Global_113386.f_19043[iParam0];
	return iVar0;
}

void func_38(var uParam0)//Position - 0x1D80
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_13 > uParam0->f_358[iVar1 /*189*/].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0 /*189*/].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x1DE9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0 /*189*/].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

int func_41(var uParam0, int iParam1)//Position - 0x1E85
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var3;
	int iVar4;
	bool bVar5;
	int iVar6;
	char cVar7[16];
	if (Local_45.f_10 == 0)
	{
		if (uParam0->f_358[0 /*189*/].f_11 == 0)
		{
			__LIB_1__::func_31(&(uParam0->f_3));
			if (__LIB_1__::func_490(iLocal_1928, 131072))
			{
				VEHICLE::RESET_VEHICLE_STUCK_TIMER(uParam0->f_358[0 /*189*/].f_9, 4);
				__LIB_38__::func_800(&iLocal_1928, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !__LIB_1__::func_490(iLocal_1928, 131072))
		{
			__LIB_0__::func_151("SPR_INFO_BON", 10000);
			__LIB_38__::func_899(&iLocal_1928, 131072);
			if (__LIB_1__::func_490(iLocal_1928, 262144))
			{
				__LIB_38__::func_800(&iLocal_1928, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !__LIB_1__::func_490(iLocal_1928, 262144))
		{
			__LIB_0__::func_151("SPR_INFO_RESET", 10000);
			__LIB_38__::func_899(&iLocal_1928, 262144);
		}
	}
	if (__LIB_1__::func_13(&(uParam0->f_3)))
	{
		fVar0 = __LIB_2__::func_572(&(uParam0->f_3));
	}
	func_189(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar5 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar5 = true;
			}
			iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
			if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar4 /*10*/] };
			}
			if (iVar4 < (uParam0->f_12 - 1))
			{
				Var3 = { uParam0->f_27[iVar4 + 1 /*10*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != uParam0->f_12)
			{
				uParam0->f_358[iVar1 /*189*/].f_13 = (fVar0 - uParam0->f_358[iVar1 /*189*/].f_15);
				if (uParam0->f_358[iVar1 /*189*/].f_13 < 0f)
				{
					uParam0->f_358[iVar1 /*189*/].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1 /*189*/]), bVar5))
			{
				if ((bVar5 && uParam0->f_1) && (Local_45.f_10 != 0 || uParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!__LIB_1__::func_13(&iLocal_2022))
					{
						__LIB_1__::func_362(&iLocal_2022);
					}
					if (__LIB_2__::func_572(&iLocal_2025) >= 6.5f)
					{
						if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/))
						{
							__LIB_1__::func_31(&iLocal_2022);
						}
						else if (__LIB_2__::func_572(&iLocal_2022) >= 1.5f)
						{
							uParam0->f_1 = 0;
							__LIB_38__::func_800(&iLocal_1928, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 222 /*INPUT_SCRIPT_RUP*/))
					{
						if (__LIB_2__::func_572(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_1928, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_1928, 32768, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_45.f_0 == 0 && __LIB_1__::func_13(&iLocal_1923))
					{
						return 1;
					}
					if (bVar5)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							__LIB_1__::func_362(&(uParam0->f_14));
						}
						if (__LIB_1__::func_490(iLocal_1927, 8))
						{
							func_345(uParam0, iVar4, 1);
							if (iVar4 < (uParam0->f_12 - 1))
							{
								func_345(uParam0, iVar4 + 1, 0);
							}
							__LIB_38__::func_800(&iLocal_1927, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var3, uParam0->f_358[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var3);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1 /*189*/]), bVar5, uParam0->f_11);
						}
						bLocal_1916 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1 /*189*/].f_11++;
						iVar4 = uParam0->f_358[iVar1 /*189*/].f_11;
						if (iVar4 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar4 /*10*/] };
						}
						if (bVar5)
						{
							func_78(uParam0, (iVar4 - 1));
							if (iVar4 == uParam0->f_12)
							{
								iVar6 = 0;
								if (__LIB_1__::func_13(&(uParam0->f_3)))
								{
									if (!__LIB_2__::func_213(&(uParam0->f_3)))
									{
										__LIB_14__::func_599(&(uParam0->f_3));
									}
									if (uParam0->f_358[0 /*189*/].f_13 > 0f)
									{
										if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
										{
											iVar6 = 1;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]))
										{
											iVar6 = 2;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
										{
											iVar6 = 3;
										}
									}
								}
								if (iVar6 == 0)
								{
								}
								if (iVar6 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1 /*189*/].f_11 = (uParam0->f_358[iVar1 /*189*/].f_11 - 1);
									HUD::CLEAR_PRINTS();
									sLocal_1915 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_345(uParam0, iVar4, 1);
								if (iVar4 < (uParam0->f_12 - 1))
								{
									func_345(uParam0, iVar4 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1 /*189*/].f_14 == 0f)
							{
								if (__LIB_1__::func_13(&(uParam0->f_14)))
								{
									__LIB_1__::func_377(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar4 == SYSTEM::ROUND((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1 /*189*/].f_14 = 0f;
										__LIB_1__::func_31(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
						{
							if (Local_45.f_0 != 2)
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false))
								{
									__LIB_0__::func_467(&(uParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_45.f_0 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar7, "Offroad_", 16);
								StringIntConCat(&cVar7, Local_45.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar7, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2033)
									{
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_9, false))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_358[iVar1 /*189*/].f_8, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
											{
											}
											else
											{
												TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar7, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iVar1 /*189*/].f_9), false, 2f);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_45.f_0 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar5)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &iLocal_2032);
		func_64(uParam0, &iLocal_2032);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_45.f_10 == 0)
			{
				if (uParam0->f_358[0 /*189*/].f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)//Position - 0x2615
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
	if (!__LIB_1__::func_13(&iLocal_1723))
	{
		iLocal_1721 = 0;
		iLocal_1722 = 0;
		__LIB_1__::func_362(&iLocal_1723);
	}
	if (SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_1722)
	{
		iLocal_1721 = (SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_1722);
		iLocal_1722 = SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		__LIB_1__::func_31(&iLocal_1723);
	}
	iVar0 = (SYSTEM::FLOOR((__LIB_2__::func_572(&(uParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (__LIB_2__::func_572(&iLocal_1723) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_1721;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_113386.f_19043.f_6[Local_45.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_45.f_106[Local_45.f_10] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_45.f_106[Local_45.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = SYSTEM::FLOOR(((((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_45.f_112[Local_45.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = SYSTEM::FLOOR((Local_45.f_112[Local_45.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	__LIB_1__::func_910();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)//Position - 0x2842
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
		__LIB_17__::func_410(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (__LIB_1__::func_76(sVar0))
		{
			sVar0 = "TIM_DAMAGE" /* GXT: DAMAGE */;
		}
		__LIB_17__::func_406(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (__LIB_1__::func_76(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN" /* GXT: CHECKPOINT */;
		}
		__LIB_40__::func_51((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (__LIB_1__::func_76(sVar2))
		{
			sVar2 = "TIM_POSIT" /* GXT: POSITION */;
		}
		__LIB_17__::func_405(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0, 1, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (__LIB_1__::func_76(sVar3))
		{
			sVar3 = "TIM_LAP" /* GXT: LAP */;
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (__LIB_1__::func_76(sVar4))
		{
			sVar4 = "TIMER_BESTIME" /* GXT: BEST TIME */;
		}
		__LIB_40__::func_50(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (__LIB_1__::func_76(sVar5))
		{
			sVar5 = "TIMER_BESTIME" /* GXT: BEST TIME */;
		}
		__LIB_40__::func_50(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0, 0, 0, 0, -1);
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
	else if (__LIB_1__::func_76(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER" /* GXT: TIME */, 64);
	}
	iParam26 = iParam26;
	iVar7 = 4;
	__LIB_40__::func_50(iParam0, &Var6, iParam8, iVar7, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

int func_54()//Position - 0x3391
{
	return iLocal_1720;
}

void func_56(var uParam0)//Position - 0x33AC
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()//Position - 0x33BC
{
	if (Local_45.f_0 == 0)
	{
		HUD::SET_MINIMAP_COMPONENT(0, false, -1);
		HUD::SET_MINIMAP_COMPONENT(1, false, -1);
		HUD::SET_MINIMAP_COMPONENT(2, false, -1);
		HUD::SET_MINIMAP_COMPONENT(3, false, -1);
	}
}

void func_58(var uParam0)//Position - 0x33EA
{
	if (__LIB_2__::func_572(&(uParam0->f_3)) > 15f)
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!__LIB_1__::func_13(&iLocal_1920))
			{
				__LIB_15__::func_248(&iLocal_1920);
			}
			else if (__LIB_2__::func_572(&iLocal_1920) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_1928, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				__LIB_1__::func_31(&iLocal_1920);
				__LIB_1__::func_31(&iLocal_1917);
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_1915 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (__LIB_2__::func_572(&iLocal_1920) > 30f)
			{
				if (!__LIB_1__::func_490(iLocal_1927, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_1927, 32, 0);
				}
			}
		}
		else if (__LIB_1__::func_13(&iLocal_1920))
		{
			__LIB_38__::func_800(&iLocal_1927, 32);
			__LIB_1__::func_31(&iLocal_1920);
		}
	}
	else if (__LIB_1__::func_13(&iLocal_1920))
	{
		__LIB_38__::func_800(&iLocal_1927, 32);
		__LIB_1__::func_31(&iLocal_1920);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x356A
{
	if (__LIB_37__::func_48(*iParam3, iParam4))
	{
		return;
	}
	__LIB_0__::func_229(sParam0, iParam1, iParam2);
	__LIB_0__::func_964(iParam3, iParam4);
}

void func_63()//Position - 0x35CC
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_64(var uParam0, int* iParam1)//Position - 0x35E8
{
	if (uParam0->f_1)
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false) || ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9) < 5) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_1__::func_31(&iLocal_1917);
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			HUD::CLEAR_PRINTS();
			sLocal_1915 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, int* iParam1)//Position - 0x36EF
{
	if (Local_45.f_0 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				HUD::CLEAR_PRINTS();
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (HUD::DOES_BLIP_EXIST(*iParam1))
				{
					HUD::REMOVE_BLIP(iParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_1915 = "SPR_RETR_DES";
				__LIB_15__::func_242(&(Local_45.f_321), 1);
				uParam0->f_358[0 /*189*/].f_23 = 7;
			}
		}
	}
}

void func_67(var uParam0)//Position - 0x3813
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x382E
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_45.f_0 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0 /*189*/].f_9, false))
				{
					bLocal_1926 = true;
				}
			}
			if (bLocal_1926)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1928, 2);
					}
				}
			}
		}
		else
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1928, 2);
		}
	}
	if (Local_45.f_0 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_325();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_1928, 2);
		}
	}
}

void func_72(var uParam0)//Position - 0x39EA
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	bool bVar7;
	bool bVar8;
	Var0 = { uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/] };
	if (uParam0->f_358[0 /*189*/].f_11 > 0)
	{
		Var1 = { uParam0->f_27[(uParam0->f_358[0 /*189*/].f_11 - 1) /*10*/] };
	}
	else
	{
		Var1 = { 0f, 0f, 0f };
	}
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, true);
	fVar3 = fVar2;
	if (uParam0->f_358[0 /*189*/].f_11 == 0)
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	else
	{
		fVar2 = (fVar2 + 200f);
		fVar3 = (fVar3 + 750f);
	}
	Var4 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_8, true) };
	if (__LIB_0__::func_490(Var1, 0f, 0f, 0f, 1056964608, 0))
	{
		Var5 = { Var0 };
	}
	else
	{
		Var5 = { MISC::GET_CLOSEST_POINT_ON_LINE(Var4, Var1, Var0, true) };
	}
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var5, Var4, true);
	bVar7 = fVar6 >= fVar2;
	bVar8 = fVar6 >= fVar3;
	if (Local_45.f_0 == 1)
	{
		if (MISC::ABSF((Var5.f_2 - Var4.f_2)) > 15f)
		{
			bVar7 = true;
		}
	}
	if (bVar8)
	{
		__LIB_1__::func_31(&iLocal_1917);
		uParam0->f_1 = 0;
		HUD::CLEAR_PRINTS();
		__LIB_38__::func_945(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		__LIB_1__::func_214(&(Local_45.f_119), 0, 0, 1, 1);
		__LIB_0__::func_990(&(Local_45.f_119), "IB_RETRY" /* GXT: Retry */, 2, 201, 1, 1, 0);
		__LIB_0__::func_990(&(Local_45.f_119), "FE_HLP16" /* GXT: Exit */, 2, 202, 1, 1, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
		sLocal_1915 = "SPR_HELP_FAIL";
	}
	else if (bVar7)
	{
		if (fVar6 <= (fVar3 - 15f))
		{
			__LIB_0__::func_151("SPR_HELP_RESET", -1);
		}
		if (fVar6 <= (fVar3 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_1928, 4);
		}
	}
	else
	{
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if (__LIB_1__::func_490(iLocal_1928, 4))
		{
			__LIB_38__::func_800(&iLocal_1928, 4);
		}
	}
}

void func_74()//Position - 0x3C44
{
	if (iLocal_1652 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1682))
		{
			if (__LIB_2__::func_572(&iLocal_1682) <= 2.5f)
			{
				iLocal_1718 = "GATEMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1652 = 0;
			}
		}
	}
	if (iLocal_1653 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1688))
		{
			if (__LIB_2__::func_572(&iLocal_1688) <= 2.5f)
			{
				iLocal_1718 = "GATEINNER";
				fLocal_1719 = 1f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1653 = 0;
			}
		}
	}
	if (iLocal_1654 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1685))
		{
			if (__LIB_2__::func_572(&iLocal_1685) <= 2.5f)
			{
				iLocal_1718 = "GATEOUTTER";
				fLocal_1719 = 0f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1654 = 0;
			}
		}
	}
	if (iLocal_1655 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1697))
		{
			if (__LIB_2__::func_572(&iLocal_1697) <= 2.5f)
			{
				iLocal_1718 = "GATEKNIFEINNER";
				fLocal_1719 = 2.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1655 = 0;
			}
		}
	}
	if (iLocal_1656 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1700))
		{
			if (__LIB_2__::func_572(&iLocal_1700) <= 2.5f)
			{
				iLocal_1718 = "GATEINVERTEDIN";
				fLocal_1719 = 3f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1656 = 0;
			}
		}
	}
	if (iLocal_1657 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1691))
		{
			if (__LIB_2__::func_572(&iLocal_1691) <= 2.5f)
			{
				iLocal_1718 = "GATEKNIFEOUTTER";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1657 = 0;
			}
		}
	}
	if (iLocal_1658 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1694))
		{
			if (__LIB_2__::func_572(&iLocal_1694) <= 2.5f)
			{
				iLocal_1718 = "GATEINVERTEDOUT";
				fLocal_1719 = 2f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1658 = 0;
			}
		}
	}
	if (iLocal_1659 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1670))
		{
			if (__LIB_2__::func_572(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFT";
				fLocal_1719 = 4f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1659 = 0;
			}
		}
	}
	if (iLocal_1660 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1670))
		{
			if (__LIB_2__::func_572(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFTHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1660 = 0;
			}
		}
	}
	if (iLocal_1661 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1670))
		{
			if (__LIB_2__::func_572(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFELEFTMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1661 = 0;
			}
		}
	}
	if (iLocal_1662 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1670))
		{
			if (__LIB_2__::func_572(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHT";
				fLocal_1719 = 4f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1662 = 0;
			}
		}
	}
	if (iLocal_1663 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1670))
		{
			if (__LIB_2__::func_572(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHTHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1663 = 0;
			}
		}
	}
	if (iLocal_1664 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1670))
		{
			if (__LIB_2__::func_572(&iLocal_1670) <= 2.5f)
			{
				iLocal_1718 = "STUNTKNIFERIGHTMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1664 = 0;
			}
		}
	}
	if (iLocal_1665 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1673))
		{
			if (__LIB_2__::func_572(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTED";
				fLocal_1719 = 4f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1665 = 0;
			}
		}
	}
	if (iLocal_1666 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1673))
		{
			if (__LIB_2__::func_572(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTEDHIT";
				fLocal_1719 = 1.5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1666 = 0;
			}
		}
	}
	if (iLocal_1667 == 1)
	{
		if (__LIB_1__::func_13(&iLocal_1673))
		{
			if (__LIB_2__::func_572(&iLocal_1673) <= 2.5f)
			{
				iLocal_1718 = "STUNTINVERTEDMISS";
				fLocal_1719 = 5f;
				iLocal_1720 = 1;
			}
			else
			{
				iLocal_1718 = 0;
				fLocal_1719 = -1f;
				iLocal_1720 = 1;
				iLocal_1667 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)//Position - 0x4091
{
	float fVar0;
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_8, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_9, false))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, false))
			{
				fVar0 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iParam1 /*189*/].f_9);
				if (uParam0->f_358[0 /*189*/].f_11 == uParam0->f_358[iParam1 /*189*/].f_11)
				{
				}
				else if (uParam0->f_358[iParam1 /*189*/].f_11 > uParam0->f_358[0 /*189*/].f_11)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_358[iParam1 /*189*/].f_9, -1, false))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, int iParam5)//Position - 0x41AB
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (Local_45.f_0 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2, false))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iParam2, Param3, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_45.f_0 == 2)
		{
			uParam4 = uParam4;
			func_77(uParam0, Param3, iParam5);
		}
	}
}

void func_77(var uParam0, struct<3> Param1, var uParam2)//Position - 0x4202
{
	uParam0->f_12 = uParam0->f_12;
	Param1 = { Param1 };
	uParam2 = uParam2;
}

void func_78(var uParam0, int iParam1)//Position - 0x421E
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_81(&(uParam0->f_27[iParam1 /*10*/].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_27[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)//Position - 0x4292
{
	__LIB_40__::func_35(&(uParam0->f_6));
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x42BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_40__::func_35(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_1916)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		__LIB_21__::func_959(__LIB_19__::func_206(iVar3), &iVar0, &iVar1, &iVar2, uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam1, iVar0, iVar1, iVar2, *uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam1, iVar0, iVar1, iVar2, *uParam2);
	}
}

void func_82(var uParam0)//Position - 0x432A
{
	__LIB_13__::func_808(&(uParam0->f_5));
}

int func_84(int iParam0)//Position - 0x4352
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)//Position - 0x43A8
{
	if (bParam1)
	{
		if (Local_45.f_0 == 0)
		{
			if (__LIB_1__::func_13(&iLocal_1682))
			{
				__LIB_38__::func_914(&iLocal_1682, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1676))
			{
				__LIB_38__::func_914(&iLocal_1676, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1670))
			{
				__LIB_38__::func_914(&iLocal_1670, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1679))
			{
				__LIB_38__::func_914(&iLocal_1679, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1673))
			{
				__LIB_38__::func_914(&iLocal_1673, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1685))
			{
				__LIB_38__::func_914(&iLocal_1685, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1688))
			{
				__LIB_38__::func_914(&iLocal_1688, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1691))
			{
				__LIB_38__::func_914(&iLocal_1691, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1694))
			{
				__LIB_38__::func_914(&iLocal_1694, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1697))
			{
				__LIB_38__::func_914(&iLocal_1697, 3f);
			}
			if (__LIB_1__::func_13(&iLocal_1700))
			{
				__LIB_38__::func_914(&iLocal_1700, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1652 = 1;
					__LIB_1__::func_31(&iLocal_1682);
					break;
				case 1:
					iLocal_1653 = 1;
					__LIB_1__::func_31(&iLocal_1688);
					break;
				case 2:
					iLocal_1654 = 1;
					__LIB_1__::func_31(&iLocal_1685);
					break;
				case 3:
					iLocal_1655 = 1;
					__LIB_1__::func_31(&iLocal_1697);
					break;
				case 4:
					iLocal_1656 = 1;
					__LIB_1__::func_31(&iLocal_1700);
					break;
				case 5:
					iLocal_1657 = 1;
					__LIB_1__::func_31(&iLocal_1691);
					break;
				case 6:
					iLocal_1658 = 1;
					__LIB_1__::func_31(&iLocal_1694);
					break;
				case 8:
					iLocal_1659 = 1;
					__LIB_1__::func_31(&iLocal_1670);
					break;
				case 9:
					iLocal_1660 = 1;
					__LIB_1__::func_31(&iLocal_1679);
					break;
				case 10:
					iLocal_1661 = 1;
					__LIB_1__::func_31(&iLocal_1682);
					break;
				case 11:
					iLocal_1662 = 1;
					__LIB_1__::func_31(&iLocal_1670);
					break;
				case 12:
					iLocal_1663 = 1;
					__LIB_1__::func_31(&iLocal_1679);
					break;
				case 13:
					iLocal_1664 = 1;
					__LIB_1__::func_31(&iLocal_1682);
					break;
				case 14:
					iLocal_1665 = 1;
					__LIB_1__::func_31(&iLocal_1673);
					break;
				case 15:
					iLocal_1666 = 1;
					__LIB_1__::func_31(&iLocal_1679);
					break;
				case 16:
					iLocal_1667 = 1;
					__LIB_1__::func_31(&iLocal_1682);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x45D0
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		case 0:
			break;
		case 1:
			func_87(uParam0, 1f);
			break;
		case 2:
			func_87(uParam0, 0f);
			break;
		case 5:
			func_87(uParam0, 1.5f);
			break;
		case 6:
			func_87(uParam0, 2f);
			break;
		case 3:
			func_87(uParam0, 2.5f);
			break;
		case 4:
			func_87(uParam0, 3f);
			break;
		case 8:
			func_87(uParam0, 4f);
			break;
		case 9:
			func_88(uParam0, 1.5f);
			break;
		case 10:
			func_88(uParam0, 5f);
			break;
		case 11:
			func_87(uParam0, 4f);
			break;
		case 12:
			func_88(uParam0, 1.5f);
			break;
		case 13:
			func_88(uParam0, 5f);
			break;
		case 14:
			func_87(uParam0, 4f);
			break;
		case 15:
			func_88(uParam0, 1.5f);
			break;
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)//Position - 0x46FC
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)//Position - 0x4717
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_90(var uParam0, var uParam1)//Position - 0x4756
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	if (uParam0->f_6 != 0)
	{
		iVar4 = __LIB_1__::func_577();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		__LIB_21__::func_959(__LIB_19__::func_206(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_6, iVar0, iVar1, iVar2, __LIB_38__::func_798(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = __LIB_1__::func_577();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		__LIB_21__::func_959(__LIB_19__::func_206(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_6, iVar0, iVar1, iVar2, __LIB_38__::func_798(*uParam1, 25, 200));
	}
}

int func_93(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4896
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
	{
		return -1;
	}
	iVar4 = func_100(uParam1, iParam3);
	if (Local_45.f_0 == 0)
	{
		if (iVar4 != 17)
		{
			if (iVar4 == 1)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!__LIB_1__::func_490(iLocal_1949, 262144))
						{
							func_98("Gate_PK", &iLocal_1948);
							iLocal_1949 = 0;
							__LIB_38__::func_899(&iLocal_1949, 262144);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 524288))
						{
							func_98("Con_PK", &iLocal_1948);
							__LIB_38__::func_899(&iLocal_1949, 524288);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 1048576))
						{
							func_98("Con_PK", &iLocal_1948);
							__LIB_38__::func_899(&iLocal_1949, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1948);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 3;
						if (!__LIB_1__::func_490(iLocal_1949, 262144))
						{
							func_98("Gate_PK", &iLocal_1948);
							iLocal_1949 = 0;
							__LIB_38__::func_899(&iLocal_1949, 262144);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 524288))
						{
							func_98("Con_PK", &iLocal_1948);
							__LIB_38__::func_899(&iLocal_1949, 524288);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 1048576))
						{
							func_98("Con_PK", &iLocal_1948);
							__LIB_38__::func_899(&iLocal_1949, 1048576);
							return iVar4;
						}
						else
						{
							func_98("Con_PK", &iLocal_1948);
							return iVar4;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 9;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 4;
							if (!__LIB_1__::func_490(iLocal_1949, 32768))
							{
								func_98("Gate_PI", &iLocal_1947);
								iLocal_1949 = 0;
								__LIB_38__::func_899(&iLocal_1949, 32768);
								return iVar4;
							}
							else if (!__LIB_1__::func_490(iLocal_1949, 65536))
							{
								func_98("Con_PI", &iLocal_1947);
								__LIB_38__::func_899(&iLocal_1949, 65536);
								return iVar4;
							}
							else if (!__LIB_1__::func_490(iLocal_1949, 131072))
							{
								func_98("Con_PI", &iLocal_1947);
								__LIB_38__::func_899(&iLocal_1949, 131072);
								return iVar4;
							}
							else
							{
								func_98("Con_PI", &iLocal_1947);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 1;
						if (!__LIB_1__::func_490(iLocal_1949, 4096))
						{
							func_98("Get_Perf", &iLocal_1944);
							iLocal_1949 = 0;
							__LIB_38__::func_899(&iLocal_1949, 4096);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 8192))
						{
							func_98("Con_Perf", &iLocal_1944);
							__LIB_38__::func_899(&iLocal_1949, 8192);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 16384))
						{
							func_98("Con_Perf", &iLocal_1944);
							__LIB_38__::func_899(&iLocal_1949, 16384);
							return iVar4;
						}
						else
						{
							func_98("Con_Perf", &iLocal_1944);
							return iVar4;
						}
					}
				}
			}
			if (iVar4 == 2)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 8;
							return iVar4;
						}
						if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!__LIB_1__::func_490(iLocal_1949, 64))
						{
							func_98("Gate_Kni", &iLocal_1946);
							iLocal_1949 = 0;
							__LIB_38__::func_899(&iLocal_1949, 64);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 128))
						{
							func_98("Con_Kni", &iLocal_1946);
							__LIB_38__::func_899(&iLocal_1949, 128);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 256))
						{
							func_98("Con_Kni", &iLocal_1946);
							__LIB_38__::func_899(&iLocal_1949, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1946);
							return iVar4;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar4 = 11;
							return iVar4;
						}
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 5;
						if (!__LIB_1__::func_490(iLocal_1949, 64))
						{
							func_98("Gate_Kni", &iLocal_1946);
							iLocal_1949 = 0;
							__LIB_38__::func_899(&iLocal_1949, 64);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 128))
						{
							func_98("Con_Kni", &iLocal_1946);
							__LIB_38__::func_899(&iLocal_1949, 128);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 256))
						{
							func_98("Con_Kni", &iLocal_1946);
							__LIB_38__::func_899(&iLocal_1949, 256);
							return iVar4;
						}
						else
						{
							func_98("Con_Kni", &iLocal_1946);
							return iVar4;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar1, &Var2, &uVar3);
					if (Var2.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar4 = 14;
								return iVar4;
							}
							if (uParam1->f_8 == 2)
							{
								iVar4 = 8;
								return iVar4;
							}
							if (uParam1->f_8 == 3)
							{
								iVar4 = 12;
								return iVar4;
							}
						}
						else
						{
							iVar4 = 6;
							if (!__LIB_1__::func_490(iLocal_1949, 512))
							{
								func_98("Gate_Inv", &iLocal_1945);
								iLocal_1949 = 0;
								__LIB_38__::func_899(&iLocal_1949, 512);
								return iVar4;
							}
							else if (!__LIB_1__::func_490(iLocal_1949, 1024))
							{
								func_98("Con_Inv", &iLocal_1945);
								__LIB_38__::func_899(&iLocal_1949, 1024);
								return iVar4;
							}
							else if (!__LIB_1__::func_490(iLocal_1949, 2048))
							{
								func_98("Con_Inv", &iLocal_1945);
								__LIB_38__::func_899(&iLocal_1949, 2048);
								return iVar4;
							}
							else
							{
								func_98("Con_Inv", &iLocal_1945);
								return iVar4;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar4 = 9;
							return iVar4;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar4 = 12;
							return iVar4;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar4 = 15;
							return iVar4;
						}
					}
					else
					{
						iVar4 = 2;
						if (!__LIB_1__::func_490(iLocal_1949, 8))
						{
							func_98("Gate_Hit", &iLocal_1943);
							iLocal_1949 = 0;
							__LIB_38__::func_899(&iLocal_1949, 8);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 16))
						{
							func_98("Con_Hit", &iLocal_1943);
							__LIB_38__::func_899(&iLocal_1949, 16);
							return iVar4;
						}
						else if (!__LIB_1__::func_490(iLocal_1949, 32))
						{
							func_98("Con_Hit", &iLocal_1943);
							__LIB_38__::func_899(&iLocal_1949, 32);
							return iVar4;
						}
						else
						{
							func_98("Con_Hit", &iLocal_1943);
							return iVar4;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar4 = 10;
						return iVar4;
					}
					if (uParam1->f_8 == 3)
					{
						iVar4 = 13;
						return iVar4;
					}
					if (uParam1->f_8 == 1)
					{
						iVar4 = 16;
						return iVar4;
					}
				}
				else
				{
					iVar4 = 7;
					if (!__LIB_1__::func_490(iLocal_1949, 1))
					{
						func_98("Gate_Miss", &iLocal_1942);
						iLocal_1949 = 0;
						__LIB_38__::func_899(&iLocal_1949, 1);
						return iVar4;
					}
					else if (!__LIB_1__::func_490(iLocal_1949, 2))
					{
						func_98("Con_Miss", &iLocal_1942);
						__LIB_38__::func_899(&iLocal_1949, 2);
						return iVar4;
					}
					else if (!__LIB_1__::func_490(iLocal_1949, 4))
					{
						func_98("Con_Miss", &iLocal_1942);
						__LIB_38__::func_899(&iLocal_1949, 4);
						return iVar4;
					}
					else
					{
						func_98("Con_Miss", &iLocal_1942);
						return iVar4;
					}
				}
			}
			return iVar4;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar4 = 10;
					return iVar4;
				}
				if (uParam1->f_8 == 3)
				{
					iVar4 = 13;
					return iVar4;
				}
				if (uParam1->f_8 == 1)
				{
					iVar4 = 16;
					return iVar4;
				}
			}
			else
			{
				iVar4 = 7;
				if (!__LIB_1__::func_490(iLocal_1949, 1))
				{
					func_98("Gate_Miss", &iLocal_1942);
					iLocal_1949 = 0;
					__LIB_38__::func_899(&iLocal_1949, 1);
					return iVar4;
				}
				else if (!__LIB_1__::func_490(iLocal_1949, 2))
				{
					func_98("Con_Miss", &iLocal_1942);
					__LIB_38__::func_899(&iLocal_1949, 2);
					return iVar4;
				}
				else if (!__LIB_1__::func_490(iLocal_1949, 4))
				{
					func_98("Con_Miss", &iLocal_1942);
					__LIB_38__::func_899(&iLocal_1949, 4);
					return iVar4;
				}
				else
				{
					func_98("Con_Miss", &iLocal_1942);
					return iVar4;
				}
			}
			return iVar4;
		}
	}
	else if (iVar4 != 17)
	{
		return iVar4;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)//Position - 0x51FB
{
	float fVar0;
	struct<3> Var1;
	if (!__LIB_0__::func_490(*uParam0, *uParam1, 1056964608, 0))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (ENTITY::IS_ENTITY_AT_COORD(iParam2, *uParam0, fVar0, fVar0, fVar0, false, true, 0))
		{
			Var1 = { __LIB_0__::func_79(*uParam1 - *uParam0) };
			if ((__LIB_0__::func_158(ENTITY::GET_ENTITY_COORDS(iParam2, true), Var1) - __LIB_0__::func_158(*uParam0, Var1)) > 15f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1938, "HUD_MINI_GAME_SOUNDSET", true);
				return 1;
			}
		}
	}
	return 0;
}

bool func_97(int iParam0)//Position - 0x52DE
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)//Position - 0x531D
{
	char cVar0[16];
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!__LIB_1__::func_490(*uParam1, 1))
	{
		if (!iLocal_1651)
		{
			iLocal_1651 = 1;
			__LIB_38__::func_899(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1651 = 0;
			if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
			{
				__LIB_0__::func_229("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (__LIB_1__::func_490(*uParam1, 1))
	{
		if (!__LIB_1__::func_490(*uParam1, 2))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				__LIB_38__::func_899(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					__LIB_0__::func_229("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (__LIB_1__::func_490(*uParam1, 2))
	{
		if (!__LIB_1__::func_490(*uParam1, 4))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				__LIB_38__::func_899(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					__LIB_0__::func_229("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (__LIB_1__::func_490(*uParam1, 4))
	{
		if (!__LIB_1__::func_490(*uParam1, 8))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				__LIB_38__::func_899(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					__LIB_0__::func_229("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (__LIB_1__::func_490(*uParam1, 8))
	{
		if (!__LIB_1__::func_490(*uParam1, 16))
		{
			if (!iLocal_1651)
			{
				iLocal_1651 = 1;
				__LIB_38__::func_899(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1651 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					__LIB_0__::func_229("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)//Position - 0x54A8
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var1, &Var2, &uVar3);
	if (MISC::ABSF(Var2.f_2) > 0.342f)
	{
		return 0;
	}
	return Var1.f_2 > 0f;
}

int func_100(var uParam0, int iParam1)//Position - 0x54E7
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	Var0 = { *uParam0 };
	ENTITY::GET_ENTITY_MATRIX(iParam1, &Var4, &Var2, &Var3, &Var1);
	Var5 = { Var0 - Var1 };
	fVar6 = MISC::ABSF(__LIB_0__::func_158(Var5, Var4));
	fVar7 = MISC::ABSF(__LIB_0__::func_158(Var5, Var3));
	fVar8 = MISC::ABSF(__LIB_0__::func_158(Var5, Var2));
	fVar9 = ((fVar7 * fVar7) + (fVar8 * fVar8));
	if (fVar6 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar9 > 900f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_38__::func_940(&uLocal_1902, 0);
			}
			return 17;
		}
		if (fVar9 > 110f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_38__::func_940(&uLocal_1902, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1937, "HUD_MINI_GAME_SOUNDSET", true);
			return 2;
		}
		else
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_38__::func_940(&uLocal_1902, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_1937, "HUD_MINI_GAME_SOUNDSET", true);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)//Position - 0x55DA
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar3;
	float fVar4;
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1 /*189*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8, false))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1 /*189*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1 /*189*/].f_11)
				{
					fVar3 = __LIB_2__::func_485(Var2.f_8, uParam0->f_27[Var2.f_11 /*10*/], 1);
					fVar4 = __LIB_2__::func_485(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], 1);
					if (fVar3 < fVar4)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1 /*189*/].f_12 = iVar0;
}

void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5713
{
	if (__LIB_37__::func_48(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		__LIB_0__::func_151(sParam0, -1);
	}
	else
	{
		__LIB_0__::func_190(sParam0);
	}
	__LIB_0__::func_964(iParam1, iParam2);
}

int func_105(var uParam0, var uParam1, bool bParam2)//Position - 0x575E
{
	int iVar0;
	switch (uParam1->f_23)
	{
		case 0:
			func_188(uParam0);
			func_263();
			__LIB_1__::func_214(&(Local_45.f_119), 0, 0, 1, 1);
			__LIB_0__::func_990(&(Local_45.f_119), "IB_RETRY" /* GXT: Retry */, 2, 201, 1, 1, 0);
			__LIB_0__::func_990(&(Local_45.f_119), "FE_HLP16" /* GXT: Exit */, 2, 202, 1, 1, 0);
			__LIB_38__::func_945(1);
			AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		case 1:
			if (func_182(&(Local_45.f_321), &(Local_45.f_327), &(uParam0->f_17), cLocal_1914, sLocal_1915, uParam0, 78))
			{
				iLocal_2029 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (__LIB_0__::func_501("SPR_HELP_DAMG", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				__LIB_15__::func_242(&(Local_45.f_321), 1);
				if (*uParam0)
				{
					__LIB_38__::func_995(0, 0);
					__LIB_40__::func_56(0, 0);
					__LIB_40__::func_55();
					if (__LIB_0__::func_501("SPR_RETR_DES", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
					}
					__LIB_38__::func_945(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					__LIB_38__::func_995(0, 0);
					__LIB_40__::func_56(0, 0);
					__LIB_40__::func_55();
					__LIB_38__::func_914(&iLocal_1917, 10f);
					__LIB_38__::func_945(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		case 2:
			__LIB_2__::func_439(&(Local_45.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
			{
				__LIB_38__::func_995(0, 0);
				__LIB_40__::func_56(0, 0);
				__LIB_40__::func_55();
				iLocal_2034 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
				if (__LIB_0__::func_501("SPR_RETR_DES", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
				}
				__LIB_38__::func_945(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				__LIB_38__::func_995(0, 0);
				__LIB_40__::func_56(0, 0);
				__LIB_40__::func_55();
				iLocal_2034 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
				__LIB_38__::func_914(&iLocal_1917, 10f);
				__LIB_38__::func_945(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11 /*10*/] };
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_1__::func_214(&(Local_45.f_119), 0, 0, 1, 1);
					__LIB_0__::func_990(&(Local_45.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					__LIB_0__::func_990(&(Local_45.f_119), "IB_NO" /* GXT: No */, 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (__LIB_2__::func_572(&iLocal_1917) <= 10f)
			{
				if (bParam2)
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
					__LIB_2__::func_439(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						*uParam0 = 1;
						iLocal_2034 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
					{
						*uParam0 = 0;
						__LIB_38__::func_914(&iLocal_1917, 10f);
						iLocal_2034 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2034, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", true);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				sLocal_1915 = "SPR_RETR_DES";
				__LIB_15__::func_242(&(Local_45.f_321), 1);
				uParam1->f_23 = 14;
			}
			break;
		case 6:
			if (__LIB_40__::func_42(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				uParam1->f_23 = 8;
			}
			break;
		case 7:
			if (__LIB_1__::func_13(&(uParam0->f_3)))
			{
				__LIB_1__::func_377(&(uParam0->f_3));
			}
			if (__LIB_42__::func_811())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_188(uParam0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
					{
						ENTITY::SET_ENTITY_VELOCITY(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						ENTITY::SET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9, ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_358[0 /*189*/].f_9), 0);
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		case 8:
			if (func_143(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						if (Local_45.f_0 == 0)
						{
							PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_141(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_140(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				__LIB_1__::func_31(&iLocal_2025);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		case 10:
			__LIB_38__::func_995(0, 0);
			__LIB_40__::func_56(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_45.f_3, Local_45.f_6, 0f);
			SYSTEM::SETTIMERA(0);
			uParam1->f_23 = 12;
			break;
		case 11:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				uParam0->f_1 = 1;
				__LIB_1__::func_31(&iLocal_2025);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (__LIB_40__::func_49(500))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9, false))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_45.f_0 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (__LIB_1__::func_13(&iLocal_2025))
					{
						if (__LIB_2__::func_559(&iLocal_2025) >= 3f)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					else
					{
						__LIB_15__::func_248(&iLocal_2025);
					}
				}
			}
			break;
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, false))
				{
					if (func_106(uParam1))
					{
						__LIB_1__::func_31(&iLocal_1917);
						sLocal_1915 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		case 14:
			func_188(uParam0);
			__LIB_1__::func_377(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)//Position - 0x5E2E
{
	if (uParam0->f_22 != 0)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 3f || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_9))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_9) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 3, 10000))
							{
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

void func_108(var uParam0, float fParam1, bool bParam2)//Position - 0x5F36
{
	struct<3> Var0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_22))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_9, 2) };
			__LIB_38__::func_948(uParam0->f_9, fParam1, bParam2, Var0.f_0, 0);
		}
	}
}

int func_110(var uParam0, bool bParam1)//Position - 0x60A4
{
	char cVar0[16];
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, false))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, true);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
			else
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, true, false, false, true);
				}
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, true);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000, 0);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, uParam0->f_16, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam0->f_19);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 5f);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = VEHICLE::CREATE_VEHICLE(joaat("stunt"), uParam0->f_16, uParam0->f_19, true, true, false);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
		}
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_9, true);
		__LIB_1__::func_569(uParam0->f_9, &(Local_45.f_243), 0, 1);
	}
	AUDIO::ENABLE_STALL_WARNING_SOUNDS(uParam0->f_9, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, false);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(uParam0->f_9, false);
		Local_45.f_1 = uParam0->f_9;
	}
	return 1;
}

void func_140(struct<3> Param0, int iParam1, struct<3> Param2, bool bParam3)//Position - 0x767E
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	struct<3> Var6;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (bParam3 && Local_45.f_10 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam1, 1705.0386f, 3251.13f, 40.0016f, true, false, false, true);
		}
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		STREAMING::REQUEST_COLLISION_AT_COORD(Var6);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &fVar5, false, false);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
		if (bParam3)
		{
			Var4 = { Param0 - Param2 };
		}
		else
		{
			Var4 = { Param2 - Var3 };
		}
		fVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_1);
		fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var4.f_0, Var4.f_2) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - MISC::ABSF(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - MISC::ABSF(fVar1));
		}
		if (MISC::ABSF((Var6.f_2 - fVar5)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var6.f_2 = (fVar5 + 25f);
			ENTITY::SET_ENTITY_COORDS(iParam1, Var6, true, false, false, true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		Var2 = { ENTITY::GET_ENTITY_ROTATION(iParam1, 2) };
		Var2.f_0 = fVar1;
		Var2.f_2 = fVar0;
		ENTITY::SET_ENTITY_ROTATION(iParam1, Var2, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, false);
		STREAMING::NEW_LOAD_SCENE_START(Var6, ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1), 500f, 0);
	}
}

void func_141(var uParam0, int iParam1, bool bParam2)//Position - 0x7815
{
	func_142(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_142(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7834
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_8, false))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_9, false))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	fVar1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1);
	fVar2 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 0f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 25f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar2 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], fVar1, fVar2);
}

int func_143(var uParam0, bool bParam1)//Position - 0x7940
{
	if (!func_110(uParam0, bParam1) || !func_144(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_144(var uParam0)//Position - 0x7966
{
	char cVar0[16];
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000, 0);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
			{
				PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, true, false);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_182(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x8713
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", true);
			__LIB_15__::func_248(&(uParam0->f_1));
			__LIB_40__::func_55();
			func_187(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			break;
		case 1:
			if (__LIB_42__::func_811() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!__LIB_1__::func_490(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, -1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", true);
					__LIB_38__::func_899(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!__LIB_1__::func_490(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", true);
					__LIB_38__::func_899(&(uParam0->f_4), 2);
				}
				func_184(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		case 2:
			if (func_184(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				__LIB_38__::func_995(0, 1);
				__LIB_40__::func_56(0, 1);
				__LIB_40__::func_55();
				if (*uParam5)
				{
					MISC::IGNORE_NEXT_RESTART(true);
				}
				else if (!uParam0->f_5)
				{
					__LIB_15__::func_241(0);
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
				__LIB_38__::func_995(0, 1);
				__LIB_40__::func_56(0, 1);
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

int func_184(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x891A
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
			if (__LIB_0__::func_703(iParam5, 4))
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
			__LIB_0__::func_610(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (__LIB_0__::func_703(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!__LIB_0__::func_703(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
			}
			__LIB_1__::func_214(&(uParam1->f_10), 0, 1, 1, 1);
			__LIB_0__::func_990(&(uParam1->f_10), "IB_RETRY" /* GXT: Retry */, 2, 201, 1, 1, 0);
			__LIB_0__::func_990(&(uParam1->f_10), "FE_HLP16" /* GXT: Exit */, 2, 202, 1, 1, 0);
			if (__LIB_0__::func_703(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", true);
			}
			if (__LIB_0__::func_703(iParam5, 8))
			{
				switch (__LIB_0__::func_683())
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
			if (!__LIB_1__::func_13(&(uParam1->f_1)))
			{
				__LIB_1__::func_362(&(uParam1->f_1));
			}
			if (__LIB_0__::func_703(iParam5, 2))
			{
				if (!__LIB_1__::func_13(&(uParam1->f_4)))
				{
					__LIB_1__::func_362(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (__LIB_0__::func_703(iParam5, 32))
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
			func_186(uParam0, 0, 0);
			if (!__LIB_0__::func_703(iParam5, 16) && (__LIB_2__::func_572(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				__LIB_2__::func_439(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::SET_MOUSE_CURSOR_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__::func_703(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_2__::func_540(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__::func_703(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_2__::func_540(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (__LIB_0__::func_703(iParam5, 2))
			{
				if (__LIB_2__::func_572(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					if (!__LIB_0__::func_703(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
					}
					__LIB_2__::func_540(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		case 3:
			func_186(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (__LIB_0__::func_703(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			__LIB_1__::func_31(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		case 4:
			if (__LIB_2__::func_572(&(uParam1->f_4)) <= 0.1f)
			{
				func_186(uParam0, 0, 0);
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

int func_186(var uParam0, bool bParam1, bool bParam2)//Position - 0x8D20
{
	if (!__LIB_1__::func_13(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (__LIB_2__::func_572(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		__LIB_1__::func_377(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_187(var uParam0, float fParam1, float fParam2)//Position - 0x8DB2
{
	if (__LIB_1__::func_13(&(uParam0->f_1)))
	{
		__LIB_1__::func_377(&(uParam0->f_1));
	}
	if (__LIB_1__::func_13(&(uParam0->f_4)))
	{
		__LIB_1__::func_377(&(uParam0->f_4));
	}
	__LIB_2__::func_540(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_188(var uParam0)//Position - 0x8E02
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_189(int iParam0, bool bParam1)//Position - 0x8E27
{
	switch (iLocal_1650)
	{
		case 0:
			func_25();
			func_206();
			func_202();
			iLocal_1650 = 1;
			break;
		case 1:
			if (func_201())
			{
				iLocal_1650 = 2;
			}
			break;
		case 2:
			func_190(iParam0);
			break;
		case 3:
			if (bParam1)
			{
				iLocal_1650 = 0;
			}
			break;
	}
}

void func_190(int iParam0)//Position - 0x8E85
{
	switch (Local_45.f_10)
	{
		case 3:
			func_200(iParam0);
			func_199(iParam0);
			break;
		case 0:
			func_198(iParam0);
			func_197(iParam0);
			break;
		case 1:
			func_196(iParam0);
			func_194(iParam0);
			break;
		case 2:
			func_193(iParam0);
			func_192(iParam0);
			break;
		case 4:
			func_191(iParam0);
			break;
	}
}

void func_191(int iParam0)//Position - 0x8EF9
{
	if (iParam0 == 5)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 1))
		{
			__LIB_38__::func_899(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 2))
		{
			__LIB_38__::func_899(&uLocal_1726, 2);
		}
	}
}

void func_192(int iParam0)//Position - 0x8F36
{
	if (iParam0 >= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]) && !__LIB_1__::func_490(uLocal_1716, 1))
		{
			iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("hauler"), -449.6041f, -2271.6929f, 6.6086f, 267.5199f, true, true, false);
			iLocal_1714[1] = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -449.6041f, -2271.6929f, 6.6086f, 267.5199f, true, true, false);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_1714[0], iLocal_1714[1], 1f);
			iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("S_M_M_DockWork_01"), -1, true, true);
			__LIB_38__::func_899(&uLocal_1716, 1);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
				{
				}
				else
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_1715[0], iLocal_1714[0], "SPR_Fluff_01", 786469, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[0]), false, 2f);
				}
			}
		}
	}
}

void func_193(int iParam0)//Position - 0x9052
{
	if (iParam0 == 4)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 1))
		{
			__LIB_38__::func_899(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 2))
		{
			__LIB_38__::func_899(&uLocal_1726, 2);
		}
	}
}

void func_194(int iParam0)//Position - 0x908F
{
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]))
		{
			if (!__LIB_1__::func_490(uLocal_1716, 1))
			{
				if (func_195(&iLocal_1713))
				{
					iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2586.9011f, 386.4225f, 208.0505f, 349.0836f, true, true, false);
					__LIB_38__::func_899(&uLocal_1716, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1715[0]))
			{
				if (!__LIB_1__::func_490(uLocal_1716, 2))
				{
					iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("A_M_Y_MotoX_01"), -1, true, true);
					__LIB_38__::func_899(&uLocal_1716, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1715[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[0], -2530.8728f, 608.701f, 238.9111f, 3f, 3f, 3f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1715[0], iLocal_1714[0], -2530.8728f, 608.701f, 238.9111f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[1]))
		{
			if (!__LIB_1__::func_490(uLocal_1717, 1))
			{
				if (func_195(&iLocal_1713))
				{
					iLocal_1714[1] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2582.9304f, 384.918f, 208.5764f, 336.8248f, true, true, false);
					__LIB_38__::func_899(&uLocal_1717, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1714[1]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1715[1]))
			{
				if (!__LIB_1__::func_490(uLocal_1717, 2))
				{
					iLocal_1715[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[1], 4, joaat("A_M_Y_MotoX_01"), -1, true, true);
					__LIB_38__::func_899(&uLocal_1717, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_1715[1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[1], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[1], false))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[1], -2527.7124f, 609.6833f, 239.2568f, 3f, 3f, 3f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[1], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1715[1], iLocal_1714[1], -2527.7124f, 609.6833f, 239.2568f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_195(int iParam0)//Position - 0x9333
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_196(int iParam0)//Position - 0x937A
{
	if (iParam0 == 9)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 1))
		{
			__LIB_38__::func_899(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 2))
		{
			__LIB_38__::func_899(&uLocal_1726, 2);
		}
	}
}

void func_197(int iParam0)//Position - 0x93B8
{
	if (iParam0 == 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]) && !__LIB_1__::func_490(uLocal_1716, 1))
		{
			iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("jetmax"), -1429.1023f, 2602.645f, -1.0709f, 85.2614f, true, true, false);
			iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("S_M_M_DockWork_01"), -1, true, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false) && !ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[0], -1552.2812f, 2641.6094f, -0.8283f, 3f, 3f, 3f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_1715[0], iLocal_1714[0], -1552.2812f, 2641.6094f, -0.8283f, 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_1714[0]), 262144, 3f, -1f, true);
					}
				}
			}
			__LIB_38__::func_899(&uLocal_1716, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (__LIB_1__::func_490(uLocal_1716, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
			{
				PED::DELETE_PED(&(iLocal_1715[0]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1714[0]));
			}
		}
	}
}

void func_198(int iParam0)//Position - 0x94FD
{
	if (iParam0 == 7)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 1))
		{
			__LIB_38__::func_899(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 2))
		{
			__LIB_38__::func_899(&uLocal_1726, 2);
		}
	}
}

void func_199(int iParam0)//Position - 0x953A
{
	if (!__LIB_1__::func_490(uLocal_1716, 1))
	{
		if (iParam0 < 3)
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(-943.8105f, -3173.6924f, 12.9445f);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1714[0]))
				{
					iLocal_1714[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -943.8105f, -3173.6924f, 12.9445f, 60.537f, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1714[0], 5f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1714[0], true, true, false);
					if (Local_45.f_0 == 0)
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_1714[0]);
					}
					iLocal_1715[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1714[0], 4, joaat("S_M_M_HighSec_01"), -1, true, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_1714[0], -943.8105f, -3173.6924f, 12.9445f, 20f, 20f, 20f, false, true, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1714[0]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1714[0], 101, "SPRStuntAF", true);
						}
					}
					else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1714[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_1715[0], false))
						{
							if (!TASK::GET_SCRIPT_TASK_STATUS(iLocal_1715[0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD")) == 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_1715[0], iLocal_1714[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1714[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1714[0]);
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_1714[0]));
				__LIB_38__::func_899(&uLocal_1716, 1);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_1714[0], false))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_1714[0], true));
	}
}

void func_200(int iParam0)//Position - 0x970E
{
	if (iParam0 == 6)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 1))
		{
			__LIB_38__::func_899(&uLocal_1726, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!__LIB_1__::func_490(uLocal_1726, 2))
		{
			__LIB_38__::func_899(&uLocal_1726, 2);
		}
	}
}

int func_201()//Position - 0x974B
{
	switch (Local_45.f_10)
	{
		case 3:
			if (func_195(&iLocal_1713) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 0:
			if (func_195(&iLocal_1713))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 1:
			if (func_195(&iLocal_1713))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 2:
			if (func_195(&iLocal_1713) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 4:
			break;
	}
	return 1;
}

void func_202()//Position - 0x97FA
{
	switch (Local_45.f_10)
	{
		case 3:
			func_204(&iLocal_1713, joaat("jet"));
			func_204(&iLocal_1713, joaat("S_M_M_HighSec_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "SPRStuntAF");
			break;
		case 0:
			func_204(&iLocal_1713, joaat("jetmax"));
			func_204(&iLocal_1713, joaat("S_M_M_DockWork_01"));
			break;
		case 1:
			func_204(&iLocal_1713, joaat("sanchez"));
			func_204(&iLocal_1713, joaat("A_M_Y_MotoX_01"));
			break;
		case 2:
			func_204(&iLocal_1713, joaat("hauler"));
			func_204(&iLocal_1713, joaat("tanker"));
			func_204(&iLocal_1713, joaat("S_M_M_DockWork_01"));
			TASK::REQUEST_WAYPOINT_RECORDING("SPR_Fluff_01");
			break;
		case 4:
			break;
	}
	func_203(&iLocal_1713);
}

void func_203(int iParam0)//Position - 0x98C6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_204(int iParam0, int iParam1)//Position - 0x98F6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = __LIB_1__::func_299(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}

void func_206()//Position - 0x997F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_1__::func_490(uLocal_1726, iVar0))
		{
			__LIB_38__::func_800(&uLocal_1726, iVar0);
		}
		iVar0++;
	}
}

void func_210(var uParam0)//Position - 0x9AAC
{
	float fVar0;
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = SYSTEM::VDIST(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_211());
		if (!STREAMING::STREAMVOL_IS_VALID(iLocal_1936))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_211()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				iLocal_1936 = STREAMING::STREAMVOL_CREATE_FRUSTUM(func_211(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_211(), 2000f, 12, 127);
			}
		}
		else if (!SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_211()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_263();
		}
	}
}

Vector3 func_211()//Position - 0x9B5C
{
	switch (Local_45.f_10)
	{
		case 0:
			return -2591.9653f, 2483.1675f, 60.8904f;
			break;
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		case 3:
			return -1721.0487f, -2792.9478f, 75.4149f;
			break;
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_212(var uParam0)//Position - 0x9BF7
{
	if (__LIB_38__::func_913())
	{
		if (!Local_1929.f_0)
		{
			Local_1929.f_0 = 1;
			Local_1929.f_1 = 1;
		}
		else
		{
			Local_1929.f_1 = 0;
		}
	}
	else if (__LIB_40__::func_36())
	{
		if (!Local_1929.f_1 || func_243() >= 1f)
		{
			if (Local_1929.f_0)
			{
				Local_1929.f_0 = 0;
			}
		}
	}
	if (__LIB_40__::func_36())
	{
		func_242();
	}
	else
	{
		func_241();
	}
	if (Local_1929.f_0)
	{
		if (!__LIB_0__::func_86(Local_1929.f_2) && !__LIB_40__::func_52(Local_1929.f_2))
		{
			__LIB_38__::func_944(&uLocal_1902, Local_1929.f_2);
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(Local_1929.f_6))
			{
				CAM::DESTROY_CAM(Local_1929.f_6, false);
			}
			if (__LIB_40__::func_52(Local_1929.f_2))
			{
				Local_1929.f_2 = { func_213(uParam0) };
			}
			__LIB_38__::func_940(&uLocal_1902, 0);
			Local_1929.f_0 = 0;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_1929.f_6))
	{
		CAM::DESTROY_CAM(Local_1929.f_6, false);
	}
	else
	{
		if (__LIB_40__::func_52(Local_1929.f_2))
		{
			Local_1929.f_2 = { func_213(uParam0) };
		}
		__LIB_38__::func_940(&uLocal_1902, 0);
		Local_1929.f_0 = 0;
	}
}

Vector3 func_213(var uParam0)//Position - 0x9D12
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_45.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_241()//Position - 0xAC68
{
	Local_1929.f_5 = 0f;
}

void func_242()//Position - 0xAC76
{
	Local_1929.f_5 = (Local_1929.f_5 + MISC::GET_FRAME_TIME());
}

float func_243()//Position - 0xAC8D
{
	return Local_1929.f_5;
}

void func_246(struct<3> Param0)//Position - 0xACB8
{
	__LIB_38__::func_940(&uLocal_1902, 0);
	Local_1929.f_2 = { Param0 };
}

int func_249(var uParam0, bool bParam1, bool bParam2)//Position - 0xACFF
{
	PAD::STOP_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/);
	switch (iLocal_1649)
	{
		case 0:
			iLocal_194 = 0;
			Local_1898 = { func_211() };
			Local_1899 = { func_262() };
			fLocal_1900 = func_261();
			HUD::DISPLAY_RADAR(false);
			HUD::CLEAR_HELP(true);
			HUD::CLEAR_PRINTS();
			iLocal_1649 = 1;
			break;
		case 1:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (__LIB_0__::func_683() == 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 0, false);
				}
				else if (__LIB_0__::func_683() == 1)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 0, false);
				}
				else if (__LIB_0__::func_683() == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 0, false);
				}
				iLocal_1707 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1898, Local_1899, fLocal_1900, true, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (bParam2)
				{
					CAM::SHAKE_CAM(iLocal_1707, "HAND_SHAKE", 0.07f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0 /*189*/].f_9))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0 /*189*/].f_9, Local_1898.f_0, Local_1898.f_1, (Local_1898.f_2 + 15f), 4, ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, true);
				}
				CAM::POINT_CAM_AT_COORD(iLocal_1707, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				iLocal_1649 = 2;
			}
			break;
		case 2:
			CAM::STOP_CAM_POINTING(iLocal_1707);
			func_260(iLocal_1707);
			__LIB_15__::func_248(&iLocal_1703);
			iLocal_1649 = 3;
			break;
		case 3:
			if (func_259(&iLocal_1703, fLocal_1901))
			{
				__LIB_15__::func_248(&iLocal_1703);
				func_260(iLocal_1707);
				iLocal_1649 = 4;
			}
			break;
		case 4:
			if (bParam1)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0 /*189*/].f_9) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_1897 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_9, true) };
					__LIB_15__::func_248(&iLocal_1703);
				}
				func_256(iLocal_1707, Local_1897);
			}
			if (__LIB_2__::func_559(&iLocal_1703) >= 1f)
			{
				iLocal_1649 = 5;
			}
			break;
		case 5:
			__LIB_1__::func_31(&iLocal_1703);
			if (CAM::DOES_CAM_EXIST(iLocal_1706))
			{
				CAM::DESTROY_CAM(iLocal_1706, false);
			}
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
			CAM::STOP_CAM_SHAKING(iLocal_1707, false);
			Local_1898 = { CAM::GET_CAM_COORD(iLocal_1707) };
			Local_1899 = { CAM::GET_CAM_ROT(iLocal_1707, 2) };
			iLocal_1706 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_1898.f_0, Local_1898.f_1, (Local_1898.f_2 + 1000f), 90f, Local_1899.f_1, Local_1899.f_2, fLocal_1900, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_1706, iLocal_1707, 500, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
			iLocal_1649 = 6;
			break;
		case 6:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_1706) && !CAM::IS_CAM_INTERPOLATING(iLocal_1707))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_106[Local_45.f_10] - Local_45.f_112[Local_45.f_10]) / 2f) + Local_45.f_112[Local_45.f_10]))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", true);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", true);
				}
				else
				{
					__LIB_1__::func_38(1);
				}
				iLocal_1649 = 7;
			}
			break;
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			func_253(uParam0);
			__LIB_15__::func_242(&(Local_45.f_321), 1);
			__LIB_1__::func_31(&iLocal_1703);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
			{
				sLocal_1892 = AUDIO::GET_PLAYER_RADIO_STATION_NAME();
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0 /*189*/].f_9, false);
			}
			iLocal_1649 = 8;
			break;
		case 8:
			if (func_252(uParam0))
			{
				iLocal_1649 = 9;
			}
			break;
		case 9:
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
			__LIB_39__::func_464(&iLocal_1708);
			__LIB_0__::func_734(1, 0);
			func_250(uParam0);
			__LIB_0__::func_210();
			__LIB_0__::func_734(0, 0);
			iLocal_1649 = 0;
			return 0;
			break;
	}
	func_442(uParam0, 0);
	return 1;
}

int func_250(var uParam0)//Position - 0xB11C
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED" /* GXT: Medal */);
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_106[Local_45.f_10] - Local_45.f_112[Local_45.f_10]) / 2f) + Local_45.f_112[Local_45.f_10]))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED" /* GXT: Medal */);
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_45.f_24[Local_45.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED" /* GXT: Medal */);
	}
	return -1;
}

int func_252(var uParam0)//Position - 0xB209
{
	float fVar0;
	fVar0 = 0f;
	if (!__LIB_1__::func_13(&(uParam0->f_17.f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = __LIB_2__::func_572(&(uParam0->f_17.f_2));
	}
	if (!iLocal_1668)
	{
		if (fVar0 > 1f)
		{
			iLocal_1668 = 1;
		}
	}
	if (!iLocal_1669)
	{
		if (fVar0 > 4.25f)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, "TRANSITION_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.5f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_1669 = 1;
		}
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		__LIB_1__::func_377(&(uParam0->f_17.f_2));
		iLocal_1668 = 0;
		iLocal_1669 = 0;
		return 1;
	}
	return 0;
}

void func_253(var uParam0)//Position - 0xB2AA
{
	char* sVar0;
	sVar0 = __LIB_38__::func_911(2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("SPR_UI_PASS");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Local_45.f_24[Local_45.f_10 /*8*/]));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_17.f_1 = 5000;
	__LIB_1__::func_377(&(uParam0->f_17.f_2));
	iLocal_1668 = 0;
	iLocal_1669 = 0;
}

void func_256(int iParam0, struct<3> Param1)//Position - 0xB416
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
	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(iParam0))
	{
		return;
	}
	Var1 = { CAM::GET_CAM_ROT(iParam0, 2) };
	Var2 = { CAM::GET_CAM_COORD(iParam0) };
	Var3 = { __LIB_3__::func_80(Var1.f_0, Var1.f_1, (Var1.f_2 + 90f)) };
	Var4 = { Param1 - Var2 };
	Var4 = { __LIB_0__::func_79(Var4) };
	fVar5 = MISC::ATAN2((Param1.f_2 - Var2.f_2), MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Var2, false));
	fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Param1.f_0 - Var2.f_0), (Param1.f_1 - Var2.f_1));
	fVar6 = __LIB_1__::func_9(fVar6, -180f, 180f);
	fVar0 = __LIB_0__::func_158(__LIB_3__::func_80(fVar5, Var1.f_1, Var1.f_2), Var3);
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
	if ((bLocal_1896 && fVar5 > Var1.f_0) || (!bLocal_1896 && fVar5 < Var1.f_0))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_1893 = (fLocal_1893 * 0.9f);
		Var1.f_0 = __LIB_0__::func_504(Var1.f_0, fVar5, fLocal_1893);
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
	if ((bLocal_1895 && (Var1.f_2 - fVar6) < 0f) || (!bLocal_1895 && (Var1.f_2 - fVar6) > 0f))
	{
		if (!bLocal_1895 && (Var1.f_2 - fVar6) > 0f)
		{
		}
		else if (bLocal_1895 && (Var1.f_2 - fVar6) < 0f)
		{
		}
		fLocal_1894 = (fLocal_1894 * 0.9f);
		Var1.f_2 = __LIB_0__::func_504(Var1.f_2, fVar6, fLocal_1894);
	}
	CAM::SET_CAM_ROT(iParam0, Var1, 2);
}

int func_259(int* iParam0, float fParam1)//Position - 0xB683
{
	if (__LIB_15__::func_251(iParam0, fParam1))
	{
		__LIB_1__::func_377(iParam0);
		return 1;
	}
	return 0;
}

void func_260(int iParam0)//Position - 0xB6A1
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
	float fVar10;
	ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &Var0, &uVar6, &uVar6, &Var1);
	Var5 = { CAM::GET_CAM_ROT(iParam0, 2) };
	Var4 = { CAM::GET_CAM_COORD(iParam0) };
	Var2 = { __LIB_3__::func_80((Var5.f_0 + 90f), Var5.f_1, Var5.f_2) };
	Var3 = { __LIB_3__::func_80(Var5.f_0, Var5.f_1, (Var5.f_2 + 90f)) };
	fLocal_1893 = 0.2f;
	fLocal_1894 = 0.5f;
	Var7 = { CAM::GET_CAM_COORD(iParam0) - Var1 };
	Var8 = { Var1 + FtoV(__LIB_0__::func_158(Var7, Var0)) * Var0 };
	if (Var8.f_2 > Var4.f_2)
	{
		bLocal_1896 = true;
	}
	else
	{
		bLocal_1896 = false;
	}
	fVar9 = __LIB_0__::func_158(Var8, Var2);
	fVar10 = __LIB_0__::func_158(Var8, Var3);
	if (fVar9 < 0f)
	{
		bLocal_1895 = true;
	}
	else
	{
		bLocal_1895 = false;
	}
}

float func_261()//Position - 0xB77D
{
	switch (Local_45.f_10)
	{
		case 0:
			return 46.9415f;
			break;
		case 1:
			return 37.9558f;
			break;
		case 2:
			return 48.4122f;
			break;
		case 3:
			return 35.2464f;
			break;
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_262()//Position - 0xB7E4
{
	switch (Local_45.f_10)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_263()//Position - 0xB877
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_1936))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_1936);
	}
}

void func_267(bool bParam0)//Position - 0xB8DD
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_268()//Position - 0xB8EC
{
	func_269();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_269()//Position - 0xB8FD
{
	Local_1929.f_0 = 0;
	Local_1929.f_1 = 0;
	Local_1929.f_2 = { 0f, 0f, 0f };
	Local_1929.f_6 = 0;
	Local_1929.f_5 = 0f;
}

void func_274(var uParam0)//Position - 0xBAAA
{
	func_275(uParam0);
	SYSTEM::SETTIMERA(0);
	__LIB_0__::func_734(1, 0);
	__LIB_0__::func_210();
}

void func_275(var uParam0)//Position - 0xBAC8
{
	__LIB_18__::func_812(&(uParam0->f_1871));
	__LIB_38__::func_985(&(uParam0->f_1871.f_741));
	func_276(&(uParam0->f_1871));
}

void func_276(var uParam0)//Position - 0xBAEE
{
	__LIB_38__::func_961(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[1 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 127f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[2 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 297f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[3 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 324f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[4 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 351f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[5 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 378f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[6 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 405f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	__LIB_40__::func_53(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_284(uParam0[0 /*9*/], 0, 0, 0, 255);
	__LIB_40__::func_53(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_284(uParam0[2 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_284(uParam0[3 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_284(uParam0[6 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_284(uParam0[5 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_284(uParam0[4 /*9*/], 255, 255, 255, 255);
	__LIB_39__::func_267(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	__LIB_38__::func_917(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	__LIB_39__::func_267(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	__LIB_38__::func_917(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	__LIB_39__::func_267(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[2 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[3 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[4 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[5 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[6 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[7 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[8 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[11 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[12 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[13 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[14 /*8*/]), 107, 1);
	__LIB_39__::func_267(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[15 /*8*/]), 108, 1);
	__LIB_39__::func_267(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_284(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC1AC
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

int func_314(int* iParam0)//Position - 0xCA58
{
	func_319();
	switch (iLocal_1935)
	{
		case 0:
			__LIB_15__::func_248(iParam0);
			__LIB_1__::func_265(&iLocal_1930, 3);
			iLocal_1935 = 1;
			break;
		case 1:
			if (__LIB_15__::func_251(iParam0, 1f))
			{
				func_315(&iLocal_1930, 1, 0, 1, 3, 1, 0, 0);
				iLocal_1935 = 2;
			}
			break;
		case 2:
			if (func_315(&iLocal_1930, 0, 0, 1, 3, 1, 0, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_315(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xCAD0
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	if (bParam7)
	{
		__LIB_1__::func_266(&(uParam0->f_2), 1);
	}
	if (!__LIB_1__::func_13(&(uParam0->f_2)))
	{
		__LIB_1__::func_31(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	if (bParam7)
	{
		if (__LIB_1__::func_13(&(uParam0->f_2)))
		{
			if (__LIB_2__::func_213(&(uParam0->f_2)))
			{
				fVar3 = uParam0->f_2.f_2;
			}
			else
			{
				fVar3 = (__LIB_0__::func_616(1) - uParam0->f_2.f_1);
				if (fVar3 < 0f)
				{
					fVar3 = 0f;
					__LIB_1__::func_377(&(uParam0->f_2));
					if (__LIB_1__::func_490(uParam0->f_1, 1))
					{
						__LIB_38__::func_899(&(uParam0->f_1), 8);
						HUD::GET_HUD_COLOUR(18, &iVar5, &iVar6, &iVar7, &uVar8);
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
						__LIB_0__::func_610("CNTDWN_GO" /* GXT: Go! */);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						return 1;
					}
					__LIB_1__::func_31(&(uParam0->f_2));
				}
			}
		}
		else
		{
			fVar3 = uParam0->f_2.f_1;
		}
		iVar4 = SYSTEM::FLOOR(fVar3);
	}
	else
	{
		iVar4 = SYSTEM::FLOOR(__LIB_2__::func_572(&(uParam0->f_2)));
	}
	iVar9 = (iVar4 - iParam4);
	bVar10 = false;
	if (!__LIB_1__::func_490(uParam0->f_1, 8))
	{
		if (iVar9 >= -3 && !__LIB_1__::func_490(uParam0->f_1, 1))
		{
			__LIB_38__::func_899(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !__LIB_1__::func_490(uParam0->f_1, 2))
		{
			__LIB_38__::func_899(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_1__::func_490(uParam0->f_1, 4))
		{
			__LIB_38__::func_899(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_1__::func_490(uParam0->f_1, 16))
		{
			if (MISC::ABSF((__LIB_2__::func_572(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					__LIB_38__::func_899(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
				}
			}
		}
		else if (iVar9 >= 0 && !__LIB_1__::func_490(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, true);
			}
			__LIB_38__::func_899(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &iVar11, &iVar12, &iVar13, &uVar14);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			__LIB_0__::func_610("CNTDWN_GO" /* GXT: Go! */);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar11);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar12);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar13);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar10 = true;
			}
		}
	}
	else if (iVar9 == 1)
	{
		bVar10 = true;
	}
	if ((iParam2 && __LIB_1__::func_254()) || iVar4 > 5)
	{
		bVar10 = true;
	}
	if (bVar10)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			__LIB_1__::func_377(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

void func_319()//Position - 0xCEA3
{
	struct<6> Var0;
	int iVar1;
	iVar1 = Global_112416;
	func_320(Var0, 0, 0, 0, 0, iVar1);
}

void func_320(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCEBF
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	if (Global_78573 != 6)
	{
		if (Global_78575 == -1)
		{
			if (__LIB_14__::func_848(1, Param0))
			{
				if (Global_78576 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_29 > fVar0)
				{
					Global_78575 = MISC::GET_GAME_TIMER();
					Local_30 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_29 = 0f;
				}
				else
				{
					fLocal_29 = (fLocal_29 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_29 = 0f;
			}
		}
		else
		{
			if (!__LIB_14__::func_848(0, Param0))
			{
				Global_78575 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_78575);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_78573)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = __LIB_0__::func_683();
				if (Global_78576 == 1 && Global_78574 == 62)
				{
					iVar11 = Global_113386.f_2363.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { __LIB_14__::func_835(Global_78574, Global_78576, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_32 = 0.14f;
				}
				else
				{
					fLocal_32 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (__LIB_0__::func_95(&Var4) > fLocal_32)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_30.f_0, (Local_30.f_1 + fLocal_31));
							Global_78578 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_78577 == 1)
				{
					__LIB_0__::func_55();
					fLocal_29 = 0f;
				}
			}
			else
			{
				__LIB_0__::func_55();
				fLocal_29 = 0f;
			}
		}
	}
}

void func_339(var uParam0)//Position - 0xDD9E
{
	char cVar0[16];
	int iVar1;
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_45.f_10 + 1, 16);
	__LIB_1__::func_31(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_1722 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (Local_45.f_0 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	}
	uParam0->f_1 = 1;
	__LIB_1__::func_31(&iLocal_2025);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		__LIB_40__::func_37(&(uParam0->f_358[iVar1 /*189*/]));
		if (Local_45.f_0 != 1)
		{
			if (iVar1 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
			}
		}
		else if (bLocal_2033)
		{
			if (iVar1 > 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_9, false))
				{
					if (iVar1 == 1 && Local_45.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iVar1 /*189*/].f_9), false, 2f);
				}
			}
		}
		else if (iVar1 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
		}
		iVar1++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, false))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0 /*189*/].f_9, true);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_1892))
		{
			AUDIO::SET_RADIO_TO_STATION_NAME(sLocal_1892);
			AUDIO::SET_VEH_RADIO_STATION(uParam0->f_358[0 /*189*/].f_9, sLocal_1892);
		}
	}
}

void func_343(var uParam0)//Position - 0xE00A
{
	int iVar0;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

int func_345(var uParam0, int iParam1, bool bParam2)//Position - 0xE061
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar1 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar1 = 38;
	}
	fVar2 = 1.2f;
	if (!bParam2)
	{
		fVar2 = 0.7f;
	}
	if (!func_351(&(uParam0->f_27[iParam1 /*10*/]), iVar1, fVar2, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		Var3 = { uParam0->f_27[iParam1 /*10*/] };
		Var4 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!__LIB_0__::func_490(uParam0->f_27[iParam1 /*10*/], uParam0->f_27[iParam1 + 1 /*10*/], 1056964608, 0))
			{
				Var3 = { uParam0->f_27[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_45.f_0 == 1)
		{
			if (Local_45.f_10 == 1)
			{
				if (__LIB_1__::func_490(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					__LIB_38__::func_800(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var4 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_346(Var4, &(uParam0->f_27[iParam1 /*10*/]), Var3, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { uParam0->f_27[0 /*10*/] };
			}
			else
			{
				Var0 = { uParam0->f_27[iParam1 + 2 /*10*/] };
			}
			if (!func_346(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_346(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0xE1E0
{
	if (!func_347(Param0, uParam1, Param2, fParam3))
	{
		return 0;
	}
	return 1;
}

int func_347(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0xE201
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	Param0 = { Param0 };
	__LIB_40__::func_35(&(uParam1->f_6));
	if (uParam1->f_7 == 2)
	{
		iVar0 = __LIB_40__::func_54(uParam1->f_7, Param0, *uParam1, Param2);
		__LIB_21__::func_959(__LIB_19__::func_206(__LIB_1__::func_577()), &iVar1, &iVar2, &iVar3, &uVar4);
		uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(iVar0, *uParam1, Param2, fParam3, iVar1, iVar2, iVar3, __LIB_38__::func_798(*uParam1, 25, 200), 0);
	}
	else if (uParam1->f_7 == 3)
	{
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			__LIB_21__::func_959(__LIB_19__::func_206(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(__LIB_40__::func_39(uParam1->f_7, uParam1->f_8), *uParam1, Param2, fParam3, iVar1, iVar2, iVar3, __LIB_38__::func_798(*uParam1, 25, 200), 0);
		}
		else if (uParam1->f_8 == 1)
		{
			__LIB_21__::func_959(__LIB_19__::func_206(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(__LIB_40__::func_39(uParam1->f_7, uParam1->f_8), *uParam1, Param2, fParam3, iVar1, iVar2, iVar3, __LIB_38__::func_798(*uParam1, 25, 200), 0);
		}
	}
	else
	{
		uParam1->f_6 = GRAPHICS::CREATE_CHECKPOINT(__LIB_40__::func_39(uParam1->f_7, uParam1->f_8), *uParam1, Param2, fParam3, 254, 207, 12, __LIB_38__::func_798(*uParam1, 25, 200), 0);
	}
	if (uParam1->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_351(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0xE571
{
	if (!func_352(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_352(int* iParam0, struct<3> Param1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0xE59A
{
	__LIB_13__::func_808(iParam0);
	*iParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (!HUD::DOES_BLIP_EXIST(*iParam0))
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		HUD::SET_BLIP_SPRITE(*iParam0, iParam2);
	}
	HUD::SET_BLIP_SCALE(*iParam0, fParam3);
	HUD::SET_BLIP_DISPLAY(*iParam0, 4);
	if (iParam6 == 2 || iParam6 == 3)
	{
		HUD::SET_BLIP_COLOUR(*iParam0, 2);
	}
	if (iParam6 == 1)
	{
		HUD::SET_BLIP_COLOUR(*iParam0, 3);
	}
	if (iParam4 == (iParam5 - 1))
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPFIN");
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam0);
	}
	else
	{
		if (iParam6 == 1)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPINV");
		}
		else if (iParam6 == 2 || iParam6 == 3)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPKNF");
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPDEF");
		}
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam0);
	}
	return 1;
}

int func_354(var uParam0)//Position - 0xE67A
{
	switch (uParam0->f_25)
	{
		case 0:
			__LIB_0__::func_671(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", false);
			Local_45.f_118 = __LIB_8__::func_314();
			switch (Local_45.f_0)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", false);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", false);
					break;
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", false);
					break;
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", false);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", false);
					break;
			}
			uParam0->f_25 = 1;
			break;
		case 1:
			func_362(uParam0);
			uParam0->f_25 = 2;
			break;
		case 2:
			if (func_357(uParam0))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_45.f_118))
					{
						switch (Local_45.f_0)
						{
							case 0:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							case 1:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							case 2:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Triathlon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (Local_45.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_355(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		case 4:
			if (Local_45.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, true);
				}
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_358[0 /*189*/].f_16);
					STREAMING::NEW_LOAD_SCENE_START(uParam0->f_358[0 /*189*/].f_16, ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, false);
					}
					func_343(uParam0);
					return 0;
				}
			}
			break;
		case 5:
			return 0;
			break;
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_355(var uParam0)//Position - 0xE89E
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_356(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_356(var uParam0, int iParam1)//Position - 0xE8CF
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_143(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_143(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_357(var uParam0)//Position - 0xE914
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_358(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_358(var uParam0, int iParam1)//Position - 0xE945
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_359(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_359(var uParam0)//Position - 0xE96F
{
	if (!__LIB_40__::func_40(uParam0) || !func_360(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_360(var uParam0)//Position - 0xE993
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

void func_362(var uParam0)//Position - 0xE9CB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_363(uParam0, iVar0);
		iVar0++;
	}
}

void func_363(var uParam0, int iParam1)//Position - 0xE9F0
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_364(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_364(var uParam0)//Position - 0xEA19
{
	func_366(uParam0);
	__LIB_40__::func_41(uParam0);
}

void func_366(var uParam0)//Position - 0xEA48
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_21);
}

void func_369()//Position - 0xEA97
{
	if (CAM::DOES_CAM_EXIST(iLocal_1706))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_1706))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			CAM::SET_CAM_ACTIVE(iLocal_1706, false);
		}
		CAM::DESTROY_CAM(iLocal_1706, false);
	}
}

void func_374()//Position - 0xEB1B
{
	__LIB_8__::func_944(&uLocal_1210, 0);
}

int func_382(var uParam0, var uParam1)//Position - 0xEF3D
{
	if (!func_433())
	{
		return 0;
	}
	if (func_427(&bLocal_190, uParam0))
	{
		if (iLocal_192 || bLocal_191)
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, false, -1, 0, 0, true, 0);
			if (!*uParam1)
			{
				if (iLocal_192)
				{
					if (__LIB_1__::func_13(&iLocal_187))
					{
						if (func_259(&iLocal_187, SYSTEM::TO_FLOAT(0)))
						{
							iLocal_192 = 0;
							bLocal_191 = !bLocal_191;
						}
					}
					else
					{
						__LIB_1__::func_31(&iLocal_187);
					}
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					__LIB_2__::func_439(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_387();
		}
		return 0;
	}
	if (bLocal_190)
	{
		func_386();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
		}
	}
	else
	{
		Local_45.f_10 = -1;
	}
	func_383();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
	}
	return 1;
}

void func_383()//Position - 0xF039
{
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MinigameTransitionIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
	iLocal_186 = 0;
	MISC::SET_GAME_PAUSED(false);
	__LIB_0__::func_671(0);
	__LIB_0__::func_638();
}

void func_386()//Position - 0xF0C2
{
	switch (Global_112416)
	{
		case 0:
			Local_45.f_10 = 0;
			break;
		case 1:
			Local_45.f_10 = 1;
			break;
		case 2:
			Local_45.f_10 = 2;
			break;
		case 3:
			Local_45.f_10 = 3;
			break;
		case 4:
			Local_45.f_10 = 4;
			break;
	}
}

void func_387()//Position - 0xF119
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_388(&uLocal_223);
}

void func_388(var uParam0)//Position - 0xF12C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var6;
	int iVar7;
	struct<2> Var8;
	struct<11> Var9;
	struct<2> Var10;
	char cVar11[16];
	struct<2> Var12;
	struct<11> Var13;
	if (!bLocal_222)
	{
		if (!MISC::IS_PC_VERSION())
		{
			HUD::SET_WIDESCREEN_FORMAT(1);
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	__LIB_2__::func_439(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
	__LIB_38__::func_992("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	__LIB_18__::func_588(uParam0->f_420[0 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[1 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[2 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[3 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[4 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[5 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[6 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[7 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[8 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[6 /*8*/], 0, 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	__LIB_21__::func_777(&(uParam0->f_741.f_165));
	__LIB_39__::func_266(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	__LIB_21__::func_776(&(uParam0->f_741.f_176));
	__LIB_38__::func_972(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	__LIB_38__::func_991(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	__LIB_38__::func_971(&(uParam0->f_741.f_176));
	__LIB_38__::func_972(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	__LIB_38__::func_991(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	__LIB_38__::func_971(&(uParam0->f_741.f_176));
	__LIB_38__::func_972(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	__LIB_38__::func_991(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	__LIB_38__::func_971(&(uParam0->f_741.f_176));
	__LIB_21__::func_777(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	__LIB_18__::func_588(uParam0->f_420[16 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[17 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[18 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[19 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[20 /*8*/], 0, 0);
	__LIB_18__::func_588(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var6 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_113386.f_19043.f_6[iVar0] > 0f)
			{
				iLocal_196[iVar0] = SYSTEM::CEIL(Global_113386.f_19043.f_6[iVar0]);
			}
			else
			{
				iLocal_196[iVar0] = -1;
			}
			if (iVar0 == Global_112416)
			{
				__LIB_18__::func_771(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				__LIB_18__::func_588(uParam0->f_420[iVar1 /*8*/], 0, 0);
				__LIB_21__::func_776(&(uParam0->f_741.f_198));
				switch (Global_113386.f_19043.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					case 1:
						if (iVar0 < 5)
						{
							if (Global_113386.f_19043.f_6[iVar0] <= 0f)
							{
								__LIB_40__::func_53(&Var5, 269f, 0f, 32f, 32f, 0);
								func_284(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_198);
								Var6.f_0 = (Var5.f_0 + fLocal_197);
								if (!bLocal_222)
								{
									__LIB_38__::func_967(&Var5, 0);
								}
								__LIB_40__::func_43(&Var5, 1);
								__LIB_38__::func_992("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_222)
								{
									__LIB_38__::func_966(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_112416)
				{
					__LIB_21__::func_776(&(uParam0->f_741.f_198));
				}
				__LIB_38__::func_971(&(uParam0->f_741.f_198));
				__LIB_39__::func_266(&Var6, &(uParam0->f_741.f_198), &(Local_45.f_24[iVar0 /*8*/]), 0);
				__LIB_21__::func_777(&(uParam0->f_741.f_198));
				__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					__LIB_21__::func_777(&(uParam0->f_741.f_198));
				}
				else
				{
					__LIB_21__::func_777(&(uParam0->f_741.f_198));
				}
				__LIB_21__::func_777(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && iLocal_196[iVar0] > 1)
				{
					__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
					__LIB_40__::func_43(uParam0[9 /*9*/], 1);
					__LIB_38__::func_992("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_39__::func_266(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_971(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]) && IntToFloat(iLocal_196[iVar0]) > Local_45.f_106[iVar0])
				{
					__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
					__LIB_40__::func_43(uParam0[9 /*9*/], 1);
					__LIB_38__::func_992("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_39__::func_266(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_971(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0] && IntToFloat(iLocal_196[iVar0]) > (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]))
				{
					__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
					__LIB_40__::func_43(uParam0[9 /*9*/], 1);
					__LIB_38__::func_992("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_39__::func_266(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_971(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_196[iVar0]) > Local_45.f_112[iVar0] || iLocal_196[iVar0] == -1)
				{
					__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
					__LIB_40__::func_43(uParam0[9 /*9*/], 1);
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_39__::func_266(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY" /* GXT: – */, 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_992("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					__LIB_38__::func_965(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && !iLocal_196[iVar0] == -1)
				{
					__LIB_40__::func_43(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]) && !iLocal_196[iVar0] == -1)
				{
					__LIB_40__::func_43(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0] && !iLocal_196[iVar0] == -1)
				{
					__LIB_40__::func_43(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				__LIB_38__::func_992("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				__LIB_38__::func_992("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				__LIB_38__::func_992("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				__LIB_21__::func_777(&(uParam0->f_741.f_198));
				if (Global_113386.f_19043.f_6[Global_112416] > 0f)
				{
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_38__::func_990(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Global_113386.f_19043.f_6[Global_112416] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_971(&(uParam0->f_741.f_198));
				}
				else
				{
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_39__::func_266(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY" /* GXT: – */, 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_971(&(uParam0->f_741.f_198));
				}
				__LIB_39__::func_266(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_45.f_18[Global_112416] > 0f)
				{
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_38__::func_990(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Local_45.f_18[Global_112416] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_971(&(uParam0->f_741.f_198));
					__LIB_21__::func_777(&(uParam0->f_741.f_198));
				}
				else
				{
					__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(true);
					__LIB_38__::func_991(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY" /* GXT: – */, 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(false);
					__LIB_38__::func_971(&(uParam0->f_741.f_198));
					__LIB_21__::func_777(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				__LIB_18__::func_772(&(uParam0->f_420[iVar1 /*8*/]));
				__LIB_18__::func_771(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				__LIB_18__::func_588(uParam0->f_420[iVar1 /*8*/], 0, 0);
				__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
				switch (Global_113386.f_19043.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
						__LIB_21__::func_777(&(uParam0->f_741.f_198));
						break;
					case 2:
						break;
					case 1:
						if (iVar0 < 5)
						{
							__LIB_21__::func_777(&(uParam0->f_741.f_198));
							if (Global_113386.f_19043.f_6[iVar0] <= 0f)
							{
								__LIB_40__::func_53(&Var5, 269f, 0f, 32f, 32f, 0);
								func_284(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_198);
								Var6.f_0 = (Var5.f_0 + fLocal_197);
								if (!bLocal_222)
								{
									__LIB_38__::func_967(&Var5, 0);
								}
								__LIB_40__::func_43(&Var5, 1);
								__LIB_38__::func_992("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_222)
								{
									__LIB_38__::func_966(&Var6, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_112416)
				{
					__LIB_21__::func_776(&(uParam0->f_741.f_198));
				}
				__LIB_38__::func_971(&(uParam0->f_741.f_198));
				__LIB_39__::func_266(&Var6, &(uParam0->f_741.f_198), &(Local_45.f_24[iVar0 /*8*/]), 0);
				__LIB_21__::func_777(&(uParam0->f_741.f_198));
				__LIB_40__::func_43(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_113386.f_19043.f_12[iVar0 /*8*/].f_4 == 0)
			{
				__LIB_38__::func_992("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_196[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_106[iVar0] && IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0])
				{
					__LIB_38__::func_988(uParam0[iVar3 /*9*/]);
					__LIB_38__::func_992("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= (((Local_45.f_112[iVar0] - Local_45.f_106[iVar0]) / 2f) + Local_45.f_106[iVar0]))
				{
					__LIB_38__::func_987(uParam0[iVar3 /*9*/]);
					__LIB_38__::func_992("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_196[iVar0]) <= Local_45.f_112[iVar0])
				{
					__LIB_38__::func_986(uParam0[iVar3 /*9*/]);
					__LIB_38__::func_992("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar7 = 0;
	if (__LIB_17__::func_19(0))
	{
		STATS::STAT_GET_INT(joaat("SP0_FLYING_ABILITY"), &iVar7, -1);
	}
	else if (__LIB_17__::func_19(1))
	{
		STATS::STAT_GET_INT(joaat("SP1_FLYING_ABILITY"), &iVar7, -1);
	}
	else if (__LIB_17__::func_19(2))
	{
		STATS::STAT_GET_INT(joaat("SP2_FLYING_ABILITY"), &iVar7, -1);
	}
	if (iVar7 < 40)
	{
		__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		HUD::SET_TEXT_LEADING(1);
		Var8 = { uParam0->f_316[22 /*2*/] };
		Var9 = { uParam0->f_741.f_198 };
		if (!bLocal_222)
		{
			Var9.f_9 = (Var9.f_9 - 0.08f);
			__LIB_38__::func_966(&Var8, &Var9);
		}
		if (bLocal_222)
		{
			__LIB_38__::func_964(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 27f, 2f, 5, 159f);
		}
		else
		{
			__LIB_38__::func_964(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var8, &Var9, 18f, 1.55f, 5, 106f);
		}
		__LIB_18__::func_588(uParam0->f_420[14 /*8*/], 0, 0);
		__LIB_38__::func_992("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		__LIB_39__::func_266(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		__LIB_38__::func_971(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var10, "SPR_DESC_", 16);
	StringIntConCat(&Var10, Global_112416 + 1, 16);
	__LIB_40__::func_43(uParam0[7 /*9*/], 1);
	__LIB_38__::func_992("SPRRaces", &Var10, uParam0[7 /*9*/], 0, 0, 5, 0);
	__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	HUD::SET_TEXT_LEADING(1);
	StringCopy(&cVar11, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar11, Global_112416 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar11, 0, 16);
	}
	Var12 = { uParam0->f_316[16 /*2*/] };
	Var13 = { uParam0->f_741.f_198 };
	if (!bLocal_222)
	{
		Var13.f_9 = (Var13.f_9 - 0.108f);
		__LIB_38__::func_966(&Var12, &Var13);
	}
	if (bLocal_222)
	{
		__LIB_38__::func_964(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 27f, 2f, 5, 159f);
	}
	else
	{
		__LIB_38__::func_964(&(uParam0->f_420[25 /*8*/]), &cVar11, &Var12, &Var13, 18f, 1.55f, 5, 106f);
	}
	__LIB_18__::func_588(uParam0->f_420[25 /*8*/], 0, 0);
	__LIB_39__::func_266(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar11, 0);
	__LIB_38__::func_971(&(uParam0->f_741.f_198));
	__LIB_21__::func_777(&(uParam0->f_741.f_198));
	__LIB_39__::func_266(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	__LIB_39__::func_266(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	__LIB_21__::func_776(&(uParam0->f_741.f_198));
	__LIB_18__::func_588(uParam0->f_420[22 /*8*/], 0, 0);
	__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	__LIB_38__::func_990(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_45.f_112[Global_112416]) * 1000, 6, "", 1, 0);
	__LIB_38__::func_971(&(uParam0->f_741.f_198));
	__LIB_18__::func_588(uParam0->f_420[23 /*8*/], 0, 0);
	__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	__LIB_38__::func_990(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((((Local_45.f_112[Global_112416] - Local_45.f_106[Global_112416]) / 2f) + Local_45.f_106[Global_112416])) * 1000, 6, "", 1, 0);
	__LIB_38__::func_971(&(uParam0->f_741.f_198));
	__LIB_18__::func_588(uParam0->f_420[24 /*8*/], 0, 0);
	__LIB_38__::func_972(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	__LIB_38__::func_990(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_45.f_106[Global_112416]) * 1000, 6, "", 1, 0);
	__LIB_38__::func_971(&(uParam0->f_741.f_198));
	__LIB_21__::func_777(&(uParam0->f_741.f_198));
}

int func_427(var uParam0, var uParam1)//Position - 0x108AC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_192 == 1)
	{
		return 1;
	}
	if (iLocal_193)
	{
		return 0;
	}
	if (SYSTEM::TIMERA() < 500)
	{
		return 1;
	}
	if (bLocal_191)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_185, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_192 = 1;
			iLocal_193 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_185, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			HUD::CLEAR_HELP(true);
			func_562(&(Local_45.f_119));
			iLocal_192 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
	{
		iLocal_185 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_185, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		__LIB_1__::func_214(&(Local_45.f_119), 0, 0, 1, 1);
		__LIB_0__::func_990(&(Local_45.f_119), "FE_HLP29" /* GXT: Yes */, 2, 201, 1, 1, 0);
		__LIB_0__::func_990(&(Local_45.f_119), "FE_HLP31" /* GXT: No */, 2, 202, 1, 1, 0);
		__LIB_1__::func_377(&iLocal_187);
		iLocal_192 = 1;
		HUD::CLEAR_HELP(true);
		return 1;
	}
	iVar0 = 0;
	if (MISC::IS_PC_VERSION() && bLocal_191 == 0)
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			Global_4539961 = __LIB_38__::func_942(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			__LIB_3__::func_52(0, Global_112416, 1);
			if (__LIB_3__::func_51())
			{
				if (Global_4539961 == Global_112416)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_185 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
					Global_112416 = Global_4539961;
					func_562(&(Local_45.f_119));
				}
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_113386.f_19043.f_12[Global_112416 /*8*/].f_4 == 0)
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_185, "CANCEL", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
		}
		else
		{
			iLocal_185 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_185, "SELECT" /* GXT: Filter List */, "HUD_MINI_GAME_SOUNDSET", false, 0, true);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/) || __LIB_38__::func_974(0, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/))
	{
		iVar1 = (Global_112416 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_185 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
		Global_112416 = iVar1;
		func_562(&(Local_45.f_119));
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/) || __LIB_38__::func_974(1, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/))
	{
		iVar2 = Global_112416 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_185 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_185, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", false, 0, true);
		Global_112416 = iVar2;
		func_562(&(Local_45.f_119));
	}
	return 1;
}

int func_433()//Position - 0x10EA1
{
	int iVar0;
	switch (iLocal_186)
	{
		case 0:
			HUD::CLEAR_HELP(true);
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", false);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", false);
			iLocal_186 = 1;
			break;
		case 1:
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SP_SPR", 3))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces"))
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
					{
						iLocal_186 = 2;
					}
				}
			}
			break;
		case 2:
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_45.f_119));
			Local_45.f_119 = 0;
			func_562(&(Local_45.f_119));
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
			}
			__LIB_0__::func_671(1);
			GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_45.f_1, 4);
			__LIB_0__::func_638();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_45.f_11)
			{
				iLocal_196[iVar0] = -1;
				iVar0++;
			}
			func_437(&uLocal_223);
			func_434();
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, true);
			iLocal_186 = 3;
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_434()//Position - 0x10FA9
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_113386.f_19043.f_12[iVar0 /*8*/] = { func_436(iVar0) };
		MemCopy(&(Local_45.f_24[iVar0 /*8*/]), {Global_113386.f_19043.f_12[iVar0 /*8*/]}, 8);
		Local_45.f_106[iVar0] = func_435(iVar0);
		Local_45.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_113386.f_19043.f_6[iVar0] > Local_45.f_112[iVar0] || Global_113386.f_19043.f_6[iVar0] <= 0f)
			{
				Global_113386.f_19043.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_113386.f_19043.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_113386.f_19043.f_12[0 /*8*/].f_4 = 1;
}

float func_435(int iParam0)//Position - 0x1107E
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		case 1:
			return 75f;
			break;
		case 2:
			return 72f;
			break;
		case 3:
			return 120f;
			break;
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_436(int iParam0)//Position - 0x110E3
{
	struct<4> Var0;
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_437(var uParam0)//Position - 0x11153
{
	__LIB_16__::func_741();
	bLocal_222 = GRAPHICS::GET_IS_WIDESCREEN();
	__LIB_18__::func_812(uParam0);
	__LIB_38__::func_985(&(uParam0->f_741));
	func_438(uParam0);
}

void func_438(var uParam0)//Position - 0x1117B
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	bVar0 = GRAPHICS::GET_IS_WIDESCREEN();
	__LIB_38__::func_961(&(uParam0->f_316[0 /*2*/]), 262f, (71f - __LIB_38__::func_977(0.00278f, 720, 1)), 1);
	__LIB_38__::func_961(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - __LIB_38__::func_977(0.00417f, 720, 1)), 1);
	__LIB_38__::func_961(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - __LIB_38__::func_977(0.00417f, 720, 1)), 1);
	__LIB_38__::func_961(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - __LIB_38__::func_977(0.00417f, 720, 1)), 1);
	__LIB_38__::func_961(&(uParam0->f_316[17 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 162f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[18 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 189f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[19 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 216f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[20 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 243f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[21 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 270f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[22 /*2*/]), (257f + __LIB_38__::func_918(0.0047f, 1280, 1)), 297f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[16 /*2*/]), (513f + __LIB_38__::func_918(0.0047f, 1280, 1)), (299f - __LIB_38__::func_977(0.00278f, 720, 1)), 1);
	__LIB_38__::func_961(&(uParam0->f_316[4 /*2*/]), (769f + __LIB_38__::func_918(0.0047f, 1280, 1)), 297f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[8 /*2*/]), (769f + __LIB_38__::func_918(0.0047f, 1280, 1)), 351f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[6 /*2*/]), (769f + __LIB_38__::func_918(0.0047f, 1280, 1)), (324f - __LIB_38__::func_977(0.00278f, 720, 1)), 1);
	__LIB_38__::func_961(&(uParam0->f_316[7 /*2*/]), 324f, (324f - __LIB_38__::func_977(0.00278f, 720, 1)), 1);
	__LIB_38__::func_961(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	__LIB_38__::func_961(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	__LIB_40__::func_53(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	HUD::GET_HUD_COLOUR(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_284(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	__LIB_40__::func_53(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_284(uParam0[1 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_284(uParam0[2 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_284(uParam0[3 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_284(uParam0[4 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_284(uParam0[5 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[6 /*9*/], (486f + __LIB_38__::func_918(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_284(uParam0[6 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_284(uParam0[7 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_284(uParam0[9 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_284(uParam0[13 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_284(uParam0[12 /*9*/], 255, 255, 255, 255);
	__LIB_40__::func_53(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_284(uParam0[11 /*9*/], 255, 255, 255, 255);
	__LIB_39__::func_267(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	__LIB_38__::func_917(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	__LIB_39__::func_267(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	__LIB_38__::func_917(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	__LIB_39__::func_267(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	__LIB_38__::func_917(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	__LIB_39__::func_267(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[0 /*8*/]), 1, 1);
	__LIB_39__::func_267(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[1 /*8*/]), 1, 1);
	__LIB_39__::func_267(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[2 /*8*/]), 1, 1);
	__LIB_39__::func_267(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[7 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[8 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[9 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[10 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[11 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[12 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[13 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[26 /*8*/]), 1, 1);
	__LIB_39__::func_267(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[14 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[15 /*8*/]), 1, 1);
	__LIB_39__::func_267(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[25 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[16 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[17 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[18 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[21 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[20 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[19 /*8*/]), 117, 1);
	__LIB_39__::func_267(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[22 /*8*/]), 109, 1);
	__LIB_39__::func_267(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[23 /*8*/]), 108, 1);
	__LIB_39__::func_267(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	__LIB_18__::func_771(&(uParam0->f_420[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5 /*2*/] = (((uParam0->f_316[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5 /*8*/] = (((uParam0->f_420[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_420[iVar5 /*8*/].f_2 = (uParam0->f_420[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}

int func_442(var uParam0, bool bParam1)//Position - 0x11DA9
{
	int iVar0;
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_194)
		{
			iVar0 = 0;
			if (uParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_106[Local_45.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_45.f_112[Local_45.f_10] - Local_45.f_106[Local_45.f_10]) / 2f) + Local_45.f_106[Local_45.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_45.f_112[Local_45.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_470(Local_45.f_10, &(Local_45.f_65[Local_45.f_10 /*8*/]));
			if (bParam1)
			{
				func_467(Local_45.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_194 = 1;
				return 1;
			}
			else if (func_443(Local_45.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_194 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_194 = 1;
	}
	return 0;
}

int func_443(int iParam0, float fParam1, int iParam2)//Position - 0x11EA8
{
	if (Global_2097157.f_1 && !Global_2097157.f_2)
	{
		func_467(iParam0, fParam1, iParam2);
		Global_2097157.f_2 = 1;
	}
	if (__LIB_33__::func_468(&uLocal_1210))
	{
		Global_2097532 = 1;
		return 1;
	}
	return 0;
}

void func_467(int iParam0, float fParam1, int iParam2)//Position - 0x12A10
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var4[3];
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var4[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var4[1 /*8*/]), "Location", 32);
	StringCopy(&(Var4[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (__LIB_1__::func_317(817, &Var3, &Var4, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			__LIB_18__::func_959(817, 131, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			__LIB_18__::func_959(817, 131, 0, 0f, 0);
		}
		__LIB_18__::func_959(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		__LIB_18__::func_959(817, 2, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		__LIB_18__::func_959(817, 147, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		__LIB_18__::func_959(817, 149, 0, 0f, 0);
		__LIB_18__::func_959(817, 148, 0, 0f, 0);
		__LIB_18__::func_959(817, 109, 1, 0f, 0);
		__LIB_18__::func_959(817, 157, iVar0, 0f, 0);
		__LIB_18__::func_959(817, 158, iVar1, 0f, 0);
		__LIB_18__::func_959(817, 86, iVar2, 0f, 0);
	}
}

void func_470(int iParam0, char[4] cParam1)//Position - 0x12E26
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	__LIB_15__::func_250(&uLocal_1210, 86, &Var0, cParam1, -1, -1, 0, 0);
}

void func_492(var uParam0, int iParam1, char[4] cParam2)//Position - 0x18926
{
	__LIB_2__::func_439(&(Local_45.f_119), 1128792064, 1, 0, 1, 1065353216);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_470(iParam1, cParam2);
	__LIB_37__::func_44(uParam0, &uLocal_1210);
}

void func_559(bool bParam0)//Position - 0x1FBF7
{
	if (bParam0)
	{
		__LIB_1__::func_214(&(Local_45.f_119), 0, 0, 1, 1);
		__LIB_0__::func_990(&(Local_45.f_119), "HUD_INPUT53" /* GXT: Back */, 2, 202, 1, 1, 0);
		__LIB_0__::func_990(&(Local_45.f_119), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
		__LIB_1__::func_213(&(Local_45.f_119), 1);
	}
	else
	{
		__LIB_1__::func_214(&(Local_45.f_119), 0, 0, 1, 1);
		__LIB_0__::func_990(&(Local_45.f_119), "HUD_INPUT53" /* GXT: Back */, 2, 202, 1, 1, 0);
		__LIB_1__::func_213(&(Local_45.f_119), 1);
	}
}

void func_562(var uParam0)//Position - 0x1FCC4
{
	if (Global_112416 != 0 && Global_113386.f_19043.f_12[Global_112416 /*8*/].f_4 == 0)
	{
		__LIB_1__::func_214(uParam0, 0, 0, 1, 1);
		__LIB_0__::func_990(uParam0, "IB_QUIT" /* GXT: Quit */, 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_0__::func_990(uParam0, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_194)
		{
			__LIB_0__::func_990(uParam0, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	else
	{
		__LIB_1__::func_214(uParam0, 0, 0, 1, 1);
		__LIB_0__::func_990(uParam0, "FE_HLP4" /* GXT: Select */, 2, 201, 1, 1, 0);
		__LIB_0__::func_990(uParam0, "IB_QUIT" /* GXT: Quit */, 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			__LIB_0__::func_990(uParam0, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_195 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_194)
		{
			__LIB_0__::func_990(uParam0, "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			iLocal_195 = 0;
		}
		else
		{
			iLocal_195 = 0;
		}
	}
	__LIB_1__::func_213(&(Local_45.f_119), 1);
}

void func_563()//Position - 0x1FDD6
{
	__LIB_19__::func_51();
	__LIB_16__::func_741();
	__LIB_0__::func_222(&(Local_2035.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	__LIB_0__::func_222(&uLocal_1727, 0, 0, "PilotDispatch", 0, 1);
	func_580(&Local_2035);
	func_564(&Local_2035, Local_45.f_10);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2035.f_358[0 /*189*/].f_9))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2035.f_358[0 /*189*/].f_9, 4);
	}
}

void func_564(var uParam0, int iParam1)//Position - 0x1FE40
{
	switch (iParam1)
	{
		case 0:
			func_579(&Local_2035);
			break;
		case 1:
			func_578(&Local_2035);
			break;
		case 2:
			func_577(&Local_2035);
			func_576(&(Local_2035.f_27[2 /*10*/]), 1);
			func_576(&(Local_2035.f_27[3 /*10*/]), 1);
			break;
		case 3:
			func_575(&Local_2035);
			break;
		case 4:
			func_565(&Local_2035);
			break;
	}
}

void func_565(var uParam0)//Position - 0x1FEB9
{
	func_580(uParam0);
	uParam0->f_12 = 32;
	func_574(&(uParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_574(&(uParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_574(&(uParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_574(&(uParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_574(&(uParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_574(&(uParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_574(&(uParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), 1944.4633f, 5520.0073f, 177.2808f, 30f, 2, 0);
	func_574(&(uParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_574(&(uParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_574(&(uParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_574(&(uParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_574(&(uParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_574(&(uParam0->f_27[23 /*10*/]), 1001.4265f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_574(&(uParam0->f_27[24 /*10*/]), 875.5358f, 5642.6665f, 682.5352f, 30f, 2, 0);
	func_574(&(uParam0->f_27[25 /*10*/]), 741.3275f, 5688.0464f, 709.5683f, 30f, 2, 0);
	func_574(&(uParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_574(&(uParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_574(&(uParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_574(&(uParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_574(&(uParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_574(&(uParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	__LIB_40__::func_47(&(uParam0->f_358[0 /*189*/]));
	__LIB_40__::func_46(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	__LIB_40__::func_45(&(uParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	__LIB_40__::func_44(&(uParam0->f_358[0 /*189*/]), 0, joaat("Player_One"), joaat("stunt"));
}

void func_568(var uParam0, int iParam1, int iParam2)//Position - 0x203A7
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = iParam2;
	__LIB_0__::func_209(iParam2, &(Local_45.f_243));
}

void func_574(var uParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4)//Position - 0x20944
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam2;
	uParam0->f_7 = iParam3;
	uParam0->f_8 = iParam4;
}

void func_575(var uParam0)//Position - 0x20966
{
	func_580(uParam0);
	uParam0->f_12 = 28;
	func_574(&(uParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), -1384.515f, -2880.7734f, 38f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), -1156.4346f, -2957.2837f, 40f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), -795.3043f, -2987.7542f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[4 /*10*/]), -429.0231f, -2969.5278f, 30f, 30f, 3, 1);
	func_574(&(uParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_574(&(uParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), 1019.5307f, -2182.1187f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), 1019.8987f, -1886.1503f, 60f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), 698.908f, -1013.0242f, 100.5f, 30f, 3, 2);
	func_574(&(uParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_574(&(uParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_574(&(uParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_574(&(uParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_574(&(uParam0->f_27[18 /*10*/]), -1125.5865f, -769.7247f, 67f, 30f, 2, 0);
	func_574(&(uParam0->f_27[19 /*10*/]), -1281.2913f, -851.0229f, 82f, 30f, 3, 1);
	func_574(&(uParam0->f_27[20 /*10*/]), -1580.8652f, -1009.9437f, 40f, 30f, 2, 0);
	func_574(&(uParam0->f_27[21 /*10*/]), -1877.5199f, -1152.9271f, 30f, 30f, 2, 0);
	func_574(&(uParam0->f_27[22 /*10*/]), -2101.1113f, -1330.267f, 20f, 30f, 2, 0);
	func_574(&(uParam0->f_27[23 /*10*/]), -2230.1497f, -1555.8895f, 10f, 30f, 3, 2);
	func_574(&(uParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_574(&(uParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_574(&(uParam0->f_27[26 /*10*/]), -1893.3917f, -2559.4597f, 22f, 30f, 2, 0);
	func_574(&(uParam0->f_27[27 /*10*/]), -1737.7251f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	__LIB_40__::func_47(&(uParam0->f_358[0 /*189*/]));
	__LIB_40__::func_46(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	__LIB_40__::func_45(&(uParam0->f_358[0 /*189*/]), -2102.1602f, -2556.0823f, 38f, 245.6561f);
	__LIB_40__::func_44(&(uParam0->f_358[0 /*189*/]), 0, joaat("Player_One"), joaat("stunt"));
}

void func_576(var uParam0, int iParam1)//Position - 0x20D96
{
	__LIB_38__::func_899(&(uParam0->f_9), iParam1);
}

void func_577(var uParam0)//Position - 0x20DA8
{
	func_580(uParam0);
	uParam0->f_12 = 21;
	func_574(&(uParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), 869.9235f, -2613.7046f, 57.8325f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), 652.3818f, -2651.9907f, 54.935f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_574(&(uParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_574(&(uParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_574(&(uParam0->f_27[7 /*10*/]), -300.2367f, -2118.4314f, 53.3728f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_574(&(uParam0->f_27[9 /*10*/]), -199.4688f, -1803.3276f, 13.6363f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), -649.8698f, -1710.3735f, 61.3036f, 30f, 2, 0);
	func_574(&(uParam0->f_27[12 /*10*/]), -861.6902f, -1857.1945f, 77.0621f, 30f, 3, 2);
	func_574(&(uParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_574(&(uParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_574(&(uParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_574(&(uParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_574(&(uParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_574(&(uParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_574(&(uParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	__LIB_40__::func_47(&(uParam0->f_358[0 /*189*/]));
	__LIB_40__::func_46(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	__LIB_40__::func_45(&(uParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	__LIB_40__::func_44(&(uParam0->f_358[0 /*189*/]), 0, joaat("Player_One"), joaat("stunt"));
}

void func_578(var uParam0)//Position - 0x210EA
{
	func_580(uParam0);
	uParam0->f_12 = 19;
	func_574(&(uParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_574(&(uParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_574(&(uParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), -1633.0757f, 751.8171f, 220.188f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_574(&(uParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), -565.788f, 1098.3085f, 349.0507f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_574(&(uParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_574(&(uParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_574(&(uParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_574(&(uParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_574(&(uParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_574(&(uParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	__LIB_40__::func_47(&(uParam0->f_358[0 /*189*/]));
	__LIB_40__::func_46(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	__LIB_40__::func_45(&(uParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	__LIB_40__::func_44(&(uParam0->f_358[0 /*189*/]), 0, joaat("Player_One"), joaat("stunt"));
}

void func_579(var uParam0)//Position - 0x213E4
{
	func_580(uParam0);
	uParam0->f_12 = 18;
	func_574(&(uParam0->f_27[0 /*10*/]), 1025.7239f, 3073.1333f, 70f, 30f, 2, 0);
	func_574(&(uParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_574(&(uParam0->f_27[2 /*10*/]), 624.897f, 2968.4155f, 80f, 30f, 3, 1);
	func_574(&(uParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_574(&(uParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_574(&(uParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_574(&(uParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_574(&(uParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_574(&(uParam0->f_27[8 /*10*/]), -1414.5996f, 2636.3652f, 8.25f, 30f, 2, 0);
	func_574(&(uParam0->f_27[9 /*10*/]), -1684.8564f, 2630.0352f, 10f, 30f, 2, 0);
	func_574(&(uParam0->f_27[10 /*10*/]), -2024.5363f, 2677.3362f, 30f, 30f, 3, 1);
	func_574(&(uParam0->f_27[11 /*10*/]), -2659.1064f, 2670.5745f, 5.4745f, 30f, 2, 0);
	func_574(&(uParam0->f_27[12 /*10*/]), -2880.1362f, 2732.0837f, 21.0365f, 30f, 2, 0);
	func_574(&(uParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_574(&(uParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_574(&(uParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_574(&(uParam0->f_27[16 /*10*/]), -2879.0896f, 2382.111f, 20f, 30f, 2, 0);
	func_574(&(uParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	__LIB_40__::func_47(&(uParam0->f_358[0 /*189*/]));
	__LIB_40__::func_46(&(uParam0->f_358[0 /*189*/]), "Player");
	func_568(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_45.f_1);
	__LIB_40__::func_45(&(uParam0->f_358[0 /*189*/]), Local_1940, 154.8464f);
	__LIB_40__::func_44(&(uParam0->f_358[0 /*189*/]), 0, joaat("Player_One"), joaat("stunt"));
}

void func_580(var uParam0)//Position - 0x216B6
{
	float fVar0;
	__LIB_1__::func_377(&(uParam0->f_3));
	if (Local_45.f_10 != -1)
	{
		fVar0 = func_35(Local_45.f_10);
		if (fVar0 <= 0f || fVar0 > Local_45.f_12[Local_45.f_10])
		{
			fVar0 = Local_45.f_12[Local_45.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_588(uParam0);
	uParam0->f_12 = 0;
	func_581(uParam0);
	uParam0->f_13 = 0;
}

void func_581(var uParam0)//Position - 0x21724
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_582(uParam0, iVar0);
		iVar0++;
	}
}

void func_582(var uParam0, int iParam1)//Position - 0x21749
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_584(&(uParam0->f_358[iParam1 /*189*/]));
	func_583(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_583(char* sParam0)//Position - 0x2177F
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_45.f_3 };
	sParam0->f_19 = Local_45.f_6;
	sParam0->f_20 = Local_45.f_7;
	sParam0->f_21 = Local_45.f_8;
	sParam0->f_22 = Local_45.f_9;
}

void func_584(var uParam0)//Position - 0x217E9
{
	__LIB_40__::func_48(uParam0);
	__LIB_40__::func_837(uParam0);
	func_585(uParam0);
}

void func_585(var uParam0)//Position - 0x21803
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_45.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_588(var uParam0)//Position - 0x21893
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_589(uParam0, iVar0);
		iVar0++;
	}
}

void func_589(var uParam0, int iParam1)//Position - 0x218B8
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_590(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_590(var uParam0)//Position - 0x218F9
{
	*uParam0 = { Local_45.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}

void func_597()//Position - 0x21B20
{
	int iVar0;
	if (!iLocal_2029)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MGSP_START");
							iLocal_2029 = 1;
						}
					}
				}
			}
		}
	}
}

int func_602()//Position - 0x21C2B
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	__LIB_12__::func_849(23, 1);
	__LIB_37__::func_434(10);
	switch (Local_1950.f_5)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 10f);
			__LIB_0__::func_130();
			__LIB_15__::func_953(2, 0);
			__LIB_15__::func_953(1, 0);
			__LIB_15__::func_953(3, 0);
			__LIB_15__::func_953(4, 0);
			__LIB_15__::func_953(5, 0);
			__LIB_15__::func_953(6, 0);
			__LIB_15__::func_953(7, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_2041, 600f, false, false, false, false, false, false, 0);
			func_603(&Local_2035, Local_45.f_10);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_1950.f_5 = 2;
			}
			else
			{
				Local_1950.f_5 = 1;
			}
			break;
		case 1:
			if (__LIB_40__::func_42(1000))
			{
				Local_1950.f_5 = 2;
			}
			break;
		case 2:
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", false);
			while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", false, -1);
			Local_1950.f_5 = 3;
			break;
		case 3:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				Local_1950.f_5 = 4;
			}
			break;
		case 4:
			Local_1950.f_5 = 5;
			__LIB_1__::func_31(&(Local_1950.f_2));
			break;
		case 5:
			if (__LIB_15__::func_251(&(Local_1950.f_2), 0.5f))
			{
				Local_1950.f_5 = 6;
			}
			break;
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_1950.f_5 = 9;
			}
			else
			{
				Local_1950.f_5 = 7;
				__LIB_1__::func_31(&(Local_1950.f_2));
			}
			break;
		case 7:
			if (__LIB_15__::func_251(&(Local_1950.f_2), 0.5f))
			{
				Local_1950.f_5 = 8;
			}
			break;
		case 8:
			if (__LIB_40__::func_49(5000))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				Local_1950.f_5 = 9;
			}
			break;
		case 9:
			__LIB_1__::func_377(&(Local_1950.f_2));
			return 0;
			break;
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_603(var uParam0, int iParam1)//Position - 0x21E54
{
	Local_45.f_0 = 0;
	Local_45.f_1 = 0;
	Local_45.f_2 = 2;
	Local_45.f_3 = { Local_1940 };
	Local_45.f_6 = 154.8464f;
	Local_45.f_7 = 4;
	Local_45.f_8 = joaat("A_M_Y_GenStreet_01");
	Local_45.f_9 = joaat("stunt");
	StringCopy(&(Local_45.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_45.f_12[0] = 165f;
	StringCopy(&(Local_45.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_45.f_12[1] = 80f;
	StringCopy(&(Local_45.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_45.f_12[2] = 165f;
	StringCopy(&(Local_45.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_45.f_12[3] = 165f;
	StringCopy(&(Local_45.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_45.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			__LIB_0__::func_467(&Local_2035);
			break;
		case 1:
			__LIB_0__::func_467(&Local_2035);
			break;
		case 2:
			__LIB_0__::func_467(&Local_2035);
			break;
		case 3:
			__LIB_0__::func_467(&Local_2035);
			break;
		case 4:
			__LIB_0__::func_467(&Local_2035);
			break;
	}
}

void func_614()//Position - 0x2200B
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_374();
	__LIB_16__::func_741();
	__LIB_19__::func_51();
	__LIB_12__::func_849(23, 0);
	__LIB_33__::func_306(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	STREAMING::CLEAR_FOCUS();
	__LIB_0__::func_55();
	__LIB_0__::func_704(0);
	__LIB_38__::func_945(0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("MGTR_COMPLETE");
	AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	__LIB_16__::func_790(2, 0);
	__LIB_16__::func_790(1, 0);
	__LIB_16__::func_790(3, 0);
	__LIB_16__::func_790(4, 0);
	__LIB_16__::func_790(5, 0);
	__LIB_16__::func_790(6, 0);
	__LIB_16__::func_790(7, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	__LIB_38__::func_801(&(Local_45.f_118));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("PilotSchool");
	func_618(&Local_2035, 1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "SPRTaxi");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "SPRTaxi");
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_131();
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	func_263();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	__LIB_16__::func_613();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_618(var uParam0, bool bParam1)//Position - 0x221EA
{
	if (bParam1)
	{
		func_580(uParam0);
	}
	else
	{
		__LIB_0__::func_467(uParam0);
	}
	__LIB_0__::func_671(0);
	__LIB_15__::func_240(&(uParam0->f_17));
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	if (iLocal_2028)
	{
		__LIB_0__::func_229("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2028 = 0;
	}
}

