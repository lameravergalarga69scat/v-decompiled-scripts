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
	struct<13> Local_37[10];
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	struct<61> Local_42 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	int* iLocal_54 = NULL;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int* iLocal_58 = NULL;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<9> Local_61[4];
	struct<6> Local_62 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	struct<6> Local_66 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	struct<9> Local_70[2];
	struct<6> Local_71 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<6> Local_75[2];
	struct<6> Local_76 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_78 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	bool bLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151[4] = { 0, 0, 0, 0 };
	int iLocal_152[2] = { 0, 0 };
	int iLocal_153 = 0;
	struct<3> Local_154 = { 0, 0, 0 } ;
	struct<3> Local_155 = { 0, 0, 0 } ;
	struct<3> Local_156 = { 0, 0, 0 } ;
	var uLocal_157 = 15;
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
	var uLocal_209 = 15;
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
	var uLocal_261 = 15;
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
	var uLocal_313 = 15;
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
	var uLocal_365 = 15;
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
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	var uLocal_419 = 16;
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
	char* sLocal_584 = NULL;
	char* sLocal_585 = NULL;
	char* sLocal_586 = NULL;
	int iLocal_587 = 0;
	struct<61> Local_588 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	uLocal_39 = __LIB_2__::func_108(50);
	iLocal_40 = joaat("pcj");
	Local_154 = { 1070.36f, -776.11f, 58.25f };
	Local_155 = { 1068.5176f, -789.5724f, 57.2626f };
	sLocal_584 = "rcmpaparazzo_3b";
	sLocal_585 = "amb@world_human_stand_impatient@male@no_sign@idle_a";
	sLocal_586 = "amb@world_human_stand_impatient@male@no_sign@base";
	iLocal_587 = -1;
	Local_42 = { ScriptParam_588 };
	__LIB_20__::func_264(&Local_42);
	__LIB_26__::func_252();
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_581(1);
	}
	if (__LIB_0__::func_294())
	{
		Global_78564 = 1;
		iLocal_38 = 0;
		while (!__LIB_30__::func_557(&Local_42))
		{
			SYSTEM::WAIT(0);
		}
		Global_78564 = 0;
	}
	func_567();
	if (__LIB_0__::func_176(71) == 1 || __LIB_0__::func_528(49))
	{
		iLocal_111 = 1;
	}
	else
	{
		iLocal_111 = 0;
	}
	__LIB_30__::func_553(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_TH", 0);
		__LIB_35__::func_898(Local_42.f_9, 0, 0, 0, 0, 0);
		func_547();
		if (iLocal_43 == 8)
		{
			func_541();
		}
		else if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_43)
			{
				case 0:
					func_414();
					break;
				case 1:
					func_412();
					break;
				case 2:
					func_410();
					break;
				case 3:
					func_408();
					break;
				case 4:
					func_289();
					break;
				case 5:
					func_258();
					break;
				case 6:
					func_240();
					break;
				case 7:
					func_3();
					break;
			}
		}
		else
		{
			func_1(0);
		}
	}
}

void func_1(int iParam0)//Position - 0x1EC
{
	bLocal_118 = true;
	iLocal_153 = iParam0;
	func_2(8);
}

void func_2(int iParam0)//Position - 0x203
{
	iLocal_79 = 0;
	iLocal_43 = iParam0;
	iLocal_44 = 0;
}

void func_3()//Position - 0x218
{
	func_235();
	switch (iLocal_44)
	{
		case 0:
			iLocal_86 = 0;
			iLocal_44 = 1;
			if ((__LIB_1__::func_197(Local_62.f_0) && __LIB_0__::func_508(Local_62.f_0, PLAYER::PLAYER_PED_ID(), 150f, 1)) && iLocal_103 == 1)
			{
				iLocal_121 = MISC::GET_GAME_TIMER() + 15000;
			}
			else
			{
				iLocal_121 = MISC::GET_GAME_TIMER() + 4001;
			}
			iLocal_104 = 0;
			break;
		case 1:
			func_232();
			if (MISC::GET_GAME_TIMER() > iLocal_121 || iLocal_45 == 5)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					if ((((!__LIB_0__::func_75() && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()))
					{
						if (!iLocal_86)
						{
							__LIB_0__::func_203(&uLocal_419, 3, 0, "BEVERLY", 0, 1);
							__LIB_0__::func_203(&uLocal_419, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (bLocal_89)
							{
								if (__LIB_38__::func_30(&uLocal_419, 50, "pap3bau", "PAP3_ENDCAL2", 9, 1, 0, 0, 0))
								{
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 4.5f, 0);
									iLocal_86 = 1;
								}
							}
							else if (__LIB_38__::func_30(&uLocal_419, 50, "pap3bau", "PAP3_ENDCALL", 9, 1, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 4.5f, 0);
								iLocal_86 = 1;
							}
						}
						else if (!__LIB_0__::func_75())
						{
							if (__LIB_10__::func_564())
							{
								iLocal_44 = 2;
							}
						}
					}
				}
				else
				{
					iLocal_121 = MISC::GET_GAME_TIMER() + 3000;
					if (iLocal_104 == 0)
					{
						__LIB_0__::func_210("PAP3B_COPS", 7500, 0);
						iLocal_104 = 1;
					}
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			iLocal_79 = 0;
			func_4();
			break;
	}
}

void func_4()//Position - 0x3C4
{
	func_208(1);
	func_5(104, 1);
	func_581(1);
}

void func_5(int iParam0, bool bParam1)//Position - 0x3DD
{
	int iVar0;
	char* sVar1;
	iVar0 = __LIB_18__::func_205();
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
	__LIB_41__::func_558(iVar0, 0);
	MISC::SET_BIT(&Global_78567, 1);
	if (Global_112473[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		__LIB_0__::func_56(&(Global_112473[iVar0 /*10*/].f_9));
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
	__LIB_32__::func_577(iVar0, 1, 0, 0);
	__LIB_0__::func_46(0, 0);
	MemCopy(&sVar1, {__LIB_0__::func_339(iVar0)}, 4);
	__LIB_0__::func_44(&sVar1, __LIB_26__::func_250());
	func_33();
	if (BitTest(Global_113386.f_10016.f_25, 3))
	{
		__LIB_0__::func_18();
	}
	__LIB_35__::func_897();
	if (iParam0 == 210 || iParam0 == 211)
	{
		__LIB_24__::func_943(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		__LIB_24__::func_943(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		__LIB_24__::func_943(iParam0, 0, 0);
	}
	__LIB_0__::func_533();
}

void func_33()//Position - 0x158F
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
			iVar3 = __LIB_18__::func_168(iVar1);
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
				if (func_151(iVar1, 14, iVar2))
				{
					func_34(iVar1, 14, iVar2);
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

int func_34(int iParam0, int iParam1, int iParam2)//Position - 0x1650
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
	Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, iParam2, -1) };
	if (!BitTest(Global_78130[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_151(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { __LIB_18__::func_180(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_34(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { __LIB_18__::func_247(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_34(iParam0, 14, uVar5[iVar3]))
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
		uVar6 = { __LIB_18__::func_180(iVar0, 0) };
		Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar0, iParam1, uVar6[iParam1], -1) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, __LIB_0__::func_33(iParam1), Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4, 0);
		}
	}
	if (func_77(iParam0, iVar0, &iVar7, 0))
	{
		func_37(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_35(iParam0, iVar0, &iVar7))
	{
		func_37(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_35(int iParam0, int iParam1, int iParam2)//Position - 0x180C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_151(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x18D3
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
										func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_43(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_77(iParam0, iVar10, &iVar4, 1))
							{
								func_37(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_37(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_37(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_37(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_37(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_37(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_37(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_37(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_77(iParam0, iVar10, &iVar4, 0))
		{
			func_37(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_35(iParam0, iVar10, &iVar4))
		{
			func_37(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_43(int iParam0, int iParam1, int iParam2)//Position - 0x2910
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
				if (func_151(iParam0, iParam1, iVar0))
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
				if (func_151(iParam0, iParam1, iVar1))
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

int func_77(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8FEA
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_151(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_151(int iParam0, int iParam1, int iParam2)//Position - 0x1F5E4
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
				if (!func_151(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_151(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_151(iParam0, 14, iVar4))
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
			if (!func_151(iParam0, 14, uVar8[iVar7]))
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

void func_208(int iParam0)//Position - 0x26B45
{
	__LIB_14__::func_366(0);
	__LIB_14__::func_367(0);
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		}
	}
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(true);
}

void func_232()//Position - 0x2742D
{
	if (__LIB_1__::func_197(Local_62.f_0) && __LIB_0__::func_121(Local_75[0 /*6*/]))
	{
		if (__LIB_1__::func_197(Local_61[0 /*9*/]) && __LIB_1__::func_197(Local_62.f_0))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_61[0 /*9*/], Local_75[0 /*6*/], false))
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
				{
					if (PED::IS_PED_IN_VEHICLE(Local_62.f_0, Local_75[0 /*6*/], false) && PED::IS_PED_IN_VEHICLE(Local_61[1 /*9*/], Local_75[0 /*6*/], false))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_61[0 /*9*/], Local_75[0 /*6*/], "PAP3_Security1", 262144, 0, 8, -1, -1f, false, 2f);
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_62.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_62.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
			{
				TASK::TASK_ENTER_VEHICLE(Local_62.f_0, Local_75[0 /*6*/], 20000, 1, 1f, 1, 0);
			}
		}
		if (__LIB_1__::func_197(Local_61[2 /*9*/]) && __LIB_0__::func_121(Local_75[1 /*6*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_61[2 /*9*/], Local_75[1 /*6*/], false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
				{
					if (PED::IS_PED_FACING_PED(Local_61[2 /*9*/], Local_62.f_0, 70f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 0)
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_61[2 /*9*/], Local_75[1 /*6*/], "PAP3_Security1", 262144, 0, 8, -1, -1f, false, 2f);
						}
					}
				}
			}
		}
	}
	if (__LIB_1__::func_197(Local_61[0 /*9*/]) && PED::IS_PED_IN_ANY_VEHICLE(Local_61[0 /*9*/], false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_61[0 /*9*/], 1158.5201f, -759.3739f, 56.322784f, 1116.8687f, -759.6908f, 61.70632f, 13.75f, false, true, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				PED::SET_PED_KEEP_TASK(Local_61[0 /*9*/], true);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_61[0 /*9*/], PED::GET_VEHICLE_PED_IS_IN(Local_61[0 /*9*/], false), PLAYER::PLAYER_PED_ID(), 8, 25f, 786468, 20f, 20f, true);
			}
		}
		if (__LIB_1__::func_197(Local_61[2 /*9*/]) && __LIB_0__::func_121(Local_75[1 /*6*/]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_61[2 /*9*/], 1158.5201f, -759.3739f, 56.322784f, 1116.8687f, -759.6908f, 61.70632f, 13.75f, false, true, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 0)
				{
					PED::SET_PED_KEEP_TASK(Local_61[2 /*9*/], true);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_61[2 /*9*/], Local_75[1 /*6*/], Local_62.f_0, 12, 25f, 786469, 20f, 10f, true);
					if (iLocal_82 == 0)
					{
						func_1(1);
					}
					iLocal_45 = 5;
				}
			}
		}
	}
}

void func_235()//Position - 0x277B6
{
	struct<6> Var0;
	if (iLocal_87 == 0)
	{
		if (iLocal_126 == 0)
		{
			iLocal_126 = MISC::GET_GAME_TIMER();
		}
		Var0 = { __LIB_0__::func_390() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER"))
		{
			__LIB_0__::func_296();
		}
		if (__LIB_1__::func_197(Local_62.f_0))
		{
			if (__LIB_1__::func_183(Local_75[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_75[0 /*6*/], 1, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_62.f_0, Local_75[0 /*6*/], false))
				{
					if (!__LIB_4__::func_465(Local_62.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")))
					{
						TASK::TASK_ENTER_VEHICLE(Local_62.f_0, Local_75[0 /*6*/], 20000, 1, 1f, 1, 0);
						iLocal_45 = 2;
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 20)
		{
			if (__LIB_1__::func_197(Local_61[0 /*9*/]))
			{
				if (__LIB_1__::func_183(Local_75[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_75[0 /*6*/], -1, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_61[0 /*9*/], Local_75[0 /*6*/], false))
					{
						if (!__LIB_4__::func_465(Local_61[0 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							TASK::TASK_ENTER_VEHICLE(Local_61[0 /*9*/], Local_75[0 /*6*/], 20000, -1, 1f, 1, 0);
							iLocal_151[0] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 400)
		{
			if (__LIB_1__::func_197(Local_61[1 /*9*/]))
			{
				if (__LIB_1__::func_183(Local_75[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_75[0 /*6*/], 0, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_61[1 /*9*/], Local_75[0 /*6*/], false))
					{
						if (!__LIB_4__::func_465(Local_61[1 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							TASK::TASK_ENTER_VEHICLE(Local_61[1 /*9*/], Local_75[0 /*6*/], 20000, 0, 1f, 1, 0);
							iLocal_151[1] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 600)
		{
			if (__LIB_1__::func_197(Local_61[2 /*9*/]))
			{
				if (__LIB_1__::func_183(Local_75[1 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_75[1 /*6*/], -1, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_61[2 /*9*/], Local_75[1 /*6*/], false))
					{
						if (!__LIB_4__::func_465(Local_61[2 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							TASK::TASK_ENTER_VEHICLE(Local_61[2 /*9*/], Local_75[1 /*6*/], 20000, -1, 1f, 1, 0);
							iLocal_151[2] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 500)
		{
			if (__LIB_1__::func_197(Local_61[3 /*9*/]))
			{
				if (__LIB_1__::func_183(Local_75[1 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_75[1 /*6*/], 1, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_61[3 /*9*/], Local_75[1 /*6*/], false))
					{
						if (!__LIB_4__::func_465(Local_61[3 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							TASK::TASK_ENTER_VEHICLE(Local_61[3 /*9*/], Local_75[1 /*6*/], 20000, 1, 1f, 1, 0);
							iLocal_151[3] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 100)
		{
			if (__LIB_1__::func_197(Local_66.f_0) && !__LIB_4__::func_465(Local_66.f_0, joaat("SCRIPT_TASK_PAUSE")))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_66.f_0, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_66.f_0, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 0)
				{
					PED::FORCE_PED_MOTION_STATE(Local_66.f_0, joaat("MotionState_Walk"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_66.f_0, 1f);
					TASK::TASK_WANDER_STANDARD(Local_66.f_0, 40000f, 0);
				}
				iLocal_46 = 4;
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 350)
		{
			if (__LIB_1__::func_197(Local_70[0 /*9*/]) && !__LIB_4__::func_465(Local_70[0 /*9*/], joaat("SCRIPT_TASK_WANDER_STANDARD")))
			{
				TASK::TASK_WANDER_STANDARD(Local_70[0 /*9*/], 40000f, 0);
				iLocal_152[0] = 4;
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 600)
		{
			if (__LIB_1__::func_197(Local_70[1 /*9*/]) && !__LIB_4__::func_465(Local_70[1 /*9*/], joaat("SCRIPT_TASK_WANDER_STANDARD")))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_70[1 /*9*/], joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_70[1 /*9*/], joaat("SCRIPT_TASK_WANDER_STANDARD")) != 0)
				{
					PED::FORCE_PED_MOTION_STATE(Local_70[1 /*9*/], joaat("MotionState_Walk"), false, 1, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_70[1 /*9*/], 1f);
					TASK::TASK_WANDER_STANDARD(Local_70[1 /*9*/], 40000f, 0);
				}
				iLocal_152[1] = 4;
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_126) > 5000)
		{
			if (iLocal_81 == 0)
			{
				func_1(1);
			}
			iLocal_87 = 1;
		}
	}
}

void func_240()//Position - 0x27C44
{
	struct<6> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	Var0 = { __LIB_9__::func_980() };
	Var1 = { __LIB_0__::func_390() };
	if (__LIB_0__::func_75())
	{
		if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER"))
		{
			__LIB_6__::func_771();
		}
	}
	if (!__LIB_0__::func_405("PAP3_10", 0, 0))
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	switch (iLocal_44)
	{
		case 0:
			if (iLocal_79 == 0)
			{
				__LIB_0__::func_210("PAP3_10", 7500, 1);
				iLocal_79 = 1;
			}
			__LIB_0__::func_498(804);
			iLocal_129 = iLocal_129;
			iLocal_130 = 0;
			iLocal_128 = 0;
			iLocal_138 = 0;
			iLocal_141 = 0;
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				if (HUD::DOES_BLIP_EXIST(Local_61[iVar3 /*9*/].f_8))
				{
				}
				else if (__LIB_0__::func_121(Local_61[iVar3 /*9*/]))
				{
					Local_61[iVar3 /*9*/].f_8 = __LIB_10__::func_711(Local_61[iVar3 /*9*/], 1, 0, 5);
					iLocal_130++;
				}
				iVar3++;
			}
			if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			}
			if (__LIB_1__::func_197(Local_61[2 /*9*/]) && __LIB_0__::func_121(Local_75[1 /*6*/]))
			{
				PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_61[2 /*9*/], Local_75[1 /*6*/], 0f, 0f, 0f, 5f, false);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			if (__LIB_1__::func_197(Local_70[0 /*9*/]))
			{
				TASK::TASK_COMBAT_PED(0, Local_70[0 /*9*/], 67108864, 16);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			if (__LIB_1__::func_197(Local_61[1 /*9*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_61[1 /*9*/], 50, true);
				TASK::TASK_PERFORM_SEQUENCE(Local_61[1 /*9*/], iVar4);
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			iLocal_150 = 0;
			iLocal_85 = 0;
			iLocal_44 = 1;
			break;
		case 1:
			if (__LIB_1__::func_197(Local_61[0 /*9*/]))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			if (__LIB_1__::func_197(Local_61[3 /*9*/]))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			if (!__LIB_1__::func_197(Local_70[0 /*9*/]))
			{
				if (__LIB_1__::func_197(Local_61[1 /*9*/]))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_61[1 /*9*/], PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_COMBAT_PED(Local_61[1 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			if (__LIB_1__::func_197(Local_61[2 /*9*/]))
			{
				if (iLocal_138 == 0)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.6968f, -787.0848f, 56.648468f, 1051.7637f, -787.16095f, 64.14056f, 23f, false, true, 0))
					{
						if (__LIB_0__::func_121(Local_75[1 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_61[2 /*9*/], Local_75[1 /*6*/], false))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_61[2 /*9*/], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(Local_61[2 /*9*/], Local_75[1 /*6*/], 20000, -1, 2f, 1, 0);
								}
							}
							else
							{
								TASK::TASK_COMBAT_PED(Local_61[2 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_138 = 1;
							}
						}
					}
				}
				else if (iLocal_138 == 1)
				{
					if (!__LIB_0__::func_530(Local_61[2 /*9*/], Local_154, 100f, 1))
					{
						iLocal_138 = 2;
					}
				}
			}
			if (bLocal_80 == 1)
			{
				if (!__LIB_0__::func_121(Local_62.f_0))
				{
					func_1(4);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_62.f_0, 1083.3864f, -793.4014f, 55.295f, 1092.1259f, -793.568f, 60.512684f, 11f, false, true, 0))
					{
						if (__LIB_1__::func_197(Local_61[0 /*9*/]))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_61[0 /*9*/], 0, true);
						}
						if (__LIB_1__::func_197(Local_61[1 /*9*/]))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_61[1 /*9*/], 0, true);
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_62.f_0, PLAYER::PLAYER_PED_ID(), true))
					{
						func_1(3);
					}
					if (iLocal_150 == 2)
					{
						func_248();
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_SECUR2_2"))
			{
				__LIB_6__::func_833();
			}
			if (!__LIB_0__::func_75())
			{
				if (iLocal_150 == 1)
				{
					if (__LIB_35__::func_901(&uLocal_419, "pap3bau", "PAP3_SECUR4", "PAP3_SECUR4_3", 8, iVar2, 0))
					{
						iLocal_150 = 2;
					}
				}
				else if (iLocal_150 == 0)
				{
					__LIB_0__::func_203(&uLocal_419, 4, Local_61[0 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
					__LIB_0__::func_203(&uLocal_419, 6, Local_66.f_0, "Paparazzo3BDrugDealer", 0, 1);
					__LIB_0__::func_203(&uLocal_419, 7, Local_61[1 /*9*/], "Paparazzo3BBodyGuard2", 0, 1);
					__LIB_0__::func_203(&uLocal_419, 8, Local_70[0 /*9*/], "Paparazzo3BDealerGoon1", 0, 1);
					if (__LIB_0__::func_121(Local_62.f_0))
					{
						if (__LIB_35__::func_901(&uLocal_419, "pap3bau", "PAP3_SHOCK", "PAP3_SHOCK_5", 8, iVar2, 0))
						{
							iLocal_150 = 1;
						}
					}
					else
					{
						iLocal_150 = 1;
					}
				}
			}
			if (func_241())
			{
				iLocal_44 = 2;
			}
			if (__LIB_1__::func_197(Local_62.f_0) && PED::IS_PED_IN_ANY_VEHICLE(Local_62.f_0, false))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(Local_62.f_0, false)))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PED::GET_VEHICLE_PED_IS_IN(Local_62.f_0, false), 20f);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_62.f_0, 1158.5201f, -759.3739f, 56.322784f, 1116.8687f, -759.6908f, 61.70632f, 13.75f, false, true, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_62.f_0, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_62.f_0, PED::GET_VEHICLE_PED_IS_IN(Local_62.f_0, false), PLAYER::PLAYER_PED_ID(), 8, 50f, 786469, 20f, 20f, true);
					}
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			iLocal_79 = 0;
			if (iLocal_86 == 0)
			{
				func_2(7);
			}
			else
			{
				func_4();
			}
			break;
	}
}

int func_241()//Position - 0x281B7
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_0__::func_121(Local_61[iVar0 /*9*/]))
		{
			if (!__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_61[iVar0 /*9*/], 200f, 1))
			{
				if (HUD::DOES_BLIP_EXIST(Local_61[iVar0 /*9*/].f_8))
				{
					__LIB_0__::func_523(&(Local_61[iVar0 /*9*/].f_8));
					__LIB_0__::func_0(&(Local_61[iVar0 /*9*/]));
					if (iVar0 == 2)
					{
						__LIB_0__::func_106(&(Local_75[1 /*6*/]));
					}
					iLocal_128++;
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_61[iVar0 /*9*/].f_8))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_61[iVar0 /*9*/], false))
				{
					HUD::SET_BLIP_SCALE(Local_61[iVar0 /*9*/].f_8, 1f);
				}
				else
				{
					HUD::SET_BLIP_SCALE(Local_61[iVar0 /*9*/].f_8, 0.7f);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_61[iVar0 /*9*/].f_8))
		{
			__LIB_0__::func_523(&(Local_61[iVar0 /*9*/].f_8));
			iLocal_129++;
			iLocal_128++;
		}
		iVar0++;
	}
	if (iLocal_128 >= iLocal_130)
	{
		return 1;
	}
	return 0;
}

void func_248()//Position - 0x283DC
{
	if (iLocal_141 < 2)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_142 + 10000)
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_62.f_0, 1) < 50f)
				{
					if (__LIB_35__::func_536(&uLocal_419, "pap3bau", "PAP3_SHOCK", 7, 1, 0, 0))
					{
						iLocal_141++;
						iLocal_142 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 4000));
					}
				}
			}
		}
	}
}

void func_258()//Position - 0x28664
{
	switch (iLocal_44)
	{
		case 0:
			if (iLocal_79 == 0)
			{
				iLocal_79 = 1;
			}
			iLocal_121 = MISC::GET_GAME_TIMER() + 15000;
			iLocal_122 = MISC::GET_GAME_TIMER() + 5000;
			iLocal_123 = MISC::GET_GAME_TIMER() + 10000;
			bLocal_89 = false;
			__LIB_0__::func_523(&iLocal_54);
			iLocal_44 = 1;
			break;
		case 1:
			func_285();
			func_265();
			if (bLocal_118)
			{
				return;
			}
			if (iLocal_83 == 0 && iLocal_84 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_121 && iLocal_87 == 0)
				{
					func_235();
					iLocal_44 = 2;
				}
			}
			else
			{
				iLocal_44 = 2;
			}
			if (((MISC::GET_GAME_TIMER() > iLocal_122 && func_264()) || (MISC::GET_GAME_TIMER() > iLocal_123 && (func_264() || iLocal_84))) || func_262())
			{
				if (iLocal_85 == 0)
				{
					__LIB_0__::func_203(&uLocal_419, 3, 0, "BEVERLY", 0, 1);
					__LIB_0__::func_203(&uLocal_419, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (func_264() || iLocal_84 == 1)
					{
						if (__LIB_38__::func_30(&uLocal_419, 50, "pap3bau", "PAP3_ENDCAL1", 9, 1, 0, 0, 0))
						{
							iLocal_85 = 1;
							bLocal_89 = true;
							if (__LIB_1__::func_197(Local_61[0 /*9*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_61[0 /*9*/]);
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_61[0 /*9*/], "PAP3B_BFAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_STANDARD", false);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
							}
						}
					}
					else if (iLocal_83 == 0 && iLocal_84 == 0)
					{
						func_235();
						iLocal_44 = 2;
					}
				}
				else if (iLocal_88 == 0)
				{
					if (func_261())
					{
						iLocal_88 = 1;
					}
					else
					{
						__LIB_0__::func_203(&uLocal_419, 4, Local_61[0 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
						if (__LIB_35__::func_901(&uLocal_419, "pap3bau", "PAP3_SECUR4", "PAP3_SECUR4_1", 8, 1, 0))
						{
							func_259(0);
							iLocal_44 = 2;
						}
					}
				}
				else
				{
					__LIB_6__::func_771();
					__LIB_0__::func_203(&uLocal_419, 5, Local_62.f_0, "PRINCESS", 0, 1);
					if (__LIB_35__::func_536(&uLocal_419, "pap3bau", "PAP3_PANIC", 8, 1, 0, 0))
					{
						func_259(1);
						iLocal_44 = 2;
					}
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_523(&iLocal_54);
			iLocal_79 = 0;
			if (iLocal_83 == 1 || iLocal_84 == 1)
			{
				func_2(6);
			}
			else
			{
				func_235();
				func_2(7);
			}
			break;
	}
}

void func_259(int iParam0)//Position - 0x288B6
{
	struct<6> Var0;
	Var0 = { __LIB_0__::func_390() };
	if (iParam0 == 1)
	{
		if (__LIB_0__::func_75())
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER"))
			{
				__LIB_6__::func_771();
			}
		}
	}
	if (iLocal_84 == 0)
	{
		if (iParam0 == 1)
		{
			if (__LIB_1__::func_197(Local_61[0 /*9*/]))
			{
				if (__LIB_1__::func_197(Local_70[0 /*9*/]))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, false);
					iLocal_151[0] = 9;
					iLocal_152[0] = 1;
					uLocal_125 = MISC::GET_GAME_TIMER() + 3000;
					uLocal_124 = MISC::GET_GAME_TIMER() + 2000;
				}
			}
		}
		else if (__LIB_1__::func_197(Local_61[0 /*9*/]))
		{
			if (__LIB_1__::func_197(Local_70[0 /*9*/]))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_61[0 /*9*/], Local_155, 3f, 20000, 353f, 0.5f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[0 /*9*/], true);
				iLocal_151[0] = 11;
			}
		}
		if (__LIB_1__::func_197(Local_61[1 /*9*/]))
		{
			if (__LIB_1__::func_197(Local_70[1 /*9*/]))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
				iLocal_151[1] = 9;
				iLocal_152[1] = 1;
				uLocal_125 = MISC::GET_GAME_TIMER() + 3000;
				uLocal_124 = MISC::GET_GAME_TIMER() + 2000;
			}
		}
		if (__LIB_1__::func_197(Local_61[2 /*9*/]))
		{
			if (__LIB_1__::func_183(Local_75[1 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_75[1 /*6*/], -1, false))
			{
				TASK::CLEAR_PED_TASKS(Local_61[2 /*9*/]);
				TASK::TASK_ENTER_VEHICLE(Local_61[2 /*9*/], Local_75[1 /*6*/], 20000, -1, 3f, 1, 0);
				iLocal_151[2] = 2;
			}
		}
		if (__LIB_1__::func_197(Local_61[3 /*9*/]))
		{
			if (__LIB_1__::func_197(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_61[3 /*9*/], 1094.2454f, -791.3043f, 57.2632f, PLAYER::PLAYER_PED_ID(), 3f, false, 9f, 15f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				iLocal_151[3] = 10;
			}
		}
		if (__LIB_1__::func_197(Local_62.f_0))
		{
			if (__LIB_0__::func_75())
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER"))
				{
					__LIB_6__::func_833();
				}
			}
			if (__LIB_1__::func_183(Local_75[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_75[0 /*6*/], -1, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_62.f_0, Local_75[0 /*6*/], false))
				{
					TASK::CLEAR_PED_TASKS(Local_62.f_0);
					TASK::TASK_ENTER_VEHICLE(Local_62.f_0, Local_75[0 /*6*/], 20000, -1, 3f, 1, 0);
					iLocal_45 = 2;
				}
			}
			else
			{
				func_260(Local_62.f_0, 0);
				iLocal_45 = 4;
			}
		}
		if (__LIB_1__::func_197(Local_66.f_0))
		{
			if (iParam0 == 1)
			{
				iLocal_46 = 2;
			}
			else
			{
				iLocal_46 = 3;
			}
		}
		__LIB_0__::func_498(804);
		iLocal_84 = 1;
	}
}

void func_260(int iParam0, int iParam1)//Position - 0x28B24
{
	if (__LIB_1__::func_197(iParam0))
	{
		if (iParam1 == 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, false);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iParam0, true);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, false);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, true, false);
			PED::SET_PED_KEEP_TASK(iParam0, true);
		}
	}
}

int func_261()//Position - 0x28BF6
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (__LIB_0__::func_121(Local_61[iVar0 /*9*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[iVar0 /*9*/], true);
			if (PED::CAN_PED_SEE_HATED_PED(Local_61[iVar0 /*9*/], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_262()//Position - 0x28C41
{
	if (__LIB_11__::func_325(&uLocal_209, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
	{
		return 0;
	}
	return 1;
}

int func_264()//Position - 0x28D1D
{
	if (__LIB_11__::func_325(&uLocal_313, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
	{
		return 1;
	}
	return 0;
}

void func_265()//Position - 0x28D3D
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_71.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_71.f_0, false))
		{
			if (PED::IS_PED_INJURED(Local_71.f_0))
			{
				func_1(6);
			}
			else if (__LIB_38__::func_135(Local_71.f_0, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_71.f_0, false);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_71.f_0);
				if (!PED::IS_PED_FLEEING(Local_71.f_0))
				{
					TASK::TASK_SMART_FLEE_PED(Local_71.f_0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
				func_1(5);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_71.f_0, PLAYER::PLAYER_PED_ID(), true))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_71.f_0, false);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_71.f_0);
				if (!PED::IS_PED_FLEEING(Local_71.f_0))
				{
					TASK::TASK_SMART_FLEE_PED(Local_71.f_0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
				func_1(5);
			}
			else if (__LIB_0__::func_121(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_71.f_0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), true))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_71.f_0, false);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_71.f_0);
				if (!PED::IS_PED_FLEEING(Local_71.f_0))
				{
					TASK::TASK_SMART_FLEE_PED(Local_71.f_0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				}
				func_1(5);
			}
		}
		else
		{
			func_1(6);
		}
	}
}

void func_285()//Position - 0x297C6
{
	int iVar0;
	if (bLocal_80 == 0)
	{
		if (func_288(0))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_287(&(Local_61[iVar0 /*9*/]), 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_61[iVar0 /*9*/], true, 0f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_61[iVar0 /*9*/], iLocal_417);
				if (iVar0 == 3)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_61[iVar0 /*9*/], "WORLD_HUMAN_GUARD_STAND", 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_61[iVar0 /*9*/], 13, true);
					PED::SET_PED_COMBAT_MOVEMENT(Local_61[iVar0 /*9*/], 2);
				}
				if (iVar0 == 0 || iVar0 == 3)
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_61[iVar0 /*9*/], joaat("WEAPON_APPISTOL"), -1, false, false);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_61[iVar0 /*9*/], joaat("WEAPON_APPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_61[iVar0 /*9*/]);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_61[iVar0 /*9*/], joaat("WEAPON_APPISTOL"), -1, false, false);
					if (iVar0 == 1)
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_61[iVar0 /*9*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_61[iVar0 /*9*/], 13, true);
						PED::SET_PED_COMBAT_RANGE(Local_61[iVar0 /*9*/], 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[1 /*9*/], true);
					}
					else
					{
						PED::SET_PED_ACCURACY(Local_61[iVar0 /*9*/], 25);
					}
				}
				if (iVar0 == 0 || iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_61[iVar0 /*9*/], 0, false);
				}
				PED::ADD_ARMOUR_TO_PED(Local_61[iVar0 /*9*/], 70);
				PED::SET_PED_CONFIG_FLAG(Local_61[iVar0 /*9*/], 324, true);
				if (iVar0 == 0)
				{
					PED::SET_PED_SEEING_RANGE(Local_61[iVar0 /*9*/], 5f);
				}
				else
				{
					PED::SET_PED_SEEING_RANGE(Local_61[iVar0 /*9*/], 20f);
				}
				if (iVar0 == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 0, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 11, 1, 0, 0);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 11, 0, 2, 0);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 4, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 11, 1, 1, 0);
				}
				else if (iVar0 == 3)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 0, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_61[iVar0 /*9*/], 11, 0, 1, 0);
				}
				iVar0++;
			}
			func_287(&Local_62, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_62.f_0, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_62.f_0, iLocal_417);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_62.f_0, true);
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_62.f_0, "WORLD_HUMAN_SMOKING", 0, false);
			PED::SET_PED_PROP_INDEX(Local_62.f_0, 1, 0, 0, false);
			func_287(&Local_66, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_66.f_0, 125, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_66.f_0, 17, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_66.f_0, iLocal_418);
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_66.f_0);
			PED::SET_PED_COMPONENT_VARIATION(Local_66.f_0, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_66.f_0, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_66.f_0, 4, 0, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_0, true);
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				func_287(&(Local_70[iVar0 /*9*/]), 0);
				ENTITY::SET_ENTITY_HEALTH(Local_70[iVar0 /*9*/], 125, 0);
				PED::SET_PED_ACCURACY(Local_70[iVar0 /*9*/], 1);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 8, 0, 1, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_70[iVar0 /*9*/], joaat("WEAPON_MICROSMG"), -1, false, true);
					if (__LIB_0__::func_121(Local_70[iVar0 /*9*/]))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_70[iVar0 /*9*/], Local_62.f_0, -1, 0, 2);
					}
					PED::SET_PED_COMBAT_MOVEMENT(Local_70[iVar0 /*9*/], 3);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_70[iVar0 /*9*/], 8, 0, 1, 0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_70[iVar0 /*9*/], iLocal_418);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_70[iVar0 /*9*/], true);
				if (iVar0 == 0)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_70[iVar0 /*9*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
				}
				iVar0++;
			}
			func_287(&Local_71, 0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_71.f_0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_71.f_0, true);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_71.f_0, 128, true);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_71.f_0, Local_71.f_1, false, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(Local_71.f_0, joaat("WEAPON_KNIFE"), -1, false, true);
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_71.f_0, "WORLD_HUMAN_SMOKING", 0, false);
			PED::SET_PED_COMPONENT_VARIATION(Local_71.f_0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_71.f_0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_71.f_0, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_71.f_0, 8, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				__LIB_30__::func_555(&(Local_75[iVar0 /*6*/]), 0);
				if (iVar0 == 0)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_75[iVar0 /*6*/], 3);
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_75[iVar0 /*6*/].f_5, true);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_75[iVar0 /*6*/], 0);
				if (iVar0 == 1)
				{
					if (__LIB_0__::func_121(Local_61[2 /*9*/]))
					{
						PED::SET_PED_INTO_VEHICLE(Local_61[2 /*9*/], Local_75[iVar0 /*6*/], -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_61[2 /*9*/], 1, true);
					}
				}
				iVar0++;
			}
			__LIB_30__::func_555(&Local_76, 1);
			VEHICLE::SET_VEHICLE_ALARM(Local_76.f_0, true);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_76.f_5, true);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_76.f_0, 3);
			__LIB_30__::func_555(&Local_77, 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_77.f_5, true);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_77.f_0, 0);
			bLocal_80 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_61[iVar0 /*9*/].f_5);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_75[iVar0 /*6*/].f_5);
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_5);
			iLocal_59 = PED::CREATE_SYNCHRONIZED_SCENE(Local_75[0 /*6*/].f_1, 0f, 0f, Local_75[0 /*6*/].f_4, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_59, true);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_0, iLocal_59, "rcmpaparazzo_3big_1", "_idle_dealer_a", 4f, -4f, 65, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_70[1 /*9*/], iLocal_59, "rcmpaparazzo_3big_1", "_idle_dealer_b", 4f, -4f, 65, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_61[0 /*9*/], iLocal_59, "rcmpaparazzo_3big_1", "_idle_guard_a", 4f, -4f, 65, 0, 1000f, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_61[1 /*9*/], iLocal_59, "rcmpaparazzo_3big_1", "_idle_guard_b", 4f, -4f, 65, 0, 1000f, 0);
		}
	}
}

void func_287(int iParam0, int iParam1)//Position - 0x29EBE
{
	if (STREAMING::HAS_MODEL_LOADED(iParam0->f_5))
	{
		*iParam0 = PED::CREATE_PED(26, iParam0->f_5, iParam0->f_1, iParam0->f_4, true, true);
		if (iParam1 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_5);
		}
	}
}

int func_288(int iParam0)//Position - 0x29EF8
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::REQUEST_MODEL(Local_61[iVar0 /*9*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_70[iVar0 /*9*/].f_5);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(Local_62.f_5);
	STREAMING::REQUEST_MODEL(Local_66.f_5);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_75[iVar0 /*6*/].f_5);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(Local_76.f_5);
	STREAMING::REQUEST_MODEL(Local_77.f_5);
	VEHICLE::REQUEST_VEHICLE_RECORDING(103, "PAP3Security1");
	TASK::REQUEST_WAYPOINT_RECORDING("PAP3_Security1");
	STREAMING::REQUEST_MODEL(Local_78.f_5);
	STREAMING::REQUEST_MODEL(joaat("prop_drug_package_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_cash_pile_02"));
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3big_1");
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_61[iVar0 /*9*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_70[iVar0 /*9*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_cash_pile_02")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_62.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_76.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_77.f_5))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_75[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "PAP3Security1"))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_78.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3big_1"))
		{
			return 0;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_61[iVar0 /*9*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_70[iVar0 /*9*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_cash_pile_02")))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_62.f_5))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_66.f_5))
			{
				iVar1 = 0;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_75[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_76.f_5))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_77.f_5))
			{
				iVar1 = 0;
			}
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "PAP3Security1"))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_78.f_5))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3big_1"))
			{
				iVar1 = 0;
			}
		}
	}
	return 1;
}

void func_289()//Position - 0x2A1E4
{
	struct<6> Var0;
	struct<6> Var1;
	int iVar2;
	switch (iLocal_44)
	{
		case 0:
			if (iLocal_79 == 0)
			{
				__LIB_0__::func_210("PAP3_PRIN", 7500, 1);
				iLocal_79 = 1;
			}
			__LIB_21__::func_368(50);
			iLocal_121 = (MISC::GET_GAME_TIMER() + 80000);
			iLocal_91 = 0;
			iLocal_92 = 0;
			iLocal_93 = 1;
			iLocal_94 = 0;
			iLocal_95 = 0;
			iLocal_96 = 0;
			iLocal_97 = 0;
			iLocal_131 = 0;
			iLocal_132 = 0;
			iLocal_133 = 0;
			iLocal_99 = 0;
			iLocal_100 = 0;
			iLocal_101 = 0;
			iLocal_136 = 0;
			iLocal_137 = 0;
			iLocal_102 = 0;
			iLocal_103 = 0;
			iLocal_105 = 0;
			iLocal_106 = 0;
			iLocal_107 = 0;
			bLocal_108 = false;
			iLocal_109 = 0;
			iLocal_110 = 0;
			iLocal_139 = 0;
			iLocal_140 = 0;
			iLocal_145 = 0;
			iLocal_146 = 0;
			iLocal_149 = 0;
			iLocal_120 = 0;
			__LIB_0__::func_523(&iLocal_54);
			iLocal_54 = __LIB_10__::func_711(Local_62.f_0, 1, 1, 5);
			if (__LIB_1__::func_197(Local_62.f_0))
			{
				iLocal_587 = func_404(PLAYER::PLAYER_PED_ID(), Local_62.f_0, 0f);
			}
			if (__LIB_1__::func_183(Local_75[0 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_75[0 /*6*/], false);
			}
			if (__LIB_1__::func_183(Local_75[1 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_75[1 /*6*/], false);
			}
			if (__LIB_1__::func_183(Local_76.f_0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_76.f_0, false);
			}
			func_328(1, "At Princess Location", 1, 0, 0, 1);
			func_285();
			iLocal_144 = 0;
			__LIB_0__::func_203(&uLocal_419, 5, Local_62.f_0, "PRINCESS", 0, 1);
			__LIB_0__::func_203(&uLocal_419, 6, Local_66.f_0, "Paparazzo3BDrugDealer", 0, 1);
			iLocal_143 = MISC::GET_GAME_TIMER();
			iLocal_44 = 1;
			iLocal_45 = 1;
			break;
		case 1:
			if ((iLocal_95 && !iLocal_101) && !iLocal_98)
			{
				func_326();
			}
			if (__LIB_2__::func_174())
			{
				__LIB_0__::func_733(1);
			}
			if ((__LIB_1__::func_197(Local_71.f_0) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_71.f_0, PLAYER::PLAYER_PED_ID(), true)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_42.f_28[0]))
			{
				__LIB_6__::func_834(Local_42.f_28[0], "GENERIC_CURSE_HIGH", 3);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_60))
			{
				if (__LIB_1__::func_197(Local_61[1 /*9*/]) && __LIB_1__::func_197(Local_70[1 /*9*/]))
				{
					if (iLocal_144 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.259f)
						{
							iLocal_57 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_drug_package_02"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_70[1 /*9*/], 0f, 0f, 10f), true, true, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, Local_70[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_70[1 /*9*/], 28422), 0.135f, 0f, -0.05f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_57, true, false);
							iLocal_144 = 1;
						}
					}
					else if (iLocal_144 == 1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.821f)
						{
							iLocal_58 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cash_pile_02"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_61[1 /*9*/], 0f, 0f, 10f), true, true, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_58, Local_61[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_61[1 /*9*/], 28422), 0.07f, 0f, -0.04f, 0f, 0f, -30f, true, true, false, false, 2, true, 0);
							iLocal_144 = 2;
						}
					}
					else if (iLocal_144 == 2)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.844f)
						{
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_61[1 /*9*/]);
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_70[1 /*9*/]);
							ENTITY::DETACH_ENTITY(iLocal_57, true, true);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_57, false, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_57, Local_61[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_61[1 /*9*/], 60309), 0.1f, 0f, 0.05f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
							iLocal_144 = 3;
						}
					}
					else if (iLocal_144 == 3)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.849f)
						{
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_61[1 /*9*/]);
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_70[1 /*9*/]);
							ENTITY::DETACH_ENTITY(iLocal_58, true, true);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_58, false, false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_58, Local_70[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_70[1 /*9*/], 28422), 0.07f, 0f, 0f, 0f, 0f, 90f, true, true, false, false, 2, true, 0);
							ENTITY::DETACH_ENTITY(iLocal_57, true, true);
							OBJECT::DELETE_OBJECT(&iLocal_57);
							iLocal_144 = 4;
						}
					}
					else if (iLocal_144 == 4)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.861f)
						{
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_61[1 /*9*/]);
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_70[1 /*9*/]);
							ENTITY::DETACH_ENTITY(iLocal_58, true, true);
							OBJECT::DELETE_OBJECT(&iLocal_58);
							iLocal_144 = 5;
						}
					}
					else if (iLocal_144 == 5)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.865f)
						{
							iLocal_144 = 6;
						}
					}
				}
			}
			if (iLocal_109 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_143 + 1000)
				{
					iLocal_109 = 1;
				}
			}
			else if (!__LIB_0__::func_75() && !__LIB_0__::func_405("PAP3_PRIN", 0, 0))
			{
				bLocal_108 = true;
			}
			if (bLocal_108)
			{
				if (iLocal_95 == 0)
				{
					if (__LIB_35__::func_536(&uLocal_419, "pap3bau", "PAP3_DEALER", 8, 0, 0, 0))
					{
						iLocal_60 = PED::CREATE_SYNCHRONIZED_SCENE(Local_75[0 /*6*/].f_1, 0f, 0f, Local_75[0 /*6*/].f_4, 2);
						if (__LIB_1__::func_197(Local_66.f_0))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_0, iLocal_60, "rcmpaparazzo_3big_1", "_action_dealer_a", 2f, -2f, 0, 0, 1000f, 0);
						}
						if (__LIB_1__::func_197(Local_70[1 /*9*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_70[1 /*9*/], iLocal_60, "rcmpaparazzo_3big_1", "_action_dealer_b", 2f, -2f, 0, 0, 1000f, 0);
						}
						if (__LIB_1__::func_197(Local_61[0 /*9*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_61[0 /*9*/], iLocal_60, "rcmpaparazzo_3big_1", "_action_guard_a", 2f, -2f, 0, 0, 1000f, 0);
						}
						if (__LIB_1__::func_197(Local_61[1 /*9*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_61[1 /*9*/], iLocal_60, "rcmpaparazzo_3big_1", "_action_guard_b", 2f, -2f, 0, 0, 1000f, 0);
						}
						iLocal_95 = 1;
					}
				}
				else
				{
					if (!iLocal_120)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_60) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.04f)
						{
							if (__LIB_1__::func_197(Local_62.f_0))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_62.f_0, iLocal_60, "rcmpaparazzo_3big_1", "_action_princess", 1f, -2f, 0, 0, 1f, 0);
								iLocal_120 = 1;
							}
						}
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_60) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.893f)
					{
						iLocal_103 = 1;
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
						func_235();
						func_232();
					}
					if (iLocal_82 && !__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), 1087.2966f, -791.3091f, 57.2626f, 60f, 1))
					{
						iLocal_103 = 1;
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
						func_235();
						func_232();
					}
					Var0 = { __LIB_9__::func_980() };
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER_23"))
					{
						__LIB_6__::func_833();
					}
					if (!iLocal_110)
					{
						if ((MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER_20") && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_60)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) < 0.758f)
						{
							if (__LIB_1__::func_197(Local_62.f_0))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_62.f_0, iLocal_60, "rcmpaparazzo_3big_1", "_action_princess", 1f, -2f, 0, 0, 1000f, 0);
							}
							if (__LIB_1__::func_197(Local_66.f_0))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_66.f_0, iLocal_60, "rcmpaparazzo_3big_1", "_action_dealer_a", 1f, -2f, 0, 0, 1000f, 0);
							}
							if (__LIB_1__::func_197(Local_70[1 /*9*/]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_70[1 /*9*/], iLocal_60, "rcmpaparazzo_3big_1", "_action_dealer_b", 1f, -2f, 0, 0, 1000f, 0);
							}
							if (__LIB_1__::func_197(Local_61[0 /*9*/]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_61[0 /*9*/], iLocal_60, "rcmpaparazzo_3big_1", "_action_guard_a", 1f, -2f, 0, 0, 1000f, 0);
							}
							if (__LIB_1__::func_197(Local_61[1 /*9*/]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_61[1 /*9*/], iLocal_60, "rcmpaparazzo_3big_1", "_action_guard_b", 1f, -2f, 0, 0, 1000f, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_60, 0.758f);
							iLocal_110 = 1;
						}
					}
				}
			}
			if (iLocal_103 == 0)
			{
				if (iLocal_81)
				{
					if (!iLocal_82)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_127 + 15000)
						{
							if (!iLocal_117)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 6f, 1);
								__LIB_0__::func_151("PAP3_HELP8", -1);
								iLocal_117 = 1;
							}
						}
					}
				}
				if (iLocal_94)
				{
					if (__LIB_1__::func_197(Local_61[0 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_61[0 /*9*/], 150f);
					}
					if (__LIB_1__::func_197(Local_61[1 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_61[1 /*9*/], 150f);
					}
					if (__LIB_1__::func_197(Local_61[2 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_61[2 /*9*/], 150f);
					}
					if (__LIB_1__::func_197(Local_61[3 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_61[3 /*9*/], 150f);
					}
				}
				if (__LIB_0__::func_121(Local_62.f_0) && !ENTITY::IS_ENTITY_OCCLUDED(Local_62.f_0))
				{
					func_319();
				}
				if (iLocal_97 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.694f, -779.025f, 54.92999f, 1104.67f, -779.1714f, 60.324333f, 5f, false, true, 0))
					{
						if (__LIB_1__::func_197(Local_61[3 /*9*/]))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_61[3 /*9*/], "PAP3B_BCAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_STANDARD", false);
							iLocal_97 = 1;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.694f, -779.025f, 54.92999f, 1104.67f, -779.1714f, 60.324333f, 5f, false, true, 0))
				{
					iLocal_106 = 0;
					iLocal_139++;
					if (iLocal_140 == 0)
					{
						if (iLocal_139 >= 50)
						{
							if (__LIB_1__::func_197(Local_61[3 /*9*/]))
							{
								WEAPON::GIVE_WEAPON_TO_PED(Local_61[3 /*9*/], joaat("WEAPON_COMBATPISTOL"), -1, true, true);
								WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_61[3 /*9*/], joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID(), 8000, false);
								iLocal_140 = 1;
							}
						}
					}
					else if (iLocal_140 == 1)
					{
						if (iLocal_139 >= 150)
						{
							if (__LIB_1__::func_197(Local_61[3 /*9*/]))
							{
								TASK::TASK_COMBAT_PED(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							if (iLocal_94 == 0)
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
								iLocal_94 = 1;
							}
							iLocal_140 = 2;
						}
					}
				}
				else if (!iLocal_106 && !iLocal_94)
				{
					if (__LIB_1__::func_197(Local_61[3 /*9*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[3 /*9*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1)
						{
							TASK::TASK_ACHIEVE_HEADING(Local_61[3 /*9*/], 0f, 0);
							iLocal_140 = 0;
							iLocal_106 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.719f, -786.14667f, 57.152645f, 1095.7903f, -786.2317f, 60.53243f, 9.75f, false, true, 0) && (PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 1f || PED::IS_PED_FACING_PED(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID(), 90f)))
				{
					if (iLocal_94 == 0)
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
						iLocal_94 = 1;
					}
					if (__LIB_1__::func_197(Local_61[3 /*9*/]))
					{
						if (!PED::IS_PED_FACING_PED(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID(), 30f))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0);
							Local_156 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
							iLocal_148 = MISC::GET_GAME_TIMER();
							iLocal_149 = 1;
						}
					}
				}
				if ((iLocal_149 == 1 && MISC::GET_GAME_TIMER() > iLocal_148 + 1000) && __LIB_1__::func_197(Local_61[3 /*9*/]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_61[3 /*9*/], Local_156, 1f, -1, 0.25f, 0, 40000f);
					iLocal_149 = 2;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1078.8446f, -796.39374f, 57.012592f, 1091.7352f, -796.5964f, 60.38212f, 6f, false, true, 0))
				{
					if (__LIB_1__::func_197(Local_61[0 /*9*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
					iLocal_94 = 1;
				}
				if (iLocal_94 == 0)
				{
					if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1114.6968f, -787.0848f, 56.648468f, 1051.7637f, -787.16095f, 64.14056f, 23f))
					{
						if (__LIB_1__::func_197(Local_61[0 /*9*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
						iLocal_94 = 1;
					}
					if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1071.3809f, -793.3854f, 57.051506f, 1101.5427f, -793.3998f, 61.012684f, 11.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1095.9052f, -786.5956f, 57.103203f, 1114.5902f, -786.7163f, 60.15023f, 15.25f, false, true, 0)) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1071.3809f, -793.3854f, 57.051506f, 1101.5427f, -793.3998f, 61.012684f, 11.75f, false, true, 0))) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1095.9052f, -786.5956f, 57.103203f, 1114.5902f, -786.7163f, 60.15023f, 15.25f, false, true, 0)))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
						iLocal_94 = 1;
					}
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.4579f, -794.51556f, 55.685654f, 1117.8483f, -794.2987f, 77.44183f, 33.75f, false, true, 0))
						{
							if (__LIB_1__::func_197(Local_61[0 /*9*/]))
							{
								if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
							iLocal_94 = 1;
						}
					}
				}
				if (__LIB_1__::func_197(Local_61[0 /*9*/]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_61[0 /*9*/], 1) < 12f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 20f)
					{
						if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
						iLocal_94 = 1;
					}
				}
				if (iLocal_98 == 0)
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.7908f, -793.2307f, 57.141796f, 1071.5479f, -793.1798f, 60.55063f, 11.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1064.0953f, -784.56946f, 56.837673f, 1061.7924f, -789.8588f, 60.01268f, 11.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1058.4896f, -785.6928f, 53.262684f, 1057.0497f, -791.67395f, 60.012684f, 9.5f, false, true, 0))
					{
						if (PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 1f)
						{
							iLocal_132 += 5;
						}
						if (iLocal_101 == 1)
						{
							iLocal_132 += 3;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.5066f, -792.27185f, 60.622086f, 1070.4294f, -792.2669f, 57.012592f, 9.5f, false, true, 0))
						{
							iLocal_132 += 2;
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iLocal_132 += 50;
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_132 += 5;
						}
						iLocal_132 += 3;
						if (iLocal_132 > 1000)
						{
							if (iLocal_98 == 0)
							{
								if (__LIB_0__::func_121(Local_61[0 /*9*/]))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									if (!PED::IS_PED_FACING_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
									}
									iLocal_134 = MISC::GET_GAME_TIMER();
								}
								iLocal_98 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1067.6748f, -788.5863f, 53.271336f, 1067.7982f, -798.8701f, 60.040825f, 8.25f, false, true, 0))
					{
						if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
						{
							iLocal_131++;
							if (iLocal_131 > 70)
							{
								if (iLocal_98 == 0)
								{
									if (__LIB_0__::func_121(Local_61[0 /*9*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										if (!PED::IS_PED_FACING_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
										}
										iLocal_134 = MISC::GET_GAME_TIMER();
									}
									iLocal_98 = 1;
								}
							}
						}
					}
					if (__LIB_0__::func_121(Local_76.f_0) && VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_76.f_0))
					{
						if (iLocal_98 == 0)
						{
							if (__LIB_0__::func_121(Local_61[0 /*9*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (!PED::IS_PED_FACING_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_134 = MISC::GET_GAME_TIMER();
							}
							iLocal_98 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1084.465f, -800.13367f, 57.396507f, 1081.1449f, -800.1677f, 59.990376f, 1.5f, false, true, 0) && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_98 == 0)
						{
							if (__LIB_0__::func_121(Local_61[0 /*9*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (!PED::IS_PED_FACING_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_134 = MISC::GET_GAME_TIMER();
							}
							iLocal_98 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1087.9373f, -793.1239f, 54.772804f, 1100.2555f, -793.12726f, 61.012684f, 12.25f, false, true, 0) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1087.9373f, -793.1239f, 54.772804f, 1100.2555f, -793.12726f, 61.012684f, 12.25f, false, true, 0)))
				{
					if (__LIB_1__::func_197(Local_61[1 /*9*/]))
					{
						if (!PED::IS_PED_FACING_PED(Local_61[1 /*9*/], PLAYER::PLAYER_PED_ID(), 45f))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[1 /*9*/], false);
							TASK::TASK_LOOK_AT_ENTITY(Local_61[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
						}
					}
				}
				if (iLocal_98 == 1)
				{
					if (__LIB_1__::func_197(Local_61[0 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_61[0 /*9*/], 100f);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_134 + 3500)
					{
						if (__LIB_1__::func_197(Local_61[0 /*9*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (iLocal_94 == 0)
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
							iLocal_94 = 1;
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_134 + 1200)
					{
						if (__LIB_1__::func_197(Local_61[0 /*9*/]))
						{
							if (PED::IS_PED_FACING_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_AIM_GUN_AT_ENTITY")) != 0)
								{
									if (__LIB_1__::func_197(Local_61[1 /*9*/]))
									{
										TASK::CLEAR_PED_TASKS(Local_61[1 /*9*/]);
										TASK::TASK_LOOK_AT_ENTITY(Local_61[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									}
									WEAPON::GIVE_WEAPON_TO_PED(Local_61[0 /*9*/], joaat("WEAPON_COMBATPISTOL"), -1, true, true);
									WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_61[0 /*9*/], joaat("WEAPON_COMBATPISTOL"), joaat("COMPONENT_AT_PI_FLSH"));
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 5000, false);
									AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_61[0 /*9*/], "PAP3B_BDAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_FORCE", false);
								}
							}
						}
					}
				}
			}
			else if (!iLocal_82)
			{
				if (iLocal_81)
				{
					if (!iLocal_117)
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 6f, 1);
						__LIB_0__::func_151("PAP3_HELP8", -1);
						iLocal_117 = 1;
					}
				}
			}
			iVar2 = 0;
			while (iVar2 <= 1)
			{
				if (__LIB_1__::func_197(Local_70[iVar2 /*9*/]))
				{
					if (PED::IS_PED_IN_COMBAT(Local_70[iVar2 /*9*/], 0))
					{
						if (iLocal_94 == 0)
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
							iLocal_94 = 1;
						}
						if (__LIB_1__::func_197(Local_61[0 /*9*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], 0))
							{
								TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
				else
				{
					if (iLocal_94 == 0)
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
						iLocal_94 = 1;
					}
					if (__LIB_1__::func_197(Local_61[0 /*9*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_61[0 /*9*/], 0))
						{
							TASK::TASK_COMBAT_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (__LIB_1__::func_197(Local_61[iVar2 /*9*/]))
				{
					if (iLocal_94 == 0)
					{
						PED::SET_PED_RESET_FLAG(Local_61[iVar2 /*9*/], 112, true);
					}
					if (PED::IS_PED_IN_COMBAT(Local_61[iVar2 /*9*/], 0))
					{
						if (__LIB_1__::func_197(Local_62.f_0))
						{
							if (__LIB_0__::func_121(Local_75[0 /*6*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_62.f_0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_62.f_0, joaat("SCRIPT_TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING")) != 0)
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_62.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_62.f_0, Local_75[0 /*6*/], "PAP3_Security1", 262144, 0, 8, -1, -1f, false, 2f);
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_62.f_0, "amb@world_human_smoking@female@idle_a", "idle_a", 3))
									{
										TASK::STOP_ANIM_TASK(Local_62.f_0, "amb@world_human_smoking@female@idle_a", "idle_a", -8f);
									}
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_62.f_0, "amb@world_human_smoking@female@idle_a", "idle_b", 3))
									{
										TASK::STOP_ANIM_TASK(Local_62.f_0, "amb@world_human_smoking@female@idle_a", "idle_b", -8f);
									}
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_62.f_0, "amb@world_human_smoking@female@idle_a", "idle_c", 3))
									{
										TASK::STOP_ANIM_TASK(Local_62.f_0, "amb@world_human_smoking@female@idle_a", "idle_c", -8f);
									}
									if (__LIB_1__::func_197(Local_61[0 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_61[0 /*9*/], 150f);
									}
									if (__LIB_1__::func_197(Local_61[1 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_61[1 /*9*/], 150f);
									}
									if (__LIB_1__::func_197(Local_61[2 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_61[2 /*9*/], 150f);
									}
									if (__LIB_1__::func_197(Local_61[3 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_61[3 /*9*/], 150f);
									}
									__LIB_0__::func_123(&iLocal_58);
									__LIB_0__::func_523(&iLocal_54);
									iLocal_85 = 0;
									iLocal_79 = 0;
									if (__LIB_1__::func_197(Local_61[2 /*9*/]))
									{
										TASK::TASK_COMBAT_PED(Local_61[2 /*9*/], PLAYER::PLAYER_PED_ID(), 67108864, 16);
									}
									if (iLocal_82 == 1)
									{
										iLocal_43 = 6;
										iLocal_44 = 0;
									}
									else
									{
										if (__LIB_1__::func_197(Local_61[1 /*9*/]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[1 /*9*/], false);
										}
										func_1(2);
									}
								}
							}
						}
					}
				}
				else if (iLocal_94 == 0)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
					iLocal_94 = 1;
				}
				iVar2++;
			}
			func_317();
			if (iLocal_81 == 1)
			{
				if (iLocal_82 == 0)
				{
					if (__LIB_21__::func_414(50))
					{
						iLocal_127 = MISC::GET_GAME_TIMER();
						__LIB_6__::func_849(0);
						__LIB_14__::func_366(0);
						__LIB_14__::func_367(0);
						iLocal_82 = 1;
					}
					else if (iLocal_99 == 1)
					{
						if (iLocal_107 == 0)
						{
							if (__LIB_14__::func_722())
							{
								__LIB_0__::func_151("PAP3_HELP7", -1);
								iLocal_127 = MISC::GET_GAME_TIMER();
								iLocal_107 = 1;
							}
						}
					}
				}
				else
				{
					if (iLocal_103 == 0)
					{
						if (iLocal_101 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_127 + 6000)
							{
								if (__LIB_37__::func_818(50, "PAP3A_TXT5" /* GXT: Sweeeeet! Get the fuck out of there! */, 1, 0, 0, 0, 0, 1, 0, 1))
								{
									iLocal_101 = 1;
								}
							}
						}
						else
						{
							if (iLocal_105 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_127 + 4800)
								{
									iLocal_105 = 1;
								}
							}
							if (!__LIB_0__::func_508(Local_62.f_0, PLAYER::PLAYER_PED_ID(), 60f, 1))
							{
								Var1 = { __LIB_0__::func_390() };
								if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER"))
								{
									__LIB_6__::func_833();
								}
							}
						}
					}
					if (iLocal_103 == 0)
					{
						if (iLocal_101 == 1 && MISC::GET_GAME_TIMER() > iLocal_127 + 7500)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1071.5618f, -787.90027f, 56.7723f, 1071.6497f, -793.43567f, 59.302433f, 3.25f, false, true, 0) && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
							{
								if (__LIB_0__::func_121(Local_76.f_0))
								{
									if (iLocal_96 == 0)
									{
										VEHICLE::START_VEHICLE_ALARM(Local_76.f_0);
										if (iLocal_98 == 0)
										{
											if (__LIB_0__::func_121(Local_61[0 /*9*/]))
											{
												TASK::TASK_LOOK_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
												if (!PED::IS_PED_FACING_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
												}
												iLocal_134 = MISC::GET_GAME_TIMER();
											}
											iLocal_98 = 1;
										}
										iLocal_96 = 1;
									}
								}
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1095.3026f, -789.9751f, 62.402073f, 1078.7759f, -789.9934f, 64.40999f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1078.3992f, -785.05255f, 60.169865f, 1071.2682f, -785.08594f, 62.198814f, 4.25f, false, true, 0))
							{
								iLocal_133++;
								if (iLocal_133 > 50)
								{
									if (iLocal_98 == 0)
									{
										if (__LIB_0__::func_121(Local_61[0 /*9*/]))
										{
											TASK::TASK_LOOK_AT_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
											if (!PED::IS_PED_FACING_PED(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_61[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
											}
											AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_61[0 /*9*/], "PAP3B_BDAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_STANDARD", false);
											iLocal_134 = MISC::GET_GAME_TIMER();
										}
										iLocal_98 = 1;
									}
								}
							}
						}
					}
					if (__LIB_1__::func_197(Local_61[0 /*9*/]) && PED::IS_PED_IN_ANY_VEHICLE(Local_61[0 /*9*/], false))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_61[0 /*9*/], 1158.5201f, -759.3739f, 56.322784f, 1116.8687f, -759.6908f, 61.70632f, 13.75f, false, true, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_61[0 /*9*/], joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_61[0 /*9*/], PED::GET_VEHICLE_PED_IS_IN(Local_61[0 /*9*/], false), PLAYER::PLAYER_PED_ID(), 8, 50f, 786469, 20f, 20f, true);
								iLocal_45 = 5;
								iLocal_43 = 7;
								iLocal_44 = 0;
							}
						}
					}
					if (__LIB_0__::func_121(Local_62.f_0) && !__LIB_0__::func_508(PLAYER::PLAYER_PED_ID(), Local_62.f_0, 209f, 1))
					{
						iLocal_43 = 7;
						iLocal_44 = 0;
					}
				}
			}
			else
			{
				if (iLocal_99 == 1)
				{
					if (__LIB_21__::func_414(50))
					{
						if (iLocal_102 == 0)
						{
							iLocal_127 = MISC::GET_GAME_TIMER();
							iLocal_102 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_127 + 4000)
						{
							if (iLocal_100 == 0)
							{
								if (iLocal_136 == 0)
								{
									if (__LIB_37__::func_818(50, "PAP3A_TXT1" /* GXT: WTF is that? Get a decent pic. */, 1, 0, 0, 0, 0, 1, 0, 1))
									{
										__LIB_21__::func_368(50);
										iLocal_99 = 0;
										iLocal_136 = 1;
									}
								}
								else if (iLocal_136 == 1)
								{
									if (__LIB_37__::func_818(50, "PAP3A_TXT2" /* GXT: Come on man. Get another one. */, 1, 0, 0, 0, 0, 1, 0, 1))
									{
										__LIB_21__::func_368(50);
										iLocal_99 = 0;
										iLocal_136 = 2;
									}
								}
								else if (iLocal_136 == 2)
								{
									if (__LIB_37__::func_818(50, "PAP3A_TXT3" /* GXT: What's that meant to be? */, 1, 0, 0, 0, 0, 1, 0, 1))
									{
										__LIB_21__::func_368(50);
										iLocal_99 = 0;
										iLocal_136 = 3;
									}
								}
								else if (iLocal_136 == 3)
								{
									if (__LIB_37__::func_818(50, "PAP3A_TXT4" /* GXT: You're not even trying now. */, 1, 0, 0, 0, 0, 1, 0, 1))
									{
										__LIB_21__::func_368(50);
										iLocal_99 = 0;
										iLocal_136 = 4;
									}
								}
							}
							else
							{
								if (iLocal_137 == 0)
								{
									if (__LIB_37__::func_818(50, "PAP3A_TXT8" /* GXT: Can you get any closer man? */, 1, 0, 0, 0, 0, 1, 0, 1))
									{
										__LIB_21__::func_368(50);
										iLocal_99 = 0;
										iLocal_137 = 1;
									}
								}
								else if (iLocal_137 == 1)
								{
									if (__LIB_37__::func_818(50, "PAP3A_TXT7" /* GXT: I can hardly see her! Get closer. */, 1, 0, 0, 0, 0, 1, 0, 1))
									{
										__LIB_21__::func_368(50);
										iLocal_99 = 0;
										iLocal_137 = 2;
									}
								}
								iLocal_100 = 0;
							}
						}
					}
				}
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
				{
					if (__LIB_11__::func_741())
					{
						__LIB_21__::func_368(50);
						iLocal_99 = 1;
						iLocal_102 = 0;
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_62.f_0))
						{
							if (func_291())
							{
								if (func_290())
								{
									__LIB_0__::func_498(805);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 0f, 0);
								}
								__LIB_14__::func_366(1);
								__LIB_14__::func_367(1);
								__LIB_0__::func_523(&iLocal_54);
								iLocal_127 = MISC::GET_GAME_TIMER();
								iLocal_81 = 1;
							}
							else
							{
								__LIB_14__::func_366(1);
								__LIB_14__::func_367(1);
								__LIB_21__::func_368(50);
								iLocal_127 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							__LIB_14__::func_366(1);
							__LIB_14__::func_367(1);
							__LIB_21__::func_368(50);
							iLocal_127 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (bLocal_80 == 1)
			{
				if (!__LIB_0__::func_121(Local_62.f_0))
				{
					func_1(4);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_62.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
					func_1(3);
				}
			}
			break;
		case 2:
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_523(&iLocal_54);
			iLocal_85 = 0;
			iLocal_79 = 0;
			break;
	}
}

int func_290()//Position - 0x2BD5C
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_60))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) >= 0.803f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_60) < 0.871f)
		{
			return 1;
		}
	}
	return 0;
}

int func_291()//Position - 0x2BD95
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1060.736f, -776.3729f, 56.762596f, 1087.9825f, -792.0965f, 59.31259f, 8.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.626f, -768.4251f, 56.185852f, 1104.9714f, -768.8157f, 60.036358f, 28.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1057.1528f, -785.15784f, 59.006058f, 1057.1528f, -782.09033f, 60.70669f, 1.95f, false, true, 0))
	{
		return 0;
	}
	if (__LIB_1__::func_197(Local_62.f_0))
	{
		if (!func_292(Local_62.f_0))
		{
			return 0;
		}
		if (((__LIB_1__::func_197(Local_66.f_0) && ENTITY::IS_ENTITY_ON_SCREEN(Local_62.f_0)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_66.f_0)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_62.f_0, true), 1f))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1095.334f, -783.02356f, 61.678375f, 1078.8336f, -783.1444f, 64.36657f, 15.75f, false, true, 0))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_62.f_0, 126) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_0, 17))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_62.f_0, 126) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_66.f_0, 17))
			{
				if (!__LIB_0__::func_508(Local_62.f_0, PLAYER::PLAYER_PED_ID(), 50f, 1))
				{
					iLocal_100 = 1;
					return 0;
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

int func_292(int iParam0)//Position - 0x2BF2F
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	if (__LIB_1__::func_197(iParam0))
	{
		iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 23553);
		if (iVar0 != -1)
		{
			Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar1, &fVar2);
			if (((fVar1 > 0.2f && fVar1 < 0.8f) && fVar2 > 0.2f) && fVar2 < 0.8f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_317()//Position - 0x2D1E5
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (__LIB_11__::func_325(&uLocal_365, Var0) && Var0.f_2 < 61f)
	{
		if (iLocal_93)
		{
			if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), true, 0);
			}
			iLocal_93 = 0;
		}
	}
	else if (iLocal_93 == 0)
	{
		iLocal_93 = 1;
	}
}

void func_319()//Position - 0x2D270
{
	if (iLocal_111 == 0)
	{
		switch (iLocal_112)
		{
			case 0:
				iLocal_114 = 0;
				iLocal_115 = 0;
				if (!__LIB_0__::func_77(0))
				{
					if (!__LIB_0__::func_1("PAP3_HELP1"))
					{
						if (iLocal_113 == 0)
						{
							__LIB_0__::func_151("PAP3_HELP1", -1);
							iLocal_113 = 1;
						}
					}
				}
				else
				{
					iLocal_113 = 0;
					iLocal_112++;
				}
				break;
			case 1:
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					if (!__LIB_0__::func_1("PAP3_HELP2"))
					{
						if (iLocal_114 == 0)
						{
							__LIB_0__::func_151("PAP3_HELP2", -1);
							iLocal_114 = 1;
						}
					}
				}
				else
				{
					if (__LIB_0__::func_1("PAP3_HELP2"))
					{
						HUD::CLEAR_HELP(true);
					}
					if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
					{
						iLocal_112++;
					}
				}
				if (!__LIB_0__::func_77(0))
				{
					iLocal_112 = 0;
				}
				break;
			case 2:
				if (iLocal_81 == 1)
				{
					iLocal_112++;
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
				{
					iLocal_114 = 0;
					iLocal_115 = 0;
					iLocal_112 = 1;
				}
				else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
				{
					if (iLocal_115 == 0)
					{
						iLocal_115 = 1;
					}
				}
				else if (!__LIB_0__::func_77(0))
				{
					iLocal_112 = 0;
				}
				break;
			case 3:
				break;
		}
	}
	else
	{
		if (iLocal_81 == 0)
		{
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) == 0)
			{
				if (!__LIB_0__::func_1("PAP3_HELP6"))
				{
					if (iLocal_116 == 0)
					{
						__LIB_0__::func_151("PAP3_HELP6", -1);
						iLocal_116 = 1;
					}
				}
			}
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0)
		{
			if (__LIB_0__::func_1("PAP3_HELP6"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
	}
}

void func_326()//Position - 0x2D65C
{
	struct<6> Var0;
	struct<6> Var1;
	Var0 = { __LIB_0__::func_390() };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
		{
			if (iLocal_145 == 0)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_62.f_0, 1) > 40f)
				{
					iLocal_53 = 1;
					iLocal_145 = 1;
					iLocal_146 = 1;
				}
			}
			else if (iLocal_145 == 1)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_62.f_0, 1) <= 40f)
				{
					iLocal_53 = 0;
					iLocal_145 = 0;
					iLocal_146 = 1;
				}
			}
		}
	}
	if (iLocal_146 == 1)
	{
		Var1 = { __LIB_9__::func_980() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_1"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_2", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_2"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_3", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_3"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_4", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_4"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_5", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_5"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_6", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_6"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_7", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_7"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_8", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_8"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_9", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_9"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_10", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_10"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_11", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_11"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_12", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_12"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_13", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_13"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_14", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_14"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_15", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_15"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_16", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_16"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_17", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_17"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_18", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_18"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_19", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_19"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_20", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_20"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_21", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_21"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_22", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_22"))
			{
				StringCopy(&Local_49, "PAP3_DEALER_23", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var1, "PAP3_DEALER_23"))
			{
				iLocal_146 = 4;
			}
			__LIB_6__::func_833();
			iLocal_146 = 2;
		}
	}
	else if (iLocal_146 == 2)
	{
		if (!__LIB_0__::func_75())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_49))
			{
				if (__LIB_36__::func_42(&uLocal_419, "pap3bau", "PAP3_DEALER", &Local_49, 8, iLocal_53, 0))
				{
					iLocal_146 = 3;
				}
			}
			else
			{
				iLocal_146 = 3;
			}
		}
	}
}

void func_328(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2D9FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_100478)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_100478)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		__LIB_0__::func_177(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_6__::func_774(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_6__::func_794(iVar1);
			cVar3 = { Global_91229[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_113386.f_9085.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_100478, iParam0);
		}
		else
		{
			iVar4 = __LIB_6__::func_864(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_113386.f_18574[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {__LIB_0__::func_45(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_100478, iParam0);
			}
			else
			{
				iVar6 = __LIB_0__::func_125(&(Global_100441.f_3));
				if (iVar6 > -1)
				{
					Global_113386.f_24986.f_4[iVar6] = 0;
				}
			}
		}
		Global_94619 = iParam2;
		Global_100478 = iParam0;
		func_329(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_329(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2DB73
{
	func_330(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_330(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2DB8F
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_18__::func_173();
	uParam0->f_1 = __LIB_18__::func_240();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_361(&(uParam0->f_2884), 0);
		__LIB_18__::func_218(PLAYER::PLAYER_PED_ID());
		__LIB_24__::func_949(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
		{
			uParam0->f_2 = joaat("WEAPON_UNARMED");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_113386.f_2363.f_539.f_294[iVar1];
		if (iVar1 == __LIB_18__::func_173())
		{
			__LIB_24__::func_948(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_100166[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_100166[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_100166[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_100166[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_100166[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_100166[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_100166[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_100166[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_100166[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_100166[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_113386.f_2363.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_113386.f_20564.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_60328[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_113386.f_2363.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_113386.f_2363.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_113386.f_2363[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_113386.f_2363[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		__LIB_36__::func_86(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_327(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_361(var uParam0, int iParam1)//Position - 0x315AA
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (BitTest(Global_78567, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (BitTest(Global_78567, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (BitTest(Global_78567, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (BitTest(Global_78567, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_365(&iVar0))
		{
			if (__LIB_0__::func_332(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			iVar3 = __LIB_18__::func_173();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (__LIB_0__::func_331(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_365(var uParam0)//Position - 0x32304
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_300())
		{
			*uParam0 = func_370(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, 0, 1, -1);
			if (func_369(*uParam0) && !func_366(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_366(int iParam0)//Position - 0x3235F
{
	return __LIB_30__::func_556(iParam0, 0, 1);
}

int func_369(int iParam0)//Position - 0x3274B
{
	return __LIB_30__::func_556(iParam0, 5, 1);
}

int func_370(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x3275B
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam1 == 6 || iParam1 == __LIB_0__::func_299(iVar0))
		{
			if (!bParam3 || func_384(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, __LIB_31__::func_882(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_384(int iParam0)//Position - 0x340BB
{
	return __LIB_30__::func_556(iParam0, 0, 0);
}

int func_404(int iParam0, int iParam1, float fParam2)//Position - 0x34B20
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*13*/].f_1 == iParam0 && Local_37[iVar0 /*13*/].f_2 == iParam1)
		{
			Local_37[iVar0 /*13*/].f_3 = fParam2;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = func_405();
	if (iVar0 == -1)
	{
		return -1;
	}
	Local_37[iVar0 /*13*/] = 0;
	Local_37[iVar0 /*13*/].f_1 = iParam0;
	Local_37[iVar0 /*13*/].f_2 = iParam1;
	Local_37[iVar0 /*13*/].f_4 = 0;
	Local_37[iVar0 /*13*/].f_3 = fParam2;
	Local_37[iVar0 /*13*/].f_5 = 0;
	Local_37[iVar0 /*13*/].f_12 = iVar0;
	return iVar0;
}

int func_405()//Position - 0x34BBB
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_37.f_0)
	{
		if (Local_37[iVar0 /*13*/] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_408()//Position - 0x34C34
{
	struct<6> Var0;
	int iVar1;
	if (bLocal_80)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (__LIB_1__::func_197(Local_61[iVar1 /*9*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_61[iVar1 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[iVar1 /*9*/], false);
					func_1(2);
					return;
				}
				else if (__LIB_0__::func_508(Local_61[iVar1 /*9*/], PLAYER::PLAYER_PED_ID(), 5f, 1))
				{
					TASK::TASK_COMBAT_PED(Local_61[iVar1 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			else
			{
				func_1(2);
				return;
			}
			iVar1++;
		}
	}
	if (__LIB_1__::func_197(Local_71.f_0))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(Local_71.f_0, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_71.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
	switch (iLocal_44)
	{
		case 0:
			if (!func_409())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_54))
				{
					HUD::SET_BLIP_ROUTE(iLocal_54, false);
				}
				else
				{
					iLocal_54 = __LIB_10__::func_711(Local_71.f_0, 1, 1, 5);
					__LIB_0__::func_210("PAP3_CON", 7500, 1);
				}
			}
			if (__LIB_1__::func_183(Local_75[0 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_75[0 /*6*/], false);
			}
			if (__LIB_1__::func_183(Local_75[1 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_75[1 /*6*/], false);
			}
			if (__LIB_1__::func_183(Local_76.f_0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_76.f_0, false);
			}
			__LIB_0__::func_203(&uLocal_419, 8, Local_71.f_0, "Paparazzo3BDealerGoon1", 0, 1);
			iLocal_44 = 1;
			break;
		case 1:
			func_285();
			func_265();
			if (bLocal_118)
			{
				return;
			}
			func_317();
			if (bLocal_80 == 1)
			{
				if (func_409())
				{
					__LIB_0__::func_523(&iLocal_54);
					iLocal_44 = 2;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_154, 5f, 5f, 2f, false, true, 0) && __LIB_1__::func_197(Local_71.f_0))
				{
					if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_0__::func_203(&uLocal_419, 8, Local_71.f_0, "Paparazzo3BDealerGoon1", 0, 1);
						__LIB_0__::func_203(&uLocal_419, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (__LIB_35__::func_536(&uLocal_419, "pap3bau", "PAP3_CONTACT", 8, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 1);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_71.f_0, PLAYER::PLAYER_PED_ID(), -1);
							__LIB_0__::func_523(&iLocal_54);
							iLocal_44 = 2;
						}
					}
				}
				if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_154, 15f, 15f, 2f, false, true, 0) && __LIB_1__::func_197(Local_71.f_0)) && TASK::GET_SCRIPT_TASK_STATUS(Local_71.f_0, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 1)
				{
					TASK::CLEAR_PED_TASKS(Local_71.f_0);
					TASK::TASK_LOOK_AT_ENTITY(Local_71.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		case 2:
			func_285();
			func_265();
			if (bLocal_118)
			{
				return;
			}
			if ((!__LIB_0__::func_75() || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_71.f_0, 1) > (5f * 2f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1071.1638f, -783.0585f, 53.730213f, 1062.9149f, -782.8473f, 59.3433f, 3f, false, true, 0))
			{
				__LIB_6__::func_833();
				if (__LIB_1__::func_197(Local_71.f_0) && !PED::IS_PED_FLEEING(Local_71.f_0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_71.f_0, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1)
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_71.f_0, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_71.f_0, false);
						TASK::TASK_WANDER_STANDARD(Local_71.f_0, 40000f, 0);
					}
				}
				func_2(4);
			}
			else
			{
				Var0 = { __LIB_9__::func_980() };
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_CONTACT_4") || MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_CONTACT_5"))
				{
					iLocal_147++;
					if (iLocal_147 > 30)
					{
						if (__LIB_1__::func_197(Local_71.f_0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_71.f_0, joaat("SCRIPT_TASK_WANDER_STANDARD")) != 1)
							{
								PED::SET_PED_CAN_BE_TARGETTED(Local_71.f_0, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_71.f_0, false);
								TASK::TASK_WANDER_STANDARD(Local_71.f_0, 281.0714f, 0);
							}
						}
					}
				}
			}
			break;
	}
}

int func_409()//Position - 0x34FBC
{
	if ((((((__LIB_1__::func_197(Local_62.f_0) && __LIB_0__::func_508(Local_62.f_0, PLAYER::PLAYER_PED_ID(), 55f, 1)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_62.f_0)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_62.f_0, PED::GET_PED_BONE_INDEX(Local_62.f_0, 31086)), 0.1f)) && !ENTITY::IS_ENTITY_OCCLUDED(Local_62.f_0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.0238f, -758.6504f, 54.945763f, 1054.396f, -758.6326f, 64.53705f, 47.5f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1046.0498f, -754.8271f, 56.041855f, 1144.9197f, -755.2141f, 59.983875f, 20.75f, false, true, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.4375f, -791.64935f, 56.68583f, 1114.9348f, -791.4409f, 66.16802f, 15.5f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_410()//Position - 0x350BE
{
	int iVar0;
	if (bLocal_80)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (__LIB_1__::func_197(Local_61[iVar0 /*9*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_61[iVar0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[iVar0 /*9*/], false);
					func_1(2);
					return;
				}
				else if (__LIB_0__::func_508(Local_61[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 5f, 1))
				{
					TASK::TASK_COMBAT_PED(Local_61[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			else
			{
				func_1(2);
				return;
			}
			iVar0++;
		}
	}
	switch (iLocal_44)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(iLocal_54))
			{
				iLocal_54 = __LIB_10__::func_711(Local_71.f_0, 1, 1, 5);
				HUD::SET_BLIP_ROUTE(iLocal_54, true);
			}
			__LIB_0__::func_210("PAP3_CON", 7500, 1);
			iLocal_44 = 1;
			break;
		case 1:
			func_285();
			func_265();
			if (bLocal_118)
			{
				return;
			}
			if (bLocal_80 == 1)
			{
				if (func_409())
				{
					iLocal_44 = 2;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_154, 20f, 20f, 2f, false, true, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 5f)
						{
						}
						else
						{
							iLocal_44 = 2;
						}
					}
					else
					{
						iLocal_44 = 2;
					}
				}
			}
			break;
		case 2:
			iLocal_79 = 0;
			func_411();
			func_2(3);
			break;
	}
}

void func_411()//Position - 0x35214
{
	if (__LIB_1__::func_183(Local_77.f_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_77.f_0, false);
	}
	if (__LIB_1__::func_183(Local_76.f_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_76.f_0, false);
	}
	if (__LIB_1__::func_183(Local_75[0 /*6*/]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_75[0 /*6*/], false);
	}
	if (__LIB_1__::func_183(Local_75[1 /*6*/]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_75[1 /*6*/], false);
	}
}

void func_412()//Position - 0x35270
{
	int iVar0;
	if (bLocal_80)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (__LIB_1__::func_197(Local_61[iVar0 /*9*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_61[iVar0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_61[iVar0 /*9*/], false);
					func_1(2);
					return;
				}
				else if (__LIB_0__::func_508(Local_61[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 5f, 1))
				{
					TASK::TASK_COMBAT_PED(Local_61[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			else
			{
				func_1(2);
				return;
			}
			iVar0++;
		}
	}
	switch (iLocal_44)
	{
		case 0:
			__LIB_0__::func_203(&uLocal_419, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			__LIB_0__::func_203(&uLocal_419, 3, 0, "BEVERLY", 0, 1);
			if (iLocal_48 == 1)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
			if (__LIB_0__::func_77(0))
			{
				__LIB_6__::func_849(0);
			}
			iLocal_85 = 0;
			__LIB_0__::func_523(&iLocal_54);
			iLocal_44 = 1;
			break;
		case 1:
			func_285();
			func_265();
			if (bLocal_118)
			{
				return;
			}
			if (bLocal_80 == 1)
			{
				if (func_409())
				{
					__LIB_6__::func_849(0);
					HUD::CLEAR_PRINTS();
					iLocal_79 = 0;
					func_411();
					func_2(3);
				}
			}
			if (!iLocal_85)
			{
				if (__LIB_35__::func_540(&uLocal_419, 50, "PAP3BAU", "PAP3_INTRO", 9, 0, 0, 1))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 1);
					iLocal_85 = 1;
				}
			}
			else if (__LIB_0__::func_75())
			{
				if ((AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 6 && !HUD::DOES_BLIP_EXIST(iLocal_54)) && __LIB_1__::func_197(Local_71.f_0))
				{
					iLocal_54 = __LIB_10__::func_711(Local_71.f_0, 1, 1, 5);
					if (HUD::DOES_BLIP_EXIST(iLocal_54))
					{
						HUD::SET_BLIP_ROUTE(iLocal_54, true);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_154, 20f, 20f, 2f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1046.0498f, -754.8271f, 56.041855f, 1144.9197f, -755.2141f, 59.983875f, 20.75f, false, true, 0))
				{
					__LIB_6__::func_849(0);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 5f)
						{
						}
						else
						{
							HUD::CLEAR_PRINTS();
							iLocal_79 = 0;
							func_411();
							func_2(3);
						}
					}
					else
					{
						HUD::CLEAR_PRINTS();
						iLocal_79 = 0;
						func_411();
						func_2(3);
					}
				}
			}
			else if (__LIB_10__::func_564())
			{
				iLocal_44 = 2;
			}
			break;
		case 2:
			iLocal_79 = 0;
			func_2(2);
			break;
	}
}

void func_414()//Position - 0x35522
{
	int iVar0;
	int iVar1;
	if (func_539(0))
	{
		iLocal_55 = PED::ADD_SCENARIO_BLOCKING_AREA(1051.8594f, -799.0458f, 53f, 1114.5818f, -779.1284f, 60f, false, true, true, true);
		iLocal_56 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(56.7705f, -761.915f, 1090.248f) - Vector(5f, 5f, 5f), Vector(56.7705f, -761.915f, 1090.248f) + Vector(5f, 5f, 5f), false, true, true, true);
		if (__LIB_0__::func_294())
		{
			iVar1 = __LIB_0__::func_315();
			if (Global_94618 == 1)
			{
				iVar1++;
			}
			switch (iVar1)
			{
				case 0:
					__LIB_0__::func_370(1039.8661f, -536.2775f, 60.0808f, 173f, 1, 0);
					func_532(1, 1);
					while (!func_288(1))
					{
						SYSTEM::WAIT(0);
					}
					bLocal_80 = false;
					func_285();
					PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
					__LIB_41__::func_639(&iVar0, 1027.5906f, -550.1744f, 59.2083f, 175.1857f, 1, 0, 0, 1, 1, joaat("asterope"), 0, 145, 1);
					__LIB_6__::func_775(iVar0, -1, 1);
					func_427();
					iLocal_44 = 2;
					iLocal_43 = 1;
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					__LIB_9__::func_994();
					__LIB_32__::func_751(1, 1, 1);
					break;
				case 1:
					MISC::CLEAR_AREA_OF_OBJECTS(1077.0671f, -797.3167f, 57.3309f, 150f, 2);
					__LIB_0__::func_370(1066.6431f, -774.0832f, 57.1322f, 245.0544f, 1, 0);
					func_532(1, 1);
					while (!func_288(1))
					{
						SYSTEM::WAIT(0);
					}
					bLocal_80 = false;
					func_285();
					PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
					__LIB_41__::func_639(&iVar0, 1077.7363f, -765.1624f, 56.6271f, 271.4277f, 0, 0, 0, 1, 1, joaat("buffalo"), 0, 145, 1);
					iLocal_44 = 2;
					iLocal_43 = 3;
					__LIB_6__::func_775(0, -1, 1);
					__LIB_0__::func_0(&Local_71);
					func_427();
					MISC::CLEAR_AREA(1075.6421f, -793.8809f, 57.3145f, 40f, true, false, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
					__LIB_9__::func_994();
					__LIB_32__::func_751(1, 1, 1);
					break;
				case 2:
					__LIB_0__::func_370(1066.6431f, -774.0832f, 57.1322f, 245.0544f, 1, 0);
					PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_417, joaat("PLAYER"));
					__LIB_6__::func_775(0, -1, 1);
					__LIB_9__::func_994();
					SYSTEM::WAIT(600);
					__LIB_0__::func_84(500, 1);
					__LIB_32__::func_751(1, 1, 1);
					func_4();
					break;
				default:
					break;
			}
		}
		else
		{
			if (__LIB_0__::func_2(0))
			{
				iLocal_38 = 0;
				while (!__LIB_30__::func_557(&Local_42))
				{
					SYSTEM::WAIT(0);
				}
				__LIB_0__::func_84(500, 1);
			}
			iLocal_44 = 0;
			iLocal_43 = 1;
		}
	}
}

void func_427()//Position - 0x35B8B
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_532(bool bParam0, bool bParam1)//Position - 0x41732
{
	if (bParam0)
	{
		__LIB_32__::func_752(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_533(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_533(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x41765
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_258(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_151(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_37(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_151(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_37(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_151(PLAYER::PLAYER_PED_ID(), 8, 1) || func_151(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_37(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_151(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_37(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(__LIB_0__::func_85(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
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
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_34 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			}
		}
		if (iParam3 == 1)
		{
			__LIB_0__::func_84(500, 0);
		}
	}
}

int func_539(bool bParam0)//Position - 0x41A93
{
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		return 1;
	}
	return 0;
}

void func_541()//Position - 0x41AFC
{
	char* sVar0;
	switch (iLocal_44)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			__LIB_0__::func_523(&iLocal_54);
			switch (iLocal_153)
			{
				case 0:
					break;
				case 1:
					sVar0 = "PAP3_08";
					break;
				case 2:
					sVar0 = "PAP3_ALERT";
					break;
				case 3:
					sVar0 = "PAP3_INJUR2";
					break;
				case 4:
					sVar0 = "PAP3_KILL1";
					break;
				case 6:
					sVar0 = "PAP3_KILL3";
					break;
				case 5:
					sVar0 = "PAP3_THREAT";
					break;
			}
			if (iLocal_153 == 0)
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sVar0, 1);
			}
			__LIB_6__::func_771();
			iLocal_90 = 0;
			iLocal_44 = 1;
			break;
		case 1:
			if (iLocal_90)
			{
				if (__LIB_0__::func_204())
				{
					if (!__LIB_0__::func_75())
					{
						func_208(1);
						func_542();
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							__LIB_0__::func_296();
						}
						func_581(0);
					}
				}
			}
			else if (iLocal_153 == 2)
			{
				if (iLocal_84)
				{
					if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_203(&uLocal_419, 4, Local_61[0 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
						__LIB_0__::func_203(&uLocal_419, 6, Local_66.f_0, "Paparazzo3BDrugDealer", 0, 1);
						__LIB_0__::func_203(&uLocal_419, 7, Local_61[1 /*9*/], "Paparazzo3BBodyGuard2", 0, 1);
						__LIB_0__::func_203(&uLocal_419, 8, Local_70[0 /*9*/], "Paparazzo3BDealerGoon1", 0, 1);
						iLocal_90 = __LIB_35__::func_536(&uLocal_419, "pap3bau", "PAP3_SECUR2", 8, 1, 0, 0);
					}
				}
				else if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_203(&uLocal_419, 4, Local_61[1 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
					iLocal_90 = __LIB_35__::func_901(&uLocal_419, "pap3bau", "PAP3_SECUR4", "PAP3_SECUR4_3", 8, 1, 0);
				}
			}
			else if (iLocal_153 == 5)
			{
				if (__LIB_1__::func_197(Local_71.f_0))
				{
					__LIB_6__::func_771();
					__LIB_0__::func_203(&uLocal_419, 8, Local_71.f_0, "Paparazzo3BDealerGoon1", 0, 1);
					__LIB_0__::func_203(&uLocal_419, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					iLocal_90 = __LIB_35__::func_536(&uLocal_419, "pap3bau", "PAP3_FAIL", 8, 1, 0, 0);
				}
			}
			else
			{
				iLocal_90 = 1;
			}
			break;
	}
}

void func_542()//Position - 0x41CFD
{
	int iVar0;
	__LIB_0__::func_0(&Local_62);
	__LIB_0__::func_0(&Local_66);
	__LIB_0__::func_0(&Local_71);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		__LIB_0__::func_0(&(Local_61[iVar0 /*9*/]));
		__LIB_0__::func_523(&(Local_61[iVar0 /*9*/].f_8));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_0__::func_0(&(Local_70[iVar0 /*9*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		__LIB_11__::func_32(&(Local_75[iVar0 /*6*/]));
		iVar0++;
	}
	__LIB_11__::func_32(&Local_76);
	__LIB_11__::func_32(&Local_77);
	__LIB_0__::func_523(&iLocal_54);
	__LIB_0__::func_123(&Local_78);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_417);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_418);
}

void func_547()//Position - 0x41EC4
{
	int iVar0;
	if (iLocal_94 || iLocal_103)
	{
		if (!iLocal_119)
		{
			if (__LIB_0__::func_121(Local_66.f_0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_66.f_0, false);
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (__LIB_0__::func_121(Local_70[iVar0 /*9*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_70[iVar0 /*9*/], false);
				}
				iVar0++;
			}
			iLocal_119 = 1;
		}
	}
}

void func_567()//Position - 0x429D7
{
	iLocal_119 = 0;
	func_578();
	iLocal_79 = 0;
	bLocal_80 = false;
	iLocal_81 = 0;
	iLocal_82 = 0;
	iLocal_83 = 0;
	iLocal_84 = 0;
	iLocal_85 = 0;
	iLocal_87 = 0;
	iLocal_88 = 0;
	iLocal_126 = 0;
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@base");
	STREAMING::REQUEST_ANIM_DICT(sLocal_584);
	STREAMING::REQUEST_ANIM_DICT(sLocal_585);
	STREAMING::REQUEST_ANIM_DICT(sLocal_586);
	PED::ADD_RELATIONSHIP_GROUP("PrincessGroup", &iLocal_417);
	PED::ADD_RELATIONSHIP_GROUP("DealersGroup", &iLocal_418);
	__LIB_24__::func_951(50, 1, 0);
	__LIB_11__::func_329(&uLocal_157);
	__LIB_11__::func_328(&uLocal_157, 1073.5927f, -787.5071f, 57.2626f);
	__LIB_11__::func_328(&uLocal_157, 1071.3456f, -796.4704f, 57.3459f);
	__LIB_11__::func_328(&uLocal_157, 1074.5679f, -798.8521f, 57.3658f);
	__LIB_11__::func_328(&uLocal_157, 1091.1027f, -798.9657f, 57.2626f);
	__LIB_11__::func_328(&uLocal_157, 1101.3662f, -794.2939f, 57.2626f);
	__LIB_11__::func_328(&uLocal_157, 1114.66f, -794.1965f, 57.3977f);
	__LIB_11__::func_328(&uLocal_157, 1114.48f, -781.67f, 58.42f);
	__LIB_11__::func_328(&uLocal_157, 1106.92f, -781.76f, 58.26f);
	__LIB_11__::func_328(&uLocal_157, 1096.149f, -782.6533f, 57.2632f);
	__LIB_11__::func_327(&uLocal_157);
	__LIB_11__::func_329(&uLocal_209);
	__LIB_11__::func_328(&uLocal_209, 1051.8142f, -777.9432f, 57.3783f);
	__LIB_11__::func_328(&uLocal_209, 1042.5559f, -810.4073f, 56.8677f);
	__LIB_11__::func_328(&uLocal_209, 1121.7858f, -815.4036f, 55.5302f);
	__LIB_11__::func_328(&uLocal_209, 1124.2711f, -771.0333f, 56.7566f);
	__LIB_11__::func_328(&uLocal_209, 1103.7654f, -766.3374f, 56.663002f);
	__LIB_11__::func_328(&uLocal_209, 1072.2963f, -766.3906f, 56.705795f);
	__LIB_11__::func_327(&uLocal_209);
	__LIB_11__::func_329(&uLocal_261);
	__LIB_11__::func_328(&uLocal_261, 1104.459f, -775.0743f, 57.3526f);
	__LIB_11__::func_328(&uLocal_261, 1114.681f, -775.0476f, 57.3626f);
	__LIB_11__::func_328(&uLocal_261, 1114.6786f, -781.0639f, 57.4212f);
	__LIB_11__::func_328(&uLocal_261, 1103.5934f, -782.3363f, 57.2626f);
	__LIB_11__::func_327(&uLocal_261);
	__LIB_11__::func_329(&uLocal_313);
	__LIB_11__::func_328(&uLocal_313, 1070.7058f, -786.0175f, 57.2632f);
	__LIB_11__::func_328(&uLocal_313, 1063.4452f, -781.0466f, 57.2632f);
	__LIB_11__::func_328(&uLocal_313, 1051.7117f, -785.5277f, 57.3895f);
	__LIB_11__::func_328(&uLocal_313, 1051.752f, -797.8251f, 57.3918f);
	__LIB_11__::func_328(&uLocal_313, 1055.2402f, -798.9913f, 57.2626f);
	__LIB_11__::func_328(&uLocal_313, 1069.9708f, -796.5669f, 57.3245f);
	__LIB_11__::func_328(&uLocal_313, 1075.0953f, -793.6094f, 57.3137f);
	__LIB_11__::func_327(&uLocal_313);
	__LIB_20__::func_743(&uLocal_365, &uLocal_313, 5f);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3BAU", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3", 0);
}

void func_578()//Position - 0x431C2
{
	Local_61[0 /*9*/].f_1 = { 1083.6191f, -795.7248f, 58.30753f };
	Local_61[0 /*9*/].f_4 = 6.89694f;
	Local_61[0 /*9*/].f_5 = joaat("S_M_M_HighSec_02");
	Local_61[1 /*9*/].f_1 = { 1087.0999f, -792.7405f, 58.274784f };
	Local_61[1 /*9*/].f_4 = 94.73335f;
	Local_61[1 /*9*/].f_5 = joaat("S_M_M_HighSec_01");
	Local_61[2 /*9*/].f_1 = { 1110.2434f, -781.5825f, 57.2626f };
	Local_61[2 /*9*/].f_4 = 8f;
	Local_61[2 /*9*/].f_5 = joaat("S_M_M_HighSec_02");
	Local_61[3 /*9*/].f_1 = { 1108.8827f, -782.28296f, 58.26268f };
	Local_61[3 /*9*/].f_4 = -0.55027f;
	Local_61[3 /*9*/].f_5 = joaat("S_M_M_HighSec_01");
	Local_62.f_1 = { 1084.57f, -794.883f, 58.3022f };
	Local_62.f_4 = 114.52754f;
	Local_62.f_5 = joaat("U_F_Y_Princess");
	Local_66.f_1 = { 1084.7563f, -793.6358f, 58.290344f };
	Local_66.f_4 = -160f;
	Local_66.f_5 = joaat("S_M_Y_Dealer_01");
	Local_70[0 /*9*/].f_1 = { 1074.0952f, -789.9508f, 58.284847f };
	Local_70[0 /*9*/].f_4 = -101.45915f;
	Local_70[0 /*9*/].f_5 = joaat("G_M_Y_MexGoon_03");
	Local_70[1 /*9*/].f_1 = { 1083.9427f, -789.5262f, 58.27326f };
	Local_70[1 /*9*/].f_4 = -171.79382f;
	Local_70[1 /*9*/].f_5 = joaat("G_M_Y_MexGoon_03");
	Local_71.f_1 = { Local_154 };
	Local_71.f_4 = 35.52f;
	Local_71.f_5 = joaat("G_M_Y_MexGoon_03");
	Local_75[0 /*6*/].f_1 = { 1086.7025f, -796.6877f, 57.768784f };
	Local_75[0 /*6*/].f_4 = -58.433346f;
	Local_75[0 /*6*/].f_5 = joaat("landstalker");
	Local_75[1 /*6*/].f_1 = { 1110.928f, -789.2598f, 57.2627f };
	Local_75[1 /*6*/].f_4 = 0f;
	Local_75[1 /*6*/].f_5 = joaat("landstalker");
	Local_76.f_1 = { 1071.8176f, -790.16675f, 57.620956f };
	Local_76.f_4 = 176.83826f;
	Local_76.f_5 = joaat("buccaneer");
	Local_77.f_1 = { 1137.3795f, -792.8448f, 56.6033f };
	Local_77.f_4 = 89.9365f;
	Local_77.f_5 = joaat("benson");
	Local_78.f_1 = { 1084.0536f, -792.4236f, 57.2626f };
	Local_78.f_5 = joaat("p_amb_joint_01");
}

void func_581(int iParam0)//Position - 0x4349E
{
	int iVar0;
	if (__LIB_26__::func_257())
	{
		func_208(iParam0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_55, false);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_56, false);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		func_593();
		func_232();
		__LIB_0__::func_106(&Local_76);
		__LIB_0__::func_106(&Local_77);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			__LIB_0__::func_124(&(Local_61[iVar0 /*9*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			__LIB_0__::func_106(&(Local_75[iVar0 /*6*/]));
			iVar0++;
		}
		__LIB_0__::func_124(&Local_62, 1, 0, 1);
		__LIB_0__::func_124(&Local_66, 1, 0, 1);
		__LIB_36__::func_409("PAP3_16");
	}
	__LIB_32__::func_757(&Local_42, 0, 0, 0);
	__LIB_30__::func_553(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_593()//Position - 0x437F0
{
	int iVar0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_62.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_66.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_78.f_5);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_61[iVar0 /*9*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_75[iVar0 /*6*/].f_5);
		iVar0++;
	}
}

