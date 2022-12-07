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
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	char* sLocal_51 = NULL;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	int iLocal_76[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<165> Local_77 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char[] cLocal_78[8] = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	bool bLocal_85 = 0;
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
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	int iLocal_100 = 0;
	struct<5> Local_101[31];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	struct<5> Local_109[61];
	float fLocal_110 = 0f;
	int iLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	struct<33> Local_113[26];
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	struct<24> Local_119[26];
	struct<3> Local_120 = { 0, 0, 0 } ;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_123 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_126 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_130[21];
	char[] cLocal_131[8] = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	bool bLocal_134 = 0;
	int iLocal_135 = 0;
	struct<6> Local_136[6];
	struct<18> Local_137[4];
	float fLocal_138 = 0f;
	int iLocal_139 = 0;
	int iLocal_140[4] = { 0, 0, 0, 0 };
	int iLocal_141[4] = { 0, 0, 0, 0 };
	struct<3> Local_142[13];
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	char* sLocal_151 = NULL;
	bool bLocal_152 = 0;
	struct<6> Local_153[20];
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	bool bLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169[5] = { 0, 0, 0, 0, 0 };
	int iLocal_170[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171 = 0;
	struct<3> Local_172 = { 0, 0, 0 } ;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	float fLocal_175 = 0f;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	struct<7> Local_184 = { 0, 3, 0, 0, 0, 0, 0 } ;
	var uLocal_185 = 1092616192;
	var uLocal_186 = 1101004800;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 3;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 16;
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
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
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
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	struct<3> Local_384[9];
	struct<10> Local_385[20];
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	struct<8> Local_388[27];
	struct<4> Local_389[5];
	struct<7> Local_390[17];
	struct<3> Local_391[4];
	int iLocal_392 = 0;
	char cLocal_393[24] = "";
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	struct<3> Local_397 = { 0, 0, 0 } ;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	int iLocal_408[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_409 = 16;
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
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
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
	iLocal_31 = 3;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	iLocal_42 = 1;
	iLocal_43 = 65;
	iLocal_44 = 49;
	iLocal_45 = 64;
	iLocal_49 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_50 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_61 = -1;
	iLocal_62 = -1;
	bLocal_75 = true;
	iLocal_90 = -1;
	iLocal_93 = -1;
	fLocal_96 = 0.5f;
	fLocal_97 = 0f;
	iLocal_103 = 1;
	fLocal_110 = 160f;
	cLocal_131 = "CHI2AUD";
	iLocal_177 = -1;
	iLocal_379 = -1;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_455();
		func_454(2);
	}
	fLocal_110 = 160f;
	while (true)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_135();
			func_133();
			if (iLocal_149 >= 7)
			{
				func_125();
			}
			func_123();
			func_84();
			func_3();
			func_2();
			func_1();
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("m_Chinese2", 0);
		}
		iLocal_574 = 0;
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x11D
{
	if (iLocal_402)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_401))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_401);
			iLocal_402 = 0;
		}
	}
}

int func_2()//Position - 0x140
{
	if (iLocal_403)
	{
		if (iLocal_404)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_406))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_406))
				{
					iLocal_403 = 0;
					iLocal_404 = 0;
					return 1;
				}
			}
		}
		else if (AUDIO::TRIGGER_MUSIC_EVENT(sLocal_406))
		{
			iLocal_403 = 0;
			return 1;
		}
	}
	else if (iLocal_405)
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sLocal_407))
		{
			iLocal_405 = 0;
		}
	}
	return 0;
}

void func_3()//Position - 0x1A1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			switch (Local_153[iVar0 /*6*/])
			{
				case 0:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (CUTSCENE::IS_CUTSCENE_PLAYING())
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 1:
							__LIB_32__::func_755(1992.8041f, 3053.3103f, 45.777145f, 1989.6813f, 3055.2954f, 49.090008f, 3.25f, 1995.2018f, 3062.1565f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							__LIB_32__::func_755(1994.4274f, 3045.136f, 45.340134f, 1981.9028f, 3053.235f, 49.791527f, 9.5f, 1995.2018f, 3062.1565f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							__LIB_32__::func_755(1985.4037f, 3075.0571f, 44.84953f, 2017.1017f, 3057.4348f, 53.71896f, 33f, 1995.2018f, 3062.1565f, 46.0491f, 59.7235f, 10f, 20f, 9f, 1, 1, 1, 0, 0);
							iLocal_144 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (__LIB_31__::func_732(iLocal_144) && __LIB_0__::func_529(iLocal_144, 1995.2018f, 3062.1565f, 46.0491f, 1) < 5f)
							{
								VEHICLE::REQUEST_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_144), 3);
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				case 2:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							__LIB_0__::func_296();
							__LIB_20__::func_507();
							break;
						case 0:
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2442.55f, 4967.51f, 54.35f, 1) < 1300f || __LIB_0__::func_571(39))
							{
								if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2442.55f, 4967.51f, 54.35f, 1) > 500f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						case 1:
							if (func_66("PHN2", 1, PLAYER::PLAYER_PED_ID(), "Trevor", 8, 0, "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 2:
							if (!__LIB_0__::func_75())
							{
								if (func_35("CHI2_ONEILPH", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_153[iVar0 /*6*/].f_1 = 0;
								}
							}
							break;
					}
					break;
				case 3:
					if (iLocal_149 >= 3)
					{
						Local_153[iVar0 /*6*/].f_2 = -1;
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							iLocal_383 = 0;
							Local_153[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 3000;
							break;
						case 1:
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_0__::func_300())
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (MISC::GET_GAME_TIMER() > Local_153[iVar0 /*6*/].f_5)
										{
											if (iLocal_383 < 13)
											{
												if (func_35("DRI1", 2, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													iLocal_383++;
													Local_153[iVar0 /*6*/].f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 10000));
												}
											}
											else
											{
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							break;
					}
					break;
				case 4:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (!ENTITY::IS_ENTITY_IN_AIR(iVar1))
						{
							if (__LIB_12__::func_39(6f, 2))
							{
								TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
						}
					}
					else
					{
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				case 5:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -20:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) < 250f)
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_pallet_pile_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case -19:
							if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_01")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_pallet_pile_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_02"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case -18:
							if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_02")))
							{
								STREAMING::REQUEST_MODEL(joaat("burrito"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case -17:
							if (STREAMING::HAS_MODEL_LOADED(joaat("burrito")))
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_Y_MethHead_01"));
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case -16:
							if (STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_MethHead_01")))
							{
								STREAMING::REQUEST_MODEL(joaat("prop_ld_can_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_fertilizer"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
								STREAMING::REQUEST_MODEL(joaat("dubsta"));
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank5");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@generic");
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case -15:
							if (STREAMING::HAS_MODEL_LOADED(joaat("dubsta")))
							{
								func_32(22, 0);
								func_32(8, 0);
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), false, true);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
						case 0:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) < 250f)
							{
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_01"));
								STREAMING::REQUEST_MODEL(joaat("A_M_M_Hillbilly_02"));
								STREAMING::REQUEST_MODEL(joaat("A_M_Y_MethHead_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_ld_can_01"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_fertilizer"));
								STREAMING::REQUEST_MODEL(joaat("burrito"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								if (iLocal_149 <= 3)
								{
									STREAMING::REQUEST_MODEL(joaat("prop_phone_ing"));
									STREAMING::REQUEST_MODEL(joaat("dubsta"));
								}
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank5");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_bank1");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REQUEST_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REQUEST_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REQUEST_ANIM_SET("move_m@gangster@generic");
								func_32(22, 0);
								func_32(8, 0);
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), false, true);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 1:
							if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_Hillbilly_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_MethHead_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("burrito"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_fertilizer"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_can_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank5")) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_bank1")) && STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_barrelRoll")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_variations@b")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@left")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@right")) && STREAMING::HAS_ANIM_DICT_LOADED("reaction@male_stand@big_intro@backward")) && ((iLocal_149 <= 3 && STREAMING::HAS_MODEL_LOADED(joaat("prop_phone_ing"))) || iLocal_149 > 3)) && ((iLocal_149 <= 3 && STREAMING::HAS_MODEL_LOADED(joaat("dubsta"))) || iLocal_149 > 3))
							{
								Local_153[iVar0 /*6*/].f_2 = 4;
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) > 300f)
							{
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_MethHead_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_can_01"));
								STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
								STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
								STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
								STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
								STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dubsta"));
								PATHFIND::SET_ROADS_IN_AREA(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), true, true);
								func_31(22, 1);
								func_31(8, 1);
								if (iLocal_179 != 0)
								{
									INTERIOR::UNPIN_INTERIOR(iLocal_179);
									iLocal_179 = 0;
								}
								Local_153[iVar0 /*6*/].f_2 = -20;
							}
							break;
						case 4:
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2460.0728f, 4964.176f, 46.2405f, true) > 300f)
							{
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							else if (iLocal_149 >= 3 && !func_30(22))
							{
								func_27();
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
						case 5:
							break;
					}
					break;
				case 22:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (iLocal_179 != 0)
							{
								INTERIOR::UNPIN_INTERIOR(iLocal_179);
							}
							iLocal_179 = 0;
							break;
						case 0:
							iLocal_179 = INTERIOR::GET_INTERIOR_AT_COORDS(2440.4924f, 4969.948f, 52.5247f);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						case 1:
							if (!INTERIOR::IS_VALID_INTERIOR(iLocal_179))
							{
								iLocal_179 = INTERIOR::GET_INTERIOR_AT_COORDS(2440.4924f, 4969.948f, 52.5247f);
							}
							else
							{
								INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_179);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 2:
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				case 6:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							__LIB_18__::func_191(50, 0, 0, 1, 0);
							__LIB_18__::func_191(51, 0, 0, 1, 0);
							__LIB_18__::func_191(52, 0, 0, 1, 0);
							__LIB_18__::func_191(53, 0, 0, 1, 0);
							__LIB_18__::func_191(54, 1, 0, 1, 0);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						case 1:
							break;
					}
					break;
				case 7:
					if (Local_153[iVar0 /*6*/].f_2 == 0)
					{
						iVar2 = func_18(8);
						if (iVar2 != -1)
						{
							if (!PED::IS_PED_INJURED(Local_113[iVar2 /*33*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar2 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 7)
								{
									iVar2 = func_18(9);
									if (iVar2 != -1)
									{
										if (!PED::IS_PED_INJURED(Local_113[iVar2 /*33*/]))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar2 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 7)
											{
												STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
												Local_153[iVar0 /*6*/].f_1 = 0;
											}
										}
									}
								}
							}
							else
							{
								iVar2 = func_18(9);
								if (iVar2 != -1)
								{
									if (!PED::IS_PED_INJURED(Local_113[iVar2 /*33*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar2 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 7)
										{
											STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
											Local_153[iVar0 /*6*/].f_1 = 0;
										}
									}
									else
									{
										STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
									}
								}
							}
						}
					}
					break;
				case 8:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							PED::REMOVE_SCENARIO_BLOCKING_AREAS();
							break;
						case 0:
							PED::ADD_SCENARIO_BLOCKING_AREA(Vector(58.617897f, 4972.8975f, 2445.654f) - Vector(100f, 100f, 100f), Vector(58.617897f, 4972.8975f, 2445.654f) + Vector(100f, 100f, 100f), false, true, true, true);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						case 1:
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2473.061f, 4981.4824f, 24.64584f, true) < 250f)
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						case 2:
							PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2473.061f, 4981.4824f, 24.64584f, true) > 250f)
							{
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
					}
					break;
				case 9:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							MISC::ENABLE_DISPATCH_SERVICE(3, true);
							MISC::ENABLE_DISPATCH_SERVICE(5, true);
							MISC::ENABLE_DISPATCH_SERVICE(1, true);
							MISC::ENABLE_DISPATCH_SERVICE(7, true);
							break;
						case 0:
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2578.5234f, 4982.2837f, 51.4416f, 1) < 500f)
							{
								MISC::ENABLE_DISPATCH_SERVICE(3, false);
								MISC::ENABLE_DISPATCH_SERVICE(5, false);
								MISC::ENABLE_DISPATCH_SERVICE(1, false);
								MISC::ENABLE_DISPATCH_SERVICE(7, false);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 1:
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2578.5234f, 4982.2837f, 51.4416f, 1) > 500f)
							{
								MISC::ENABLE_DISPATCH_SERVICE(3, true);
								MISC::ENABLE_DISPATCH_SERVICE(5, true);
								MISC::ENABLE_DISPATCH_SERVICE(1, true);
								MISC::ENABLE_DISPATCH_SERVICE(7, true);
								Local_153[iVar0 /*6*/].f_2 = 0;
							}
							break;
					}
					break;
				case 25:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							__LIB_0__::func_320(PLAYER::PLAYER_PED_ID(), 149);
							Local_153[iVar0 /*6*/].f_2++;
							break;
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								__LIB_0__::func_320(iVar3, 152);
								__LIB_0__::func_409(iVar3, -1);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 2:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								__LIB_0__::func_320(0, 152);
								__LIB_0__::func_409(0, -1);
								Local_153[iVar0 /*6*/].f_2 = 1;
							}
							break;
					}
					break;
				case 10:
					break;
				case 11:
					break;
				case 14:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							Local_153[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 7000;
							Local_153[iVar0 /*6*/].f_2++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_153[iVar0 /*6*/].f_5)
							{
								ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2466.385f, 4953.0957f, 44.1228f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 221f);
								TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 2475.0747f, 4945.9653f, 44.0228f, 1f, 20000, 40000f, 0.5f);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
								Local_153[iVar0 /*6*/].f_1 = 0;
							}
							break;
					}
					break;
				case 13:
					if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				case 12:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 0:
							iLocal_173 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
							if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_173))
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173, 2);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 1:
							if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173) == 3)
							{
								OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173, 4);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 2:
							if (iLocal_174 == 1)
							{
								if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173) == 5)
								{
									OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173, 6);
									AUDIO::START_AUDIO_SCENE("CHI_2_RAYFIRE");
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
									ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						case 3:
							func_15("CHN2_EXPLODE", 1, "CHN2_EXPLODE");
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				case 16:
					if (Local_153[iVar0 /*6*/].f_2 != -1)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false) || !OBJECT::DOES_PICKUP_EXIST(iLocal_176))
						{
							iLocal_180 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PETROLCAN")), false, false, true);
							if (iLocal_180 != 0)
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_178))
								{
									HUD::REMOVE_BLIP(&iLocal_178);
								}
								iLocal_178 = __LIB_6__::func_840(iLocal_180);
								func_12(1);
								__LIB_0__::func_402(0, 157);
							}
						}
						else
						{
							Local_153[iVar0 /*6*/].f_5 = 0;
							func_12(0);
							if (HUD::DOES_BLIP_EXIST(iLocal_178))
							{
								HUD::REMOVE_BLIP(&iLocal_178);
							}
							__LIB_0__::func_403(157, 0);
							if (iLocal_167 == 0)
							{
								iLocal_167 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
							}
							else
							{
								__LIB_0__::func_401(158, (iLocal_167 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"))), 1);
							}
						}
						if (func_8())
						{
							__LIB_0__::func_402(0, 157);
							Local_153[iVar0 /*6*/].f_1 = 0;
							func_32(17, 0);
						}
					}
					break;
				case 18:
					break;
				case 17:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.6714f, 4951.4385f, 43.255756f, 2454.6638f, 4957.856f, 47.891174f, 6.8125f, false, true, 0) && MISC::GET_GAME_TIMER() > Local_153[iVar0 /*6*/].f_5)
					{
						if (HUD::DOES_BLIP_EXIST(iLocal_178))
						{
							HUD::REMOVE_BLIP(&iLocal_178);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					else
					{
						switch (Local_153[iVar0 /*6*/].f_2)
						{
							case 0:
								if (!__LIB_0__::func_75())
								{
									__LIB_0__::func_325("FRMSHP", 7500, 1);
									Local_153[iVar0 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 2000;
									iLocal_178 = __LIB_0__::func_392(2450f, 4954f, 45f, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
								break;
							}
					}
					break;
				case 20:
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 0))
					{
						iLocal_380 = func_18(4);
						if (iLocal_380 != -1)
						{
							MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 0);
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (!PED::IS_PED_INJURED(Local_113[iLocal_380 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_113[iLocal_380 /*33*/].f_20))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) && ENTITY::IS_ENTITY_ATTACHED(Local_113[iLocal_380 /*33*/].f_20))
							{
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 1);
							}
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 2))
					{
						if (PED::IS_PED_INJURED(Local_113[iLocal_380 /*33*/]))
						{
							MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 2);
						}
						if (!PED::IS_PED_INJURED(Local_113[iLocal_380 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iLocal_380 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
							{
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iLocal_380 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 2 || TASK::GET_SCRIPT_TASK_STATUS(Local_113[iLocal_380 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
							{
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
							if (PED::IS_PED_IN_COMBAT(Local_113[iLocal_380 /*33*/], PLAYER::PLAYER_PED_ID()) || Local_119[iLocal_380 /*24*/].f_3 > 3)
							{
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 2);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_113[iLocal_380 /*33*/].f_20) && ENTITY::IS_ENTITY_ATTACHED(Local_113[iLocal_380 /*33*/].f_20))
					{
						ENTITY::DETACH_ENTITY(Local_113[iLocal_380 /*33*/].f_20, false, false);
					}
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 4))
					{
						iLocal_381 = func_18(5);
						if (iLocal_381 != -1)
						{
							MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 4);
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 5))
					{
						if (!PED::IS_PED_INJURED(Local_113[iLocal_381 /*33*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_113[iLocal_381 /*33*/].f_20))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_113[iLocal_381 /*33*/].f_20))
									{
										MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 5);
									}
								}
							}
						}
					}
					else if (!BitTest(Local_153[iVar0 /*6*/].f_5, 6))
					{
						if (PED::IS_PED_INJURED(Local_113[iLocal_381 /*33*/]))
						{
							MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 6);
						}
						if (!PED::IS_PED_INJURED(Local_113[iLocal_381 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iLocal_381 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
							{
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iLocal_381 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 2 || TASK::GET_SCRIPT_TASK_STATUS(Local_113[iLocal_381 /*33*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
							{
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
							if (PED::IS_PED_IN_COMBAT(Local_113[iLocal_381 /*33*/], PLAYER::PLAYER_PED_ID()) || Local_119[iLocal_381 /*24*/].f_3 > 3)
							{
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 6);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_113[iLocal_381 /*33*/].f_20) && ENTITY::IS_ENTITY_ATTACHED(Local_113[iLocal_381 /*33*/].f_20))
					{
						ENTITY::DETACH_ENTITY(Local_113[iLocal_381 /*33*/].f_20, false, false);
					}
					break;
				case 21:
					break;
				case 23:
					iVar4 = 0;
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case 1:
							iLocal_170[0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.4958f, 4970.916f, 44.5112f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[0], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[1] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.863f, 4970.595f, 44.5425f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[1], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[2] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.8955f, 4970.4175f, 44.5475f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[2], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[3] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.7954f, 4970.2456f, 44.5525f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[3], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[4] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.204f, 4970.269f, 44.5201f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[4], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[5] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.3716f, 4970.744f, 44.51f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[5], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[6] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.3716f, 4971.092f, 44.4987f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[6], -3.44f, 0f, 38.88f, 2, true);
							iLocal_170[7] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2493.7695f, 4971f, 44.6287f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[7], 3.955f, 0f, 139.68f, 2, true);
							iLocal_170[8] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2493.9797f, 4971.2793f, 44.6038f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[8], 3.955f, 0f, 139.68f, 2, true);
							iLocal_170[9] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_ld_can_01"), 2494.1042f, 4971.4375f, 44.5826f, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_170[9], 3.955f, 0f, 139.68f, 2, true);
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								ENTITY::SET_ENTITY_DYNAMIC(iLocal_170[iVar4], true);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_170[iVar4], true);
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_2++;
							break;
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_181) && !ENTITY::DOES_ENTITY_EXIST(iLocal_182))
							{
								if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), false) && OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), false))
								{
									iLocal_181 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(2493.5f, 4969.2f, 43.9f, 1f, joaat("prop_barrel_pile_03"), true, false, true);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_181, true);
									ENTITY::CREATE_MODEL_HIDE(2493.4f, 4971.8f, 43.6f, 1f, joaat("prop_pallet_pile_01"), false);
									iLocal_182 = OBJECT::CREATE_OBJECT(joaat("prop_pallet_pile_01"), 2493.4275f, 4971.7285f, 43.543625f, true, true, false);
									ENTITY::SET_ENTITY_ROTATION(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, true);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_182, true);
									func_32(24, 0);
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							else
							{
								OBJECT::DELETE_OBJECT(&iLocal_182);
								iLocal_182 = OBJECT::CREATE_OBJECT(joaat("prop_pallet_pile_01"), 2493.4275f, 4971.7285f, 43.543625f, true, true, false);
								ENTITY::SET_ENTITY_ROTATION(iLocal_182, -1.436373f, 0.176147f, -36.6601f, 2, true);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_182, true);
								func_32(24, 0);
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 2:
							iVar4 = 0;
							iVar4 = 0;
							while (iVar4 < iLocal_170)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar4]))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_170[iVar4], false);
								}
								iVar4++;
							}
							Local_153[iVar0 /*6*/].f_1 = 0;
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
					}
					break;
				case 24:
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_181))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_181, PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_181, 1) < 30f)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_181, false);
									MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 0);
								}
							}
						}
					}
					if (!BitTest(Local_153[iVar0 /*6*/].f_5, 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_182, PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_182, 1) < 30f)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_182, false);
									MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 1);
								}
							}
						}
					}
					if ((BitTest(Local_153[iVar0 /*6*/].f_5, 0) && BitTest(Local_153[iVar0 /*6*/].f_5, 1)) || iLocal_149 == 6)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_181))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_181, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_182, false);
						}
						Local_153[iVar0 /*6*/].f_1 = 0;
					}
					break;
				case 26:
					switch (Local_153[iVar0 /*6*/].f_2)
					{
						case -1:
							if (ENTITY::DOES_ENTITY_EXIST(Local_113[12 /*33*/]))
							{
								PED::DELETE_PED(&(Local_113[12 /*33*/]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_113[13 /*33*/]))
							{
								PED::DELETE_PED(&(Local_113[13 /*33*/]));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_113[14 /*33*/]))
							{
								PED::DELETE_PED(&(Local_113[14 /*33*/]));
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man1A"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man2"));
							Local_153[iVar0 /*6*/].f_1 = 0;
							break;
						case 0:
							STREAMING::REQUEST_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
							Local_153[iVar0 /*6*/].f_2++;
							break;
						case 1:
							if (STREAMING::HAS_ANIM_DICT_LOADED("MISSChinese2_crystalMazeMCS1_IG"))
							{
								if (CUTSCENE::HAS_CUTSCENE_FINISHED() || !CUTSCENE::IS_CUTSCENE_PLAYING())
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_113[13 /*33*/]) && !PED::IS_PED_INJURED(Local_113[13 /*33*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_113[13 /*33*/], 1986.0602f, 3051.7085f, 46.2151f, true, false, false, true);
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_113[14 /*33*/]) && !PED::IS_PED_INJURED(Local_113[14 /*33*/]))
									{
										ENTITY::SET_ENTITY_COORDS(Local_113[14 /*33*/], 1986.1051f, 3051.6592f, 46.2151f, true, false, false, true);
									}
									Local_153[iVar0 /*6*/].f_2++;
								}
							}
							break;
						case 2:
							if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1984.89f, 3052.46f, 46.98f, 0.3f, true) && TASK::DOES_SCENARIO_EXIST_IN_AREA(1985.3221f, 3053.0872f, 46.98f, 0.3f, true))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_113[13 /*33*/]))
								{
									Local_113[13 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man1A"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_113[14 /*33*/]))
								{
									Local_113[14 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man2"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_113[12 /*33*/]))
								{
									Local_113[12 /*33*/] = PED::CREATE_PED(26, joaat("IG_Janet"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
								}
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 1);
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[14 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[14 /*33*/], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[14 /*33*/], false);
								MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 0);
								TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[13 /*33*/], 1985.3221f, 3053.0872f, 46.98f, 0.3f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[13 /*33*/], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[13 /*33*/], false);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_153[iVar0 /*6*/].f_5))
								{
									Local_153[iVar0 /*6*/].f_5 = PED::CREATE_SYNCHRONIZED_SCENE(1987.231f, 3052.741f, 46.214f, 0f, 0f, 57.6f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_153[iVar0 /*6*/].f_5, true);
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_113[12 /*33*/], Local_153[iVar0 /*6*/].f_5, "MISSChinese2_crystalMazeMCS1_IG", "bar_peds_action_janet", 1000f, -1000f, 1, 0, 1000f, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[12 /*33*/], true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[12 /*33*/], false);
								Local_153[iVar0 /*6*/].f_5 = 0;
								Local_153[iVar0 /*6*/].f_2++;
							}
							break;
						case 3:
							if (CUTSCENE::HAS_CUTSCENE_FINISHED() || !CUTSCENE::IS_CUTSCENE_PLAYING())
							{
							}
							if (!PED::IS_PED_INJURED(Local_113[13 /*33*/]) && !PED::IS_PED_INJURED(Local_113[14 /*33*/]))
							{
								PED::SET_PED_CONFIG_FLAG(Local_113[13 /*33*/], 152, true);
								PED::SET_PED_CONFIG_FLAG(Local_113[14 /*33*/], 152, true);
								if (BitTest(Local_153[iVar0 /*6*/].f_5, 0) && BitTest(Local_153[iVar0 /*6*/].f_5, 1))
								{
									Local_153[iVar0 /*6*/].f_2++;
								}
								else
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[13 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1984.89f, 3052.46f, 46.98f, 0.3f, true))
										{
											MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 0);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[13 /*33*/], 1984.89f, 3052.46f, 46.98f, 0.3f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[13 /*33*/], false);
										}
									}
									else
									{
										MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 0);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[14 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) != 1)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(1985.3221f, 3053.0872f, 46.98f, 0.3f, true))
										{
											MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 1);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[14 /*33*/], 1985.3221f, 3053.0872f, 46.98f, 0.3f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[14 /*33*/], false);
										}
									}
									else
									{
										MISC::SET_BIT(&(Local_153[iVar0 /*6*/].f_5), 1);
									}
								}
							}
							break;
						case 4:
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 1991.4193f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
						case 6:
							if (!PED::IS_PED_INJURED(Local_113[12 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_113[12 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_113[12 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[12 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_113[13 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_113[13 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_113[13 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[13 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_113[14 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_113[14 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_113[14 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[14 /*33*/]));
							}
							Local_153[iVar0 /*6*/].f_2 = 7;
							break;
						case 7:
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 1991.4193f, 3054.915f, 47.533f, 1) > 150f)
							{
								Local_153[iVar0 /*6*/].f_2 = -1;
							}
							break;
					}
					break;
				case 27:
					ENTITY::CREATE_FORCED_OBJECT(2444.1763f, 4974.0767f, 56.406605f, 30f, joaat("v_ilev_fh_door03"), true);
					ENTITY::CREATE_FORCED_OBJECT(2444.1763f, 4974.0767f, 56.406605f, 30f, joaat("v_ilev_fh_frntdoor"), true);
					Local_153[iVar0 /*6*/].f_1 = 0;
					break;
				case 29:
					break;
			}
			if (Local_153[iVar0 /*6*/].f_2 == -1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
				Local_153[iVar0 /*6*/].f_2 = 0;
				Local_153[iVar0 /*6*/].f_3 = 0;
				Local_153[iVar0 /*6*/].f_4 = 0;
				Local_153[iVar0 /*6*/].f_5 = 0;
			}
		}
		iVar0++;
	}
}

int func_8()//Position - 0x24DA
{
	if (iLocal_93 == 0)
	{
		return 1;
	}
	return 0;
}

void func_12(int iParam0)//Position - 0x267C
{
	int iVar0;
	if (iParam0 == 1)
	{
		if (iLocal_86 == 0)
		{
			iVar0 = 0;
			while (iVar0 < Local_109.f_0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_109[iVar0 /*5*/].f_3))
				{
					if (HUD::GET_BLIP_ALPHA(Local_109[iVar0 /*5*/].f_3) < 255)
					{
						HUD::REMOVE_BLIP(&(Local_109[iVar0 /*5*/].f_3));
					}
					else
					{
						HUD::SET_BLIP_ALPHA(Local_109[iVar0 /*5*/].f_3, 0);
					}
				}
				iVar0++;
			}
			iLocal_86 = 1;
		}
	}
	else if (iLocal_86)
	{
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_109[iVar0 /*5*/].f_3))
			{
				HUD::SET_BLIP_ALPHA(Local_109[iVar0 /*5*/].f_3, 255);
			}
			else
			{
				Local_109[iVar0 /*5*/].f_3 = __LIB_0__::func_392(Local_109[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_109[iVar0 /*5*/].f_3, true);
				HUD::SET_BLIP_SCALE(Local_109[iVar0 /*5*/].f_3, 0.4f);
				HUD::SET_BLIP_ALPHA(Local_109[iVar0 /*5*/].f_3, 0);
				HUD::SET_BLIP_COLOUR(Local_109[iVar0 /*5*/].f_3, 5);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_109[iVar0 /*5*/].f_3, false);
			}
			iVar0++;
		}
		iLocal_86 = 0;
	}
}

void func_15(char* sParam0, int iParam1, char* sParam2)//Position - 0x2841
{
	iLocal_403 = 1;
	iLocal_404 = iParam1;
	sLocal_406 = sParam0;
	sLocal_407 = sParam2;
}

int func_18(int iParam0)//Position - 0x28D9
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (Local_113[iVar0 /*33*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_27()//Position - 0x6C5E
{
	int iVar0;
	func_32(27, 0);
	MISC::CLEAR_AREA(2479.8748f, 4980.8677f, 44.820522f, 60f, true, false, false, false);
	iLocal_145 = VEHICLE::CREATE_VEHICLE(joaat("burrito"), 2479.5789f, 4980.503f, 44.8051f, 341.8158f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_145, 1);
	VEHICLE::SET_VEHICLE_LIVERY(iLocal_145, 2);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_145, 5f);
	if (iLocal_149 < 5)
	{
		func_29(1, 1, 4);
		func_29(1, 1, 5);
		func_29(1, 1, 2);
		func_29(1, 1, 1);
		func_29(1, 1, 6);
		func_29(1, 1, 7);
		func_29(1, 1, 3);
		func_29(1, 1, 0);
		func_29(1, 1, 8);
		func_29(1, 1, 9);
	}
	if (iLocal_149 < 6)
	{
		func_29(2, 1, 10);
		func_29(2, 1, 11);
		func_29(2, 1, 18);
		func_29(2, 1, 19);
	}
	if (iLocal_149 < 7)
	{
		func_29(2, 1, 12);
		func_29(2, 1, 13);
		func_29(2, 1, 14);
		func_29(2, 1, 15);
		func_29(2, 1, 16);
		func_29(2, 1, 17);
		func_29(2, 1, 20);
		func_29(5, 1, 23);
	}
	if (iLocal_149 == 7)
	{
		STREAMING::REQUEST_ANIM_DICT("DEAD");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("DEAD"))
		{
			func_28(323, 1);
		}
		Local_113[15 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), 2436.9011f, 4959.0996f, 45.8106f, 209.7559f, true, true);
		TASK::TASK_PLAY_ANIM(Local_113[15 /*33*/], "DEAD", "DEAD_C", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[15 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_113[15 /*33*/], true);
		Local_113[16 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), 2440.266f, 4970.705f, 45.8306f, 15.7982f, true, true);
		TASK::TASK_PLAY_ANIM(Local_113[16 /*33*/], "DEAD", "DEAD_D", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[16 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_113[16 /*33*/], true);
		Local_113[17 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), 2443.4197f, 4974.5234f, 45.8106f, 121.834f, true, true);
		TASK::TASK_PLAY_ANIM(Local_113[17 /*33*/], "DEAD", "DEAD_E", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[17 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_113[17 /*33*/], true);
		Local_113[18 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), 2448.8877f, 4971.5605f, 45.8106f, 194.7676f, true, true);
		TASK::TASK_PLAY_ANIM(Local_113[18 /*33*/], "DEAD", "DEAD_G", 1000f, -1000f, -1, 1, 0f, false, false, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[18 /*33*/], true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Local_113[18 /*33*/], true);
		while (((!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[15 /*33*/], "DEAD", "DEAD_C", 3) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[16 /*33*/], "DEAD", "DEAD_D", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[17 /*33*/], "DEAD", "DEAD_E", 3)) || !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[18 /*33*/], "DEAD", "DEAD_G", 3))
		{
			func_28(54343, 1);
			if (((!PED::IS_PED_INJURED(Local_113[15 /*33*/]) && !PED::IS_PED_INJURED(Local_113[16 /*33*/])) && !PED::IS_PED_INJURED(Local_113[17 /*33*/])) && !PED::IS_PED_INJURED(Local_113[18 /*33*/]))
			{
			}
		}
		ENTITY::SET_ENTITY_HEALTH(Local_113[15 /*33*/], 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Local_113[16 /*33*/], 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Local_113[17 /*33*/], 0, 0);
		ENTITY::SET_ENTITY_HEALTH(Local_113[18 /*33*/], 0, 0);
		STREAMING::REMOVE_ANIM_DICT("DEAD");
	}
	func_32(23, 0);
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 3);
	MISC::SET_BIT(&iVar0, 8);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 4);
	iLocal_168 = OBJECT::CREATE_PICKUP(joaat("PICKUP_HEALTH_STANDARD"), 2446.8962f, 4990.972f, 45.5477f, iVar0, -1, true, 0);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_148))
	{
		iLocal_148 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2464.9563f, 4990.051f, 44.48415f, 2.5f, 3.125f, 2.0625f, 0f, false, 7);
	}
	iLocal_169[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2444.4973f, 4975.956f, 50.565f, 0f, 0f, 100f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_169[0], "V_8_Bed1Rm");
	iLocal_169[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2443.4f, 4978.52f, 46.8107f, 0f, 0f, 100f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_169[1], "V_8_KitchnRm");
	iLocal_169[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2441.028f, 4963.851f, 46.5605f, 0f, 0f, -80.6f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_169[3], "V_8_StudyRm");
	iLocal_169[4] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 2435.165f, 4971.467f, 45.91f, 0f, 0f, -50.4f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_169[4], "V_8_Hall2Rm");
	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 2);
	MISC::SET_BIT(&iVar0, 1);
	MISC::SET_BIT(&iVar0, 3);
	iLocal_169[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_SAWNOFFSHOTGUN"), 2438.7878f, 4970.7896f, 50.565f, 0f, 0f, 0f, iVar0, -1, 2, true, 0);
	INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_169[2], "V_8_Bed1Rm");
}

void func_28(int iParam0, int iParam1)//Position - 0x71E3
{
	iParam0 = iParam0;
	iParam1 = iParam1;
	SYSTEM::WAIT(0);
}

void func_29(int iParam0, int iParam1, int iParam2)//Position - 0x71F8
{
	int iVar0;
	iVar0 = iParam2;
	Local_113[iVar0 /*33*/].f_1 = iParam0;
	Local_113[iVar0 /*33*/].f_3 = iParam1;
	Local_113[iVar0 /*33*/].f_2 = iParam2;
	Local_113[iVar0 /*33*/].f_5 = 0;
}

int func_30(int iParam0)//Position - 0x722F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, bool bParam1)//Position - 0x7269
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			if (!bParam1)
			{
				Local_153[iVar0 /*6*/].f_1 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0, int iParam1)//Position - 0x72B0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 0)
		{
			Local_153[iVar0 /*6*/].f_1 = 1;
			Local_153[iVar0 /*6*/] = iParam0;
			Local_153[iVar0 /*6*/].f_2 = 0;
			Local_153[iVar0 /*6*/].f_3 = iParam1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0x73E0
{
	if (!iLocal_574)
	{
		iLocal_574 = 1;
		Local_391[0 /*3*/] = iParam1;
		Local_391[0 /*3*/].f_1 = iParam2;
		Local_391[0 /*3*/].f_2 = sParam3;
		Local_391[1 /*3*/] = iParam4;
		Local_391[1 /*3*/].f_1 = iParam5;
		Local_391[1 /*3*/].f_2 = sParam6;
		Local_391[2 /*3*/] = iParam7;
		Local_391[2 /*3*/].f_1 = iParam8;
		Local_391[2 /*3*/].f_2 = sParam9;
		Local_391[3 /*3*/] = iParam10;
		Local_391[3 /*3*/].f_1 = iParam11;
		Local_391[3 /*3*/].f_2 = sParam12;
		func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
		func_61(iParam1, iParam2, sParam3);
		if (iParam4 != -1)
		{
			func_61(iParam4, iParam5, sParam6);
		}
		if (iParam7 != -1)
		{
			func_61(iParam7, iParam8, sParam9);
		}
		if (iParam10 != -1)
		{
			func_61(iParam10, iParam11, sParam12);
		}
		if (!__LIB_7__::func_158())
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED() && HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (__LIB_35__::func_536(&uLocal_409, "CHI2AUD", sParam0, iParam13, 1, 0, 0))
				{
					iLocal_392 = 1;
					return 1;
				}
			}
			else if (__LIB_35__::func_536(&uLocal_409, "CHI2AUD", sParam0, iParam13, 0, 0, 0))
			{
				iLocal_392 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void func_61(int iParam0, int iParam1, char* sParam2)//Position - 0x7E73
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_408)
	{
		if (iLocal_408[iVar0] == iParam1)
		{
			__LIB_0__::func_202(&uLocal_409, iVar0);
			iLocal_408[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_408[iParam0] != 0)
	{
		__LIB_0__::func_202(&uLocal_409, iParam0);
	}
	__LIB_0__::func_203(&uLocal_409, iParam0, iParam1, sParam2, 0, 1);
	iLocal_408[iParam0] = iParam1;
}

void func_64(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x7F90
{
	int iVar0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_51) || !MISC::ARE_STRINGS_EQUAL(sLocal_51, sParam0))
	{
		sLocal_51 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_77[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					__LIB_0__::func_202(&Local_77, iVar0);
				}
			}
			iVar0++;
		}
	}
}

int func_66(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9)//Position - 0x8022
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_68(iParam1) != iParam2 || iParam2 == 0)
		{
			func_61(iParam1, iParam2, sParam3);
		}
		if (iParam4 != -1)
		{
			if (func_68(iParam4) != iParam5 || iParam5 == 0)
			{
				func_61(iParam4, iParam5, sParam6);
			}
		}
		if (iParam7 != -1)
		{
			if (func_68(iParam7) != iParam8 || iParam8 == 0)
			{
				func_61(iParam7, iParam8, sParam9);
			}
		}
		if (__LIB_37__::func_808(&uLocal_409, 39, "CHI2AUD", sParam0, 9, 0, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0)//Position - 0x8110
{
	return iLocal_408[iParam0];
}

void func_84()//Position - 0x8C13
{
	if (iLocal_149 >= 3)
	{
		if (iLocal_149 > 3)
		{
			func_109(&Local_119, &Local_130, Local_123, Local_124, Local_125, Local_126, Local_122, Local_129, Local_120, Local_121, Local_127, Local_128);
		}
		func_85();
	}
}

void func_85()//Position - 0x8C69
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = 0;
	while (iVar0 < Local_119.f_0)
	{
		if ((!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]) && !PED::IS_PED_DEAD_OR_DYING(Local_113[iVar0 /*33*/], true)) || Local_119[iVar0 /*24*/].f_3 == 1)
		{
			switch (Local_119[iVar0 /*24*/].f_3)
			{
				case 1:
					switch (Local_113[iVar0 /*33*/].f_1)
					{
						case 1:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 2:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2451.8179f, 4985.704f, 50.5678f, 227.842f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 5, 0, 0);
									}
									break;
								case 1:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2455.085f, 4974.466f, 50.5677f, 246.051f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 14, 0, 0);
									}
									break;
								case 6:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2461.609f, 4993.675f, 44.9821f, -90f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								case 7:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2462.8872f, 4993.614f, 44.9474f, 89.8899f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 7, 1, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
									}
									break;
								case 3:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2460.6506f, 4970.8135f, 45.5765f, 240.2054f, joaat("WEAPON_ASSAULTRIFLE"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
										func_105(iVar0, 16, 0, 0);
									}
									break;
								case 0:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2443.1384f, 4966.709f, 50.5677f, 246.051f, joaat("WEAPON_ASSAULTRIFLE"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 15, 0, 0);
									}
									break;
								case 4:
									if (iLocal_149 == 3)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2457.098f, 4954.2827f, 44.1304f, 316.5498f, joaat("WEAPON_PISTOL"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2460.098f, 4957.2827f, 44.1304f, true, true, false);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2478.32f, 4982.3247f, 44.8913f, 49.5021f, joaat("WEAPON_PISTOL"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2478.4443f, 4976.9214f, 44.5614f, true, true, false);
										Local_113[iVar0 /*33*/].f_5 = 1;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								case 5:
									if (iLocal_149 == 3)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2454.7527f, 4951.7188f, 44.1445f, 316.5541f, joaat("WEAPON_PISTOL"), 0, 0))
										{
											Local_113[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2455.7527f, 4952.7188f, 44.1445f, true, true, false);
											Local_113[iVar0 /*33*/].f_5 = 1;
											func_105(iVar0, 3, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2475.8733f, 4984.4263f, 45.0916f, 45.8993f, joaat("WEAPON_PISTOL"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_20 = OBJECT::CREATE_OBJECT(joaat("prop_cs_fertilizer"), 2476.5815f, 4978.4917f, 44.5734f, true, true, false);
										Local_113[iVar0 /*33*/].f_5++;
										func_105(iVar0, 2, 0, 0);
									}
									break;
								case 8:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("WEAPON_PISTOL"), 1, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										Local_113[iVar0 /*33*/].f_14 = PED::CREATE_SYNCHRONIZED_SCENE(2505.451f, 4970.663f, 43.548f, 0f, 0f, 88.725f, 2);
										__LIB_11__::func_168(Local_113[iVar0 /*33*/], 20f, 5f, 90f, -90f, 60f);
										AUDIO::SET_AMBIENT_VOICE_NAME(Local_113[iVar0 /*33*/], "A_M_M_HillBilly_02_WHITE_MINI_02");
										TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_a", 1000f, -4f, 1, 0, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_113[iVar0 /*33*/].f_14, true);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
										func_105(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
										func_32(7, 0);
									}
									break;
								case 9:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2505.451f, 4970.663f, 43.548f, 49.5021f, joaat("WEAPON_PISTOL"), 1, 0))
									{
										Local_113[iVar0 /*33*/].f_14 = PED::CREATE_SYNCHRONIZED_SCENE(2507.879f, 4970.188f, 43.5f, 0f, 0f, 93.42f, 2);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_113[iVar0 /*33*/].f_14, true);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_14, "misschinese2_bank5", "peds_shootcans_b", 1000f, -4f, 1, 0, 1000f, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
										func_105(iVar0, 4, 0, Local_113[iVar0 /*33*/].f_14);
									}
									break;
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/]))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_113[iVar0 /*33*/], true, 1);
								PED::SET_PED_TO_LOAD_COVER(Local_113[iVar0 /*33*/], true);
							}
							break;
						case 2:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 10:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2458.5696f, 4987.584f, 45.8107f, 233.842f, joaat("WEAPON_PISTOL"), 0, 0))
										{
											func_105(iVar0, 14, 0, 0);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2454.6272f, 4995.726f, 45.2011f, 233.842f, joaat("WEAPON_PISTOL"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								case 11:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2442.9937f, 4985.1636f, 45.8103f, 303.409f, joaat("WEAPON_MICROSMG"), 0, 0))
										{
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
											func_105(iVar0, 14, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2450.3706f, 4995.103f, 44.9282f, 303.409f, joaat("WEAPON_MICROSMG"), 0, 0))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 1, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								case 12:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2433.124f, 4967.804f, 46.293f, 63.7673f, joaat("WEAPON_PUMPSHOTGUN"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								case 13:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2432.091f, 4968.833f, 46.298f, 63.7673f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								case 14:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2431.4849f, 4964.7793f, 45.8106f, -137.5f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								case 15:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2440.3855f, 4965.4287f, 45.8106f, 63.7673f, joaat("WEAPON_PUMPSHOTGUN"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								case 16:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2439.741f, 4964.8896f, 45.8106f, 130.3988f, joaat("WEAPON_MICROSMG"), 0, 1))
									{
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								case 17:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2438.7068f, 4964.0938f, 45.8106f, 127.6523f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										PED::SET_PED_ACCURACY(Local_113[iVar0 /*33*/], 5);
										func_105(iVar0, 25, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 1, 0);
									}
									break;
								case 18:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2440.9287f, 4976.9214f, 45.8106f, -130f, joaat("WEAPON_PISTOL"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2452.0525f, 4956.689f, 43.8957f, 230.7673f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_105(iVar0, 23, 0, 0);
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
									}
									break;
								case 19:
									if (iLocal_149 < 5)
									{
										if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2442.926f, 4975.1484f, 45.8106f, 46.7673f, joaat("WEAPON_PISTOL"), 0, 1))
										{
											func_105(iVar0, 7, 0, 0);
											func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
											Local_113[iVar0 /*33*/].f_4 = 7;
										}
									}
									else if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2449.3384f, 4954.127f, 43.9299f, 46.7673f, joaat("WEAPON_PISTOL"), 0, 1))
									{
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 0, 0, 0);
										func_105(iVar0, 23, 0, 0);
									}
									break;
								case 20:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2449.1138f, 4981.984f, 45.8102f, 130.7673f, joaat("WEAPON_MICROSMG"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 32;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
								case 21:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_02"), 2447.5527f, 4980.515f, 45.8096f, 311.7673f, joaat("WEAPON_MICROSMG"), 0, 1))
									{
										func_105(iVar0, 7, 0, 0);
										Local_113[iVar0 /*33*/].f_4 = 7;
										func_106(&Local_119, iVar0, Local_113[iVar0 /*33*/], 1, 0, 0);
									}
									break;
							}
							if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_113[iVar0 /*33*/], true, 1);
							}
							break;
						case 5:
							switch (Local_113[iVar0 /*33*/].f_2)
							{
								case 22:
									if (func_107(iVar0, joaat("A_M_M_Hillbilly_01"), 2439.2576f, 4976.2007f, 45.8106f, 116.815f, joaat("WEAPON_UNARMED"), 0, 1))
									{
										func_105(iVar0, 28, 0, 0);
									}
									break;
								case 23:
									if (func_107(iVar0, joaat("A_M_Y_MethHead_01"), 2433.292f, 4968.534f, 42.348f, 105.5f, joaat("WEAPON_UNARMED"), 0, 1))
									{
										func_105(iVar0, 30, 0, 0);
									}
									break;
							}
							break;
					}
					if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
					{
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_113[iVar0 /*33*/], true);
						Local_119[iVar0 /*24*/].f_3 = 3;
						iVar0 = (iVar0 - 1);
					}
					break;
				case 3:
					if (Local_119[iVar0 /*24*/].f_3 <= 3)
					{
						switch (Local_113[iVar0 /*33*/].f_3)
						{
							case 3:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
										{
											if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_113[iVar0 /*33*/].f_20) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_113[iVar0 /*33*/].f_20))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], PED::GET_PED_BONE_INDEX(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
											if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													TASK::TASK_PLAY_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												else
												{
													TASK::TASK_PLAY_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_113[iVar0 /*33*/], true, 1);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									case 1:
										break;
								}
								break;
							case 2:
								if (Local_113[iVar0 /*33*/].f_5 < 7)
								{
									__LIB_0__::func_499(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
								{
									ENTITY::SET_ENTITY_ANIM_SPEED(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1.4f);
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
								{
									ENTITY::SET_ENTITY_ANIM_SPEED(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1.4f);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
								{
									if (Local_113[iVar0 /*33*/].f_5 > 2 && Local_113[iVar0 /*33*/].f_5 <= 6)
									{
										if (ENTITY::IS_ENTITY_ATTACHED(Local_113[iVar0 /*33*/].f_20))
										{
											Local_113[iVar0 /*33*/].f_12 = (__LIB_4__::func_305(ENTITY::GET_ENTITY_COORDS(Local_113[iVar0 /*33*/], true), Local_113[iVar0 /*33*/].f_6, 1) - ENTITY::GET_ENTITY_HEADING(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_12 = __LIB_0__::func_301((Local_113[iVar0 /*33*/].f_12 / 4f), -15f, 15f);
											if (!PED::IS_PED_RAGDOLL(Local_113[iVar0 /*33*/]))
											{
												ENTITY::SET_ENTITY_HEADING(Local_113[iVar0 /*33*/], (ENTITY::GET_ENTITY_HEADING(Local_113[iVar0 /*33*/]) + (SYSTEM::TIMESTEP() * Local_113[iVar0 /*33*/].f_12)));
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
										{
											if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_113[iVar0 /*33*/].f_20) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_113[iVar0 /*33*/].f_20))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_113[iVar0 /*33*/].f_20, Local_113[iVar0 /*33*/], PED::GET_PED_BONE_INDEX(Local_113[iVar0 /*33*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												func_32(20, 0);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
									case 1:
										if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
										{
											if (__LIB_0__::func_529(Local_113[iVar0 /*33*/], 2495.7786f, 5004.715f, 43.873367f, 1) < 99f)
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													TASK::TASK_PLAY_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												else
												{
													TASK::TASK_PLAY_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 1000f, -1f, -1, 1, 0f, false, false, false);
												}
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
												ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_113[iVar0 /*33*/], true, 1);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									case 2:
										if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2466.9026f, 4996.254f, 45.5443f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 3:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2461.3323f, 4998.94f, 45.359f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 4:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											Local_113[iVar0 /*33*/].f_6 = { 2455.9841f, 4997.4043f, 45.2645f };
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 5:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (Local_113[iVar0 /*33*/].f_2 == 5)
											{
												Local_113[iVar0 /*33*/].f_6 = { 2452.0906f, 4993.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_6 = { 2454.0906f, 4995.674f, 45.1404f };
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									case 6:
										if (ENTITY::IS_ENTITY_AT_COORD(Local_113[iVar0 /*33*/], Local_113[iVar0 /*33*/].f_6, 1.5f, 1.5f, 2f, false, true, 0))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", 3))
											{
												TASK::STOP_ANIM_TASK(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_B", -1.5f);
											}
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", 3))
											{
												TASK::STOP_ANIM_TASK(Local_113[iVar0 /*33*/], "misschinese2_barrelroll", "barrel_roll_loop_A", -1.5f);
											}
											Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
											if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
											{
												ENTITY::DETACH_ENTITY(Local_113[iVar0 /*33*/].f_20, false, true);
											}
											if (__LIB_31__::func_732(iLocal_145))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													PED::SET_PED_MOVEMENT_CLIPSET(Local_113[iVar0 /*33*/], "move_m@gangster@var_e", 0.25f);
													TASK::TASK_ENTER_VEHICLE(Local_113[iVar0 /*33*/], iLocal_145, -1, -1, 1f, 1, 0);
													func_105(func_18(6), 14, 0, 0);
													func_105(func_18(7), 33, 0, 0);
												}
												else
												{
													PED::SET_PED_MOVEMENT_CLIPSET(Local_113[iVar0 /*33*/], "move_m@gangster@var_f", 0.25f);
													TASK::TASK_ENTER_VEHICLE(Local_113[iVar0 /*33*/], iLocal_145, -1, 0, 1f, 1, 0);
												}
											}
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = 0;
											Local_113[iVar0 /*33*/].f_15 = 0;
										}
										break;
									case 7:
										func_100(iVar0);
										if (PED::IS_PED_IN_ANY_VEHICLE(Local_113[iVar0 /*33*/], false))
										{
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_113[iVar0 /*33*/], false, 1);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 8:
										if (__LIB_31__::func_732(iLocal_145))
										{
											if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_145, -1, false))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 4)
												{
													if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_145, 0, false))
													{
														iVar1 = func_18(5);
														if (iVar1 >= 0)
														{
															if (!PED::IS_PED_INJURED(Local_113[iVar1 /*33*/]))
															{
																if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_113[iVar1 /*33*/]))
																{
																	func_99();
																	TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_145, 2367.6677f, 5098.6445f, 46.8185f, 12f, 0, joaat("burrito"), 786599, 5f, 5f);
																	TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_145, 19f, 786599);
																	func_98(&(Local_113[iVar0 /*33*/]), 0);
																	func_97(25, 1);
																	Local_113[iVar0 /*33*/].f_5++;
																}
															}
														}
													}
												}
											}
											if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_145, 0, false))
											{
												if (Local_113[iVar0 /*33*/].f_2 == 5)
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
										}
										break;
									case 9:
										break;
								}
								break;
							case 5:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2459.6462f, 4977.7354f, 50.5678f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2456.221f, 4974.685f, 50.5678f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_PED_SLIDE_TO_COORD(0, 2456.221f, 4974.685f, 50.5678f, 92.5678f, 0.75f);
										TASK::TASK_ACHIEVE_HEADING(0, 92.5678f, 0);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
										{
											func_105(iVar0, 7, 0, 9000);
											iVar2 = 1;
											if (iVar2 != -1)
											{
												func_105(iVar2, 7, 0, 9000);
											}
										}
										break;
									case 2:
										func_99();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2450.4912f, 4986.8296f, 50.5677f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_ACHIEVE_HEADING(0, 309.5567f, 0);
										TASK::TASK_PAUSE(0, 2000);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 3:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							case 6:
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 7 && Local_113[iVar0 /*33*/].f_5 > 1)
								{
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										WEAPON::SET_CURRENT_PED_WEAPON(Local_113[iVar0 /*33*/], joaat("WEAPON_UNARMED"), true);
										TASK::TASK_ACHIEVE_HEADING(Local_113[iVar0 /*33*/], 219f, 1500);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_ACHIEVE_HEADING")) == 7)
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND_ARMY", 0, false);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							case 32:
								if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_1 == 1 || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*33*/], 1) < 20f)
									{
										__LIB_0__::func_499(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
									}
									if (Local_113[iVar0 /*33*/].f_5 < 10)
									{
									}
									switch (Local_113[iVar0 /*33*/].f_5)
									{
										case 0:
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", Local_113[iVar0 /*33*/].f_14, false);
											Local_113[iVar0 /*33*/].f_5++;
											break;
										case 1:
											if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*33*/], 1) < 10f)
											{
												iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar3 == 0)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_113[iVar0 /*33*/], "GENERIC_CURSE_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												else if (iVar3 == 1)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_113[iVar0 /*33*/], "GENERIC_INSULT_MED", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												else
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_113[iVar0 /*33*/], "CHAT_STATE", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
											}
											break;
										case 2:
											if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
											{
												Local_113[iVar0 /*33*/].f_5 = 1;
											}
											break;
										case 10:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 1000;
											}
											break;
										case 11:
											if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
											{
												TASK::TASK_TURN_PED_TO_FACE_COORD(Local_113[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5000);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 5000;
											}
											break;
										case 12:
											if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_113[iVar0 /*33*/]) && __LIB_0__::func_529(Local_113[iVar0 /*33*/], 2448.0027f, 4982.305f, 45.8519f, 1) < 10f)
											{
												if (MISC::GET_GAME_TIMER() > (Local_113[iVar0 /*33*/].f_14 - 3000))
												{
													TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_113[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, 20000, 0.25f, 0, 40000f);
													Local_113[iVar0 /*33*/].f_5 = 15;
												}
											}
											else if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
											{
												if (func_35("CHI2_nope", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
												}
											}
											break;
										case 13:
											func_99();
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2449.1138f, 4981.984f, 45.8102f, 1f, 20000, 0.25f, 0, 40000f);
											TASK::TASK_ACHIEVE_HEADING(0, 127.6328f, 3000);
											func_98(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
											Local_113[iVar0 /*33*/].f_5++;
											break;
										case 14:
											if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14 || TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
											break;
										case 15:
											if (func_35("CHI2_hear", 8, Local_113[iVar0 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
											break;
										case 16:
											if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
											{
												Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
												Local_113[iVar0 /*33*/].f_5 = 12;
											}
											break;
										}
								}
								break;
							case 33:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 3000;
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 1:
										if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
										{
											if (__LIB_31__::func_732(iLocal_145))
											{
												TASK::TASK_ENTER_VEHICLE(Local_113[iVar0 /*33*/], iLocal_145, 20000, 1, 1f, 1, 0);
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = 0;
												Local_113[iVar0 /*33*/].f_15 = 0;
											}
										}
										break;
									case 2:
										func_100(iVar0);
										break;
								}
								break;
							case 7:
								if (Local_113[iVar0 /*33*/].f_1 == 1 || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*33*/], 1) < 20f)
								{
									__LIB_0__::func_499(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										iVar4 = joaat("WEAPON_UNARMED");
										if (WEAPON::GET_CURRENT_PED_WEAPON(Local_113[iVar0 /*33*/], &iVar4, true))
										{
											TASK::TASK_SWAP_WEAPON(Local_113[iVar0 /*33*/], false);
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 1:
										if (!WEAPON::GET_CURRENT_PED_WEAPON(Local_113[iVar0 /*33*/], &iVar4, true))
										{
											func_99();
											if (iVar0 == 1)
											{
												if (!PED::IS_PED_INJURED(Local_113[2 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_113[2 /*33*/], 2000);
												}
											}
											else if (iVar0 == 2)
											{
												if (!PED::IS_PED_INJURED(Local_113[1 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_113[1 /*33*/], 2000);
												}
											}
											else if (iVar0 == 6)
											{
												if (!PED::IS_PED_INJURED(Local_113[7 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_113[7 /*33*/], 2000);
												}
											}
											else if (iVar0 == 7)
											{
												if (!PED::IS_PED_INJURED(Local_113[6 /*33*/]))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_113[6 /*33*/], 2000);
												}
											}
											if (Local_113[iVar0 /*33*/].f_14 != 0)
											{
												TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", Local_113[iVar0 /*33*/].f_14, false);
											}
											else
											{
												TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, false);
											}
											func_98(&(Local_113[iVar0 /*33*/]), 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_15 = MISC::GET_GAME_TIMER() + 15000;
										}
										break;
									case 2:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_15)
										{
											TASK::CLEAR_PED_TASKS(Local_113[iVar0 /*33*/]);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 3:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												TASK::TASK_SWAP_WEAPON(Local_113[iVar0 /*33*/], true);
												Local_113[iVar0 /*33*/].f_5++;
											}
											else
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									case 4:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_SWAP_WEAPON")) == 7)
										{
											if (Local_113[iVar0 /*33*/].f_4 == 5)
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 2, 0);
											}
											else
											{
												func_105(iVar0, Local_113[iVar0 /*33*/].f_4, 0, 0);
											}
										}
										break;
								}
								break;
							case 13:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_GUARD_STAND", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							case 14:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_AA_SMOKE", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							case 15:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_BINOCULARS", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							case 16:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, false);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_113[iVar0 /*33*/], false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							case 17:
								if (Local_113[iVar0 /*33*/].f_5 < 10)
								{
									if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), Local_113[iVar0 /*33*/]))
									{
										Local_113[iVar0 /*33*/].f_5 = 10;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										STREAMING::REQUEST_ANIM_DICT("misscarsteal2peeing");
										Local_113[iVar0 /*33*/].f_5++;
										Local_113[iVar0 /*33*/].f_14 = 0;
										break;
									case 1:
										if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal2peeing"))
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, true);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 2:
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*33*/], 1) < 21.6f)
										{
											TASK::TASK_PLAY_ANIM(Local_113[iVar0 /*33*/], "misscarsteal2peeing", "peeing_loop", 8f, -8f, 25000, 1, 0f, false, false, false);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 23000;
										}
										break;
									case 3:
										if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
										{
											Local_113[iVar0 /*33*/].f_14 = -1;
											TASK::TASK_START_SCENARIO_IN_PLACE(Local_113[iVar0 /*33*/], "WORLD_HUMAN_DRINKING", 0, true);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							case 18:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2434.891f, 4973.864f, 50.5679f, 1f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_BINOCULARS", 0, false);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							case 25:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										switch (Local_113[iVar0 /*33*/].f_2)
										{
											case 12:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2433.04f, 4967.87f, 46.28f, 0.8f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[iVar0 /*33*/], 2433.04f, 4967.87f, 46.28f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											case 13:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2432.56f, 4968.38f, 46.27f, 0.8f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[iVar0 /*33*/], 2432.56f, 4968.38f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											case 14:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2433.12f, 4965.59f, 46.27f, 0.8f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[iVar0 /*33*/], 2433.12f, 4965.59f, 46.27f, 0.8f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											case 15:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2439.61f, 4960.99f, 46.27f, 0.4f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[iVar0 /*33*/], 2439.697f, 4960.996f, 46.28f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											case 16:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2440.16f, 4962.99f, 46.27f, 0.4f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[iVar0 /*33*/], 2440.16f, 4962.99f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
											case 17:
												if (TASK::DOES_SCENARIO_EXIST_IN_AREA(2438.23f, 4962.25f, 46.27f, 0.4f, false))
												{
													TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Local_113[iVar0 /*33*/], 2438.23f, 4962.25f, 46.27f, 0.4f, 0);
													Local_113[iVar0 /*33*/].f_5++;
												}
												break;
										}
										break;
									case 1:
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) == 7)
										{
											Local_113[iVar0 /*33*/].f_5 = 0;
										}
										break;
								}
								break;
							case 28:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_113[iVar0 /*33*/]) || (__LIB_9__::func_991(ENTITY::GET_ENTITY_COORDS(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2448.5833f, 4969.292f, 45.185604f, 2439.5383f, 4978.061f, 46.827618f, 5.75f, false, true, 0)))
										{
											TASK::TASK_HANDS_UP(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5 = 2;
										}
										break;
									case 2:
										if (func_35("WRK1", 1, Local_113[iVar0 /*33*/], "CHIN2Goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 3:
										if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_113[iVar0 /*33*/]) || (__LIB_9__::func_991(ENTITY::GET_ENTITY_COORDS(Local_113[iVar0 /*33*/], true), 1f, 1120403456) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2448.5833f, 4969.292f, 45.185604f, 2439.5383f, 4978.061f, 46.827618f, 5.75f, false, true, 0)))
										{
											if (func_35("TRV1", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_113[iVar0 /*33*/].f_5++;
												Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 2000;
											}
										}
										else
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 2000;
										}
										break;
									case 4:
										if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
										{
											TASK::TASK_SMART_FLEE_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 200f, 200000, false, false);
											PED::SET_PED_KEEP_TASK(Local_113[iVar0 /*33*/], true);
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[iVar0 /*33*/]));
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							case 30:
								if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
								{
									if (Local_113[iVar0 /*33*/].f_5 < 8)
									{
										if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_113[iVar0 /*33*/], 0, 2))
										{
											if (!WEAPON::HAS_PED_GOT_WEAPON(Local_113[iVar0 /*33*/], 0, 2))
											{
												WEAPON::GIVE_WEAPON_TO_PED(Local_113[iVar0 /*33*/], joaat("WEAPON_PISTOL"), -1, false, true);
												TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												__LIB_6__::func_771();
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[iVar0 /*33*/], false);
												TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[iVar0 /*33*/], iLocal_116);
												Local_113[iVar0 /*33*/].f_5 = 999;
											}
										}
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
										WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_SAWNOFFSHOTGUN"), 31, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[iVar0 /*33*/], true);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[iVar0 /*33*/], iLocal_116);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 1:
										if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze") && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_SAWNOFFSHOTGUN")))
										{
											if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
											{
												iLocal_370 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_370, true);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], iLocal_370, "misschinese2_crystalmaze", "_cower_loop", 1000f, -8f, 0, 0, 1000f, 0);
												if (!ENTITY::DOES_ENTITY_EXIST(iLocal_373))
												{
													iLocal_373 = WEAPON::CREATE_WEAPON_OBJECT(joaat("WEAPON_SAWNOFFSHOTGUN"), 40, 2433.59f, 4969.7f, 42.1854f, true, 1f, 0, 0, 1);
													ENTITY::SET_ENTITY_ROTATION(iLocal_373, 90f, 0f, 0f, 2, true);
												}
												TASK::TASK_LOOK_AT_ENTITY(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									case 2:
										if ((iLocal_149 == 4 || iLocal_149 == 5) || iLocal_149 == 6)
										{
											if (func_93(11))
											{
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										if (iLocal_149 > 6)
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 3:
										iLocal_369 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], iLocal_369, "misschinese2_crystalmaze", "_cower_to_stand", 4f, -8f, 0, 0, 1000f, 0);
										TASK::TASK_LOOK_AT_ENTITY(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 4:
										if (func_35("CHI2_DALE", 4, Local_113[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
										{
											Local_113[iVar0 /*33*/].f_5 = 5;
										}
										break;
									case 5:
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_369) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_369))
										{
											iLocal_368 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_368, true);
											TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
										}
										break;
									case 6:
										if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371) || iLocal_371 == 0)
										{
											if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
											{
												iLocal_371 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 1)
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_a", 4f, -8f, 0, 0, 1000f, 0);
												}
												else
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], iLocal_371, "misschinese2_crystalmaze", "_stand_loop_b", 4f, -8f, 0, 0, 1000f, 0);
												}
											}
										}
										if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_368) || iLocal_368 == 0)
										{
											if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_371) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_371))
											{
												iLocal_368 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_368, true);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], iLocal_368, "misschinese2_crystalmaze", "_stand_loop", 4f, -8f, 0, 0, 1000f, 0);
												Local_113[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 2000));
											}
										}
										if (!__LIB_0__::func_75() || (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2430.09f, 4965.93f, 41.55f, 1) > 3.438f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2427.0789f, 4964.9707f, 41.811687f, 2432.5889f, 4959.331f, 48.754795f, 3.3125f, false, true, 0)))
										{
											__LIB_6__::func_833();
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 7:
										if (func_35("CHI2_DALEG", 4, Local_113[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 8:
										iLocal_372 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_113[iVar0 /*33*/], iLocal_372, "misschinese2_crystalmaze", "_stand_to_aim", 4f, -8f, 0, 0, 1000f, 0);
										WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_373, Local_113[iVar0 /*33*/]);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 9:
										if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) > 0.98f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372))
										{
											PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
											TASK::CLEAR_PED_TASKS(Local_113[iVar0 /*33*/]);
											TASK::TASK_AIM_GUN_AT_ENTITY(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), -1, true);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 10:
										if (!__LIB_0__::func_75())
										{
											if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[iVar0 /*33*/], false);
												TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
												Local_113[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
												Local_113[iVar0 /*33*/].f_15 = 0;
												Local_113[iVar0 /*33*/].f_5++;
											}
										}
										break;
									case 11:
										if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
										{
											if (Local_113[iVar0 /*33*/].f_15 < 4)
											{
												if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_113[iVar0 /*33*/].f_5++;
													Local_113[iVar0 /*33*/].f_14 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 4000));
													Local_113[iVar0 /*33*/].f_15++;
												}
											}
										}
										break;
									case 999:
										if (func_35("CHI2_DALEA", 4, Local_113[iVar0 /*33*/], "ONEIL" /* GXT: O'Neil Way */, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
								}
								break;
							case 31:
								if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
								{
									if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_113[iVar0 /*33*/], true), 2f, true))
									{
										Local_113[iVar0 /*33*/].f_5 = 5;
									}
								}
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										if (__LIB_0__::func_405("FRMFLC", 0, 0))
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 1:
										if (func_35("WRK2", 1, Local_113[iVar0 /*33*/], "oneilcook", 2, PLAYER::PLAYER_PED_ID(), "trevor", -1, 0, 0, -1, 0, 0, 8))
										{
											Local_113[iVar0 /*33*/].f_5++;
											Local_113[iVar0 /*33*/].f_14 = MISC::GET_GAME_TIMER() + 1300;
										}
										break;
									case 2:
										if (MISC::GET_GAME_TIMER() > Local_113[iVar0 /*33*/].f_14)
										{
											TASK::TASK_HANDS_UP(Local_113[iVar0 /*33*/], 20000, 0, -1, 0);
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 3:
										if (!__LIB_0__::func_75())
										{
											Local_113[iVar0 /*33*/].f_5++;
										}
										break;
									case 4:
										if (!__LIB_0__::func_75())
										{
											func_105(iVar0, 27, 0, 0);
										}
										break;
									case 5:
										TASK::TASK_SMART_FLEE_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 50f, 1000, false, false);
										Local_113[iVar0 /*33*/].f_5++;
										break;
									case 6:
										if (__LIB_11__::func_988("WRK2"))
										{
											if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1 || AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 5)
											{
												func_87(0);
											}
											else
											{
												func_87(1);
											}
										}
										func_105(iVar0, 27, 0, 0);
										break;
								}
								break;
							case 27:
								switch (Local_113[iVar0 /*33*/].f_5)
								{
									case 0:
										func_99();
										TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, 999999, false, false);
										TASK::TASK_COWER(0, -1);
										func_98(&(Local_113[iVar0 /*33*/]), 0);
										PED::SET_PED_KEEP_TASK(Local_113[iVar0 /*33*/], true);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[iVar0 /*33*/]));
										if (HUD::DOES_BLIP_EXIST(Local_113[iVar0 /*33*/].f_19))
										{
											HUD::REMOVE_BLIP(&(Local_113[iVar0 /*33*/].f_19));
										}
										Local_113[iVar0 /*33*/].f_5++;
										break;
								}
								break;
							case 4:
								if (iLocal_376 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113[iVar0 /*33*/].f_14))
									{
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_113[iVar0 /*33*/].f_14, 0.69f);
									}
									if (iVar0 == 9)
									{
										iLocal_376 = 0;
									}
								}
								if (iLocal_377 == 1)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113[iVar0 /*33*/].f_14))
									{
										PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_113[iVar0 /*33*/].f_14, 0f);
									}
									if (iVar0 == 9)
									{
										iLocal_377 = 0;
									}
									Local_113[iVar0 /*33*/].f_5 = 0;
								}
								if (Local_113[iVar0 /*33*/].f_2 == 8)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113[iVar0 /*33*/].f_14))
									{
										if (Local_113[iVar0 /*33*/].f_5 == 0)
										{
											if (!func_30(23) || iLocal_149 == 3)
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
												{
													if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113[iVar0 /*33*/].f_14) > 0.024f && PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113[iVar0 /*33*/].f_14) < 0.033f)
													{
														iVar5 = 0;
														if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
														{
															iVar6 = joaat("WEAPON_UNARMED");
															if (WEAPON::GET_CURRENT_PED_WEAPON(Local_113[iVar0 /*33*/], &iVar6, true))
															{
																PED::SET_PED_ACCURACY(Local_113[iVar0 /*33*/], 100);
																if (iVar6 == joaat("WEAPON_PISTOL"))
																{
																	if (func_86(&iVar5))
																	{
																		WEAPON::SET_AMMO_IN_CLIP(Local_113[iVar0 /*33*/], joaat("WEAPON_PISTOL"), 12);
																		PED::SET_PED_SHOOTS_AT_COORD(Local_113[iVar0 /*33*/], ENTITY::GET_ENTITY_COORDS(iLocal_170[iVar5], true), false);
																		__LIB_0__::func_499(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																	else
																	{
																		WEAPON::SET_AMMO_IN_CLIP(Local_113[iVar0 /*33*/], joaat("WEAPON_PISTOL"), 12);
																		PED::SET_PED_SHOOTS_AT_COORD(Local_113[iVar0 /*33*/], 2493.1f, 4971f, 44.9f, false);
																		__LIB_0__::func_499(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
																		Local_113[iVar0 /*33*/].f_5 = 1;
																	}
																}
															}
														}
													}
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 1)
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113[iVar0 /*33*/].f_14) > 0.04f)
											{
												Local_113[iVar0 /*33*/].f_5 = 2;
												if (iLocal_374 == 0)
												{
													AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_113[iVar0 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_02", "SPEECH_PARAMS_FORCE_SHOUTED", false);
												}
											}
										}
										else if (Local_113[iVar0 /*33*/].f_5 == 2)
										{
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113[iVar0 /*33*/].f_14) > 0.6f)
											{
												Local_113[iVar0 /*33*/].f_5 = 0;
											}
										}
									}
								}
								if (Local_113[iVar0 /*33*/].f_5 == 3)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[iVar0 /*33*/], joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) == 7)
									{
										func_105(iVar0, 7, 0, 0);
									}
								}
								break;
							}
					}
					break;
				case 5:
				case 6:
					if (Local_119[iVar0 /*24*/].f_20)
					{
						switch (Local_113[iVar0 /*33*/].f_2)
						{
							case 20:
							case 21:
							case 16:
							case 12:
							case 13:
							case 14:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2431.704f, 4961.6196f, 45.331356f, 2455.3765f, 4985.9336f, 48.68555f, 13.5625f, false, false);
										TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							case 17:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2431.704f, 4961.6196f, 45.331356f, 2455.3765f, 4985.9336f, 48.68555f, 13.5625f, false, false);
										TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*33*/], 50, true);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							case 15:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2437.982f, 4959.021f, 45.310574f, 2432.93f, 4961.9414f, 48.692562f, 3.1875f, false, false);
										TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
									case 2:
										if (func_93(18))
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], false);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
								}
								break;
							case 10:
							case 18:
							case 19:
							case 11:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iVar0 /*33*/], 50, true);
										if (iLocal_114 == 0)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], false);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2451.6775f, 4954.2515f, 44.988f, 3f, false, false);
											iLocal_114++;
											Local_119[iVar0 /*24*/].f_4++;
										}
										else
										{
											Local_119[iVar0 /*24*/].f_4 = (MISC::GET_GAME_TIMER() + iLocal_114 * 4000);
											iLocal_114++;
										}
										Local_113[iVar0 /*33*/].f_1 = 1;
										break;
									case 2:
										if (__LIB_0__::func_529(Local_113[iVar0 /*33*/], 2451.6775f, 4954.2515f, 44.988f, 1) < 3f)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], false);
											Local_119[iVar0 /*24*/].f_4++;
										}
										break;
									case 3:
										break;
									default:
										if (MISC::GET_GAME_TIMER() > Local_119[iVar0 /*24*/].f_4)
										{
											PED::REMOVE_PED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], false);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2451.6775f, 4954.2515f, 44.988f, 3f, false, false);
											Local_119[iVar0 /*24*/].f_4 = 2;
										}
										break;
								}
								break;
							case 1:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2453.084f, 4969.897f, 50.442852f, 2460.9956f, 4977.822f, 53.380352f, 2.9375f, false, false);
										TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							case 0:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2442.9634f, 4964.2173f, 50.442852f, 2449.2507f, 4970.534f, 53.380352f, 2f, false, false);
										TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							case 2:
								switch (Local_119[iVar0 /*24*/].f_4)
								{
									case 1:
										PED::SET_PED_ANGLED_DEFENSIVE_AREA(Local_113[iVar0 /*33*/], 2461.3623f, 4976.084f, 50.442852f, 2448.7432f, 4988.7744f, 53.601433f, 2f, false, false);
										TASK::TASK_COMBAT_PED(Local_113[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[iVar0 /*33*/], 1);
										Local_119[iVar0 /*24*/].f_4++;
										break;
								}
								break;
							}
					}
					break;
				}
		}
		iVar0++;
	}
}

int func_86(int iParam0)//Position - 0xC466
{
	int iVar0;
	bool bVar1;
	*iParam0 = 0;
	iVar0 = 0;
	*iParam0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	bVar1 = false;
	while (!bVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[*iParam0]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_170[*iParam0], 2495.017f, 4970.1704f, 44.218082f, 2493.5007f, 4971.556f, 45.40248f, 1.375f, false, true, 0))
		{
			return 1;
		}
		else
		{
			*iParam0++;
			iVar0++;
			if (*iParam0 == iLocal_170)
			{
				*iParam0 = 0;
			}
		}
		if (iVar0 == 10)
		{
			return 0;
		}
	}
	return 0;
}

void func_87(bool bParam0)//Position - 0xC4FF
{
	iLocal_392 = 0;
	if (bParam0)
	{
		__LIB_6__::func_833();
	}
	else
	{
		__LIB_6__::func_771();
	}
}

int func_93(int iParam0)//Position - 0xC5B1
{
	int iVar0;
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388.f_0)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	return 0;
}

int func_97(int iParam0, int iParam1)//Position - 0xC67A
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_388.f_0)
	{
		if (iParam0 == Local_388[iVar0 /*8*/])
		{
			if (iParam1 == 1)
			{
				Local_388[iVar0 /*8*/].f_2 = 1;
			}
			else
			{
				Local_388[iVar0 /*8*/].f_2 = 0;
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_98(int iParam0, bool bParam1)//Position - 0xC6C4
{
	if (bParam1)
	{
		TASK::SET_SEQUENCE_TO_REPEAT(iLocal_81, true);
	}
	TASK::CLOSE_SEQUENCE_TASK(iLocal_81);
	if (!PED::IS_PED_DEAD_OR_DYING(*iParam0, true))
	{
		TASK::TASK_PERFORM_SEQUENCE(*iParam0, iLocal_81);
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_81);
}

void func_99()//Position - 0xC6FD
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_81);
}

void func_100(int iParam0)//Position - 0xC70C
{
	Local_113[iParam0 /*33*/].f_15 = (Local_113[iParam0 /*33*/].f_15 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
	switch (Local_113[iParam0 /*33*/].f_2)
	{
		case 7:
			if (Local_113[iParam0 /*33*/].f_15 > 2000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_113[iParam0 /*33*/], 2505.6335f, 4996.9937f, 46.6624f, 4000, 0, 2);
				MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 8000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_113[iParam0 /*33*/], 2472.2966f, 4962.6865f, 47.2297f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			break;
		case 5:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 0))
			{
				if (!PED::IS_PED_INJURED(Local_113[6 /*33*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_113[iParam0 /*33*/], Local_113[6 /*33*/], 4000, 0, 2);
					MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 0);
				}
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 11000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_113[iParam0 /*33*/], 2494.6335f, 5001.9937f, 46.6624f, 7000, 0, 2);
				MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 20000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 2))
			{
				TASK::TASK_LOOK_AT_COORD(Local_113[iParam0 /*33*/], 2477.6335f, 4966.9937f, 46.6624f, 7000, 0, 2);
				MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
		case 4:
			if (Local_113[iParam0 /*33*/].f_15 > 3000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 0))
			{
				TASK::TASK_LOOK_AT_COORD(Local_113[iParam0 /*33*/], 2505.6335f, 4996.9937f, 46.6624f, 5000, 0, 2);
				MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 0);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 10000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 1))
			{
				TASK::TASK_LOOK_AT_COORD(Local_113[iParam0 /*33*/], 2461.4495f, 4977.4805f, 51.7483f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 1);
			}
			else if (Local_113[iParam0 /*33*/].f_15 > 18000 && !BitTest(Local_113[iParam0 /*33*/].f_14, 2))
			{
				TASK::TASK_LOOK_AT_COORD(Local_113[iParam0 /*33*/], 2505.6335f, 4996.9937f, 46.6624f, 6000, 0, 2);
				MISC::SET_BIT(&(Local_113[iParam0 /*33*/].f_14), 2);
			}
			break;
	}
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCC96
{
	if (!PED::IS_PED_INJURED(Local_113[iParam0 /*33*/]))
	{
		if (iParam0 >= 0)
		{
			Local_113[iParam0 /*33*/].f_4 = Local_113[iParam0 /*33*/].f_3;
			Local_113[iParam0 /*33*/].f_3 = iParam1;
			Local_113[iParam0 /*33*/].f_5 = iParam2;
			Local_113[iParam0 /*33*/].f_6 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_9 = { 0f, 0f, 0f };
			Local_113[iParam0 /*33*/].f_12 = 0f;
			Local_113[iParam0 /*33*/].f_13 = 0f;
			Local_113[iParam0 /*33*/].f_14 = iParam3;
			Local_113[iParam0 /*33*/].f_15 = 0;
			Local_119[iParam0 /*24*/].f_3 = 3;
		}
	}
}

void func_106(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCD2A
{
	(*iParam0)[iParam1 /*24*/] = uParam2;
	(iParam0[iParam1 /*24*/])->f_8 = iParam3;
	(iParam0[iParam1 /*24*/])->f_20 = iParam4;
	(iParam0[iParam1 /*24*/])->f_21 = iParam5;
	if (iParam1 > iLocal_52)
	{
		iLocal_52 = iParam1 + 1;
	}
}

int func_107(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, int iParam6)//Position - 0xCD65
{
	int iVar0;
	iParam1 = iParam1;
	iParam6 = iParam6;
	if (Local_113[iParam0 /*33*/].f_1 != 1 && Local_113[iParam0 /*33*/].f_1 != 0)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param2);
		if (iVar0 == 0)
		{
			return 0;
		}
		else if (!INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			return 0;
		}
	}
	switch (iLocal_111)
	{
		case 0:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		case 1:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		case 2:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		case 3:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		case 4:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			break;
		case 5:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		case 6:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		case 7:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		case 8:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 1, 0, 0);
			break;
		case 9:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			break;
		case 10:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
		case 11:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 2, 2, 0);
			break;
		case 12:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 1, 2, 0);
			break;
		case 13:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		case 14:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		case 15:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 2, 0);
			break;
		case 16:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 1, 1, 0);
			break;
		case 17:
			Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_M_Hillbilly_02"), Param2, fParam3, true, true);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(Local_113[iParam0 /*33*/]);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 4, 0, 1, 0);
			break;
	}
	if (iLocal_111 > 17)
	{
		Local_113[iParam0 /*33*/] = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), Param2, fParam3, true, true);
		PED::SET_PED_RANDOM_COMPONENT_VARIATION(Local_113[iParam0 /*33*/], 0);
	}
	iLocal_111++;
	if (Local_113[iParam0 /*33*/].f_1 == 5)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[iParam0 /*33*/], true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[iParam0 /*33*/], iLocal_117);
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(Local_113[iParam0 /*33*/], iParam4, 3000, bParam5, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[iParam0 /*33*/], iLocal_116);
		PED::SET_PED_AS_ENEMY(Local_113[iParam0 /*33*/], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iParam0 /*33*/], 9, true);
		PED::SET_PED_HEARING_RANGE(Local_113[iParam0 /*33*/], 120f);
		PED::SET_PED_SEEING_RANGE(Local_113[iParam0 /*33*/], 22f);
		PED::SET_PED_ID_RANGE(Local_113[iParam0 /*33*/], 22f);
		PED::SET_PED_CONFIG_FLAG(Local_113[iParam0 /*33*/], 118, false);
		PED::SET_COMBAT_FLOAT(Local_113[iParam0 /*33*/], 14, 3f);
		if (Local_113[iParam0 /*33*/].f_1 == 2)
		{
			PED::SET_PED_ACCURACY(Local_113[iParam0 /*33*/], 12);
		}
		else
		{
			PED::SET_PED_ACCURACY(Local_113[iParam0 /*33*/], 45);
		}
		PED::SET_PED_DIES_WHEN_INJURED(Local_113[iParam0 /*33*/], true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_113[iParam0 /*33*/], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iParam0 /*33*/], 15, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[iParam0 /*33*/], 17, false);
		__LIB_0__::func_477(Local_113[iParam0 /*33*/], 1);
	}
	PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Local_113[iParam0 /*33*/]);
	ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_113[iParam0 /*33*/], true);
	PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Local_113[iParam0 /*33*/], 0f, 0f, 0f);
	PED::SET_PED_SHOULD_IGNORE_SCENARIO_NAV_CHECKS(Local_113[iParam0 /*33*/], true);
	PED::SET_PED_SHOULD_PROBE_FOR_SCENARIO_EXITS_IN_ONE_FRAME(Local_113[iParam0 /*33*/], true);
	ENTITY::SET_ENTITY_HEALTH(Local_113[iParam0 /*33*/], 150, 0);
	return 1;
}

void func_109(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7, struct<3> Param8, struct<3> Param9, struct<3> Param10, struct<3> Param11)//Position - 0xD632
{
	if (iLocal_52 > 0)
	{
		func_121(uParam0, Param8, Param9, Param6, Param7);
		func_113(uParam0, uParam1, Param2, Param3, Param4);
		func_110(uParam0, Param5, Param6, Param7, Param8, Param9, Param10, Param11);
	}
}

void func_110(var uParam0, struct<3> Param1, struct<3> Param2, struct<3> Param3, struct<3> Param4, struct<3> Param5, struct<3> Param6, struct<3> Param7)//Position - 0xD68C
{
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if (bLocal_75)
		{
			if (((iLocal_60 > iLocal_68 || iLocal_69 != iLocal_61) || (iLocal_60 < iLocal_68 && iLocal_60 == 8)) || (iLocal_60 == 10 && bLocal_53 == 0))
			{
				iLocal_67 = 1;
				iLocal_68 = iLocal_60;
				iLocal_69 = iLocal_61;
			}
			switch (iLocal_67)
			{
				case 1:
					if (iLocal_61 > -1)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_61 /*24*/], true))
						{
							switch (iLocal_60)
							{
								case 8:
									if (!bLocal_53)
									{
										if (!bLocal_56)
										{
											if (!iLocal_74)
											{
												if (!__LIB_11__::func_988(Param5.f_1))
												{
													__LIB_6__::func_771();
													if (func_111(Param5.f_1, Param5.f_2, (*uParam0)[iLocal_61 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
													{
														iLocal_67 = 2;
													}
												}
											}
											else
											{
												iLocal_67 = 2;
											}
										}
										else if (!__LIB_11__::func_988(Param4.f_1))
										{
											__LIB_6__::func_771();
											if (func_111(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_61 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								case 7:
									iLocal_74 = 0;
									__LIB_6__::func_771();
									if (func_111(Param1.f_1, Param1.f_2, (*uParam0)[iLocal_61 /*24*/], Param1.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								case 5:
									iLocal_74 = 0;
									__LIB_6__::func_771();
									if (func_111(Param6.f_1, Param6.f_2, (*uParam0)[iLocal_61 /*24*/], Param6.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										iLocal_67 = 2;
									}
									break;
								case 3:
									if (!bLocal_53 && !iLocal_74)
									{
										__LIB_6__::func_771();
										if (func_111(Param7.f_1, Param7.f_2, (*uParam0)[iLocal_61 /*24*/], Param7.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											iLocal_67 = 2;
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								case 6:
									if (!bLocal_56)
									{
										if (((!__LIB_11__::func_988(Param2.f_1) && !__LIB_11__::func_988(Param3.f_1)) && !__LIB_11__::func_988(Param4.f_1)) && !__LIB_11__::func_988(Param5.f_1))
										{
											iLocal_74 = 0;
											__LIB_6__::func_771();
											if (func_111(Param2.f_1, Param2.f_2, (*uParam0)[iLocal_61 /*24*/], Param2.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										iLocal_67 = 2;
									}
									break;
								case 10:
								case 9:
									if (!bLocal_56)
									{
										if (((!__LIB_11__::func_988(Param2.f_1) && !__LIB_11__::func_988(Param3.f_1)) && !__LIB_11__::func_988(Param4.f_1)) && !__LIB_11__::func_988(Param5.f_1))
										{
											iLocal_74 = 0;
											__LIB_6__::func_771();
											if (func_111(Param3.f_1, Param3.f_2, (*uParam0)[iLocal_61 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_67 = 2;
											}
										}
									}
									else
									{
										if (!bLocal_53)
										{
											if (func_111(Param4.f_1, Param4.f_2, (*uParam0)[iLocal_61 /*24*/], Param4.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												iLocal_74 = 0;
												iLocal_67 = 2;
											}
										}
										iLocal_67 = 2;
									}
									break;
							}
						}
						else
						{
							iLocal_67 = 2;
						}
					}
					else
					{
						iLocal_67 = 2;
					}
					break;
				case 2:
					if (!__LIB_0__::func_75())
					{
						iLocal_67 = 0;
					}
					break;
				}
			}
	}
}

int func_111(char* sParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, char* sParam12, int iParam13)//Position - 0xD999
{
	func_64(sParam0, iParam1, iParam4, iParam7, iParam10);
	func_112(iParam1, iParam2, sParam3);
	if (iParam4 != -1)
	{
		func_112(iParam4, iParam5, sParam6);
	}
	if (iParam7 != -1)
	{
		func_112(iParam7, iParam8, sParam9);
	}
	if (iParam10 != -1)
	{
		func_112(iParam10, iParam11, sParam12);
	}
	if (!__LIB_7__::func_158())
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (__LIB_35__::func_536(&Local_77, cLocal_78, sParam0, iParam13, 0, 0, 0))
			{
				iLocal_80 = 0;
				return 1;
			}
			else if (iLocal_79 != MISC::GET_GAME_TIMER())
			{
				iLocal_80++;
				iLocal_79 = MISC::GET_GAME_TIMER();
				if (iLocal_80 >= 10)
				{
					iLocal_80 = 0;
					return 1;
				}
			}
		}
		else
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

void func_112(int iParam0, int iParam1, char* sParam2)//Position - 0xDA4C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_76)
	{
		if (iLocal_76[iVar0] == iParam1)
		{
			__LIB_0__::func_202(&Local_77, iVar0);
			iLocal_76[iVar0] = 0;
		}
		iVar0++;
	}
	if (iLocal_76[iParam0] != 0)
	{
		__LIB_0__::func_202(&Local_77, iParam0);
	}
	__LIB_0__::func_203(&Local_77, iParam0, iParam1, sParam2, 0, 1);
	iLocal_76[iParam0] = iParam1;
}

void func_113(var uParam0, var uParam1, struct<3> Param2, struct<3> Param3, struct<3> Param4)//Position - 0xDAA9
{
	int iVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	bool bVar8;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true) && !PED::IS_PED_BEING_STEALTH_KILLED((*uParam0)[iVar0 /*24*/]))
		{
			if (!(uParam0[iVar0 /*24*/])->f_21)
			{
				switch ((uParam0[iVar0 /*24*/])->f_3)
				{
					case 4:
						if ((PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR")) || TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 1)
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
							if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS")) == 7)
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
									{
										PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									}
									if (!PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") && !PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_ARMCHAIR"))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], false))
										{
											iVar2 = PED::GET_VEHICLE_PED_IS_USING((*uParam0)[iVar0 /*24*/]);
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
											{
												if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar2))
												{
													Var3 = { ENTITY::GET_ENTITY_VELOCITY(iVar2) };
													VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iVar2);
													ENTITY::SET_ENTITY_VELOCITY(iVar2, Var3);
													TASK::TASK_LEAVE_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], 0, 0);
												}
											}
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], false))
										{
											switch ((uParam0[iVar0 /*24*/])->f_1)
											{
												case 2:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if ((uParam0[iVar0 /*24*/])->f_10 >= 0)
															{
																if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]))
																{
																	fVar1 = __LIB_26__::func_365((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_10 /*24*/]);
																	if (fVar1 > -45f && fVar1 < 45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar1 > -135f && fVar1 <= -45f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else if (fVar1 >= 45f && fVar1 <= 135f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 4;
																	}
																	(uParam0[iVar0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 500;
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																}
															}
															break;
														case 1:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_forward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														case 2:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_left_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														case 3:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_right_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
														case 4:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_11)
															{
																func_99();
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "react_backward_small_intro_a", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
																func_98(uParam0[iVar0 /*24*/], 0);
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												case 7:
													if ((uParam0[iVar0 /*24*/])->f_5 < 2)
													{
														TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_63;
														iLocal_63++;
														if (iLocal_63 == 2)
														{
															iLocal_63 = 0;
														}
													}
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
															func_99();
															if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
															{
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
																TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 0, 0f, false, false, false);
																TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 3000;
															break;
														case 1:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															iVar4 = __LIB_31__::func_730();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + iVar4);
															break;
														default:
															if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
															{
																if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") < 0.2f)
																{
																	ENTITY::SET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 0.2f);
																}
															}
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_4++;
															}
															break;
													}
													break;
												case 5:
													if ((uParam0[iVar0 /*24*/])->f_5 <= 2)
													{
														(uParam0[iVar0 /*24*/])->f_5 = iLocal_64;
														iLocal_64++;
														if (iLocal_64 == 2)
														{
															iLocal_64 = 0;
														}
													}
													if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
													{
														switch ((uParam0[iVar0 /*24*/])->f_5)
														{
															case 0:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], true);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 4f, -4f, -1, 8, 0f, false, false, false);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															case 1:
																PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], true);
																TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 4f, -4f, -1, 8, 0f, false, false, false);
																WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
																(uParam0[iVar0 /*24*/])->f_5 = 3;
																break;
															case 3:
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.95f)
																	{
																		if (__LIB_12__::func_39(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 4;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
																{
																	if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.95f)
																	{
																		if (__LIB_12__::func_39(iVar0, uParam0, 0))
																		{
																			(uParam0[iVar0 /*24*/])->f_5 = 5;
																		}
																		else
																		{
																			TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_e", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(4000, 6000), 8, 0f, false, false, false);
																			(uParam0[iVar0 /*24*/])->f_5 = 6;
																		}
																	}
																}
																break;
															case 4:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_d", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															case 5:
																if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING((*uParam0)[iVar0 /*24*/]) - (uParam0[iVar0 /*24*/])->f_18)) < 10f)
																{
																	TASK::TASK_PLAY_ANIM((*uParam0)[iVar0 /*24*/], "reaction@male_stand@big_variations@b", "react_big_variations_f", 4f, -2f, MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000), 8, 0f, false, false, false);
																	(uParam0[iVar0 /*24*/])->f_5 = 6;
																}
																break;
															case 6:
																if (TASK::GET_SCRIPT_TASK_STATUS((*uParam0)[iVar0 /*24*/], joaat("SCRIPT_TASK_PLAY_ANIM")) == 7)
																{
																	(uParam0[iVar0 /*24*/])->f_5 = 0;
																	(uParam0[iVar0 /*24*/])->f_4++;
																}
																break;
														}
													}
													else
													{
														(uParam0[iVar0 /*24*/])->f_5 = 0;
														(uParam0[iVar0 /*24*/])->f_4++;
													}
													break;
												case 4:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																(uParam0[iVar0 /*24*/])->f_3 = 5;
																(uParam0[iVar0 /*24*/])->f_1 = 0;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
													}
													break;
												case 8:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												case 10:
													if ((uParam0[iVar0 /*24*/])->f_3 != 6)
													{
														(uParam0[iVar0 /*24*/])->f_3 = 6;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												case 3:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															(uParam0[iVar0 /*24*/])->f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 2000));
															break;
														default:
															if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
															{
																if ((uParam0[iVar0 /*24*/])->f_3 != 6 && (uParam0[iVar0 /*24*/])->f_3 != 5)
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 5;
																	(uParam0[iVar0 /*24*/])->f_1 = 0;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
												case 1:
													iLocal_62 = iVar0;
													if (func_115(iVar0, uParam0, "", Param2, Param3, Param4, 0))
													{
														(uParam0[iVar0 /*24*/])->f_3 = 5;
														(uParam0[iVar0 /*24*/])->f_1 = 0;
														(uParam0[iVar0 /*24*/])->f_4 = 0;
													}
													break;
												case 6:
													switch ((uParam0[iVar0 /*24*/])->f_5)
													{
														case 0:
															if (iLocal_65 == 0)
															{
																if (!PED::IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0 /*24*/], true))
																{
																	Var5 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true) };
																	Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
																	fVar7 = MISC::ATAN(((Var6.f_2 - Var5.f_2) / __LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0)));
																	if (fVar7 > 20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 1;
																	}
																	else if (fVar7 < -20f)
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 2;
																	}
																	else
																	{
																		(uParam0[iVar0 /*24*/])->f_5 = 3;
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
																iLocal_65++;
															}
															else
															{
																(uParam0[iVar0 /*24*/])->f_3 = 6;
																(uParam0[iVar0 /*24*/])->f_1 = 10;
																(uParam0[iVar0 /*24*/])->f_4 = 0;
															}
															break;
														case 1:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_high", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														case 2:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_low", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														case 3:
															func_99();
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
															TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 1000);
															TASK::TASK_PLAY_ANIM(0, "misschinese2_bank1", "spot_mid", 4f, -8f, -1, 0, 0f, false, false, false);
															TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
															func_98(uParam0[iVar0 /*24*/], 0);
															(uParam0[iVar0 /*24*/])->f_5 = 4;
															break;
														case 4:
															if (bLocal_56)
															{
																if (MISC::ABSF(__LIB_26__::func_365((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID())) < 20f)
																{
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_high") > __LIB_31__::func_729(((__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_mid") > __LIB_31__::func_729(((__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																	if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low", 3))
																	{
																		if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "spot_low") > __LIB_31__::func_729(((__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 1) + 5f) / 35f), 0.27f, 0.9f))
																		{
																			(uParam0[iVar0 /*24*/])->f_3 = 6;
																			(uParam0[iVar0 /*24*/])->f_1 = 10;
																			(uParam0[iVar0 /*24*/])->f_4 = 0;
																		}
																	}
																}
																else
																{
																	(uParam0[iVar0 /*24*/])->f_3 = 6;
																	(uParam0[iVar0 /*24*/])->f_1 = 10;
																	(uParam0[iVar0 /*24*/])->f_4 = 0;
																}
															}
															break;
													}
													break;
											}
										}
										else
										{
											(uParam0[iVar0 /*24*/])->f_4++;
										}
									}
									break;
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_21)
									{
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_gunshot") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "buddy_shot_b") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "reaction_forward_big_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "alert_body") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_forward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_backward_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_left_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (ENTITY::IS_ENTITY_PLAYING_ANIM((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a", 3))
										{
											bVar8 = true;
											if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME((*uParam0)[iVar0 /*24*/], "misschinese2_bank1", "react_right_small_intro_a") > 0.9f)
											{
												bVar8 = false;
											}
										}
										if (!bVar8)
										{
											(uParam0[iVar0 /*24*/])->f_4 = 2;
											(uParam0[iVar0 /*24*/])->f_5 = MISC::GET_GAME_TIMER() + 2000;
											TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], true, 1);
											PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										}
									}
									break;
								case 2:
									if (MISC::GET_GAME_TIMER() > (uParam0[iVar0 /*24*/])->f_5)
									{
										(uParam0[iVar0 /*24*/])->f_3 = 5;
										(uParam0[iVar0 /*24*/])->f_1 = 0;
										(uParam0[iVar0 /*24*/])->f_4 = 0;
									}
									break;
								}
						}
						break;
					case 5:
					case 6:
						if (PED::IS_PED_USING_SCENARIO((*uParam0)[iVar0 /*24*/], "PROP_HUMAN_SEAT_CHAIR") || PED::IS_PED_USING_ANY_SCENARIO((*uParam0)[iVar0 /*24*/]))
						{
							if (!PED::IS_PED_INJURED((*uParam0)[iVar0 /*24*/]))
							{
								TASK::CLEAR_PED_TASKS((*uParam0)[iVar0 /*24*/]);
							}
						}
						else
						{
							switch ((uParam0[iVar0 /*24*/])->f_4)
							{
								case 0:
									(uParam0[iVar0 /*24*/])->f_11 = 0;
									if ((iVar0 == 12 || iVar0 == 13) || iVar0 == 14)
									{
									}
									WEAPON::SET_CURRENT_PED_WEAPON((*uParam0)[iVar0 /*24*/], WEAPON::GET_BEST_PED_WEAPON((*uParam0)[iVar0 /*24*/], false), true);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*uParam0)[iVar0 /*24*/], false);
									PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT((*uParam0)[iVar0 /*24*/]);
									PED::SET_PED_COMBAT_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 50, true);
									PED::SET_PED_FLEE_ATTRIBUTES((*uParam0)[iVar0 /*24*/], 512, true);
									(uParam0[iVar0 /*24*/])->f_4++;
									break;
								case 1:
									if (!(uParam0[iVar0 /*24*/])->f_20)
									{
										*(uParam1[0 /*3*/]) = { *(uParam1[0 /*3*/]) };
										iLocal_66 = iLocal_66;
										uLocal_70 = uLocal_70;
										TASK::TASK_COMBAT_PED((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam0)[iVar0 /*24*/], true, 1);
										PED::SET_PED_TARGET_LOSS_RESPONSE((*uParam0)[iVar0 /*24*/], 1);
										(uParam0[iVar0 /*24*/])->f_4++;
										(uParam0[iVar0 /*24*/])->f_11 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(20000, 35000));
									}
									break;
								}
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

int func_115(int iParam0, var uParam1, char* sParam2, struct<3> Param3, struct<3> Param4, struct<3> Param5, bool bParam6)//Position - 0xEBAF
{
	switch ((uParam1[iParam0 /*24*/])->f_5)
	{
		case 0:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if (__LIB_0__::func_75())
				{
					if (!__LIB_11__::func_988(Param3.f_1))
					{
						__LIB_6__::func_833();
					}
				}
				if (func_111(Param3.f_1, Param3.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
				{
					(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], true) };
					(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
					(uParam1[iParam0 /*24*/])->f_5 = 0;
					(uParam1[iParam0 /*24*/])->f_5++;
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
			else
			{
				(uParam1[iParam0 /*24*/])->f_12 = { ENTITY::GET_ENTITY_COORDS((*uParam1)[iParam0 /*24*/], true) };
				(uParam1[iParam0 /*24*/])->f_18 = ENTITY::GET_ENTITY_HEADING((*uParam1)[iParam0 /*24*/]);
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_TURN_PED_TO_FACE_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5000);
				(uParam1[iParam0 /*24*/])->f_5++;
				(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 5000;
			}
			break;
		case 2:
			if (!MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
			{
				if ((PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam1)[iParam0 /*24*/]) || iLocal_73 == 1) && __LIB_0__::func_529((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_12, 1) < (uParam1[iParam0 /*24*/])->f_19)
				{
					if (MISC::GET_GAME_TIMER() > ((uParam1[iParam0 /*24*/])->f_11 - 3000))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD((*uParam1)[iParam0 /*24*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1f, 20000, 0.1f, 0, 40000f);
						(uParam1[iParam0 /*24*/])->f_15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						(uParam1[iParam0 /*24*/])->f_5 = 5;
					}
				}
				else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
				{
					if (func_111(Param5.f_1, Param5.f_2, (*uParam1)[iParam0 /*24*/], Param5.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						if (bParam6)
						{
						}
						(uParam1[iParam0 /*24*/])->f_5++;
					}
				}
			}
			else if (MISC::GET_GAME_TIMER() > (uParam1[iParam0 /*24*/])->f_11)
			{
				TASK::TASK_ACHIEVE_HEADING((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_18, 2000);
				(uParam1[iParam0 /*24*/])->f_5 = 4;
			}
			break;
		case 3:
			func_99();
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (uParam1[iParam0 /*24*/])->f_12, 1f, 20000, 0.2f, 4096, 40000f);
			TASK::TASK_ACHIEVE_HEADING(0, (uParam1[iParam0 /*24*/])->f_18, 2000);
			func_98(uParam1[iParam0 /*24*/], 0);
			(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
			(uParam1[iParam0 /*24*/])->f_5++;
			break;
		case 4:
			if (TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 7 || (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1) && TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_ACHIEVE_HEADING")) == 7))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sParam2, ""))
				{
					TASK::TASK_START_SCENARIO_IN_PLACE((*uParam1)[iParam0 /*24*/], sParam2, 0, true);
				}
				(uParam1[iParam0 /*24*/])->f_4 = 0;
				(uParam1[iParam0 /*24*/])->f_5 = 0;
				(uParam1[iParam0 /*24*/])->f_1 = 0;
				(uParam1[iParam0 /*24*/])->f_2 = 0;
				if (MISC::ARE_STRINGS_EQUAL("chi2_hear", Param3.f_1))
				{
					(uParam1[iParam0 /*24*/])->f_3 = 3;
				}
				else
				{
					(uParam1[iParam0 /*24*/])->f_3 = 2;
				}
				iLocal_62 = -1;
			}
			break;
		case 5:
			if (func_111(Param3.f_1, Param4.f_2, (*uParam1)[iParam0 /*24*/], Param3.f_0, -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
			{
				(uParam1[iParam0 /*24*/])->f_5++;
			}
			break;
		case 6:
			if (__LIB_0__::func_529((*uParam1)[iParam0 /*24*/], (uParam1[iParam0 /*24*/])->f_15, 1) < 2f || TASK::GET_SCRIPT_TASK_STATUS((*uParam1)[iParam0 /*24*/], joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) == 7)
			{
				if (!PED::IS_PED_INJURED((*uParam1)[iParam0 /*24*/]))
				{
					TASK::CLEAR_PED_TASKS((*uParam1)[iParam0 /*24*/]);
					func_99();
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], -5f, 3f, 0f), 2500, 0, 2);
					TASK::TASK_LOOK_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS((*uParam1)[iParam0 /*24*/], 5f, 3f, 0f), 2500, 0, 2);
					func_98(uParam1[iParam0 /*24*/], 0);
					(uParam1[iParam0 /*24*/])->f_11 = MISC::GET_GAME_TIMER() + 3000;
					(uParam1[iParam0 /*24*/])->f_5 = 2;
				}
			}
			break;
	}
	return 0;
}

void func_121(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, struct<2> Param7, var uParam8)//Position - 0xF38B
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	if (!bLocal_53 == 1)
	{
		bLocal_82 = false;
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
				{
					iVar1++;
				}
				iVar0++;
			}
			if (iLocal_83 == 0)
			{
				iLocal_83 = iVar1;
			}
			if (iVar1 < iLocal_83)
			{
				iLocal_83 = iVar1;
				bLocal_82 = true;
			}
		}
		iVar2 = 4;
		while (iVar2 > 0)
		{
			if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_58 /*24*/], true))
			{
				if ((uParam0[iLocal_58 /*24*/])->f_3 > 3 && (uParam0[iLocal_58 /*24*/])->f_1 > 1)
				{
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
						{
							if (iVar0 != iLocal_58)
							{
								if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
								{
									if (__LIB_0__::func_76((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1) < 8f)
									{
										if ((INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_58 /*24*/]) != 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) != 0) || (INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iLocal_58 /*24*/]) == 0 && INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]) == 0))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true) };
											Var4 = { ENTITY::GET_ENTITY_COORDS((*uParam0)[iLocal_58 /*24*/], false) };
											if (MISC::ABSF((Var3.f_2 - Var4.f_2)) < 2f)
											{
												(uParam0[iVar0 /*24*/])->f_7 = 1;
												(uParam0[iVar0 /*24*/])->f_10 = iLocal_58;
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
				else
				{
					fVar5 = 10f;
					fVar6 = 11f;
					(uParam0[iLocal_58 /*24*/])->f_22 = -1;
					(uParam0[iLocal_58 /*24*/])->f_23 = -1;
					iVar0 = 0;
					while (iVar0 < *uParam0)
					{
						if (iVar0 != iLocal_58)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*24*/]))
							{
								fVar7 = __LIB_0__::func_76((*uParam0)[iVar0 /*24*/], (*uParam0)[iLocal_58 /*24*/], 1);
								if (fVar7 < 10f)
								{
									fVar8 = __LIB_26__::func_365((*uParam0)[iLocal_58 /*24*/], (*uParam0)[iVar0 /*24*/]);
									if (fVar8 > -90f && fVar8 < 90f)
									{
										if (fVar7 < fVar5)
										{
											(uParam0[iLocal_58 /*24*/])->f_23 = (uParam0[iLocal_58 /*24*/])->f_22;
											(uParam0[iLocal_58 /*24*/])->f_22 = iVar0;
											fVar6 = fVar5;
											fVar5 = fVar7;
										}
										else if (fVar7 < fVar6)
										{
											fVar6 = fVar7;
											(uParam0[iLocal_58 /*24*/])->f_23 = iVar0;
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
			iLocal_58++;
			if (iLocal_58 >= *uParam0)
			{
				iLocal_58 = 0;
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar9, false))
		{
			if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar9))
			{
				iVar10 = 1;
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_71, fLocal_72))
	{
		bLocal_54 = true;
	}
	if (!iLocal_55)
	{
		if (__LIB_11__::func_988(Param1.f_1) || __LIB_11__::func_988(Param3.f_1))
		{
			iLocal_59 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_55 = 1;
		}
		if (__LIB_11__::func_988(Param5.f_1) || __LIB_11__::func_988(Param7.f_1))
		{
			iLocal_59 = MISC::GET_GAME_TIMER() + 1000;
			iLocal_55 = 1;
		}
	}
	else if (((!__LIB_11__::func_988(Param1.f_1) && !__LIB_11__::func_988(Param3.f_1)) && !__LIB_11__::func_988(Param5.f_1)) && !__LIB_11__::func_988(Param7.f_1))
	{
		iLocal_55 = 0;
	}
	else if (MISC::GET_GAME_TIMER() > iLocal_59)
	{
		if (__LIB_11__::func_988(Param1.f_1) || __LIB_11__::func_988(Param3.f_1))
		{
			bLocal_53 = true;
		}
		if (__LIB_11__::func_988(Param5.f_1) || __LIB_11__::func_988(Param7.f_1))
		{
			bLocal_56 = true;
		}
	}
	iLocal_60 = 0;
	iVar11 = -1;
	fVar12 = 13f;
	iLocal_57 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar13 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (iLocal_62 == -1)
	{
		iLocal_73 = 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!PED::IS_PED_DEAD_OR_DYING((*uParam0)[iVar0 /*24*/], true))
		{
			if ((uParam0[iVar0 /*24*/])->f_3 != 7)
			{
				(uParam0[iVar0 /*24*/])->f_2 = (uParam0[iVar0 /*24*/])->f_1;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
				if ((uParam0[iVar0 /*24*/])->f_3 <= 4)
				{
					if (iLocal_62 == -1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
						{
							if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 20f;
							}
							if (VEHICLE::IS_VEHICLE_SIREN_ON(iVar13))
							{
								iLocal_73 = 1;
								fVar12 = 50f;
							}
						}
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), (*uParam0)[iVar0 /*24*/]) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false) && VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar13)))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < fVar12)
							{
								if ((uParam0[iVar0 /*24*/])->f_8)
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_FROM_ENTITY((*uParam0)[iVar0 /*24*/]))
									{
										fVar12 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1);
										iVar11 = iVar0;
										(uParam0[iVar0 /*24*/])->f_1 = 1;
										(uParam0[iVar0 /*24*/])->f_19 = (fVar12 + 5f);
									}
								}
							}
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_7)
					{
						(uParam0[iVar0 /*24*/])->f_7 = 0;
						(uParam0[iVar0 /*24*/])->f_1 = 2;
					}
					if (bLocal_54)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 3;
					}
					if (bLocal_53)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 4;
					}
					if (bLocal_82)
					{
					}
					if (!bLocal_82 && !PED::IS_PED_RAGDOLL((*uParam0)[iVar0 /*24*/]))
					{
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 125))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
							if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 17))
							{
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_9)
						{
							if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 4f, true, true))
							{
								(uParam0[iVar0 /*24*/])->f_1 = 7;
							}
						}
						else if (MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 6f, true, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 126))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
						if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS((*uParam0)[iVar0 /*24*/], true), 1f, true))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 7;
						}
					}
					if ((uParam0[iVar0 /*24*/])->f_3 < 4)
					{
						if ((uParam0[iVar0 /*24*/])->f_22 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/], true))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_22 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
						if ((uParam0[iVar0 /*24*/])->f_23 != -1)
						{
							if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
							{
								if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/], true))
								{
									if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT((*uParam0)[iVar0 /*24*/], (*uParam0)[(uParam0[iVar0 /*24*/])->f_23 /*24*/]))
									{
										(uParam0[iVar0 /*24*/])->f_1 = 5;
									}
								}
							}
						}
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 5)
				{
					if ((uParam0[iVar0 /*24*/])->f_1 == 0)
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4 || PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0))
						{
							(uParam0[iVar0 /*24*/])->f_1 = 8;
						}
					}
					if (((PED::IS_PED_RESPONDING_TO_EVENT((*uParam0)[iVar0 /*24*/], 1) || PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)) || (PED::IS_PED_IN_COMBAT((*uParam0)[iVar0 /*24*/], 0) && PED::CAN_PED_IN_COMBAT_SEE_TARGET((*uParam0)[iVar0 /*24*/], PLAYER::PLAYER_PED_ID()))) || (__LIB_31__::func_731((*uParam0)[iVar0 /*24*/]) && PED::HAS_PED_RECEIVED_EVENT((*uParam0)[iVar0 /*24*/], 1)))
					{
						if ((uParam0[iVar0 /*24*/])->f_3 > 4)
						{
							(uParam0[iVar0 /*24*/])->f_1 = 9;
						}
						else
						{
							(uParam0[iVar0 /*24*/])->f_1 = 6;
						}
					}
				}
				if (iVar10 && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), (*uParam0)[iVar0 /*24*/], 1) < 50f)
				{
					(uParam0[iVar0 /*24*/])->f_1 = 6;
				}
				if ((uParam0[iVar0 /*24*/])->f_3 <= 6)
				{
					if (bLocal_56)
					{
						(uParam0[iVar0 /*24*/])->f_1 = 10;
					}
				}
				if ((uParam0[iVar0 /*24*/])->f_1 <= (uParam0[iVar0 /*24*/])->f_2)
				{
					(uParam0[iVar0 /*24*/])->f_1 = (uParam0[iVar0 /*24*/])->f_2;
				}
				else
				{
					(uParam0[iVar0 /*24*/])->f_3 = 4;
					(uParam0[iVar0 /*24*/])->f_4 = 0;
					(uParam0[iVar0 /*24*/])->f_5 = 0;
				}
				if ((uParam0[iVar0 /*24*/])->f_1 > iLocal_60)
				{
					iLocal_60 = (uParam0[iVar0 /*24*/])->f_1;
					iLocal_61 = iVar0;
				}
			}
			else
			{
				(uParam0[iVar0 /*24*/])->f_3 = 0;
				(uParam0[iVar0 /*24*/])->f_1 = 0;
			}
			if ((uParam0[iVar0 /*24*/])->f_3 > 3)
			{
				iLocal_57 = 1;
			}
		}
		iVar0++;
	}
	if (iLocal_62 == -1)
	{
		if (iVar11 != -1)
		{
			if (1 > (uParam0[iVar11 /*24*/])->f_1)
			{
				(uParam0[iVar11 /*24*/])->f_1 = 1;
				iLocal_62 = iVar11;
			}
		}
	}
	else if (PED::IS_PED_DEAD_OR_DYING((*uParam0)[iLocal_62 /*24*/], true))
	{
		iLocal_62 = -1;
	}
}

void func_123()//Position - 0xFC80
{
	if (iLocal_392)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_397))
		{
			if (__LIB_0__::func_75())
			{
				if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						cLocal_393 = { __LIB_0__::func_389() };
						Local_397 = { __LIB_0__::func_390() };
						StringCopy(&Local_397, "", 24);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_393) && !MISC::ARE_STRINGS_EQUAL(&cLocal_393, "NULL"))
						{
							Local_397 = { __LIB_0__::func_390() };
							__LIB_6__::func_833();
						}
						else
						{
							iLocal_392 = 0;
							StringCopy(&Local_397, "", 24);
							StringCopy(&cLocal_393, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_392 = 0;
				StringCopy(&Local_397, "", 24);
				StringCopy(&cLocal_393, "", 24);
			}
		}
		else
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (!__LIB_11__::func_988(&Local_397))
				{
					iLocal_392 = 0;
					StringCopy(&Local_397, "", 24);
					StringCopy(&cLocal_393, "", 24);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_397))
			{
				Local_391[0 /*3*/] = { Local_391[0 /*3*/] };
			}
		}
	}
}

void func_125()//Position - 0xFE14
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_132();
		func_131();
		func_129();
		func_126();
	}
}

void func_126()//Position - 0xFE38
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	Var1 = { 0f, 0f, 0f };
	if (iLocal_102 == 0)
	{
		if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_109[0 /*5*/]))
		{
			fVar2 = 0f;
			fVar5 = 999999f;
			iVar0 = 0;
			while (iVar0 < Local_109.f_0)
			{
				if (iVar0 > 0)
				{
					fVar2 = (fVar2 + MISC::GET_DISTANCE_BETWEEN_COORDS(Local_109[(iVar0 - 1) /*5*/], Local_109[iVar0 /*5*/], true));
				}
				if (Local_109[iVar0 /*5*/].f_4)
				{
					if (FIRE::GET_CLOSEST_FIRE_POS(&Var1, Local_109[iVar0 /*5*/]))
					{
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_109[iVar0 /*5*/], Var1, true);
						if (fVar4 < fVar5)
						{
							fVar5 = fVar4;
							fVar6 = fVar2;
							iVar3 = iVar0;
						}
					}
				}
				iVar0++;
			}
			if (fVar5 < fLocal_96)
			{
				iVar3 = iVar3;
				iLocal_102 = 1;
				iLocal_104 = MISC::GET_GAME_TIMER();
				fVar6 = fVar6;
				Local_99 = { Local_109[iVar3 /*5*/] };
				iLocal_100 = iVar3;
				iLocal_105 = iVar3 * 2;
				iLocal_107 = iLocal_105;
				iLocal_108 = iLocal_105;
				if (iLocal_108 < 0)
				{
					iLocal_108 = 0;
				}
				if (iLocal_107 >= Local_109.f_0 * 2)
				{
					iLocal_107 = (Local_109.f_0 * 2 - 1);
				}
			}
		}
	}
	if (iLocal_102 == 1)
	{
		GRAPHICS::SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME();
		fVar7 = (SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_104)) / fLocal_110);
		iVar8 = (SYSTEM::FLOOR((fVar7 / (1f / 2f))) - 1);
		iVar9 = (iLocal_105 + iVar8);
		iVar10 = (iLocal_105 - iVar8);
		if (iVar9 >= 122)
		{
			iVar9 = 121;
		}
		if (iVar10 < 0)
		{
			iVar10 = 0;
		}
		if (iVar9 > iLocal_107)
		{
			iVar0 = iLocal_107 + 1;
			while (iVar0 <= iVar9)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109.f_0)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar9 = (iVar0 - 1);
						iVar0 = iVar9 + 1;
					}
				}
				iVar0++;
			}
			iLocal_107 = iVar9;
		}
		if (iVar10 < iLocal_108)
		{
			iVar0 = (iLocal_108 - 1);
			while (iVar0 >= iVar10)
			{
				iVar11 = (iVar0 / 2);
				if (iVar11 < Local_109.f_0)
				{
					if (Local_109[iVar11 /*5*/].f_4)
					{
						func_127(iVar0, 1);
					}
					else
					{
						iVar10 = iVar0 + 1;
						iVar0 = (iVar10 - 1);
					}
				}
				iVar0 = (iVar0 + -1);
			}
			iLocal_108 = iVar10;
		}
		iVar0 = 0;
		while (iVar0 < Local_101.f_0)
		{
			if ((MISC::GET_GAME_TIMER() - Local_101[iVar0 /*5*/].f_4) > 1000)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			if ((MISC::GET_GAME_TIMER() - Local_101[iVar0 /*5*/].f_4) > 6000)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_101[iVar0 /*5*/]);
			}
			iVar0++;
		}
	}
}

void func_127(int iParam0, bool bParam1)//Position - 0x1009D
{
	int iVar0;
	if (iParam0 >= 0)
	{
		if ((iParam0 % 2) == 1)
		{
			iVar0 = (iParam0 / 2);
			if (iVar0 + 1 < 61)
			{
				func_128(Local_109[(iParam0 / 2) /*5*/] + Local_109[(iParam0 / 2) + 1 /*5*/] / Vector(2f, 2f, 2f) + Vector(fLocal_97, fLocal_97, fLocal_97), bParam1);
			}
		}
		else if ((iParam0 / 2) < 61)
		{
			func_128(Local_109[(iParam0 / 2) /*5*/] + Vector(fLocal_97, fLocal_97, fLocal_97), bParam1);
		}
	}
}

void func_128(struct<3> Param0, bool bParam1)//Position - 0x1010B
{
	if (iLocal_103 == 0)
	{
		bParam1 = false;
	}
	FIRE::REMOVE_SCRIPT_FIRE(Local_101[iLocal_106 /*5*/]);
	if (Local_101[iLocal_106 /*5*/].f_4 != 0)
	{
		GRAPHICS::FADE_DECALS_IN_RANGE(Local_101[iLocal_106 /*5*/].f_1, 0.4f, 1f);
	}
	Local_101[iLocal_106 /*5*/].f_4 = MISC::GET_GAME_TIMER();
	Local_101[iLocal_106 /*5*/].f_1 = { Param0 };
	Local_101[iLocal_106 /*5*/] = FIRE::START_SCRIPT_FIRE(Param0, iLocal_94, bParam1);
	iLocal_106++;
	if (iLocal_106 >= 31)
	{
		iLocal_106 = 0;
	}
}

void func_129()//Position - 0x10194
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	if (bLocal_89)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (iVar1 == joaat("WEAPON_PETROLCAN"))
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_95 == 0)
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 8f, 4);
					iLocal_95 = MISC::GET_GAME_TIMER() + 250;
				}
				if (MISC::GET_GAME_TIMER() > iLocal_95)
				{
					if (!bLocal_85)
					{
						fVar4 = 9999.9f;
						Local_98 = { __LIB_29__::func_745() };
						iVar0 = 0;
						while (iVar0 < Local_109.f_0)
						{
							if (HUD::DOES_BLIP_EXIST(Local_109[iVar0 /*5*/].f_3))
							{
								fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_98, HUD::GET_BLIP_COORDS(Local_109[iVar0 /*5*/].f_3), true);
								fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_109[iVar0 /*5*/], HUD::GET_BLIP_COORDS(Local_109[iVar0 /*5*/].f_3), true);
								if (fVar3 == 0f || fVar2 < fVar3)
								{
									if (fVar2 < 2f)
									{
										Local_109[iVar0 /*5*/] = { Local_98 };
									}
								}
								if (fVar2 < fVar4)
								{
									fVar4 = fVar2;
									iVar5 = iVar0;
								}
							}
							iVar0++;
						}
						if (fVar4 < 2f)
						{
							if (iLocal_91 != -1)
							{
								if (MISC::ABSI((iLocal_92 - iVar5)) > 1)
								{
									iLocal_92 = -1;
								}
								if (iLocal_92 == -1)
								{
									iLocal_92 = iLocal_91;
								}
								if (MISC::ABSI((iLocal_92 - iVar5)) < 3 && MISC::ABSI((iLocal_92 - iVar5)) > 0)
								{
									if (iLocal_92 < iVar5)
									{
										iVar6 = iLocal_92;
										while (iVar6 <= (iVar5 - 1))
										{
											if (HUD::DOES_BLIP_EXIST(Local_109[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									else
									{
										iVar6 = iVar5 + 1;
										while (iVar6 <= iLocal_92)
										{
											if (HUD::DOES_BLIP_EXIST(Local_109[iVar6 /*5*/].f_3))
											{
												if (HUD::GET_BLIP_ALPHA(Local_109[iVar6 /*5*/].f_3) > 0)
												{
													HUD::SET_BLIP_ALPHA(Local_109[iVar6 /*5*/].f_3, 0);
													Local_109[iVar6 /*5*/].f_4 = 1;
													iLocal_93 = (iLocal_93 - 1);
												}
											}
											iVar6++;
										}
									}
									iLocal_92 = iLocal_91;
								}
								if (iVar5 == 0)
								{
									if (HUD::DOES_BLIP_EXIST(Local_109[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 == 60)
								{
									if (HUD::DOES_BLIP_EXIST(Local_109[iVar5 /*5*/].f_3))
									{
										if (HUD::GET_BLIP_ALPHA(Local_109[iVar5 /*5*/].f_3) > 0)
										{
											HUD::SET_BLIP_ALPHA(Local_109[iVar5 /*5*/].f_3, 0);
											Local_109[iVar5 /*5*/].f_4 = 1;
											iLocal_93 = (iLocal_93 - 1);
										}
									}
								}
								if (iVar5 < 60)
								{
									if (__LIB_0__::func_86(Local_109[iVar5 + 1 /*5*/]))
									{
										if (HUD::DOES_BLIP_EXIST(Local_109[iVar5 /*5*/].f_3))
										{
											if (HUD::GET_BLIP_ALPHA(Local_109[iVar5 /*5*/].f_3) > 0)
											{
												HUD::SET_BLIP_ALPHA(Local_109[iVar5 /*5*/].f_3, 0);
												Local_109[iVar5 /*5*/].f_4 = 1;
												iLocal_93 = (iLocal_93 - 1);
											}
										}
									}
								}
							}
							iLocal_91 = iVar5;
						}
					}
				}
			}
			else
			{
				iLocal_91 = -1;
				iLocal_92 = -1;
				iLocal_95 = 0;
			}
		}
	}
}

void func_131()//Position - 0x10518
{
	int iVar0;
	if (iLocal_87)
	{
		if (iLocal_102)
		{
			iVar0 = 0;
			while (iVar0 < Local_101.f_0)
			{
				FIRE::REMOVE_SCRIPT_FIRE(Local_101[iVar0 /*5*/]);
				iVar0++;
			}
		}
		iLocal_87 = 0;
		iLocal_102 = 1;
		iLocal_104 = MISC::GET_GAME_TIMER();
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		if (iLocal_90 != -1)
		{
			iLocal_108 = iLocal_90;
			iLocal_107 = iLocal_90;
			iLocal_105 = iLocal_90;
		}
		else
		{
			iLocal_108 = -1;
			iLocal_107 = -1;
			iLocal_105 = iLocal_90;
		}
		iLocal_106 = 1;
	}
}

void func_132()//Position - 0x105A6
{
	if (!iLocal_88)
	{
		iLocal_88 = 1;
	}
}

void func_133()//Position - 0x105B9
{
	int iVar0;
	if (iLocal_149 >= 4)
	{
		iVar0 = 0;
		while (iVar0 < Local_113.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/]))
			{
				if (!Local_113[iVar0 /*33*/].f_23)
				{
					if (PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
					{
						Local_113[iVar0 /*33*/].f_23 = 1;
						__LIB_0__::func_401(151, 1, 0);
					}
				}
				if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(Local_113[iVar0 /*33*/]) == iLocal_116)
				{
					__LIB_0__::func_499(Local_113[iVar0 /*33*/], &(Local_113[iVar0 /*33*/].f_25), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1, 0);
				}
			}
			else if (Local_113[iVar0 /*33*/] != 0)
			{
				__LIB_0__::func_489(&(Local_113[iVar0 /*33*/].f_25));
				Local_113[iVar0 /*33*/] = 0;
			}
			iVar0++;
		}
	}
}

void func_135()//Position - 0x106E0
{
	int iVar0;
	iVar0 = iLocal_149;
	func_380();
	switch (iLocal_149)
	{
		case 0:
			func_272();
			break;
		case 1:
			func_269();
			break;
		case 2:
			func_224();
			break;
		case 3:
			func_207();
			break;
		case 4:
			func_206();
			break;
		case 5:
			func_206();
			break;
		case 6:
			func_206();
			break;
		case 7:
			func_202();
			break;
		case 8:
			func_181();
			break;
		case 9:
			func_149();
			break;
	}
	if (iLocal_149 != iVar0)
	{
		iLocal_150 = 0;
	}
	if (bLocal_152)
	{
		func_136(0);
	}
}

void func_136(char* sParam0)//Position - 0x10792
{
	while (!AUDIO::TRIGGER_MUSIC_EVENT("CHN2_MISSION_FAIL"))
	{
		func_28(21, 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		sLocal_151 = sParam0;
	}
	if (MISC::IS_STRING_NULL(sLocal_151))
	{
		sLocal_151 = "CHFAIL";
	}
	func_138(sLocal_151);
	while (!__LIB_0__::func_204())
	{
		func_28(2, 0);
	}
	func_454(1);
}

void func_138(char* sParam0)//Position - 0x1081A
{
	__LIB_0__::func_324(sParam0);
	func_139(0);
}

void func_139(int iParam0)//Position - 0x1082D
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_323();
		if (!func_140(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_140(int iParam0)//Position - 0x10872
{
	int iVar0;
	int iVar1;
	__LIB_26__::func_260();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_322(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_141(&(Global_113386.f_2363.f_539), iVar1);
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

void func_141(var uParam0, int iParam1)//Position - 0x10982
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
			if (!func_143(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_143(int iParam0, var uParam1, float fParam2)//Position - 0x10B56
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
			return func_143(8, uParam1, fParam2);
			break;
		case 10:
			return func_143(8, uParam1, fParam2);
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

void func_149()//Position - 0x1168C
{
	func_176(46, 52);
	func_166(1, 49, 0, 2, 48, 1, 0, 1, 0, 1, 0);
	func_166(2, 52, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 53, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 54, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 55, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 27, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 12, 0, 0, 1, 0, 1, 0);
	func_154();
	if (func_153(1, 49))
	{
		func_150();
	}
}

void func_150()//Position - 0x1171A
{
	HUD::CLEAR_PRINTS();
	__LIB_6__::func_823(0, 0);
	func_454(0);
}

int func_153(int iParam0, int iParam1)//Position - 0x1183F
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		if (Local_385[iParam0 /*10*/].f_3 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_154()//Position - 0x11865
{
	struct<3> Var0;
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.4756f, 4953.2417f, 43.05545f, 2466.34f, 4986.15f, 57.25303f, 14.4375f, false, true, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2436.7617f, 4956.0107f, 44.490093f, 2443.3796f, 4962.6245f, 48.2233f, 1.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.6694f, 4966.5537f, 44.95141f, 2452.4966f, 4969.8247f, 48.89074f, 2.3125f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2454.863f, 4968.6855f, 44.95141f, 2460.505f, 4974.4087f, 48.82641f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2459.0583f, 4977.546f, 44.95141f, 2460.4106f, 4979.3022f, 48.82641f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.602f, 4984.746f, 44.736694f, 2461.9766f, 4989.49f, 48.478436f, 1.6875f, false, true, 0))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		else if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2454.1792f, 4995.2812f, 44.541508f, 2453.096f, 4993.9053f, 48.320435f, 1.6875f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2449.4011f, 4990.354f, 44.92924f, 2447.717f, 4988.8647f, 48.821293f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2443.9062f, 4990.104f, 44.444595f, 2439.0066f, 4985.2715f, 48.30458f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2439.6016f, 4982.387f, 44.951412f, 2440.7969f, 4981.365f, 48.826416f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2440.2588f, 4980.6714f, 44.951416f, 2434.7688f, 4975.055f, 48.826416f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.1646f, 4972.586f, 44.29909f, 2430.1138f, 4970.5454f, 48.210857f, 1.6875f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2428.4602f, 4968.5693f, 44.815968f, 2426.6323f, 4966.6025f, 48.29342f, 1.6875f, false, true, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2455.4868f, 4997.5664f, 43.110104f, 2423.6533f, 4962.8374f, 57.348885f, 14.4375f, false, true, 0))
	{
		if (Var0.f_2 < 50f)
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.913f, 4965.2734f, 50.15687f, 2444.4895f, 4967.4097f, 53.817825f, 1.6875f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2445.2385f, 4969.0703f, 49.942844f, 2450.3652f, 4972.1885f, 54.032505f, 2.375f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2452.3315f, 4971.8174f, 49.942825f, 2457.9773f, 4977.5825f, 53.880974f, 2.375f, false, true, 0))
			{
				if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
				}
			}
		}
		else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.6206f, 4978.4624f, 49.942825f, 2453.932f, 4982.161f, 53.817825f, 2.375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2452.0542f, 4984.1562f, 49.942825f, 2448.1199f, 4987.8086f, 53.81316f, 2.375f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.014f, 4980.5386f, 49.942825f, 2435.7957f, 4971.945f, 53.903877f, 2.375f, false, true, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
			{
				FIRE::START_ENTITY_FIRE(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x11CEF
{
	int iVar0;
	int iVar1;
	if (Local_389[iParam0 /*4*/] != iParam1)
	{
		Local_389[iParam0 /*4*/].f_1 = 0;
		Local_389[iParam0 /*4*/] = iParam1;
	}
	if (!Local_389[iParam0 /*4*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_389[iParam0 /*4*/])
			{
				case 0:
					break;
				case 1:
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						PLAYER::SET_SPECIAL_ABILITY_MULTIPLIER(2f);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				case 4:
					if (PLAYER::IS_SPECIAL_ABILITY_METER_FULL(PLAYER::PLAYER_ID(), 0))
					{
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_0__::func_151("USESPEC_KM", -1);
						}
						else
						{
							__LIB_0__::func_151("USESPEC", -1);
						}
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				case 3:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							__LIB_0__::func_151("FRMFLE", -1);
							Local_389[iParam0 /*4*/].f_1 = 1;
							break;
					}
					break;
				case 5:
					if (!__LIB_0__::func_75() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						__LIB_0__::func_325("FRMLK", 7500, 1);
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				case 2:
					__LIB_0__::func_325("FRMSNP", 7500, 1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				case 11:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
							{
								Local_389[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 1000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_389[iParam0 /*4*/].f_3)
							{
								if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
								{
									__LIB_0__::func_151("FRMSTLTH_KM", -1);
								}
								else
								{
									__LIB_0__::func_151("FRMSTLTH", -1);
								}
								Local_389[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				case 6:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							if (MISC::GET_PROFILE_SETTING(211) != 0)
							{
								Local_389[iParam0 /*4*/].f_3 = MISC::GET_GAME_TIMER() + 4000;
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_389[iParam0 /*4*/].f_3)
							{
								iVar0 = joaat("WEAPON_UNARMED");
								WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
								if ((iVar0 != joaat("WEAPON_SNIPERRIFLE") && iVar0 != joaat("WEAPON_HEAVYSNIPER")) && iVar0 != joaat("WEAPON_UNARMED"))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										if (!__LIB_0__::func_75())
										{
											if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											{
												__LIB_0__::func_151("FRMSHOT", -1);
												Local_389[iParam0 /*4*/].f_1 = 1;
											}
										}
									}
								}
							}
							break;
					}
					break;
				case 7:
					__LIB_0__::func_325("FRMFLC", 7500, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_178, "FRMBLIPB");
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				case 8:
					switch (Local_389[iParam0 /*4*/].f_2)
					{
						case 0:
							__LIB_0__::func_151("FRMPET2", -1);
							Local_389[iParam0 /*4*/].f_2++;
							break;
						case 1:
							if (!__LIB_0__::func_75())
							{
								__LIB_0__::func_210("FRMTRL", 7500, 1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						case 2:
							iVar1 = joaat("WEAPON_UNARMED");
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
							{
								if (iVar1 == joaat("WEAPON_PETROLCAN"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
									{
										HUD::CLEAR_HELP(true);
									}
								}
							}
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								__LIB_0__::func_151("FRMTRL2", -1);
								Local_389[iParam0 /*4*/].f_2++;
							}
							break;
						case 3:
							if (func_8())
							{
								if (!__LIB_0__::func_75())
								{
									if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
									{
										if (!HUD::DOES_BLIP_EXIST(iLocal_178))
										{
											HUD::CLEAR_PRINTS();
											__LIB_0__::func_325("FRMSHP", 7500, 1);
											iLocal_178 = __LIB_0__::func_392(2454.8953f, 4950.8945f, 44.1488f, 0);
										}
									}
									else if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2454.8953f, 4950.8945f, 44.1488f, 1) < 5f)
									{
										HUD::CLEAR_PRINTS();
										if (HUD::DOES_BLIP_EXIST(iLocal_178))
										{
											HUD::REMOVE_BLIP(&iLocal_178);
										}
										__LIB_0__::func_325("FRMIGN", 7500, 1);
										AUDIO::START_AUDIO_SCENE("CHI_2_SHOOT_GAS");
										Local_389[iParam0 /*4*/].f_2++;
									}
								}
							}
							break;
						case 4:
							if (func_93(37))
							{
								if (__LIB_0__::func_405("FRMIGN", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
							}
							if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
							{
								Local_389[iParam0 /*4*/].f_2 = 3;
							}
							break;
					}
					break;
				case 9:
					__LIB_0__::func_151("FRMMISS", -1);
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				case 10:
					if (func_93(34))
					{
						__LIB_0__::func_325("FRMFRH", 7500, 1);
					}
					else
					{
						__LIB_0__::func_325("FRMFRG", 7500, 1);
					}
					Local_389[iParam0 /*4*/].f_1 = 1;
					break;
				case 12:
					__LIB_0__::func_325("FRMLEAVE", 1, 1);
					if (func_93(48))
					{
						HUD::CLEAR_PRINTS();
						Local_389[iParam0 /*4*/].f_1 = 1;
					}
					break;
				case 13:
					__LIB_0__::func_325("LOSE_WANTED" /* GXT: Lose the Cops. */, 7500, 1);
					break;
				}
			}
	}
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x12237
{
	bLocal_386 = false;
	iLocal_387 = 0;
	if (func_159(&bLocal_386, &iLocal_387, iParam0, iParam1))
	{
		if (func_159(&bLocal_386, &iLocal_387, iParam2, iParam3))
		{
			if (func_159(&bLocal_386, &iLocal_387, iParam4, iParam5))
			{
				if (func_159(&bLocal_386, &iLocal_387, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (bLocal_386)
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x12296
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		case 1:
			return 0;
			break;
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_162(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		case 8:
			if (*iParam0)
			{
				return 0;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_93(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		case 4:
			if (iParam3 != 0 && func_162(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		case 5:
			if (iParam3 != 0 && func_93(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		case 7:
			if (func_161(iParam3))
			{
				if (func_162(iParam3))
				{
					*iParam0 = 1;
				}
				else
				{
					*iParam0 = 0;
				}
			}
			else
			{
				if (func_93(iParam3))
				{
					func_160(iParam3);
				}
				*iParam0 = 0;
			}
			break;
	}
	return 1;
}

void func_160(int iParam0)//Position - 0x123EF
{
	int iVar0;
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		Local_388[iVar0 /*8*/].f_3 = 1;
	}
}

int func_161(int iParam0)//Position - 0x1241B
{
	int iVar0;
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (Local_388[iVar0 /*8*/] == iParam0)
	{
		if (Local_388[iVar0 /*8*/].f_3)
		{
			return 1;
		}
	}
	return 0;
}

int func_162(int iParam0)//Position - 0x1244E
{
	int iVar0;
	iVar0 = (iParam0 - Local_388[0 /*8*/]);
	if (iVar0 >= 0 && iVar0 < Local_388.f_0)
	{
		if (Local_388[iVar0 /*8*/] == iParam0)
		{
			if (!Local_388[iVar0 /*8*/].f_2)
			{
				return 1;
			}
		}
		else if (Local_388[iVar0 /*8*/] != 0)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x124A6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	if (Local_390[iParam0 /*7*/] != iParam1)
	{
		Local_390[iParam0 /*7*/].f_1 = 0;
		Local_390[iParam0 /*7*/] = iParam1;
	}
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_158(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
		{
			if (!Local_390[iParam0 /*7*/].f_2)
			{
				Local_390[iParam0 /*7*/].f_2 = 1;
			}
			switch (Local_390[iParam0 /*7*/])
			{
				case 0:
					break;
				case 1:
					if (func_35("TRV_WTF", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				case 2:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
							Local_390[iParam0 /*7*/].f_3++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_390[iParam0 /*7*/].f_4)
							{
								if (__LIB_0__::func_75())
								{
									Local_390[iParam0 /*7*/].f_4 = MISC::GET_GAME_TIMER() + 2000;
								}
								else
								{
									iVar0 = 0;
									if (func_165(&iVar0, 2, 1))
									{
										if (func_35("RAGE", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 14000));
										}
									}
									else
									{
										Local_390[iParam0 /*7*/].f_1 = 1;
									}
								}
							}
							break;
					}
					break;
				case 4:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("COOKSEE", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				case 3:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = func_18(15);
							Local_390[iParam0 /*7*/].f_5 = func_18(16);
							if (Local_390[iParam0 /*7*/].f_4 != -1 && Local_390[iParam0 /*7*/].f_5 != -1)
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						case 1:
							if (PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_4 = Local_390[iParam0 /*7*/].f_5;
								if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						case 2:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD8", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						case 3:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD9", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						case 4:
							if (func_165(&iVar1, 2, 1))
							{
								if (iVar1 != Local_390[iParam0 /*7*/].f_4)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar1;
									Local_390[iParam0 /*7*/].f_3++;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						case 5:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD10", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				case 5:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD11", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				case 6:
					Local_390[iParam0 /*7*/].f_4 = func_18(23);
					if (Local_390[iParam0 /*7*/].f_4 != -1)
					{
						if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
						{
							if (func_35("ONEILGUARD12", 6, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
						}
						else
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				case 7:
					if (func_35("CHI2_drive", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				case 9:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
							}
							break;
						case 1:
							if (func_35("SEETREVOR", 3, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
						case 2:
							if (func_35("GOON2TREV", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "CHIN2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				case 10:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								if (Local_390[iParam0 /*7*/].f_6 < 3)
								{
									if (func_35("ONEILGUARD5", 5, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else if (Local_390[iParam0 /*7*/].f_6 < 6)
								{
									if (func_35("ONEILGUARD6", 6, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILGUARD2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
									{
										Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
										Local_390[iParam0 /*7*/].f_6++;
										Local_390[iParam0 /*7*/].f_3 = 0;
									}
								}
								else
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				case 11:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 1, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("COOKATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "oneilcook", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOONATT", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("GOON2ATTO", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				case 12:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_390[iParam0 /*7*/].f_4)
							{
								if (func_165(&(Local_390[iParam0 /*7*/].f_5), 2, 1))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								switch (Local_390[iParam0 /*7*/].f_6)
								{
									case 0:
									case 2:
									case 5:
									case 9:
										if (func_35("GOONIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									case 1:
									case 6:
									case 8:
									case 11:
										if (func_35("GOON2ATTI", 4, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									case 3:
									case 4:
									case 7:
									case 10:
										if (func_35("ATTACKIN", 3, Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "ONEILCOOK", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
										{
											Local_390[iParam0 /*7*/].f_4 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 10000));
											Local_390[iParam0 /*7*/].f_6++;
											Local_390[iParam0 /*7*/].f_3 = 0;
										}
										break;
									case 12:
										Local_390[iParam0 /*7*/].f_1 = 1;
										break;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				case 14:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar2 = 0;
							while (iVar2 < Local_113.f_0)
							{
								if (Local_113[iVar2 /*33*/].f_1 == 2)
								{
									if (!PED::IS_PED_INJURED(Local_113[iVar2 /*33*/]))
									{
										if (PED::IS_PED_IN_COMBAT(Local_113[iVar2 /*33*/], 0))
										{
											if (PED::CAN_PED_IN_COMBAT_SEE_TARGET(Local_113[iVar2 /*33*/], PLAYER::PLAYER_PED_ID()))
											{
												Local_390[iParam0 /*7*/].f_4 = iVar2;
												Local_390[iParam0 /*7*/].f_3++;
											}
										}
									}
								}
								iVar2++;
							}
							break;
						case 1:
							if (func_35("G2TREVIN", 4, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "chin2goon2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				case 15:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD3", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("ONEILGUARD1", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "ONEILGUARD1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				case 16:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (func_165(&(Local_390[iParam0 /*7*/].f_4), 1, 1))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						case 1:
							if (func_35("ONEILGUARD7", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "oneilguard2", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						case 2:
							if (func_35("CHI2_app", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				case 17:
					if (func_35("CHI2_app", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				case 19:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (__LIB_11__::func_988("ONEILGUARD4") || __LIB_11__::func_988("SEETREVOR"))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							break;
						case 1:
							if (func_35("CHI2_HARD", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
							{
								Local_390[iParam0 /*7*/].f_1 = 1;
							}
							break;
					}
					break;
				case 20:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() > Local_390[iParam0 /*7*/].f_5)
							{
								fVar4 = 999f;
								Local_390[iParam0 /*7*/].f_4 = -1;
								iVar3 = 0;
								while (iVar3 < Local_113.f_0)
								{
									if (Local_113[iVar3 /*33*/].f_1 == 2)
									{
										if (!PED::IS_PED_INJURED(Local_113[iVar3 /*33*/]))
										{
											fVar5 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_113[iVar3 /*33*/], 1);
											if (fVar5 < fVar4)
											{
												fVar4 = fVar5;
												Local_390[iParam0 /*7*/].f_4 = iVar3;
											}
										}
									}
									iVar3++;
								}
								if (Local_390[iParam0 /*7*/].f_4 == -1)
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
								else
								{
									Local_390[iParam0 /*7*/].f_3++;
								}
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (func_35("CHI2_outs", 5, Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], "Oneilguard1", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_1 = 1;
								}
							}
							else
							{
								Local_390[iParam0 /*7*/].f_5 = MISC::GET_GAME_TIMER() + 6000;
								Local_390[iParam0 /*7*/].f_3 = 0;
							}
							break;
					}
					break;
				case 18:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							iVar6 = 0;
							while (iVar6 < Local_113.f_0)
							{
								if (Local_113[iVar6 /*33*/].f_2 == 8)
								{
									Local_390[iParam0 /*7*/].f_4 = iVar6;
								}
								if (Local_113[iVar6 /*33*/].f_2 == 9)
								{
									Local_390[iParam0 /*7*/].f_5 = iVar6;
								}
								iVar6++;
							}
							Local_390[iParam0 /*7*/].f_3++;
							break;
						case 1:
							if (!__LIB_0__::func_75())
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.15f)
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) < 0.65f)
										{
											if (__LIB_0__::func_76(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/], PLAYER::PLAYER_PED_ID(), 1) < 30f)
											{
												Local_390[iParam0 /*7*/].f_3 = 3;
											}
										}
									}
								}
							}
							break;
						case 2:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						case 3:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/]))
							{
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_113[Local_390[iParam0 /*7*/].f_5 /*33*/], "generic_cheer", "A_M_M_Hillbilly_01_White_mini_03", "SPEECH_PARAMS_FORCE_SHOUTED", false);
								Local_390[iParam0 /*7*/].f_3++;
							}
							else
							{
								Local_390[iParam0 /*7*/].f_3 = 1;
							}
							break;
						case 4:
							if (!PED::IS_PED_INJURED(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/]))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_113[Local_390[iParam0 /*7*/].f_4 /*33*/].f_14) > 0.75f)
									{
										Local_390[iParam0 /*7*/].f_3 = 1;
									}
								}
							}
							break;
					}
					break;
				case 21:
					if (func_35("CHI2_find", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				case 26:
					if (func_164())
					{
						if (func_35("CHI2_pourmis", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
						{
							Local_390[iParam0 /*7*/].f_1 = 1;
						}
					}
					break;
				case 27:
					if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				case 22:
					switch (Local_390[iParam0 /*7*/].f_3)
					{
						case 0:
							Local_390[iParam0 /*7*/].f_4 = 2500;
							Local_390[iParam0 /*7*/].f_5 = 0;
							Local_390[iParam0 /*7*/].f_3 = 1;
							break;
						case 1:
							Local_390[iParam0 /*7*/].f_4 = (Local_390[iParam0 /*7*/].f_4 - SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							if (Local_390[iParam0 /*7*/].f_4 <= 0)
							{
								Local_390[iParam0 /*7*/].f_3 = 2;
							}
							break;
						case 2:
							if (Local_390[iParam0 /*7*/].f_5 < 14)
							{
								if (func_35("CHI2_pour", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									Local_390[iParam0 /*7*/].f_3 = 1;
									Local_390[iParam0 /*7*/].f_4 = (12000 + MISC::GET_RANDOM_INT_IN_RANGE(3000, 5000));
									Local_390[iParam0 /*7*/].f_5++;
								}
							}
							break;
					}
					break;
				case 23:
					if (func_35("CHI2_light", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				case 24:
					if (func_35("CHI2_boom", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				case 25:
					if (func_35("CHI2_burn", 1, PLAYER::PLAYER_PED_ID(), "TREVOR", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
					{
						Local_390[iParam0 /*7*/].f_1 = 1;
					}
					break;
				}
			}
	}
}

int func_164()//Position - 0x138DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (Local_109[iVar0 /*5*/].f_4 == 1)
		{
			if (iVar2 == 0)
			{
				iVar2 = 1;
				iVar1++;
				if (iVar1 > 1)
				{
					return 1;
				}
			}
		}
		else if (iVar2 == 1)
		{
			iVar2 = 0;
		}
		iVar0++;
	}
	return 0;
}

int func_165(int iParam0, int iParam1, int iParam2)//Position - 0x1392B
{
	int iVar0;
	float fVar1;
	float fVar2;
	fVar2 = 9999f;
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (Local_113[iVar0 /*33*/].f_1 == iParam1)
		{
			if (iParam2 == 0 || (iParam2 == 1 && !PED::IS_PED_INJURED(Local_113[iVar0 /*33*/])))
			{
				fVar1 = __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_113[iVar0 /*33*/], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					*iParam0 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (*iParam0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_166(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x139B1
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	if (Local_385[iParam0 /*10*/] != iParam1 || Local_385[iParam0 /*10*/].f_1 == 0)
	{
		Local_385[iParam0 /*10*/] = iParam1;
		Local_385[iParam0 /*10*/].f_1 = 1;
		Local_385[iParam0 /*10*/].f_3 = 0;
		Local_385[iParam0 /*10*/].f_6 = 0;
		Local_385[iParam0 /*10*/].f_4 = 0;
		Local_385[iParam0 /*10*/].f_7 = 0;
		Local_385[iParam0 /*10*/].f_8 = 0;
		Local_385[iParam0 /*10*/].f_9 = 0f;
	}
	if (Local_385[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = func_158(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !bVar0)
	{
		Local_385[iParam0 /*10*/].f_2 = 0;
	}
	if (Local_385[iParam0 /*10*/].f_3 == 0 || Local_385[iParam0 /*10*/].f_6 == -1)
	{
		if (bVar0 == 1)
		{
			if (!Local_385[iParam0 /*10*/].f_2)
			{
				Local_385[iParam0 /*10*/].f_2 = 1;
			}
			switch (Local_385[iParam0 /*10*/])
			{
				case 1:
					break;
				case 2:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::START_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 3:
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 1991.05f, 3054.2625f, 46.2147f, 1) > 250f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[11 /*33*/]))
						{
							PED::DELETE_PED(&(Local_113[11 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[10 /*33*/]))
						{
							PED::DELETE_PED(&(Local_113[10 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[12 /*33*/]))
						{
							PED::DELETE_PED(&(Local_113[12 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[13 /*33*/]))
						{
							PED::DELETE_PED(&(Local_113[13 /*33*/]));
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[14 /*33*/]))
						{
							PED::DELETE_PED(&(Local_113[14 /*33*/]));
						}
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man1A"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man2"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaoCheng"));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaosTranslator"));
						STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmaze");
						STREAMING::REMOVE_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
						STREAMING::REMOVE_ANIM_DICT("missrampageintrooutro");
						if (iLocal_379 != -1)
						{
							if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_379))
							{
								PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_379);
							}
						}
						PED::CLEAR_PED_NON_CREATION_AREA();
						func_31(26, 1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 5:
					if (AUDIO::LOAD_STREAM("CHI_2_FARMHOUSE_INTRO", "CHINESE2_FARMHOUSE_INTRODUCTION"))
					{
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 4:
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2457.4897f, 4977.0947f, 50.567833f, 1) < 400f)
					{
						func_32(27, 0);
						STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
						STREAMING::SET_PED_POPULATION_BUDGET(1);
						STREAMING::PREFETCH_SRL("chinese2_farmhouse_cutscene");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 7:
					if ((!PED::IS_PED_INJURED(Local_113[12 /*33*/]) && !PED::IS_PED_INJURED(Local_113[13 /*33*/])) && !PED::IS_PED_INJURED(Local_113[14 /*33*/]))
					{
						if (func_175(6, 6) < 2)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1981.2567f, 3050.7212f, 41.089954f, 1984.257f, 3055.5427f, 49.473137f, 3.0625f, false, true, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[12 /*33*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) == 7)
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_113[13 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_113[14 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_LOOK_AT_ENTITY(Local_113[12 /*33*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								}
							}
						}
					}
					break;
				case 8:
					fVar1 = __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2450.2136f, 4979.208f, 60.8422f, 1);
					if (fVar1 < 900f)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar4, false))
							{
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar4)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
								{
									fVar2 = (900f - fVar1);
									if (fVar2 < 0f)
									{
										fVar2 = 0f;
									}
									fVar2 = (fVar2 / 900f);
									fVar2 = (fVar2 * 10000f);
									fVar3 = ENTITY::GET_ENTITY_SPEED(iVar4);
									fVar2 = (fVar2 * (fVar3 / 35f));
									if (fVar3 > 35f)
									{
										ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iVar4, 1, 0f, -fVar2, 0f, false, true, false, false);
									}
								}
							}
						}
					}
					break;
				case 9:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", "trvram_6_1h_run_outro", 3))
					{
						Local_385[iParam0 /*10*/].f_6 = 1;
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 321, true);
						if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("walkinterruptible")))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
							if (func_174())
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
						}
					}
					else if (Local_385[iParam0 /*10*/].f_6 == 1)
					{
						STREAMING::REMOVE_ANIM_DICT("missrampageintrooutro");
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 6:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if ((!PED::IS_PED_INJURED(Local_113[12 /*33*/]) && !PED::IS_PED_INJURED(Local_113[13 /*33*/])) && !PED::IS_PED_INJURED(Local_113[14 /*33*/]))
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[12 /*33*/], iLocal_154);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[13 /*33*/], iLocal_154);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[14 /*33*/], iLocal_154);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[12 /*33*/], 17, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[13 /*33*/], 17, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_113[14 /*33*/], 17, true);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_113[12 /*33*/]);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_113[13 /*33*/]);
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_113[14 /*33*/]);
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if ((PED::IS_PED_INJURED(Local_113[12 /*33*/]) || PED::IS_PED_INJURED(Local_113[13 /*33*/])) || PED::IS_PED_INJURED(Local_113[14 /*33*/]))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							if (!PED::IS_PED_INJURED(Local_113[12 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_113[12 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!PED::IS_PED_INJURED(Local_113[13 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_113[13 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							if (!PED::IS_PED_INJURED(Local_113[14 /*33*/]))
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_113[14 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						case 2:
							if (!PED::IS_PED_INJURED(Local_113[12 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_113[12 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_113[12 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[12 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_113[13 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_113[13 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_113[13 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[13 /*33*/]));
							}
							if (!PED::IS_PED_INJURED(Local_113[14 /*33*/]))
							{
								TASK::TASK_SMART_FLEE_PED(Local_113[14 /*33*/], PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
								PED::SET_PED_KEEP_TASK(Local_113[14 /*33*/], true);
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[14 /*33*/]));
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 10:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::PREFETCH_SRL("chinese2_explosion_cutscene");
							AUDIO::STOP_STREAM();
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (iLocal_166 == 1)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_MOLOTOV_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 2)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_STICKY_BOMB_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							if (iLocal_166 == 3)
							{
								if (AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
								{
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						case 2:
							if (STREAMING::IS_SRL_LOADED())
							{
								Local_385[iParam0 /*10*/].f_6 = 10;
							}
							break;
					}
					break;
				case 11:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_385[iParam0 /*10*/].f_7)
							{
								if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
								{
									FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) + Vector(0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 4f)), 16, 1.5f, true, false, 1f, false);
									Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 - 1f);
									Local_385[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(250, 520));
								}
								else
								{
									Local_385[iParam0 /*10*/].f_6 = 2;
								}
							}
							break;
						case 2:
							break;
						default:
							bVar5 = false;
							while (bVar5 < Local_384.f_0)
							{
								if (!BitTest(Local_385[iParam0 /*10*/].f_7, bVar5))
								{
									if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_384[bVar5 /*3*/], 5f))
									{
										MISC::SET_BIT(&(Local_385[iParam0 /*10*/].f_7), bVar5);
										if (Local_385[iParam0 /*10*/].f_6 == 0)
										{
											Local_385[iParam0 /*10*/].f_6 = MISC::GET_GAME_TIMER() + 1500;
										}
									}
								}
								bVar5++;
							}
							if (MISC::GET_GAME_TIMER() > Local_385[iParam0 /*10*/].f_8)
							{
								Local_385[iParam0 /*10*/].f_8 = 0;
								bVar5 = false;
								while (bVar5 < Local_384.f_0)
								{
									if (!BitTest(Local_385[iParam0 /*10*/].f_7, bVar5 + 9) && BitTest(Local_385[iParam0 /*10*/].f_7, bVar5))
									{
										FIRE::ADD_EXPLOSION(Local_384[bVar5 /*3*/], 16, 1.5f, true, false, 1f, false);
										MISC::SET_BIT(&(Local_385[iParam0 /*10*/].f_7), bVar5 + 9);
										bVar5 = 8;
										Local_385[iParam0 /*10*/].f_8 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(150, 320));
									}
									bVar5++;
								}
							}
							if (Local_385[iParam0 /*10*/].f_6 != 0)
							{
								if (MISC::GET_GAME_TIMER() > Local_385[iParam0 /*10*/].f_6)
								{
									Local_385[iParam0 /*10*/].f_6 = 1;
									Local_385[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 300;
									Local_385[iParam0 /*10*/].f_9 = 16f;
								}
							}
							break;
					}
					break;
				case 12:
					iVar6 = func_18(8);
					iVar7 = func_18(9);
					func_105(iVar6, 20, 0, 0);
					func_105(iVar7, 20, 0, 0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 42:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_01_CLASS_ROCK" /* GXT: Los Santos Rock Radio */);
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
								{
									iLocal_144 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_144, false))
									{
										if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_144))
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
						case 2:
							if (AUDIO::PREPARE_MUSIC_EVENT("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
							break;
						case 3:
							if (AUDIO::TRIGGER_MUSIC_EVENT("CHN2_TREV_RADIO_1_FRTA"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						case 4:
							if (__LIB_31__::func_732(iLocal_144))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_144, false))
								{
									if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iLocal_144))
									{
										Local_385[iParam0 /*10*/].f_7 = (Local_385[iParam0 /*10*/].f_7 + MISC::GET_GAME_TIMER() + 7000);
										Local_385[iParam0 /*10*/].f_6++;
									}
								}
							}
							break;
						case 5:
							if (__LIB_31__::func_732(iLocal_144))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_144, false))
								{
									if (MISC::GET_GAME_TIMER() > Local_385[iParam0 /*10*/].f_7)
									{
										if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 6 && AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
										{
											if (AUDIO::GET_MUSIC_VOL_SLIDER() != 0)
											{
												if (func_35("CHI2_rad", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
												{
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 5000;
										}
									}
								}
							}
							break;
						case 6:
							if (__LIB_11__::func_988("CHI2_rad"))
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						case 7:
							if (!__LIB_11__::func_988("CHI2_rad"))
							{
								if (__LIB_31__::func_732(iLocal_144))
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_144, false))
									{
										if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
										{
											if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 6)
											{
												if (iLocal_177 == -1)
												{
													iLocal_177 = AUDIO::GET_SOUND_ID();
													AUDIO::PLAY_SOUND_FRONTEND(iLocal_177, "Change_Station_Loud", "Radio_Soundset", true);
													Local_385[iParam0 /*10*/].f_6++;
												}
											}
											else
											{
												Local_385[iParam0 /*10*/].f_6 = 9;
											}
										}
									}
								}
							}
							break;
						case 8:
							if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("CHN2_TREV_RADIO_2_FRTA"))
								{
									AUDIO::START_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						case 9:
							if (__LIB_31__::func_732(iLocal_144))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_144, false))
								{
									if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() == 6)
									{
										if (AUDIO::GET_MUSIC_VOL_SLIDER() != 0)
										{
											if (func_35("CHI2_radb", 1, PLAYER::PLAYER_PED_ID(), "Trevor", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
											{
												Local_385[iParam0 /*10*/].f_6++;
											}
										}
										else
										{
											Local_385[iParam0 /*10*/].f_6++;
										}
									}
								}
							}
							break;
					}
					break;
				case 48:
					func_31(9, 1);
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 49:
					if (!__LIB_9__::func_991(2448.25f, 4974.92f, 55.11f, 20f, 500f) || func_93(49))
					{
						if (iLocal_179 != 0)
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_179);
						}
						iLocal_179 = 0;
						__LIB_18__::func_191(50, 2, 0, 1, 0);
						__LIB_18__::func_191(51, 2, 0, 1, 0);
						__LIB_18__::func_191(52, 2, 0, 1, 0);
						__LIB_18__::func_191(53, 2, 0, 1, 0);
						__LIB_18__::func_191(54, 1, 0, 1, 0);
						__LIB_18__::func_191(55, 1, 0, 1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 50:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
							{
								Local_385[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
							{
								iVar8 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
								if (iVar8 > Local_385[iParam0 /*10*/].f_7)
								{
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
								else if (iVar8 < Local_385[iParam0 /*10*/].f_7)
								{
									__LIB_0__::func_401(158, (Local_385[iParam0 /*10*/].f_7 - iVar8), 0);
									Local_385[iParam0 /*10*/].f_7 = iVar8;
								}
							}
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar9, true))
							{
								if (iVar9 == joaat("WEAPON_PETROLCAN"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
									{
										if (Local_385[iParam0 /*10*/].f_8 == 0)
										{
											__LIB_0__::func_403(157, 0);
											Local_385[iParam0 /*10*/].f_8 = 1;
										}
									}
									else if (Local_385[iParam0 /*10*/].f_8 == 1)
									{
										__LIB_0__::func_402(0, 157);
										Local_385[iParam0 /*10*/].f_8 = 0;
									}
								}
								else if (Local_385[iParam0 /*10*/].f_8 == 1)
								{
									__LIB_0__::func_402(0, 157);
									Local_385[iParam0 /*10*/].f_8 = 0;
								}
							}
							else if (Local_385[iParam0 /*10*/].f_8 == 1)
							{
								__LIB_0__::func_402(0, 157);
								Local_385[iParam0 /*10*/].f_8 = 0;
							}
							break;
					}
					break;
				case 51:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = -1;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar10, true))
							{
								if (iVar10 == joaat("WEAPON_PETROLCAN"))
								{
									if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
									{
										if (Local_385[iParam0 /*10*/].f_7 == -1)
										{
											Local_385[iParam0 /*10*/].f_7 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
										}
										if (iLocal_93 == 0)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 2f));
										}
										else if (iLocal_93 < 30 && Local_385[iParam0 /*10*/].f_9 < 70f)
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + (SYSTEM::TIMESTEP() * 1.5f));
										}
										else
										{
											Local_385[iParam0 /*10*/].f_9 = (Local_385[iParam0 /*10*/].f_9 + SYSTEM::TIMESTEP());
										}
										iVar11 = SYSTEM::FLOOR((IntToFloat(Local_385[iParam0 /*10*/].f_7) * (1f - (Local_385[iParam0 /*10*/].f_9 / 90f))));
										if (iVar11 > 0)
										{
											WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar10, iVar11, false);
										}
										else
										{
											WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), iVar10, 0, false);
										}
									}
								}
							}
							break;
					}
					break;
				case 52:
					func_15("CHN2_STOP_TRACK", 0, __LIB_0__::func_459());
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 53:
					AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_CHN2_METH_LAB_FARM_FIRE", true, true);
					__LIB_0__::func_367(1);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 54:
					__LIB_0__::func_367(0);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 55:
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
					STREAMING::SET_PED_POPULATION_BUDGET(3);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 56:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(Local_113[4 /*33*/].f_20))
							{
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_113[4 /*33*/].f_20));
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_113[5 /*33*/].f_20))
							{
								ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_113[5 /*33*/].f_20));
							}
							iVar12 = 0;
							while (iVar12 < iLocal_170)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar12]))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_170[iVar12]));
								}
								iVar12++;
							}
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_can_01"));
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (PED::IS_PED_INJURED(Local_113[23 /*33*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_373))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_373);
									WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_SAWNOFFSHOTGUN"));
									Local_385[iParam0 /*10*/].f_3 = 1;
								}
							}
							break;
					}
					break;
				case 47:
					if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_113[11 /*33*/]))
						{
							if (MISC::GET_GAME_TIMER() > Local_385[iParam0 /*10*/].f_7)
							{
								if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
								{
									AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_113[11 /*33*/], "WHIMPER", "WAVELOAD_PAIN_MALE", "SPEECH_PARAMS_FORCE_NORMAL", false);
									Local_385[iParam0 /*10*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000));
								}
							}
						}
					}
					break;
				case 41:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
							STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
							STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
							if (iLocal_379 == -1 || (iLocal_379 != -1 && !PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_379)))
							{
								iLocal_379 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1991.0813f, 3054.5166f, 46.714745f, 4f, 4f, 4f, 0f, false, 3);
							}
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if ((STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze") && STREAMING::HAS_MODEL_LOADED(joaat("IG_TaoCheng"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_TaosTranslator")))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_113[11 /*33*/]))
								{
									Local_113[11 /*33*/] = PED::CREATE_PED(26, joaat("IG_TaoCheng"), 1991.988f, 3054.51f, 46.215f, 0f, true, true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[11 /*33*/], iLocal_118);
									PED::SET_PED_CAN_BE_TARGETTED(Local_113[11 /*33*/], false);
								}
								else if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[11 /*33*/], iLocal_118);
									PED::SET_PED_CAN_BE_TARGETTED(Local_113[11 /*33*/], false);
								}
								if (!ENTITY::DOES_ENTITY_EXIST(Local_113[10 /*33*/]))
								{
									Local_113[10 /*33*/] = PED::CREATE_PED(26, joaat("IG_TaosTranslator"), 1991.988f, 3054.51f, 46.215f, 0f, true, true);
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[10 /*33*/], iLocal_118);
									PED::SET_PED_CAN_BE_TARGETTED(Local_113[10 /*33*/], false);
									PED::SET_PED_PROP_INDEX(Local_113[10 /*33*/], 1, 0, 1, false);
								}
								else if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
								{
									PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[10 /*33*/], iLocal_118);
									PED::SET_PED_CAN_BE_TARGETTED(Local_113[10 /*33*/], false);
								}
								if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_385[iParam0 /*10*/].f_7, true);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
								}
								if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_385[iParam0 /*10*/].f_7))
									{
										Local_385[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_385[iParam0 /*10*/].f_7, true);
									}
									TASK::TASK_SYNCHRONIZED_SCENE(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						case 2:
							if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]) && !PED::IS_PED_INJURED(Local_113[11 /*33*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_113[10 /*33*/], 0, 0, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[11 /*33*/], true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_113[10 /*33*/], true);
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_385[iParam0 /*10*/].f_7))
								{
									Local_385[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_385[iParam0 /*10*/].f_7, true);
								}
								PED::SET_PED_CONFIG_FLAG(Local_113[11 /*33*/], 118, false);
								PED::SET_PED_CONFIG_FLAG(Local_113[11 /*33*/], 208, true);
								PED::SET_PED_CONFIG_FLAG(Local_113[10 /*33*/], 118, false);
								PED::SET_PED_CONFIG_FLAG(Local_113[10 /*33*/], 208, true);
								Local_385[iParam0 /*10*/].f_6 = 900;
							}
							break;
						case 900:
							if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
							{
								if (!PED::IS_PED_RAGDOLL(Local_113[11 /*33*/]))
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_385[iParam0 /*10*/].f_7))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_385[iParam0 /*10*/].f_7) == 1f)
										{
											Local_385[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
											PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_385[iParam0 /*10*/].f_7, true);
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) < 2)
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
												{
													if (!PED::IS_PED_RAGDOLL(Local_113[10 /*33*/]))
													{
														if (!BitTest(Local_385[iParam0 /*10*/].f_8, 0))
														{
															TASK::TASK_SYNCHRONIZED_SCENE(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_Base_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
											else
											{
												TASK::TASK_SYNCHRONIZED_SCENE(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
												if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
												{
													if (!PED::IS_PED_RAGDOLL(Local_113[10 /*33*/]))
													{
														if (!BitTest(Local_385[iParam0 /*10*/].f_8, 0))
														{
															TASK::TASK_SYNCHRONIZED_SCENE(Local_113[10 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 257, 16, 1000f, 0);
														}
													}
												}
											}
										}
									}
									else
									{
										Local_385[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_113[11 /*33*/], Local_385[iParam0 /*10*/].f_7, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 257, 16, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(Local_385[iParam0 /*10*/].f_7, true);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
							{
								if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_113[10 /*33*/], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(Local_113[10 /*33*/])) || PED::IS_PED_INJURED(Local_113[11 /*33*/])) || (!PED::IS_PED_INJURED(Local_113[10 /*33*/]) && TASK::GET_SCRIPT_TASK_STATUS(Local_113[10 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 2))
								{
									if (!BitTest(Local_385[iParam0 /*10*/].f_8, 0))
									{
										TASK::CLEAR_PED_TASKS(Local_113[10 /*33*/]);
										func_99();
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 30f, 20000, false, false);
										TASK::TASK_COWER(0, -1);
										func_98(&(Local_113[10 /*33*/]), 0);
										MISC::SET_BIT(&(Local_385[iParam0 /*10*/].f_8), 0);
									}
								}
							}
							if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
							{
								if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_113[11 /*33*/], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(Local_113[11 /*33*/])) || BitTest(Local_385[iParam0 /*10*/].f_8, 1)) || (!PED::IS_PED_INJURED(Local_113[11 /*33*/]) && TASK::GET_SCRIPT_TASK_STATUS(Local_113[11 /*33*/], joaat("SCRIPT_TASK_SYNCHRONIZED_SCENE")) == 2))
								{
									ENTITY::SET_ENTITY_HEALTH(Local_113[11 /*33*/], 0, 0);
									if (!PED::IS_PED_RAGDOLL(Local_113[11 /*33*/]))
									{
									}
								}
							}
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 1991.988f, 3054.51f, 46.215f, 1) > 200f)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_113[11 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_113[10 /*33*/]))
								{
									PED::DELETE_PED(&(Local_113[11 /*33*/]));
									PED::DELETE_PED(&(Local_113[10 /*33*/]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaoCheng"));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaosTranslator"));
								STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmaze");
								if (iLocal_379 != -1)
								{
									if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_379))
									{
										PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_379);
									}
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 1995.1694f, 3062.1624f, 46.049f, 1) < 7f)
					{
						if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[11 /*33*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_113[11 /*33*/], PLAYER::PLAYER_PED_ID(), 4000, 2096, 2);
							}
						}
						if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_113[10 /*33*/], joaat("SCRIPT_TASK_LOOK_AT_ENTITY")) != 1)
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_113[10 /*33*/], PLAYER::PLAYER_PED_ID(), 4000, 2096, 2);
							}
						}
					}
					break;
				case 13:
					iVar13 = 0;
					iLocal_382 = 0;
					iVar13 = 0;
					while (iVar13 < Local_113.f_0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar13 /*33*/]))
						{
							if (PED::IS_PED_INJURED(Local_113[iVar13 /*33*/]))
							{
								if (Local_113[iVar13 /*33*/].f_21 == 0)
								{
									if (((PED::GET_PED_CAUSE_OF_DEATH(Local_113[iVar13 /*33*/]) == joaat("WEAPON_ASSAULTSNIPER") || PED::GET_PED_CAUSE_OF_DEATH(Local_113[iVar13 /*33*/]) == joaat("WEAPON_HEAVYSNIPER")) || PED::GET_PED_CAUSE_OF_DEATH(Local_113[iVar13 /*33*/]) == joaat("WEAPON_REMOTESNIPER")) || PED::GET_PED_CAUSE_OF_DEATH(Local_113[iVar13 /*33*/]) == joaat("WEAPON_SNIPERRIFLE"))
									{
										iLocal_382++;
									}
									Local_113[iVar13 /*33*/].f_21 = 1;
								}
							}
						}
						iVar13++;
					}
					if (iLocal_382 > 0)
					{
					}
					if (iLocal_382 > 1)
					{
						__LIB_0__::func_498(150);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 14:
					func_15("CHN2_SNIPE_START", 0, "CHN2_EXPLODE");
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 15f, 4);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 15:
					if (func_93(9))
					{
						func_15("CHN2_SPOTTED", 0, "CHN2_EXPLODE");
					}
					else
					{
						func_15("CHN2_TO_HOUSE", 0, "CHN2_EXPLODE");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 16:
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_176))
					{
						OBJECT::REMOVE_PICKUP(iLocal_176);
					}
					iVar14 = 0;
					MISC::SET_BIT(&iVar14, 3);
					MISC::SET_BIT(&iVar14, 8);
					MISC::SET_BIT(&iVar14, 1);
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_176))
					{
						iLocal_176 = OBJECT::CREATE_PICKUP(joaat("PICKUP_WEAPON_PETROLCAN"), 2436.7747f, 4967.487f, 41.4f, iVar14, -1, true, 0);
						INTERIOR::ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(iLocal_176, "V_8_BasementRm");
						iLocal_178 = __LIB_11__::func_324(iLocal_176);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_178, "FRMBLIP");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 17:
					if (!func_30(5))
					{
						__LIB_0__::func_367(1);
						AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 19:
					STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
					STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
					STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 20:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = MISC::GET_GAME_TIMER() + 4000;
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (MISC::GET_GAME_TIMER() > Local_385[iParam0 /*10*/].f_7)
							{
								Local_385[iParam0 /*10*/].f_7 = 0;
								while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
								{
									if (!PED::IS_PED_INJURED(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
									{
										if (INTERIOR::GET_INTERIOR_FROM_ENTITY(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]) == 0)
										{
											Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 = 5;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_3 = 7;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_4 = 0;
											Local_119[Local_385[iParam0 /*10*/].f_7 /*24*/].f_5 = 0;
											func_105(Local_385[iParam0 /*10*/].f_7, 27, 0, 0);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], iLocal_117);
											__LIB_0__::func_489(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_25));
										}
									}
									Local_385[iParam0 /*10*/].f_7++;
								}
							}
							break;
					}
					break;
				case 21:
					Local_385[iParam0 /*10*/].f_7 = 0;
					while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
					{
						if (!PED::IS_PED_INJURED(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2457.8848f, 4981.1694f, 50.00518f, 2441.5798f, 4965.0884f, 56.240055f, 34.3125f, false, true, 0))
							{
								PED::DELETE_PED(&(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]));
							}
						}
						Local_385[iParam0 /*10*/].f_7++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 22:
					func_15("CHN2_ENTER_HOUSE", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 23:
					iVar15 = 0;
					while (iVar15 < Local_113.f_0)
					{
						if (!PED::IS_PED_INJURED(Local_113[iVar15 /*33*/]))
						{
							if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Local_113[iVar15 /*33*/]) != MISC::GET_HASH_KEY("V_8_BasementRm"))
							{
								func_105(iVar15, 27, 0, 0);
								Local_113[iVar15 /*33*/].f_1 = 5;
								Local_119[iVar15 /*24*/].f_3 = 7;
								Local_113[iVar15 /*33*/].f_5 = 0;
							}
						}
						iVar15++;
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 24:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(10);
							if (Local_385[iParam0 /*10*/].f_7 != -1)
							{
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								func_105(Local_385[iParam0 /*10*/].f_7, 18, 0, 0);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							else
							{
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 25:
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || func_93(9))
					{
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 26:
					AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 27:
					AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 28:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
					}
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 44:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_IN_HOUSE"))
					{
						if (func_93(12))
						{
							AUDIO::START_AUDIO_SCENE("CHI_2_SHOOTOUT_IN_HOUSE");
						}
					}
					else if (func_162(12))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_IN_HOUSE");
					}
					break;
				case 45:
					if ((func_93(9) || (!PED::IS_PED_INJURED(Local_113[8 /*33*/]) && PED::IS_PED_IN_COMBAT(Local_113[8 /*33*/], 0))) || (!PED::IS_PED_INJURED(Local_113[9 /*33*/]) && PED::IS_PED_IN_COMBAT(Local_113[9 /*33*/], 0)))
					{
						if (!PED::IS_PED_INJURED(Local_113[8 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_113[8 /*33*/], 45);
						}
						if (!PED::IS_PED_INJURED(Local_113[9 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_113[9 /*33*/], 45);
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
				case 29:
					if (func_93(9))
					{
						Local_385[iParam0 /*10*/].f_7 = 0;
						while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
							{
								PED::SET_PED_SEEING_RANGE(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 60f);
							}
							Local_385[iParam0 /*10*/].f_7++;
						}
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					else
					{
						switch (Local_385[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_93(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
									{
										if (!PED::IS_PED_INJURED(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												PED::SET_PED_SEEING_RANGE(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 5f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6++;
								}
								break;
							case 1:
								if (func_162(12))
								{
									Local_385[iParam0 /*10*/].f_7 = 0;
									while (Local_385[iParam0 /*10*/].f_7 < Local_113.f_0)
									{
										if (!PED::IS_PED_INJURED(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/]))
										{
											if (Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/].f_1 == 1)
											{
												PED::SET_PED_SEEING_RANGE(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 30f);
											}
										}
										Local_385[iParam0 /*10*/].f_7++;
									}
									Local_385[iParam0 /*10*/].f_6 = 0;
								}
								break;
							}
					}
					break;
				case 46:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
							{
								if (!PED::IS_PED_INJURED(Local_113[23 /*33*/]))
								{
									Local_385[iParam0 /*10*/].f_7 = PED::CREATE_SYNCHRONIZED_SCENE(2435.312f, 4967.087f, 41.35f, 0f, 0f, 11.4f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_385[iParam0 /*10*/].f_7, true);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], Local_385[iParam0 /*10*/].f_8, "misschinese2_crystalmaze", "_stand_to_aim", 1000f, -8f, 0, 0, 1000f, 0);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						case 2:
							break;
					}
					break;
				case 30:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							STREAMING::REQUEST_MODEL(joaat("blazer"));
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
							{
								iLocal_146 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.5867f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_146, 5f);
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 31:
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
					func_169(0);
					func_167();
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 32:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							if (func_93(29))
							{
								if (HUD::DOES_BLIP_EXIST(iLocal_178))
								{
									HUD::REMOVE_BLIP(&iLocal_178);
								}
								func_12(0);
								if (__LIB_0__::func_405("FRMFLC", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								__LIB_0__::func_403(157, 0);
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
								if (iLocal_167 == 0)
								{
									iLocal_167 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
								}
								Local_385[iParam0 /*10*/].f_6++;
							}
							break;
						case 1:
							if (!func_93(29))
							{
								__LIB_0__::func_401(158, (iLocal_167 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"))), 1);
								iLocal_180 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 20f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_PETROLCAN")), false, false, true);
								if (iLocal_180 != 0)
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_178))
									{
										HUD::REMOVE_BLIP(&iLocal_178);
									}
									iLocal_178 = __LIB_6__::func_840(iLocal_180);
									func_12(1);
									__LIB_0__::func_402(0, 157);
								}
								Local_385[iParam0 /*10*/].f_6 = 0;
							}
							break;
					}
					if (func_8())
					{
						__LIB_0__::func_402(0, 157);
						Local_385[iParam0 /*10*/].f_3 = 1;
						func_32(17, 0);
					}
					break;
				case 33:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							TASK::REQUEST_WAYPOINT_RECORDING("arm2_30");
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("arm2_30"))
							{
								if (func_93(29))
								{
									TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("arm2_30", true, 1f, 0.5f);
									TASK::ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES("arm2_30", 2);
									Local_385[iParam0 /*10*/].f_6++;
								}
							}
							break;
						case 2:
							if (!func_93(29))
							{
								TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("arm2_30", false, 1f, 0.5f);
								Local_385[iParam0 /*10*/].f_6 = 1;
							}
							break;
					}
					break;
				case 34:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
						{
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2451.08f, 4961.4634f, 44.4392f, 1) < 20f)
							{
								HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(0, 0f, 0f, 0, 0);
							}
						}
					}
					break;
				case 35:
					func_15("CHN2_JERRY_CAN", 0, "CHN2_EXPLODE");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 36:
					func_15("CHN2_EXIT_HOUSE", 0, "CHN2_EXPLODE");
					AUDIO::PLAY_SOUND_FROM_COORD(iLocal_171, "FarmhouseFire_Ignite", Local_172, "CHINESE2_SOUNDS", false, 0, false);
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 37:
					AUDIO::START_AUDIO_SCENE("CHI_2_POUR_GAS");
					Local_385[iParam0 /*10*/].f_3 = 1;
					break;
				case 38:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE", false, -1);
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE_BG", false, -1);
							break;
					}
					break;
				case 39:
					switch (Local_385[iParam0 /*10*/].f_6)
					{
						case 0:
							Local_385[iParam0 /*10*/].f_7 = func_18(4);
							Local_385[iParam0 /*10*/].f_6++;
							break;
						case 1:
							if (__LIB_0__::func_529(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], 2454.8953f, 4950.8945f, 44.1488f, 1) > 100f && __LIB_0__::func_76(Local_113[Local_385[iParam0 /*10*/].f_7 /*33*/], PLAYER::PLAYER_PED_ID(), 1) > 100f)
							{
								iVar16 = func_18(4);
								__LIB_0__::func_489(&(Local_113[iVar16 /*33*/].f_25));
								if (!PED::IS_PED_INJURED(Local_113[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_113[iVar16 /*33*/], true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(5);
								__LIB_0__::func_489(&(Local_113[iVar16 /*33*/].f_25));
								if (!PED::IS_PED_INJURED(Local_113[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_113[iVar16 /*33*/], true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[iVar16 /*33*/]));
								}
								Local_113[iVar16 /*33*/] = 0;
								iVar16 = func_18(7);
								if (!PED::IS_PED_INJURED(Local_113[iVar16 /*33*/]))
								{
									PED::SET_PED_KEEP_TASK(Local_113[iVar16 /*33*/], true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[iVar16 /*33*/]));
								}
								__LIB_0__::func_489(&(Local_113[iVar16 /*33*/].f_25));
								Local_113[iVar16 /*33*/] = 0;
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_145, false))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_145);
								}
								Local_385[iParam0 /*10*/].f_3 = 1;
							}
							break;
					}
					break;
				case 40:
					if (func_107(24, joaat("A_M_M_Hillbilly_01"), 2433.1226f, 4960.47f, 45.8218f, 301f, joaat("WEAPON_SMG"), 1, 1))
					{
						PED::SET_PED_ACCURACY(Local_113[24 /*33*/], 100);
						if (!PED::IS_PED_INJURED(Local_113[15 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_113[15 /*33*/], 100);
						}
						if (!PED::IS_PED_INJURED(Local_113[16 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_113[16 /*33*/], 100);
						}
						if (!PED::IS_PED_INJURED(Local_113[17 /*33*/]))
						{
							PED::SET_PED_ACCURACY(Local_113[17 /*33*/], 100);
						}
						TASK::TASK_COMBAT_PED(Local_113[24 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						PED::SET_PED_TARGET_LOSS_RESPONSE(Local_113[24 /*33*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_113[24 /*33*/], 200, 0);
						Local_385[iParam0 /*10*/].f_3 = 1;
					}
					break;
			}
			if (Local_385[iParam0 /*10*/].f_6 == -1)
			{
				Local_385[iParam0 /*10*/].f_3 = 1;
				Local_385[iParam0 /*10*/].f_6 = 0;
				Local_385[iParam0 /*10*/].f_1 = 0;
			}
		}
	}
}

void func_167()//Position - 0x16473
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (!__LIB_0__::func_78(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
		{
			FIRE::STOP_FIRE_IN_RANGE(Local_109[iVar0 /*5*/], 4f);
			MISC::CLEAR_AREA(Local_109[iVar0 /*5*/], 2f, true, false, false, false);
			iVar1 = 0;
			while (iVar1 < Local_113.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar1 /*33*/]))
				{
					Var2 = { ENTITY::GET_ENTITY_COORDS(Local_113[iVar1 /*33*/], false) };
					if (SYSTEM::VDIST2(Var2, Local_109[iVar0 /*5*/]) < 2f && Var2.f_2 > 43.9f)
					{
						PED::DELETE_PED(&(Local_113[iVar1 /*33*/]));
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_169(bool bParam0)//Position - 0x1656D
{
	int iVar0;
	bLocal_89 = true;
	iLocal_93 = 0;
	iLocal_91 = -1;
	iLocal_108 = 0;
	iLocal_108 = 0;
	iLocal_102 = 0;
	if (bParam0 == 0)
	{
		iLocal_86 = 1;
	}
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_109[iVar0 /*5*/], 1f);
		if (!HUD::DOES_BLIP_EXIST(Local_109[iVar0 /*5*/].f_3))
		{
			if (!__LIB_0__::func_78(Local_109[iVar0 /*5*/], 0f, 0f, 0f, 0))
			{
				iLocal_93++;
				Local_109[iVar0 /*5*/].f_3 = __LIB_0__::func_392(Local_109[iVar0 /*5*/], 0);
				HUD::SET_BLIP_HIDDEN_ON_LEGEND(Local_109[iVar0 /*5*/].f_3, true);
				HUD::SET_BLIP_SCALE(Local_109[iVar0 /*5*/].f_3, 0.4f);
				HUD::SHOW_HEIGHT_ON_BLIP(Local_109[iVar0 /*5*/].f_3, false);
				if (!bParam0)
				{
					HUD::SET_BLIP_ALPHA(Local_109[iVar0 /*5*/].f_3, 0);
				}
				HUD::SET_BLIP_COLOUR(Local_109[iVar0 /*5*/].f_3, 5);
			}
		}
		else
		{
			Local_109[iVar0 /*5*/] = { HUD::GET_BLIP_COORDS(Local_109[iVar0 /*5*/].f_3) };
			if (!bParam0)
			{
				HUD::SET_BLIP_ALPHA(Local_109[iVar0 /*5*/].f_3, 0);
			}
			else
			{
				HUD::SET_BLIP_ALPHA(Local_109[iVar0 /*5*/].f_3, 255);
			}
			iLocal_93++;
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_101.f_0)
	{
		Local_101[iVar0 /*5*/].f_1 = { 0f, 0f, 0f };
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
}

int func_174()//Position - 0x167AA
{
	if (((((PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/) != 127 || PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/) != 127) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 24 /*INPUT_ATTACK*/)) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 25 /*INPUT_AIM*/)) || PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 2 /*INPUT_LOOK_UD*/) != 127) || PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 1 /*INPUT_LOOK_LR*/) != 127)
	{
		return 1;
	}
	return 0;
}

int func_175(int iParam0, int iParam1)//Position - 0x1680C
{
	if (Local_385[iParam0 /*10*/] == iParam1)
	{
		return Local_385[iParam0 /*10*/].f_6;
	}
	return -1;
}

void func_176(int iParam0, int iParam1)//Position - 0x1682D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	iVar0 = (iParam1 - iParam0);
	if (Local_388[0 /*8*/] != iParam0 && Local_388[iVar0 /*8*/] != iParam1)
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 < Local_388.f_0)
		{
			if (iVar1 <= iVar0)
			{
				Local_388[iVar1 /*8*/] = (iParam0 + iVar2);
				Local_388[iVar1 /*8*/].f_1 = 1;
				Local_388[iVar1 /*8*/].f_2 = 0;
				Local_388[iVar1 /*8*/].f_3 = 0;
				iVar2++;
			}
			else
			{
				Local_388[iVar1 /*8*/].f_1 = 0;
			}
			iVar1++;
		}
	}
	iVar3 = 0;
	while (iVar3 < Local_388.f_0)
	{
		switch (Local_388[iVar3 /*8*/])
		{
			case 2:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (Local_388[iVar3 /*8*/].f_4 == 0)
					{
						if (__LIB_0__::func_405("FRMCHSE_1", 0, 0))
						{
							Local_388[iVar3 /*8*/].f_4 = 1;
						}
					}
					else if (!__LIB_0__::func_405("FRMCHSE_1", 0, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 3:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 6:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_162(7))
					{
						if (MISC::HAS_BULLET_IMPACTED_IN_AREA(2493.155f, 4970.315f, 43.88038f, 3.25f, true, true) || MISC::IS_BULLET_IN_AREA(2493.155f, 4970.315f, 43.88038f, 3.25f, true))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					else
					{
						Local_388[iVar3 /*8*/].f_1 = 0;
					}
				}
				break;
			case 7:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							Local_388[iVar3 /*8*/].f_5 = func_18(8);
							Local_388[iVar3 /*8*/].f_6 = func_18(9);
							Local_388[iVar3 /*8*/].f_4++;
							break;
						case 1:
							if (Local_388[iVar3 /*8*/].f_5 != -1 && Local_388[iVar3 /*8*/].f_6 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) && ENTITY::DOES_ENTITY_EXIST(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
								{
									if (PED::IS_PED_INJURED(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]) || PED::IS_PED_INJURED(Local_113[Local_388[iVar3 /*8*/].f_6 /*33*/]))
									{
										Local_388[iVar3 /*8*/].f_2 = 1;
									}
								}
							}
							break;
						}
				}
				break;
			case 9:
				if (bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			case 11:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == MISC::GET_HASH_KEY("V_8_BasementRm"))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 12:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0 && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2421.3308f, 4954.833f, 25.328293f, 2466.7961f, 4996.8223f, 66.070175f, 37.1875f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 13:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (func_93(12))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2457.8848f, 4981.1694f, 50.00518f, 2441.5798f, 4965.0884f, 56.240055f, 34.3125f, false, true, 0))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 14:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2451.5173f, 4973.122f, 44.2646f, 1) < 50f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 15:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = func_18(17);
						if (Local_388[iVar3 /*8*/].f_5 != -1)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
						{
							if (PED::IS_PED_INJURED(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/]))
							{
								if (__LIB_0__::func_529(Local_113[Local_388[iVar3 /*8*/].f_5 /*33*/], 2427.8506f, 4964.9717f, 43.1704f, 1) < 3f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
									Local_388[iVar3 /*8*/].f_4++;
								}
								else
								{
									Local_388[iVar3 /*8*/].f_1 = 0;
								}
							}
						}
						break;
				}
				break;
			case 16:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					switch (Local_388[iVar3 /*8*/].f_4)
					{
						case 0:
							if (!func_30(5))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
							break;
						case 1:
							bVar5 = false;
							bVar6 = false;
							iVar4 = 0;
							while (iVar4 < Local_113.f_0)
							{
								if (!PED::IS_PED_INJURED(Local_113[iVar4 /*33*/]))
								{
									bVar5 = true;
									if (Local_113[iVar4 /*33*/].f_1 == 1)
									{
										bVar6 = true;
										iVar4 = Local_113.f_0;
									}
								}
								iVar4++;
							}
							if (!bVar5)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 0;
							}
							if (bVar6)
							{
								func_97(10, 0);
							}
							else
							{
								func_97(10, 1);
							}
							break;
						}
				}
				break;
			case 23:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_93(9))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
						iVar8 = 0;
						iVar7 = 0;
						while (iVar7 < Local_113.f_0)
						{
							if (Local_113[iVar7 /*33*/].f_1 == 1)
							{
								if (!PED::IS_PED_INJURED(Local_113[iVar7 /*33*/]))
								{
									iVar8++;
									if (iVar8 > 1)
									{
										Local_388[iVar3 /*8*/].f_2 = 0;
										iVar7 = Local_113.f_0;
									}
								}
							}
							iVar7++;
						}
					}
				}
				break;
			case 24:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2446.6738f, 4977.7876f, 57.4583f, 1) < 250f)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					case 1:
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							iVar9 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar9)) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar9)))
							{
								if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2446.6738f, 4977.7876f, 57.4583f, 0) > 700f)
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
							}
							else
							{
								bVar10 = true;
							}
						}
						else
						{
							bVar10 = true;
						}
						if (bVar10)
						{
							if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2446.6738f, 4977.7876f, 57.4583f, 1) > 250f)
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
						}
						break;
				}
				break;
			case 26:
				if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2441.065f, 4968.8193f, 45.830746f, 1) < 2.75f)
				{
					if (!PED::IS_PED_INJURED(Local_113[15 /*33*/]))
					{
						if (__LIB_0__::func_529(Local_113[15 /*33*/], 2439.386f, 4962.0493f, 45.904697f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_113[16 /*33*/]))
					{
						if (__LIB_0__::func_529(Local_113[16 /*33*/], 2439.386f, 4962.0493f, 45.904697f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					if (!PED::IS_PED_INJURED(Local_113[17 /*33*/]))
					{
						if (__LIB_0__::func_529(Local_113[17 /*33*/], 2439.386f, 4962.0493f, 45.904697f, 1) < 3f)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			case 27:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (!PED::IS_PED_INJURED(Local_113[4 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_113[4 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!PED::IS_PED_INJURED(Local_113[5 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_113[5 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						if (!PED::IS_PED_INJURED(Local_113[7 /*33*/]) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_113[7 /*33*/]))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						Local_388[iVar3 /*8*/].f_5 = MISC::GET_GAME_TIMER() + 8000;
						break;
					case 1:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_145, false))
						{
							if (__LIB_9__::func_991(ENTITY::GET_ENTITY_COORDS(iLocal_145, true), 5f, 150f))
							{
								Local_388[iVar3 /*8*/].f_6 = (Local_388[iVar3 /*8*/].f_6 + SYSTEM::FLOOR((SYSTEM::TIMESTEP() * 1000f)));
							}
						}
						if (Local_388[iVar3 /*8*/].f_6 > 1500)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						if (MISC::GET_GAME_TIMER() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			case 30:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_176))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_176))
							{
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
					case 1:
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_176))
						{
							if (!OBJECT::DOES_PICKUP_OBJECT_EXIST(iLocal_176))
							{
								if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 2435.2524f, 4966.748f, 41.3476f, 4f))
								{
									Local_388[iVar3 /*8*/].f_2 = 1;
								}
								Local_388[iVar3 /*8*/].f_4++;
							}
						}
						break;
				}
				break;
			case 8:
				if (iLocal_57 && !bLocal_53)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 17:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2442.8186f, 4970.283f, 45.248096f, 2439.6252f, 4966.862f, 48.14596f, 3.4375f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 18:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2434.6714f, 4959.1045f, 44.851093f, 2440.4998f, 4965.189f, 48.123096f, 3.625f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 19:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2432.4673f, 4959.4727f, 44.941334f, 2430.7969f, 4961.173f, 48.309013f, 1.5625f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 21:
				if (bLocal_56)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
					Local_388[iVar3 /*8*/].f_1 = 0;
				}
				break;
			case 32:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2447.6714f, 4951.4385f, 43.255756f, 2454.6638f, 4957.856f, 47.891174f, 6.8125f, false, true, 0))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 33:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
						{
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
					case 1:
						if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
						break;
				}
				break;
			case 29:
				Local_388[iVar3 /*8*/].f_2 = 0;
				switch (Local_388[iVar3 /*8*/].f_5)
				{
					case 0:
						if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
						{
							Local_388[iVar3 /*8*/].f_5 = 10;
						}
						else
						{
							Local_388[iVar3 /*8*/].f_5 = 20;
						}
						break;
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
				{
					if (Local_388[iVar3 /*8*/].f_5 == 20)
					{
					}
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 34:
				if (!Local_388[iVar3 /*8*/].f_2 == 1)
				{
					if (func_8())
					{
						__LIB_0__::func_402(0, 157);
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 35:
				if (Local_109[0 /*5*/].f_4 == 1)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 36:
				Local_388[iVar3 /*8*/].f_2 = 0;
				iVar11 = joaat("WEAPON_UNARMED");
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar11, true))
				{
					if (iVar11 == joaat("WEAPON_PETROLCAN"))
					{
						if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/))
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
						}
					}
				}
				break;
			case 44:
				if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 2435.776f, 4963.067f, 39.34265f, 2428.1184f, 4971.287f, 43.673267f, 11.875f))
				{
					if (!FIRE::IS_EXPLOSION_IN_ANGLED_AREA(24, 2435.776f, 4963.067f, 39.34265f, 2428.1184f, 4971.287f, 43.673267f, 11.875f) && !FIRE::IS_EXPLOSION_IN_ANGLED_AREA(22, 2435.776f, 4963.067f, 39.34265f, 2428.1184f, 4971.287f, 43.673267f, 11.875f))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 41:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						if (func_180())
						{
							iVar12 = func_179();
							if (iVar12 <= 17)
							{
								func_97(37, 1);
							}
							else
							{
								Local_388[iVar3 /*8*/].f_2 = 1;
							}
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			case 38:
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (func_178(17))
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 40:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 42:
				if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2439.52f, 4969.67f, 52.65f, 1) > 42.5f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 43:
				if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2439.52f, 4969.67f, 52.65f, 1) > 60f)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 39:
				if (func_177())
				{
					if (!func_180())
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 47:
				switch (Local_388[iVar3 /*8*/].f_4)
				{
					case 0:
						Local_388[iVar3 /*8*/].f_5 = MISC::GET_GAME_TIMER() + 30000;
						Local_388[iVar3 /*8*/].f_4++;
						break;
					case 1:
						if (MISC::GET_GAME_TIMER() > Local_388[iVar3 /*8*/].f_5)
						{
							Local_388[iVar3 /*8*/].f_2 = 1;
							Local_388[iVar3 /*8*/].f_4++;
						}
						break;
				}
				break;
			case 48:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2448.25f, 4974.92f, 55.11f, 1) > 300f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 51:
				if (func_153(1, 49))
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
			case 49:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (!Local_388[iVar3 /*8*/].f_2)
				{
					if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2448.25f, 4974.92f, 55.11f, 1) > 500f)
					{
						Local_388[iVar3 /*8*/].f_2 = 1;
					}
				}
				break;
			case 50:
				Local_388[iVar3 /*8*/].f_2 = 0;
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					Local_388[iVar3 /*8*/].f_2 = 1;
				}
				break;
		}
		iVar3++;
	}
}

int func_177()//Position - 0x177C6
{
	if (iLocal_102 == 1)
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0)//Position - 0x177DA
{
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_109[iParam0 /*5*/], 0.6f) > 0)
	{
		return 1;
	}
	return 0;
}

int func_179()//Position - 0x177FD
{
	return iLocal_100;
}

int func_180()//Position - 0x17808
{
	int iVar0;
	iVar0 = (Local_109.f_0 - 1);
	while (iVar0 >= 0)
	{
		if (Local_109[iVar0 /*5*/].f_4)
		{
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Local_109[iVar0 /*5*/], 0.6f) > 0)
			{
				Local_99 = { Local_109[iVar0 /*5*/] };
				iLocal_100 = iVar0;
				return 1;
			}
		}
		else
		{
			return 0;
		}
		iVar0 = (iVar0 + -1);
	}
	return 0;
}

void func_181()//Position - 0x17867
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
	if ((__LIB_0__::func_404() && iLocal_150 > 0) && MISC::GET_GAME_TIMER() > iLocal_159)
	{
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1000);
			func_28(28, 1);
		}
		iLocal_577 = 0;
		while (!func_200())
		{
			func_28(32322, 1);
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2474.9697f, 4946.0474f, 44.0297f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 230.6937f);
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
		CAM::DESTROY_ALL_CAMS(false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		HUD::CLEAR_PRINTS();
		AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
		iLocal_173 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		func_31(12, 1);
		iLocal_158 = 0;
		iLocal_163 = iLocal_163;
		iLocal_163 = 99;
		iLocal_150 = 99;
		iLocal_139 = 3;
		fLocal_138 = 10000f;
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
		AUDIO::STOP_STREAM();
		RECORDING::REPLAY_STOP_EVENT();
		bLocal_165 = true;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_150)
	{
		case 0:
			func_200();
			bLocal_165 = false;
			iVar0 = 49;
			while (iVar0 <= 55)
			{
				Local_109[iVar0 /*5*/] = { Local_109[iVar0 /*5*/] + Vector(0.6f, 0f, 0f) };
				iVar0++;
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_POUR_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("CHI_2_POUR_GAS");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOT_GAS"))
			{
				AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOT_GAS");
			}
			AUDIO::START_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
			iLocal_159 = MISC::GET_GAME_TIMER() + 1000;
			MISC::CLEAR_AREA(2570.53f, 4982.057f, 50.6819f, 100f, true, false, false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			func_87(0);
			iLocal_392 = 0;
			func_87(1);
			HUD::CLEAR_PRINTS();
			__LIB_32__::func_742(2467.775f, 4954.4146f, 42.878033f, 2477.0889f, 4945.079f, 46.16654f, 4.0625f, 2486.8542f, 4939.086f, 43.2578f, 230f, 1, 1, 1, 0, 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2455.9414f, 4952.8013f, 44.112f, true, false, false, true);
			}
			MISC::SET_TIME_SCALE(1f);
			STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
			STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
			STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
			STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
			STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_MethHead_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
			iVar1 = 0;
			while (iVar1 < Local_113.f_0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar1 /*33*/]))
				{
					PED::DELETE_PED(&(Local_113[iVar1 /*33*/]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar1 /*33*/].f_20))
				{
					OBJECT::DELETE_OBJECT(&(Local_113[iVar1 /*33*/].f_20));
				}
				iVar1++;
			}
			iLocal_150++;
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			iLocal_150++;
			break;
	}
	if (iLocal_135)
	{
		iLocal_135 = 0;
		iVar2 = 0;
		while (iVar2 < Local_137.f_0)
		{
			iVar2++;
		}
		iVar2 = 0;
		while (iVar2 < Local_136.f_0)
		{
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_137.f_0)
	{
		if (iLocal_140[iVar2])
		{
			iLocal_140[iVar2] = 0;
			Local_137[iVar2 /*18*/] = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Local_137[iVar2 /*18*/].f_3 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			Local_137[iVar2 /*18*/].f_14 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
		}
		if (iLocal_141[iVar2])
		{
			iLocal_141[iVar2] = 0;
			Local_137[iVar2 /*18*/].f_6 = { CAM::GET_CAM_COORD(CAM::GET_RENDERING_CAM()) };
			Local_137[iVar2 /*18*/].f_9 = { CAM::GET_CAM_ROT(CAM::GET_RENDERING_CAM(), 2) };
			Local_137[iVar2 /*18*/].f_15 = CAM::GET_CAM_FOV(CAM::GET_RENDERING_CAM());
		}
		iVar2++;
	}
	if (iLocal_133)
	{
		iLocal_133 = 0;
		bLocal_134 = false;
		iLocal_174 = 0;
		MISC::CLEAR_AREA(2431.097f, 4967.043f, 41.3476f, 20f, true, false, false, false);
		func_190();
	}
	if (!bLocal_134)
	{
		if (STREAMING::IS_SRL_LOADED())
		{
			STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
			STREAMING::BEGIN_SRL();
			iLocal_139 = -1;
			CAM::DESTROY_ALL_CAMS(false);
			__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			bLocal_134 = true;
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/] = 0;
			Local_136[0 /*6*/].f_4 = 0;
			Local_136[0 /*6*/].f_5 = 0;
			Local_136[1 /*6*/].f_4 = 0;
			Local_136[1 /*6*/].f_5 = 0;
			Local_136[2 /*6*/].f_4 = 0;
			Local_136[2 /*6*/].f_5 = 0;
			Local_136[3 /*6*/].f_4 = 0;
			Local_136[3 /*6*/].f_5 = 0;
			func_32(12, 0);
			AUDIO::PLAY_STREAM_FRONTEND();
			RECORDING::REPLAY_START_EVENT(4);
			switch (iLocal_166)
			{
				case 3:
					SYSTEM::SETTIMERA(0);
					break;
				case 2:
					Local_136[0 /*6*/] = 1;
					Local_136[1 /*6*/] = 1;
					SYSTEM::SETTIMERA(10900);
					iLocal_139 = 2;
					fLocal_138 = 10000f;
					break;
				case 1:
					Local_136[0 /*6*/] = 1;
					SYSTEM::SETTIMERA(6400);
					iLocal_139 = 1;
					fLocal_138 = 10000f;
					break;
			}
			iLocal_143 = 0;
		}
	}
	if (bLocal_134)
	{
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	if (bLocal_134)
	{
		fLocal_138 = (fLocal_138 + SYSTEM::TIMESTEP());
		if (iLocal_139 == -1 || ((iLocal_139 != -1 && iLocal_139 < 4) && fLocal_138 > (Local_137[iLocal_139 /*18*/].f_13 / 1000f)))
		{
			iLocal_139++;
			if (iLocal_139 == 3)
			{
				if (STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
				{
					iLocal_155 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
					iLocal_156 = PED::CREATE_SYNCHRONIZED_SCENE(2452.914f, 4962.096f, 45.585f, 0f, 0f, 45f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_155, iLocal_156, "trevor_barn_walk_cam", "misschinese2_crystalmaze");
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_156, "misschinese2_crystalmaze", "trevor_barn_walk", 1000f, -8f, 0, 0, 1000f, 0);
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					func_190();
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
					fLocal_138 = 0f;
				}
			}
			else if (iLocal_139 < 4)
			{
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_155 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Local_137[iLocal_139 /*18*/], Local_137[iLocal_139 /*18*/].f_3, Local_137[iLocal_139 /*18*/].f_14, true, 2);
				CAM::SET_CAM_PARAMS(iLocal_155, Local_137[iLocal_139 /*18*/].f_6, Local_137[iLocal_139 /*18*/].f_9, Local_137[iLocal_139 /*18*/].f_15, SYSTEM::FLOOR(Local_137[iLocal_139 /*18*/].f_12), Local_137[iLocal_139 /*18*/].f_16, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				if (iLocal_139 < 2)
				{
					func_189(Local_137[iLocal_139 /*18*/].f_17, 1, 1);
				}
				else
				{
					func_189(Local_137[iLocal_139 /*18*/].f_17, 1, 0);
				}
				fLocal_138 = 0f;
			}
			else if (!bLocal_132)
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (__LIB_4__::func_739() && !bLocal_165)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_0__::func_686(0, 0, 1, 0);
				AUDIO::STOP_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173, 9);
				MISC::SET_TIME_SCALE(1f);
				STREAMING::END_SRL();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					while (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173) != 10)
					{
						func_28(29, 1);
					}
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				RECORDING::REPLAY_STOP_EVENT();
				func_182(9);
			}
		}
		iVar3 = 0;
		while (iVar3 < Local_136.f_0)
		{
			if (!Local_136[iVar3 /*6*/])
			{
				if (iLocal_139 == Local_136[iVar3 /*6*/].f_1 && fLocal_138 > (Local_136[iVar3 /*6*/].f_2 / 1000f))
				{
					switch (iVar3)
					{
						case 0:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									iLocal_143 = 0;
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								case 1:
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										iLocal_143++;
										if (iLocal_143 >= 12)
										{
											Local_136[iVar3 /*6*/].f_4 = 10;
											Local_136[iVar3 /*6*/] = 1;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
											Local_136[iVar3 /*6*/].f_4 = 2;
										}
									}
									break;
								case 2:
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										if (iLocal_143 == 2)
										{
											Local_136[iVar3 /*6*/].f_4 = 3;
										}
										else
										{
											Local_136[iVar3 /*6*/].f_4 = 1;
										}
									}
									break;
								case 3:
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 1 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_136[iVar3 /*6*/].f_4 = 4;
										iLocal_143 = 3;
									}
									break;
								case 4:
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										func_128(Local_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_136[iVar3 /*6*/].f_4 = 5;
									}
									break;
								case 5:
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/] + Local_142[iLocal_143 + 2 /*3*/] / Vector(2f, 2f, 2f), 0);
										func_128(Local_142[iLocal_143 + 1 /*3*/] + Local_142[iLocal_143 + 3 /*3*/] / Vector(2f, 2f, 2f), 0);
										Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_136[iVar3 /*6*/].f_4 = 6;
										iLocal_143 = 5;
									}
									break;
								case 6:
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										func_128(Local_142[iLocal_143 /*3*/], 0);
										func_128(Local_142[iLocal_143 + 1 /*3*/], 0);
										Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 200;
										Local_136[iVar3 /*6*/].f_4 = 2;
										iLocal_143 = 7;
									}
									break;
							}
							break;
						case 1:
							FIRE::ADD_EXPLOSION(2432.534f, 4968.383f, 42.2389f, 4, 0.5f, true, false, 1f, false);
							Local_136[iVar3 /*6*/] = 1;
							break;
						case 2:
							iLocal_174 = 1;
							Local_136[iVar3 /*6*/] = 1;
							break;
						case 3:
							if (CAM::DOES_CAM_EXIST(iLocal_155))
							{
								CAM::SHAKE_CAM(iLocal_155, "LARGE_EXPLOSION_SHAKE", fLocal_157);
								CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_155, 0.1f);
								Local_136[iVar3 /*6*/] = 1;
							}
							break;
						case 4:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2473.208f, 4947.6245f, 44.0664f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 223.493f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
									if (__LIB_4__::func_739())
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), true, 0, false);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0f, true, false);
									}
									else
									{
										PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 0, false);
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, true, false);
									}
									Local_136[iVar3 /*6*/].f_4++;
									break;
								case 1:
									break;
							}
							break;
						case 5:
							switch (Local_136[iVar3 /*6*/].f_4)
							{
								case 0:
									fLocal_175 = 1f;
									Local_136[iVar3 /*6*/].f_4++;
									Local_136[iVar3 /*6*/].f_5 = MISC::GET_GAME_TIMER() + 1300;
									AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
									break;
								case 1:
									fLocal_175 = (fLocal_175 - (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_175 < 0.2f)
									{
										fLocal_175 = 0.2f;
									}
									MISC::SET_TIME_SCALE(fLocal_175);
									if (MISC::GET_GAME_TIMER() > Local_136[iVar3 /*6*/].f_5)
									{
										Local_136[iVar3 /*6*/].f_4++;
									}
									break;
								case 2:
									fLocal_175 = (fLocal_175 + (SYSTEM::TIMESTEP() * 1f));
									if (fLocal_175 > 1f)
									{
										fLocal_175 = 1f;
										Local_136[iVar3 /*6*/].f_4++;
										Local_136[iVar3 /*6*/] = 1;
									}
									AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOW_MO_METH_HOUSE_RAYFIRE");
									MISC::SET_TIME_SCALE(fLocal_175);
									break;
							}
							break;
						}
					}
			}
			iVar3++;
		}
	}
}

void func_182(int iParam0)//Position - 0x185FF
{
	func_186();
	func_185();
	func_184();
	func_183();
	if (iParam0 == 11)
	{
		iLocal_149++;
	}
	else
	{
		iLocal_149 = iParam0;
	}
}

void func_183()//Position - 0x1862E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_390.f_0)
	{
		Local_390[iVar0 /*7*/] = 0;
		Local_390[iVar0 /*7*/].f_1 = 0;
		Local_390[iVar0 /*7*/].f_3 = 0;
		Local_390[iVar0 /*7*/].f_2 = 0;
		Local_390[iVar0 /*7*/].f_4 = 0;
		Local_390[iVar0 /*7*/].f_5 = 0;
		Local_390[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_184()//Position - 0x1868E
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_385.f_0)
	{
		if (Local_385[iVar0 /*10*/].f_4)
		{
			Local_385[iVar0 /*10*/].f_1 = 1;
			Local_385[iVar0 /*10*/].f_6 = -1;
			func_166(iVar0, Local_385[iVar0 /*10*/], 0, 0, 0, 1, 0, 1, 0, 1, 0);
		}
		Local_385[iVar0 /*10*/] = 0;
		Local_385[iVar0 /*10*/].f_1 = 0;
		Local_385[iVar0 /*10*/].f_2 = 0;
		Local_385[iVar0 /*10*/].f_3 = 0;
		Local_385[iVar0 /*10*/].f_6 = 0;
		Local_385[iVar0 /*10*/].f_4 = 0;
		Local_385[iVar0 /*10*/].f_5 = 0;
		Local_385[iVar0 /*10*/].f_7 = 0;
		Local_385[iVar0 /*10*/].f_8 = 0;
		Local_385[iVar0 /*10*/].f_9 = 0f;
		iVar0++;
	}
}

void func_185()//Position - 0x18742
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_388.f_0)
	{
		Local_388[iVar0 /*8*/] = 0;
		Local_388[iVar0 /*8*/].f_1 = 0;
		Local_388[iVar0 /*8*/].f_2 = 0;
		Local_388[iVar0 /*8*/].f_3 = 0;
		Local_388[iVar0 /*8*/].f_4 = 0;
		Local_388[iVar0 /*8*/].f_5 = 0;
		iVar0++;
	}
}

void func_186()//Position - 0x18798
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_389.f_0)
	{
		Local_389[iVar0 /*4*/] = 0;
		Local_389[iVar0 /*4*/].f_1 = 0;
		Local_389[iVar0 /*4*/].f_2 = 0;
		Local_389[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_189(int iParam0, bool bParam1, int iParam2)//Position - 0x18826
{
	int iVar0;
	iLocal_103 = iParam2;
	if (iParam0 > -1)
	{
		iLocal_102 = 1;
		iLocal_104 = MISC::GET_GAME_TIMER();
		iLocal_105 = iParam0 * 2;
		iLocal_107 = iLocal_105;
		if (bParam1)
		{
			iLocal_108 = 0;
		}
		else
		{
			iLocal_108 = iLocal_105;
		}
		iVar0 = 0;
		while (iVar0 < Local_109.f_0)
		{
			Local_109[iVar0 /*5*/].f_4 = 1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < Local_101.f_0)
		{
			FIRE::REMOVE_SCRIPT_FIRE(Local_101[iVar0 /*5*/]);
			if (Local_101[iVar0 /*5*/].f_4 != 0)
			{
				GRAPHICS::FADE_DECALS_IN_RANGE(Local_101[iVar0 /*5*/].f_1, 0.4f, 1f);
			}
			Local_101[iVar0 /*5*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_190()//Position - 0x188CC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_101.f_0)
	{
		FIRE::REMOVE_SCRIPT_FIRE(Local_101[iVar0 /*5*/]);
		Local_101[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	func_169(0);
	iVar0 = 0;
	while (iVar0 < Local_109.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_109[iVar0 /*5*/].f_3))
		{
			HUD::REMOVE_BLIP(&(Local_109[iVar0 /*5*/].f_3));
		}
		Local_109[iVar0 /*5*/].f_4 = 0;
		iVar0++;
	}
	iLocal_93 = -1;
}

int func_200()//Position - 0x18BCF
{
	switch (iLocal_577)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent001"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent002"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent003"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent004"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent005"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent006"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent007"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent008"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent009"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent010"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent011"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent012"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent013"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent014"));
			STREAMING::REQUEST_MODEL(joaat("cs2_03_fmhse_vfx_parent015"));
			iLocal_577++;
			break;
		case 1:
			if (((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent")) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent001"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent002"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent003"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent004"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent005"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent006"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent007"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent008"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent009"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent010"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent011"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent012"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent013"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent014"))) && STREAMING::HAS_MODEL_LOADED(joaat("cs2_03_fmhse_vfx_parent015")))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_202()//Position - 0x18D9E
{
	GRAPHICS::SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME();
	func_176(28, 45);
	func_155(0, 7, 0, 0, 1, 0, 1, 0);
	func_155(1, 8, 2, 29, 1, 0, 1, 0);
	func_155(2, 9, 2, 35, 5, 34, 1, 0);
	func_155(3, 10, 2, 42, 1, 0, 1, 0);
	func_163(0, 21, 2, 29, 1, 0, 1, 0, 1, 0);
	func_163(1, 22, 2, 36, 5, 34, 1, 0, 1, 0);
	func_163(2, 26, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(3, 23, 2, 37, 1, 0, 1, 0, 1, 0);
	func_204(4, 25, 3, 23, 1, 0, 1, 0, 1, 0);
	func_166(0, 30, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 31, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 32, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(3, 33, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 34, 1, 3, 34, 1, 0, 1, 0, 1, 0);
	func_166(5, 35, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(6, 36, 0, 2, 37, 1, 0, 1, 0, 1, 0);
	func_166(7, 37, 0, 2, 29, 1, 0, 1, 0, 1, 0);
	func_166(8, 38, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 56, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 11, 0, 2, 44, 1, 0, 1, 0, 1, 0);
	func_166(11, 50, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(12, 51, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_203(0, 2, 33, 5, 34);
	func_203(4, 2, 43, 1, 0);
	func_203(2, 2, 39, 1, 0);
	if (iLocal_166 == 0)
	{
		if (func_93(37) && !func_93(44))
		{
			iLocal_166 = 3;
		}
		if (func_93(41) && !func_93(44))
		{
			iLocal_164 = 1;
			iLocal_166 = 1;
		}
		if (func_175(10, 11) == 2)
		{
			iLocal_166 = 2;
			iLocal_164 = 1;
		}
	}
	func_166(13, 10, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	if ((((func_93(37) && func_93(38)) || iLocal_164) && func_175(13, 10) == 10) && !__LIB_11__::func_988("CHI2_light"))
	{
		func_203(1, 2, 40, 1, 0);
		if (HUD::DOES_BLIP_EXIST(iLocal_178))
		{
			HUD::REMOVE_BLIP(&iLocal_178);
		}
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		func_12(1);
		func_182(11);
	}
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x18FF8
{
	if (func_158(iParam1, iParam2, iParam3, iParam4, 1, 0, 1, 0))
	{
		switch (iParam0)
		{
			case 0:
				func_136("CHFAIL1");
				break;
			case 1:
				func_136("FRMSOON");
				break;
			case 2:
				func_136("FRMTRAI");
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Local_113[11 /*33*/]))
				{
					if (PED::IS_PED_INJURED(Local_113[11 /*33*/]))
					{
						func_136("FRMCHI");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_113[10 /*33*/]))
				{
					if (PED::IS_PED_INJURED(Local_113[10 /*33*/]))
					{
						func_136("FRMCHI2");
					}
				}
				break;
			case 4:
				func_136("CHFAIL2");
				break;
			case 5:
				func_136("FRMGASF");
				break;
			}
	}
}

void func_204(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x190C0
{
	if (!Local_390[iParam0 /*7*/].f_1)
	{
		if (func_205(iParam2, iParam3))
		{
			func_163(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 1, 0);
		}
	}
}

int func_205(int iParam0, int iParam1)//Position - 0x190F6
{
	if (Local_390[iParam0 /*7*/] == iParam1)
	{
		if (Local_390[iParam0 /*7*/].f_1)
		{
			return 1;
		}
	}
	else if (Local_390[iParam0 /*7*/] != 0)
	{
	}
	return 0;
}

void func_206()//Position - 0x19129
{
	func_176(5, 31);
	func_155(0, 2, 0, 0, 1, 0, 1, 0);
	func_155(1, 3, 2, 8, 1, 0, 1, 0);
	func_155(2, 5, 2, 9, 1, 0, 1, 0);
	func_155(3, 11, 0, 0, 1, 0, 1, 0);
	func_155(4, 4, 2, 12, 1, 0, 1, 0);
	func_166(0, 17, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(1, 13, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 14, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 16, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 15, 0, 2, 14, 6, 9, 1, 0, 1, 0);
	func_166(7, 19, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(8, 20, 0, 2, 12, 4, 9, 1, 0, 1, 0);
	func_166(9, 21, 0, 2, 12, 4, 13, 1, 0, 1, 0);
	func_166(10, 22, 0, 2, 12, 1, 0, 1, 0, 1, 0);
	func_166(11, 23, 0, 2, 11, 1, 0, 1, 0, 1, 0);
	func_166(12, 24, 0, 2, 14, 1, 0, 1, 0, 1, 0);
	func_166(5, 26, 0, 2, 11, 6, 16, 6, 9, 1, 0);
	func_166(6, 27, 0, 2, 9, 1, 0, 1, 0, 1, 0);
	func_166(14, 40, 0, 2, 26, 1, 0, 1, 0, 1, 0);
	func_166(13, 39, 0, 2, 25, 1, 0, 1, 0, 1, 0);
	func_166(15, 28, 0, 2, 11, 6, 16, 1, 0, 1, 0);
	func_166(16, 29, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(17, 43, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(18, 44, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(19, 45, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(0, 1, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(2, 2, 2, 21, 5, 16, 1, 0, 1, 0);
	func_163(3, 3, 2, 12, 4, 17, 1, 0, 1, 0);
	func_163(4, 5, 2, 18, 1, 0, 1, 0, 1, 0);
	func_163(5, 6, 2, 19, 1, 0, 1, 0, 1, 0);
	func_163(6, 7, 2, 27, 5, 9, 1, 0, 1, 0);
	func_163(7, 10, 2, 9, 5, 21, 5, 12, 1, 0);
	func_163(8, 11, 2, 9, 4, 21, 5, 12, 1, 0);
	func_163(9, 14, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(10, 12, 2, 9, 4, 12, 1, 0, 1, 0);
	func_163(11, 13, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(12, 16, 2, 9, 4, 23, 5, 12, 1, 0);
	func_163(13, 17, 2, 14, 5, 12, 4, 9, 1, 0);
	func_163(14, 18, 3, 20, 1, 0, 1, 0, 1, 0);
	func_163(15, 19, 0, 0, 1, 0, 1, 0, 1, 0);
	func_163(16, 20, 2, 9, 4, 10, 4, 14, 5, 12);
	func_203(4, 2, 24, 1, 0);
	func_203(5, 2, 30, 1, 0);
	if (func_93(11) && func_93(29))
	{
		func_182(7);
	}
}

void func_207()//Position - 0x193FE
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	VEHICLE::SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(2004.4471f, 3076.8066f, 46.6069f, 10f);
	CUTSCENE::SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(true);
	if (((__LIB_0__::func_404() && iLocal_150 > 0) && iLocal_150 < 7) && MISC::GET_GAME_TIMER() > iLocal_159)
	{
		iLocal_150 = 10;
		iLocal_158 = 0;
		bLocal_165 = true;
	}
	if (iLocal_150 < 10)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
	}
	if (iLocal_375)
	{
		STREAMING::SET_SRL_TIME(SYSTEM::TO_FLOAT(SYSTEM::TIMERA()));
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	switch (iLocal_150)
	{
		case 0:
			if (STREAMING::IS_SRL_LOADED())
			{
				CUTSCENE::REQUEST_CUTSCENE("CHI_2_MCS_5", 8);
				iLocal_374 = 1;
				bLocal_165 = false;
				STREAMING::SET_SRL_READAHEAD_TIMES(5, 5, 5, 5);
				STREAMING::BEGIN_SRL();
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(false);
				iLocal_378 = 0;
				iLocal_375 = 1;
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				fVar1 = __LIB_4__::func_305(2458.2227f, 4986.0415f, 49.052414f, Var0, 1);
				if (fVar1 > 180f)
				{
					fVar1 = (fVar1 - 360f);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				}
				if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false) && VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2))) && ENTITY::IS_ENTITY_IN_AIR(iVar2)) || ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false) && VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar2))) && ENTITY::IS_ENTITY_IN_AIR(iVar2)))
				{
					if (fVar1 < __LIB_0__::func_407(-2.5f) && fVar1 > __LIB_0__::func_407(0.5f))
					{
						iLocal_150 = 6;
						SYSTEM::SETTIMERA(30000);
						STREAMING::SET_SRL_TIME(30000f);
						iLocal_158 = 36000;
					}
					else
					{
						iLocal_150 = 7;
						SYSTEM::SETTIMERA(36000);
						STREAMING::SET_SRL_TIME(36000f);
						iLocal_158 = 42000;
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
						{
							if (!(VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2)) && ENTITY::IS_ENTITY_IN_AIR(iVar2)) && !(VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar2)) && ENTITY::IS_ENTITY_IN_AIR(iVar2)))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
						}
					}
					if (fVar1 < __LIB_0__::func_407(-1.33f) && fVar1 > __LIB_0__::func_407(-1.92f))
					{
						iLocal_150 = 1;
						SYSTEM::SETTIMERA(0);
						STREAMING::SET_SRL_TIME(0f);
						iLocal_158 = 6000;
					}
					else if (fVar1 < __LIB_0__::func_407(0.96f) && fVar1 > __LIB_0__::func_407(-1.33f))
					{
						iLocal_150 = 2;
						SYSTEM::SETTIMERA(6000);
						STREAMING::SET_SRL_TIME(6000f);
						iLocal_158 = 12000;
					}
					else if (fVar1 < __LIB_0__::func_407(2.29f) && fVar1 > __LIB_0__::func_407(0.96f))
					{
						iLocal_150 = 3;
						SYSTEM::SETTIMERA(12000);
						STREAMING::SET_SRL_TIME(12000f);
						iLocal_158 = 18000;
					}
					else if (fVar1 < __LIB_0__::func_407(-2.81f) || fVar1 > __LIB_0__::func_407(2.29f))
					{
						iLocal_150 = 4;
						SYSTEM::SETTIMERA(18000);
						STREAMING::SET_SRL_TIME(18000f);
						iLocal_158 = 24000;
					}
					else
					{
						SYSTEM::SETTIMERA(24000);
						STREAMING::SET_SRL_TIME(24000f);
						iLocal_158 = 30000;
						iLocal_150 = 5;
					}
				}
				iLocal_376 = 1;
				CAM::DESTROY_ALL_CAMS(false);
				__LIB_18__::func_192(&Local_184, 1, 0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_84 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_112 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_84) };
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_84, false, false);
				}
				AUDIO::PLAY_STREAM_FRONTEND();
				if (iLocal_150 == 1)
				{
					iLocal_378 = 1;
					__LIB_32__::func_755(2559.0122f, 4958.518f, 36.029594f, 2585.4468f, 4993.435f, 64.62565f, 48f, 2594.6506f, 4948.114f, 38.0899f, 283.7287f, 22f, 22f, 15f, 1, 1, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, false, true, false);
						}
					}
					MISC::CLEAR_AREA(2445.1387f, 4978.642f, 52.1489f, 150f, true, true, false, false);
					MISC::CLEAR_AREA(2578.5234f, 4982.2837f, 51.4416f, 13f, true, false, false, false);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2578.4187f, 4981.9014f, 50.587f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 49.2184f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, 2570.543f, 4982.002f, 50.6795f, 1f, 20000, 40000f, 0.5f);
					TASK::TASK_ACHIEVE_HEADING(0, 88.7065f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iVar3);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iVar3);
					TASK::CLEAR_SEQUENCE_TASK(&iVar3);
					iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2538.6f, 4976.9f, 50.6f, -1.8f, 0f, 93.2f, 5000, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2536.153f, 4976.7f, 50.5267f, -1.8f, 0f, 93.2f, 6000, 3, 2);
					CAM::SET_CAM_FOV(iLocal_155, 34.9f);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
				}
				else
				{
					switch (iLocal_150)
					{
						case 2:
							iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2426.8f, 5088.3f, 51.2f, 0f, 0f, -169f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2427.8f, 5087.2f, 51.2f, 0f, 0f, -169.7f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_155, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
							break;
						case 3:
							iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2326.3f, 4985.6f, 51.5f, 0f, 0f, -89.1f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2328f, 4985.4f, 52.1f, 0f, 0f, -89.1f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_155, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
							break;
						case 4:
							iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2403.6f, 4889.7f, 47.5f, 3.4f, 0f, -19.5f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, Vector(47.5f, 4889.7f, 2403.6f) + Vector(0.07f, 2.15f, 0.8f), 3.4f, 0f, -19.5f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_155, 29.8f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
							break;
						case 5:
							iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2493.4f, 4934.8f, 45.7f, 5.2f, 0f, 48f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, Vector(45.7f, 4934.8f, 2493.4f) + Vector(0f, 1f, -1f), 5.2f, 0f, 48f, 6000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_155, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
							break;
						case 6:
							iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 15000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_155, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
							break;
						case 7:
							iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2487.8f, 4896.9f, 151.9f, -47.2f, 0f, 28.8f, 5000, 3, 2);
							CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2570.6f, 4982f, 151.6f, -47.9f, 0f, 88.1f, 15000, 3, 2);
							CAM::SET_CAM_FOV(iLocal_155, 28.5f);
							CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
							break;
						}
				}
				if (iLocal_150 < 6)
				{
					CAM::SHAKE_CAM(iLocal_155, "Hand_shake", 0.2f);
				}
				else
				{
					CAM::SHAKE_CAM(iLocal_155, "Hand_shake", 0.7f);
				}
				CAM::SET_CAM_ACTIVE(iLocal_155, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				RECORDING::REPLAY_START_EVENT(4);
				AUDIO::START_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
				__LIB_8__::func_770(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 32);
				__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				iLocal_159 = MISC::GET_GAME_TIMER() + 1000;
				iVar4 = 0;
				while (iVar4 < Local_113.f_0)
				{
					if (!PED::IS_PED_INJURED(Local_113[iVar4 /*33*/]))
					{
						AUDIO::STOP_PED_SPEAKING(Local_113[iVar4 /*33*/], true);
					}
					iVar4++;
				}
				iLocal_160 = PED::CREATE_PED(26, joaat("A_M_Y_MethHead_01"), 2460.4495f, 4976.938f, 45.5765f, 243.4917f, true, true);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_160, joaat("WEAPON_MICROSMG"), -1, true, true);
				if (!PED::IS_PED_INJURED(iLocal_160))
				{
					func_99();
					TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2463.0156f, 4974.97f, 45.5765f, 1f, -1, 0.5f, 1, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2452.8335f, 4964.785f, 45.5765f, 1f, -1, 0.5f, 1, 40000f);
					TASK::TASK_PAUSE(0, 500);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2460.4495f, 4976.938f, 45.5765f, 1f, -1, 0.5f, 0, 40000f);
					func_98(&iLocal_160, 1);
				}
				iLocal_147 = VEHICLE::CREATE_VEHICLE(joaat("dubsta"), 2479.9612f, 4990f, 45.8f, -5.37f, true, true, false);
				func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
				iLocal_150 = 3;
			}
			break;
		case 3:
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2445.9443f, 4962.9863f, 51.4782f, 7.9159f, 0f, 34.5909f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2445.6843f, 4963.3677f, 51.6659f, 3.6033f, 0f, 34.5909f, 3500, 3, 2);
				CAM::SET_CAM_FOV(iLocal_155, 34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
				CAM::SHAKE_CAM(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3500;
				iLocal_150++;
			}
			break;
		case 4:
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2465.0703f, 4946.6885f, 45.3372f, 7.1461f, 0f, 30.9281f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2466.0112f, 4947.377f, 45.3509f, 7.1461f, 0f, 32.3761f, 3000, 3, 2);
				CAM::SET_CAM_FOV(iLocal_155, 34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
				CAM::SHAKE_CAM(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 3000;
				iLocal_150++;
			}
			break;
		case 5:
			iLocal_377 = 1;
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				iLocal_377 = 1;
				CAM::DESTROY_ALL_CAMS(false);
				iLocal_155 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", true);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2509.6912f, 4971.024f, 44.1325f, 7.2578f, 0f, 88.5226f, 5000, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(iLocal_155, 2509.4146f, 4971.163f, 44.1674f, 6.6554f, 0f, 89.4229f, 2500, 3, 2);
				CAM::SET_CAM_FOV(iLocal_155, 37.34f);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_155, 0);
				CAM::SHAKE_CAM(iLocal_155, "Hand_shake", 0.5f);
				iLocal_158 += 2500;
				iLocal_150++;
			}
			break;
		case 6:
			if (SYSTEM::TIMERA() > iLocal_158)
			{
				if (__LIB_0__::func_90())
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(6.818f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_147, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_147, "EXL_2_abandoned_car", 1, joaat("dubsta"), 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					iLocal_374 = 0;
					iLocal_150 = 11;
				}
			}
			break;
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_84, false))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_84);
			}
			if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && !CUTSCENE::IS_CUTSCENE_PLAYING()) || (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true)))
			{
				iLocal_150++;
			}
			break;
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_84) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_84, false))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_84);
			}
			if ((CAM::IS_SCREEN_FADED_OUT() && !CUTSCENE::IS_CUTSCENE_PLAYING()) || (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true)))
			{
				CAM::DESTROY_ALL_CAMS(false);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (__LIB_4__::func_739() && !bLocal_165)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
				}
				RECORDING::REPLAY_STOP_EVENT();
				if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 1) < 15f && __LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, 1) > 1f)
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), __LIB_4__::func_305(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2458.2227f, 4986.0415f, 49.052414f, 1));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.3f, 1f);
				CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(6.818f);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				AUDIO::STOP_STREAM();
				AUDIO::STOP_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				__LIB_8__::func_770(0);
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), false))
				{
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE")) < 15)
					{
						WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), 50);
					}
				}
				__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_160))
				{
					PED::DELETE_PED(&iLocal_160);
				}
				iLocal_380 = func_18(4);
				if (iLocal_380 != -1)
				{
					if (!PED::IS_PED_INJURED(Local_113[iLocal_380 /*33*/]))
					{
						PED::DELETE_PED(&(Local_113[iLocal_380 /*33*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_113[iLocal_380 /*33*/].f_20))
					{
						OBJECT::DELETE_OBJECT(&(Local_113[iLocal_380 /*33*/].f_20));
					}
					Local_119[iLocal_380 /*24*/].f_3 = 1;
					Local_113[iLocal_380 /*33*/].f_5 = 0;
					Local_113[iLocal_380 /*33*/].f_14 = 0;
					Local_113[iLocal_380 /*33*/].f_3 = 2;
				}
				iLocal_381 = func_18(5);
				if (iLocal_381 != -1)
				{
					if (!PED::IS_PED_INJURED(Local_113[iLocal_381 /*33*/]))
					{
						PED::DELETE_PED(&(Local_113[iLocal_381 /*33*/]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_113[iLocal_381 /*33*/].f_20))
					{
						OBJECT::DELETE_OBJECT(&(Local_113[iLocal_381 /*33*/].f_20));
					}
					Local_119[iLocal_381 /*24*/].f_3 = 1;
					Local_113[iLocal_381 /*33*/].f_5 = 0;
					Local_113[iLocal_381 /*33*/].f_14 = 0;
					Local_113[iLocal_381 /*33*/].f_3 = 2;
				}
				func_31(20, 0);
				if (!PED::IS_PED_INJURED(iLocal_161))
				{
					PED::DELETE_PED(&iLocal_161);
				}
				if (!PED::IS_PED_INJURED(iLocal_162))
				{
					PED::DELETE_PED(&iLocal_162);
				}
				if (__LIB_31__::func_732(iLocal_147))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_147);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
				{
					OBJECT::DELETE_OBJECT(&iLocal_183);
				}
				func_208();
				iLocal_111 = 0;
				func_27();
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_phone_ing"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dubsta"));
				iVar5 = 0;
				while (iVar5 < Local_113.f_0)
				{
					if (!PED::IS_PED_INJURED(Local_113[iVar5 /*33*/]))
					{
						AUDIO::STOP_PED_SPEAKING(Local_113[iVar5 /*33*/], false);
					}
					iVar5++;
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-6.3f, 1f);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_84))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_84, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_84, false);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_84)))
						{
							ENTITY::SET_ENTITY_VELOCITY(iLocal_84, Local_112);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_84, -1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_84, true, true, false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_84)))
						{
							ENTITY::SET_ENTITY_ROTATION(iLocal_84, 0f, 0f, ENTITY::GET_ENTITY_HEADING(iLocal_84), 2, true);
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_84);
							ENTITY::SET_ENTITY_VELOCITY(iLocal_84, 1f, 1f, 1f);
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_84, -1);
						}
						if (iLocal_378 == 0)
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_84, -1);
						}
						ENTITY::SET_ENTITY_VISIBLE(iLocal_84, true, false);
					}
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
				PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
				STREAMING::END_SRL();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
				func_182(11);
			}
			break;
	}
}

void func_208()//Position - 0x1A48D
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_145))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_145);
	}
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/]))
		{
			PED::DELETE_PED(&(Local_113[iVar0 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
		{
			OBJECT::DELETE_OBJECT(&(Local_113[iVar0 /*33*/].f_20));
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		iVar0++;
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_168))
	{
		OBJECT::REMOVE_PICKUP(iLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_169[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_170)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_170[iVar0]));
		}
		iVar0++;
	}
	func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.1965f, 4975.3667f, 44.7288f, 121f, 1);
}

void func_209(var uParam0, var uParam1, char* sParam2, float fParam3, struct<3> Param4, float fParam5, int iParam6)//Position - 0x1A621
{
	int iVar0;
	iLocal_57 = iLocal_57;
	uLocal_70 = fParam3;
	Local_71 = { Param4 };
	fLocal_72 = fParam5;
	Local_77 = { *uParam1 };
	cLocal_78 = sParam2;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*24*/])->f_1 = 0;
		(uParam0[iVar0 /*24*/])->f_2 = 0;
		(uParam0[iVar0 /*24*/])->f_3 = iParam6;
		(uParam0[iVar0 /*24*/])->f_4 = 0;
		(uParam0[iVar0 /*24*/])->f_5 = 0;
		(uParam0[iVar0 /*24*/])->f_7 = 0;
		(uParam0[iVar0 /*24*/])->f_8 = 0;
		(uParam0[iVar0 /*24*/])->f_10 = 0;
		(uParam0[iVar0 /*24*/])->f_11 = 0;
		(uParam0[iVar0 /*24*/])->f_12 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_15 = { 0f, 0f, 0f };
		(uParam0[iVar0 /*24*/])->f_18 = 0f;
		iVar0++;
	}
	bLocal_53 = false;
	bLocal_54 = false;
	iLocal_55 = 0;
	bLocal_56 = false;
	iLocal_57 = 0;
	bLocal_75 = true;
	iLocal_74 = 0;
	iLocal_58 = 0;
	iLocal_60 = 0;
	iLocal_61 = -1;
	iLocal_62 = -1;
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	iLocal_66 = 0;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	EVENT::BLOCK_DECISION_MAKER_EVENT(joaat("DEFAULT"), 31 /*EVENT_INJURED_CRY_FOR_HELP*/);
	iLocal_52 = 0;
}

void func_224()//Position - 0x1ABAF
{
	int iVar0;
	func_176(1, 4);
	func_166(0, 2, 0, 2, 3, 1, 0, 1, 0, 1, 0);
	func_166(1, 3, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(3, 42, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(4, 47, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(5, 4, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(6, 6, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(7, 7, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(8, 8, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(9, 9, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_155(0, 1, 2, 2, 1, 0, 1, 0);
	func_203(3, 0, 0, 1, 0);
	if ((__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2458.2227f, 4986.0415f, 49.052414f, 0) < 107.9f || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2374.4414f, 4930.564f, 34.737843f, 2478.099f, 5077.4883f, 60.632458f, 185f, false, false, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2396.7258f, 4887.434f, 33.85329f, 2510.5396f, 5003.356f, 58.011837f, 158.25f, false, false, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Local_184.f_5))
		{
			HUD::SET_BLIP_ROUTE(Local_184.f_6, false);
		}
		func_182(11);
	}
	else
	{
		switch (iLocal_150)
		{
			case 0:
				func_32(2, 0);
				func_32(3, 0);
				func_32(1, 0);
				func_32(5, 0);
				func_268(5, -20);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				iLocal_150++;
				break;
			case 1:
				if (__LIB_36__::func_14(&Local_184, 2608.1511f, 4949.754f, 39.4f, 9f, 9f, 2f, 1, "FRMCHSE_1", 1, 1, -1))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 6f, 3);
					iLocal_150++;
					__LIB_18__::func_192(&Local_184, 1, 0);
					func_31(3, 1);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_TO_FARMHOUSE"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
					}
				}
				break;
			case 2:
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
					if (__LIB_6__::func_762(iVar0, 10f, 2, 1056964608, 0, 1, 0))
					{
						if (func_225(5) > 2)
						{
							iLocal_150++;
						}
					}
				}
				else
				{
					iLocal_150++;
				}
				break;
			case 3:
				if (__LIB_36__::func_14(&Local_184, 2573.6301f, 4983.677f, 50.6978f, 12f, 12f, 2f, 0, "FRMCHSE_5", 1, 1, -1))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
					}
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
					func_182(11);
				}
				if (HUD::DOES_BLIP_EXIST(Local_184.f_5))
				{
					HUD::SET_BLIP_ROUTE(Local_184.f_6, false);
				}
				break;
			}
	}
}

int func_225(int iParam0)//Position - 0x1AEA8
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if (Local_153[iVar0 /*6*/].f_1 == 1)
		{
			if (Local_153[iVar0 /*6*/] == iParam0)
			{
				return Local_153[iVar0 /*6*/].f_2;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_268(int iParam0, int iParam1)//Position - 0x1D86D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		if (Local_153[iVar0 /*6*/] == iParam0)
		{
			if (Local_153[iVar0 /*6*/].f_1 == 1)
			{
				Local_153[iVar0 /*6*/].f_2 = iParam1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_269()//Position - 0x1D8B1
{
	int iVar0;
	int iVar1;
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	switch (iLocal_150)
	{
		case 0:
			iLocal_144 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			if (__LIB_0__::func_90())
			{
				STREAMING::REQUEST_ANIM_DICT("MISSChinese2_crystalMazeMCS1_IG");
				STREAMING::REQUEST_MODEL(joaat("IG_Old_Man2"));
				STREAMING::REQUEST_MODEL(joaat("IG_Old_Man1A"));
				STREAMING::REQUEST_MODEL(joaat("IG_Janet"));
				STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
				STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
				STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
				STREAMING::REQUEST_ANIM_DICT("missrampageintrooutro");
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), false, 0);
				__LIB_26__::func_367(1, 1, 1, 0, 0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					Local_113[14 /*33*/] = Global_96938.f_9[2];
					Local_113[13 /*33*/] = Global_96938.f_9[1];
					Local_113[11 /*33*/] = Global_96938.f_9[4];
					Local_113[10 /*33*/] = Global_96938.f_9[3];
					Local_113[12 /*33*/] = Global_96938.f_9[0];
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_113[14 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_113[13 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_113[11 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_113[10 /*33*/], true, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_113[12 /*33*/], true, true);
					if (!PED::IS_PED_INJURED(Local_113[13 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("IG_Old_Man1A"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_113[14 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[14 /*33*/], "Old_Man2", 0, joaat("IG_Old_Man2"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[11 /*33*/], "tao", 0, joaat("IG_TaoCheng"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[10 /*33*/], "Taos_Translator", 0, joaat("IG_TaosTranslator"), 0);
					}
					if (!PED::IS_PED_INJURED(Local_113[12 /*33*/]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[12 /*33*/], "Janet", 0, joaat("IG_Janet"), 0);
					}
				}
				else
				{
					Local_113[13 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man1A"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[13 /*33*/], "Old_Man1A", 0, joaat("IG_Old_Man1A"), 0);
					Local_113[14 /*33*/] = PED::CREATE_PED(26, joaat("IG_Old_Man2"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[14 /*33*/], "Old_Man2", 0, joaat("IG_Old_Man2"), 0);
					if (ENTITY::DOES_ENTITY_EXIST(Local_113[11 /*33*/]))
					{
						if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[11 /*33*/], "tao", 0, joaat("IG_TaoCheng"), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[11 /*33*/], "tao", 2, joaat("IG_TaoCheng"), 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[10 /*33*/], "Taos_Translator", 2, joaat("IG_TaosTranslator"), 0);
					Local_113[12 /*33*/] = PED::CREATE_PED(26, joaat("IG_Janet"), 1987.231f, 3052.741f, 46.214f, 0f, true, true);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_113[12 /*33*/], "Janet", 0, joaat("IG_Janet"), 0);
				}
				__LIB_9__::func_995();
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				MISC::CLEAR_AREA_OF_PEDS(1991.2196f, 3054.8843f, 50.277412f, 87f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(1991.2196f, 3054.8843f, 50.277412f, 87f, 0);
				PED::ADD_SCENARIO_BLOCKING_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(40f, 40f, 40f), false, true, true, true);
				PED::SET_PED_NON_CREATION_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(0f, 40f, 40f));
				func_32(0, 0);
				func_32(26, 0);
				iLocal_576 = 0;
				iLocal_150++;
			}
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				iLocal_150++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_576 == 0)
				{
					__LIB_0__::func_372(13);
					iLocal_576++;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_113[13 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Old_Man1A", 0))
				{
					Local_113[13 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Old_Man1A", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_113[14 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Old_Man2", 0))
				{
					Local_113[14 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Old_Man2", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_113[11 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("tao", 0))
				{
					Local_113[11 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("tao", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_113[10 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Taos_Translator", 0))
				{
					Local_113[10 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Taos_Translator", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_113[12 /*33*/]))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Janet", 0))
				{
					Local_113[12 /*33*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Janet", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("tao", 0))
			{
				if (!PED::IS_PED_INJURED(Local_113[11 /*33*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[11 /*33*/], iLocal_118);
					PED::SET_PED_CAN_BE_TARGETTED(Local_113[11 /*33*/], false);
					iVar0 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_113[11 /*33*/], iVar0, "misschinese2_crystalmaze", "2int_Loop_A_TaoCheng", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Taos_Translator", 0))
			{
				if (!PED::IS_PED_INJURED(Local_113[10 /*33*/]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_113[10 /*33*/], iLocal_118);
					PED::SET_PED_CAN_BE_TARGETTED(Local_113[10 /*33*/], false);
					iVar1 = PED::CREATE_SYNCHRONIZED_SCENE(1991.988f, 3054.51f, 46.215f, 0f, 0f, 50.76f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_113[10 /*33*/], iVar1, "misschinese2_crystalmaze", "2int_Loop_A_taotranslator", 1000f, -4f, 1, 16, 1000f, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_144 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (__LIB_31__::func_732(iLocal_144) && __LIB_0__::func_529(iLocal_144, 1995.2018f, 3062.1565f, 46.0491f, 1) < 5f)
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_144, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					VEHICLE::REMOVE_VEHICLE_ASSET(ENTITY::GET_ENTITY_MODEL(iLocal_144));
				}
				else if (STREAMING::HAS_ANIM_DICT_LOADED("missrampageintrooutro"))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.1351f, 3057.4666f, 46.06f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 325.4678f);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missrampageintrooutro", "trvram_6_1h_run_outro", 1000f, -4f, -1, 0, 0.1f, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.9188f, 3057.9062f, 46.0567f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 337.2537f);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 0, false);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				GRAPHICS::RESET_ADAPTATION(6);
				__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					STREAMING::LOAD_SCENE(1992.1351f, 3057.4666f, 46.06f);
				}
				RECORDING::REPLAY_STOP_EVENT();
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 7f, 3);
				func_182(11);
			}
			break;
	}
}

void func_272()//Position - 0x1E103
{
	int iVar0;
	switch (iLocal_150)
	{
		case 0:
			HUD::REQUEST_ADDITIONAL_TEXT("FRMCHSE", 0);
			while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				func_28(27, 1);
			}
			__LIB_0__::func_203(&uLocal_203, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			__LIB_0__::func_203(&uLocal_203, 8, 0, "PED8", 0, 1);
			func_32(9, 1);
			func_32(29, 1);
			func_32(21, 1);
			func_379();
			FIRE::STOP_FIRE_IN_RANGE(2442.6897f, 4970.3477f, 46.33f, 30f);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 120f);
			Local_384[0 /*3*/] = { 2428.47f, 4968.91f, 42.11f };
			Local_384[1 /*3*/] = { 2431.14f, 4972.06f, 42.19f };
			Local_384[2 /*3*/] = { 2433.05f, 4969.22f, 42.26f };
			Local_384[3 /*3*/] = { 2437.71f, 4968.13f, 42.45f };
			Local_384[4 /*3*/] = { 2436.12f, 4964.76f, 42.19f };
			Local_384[5 /*3*/] = { 2432.13f, 4961.97f, 41.35f };
			Local_384[6 /*3*/] = { 2430.07f, 4963.78f, 41.35f };
			Local_384[7 /*3*/] = { 2434f, 4963.04f, 41.53f };
			Local_384[8 /*3*/] = { 2435.6372f, 4969.699f, 42.19639f };
			Local_109[0 /*5*/] = { 2450.3765f, 4955.8296f, 43.9394f };
			Local_109[1 /*5*/] = { 2449.815f, 4956.678f, 43.9894f };
			Local_109[2 /*5*/] = { 2449.606f, 4957.6753f, 44.0646f };
			Local_109[3 /*5*/] = { 2449.739f, 4958.7314f, 44.1544f };
			Local_109[4 /*5*/] = { 2450.1409f, 4959.745f, 44.2487f };
			Local_109[5 /*5*/] = { 2450.685f, 4960.5815f, 44.3219f };
			Local_109[6 /*5*/] = { 2451.4924f, 4961.333f, 44.4439f };
			Local_109[7 /*5*/] = { 2452.1736f, 4962.0986f, 44.5787f };
			Local_109[8 /*5*/] = { 2452.7166f, 4962.906f, 44.9141f };
			Local_109[9 /*5*/] = { 2453.3499f, 4963.5786f, 45.3558f };
			Local_109[10 /*5*/] = { 2453.754f, 4964.5654f, 45.5766f };
			Local_109[11 /*5*/] = { 2453.2256f, 4965.539f, 45.5766f };
			Local_109[12 /*5*/] = { 2452.4724f, 4966.293f, 45.5766f };
			Local_109[13 /*5*/] = { 2451.8691f, 4967.104f, 45.5766f };
			Local_109[14 /*5*/] = { 2451.529f, 4968.0825f, 45.5766f };
			Local_109[15 /*5*/] = { 2452.3271f, 4968.7124f, 45.5766f };
			Local_109[16 /*5*/] = { 2452.7961f, 4969.6426f, 45.8107f };
			Local_109[17 /*5*/] = { 2453.2607f, 4970.541f, 45.8106f };
			Local_109[18 /*5*/] = { 2453.5803f, 4971.5483f, 45.8104f };
			Local_109[19 /*5*/] = { 2452.8076f, 4972.2666f, 45.8306f };
			Local_109[20 /*5*/] = { 2452.0493f, 4972.928f, 45.8306f };
			Local_109[21 /*5*/] = { 2451.2407f, 4973.599f, 45.8306f };
			Local_109[22 /*5*/] = { 2450.248f, 4973.8887f, 45.8306f };
			Local_109[23 /*5*/] = { 2449.2073f, 4973.7837f, 45.8105f };
			Local_109[24 /*5*/] = { 2448.1724f, 4973.814f, 45.8106f };
			Local_109[25 /*5*/] = { 2447.1526f, 4973.7715f, 45.8106f };
			Local_109[26 /*5*/] = { 2446.138f, 4973.724f, 45.8106f };
			Local_109[27 /*5*/] = { 2445.1282f, 4973.6895f, 45.8106f };
			Local_109[28 /*5*/] = { 2444.2559f, 4973.0557f, 45.8106f };
			Local_109[29 /*5*/] = { 2443.6694f, 4972.194f, 45.8106f };
			Local_109[30 /*5*/] = { 2443.1191f, 4971.275f, 45.8106f };
			Local_109[31 /*5*/] = { 2442.6606f, 4970.3594f, 45.8106f };
			Local_109[32 /*5*/] = { 2442.2668f, 4969.4253f, 45.8106f };
			Local_109[33 /*5*/] = { 2441.7085f, 4968.5024f, 45.8306f };
			Local_109[34 /*5*/] = { 2441.2637f, 4967.5337f, 45.8106f };
			Local_109[35 /*5*/] = { 2440.8728f, 4966.5376f, 45.8106f };
			Local_109[36 /*5*/] = { 2440.3818f, 4965.6343f, 45.8106f };
			Local_109[37 /*5*/] = { 2439.7104f, 4964.8823f, 45.8106f };
			Local_109[38 /*5*/] = { 2438.9329f, 4964.1455f, 45.8106f };
			Local_109[39 /*5*/] = { 2438.1663f, 4963.5024f, 45.8106f };
			Local_109[40 /*5*/] = { 2437.5554f, 4962.7095f, 45.8106f };
			Local_109[41 /*5*/] = { 2436.9011f, 4961.95f, 45.8106f };
			Local_109[42 /*5*/] = { 2436.0752f, 4961.2573f, 45.8106f };
			Local_109[43 /*5*/] = { 2435.0796f, 4961.004f, 45.8118f };
			Local_109[44 /*5*/] = { 2434.0664f, 4960.7134f, 45.8181f };
			Local_109[45 /*5*/] = { 2433.045f, 4960.5938f, 45.8192f };
			Local_109[46 /*5*/] = { 2432.0647f, 4960.2495f, 45.813f };
			Local_109[47 /*5*/] = { 2431.233f, 4960.809f, 45.8089f };
			Local_109[48 /*5*/] = { 2430.5747f, 4961.5737f, 45.5917f };
			Local_109[49 /*5*/] = { 2429.8887f, 4962.028f, 44.9345f };
			Local_109[50 /*5*/] = { 2429.26f, 4962.5947f, 44.2774f };
			Local_109[51 /*5*/] = { 2428.6914f, 4963.2793f, 43.6202f };
			Local_109[52 /*5*/] = { 2428.073f, 4963.9106f, 42.9631f };
			Local_109[53 /*5*/] = { 2428.2388f, 4964.922f, 42.9631f };
			Local_109[54 /*5*/] = { 2428.9614f, 4965.4546f, 42.3059f };
			Local_109[55 /*5*/] = { 2429.45f, 4966.2236f, 41.8679f };
			Local_109[56 /*5*/] = { 2430.0728f, 4966.82f, 41.3476f };
			Local_109[57 /*5*/] = { 2431.097f, 4967.043f, 41.3476f };
			Local_109[58 /*5*/] = { 2431.8904f, 4966.403f, 41.3476f };
			Local_109[59 /*5*/] = { 2432.7676f, 4965.902f, 41.3476f };
			Local_109[60 /*5*/] = { 2433.7761f, 4965.6133f, 41.3476f };
			Local_136[0 /*6*/].f_3 = "Table Flames";
			Local_136[0 /*6*/] = 0;
			Local_136[1 /*6*/].f_3 = "Table Explosion";
			Local_136[1 /*6*/] = 0;
			Local_136[2 /*6*/].f_3 = "House Explosion";
			Local_136[2 /*6*/] = 0;
			Local_136[3 /*6*/].f_3 = "Cam Shake";
			Local_136[3 /*6*/] = 0;
			Local_136[4 /*6*/].f_3 = "Position player";
			Local_136[4 /*6*/] = 0;
			Local_136[5 /*6*/].f_3 = "Slow mo";
			Local_136[5 /*6*/] = 0;
			Local_136[0 /*6*/].f_1 = 2;
			Local_136[0 /*6*/].f_2 = 1000f;
			Local_136[1 /*6*/].f_1 = 2;
			Local_136[1 /*6*/].f_2 = 4200f;
			Local_136[2 /*6*/].f_1 = 3;
			Local_136[2 /*6*/].f_2 = 0f;
			Local_136[3 /*6*/].f_1 = 3;
			Local_136[3 /*6*/].f_2 = 0f;
			Local_136[4 /*6*/].f_1 = 3;
			Local_136[4 /*6*/].f_2 = 3200f;
			Local_136[5 /*6*/].f_1 = 3;
			Local_136[5 /*6*/].f_2 = 700f;
			Local_137[0 /*18*/] = { 2454.83f, 4974.96f, 46.4489f };
			Local_137[0 /*18*/].f_3 = { 2.9627f, 0.077f, 115.874f };
			Local_137[0 /*18*/].f_14 = 39.703f;
			Local_137[0 /*18*/].f_6 = { 2454.41f, 4974.93f, 46.4691f };
			Local_137[0 /*18*/].f_9 = { 2.6238f, 0.077f, 114.001f };
			Local_137[0 /*18*/].f_15 = 39.703f;
			Local_137[0 /*18*/].f_12 = 2500f;
			Local_137[0 /*18*/].f_13 = 2500f;
			Local_137[0 /*18*/].f_16 = 0;
			Local_137[0 /*18*/].f_17 = 18;
			Local_137[1 /*18*/] = { 2435.41f, 4960.94f, 45.9568f };
			Local_137[1 /*18*/].f_3 = { 6.677f, 0f, -49.4853f };
			Local_137[1 /*18*/].f_14 = 58.9114f;
			Local_137[1 /*18*/].f_6 = { 2435.11f, 4960.62f, 45.9441f };
			Local_137[1 /*18*/].f_9 = { 6.3596f, 0f, -44.8248f };
			Local_137[1 /*18*/].f_15 = 58.9114f;
			Local_137[1 /*18*/].f_12 = 3200f;
			Local_137[1 /*18*/].f_13 = 1900f;
			Local_137[1 /*18*/].f_16 = 0;
			Local_137[1 /*18*/].f_17 = 34;
			Local_137[2 /*18*/] = { 2434.77f, 4969.56f, 42.3654f };
			Local_137[2 /*18*/].f_3 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_14 = 35.1297f;
			Local_137[2 /*18*/].f_6 = { 2434.66f, 4969.68f, 42.3657f };
			Local_137[2 /*18*/].f_9 = { 5.2773f, -0.1511f, 132.167f };
			Local_137[2 /*18*/].f_15 = 35.1297f;
			Local_137[2 /*18*/].f_12 = 3500f;
			Local_137[2 /*18*/].f_13 = 4500f;
			Local_137[2 /*18*/].f_16 = 3;
			Local_137[2 /*18*/].f_17 = 49;
			Local_137[3 /*18*/] = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_3 = { 6f, 0f, 25.3f };
			Local_137[3 /*18*/].f_14 = 33.1297f;
			Local_137[3 /*18*/].f_6 = { 2472.1f, 4943.1f, 45.3f };
			Local_137[3 /*18*/].f_9 = { 5.5f, 0f, 35.6f };
			Local_137[3 /*18*/].f_15 = 33.1297f;
			Local_137[3 /*18*/].f_12 = 3500f;
			Local_137[3 /*18*/].f_13 = 3500f;
			Local_137[3 /*18*/].f_16 = 0;
			Local_137[3 /*18*/].f_17 = -1;
			fLocal_157 = 0.06f;
			__LIB_0__::func_367(1);
			Local_142[0 /*3*/] = { 2432.74f, 4963.43f, 41.35f };
			Local_142[1 /*3*/] = { 2432.02f, 4962.61f, 41.35f };
			Local_142[2 /*3*/] = { 2431.06f, 4961.83f, 41.35f };
			Local_142[3 /*3*/] = { 2430.84f, 4961.08f, 42.09f };
			Local_142[4 /*3*/] = { 2430.53f, 4962.47f, 42f };
			Local_142[5 /*3*/] = { 2430.81f, 4961.1f, 42.8f };
			Local_142[6 /*3*/] = { 2429.74f, 4961.98f, 42.32f };
			Local_142[7 /*3*/] = { 2433.5f, 4966.76f, 41.35f };
			Local_142[8 /*3*/] = { 2433.24f, 4967.42f, 41.35f };
			Local_142[9 /*3*/] = { 2433.15f, 4967.43f, 42.19f };
			Local_142[10 /*3*/] = { 2432.53f, 4967.89f, 42.4f };
			Local_142[11 /*3*/] = { 2432.48f, 4969.07f, 42.19f };
			Local_142[12 /*3*/] = { 2433.36f, 4969.44f, 42.31f };
			Local_130[0 /*3*/] = { 2552.6924f, 4978.5664f, 45.32309f };
			Local_130[1 /*3*/] = { 2562.5337f, 5013.502f, 47.463024f };
			Local_130[2 /*3*/] = { 2553.8848f, 4945.6606f, 47.493053f };
			Local_130[3 /*3*/] = { 2515.5452f, 4936.428f, 42.883816f };
			Local_130[4 /*3*/] = { 2497.3184f, 4967.818f, 43.595566f };
			Local_130[5 /*3*/] = { 2481.3762f, 4951.766f, 43.99859f };
			Local_130[6 /*3*/] = { 2522.0444f, 4956.3716f, 43.71605f };
			Local_130[7 /*3*/] = { 2529.048f, 4985.6274f, 43.868477f };
			Local_130[8 /*3*/] = { 2502.5034f, 4987.245f, 46.62669f };
			Local_130[9 /*3*/] = { 2464.891f, 4939.9487f, 44.256462f };
			Local_130[10 /*3*/] = { 2447.1602f, 4940.2725f, 44.15766f };
			Local_130[11 /*3*/] = { 2376.5369f, 4946.3994f, 41.772324f };
			Local_130[12 /*3*/] = { 2395.232f, 4995.63f, 44.689095f };
			Local_130[13 /*3*/] = { 2419.819f, 4991.9355f, 45.369762f };
			Local_130[14 /*3*/] = { 2436.3193f, 5011.725f, 45.846943f };
			Local_130[15 /*3*/] = { 2407.7646f, 5023.0786f, 47.770912f };
			Local_130[16 /*3*/] = { 2479.0159f, 5028.829f, 42.98806f };
			Local_130[17 /*3*/] = { 2434.704f, 5042.713f, 45.34462f };
			Local_130[18 /*3*/] = { 2513.93f, 5039.3325f, 51.021214f };
			Local_130[19 /*3*/] = { 2477.8823f, 4986.437f, 44.995113f };
			Local_130[20 /*3*/] = { 2450.058f, 5011.858f, 44.890316f };
			func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.1965f, 4975.3667f, 44.7288f, 121f, 1);
			__LIB_31__::func_736(&Local_120, "ONEILGUARD4", 5, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_121, "ONEILGUARD4", 5, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_125, "CHI2_nope", 8, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_122, "SEETREVOR", 3, "chin2goon1");
			__LIB_31__::func_736(&Local_123, "CHI2_hear", 8, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_124, "CHI2_hear", 8, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_126, "ONEILGUARD3", 5, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_127, "ONEILGUARD2", 5, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_128, "ONEILGUARD4", 5, "ONEILGUARD1");
			__LIB_31__::func_736(&Local_129, "GOON2TREV", 4, "CHIN2goon2");
			func_32(6, 1);
			func_32(25, 1);
			iLocal_144 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bodhi2"), true);
			PED::ADD_RELATIONSHIP_GROUP("TAOGROUP", &iLocal_118);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_118, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_118);
			__LIB_0__::func_320(0, -1);
			TASK::SET_SCENARIO_GROUP_ENABLED("Chinese2_Lunch", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("CHINESE2_HILLBILLIES", false);
			if (__LIB_0__::func_294())
			{
				iVar0 = __LIB_0__::func_315();
				if (Global_94618 == 1)
				{
					iVar0++;
				}
				switch (iVar0)
				{
					case 0:
						func_273(2, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					case 1:
						if (Global_94618 == 1)
						{
							func_273(3, 1, 0);
						}
						else
						{
							func_273(4, 1, 0);
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						break;
					case 2:
						func_273(6, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					case 3:
						func_273(7, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						break;
					case 4:
						if (Global_94618 == 1)
						{
							func_273(8, 1, 0);
						}
						else
						{
							func_273(9, 1, 0);
							CAM::DO_SCREEN_FADE_IN(1000);
						}
						break;
					case 5:
						func_273(10, 1, 0);
						CAM::DO_SCREEN_FADE_IN(1000);
						func_150();
						break;
				}
			}
			else if (__LIB_0__::func_2(0))
			{
				func_273(1, 0, 1);
			}
			else
			{
				func_182(11);
			}
			break;
	}
}

void func_273(int iParam0, bool bParam1, bool bParam2)//Position - 0x1F0DF
{
	int iVar0;
	func_371(3);
	func_32(6, 0);
	iLocal_150 = 0;
	iLocal_149 = iParam0;
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man2"));
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man1A"));
			STREAMING::REQUEST_MODEL(joaat("IG_Janet"));
			STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
			STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
			CUTSCENE::REQUEST_CUTSCENE("chinese_2_int", 8);
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man2")) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man1A"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Janet"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_TaoCheng"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_TaosTranslator"))) || !CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				func_28(323, 1);
			}
			while (!__LIB_11__::func_893(&(Local_113[11 /*33*/]), 21, 1985.6656f, 3052.6606f, 46.2151f, 0, 1))
			{
				SYSTEM::WAIT(0);
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.8784f, 3057.8464f, 46.0568f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 311f);
			PED::SET_PED_COMPONENT_VARIATION(Local_113[11 /*33*/], 9, 1, 0, 0);
			break;
		case 2:
			if (bParam1)
			{
				__LIB_0__::func_370(1992.8784f, 3057.8464f, 46.0568f, 311f, 1, 0);
			}
			else
			{
				if (__LIB_31__::func_732(iLocal_144))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_144, 1994.3872f, 3061.9397f, 46.0491f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_144, 50.7724f);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(1992.8784f, 3057.8464f, 46.0568f);
			}
			PED::ADD_SCENARIO_BLOCKING_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(40f, 40f, 40f), false, true, true, true);
			PED::SET_PED_NON_CREATION_AREA(Vector(50.277412f, 3054.8843f, 1991.2196f) - Vector(40f, 40f, 40f), Vector(50.277412f, 3054.8843f, 1991.2196f) + Vector(0f, 40f, 40f));
			MISC::CLEAR_AREA(1984.9971f, 3052.9048f, 46.8556f, 10f, true, false, false, false);
			func_285(1, 0, bParam2);
			STREAMING::REQUEST_MODEL(joaat("IG_TaoCheng"));
			STREAMING::REQUEST_MODEL(joaat("IG_TaosTranslator"));
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man1A"));
			STREAMING::REQUEST_MODEL(joaat("IG_Old_Man2"));
			STREAMING::REQUEST_MODEL(joaat("IG_Janet"));
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			while (((((!STREAMING::HAS_MODEL_LOADED(joaat("IG_TaoCheng")) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_TaosTranslator"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man1A"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Old_Man2"))) || !STREAMING::HAS_MODEL_LOADED(joaat("IG_Janet"))) || !STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
			{
				func_28(3, 1);
			}
			if (!bParam1)
			{
				if (__LIB_31__::func_732(iLocal_144))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_144, -1);
					ENTITY::SET_ENTITY_COORDS(iLocal_144, 1994.3872f, 3061.9397f, 46.0491f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_144, 50.7724f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1992.8784f, 3057.8464f, 46.0568f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 311f);
				}
			}
			func_28(85, 1);
			func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (func_175(2, 41) != 900)
			{
				func_166(2, 41, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(4, 1);
			}
			func_32(26, 0);
			if (bParam1)
			{
				if (__LIB_31__::func_732(iLocal_144))
				{
					__LIB_6__::func_775(iLocal_144, -1, 1);
				}
				else
				{
					__LIB_6__::func_775(0, -1, 1);
				}
			}
			break;
		case 3:
			if (bParam1)
			{
				__LIB_0__::func_370(2574.0486f, 4981.8237f, 50.44f, 50f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, false, true, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(2458.5076f, 4984.504f, 52.3461f);
				func_28(323, 1);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_285(0, 0, 0);
			STREAMING::PREFETCH_SRL("chinese2_farmhouse_cutscene");
			func_28(34, 1);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(5, 1);
			}
			while (!__LIB_0__::func_398(1, 0, 1))
			{
				func_28(6, 1);
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(7, 1);
			}
			while (!STREAMING::IS_SRL_LOADED())
			{
				func_28(878, 1);
			}
			if (bParam1)
			{
				__LIB_6__::func_775(0, -1, 1);
			}
			func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
			while (!func_153(10, 5))
			{
				func_166(10, 5, 0, 0, 0, 1, 0, 1, 0, 1, 0);
				func_28(234, 1);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_0__::func_370(__LIB_30__::func_190(), __LIB_31__::func_734(), 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.543f, 4982.002f, 50.6795f, false, true, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98.21f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(2570.543f, 4982.002f, 50.6795f);
				func_28(323, 1);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			func_285(0, 1, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(8, 1);
			}
			iVar0 = __LIB_11__::func_312(2);
			if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0, true);
				}
			}
			func_15("CHN2_MISSION_START", 1, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(9, 1);
			}
			if (bParam1)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_144, false)) && func_278())
				{
					__LIB_6__::func_775(iLocal_144, -1, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_144, false))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_144, true, true, false);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_144)))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_144, 15f);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_144)))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_144);
							ENTITY::SET_ENTITY_VELOCITY(iLocal_144, 1f, 1f, 1f);
						}
					}
				}
				else
				{
					__LIB_6__::func_775(0, -1, 1);
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_30__::func_190(), 2570.5376f, 4982.0312f, 50.6239f, true) < 10f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2570.5376f, 4982.0312f, 50.6239f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 98f);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_10__::func_698(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			break;
		case 5:
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2572.0095f, 4981.678f, 50.6698f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 90.3911f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_32(5, 0);
			__LIB_0__::func_367(1);
			while (func_30(5))
			{
				func_3();
				func_28(10, 1);
			}
			func_285(0, 0, 0);
			func_15("CHN2_TO_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(11, 1);
			}
			func_275(0, 1, 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			break;
		case 6:
			if (bParam1)
			{
				__LIB_0__::func_370(2450.8713f, 4960.9985f, 44.3759f, 351f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2450.8713f, 4960.9985f, 44.3759f, false, true, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 351.3911f);
				STREAMING::LOAD_SCENE(2432.9817f, 4964.823f, 41.3476f);
				func_28(325, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			func_285(0, 0, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			SYSTEM::WAIT(1);
			func_32(5, 0);
			__LIB_0__::func_367(1);
			while (func_30(5))
			{
				func_3();
				func_28(12, 1);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			func_15("CHN2_ENTER_HOUSE_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(13, 1);
			}
			func_275(0, 1, 1);
			if (bParam1)
			{
				__LIB_6__::func_775(0, -1, 1);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				__LIB_10__::func_698(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			}
			break;
		case 7:
			if (bParam1)
			{
				__LIB_0__::func_370(2435.3193f, 4966.153f, 41.3476f, 104.2964f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2435.3193f, 4966.153f, 41.3476f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 104.2964f);
				STREAMING::LOAD_SCENE(2432.9817f, 4964.823f, 41.3476f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			__LIB_0__::func_367(1);
			func_285(0, 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			iLocal_179 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_179))
			{
				iLocal_179 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
				func_28(14, 1);
			}
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_179))
			{
				func_28(15, 1);
			}
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_179, true);
			INTERIOR::UNPIN_INTERIOR(iLocal_179);
			iLocal_179 = 0;
			WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PETROLCAN"), 31, 0);
			STREAMING::REQUEST_ANIM_DICT("misschinese2_crystalmaze");
			while (!WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PETROLCAN")) || !STREAMING::HAS_ANIM_DICT_LOADED("misschinese2_crystalmaze"))
			{
				func_28(16, 1);
			}
			func_32(11, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			func_32(5, 0);
			while (func_30(5))
			{
				func_3();
				func_28(17, 1);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
			{
				func_28(18, 1);
			}
			func_274(0, 7, 1);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), 4500, true, true);
			func_169(0);
			func_15("CHN2_PETROL_RESTART", 0, "CHN2_EXPLODE");
			while (!func_2())
			{
				func_28(19, 1);
			}
			if (bParam1)
			{
				__LIB_6__::func_775(0, -1, 1);
			}
			break;
		case 8:
			if (bParam1)
			{
				__LIB_0__::func_370(2453.124f, 4952.071f, 45.125f, 285f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2453.124f, 4952.071f, 45.125f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 285.8625f);
				STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			func_285(0, 0, 0);
			if (!STREAMING::IS_SRL_LOADED())
			{
				STREAMING::PREFETCH_SRL("chinese2_explosion_cutscene");
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
			STREAMING::SET_PED_POPULATION_BUDGET(1);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")))
			{
				func_28(20, 1);
			}
			iLocal_146 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.5867f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_146, 5f);
			iLocal_179 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
			while (!INTERIOR::IS_VALID_INTERIOR(iLocal_179))
			{
				iLocal_179 = INTERIOR::GET_INTERIOR_AT_COORDS(2432.9817f, 4964.823f, 41.3476f);
				func_28(21, 1);
			}
			while (!INTERIOR::IS_INTERIOR_READY(iLocal_179))
			{
				func_28(22, 1);
			}
			iLocal_166 = 3;
			STREAMING::SET_INTERIOR_ACTIVE(iLocal_179, true);
			INTERIOR::UNPIN_INTERIOR(iLocal_179);
			iLocal_179 = 0;
			while (!STREAMING::HAS_MODEL_LOADED(joaat("blazer")) || !STREAMING::IS_SRL_LOADED())
			{
				func_28(24, 1);
			}
			if (bParam1)
			{
				__LIB_6__::func_775(0, -1, 1);
			}
			while (!AUDIO::LOAD_STREAM("CHINESE2_FARMHOUSE_EXPLOSION_SHOOT_GASOLINE_MASTER", 0))
			{
				func_28(23, 1);
			}
			break;
		case 9:
			if (bParam1)
			{
				__LIB_0__::func_370(2472.3f, 4948.1807f, 44.0937f, 220f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2472.3f, 4948.1807f, 44.0937f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 220.8569f);
				STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
				SYSTEM::WAIT(1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
			}
			func_31(6, 0);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::REQUEST_MODEL(joaat("blazer"));
			while ((!STREAMING::HAS_MODEL_LOADED(joaat("blazer")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE", false, -1)) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("FARMHOUSE_FIRE_BG", false, -1))
			{
				func_28(25, 1);
			}
			iLocal_146 = VEHICLE::CREATE_VEHICLE(joaat("blazer"), 2478.5867f, 4941.803f, 43.6736f, 227.2903f, true, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_146, 5f);
			func_285(0, 0, 0);
			STREAMING::LOAD_SCENE(2453.124f, 4952.071f, 45.125f);
			__LIB_18__::func_191(50, 0, 0, 1, 0);
			__LIB_18__::func_191(51, 0, 0, 1, 0);
			__LIB_18__::func_191(52, 0, 0, 1, 0);
			__LIB_18__::func_191(53, 0, 0, 1, 0);
			__LIB_18__::func_191(54, 1, 0, 1, 0);
			__LIB_18__::func_191(55, 1, 0, 1, 0);
			iLocal_173 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
			while (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_173))
			{
				func_28(161, 1);
			}
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173, 9);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), false);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), false);
			ENTITY::REMOVE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
			if (bParam1)
			{
				__LIB_6__::func_775(0, -1, 1);
			}
			break;
		case 10:
			func_31(6, 0);
			if (bParam1)
			{
				__LIB_0__::func_370(2625.776f, 4802.2173f, 32.5747f, 206f, 1, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2625.776f, 4802.2173f, 32.5747f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 206.4254f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-7f, 1f);
				STREAMING::LOAD_SCENE(2625.776f, 4802.2173f, 32.5747f);
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173, 9);
			__LIB_18__::func_191(50, 2, 0, 1, 0);
			__LIB_18__::func_191(51, 2, 0, 1, 0);
			__LIB_18__::func_191(52, 2, 0, 1, 0);
			__LIB_18__::func_191(53, 2, 0, 1, 0);
			__LIB_18__::func_191(54, 1, 0, 1, 0);
			__LIB_18__::func_191(55, 1, 0, 1, 0);
			if (bParam1)
			{
				__LIB_6__::func_775(0, -1, 1);
			}
			break;
	}
}

void func_274(int iParam0, int iParam1, int iParam2)//Position - 0x1FFF0
{
	Local_389[iParam0 /*4*/].f_1 = iParam2;
	Local_389[iParam0 /*4*/] = iParam1;
}

void func_275(int iParam0, int iParam1, int iParam2)//Position - 0x2000E
{
	Local_390[iParam0 /*7*/].f_1 = iParam2;
	Local_390[iParam0 /*7*/] = iParam1;
}

bool func_278()//Position - 0x2008E
{
	return Global_106934.f_2890.f_8;
}

void func_285(bool bParam0, bool bParam1, bool bParam2)//Position - 0x201E9
{
	if (bParam0)
	{
		if (__LIB_26__::func_465())
		{
			if (__LIB_12__::func_37(__LIB_11__::func_687(), 10f, 20f, 9f, 1))
			{
				__LIB_32__::func_733();
				while (!__LIB_32__::func_732())
				{
					func_28(54455, 1);
				}
				if (bParam2)
				{
					iLocal_144 = func_360(1994.3872f, 3061.9397f, 46.0491f, 50f);
				}
				else
				{
					iLocal_144 = func_360(0f, 0f, 0f, 0f);
				}
			}
		}
	}
	else if (__LIB_24__::func_934())
	{
		__LIB_32__::func_493();
		while (!__LIB_26__::func_580())
		{
			func_28(544, 1);
		}
		iLocal_144 = __LIB_39__::func_860(0f, 0f, 0f, 0f);
	}
	if (bParam1)
	{
		if (func_278())
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_144, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_144, -1);
			}
		}
	}
}

int func_360(struct<3> Param0, float fParam1)//Position - 0x27E35
{
	return __LIB_38__::func_34(&(Global_103950.f_2890), Param0, fParam1, 0);
}

void func_371(int iParam0)//Position - 0x280AE
{
	int iVar0;
	int iVar1;
	func_184();
	func_185();
	func_186();
	func_183();
	STREAMING::END_SRL();
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	iLocal_392 = 0;
	iLocal_167 = 0;
	iLocal_163 = 0;
	iLocal_150 = 0;
	iLocal_114 = 0;
	iLocal_164 = 0;
	iLocal_374 = 0;
	iLocal_375 = 0;
	while (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(true);
		}
		else
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		func_28(0, 0);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_168))
	{
		OBJECT::REMOVE_PICKUP(iLocal_168);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_169)
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_169[iVar0]))
		{
			OBJECT::REMOVE_PICKUP(iLocal_169[iVar0]);
		}
		iVar0++;
	}
	iLocal_403 = 0;
	iLocal_404 = 0;
	iLocal_405 = 0;
	sLocal_406 = "";
	sLocal_407 = "";
	func_190();
	iLocal_63 = 0;
	iLocal_64 = 0;
	iLocal_65 = 0;
	PLAYER::SET_SPECIAL_ABILITY_MULTIPLIER(1f);
	__LIB_0__::func_555();
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	__LIB_26__::func_367(0, 1, 1, 0, 0, 0, 0);
	func_28(32, 0);
	MISC::SET_TIME_SCALE(1f);
	HUD::CLEAR_PRINTS();
	__LIB_18__::func_192(&Local_184, 1, 0);
	__LIB_0__::func_296();
	__LIB_20__::func_507();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(44.8113f, 4961.045f, 2469.9854f) - Vector(100f, 100f, 100f), Vector(44.8113f, 4961.045f, 2469.9854f) + Vector(100f, 100f, 100f), 1);
	if (iParam0 == 0)
	{
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrm"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassfrmsml"), true);
		ENTITY::CREATE_MODEL_HIDE(2457.15f, 4968.79f, 48.677f, 100f, joaat("v_ret_fhglassairfrm"), false);
		Global_40787 = 1;
	}
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE("AZL_CHN2_METH_LAB_FARM_FIRE", false, true);
	if (iParam0 != 3)
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Chinese2_Lunch", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("CHINESE2_HILLBILLIES", false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (iLocal_379 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_379))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_379);
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		__LIB_20__::func_514(PLAYER::PLAYER_PED_ID(), 2);
	}
	iVar0 = 0;
	while (iVar0 < Local_113.f_0)
	{
		if (iVar0 == 14)
		{
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/]))
		{
			if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
			{
				if (iParam0 == 3)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_113[iVar0 /*33*/]);
				}
			}
			if (iParam0 == 0 || iParam0 == 2)
			{
				if (iVar0 == 14)
				{
				}
				if (!PED::IS_PED_INJURED(Local_113[iVar0 /*33*/]))
				{
					PED::SET_PED_KEEP_TASK(Local_113[iVar0 /*33*/], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_113[iVar0 /*33*/]));
				}
			}
			else
			{
				if (iVar0 == 14)
				{
				}
				PED::DELETE_PED(&(Local_113[iVar0 /*33*/]));
			}
		}
		Local_113[iVar0 /*33*/].f_3 = 0;
		Local_113[iVar0 /*33*/].f_4 = 0;
		Local_113[iVar0 /*33*/].f_6 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_9 = { 0f, 0f, 0f };
		Local_113[iVar0 /*33*/].f_2 = 25;
		Local_113[iVar0 /*33*/].f_5 = 0;
		Local_113[iVar0 /*33*/].f_12 = 0f;
		Local_113[iVar0 /*33*/].f_13 = 0f;
		Local_113[iVar0 /*33*/].f_14 = 0;
		Local_113[iVar0 /*33*/].f_15 = 0;
		Local_113[iVar0 /*33*/].f_17 = 0;
		Local_113[iVar0 /*33*/].f_16 = 0;
		Local_113[iVar0 /*33*/].f_21 = 0;
		Local_113[iVar0 /*33*/].f_22 = 0;
		Local_119[iVar0 /*24*/].f_3 = 1;
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[iVar0 /*33*/].f_20))
		{
			OBJECT::DELETE_OBJECT(&(Local_113[iVar0 /*33*/].f_20));
		}
		PED::REMOVE_RELATIONSHIP_GROUP(Local_113[iVar0 /*33*/].f_24);
		iVar0++;
	}
	if (iParam0 != 3)
	{
		__LIB_31__::func_735();
	}
	else
	{
		func_209(&Local_119, &uLocal_203, cLocal_131, 12f, 2482.1965f, 4975.3667f, 44.7288f, 121f, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_373))
	{
		OBJECT::DELETE_OBJECT(&iLocal_373);
	}
	if (iParam0 != 0 && iParam0 != 2)
	{
		MISC::CLEAR_AREA(2438.4326f, 4970.4155f, 53.1778f, 450f, true, false, false, false);
		FIRE::STOP_FIRE_IN_RANGE(2442.6897f, 4970.3477f, 46.33f, 30f);
	}
	iVar0 = 0;
	while (iVar0 < Local_153.f_0)
	{
		if ((Local_153[iVar0 /*6*/].f_1 == 1 && Local_153[iVar0 /*6*/].f_3 == 0) || Local_153[iVar0 /*6*/].f_3 == 0)
		{
			Local_153[iVar0 /*6*/].f_2 = -1;
			Local_153[iVar0 /*6*/].f_4 = 0;
			Local_153[iVar0 /*6*/].f_5 = 0;
			Local_153[iVar0 /*6*/].f_1 = 0;
		}
		iVar0++;
	}
	func_3();
	if (HUD::DOES_BLIP_EXIST(iLocal_178))
	{
		HUD::REMOVE_BLIP(&iLocal_178);
	}
	iVar1 = 0;
	while (iVar1 < iLocal_170)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_170[iVar1]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_170[iVar1]));
		}
		iVar1++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
	{
		if (iParam0 != 0 && iParam0 != 2)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_144, false))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_144, true))
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_144);
					}
					else
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_144);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_145))
	{
		if (iParam0 != 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_145);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_145);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_145);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_146))
	{
		if (__LIB_31__::func_732(iLocal_146))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_146);
		}
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_176))
	{
		OBJECT::REMOVE_PICKUP(iLocal_176);
	}
	if (iParam0 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_181))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_181, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_181);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_182))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_182, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_182);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_160))
	{
		PED::DELETE_PED(&iLocal_160);
	}
	GRAPHICS::REMOVE_DECALS_IN_RANGE(2439.6868f, 4971.5405f, 45.9442f, 150f);
	if (iParam0 != 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[12 /*33*/]))
		{
			PED::DELETE_PED(&(Local_113[12 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[13 /*33*/]))
		{
			PED::DELETE_PED(&(Local_113[13 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[14 /*33*/]))
		{
			PED::DELETE_PED(&(Local_113[14 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[11 /*33*/]))
		{
			PED::DELETE_PED(&(Local_113[11 /*33*/]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_113[10 /*33*/]))
		{
			PED::DELETE_PED(&(Local_113[10 /*33*/]));
		}
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_Hillbilly_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_fertilizer"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("burrito"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man1A"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Old_Man2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaoCheng"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_TaosTranslator"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Janet"));
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_e");
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@var_f");
	STREAMING::REMOVE_ANIM_SET("move_m@gangster@generic");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_barrelRoll");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_variations@b");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@left");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@right");
	STREAMING::REMOVE_ANIM_DICT("reaction@male_stand@big_intro@backward");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_bank1");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_bank5");
	STREAMING::REMOVE_ANIM_DICT("misschinese2_crystalmazemcs1_ig");
	if (iParam0 != 3)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
		}
	}
	iLocal_159 = 0;
	iLocal_111 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_TO_FARMHOUSE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_TO_FARMHOUSE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_DRIVE_ROCK_RADIO"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_DRIVE_ROCK_RADIO");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_FARMHOUSE_OVERVIEW"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_FARMHOUSE_OVERVIEW");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_STEALTH"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_STEALTH");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOTOUT_ENEMIES_ALERTED"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOTOUT_ENEMIES_ALERTED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_POUR_GAS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_POUR_GAS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_SHOOT_GAS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_SHOOT_GAS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_GAS_TRAIL_FIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_GAS_TRAIL_FIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHI_2_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CHI_2_RAYFIRE");
	}
	AUDIO::STOP_STREAM();
	if (iParam0 != 0)
	{
		func_15("CHN2_STOP_TRACK", 0, __LIB_0__::func_459());
		while (!func_2())
		{
			func_28(0, 0);
		}
	}
	if (iParam0 != 3)
	{
		__LIB_0__::func_367(0);
	}
	if (iParam0 != 0)
	{
		iLocal_173 = OBJECT::GET_RAYFIRE_MAP_OBJECT(2457.15f, 4968.79f, 48.677f, 45f, "DES_FarmHs");
		if (iLocal_174)
		{
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_173))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_173, 2);
			}
			iLocal_174 = 0;
		}
	}
}

void func_379()//Position - 0x28B30
{
	PED::ADD_RELATIONSHIP_GROUP("MYFRIEND", &iLocal_115);
	PED::ADD_RELATIONSHIP_GROUP("FOE", &iLocal_116);
	PED::ADD_RELATIONSHIP_GROUP("IGNORE", &iLocal_117);
	PED::ADD_RELATIONSHIP_GROUP("BARpeds", &iLocal_154);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_154, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), iLocal_116);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_116, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_115, iLocal_117);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_116, iLocal_117);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_117, PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_117, iLocal_116);
}

void func_380()//Position - 0x28BC6
{
	switch (iLocal_575)
	{
		case 0:
			if (iLocal_149 >= 4)
			{
				__LIB_42__::func_415(1, "Snipe from hill", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		case 1:
			if (iLocal_149 >= 4 && iLocal_149 < 7)
			{
				if (func_93(12) || iLocal_149 == 6)
				{
					__LIB_42__::func_415(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 == 7)
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"), false))
				{
					__LIB_42__::func_415(2, "Inside House", 0, 0, 0, 1);
					iLocal_575++;
				}
			}
			else if (iLocal_149 > 7)
			{
				__LIB_42__::func_415(2, "Inside House", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		case 2:
			if (iLocal_149 >= 7)
			{
				__LIB_42__::func_415(3, "Pour petrol trail", 0, 0, 0, 1);
				iLocal_575++;
			}
			break;
		case 3:
			if (iLocal_149 == 9)
			{
				__LIB_42__::func_415(4, "Leave the farm house", 1, 0, 0, 1);
				iLocal_575++;
			}
			break;
	}
}

void func_454(int iParam0)//Position - 0x30F37
{
	func_371(iParam0);
	GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	__LIB_8__::func_770(0);
	__LIB_6__::func_771();
	HUD::CLEAR_PRINTS();
	if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_148))
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_148);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PETROLCAN"));
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			if (__LIB_0__::func_529(PLAYER::PLAYER_PED_ID(), 2444.0984f, 4977.795f, 48.9959f, 1) < 100f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 2463.8108f, 4961.747f, 44.176f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 20f);
			}
		}
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		__LIB_18__::func_191(50, 0, 0, 1, 0);
		__LIB_18__::func_191(51, 0, 0, 1, 0);
		__LIB_18__::func_191(52, 0, 0, 1, 0);
		__LIB_18__::func_191(53, 0, 0, 1, 0);
		__LIB_18__::func_191(54, 0, 0, 1, 0);
		__LIB_18__::func_191(55, 0, 0, 1, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_455()//Position - 0x3104F
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
				if (!func_140(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_26__::func_260();
		}
	}
}

