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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	struct<447> Local_47 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 } ;
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
	var uLocal_59 = 8;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 4;
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
	var uLocal_78 = 4;
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
	var uLocal_93 = 4;
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
	var uLocal_108 = 4;
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
	var uLocal_138 = 4;
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
	var uLocal_153 = 4;
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
	var uLocal_168 = 4;
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
	bool bLocal_187 = 0;
	bool bLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = -1;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 1000;
	var uLocal_200 = 1000;
	var uLocal_201 = 0;
	char* sLocal_202 = NULL;
	int* iLocal_203 = NULL;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	int* iLocal_206 = NULL;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	int* iLocal_209 = NULL;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	int* iLocal_212 = NULL;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	bool bLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	struct<6> Local_219 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	struct<3> Local_222 = { 0, 0, 0 } ;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	int iLocal_225 = 0;
	char* sLocal_226 = NULL;
	char* sLocal_227 = NULL;
	char* sLocal_228 = NULL;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
	struct<3> Local_231 = { 0, 0, 0 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	var uLocal_260 = 6;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	int iLocal_267 = 0;
	struct<3> Local_268 = { 0, 0, 0 } ;
	var uLocal_269 = 16;
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
	struct<3> Local_434[6];
	float fLocal_435[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	struct<16> Local_436 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_437[64] = "";
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
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
	float fLocal_466 = 0f;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 3;
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
	var uLocal_518 = 4;
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
	var uLocal_583 = 2;
	var uLocal_584 = 0;
	var uLocal_585 = 4;
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
	var uLocal_651 = 4;
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
	var uLocal_722 = 12;
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
	var uLocal_903 = 3;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	struct<8> Local_910 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 1132396544;
	var uLocal_916 = 1132396544;
	var uLocal_917 = 1132396544;
	var uLocal_918 = 0;
	var uLocal_919 = -1082130432;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 8;
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
	var uLocal_979 = -1;
	var uLocal_980 = 1092616192;
	var uLocal_981 = 0;
	int iLocal_982 = 0;
	int* iLocal_983 = NULL;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	int* iLocal_986 = NULL;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	int* iLocal_989 = NULL;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int* iLocal_994 = NULL;
	bool bLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	float fLocal_998 = 0f;
	float fLocal_999 = 0f;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	int iLocal_1004 = 0;
	int iLocal_1005 = 0;
	int* iLocal_1006 = NULL;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 6;
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
	var uLocal_1028 = 16;
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
	bool bLocal_1193 = 0;
	var uLocal_1194 = 6;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	int iLocal_1201 = 0;
	int iLocal_1202 = 0;
	struct<3621> Local_1203 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_1216 = 15;
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
	var uLocal_1370 = 1084227584;
	var uLocal_1371 = 1075838976;
	var uLocal_1372 = 1084227584;
	var uLocal_1373 = 3;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 1077936128;
	var uLocal_1384 = 2;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 2;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 1065353216;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = -1;
	struct<3> Local_1396 = { 0, 0, 0 } ;
	float fLocal_1397 = 0f;
	int iLocal_1398 = 0;
	int iLocal_1399 = 0;
	int* iLocal_1400 = NULL;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	struct<18> Local_1403 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_46 = -1;
	sLocal_202 = "SPR_UI_FAILD";
	sLocal_226 = "CHECKPOINT_NORMAL";
	sLocal_227 = "CHECKPOINT_MISSED";
	sLocal_228 = "CHECKPOINT_PERFECT";
	Local_229 = { 1694.7395f, 3276.5024f, 41.2796f };
	Local_230 = { 8.79494f, 0.59893f, 154.8464f };
	Local_231 = { 500f, 500f, 500f };
	fLocal_466 = ((0.05f + 0.275f) - 0.01f);
	bLocal_995 = true;
	fLocal_998 = 0.65f;
	fLocal_999 = 0.83f;
	Local_1396 = { 2659.445f, 4304.6997f, 44.5639f };
	fLocal_1397 = 258f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_955();
	}
	Local_910.f_1 = 0;
	Local_910.f_5 = 0;
	Local_910.f_6 = 0;
	AUDIO::LOAD_STREAM("INTRO_STREAM", "DIRT_RACES_SOUNDSET");
	while (true)
	{
		switch (Local_910.f_1)
		{
			case 0:
			case 1:
				if (!func_905(ScriptParam_1403))
				{
					Local_910.f_1 = 1;
				}
				if (__LIB_1__::func_13(&(Local_47.f_359)) && !Local_47.f_363)
				{
					if (__LIB_2__::func_572(&(Local_47.f_359)) >= 0.5f)
					{
						Local_47.f_363 = 1;
					}
				}
				if (!func_2(ScriptParam_1403))
				{
					Local_910.f_1 = 2;
				}
				break;
			case 2:
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					func_955();
				}
				break;
		}
		if (bLocal_187)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		}
		__LIB_0__::func_467();
		SYSTEM::WAIT(0);
	}
}

int func_2(struct<18> Param0)//Position - 0x1E0
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_47.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_47.f_1, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_47.f_1, false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_47.f_1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		Local_47.f_1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	if (Local_1203.f_11 != 0)
	{
		Local_1203.f_14 = (Local_1203.f_14 - 25);
		if (Local_1203.f_14 <= 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_1203.f_11);
			Local_1203.f_11 = 0;
		}
		else
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_1203.f_11, 255, 255, 255, __LIB_3__::func_778(SYSTEM::CEIL((1.5f * IntToFloat(Local_1203.f_14))), 255));
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_1203.f_11, 255, 255, 255, Local_1203.f_14);
		}
	}
	switch (Local_910.f_6)
	{
		case 0:
			fLocal_1397 = fLocal_1397;
			Local_910.f_0 = -1;
			Local_47.f_11 = Param0.f_0;
			func_901();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
			}
			func_883(&Local_1203);
			func_882();
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (__LIB_1__::func_490(iLocal_218, 1))
			{
				__LIB_38__::func_475(&iLocal_218, 1);
			}
			if (!Local_1203.f_1)
			{
				if (__LIB_0__::func_109())
				{
					if (!func_874(&Local_1203))
					{
						if (func_873(&Local_1203, Param0.f_16))
						{
							if (iLocal_252)
							{
								if (func_828(&Local_1203, &(Local_1203.f_396[0 /*203*/]), Param0.f_17))
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
									{
									}
									func_826(&Local_1203);
									func_825(&Local_1203, &iLocal_1398, 1036831949);
									func_824(&Local_1203, &iLocal_1399, 1036831949, 0);
									func_800(&Local_1203);
									AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1203.f_396[0 /*203*/].f_9, false);
									if (ENTITY::DOES_ENTITY_EXIST(Local_47.f_2))
									{
										ENTITY::SET_ENTITY_VISIBLE(Local_47.f_2, true, false);
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_47.f_2, true, true);
									}
								}
							}
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
			{
			}
			Local_910.f_6 = 3;
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Local_47.f_2))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_47.f_2, true, false);
			}
			if (Local_1203.f_1)
			{
				if (__LIB_1__::func_490(iLocal_218, 1))
				{
					__LIB_38__::func_475(&iLocal_218, 1);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_784();
				iLocal_1398 = 1;
				iLocal_1399 = 1;
				Local_910.f_6 = 4;
				Local_1203.f_30 = 0;
			}
			else
			{
				func_883(&Local_1203);
				func_783(Local_47.f_11);
				func_800(&Local_1203);
				if (func_782())
				{
					Local_910.f_6 = 5;
				}
			}
			break;
		case 4:
			if (!func_883(&Local_1203))
			{
				func_781(&Local_1203);
				func_780(&Local_1203);
				func_825(&Local_1203, &iLocal_1398, 1036831949);
				func_824(&Local_1203, &iLocal_1399, 1036831949, 0);
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				Local_910.f_6 = 14;
				if (ENTITY::DOES_ENTITY_EXIST(Local_1203.f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(Local_1203.f_396[0 /*203*/].f_9, false))
				{
					AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */, "OFF_ROAD_RADIO_ROCK_LIST", true);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_1203.f_396[0 /*203*/].f_9, true);
					AUDIO::SET_VEH_RADIO_STATION(Local_1203.f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 5000f, 0);
					__LIB_1__::func_362(&(Local_910.f_7));
				}
			}
			break;
		case 14:
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || __LIB_2__::func_572(&(Local_910.f_7)) > 5f)
			{
				__LIB_1__::func_12(&(Local_910.f_7));
				STREAMING::NEW_LOAD_SCENE_STOP();
				EVENT::SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME();
				Local_910.f_6 = 13;
			}
			break;
		case 13:
			if (__LIB_39__::func_725(5000))
			{
				Local_1203.f_3 = ((CAM::DOES_CAM_EXIST(Local_47.f_357) && CAM::IS_CAM_ACTIVE(Local_47.f_357)) && CAM::IS_CAM_RENDERING(Local_47.f_357));
				Local_1203.f_1 = 0;
				Local_1203.f_30 = 0;
				if (Local_1203.f_3)
				{
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
				Local_910.f_6 = 10;
			}
			break;
		case 5:
			func_776();
			if (!func_883(&Local_1203))
			{
				if (__LIB_39__::func_725(500))
				{
					if (func_800(&Local_1203))
					{
						Local_1203.f_30 = 0;
						iLocal_1202 = 0;
						Local_910.f_6 = 10;
					}
				}
			}
			break;
		case 10:
			func_776();
			if (__LIB_39__::func_725(500))
			{
				Local_1203.f_3620 = 0;
				iLocal_258 = 0;
				iLocal_255 = 0;
				Local_222.f_1 = 0;
				__LIB_1__::func_327(&iLocal_1400, 10f);
				if (Local_1203.f_3)
				{
					Local_1203.f_31 = 8;
				}
				else
				{
					Local_1203.f_31 = 0;
				}
				Local_910.f_6 = 11;
			}
			break;
		case 11:
			if (Local_910.f_0 != 1)
			{
				if (__LIB_1__::func_490(Local_222.f_1, 8) && !Local_1203.f_3620)
				{
					Local_1203.f_3620 = 1;
					iLocal_45 = 0;
					if (__LIB_7__::func_691())
					{
						CAM::SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(ENTITY::GET_ENTITY_MODEL(Local_1203.f_396[0 /*203*/].f_9));
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					}
					iLocal_46 = MISC::GET_GAME_TIMER() + 300;
				}
				func_771(&(Local_1203.f_396[0 /*203*/]));
				func_769(Local_47.f_11);
				if (!func_15(&Local_1203))
				{
					if (Local_1203.f_1)
					{
						Local_910.f_6 = 3;
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < Local_1203.f_18)
						{
							if (iVar0 != 0)
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1203.f_396[iVar0 /*203*/].f_8, false) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_1203.f_396[iVar0 /*203*/].f_8))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_1203.f_396[iVar0 /*203*/].f_8));
								}
							}
							iVar0++;
						}
						SYSTEM::SETTIMERA(0);
						Local_910.f_6 = 12;
					}
				}
				if (Local_1203.f_31 == 10)
				{
					func_5(&Local_1203);
				}
			}
			break;
		case 12:
			if (SYSTEM::TIMERA() >= 2000)
			{
				Local_910.f_6 = 15;
			}
			break;
		case 15:
			func_4();
			func_3();
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			switch (Local_47.f_11)
			{
				case 0:
					break;
				case 1:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 2:
					break;
			}
			return 0;
			break;
	}
	return 1;
}

void func_3()//Position - 0x835
{
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	TASK::RESET_SCENARIO_TYPES_ENABLED();
	TASK::RESET_EXCLUSIVE_SCENARIO_GROUP();
}

void func_4()//Position - 0x849
{
	if (CAM::DOES_CAM_EXIST(iLocal_249))
	{
		CAM::DESTROY_CAM(iLocal_249, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_250))
	{
		CAM::DESTROY_CAM(iLocal_250, false);
	}
}

void func_5(int iParam0)//Position - 0x875
{
	int iVar0;
	char cVar1[16];
	if (__LIB_17__::func_339(&iLocal_1400, 5f))
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_18)
		{
			if (iParam0->f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				func_12(iParam0, iVar0);
			}
			iVar0++;
		}
		__LIB_0__::func_706(&iLocal_1400, 0f);
	}
	if (bLocal_995)
	{
		iVar0 = 0;
		while (iVar0 < iParam0->f_18)
		{
			if (iParam0->f_396[iVar0 /*203*/].f_11 < iParam0->f_17)
			{
				if (iParam0->f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && iParam0->f_2)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_9, false))
					{
						if (!PED::IS_PED_INJURED(iParam0->f_396[iVar0 /*203*/].f_8))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0->f_396[iVar0 /*203*/].f_9, -1, false) != iParam0->f_396[iVar0 /*203*/].f_8)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_396[iVar0 /*203*/].f_8, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
								{
									if (__LIB_2__::func_925(iParam0->f_396[iVar0 /*203*/].f_9, 0, 0, 0, 0, 0, 1, 0, 1))
									{
										PED::SET_PED_HELMET(iParam0->f_396[iVar0 /*203*/].f_8, true);
										TASK::TASK_ENTER_VEHICLE(iParam0->f_396[iVar0 /*203*/].f_8, iParam0->f_396[iVar0 /*203*/].f_9, -1, -1, 2f, 1, 0);
									}
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_396[iVar0 /*203*/].f_8, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 1 && __LIB_2__::func_572(&(iParam0->f_5)) > 2f)
							{
								if (Local_47.f_11 + 1 >= 1 && Local_47.f_11 + 1 <= 6)
								{
									StringCopy(&cVar1, "Offroad_", 16);
									switch (Local_47.f_11)
									{
										case 0:
											StringIntConCat(&cVar1, 1, 16);
											break;
										case 1:
											StringIntConCat(&cVar1, 2, 16);
											break;
										case 2:
											StringIntConCat(&cVar1, 6, 16);
											break;
										case 3:
											StringIntConCat(&cVar1, 3, 16);
											break;
										case 4:
											StringIntConCat(&cVar1, 4, 16);
											break;
										case 5:
											StringIntConCat(&cVar1, 5, 16);
											break;
									}
									PED::SET_PED_HELMET(iParam0->f_396[iVar0 /*203*/].f_8, true);
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_396[iVar0 /*203*/].f_8, iParam0->f_396[iVar0 /*203*/].f_9, &cVar1, 786468, 0, 24, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[iVar0 /*203*/].f_9), false, 2f);
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

void func_12(int iParam0, int iParam1)//Position - 0xD27
{
	float fVar0;
	if (iParam1 < 0 || iParam1 > iParam0->f_396)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iParam1 /*203*/].f_9, false))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_9))
		{
			switch (Local_47.f_11)
			{
				case 0:
					break;
				case 1:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 2:
					break;
				default:
					break;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iParam1 /*203*/].f_8, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iParam1 /*203*/].f_9, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_8, iParam0->f_396[iParam1 /*203*/].f_9, false))
			{
				fVar0 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[iParam1 /*203*/].f_9);
				if (iParam0->f_396[0 /*203*/].f_11 == iParam0->f_396[iParam1 /*203*/].f_11)
				{
					fVar0 = (fVar0 * 0.9f);
				}
				else if (iParam0->f_396[iParam1 /*203*/].f_11 > iParam0->f_396[0 /*203*/].f_11)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_8, iParam0->f_396[iParam1 /*203*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0->f_396[iParam1 /*203*/].f_9, -1, false))
					{
						PED::SET_PED_INTO_VEHICLE(iParam0->f_396[iParam1 /*203*/].f_8, iParam0->f_396[iParam1 /*203*/].f_9, -1);
					}
					TASK::SET_DRIVE_TASK_CRUISE_SPEED(iParam0->f_396[iParam1 /*203*/].f_8, fVar0);
				}
			}
		}
	}
}

int func_15(int iParam0)//Position - 0xEF6
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	switch (iParam0->f_31)
	{
		case 0:
			switch (Local_47.f_11)
			{
				case 0:
					fLocal_998 = 0.85f;
					fLocal_999 = 0.9f;
					break;
				case 3:
					fLocal_998 = 0.85f;
					fLocal_999 = 0.9f;
					break;
				case 4:
					fLocal_998 = 0.85f;
					fLocal_999 = 0.9f;
					break;
				case 2:
					fLocal_998 = 0.85f;
					fLocal_999 = 0.9f;
					break;
			}
			__LIB_38__::func_475(&iLocal_216, 4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_768(iParam0);
			if (Local_47.f_0 == 0)
			{
				__LIB_39__::func_714(iParam0);
				if (!__LIB_1__::func_490(iLocal_216, 16))
				{
					func_758(iParam0, 0, 1);
					func_758(iParam0, 1, 0);
					func_757(&iLocal_216, 16);
				}
			}
			if (iParam0->f_1 || iParam0->f_3625)
			{
				__LIB_1__::func_12(&(iParam0->f_19));
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9, false))
				{
					AUDIO::SET_VEH_RADIO_STATION(iParam0->f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
				}
				iLocal_225 = 0;
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			VEHICLE::SET_VEHICLE_HANDBRAKE(iParam0->f_396[0 /*203*/].f_9, true);
			func_776();
			iVar0 = 0;
			while (iVar0 < iParam0->f_18)
			{
				if (iVar0 != 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_9, false))
					{
						VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iParam0->f_396[iVar0 /*203*/].f_9, true);
					}
				}
				iVar0++;
			}
			iParam0->f_31 = 1;
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9, false))
			{
				fVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9);
				if ((ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer") || ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer2")) || ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer3"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar1 * fLocal_998));
				}
				else if (ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("sanchez"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar1 * fLocal_999));
				}
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (!func_752(&(iParam0->f_19)))
			{
				AUDIO::STOP_SOUND(iLocal_992);
				AUDIO::STOP_AUDIO_SCENE("RACE_INTRO_GENERIC");
				func_751(iParam0);
				if (__LIB_1__::func_490(iLocal_216, 16))
				{
					__LIB_38__::func_475(&iLocal_216, 16);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
				}
				HUD::DISPLAY_HUD(true);
				func_749(iParam0);
				iParam0->f_31 = 10;
				__LIB_1__::func_31(&(Local_47.f_374));
			}
			else
			{
				func_776();
			}
			break;
		case 2:
			HUD::DISPLAY_HUD(false);
			if (!__LIB_1__::func_490(iLocal_216, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_745(iParam0);
				func_731(iParam0);
				__LIB_1__::func_214(&(Local_47.f_153), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_47.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
				__LIB_0__::func_990(&(Local_47.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
				__LIB_0__::func_990(&(Local_47.f_153), "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
				__LIB_37__::func_109(&(Local_47.f_153), 1);
				func_757(&iLocal_216, 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if (__LIB_0__::func_501("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			func_725(iParam0, &(iParam0->f_396[0 /*203*/].f_9));
			if (CAM::DOES_CAM_EXIST(iLocal_251))
			{
				if (!CAM::IS_CAM_ACTIVE(iLocal_251))
				{
					CAM::SET_CAM_ACTIVE(iLocal_251, true);
					if (CAM::IS_CINEMATIC_CAM_RENDERING())
					{
					}
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
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
					CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.16f);
					SYSTEM::SETTIMERA(0);
					func_721();
					func_720(0);
					PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_396[0 /*203*/].f_9, false))
					{
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cLocal_437))
						{
							VEHICLE::SET_VEHICLE_IS_RACING(iParam0->f_396[0 /*203*/].f_9, false);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), iParam0->f_396[0 /*203*/].f_9, &cLocal_437, 786485, 0, 8, -1, -1f, false, 2f);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					}
					PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), false, 0);
					__LIB_0__::func_704(1);
					if (iParam0->f_396[0 /*203*/].f_12 <= 3)
					{
						if (func_718(ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9)))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MINI@RACING@BIKE@", "celebrate_c", 8f, -8f, -1, 48, 0f, false, false, false);
						}
						else if (func_717(ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9)))
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "MINI@RACING@QUAD@", "celebrate_c", 8f, -8f, -1, 48, 0f, false, false, false);
						}
					}
					func_716(iParam0);
					AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
					__LIB_1__::func_31(&(Local_47.f_359));
					if (PLAYER::IS_PLAYER_ONLINE())
					{
						iLocal_1003 = 1;
						func_705(Local_47.f_11, &(Local_47.f_78[Local_47.f_11 /*8*/]));
					}
					iParam0->f_31 = 4;
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_572(&(Local_47.f_359)) >= 3.666f)
			{
				func_700(iParam0);
				CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_47.f_357, iLocal_251, 666, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 1000, true);
				__LIB_0__::func_989(&Global_112037, 262144);
				__LIB_0__::func_210();
				iParam0->f_31 = 5;
			}
			else if (__LIB_2__::func_572(&(Local_47.f_359)) >= 2f)
			{
				if (!__LIB_1__::func_490(iLocal_216, 4))
				{
					__LIB_1__::func_38(1);
					if (!AUDIO::IS_MISSION_COMPLETE_PLAYING())
					{
						func_757(&iLocal_216, 4);
					}
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(true);
					}
					if (__LIB_0__::func_501("SPR_RETR_FAIL", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
				}
			}
			break;
		case 5:
			if (!__LIB_1__::func_490(iLocal_216, 512))
			{
				if (iParam0->f_396[0 /*203*/].f_12 > 1)
				{
					func_757(&iLocal_216, 512);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "RACE_PLACED", "HUD_AWARDS", true);
				}
			}
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
			{
				HUD::SET_MOUSE_CURSOR_THIS_FRAME();
			}
			iParam0->f_3590 = func_585(iParam0);
			if (Local_47.f_277.f_1 != 0)
			{
				STREAMING::REQUEST_MODEL(Local_47.f_277.f_1);
				if (!STREAMING::HAS_MODEL_LOADED(Local_47.f_277.f_1))
				{
					STREAMING::REQUEST_MODEL(Local_47.f_277.f_1);
				}
			}
			if (iParam0->f_3590 == 1)
			{
				__LIB_19__::func_61();
				func_572();
				if (Local_47.f_11 == 4 && Local_47.f_366)
				{
					if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
					{
						STREAMING::REQUEST_IPL("CS2_06_TriAf02");
					}
				}
				HUD::CLEAR_HELP(true);
				if (__LIB_1__::func_490(iLocal_216, 1))
				{
					__LIB_38__::func_475(&iLocal_216, 1);
				}
				__LIB_2__::func_540(&(Local_47.f_153));
				if (iParam0->f_396[0 /*203*/].f_12 == 1)
				{
					if (Local_47.f_152 != 1)
					{
						__LIB_17__::func_219(__LIB_0__::func_683(), 4, 3);
					}
				}
				if (Local_47.f_277.f_1 != 0)
				{
					if (STREAMING::HAS_MODEL_LOADED(Local_47.f_277.f_1) || !Local_47.f_151)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							}
							else
							{
								iVar2 = iParam0->f_396[0 /*203*/].f_9;
							}
							if (Local_47.f_2 != iVar2)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), iParam0->f_3608, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), iParam0->f_3611);
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
							}
							else if (ENTITY::DOES_ENTITY_EXIST(Local_47.f_2))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								ENTITY::SET_ENTITY_COORDS(Local_47.f_2, iParam0->f_3608, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_47.f_2, iParam0->f_3611);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_47.f_2, 5f);
							}
							if (((ENTITY::DOES_ENTITY_EXIST(Local_47.f_2) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_47.f_2, false)) && Local_47.f_2 != iVar2) || Local_47.f_151)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_396[0 /*203*/].f_9, true, true);
									VEHICLE::DELETE_VEHICLE(&(iParam0->f_396[0 /*203*/].f_9));
								}
								if (Local_47.f_151)
								{
									func_565(24, iParam0->f_3808, iParam0->f_3811);
								}
								else
								{
									ENTITY::SET_ENTITY_COLLISION(Local_47.f_2, true, false);
									ENTITY::SET_ENTITY_COORDS(Local_47.f_2, iParam0->f_3808, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_47.f_2, iParam0->f_3811);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_47.f_2, 5f);
									ENTITY::SET_ENTITY_VISIBLE(Local_47.f_2, true, false);
								}
							}
						}
						if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
						{
							PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
						}
						else
						{
							PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						}
						func_556(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
						func_270(PLAYER::PLAYER_PED_ID(), &(Local_47.f_380), 0, 0, 1, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						AUDIO::STOP_SCRIPTED_CONVERSATION(false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						__LIB_1__::func_31(&iLocal_203);
						func_269(iParam0);
						CAM::SET_CAM_ACTIVE(iLocal_239, true);
						GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 600, false);
						__LIB_38__::func_477(0, 0, 0);
						iParam0->f_31 = 11;
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), iParam0->f_3608, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), iParam0->f_3611);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0->f_396[0 /*203*/].f_9, true, true);
					if (!Local_47.f_151)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_9, iParam0->f_3808, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_9, iParam0->f_3611);
						}
					}
					else
					{
						VEHICLE::DELETE_VEHICLE(&(iParam0->f_396[0 /*203*/].f_9));
					}
					if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					}
					else
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					}
					func_556(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
					func_270(PLAYER::PLAYER_PED_ID(), &(Local_47.f_380), 0, 0, 1, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
					__LIB_1__::func_31(&iLocal_203);
					GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 600, false);
					func_269(iParam0);
					CAM::SET_CAM_ACTIVE(iLocal_239, true);
					__LIB_38__::func_477(0, 0, 0);
					iParam0->f_31 = 11;
				}
			}
			else if (iParam0->f_3590 == 2)
			{
				__LIB_19__::func_61();
				func_572();
				iLocal_1001 = 0;
				iLocal_1000 = 0;
				iLocal_1005 = 0;
				if (__LIB_1__::func_490(iLocal_216, 1))
				{
					__LIB_38__::func_475(&iLocal_216, 1);
				}
				if (iParam0->f_396[0 /*203*/].f_12 == 1)
				{
					if (Local_47.f_152 != 1)
					{
						__LIB_17__::func_219(__LIB_0__::func_683(), 4, 3);
					}
				}
				__LIB_2__::func_540(&(Local_47.f_153));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				__LIB_0__::func_345(&uLocal_190, 0, 0);
				iParam0->f_31 = 11;
				iParam0->f_396[0 /*203*/].f_11 = 0;
				__LIB_1__::func_12(&(iParam0->f_19));
				iLocal_45 = 0;
				iParam0->f_3620 = 0;
				AUDIO::STOP_AUDIO_SCENE("OFFROAD_RACES_OUTRO_SCENE");
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				AUDIO::START_AUDIO_SCENE("RACE_INTRO_GENERIC");
			}
			break;
		case 11:
			if (func_233(iParam0))
			{
				if (iParam0->f_3590 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", true);
					__LIB_0__::func_704(0);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_240, iLocal_239, 1500, 0, 1);
					__LIB_1__::func_31(&iLocal_203);
					iParam0->f_31 = 12;
				}
				else if (iParam0->f_3590 == 2)
				{
					iParam0->f_2 = 0;
					iParam0->f_1 = 1;
					iLocal_225 = 0;
					iParam0->f_396[0 /*203*/].f_23 = 5;
					__LIB_0__::func_704(0);
					iParam0->f_31 = 10;
				}
			}
			break;
		case 12:
			if (__LIB_2__::func_572(&iLocal_203) >= 1.5f && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					CAM::SET_CAM_ACTIVE(iLocal_240, false);
					CAM::SET_CAM_ACTIVE(iLocal_241, true);
					func_232(&iLocal_997);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_241, iLocal_997, "offroad_outro_cam", "MINI@RACING@QUAD@");
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						switch (__LIB_0__::func_683())
						{
							case 0:
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_997, "MINI@RACING@QUAD@", "offroad_outro_mic", 1000f, -4f, 2, 0, 1000f, 0);
								break;
							case 1:
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_997, "MINI@RACING@QUAD@", "offroad_outro_fra", 1000f, -4f, 2, 0, 1000f, 0);
								break;
							case 2:
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_997, "MINI@RACING@QUAD@", "offroad_outro_trv", 1000f, -4f, 2, 0, 1000f, 0);
								break;
							}
					}
					PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_997, false);
					iParam0->f_31 = 13;
				}
				else
				{
					__LIB_40__::func_484(1, 1, 0);
					iParam0->f_31 = 14;
				}
			}
			break;
		case 13:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_997) >= 1f)
				{
					__LIB_40__::func_484(1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iParam0->f_31 = 14;
				}
				else if (((PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) < -0.2f || PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 218 /*INPUT_SCRIPT_LEFT_AXIS_X*/) > 0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) < -0.2f) || PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 219 /*INPUT_SCRIPT_LEFT_AXIS_Y*/) > 0.2f)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
					__LIB_40__::func_484(1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iParam0->f_31 = 14;
				}
			}
			break;
		case 6:
			if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_982))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				HUD::CLEAR_ADDITIONAL_TEXT(3, true);
				if (iParam0->f_4)
				{
					if (Local_47.f_11 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8, false))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_8, 1761.1394f, 3903.3284f, 34.7834f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_8, 15.177f);
						}
					}
					else if (Local_47.f_11 == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8, false))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_8, -1340.3477f, -1015.0042f, 7.9419f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_8, 62.3626f);
						}
					}
					else if (Local_47.f_11 == 3)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8, false))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0->f_396[0 /*203*/].f_8, -2280.6921f, 412.326f, 173.6019f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(iParam0->f_396[0 /*203*/].f_8, 183.1624f);
						}
					}
				}
				func_208(iParam0);
				__LIB_1__::func_31(&iLocal_983);
				iParam0->f_31 = 7;
			}
			break;
		case 7:
			if (__LIB_15__::func_251(&iLocal_983, 0.5f))
			{
				__LIB_1__::func_12(&iLocal_983);
				iParam0->f_1 = 0;
				iParam0->f_31 = 14;
			}
			break;
		case 8:
			if (CAM::IS_CAM_INTERPOLATING(Local_47.f_358))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 500, false);
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
				iParam0->f_31 = 9;
			}
			else if (!__LIB_0__::func_490(CAM::GET_CAM_COORD(Local_47.f_357), func_207() + Vector(1000f, 0f, 0f), 1056964608, 0))
			{
				CAM::SET_CAM_COORD(Local_47.f_357, func_207() + Vector(1000f, 0f, 0f));
				CAM::SET_CAM_ROT(Local_47.f_357, func_205(), 2);
			}
			else if (CAM::DOES_CAM_EXIST(Local_47.f_358))
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_47.f_358, Local_47.f_357, 500, 1, 1);
			}
			break;
		case 9:
			if (func_204(iParam0))
			{
				Local_47.f_362 = 0;
				iParam0->f_3625 = 0;
				iParam0->f_31 = 0;
			}
			break;
		case 10:
			if (!Local_47.f_362 && !iParam0->f_3625)
			{
				if (iLocal_45 == 1 || iLocal_45 == 2)
				{
					if (__LIB_7__::func_691() && iLocal_45 == 2)
					{
						CAM::SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9));
					}
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 10f, 3, 0);
					Local_47.f_362 = 1;
				}
				else if (((PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/)) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/))
				{
					CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
					CAM::RENDER_SCRIPT_CAMS(false, true, 1300, true, false, 0);
					Local_47.f_362 = 1;
				}
			}
			else if (Local_47.f_362 && !Local_47.f_364)
			{
				Local_47.f_364 = 1;
				func_203(iParam0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9, false))
			{
				fVar3 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9);
				if (ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer") || ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("blazer2"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar3 * fLocal_998));
				}
				else if (ENTITY::GET_ENTITY_MODEL(iParam0->f_396[0 /*203*/].f_9) == joaat("sanchez"))
				{
					ENTITY::SET_ENTITY_MAX_SPEED(iParam0->f_396[0 /*203*/].f_9, (fVar3 * fLocal_999));
				}
			}
			if (__LIB_2__::func_572(&(Local_47.f_374)) <= 1f && iLocal_225 > 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE(Local_222.f_0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			}
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 305, true);
			iVar0 = 0;
			while (iVar0 < iParam0->f_18)
			{
				if (iParam0->f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && !iParam0->f_396[iVar0 /*203*/].f_192)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar0 /*203*/].f_9, false))
					{
						if (!__LIB_1__::func_13(&(iParam0->f_396[iVar0 /*203*/].f_195)))
						{
							__LIB_1__::func_362(&(iParam0->f_396[iVar0 /*203*/].f_195));
						}
						else if (__LIB_2__::func_572(&(iParam0->f_396[iVar0 /*203*/].f_195)) > 1.5f)
						{
							__LIB_1__::func_12(&(iParam0->f_396[iVar0 /*203*/].f_195));
							iParam0->f_396[iVar0 /*203*/].f_192 = 1;
						}
						else if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_396[iVar0 /*203*/].f_9))
						{
							fVar4 = (__LIB_2__::func_572(&(iParam0->f_396[iVar0 /*203*/].f_195)) / 1.5f);
							fVar5 = func_201(iParam0->f_3618, iParam0->f_3619, fVar4, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0->f_396[iVar0 /*203*/].f_9, fVar5);
						}
					}
				}
				iVar0++;
			}
			if (!__LIB_1__::func_490(iLocal_216, 16))
			{
				func_758(iParam0, 0, 1);
				func_758(iParam0, 1, 0);
				func_757(&iLocal_216, 16);
				func_720(1);
			}
			if (!Local_47.f_0 == 2)
			{
				if (Local_47.f_0 == 1)
				{
					func_200(iParam0);
				}
				if (iParam0->f_2)
				{
					func_167(iParam0);
				}
				else
				{
					__LIB_38__::func_615(&uLocal_190, 0);
					CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				}
			}
			if (!func_52(iParam0, Local_47.f_0))
			{
				if (Local_47.f_11 >= 0 && Local_47.f_11 < 7)
				{
					Local_47.f_152 = func_51(Local_47.f_11);
				}
				__LIB_1__::func_12(&(iParam0->f_19));
				AUDIO::STOP_AUDIO_SCENE("OFFROAD_RACES_DURING_RACE");
				AUDIO::START_AUDIO_SCENE("OFFROAD_RACES_OUTRO_SCENE");
				iParam0->f_31 = 2;
				__LIB_1__::func_12(&(iParam0->f_27));
			}
			if (iParam0->f_1 && iParam0->f_396[0 /*203*/].f_23 >= 11)
			{
				iParam0->f_31 = 1;
				iParam0->f_1 = 0;
			}
			break;
		case 14:
			AUDIO::STOP_AUDIO_SCENE("OFFROAD_RACES_OUTRO_SCENE");
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			if (Local_47.f_0 == 0)
			{
				return 0;
			}
			else if (Local_47.f_0 == 1)
			{
				if (!CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
				{
					if (!__LIB_1__::func_490(iLocal_216, 64))
					{
						if (!bLocal_187 && !iParam0->f_1)
						{
							CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
						}
						func_757(&iLocal_216, 64);
					}
					else
					{
						PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), true, 0);
						PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
						if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[0 /*203*/].f_9))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_396[0 /*203*/].f_9, false);
						}
						func_720(0);
						__LIB_38__::func_475(&iLocal_216, 64);
						return 0;
					}
				}
			}
			else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				return 0;
			}
			else if (!__LIB_1__::func_13(&iLocal_989))
			{
				__LIB_15__::func_248(&iLocal_989);
			}
			else if (__LIB_2__::func_572(&iLocal_989) > 5f)
			{
				return 0;
			}
			if (HUD::IS_HUD_HIDDEN())
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9, false))
				{
				}
				HUD::DISPLAY_HUD(true);
			}
			func_16(iParam0);
			break;
	}
	return 1;
}

void func_16(int iParam0)//Position - 0x2300
{
	if (iParam0->f_396[0 /*203*/].f_12 == 1)
	{
		if (!__LIB_1__::func_490(iLocal_216, 256))
		{
			switch (__LIB_0__::func_683())
			{
				case 0:
					__LIB_14__::func_571(0, 1, 28, 500, 0);
					break;
				case 1:
					__LIB_14__::func_571(1, 1, 28, 500, 0);
					break;
				case 2:
					__LIB_14__::func_571(2, 1, 28, 500, 0);
					break;
			}
			func_757(&iLocal_216, 256);
		}
	}
}

int func_51(int iParam0)//Position - 0x36BC
{
	int iVar0;
	iVar0 = 0;
	iVar0 = Global_113386.f_19016.f_2[iParam0];
	return iVar0;
}

int func_52(int iParam0, int iParam1)//Position - 0x36D8
{
	float fVar0;
	int iVar1;
	struct<11> Var2;
	struct<11> Var3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	if (__LIB_1__::func_13(&(iParam0->f_5)))
	{
		fVar0 = __LIB_2__::func_572(&(iParam0->f_5));
	}
	func_165(iParam0->f_396[0 /*203*/].f_11, iParam0->f_2);
	iLocal_996++;
	iVar1 = 0;
	while (iVar1 < iParam0->f_18)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_396[iVar1 /*203*/].f_8) && iParam0->f_396[iVar1 /*203*/].f_11 < iParam0->f_17)
		{
			if ((iLocal_996 % iParam0->f_18) == iVar1)
			{
				func_163(iParam0, iVar1);
			}
			bVar5 = false;
			if (iParam0->f_396[iVar1 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar5 = true;
			}
			iVar4 = iParam0->f_396[iVar1 /*203*/].f_11;
			if (iParam0->f_396[iVar1 /*203*/].f_11 >= iParam0->f_17)
			{
				Var2 = { iParam0->f_32[(iParam0->f_17 - 1) /*11*/] };
			}
			else
			{
				Var2 = { iParam0->f_32[iVar4 /*11*/] };
			}
			if (iVar4 < (iParam0->f_17 - 1))
			{
				Var3 = { iParam0->f_32[iVar4 + 1 /*11*/] };
			}
			else
			{
				Var3 = { Var2 };
			}
			if (iVar4 != iParam0->f_17)
			{
				iParam0->f_396[iVar1 /*203*/].f_13 = (fVar0 - iParam0->f_396[iVar1 /*203*/].f_15);
				if (iParam0->f_396[iVar1 /*203*/].f_13 < 0f)
				{
					iParam0->f_396[iVar1 /*203*/].f_13 = 0f;
				}
			}
			if ((!bVar5 && !bLocal_187) && !bLocal_188)
			{
				if ((iLocal_996 % iParam0->f_18) == iVar1)
				{
					func_161(&(iParam0->f_396[iVar1 /*203*/].f_9), &(iParam0->f_396[iVar1 /*203*/].f_10));
				}
			}
			if (!func_126(iParam0, &(iParam0->f_396[iVar1 /*203*/]), bVar5))
			{
				if (!bVar5 && (iLocal_996 % iParam0->f_18) == iVar1)
				{
					func_124(iParam0, iVar1);
				}
				if (bVar5)
				{
					if (PAD::IS_CONTROL_ENABLED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
					{
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					}
					if ((PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) && !iParam0->f_3623)
					{
						iParam0->f_3622 = 0;
						Local_47.f_365 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
					else if ((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) || PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/)) || iParam0->f_3623)
					{
						switch (iParam0->f_3622)
						{
							case 0:
								Local_47.f_365 = 1;
								__LIB_1__::func_31(&iLocal_986);
								iParam0->f_3622 = 1;
								break;
							case 1:
								if (__LIB_2__::func_572(&iLocal_986) > 0.4f)
								{
									__LIB_1__::func_31(&iLocal_986);
									iParam0->f_3622 = 2;
								}
								break;
							case 2:
								if (__LIB_2__::func_572(&iLocal_986) > 1.5f)
								{
									iParam0->f_3622 = 3;
									iParam0->f_396[0 /*203*/].f_23 = 4;
									__LIB_38__::func_475(&iLocal_217, 32768);
									iParam0->f_2 = 0;
									iParam0->f_3623 = 1;
									Local_47.f_365 = 0;
								}
								break;
							case 3:
								iParam0->f_3622 = 4;
								break;
							case 4:
								if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/) && !PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
								{
									PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
									iParam0->f_3622 = 0;
									iParam0->f_3623 = 0;
								}
								break;
							}
						}
				}
				if (bVar5)
				{
					if (iParam0->f_3622 == 2)
					{
						__LIB_16__::func_621(SYSTEM::ROUND((__LIB_2__::func_572(&iLocal_986) * 1000f)), 1500, "RACES_RMETER" /* GXT: RESPAWNING */, 6, 0, 10, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
					}
				}
				if ((!bVar5 && !bLocal_187) && !bLocal_188)
				{
					func_161(&(iParam0->f_396[iVar1 /*203*/].f_9), &(iParam0->f_396[iVar1 /*203*/].f_10));
				}
				if ((iLocal_996 % iParam0->f_18) == iVar1)
				{
					func_121(iParam0, iVar1);
				}
				if (bVar5)
				{
					if (iParam0->f_396[iVar1 /*203*/].f_14 != 0f)
					{
						__LIB_1__::func_362(&(iParam0->f_19));
					}
					if (__LIB_1__::func_490(iLocal_216, 8))
					{
						func_758(iParam0, iVar4, 1);
						if (iVar4 < (iParam0->f_17 - 1))
						{
							func_758(iParam0, iVar4 + 1, 0);
						}
						__LIB_38__::func_475(&iLocal_216, 8);
					}
				}
				if (iParam0->f_2 && bVar5)
				{
					iParam0->f_16 = func_117(iParam0, &Var2, &Var3, iParam0->f_396[iVar1 /*203*/].f_8);
					func_111(&Var2, &Var3);
				}
				else if (!bVar5)
				{
					iParam0->f_16 = func_117(iParam0, &Var2, &Var3, iParam0->f_396[iVar1 /*203*/].f_8);
					if (0 == iParam0->f_16)
					{
					}
				}
				if (iParam0->f_16 != -1)
				{
					iParam0->f_396[iVar1 /*203*/].f_11++;
					iVar4 = iParam0->f_396[iVar1 /*203*/].f_11;
					if (iVar4 >= (iParam0->f_17 - 1))
					{
						Var2 = { iParam0->f_32[(iParam0->f_17 - 1) /*11*/] };
					}
					else
					{
						Var2 = { iParam0->f_32[iVar4 /*11*/] };
					}
					if (bVar5)
					{
						func_108(iParam0, (iVar4 - 1));
						if (iVar4 == iParam0->f_17)
						{
							if (!__LIB_2__::func_213(&(iParam0->f_5)))
							{
								__LIB_14__::func_599(&(iParam0->f_5));
							}
							if (iParam1 == 1)
							{
								iParam0->f_2 = 0;
								Global_113386.f_19016.f_18 = 999;
								if (iParam0->f_396[iVar1 /*203*/].f_12 <= 3)
								{
									Global_113386.f_19016.f_18 = iParam0->f_396[iVar1 /*203*/].f_12;
									func_757(&(Global_113386.f_19016), 1);
								}
							}
							else if (iParam1 == 2)
							{
								if (iParam0->f_396[iVar1 /*203*/].f_12 <= 3)
								{
									func_757(&(Global_113386.f_20011.f_9), 1);
								}
								AUDIO::TRIGGER_MUSIC_EVENT("MGTR_COMPLETE");
							}
							return 0;
						}
						else
						{
							func_758(iParam0, iVar4, 1);
							if (iVar4 < (iParam0->f_17 - 1))
							{
								func_758(iParam0, iVar4 + 1, 0);
							}
						}
						if (iParam0->f_396[iVar1 /*203*/].f_14 == 0f)
						{
							if (__LIB_1__::func_13(&(iParam0->f_19)))
							{
								__LIB_1__::func_12(&(iParam0->f_19));
							}
						}
						if (iParam0->f_17 > 0)
						{
							if (iParam0->f_13 > 0f)
							{
								if (iVar4 == SYSTEM::ROUND((IntToFloat(iParam0->f_17) / 2f)))
								{
									iParam0->f_396[iVar1 /*203*/].f_14 = 0f;
									__LIB_1__::func_31(&(iParam0->f_19));
								}
							}
						}
					}
					else if (iParam0->f_396[iVar1 /*203*/].f_11 >= iParam0->f_17)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar1 /*203*/].f_8, false))
						{
							func_105(&(iParam0->f_396[iVar1 /*203*/]), 0);
						}
					}
					else
					{
						if (Local_47.f_0 != 1)
						{
							if (iVar1 != 0)
							{
								func_103(iParam0, iParam0->f_396[iVar1 /*203*/].f_8, iParam0->f_396[iVar1 /*203*/].f_9, iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/], iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/].f_8, iVar1);
							}
						}
						else
						{
							StringCopy(&cVar6, "Offroad_", 16);
							switch (Local_47.f_11)
							{
								case 0:
									StringIntConCat(&cVar6, 1, 16);
									break;
								case 1:
									StringIntConCat(&cVar6, 2, 16);
									break;
								case 2:
									StringIntConCat(&cVar6, 6, 16);
									break;
								case 3:
									StringIntConCat(&cVar6, 3, 16);
									break;
								case 4:
									StringIntConCat(&cVar6, 4, 16);
									break;
								case 5:
									StringIntConCat(&cVar6, 5, 16);
									break;
							}
							if (iVar1 > 0)
							{
								if (bLocal_995)
								{
									if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar1 /*203*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar1 /*203*/].f_9, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_396[iVar1 /*203*/].f_8, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) == 1)
										{
										}
										else if (iParam0->f_2)
										{
											TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iParam0->f_396[iVar1 /*203*/].f_8, iParam0->f_396[iVar1 /*203*/].f_9, &cVar6, 786468, 0, 24, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam0->f_396[iVar1 /*203*/].f_9), false, 2f);
										}
									}
								}
								else if (iVar1 != 0)
								{
									func_103(iParam0, iParam0->f_396[iVar1 /*203*/].f_8, iParam0->f_396[iVar1 /*203*/].f_9, iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/], iParam0->f_32[iParam0->f_396[iVar1 /*203*/].f_11 /*11*/].f_8, iVar1);
								}
							}
						}
						func_12(iParam0, iVar1);
					}
				}
			}
			else if (!bVar5)
			{
				iParam0->f_16 = func_117(iParam0, &Var2, &Var3, iParam0->f_396[iVar1 /*203*/].f_8);
				if (0 == iParam0->f_16)
				{
				}
			}
		}
		iVar1++;
	}
	if (iParam0->f_2 == 1)
	{
		func_98(iParam0);
		func_95(iParam0, &iLocal_994);
		func_94(iParam0, &iLocal_994);
		func_93(iParam0);
		func_92(iParam0);
		func_90(iParam0);
		func_85(iParam0);
		__LIB_0__::func_467();
		func_65(iParam0);
		func_53(iParam0);
	}
	return 1;
}

void func_53(int iParam0)//Position - 0x3F04
{
	char* sVar0;
	int iVar1;
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(true);
	}
	if (Global_113386.f_19016.f_10[Local_47.f_11] > 0f)
	{
		sVar0 = "SPR_TIMEBEST";
		iVar1 = SYSTEM::CEIL((Global_113386.f_19016.f_10[Local_47.f_11] * 1000f));
	}
	else
	{
		sVar0 = "-1";
		iVar1 = -1;
	}
	__LIB_1__::func_910();
	func_54(SYSTEM::FLOOR((iParam0->f_396[0 /*203*/].f_13 * 1000f)), "", -1, -1, "", iParam0->f_396[0 /*203*/].f_12, iParam0->f_18, "", SYSTEM::CEIL((iParam0->f_396[0 /*203*/].f_15 * 1000f)), 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar1, sVar0, 0, 1, -1, 0, -1082130432, 1, 1, 0);
}

void func_54(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26, bool bParam27)//Position - 0x3FC6
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	if (fParam24 > -1f)
	{
		__LIB_17__::func_413(0, "", iParam22, iParam25, 9, 0, sParam23, 1, fParam24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (__LIB_1__::func_76(sVar0))
		{
			sVar0 = "TIM_DAMAGE" /* GXT: DAMAGE */;
		}
		__LIB_16__::func_621(iParam14, iParam15, sVar0, iParam17, iParam22, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (__LIB_1__::func_76(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN" /* GXT: CHECKPOINT */;
		}
		func_59(iParam10, iParam11, sVar1, iParam22, iParam13, 7, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (__LIB_1__::func_76(sVar2))
		{
			sVar2 = "TIM_POSIT" /* GXT: POSITION */;
		}
		__LIB_38__::func_631(iParam5, uParam6, sVar2, iParam9, iParam22, 6, 0, 0, 0, 1, 0, 0, 0);
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
			if (!bParam27)
			{
				sVar4 = "TIMER_BESLAP" /* GXT: BEST LAP */;
			}
			else
			{
				sVar4 = "TIMER_BESTIME" /* GXT: BEST TIME */;
			}
		}
		__LIB_1__::func_350(iParam18, sVar4, 0, 1, iParam22, iParam20, 4, 0, iParam26, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	sVar5 = sParam1;
	if (__LIB_1__::func_76(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE" /* GXT: TIME */;
	}
	if (bParam21)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	__LIB_1__::func_350(iParam0, sVar5, iParam8, iVar6, iParam22, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_59(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0x43EB
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (__LIB_0__::func_929(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1649593.f_1 = 1;
		__LIB_0__::func_928(4, iVar0);
		Global_1649593.f_3347[iVar0] = iParam0;
		Global_1649593.f_3347.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1649593.f_3347.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1649593.f_3347.f_183[iVar0] = iParam3;
		Global_1649593.f_3347.f_216[iVar0] = iParam5;
		Global_1649593.f_3347.f_194[iVar0] = uParam4;
		Global_1649593.f_3347.f_227[iVar0] = iParam6;
		Global_1649593.f_3347.f_270[iVar0] = iParam7;
		Global_1649593.f_3347.f_281[iVar0] = iParam8;
		Global_1649593.f_3347.f_292[iVar0] = iParam9;
		Global_1649593.f_3347.f_303[iVar0] = iParam10;
		Global_1649593.f_3347.f_314[iVar0] = iParam11;
		Global_1649593.f_3347.f_325[iVar0] = iParam13;
		Global_1649593.f_3347.f_336[iVar0] = iParam14;
		Global_1649593.f_3347.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1649593.f_1172 = 1;
		}
	}
}

void func_65(int iParam0)//Position - 0x4862
{
	bool bVar0;
	bool bVar1;
	bVar0 = func_83(iParam0, &bVar1);
	func_82(bVar1);
	func_73(iParam0, bVar0, bVar1);
	func_66(&(iParam0->f_396[0 /*203*/]), "Crash", &iLocal_257);
}

void func_66(var uParam0, char* sParam1, int iParam2)//Position - 0x4897
{
	struct<2> Var0;
	if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
	{
		if (!PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
		{
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
			{
				if (!iLocal_256)
				{
					if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						StringCopy(&Var0, sParam1, 16);
						StringCopy(&Var0, "", 16);
						if (!__LIB_1__::func_490(*iParam2, 16) && __LIB_1__::func_490(*iParam2, 8))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_0__::func_683() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_757(iParam2, 16);
									iLocal_256 = 1;
								}
							}
						}
						else if (!__LIB_1__::func_490(*iParam2, 8) && __LIB_1__::func_490(*iParam2, 4))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_0__::func_683() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_757(iParam2, 8);
									iLocal_256 = 1;
								}
							}
						}
						else if (!__LIB_1__::func_490(*iParam2, 4) && __LIB_1__::func_490(*iParam2, 2))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_0__::func_683() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_757(iParam2, 4);
									iLocal_256 = 1;
								}
							}
						}
						else if (!__LIB_1__::func_490(*iParam2, 2) && __LIB_1__::func_490(*iParam2, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_0__::func_683() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_757(iParam2, 2);
									iLocal_256 = 1;
								}
							}
						}
						else if (!__LIB_1__::func_490(*iParam2, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_0__::func_683() == 0)
								{
									StringCopy(&Var0, "MICHAEL_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 2)
								{
									StringCopy(&Var0, "TREVOR_NORMAL", 16);
								}
								else if (__LIB_0__::func_683() == 1)
								{
									StringCopy(&Var0, "FRANKLIN_NORMAL", 16);
								}
								if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) > 7500)
								{
									__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "CRASH_GENERIC", &Var0, 10);
									func_757(iParam2, 1);
									iLocal_256 = 1;
								}
							}
						}
					}
				}
			}
			else if (!__LIB_1__::func_13(&iLocal_212))
			{
				__LIB_15__::func_248(&iLocal_212);
			}
			else if (__LIB_2__::func_572(&iLocal_212) >= 0f)
			{
				if (!__LIB_1__::func_490(iLocal_218, 1))
				{
					func_67("SPR_EXIT_WARN", 10000, 0, &iLocal_217, 128);
					if (__LIB_0__::func_501("SPR_EXIT_WARN", 0, 0))
					{
						func_757(&iLocal_218, 1);
					}
				}
			}
		}
		else
		{
			iLocal_256 = 0;
		}
	}
}

void func_67(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4BCE
{
	if (__LIB_36__::func_722(*iParam3, iParam4))
	{
		return;
	}
	__LIB_0__::func_229(sParam0, iParam1, iParam2);
	__LIB_0__::func_989(iParam3, iParam4);
}

void func_73(var uParam0, bool bParam1, bool bParam2)//Position - 0x4E4F
{
	if (bParam1)
	{
		func_74(bParam2, uParam0);
	}
}

void func_74(bool bParam0, var uParam1)//Position - 0x4E64
{
	if (func_80(bParam0))
	{
		return;
	}
	else
	{
		if (__LIB_0__::func_75())
		{
		}
		func_75(bParam0, uParam1);
	}
}

void func_75(bool bParam0, var uParam1)//Position - 0x4E8A
{
	int iVar0;
	var uVar1;
	var uVar2;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
	if (iVar0 > 2000)
	{
		MemCopy(&uVar2, {func_78(func_79(bParam0), uParam1->f_3605, &uVar1)}, 4);
		if (bParam0)
		{
			func_77();
		}
		else
		{
			func_76();
		}
		uParam1->f_3605 = uVar1;
	}
}

void func_76()//Position - 0x4ED1
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "MICHAEL_NORMAL", 10);
			break;
		case 1:
			__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "FRANKLIN_NORMAL", 10);
			break;
		case 2:
			__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "RACE_RANKDOWN", "TREVOR_NORMAL", 10);
			break;
	}
}

void func_77()//Position - 0x4F33
{
	switch (__LIB_0__::func_683())
	{
		case 0:
			__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "MICHAEL_NORMAL", 10);
			break;
		case 1:
			__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "FRANKLIN_NORMAL", 10);
			break;
		case 2:
			__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "RACE_RANKUP", "TREVOR_NORMAL", 10);
			break;
	}
}

struct<6> func_78(struct<6> Param0, int iParam1, var uParam2)//Position - 0x4F95
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_683();
	StringConCat(&Param0, "_", 24);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	while (iVar1 == iParam1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, 6);
	}
	*uParam2 = iVar1;
	switch (iVar1)
	{
		case 1:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 1, 24);
					break;
				case 2:
					StringIntConCat(&Param0, 6, 24);
					break;
				case 1:
					StringIntConCat(&Param0, 11, 24);
					break;
			}
			break;
		case 2:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 2, 24);
					break;
				case 2:
					StringIntConCat(&Param0, 7, 24);
					break;
				case 1:
					StringIntConCat(&Param0, 12, 24);
					break;
			}
			break;
		case 3:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 3, 24);
					break;
				case 2:
					StringIntConCat(&Param0, 8, 24);
					break;
				case 1:
					StringIntConCat(&Param0, 13, 24);
					break;
			}
			break;
		case 4:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 4, 24);
					break;
				case 2:
					StringIntConCat(&Param0, 9, 24);
					break;
				case 1:
					StringIntConCat(&Param0, 14, 24);
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					StringIntConCat(&Param0, 5, 24);
					break;
				case 2:
					StringIntConCat(&Param0, 10, 24);
					break;
				case 1:
					StringIntConCat(&Param0, 15, 24);
					break;
			}
			break;
	}
	return Param0;
}

struct<6> func_79(bool bParam0)//Position - 0x50FF
{
	struct<6> Var0;
	if (bParam0)
	{
		StringCopy(&Var0, "Rankup", 24);
	}
	else
	{
		StringCopy(&Var0, "Rankdn", 24);
	}
	return Var0;
}

int func_80(bool bParam0)//Position - 0x5123
{
	struct<6> Var0;
	struct<6> Var1;
	if (__LIB_0__::func_75())
	{
		Var1 = { __LIB_0__::func_486() };
		Var0 = { func_79(bParam0) };
		if (MISC::ARE_STRINGS_EQUAL(&Var1, &Var0))
		{
			return 1;
		}
	}
	return 0;
}

void func_82(bool bParam0)//Position - 0x5178
{
	if (__LIB_0__::func_683() == 1)
	{
		if (bParam0)
		{
			PLAYER::SPECIAL_ABILITY_CHARGE_SMALL(PLAYER::PLAYER_ID(), true, true, 0);
		}
	}
}

int func_83(var uParam0, var uParam1)//Position - 0x5198
{
	int iVar0;
	iVar0 = 0;
	if (__LIB_2__::func_572(&(uParam0->f_5)) > 10f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_8, false))
		{
			iLocal_447 = uParam0->f_396[0 /*203*/].f_12;
			if (iLocal_446 != -1 && iLocal_446 != 0)
			{
				if (iLocal_447 != iLocal_446)
				{
					iVar0 = 1;
					if (iLocal_447 < iLocal_446)
					{
						*uParam1 = 1;
					}
					else
					{
						*uParam1 = 0;
					}
					iLocal_446 = iLocal_447;
				}
			}
			else
			{
				iLocal_446 = iLocal_447;
			}
		}
	}
	return iVar0;
}

void func_85(int iParam0)//Position - 0x521F
{
	if (__LIB_2__::func_572(&(iParam0->f_5)) > 15f)
	{
		if (Local_47.f_0 == 2)
		{
			if (ENTITY::GET_ENTITY_SPEED(iParam0->f_396[0 /*203*/].f_8) < 0.75f)
			{
				if (!__LIB_1__::func_13(&iLocal_209))
				{
					__LIB_15__::func_248(&iLocal_209);
				}
				else if (__LIB_2__::func_572(&iLocal_209) > 60f)
				{
					if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
					{
						if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
						{
							HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
						}
					}
					if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
					{
						if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
						{
							HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
						}
					}
					__LIB_1__::func_12(&iLocal_209);
					__LIB_1__::func_31(&iLocal_203);
					iParam0->f_2 = 0;
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					Local_47.f_445 = 3;
					__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
					iParam0->f_396[0 /*203*/].f_23 = 0;
				}
				else if (__LIB_2__::func_572(&iLocal_209) > 30f)
				{
					if (!__LIB_1__::func_490(iLocal_216, 32))
					{
						func_86("SPR_IDLE_WARN", &iLocal_216, 32, 0);
					}
				}
			}
			else if (__LIB_1__::func_13(&iLocal_209))
			{
				__LIB_38__::func_475(&iLocal_216, 32);
				__LIB_1__::func_31(&iLocal_209);
			}
		}
		else if (ENTITY::GET_ENTITY_SPEED(iParam0->f_396[0 /*203*/].f_9) < 5f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_1__::func_13(&iLocal_209))
			{
				__LIB_15__::func_248(&iLocal_209);
			}
			else if (__LIB_2__::func_572(&iLocal_209) > 60f)
			{
				if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
					}
				}
				if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
					}
				}
				__LIB_1__::func_31(&iLocal_209);
				__LIB_1__::func_31(&iLocal_203);
				iParam0->f_2 = 0;
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				HUD::CLEAR_HELP(true);
				Local_47.f_445 = 3;
				__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
				iParam0->f_396[0 /*203*/].f_23 = 0;
			}
			else if (__LIB_2__::func_572(&iLocal_209) > 30f)
			{
				if (!__LIB_1__::func_490(iLocal_216, 32))
				{
					func_86("SPR_IDLE_WARN", &iLocal_216, 32, 0);
				}
			}
		}
		else if (__LIB_1__::func_13(&iLocal_209))
		{
			__LIB_38__::func_475(&iLocal_216, 32);
			__LIB_1__::func_31(&iLocal_209);
		}
	}
	else if (__LIB_1__::func_13(&iLocal_209))
	{
		__LIB_38__::func_475(&iLocal_216, 32);
		__LIB_1__::func_31(&iLocal_209);
	}
}

void func_86(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x5522
{
	if (__LIB_36__::func_722(*iParam1, iParam2))
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
	__LIB_0__::func_989(iParam1, iParam2);
}

void func_90(int iParam0)//Position - 0x55D4
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9, false))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_396[0 /*203*/].f_9))
		{
			if (!__LIB_1__::func_13(&iLocal_206))
			{
				__LIB_15__::func_248(&iLocal_206);
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam0->f_396[0 /*203*/].f_8, iParam0->f_396[0 /*203*/].f_9, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iParam0->f_396[0 /*203*/].f_9, joaat("sanchez")))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_396[0 /*203*/].f_9))
					{
						if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0->f_396[0 /*203*/].f_9, 3, 1500) || __LIB_2__::func_572(&iLocal_206) >= 4f)
						{
							__LIB_1__::func_31(&iLocal_206);
							__LIB_1__::func_31(&iLocal_203);
							if (!__LIB_0__::func_1("SPR_HELP_DIST"))
							{
								__LIB_0__::func_190("SPR_HELP_DIST");
								Local_47.f_367 = 1;
							}
						}
					}
					else if (__LIB_2__::func_572(&iLocal_206) >= 5f)
					{
						__LIB_1__::func_31(&iLocal_206);
						__LIB_1__::func_31(&iLocal_203);
						if (!__LIB_0__::func_1("SPR_HELP_DIST"))
						{
							__LIB_0__::func_190("SPR_HELP_DIST");
							Local_47.f_367 = 1;
						}
					}
				}
				else if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0->f_396[0 /*203*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0->f_396[0 /*203*/].f_9, 3, 1500) || __LIB_2__::func_572(&iLocal_206) >= 4f)
					{
						__LIB_1__::func_31(&iLocal_206);
						__LIB_1__::func_31(&iLocal_203);
						if (!__LIB_0__::func_1("SPR_HELP_DIST"))
						{
							__LIB_0__::func_190("SPR_HELP_DIST");
							Local_47.f_367 = 1;
						}
					}
				}
				else if (__LIB_2__::func_572(&iLocal_206) >= 5f)
				{
					__LIB_1__::func_31(&iLocal_206);
					__LIB_1__::func_31(&iLocal_203);
					if (!__LIB_0__::func_1("SPR_HELP_DIST"))
					{
						__LIB_0__::func_190("SPR_HELP_DIST");
						Local_47.f_367 = 1;
					}
				}
			}
			else if (__LIB_2__::func_572(&iLocal_206) >= 5f)
			{
				__LIB_1__::func_31(&iLocal_206);
				__LIB_1__::func_31(&iLocal_203);
				if (!__LIB_0__::func_1("SPR_HELP_DIST"))
				{
					__LIB_0__::func_190("SPR_HELP_DIST");
					Local_47.f_367 = 1;
				}
			}
		}
		else if (__LIB_1__::func_13(&iLocal_206))
		{
			if ((__LIB_0__::func_1("SPR_HELP_DIST") && Local_47.f_367) && !Local_47.f_368)
			{
				Local_47.f_367 = 0;
				HUD::CLEAR_HELP(true);
			}
			else if (Local_47.f_367)
			{
				Local_47.f_367 = 0;
			}
			__LIB_1__::func_31(&iLocal_206);
		}
	}
}

void func_92(int iParam0)//Position - 0x580C
{
	bool bVar0;
	int iVar1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iParam0->f_396)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[iVar1 /*203*/].f_8))
		{
			if ((((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("WEAPON_EXPLOSION"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("WEAPON_GRENADE"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("WEAPON_GRENADELAUNCHER"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("WEAPON_STICKYBOMB"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("WEAPON_RPG"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("WEAPON_MOLOTOV"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_8, joaat("WEAPON_PROXMINE"), 0))
			{
				bVar0 = true;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_396[iVar1 /*203*/].f_9))
		{
			if ((((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("WEAPON_EXPLOSION"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("WEAPON_GRENADE"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("WEAPON_GRENADELAUNCHER"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("WEAPON_STICKYBOMB"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("WEAPON_RPG"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("WEAPON_MOLOTOV"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0->f_396[iVar1 /*203*/].f_9, joaat("WEAPON_PROXMINE"), 0))
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
			}
		}
		if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
			}
		}
		__LIB_1__::func_12(&iLocal_209);
		__LIB_1__::func_31(&iLocal_203);
		iParam0->f_2 = 0;
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		Local_47.f_445 = 1;
		__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
		iParam0->f_396[0 /*203*/].f_23 = 0;
	}
}

void func_93(int iParam0)//Position - 0x5AA6
{
	int iVar0;
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
			}
		}
		if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
		{
			if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
			{
				HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
			}
		}
		__LIB_1__::func_31(&iLocal_203);
		iParam0->f_2 = 0;
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		Local_47.f_445 = 1;
		__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
		iParam0->f_396[0 /*203*/].f_23 = 0;
	}
	else if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(6);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
		{
			if (iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					iParam0->f_3591 = 1;
					return;
				}
			}
		}
	}
}

void func_94(int iParam0, int* iParam1)//Position - 0x5BE4
{
	if (iParam0->f_2)
	{
		if ((Local_47.f_0 == 2 && iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 != 6) && iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 != 10)
		{
			return;
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_396[0 /*203*/].f_9, false))
		{
			__LIB_1__::func_31(&iLocal_203);
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
			}
			if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
				}
			}
			if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
				{
					HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
				}
			}
			iParam0->f_2 = 0;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			Local_47.f_445 = 2;
			__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
			iParam0->f_396[0 /*203*/].f_23 = 0;
		}
	}
}

void func_95(int iParam0, int* iParam1)//Position - 0x5D22
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_9, false) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_396[0 /*203*/].f_8, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iParam0->f_396[0 /*203*/].f_8, iParam0->f_396[0 /*203*/].f_9, false))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iParam0->f_396[0 /*203*/].f_9))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam1))
				{
					*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(iParam0->f_396[0 /*203*/].f_9);
					HUD::SET_BLIP_COLOUR(*iParam1, 3);
					if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
					{
						__LIB_13__::func_808(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6));
						__LIB_39__::func_711(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_7));
					}
					if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 2))
					{
						__LIB_13__::func_808(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6));
						__LIB_39__::func_711(&(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_7));
					}
				}
				if (!__LIB_1__::func_13(&iLocal_212))
				{
					__LIB_15__::func_248(&iLocal_212);
				}
				else
				{
					if (__LIB_2__::func_572(&iLocal_212) >= 1f)
					{
						HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(false);
						if (!__LIB_1__::func_490(iLocal_217, 128))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								func_67("SPR_EXIT_WARN", 10000, 0, &iLocal_217, 128);
								func_757(&iLocal_218, 1);
							}
						}
					}
					if (__LIB_2__::func_572(&iLocal_212) >= 3f)
					{
						if (!__LIB_1__::func_490(iLocal_217, 32768))
						{
							if (!__LIB_0__::func_1("SPR_HELP_DIST_2") && !__LIB_0__::func_1("SPR_HELP_DIST"))
							{
								HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(true);
								func_86("SPR_HELP_DIST_2", &iLocal_217, 32768, 0);
							}
						}
					}
					if (__LIB_2__::func_572(&iLocal_212) >= 35f)
					{
						__LIB_1__::func_12(&iLocal_212);
						if (__LIB_0__::func_1("SPR_IDLE_WARN"))
						{
							HUD::CLEAR_HELP(true);
						}
						__LIB_1__::func_31(&iLocal_203);
						if (HUD::DOES_BLIP_EXIST(*iParam1))
						{
							HUD::REMOVE_BLIP(iParam1);
							if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
							{
								if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
								{
									HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 4);
								}
							}
							if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
							{
								if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
								{
									HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 4);
								}
							}
						}
						iParam0->f_2 = 0;
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						Local_47.f_445 = 4;
						__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
						iParam0->f_396[0 /*203*/].f_23 = 0;
					}
				}
			}
		}
		else
		{
			__LIB_1__::func_12(&iLocal_212);
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
				if (!__LIB_1__::func_490(iLocal_216, 8))
				{
					func_757(&iLocal_216, 8);
				}
			}
			__LIB_1__::func_12(&iLocal_212);
			if (__LIB_0__::func_501("SPR_EXIT_WARN", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_EXIT_WARN");
			}
			if (__LIB_0__::func_501("SPR_EXIT_FAIL", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_EXIT_FAIL");
			}
			if (__LIB_1__::func_490(iLocal_217, 128))
			{
				__LIB_38__::func_475(&iLocal_217, 128);
			}
			if (__LIB_1__::func_490(iLocal_217, 32768))
			{
				__LIB_38__::func_475(&iLocal_217, 32768);
			}
			if (__LIB_1__::func_490(iLocal_217, 256))
			{
				__LIB_38__::func_475(&iLocal_217, 256);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_396[0 /*203*/].f_9, false))
		{
			if (__LIB_0__::func_501("SPR_EXIT_WARN", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_EXIT_WARN");
			}
			__LIB_1__::func_12(&iLocal_212);
			__LIB_1__::func_31(&iLocal_203);
			if (HUD::DOES_BLIP_EXIST(*iParam1))
			{
				HUD::REMOVE_BLIP(iParam1);
				if (iParam0->f_396[0 /*203*/].f_11 <= (iParam0->f_17 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 /*11*/].f_6, 0);
					}
				}
				if (iParam0->f_396[0 /*203*/].f_11 + 1 <= (iParam0->f_17 - 2))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6))
					{
						HUD::SET_BLIP_DISPLAY(iParam0->f_32[iParam0->f_396[0 /*203*/].f_11 + 1 /*11*/].f_6, 0);
					}
				}
			}
			iParam0->f_2 = 0;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			Local_47.f_445 = 4;
			__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
			iParam0->f_396[0 /*203*/].f_23 = 0;
		}
	}
	else if (__LIB_0__::func_501("SPR_EXIT_WARN", 0, 0))
	{
		HUD::CLEAR_PRINTS();
	}
}

void func_98(int iParam0)//Position - 0x61D7
{
	if (iParam0->f_2)
	{
		func_102(iParam0);
		func_99(iParam0);
	}
}

void func_99(var uParam0)//Position - 0x61F2
{
	int iVar0;
	int iVar1;
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_396[0 /*203*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_396[0 /*203*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_47.f_0 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_396[0 /*203*/].f_9, false))
				{
					bLocal_215 = true;
				}
			}
			if (bLocal_215)
			{
				if (uParam0->f_32[uParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 == 6 || uParam0->f_32[uParam0->f_396[0 /*203*/].f_11 /*11*/].f_8 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_67("SPR_HELP_DAMG", 5000, 0, &iLocal_217, 2);
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
			func_67("SPR_HELP_DAMG", 5000, 0, &iLocal_217, 2);
		}
	}
	if (Local_47.f_0 == 1)
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
			func_67("SPR_HELP_DAMG", 5000, 0, &iLocal_217, 2);
		}
	}
}

void func_102(var uParam0)//Position - 0x638C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	bool bVar6;
	Var0 = { uParam0->f_32[uParam0->f_396[0 /*203*/].f_11 /*11*/] };
	if (uParam0->f_396[0 /*203*/].f_11 > 0)
	{
		Var1 = { uParam0->f_32[(uParam0->f_396[0 /*203*/].f_11 - 1) /*11*/] };
	}
	else
	{
		Var1 = { Local_47.f_4 };
	}
	fVar2 = 75f;
	Var3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, true) };
	Var4 = { MISC::GET_CLOSEST_POINT_ON_LINE(Var3, Var1, Var0, true) };
	fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var4, Var3, true);
	bVar6 = fVar5 >= fVar2;
	if (Local_47.f_0 == 1)
	{
		if (MISC::ABSF((Var4.f_2 - Var3.f_2)) > 15f)
		{
			bVar6 = true;
		}
	}
	if (bVar6)
	{
		if (!__LIB_1__::func_13(&(Local_47.f_377)))
		{
			__LIB_1__::func_362(&(Local_47.f_377));
		}
		if ((!uParam0->f_3623 && !Local_47.f_365) && __LIB_2__::func_572(&(Local_47.f_377)) >= 20f)
		{
			__LIB_1__::func_31(&iLocal_203);
			uParam0->f_2 = 0;
			uParam0->f_396[0 /*203*/].f_23 = 0;
			uParam0->f_3622 = 0;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			Local_47.f_445 = 0;
			__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
		}
		else
		{
			if (!__LIB_0__::func_1("SPR_HELP_DIST_2") && !__LIB_0__::func_1("SPR_HELP_DIST"))
			{
				Local_47.f_368 = 1;
				__LIB_0__::func_190("SPR_HELP_DIST");
			}
			func_67("SPR_HELP_WARN", 20000, 0, &iLocal_217, 4);
		}
	}
	else
	{
		if (__LIB_1__::func_13(&(Local_47.f_377)))
		{
			__LIB_1__::func_12(&(Local_47.f_377));
		}
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if ((__LIB_0__::func_1("SPR_HELP_DIST") && Local_47.f_368) && !Local_47.f_367)
		{
			Local_47.f_368 = 0;
			HUD::CLEAR_HELP(true);
		}
		else if (Local_47.f_368)
		{
			Local_47.f_368 = 0;
		}
		if (__LIB_1__::func_490(iLocal_217, 4))
		{
			__LIB_38__::func_475(&iLocal_217, 4);
		}
	}
}

void func_103(int iParam0, int iParam1, int iParam2, struct<3> Param3, var uParam4, int iParam5)//Position - 0x6577
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (Local_47.f_0 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2, false))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iParam2, Param3, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam2), 1, 0, 786468, 5f, -1f);
			}
		}
		else if (Local_47.f_0 == 2)
		{
			uParam4 = uParam4;
			func_104(iParam0, Param3, iParam5);
		}
	}
}

void func_104(var uParam0, struct<3> Param1, var uParam2)//Position - 0x65CE
{
	uParam0->f_17 = uParam0->f_17;
	Param1 = { Param1 };
	uParam2 = uParam2;
}

void func_105(var uParam0, bool bParam1)//Position - 0x65EA
{
	char cVar0[32];
	struct<3> Var1;
	MemCopy(&cVar0, {Local_436}, 8);
	StringIntConCat(&cVar0, uParam0->f_12, 32);
	if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
	{
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_10))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_10));
		}
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
			}
			else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
			{
				if (!bParam1)
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_8, uParam0->f_9, &cVar0, 786469, 0, 8, -1, -1f, false, 2f);
				}
				else
				{
					PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true), &Var1, 1, 3f, 0f);
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_8, uParam0->f_9, Var1, 14f, 1, uParam0->f_22, 786469, 10f, -1f);
					PED::SET_PED_KEEP_TASK(uParam0->f_8, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
				}
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_8, uParam0->f_9, Local_434[(uParam0->f_12 - 1) /*3*/], 10f, 0, 0, 786469, 0.5f, -1f);
			}
		}
	}
}

void func_108(int iParam0, int iParam1)//Position - 0x673D
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_110(&(iParam0->f_32[iParam1 /*11*/]));
	func_109(&(iParam0->f_32[iParam1 /*11*/].f_7), &(iParam0->f_11), &(iParam0->f_14), iParam0->f_32[iParam1 /*11*/].f_8 == 1);
	if (iParam1 + 1 < iParam0->f_17)
	{
		func_110(&(iParam0->f_32[iParam1 + 1 /*11*/]));
		__LIB_39__::func_711(&(iParam0->f_32[iParam1 + 1 /*11*/].f_7));
	}
}

void func_109(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x67B1
{
	__LIB_39__::func_711(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam1, 255, 255, 255, *uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam1, 255, 255, 255, *uParam2);
	}
}

void func_110(var uParam0)//Position - 0x67FA
{
	__LIB_13__::func_808(&(uParam0->f_6));
}

void func_111(var uParam0, var uParam1)//Position - 0x680A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	if (uParam0->f_7 != 0)
	{
		iVar4 = __LIB_1__::func_577();
		__LIB_21__::func_969(__LIB_19__::func_216(iVar4), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_7, iVar0, iVar1, iVar2, __LIB_38__::func_473(*uParam0, 220, 255));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_7, iVar0, iVar1, iVar2, __LIB_38__::func_473(*uParam0, 70, 240));
	}
	if (uParam1->f_7 != 0)
	{
		iVar5 = __LIB_1__::func_577();
		__LIB_21__::func_969(__LIB_19__::func_216(iVar5), &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_7, iVar0, iVar1, iVar2, __LIB_38__::func_473(*uParam1, 220, 255));
		HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_7, iVar0, iVar1, iVar2, __LIB_38__::func_473(*uParam1, 70, 240));
	}
}

int func_117(int iParam0, var uParam1, var uParam2, int iParam3)//Position - 0x69D6
{
	var uVar0;
	uVar0 = uVar0;
	return func_118(uParam1, iParam3);
}

int func_118(var uParam0, int iParam1)//Position - 0x69EA
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	struct<3> Var4;
	fVar3 = 5f;
	if (uParam0->f_3 < 15f)
	{
		fVar3 = uParam0->f_3;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (iParam1 != PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_0__::func_724(iParam1, *uParam0, 1) <= (7.5f * fVar3))
			{
				if (uParam0->f_8 == 0 || uParam0->f_8 == 1)
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - *uParam0 };
					Var2 = { -SYSTEM::SIN(uParam0->f_4), SYSTEM::COS(uParam0->f_4), 0f };
					fVar0 = __LIB_0__::func_158(Var1, Var2);
					if (fVar0 >= 0f)
					{
						return 0;
					}
				}
			}
		}
		Var4 = { (7.5f * 2.3f), (7.5f * 2.3f), 7.5f };
		if ((iParam1 == PLAYER::PLAYER_PED_ID() && PED::IS_PED_IN_ANY_VEHICLE(iParam1, false)) && ENTITY::IS_ENTITY_AT_COORD(iParam1, *uParam0, Var4, false, true, 0))
		{
			if (uParam0->f_8 == 0 || uParam0->f_8 == 1)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) - *uParam0 };
				Var2 = { -SYSTEM::SIN(uParam0->f_4), SYSTEM::COS(uParam0->f_4), 0f };
				fVar0 = __LIB_0__::func_158(Var1, Var2);
				if (fVar0 >= 0f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_226, "HUD_MINI_GAME_SOUNDSET", true);
					return 0;
				}
			}
		}
	}
	return -1;
}

void func_121(var uParam0, int iParam1)//Position - 0x6B8F
{
	int iVar0;
	int iVar1;
	struct<203> Var2;
	float fVar3;
	float fVar4;
	if (iParam1 < 0 || iParam1 > (uParam0->f_18 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_18;
	Var2 = { uParam0->f_396[iParam1 /*203*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_18)
	{
		if (Var2.f_8 != uParam0->f_396[iVar1 /*203*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar1 /*203*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8, false))
			{
				if (Var2.f_11 > uParam0->f_396[iVar1 /*203*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_396[iVar1 /*203*/].f_11)
				{
					fVar3 = __LIB_2__::func_485(Var2.f_8, uParam0->f_32[Var2.f_11 /*11*/], 1);
					fVar4 = __LIB_2__::func_485(uParam0->f_396[iVar1 /*203*/].f_8, uParam0->f_32[uParam0->f_396[iVar1 /*203*/].f_11 /*11*/], 1);
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
	uParam0->f_396[iParam1 /*203*/].f_12 = iVar0;
}

void func_124(var uParam0, int iParam1)//Position - 0x6F60
{
	if ((func_125(uParam0, iParam1) && !uParam0->f_396[iParam1 /*203*/].f_193) && (VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_396[iParam1 /*203*/].f_9) || VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_396[iParam1 /*203*/].f_9)))
	{
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uParam0->f_396[iParam1 /*203*/].f_9, true), 7, 1f, true, false, 1f, false);
		uParam0->f_396[iParam1 /*203*/].f_193 = 1;
	}
}

int func_125(var uParam0, int iParam1)//Position - 0x6FD7
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	int iVar3;
	float fVar4;
	char cVar5[16];
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8, false) || ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9, false))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_396[iParam1 /*203*/].f_8, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 1)
	{
		return 0;
	}
	StringCopy(&cVar5, "Offroad_", 16);
	switch (Local_47.f_11)
	{
		case 0:
			StringIntConCat(&cVar5, 1, 16);
			break;
		case 1:
			StringIntConCat(&cVar5, 2, 16);
			break;
		case 2:
			StringIntConCat(&cVar5, 6, 16);
			break;
		case 3:
			StringIntConCat(&cVar5, 3, 16);
			break;
		case 4:
			StringIntConCat(&cVar5, 4, 16);
			break;
		case 5:
			StringIntConCat(&cVar5, 5, 16);
			break;
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar5))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_396[iParam1 /*203*/].f_9, true) };
	iVar2 = TASK::GET_VEHICLE_WAYPOINT_TARGET_POINT(uParam0->f_396[iParam1 /*203*/].f_9);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar5))
	{
		TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(&cVar5, &iVar3);
	}
	if (iVar2 <= 0 || (iVar3 - 1) == iVar2)
	{
		return 0;
	}
	TASK::WAYPOINT_RECORDING_GET_COORD(&cVar5, iVar2, &Var1);
	if (Var0.f_2 < Var1.f_2)
	{
		fVar4 = (Var1.f_2 - Var0.f_2);
		if (fVar4 >= 20f)
		{
			return 1;
		}
	}
	return 0;
}

int func_126(var uParam0, var uParam1, bool bParam2)//Position - 0x711E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<3> Var6;
	var uVar7;
	struct<3> Var8;
	char cVar9[16];
	switch (uParam1->f_23)
	{
		case 0:
			func_160(uParam0);
			__LIB_0__::func_985();
			if (uParam0->f_3591 && !uParam0->f_3592)
			{
				func_158(uParam0);
				uParam0->f_3592 = 1;
			}
			else if (uParam0->f_3591)
			{
			}
			uParam0->f_2 = 0;
			func_157(uParam0);
			if (__LIB_0__::func_501("SPR_HELP_DAMG", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("SPR_HELP_DAMG");
			}
			if (bParam2)
			{
				if (__LIB_40__::func_516(&(uParam0->f_22), &(Local_47.f_446), "SPR_UI_FAILD", func_156(Local_47.f_445), &bVar0, 76, 7, 1, 1097859072, 1))
				{
					if (bVar0)
					{
						uParam0->f_1 = 1;
						if (__LIB_0__::func_501("SPR_RETR_DES", 0, 0))
						{
							HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
						}
						if (!Local_47.f_0 == 2)
						{
							__LIB_0__::func_345(&uLocal_190, 0, 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
								}
							}
							else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							}
						}
						uParam1->f_23 = 4;
						uParam0->f_2 = 0;
						__LIB_0__::func_345(&uLocal_190, 0, 0);
						uParam0->f_396[0 /*203*/].f_11 = 0;
						__LIB_1__::func_12(&(uParam0->f_19));
						iLocal_45 = 0;
						uParam0->f_3620 = 0;
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						iLocal_225 = 0;
					}
					else
					{
						uParam0->f_1 = 0;
						if (!Local_47.f_0 == 2)
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
						}
						if (Local_47.f_11 == 4 && Local_47.f_366)
						{
							if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
							{
								STREAMING::REQUEST_IPL("CS2_06_TriAf02");
							}
						}
						Local_47.f_11 = -1;
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
								}
							}
							else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
							}
						}
						bLocal_187 = true;
						iVar1 = 0;
						while (iVar1 < uParam0->f_18)
						{
							if (iVar1 != 0)
							{
								if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar1 /*203*/].f_10))
								{
									HUD::REMOVE_BLIP(&(uParam0->f_396[iVar1 /*203*/].f_10));
								}
							}
							iVar1++;
						}
						uParam1->f_23 = 12;
					}
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				if (uParam0->f_1 == 1)
				{
					uParam0->f_2 = 0;
				}
			}
			else if (!uParam0->f_2)
			{
				uParam1->f_23 = 13;
			}
			uParam0->f_3622 = 0;
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_32[uParam1->f_11 /*11*/] };
			}
			if (bParam2)
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				__LIB_1__::func_214(&(Local_47.f_153), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_47.f_153), "SPR_UI_RESET", 2, 201, 1, 1, 0);
				__LIB_0__::func_990(&(Local_47.f_153), "FE_HLP16" /* GXT: Exit */, 2, 204, 1, 1, 0);
				__LIB_0__::func_990(&(Local_47.f_153), "SPR_UI_RESTART", 2, 203, 1, 1, 0);
			}
			if (bParam2)
			{
				uParam1->f_23 = 3;
			}
			else
			{
				uParam1->f_23 = 7;
			}
			break;
		case 3:
			uParam0->f_2 = 0;
			if (__LIB_2__::func_572(&iLocal_203) <= 10f)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (bParam2)
				{
					__LIB_2__::func_439(&(Local_47.f_153), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 193 /*INPUT_FRONTEND_RLEFT*/))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						uParam1->f_23 = 4;
						if (!Local_47.f_0 == 2)
						{
							__LIB_0__::func_345(&uLocal_190, 0, 0);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						uParam0->f_2 = 0;
						uParam0->f_396[0 /*203*/].f_11 = 0;
						__LIB_1__::func_12(&(uParam0->f_19));
						iLocal_45 = 0;
						uParam0->f_3620 = 0;
						iLocal_225 = 0;
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
								}
							}
						}
					}
					else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						uParam1->f_23 = 4;
					}
					else if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 192 /*INPUT_FRONTEND_RUP*/))
					{
						uParam0->f_1 = 0;
						if (!Local_47.f_0 == 2)
						{
							__LIB_0__::func_345(&uLocal_190, 0, 0);
						}
						if (Local_47.f_0 == 1)
						{
							if (Local_47.f_11 == 4 && Local_47.f_366)
							{
								if (!STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
								{
									STREAMING::REQUEST_IPL("CS2_06_TriAf02");
								}
							}
							Local_47.f_11 = -1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
									}
								}
							}
							bLocal_187 = true;
							iVar2 = 0;
							while (iVar2 < uParam0->f_18)
							{
								if (iVar2 != 0)
								{
									if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar2 /*203*/].f_10))
									{
										HUD::REMOVE_BLIP(&(uParam0->f_396[iVar2 /*203*/].f_10));
									}
								}
								iVar2++;
							}
							iVar2 = 0;
							while (iVar2 < uParam0->f_17)
							{
								if (HUD::DOES_BLIP_EXIST(uParam0->f_32[iVar2 /*11*/].f_6))
								{
									HUD::REMOVE_BLIP(&(uParam0->f_32[iVar2 /*11*/].f_6));
								}
								iVar2++;
							}
							uParam1->f_23 = 12;
						}
						else
						{
							__LIB_38__::func_589(&iLocal_203, 10f);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
								{
									if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
									}
								}
							}
							HUD::CLEAR_PRINTS();
							HUD::CLEAR_HELP(true);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
							__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
							func_160(uParam0);
							uParam0->f_396[0 /*203*/].f_23 = 0;
						}
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_396[0 /*203*/].f_9, 1);
				}
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_160(uParam0);
				Local_47.f_445 = 3;
				__LIB_38__::func_474(&(Local_47.f_446), 1050253722, 1073741824);
				uParam0->f_396[0 /*203*/].f_23 = 0;
			}
			break;
		case 4:
			uParam0->f_3591 = 0;
			uParam0->f_3592 = 0;
			if (__LIB_39__::func_718(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				uParam1->f_23 = 7;
			}
			break;
		case 5:
			uParam0->f_3591 = 0;
			uParam0->f_3592 = 0;
			uParam0->f_3 = 1;
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			uParam1->f_23 = 7;
			break;
		case 6:
			if (__LIB_39__::func_718(500))
			{
				func_157(uParam0);
				__LIB_1__::func_12(&(uParam0->f_5));
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				uParam1->f_23 = 10;
			}
			break;
		case 7:
			if (uParam0->f_1)
			{
				func_143();
			}
			if (func_140(uParam1, 1))
			{
				if (uParam0->f_1)
				{
					uParam0->f_31 = 14;
				}
				else
				{
					if (bParam2)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					}
					uParam1->f_23 = 8;
				}
			}
			break;
		case 8:
			bVar5 = false;
			iVar3 = 0;
			while (iVar3 < uParam0->f_18)
			{
				if (uParam0->f_396[iVar3 /*203*/].f_8 == uParam1->f_8)
				{
					if (uParam0->f_396[iVar3 /*203*/].f_11 == 0)
					{
						bVar5 = func_139(uParam0, iVar3);
					}
					else
					{
						bVar5 = func_136(uParam0, iVar3, 0);
					}
					iVar4 = iVar3;
				}
				iVar3++;
			}
			if (bVar5)
			{
				if (bParam2)
				{
					if ((uParam0->f_396[iVar4 /*203*/].f_11 - 1) >= 0)
					{
						Var6 = { uParam0->f_32[(uParam0->f_396[iVar4 /*203*/].f_11 - 1) /*11*/] };
						ENTITY::SET_ENTITY_COORDS(uParam0->f_396[iVar4 /*203*/].f_9, Var6, true, false, false, true);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[iVar4 /*203*/].f_9, true);
						STREAMING::LOAD_SCENE(Var6);
						if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var6, &uVar7, false, false))
						{
							Var6.f_2 = uVar7;
							ENTITY::SET_ENTITY_COORDS(uParam0->f_396[iVar4 /*203*/].f_9, Var6, true, false, false, true);
						}
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[iVar4 /*203*/].f_9, false);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					uParam1->f_23 = 11;
				}
				else
				{
					uParam1->f_23 = 9;
				}
			}
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_9, false) && uParam0->f_2)
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam1->f_9) > 1.5f)
				{
					Var8 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_9, true) };
					Var8.f_2 = (Var8.f_2 - (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam1->f_9) + 1.5f));
					ENTITY::SET_ENTITY_COORDS(uParam1->f_9, Var8, true, false, false, true);
				}
				if (uParam1->f_8 != PLAYER::PLAYER_PED_ID())
				{
					StringCopy(&cVar9, "Offroad_", 16);
					switch (Local_47.f_11)
					{
						case 0:
							StringIntConCat(&cVar9, 1, 16);
							break;
						case 1:
							StringIntConCat(&cVar9, 2, 16);
							break;
						case 2:
							StringIntConCat(&cVar9, 6, 16);
							break;
						case 3:
							StringIntConCat(&cVar9, 3, 16);
							break;
						case 4:
							StringIntConCat(&cVar9, 4, 16);
							break;
						case 5:
							StringIntConCat(&cVar9, 5, 16);
							break;
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_8, uParam1->f_9, &cVar9, 786468, 0, 24, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1->f_9), false, 2f);
				}
			}
			uParam1->f_23 = 13;
			break;
		case 10:
			if (Local_47.f_0 == 0)
			{
				func_135(uParam1, 1);
				STREAMING::LOAD_SCENE(Local_47.f_4);
			}
			func_134(uParam1, Local_47.f_4, Local_47.f_7, 0f);
			uParam1->f_23 = 12;
			break;
		case 11:
			uParam0->f_2 = 1;
			if (Local_47.f_0 == 0)
			{
				func_133(&(uParam0->f_396[iVar3 /*203*/]), 60f, 0);
			}
			if (__LIB_39__::func_725(500))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(uParam0->f_396[0 /*203*/].f_8, uParam0->f_396[0 /*203*/].f_9, false) && !Local_47.f_0 == 2)
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_396[0 /*203*/].f_8, uParam0->f_396[0 /*203*/].f_9, -1);
					}
				}
				if (bParam2 && Local_47.f_0 == 0)
				{
					func_132(&(uParam0->f_396[0 /*203*/]), 5f);
				}
				uParam1->f_23 = 13;
			}
			return 0;
			break;
		case 12:
			bLocal_187 = true;
			if (__LIB_39__::func_725(500))
			{
				uParam0->f_31 = 14;
			}
			return 0;
			break;
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8, false))
				{
					if (func_131(uParam1))
					{
						if (uParam1->f_8 != PLAYER::PLAYER_PED_ID())
						{
							__LIB_1__::func_31(&iLocal_203);
							uParam1->f_23 = 2;
							return 1;
						}
					}
					else if (uParam1->f_8 != PLAYER::PLAYER_PED_ID())
					{
						if (func_129(uParam0, uParam1))
						{
							func_127(uParam0, uParam1);
						}
					}
				}
			}
			return 0;
			break;
		case 14:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			}
			func_157(uParam0);
			__LIB_1__::func_12(&(uParam0->f_5));
			uParam0->f_31 = 14;
			break;
	}
	return 1;
}

void func_127(var uParam0, var uParam1)//Position - 0x7BD3
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	char cVar3[16];
	float fVar4;
	float fVar5;
	StringCopy(&cVar3, "Offroad_", 16);
	switch (Local_47.f_11)
	{
		case 0:
			StringIntConCat(&cVar3, 1, 16);
			break;
		case 1:
			StringIntConCat(&cVar3, 2, 16);
			break;
		case 2:
			StringIntConCat(&cVar3, 6, 16);
			break;
		case 3:
			StringIntConCat(&cVar3, 3, 16);
			break;
		case 4:
			StringIntConCat(&cVar3, 4, 16);
			break;
		case 5:
			StringIntConCat(&cVar3, 5, 16);
			break;
	}
	if ((uParam0->f_396[0 /*203*/].f_11 - (uParam0->f_3606 - 1)) <= 0)
	{
		return;
	}
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(&cVar3, uParam0->f_32[((uParam0->f_396[0 /*203*/].f_11 - uParam0->f_3606) - 1) /*11*/], &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&cVar3, iVar0, &Var1);
	fVar4 = __LIB_0__::func_76(uParam1->f_9, PLAYER::PLAYER_PED_ID(), 0);
	fVar5 = __LIB_0__::func_724(PLAYER::PLAYER_PED_ID(), Var1, 0);
	if (fVar5 > 10f)
	{
		if (fVar4 > 75f && !CAM::IS_SPHERE_VISIBLE(Var1, 3f))
		{
			if (fVar4 > 75f && !CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uParam1->f_9, true), 3f))
			{
				if (!VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var1, 5f) || __LIB_0__::func_724(uParam1->f_9, Var1, 1) < 5f)
				{
					uParam1->f_11 = ((uParam0->f_396[0 /*203*/].f_11 - uParam0->f_3606) - 1);
					TASK::WAYPOINT_RECORDING_GET_COORD(&cVar3, iVar0 + 1, &uVar2);
					ENTITY::SET_ENTITY_COORDS(uParam1->f_9, Var1, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam1->f_9, uParam0->f_32[uParam1->f_11 /*11*/].f_4);
					if (!PED::IS_PED_IN_VEHICLE(uParam1->f_8, uParam1->f_9, false))
					{
						PED::SET_PED_INTO_VEHICLE(uParam1->f_8, uParam1->f_9, -1);
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam1->f_8, uParam1->f_9, &cVar3, 786468, iVar0, 16, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1->f_9), false, 2f);
				}
			}
		}
	}
}

int func_129(var uParam0, var uParam1)//Position - 0x7DF2
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (uParam1->f_8 == PLAYER::PLAYER_PED_ID())
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_396[0 /*203*/].f_9, false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = uParam0->f_396[0 /*203*/].f_11;
			iVar1 = uParam1->f_11;
			if ((iVar0 - iVar1) >= uParam0->f_3607 && ENTITY::IS_ENTITY_OCCLUDED(uParam1->f_9))
			{
				if (!__LIB_1__::func_13(&(uParam0->f_3612)))
				{
					__LIB_1__::func_31(&(uParam0->f_3612));
				}
				else if (__LIB_2__::func_572(&(uParam0->f_3612)) < 0.8f)
				{
					return 0;
				}
				else
				{
					__LIB_1__::func_31(&(uParam0->f_3612));
				}
				iVar2 = ((iVar0 - 1) - uParam0->f_3606);
				iVar2 = __LIB_0__::func_340(iVar2, 0, uParam0->f_17);
				uParam1->f_11 = iVar2;
				return 1;
			}
		}
	}
	return 0;
}

int func_131(var uParam0)//Position - 0x7EE7
{
	if (uParam0->f_22 != 0)
	{
		if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
			{
				return 1;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, false))
			{
				return 1;
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
			{
				return 1;
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, false))
			{
				return 1;
			}
		}
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_9) <= 10f)
				{
					if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
					{
						if (!__LIB_1__::func_13(&(uParam0->f_189)))
						{
							__LIB_1__::func_362(&(uParam0->f_189));
						}
						if ((__LIB_2__::func_572(&(uParam0->f_189)) > 5f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_8, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 225f) && ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_9))
						{
							__LIB_1__::func_12(&(uParam0->f_189));
							return 1;
						}
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 0, 5000))
					{
						return 1;
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 1, 20000))
					{
						return 1;
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 2, 30000))
					{
						return 1;
					}
					if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 3, 60000))
					{
						return 1;
					}
				}
				else if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
				{
					if (__LIB_1__::func_13(&(uParam0->f_189)))
					{
						__LIB_1__::func_12(&(uParam0->f_189));
					}
				}
			}
		}
		else if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			if (__LIB_1__::func_13(&(uParam0->f_189)))
			{
				__LIB_1__::func_12(&(uParam0->f_189));
			}
		}
	}
	return 0;
}

void func_132(var uParam0, float fParam1)//Position - 0x8068
{
	uParam0->f_15 = uParam0->f_15;
	fParam1 = fParam1;
}

void func_133(var uParam0, float fParam1, int iParam2)//Position - 0x807C
{
	uParam0->f_19 = uParam0->f_19;
	fParam1 = fParam1;
	iParam2 = iParam2;
}

void func_134(var uParam0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x8094
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false) || !PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_8, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_8, fParam2);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, fParam2);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam3);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 5f);
	}
	if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
	{
	}
}

int func_135(var uParam0, bool bParam1)//Position - 0x8116
{
	int iVar0;
	struct<3> Var1;
	if (bParam1)
	{
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000, 0);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		FIRE::STOP_ENTITY_FIRE(uParam0->f_9);
		if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
		{
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			iVar0 = uParam0->f_9;
		}
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		else
		{
			uParam0->f_9 = VEHICLE::CREATE_VEHICLE(uParam0->f_22, uParam0->f_16, uParam0->f_19, true, true, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_9, true);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
			ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000, 0);
			FIRE::STOP_ENTITY_FIRE(uParam0->f_9);
		}
		if (uParam0->f_8 == PLAYER::PLAYER_PED_ID())
		{
			if (Local_47.f_0 == 1)
			{
				if (iLocal_220 == 0 || iLocal_220 == -1)
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_9, iLocal_220);
				}
				if (uParam0->f_22 == joaat("mesa"))
				{
					if (iLocal_221 == 1)
					{
						if (VEHICLE::DOES_EXTRA_EXIST(uParam0->f_9, 1))
						{
							if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0->f_9, 1))
							{
								VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_9, 1, true);
							}
						}
					}
					else if (VEHICLE::DOES_EXTRA_EXIST(uParam0->f_9, 1))
					{
						if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(uParam0->f_9, 1))
						{
							VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_9, 1, false);
						}
					}
				}
			}
		}
		if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) <= 10f)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 5f);
			if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) > 1.5f)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_9, true) };
				Var1.f_2 = (Var1.f_2 - (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) + 1.5f));
				ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Var1, true, false, false, true);
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
		{
			return 0;
		}
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, true, true, false);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9, 5f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_8, 3);
		VEHICLE::SET_VEHICLE_IS_RACING(uParam0->f_9, true);
		PED::SET_DRIVER_ABILITY(uParam0->f_8, 1f);
		PED::SET_DRIVER_AGGRESSIVENESS(uParam0->f_8, 1f);
		PED::SET_DRIVER_RACING_MODIFIER(uParam0->f_8, 1f);
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, false);
	}
	if (uParam0->f_20 <= 3)
	{
		Local_47.f_1 = uParam0->f_9;
		VEHICLE::SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(uParam0->f_9, false);
	}
	return 1;
}

int func_136(var uParam0, int iParam1, bool bParam2)//Position - 0x838F
{
	struct<3> Var0;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9, false))
	{
		return 0;
	}
	Var0 = { uParam0->f_32[(uParam0->f_396[iParam1 /*203*/].f_11 - 1) /*11*/] };
	if ((func_138(uParam0, iParam1, Var0, 5f) || (uParam0->f_396[iParam1 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && CAM::IS_SPHERE_VISIBLE(Var0, 10f))) || (uParam0->f_396[iParam1 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && ENTITY::IS_ENTITY_VISIBLE(uParam0->f_396[iParam1 /*203*/].f_9)))
	{
		if (!__LIB_1__::func_13(&(uParam0->f_396[iParam1 /*203*/].f_198)))
		{
			__LIB_1__::func_362(&(uParam0->f_396[iParam1 /*203*/].f_198));
		}
		if (__LIB_2__::func_572(&(uParam0->f_396[iParam1 /*203*/].f_198)) >= 5f)
		{
			__LIB_1__::func_12(&(uParam0->f_396[iParam1 /*203*/].f_198));
			if (uParam0->f_396[iParam1 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				func_137(uParam0, iParam1, (uParam0->f_396[iParam1 /*203*/].f_11 - 1), bParam2);
			}
			return 1;
		}
		return 0;
	}
	func_137(uParam0, iParam1, (uParam0->f_396[iParam1 /*203*/].f_11 - 1), bParam2);
	return 1;
}

void func_137(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x84B7
{
	float fVar0;
	float fVar1;
	if (iParam2 < 0 || iParam2 > (uParam0->f_17 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_18 - 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8, false))
	{
		return;
	}
	if (uParam0->f_396[iParam1 /*203*/].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9, false))
		{
			return;
		}
	}
	fVar0 = uParam0->f_32[iParam2 /*11*/].f_4;
	fVar1 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar1 = 8f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar1 = 10f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar1 = 60f;
	}
	if (bParam3)
	{
		STREAMING::LOAD_SCENE(uParam0->f_32[iParam2 /*11*/]);
	}
	func_134(&(uParam0->f_396[iParam1 /*203*/]), uParam0->f_32[iParam2 /*11*/], fVar0, fVar1);
}

int func_138(var uParam0, int iParam1, struct<3> Param2, float fParam3)//Position - 0x85BA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (iParam1 != iVar0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9, false))
			{
				if (__LIB_0__::func_724(uParam0->f_396[iVar0 /*203*/].f_9, Param2, 1) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(var uParam0, int iParam1)//Position - 0x8611
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (iParam1 < 0 || iParam1 > (uParam0->f_18 - 1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8, false))
	{
		return 0;
	}
	if (uParam0->f_396[iParam1 /*203*/].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9, false))
		{
			return 0;
		}
	}
	switch (Local_47.f_11)
	{
		case 0:
			Var0 = { -1937.8853f, 4443.3193f, 36.5555f };
			fVar1 = 256.8476f;
			break;
		case 1:
			Var0 = { -517.2068f, 2000.5529f, 204.616f };
			fVar1 = 20.3384f;
			break;
		case 3:
			Var0 = { -225.98f, 4224.74f, 44.36f };
			fVar1 = 80.2f;
			break;
		case 4:
			Var0 = { 1602.54f, 3837.21f, 33.72f };
			fVar1 = 308.94f;
			break;
		case 5:
			Var0 = { 2030.8984f, 2134.1968f, 92.5014f };
			fVar1 = 249.4471f;
			break;
		case 2:
			Var0 = { 2995.8235f, 2774.8606f, 41.9576f };
			fVar1 = 354.6729f;
			break;
		case 6:
			break;
	}
	if (func_138(uParam0, iParam1, Var0, 5f) || (uParam0->f_396[iParam1 /*203*/].f_8 != PLAYER::PLAYER_PED_ID() && CAM::IS_SPHERE_VISIBLE(Var0, 10f)))
	{
		return 0;
	}
	fVar2 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar2 = 8f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar2 = 10f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_396[iParam1 /*203*/].f_22))
	{
		fVar2 = 60f;
	}
	func_134(&(uParam0->f_396[iParam1 /*203*/]), Var0, fVar1, fVar2);
	return 1;
}

int func_140(var uParam0, bool bParam1)//Position - 0x87FA
{
	if (!func_135(uParam0, bParam1) || !func_141(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_141(var uParam0)//Position - 0x8820
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
			TASK::CLEAR_PED_TASKS(uParam0->f_8);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (uParam0->f_21 == joaat("A_M_Y_MotoX_02"))
		{
		}
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
	}
	else
	{
		if (uParam0->f_21 == joaat("A_M_Y_MotoX_02"))
		{
		}
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, true, true);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
		{
			return 0;
		}
	}
	if (uParam0->f_20 <= 3)
	{
	}
	else
	{
		PED::SET_DRIVER_ABILITY(uParam0->f_8, 1f);
		PED::SET_DRIVER_RACING_MODIFIER(uParam0->f_8, 1f);
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, true, false);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uParam0->f_8, 3);
		if (func_142())
		{
			PED::SET_PED_HELMET(uParam0->f_8, true);
			PED::GIVE_PED_HELMET(uParam0->f_8, true, 4096, -1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_8, 36, true);
		}
	}
	return 1;
}

int func_142()//Position - 0x89B3
{
	if (Local_47.f_0 != 1)
	{
		return 0;
	}
	switch (Local_47.f_11)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			return 1;
			break;
		case 3:
			return 1;
			break;
		case 4:
			return 1;
			break;
		case 5:
			return 0;
			break;
	}
	return 1;
}

void func_143()//Position - 0x8A1D
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	MISC::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 800f, 0);
}

char* func_156(int iParam0)//Position - 0x9250
{
	char* sVar0;
	switch (iParam0)
	{
		case 3:
			sVar0 = "OFF_FAIL_IDLE";
			break;
		case 0:
			sVar0 = "OFF_FAIL_DIST";
			break;
		case 1:
			sVar0 = "OFF_FAIL_KILL";
			break;
		case 2:
			sVar0 = "OFF_FAIL_VEH";
			break;
		case 4:
			sVar0 = "OFF_FAIL_EXIT";
			break;
	}
	return sVar0;
}

void func_157(var uParam0)//Position - 0x92AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		func_108(uParam0, iVar0);
		iVar0++;
	}
}

void func_158(var uParam0)//Position - 0x92D1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8, false))
		{
			if (PLAYER::PLAYER_PED_ID() != uParam0->f_396[iVar0 /*203*/].f_8)
			{
				TASK::CLEAR_PED_TASKS(uParam0->f_396[iVar0 /*203*/].f_8);
				TASK::TASK_SMART_FLEE_PED(uParam0->f_396[iVar0 /*203*/].f_8, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			}
		}
		iVar0++;
	}
}

void func_160(var uParam0)//Position - 0x935C
{
	int iVar0;
	if (!bLocal_188)
	{
		bLocal_188 = true;
		iVar0 = 1;
		while (iVar0 <= (uParam0->f_18 - 1))
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar0 /*203*/].f_10))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_396[iVar0 /*203*/].f_10));
			}
			iVar0++;
		}
	}
}

void func_161(var uParam0, int* iParam1)//Position - 0x93A7
{
	struct<3> Var0;
	struct<3> Var1;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam1))
		{
			*iParam1 = __LIB_0__::func_488(ENTITY::GET_ENTITY_COORDS(*uParam0, true), 0);
			HUD::SET_BLIP_COLOUR(*iParam1, 3);
			HUD::SET_BLIP_PRIORITY(*iParam1, 9);
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("OFF_OPP");
			HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam1);
		}
		else
		{
			Var0 = { HUD::GET_BLIP_COORDS(*iParam1) };
			Var1 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true) };
			Var0.f_0 = (Var0.f_0 + ((Var1.f_0 - Var0.f_0) / 10f));
			Var0.f_1 = (Var0.f_1 + ((Var1.f_1 - Var0.f_1) / 10f));
			Var0.f_2 = (Var0.f_2 + ((Var1.f_2 - Var0.f_2) / 10f));
			HUD::SET_BLIP_COORDS(*iParam1, Var0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		HUD::REMOVE_BLIP(iParam1);
	}
}

void func_163(var uParam0, int iParam1)//Position - 0x94C2
{
	int iVar0;
	float fVar1;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_9, false))
	{
		return;
	}
	if (PLAYER::PLAYER_PED_ID() == uParam0->f_396[iParam1 /*203*/].f_8)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3754)
	{
		if (func_164(uParam0, iParam1, iVar0))
		{
			if (uParam0->f_396[iParam1 /*203*/].f_202 != iVar0)
			{
				uParam0->f_396[iParam1 /*203*/].f_202 = iVar0;
				uParam0->f_396[iParam1 /*203*/].f_201++;
			}
			if (uParam0->f_3633[iVar0 /*8*/].f_7 < 0f)
			{
				fVar1 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_396[iParam1 /*203*/].f_9);
			}
			else
			{
				fVar1 = (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_396[iParam1 /*203*/].f_9) * uParam0->f_3633[iVar0 /*8*/].f_7);
			}
			if (ENTITY::GET_ENTITY_SPEED(uParam0->f_396[iParam1 /*203*/].f_9) > 8f)
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_396[iParam1 /*203*/].f_9, fVar1);
			}
		}
		iVar0++;
	}
}

int func_164(var uParam0, int iParam1, int iParam2)//Position - 0x95B7
{
	struct<3> Var0;
	struct<3> Var1;
	struct<7> Var2;
	if (uParam0->f_396[iParam1 /*203*/].f_201 > iParam2 && uParam0->f_396[iParam1 /*203*/].f_202 != iParam2)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iParam1 /*203*/].f_8, false))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_396[iParam1 /*203*/].f_8, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_396[iParam1 /*203*/].f_9))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_396[iParam1 /*203*/].f_8) };
	Var1 = { Var0 - uParam0->f_32[uParam0->f_396[iParam1 /*203*/].f_11 /*11*/] };
	if (MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var1.f_0, Var1.f_1) > 32.5f)
	{
		return 0;
	}
	Var2 = { uParam0->f_3633[iParam2 /*8*/] };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0->f_396[iParam1 /*203*/].f_8, Var2, Var2.f_3, Var2.f_6, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_165(var uParam0, var uParam1)//Position - 0x96B2
{
	uParam0 = uParam0;
	uParam1 = uParam1;
}

void func_167(int iParam0)//Position - 0x96D3
{
	if (!Local_219.f_0)
	{
		if (__LIB_39__::func_728(Local_219.f_2))
		{
			Local_219.f_2 = { func_197(iParam0) };
		}
	}
	if (__LIB_38__::func_588())
	{
		Local_219.f_0 = 1;
	}
	if (__LIB_1__::func_296(&Local_219) >= 1f && PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
	{
		Local_219.f_0 = 0;
	}
	if (Local_219.f_0 && __LIB_38__::func_588())
	{
		func_194(&Local_219);
	}
	else
	{
		func_193(&Local_219);
	}
	if (Local_219.f_0)
	{
		if (!__LIB_0__::func_86(Local_219.f_2) && !__LIB_39__::func_728(Local_219.f_2))
		{
			__LIB_38__::func_619(&uLocal_190, Local_219.f_2);
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(Local_219.f_5))
			{
				CAM::DESTROY_CAM(Local_219.f_5, false);
			}
			__LIB_38__::func_615(&uLocal_190, 0);
			Local_219.f_0 = 0;
		}
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(Local_219.f_5))
		{
			CAM::DESTROY_CAM(Local_219.f_5, false);
		}
		__LIB_38__::func_615(&uLocal_190, 0);
		Local_219.f_0 = 0;
		return;
	}
}

void func_193(int iParam0)//Position - 0xA6EB
{
	iParam0->f_1 = 0f;
}

void func_194(int iParam0)//Position - 0xA6F8
{
	iParam0->f_1 = (iParam0->f_1 + MISC::GET_FRAME_TIME());
}

Vector3 func_197(var uParam0)//Position - 0xA728
{
	int iVar0;
	iVar0 = uParam0->f_396[0 /*203*/].f_11 + 1;
	if (iVar0 < uParam0->f_17)
	{
		return uParam0->f_32[iVar0 /*11*/];
	}
	return 0f, 0f, 0f;
}

void func_200(int iParam0)//Position - 0xA7A3
{
	if (iParam0->f_396[0 /*203*/].f_11 >= (iParam0->f_17 - 2))
	{
		if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CROWD_CHEER", false, -1))
		{
			if (!*iParam0)
			{
				iParam0->f_3812 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_3812, "CROWD_CHEER_MASTER", iParam0->f_32[(iParam0->f_17 - 1) /*11*/], 0, false, 0, false);
				*iParam0 = 1;
			}
			else if (AUDIO::HAS_SOUND_FINISHED(iParam0->f_3812))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(iParam0->f_3812, "CROWD_CHEER_MASTER", iParam0->f_32[(iParam0->f_17 - 1) /*11*/], 0, false, 0, false);
			}
		}
	}
}

float func_201(float fParam0, float fParam1, float fParam2, bool bParam3)//Position - 0xA82F
{
	if (bParam3)
	{
		fParam2 = __LIB_0__::func_331(fParam2, 0f, 1f);
	}
	return (fParam0 + (fParam2 * (fParam1 - fParam0)));
}

void func_203(int iParam0)//Position - 0xA878
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_1__::func_13(&(iParam0->f_8)))
	{
		__LIB_1__::func_362(&(iParam0->f_8));
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	if (__LIB_2__::func_572(&(iParam0->f_8)) > 2f)
	{
		fVar0 = 1E+09f;
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < iParam0->f_18)
		{
			if (iVar2 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_396[iVar2 /*203*/].f_9, false))
				{
					fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0->f_396[iVar2 /*203*/].f_9, true));
					if (fVar1 < fVar0)
					{
						iVar3 = iVar2;
						fVar0 = fVar1;
					}
				}
			}
			iVar2++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3604))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_3604, 0f);
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0->f_396[iVar3 /*203*/].f_9, "OFFROAD_RACES_DURING_RACE_CLOSEST_VEHICLE", 0f);
		iParam0->f_3604 = iParam0->f_396[iVar3 /*203*/].f_9;
		__LIB_1__::func_31(&(iParam0->f_8));
	}
}

int func_204(int iParam0)//Position - 0xA95A
{
	if (CAM::IS_CAM_INTERPOLATING(Local_47.f_358))
	{
		return 0;
	}
	return 1;
}

Vector3 func_205()//Position - 0xA973
{
	switch (Local_47.f_11)
	{
		case 0:
			return 4.1808f, 0f, -106.0068f;
			break;
		case 1:
			return -6.8752f, 0f, 20.4662f;
			break;
		case 2:
			return 0.4905f, 0f, -8.4486f;
			break;
		case 3:
			return -3.7549f, 0f, 78.2621f;
			break;
		case 4:
			return -4.6307f, 0f, -53.0313f;
			break;
		case 5:
			return -3.4761f, 0f, -111.7504f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_207()//Position - 0xAA8C
{
	switch (Local_47.f_11)
	{
		case 0:
			return -1942.3542f, 4444.596f, 37.9733f;
			break;
		case 1:
			return -514.8898f, 1994.2588f, 207.3874f;
			break;
		case 2:
			return 2995.1787f, 2770.271f, 43.711f;
			break;
		case 3:
			return -221.4457f, 4223.8394f, 45.9477f;
			break;
		case 4:
			return 1598.8804f, 3834.393f, 35.3646f;
			break;
		case 5:
			return 2024.3276f, 2136.795f, 94.9573f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_208(int iParam0)//Position - 0xAB42
{
	float fVar0;
	__LIB_1__::func_12(&(iParam0->f_5));
	if (Local_47.f_11 != -1)
	{
		fVar0 = func_220(Local_47.f_11);
		if (fVar0 <= 0f || fVar0 > Local_47.f_13[Local_47.f_11])
		{
			fVar0 = Local_47.f_13[Local_47.f_11];
		}
		iParam0->f_12 = fVar0;
		iParam0->f_13 = (iParam0->f_12 / 2f);
	}
	func_217(iParam0);
	iParam0->f_17 = 0;
	func_210(iParam0);
	iParam0->f_18 = 0;
	func_209(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
}

void func_209(struct<3> Param0)//Position - 0xABBD
{
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(false);
	MISC::CLEAR_AREA(Param0, 100f, true, false, false, false);
	MISC::CLEAR_AREA_OF_PEDS(Param0, 100f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Param0, 100f, false, false, false, false, false, false, 0);
	MISC::CLEAR_AREA_OF_PROJECTILES(Param0, (100f * 5f), 0);
	FIRE::STOP_FIRE_IN_RANGE(Param0, 100f);
}

void func_210(var uParam0)//Position - 0xAC1A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		func_211(uParam0, iVar0);
		iVar0++;
	}
}

void func_211(var uParam0, int iParam1)//Position - 0xAC3F
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_213(&(uParam0->f_396[iParam1 /*203*/]));
	func_212(&(uParam0->f_396[iParam1 /*203*/]));
}

void func_212(char* sParam0)//Position - 0xAC75
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
	sParam0->f_16 = { Local_47.f_4 };
	sParam0->f_19 = Local_47.f_7;
	sParam0->f_20 = Local_47.f_8;
	sParam0->f_21 = Local_47.f_9;
	sParam0->f_22 = Local_47.f_10;
}

void func_213(var uParam0)//Position - 0xACDF
{
	__LIB_39__::func_724(uParam0);
	func_215(uParam0);
	func_214(uParam0);
}

void func_214(var uParam0)//Position - 0xACF9
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_47.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8, false) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, true, true);
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_215(var uParam0)//Position - 0xAD5D
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, true, true);
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}

void func_217(int iParam0)//Position - 0xAD9D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_17)
	{
		func_218(iParam0, iVar0);
		iVar0++;
	}
}

void func_218(var uParam0, int iParam1)//Position - 0xADC2
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_110(&(uParam0->f_32[iParam1 /*11*/]));
	__LIB_39__::func_711(&(uParam0->f_32[iParam1 /*11*/].f_7));
	func_219(&(uParam0->f_32[iParam1 /*11*/]));
}

void func_219(var uParam0)//Position - 0xAE05
{
	*uParam0 = { Local_47.f_4 };
	uParam0->f_3 = 10.25f;
	uParam0->f_8 = 0;
	uParam0->f_5 = 10f;
	uParam0->f_4 = 0f;
}

var func_220(int iParam0)//Position - 0xAE33
{
	var uVar0;
	uVar0 = Global_113386.f_19016.f_10[iParam0];
	return uVar0;
}

void func_232(var uParam0)//Position - 0xB15F
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return;
	}
	*uParam0 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 2);
}

bool func_233(var uParam0)//Position - 0xB191
{
	return __LIB_15__::func_253(&(uParam0->f_3009), 0, 1065353216, 0, 0, 0);
}

void func_269(var uParam0)//Position - 0xD859
{
	if (CAM::DOES_CAM_EXIST(iLocal_239))
	{
		CAM::DESTROY_CAM(iLocal_239, false);
	}
	iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_3768, uParam0->f_3771, 40f, false, 2);
	if (CAM::DOES_CAM_EXIST(iLocal_240))
	{
		CAM::DESTROY_CAM(iLocal_240, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!uParam0->f_3628)
		{
			iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_3774, uParam0->f_3777, 40f, false, 2);
		}
		else
		{
			iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_3780, uParam0->f_3783, 40f, false, 2);
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_241))
	{
		CAM::DESTROY_CAM(iLocal_241, false);
	}
	iLocal_241 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
}

void func_270(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0xD91F
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
			if (func_555(iParam0, iVar1, &iVar2, 0))
			{
				func_540(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_481(iParam0, iVar1, &iVar2))
			{
				func_540(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_478(iParam0);
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
			func_281(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_281(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_281(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_281(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0xE68D
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
			func_426(iVar5, iParam1, iParam2, 1);
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
						func_426(iVar5, 10, 0, 1);
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
									func_426(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_281(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_426(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_416(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_281(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_410(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_426(iVar5, 14, uVar18[iVar1], 1);
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
							func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_426(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_281(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_401(iParam0);
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
						func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_398(iVar5, iVar24, iVar23, iVar25);
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
							func_281(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_281(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_281(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_281(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_281(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_281(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_281(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_410(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_398(iVar5, func_416(iParam0, 8, -1), iParam2, func_416(iParam0, 4, -1));
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
				func_333(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_398(iVar5, iParam2, iVar44, iVar45);
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
			func_410(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_398(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_281(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_281(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_398(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_398(iVar5, iVar58, iVar57, iParam2);
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
						func_281(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_398(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_305(iParam0, 9, iVar63))
						{
							func_281(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_281(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_281(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_281(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_416(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_416(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_281(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_281(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_281(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_281(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_401(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_281(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_282(iParam0, &uVar4))
		{
			func_281(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_281(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_281(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_281(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_416(iParam0, 3, -1), iVar10);
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
				func_281(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_282(int iParam0, var uParam1)//Position - 0x10538
{
	int iVar0;
	int iVar1;
	*uParam1 = func_416(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_305(iParam0, iVar1, iVar0))
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

int func_305(int iParam0, int iParam1, int iParam2)//Position - 0x14861
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
				if (!func_305(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_305(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_305(iParam0, 14, iVar6))
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
			if (!func_305(iParam0, 14, uVar11[iVar10]))
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
						return func_305(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_305(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_333(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1C5FE
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
	func_334(iParam0, bParam3, 0, -1);
}

void func_334(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x1C64B
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
		bVar3 = func_378(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_369(iParam0, iParam3);
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

int func_369(int iParam0, int iParam1)//Position - 0x2B805
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
				iVar3 = func_416(iParam0, 11, -1);
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
				iVar5 = func_416(iParam0, 11, -1);
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

int func_378(int iParam0, bool bParam1)//Position - 0x2BC63
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_416(iParam0, 11, -1), 0);
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
						iVar3 = func_416(iParam0, 11, -1);
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
						iVar5 = func_416(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_416(iParam0, 11, -1), 0);
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
						iVar8 = func_416(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_416(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_416(iParam0, 11, -1), 0);
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
						iVar12 = func_416(iParam0, 8, -1);
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

int func_398(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34AF8
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
					iVar0 = func_398(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_398(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_401(int iParam0)//Position - 0x35FAD
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
		if (!func_406(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_406(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_406(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x36977
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_416(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_410(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x39360
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_478(iParam0))
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

int func_416(int iParam0, int iParam1, int iParam2)//Position - 0x3960F
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
				if (func_305(iParam0, iParam1, iVar0))
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
				if (func_305(iParam0, iParam1, iVar1))
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

void func_426(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3C382
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
							func_426(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_426(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_426(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_426(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_426(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_426(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_426(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_426(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_426(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_426(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_478(int iParam0)//Position - 0x59570
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
				iVar1 = func_416(iParam0, 11, -1);
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
				iVar3 = func_416(iParam0, 11, -1);
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

int func_481(int iParam0, int iParam1, int iParam2)//Position - 0x598E2
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_482(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_482(int iParam0, int iParam1, int iParam2)//Position - 0x5996E
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
				if (!func_482(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_482(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_482(iParam0, 14, iVar4))
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
			if (!func_482(iParam0, 14, uVar8[iVar7]))
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

int func_540(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6C539
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
										func_540(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_540(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_544(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_555(iParam0, iVar10, &iVar4, 1))
							{
								func_540(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_540(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_540(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_540(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_540(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_540(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_540(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_540(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_540(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_540(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_555(iParam0, iVar10, &iVar4, 0))
		{
			func_540(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_481(iParam0, iVar10, &iVar4))
		{
			func_540(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_544(int iParam0, int iParam1, int iParam2)//Position - 0x6CED9
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
				if (func_482(iParam0, iParam1, iVar0))
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
				if (func_482(iParam0, iParam1, iVar1))
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

int func_555(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6EB96
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_482(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_556(int iParam0)//Position - 0x6EC2C
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
		func_270(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_544(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_557(__LIB_0__::func_154(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_544(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_544(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_557(__LIB_0__::func_154(0), 3, 70, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 3, 71, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 3, 72, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 3, 73, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 3, 74, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 3, 75, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 4, 41, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 4, 42, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 4, 43, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 4, 44, 1, 0, 0, 0);
					func_557(__LIB_0__::func_154(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_544(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_270(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_557(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6EE89
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_560(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_560(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6F044
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
								func_560(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_560(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_560(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_560(iParam0, 14, iVar5, 1, 0);
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
								func_560(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_560(iParam0, 14, 17, 1, 0);
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

void func_565(int iParam0, struct<3> Param1, var uParam2)//Position - 0x6F78F
{
	if (__LIB_14__::func_527(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		if (BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
		{
			Global_113386.f_32749.f_1864[Global_77137.f_555[0 /*21*/].f_14 /*3*/] = { Param1 };
			Global_113386.f_32749.f_1934[Global_77137.f_555[0 /*21*/].f_14] = uParam2;
		}
	}
}

void func_572()//Position - 0x712E6
{
	__LIB_8__::func_944(&uLocal_470, 0);
	__LIB_16__::func_744();
}

int func_585(var uParam0)//Position - 0x7192C
{
	var uVar0;
	if (SYSTEM::TIMERA() < 2000)
	{
		return 0;
	}
	if (uParam0->f_396[0 /*203*/].f_12 <= 3)
	{
		switch (__LIB_0__::func_683())
		{
			case 0:
				if (!__LIB_13__::func_829(__LIB_2__::func_82(), 12, 48))
				{
					__LIB_0__::func_697("OFF_OUTFIT_M", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_560(__LIB_2__::func_82(), 12, 48, 1, 1);
				}
				break;
			case 1:
				if (!__LIB_13__::func_829(__LIB_2__::func_82(), 12, 42))
				{
					__LIB_0__::func_697("OFF_OUTFIT_F", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_560(__LIB_2__::func_82(), 12, 42, 1, 1);
				}
				break;
			case 2:
				if (!__LIB_13__::func_829(__LIB_2__::func_82(), 12, 44))
				{
					__LIB_0__::func_697("OFF_OUTFIT_T", 0, 0, -1, 10000, 7, 0, 0, 0);
					func_560(__LIB_2__::func_82(), 12, 44, 1, 1);
				}
				break;
			}
	}
	if (!HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(false);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
	if (SYSTEM::TIMERA() > 3000 && uParam0->f_3624)
	{
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			if (!iLocal_1004)
			{
				__LIB_2__::func_540(&(Local_47.f_153));
				__LIB_1__::func_214(&(Local_47.f_153), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_47.f_153), "HUD_INPUT53" /* GXT: Back */, 2, 202, 1, 1, 0);
				if (iLocal_1005)
				{
					__LIB_0__::func_990(&(Local_47.f_153), "SCLB_PROFILE" /* GXT: View Profile */, 2, 217, 1, 1, 0);
				}
				iLocal_1004 = 1;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/))
			{
				uParam0->f_3624 = !uParam0->f_3624;
				iLocal_1004 = 0;
			}
			func_626(&(uParam0->f_3008), Local_47.f_11, &(Local_47.f_78[Local_47.f_11 /*8*/]));
			__LIB_2__::func_439(&(Local_47.f_153), 1128792064, 1, 0, 1, 1065353216);
			if (__LIB_16__::func_735(&uLocal_470))
			{
				if (!iLocal_1005)
				{
					iLocal_1005 = 1;
					iLocal_1004 = 0;
				}
			}
		}
		else if (__LIB_14__::func_440(&iLocal_907, 0))
		{
			uParam0->f_3624 = 0;
			iLocal_907 = 0;
			__LIB_2__::func_540(&(Local_47.f_153));
			__LIB_1__::func_214(&(Local_47.f_153), 0, 0, 1, 1);
			__LIB_0__::func_990(&(Local_47.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
			__LIB_0__::func_990(&(Local_47.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
			__LIB_0__::func_990(&(Local_47.f_153), "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
		}
	}
	else
	{
		if (!iLocal_1004)
		{
			__LIB_2__::func_540(&(Local_47.f_153));
			__LIB_1__::func_214(&(Local_47.f_153), 0, 0, 1, 1);
			__LIB_0__::func_990(&(Local_47.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
			__LIB_0__::func_990(&(Local_47.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				__LIB_0__::func_990(&(Local_47.f_153), "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			}
			iLocal_1004 = 1;
		}
		if (PLAYER::IS_PLAYER_ONLINE() && !iLocal_1003)
		{
			iLocal_1003 = 1;
			iLocal_1000 = 0;
			__LIB_2__::func_540(&(Local_47.f_153));
			__LIB_1__::func_214(&(Local_47.f_153), 0, 0, 1, 1);
			__LIB_0__::func_990(&(Local_47.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
			__LIB_0__::func_990(&(Local_47.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
		}
		else if (!PLAYER::IS_PLAYER_ONLINE() && iLocal_1003)
		{
			iLocal_1003 = 0;
		}
		if (PLAYER::IS_PLAYER_ONLINE())
		{
			if (iLocal_1003 && !Global_2097157.f_1)
			{
				func_705(Local_47.f_11, &(Local_47.f_78[Local_47.f_11 /*8*/]));
			}
			if (((!iLocal_1000 && Global_2097157.f_1) && Global_2097157.f_2) && iLocal_1001)
			{
				iLocal_1000 = 1;
				__LIB_2__::func_540(&(Local_47.f_153));
				__LIB_1__::func_214(&(Local_47.f_153), 0, 0, 1, 1);
				__LIB_0__::func_990(&(Local_47.f_153), "SPR_CONT2", 2, 215, 1, 1, 0);
				__LIB_0__::func_990(&(Local_47.f_153), "SPR_UI_RETRY", 2, 216, 1, 1, 0);
				__LIB_0__::func_990(&(Local_47.f_153), "HUD_INPUT68" /* GXT: Online Leaderboard */, 2, 211, 1, 1, 0);
			}
			if (Global_2097157.f_1 && !Global_2097157.f_2)
			{
				func_611(Local_47.f_11, uParam0->f_396[0 /*203*/].f_13, uParam0->f_396[0 /*203*/].f_12, 1);
				iLocal_1002 = 1;
				Global_2097157.f_2 = 1;
			}
			if (!iLocal_1001)
			{
				iLocal_1001 = __LIB_31__::func_951(&uLocal_470);
				if (iLocal_1001)
				{
					Global_2097532 = 1;
				}
			}
		}
		else
		{
			iLocal_1000 = 1;
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 211 /*INPUT_FRONTEND_LEADERBOARD*/) && iLocal_1000)
		{
			uParam0->f_3624 = !uParam0->f_3624;
			iLocal_1000 = 0;
			iLocal_1004 = 0;
		}
		uVar0 = func_233(uParam0);
		if (SYSTEM::TIMERA() > 3000)
		{
			__LIB_2__::func_439(&(Local_47.f_153), 1128792064, 1, 0, 1, 1065353216);
			if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 215 /*INPUT_FRONTEND_ENDSCREEN_ACCEPT*/) || uVar0)
			{
				HUD::DISPLAY_RADAR(true);
				__LIB_0__::func_210();
				__LIB_0__::func_734(0, 0);
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if (!iLocal_1002)
					{
						func_611(Local_47.f_11, uParam0->f_396[0 /*203*/].f_13, uParam0->f_396[0 /*203*/].f_12, 0);
					}
					else
					{
						iLocal_1002 = 0;
					}
				}
				func_587(uParam0, 300);
				return 1;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 216 /*INPUT_FRONTEND_ENDSCREEN_EXPAND*/))
			{
				__LIB_2__::func_439(&(Local_47.f_153), 1128792064, 1, 0, 1, 1065353216);
				iLocal_908 = 0;
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if (!iLocal_1002)
					{
						func_611(Local_47.f_11, uParam0->f_396[0 /*203*/].f_13, uParam0->f_396[0 /*203*/].f_12, 0);
					}
					else
					{
						iLocal_1002 = 0;
					}
				}
				func_587(uParam0, 300);
				func_586(&(Local_47.f_370), &(Local_47.f_371), &(Local_47.f_369), &(Local_47.f_373), &(Local_47.f_372));
				return 2;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_586(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)//Position - 0x71E58
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam3 = 0;
	*uParam2 = 0;
	*uParam4 = 0;
}

void func_587(var uParam0, int iParam1)//Position - 0x71E74
{
	uParam0->f_3009.f_562 = (uParam0->f_3009.f_576 + iParam1);
	uParam0->f_3009.f_565 = 0;
}

void func_611(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x729BF
{
	struct<6> Var0[3];
	struct<8> Var1[3];
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var1[1 /*8*/]), "Location", 32);
	StringCopy(&(Var1[2 /*8*/]), "Type", 32);
	StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_01", 24);
			break;
		case 1:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_02", 24);
			break;
		case 3:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_03", 24);
			break;
		case 4:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_04", 24);
			break;
		case 5:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_05", 24);
			break;
		case 2:
			StringCopy(&(Var0[1 /*6*/]), "OR_RACE_06", 24);
			break;
	}
	StringCopy(&(Var0[2 /*6*/]), "OffroadRace", 24);
	if (bParam3)
	{
		if (__LIB_1__::func_317(817, &Var0, &Var1, 3, -1, 1, 0))
		{
			__LIB_18__::func_969(817, 131, -SYSTEM::FLOOR((fParam1 * 1000f)), 0f, 0);
			if (iParam2 == 1)
			{
				__LIB_18__::func_969(817, 96, 3, 0f, 0);
			}
			else if (iParam2 == 2)
			{
				__LIB_18__::func_969(817, 96, 2, 0f, 0);
			}
			else if (iParam2 == 3)
			{
				__LIB_18__::func_969(817, 96, 1, 0f, 0);
			}
			else
			{
				__LIB_18__::func_969(817, 96, 0, 0f, 0);
			}
			__LIB_18__::func_969(817, 2, SYSTEM::FLOOR((fParam1 * 1000f)), 0f, 0);
			__LIB_18__::func_969(817, 147, SYSTEM::FLOOR((fParam1 * 1000f)), 0f, 0);
			__LIB_18__::func_969(817, 149, 0, 0f, 0);
			__LIB_18__::func_969(817, 148, 0, 0f, 0);
			__LIB_18__::func_969(817, 109, 1, 0f, 0);
			if (iParam2 == 1)
			{
				__LIB_18__::func_969(817, 86, 1, 0f, 0);
			}
			else
			{
				__LIB_18__::func_969(817, 86, 0, 0f, 0);
			}
			if (iParam2 == 2)
			{
				__LIB_18__::func_969(817, 158, 1, 0f, 0);
			}
			else
			{
				__LIB_18__::func_969(817, 158, 0, 0f, 0);
			}
			if (iParam2 == 3)
			{
				__LIB_18__::func_969(817, 157, 1, 1f, 0);
			}
			else
			{
				__LIB_18__::func_969(817, 157, 0, 0f, 0);
			}
		}
	}
	else if (__LIB_1__::func_317(817, &Var0, &Var1, 3, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, -SYSTEM::FLOOR((fParam1 * 1000f)), 0f);
		if (iParam2 == 1)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 3, 0f);
		}
		else if (iParam2 == 2)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 2, 0f);
		}
		else if (iParam2 == 3)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 1, 0f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(96, 0, 0f);
		}
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(2, SYSTEM::FLOOR((fParam1 * 1000f)), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(147, SYSTEM::FLOOR((fParam1 * 1000f)), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(149, 0, 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(148, 0, 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(109, 1, 0f);
		if (iParam2 == 1)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(86, 1, 0f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(86, 0, 0f);
		}
		if (iParam2 == 2)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(158, 1, 0f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(158, 0, 0f);
		}
		if (iParam2 == 3)
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(157, 1, 1f);
		}
		else
		{
			STATS::LEADERBOARDS_WRITE_ADD_COLUMN(157, 0, 0f);
		}
	}
}

void func_626(var uParam0, var uParam1, var uParam2)//Position - 0x73561
{
	__LIB_36__::func_718(uParam0, &uLocal_470);
}

void func_700(var uParam0)//Position - 0x7ACF2
{
	int iVar0;
	if (!__LIB_2__::func_213(&(uParam0->f_5)))
	{
		__LIB_14__::func_599(&(uParam0->f_5));
	}
	func_704(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		func_701(&(uParam0->f_396[iVar0 /*203*/]));
		if (iVar0 != 0)
		{
			func_105(&(uParam0->f_396[iVar0 /*203*/]), 1);
		}
		iVar0++;
	}
}

void func_701(var uParam0)//Position - 0x7AD4A
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9, false))
	{
		if (Local_47.f_0 != 0)
		{
			func_702();
		}
	}
}

void func_702()//Position - 0x7AD69
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_235, false);
	}
	func_703();
}

void func_703()//Position - 0x7AD89
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_238))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_238, false))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_238, true, true);
			PED::DELETE_PED(&iLocal_238);
		}
	}
}

void func_704(var uParam0)//Position - 0x7ADB7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (uParam0->f_396[iVar0 /*203*/].f_11 != uParam0->f_17)
		{
			uParam0->f_396[iVar0 /*203*/].f_13 = (uParam0->f_396[0 /*203*/].f_13 + (IntToFloat((uParam0->f_17 - uParam0->f_396[iVar0 /*203*/].f_11)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}

void func_705(int iParam0, char[4] cParam1)//Position - 0x7AE1C
{
	struct<3> Var0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "OR_RACE_01", 24);
			break;
		case 1:
			StringCopy(&Var0, "OR_RACE_02", 24);
			break;
		case 3:
			StringCopy(&Var0, "OR_RACE_03", 24);
			break;
		case 4:
			StringCopy(&Var0, "OR_RACE_04", 24);
			break;
		case 5:
			StringCopy(&Var0, "OR_RACE_05", 24);
			break;
		case 2:
			StringCopy(&Var0, "OR_RACE_06", 24);
			break;
	}
	__LIB_15__::func_250(&uLocal_470, 80, &Var0, cParam1, iParam0, -1, 0, 0);
}

void func_716(var uParam0)//Position - 0x804C0
{
	AUDIO::STOP_SOUND(uParam0->f_3812);
}

int func_717(int iParam0)//Position - 0x804D1
{
	switch (iParam0)
	{
		case joaat("blazer"):
		case joaat("blazer2"):
			return 1;
			break;
	}
	return 0;
}

int func_718(int iParam0)//Position - 0x804F4
{
	switch (iParam0)
	{
		case joaat("sanchez"):
			return 1;
			break;
	}
	return 0;
}

void func_720(bool bParam0)//Position - 0x80525
{
	Local_219.f_0 = bParam0;
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_721()//Position - 0x80539
{
	func_722();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_722()//Position - 0x8054A
{
	Local_219.f_0 = 0;
	Local_219.f_2 = { 0f, 0f, 0f };
	Local_219.f_5 = 0;
}

void func_725(var uParam0, var uParam1)//Position - 0x8067C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	func_726(uParam0);
	Local_47.f_357 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), uParam0->f_3761, uParam0->f_3764, 50f, false, 2);
	Local_47.f_358 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), func_207(), func_205(), 50f, false, 2);
	CAM::SET_CAM_ACTIVE(iLocal_251, true);
}

void func_726(var uParam0)//Position - 0x806E0
{
	if (!CAM::DOES_CAM_EXIST(iLocal_251))
	{
		iLocal_251 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uParam0->f_3755, uParam0->f_3758, uParam0->f_3767, false, 2);
	}
}

void func_731(var uParam0)//Position - 0x8089A
{
	func_736(uParam0);
	func_734(uParam0);
	SYSTEM::SETTIMERA(0);
	if (Local_47.f_11 + 1 == 1)
	{
		__LIB_0__::func_716(112, 0, 0);
	}
	else if (Local_47.f_11 + 1 == 2)
	{
		__LIB_0__::func_716(113, 0, 0);
	}
	else if (Local_47.f_11 + 1 == 3)
	{
		__LIB_0__::func_716(114, 0, 0);
	}
	else if (Local_47.f_11 + 1 == 4)
	{
		__LIB_0__::func_716(115, 0, 0);
	}
	else if (Local_47.f_11 + 1 == 5)
	{
		__LIB_0__::func_716(116, 0, 0);
	}
	else if (Local_47.f_11 + 1 == 6)
	{
		__LIB_0__::func_716(117, 0, 0);
	}
	__LIB_0__::func_734(1, 0);
}

void func_734(var uParam0)//Position - 0x80ED8
{
	func_735(uParam0->f_3008, "OFFR_TITLE");
}

void func_735(int iParam0, char* sParam1)//Position - 0x80EEE
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_736(var uParam0)//Position - 0x80F10
{
	int iVar0;
	char[] cVar1[8];
	__LIB_1__::func_741(&(uParam0->f_3009));
	iVar0 = 0;
	cVar1 = "";
	if (uParam0->f_396[0 /*203*/].f_12 == 1)
	{
		iVar0 = 3;
		cVar1 = "SPR_1stpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 2)
	{
		iVar0 = 2;
		cVar1 = "SPR_2ndpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 3)
	{
		iVar0 = 1;
		cVar1 = "SPR_3rdpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 4)
	{
		iVar0 = 0;
		cVar1 = "SPR_4thpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 5)
	{
		iVar0 = 0;
		cVar1 = "SPR_5thpl";
	}
	else if (uParam0->f_396[0 /*203*/].f_12 == 6)
	{
		iVar0 = 0;
		cVar1 = "SPR_6thpl";
	}
	__LIB_14__::func_520(&(uParam0->f_3009), cVar1, &(Local_47.f_21[Local_47.f_11 /*8*/]), 0);
	__LIB_14__::func_551(&(uParam0->f_3009), 18, "SPR_TIME", "", SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f)), 0, 0, 0);
	if ((iLocal_908 && PLAYER::IS_PLAYER_ONLINE()) && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()))
	{
		if (Local_47.f_372 > SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f)) || Local_47.f_372 <= 0)
		{
			Local_47.f_372 = SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f));
		}
		__LIB_14__::func_551(&(uParam0->f_3009), 18, "SPR_BESTTIME", "", Local_47.f_372, 0, 0, 0);
		if (Local_47.f_373 > SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f)) || Local_47.f_373 <= 0)
		{
			Local_47.f_373 = SYSTEM::FLOOR((uParam0->f_396[0 /*203*/].f_13 * 1000f));
		}
		__LIB_14__::func_551(&(uParam0->f_3009), 18, "LOB_SPLIT_0" /* GXT: World Record */, "", Local_47.f_373, 0, 0, 0);
	}
	__LIB_40__::func_514(&(uParam0->f_3009), 1, "SPR_RESULT", uParam0->f_396[0 /*203*/].f_12, uParam0->f_18, 1, iVar0, 0);
	__LIB_14__::func_598(&(uParam0->f_3009), 1, 0);
}

void func_745(var uParam0)//Position - 0x81613
{
	int iVar0;
	int iVar1;
	float fVar2;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8, false))
		{
			if (uParam0->f_396[iVar0 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_51(Local_47.f_11);
				if (iVar1 <= 0 || iVar1 > uParam0->f_396[iVar0 /*203*/].f_12)
				{
					if (Local_47.f_11 >= 0 && Local_47.f_11 < 7)
					{
						func_747(Local_47.f_11, uParam0->f_396[iVar0 /*203*/].f_12);
					}
				}
				fVar2 = func_220(Local_47.f_11);
				if (fVar2 <= 0f || fVar2 > uParam0->f_396[iVar0 /*203*/].f_13)
				{
					if (Local_47.f_11 >= 0 && Local_47.f_11 < 7)
					{
						func_746(Local_47.f_11, uParam0->f_396[iVar0 /*203*/].f_13);
					}
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_746(int iParam0, var uParam1)//Position - 0x816F4
{
	Global_113386.f_19016.f_10[iParam0] = uParam1;
}

void func_747(int iParam0, var uParam1)//Position - 0x8170B
{
	Global_113386.f_19016.f_2[iParam0] = uParam1;
}

void func_749(var uParam0)//Position - 0x81731
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	StringCopy(&cVar0, "Offroad_", 16);
	switch (Local_47.f_11)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 16);
			break;
		case 1:
			StringIntConCat(&cVar0, 2, 16);
			break;
		case 2:
			StringIntConCat(&cVar0, 6, 16);
			break;
		case 3:
			StringIntConCat(&cVar0, 3, 16);
			break;
		case 4:
			StringIntConCat(&cVar0, 4, 16);
			break;
		case 5:
			StringIntConCat(&cVar0, 5, 16);
			break;
	}
	iVar2 = iVar2;
	__LIB_1__::func_31(&(uParam0->f_5));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	VEHICLE::SET_VEHICLE_HANDBRAKE(uParam0->f_396[0 /*203*/].f_9, false);
	if (Local_47.f_0 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	}
	uParam0->f_2 = 1;
	fVar4 = 1f;
	iVar5 = 0;
	while (iVar5 < uParam0->f_18)
	{
		__LIB_39__::func_713(&(uParam0->f_396[iVar5 /*203*/]));
		if ((iVar5 % 3) == 0 && iVar5 != 0)
		{
			fVar4 = (fVar4 - 0.02f);
		}
		if (Local_47.f_0 != 1)
		{
			if (iVar5 != 0)
			{
				func_103(uParam0, uParam0->f_396[iVar5 /*203*/].f_8, uParam0->f_396[iVar5 /*203*/].f_9, uParam0->f_32[uParam0->f_396[iVar5 /*203*/].f_11 /*11*/], uParam0->f_32[uParam0->f_396[iVar5 /*203*/].f_11 /*11*/].f_8, iVar5);
			}
		}
		else if (bLocal_995)
		{
			if (iVar5 > 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar5 /*203*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar5 /*203*/].f_9, false))
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
					if (iVar3 < 500)
					{
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 500);
					}
					else
					{
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(400, 700);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uParam0->f_396[iVar5 /*203*/].f_9, &cVar0, 786468, 0, 24, -1, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_396[iVar5 /*203*/].f_9) * fVar4), false, 2f);
					TASK::CLOSE_SEQUENCE_TASK(iVar1);
					TASK::TASK_PERFORM_SEQUENCE(uParam0->f_396[iVar5 /*203*/].f_8, iVar1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_396[iVar5 /*203*/].f_9, 8f);
				}
			}
		}
		else if (iVar5 != 0)
		{
			func_103(uParam0, uParam0->f_396[iVar5 /*203*/].f_8, uParam0->f_396[iVar5 /*203*/].f_9, uParam0->f_32[uParam0->f_396[iVar5 /*203*/].f_11 /*11*/], uParam0->f_32[uParam0->f_396[iVar5 /*203*/].f_11 /*11*/].f_8, iVar5);
		}
		iVar5++;
	}
}

void func_751(var uParam0)//Position - 0x819E8
{
	int iVar0;
	AUDIO::START_AUDIO_SCENE("OFFROAD_RACES_DURING_RACE");
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_396[iVar0 /*203*/].f_9))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_396[iVar0 /*203*/].f_9, "OFFROAD_RACES_DURING_RACE_GENERAL_VEHICLES", 0f);
			}
		}
		iVar0++;
	}
}

int func_752(int* iParam0)//Position - 0x81A3B
{
	switch (iLocal_225)
	{
		case 0:
			iLocal_46 = -1;
			iLocal_45 = 0;
			__LIB_15__::func_248(iParam0);
			__LIB_1__::func_265(&Local_222, 3);
			iLocal_225 = 1;
			break;
		case 1:
			if (__LIB_15__::func_251(iParam0, 1f))
			{
				func_753(&Local_222, 1, 0, 1, 3, 1, 0, 0);
				iLocal_225 = 2;
			}
			break;
		case 2:
			if (func_753(&Local_222, 0, 0, 0, 3, 1, 0, 0))
			{
				__LIB_1__::func_31(&(Local_47.f_374));
				__LIB_1__::func_12(&(Local_222.f_2));
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_753(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x81AC7
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
					__LIB_1__::func_12(&(uParam0->f_2));
					if (__LIB_1__::func_490(uParam0->f_1, 1))
					{
						func_757(&(uParam0->f_1), 8);
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
			func_757(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -2 && !__LIB_1__::func_490(uParam0->f_1, 2))
		{
			func_757(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_1__::func_490(uParam0->f_1, 4))
		{
			func_757(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, true);
			__LIB_1__::func_265(uParam0, iVar9);
		}
		else if (iVar9 >= -1 && !__LIB_1__::func_490(uParam0->f_1, 16))
		{
			if (MISC::ABSF((__LIB_2__::func_572(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_757(&(uParam0->f_1), 16);
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
			func_757(&(uParam0->f_1), 8);
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
			__LIB_1__::func_12(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}

void func_757(int iParam0, int iParam1)//Position - 0x81EA6
{
	__LIB_0__::func_989(iParam0, iParam1);
}

int func_758(int iParam0, int iParam1, bool bParam2)//Position - 0x81EB6
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
	fVar2 = 1.2f;
	if (iParam1 == (iParam0->f_17 - 1))
	{
		iVar1 = 38;
	}
	else if (!bParam2)
	{
		fVar2 = 0.7f;
	}
	if (!func_765(&(iParam0->f_32[iParam1 /*11*/]), iVar1, fVar2, iParam1, iParam0->f_17))
	{
		return 0;
	}
	if (bParam2)
	{
		Var3 = { iParam0->f_32[iParam1 /*11*/] };
		Var4 = { 0f, 0f, 0f };
		if (iParam1 < iParam0->f_17)
		{
			if (iParam1 != (iParam0->f_17 - 1))
			{
				if (!__LIB_0__::func_490(iParam0->f_32[iParam1 /*11*/], iParam0->f_32[iParam1 + 1 /*11*/], 1056964608, 0))
				{
					Var3 = { iParam0->f_32[iParam1 + 1 /*11*/] };
					func_764(iParam0->f_32[iParam1 /*11*/], Var3);
				}
			}
			else
			{
				func_764(iParam0->f_32[iParam1 /*11*/], iParam0->f_32[iParam1 /*11*/]);
			}
		}
		if (Local_47.f_0 == 1)
		{
			if (Local_47.f_11 == 1)
			{
				if (__LIB_1__::func_490(iParam0->f_32[8 /*11*/].f_10, 4))
				{
					__LIB_38__::func_475(&(iParam0->f_32[8 /*11*/].f_10), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var4 = { iParam0->f_32[(iParam1 - 1) /*11*/] };
		}
		if (!func_759(Var4, &(iParam0->f_32[iParam1 /*11*/]), Var3, 10.25f))
		{
			return 0;
		}
		if (iParam1 + 1 < iParam0->f_17)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { iParam0->f_32[0 /*11*/] };
			}
			else
			{
				Var0 = { iParam0->f_32[iParam1 + 2 /*11*/] };
			}
			if (!func_759(iParam0->f_32[iParam1 /*11*/], &(iParam0->f_32[iParam1 + 1 /*11*/]), Var0, 10.25f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_759(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x8206E
{
	if (!func_760(Param0, uParam1, Param2, fParam3))
	{
		return 0;
	}
	return 1;
}

int func_760(struct<3> Param0, var uParam1, struct<3> Param2, float fParam3)//Position - 0x8208F
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	Var0 = { *uParam1 };
	__LIB_39__::func_711(&(uParam1->f_7));
	if (((((uParam1->f_8 != 2 && uParam1->f_8 != 3) && uParam1->f_8 != 4) && uParam1->f_8 != 5) && uParam1->f_8 != 0) && !func_763(uParam1, 4))
	{
		fVar6 = uParam1->f_2;
		fVar7 = 0.65f;
		Var0.f_2 = (fVar6 + (fVar7 * fParam3));
	}
	fParam3 = (8.5f * 1.333f);
	if (uParam1->f_8 == 0)
	{
		if (!func_763(uParam1, 4))
		{
			fVar8 = uParam1->f_2;
			fVar9 = 0.65f;
			Var0.f_2 = (fVar8 + (fVar9 * fParam3));
			iVar1 = __LIB_39__::func_730(uParam1->f_8, Param0, Var0, Param2);
			__LIB_21__::func_969(__LIB_19__::func_216(__LIB_1__::func_577()), &iVar2, &iVar3, &iVar4, &uVar5);
			uParam1->f_7 = GRAPHICS::CREATE_CHECKPOINT(iVar1, Var0, Param2, fParam3, iVar2, iVar3, iVar4, __LIB_38__::func_473(Var0, 220, 255), 0);
			HUD::GET_HUD_COLOUR(134, &iVar2, &iVar3, &iVar4, &uVar5);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_7, iVar2, iVar3, iVar4, __LIB_38__::func_473(Var0, 70, 210));
			GRAPHICS::SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(uParam1->f_7, 0.95f);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam1->f_7, 4f, 4f, 100f);
		}
	}
	else
	{
		uParam1->f_7 = GRAPHICS::CREATE_CHECKPOINT(__LIB_39__::func_715(uParam1->f_8, uParam1->f_9), Var0, Param2, fParam3, 254, 207, 12, __LIB_38__::func_473(Var0, 220, 255), 0);
		HUD::GET_HUD_COLOUR(134, &iVar2, &iVar3, &iVar4, &uVar5);
		GRAPHICS::SET_CHECKPOINT_RGBA2(uParam1->f_7, iVar2, iVar3, iVar4, __LIB_38__::func_473(Var0, 70, 210));
		GRAPHICS::SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(uParam1->f_7, 0.95f);
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam1->f_7, 4f, 4f, 100f);
	}
	if (uParam1->f_7 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_763(var uParam0, int iParam1)//Position - 0x8241B
{
	return __LIB_1__::func_490(uParam0->f_10, iParam1);
}

void func_764(struct<3> Param0, struct<3> Param1)//Position - 0x8242D
{
	if (__LIB_39__::func_728(Param0))
	{
		Local_219.f_2 = { Param1 };
	}
	else
	{
		Local_219.f_2 = { Param0 };
	}
}

int func_765(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0x82459
{
	if (!func_766(&(uParam0->f_6), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_9))
	{
		return 0;
	}
	return 1;
}

int func_766(int* iParam0, struct<3> Param1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x82482
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
	if (iParam4 != -1 && iParam5 != -1)
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIP");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*iParam0);
	}
	else
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "GATEBLIPDEF");
	}
	return 1;
}

void func_768(var uParam0)//Position - 0x8253D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 > 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9, false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_396[iVar0 /*203*/].f_8, true);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8, false))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9);
				}
			}
		}
		iVar0++;
	}
}

void func_769(int iParam0)//Position - 0x82603
{
	if ((!iLocal_908 && PLAYER::IS_PLAYER_ONLINE()) && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()))
	{
		switch (iParam0)
		{
			case 0:
				iLocal_909 = 100;
				break;
			case 1:
				iLocal_909 = 101;
				break;
			case 3:
				iLocal_909 = 102;
				break;
			case 4:
				iLocal_909 = 103;
				break;
			case 5:
				iLocal_909 = 104;
				break;
			case 2:
				iLocal_909 = 105;
				break;
		}
		iLocal_908 = func_770(&(Local_47.f_370), &(Local_47.f_371), &(Local_47.f_369), iLocal_909, &(Local_47.f_373), &(Local_47.f_372));
	}
}

int func_770(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)//Position - 0x826AD
{
	struct<69> Var0;
	struct<69> Var1;
	struct<13> Var2;
	struct<4> Var3;
	struct<13> Var4;
	Var0.f_3.f_1 = 4;
	Var1.f_3.f_1 = 4;
	Var2.f_19.f_1 = 4;
	Var4 = { __LIB_0__::func_819(PLAYER::PLAYER_ID()) };
	Var0.f_0 = 817;
	Var0.f_1 = 5;
	Var0.f_3 = 3;
	StringCopy(&(Var0.f_3.f_1[0 /*16*/]), "GameType", 32);
	StringCopy(&(Var0.f_3.f_1[1 /*16*/]), "Location", 32);
	StringCopy(&(Var0.f_3.f_1[2 /*16*/]), "Type", 32);
	StringCopy(&(Var0.f_3.f_1[0 /*16*/].f_8), "SP", 32);
	switch (iParam3)
	{
		case 0:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_1" /* GXT: South Los Santos */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 1:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_2" /* GXT: City Circuit */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 2:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_4" /* GXT: Airport */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 3:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_5" /* GXT: Freeway */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 4:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGCR_6" /* GXT: Vespucci Canals */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
			break;
		case 5:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_1" /* GXT: East Coast */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 6:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_2" /* GXT: North East Coast */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 7:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_3" /* GXT: Raton Canyon */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 8:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "MGSR_4" /* GXT: Los Santos */, 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
			break;
		case 100:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_01", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 101:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_02", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 102:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_03", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 103:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_04", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 104:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_05", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		case 105:
			StringCopy(&(Var0.f_3.f_1[1 /*16*/].f_8), "OR_RACE_06", 32);
			StringCopy(&(Var0.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			break;
		default:
			break;
	}
	switch (*uParam0)
	{
		case 0:
			if (__LIB_16__::func_757(uParam1, uParam2, &Var0, 1, 1))
			{
				__LIB_8__::func_305(&Var3, &Var0);
				if (*uParam2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var3))
				{
					if (Var3.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var2);
						if (!__LIB_0__::func_800(Var2))
						{
							*uParam0 = 2;
						}
						else
						{
							*uParam4 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 3);
							*uParam0 = 1;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
				}
				else
				{
					*uParam0 = 2;
				}
				__LIB_2__::func_547(uParam1, uParam2, &Var0);
				Var0 = { Var1 };
			}
			break;
		case 1:
			if (__LIB_15__::func_252(uParam1, uParam2, &Var0, &Var4))
			{
				__LIB_8__::func_305(&Var3, &Var0);
				if (*uParam2 && STATS::LEADERBOARDS2_READ_GET_ROW_DATA_START(&Var3))
				{
					if (Var3.f_3 > 0)
					{
						STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INFO(0, &Var2);
						if (!__LIB_0__::func_800(Var2))
						{
							*uParam0 = 2;
						}
						else
						{
							*uParam5 = STATS::LEADERBOARDS2_READ_GET_ROW_DATA_INT(0, 3);
							*uParam0 = 2;
						}
					}
					else
					{
						*uParam0 = 2;
					}
					STATS::LEADERBOARDS2_READ_GET_ROW_DATA_END();
				}
				else
				{
					*uParam0 = 2;
				}
				__LIB_2__::func_547(uParam1, uParam2, &Var0);
				Var0 = { Var1 };
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_771(var uParam0)//Position - 0x82B0D
{
	switch (iLocal_45)
	{
		case 0:
			if (iLocal_46 > 0)
			{
				if (MISC::GET_GAME_TIMER() < iLocal_46)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
					{
						if (__LIB_0__::func_695(uParam0->f_9) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9))
						{
							if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0->f_9)))
							{
								AUDIO::SET_VEHICLE_BOOST_ACTIVE(uParam0->f_9, true);
							}
							GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, false);
							iLocal_46 = MISC::GET_GAME_TIMER() + 1500;
							iLocal_45 = 1;
							CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
						}
					}
				}
				else
				{
					iLocal_45 = 2;
				}
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() > iLocal_46)
			{
				if (__LIB_0__::func_695(uParam0->f_9) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(uParam0->f_9)))
					{
						AUDIO::SET_VEHICLE_BOOST_ACTIVE(uParam0->f_9, false);
					}
					iLocal_45 = 2;
				}
			}
			else if (__LIB_0__::func_695(uParam0->f_9) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(uParam0->f_9, 0, 0f, 50f, 0f, 0f, 0f, 0f, 0, true, true, true, false, true);
			}
			break;
	}
}

void func_776()//Position - 0x82C92
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 98 /*INPUT_VEH_CINEMATIC_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 95 /*INPUT_VEH_CINEMATIC_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 65 /*INPUT_VEH_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 93 /*INPUT_VEH_SPECIAL_ABILITY_FRANKLIN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 50 /*INPUT_ACCURATE_AIM*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
}

void func_780(var uParam0)//Position - 0x82DEC
{
	iLocal_446 = -1;
	iLocal_447 = uParam0->f_396[0 /*203*/].f_12;
}

void func_781(var uParam0)//Position - 0x82E05
{
	int iVar0;
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(uParam0->f_396[0 /*203*/].f_16, uParam0->f_32[0 /*11*/], 50f, true, false, false, false, false, 0, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_396[0 /*203*/].f_16, 100f, true, false, false, false, false, false, 0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_17)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(uParam0->f_32[iVar0 /*11*/], 50f, true, false, false, false, false, false, 0);
		iVar0++;
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(uParam0->f_396[0 /*203*/].f_16, uParam0->f_32[0 /*11*/], 50f, false, false, true);
	switch (Local_47.f_11)
	{
		case 0:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-223.42f, 3948.36f, 36.52f, -212.37f, 3818.97f, 37.53f, 50f, false, false, true);
			MISC::CLEAR_AREA_OF_VEHICLES(-227.43f, 3888.9f, 36.41f, 50f, true, false, false, false, false, false, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(-1938.3416f, 4443.2607f, 36.4759f, 100f, true, false, false, false, false, false, 0);
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
			break;
		case 1:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-509.12537f, 1987.582f, 205.3305f, -948.5215f, 2752.7415f, 25.351442f, 300f, false, false, true);
			break;
		case 3:
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1943.822f, 4462.2856f, 0f, -229.07834f, 4227.072f, 50f, 250f, true, false, false, false, false, 0, 0);
			break;
		case 4:
			break;
		case 5:
			TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_BICYCLE_MOUNTAIN", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, false, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2242.488f, 2568.146f, -10f, 2242.488f, 1568.146f, 200f, 1000f, true, false, false, false, false, 0, 0);
			break;
		case 2:
			TASK::SET_SCENARIO_GROUP_ENABLED("QUARRY", false);
			PATHFIND::SET_ROADS_IN_ANGLED_AREA(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, true, false, true);
			MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(2809.9475f, 2993.644f, -9.3564f, 2952.9688f, 2530.636f, 177.1921f, 500f, true, false, false, false, false, 0, 0);
			break;
		case 6:
			break;
	}
}

int func_782()//Position - 0x83096
{
	char cVar0[16];
	if (!__LIB_1__::func_490(iLocal_258, 16384))
	{
		StringCopy(&cVar0, "Offroad_", 16);
		switch (Local_47.f_11)
		{
			case 0:
				StringIntConCat(&cVar0, 1, 16);
				break;
			case 1:
				StringIntConCat(&cVar0, 2, 16);
				break;
			case 2:
				StringIntConCat(&cVar0, 6, 16);
				break;
			case 3:
				StringIntConCat(&cVar0, 3, 16);
				break;
			case 4:
				StringIntConCat(&cVar0, 4, 16);
				break;
			case 5:
				StringIntConCat(&cVar0, 5, 16);
				break;
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
		{
			func_757(&iLocal_258, 16384);
			return 1;
		}
		return 0;
	}
	return 1;
}

void func_783(int iParam0)//Position - 0x8312F
{
	char cVar0[32];
	int iVar1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "orr_race1_post_rank", 32);
			iVar1 = 0;
			while (iVar1 < 6)
			{
				StringIntConCat(&cVar0, iVar1 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race1_post_rank", 32);
				iVar1++;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("orr_canyoncliffs_finish"))
			{
				TASK::REQUEST_WAYPOINT_RECORDING("orr_canyoncliffs_finish");
			}
			StringCopy(&Local_436, "orr_race1_post_rank", 64);
			StringCopy(&cLocal_437, "orr_canyoncliffs_finish", 64);
			Local_434[0 /*3*/] = { -212.7521f, 3803.012f, 38.3336f };
			fLocal_435[0] = 145.3736f;
			Local_434[1 /*3*/] = { -213.8073f, 3811.7708f, 37.8089f };
			fLocal_435[1] = 144.8253f;
			Local_434[2 /*3*/] = { -214.4785f, 3814.8494f, 37.6728f };
			fLocal_435[2] = 142.2629f;
			Local_434[3 /*3*/] = { -215.5335f, 3817.486f, 37.5397f };
			fLocal_435[3] = 143.4529f;
			Local_434[4 /*3*/] = { -216.7162f, 3819.5698f, 37.3961f };
			fLocal_435[4] = 140.5308f;
			Local_434[5 /*3*/] = { -217.8613f, 3822.401f, 37.1999f };
			fLocal_435[5] = 152.032f;
			break;
		case 1:
			TASK::REQUEST_WAYPOINT_RECORDING("orr_ridgerun_finish");
			StringCopy(&cVar0, "orr_race2_post_rank", 32);
			iVar1 = 0;
			while (iVar1 < 5)
			{
				StringIntConCat(&cVar0, iVar1 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race2_post_rank", 32);
				iVar1++;
			}
			StringCopy(&Local_436, "orr_race2_post_rank", 64);
			StringCopy(&cLocal_437, "orr_ridgerun_finish", 64);
			Local_434[0 /*3*/] = { -1178.9644f, 2589.4067f, 14.3822f };
			fLocal_435[0] = 166.0974f;
			Local_434[0 /*3*/] = { -1182.0496f, 2589.767f, 14.4012f };
			fLocal_435[0] = 170.4144f;
			Local_434[1 /*3*/] = { -1186.6792f, 2588.2346f, 14.3241f };
			fLocal_435[1] = 171.6951f;
			Local_434[2 /*3*/] = { -1190.0995f, 2586.3242f, 14.2684f };
			fLocal_435[2] = 178.707f;
			Local_434[3 /*3*/] = { -1194.2039f, 2584.1697f, 14.1352f };
			fLocal_435[3] = 181.7394f;
			break;
		case 3:
			TASK::REQUEST_WAYPOINT_RECORDING("orr_valleytrail_finish");
			StringCopy(&cVar0, "orr_race3_post_rank", 32);
			iVar1 = 0;
			while (iVar1 < 6)
			{
				StringIntConCat(&cVar0, iVar1 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race3_post_rank", 32);
				iVar1++;
			}
			StringCopy(&Local_436, "orr_race3_post_rank", 64);
			StringCopy(&cLocal_437, "orr_valleytrail_finish", 64);
			Local_434[0 /*3*/] = { -1876.48f, 4415.3f, 46.76f };
			fLocal_435[0] = 242.0357f;
			Local_434[1 /*3*/] = { -1880.11f, 4417.62f, 46.22f };
			fLocal_435[1] = 242.0357f;
			Local_434[2 /*3*/] = { -1883.44f, 4419.53f, 45.73f };
			fLocal_435[2] = 242.0357f;
			Local_434[3 /*3*/] = { -1887.3f, 4421.62f, 45.13f };
			fLocal_435[3] = 242.0357f;
			Local_434[4 /*3*/] = { -1891.44f, 4423.88f, 44.3f };
			fLocal_435[4] = 242.0357f;
			Local_434[5 /*3*/] = { -1895.06f, 4426.13f, 43.59f };
			fLocal_435[5] = 242.0357f;
			break;
		case 4:
			StringCopy(&cVar0, "orr_race4_post_rank", 32);
			iVar1 = 0;
			while (iVar1 < 5)
			{
				StringIntConCat(&cVar0, iVar1 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race4_post_rank", 32);
				iVar1++;
			}
			StringCopy(&Local_436, "orr_race4_post_rank", 64);
			TASK::REQUEST_WAYPOINT_RECORDING("orr_lakesidesplash_finish");
			StringCopy(&cLocal_437, "orr_lakesidesplash_finish", 64);
			Local_434[0 /*3*/] = { 1667.19f, 4562.59f, 41.6f };
			fLocal_435[0] = 270.1976f;
			Local_434[1 /*3*/] = { 1661.51f, 4562.63f, 42f };
			fLocal_435[1] = 270.1976f;
			Local_434[2 /*3*/] = { 1656.94f, 4562.33f, 42.12f };
			fLocal_435[2] = 270.1976f;
			Local_434[3 /*3*/] = { 1652.28f, 4562.09f, 42.28f };
			fLocal_435[3] = 270.1976f;
			Local_434[4 /*3*/] = { 1647.19f, 4561.91f, 42.56f };
			fLocal_435[4] = 270.1976f;
			break;
		case 5:
			TASK::REQUEST_WAYPOINT_RECORDING("orr_ecofriendly_finish");
			StringCopy(&cVar0, "orr_race5_post_rank", 32);
			iVar1 = 0;
			while (iVar1 < 6)
			{
				StringIntConCat(&cVar0, iVar1 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race5_post_rank", 32);
				iVar1++;
			}
			StringCopy(&Local_436, "orr_race5_post_rank", 64);
			StringCopy(&cLocal_437, "orr_ecofriendly_finish", 64);
			Local_434[0 /*3*/] = { 2528.1f, 1863.87f, 20.54f };
			fLocal_435[0] = 180.3076f;
			Local_434[1 /*3*/] = { 2527.99f, 1870.72f, 20.34f };
			fLocal_435[1] = 180.3076f;
			Local_434[2 /*3*/] = { 2527.84f, 1877.52f, 20.17f };
			fLocal_435[2] = 180.3076f;
			Local_434[3 /*3*/] = { 2527.71f, 1884.05f, 20.08f };
			fLocal_435[3] = 180.3076f;
			Local_434[4 /*3*/] = { 2527.6f, 1892.1f, 19.98f };
			fLocal_435[4] = 180.3076f;
			Local_434[5 /*3*/] = { 2527.49f, 1899.62f, 19.88f };
			fLocal_435[5] = 180.3076f;
			break;
		case 2:
			StringCopy(&cVar0, "orr_race6_post_rank", 32);
			iVar1 = 0;
			while (iVar1 < 6)
			{
				StringIntConCat(&cVar0, iVar1 + 1, 32);
				if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(&cVar0))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
				}
				StringCopy(&cVar0, "orr_race6_post_rank", 32);
				iVar1++;
			}
			StringCopy(&Local_436, "orr_race6_post_rank", 64);
			TASK::REQUEST_WAYPOINT_RECORDING("orr_minewardspiral_finish");
			StringCopy(&cLocal_437, "orr_minewardspiral_finish", 64);
			Local_434[0 /*3*/] = { 2966.5f, 2890.26f, 58.41f };
			fLocal_435[0] = 126.6092f;
			Local_434[1 /*3*/] = { 2969.78f, 2892.81f, 58.46f };
			fLocal_435[1] = 126.6092f;
			Local_434[2 /*3*/] = { 2972.34f, 2895.33f, 58.41f };
			fLocal_435[2] = 126.6092f;
			Local_434[3 /*3*/] = { 2974.65f, 2897.74f, 58.4f };
			fLocal_435[3] = 126.6092f;
			Local_434[4 /*3*/] = { 2977.32f, 2900.29f, 58.56f };
			fLocal_435[4] = 126.6092f;
			Local_434[5 /*3*/] = { 2979.87f, 2902.49f, 58.75f };
			fLocal_435[5] = 126.6092f;
			break;
		case 6:
			TASK::REQUEST_WAYPOINT_RECORDING("OR_Post_7");
			StringCopy(&Local_436, "OR_Post_7", 64);
			Local_434[0 /*3*/] = { 1211.3209f, 2377.7466f, 62.4187f };
			fLocal_435[0] = 5.7949f;
			Local_434[1 /*3*/] = { 1211.2759f, 2374.0796f, 62.4053f };
			fLocal_435[1] = 346.0673f;
			Local_434[2 /*3*/] = { 1209.6149f, 2371.051f, 62.0576f };
			fLocal_435[2] = 314.3206f;
			Local_434[3 /*3*/] = { 1205.509f, 2369.2644f, 61.143f };
			fLocal_435[3] = 286.8246f;
			Local_434[4 /*3*/] = { 1200.0502f, 2368.534f, 60.005f };
			fLocal_435[4] = 265.4383f;
			Local_434[5 /*3*/] = { 1194.9589f, 2368.5435f, 59.1379f };
			fLocal_435[5] = 267.241f;
			break;
			break;
	}
	fLocal_435[0] = fLocal_435[0];
}

void func_784()//Position - 0x83915
{
	int iVar0;
	Local_1203.f_0 = 0;
	if (__LIB_0__::func_683() == 2)
	{
		__LIB_0__::func_222(&uLocal_269, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (__LIB_0__::func_683() == 0)
	{
		__LIB_0__::func_222(&uLocal_269, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (__LIB_0__::func_683() == 1)
	{
		__LIB_0__::func_222(&uLocal_269, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	__LIB_0__::func_222(&uLocal_269, 1, 0, "OR_Taunt", 0, 1);
	func_208(&Local_1203);
	switch (Local_47.f_11)
	{
		case 0:
			func_798(&Local_1203);
			break;
		case 1:
			func_797(&Local_1203);
			break;
		case 3:
			func_796(&Local_1203);
			break;
		case 4:
			func_795(&Local_1203);
			break;
		case 5:
			func_794(&Local_1203);
			break;
		case 2:
			func_786(&Local_1203);
			break;
	}
	if (func_142())
	{
		iVar0 = 0;
		while (iVar0 < Local_1203.f_18)
		{
			if (Local_1203.f_396[iVar0 /*203*/].f_8 != PLAYER::PLAYER_PED_ID())
			{
				Local_1203.f_396[iVar0 /*203*/].f_21 = func_785();
			}
			iVar0++;
		}
	}
}

int func_785()//Position - 0x83A38
{
	int iVar0;
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 10000) % 2);
	switch (iVar0)
	{
		case 0:
			return joaat("A_M_Y_MotoX_01");
		case 1:
		default:
	}
	return joaat("A_M_Y_MotoX_01");
}

void func_786(int iParam0)//Position - 0x83A6C
{
	func_793("MinewardSpiral");
	func_208(iParam0);
	iParam0->f_3790[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3790[1 /*3*/] = { 2992.58f, 2786.28f, 43.21f };
	iParam0->f_3790[2 /*3*/] = { 2995.76f, 2787.72f, 43.26f };
	iParam0->f_3801[0] = 1f;
	iParam0->f_3801[1] = 0f;
	iParam0->f_3804[0] = 2.3f;
	iParam0->f_3804[1] = 2.3f;
	iParam0->f_3807 = 1600f;
	iParam0->f_17 = 32;
	iParam0->f_3606 = 1;
	iParam0->f_3607 = 2;
	iParam0->f_3608 = { 2980.0066f, 2887.962f, 58.5826f };
	iParam0->f_3611 = 124.045f;
	iParam0->f_3629 = { 2998.2952f, 2764.2883f, 41.8084f };
	iParam0->f_3632 = 330.3521f;
	iParam0->f_3808 = { 2993.1956f, 2896.852f, 58.8192f };
	iParam0->f_3811 = 328.6752f;
	iParam0->f_3618 = 6f;
	iParam0->f_3619 = 18f;
	func_217(iParam0);
	iParam0->f_3755 = { 2986.7898f, 2883.7031f, 63.6161f };
	iParam0->f_3758 = { -5.6336f, -0.0026f, 102.4159f };
	iParam0->f_3767 = 35.2836f;
	iParam0->f_3761 = { 2985.1694f, 2883.346f, 80.4381f };
	iParam0->f_3764 = { 24.6443f, -0.0026f, 102.4159f };
	iParam0->f_3768 = { 2976.6326f, 2885.5654f, 104.9947f };
	iParam0->f_3771 = { 42.4712f, -0.0019f, 130.0713f };
	iParam0->f_3774 = { 2982.3706f, 2890.2847f, 60.3559f };
	iParam0->f_3777 = { -6.1457f, 0.0053f, 130.5831f };
	iParam0->f_3788 = 3.5f;
	iParam0->f_3754 = 9;
	iParam0->f_3633[0 /*8*/] = { 2941.318f, 2840.509f, 57.7108f };
	iParam0->f_3633[0 /*8*/].f_3 = { 2918.521f, 2826.042f, 43.7679f };
	iParam0->f_3633[0 /*8*/].f_6 = 5f;
	iParam0->f_3633[0 /*8*/].f_7 = 0.5f;
	iParam0->f_3633[1 /*8*/] = { 2904.722f, 2773.682f, 58.7576f };
	iParam0->f_3633[1 /*8*/].f_3 = { 2930.713f, 2736.947f, 48.0526f };
	iParam0->f_3633[1 /*8*/].f_6 = 9f;
	iParam0->f_3633[1 /*8*/].f_7 = -1f;
	iParam0->f_3633[2 /*8*/] = { 2965.486f, 2871.721f, 61.1835f };
	iParam0->f_3633[2 /*8*/].f_3 = { 3009.263f, 2797.698f, 50.2022f };
	iParam0->f_3633[2 /*8*/].f_6 = 9f;
	iParam0->f_3633[2 /*8*/].f_7 = -1f;
	iParam0->f_3633[3 /*8*/] = { 2824.695f, 2884.227f, 55.1744f };
	iParam0->f_3633[3 /*8*/].f_3 = { 2857.785f, 2820.281f, 44.5227f };
	iParam0->f_3633[3 /*8*/].f_6 = 9f;
	iParam0->f_3633[3 /*8*/].f_7 = -1f;
	iParam0->f_3633[4 /*8*/] = { 2977.486f, 2939.126f, 82.2107f };
	iParam0->f_3633[4 /*8*/].f_3 = { 2961.479f, 2917.383f, 71.042f };
	iParam0->f_3633[4 /*8*/].f_6 = 9f;
	iParam0->f_3633[4 /*8*/].f_7 = -1f;
	iParam0->f_3633[5 /*8*/] = { 3039.69f, 2953.354f, 74.9672f };
	iParam0->f_3633[5 /*8*/].f_3 = { 3035.455f, 2908.553f, 64.3637f };
	iParam0->f_3633[5 /*8*/].f_6 = 9f;
	iParam0->f_3633[5 /*8*/].f_7 = -1f;
	iParam0->f_3633[6 /*8*/] = { 3015.062f, 2855.131f, 77.5502f };
	iParam0->f_3633[6 /*8*/].f_3 = { 3032.751f, 2818.144f, 67.7152f };
	iParam0->f_3633[6 /*8*/].f_6 = 9f;
	iParam0->f_3633[6 /*8*/].f_7 = -1f;
	iParam0->f_3633[7 /*8*/] = { 2904.722f, 2773.682f, 58.7576f };
	iParam0->f_3633[7 /*8*/].f_3 = { 2930.713f, 2736.947f, 48.0526f };
	iParam0->f_3633[7 /*8*/].f_6 = 9f;
	iParam0->f_3633[7 /*8*/].f_7 = -1f;
	iParam0->f_3633[8 /*8*/] = { 2946.503f, 2867.024f, 61.4466f };
	iParam0->f_3633[8 /*8*/].f_3 = { 2912.593f, 2843.979f, 50.5097f };
	iParam0->f_3633[8 /*8*/].f_6 = 9f;
	iParam0->f_3633[8 /*8*/].f_7 = -1f;
	func_792(&(iParam0->f_32[0 /*11*/]), 2979.924f, 2810.378f, 43.1119f, 32.8606f, 15f, 0, 0);
	func_792(&(iParam0->f_32[1 /*11*/]), 2948.297f, 2840.8083f, 46.074f, 97.0967f, 15f, 0, 0);
	func_792(&(iParam0->f_32[2 /*11*/]), 2907.5552f, 2819.5347f, 52.9237f, 143.0102f, 15f, 0, 0);
	func_792(&(iParam0->f_32[3 /*11*/]), 2896.7947f, 2785.0933f, 53.6336f, 185.8202f, 15f, 0, 0);
	func_792(&(iParam0->f_32[4 /*11*/]), 2923.7598f, 2744.9326f, 52.6429f, 213.799f, 15f, 0, 0);
	func_792(&(iParam0->f_32[5 /*11*/]), 2978.9668f, 2728.007f, 53.3941f, 318.1995f, 15f, 0, 0);
	func_792(&(iParam0->f_32[6 /*11*/]), 3017.38f, 2777.645f, 52.6012f, 20.8136f, 15f, 0, 0);
	func_792(&(iParam0->f_32[7 /*11*/]), 2972.6665f, 2855.168f, 55.8068f, 42.1725f, 15f, 0, 0);
	func_792(&(iParam0->f_32[8 /*11*/]), 2929.9902f, 2878.205f, 59.726f, 131.7729f, 15f, 0, 0);
	func_792(&(iParam0->f_32[9 /*11*/]), 2899.202f, 2852.994f, 63.2669f, 91.4971f, 15f, 0, 0);
	func_792(&(iParam0->f_32[10 /*11*/]), 2851.1094f, 2865.775f, 55.7528f, 40f, 15f, 0, 0);
	func_792(&(iParam0->f_32[11 /*11*/]), 2817.6074f, 2901.4016f, 44.9261f, 178.296f, 0.5f, 0, 0);
	func_792(&(iParam0->f_32[12 /*11*/]), 2833.6816f, 2871.7195f, 47.2565f, 202.8879f, 15f, 0, 0);
	func_792(&(iParam0->f_32[13 /*11*/]), 2851.9697f, 2827.021f, 51.576f, 209.3698f, 15f, 0, 0);
	func_792(&(iParam0->f_32[14 /*11*/]), 2877.8904f, 2780.0374f, 57.3181f, 208.8235f, 15f, 0, 0);
	func_792(&(iParam0->f_32[15 /*11*/]), 2913.54f, 2730.888f, 61.8753f, 205.3804f, 15f, 0, 0);
	func_792(&(iParam0->f_32[16 /*11*/]), 2956.193f, 2682.486f, 63.3001f, 262.9329f, 15f, 0, 0);
	func_792(&(iParam0->f_32[17 /*11*/]), 3010.529f, 2715.857f, 63.2056f, 287.6325f, 15f, 0, 0);
	func_792(&(iParam0->f_32[18 /*11*/]), 3047.1565f, 2767.09f, 66.9343f, 8.3449f, 15f, 0, 0);
	func_792(&(iParam0->f_32[19 /*11*/]), 3021.054f, 2807.988f, 65.2655f, 34.6069f, 15f, 0, 0);
	func_792(&(iParam0->f_32[20 /*11*/]), 2991.9707f, 2884.7349f, 60.2772f, 353.71f, 15f, 0, 0);
	func_792(&(iParam0->f_32[21 /*11*/]), 3011.79f, 2945.661f, 65.9224f, 107.1971f, 2f, 0, 0);
	func_792(&(iParam0->f_32[22 /*11*/]), 2955.934f, 2911.658f, 70.9026f, 338.0471f, 2f, 0, 0);
	func_792(&(iParam0->f_32[23 /*11*/]), 2984.31f, 2945.62f, 78.5753f, 312.7021f, 15f, 0, 0);
	func_792(&(iParam0->f_32[24 /*11*/]), 3034.908f, 2967.004f, 70.6033f, 192.7614f, 15f, 0, 0);
	func_792(&(iParam0->f_32[25 /*11*/]), 3014.159f, 2879.141f, 71.7657f, 179.7664f, 15f, 0, 0);
	func_792(&(iParam0->f_32[26 /*11*/]), 3039.591f, 2812.7f, 70.0086f, 205.8111f, 15f, 0, 0);
	func_792(&(iParam0->f_32[27 /*11*/]), 3023.214f, 2733.869f, 60.6356f, 109.1779f, 15f, 0, 0);
	func_792(&(iParam0->f_32[28 /*11*/]), 2944.2222f, 2713.849f, 53.418f, 40.0634f, 15f, 0, 0);
	func_792(&(iParam0->f_32[29 /*11*/]), 2896.593f, 2789.731f, 53.8335f, 350.9532f, 15f, 0, 0);
	func_792(&(iParam0->f_32[30 /*11*/]), 2919.053f, 2848.119f, 54.7335f, 304.1605f, 15f, 0, 0);
	func_792(&(iParam0->f_32[31 /*11*/]), 2963.216f, 2876.133f, 57.6815f, 303.8434f, 15f, 1, 0);
	iParam0->f_18 = 6;
	__LIB_39__::func_723(&(iParam0->f_396[0 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[0 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_47.f_1);
	__LIB_39__::func_721(&(iParam0->f_396[0 /*203*/]), 2996.96f, 2773.84f, 42.41f, 20.89f);
	__LIB_39__::func_720(&(iParam0->f_396[0 /*203*/]), 0, joaat("Player_One"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[1 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[1 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[1 /*203*/]), 2992.58f, 2786.28f, 43.21f, 26.81f);
	__LIB_39__::func_720(&(iParam0->f_396[1 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[2 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[2 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[2 /*203*/]), 2998.043f, 2784.221f, 42.5605f, 33.42f);
	__LIB_39__::func_720(&(iParam0->f_396[2 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[3 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[3 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[3 /*203*/]), 2994.91f, 2779.79f, 42.73f, 11.43f);
	__LIB_39__::func_720(&(iParam0->f_396[3 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[4 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[4 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[4 /*203*/]), 2999.44f, 2781.11f, 43.11f, 23.89f);
	__LIB_39__::func_720(&(iParam0->f_396[4 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[5 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[5 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[5 /*203*/]), 3000.06f, 2775.26f, 42.47f, 17.16f);
	__LIB_39__::func_720(&(iParam0->f_396[5 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
}

void func_789(var uParam0, int iParam1, int iParam2)//Position - 0x84661
{
	if (iParam1 != 0)
	{
		uParam0->f_8 = iParam1;
	}
	if (iParam2 != 0)
	{
		uParam0->f_9 = iParam2;
	}
}

void func_792(var uParam0, struct<3> Param1, float fParam2, float fParam3, int iParam4, int iParam5)//Position - 0x846B1
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam3;
	uParam0->f_8 = iParam4;
	uParam0->f_9 = iParam5;
	uParam0->f_4 = fParam2;
}

void func_793(char* sParam0)//Position - 0x846D9
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST(sParam0))
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED(sParam0))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED(sParam0, true);
				TASK::SET_EXCLUSIVE_SCENARIO_GROUP(sParam0);
			}
		}
	}
}

void func_794(int iParam0)//Position - 0x84711
{
	func_793("EcoFriendly");
	func_208(iParam0);
	iParam0->f_3790[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3790[1 /*3*/] = { 2050.881f, 2127.622f, 91.4509f };
	iParam0->f_3790[2 /*3*/] = { 2049.5093f, 2123.8713f, 91.4899f };
	iParam0->f_3801[0] = 1.2f;
	iParam0->f_3801[1] = 0f;
	iParam0->f_3804[0] = 2f;
	iParam0->f_3804[1] = 2f;
	iParam0->f_3807 = 1900f;
	iParam0->f_17 = 32;
	iParam0->f_3606 = 1;
	iParam0->f_3607 = 2;
	iParam0->f_3608 = { 2504.6455f, 1998.7272f, 19.1012f };
	iParam0->f_3611 = 206.8969f;
	iParam0->f_3629 = { 2048.6326f, 2151.6023f, 93.9434f };
	iParam0->f_3632 = 179.181f;
	iParam0->f_3808 = { 2524.6726f, 1987.0459f, 18.8377f };
	iParam0->f_3811 = 297.3222f;
	iParam0->f_3618 = 6f;
	iParam0->f_3619 = 18f;
	func_217(iParam0);
	iParam0->f_3755 = { 2499.1904f, 2001.7711f, 20.7579f };
	iParam0->f_3758 = { 7.6037f, 0.4053f, 22.4732f };
	iParam0->f_3767 = 45.5283f;
	iParam0->f_3761 = { 2502.3394f, 1995.128f, 72.812f };
	iParam0->f_3764 = { 78.431f, 0.4019f, 22.4845f };
	iParam0->f_3768 = { 2505.4368f, 1996.8837f, 61.8389f };
	iParam0->f_3771 = { 64.8241f, -0.0019f, -147.0777f };
	iParam0->f_3774 = { 2502.634f, 2001.3615f, 20.8696f };
	iParam0->f_3777 = { -6.2077f, 0.0009f, -146.539f };
	iParam0->f_3780 = { 2502.5132f, 2006.2295f, 21.5446f };
	iParam0->f_3783 = { -6.8036f, 0.0009f, -164.4838f };
	iParam0->f_3754 = 10;
	iParam0->f_3633[0 /*8*/] = { 2167.324f, 1977.03f, 112.7385f };
	iParam0->f_3633[0 /*8*/].f_3 = { 2205.897f, 1865.513f, 89.9993f };
	iParam0->f_3633[0 /*8*/].f_6 = 14f;
	iParam0->f_3633[0 /*8*/].f_7 = 0.65f;
	iParam0->f_3633[1 /*8*/] = { 2181.741f, 1720.485f, 106.2526f };
	iParam0->f_3633[1 /*8*/].f_3 = { 2126.277f, 1667.074f, 85.8048f };
	iParam0->f_3633[1 /*8*/].f_6 = 18f;
	iParam0->f_3633[1 /*8*/].f_7 = 0.65f;
	iParam0->f_3633[2 /*8*/] = { 2166.598f, 1804.395f, 115.9017f };
	iParam0->f_3633[2 /*8*/].f_3 = { 2072.238f, 1713.526f, 89.7735f };
	iParam0->f_3633[2 /*8*/].f_6 = 41f;
	iParam0->f_3633[2 /*8*/].f_7 = 0.65f;
	iParam0->f_3633[3 /*8*/] = { 2290.406f, 1936.941f, 136.6993f };
	iParam0->f_3633[3 /*8*/].f_3 = { 2258.399f, 1876.945f, 111.6761f };
	iParam0->f_3633[3 /*8*/].f_6 = 23f;
	iParam0->f_3633[3 /*8*/].f_7 = 0.7f;
	iParam0->f_3633[4 /*8*/] = { 2260.006f, 2041.987f, 143.5354f };
	iParam0->f_3633[4 /*8*/].f_3 = { 2291.258f, 1981.594f, 119.662f };
	iParam0->f_3633[4 /*8*/].f_6 = 18f;
	iParam0->f_3633[4 /*8*/].f_7 = 0.7f;
	iParam0->f_3633[5 /*8*/] = { 2162.319f, 2284.559f, 124.819f };
	iParam0->f_3633[5 /*8*/].f_3 = { 2173.939f, 2176.18f, 97.8743f };
	iParam0->f_3633[5 /*8*/].f_6 = 18f;
	iParam0->f_3633[5 /*8*/].f_7 = 0.7f;
	iParam0->f_3633[6 /*8*/] = { 2077.626f, 2441.118f, 98.3924f };
	iParam0->f_3633[6 /*8*/].f_3 = { 2014.791f, 2376.684f, 73.026f };
	iParam0->f_3633[6 /*8*/].f_6 = 27f;
	iParam0->f_3633[6 /*8*/].f_7 = 0.7f;
	iParam0->f_3633[7 /*8*/] = { 2225.084f, 2333.921f, 94.4721f };
	iParam0->f_3633[7 /*8*/].f_3 = { 2245.739f, 2208.612f, 67.6869f };
	iParam0->f_3633[7 /*8*/].f_6 = 27f;
	iParam0->f_3633[7 /*8*/].f_7 = 0.7f;
	iParam0->f_3633[8 /*8*/] = { 2318.396f, 2328.963f, 86.1274f };
	iParam0->f_3633[8 /*8*/].f_3 = { 2304.876f, 2239.984f, 61.5653f };
	iParam0->f_3633[8 /*8*/].f_6 = 27f;
	iParam0->f_3633[8 /*8*/].f_7 = 0.7f;
	iParam0->f_3633[9 /*8*/] = { 2415.408f, 2331.722f, 68.228f };
	iParam0->f_3633[9 /*8*/].f_3 = { 2482.094f, 2138.929f, 24.9998f };
	iParam0->f_3633[9 /*8*/].f_6 = 27f;
	iParam0->f_3633[9 /*8*/].f_7 = 0.7f;
	func_792(&(iParam0->f_32[0 /*11*/]), 2141.911f, 2052.6196f, 90.6277f, 166.5133f, 15f, 0, 0);
	func_792(&(iParam0->f_32[1 /*11*/]), 2165.824f, 1975.166f, 93.4036f, 203.6161f, 15f, 0, 0);
	func_792(&(iParam0->f_32[2 /*11*/]), 2206.066f, 1867.3949f, 102.8335f, 188.2386f, 15f, 0, 0);
	func_792(&(iParam0->f_32[3 /*11*/]), 2215.148f, 1764.0555f, 96.0258f, 153.5908f, 15f, 0, 0);
	func_792(&(iParam0->f_32[4 /*11*/]), 2158.267f, 1701.619f, 93.9455f, 132.5378f, 15f, 0, 0);
	func_792(&(iParam0->f_32[5 /*11*/]), 2082.129f, 1653.05f, 95.5486f, 46.0799f, 15f, 0, 0);
	func_792(&(iParam0->f_32[6 /*11*/]), 2069.6396f, 1704.767f, 101.9224f, 328.1978f, 15f, 0, 0);
	func_792(&(iParam0->f_32[7 /*11*/]), 2173.388f, 1791.8561f, 106.1635f, 315.567f, 15f, 0, 0);
	func_792(&(iParam0->f_32[8 /*11*/]), 2262.277f, 1883.9249f, 117.2448f, 337.8492f, 15f, 0, 0);
	func_792(&(iParam0->f_32[9 /*11*/]), 2298.1f, 1973.362f, 130.1531f, 31.9428f, 35f, 0, 0);
	func_792(&(iParam0->f_32[10 /*11*/]), 2240.982f, 2055.917f, 128.8369f, 69.9408f, 15f, 0, 0);
	func_792(&(iParam0->f_32[11 /*11*/]), 2187.064f, 2115.366f, 124.4313f, 69.7971f, 15f, 0, 0);
	func_792(&(iParam0->f_32[12 /*11*/]), 2175.135f, 2178.359f, 115.5291f, 333.4648f, 15f, 0, 0);
	func_792(&(iParam0->f_32[13 /*11*/]), 2155.706f, 2279.126f, 104.2192f, 9.3879f, 15f, 0, 0);
	func_792(&(iParam0->f_32[14 /*11*/]), 2155.471f, 2360.121f, 107.0664f, 342.6922f, 15f, 0, 0);
	func_792(&(iParam0->f_32[15 /*11*/]), 2125.402f, 2410.47f, 99.9028f, 85.3731f, 15f, 0, 0);
	func_792(&(iParam0->f_32[16 /*11*/]), 2025.532f, 2342.738f, 92.424f, 115.5183f, 1f, 0, 0);
	func_792(&(iParam0->f_32[17 /*11*/]), 2011.317f, 2364.262f, 87.7059f, 304.8824f, 0.3f, 0, 0);
	func_792(&(iParam0->f_32[18 /*11*/]), 2066.338f, 2431.3894f, 84.2313f, 308.0472f, 15f, 0, 0);
	func_792(&(iParam0->f_32[19 /*11*/]), 2120.6392f, 2450.425f, 87.4022f, 258.9786f, 15f, 0, 0);
	func_792(&(iParam0->f_32[20 /*11*/]), 2199.044f, 2440.765f, 86.1534f, 215.4235f, 15f, 0, 0);
	func_792(&(iParam0->f_32[21 /*11*/]), 2231.509f, 2356.282f, 75.5773f, 180.3866f, 15f, 0, 0);
	func_792(&(iParam0->f_32[22 /*11*/]), 2247.375f, 2238.617f, 79.7798f, 202.7603f, 15f, 0, 0);
	func_792(&(iParam0->f_32[23 /*11*/]), 2280.42f, 2173.15f, 76.9772f, 313.6382f, 15f, 0, 0);
	func_792(&(iParam0->f_32[24 /*11*/]), 2298.1238f, 2223.8635f, 76.3006f, 352.7675f, 15f, 0, 0);
	func_792(&(iParam0->f_32[25 /*11*/]), 2331.988f, 2336.1484f, 71.2906f, 357.619f, 15f, 0, 0);
	func_792(&(iParam0->f_32[26 /*11*/]), 2302.194f, 2429.105f, 65.3744f, 326.6184f, 15f, 0, 0);
	func_792(&(iParam0->f_32[27 /*11*/]), 2358.045f, 2420.025f, 61.147f, 236.7312f, 15f, 0, 0);
	func_792(&(iParam0->f_32[28 /*11*/]), 2411.4988f, 2360.2466f, 59.7345f, 191.8318f, 15f, 0, 0);
	func_792(&(iParam0->f_32[29 /*11*/]), 2445.2034f, 2244.7778f, 46.9808f, 192.0339f, 15f, 0, 0);
	func_792(&(iParam0->f_32[30 /*11*/]), 2479.631f, 2116.394f, 32.8883f, 184.7639f, 15f, 0, 0);
	func_792(&(iParam0->f_32[31 /*11*/]), 2483.2065f, 2026.7452f, 23.1603f, 198.5985f, 15f, 1, 0);
	iParam0->f_18 = 6;
	__LIB_39__::func_723(&(iParam0->f_396[0 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[0 /*203*/]), "Player");
	func_789(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_47.f_1);
	__LIB_39__::func_721(&(iParam0->f_396[0 /*203*/]), 2037.6f, 2136.15f, 93.15f, 238.07f);
	__LIB_39__::func_720(&(iParam0->f_396[0 /*203*/]), 0, joaat("Player_One"), joaat("mesa"));
	__LIB_39__::func_723(&(iParam0->f_396[1 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[1 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[1 /*203*/]), 2046.7721f, 2130.4421f, 91.9486f, 233.1493f);
	__LIB_39__::func_720(&(iParam0->f_396[1 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("bjxl"));
	__LIB_39__::func_723(&(iParam0->f_396[2 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[2 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[2 /*203*/]), 2045.3445f, 2126.3523f, 91.9358f, 236.3633f);
	__LIB_39__::func_720(&(iParam0->f_396[2 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("mesa"));
	__LIB_39__::func_723(&(iParam0->f_396[3 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[3 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[3 /*203*/]), 2034.8207f, 2138.8853f, 92.6919f, 237.2035f);
	__LIB_39__::func_720(&(iParam0->f_396[3 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("bjxl"));
	__LIB_39__::func_723(&(iParam0->f_396[4 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[4 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[4 /*203*/]), 2041.237f, 2134.698f, 92.4401f, 232.9754f);
	__LIB_39__::func_720(&(iParam0->f_396[4 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("bfinjection"));
	__LIB_39__::func_723(&(iParam0->f_396[5 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[5 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[5 /*203*/]), 2039.4126f, 2130.2275f, 92.5788f, 241.4449f);
	__LIB_39__::func_720(&(iParam0->f_396[5 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sadler"));
}

void func_795(int iParam0)//Position - 0x85370
{
	func_793("LakesideSplash");
	func_208(iParam0);
	iParam0->f_3790[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3790[1 /*3*/] = { 1609.4054f, 3843.6296f, 33.3039f };
	iParam0->f_3790[2 /*3*/] = { 1610.47f, 3842.26f, 33.61f };
	iParam0->f_3801[0] = 0.6f;
	iParam0->f_3801[1] = 0f;
	iParam0->f_3804[0] = 2.1f;
	iParam0->f_3804[1] = 2.1f;
	iParam0->f_3807 = 3000f;
	iParam0->f_17 = 23;
	iParam0->f_3606 = 1;
	iParam0->f_3607 = 3;
	iParam0->f_3608 = { 1771.8617f, 4580.5806f, 36.6618f };
	iParam0->f_3611 = 245.629f;
	iParam0->f_3629 = { 1604.7012f, 3815.548f, 33.8019f };
	iParam0->f_3632 = 307.8146f;
	iParam0->f_3808 = { 1770.2928f, 4563.532f, 36.8169f };
	iParam0->f_3811 = 260.4078f;
	iParam0->f_3618 = 6f;
	iParam0->f_3619 = 18f;
	func_217(iParam0);
	iParam0->f_3755 = { 1774.4712f, 4582.74f, 38.2051f };
	iParam0->f_3758 = { -0.6042f, 0.0069f, -136.8127f };
	iParam0->f_3767 = 45.0174f;
	iParam0->f_3761 = { 1774.603f, 4582.596f, 56.7003f };
	iParam0->f_3764 = { 55.0201f, 0.0069f, -136.8127f };
	iParam0->f_3768 = { 1773.0336f, 4579.8394f, 67.4021f };
	iParam0->f_3771 = { 48.0699f, 0.0015f, -108.3325f };
	iParam0->f_3774 = { 1768.6444f, 4581.3774f, 38.4301f };
	iParam0->f_3777 = { -6.1888f, 0.0001f, -107.803f };
	iParam0->f_3754 = 10;
	iParam0->f_3633[0 /*8*/] = { 1889.741f, 3981.563f, 38.8384f };
	iParam0->f_3633[0 /*8*/].f_3 = { 1808.741f, 3981.563f, 27.8598f };
	iParam0->f_3633[0 /*8*/].f_6 = 9f;
	iParam0->f_3633[0 /*8*/].f_7 = -1f;
	iParam0->f_3633[1 /*8*/] = { 1925.476f, 3976.481f, 38.0079f };
	iParam0->f_3633[1 /*8*/].f_3 = { 1966.193f, 3957.321f, 27.4639f };
	iParam0->f_3633[1 /*8*/].f_6 = 9f;
	iParam0->f_3633[1 /*8*/].f_7 = -1f;
	iParam0->f_3633[2 /*8*/] = { 2169.178f, 3888.335f, 37.9252f };
	iParam0->f_3633[2 /*8*/].f_3 = { 2214.175f, 3887.77f, 27.4639f };
	iParam0->f_3633[2 /*8*/].f_6 = 9f;
	iParam0->f_3633[2 /*8*/].f_7 = -1f;
	iParam0->f_3633[3 /*8*/] = { 2320.415f, 3976.647f, 39.8941f };
	iParam0->f_3633[3 /*8*/].f_3 = { 2251.986f, 3910.75f, 28.9624f };
	iParam0->f_3633[3 /*8*/].f_6 = 9f;
	iParam0->f_3633[3 /*8*/].f_7 = -1f;
	iParam0->f_3633[4 /*8*/] = { 2371.606f, 4042.119f, 37.145f };
	iParam0->f_3633[4 /*8*/].f_3 = { 2343.242f, 4000.942f, 26.506f };
	iParam0->f_3633[4 /*8*/].f_6 = 9f;
	iParam0->f_3633[4 /*8*/].f_7 = -1f;
	iParam0->f_3633[5 /*8*/] = { 2388.561f, 4183.628f, 37.145f };
	iParam0->f_3633[5 /*8*/].f_3 = { 2378.303f, 4075.112f, 26.506f };
	iParam0->f_3633[5 /*8*/].f_6 = 14f;
	iParam0->f_3633[5 /*8*/].f_7 = -1f;
	iParam0->f_3633[6 /*8*/] = { 2455.368f, 4445.856f, 46.1903f };
	iParam0->f_3633[6 /*8*/].f_3 = { 2436.29f, 4338.539f, 32.4383f };
	iParam0->f_3633[6 /*8*/].f_6 = 14f;
	iParam0->f_3633[6 /*8*/].f_7 = -1f;
	iParam0->f_3633[7 /*8*/] = { 2294.331f, 4666.395f, 41.8361f };
	iParam0->f_3633[7 /*8*/].f_3 = { 2348.202f, 4662.665f, 28.3757f };
	iParam0->f_3633[7 /*8*/].f_6 = 9f;
	iParam0->f_3633[7 /*8*/].f_7 = -1f;
	iParam0->f_3633[8 /*8*/] = { 2110.394f, 4634.22f, 41.0296f };
	iParam0->f_3633[8 /*8*/].f_3 = { 2146.925f, 4652.833f, 27.2709f };
	iParam0->f_3633[8 /*8*/].f_6 = 9f;
	iParam0->f_3633[8 /*8*/].f_7 = -1f;
	iParam0->f_3633[9 /*8*/] = { 1749.124f, 4556.489f, 44.5424f };
	iParam0->f_3633[9 /*8*/].f_3 = { 1805.002f, 4575.425f, 30.402f };
	iParam0->f_3633[9 /*8*/].f_6 = 9f;
	iParam0->f_3633[9 /*8*/].f_7 = -1f;
	func_792(&(iParam0->f_32[0 /*11*/]), 1672.009f, 3892.235f, 33.2404f, 310.0604f, 15f, 0, 0);
	func_792(&(iParam0->f_32[1 /*11*/]), 1723.9088f, 3939.3005f, 32.7933f, 300.7313f, 15f, 0, 0);
	func_792(&(iParam0->f_32[2 /*11*/]), 1888.5605f, 3980.466f, 30.9868f, 259.397f, 15f, 0, 0);
	func_792(&(iParam0->f_32[3 /*11*/]), 1959.5233f, 3958.426f, 31.5639f, 233.6847f, 15f, 0, 0);
	func_792(&(iParam0->f_32[4 /*11*/]), 2017.407f, 3916.748f, 32.9635f, 236.8508f, 15f, 0, 0);
	func_792(&(iParam0->f_32[5 /*11*/]), 2085.5007f, 3878.556f, 30.7581f, 272.6228f, 15f, 0, 0);
	func_792(&(iParam0->f_32[6 /*11*/]), 2256.276f, 3883.457f, 32.4238f, 336.0722f, 15f, 0, 0);
	func_792(&(iParam0->f_32[7 /*11*/]), 2286.8035f, 3939.468f, 32.7243f, 308.4637f, 15f, 0, 0);
	func_792(&(iParam0->f_32[8 /*11*/]), 2366.8096f, 4022.581f, 32.2681f, 334.459f, 15f, 0, 0);
	func_792(&(iParam0->f_32[9 /*11*/]), 2383.149f, 4147.7695f, 32.851f, 331.0306f, 15f, 0, 0);
	func_792(&(iParam0->f_32[10 /*11*/]), 2424.846f, 4228.963f, 34.1509f, 354.7785f, 15f, 0, 0);
	func_792(&(iParam0->f_32[11 /*11*/]), 2427.842f, 4294.5938f, 35.2968f, 348.9683f, 15f, 0, 0);
	func_792(&(iParam0->f_32[12 /*11*/]), 2443.338f, 4377.2886f, 34.1383f, 351.4983f, 15f, 0, 0);
	func_792(&(iParam0->f_32[13 /*11*/]), 2458.302f, 4494.7f, 34.3521f, 7.2237f, 15f, 0, 0);
	func_792(&(iParam0->f_32[14 /*11*/]), 2443.6953f, 4599.0947f, 35.9352f, 42.8614f, 15f, 0, 0);
	func_792(&(iParam0->f_32[15 /*11*/]), 2331.2395f, 4664.8984f, 34.417f, 86.8863f, 15f, 0, 0);
	func_792(&(iParam0->f_32[16 /*11*/]), 2241.168f, 4668.543f, 31.8399f, 93.985f, 15f, 0, 0);
	func_792(&(iParam0->f_32[17 /*11*/]), 2118.464f, 4635.702f, 31.6723f, 125.8619f, 15f, 0, 0);
	func_792(&(iParam0->f_32[18 /*11*/]), 2031.1661f, 4570.6006f, 32.6676f, 99.1116f, 15f, 0, 0);
	func_792(&(iParam0->f_32[19 /*11*/]), 1948.6539f, 4556.264f, 33.2397f, 68.1335f, 15f, 0, 0);
	func_792(&(iParam0->f_32[20 /*11*/]), 1908.0488f, 4575.8633f, 36.2975f, 79.7179f, 15f, 0, 0);
	func_792(&(iParam0->f_32[21 /*11*/]), 1863.6133f, 4581.5044f, 35.2547f, 98.7328f, 15f, 0, 0);
	func_792(&(iParam0->f_32[22 /*11*/]), 1791.3474f, 4571.7173f, 36.0361f, 104.3401f, 15f, 1, 0);
	iParam0->f_18 = 5;
	__LIB_39__::func_723(&(iParam0->f_396[0 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[0 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_47.f_1);
	__LIB_39__::func_721(&(iParam0->f_396[0 /*203*/]), 1602.54f, 3837.21f, 33.72f, 308.94f);
	__LIB_39__::func_720(&(iParam0->f_396[0 /*203*/]), 0, joaat("Player_One"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[1 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[1 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[1 /*203*/]), 1607.0559f, 3841.7207f, 33.3075f, 307.24f);
	__LIB_39__::func_720(&(iParam0->f_396[1 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[2 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[2 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[2 /*203*/]), 1608.2616f, 3840.2798f, 33.0403f, 311.44f);
	__LIB_39__::func_720(&(iParam0->f_396[2 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[3 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[3 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[3 /*203*/]), 1606.2f, 3838.41f, 33.62f, 307.44f);
	__LIB_39__::func_720(&(iParam0->f_396[3 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[4 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[4 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[4 /*203*/]), 1604.49f, 3840.42f, 34.18f, 308.19f);
	__LIB_39__::func_720(&(iParam0->f_396[4 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
}

void func_796(int iParam0)//Position - 0x85DC6
{
	func_793("ValleyTrail");
	func_208(iParam0);
	iParam0->f_3790[0 /*3*/] = { 0f, 0f, 0f };
	iParam0->f_3790[1 /*3*/] = { -234.0323f, 4226.007f, 43.7916f };
	iParam0->f_3790[2 /*3*/] = { -234.0242f, 4228.985f, 43.835f };
	iParam0->f_3801[0] = 0.8f;
	iParam0->f_3801[1] = 0f;
	iParam0->f_3804[0] = 1.8f;
	iParam0->f_3804[1] = 1.8f;
	iParam0->f_3807 = 1300f;
	iParam0->f_17 = 22;
	iParam0->f_3606 = 1;
	iParam0->f_3607 = 4;
	iParam0->f_3608 = { -1921.7406f, 4462.23f, 33.4587f };
	iParam0->f_3611 = 10.1185f;
	iParam0->f_3629 = { -212.5433f, 4226.658f, 43.992f };
	iParam0->f_3632 = 71.6442f;
	iParam0->f_3808 = { -1927.5424f, 4480.6597f, 29.855f };
	iParam0->f_3811 = 129.8399f;
	iParam0->f_3618 = 6f;
	iParam0->f_3619 = 18f;
	iParam0->f_3755 = { -1939.8308f, 4468.409f, 33.3119f };
	iParam0->f_3758 = { -3.5928f, 0.0935f, -69.9291f };
	iParam0->f_3767 = 40.5327f;
	iParam0->f_3761 = { -1937.8685f, 4469.0874f, 65.6972f };
	iParam0->f_3764 = { 71.4933f, 0.0589f, -69.9981f };
	iParam0->f_3768 = { -1922.0421f, 4464.49f, 69.2131f };
	iParam0->f_3771 = { 41.2757f, -0.0019f, 16.1333f };
	iParam0->f_3774 = { -1920.5764f, 4459.126f, 35.237f };
	iParam0->f_3777 = { -6.1614f, -0.0002f, 16.6887f };
	iParam0->f_3754 = 3;
	iParam0->f_3633[0 /*8*/] = { -733.334f, 4399.325f, 65.4842f };
	iParam0->f_3633[0 /*8*/].f_3 = { -552.611f, 4355.336f, 11.7453f };
	iParam0->f_3633[0 /*8*/].f_6 = 27f;
	iParam0->f_3633[0 /*8*/].f_7 = 0.7f;
	iParam0->f_3633[1 /*8*/] = { -905.852f, 4375.275f, 24.3108f };
	iParam0->f_3633[1 /*8*/].f_3 = { -951.357f, 4354.556f, 10.5136f };
	iParam0->f_3633[1 /*8*/].f_6 = 9f;
	iParam0->f_3633[1 /*8*/].f_7 = -1f;
	iParam0->f_3633[1 /*8*/] = { -1426.591f, 4302.318f, 14.3013f };
	iParam0->f_3633[1 /*8*/].f_3 = { -1476.591f, 4302.318f, 0.3053f };
	iParam0->f_3633[1 /*8*/].f_6 = 14f;
	iParam0->f_3633[1 /*8*/].f_7 = -1f;
	func_217(iParam0);
	func_792(&(iParam0->f_32[0 /*11*/]), -269.5131f, 4227.974f, 43.1428f, 97.9608f, 15f, 0, 0);
	func_792(&(iParam0->f_32[1 /*11*/]), -330.7353f, 4242.254f, 42.3877f, 38.1068f, 15f, 0, 0);
	func_792(&(iParam0->f_32[2 /*11*/]), -417.2221f, 4290.236f, 56.6259f, 51.9004f, 15f, 0, 0);
	func_792(&(iParam0->f_32[3 /*11*/]), -506.6945f, 4359.448f, 66.3928f, 90.5887f, 15f, 0, 0);
	func_792(&(iParam0->f_32[4 /*11*/]), -566.9642f, 4357.096f, 58.142f, 70.7537f, 15f, 0, 0);
	func_792(&(iParam0->f_32[5 /*11*/]), -733.3773f, 4412.348f, 20.315f, 79.5961f, 15f, 0, 0);
	func_792(&(iParam0->f_32[6 /*11*/]), -825.9259f, 4411.589f, 19.3628f, 97.3463f, 15f, 0, 0);
	func_792(&(iParam0->f_32[7 /*11*/]), -898.7642f, 4377.721f, 16.3963f, 112.7456f, 15f, 0, 0);
	func_792(&(iParam0->f_32[8 /*11*/]), -974.6707f, 4349.182f, 11.7338f, 96.1166f, 15f, 0, 0);
	func_792(&(iParam0->f_32[9 /*11*/]), -1107.451f, 4379.542f, 11.8522f, 86.8279f, 15f, 0, 0);
	func_792(&(iParam0->f_32[10 /*11*/]), -1222.215f, 4364.588f, 7.0459f, 100.2219f, 15f, 0, 0);
	func_792(&(iParam0->f_32[11 /*11*/]), -1303.514f, 4340.472f, 5.7083f, 115.8464f, 15f, 0, 0);
	func_792(&(iParam0->f_32[12 /*11*/]), -1365.68f, 4298.609f, 1.4209f, 92.9491f, 15f, 0, 0);
	func_792(&(iParam0->f_32[13 /*11*/]), -1453.211f, 4302.764f, 1.4281f, 87.7785f, 15f, 0, 0);
	func_792(&(iParam0->f_32[14 /*11*/]), -1509.895f, 4308.517f, 4.683f, 74.4776f, 15f, 0, 0);
	func_792(&(iParam0->f_32[15 /*11*/]), -1593.907f, 4349.814f, 1.8808f, 44.8026f, 15f, 0, 0);
	func_792(&(iParam0->f_32[16 /*11*/]), -1657.484f, 4445.556f, 1.6662f, 61.0429f, 15f, 0, 0);
	func_792(&(iParam0->f_32[17 /*11*/]), -1756.256f, 4463.122f, 4.7861f, 60.7632f, 15f, 0, 0);
	func_792(&(iParam0->f_32[18 /*11*/]), -1813.3616f, 4479.864f, 16.5623f, 75.1575f, 15f, 0, 0);
	func_792(&(iParam0->f_32[19 /*11*/]), -1846.5181f, 4500.3193f, 21.174f, 87.4783f, 1.5f, 0, 0);
	func_792(&(iParam0->f_32[20 /*11*/]), -1879.901f, 4482.657f, 25.0771f, 103.1315f, 2f, 0, 0);
	func_792(&(iParam0->f_32[21 /*11*/]), -1925.723f, 4468.952f, 31.425f, 153.8084f, 15f, 1, 0);
	iParam0->f_18 = 6;
	__LIB_39__::func_723(&(iParam0->f_396[0 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[0 /*203*/]), "Player");
	func_789(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_47.f_1);
	__LIB_39__::func_721(&(iParam0->f_396[0 /*203*/]), -225.98f, 4224.74f, 44.36f, 44.36f);
	__LIB_39__::func_720(&(iParam0->f_396[0 /*203*/]), 0, joaat("Player_One"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[1 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[1 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[1 /*203*/]), -231.8486f, 4225.4614f, 43.8031f, 76.66f);
	__LIB_39__::func_720(&(iParam0->f_396[1 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[2 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[2 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[2 /*203*/]), -231.1335f, 4228.47f, 43.8715f, 80.88f);
	__LIB_39__::func_720(&(iParam0->f_396[2 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[3 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[3 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[3 /*203*/]), -228.85f, 4227.71f, 44.57f, 83.38f);
	__LIB_39__::func_720(&(iParam0->f_396[3 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[4 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[4 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[4 /*203*/]), -229.58f, 4225.21f, 44.34f, 75.78f);
	__LIB_39__::func_720(&(iParam0->f_396[4 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[5 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[5 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[5 /*203*/]), -225.41f, 4227.53f, 44.45f, 82.7f);
	__LIB_39__::func_720(&(iParam0->f_396[5 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
}

void func_797(int iParam0)//Position - 0x8662C
{
	func_793("RidgeRun");
	func_208(iParam0);
	iParam0->f_3790[0 /*3*/] = { -516.1545f, 1999.374f, 204.7715f };
	iParam0->f_3790[1 /*3*/] = { -521.424f, 2014.8163f, 203.0018f };
	iParam0->f_3790[2 /*3*/] = { -518.0005f, 2017.299f, 202.7044f };
	iParam0->f_3801[0] = 2.3f;
	iParam0->f_3801[1] = 0.5f;
	iParam0->f_3804[0] = 5f;
	iParam0->f_3804[1] = 5f;
	iParam0->f_3807 = 1500f;
	iParam0->f_3606 = 1;
	iParam0->f_3607 = 3;
	iParam0->f_17 = 16;
	iParam0->f_3608 = { -1104.229f, 2638.1877f, 23.709f };
	iParam0->f_3611 = 110.3232f;
	iParam0->f_3629 = { -521.4766f, 1995.4907f, 204.7503f };
	iParam0->f_3632 = 343.8705f;
	iParam0->f_3808 = { -1129.4838f, 2614.2366f, 18.2058f };
	iParam0->f_3811 = 115.8882f;
	iParam0->f_3618 = 3f;
	iParam0->f_3619 = 8f;
	func_217(iParam0);
	iParam0->f_3755 = { -1079.7181f, 2619.5818f, 31.9209f };
	iParam0->f_3758 = { 4.6559f, 0f, -46.3333f };
	iParam0->f_3767 = 42.2756f;
	iParam0->f_3761 = { -1080.9214f, 2618.438f, 51.9764f };
	iParam0->f_3764 = { 75.9941f, -0.0119f, -46.2779f };
	iParam0->f_3768 = { -1103.8585f, 2638.7444f, 42.4107f };
	iParam0->f_3771 = { 50.5641f, 0.0013f, 116.3548f };
	iParam0->f_3774 = { -1101.3816f, 2639.8845f, 25.4833f };
	iParam0->f_3777 = { -6.2272f, 0.0009f, 116.8833f };
	iParam0->f_3780 = { -1098.3188f, 2638.1653f, 26.81f };
	iParam0->f_3783 = { -17.6339f, 0.0009f, 98.6135f };
	iParam0->f_3754 = 7;
	iParam0->f_3633[0 /*8*/] = { -597.733f, 2068.197f, 157.8279f };
	iParam0->f_3633[0 /*8*/].f_3 = { -621.634f, 2055.637f, 146.9955f };
	iParam0->f_3633[0 /*8*/].f_6 = 9f;
	iParam0->f_3633[0 /*8*/].f_7 = 0.8f;
	iParam0->f_3633[1 /*8*/] = { -567.453f, 2147.054f, 148.2583f };
	iParam0->f_3633[1 /*8*/].f_3 = { -560.084f, 2121.08f, 134.4063f };
	iParam0->f_3633[1 /*8*/].f_6 = 9f;
	iParam0->f_3633[1 /*8*/].f_7 = 0.8f;
	iParam0->f_3633[2 /*8*/] = { -734.955f, 2294.898f, 86.3563f };
	iParam0->f_3633[2 /*8*/].f_3 = { -689.331f, 2221.998f, 72.3165f };
	iParam0->f_3633[2 /*8*/].f_6 = 9f;
	iParam0->f_3633[2 /*8*/].f_7 = 0.8f;
	iParam0->f_3633[3 /*8*/] = { -723.968f, 2348.136f, 76.6954f };
	iParam0->f_3633[3 /*8*/].f_3 = { -743.881f, 2329.903f, 62.8225f };
	iParam0->f_3633[3 /*8*/].f_6 = 9f;
	iParam0->f_3633[3 /*8*/].f_7 = 0.8f;
	iParam0->f_3633[4 /*8*/] = { -711.953f, 2462.458f, 70.5703f };
	iParam0->f_3633[4 /*8*/].f_3 = { -715.006f, 2381.515f, 54.2646f };
	iParam0->f_3633[4 /*8*/].f_6 = 18f;
	iParam0->f_3633[4 /*8*/].f_7 = 0.8f;
	iParam0->f_3633[5 /*8*/] = { -814.71f, 2659.98f, 63.285f };
	iParam0->f_3633[5 /*8*/].f_3 = { -852.704f, 2635.868f, 46.9925f };
	iParam0->f_3633[5 /*8*/].f_6 = 9f;
	iParam0->f_3633[5 /*8*/].f_7 = 0.8f;
	iParam0->f_3633[6 /*8*/] = { -997f, 2692.443f, 46.3381f };
	iParam0->f_3633[6 /*8*/].f_3 = { -1029.413f, 2661.229f, 30.1374f };
	iParam0->f_3633[6 /*8*/].f_6 = 9f;
	iParam0->f_3633[6 /*8*/].f_7 = 0.8f;
	func_792(&(iParam0->f_32[0 /*11*/]), -573.6789f, 2037.167f, 187.8733f, 127.7385f, 15f, 0, 0);
	func_792(&(iParam0->f_32[1 /*11*/]), -595.3907f, 1963.89f, 171.9366f, 133.1126f, 15f, 0, 0);
	func_792(&(iParam0->f_32[2 /*11*/]), -633.6208f, 2025.6998f, 158.291f, 7.3997f, 15f, 0, 0);
	func_792(&(iParam0->f_32[3 /*11*/]), -572.8118f, 2078.272f, 149.454f, 294.3077f, 15f, 0, 0);
	func_792(&(iParam0->f_32[4 /*11*/]), -570.9627f, 2162.036f, 134.7248f, 44.7838f, 15f, 0, 0);
	func_792(&(iParam0->f_32[5 /*11*/]), -598.9607f, 2125.704f, 127.2645f, 158.9312f, 15f, 0, 0);
	func_792(&(iParam0->f_32[6 /*11*/]), -676.9645f, 2168.953f, 104.7812f, 26.8194f, 15f, 0, 0);
	func_792(&(iParam0->f_32[7 /*11*/]), -720.4925f, 2272.29f, 75.6379f, 35.1564f, 15f, 0, 0);
	func_792(&(iParam0->f_32[8 /*11*/]), -707.4363f, 2461.5571f, 61.3191f, 345.384f, 15f, 0, 0);
	func_792(&(iParam0->f_32[9 /*11*/]), -691.5254f, 2530.907f, 54.5241f, 47.9461f, 15f, 0, 0);
	func_792(&(iParam0->f_32[10 /*11*/]), -729.2248f, 2646.34f, 57.4402f, 12.3391f, 15f, 0, 0);
	func_792(&(iParam0->f_32[11 /*11*/]), -785.4009f, 2668.766f, 52.7145f, 105.7909f, 15f, 0, 0);
	func_792(&(iParam0->f_32[12 /*11*/]), -863.5698f, 2623.985f, 56.1686f, 138.3881f, 15f, 0, 0);
	func_792(&(iParam0->f_32[13 /*11*/]), -915.1938f, 2593.02f, 55.3226f, 32.3294f, 15f, 0, 0);
	func_792(&(iParam0->f_32[14 /*11*/]), -944.2743f, 2699.078f, 37.1145f, 66.8516f, 15f, 0, 0);
	func_792(&(iParam0->f_32[15 /*11*/]), -1040.9342f, 2649.8801f, 35.799f, 134.2195f, 15f, 1, 0);
	iParam0->f_18 = 5;
	__LIB_39__::func_723(&(iParam0->f_396[0 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[0 /*203*/]), "Player");
	func_789(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_47.f_1);
	__LIB_39__::func_721(&(iParam0->f_396[0 /*203*/]), -516.1545f, 1999.374f, 204.7715f, 18.7907f);
	__LIB_39__::func_720(&(iParam0->f_396[0 /*203*/]), 0, joaat("Player_One"), joaat("mesa"));
	__LIB_39__::func_723(&(iParam0->f_396[1 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[1 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[1 /*203*/]), -520.2454f, 2010.9674f, 203.585f, 16.9522f);
	__LIB_39__::func_720(&(iParam0->f_396[1 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("dubsta2"));
	__LIB_39__::func_723(&(iParam0->f_396[2 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[2 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[2 /*203*/]), -516.7449f, 2013.2365f, 203.7095f, 18.1295f);
	__LIB_39__::func_720(&(iParam0->f_396[2 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("mesa"));
	__LIB_39__::func_723(&(iParam0->f_396[3 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[3 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[3 /*203*/]), -518.3414f, 2005.4489f, 204.1878f, 20.7231f);
	__LIB_39__::func_720(&(iParam0->f_396[3 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("patriot"));
	__LIB_39__::func_723(&(iParam0->f_396[4 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[4 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[4 /*203*/]), -514.8247f, 2008.5737f, 204.3629f, 20.2278f);
	__LIB_39__::func_720(&(iParam0->f_396[4 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("bjxl"));
}

void func_798(int iParam0)//Position - 0x86ECB
{
	func_793("CanyonCliffs");
	func_208(iParam0);
	iParam0->f_3790[0 /*3*/] = { -1938.34f, 4443.2f, 37.06f };
	iParam0->f_3790[1 /*3*/] = { -1930.38f, 4441.9f, 38.12f };
	iParam0->f_3790[2 /*3*/] = { -1931.2542f, 4440.2725f, 37.5294f };
	iParam0->f_3801[0] = 0f;
	iParam0->f_3801[1] = 1.3f;
	iParam0->f_3804[0] = 2.3f;
	iParam0->f_3804[1] = 2.3f;
	iParam0->f_3807 = 5000f;
	iParam0->f_17 = 24;
	iParam0->f_3606 = 1;
	iParam0->f_3607 = 4;
	iParam0->f_3608 = { -234.507f, 3902.6829f, 36.8104f };
	iParam0->f_3611 = 206.9569f;
	iParam0->f_3629 = { -1952.1681f, 4443.8857f, 35.3932f };
	iParam0->f_3632 = 227.1812f;
	iParam0->f_3808 = { -224.4458f, 3894.9614f, 36.4271f };
	iParam0->f_3811 = 178.6138f;
	iParam0->f_3618 = 6f;
	iParam0->f_3619 = 18f;
	func_217(iParam0);
	iParam0->f_3755 = { -236.2838f, 3891.383f, 37.9726f };
	iParam0->f_3758 = { 4.477f, -0.1545f, 25.6305f };
	iParam0->f_3767 = 35f;
	iParam0->f_3761 = { -235.3277f, 3889.145f, 69.6057f };
	iParam0->f_3764 = { 58.3046f, -0.1946f, 25.6488f };
	iParam0->f_3768 = { -236.3619f, 3905.715f, 51.1564f };
	iParam0->f_3771 = { 56.5776f, 0f, -155.0073f };
	iParam0->f_3774 = { -236.52f, 3905.3157f, 38.5798f };
	iParam0->f_3777 = { -6.1578f, -0.0004f, -146.4747f };
	iParam0->f_3754 = 12;
	iParam0->f_3633[0 /*8*/] = { -1841.117f, 4404.597f, 63.867f };
	iParam0->f_3633[0 /*8*/].f_3 = { -1765.496f, 4363.641f, 40.2426f };
	iParam0->f_3633[0 /*8*/].f_6 = 9f;
	iParam0->f_3633[0 /*8*/].f_7 = 0.9f;
	iParam0->f_3633[1 /*8*/] = { -1546.062f, 4207.391f, 79.6808f };
	iParam0->f_3633[1 /*8*/].f_3 = { -1512.674f, 4220.854f, 55.5324f };
	iParam0->f_3633[1 /*8*/].f_6 = 9f;
	iParam0->f_3633[1 /*8*/].f_7 = 0.9f;
	iParam0->f_3633[2 /*8*/] = { -1416.089f, 4194.708f, 56.9551f };
	iParam0->f_3633[2 /*8*/].f_3 = { -1390.473f, 4169.413f, 40.4339f };
	iParam0->f_3633[2 /*8*/].f_6 = 9f;
	iParam0->f_3633[2 /*8*/].f_7 = -1f;
	iParam0->f_3633[3 /*8*/] = { -1322.066f, 4184.635f, 70.6514f };
	iParam0->f_3633[3 /*8*/].f_3 = { -1334.891f, 4141.501f, 54.5091f };
	iParam0->f_3633[3 /*8*/].f_6 = 9f;
	iParam0->f_3633[3 /*8*/].f_7 = -1f;
	iParam0->f_3633[4 /*8*/] = { -1178.216f, 4292.785f, 86.6735f };
	iParam0->f_3633[4 /*8*/].f_3 = { -1237.216f, 4292.785f, 67.532f };
	iParam0->f_3633[4 /*8*/].f_6 = 14f;
	iParam0->f_3633[4 /*8*/].f_7 = -1f;
	iParam0->f_3633[5 /*8*/] = { -1038.013f, 4234.87f, 128.0485f };
	iParam0->f_3633[5 /*8*/].f_3 = { -1036.901f, 4175.88f, 108.7185f };
	iParam0->f_3633[5 /*8*/].f_6 = 14f;
	iParam0->f_3633[5 /*8*/].f_7 = -1f;
	iParam0->f_3633[6 /*8*/] = { -941.876f, 4152.233f, 139.012f };
	iParam0->f_3633[6 /*8*/].f_3 = { -1000.261f, 4143.736f, 122.8091f };
	iParam0->f_3633[6 /*8*/].f_6 = 14f;
	iParam0->f_3633[6 /*8*/].f_7 = -1f;
	iParam0->f_3633[7 /*8*/] = { -936.788f, 4141.902f, 174.5561f };
	iParam0->f_3633[7 /*8*/].f_3 = { -897.218f, 4098.139f, 133.7419f };
	iParam0->f_3633[7 /*8*/].f_6 = 14f;
	iParam0->f_3633[7 /*8*/].f_7 = 0.6f;
	iParam0->f_3633[8 /*8*/] = { -871.811f, 4093.706f, 175.2417f };
	iParam0->f_3633[8 /*8*/].f_3 = { -827.555f, 4054.688f, 153.6356f };
	iParam0->f_3633[8 /*8*/].f_6 = 9f;
	iParam0->f_3633[8 /*8*/].f_7 = 0.8f;
	iParam0->f_3633[9 /*8*/] = { -709.295f, 4014.701f, 141.2825f };
	iParam0->f_3633[9 /*8*/].f_3 = { -659.343f, 4012.503f, 119.5238f };
	iParam0->f_3633[9 /*8*/].f_6 = 9f;
	iParam0->f_3633[9 /*8*/].f_7 = -1f;
	iParam0->f_3633[10 /*8*/] = { -488.41f, 3967.25f, 98.073f };
	iParam0->f_3633[10 /*8*/].f_3 = { -537.137f, 3956.036f, 76.3871f };
	iParam0->f_3633[10 /*8*/].f_6 = 9f;
	iParam0->f_3633[10 /*8*/].f_7 = -1f;
	iParam0->f_3633[11 /*8*/] = { -307.55f, 3988.647f, 53.323f };
	iParam0->f_3633[11 /*8*/].f_3 = { -255.138f, 3926.889f, 31.5805f };
	iParam0->f_3633[11 /*8*/].f_6 = 9f;
	iParam0->f_3633[11 /*8*/].f_7 = -1f;
	func_792(&(iParam0->f_32[0 /*11*/]), -1866.197f, 4416.57f, 47.6783f, 243.4072f, 15f, 0, 0);
	func_792(&(iParam0->f_32[1 /*11*/]), -1719.303f, 4323.6265f, 64.5414f, 221.2501f, 15f, 0, 0);
	func_792(&(iParam0->f_32[2 /*11*/]), -1649.439f, 4210.078f, 82.7008f, 247.6203f, 15f, 0, 0);
	func_792(&(iParam0->f_32[3 /*11*/]), -1559.977f, 4206.744f, 75.5405f, 283.5007f, 15f, 0, 0);
	func_792(&(iParam0->f_32[4 /*11*/]), -1468.958f, 4225.536f, 52.2794f, 259.5412f, 15f, 0, 0);
	func_792(&(iParam0->f_32[5 /*11*/]), -1386.484f, 4165.806f, 51.7286f, 222.3696f, 15f, 0, 0);
	func_792(&(iParam0->f_32[6 /*11*/]), -1345.585f, 4126.963f, 61.804f, 307.3036f, 15f, 0, 0);
	func_792(&(iParam0->f_32[7 /*11*/]), -1321f, 4186.437f, 62.0636f, 339.138f, 15f, 0, 0);
	func_792(&(iParam0->f_32[8 /*11*/]), -1276.758f, 4278.825f, 65.3138f, 293.3126f, 15f, 0, 0);
	func_792(&(iParam0->f_32[9 /*11*/]), -1185.773f, 4291.904f, 78.4686f, 257.1151f, 15f, 0, 0);
	func_792(&(iParam0->f_32[10 /*11*/]), -1072.934f, 4272.621f, 100.6904f, 248.1561f, 15f, 0, 0);
	func_792(&(iParam0->f_32[11 /*11*/]), -1038.148f, 4229.422f, 115.7768f, 185.7003f, 15f, 0, 0);
	func_792(&(iParam0->f_32[12 /*11*/]), -1032.516f, 4165.056f, 118.9887f, 211.226f, 15f, 0, 0);
	func_792(&(iParam0->f_32[13 /*11*/]), -938.7848f, 4148.585f, 140.8003f, 223.9547f, 15f, 0, 0);
	func_792(&(iParam0->f_32[14 /*11*/]), -891.4792f, 4096.885f, 161.8249f, 251.5976f, 15f, 0, 0);
	func_792(&(iParam0->f_32[15 /*11*/]), -823.631f, 4051.689f, 162.4706f, 265.8944f, 15f, 0, 0);
	func_792(&(iParam0->f_32[16 /*11*/]), -753.7779f, 4038.203f, 147.1398f, 239.7252f, 15f, 0, 0);
	func_792(&(iParam0->f_32[17 /*11*/]), -654.0638f, 4013.689f, 126.4406f, 255.6974f, 15f, 0, 0);
	func_792(&(iParam0->f_32[18 /*11*/]), -591.6994f, 3972.394f, 113.3035f, 271.8129f, 15f, 0, 0);
	func_792(&(iParam0->f_32[19 /*11*/]), -515.1089f, 3960.313f, 87.3917f, 286.0931f, 15f, 0, 0);
	func_792(&(iParam0->f_32[20 /*11*/]), -425.4944f, 3943.495f, 65.9412f, 282.5892f, 15f, 0, 0);
	func_792(&(iParam0->f_32[21 /*11*/]), -379.7583f, 3981.864f, 52.2577f, 319.5195f, 15f, 0, 0);
	func_792(&(iParam0->f_32[22 /*11*/]), -330.6125f, 4012.509f, 45.0532f, 233.3578f, 15f, 0, 0);
	func_792(&(iParam0->f_32[23 /*11*/]), -252.5999f, 3920.9768f, 39.36f, 222.7951f, 15f, 1, 0);
	iParam0->f_18 = 6;
	__LIB_39__::func_723(&(iParam0->f_396[0 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[0 /*203*/]), "Player");
	func_789(&(iParam0->f_396[0 /*203*/]), PLAYER::PLAYER_PED_ID(), Local_47.f_1);
	__LIB_39__::func_721(&(iParam0->f_396[0 /*203*/]), -1938.34f, 4443.2f, 37.06f, 249.56f);
	__LIB_39__::func_720(&(iParam0->f_396[0 /*203*/]), 0, joaat("Player_One"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[1 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[1 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[1 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[1 /*203*/]), -1932.5958f, 4442.19f, 37.3184f, 261.2715f);
	__LIB_39__::func_720(&(iParam0->f_396[1 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[2 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[2 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[2 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[2 /*203*/]), -1933.2573f, 4440.739f, 37.2692f, 256.9669f);
	__LIB_39__::func_720(&(iParam0->f_396[2 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
	__LIB_39__::func_723(&(iParam0->f_396[3 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[3 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[3 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[3 /*203*/]), -1935.01f, 4442.57f, 37.48f, 258.09f);
	__LIB_39__::func_720(&(iParam0->f_396[3 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[4 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[4 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[4 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[4 /*203*/]), -1935.5f, 4440.32f, 37.48f, 268.03f);
	__LIB_39__::func_720(&(iParam0->f_396[4 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("sanchez"));
	__LIB_39__::func_723(&(iParam0->f_396[5 /*203*/]));
	__LIB_39__::func_722(&(iParam0->f_396[5 /*203*/]), "Racer");
	func_789(&(iParam0->f_396[5 /*203*/]), 0, 0);
	__LIB_39__::func_721(&(iParam0->f_396[5 /*203*/]), -1939.63f, 4440.46f, 37.25f, 253.32f);
	__LIB_39__::func_720(&(iParam0->f_396[5 /*203*/]), 4, joaat("A_M_Y_GenStreet_01"), joaat("blazer"));
}

int func_800(var uParam0)//Position - 0x87B01
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	iVar0 = 1;
	iVar1 = 1;
	StringCopy(&cVar2, "offroadrace", 64);
	switch (Local_47.f_11)
	{
		case 0:
			StringIntConCat(&cVar2, 1, 64);
			break;
		case 1:
			StringIntConCat(&cVar2, 2, 64);
			break;
		case 2:
			StringIntConCat(&cVar2, 6, 64);
			break;
		case 3:
			StringIntConCat(&cVar2, 3, 64);
			break;
		case 4:
			StringIntConCat(&cVar2, 4, 64);
			break;
		case 5:
			StringIntConCat(&cVar2, 5, 64);
			break;
	}
	StringConCat(&cVar2, "car", 64);
	if (iLocal_1202 > 2 && iLocal_1202 < 6)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/))
		{
			if (__LIB_0__::func_75())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			__LIB_0__::func_325();
			HUD::CLEAR_PRINTS();
			__LIB_14__::func_553(800);
			func_822(12);
		}
	}
	if (!bLocal_1193)
	{
		if (AUDIO::LOAD_STREAM("INTRO_STREAM", "DIRT_RACES_SOUNDSET"))
		{
			bLocal_1193 = true;
		}
	}
	switch (iLocal_1202)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			__LIB_38__::func_477(0, 0, 0);
			if (!__LIB_1__::func_13(&iLocal_1006))
			{
				__LIB_1__::func_362(&iLocal_1006);
			}
			else
			{
				__LIB_1__::func_31(&iLocal_1006);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (func_142())
			{
				PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true, 4096, -1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, true);
			}
			func_822(1);
			break;
		case 1:
			if (__LIB_2__::func_572(&iLocal_1006) >= 2.5f)
			{
				func_822(3);
				__LIB_1__::func_31(&iLocal_1006);
			}
			break;
		case 2:
			if (__LIB_2__::func_572(&iLocal_1006) >= 0.4f)
			{
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
				func_822(3);
				__LIB_1__::func_31(&iLocal_1006);
			}
			break;
		case 3:
			if (CAM::DOES_CAM_EXIST(iLocal_239))
			{
				func_821(uParam0);
				func_781(uParam0);
				func_703();
				func_826(uParam0);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_240, iLocal_239, SYSTEM::ROUND((uParam0->f_3787 * 1000f)), 0, 0);
				func_820(uParam0);
				if (bLocal_1193)
				{
					AUDIO::PLAY_STREAM_FRONTEND();
				}
				func_819();
			}
			else
			{
				func_822(12);
			}
			break;
		case 4:
			if (!__LIB_1__::func_490(iLocal_1201, 8) && !__LIB_0__::func_75())
			{
				func_817(uParam0);
				func_757(&iLocal_1201, 8);
			}
			if (!uParam0->f_3626 && __LIB_2__::func_572(&iLocal_1006) >= uParam0->f_3801[0])
			{
				if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_8, false) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_396[1 /*203*/].f_8, false)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_396[1 /*203*/].f_8, uParam0->f_396[1 /*203*/].f_9, uParam0->f_3790[1 /*3*/], uParam0->f_3804[0], 0, uParam0->f_396[1 /*203*/].f_22, 262144, 0.1f, 5f);
					uParam0->f_3626 = 1;
				}
			}
			if (!uParam0->f_3627 && __LIB_2__::func_572(&iLocal_1006) >= uParam0->f_3801[1])
			{
				if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_8, false) && PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_396[2 /*203*/].f_8, false)) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
				{
					TASK::TASK_VEHICLE_DRIVE_TO_COORD(uParam0->f_396[2 /*203*/].f_8, uParam0->f_396[2 /*203*/].f_9, uParam0->f_3790[2 /*3*/], uParam0->f_3804[1], 0, uParam0->f_396[2 /*203*/].f_22, 262144, 0.1f, 5f);
					uParam0->f_3627 = 1;
				}
			}
			if ((__LIB_2__::func_572(&iLocal_1006) >= (uParam0->f_3787 - 1.3f) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, &cVar2)) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[0 /*203*/].f_9))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uParam0->f_396[0 /*203*/].f_9, 1, &cVar2, 10f, 262144);
				}
			}
			if (__LIB_2__::func_572(&iLocal_1006) >= uParam0->f_3787)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
				{
					AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_396[0 /*203*/].f_9, true);
					AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */, "OFF_ROAD_RADIO_ROCK_LIST", true);
					AUDIO::SET_VEH_RADIO_STATION(uParam0->f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_242, iLocal_241, SYSTEM::ROUND((uParam0->f_3788 * 1000f)), 0, 1);
				func_819();
				__LIB_1__::func_362(&iLocal_1006);
			}
			break;
		case 5:
			if (__LIB_2__::func_572(&iLocal_1006) >= uParam0->f_3788)
			{
				__LIB_1__::func_31(&iLocal_1006);
				CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_244, iLocal_243, SYSTEM::ROUND((uParam0->f_3789 * 1000f)), 0, 0);
				func_822(6);
				__LIB_1__::func_12(&(uParam0->f_19));
				iLocal_225 = 0;
			}
			else if (__LIB_2__::func_572(&iLocal_1006) >= (uParam0->f_3788 - 0.2f))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_396[0 /*203*/].f_9);
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_572(&iLocal_1006) >= uParam0->f_3789)
			{
				iLocal_252 = 0;
				iLocal_253 = 0;
				iLocal_254 = 0;
				func_822(11);
			}
			if (__LIB_2__::func_572(&iLocal_1006) >= 1f)
			{
				func_752(&(uParam0->f_19));
			}
			break;
		case 11:
			if (__LIB_7__::func_691())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (__LIB_7__::func_691())
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				__LIB_38__::func_475(&iLocal_258, 4096);
				__LIB_38__::func_475(&iLocal_1201, 1);
				__LIB_38__::func_475(&iLocal_1201, 2);
				__LIB_38__::func_475(&iLocal_1201, 4);
				__LIB_38__::func_475(&iLocal_1201, 8);
				func_815();
				iVar0 = 1;
				iVar1 = 1;
				__LIB_40__::func_484(1, 1, 1);
				return 1;
			}
			break;
		case 12:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_703();
				func_826(uParam0);
				if (func_825(uParam0, &iVar0, 1036831949) && func_824(uParam0, &iVar1, 1036831949, 1))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					__LIB_40__::func_482(800);
					func_822(11);
				}
			}
			else if (!CAM::DOES_CAM_EXIST(iLocal_239) || 1)
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				func_822(11);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_396[0 /*203*/].f_9) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
			{
				AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */, "OFF_ROAD_RADIO_ROCK_LIST", true);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_396[0 /*203*/].f_9, true);
				AUDIO::SET_VEH_RADIO_STATION(uParam0->f_396[0 /*203*/].f_9, "RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
			}
			uParam0->f_3625 = 1;
			break;
		case 7:
			if (CAM::DOES_CAM_EXIST(iLocal_245) && 0)
			{
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_246, iLocal_245, 3000, 1, 1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_238, false))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_238, -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_238, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
				if (!__LIB_1__::func_490(iLocal_1201, 1))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_0__::func_683() == 2)
						{
							__LIB_0__::func_222(&uLocal_1028, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						}
						else if (__LIB_0__::func_683() == 0)
						{
							__LIB_0__::func_222(&uLocal_1028, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						}
						else if (__LIB_0__::func_683() == 1)
						{
							__LIB_0__::func_222(&uLocal_1028, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						}
						__LIB_0__::func_222(&uLocal_1028, 1, iLocal_238, "OR_Swap", 0, 1);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
						{
							__LIB_14__::func_535(&uLocal_1028, "SPR_OR", "OR_Cut01", "OR_Cut01_1", 8, 0, 0);
							func_757(&iLocal_1201, 1);
						}
						else
						{
							__LIB_14__::func_535(&uLocal_1028, "SPR_OR", "OR_Cut02", "OR_Cut02_1", 8, 0, 0);
							func_757(&iLocal_1201, 1);
						}
						func_819();
					}
				}
			}
			else
			{
				__LIB_14__::func_553(800);
				func_822(10);
			}
			break;
		case 8:
			if (CAM::DOES_CAM_EXIST(iLocal_246) && 0)
			{
				CAM::SET_CAM_ACTIVE(iLocal_246, true);
			}
			else
			{
				__LIB_14__::func_553(800);
				func_822(12);
			}
			break;
		case 9:
			if (CAM::DOES_CAM_EXIST(iLocal_247) && 0)
			{
				CAM::SET_CAM_ACTIVE(iLocal_247, true);
				if (__LIB_2__::func_572(&iLocal_1006) >= 1f)
				{
					__LIB_1__::func_31(&iLocal_1006);
					func_819();
				}
			}
			else
			{
				__LIB_14__::func_553(800);
				func_822(12);
			}
			break;
		case 10:
			if (__LIB_2__::func_572(&iLocal_1006) >= 3f || 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_238, false))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::CLEAR_PED_TASKS(iLocal_238);
				}
				iLocal_248 = iLocal_248;
				func_826(uParam0);
				func_801();
				__LIB_1__::func_31(&iLocal_1006);
				func_822(3);
			}
			break;
	}
	return 0;
}

void func_801()//Position - 0x883C4
{
	if (iLocal_252)
	{
		if (!iLocal_254)
		{
			CAM::SET_CAM_ACTIVE(iLocal_239, true);
		}
		return;
	}
	switch (Local_47.f_11)
	{
		case 0:
			iLocal_267 = 7000;
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				Local_268 = { -1934.7365f, 4442.175f, 38.2098f };
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1934.7644f, 4441.742f, 38.3865f, 4.0163f, -0.0469f, -100.6342f, 39.9908f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1932.8745f, 4441.5884f, 38.3544f, 10.6304f, -0.0316f, -105.3918f, 39.9908f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_241))
			{
				iLocal_241 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1934.5687f, 4441.179f, 38.5273f, -10.8157f, -0.0428f, 50.6593f, 38.4614f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_242))
			{
				iLocal_242 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1936.4519f, 4441.9355f, 38.0959f, -9.9336f, -0.0428f, 47.3525f, 38.4614f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_243))
			{
				iLocal_243 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1943.6908f, 4444.6997f, 38.5172f, 5.3246f, -0.0005f, -111.0771f, 39.9908f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_244))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1943.2024f, 4444.013f, 37.3637f, 2.6624f, -0.0005f, -104.1701f, 39.9908f, false, 2);
			}
			if (!iLocal_254)
			{
			}
			iLocal_252 = 1;
			break;
		case 1:
			iLocal_267 = 7000;
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				Local_268 = { -518.5645f, 2011.6864f, 205.3615f };
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_268, -10.1688f, -0.2245f, 20.8203f, 44.0808f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -519.1605f, 2013.0159f, 205.5103f, -9.1715f, -0.2245f, 22.5841f, 44.0808f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_241))
			{
				iLocal_241 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -515.6855f, 2007.8528f, 206.1012f, -0.4035f, -0.1892f, 163.2478f, 27.683f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_242))
			{
				iLocal_242 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -515.7711f, 2004.5834f, 206.0598f, -0.3385f, -0.1892f, 163.0306f, 27.683f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_243))
			{
				iLocal_243 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -518.4795f, 1993.7391f, 207.9673f, -7.2953f, -0.2214f, -3.5218f, 45.924f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_244))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -518.5731f, 1993.9401f, 206.8376f, -8.4426f, -0.2214f, -5.8787f, 45.924f, false, 2);
			}
			if (!iLocal_254)
			{
			}
			iLocal_252 = 1;
			break;
		case 3:
			iLocal_267 = 7000;
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				Local_268 = { -229.3903f, 4226.5596f, 45.0182f };
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -229.2285f, 4226.661f, 45.0023f, -0.8733f, 0.0915f, 84.0911f, 41.6574f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -230.9695f, 4226.922f, 45.0704f, 2.394f, -0.0406f, 84.2233f, 41.6574f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_241))
			{
				iLocal_241 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -230.0989f, 4226.4985f, 45.2705f, -6.5795f, -0.167f, -125.0428f, 39.01f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_242))
			{
				iLocal_242 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -228.9741f, 4225.894f, 45.1399f, -3.7667f, -0.167f, -129.7411f, 39.01f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_243))
			{
				iLocal_243 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -221.3025f, 4223.6846f, 46.7736f, -2.7368f, -0.0008f, 70.4824f, 41.6574f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_244))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -221.6005f, 4223.7905f, 45.38f, -4.8182f, -0.0008f, 70.4824f, 41.6574f, false, 2);
			}
			if (!iLocal_254)
			{
			}
			iLocal_252 = 1;
			break;
		case 4:
			iLocal_267 = 7000;
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				Local_268 = { 1606.3958f, 3839.9255f, 34.8244f };
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_268, -2.9033f, -1.8249f, -46.6085f, 40.1711f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1607.8865f, 3841.3264f, 34.7757f, -0.5879f, -1.9369f, -45.4532f, 40.1711f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_241))
			{
				iLocal_241 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1607.9375f, 3837.9385f, 34.4804f, -4.4038f, -1.7706f, 108.5596f, 40.1711f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_242))
			{
				iLocal_242 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1606.5629f, 3837.2422f, 34.3664f, -3.1316f, -1.7706f, 107.7553f, 40.1711f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_243))
			{
				iLocal_243 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1599.7683f, 3833.889f, 35.7868f, 0.5473f, -1.878f, -48.6451f, 40.1711f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_244))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1599.663f, 3833.7466f, 34.6625f, -2.6611f, -1.878f, -48.6451f, 40.1711f, false, 2);
			}
			if (!iLocal_254)
			{
			}
			iLocal_252 = 1;
			break;
		case 5:
			iLocal_267 = 7000;
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				Local_268 = { 2044.4916f, 2130.2898f, 93.3795f };
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2044.5486f, 2130.0422f, 93.4643f, -2.8529f, 0.2457f, -129.0125f, 40.8194f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2047.2976f, 2128.2144f, 93.4141f, 0.7893f, 0.1513f, -125.6504f, 40.8194f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_241))
			{
				iLocal_241 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2041.6832f, 2131.1018f, 94.2686f, -5.0825f, 0f, 76.3259f, 44.5242f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_242))
			{
				iLocal_242 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2039.3386f, 2132.098f, 94.0928f, -5.3187f, 0f, 84.7292f, 44.5242f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_243))
			{
				iLocal_243 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2030.2577f, 2139.1392f, 96.2295f, -2.6047f, 0f, -130.7596f, 44.5242f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_244))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2031.409f, 2137.7559f, 94.4353f, -3.9361f, 0f, -134.2198f, 44.5242f, false, 2);
			}
			if (!iLocal_254)
			{
			}
			iLocal_252 = 1;
			break;
		case 2:
			iLocal_267 = 7000;
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				Local_268 = { 2996.6907f, 2782.5027f, 43.6393f };
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2996.8455f, 2782.2297f, 43.497f, 3.4209f, 0.0045f, 33.4847f, 47.0393f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2995.9468f, 2783.4854f, 43.6447f, 5.1925f, 0.0045f, 36.8585f, 47.0393f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_241))
			{
				iLocal_241 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2996.1445f, 2780.4768f, 43.3431f, -6.6951f, 0.0799f, 163.7419f, 41.8987f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_242))
			{
				iLocal_242 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2996.4949f, 2777.8755f, 43.1067f, -4.1896f, 0.0799f, 147.3135f, 41.8987f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_243))
			{
				iLocal_243 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2996.1218f, 2771.0967f, 44.5126f, 0.6591f, -0.0658f, 6.9874f, 42.7619f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_244))
			{
				iLocal_244 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2996.1218f, 2771.112f, 43.1661f, 0.6591f, -0.0658f, 6.9874f, 42.7619f, false, 2);
			}
			if (!iLocal_254)
			{
			}
			iLocal_252 = 1;
			break;
		case 6:
			iLocal_267 = 7000;
			if (!CAM::DOES_CAM_EXIST(iLocal_240))
			{
				Local_268 = { 1169.6823f, 2389.4417f, 58.449f };
				iLocal_240 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Local_268, -5.1495f, 0f, 179.1833f, 45f, false, 2);
			}
			if (!CAM::DOES_CAM_EXIST(iLocal_239))
			{
				iLocal_239 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1163.7627f, 2427.6836f, 64.9889f, -4.8554f, 0f, 123.0232f, 50f, false, 2);
			}
			if (!iLocal_254)
			{
			}
			iLocal_252 = 1;
			break;
	}
}

void func_815()//Position - 0x894B4
{
	func_816();
}

void func_816()//Position - 0x894C0
{
	if (CAM::DOES_CAM_EXIST(iLocal_248))
	{
		CAM::DESTROY_CAM(iLocal_248, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_247))
	{
		CAM::DESTROY_CAM(iLocal_247, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_246))
	{
		CAM::DESTROY_CAM(iLocal_246, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_245))
	{
		CAM::DESTROY_CAM(iLocal_245, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_239))
	{
		CAM::DESTROY_CAM(iLocal_239, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_240))
	{
		CAM::DESTROY_CAM(iLocal_240, false);
	}
}

void func_817(var uParam0)//Position - 0x89534
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_8, false))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
		switch (iVar0)
		{
			case 1:
				sVar1 = "MALE1";
				sVar2 = "ORR_GUY1C";
				break;
			case 2:
				sVar1 = "MALE2";
				sVar2 = "ORR_GUY2C";
				break;
			case 3:
				sVar1 = "MALE3";
				sVar2 = "ORR_GUY3C";
				break;
		}
		__LIB_0__::func_222(&uLocal_1028, iVar0, uParam0->f_396[1 /*203*/].f_8, sVar1, 0, 1);
		__LIB_2__::func_859(&uLocal_1028, "ORRAUD", sVar2, 8, 0, 0, 0);
	}
}

void func_819()//Position - 0x8961C
{
	__LIB_1__::func_31(&iLocal_1006);
	iLocal_1202++;
}

void func_820(var uParam0)//Position - 0x89633
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[1 /*203*/].f_9, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[2 /*203*/].f_9, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[3 /*203*/].f_9, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_396[4 /*203*/].f_9, false);
	}
}

void func_821(var uParam0)//Position - 0x896C3
{
	int iVar0;
	int iVar1;
	iVar0 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &(uParam0->f_3593));
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3593[iVar1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3593[iVar1], false))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3593[iVar1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_3593[iVar1], true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3593[iVar1], true, false);
				}
			}
		}
		iVar1++;
	}
}

void func_822(int iParam0)//Position - 0x89742
{
	__LIB_1__::func_31(&iLocal_1006);
	iLocal_1202 = iParam0;
}

int func_824(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x89775
{
	int iVar0;
	iParam2 = iParam2;
	if (iParam3 || uParam0->f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
		{
		}
		switch (Local_47.f_11)
		{
			case 0:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -1937.8853f, 4443.3193f, 36.5555f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 256.8476f);
				break;
			case 1:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -517.2068f, 2000.5529f, 204.616f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 20.3384f);
				break;
			case 3:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -225.98f, 4224.74f, 44.36f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 80.2f);
				break;
			case 4:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 1602.54f, 3837.21f, 33.72f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 308.94f);
				break;
			case 5:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2030.8984f, 2134.1968f, 92.5014f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 249.4471f);
				break;
			case 2:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2995.8235f, 2774.8606f, 41.9576f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 354.6729f);
				break;
			case 6:
				break;
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[0 /*203*/].f_9, 5f);
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[0 /*203*/].f_9, false))
	{
		switch (Local_47.f_11)
		{
			case 0:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -1946.7852f, 4448.6514f, 35.2621f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 230.0273f);
				break;
			case 1:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -517.9825f, 1991.624f, 205.1206f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 330.0374f);
				break;
			case 3:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, -220.6522f, 4222.0312f, 43.763f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 65.2566f);
				break;
			case 4:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 1596.7162f, 3829.3076f, 32.9941f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 316.0527f);
				break;
			case 5:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2031.7719f, 2134.9775f, 92.5141f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 243.1813f);
				break;
			case 2:
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_9, 2993.9941f, 2766.8936f, 41.7335f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_9, 20.89f);
				break;
			case 6:
				break;
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[0 /*203*/].f_9, 5f);
	}
	else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			switch (Local_47.f_11)
			{
				case 0:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, -1938.34f, 4443.2f, 37.06f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 249.56f);
					break;
				case 1:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, -512.3987f, 2001.4885f, 204.8844f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 24.0095f);
					break;
				case 3:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, -225.98f, 4224.74f, 44.36f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 80.2f);
					break;
				case 4:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, 1602.54f, 3837.21f, 33.72f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 308.94f);
					break;
				case 5:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, 2037.6f, 2136.15f, 93.15f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 238.07f);
					break;
				case 2:
					ENTITY::SET_ENTITY_COORDS(uParam0->f_396[0 /*203*/].f_8, 2996.96f, 2773.84f, 42.41f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(uParam0->f_396[0 /*203*/].f_8, 20.89f);
					break;
				case 6:
					break;
			}
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			switch (Local_47.f_11)
			{
				case 0:
					ENTITY::SET_ENTITY_COORDS(iVar0, -1938.34f, 4443.2f, 37.06f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, 249.56f);
					break;
				case 1:
					ENTITY::SET_ENTITY_COORDS(iVar0, -512.3987f, 2001.4885f, 204.8844f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, 24.0095f);
					break;
				case 3:
					ENTITY::SET_ENTITY_COORDS(iVar0, -225.98f, 4224.74f, 44.36f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, 80.2f);
					break;
				case 4:
					ENTITY::SET_ENTITY_COORDS(iVar0, 1602.54f, 3837.21f, 33.72f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, 308.94f);
					break;
				case 5:
					ENTITY::SET_ENTITY_COORDS(iVar0, 2037.6f, 2136.15f, 93.15f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, 238.07f);
					break;
				case 2:
					ENTITY::SET_ENTITY_COORDS(iVar0, 2996.96f, 2773.84f, 42.41f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iVar0, 20.89f);
					break;
				case 6:
					break;
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
		}
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	return 1;
}

int func_825(var uParam0, int iParam1, int iParam2)//Position - 0x89DD8
{
	iParam2 = iParam2;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[1 /*203*/].f_9, "Racer 01");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[2 /*203*/].f_9, "Racer 02");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[3 /*203*/].f_9, "Racer 03");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[4 /*203*/].f_9, "Racer 04");
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9, false))
	{
		VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_396[5 /*203*/].f_9, "Racer 05");
	}
	switch (Local_47.f_11)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, -1932.5958f, 4442.19f, 37.3184f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 261.2715f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, -1933.2573f, 4440.739f, 37.2692f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 256.9669f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, -1935.01f, 4442.57f, 37.48f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 258.09f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, -1935.5f, 4440.32f, 37.48f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 268.03f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, -1939.63f, 4440.46f, 37.25f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 253.32f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9, 5f);
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, -520.2454f, 2010.9674f, 203.585f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 16.9522f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, -516.7449f, 2013.2365f, 203.7095f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 18.1295f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, -518.3414f, 2005.4489f, 204.1878f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 20.7231f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, -514.8247f, 2008.5737f, 204.3629f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 20.2278f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9, 5f);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, -231.8486f, 4225.4614f, 43.8031f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 76.66f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, -231.1335f, 4228.47f, 43.8715f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 80.88f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, -228.85f, 4227.71f, 44.57f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 83.38f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, -229.58f, 4225.21f, 44.34f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 75.78f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, -225.41f, 4227.53f, 44.45f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 82.7f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9, 5f);
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, 1607.0559f, 3841.7207f, 33.3075f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 307.24f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, 1608.2616f, 3840.2798f, 33.0403f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 311.44f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, 1606.2f, 3838.41f, 33.62f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 307.44f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, 1604.49f, 3840.42f, 34.18f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 308.19f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9, 5f);
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, 2046.7721f, 2130.4421f, 91.9486f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 233.1493f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, 2045.3445f, 2126.3523f, 91.9358f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 236.3633f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, 2034.8207f, 2138.8853f, 92.6919f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 237.2035f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, 2041.237f, 2134.698f, 92.4401f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 232.9754f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, 2039.4126f, 2130.2275f, 92.5788f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 241.4449f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9, 5f);
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[1 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[1 /*203*/].f_9, 2994.447f, 2782.5908f, 42.455f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[1 /*203*/].f_9, 26.81f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[1 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[2 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[2 /*203*/].f_9, 2998.043f, 2784.221f, 42.5605f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[2 /*203*/].f_9, 33.42f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[2 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[3 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[3 /*203*/].f_9, 2994.91f, 2779.79f, 42.73f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[3 /*203*/].f_9, 11.43f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[3 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[4 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[4 /*203*/].f_9, 2999.44f, 2781.11f, 43.11f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[4 /*203*/].f_9, 23.89f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[4 /*203*/].f_9, 5f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[5 /*203*/].f_9, false))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_396[5 /*203*/].f_9, 3000.06f, 2775.26f, 42.47f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_396[5 /*203*/].f_9, 17.16f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_396[5 /*203*/].f_9, 5f);
			}
			break;
		case 6:
			break;
	}
	return 1;
}

void func_826(var uParam0)//Position - 0x8A8DF
{
	struct<3> Var0;
	float fVar1;
	if (!__LIB_1__::func_490(iLocal_258, 32768))
	{
		Var0 = { uParam0->f_3629 };
		fVar1 = uParam0->f_3632;
		func_827(uParam0, Var0, fVar1);
		func_757(&iLocal_258, 32768);
	}
}

void func_827(var uParam0, struct<3> Param1, float fParam2)//Position - 0x8A922
{
	struct<3> Var0;
	Var0 = { 1f, 1f, 1f };
	if (uParam0->f_396[0 /*203*/].f_9 == iLocal_237)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_235, Param1, Var0, false, true, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_235, true, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_235, Param1, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_235, fParam2);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_235, 5f);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_238, false))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_238, true, true);
				PED::DELETE_PED(&iLocal_238);
			}
		}
	}
}

int func_828(var uParam0, var uParam1, int iParam2)//Position - 0x8A9BD
{
	int iVar0;
	iVar0 = __LIB_21__::func_979(iLocal_259);
	if (iVar0 == -1)
	{
		return 0;
	}
	iVar0 = SYSTEM::SHIFT_LEFT(1, iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		iVar0 = 0;
		if (func_142())
		{
			func_757(&iVar0, 2048);
		}
		else
		{
			func_757(&iVar0, 1024);
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_239))
	{
		if (iLocal_255)
		{
			return 1;
		}
		else
		{
			switch (iVar0)
			{
				case 2:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_235 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, false))
					{
						__LIB_14__::func_775(iLocal_235, uParam0->f_3629, uParam0->f_3632, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
						func_829(iLocal_235, 1);
					}
					Local_47.f_2 = iLocal_235;
					iLocal_237 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_237, 1, false);
						iLocal_221 = 0;
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 8:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_235 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, false))
					{
						__LIB_14__::func_775(iLocal_235, uParam0->f_3629, uParam0->f_3632, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
						func_829(iLocal_235, 1);
					}
					Local_47.f_2 = iLocal_235;
					iLocal_237 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_237))
					{
						iLocal_237 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), true, true, false);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 32:
					iLocal_235 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, false))
					{
						__LIB_14__::func_775(iLocal_235, uParam0->f_3629, uParam0->f_3632, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
						func_829(iLocal_235, 1);
					}
					Local_47.f_2 = iLocal_235;
					iLocal_237 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_237, 1, false);
					}
					iLocal_221 = 0;
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 64:
					iLocal_237 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 512:
					iLocal_237 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 1024:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_235 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, false))
					{
						__LIB_14__::func_775(iLocal_235, uParam0->f_3629, uParam0->f_3632, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
						func_829(iLocal_235, 0);
					}
					Local_47.f_2 = iLocal_235;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2))
					{
						iLocal_237 = iParam2;
					}
					else
					{
						iLocal_237 = VEHICLE::CREATE_VEHICLE(joaat("mesa"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), true, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						VEHICLE::SET_VEHICLE_EXTRA(iLocal_237, 1, false);
						iLocal_221 = 0;
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 2048:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iLocal_235 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, false))
					{
						__LIB_14__::func_775(iLocal_235, uParam0->f_3629, uParam0->f_3632, 24, 0);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
						func_829(iLocal_235, 0);
					}
					Local_47.f_2 = iLocal_235;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2))
					{
						iLocal_237 = iParam2;
					}
					else
					{
						iLocal_237 = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), true, true, false);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 256:
					iLocal_235 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_235, false))
					{
						__LIB_14__::func_775(iLocal_235, uParam0->f_3629, uParam0->f_3632, 24, 0);
						func_829(iLocal_235, 1);
						VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
					}
					Local_47.f_2 = iLocal_235;
					if (ENTITY::DOES_ENTITY_EXIST(Local_47.f_2))
					{
					}
					iLocal_237 = iParam2;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_237, true);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_237) == 0)
						{
						}
						else
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_237);
						}
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_237, -1);
					}
					uParam1->f_9 = iLocal_237;
					iLocal_255 = 1;
					uParam0->f_4 = 1;
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_237);
					return 1;
					break;
				case 1:
					VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
					func_829(iLocal_235, 0);
					Local_47.f_2 = iLocal_235;
					uParam0->f_3628 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
						VEHICLE::DELETE_VEHICLE(&iParam2);
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, false))
					{
					}
					if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_235) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_235) == 0)
					{
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
					{
						iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_235);
					}
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_235);
					uParam1->f_9 = iLocal_235;
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_235, joaat("mesa")))
					{
						if (VEHICLE::DOES_EXTRA_EXIST(iLocal_235, 1))
						{
							if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_235, 1))
							{
								iLocal_221 = 1;
							}
							else
							{
								iLocal_221 = 0;
							}
						}
					}
					iLocal_255 = 1;
					return 1;
					break;
				case 4:
					VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_235);
					func_829(iLocal_235, 0);
					Local_47.f_2 = iLocal_235;
					if (ENTITY::DOES_ENTITY_EXIST(iParam2))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
							VEHICLE::DELETE_VEHICLE(&iParam2);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
					{
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_235) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_235) == 0)
						{
						}
						else
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_235);
						}
					}
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_235);
					uParam1->f_9 = iLocal_235;
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_235, joaat("mesa")))
					{
						if (VEHICLE::DOES_EXTRA_EXIST(iLocal_235, 1))
						{
							if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_235, 1))
							{
								iLocal_221 = 1;
							}
							else
							{
								iLocal_221 = 0;
							}
						}
					}
					iLocal_255 = 1;
					return 1;
					break;
				case 16:
					if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
						if (iLocal_236 != iParam2)
						{
							VEHICLE::DELETE_VEHICLE(&iParam2);
						}
						else
						{
							iLocal_236 = iParam2;
						}
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, false))
					{
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_236))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, false))
					{
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_236) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_236) == 0)
						{
						}
						else
						{
							iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_236);
						}
					}
					uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_236);
					uParam1->f_9 = iLocal_236;
					if (VEHICLE::IS_VEHICLE_MODEL(iLocal_236, joaat("mesa")))
					{
						if (VEHICLE::DOES_EXTRA_EXIST(iLocal_236, 1))
						{
							if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iLocal_236, 1))
							{
								iLocal_221 = 1;
							}
							else
							{
								iLocal_221 = 0;
							}
						}
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_236, true, false);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, -1);
					iLocal_255 = 1;
					return 1;
					break;
				case 128:
					if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
						if (iParam2 != iLocal_236)
						{
							VEHICLE::DELETE_VEHICLE(&iParam2);
						}
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam2, false))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, false))
					{
						iLocal_220 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iLocal_236);
						if (VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_236) == -1 || VEHICLE::GET_NUMBER_OF_VEHICLE_COLOURS(iLocal_236) == 0)
						{
						}
						else
						{
							uParam1->f_22 = ENTITY::GET_ENTITY_MODEL(iLocal_236);
						}
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, -1);
					}
					uParam1->f_9 = iLocal_236;
					iLocal_255 = 1;
					return 1;
					break;
				}
		}
	}
	else
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_47.f_2))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_47.f_2, true, false);
	}
	return 0;
}

void func_829(int iParam0, int iParam1)//Position - 0x8B445
{
	Local_47.f_277 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(iParam0);
	Local_47.f_277.f_1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	__LIB_0__::func_209(iParam0, &(Local_47.f_277.f_2));
	Local_47.f_151 = iParam1;
}

int func_873(var uParam0, int iParam1)//Position - 0x900BE
{
	if (!__LIB_1__::func_490(iLocal_258, 4096))
	{
		func_757(&iLocal_258, 4096);
	}
	else
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iLocal_238 = iParam1;
		ENTITY::SET_ENTITY_COORDS(iLocal_238, uParam0->f_396[0 /*203*/].f_16, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_238, uParam0->f_396[0 /*203*/].f_19);
		return 1;
	}
	else
	{
		iLocal_238 = PED::CREATE_PED(4, joaat("A_M_Y_MotoX_01"), uParam0->f_396[0 /*203*/].f_16, uParam0->f_396[0 /*203*/].f_19, true, true);
		return 1;
	}
	return 0;
}

int func_874(var uParam0)//Position - 0x9014E
{
	if (!__LIB_1__::func_490(iLocal_258, 8192))
	{
		func_875(&(uParam0->f_396[0 /*203*/]));
		func_757(&iLocal_258, 8192);
	}
	return 0;
}

void func_875(var uParam0)//Position - 0x9017B
{
	if (Local_47.f_0 != 1)
	{
		return;
	}
	if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_142())
		{
			if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iLocal_235 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
				{
					if (func_877(iLocal_235, func_142()))
					{
						iLocal_254 = 0;
						func_757(&iLocal_259, 1);
					}
					else
					{
						func_757(&iLocal_259, 2);
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			iLocal_235 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
			{
				if (func_877(iLocal_235, func_142()))
				{
					iLocal_254 = 0;
					func_757(&iLocal_259, 4);
				}
				else
				{
					iLocal_254 = 1;
					func_757(&iLocal_259, 8);
				}
			}
		}
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false)) && VEHICLE::IS_VEHICLE_SEAT_FREE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (func_876())
			{
				if (!func_142())
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						if (__LIB_0__::func_76(PLAYER::GET_PLAYERS_LAST_VEHICLE(), PLAYER::PLAYER_PED_ID(), 1) < 20f)
						{
							iLocal_236 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_236))
							{
								if (func_877(iLocal_236, func_142()))
								{
									iLocal_254 = 0;
									func_757(&iLocal_259, 16);
								}
								else
								{
									func_757(&iLocal_259, 32);
								}
							}
						}
						else
						{
							func_757(&iLocal_259, 64);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (__LIB_0__::func_76(PLAYER::GET_PLAYERS_LAST_VEHICLE(), PLAYER::PLAYER_PED_ID(), 1) < 20f)
					{
						iLocal_236 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_236))
						{
							if (func_877(iLocal_236, func_142()))
							{
								iLocal_254 = 0;
								func_757(&iLocal_259, 128);
							}
							else
							{
								func_757(&iLocal_259, 256);
							}
						}
					}
					else
					{
						func_757(&iLocal_259, 512);
					}
				}
			}
			else if (!func_142())
			{
				func_757(&iLocal_259, 1024);
			}
			else
			{
				func_757(&iLocal_259, 2048);
			}
		}
	}
	else if (!func_142())
	{
		func_757(&iLocal_259, 1024);
	}
	else
	{
		func_757(&iLocal_259, 2048);
	}
}

int func_876()//Position - 0x903AF
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
				{
					return 0;
				}
				else if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
				{
					return 0;
				}
				else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 1;
}

int func_877(int iParam0, bool bParam1)//Position - 0x90425
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("kalahari"))
	{
		return !bParam1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("huntley"))
	{
		return !bParam1;
	}
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("dubsta3"))
	{
		return !bParam1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("bfinjection"):
		case joaat("baller"):
		case joaat("bison"):
		case joaat("bison2"):
		case joaat("bjxl"):
		case joaat("bobcatxl"):
		case joaat("cavalcade"):
		case joaat("dubsta"):
		case joaat("dubsta2"):
		case joaat("fbi2"):
		case joaat("gresley"):
		case joaat("granger"):
		case joaat("mesa"):
		case joaat("patriot"):
		case joaat("rancherxl"):
		case joaat("rebel"):
		case joaat("rebel2"):
		case joaat("rocoto"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("serrano"):
		case joaat("monster"):
		case joaat("brawler"):
		case joaat("crusader"):
			return !bParam1;
			break;
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("blazer3"):
		case joaat("sanchez"):
			return bParam1;
			break;
		case joaat("dump"):
			return 0;
			break;
		case joaat("bodhi2"):
			return (!bParam1 && __LIB_0__::func_683() == 2);
			break;
	}
	return 0;
}

void func_882()//Position - 0x905AE
{
	if (func_142())
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 2, 0, 0, 0);
		if (__LIB_0__::func_683() == 0)
		{
			func_540(PLAYER::PLAYER_PED_ID(), 12, 48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else if (__LIB_0__::func_683() == 2)
		{
			func_540(PLAYER::PLAYER_PED_ID(), 12, 44, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else if (__LIB_0__::func_683() == 1)
		{
			func_540(PLAYER::PLAYER_PED_ID(), 12, 42, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
}

int func_883(var uParam0)//Position - 0x9062C
{
	VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(0.2f);
	switch (uParam0->f_30)
	{
		case 0:
			func_896(uParam0);
			bLocal_188 = false;
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			__LIB_0__::func_671(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", false);
			uParam0->f_3008 = __LIB_8__::func_314();
			uParam0->f_22 = __LIB_1__::func_6();
			switch (Local_47.f_0)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", false);
					break;
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", false);
					break;
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", false);
					break;
			}
			if (func_888(uParam0))
			{
				func_886(uParam0);
				uParam0->f_30 = 1;
			}
			break;
		case 1:
			__LIB_1__::func_300(&Local_222);
			uParam0->f_30 = 2;
			break;
		case 2:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_3008))
				{
					if (__LIB_16__::func_618(&Local_222))
					{
						if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
						{
							uParam0->f_30 = 3;
						}
					}
				}
			}
			break;
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (Local_47.f_0 == 1)
			{
				uParam0->f_30 = 4;
			}
			else
			{
				func_886(uParam0);
				uParam0->f_30 = 4;
			}
			break;
		case 4:
			return 0;
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

int func_886(var uParam0)//Position - 0x907BB
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (iVar0 != 0)
		{
			if (!func_887(uParam0, iVar0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_887(var uParam0, int iParam1)//Position - 0x907F2
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_140(&(uParam0->f_396[iParam1 /*203*/]), 1);
	}
	return func_140(&(uParam0->f_396[iParam1 /*203*/]), 0);
}

int func_888(var uParam0)//Position - 0x90837
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!func_889(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_889(var uParam0, int iParam1)//Position - 0x90868
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_890(&(uParam0->f_396[iParam1 /*203*/]));
}

int func_890(var uParam0)//Position - 0x90892
{
	if (!__LIB_39__::func_716(uParam0) || !func_891(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_891(var uParam0)//Position - 0x908B6
{
	if (uParam0->f_22 == 0 || uParam0->f_22 == joaat("rebel"))
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

void func_896(var uParam0)//Position - 0x9099C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		func_897(uParam0, iVar0);
		iVar0++;
	}
}

void func_897(var uParam0, int iParam1)//Position - 0x909C1
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_898(&(uParam0->f_396[iParam1 /*203*/]));
}

void func_898(var uParam0)//Position - 0x909EA
{
	func_900(uParam0);
	__LIB_39__::func_717(uParam0);
}

void func_900(var uParam0)//Position - 0x90A19
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	if (uParam0->f_21 == joaat("A_M_Y_MotoX_02"))
	{
	}
	STREAMING::REQUEST_MODEL(uParam0->f_21);
}

void func_901()//Position - 0x90A40
{
	char cVar0[16];
	StringCopy(&cVar0, "Offroad_", 16);
	switch (Local_47.f_11)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 16);
			break;
		case 1:
			StringIntConCat(&cVar0, 2, 16);
			break;
		case 2:
			StringIntConCat(&cVar0, 6, 16);
			break;
		case 3:
			StringIntConCat(&cVar0, 3, 16);
			break;
		case 4:
			StringIntConCat(&cVar0, 4, 16);
			break;
		case 5:
			StringIntConCat(&cVar0, 5, 16);
			break;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(&cVar0);
}

int func_905(struct<11> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x90B11
{
	int iVar0;
	char cVar1[64];
	char* sVar2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	__LIB_12__::func_849(23, 1);
	switch (Local_910.f_5)
	{
		case 0:
			__LIB_0__::func_130();
			HUD::DISPLAY_RADAR(false);
			HUD::SET_WAYPOINT_OFF();
			HUD::CLEAR_GPS_PLAYER_WAYPOINT();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			__LIB_16__::func_1();
			__LIB_14__::func_826(0);
			func_951(&Local_1203);
			Local_47.f_4 = { Param0.f_1 };
			Local_1396 = { Param0.f_1 };
			Local_47.f_11 = Param0.f_0;
			func_948(PLAYER::PLAYER_PED_ID(), 0);
			__LIB_14__::func_529(PLAYER::PLAYER_PED_ID(), &(Local_47.f_380), 1, -1);
			func_209(Local_1396);
			func_784();
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_1396, 60f, 0);
			StringCopy(&cVar1, "offroadrace", 64);
			switch (Local_47.f_11)
			{
				case 0:
					StringIntConCat(&cVar1, 1, 64);
					break;
				case 1:
					StringIntConCat(&cVar1, 2, 64);
					break;
				case 2:
					StringIntConCat(&cVar1, 6, 64);
					break;
				case 3:
					StringIntConCat(&cVar1, 3, 64);
					break;
				case 4:
					StringIntConCat(&cVar1, 4, 64);
					break;
				case 5:
					StringIntConCat(&cVar1, 5, 64);
					break;
			}
			StringConCat(&cVar1, "car", 64);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, &cVar1);
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Param0.f_4)
			{
				if (iVar0 < Local_1203.f_396)
				{
					Local_1203.f_396[iVar0 + 1 /*203*/].f_8 = Param0.f_4[iVar0];
					Local_1203.f_396[iVar0 + 1 /*203*/].f_9 = Param0.f_10[iVar0];
					if (ENTITY::DOES_ENTITY_EXIST(Local_1203.f_396[iVar0 + 1 /*203*/].f_8))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1203.f_396[iVar0 + 1 /*203*/].f_8, true, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_1203.f_396[iVar0 + 1 /*203*/].f_9))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_1203.f_396[iVar0 + 1 /*203*/].f_9, true, true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_1203.f_396[iVar0 + 1 /*203*/].f_9, true);
						VEHICLE::SET_VEHICLE_IS_RACING(Local_1203.f_396[iVar0 + 1 /*203*/].f_9, true);
					}
				}
				iVar0++;
			}
			switch (Local_47.f_11)
			{
				case 0:
					sVar2 = "CanyonCliffs_Start";
					break;
				case 1:
					sVar2 = "RidgeRun_Start";
					break;
				case 3:
					sVar2 = "ValleyTrail_Start";
					break;
				case 4:
					sVar2 = "LakesideSplash_Start";
					break;
				case 5:
					sVar2 = "EcoFriendly_Start";
					break;
				case 2:
					sVar2 = "MinewardSpiral_Start";
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar2))
				{
					if (TASK::IS_SCENARIO_GROUP_ENABLED(sVar2))
					{
						TASK::SET_SCENARIO_GROUP_ENABLED(sVar2, false);
					}
				}
			}
			switch (Local_47.f_11)
			{
				case 0:
					sVar2 = "CanyonCliffs";
					break;
				case 1:
					sVar2 = "RidgeRun";
					break;
				case 3:
					sVar2 = "ValleyTrail";
					break;
				case 4:
					sVar2 = "LakesideSplash";
					break;
				case 5:
					sVar2 = "EcoFriendly";
					break;
				case 2:
					sVar2 = "MinewardSpiral";
					break;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				if (TASK::DOES_SCENARIO_GROUP_EXIST(sVar2))
				{
					if (!TASK::IS_SCENARIO_GROUP_ENABLED(sVar2))
					{
						TASK::SET_SCENARIO_GROUP_ENABLED(sVar2, true);
					}
				}
			}
			func_722();
			Local_47.f_363 = 0;
			func_907(&Local_1203);
			func_824(&Local_1203, &iLocal_1399, 1036831949, 0);
			GRAPHICS::ANIMPOSTFX_STOP("SwitchSceneNeutral");
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, false);
			func_906();
			__LIB_1__::func_31(&(Local_47.f_359));
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
			}
			SYSTEM::WAIT(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_801();
			}
			VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
			}
			Local_910.f_5 = 2;
			func_883(&Local_1203);
			break;
		case 2:
			STREAMING::REQUEST_ANIM_DICT("MINI@RACING@BIKE@");
			STREAMING::REQUEST_ANIM_DICT("MINI@RACING@QUAD@");
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			if (Local_47.f_11 == 0)
			{
				STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14c"));
				STREAMING::REQUEST_MODEL(joaat("prop_fncwood_14e"));
			}
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", false);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", false);
			Local_1203.f_3008 = __LIB_8__::func_314();
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			STREAMING::NEW_LOAD_SCENE_STOP();
			Local_910.f_5 = 3;
			break;
		case 3:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(3) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_1203.f_3008))
			{
				AUDIO::START_AUDIO_SCENE("RACE_INTRO_GENERIC");
				if (Local_47.f_11 == 4)
				{
					if (STREAMING::IS_IPL_ACTIVE("CS2_06_TriAf02"))
					{
						Local_47.f_366 = 1;
						STREAMING::REMOVE_IPL("CS2_06_TriAf02");
					}
				}
				Local_910.f_5 = 6;
			}
			break;
		case 4:
			Local_910.f_5 = 5;
			__LIB_1__::func_31(&(Local_910.f_2));
			break;
		case 5:
			if (__LIB_15__::func_251(&(Local_910.f_2), 0.5f))
			{
				Local_910.f_5 = 6;
			}
			break;
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Local_910.f_5 = 9;
			}
			else
			{
				Local_910.f_5 = 9;
				__LIB_1__::func_12(&(Local_910.f_2));
			}
			break;
		case 7:
			if (__LIB_15__::func_251(&(Local_910.f_2), 0.5f))
			{
				Local_910.f_5 = 8;
			}
			break;
		case 8:
			Local_910.f_5 = 9;
			break;
		case 9:
			if (__LIB_1__::func_13(&(Local_910.f_2)))
			{
				__LIB_1__::func_12(&(Local_910.f_2));
			}
			return 0;
			break;
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_906()//Position - 0x91036
{
	switch (Local_47.f_11)
	{
		case 0:
			iLocal_249 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1696.2106f, 4309.484f, 78.3513f, -17.1796f, 0f, 57.1903f, 42.5736f, false, 2);
			iLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -1694.7935f, 4311.826f, 78.298f, -17.1796f, 0f, 58.2317f, 42.5736f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_250, iLocal_249, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 1:
			iLocal_249 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -634.2543f, 1916.1086f, 192.3409f, -9.1154f, 0f, -9.1071f, 45.0104f, false, 2);
			iLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -641.3137f, 1917.6265f, 190.8026f, -9.1154f, 0f, -15.3093f, 45.0104f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_250, iLocal_249, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 3:
			iLocal_249 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -236.4628f, 4240.5273f, 75.4924f, -8.8267f, 0f, 79.9126f, 50f, false, 2);
			iLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), -235.1967f, 4236.5723f, 71.9846f, -8.8267f, 0f, 79.9126f, 50f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_250, iLocal_249, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 4:
			iLocal_249 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1796.4657f, 4040.9116f, 48.7151f, -4.5857f, -0.0023f, -137.7639f, 44.9933f, false, 2);
			iLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 1791.1207f, 4036.0698f, 48.7158f, -4.8249f, 0.0628f, -133.4925f, 44.9933f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_250, iLocal_249, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 5:
			iLocal_249 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2071.4714f, 2157.5144f, 147.487f, -7.5491f, 0.0781f, -126.4479f, 45.0214f, false, 2);
			iLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 2073.7583f, 2160.3643f, 147.2902f, -10.4994f, 0.2542f, -133.5917f, 45.0214f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_250, iLocal_249, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
		case 2:
			iLocal_249 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 3098.0613f, 2697.8962f, 105.0805f, -14.244f, -0.0027f, 61.1833f, 45.0418f, false, 2);
			iLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), 3101.7432f, 2706.1934f, 105.0836f, -14.3949f, 0.0565f, 66.3009f, 45.0418f, false, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_250, iLocal_249, 2500, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			break;
	}
	CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.3f);
}

void func_907(var uParam0)//Position - 0x91360
{
	__LIB_18__::func_822(&(uParam0->f_2021));
	__LIB_38__::func_660(&(uParam0->f_2021.f_741));
	func_908(&(uParam0->f_2021));
}

void func_908(var uParam0)//Position - 0x91386
{
	__LIB_38__::func_636(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[1 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 127f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[2 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 297f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[3 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 324f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[4 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 351f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[5 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 378f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[6 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 405f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[7 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 432f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[8 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 459f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[9 /*2*/]), (257f + __LIB_38__::func_593(0.0047f, 1280, 1)), 486f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[10 /*2*/]), 257f, 297f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[11 /*2*/]), 257f, 324f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[12 /*2*/]), 257f, 351f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[13 /*2*/]), 257f, 378f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[14 /*2*/]), 257f, 405f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[15 /*2*/]), 257f, 432f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[16 /*2*/]), 257f, 459f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[17 /*2*/]), 298f, 567f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[18 /*2*/]), 384f, 567f, 1);
	__LIB_38__::func_636(&(uParam0->f_316[19 /*2*/]), 470f, 567f, 1);
	__LIB_38__::func_942(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	__LIB_38__::func_592(uParam0[0 /*9*/], 0, 0, 0, 255);
	__LIB_38__::func_942(uParam0[1 /*9*/], 384f, 224f, 256f, 256f, 0);
	__LIB_38__::func_592(uParam0[1 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[2 /*9*/], 495f, 306f, 32f, 32f, 0);
	__LIB_38__::func_592(uParam0[2 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[3 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	__LIB_38__::func_592(uParam0[3 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[4 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	__LIB_38__::func_592(uParam0[4 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(uParam0[5 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	__LIB_38__::func_592(uParam0[5 /*9*/], 255, 255, 255, 255);
	__LIB_38__::func_942(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	__LIB_38__::func_592(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	__LIB_38__::func_942(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	__LIB_38__::func_592(&(uParam0->f_420[1 /*8*/]), 80, 80, 80, 255);
	__LIB_38__::func_942(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[2 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[3 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[4 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[5 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[6 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[7 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[8 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[9 /*8*/]), 257f, 456f, 254f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[9 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[11 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[12 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[13 /*8*/]), 117, 1);
	__LIB_38__::func_942(&(uParam0->f_420[14 /*8*/]), 257f, 564f, 83f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[14 /*8*/]), 107, 1);
	__LIB_38__::func_942(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[15 /*8*/]), 108, 1);
	__LIB_38__::func_942(&(uParam0->f_420[16 /*8*/]), 428f, 564f, 83f, 25f, 1);
	__LIB_18__::func_781(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}

void func_948(int iParam0, int iParam1)//Position - 0x92CD4
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
				iVar1 = func_544(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_270(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
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

void func_951(var uParam0)//Position - 0x9328B
{
	Local_47.f_0 = 1;
	Local_47.f_1 = 0;
	Local_47.f_3 = 0;
	Local_47.f_7 = 97f;
	Local_47.f_8 = 4;
	Local_47.f_9 = joaat("A_M_Y_MotoX_01");
	Local_47.f_10 = joaat("bjxl");
	StringCopy(&(Local_47.f_21[0 /*8*/]), "CANYONCLIFFS", 32);
	Local_47.f_13[0] = 165f;
	StringCopy(&(Local_47.f_21[1 /*8*/]), "RIDGERUN", 32);
	Local_47.f_13[1] = 80f;
	StringCopy(&(Local_47.f_21[2 /*8*/]), "MINEWARD", 32);
	Local_47.f_13[2] = 165f;
	StringCopy(&(Local_47.f_21[3 /*8*/]), "VALLEYTRAIL", 32);
	Local_47.f_13[3] = 165f;
	StringCopy(&(Local_47.f_21[4 /*8*/]), "LAKESIDE", 32);
	Local_47.f_13[4] = 165f;
	StringCopy(&(Local_47.f_21[5 /*8*/]), "ECOFRIENDLY", 32);
	Local_47.f_13[5] = 165f;
}

void func_955()//Position - 0x933D9
{
	__LIB_12__::func_849(23, 0);
	GRAPHICS::ANIMPOSTFX_STOP("SwitchSceneNetural");
	GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionOut");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameEndMichael");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameEndFranklin");
	GRAPHICS::ANIMPOSTFX_STOP("MinigameEndTrevor");
	switch (Local_47.f_11)
	{
		case 0:
			break;
		case 1:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 2:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("QUARRY"))
			{
				TASK::SET_EXCLUSIVE_SCENARIO_GROUP("QUARRY");
			}
			break;
	}
	if (__LIB_1__::func_490(iLocal_216, 1))
	{
		__LIB_38__::func_475(&iLocal_216, 1);
		__LIB_0__::func_704(0);
	}
	__LIB_38__::func_476(&(Local_1203.f_3008));
	VEHICLE::SET_ENABLE_VEHICLE_SLIPSTREAMING(false);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 36, false);
	}
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	__LIB_15__::func_931();
	__LIB_14__::func_826(1);
	__LIB_0__::func_131();
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_958(&Local_1203, 0);
	PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	PAD::ENABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
	__LIB_0__::func_345(&uLocal_190, 0, 0);
	if (bLocal_187)
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	__LIB_16__::func_616();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_958(var uParam0, bool bParam1)//Position - 0x935CB
{
	char cVar0[64];
	StringCopy(&cVar0, "offroadrace", 64);
	switch (Local_47.f_11)
	{
		case 0:
			StringIntConCat(&cVar0, 1, 64);
			break;
		case 1:
			StringIntConCat(&cVar0, 2, 64);
			break;
		case 2:
			StringIntConCat(&cVar0, 6, 64);
			break;
		case 3:
			StringIntConCat(&cVar0, 3, 64);
			break;
		case 4:
			StringIntConCat(&cVar0, 4, 64);
			break;
		case 5:
			StringIntConCat(&cVar0, 5, 64);
			break;
	}
	StringConCat(&cVar0, "car", 64);
	if (bParam1)
	{
		func_208(uParam0);
	}
	else
	{
		func_960(uParam0);
	}
	func_959(uParam0);
	__LIB_0__::func_671(0);
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	if (Local_47.f_11 != -1)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, &cVar0);
	}
	if (iLocal_993)
	{
		__LIB_0__::func_229("SPR_MOVE_FAIL", 5000, 0);
		iLocal_993 = 0;
	}
}

void func_959(var uParam0)//Position - 0x93695
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3593[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3593[iVar0], false))
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_3593[iVar0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_3593[iVar0], true))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_3593[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_960(var uParam0)//Position - 0x93702
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_18)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_8, false) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_396[iVar0 /*203*/].f_9, false))
		{
			if (uParam0->f_396[iVar0 /*203*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_396[iVar0 /*203*/].f_10))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_396[iVar0 /*203*/].f_10));
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_396[iVar0 /*203*/].f_9))
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_396[iVar0 /*203*/].f_8);
				}
				else
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_396[iVar0 /*203*/].f_8, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
					{
						TASK::TASK_STAND_STILL(uParam0->f_396[iVar0 /*203*/].f_8, -1);
					}
					PED::SET_PED_KEEP_TASK(uParam0->f_396[iVar0 /*203*/].f_8, true);
				}
			}
		}
		iVar0++;
	}
}

