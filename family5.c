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
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	int iLocal_53[3] = { 0, 0, 0 };
	int iLocal_54[3] = { 0, 0, 0 };
	var uLocal_55 = 2;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	struct<16> Local_58[3];
	struct<22> Local_59[3];
	struct<22> Local_60[3];
	struct<3> Local_61[2];
	struct<3> Local_62[2];
	float fLocal_63[2] = { 0f, 0f };
	struct<7> Local_64[8];
	struct<7> Local_65[8];
	struct<3> Local_66[8];
	int iLocal_67[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_68[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_69[8];
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int* iLocal_75 = NULL;
	int* iLocal_76 = NULL;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	float fLocal_79 = 0f;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_91 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_97 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_100 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	float fLocal_110 = 0f;
	float fLocal_111 = 0f;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_115 = { 0, 0, 0 } ;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	struct<3> Local_118 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<2> Local_130 = { 0, 0 } ;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	struct<2> Local_133 = { 0, 0 } ;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	struct<14> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	struct<14> Local_143 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	struct<15> Local_146 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_147 = 0;
	struct<8> Local_148 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	struct<7> Local_157 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_158 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	struct<6> Local_161 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	struct<3> Local_167 = { 0, 0, 0 } ;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<3> Local_176 = { 0, 0, 0 } ;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	struct<3> Local_185 = { 0, 0, 0 } ;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	struct<6> Local_194 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	struct<6> Local_200 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
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
	struct<6> Local_217 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	struct<3> Local_223 = { 0, 0, 0 } ;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	struct<3> Local_232 = { 0, 0, 0 } ;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	struct<57> Local_241 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_242 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 3;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = -1;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 1000;
	var uLocal_264 = 1000;
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
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	bool bLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	struct<3> Local_297 = { 0, 0, 0 } ;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	var uLocal_319 = 16;
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
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	struct<6> Local_488 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_489 = { 0, 0, 0, 0, 0, 0 } ;
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
	struct<11> Local_501 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0 } ;
	var uLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	float fLocal_540 = 0f;
	float fLocal_541 = 0f;
	float fLocal_542 = 0f;
	float fLocal_543 = 0f;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_553 = 0;
	int iLocal_554[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_555 = 10;
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
	var uLocal_566 = 8;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	struct<7> Local_575[1];
	struct<11> Local_576[3];
	struct<3> Local_577[6];
	struct<5> Local_578 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_31 = 1;
	iLocal_32 = 3;
	fLocal_35 = 80f;
	fLocal_36 = 140f;
	fLocal_37 = 180f;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_48 = 0.5f;
	fLocal_49 = 0.88f;
	fLocal_50 = 0.609375f;
	fLocal_51 = 0.266666f;
	fLocal_52 = 1.2f;
	Local_89 = { 0f, 7f, 0.3f };
	Local_90 = { -3f, 6f, 0.2f };
	Local_91 = { -3f, 2f, 0.2f };
	Local_92 = { -3f, -2f, 0.2f };
	Local_93 = { -1.27f, 1.95f, 4.9f };
	Local_94 = { -789.529f, 187.843f, 72.835f };
	Local_95 = { 0f, 0f, 130f };
	Local_96 = { -789.529f, 187.843f, 72.84f };
	Local_97 = { 0f, 0f, 145f };
	Local_98 = { -789.229f, 187.843f, 72.85f };
	Local_99 = { 0f, 0f, 123.12f };
	Local_100 = { -788.83f, 185.793f, 72.855f };
	Local_101 = { 0f, 0f, 31.68f };
	Local_102 = { -788.83f, 185.793f, 72.84f };
	Local_103 = { 0f, 0f, 31.68f };
	Local_104 = { -788.979f, 185.743f, 72.86f };
	Local_105 = { 0f, 0f, 30f };
	Local_106 = { -782.80237f, 187.4389f, 73.326614f };
	Local_107 = { -786.7066f, 187.14627f, 72.723785f };
	Local_108 = { -3.540541f, 0f, 99.79994f };
	Local_109 = { 1.793574f, -0.025068f, 101.1528f };
	fLocal_110 = 39.3555f;
	fLocal_111 = 39.3555f;
	Local_112 = { -786.29443f, 187.57695f, 72.849815f };
	Local_113 = { -786.64655f, 187.71783f, 72.84367f };
	Local_114 = { -1.207426f, 0.002569f, 105.26624f };
	Local_115 = { -1.207426f, 0.002569f, 108.28456f };
	fLocal_116 = 39.3555f;
	fLocal_117 = 39.3555f;
	Local_118 = { -786.23706f, 187.437f, 73.0122f };
	Local_119 = { -786.60205f, 187.22412f, 73.01046f };
	Local_120 = { -0.244137f, -0.022206f, 103.08531f };
	Local_121 = { -0.244137f, -0.022206f, 101.27787f };
	fLocal_122 = 39.3555f;
	fLocal_123 = 39.3555f;
	Local_124 = { 0f, 150f, 50f };
	Local_125 = { 0f, 0f, 0f };
	Local_126 = { -819.68f, 175.87f, 70.61f };
	Local_127 = { -806.04f, 173.59f, 75.74f };
	Local_128 = { -801.42f, 182.86f, 71.61f };
	Local_129 = { -1175.32f, -897.03f, 14.05f };
	StringCopy(&Local_130, "FAM5_GT4", 16);
	StringCopy(&Local_133, "CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, 16);
	iLocal_511 = -1;
	iLocal_512 = -1;
	iLocal_513 = -1;
	iLocal_514 = -1;
	iLocal_515 = -1;
	iLocal_516 = -1;
	fLocal_540 = 1f;
	fLocal_541 = 1f;
	fLocal_542 = 1f;
	fLocal_543 = 0.001f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_893();
		func_892(3);
		func_889();
		__LIB_17__::func_667(86, 1, 1, 1, 0);
		if ((Global_39990[117] == 1 || Global_39990[118] == 1) || Global_39990[170] == 1)
		{
			__LIB_17__::func_667(117, 0, 1, 1, 0);
			__LIB_17__::func_667(118, 0, 1, 1, 0);
			__LIB_17__::func_667(120, 0, 1, 1, 0);
			__LIB_17__::func_667(170, 0, 1, 1, 0);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (__LIB_0__::func_323())
	{
		func_878(&iLocal_137, __LIB_0__::func_344());
		iLocal_290 = 1;
		if (Global_94618 == 1)
		{
			iLocal_137 = func_877(iLocal_137);
		}
	}
	else
	{
		__LIB_41__::func_41(0, "YOGA - WARRIOR", 0, 0, 0, 1);
	}
	if (__LIB_0__::func_2(0))
	{
		if (!__LIB_0__::func_323())
		{
			iLocal_137 = 2;
			iLocal_290 = 1;
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
		}
	}
	PAD::INIT_PC_SCRIPTED_CONTROLS("Yoga");
	bLocal_88 = false;
	while (true)
	{
		if (iLocal_291 == 1)
		{
			func_821(&iLocal_137, &iLocal_138);
			__LIB_17__::func_227(Local_297, 50f);
		}
		func_819(&uLocal_139);
		func_818();
		if (iLocal_529 == 1)
		{
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_DidSomebodySayYoga", 0);
		switch (iLocal_137)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_740(&iLocal_288))
					{
						func_739();
						iLocal_137 = 1;
					}
				}
				break;
			case 1:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_715(&iLocal_288))
					{
						func_739();
						iLocal_137 = 2;
					}
				}
				break;
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_666(&iLocal_288))
					{
						func_739();
						iLocal_137 = 3;
					}
				}
				break;
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					CLOCK::SET_CLOCK_TIME(iLocal_531, iLocal_532, iLocal_533);
					if (func_665(&iLocal_288))
					{
						func_739();
						iLocal_137 = 4;
					}
				}
				break;
			case 4:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_664(&iLocal_288))
					{
						func_739();
						iLocal_137 = 5;
					}
				}
				break;
			case 5:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					CLOCK::SET_CLOCK_TIME(iLocal_531, iLocal_532, iLocal_533);
					if (func_663(&iLocal_288))
					{
						func_739();
						iLocal_137 = 6;
					}
				}
				break;
			case 6:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_662(&iLocal_288))
					{
						func_739();
						iLocal_137 = 7;
					}
				}
				break;
			case 7:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					CLOCK::SET_CLOCK_TIME(iLocal_531, iLocal_532, iLocal_533);
					if (func_615(&iLocal_288))
					{
						func_739();
						PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
						iLocal_137 = 8;
					}
				}
				break;
			case 8:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_612(&iLocal_288))
					{
						func_739();
						iLocal_137 = 9;
					}
				}
				break;
			case 9:
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_603(&iLocal_288))
					{
						func_739();
						iLocal_137 = 10;
					}
				}
				break;
			case 10:
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_595(&iLocal_288))
					{
						func_739();
						iLocal_137 = 11;
					}
				}
				break;
			case 11:
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_578(&iLocal_288))
					{
						func_739();
						iLocal_137 = 12;
					}
				}
				break;
			case 12:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_556(&iLocal_288))
					{
						func_739();
						iLocal_137 = 13;
					}
				}
				break;
			case 13:
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_520(&iLocal_288))
					{
						func_739();
						iLocal_137 = 14;
					}
				}
				break;
			case 14:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_517(&iLocal_288))
					{
						func_739();
						iLocal_137 = 15;
					}
				}
				break;
			case 15:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_510(&iLocal_288))
					{
						func_739();
						iLocal_137 = 16;
					}
				}
				break;
			case 16:
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_415(&iLocal_288))
					{
						func_739();
						iLocal_137 = 17;
					}
				}
				break;
			case 17:
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_356(&iLocal_288))
					{
						func_739();
						if (!__LIB_0__::func_2(0))
						{
							iLocal_137 = 18;
						}
						else
						{
							iLocal_137 = 19;
						}
					}
				}
				break;
			case 18:
				if (func_741(iLocal_137, &iLocal_287, &iLocal_291, &uLocal_289, &iLocal_290))
				{
					if (func_337(&iLocal_288))
					{
						func_739();
						iLocal_137 = 19;
					}
				}
				break;
			case 19:
				__LIB_0__::func_526(0, 0);
				func_889();
				__LIB_17__::func_667(86, 1, 0, 1, 0);
				if ((Global_39990[117] == 0 || Global_39990[118] == 0) || Global_39990[170] == 0)
				{
					__LIB_17__::func_667(117, 1, 0, 1, 0);
					__LIB_17__::func_667(118, 1, 0, 1, 0);
					__LIB_17__::func_667(120, 1, 0, 1, 0);
					__LIB_17__::func_667(170, 1, 0, 1, 0);
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			case 20:
				func_324(&iLocal_138);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				__LIB_0__::func_325();
				func_892(3);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS");
				while (!__LIB_0__::func_223())
				{
					SYSTEM::WAIT(0);
				}
				if (iLocal_138 == 1)
				{
					__LIB_0__::func_507(-791.1766f, 185.8434f, 71.8349f, 188.7433f);
				}
				if (func_318(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(3);
				}
				func_889();
				__LIB_17__::func_667(86, 1, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
				if ((Global_39990[117] == 1 || Global_39990[118] == 1) || Global_39990[170] == 1)
				{
					__LIB_17__::func_667(117, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
					__LIB_17__::func_667(118, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
					__LIB_17__::func_667(120, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
					__LIB_17__::func_667(170, 0, !CAM::IS_SCREEN_FADED_OUT(), 1, 0);
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int iParam0)//Position - 0xA62
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				func_316();
				break;
			case 1:
				func_309(PLAYER::PLAYER_PED_ID());
				break;
			case 2:
				func_308(PLAYER::PLAYER_PED_ID(), 0);
				break;
			case 3:
				func_238(PLAYER::PLAYER_PED_ID(), 12, 32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				break;
			case 4:
				func_238(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_238(PLAYER::PLAYER_PED_ID(), 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				func_238(PLAYER::PLAYER_PED_ID(), 12, 52, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				break;
			case 5:
				func_238(PLAYER::PLAYER_PED_ID(), 12, 27, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				break;
		}
		func_2(PLAYER::PLAYER_PED_ID(), 1);
	}
}

void func_2(int iParam0, int iParam1)//Position - 0xB44
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_0__::func_216(iParam0);
		if (__LIB_0__::func_43(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_235(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_25(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_14__::func_529(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_17__::func_127();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::isGlobal_43052EqualsValue(0) && !__LIB_0__::isGlobal_43052EqualsValue(1)) && !__LIB_0__::isGlobal_43052EqualsValue(2)) && !__LIB_0__::isGlobal_43052EqualsValue(3)) && !__LIB_0__::isGlobal_43052EqualsValue(4)) && !__LIB_0__::isGlobal_43052EqualsValue(9)) && !__LIB_0__::isGlobal_43052EqualsValue(10)))
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

void func_25(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1F0D
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
		iVar0 = __LIB_0__::func_216(iParam0);
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
		if (__LIB_0__::func_43(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_233(iParam0, iVar1, &iVar2, 0))
			{
				func_238(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_231(iParam0, iVar1, &iVar2))
			{
				func_238(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_228(iParam0);
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
			func_35(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_35(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_35(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2BCB
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
			func_176(iVar5, iParam1, iParam2, 1);
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
						func_176(iVar5, 10, 0, 1);
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
									func_176(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_35(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_176(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_167(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_35(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_161(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_176(iVar5, 14, uVar18[iVar1], 1);
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
							func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_176(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_35(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_152(iParam0);
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
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_35(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_150(iVar5, iVar24, iVar23, iVar25);
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
							func_35(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_35(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_35(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_35(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_35(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_35(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_35(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_161(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_150(iVar5, func_167(iParam0, 8, -1), iParam2, func_167(iParam0, 4, -1));
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
				func_83(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_150(iVar5, iParam2, iVar44, iVar45);
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
			func_161(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_150(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_35(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_35(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_150(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_150(iVar5, iVar58, iVar57, iParam2);
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
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_150(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_35(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_55(iParam0, 9, iVar63))
						{
							func_35(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_35(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_35(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_35(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_167(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_167(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_35(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_35(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_35(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_35(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_35(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_35(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_35(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_35(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_35(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_35(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_152(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_35(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_35(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_36(iParam0, &uVar4))
		{
			func_35(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_35(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_35(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_35(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_167(iParam0, 3, -1), iVar10);
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
				func_35(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_36(int iParam0, var uParam1)//Position - 0x4A78
{
	int iVar0;
	int iVar1;
	*uParam1 = func_167(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_55(iParam0, iVar1, iVar0))
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

int func_55(int iParam0, int iParam1, int iParam2)//Position - 0x8D34
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
				if (!func_55(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_55(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_55(iParam0, 14, iVar6))
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
			if (!func_55(iParam0, 14, uVar11[iVar10]))
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
						return func_55(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_55(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_83(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x10A79
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
	func_84(iParam0, bParam3, 0, -1);
}

void func_84(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x10AC6
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
		bVar3 = func_130(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_121(iParam0, iParam3);
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

int func_121(int iParam0, int iParam1)//Position - 0x1FCA7
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
				iVar3 = func_167(iParam0, 11, -1);
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
				iVar5 = func_167(iParam0, 11, -1);
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

int func_130(int iParam0, bool bParam1)//Position - 0x20106
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
						iVar3 = func_167(iParam0, 11, -1);
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
						iVar5 = func_167(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
						iVar8 = func_167(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_167(iParam0, 11, -1), 0);
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
						iVar12 = func_167(iParam0, 8, -1);
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

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x28F93
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
					iVar0 = func_150(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_150(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_152(int iParam0)//Position - 0x2A3E8
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
		if (!func_157(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_157(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_157(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2ADB2
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_167(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D79A
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_228(iParam0))
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

int func_167(int iParam0, int iParam1, int iParam2)//Position - 0x2DA49
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
				if (func_55(iParam0, iParam1, iVar0))
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
				if (func_55(iParam0, iParam1, iVar1))
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

void func_176(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3070D
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
							func_176(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_176(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_176(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_176(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_176(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_176(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_176(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_176(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_176(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_176(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_228(int iParam0)//Position - 0x4D9A5
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar1 = func_167(iParam0, 11, -1);
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
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0) != __LIB_0__::getMinusOneOrNull() && __LIB_0__::func_287(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0)))
			{
				return 1;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			if (iVar0 > 15)
			{
				iVar3 = func_167(iParam0, 11, -1);
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

int func_231(int iParam0, int iParam1, int iParam2)//Position - 0x4DD17
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_318(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4DDDE
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_318(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_235(int iParam0, int iParam1, int iParam2)//Position - 0x4E09E
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
				if (func_318(iParam0, iParam1, iVar0))
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
				if (func_318(iParam0, iParam1, iVar1))
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

int func_238(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x4E188
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
										func_238(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_238(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_235(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_233(iParam0, iVar10, &iVar4, 1))
							{
								func_238(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_238(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_238(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_238(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_238(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_238(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_238(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_238(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_238(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_238(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_233(iParam0, iVar10, &iVar4, 0))
		{
			func_238(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_231(iParam0, iVar10, &iVar4))
		{
			func_238(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_308(int iParam0, int iParam1)//Position - 0x62F38
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			switch (iParam1)
			{
				case 0:
					func_238(iParam0, 12, 7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					break;
				case 1:
					break;
				case 2:
					break;
				}
			}
	}
}

void func_309(int iParam0)//Position - 0x62F8B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_216(iParam0);
	if (__LIB_0__::func_43(iVar0))
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
		func_25(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_235(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_310(__LIB_0__::func_154(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_235(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_235(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_310(__LIB_0__::func_154(0), 3, 70, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 3, 71, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 3, 72, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 3, 73, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 3, 74, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 3, 75, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 4, 41, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 4, 42, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 4, 43, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 4, 44, 1, 0, 0, 0);
					func_310(__LIB_0__::func_154(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_235(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_25(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_310(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x631E8
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_313(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_313(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x633A3
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
								func_313(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_313(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_313(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_313(iParam0, 14, iVar5, 1, 0);
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
								func_313(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_313(iParam0, 14, 17, 1, 0);
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

void func_316()//Position - 0x63831
{
	__LIB_15__::func_986(&Global_103950);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_25(PLAYER::PLAYER_PED_ID(), &(Global_100166[__LIB_0__::func_216(PLAYER::PLAYER_PED_ID()) /*65*/]), 0, 0, 1, 0);
	}
}

int func_318(int iParam0, int iParam1, int iParam2)//Position - 0x63995
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
				if (!func_318(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_318(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_318(iParam0, 14, iVar4))
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
			if (!func_318(iParam0, 14, uVar8[iVar7]))
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

void func_324(var uParam0)//Position - 0x63CF4
{
	switch (*uParam0)
	{
		case 1:
			func_325("FAM5_F_Y1");
			break;
		case 2:
			func_325("CMN_GENSTCK" /* GXT: ~s~The car got stuck. */);
			break;
		case 3:
			func_325("CMN_MDEST" /* GXT: ~s~Michael's car was destroyed. */);
			break;
		case 4:
			func_325("FAM5_F_CLB");
			break;
		case 5:
			func_325("CMN_ADIED" /* GXT: ~s~Amanda died. */);
			break;
		case 6:
			func_325("FAM5_F_B1");
			break;
		case 7:
			func_325("CMN_JDIED" /* GXT: ~s~Jimmy died. */);
			break;
		case 8:
			func_325("CMN_JLEFT" /* GXT: ~s~Jimmy was left behind. */);
			break;
		case 9:
			func_325("FAM5_F_E0");
			break;
		case 10:
			func_325("FAM5_F_E1");
			break;
		case 11:
			func_325("FAM5_F_E2");
			break;
		case 0:
		case 12:
			func_325("FAM5_FAIL");
			break;
	}
}

void func_325(char* sParam0)//Position - 0x63DE2
{
	__LIB_0__::func_381(sParam0);
	func_326(0);
}

void func_326(int iParam0)//Position - 0x63DF5
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_327(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_327(int iParam0)//Position - 0x63E3A
{
	int iVar0;
	int iVar1;
	__LIB_14__::func_534();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_328(&(Global_113386.f_2363.f_539), iVar1);
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

void func_328(var uParam0, int iParam1)//Position - 0x63F4A
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
			if (!func_330(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_330(int iParam0, var uParam1, float fParam2)//Position - 0x64121
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
			return func_330(8, uParam1, fParam2);
			break;
		case 10:
			return func_330(8, uParam1, fParam2);
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

int func_337(int iParam0)//Position - 0x64D43
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_1(5);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				__LIB_17__::func_217(PLAYER::PLAYER_PED_ID());
				__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), Local_578.f_1, Local_578.f_4, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			*iParam0++;
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					*iParam0++;
				}
			}
			break;
		case 2:
			if (__LIB_17__::func_216("family_5_mcs_5_p5", 1) && Global_78579 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA(Local_578.f_1, 25f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PEDS(Local_578.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_578.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_578.f_1, 25f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_578.f_1, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_578.f_1, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 4:
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_356(int iParam0)//Position - 0x65730
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			if (__LIB_17__::func_216("family_5_mcs_5_p4", 1))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_575[0 /*7*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_575[0 /*7*/], false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_575[0 /*7*/], false))
								{
									iLocal_492 = 1;
								}
							}
						}
					}
					__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_161.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_161.f_0, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_161.f_0, "Amanda_Note", 1, Local_161.f_1, 0);
					}
				}
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME_INT");
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_492 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_575[0 /*7*/]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_575[0 /*7*/], false))
						{
							ENTITY::SET_ENTITY_COORDS(Local_575[0 /*7*/], -824.9539f, 174.8554f, 69.8377f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(Local_575[0 /*7*/], 157.3586f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_575[0 /*7*/], 5f);
						}
					}
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_128, ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f || ENTITY::IS_ENTITY_AT_COORD(iVar0, -826.78f, 177.64f, 72.13f, 12f, 12f, 8f, false, true, 0))
						{
							if (!__LIB_0__::func_363(iVar0, 0, 1))
							{
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
								}
								__LIB_17__::func_168(iVar0);
								ENTITY::SET_ENTITY_COORDS(iVar0, -825.8718f, 157.3143f, 69.4619f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iVar0, 90f);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
								__LIB_17__::func_224(iVar0, -825.8718f, 157.3143f, 69.4619f, 90f, 24, 0);
							}
						}
					}
				}
				MISC::CLEAR_AREA_OF_PEDS(Local_578.f_1, 25f, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_578.f_1, 25f);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_578.f_1, 25f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_578.f_1, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_578.f_1, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				RECORDING::REPLAY_STOP_EVENT();
				*iParam0++;
			}
			break;
		case 3:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			__LIB_0__::func_46(1, 1);
			*iParam0++;
			break;
		case 4:
			if (Global_78579 == 1)
			{
				*iParam0++;
			}
			break;
		case 5:
			if (!__LIB_0__::func_2(0))
			{
				return 1;
			}
			else if (Global_78579 == 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_415(int iParam0)//Position - 0x6C396
{
	float fVar0;
	MISC::SET_BIT(&(Local_242.f_13), 20);
	func_509();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && __LIB_1__::func_819(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
	{
		PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 281 /*INPUT_VEH_MOVE_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 62 /*INPUT_VEH_MOVE_DOWN_ONLY*/, true);
	}
	else
	{
		PLAYER::SET_PLAYER_SPRINT(PLAYER::PLAYER_ID(), true);
	}
	switch (*iParam0)
	{
		case 0:
			__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), Local_578.f_1, Local_578.f_4, 0, 1, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1000f);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			__LIB_14__::func_804(0);
			VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
			*iParam0++;
			break;
		case 1:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, 0);
				iLocal_537 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_16__::func_302(10000, iLocal_537))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				*iParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("missfam5_blackout");
			STREAMING::REQUEST_ANIM_DICT("move_m@drunk@verydrunk");
			func_500(5);
			if ((STREAMING::HAS_PTFX_ASSET_LOADED() && STREAMING::HAS_ANIM_DICT_LOADED("missfam5_blackout")) && STREAMING::HAS_ANIM_DICT_LOADED("move_m@drunk@verydrunk"))
			{
				*iParam0++;
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
				{
					iLocal_511 = PED::CREATE_SYNCHRONIZED_SCENE(-966.935f, 309.252f, 69.35f, 0f, 0f, -90f, 2);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_511, "missfam5_blackout", "vomit", 1000f, -2f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					CAM::DESTROY_ALL_CAMS(false);
					iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_495, iLocal_511, "vomit_cam", "missfam5_blackout");
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					__LIB_6__::func_359(PLAYER::PLAYER_PED_ID(), 50000, 0);
					func_892(3);
					AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_YOGA_ON_DRUGS");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
					GRAPHICS::ANIMPOSTFX_STOP("DMT_flight");
					GRAPHICS::ANIMPOSTFX_PLAY("DrugsDrivingOut", 0, false);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 10f, 4);
					*iParam0++;
				}
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_496))
					{
						CAM::DESTROY_CAM(iLocal_496, false);
					}
					fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511);
					if (fVar0 < 0.95f)
					{
						if (fVar0 > 0.53f && fVar0 < 0.635f)
						{
							if (iLocal_318 == 0)
							{
								func_496(5);
								iLocal_318 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_PED_BONE("scr_trev_puke", PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 0f, 0f, 0f, 31086, 1f, false, false, false);
							}
						}
						else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_318))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_318, false);
							iLocal_318 = 0;
						}
						if (iLocal_551 == 0)
						{
							if (fVar0 > 0.925f)
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
									iLocal_551 = 1;
								}
							}
						}
					}
					else
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						STREAMING::REMOVE_ANIM_DICT("missfam5_blackout");
						*iParam0++;
					}
				}
			}
			break;
		case 5:
			if (iLocal_498 == 1)
			{
				SYSTEM::WAIT(500);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_495(3);
			func_495(5);
			STREAMING::REMOVE_PTFX_ASSET();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (CAM::DOES_CAM_EXIST(iLocal_495))
			{
				CAM::SET_CAM_ACTIVE(iLocal_495, false);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
				}
				CAM::DESTROY_CAM(iLocal_495, false);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			__LIB_0__::func_499(247, 0);
			*iParam0++;
			break;
		case 6:
			if (!func_493("FAM5_PUKE"))
			{
				if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_PUKE", 7, 0, 0, 0))
				{
					func_478("FAM5_PUKE", 1);
				}
			}
			if (CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(1 /*CAMERA_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			}
			func_476(PLAYER::PLAYER_PED_ID(), &iLocal_528);
			__LIB_28__::func_247(&Local_242, Local_128, 0.25f, 0.25f, 2f, 1, &Local_130, 1, 1, -1);
			if (__LIB_0__::func_719() || __LIB_6__::func_181())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5_p4") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_128, true) < (100f / 2f))
			{
				CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_5_p4", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_161.f_0))
				{
					if (func_428(&Local_161, 1))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_161.f_0, true);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_161.f_0, true);
					}
				}
			}
			else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5_p4") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_WAKE_UP_VOMIT"))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
					}
				}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME"))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_HOME");
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME"))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_128, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 20f)
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME");
					}
				}
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME_INT"))
			{
				if (((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.52106f, 71.10547f, -795.68176f, 177.69223f, 74.83471f, 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.70013f, 185.89522f, 71.10547f, -800.20703f, 176.43637f, 74.83471f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.31798f, 71.33471f, -805.52563f, 178.1133f, 74.83471f, 8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.504105f, -804.6584f, 179.532f, 78.74073f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.39716f, 179.20226f, 75.24073f, -809.9282f, 175.56245f, 78.74073f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.63283f, 74.65309f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.06844f, 75.24073f, -799.83997f, 168.9565f, 78.74073f, 3.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.09436f, 180.61465f, 75.24073f, -816.72327f, 177.80681f, 78.86246f, 8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.86633f, 175.49997f, 75.24073f, -814.8033f, 173.92299f, 78.74073f, 3.6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.71277f, 167.79799f, 75.24073f, -805.5717f, 175.19133f, 78.74073f, 3f, false, true, 0))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_WAKE_UP_VOMIT");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_HOME_INT");
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_HOME_INT"))
			{
				if (((((((((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.52106f, 71.10547f, -795.68176f, 177.69223f, 74.83471f, 6f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.70013f, 185.89522f, 71.10547f, -800.20703f, 176.43637f, 74.83471f, 4f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.31798f, 71.33471f, -805.52563f, 178.1133f, 74.83471f, 8f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.504105f, -804.6584f, 179.532f, 78.74073f, 2.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.39716f, 179.20226f, 75.24073f, -809.9282f, 175.56245f, 78.74073f, 4f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.63283f, 74.65309f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.06844f, 75.24073f, -799.83997f, 168.9565f, 78.74073f, 3.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.09436f, 180.61465f, 75.24073f, -816.72327f, 177.80681f, 78.86246f, 8f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.86633f, 175.49997f, 75.24073f, -814.8033f, 173.92299f, 78.74073f, 3.6f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.71277f, 167.79799f, 75.24073f, -805.5717f, 175.19133f, 78.74073f, 3f, false, true, 0))
				{
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_HOME_INT");
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_242.f_5))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -801.42f, 182.86f, 73.1f, 2.25f, 2.25f, 2.25f, false, true, 0))
					{
						__LIB_0__::func_325();
						__LIB_0__::func_638();
						__LIB_17__::func_221(&Local_242, 0);
						__LIB_0__::func_498(0, -1);
						iLocal_520 = 1;
						*iParam0++;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -800.8f, 183.71f, 73.5f, 1.5f, 1.25f, 2f, false, true, 0))
				{
					__LIB_0__::func_325();
					__LIB_0__::func_638();
					__LIB_17__::func_221(&Local_242, 0);
					__LIB_0__::func_498(0, -1);
					iLocal_520 = 1;
					*iParam0++;
				}
			}
			break;
		case 7:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_213(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2f, 1, 1056964608, 0, 1, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					SYSTEM::SETTIMERA(0);
					*iParam0++;
				}
			}
			else
			{
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		case 8:
			if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_325();
					__LIB_0__::func_638();
				}
				if (SYSTEM::TIMERA() > 5000 || !__LIB_0__::func_75())
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 4f, 4);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_428(int iParam0, bool bParam1)//Position - 0x6D5E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_1))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_1, iParam0->f_2, true, true, false);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_2, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_5, 2, true);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
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

void func_476(int iParam0, int iParam1)//Position - 0x6FF82
{
	int iVar0[16];
	int iVar1;
	struct<3> Var2;
	iVar1 = 0;
	if (*iParam1 == 0)
	{
		*iParam1 = MISC::GET_GAME_TIMER();
	}
	else if (__LIB_16__::func_302(15000, *iParam1))
	{
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
						if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0[iVar1], false))
						{
							if (__LIB_0__::func_76(iVar0[iVar1], iParam0, 1) < 7.5f)
							{
								Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0[iVar1], ENTITY::GET_ENTITY_COORDS(iParam0, true)) };
								if (Var2.f_1 > 1f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0[iVar1]))
									{
										__LIB_0__::func_640(iVar0[iVar1], "SEE_WEIRDO", 3);
										TASK::TASK_LOOK_AT_ENTITY(iVar0[iVar1], iParam0, 1000, 0, 2);
										*iParam1 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
				iVar1++;
			}
		}
	}
}

void func_478(char* sParam0, bool bParam1)//Position - 0x700CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_493(sParam0))
		{
			iVar1 = iLocal_552;
			if (iLocal_553 < iVar1)
			{
				iLocal_552[iLocal_553] = iVar0;
				iLocal_553++;
			}
		}
	}
	else
	{
		iVar2 = func_480(iVar0);
		if (iVar2 != -1)
		{
			iLocal_552[iVar2] = 0;
			func_479();
			iLocal_553 = (iLocal_553 - 1);
		}
	}
}

void func_479()//Position - 0x70131
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_552;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_552[iVar1] == 0)
		{
			if (iLocal_552[iVar1 + 1] != 0)
			{
				iLocal_552[iVar1] = iLocal_552[iVar1 + 1];
				iLocal_552[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_480(int iParam0)//Position - 0x70188
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_553)
	{
		if (iLocal_552[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_493(char* sParam0)//Position - 0x70867
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_480(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

void func_495(int iParam0)//Position - 0x708D0
{
	switch (iParam0)
	{
		case 1:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_YOGA_ALIENS");
			break;
		case 2:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_YOGA_CHIMPS");
			break;
		case 4:
		case 3:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_YOGA_DRUGS_01");
			break;
		case 5:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TAXI_VOMIT");
			break;
		case 6:
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_WASH_FACE");
			break;
	}
}

void func_496(int iParam0)//Position - 0x7093F
{
	switch (iParam0)
	{
		case 2:
			if (Local_577[1 /*3*/].f_2 == 0)
			{
				if (Local_577[1 /*3*/].f_1 == -1)
				{
					Local_577[1 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FRONTEND(Local_577[1 /*3*/].f_1, Local_577[1 /*3*/], "FAMILY_5_SOUNDS", true);
				Local_577[1 /*3*/].f_2 = 1;
			}
			break;
		case 1:
			if (Local_577[0 /*3*/].f_2 == 0)
			{
				if (Local_577[0 /*3*/].f_1 == -1)
				{
					Local_577[0 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FRONTEND(Local_577[0 /*3*/].f_1, Local_577[0 /*3*/], "FAMILY_5_SOUNDS", true);
				Local_577[0 /*3*/].f_2 = 1;
			}
			break;
		case 3:
			if (Local_577[2 /*3*/].f_2 == 0)
			{
				if (Local_577[2 /*3*/].f_1 == -1)
				{
					Local_577[2 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FRONTEND(Local_577[2 /*3*/].f_1, Local_577[2 /*3*/], "FAMILY_5_SOUNDS", true);
				Local_577[2 /*3*/].f_2 = 1;
			}
			break;
		case 4:
			if (Local_577[3 /*3*/].f_2 == 0)
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_577[3 /*3*/].f_1, Local_577[3 /*3*/], PLAYER::PLAYER_PED_ID(), "FAMILY_5_SOUNDS", false, 0);
				Local_577[3 /*3*/].f_2 = 1;
			}
			break;
		case 5:
			if (Local_577[4 /*3*/].f_2 == 0)
			{
				if (Local_577[4 /*3*/].f_1 == -1)
				{
					Local_577[4 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_577[4 /*3*/].f_1, Local_577[4 /*3*/], PLAYER::PLAYER_PED_ID(), "FAMILY_5_SOUNDS", false, 0);
				Local_577[4 /*3*/].f_2 = 1;
			}
			break;
		case 6:
			if (Local_577[5 /*3*/].f_2 == 0)
			{
				if (Local_577[5 /*3*/].f_1 == -1)
				{
					Local_577[5 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
				}
				AUDIO::PLAY_SOUND_FROM_COORD(Local_577[5 /*3*/].f_1, Local_577[5 /*3*/], -804.52f, 169.05f, 76.65f, "FAMILY_5_SOUNDS", false, 0, false);
				Local_577[5 /*3*/].f_2 = 1;
			}
			break;
	}
}

void func_500(int iParam0)//Position - 0x70C51
{
	uLocal_139 = iParam0;
}

void func_509()//Position - 0x71205
{
	if (iLocal_520 == 0)
	{
		if (!func_493("FAM5_HOME1"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.7468f, 183.29677f, 70.847786f, -816.38086f, 178.67194f, 75.15309f, 5.5f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME1", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME1", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME2"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.3106f, 184.70981f, 69.00281f, -810.90906f, 182.60814f, 75.58835f, 2.4f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME2", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME2", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME3"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -805.9893f, 183.16713f, 73.502525f, -804.6068f, 179.57372f, 78.74073f, 2.35f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME3", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME3", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME9"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.9456f, 181.74925f, 66.15295f, -801.8423f, 168.54143f, 75.33471f, 7.6f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME9", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME9", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME5"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797.7243f, 183.22284f, 71.74468f, -795.5848f, 177.69713f, 74.83471f, 6f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME5", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME5", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME8"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.39716f, 179.20226f, 75.24073f, -809.9282f, 175.56245f, 78.74073f, 4f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME8", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME8", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME6") && !func_493("FAM5_HOME10"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.09436f, 180.61465f, 75.24073f, -816.72327f, 177.80681f, 78.86246f, 5f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME6", 7, 0, 0, 0))
								{
									func_478("FAM5_HOME6", 1);
								}
								break;
							case 1:
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME10", 7, 0, 0, 0))
								{
									func_478("FAM5_HOME10", 1);
								}
								break;
							}
						}
					}
				}
		}
		if (!func_493("FAM5_HOME4"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME4", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME4", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME7"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.06844f, 75.24073f, -799.83997f, 168.9565f, 78.74073f, 3.5f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME7", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME7", 1);
						}
					}
				}
			}
		}
		if (!func_493("FAM5_HOME11"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -793.242f, 180.62044f, 68.83467f, -775.61566f, 187.14807f, 74.83467f, 24f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -795.84607f, 177.21494f, 74.83504f, -792.3773f, 167.71844f, 69.388756f, 8f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_HOME11", 7, 0, 0, 0))
						{
							func_478("FAM5_HOME11", 1);
						}
					}
				}
			}
		}
	}
}

int func_510(int iParam0)//Position - 0x71712
{
	struct<3> Var0;
	struct<3> Var1;
	CLOCK::SET_CLOCK_TIME(22, 0, 0);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_FAMILY5_CAMERA", 0);
	switch (*iParam0)
	{
		case 0:
			STATS::STAT_DISABLE_STATS_TRACKING();
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, true, false, false, false, false);
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::FORCE_EXPOSURE_READBACK(true);
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::ANIMPOSTFX_STOP("DMT_flight_intro");
				GRAPHICS::ANIMPOSTFX_PLAY("DMT_flight", 0, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_flying", "falling_to_skydive", 3))
				{
					__LIB_12__::func_915(1);
					CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
					__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
					__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), -2100f, 700.325f, 1200f, 128f, 0, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					*iParam0++;
				}
				else
				{
					*iParam0++;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512))
				{
					STREAMING::REQUEST_ANIM_DICT("missfam5_flying");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_flying"))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
						WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
						__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), -2100f, 700.325f, 1200f, 128f, 0, 0, 0);
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512))
						{
							iLocal_512 = PED::CREATE_SYNCHRONIZED_SCENE(-900f, 100.325f, 800f, 0f, 0f, -139.21f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_512, "missfam5_flying", "falling_to_skydive", 1000f, -1000f, 0, 0, 1000f, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							CAM::DESTROY_ALL_CAMS(false);
							iLocal_497 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_497, iLocal_512, "falling_to_skydive_cam", "missfam5_flying");
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						}
						*iParam0++;
					}
				}
				else
				{
					*iParam0++;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_flying", "falling_to_skydive", 3))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(5f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.35f);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512))
				{
					CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_FLYING"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_5_FLYING");
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_512) >= 0.715f)
					{
						if (iLocal_491 == 0)
						{
							if (AUDIO::LOAD_STREAM("FLYING_STREAM", "FAMILY_5_SOUNDS"))
							{
								AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", true);
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_549 = 0;
								iLocal_491 = 1;
							}
						}
					}
					if (iLocal_510 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_512) >= 0.723f)
						{
							CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
							CAM::SHAKE_GAMEPLAY_CAM("FAMILY5_DRUG_TRIP_SHAKE", 1f);
							CAM::RENDER_SCRIPT_CAMS(false, true, 3450, false, false, 0);
							iLocal_510 = 1;
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_512) >= 1f)
					{
						TASK::TASK_SKY_DIVE(PLAYER::PLAYER_PED_ID(), false);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Parachuting"), false, 0, false);
						if (CAM::DOES_CAM_EXIST(iLocal_496))
						{
							CAM::DESTROY_CAM(iLocal_496, false);
						}
						fLocal_541 = 1f;
						fLocal_542 = 1f;
						fLocal_543 = 0.01f;
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM");
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						*iParam0++;
					}
				}
			}
			break;
		case 3:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				iLocal_549 = AUDIO::GET_STREAM_PLAY_TIME();
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_DRUG_FLIGHT_END", false, -1);
			func_514();
			func_512();
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 144 /*INPUT_PARACHUTE_DEPLOY*/, true);
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 10f, 0f) };
			Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, -5f) };
			if (((((((iLocal_549 >= 201000 || !AUDIO::IS_STREAM_PLAYING()) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0f, 0f, 0f, true) > 8000f) || !func_511(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f)) || !func_511(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, 1f)) || !func_511(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, 1f))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "FLYING_STREAM_END_INSTANT", "FAMILY_5_SOUNDS", true);
				iLocal_535 = 1;
			}
			if (iLocal_535 == 1)
			{
				iLocal_496 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_496, -967.57654f, 309.46002f, 65.55226f, -89.499146f, 0.013776f, 37.204556f, 40f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				*iParam0++;
			}
			break;
		case 4:
			if (CAM::DOES_CAM_EXIST(iLocal_496) && CAM::IS_CAM_RENDERING(iLocal_496))
			{
				MISC::SET_TIME_SCALE(1f);
				AUDIO::STOP_STREAM();
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_FLYING");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_DRUG_FLIGHT_END");
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM");
				STREAMING::REMOVE_ANIM_DICT("missfam5_flying");
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
				}
				CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(15f, 0f, 4);
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
				iLocal_529 = 0;
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::FORCE_EXPOSURE_READBACK(false);
				}
				STATS::STAT_ENABLE_STATS_TRACKING();
				return 1;
			}
			break;
	}
	return 0;
}

int func_511(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x71C7C
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	iVar4 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0, Param1, fParam2, 19, PLAYER::PLAYER_PED_ID(), 4);
	if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar4, &iVar0, &uVar1, &uVar2, &uVar3) != 2)
	{
	}
	if (iVar0 != 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_512()//Position - 0x71CBF
{
	__LIB_17__::func_744(&fLocal_541, fLocal_542, fLocal_543, 1);
	MISC::SET_TIME_SCALE(fLocal_541);
	if ((MISC::GET_GAME_TIMER() - iLocal_550) > 0)
	{
		fLocal_542 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 0.75f);
		fLocal_543 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 0.001f);
		iLocal_550 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
	}
}

void func_514()//Position - 0x71D7D
{
	float fVar0;
	struct<3> Var1;
	float fVar2;
	fVar0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 149 /*INPUT_PARACHUTE_PITCH_UD*/);
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	fVar2 = (0f + ((fLocal_540 * 30f) * SYSTEM::TIMESTEP()));
	if (fVar0 > 0.5f)
	{
		Local_124.f_2 = (50f + 10f);
	}
	else
	{
		Local_124.f_2 = 50f;
	}
	if (fVar0 < -0.5f)
	{
		if (iLocal_547 == 0)
		{
			iLocal_547 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_546 = (MISC::GET_GAME_TIMER() - iLocal_547);
		}
	}
	else
	{
		if (iLocal_544 == 0)
		{
			iLocal_544 = iLocal_546;
			iLocal_545 = MISC::GET_GAME_TIMER();
		}
		iLocal_546 = 0;
		iLocal_547 = 0;
	}
	if (iLocal_544 != 0)
	{
		if (!__LIB_16__::func_302(iLocal_544, iLocal_545))
		{
			if (fVar0 > 0.5f)
			{
				Local_124.f_1 = 25f;
				Local_124.f_2 = 400f;
			}
		}
		else
		{
			iLocal_544 = 0;
			iLocal_545 = 0;
			Local_124.f_1 = 150f;
			Local_124.f_2 = 50f;
		}
	}
	if (Var1.f_2 > 700f)
	{
		Local_124.f_2 = 0f;
	}
	if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, (Local_124.f_0 * fVar2), (Local_124.f_1 * fVar2), (Local_124.f_2 * fVar2), Local_125, 0, true, false, false, false, true);
	}
}

int func_517(int iParam0)//Position - 0x71FCE
{
	CLOCK::SET_CLOCK_TIME(22, 0, 0);
	__LIB_0__::func_646();
	switch (*iParam0)
	{
		case 0:
			__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
			__LIB_12__::func_915(1);
			__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), Local_578.f_1, Local_578.f_4, 0, 1, 0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
			*iParam0++;
			break;
		case 1:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, 0);
				iLocal_537 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_16__::func_302(10000, iLocal_537))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_CUSTOM");
				*iParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_IPL("SpaceInterior");
			CUTSCENE::REQUEST_CUTSCENE("fam_5_mcs_6", 8);
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("fam_5_mcs_6"))
			{
				__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
				GRAPHICS::ANIMPOSTFX_STOP("DMT_flight");
				GRAPHICS::SET_TIMECYCLE_MODIFIER("stoned_monkeys");
				CUTSCENE::START_CUTSCENE(2112);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien", 0, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien", 3, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien", 4, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^1", 0, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^1", 3, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^1", 4, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^2", 0, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^2", 3, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^2", 4, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^3", 0, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^3", 3, 0, 0, joaat("S_M_M_MovAlien_01"));
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Movie_Alien^3", 4, 0, 0, joaat("S_M_M_MovAlien_01"));
			}
			break;
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(41.1f, -779.8f, 837f, 20f, 0);
				MISC::CLEAR_AREA(Local_578.f_1, 25f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PEDS(Local_578.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_578.f_1, 25f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_578.f_1, 25f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_578.f_1, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_578.f_1, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 4:
			STREAMING::REQUEST_ANIM_DICT("missfam5_flying");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM", false, -1);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				switch (iLocal_548)
				{
					case 0:
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 30465)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							GRAPHICS::SET_TIMECYCLE_MODIFIER("stoned_aliens");
							iLocal_548++;
						}
						break;
					case 1:
						if (CUTSCENE::GET_CUTSCENE_TIME() >= 48565)
						{
							GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
							GRAPHICS::ANIMPOSTFX_PLAY("DMT_flight_intro", 0, false);
							iLocal_548++;
						}
						break;
					}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 28500)
				{
					if (!func_318(PLAYER::PLAYER_PED_ID(), 12, 52))
					{
						func_1(4);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, false);
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
					__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), -2100f, 700.325f, 1200f, 128f, 0, 0, 0);
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512))
					{
						iLocal_512 = PED::CREATE_SYNCHRONIZED_SCENE(-900f, 100.325f, 800f, 0f, 0f, -139.21f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_512, "missfam5_flying", "falling_to_skydive", 1000f, -1000f, 0, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						CAM::DESTROY_ALL_CAMS(false);
						iLocal_497 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_497, iLocal_512, "falling_to_skydive_cam", "missfam5_flying");
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				STREAMING::REMOVE_IPL("SpaceInterior");
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (iLocal_498 == 1)
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM", false, -1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "MICHAEL_LONG_SCREAM", "FAMILY_5_SOUNDS", true);
					}
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			else if (iLocal_498 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_498 = 1;
				}
			}
			break;
	}
	return 0;
}

int func_520(int iParam0)//Position - 0x7249F
{
	int iVar0;
	var uVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	MISC::SET_BIT(&(Local_242.f_13), 20);
	MISC::SET_BIT(&(Local_242.f_13), 9);
	MISC::SET_BIT(&(Local_242.f_13), 3);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	func_543(&(Local_146.f_7), __LIB_1__::func_295(bLocal_292, "FAM5_SON7b", "FAM5_SON7"), __LIB_1__::func_295(bLocal_292, "FAM5_SON8b", "FAM5_SON8"));
	func_538(&iLocal_484, &(Local_146.f_8), __LIB_1__::func_295(bLocal_292, "FAM5_SON7b", "FAM5_SON7"), __LIB_1__::func_295(bLocal_292, "FAM5_SON8b", "FAM5_SON8"), __LIB_1__::func_295(bLocal_292, "FAM5_SON9b", "FAM5_SON9"));
	func_531(0.5f, 1f, 2500, 2f, 2f);
	func_529(&Local_130);
	if (ENTITY::DOES_ENTITY_EXIST(Local_217.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_217.f_0, false))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_217.f_0, 1) > 15f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_217.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_217);
					ENTITY::REMOVE_MODEL_HIDE(Local_176.f_2, 1f, Local_176.f_1, false);
				}
			}
		}
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false) && !PED::IS_PED_INJURED(Local_146.f_0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (*iParam0)
		{
			case 0:
				StringCopy(&Local_130, "FAM5_GT4", 16);
				if (func_493("FAM5_SON6"))
				{
					if (__LIB_0__::func_75())
					{
						if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 2)
						{
							*iParam0++;
						}
					}
					else
					{
						*iParam0++;
					}
				}
				break;
			case 1:
				STREAMING::REQUEST_ANIM_DICT("missfam5mcs_6");
				__LIB_37__::func_183(&Local_242, Local_126, Global_19, 0, Local_146.f_0, Local_157.f_0, &Local_130, "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, &Local_133, "CMN_GENGETBCKY" /* GXT: ~s~Get back in your ~b~car. */, 0, 1, 1, -1);
				if (iLocal_518 != 0)
				{
					if (__LIB_16__::func_302(30000, iLocal_518))
					{
						iVar0 = 1;
					}
				}
				if (func_525(PLAYER::PLAYER_PED_ID(), Local_146.f_0, Local_157.f_0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_126, true) < 150f || iVar0 == 1)
					{
						iLocal_485 = 1;
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							}
						}
						__LIB_17__::func_221(&Local_242, 0);
						func_495(4);
						*iParam0++;
					}
				}
				break;
			case 2:
				STREAMING::REQUEST_ANIM_DICT("missfam5mcs_6");
				CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Local_157.f_0, 1);
				if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5mcs_6"))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_157.f_0))
					{
						if (__LIB_0__::func_213(Local_157.f_0, 5f, 1, 1056964608, 0, 1, 0))
						{
							if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_157.f_0) && !FIRE::IS_ENTITY_ON_FIRE(Local_157.f_0))
							{
								Var4 = { ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true) };
								fVar3 = ENTITY::GET_ENTITY_HEADING(Local_157.f_0);
								if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var4, 1, &Var5, &uVar2, &uVar1, 0, 3f, 0f))
								{
									ENTITY::SET_ENTITY_COORDS(Local_157.f_0, Var5, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_157.f_0, fVar3);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_157.f_0, 5f);
								}
								MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true), 2f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true), 4f, false, false, false, false, false, false, 0);
								MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true), 3f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, 0f, -4f, 0.1689f), 3.5f, false, false, false, false, false, false, 0);
								iLocal_517 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true), 15f, 0f, false);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
								{
									iLocal_513 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_513, Local_157.f_0, 0);
									CAM::DESTROY_ALL_CAMS(false);
									iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_495, iLocal_513, "Push_Michael_Out_Cam", "missfam5mcs_6");
									HUD::DISPLAY_HUD(false);
									HUD::DISPLAY_RADAR(false);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_157.f_0, iLocal_513, "Push_Michael_Out_Car", "missfam5mcs_6", 1000f, -1000f, 0, 1000f);
									ENTITY::SET_ENTITY_COLLISION(Local_157.f_0, false, false);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_146.f_0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_146.f_0, iLocal_513, "missfam5mcs_6", "push_michael_out_jimmy", 1000f, -1000f, 4, 32, 1000f, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_146.f_0, false, false);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_146.f_0, 32);
									if (ENTITY::DOES_ENTITY_EXIST(Local_158.f_0))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_158.f_0, false))
										{
											if (ENTITY::IS_ENTITY_ATTACHED(Local_158.f_0))
											{
												ENTITY::DETACH_ENTITY(Local_158.f_0, false, true);
											}
											ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_158.f_0, Local_146.f_0, PED::GET_PED_BONE_INDEX(Local_146.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
										}
									}
									__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
									TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_513, "missfam5mcs_6", "push_michael_out_player0", 1000f, -1000f, 5, 32, 1000f, 1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 32);
									Local_146.f_14 = 0;
									iLocal_505 = 0;
									iLocal_506 = 0;
									iLocal_507 = 0;
									iLocal_508 = 0;
									iLocal_509 = 0;
									AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									__LIB_0__::func_963(1, 0, 1, 0);
									*iParam0++;
								}
							}
						}
					}
				}
				break;
			case 3:
				func_524();
				STREAMING::REQUEST_ANIM_DICT("missfam5mcs_6drag");
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					PED::SET_PED_RESET_FLAG(Local_146.f_0, 310, true);
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
				{
					CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
					CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) <= 0.63f)
					{
						CAM::SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Local_157.f_0, 1);
					}
					VEHICLE::SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Local_157.f_0, true);
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_146.f_0, MISC::GET_HASH_KEY("Detach")))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_158.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_158.f_0, false))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(Local_158.f_0))
								{
									ENTITY::DETACH_ENTITY(Local_158.f_0, false, true);
								}
								OBJECT::DELETE_OBJECT(&Local_158);
							}
						}
					}
					if (CAM::DOES_CAM_EXIST(iLocal_495))
					{
						if (!CAM::IS_CAM_RENDERING(iLocal_495))
						{
							HUD::DISPLAY_HUD(false);
							HUD::DISPLAY_RADAR(false);
							CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_DRUGS_FOCUS_CAM"))
							{
								AUDIO::STOP_AUDIO_SCENE("FAMILY_5_DRUGS");
								AUDIO::START_AUDIO_SCENE("FAMILY_5_DRUGS_FOCUS_CAM");
							}
						}
						else if (iLocal_508 == 0)
						{
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, -0.7309f, 2.714f, 0.4813f), 3f);
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, -3.6668f, 0.1784f, 0.4859f), 3f);
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, -2.1213f, 0.5363f, 0.4975f), 3f);
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, -1.4263f, 1.9211f, 4.8319f), 3f);
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, -3.342f, -0.523f, -0.1449f), 3f);
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, 0f, 4.5f, 0.25f), 3f);
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, -2.0859f, 4.1187f, 0.1689f), 3f);
							func_523(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, 0f, -4.25f, 0.1689f), 3f);
							iLocal_508 = 1;
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) > 0.75f)
					{
						if (Local_146.f_14 == 0)
						{
							__LIB_0__::func_345(&uLocal_254, 0, 0);
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_157.f_0, -1000f, true);
							ENTITY::SET_ENTITY_COLLISION(Local_157.f_0, true, false);
							TASK::CLEAR_PED_TASKS(Local_146.f_0);
							PED::SET_PED_INTO_VEHICLE(Local_146.f_0, Local_157.f_0, -1);
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_146.f_0, Local_157.f_0, PLAYER::PLAYER_PED_ID(), 8, 25f, 786484, 25f, 2f, true);
							Local_146.f_9 = MISC::GET_GAME_TIMER();
							iLocal_554[8] = 0;
							iLocal_554[3] = 0;
							iLocal_554[2] = 0;
							Local_146.f_14 = 1;
						}
					}
					else if (iLocal_509 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) >= 0.35f)
						{
							iLocal_508 = 0;
							iLocal_509 = 1;
						}
					}
				}
				if (iLocal_506 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) > 0.6275f)
						{
							PED::DETACH_SYNCHRONIZED_SCENE(iLocal_513);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_513, ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_157.f_0, 2), 2);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5mcs_6", "push_michael_out_player0", 1000f, -4f, -1, 4194304, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513), false, true, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
							iLocal_506 = 1;
						}
					}
				}
				if (iLocal_505 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) >= 0.778f)
						{
							if (iLocal_507 == 1)
							{
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_513, "missfam5mcs_6", "push_michael_out_player0", 1000f, -4f, 4, 2, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
								MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, false, false, false, false, false, false, 0);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
								iLocal_505 = 1;
							}
						}
					}
				}
				if (iLocal_507 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
					{
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 10000, 10000, 0, true, true, false);
							iLocal_507 = 1;
						}
					}
				}
				if (TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 20000, 20000, 0, true, true, false);
				}
				if (iLocal_507 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) > 0.99f)
						{
							if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
								*iParam0++;
							}
							else
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
								*iParam0++;
							}
						}
					}
				}
				else if (iLocal_507 == 1)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) > 0.99f)
						{
							*iParam0++;
						}
					}
					else
					{
						*iParam0++;
					}
				}
				break;
			case 4:
				func_524();
				iLocal_513 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 2);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_513, 0f);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_513, true);
				MISC::CLEAR_AREA_OF_OBJECTS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f, false, false, false, false, false, false, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_513, "missfam5mcs_6drag", "fam_5_mcs_6_drag_michael", 1000f, -1000f, 5, 2, 1000f, 1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_495, iLocal_513, "fam_5_mcs_6_drag_cam", "missfam5mcs_6drag");
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
				*iParam0++;
				break;
			case 5:
				func_524();
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
				{
					if (!CAM::DOES_CAM_EXIST(iLocal_496))
					{
						iLocal_496 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
						CAM::SET_CAM_PARAMS(iLocal_496, -20.194494f, -219.79637f, 37.580395f, -81.94504f, -1.126925f, -11.828329f, 29f, 0, 1, 1, 2);
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_513) >= 0.99f)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_496))
						{
							CAM::SET_CAM_ACTIVE(iLocal_496, true);
						}
						*iParam0++;
					}
				}
				break;
			case 6:
				func_524();
				if (CAM::DOES_CAM_EXIST(iLocal_496) && CAM::IS_CAM_RENDERING(iLocal_496))
				{
					*iParam0++;
				}
				break;
			case 7:
				func_524();
				if (CAM::DOES_CAM_EXIST(iLocal_496) && CAM::IS_CAM_RENDERING(iLocal_496))
				{
					CAM::SET_CINEMATIC_MODE_ACTIVE(false);
					__LIB_0__::func_345(&uLocal_254, 0, 0);
					VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_517);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_146.f_0);
					PED::DELETE_PED(&Local_146);
					VEHICLE::DELETE_VEHICLE(&Local_157);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_DRUGS");
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_DRUGS_FOCUS_CAM");
					STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6");
					STREAMING::REMOVE_ANIM_DICT("missfam5_drink");
					STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6drag");
					GRAPHICS::ANIMPOSTFX_STOP("DrugsDrivingIn");
					GRAPHICS::ANIMPOSTFX_PLAY("DMT_flight", 0, true);
					__LIB_12__::func_915(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_523(struct<3> Param0, float fParam1)//Position - 0x73126
{
	int iVar0;
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam1))
	{
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, fParam1, 0, 98309);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
	}
	MISC::CLEAR_AREA_OF_PEDS(Param0, fParam1, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam1, false, false, false, false, false, false, 0);
}

void func_524()//Position - 0x73171
{
	if (CAM::DOES_CAM_EXIST(iLocal_495))
	{
		if (CAM::IS_CAM_RENDERING(iLocal_495))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false) && !PED::IS_PED_INJURED(Local_146.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_146.f_0, "missfam5mcs_6", "push_michael_out_jimmy", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_157.f_0, "missfam5mcs_6", "Push_Michael_Out_Car", 3))
				{
					if (OBJECT::IS_POINT_IN_ANGLED_AREA(CAM::GET_CAM_COORD(iLocal_495), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, 0f, 2.65f, -0.65f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_157.f_0, 0f, -2.65f, 1f), 2.25f, false, true))
					{
						if (ENTITY::IS_ENTITY_VISIBLE(Local_157.f_0))
						{
							ENTITY::SET_ENTITY_VISIBLE(Local_157.f_0, false, false);
						}
					}
					else if (!ENTITY::IS_ENTITY_VISIBLE(Local_157.f_0))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_157.f_0, true, false);
					}
				}
			}
		}
	}
}

int func_525(int iParam0, int iParam1, int iParam2)//Position - 0x73232
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam2) && PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iParam2))
			{
				if ((VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam2) && !FIRE::IS_ENTITY_ON_FIRE(iParam2)) && !VEHICLE::IS_VEHICLE_STOPPED(iParam2))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
					if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var2, 1, &Var3, &uVar1, &iVar0, 0, 3f, 0f))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, Var3, true) < (4.5f * IntToFloat(iVar0)))
						{
							Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_89) };
							Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_90) };
							Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_91) };
							Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_92) };
							Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Local_93) };
							if (((((func_511(Var2, Var4, 0.5f) && func_511(Var2, Var5, 0.5f)) && func_511(Var2, Var6, 0.5f)) && func_511(Var2, Var7, 0.5f)) && func_511(Var2, Var8, 0.5f)) && func_526(iParam2, Var3, iVar0, 0.778f, -0.4f, -0.5f))
							{
								if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iParam0, iParam2, -1, true, true))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_526(int iParam0, struct<2> Param1, var uParam2, int iParam3, float fParam4, float fParam5, float fParam6)//Position - 0x733DE
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5mcs_6"))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
				Var1 = { ENTITY::GET_ENTITY_ROTATION(iParam0, 2) };
				Var2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam5mcs_6", "push_michael_out_player0", Var0, Var1, fParam4, 2) };
				Var3 = { Var2.f_0, Var2.f_1, (Var2.f_2 + fParam5) };
				Var4 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missfam5mcs_6", "push_michael_out_player0", Param1.f_0, Param1.f_1, Var0.f_2, Var1, fParam4, 2) };
				Var5 = { Var4.f_0, Var4.f_1, (Var4.f_2 + fParam6) };
				if (iParam3 == 1)
				{
					if (func_511(Var2, Var3, 0.5f) && func_511(Var4, Var5, 0.65f))
					{
						return 1;
					}
				}
				else if (func_511(Var2, Var3, 0.5f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_529(char* sParam0)//Position - 0x7354B
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_493(sParam0))
		{
			if (__LIB_0__::func_501(sParam0, 0, 0))
			{
				func_478(sParam0, 1);
			}
		}
		else if (!__LIB_0__::func_501(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

void func_531(float fParam0, float fParam1, int iParam2, float fParam3, float fParam4)//Position - 0x735AE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_4__::func_962(PLAYER::PLAYER_PED_ID()))
		{
			if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
			{
				fLocal_306 = fParam0;
				fLocal_307 = fParam1;
				__LIB_32__::func_11(30000, fLocal_306, fLocal_307, 0);
				SYSTEM::SETTIMERA(0);
			}
			else
			{
				fLocal_306 = __LIB_0__::func_331((fLocal_306 + (0.1f * SYSTEM::TIMESTEP())), fParam0, fParam3);
				fLocal_307 = __LIB_0__::func_331((fLocal_307 + (0.12f * SYSTEM::TIMESTEP())), fParam1, fParam4);
				if ((fLocal_306 < fParam3 || fLocal_307 < fParam4) && SYSTEM::TIMERA() > iParam2)
				{
					__LIB_38__::func_737(fLocal_306);
					__LIB_38__::func_738(fLocal_307);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
}

void func_538(int iParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x737B9
{
	var uVar0;
	var uVar1;
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false) && !PED::IS_PED_INJURED(Local_146.f_0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_485 == 0)
		{
			if (*iParam0 > 0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_242.f_5))
				{
					if (__LIB_0__::func_75())
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
						}
					}
				}
				else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
				}
				else if (__LIB_0__::func_75())
				{
					if (!__LIB_0__::func_568())
					{
						__LIB_0__::func_620(1);
					}
				}
			}
			switch (*iParam0)
			{
				case 0:
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
					{
						if (!func_493("FAM5_SON6"))
						{
							if (!__LIB_13__::func_755(&Local_242, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_SON6", 7, 0, 0, 0))
									{
										func_478("FAM5_SON6", 1);
									}
								}
							}
						}
						else if (!__LIB_0__::func_75())
						{
							if (func_493(&Local_130) || MISC::IS_STRING_NULL_OR_EMPTY(&Local_130))
							{
								*uParam1 = MISC::GET_GAME_TIMER();
								*iParam0++;
							}
						}
					}
					break;
				case 1:
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.6334f, -874.2281f, 17.855732f, -1168.2365f, -901.4601f, 7.06499f, 35f, false, true, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
						{
							if (!func_493(sParam2))
							{
								if (!__LIB_13__::func_755(&Local_242, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam2, 7, 0, 0, 0))
										{
											func_478(sParam2, 1);
											*iParam0++;
										}
									}
								}
							}
						}
					}
					else if (!func_493("FAM5_DRIVEJ"))
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_242, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
								{
									if (__LIB_16__::func_302(15000, *uParam1))
									{
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_DRIVEJ", 7, 0, 0, 0))
										{
											iLocal_534++;
											*uParam1 = MISC::GET_GAME_TIMER();
											if (iLocal_534 == 2)
											{
												func_478("FAM5_DRIVEJ", 1);
											}
										}
									}
								}
							}
						}
					}
					break;
				case 2:
					if (iLocal_303 == 0)
					{
						if (func_493(sParam2))
						{
							if (!__LIB_0__::func_75())
							{
								iLocal_303 = 1;
							}
							if (__LIB_0__::func_75())
							{
								MemCopy(&uVar0, {__LIB_0__::func_486()}, 4);
								if (!MISC::ARE_STRINGS_EQUAL(sParam2, &uVar0))
								{
									iLocal_303 = 1;
								}
							}
						}
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
					{
						if (iLocal_302 == 1)
						{
							if (!func_493(sParam3))
							{
								if (!__LIB_13__::func_755(&Local_242, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam3, 7, 0, 0, 0))
										{
											func_478(sParam3, 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam0++;
										}
									}
								}
							}
						}
					}
					break;
				case 3:
					if (iLocal_304 == 0)
					{
						if (func_493(sParam3))
						{
							if (__LIB_0__::func_75())
							{
								MemCopy(&uVar1, {__LIB_0__::func_486()}, 4);
								if (!MISC::ARE_STRINGS_EQUAL(sParam3, &uVar1))
								{
									iLocal_304 = 1;
								}
							}
						}
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
					{
						if (__LIB_16__::func_302(6000, *uParam1))
						{
							if (!func_493(sParam4))
							{
								if (!__LIB_13__::func_755(&Local_242, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam4, 7, 0, 0, 0))
										{
											func_478(sParam4, 1);
											*uParam1 = 0;
											*iParam0++;
										}
									}
								}
							}
						}
					}
					break;
				case 4:
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
					{
						if ((MISC::GET_GAME_TIMER() - *uParam1) > 0)
						{
							if (!__LIB_13__::func_755(&Local_242, 1))
							{
								if (!__LIB_0__::func_75())
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
									{
										case 0:
											if (!func_493("FAM5_DRUNKM"))
											{
												if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_DRUNKM", 7, 0, 0, 0))
												{
													iLocal_539++;
													*uParam1 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
													if (iLocal_539 >= 9)
													{
														func_478("FAM5_DRUNKM", 1);
													}
												}
											}
											break;
										case 1:
											if (!func_493("FAM5_DRUNKJ"))
											{
												if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_DRUNKJ", 7, 0, 0, 0))
												{
													iLocal_538++;
													*uParam1 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
													if (iLocal_538 >= 3)
													{
														func_478("FAM5_DRUNKJ", 1);
													}
												}
											}
											break;
										}
									}
								}
							}
					}
					break;
			}
		}
		else
		{
			if (!func_493("FAM5_DSTOP"))
			{
				if (__LIB_0__::func_75())
				{
					if (__LIB_0__::func_568())
					{
						__LIB_0__::func_620(0);
					}
					__LIB_0__::func_429();
				}
				if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_DSTOP", 7, 0, 0, 0))
				{
					func_478("FAM5_DSTOP", 1);
				}
			}
			if (!func_493("FAM5_CAR"))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_513))
				{
					if (!__LIB_0__::func_75())
					{
						if (!__LIB_13__::func_755(&Local_242, 0))
						{
							if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_CAR", 7, 0, 0, 0))
							{
								func_478("FAM5_CAR", 1);
							}
						}
					}
				}
			}
		}
	}
}

void func_543(var uParam0, char* sParam1, char* sParam2)//Position - 0x73D5F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 3))
		{
			__LIB_1__::func_33(0);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_146.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_146.f_0, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 3))
				{
					TASK::TASK_PLAY_ANIM(Local_146.f_0, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 8f, -8f, -1, 1, 0f, false, false, false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_146.f_0, true);
			}
			func_500(4);
			*uParam0++;
			break;
		case 1:
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false) && !PED::IS_PED_INJURED(Local_146.f_0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_493(sParam1))
				{
					if ((__LIB_17__::func_160(sParam1) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 5) || iLocal_303 == 1)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(Local_146.f_0, Local_157.f_0))
						{
							__LIB_1__::func_33(0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_157.f_0, false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_157.f_0, 4);
							TASK::TASK_PLAY_ANIM(Local_146.f_0, "missfam5_drink", "Drink_Michael&Jimmy_Jimmy", 8f, -8f, -1, 0, 0f, false, false, false);
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 8f, -4f, -1, 48, 0f, false, false, false);
							*uParam0++;
						}
					}
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0") > 0.389f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Drink_Sfx")))
				{
					func_496(4);
					GRAPHICS::ANIMPOSTFX_PLAY("DrugsDrivingIn", 0, false);
					*uParam0++;
				}
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfam5_drink", "Drink_Michael&Jimmy_Plyer0") > 0.703f || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Interrupt")))
				{
					iLocal_302 = 1;
					if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(Local_146.f_0)) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false))
					{
						TASK::STOP_ANIM_PLAYBACK(PLAYER::PLAYER_PED_ID(), 2, true);
						TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
						TASK::STOP_ANIM_PLAYBACK(Local_146.f_0, 0, false);
						TASK::TASK_PLAY_ANIM(Local_146.f_0, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 1000f, -8f, -1, 1, 0f, false, false, false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_157.f_0, 1);
						*uParam0++;
					}
				}
			}
			break;
		case 4:
			if (func_493(sParam2))
			{
				if ((__LIB_17__::func_160(sParam2) && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() >= 4) || iLocal_304 == 1)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_16__::func_303(PLAYER::PLAYER_PED_ID());
					}
					__LIB_0__::func_671(1);
					func_496(3);
					AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_ON_DRUGS");
					AUDIO::START_AUDIO_SCENE("FAMILY_5_DRUGS");
					__LIB_14__::func_804(1);
					__LIB_0__::func_681(65, 0);
					iLocal_518 = MISC::GET_GAME_TIMER();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 12f, 4);
					*uParam0++;
				}
			}
			break;
	}
}

int func_556(int iParam0)//Position - 0x743AC
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_514))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_157.f_0, "missfam5leadinoutmcs_5", "leadout_car_door", 3))
			{
				__LIB_28__::func_229();
			}
		}
		__LIB_29__::func_133();
		if (iLocal_522 == 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5leadinoutmcs_5", "leadout_mic", 3))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(iLocal_495))
		{
			if (iLocal_522 == 0)
			{
				if (__LIB_0__::func_669(1, 1, 1))
				{
					if (!func_493("FAM5_HCAM"))
					{
						__LIB_0__::func_151("FAM5_HCAM", 10000);
						func_478("FAM5_HCAM", 1);
					}
				}
				if (__LIB_13__::func_796(&uLocal_254, 1, 1, 1))
				{
					if (!CAM::IS_CAM_RENDERING(iLocal_495))
					{
						HUD::DISPLAY_RADAR(false);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM"))
						{
							AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
							AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM");
						}
						if (__LIB_0__::func_1("FAM5_HCAM"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				else if (CAM::IS_CAM_RENDERING(iLocal_495))
				{
					HUD::DISPLAY_RADAR(true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM");
						AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
					}
				}
			}
		}
		if (iLocal_522 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_157.f_0, "missfam5leadinoutmcs_5", "leadout_car_door", 3))
				{
					if (!VEHICLE::IS_VEHICLE_STOPPED(Local_157.f_0))
					{
						if (CAM::DOES_CAM_EXIST(iLocal_495))
						{
							if (CAM::IS_CAM_RENDERING(iLocal_495))
							{
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							}
						}
						HUD::CLEAR_HELP(true);
						HUD::DISPLAY_RADAR(true);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						}
						__LIB_0__::func_345(&uLocal_254, 0, 0);
						iLocal_522 = 1;
					}
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (__LIB_17__::func_216("family_5_mcs_5", 1))
			{
				__LIB_0__::func_325();
				__LIB_0__::func_638();
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_146.f_0, "Jimmy", 0, Local_146.f_6, 0);
				}
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_206, "Jimmy_necklace", 2, joaat("p_jimmyneck_03_s"), 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_185.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_185.f_0, false))
					{
						ENTITY::DETACH_ENTITY(Local_185.f_0, false, true);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_185.f_0, "Meth_Bag", 1, Local_185.f_1, 0);
					}
				}
				if (!PED::IS_PED_INJURED(Local_148.f_0))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_148.f_0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_148.f_0, "Burgershot_drugdealer", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
				{
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_157.f_0, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_157.f_0, 0, 0, 0f);
					}
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_157.f_0, 1))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_157.f_0, 1, 0, 0f);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_157.f_0, "Michaels_car", 0, 0, 0);
				}
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_TO_BURGERSHOT");
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_146.f_0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_148.f_0))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Burgershot_drugdealer", Local_148.f_0, 0);
				}
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 1, 0, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::STOP_GAMEPLAY_HINT(true);
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_429();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_167.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_167.f_0, false))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_167.f_0))
						{
							ENTITY::DETACH_ENTITY(Local_167.f_0, false, true);
						}
						OBJECT::DELETE_OBJECT(&Local_167);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
				{
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_157.f_0, 1, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_157.f_0, 1, true);
				}
				MISC::CLEAR_AREA(-1176.3639f, -887.574f, 12.8652f, 6f, true, true, false, false);
				MISC::CLEAR_AREA_OF_VEHICLES(-1176.3639f, -887.574f, 12.8652f, 6f, true, false, false, false, false, false, 0);
				ENTITY::CREATE_MODEL_HIDE(Local_176.f_2, 1f, Local_176.f_1, false);
				STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(-1179.8f, -882.04f, 14.75f, 0.53f, -0.85f, -0.04f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(Local_158.f_1);
			STREAMING::REQUEST_MODEL(Local_217.f_1);
			STREAMING::REQUEST_ANIM_DICT("missfam5_drink");
			STREAMING::REQUEST_ANIM_DICT("missfam5leadinoutmcs_5");
			if (!func_493("FAM5_MCS5LO_P"))
			{
				if (!__LIB_0__::func_75())
				{
					__LIB_39__::func_58(&uLocal_319, "FAM5AUD", "FAM5_MCS5LO", 7, 0, 0, 0, 0);
					func_478("FAM5_MCS5LO_P", 1);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
			{
				VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_157.f_0, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_206))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Jimmy_necklace", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_necklace", 0)))
					{
						iLocal_206 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_necklace", 0));
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", Local_146.f_6))
			{
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 1, 3, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_necklace", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_206))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_206, false))
					{
						OBJECT::DELETE_OBJECT(&iLocal_206);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, -1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Burgershot_drugdealer", 0))
			{
				if (iLocal_498 == 0)
				{
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_514))
					{
						iLocal_514 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_157.f_0, 2), 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_514, true);
						CAM::DESTROY_ALL_CAMS(false);
						iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_495, iLocal_514, "leadout_cam", "missfam5leadinoutmcs_5");
						VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_157.f_0, 1, true, true, false);
						ENTITY::PLAY_ENTITY_ANIM(Local_157.f_0, "leadout_car_door", "missfam5leadinoutmcs_5", 1000f, false, false, false, 0f, 262144);
						if (func_428(&Local_217, 0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_217.f_0, false);
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_217.f_0, iLocal_514, "leadout_door", "missfam5leadinoutmcs_5", 1000f, -4f, 0, 1000f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_146.f_0, false))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_516))
								{
									iLocal_516 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_157.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_157.f_0, "seat_pside_f")), ENTITY::GET_ENTITY_ROTATION(Local_157.f_0, 2), 2);
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_146.f_0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_146.f_0, iLocal_516, "missfam5leadinoutmcs_5", "leadout_alt_jimmy", 1000f, -4f, 4, 0, 1000f, 0);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_146.f_0, true, false);
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_148.f_0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_148.f_0, iLocal_514, "missfam5leadinoutmcs_5", "leadout_dealer", 1000f, -1000f, 0, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_148.f_0, false, false);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, -1);
								TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5leadinoutmcs_5", "leadout_mic", 1000f, -4f, -1, 48, 0f, false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							}
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				if (iLocal_498 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_157.f_0, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_157.f_0, 5f);
					}
					if (!PED::IS_PED_INJURED(Local_146.f_0))
					{
						PED::SET_PED_INTO_VEHICLE(Local_146.f_0, Local_157.f_0, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, -1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
					{
						PED::DELETE_PED(&Local_148);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					*iParam0 = 4;
				}
				else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_514))
				{
					*iParam0++;
				}
			}
			else if (iLocal_498 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
					iLocal_498 = 1;
				}
			}
			break;
		case 3:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_514))
			{
				if (!func_493("FAM5_MCS5LO"))
				{
					if (func_493("FAM5_MCS5LO_P"))
					{
						__LIB_13__::func_783();
						func_478("FAM5_MCS5LO", 1);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_158.f_0))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_514) > 0.09f)
					{
						if (func_428(&Local_158, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_158.f_0, Local_148.f_0, PED::GET_PED_BONE_INDEX(Local_148.f_0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								}
							}
						}
					}
				}
				if (iLocal_519 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_158.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_158.f_0, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_514) > 0.285f)
									{
										ENTITY::DETACH_ENTITY(Local_158.f_0, false, true);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_158.f_0, Local_146.f_0, PED::GET_PED_BONE_INDEX(Local_146.f_0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
										iLocal_519 = 1;
									}
								}
							}
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_514) > 0.575f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_157.f_0, "missfam5leadinoutmcs_5", "leadout_car_door", 3))
						{
							ENTITY::STOP_ENTITY_ANIM(Local_157.f_0, "leadout_car_door", "missfam5leadinoutmcs_5", -4f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_157.f_0, true);
							TASK::CLEAR_PED_TASKS(Local_146.f_0);
							PED::SET_PED_INTO_VEHICLE(Local_146.f_0, Local_157.f_0, 0);
							TASK::TASK_PLAY_ANIM(Local_146.f_0, "missfam5leadinoutmcs_5", "leadout_alt_jimmy", 1000f, -4f, -1, 3, PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_514), false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_146.f_0, false, false);
						}
					}
				}
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_514) >= 1f)
				{
					if (CAM::DOES_CAM_EXIST(iLocal_495))
					{
						if (CAM::IS_CAM_RENDERING(iLocal_495))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
					}
					HUD::DISPLAY_RADAR(true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(iLocal_495, false);
					CAM::DESTROY_ALL_CAMS(false);
					__LIB_0__::func_345(&uLocal_254, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_148.f_0, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_148.f_0, true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_146.f_0, false))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							if (!PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_146.f_0, Local_157.f_0, 0);
							}
							TASK::TASK_PLAY_ANIM(Local_146.f_0, "missfam5_drink", "Drink_Michael&Jimmy_JimmyIdle", 1000f, -8f, -1, 1, 0f, false, false, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_146.f_0, false, false);
						}
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					*iParam0++;
				}
			}
			break;
		case 4:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM"))
			{
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY_FOCUS_CAM");
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY"))
			{
				AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_158.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_176.f_1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_217.f_1);
			STREAMING::REMOVE_ANIM_DICT("missfam5leadinoutmcs_5");
			HUD::DISPLAY_RADAR(true);
			__LIB_0__::func_345(&uLocal_254, 0, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			*iParam0++;
			break;
		case 5:
			if (!__LIB_0__::func_75())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
				{
					PED::DELETE_PED(&Local_148);
				}
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			break;
	}
	return 0;
}

int func_578(int iParam0)//Position - 0x75977
{
	MISC::SET_BIT(&(Local_242.f_13), 20);
	func_594(&Local_242, 1);
	func_589(&(Local_148.f_7));
	func_588(&(Local_146.f_7));
	func_584(&iLocal_484, __LIB_1__::func_295(bLocal_292, "FAM5_SON2b", "FAM5_SON2"), __LIB_1__::func_295(bLocal_292, "FAM5_SON4b", "FAM5_SON4"));
	func_529(&Local_133);
	if (__LIB_0__::func_719() || __LIB_6__::func_181())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1175.67f, -888.6f, 12.87f, true) < 100f)
	{
		CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_5", 8);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			}
			if (!PED::IS_PED_INJURED(Local_146.f_0))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_146.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Burgershot_drugdealer", Local_148.f_0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 0, 0, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 1, 0, 0, 0);
				}
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Burgershot_drugdealer", 1, 0, 0, 0);
			}
			iLocal_499 = 1;
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_5") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	switch (*iParam0)
	{
		case 0:
			if ((!TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("family5d") && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("mansion_1")) && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("f5_jimmy1"))
			{
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5d");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
			}
			VEHICLE::REQUEST_VEHICLE_ASSET(__LIB_0__::func_721(0, 0), 3);
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1)
			{
				if (iLocal_301 == 0)
				{
					if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						if (((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) * 255f)) > 20)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) * 255f)) > 20))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 12f, 4);
							iLocal_301 = 1;
						}
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0))
				{
					if (!PED::IS_PED_INJURED(Local_146.f_0))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_157.f_0, true), Local_157.f_2, true) > 100f)
							{
								iLocal_300 = 1;
							}
						}
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
					{
						AUDIO::STOP_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_BURGERSHOT"))
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_BURGERSHOT");
					}
				}
				else
				{
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
				}
			}
			if (__LIB_37__::func_183(&Local_242, -1175.67f, -888.6f, 12.87f, 5f, 3.5f, 2f, 1, Local_146.f_0, Local_157.f_0, "", "CMN_JLEAVE" /* GXT: ~s~Return to ~b~Jimmy.~s~ */, __LIB_1__::func_295(HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON(), "", &Local_133), "CMN_GENGETBCKY" /* GXT: ~s~Get back in your ~b~car. */, 0, 1, 1, -1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_157.f_0))
					{
						iLocal_485 = 1;
						__LIB_0__::func_325();
						func_583(&Local_576, 1);
						__LIB_17__::func_228(&Local_194, 1);
						__LIB_17__::func_228(&Local_200, 1);
						__LIB_17__::func_667(86, 1, 0, 1, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(12f, 1f, 4);
						iLocal_520 = 1;
						if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
						{
							iLocal_523 = 1;
						}
						*iParam0++;
					}
				}
			}
			if (!func_493(&Local_133) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_133))
			{
				if (HUD::DOES_BLIP_EXIST(Local_242.f_0))
				{
					if (iLocal_486 == 1)
					{
						func_580(&Local_133, 7500, 1);
					}
				}
			}
			else if (__LIB_0__::func_501(&Local_133, 0, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false))
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if (!func_493("FAM5_GT3"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_242.f_5))
				{
					if (func_493("FAM5_SON3"))
					{
						if (!__LIB_13__::func_755(&Local_242, 1))
						{
							func_580("FAM5_GT3", 7500, 1);
						}
					}
				}
			}
			else if (__LIB_0__::func_501("FAM5_GT3", 0, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_242.f_5))
				{
					HUD::CLEAR_PRINTS();
				}
			}
			if ((((ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]) || ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/])) || ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/])) || ENTITY::DOES_ENTITY_EXIST(Local_194.f_0)) || ENTITY::DOES_ENTITY_EXIST(Local_200.f_0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_578.f_1, true) > 75f)
				{
					func_583(&Local_576, 1);
					__LIB_17__::func_228(&Local_194, 1);
					__LIB_17__::func_228(&Local_200, 1);
					__LIB_17__::func_667(86, 1, 0, 1, 0);
				}
			}
			break;
		case 1:
			if (iLocal_523 == 0)
			{
				func_579();
			}
			if (__LIB_0__::func_213(Local_157.f_0, 2.5f, 1, 0.75f, 0, 1, 0))
			{
				if (iLocal_521 == 1 && iLocal_499 == 1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_579()//Position - 0x75EF7
{
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_GAMEPLAY_HINT_FOV(45.5f);
		CAM::SET_GAMEPLAY_COORD_HINT(Local_129, -1, 2500, 2000, 0);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(1.6f);
		CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(-0.88f);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.735f);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-1.2f);
	}
}

void func_580(char* sParam0, int iParam1, bool bParam2)//Position - 0x75F45
{
	if (!func_493(sParam0))
	{
		__LIB_0__::func_382(sParam0, iParam1, 1);
		func_478(sParam0, bParam2);
	}
}

void func_583(int iParam0, bool bParam1)//Position - 0x75FBB
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		__LIB_17__::func_228(iParam0[iVar0 /*11*/], bParam1);
		iVar0++;
	}
}

void func_584(int iParam0, char* sParam1, char* sParam2)//Position - 0x75FE8
{
	var uVar0;
	MemCopy(&uVar0, {__LIB_0__::func_486()}, 4);
	if (!PED::IS_PED_INJURED(Local_146.f_0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_485 == 0)
		{
			switch (*iParam0)
			{
				case 0:
					if (__LIB_0__::func_75())
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_146.f_0, 8f, 8f, 4f, false, true, 0))
						{
							__LIB_0__::func_638();
						}
					}
					if (!func_493("FAM5_PUSH"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_146.f_0, false))
							{
								if (iLocal_527 == 0)
								{
									if ((PED::IS_PED_RAGDOLL(Local_146.f_0) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_146.f_0, PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_146.f_0, PLAYER::PLAYER_PED_ID(), true))
									{
										if (__LIB_0__::func_75())
										{
											__LIB_0__::func_638();
										}
										ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_146.f_0);
										iLocal_527 = 1;
									}
								}
								if (iLocal_527 == 1)
								{
									if (!PED::IS_PED_RAGDOLL(Local_146.f_0))
									{
										if (!__LIB_0__::func_75())
										{
											if (!__LIB_13__::func_755(&Local_242, 0))
											{
												if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_PUSH", 7, 0, 0, 0))
												{
													iLocal_527 = 0;
													iLocal_526++;
													if (iLocal_526 == 4)
													{
														func_478("FAM5_PUSH", 1);
													}
												}
											}
											else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_146.f_0))
											{
												__LIB_0__::func_709(Local_146.f_0, "FAM5_DXAA", "JIMMY", 3);
												iLocal_527 = 0;
												iLocal_526++;
											}
										}
									}
								}
							}
						}
					}
					if (!func_493(sParam1))
					{
						if (HUD::DOES_BLIP_EXIST(Local_242.f_0))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_242, 1))
								{
									if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(Local_146.f_0))
									{
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam1, 9, 0, 0, 0))
										{
											func_478(sParam1, 1);
										}
									}
								}
							}
						}
					}
					else if (__LIB_0__::func_75() && MISC::ARE_STRINGS_EQUAL(&uVar0, sParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
						{
							if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) || PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false)) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_146.f_0))
							{
								__LIB_0__::func_638();
							}
						}
						if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							__LIB_0__::func_638();
						}
					}
					else
					{
						iLocal_486 = 1;
					}
					if (!func_493("FAM5_SON3"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_242, 1))
									{
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_SON3", 7, 0, 0, 0))
											{
												func_478("FAM5_SON3", 1);
												*iParam0++;
											}
										}
									}
								}
								else
								{
									if (__LIB_0__::func_568())
									{
										__LIB_0__::func_620(0);
									}
									if (__LIB_17__::func_160(sParam1))
									{
										__LIB_0__::func_638();
									}
								}
							}
						}
					}
					break;
				case 1:
					if (HUD::DOES_BLIP_EXIST(Local_242.f_5))
					{
						if (__LIB_0__::func_501("FAM5_GT3", 0, 0))
						{
							StringCopy(&Local_488, "", 24);
							StringCopy(&Local_489, "", 24);
							*iParam0++;
						}
					}
					break;
				case 2:
					if (iLocal_487 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_242.f_5))
						{
							if (func_493("FAM5_WNTD1"))
							{
								if (func_493(sParam2) || func_493("FAM5_SON5"))
								{
									if (!__LIB_13__::func_755(&Local_242, 1))
									{
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_488) && !MISC::IS_STRING_NULL_OR_EMPTY(&Local_489))
										{
											if (MISC::ARE_STRINGS_EQUAL(&Local_488, sParam2) || MISC::ARE_STRINGS_EQUAL(&Local_488, "FAM5_SON5"))
											{
												if (__LIB_14__::func_782(&uLocal_319, "FAM5AUD", &Local_488, &Local_489, 7, 0, 0))
												{
													iLocal_487 = 0;
													func_478("FAM5_WNTD1", 0);
												}
											}
										}
									}
								}
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_242.f_5))
					{
						if (__LIB_0__::func_75())
						{
							if (__LIB_0__::func_568())
							{
								__LIB_0__::func_620(0);
							}
						}
					}
					else if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						if (iLocal_487 == 0)
						{
							if (func_493(sParam2) || func_493("FAM5_SON5"))
							{
								if (__LIB_0__::func_75())
								{
									Local_488 = { __LIB_0__::func_486() };
									if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_488))
									{
										if (MISC::ARE_STRINGS_EQUAL(&Local_488, sParam2) || MISC::ARE_STRINGS_EQUAL(&Local_488, "FAM5_SON5"))
										{
											iLocal_487 = 1;
											Local_488 = { __LIB_0__::func_486() };
											Local_489 = { __LIB_0__::func_485() };
											__LIB_0__::func_429();
										}
									}
								}
							}
						}
						if (iLocal_487 == 1)
						{
							if (!func_493("FAM5_WNTD1"))
							{
								if (!__LIB_13__::func_755(&Local_242, 1))
								{
									if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_WNTD1", 8, 0, 0, 0))
									{
										func_478("FAM5_WNTD1", 1);
									}
								}
							}
						}
					}
					else if (__LIB_0__::func_75())
					{
						if (!__LIB_0__::func_568())
						{
							__LIB_0__::func_620(1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_242.f_5))
					{
						if (!func_493(sParam2))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_242, 1))
								{
									if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam2, 7, 0, 0, 0))
									{
										func_478(sParam2, 1);
									}
								}
							}
						}
						if (!func_493("FAM5_SON5"))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_148.f_2, 130f, 130f, 100f, false, true, 0))
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_242, 1))
									{
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_SON5", 7, 0, 0, 0))
										{
											func_478("FAM5_SON5", 1);
										}
									}
								}
								else
								{
									__LIB_0__::func_325();
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1184.6334f, -874.2281f, 17.855732f, -1168.2365f, -901.4601f, 7.06499f, 35f, false, true, 0))
						{
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_638();
							}
						}
					}
					break;
				}
		}
		if (iLocal_520 == 1)
		{
			if (!func_493("FAM5_PREBS"))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_148.f_0, false))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_148.f_0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", 3))
								{
									if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_PREBS", 7, 0, 0, 0))
									{
										func_478("FAM5_PREBS", 1);
									}
								}
								else
								{
									func_478("FAM5_PREBS", 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_588(var uParam0)//Position - 0x76715
{
	int iVar0;
	if (!PED::IS_PED_INJURED(Local_146.f_0))
	{
		switch (*uParam0)
		{
			case 0:
				PED::SET_PED_CONFIG_FLAG(Local_146.f_0, 104, true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_146.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
					{
						__LIB_17__::func_205(Local_146.f_0, -805.4584f, 174.9825f, 75.7407f, 336.1902f, 0, 0, 0);
						TASK::TASK_ENTER_VEHICLE(Local_146.f_0, Local_157.f_0, 60000, 0, 1f, 1, 0);
						PED::FORCE_PED_MOTION_STATE(Local_146.f_0, joaat("MotionState_Walk"), false, 0, false);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
								PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -805.6359f, 175.428f, 75.7407f, 1f, 60000, 0.25f, 5, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -804.6224f, 179.1443f, 75.7407f, 1f, 60000, 0.25f, 8192, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
							}
						}
						SYSTEM::WAIT(1000);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
					}
					*uParam0++;
				}
				break;
			case 1:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
					{
						PED::SET_PED_RESET_FLAG(Local_146.f_0, 60, true);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_146.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(Local_146.f_0, Local_157.f_0, 60000, 0, 2f, 1, 0);
							}
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_146.f_0, 2f);
						}
					}
					if (PED::IS_PED_IN_VEHICLE(Local_146.f_0, Local_157.f_0, false))
					{
						*uParam0++;
					}
				}
				break;
			}
	}
}

void func_589(var uParam0)//Position - 0x768F4
{
	switch (*uParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_148.f_2, true) < 200f)
			{
				*uParam0++;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_148.f_0) && !ENTITY::DOES_ENTITY_EXIST(Local_217.f_0))
			{
				STREAMING::REQUEST_MODEL(Local_148.f_6);
				STREAMING::REQUEST_MODEL(Local_217.f_1);
				if (STREAMING::HAS_MODEL_LOADED(Local_148.f_6) && STREAMING::HAS_MODEL_LOADED(Local_217.f_1))
				{
					Local_148.f_0 = PED::CREATE_PED(26, Local_148.f_6, Local_148.f_2, Local_148.f_5, true, true);
					if (func_428(&Local_217, 1))
					{
						ENTITY::SET_ENTITY_LOD_DIST(Local_217.f_0, 150);
						ENTITY::CREATE_MODEL_HIDE(Local_176.f_2, 1f, Local_176.f_1, true);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_148.f_6);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_217.f_1);
				}
			}
			else
			{
				iLocal_554[11] = 1;
				iLocal_554[10] = 1;
				iLocal_554[9] = 1;
				if (!PED::IS_PED_INJURED(Local_148.f_0))
				{
					PED::SET_PED_PROP_INDEX(Local_148.f_0, 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_148.f_0, 1, 0, 0, false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_148.f_0, 150);
					PED::SET_PED_LOD_MULTIPLIER(Local_148.f_0, 5f);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_148.f_0, true);
					PED::SET_PED_CONFIG_FLAG(Local_148.f_0, 181, true);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_148.f_0, 132, true);
					__LIB_0__::func_222(&uLocal_319, 5, Local_148.f_0, "FAM5DEALER", 0, 1);
				}
				__LIB_17__::func_208(&Local_148, 0);
				*uParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(Local_176.f_1);
			func_590(&Local_148, PLAYER::PLAYER_PED_ID());
			break;
	}
}

void func_590(int iParam0, int iParam1)//Position - 0x76A7C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	Var0 = { -1179.314f, -891.318f, 12.73f };
	Var1 = { 0f, 0f, -147.6f };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0) && !PED::IS_PED_INJURED(iParam1))
		{
			fVar2 = __LIB_0__::func_76(iParam1, *iParam0, 1);
			if (iParam0->f_15 != 5)
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
				{
					if (PED::IS_PED_IN_MELEE_COMBAT(iParam1))
					{
						if (fVar2 < 5f)
						{
							__LIB_17__::func_208(iParam0, 5);
						}
					}
					else if (fVar2 < 20f)
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar3, true))
						{
							if (WEAPON::GET_WEAPONTYPE_GROUP(iVar3) != joaat("GROUP_MELEE") && WEAPON::GET_WEAPONTYPE_GROUP(iVar3) != joaat("GROUP_PETROLCAN"))
							{
								__LIB_17__::func_208(iParam0, 5);
							}
						}
					}
				}
				if (PED::IS_PED_IN_COMBAT(*iParam0, iParam1))
				{
					__LIB_17__::func_208(iParam0, 5);
				}
			}
			switch (iParam0->f_15)
			{
				case 0:
					if (fVar2 < 200f)
					{
						__LIB_17__::func_208(iParam0, 2);
					}
					break;
				case 2:
					if (iParam0->f_14 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("missfam5leadinoutmcs_5");
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5leadinoutmcs_5"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", Var0, Var1, 1000f, -4f, -1, 790537, 0f, 2, 0);
							}
						}
						else
						{
							iParam0->f_14 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer", 3))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_167.f_0))
						{
							if (func_428(&Local_167, 0))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_167.f_0, *iParam0, PED::GET_PED_BONE_INDEX(*iParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_185.f_0))
						{
							if (func_428(&Local_185, 0))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_185.f_0, *iParam0, PED::GET_PED_BONE_INDEX(*iParam0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfam5leadinoutmcs_5", "leadin_loop_alt_dealer") > 0.95f)
						{
							if (iLocal_520 == 1)
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", Var0, Var1, 4f, -4f, -1, 790538, 0f, 2, 0);
								__LIB_17__::func_208(iParam0, 3);
							}
						}
					}
					break;
				case 3:
					if (iParam0->f_14 == 0)
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", 3))
						{
							STREAMING::REQUEST_ANIM_DICT("missfam5leadinoutmcs_5");
							if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5leadinoutmcs_5"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", Var0, Var1, 1000f, -4f, -1, 790538, 0f, 2, 0);
							}
						}
						else
						{
							iParam0->f_14 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer", 0.85f);
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "missfam5leadinoutmcs_5", "leadin_action_dealer") >= 0.98f)
						{
							iLocal_521 = 1;
						}
					}
					break;
				case 5:
					if (iParam0->f_14 == 0)
					{
						__LIB_17__::func_207(*iParam0, iParam1, 300f, -1);
						iParam0->f_14 = 1;
					}
					break;
				}
			}
	}
}

void func_594(var uParam0, bool bParam1)//Position - 0x76EB8
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_13), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_13), 22);
	}
}

int func_595(int iParam0)//Position - 0x76EDC
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			if (iLocal_490 == 0)
			{
				__LIB_17__::func_218(5, 2, 6, 0, 0);
				GRAPHICS::SET_TV_VOLUME(-9f);
				iLocal_490 = 1;
			}
			if (__LIB_17__::func_216("family_5_mcs_4", 1))
			{
				if (iLocal_490 == 1)
				{
					__LIB_0__::func_325();
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					}
					if (!PED::IS_PED_INJURED(Local_146.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_146.f_0, "Jimmy", 0, Local_146.f_6, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_200.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_200.f_0, false))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_200.f_0))
							{
								ENTITY::DETACH_ENTITY(Local_200.f_0, false, true);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_200.f_0, "Headset_Jimmy", 0, Local_200.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_200.f_0, "Headset_Jimmy", 2, Local_200.f_1, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_194.f_0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_194.f_0, false))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_194.f_0))
							{
								ENTITY::DETACH_ENTITY(Local_194.f_0, false, true);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_194.f_0, "Jimmy_Controller", 0, Local_194.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_194.f_0, "Jimmy_Controller", 2, Local_194.f_1, 0);
					}
					CUTSCENE::START_CUTSCENE(16);
					RECORDING::REPLAY_START_EVENT(4);
					*iParam0++;
				}
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_146.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				MISC::CLEAR_AREA(Local_578.f_1, 50f, true, false, false, false);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_578.f_1, 50f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_578.f_1, 50f, false, false, false, false, false, false, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_578.f_1, 50f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_578.f_1, 50f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_157.f_0, Local_157.f_2, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_157.f_0, Local_157.f_5);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_157.f_0, 5f);
				}
				if (func_318(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(3);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_194.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Jimmy_Controller", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_Controller", 0)))
					{
						Local_194.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Jimmy_Controller", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_200.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Headset_Jimmy", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Headset_Jimmy", 0)))
					{
						Local_200.f_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Headset_Jimmy", 0));
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy", Local_146.f_6))
			{
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					TASK::CLEAR_PED_TASKS(Local_146.f_0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
					{
						if (iLocal_498 == 1)
						{
							__LIB_17__::func_205(Local_146.f_0, -805.53f, 175.98f, 75.7407f, 350.0319f, 0, 0, 0);
						}
						PED::FORCE_PED_MOTION_STATE(Local_146.f_0, joaat("MotionState_Walk"), false, 1, false);
						TASK::TASK_ENTER_VEHICLE(Local_146.f_0, Local_157.f_0, 60000, 0, 1f, 1, 0);
					}
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 1, 3, 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -805.6359f, 175.428f, 75.7407f, 1f, 60000, 0.25f, 5, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -804.6224f, 179.1443f, 75.7407f, 1f, 60000, 0.25f, 8192, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Headset_Jimmy", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_200.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_200.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_200.f_0, -806.598f, 170.28f, 76.475f, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_200.f_0, -94f, 0f, 0f, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_200.f_0, true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jimmy_Controller", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_194.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_194.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_194.f_0, Local_194.f_2, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(Local_194.f_0, Local_194.f_5, 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_194.f_0, true);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			else
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 12000)
				{
					if (iLocal_490 == 1)
					{
						__LIB_16__::func_868(1, 5);
						iLocal_490 = 0;
					}
				}
				if (iLocal_498 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						iLocal_498 = 1;
					}
				}
			}
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5d");
			TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
			break;
	}
	return 0;
}

int func_603(int iParam0)//Position - 0x77623
{
	func_611();
	func_610(Local_146.f_0, &(Local_146.f_7));
	func_609(&iLocal_493);
	if (((!TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("family5b") && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("mansion_1")) && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("family5c")) && !TASK::ASSISTED_MOVEMENT_IS_ROUTE_LOADED("f5_jimmy1"))
	{
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5b");
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5c");
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
	}
	switch (*iParam0)
	{
		case 0:
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 3, false, true);
			}
			if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 3, false, true);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			*iParam0++;
			break;
		case 1:
			if (!func_493("FAM5_GT2"))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_146.f_1))
				{
					if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 7f, 4);
						Local_146.f_1 = __LIB_0__::func_488(Local_127, 0);
						func_580("FAM5_GT2", 7500, 1);
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_146.f_1))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0))
				{
					HUD::REMOVE_BLIP(&(Local_146.f_1));
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.72203f, 75.74073f, -806.7071f, 174.13857f, 78.74073f, 2f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0))
			{
				if (func_493("FAM5_GT2"))
				{
					Local_146.f_1 = __LIB_0__::func_488(Local_127, 0);
				}
			}
			if (iLocal_490 == 0)
			{
				if (__LIB_17__::func_253(5))
				{
					__LIB_17__::func_210(5, 1);
					__LIB_17__::func_218(5, 2, 6, 0, 1);
					GRAPHICS::SET_TV_VOLUME(-9f);
					iLocal_490 = 1;
				}
			}
			else if (!__LIB_17__::func_253(5))
			{
				__LIB_17__::func_209(5);
				iLocal_490 = 0;
			}
			if (__LIB_0__::func_719() || __LIB_6__::func_181())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("family_5_mcs_4") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_4", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jimmy", Local_146.f_0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
				}
			}
			if (!func_493("FAM5_GT4"))
			{
				if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_146.f_0) > 50f)
				{
					func_580("FAM5_GT4", 7500, 1);
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.72203f, 75.74073f, -806.7071f, 174.13857f, 78.74073f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.9653f, 175.48935f, 75.64073f, -800.59467f, 179.08994f, 79.24073f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.6986f, 172.01518f, 75.640366f, -806.0113f, 175.40642f, 79.24073f, 3f, false, true, 0))
			{
				__LIB_11__::func_618();
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (iLocal_485 == 1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					}
					PED::CLEAR_PED_ALTERNATE_WALK_ANIM(PLAYER::PLAYER_PED_ID(), -8f);
				}
				HUD::REMOVE_BLIP(&(Local_146.f_1));
				STREAMING::REMOVE_ANIM_DICT("missfam5_wet_walk");
				STREAMING::REMOVE_ANIM_DICT("missfam5mcs_4leadin");
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 1f, 4);
				return 1;
			}
			break;
	}
	return 0;
}

void func_609(int iParam0)//Position - 0x77B2E
{
	int iVar0;
	int iVar1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_305 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0))
			{
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_146.f_0, -1, 0, 2);
					iLocal_305 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0))
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			iLocal_305 = 0;
		}
		switch (*iParam0)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_wet_walk"))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 1000f, -1.5f, -1, 0, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
					}
				}
				else
				{
					*iParam0++;
				}
				break;
			case 1:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 3))
				{
					if (iLocal_301 == 0)
					{
						iVar0 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) * 255f));
						iVar1 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/) * 255f));
						if ((iVar0 < -50 || iVar0 > 50) || (iVar1 < -50 || iVar1 > 50))
						{
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							iLocal_301 = 1;
						}
					}
				}
				break;
			}
	}
}

void func_610(int iParam0, var uParam1)//Position - 0x77CC6
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			switch (*uParam1)
			{
				case 0:
					*uParam1++;
					break;
				case 1:
					STREAMING::REQUEST_ANIM_DICT("missfam5mcs_4leadin");
					if ((STREAMING::HAS_ANIM_DICT_LOADED("missfam5mcs_4leadin") && func_428(&Local_194, 0)) && func_428(&Local_200, 0))
					{
						TASK::CLEAR_PED_TASKS(iParam0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, "missfam5mcs_4leadin", "family_5_mcs_4_loop_jimmy", -806.26f, 170.664f, 77.52f, 0f, 0f, 98.28f, 1000f, -1000f, -1, 17567753, 0f, 2, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_194.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_194.f_0, false))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_194.f_0, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_194.f_0, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_200.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_200.f_0, false))
							{
								ENTITY::SET_ENTITY_COLLISION(Local_200.f_0, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_200.f_0, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 31086), 0.02f, 0f, 0f, -180f, 90f, 0f, false, false, false, false, 2, true, 0);
							}
						}
						STREAMING::REMOVE_ANIM_DICT("missfam5mcs_4leadin");
						*uParam1++;
					}
					break;
				case 2:
					PED::SET_PED_RESET_FLAG(iParam0, 314, true);
					PED::SET_PED_RESET_FLAG(iParam0, 129, true);
					break;
				}
			}
	}
}

void func_611()//Position - 0x77E30
{
	if (!func_493("FAM5_SON1A"))
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.52106f, 71.10547f, -795.68176f, 177.69223f, 74.83471f, 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.70013f, 185.89522f, 71.10547f, -800.20703f, 176.43637f, 74.83471f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.31798f, 71.33471f, -805.52563f, 178.1133f, 74.83471f, 8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_13__::func_755(&Local_242, 1))
				{
					if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_SON1A", 7, 0, 0, 0))
					{
						func_478("FAM5_SON1A", 1);
					}
				}
				else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "FAM5_ATAA", "MICHAEL", 3);
					func_478("FAM5_SON1A", 1);
				}
			}
		}
	}
	if (!func_493("FAM5_SON1B"))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.504105f, -804.6584f, 179.532f, 78.74073f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_13__::func_755(&Local_242, 1))
				{
					if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_SON1B", 7, 0, 0, 0))
					{
						func_478("FAM5_SON1B", 1);
					}
				}
			}
		}
	}
	if (!func_493("FAM5_SON1D"))
	{
		if (func_493("FAM5_SON1B"))
		{
			if (!__LIB_0__::func_75())
			{
				if (!__LIB_13__::func_755(&Local_242, 1))
				{
					if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_SON1D", 7, 0, 0, 0))
					{
						func_478("FAM5_SON1D", 1);
					}
				}
			}
		}
	}
	if (!func_493("FAM5_JROOM1"))
	{
		if (func_493("FAM5_SON1D"))
		{
			if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.504105f, -804.6584f, 179.532f, 78.74073f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.39716f, 179.20226f, 75.24073f, -809.9282f, 175.56245f, 78.74073f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.72203f, 75.74073f, -806.7071f, 174.13857f, 78.74073f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_JROOM1", 7, 0, 0, 0))
						{
							func_478("FAM5_JROOM1", 1);
							func_478("FAM5_SON1A", 1);
							func_478("FAM5_SON1B", 1);
							func_478("FAM5_SON1C", 1);
							func_478("FAM5_SON1D", 1);
						}
					}
				}
			}
		}
	}
	else if (__LIB_17__::func_160("FAM5_JROOM1"))
	{
		if (!__LIB_0__::func_568())
		{
			if (((((((((((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.504105f, -804.6584f, 179.532f, 78.74073f, 2.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.39716f, 179.20226f, 75.24073f, -809.9282f, 175.56245f, 78.74073f, 4f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.72203f, 75.74073f, -806.7071f, 174.13857f, 78.74073f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.52106f, 71.10547f, -795.68176f, 177.69223f, 74.83471f, 6f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.70013f, 185.89522f, 71.10547f, -800.20703f, 176.43637f, 74.83471f, 4f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.31798f, 71.33471f, -805.52563f, 178.1133f, 74.83471f, 8f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.63283f, 74.65309f, 2f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.06844f, 75.24073f, -799.83997f, 168.9565f, 78.74073f, 3.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.09436f, 180.61465f, 75.24073f, -816.72327f, 177.80681f, 78.86246f, 8f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.86633f, 175.49997f, 75.24073f, -814.8033f, 173.92299f, 78.74073f, 3.6f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.71277f, 167.79799f, 75.24073f, -805.5717f, 175.19133f, 78.74073f, 3f, false, true, 0))
			{
				__LIB_0__::func_620(1);
			}
		}
		else if (((((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.902f, 185.3967f, 73.504105f, -804.6584f, 179.532f, 78.74073f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -800.39716f, 179.20226f, 75.24073f, -809.9282f, 175.56245f, 78.74073f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.72203f, 75.74073f, -806.7071f, 174.13857f, 78.74073f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -811.6603f, 182.2661f, 70.65309f, -805.41284f, 184.61247f, 76.002815f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -804.67926f, 183.04353f, 70.84778f, -816.2804f, 178.59697f, 75.15309f, 6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -799.5206f, 187.52106f, 71.10547f, -795.68176f, 177.69223f, 74.83471f, 6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.70013f, 185.89522f, 71.10547f, -800.20703f, 176.43637f, 74.83471f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -801.5598f, 168.31798f, 71.33471f, -805.52563f, 178.1133f, 74.83471f, 8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -807.9177f, 176.3691f, 70.83471f, -808.7857f, 178.63283f, 74.65309f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.726f, 176.06844f, 75.24073f, -799.83997f, 168.9565f, 78.74073f, 3.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.09436f, 180.61465f, 75.24073f, -816.72327f, 177.80681f, 78.86246f, 8f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -810.86633f, 175.49997f, 75.24073f, -814.8033f, 173.92299f, 78.74073f, 3.6f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -802.71277f, 167.79799f, 75.24073f, -805.5717f, 175.19133f, 78.74073f, 3f, false, true, 0))
		{
			__LIB_0__::func_620(0);
		}
	}
	if (!func_493("FAM5_JROOM2"))
	{
		if (func_493("FAM5_JROOM1"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.1502f, 172.72203f, 75.74073f, -806.7071f, 174.13857f, 78.74073f, 2f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -809.1252f, 173.54816f, 75.740074f, -806.50903f, 166.36482f, 78.74073f, 4.5f, false, true, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_242, 1))
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_JROOM2", 7, 0, 0, 0))
						{
							func_478("FAM5_JROOM2", 1);
						}
					}
				}
			}
		}
	}
	else if (!__LIB_17__::func_160("FAM5_JROOM2"))
	{
		iLocal_485 = 1;
	}
}

int func_612(int iParam0)//Position - 0x7888B
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_17__::func_216("family_5_mcs_3", 1))
			{
				if (!PED::IS_PED_INJURED(Local_140.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_140.f_0, "Amanda", 1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_143.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_143.f_0, "Fabien", 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[0 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[0 /*11*/], "Michaels_YogaMat", 0, Local_576[0 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[1 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[1 /*11*/], "Fabiens_YogaMat", 0, Local_576[1 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[2 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[2 /*11*/], "Amandas_yogamat", 0, Local_576[2 /*11*/].f_1, 0);
					}
				}
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_CHANGE_DOWN");
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_YOGA_MG");
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::REMOVE_ANIM_DICT("missfam5_yoga");
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
				if (CAM::DOES_CAM_EXIST(iLocal_495))
				{
					CAM::SET_CAM_ACTIVE(iLocal_495, false);
					CAM::DESTROY_CAM(iLocal_495, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				CAM::DESTROY_ALL_CAMS(true);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_WETNESS_HEIGHT(PLAYER::PLAYER_PED_ID(), 2f);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_wet_walk"))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_wet_walk", "wet_idle", 1.5f, -1.5f, -1, 0, 0f, false, false, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					}
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (iLocal_494 == 1)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS"))
					{
						iLocal_494 = 0;
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 33000)
				{
					func_613(&Local_241, 0, 0, 981668463);
					if (Local_241.f_54 != 0f)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PLAYER::PLAYER_PED_ID(), 1, "blushing");
							Local_241.f_54 = 0f;
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				AUDIO::STOP_AUDIO_SCENE("FAMILY_5_YOGA_TRANQUIL");
				AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(PLAYER::PLAYER_PED_ID(), 1, "blushing");
				}
				RECORDING::REPLAY_STOP_EVENT();
				return 1;
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("missfam5_wet_walk");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5b");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("mansion_1");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("family5c");
				TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("f5_jimmy1");
			}
			break;
	}
	return 0;
}

void func_613(var uParam0, int iParam1, float fParam2, float fParam3)//Position - 0x78C37
{
	if (iParam1 == 1)
	{
		switch (uParam0->f_7)
		{
			case 0:
				GRAPHICS::SET_TIMECYCLE_MODIFIER("STONED_CUTSCENE");
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(uParam0->f_50);
				break;
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				__LIB_17__::func_211(&(uParam0->f_50), uParam0->f_51, 0.0001f, 1);
				GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(uParam0->f_50);
				break;
		}
	}
	else
	{
		__LIB_17__::func_211(&(uParam0->f_50), fParam2, fParam3, 1);
		GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(uParam0->f_50);
	}
}

int func_615(int iParam0)//Position - 0x78D28
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_495))
			{
				iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_495, Local_118, Local_120, fLocal_122, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_495, Local_119, Local_121, fLocal_123, 25000, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_495, "HAND_SHAKE", 0.125f);
				CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_495))
			{
				if (!CAM::IS_CAM_RENDERING(iLocal_495))
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
				if (CAM::IS_CAM_RENDERING(iLocal_495))
				{
					CAM::SET_CAM_PARAMS(iLocal_495, Local_118, Local_120, fLocal_122, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_495, Local_119, Local_121, fLocal_123, 25000, 1, 1, 2);
				}
			}
			func_661(&Local_241, 0, 0);
			if (!PED::IS_PED_INJURED(Local_140.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_140.f_0, "missfam5_yoga", "f_yogapose_c", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_140.f_0, "missfam5_yoga", "f_yogapose_c", Local_104, Local_105, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_140.f_0, false, false);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_143.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_143.f_0, "missfam5_yoga", "i_yogapose_c", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_143.f_0, "missfam5_yoga", "i_yogapose_c", Local_98, Local_99, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_143.f_0, false, false);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= (Local_576.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[iVar0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[iVar0 /*11*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_576[iVar0 /*11*/], true);
					}
				}
				iVar0++;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
			}
			*iParam0++;
			break;
		case 1:
			if (!func_493("FAM5_SUNBF"))
			{
				if (bLocal_292 == 0)
				{
					if (__LIB_14__::func_535(&uLocal_319, "FAM5AUD", "FAM5_SUNBF", "FAM5_SUNBF_4", 9, 0, 0))
					{
						func_478("FAM5_SUNBF", 1);
					}
				}
				else if (__LIB_14__::func_535(&uLocal_319, "FAM5AUD", "FAM5_SUNBF", "FAM5_SUNBF_3", 9, 0, 0))
				{
					func_478("FAM5_SUNBF", 1);
				}
			}
			else
			{
				*iParam0++;
			}
			break;
		case 2:
			func_659(Local_140.f_0, PLAYER::PLAYER_PED_ID(), &(Local_140.f_13), &(Local_140.f_10), &(Local_140.f_9), &(Local_140.f_11), &(Local_140.f_12), 3000, 6000, 2000, 7500);
			func_659(Local_143.f_0, PLAYER::PLAYER_PED_ID(), &(Local_143.f_13), &(Local_143.f_10), &(Local_143.f_9), &(Local_143.f_11), &(Local_143.f_12), 3750, 7500, 3000, 8000);
			if (Local_241.f_7 == 4)
			{
				if (iLocal_525 == -1)
				{
					iLocal_525 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
			}
			else
			{
				iLocal_525 = -1;
			}
			func_613(&Local_241, 1, 0, 981668463);
			func_658(Local_241, iLocal_525);
			func_656(Local_241, &iLocal_309, &iLocal_310, &iLocal_308, &iLocal_311, "FAM5_SUNIA", "FAM5_SUNIF", "FAM5_SUNPA", "FAM5_SUNPF", "FAM5_SUNE", &iLocal_312, "FAM5_SUNFB", &iLocal_313, "FAM5_SUNBC", &iLocal_314, "FAM5_SUNBTF", &iLocal_315, "FAM5_WARIN", &iLocal_316, "FAM5_WAREX", &iLocal_317, "FAM5_SUNDA", "FAM5_SUNDF", "FAM5_SUNF", 5);
			if (func_618(&Local_241, 2, 0, bLocal_292, 0, 1, 0, 0))
			{
				if (!__LIB_0__::func_75())
				{
					if (Local_241.f_14 == 0)
					{
						__LIB_0__::func_630(242);
					}
					func_661(&Local_241, 0, 0);
					func_616(&Local_577);
					if (!PED::IS_PED_INJURED(Local_140.f_0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_140.f_0);
						Local_140.f_13 = 0;
					}
					if (!PED::IS_PED_INJURED(Local_143.f_0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_143.f_0);
						Local_143.f_13 = 0;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_576.f_0 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_576[iVar0 /*11*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_576[iVar0 /*11*/], false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_576[iVar0 /*11*/], false);
							}
						}
						iVar0++;
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 4);
					return 1;
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_3", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", Local_140.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Fabien", Local_143.f_0, 0);
			}
			break;
	}
	return 0;
}

void func_616(int iParam0)//Position - 0x791EE
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(iParam0[iVar0 /*3*/])->f_2 = 0;
		iVar0++;
	}
}

int func_618(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x79289
{
	*uParam0 = PLAYER::PLAYER_PED_ID();
	uParam0->f_8 = iParam1;
	uParam0->f_11 = "missfam5_yoga";
	__LIB_40__::func_701(uParam0);
	func_654();
	switch (uParam0->f_7)
	{
		case 0:
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				ENTITY::SET_ENTITY_HEALTH(*uParam0, PED::GET_PED_MAX_HEALTH(*uParam0), 0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(*uParam0, true);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), true);
				if (uParam0->f_54 == 0f)
				{
					PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
					PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, true, "blushing");
				}
				uParam0->f_1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
				uParam0->f_4 = { ENTITY::GET_ENTITY_ROTATION(*uParam0, 2) };
				iLocal_75 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_buttons");
				if (MISC::IS_PC_VERSION())
				{
					iLocal_76 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_keys");
				}
				if (__LIB_40__::func_702() && func_652())
				{
					func_651(iParam1, iParam6);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					PED::SET_FORCE_FOOTSTEP_UPDATE(*uParam0, true);
					__LIB_40__::func_700(uParam0, 0);
					uParam0->f_13 = 0;
					uParam0->f_18 = 0;
					uParam0->f_24 = AUDIO::GET_SOUND_ID();
					uParam0->f_25 = AUDIO::GET_SOUND_ID();
					uParam0->f_26 = AUDIO::GET_SOUND_ID();
					uParam0->f_15 = 0;
					uParam0->f_41 = 0;
					uParam0->f_20 = 0;
					uParam0->f_21 = 0;
					uParam0->f_22 = 0;
					uParam0->f_23 = 0;
					uParam0->f_37 = 0;
					uParam0->f_38 = 0;
					uParam0->f_42 = 0;
					uParam0->f_43 = 0;
					uParam0->f_44 = 0;
					uParam0->f_45 = 0;
					uParam0->f_47 = 0;
					uParam0->f_7 = 1;
					uParam0->f_48 = 32f;
					uParam0->f_49 = 0;
					uParam0->f_52 = 0;
					iLocal_70 = 0;
					iLocal_71 = 0;
					iLocal_72 = 0;
				}
			}
			break;
		case 1:
			if (func_633(uParam0, iParam1, 3, iParam2, 1.15f, iParam3, iParam4))
			{
				uParam0->f_7 = 6;
			}
			else if (uParam0->f_9 == 6)
			{
				uParam0->f_7 = 2;
			}
			if (uParam0->f_9 != 4 && uParam0->f_9 != 5)
			{
				func_627(uParam0, iParam1);
			}
			break;
		case 2:
			AUDIO::STOP_SOUND(uParam0->f_24);
			AUDIO::STOP_SOUND(uParam0->f_25);
			AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_26, "YOGA_FAIL", *uParam0, "FAMILY_5_SOUNDS", false, 0);
			uParam0->f_14++;
			uParam0->f_12 = 1;
			uParam0->f_17 = uParam0->f_16;
			uParam0->f_56 = 0;
			uParam0->f_13 = 0;
			uParam0->f_16 = 0;
			uParam0->f_15 = 0;
			uParam0->f_41 = 0;
			uParam0->f_22 = 0;
			uParam0->f_42 = 0;
			uParam0->f_43 = 0;
			uParam0->f_35 = 0;
			uParam0->f_36 = 0;
			uParam0->f_44 = 0;
			uParam0->f_45 = 0;
			uParam0->f_49 = 0;
			uParam0->f_52 = 0;
			uParam0->f_51 = 0f;
			uParam0->f_54 = __LIB_0__::func_331((uParam0->f_54 - 0.08f), 0f, 0.5f);
			uParam0->f_53 = 0;
			func_625(&iLocal_75);
			if (MISC::IS_PC_VERSION())
			{
				func_625(&iLocal_76);
			}
			TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
				PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, false, "blushing");
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 7))
			{
				case 1:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_1", 0);
					break;
				case 2:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_2", 0);
					break;
				case 3:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_3", 0);
					break;
				case 4:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_4", 0);
					break;
				case 5:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_5", 0);
					break;
				case 6:
					PED::PLAY_FACIAL_ANIM(*uParam0, "pain_6", 0);
					break;
			}
			__LIB_40__::func_692(uParam0);
			uParam0->f_19 = MISC::GET_GAME_TIMER();
			uParam0->f_18 = 0;
			HUD::CLEAR_HELP(true);
			iLocal_70 = 0;
			iLocal_71 = 0;
			iLocal_72 = 0;
			uParam0->f_7 = 3;
			break;
		case 3:
			if (__LIB_16__::func_302(1000, uParam0->f_19))
			{
				uParam0->f_12 = 0;
			}
			if (iParam7 == 1)
			{
				if (__LIB_16__::func_302(1000, uParam0->f_19))
				{
					if (uParam0->f_53 == 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									__LIB_0__::func_640(*uParam0, "GENERIC_CURSE_MED", 6);
									break;
							}
							uParam0->f_53 = 1;
						}
					}
				}
			}
			if (__LIB_16__::func_302(2500, uParam0->f_19))
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				uParam0->f_7 = 4;
			}
			break;
		case 4:
			iLocal_75 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_buttons");
			if (MISC::IS_PC_VERSION())
			{
				iLocal_76 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("yoga_keys");
			}
			if (func_652())
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_77))
				{
					if (__LIB_40__::func_691(*uParam0, 2))
					{
						__LIB_40__::func_700(uParam0, 0);
						uParam0->f_9 = 0;
						uParam0->f_7 = 1;
					}
				}
				else if (__LIB_16__::func_302(3000, uParam0->f_19))
				{
					if (!PED::IS_PED_INJURED(*uParam0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam0);
						__LIB_40__::func_700(uParam0, 1);
						uParam0->f_19 = MISC::GET_GAME_TIMER();
						uParam0->f_7 = 5;
					}
				}
			}
			break;
		case 5:
			if (__LIB_40__::func_691(*uParam0, 2))
			{
				uParam0->f_9 = 0;
				uParam0->f_7 = 1;
			}
			break;
		case 6:
			if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
			{
				if (__LIB_40__::func_703())
				{
					HUD::CLEAR_HELP(true);
					iLocal_70 = 0;
					iLocal_71 = 0;
					iLocal_72 = 0;
				}
				__LIB_17__::func_219(__LIB_0__::func_216(*uParam0), 1, iParam5);
				__LIB_17__::func_219(__LIB_0__::func_216(*uParam0), 2, iParam5);
				__LIB_17__::func_219(__LIB_0__::func_216(*uParam0), 3, iParam5);
				AUDIO::STOP_SOUND(uParam0->f_26);
				AUDIO::STOP_SOUND(uParam0->f_24);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_26);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_24);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_25);
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(*uParam0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(*uParam0, false);
				func_625(&iLocal_75);
				if (MISC::IS_PC_VERSION())
				{
					func_625(&iLocal_76);
				}
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_75);
				if (MISC::IS_PC_VERSION())
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_76);
				}
				if (CAM::DOES_CAM_EXIST(iLocal_77))
				{
					CAM::SET_CAM_ACTIVE(iLocal_77, false);
					CAM::DESTROY_CAM(iLocal_77, false);
				}
				uParam0->f_7 = 7;
			}
			break;
		case 7:
			__LIB_0__::incrementGlobal_58896ByIndex(117, 1);
			return 1;
			break;
	}
	return 0;
}

void func_625(int* iParam0)//Position - 0x79E13
{
	iLocal_73 = 0;
	iLocal_74 = 0;
	iLocal_80 = 255;
	iLocal_81 = 255;
	iLocal_82 = 255;
	iLocal_83 = 255;
	iLocal_84 = 255;
	iLocal_85 = 255;
	__LIB_40__::func_693(&uLocal_55);
	GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*iParam0, "REMOVE_BUTTONS");
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
}

void func_627(var uParam0, int iParam1)//Position - 0x79E81
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	HUD::SET_WIDESCREEN_FORMAT(1);
	if ((((GRAPHICS::GET_IS_WIDESCREEN() == 0 || MISC::GET_PROFILE_SETTING(206) == 8) || MISC::GET_PROFILE_SETTING(206) == 9) || MISC::GET_PROFILE_SETTING(206) == 10) || MISC::GET_PROFILE_SETTING(206) == 12)
	{
		fLocal_49 = 0.825f;
	}
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_76, fLocal_48, fLocal_49, (fLocal_50 * fLocal_52), (fLocal_51 * fLocal_52), 100, 100, 100, 255, 0);
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_75, fLocal_48, fLocal_49, (fLocal_50 * fLocal_52), (fLocal_51 * fLocal_52), 100, 100, 100, 255, 0);
		}
	}
	if (uParam0->f_9 != 3)
	{
		if (uParam0->f_16 < iLocal_53[iParam1])
		{
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				func_631(uParam0, iParam1, &iLocal_76);
			}
			else
			{
				func_631(uParam0, iParam1, &iLocal_75);
			}
		}
	}
	else if (uParam0->f_9 == 3)
	{
		iLocal_80 = 255;
		iLocal_81 = 255;
		iLocal_82 = 255;
		iLocal_83 = 255;
		iLocal_84 = 255;
		iLocal_85 = 255;
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
		{
			func_630(uParam0, &iLocal_76);
		}
		else
		{
			func_630(uParam0, &iLocal_75);
		}
	}
	if (iLocal_73 == 1)
	{
		if (iLocal_74 == 0)
		{
			__LIB_40__::func_695(&iLocal_75);
			if (MISC::IS_PC_VERSION())
			{
				__LIB_40__::func_695(&iLocal_76);
			}
			iLocal_74 = 1;
		}
		if (uParam0->f_9 == 2)
		{
			HUD::GET_HUD_COLOUR(129, &iVar0, &iVar1, &iVar2, &uVar3);
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				__LIB_40__::func_694(uParam0, &iLocal_76, iVar0, iVar1, iVar2);
			}
			else
			{
				__LIB_40__::func_694(uParam0, &iLocal_75, iVar0, iVar1, iVar2);
			}
		}
	}
	else
	{
		GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_75, "REMOVE_BUTTONS");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(iLocal_76, "REMOVE_BUTTONS");
		}
		__LIB_40__::func_693(&uLocal_55);
	}
}

void func_630(var uParam0, int iParam1)//Position - 0x7A1CC
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bLocal_88)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "HIDE_STICK_POINTER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "HIDE_STICK_POINTER");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_27);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_28);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_80);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_81);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_82);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_83);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_84);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_85);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_631(var uParam0, int iParam1, int iParam2)//Position - 0x7A2FB
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bLocal_88)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_STICK_WITH_KEYS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "REPLACE_KEYS_WITH_STICK");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (__LIB_0__::func_1("STICKS"))
		{
			__LIB_0__::func_190("STICKS_KM");
		}
	}
	else if (MISC::IS_PC_VERSION())
	{
		if (__LIB_0__::func_1("STICKS_KM"))
		{
			__LIB_0__::func_190("STICKS");
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_59[iParam1 /*22*/][uParam0->f_16 /*3*/][0]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_ANGLE");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Local_59[iParam1 /*22*/][uParam0->f_16 /*3*/][1]);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_80);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_81);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_82);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_RGB");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_83);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_84);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iLocal_85);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (uParam0->f_31 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "HIDE_STICK_POINTER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_HIGHLIGHT_ANGLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_29);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (uParam0->f_32 == 1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "HIDE_STICK_POINTER");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, "SET_STICK_POINTER_HIGHLIGHT_ANGLE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_30);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_633(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6)//Position - 0x7A4DC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			if (func_643(uParam0, iParam1, uParam0->f_16, 0))
			{
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				__LIB_40__::func_698(uParam0, Local_58[iParam1 /*16*/][uParam0->f_16 * 2], Local_58[iParam1 /*16*/][uParam0->f_16 * 2 + 1]);
				uParam0->f_49 = 1;
				uParam0->f_52 = 1;
				uParam0->f_9 = 1;
			}
			else
			{
				if (iParam5 == 1)
				{
					if (MISC::IS_PC_VERSION())
					{
						if (__LIB_0__::func_1("STICKS_KM"))
						{
							iVar0 = 1;
						}
					}
					if (!__LIB_0__::func_1("STICKS") && iVar0 == 0)
					{
						if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							if (!iLocal_70)
							{
								if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
								{
									__LIB_0__::func_190("STICKS_KM");
								}
								else
								{
									__LIB_0__::func_190("STICKS");
								}
								iLocal_70 = 1;
								iLocal_71 = 0;
								iLocal_72 = 0;
							}
						}
					}
				}
				iLocal_73 = 0;
				iLocal_74 = 0;
			}
			break;
		case 1:
			if (func_643(uParam0, iParam1, uParam0->f_16, 1))
			{
				func_641(uParam0, iParam1, fParam4);
				if (__LIB_40__::func_691(*uParam0, 2))
				{
					SYSTEM::SETTIMERA(0);
					HUD::CLEAR_HELP(true);
					iLocal_73 = 1;
					uParam0->f_9 = 2;
					uParam0->f_10 = 3;
					uParam0->f_46 = MISC::GET_GAME_TIMER();
					if (iParam6 == 1 && uParam0->f_47 == 0)
					{
						uParam0->f_10 = 2;
					}
					uParam0->f_35 = 0;
					uParam0->f_36 = 0;
					uParam0->f_34 = 0f;
					uParam0->f_33 = 0f;
					uParam0->f_20 = 0;
					uParam0->f_22 = 0;
					uParam0->f_21 = 0;
					uParam0->f_23 = 0;
					uParam0->f_37 = 0;
					uParam0->f_38 = 0;
					uParam0->f_42 = 0;
					uParam0->f_43 = 0;
					uParam0->f_15 = 0;
					uParam0->f_41 = 0;
				}
			}
			else
			{
				uParam0->f_9 = 6;
			}
			break;
		case 2:
			if (func_643(uParam0, iParam1, uParam0->f_16, 1))
			{
				switch (uParam0->f_10)
				{
					case 2:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_71)
										{
											__LIB_0__::func_190("INHALE_NEW");
											iLocal_70 = 0;
											iLocal_71 = 1;
											iLocal_72 = 0;
										}
									}
								}
							}
						}
						if (__LIB_16__::func_302(2000, uParam0->f_46))
						{
							uParam0->f_47 = 1;
							uParam0->f_10 = 0;
						}
						break;
					case 3:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_71)
										{
											__LIB_0__::func_190("INHALE_NEW");
											iLocal_70 = 0;
											iLocal_71 = 1;
											iLocal_72 = 0;
										}
									}
								}
							}
						}
						if (__LIB_16__::func_302(500, uParam0->f_46))
						{
							uParam0->f_10 = 0;
						}
						break;
					case 0:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("INHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_71)
										{
											__LIB_0__::func_190("INHALE_NEW");
											iLocal_70 = 0;
											iLocal_71 = 1;
											iLocal_72 = 0;
										}
									}
								}
							}
						}
						if (uParam0->f_35 == 0)
						{
							if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/) && PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
								{
									PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face", uParam0->f_11);
									AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_24, "YOGA_INHALE", *uParam0, "FAMILY_5_SOUNDS", false, 0);
									uParam0->f_34 = 40f;
									uParam0->f_33 = 30f;
									uParam0->f_35 = 1;
									uParam0->f_36 = 0;
									uParam0->f_40 = 0;
									uParam0->f_37 = 0;
									uParam0->f_38 = 0;
									uParam0->f_42 = 0;
									uParam0->f_44 = 0;
									uParam0->f_45 = 0;
									uParam0->f_22 = 1;
									uParam0->f_23 = 0;
								}
							}
						}
						else
						{
							uParam0->f_34 = __LIB_0__::func_331((uParam0->f_34 + (uParam0->f_48 * SYSTEM::TIMESTEP())), 40f, 100f);
							uParam0->f_33 = __LIB_0__::func_331((uParam0->f_33 + (uParam0->f_48 * SYSTEM::TIMESTEP())), 30f, 90f);
							if ((AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25)) && (uParam0->f_33 == 90f && uParam0->f_34 == 100f))
							{
								if (uParam0->f_40 == 0)
								{
									uParam0->f_39 = (1200 + MISC::GET_RANDOM_INT_IN_RANGE(0, 401));
									uParam0->f_40 = MISC::GET_GAME_TIMER();
								}
								else if (__LIB_16__::func_302(uParam0->f_39, uParam0->f_40))
								{
									uParam0->f_10 = 1;
									uParam0->f_21 = 0;
									uParam0->f_23 = 0;
									uParam0->f_55 = MISC::GET_GAME_TIMER();
									if (__LIB_40__::func_703())
									{
										HUD::CLEAR_HELP(true);
										SYSTEM::SETTIMERA(0);
										iLocal_70 = 0;
										iLocal_71 = 0;
										iLocal_72 = 0;
									}
								}
							}
						}
						if (__LIB_43__::func_614(uParam0, SYSTEM::FLOOR(uParam0->f_34), 40, 100))
						{
							uParam0->f_37 = 1;
						}
						else
						{
							uParam0->f_37 = 0;
						}
						break;
					case 1:
						if (SYSTEM::TIMERA() > 100)
						{
							if (iParam5 == 1)
							{
								if (!__LIB_0__::func_1("EXHALE_NEW"))
								{
									if (CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
									{
										if (!iLocal_72)
										{
											__LIB_0__::func_190("EXHALE_NEW");
											iLocal_70 = 0;
											iLocal_71 = 0;
											iLocal_72 = 1;
										}
									}
								}
							}
						}
						if (uParam0->f_36 == 0)
						{
							if (!PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 228 /*INPUT_SCRIPT_LT*/) && !PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
							{
								if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25))
								{
									iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
									switch (iVar1)
									{
										case 1:
										case 4:
										case 5:
											AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_25, "YOGA_EXHALE", *uParam0, "FAMILY_5_SOUNDS", false, 0);
											AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_25, "Version", SYSTEM::TO_FLOAT(iVar1));
											PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face_exhale", uParam0->f_11);
											break;
										case 2:
										case 3:
											AUDIO::PLAY_SOUND_FROM_ENTITY(uParam0->f_25, "YOGA_EXHALE", *uParam0, "FAMILY_5_SOUNDS", false, 0);
											AUDIO::SET_VARIABLE_ON_SOUND(uParam0->f_25, "Version", SYSTEM::TO_FLOAT(iVar1));
											PED::PLAY_FACIAL_ANIM(*uParam0, "michael_breathing_face_exhale_oow", uParam0->f_11);
											break;
									}
									uParam0->f_34 = 100f;
									uParam0->f_33 = 90f;
									uParam0->f_36 = 1;
									uParam0->f_35 = 0;
									uParam0->f_40 = 0;
									uParam0->f_38 = 0;
									uParam0->f_23 = 1;
									uParam0->f_45 = 0;
								}
							}
							else if (__LIB_16__::func_302(15000, uParam0->f_55))
							{
								uParam0->f_9 = 6;
							}
						}
						else
						{
							uParam0->f_34 = __LIB_0__::func_331((uParam0->f_34 - (uParam0->f_48 * SYSTEM::TIMESTEP())), 40f, 100f);
							uParam0->f_33 = __LIB_0__::func_331((uParam0->f_33 - (uParam0->f_48 * SYSTEM::TIMESTEP())), 30f, 90f);
							if ((AUDIO::HAS_SOUND_FINISHED(uParam0->f_24) && AUDIO::HAS_SOUND_FINISHED(uParam0->f_25)) && (uParam0->f_33 == 30f && uParam0->f_34 == 40f))
							{
								if (uParam0->f_40 == 0)
								{
									uParam0->f_39 = (500 + MISC::GET_RANDOM_INT_IN_RANGE(0, 251));
									uParam0->f_40 = MISC::GET_GAME_TIMER();
								}
								else if (__LIB_16__::func_302(uParam0->f_39, uParam0->f_40))
								{
									uParam0->f_15++;
									uParam0->f_10 = 0;
									uParam0->f_20 = 0;
									uParam0->f_22 = 0;
								}
							}
						}
						if (__LIB_43__::func_613(uParam0, SYSTEM::FLOOR(uParam0->f_33), SYSTEM::FLOOR(uParam0->f_34), 40, 100))
						{
							uParam0->f_38 = 1;
							if (uParam0->f_37 == 1 && uParam0->f_38 == 1)
							{
								if (uParam0->f_42 == 0)
								{
									uParam0->f_41++;
									uParam0->f_42 = 1;
								}
								uParam0->f_43 = 1;
							}
						}
						if (uParam0->f_43 == 1)
						{
							uParam0->f_16++;
							uParam0->f_54 = __LIB_0__::func_331((uParam0->f_54 + 0.035f), uParam0->f_54, 0.5f);
							uParam0->f_51 = __LIB_0__::func_331((uParam0->f_51 + 0.01035f), uParam0->f_51, 0.145f);
							if (!PED::IS_PED_INJURED(*uParam0))
							{
								PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*uParam0, 1, "blushing");
								PED::APPLY_PED_DAMAGE_DECAL(*uParam0, 1, 0.5f, 0.513f, 0f, 1f, uParam0->f_54, 0, false, "blushing");
							}
							uParam0->f_44 = 0;
							uParam0->f_45 = 0;
							if (uParam0->f_16 == iLocal_53[iParam1])
							{
								if (iParam3 == 0)
								{
									uParam0->f_9 = 5;
								}
								else if (iParam3 == 1)
								{
									__LIB_40__::func_698(uParam0, Local_58[iParam1 /*16*/][(iLocal_54[iParam1] - 1)], "START_POSE");
									uParam0->f_49 = 1;
									uParam0->f_9 = 4;
								}
							}
							else
							{
								uParam0->f_15 = 0;
								uParam0->f_41 = 0;
								iLocal_73 = 0;
								iLocal_74 = 0;
								uParam0->f_27 = Local_59[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0];
								uParam0->f_28 = Local_59[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1];
								uParam0->f_9 = 3;
							}
						}
						else if (uParam0->f_15 == iParam2)
						{
							uParam0->f_9 = 6;
						}
						break;
				}
			}
			else
			{
				uParam0->f_9 = 6;
			}
			break;
		case 3:
			if (__LIB_40__::func_703())
			{
				HUD::CLEAR_HELP(true);
				iLocal_70 = 0;
				iLocal_71 = 0;
				iLocal_72 = 0;
			}
			uParam0->f_31 = 1;
			uParam0->f_32 = 1;
			__LIB_40__::func_704(Local_59[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][0], Local_59[iParam1 /*22*/][uParam0->f_16 /*3*/][0], Local_60[iParam1 /*22*/][uParam0->f_16 /*3*/][0], &(uParam0->f_27), 4);
			__LIB_40__::func_704(Local_59[iParam1 /*22*/][(uParam0->f_16 - 1) /*3*/][1], Local_59[iParam1 /*22*/][uParam0->f_16 /*3*/][1], Local_60[iParam1 /*22*/][uParam0->f_16 /*3*/][1], &(uParam0->f_28), 4);
			if (uParam0->f_27 == Local_59[iParam1 /*22*/][uParam0->f_16 /*3*/][0] && uParam0->f_28 == Local_59[iParam1 /*22*/][uParam0->f_16 /*3*/][1])
			{
				uParam0->f_9 = 0;
			}
			break;
		case 4:
			if (__LIB_40__::func_703())
			{
				HUD::CLEAR_HELP(true);
				iLocal_70 = 0;
				iLocal_71 = 0;
				iLocal_72 = 0;
			}
			func_641(uParam0, iParam1, fParam4);
			if (__LIB_40__::func_691(*uParam0, 2))
			{
				HUD::CLEAR_HELP(true);
				uParam0->f_9 = 5;
			}
			break;
		case 5:
			return 1;
			break;
		case 6:
			break;
	}
	return 0;
}

void func_641(var uParam0, int iParam1, float fParam2)//Position - 0x7B05D
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_54[iParam1] - 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_11, Local_58[iParam1 /*16*/][iVar0], 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(*uParam0, uParam0->f_11, Local_58[iParam1 /*16*/][iVar0], fParam2);
		}
		iVar0++;
	}
}

int func_643(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7B12F
{
	var uVar0;
	int iVar1;
	int iVar2;
	fLocal_79 = 0f;
	iLocal_80 = 255;
	iLocal_81 = 255;
	iLocal_82 = 255;
	iLocal_83 = 255;
	iLocal_84 = 255;
	iLocal_85 = 255;
	iVar1 = 0;
	iVar2 = 0;
	if (func_645(&(uParam0->f_29), &(uParam0->f_31), 0, Local_59[iParam1 /*22*/][iParam2 /*3*/][0], iParam3))
	{
		fLocal_79 = (fLocal_79 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_80, &iLocal_81, &iLocal_82, &uVar0);
		iVar1 = 1;
	}
	if (func_645(&(uParam0->f_30), &(uParam0->f_32), 1, Local_59[iParam1 /*22*/][iParam2 /*3*/][1], iParam3))
	{
		fLocal_79 = (fLocal_79 + 30f);
		HUD::GET_HUD_COLOUR(129, &iLocal_83, &iLocal_84, &iLocal_85, &uVar0);
		iVar2 = 1;
	}
	fLocal_79 = __LIB_40__::func_699(fLocal_79, 100f);
	PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 10, SYSTEM::FLOOR(fLocal_79));
	if (iVar1 && iVar2)
	{
		return 1;
	}
	return 0;
}

int func_645(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7B245
{
	*uParam0 = func_648(iParam2);
	*uParam1 = func_646(iParam2);
	if (*uParam1 == 0)
	{
		switch (iParam4)
		{
			case 0:
				switch (iParam3)
				{
					case 0:
						if (*uParam0 >= 345 || *uParam0 <= 15)
						{
							return 1;
						}
						break;
					case 45:
						if (*uParam0 >= 30 && *uParam0 <= 60)
						{
							return 1;
						}
						break;
					case 90:
						if (*uParam0 >= 75 && *uParam0 <= 105)
						{
							return 1;
						}
						break;
					case 135:
						if (*uParam0 >= 120 && *uParam0 <= 150)
						{
							return 1;
						}
						break;
					case 180:
						if (*uParam0 >= 165 && *uParam0 <= 195)
						{
							return 1;
						}
						break;
					case 225:
						if (*uParam0 >= 210 && *uParam0 <= 240)
						{
							return 1;
						}
						break;
					case 270:
						if (*uParam0 >= 255 && *uParam0 <= 285)
						{
							return 1;
						}
						break;
					case 315:
						if (*uParam0 >= 300 && *uParam0 <= 330)
						{
							return 1;
						}
						break;
				}
				break;
			case 1:
				switch (iParam3)
				{
					case 0:
						if (*uParam0 >= 305 || *uParam0 <= 55)
						{
							return 1;
						}
						break;
					case 45:
						if (*uParam0 >= 350 || *uParam0 <= 100)
						{
							return 1;
						}
						break;
					case 90:
						if (*uParam0 >= 35 && *uParam0 <= 145)
						{
							return 1;
						}
						break;
					case 135:
						if (*uParam0 >= 80 && *uParam0 <= 190)
						{
							return 1;
						}
						break;
					case 180:
						if (*uParam0 >= 125 && *uParam0 <= 235)
						{
							return 1;
						}
						break;
					case 225:
						if (*uParam0 >= 170 && *uParam0 <= 280)
						{
							return 1;
						}
						break;
					case 270:
						if (*uParam0 >= 215 && *uParam0 <= 325)
						{
							return 1;
						}
						break;
					case 315:
						if (*uParam0 >= 260 || *uParam0 <= 10)
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

int func_646(int iParam0)//Position - 0x7B4AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	var uVar5;
	var uVar6;
	__LIB_0__::func_603(&iVar0, &iVar1, &iVar2, &iVar3, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (bLocal_88)
		{
			uVar5 = iVar2;
			uVar6 = iVar3;
			iVar2 = iVar0;
			iVar3 = iVar1;
			iVar0 = uVar5;
			iVar1 = uVar6;
		}
	}
	switch (iParam0)
	{
		case 0:
			if (((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && iLocal_86 != 0) && iLocal_87 != 0) && bLocal_88 == 1)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar0), IntToFloat(iVar1), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
		case 1:
			if (((PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/) && iLocal_86 != 0) && iLocal_87 != 0) && bLocal_88 == 0)
			{
				return 0;
			}
			fVar4 = SYSTEM::VMAG(IntToFloat(iVar2), IntToFloat(iVar3), 0f);
			if (fVar4 < 100f)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_648(int iParam0)//Position - 0x7B661
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	__LIB_0__::func_341(&iVar2, &iVar3, &iVar4, &iVar5, 0, 0);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		if (bLocal_88)
		{
			uVar6 = iVar4;
			uVar7 = iVar5;
			iVar4 = iVar2;
			iVar5 = iVar3;
			iVar2 = uVar6;
			iVar3 = uVar7;
			iVar2 = (iVar2 / 4);
			iVar3 = (iVar3 / 4);
			if (iVar2 == 0 || iVar3 == 0)
			{
				iVar2 = iLocal_86;
				iVar3 = iLocal_87;
			}
			iLocal_86 = iVar2;
			iLocal_87 = iVar3;
		}
		else
		{
			iVar4 = (iVar4 / 4);
			iVar5 = (iVar5 / 4);
			if (iVar4 == 0 || iVar5 == 0)
			{
				iVar4 = iLocal_86;
				iVar5 = iLocal_87;
			}
			iLocal_86 = iVar4;
			iLocal_87 = iVar5;
		}
	}
	iVar0 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar2), SYSTEM::TO_FLOAT(iVar3)));
	iVar1 = SYSTEM::ROUND(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(0f, -127f, SYSTEM::TO_FLOAT(iVar4), SYSTEM::TO_FLOAT(iVar5)));
	if (iVar2 < 0)
	{
		iVar0 = (180 + (180 - iVar0));
	}
	if (iVar4 < 0)
	{
		iVar1 = (180 + (180 - iVar1));
	}
	switch (iParam0)
	{
		case 0:
			return iVar0;
			break;
		case 1:
			return iVar1;
			break;
	}
	return 0;
}

void func_651(int iParam0, int iParam1)//Position - 0x7B9E0
{
	iLocal_53[0] = 3;
	iLocal_53[1] = 4;
	iLocal_53[2] = 7;
	iLocal_54[0] = 7;
	Local_58[0 /*16*/][0] = "start_to_a1";
	Local_58[0 /*16*/][1] = "a1_pose";
	Local_58[0 /*16*/][2] = "a1_to_a2";
	Local_58[0 /*16*/][3] = "a2_pose";
	Local_58[0 /*16*/][4] = "a2_to_a3";
	Local_58[0 /*16*/][5] = "a3_pose";
	Local_58[0 /*16*/][6] = "a3_to_start";
	iLocal_54[1] = 9;
	Local_58[1 /*16*/][0] = "start_to_a1";
	Local_58[1 /*16*/][1] = "a1_pose";
	Local_58[1 /*16*/][2] = "a1_to_a2";
	Local_58[1 /*16*/][3] = "a2_pose";
	Local_58[1 /*16*/][4] = "a2_to_a3";
	Local_58[1 /*16*/][5] = "a3_pose";
	Local_58[1 /*16*/][6] = "a3_to_b4";
	Local_58[1 /*16*/][7] = "b4_pose";
	Local_58[1 /*16*/][8] = "b4_to_start";
	iLocal_54[2] = 15;
	Local_58[2 /*16*/][0] = "start_to_c1";
	Local_58[2 /*16*/][1] = "c1_pose";
	Local_58[2 /*16*/][2] = "c1_to_c2";
	Local_58[2 /*16*/][3] = "c2_pose";
	Local_58[2 /*16*/][4] = "c2_to_c3";
	Local_58[2 /*16*/][5] = "c3_pose";
	Local_58[2 /*16*/][6] = "c3_to_c4";
	Local_58[2 /*16*/][7] = "c4_pose";
	Local_58[2 /*16*/][8] = "c4_to_c5";
	Local_58[2 /*16*/][9] = "c5_pose";
	Local_58[2 /*16*/][10] = "c5_to_c6";
	Local_58[2 /*16*/][11] = "c6_pose";
	Local_58[2 /*16*/][12] = "c6_to_c7";
	Local_58[2 /*16*/][13] = "c7_pose";
	Local_58[2 /*16*/][14] = "c7_to_start";
	Local_59[0 /*22*/][0 /*3*/][0] = 180;
	Local_59[0 /*22*/][0 /*3*/][1] = 180;
	Local_60[0 /*22*/][0 /*3*/][0] = 0;
	Local_60[0 /*22*/][0 /*3*/][1] = 0;
	Local_59[0 /*22*/][1 /*3*/][0] = 270;
	Local_59[0 /*22*/][1 /*3*/][1] = 90;
	Local_60[0 /*22*/][1 /*3*/][0] = 0;
	Local_60[0 /*22*/][1 /*3*/][1] = 1;
	Local_59[0 /*22*/][2 /*3*/][0] = 315;
	Local_59[0 /*22*/][2 /*3*/][1] = 135;
	Local_60[0 /*22*/][2 /*3*/][0] = 0;
	Local_60[0 /*22*/][2 /*3*/][1] = 0;
	Local_59[1 /*22*/][0 /*3*/][0] = 225;
	Local_59[1 /*22*/][0 /*3*/][1] = 135;
	Local_60[1 /*22*/][0 /*3*/][0] = 0;
	Local_60[1 /*22*/][0 /*3*/][1] = 0;
	Local_59[1 /*22*/][1 /*3*/][0] = 315;
	Local_59[1 /*22*/][1 /*3*/][1] = 45;
	Local_60[1 /*22*/][1 /*3*/][0] = 0;
	Local_60[1 /*22*/][1 /*3*/][1] = 1;
	Local_59[1 /*22*/][2 /*3*/][0] = 270;
	Local_59[1 /*22*/][2 /*3*/][1] = 135;
	Local_60[1 /*22*/][2 /*3*/][0] = 1;
	Local_60[1 /*22*/][2 /*3*/][1] = 0;
	Local_59[1 /*22*/][3 /*3*/][0] = 225;
	Local_59[1 /*22*/][3 /*3*/][1] = 0;
	Local_60[1 /*22*/][3 /*3*/][0] = 1;
	Local_60[1 /*22*/][3 /*3*/][1] = 1;
	Local_59[2 /*22*/][0 /*3*/][0] = 270;
	Local_59[2 /*22*/][0 /*3*/][1] = 90;
	Local_60[2 /*22*/][0 /*3*/][0] = 0;
	Local_60[2 /*22*/][0 /*3*/][1] = 0;
	Local_59[2 /*22*/][1 /*3*/][0] = 180;
	Local_59[2 /*22*/][1 /*3*/][1] = 180;
	Local_60[2 /*22*/][1 /*3*/][0] = 1;
	Local_60[2 /*22*/][1 /*3*/][1] = 0;
	Local_59[2 /*22*/][2 /*3*/][0] = 225;
	Local_59[2 /*22*/][2 /*3*/][1] = 135;
	Local_60[2 /*22*/][2 /*3*/][0] = 0;
	Local_60[2 /*22*/][2 /*3*/][1] = 1;
	Local_59[2 /*22*/][3 /*3*/][0] = 180;
	Local_59[2 /*22*/][3 /*3*/][1] = 180;
	Local_60[2 /*22*/][3 /*3*/][0] = 1;
	Local_60[2 /*22*/][3 /*3*/][1] = 0;
	Local_59[2 /*22*/][4 /*3*/][0] = 0;
	Local_59[2 /*22*/][4 /*3*/][1] = 0;
	Local_60[2 /*22*/][4 /*3*/][0] = 0;
	Local_60[2 /*22*/][4 /*3*/][1] = 1;
	Local_59[2 /*22*/][5 /*3*/][0] = 225;
	Local_59[2 /*22*/][5 /*3*/][1] = 135;
	Local_60[2 /*22*/][5 /*3*/][0] = 1;
	Local_60[2 /*22*/][5 /*3*/][1] = 0;
	Local_59[2 /*22*/][6 /*3*/][0] = 45;
	Local_59[2 /*22*/][6 /*3*/][1] = 315;
	Local_60[2 /*22*/][6 /*3*/][0] = 0;
	Local_60[2 /*22*/][6 /*3*/][1] = 1;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					Local_64[0 /*7*/][0 /*3*/] = { -788.3289f, 187.78987f, 72.757515f };
					Local_65[0 /*7*/][0 /*3*/] = { -2.995436f, 0.021138f, 119.40729f };
					Local_66[0 /*3*/][0] = 38.843723f;
					Local_64[0 /*7*/][1 /*3*/] = { -788.3289f, 187.78987f, 72.757515f };
					Local_65[0 /*7*/][1 /*3*/] = { -2.995436f, 0.021138f, 119.40729f };
					Local_66[0 /*3*/][1] = 38.843723f;
					iLocal_68[0] = 0;
					Local_69[0 /*4*/][0] = 0;
					Local_69[0 /*4*/][1] = 0;
					Local_69[0 /*4*/][2] = 0;
					Local_64[1 /*7*/][0 /*3*/] = { -777.07263f, 178.25827f, 73.16133f };
					Local_65[1 /*7*/][0 /*3*/] = { 0.894393f, 0.026403f, 59.980026f };
					Local_66[1 /*3*/][0] = 38.472504f;
					Local_64[1 /*7*/][1 /*3*/] = { -777.07263f, 178.25827f, 73.16133f };
					Local_65[1 /*7*/][1 /*3*/] = { 0.894393f, 0.026403f, 59.980026f };
					Local_66[1 /*3*/][1] = 38.472504f;
					iLocal_68[1] = 0;
					Local_69[1 /*4*/][0] = 0;
					Local_69[1 /*4*/][1] = 0;
					Local_69[1 /*4*/][2] = 0;
					Local_64[2 /*7*/][0 /*3*/] = { -789.17566f, 189.2423f, 72.39192f };
					Local_65[2 /*7*/][0 /*3*/] = { 7.114471f, 0.02728f, 162.32434f };
					Local_66[2 /*3*/][0] = 39.136875f;
					Local_64[2 /*7*/][1 /*3*/] = { -789.17566f, 189.2423f, 72.39192f };
					Local_65[2 /*7*/][1 /*3*/] = { 7.114471f, 0.02728f, 162.32434f };
					Local_66[2 /*3*/][1] = 39.136875f;
					iLocal_68[2] = 0;
					Local_69[2 /*4*/][0] = 1;
					Local_69[2 /*4*/][1] = 0;
					Local_69[2 /*4*/][2] = 1;
					Local_64[3 /*7*/][0 /*3*/] = { -789.80994f, 186.57169f, 73.313194f };
					Local_65[3 /*7*/][0 /*3*/] = { -4.724632f, -0.029824f, 123.259636f };
					Local_66[3 /*3*/][0] = 36.660973f;
					Local_64[3 /*7*/][1 /*3*/] = { -789.80994f, 186.57169f, 73.313194f };
					Local_65[3 /*7*/][1 /*3*/] = { 2.853551f, -0.029824f, 107.23911f };
					Local_66[3 /*3*/][1] = 36.660973f;
					iLocal_67[3] = 2500;
					iLocal_68[3] = 0;
					Local_69[3 /*4*/][0] = 1;
					Local_69[3 /*4*/][1] = 1;
					Local_69[3 /*4*/][2] = 1;
					break;
				case 1:
					Local_64[0 /*7*/][0 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_65[0 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_66[0 /*3*/][0] = 39.35555f;
					Local_64[0 /*7*/][1 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_65[0 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_66[0 /*3*/][1] = 39.35555f;
					iLocal_68[0] = 0;
					Local_69[0 /*4*/][0] = 0;
					Local_69[0 /*4*/][1] = 0;
					Local_69[0 /*4*/][2] = 0;
					Local_64[1 /*7*/][0 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_65[1 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_66[1 /*3*/][0] = 39.35555f;
					Local_64[1 /*7*/][1 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_65[1 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_66[1 /*3*/][1] = 39.35555f;
					iLocal_68[1] = 0;
					Local_69[1 /*4*/][0] = 0;
					Local_69[1 /*4*/][1] = 0;
					Local_69[1 /*4*/][2] = 0;
					Local_64[2 /*7*/][0 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_65[2 /*7*/][0 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_66[2 /*3*/][0] = 39.35555f;
					Local_64[2 /*7*/][1 /*3*/] = { 2863.5454f, 5942.7373f, 357.63422f };
					Local_65[2 /*7*/][1 /*3*/] = { 7.496217f, -0.044239f, 35.309185f };
					Local_66[2 /*3*/][1] = 39.35555f;
					iLocal_68[2] = 0;
					Local_69[2 /*4*/][0] = 1;
					Local_69[2 /*4*/][1] = 0;
					Local_69[2 /*4*/][2] = 1;
					Local_64[3 /*7*/][0 /*3*/] = { 2863.8467f, 5945.488f, 357.8748f };
					Local_65[3 /*7*/][0 /*3*/] = { 8.808952f, 0.000863f, 79.57675f };
					Local_66[3 /*3*/][0] = 39.35555f;
					Local_64[3 /*7*/][1 /*3*/] = { 2863.3684f, 5945.4023f, 357.95956f };
					Local_65[3 /*7*/][1 /*3*/] = { 14.608078f, 0.000863f, 76.6072f };
					Local_66[3 /*3*/][1] = 39.35555f;
					iLocal_67[3] = 3500;
					iLocal_68[3] = 0;
					Local_69[3 /*4*/][0] = 1;
					Local_69[3 /*4*/][1] = 1;
					Local_69[3 /*4*/][2] = 1;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					Local_64[0 /*7*/][0 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_65[0 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_66[0 /*3*/][0] = 39.35555f;
					Local_64[0 /*7*/][1 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_65[0 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_66[0 /*3*/][1] = 39.35555f;
					iLocal_68[0] = 0;
					Local_69[0 /*4*/][0] = 1;
					Local_69[0 /*4*/][1] = 0;
					Local_69[0 /*4*/][2] = 0;
					Local_64[1 /*7*/][0 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_65[1 /*7*/][0 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_66[1 /*3*/][0] = 39.35555f;
					Local_64[1 /*7*/][1 /*3*/] = { -780.27057f, 181.49901f, 72.13419f };
					Local_65[1 /*7*/][1 /*3*/] = { 5.718471f, -0.071512f, 58.085785f };
					Local_66[1 /*3*/][1] = 39.35555f;
					iLocal_68[1] = 0;
					Local_69[1 /*4*/][0] = 1;
					Local_69[1 /*4*/][1] = 0;
					Local_69[1 /*4*/][2] = 1;
					Local_64[2 /*7*/][0 /*3*/] = { -788.8512f, 184.02661f, 72.53404f };
					Local_65[2 /*7*/][0 /*3*/] = { 4.066512f, -0.006667f, 50.292328f };
					Local_66[2 /*3*/][0] = 35.458775f;
					Local_64[2 /*7*/][1 /*3*/] = { -788.8512f, 184.02661f, 72.53404f };
					Local_65[2 /*7*/][1 /*3*/] = { 4.066512f, -0.006667f, 50.292328f };
					Local_66[2 /*3*/][1] = 35.458775f;
					iLocal_68[2] = 1500;
					Local_69[2 /*4*/][0] = 1;
					Local_69[2 /*4*/][1] = 0;
					Local_69[2 /*4*/][2] = 1;
					Local_64[3 /*7*/][0 /*3*/] = { -789.0597f, 187.83965f, 72.44362f };
					Local_65[3 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_66[3 /*3*/][0] = 38.76796f;
					Local_64[3 /*7*/][1 /*3*/] = { -789.0597f, 187.83965f, 72.44362f };
					Local_65[3 /*7*/][1 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_66[3 /*3*/][1] = 38.76796f;
					iLocal_68[3] = 1500;
					Local_69[3 /*4*/][0] = 1;
					Local_69[3 /*4*/][1] = 0;
					Local_69[3 /*4*/][2] = 1;
					Local_64[4 /*7*/][0 /*3*/] = { -789.0597f, 187.83965f, 72.44362f };
					Local_65[4 /*7*/][0 /*3*/] = { 5.096624f, 0.047362f, 143.4105f };
					Local_66[4 /*3*/][0] = 38.76796f;
					Local_64[4 /*7*/][1 /*3*/] = { -790.05273f, 187.87793f, 73.247765f };
					Local_65[4 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.77707f };
					Local_66[4 /*3*/][1] = 39.35555f;
					iLocal_67[4] = 5000;
					iLocal_68[4] = 0;
					Local_69[4 /*4*/][0] = 1;
					Local_69[4 /*4*/][1] = 1;
					Local_69[4 /*4*/][2] = 1;
					break;
				case 1:
					Local_64[0 /*7*/][0 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_65[0 /*7*/][0 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_66[0 /*3*/][0] = 39.35555f;
					Local_64[0 /*7*/][1 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_65[0 /*7*/][1 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_66[0 /*3*/][1] = 39.35555f;
					iLocal_68[0] = 0;
					Local_69[0 /*4*/][0] = 1;
					Local_69[0 /*4*/][1] = 0;
					Local_69[0 /*4*/][2] = 0;
					Local_64[1 /*7*/][0 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_65[1 /*7*/][0 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_66[1 /*3*/][0] = 39.35555f;
					Local_64[1 /*7*/][1 /*3*/] = { 2864.7095f, 5941.5225f, 357.44135f };
					Local_65[1 /*7*/][1 /*3*/] = { 12.518688f, 0.000864f, 32.242397f };
					Local_66[1 /*3*/][1] = 39.35555f;
					iLocal_68[1] = 0;
					Local_69[1 /*4*/][0] = 1;
					Local_69[1 /*4*/][1] = 0;
					Local_69[1 /*4*/][2] = 1;
					Local_64[2 /*7*/][0 /*3*/] = { 2867.4824f, 5947.726f, 358.18396f };
					Local_65[2 /*7*/][0 /*3*/] = { 2.762805f, -0.036948f, 111.423454f };
					Local_66[2 /*3*/][0] = 39.35555f;
					Local_64[2 /*7*/][1 /*3*/] = { 2867.4824f, 5947.726f, 358.18396f };
					Local_65[2 /*7*/][1 /*3*/] = { 2.762805f, -0.036948f, 111.423454f };
					Local_66[2 /*3*/][1] = 39.35555f;
					iLocal_68[2] = 1500;
					Local_69[2 /*4*/][0] = 1;
					Local_69[2 /*4*/][1] = 0;
					Local_69[2 /*4*/][2] = 1;
					Local_64[3 /*7*/][0 /*3*/] = { 2863.6633f, 5943.965f, 357.336f };
					Local_65[3 /*7*/][0 /*3*/] = { 12.750703f, 0.011422f, 62.85451f };
					Local_66[3 /*3*/][0] = 39.35555f;
					Local_64[3 /*7*/][1 /*3*/] = { 2863.6633f, 5943.965f, 357.336f };
					Local_65[3 /*7*/][1 /*3*/] = { 12.750703f, 0.011422f, 62.85451f };
					Local_66[3 /*3*/][1] = 39.35555f;
					iLocal_68[3] = 1500;
					Local_69[3 /*4*/][0] = 1;
					Local_69[3 /*4*/][1] = 0;
					Local_69[3 /*4*/][2] = 1;
					Local_64[4 /*7*/][0 /*3*/] = { 2863.6633f, 5943.965f, 357.336f };
					Local_65[4 /*7*/][0 /*3*/] = { 12.750703f, 0.011422f, 62.85451f };
					Local_66[4 /*3*/][0] = 39.35555f;
					Local_64[4 /*7*/][1 /*3*/] = { 2863.3408f, 5944.931f, 357.7342f };
					Local_65[4 /*7*/][1 /*3*/] = { 19.264002f, -0.043584f, 59.654526f };
					Local_66[4 /*3*/][1] = 39.35555f;
					iLocal_67[4] = 5000;
					iLocal_68[4] = 0;
					Local_69[4 /*4*/][0] = 1;
					Local_69[4 /*4*/][1] = 1;
					Local_69[4 /*4*/][2] = 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					Local_64[0 /*7*/][0 /*3*/] = { -790.05273f, 187.87793f, 73.247765f };
					Local_65[0 /*7*/][0 /*3*/] = { -0.7329f, -0.070113f, 153.77707f };
					Local_66[0 /*3*/][0] = 39.35555f;
					Local_64[0 /*7*/][1 /*3*/] = { -790.05273f, 187.87793f, 73.247765f };
					Local_65[0 /*7*/][1 /*3*/] = { -0.7329f, -0.070113f, 153.77707f };
					Local_66[0 /*3*/][1] = 39.35555f;
					iLocal_68[0] = 0;
					Local_69[0 /*4*/][0] = 0;
					Local_69[0 /*4*/][1] = 0;
					Local_69[0 /*4*/][2] = 1;
					Local_64[1 /*7*/][0 /*3*/] = { -789.2074f, 185.48311f, 71.91133f };
					Local_65[1 /*7*/][0 /*3*/] = { 25.596989f, -0.035805f, 57.89385f };
					Local_66[1 /*3*/][0] = 38.164177f;
					Local_64[1 /*7*/][1 /*3*/] = { -789.2074f, 185.48311f, 71.91133f };
					Local_65[1 /*7*/][1 /*3*/] = { 25.596989f, -0.035805f, 57.89385f };
					Local_66[1 /*3*/][1] = 38.164177f;
					iLocal_68[1] = 0;
					Local_69[1 /*4*/][0] = 1;
					Local_69[1 /*4*/][1] = 0;
					Local_69[1 /*4*/][2] = 1;
					Local_64[2 /*7*/][0 /*3*/] = { -788.8375f, 183.62415f, 71.953735f };
					Local_65[2 /*7*/][0 /*3*/] = { 10.657258f, -0.03214f, 28.324736f };
					Local_66[2 /*3*/][0] = 39.14109f;
					Local_64[2 /*7*/][1 /*3*/] = { -788.8375f, 183.62415f, 71.953735f };
					Local_65[2 /*7*/][1 /*3*/] = { 10.657258f, -0.03214f, 28.324736f };
					Local_66[2 /*3*/][1] = 39.14109f;
					iLocal_68[2] = 1500;
					Local_69[2 /*4*/][0] = 1;
					Local_69[2 /*4*/][1] = 0;
					Local_69[2 /*4*/][2] = 1;
					Local_64[3 /*7*/][0 /*3*/] = { -788.9983f, 186.10419f, 72.044945f };
					Local_65[3 /*7*/][0 /*3*/] = { 5.022902f, -0.035508f, 79.215454f };
					Local_66[3 /*3*/][0] = 29.573942f;
					Local_64[3 /*7*/][1 /*3*/] = { -788.9983f, 186.10419f, 72.044945f };
					Local_65[3 /*7*/][1 /*3*/] = { 5.022902f, -0.035508f, 79.215454f };
					Local_66[3 /*3*/][1] = 29.573942f;
					iLocal_68[3] = 1500;
					Local_69[3 /*4*/][0] = 1;
					Local_69[3 /*4*/][1] = 0;
					Local_69[3 /*4*/][2] = 1;
					Local_64[4 /*7*/][0 /*3*/] = { -790.51306f, 188.46843f, 71.985f };
					Local_65[4 /*7*/][0 /*3*/] = { 10.313763f, -0.036726f, 167.24973f };
					Local_66[4 /*3*/][0] = 31.385864f;
					Local_64[4 /*7*/][1 /*3*/] = { -790.51306f, 188.46843f, 71.985f };
					Local_65[4 /*7*/][1 /*3*/] = { 10.313763f, -0.036726f, 167.24973f };
					Local_66[4 /*3*/][1] = 31.385864f;
					iLocal_68[4] = 1500;
					Local_69[4 /*4*/][0] = 1;
					Local_69[4 /*4*/][1] = 0;
					Local_69[4 /*4*/][2] = 1;
					Local_64[5 /*7*/][0 /*3*/] = { -786.6319f, 188.01498f, 72.13353f };
					Local_65[5 /*7*/][0 /*3*/] = { 4.104248f, -0.02012f, 115.94087f };
					Local_66[5 /*3*/][0] = 38.67459f;
					Local_64[5 /*7*/][1 /*3*/] = { -787.84155f, 187.67157f, 72.22159f };
					Local_65[5 /*7*/][1 /*3*/] = { 4.104248f, -0.02012f, 118.84765f };
					Local_66[5 /*3*/][1] = 38.67459f;
					iLocal_67[5] = 25000;
					iLocal_68[5] = 1500;
					Local_69[5 /*4*/][0] = 1;
					Local_69[5 /*4*/][1] = 1;
					Local_69[5 /*4*/][2] = 1;
					Local_64[6 /*7*/][0 /*3*/] = { -787.4744f, 188.10706f, 72.18631f };
					Local_65[6 /*7*/][0 /*3*/] = { 4.013949f, 0.013702f, 116.10933f };
					Local_66[6 /*3*/][0] = 38.67459f;
					Local_64[6 /*7*/][1 /*3*/] = { -787.4744f, 188.10706f, 72.18631f };
					Local_65[6 /*7*/][1 /*3*/] = { 4.013949f, 0.013702f, 116.10933f };
					Local_66[6 /*3*/][1] = 38.67459f;
					iLocal_68[6] = 1500;
					Local_69[6 /*4*/][0] = 0;
					Local_69[6 /*4*/][1] = 0;
					Local_69[6 /*4*/][2] = 1;
					Local_64[7 /*7*/][0 /*3*/] = { -788.8564f, 186.74655f, 72.63398f };
					Local_65[7 /*7*/][0 /*3*/] = { 2.036967f, 0.013663f, 104.24606f };
					Local_66[7 /*3*/][0] = 38.67459f;
					Local_64[7 /*7*/][1 /*3*/] = { -788.8564f, 186.74655f, 72.63398f };
					Local_65[7 /*7*/][1 /*3*/] = { 13.553912f, 0.013663f, 104.24606f };
					Local_66[7 /*3*/][1] = 38.67459f;
					iLocal_67[7] = 3000;
					iLocal_68[7] = 1500;
					Local_69[7 /*4*/][0] = 1;
					Local_69[7 /*4*/][1] = 1;
					Local_69[7 /*4*/][2] = 1;
					break;
				case 1:
					Local_64[0 /*7*/][0 /*3*/] = { 2863.3408f, 5944.931f, 357.7342f };
					Local_65[0 /*7*/][0 /*3*/] = { 19.264002f, -0.043584f, 59.654526f };
					Local_66[0 /*3*/][0] = 39.35555f;
					Local_64[0 /*7*/][1 /*3*/] = { 2863.3408f, 5944.931f, 357.7342f };
					Local_65[0 /*7*/][1 /*3*/] = { 19.264002f, -0.043584f, 59.654526f };
					Local_66[0 /*3*/][1] = 39.35555f;
					iLocal_68[0] = 0;
					Local_69[0 /*4*/][0] = 0;
					Local_69[0 /*4*/][1] = 0;
					Local_69[0 /*4*/][2] = 1;
					Local_64[1 /*7*/][0 /*3*/] = { 2864.4006f, 5936.752f, 358.64877f };
					Local_65[1 /*7*/][0 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_66[1 /*3*/][0] = 39.35555f;
					Local_64[1 /*7*/][1 /*3*/] = { 2864.4006f, 5936.752f, 358.64877f };
					Local_65[1 /*7*/][1 /*3*/] = { -0.869005f, -0.043912f, 16.59971f };
					Local_66[1 /*3*/][1] = 39.35555f;
					iLocal_68[1] = 0;
					Local_69[1 /*4*/][0] = 1;
					Local_69[1 /*4*/][1] = 0;
					Local_69[1 /*4*/][2] = 1;
					Local_64[2 /*7*/][0 /*3*/] = { 2862.146f, 5943.1934f, 357.363f };
					Local_65[2 /*7*/][0 /*3*/] = { 9.662308f, -0.009141f, 12.365748f };
					Local_66[2 /*3*/][0] = 39.35554f;
					Local_64[2 /*7*/][1 /*3*/] = { 2862.146f, 5943.1934f, 357.363f };
					Local_65[2 /*7*/][1 /*3*/] = { 9.662308f, -0.009141f, 12.365748f };
					Local_66[2 /*3*/][1] = 39.35554f;
					iLocal_68[2] = 1500;
					Local_69[2 /*4*/][0] = 1;
					Local_69[2 /*4*/][1] = 0;
					Local_69[2 /*4*/][2] = 1;
					Local_64[3 /*7*/][0 /*3*/] = { 2863.213f, 5945.368f, 357.28064f };
					Local_65[3 /*7*/][0 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_66[3 /*3*/][0] = 39.35555f;
					Local_64[3 /*7*/][1 /*3*/] = { 2863.213f, 5945.368f, 357.28064f };
					Local_65[3 /*7*/][1 /*3*/] = { 7.742859f, -0.009142f, 73.89006f };
					Local_66[3 /*3*/][1] = 39.35555f;
					iLocal_68[3] = 1500;
					Local_69[3 /*4*/][0] = 1;
					Local_69[3 /*4*/][1] = 0;
					Local_69[3 /*4*/][2] = 1;
					Local_64[4 /*7*/][0 /*3*/] = { 2859.7124f, 5949.6074f, 357.3627f };
					Local_65[4 /*7*/][0 /*3*/] = { 10.394834f, -0.009141f, -152.23247f };
					Local_66[4 /*3*/][0] = 39.35555f;
					Local_64[4 /*7*/][1 /*3*/] = { 2859.7124f, 5949.6074f, 357.3627f };
					Local_65[4 /*7*/][1 /*3*/] = { 10.394834f, -0.009141f, -152.23247f };
					Local_66[4 /*3*/][1] = 39.35555f;
					iLocal_68[4] = 1500;
					Local_69[4 /*4*/][0] = 1;
					Local_69[4 /*4*/][1] = 0;
					Local_69[4 /*4*/][2] = 1;
					Local_64[5 /*7*/][0 /*3*/] = { 2870.4316f, 5948.1343f, 357.55786f };
					Local_65[5 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_66[5 /*3*/][0] = 39.35555f;
					Local_64[5 /*7*/][1 /*3*/] = { 2868.0322f, 5947.4717f, 357.7983f };
					Local_65[5 /*7*/][1 /*3*/] = { 6.054419f, 0.025583f, 108.79508f };
					Local_66[5 /*3*/][1] = 39.35555f;
					iLocal_67[5] = 25000;
					iLocal_68[5] = 1500;
					Local_69[5 /*4*/][0] = 1;
					Local_69[5 /*4*/][1] = 1;
					Local_69[5 /*4*/][2] = 1;
					Local_64[6 /*7*/][0 /*3*/] = { 2870.4316f, 5948.1343f, 357.55786f };
					Local_65[6 /*7*/][0 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_66[6 /*3*/][0] = 39.35555f;
					Local_64[6 /*7*/][1 /*3*/] = { 2870.4316f, 5948.1343f, 357.55786f };
					Local_65[6 /*7*/][1 /*3*/] = { 8.651419f, -0.00147f, 105.7204f };
					Local_66[6 /*3*/][1] = 39.35555f;
					iLocal_68[6] = 1500;
					Local_69[6 /*4*/][0] = 0;
					Local_69[6 /*4*/][1] = 0;
					Local_69[6 /*4*/][2] = 1;
					Local_64[7 /*7*/][0 /*3*/] = { 2863.6287f, 5945.854f, 357.84564f };
					Local_65[7 /*7*/][0 /*3*/] = { 8.768853f, -0.026652f, 91.796844f };
					Local_66[7 /*3*/][0] = 39.35555f;
					Local_64[7 /*7*/][1 /*3*/] = { 2863.1848f, 5946.305f, 358.17773f };
					Local_65[7 /*7*/][1 /*3*/] = { 8.00841f, -0.026652f, 105.28273f };
					Local_66[7 /*3*/][1] = 39.35555f;
					iLocal_67[7] = 3000;
					iLocal_68[7] = 0;
					Local_69[7 /*4*/][0] = 1;
					Local_69[7 /*4*/][1] = 1;
					Local_69[7 /*4*/][2] = 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			Local_61[0 /*3*/] = { -790.58887f, 186.56451f, 72.96992f };
			Local_62[0 /*3*/] = { -1.638374f, 0.042595f, -117.007965f };
			fLocal_63[0] = 31.157114f;
			Local_61[1 /*3*/] = { -791.59436f, 188.75871f, 72.86561f };
			Local_62[1 /*3*/] = { 0.094575f, 0.05061f, -126.9435f };
			fLocal_63[1] = 28.413298f;
			break;
		case 1:
			Local_61[0 /*3*/] = { -789.15674f, 189.34433f, 72.052315f };
			Local_62[0 /*3*/] = { 12.437154f, -0.037231f, -164.07465f };
			fLocal_63[0] = 19.247688f;
			Local_61[1 /*3*/] = { -789.3468f, 185.26166f, 72.098404f };
			Local_62[1 /*3*/] = { 11.946778f, -0.005908f, 19.566986f };
			fLocal_63[1] = 23.4548f;
			break;
		case 2:
			Local_61[0 /*3*/] = { -790.52167f, 187.28793f, 73.18652f };
			Local_62[0 /*3*/] = { -0.678966f, -0.045711f, -139.55168f };
			fLocal_63[0] = 28.094011f;
			Local_61[1 /*3*/] = { -790.42487f, 186.15308f, 73.241264f };
			Local_62[1 /*3*/] = { -0.614909f, 0.001498f, -30.896523f };
			fLocal_63[1] = 32.06593f;
			break;
	}
}

int func_652()//Position - 0x7D71C
{
	if (MISC::IS_PC_VERSION())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_75) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_76))
		{
			return 1;
		}
	}
	else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_75))
	{
		return 1;
	}
	return 0;
}

void func_654()//Position - 0x7D7AD
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 223 /*INPUT_SCRIPT_RDOWN*/))
	{
		if (bLocal_88 == 1)
		{
			bLocal_88 = false;
		}
		else
		{
			bLocal_88 = true;
		}
		iLocal_86 = 0;
		iLocal_87 = 0;
	}
}

void func_656(struct<46> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, char* sParam18, char* sParam19, char* sParam20, int iParam21, char* sParam22, int iParam23, char* sParam24, int iParam25, char* sParam26, int iParam27, char* sParam28, int iParam29, char* sParam30, int iParam31, char* sParam32, char* sParam33, char* sParam34, int iParam35)//Position - 0x7D9A4
{
	switch (Param0.f_7)
	{
		case 0:
			*iParam14 = MISC::GET_GAME_TIMER();
			break;
		case 1:
			*iParam31 = 0;
			if (*iParam12 == Param0.f_16)
			{
				if (Param0.f_9 == 0)
				{
					*iParam21 = 0;
					*iParam23 = 0;
					*iParam25 = 0;
					if (*iParam15 != Param0.f_14)
					{
						if (!func_493(sParam20))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam20, 7, 0, 0, 0))
								{
									func_478(sParam20, 1);
								}
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
						else if (!__LIB_17__::func_160(sParam20))
						{
							func_478(sParam20, 0);
							*iParam15 = Param0.f_14;
							*iParam14 = MISC::GET_GAME_TIMER();
						}
					}
					if (!func_493(sParam16) || !func_493(sParam17))
					{
						if (__LIB_16__::func_302(12500, *iParam14))
						{
							if (!__LIB_0__::func_75())
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam16, 7, 0, 0, 0))
										{
											func_478(sParam16, 1);
											func_478(sParam17, 1);
										}
										break;
									case 1:
										if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam17, 7, 0, 0, 0))
										{
											func_478(sParam16, 1);
											func_478(sParam17, 1);
										}
										break;
								}
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
					}
					else if (!__LIB_17__::func_160(sParam16) && !__LIB_17__::func_160(sParam17))
					{
						func_478(sParam16, 0);
						func_478(sParam17, 0);
						*iParam14 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					*iParam14 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				*iParam21 = 0;
				*iParam13 = Param0.f_15;
				if (!func_493(sParam18) || !func_493(sParam19))
				{
					if (!__LIB_0__::func_75())
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
						{
							case 0:
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam18, 7, 0, 0, 0))
								{
									func_478(sParam18, 1);
									func_478(sParam19, 1);
								}
								break;
							case 1:
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam19, 7, 0, 0, 0))
								{
									func_478(sParam18, 1);
									func_478(sParam19, 1);
								}
								break;
						}
					}
					else
					{
						__LIB_0__::func_638();
					}
				}
				else if (!__LIB_17__::func_160(sParam18) && !__LIB_17__::func_160(sParam18))
				{
					func_478(sParam18, 0);
					func_478(sParam18, 0);
					*iParam12 = Param0.f_16;
					*iParam14 = MISC::GET_GAME_TIMER();
				}
			}
			switch (Param0.f_9)
			{
				case 2:
					if (*iParam13 != Param0.f_15)
					{
						*iParam23 = 0;
						*iParam25 = 0;
						*iParam13 = Param0.f_15;
					}
					if (*iParam21 == 0)
					{
						if (!func_493(sParam22))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam22, 7, 0, 0, 0))
								{
									func_478(sParam22, 1);
									*iParam21 = 1;
								}
							}
							else
							{
								__LIB_0__::func_638();
							}
						}
						else if (!__LIB_17__::func_160(sParam22))
						{
							func_478(sParam22, 0);
						}
					}
					if (*iParam23 == 0)
					{
						if (Param0.f_37 == 1 && Param0.f_38 == 1)
						{
							if (!func_493(sParam24))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam24, 7, 0, 0, 0))
									{
										func_478(sParam24, 1);
										*iParam23 = 1;
									}
								}
								else
								{
									__LIB_0__::func_638();
								}
							}
							else if (!__LIB_17__::func_160(sParam24))
							{
								func_478(sParam24, 0);
							}
						}
					}
					if (*iParam25 == 0)
					{
						if (Param0.f_44 == 1 || Param0.f_45 == 1)
						{
							if (!func_493(sParam26))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam26, 7, 0, 0, 0))
									{
										func_478(sParam26, 1);
										*iParam25 = 1;
									}
								}
								else
								{
									__LIB_0__::func_638();
								}
							}
							else if (!__LIB_17__::func_160(sParam26))
							{
								func_478(sParam26, 0);
							}
						}
					}
					switch (Param0.f_10)
					{
						case 0:
							*iParam29 = 0;
							if (Param0.f_22 == 0)
							{
								if (*iParam27 == 0)
								{
									if (!func_493(sParam28))
									{
										if (!__LIB_0__::func_75())
										{
											if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", __LIB_1__::func_295(__LIB_0__::func_680(), sParam28, "FAM5_YOIA"), 7, 0, 0, 0))
											{
												func_478(sParam28, 1);
												*iParam27 = 1;
											}
										}
										else
										{
											__LIB_0__::func_638();
										}
									}
									else if (!__LIB_17__::func_160(sParam28))
									{
										func_478(sParam28, 0);
									}
								}
							}
							else
							{
								*iParam27 = 1;
							}
							break;
						case 1:
							*iParam27 = 0;
							*iParam23 = 0;
							if (Param0.f_23 == 0)
							{
								if (*iParam29 == 0)
								{
									if (!func_493(sParam30))
									{
										if (!__LIB_0__::func_75())
										{
											if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", __LIB_1__::func_295(__LIB_0__::func_680(), sParam30, "FAM5_YOEA"), 7, 0, 0, 0))
											{
												func_478(sParam30, 1);
												*iParam29 = 1;
											}
										}
										else
										{
											__LIB_0__::func_638();
										}
									}
									else if (!__LIB_17__::func_160(sParam30))
									{
										func_478(sParam30, 0);
									}
								}
							}
							else
							{
								*iParam29 = 1;
							}
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			*iParam29 = 0;
			*iParam27 = 0;
			*iParam31 = 0;
			*iParam21 = 0;
			*iParam23 = 0;
			*iParam25 = 0;
			if (Param0.f_12 == 1)
			{
				*iParam14 = MISC::GET_GAME_TIMER();
				*iParam12 = Param0.f_16;
				*iParam13 = Param0.f_15;
				func_478(sParam32, 0);
				func_478(sParam33, 0);
				if (!func_493(sParam34))
				{
					if (!__LIB_0__::func_75())
					{
						if (iLocal_524 >= iParam35)
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Param0.f_0))
							{
								if (AUDIO::HAS_SOUND_FINISHED(Param0.f_26))
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
									{
										case 0:
											__LIB_0__::func_640(Param0.f_0, "GENERIC_CURSE_MED", 6);
											break;
									}
									func_478(sParam34, 1);
								}
							}
						}
						else if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam34, 7, 0, 0, 0))
						{
							iLocal_524++;
							func_478(sParam34, 1);
						}
					}
					else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Param0.f_0))
					{
						__LIB_0__::func_429();
					}
					else
					{
						__LIB_0__::func_638();
					}
				}
				else if (!__LIB_17__::func_160(sParam34))
				{
					func_478(sParam34, 0);
				}
			}
			break;
		case 4:
		case 5:
			*iParam29 = 0;
			*iParam27 = 0;
			*iParam21 = 0;
			*iParam23 = 0;
			*iParam25 = 0;
			if (*iParam31 == 0)
			{
				if (!func_493(sParam32) || !func_493(sParam33))
				{
					if (!__LIB_0__::func_75())
					{
						switch (iLocal_525)
						{
							case 0:
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam32, 7, 0, 0, 0))
								{
									func_478(sParam32, 1);
									func_478(sParam33, 1);
									*iParam31 = 1;
									*iParam12 = Param0.f_16;
									*iParam13 = Param0.f_15;
									*iParam14 = MISC::GET_GAME_TIMER();
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 4);
								}
								break;
							case 1:
								if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", sParam33, 7, 0, 0, 0))
								{
									func_478(sParam32, 1);
									func_478(sParam33, 1);
									*iParam31 = 1;
									*iParam12 = Param0.f_16;
									*iParam13 = Param0.f_15;
									*iParam14 = MISC::GET_GAME_TIMER();
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 4);
								}
								break;
						}
					}
					else
					{
						__LIB_0__::func_638();
					}
				}
			}
			break;
	}
}

void func_658(struct<8> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, int iParam50)//Position - 0x7E04A
{
	switch (Param0.f_7)
	{
		case 4:
			if (!CAM::DOES_CAM_EXIST(iLocal_77))
			{
				iLocal_77 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SHAKE_CAM(iLocal_77, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_PARAMS(iLocal_77, Local_61[iParam50 /*3*/], Local_62[iParam50 /*3*/], fLocal_63[iParam50], 0, 1, 1, 2);
				ENTITY::SET_ENTITY_VISIBLE(Param0.f_0, false, false);
			}
			break;
		case 1:
		case 5:
			if (CAM::DOES_CAM_EXIST(iLocal_77))
			{
				CAM::DESTROY_CAM(iLocal_77, false);
				ENTITY::SET_ENTITY_VISIBLE(Param0.f_0, true, false);
			}
			break;
	}
}

void func_659(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x7E0E0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (*uParam2 == 0)
			{
				if (*uParam6 == 0)
				{
					*uParam6 = MISC::GET_RANDOM_INT_IN_RANGE(iParam9, iParam10);
					*uParam4 = MISC::GET_GAME_TIMER();
				}
				if (__LIB_16__::func_302(*uParam6, *uParam4))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam1))
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 0, 2);
								break;
							case 1:
								TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 1, 2);
								break;
							case 2:
								TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, -1, 2, 2);
								break;
						}
						*uParam5 = MISC::GET_RANDOM_INT_IN_RANGE(iParam7, iParam8);
						*uParam3 = MISC::GET_GAME_TIMER();
						*uParam2 = 1;
					}
				}
			}
			else if (*uParam2 == 1)
			{
				if (*uParam5 == 0)
				{
					*uParam5 = MISC::GET_RANDOM_INT_IN_RANGE(iParam7, iParam8);
					*uParam3 = MISC::GET_GAME_TIMER();
				}
				if (__LIB_16__::func_302(*uParam5, *uParam3))
				{
					TASK::TASK_CLEAR_LOOK_AT(iParam0);
					*uParam6 = MISC::GET_RANDOM_INT_IN_RANGE(iParam9, iParam10);
					*uParam4 = MISC::GET_GAME_TIMER();
					*uParam2 = 0;
				}
			}
		}
	}
}

void func_661(var uParam0, int iParam1, int iParam2)//Position - 0x7E22F
{
	*uParam0 = 0;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0;
	uParam0->f_9 = 0;
	uParam0->f_19 = 0;
	uParam0->f_18 = 0;
	uParam0->f_14 = 0;
	uParam0->f_16 = 0;
	uParam0->f_41 = 0;
	uParam0->f_15 = 0;
	uParam0->f_47 = 0;
	uParam0->f_53 = 0;
	if (iParam1 == 1)
	{
		uParam0->f_50 = 0f;
		uParam0->f_51 = 0f;
	}
	if (iParam2 == 1)
	{
		uParam0->f_54 = 0f;
	}
}

int func_662(int iParam0)//Position - 0x7E29A
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_17__::func_216("family_5_mcs_2", 1))
			{
				if (!PED::IS_PED_INJURED(Local_140.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_140.f_0, "Amanda", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_143.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_143.f_0, "Fabien", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[0 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[0 /*11*/], "Michaels_YogaMat", 0, Local_576[0 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[1 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[1 /*11*/], "Fabiens_YogaMat", 0, Local_576[1 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[2 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[2 /*11*/], "Amandas_yogamat", 0, Local_576[2 /*11*/].f_1, 0);
					}
				}
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_495))
				{
					iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_PARAMS(iLocal_495, Local_118, Local_120, fLocal_122, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_495, "HAND_SHAKE", 0.125f);
					CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
					CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				}
				else if (CAM::DOES_CAM_EXIST(iLocal_495))
				{
					CAM::SET_CAM_PARAMS(iLocal_495, Local_118, Local_120, fLocal_122, 0, 1, 1, 2);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						if (iLocal_498 == 1)
						{
							__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), -790.906f, 186.293f, 71.8351f, 275.07422f, 0, 0, 0);
						}
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 4f, -8f, -1, 1, 0f, false, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
					}
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_140.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						__LIB_17__::func_205(Local_140.f_0, Local_104, Local_105.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_140.f_0, "missfam5_yoga", "f_yogapose_c", Local_104, Local_105, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_140.f_0, false, false);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fabien", 0))
			{
				if (!PED::IS_PED_INJURED(Local_143.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						__LIB_17__::func_205(Local_143.f_0, Local_98, Local_99.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_143.f_0, "missfam5_yoga", "i_yogapose_c", Local_98, Local_99, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_143.f_0, false, false);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_495))
				{
					CAM::SET_CAM_PARAMS(iLocal_495, Local_118, Local_120, fLocal_122, 0, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (iLocal_498 == 1)
						{
							SYSTEM::WAIT(500);
						}
						CAM::DO_SCREEN_FADE_IN(800);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_1__::func_373(0, 0, 1, 0, 0, 0, 0);
					RECORDING::REPLAY_STOP_EVENT();
					return 1;
				}
			}
			else
			{
				AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
				if (iLocal_498 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
						iLocal_498 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_663(int iParam0)//Position - 0x7E719
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_495))
			{
				iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_495, Local_112, Local_114, fLocal_116, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_495, Local_113, Local_115, fLocal_117, 25000, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_495, "HAND_SHAKE", 0.125f);
				CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_495))
			{
				if (!CAM::IS_CAM_RENDERING(iLocal_495))
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
				if (CAM::IS_CAM_RENDERING(iLocal_495))
				{
					CAM::SET_CAM_PARAMS(iLocal_495, Local_112, Local_114, fLocal_116, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_495, Local_113, Local_115, fLocal_117, 25000, 1, 1, 2);
				}
			}
			func_661(&Local_241, 0, 0);
			if (!PED::IS_PED_INJURED(Local_140.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_140.f_0, "missfam5_yoga", "f_yogapose_b", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_140.f_0, "missfam5_yoga", "f_yogapose_b", Local_102, Local_103, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_140.f_0, false, false);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_143.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_143.f_0, "missfam5_yoga", "i_yogapose_b", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_143.f_0, "missfam5_yoga", "i_yogapose_b", Local_96, Local_97, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_143.f_0, false, false);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= (Local_576.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[iVar0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[iVar0 /*11*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_576[iVar0 /*11*/], true);
					}
				}
				iVar0++;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
			}
			*iParam0++;
			break;
		case 1:
			if (!func_493("FAM5_TRIB") && !func_493("FAM5_TRIBF"))
			{
				if (bLocal_292 == 0)
				{
					if (__LIB_14__::func_535(&uLocal_319, "FAM5AUD", "FAM5_TRIB", "FAM5_TRIB_1", 7, 0, 0))
					{
						func_478("FAM5_TRIB", 1);
					}
				}
				else if (__LIB_14__::func_535(&uLocal_319, "FAM5AUD", "FAM5_TRIBF", "FAM5_TRIBF_3", 7, 0, 0))
				{
					func_478("FAM5_TRIBF", 1);
				}
			}
			else
			{
				*iParam0++;
			}
			break;
		case 2:
			func_659(Local_140.f_0, PLAYER::PLAYER_PED_ID(), &(Local_140.f_13), &(Local_140.f_10), &(Local_140.f_9), &(Local_140.f_11), &(Local_140.f_12), 3000, 6000, 2000, 7500);
			func_659(Local_143.f_0, PLAYER::PLAYER_PED_ID(), &(Local_143.f_13), &(Local_143.f_10), &(Local_143.f_9), &(Local_143.f_11), &(Local_143.f_12), 3750, 7500, 3000, 8000);
			if (Local_241.f_7 == 4)
			{
				if (iLocal_525 == -1)
				{
					iLocal_525 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
			}
			else
			{
				iLocal_525 = -1;
			}
			func_613(&Local_241, 1, 0, 981668463);
			func_658(Local_241, iLocal_525);
			func_656(Local_241, &iLocal_309, &iLocal_310, &iLocal_308, &iLocal_311, "FAM5_TRIIA", "FAM5_TRIIF", "FAM5_TRIPA", "FAM5_TRIPF", "FAM5_TRIE", &iLocal_312, "FAM5_TRIFB", &iLocal_313, "FAM5_TRIBC", &iLocal_314, "FAM5_TRIBTF", &iLocal_315, "FAM5_WARIN", &iLocal_316, "FAM5_WAREX", &iLocal_317, "FAM5_TRIDA", "FAM5_TRIDF", "FAM5_TRIF", 4);
			if (func_618(&Local_241, 1, 0, bLocal_292, 0, 1, 0, 0))
			{
				if (!func_493("FAM5_TRIS"))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_TRIS", 7, 0, 0, 0))
						{
							func_478("FAM5_TRIS", 1);
						}
					}
				}
				else if (!__LIB_0__::func_75())
				{
					if (Local_241.f_14 == 0)
					{
						__LIB_0__::func_630(241);
					}
					func_661(&Local_241, 0, 0);
					func_616(&Local_577);
					if (!PED::IS_PED_INJURED(Local_140.f_0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_140.f_0);
						Local_140.f_13 = 0;
					}
					if (!PED::IS_PED_INJURED(Local_143.f_0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_143.f_0);
						Local_143.f_13 = 0;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_576.f_0 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_576[iVar0 /*11*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_576[iVar0 /*11*/], false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_576[iVar0 /*11*/], false);
							}
						}
						iVar0++;
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 4f, 4);
					return 1;
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_2", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", Local_140.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Fabien", Local_143.f_0, 0);
			}
			break;
	}
	return 0;
}

int func_664(int iParam0)//Position - 0x7EC26
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_17__::func_216("family_5_mcs_1", 1))
			{
				if (!PED::IS_PED_INJURED(Local_140.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_140.f_0, "Amanda", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_143.f_0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_143.f_0, "Fabien", 0, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[0 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[0 /*11*/], "Michaels_YogaMat", 0, Local_576[0 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[1 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[1 /*11*/], "Fabiens_YogaMat", 0, Local_576[1 /*11*/].f_1, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[2 /*11*/], false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[2 /*11*/], "Amandas_yogamat", 0, Local_576[2 /*11*/].f_1, 0);
					}
				}
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_CHANGE");
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_495))
				{
					iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_PARAMS(iLocal_495, Local_112, Local_114, fLocal_116, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_495, "HAND_SHAKE", 0.125f);
					CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
					CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				}
				else if (CAM::DOES_CAM_EXIST(iLocal_495))
				{
					CAM::SET_CAM_PARAMS(iLocal_495, Local_112, Local_114, fLocal_116, 0, 1, 1, 2);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 1000f, -8f, -1, 1, 0f, false, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
					}
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_140.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						__LIB_17__::func_205(Local_140.f_0, Local_102, Local_103.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_140.f_0, "missfam5_yoga", "f_yogapose_b", Local_102, Local_103, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_140.f_0, false, false);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fabien", 0))
			{
				if (!PED::IS_PED_INJURED(Local_143.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						__LIB_17__::func_205(Local_143.f_0, Local_96, Local_97.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_143.f_0, "missfam5_yoga", "i_yogapose_b", Local_96, Local_97, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_143.f_0, false, false);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (CAM::DOES_CAM_EXIST(iLocal_495))
				{
					CAM::SET_CAM_PARAMS(iLocal_495, Local_112, Local_114, fLocal_116, 0, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_1__::func_373(0, 0, 1, 0, 0, 0, 0);
					RECORDING::REPLAY_STOP_EVENT();
					return 1;
				}
			}
			else
			{
				AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
				if (iLocal_498 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
						iLocal_498 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_665(int iParam0)//Position - 0x7F07F
{
	int iVar0;
	switch (*iParam0)
	{
		case 0:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (!CAM::DOES_CAM_EXIST(iLocal_495))
			{
				iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
				CAM::SET_CAM_PARAMS(iLocal_495, Local_106, Local_108, fLocal_110, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_495, Local_107, Local_109, fLocal_111, 25000, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_495, "HAND_SHAKE", 0.125f);
				CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_495))
			{
				if (!CAM::IS_CAM_RENDERING(iLocal_495))
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
				if (CAM::IS_CAM_RENDERING(iLocal_495))
				{
					CAM::SET_CAM_PARAMS(iLocal_495, Local_106, Local_108, fLocal_110, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_495, Local_107, Local_109, fLocal_111, 25000, 1, 1, 2);
				}
			}
			func_661(&Local_241, 1, 1);
			if (!PED::IS_PED_INJURED(Local_140.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_140.f_0, "missfam5_yoga", "f_yogapose_a", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_140.f_0, "missfam5_yoga", "f_yogapose_a", Local_100, Local_101, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_140.f_0, false, false);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_143.f_0))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_143.f_0, "missfam5_yoga", "i_yogapose_a", 3))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_143.f_0, "missfam5_yoga", "i_yogapose_a", Local_94, Local_95, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_143.f_0, false, false);
					}
				}
			}
			iVar0 = 0;
			while (iVar0 <= (Local_576.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_576[iVar0 /*11*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_576[iVar0 /*11*/], false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_576[iVar0 /*11*/], true);
					}
				}
				iVar0++;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
			}
			*iParam0++;
			break;
		case 1:
			if (!func_493("FAM5_WARB") && !func_493("FAM5_WARBF"))
			{
				if (bLocal_292 == 0)
				{
					if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_WARB", 7, 0, 0, 0))
					{
						func_478("FAM5_WARB", 1);
					}
				}
				else if (__LIB_14__::func_535(&uLocal_319, "FAM5AUD", "FAM5_WARBF", "FAM5_WARBF_1", 7, 0, 0))
				{
					func_478("FAM5_WARBF", 1);
				}
			}
			else
			{
				*iParam0++;
			}
			break;
		case 2:
			func_659(Local_140.f_0, PLAYER::PLAYER_PED_ID(), &(Local_140.f_13), &(Local_140.f_10), &(Local_140.f_9), &(Local_140.f_11), &(Local_140.f_12), 3000, 6000, 2000, 7500);
			func_659(Local_143.f_0, PLAYER::PLAYER_PED_ID(), &(Local_143.f_13), &(Local_143.f_10), &(Local_143.f_9), &(Local_143.f_11), &(Local_143.f_12), 3750, 7500, 3000, 8000);
			if (Local_241.f_7 == 4)
			{
				if (iLocal_525 == -1)
				{
					iLocal_525 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
				}
			}
			else
			{
				iLocal_525 = -1;
			}
			func_613(&Local_241, 1, 0, 981668463);
			func_658(Local_241, iLocal_525);
			func_656(Local_241, &iLocal_309, &iLocal_310, &iLocal_308, &iLocal_311, "FAM5_WARIA", "FAM5_WARIF", "FAM5_WARPA", "FAM5_WARPF", "FAM5_WARE", &iLocal_312, "FAM5_WARFB", &iLocal_313, "FAM5_WARBC", &iLocal_314, "FAM5_WARBTF", &iLocal_315, "FAM5_WARIN", &iLocal_316, "FAM5_WAREX", &iLocal_317, "FAM5_WARDA", "FAM5_WARDF", "FAM5_WARF", 2);
			if (func_618(&Local_241, 0, 0, 1, 1, 1, 0, 0))
			{
				if (!func_493("FAM5_WARS"))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_2__::func_859(&uLocal_319, "FAM5AUD", "FAM5_WARS", 7, 0, 0, 0))
						{
							func_478("FAM5_WARS", 1);
						}
					}
				}
				else if (!__LIB_0__::func_75())
				{
					if (Local_241.f_14 == 0)
					{
						__LIB_0__::func_630(240);
					}
					func_661(&Local_241, 0, 0);
					func_616(&Local_577);
					if (!PED::IS_PED_INJURED(Local_140.f_0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_140.f_0);
						Local_140.f_13 = 0;
					}
					if (!PED::IS_PED_INJURED(Local_143.f_0))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_143.f_0);
						Local_143.f_13 = 0;
					}
					iVar0 = 0;
					while (iVar0 <= (Local_576.f_0 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_576[iVar0 /*11*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_576[iVar0 /*11*/], false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_576[iVar0 /*11*/], false);
							}
						}
						iVar0++;
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 3f, 4);
					return 1;
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_mcs_1", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Amanda", Local_140.f_0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Fabien", Local_143.f_0, 0);
			}
			break;
	}
	return 0;
}

int func_666(int iParam0)//Position - 0x7F586
{
	switch (*iParam0)
	{
		case 0:
			if (__LIB_13__::func_807(4))
			{
				__LIB_17__::func_209(4);
			}
			if (__LIB_17__::func_216("family_5_int", 1))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_140.f_0, "Amanda", 2, Local_140.f_6, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_143.f_0, "Fabien", 2, Local_143.f_6, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[0 /*11*/], "Michaels_YogaMat", 2, Local_576[0 /*11*/].f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[1 /*11*/], "Fabiens_YogaMat", 2, Local_576[1 /*11*/].f_1, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_576[2 /*11*/], "Amandas_yogamat", 2, Local_576[2 /*11*/].f_1, 0);
				__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(2048);
				RECORDING::REPLAY_START_EVENT(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_164("Michael", PLAYER::PLAYER_PED_ID(), joaat("Player_Zero"), 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_293 == 1)
				{
					__LIB_17__::func_455(&Local_501, 0, 0, 2000, 1, 1, 0, 1);
					CLOCK::SET_CLOCK_TIME(iLocal_530, 0, 0);
				}
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				__LIB_14__::func_566(0);
				__LIB_14__::func_558(0, 0);
				if (__LIB_16__::func_327() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					if (__LIB_14__::func_794() == PLAYER::GET_PLAYERS_LAST_VEHICLE())
					{
						if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
						{
							__LIB_17__::func_168(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -867.9103f, 158.2215f, 63.9014f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 174.2918f);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false, true, false);
							__LIB_17__::func_635(-867.9103f, 158.2215f, 63.9014f, 174.2918f, 0, 145);
							__LIB_0__::func_342(24);
						}
					}
				}
				MISC::CLEAR_AREA(Local_578.f_1, 5000f, true, false, false, false);
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				__LIB_17__::func_217(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
				if (!func_318(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(2);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1.2f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 1, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1.2f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 1, false, true);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_223.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_223);
					ENTITY::REMOVE_MODEL_HIDE(Local_223.f_2, 1f, Local_223.f_1, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_232.f_0))
				{
					OBJECT::DELETE_OBJECT(&Local_232);
					ENTITY::REMOVE_MODEL_HIDE(Local_232.f_2, 1f, Local_232.f_1, false);
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
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
				iLocal_536 = 0;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		case 2:
			if (iLocal_536 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 80650)
					{
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1f, false, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 1, false, true);
						}
						if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
						{
							OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1f, false, false);
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 1, false, true);
						}
						iLocal_536 = 1;
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_140.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Amanda", Local_140.f_6))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amanda", 0)))
					{
						Local_140.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amanda", 0));
						__LIB_17__::func_212(Local_140.f_0, joaat("PLAYER"), 0, 1, 0, 0);
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_140.f_0, true);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_143.f_0))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Fabien", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabien", 0)))
					{
						Local_143.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabien", 0));
						__LIB_17__::func_212(Local_143.f_0, joaat("PLAYER"), 0, 1, 0, 0);
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_143.f_0, true);
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Michaels_YogaMat", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_YogaMat", 0)))
					{
						Local_576[0 /*11*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_YogaMat", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Fabiens_YogaMat", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabiens_YogaMat", 0)))
					{
						Local_576[1 /*11*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Fabiens_YogaMat", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Amandas_yogamat", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amandas_yogamat", 0)))
					{
						Local_576[2 /*11*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Amandas_yogamat", 0));
					}
				}
			}
			STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_495))
				{
					iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::SET_CAM_PARAMS(iLocal_495, Local_106, Local_108, fLocal_110, 0, 1, 1, 2);
					CAM::SHAKE_CAM(iLocal_495, "HAND_SHAKE", 0.125f);
					CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
					CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), -790.906f, 186.293f, 71.8351f, 275.07422f, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", "start_pose", 1000f, -8f, -1, 1, 0f, false, true, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
					}
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Amanda", 0))
			{
				if (!PED::IS_PED_INJURED(Local_140.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						__LIB_17__::func_205(Local_140.f_0, Local_100, Local_101.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_140.f_0, "missfam5_yoga", "f_yogapose_a", Local_100, Local_101, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_140.f_0, false, false);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Fabien", 0))
			{
				if (!PED::IS_PED_INJURED(Local_143.f_0))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
					{
						__LIB_17__::func_205(Local_143.f_0, Local_94, Local_95.f_2, 0, 0, 0);
						TASK::TASK_PLAY_ANIM_ADVANCED(Local_143.f_0, "missfam5_yoga", "i_yogapose_a", Local_94, Local_95, 1000f, -8f, -1, 267273, 0f, 2, 1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_143.f_0, false, false);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (CAM::DOES_CAM_EXIST(iLocal_495))
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((((((func_667(&Local_140, 0, joaat("PLAYER"), 0, 17, 0, 0, 0, 0, -1, 1) && func_667(&Local_143, 0, joaat("PLAYER"), 0, 145, 0, 0, 0, 0, -1, 1)) && func_428(&(Local_576[0 /*11*/]), 0)) && func_428(&(Local_576[1 /*11*/]), 0)) && func_428(&(Local_576[2 /*11*/]), 0)) && STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga")) && AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
				{
					if (iLocal_498 == 1)
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START(-782.81f, 187.44f, 73.33f, -0.98f, -0.17f, -0.06f, 20f, 0);
							iLocal_537 = MISC::GET_GAME_TIMER();
						}
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_16__::func_302(10000, iLocal_537))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							__LIB_1__::func_373(0, 0, 1, 0, 0, 0, 0);
							return 1;
						}
					}
					else
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						__LIB_1__::func_373(0, 0, 1, 0, 0, 0, 0);
						return 1;
					}
				}
			}
			else
			{
				if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_01", false, -1))
				{
				}
				if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_02", false, -1))
				{
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_TRANQUIL"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 75500)
					{
						AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_TRANQUIL");
					}
				}
				if (iLocal_494 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 88000)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_START"))
						{
							iLocal_494 = 1;
						}
					}
				}
				AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
				if (iLocal_498 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
						iLocal_498 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_667(int* iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x7FEEB
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
					else if (__LIB_12__::func_754(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						__LIB_17__::func_212(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
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
						else if (__LIB_17__::func_220(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							__LIB_17__::func_212(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
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
				if (func_694(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					__LIB_17__::func_212(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, false))
				{
					if (func_668(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						__LIB_17__::func_212(*iParam0, iParam2, bParam5, bParam10, bParam6, bParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = __LIB_0__::func_639(*iParam0, 0, 0);
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

int func_668(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x800CC
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_0__::func_154(iParam1);
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
				__LIB_13__::func_823(*iParam0, iParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_309(*iParam0);
				__LIB_17__::func_27(*iParam0, 1, 0);
				__LIB_17__::func_631(*iParam0);
				__LIB_17__::func_217(*iParam0);
				func_670(*iParam0, bParam6);
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

int func_670(int iParam0, bool bParam1)//Position - 0x801F7
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_0__::func_216(iParam0);
	if (__LIB_17__::func_125(iVar0))
	{
		__LIB_17__::func_628(iVar0, 0);
		func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_2(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_17__::func_628(iVar0, 0);
			func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_2(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_318(iParam0, 3, 169))
					{
						func_238(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_318(iParam0, 12, 6))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 11))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 12, 10))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 12, 50))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 14, 59))
			{
				func_238(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_318(iParam0, 8, 22))
			{
				func_238(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_318(iParam0, 12, 14))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_318(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 4))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 12, 3))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 14, 82))
			{
				func_238(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_318(iParam0, 8, 76))
			{
				func_238(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_318(iParam0, 12, 1))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_318(iParam0, 12, 12))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 12, 15))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_318(iParam0, 3, 71))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_318(iParam0, 12, 7))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 12, 6))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_318(iParam0, 14, 88))
			{
				func_238(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_318(iParam0, 8, 17))
			{
				func_238(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_318(iParam0, 12, 11))
			{
				func_238(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_694(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x82AF5
{
	int iVar0;
	if (__LIB_0__::func_43(iParam1))
	{
		iVar0 = __LIB_0__::func_154(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_13__::func_823(*iParam0, iParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_309(*iParam0);
			__LIB_17__::func_27(*iParam0, 1, 0);
			__LIB_17__::func_631(*iParam0);
			__LIB_17__::func_217(*iParam0);
			func_670(*iParam0, bParam6);
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

int func_715(int iParam0)//Position - 0x8347C
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (*iParam0)
	{
		case 0:
			if (iLocal_294 == 0)
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TIME_LAPSE", false, -1))
				{
					Local_501.f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", false);
					CAM::ADD_CAM_SPLINE_NODE(Local_501.f_4, -839.51416f, 180.32098f, 71.617966f, 10.805817f, 0f, -101.1842f, 5000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(Local_501.f_4, -839.30566f, 180.27979f, 72.14842f, 10.330491f, 0f, -100.12087f, 5000, 3, 2);
					CAM::SET_CAM_FOV(Local_501.f_4, 40.633255f);
					CAM::SET_CAM_ACTIVE(Local_501.f_4, true);
					__LIB_17__::func_455(&Local_501, 1, 0, 2000, 1, 1, 0, 1);
					*iParam0++;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				*iParam0++;
			}
			break;
		case 1:
			iVar0 = CLOCK::GET_CLOCK_HOURS();
			iLocal_530 = iVar0 + 2;
			__LIB_13__::func_812(21, &iVar1, &iVar2);
			if (iLocal_530 > iVar1 || iLocal_530 < iVar2)
			{
				iLocal_530 = 9;
			}
			__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), Local_578.f_1, Local_578.f_4, 0, 0, 0);
			if (!func_318(PLAYER::PLAYER_PED_ID(), 12, 7))
			{
				func_1(2);
			}
			if (__LIB_13__::func_807(4))
			{
				__LIB_17__::func_209(4);
			}
			iLocal_293 = 1;
			*iParam0++;
			break;
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("family_5_int", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_43("Michael", joaat("Player_Zero"), 7);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
				iLocal_500 = 1;
			}
			if (iLocal_294 == 0)
			{
				if (CAM::DOES_CAM_EXIST(Local_501.f_4))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_495))
					{
						CAM::DESTROY_CAM(iLocal_495, false);
					}
				}
				if (__LIB_16__::func_624(iLocal_530, 0, "EXTRASUNNY", "cirrocumulus", &Local_501, -1082130432, 24, 1, 1065353216))
				{
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					if (iLocal_500 == 1)
					{
						*iParam0++;
					}
				}
				if (__LIB_0__::func_645(1000))
				{
					CAM::DO_SCREEN_FADE_OUT(800);
					iLocal_294 = 1;
				}
			}
			else if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
				{
					if (!AUDIO::HAS_SOUND_FINISHED(Local_501.f_10))
					{
						AUDIO::STOP_SOUND(Local_501.f_10);
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
					}
				}
				if (iLocal_500 == 1)
				{
					*iParam0++;
				}
			}
			break;
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_739()//Position - 0x843F9
{
	iLocal_287 = 1;
	iLocal_288 = 0;
	iLocal_484 = 0;
	iLocal_308 = 0;
	iLocal_309 = 0;
	iLocal_310 = 0;
	iLocal_311 = 0;
	Local_140.f_7 = 0;
	Local_140.f_11 = 0;
	Local_140.f_12 = 0;
	Local_140.f_13 = 0;
	Local_143.f_7 = 0;
	Local_143.f_11 = 0;
	Local_143.f_12 = 0;
	Local_143.f_13 = 0;
	Local_146.f_7 = 0;
	Local_148.f_7 = 0;
	iLocal_485 = 0;
	iLocal_486 = 0;
	iLocal_487 = 0;
	iLocal_498 = 0;
	iLocal_499 = 0;
	iLocal_312 = 0;
	iLocal_313 = 0;
	iLocal_314 = 0;
	iLocal_316 = 0;
	iLocal_315 = 0;
	iLocal_317 = 0;
	iLocal_300 = 0;
	iLocal_301 = 0;
	iLocal_492 = 0;
	iLocal_302 = 0;
	iLocal_303 = 0;
	iLocal_304 = 0;
	iLocal_305 = 0;
	iLocal_493 = 0;
	iLocal_518 = 0;
	bLocal_292 = false;
	iLocal_515 = -1;
	iLocal_513 = -1;
	iLocal_514 = -1;
	iLocal_519 = 0;
	iLocal_520 = 0;
	iLocal_521 = 0;
	iLocal_522 = 0;
	iLocal_523 = 0;
	iLocal_524 = 0;
	iLocal_525 = 0;
	iLocal_526 = 0;
	iLocal_527 = 0;
	iLocal_528 = 0;
	iLocal_534 = 0;
	StringCopy(&Local_133, "CMN_GENGETINY" /* GXT: ~s~Get in your ~b~car. */, 16);
	iLocal_535 = 0;
	iLocal_536 = 0;
	iLocal_537 = 0;
	iLocal_538 = 0;
	iLocal_539 = 0;
	iLocal_548 = 0;
	iLocal_549 = 0;
	iLocal_550 = 0;
	iLocal_510 = 0;
	iLocal_491 = 0;
	iLocal_544 = 0;
	iLocal_545 = 0;
	iLocal_546 = 0;
	iLocal_547 = 0;
	StringCopy(&Local_488, "", 24);
	StringCopy(&Local_489, "", 24);
	iLocal_551 = 0;
}

int func_740(var uParam0)//Position - 0x8453B
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")) == 1) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_ANY_VEHICLE")) == 1)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_136 = 1;
						*uParam0++;
					}
				}
				else
				{
					iLocal_136 = 0;
					*uParam0++;
				}
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missfam2mcs_intp1");
			STREAMING::REQUEST_MODEL(Local_223.f_1);
			STREAMING::REQUEST_MODEL(Local_232.f_1);
			if ((STREAMING::HAS_ANIM_DICT_LOADED("missfam2mcs_intp1") && STREAMING::HAS_MODEL_LOADED(Local_223.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_232.f_1))
			{
				switch (iLocal_136)
				{
					case 0:
						*uParam0++;
						break;
					case 1:
						*uParam0++;
						break;
					}
			}
			break;
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_515))
			{
				FIRE::STOP_FIRE_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				MISC::CLEAR_AREA_OF_PROJECTILES(-817.305f, 179.33f, 71.241f, 20f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(-817.305f, 179.33f, 71.241f, 20f);
				iLocal_515 = PED::CREATE_SYNCHRONIZED_SCENE(-817.305f, 179.33f, 71.225f, 0f, 0f, -113f, 2);
				PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_515, true);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), false);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_515, "missfam2mcs_intp1", "fam_2_int_p1_michael", 1000f, -1000f, 0, 0, 1000f, 0);
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
				ENTITY::CREATE_MODEL_HIDE(Local_223.f_2, 1f, Local_223.f_1, false);
				ENTITY::CREATE_MODEL_HIDE(Local_232.f_2, 1f, Local_232.f_1, false);
				Local_223.f_0 = OBJECT::CREATE_OBJECT(Local_223.f_1, -816.72f, 179.1f, 72.83f, true, true, false);
				Local_232.f_0 = OBJECT::CREATE_OBJECT(Local_232.f_1, -816.11f, 177.51f, 72.83f, true, true, false);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_223.f_0, iLocal_515, "fam_2_int_p1_doorl", "missfam2mcs_intp1", 1000f, -1000f, 0, 1000f);
				ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_232.f_0, iLocal_515, "fam_2_int_p1_doorr", "missfam2mcs_intp1", 1000f, -1000f, 0, 1000f);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_223.f_0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_232.f_0);
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_495, iLocal_515, "fam5_intro_cam", "missfam2mcs_intp1");
				HUD::DISPLAY_HUD(false);
				HUD::DISPLAY_RADAR(false);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_223.f_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_232.f_1);
				STREAMING::NEW_LOAD_SCENE_START(-839.51f, 180.32f, 71.61f, 1f, -0.2f, 0.2f, 1500f, 0);
				iLocal_537 = MISC::GET_GAME_TIMER();
				iLocal_500 = 0;
				*uParam0++;
			}
			break;
		case 3:
			if (CAM::DOES_CAM_EXIST(iLocal_495))
			{
				if (__LIB_16__::func_327())
				{
					if ((((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true)) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
						}
						__LIB_14__::func_566(24);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false, true, false);
						ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -867.9103f, 158.2215f, 63.9014f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 174.2918f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f);
					}
				}
				MISC::CLEAR_AREA(-817.305f, 179.33f, 71.241f, 500f, true, false, false, false);
				MISC::CLEAR_AREA_OF_PEDS(-817.305f, 179.33f, 71.241f, 500f, 0);
				MISC::CLEAR_AREA_OF_COPS(-817.305f, 179.33f, 71.241f, 500f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-817.305f, 179.33f, 71.241f, 500f, false, false, false, false, false, false, 0);
				*uParam0++;
			}
			break;
		case 4:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			if (CAM::DOES_CAM_EXIST(iLocal_495))
			{
				if (iLocal_294 == 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_515))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_515) >= 0.99f)
						{
							if (iLocal_500 == 1)
							{
								*uParam0++;
							}
						}
						if (__LIB_0__::func_645(1000))
						{
							CAM::DO_SCREEN_FADE_OUT(800);
							iLocal_294 = 1;
						}
					}
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (iLocal_500 == 1)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_223.f_0, 0f, false);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_232.f_0, 0f, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::DESTROY_CAM(iLocal_495, false);
						CAM::DESTROY_ALL_CAMS(false);
						*uParam0++;
					}
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("family_5_int", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_17__::func_43("Michael", joaat("Player_Zero"), 7);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 2, 4, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Amanda", 10, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Fabien", 4, 0, 0, 0);
				iLocal_500 = 1;
			}
			break;
		case 5:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			if (iLocal_294 == 0)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_495))
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_16__::func_302(10000, iLocal_537))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
						}
						return 1;
					}
				}
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_741(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x84B8F
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::REQUEST_ADDITIONAL_TEXT("FAM5", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("FAM5AUD", 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		if (HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		func_817();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_0__::func_721(0, 0), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_Y_BurgerDrug_01"), true);
		__LIB_16__::func_18(1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_14__::func_566(0);
			__LIB_14__::func_558(0, 0);
		}
		__LIB_0__::func_54(0, 1);
		__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 245);
		__LIB_14__::func_527(&uLocal_266, 0);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", false);
		if (iLocal_504 == 0)
		{
			iLocal_504 = __LIB_17__::func_214(-1181.24f, -884.43f, 12.8f, 2f, 2f, 2f);
			MISC::CLEAR_AREA_OF_PEDS(-1181.24f, -884.43f, 12.8f, 2f, 0);
		}
		if (iLocal_503 == 0)
		{
			iLocal_503 = __LIB_17__::func_214(-964.29f, 307.89f, 70.39f, 16f, 6f, 3f);
			MISC::CLEAR_AREA_OF_PEDS(-964.29f, 307.89f, 70.39f, 10f, 0);
		}
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_811(iParam0);
		__LIB_17__::func_176(&uLocal_555, &uLocal_295);
		__LIB_17__::func_175(&uLocal_566, &uLocal_296);
		func_808();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			__LIB_17__::func_205(PLAYER::PLAYER_PED_ID(), Local_578.f_1, Local_578.f_4, 0, 1, 0);
			if (*uParam3 == 1)
			{
				if (((iParam0 == 2 || iParam0 == 9) || iParam0 == 10) || iParam0 == 11)
				{
					switch (iParam0)
					{
						case 2:
						case 10:
						case 11:
						case 17:
							Local_297 = { Local_578.f_1 };
							break;
						case 9:
							Local_297 = { Local_146.f_2 };
							break;
					}
					while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_297)))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_297));
						SYSTEM::WAIT(0);
					}
				}
			}
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
					__LIB_17__::func_667(86, 0, 0, 1, 0);
					break;
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				__LIB_17__::func_217(PLAYER::PLAYER_PED_ID());
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
				PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
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
			iLocal_294 = 0;
			iLocal_500 = 0;
		}
		if (*iParam4 == 1)
		{
			__LIB_16__::func_3(Local_578.f_1, Local_578.f_4, 1, 0);
		}
		func_803(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (__LIB_17__::func_173(&uLocal_555, &uLocal_295))
		{
			if (__LIB_17__::func_172(&uLocal_566, &uLocal_296))
			{
				*iParam1++;
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_800(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				if (__LIB_0__::func_2(0))
				{
					if (!func_318(PLAYER::PLAYER_PED_ID(), 12, 7))
					{
						func_1(2);
					}
					if (func_318(PLAYER::PLAYER_PED_ID(), 12, 7))
					{
						if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
						{
							*iParam1++;
						}
					}
				}
				else
				{
					*iParam1++;
				}
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				if (func_667(&Local_140, 0, joaat("PLAYER"), 0, 17, 0, 0, 0, 0, -1, 1))
				{
					iLocal_554[5] = 1;
					if (func_667(&Local_143, 0, joaat("PLAYER"), 0, 145, 0, 0, 0, 0, -1, 1))
					{
						iLocal_554[6] = 1;
						iLocal_554[1] = 1;
						if ((func_428(&(Local_576[0 /*11*/]), 0) && func_428(&(Local_576[1 /*11*/]), 0)) && func_428(&(Local_576[2 /*11*/]), 0))
						{
							if (iLocal_299 == 0)
							{
								if (!PED::IS_PED_INJURED(Local_140.f_0))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_140.f_0, 2, 4, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_140.f_0, 3, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_140.f_0, 4, 1, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_140.f_0, 10, 1, 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_143.f_0))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_143.f_0, 0, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_143.f_0, 3, 0, 0, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_143.f_0, 4, 0, 0, 0);
								}
								iLocal_299 = 1;
							}
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), true);
							}
							if (!PED::IS_PED_INJURED(Local_140.f_0))
							{
								PED::SET_FORCE_FOOTSTEP_UPDATE(Local_140.f_0, true);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_140.f_0, 8192);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_140.f_0, 16);
							}
							if (!PED::IS_PED_INJURED(Local_143.f_0))
							{
								PED::SET_FORCE_FOOTSTEP_UPDATE(Local_143.f_0, true);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_143.f_0, 8192);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_143.f_0, 16);
							}
							*iParam1++;
						}
					}
				}
				break;
			case 9:
				if (func_667(&Local_146, 0, joaat("PLAYER"), 0, 14, 0, 0, 0, 0, -1, 1))
				{
					iLocal_554[7] = 1;
					iLocal_554[8] = 1;
					if (func_750(&Local_157, 1, 0, 0, 1, -1, -1, -1))
					{
						iLocal_554[3] = 1;
						iLocal_554[2] = 1;
						if ((func_428(&(Local_576[0 /*11*/]), 0) && func_428(&(Local_576[1 /*11*/]), 0)) && func_428(&(Local_576[2 /*11*/]), 0))
						{
							__LIB_0__::func_505(Local_157.f_0, -1);
							__LIB_0__::func_377(Local_157.f_0, 243);
							*iParam1++;
						}
					}
				}
				break;
			case 10:
				if (func_667(&Local_146, 0, joaat("PLAYER"), 0, 14, 0, 0, 0, 0, -1, 1))
				{
					iLocal_554[7] = 1;
					iLocal_554[8] = 1;
					if (func_750(&Local_157, 1, 0, 0, 1, -1, -1, -1))
					{
						iLocal_554[3] = 1;
						iLocal_554[2] = 1;
						if ((((func_428(&(Local_576[0 /*11*/]), 0) && func_428(&(Local_576[1 /*11*/]), 0)) && func_428(&(Local_576[2 /*11*/]), 0)) && func_428(&Local_194, 0)) && func_428(&Local_200, 0))
						{
							__LIB_0__::func_505(Local_157.f_0, -1);
							__LIB_0__::func_377(Local_157.f_0, 243);
							*iParam1++;
						}
					}
				}
				break;
			case 11:
				if (func_750(&Local_157, 1, 0, 0, 1, -1, -1, -1))
				{
					iLocal_554[3] = 1;
					iLocal_554[2] = 1;
					iLocal_554[4] = 1;
					if (func_667(&Local_146, 0, joaat("PLAYER"), 0, 14, 0, 0, 0, 0, -1, 1))
					{
						iLocal_554[7] = 1;
						iLocal_554[8] = 1;
						if (!PED::IS_PED_INJURED(Local_146.f_0))
						{
							ENTITY::SET_ENTITY_LOD_DIST(Local_146.f_0, 150);
							PED::SET_PED_LOD_MULTIPLIER(Local_146.f_0, 5f);
						}
						if ((((func_428(&(Local_576[0 /*11*/]), 0) && func_428(&(Local_576[1 /*11*/]), 0)) && func_428(&(Local_576[2 /*11*/]), 0)) && func_428(&Local_194, 1)) && func_428(&Local_200, 1))
						{
							__LIB_0__::func_505(Local_157.f_0, -1);
							__LIB_0__::func_377(Local_157.f_0, 243);
							*iParam1++;
						}
					}
				}
				break;
			case 12:
				if (func_750(&Local_157, 1, 0, 0, 1, -1, -1, -1))
				{
					iLocal_554[3] = 1;
					iLocal_554[2] = 1;
					iLocal_554[4] = 1;
					if (func_667(&Local_146, 0, joaat("PLAYER"), 0, 14, 0, 0, 0, Local_157.f_0, 0, 1))
					{
						iLocal_554[7] = 1;
						iLocal_554[8] = 1;
						if (!PED::IS_PED_INJURED(Local_146.f_0))
						{
							ENTITY::SET_ENTITY_LOD_DIST(Local_146.f_0, 150);
							PED::SET_PED_LOD_MULTIPLIER(Local_146.f_0, 5f);
						}
						if (func_667(&Local_148, 0, joaat("PLAYER"), 0, 145, 0, 0, 0, 0, -1, 1) && func_428(&Local_217, 0))
						{
							if (*uParam3 == 1 || *iParam4 == 1)
							{
								if (!PED::IS_PED_INJURED(Local_148.f_0))
								{
									PED::SET_PED_PROP_INDEX(Local_148.f_0, 0, 0, 0, false);
									PED::SET_PED_PROP_INDEX(Local_148.f_0, 1, 0, 0, false);
								}
							}
							iLocal_554[11] = 1;
							iLocal_554[10] = 1;
							iLocal_554[9] = 1;
							__LIB_0__::func_505(Local_157.f_0, -1);
							__LIB_0__::func_377(Local_157.f_0, 243);
							*iParam1++;
						}
					}
				}
				break;
			case 13:
				if (func_750(&Local_157, 1, 0, 0, 1, -1, -1, -1))
				{
					iLocal_554[3] = 1;
					iLocal_554[2] = 1;
					iLocal_554[4] = 1;
					if (func_667(&Local_146, 0, joaat("PLAYER"), 0, 14, 0, 0, 0, Local_157.f_0, 0, 1))
					{
						iLocal_554[7] = 1;
						iLocal_554[8] = 1;
						if (!PED::IS_PED_INJURED(Local_146.f_0))
						{
							ENTITY::SET_ENTITY_LOD_DIST(Local_146.f_0, 150);
							PED::SET_PED_LOD_MULTIPLIER(Local_146.f_0, 5f);
						}
						if (func_428(&Local_158, 0))
						{
							if (!PED::IS_PED_INJURED(Local_146.f_0))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_158.f_0, Local_146.f_0, PED::GET_PED_BONE_INDEX(Local_146.f_0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							__LIB_0__::func_505(Local_157.f_0, -1);
							__LIB_0__::func_377(Local_157.f_0, 243);
							*iParam1++;
						}
					}
				}
				break;
			case 16:
				if (func_750(&(Local_575[0 /*7*/]), 0, 0, 145, 1, -1, -1, -1))
				{
					*iParam1++;
				}
				break;
			default:
				*iParam1++;
				break;
		}
		if (iLocal_298 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_146.f_0, false))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 1, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 2, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 3, 6, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 4, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 5, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 6, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 7, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 9, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_146.f_0, 10, 3, 0, 0);
					iLocal_298 = 1;
				}
			}
		}
	}
	if (*iParam1 == 5)
	{
		__LIB_14__::func_804(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				if (Global_39990[86] == 1)
				{
					__LIB_17__::func_667(86, 0, 0, 1, 0);
				}
				if ((Global_39990[117] == 1 || Global_39990[118] == 1) || Global_39990[170] == 1)
				{
					__LIB_17__::func_667(117, 0, 0, 1, 0);
					__LIB_17__::func_667(118, 0, 0, 1, 0);
					__LIB_17__::func_667(120, 0, 0, 1, 0);
					__LIB_17__::func_667(170, 0, 0, 1, 0);
				}
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				if (!func_318(PLAYER::PLAYER_PED_ID(), 12, 7))
				{
					func_1(2);
				}
				if (Global_39990[86] == 1)
				{
					__LIB_17__::func_667(86, 0, 0, 1, 0);
				}
				if ((Global_39990[117] == 1 || Global_39990[118] == 1) || Global_39990[170] == 1)
				{
					__LIB_17__::func_667(117, 0, 0, 1, 0);
					__LIB_17__::func_667(118, 0, 0, 1, 0);
					__LIB_17__::func_667(120, 0, 0, 1, 0);
					__LIB_17__::func_667(170, 0, 0, 1, 0);
				}
				break;
			case 10:
			case 11:
				if (Global_39990[86] == 1)
				{
					__LIB_17__::func_667(86, 0, 0, 1, 0);
				}
				if ((Global_39990[117] == 1 || Global_39990[118] == 1) || Global_39990[170] == 1)
				{
					__LIB_17__::func_667(117, 0, 0, 1, 0);
					__LIB_17__::func_667(118, 0, 0, 1, 0);
					__LIB_17__::func_667(120, 0, 0, 1, 0);
					__LIB_17__::func_667(170, 0, 0, 1, 0);
				}
				break;
			case 12:
				if (Global_39990[86] == 0)
				{
					__LIB_17__::func_667(86, 1, 0, 1, 0);
				}
				if ((Global_39990[117] == 0 || Global_39990[118] == 0) || Global_39990[170] == 0)
				{
					__LIB_17__::func_667(117, 1, 0, 1, 0);
					__LIB_17__::func_667(118, 1, 0, 1, 0);
					__LIB_17__::func_667(120, 1, 0, 1, 0);
					__LIB_17__::func_667(170, 1, 0, 1, 0);
				}
				break;
			case 14:
			case 15:
			case 16:
				switch (iParam0)
				{
					case 15:
					case 16:
						if (!func_318(PLAYER::PLAYER_PED_ID(), 12, 52))
						{
							func_1(4);
						}
						break;
				}
				if (Global_39990[86] == 0)
				{
					__LIB_17__::func_667(86, 1, 0, 1, 0);
				}
				if ((Global_39990[117] == 0 || Global_39990[118] == 0) || Global_39990[170] == 0)
				{
					__LIB_17__::func_667(117, 1, 0, 1, 0);
					__LIB_17__::func_667(118, 1, 0, 1, 0);
					__LIB_17__::func_667(120, 1, 0, 1, 0);
					__LIB_17__::func_667(170, 1, 0, 1, 0);
				}
				break;
			case 17:
			case 18:
				if (Global_39990[86] == 0)
				{
					__LIB_17__::func_667(86, 1, 0, 1, 0);
				}
				if ((Global_39990[117] == 0 || Global_39990[118] == 0) || Global_39990[170] == 0)
				{
					__LIB_17__::func_667(117, 1, 0, 1, 0);
					__LIB_17__::func_667(118, 1, 0, 1, 0);
					__LIB_17__::func_667(120, 1, 0, 1, 0);
					__LIB_17__::func_667(170, 1, 0, 1, 0);
				}
				break;
		}
		switch (iParam0)
		{
			case 3:
			case 5:
			case 7:
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.35f);
				GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(0.65f);
				break;
			default:
				GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
				break;
		}
		switch (iParam0)
		{
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				}
				break;
			case 14:
			case 15:
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				}
				break;
			default:
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				break;
		}
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (iParam0 == 9)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_WETNESS_HEIGHT(PLAYER::PLAYER_PED_ID(), 2f);
				}
			}
			if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				*iParam1++;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 6)
	{
		__LIB_0__::func_221(&uLocal_319, 0);
		__LIB_0__::func_221(&uLocal_319, 1);
		__LIB_0__::func_221(&uLocal_319, 2);
		__LIB_0__::func_221(&uLocal_319, 3);
		__LIB_0__::func_221(&uLocal_319, 4);
		__LIB_0__::func_221(&uLocal_319, 5);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&uLocal_319, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
		switch (iParam0)
		{
			case 0:
				__LIB_0__::func_671(0);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				break;
			case 1:
			case 2:
				__LIB_0__::func_671(1);
				HUD::DISPLAY_RADAR(false);
				break;
			case 3:
			case 5:
			case 7:
				__LIB_0__::func_671(1);
				if (!PED::IS_PED_INJURED(Local_140.f_0))
				{
					__LIB_0__::func_222(&uLocal_319, 1, Local_140.f_0, "AMANDA", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_143.f_0))
				{
					__LIB_0__::func_222(&uLocal_319, 3, Local_143.f_0, "FABIAN", 0, 1);
				}
				HUD::DISPLAY_RADAR(false);
				AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", true);
				break;
			case 4:
			case 6:
			case 8:
				__LIB_0__::func_671(1);
				HUD::DISPLAY_RADAR(false);
				break;
			case 9:
				__LIB_0__::func_671(0);
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					__LIB_0__::func_222(&uLocal_319, 2, Local_146.f_0, "JIMMY", 0, 0);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				break;
			case 10:
				__LIB_0__::func_671(1);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				break;
			case 11:
				__LIB_0__::func_671(0);
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					__LIB_0__::func_222(&uLocal_319, 2, Local_146.f_0, "JIMMY", 0, 1);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				break;
			case 12:
				__LIB_0__::func_671(1);
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					__LIB_0__::func_222(&uLocal_319, 2, Local_146.f_0, "JIMMY", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_148.f_0))
				{
					__LIB_0__::func_222(&uLocal_319, 5, Local_148.f_0, "FAM5DEALER", 0, 1);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				break;
			case 13:
				__LIB_0__::func_671(0);
				if (!PED::IS_PED_INJURED(Local_146.f_0))
				{
					__LIB_0__::func_222(&uLocal_319, 2, Local_146.f_0, "JIMMY", 0, 1);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				break;
			case 14:
			case 15:
				__LIB_0__::func_671(1);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				break;
			case 16:
				__LIB_0__::func_671(1);
				HUD::DISPLAY_RADAR(false);
				HUD::DISPLAY_HUD(false);
				break;
			case 17:
			case 18:
				__LIB_0__::func_671(1);
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		__LIB_15__::func_931();
		__LIB_0__::func_681(65, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(true);
		__LIB_15__::func_931();
		__LIB_17__::func_210(5, 0);
		GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				*iParam1++;
				break;
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				__LIB_16__::func_1();
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_TRANQUIL"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_TRANQUIL");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_MG"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_MG");
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, -1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 1, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 1, false, true);
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
				*iParam1++;
				break;
			case 9:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				__LIB_16__::func_1();
				__LIB_17__::func_210(5, 1);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(false);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, false, false, false);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, false, true);
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
				*iParam1++;
				break;
			case 10:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, false, false, false);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, false, true);
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
				*iParam1++;
				break;
			case 11:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_GO_TO_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_GO_TO_JIMMY");
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), true);
				VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(-1174.32f, -887.45f, 14.41f, 25f);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, false, true);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, false, false, false);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, false, true);
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
				*iParam1++;
				break;
			case 12:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(true);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
				}
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(false);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), true);
				VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(-1174.32f, -887.45f, 14.41f, 25f);
				*iParam1++;
				break;
			case 13:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_TAKE_JIMMY"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_TAKE_JIMMY");
				}
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				__LIB_0__::func_681(65, 1);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
				}
				__LIB_16__::func_1();
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(false);
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), true);
				VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(-1174.32f, -887.45f, 14.41f, 25f);
				*iParam1++;
				break;
			case 14:
			case 15:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_ON_DRUGS"))
				{
					AUDIO::START_AUDIO_SCENE("FAMILY_5_YOGA_ON_DRUGS");
				}
				__LIB_0__::func_424(1);
				*iParam1++;
				break;
			case 16:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				CLOCK::ADVANCE_CLOCK_TIME_TO(6, 0, 0);
				__LIB_0__::func_424(0);
				VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(-941.51f, 308.92f, 70.21f, 10f);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, false, true);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, false, false, false);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, false, true);
				}
				*iParam1++;
				break;
			case 17:
			case 18:
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
				STREAMING::SET_PED_POPULATION_BUDGET(3);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(535076355, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, false, true);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(474675599, 0f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, false, true);
				}
				if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::ADD_DOOR_TO_SYSTEM(1850241841, joaat("v_ilev_mm_doorson"), -806.7716f, 174.0236f, 76.8903f, false, false, false);
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1850241841, -1f, false, false);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1850241841, 1, false, true);
				}
				*iParam1++;
				break;
			}
	}
	if (*iParam1 == 8)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				__LIB_0__::func_433(0, -1, 0);
			}
			else
			{
				STREAMING::LOAD_SCENE(Local_578.f_1);
				SYSTEM::WAIT(1000);
			}
			switch (iParam0)
			{
				case 12:
				case 13:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_157.f_0, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_157.f_0, 5f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_157.f_0, true, true, false);
						}
					}
					break;
			}
			switch (iParam0)
			{
				case 3:
				case 5:
				case 7:
					if (iLocal_494 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_RESTART"))
						{
							iLocal_494 = 1;
						}
					}
					if (AUDIO::PREPARE_MUSIC_EVENT("FAM5_YOGA_MOVE_START"))
					{
					}
					break;
				case 4:
				case 6:
				case 8:
					if (iLocal_494 == 0)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_RESTART"))
						{
							iLocal_494 = 1;
						}
					}
					break;
				default:
					if (iLocal_494 == 1)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS"))
						{
							iLocal_494 = 0;
						}
					}
					break;
			}
			switch (iParam0)
			{
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
				case 9:
				case 10:
				case 11:
				case 12:
				case 14:
				case 15:
				case 16:
				case 17:
				case 18:
					break;
				default:
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 3:
				case 5:
				case 7:
					switch (iParam0)
					{
						case 3:
							sVar0 = "start_pose";
							sVar1 = "f_yogapose_a";
							sVar2 = "i_yogapose_a";
							Var3 = { Local_100 };
							Var4 = { Local_101 };
							Var5 = { Local_94 };
							Var6 = { Local_95 };
							break;
						case 5:
							sVar0 = "start_pose";
							sVar1 = "f_yogapose_b";
							sVar2 = "i_yogapose_b";
							Var3 = { Local_102 };
							Var4 = { Local_103 };
							Var5 = { Local_96 };
							Var6 = { Local_97 };
							break;
						case 7:
							sVar0 = "start_pose";
							sVar1 = "f_yogapose_c";
							sVar2 = "i_yogapose_c";
							Var3 = { Local_104 };
							Var4 = { Local_105 };
							Var5 = { Local_98 };
							Var6 = { Local_99 };
							break;
					}
					if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(Local_140.f_0)) && ENTITY::DOES_ENTITY_EXIST(Local_143.f_0))
					{
						if (((((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_140.f_0, false)) && !ENTITY::IS_ENTITY_DEAD(Local_143.f_0, false)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID())) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_140.f_0)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_143.f_0))
						{
							if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", sVar0, 3) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_140.f_0, "missfam5_yoga", sVar1, 3)) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_143.f_0, "missfam5_yoga", sVar2, 3)) && CAM::DOES_CAM_EXIST(iLocal_495)) && CAM::IS_CAM_RENDERING(iLocal_495))
							{
								if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
								{
									STREAMING::NEW_LOAD_SCENE_START(-782.81f, 187.44f, 73.33f, -0.98f, -0.17f, -0.06f, 20f, 0);
									iLocal_537 = MISC::GET_GAME_TIMER();
								}
								if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_16__::func_302(10000, iLocal_537))
								{
									STREAMING::NEW_LOAD_SCENE_STOP();
									*iParam1++;
								}
							}
							else
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("missfam5_yoga"))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", sVar0, 3))
									{
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfam5_yoga", sVar0, 1000f, -8f, -1, 1, 0f, false, true, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
									}
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_140.f_0, "missfam5_yoga", sVar1, 3))
									{
										TASK::TASK_PLAY_ANIM_ADVANCED(Local_140.f_0, "missfam5_yoga", sVar1, Var3, Var4, 1000f, -8f, -1, 267273, 0f, 2, 1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_140.f_0, false, false);
									}
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_143.f_0, "missfam5_yoga", sVar2, 3))
									{
										TASK::TASK_PLAY_ANIM_ADVANCED(Local_143.f_0, "missfam5_yoga", sVar2, Var5, Var6, 1000f, -8f, -1, 267273, 0f, 2, 1);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_143.f_0, false, false);
									}
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("missfam5_yoga");
								}
								if (!CAM::DOES_CAM_EXIST(iLocal_495))
								{
									iLocal_495 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
									CAM::SET_CAM_PARAMS(iLocal_495, -782.80237f, 187.4389f, 73.326614f, -3.540541f, 0f, 99.79994f, 39.3555f, 0, 1, 1, 2);
									CAM::SHAKE_CAM(iLocal_495, "HAND_SHAKE", 0.125f);
									CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
									CAM::SET_CAM_FAR_CLIP(iLocal_495, 500f);
									HUD::DISPLAY_RADAR(false);
									HUD::DISPLAY_HUD(false);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								}
							}
						}
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
		switch (iParam0)
		{
			case 3:
				iLocal_531 = CLOCK::GET_CLOCK_HOURS();
				iLocal_532 = CLOCK::GET_CLOCK_MINUTES();
				iLocal_533 = CLOCK::GET_CLOCK_SECONDS();
				__LIB_41__::func_41(0, "YOGA - WARRIOR", 0, 0, 0, 1);
				break;
			case 5:
				iLocal_531 = CLOCK::GET_CLOCK_HOURS();
				iLocal_532 = CLOCK::GET_CLOCK_MINUTES();
				iLocal_533 = CLOCK::GET_CLOCK_SECONDS();
				__LIB_41__::func_41(1, "YOGA - TRIANGLE", 0, 0, 0, 1);
				break;
			case 7:
				iLocal_531 = CLOCK::GET_CLOCK_HOURS();
				iLocal_532 = CLOCK::GET_CLOCK_MINUTES();
				iLocal_533 = CLOCK::GET_CLOCK_SECONDS();
				__LIB_41__::func_41(2, "YOGA - SUNSALUTATION", 0, 0, 0, 1);
				break;
			case 9:
				__LIB_41__::func_41(3, "GO TO JIMMY'S ROOM", 0, 0, 0, 1);
				break;
			case 11:
				__LIB_41__::func_41(4, "GO TO BURGER SHOT", 0, 0, 0, 1);
				break;
			case 13:
				__LIB_41__::func_41(5, "DRIVE HOME", 0, 0, 0, 1);
				break;
			case 16:
				__LIB_41__::func_41(6, "GO HOME WASTED", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		switch (iParam0)
		{
			case 3:
			case 5:
			case 7:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				break;
			default:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		return 1;
	}
	return 0;
}

int func_750(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)//Position - 0x86C76
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
					*iParam0 = __LIB_16__::func_0(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true, false);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_795(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
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
			if (__LIB_17__::func_809(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
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

int func_795(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x8BC64
{
	struct<98> Var0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_43(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		__LIB_14__::func_75(iParam1, &Var0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0.f_0)
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
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_5, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_7, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar2 = 0;
				while (iVar2 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar2 + 1, !Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_11[iVar2]);
					iVar2++;
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, false))
					{
						if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, true);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, true);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_27));
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_84, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_85, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_93, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_94, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, BitTest(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(uParam0, &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_96);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_3618[0 /*197*/][iVar1 /*98*/]);
				}
				__LIB_17__::func_153(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var0.f_0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0.f_0, Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				__LIB_17__::func_178(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					__LIB_17__::func_153(*uParam0);
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

void func_800(int iParam0)//Position - 0x8C9EF
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_554 - 1))
	{
		iLocal_554[iVar0] = iParam0;
		iVar0++;
	}
}

void func_803(int iParam0)//Position - 0x8CAA3
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_140.f_0))
			{
				__LIB_17__::func_174(Local_140.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_143.f_0))
			{
				__LIB_17__::func_174(Local_143.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[0 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[1 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[2 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			__LIB_17__::func_231("missfam5_yoga", &uLocal_566, 8, &uLocal_296);
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_140.f_0))
			{
				__LIB_17__::func_174(Local_140.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_143.f_0))
			{
				__LIB_17__::func_174(Local_143.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[0 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[1 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[2 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			__LIB_17__::func_231("missfam5_wet_walk", &uLocal_566, 8, &uLocal_296);
			break;
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
			{
				__LIB_17__::func_174(Local_146.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[0 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[1 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[2 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				__LIB_17__::func_174(Local_157.f_6, &uLocal_555, 10, &uLocal_295);
			}
			__LIB_17__::func_231("missfam5_wet_walk", &uLocal_566, 8, &uLocal_296);
			break;
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
			{
				__LIB_17__::func_174(Local_146.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[0 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[1 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[2 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				__LIB_17__::func_174(Local_157.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				__LIB_17__::func_174(Local_157.f_6, &uLocal_555, 10, &uLocal_295);
			}
			break;
		case 11:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
			{
				__LIB_17__::func_174(Local_146.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[0 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[0 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[1 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[1 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_576[2 /*11*/]))
			{
				__LIB_17__::func_174(Local_576[2 /*11*/].f_1, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				__LIB_17__::func_174(Local_157.f_6, &uLocal_555, 10, &uLocal_295);
			}
			break;
		case 12:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
			{
				__LIB_17__::func_174(Local_146.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
			{
				__LIB_17__::func_174(Local_148.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				__LIB_17__::func_174(Local_157.f_6, &uLocal_555, 10, &uLocal_295);
			}
			break;
		case 13:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
			{
				__LIB_17__::func_174(Local_146.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				__LIB_17__::func_174(Local_157.f_6, &uLocal_555, 10, &uLocal_295);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_158.f_0))
			{
				__LIB_17__::func_174(Local_158.f_1, &uLocal_555, 10, &uLocal_295);
			}
			__LIB_17__::func_231("missfam5_drink", &uLocal_566, 8, &uLocal_296);
			break;
		case 16:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_575[0 /*7*/]))
			{
				__LIB_17__::func_174(Local_575[0 /*7*/].f_6, &uLocal_555, 10, &uLocal_295);
			}
			__LIB_17__::func_231("missfam5_blackout", &uLocal_566, 8, &uLocal_296);
			break;
	}
}

void func_808()//Position - 0x8D103
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_552;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_552[iVar1] = 0;
		iVar1++;
	}
	iLocal_553 = 0;
}

void func_811(int iParam0)//Position - 0x8D1BA
{
	func_812(iParam0);
	Local_223.f_2 = { -816.716f, 179.098f, 72.8274f };
	Local_223.f_1 = joaat("v_ilev_mm_doorm_l");
	Local_232.f_2 = { -816.1068f, 177.5108f, 72.8274f };
	Local_232.f_1 = joaat("v_ilev_mm_doorm_r");
	Local_176.f_2 = { -1179.2917f, -891.4589f, 13.8687f };
	Local_176.f_1 = joaat("prop_bs_map_door_01");
	Local_217.f_2 = { -1179.29f, -891.459f, 13.8687f };
	Local_217.f_5 = { 0f, 0f, 124.1f };
	Local_217.f_1 = joaat("p_bs_map_door_01_s");
	switch (iParam0)
	{
		case 0:
			Local_578.f_1 = { -823.9692f, 179.8976f, 70.5228f };
			Local_578.f_4 = 260.0065f;
			break;
		case 1:
		case 2:
			Local_578.f_1 = { -805.9919f, 170.962f, 71.8447f };
			Local_578.f_4 = 293.2728f;
			Local_140.f_2 = { -789.032f, 185.876f, 71.8353f };
			Local_140.f_5 = 26.707853f;
			Local_140.f_6 = __LIB_2__::func_910(17);
			Local_143.f_2 = { -789.419f, 187.649f, 71.8353f };
			Local_143.f_5 = 141.3057f;
			Local_143.f_6 = joaat("IG_Fabien");
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			Local_578.f_1 = { -790.906f, 186.293f, 71.8351f };
			Local_578.f_4 = 275.07422f;
			Local_140.f_2 = { -789.032f, 185.876f, 71.8353f };
			Local_140.f_5 = 26.707853f;
			Local_140.f_6 = __LIB_2__::func_910(17);
			Local_143.f_2 = { -789.419f, 187.649f, 71.8353f };
			Local_143.f_5 = 141.3057f;
			Local_143.f_6 = joaat("IG_Fabien");
			break;
		case 9:
			Local_578.f_1 = { -789.995f, 181.611f, 71.835f };
			Local_578.f_4 = 92.551315f;
			Local_146.f_2 = { -805.7374f, 168.7947f, 75.7409f };
			Local_146.f_5 = 132f;
			Local_146.f_6 = __LIB_2__::func_910(14);
			Local_157.f_2 = { -824.3593f, 179.5045f, 70.4652f };
			Local_157.f_5 = 137.1847f;
			Local_157.f_6 = __LIB_0__::func_721(0, 0);
			Local_194.f_2 = { -808.22f, 168.81f, 75.75f };
			Local_194.f_1 = joaat("prop_controller_01");
			Local_200.f_2 = { -808.35f, 169.36f, 75.75f };
			Local_200.f_1 = joaat("prop_headset_01");
			break;
		case 10:
			Local_578.f_1 = { -804.9048f, 179.4079f, 75.7408f };
			Local_578.f_4 = 185.1595f;
			Local_146.f_2 = { -808.5767f, 169.9767f, 75.7406f };
			Local_146.f_5 = 89.3525f;
			Local_146.f_6 = __LIB_2__::func_910(14);
			Local_157.f_2 = { -824.3593f, 179.5045f, 70.4652f };
			Local_157.f_5 = 137.1847f;
			Local_157.f_6 = __LIB_0__::func_721(0, 0);
			Local_194.f_2 = { -806.184f, 170.435f, 76.47f };
			Local_194.f_5 = { -64f, 50f, -92f };
			Local_194.f_1 = joaat("prop_controller_01");
			Local_200.f_2 = { -806.598f, 170.28f, 76.475f };
			Local_200.f_5 = { -94f, 0f, 0f };
			Local_200.f_1 = joaat("prop_headset_01");
			break;
		case 11:
			Local_578.f_1 = { -807.127f, 172.5753f, 75.7407f };
			Local_578.f_4 = 324.5707f;
			Local_157.f_2 = { -824.3593f, 179.5045f, 70.4652f };
			Local_157.f_5 = 137.1847f;
			Local_157.f_6 = __LIB_0__::func_721(0, 0);
			Local_146.f_2 = { -804.8173f, 176.2879f, 75.7408f };
			Local_146.f_5 = 335.1849f;
			Local_146.f_6 = __LIB_2__::func_910(14);
			Local_148.f_2 = { -1177.89f, -892.36f, 12.76f };
			Local_148.f_5 = 315.7144f;
			Local_148.f_6 = joaat("U_M_Y_BurgerDrug_01");
			Local_194.f_2 = { -806.184f, 170.435f, 76.47f };
			Local_194.f_5 = { -64f, 50f, -92f };
			Local_194.f_1 = joaat("prop_controller_01");
			Local_200.f_2 = { -806.598f, 170.28f, 76.475f };
			Local_200.f_5 = { -94f, 0f, 0f };
			Local_200.f_1 = joaat("prop_headset_01");
			Local_167.f_2 = { -1176.78f, -892.36f, 12.93f };
			Local_167.f_1 = joaat("prop_cs_ciggy_01");
			Local_185.f_2 = { -1176.78f, -892.36f, 12.93f };
			Local_185.f_1 = joaat("p_meth_bag_01_s");
			break;
		case 12:
			Local_578.f_1 = { -1175.5334f, -886.3669f, 12.9041f };
			Local_578.f_4 = 211.4735f;
			Local_157.f_2 = { -1176.4f, -887.6f, 12.864f };
			Local_157.f_5 = 212.06f;
			Local_157.f_6 = __LIB_0__::func_721(0, 0);
			Local_146.f_2 = { -1176.74f, -887.948f, 12.5514f };
			Local_146.f_5 = 199.77492f;
			Local_146.f_6 = __LIB_2__::func_910(14);
			Local_148.f_2 = { -1177.89f, -892.36f, 12.76f };
			Local_148.f_5 = 315.7144f;
			Local_148.f_6 = joaat("U_M_Y_BurgerDrug_01");
			Local_158.f_2 = { -1180.36f, -892.87f, 12.8f };
			Local_158.f_5 = { 0f, 0f, 0f };
			Local_158.f_8 = { 0f, 0f, 0f };
			Local_158.f_1 = joaat("prop_cs_bs_cup");
			break;
		case 13:
			Local_578.f_1 = { -1175.5334f, -886.3669f, 12.9041f };
			Local_578.f_4 = 211.4735f;
			Local_157.f_2 = { -1176.4f, -887.6f, 12.864f };
			Local_157.f_5 = 212.06f;
			Local_157.f_6 = __LIB_0__::func_721(0, 0);
			Local_146.f_2 = { -1176.74f, -887.948f, 12.5514f };
			Local_146.f_5 = 199.77492f;
			Local_146.f_6 = __LIB_2__::func_910(14);
			Local_158.f_2 = { -1176.571f, -888.149f, 13.6039f };
			Local_158.f_5 = { 0f, 0f, 0f };
			Local_158.f_8 = { 0f, -0.06f, 0.03f };
			Local_158.f_1 = joaat("prop_cs_bs_cup");
			break;
		case 14:
			Local_578.f_1 = { -20.2621f, -219.8899f, 45.1815f };
			Local_578.f_4 = 352.7035f;
			break;
		case 15:
			Local_578.f_1 = { -20.2621f, -219.8899f, 45.1815f };
			Local_578.f_4 = 352.7035f;
			break;
		case 16:
			Local_578.f_1 = { -966.9352f, 309.2517f, 69.2397f };
			Local_578.f_4 = 252.8672f;
			Local_575[0 /*7*/].f_2 = { -946.8423f, 313f, 70.34f };
			Local_575[0 /*7*/].f_5 = 269.0366f;
			Local_575[0 /*7*/].f_6 = joaat("scorcher");
			Local_161.f_2 = { -800.663f, 184.017f, 72.525f };
			Local_161.f_5 = { 0f, 0f, 20f };
			Local_161.f_1 = joaat("prop_amanda_note_01");
			break;
		case 17:
			Local_578.f_1 = { -802.3392f, 182.5324f, 71.6055f };
			Local_578.f_4 = 293.7678f;
			Local_161.f_2 = { -800.663f, 184.017f, 72.525f };
			Local_161.f_5 = { 0f, 0f, 20f };
			Local_161.f_1 = joaat("prop_amanda_note_01");
			break;
		case 18:
			Local_578.f_1 = { -820.5433f, 176.9832f, 70.6124f };
			Local_578.f_4 = 44.9042f;
			break;
	}
}

void func_812(int iParam0)//Position - 0x8D989
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			Local_576[0 /*11*/].f_2 = { -791.1636f, 186.4052f, 71.8295f };
			Local_576[0 /*11*/].f_5 = { 0f, 0f, -85.0403f };
			Local_576[0 /*11*/].f_1 = joaat("prop_yoga_mat_01");
			Local_576[1 /*11*/].f_2 = { -789.3542f, 187.8925f, 71.8295f };
			Local_576[1 /*11*/].f_5 = { 0f, 0f, -18.5437f };
			Local_576[1 /*11*/].f_1 = joaat("prop_yoga_mat_02");
			Local_576[2 /*11*/].f_2 = { -789.007f, 185.9859f, 71.8295f };
			Local_576[2 /*11*/].f_5 = { 0f, 0f, 31.6581f };
			Local_576[2 /*11*/].f_1 = joaat("prop_yoga_mat_03");
			break;
		case 4:
		case 5:
			Local_576[0 /*11*/].f_2 = { -791.152f, 186.2719f, 71.8295f };
			Local_576[0 /*11*/].f_5 = { 0f, 0f, -85.0403f };
			Local_576[0 /*11*/].f_1 = joaat("prop_yoga_mat_01");
			Local_576[1 /*11*/].f_2 = { -789.3542f, 187.8925f, 71.8295f };
			Local_576[1 /*11*/].f_5 = { 0f, 0f, -18.5437f };
			Local_576[1 /*11*/].f_1 = joaat("prop_yoga_mat_02");
			Local_576[2 /*11*/].f_2 = { -789.007f, 185.9859f, 71.8295f };
			Local_576[2 /*11*/].f_5 = { 0f, 0f, 31.6581f };
			Local_576[2 /*11*/].f_1 = joaat("prop_yoga_mat_03");
			break;
		default:
			Local_576[0 /*11*/].f_2 = { -791.53f, 186.375f, 71.835f };
			Local_576[0 /*11*/].f_5 = { 0f, 0f, 0f };
			Local_576[0 /*11*/].f_1 = joaat("prop_yoga_mat_01");
			Local_576[1 /*11*/].f_2 = { -789.164f, 188.236f, 71.835f };
			Local_576[1 /*11*/].f_5 = { 0f, 0f, -108f };
			Local_576[1 /*11*/].f_1 = joaat("prop_yoga_mat_02");
			Local_576[2 /*11*/].f_2 = { -788.613f, 185.352f, 71.835f };
			Local_576[2 /*11*/].f_5 = { 0f, 0f, -238.91f };
			Local_576[2 /*11*/].f_1 = joaat("prop_yoga_mat_03");
			break;
	}
}

void func_817()//Position - 0x8DC77
{
	int iVar0;
	Local_577[0 /*3*/] = "DRUGS_ALIENS";
	Local_577[1 /*3*/] = "DRUGS_CHIMPS";
	Local_577[2 /*3*/] = "DRUGS_HEARTBEAT";
	Local_577[3 /*3*/] = "DRUGS_TAKE";
	Local_577[4 /*3*/] = "DRUGS_VOMIT";
	Local_577[5 /*3*/] = "TAP_LOOP";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_577.f_0 - 1))
	{
		Local_577[iVar0 /*3*/].f_1 = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
}

void func_818()//Position - 0x8DCE7
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAMILY_5_YOGA_ON_DRUGS"))
	{
		AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(2);
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_5_YOGA_ON_DRUGS", "DrugsEffect", ((SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f)) * 0.5f) + 0.5f));
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAMILY_5_YOGA_ON_DRUGS", "DrugsEffectSpeech", (((0.5f * SYSTEM::SIN((((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f) * 45f) % 360f))) * 0.5f) + 0.5f));
	}
}

void func_819(var uParam0)//Position - 0x8DD76
{
	switch (*uParam0)
	{
		case 2:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_CHIMPS", false, -1))
			{
				*uParam0 = 0;
			}
			break;
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_ALIENS", false, -1))
			{
				*uParam0 = 0;
			}
			break;
		case 3:
		case 4:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_YOGA_DRUGS_01", false, -1))
			{
				*uParam0 = 0;
			}
			break;
		case 5:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TAXI_VOMIT", false, -1))
			{
				*uParam0 = 0;
			}
			break;
		case 6:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FAM5_WASH_FACE", false, -1))
			{
				*uParam0 = 0;
			}
			break;
	}
}

void func_821(int iParam0, var uParam1)//Position - 0x8DE5E
{
	if (*iParam0 != 19 && *iParam0 != 20)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if ((*iParam0 == 3 || *iParam0 == 5) || *iParam0 == 7)
			{
				if (iLocal_554[1] == 1)
				{
					if (Local_241.f_14 >= 3)
					{
						*uParam1 = 1;
						*iParam0 = 20;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_140.f_0))
			{
				if (iLocal_554[5] == 1)
				{
					if (PED::IS_PED_INJURED(Local_140.f_0))
					{
						*uParam1 = 5;
						*iParam0 = 20;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_143.f_0))
			{
				if (iLocal_554[6] == 1)
				{
					if (PED::IS_PED_INJURED(Local_143.f_0))
					{
						*uParam1 = 6;
						*iParam0 = 20;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_146.f_0))
			{
				if (iLocal_554[7] == 1)
				{
					if (PED::IS_PED_INJURED(Local_146.f_0))
					{
						*uParam1 = 7;
						*iParam0 = 20;
					}
				}
				if (iLocal_554[8] == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_242.f_1[0]) || HUD::DOES_BLIP_EXIST(Local_146.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_146.f_0))
						{
							if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_146.f_0) > 100f || iLocal_300 == 1)
							{
								*uParam1 = 8;
								*iParam0 = 20;
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
			{
				if (iLocal_554[2] == 1)
				{
					if (__LIB_15__::func_929(&Local_157))
					{
						*uParam1 = 2;
						*iParam0 = 20;
					}
				}
				if (iLocal_554[3] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, true) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_157.f_0, PLAYER::PLAYER_PED_ID(), true) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_157.f_0, joaat("WEAPON_MOLOTOV"), 0)))
					{
						*uParam1 = 3;
						*iParam0 = 20;
					}
				}
				if (iLocal_554[4] == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_242.f_0) || HUD::DOES_BLIP_EXIST(Local_157.f_1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_157.f_0, 1) > 100f)
							{
								*uParam1 = 4;
								*iParam0 = 20;
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_148.f_0))
			{
				if (iLocal_554[11] == 1)
				{
					if (PED::IS_PED_INJURED(Local_148.f_0))
					{
						*uParam1 = 11;
						*iParam0 = 20;
					}
				}
				if (iLocal_554[10] == 1)
				{
					if (!PED::IS_PED_INJURED(Local_148.f_0))
					{
						if (((((((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_148.f_0, PLAYER::PLAYER_PED_ID(), true) || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_148.f_0, Local_157.f_0, true))) || func_823(PLAYER::PLAYER_PED_ID(), 1, Local_148.f_0, 1, 2.5f)) || __LIB_17__::func_215(PLAYER::PLAYER_PED_ID(), Local_148.f_0, 3f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_148.f_0, PLAYER::PLAYER_PED_ID())) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 51)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 134)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 22)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 88)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 126)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 125)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 60)) || PED::HAS_PED_RECEIVED_EVENT(Local_148.f_0, 61)) || (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1163.59f, -901.6f, 1.64f, -1184.38f, -870.28f, 20.92f, 32f, false, true, 0))) || PED::IS_PED_FLEEING(Local_148.f_0))
						{
							AUDIO::PLAY_PAIN(Local_148.f_0, 5, 0, 0);
							if (!PED::IS_PED_FLEEING(Local_148.f_0))
							{
								__LIB_17__::func_207(Local_148.f_0, PLAYER::PLAYER_PED_ID(), 300f, -1);
							}
							*uParam1 = 10;
							*iParam0 = 20;
						}
					}
				}
			}
		}
	}
}

int func_823(int iParam0, bool bParam1, int iParam2, int iParam3, float fParam4)//Position - 0x8E26A
{
	struct<3> Var0;
	var uVar1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2, false))
			{
				if (iParam3 == 1)
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true) };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar1, false, false))
					{
						Var0.f_2 = uVar1;
					}
					if (__LIB_28__::func_233(iParam0, bParam1, Var0, fParam4))
					{
						return 1;
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam2, iParam0, false))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam2, 0, 2))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam2);
						WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iParam2);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_877(int iParam0)//Position - 0x94573
{
	var uVar0;
	var uVar1;
	switch (iParam0)
	{
		case 3:
		case 5:
		case 7:
			return 8;
			break;
		case 17:
			return 17;
			break;
	}
	uVar0 = iParam0 + 1;
	uVar1 = uVar0;
	return uVar1;
}

void func_878(var uParam0, int iParam1)//Position - 0x945B6
{
	int iVar0;
	int iVar1;
	if (iParam1 == 0)
	{
		*uParam0 = 3;
		__LIB_13__::func_812(21, &iVar0, &iVar1);
		if (!__LIB_13__::func_692(iVar1, iVar0))
		{
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
		}
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 5;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 7;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 9;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 11;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 13;
	}
	else if (iParam1 == 6)
	{
		*uParam0 = 16;
	}
	bLocal_292 = true;
}

void func_889()//Position - 0x98BD7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_157.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_157.f_0, false))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_157.f_0, true, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_157.f_0, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_157.f_0, false))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_157.f_0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_157.f_0, true))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_157);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_157);
		}
	}
	func_891(&Local_140, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_891(&Local_143, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_891(&Local_146, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_891(&Local_148, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_575[0 /*7*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_575[0 /*7*/], false))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_575[0 /*7*/]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_575[0 /*7*/], true))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_575[0 /*7*/]));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_217.f_0))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_176.f_2, 1f, Local_176.f_1, !CAM::IS_SCREEN_FADED_OUT());
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_223.f_0))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_223.f_2, 1f, Local_223.f_1, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_232.f_0))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_232.f_2, 1f, Local_232.f_1, false);
	}
	__LIB_17__::func_228(&iLocal_206, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_194, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_200, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_158, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_161, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_167, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_185, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_176, 0);
	__LIB_17__::func_228(&Local_217, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_223, CAM::IS_SCREEN_FADED_OUT());
	__LIB_17__::func_228(&Local_232, CAM::IS_SCREEN_FADED_OUT());
	func_583(&Local_576, CAM::IS_SCREEN_FADED_OUT());
	STREAMING::REMOVE_ANIM_DICT("missfam5_yoga");
	STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6");
	STREAMING::REMOVE_ANIM_DICT("missfam5_drink");
	STREAMING::REMOVE_ANIM_DICT("missfam5_flying");
	STREAMING::REMOVE_ANIM_DICT("missfam5mcs_6drag");
	STREAMING::REMOVE_ANIM_DICT("missfam5_wet_walk");
	STREAMING::REMOVE_ANIM_DICT("missfam5_blackout");
	STREAMING::REMOVE_ANIM_DICT("missfam2mcs_intp1");
	STREAMING::REMOVE_ANIM_DICT("missfam5mcs_4leadin");
	STREAMING::REMOVE_ANIM_DICT("missfam5leadinoutmcs_5");
	__LIB_0__::func_74();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::SET_CREATE_RANDOM_COPS(true);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("U_M_Y_BurgerDrug_01"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(__LIB_0__::func_721(0, 0), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("police"), false);
	VEHICLE::REMOVE_VEHICLE_ASSET(__LIB_0__::func_721(0, 0));
	__LIB_0__::func_671(0);
	__LIB_15__::func_931();
	__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
	HUD::DISPLAY_RADAR(true);
	__LIB_12__::func_915(1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::STOP_CUTSCENE_CAM_SHAKING(1);
	if (CAM::DOES_CAM_EXIST(iLocal_495))
	{
		CAM::SET_CAM_ACTIVE(iLocal_495, false);
		CAM::DESTROY_CAM(iLocal_495, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_496))
	{
		CAM::SET_CAM_ACTIVE(iLocal_496, false);
		CAM::DESTROY_CAM(iLocal_496, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_497))
	{
		CAM::SET_CAM_ACTIVE(iLocal_497, false);
		CAM::DESTROY_CAM(iLocal_497, false);
	}
	CAM::DESTROY_ALL_CAMS(false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::STOP_STREAM();
	func_892(6);
	func_892(5);
	func_892(4);
	func_892(2);
	func_892(1);
	func_892(3);
	func_890();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_DRUG_FLIGHT_END");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("FAM5_MICHAEL_LONG_SCREAM");
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_MICHAELS_HOUSE_RADIO", true);
	MISC::SET_TIME_SCALE(1f);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	GRAPHICS::ANIMPOSTFX_STOP("DMT_flight");
	GRAPHICS::ANIMPOSTFX_STOP("DrugsDrivingIn");
	GRAPHICS::ANIMPOSTFX_STOP("DrugsDrivingOut");
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	if (iLocal_494 == 1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FAM5_YOGA_MUSIC_ENDS");
		iLocal_494 = 0;
	}
	AUDIO::CANCEL_MUSIC_EVENT("FAM5_YOGA_MOVE_START");
	__LIB_9__::func_766(PLAYER::PLAYER_PED_ID());
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_FORCE_FOOTSTEP_UPDATE(PLAYER::PLAYER_PED_ID(), false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(535076355))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(535076355, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(474675599))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(474675599, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1850241841))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1850241841, 0);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 0, false, true);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, false, false);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 0, false, true);
	}
	__LIB_16__::func_18(0);
	__LIB_17__::func_210(5, 0);
	__LIB_0__::func_424(0);
	__LIB_14__::func_804(0);
	__LIB_0__::func_681(65, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_517);
	GRAPHICS::SET_TV_VOLUME(0f);
	AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", false);
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("mansion_1");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("family5b");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("family5c");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("family5d");
	TASK::ASSISTED_MOVEMENT_REMOVE_ROUTE("f5_jimmy1");
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_318))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_318, false);
	}
	__LIB_0__::func_54(1, 1);
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	STREAMING::REMOVE_IPL("SpaceInterior");
	STATS::STAT_ENABLE_STATS_TRACKING();
	AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", false);
}

void func_890()//Position - 0x990E6
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_577.f_0 - 1))
	{
		if (Local_577[iVar0 /*3*/].f_1 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(Local_577[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
}

void func_891(int* iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x99121
{
	if (bParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					if (ENTITY::IS_ENTITY_DEAD(*iParam0, false))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, false);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					if (PED::IS_PED_GROUP_MEMBER(*iParam0, __LIB_0__::func_495()))
					{
						PED::REMOVE_PED_FROM_GROUP(*iParam0);
					}
					PED::SET_PED_KEEP_TASK(*iParam0, bParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
		}
	}
	else if (bParam1 == 1)
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
		iParam0->f_9 = 0;
		iParam0->f_7 = 0;
		iParam0->f_14 = 0;
		iParam0->f_15 = 0;
	}
}

void func_892(int iParam0)//Position - 0x9923A
{
	switch (iParam0)
	{
		case 2:
			if (Local_577[1 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_577[1 /*3*/].f_1);
			}
			break;
		case 1:
			if (Local_577[0 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_577[0 /*3*/].f_1);
			}
			break;
		case 3:
			if (Local_577[2 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_577[2 /*3*/].f_1);
			}
			break;
		case 5:
			if (Local_577[4 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_577[4 /*3*/].f_1);
			}
			break;
		case 6:
			if (Local_577[5 /*3*/].f_2 == 1)
			{
				AUDIO::STOP_SOUND(Local_577[5 /*3*/].f_1);
			}
			break;
	}
}

void func_893()//Position - 0x992EE
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
				if (!func_327(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_14__::func_534();
		}
	}
}

