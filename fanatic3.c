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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	struct<61> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int* iLocal_60 = NULL;
	int* iLocal_61 = NULL;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int* iLocal_64 = NULL;
	int* iLocal_65 = NULL;
	int* iLocal_66 = NULL;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	int* iLocal_70 = NULL;
	int* iLocal_71 = NULL;
	int* iLocal_72 = NULL;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	struct<3> Local_78[7];
	struct<3> Local_79[11];
	struct<3> Local_80[11];
	struct<3> Local_81 = { 0, 0, 0 } ;
	struct<3> Local_82 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	struct<3> Local_89 = { 0, 0, 0 } ;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int* iLocal_93 = NULL;
	int* iLocal_94 = NULL;
	int* iLocal_95 = NULL;
	int* iLocal_96 = NULL;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int* iLocal_106 = NULL;
	char* sLocal_107 = NULL;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	int iLocal_147 = 0;
	struct<3> Local_148 = { 0, 0, 0 } ;
	struct<3> Local_149 = { 0, 0, 0 } ;
	float fLocal_150 = 0f;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	struct<7> Local_163[5];
	var uLocal_164 = 16;
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
	var uLocal_329 = 16;
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
	var uLocal_494 = 15;
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
	var uLocal_546 = 15;
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
	float fLocal_598 = 0f;
	int iLocal_599 = 0;
	struct<61> Local_600 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_47 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_48 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_50 = __LIB_2__::func_108(61);
	iLocal_55 = -1;
	iLocal_58 = joaat("scorcher");
	iLocal_59 = joaat("A_C_Retriever");
	Local_68 = { 87.43864f, 7032.115f, 12.044374f };
	fLocal_69 = 151.459f;
	Local_81 = { -909.0488f, 6142.6167f, 4.2883f };
	Local_82 = { -673.7409f, 6138.096f, 1.0698f };
	Local_83 = { 51.9898f, 6768.9653f, 19.7661f };
	Local_84 = { 64.17f, 7048.68f, 15.61f };
	fLocal_85 = 270.65f;
	fLocal_86 = 264.38f;
	fLocal_87 = 313.15f;
	fLocal_88 = 195.495f;
	iLocal_92 = 180;
	iLocal_103 = 1;
	iLocal_109 = -1;
	iLocal_130 = 1;
	Local_148 = { -222.05322f, 6535.5303f, 2.351944f };
	Local_149 = { -638.4162f, 6057.3403f, 26.191582f };
	fLocal_150 = 176.25f;
	fLocal_153 = 30f;
	fLocal_154 = 0.35f;
	fLocal_155 = 0f;
	fLocal_156 = 0.1f;
	fLocal_157 = 0.075f;
	Local_54 = { ScriptParam_600 };
	__LIB_20__::func_264(&Local_54);
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		__LIB_0__::func_135("Force cleanup [TERMINATING]");
		__LIB_38__::func_39(1);
		func_540();
	}
	if (__LIB_0__::func_294())
	{
		iVar0 = __LIB_0__::func_315();
		if (Global_94618 == 1)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			Global_78564 = 1;
			iLocal_49 = 0;
			while (!func_530(&Local_54))
			{
				SYSTEM::WAIT(0);
			}
			Global_78564 = 0;
		}
		__LIB_10__::func_700(&Local_54, 0, 1);
	}
	func_528();
	if (!__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
	}
	__LIB_9__::func_485(2, 1);
	__LIB_9__::func_485(3, 1);
	__LIB_24__::func_930();
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("SF_EDF", 0);
		SYSTEM::WAIT(0);
		__LIB_35__::func_898(Local_54.f_9, 1, 0, 0, 0, 0);
		__LIB_11__::func_986();
		switch (iLocal_55)
		{
			case -1:
				func_505();
				break;
			case 0:
				func_468();
				break;
			case 1:
				func_462();
				break;
			case 2:
				func_459();
				break;
			case 3:
				func_381();
				break;
			case 4:
				func_367();
				break;
			case 5:
				func_282();
				break;
			case 8:
				func_280();
				break;
			case 6:
				func_11();
				break;
			case 7:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x2CB
{
	char* sVar0;
	switch (iLocal_116)
	{
		case 0:
			__LIB_0__::func_523(&iLocal_96);
			__LIB_0__::func_523(&iLocal_93);
			__LIB_0__::func_523(&iLocal_95);
			__LIB_0__::func_523(&iLocal_94);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_90);
			HUD::CLEAR_PRINTS();
			AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_FAIL");
			switch (iLocal_117)
			{
				case 0:
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_GENERIC");
					break;
				case 1:
					sVar0 = "FATIC3_11";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
					break;
				case 2:
					sVar0 = "FATIC3_YOURBIKE";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
					break;
				case 3:
					sVar0 = "FATIC3_16";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_OUT_OF_TIME");
					break;
				case 4:
					sVar0 = "FATIC3_8";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_LOST_RACE");
					break;
				case 5:
					sVar0 = "FATIC3_7";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_WOMAN_DIED");
					break;
				case 6:
					sVar0 = "FATIC3_10";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_WOMAN_HURT");
					break;
				case 7:
					sVar0 = "FATIC3_13";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_WOMAN_SCARED");
					break;
				case 9:
					sVar0 = "FATIC3_14";
					__LIB_11__::func_797("MISSION_FAILED reason=FAILED_LEFT_AREA");
					break;
			}
			if (iLocal_117 == 0)
			{
				__LIB_38__::func_39(1);
			}
			else
			{
				__LIB_39__::func_861(sVar0, 1);
			}
			iLocal_116 = 1;
			break;
		case 1:
			if (__LIB_0__::func_204())
			{
				func_2();
				func_540();
			}
			break;
	}
}

void func_2()//Position - 0x40D
{
	__LIB_0__::func_523(&iLocal_96);
	__LIB_0__::func_523(&iLocal_93);
	__LIB_0__::func_523(&iLocal_95);
	__LIB_0__::func_523(&iLocal_94);
	GRAPHICS::DELETE_CHECKPOINT(iLocal_90);
	__LIB_11__::func_32(&iLocal_64);
	__LIB_0__::func_0(&iLocal_70);
	__LIB_0__::func_0(&iLocal_71);
	__LIB_11__::func_32(&iLocal_65);
	__LIB_11__::func_32(&iLocal_66);
	__LIB_0__::func_0(&iLocal_72);
	__LIB_0__::func_0(&iLocal_106);
	__LIB_11__::func_32(&iLocal_60);
	__LIB_11__::func_32(&iLocal_61);
}

void func_11()//Position - 0x623
{
	switch (iLocal_115)
	{
		case 0:
			__LIB_11__::func_797("WAITING FOR OUTRO ASSETS");
			STREAMING::REQUEST_ANIM_DICT("rcmfanatic3leadinoutef_3_mcs_1");
			iLocal_147 = 0;
			bLocal_146 = false;
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3leadinoutef_3_mcs_1"))
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
				}
				__LIB_11__::func_32(&iLocal_67);
				if (!__LIB_1__::func_183(iLocal_67))
				{
					__LIB_11__::func_32(&iLocal_67);
					iLocal_67 = VEHICLE::CREATE_VEHICLE(joaat("scorcher"), Local_68, fLocal_69, true, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_67, 5f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_67, Local_68, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_67, fLocal_69);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_67, 5f);
				}
				iLocal_115++;
				__LIB_11__::func_797("DOING OUTRO");
			}
			break;
		case 1:
			iLocal_599 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", 71.2335f, 7032.0923f, 25.1157f, -2.4036f, 0f, 17.3552f, 25f, false, 2);
			iLocal_115++;
			MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 25f, 0);
			__LIB_11__::func_797("Going to case 2");
			break;
		case 2:
			if (__LIB_0__::func_121(iLocal_106))
			{
				TASK::CLEAR_PED_TASKS(iLocal_106);
				__LIB_11__::func_797("*** Clearing Mary Ann tasks (Cutscene)");
				if (bLocal_146)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_106, 64.0768f, 7045.163f, 14.9558f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_106, 70.469f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_106, 65.61f, 7038.87f, 13.69f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_106, 13.469f);
				}
				if (bLocal_146)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
					TASK::TASK_PLAY_ANIM(0, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 8f, -4f, -1, 0, 0.164f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
					TASK::TASK_PLAY_ANIM(0, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 8f, -4f, -1, 0, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
				}
				TASK::TASK_PERFORM_SEQUENCE(iLocal_106, iLocal_161);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
					__LIB_10__::func_701(PLAYER::PLAYER_PED_ID(), Local_84, fLocal_88, 1, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				CAM::PLAY_CAM_ANIM(iLocal_599, "leadout_ef_3_mcs_maryann_cam", "rcmfanatic3leadinoutef_3_mcs_1", ENTITY::GET_ENTITY_COORDS(iLocal_106, true), ENTITY::GET_ENTITY_ROTATION(iLocal_106, 2), false, 2);
				CAM::SET_CAM_ACTIVE(iLocal_599, true);
			}
			RECORDING::REPLAY_START_EVENT(1);
			func_262();
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			__LIB_0__::func_84(500, 0);
			__LIB_0__::func_203(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			__LIB_0__::func_203(&uLocal_164, 3, iLocal_106, "MARYANN", 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_106, -1, 0, 2);
			SYSTEM::WAIT(1000);
			if (__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_2", 8, 0, 0, 0))
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
				iLocal_115++;
				__LIB_11__::func_797("Going to case 3");
			}
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_118) < 3000)
			{
				if (__LIB_6__::func_841(1000))
				{
					__LIB_10__::func_696(500, 1);
					if (__LIB_0__::func_121(iLocal_106))
					{
						TASK::CLEAR_PED_TASKS(iLocal_106);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					__LIB_11__::func_797("Intro skip case 3");
					SYSTEM::WAIT(750);
					func_229(1);
					func_12();
				}
			}
			else
			{
				iLocal_118 = MISC::GET_GAME_TIMER();
				iLocal_115++;
				__LIB_11__::func_797("Going to case 4");
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_118) < 10000)
			{
				if (__LIB_6__::func_841(1000))
				{
					__LIB_10__::func_696(500, 1);
					if (__LIB_0__::func_121(iLocal_106))
					{
						TASK::CLEAR_PED_TASKS(iLocal_106);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					__LIB_11__::func_797("Intro skip case 4");
					SYSTEM::WAIT(750);
					func_229(1);
					func_12();
				}
			}
			else
			{
				iLocal_115++;
				__LIB_11__::func_797("Going to case 5");
			}
			break;
		case 5:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_6__::func_841(1000))
				{
					__LIB_10__::func_696(500, 1);
					if (__LIB_0__::func_121(iLocal_106))
					{
						TASK::CLEAR_PED_TASKS(iLocal_106);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					__LIB_11__::func_797("Intro skip case 5");
					SYSTEM::WAIT(750);
					func_229(1);
					func_12();
				}
				if (__LIB_0__::func_121(iLocal_106))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_106, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_106, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann") >= 0.9f)
						{
							iLocal_115++;
							__LIB_11__::func_797("Going to case 6");
						}
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_106, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann") >= 0.98f)
						{
							if (iLocal_147 == 0)
							{
								if (__LIB_1__::func_183(iLocal_67))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_67, -2.5f, 0f, 0f), 2f, 20000, 40000f, 0.5f);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_67, 20000, -1, 2f, 1, 0);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_67, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, true);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_67, 15f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_106, iLocal_161);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_106, true, false);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
									iLocal_147 = 1;
								}
							}
						}
					}
					else if (iLocal_147 == 0)
					{
						if (__LIB_1__::func_183(iLocal_67))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_67, -2.5f, 0f, 0f), 2f, 20000, 40000f, 0.5f);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_67, 20000, -1, 2f, 1, 0);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_67, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, true);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_67, 15f, 786599);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_106, iLocal_161);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_106, true, false);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
							iLocal_147 = 1;
						}
					}
				}
			}
			else
			{
				func_229(0);
				RECORDING::REPLAY_STOP_EVENT();
				func_12();
			}
			break;
		case 6:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (__LIB_6__::func_841(1000))
				{
					__LIB_10__::func_696(500, 1);
					if (__LIB_0__::func_121(iLocal_106))
					{
						TASK::CLEAR_PED_TASKS(iLocal_106);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					__LIB_11__::func_797("Intro skip case 6");
					SYSTEM::WAIT(750);
					func_229(1);
					func_12();
				}
				if (__LIB_0__::func_121(iLocal_106))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_106, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 3))
					{
						if (iLocal_147 == 0)
						{
							if (__LIB_1__::func_183(iLocal_67))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, 86.6f, 7032.51f, 11.35f, 2f, 20000, 40000f, 1.5f);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_67, 20000, -1, 2f, 1, 0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_67, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_106, iLocal_161);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_106, true, false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
								iLocal_147 = 1;
							}
						}
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_106, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann") >= 0.98f)
					{
						if (iLocal_147 == 0)
						{
							if (__LIB_1__::func_183(iLocal_67))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, 86.6f, 7032.51f, 11.35f, 2f, 20000, 40000f, 1.5f);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_67, 20000, -1, 2f, 1, 0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_67, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_106, iLocal_161);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_106, true, false);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
								iLocal_147 = 1;
							}
						}
					}
				}
			}
			else
			{
				SYSTEM::WAIT(500);
				func_229(0);
				func_12();
			}
			break;
	}
}

void func_12()//Position - 0xDFF
{
	if (iLocal_131 == 0)
	{
		__LIB_0__::func_498(766);
	}
	__LIB_0__::func_686(0, 0, 1, 0);
	func_226();
	func_225();
	func_28(87, 1);
	__LIB_24__::func_951(61, 1, 1);
	func_540();
}

void func_28(int iParam0, bool bParam1)//Position - 0x1362
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
	__LIB_41__::func_660(iVar0, 0);
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
	func_56();
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

void func_56()//Position - 0x2519
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
				if (func_173(iVar1, 14, iVar2))
				{
					func_57(iVar1, 14, iVar2);
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

int func_57(int iParam0, int iParam1, int iParam2)//Position - 0x25DA
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
	if (!func_173(iParam0, iParam1, iParam2))
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
				func_57(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_57(iParam0, 14, uVar5[iVar3]))
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
	if (func_100(iParam0, iVar0, &iVar7, 0))
	{
		func_60(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_58(iParam0, iVar0, &iVar7))
	{
		func_60(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_58(int iParam0, int iParam1, int iParam2)//Position - 0x2796
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_173(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x285D
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
										func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_35__::func_896(iVar10, iVar0, func_66(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_100(iParam0, iVar10, &iVar4, 1))
							{
								func_60(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_18__::func_180(iVar10, 0) };
						func_60(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_60(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_60(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_60(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_60(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_35__::func_896(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_24__::func_955(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_60(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_60(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_100(iParam0, iVar10, &iVar4, 0))
		{
			func_60(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_58(iParam0, iVar10, &iVar4))
		{
			func_60(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0x389A
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
				if (func_173(iParam0, iParam1, iVar0))
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
				if (func_173(iParam0, iParam1, iVar1))
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

int func_100(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x9F74
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_173(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2)//Position - 0x205FB
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
				if (!func_173(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_18__::func_247(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_173(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_35__::func_896(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_173(iParam0, 14, iVar4))
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
			if (!func_173(iParam0, 14, uVar8[iVar7]))
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

void func_225()//Position - 0x27F83
{
	GRAPHICS::DELETE_CHECKPOINT(iLocal_90);
}

void func_226()//Position - 0x27F92
{
	__LIB_0__::func_523(&iLocal_93);
	__LIB_0__::func_523(&iLocal_94);
}

void func_229(int iParam0)//Position - 0x2804D
{
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_296();
	}
	if (iLocal_147 == 0)
	{
		if (__LIB_0__::func_121(iLocal_106) && __LIB_1__::func_183(iLocal_67))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_67, 20000, -1, 2f, 1, 0);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_67, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, true);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_67, 15f, 786599);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_106, iLocal_161);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_106);
			PED::FORCE_PED_MOTION_STATE(iLocal_106, joaat("MotionState_Run"), false, 0, false);
		}
	}
	if (__LIB_0__::func_121(iLocal_106))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_106, 0);
	}
	if (iParam0 == 0)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, 0f, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1out_of_breath");
	__LIB_0__::func_124(&iLocal_106, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_67);
	__LIB_32__::func_767(1, 1, 1, 1);
	__LIB_0__::func_84(500, 1);
}

void func_262()//Position - 0x28D61
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), true, 0, false);
	}
	__LIB_32__::func_755(62.860977f, 7052.1787f, 21.198898f, 67.866425f, 7037.953f, 12.469742f, 13f, 84.29f, 7038.63f, 12.66f, 267.13f, __LIB_9__::func_996(), 1, 1, 1, 0, 0);
	func_263(200.53f, 6626.14f, 30.56f, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1);
}

void func_263(struct<3> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)//Position - 0x28DEE
{
	int iVar0;
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		__LIB_26__::func_502(0);
		if (bParam7)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (bParam6)
		{
			switch (__LIB_18__::func_173())
			{
				case 0:
					if (func_173(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_173(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 1:
					if (func_173(PLAYER::PLAYER_PED_ID(), 8, 1) || func_173(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				case 2:
					if (func_173(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_60(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_280()//Position - 0x29AA3
{
	switch (iLocal_57)
	{
		case 0:
			__LIB_11__::func_797("DOING LOST SETUP");
			iLocal_57 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				iLocal_57 = 2;
			}
			else
			{
				__LIB_11__::func_797("Waiting for Lost race convo to finish...");
			}
			break;
		case 2:
			func_281(4);
			break;
	}
}

void func_281(int iParam0)//Position - 0x29AF3
{
	__LIB_11__::func_797("MISSION_FAILED CALLED!");
	switch (iParam0)
	{
		case 0:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_GENERIC");
			break;
		case 1:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
			break;
		case 2:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
			break;
		case 3:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_OUT_OF_TIME");
			break;
		case 4:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_LOST_RACE");
			break;
		case 5:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_WOMAN_DIED");
			break;
		case 6:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_WOMAN_HURT");
			break;
		case 7:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_WOMAN_SCARED");
			break;
		case 9:
			__LIB_11__::func_797("MISSION_FAILED reason=FAILED_LEFT_AREA");
			break;
	}
	iLocal_117 = iParam0;
	iLocal_55 = 7;
}

void func_282()//Position - 0x29BA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	func_354();
	func_327();
	func_324();
	func_323();
	func_321();
	func_318();
	func_317();
	func_316();
	func_313();
	func_312();
	func_288();
	if (iLocal_91 != 0)
	{
		iLocal_92 = (iLocal_92 - 25);
		if (iLocal_92 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_91);
		}
	}
	switch (iLocal_57)
	{
		case 0:
			__LIB_11__::func_797("DOING RUN SETUP");
			iLocal_57 = 1;
			iLocal_144 = 0;
			iLocal_140 = 0;
			STREAMING::REQUEST_ANIM_DICT("rcmfanatic3leadinoutef_3_mcs_1");
			__LIB_11__::func_797("DOING RUN RUNNING");
			break;
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_80[iLocal_100 /*3*/], true) > 75f)
			{
				if (!iLocal_144)
				{
					__LIB_0__::func_325("FATIC3_15", 7500, 1);
					iLocal_144 = 1;
				}
			}
			else
			{
				iLocal_144 = 0;
			}
			if (func_283(&Local_80))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic3leadinoutef_3_mcs_1", "Fra_outofbreath_intro", 2f, -8f, -1, 0, 0f, false, false, false);
				AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
				__LIB_0__::func_686(1, 0, 1, 0);
				iLocal_121 = 1;
				iLocal_57 = 2;
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic3leadinoutef_3_mcs_1", "Fra_outofbreath_intro", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmfanatic3leadinoutef_3_mcs_1", "Fra_outofbreath_intro") >= 0.9f)
				{
					__LIB_11__::func_797("Player done lead-out info");
					iLocal_55 = 6;
				}
			}
			else
			{
				__LIB_11__::func_797("Player not playing anim, cut to outro");
				iLocal_55 = 6;
			}
			break;
	}
}

int func_283(var uParam0)//Position - 0x29D3B
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, *(uParam0[iLocal_100 /*3*/]), false);
	if (fVar1 < 5.5f)
	{
		__LIB_0__::func_523(&iLocal_93);
		__LIB_0__::func_523(&iLocal_94);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", false);
		if (iLocal_90 != 0)
		{
			__LIB_11__::func_797("Create prev CP");
			HUD::GET_HUD_COLOUR(1, &iVar2, &iVar3, &iVar4, &iLocal_92);
			iLocal_92 = 180;
			Var5 = { *(uParam0[iLocal_100 /*3*/]) };
			switch (iLocal_55)
			{
				case 1:
					if (iLocal_100 == (iLocal_99 - 1))
					{
						Var5 = { Var5 + Vector(1.7f, 0f, 0f) };
					}
					else
					{
						if (iLocal_100 == 6)
						{
							fVar6 = 1.5f;
						}
						else
						{
							fVar6 = 0.4f;
						}
						Var5 = { Var5 + Vector(fVar6, 0f, 0f) };
					}
					break;
				case 3:
					if (iLocal_100 == (iLocal_99 - 1))
					{
						Var5 = { Var5 + Vector(1.7f, 0f, 0f) };
					}
					else
					{
						Var5 = { Var5 + Vector(2f, 0f, 0f) };
					}
					break;
				case 5:
					if (iLocal_100 == (iLocal_99 - 1))
					{
						Var5 = { Var5 + Vector(1.7f, 0f, 0f) };
					}
					else
					{
						Var5 = { Var5 + Vector(2f, 0f, 0f) };
					}
					break;
			}
			if (iLocal_100 == (iLocal_99 - 1))
			{
				Var7 = { *(uParam0[iLocal_100 /*3*/]) };
				iLocal_91 = GRAPHICS::CREATE_CHECKPOINT(10, Var5, Var7, 3.2f, iVar2, iVar3, iVar4, iLocal_92, 0);
			}
			else
			{
				Var8 = { *(uParam0[iLocal_100 + 1 /*3*/]) };
				if (iLocal_55 == 1 && iLocal_100 == 0)
				{
					Var5 = { *(uParam0[iLocal_100 /*3*/]) + Vector(2f, 0f, 0f) };
					iLocal_91 = GRAPHICS::CREATE_CHECKPOINT(6, Var5, Var8, 3.2f, iVar2, iVar3, iVar4, iLocal_92, 0);
				}
				else if (iLocal_55 == 3 && iLocal_100 == 0)
				{
					Var5 = { Var5 - Vector(0.3f, 0f, 0f) };
					iLocal_91 = GRAPHICS::CREATE_CHECKPOINT(7, Var5, Var8, 3.2f, iVar2, iVar3, iVar4, iLocal_92, 0);
				}
				else
				{
					iLocal_91 = GRAPHICS::CREATE_CHECKPOINT(func_286(iLocal_100, uParam0), Var5, Var8, 3.2f, iVar2, iVar3, iVar4, iLocal_92, 0);
				}
			}
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_91, iVar2, iVar3, iVar4, iLocal_92);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_91, iVar2, iVar3, iVar4, iLocal_92);
		}
		GRAPHICS::DELETE_CHECKPOINT(iLocal_90);
		iLocal_100++;
		if (iLocal_100 == iLocal_99)
		{
			return 1;
		}
		else
		{
			iLocal_93 = __LIB_10__::func_658(*(uParam0[iLocal_100 /*3*/]), 5, 0);
			HUD::SET_BLIP_COLOUR(iLocal_93, 5);
			HUD::SET_BLIP_SCALE(iLocal_93, 1.2f);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_93, false);
			if (iLocal_100 == (iLocal_99 - 1))
			{
				HUD::SET_BLIP_SPRITE(iLocal_93, 38);
			}
			if (iLocal_100 < (iLocal_99 - 1))
			{
				iLocal_94 = __LIB_10__::func_658(*(uParam0[iLocal_100 + 1 /*3*/]), 5, 0);
				HUD::SET_BLIP_COLOUR(iLocal_94, 5);
				if (iLocal_100 == (iLocal_99 - 2))
				{
					HUD::SET_BLIP_SCALE(iLocal_94, 1.2f);
					HUD::SET_BLIP_SPRITE(iLocal_94, 38);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_94, false);
				}
				else
				{
					HUD::SET_BLIP_SCALE(iLocal_94, 0.7f);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_94, false);
				}
			}
			if (iLocal_100 == (iLocal_99 - 1))
			{
				Var9 = { *(uParam0[iLocal_100 /*3*/]) };
				iLocal_105 = func_284(func_286(iLocal_100, uParam0));
				HUD::GET_HUD_COLOUR(iLocal_105, &iVar10, &iVar11, &iVar12, &iVar13);
				switch (iLocal_55)
				{
					case 1:
						iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(10, *(uParam0[iLocal_100 /*3*/]) + Vector(1.7f, 0f, 0f), Var9, 3.2f, iVar10, iVar11, iVar12, iVar13, 0);
						break;
					case 3:
						iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(10, *(uParam0[iLocal_100 /*3*/]) + Vector(1.7f, 0f, 0f), Var9, 3.2f, iVar10, iVar11, iVar12, iVar13, 0);
						break;
					case 5:
						iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(10, *(uParam0[iLocal_100 /*3*/]) + Vector(1.7f, 0f, 0f), Var9, 3.2f, iVar10, iVar11, iVar12, iVar13, 0);
						break;
				}
				HUD::GET_HUD_COLOUR(13, &iVar10, &iVar11, &iVar12, &iVar13);
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar10, iVar11, iVar12, iVar13);
				HUD::GET_HUD_COLOUR(134, &iVar10, &iVar11, &iVar12, &iVar13);
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar10, iVar11, iVar12, iVar13);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_90, 1.6f, 1.6f, 100f);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					fVar14 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_100 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
					if (iLocal_90 != 0)
					{
						if (fVar14 > 100f)
						{
							HUD::GET_HUD_COLOUR(13, &iVar10, &iVar11, &iVar12, &iVar13);
							iVar13 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar10, iVar11, iVar12, iVar13);
							HUD::GET_HUD_COLOUR(134, &iVar10, &iVar11, &iVar12, &iVar13);
							iVar13 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar10, iVar11, iVar12, iVar13);
						}
						else
						{
							HUD::GET_HUD_COLOUR(13, &iVar10, &iVar11, &iVar12, &iVar13);
							iVar13 = SYSTEM::ROUND((fVar14 * 2.4f));
							if (iVar13 < 60)
							{
								iVar13 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar10, iVar11, iVar12, iVar13);
							HUD::GET_HUD_COLOUR(134, &iVar10, &iVar11, &iVar12, &iVar13);
							iVar13 = SYSTEM::ROUND((fVar14 * 2.4f));
							if (iVar13 < 60)
							{
								iVar13 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar10, iVar11, iVar12, iVar13);
						}
					}
				}
			}
			else
			{
				iLocal_105 = func_284(func_286(iLocal_100, uParam0));
				HUD::GET_HUD_COLOUR(iLocal_105, &iVar15, &iVar16, &iVar17, &iVar18);
				Var9 = { *(uParam0[iLocal_100 + 1 /*3*/]) };
				if (iLocal_55 == 1)
				{
					if (iLocal_100 == 6)
					{
						fVar19 = 1.5f;
					}
					else
					{
						fVar19 = 0.4f;
					}
					iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(func_286(iLocal_100, uParam0), *(uParam0[iLocal_100 /*3*/]) + Vector(fVar19, 0f, 0f), Var9, 3.2f, iVar15, iVar16, iVar17, iVar18, 0);
				}
				else if (iLocal_55 == 3)
				{
					iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(func_286(iLocal_100, uParam0), *(uParam0[iLocal_100 /*3*/]) + Vector(2f, 0f, 0f), Var9, 3.2f, iVar15, iVar16, iVar17, iVar18, 0);
				}
				else
				{
					iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(func_286(iLocal_100, uParam0), *(uParam0[iLocal_100 /*3*/]) + Vector(2f, 0f, 0f), Var9, 3.2f, iVar15, iVar16, iVar17, iVar18, 0);
				}
				HUD::GET_HUD_COLOUR(13, &iVar15, &iVar16, &iVar17, &iVar18);
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar15, iVar16, iVar17, iVar18);
				HUD::GET_HUD_COLOUR(134, &iVar15, &iVar16, &iVar17, &iVar18);
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar15, iVar16, iVar17, iVar18);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_90, 1.6f, 1.6f, 100f);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					fVar20 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_100 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
					if (iLocal_90 != 0)
					{
						if (fVar20 > 100f)
						{
							HUD::GET_HUD_COLOUR(13, &iVar15, &iVar16, &iVar17, &iVar18);
							iVar18 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar15, iVar16, iVar17, iVar18);
							HUD::GET_HUD_COLOUR(134, &iVar15, &iVar16, &iVar17, &iVar18);
							iVar18 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar15, iVar16, iVar17, iVar18);
						}
						else
						{
							HUD::GET_HUD_COLOUR(13, &iVar15, &iVar16, &iVar17, &iVar18);
							iVar18 = SYSTEM::ROUND((fVar20 * 2.4f));
							if (iVar18 < 60)
							{
								iVar18 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar15, iVar16, iVar17, iVar18);
							HUD::GET_HUD_COLOUR(134, &iVar15, &iVar16, &iVar17, &iVar18);
							iVar18 = SYSTEM::ROUND((fVar20 * 2.4f));
							if (iVar18 < 60)
							{
								iVar18 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar15, iVar16, iVar17, iVar18);
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_105 = func_284(func_286(iLocal_100, uParam0));
		HUD::GET_HUD_COLOUR(iLocal_105, &iVar21, &iVar22, &iVar23, &iVar24);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			fVar25 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_100 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
			if (iLocal_90 != 0)
			{
				if (fVar25 > 100f)
				{
					HUD::GET_HUD_COLOUR(13, &iVar21, &iVar22, &iVar23, &iVar24);
					iVar24 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar21, iVar22, iVar23, iVar24);
					HUD::GET_HUD_COLOUR(134, &iVar21, &iVar22, &iVar23, &iVar24);
					iVar24 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar21, iVar22, iVar23, iVar24);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &iVar21, &iVar22, &iVar23, &iVar24);
					iVar24 = SYSTEM::ROUND((fVar25 * 2.4f));
					if (iVar24 < 60)
					{
						iVar24 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar21, iVar22, iVar23, iVar24);
					HUD::GET_HUD_COLOUR(134, &iVar21, &iVar22, &iVar23, &iVar24);
					iVar24 = SYSTEM::ROUND((fVar25 * 2.4f));
					if (iVar24 < 60)
					{
						iVar24 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar21, iVar22, iVar23, iVar24);
				}
			}
		}
	}
	return 0;
}

int func_284(int iParam0)//Position - 0x2A596
{
	iParam0 = iParam0;
	return 13;
}

int func_286(int iParam0, var uParam1)//Position - 0x2A5D2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	fVar6 = 180f;
	fVar7 = 140f;
	fVar8 = 80f;
	Var0 = { *(uParam1[iParam0 /*3*/]) };
	if (iParam0 == (iLocal_99 - 1))
	{
		switch (iLocal_55)
		{
			case 1:
				return 10;
				break;
			case 3:
				return 10;
				break;
			case 5:
				return 10;
				break;
		}
	}
	else if (iParam0 == 0)
	{
		switch (iLocal_55)
		{
			case 1:
				Var2 = { 64.17f, 7048.6797f, 15.6112f };
				break;
			case 3:
				Var2 = { Local_78[6 /*3*/] };
				break;
			case 5:
				Var2 = { Local_79[10 /*3*/] };
				break;
		}
		Var1 = { *(uParam1[iParam0 + 1 /*3*/]) };
	}
	else
	{
		Var2 = { *(uParam1[(iParam0 - 1) /*3*/]) };
		Var1 = { *(uParam1[iParam0 + 1 /*3*/]) };
	}
	Var3 = { Var2 - Var0 };
	Var4 = { Var1 - Var0 };
	fVar5 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var4.f_0, Var4.f_1);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	switch (iLocal_55)
	{
		case 1:
			if (fVar5 < fVar8)
			{
				return 8;
			}
			else if (fVar5 < fVar7)
			{
				return 7;
			}
			else if (fVar5 < fVar6)
			{
				return 6;
			}
			else
			{
				return 6;
			}
			break;
		case 2:
		case 3:
			if (fVar5 < fVar8)
			{
				return 8;
			}
			else if (fVar5 < fVar7)
			{
				return 7;
			}
			else if (fVar5 < fVar6)
			{
				return 6;
			}
			else
			{
				return 6;
			}
			break;
		case 5:
			if (fVar5 < fVar8)
			{
				return 8;
			}
			else if (fVar5 < fVar7)
			{
				return 7;
			}
			else if (fVar5 < fVar6)
			{
				return 6;
			}
			else
			{
				return 6;
			}
			break;
	}
	return 6;
}

void func_288()//Position - 0x2A7D1
{
	struct<6> Var0;
	switch (iLocal_114)
	{
		case 0:
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), 52.11f, 6965.68f, 9.73f, 5f, 1))
				{
					iLocal_76 = PED::CREATE_PED(26, joaat("A_F_Y_Runner_01"), 56.3978f, 7015.1646f, 8.8828f, 101.1728f, true, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_Y_Runner_01"));
					__LIB_11__::func_797("*** Dog owner created");
					iLocal_114++;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_76))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_76))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_76, "fan3_ownerroute", 0, 0, -1);
					__LIB_11__::func_797("*** Dog owner playing back recording");
					iLocal_114++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_121(iLocal_76))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_76))
				{
					if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_76) < 16f)
					{
						if (!__LIB_0__::func_75())
						{
							__LIB_0__::func_203(&uLocal_329, 5, iLocal_76, "FAN3DOGOWNER", 0, 1);
							__LIB_0__::func_203(&uLocal_329, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (__LIB_35__::func_536(&uLocal_329, "FAN3AUD", "FAN3_DOG", 7, 0, 0, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_76, PLAYER::PLAYER_PED_ID(), 6000, 0, 2);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_76, 6000, 0, 2);
								iLocal_114++;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_121(iLocal_76))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_76))
				{
					iLocal_114++;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_121(iLocal_76))
			{
				if (!__LIB_0__::func_75())
				{
					PED::SET_PED_KEEP_TASK(iLocal_76, true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_76);
				}
			}
			break;
	}
	if (__LIB_0__::func_121(iLocal_76))
	{
		if (__LIB_38__::func_135(iLocal_76, 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_IN_COMBAT(iLocal_76, 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_76);
			TASK::TASK_SMART_FLEE_PED(iLocal_76, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			if (__LIB_0__::func_75())
			{
				Var0 = { __LIB_0__::func_390() };
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "FAN3_DOG"))
				{
					__LIB_6__::func_771();
					__LIB_0__::func_203(&uLocal_329, 5, iLocal_76, "FAN3DOGOWNER", 0, 1);
					__LIB_0__::func_203(&uLocal_329, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					__LIB_10__::func_617(&uLocal_329, "FAN3AUD", "FAN3_DSCARE", 7, 0, 0);
				}
			}
			else
			{
				__LIB_0__::func_203(&uLocal_329, 5, iLocal_76, "FAN3DOGOWNER", 0, 1);
				__LIB_0__::func_203(&uLocal_329, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				__LIB_35__::func_536(&uLocal_329, "FAN3AUD", "FAN3_DSCARE", 7, 0, 0, 0);
			}
			iLocal_114 = 4;
		}
	}
}

void func_312()//Position - 0x2B45A
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (__LIB_0__::func_530(PLAYER::PLAYER_PED_ID(), Local_80[1 /*3*/], 5f, 1))
		{
			if (__LIB_0__::func_121(iLocal_75))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_75))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_75, "fan3_dogroute", 0, 0, -1);
				}
			}
		}
	}
}

void func_313()//Position - 0x2B4A1
{
	if (__LIB_0__::func_121(iLocal_72))
	{
		switch (iLocal_111)
		{
			case 0:
				if (__LIB_38__::func_135(iLocal_72, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_72);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 2, true);
					PED::SET_PED_KEEP_TASK(iLocal_72, true);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
					{
						ENTITY::DETACH_ENTITY(iLocal_77, true, true);
					}
					__LIB_6__::func_834(iLocal_72, "GENERIC_CURSE_MED", 4);
					if (__LIB_1__::func_183(iLocal_66))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_66, 20000, -1, 3f, 8, 0);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_66, PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 300f, 10f, true);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_161);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
						__LIB_11__::func_797("iBinocStage = 1");
						iLocal_111 = 1;
					}
					else if (!__LIB_1__::func_183(iLocal_66))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_161);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
						__LIB_11__::func_797("iBinocStage = 2");
						iLocal_111 = 2;
					}
				}
				if (__LIB_0__::func_121(iLocal_66))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
						{
							ENTITY::DETACH_ENTITY(iLocal_77, true, true);
						}
						TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_161);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
						__LIB_11__::func_797("iBinocStage = 2");
						iLocal_111 = 2;
					}
				}
				break;
			case 1:
				if (__LIB_1__::func_183(iLocal_66))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_66, false))
					{
						TASK::CLEAR_PED_TASKS(iLocal_72);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 2, false);
						PED::SET_PED_KEEP_TASK(iLocal_72, true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
						if (PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_66, false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_161);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
						__LIB_11__::func_797("iBinocStage = 2");
						iLocal_111 = 2;
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_72);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 2, false);
					PED::SET_PED_KEEP_TASK(iLocal_72, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
					if (PED::IS_PED_IN_VEHICLE(iLocal_72, iLocal_66, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
					}
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_161);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
					__LIB_11__::func_797("Car wrecked - iBinocStage = 2");
					iLocal_111 = 2;
				}
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_72, 1) > 300f)
				{
					__LIB_11__::func_797("iBinocStage = 3");
					iLocal_111 = 3;
				}
				break;
			case 2:
				if (__LIB_0__::func_121(iLocal_72))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_72, 1) > 100f)
					{
						__LIB_11__::func_797("iBinocStage = 3");
						iLocal_111 = 3;
					}
				}
				break;
			case 3:
				__LIB_0__::func_124(&iLocal_72, 1, 0, 1);
				__LIB_0__::func_106(&iLocal_66);
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_72, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_77))
			{
				ENTITY::DETACH_ENTITY(iLocal_77, true, true);
			}
		}
	}
}

void func_316()//Position - 0x2B9B0
{
	if (__LIB_0__::func_121(iLocal_74))
	{
		switch (iLocal_112)
		{
			case 0:
				if (__LIB_38__::func_135(iLocal_74, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_74);
					TASK::TASK_SMART_FLEE_PED(iLocal_74, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					iLocal_112++;
				}
				break;
			default:
				break;
			}
	}
}

void func_317()//Position - 0x2BA0D
{
	if (__LIB_0__::func_121(iLocal_73))
	{
		switch (iLocal_113)
		{
			case 0:
				if (__LIB_38__::func_135(iLocal_73, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_73);
					TASK::TASK_SMART_FLEE_PED(iLocal_73, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
					iLocal_113++;
				}
				break;
			default:
				break;
			}
	}
}

void func_318()//Position - 0x2BA6A
{
	if (!__LIB_11__::func_325(&uLocal_494, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)))
	{
		if (iLocal_136)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_97) > 10000)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
				}
				iLocal_136 = 0;
				func_281(9);
			}
		}
		else
		{
			__LIB_0__::func_210("FATIC3_15", 5000, 1);
			iLocal_97 = MISC::GET_GAME_TIMER();
			iLocal_136 = 1;
		}
		return;
	}
	else if (iLocal_136)
	{
		iLocal_97 = 0;
		HUD::CLEAR_THIS_PRINT("FATIC3_15");
		iLocal_136 = 0;
	}
}

void func_321()//Position - 0x2BBBA
{
	int iVar0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if ((iLocal_55 == 2 || iLocal_55 == 3) || iLocal_55 == 4)
		{
			if (func_322(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return;
			}
		}
		if (iLocal_55 != 7)
		{
			if (!func_322(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				if (__LIB_0__::func_121(iLocal_106) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					if (!__LIB_0__::func_75() && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_106) < 20f)
						{
							__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_CHEAT2", 8, 0, 0, 0);
						}
						else
						{
							__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_CHEAT1", 8, 0, 0, 0);
						}
					}
				}
			}
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			__LIB_11__::func_797("Telling player to leave any vehicle...");
		}
	}
}

int func_322(int iParam0)//Position - 0x2BC9B
{
	if (((iParam0 == joaat("bmx") || iParam0 == joaat("scorcher")) || iParam0 == joaat("scorcher")) || iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	return 0;
}

void func_323()//Position - 0x2BCDD
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 59.708908f, 6931.3857f, 10.60823f, 69.71092f, 6899.8784f, 15.374324f, 11f, false, true, 0))
	{
		if (!iLocal_142)
		{
			if (__LIB_0__::func_121(iLocal_106))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) < 20f)
				{
					if (Global_113386.f_18574.f_386 == 1)
					{
						if (__LIB_0__::func_75())
						{
							__LIB_0__::func_296();
							__LIB_10__::func_617(&uLocal_164, "FAN3AUD", "FAN3_JOGCH2B", 8, 0, 0);
						}
						else
						{
							__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_JOGCH2B", 8, 0, 0, 0);
						}
					}
					else if (__LIB_0__::func_75())
					{
						__LIB_0__::func_296();
						__LIB_10__::func_617(&uLocal_164, "FAN3AUD", "FAN3_JOGCH2A", 8, 0, 0);
					}
					else
					{
						__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_JOGCH2A", 8, 0, 0, 0);
					}
					iLocal_142 = 1;
					iLocal_141 = 0;
					iLocal_131 = 1;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 42.00794f, 6994.05f, 5.189813f, 51.558426f, 6969.847f, 12.566551f, 7f, false, true, 0))
	{
		if (!iLocal_143)
		{
			if (__LIB_0__::func_121(iLocal_106))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) < 20f)
				{
					if (__LIB_0__::func_75())
					{
						__LIB_0__::func_296();
						__LIB_10__::func_617(&uLocal_164, "FAN3AUD", "FAN3_JOGCH3", 8, 0, 0);
					}
					else
					{
						__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_JOGCH3", 8, 0, 0, 0);
					}
					iLocal_143 = 1;
					iLocal_141 = 0;
					iLocal_131 = 1;
				}
			}
		}
	}
}

void func_324()//Position - 0x2BE63
{
	if (!__LIB_0__::func_75())
	{
		if (iLocal_133)
		{
			iLocal_133 = 0;
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_119) > 13000)
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) < 30f && iLocal_56 == iLocal_55)
			{
				if (iLocal_55 == 1)
				{
					if (__LIB_0__::func_121(iLocal_106))
					{
						if (PED::IS_PED_SWIMMING(iLocal_106) && PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
						{
							func_325();
						}
					}
				}
				else
				{
					func_325();
				}
			}
		}
	}
	else if (__LIB_0__::func_121(iLocal_106))
	{
		if (!iLocal_141)
		{
			if ((__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) > 40f && !iLocal_127) && iLocal_133)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(true);
				__LIB_11__::func_797("*** PAUSING TRASH TALK");
				iLocal_141 = 1;
			}
		}
		else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) < 30f)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			__LIB_11__::func_797("*** RESTARTING TRASH TALK");
			iLocal_141 = 0;
		}
	}
}

void func_325()//Position - 0x2BF51
{
	int iVar0;
	int iVar1;
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		if (iLocal_55 == 1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		iVar1 = func_326(iLocal_55);
		if (!iVar1 == -1)
		{
			if (iLocal_104 == 1)
			{
				iVar1++;
			}
			if (Local_163[iVar1 /*7*/][iVar0 /*2*/] == 0)
			{
				if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_203(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				if (__LIB_0__::func_121(iLocal_106))
				{
					__LIB_0__::func_203(&uLocal_164, 3, iLocal_106, "MARYANN", 0, 1);
				}
				__LIB_35__::func_536(&uLocal_164, "FAN3AUD", Local_163[iVar1 /*7*/][iVar0 /*2*/].f_1, 7, 0, 0, 0);
				Local_163[iVar1 /*7*/][iVar0 /*2*/] = 1;
				iLocal_133 = 1;
				iLocal_119 = MISC::GET_GAME_TIMER();
				__LIB_11__::func_797("*** CREATING TRASH TALK");
			}
		}
	}
	else
	{
		__LIB_11__::func_797("*** Trying to start trash talk, but god text is preventing it");
	}
}

int func_326(int iParam0)//Position - 0x2C036
{
	int iVar0;
	if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam0 == 2)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = -1;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_327()//Position - 0x2C073
{
	func_353();
	func_350();
	__LIB_26__::func_537(&iLocal_96, iLocal_106, 1, 1092616192, 1);
	switch (iLocal_56)
	{
		case 1:
			func_346();
			func_343();
			break;
		case 2:
			func_342();
			break;
		case 3:
			func_340();
			func_343();
			func_337();
			break;
		case 4:
			func_336();
			break;
		case 5:
			func_332();
			func_343();
			break;
		case 6:
			if (!iLocal_121)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_0__::func_296();
				}
				if (__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_MAWIN", 8, 0, 0, 0))
				{
					iLocal_55 = 8;
					iLocal_57 = 0;
					GRAPHICS::DELETE_CHECKPOINT(iLocal_90);
					__LIB_0__::func_523(&iLocal_93);
					__LIB_0__::func_523(&iLocal_94);
					func_328(8);
				}
			}
			break;
		case 8:
			break;
		case 7:
			break;
		default:
			break;
	}
}

void func_328(int iParam0)//Position - 0x2C156
{
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_296();
	}
	if (iParam0 != iLocal_56)
	{
		iLocal_56 = iParam0;
		func_329(iParam0);
	}
	else if (iLocal_140 == 1)
	{
		func_329(iParam0);
	}
	iLocal_141 = 0;
}

void func_329(int iParam0)//Position - 0x2C18E
{
	iLocal_101 = 0;
	switch (iParam0)
	{
		case 1:
			iLocal_102 = 7;
			if (__LIB_0__::func_121(iLocal_106))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_106, Local_78[iLocal_101 /*3*/], 2f, 20000, 40000f, 0.5f);
			}
			break;
		case 2:
			if (__LIB_0__::func_121(iLocal_60) && __LIB_0__::func_121(iLocal_61))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_61, -1, false))
				{
					iLocal_63 = iLocal_61;
				}
				else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_60, -1, false))
				{
					iLocal_63 = iLocal_60;
				}
				if (__LIB_0__::func_121(iLocal_106))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_106, iLocal_63, 20000, -1, 3f, 1, 0);
				}
				if (!__LIB_0__::func_75())
				{
					if (iLocal_103 == 1)
					{
						__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_SWIMWIN", 7, 1, 0, 0);
					}
					else
					{
						__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_SWIMLOS", 7, 1, 0, 0);
					}
				}
				iLocal_98 = MISC::GET_GAME_TIMER();
				iLocal_110 = 0;
			}
			break;
		case 3:
			iLocal_102 = 11;
			if (!__LIB_0__::func_75())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_RUNTO", 7, 0, 0, 0);
				}
				else
				{
					__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_RUNTO", 7, 1, 0, 0);
				}
			}
			func_331();
			break;
		case 4:
			if (__LIB_0__::func_121(iLocal_106) && __LIB_1__::func_183(iLocal_63))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
				{
					TASK::REMOVE_WAYPOINT_RECORDING("Fan3_pedBike");
					TASK::REMOVE_WAYPOINT_RECORDING("Fan3_pedBikePanic");
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_106, iLocal_63, false))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_63, 5f, 10, false);
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_106, 0, 0);
				}
				if (!__LIB_0__::func_75())
				{
					if (iLocal_103 == 1)
					{
						__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_BIKEWIN", 7, 1, 0, 0);
					}
					else
					{
						__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_BIKELOS", 7, 1, 0, 0);
					}
				}
			}
			break;
		case 5:
			iLocal_102 = 11;
			func_330();
			break;
		case 7:
			break;
		default:
			break;
	}
}

int func_330()//Position - 0x2C38A
{
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_pedJog"))
	{
		__LIB_11__::func_797("Requesting Mary Ann's jog waypoint recording");
		TASK::REQUEST_WAYPOINT_RECORDING("fan3_pedJog");
		return 0;
	}
	return 1;
}

int func_331()//Position - 0x2C3B6
{
	if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBike") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBikePanic")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBikePrep")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Fan3_MaryAnnBikeJump"))
	{
		__LIB_11__::func_797("Waiting for Mary Ann's bike recordings to load");
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBike");
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBikePanic");
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBikePrep");
		VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Fan3_MaryAnnBikeJump");
		return 0;
	}
	return 1;
}

void func_332()//Position - 0x2C433
{
	if (func_330())
	{
		if (func_335(&Local_80))
		{
			func_328(6);
		}
		else
		{
			func_333();
		}
	}
}

void func_333()//Position - 0x2C457
{
	switch (iLocal_56)
	{
		case 1:
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_106, Local_78[iLocal_101 /*3*/], 3f, 20000, 0.25f, 0.5f);
			__LIB_11__::func_796("*** Updating Mary Ann swimming task to pos", iLocal_101);
			break;
		case 2:
			break;
		case 3:
			if (__LIB_0__::func_121(iLocal_106) && __LIB_1__::func_183(iLocal_63))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63) && iLocal_128 == 0)
				{
					if (iLocal_101 > 2)
					{
						__LIB_11__::func_797("*** Mary Ann has missed a position but reached the end of the bike route!!");
						__LIB_11__::func_797("*** Changing position to 11 so the check returns true...");
						iLocal_101 = 11;
					}
					__LIB_11__::func_797("*** Mary Ann: Doing start of bike section setup");
					sLocal_107 = "Fan3_pedBike";
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_63, 3);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_63, false);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_106, iLocal_63, sLocal_107, 786485, 0, 24, -1, -1f, false, 2f);
					__LIB_0__::func_523(&iLocal_95);
				}
			}
			break;
		case 4:
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_106, iLocal_63))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_63, 5f, 10, false);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_106, 0, 0);
			}
			break;
		case 5:
			if (__LIB_0__::func_121(iLocal_106))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_106))
				{
					__LIB_11__::func_797("*** Telling Mary Ann to play waypoint recording");
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_106, "fan3_pedJog", 0, 0, -1);
				}
			}
			break;
		case 7:
			break;
		default:
			break;
	}
}

int func_335(var uParam0)//Position - 0x2C5B1
{
	struct<3> Var0;
	float fVar1;
	if (__LIB_0__::func_121(iLocal_106))
	{
		if (iLocal_101 < iLocal_102)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_106, true) };
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, *(uParam0[iLocal_101 /*3*/]), true);
			if (fVar1 < 6f)
			{
				iLocal_101++;
				__LIB_11__::func_796("*** UPDATED Mary Ann position = ", iLocal_101);
				if (iLocal_101 >= iLocal_102)
				{
					__LIB_11__::func_797("*** Mary Ann position >= max positions");
					return 1;
				}
				if (iLocal_56 == 1)
				{
					if (iLocal_101 != iLocal_102)
					{
						TASK::CLEAR_PED_TASKS(iLocal_106);
						__LIB_11__::func_797("*** Clearing Mary Ann tasks (ma_pDoCheckpoints())");
						func_333();
					}
					else
					{
						__LIB_11__::func_797("*** Mary Ann position = max position and she is stuck... this wasn't caught by the previous check?!");
					}
				}
			}
		}
		else if (iLocal_101 >= iLocal_102)
		{
			__LIB_11__::func_797("*** Mary Ann's checkpoints have been manipulated by some sort of fix before being checked");
			__LIB_11__::func_797("... and she should finish the race without hitting the final checkpoint");
			return 1;
		}
	}
	return 0;
}

void func_336()//Position - 0x2C66F
{
	if (__LIB_0__::func_121(iLocal_106) && __LIB_1__::func_183(iLocal_63))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_106, iLocal_63, false))
		{
			func_328(5);
		}
	}
}

void func_337()//Position - 0x2C69F
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	if (iLocal_56 == 3 && iLocal_55 == 3)
	{
		if (iLocal_103 == 1)
		{
			if (__LIB_0__::func_121(iLocal_106) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::ARE_STRINGS_EQUAL(sLocal_107, "Fan3_pedBike"))
				{
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_107, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0);
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_106, true), true) > 65f && iVar0 > 26) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
					{
						if (__LIB_0__::func_121(iLocal_63))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_107, ENTITY::GET_ENTITY_COORDS(iLocal_63, true), &uVar1);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_107, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar0);
							}
							iVar0 = (iVar0 - 5);
							TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_107, iVar0, &Var2);
							TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_107, iVar0 + 1, &Var3);
							if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_106, true), 3f) && !CAM::IS_SPHERE_VISIBLE(Var2, 3f))
							{
								fVar4 = ENTITY::GET_ENTITY_SPEED(iLocal_106);
								ENTITY::SET_ENTITY_COORDS(iLocal_63, Var2, true, false, false, true);
								__LIB_20__::func_718(iLocal_63, Var3);
								if (!PED::IS_PED_IN_VEHICLE(iLocal_106, iLocal_63, false))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_106, iLocal_63, -1);
								}
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_106, iLocal_63, sLocal_107, 786485, 0, 24, -1, -1f, false, 2f);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_63, fVar4);
								__LIB_11__::func_796("*** Teleported Mary Ann to waypoint ", iVar0);
								if (iVar0 < 14)
								{
									iLocal_101 = 0;
								}
								else if (iVar0 < 26)
								{
									iLocal_101 = 1;
								}
								else if (iVar0 < 35)
								{
									iLocal_101 = 2;
								}
								else if (iVar0 < 45)
								{
									iLocal_101 = 3;
								}
								else if (iVar0 < 53)
								{
									iLocal_101 = 4;
								}
								else if (iVar0 < 60)
								{
									iLocal_101 = 5;
								}
								else if (iVar0 < 68)
								{
									iLocal_101 = 6;
								}
								else if (iVar0 < 79)
								{
									iLocal_101 = 7;
								}
								else if (iVar0 < 98)
								{
									iLocal_101 = 8;
								}
								else if (iVar0 < 135)
								{
									iLocal_101 = 9;
								}
								else
								{
									iLocal_101 = 9;
								}
							}
							else
							{
								__LIB_11__::func_797("*** Trying to teleport, but points are visible!!");
							}
						}
					}
				}
			}
		}
	}
}

void func_340()//Position - 0x2C932
{
	if (func_331())
	{
		if (func_335(&Local_79))
		{
			func_328(4);
		}
		else
		{
			func_341();
			func_333();
		}
	}
}

void func_341()//Position - 0x2C95A
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -151.02936f, 6589.512f, 7.479042f, -164.08327f, 6577.416f, 9.015114f, 6f, false, true, 0))
	{
		iLocal_130 = 0;
		__LIB_11__::func_797("*** Detected player failed bridge jump");
	}
	if (!iLocal_130)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -149.37775f, 6592.4775f, 1.723418f, -167.0964f, 6574.6772f, 7.915183f, 21.25f, false, true, 0))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) < 30f)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_JMPFAIL", 7, 1, 0, 0))
					{
						iLocal_130 = 1;
					}
				}
			}
		}
	}
}

void func_342()//Position - 0x2CA0C
{
	if (__LIB_0__::func_121(iLocal_106) && __LIB_1__::func_183(iLocal_63))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_106, iLocal_63, false))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
				{
					__LIB_11__::func_797("Adding Mary Ann's bike to mix group!");
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_63, "FANATIC_MIX_MARY_BIKE", 0f);
				}
			}
			func_328(3);
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_63, true))
		{
			if (iLocal_63 == iLocal_61)
			{
				iLocal_63 = iLocal_60;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_106);
				__LIB_11__::func_797("*** Clearing Mary Ann tasks (ma_pDoToBikeTask())");
				if (__LIB_0__::func_121(iLocal_63) && __LIB_0__::func_121(iLocal_106))
				{
					__LIB_11__::func_797("Making Mary Ann use default player's bike");
					TASK::TASK_ENTER_VEHICLE(iLocal_106, iLocal_63, 20000, -1, 3f, 1, 0);
				}
			}
			else if (iLocal_63 == iLocal_60)
			{
				iLocal_63 = iLocal_61;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_106);
				__LIB_11__::func_797("*** Clearing Mary Ann tasks (ma_pDoToBikeTask())");
				if (__LIB_0__::func_121(iLocal_63) && __LIB_0__::func_121(iLocal_106))
				{
					__LIB_11__::func_797("Making Mary Ann use default opponent bike");
					TASK::TASK_ENTER_VEHICLE(iLocal_106, iLocal_63, 20000, -1, 3f, 1, 0);
				}
			}
		}
	}
}

void func_343()//Position - 0x2CB0B
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	fVar2 = 2f;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_106, true), true);
	if (fVar0 > 45f)
	{
		fVar0 = 45f;
	}
	fVar1 = (fVar0 / 100f);
	if (iLocal_103 == 2)
	{
		if (iLocal_56 == 1)
		{
			if (__LIB_0__::func_121(iLocal_106))
			{
				fVar2 = (fVar2 - fVar1);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_106, (fVar2 + 0.2f));
				if (bLocal_137)
				{
					__LIB_11__::func_978("fDist is", fVar0);
					__LIB_11__::func_978("Setting fMoveRatio to", fVar2);
				}
			}
		}
		else if (iLocal_56 == 5)
		{
			if (__LIB_0__::func_121(iLocal_106))
			{
				fVar2 = (fVar2 - fVar1);
				fVar2 = (fVar2 + 0.5f);
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_106))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_106, fVar2, false);
				}
				if (bLocal_137)
				{
					__LIB_11__::func_978("fDist is", fVar0);
					__LIB_11__::func_978("Setting fMoveRatio to", fVar2);
				}
			}
		}
		else if (iLocal_56 == 3)
		{
			if (fVar0 < 5f)
			{
				fVar0 = 5f;
				fVar1 = (fVar0 / 100f);
			}
			if (__LIB_0__::func_121(iLocal_63))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBike") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBikePrep"))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_107, ENTITY::GET_ENTITY_COORDS(iLocal_63, true), &iVar3);
						if (MISC::ARE_STRINGS_EQUAL(sLocal_107, "Fan3_pedBike"))
						{
							if (iVar3 < 98 || iVar3 >= 107)
							{
								fVar4 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sLocal_107, iVar3);
								fVar1 = (fVar1 * 10f);
								fVar4 = ((fVar4 - fVar1) - 7.5f);
								if (bLocal_137)
								{
									__LIB_11__::func_978("fRatioModifier is ", fVar1);
									__LIB_11__::func_978("Setting fPlaybackSpd to ", fVar4);
									__LIB_11__::func_978("Actual entity speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_106));
								}
								TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_63, fVar4);
							}
							if (iVar3 > 93 && iVar3 < 98)
							{
								__LIB_11__::func_797("**** SWITCHING TO JUMP PREP");
								sLocal_107 = "Fan3_pedBikePrep";
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_106, iLocal_63, sLocal_107, 262144, 0, 24, -1, -1f, false, 2f);
							}
						}
						else
						{
							func_344(iVar3);
						}
					}
					else
					{
						func_344(0);
					}
				}
			}
		}
	}
	else if (iLocal_56 == 1)
	{
		if (__LIB_0__::func_121(iLocal_106))
		{
			fVar2 = (fVar2 + fVar1);
			fVar2 = (fVar2 + 0.9f);
			if (fVar2 > 3f)
			{
				fVar2 = 3f;
			}
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_106, fVar2);
			if (bLocal_137)
			{
				__LIB_11__::func_978("fDist is ", fVar0);
				__LIB_11__::func_978("Setting fMoveRatio to ", fVar2);
				__LIB_11__::func_978("Actual speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_106));
			}
		}
	}
	else if (iLocal_56 == 5)
	{
		fVar2 = (fVar2 + fVar1);
		fVar2 = (fVar2 + 0.4f);
		if (fVar0 <= 3f)
		{
			fVar2 = (fVar2 + 0.12f);
		}
		if (fVar2 > 3f)
		{
			fVar2 = 3f;
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_106))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_106, fVar2, false);
		}
		if (bLocal_137)
		{
			__LIB_11__::func_978("fDist is ", fVar0);
			__LIB_11__::func_978("Setting fMoveRatio to ", fVar2);
			__LIB_11__::func_978("Actual speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_106));
		}
	}
	else if (iLocal_56 == 3)
	{
		if (__LIB_0__::func_121(iLocal_63))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_107, ENTITY::GET_ENTITY_COORDS(iLocal_63, true), &iVar5);
				if (MISC::ARE_STRINGS_EQUAL(sLocal_107, "Fan3_pedBike"))
				{
					if (iVar5 < 98 || iVar5 >= 107)
					{
						fVar6 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sLocal_107, iVar5);
						fVar1 = (fVar1 * 10f);
						fVar6 = ((fVar6 + fVar1) + 3f);
						if (bLocal_137)
						{
							__LIB_11__::func_978("fRatioModifier is ", fVar1);
							__LIB_11__::func_978("Setting fPlaybackSpd to ", fVar6);
							__LIB_11__::func_978("Actual entity speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_106));
						}
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_63, fVar6);
					}
					if (iVar5 > 93 && iVar5 < 98)
					{
						__LIB_11__::func_797("**** SWITCHING TO JUMP PREP");
						sLocal_107 = "Fan3_pedBikePrep";
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_106, iLocal_63, sLocal_107, 262160, 0, 24, -1, -1f, false, 2f);
					}
				}
				else
				{
					func_344(iVar5);
				}
			}
			else
			{
				func_344(0);
			}
		}
	}
}

void func_344(int iParam0)//Position - 0x2CED7
{
	float fVar0;
	if (__LIB_0__::func_121(iLocal_63))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
		{
			if (iParam0 >= 7)
			{
				if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_63) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
				{
					__LIB_11__::func_797("******* USING RECORDING NOW");
					iLocal_128 = 1;
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_63, 500, "Fan3_MaryAnnBikeJump", (20f + 1f), 262144);
					VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_63, 1250, 262144, true);
				}
			}
			if (fLocal_598 == 0f)
			{
				fLocal_598 = ENTITY::GET_ENTITY_SPEED(iLocal_106);
			}
			if (iParam0 >= 7 && iParam0 <= 16)
			{
				fVar0 = (fLocal_598 + 0.1f);
				if (fVar0 > 20f)
				{
					fVar0 = 20f;
				}
				fLocal_598 = fVar0;
			}
			if (iParam0 >= 20)
			{
				__LIB_11__::func_797("******* SWITCHING BACK TO WAYPOINT");
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63))
				{
					__LIB_11__::func_797("******* STOPPING PLAYBACK");
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_63);
				}
				sLocal_107 = "Fan3_pedBike";
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_106, iLocal_63, sLocal_107, 786485, 0, 24, -1, -1f, false, 2f);
				iLocal_128 = 0;
			}
		}
		else
		{
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_107, ENTITY::GET_ENTITY_COORDS(iLocal_63, true), &iParam0);
			__LIB_11__::func_796("DOING RECORDING, CLOSEST WP IS: ", iParam0);
			if (iParam0 >= 20)
			{
				__LIB_11__::func_797("******* SWITCHING BACK TO WAYPOINT");
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_63) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_63))
				{
					__LIB_11__::func_797("******* STOPPING PLAYBACK");
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_63);
				}
				sLocal_107 = "Fan3_pedBike";
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_106, iLocal_63, sLocal_107, 786485, 0, 24, -1, -1f, false, 2f);
				iLocal_128 = 0;
			}
		}
	}
}

void func_346()//Position - 0x2D067
{
	if (func_335(&Local_78))
	{
		__LIB_11__::func_797("*** Mary Ann swim complete");
		func_328(2);
	}
	if (iLocal_101 >= 6)
	{
		if (__LIB_0__::func_121(iLocal_106))
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_106, 2f);
		}
	}
}

void func_350()//Position - 0x2D1B4
{
	if (iLocal_134)
	{
		if (__LIB_0__::func_75())
		{
			__LIB_6__::func_771();
		}
		else if (iLocal_56 == 3 || iLocal_56 == 2)
		{
			switch (iLocal_110)
			{
				case 0:
					if (__LIB_35__::func_901(&uLocal_164, "FAN3AUD", "FAN3_PUSH", "FAN3_PUSH_1", 8, 0, 0))
					{
						iLocal_110++;
						iLocal_134 = 0;
						__LIB_11__::func_797("Push warning given: 1...");
						iLocal_98 = MISC::GET_GAME_TIMER();
					}
					break;
				case 1:
					if (__LIB_35__::func_901(&uLocal_164, "FAN3AUD", "FAN3_PUSH", "FAN3_PUSH_2", 8, 0, 0))
					{
						iLocal_110++;
						iLocal_134 = 0;
						__LIB_11__::func_797("Push warning given: 2...");
						iLocal_98 = MISC::GET_GAME_TIMER();
					}
					break;
				case 2:
					__LIB_11__::func_797("Push warning given: 3, you fail...");
					func_351();
					break;
			}
		}
		else if (iLocal_56 == 1)
		{
			switch (iLocal_110)
			{
				case 0:
				case 1:
				case 2:
					if (__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_IMP", 7, 0, 0, 0))
					{
						iLocal_134 = 0;
						__LIB_11__::func_796("Swim push warning given: ", iLocal_110);
						iLocal_98 = MISC::GET_GAME_TIMER();
						iLocal_110++;
					}
					break;
				}
			}
	}
}

void func_351()//Position - 0x2D2DD
{
	if (__LIB_0__::func_75())
	{
		__LIB_6__::func_771();
		__LIB_10__::func_617(&uLocal_164, "FAN3AUD", "FAN3_SCARED", 9, 1, 0);
	}
	else
	{
		__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_SCARED", 9, 1, 0, 0);
	}
	__LIB_0__::func_523(&iLocal_96);
	PED::SET_PED_KEEP_TASK(iLocal_106, true);
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_106, false))
	{
		TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_106, PED::GET_VEHICLE_PED_IS_IN(iLocal_106, false), PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 100f, 0.1f, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_106, 2, true);
		__LIB_11__::func_797("Setting Mary Ann Use Vehicle flee attribute");
	}
	else
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_106, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
	}
	if (__LIB_0__::func_121(iLocal_72))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 130, true);
		PED::SET_PED_KEEP_TASK(iLocal_106, true);
		TASK::TASK_SMART_FLEE_PED(iLocal_106, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
	}
	func_281(7);
}

void func_353()//Position - 0x2D40E
{
	if (__LIB_0__::func_121(iLocal_106))
	{
		if ((__LIB_32__::func_572(iLocal_106, 1, 0, 0, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_106, true), 40f, false)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_106, PLAYER::PLAYER_PED_ID(), true))
		{
			func_351();
		}
		if (__LIB_8__::func_538(PLAYER::PLAYER_PED_ID(), iLocal_106) < 1f)
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				func_351();
			}
		}
		if (iLocal_56 == 3 || iLocal_56 == 2)
		{
			if (!__LIB_11__::func_325(&uLocal_546, ENTITY::GET_ENTITY_COORDS(iLocal_106, true)))
			{
				__LIB_11__::func_797("Mary Ann not detected in race area! Failing the mission for this!!");
				func_351();
			}
			if (!iLocal_134)
			{
				if (__LIB_1__::func_183(iLocal_62) && __LIB_1__::func_183(iLocal_63))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_62, iLocal_63) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_62, iLocal_63))
						{
							__LIB_11__::func_797("Player's bike touched Mary Ann's bike!");
						}
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63))
						{
							__LIB_11__::func_797("The player touched Mary Ann's bike!");
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_98) > 2000)
						{
							iLocal_134 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_56 == 1)
		{
			if (!iLocal_134)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_106) && iLocal_103 == 1)
				{
					__LIB_11__::func_797("The player touched Mary Ann's during swim!");
					if ((MISC::GET_GAME_TIMER() - iLocal_98) > 2000)
					{
						iLocal_134 = 1;
					}
				}
			}
		}
		if (iLocal_103 == 2)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_106, true), true) >= 300f)
			{
				func_281(3);
			}
		}
	}
}

void func_354()//Position - 0x2D58C
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_106, false))
		{
			Local_89 = { ENTITY::GET_ENTITY_COORDS(iLocal_106, true) };
		}
	}
	if (iLocal_55 != 7 || !CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_55 < 2)
		{
			if (iLocal_100 < 7)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_78[iLocal_100 /*3*/], true);
			}
			else if (iLocal_100 == 7)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_78[6 /*3*/], true);
			}
		}
		else if (iLocal_55 < 4)
		{
			if (iLocal_100 < 11)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_79[iLocal_100 /*3*/], true);
			}
			else if (iLocal_100 == 11)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_79[10 /*3*/], true);
			}
		}
		else if (iLocal_55 == 4 || iLocal_55 == 5)
		{
			if (iLocal_100 < 11)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_80[iLocal_100 /*3*/], true);
			}
			else if (iLocal_100 == 11)
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_80[(iLocal_100 - 1) /*3*/], true);
			}
		}
		else
		{
			__LIB_11__::func_797("Trying to update the race logic when not in a race stage? Mission failed just now?");
		}
		if (iLocal_56 < 2)
		{
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89, Local_78[iLocal_101 /*3*/], true);
		}
		else if (iLocal_56 < 4)
		{
			if (iLocal_101 < 11)
			{
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89, Local_79[iLocal_101 /*3*/], true);
			}
			else if (iLocal_101 == 11)
			{
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89, Local_79[10 /*3*/], true);
			}
		}
		else if (iLocal_56 != 6)
		{
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_89, Local_80[iLocal_101 /*3*/], true);
		}
		if (!iLocal_121)
		{
			if (iLocal_55 < iLocal_56)
			{
				iLocal_103 = 2;
			}
			else if (iLocal_55 > iLocal_56)
			{
				iLocal_103 = 1;
			}
			else if (iLocal_100 < iLocal_101)
			{
				iLocal_103 = 2;
			}
			else if (iLocal_100 > iLocal_101)
			{
				iLocal_103 = 1;
			}
			else if (fVar1 < fVar2)
			{
				iLocal_103 = 1;
			}
			else
			{
				iLocal_103 = 2;
			}
		}
		iLocal_159 = ((MISC::GET_GAME_TIMER() - iLocal_158) + iLocal_160);
		__LIB_1__::func_428();
		__LIB_32__::func_793(iLocal_159, "", -1, -1, "", iLocal_103, 2, "", 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
	}
}

void func_367()//Position - 0x2E2EC
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	struct<3> Var8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	struct<3> Var13;
	func_354();
	func_327();
	func_324();
	func_321();
	if (!iLocal_140)
	{
		func_380();
		func_379();
	}
	func_318();
	func_378();
	if (iLocal_91 != 0)
	{
		iLocal_92 = (iLocal_92 - 25);
		if (iLocal_92 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_91);
		}
	}
	switch (iLocal_57)
	{
		case 0:
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 1);
			__LIB_11__::func_797("DOING OFF BIKE SETUP");
			iLocal_57 = 1;
			__LIB_11__::func_797("DOING OFF BIKE RUNNING");
			break;
		case 1:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (__LIB_6__::func_762(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 7f, 10, 1056964608, 0, 1, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					__LIB_11__::func_797("Telling player to leave bike...");
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (!iLocal_139)
				{
					func_375();
					if (func_370())
					{
						iLocal_139 = 1;
					}
				}
				else
				{
					iLocal_57 = 2;
				}
			}
			break;
		case 2:
			__LIB_11__::func_797("DOING OFF BIKE CLEANUP");
			iLocal_99 = 11;
			HUD::CLEAR_PRINTS();
			__LIB_0__::func_210("FATIC3_6", 7500, 1);
			if (iLocal_145)
			{
				iLocal_93 = __LIB_10__::func_658(Local_80[iLocal_100 /*3*/], 5, 0);
				HUD::SET_BLIP_COLOUR(iLocal_93, 5);
				if (iLocal_100 == (iLocal_99 - 1))
				{
					iLocal_105 = func_284(func_286(iLocal_100, &Local_80));
					HUD::GET_HUD_COLOUR(iLocal_105, &uVar4, &uVar5, &uVar6, &uVar7);
					Var8 = { Local_80[iLocal_100 /*3*/] };
					iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(26, Local_80[iLocal_100 /*3*/] + Vector(0.1f, 0f, 0f), Var8, 3.2f, 254, 207, 12, 100, 0);
				}
				else
				{
					iLocal_105 = func_284(func_286(iLocal_100, &Local_80));
					HUD::GET_HUD_COLOUR(iLocal_105, &uVar9, &uVar10, &uVar11, &uVar12);
					Var13 = { Local_80[iLocal_100 + 1 /*3*/] };
					iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(func_286(iLocal_100, &Local_80), Local_80[iLocal_100 /*3*/], Var13, 3.2f, 254, 207, 12, 100, 0);
				}
				iLocal_145 = 0;
			}
			else
			{
				func_368(&Local_80);
				iLocal_100 = 0;
			}
			iLocal_119 = MISC::GET_GAME_TIMER();
			if (iLocal_140)
			{
				iLocal_140 = 0;
			}
			iLocal_55 = 5;
			iLocal_57 = 0;
			break;
	}
}

void func_368(var uParam0)//Position - 0x2E52F
{
	__LIB_11__::func_797("*** Creating first blip");
	iLocal_93 = __LIB_10__::func_658(*(uParam0[iLocal_100 /*3*/]), 5, 0);
	HUD::SET_BLIP_COLOUR(iLocal_93, 5);
	HUD::SET_BLIP_SCALE(iLocal_93, 1.2f);
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_93, false);
	if (iLocal_100 < (iLocal_99 - 1))
	{
		iLocal_94 = __LIB_10__::func_658(*(uParam0[iLocal_100 + 1 /*3*/]), 5, 0);
		HUD::SET_BLIP_COLOUR(iLocal_94, 5);
		if (iLocal_100 == (iLocal_99 - 2))
		{
			HUD::SET_BLIP_SCALE(iLocal_94, 1.2f);
			HUD::SET_BLIP_SPRITE(iLocal_94, 38);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_94, false);
		}
		else
		{
			HUD::SET_BLIP_SCALE(iLocal_94, 0.7f);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_94, false);
		}
	}
	__LIB_11__::func_796("***current_position: ", iLocal_100);
	func_369(uParam0);
}

void func_369(var uParam0)//Position - 0x2E5E6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	if (iLocal_100 == (iLocal_99 - 1))
	{
		iLocal_105 = func_284(func_286(iLocal_100, uParam0));
		HUD::GET_HUD_COLOUR(iLocal_105, &iVar0, &iVar1, &iVar2, &iVar3);
		switch (iLocal_55)
		{
			case 1:
				iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(10, *(uParam0[iLocal_100 /*3*/]), Local_79[0 /*3*/], 3.2f, iVar0, iVar1, iVar2, iVar3, 0);
				break;
			case 2:
			case 3:
				iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(10, *(uParam0[iLocal_100 /*3*/]) + Vector(2f, 0f, 0f), Local_80[0 /*3*/], 3.2f, iVar0, iVar1, iVar2, iVar3, 0);
				break;
			case 5:
				iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(10, *(uParam0[iLocal_100 /*3*/]) + Vector(0.1f, 0f, 0f), *(uParam0[iLocal_100 /*3*/]), 3.2f, iVar0, iVar1, iVar2, iVar3, 0);
				break;
		}
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_90, 1.6f, 1.6f, 100f);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_100 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
			if (iLocal_90 != 0)
			{
				if (fVar4 > 100f)
				{
					HUD::GET_HUD_COLOUR(13, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar0, iVar1, iVar2, iVar3);
					HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar0, iVar1, iVar2, iVar3);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = SYSTEM::ROUND((fVar4 * 2.4f));
					if (iVar3 < 60)
					{
						iVar3 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar0, iVar1, iVar2, iVar3);
					HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = SYSTEM::ROUND((fVar4 * 2.4f));
					if (iVar3 < 60)
					{
						iVar3 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar0, iVar1, iVar2, iVar3);
				}
			}
		}
	}
	else
	{
		iLocal_105 = func_284(func_286(iLocal_100, uParam0));
		HUD::GET_HUD_COLOUR(iLocal_105, &iVar5, &iVar6, &iVar7, &iVar8);
		if (iLocal_55 == 1 && iLocal_100 == 0)
		{
			iLocal_105 = func_284(6);
			HUD::GET_HUD_COLOUR(iLocal_105, &iVar5, &iVar6, &iVar7, &iVar8);
			iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(6, *(uParam0[iLocal_100 /*3*/]) + Vector(2f, 0f, 0f), *(uParam0[iLocal_100 + 1 /*3*/]), 3.2f, iVar5, iVar6, iVar7, iVar8, 0);
		}
		else
		{
			iLocal_105 = func_284(6);
			HUD::GET_HUD_COLOUR(iLocal_105, &iVar5, &iVar6, &iVar7, &iVar8);
			iLocal_90 = GRAPHICS::CREATE_CHECKPOINT(func_286(iLocal_100, uParam0), *(uParam0[iLocal_100 /*3*/]) + Vector(1.7f, 0f, 0f), *(uParam0[iLocal_100 + 1 /*3*/]), 3.2f, iVar5, iVar6, iVar7, iVar8, 0);
		}
		HUD::GET_HUD_COLOUR(13, &iVar5, &iVar6, &iVar7, &iVar8);
		GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar5, iVar6, iVar7, iVar8);
		HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
		GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar5, iVar6, iVar7, iVar8);
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_90, 1.6f, 1.6f, 100f);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_100 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
			if (iLocal_90 != 0)
			{
				if (fVar9 > 100f)
				{
					HUD::GET_HUD_COLOUR(13, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar5, iVar6, iVar7, iVar8);
					HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar5, iVar6, iVar7, iVar8);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = SYSTEM::ROUND((fVar9 * 2.4f));
					if (iVar8 < 60)
					{
						iVar8 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_90, iVar5, iVar6, iVar7, iVar8);
					HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = SYSTEM::ROUND((fVar9 * 2.4f));
					if (iVar8 < 60)
					{
						iVar8 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_90, iVar5, iVar6, iVar7, iVar8);
				}
			}
		}
	}
}

int func_370()//Position - 0x2E9C7
{
	STREAMING::REQUEST_MODEL(joaat("baller"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_BeachVesp_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_MusclBeac_02"));
	STREAMING::REQUEST_MODEL(joaat("A_F_Y_Runner_01"));
	STREAMING::REQUEST_MODEL(iLocal_59);
	STREAMING::REQUEST_MODEL(joaat("scorcher"));
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic3");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1maryann_stretchidle_b");
	TASK::REQUEST_WAYPOINT_RECORDING("fan3_pedJog");
	TASK::REQUEST_WAYPOINT_RECORDING("fan3_dogroute");
	TASK::REQUEST_WAYPOINT_RECORDING("fan3_ownerroute");
	if ((((((((((!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3") || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1maryann_stretchidle_b")) || !STREAMING::HAS_MODEL_LOADED(joaat("baller"))) || !STREAMING::HAS_MODEL_LOADED(joaat("scorcher"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_BeachVesp_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("A_F_Y_Runner_01"))) || !STREAMING::HAS_MODEL_LOADED(iLocal_59)) || !STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_MusclBeac_02"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_pedJog")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_dogroute")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_ownerroute"))
	{
		return 0;
	}
	iLocal_111 = 0;
	iLocal_112 = 0;
	iLocal_113 = 0;
	iLocal_114 = 0;
	__LIB_11__::func_32(&iLocal_66);
	iLocal_66 = VEHICLE::CREATE_VEHICLE(joaat("baller"), 12.086388f, 6967.0215f, 10.150966f, 0.588968f, true, true, false);
	if (__LIB_1__::func_183(iLocal_66))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_66, 5f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_66, 400f);
	}
	__LIB_0__::func_0(&iLocal_72);
	__LIB_0__::func_123(&iLocal_77);
	iLocal_72 = PED::CREATE_PED(26, joaat("A_M_Y_BeachVesp_01"), 14.1481f, 6966.5366f, 9.486f, 335.3788f, true, true);
	iLocal_77 = OBJECT::CREATE_OBJECT(joaat("prop_binoc_01"), 14.1481f, 6966.5366f, 9.486f, true, true, false);
	if (__LIB_0__::func_121(iLocal_72))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_72, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_72, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_72, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_72, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_72, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_72, 8, 0, 0, 0);
		PED::SET_PED_CAN_RAGDOLL(iLocal_72, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_77, iLocal_72, PED::GET_PED_BONE_INDEX(iLocal_72, 18905), 0.12f, 0f, 0.1f, -22f, 90f, -20f, true, false, false, false, 2, true, 0);
		TASK::TASK_PLAY_ANIM(iLocal_72, "rcmfanatic3", "binoculars", 8f, -8f, -1, 1, 0f, false, false, false);
		__LIB_0__::func_203(&uLocal_329, 4, iLocal_72, "FAN3BIRDWATCHER", 0, 1);
	}
	__LIB_0__::func_0(&iLocal_73);
	iLocal_73 = PED::CREATE_PED(26, joaat("A_M_Y_MusclBeac_02"), 64.7329f, 6938.6245f, 12.2245f, 241.6f, true, true);
	if (__LIB_0__::func_121(iLocal_73))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_73, true);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_73, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_73, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_73, 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_73, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_73, 8, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_73, "rcmfanatic3", "base", 8f, -8f, -1, 1, 0f, false, false, false);
	}
	__LIB_0__::func_0(&iLocal_74);
	iLocal_74 = PED::CREATE_PED(26, joaat("A_F_Y_Runner_01"), 76.5829f, 6957.7534f, 10.3747f, 30.24f, true, true);
	if (__LIB_0__::func_121(iLocal_74))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_74, true);
		TASK::TASK_PLAY_ANIM(iLocal_74, "rcmfanatic1maryann_stretchidle_b", "idle_e", 8f, -8f, -1, 1, 0f, false, false, false);
	}
	__LIB_0__::func_0(&iLocal_75);
	iLocal_75 = PED::CREATE_PED(26, iLocal_59, 114.038f, 6900.039f, 20.455f, 56.723f, true, true);
	if (__LIB_0__::func_121(iLocal_75))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_75);
	}
	__LIB_0__::func_0(&iLocal_76);
	__LIB_11__::func_32(&iLocal_67);
	iLocal_67 = VEHICLE::CREATE_VEHICLE(joaat("scorcher"), Local_68, fLocal_69, true, true, false);
	if (__LIB_1__::func_183(iLocal_67))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_67, 5f);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Hiker_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("patriot"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_MusclBeac_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_59);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_binoc_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_Hiker_01"));
	__LIB_11__::func_329(&uLocal_494);
	__LIB_11__::func_328(&uLocal_494, 42.25f, 6775.99f, 20.035f);
	__LIB_11__::func_328(&uLocal_494, 70.9f, 6811.02f, 16.56f);
	__LIB_11__::func_328(&uLocal_494, 30.55f, 6908.24f, 12.57f);
	__LIB_11__::func_328(&uLocal_494, 17.22f, 6966.57f, 9.87f);
	__LIB_11__::func_328(&uLocal_494, 42.16f, 7088.71f, 0.65f);
	__LIB_11__::func_328(&uLocal_494, 133.71f, 7050.03f, 0.35f);
	__LIB_11__::func_328(&uLocal_494, 119.44f, 6923.47f, 19.92f);
	__LIB_11__::func_328(&uLocal_494, 144.19f, 6821.13f, 21.8f);
	__LIB_11__::func_328(&uLocal_494, 128.37f, 6764.95f, 26.39f);
	__LIB_11__::func_328(&uLocal_494, 49.68f, 6736.11f, 30.31f);
	__LIB_11__::func_327(&uLocal_494);
	__LIB_0__::func_203(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_0__::func_203(&uLocal_164, 3, iLocal_106, "MARYANN", 0, 1);
	if (!iLocal_140)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RUN");
		__LIB_11__::func_797("Starting run music");
	}
	return 1;
}

void func_375()//Position - 0x2F000
{
	__LIB_0__::func_124(&iLocal_70, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_71, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_65);
	TASK::REMOVE_WAYPOINT_RECORDING("Fan3_baddriver");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic3");
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-191.09845f, 6550.964f, 10.097297f, -199.40993f, 6542.312f, 11.097295f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-226.3857f, 6498.877f, 9.2147f, -173.1313f, 6595.771f, 20.7218f, true, true);
}

void func_378()//Position - 0x2F23E
{
	if (iLocal_55 == 3)
	{
		if (__LIB_1__::func_183(iLocal_65) && __LIB_0__::func_121(iLocal_70))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -402.2801f, 6407.981f, 9.086394f, -382.6009f, 6364.857f, 16.762478f, 5f, false, true, 0))
			{
				if (!iLocal_127)
				{
					__LIB_11__::func_797("Starting bad driver");
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_65, true, 1);
					__LIB_0__::func_203(&uLocal_329, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_70, iLocal_65, "Fan3_baddriver", 786469, 0, 0, -1, -1f, false, 2f);
					iLocal_127 = 1;
				}
			}
			else if (iLocal_127)
			{
				if (__LIB_0__::func_76(iLocal_65, PLAYER::PLAYER_PED_ID(), 1) < 15f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_65, 4000, 0, false);
				}
				if (__LIB_0__::func_76(iLocal_65, PLAYER::PLAYER_PED_ID(), 1) < 6f)
				{
					__LIB_11__::func_797("Play conversation");
					if (!__LIB_0__::func_75())
					{
						__LIB_35__::func_536(&uLocal_329, "FAN3AUD", "FAN3_SHOUT", 7, 0, 0, 0);
					}
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_65))
				{
					__LIB_11__::func_797("bad_driver_car no longer needed");
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_65, false, 1);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_65, true);
					__LIB_0__::func_106(&iLocal_65);
					iLocal_127 = 0;
				}
			}
		}
	}
}

void func_379()//Position - 0x2F364
{
	if (!__LIB_0__::func_121(iLocal_60) || !__LIB_0__::func_121(iLocal_61))
	{
		if (iLocal_56 >= 3)
		{
			func_281(2);
		}
		else
		{
			func_281(1);
		}
	}
}

void func_380()//Position - 0x2F396
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_62, false))
		{
			if (iLocal_56 >= 3)
			{
				func_281(2);
			}
			else
			{
				func_281(1);
			}
		}
	}
}

void func_381()//Position - 0x2F3C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	func_327();
	func_354();
	if (iLocal_91 != 0)
	{
		iLocal_92 = (iLocal_92 - 25);
		if (iLocal_92 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_91);
		}
	}
	switch (iLocal_57)
	{
		case 0:
			__LIB_11__::func_797("DOING BIKE SETUP");
			iLocal_57 = 1;
			__LIB_11__::func_797("DOING BIKE RUNNING");
			break;
		case 1:
			func_324();
			func_321();
			func_380();
			func_379();
			func_318();
			func_378();
			func_458();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_0__::func_523(&iLocal_93);
				__LIB_0__::func_523(&iLocal_94);
				iLocal_93 = __LIB_10__::func_727(iLocal_62, 1, 5);
				GRAPHICS::DELETE_CHECKPOINT(iLocal_90);
				if (iLocal_125 == 0)
				{
					__LIB_0__::func_210("FATIC3_BACKON", 7500, 1);
					iLocal_125 = 1;
				}
				iLocal_145 = 1;
				iLocal_55 = 2;
				iLocal_57 = 0;
			}
			else
			{
				if (__LIB_0__::func_405("FATIC3_BACKON", 0, 0))
				{
					__LIB_11__::func_797("Clearing 'FATIC3_BACKON' print");
					HUD::CLEAR_PRINTS();
				}
				if (func_283(&Local_79))
				{
					__LIB_11__::func_797("Player finished bike section, going into cleanup");
					iLocal_57 = 2;
				}
			}
			break;
		case 2:
			__LIB_11__::func_797("DOING BIKE CLEANUP");
			iLocal_100 = 0;
			iLocal_99 = 11;
			iLocal_145 = 0;
			if (iLocal_55 < iLocal_56)
			{
				__LIB_11__::func_797("Player lost cycling");
				iLocal_104 = 0;
			}
			else
			{
				__LIB_11__::func_797("Player won cycling");
				iLocal_104 = 1;
			}
			__LIB_42__::func_415(2, "Jog section", 0, 0, 0, 1);
			Global_100441.f_12[0] = iLocal_159;
			iLocal_55 = 4;
			iLocal_57 = 0;
			break;
	}
}

void func_458()//Position - 0x3657C
{
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (__LIB_0__::func_121(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (!iLocal_162)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -162.93051f, 6574.679f, 11.035428f, -166.7214f, 6578.5586f, 15.140646f, 3.5f, false, true, 0))
				{
					RECORDING::REPLAY_START_EVENT(3);
					iLocal_162 = 1;
					__LIB_11__::func_797("*** Started tracking jump replay");
				}
			}
			else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -152.12108f, 6592.1953f, 8.325163f, -149.19452f, 6588.7183f, 13.289552f, 5.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -183.96875f, 6611.616f, -1.050815f, -146.16302f, 6575.147f, 7.485405f, 46.5f, false, true, 0)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -182.59041f, 6607.4736f, 0.027168f, -143.88004f, 6571.712f, 37.02929f, 70.75f, false, true, 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_162 = 0;
				__LIB_11__::func_797("*** Stopped tracking jump replay");
			}
		}
	}
	else if (iLocal_162)
	{
		__LIB_11__::func_797("*** Stopped tracking jump replay (player not in vehicle)");
		iLocal_162 = 0;
		RECORDING::REPLAY_STOP_EVENT();
	}
}

void func_459()//Position - 0x366D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	func_327();
	func_354();
	func_324();
	func_321();
	func_380();
	func_379();
	func_318();
	func_378();
	if (iLocal_91 != 0)
	{
		iLocal_92 = (iLocal_92 - 25);
		if (iLocal_92 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_91);
		}
	}
	switch (iLocal_57)
	{
		case 0:
			__LIB_11__::func_797("DOING TO BIKE SETUP");
			iLocal_57 = 1;
			iLocal_129 = 0;
			iLocal_127 = 0;
			iLocal_140 = 0;
			__LIB_11__::func_797("DOING TO BIKE RUNNING");
			break;
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_62 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (iLocal_60 == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) || iLocal_61 == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_0__::func_523(&iLocal_93);
					__LIB_0__::func_523(&iLocal_95);
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 15f, 1);
					iLocal_57 = 2;
				}
			}
			break;
		case 2:
			__LIB_11__::func_797("DOING TO BIKE CLEANUP");
			if (!iLocal_138)
			{
				__LIB_0__::func_371();
				if (func_460())
				{
					__LIB_11__::func_797("Loaded bike resources");
					iLocal_138 = 1;
				}
			}
			else
			{
				if (iLocal_62 == 0)
				{
					iLocal_62 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
				HUD::CLEAR_THIS_PRINT("FATIC3_12");
				if (!iLocal_145)
				{
					func_368(&Local_79);
				}
				else
				{
					iLocal_93 = __LIB_10__::func_658(Local_79[iLocal_100 /*3*/], 5, 0);
					HUD::SET_BLIP_COLOUR(iLocal_93, 5);
					if (iLocal_100 == (iLocal_99 - 1))
					{
						HUD::SET_BLIP_SPRITE(iLocal_93, 38);
					}
					if (iLocal_100 == (iLocal_99 - 2))
					{
						iLocal_94 = __LIB_10__::func_658(Local_79[iLocal_100 + 1 /*3*/], 5, 0);
						HUD::SET_BLIP_SCALE(iLocal_94, 1.2f);
						HUD::SET_BLIP_SPRITE(iLocal_94, 38);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_94, false);
					}
					else if (iLocal_100 < (iLocal_99 - 1))
					{
						iLocal_94 = __LIB_10__::func_658(Local_79[iLocal_100 + 1 /*3*/], 5, 0);
						HUD::SET_BLIP_SCALE(iLocal_94, 0.7f);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_94, false);
					}
					iLocal_145 = 0;
					func_369(&Local_79);
				}
				if (iLocal_126 == 0)
				{
					__LIB_0__::func_210("FATIC3_3", 7500, 1);
					iLocal_126 = 1;
				}
				iLocal_119 = MISC::GET_GAME_TIMER();
				iLocal_55 = 3;
				iLocal_57 = 0;
			}
			break;
	}
}

int func_460()//Position - 0x36904
{
	STREAMING::REQUEST_MODEL(joaat("patriot"));
	STREAMING::REQUEST_MODEL(joaat("A_F_M_KTown_02"));
	TASK::REQUEST_WAYPOINT_RECORDING("Fan3_baddriver");
	VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Fan3_MaryAnnBikeJump");
	TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBike");
	STREAMING::REQUEST_MODEL(joaat("S_M_M_DockWork_01"));
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic3");
	if ((((((!STREAMING::HAS_MODEL_LOADED(joaat("patriot")) || !STREAMING::HAS_MODEL_LOADED(joaat("A_F_M_KTown_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_DockWork_01"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_baddriver")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Fan3_MaryAnnBikeJump")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBike")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3"))
	{
		__LIB_11__::func_797("Waiting for bike resources");
		return 0;
	}
	__LIB_11__::func_32(&iLocal_65);
	iLocal_65 = VEHICLE::CREATE_VEHICLE(joaat("patriot"), -206.0824f, 6557.3765f, 11.0625f, 220.94f, true, true, false);
	__LIB_0__::func_0(&iLocal_70);
	if (__LIB_1__::func_183(iLocal_65) && !__LIB_0__::func_121(iLocal_70))
	{
		iLocal_70 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_65, 26, joaat("A_F_M_KTown_02"), -1, true, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("patriot"));
	if (__LIB_0__::func_121(iLocal_70))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_70, true);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_F_M_KTown_02"));
	__LIB_0__::func_0(&iLocal_71);
	iLocal_71 = PED::CREATE_PED(26, joaat("S_M_M_DockWork_01"), -185.1444f, 6561.338f, 10.1026f, 310f, true, true);
	if (__LIB_0__::func_121(iLocal_71))
	{
		TASK::TASK_PLAY_ANIM(iLocal_71, "rcmfanatic3", "KNEEL_IDLE_A", 8f, -8f, -1, 1, 0f, false, false, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_DockWork_01"));
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Local_148, Local_149, fLocal_150, false, false, false, false, false, 0, 0);
	__LIB_11__::func_329(&uLocal_494);
	__LIB_11__::func_328(&uLocal_494, -669.58f, 6153.29f, 0.45f);
	__LIB_11__::func_328(&uLocal_494, -522.75f, 6317.6f, 9.79f);
	__LIB_11__::func_328(&uLocal_494, -221.87f, 6550.84f, 8.87f);
	__LIB_11__::func_328(&uLocal_494, -220.85f, 6657.39f, 0.47f);
	__LIB_11__::func_328(&uLocal_494, -98.01f, 6746.05f, 0.66f);
	__LIB_11__::func_328(&uLocal_494, 58.62f, 6800.74f, 19.35f);
	__LIB_11__::func_328(&uLocal_494, 92.21f, 6746.91f, 37.55f);
	__LIB_11__::func_328(&uLocal_494, -346.8f, 6373.35f, 20.4f);
	__LIB_11__::func_328(&uLocal_494, -464f, 6242.33f, 27.31f);
	__LIB_11__::func_328(&uLocal_494, -478.26f, 6133.85f, 13.53f);
	__LIB_11__::func_328(&uLocal_494, -632.49f, 6112.85f, 9.95f);
	__LIB_11__::func_328(&uLocal_494, -679.62f, 6097.66f, 2.07f);
	__LIB_11__::func_328(&uLocal_494, -721.78f, 6112.86f, -0.68f);
	__LIB_11__::func_327(&uLocal_494);
	__LIB_0__::func_203(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_0__::func_203(&uLocal_164, 3, iLocal_106, "MARYANN", 0, 1);
	iLocal_128 = 0;
	if (!iLocal_140)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_CYCLE");
		__LIB_11__::func_797("Starting bike music");
	}
	return 1;
}

void func_462()//Position - 0x36C2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	func_327();
	func_354();
	func_324();
	switch (iLocal_57)
	{
		case 0:
			__LIB_11__::func_797("DOING SWIM SETUP");
			__LIB_10__::func_700(&Local_54, 0, 1);
			func_321();
			func_379();
			func_318();
			func_467();
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				__LIB_0__::func_203(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			if (__LIB_0__::func_121(iLocal_106))
			{
				__LIB_0__::func_203(&uLocal_164, 3, iLocal_106, "MARYANN", 0, 1);
			}
			iLocal_140 = 0;
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 4000, 0f, true, false);
			func_466();
			__LIB_32__::func_794(0, 1, 1);
			__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_OPENER", 8, 1, 0, 0);
			__LIB_0__::func_210("FATIC3_1", 7500, 1);
			__LIB_11__::func_797("DOING SWIM RUNNING");
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 15f, 1);
			iLocal_57 = 1;
			break;
		case 1:
			if (!Global_113386.f_18574.f_384)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					__LIB_0__::func_151("FAN_HELP" /* GXT: Running and cycling will improve your general stamina.~n~Increasing your general stamina will allow you to sprint and cycle for longer.~n~Sprinting or cycling for longer than your stamina allows will drop your health. */, -1);
					Global_113386.f_18574.f_384 = 1;
				}
			}
			func_321();
			func_379();
			func_318();
			func_467();
			func_466();
			if (iLocal_91 != 0)
			{
				iLocal_92 = (iLocal_92 - 25);
				if (iLocal_92 > 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_91, iVar0, iVar1, iVar2, iLocal_92);
				}
				else
				{
					GRAPHICS::DELETE_CHECKPOINT(iLocal_91);
				}
			}
			if (func_283(&Local_78))
			{
				iLocal_57 = 2;
			}
			break;
		case 2:
			__LIB_11__::func_797("DOING SWIM CLEANUP");
			if (__LIB_0__::func_75())
			{
				if (!__LIB_11__::func_988("FAN3_SWIMWIN") || !__LIB_11__::func_988("FAN3_SWIMLOS"))
				{
					__LIB_0__::func_296();
				}
			}
			iLocal_93 = __LIB_10__::func_727(iLocal_60, 1, 5);
			iLocal_100 = 0;
			iLocal_99 = 11;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
			{
				__LIB_0__::func_210("FATIC3_12", 7500, 1);
			}
			else
			{
				__LIB_0__::func_210("FATIC3_2", 7500, 1);
				iLocal_95 = __LIB_10__::func_727(iLocal_61, 1, 5);
			}
			if (iLocal_55 < iLocal_56)
			{
				__LIB_11__::func_797("Player lost swimming");
				iLocal_104 = 0;
			}
			else
			{
				__LIB_11__::func_797("Player won swimming");
				iLocal_104 = 1;
			}
			__LIB_42__::func_415(1, "Bike section", 0, 0, 0, 1);
			Global_100441.f_12[0] = iLocal_159;
			iLocal_138 = 0;
			iLocal_57 = 0;
			iLocal_55 = 2;
			break;
	}
}

void func_466()//Position - 0x36ED4
{
	if (iLocal_108 && __LIB_0__::func_121(iLocal_106))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_109) <= 5000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_106, 3f);
		}
	}
}

void func_467()//Position - 0x36F04
{
	if (iLocal_100 > 4)
	{
		if (!iLocal_132)
		{
			if (!PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_COLD", 8, 0, 0, 0))
					{
						iLocal_132 = 1;
					}
				}
			}
		}
	}
}

void func_468()//Position - 0x36F4A
{
	int iVar0;
	iLocal_58 = joaat("scorcher");
	if (__LIB_0__::func_294() && !iLocal_140)
	{
		__LIB_11__::func_797("Replay in progress - skipping cutscene and jumping to checkpointed stage...");
		func_500();
		iVar0 = __LIB_0__::func_315();
		__LIB_11__::func_796("ReplayStage: ", iVar0);
		if (Global_94618 == 1)
		{
			iVar0++;
			__LIB_11__::func_796("ReplayStage after shitskip: ", iVar0);
		}
		switch (iVar0)
		{
			case 0:
				func_481(1, 0);
				break;
			case 1:
				func_481(2, 0);
				break;
			case 2:
				func_481(3, 0);
				break;
			case 3:
				func_481(4, 0);
				break;
			default:
				break;
		}
	}
	else if (iLocal_123 == 0)
	{
		if (iLocal_122 == 0)
		{
			__LIB_26__::func_541("ef_3_rcm_concat", 0);
			__LIB_11__::func_797("Requesting cutscene...");
			iLocal_122 = 1;
		}
		else
		{
			__LIB_11__::func_797("Waiting for cutscene...");
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_11__::func_797("Trying to set Mary Ann component variation");
			if (__LIB_0__::func_121(iLocal_106))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_106, 0);
			}
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		iLocal_120 = 0;
		if (__LIB_18__::func_170(1, 1093140480, 0))
		{
			func_500();
			if (__LIB_0__::func_121(iLocal_106))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_106, "Mary_Ann", 0, 0, 0);
			}
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			__LIB_26__::func_252();
			PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
			CAM::STOP_GAMEPLAY_HINT(false);
			RECORDING::REPLAY_START_EVENT(1);
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			__LIB_32__::func_755(-921.5067f, 6138.8394f, 3.262831f, -903.90186f, 6142.16f, 9.201322f, 14.5f, -913.52f, 6151.76f, 4.74f, 317.56f, __LIB_9__::func_996(), 1, 1, 1, 0, 0);
			__LIB_32__::func_755(-867.7527f, 6134.8735f, -0.996085f, -913.1636f, 6140.983f, 7.133643f, 13.5f, -913.52f, 6151.76f, 4.74f, 317.56f, __LIB_9__::func_996(), 1, 1, 1, 0, 0);
			func_263(-915.46f, 6139.21f, 4.52f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			__LIB_11__::func_797("Starting cutscene...");
			iLocal_123 = 1;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_58);
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_RollingStart");
		HUD::REQUEST_ADDITIONAL_TEXT("FATIC3", 0);
		if (iLocal_120 == 0)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				__LIB_11__::func_797("*** Cam exit state pitch/heading");
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_124 = 1;
				iLocal_120 = 1;
			}
			if (func_474())
			{
				iLocal_120 = 1;
			}
			func_473();
			func_466();
		}
		else if (iLocal_120 == 1)
		{
			func_473();
			func_466();
			func_474();
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::REPLAY_STOP_EVENT();
				if (iLocal_124 == 1)
				{
					if (__LIB_0__::func_121(iLocal_106))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_106, -903.2273f, 6142.6387f, 4.1911f, true, true, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_106, 264.8848f);
					}
					if (!iLocal_135)
					{
						__LIB_11__::func_797("*** Cutscene skip detected");
						func_471(1, 1);
						func_328(1);
						if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
						iLocal_135 = 1;
					}
				}
				__LIB_42__::func_415(0, "Swim section", 0, 0, 0, 1);
				iLocal_158 = MISC::GET_GAME_TIMER();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
					if (__LIB_0__::func_121(iLocal_106))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_106, "FANATIC_MIX_MARY_ANNE", 0f);
					}
				}
				func_469();
			}
		}
	}
}

void func_469()//Position - 0x372BC
{
	func_328(1);
	STREAMING::REQUEST_MODEL(iLocal_58);
	TASK::REQUEST_WAYPOINT_RECORDING("Fan3_RollingStart");
	HUD::REQUEST_ADDITIONAL_TEXT("FATIC3", 0);
	while ((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_RollingStart") || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !STREAMING::HAS_MODEL_LOADED(iLocal_58))
	{
		func_466();
		__LIB_11__::func_797("Waiting for swim assets...");
		SYSTEM::WAIT(0);
	}
	__LIB_11__::func_329(&uLocal_494);
	__LIB_11__::func_328(&uLocal_494, -911.33f, 6156.95f, 3.78f);
	__LIB_11__::func_328(&uLocal_494, -833.3f, 6159.46f, 1.19f);
	__LIB_11__::func_328(&uLocal_494, -712.84f, 6161.51f, 0.18f);
	__LIB_11__::func_328(&uLocal_494, -653.84f, 6154.68f, 1.39f);
	__LIB_11__::func_328(&uLocal_494, -651.92f, 6134.7f, 3.2f);
	__LIB_11__::func_328(&uLocal_494, -683.51f, 6108.33f, 1.6f);
	__LIB_11__::func_328(&uLocal_494, -922.48f, 6125.13f, 5.71f);
	__LIB_11__::func_327(&uLocal_494);
	__LIB_0__::func_203(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	__LIB_0__::func_203(&uLocal_164, 3, iLocal_106, "MARYANN", 0, 1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fan3_RollingStart", true, 1f, 0.5f);
	iLocal_100 = 0;
	iLocal_99 = 7;
	iLocal_55 = 1;
	func_368(&Local_78);
	if (!iLocal_140)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_START");
		__LIB_11__::func_797("Starting swim music");
	}
	iLocal_123 = 0;
	iLocal_132 = 0;
	iLocal_119 = MISC::GET_GAME_TIMER();
	if (!__LIB_0__::func_295())
	{
		__LIB_32__::func_767(1, 1, 1, 1);
	}
	__LIB_0__::func_210("FATIC3_1", 7500, 1);
}

void func_471(bool bParam0, bool bParam1)//Position - 0x37464
{
	if (bParam0)
	{
		__LIB_32__::func_795(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_263(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_473()//Position - 0x374F6
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mary_Ann", joaat("IG_MaryAnn")))
	{
		if (__LIB_0__::func_121(iLocal_106))
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_106, 3f);
			PED::FORCE_PED_MOTION_STATE(iLocal_106, joaat("MotionState_Sprint"), false, 1, false);
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_106, Local_78[0 /*3*/], 2f, 20000, 40000f, 0.5f);
			iLocal_109 = MISC::GET_GAME_TIMER();
			iLocal_108 = 1;
			__LIB_11__::func_797("*** Forcing opponent's move state");
		}
	}
}

int func_474()//Position - 0x37561
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
	{
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 1, false);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0f, true, false);
			__LIB_11__::func_797("*** Forcing player's move state");
			return 1;
		}
	}
	return 0;
}

void func_481(int iParam0, int iParam1)//Position - 0x37760
{
	if (iLocal_55 == 6)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, true, false, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		STREAMING::REMOVE_ANIM_DICT("rcmfanatic1out_of_breath");
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		__LIB_32__::func_767(1, 1, 1, 1);
		__LIB_0__::func_84(500, 1);
	}
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	if (iParam1 == 0)
	{
		func_471(1, 1);
	}
	iLocal_140 = 1;
	if (iParam0 == 0)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			if (__LIB_0__::func_121(iLocal_106))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_106, 0f);
			}
			AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
		}
	}
	else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
		if (__LIB_0__::func_121(iLocal_106))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_106, "FANATIC_MIX_MARY_ANNE", 0f);
		}
	}
	if (iParam0 == 0)
	{
		func_499();
	}
	else if (iParam0 == 1)
	{
		__LIB_32__::func_795(1, 1, 1);
		func_498();
	}
	else if (iParam0 == 2)
	{
		__LIB_32__::func_795(1, 1, 1);
		func_497();
	}
	else if (iParam0 == 3)
	{
		__LIB_32__::func_795(1, 1, 1);
		func_485();
	}
	else if (iParam0 == 4)
	{
		__LIB_32__::func_795(1, 1, 1);
		func_482();
	}
}

void func_482()//Position - 0x3787A
{
	func_226();
	func_225();
	HUD::CLEAR_PRINTS();
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
	iLocal_115 = 0;
	iLocal_55 = 6;
	iLocal_145 = 0;
	while (!func_370())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_123 = 0;
	iLocal_140 = 0;
	func_484();
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
	}
}

void func_484()//Position - 0x37990
{
	switch (iLocal_55)
	{
		case 0:
			if (__LIB_0__::func_121(iLocal_106))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_106);
				__LIB_11__::func_797("*** Clearing Mary Ann tasks (ma_pSkip())");
				ENTITY::SET_ENTITY_COORDS(iLocal_106, -910.3204f, 6144.248f, 4.2755f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_106, 312.68f);
				__LIB_0__::func_523(&iLocal_96);
				func_328(0);
			}
			break;
		case 1:
			if (__LIB_0__::func_121(iLocal_106))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_106);
				__LIB_11__::func_797("*** Clearing Mary Ann tasks (ma_pSkip() CASE MS_SWIM)");
				ENTITY::SET_ENTITY_COORDS(iLocal_106, -903.2273f, 6142.6387f, 4.1911f, true, true, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_106, 264.8848f);
				__LIB_0__::func_523(&iLocal_96);
				func_328(1);
			}
			break;
		case 2:
		case 3:
			if (__LIB_0__::func_121(iLocal_106))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_106);
				__LIB_11__::func_797("*** Clearing Mary Ann tasks (ma_pSkip() CASE MS_BIKE)");
				ENTITY::SET_ENTITY_COORDS(iLocal_106, -674.4872f, 6134.1387f, 1.072f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_106, 259.44f);
				__LIB_0__::func_523(&iLocal_96);
				func_328(2);
			}
			break;
		case 4:
		case 5:
			iLocal_63 = iLocal_61;
			if (__LIB_0__::func_121(iLocal_106))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_106);
				__LIB_11__::func_797("*** Clearing Mary Ann tasks (ma_pSkip() CASE MS_RUN)");
				ENTITY::SET_ENTITY_COORDS(iLocal_106, 51.1448f, 6773.212f, 19.2801f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_106, 313.146f);
				__LIB_0__::func_523(&iLocal_96);
				func_328(5);
			}
			break;
	}
}

void func_485()//Position - 0x37B03
{
	func_226();
	func_225();
	if (!__LIB_0__::func_295())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_83, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_87);
		__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	if (__LIB_0__::func_121(iLocal_106))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_106);
		__LIB_11__::func_797("*** Clearing Mary Ann tasks (Run skip)");
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RESTART3");
	iLocal_158 = MISC::GET_GAME_TIMER();
	if (!__LIB_0__::func_295())
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0f, true, false);
	}
	iLocal_55 = 4;
	iLocal_57 = 0;
	iLocal_145 = 0;
	iLocal_121 = 0;
	iLocal_100 = 0;
	iLocal_99 = 11;
	func_488();
	if (__LIB_1__::func_183(iLocal_60))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_60, 49.016113f, 6771.453f, 20.055803f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_60, -62.490368f);
	}
	if (__LIB_1__::func_183(iLocal_61))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_61, 52.37f, 6767.48f, 20.66f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_61, 312.42f);
	}
	__LIB_42__::func_415(2, "Jog section", 1, 0, 0, 1);
	iLocal_108 = 0;
	iLocal_109 = -1;
	func_375();
	func_486();
	while (!func_370() || !func_330())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_140 = 0;
	func_484();
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0f, true, false);
		SYSTEM::WAIT(1000);
	}
	__LIB_32__::func_794(1, 1, 1);
}

void func_486()//Position - 0x37C95
{
	__LIB_0__::func_106(&iLocal_66);
	__LIB_0__::func_124(&iLocal_72, 1, 0, 1);
	__LIB_0__::func_122(&iLocal_77, 0);
	__LIB_0__::func_124(&iLocal_74, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_75, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_76, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_67);
	__LIB_0__::func_124(&iLocal_73, 1, 0, 1);
}

void func_488()//Position - 0x37D18
{
	if (__LIB_1__::func_183(iLocal_63))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_63, 0f);
		}
	}
	if (__LIB_1__::func_183(iLocal_60) && __LIB_1__::func_183(iLocal_61))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_60))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_60);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_61))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_61);
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_60, -664.34f, 6138.38f, 1.2f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_60, 235f);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_60, 1);
		ENTITY::SET_ENTITY_COORDS(iLocal_61, -664.32f, 6133.73f, 2.4f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_61, -84.69f);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_61, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_60, 5f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_61, 5f);
	}
	else
	{
		if (!__LIB_1__::func_183(iLocal_60))
		{
			iLocal_60 = VEHICLE::CREATE_VEHICLE(iLocal_58, -664.34f, 6138.38f, 1.2f, 235f, true, true, false);
			ENTITY::SET_ENTITY_HEADING(iLocal_60, 235f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_60, 1);
		}
		if (!__LIB_1__::func_183(iLocal_61))
		{
			iLocal_61 = VEHICLE::CREATE_VEHICLE(iLocal_58, -664.32f, 6133.73f, 2.4f, -84.69f, true, true, false);
			ENTITY::SET_ENTITY_HEADING(iLocal_61, -84.69f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_61, 2);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_60, 5f);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_61, 5f);
	}
	iLocal_63 = 0;
	iLocal_62 = 0;
}

void func_497()//Position - 0x38097
{
	if (!__LIB_0__::func_295())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_82, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_86);
		__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RESTART2");
	iLocal_158 = MISC::GET_GAME_TIMER();
	fLocal_598 = 0f;
	if (!__LIB_0__::func_295())
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 1200, 0f, true, false);
	}
	func_226();
	func_225();
	iLocal_93 = __LIB_10__::func_727(iLocal_60, 1, 5);
	iLocal_55 = 2;
	iLocal_57 = 0;
	iLocal_63 = iLocal_61;
	iLocal_100 = 0;
	iLocal_99 = 11;
	if (!__LIB_0__::func_121(iLocal_60) || !__LIB_0__::func_121(iLocal_61))
	{
	}
	iLocal_145 = 0;
	iLocal_134 = 0;
	iLocal_138 = 0;
	iLocal_139 = 0;
	iLocal_121 = 0;
	iLocal_98 = 0;
	iLocal_110 = 0;
	iLocal_108 = 0;
	iLocal_109 = -1;
	__LIB_42__::func_415(1, "Bike section", 0, 0, 0, 1);
	__LIB_0__::func_371();
	func_486();
	while (!func_460())
	{
		SYSTEM::WAIT(0);
		iLocal_138 = 1;
	}
	func_488();
	func_484();
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 1200, 0f, true, false);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Run"), false, 0, false);
		SYSTEM::WAIT(1000);
	}
	__LIB_32__::func_794(1, 1, 1);
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_210("FATIC3_2", 7500, 1);
}

void func_498()//Position - 0x381F9
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(false);
	}
	iLocal_158 = MISC::GET_GAME_TIMER();
	func_226();
	func_225();
	if (__LIB_0__::func_121(iLocal_106))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_106, -903.2273f, 6142.6387f, 4.1911f, true, true, false, true);
		ENTITY::SET_ENTITY_HEADING(iLocal_106, 264.8848f);
	}
	if (!__LIB_0__::func_295())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_81, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_85);
		__LIB_20__::func_665(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1112014848, 12, 5000, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RESTART1");
	__LIB_11__::func_797("Skipping to swim");
	iLocal_55 = 1;
	iLocal_57 = 0;
	iLocal_101 = 0;
	iLocal_100 = 0;
	iLocal_99 = 7;
	iLocal_102 = 7;
	iLocal_135 = 0;
	iLocal_145 = 0;
	iLocal_121 = 0;
	iLocal_138 = 0;
	iLocal_139 = 0;
	iLocal_108 = 1;
	iLocal_109 = MISC::GET_GAME_TIMER();
	func_486();
	func_375();
	func_469();
	func_488();
	func_484();
	if (__LIB_0__::func_295())
	{
		__LIB_6__::func_775(0, -1, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 4000, 0f, true, false);
		SYSTEM::WAIT(500);
	}
	__LIB_32__::func_794(1, 1, 1);
}

void func_499()//Position - 0x38310
{
	func_226();
	func_225();
	iLocal_55 = 0;
	iLocal_57 = 0;
	__LIB_11__::func_797("Skipping to intro");
	iLocal_101 = 0;
	iLocal_100 = 0;
	iLocal_99 = 7;
	iLocal_102 = 7;
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
	iLocal_120 = 0;
	iLocal_122 = 0;
	iLocal_123 = 0;
	iLocal_145 = 0;
	iLocal_108 = 0;
	iLocal_109 = -1;
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -909.0488f, 6142.6167f, 4.2883f, true, false, false, true);
	func_484();
	__LIB_32__::func_794(1, 1, 1);
}

void func_500()//Position - 0x38386
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_163[0 /*7*/][iVar0 /*2*/] = 0;
		Local_163[1 /*7*/][iVar0 /*2*/] = 0;
		Local_163[2 /*7*/][iVar0 /*2*/] = 0;
		iVar0++;
	}
	Local_163[0 /*7*/][0 /*2*/].f_1 = "FAN3_SW1";
	Local_163[0 /*7*/][1 /*2*/].f_1 = "FAN3_SW2";
	Local_163[1 /*7*/][0 /*2*/].f_1 = "FAN3_1WON1";
	Local_163[1 /*7*/][2 /*2*/].f_1 = "FAN3_GEN2";
	Local_163[2 /*7*/][1 /*2*/].f_1 = "FAN3_1LOSS2";
	Local_163[2 /*7*/][2 /*2*/].f_1 = "FAN3_GEN2";
	Local_163[3 /*7*/][1 /*2*/].f_1 = "FAN3_2WON2";
	Local_163[3 /*7*/][2 /*2*/].f_1 = "FAN3_GEN3";
	Local_163[4 /*7*/][0 /*2*/].f_1 = "FAN3_2LOSS1";
	Local_163[4 /*7*/][2 /*2*/].f_1 = "FAN3_GEN3";
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		if (func_502(3))
		{
			Local_163[2 /*7*/][0 /*2*/].f_1 = "FAN3_1LOSS1B";
			Local_163[1 /*7*/][1 /*2*/].f_1 = "FAN3_1WON2B";
			Local_163[3 /*7*/][0 /*2*/].f_1 = "FAN3_2WON1B";
			Local_163[4 /*7*/][1 /*2*/].f_1 = "FAN3_2LOSS2B";
		}
		else
		{
			Local_163[2 /*7*/][0 /*2*/].f_1 = "FAN3_1LOSS1A";
			Local_163[3 /*7*/][0 /*2*/].f_1 = "FAN3_2WON1A";
			Local_163[1 /*7*/][1 /*2*/].f_1 = "FAN3_1WON2A";
			Local_163[4 /*7*/][1 /*2*/].f_1 = "FAN3_2LOSS2A";
		}
	}
	Local_79[0 /*3*/] = { -624.82f, 6164.18f, 2.71f };
	Local_79[1 /*3*/] = { -569.97f, 6172.85f, 5.51f };
	Local_79[2 /*3*/] = { -510.38f, 6213.4f, 9.35f };
	Local_79[3 /*3*/] = { -497.67f, 6272.69f, 10.6f };
	Local_79[4 /*3*/] = { -476.6988f, 6310.297f, 12.6412f };
	Local_79[5 /*3*/] = { -452.44f, 6356.24f, 11.58f };
	Local_79[6 /*3*/] = { -410.0162f, 6381.5264f, 13.0197f };
	Local_79[7 /*3*/] = { -324.23f, 6429.89f, 11.94f };
	Local_79[8 /*3*/] = { -197.2431f, 6543.6426f, 10.0969f };
	Local_79[9 /*3*/] = { -5.04f, 6728.77f, 18.69f };
	Local_79[10 /*3*/] = { 50.6f, 6770.79f, 19.5f };
	Local_80[0 /*3*/] = { 90.94f, 6804.34f, 18.4f };
	Local_80[1 /*3*/] = { 117.87f, 6829.98f, 15.7f };
	Local_80[2 /*3*/] = { 101.52f, 6851.33f, 14.67f };
	Local_80[3 /*3*/] = { 67.33f, 6889.14f, 12.48f };
	Local_80[4 /*3*/] = { 48.75f, 6927.61f, 13.21f };
	Local_80[5 /*3*/] = { 61.77f, 6955.45f, 10.81f };
	Local_80[6 /*3*/] = { 47.11f, 6965.58f, 9.81f };
	Local_80[7 /*3*/] = { 36.23f, 6995.43f, 7.34f };
	Local_80[8 /*3*/] = { 51.32f, 7024.07f, 8.87f };
	Local_80[9 /*3*/] = { 68.42f, 7030.54f, 11.75f };
	Local_80[10 /*3*/] = { 61.6f, 7049.5f, 15.45f };
	__LIB_11__::func_329(&uLocal_546);
	__LIB_11__::func_328(&uLocal_546, -669.58f, 6153.29f, 0.45f);
	__LIB_11__::func_328(&uLocal_546, -522.75f, 6317.6f, 9.79f);
	__LIB_11__::func_328(&uLocal_546, -221.87f, 6550.84f, 8.87f);
	__LIB_11__::func_328(&uLocal_546, -220.85f, 6657.39f, 0.47f);
	__LIB_11__::func_328(&uLocal_546, -98.01f, 6746.05f, 0.66f);
	__LIB_11__::func_328(&uLocal_546, 82.53f, 6814.59f, 17.29f);
	__LIB_11__::func_328(&uLocal_546, 100.83f, 6770.48f, 28.49f);
	__LIB_11__::func_328(&uLocal_546, -346.8f, 6373.35f, 20.4f);
	__LIB_11__::func_328(&uLocal_546, -464f, 6242.33f, 27.31f);
	__LIB_11__::func_328(&uLocal_546, -478.26f, 6133.85f, 13.53f);
	__LIB_11__::func_328(&uLocal_546, -632.49f, 6112.85f, 9.95f);
	__LIB_11__::func_328(&uLocal_546, -679.62f, 6097.66f, 2.07f);
	__LIB_11__::func_328(&uLocal_546, -721.78f, 6112.86f, -0.68f);
	__LIB_11__::func_327(&uLocal_546);
	func_501(-888.0333f, 6142.6577f, 2.3874f, -679.05f, 6139.86f, 0.7f, &Local_78, 7);
	iLocal_58 = joaat("scorcher");
	sLocal_107 = "Fan3_pedBike";
	if (__LIB_0__::func_294())
	{
		iLocal_160 = Global_100441.f_12[0];
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-191.09845f, 6550.964f, 10.097297f, -199.40993f, 6542.312f, 11.097295f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-226.3857f, 6498.877f, 9.2147f, -173.1313f, 6595.771f, 20.7218f, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_148, Local_149, fLocal_150, false, false, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	STREAMING::REQUEST_MODEL(iLocal_58);
	STREAMING::REQUEST_ANIM_SET("FEMALE_FAST_RUNNER");
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_58) || !STREAMING::HAS_ANIM_SET_LOADED("FEMALE_FAST_RUNNER"))
	{
		SYSTEM::WAIT(0);
	}
	func_488();
	if (__LIB_0__::func_121(iLocal_106))
	{
		PED::SET_PED_DIES_IN_WATER(iLocal_106, false);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_106, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_106, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_106, true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_106, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_106, true, 1);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_106, 1);
		PED::SET_PED_MOVEMENT_CLIPSET(iLocal_106, "FEMALE_FAST_RUNNER", 0.25f);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_106, false);
	}
}

void func_501(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3)//Position - 0x3894A
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	Var1 = { Param1 - Param0 };
	Var1 = { Var1 / FtoV(SYSTEM::TO_FLOAT((iParam3 - 1))) };
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		*(uParam2[iVar0 /*3*/]) = { Param0 + Var1 * FtoV(SYSTEM::TO_FLOAT(iVar0)) };
		iVar0++;
	}
}

int func_502(int iParam0)//Position - 0x389A0
{
	int iVar0;
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_503(iParam0, 12))
			{
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (iVar0 != 12)
				{
					if (!func_503(iParam0, iVar0))
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
			break;
		case 3:
			if (func_173(PLAYER::PLAYER_PED_ID(), 12, 6))
			{
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_503(int iParam0, int iParam1)//Position - 0x38A1A
{
	int iVar0;
	if (iParam1 != 14)
	{
		iVar0 = func_66(PLAYER::PLAYER_PED_ID(), iParam1, -1);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					if ((((((iVar0 == 69 || (iVar0 >= 17 && iVar0 <= 32)) || iVar0 == 69) || (iVar0 >= 77 && iVar0 <= 84)) || (iVar0 >= 85 && iVar0 <= 90)) || (iVar0 >= 113 && iVar0 <= 128)) || (iVar0 >= 171 && iVar0 <= 173))
					{
						return 1;
					}
					break;
				case 4:
					if (((iVar0 == 40 || (iVar0 >= 41 && iVar0 <= 45)) || (iVar0 >= 89 && iVar0 <= 91)) || (iVar0 >= 96 && iVar0 <= 111))
					{
						return 1;
					}
					break;
				case 6:
					if (((iVar0 == 6 || iVar0 == 13) || iVar0 == 7) || (iVar0 >= 20 && iVar0 <= 29))
					{
						return 1;
					}
					break;
				case 8:
					if (((iVar0 == 0 || iVar0 == 10) || iVar0 == 11) || iVar0 == 16)
					{
						return 1;
					}
					break;
				case 9:
					if (iVar0 == 0)
					{
						return 1;
					}
					break;
				case 12:
					if (iVar0 == 13 || iVar0 == 9)
					{
						return 1;
					}
					break;
				case 14:
					iVar0 = func_66(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if ((((((iVar0 == 58 || (iVar0 >= 70 && iVar0 <= 79)) || iVar0 == 61) || (iVar0 >= 62 && iVar0 <= 69)) || (iVar0 >= 80 && iVar0 <= 89)) || (iVar0 >= 91 && iVar0 <= 102)) || (iVar0 >= 103 && iVar0 <= 110))
					{
						return 1;
					}
					if (!__LIB_11__::func_977(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 3:
					if ((((((((iVar0 >= 0 && iVar0 <= 15) || (iVar0 >= 18 && iVar0 <= 26)) || iVar0 == 53) || (iVar0 >= 54 && iVar0 <= 69)) || (iVar0 >= 79 && iVar0 <= 94)) || iVar0 == 95) || (iVar0 >= 120 && iVar0 <= 135)) || (iVar0 >= 162 && iVar0 <= 177))
					{
						return 1;
					}
					break;
				case 4:
					if (((iVar0 == 17 || iVar0 == 33) || (iVar0 >= 54 && iVar0 <= 61)) || iVar0 == 91)
					{
						return 1;
					}
					break;
				case 6:
					if ((iVar0 == 8 || iVar0 == 11) || iVar0 == 34)
					{
						return 1;
					}
					break;
				case 8:
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 10) || iVar0 == 15)
					{
						return 1;
					}
					break;
				case 9:
					if (iVar0 == 0 || iVar0 == 7)
					{
						return 1;
					}
					break;
				case 12:
					if (iVar0 == 5 || iVar0 == 9)
					{
						return 1;
					}
					break;
				case 14:
					iVar0 = func_66(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if (((((((iVar0 == 89 || (iVar0 >= 100 && iVar0 <= 109)) || iVar0 == 111) || (iVar0 >= 113 && iVar0 <= 122)) || (iVar0 >= 123 && iVar0 <= 132)) || (iVar0 >= 133 && iVar0 <= 142)) || (iVar0 >= 90 && iVar0 <= 99)) || (iVar0 >= 143 && iVar0 <= 152))
					{
						return 1;
					}
					if (!__LIB_11__::func_977(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				default:
					return 1;
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_505()//Position - 0x38EF8
{
	int iVar0;
	__LIB_24__::func_930();
	switch (iLocal_57)
	{
		case 0:
			__LIB_11__::func_797("Doing leadin init");
			if (__LIB_0__::func_294() && !iLocal_140)
			{
				__LIB_11__::func_797("Replay in progress - skipping leadin & cutscene and jumping to checkpointed stage...");
				func_500();
				if (__LIB_0__::func_121(iLocal_106))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_106, false);
				}
				iVar0 = __LIB_0__::func_315();
				__LIB_11__::func_796("ReplayStage: ", iVar0);
				if (Global_94618 == 1)
				{
					iVar0++;
					__LIB_11__::func_796("ReplayStage after shitskip: ", iVar0);
				}
				switch (iVar0)
				{
					case 0:
						if (__LIB_0__::func_294())
						{
							__LIB_0__::func_370(Local_81, fLocal_85, 1, 0);
						}
						func_481(1, 1);
						break;
					case 1:
						if (__LIB_0__::func_294())
						{
							__LIB_0__::func_370(Local_82, fLocal_86, 1, 0);
						}
						func_481(2, 1);
						break;
					case 2:
						if (__LIB_0__::func_294())
						{
							__LIB_0__::func_370(Local_83, fLocal_87, 1, 0);
						}
						func_481(3, 1);
						break;
					case 3:
						if (__LIB_0__::func_294())
						{
							__LIB_0__::func_370(Local_84, fLocal_88, 1, 0);
						}
						func_481(4, 1);
						break;
					default:
						break;
				}
			}
			else if (__LIB_0__::func_2(0))
			{
				__LIB_11__::func_797("Skipping leadin because repeat play is active");
				iLocal_57 = 2;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmfanatic3");
			__LIB_0__::func_203(&uLocal_164, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			__LIB_0__::func_203(&uLocal_164, 3, iLocal_106, "MARYANN", 0, 1);
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) <= 1.5f)
			{
				if (__LIB_0__::func_75())
				{
					__LIB_6__::func_771();
				}
				__LIB_11__::func_797("Player too close to Mary Ann, starting cutscene early");
				iLocal_57 = 2;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3"))
			{
				if (__LIB_0__::func_121(iLocal_106))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_106, "rcmfanatic3", "ef_3_rcm_loop_maryann", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_106, "rcmfanatic3", "ef_3_rcm_loop_maryann") < 0.1f)
						{
							TASK::TASK_PLAY_ANIM(iLocal_106, "rcmfanatic3", "ef_3_rcm_action_maryann", 8f, -8f, -1, 2, 0f, false, false, false);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_106, false);
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("EF_3_RCM_CONCAT", 2, 8);
							iLocal_122 = 1;
							if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
							{
								if (__LIB_0__::func_121(iLocal_106))
								{
									CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_106, 0f, 0f, -0.5f, true, 30000, 2000, 2000, 0);
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) <= 7f)
									{
										__LIB_11__::func_797("Using FOV 40 instead");
										fLocal_153 = 40f;
									}
									CAM::SET_GAMEPLAY_HINT_FOV(fLocal_153);
									CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_154);
									CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_155);
									CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_156);
									CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_157);
									CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
								}
							}
							else
							{
								CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
							}
							__LIB_26__::func_367(1, 1, 0, 0, 0, 0, 0);
							__LIB_11__::func_797("Done Mary Ann leadin anim");
							iLocal_57 = 1;
						}
					}
					else if (iLocal_55 == -1)
					{
						__LIB_11__::func_797("Mary Ann not in leadin loop, starting cutscene early");
						iLocal_57 = 2;
					}
					else
					{
						__LIB_11__::func_797("Mary Ann not in leadin loop, but not in leadin stage, not doing anything!");
					}
				}
			}
			break;
		case 1:
			if (__LIB_1__::func_197(iLocal_106))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_106, "rcmfanatic3", "ef_3_rcm_action_maryann", 3))
				{
					if (!iLocal_152)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_106, "rcmfanatic3", "ef_3_rcm_action_maryann") > 0.17f)
						{
							if (__LIB_35__::func_536(&uLocal_164, "FAN3AUD", "FAN3_LDI", 8, 0, 0, 0))
							{
								iLocal_152 = 1;
							}
						}
					}
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (__LIB_0__::func_121(iLocal_106))
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_106, 0f, 0f, -0.5f, true, 30000, 2000, 2000, 0);
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) <= 7f)
							{
								__LIB_11__::func_797("Using FOV 40 instead");
								fLocal_153 = 40f;
							}
							CAM::SET_GAMEPLAY_HINT_FOV(fLocal_153);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_154);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_155);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(fLocal_156);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(fLocal_157);
							CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
						}
					}
					else
					{
						CAM::STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(true);
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_106, "rcmfanatic3", "ef_3_rcm_action_maryann") > 0.9f)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_106, false);
						__LIB_11__::func_797("Mary Ann leadin anim over");
						iLocal_57 = 2;
					}
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_106, 1) <= 2.5f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_106, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						__LIB_11__::func_797("Player too close to Mary Ann, starting cutscene early");
					}
				}
				else
				{
					__LIB_11__::func_797("Mary Ann not playing leadin anim anymore - skip to cutscene for safety");
					iLocal_57 = 2;
				}
			}
			break;
		case 2:
			__LIB_11__::func_797("Doing leadin cleanup");
			iLocal_57 = 0;
			iLocal_55 = 0;
			break;
	}
}

void func_528()//Position - 0x39EE8
{
	if (__LIB_0__::func_121(Local_54.f_28[0]))
	{
		iLocal_106 = Local_54.f_28[0];
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_106, 2, true);
		PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_151);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_106, iLocal_151);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_151, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_151);
		PED::SET_DRIVER_RACING_MODIFIER(iLocal_106, 0.5f);
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("IG_MaryAnn"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_MaryAnn")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_106 = PED::CREATE_PED(26, joaat("IG_MaryAnn"), 809.66f, 1279.76f, 360.49f, 122.53f, true, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_106, 2, true);
		PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_151);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_106, iLocal_151);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_151, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_151);
		PED::SET_DRIVER_RACING_MODIFIER(iLocal_106, 0.5f);
	}
	iLocal_56 = 0;
}

int func_530(var uParam0)//Position - 0x3A0D1
{
	int iVar0[5];
	int iVar1;
	bool bVar2;
	struct<3> Var3;
	iVar0[0] = uLocal_50;
	iVar0[1] = joaat("prop_beach_towel_01");
	iVar0[2] = joaat("prop_energy_drink");
	iVar0[3] = joaat("prop_freeweight_01");
	iVar0[4] = joaat("prop_freeweight_02");
	switch (iLocal_49)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_3_RCM_CONCAT", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar1]);
				iVar1++;
			}
			__LIB_11__::func_794(&(uParam0->f_48), "rcmfanatic3", "ef_3_rcm_loop_maryann", 0);
			iLocal_49 = 1;
			break;
		case 1:
			if (!__LIB_10__::func_716(&iVar0) || !__LIB_20__::func_273(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_49 = 2;
			break;
		case 2:
			bVar2 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (__LIB_26__::func_256(&(uParam0->f_28[0]), 61, -915.6f, 6139.192f, 5.525f, 111.24f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -915.6f, 6139.192f, 5.525f, true, false, true);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_28[0], 2.52f, 0f, 111.24f, 0, false);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				Var3 = { -916.6389f, 6137.046f, 4.7157f };
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], Var3, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[0], -916.6389f, 6137.046f, 4.7157f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], 1.7f, 19.1067f, 79.515f, 0, true);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[0], -0.0949f, 0.1369f, 0.6325f, 0.7564f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				Var3 = { -917.7f, 6138.89f, 4.72f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &(Var3.f_2), false, false);
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], Var3, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], -6.625818f, 1.30159f, -1.248891f, 0, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
			{
				Var3 = { -915.6122f, 6137.662f, 4.6129f };
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[3], Var3, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[2], -915.6122f, 6137.662f, 4.6129f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], -1.6843f, 2.1363f, -0.0913f, 0, true);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[2], -0.0147f, 0.0187f, -0.0011f, 0.9997f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
			{
				Var3 = { -915.4199f, 6137.8555f, 4.6221f };
				uParam0->f_41[3] = OBJECT::CREATE_OBJECT(iVar0[4], Var3, true, true, false);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[3], -915.4199f, 6137.8555f, 4.6221f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[3], -5.793f, 1.496f, -36.333f, 2, true);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[3], -0.0439f, 0.0281f, -0.312f, 0.9487f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], true);
			}
			if (bVar2)
			{
				iLocal_49 = 3;
			}
			break;
		case 3:
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

void func_540()//Position - 0x3A6CF
{
	__LIB_26__::func_252();
	if (__LIB_26__::func_257())
	{
	}
	if (__LIB_0__::func_75())
	{
		__LIB_0__::func_296();
	}
	__LIB_0__::func_523(&iLocal_96);
	func_226();
	func_225();
	if (__LIB_0__::func_121(iLocal_106))
	{
		if (__LIB_1__::func_183(iLocal_67))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_106, iLocal_67, false))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_67, 20000, -1, 1f, 1, 0);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 253.0988f, 6751.9966f, 14.2161f, 1f, 0, false, 786603, -1f);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_67, 15f, 786599);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_106, iLocal_161);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
			}
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_106, ENTITY::GET_ENTITY_HEADING(iLocal_106), 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_106, true);
		__LIB_0__::func_106(&iLocal_67);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_63, 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_106))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_106, 0f);
		}
		AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
	}
	__LIB_0__::func_124(&iLocal_70, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_71, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_65);
	if (__LIB_0__::func_121(iLocal_72))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_72, 2, true);
		PED::SET_PED_KEEP_TASK(iLocal_72, true);
		if (__LIB_0__::func_121(iLocal_66) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_161);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_66, 20000, -1, 3f, 8, 0);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_161);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_72, iLocal_161);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_161);
		}
		__LIB_0__::func_124(&iLocal_72, 1, 0, 1);
	}
	__LIB_0__::func_124(&iLocal_74, 1, 0, 1);
	__LIB_0__::func_124(&iLocal_73, 1, 0, 1);
	__LIB_0__::func_106(&iLocal_66);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	__LIB_0__::func_124(&iLocal_106, 1, 1, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(129.22136f, 6658.9746f, 30.177034f, 140.87827f, 6646.8633f, 36.36416f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-191.09845f, 6550.964f, 10.097297f, -199.40993f, 6542.312f, 11.097295f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-226.3857f, 6498.877f, 9.2147f, -173.1313f, 6595.771f, 20.7218f, true, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_148, Local_149, fLocal_150, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fanatic3_assist"))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("fanatic3_assist", false, 1f, 0.5f);
		TASK::REMOVE_WAYPOINT_RECORDING("fanatic3_assist");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_pedJog"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("fan3_pedJog");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_jetskiRoute"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("Fan3_jetskiRoute");
	}
	__LIB_9__::func_485(2, 0);
	__LIB_9__::func_485(3, 0);
	__LIB_8__::func_770(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

