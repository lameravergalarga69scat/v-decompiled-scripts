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
	float fLocal_65 = 0f;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	bool bLocal_70 = 0;
	bool bLocal_71 = 0;
	bool bLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	bool bLocal_75 = 0;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	bool bLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	float fLocal_100[1] = { 0f };
	float fLocal_101[1] = { 0f };
	float fLocal_102[1] = { 0f };
	float fLocal_103[1] = { 0f };
	float fLocal_104[1] = { 0f };
	float fLocal_105 = 0f;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	float fLocal_109[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_110[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_111[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_112[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_113[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_114[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_115[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_116[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_117[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_118[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	float fLocal_123 = 0f;
	float fLocal_124 = 0f;
	float fLocal_125 = 0f;
	float fLocal_126 = 0f;
	float fLocal_127 = 0f;
	float fLocal_128 = 0f;
	float fLocal_129 = 0f;
	float fLocal_130 = 0f;
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135 = 0f;
	float fLocal_136 = 0f;
	float fLocal_137 = 0f;
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	int iLocal_140[1] = { 0 };
	int iLocal_141[1] = { 0 };
	int iLocal_142[1] = { 0 };
	int iLocal_143[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_144[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_145[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_146[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<3> Local_164[1];
	struct<3> Local_165[6];
	struct<3> Local_166[22];
	struct<3> Local_167 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	struct<3> Local_169 = { 0, 0, 0 } ;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<3> Local_176 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_178 = { 0, 0, 0 } ;
	struct<3> Local_179 = { 0, 0, 0 } ;
	char cLocal_180[64] = "";
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190[1] = { 0 };
	int iLocal_191[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_192[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196[1] = { 0 };
	int iLocal_197[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_198[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_199[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_200[1] = { 0 };
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	var uLocal_204 = 8;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	bool bLocal_220 = 0;
	bool bLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	bool bLocal_224 = 0;
	bool bLocal_225 = 0;
	bool bLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
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
	int iLocal_250[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	float fLocal_299 = 0f;
	float fLocal_300 = 0f;
	float fLocal_301 = 0f;
	float fLocal_302 = 0f;
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	float fLocal_305 = 0f;
	struct<3> Local_306 = { 0, 0, 0 } ;
	struct<3> Local_307 = { 0, 0, 0 } ;
	struct<3> Local_308 = { 0, 0, 0 } ;
	struct<3> Local_309 = { 0, 0, 0 } ;
	struct<3> Local_310 = { 0, 0, 0 } ;
	struct<3> Local_311 = { 0, 0, 0 } ;
	struct<3> Local_312[2];
	struct<3> Local_313 = { 0, 0, 0 } ;
	struct<3> Local_314 = { 0, 0, 0 } ;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	char* sLocal_317 = NULL;
	char* sLocal_318 = NULL;
	char* sLocal_319 = NULL;
	char* sLocal_320 = NULL;
	struct<2> Local_321 = { 0, 0 } ;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	char cLocal_324[16] = "";
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[1] = { 0 };
	var uLocal_329 = 0;
	bool bLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	bool bLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	char* sLocal_362 = NULL;
	struct<3> Local_363 = { 0, 0, 0 } ;
	struct<3> Local_364 = { 0, 0, 0 } ;
	struct<3> Local_365 = { 0, 0, 0 } ;
	float fLocal_366 = 0f;
	float fLocal_367 = 0f;
	float fLocal_368 = 0f;
	float fLocal_369 = 0f;
	float fLocal_370 = 0f;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	struct<3> Local_377 = { 0, 0, 0 } ;
	struct<3> Local_378 = { 0, 0, 0 } ;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	var uLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390[2] = { 0, 0 };
	struct<33> Local_391[4];
	struct<33> Local_392[19];
	struct<29> Local_393 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	struct<29> Local_398 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	struct<14> Local_403 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_404 = 0;
	struct<3> Local_405 = { 0, 0, 0 } ;
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
	struct<8> Local_418 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	struct<7> Local_426 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	struct<14> Local_435 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_436 = 0;
	struct<7> Local_437 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	struct<13> Local_446 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<3> Local_458[5];
	struct<9> Local_459[19];
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463[4] = { 0, 0, 0, 0 };
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 4;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 4;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 4;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 4;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 4;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 4;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	struct<20> Local_503 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<17> Local_518 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_519 = 16;
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
	int* iLocal_684 = NULL;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	struct<6> Local_687 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_688 = 0;
	var uLocal_689 = 1092616192;
	var uLocal_690 = 1101004800;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 3;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	int iLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 21;
	var uLocal_716 = 6;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = -1;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 1000;
	var uLocal_731 = 1000;
	var uLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
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
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	struct<3> Local_764 = { 0, 0, 0 } ;
	struct<3> Local_765 = { 0, 0, 0 } ;
	struct<3> Local_766 = { 0, 0, 0 } ;
	struct<3> Local_767 = { 0, 0, 0 } ;
	struct<3> Local_768 = { 0, 0, 0 } ;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 2;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 2;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 20;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = -1;
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
	var uLocal_814 = 1065353216;
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
	var uLocal_841 = -1;
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
	var uLocal_871 = 1065353216;
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
	var uLocal_898 = -1;
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
	var uLocal_928 = 1065353216;
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
	var uLocal_955 = -1;
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
	var uLocal_985 = 1065353216;
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
	var uLocal_1012 = -1;
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
	var uLocal_1042 = 1065353216;
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
	var uLocal_1069 = -1;
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
	var uLocal_1099 = 1065353216;
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
	var uLocal_1126 = -1;
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
	var uLocal_1156 = 1065353216;
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
	var uLocal_1183 = -1;
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
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 1065353216;
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
	var uLocal_1240 = -1;
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
	var uLocal_1270 = 1065353216;
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
	var uLocal_1297 = -1;
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
	var uLocal_1327 = 1065353216;
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
	var uLocal_1354 = -1;
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
	var uLocal_1384 = 1065353216;
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
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = -1;
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
	var uLocal_1441 = 1065353216;
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
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = -1;
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
	var uLocal_1498 = 1065353216;
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
	var uLocal_1525 = -1;
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
	var uLocal_1555 = 1065353216;
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
	var uLocal_1582 = -1;
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
	var uLocal_1612 = 1065353216;
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
	var uLocal_1639 = -1;
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
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 1065353216;
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
	var uLocal_1696 = -1;
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
	var uLocal_1726 = 1065353216;
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
	var uLocal_1753 = -1;
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
	var uLocal_1783 = 1065353216;
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
	var uLocal_1810 = -1;
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
	var uLocal_1840 = 1065353216;
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
	var uLocal_1867 = -1;
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
	var uLocal_1897 = 1065353216;
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
	var uLocal_1921 = 16;
	var uLocal_1922 = 0;
	var uLocal_1923 = -1082130432;
	var uLocal_1924 = 0;
	var uLocal_1925 = -1082130432;
	var uLocal_1926 = 0;
	var uLocal_1927 = -1082130432;
	var uLocal_1928 = 0;
	var uLocal_1929 = -1082130432;
	var uLocal_1930 = 0;
	var uLocal_1931 = -1082130432;
	var uLocal_1932 = 0;
	var uLocal_1933 = -1082130432;
	var uLocal_1934 = 0;
	var uLocal_1935 = -1082130432;
	var uLocal_1936 = 0;
	var uLocal_1937 = -1082130432;
	var uLocal_1938 = 0;
	var uLocal_1939 = -1082130432;
	var uLocal_1940 = 0;
	var uLocal_1941 = -1082130432;
	var uLocal_1942 = 0;
	var uLocal_1943 = -1082130432;
	var uLocal_1944 = 0;
	var uLocal_1945 = -1082130432;
	var uLocal_1946 = 0;
	var uLocal_1947 = -1082130432;
	var uLocal_1948 = 0;
	var uLocal_1949 = -1082130432;
	var uLocal_1950 = 0;
	var uLocal_1951 = -1082130432;
	var uLocal_1952 = 0;
	var uLocal_1953 = -1082130432;
	var uLocal_1954 = 16;
	var uLocal_1955 = 0;
	var uLocal_1956 = -1082130432;
	var uLocal_1957 = 0;
	var uLocal_1958 = -1082130432;
	var uLocal_1959 = 0;
	var uLocal_1960 = -1082130432;
	var uLocal_1961 = 0;
	var uLocal_1962 = -1082130432;
	var uLocal_1963 = 0;
	var uLocal_1964 = -1082130432;
	var uLocal_1965 = 0;
	var uLocal_1966 = -1082130432;
	var uLocal_1967 = 0;
	var uLocal_1968 = -1082130432;
	var uLocal_1969 = 0;
	var uLocal_1970 = -1082130432;
	var uLocal_1971 = 0;
	var uLocal_1972 = -1082130432;
	var uLocal_1973 = 0;
	var uLocal_1974 = -1082130432;
	var uLocal_1975 = 0;
	var uLocal_1976 = -1082130432;
	var uLocal_1977 = 0;
	var uLocal_1978 = -1082130432;
	var uLocal_1979 = 0;
	var uLocal_1980 = -1082130432;
	var uLocal_1981 = 0;
	var uLocal_1982 = -1082130432;
	var uLocal_1983 = 0;
	var uLocal_1984 = -1082130432;
	var uLocal_1985 = 0;
	var uLocal_1986 = -1082130432;
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
	var uLocal_2003 = -1082130432;
	var uLocal_2004 = -1082130432;
	var uLocal_2005 = 1;
	var uLocal_2006 = 1;
	var uLocal_2007 = 1;
	var uLocal_2008 = -1;
	var uLocal_2009 = -1;
	var uLocal_2010 = -1;
	int iLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 2;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 2;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 20;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = -1;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 1065353216;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = -1;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 1065353216;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = -1;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 1065353216;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = -1;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 1065353216;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = -1;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 1065353216;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = -1;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 1065353216;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = -1;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 1065353216;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = -1;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 1065353216;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = -1;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 1065353216;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = -1;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 1065353216;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = -1;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 1065353216;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = -1;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 1065353216;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = -1;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 1065353216;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = -1;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 1065353216;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = -1;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 1065353216;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = -1;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 1065353216;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = -1;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 1065353216;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = -1;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 1065353216;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = -1;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 1065353216;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = -1;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 1065353216;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 16;
	var uLocal_3163 = 0;
	var uLocal_3164 = -1082130432;
	var uLocal_3165 = 0;
	var uLocal_3166 = -1082130432;
	var uLocal_3167 = 0;
	var uLocal_3168 = -1082130432;
	var uLocal_3169 = 0;
	var uLocal_3170 = -1082130432;
	var uLocal_3171 = 0;
	var uLocal_3172 = -1082130432;
	var uLocal_3173 = 0;
	var uLocal_3174 = -1082130432;
	var uLocal_3175 = 0;
	var uLocal_3176 = -1082130432;
	var uLocal_3177 = 0;
	var uLocal_3178 = -1082130432;
	var uLocal_3179 = 0;
	var uLocal_3180 = -1082130432;
	var uLocal_3181 = 0;
	var uLocal_3182 = -1082130432;
	var uLocal_3183 = 0;
	var uLocal_3184 = -1082130432;
	var uLocal_3185 = 0;
	var uLocal_3186 = -1082130432;
	var uLocal_3187 = 0;
	var uLocal_3188 = -1082130432;
	var uLocal_3189 = 0;
	var uLocal_3190 = -1082130432;
	var uLocal_3191 = 0;
	var uLocal_3192 = -1082130432;
	var uLocal_3193 = 0;
	var uLocal_3194 = -1082130432;
	var uLocal_3195 = 16;
	var uLocal_3196 = 0;
	var uLocal_3197 = -1082130432;
	var uLocal_3198 = 0;
	var uLocal_3199 = -1082130432;
	var uLocal_3200 = 0;
	var uLocal_3201 = -1082130432;
	var uLocal_3202 = 0;
	var uLocal_3203 = -1082130432;
	var uLocal_3204 = 0;
	var uLocal_3205 = -1082130432;
	var uLocal_3206 = 0;
	var uLocal_3207 = -1082130432;
	var uLocal_3208 = 0;
	var uLocal_3209 = -1082130432;
	var uLocal_3210 = 0;
	var uLocal_3211 = -1082130432;
	var uLocal_3212 = 0;
	var uLocal_3213 = -1082130432;
	var uLocal_3214 = 0;
	var uLocal_3215 = -1082130432;
	var uLocal_3216 = 0;
	var uLocal_3217 = -1082130432;
	var uLocal_3218 = 0;
	var uLocal_3219 = -1082130432;
	var uLocal_3220 = 0;
	var uLocal_3221 = -1082130432;
	var uLocal_3222 = 0;
	var uLocal_3223 = -1082130432;
	var uLocal_3224 = 0;
	var uLocal_3225 = -1082130432;
	var uLocal_3226 = 0;
	var uLocal_3227 = -1082130432;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = -1082130432;
	var uLocal_3245 = -1082130432;
	var uLocal_3246 = 1;
	var uLocal_3247 = 1;
	var uLocal_3248 = 1;
	var uLocal_3249 = -1;
	var uLocal_3250 = -1;
	var uLocal_3251 = -1;
	int iLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 2;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 2;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 20;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = -1;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 1065353216;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = -1;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 1065353216;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = -1;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 1065353216;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = -1;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 1065353216;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = -1;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 1065353216;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = -1;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 1065353216;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = -1;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 1065353216;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = -1;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 1065353216;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = -1;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 1065353216;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = -1;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 1065353216;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = -1;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 1065353216;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = -1;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 1065353216;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = -1;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 1065353216;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = -1;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 1065353216;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = -1;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 1065353216;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = -1;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 1065353216;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = -1;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 1065353216;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = -1;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 1065353216;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = -1;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 1065353216;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = -1;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 1065353216;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 16;
	var uLocal_4404 = 0;
	var uLocal_4405 = -1082130432;
	var uLocal_4406 = 0;
	var uLocal_4407 = -1082130432;
	var uLocal_4408 = 0;
	var uLocal_4409 = -1082130432;
	var uLocal_4410 = 0;
	var uLocal_4411 = -1082130432;
	var uLocal_4412 = 0;
	var uLocal_4413 = -1082130432;
	var uLocal_4414 = 0;
	var uLocal_4415 = -1082130432;
	var uLocal_4416 = 0;
	var uLocal_4417 = -1082130432;
	var uLocal_4418 = 0;
	var uLocal_4419 = -1082130432;
	var uLocal_4420 = 0;
	var uLocal_4421 = -1082130432;
	var uLocal_4422 = 0;
	var uLocal_4423 = -1082130432;
	var uLocal_4424 = 0;
	var uLocal_4425 = -1082130432;
	var uLocal_4426 = 0;
	var uLocal_4427 = -1082130432;
	var uLocal_4428 = 0;
	var uLocal_4429 = -1082130432;
	var uLocal_4430 = 0;
	var uLocal_4431 = -1082130432;
	var uLocal_4432 = 0;
	var uLocal_4433 = -1082130432;
	var uLocal_4434 = 0;
	var uLocal_4435 = -1082130432;
	var uLocal_4436 = 16;
	var uLocal_4437 = 0;
	var uLocal_4438 = -1082130432;
	var uLocal_4439 = 0;
	var uLocal_4440 = -1082130432;
	var uLocal_4441 = 0;
	var uLocal_4442 = -1082130432;
	var uLocal_4443 = 0;
	var uLocal_4444 = -1082130432;
	var uLocal_4445 = 0;
	var uLocal_4446 = -1082130432;
	var uLocal_4447 = 0;
	var uLocal_4448 = -1082130432;
	var uLocal_4449 = 0;
	var uLocal_4450 = -1082130432;
	var uLocal_4451 = 0;
	var uLocal_4452 = -1082130432;
	var uLocal_4453 = 0;
	var uLocal_4454 = -1082130432;
	var uLocal_4455 = 0;
	var uLocal_4456 = -1082130432;
	var uLocal_4457 = 0;
	var uLocal_4458 = -1082130432;
	var uLocal_4459 = 0;
	var uLocal_4460 = -1082130432;
	var uLocal_4461 = 0;
	var uLocal_4462 = -1082130432;
	var uLocal_4463 = 0;
	var uLocal_4464 = -1082130432;
	var uLocal_4465 = 0;
	var uLocal_4466 = -1082130432;
	var uLocal_4467 = 0;
	var uLocal_4468 = -1082130432;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = -1082130432;
	var uLocal_4486 = -1082130432;
	var uLocal_4487 = 1;
	var uLocal_4488 = 1;
	var uLocal_4489 = 1;
	var uLocal_4490 = -1;
	var uLocal_4491 = -1;
	var uLocal_4492 = -1;
	int iLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 2;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 2;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 20;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = -1;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 1065353216;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = -1;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 1065353216;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = -1;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 1065353216;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = -1;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 1065353216;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = -1;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 1065353216;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = -1;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 1065353216;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = -1;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 1065353216;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 0;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = -1;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 1065353216;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = -1;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 1065353216;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = -1;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 1065353216;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = -1;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 0;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 1065353216;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = -1;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 1065353216;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = -1;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 1065353216;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = -1;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 1065353216;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = -1;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 1065353216;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = -1;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 1065353216;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = -1;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 1065353216;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = -1;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 1065353216;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = -1;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 1065353216;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = -1;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 1065353216;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 16;
	var uLocal_5645 = 0;
	var uLocal_5646 = -1082130432;
	var uLocal_5647 = 0;
	var uLocal_5648 = -1082130432;
	var uLocal_5649 = 0;
	var uLocal_5650 = -1082130432;
	var uLocal_5651 = 0;
	var uLocal_5652 = -1082130432;
	var uLocal_5653 = 0;
	var uLocal_5654 = -1082130432;
	var uLocal_5655 = 0;
	var uLocal_5656 = -1082130432;
	var uLocal_5657 = 0;
	var uLocal_5658 = -1082130432;
	var uLocal_5659 = 0;
	var uLocal_5660 = -1082130432;
	var uLocal_5661 = 0;
	var uLocal_5662 = -1082130432;
	var uLocal_5663 = 0;
	var uLocal_5664 = -1082130432;
	var uLocal_5665 = 0;
	var uLocal_5666 = -1082130432;
	var uLocal_5667 = 0;
	var uLocal_5668 = -1082130432;
	var uLocal_5669 = 0;
	var uLocal_5670 = -1082130432;
	var uLocal_5671 = 0;
	var uLocal_5672 = -1082130432;
	var uLocal_5673 = 0;
	var uLocal_5674 = -1082130432;
	var uLocal_5675 = 0;
	var uLocal_5676 = -1082130432;
	var uLocal_5677 = 16;
	var uLocal_5678 = 0;
	var uLocal_5679 = -1082130432;
	var uLocal_5680 = 0;
	var uLocal_5681 = -1082130432;
	var uLocal_5682 = 0;
	var uLocal_5683 = -1082130432;
	var uLocal_5684 = 0;
	var uLocal_5685 = -1082130432;
	var uLocal_5686 = 0;
	var uLocal_5687 = -1082130432;
	var uLocal_5688 = 0;
	var uLocal_5689 = -1082130432;
	var uLocal_5690 = 0;
	var uLocal_5691 = -1082130432;
	var uLocal_5692 = 0;
	var uLocal_5693 = -1082130432;
	var uLocal_5694 = 0;
	var uLocal_5695 = -1082130432;
	var uLocal_5696 = 0;
	var uLocal_5697 = -1082130432;
	var uLocal_5698 = 0;
	var uLocal_5699 = -1082130432;
	var uLocal_5700 = 0;
	var uLocal_5701 = -1082130432;
	var uLocal_5702 = 0;
	var uLocal_5703 = -1082130432;
	var uLocal_5704 = 0;
	var uLocal_5705 = -1082130432;
	var uLocal_5706 = 0;
	var uLocal_5707 = -1082130432;
	var uLocal_5708 = 0;
	var uLocal_5709 = -1082130432;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = -1082130432;
	var uLocal_5727 = -1082130432;
	var uLocal_5728 = 1;
	var uLocal_5729 = 1;
	var uLocal_5730 = 1;
	var uLocal_5731 = -1;
	var uLocal_5732 = -1;
	var uLocal_5733 = -1;
	char* sLocal_5734 = NULL;
	float fLocal_5735 = 0f;
	float fLocal_5736 = 0f;
	float fLocal_5737 = 0f;
	float fLocal_5738 = 0f;
	float fLocal_5739 = 0f;
	float fLocal_5740 = 0f;
	float fLocal_5741 = 0f;
	int iLocal_5742 = 0;
	int iLocal_5743 = 0;
	int iLocal_5744 = 0;
	var uLocal_5745 = 0;
	int iLocal_5746 = 0;
	struct<3> Local_5747 = { 0, 0, 0 } ;
	struct<3> Local_5748 = { 0, 0, 0 } ;
	char* sLocal_5749 = NULL;
	struct<3> Local_5750 = { 0, 0, 0 } ;
	struct<3> Local_5751 = { 0, 0, 0 } ;
	int iLocal_5752 = 0;
	float fLocal_5753 = 0f;
	float fLocal_5754 = 0f;
	float fLocal_5755 = 0f;
	float fLocal_5756 = 0f;
	int iLocal_5757 = 0;
	int iLocal_5758 = 0;
	int iLocal_5759 = 0;
	bool bLocal_5760 = 0;
	bool bLocal_5761 = 0;
	bool bLocal_5762 = 0;
	float fLocal_5763 = 0f;
	float fLocal_5764 = 0f;
	int iLocal_5765 = 0;
	int iLocal_5766 = 0;
	int iLocal_5767 = 0;
	float fLocal_5768 = 0f;
	float fLocal_5769 = 0f;
	float fLocal_5770 = 0f;
	float fLocal_5771 = 0f;
	float fLocal_5772 = 0f;
	float fLocal_5773 = 0f;
	int iLocal_5774 = 0;
	int iLocal_5775 = 0;
	int iLocal_5776 = 0;
	int iLocal_5777 = 0;
	bool bLocal_5778 = 0;
	bool bLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
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
	Local_61 = { 0f, 0f, 0f };
	Local_62 = { 0f, 0f, 0f };
	iLocal_63 = -1;
	fLocal_65 = 1f;
	bLocal_69 = true;
	bLocal_76 = true;
	bLocal_98 = true;
	fLocal_119 = 120f;
	fLocal_120 = 0f;
	fLocal_122 = 1f;
	fLocal_123 = 0f;
	fLocal_124 = 1f;
	fLocal_125 = 30f;
	fLocal_127 = 1f;
	fLocal_128 = 5f;
	fLocal_129 = 1f;
	fLocal_130 = 1f;
	fLocal_131 = 100f;
	fLocal_132 = 100f;
	fLocal_133 = 0f;
	fLocal_134 = 7000f;
	fLocal_135 = 0f;
	fLocal_136 = 0f;
	fLocal_137 = 0.3f;
	fLocal_138 = 0.5f;
	fLocal_139 = 50f;
	iLocal_150 = -1;
	iLocal_158 = -1;
	iLocal_159 = -1;
	iLocal_262 = -1;
	iLocal_296 = AUDIO::GET_SOUND_ID();
	iLocal_297 = AUDIO::GET_SOUND_ID();
	iLocal_298 = AUDIO::GET_SOUND_ID();
	fLocal_303 = 0f;
	fLocal_304 = 0f;
	fLocal_305 = 0f;
	Local_308 = { -1588.001f, 4358.562f, 0.658f };
	Local_309 = { -3.9f, 0f, -57.56f };
	iLocal_334 = 1;
	sLocal_362 = "MattForest";
	Local_363 = { -1874.783f, 4484.7104f, 24.2898f };
	Local_364 = { -0.9f, 0.9f, 1.1f };
	Local_365 = { -24f, 0f, 65.9f };
	fLocal_366 = -31f;
	fLocal_367 = -22f;
	fLocal_368 = 30f;
	fLocal_369 = 100f;
	fLocal_370 = 3.5f;
	iLocal_460 = __LIB_12__::func_894(2);
	iLocal_461 = __LIB_12__::func_894(0);
	iLocal_462 = __LIB_12__::func_894(1);
	Local_766 = { -1552.5f, 4451f, 38.3f };
	sLocal_5734 = "shake_cam_all@";
	fLocal_5735 = 0f;
	fLocal_5736 = 40f;
	fLocal_5737 = 0f;
	fLocal_5738 = 0f;
	fLocal_5739 = 0f;
	fLocal_5740 = 0.328f;
	fLocal_5741 = 0.721f;
	iLocal_5742 = -1;
	sLocal_5749 = "missexile2switch";
	Local_5750 = { -1683.497f, 4455.5f, 1.62f };
	Local_5751 = { 0f, 0f, 190f };
	fLocal_5753 = 0.508f;
	fLocal_5754 = 1f;
	fLocal_5755 = -3f;
	fLocal_5756 = -1000f;
	fLocal_5763 = 0.328f;
	fLocal_5764 = 0.475f;
	iLocal_5767 = 2200;
	fLocal_5768 = 0.08f;
	fLocal_5769 = 0.45f;
	fLocal_5770 = 0.08f;
	fLocal_5771 = 0.9f;
	fLocal_5772 = 0f;
	fLocal_5773 = 0.5f;
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1126();
		func_1124();
		func_1121();
	}
	func_1109();
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_332)
		{
			if (func_1104())
			{
				func_1094();
			}
		}
		__LIB_0__::func_467();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_PREDATOR", 0);
		switch (iLocal_733)
		{
			case 0:
				func_1061();
				break;
			case 1:
				func_1055();
				break;
			case 2:
				func_1009();
				break;
			case 3:
				func_1005();
				break;
			case 4:
				func_1000();
				break;
			case 5:
				func_971();
				break;
			case 6:
				func_965();
				break;
			case 7:
				func_891();
				break;
			case 8:
				func_886();
				break;
			case 9:
				func_788();
				break;
			case 10:
				func_782();
				break;
			case 11:
				func_738();
				break;
			case 12:
				func_729();
				break;
			case 15:
				break;
			case 18:
				break;
			case 20:
				func_700();
				break;
			case 21:
				func_3();
				break;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!iLocal_237)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))))
					{
						__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 177);
						__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 176);
						iLocal_237 = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))))
			{
				__LIB_0__::func_505(0, 177);
				__LIB_0__::func_377(0, 176);
				iLocal_237 = 0;
			}
		}
	}
}

void func_3()//Position - 0x4DC
{
	func_699();
	switch (iLocal_735)
	{
		case 0:
			func_639();
			break;
		case 1:
			func_577();
			break;
		case 2:
			func_575();
			break;
		case 3:
			func_574();
			break;
		case 4:
			func_573();
			break;
		case 5:
			func_556();
			break;
		case 6:
			func_522();
			break;
		case 7:
			func_447();
			break;
		case 8:
			func_4();
			break;
	}
}

void func_4()//Position - 0x565
{
	if (iLocal_736)
	{
		__LIB_0__::func_427(1731f, 3273.7f, 40.5f, 264.515f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	if (iLocal_736)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((!STREAMING::HAS_MODEL_LOADED(iLocal_461) || !STREAMING::HAS_MODEL_LOADED(iLocal_462)) || !STREAMING::HAS_MODEL_LOADED(iLocal_460)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1731f, 3273.7f, 40.5f, 1000f, true, false, false, false);
	Local_403.f_0 = VEHICLE::CREATE_VEHICLE(Local_403.f_1, 1731f, 3273.7f, 40.5f, 264.515f, true, true, false);
	__LIB_0__::func_679(Local_403.f_0, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_403.f_0, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_403.f_0, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_403.f_0, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_403.f_0, 0, 0);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_403.f_0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, true, true, false);
	func_393(2, 0);
	func_379(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0, -1);
	func_41(&(iLocal_463[0]), 0, Local_403.f_0, 0, 1, 0, 0);
	func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
	func_41(&(iLocal_463[1]), 1, Local_403.f_0, 2, 1, 0, 0);
	func_379(iLocal_463[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 1, iLocal_463[1], "franklin", 0, 1);
	Local_393.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 2f) };
	func_35(&Local_393);
	HUD::REMOVE_BLIP(&(Local_393.f_2));
	func_34(Local_393.f_0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
	__LIB_16__::func_880(&iLocal_463, 2, 0);
	func_32(&iLocal_463, 2, 1);
	Local_518.f_1 = 2;
	Local_518.f_3 = Local_393.f_0;
	func_30(&Local_518);
	Local_518.f_0 = 0;
	func_16(&Local_518, &iLocal_463, 0, 1, 1, 1, 0, 3000);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_393.f_0, Local_403.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_403.f_0, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0f, false, false, false);
	CUTSCENE::REQUEST_CUTSCENE("EXL_2_MCS_3", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_403.f_0, false))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_403.f_0, "main_heli", 0, Local_403.f_1, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_463[0]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_463[0], "michael", 1, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_463[1]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_463[1], "franklin", 1, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_393.f_0))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_393.f_0, "chop", 1, Local_393.f_1, 0);
	}
	if (ENTITY::IS_ENTITY_ATTACHED(Local_393.f_0))
	{
		ENTITY::DETACH_ENTITY(Local_393.f_0, true, true);
	}
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(1742.7886f, 3280.7942f, 40.0904f, __LIB_3__::func_80(0f, 0f, 77.8678f));
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, false, false, false);
	if (!iLocal_736)
	{
		STREAMING::LOAD_SCENE(1731f, 3273.7f, 40.5f);
	}
	CAM::DO_SCREEN_FADE_IN(800);
	iLocal_284 = 1;
	iLocal_733 = 12;
}

void func_16(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)//Position - 0xC0C
{
	func_18(iParam0, iParam1);
	func_17(iParam0);
	if (bParam2)
	{
		iParam1->f_7 = 4;
	}
	if (bParam3)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	if (bParam4)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
	}
	if (bParam5)
	{
		CAM::RENDER_SCRIPT_CAMS(false, bParam6, iParam7, true, false, 0);
		if (bParam6)
		{
			iParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam7);
		}
	}
	*iParam0 = 0;
}

void func_17(var uParam0)//Position - 0xC6F
{
	switch (uParam0->f_2)
	{
		case 1:
			if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) != 7 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) != 7) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY")) != 7)
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")) == 0 || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1689270312) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) == 0) || TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 0)
				{
					uParam0->f_9 = 1;
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			break;
	}
}

void func_18(int iParam0, int iParam1)//Position - 0xD38
{
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChopVision"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("ChopVision");
	}
	func_21(iParam0, iParam1, 0);
	__LIB_0__::func_83(0);
	if (iParam0->f_12 != -1)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
		{
			AUDIO::STOP_SOUND(iParam0->f_12);
		}
	}
	func_20(iParam0, 0);
	PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/, -1);
	if (!PED::IS_PED_INJURED(iParam0->f_3))
	{
		AUDIO::STOP_PED_SPEAKING(iParam0->f_3, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_3))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false) || !ENTITY::IS_ENTITY_DEAD(iParam0->f_3, false))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam0->f_3, true, false);
		}
	}
	switch (iParam0->f_2)
	{
		case 1:
			__LIB_17__::func_59();
			break;
	}
}

void func_20(var uParam0, bool bParam1)//Position - 0xDF4
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_A_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_B_02");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_01");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CHOP_CAM_C_02");
	uParam0->f_10 = 0;
	if (bParam1)
	{
		if (uParam0->f_12 != -1)
		{
			AUDIO::RELEASE_SOUND_ID(uParam0->f_12);
			uParam0->f_12 = -1;
		}
	}
}

void func_21(var uParam0, var uParam1, bool bParam2)//Position - 0xE45
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = iVar0;
			if (iVar1 != uParam0->f_1)
			{
				if (__LIB_17__::func_65(iVar1))
				{
					__LIB_17__::func_73(uParam1, iVar1, 2);
				}
			}
			else
			{
				__LIB_17__::func_73(uParam1, iVar1, 3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar2 = iVar0;
			__LIB_17__::func_73(uParam1, iVar2, 0);
			iVar0++;
		}
	}
	if (uParam0->f_8)
	{
		__LIB_17__::func_73(uParam1, 2, 0);
	}
}

void func_30(int iParam0)//Position - 0x102E
{
	if (!CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		iParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
		if (iParam0->f_12 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam0->f_12))
			{
				AUDIO::STOP_SOUND(iParam0->f_12);
			}
			AUDIO::RELEASE_SOUND_ID(iParam0->f_12);
			iParam0->f_12 = -1;
		}
		iParam0->f_12 = AUDIO::GET_SOUND_ID();
		iParam0->f_10 = 0;
		iParam0->f_11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		__LIB_28__::func_217(iParam0);
	}
}

void func_32(int iParam0, int iParam1, int iParam2)//Position - 0x1118
{
	if (iParam1 != 4)
	{
		iParam0->f_24[iParam1] = iParam2;
	}
}

void func_34(int iParam0)//Position - 0x1148
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_758, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_758);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_758, iLocal_756);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_758, iLocal_756);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_758);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		}
	}
}

void func_35(var uParam0)//Position - 0x11A3
{
	MISC::CLEAR_AREA(uParam0->f_11, 4f, true, false, false, false);
	__LIB_28__::func_218(&Local_393, Local_393.f_11, Local_393.f_20, 1);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, false, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, false);
	PED::SET_PED_MONEY(*uParam0, 0);
	PED::SET_PED_MAX_TIME_UNDERWATER(Local_393.f_0, 10000000f);
	PED::SET_PED_DIES_IN_WATER(Local_393.f_0, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 118, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 32, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 188, true);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_28, -1, false, true);
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	uParam0->f_2 = __LIB_0__::func_666(*uParam0, 0, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	__LIB_0__::func_222(&uLocal_519, 5, Local_393.f_0, "chop", 0, 1);
	func_34(*uParam0);
}

int func_41(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x14EB
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
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
				func_359(*iParam0);
				__LIB_15__::func_980(*iParam0, 1, 0);
				__LIB_15__::func_977(*iParam0);
				__LIB_15__::func_976(*iParam0);
				func_43(*iParam0, bParam6);
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

int func_43(int iParam0, bool bParam1)//Position - 0x1616
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_13__::func_804(iVar0))
	{
		__LIB_13__::func_803(iVar0, 0);
		func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_137(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_13__::func_803(iVar0, 0);
			func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_137(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_115(iParam0, 3, 169))
					{
						func_379(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_115(iParam0, 12, 6))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 11))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 12, 10))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 12, 50))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 14, 59))
			{
				func_379(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_115(iParam0, 8, 22))
			{
				func_379(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_115(iParam0, 12, 14))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_115(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 4))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 12, 3))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 14, 82))
			{
				func_379(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_115(iParam0, 8, 76))
			{
				func_379(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_115(iParam0, 12, 1))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_115(iParam0, 12, 12))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 12, 15))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_115(iParam0, 3, 71))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_115(iParam0, 12, 7))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 12, 6))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_115(iParam0, 14, 88))
			{
				func_379(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_115(iParam0, 8, 17))
			{
				func_379(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_115(iParam0, 12, 11))
			{
				func_379(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_115(int iParam0, int iParam1, int iParam2)//Position - 0x18D90
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
				if (!func_115(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_115(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_115(iParam0, 14, iVar4))
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
			if (!func_115(iParam0, 14, uVar8[iVar7]))
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

void func_137(int iParam0, int iParam1)//Position - 0x1D40E
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = __LIB_13__::func_716(iParam0);
		if (__LIB_0__::func_374(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_334(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_13__::func_802(iVar0);
					func_150(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_15__::func_225(iParam0, &Var2, 1, -1);
			Global_100166[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_15__::func_983();
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

void func_150(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1E502
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
		iVar0 = __LIB_13__::func_716(iParam0);
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
		if (__LIB_0__::func_374(iVar0))
		{
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_332(iParam0, iVar1, &iVar2, 0))
			{
				func_379(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_330(iParam0, iVar1, &iVar2))
			{
				func_379(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_327(iParam0);
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
			func_156(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_156(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_156(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_156(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x1EC9E
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
			func_285(iVar5, iParam1, iParam2, 1);
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
						func_285(iVar5, 10, 0, 1);
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
									func_285(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_156(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_285(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_282(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_156(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_276(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_285(iVar5, 14, uVar18[iVar1], 1);
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
							func_156(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_285(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_156(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_267(iParam0);
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
						func_156(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_156(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_266(iVar5, iVar24, iVar23, iVar25);
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
							func_156(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_156(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_156(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_156(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_156(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_156(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_156(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_276(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_266(iVar5, func_282(iParam0, 8, -1), iParam2, func_282(iParam0, 4, -1));
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
				func_199(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_266(iVar5, iParam2, iVar44, iVar45);
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
			func_276(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_266(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_156(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_156(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_266(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_266(iVar5, iVar58, iVar57, iParam2);
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
						func_156(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_266(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_156(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_176(iParam0, 9, iVar63))
						{
							func_156(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_156(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_156(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_156(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_282(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_282(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_156(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_156(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_156(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_156(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_156(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_156(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_156(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_156(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_156(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_156(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_267(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_156(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_156(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_157(iParam0, &uVar4))
		{
			func_156(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_156(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_156(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_156(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_282(iParam0, 3, -1), iVar10);
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
				func_156(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_157(int iParam0, var uParam1)//Position - 0x20B49
{
	int iVar0;
	int iVar1;
	*uParam1 = func_282(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_176(iParam0, iVar1, iVar0))
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

int func_176(int iParam0, int iParam1, int iParam2)//Position - 0x24E05
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
				if (!func_176(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_176(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_176(iParam0, 14, iVar6))
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
			if (!func_176(iParam0, 14, uVar11[iVar10]))
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
						return func_176(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_176(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_199(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2BB1B
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
	func_200(iParam0, bParam3, 0, -1);
}

void func_200(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2BB68
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
		bVar3 = func_246(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_237(iParam0, iParam3);
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

int func_237(int iParam0, int iParam1)//Position - 0x3AD65
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
				iVar3 = func_282(iParam0, 11, -1);
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
				iVar5 = func_282(iParam0, 11, -1);
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

int func_246(int iParam0, bool bParam1)//Position - 0x3B1C3
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_282(iParam0, 11, -1), 0);
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
						iVar3 = func_282(iParam0, 11, -1);
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
						iVar5 = func_282(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_282(iParam0, 11, -1), 0);
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
						iVar8 = func_282(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_282(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_282(iParam0, 11, -1), 0);
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
						iVar12 = func_282(iParam0, 8, -1);
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

int func_266(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x44052
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
					iVar0 = func_266(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_266(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_267(int iParam0)//Position - 0x4538D
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
		if (!func_272(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_272(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x45D57
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_282(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_276(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x48741
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_327(iParam0))
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

int func_282(int iParam0, int iParam1, int iParam2)//Position - 0x489F0
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
				if (func_176(iParam0, iParam1, iVar0))
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
				if (func_176(iParam0, iParam1, iVar1))
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

void func_285(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x48B6F
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
							func_285(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_285(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_285(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_285(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_285(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_285(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_285(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_285(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_285(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_285(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_327(int iParam0)//Position - 0x61823
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
				iVar1 = func_282(iParam0, 11, -1);
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
				iVar3 = func_282(iParam0, 11, -1);
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

int func_330(int iParam0, int iParam1, int iParam2)//Position - 0x61B95
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_115(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x61C5C
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_115(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_334(int iParam0, int iParam1, int iParam2)//Position - 0x61F1C
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
				if (func_115(iParam0, iParam1, iVar0))
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
				if (func_115(iParam0, iParam1, iVar1))
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

void func_359(int iParam0)//Position - 0x64122
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_13__::func_716(iParam0);
	if (__LIB_0__::func_374(iVar0))
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
		func_150(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_334(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_360(__LIB_12__::func_894(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_334(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_334(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_360(__LIB_12__::func_894(0), 3, 70, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 3, 71, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 3, 72, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 3, 73, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 3, 74, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 3, 75, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 4, 41, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 4, 42, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 4, 43, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 4, 44, 1, 0, 0, 0);
					func_360(__LIB_12__::func_894(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_334(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_13__::func_802(iVar0);
				func_150(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_360(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x6437F
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_363(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_363(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x6453A
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
								func_363(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_363(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_363(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_363(iParam0, 14, iVar5, 1, 0);
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
								func_363(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_363(iParam0, 14, 17, 1, 0);
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

int func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x64EA3
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
										func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_334(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_332(iParam0, iVar10, &iVar4, 1))
							{
								func_379(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_379(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_379(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_379(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_379(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_379(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_379(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_379(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_332(iParam0, iVar10, &iVar4, 0))
		{
			func_379(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_330(iParam0, iVar10, &iVar4))
		{
			func_379(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_393(int iParam0, bool bParam1)//Position - 0x6745F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	iVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_12__::func_894(iVar0);
	if (iVar1 == 0)
	{
		return 1;
	}
	if (PED::IS_PED_MODEL(PLAYER::PLAYER_PED_ID(), iVar1))
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iVar1);
	if (!STREAMING::HAS_MODEL_LOADED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false))
		{
			iVar3 = -1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 0, false))
		{
			iVar3 = 0;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 1, false))
		{
			iVar3 = 1;
		}
		else if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, 2, false))
		{
			iVar3 = 2;
		}
		else
		{
			iVar3 = -1;
		}
	}
	else
	{
		iVar2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		func_41(&(Global_22965[iParam0]), iVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_440(&(Global_22965[iParam0]), iVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	__LIB_31__::func_990(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_440(int* iParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x6D037
{
	int iVar0;
	if (__LIB_0__::func_374(iParam1))
	{
		iVar0 = __LIB_12__::func_894(iParam1);
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
			func_359(*iParam0);
			__LIB_15__::func_980(*iParam0, 1, 0);
			__LIB_15__::func_977(*iParam0);
			__LIB_15__::func_976(*iParam0);
			func_43(*iParam0, bParam6);
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

void func_447()//Position - 0x6D2A1
{
	int iVar0;
	iVar0 = 0;
	if (iLocal_736)
	{
		__LIB_0__::func_427(-1607.5647f, 4370.1123f, 65.1f, 336.5597f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1);
	if (iLocal_736)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((!STREAMING::HAS_MODEL_LOADED(iLocal_461) || !STREAMING::HAS_MODEL_LOADED(iLocal_462)) || !STREAMING::HAS_MODEL_LOADED(iLocal_460)) || !STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, false, true, true, true);
	MISC::CLEAR_AREA(-1912.3848f, 4432.425f, 40.8423f, 10000f, true, false, false, false);
	Local_403.f_0 = VEHICLE::CREATE_VEHICLE(Local_403.f_1, -1607.5647f, 4370.1123f, 65.1f, 336.5597f, true, true, false);
	__LIB_0__::func_679(Local_403.f_0, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_403.f_0, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_403.f_0, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_403.f_0, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_403.f_0, 0, 0);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_403.f_0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, true, true, false);
	func_393(2, 0);
	func_379(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0, -1);
	func_41(&(iLocal_463[0]), 0, Local_403.f_0, 0, 1, 0, 0);
	func_521(iLocal_463[0]);
	func_520(&(iLocal_463[0]), 1);
	func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
	func_440(&(iLocal_463[1]), 1, -1563.7963f, 4589.273f, 18.5544f, 178.1914f, 0, 0, 0);
	iLocal_316 = __LIB_0__::func_639(iLocal_463[1], 0, 0);
	func_521(iLocal_463[1]);
	func_520(&(iLocal_463[1]), 1);
	func_379(iLocal_463[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_31__::func_991(iLocal_463[1], joaat("WEAPON_CARBINERIFLE"), 100, 1, 1, 1);
	__LIB_0__::func_222(&uLocal_519, 1, iLocal_463[1], "franklin", 0, 1);
	Local_313 = { -1563.7963f, 4589.273f, 18.5544f };
	Local_393.f_11 = { -1561.6675f, 4585.899f, 18.3892f };
	Local_393.f_20 = 28.3876f;
	Local_393.f_17 = { -1561.6675f, 4585.899f, 18.3892f };
	func_35(&Local_393);
	func_34(Local_393.f_0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
	iVar0 = 10;
	while (iVar0 <= (Local_392.f_0 - 1))
	{
		func_514(&(Local_392[iVar0 /*33*/]));
		iLocal_250[iVar0] = 0;
		Local_392[iVar0 /*33*/].f_27 = 0;
		iVar0++;
	}
	iLocal_271 = 1;
	iLocal_264 = 200;
	iLocal_255 = 400;
	iLocal_294 = 99;
	iLocal_733 = 10;
	if (!iLocal_736)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	AUDIO::START_AUDIO_SCENE("EXILE_2_HELI_PICK_UP");
	func_509(1, 0, 0, 1);
	__LIB_0__::func_229("FS_GOD_2", 7500, 1);
	__LIB_17__::func_789(5, "pickup franklin and chop", 1, 0, 0, 1);
}

void func_509(bool bParam0, float fParam1, float fParam2, bool bParam3)//Position - 0x74348
{
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_0__::func_638();
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	HUD::DISPLAY_HUD(true);
	HUD::DISPLAY_RADAR(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 500);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam2, 1f);
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
	}
	if (bParam3)
	{
		__LIB_16__::func_304();
	}
	else
	{
		__LIB_16__::func_305();
	}
	CAM::DO_SCREEN_FADE_IN(800);
}

void func_514(var uParam0)//Position - 0x74452
{
	MISC::CLEAR_AREA(uParam0->f_11, 4f, true, false, false, false);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_20, true, true);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, false, 0f);
	PED::SET_PED_CAN_RAGDOLL(*uParam0, true);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_MONEY(*uParam0, 0);
	if (uParam0->f_25)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	}
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	uParam0->f_27 = 1;
}

void func_520(var uParam0, bool bParam1)//Position - 0x74A1E
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_756, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_756);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_758, iLocal_756);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_756, iLocal_758);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_757);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_756, iLocal_757);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_757, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_757, iLocal_756);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_756);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 46, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, false, 0f);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
	}
}

void func_521(int iParam0)//Position - 0x74AE9
{
	PED::SET_PED_DIES_WHEN_INJURED(iParam0, false);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iParam0, false);
	PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 145);
	PED::SET_PED_SEEING_RANGE(iParam0, 250f);
	PED::SET_PED_HEARING_RANGE(iParam0, 250f);
	PED::SET_PED_ID_RANGE(iParam0, 250f);
	PED::SET_PED_CONFIG_FLAG(iParam0, 132, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
}

void func_522()//Position - 0x74B6B
{
	int iVar0;
	if (iLocal_736)
	{
		__LIB_0__::func_427(-1683.4967f, 4454.595f, 1.566f, 239.1512f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(Local_391[3 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(Local_446.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_435.f_13, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_362);
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_3");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	PED::REQUEST_ACTION_MODE_ASSET("franklin_ACTION");
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_HEAVYSNIPER"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_HEAVYSNIPER")));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
	if (iLocal_736)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while ((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_461) || !STREAMING::HAS_MODEL_LOADED(iLocal_462)) || !STREAMING::HAS_MODEL_LOADED(iLocal_460)) || !STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_391[3 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_446.f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_435.f_13, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_362)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_3")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) || !STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) || !PED::HAS_ACTION_MODE_ASSET_LOADED("franklin_action")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_HEAVYSNIPER"))) || !STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_HEAVYSNIPER")))) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	PATHFIND::SET_ROADS_IN_AREA(Local_377, Local_378, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, false, true, true, true);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	MISC::CLEAR_AREA(-1912.3848f, 4432.425f, 40.8423f, 10000f, true, false, false, false);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(0, 0f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(1, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(2, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(3, 1f);
	Local_403.f_0 = VEHICLE::CREATE_VEHICLE(Local_403.f_1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 0f, "lkexile2"), 0f, true, true, false);
	__LIB_0__::func_679(Local_403.f_0, 0);
	VEHICLE::SET_VEHICLE_EXTRA(Local_403.f_0, 12, true);
	VEHICLE::SET_VEHICLE_LIVERY(Local_403.f_0, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_403.f_0, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_403.f_0, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_403.f_0, 0, 0);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_403.f_0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, true, true, false);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 1, "lkexile2", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 12000f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
	if (__LIB_14__::func_466() != 1)
	{
		func_393(1, 0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1683.4967f, 4454.595f, 1.566f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 239.1512f);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
	ENTITY::SET_ENTITY_LOD_DIST(PLAYER::PLAYER_PED_ID(), 300);
	func_379(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
	PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_ActionMode_Idle"), false, 0, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	__LIB_0__::func_222(&uLocal_519, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	__LIB_31__::func_991(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_CARBINERIFLE"), 100, 1, 1, 1);
	iLocal_264 = 100;
	func_440(&(iLocal_463[0]), 0, ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true) + Vector(10f, 0f, 0f), 258.7014f, 0, 0, 0);
	func_521(iLocal_463[0]);
	func_520(&(iLocal_463[0]), 1);
	func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_463[0], Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
	PED::SET_PED_MOVEMENT_CLIPSET(iLocal_463[0], "move_ped_crouched", 0.25f);
	PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_463[0], "Wpn_AssaultRifle_WeaponHoldingCrouched");
	PED::SET_PED_STRAFE_CLIPSET(iLocal_463[0], "move_ped_crouched_strafing");
	PED::SET_PED_DESIRED_HEADING(iLocal_463[0], ENTITY::GET_ENTITY_HEADING(iLocal_463[0]));
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_463[0], joaat("WEAPON_HEAVYSNIPER"), 10000, true, true);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_463[0], joaat("WEAPON_HEAVYSNIPER"), joaat("COMPONENT_AT_SCOPE_MAX"));
	PED::SET_PED_CAN_SWITCH_WEAPON(iLocal_463[0], false);
	TASK::TASK_AIM_GUN_AT_COORD(iLocal_463[0], -1531.6f, 4376.7f, 68f, -1, false, false);
	PED::SET_PED_RESET_FLAG(iLocal_463[0], 156, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[0], true, false);
	__LIB_17__::func_462(&iLocal_463, 0, 9);
	__LIB_17__::func_462(&iLocal_463, 0, 12);
	__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
	func_41(&(iLocal_463[2]), 2, Local_403.f_0, -1, 1, 0, 0);
	func_521(iLocal_463[2]);
	func_520(&(iLocal_463[2]), 1);
	func_379(iLocal_463[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 2, iLocal_463[2], "trevor", 0, 1);
	__LIB_16__::func_880(&iLocal_463, 2, 1);
	Local_393.f_11 = { -1680.6838f, 4452.6465f, 1.55916f };
	Local_393.f_20 = 257.7928f;
	func_35(&Local_393);
	HUD::REMOVE_BLIP(&(Local_393.f_2));
	func_34(Local_393.f_0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
	ENTITY::SET_ENTITY_LOD_DIST(Local_393.f_0, 400);
	iLocal_255 = 200;
	__LIB_16__::func_880(&iLocal_463, 2, 0);
	func_32(&iLocal_463, 2, 1);
	Local_518.f_1 = 2;
	Local_518.f_3 = Local_393.f_0;
	func_30(&Local_518);
	Local_518.f_0 = 0;
	func_16(&Local_518, &iLocal_463, 0, 1, 1, 1, 0, 3000);
	func_532();
	func_528(&(Local_391[3 /*33*/]));
	PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_391[3 /*33*/], false);
	HUD::REMOVE_BLIP(&(Local_391[3 /*33*/].f_2));
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_391[3 /*33*/], true, 1);
	PED::SET_PED_HEATSCALE_OVERRIDE(Local_391[3 /*33*/], 1E-45f);
	ENTITY::SET_ENTITY_COORDS(Local_391[3 /*33*/], Local_391[3 /*33*/].f_17, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(Local_391[3 /*33*/], 118.2162f);
	iLocal_359 = 7;
	iLocal_351 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
	__LIB_0__::func_222(&uLocal_519, 6, Local_391[3 /*33*/], "oneil" /* GXT: O'Neil Way */, 0, 1);
	Local_418.f_0 = VEHICLE::CREATE_VEHICLE(Local_418.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_418.f_0, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_418.f_1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_418.f_0, false);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, -0.2f, 0.5f, 0f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.2f, 0.5f, 0f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.3f, -0.1f, 0.75f, 200f, 200f, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 4, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_418.f_0, 5f);
	Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -2442.8577f, 3670.4836f, 12.454f, 0f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 12, 12);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 3, sLocal_362, true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_362) - 100f));
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_405.f_0, true);
	VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
	iVar0 = 10;
	while (iVar0 <= (Local_392.f_0 - 1))
	{
		func_514(&(Local_392[iVar0 /*33*/]));
		iLocal_250[iVar0] = 0;
		Local_392[iVar0 /*33*/].f_27 = 0;
		iVar0++;
	}
	Local_435.f_0 = VEHICLE::CREATE_VEHICLE(Local_435.f_1, Local_435.f_3, Local_435.f_6, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_435.f_0, 3);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_435.f_0, 5f);
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_362);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_362);
	iLocal_383 = CAM::CREATE_CAM("default_scripted_camera", true);
	CAM::ATTACH_CAM_TO_ENTITY(iLocal_383, Local_403.f_0, -0.39f, 0.65f, 1.35f, true);
	CAM::SET_CAM_FOV(iLocal_383, 45f);
	func_527(&Local_403, &iLocal_383, Local_365.f_0, 0f, Local_365.f_2);
	iLocal_352 = 1;
	if (!iLocal_736)
	{
		STREAMING::LOAD_SCENE(-1683.4967f, 4454.595f, 1.566f);
	}
	SYSTEM::WAIT(0);
	while (!__LIB_16__::func_315(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_315(Local_393.f_0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_ON_FOOT_RT");
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_391[iVar0 /*33*/].f_27 = 1;
		iVar0++;
	}
	iLocal_334 = 1;
	iLocal_219 = 1;
	iLocal_248 = 3;
	iLocal_217 = 1;
	iLocal_331 = 0;
	iLocal_239 = 10;
	iLocal_241 = 4;
	func_523("TM44_TWT", 1);
	func_523("TM44_WATER", 1);
	func_523("TM44_DWATER", 1);
	func_523("TM44_GWOOD", 1);
	func_523("TM44_DEADR", 1);
	iLocal_254 = 2;
	iLocal_294 = 99;
	iLocal_734 = 1;
	iLocal_733 = 7;
	func_509(0, 22f, 0f, 0);
	__LIB_17__::func_789(4, "shooting the rpg enemy", 0, 0, 0, 1);
}

void func_523(char* sParam0, bool bParam1)//Position - 0x7559A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	if (bParam1)
	{
		bVar2 = false;
		while (!bVar2 && iVar1 < iLocal_348)
		{
			if (iLocal_348[iVar1] == iVar0)
			{
				bVar2 = true;
			}
			else if (iLocal_348[iVar1] == 0)
			{
				iLocal_348[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1++;
		}
	}
	else
	{
		iVar3 = func_525(iVar0);
		if (iVar3 != -1)
		{
			iLocal_348[iVar3] = 0;
			func_524();
		}
	}
}

void func_524()//Position - 0x75615
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (iLocal_348 - 1))
	{
		if (iLocal_348[iVar0] == 0)
		{
			if (iLocal_348[iVar0 + 1] != 0)
			{
				iLocal_348[iVar0] = iLocal_348[iVar0 + 1];
				iLocal_348[iVar0 + 1] = 0;
			}
		}
		iVar0++;
	}
}

int func_525(int iParam0)//Position - 0x75668
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_348)
	{
		if (iLocal_348[iVar0] == 0)
		{
			return -1;
		}
		else if (iLocal_348[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_527(int iParam0, int iParam1, struct<3> Param2)//Position - 0x756D4
{
	struct<3> Var0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		if (CAM::DOES_CAM_EXIST(*iParam1))
		{
			Var0.f_0 = ENTITY::GET_ENTITY_PITCH(*iParam0);
			Var0.f_1 = ENTITY::GET_ENTITY_ROLL(*iParam0);
			Var0.f_2 = ENTITY::GET_ENTITY_HEADING(*iParam0);
			Var0 = { Var0 + Param2 };
			CAM::SET_CAM_ROT(*iParam1, Var0, 2);
		}
	}
}

void func_528(var uParam0)//Position - 0x75729
{
	MISC::CLEAR_AREA(uParam0->f_11, 2f, true, false, false, false);
	*uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_20, true, true);
	__LIB_16__::func_881(*uParam0, 182);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
	PED::SET_PED_AS_ENEMY(*uParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_MONEY(*uParam0, 0);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_28, -1, true, true);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21, 0);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_21);
	if (uParam0->f_25)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	}
	if (uParam0->f_26)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	PED::SET_PED_SEEING_RANGE(*uParam0, 250f);
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	PED::SET_PED_ID_RANGE(*uParam0, 250f);
	uParam0->f_2 = __LIB_0__::func_666(*uParam0, 1, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, true);
	func_530(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_22);
	__LIB_0__::func_609(*uParam0, 0);
	uParam0->f_27 = 1;
}

void func_530(var uParam0, bool bParam1)//Position - 0x758DF
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_756, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_756);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_757);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_756, iLocal_757);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_757, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_757, iLocal_756);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_757);
			PED::SET_PED_COMBAT_MOVEMENT(*uParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 1, false);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*uParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, false);
			}
		}
	}
}

void func_532()//Position - 0x759E0
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	int iVar44;
	struct<3> Var45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	float fVar52;
	float fVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	if (!PED::IS_PED_INJURED(Local_393.f_0))
	{
		if (iLocal_241 > 3)
		{
			func_554(&Local_518);
		}
		switch (iLocal_707)
		{
			case 2:
				switch (iLocal_255)
				{
					case 0:
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1891.7518f, 4432.023f, 43.7444f, 2f, -1, -1f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Run"), true, 0, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_393.f_0, false, false);
						iLocal_255++;
						break;
					case 1:
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1895.8339f, 4431.216f, 43.28f, 4f, 4f, 2f, false, true, 0) || !__LIB_0__::func_75())
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.6715f, 4479.3267f, 25.4878f, 3f, -1, 0.5f, 512, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							iLocal_255++;
						}
						break;
					case 2:
						STREAMING::REQUEST_ANIM_DICT("missexile2");
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1878.6715f, 4479.3267f, 25.4878f, 4f, 4f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.6715f, 4479.3267f, 25.4878f, 2f, -1, 0.5f, 512, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							}
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_14_chop_sniff_fwds", 4f, -1.5f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 1.5f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_255++;
							}
						}
						break;
					case 3:
						break;
					case 101:
						switch (__LIB_14__::func_466())
						{
							case 1:
								if (Local_518.f_0 != 2)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
									}
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
										{
											TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
										}
									}
									else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
									{
										if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
										{
											if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
											{
												fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
												if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar0))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
												}
											}
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 2.5f, 2.5f, 2.5f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, 0f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
								}
								break;
							case 0:
								if (Local_518.f_0 != 2)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
									{
										if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
										{
											fVar1 = 0f;
											fVar2 = 0f;
											GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar1, &fVar2);
											if (MISC::ABSF((fVar1 - 0.5f)) < 0.1f)
											{
												if (MISC::ABSF((fVar2 - 0.5f)) < 0.1f)
												{
													__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0);
													if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
													{
														TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
														TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 0, 10, -1);
														TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
														TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
														iLocal_255++;
													}
													else
													{
														func_538();
														iLocal_255 = 105;
													}
													func_523("TM44_chop1", 1);
													func_523("chop_help2", 1);
													iLocal_256 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								break;
							case 2:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, iLocal_463[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, iLocal_463[1], 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											fVar3 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_463[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar3))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, iLocal_463[1], 0);
											}
										}
									}
								}
								break;
						}
						if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
						{
						}
						break;
					case 102:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
						}
						if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
						{
							if (iLocal_357 == 1)
							{
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_0", &iVar4);
								iVar4 = (iVar4 - 1);
								if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_0", iVar4, &Var5))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, Var5, 3f, 3f, 3f, false, true, 0))
									{
									}
								}
							}
							else if (iLocal_357 > 1)
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &iVar6);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), &iVar7);
								iVar8 = (iVar6 - iVar7);
								if (iVar8 >= 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									iLocal_255 = 103;
								}
							}
						}
						else
						{
							func_536();
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							iLocal_255 = 104;
						}
						break;
					case 103:
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &iVar9);
						if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), &iVar10);
							iVar11 = (iVar9 - iVar10);
							if (iVar11 < -4)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
								}
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_1", iVar10, 10, -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								}
							}
							else if (iVar11 < -1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 2f, false);
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[1 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
										TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									}
								}
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 1f, false);
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[1 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
										TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_536();
							iLocal_255 = 104;
						}
						break;
					case 104:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar12 = 0f;
										fVar13 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar12, &fVar13);
										if (MISC::ABSF((fVar12 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar13 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													func_538();
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 105:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 2.5f, false);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), Local_308) < 0.25f)
						{
							Local_310 = { Local_308 };
							Local_311 = { Local_309 };
							iLocal_262 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, iLocal_262, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1000f, 0);
							iLocal_255 = 106;
						}
						break;
					case 106:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 1f)
							{
								TASK::CLEAR_PED_TASKS(Local_393.f_0);
								iLocal_255++;
							}
						}
						break;
					case 107:
						if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 2.5f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[0 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 2.5f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[0 /*33*/], -1, 8f, 0f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[0 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[0 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[0 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_523("TM44_chop4", 0);
							func_536();
							iLocal_255 = 108;
						}
						break;
					case 108:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar14 = 0f;
										fVar15 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar14, &fVar15);
										if (MISC::ABSF((fVar14 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar15 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 109:
						if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[2 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[2 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[2 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[2 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[2 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[2 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_523("TM44_chop4", 0);
							func_536();
							iLocal_255 = 110;
						}
						break;
					case 110:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar16 = 0f;
										fVar17 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar16, &fVar17);
										if (MISC::ABSF((fVar16 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar17 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 111:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
									}
								}
							}
						}
						break;
					case 200:
						func_538();
						iLocal_255++;
						break;
					case 201:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), Local_308) < 0.25f)
						{
							Local_310 = { Local_308 };
							Local_311 = { Local_309 };
							iLocal_262 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, iLocal_262, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1.5f, 0);
							iLocal_255++;
						}
						break;
					case 202:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 1f)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1559.7913f, 4417.947f, 3.8546f, 2f, -1, -1f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.6936f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_255++;
							}
						}
						break;
					case 203:
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1541.6936f, 4476.719f, 17.715f, 1.5f, 1.5f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.6936f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							}
						}
						else if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 40f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
								}
							}
							else if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PLAY_ANIM")))
							{
								if (__LIB_0__::func_611(&iLocal_256, 5000))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "missexile2", "fra_0_ig_1_chop_growl", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "fra_0_ig_1_chop_growl", 8f, -8f, -1, 0, 0f, false, false, false);
										iLocal_256 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (iLocal_359 >= 21)
							{
								iLocal_255++;
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 204:
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.9299f, 4484.74f, 18.5944f, 3f, -1, 0.2f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_255++;
						if (PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							iLocal_255 = 300;
						}
						break;
					case 205:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1551.9299f, 4484.74f, 18.5944f, 2.5f, 2.5f, 2f, false, true, 0))
						{
							if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
							{
								TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
								iLocal_255++;
							}
							else
							{
								iLocal_255 = 300;
							}
						}
						break;
					case 206:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@");
							if (!iLocal_347)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 2.5f, 2.5f, 5f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
									{
										TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
										PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Sprint"), false, 0, false);
										iLocal_256 = MISC::GET_GAME_TIMER();
									}
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@"))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 4f, -4f, -1, 0, 0f, false, false, false);
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 9f, 9f, 5f, false, true, 0))
							{
								if ((__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 1f, 3f, 2f, 0);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 5f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1f, 2f, 0f, 3f, -1, 0.1f, true);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 40f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (__LIB_0__::func_611(&iLocal_256, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0f, false, false, false);
											iLocal_256 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 300:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
						{
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
							{
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
						{
							if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
								{
									fVar18 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
									if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar18))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
						break;
					case 400:
						if ((ENTITY::IS_ENTITY_AT_COORD(Local_403.f_0, Local_312[iLocal_271 /*3*/], 20f, 20f, 5.5f, false, true, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0)) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
						{
							Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							Local_314 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_393.f_0, Local_393.f_17, 2f, 60000, 0.15f, 4608, Local_314.f_2);
							iLocal_255++;
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 45f)
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_463[1], Local_403.f_0, true))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, iLocal_463[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, iLocal_463[1], 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											fVar19 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_463[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar19))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, iLocal_463[1], 0);
											}
										}
									}
								}
							}
						}
						break;
					case 401:
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
						{
							Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, Local_393.f_17, 0.3f, 0.3f, 2f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
								{
									if (__LIB_0__::func_611(&iLocal_291, 10000))
									{
										iLocal_291 = MISC::GET_GAME_TIMER();
										Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
										Local_314 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_393.f_0, Local_393.f_17, 2f, 60000, 0.15f, 4608, Local_314.f_2);
										iLocal_291 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
							{
								Local_310 = { 0f, 0f, 0f };
								Local_311 = { 0f, 0f, 0f };
								Local_393.f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, Local_393.f_23, "missexile2", "chop_get_in_frogger_rds", 8f, -8f, 1, 0, 8f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_393.f_23, Local_403.f_0, 0);
								iLocal_255++;
							}
						}
						else if (!__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
						}
						break;
					case 402:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_393.f_23))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_393.f_23) >= 0.99f)
							{
								TASK::CLEAR_PED_TASKS(Local_393.f_0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_393.f_0, Local_403.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_403.f_0, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0f, false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_393.f_0, false, false);
								iLocal_255++;
							}
						}
						else
						{
							iLocal_255 = 401;
						}
						break;
					case 403:
						break;
				}
				break;
			case 0:
				switch (iLocal_255)
				{
					case 0:
						PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Run"), true, 0, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1891.7518f, 4432.023f, 43.7444f, 2f, -1, -1f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_255++;
						break;
					case 1:
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1895.8339f, 4431.216f, 43.28f, 4f, 4f, 2f, false, true, 0) || !__LIB_0__::func_75())
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.6715f, 4479.3267f, 25.4878f, 3f, -1, 0.5f, 512, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							iLocal_255++;
						}
						break;
					case 2:
						STREAMING::REQUEST_ANIM_DICT("missexile2");
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1878.6715f, 4479.3267f, 25.4878f, 4f, 4f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.6715f, 4479.3267f, 25.4878f, 2f, -1, 0.5f, 512, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							}
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_14_chop_sniff_fwds", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_255++;
							}
						}
						break;
					case 3:
						break;
					case 101:
						switch (__LIB_14__::func_466())
						{
							case 1:
								if (Local_518.f_0 != 2)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
									}
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
										{
											TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
										}
									}
									else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
									{
										if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
										{
											if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
											{
												fVar20 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
												if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar20))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
												}
											}
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 2.5f, 2.5f, 2.5f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, 0f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
								}
								break;
							case 0:
								if (Local_518.f_0 != 2)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
									{
										if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
										{
											fVar21 = 0f;
											fVar22 = 0f;
											GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar21, &fVar22);
											if (MISC::ABSF((fVar21 - 0.5f)) < 0.1f)
											{
												if (MISC::ABSF((fVar22 - 0.5f)) < 0.1f)
												{
													__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0);
													if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
													{
														TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
														TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 0, 10, -1);
														TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
														TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
														iLocal_255++;
													}
													else
													{
														func_538();
														iLocal_255 = 105;
													}
													func_523("TM44_chop1", 1);
													func_523("chop_help2", 1);
													iLocal_256 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								break;
							case 2:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, iLocal_463[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, iLocal_463[1], 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											fVar23 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_463[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar23))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, iLocal_463[1], 0);
											}
										}
									}
								}
								break;
						}
						if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
						{
						}
						break;
					case 102:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
						}
						if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
						{
							if (iLocal_357 == 1)
							{
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_0", &iVar24);
								iVar24 = (iVar24 - 1);
								if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_0", iVar24, &Var25))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, Var25, 3f, 3f, 3f, false, true, 0))
									{
									}
								}
							}
							else if (iLocal_357 > 1)
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &iVar26);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), &iVar27);
								iVar28 = (iVar26 - iVar27);
								if (iVar28 >= 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									iLocal_255 = 103;
								}
							}
						}
						else
						{
							func_536();
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							iLocal_255 = 104;
						}
						break;
					case 103:
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &iVar29);
						if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), &iVar30);
							iVar31 = (iVar29 - iVar30);
							if (iVar31 < -4)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
								}
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_1", iVar30, 10, -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								}
							}
							else if (iVar31 < -1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 2f, false);
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[1 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
										TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									}
								}
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 1f, false);
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[1 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
										TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_536();
							iLocal_255 = 104;
						}
						break;
					case 104:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar32 = 0f;
										fVar33 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar32, &fVar33);
										if (MISC::ABSF((fVar32 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar33 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													func_538();
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 105:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 2.5f, false);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), Local_308) < 0.25f)
						{
							Local_310 = { Local_308 };
							Local_311 = { Local_309 };
							iLocal_262 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, iLocal_262, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1000f, 0);
							iLocal_255 = 106;
						}
						break;
					case 106:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 1f)
							{
								TASK::CLEAR_PED_TASKS(Local_393.f_0);
								iLocal_255++;
							}
						}
						break;
					case 107:
						if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 2.5f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[0 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 2.5f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[0 /*33*/], -1, 8f, 0f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[0 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[0 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[0 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_523("TM44_chop4", 0);
							func_536();
							iLocal_255 = 108;
						}
						break;
					case 108:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar34 = 0f;
										fVar35 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar34, &fVar35);
										if (MISC::ABSF((fVar34 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar35 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 109:
						if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[2 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[2 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[2 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[2 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[2 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[2 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_523("TM44_chop4", 0);
							func_536();
							iLocal_255 = 110;
						}
						break;
					case 110:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar36 = 0f;
										fVar37 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar36, &fVar37);
										if (MISC::ABSF((fVar36 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar37 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 111:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
									}
								}
							}
						}
						break;
					case 200:
						func_538();
						iLocal_255++;
						break;
					case 201:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), Local_308) < 0.25f)
						{
							Local_310 = { Local_308 };
							Local_311 = { Local_309 };
							iLocal_262 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, iLocal_262, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1.5f, 0);
							iLocal_255++;
						}
						break;
					case 202:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 1f)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1559.7913f, 4417.947f, 3.8546f, 2f, -1, -1f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.6936f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_255++;
							}
						}
						break;
					case 203:
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1541.6936f, 4476.719f, 17.715f, 1.5f, 1.5f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.6936f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							}
						}
						else if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 40f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
								}
							}
							else if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PLAY_ANIM")))
							{
								if (__LIB_0__::func_611(&iLocal_256, 5000))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "missexile2", "fra_0_ig_1_chop_growl", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "fra_0_ig_1_chop_growl", 8f, -8f, -1, 0, 0f, false, false, false);
										iLocal_256 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (iLocal_359 >= 21)
							{
								iLocal_255++;
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 204:
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.9299f, 4484.74f, 18.5944f, 3f, -1, 0.2f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_255++;
						if (PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							iLocal_255 = 300;
						}
						break;
					case 205:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1551.9299f, 4484.74f, 18.5944f, 2.5f, 2.5f, 2f, false, true, 0))
						{
							if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
							{
								TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
								iLocal_255++;
							}
							else
							{
								iLocal_255 = 300;
							}
						}
						break;
					case 206:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@");
							if (!iLocal_347)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 2.5f, 2.5f, 5f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
									{
										TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
										PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Sprint"), false, 0, false);
										iLocal_256 = MISC::GET_GAME_TIMER();
									}
								}
								else if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@"))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 4f, -4f, -1, 0, 0f, false, false, false);
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 9f, 9f, 5f, false, true, 0))
							{
								if ((__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 1f, 3f, 2f, 0);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 5f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1f, 2f, 0f, 3f, -1, 0.1f, true);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 40f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (__LIB_0__::func_611(&iLocal_256, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0f, false, false, false);
											iLocal_256 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 300:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
						{
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
							{
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
						{
							if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
								{
									fVar38 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
									if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar38))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
						break;
					case 400:
						if ((ENTITY::IS_ENTITY_AT_COORD(Local_403.f_0, Local_312[iLocal_271 /*3*/], 20f, 20f, 5.5f, false, true, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0)) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
						{
							Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							Local_314 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_393.f_0, Local_393.f_17, 2f, 60000, 0.15f, 4608, Local_314.f_2);
							iLocal_255++;
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 45f)
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_463[1], Local_403.f_0, true))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, iLocal_463[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, iLocal_463[1], 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											fVar39 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_463[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar39))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, iLocal_463[1], 0);
											}
										}
									}
								}
							}
						}
						break;
					case 401:
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
						{
							Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, Local_393.f_17, 0.3f, 0.3f, 2f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
								{
									Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
									Local_314 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_393.f_0, Local_393.f_17, 2f, 60000, 0.15f, 4608, Local_314.f_2);
								}
							}
							else if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
							{
								Local_310 = { 0f, 0f, 0f };
								Local_311 = { 0f, 0f, 0f };
								Local_393.f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, Local_393.f_23, "missexile2", "chop_get_in_frogger_rds", 8f, -8f, 1, 0, 8f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_393.f_23, Local_403.f_0, 0);
								iLocal_255++;
							}
						}
						else if (!__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
						}
						break;
					case 402:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_393.f_23))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_393.f_23) >= 0.99f)
							{
								TASK::CLEAR_PED_TASKS(Local_393.f_0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_393.f_0, Local_403.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_403.f_0, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0f, false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_393.f_0, false, false);
								iLocal_255++;
							}
						}
						else
						{
							iLocal_255 = 401;
						}
						break;
					case 403:
						break;
				}
				break;
			case 1:
				switch (iLocal_255)
				{
					case 0:
						PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Run"), true, 0, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1891.7518f, 4432.023f, 43.7444f, 2f, -1, -1f, 0, 40000f);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_255++;
						break;
					case 1:
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1895.8339f, 4431.216f, 43.28f, 4f, 4f, 2f, false, true, 0) || !__LIB_0__::func_75())
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.6715f, 4479.3267f, 25.4878f, 3f, -1, 0.5f, 512, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							iLocal_255++;
						}
						break;
					case 2:
						STREAMING::REQUEST_ANIM_DICT("missexile2");
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1878.6715f, 4479.3267f, 25.4878f, 4f, 4f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1878.6715f, 4479.3267f, 25.4878f, 2f, -1, 0.5f, 512, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							}
						}
						else if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_14_chop_sniff_fwds", 8f, -8f, -1, 0, 0f, false, false, false);
								TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0f, false, false, false);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_255++;
							}
						}
						break;
					case 3:
						break;
					case 101:
						switch (__LIB_14__::func_466())
						{
							case 1:
								if (Local_518.f_0 != 2)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
									{
										TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
									}
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
										{
											TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
										}
									}
									else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
									{
										if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
										{
											if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
											{
												fVar40 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
												if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar40))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
												}
											}
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 2.5f, 2.5f, 2.5f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, 0f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
										}
									}
								}
								break;
							case 0:
								if (Local_518.f_0 != 2)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
									{
										if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar41, &fVar42);
											if (MISC::ABSF((fVar41 - 0.5f)) < 0.1f)
											{
												if (MISC::ABSF((fVar42 - 0.5f)) < 0.1f)
												{
													__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0);
													if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
													{
														TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
														TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 0, 10, -1);
														TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
														TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
														TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
														TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
														iLocal_255++;
													}
													else
													{
														func_538();
														iLocal_255 = 105;
													}
													func_523("TM44_chop1", 1);
													func_523("chop_help2", 1);
													iLocal_256 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								break;
							case 2:
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, iLocal_463[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, iLocal_463[1], 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											fVar43 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_463[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar43))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, iLocal_463[1], 0);
											}
										}
									}
								}
								break;
						}
						if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
						{
						}
						break;
					case 102:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
						}
						if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
						{
							if (iLocal_357 == 1)
							{
								TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_0", &iVar44);
								iVar44 = (iVar44 - 1);
								if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_0", iVar44, &Var45))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, Var45, 3f, 3f, 3f, false, true, 0))
									{
									}
								}
							}
							else if (iLocal_357 > 1)
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &iVar46);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_0", ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), &iVar47);
								iVar48 = (iVar46 - iVar47);
								if (iVar48 >= 0)
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									iLocal_255 = 103;
								}
							}
						}
						else
						{
							func_536();
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							iLocal_255 = 104;
						}
						break;
					case 103:
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &iVar49);
						if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
						{
							TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_1", ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), &iVar50);
							iVar51 = (iVar49 - iVar50);
							if (iVar51 < -4)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
								}
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_1", iVar50, 10, -1);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								}
							}
							else if (iVar51 < -1)
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 2f, false);
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[1 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
										TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									}
								}
							}
							else
							{
								if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
								{
									TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 1f, false);
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[1 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_391[1 /*33*/], 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
										TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_536();
							iLocal_255 = 104;
						}
						break;
					case 104:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar52 = 0f;
										fVar53 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar52, &fVar53);
										if (MISC::ABSF((fVar52 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar53 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													func_538();
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 105:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 2.5f, false);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), Local_308) < 0.25f)
						{
							Local_310 = { Local_308 };
							Local_311 = { Local_309 };
							iLocal_262 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, iLocal_262, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1000f, 0);
							iLocal_255 = 106;
						}
						break;
					case 106:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 1f)
							{
								TASK::CLEAR_PED_TASKS(Local_393.f_0);
								iLocal_255++;
							}
						}
						break;
					case 107:
						if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 2.5f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[0 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 2.5f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[0 /*33*/], -1, 8f, 0f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[0 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[0 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[0 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_523("TM44_chop4", 0);
							func_536();
							iLocal_255 = 108;
						}
						break;
					case 108:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar54 = 0f;
										fVar55 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar54, &fVar55);
										if (MISC::ABSF((fVar54 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar55 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 109:
						if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[2 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[2 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[2 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[2 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[2 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[2 /*33*/], 0);
									}
								}
							}
						}
						else
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
							func_523("TM44_chop4", 0);
							func_536();
							iLocal_255 = 110;
						}
						break;
					case 110:
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::IS_ENTITY_ON_SCREEN(Local_393.f_0))
								{
									if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
									{
										fVar56 = 0f;
										fVar57 = 0f;
										GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), &fVar56, &fVar57);
										if (MISC::ABSF((fVar56 - 0.5f)) < 0.1f)
										{
											if (MISC::ABSF((fVar57 - 0.5f)) < 0.1f)
											{
												if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop2", 7, 0, 0, 0))
												{
													iLocal_256 = MISC::GET_GAME_TIMER();
													HUD::CLEAR_HELP(true);
													iLocal_255++;
												}
											}
										}
									}
								}
								break;
						}
						break;
					case 111:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 12f)
							{
								TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
							}
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 8f, 0f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
								{
									TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.5f, 8f, 0f, 2f, 1);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 8f, 0f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
							{
								if (!func_535("TM44_chop4"))
								{
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_chop4", 7, 0, 0, 0))
									{
										func_523("TM44_chop4", 1);
									}
								}
								if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 50f))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
									}
								}
							}
						}
						break;
					case 200:
						func_538();
						iLocal_255++;
						break;
					case 201:
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
						}
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), Local_308) < 0.25f)
						{
							Local_310 = { Local_308 };
							Local_311 = { Local_309 };
							iLocal_262 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, iLocal_262, "missexile2", "chop_swim_across", 1.5f, -8f, 5, 0, 1.5f, 0);
							iLocal_255++;
						}
						break;
					case 202:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) >= 1f)
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1559.7913f, 4417.947f, 3.8546f, 2f, -1, -1f, 1, 40000f);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.6936f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_255++;
							}
						}
						break;
					case 203:
						TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1541.6936f, 4476.719f, 17.715f, 1.5f, 1.5f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.6936f, 4476.719f, 17.715f, 2f, -1, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							}
						}
						else if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 40f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
								}
							}
							else if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_PLAY_ANIM")))
							{
								if (__LIB_0__::func_611(&iLocal_256, 5000))
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "missexile2", "fra_0_ig_1_chop_growl", 3))
									{
										TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "fra_0_ig_1_chop_growl", 8f, -8f, -1, 0, 0f, false, false, false);
										iLocal_256 = MISC::GET_GAME_TIMER();
									}
								}
							}
							if (iLocal_359 >= 21)
							{
								iLocal_255++;
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 204:
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.9299f, 4484.74f, 18.5944f, 3f, -1, 0.2f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_255++;
						if (PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							iLocal_255 = 300;
						}
						break;
					case 205:
						if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, -1551.9299f, 4484.74f, 18.5944f, 2.5f, 2.5f, 2f, false, true, 0))
						{
							if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
							{
								TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
								iLocal_255++;
							}
							else
							{
								iLocal_255 = 300;
							}
						}
						break;
					case 206:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@");
							if (!iLocal_347)
							{
								if (!(TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), &iVar58) && iVar58 >= 40))
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 2.5f, 2.5f, 5f, false, true, 0))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
										{
											TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
											PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Sprint"), false, 0, false);
											iLocal_256 = MISC::GET_GAME_TIMER();
										}
									}
									else if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@"))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 4f, -4f, -1, 0, 0f, false, false, false);
										}
									}
								}
								else
								{
									if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 1f, false, true, 0))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack") > 0.7f)))
										{
											TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 0.1f, 3f, 0f, 1);
											PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Sprint"), false, 0, false);
											iLocal_256 = MISC::GET_GAME_TIMER();
										}
									}
									STREAMING::REQUEST_ANIM_DICT("missfra0_chop_find");
									if (STREAMING::HAS_ANIM_DICT_LOADED("missfra0_chop_find"))
									{
										ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], -1f, -1f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 1f, -1f, 2f), 7f, false, true, 0);
										if (TASK::GET_SCRIPT_TASK_STATUS(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_391[3 /*33*/].f_23))
										{
											if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), &iVar58) && iVar58 >= 40)
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], -1f, -1f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 1f, -1f, 2f), 3.5f, false, true, 0))
												{
													TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, Local_391[3 /*33*/].f_23, "missexile2", "take_down_bad_guy_chop", 1f, -8f, 5, 0, 1f, 0);
													iLocal_255 = 207;
												}
											}
										}
									}
								}
							}
							else if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 9f, 9f, 5f, false, true, 0))
							{
								if ((__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_CORE@", "attack", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_GO_TO_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1, 1f, 3f, 2f, 0);
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 1f, 1f, 5f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -1f, 2f, 0f, 3f, -1, 0.1f, true);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 40f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (__LIB_0__::func_611(&iLocal_256, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0f, false, false, false);
											iLocal_256 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 207:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_391[3 /*33*/].f_23))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_391[3 /*33*/].f_23) >= 1f)
								{
									PED::SET_PED_CAN_RAGDOLL(Local_393.f_0, true);
									PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_393.f_0, 16);
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -2f, 0f, 0f, 1f, -1, 0.1f, true);
									iLocal_255++;
								}
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 208:
						if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], -2f, 0f, 0f), 1f, 1f, 5f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")))
								{
									TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_393.f_0, Local_391[3 /*33*/], -2f, 0f, 0f, 1f, -1, 0.1f, true);
								}
							}
							else if (!PED::IS_PED_FACING_PED(Local_393.f_0, Local_391[3 /*33*/], 40f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, Local_391[3 /*33*/], 0);
								}
							}
							else
							{
								STREAMING::REQUEST_ANIM_DICT("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@");
								if (STREAMING::HAS_ANIM_DICT_LOADED("CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@"))
								{
									if (__LIB_0__::func_611(&iLocal_256, 3500))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 3))
										{
											TASK::TASK_PLAY_ANIM(Local_393.f_0, "CREATURES@ROTTWEILER@MELEE@STREAMED_TAUNTS@", "taunt_01", 8f, -8f, -1, 0, 0f, false, false, false);
											iLocal_256 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else
						{
							iLocal_255 = 300;
						}
						break;
					case 300:
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
						{
							TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
						}
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
						{
							if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
							{
								TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), -1, 0.5f, -2f, 5f, 2f, 1);
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
						{
							if (!PED::IS_PED_FACING_PED(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
								{
									fVar59 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
									if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar59))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, PLAYER::PLAYER_PED_ID(), 0);
									}
								}
							}
						}
						break;
					case 400:
						if ((ENTITY::IS_ENTITY_AT_COORD(Local_403.f_0, Local_312[iLocal_271 /*3*/], 20f, 20f, 5.5f, false, true, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0)) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
						{
							Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							Local_314 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_393.f_0, Local_393.f_17, 2f, 60000, 0.15f, 4608, Local_314.f_2);
							iLocal_255++;
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 45f)
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_463[1], Local_403.f_0, true))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 10f)
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
								}
								if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
								{
									if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_GOTO_ENTITY_OFFSET")))
									{
										TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_393.f_0, iLocal_463[1], -1, 0.5f, -2f, 5f, 2f, 1);
									}
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_463[1], -2f, 5f, 0f), 1.8f, 1.8f, 4f, false, true, 0))
								{
									if (!PED::IS_PED_FACING_PED(Local_393.f_0, iLocal_463[1], 50f))
									{
										if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
										{
											fVar60 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_463[1]);
											if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar60))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_393.f_0, iLocal_463[1], 0);
											}
										}
									}
								}
							}
						}
						break;
					case 401:
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
						{
							Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
							if (!ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, Local_393.f_17, 0.3f, 0.3f, 2f, false, true, 0))
							{
								if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
								{
									Local_393.f_17 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
									Local_314 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missexile2", "chop_get_in_frogger_rds", ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_403.f_0, 2), 0f, 2) };
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_393.f_0, Local_393.f_17, 2f, 60000, 0.15f, 4608, Local_314.f_2);
								}
							}
							else if (__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
							{
								Local_310 = { 0f, 0f, 0f };
								Local_311 = { 0f, 0f, 0f };
								Local_393.f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, Local_393.f_23, "missexile2", "chop_get_in_frogger_rds", 8f, -8f, 1, 0, 8f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_393.f_23, Local_403.f_0, 0);
								iLocal_255++;
							}
						}
						else if (!__LIB_17__::func_77(Local_393.f_0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
						{
							TASK::CLEAR_PED_TASKS(Local_393.f_0);
						}
						break;
					case 402:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_393.f_23))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_393.f_23) >= 0.99f)
							{
								TASK::CLEAR_PED_TASKS(Local_393.f_0);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_393.f_0, Local_403.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_403.f_0, "seat_dside_r"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
								TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "Chop_Sit_In_Frogger_RDS", 8f, -8f, -1, 1, 0f, false, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_393.f_0, false, false);
								iLocal_255++;
							}
						}
						else
						{
							iLocal_255 = 401;
						}
						break;
					case 403:
						break;
				}
				break;
		}
		func_533();
	}
}

void func_533()//Position - 0x7A7E2
{
	if (Local_518.f_0 == 2)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_518.f_16))
		{
			if (__LIB_0__::func_611(&iLocal_259, 500))
			{
				Local_518.f_16 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_chop_trail", Local_393.f_0, 0f, 10f, 0.3f, 0f, 0f, 0f, 7f, false, false, false);
				iLocal_259 = MISC::GET_GAME_TIMER();
			}
		}
		else if (__LIB_0__::func_611(&iLocal_259, 500))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_518.f_16))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_518.f_16, false);
				iLocal_259 = MISC::GET_GAME_TIMER();
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_518.f_16))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_518.f_16, false);
	}
}

bool func_535(char* sParam0)//Position - 0x7A899
{
	return func_525(MISC::GET_HASH_KEY(sParam0)) != -1;
}

void func_536()//Position - 0x7A8AD
{
	if (!func_535("chop_help3"))
	{
		if ((!HUD::IS_HELP_MESSAGE_ON_SCREEN() && __LIB_14__::func_466() == 0) && !CAM::DOES_CAM_EXIST(Local_503.f_9))
		{
			__LIB_0__::func_151("chop_help3", -1);
			func_523("chop_help3", 1);
		}
	}
}

void func_538()//Position - 0x7A90F
{
	TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_0", 126, 520, 227);
	TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_308, 2f, -1, Local_309.f_2, 0.5f);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
	TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
	PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
	PED::FORCE_PED_MOTION_STATE(Local_393.f_0, joaat("MotionState_Sprint"), true, 0, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_393.f_0, false, false);
}

void func_554(int iParam0)//Position - 0x7B0CD
{
	if (!PED::IS_PED_INJURED(iParam0->f_3) && CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0->f_3))
		{
			iParam0->f_7 = (iParam0->f_7 + (0.1f * SYSTEM::TIMESTEP()));
			if (iParam0->f_7 >= 0.32f)
			{
				iParam0->f_7 = 0.32f;
			}
		}
		else
		{
			iParam0->f_7 = (iParam0->f_7 - (0.1f * SYSTEM::TIMESTEP()));
			if (iParam0->f_7 <= 0.05f)
			{
				iParam0->f_7 = 0.05f;
			}
		}
		CAM::ATTACH_CAM_TO_PED_BONE(iParam0->f_4, iParam0->f_3, 31086, 0f, iParam0->f_6, iParam0->f_7, true);
	}
}

void func_556()//Position - 0x7B18A
{
	int iVar0;
	if (iLocal_736)
	{
		__LIB_0__::func_427(-1574.7f, 4344.9f, 43.4f, 42.6626f, 0, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1588.7863f, 4346.24f, 2.0581f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 21.5456f);
	}
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(Local_391[3 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(Local_446.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_435.f_13, "lkexile2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_3");
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_HEAVYSNIPER"), 31, 0);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT(sLocal_5749);
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
	if (iLocal_736)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_461) || !STREAMING::HAS_MODEL_LOADED(iLocal_462)) || !STREAMING::HAS_MODEL_LOADED(iLocal_460)) || !STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_391[3 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_446.f_2)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_435.f_13, "lkexile2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_3")) || !WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_HEAVYSNIPER"))) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_5749)) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) || !STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1)) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	PATHFIND::SET_ROADS_IN_AREA(Local_377, Local_378, false, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, false, true, true, true);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
	STREAMING::SET_PED_POPULATION_BUDGET(0);
	MISC::CLEAR_AREA(-1664.92f, 4438.81f, 80f, 10000f, true, false, false, false);
	STREAMING::SET_FOCUS_POS_AND_VEL(-1664.92f, 4438.81f, 80f, 0f, 0f, 0f);
	__LIB_0__::func_671(1);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(0, 0f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(1, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(2, 1f);
	GRAPHICS::SEETHROUGH_SET_HEATSCALE(3, 1f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	Local_403.f_0 = VEHICLE::CREATE_VEHICLE(Local_403.f_1, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(4, 0f, sLocal_362), 0f, true, true, false);
	__LIB_0__::func_679(Local_403.f_0, 0);
	VEHICLE::SET_VEHICLE_EXTRA(Local_403.f_0, 12, true);
	VEHICLE::SET_VEHICLE_LIVERY(Local_403.f_0, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_403.f_0, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_403.f_0, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_403.f_0, 0, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, false, true, true, true, true, false, false, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 4, sLocal_362, true);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, true, true, false);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_403.f_0);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
	if (__LIB_14__::func_466() != 0)
	{
		func_393(0, 0);
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
	PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), -1, true, true);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), joaat("COMPONENT_AT_SCOPE_MAX"));
	PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
	PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 0.25f);
	PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
	PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
	func_379(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 0, PLAYER::PLAYER_PED_ID(), "michael", 0, 1);
	__LIB_17__::func_462(&iLocal_463, 0, 9);
	__LIB_17__::func_462(&iLocal_463, 0, 12);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, true);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_228 = 1;
	}
	else
	{
		iLocal_222 = 1;
	}
	func_41(&(iLocal_463[2]), 2, Local_403.f_0, -1, 1, 0, 0);
	func_521(iLocal_463[2]);
	func_520(&(iLocal_463[2]), 1);
	func_379(iLocal_463[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 2, iLocal_463[2], "trevor", 0, 1);
	func_440(&(iLocal_463[1]), 1, -1683.4967f, 4454.595f, 1.566f, 239.1512f, 0, 0, 0);
	func_521(iLocal_463[1]);
	func_520(&(iLocal_463[1]), 1);
	func_379(iLocal_463[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_31__::func_991(iLocal_463[1], joaat("WEAPON_CARBINERIFLE"), 100, 0, 0, 1);
	__LIB_0__::func_222(&uLocal_519, 1, iLocal_463[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_463[1], true, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_463[1], 300);
	__LIB_17__::func_78(&iLocal_463, 1, 1);
	PED::SET_PED_USING_ACTION_MODE(iLocal_463[1], true, -1, 0);
	iLocal_264 = 999;
	Local_393.f_11 = { -1679.8206f, 4455.988f, 1.2653f };
	Local_393.f_20 = 114.6932f;
	func_35(&Local_393);
	HUD::REMOVE_BLIP(&(Local_393.f_2));
	func_34(Local_393.f_0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
	ENTITY::SET_ENTITY_LOD_DIST(Local_393.f_0, 400);
	iLocal_255 = 200;
	__LIB_16__::func_880(&iLocal_463, 2, 0);
	func_32(&iLocal_463, 2, 1);
	Local_518.f_1 = 2;
	Local_518.f_3 = Local_393.f_0;
	func_30(&Local_518);
	Local_518.f_0 = 0;
	func_16(&Local_518, &iLocal_463, 0, 1, 1, 1, 0, 3000);
	TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0f, false, false, false);
	iVar0 = 1;
	while (iVar0 <= (Local_392.f_0 - 1))
	{
		if (iVar0 != 7 && iVar0 != 14)
		{
			func_514(&(Local_392[iVar0 /*33*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_528(&(Local_391[iVar0 /*33*/]));
		HUD::REMOVE_BLIP(&(Local_391[iVar0 /*33*/].f_2));
		PED::SET_PED_DIES_IN_WATER(Local_391[iVar0 /*33*/], false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_391[iVar0 /*33*/], true, 1);
		iVar0++;
	}
	Local_418.f_0 = VEHICLE::CREATE_VEHICLE(Local_418.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_418.f_0, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_418.f_1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_418.f_0, false);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, -0.2f, 0.5f, 0f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.2f, 0.5f, 0f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.3f, -0.1f, 0.75f, 200f, 200f, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 4, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_418.f_0, 5f);
	Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -2442.8577f, 3670.4836f, 12.454f, 0f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 12, 12);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 3, sLocal_362, true);
	VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
	VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
	Local_435.f_0 = VEHICLE::CREATE_VEHICLE(Local_435.f_1, Local_435.f_3, Local_435.f_6, true, true, false);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_435.f_0, 3);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_435.f_0, 5f);
	ENTITY::SET_ENTITY_PROOFS(Local_435.f_0, true, true, true, true, true, false, false, false);
	if (!iLocal_736)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	AUDIO::START_AUDIO_SCENE("EXILE_2_SNIPE_STAGE");
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_SNIPE_RT");
	func_509(0, -12f, -41f, 0);
	iLocal_334 = 0;
	func_557(0);
	iLocal_733 = 7;
	iLocal_734 = 1;
	__LIB_17__::func_789(3, "start of sniper stage", 0, 0, 0, 1);
}

void func_557(bool bParam0)//Position - 0x7BA99
{
	float fVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	if ((__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()) == 0 && !Local_518.f_0 == 2) && !func_564())
	{
		CAM::SET_FOLLOW_CAM_IGNORE_ATTACH_PARENT_MOVEMENT_THIS_UPDATE();
		if (iLocal_222)
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/))
			{
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
				iLocal_222 = 0;
			}
		}
		if (iLocal_228)
		{
			if (!CAM::DOES_CAM_EXIST(iLocal_383))
			{
				func_563();
			}
		}
		if (!iLocal_236)
		{
			iLocal_236 = 1;
		}
		if (iLocal_335 || iLocal_228)
		{
			if (!__LIB_0__::func_611(&iLocal_260, 2500))
			{
				switch (iLocal_261)
				{
					case 0:
						if (iLocal_336)
						{
							if (!PED::IS_PED_INJURED(Local_393.f_0))
							{
								fLocal_299 = __LIB_17__::func_637(Local_393.f_0);
								fLocal_300 = __LIB_17__::func_638(Local_393.f_0);
							}
						}
						else if (iLocal_337)
						{
							if (!PED::IS_PED_INJURED(iLocal_463[1]))
							{
								fLocal_299 = __LIB_17__::func_637(iLocal_463[1]);
								fLocal_300 = __LIB_17__::func_638(iLocal_463[1]);
							}
						}
						else if (iLocal_338)
						{
							if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
							{
								fLocal_299 = __LIB_17__::func_637(Local_391[0 /*33*/]);
								fLocal_300 = __LIB_17__::func_638(Local_391[0 /*33*/]);
							}
						}
						else if (iLocal_339)
						{
							if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
							{
								fLocal_299 = __LIB_17__::func_637(Local_391[1 /*33*/]);
								fLocal_300 = __LIB_17__::func_638(Local_391[1 /*33*/]);
							}
						}
						else if (iLocal_340)
						{
							if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
							{
								fLocal_299 = __LIB_17__::func_637(Local_391[2 /*33*/]);
								fLocal_300 = __LIB_17__::func_638(Local_391[2 /*33*/]);
							}
						}
						else if (iLocal_341)
						{
							if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
							{
								fLocal_299 = __LIB_17__::func_637(Local_391[3 /*33*/]);
								fLocal_300 = __LIB_17__::func_638(Local_391[3 /*33*/]);
							}
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_299);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_300, 1f);
						CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(2.8f);
						iLocal_261++;
						break;
					case 1:
						break;
				}
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
				HUD::SHOW_HUD_COMPONENT_THIS_FRAME(14);
			}
			else
			{
				iLocal_336 = 0;
				iLocal_337 = 0;
				iLocal_338 = 0;
				iLocal_339 = 0;
				iLocal_340 = 0;
				iLocal_341 = 0;
				if (!iLocal_228)
				{
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
				}
				iLocal_335 = 0;
			}
		}
		if ((!iLocal_335 && !iLocal_222) && !iLocal_228)
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
			}
			if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
			}
			if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
			{
				if (CAM::DOES_CAM_EXIST(iLocal_383))
				{
					if (!CAM::IS_CAM_ACTIVE(iLocal_383))
					{
						CAM::SET_CAM_ACTIVE(iLocal_383, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					}
					else
					{
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					}
					if (bParam0)
					{
						CAM::SHAKE_CAM(iLocal_383, "medium_EXPLOSION_SHAKE", 0.15f);
						bLocal_225 = true;
						iLocal_288 = MISC::GET_GAME_TIMER();
					}
					if (bLocal_225)
					{
						if (__LIB_0__::func_611(&iLocal_288, 1000))
						{
							if (CAM::IS_CAM_SHAKING(iLocal_383))
							{
								CAM::STOP_CAM_SHAKING(iLocal_383, false);
							}
						}
					}
					if (!CAM::IS_CAM_SHAKING(iLocal_383))
					{
						CAM::SHAKE_CAM(iLocal_383, "HAND_SHAKE", 1f);
					}
				}
				switch (iLocal_352)
				{
					case 0:
						func_563();
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						iLocal_352++;
						break;
					case 1:
						if (!__LIB_0__::func_104(1))
						{
							__LIB_0__::func_603(&uVar1, &uVar2, &iVar3, &iVar4, 0);
							if (!PAD::IS_LOOK_INVERTED())
							{
								iVar4 = (iVar4 * -1);
							}
							if (iVar4 > 28 || iVar4 < -28)
							{
								fVar0 = SYSTEM::TO_FLOAT(iVar4);
								fVar0 = (fVar0 * fVar0);
								fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
								fVar0 = (fVar0 * fLocal_370);
								if (iVar4 < 0)
								{
									fVar0 = (fVar0 * -1f);
								}
								Local_365.f_0 = (Local_365.f_0 + fVar0);
								if (Local_365.f_0 < fLocal_366)
								{
									Local_365.f_0 = fLocal_366;
								}
								if (Local_365.f_0 >= fLocal_367)
								{
									Local_365.f_0 = fLocal_367;
								}
							}
							if (iVar3 > 28 || iVar3 < -28)
							{
								fVar0 = SYSTEM::TO_FLOAT(iVar3);
								fVar0 = (fVar0 * fVar0);
								fVar0 = (fVar0 / (SYSTEM::TO_FLOAT(100) * SYSTEM::TO_FLOAT(100)));
								fVar0 = (fVar0 * fLocal_370);
								if (iVar3 > 0)
								{
									fVar0 = (fVar0 * -1f);
								}
								Local_365.f_2 = (Local_365.f_2 + fVar0);
								if (Local_365.f_2 < fLocal_368)
								{
									Local_365.f_2 = fLocal_368;
								}
								if (Local_365.f_2 >= fLocal_369)
								{
									Local_365.f_2 = fLocal_369;
								}
							}
						}
						CAM::SET_CAM_FOV(iLocal_383, 45f);
						func_527(&Local_403, &iLocal_383, Local_365.f_0, 0f, Local_365.f_2);
						break;
				}
			}
			else if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (CAM::DOES_CAM_EXIST(iLocal_383))
				{
					if (CAM::IS_CAM_ACTIVE(iLocal_383))
					{
						if (CAM::IS_CAM_SHAKING(iLocal_383))
						{
							CAM::STOP_CAM_SHAKING(iLocal_383, true);
						}
						CAM::SET_CAM_ACTIVE(iLocal_383, false);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					}
				}
			}
		}
	}
	else
	{
		if (CAM::DOES_CAM_EXIST(iLocal_383))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_383))
			{
				func_527(&Local_403, &iLocal_383, Local_365.f_0, 0f, Local_365.f_2);
			}
		}
		if ((__LIB_14__::func_466() != 0 && (Local_518.f_0 != 1 && Local_518.f_0 != 2)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		if (__LIB_14__::func_466() == 0)
		{
			if (Local_518.f_0 == 1)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
					{
						if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
						{
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						}
					}
				}
			}
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_383))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_383))
		{
		}
	}
}

void func_563()//Position - 0x7C1C1
{
	iLocal_383 = CAM::CREATE_CAM("default_scripted_camera", false);
	CAM::ATTACH_CAM_TO_ENTITY(iLocal_383, Local_403.f_0, -0.39f, 0.85f, 1.35f, true);
	func_527(&Local_403, &iLocal_383, Local_365.f_0, 0f, Local_365.f_2);
	CAM::SET_CAM_FOV(iLocal_383, 45f);
	CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(iLocal_383, true);
	CAM::SET_CAM_ACTIVE(iLocal_383, true);
}

int func_564()//Position - 0x7C21F
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
		{
			if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
			{
				if (Local_518.f_0 == 1)
				{
					return 1;
				}
			}
			else if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 0)
			{
				if (Local_518.f_0 == 3)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_573()//Position - 0x7C476
{
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_391[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_446.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_403.f_13, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_435.f_13, "lkexile2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT(sLocal_5749);
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1);
	while ((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_461) || !STREAMING::HAS_MODEL_LOADED(iLocal_462)) || !STREAMING::HAS_MODEL_LOADED(iLocal_460)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_446.f_2)) || !STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_403.f_13, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_435.f_13, "lkexile2")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_5749)) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) || !STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) || !STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	if (__LIB_14__::func_466() != 2)
	{
		func_393(2, 0);
	}
	CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(6, 1);
	Local_403.f_0 = VEHICLE::CREATE_VEHICLE(Local_403.f_1, -1503.4f, 4358.3f, 155.7f, 57.3614f, true, true, false);
	__LIB_0__::func_679(Local_403.f_0, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_403.f_0, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_403.f_0, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_403.f_0, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_403.f_0, 0, 0);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0, -1);
	func_379(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	func_41(&(iLocal_463[0]), 0, Local_403.f_0, 0, 1, 0, 0);
	func_521(iLocal_463[0]);
	func_520(&(iLocal_463[0]), 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_463[0], true);
	func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
	func_440(&(iLocal_463[1]), 1, -1683.4967f, 4454.595f, 1.566f, 239.1512f, 0, 0, 0);
	func_521(iLocal_463[1]);
	func_520(&(iLocal_463[1]), 1);
	func_379(iLocal_463[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_31__::func_991(iLocal_463[1], joaat("WEAPON_CARBINERIFLE"), 100, 0, 0, 1);
	__LIB_0__::func_222(&uLocal_519, 1, iLocal_463[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_463[1], true, 1);
	__LIB_17__::func_78(&iLocal_463, 1, 1);
	Local_393.f_11 = { -1679.8206f, 4455.988f, 1.2653f };
	Local_393.f_20 = 244f;
	func_35(&Local_393);
	func_34(Local_393.f_0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
	iLocal_255 = 200;
	Local_418.f_0 = VEHICLE::CREATE_VEHICLE(Local_418.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_418.f_0, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_418.f_1);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0f, 1f, -0.336f, 1000f, 1000f, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 4, false);
	Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -1899.3949f, 4431.256f, 42.805f, 228.1822f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 12, 12);
	iLocal_734 = 0;
	iLocal_733 = 6;
	STREAMING::LOAD_SCENE(-1683.4967f, 4454.595f, 1.566f);
}

void func_574()//Position - 0x7C949
{
	if (iLocal_736)
	{
		__LIB_0__::func_427(1768.1128f, 3240.0544f, 41.0869f, 42.5289f, 0, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(Local_426.f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1);
	if (iLocal_736)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_461) || !STREAMING::HAS_MODEL_LOADED(iLocal_462)) || !STREAMING::HAS_MODEL_LOADED(iLocal_460)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_426.f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	MISC::CLEAR_AREA(1760.0851f, 3242.4521f, 40.8998f, 1000f, true, false, false, false);
	Local_403.f_0 = VEHICLE::CREATE_VEHICLE(Local_403.f_1, 1768.1128f, 3240.0544f, 41.0869f, 42.5289f, true, true, false);
	__LIB_0__::func_679(Local_403.f_0, 0);
	VEHICLE::SET_VEHICLE_LIVERY(Local_403.f_0, 1);
	VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_403.f_0, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_403.f_0, 34, 34);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_403.f_0, 0, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_403.f_0, 5f);
	func_393(2, 0);
	__LIB_0__::func_222(&uLocal_519, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0, -1);
	func_41(&(iLocal_463[0]), 0, Local_403.f_0, 0, 0, 0, 0);
	func_521(iLocal_463[0]);
	func_520(&(iLocal_463[0]), 1);
	func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
	func_440(&(iLocal_463[1]), 1, -1683.4967f, 4454.595f, 1.566f, 239.1512f, 0, 0, 0);
	func_521(iLocal_463[1]);
	func_520(&(iLocal_463[1]), 1);
	func_379(iLocal_463[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_31__::func_991(iLocal_463[1], joaat("WEAPON_CARBINERIFLE"), 100, 0, 0, 1);
	__LIB_0__::func_222(&uLocal_519, 1, iLocal_463[1], "franklin", 0, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_463[1], true, 1);
	__LIB_17__::func_78(&iLocal_463, 1, 1);
	Local_393.f_11 = { -1679.8206f, 4455.988f, 1.2653f };
	Local_393.f_20 = 114.6932f;
	func_35(&Local_393);
	HUD::REMOVE_BLIP(&(Local_393.f_2));
	func_34(Local_393.f_0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
	iLocal_255 = 101;
	Local_418.f_0 = VEHICLE::CREATE_VEHICLE(Local_418.f_1, -1873.92f, 4486.02f, 24.625f, 239.2644f, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_418.f_0, 7, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_418.f_1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_418.f_0, false);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, -0.2f, 0.5f, 0f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.2f, 0.5f, 0f, 375f, 375f, true);
	VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.3f, -0.1f, 0.75f, 200f, 200f, true);
	VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 4, true);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_418.f_0, 5f);
	Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -1899.3949f, 4431.256f, 42.805f, 228.1822f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
	VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 12, 12);
	if (!iLocal_736)
	{
		STREAMING::LOAD_SCENE(1760.0851f, 3242.4521f, 40.8998f);
	}
	SYSTEM::WAIT(0);
	while (!__LIB_16__::func_315(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_315(iLocal_463[0]))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_FLY_HELI_RT");
	iLocal_267 = 1;
	iLocal_266 = 3;
	iLocal_334 = 0;
	iLocal_252 = 0;
	iLocal_734 = 1;
	iLocal_733 = 5;
	func_509(1, 0, 0, 1);
	__LIB_17__::func_789(2, "fly to franklin", 0, 0, 0, 1);
}

void func_575()//Position - 0x7CDAC
{
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(Local_391[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT("missexile2ig_5");
	STREAMING::REQUEST_ANIM_DICT("missexile2deer_crash");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_362);
	AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS");
	STREAMING::REQUEST_PTFX_ASSET();
	while ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_462) || !STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_391[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1)) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2ig_5")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2deer_crash")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_362)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_362)) || !AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS")) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1984.265f, 3818.7625f, 31.38f, 10000f, true, false, false, false);
	if (__LIB_14__::func_466() != 1)
	{
		func_393(1, 0);
	}
	Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -1969.0022f, 4481.5786f, 32.3209f, 215.9919f, true, true, false);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_405.f_0, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_405.f_0, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 0, 0);
	AUDIO::SET_VEH_RADIO_STATION(Local_405.f_0, "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, -1);
	func_379(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	Local_393.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f) };
	func_35(&Local_393);
	HUD::REMOVE_BLIP(&(Local_393.f_2));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_393.f_0, Local_405.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_405.f_0, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "chop_sit_in_baller_ps", 8f, -8f, -1, 1, 0f, false, false, false);
	Local_418.f_0 = VEHICLE::CREATE_VEHICLE(Local_418.f_1, -1964.0022f, 4484.5786f, 32.3209f, 338.0473f, true, true, false);
	ENTITY::SET_ENTITY_PROOFS(Local_418.f_0, true, true, true, true, true, false, false, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_418.f_0, 7, 0);
	func_576(&(Local_391[0 /*33*/]), &Local_418, -1);
	ENTITY::SET_ENTITY_PROOFS(Local_391[0 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[0 /*33*/].f_2));
	func_576(&(Local_391[1 /*33*/]), &Local_418, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_391[1 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[1 /*33*/].f_2));
	func_576(&(Local_391[2 /*33*/]), &Local_418, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_391[2 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[2 /*33*/].f_2));
	__LIB_0__::func_222(&uLocal_519, 0, 0, "michael", 0, 1);
	__LIB_0__::func_222(&uLocal_519, 2, 0, "trevor", 0, 1);
	STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	iLocal_734 = 0;
	iLocal_733 = 3;
	func_509(0, 0f, 0f, 0);
}

void func_576(var uParam0, int iParam1, int iParam2)//Position - 0x7D118
{
	*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam1, 26, uParam0->f_1, iParam2, true, true);
	__LIB_16__::func_881(*uParam0, 182);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(*uParam0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
	PED::SET_PED_AS_ENEMY(*uParam0, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, true, 0f);
	PED::SET_PED_KEEP_TASK(*uParam0, true);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 132, true);
	WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_28, -1, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, uParam0->f_28, true);
	ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_21, 0);
	PED::SET_PED_MAX_HEALTH(*uParam0, uParam0->f_21);
	if (uParam0->f_25)
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*uParam0, true);
	}
	if (uParam0->f_26)
	{
		PED::ADD_ARMOUR_TO_PED(*uParam0, 100);
	}
	uParam0->f_27 = 1;
	PED::SET_PED_NAME_DEBUG(*uParam0, &(uParam0->f_29));
	PED::SET_PED_HEARING_RANGE(*uParam0, 250f);
	uParam0->f_2 = __LIB_0__::func_666(*uParam0, 1, 145);
	HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
	PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, true);
	func_530(uParam0, 1);
	PED::SET_PED_ACCURACY(*uParam0, uParam0->f_22);
}

void func_577()//Position - 0x7D20D
{
	if (iLocal_736)
	{
		__LIB_0__::func_427(-2638.6746f, 2725.4666f, 15.6897f, 351.2094f, 0, 0);
	}
	func_638();
	if (iLocal_736)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while ((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_462) || !STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_391[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("radi"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sabregt"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2switch"))
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PED::SET_CREATE_RANDOM_COPS(false);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	MISC::CLEAR_AREA(1984.265f, 3818.7625f, 31.38f, 10000f, true, false, false, false);
	Local_418.f_0 = VEHICLE::CREATE_VEHICLE(Local_418.f_1, -2639.9f, 2733.9f, 16.6f, 338.0473f, true, true, false);
	VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_418.f_0, true);
	ENTITY::SET_ENTITY_PROOFS(Local_418.f_0, true, true, true, true, true, false, false, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_418.f_0, 7, 0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_418.f_0, "EXILE_2_ENEMY_CAR", 0f);
	GRAPHICS::SET_DECAL_BULLET_IMPACT_RANGE_SCALE(3f);
	func_576(&(Local_391[0 /*33*/]), &Local_418, -1);
	ENTITY::SET_ENTITY_PROOFS(Local_391[0 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[0 /*33*/].f_2));
	func_576(&(Local_391[1 /*33*/]), &Local_418, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_391[1 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[1 /*33*/].f_2));
	func_576(&(Local_391[2 /*33*/]), &Local_418, 1);
	ENTITY::SET_ENTITY_PROOFS(Local_391[2 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[2 /*33*/].f_2));
	func_632("lkexcile2_chase", 1, 1, 1);
	func_631();
	fLocal_131 = 200f;
	iLocal_94 = 1;
	iLocal_91 = 1;
	iLocal_80 = 1;
	func_630(1, 0, 4);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_418.f_0, 1, "lkexcile2_chase", true);
	func_628(Local_418.f_0, 11450f);
	iLocal_80 = 1;
	func_588(Local_418.f_0, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_418.f_0, true);
	if (__LIB_14__::func_466() != 1)
	{
		func_393(1, 0);
	}
	Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -2646.31f, 2677.32f, 16.6427f, 351.1425f, true, true, false);
	VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_405.f_0, true);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_405.f_0, false);
	VEHICLE::SET_VEHICLE_ENGINE_ON(Local_405.f_0, true, true, false);
	VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 0, 0);
	AUDIO::SET_VEH_RADIO_STATION(Local_405.f_0, "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 100, "lkexcile2_chase", true);
	VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 11450f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_405.f_0, true);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, -1);
	func_379(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
	Local_393.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f) };
	func_35(&Local_393);
	HUD::REMOVE_BLIP(&(Local_393.f_2));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_393.f_0, Local_405.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_405.f_0, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "chop_sit_in_baller_ps", 8f, -8f, -1, 1, 0f, false, false, false);
	sLocal_318 = "FS_GOD_0";
	sLocal_319 = "FS_michael_0";
	sLocal_320 = "FS_BACKINCAR";
	if (!iLocal_736)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	iLocal_242 = MISC::GET_GAME_TIMER();
	while (!__LIB_0__::func_611(&iLocal_242, 1000))
	{
		SYSTEM::WAIT(0);
		iLocal_80 = 1;
		func_588(Local_418.f_0, 1f);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
		}
	}
	iLocal_275 = MISC::GET_GAME_TIMER();
	iLocal_334 = 0;
	iLocal_277 = 1;
	iLocal_734 = 1;
	iLocal_733 = 2;
	AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
	func_509(0, 0f, 0f, 0);
	func_578();
	__LIB_17__::func_789(1, "start of casr chase mission", 0, 0, 0, 1);
}

void func_578()//Position - 0x7D7C6
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && iLocal_769 == 0)
	{
		switch (__LIB_14__::func_466())
		{
			case 1:
				switch (iLocal_251)
				{
					case 0:
						iLocal_251 = 2;
						break;
					case 1:
						break;
					case 2:
						if (func_582(Local_687.f_5, 1))
						{
							__LIB_0__::func_222(&uLocal_519, 0, 0, "michael", 0, 1);
							__LIB_0__::func_222(&uLocal_519, 2, 0, "trevor", 0, 1);
							__LIB_0__::func_222(&uLocal_519, 5, 0, "chop", 0, 1);
							iLocal_251++;
						}
						break;
					case 3:
						if (func_582(Local_687.f_5, 1))
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_BARKS", 7, 0, 0, 0))
							{
								func_581(2, 0);
								iLocal_251++;
							}
						}
						break;
					case 4:
						func_581(2, 0);
						if (func_582(Local_687.f_5, 1))
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_TALKC", 7, 0, 0, 0))
							{
								iLocal_251++;
							}
						}
						break;
					case 5:
						if (func_582(Local_687.f_5, 1))
						{
							if (__LIB_16__::func_8(&uLocal_519, 2, "TM44AUD", "TM44_TCALL", 8, 1, 0, 0, 0))
							{
								AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR_PHONE");
								iLocal_257 = -1;
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(1f, 8f, 4);
								iLocal_251++;
							}
						}
						break;
					case 6:
						if (!__LIB_14__::func_521())
						{
							if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() != -1)
							{
								iLocal_257 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
							}
							if (iLocal_257 == 11)
							{
								if (!AUDIO::IS_ANIMAL_VOCALIZATION_PLAYING(Local_393.f_0))
								{
									AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "BARK_SEQ");
								}
							}
						}
						else
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOLLOW_CAR_PHONE"))
							{
								AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOLLOW_CAR_PHONE");
							}
							iLocal_251++;
						}
						break;
					case 7:
						break;
				}
				break;
			case 2:
				switch (iLocal_286)
				{
					case 0:
						if (__LIB_0__::func_611(&iLocal_242, 5500))
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_WHERE", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 4f, 3);
								func_523("TM44_WHERE", 1);
								iLocal_286++;
							}
						}
						break;
					case 1:
						break;
				}
				break;
			}
	}
}

void func_581(int iParam0, int iParam1)//Position - 0x7DA62
{
	if (__LIB_0__::func_611(&iLocal_256, 3000) || iParam1)
	{
		switch (iParam0)
		{
			case 0:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
					case 1:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "CHOP_SNIFF_SEQ");
						break;
					case 2:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "CHOP_WHINE");
						break;
					case 3:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "CHOP_LICKS_MOUTH");
						break;
				}
				iLocal_256 = MISC::GET_GAME_TIMER();
				break;
			case 1:
				AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "CHOP_PANT");
				iLocal_256 = MISC::GET_GAME_TIMER();
				break;
			case 2:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
				{
					case 0:
					case 1:
					case 2:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "bark");
						break;
					case 3:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "GROWL");
						break;
					case 4:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "SNARL");
						break;
				}
				iLocal_256 = MISC::GET_GAME_TIMER();
				break;
			case 3:
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
				{
					case 0:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "BARK_SEQ");
						break;
					case 1:
						AUDIO::PLAY_ANIMAL_VOCALIZATION(Local_393.f_0, 3, "bark");
						break;
				}
				iLocal_242 = MISC::GET_GAME_TIMER();
				break;
			case 4:
				break;
			}
	}
}

int func_582(int iParam0, int iParam1)//Position - 0x7DBBF
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (__LIB_0__::func_568())
		{
			__LIB_0__::func_620(0);
		}
		if (bLocal_221)
		{
			if (!__LIB_13__::func_755(&Local_687, 0))
			{
				if (__LIB_16__::func_936(&uLocal_519, "fam4aud", &Local_321, &cLocal_324, 6, 0, 0))
				{
					bLocal_221 = false;
				}
			}
		}
		if (!__LIB_13__::func_755(&Local_687, iParam1) && !bLocal_221)
		{
			return 1;
		}
	}
	else if (__LIB_0__::func_75())
	{
		__LIB_0__::func_620(1);
	}
	return 0;
}

void func_588(int iParam0, float fParam1)//Position - 0x7DD27
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_97 = false;
	if (!bLocal_79)
	{
		if (bLocal_78)
		{
			__LIB_15__::func_907();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_79 = true;
		}
	}
	else if (!bLocal_78)
	{
		__LIB_15__::func_912();
		bLocal_79 = false;
	}
	if (bLocal_78)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_72)
	{
		if (iLocal_67)
		{
			fLocal_124 = 0f;
		}
		else
		{
			fLocal_124 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_927(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_77 = 1;
					}
					else
					{
						iLocal_77 = 0;
					}
				}
				fLocal_121 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_122) * fLocal_124));
				if (bLocal_76)
				{
					func_624(iParam0, fLocal_121);
					func_623(iParam0, fLocal_131);
					if (fLocal_126 > 1000f)
					{
						if (iLocal_163 == 0)
						{
							func_622(iParam0, fLocal_131);
						}
						fVar0 = ((fLocal_121 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_163) * 2000f));
						func_621(iParam0, fVar0, fLocal_125);
						iLocal_163++;
						if (iLocal_163 > 2)
						{
							fLocal_126 = 0f;
						}
					}
					else
					{
						iLocal_163 = 0;
						fLocal_126 = (fLocal_126 + (MISC::GET_FRAME_TIME() * 1000f));
					}
				}
			}
		}
		iVar2 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				iVar2 = 1;
			}
		}
		if (fLocal_121 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_84)
		{
			if (!iLocal_66)
			{
				func_617(iParam0, ((fParam1 * fLocal_122) * fLocal_124), 0);
				if (!iLocal_87)
				{
				}
				iLocal_87 = 0;
			}
			if (bLocal_69)
			{
				func_613(iParam0);
			}
			if (!iLocal_66)
			{
				func_596(iParam0, ((fParam1 * fLocal_122) * fLocal_124), 0);
			}
		}
		if (iLocal_74)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_201 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_167 = { ENTITY::GET_ENTITY_COORDS(iLocal_201, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_201, &fLocal_105, &fLocal_106, &fLocal_107, &fLocal_108);
				}
			}
			iLocal_74 = 0;
		}
		if (iLocal_73)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_201))
			{
				__LIB_15__::func_908(iLocal_202);
				iLocal_202 = iLocal_201;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_202, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_202, Local_167, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_202, fLocal_105, fLocal_106, fLocal_107, fLocal_108);
			}
			fLocal_120 = fLocal_123;
			iLocal_66 = 1;
			iLocal_73 = 0;
		}
		if (iLocal_66)
		{
			while (!func_589(&iParam0, fLocal_120))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_67 = 1;
		}
		if (iLocal_80)
		{
			iLocal_80 = 0;
		}
	}
}

int func_589(int iParam0, float fParam1)//Position - 0x7DFBA
{
	if (!iLocal_81)
	{
		iLocal_66 = 1;
		func_591();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_150 == -1)
			{
				while (!func_590(iParam0, iLocal_150, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_71)
				{
					iLocal_67 = 1;
					fLocal_124 = 0f;
					iLocal_151 = 0;
					iLocal_153 = 0;
					iLocal_152 = 0;
					iLocal_147 = 0;
					iLocal_148 = 0;
					iLocal_149 = 0;
					iLocal_154 = 0;
					iLocal_155 = 0;
					iLocal_156 = 0;
				}
			}
		}
		iLocal_81 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_122) * fLocal_124));
				func_590(iParam0, iLocal_150, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_121 = fParam1;
		iLocal_157 = 0;
		iLocal_160 = 0;
		fLocal_136 = 0f;
		fLocal_135 = 0f;
		func_596(*iParam0, ((1f * fLocal_122) * fLocal_124), 1);
		func_617(*iParam0, ((1f * fLocal_122) * fLocal_124), 1);
		func_613(*iParam0);
		if ((iLocal_154 == 0 && iLocal_155 == 0) && iLocal_156 == 0)
		{
			iLocal_67 = 0;
			iLocal_66 = 0;
			iLocal_81 = 0;
			return 1;
		}
	}
	return 0;
}

int func_590(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x7E0EC
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_180);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_180))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_180, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_158 && iParam1 != iLocal_159)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_180, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_180, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_180, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_180, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*iParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_180))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_180);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*iParam0, iParam1, &cLocal_180, 10f, 786603);
					}
					else if (iParam1 != iLocal_158 && iParam1 != iLocal_159)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_180, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*iParam0, iParam1, &cLocal_180, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_180, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*iParam0, iParam1, &cLocal_180, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*iParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_591()//Position - 0x7E2D2
{
	func_594();
	func_593();
	func_592();
}

void func_592()//Position - 0x7E2E6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_199[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_199[iVar0]));
			}
		}
		iLocal_144[iVar0] = 0;
		if (!bLocal_78 && !iLocal_91)
		{
			if (iLocal_143[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_143[iVar0], &cLocal_180);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_192[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_192[iVar0]);
		}
		iVar0++;
	}
}

void func_593()//Position - 0x7E3DD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_198[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_198[iVar0]));
			}
		}
		iLocal_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!iLocal_191[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191[iVar0]);
		}
		iVar0++;
	}
	iLocal_152 = 0;
	iLocal_149 = 0;
}

void func_594()//Position - 0x7E458
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_196[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_196[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_196[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_196[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_196[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_196[iVar0]));
			}
		}
		if (!bLocal_78 && !iLocal_91)
		{
			if (iLocal_140[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_140[iVar0], &cLocal_180);
			}
		}
		iLocal_141[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_190[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_190[iVar0]);
		}
		iVar0++;
	}
	iLocal_151 = 0;
	iLocal_147 = 0;
}

void func_596(int iParam0, float fParam1, bool bParam2)//Position - 0x7E56C
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bVar9 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar10 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar11 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	bVar12 = false;
	if (bVar9)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = iLocal_153;
		while (iVar0 < 22)
		{
			if (iLocal_144[iVar0] != 99)
			{
				if (iLocal_144[iVar0] == 0)
				{
					if (iLocal_143[iVar0] > 0)
					{
						if (!iLocal_66)
						{
							if (fLocal_121 > (fLocal_113[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_896(iLocal_192[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_145[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_192[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_145[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_145[iVar0]), 1);
								iLocal_144[iVar0]++;
								iLocal_155++;
							}
						}
						else
						{
							fVar6 = (fLocal_121 - fLocal_113[iVar0]);
							fVar6 = (fVar6 * fLocal_114[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_611(iLocal_143[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_192[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_145[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_192[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_145[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_145[iVar0]), 1);
									iLocal_144[iVar0]++;
									iLocal_155++;
								}
								else
								{
									iLocal_144[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_144[iVar0] = 99;
					}
				}
				else if (iLocal_144[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_143[iVar0], &cLocal_180);
					if (BitTest(iLocal_145[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
					}
					else if (!bLocal_93 && ((!BitTest(iLocal_145[iVar0], 2) && bVar10) || (BitTest(iLocal_145[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_609());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_609());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_192[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_192[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_143[iVar0], &cLocal_180))
							{
								if (fLocal_121 >= (fLocal_113[iVar0] - (fLocal_134 * fParam1)))
								{
									if ((iLocal_80 || bParam2) || (!bLocal_97 && !func_608(Local_166[iVar0 /*3*/], Var5, 5f, fLocal_132)))
									{
										if (bLocal_76)
										{
											func_607(Local_166[iVar0 /*3*/], Var5, fLocal_125);
										}
										iLocal_199[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_192[iVar0], Local_166[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_192[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_199[iVar0], 0);
										}
										if (iLocal_89 && !BitTest(iLocal_145[iVar0], 0))
										{
											func_606(iLocal_199[iVar0]);
										}
										if (BitTest(iLocal_145[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_199[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_199[iVar0], Local_166[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_199[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_192[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_192[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_199[iVar0], 5f);
										}
										if (!BitTest(iLocal_145[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_199[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_192[iVar0]);
										iLocal_155 = (iLocal_155 - 1);
										iLocal_144[iVar0]++;
										bLocal_97 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_199[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_199[iVar0], Local_166[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_199[iVar0], fLocal_109[iVar0], fLocal_110[iVar0], fLocal_111[iVar0], fLocal_112[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_192[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_192[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_199[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_192[iVar0]);
							iLocal_155 = (iLocal_155 - 1);
							iLocal_144[iVar0]++;
						}
					}
				}
				else if (iLocal_144[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_143[iVar0], &cLocal_180);
					if (!BitTest(iLocal_145[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_145[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
							iVar13 = 2;
						}
						else if (!bLocal_93 && ((!BitTest(iLocal_145[iVar0], 2) && bVar10) || (BitTest(iLocal_145[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_609());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_609());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_199[iVar0], false))
						{
							if (!bLocal_97 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_199[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_199[iVar0], true), Var5) < 10000f || bParam2) || iLocal_80)
									{
										func_604(&(iLocal_199[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_145[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
					{
						if (fLocal_121 >= fLocal_113[iVar0])
						{
							if (14 > iLocal_148)
							{
								fVar6 = (fLocal_121 - fLocal_113[iVar0]);
								fVar6 = (fVar6 * fLocal_114[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_143[iVar0], &cLocal_180))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_143[iVar0], &cLocal_180))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_143[iVar0], fVar6, &cLocal_180) };
										if (((!func_608(Var3, Var5, 5f, fLocal_132) && func_608(Var4, Var5, 5f, fLocal_132)) && !iLocal_80) && !bParam2)
										{
											if (!BitTest(iLocal_145[iVar0], 1))
											{
												func_604(&(iLocal_199[iVar0]), iVar13, 1);
											}
											iLocal_148++;
											iLocal_144[iVar0]++;
										}
										else if (((!bLocal_97 || BitTest(iLocal_145[iVar0], 1)) || iLocal_80) || bParam2)
										{
											if (func_590(&(iLocal_199[iVar0]), iLocal_143[iVar0], fVar6, 1, 0, 0, bLocal_95, iLocal_94))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[iVar0], (fParam1 * fLocal_114[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
												{
													if (BitTest(iLocal_145[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_199[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_199[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_192[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_199[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_145[iVar0], 1))
												{
													func_604(&(iLocal_199[iVar0]), iVar13, 1);
												}
												iLocal_148++;
												iLocal_144[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_145[iVar0], 1))
										{
											func_604(&(iLocal_199[iVar0]), iVar13, 1);
										}
										iLocal_148++;
										iLocal_144[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_145[iVar0], 1))
								{
									func_604(&(iLocal_199[iVar0]), iVar13, 1);
								}
								iLocal_148++;
								iLocal_144[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_145[iVar0], 1))
						{
							func_604(&(iLocal_199[iVar0]), iVar13, 1);
						}
						iLocal_148++;
						iLocal_144[iVar0]++;
					}
				}
				else if (iLocal_144[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_70 && !iLocal_67) && !bLocal_86) && (((!bLocal_95 && !iLocal_94) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_199[iVar0])) || func_603(iLocal_199[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_88)
											{
												bVar8 = true;
											}
											else
											{
												fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
												if (fVar7 < 1f)
												{
													bVar8 = true;
												}
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_199[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_925(iLocal_199[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_941(iVar2, iLocal_199[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_599(iLocal_199[iVar0]);
												iLocal_144[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[iVar0], (fParam1 * fLocal_114[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
							}
						}
						else
						{
							iLocal_144[iVar0]++;
						}
					}
					else
					{
						iLocal_144[iVar0]++;
					}
				}
				else if (iLocal_144[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0]))
						{
							iLocal_144[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[iVar0], (fParam1 * fLocal_114[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_143[iVar0], &cLocal_180))
							{
								if (fLocal_121 > (fLocal_113[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_143[iVar0], &cLocal_180)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
							}
						}
					}
					else
					{
						iLocal_144[iVar0]++;
					}
				}
				else if (iLocal_144[iVar0] == 5)
				{
					if (!iLocal_199[iVar0] == iLocal_203)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_199[iVar0]);
									if (fVar7 < 8f)
									{
										fVar7 = 8f;
									}
									if (fVar7 > 62.9f)
									{
										fVar7 = 62.9f;
									}
									TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar1, fVar7);
								}
							}
						}
						if (!bLocal_78 && !iLocal_91)
						{
							if (iLocal_143[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_143[iVar0], &cLocal_180);
							}
						}
						if (!bLocal_68)
						{
							if (!bLocal_96)
							{
								__LIB_15__::func_908(iLocal_199[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_199[iVar0]));
						}
					}
					iLocal_148 = (iLocal_148 - 1);
					iLocal_144[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_153 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_597();
	}
}

void func_597()//Position - 0x7F137
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[iVar0]);
				}
			}
			func_598(iLocal_199[iVar0]);
			__LIB_15__::func_908(iLocal_199[iVar0]);
		}
		iLocal_144[iVar0] = 0;
		iLocal_145[iVar0] = 0;
		if (!bLocal_78 && !iLocal_91)
		{
			if (iLocal_143[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_143[iVar0], &cLocal_180);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (!iLocal_192[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_192[iVar0]);
		}
		iVar0++;
	}
	iLocal_153 = 0;
}

void func_598(int iParam0)//Position - 0x7F204
{
	float fVar0;
	int iVar1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				TASK::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_99)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_599(int iParam0)//Position - 0x7F29E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_598(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_603(int iParam0)//Position - 0x7F401
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_92)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iVar1))
				{
					if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iVar1, &iVar0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0))
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

int func_604(var uParam0, int iParam1, bool bParam2)//Position - 0x7F45F
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_15__::func_909(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_189);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
			}
			else if (iParam1 == 1)
			{
				iVar0 = PED::CREATE_RANDOM_PED_AS_DRIVER(*uParam0, true);
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
				{
					PED::GIVE_PED_HELMET(iVar0, true, 4096, -1);
				}
			}
			else
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_609(), -1, false, false);
				if (bLocal_98)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_609());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_99)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_15__::func_895(iVar0);
			bLocal_97 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_606(int iParam0)//Position - 0x7F56D
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_194 >= -1 && iLocal_195 >= -1)
	{
		while (iVar0 == iLocal_194 || iVar0 == iLocal_195)
		{
			iVar0++;
		}
	}
	else if (iLocal_194 >= -1)
	{
		if (iVar0 == iLocal_194)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 0, 0);
			break;
		case 1:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 2, 2);
			break;
		case 2:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 4, 4);
			break;
		case 3:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 27, 27);
			break;
		case 4:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 7, 7);
			break;
		case 5:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
		case 6:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 68, 68);
			break;
		case 7:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 62, 62);
			break;
		case 8:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 132, 132);
			break;
		case 9:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 117, 0);
			break;
		case 10:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 52, 52);
			break;
		case 11:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 88, 88);
			break;
		case 12:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 1, 1);
			break;
		case 13:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 36, 36);
			break;
		case 14:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 95, 95);
			break;
		default:
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, 73, 73);
			break;
	}
}

void func_607(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x7F6E6
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_79)
	{
		if (!func_608(Param0, Param1, fParam2, 200f))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Param0, fParam2, fParam2, fParam2, false, true, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				MISC::CLEAR_AREA_OF_VEHICLES(Param0, fParam2, false, false, false, false, false, false, 0);
			}
		}
	}
}

int func_608(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x7F759
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_79)
		{
			if (!iLocal_66)
			{
				if (SYSTEM::VMAG2(Param1 - Param0) - fParam2) < (fParam3 * fParam3)
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_609()//Position - 0x7F7A0
{
	if (iLocal_193 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_193;
}

float func_611(int iParam0)//Position - 0x7F7CA
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_180);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_180))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_180);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_180);
	return fVar0;
}

void func_613(int iParam0)//Position - 0x7F880
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	bool bVar3;
	bool bVar4;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar3 = false;
		bVar4 = false;
		iVar0 = iLocal_152;
		while (iVar0 < 6)
		{
			switch (iLocal_146[iVar0])
			{
				case 0:
					if (!iLocal_191[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_165[iVar0 /*3*/], fLocal_119, fLocal_119, fLocal_119, false, true, 0))
						{
							iLocal_154++;
							iLocal_146[iVar0]++;
						}
					}
					else
					{
						iLocal_146[iVar0] = 99;
					}
					break;
				case 1:
					if (1 > iLocal_149)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_191[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_191[iVar0]))
							{
								if ((iLocal_66 || iLocal_80) || (!bLocal_97 && !func_608(Local_165[iVar0 /*3*/], Var1, 5f, fLocal_132)))
								{
									if (bLocal_76)
									{
										func_607(Local_165[iVar0 /*3*/], Var1, fLocal_125);
									}
									iLocal_198[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_191[iVar0], Local_165[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_191[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_198[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_198[iVar0], fLocal_115[iVar0], fLocal_116[iVar0], fLocal_117[iVar0], fLocal_118[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_198[iVar0], __LIB_15__::func_910()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_198[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_191[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_198[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_198[iVar0], __LIB_15__::func_911()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_198[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_198[iVar0], true);
									iLocal_154 = (iLocal_154 - 1);
									iLocal_149++;
									iLocal_146[iVar0]++;
									bLocal_97 = true;
								}
							}
						}
						else
						{
							iLocal_154 = (iLocal_154 - 1);
							iLocal_149++;
							iLocal_146[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_198[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_198[iVar0], true) };
						}
						if (fLocal_133 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_133 * fLocal_133))
						{
							if (!__LIB_15__::func_941(iLocal_198[iVar0], iParam0, 0))
							{
								if (!bLocal_68)
								{
									__LIB_15__::func_908(iLocal_198[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_198[iVar0]));
								}
								iLocal_149 = (iLocal_149 - 1);
								iLocal_146[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_146[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_152 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_614();
	}
}

void func_614()//Position - 0x7FB76
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_198[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_198[iVar0], true, false);
			}
			__LIB_15__::func_908(iLocal_198[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!iLocal_191[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_191[iVar0]);
		}
		iVar0++;
	}
	iLocal_152 = 0;
	iLocal_149 = 0;
}

void func_617(int iParam0, float fParam1, int iParam2)//Position - 0x7FC12
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	struct<3> Var19;
	iVar5 = 0;
	bVar12 = PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
	bVar13 = PED::CAN_CREATE_RANDOM_DRIVER();
	bVar14 = PED::CAN_CREATE_RANDOM_BIKE_RIDER();
	if (bVar12)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
		Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	iVar1 = 0;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fLocal_121 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_151;
		while (iVar0 < 1 && !bVar17)
		{
			if (iLocal_141[iVar0] != 99)
			{
				if (iLocal_141[iVar0] == 0)
				{
					if (iLocal_140[iVar0] > 0 && iLocal_190[iVar0] != 0)
					{
						if (!iLocal_66)
						{
							if (fLocal_121 < (fLocal_104[iVar0] + 20000f))
							{
								if (fLocal_121 >= (fLocal_104[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_896(iLocal_190[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_142[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_190[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_142[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_142[iVar0]), 1);
									iLocal_156++;
									iLocal_141[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar17 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_620(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_121 - fLocal_104[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_611(iLocal_140[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_190[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_142[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_190[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_142[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_142[iVar0]), 1);
									iLocal_156++;
									iLocal_141[iVar0]++;
								}
								else
								{
									func_620(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_620(iVar0, 1090519040);
					}
				}
				else if (iLocal_141[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_140[iVar0], &cLocal_180);
					bVar11 = false;
					if (BitTest(iLocal_142[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_93 && ((!BitTest(iLocal_142[iVar0], 2) && bVar13) || (BitTest(iLocal_142[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_609());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_609());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_196[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_190[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_190[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_140[iVar0], &cLocal_180)) && bVar11)
						{
							if (fLocal_121 >= (fLocal_104[iVar0] - (fLocal_134 * fParam1)))
							{
								if ((iLocal_80 || iParam2) || (!bLocal_97 && !func_608(Local_164[iVar0 /*3*/], Var8, 5f, fLocal_132)))
								{
									if (bLocal_76)
									{
										func_607(Local_164[iVar0 /*3*/], Var8, fLocal_125);
									}
									iLocal_196[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_190[iVar0], Local_164[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_190[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_196[iVar0], 0);
									}
									if (iLocal_89 && !BitTest(iLocal_142[iVar0], 0))
									{
										func_606(iLocal_196[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_196[iVar0], Local_164[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_196[iVar0], fLocal_100[iVar0], fLocal_101[iVar0], fLocal_102[iVar0], fLocal_103[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_190[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_190[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_196[iVar0], 5f);
									}
									if (BitTest(iLocal_142[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_196[iVar0], true);
									}
									if (!BitTest(iLocal_142[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_196[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_196[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_196[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_196[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_190[iVar0]);
									iLocal_156 = (iLocal_156 - 1);
									iLocal_141[iVar0]++;
									bLocal_97 = true;
								}
								else if (fLocal_121 > fLocal_104[iVar0])
								{
									iLocal_156 = (iLocal_156 - 1);
									func_620(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_141[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_162 || iLocal_162 == 0)) || iLocal_80) || iParam2)
					{
						if (!BitTest(iLocal_142[iVar0], 1))
						{
							if (BitTest(iLocal_142[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
								iVar15 = 2;
							}
							else if (!bLocal_93 && ((!BitTest(iLocal_142[iVar0], 2) && bVar13) || (BitTest(iLocal_142[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_609());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_609());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_196[iVar0], false))
							{
								if (!bLocal_97 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_196[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_196[iVar0], true), Var8) < 10000f || iParam2) || iLocal_80)
										{
											func_604(&(iLocal_196[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_142[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_196[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_140[iVar0], &cLocal_180);
							if (fLocal_121 >= fLocal_104[iVar0])
							{
								if (8 > iLocal_147)
								{
									fVar9 = (fLocal_121 - fLocal_104[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_140[iVar0], &cLocal_180))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_140[iVar0], &cLocal_180))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_196[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_140[iVar0], fVar9, &cLocal_180) };
											if (!func_608(Var6, Var8, 5f, fLocal_132) && func_608(Var7, Var8, 5f, fLocal_132))
											{
												if (!BitTest(iLocal_142[iVar0], 1))
												{
													func_604(&(iLocal_196[iVar0]), iVar15, 0);
												}
												func_620(iVar0, 1090519040);
											}
											else if (((!bLocal_97 || BitTest(iLocal_142[iVar0], 1)) || iLocal_80) || iParam2)
											{
												if (func_590(&(iLocal_196[iVar0]), iLocal_140[iVar0], fVar9, 1, 0, 0, 1, iLocal_94))
												{
													if (!BitTest(iLocal_142[iVar0], 1))
													{
														func_604(&(iLocal_196[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_196[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_196[iVar0], fParam1);
													iLocal_147++;
													iLocal_141[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_142[iVar0], 1))
											{
												func_604(&(iLocal_196[iVar0]), iVar15, 0);
											}
											func_620(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_140[iVar0], &cLocal_180))
									{
										if (!BitTest(iLocal_142[iVar0], 1))
										{
											func_604(&(iLocal_196[iVar0]), iVar15, 0);
										}
										func_620(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_142[iVar0], 1))
									{
										func_604(&(iLocal_196[iVar0]), iVar15, 0);
									}
									func_620(iVar0, 1090519040);
								}
							}
							else if (iLocal_77 && !bLocal_85)
							{
								if (!BitTest(iLocal_142[iVar0], 1))
								{
									func_604(&(iLocal_196[iVar0]), iVar15, 0);
								}
								func_620(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_142[iVar0], 1))
							{
								func_604(&(iLocal_196[iVar0]), iVar15, 0);
							}
							func_620(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_162 = iVar0;
					}
				}
				else if (iLocal_141[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_196[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_196[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_196[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_75)
									{
										if ((!bLocal_70 && !iLocal_67) && func_603(iLocal_196[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_161 || iLocal_161 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_926(iLocal_196[iVar0], iVar5) || __LIB_15__::func_941(iVar5, iLocal_196[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_161 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_90 && !BitTest(iLocal_142[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_161 || iLocal_161 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_196[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_161 = iVar0;
										}
									}
									if (bVar18)
									{
										func_599(iLocal_196[iVar0]);
										iLocal_141[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_196[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_196[iVar0]);
							}
						}
						else
						{
							iLocal_141[iVar0]++;
						}
					}
					else
					{
						iLocal_141[iVar0]++;
					}
				}
				else if (iLocal_141[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_196[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_196[iVar0]))
						{
							iLocal_141[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_196[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_196[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_196[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_140[iVar0], &cLocal_180))
							{
								if (fLocal_121 > (fLocal_104[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_140[iVar0], &cLocal_180)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_196[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_196[iVar0]);
							}
						}
					}
					else
					{
						iLocal_141[iVar0]++;
					}
				}
				else if (iLocal_141[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_196[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_196[iVar0]);
					}
					iLocal_147 = (iLocal_147 - 1);
					func_620(iVar0, fVar10);
				}
				if (iVar16 == -1)
				{
					iVar16 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar16 != -1)
		{
			iLocal_151 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_161 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_162 = 0;
		}
	}
	else
	{
		func_618();
	}
}

void func_618()//Position - 0x80744
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_196[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_196[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_196[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_196[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_196[iVar0]);
				}
			}
			func_598(iLocal_196[iVar0]);
			__LIB_15__::func_908(iLocal_196[iVar0]);
		}
		iLocal_141[iVar0] = 0;
		iLocal_142[iVar0] = 0;
		if (!bLocal_78 && !iLocal_91)
		{
			if (iLocal_140[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_140[iVar0], &cLocal_180);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_190[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_190[iVar0]);
		}
		iVar0++;
	}
	iLocal_151 = 0;
	iLocal_147 = 0;
}

void func_620(int iParam0, float fParam1)//Position - 0x80894
{
	int iVar0;
	if (!iLocal_190[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_190[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_196[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_196[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_196[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_196[iParam0], -1, false);
		if (!PED::IS_PED_INJURED(iVar0) && iVar0 != PLAYER::PLAYER_PED_ID())
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_196[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_99)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_68)
	{
		if (!bLocal_96)
		{
			__LIB_15__::func_895(iVar0);
			__LIB_15__::func_908(iLocal_196[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_196[iParam0]));
		}
	}
	if (!bLocal_78 && !iLocal_91)
	{
		if (iLocal_140[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_140[iParam0], &cLocal_180);
		}
	}
	iLocal_141[iParam0] = 99;
}

void func_621(int iParam0, float fParam1, float fParam2)//Position - 0x809EF
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			Var1 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fParam1) };
			Var2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Var3 = { Var2 - Var1 };
			fVar5 = SYSTEM::VMAG(Var3);
			if (fVar5 > fParam2)
			{
				fVar5 = fParam2;
			}
			func_607(Var1, Var4, fVar5);
		}
	}
}

void func_622(int iParam0, float fParam1)//Position - 0x80A72
{
	if (!bLocal_79)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				}
				else
				{
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				}
			}
		}
	}
}

void func_623(int iParam0, float fParam1)//Position - 0x80AC0
{
	if (!bLocal_79)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > (fParam1 * fParam1))
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				}
			}
		}
	}
}

void func_624(int iParam0, float fParam1)//Position - 0x80B0E
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_135 + 2000f);
		fVar2 = (fLocal_136 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_157 == 0)
				{
					Local_176 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_135) };
					iLocal_157++;
				}
				else if (iLocal_157 == 1)
				{
					Local_177 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_157++;
				}
				else if (!bLocal_97)
				{
					if (Local_176.f_0 > Local_177.f_0)
					{
						fVar3 = Local_176.f_0;
						Local_176.f_0 = Local_177.f_0;
						Local_177.f_0 = fVar3;
					}
					if (Local_176.f_1 > Local_177.f_1)
					{
						fVar3 = Local_176.f_1;
						Local_176.f_1 = Local_177.f_1;
						Local_177.f_1 = fVar3;
					}
					if (Local_176.f_2 > Local_177.f_2)
					{
						fVar3 = Local_176.f_2;
						Local_176.f_2 = Local_177.f_2;
						Local_177.f_2 = fVar3;
					}
					Local_176 = { Local_176 - Vector(fLocal_139, fLocal_139, fLocal_139) };
					Local_177 = { Local_177 + Vector(fLocal_139, fLocal_139, fLocal_139) };
					PATHFIND::SET_ROADS_IN_AREA(Local_176, Local_177, false, false);
					fLocal_135 = fVar1;
					iLocal_157 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_160 == 0)
			{
				Local_178 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_136) };
				iLocal_160++;
			}
			else if (iLocal_160 == 1)
			{
				Local_179 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_160++;
			}
			else if (!bLocal_97 && !bVar4)
			{
				if (Local_178.f_0 > Local_179.f_0)
				{
					fVar3 = Local_178.f_0;
					Local_178.f_0 = Local_179.f_0;
					Local_179.f_0 = fVar3;
				}
				if (Local_178.f_1 > Local_179.f_1)
				{
					fVar3 = Local_178.f_1;
					Local_178.f_1 = Local_179.f_1;
					Local_179.f_1 = fVar3;
				}
				if (Local_178.f_2 > Local_179.f_2)
				{
					fVar3 = Local_178.f_2;
					Local_178.f_2 = Local_179.f_2;
					Local_179.f_2 = fVar3;
				}
				Local_178 = { Local_178 - Vector(fLocal_139, fLocal_139, fLocal_139) };
				Local_179 = { Local_179 + Vector(fLocal_139, fLocal_139, fLocal_139) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_178, Local_179, 1);
				fLocal_136 = fVar2;
				iLocal_160 = 0;
			}
		}
	}
}

void func_628(int iParam0, float fParam1)//Position - 0x80E73
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			func_629();
			func_590(&iParam0, iLocal_150, fParam1, 1, 0, 1, 0, 0);
			fLocal_121 = fParam1;
			iVar0 = 0;
			while (iVar0 < 22)
			{
				if (iLocal_144[iVar0] > 2 && iLocal_144[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_199[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_113[iVar0]);
								fVar1 = (fVar1 * fLocal_114[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_611(iLocal_143[iVar0]))
									{
										func_590(&(iLocal_199[iVar0]), iLocal_143[iVar0], fVar1, 1, 0, 1, bLocal_95, iLocal_94);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_144[iVar0] = 99;
						iLocal_148 = (iLocal_148 - 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (iLocal_141[iVar0] > 2 && iLocal_141[iVar0] < 6)
				{
					bVar2 = false;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_196[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_196[iVar0], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_196[iVar0]))
							{
								fVar1 = (fParam1 - fLocal_104[iVar0]);
								if (fVar1 >= 0f)
								{
									if (fVar1 < func_611(iLocal_140[iVar0]))
									{
										func_590(&(iLocal_196[iVar0]), iLocal_140[iVar0], fVar1, 1, 0, 1, 1, iLocal_94);
									}
									else
									{
										bVar2 = true;
									}
								}
								else
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
						else
						{
							bVar2 = true;
						}
					}
					else
					{
						bVar2 = true;
					}
					if (bVar2)
					{
						iLocal_141[iVar0] = 99;
						iLocal_147 = (iLocal_147 - 1);
					}
				}
				iVar0++;
			}
			iLocal_151 = 0;
			iLocal_153 = 0;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (iLocal_146[iVar0] > 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_198[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_198[iVar0], false))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_198[iVar0], true, false);
							iLocal_149++;
							iLocal_146[iVar0] = 2;
						}
					}
					else
					{
						iLocal_146[iVar0] = 0;
					}
				}
				iVar0++;
			}
			iLocal_152 = 0;
			iLocal_157 = 0;
			iLocal_160 = 0;
			fLocal_136 = fParam1;
			fLocal_135 = fParam1;
			Var3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			Local_168 = { Var3 - Vector(100f, 100f, 100f) };
			Local_169 = { Var3 + Vector(100f, 100f, 100f) };
			PATHFIND::SET_ROADS_IN_AREA(Local_168, Local_169, false, false);
		}
	}
}

void func_629()//Position - 0x8111D
{
	iLocal_80 = 1;
}

void func_630(bool bParam0, int iParam1, int iParam2)//Position - 0x81128
{
	if (bParam0)
	{
		iLocal_89 = 1;
		iLocal_194 = iParam1;
		iLocal_195 = iParam2;
	}
}

void func_631()//Position - 0x81142
{
	Local_166[0 /*3*/] = { -2653.0444f, 2624.0652f, 16.2347f };
	fLocal_109[0] = -0.0004f;
	fLocal_110[0] = -0.0027f;
	fLocal_111[0] = -0.0782f;
	fLocal_112[0] = 0.9969f;
	iLocal_143[0] = 2;
	fLocal_113[0] = 0f;
	fLocal_114[0] = 1f;
	iLocal_192[0] = joaat("radi");
	Local_166[1 /*3*/] = { -2640.987f, 2801.99f, 16.1853f };
	fLocal_109[1] = -0.0004f;
	fLocal_110[1] = -0.0007f;
	fLocal_111[1] = 0.9985f;
	fLocal_112[1] = 0.055f;
	iLocal_143[1] = 3;
	fLocal_113[1] = 0f;
	fLocal_114[1] = 1f;
	iLocal_192[1] = joaat("sabregt");
	Local_166[2 /*3*/] = { -2619.3706f, 2936.4963f, 16.2274f };
	fLocal_109[2] = 0.0073f;
	fLocal_110[2] = -0.0002f;
	fLocal_111[2] = 0.9985f;
	fLocal_112[2] = 0.0545f;
	iLocal_143[2] = 4;
	fLocal_113[2] = 8000f;
	fLocal_114[2] = 1f;
	iLocal_192[2] = joaat("radi");
	Local_166[3 /*3*/] = { -2589.6963f, 3257.1921f, 12.9785f };
	fLocal_109[3] = 0.0071f;
	fLocal_110[3] = 0.003f;
	fLocal_111[3] = 0.999f;
	fLocal_112[3] = 0.0441f;
	iLocal_143[3] = 5;
	fLocal_113[3] = 21000f;
	fLocal_114[3] = 1f;
	iLocal_192[3] = joaat("radi");
	Local_166[4 /*3*/] = { -2577.5564f, 3311.5303f, 12.9895f };
	fLocal_109[4] = -0.0041f;
	fLocal_110[4] = -0.0036f;
	fLocal_111[4] = 0.9987f;
	fLocal_112[4] = 0.0514f;
	iLocal_143[4] = 6;
	fLocal_113[4] = 21000f;
	fLocal_114[4] = 1f;
	iLocal_192[4] = joaat("sabregt");
	Local_166[5 /*3*/] = { -2596.8572f, 3022.3042f, 16.0236f };
	fLocal_109[5] = -0.0107f;
	fLocal_110[5] = -0.007f;
	fLocal_111[5] = -0.046f;
	fLocal_112[5] = 0.9989f;
	iLocal_143[5] = 7;
	fLocal_113[5] = 15000f;
	fLocal_114[5] = 1f;
	iLocal_192[5] = joaat("sabregt");
	Local_166[6 /*3*/] = { -2589.4927f, 3110.0151f, 14.6915f };
	fLocal_109[6] = -0.0077f;
	fLocal_110[6] = -0.0046f;
	fLocal_111[6] = -0.0227f;
	fLocal_112[6] = 0.9997f;
	iLocal_143[6] = 8;
	fLocal_113[6] = 15000f;
	fLocal_114[6] = 1f;
	iLocal_192[6] = joaat("radi");
	Local_166[7 /*3*/] = { -2533.485f, 3487.064f, 13.327f };
	fLocal_109[7] = -0.005f;
	fLocal_110[7] = -0.005f;
	fLocal_111[7] = 0.985f;
	fLocal_112[7] = 0.1723f;
	iLocal_143[7] = 9;
	fLocal_113[7] = 25000f;
	fLocal_114[7] = 1f;
	iLocal_192[7] = joaat("radi");
	Local_166[8 /*3*/] = { -2551.2148f, 3411.7734f, 12.7331f };
	fLocal_109[8] = -0.0008f;
	fLocal_110[8] = -0.0074f;
	fLocal_111[8] = -0.1508f;
	fLocal_112[8] = 0.9885f;
	iLocal_143[8] = 10;
	fLocal_113[8] = 25000f;
	fLocal_114[8] = 1f;
	iLocal_192[8] = joaat("sabregt");
	Local_166[9 /*3*/] = { -2483.4678f, 3592.1587f, 14.038f };
	fLocal_109[9] = -0.0077f;
	fLocal_110[9] = -0.0065f;
	fLocal_111[9] = -0.1401f;
	fLocal_112[9] = 0.9901f;
	iLocal_143[9] = 11;
	fLocal_113[9] = 24500f;
	fLocal_114[9] = 1f;
	iLocal_192[9] = joaat("radi");
	Local_166[10 /*3*/] = { -2481.9602f, 3680.1619f, 13.537f };
	fLocal_109[10] = 0.0054f;
	fLocal_110[10] = -0.0109f;
	fLocal_111[10] = 0.9979f;
	fLocal_112[10] = 0.0635f;
	iLocal_143[10] = 12;
	fLocal_113[10] = 29000f;
	fLocal_114[10] = 1f;
	iLocal_192[10] = joaat("radi");
	Local_166[11 /*3*/] = { -2456.9958f, 3795.692f, 20.0964f };
	fLocal_109[11] = -0.0045f;
	fLocal_110[11] = -0.0323f;
	fLocal_111[11] = 0.9875f;
	fLocal_112[11] = 0.1541f;
	iLocal_143[11] = 13;
	fLocal_113[11] = 29000f;
	fLocal_114[11] = 1f;
	iLocal_192[11] = joaat("sabregt");
	Local_166[12 /*3*/] = { -2388.111f, 3944.182f, 24.2239f };
	fLocal_109[12] = 0.0008f;
	fLocal_110[12] = -0.0038f;
	fLocal_111[12] = 0.986f;
	fLocal_112[12] = 0.1669f;
	iLocal_143[12] = 14;
	fLocal_113[12] = 35000f;
	fLocal_114[12] = 1f;
	iLocal_192[12] = joaat("sabregt");
	Local_166[13 /*3*/] = { -2303.0967f, 4192.7466f, 39.5016f };
	fLocal_109[13] = -0.0082f;
	fLocal_110[13] = -0.0267f;
	fLocal_111[13] = 0.9687f;
	fLocal_112[13] = 0.2465f;
	iLocal_143[13] = 15;
	fLocal_113[13] = 44000f;
	fLocal_114[13] = 1f;
	iLocal_192[13] = joaat("sabregt");
	Local_166[14 /*3*/] = { -2194.6785f, 4398.2886f, 56.0071f };
	fLocal_109[14] = -0.0063f;
	fLocal_110[14] = -0.0611f;
	fLocal_111[14] = 0.9841f;
	fLocal_112[14] = 0.1667f;
	iLocal_143[14] = 16;
	fLocal_113[14] = 52000f;
	fLocal_114[14] = 1f;
	iLocal_192[14] = joaat("sabregt");
	Local_166[16 /*3*/] = { -2642.9128f, 2781.5168f, 16.2316f };
	fLocal_109[16] = 0.0046f;
	fLocal_110[16] = -0.0004f;
	fLocal_111[16] = 0.9978f;
	fLocal_112[16] = 0.0668f;
	iLocal_143[16] = 18;
	fLocal_113[16] = 4500f;
	fLocal_114[16] = 1f;
	iLocal_192[16] = joaat("radi");
	Local_166[17 /*3*/] = { -2633.2573f, 2853.91f, 16.1789f };
	fLocal_109[17] = 0f;
	fLocal_110[17] = -0.0008f;
	fLocal_111[17] = 0.9984f;
	fLocal_112[17] = 0.0573f;
	iLocal_143[17] = 19;
	fLocal_113[17] = 4500f;
	fLocal_114[17] = 1f;
	iLocal_192[17] = joaat("sabregt");
}

void func_632(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x81802
{
	struct<3> Var0;
	StringCopy(&cLocal_180, sParam0, 64);
	bLocal_76 = true;
	iLocal_81 = 0;
	iLocal_147 = 0;
	iLocal_148 = 0;
	iLocal_149 = 0;
	iLocal_150 = iParam1;
	iLocal_151 = 0;
	iLocal_152 = 0;
	iLocal_153 = 0;
	iLocal_157 = 0;
	iLocal_160 = 0;
	iLocal_158 = -1;
	iLocal_159 = -1;
	iLocal_161 = 0;
	iLocal_162 = 0;
	fLocal_135 = 0f;
	fLocal_136 = 0f;
	fLocal_121 = 0f;
	iLocal_82 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_168.f_0 = (Var0.f_0 - 100f);
		Local_168.f_1 = (Var0.f_1 - 100f);
		Local_168.f_2 = (Var0.f_2 - 100f);
		Local_169.f_0 = (Var0.f_0 + 100f);
		Local_169.f_1 = (Var0.f_1 + 100f);
		Local_169.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_168, Local_169, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_189);
	__LIB_15__::func_907();
	if (bParam3)
	{
		__LIB_14__::func_804(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_633();
}

void func_633()//Position - 0x81926
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_196[iVar0] = 0;
		Local_164[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_100[iVar0] = 0f;
		fLocal_101[iVar0] = 0f;
		fLocal_102[iVar0] = 0f;
		fLocal_103[iVar0] = 0f;
		iLocal_140[iVar0] = 0;
		fLocal_104[iVar0] = 0f;
		iLocal_141[iVar0] = 0;
		iLocal_190[iVar0] = 0;
		iLocal_142[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iLocal_197[iVar0] = 0;
		iVar0++;
	}
	iLocal_147 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_198[iVar0] = 0;
		Local_165[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_115[iVar0] = 0f;
		fLocal_116[iVar0] = 0f;
		fLocal_117[iVar0] = 0f;
		fLocal_118[iVar0] = 0f;
		iLocal_146[iVar0] = 0;
		iLocal_191[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_200[iVar0] = 0;
		iVar0++;
	}
	iLocal_149 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_199[iVar0] = 0;
		Local_166[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_110[iVar0] = 0f;
		fLocal_111[iVar0] = 0f;
		fLocal_112[iVar0] = 0f;
		iLocal_143[iVar0] = 0;
		fLocal_113[iVar0] = 0f;
		iLocal_144[iVar0] = 0;
		iLocal_192[iVar0] = 0;
		iLocal_145[iVar0] = 0;
		iVar0++;
	}
	iLocal_148 = 0;
	iLocal_151 = 0;
	iLocal_154 = 0;
	iLocal_155 = 0;
	iLocal_156 = 0;
}

void func_638()//Position - 0x81BE6
{
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(Local_391[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(joaat("radi"));
	STREAMING::REQUEST_MODEL(joaat("sabregt"));
	STREAMING::REQUEST_PTFX_ASSET();
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "lkexcile2_chase");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT("missexile2switch");
}

void func_639()//Position - 0x81D33
{
	if (iLocal_736)
	{
		__LIB_0__::func_427(1981.1268f, 3830.4668f, 31.4241f, 218.8945f, 1, 0);
	}
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_426.f_1);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_426.f_1, 15);
	if (iLocal_736)
	{
		__LIB_0__::func_433(0, -1, 1);
	}
	while (((!STREAMING::HAS_MODEL_LOADED(iLocal_461) || !STREAMING::HAS_MODEL_LOADED(iLocal_460)) || !STREAMING::HAS_MODEL_LOADED(Local_426.f_1)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_426.f_1))
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	MISC::CLEAR_AREA(1982.1276f, 3829.4204f, 31.3848f, 10000f, true, false, false, false);
	__LIB_16__::func_43(&Local_426, 2, Local_426.f_3, Local_426.f_6, 1, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_426.f_0, 5f);
	func_393(2, 1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.1268f, 3830.4668f, 31.4241f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 218.8945f);
	func_379(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
	TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_426.f_0, -1, -1, 1f, 3, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
	func_440(&(iLocal_463[0]), 0, 1982.6512f, 3827.7864f, 31.41647f, 332.5456f, 0, 0, 0);
	func_521(iLocal_463[0]);
	func_520(&(iLocal_463[0]), 1);
	func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
	TASK::TASK_ENTER_VEHICLE(iLocal_463[0], Local_426.f_0, -1, 0, 2f, 1, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[0], false, false);
	if (!iLocal_736)
	{
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	SYSTEM::WAIT(0);
	while (!__LIB_16__::func_315(PLAYER::PLAYER_PED_ID()) || !__LIB_16__::func_315(iLocal_463[0]))
	{
		SYSTEM::WAIT(0);
	}
	func_509(0, 90f, 0f, 0);
	iLocal_734 = 0;
	iLocal_733 = 2;
	__LIB_17__::func_789(0, "start of mission", 0, 0, 0, 1);
}

void func_699()//Position - 0x8A9F7
{
	int iVar0;
	bLocal_333 = false;
	iLocal_334 = 1;
	iLocal_214 = 0;
	iLocal_215 = 0;
	iLocal_216 = 0;
	iLocal_217 = 0;
	iLocal_335 = 0;
	iLocal_342 = 0;
	iLocal_343 = 0;
	iLocal_218 = 0;
	iLocal_219 = 0;
	bLocal_220 = false;
	iLocal_344 = 0;
	iLocal_332 = 0;
	bLocal_221 = false;
	iLocal_222 = 0;
	iLocal_345 = 0;
	iLocal_346 = 0;
	iLocal_223 = 0;
	bLocal_224 = false;
	iLocal_347 = 0;
	bLocal_225 = false;
	bLocal_226 = false;
	iLocal_228 = 0;
	iLocal_229 = 0;
	iLocal_230 = 0;
	iLocal_231 = 0;
	iLocal_232 = 0;
	iLocal_233 = 0;
	iLocal_234 = 0;
	iLocal_235 = 0;
	iLocal_236 = 0;
	iLocal_239 = 0;
	iLocal_241 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_245 = 0;
	iLocal_246 = 0;
	iLocal_248 = 0;
	iLocal_249 = 0;
	iLocal_251 = 0;
	iLocal_252 = 0;
	iLocal_253 = 0;
	iLocal_254 = 0;
	iLocal_255 = 0;
	iLocal_258 = 0;
	iLocal_262 = -1;
	iLocal_352 = 0;
	iLocal_263 = 0;
	iLocal_264 = 0;
	iLocal_243 = 0;
	iLocal_244 = 0;
	iLocal_265 = 0;
	iLocal_266 = 0;
	iLocal_247 = 0;
	iLocal_267 = 0;
	iLocal_268 = 0;
	iLocal_361 = 0;
	iLocal_269 = 0;
	iLocal_270 = 0;
	iLocal_271 = 0;
	fLocal_301 = 1f;
	iLocal_273 = 0;
	iLocal_274 = 0;
	iLocal_275 = 0;
	iLocal_277 = 0;
	iLocal_278 = 0;
	iLocal_279 = 0;
	iLocal_280 = 0;
	iLocal_281 = 0;
	iLocal_282 = 0;
	iLocal_283 = 0;
	iLocal_284 = 0;
	iLocal_285 = 0;
	iLocal_286 = 0;
	iLocal_287 = 0;
	iLocal_288 = 0;
	iLocal_289 = 0;
	iLocal_290 = 0;
	iLocal_291 = 0;
	iLocal_292 = 0;
	iLocal_293 = 0;
	iLocal_294 = 0;
	iLocal_295 = 0;
	iLocal_276 = 128;
	fLocal_302 = 0.01f;
	fLocal_303 = 0f;
	iLocal_356 = 0;
	iLocal_357 = 0;
	iLocal_358 = 0;
	iLocal_359 = 0;
	iLocal_770 = 0;
	iLocal_2011 = 0;
	iLocal_3252 = 0;
	iLocal_4493 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_391.f_0 - 1))
	{
		Local_391[iVar0 /*33*/].f_24 = 0;
		iVar0++;
	}
	Local_398.f_27 = 0;
	StringCopy(&Local_321, "", 16);
	StringCopy(&cLocal_324, "", 16);
	Local_405.f_1 = joaat("baller");
	Local_418.f_1 = joaat("dubsta");
	Local_418.f_3 = { -2442.8577f, 3681.4836f, 12.454f };
	Local_426.f_1 = __LIB_15__::func_221(2, 0);
	Local_426.f_3 = { 1982.1279f, 3829.4192f, 31.4094f };
	Local_426.f_6 = 299.4815f;
	Local_391[0 /*33*/].f_11 = { -1521.8604f, 4447.295f, 7.7f };
	Local_391[0 /*33*/].f_20 = 217.2352f;
	Local_391[0 /*33*/].f_1 = joaat("A_M_M_Hillbilly_02");
	Local_391[0 /*33*/].f_21 = 110;
	Local_391[0 /*33*/].f_22 = 10;
	Local_391[0 /*33*/].f_28 = joaat("WEAPON_ASSAULTRIFLE");
	Local_391[0 /*33*/].f_25 = 1;
	StringCopy(&(Local_391[0 /*33*/].f_29), "gang enemy 0", 16);
	Local_391[1 /*33*/].f_11 = { -1570.4601f, 4360.972f, -0.42f };
	Local_391[1 /*33*/].f_20 = 41.3091f;
	Local_391[1 /*33*/].f_1 = joaat("A_M_M_Hillbilly_02");
	Local_391[1 /*33*/].f_21 = 110;
	Local_391[1 /*33*/].f_22 = 10;
	Local_391[1 /*33*/].f_28 = joaat("WEAPON_PUMPSHOTGUN");
	Local_391[1 /*33*/].f_25 = 1;
	StringCopy(&(Local_391[1 /*33*/].f_29), "gang enemy 1", 16);
	Local_391[2 /*33*/].f_11 = { -1569.83f, 4495.49f, 20.24f };
	Local_391[2 /*33*/].f_20 = 196.22f;
	Local_391[2 /*33*/].f_1 = joaat("A_M_M_Hillbilly_02");
	Local_391[2 /*33*/].f_21 = 110;
	Local_391[2 /*33*/].f_22 = 10;
	Local_391[2 /*33*/].f_28 = joaat("WEAPON_MICROSMG");
	Local_391[2 /*33*/].f_25 = 1;
	StringCopy(&(Local_391[2 /*33*/].f_29), "gang enemy 2", 16);
	Local_391[3 /*33*/].f_11 = { -1541.2722f, 4489.3423f, 18.4372f };
	Local_391[3 /*33*/].f_20 = 187.5681f;
	Local_391[3 /*33*/].f_17 = { -1545.6222f, 4484.137f, 18.1388f };
	Local_391[3 /*33*/].f_1 = joaat("A_M_M_Hillbilly_02");
	Local_391[3 /*33*/].f_21 = 150;
	Local_391[3 /*33*/].f_22 = 10;
	Local_391[3 /*33*/].f_28 = joaat("WEAPON_RPG");
	Local_391[3 /*33*/].f_25 = 1;
	StringCopy(&(Local_391[3 /*33*/].f_29), "gang enemy 3", 16);
	Local_393.f_1 = __LIB_17__::func_74();
	Local_393.f_11 = { -1896.4316f, 4427.469f, 43.3257f };
	Local_393.f_20 = 9.9039f;
	Local_393.f_21 = 200;
	Local_393.f_22 = 40;
	Local_393.f_28 = joaat("WEAPON_UNARMED");
	Local_403.f_3 = { -1481.96f, 4334.3f, 95.4f };
	Local_403.f_6 = 325.2f;
	Local_403.f_1 = joaat("frogger2");
	Local_403.f_13 = 5;
	Local_392[0 /*33*/].f_11 = { -1891.4313f, 4420.233f, 46.6325f };
	Local_392[0 /*33*/].f_20 = 341.7364f;
	Local_392[0 /*33*/].f_17 = { -1884.7f, 4427.5f, 44.37f };
	Local_392[0 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[0 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[0 /*33*/].f_21 = 200;
	Local_392[0 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[0 /*33*/].f_29), "animal 0", 16);
	Local_392[1 /*33*/].f_11 = { -1598.5602f, 4498.4004f, 20.3763f };
	Local_392[1 /*33*/].f_20 = 288.4696f;
	Local_392[1 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[1 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[1 /*33*/].f_21 = 110;
	Local_392[1 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[1 /*33*/].f_29), "animal 1", 16);
	Local_459[1 /*9*/] = { -1563.57f, 4495.2f, 18.95f };
	Local_459[1 /*9*/].f_3 = { -1566.95f, 4469.38f, 13.07f };
	Local_459[1 /*9*/].f_6 = { -1551.51f, 4453.79f, 12.66f };
	Local_392[2 /*33*/].f_11 = { -1602.14f, 4484.01f, 17.36f };
	Local_392[2 /*33*/].f_20 = 113.0293f;
	Local_392[2 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[2 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[2 /*33*/].f_21 = 110;
	Local_392[2 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[2 /*33*/].f_29), "animal 2", 16);
	Local_459[2 /*9*/] = { -1571.22f, 4482f, 15.75f };
	Local_459[2 /*9*/].f_3 = { -1565.01f, 4488.43f, 17.81f };
	Local_459[2 /*9*/].f_6 = { -1547.75f, 4481.77f, 16.13f };
	Local_392[3 /*33*/].f_11 = { -1506.3915f, 4396.4653f, 19.7348f };
	Local_392[3 /*33*/].f_20 = 212.8962f;
	Local_392[3 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[3 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[3 /*33*/].f_21 = 110;
	Local_392[3 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[3 /*33*/].f_29), "animal 3", 16);
	Local_459[3 /*9*/] = { -1489.18f, 4391.4f, 19.62f };
	Local_459[3 /*9*/].f_3 = { -1485.7f, 4402.55f, 22.35f };
	Local_459[3 /*9*/].f_6 = { -1468.47f, 4421.03f, 23.18f };
	Local_392[4 /*33*/].f_11 = { -1575.6837f, 4382.2974f, 0.6292f };
	Local_392[4 /*33*/].f_20 = 212.8962f;
	Local_392[4 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[4 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[4 /*33*/].f_21 = 110;
	Local_392[4 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[4 /*33*/].f_29), "animal 4", 16);
	Local_459[4 /*9*/] = { -1577.08f, 4388.03f, 0f };
	Local_459[4 /*9*/].f_3 = { -1550.03f, 4401.53f, 5.66f };
	Local_459[4 /*9*/].f_6 = { -1557.21f, 4430.33f, 7.39f };
	Local_392[5 /*33*/].f_11 = { -1572.5833f, 4420.3745f, 5.2758f };
	Local_392[5 /*33*/].f_20 = 273.6496f;
	Local_392[5 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[5 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[5 /*33*/].f_21 = 110;
	Local_392[5 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[5 /*33*/].f_29), "animal 5", 16);
	Local_459[5 /*9*/] = { -1573.33f, 4414.5f, 3.8f };
	Local_459[5 /*9*/].f_3 = { -1569.05f, 4401.55f, 0.96f };
	Local_459[5 /*9*/].f_6 = { -1561.75f, 4373f, 1.69f };
	Local_392[6 /*33*/].f_11 = { -1509.13f, 4439.37f, 12.93f };
	Local_392[6 /*33*/].f_20 = 230.6402f;
	Local_392[6 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[6 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[6 /*33*/].f_21 = 110;
	Local_392[6 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[6 /*33*/].f_29), "animal 6", 16);
	Local_459[6 /*9*/] = { -1490.22f, 4448.28f, 17.03f };
	Local_459[6 /*9*/].f_3 = { -1487.36f, 4468.4f, 13.94f };
	Local_459[6 /*9*/].f_6 = { -1494.88f, 4473.39f, 15.39f };
	Local_392[7 /*33*/].f_11 = { -1537.6617f, 4451.67f, 12.6956f };
	Local_392[7 /*33*/].f_20 = 47.9748f;
	Local_392[7 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[7 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[7 /*33*/].f_21 = 110;
	Local_392[7 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[7 /*33*/].f_29), "animal 7", 16);
	Local_459[7 /*9*/] = { -1552.87f, 4451.38f, 11.94f };
	Local_459[7 /*9*/].f_3 = { -1570f, 4474.65f, 13.29f };
	Local_459[7 /*9*/].f_6 = { -1574.39f, 4484.14f, 16.42f };
	Local_392[8 /*33*/].f_11 = { -1556.0271f, 4413.7944f, 1.4634f };
	Local_392[8 /*33*/].f_20 = 150.4522f;
	Local_392[8 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[8 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[8 /*33*/].f_21 = 110;
	Local_392[8 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[8 /*33*/].f_29), "animal 8", 16);
	Local_459[8 /*9*/] = { -1575.16f, 4377.77f, 1f };
	Local_459[8 /*9*/].f_3 = { -1572.54f, 4400.54f, -0.82f };
	Local_459[8 /*9*/].f_6 = { -1580.69f, 4389.16f, -0.05f };
	Local_392[9 /*33*/].f_11 = { -1555.4232f, 4392.6206f, 4.9483f };
	Local_392[9 /*33*/].f_20 = 240.9626f;
	Local_392[9 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[9 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[9 /*33*/].f_21 = 110;
	Local_392[9 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[9 /*33*/].f_29), "animal 9", 16);
	Local_459[9 /*9*/] = { -1549.21f, 4381.09f, 3.24f };
	Local_459[9 /*9*/].f_3 = { -1539.72f, 4386.36f, 6.51f };
	Local_459[9 /*9*/].f_6 = { -1528.13f, 4398.42f, 14.8f };
	Local_392[10 /*33*/].f_11 = { -1502.0311f, 4409.049f, 19.1684f };
	Local_392[10 /*33*/].f_20 = 303.9064f;
	Local_392[10 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[10 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[10 /*33*/].f_21 = 110;
	Local_392[10 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[10 /*33*/].f_29), "animal 10", 16);
	Local_459[10 /*9*/] = { -1488.77f, 4420.96f, 20.74f };
	Local_459[10 /*9*/].f_3 = { -1478.69f, 4430.5f, 20.78f };
	Local_459[10 /*9*/].f_6 = { -1483.92f, 4444.4f, 18.41f };
	Local_392[11 /*33*/].f_11 = { -1465.9343f, 4457.232f, 15.2421f };
	Local_392[11 /*33*/].f_20 = 293.9127f;
	Local_392[11 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[11 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[11 /*33*/].f_21 = 110;
	Local_392[11 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[11 /*33*/].f_29), "animal 11", 16);
	Local_459[11 /*9*/] = { -1451.9957f, 4455.727f, 20.1974f };
	Local_459[11 /*9*/].f_3 = { -1413.6312f, 4475.231f, 19.4944f };
	Local_459[11 /*9*/].f_6 = { -1374.32f, 4467.64f, 23.8694f };
	Local_392[12 /*33*/].f_11 = { -1533.0565f, 4465.562f, 16.3504f };
	Local_392[12 /*33*/].f_20 = 154.9713f;
	Local_392[12 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[12 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[12 /*33*/].f_21 = 110;
	Local_392[12 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[12 /*33*/].f_29), "animal 12", 16);
	Local_459[12 /*9*/] = { -1520.33f, 4468.01f, 16.8353f };
	Local_459[12 /*9*/].f_3 = { -1502.4172f, 4472.191f, 16.8261f };
	Local_459[12 /*9*/].f_6 = { -1480.8113f, 4461.762f, 13.0587f };
	Local_392[13 /*33*/].f_11 = { -1544.3579f, 4470.2085f, 18.6654f };
	Local_392[13 /*33*/].f_20 = 65.5701f;
	Local_392[13 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[13 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[13 /*33*/].f_21 = 110;
	Local_392[13 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[13 /*33*/].f_29), "animal 13", 16);
	Local_459[13 /*9*/] = { -1546.1522f, 4438.763f, 10.0066f };
	Local_459[13 /*9*/].f_3 = { -1549.3726f, 4431.5767f, 8.06592f };
	Local_459[13 /*9*/].f_6 = { -1549.3197f, 4425.2544f, 5.26764f };
	Local_392[14 /*33*/].f_11 = { -1562.5874f, 4475.5615f, 17.6221f };
	Local_392[14 /*33*/].f_20 = 121.7079f;
	Local_392[14 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[14 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[14 /*33*/].f_21 = 110;
	Local_392[14 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[14 /*33*/].f_29), "animal 14", 16);
	Local_459[14 /*9*/] = { -1556.276f, 4456.66f, 15.3244f };
	Local_459[14 /*9*/].f_3 = { -1566.31f, 4449.74f, 11.3981f };
	Local_459[14 /*9*/].f_6 = { -1564.05f, 4435.02f, 7.09f };
	Local_392[15 /*33*/].f_11 = { -1571.7758f, 4467.396f, 12.9388f };
	Local_392[15 /*33*/].f_20 = 124.5367f;
	Local_392[15 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[15 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[15 /*33*/].f_21 = 110;
	Local_392[15 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[15 /*33*/].f_29), "animal 15", 16);
	Local_459[15 /*9*/] = { -1560.92f, 4481.51f, 19.4704f };
	Local_459[15 /*9*/].f_3 = { -1587.4895f, 4494.581f, 18.7403f };
	Local_459[15 /*9*/].f_6 = { -1596.4083f, 4519.478f, 15.8511f };
	Local_392[16 /*33*/].f_11 = { -1596.6232f, 4477.6167f, 14.6926f };
	Local_392[16 /*33*/].f_20 = 57.9158f;
	Local_392[16 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[16 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[16 /*33*/].f_21 = 110;
	Local_392[16 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[16 /*33*/].f_29), "animal 16", 16);
	Local_459[16 /*9*/] = { -1593.12f, 4463f, 11.06f };
	Local_459[16 /*9*/].f_3 = { -1598.4231f, 4480.7544f, 15.73979f };
	Local_459[16 /*9*/].f_6 = { -1599.5167f, 4492.6553f, 18.75338f };
	Local_392[17 /*33*/].f_11 = { -1593.888f, 4506.03f, 19.4619f };
	Local_392[17 /*33*/].f_20 = 345.576f;
	Local_392[17 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[17 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[17 /*33*/].f_21 = 110;
	Local_392[17 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[17 /*33*/].f_29), "animal 17", 16);
	Local_459[17 /*9*/] = { -1560.73f, 4475.14f, 13.5f };
	Local_459[17 /*9*/].f_3 = { -1548.74f, 4463.98f, 14.49f };
	Local_459[17 /*9*/].f_6 = { -1557.14f, 4453.28f, 11.88f };
	Local_392[18 /*33*/].f_11 = { -1575.24f, 4482.12f, 20.9403f };
	Local_392[18 /*33*/].f_20 = 243.2081f;
	Local_392[18 /*33*/].f_1 = joaat("A_C_Deer");
	Local_392[18 /*33*/].f_28 = joaat("WEAPON_UNARMED");
	Local_392[18 /*33*/].f_21 = 110;
	Local_392[18 /*33*/].f_25 = 1;
	StringCopy(&(Local_392[18 /*33*/].f_29), "animal 18", 16);
	Local_459[18 /*9*/] = { -1566.05f, 4467.64f, 17.04f };
	Local_459[18 /*9*/].f_3 = { -1577.9872f, 4438.637f, 7.7595f };
	Local_459[18 /*9*/].f_6 = { -1592.8474f, 4435.653f, 3.489f };
	Local_398.f_11 = { -1481.057f, 4402.773f, 22.3394f };
	Local_398.f_20 = 156.8618f;
	Local_398.f_1 = joaat("IG_Orleans");
	Local_398.f_28 = joaat("WEAPON_UNARMED");
	Local_398.f_21 = 200;
	Local_398.f_25 = 1;
	Local_458[0 /*3*/] = { -1512.5464f, 4451.0454f, 10.6712f };
	Local_458[1 /*3*/] = { -1562.0181f, 4475.028f, 17.6919f };
	Local_458[2 /*3*/] = { -1562.5328f, 4436.8013f, 7.5904f };
	Local_458[3 /*3*/] = { -1562.2717f, 4475.644f, 17.6786f };
	Local_458[4 /*3*/] = { -1600.73f, 4496.006f, 20.0414f };
	Local_435.f_3 = { -1570.9187f, 4734.149f, 49.548f };
	Local_435.f_6 = 46.5972f;
	Local_435.f_1 = joaat("dubsta");
	Local_435.f_13 = 3;
	Local_312[0 /*3*/] = { -1584.9344f, 4750.736f, 49.8765f };
	Local_312[1 /*3*/] = { -1561.5793f, 4572.1475f, 17.6341f };
	Local_437.f_3 = { 1755.3712f, 3284.6497f, 40.1144f };
	Local_437.f_6 = 283.4647f;
	Local_437.f_1 = joaat("cavalcade");
	Local_503.f_18 = 0;
	Local_503.f_19 = 0;
	Local_446.f_2 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("AMMO_RPG"));
	iVar0 = 0;
	while (iVar0 <= (Local_392.f_0 - 1))
	{
		iLocal_250[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (Local_391.f_0 - 1))
	{
		Local_391[iVar0 /*33*/].f_27 = 0;
		iVar0++;
	}
	iLocal_769 = 0;
}

void func_700()//Position - 0x8BCBB
{
	if (bLocal_226)
	{
		func_557(0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_403.f_0, false))
	{
		if (__LIB_14__::func_466() == 0)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_418.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
			{
				func_588(Local_418.f_0, 1f);
			}
		}
	}
	if (__LIB_0__::func_223())
	{
		func_724();
		func_701();
		func_1121();
	}
}

void func_701()//Position - 0x8BD3A
{
	MISC::SET_TIME_SCALE(1f);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	}
	func_723();
	func_722();
	__LIB_0__::func_467();
	func_719(1);
	func_717(1);
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_MISSION_FAIL");
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::STOP_STREAM();
	func_716();
	func_715();
	iLocal_349 = 0;
	__LIB_0__::func_325();
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	__LIB_13__::func_815(&Local_687, 1, 0);
	__LIB_16__::func_18(0);
	__LIB_0__::func_671(0);
	__LIB_0__::func_203(0, 0);
	func_707(0, 1);
	__LIB_17__::func_88(&Local_503);
	func_18(&Local_518, &iLocal_463);
	CAM::DESTROY_ALL_CAMS(false);
	__LIB_0__::func_345(&uLocal_721, 0, 0);
	STREAMING::CLEAR_FOCUS();
	STREAMING::STREAMVOL_DELETE(iLocal_327);
	GRAPHICS::SET_SEETHROUGH(false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_377, Local_378, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	__LIB_16__::func_880(&iLocal_463, 0, 0);
	__LIB_16__::func_880(&iLocal_463, 1, 0);
	__LIB_16__::func_880(&iLocal_463, 2, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
	{
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_737, true), 4, 1f, true, false, 1f, false);
		ENTITY::DELETE_ENTITY(&iLocal_737);
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_297))
		{
			AUDIO::STOP_SOUND(iLocal_297);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_353))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_353, false);
	}
	__LIB_0__::func_221(&uLocal_519, 0);
	__LIB_0__::func_221(&uLocal_519, 1);
	__LIB_0__::func_221(&uLocal_519, 2);
	__LIB_0__::func_221(&uLocal_519, 3);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[0]))
	{
		PED::DELETE_PED(&(iLocal_463[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[1]))
	{
		PED::DELETE_PED(&(iLocal_463[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[2]))
	{
		PED::DELETE_PED(&(iLocal_463[2]));
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_390[0]))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_390[0]);
	}
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_390[1]))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_390[1]);
	}
}

void func_707(bool bParam0, bool bParam1)//Position - 0x8C17C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_180))
	{
		iLocal_82 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_189);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_98)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_609());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_618();
			func_614();
			func_597();
		}
		else
		{
			func_591();
			func_633();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_715()//Position - 0x8C4BE
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_348)
	{
		iLocal_348[iVar0] = 0;
		iVar0++;
	}
}

void func_716()//Position - 0x8C4E5
{
	Local_393.f_1 = __LIB_17__::func_74();
	Local_391[0 /*33*/].f_1 = joaat("A_M_M_Hillbilly_02");
	Local_405.f_1 = joaat("baller");
	Local_418.f_1 = joaat("dubsta");
	Local_403.f_1 = joaat("frogger");
	Local_426.f_1 = __LIB_15__::func_221(2, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_393.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_391[0 /*33*/].f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_405.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_418.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("radi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sabregt"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_403.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_426.f_1);
	STREAMING::REMOVE_PTFX_ASSET();
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkexcile2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkexcile2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkexile2");
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(2, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(6, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(7, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(8, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(9, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(10, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(11, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(12, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(13, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(14, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(15, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(16, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(17, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(18, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(19, "lkexcile2_chase");
	VEHICLE::REMOVE_VEHICLE_RECORDING(100, "lkexcile2_chase");
}

void func_717(bool bParam0)//Position - 0x8C675
{
	__LIB_17__::func_187(&Local_426, bParam0);
	__LIB_17__::func_187(&Local_405, bParam0);
	__LIB_17__::func_187(&Local_418, bParam0);
	__LIB_17__::func_187(&Local_403, bParam0);
	__LIB_17__::func_187(&(iLocal_199[0]), bParam0);
	__LIB_17__::func_187(&Local_435, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("radi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sabregt"));
}

void func_719(bool bParam0)//Position - 0x8C762
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Local_391.f_0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_391[iVar0 /*33*/]))
		{
			PED::DELETE_PED(&(Local_391[iVar0 /*33*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_392.f_0)
	{
		__LIB_17__::func_79(&(Local_392[iVar0 /*33*/]), bParam0);
		iVar0++;
	}
	__LIB_17__::func_79(&(iLocal_463[1]), 0);
	__LIB_17__::func_79(&(iLocal_463[0]), 0);
	__LIB_17__::func_79(&(iLocal_463[2]), 0);
	__LIB_17__::func_79(&Local_393, 1);
	__LIB_17__::func_79(&Local_398, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_398.f_1);
}

void func_722()//Position - 0x8C882
{
	if (CAM::DOES_CAM_EXIST(iLocal_380))
	{
		CAM::DESTROY_CAM(iLocal_380, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_382))
	{
		CAM::DESTROY_CAM(iLocal_382, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_381))
	{
		CAM::DESTROY_CAM(iLocal_381, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_383))
	{
		CAM::DESTROY_CAM(iLocal_383, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_384))
	{
		CAM::DESTROY_CAM(iLocal_384, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_385))
	{
		CAM::DESTROY_CAM(iLocal_385, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_386))
	{
		CAM::DESTROY_CAM(iLocal_386, false);
	}
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
}

void func_723()//Position - 0x8C924
{
	int iVar0;
	if (HUD::DOES_BLIP_EXIST(Local_426.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_426.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_379))
	{
		HUD::REMOVE_BLIP(&iLocal_379);
	}
	if (HUD::DOES_BLIP_EXIST(Local_405.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_405.f_2));
	}
	if (HUD::DOES_BLIP_EXIST(Local_418.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_418.f_2));
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_391.f_0)
	{
		if (HUD::DOES_BLIP_EXIST(Local_391[iVar0 /*33*/].f_2))
		{
			HUD::REMOVE_BLIP(&(Local_391[iVar0 /*33*/].f_2));
		}
		iVar0++;
	}
}

void func_724()//Position - 0x8C9B0
{
	switch (__LIB_17__::func_80())
	{
		case 0:
			__LIB_0__::func_469(0);
			break;
		case 1:
			__LIB_0__::func_469(2);
			break;
		case 2:
			__LIB_0__::func_469(2);
			break;
	}
	__LIB_0__::func_507(1980.3524f, 3816.627f, 31.2685f, 298.2293f);
}

void func_729()//Position - 0x8CA78
{
	switch (iLocal_284)
	{
		case 0:
			if (ENTITY::IS_ENTITY_ATTACHED(Local_393.f_0))
			{
				ENTITY::DETACH_ENTITY(Local_393.f_0, true, true);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_403.f_0, "main_heli", 0, Local_403.f_1, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_463[0], "michael", 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_463[1], "franklin", 1, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_393.f_0, "chop", 1, Local_393.f_1, 0);
			__LIB_17__::func_189(&Local_437);
			if (ENTITY::DOES_ENTITY_EXIST(Local_437.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_437.f_0, false))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_437.f_0, "Rear_Car", 1, Local_437.f_1, 0);
				}
				else
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_437);
				}
			}
			__LIB_17__::func_105(1);
			CUTSCENE::START_CUTSCENE(0);
			func_379(PLAYER::PLAYER_PED_ID(), 14, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_284++;
			break;
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(1742.7886f, 3280.7942f, 40.0904f, __LIB_3__::func_80(0f, 0f, 77.8678f));
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, false, false, false);
				MISC::CLEAR_AREA(1744.9111f, 3254.2053f, 40.5f, 1000f, true, false, false, false);
				iLocal_284++;
			}
			break;
		case 2:
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)))
					{
					}
				}
				else
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_284++;
				}
			}
			else
			{
				RECORDING::REPLAY_STOP_EVENT();
				__LIB_17__::func_195(0, 0, 0, 0, 0, 3000, 1);
				func_730();
			}
			break;
		case 3:
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::REPLAY_STOP_EVENT();
				func_509(1, 0, 0, 1);
				func_730();
			}
			break;
	}
}

void func_730()//Position - 0x8CC30
{
	__LIB_0__::func_526(0, 0);
	func_1121();
}

int func_738()//Position - 0x8CEDE
{
	switch (iLocal_270)
	{
		case 0:
			__LIB_17__::func_81(1731f, 3273.7f, 40.5f, 100f, 120f, "EXL_2_MCS_3");
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("chop", Local_393.f_0, Local_393.f_1);
			func_745(&Local_687, 1731f, 3273.7f, 40.5f, 0.01f, 0.01f, 0.01f, 0, iLocal_463[0], iLocal_463[1], 0, Local_403.f_0, "FS_HELI_2", "FS_michael_0", "FS_franklin_0", "FS_chop_0", "", "FS_HELI_0", "FS_HELI_1", 0, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1731f, 3273.7f, 40.5f, 20f, 20f, 2f, true, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
					{
						if (__LIB_0__::func_90())
						{
							if (func_740(1, 1, 1))
							{
								__LIB_13__::func_815(&Local_687, 1, 0);
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_HELI_PICK_UP"))
								{
									AUDIO::STOP_AUDIO_SCENE("EXILE_2_HELI_PICK_UP");
								}
								iLocal_733 = 12;
								return 1;
							}
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_437.f_0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1731f, 3273.7f, 40.5f, true) < 500f)
				{
					STREAMING::REQUEST_MODEL(Local_437.f_1);
					if (STREAMING::HAS_MODEL_LOADED(Local_437.f_1))
					{
						Local_437.f_0 = VEHICLE::CREATE_VEHICLE(Local_437.f_1, Local_437.f_3, Local_437.f_6, true, true, false);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_437.f_0, 5f);
						VEHICLE::SET_VEHICLE_COLOURS(Local_437.f_0, 0, 0);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_437.f_0, "22LJK483");
					}
				}
			}
			func_739();
			break;
		case 1:
			break;
	}
	return 0;
}

void func_739()//Position - 0x8D09C
{
	switch (iLocal_278)
	{
		case 0:
			if (func_582(Local_687.f_5, 1))
			{
				if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_AIR1", 6, 0, 0, 0))
				{
					iLocal_278++;
				}
			}
			break;
		case 1:
			if (func_582(Local_687.f_5, 1))
			{
				iLocal_278 = 2;
			}
			if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1744.9111f, 3254.2053f, 39.8f, true) < 50f)
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_403.f_0) > 5f)
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_LAND", 7, 0, 0, 0))
						{
							iLocal_278 = 3;
						}
					}
				}
			}
			break;
		case 2:
			if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1744.9111f, 3254.2053f, 39.8f, true) < 50f)
				{
					if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_403.f_0) > 5f)
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_LAND", 7, 0, 0, 0))
						{
							iLocal_278++;
						}
					}
				}
			}
			break;
		case 3:
			break;
	}
}

int func_740(bool bParam0, bool bParam1, bool bParam2)//Position - 0x8D1C6
{
	if (__LIB_0__::func_494(1, 0, 1))
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		if (bParam2)
		{
			__LIB_0__::func_429();
		}
		else
		{
			__LIB_0__::func_325();
		}
		HUD::DISPLAY_HUD(false);
		HUD::DISPLAY_RADAR(false);
		CAM::SET_WIDESCREEN_BORDERS(true, 500);
		if (bParam0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		if (bParam1)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
		}
		__LIB_16__::func_305();
		return 1;
	}
	return 0;
}

int func_745(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x8D383
{
	return __LIB_15__::func_982(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 5, uParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_782()//Position - 0x8FA6E
{
	int iVar0;
	__LIB_16__::func_34(&Local_687, Local_312[iLocal_271 /*3*/], 0.01f, 0.01f, 0.01f, 0, Local_403.f_0, "", "", "", 0, 0, 1, -1);
	if ((HUD::DOES_BLIP_EXIST(Local_687.f_5) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_463[1], Local_403.f_0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_393.f_0, Local_403.f_0))
	{
		if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_GETIN", 7, 0, 0, 0))
		{
			STREAMING::CLEAR_FOCUS();
			__LIB_13__::func_815(&Local_687, 1, 0);
			if (HUD::DOES_BLIP_EXIST(iLocal_316))
			{
				HUD::REMOVE_BLIP(&iLocal_316);
			}
			if (HUD::DOES_BLIP_EXIST(Local_393.f_2))
			{
				HUD::REMOVE_BLIP(&(Local_393.f_2));
			}
			iVar0 = 0;
			while (iVar0 <= (Local_392.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_392[iVar0 /*33*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_392[iVar0 /*33*/]));
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_392[iVar0 /*33*/].f_1);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= (Local_391.f_0 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_391[iVar0 /*33*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_391[iVar0 /*33*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_391[iVar0 /*33*/].f_1);
				}
				iVar0++;
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
			iLocal_733 = 11;
			return 1;
		}
	}
	if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_312[iLocal_271 /*3*/], 20f, 20f, 5.5f, false, true, 0))
		{
			HUD::SET_BLIP_ALPHA(Local_687.f_5, 0);
		}
		else
		{
			HUD::SET_BLIP_ALPHA(Local_687.f_5, 255);
			ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_312[iLocal_271 /*3*/], 20f, 20f, 2f, true, true, 0);
		}
	}
	func_784();
	func_532();
	func_783();
	return 0;
}

void func_783()//Position - 0x8FC28
{
	switch (iLocal_279)
	{
		case 0:
			if (func_582(Local_687.f_5, 1))
			{
				if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_PICKUP", 7, 0, 0, 0))
				{
					iLocal_279++;
				}
			}
			break;
		case 1:
			if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_312[iLocal_271 /*3*/], 10f, 10f, 5f, false, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_LANDS", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 10f, 4);
							iLocal_279++;
						}
					}
				}
			}
			break;
		case 2:
			break;
	}
}

void func_784()//Position - 0x8FCFA
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	struct<3> Var7;
	int iVar8;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[1]))
	{
		switch (iLocal_264)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_463[1], -1683.4967f, 4454.595f, 1.566f, 1f, 1f, 2f, false, true, 0))
				{
					if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1683.4967f, 4454.595f, 1.566f, 2f, -1, 0.2f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_463[1], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
				}
				else if (!PED::IS_PED_FACING_PED(iLocal_463[1], PLAYER::PLAYER_PED_ID(), 30f))
				{
					if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY")))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_463[1], PLAYER::PLAYER_PED_ID(), 0);
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), true) < 10f)
				{
					if (!func_535("TM44_FRKHELI"))
					{
						if (!__LIB_13__::func_755(&Local_687, 0))
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_FRKHELI", 7, 0, 0, 0))
							{
								func_523("TM44_FRKHELI", 1);
							}
						}
					}
				}
				break;
			case 100:
				if (!iLocal_359 >= 21)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_463[1], -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, false, true, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_463[1]);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_463[1], true);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
						TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_463[1], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_264 = 101;
					}
					else
					{
						TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar0);
						iVar0 = (iVar0 - 1);
						if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar0, &Var1))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1, 2f, -1, 0.2f, 0, 40000f);
							TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_463[1], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							iLocal_264 = 101;
						}
					}
				}
				else
				{
					iLocal_264 = 103;
				}
				break;
			case 101:
				if (!iLocal_359 >= 21)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_463[1]))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_463[1], 2f, false);
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar2);
					iVar2 = (iVar2 - 1);
					if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar2, &Var3))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_463[1], Var3, 2f, 2f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_463[1], -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, false, true, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_463[1], iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var3, 2f, -1, 0.2f, 0, 40000f);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_463[1], iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								}
							}
						}
						else if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_463[1], Var3, 4f, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_463[1], false);
							iLocal_264++;
						}
					}
				}
				else
				{
					iLocal_264 = 103;
				}
				break;
			case 102:
				if (iLocal_359 >= 21)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_463[1], true);
					iLocal_264 = 103;
				}
				break;
			case 103:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) > 10f)
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_463[1], 3f);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_463[1], ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), 2.5f, 2.5f, 4f, false, true, 0))
				{
					if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_463[1], Local_391[3 /*33*/], 0f, 0f, 0f, 2f, -1, 1f, true);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_463[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 0f), 1.5f, 1.5f, 4f, false, true, 0))
				{
					if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_SHOOT_AT_COORD")))
					{
						TASK::TASK_SHOOT_AT_COORD(iLocal_463[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 3f), 2000, joaat("FIRING_PATTERN_SINGLE_SHOT"));
					}
				}
				break;
			case 200:
				if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_463[1], Local_403.f_0))
				{
					if ((ENTITY::IS_ENTITY_AT_COORD(Local_403.f_0, Local_312[iLocal_271 /*3*/], 20f, 20f, 5.5f, false, true, 0) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_403.f_0)) && ENTITY::GET_ENTITY_SPEED(Local_403.f_0) < 0.2f)
					{
						if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_463[1], Local_403.f_0, -1, 2, 2f, 1, 0);
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 45f)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_463[1], Local_313, 2f, 2f, 2f, false, true, 0))
					{
						if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_313, 2f, -1, 0.2f, 0, 40000f);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_403.f_0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_463[1], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
					}
					else if (PED::IS_PED_FACING_PED(iLocal_463[1], PLAYER::PLAYER_PED_ID(), 40f))
					{
						if (__LIB_17__::func_77(iLocal_463[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_403.f_0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_463[1], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
					}
				}
				break;
			case 999:
				break;
		}
	}
	else if (__LIB_14__::func_466() == 1 && Local_518.f_0 == 2)
	{
		switch (iLocal_264)
		{
			case 100:
				if (!iLocal_359 >= 21)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, false, true, 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
						TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_264 = 101;
					}
					else
					{
						TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar4);
						iVar4 = (iVar4 - 1);
						if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar4, &Var5))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var5, 2f, -1, 0.2f, 0, 40000f);
							TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							iLocal_264 = 101;
						}
					}
				}
				else
				{
					iLocal_264 = 103;
				}
				break;
			case 101:
				if (!iLocal_359 >= 21)
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(PLAYER::PLAYER_PED_ID()))
					{
						TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PLAYER::PLAYER_PED_ID(), 2f, false);
					}
					TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("exile2_3", &iVar6);
					iVar6 = (iVar6 - 1);
					if (TASK::WAYPOINT_RECORDING_GET_COORD("exile2_3", iVar6, &Var7))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var7, 2f, 2f, 2f, false, true, 0))
						{
							if (__LIB_17__::func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1638.336f, 4506.23f, -3.75f, -1498.742f, 4400.691f, 28.25f, 66.5f, false, true, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_3", 0, 10, -1);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var7, 2f, -1, 0.2f, 0, 40000f);
									TASK::TASK_AIM_GUN_AT_COORD(0, -1542.6f, 4480.2f, 21.4f, -1, false, false);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								}
							}
						}
						else if (__LIB_17__::func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							iVar8 = func_785(PLAYER::PLAYER_PED_ID(), &Local_458);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), Local_458[iVar8 /*3*/], 4f, false, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
							iLocal_264++;
						}
					}
				}
				else
				{
					iLocal_264 = 103;
				}
				break;
			case 102:
				if (iLocal_359 >= 21)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
					iLocal_264 = 103;
				}
				break;
			case 103:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) > 10f)
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_393.f_0, 3f);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, -10f, 0f), 2.5f, 2.5f, 4f, false, true, 0))
				{
					if (__LIB_17__::func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_TO_OFFSET_OF_ENTITY")))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_391[3 /*33*/], 0f, 0f, 0f, 2f, -1, 1f, true);
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, -10f, 0f), 1.5f, 1.5f, 4f, false, true, 0))
				{
					if (__LIB_17__::func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_SHOOT_AT_COORD")))
					{
						TASK::TASK_SHOOT_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 0f, 3f), 2000, joaat("FIRING_PATTERN_SINGLE_SHOT"));
					}
				}
				break;
			case 200:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) < 30f)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(Local_403.f_0, Local_312[iLocal_271 /*3*/], 20f, 20f, 5f, false, true, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
						{
							if (__LIB_17__::func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")))
							{
								TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0, -1, 2, 2f, 1, 0);
							}
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 45f)
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_313, 2f, 2f, 2f, false, true, 0))
					{
						if (__LIB_17__::func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_313, 2f, -1, 0.2f, 0, 40000f);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_403.f_0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
					}
					else if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 40f))
					{
						if (__LIB_17__::func_77(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_403.f_0, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
					}
				}
				break;
			}
	}
}

int func_785(int iParam0, var uParam1)//Position - 0x90861
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	iVar2 = 0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (*uParam1 - 1))
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), *(uParam1[iVar3 /*3*/]), true);
		if (iVar3 == 0)
		{
			fVar0 = fVar1;
			iVar2 = 0;
		}
		else if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			iVar2 = iVar3;
		}
		iVar3++;
	}
	return iVar2;
}

void func_788()//Position - 0x90916
{
	switch (iLocal_269)
	{
		case 0:
			__LIB_17__::func_78(&iLocal_463, 0, 0);
			__LIB_17__::func_78(&iLocal_463, 1, 0);
			__LIB_16__::func_880(&iLocal_463, 0, 1);
			__LIB_16__::func_880(&iLocal_463, 1, 1);
			__LIB_16__::func_880(&iLocal_463, 2, 0);
			__LIB_17__::func_78(&iLocal_463, 2, 1);
			func_32(&iLocal_463, 2, 0);
			__LIB_17__::func_73(&iLocal_463, 2, 0);
			iLocal_334 = 1;
			if (Local_518.f_0 == 2)
			{
				__LIB_36__::func_931(&iLocal_463, 2);
				iLocal_247 = 1;
				switch (__LIB_14__::func_466())
				{
					case 0:
						func_884();
						func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						break;
					case 1:
						func_882();
						func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						break;
					}
			}
			iLocal_242 = MISC::GET_GAME_TIMER();
			iLocal_269++;
			break;
		case 1:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				iLocal_271 = func_881(&Local_312);
				iLocal_269++;
			}
			else if (__LIB_0__::func_611(&iLocal_242, 3000))
			{
				iLocal_334 = 1;
				__LIB_36__::func_931(&iLocal_463, 2);
				iLocal_247 = 1;
				switch (__LIB_14__::func_466())
				{
					case 0:
						if (Local_518.f_0 != 2)
						{
							func_880();
						}
						else
						{
							func_884();
						}
						break;
					case 1:
						if (Local_518.f_0 != 2)
						{
							func_879();
						}
						else
						{
							func_882();
							func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						}
						break;
				}
				iLocal_271 = func_881(&Local_312);
				iLocal_269++;
			}
			break;
		case 2:
			if (__LIB_14__::func_466() == 2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				STREAMING::REMOVE_ANIM_SET("move_ped_crouched");
				STREAMING::REMOVE_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
				STREAMING::REMOVE_ANIM_SET("move_ped_crouched_strafing");
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_403.f_13, sLocal_362);
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_362);
				VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_362);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexile2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_435.f_13, "lkexile2");
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_418);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_418.f_1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_405);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_405.f_1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_435);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_435.f_1);
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_403.f_13, sLocal_362);
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_362);
				VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_362);
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexile2");
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_435.f_13, "lkexile2");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_446.f_2);
				STREAMING::REMOVE_PTFX_ASSET();
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
				STREAMING::SET_PED_POPULATION_BUDGET(1);
				switch (iLocal_271)
				{
					case 0:
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[1]);
						ENTITY::SET_ENTITY_COORDS(iLocal_463[1], -1594.5796f, 4770.974f, 50.0451f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_463[1], 214.7628f);
						Local_313 = { -1594.5796f, 4770.974f, 50.0451f };
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_393.f_0);
						ENTITY::SET_ENTITY_COORDS(Local_393.f_0, -1593.2916f, 4770.808f, 49.94669f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_393.f_0, 214.7628f);
						Local_393.f_17 = { -1593.2916f, 4770.808f, 49.94669f };
						break;
					case 1:
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[1]);
						ENTITY::SET_ENTITY_COORDS(iLocal_463[1], -1563.7963f, 4589.273f, 18.5544f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_463[1], 178.1914f);
						Local_313 = { -1563.7963f, 4589.273f, 18.5544f };
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_393.f_0);
						ENTITY::SET_ENTITY_COORDS(Local_393.f_0, -1561.6675f, 4585.899f, 18.3892f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_393.f_0, 28.3876f);
						Local_393.f_17 = { -1561.6675f, 4585.899f, 18.3892f };
						break;
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_316))
				{
					iLocal_316 = __LIB_0__::func_639(iLocal_463[1], 0, 0);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_393.f_2))
				{
					Local_393.f_2 = __LIB_0__::func_639(Local_393.f_0, 0, 0);
				}
				AUDIO::START_AUDIO_SCENE("EXILE_2_HELI_PICK_UP");
				iLocal_264 = 200;
				iLocal_255 = 400;
				iLocal_733 = 10;
				__LIB_17__::func_789(5, "pickup franklin and chop", 1, 0, 0, 1);
				__LIB_0__::func_229("FS_GOD_2", 7500, 1);
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
	{
		func_876();
	}
	func_532();
	__LIB_28__::func_220(&Local_518);
	func_874(Local_403.f_0, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 12000f), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 500f), 1065353216);
	func_789();
	func_557(0);
}

void func_789()//Position - 0x90D7F
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	__LIB_28__::func_221(&Local_518);
	switch (iLocal_247)
	{
		case 0:
			if (iLocal_334)
			{
				if (func_856(&iLocal_463, Local_518.f_0 != 2, 1))
				{
					switch (__LIB_14__::func_466())
					{
						case 0:
							if (iLocal_733 == 7)
							{
								if (__LIB_17__::func_82(&iLocal_463, 1))
								{
									if (Local_518.f_0 != 2)
									{
										if (func_853())
										{
											func_852();
											func_851();
											iLocal_247++;
										}
									}
									else if (func_850())
									{
										func_852();
										func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
										iLocal_247++;
									}
								}
								if (func_849(&Local_518, &iLocal_463))
								{
									if (func_847())
									{
										func_846();
										func_851();
										iLocal_247++;
									}
								}
								if (__LIB_17__::func_82(&iLocal_463, 0))
								{
									if (func_845())
									{
										func_844();
										func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
										iLocal_247++;
									}
								}
							}
							else if (iLocal_733 == 9)
							{
								if (__LIB_17__::func_82(&iLocal_463, 2))
								{
									if (Local_518.f_0 != 2)
									{
										func_880();
									}
									else
									{
										func_884();
										func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
									}
									iLocal_271 = func_881(&Local_312);
								}
							}
							break;
						case 1:
							if (iLocal_733 == 7)
							{
								if (__LIB_17__::func_82(&iLocal_463, 0))
								{
									if (Local_518.f_0 != 2)
									{
										if (func_843())
										{
											func_844();
											iLocal_247++;
										}
									}
									else if (func_840())
									{
										func_844();
										func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
										iLocal_247++;
									}
								}
								if (func_849(&Local_518, &iLocal_463))
								{
									if (func_838())
									{
										func_846();
										iLocal_247++;
									}
								}
								if (__LIB_17__::func_82(&iLocal_463, 1))
								{
									if (func_835())
									{
										func_852();
										func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
										iLocal_247++;
									}
								}
							}
							else if (iLocal_733 == 9)
							{
								if (__LIB_17__::func_82(&iLocal_463, 2))
								{
									if (Local_518.f_0 != 2)
									{
										func_879();
										iLocal_247++;
									}
									else
									{
										func_882();
										func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
										CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
										iLocal_247++;
									}
									iLocal_271 = func_881(&Local_312);
								}
							}
							break;
						}
					}
			}
			break;
		case 1:
			if (func_800())
			{
				if (Local_503.f_18)
				{
					if (!Local_503.f_19)
					{
						if (func_798())
						{
							switch (__LIB_14__::func_466())
							{
								case 0:
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
									PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 0.25f);
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
									PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
									PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), true);
									if (iLocal_335 || iLocal_228)
									{
										PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
									}
									PED::SET_PED_DIES_WHEN_INJURED(iLocal_463[1], false);
									PED::SET_PED_CAN_BE_TARGETTED(iLocal_463[1], false);
									PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_463[1], false);
									PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_463[1], false);
									ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_463[1], false, 0f);
									PED::SET_PED_CAN_RAGDOLL(iLocal_463[1], false);
									PED::SET_PED_DIES_IN_WATER(iLocal_463[1], false);
									PED::SET_PED_SEEING_RANGE(iLocal_463[1], 250f);
									PED::SET_PED_HEARING_RANGE(iLocal_463[1], 250f);
									PED::SET_PED_ID_RANGE(iLocal_463[1], 250f);
									func_520(&(iLocal_463[1]), 1);
									__LIB_17__::func_75(iLocal_463[1], 1);
									func_523("TM44_MLOOK", 0);
									break;
								case 1:
									STREAMING::CLEAR_FOCUS();
									PED::SET_PED_CONFIG_FLAG(iLocal_463[0], 208, true);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_463[0], Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_463[0], "move_ped_crouched", 0.25f);
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_463[0], "Wpn_AssaultRifle_WeaponHoldingCrouched");
									PED::SET_PED_STRAFE_CLIPSET(iLocal_463[0], "move_ped_crouched_strafing");
									PED::SET_PED_DESIRED_HEADING(iLocal_463[0], ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
									PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), true);
									iLocal_264 = 100;
									break;
								case 2:
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
									break;
							}
							Local_503.f_19 = 1;
						}
					}
				}
				func_797();
				if (func_796())
				{
					iLocal_260 = MISC::GET_GAME_TIMER();
					iLocal_261 = 0;
				}
			}
			else
			{
				Global_22930 = 0;
				Local_503.f_18 = 0;
				Local_503.f_19 = 0;
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 183);
				PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
				switch (__LIB_14__::func_466())
				{
					case 0:
						STREAMING::SET_FOCUS_POS_AND_VEL(-1664.92f, 4438.81f, 80f, 0f, 0f, 0f);
						__LIB_0__::func_671(1);
						if (!HUD::DOES_BLIP_EXIST(iLocal_316))
						{
							iLocal_316 = __LIB_0__::func_666(iLocal_463[1], 0, 145);
						}
						iLocal_260 = MISC::GET_GAME_TIMER();
						iLocal_261 = 0;
						iLocal_247 = 0;
						if (Local_518.f_0 == 1)
						{
							PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, true);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
							CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(Local_518.f_4, true);
							func_794(&Local_518, &iLocal_463, 1, 0, 3000);
							__LIB_0__::func_499(179, 0);
							HUD::GET_HUD_COLOUR(174, &iVar0, &iVar1, &iVar2, &uVar3);
							PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0 /*PLAYER_CONTROL*/, iVar0, iVar1, iVar2);
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_393.f_0))
							{
							}
							func_16(&Local_518, &iLocal_463, 0, 1, 1, 0, 0, 3000);
							__LIB_0__::func_498(0, -1);
							CAM::SET_CAM_ACTIVE(iLocal_383, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						}
						break;
					case 1:
						__LIB_0__::func_671(0);
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_463[0], -1531.6f, 4376.7f, 68f, -1, false, false);
						PED::SET_PED_RESET_FLAG(iLocal_463[0], 156, true);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[0], true, false);
						iLocal_247 = 0;
						if (Local_518.f_0 == 1)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
							CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(Local_518.f_4, true);
							func_794(&Local_518, &iLocal_463, 1, 0, 3000);
							__LIB_0__::func_499(179, 0);
							HUD::GET_HUD_COLOUR(174, &iVar4, &iVar5, &iVar6, &uVar7);
							PAD::SET_CONTROL_LIGHT_EFFECT_COLOR(0 /*PLAYER_CONTROL*/, iVar4, iVar5, iVar6);
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_393.f_0))
							{
							}
							PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
							PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), true);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							func_16(&Local_518, &iLocal_463, 0, 1, 1, 1, 0, 3000);
							__LIB_0__::func_498(0, -1);
						}
						break;
					case 2:
						func_16(&Local_518, &iLocal_463, 0, 1, 1, 1, 0, 3000);
						break;
				}
				func_790();
			}
			break;
	}
}

void func_790()//Position - 0x91438
{
	switch (__LIB_14__::func_466())
	{
		case 0:
			func_791(PLAYER::PLAYER_PED_ID());
			func_791(iLocal_463[1]);
			func_791(Local_393.f_0);
			if (Local_518.f_0 != 2)
			{
				func_791(Local_391[0 /*33*/]);
				func_791(Local_391[1 /*33*/]);
				func_791(Local_391[2 /*33*/]);
				if (iLocal_359 >= 21)
				{
					if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_391[3 /*33*/]) > 120)
						{
							ENTITY::SET_ENTITY_HEALTH(Local_391[3 /*33*/], 120, 0);
							func_791(Local_391[3 /*33*/]);
						}
					}
				}
			}
			break;
		case 1:
			func_791(PLAYER::PLAYER_PED_ID());
			func_791(iLocal_463[0]);
			func_791(Local_393.f_0);
			if (Local_518.f_0 != 2)
			{
				if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_391[3 /*33*/], Local_391[3 /*33*/].f_21, 0);
				}
				func_791(Local_391[0 /*33*/]);
				func_791(Local_391[1 /*33*/]);
				func_791(Local_391[2 /*33*/]);
				func_791(Local_391[3 /*33*/]);
			}
			break;
	}
}

void func_791(int iParam0)//Position - 0x9153E
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			if (iVar0 < 110)
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, 120, 0);
			}
			else
			{
				ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
			}
			ENTITY::SET_ENTITY_PROOFS(iParam0, false, false, false, false, false, false, false, false);
		}
	}
}

void func_794(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x9166F
{
	func_21(uParam0, iParam1, 1);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("chop");
	CAM::SET_CAM_ACTIVE(uParam0->f_4, true);
	if (bParam2)
	{
		CAM::RENDER_SCRIPT_CAMS(true, bParam3, iParam4, true, false, 0);
		if (bParam3)
		{
			uParam0->f_5 = (MISC::GET_GAME_TIMER() + iParam4);
		}
	}
	iParam1->f_7 = 4;
	if (uParam0->f_2 == 1)
	{
		__LIB_17__::func_60();
	}
	GRAPHICS::ANIMPOSTFX_PLAY("ChopVision", 0, false);
	PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(0 /*PLAYER_CONTROL*/, 1);
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_3, false, false);
		AUDIO::STOP_PED_SPEAKING(uParam0->f_3, true);
	}
	*uParam0 = 2;
}

int func_796()//Position - 0x91700
{
	if (__LIB_14__::func_466() == 0)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_797()//Position - 0x9172C
{
	if (iLocal_733 == 9)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
				{
					if (__LIB_14__::func_466() == 0)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
							}
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0);
							func_379(iLocal_463[0], 14, 45, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						}
						PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
						PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
						PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
					}
					else
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(iLocal_463[0], Local_403.f_0))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_463[0]))
							{
								ENTITY::DETACH_ENTITY(iLocal_463[0], true, true);
							}
							PED::SET_PED_INTO_VEHICLE(iLocal_463[0], Local_403.f_0, 0);
							func_379(iLocal_463[0], 14, 45, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[0], false, false);
							PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_463[0]);
							PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_463[0], 0.25f);
							PED::RESET_PED_STRAFE_CLIPSET(iLocal_463[0]);
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
						}
						if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(Local_403.f_0, 1))
						{
							VEHICLE::SET_VEHICLE_EXTRA(Local_403.f_0, 12, false);
						}
					}
				}
			}
		}
	}
}

int func_798()//Position - 0x91874
{
	if (__LIB_17__::func_82(&iLocal_463, 0))
	{
		if (__LIB_14__::func_466() == 1)
		{
			if (__LIB_31__::func_990(&iLocal_463, 1, 1, 0))
			{
				__LIB_0__::func_497(181, 1, 0);
				__LIB_0__::func_505(0, 177);
				__LIB_0__::func_377(0, 176);
				iLocal_237 = 0;
				return 1;
			}
		}
	}
	if (__LIB_17__::func_82(&iLocal_463, 1))
	{
		if (__LIB_14__::func_466() == 0)
		{
			if (__LIB_31__::func_990(&iLocal_463, 1, 1, 0))
			{
				__LIB_0__::func_497(181, 1, 0);
				__LIB_0__::func_505(0, 177);
				__LIB_0__::func_377(0, 176);
				iLocal_237 = 0;
				return 1;
			}
		}
	}
	if (iLocal_733 == 9)
	{
		if (__LIB_17__::func_82(&iLocal_463, 2))
		{
			if (__LIB_31__::func_990(&iLocal_463, 1, 1, 0))
			{
				__LIB_0__::func_497(181, 1, 0);
				__LIB_0__::func_505(0, 177);
				__LIB_0__::func_377(0, 176);
				iLocal_237 = 0;
				return 1;
			}
		}
	}
	return 0;
}

int func_800()//Position - 0x919E1
{
	switch (iLocal_213)
	{
		case 0:
			if (__LIB_17__::func_97(&Local_503, 3, 2050, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		case 1:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		case 2:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_503.f_18 = 1;
					}
				}
				return 1;
			}
			break;
		case 3:
			if (__LIB_17__::func_97(&Local_503, 3, 1024, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		case 4:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_503.f_18 = 1;
					}
				}
				return 1;
			}
			break;
		case 5:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		case 6:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		case 7:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				return 1;
			}
			break;
		case 8:
			if (__LIB_17__::func_97(&Local_503, 3, 0, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		case 9:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_503.f_18 = 1;
					}
				}
				return 1;
			}
			break;
		case 10:
			if (__LIB_17__::func_97(&Local_503, 3, 1024, 999f, 999f, 0, 0, 0, 0, 0))
			{
				return 1;
			}
			break;
		case 11:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
				{
					if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() == 1)
					{
						Local_503.f_18 = 1;
					}
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_835()//Position - 0x92D2C
{
	HUD::CLEAR_HELP(true);
	func_836();
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_316))
	{
		HUD::REMOVE_BLIP(&iLocal_316);
	}
	STREAMING::START_PLAYER_SWITCH(Local_518.f_3, PLAYER::PLAYER_PED_ID(), 0, 3);
	iLocal_213 = 5;
	return 1;
}

void func_836()//Position - 0x92D80
{
	switch (__LIB_14__::func_466())
	{
		case 0:
			func_837(PLAYER::PLAYER_PED_ID());
			func_837(iLocal_463[1]);
			func_837(Local_393.f_0);
			func_837(Local_391[0 /*33*/]);
			func_837(Local_391[1 /*33*/]);
			func_837(Local_391[2 /*33*/]);
			func_837(Local_391[3 /*33*/]);
			break;
		case 1:
			func_837(PLAYER::PLAYER_PED_ID());
			func_837(iLocal_463[0]);
			func_837(Local_393.f_0);
			func_837(Local_391[0 /*33*/]);
			func_837(Local_391[1 /*33*/]);
			func_837(Local_391[2 /*33*/]);
			func_837(Local_391[3 /*33*/]);
			if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
			{
				Local_391[3 /*33*/].f_21 = ENTITY::GET_ENTITY_HEALTH(Local_391[3 /*33*/]);
			}
			break;
	}
}

void func_837(int iParam0)//Position - 0x92E45
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			ENTITY::SET_ENTITY_PROOFS(iParam0, true, true, true, true, true, false, false, false);
		}
	}
}

int func_838()//Position - 0x92E6E
{
	HUD::CLEAR_HELP(true);
	func_836();
	if (__LIB_0__::func_501("FS_GOD2b", 0, 0))
	{
		HUD::CLEAR_THIS_PRINT("FS_GOD2b");
	}
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_316))
	{
		HUD::REMOVE_BLIP(&iLocal_316);
	}
	STREAMING::START_PLAYER_SWITCH(PLAYER::PLAYER_PED_ID(), Local_518.f_3, 0, 3);
	Local_518.f_0 = 1;
	iLocal_213 = 7;
	return 1;
}

int func_840()//Position - 0x92EFB
{
	HUD::CLEAR_HELP(true);
	iLocal_337 = 1;
	iLocal_335 = 1;
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_228 = 1;
		iLocal_335 = 0;
	}
	else
	{
		iLocal_228 = 0;
	}
	func_841();
	func_836();
	STREAMING::START_PLAYER_SWITCH(Local_393.f_0, iLocal_463[0], 2050, 3);
	Global_22930 = 1;
	iLocal_213 = 2;
	return 1;
}

void func_841()//Position - 0x92F4A
{
	var uVar0;
	if (__LIB_0__::func_75())
	{
		MemCopy(&uVar0, {__LIB_0__::func_486()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(&uVar0, "TM44_chop1"))
		{
			AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		}
	}
}

int func_843()//Position - 0x92F9A
{
	HUD::CLEAR_HELP(true);
	if (__LIB_0__::func_501("FS_GOD2b", 0, 0))
	{
		HUD::CLEAR_THIS_PRINT("FS_GOD2b");
	}
	iLocal_335 = 1;
	iLocal_337 = 1;
	bLocal_330 = true;
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_228 = 1;
		iLocal_335 = 0;
	}
	else
	{
		iLocal_228 = 0;
	}
	func_841();
	func_836();
	if (!CAM::DOES_CAM_EXIST(iLocal_383))
	{
	}
	else
	{
		Local_365 = { -24f, 0f, 65.9f };
		func_527(&Local_403, &iLocal_383, Local_365.f_0, 0f, Local_365.f_2);
		CAM::SET_CAM_ACTIVE(iLocal_383, true);
	}
	Global_22930 = 1;
	Local_503.f_12 = iLocal_463[0];
	iLocal_213 = 0;
	return 1;
}

void func_844()//Position - 0x93037
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
	{
		AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
	}
}

int func_845()//Position - 0x93080
{
	HUD::CLEAR_HELP(true);
	iLocal_335 = 1;
	iLocal_337 = 1;
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		iLocal_228 = 1;
		iLocal_335 = 0;
	}
	else
	{
		iLocal_228 = 0;
	}
	iLocal_260 = MISC::GET_GAME_TIMER();
	func_841();
	func_836();
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_316))
	{
		HUD::REMOVE_BLIP(&iLocal_316);
	}
	STREAMING::START_PLAYER_SWITCH(Local_518.f_3, PLAYER::PLAYER_PED_ID(), 2050, 3);
	Global_22930 = 1;
	iLocal_213 = 1;
	return 1;
}

void func_846()//Position - 0x93105
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
	{
		AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
	}
}

int func_847()//Position - 0x9314E
{
	HUD::CLEAR_HELP(true);
	func_836();
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_316))
	{
		HUD::REMOVE_BLIP(&iLocal_316);
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (CAM::GET_GAMEPLAY_CAM_FOV() < 20f)
		{
			if (func_848(Local_393.f_0))
			{
				iLocal_336 = 1;
			}
			else if (func_848(Local_391[0 /*33*/]))
			{
				iLocal_338 = 1;
			}
			else if (func_848(Local_391[1 /*33*/]))
			{
				iLocal_339 = 1;
			}
			else if (func_848(Local_391[2 /*33*/]))
			{
				iLocal_340 = 1;
			}
			else if (func_848(Local_391[3 /*33*/]))
			{
				iLocal_341 = 1;
			}
		}
		fLocal_299 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		fLocal_300 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		iLocal_335 = 1;
	}
	STREAMING::START_PLAYER_SWITCH(PLAYER::PLAYER_PED_ID(), Local_518.f_3, 1024, 3);
	Global_22930 = 1;
	Local_518.f_0 = 1;
	iLocal_213 = 6;
	return 1;
}

int func_848(int iParam0)//Position - 0x93230
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_849(int iParam0, int iParam1)//Position - 0x9324F
{
	if (iParam1->f_7 == iParam0->f_1)
	{
		return 1;
	}
	return 0;
}

int func_850()//Position - 0x93267
{
	HUD::CLEAR_HELP(true);
	func_836();
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_316))
	{
		HUD::REMOVE_BLIP(&iLocal_316);
	}
	STREAMING::START_PLAYER_SWITCH(Local_393.f_0, iLocal_463[1], 0, 3);
	iLocal_213 = 4;
	return 1;
}

void func_851()//Position - 0x932BB
{
	if (!iLocal_359 >= 21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_391[3 /*33*/]))
		{
			if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_737))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[3 /*33*/]);
					ENTITY::SET_ENTITY_COORDS(Local_391[3 /*33*/], Local_391[3 /*33*/].f_17, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_391[3 /*33*/], 196.2294f);
					WEAPON::REFILL_AMMO_INSTANTLY(Local_391[3 /*33*/]);
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_391[3 /*33*/], Local_403.f_0, 3000, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[3 /*33*/], false, false);
					iLocal_359 = 6;
				}
			}
		}
	}
}

void func_852()//Position - 0x93350
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
	{
		AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
	}
}

int func_853()//Position - 0x93399
{
	HUD::CLEAR_HELP(true);
	func_836();
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	iLocal_236 = 0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_316))
	{
		HUD::REMOVE_BLIP(&iLocal_316);
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (CAM::GET_GAMEPLAY_CAM_FOV() < 20f)
		{
			if (func_854(&Local_393))
			{
				iLocal_336 = 1;
			}
			else if (func_854(&(iLocal_463[1])))
			{
				iLocal_337 = 1;
			}
			else if (func_854(&(Local_391[0 /*33*/])))
			{
				iLocal_338 = 1;
			}
			else if (func_854(&(Local_391[1 /*33*/])))
			{
				iLocal_339 = 1;
			}
			else if (func_854(&(Local_391[2 /*33*/])))
			{
				iLocal_340 = 1;
			}
			else if (func_854(&(Local_391[3 /*33*/])))
			{
				iLocal_341 = 1;
			}
		}
		fLocal_299 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		fLocal_300 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		iLocal_335 = 1;
	}
	if (CAM::DOES_CAM_EXIST(iLocal_383))
	{
		if (!CAM::IS_CAM_ACTIVE(iLocal_383))
		{
			CAM::SET_CAM_ACTIVE(iLocal_383, true);
			func_527(&Local_403, &iLocal_383, Local_365.f_0, 0f, Local_365.f_2);
		}
	}
	Global_22930 = 1;
	Local_503.f_12 = iLocal_463[1];
	iLocal_213 = 3;
	return 1;
	return 0;
}

int func_854(int iParam0)//Position - 0x934BD
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(*iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_856(int iParam0, bool bParam1, int iParam2)//Position - 0x93506
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
	bVar7 = ((bVar6 && Global_78319) && __LIB_0__::func_81());
	bVar8 = __LIB_13__::func_749(bParam1);
	iParam0->f_6 = __LIB_0__::func_682(__LIB_14__::func_466());
	Global_23011.f_12 = !iParam0->f_23;
	Global_23011.f_121 = bParam1;
	Global_23011.f_122 = iParam2;
	Global_23011.f_123 = bVar7;
	Global_23011.f_3 = Global_23011.f_2;
	Global_23011.f_70 = 0;
	bVar9 = ((Global_23011.f_104 == 4 || Global_23011.f_104 == 1) || Global_23011.f_104 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		__LIB_17__::func_109(iParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__::func_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_15__::func_971(iVar10) && __LIB_17__::func_65(iVar10)) && iVar10 == __LIB_0__::func_682(Global_113386.f_2363.f_539.f_4323))
			{
				Global_23011.f_70 = 1;
			}
			else
			{
				Global_23011.f_70 = 0;
			}
		}
		else if (Global_23011.f_12)
		{
			if (!Global_23011.f_70)
			{
				if ((((!PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_18[iVar0]) && (*iParam0)[iVar0] != PLAYER::PLAYER_PED_ID()) || iParam0->f_34[iVar0] == 2) || iParam0->f_24[iVar0] != 0)
				{
					Global_23011.f_70 = 1;
				}
			}
			if (iParam0->f_34[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (iParam0->f_6 == iVar0)
			{
				if (iParam0->f_34[iVar0] == 1 || iParam0->f_34[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (iParam0->f_8[iVar0])
			{
				if (iParam0->f_39 && iParam0->f_7 == iVar0)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_34[iVar0] == 3)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_23) && !iParam0->f_34[iVar0] == 2)
				{
					iParam0->f_8[iVar0] = 0;
				}
			}
			Global_23011.f_49[iVar0] = iParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0])) && (*iParam0)[iVar0] != PLAYER::PLAYER_PED_ID())
			{
				Global_23011.f_71[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_23011.f_71[iVar0] != -1 && IntToFloat(Global_23011.f_71[iVar0]) < 25f) || iParam0->f_13[iVar0])
			{
				if (iParam0->f_6 != iVar0)
				{
					Global_23011.f_54[iVar0] = 1;
					Global_23011.f_59[iVar0] = iParam0->f_13[iVar0];
				}
			}
		}
		else
		{
			Global_23011.f_49[iVar0] = iParam0->f_8[iVar0];
			Global_23011.f_64[iVar0] = uVar3;
		}
		if (Global_23011.f_124)
		{
			Global_23011.f_19[iVar2] = iVar1;
			Global_23011.f_24[iVar2] = uVar3;
			Global_23011.f_29[iVar2] = uVar4;
			Global_23011.f_34[iVar0] = 0;
			Global_23011.f_44[iVar0] = 0;
			Global_23011.f_39[iVar0] = 0;
			if (bVar9)
			{
				if (Global_23011.f_12)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0]))
					{
						Global_23011.f_76[iVar0] = PED::GET_PED_ARMOUR((*iParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &(Global_23011.f_94[iVar0]), -1);
							STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY_UNLOCKED"), &(Global_23011.f_99[iVar0]), -1);
						}
						Global_23011.f_81[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS((*iParam0)[iVar0], true) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_13__::func_94() || __LIB_0__::func_39(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__::func_39(14))
		{
			if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_34[iVar0] == 3)
			{
				Global_23011.f_69 = iVar2;
				Global_23011.f_14 = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_0__::func_540(0) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(3) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(2) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(9) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(10) || Global_23011.f_12) || __LIB_0__::func_39(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__::func_39(14))
				{
					if (Global_23011.f_69 == 0)
					{
						Global_23011.f_11 = __LIB_16__::func_14(iParam0, 1);
					}
					else if (Global_23011.f_69 == 1)
					{
						Global_23011.f_11 = __LIB_16__::func_14(iParam0, 2);
					}
					else if (Global_23011.f_69 == 2)
					{
						Global_23011.f_11 = __LIB_16__::func_14(iParam0, 3);
					}
					else if (Global_23011.f_69 == 3)
					{
						Global_23011.f_11 = __LIB_16__::func_14(iParam0, 0);
					}
				}
				else if (Global_23011.f_69 == 0)
				{
					Global_23011.f_11 = __LIB_36__::func_931(iParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = __LIB_36__::func_931(iParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_17__::func_91(iParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = __LIB_36__::func_931(iParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
				{
					if (iParam0->f_34[0] == 3)
					{
						iVar11 = 0;
					}
					else if (iParam0->f_34[1] == 3)
					{
						iVar11 = 1;
					}
					else if (iParam0->f_34[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = __LIB_14__::func_466();
					}
					switch (iVar11)
					{
						case 0:
							if (iParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (iParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (iParam0->f_43)
							{
								bVar12 = iParam0->f_40;
								bVar13 = iParam0->f_41;
								bVar14 = iParam0->f_42;
							}
							else
							{
								bVar12 = true;
								bVar13 = 2;
							}
							break;
						case 1:
							if (iParam0->f_13[2] && !Global_23011.f_16)
							{
								bVar12 = 2;
							}
							else if (iParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (iParam0->f_43)
							{
								bVar12 = iParam0->f_40;
								bVar13 = iParam0->f_41;
								bVar14 = iParam0->f_42;
							}
							else
							{
								bVar12 = 2;
								bVar13 = false;
							}
							break;
						case 2:
							if (iParam0->f_13[0] && !Global_23011.f_16)
							{
								bVar12 = false;
							}
							else if (iParam0->f_13[1] && !Global_23011.f_16)
							{
								bVar12 = true;
							}
							else if (iParam0->f_43)
							{
								bVar12 = iParam0->f_40;
								bVar13 = iParam0->f_41;
								bVar14 = iParam0->f_42;
							}
							else
							{
								bVar12 = false;
								bVar13 = true;
							}
							break;
					}
					bVar15 = true;
					if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2 /*FRONTEND_CONTROL*/))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 19 /*INPUT_CHARACTER_WHEEL*/))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 166 /*INPUT_SELECT_CHARACTER_MICHAEL*/))
							{
								bVar15 = false;
								if (iVar11 != 0)
								{
									if (__LIB_36__::func_931(iParam0, 0))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (__LIB_36__::func_931(iParam0, 1))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (__LIB_36__::func_931(iParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (__LIB_36__::func_931(iParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_36__::func_931(iParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (__LIB_36__::func_931(iParam0, bVar14))
						{
							Global_23011.f_11 = 1;
						}
					}
				}
			}
		}
	}
	if (Global_23011.f_11)
	{
		Global_23011.f_125 = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_23011.f_11;
}

void func_874(int iParam0, float fParam1, float fParam2, float fParam3)//Position - 0x94C66
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			if (!iLocal_331)
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) >= fParam2)
				{
					iLocal_331 = 1;
				}
			}
			else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) <= fParam1)
			{
				iLocal_331 = 0;
			}
			if (iLocal_331)
			{
				fParam3 = (fParam3 * -1f);
			}
			else
			{
				fParam3 = (fParam3 * 1f);
			}
			VEHICLE::SET_PLAYBACK_SPEED(iParam0, fParam3);
		}
	}
}

int func_876()//Position - 0x94CDB
{
	int iVar0;
	switch (iLocal_248)
	{
		case 0:
			Local_446.f_3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 0f, 1.5f, 0.7f) };
			iLocal_737 = OBJECT::CREATE_OBJECT(Local_446.f_2, Local_446.f_3, true, true, false);
			ENTITY::SET_ENTITY_PROOFS(iLocal_737, true, true, true, true, true, false, false, false);
			ENTITY::SET_ENTITY_ROTATION(iLocal_737, Local_446.f_12, 2, true);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_737, true, 1);
			iLocal_354 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_rpg_trail", iLocal_737, 0f, -0.2f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			Local_766 = { -1532f, 4469.2f, 23f };
			Local_764 = { __LIB_0__::func_79(Local_766 - Local_446.f_3) };
			Local_446.f_12 = MISC::ATAN2(Local_764.f_2, SYSTEM::VMAG(Local_764.f_0, Local_764.f_1, 0f));
			Local_446.f_12.f_2 = __LIB_17__::func_83((MISC::ATAN2(Local_764.f_1, Local_764.f_0) - 90f));
			switch (__LIB_14__::func_466())
			{
				case 0:
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG", ENTITY::GET_ENTITY_COORDS(iLocal_737, true), "EXILE_2_SOUNDS", false, 0, false);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_297, "Fire_Missile_Loop", iLocal_737, "EXILE_2_SOUNDS", false, 0);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG_On_Foot", ENTITY::GET_ENTITY_COORDS(iLocal_737, true), "EXILE_2_SOUNDS", false, 0, false);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_297, "Fire_Missile_Loop", iLocal_737, "EXILE_2_SOUNDS", false, 0);
					break;
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_298, "Missile_Warning_Sound", Local_403.f_0, "EXILE_2_SOUNDS", false, 0);
			Local_767 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_403.f_0, -5f, 0f, -0.5f) };
			iLocal_242 = MISC::GET_GAME_TIMER();
			iLocal_248++;
			break;
		case 1:
			Local_446.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_737, true) };
			Local_767 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_403.f_0, -5f, 0f, -0.5f) };
			Local_765 = { __LIB_0__::func_79(Local_767 - Local_446.f_3) };
			Local_764.f_0 = (Local_764.f_0 + ((Local_765.f_0 - Local_764.f_0) * 0.15f));
			Local_764.f_1 = (Local_764.f_1 + ((Local_765.f_1 - Local_764.f_1) * 0.15f));
			Local_764.f_2 = (Local_764.f_2 + ((Local_765.f_2 - Local_764.f_2) * 0.15f));
			Local_446.f_12 = MISC::ATAN2(Local_764.f_2, SYSTEM::VMAG(Local_764.f_0, Local_764.f_1, 0f));
			Local_446.f_12.f_2 = __LIB_17__::func_83((MISC::ATAN2(Local_764.f_1, Local_764.f_0) - 90f));
			if (!func_877(Local_446.f_3, Local_767, Local_764 * FtoV(MISC::GET_FRAME_TIME()) * Vector(50f, 50f, 50f)))
			{
			}
			if (!func_877(Local_446.f_3, Local_767, Local_764 * FtoV(MISC::GET_FRAME_TIME()) * Vector(50f, 50f, 50f)) && !__LIB_0__::func_611(&iLocal_242, 2500))
			{
				Local_446.f_3 = { Local_446.f_3 + Local_764 * FtoV(MISC::GET_FRAME_TIME()) * Vector(50f, 50f, 50f) };
				Local_768 = { Local_764 * Vector(50f, 50f, 50f) };
				ENTITY::SET_ENTITY_VELOCITY(iLocal_737, Local_768);
				ENTITY::SET_ENTITY_ROTATION(iLocal_737, Local_446.f_12, 2, true);
			}
			else
			{
				iLocal_216 = 1;
				iLocal_248 = 3;
				return 1;
			}
			break;
		case 2:
			if (!Local_503.f_16)
			{
				iLocal_216 = 1;
				iLocal_248 = 3;
				return 1;
			}
			break;
		case 3:
			iVar0 = 0;
			if (WEAPON::GET_AMMO_IN_CLIP(Local_391[3 /*33*/], joaat("WEAPON_RPG"), &iVar0))
			{
				if (iVar0 >= 1)
				{
					if (WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(Local_391[3 /*33*/]))
					{
						iLocal_737 = WEAPON::SET_PED_SHOOT_ORDNANCE_WEAPON(Local_391[3 /*33*/], -1f);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_737, true, true, true, true, true, false, false, false);
							Local_446.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_737, true) };
							Local_446.f_12 = { ENTITY::GET_ENTITY_ROTATION(iLocal_737, 2) };
							MISC::CLEAR_AREA(Local_446.f_3, 0.5f, true, false, false, false);
							iLocal_737 = OBJECT::CREATE_OBJECT(Local_446.f_2, Local_446.f_3, true, true, false);
							ENTITY::SET_ENTITY_ROTATION(iLocal_737, Local_446.f_12, 2, true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_737, true, 1);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_737, false);
							iLocal_354 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_rpg_trail", iLocal_737, 0f, -0.2f, 0f, 0f, 0f, 0f, 1f, false, false, false);
							Local_764 = { __LIB_0__::func_79(Vector(19f, 4469.92f, -1537.21f) - ENTITY::GET_ENTITY_COORDS(iLocal_737, true)) };
							Local_446.f_12 = MISC::ATAN2(Local_764.f_2, SYSTEM::VMAG(Local_764.f_0, Local_764.f_1, 0f));
							Local_446.f_12.f_2 = __LIB_17__::func_83((MISC::ATAN2(Local_764.f_1, Local_764.f_0) - 90f));
							switch (__LIB_14__::func_466())
							{
								case 0:
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG", ENTITY::GET_ENTITY_COORDS(iLocal_737, true), "EXILE_2_SOUNDS", false, 0, false);
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_297, "Fire_Missile_Loop", iLocal_737, "EXILE_2_SOUNDS", false, 0);
									break;
								case 1:
									AUDIO::PLAY_SOUND_FROM_COORD(-1, "Fire_RPG_On_Foot", ENTITY::GET_ENTITY_COORDS(iLocal_737, true), "EXILE_2_SOUNDS", false, 0, false);
									AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_297, "Fire_RPG_On_Foot", iLocal_737, "EXILE_2_SOUNDS", false, 0);
									break;
							}
							AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_298, "Missile_Warning_Sound", Local_403.f_0, "EXILE_2_SOUNDS", false, 0);
							iLocal_248++;
						}
					}
				}
			}
			break;
		case 4:
			Local_767 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_403.f_0, -18f, 0.5f, 0.5f) };
			Local_765 = { __LIB_0__::func_79(Local_767 - Local_446.f_3) };
			Local_764.f_0 = (Local_764.f_0 + ((Local_765.f_0 - Local_764.f_0) * 0.15f));
			Local_764.f_1 = (Local_764.f_1 + ((Local_765.f_1 - Local_764.f_1) * 0.15f));
			Local_764.f_2 = (Local_764.f_2 + ((Local_765.f_2 - Local_764.f_2) * 0.15f));
			Local_446.f_12 = MISC::ATAN2(Local_764.f_2, SYSTEM::VMAG(Local_764.f_0, Local_764.f_1, 0f));
			Local_446.f_12.f_2 = __LIB_17__::func_83((MISC::ATAN2(Local_764.f_1, Local_764.f_0) - 90f));
			Local_446.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_737, true) };
			if (!func_877(Local_446.f_3, Local_767, Local_764 * FtoV(MISC::GET_FRAME_TIME()) * Vector(35f, 35f, 35f)))
			{
				Local_446.f_3 = { Local_446.f_3 + Local_764 * FtoV(MISC::GET_FRAME_TIME()) * Vector(35f, 35f, 35f) };
				Local_768 = { Local_764 * Vector(35f, 35f, 35f) };
				ENTITY::SET_ENTITY_VELOCITY(iLocal_737, Local_768);
				ENTITY::SET_ENTITY_ROTATION(iLocal_737, Local_446.f_12, 2, true);
			}
			else
			{
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_737, true), 4, 1f, true, false, 1f, false);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_354))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_354, false);
				}
				ENTITY::DELETE_ENTITY(&iLocal_737);
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_297))
				{
					AUDIO::STOP_SOUND(iLocal_297);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_298))
				{
					AUDIO::STOP_SOUND(iLocal_298);
				}
				iLocal_248 = 3;
				return 1;
			}
			break;
	}
	return 0;
}

int func_877(struct<3> Param0, struct<3> Param1, struct<3> Param2)//Position - 0x953A2
{
	struct<3> Var0;
	struct<3> Var1;
	Var0 = { Param1 - Param0 };
	if (SYSTEM::VMAG(Var0) < 0.2f)
	{
		return 1;
	}
	Var1 = { Param1 - Param0 + Param2 };
	if (SYSTEM::VMAG(Var0) < 20f)
	{
		if (SYSTEM::VMAG(Var1) > SYSTEM::VMAG(Var0))
		{
			return 1;
		}
	}
	return 0;
}

int func_879()//Position - 0x9544C
{
	HUD::CLEAR_THIS_PRINT("FS_help_1");
	func_836();
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
	TASK::TASK_HELI_MISSION(0, Local_403.f_0, 0, 0, -1562.2906f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_463[2], iLocal_389);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
	Local_503.f_12 = iLocal_463[2];
	iLocal_213 = 8;
	return 1;
}

int func_880()//Position - 0x954CB
{
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
	}
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
	TASK::TASK_HELI_MISSION(0, Local_403.f_0, 0, 0, -1562.2906f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_463[2], iLocal_389);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
	Local_503.f_12 = iLocal_463[2];
	Global_22930 = 1;
	iLocal_213 = 10;
	return 1;
}

int func_881(var uParam0)//Position - 0x9555F
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), *(uParam0[iVar0 /*3*/]), true);
		if (iVar0 == 0)
		{
			fVar2 = fVar3;
			iVar1 = iVar0;
		}
		else if (fVar3 < fVar2)
		{
			fVar2 = fVar3;
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_882()//Position - 0x955B8
{
	HUD::CLEAR_THIS_PRINT("FS_help_1");
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	func_836();
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
	TASK::TASK_HELI_MISSION(0, Local_403.f_0, 0, 0, -1562.2906f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_463[2], iLocal_389);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
	STREAMING::START_PLAYER_SWITCH(Local_393.f_0, iLocal_463[2], 0, 3);
	iLocal_213 = 9;
	return 1;
}

void func_883(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x95644
{
	int iVar0;
	int iVar1;
	if (bParam2)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	}
	if (bParam4)
	{
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(iParam0->f_13, 2f);
	}
	if (bParam3)
	{
		iVar0 = 0;
		if (!bParam5)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_3, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 70f)
			{
				iVar1 = 3;
			}
			else
			{
				iVar1 = 0;
				iVar0 = 1;
			}
		}
		else
		{
			iVar1 = iParam6;
		}
		STREAMING::START_PLAYER_SWITCH(iParam0->f_3, PLAYER::PLAYER_PED_ID(), iVar0, iVar1);
		if (iVar1 == 3)
		{
			func_18(iParam0, iParam1);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
	}
	else
	{
		func_18(iParam0, iParam1);
	}
	*iParam0 = 3;
}

int func_884()//Position - 0x956EA
{
	HUD::CLEAR_THIS_PRINT("FS_help_1");
	bLocal_330 = false;
	GRAPHICS::SET_SEETHROUGH(false);
	func_836();
	if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
	}
	TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
	TASK::TASK_HELI_MISSION(0, Local_403.f_0, 0, 0, -1562.2906f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1f, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_463[2], iLocal_389);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
	STREAMING::START_PLAYER_SWITCH(Local_393.f_0, iLocal_463[2], 0, 3);
	iLocal_213 = 11;
	return 0;
}

void func_886()//Position - 0x958CB
{
	switch (iLocal_263)
	{
		case 0:
			switch (__LIB_14__::func_466())
			{
				case 0:
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_ENDM", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 6f, 4);
						iLocal_263++;
					}
					break;
				case 1:
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_ENDF", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 6f, 4);
						iLocal_263++;
					}
					break;
			}
			break;
		case 1:
			if (!__LIB_0__::func_75())
			{
				iLocal_242 = MISC::GET_GAME_TIMER();
				iLocal_733 = 9;
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
	{
		func_876();
	}
	func_532();
	__LIB_28__::func_220(&Local_518);
	func_557(0);
	func_887();
	func_874(Local_403.f_0, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 12000f), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 500f), 1065353216);
}

void func_887()//Position - 0x959B9
{
	if ((__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()) == 0 && !Local_518.f_0 == 2) && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || (func_796() && Local_518.f_0 != 1)))
	{
		if ((((PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || iLocal_222) || iLocal_335) || iLocal_228) && (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE() || (func_796() && Local_518.f_0 != 1)))
		{
			if (!iLocal_219)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-41f, 1f);
				iLocal_219 = 1;
			}
			if (!bLocal_333)
			{
				if (!__LIB_0__::func_1("FS_SNIPEHELP"))
				{
					__LIB_0__::func_190("FS_SNIPEHELP");
				}
			}
			if (GRAPHICS::GET_USINGSEETHROUGH())
			{
				if (__LIB_0__::func_1("FS_SNIPEHELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				bLocal_333 = true;
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
				{
					AUDIO::START_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
				}
			}
			else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
			}
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/))
			{
				if (bLocal_330)
				{
					bLocal_330 = false;
				}
				else
				{
					bLocal_330 = true;
				}
			}
			if (bLocal_330)
			{
				__LIB_0__::func_646();
				GRAPHICS::SET_SEETHROUGH(true);
			}
			else
			{
				GRAPHICS::SET_SEETHROUGH(false);
			}
		}
		else
		{
			bLocal_330 = false;
			GRAPHICS::SET_SEETHROUGH(false);
			if (__LIB_0__::func_1("FS_SNIPEHELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!GRAPHICS::GET_USINGSEETHROUGH())
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
				{
					AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
				}
			}
		}
	}
}

int func_891()//Position - 0x95B63
{
	int iVar0;
	iVar0 = 0;
	RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
	if (iLocal_734 == 0)
	{
		__LIB_0__::func_499(180, 0);
		STREAMING::STREAMVOL_DELETE(iLocal_327);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(0, 0f);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(1, 1f);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(2, 1f);
		GRAPHICS::SEETHROUGH_SET_HEATSCALE(3, 1f);
		STREAMING::SET_FOCUS_POS_AND_VEL(-1664.92f, 4438.81f, 80f, 0f, 0f, 0f);
		iLocal_352 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_391.f_0 - 1))
		{
			Local_391[iVar0 /*33*/].f_27 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			func_528(&(Local_391[iVar0 /*33*/]));
			HUD::REMOVE_BLIP(&(Local_391[iVar0 /*33*/].f_2));
			PED::SET_PED_DIES_IN_WATER(Local_391[iVar0 /*33*/], false);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_391[iVar0 /*33*/], true, 1);
			iVar0++;
		}
		PATHFIND::SET_ROADS_IN_AREA(Local_377, Local_378, false, true);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
		STREAMING::REQUEST_ANIM_DICT(sLocal_5734);
		bLocal_330 = false;
		iLocal_356 = 0;
		iLocal_357 = 0;
		iLocal_358 = 0;
		iLocal_359 = 0;
		iLocal_349 = 0;
		iLocal_360 = 0;
		__LIB_0__::func_671(1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_403.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_362);
			ENTITY::FREEZE_ENTITY_POSITION(Local_403.f_0, false);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 4, sLocal_362, true);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, true, true, false);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_403.f_0);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
		CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-80f, 80f);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, true);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			iLocal_228 = 1;
		}
		else
		{
			iLocal_222 = 1;
		}
		__LIB_31__::func_991(iLocal_463[1], joaat("WEAPON_CARBINERIFLE"), 100, 0, 0, 1);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			__LIB_17__::func_195(0, 1, 0, -12f, -41f, 3000, 0);
		}
		else
		{
			func_509(0, -12f, -41f, 0);
		}
		__LIB_17__::func_78(&iLocal_463, 0, 0);
		__LIB_17__::func_78(&iLocal_463, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(Local_393.f_0))
		{
			iLocal_255 = 200;
			__LIB_16__::func_880(&iLocal_463, 2, 0);
			func_32(&iLocal_463, 2, 1);
			Local_518.f_1 = 2;
			Local_518.f_3 = Local_393.f_0;
			func_30(&Local_518);
			Local_518.f_0 = 0;
			func_16(&Local_518, &iLocal_463, 0, 1, 1, 1, 0, 3000);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
			ENTITY::SET_ENTITY_LOD_DIST(Local_393.f_0, 400);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_393.f_0);
			ENTITY::SET_ENTITY_COORDS(Local_393.f_0, -1679.8206f, 4455.988f, 1.2653f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_393.f_0, 114.22f);
			TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "fra0_ig_12_chop_waiting_a", 8f, -8f, -1, 1, 0f, false, false, false);
			PED::SET_PED_CAN_RAGDOLL(Local_393.f_0, false);
		}
		TASK::CLEAR_PED_TASKS(iLocal_463[1]);
		PED::SET_PED_USING_ACTION_MODE(iLocal_463[1], true, -1, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_463[1], true, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_463[1], 300);
		AUDIO::START_AUDIO_SCENE("EXILE_2_SNIPE_STAGE");
		AUDIO::TRIGGER_MUSIC_EVENT("EXL2_SNIPE_START");
		iLocal_334 = 0;
		func_557(0);
		__LIB_17__::func_789(3, "start of sniper section", 0, 0, 0, 1);
		iLocal_734 = 1;
	}
	if (iLocal_734 == 1)
	{
		switch (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 58, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 23 /*INPUT_ENTER*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 21 /*INPUT_SPRINT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 107, true);
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
				}
				WEAPON::SET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), 6);
				break;
			case 1:
				break;
		}
		if (func_963())
		{
			iLocal_733 = 8;
			return 1;
		}
		if (!iLocal_216)
		{
			func_955();
			func_789();
			func_557(0);
			func_887();
			func_951();
			func_938();
			func_937();
			func_936();
			if (iLocal_241 >= 4)
			{
				func_532();
				__LIB_28__::func_220(&Local_518);
				func_784();
			}
			if (__LIB_14__::func_466() == 0)
			{
				CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-80f, 80f);
				CAM::SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(0.3f);
				WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), 200, false);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
			}
			if (!iLocal_217)
			{
				func_874(Local_403.f_0, 5000f, 31000f, 1065353216);
			}
			else
			{
				func_874(Local_403.f_0, (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 12000f), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "lkexile2") - 500f), 0.9f);
			}
		}
		if (iLocal_216)
		{
			func_897();
		}
		if (__LIB_14__::func_466() == 0)
		{
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			}
			PLAYER::DISABLE_CAMERA_VIEW_MODE_CYCLE(PLAYER::PLAYER_ID());
		}
	}
	if (iLocal_734 == 2)
	{
		__LIB_19__::func_933(&iLocal_684);
		__LIB_0__::func_325();
		iLocal_734 = 0;
		iLocal_733 = 13;
	}
	if (iLocal_734 == 3)
	{
		switch (iLocal_254)
		{
			case 0:
				if (!ENTITY::DOES_ENTITY_EXIST(Local_391[3 /*33*/]))
				{
					__LIB_0__::func_429();
					iVar0 = 0;
					while (iVar0 <= 2)
					{
						if (!PED::IS_PED_INJURED(Local_391[iVar0 /*33*/]))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_391[iVar0 /*33*/], 2, 0);
						}
						iVar0++;
					}
					if (!func_892())
					{
						Local_391[3 /*33*/].f_11 = { -1541.2722f, 4489.3423f, 18.4372f };
						Local_391[3 /*33*/].f_20 = 187.5681f;
						Local_766 = { -1552.5f, 4451f, 38.3f };
					}
					func_528(&(Local_391[3 /*33*/]));
					ENTITY::SET_ENTITY_PROOFS(Local_391[3 /*33*/], true, true, true, true, true, false, false, false);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_391[3 /*33*/], false);
					HUD::REMOVE_BLIP(&(Local_391[3 /*33*/].f_2));
					if (__LIB_14__::func_466() == 0)
					{
						ENTITY::SET_ENTITY_PROOFS(Local_391[3 /*33*/], true, true, true, true, true, false, false, false);
					}
					PED::SET_PED_HEATSCALE_OVERRIDE(Local_391[3 /*33*/], 1E-45f);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_391[3 /*33*/], true, 1);
					__LIB_0__::func_222(&uLocal_519, 6, Local_391[3 /*33*/], "oneil" /* GXT: O'Neil Way */, 0, 1);
					iLocal_241 = 2;
					iLocal_359 = 2;
					func_523("TM44_TWT", 1);
					func_523("TM44_WATER", 1);
					func_523("TM44_DWATER", 1);
					func_523("TM44_GWOOD", 1);
					func_523("TM44_DEADR", 1);
					iLocal_254++;
				}
				break;
			case 1:
				if (iLocal_241 > 2)
				{
					switch (__LIB_14__::func_466())
					{
						case 0:
							if (iLocal_247 == 0)
							{
								__LIB_36__::func_931(&iLocal_463, 1);
								func_853();
								iLocal_247 = 1;
								iLocal_254++;
							}
							break;
						case 1:
							if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
							{
								ENTITY::SET_ENTITY_HEALTH(Local_391[3 /*33*/], 2, 0);
								iLocal_254 = 3;
							}
							break;
						}
				}
				break;
			case 2:
				if (!CAM::DOES_CAM_EXIST(Local_503.f_9))
				{
					if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_391[3 /*33*/], 2, 0);
						iLocal_254 = 3;
					}
				}
				break;
			case 3:
				break;
			}
	}
	return 0;
}

int func_892()//Position - 0x96248
{
	float fVar0;
	float fVar1;
	if (CAM::GET_GAMEPLAY_CAM_FOV() < 15f)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Local_391[3 /*33*/].f_11, &fVar0, &fVar1);
		if (MISC::ABSF((fVar0 - 0.5f)) < 0.3f)
		{
			if (MISC::ABSF((fVar1 - 0.5f)) < 0.3f)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_897()//Position - 0x9634E
{
	int iVar0;
	if (__LIB_0__::func_645(1000))
	{
		iLocal_249 = 22;
	}
	iVar0 = 0;
	switch (iLocal_249)
	{
		case 0:
			if (!CAM::DOES_CAM_EXIST(Local_503.f_9))
			{
				if (func_740(0, 0, 1))
				{
					if (!__LIB_14__::func_466() == 0)
					{
						__LIB_36__::func_931(&iLocal_463, 0);
						__LIB_31__::func_990(&iLocal_463, 1, 0, 0);
					}
					func_883(&Local_518, &iLocal_463, 1, 0, 0, 0, 3);
					iLocal_334 = 0;
					CAM::DESTROY_CAM(iLocal_383, false);
					iLocal_352 = 0;
					GRAPHICS::SET_SEETHROUGH(false);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
					}
					Local_398.f_27 = 1;
					if (ENTITY::DOES_ENTITY_EXIST(Local_398.f_0))
					{
						PED::DELETE_PED(&Local_398);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_398.f_1);
					if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
					{
						Local_391[3 /*33*/].f_11 = { -1541.2722f, 4489.3423f, 18.4372f };
						Local_391[3 /*33*/].f_20 = 187.5681f;
						Local_766 = { -1552.5f, 4451f, 38.3f };
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[3 /*33*/]);
						ENTITY::SET_ENTITY_COORDS(Local_391[3 /*33*/], Local_391[3 /*33*/].f_11, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_391[3 /*33*/], Local_391[3 /*33*/].f_20);
						ENTITY::SET_ENTITY_PROOFS(Local_391[3 /*33*/], true, true, true, true, true, false, false, false);
						iLocal_359 = 7;
					}
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 7, sLocal_362, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 4500f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_354))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_354, false);
					}
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_297))
					{
						AUDIO::STOP_SOUND(iLocal_297);
					}
					ENTITY::DELETE_ENTITY(&iLocal_737);
					MISC::CLEAR_AREA(-1532.08f, 4416.26f, 65.35f, 200f, true, false, false, false);
					Local_446.f_3 = { -1532.08f, 4416.26f, 65.35f };
					Local_306 = { -1474.7f, 4385.4f, 93.9f };
					Local_307 = { __LIB_0__::func_79(Local_306 - Local_446.f_3) };
					Local_446.f_12 = MISC::ATAN2(Local_307.f_2, SYSTEM::VMAG(Local_307.f_0, Local_307.f_1, 0f));
					Local_446.f_12.f_2 = __LIB_17__::func_83((MISC::ATAN2(Local_307.f_1, Local_307.f_0) - 90f));
					iLocal_737 = OBJECT::CREATE_OBJECT(Local_446.f_2, Local_446.f_3, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_737, Local_446.f_12, 2, true);
					iLocal_354 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_rpg_trail", iLocal_737, 0f, -0.2f, 0f, 0f, 0f, 0f, 1f, false, false, false);
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_297, "Fire_Missile_Loop", iLocal_737, "EXILE_2_SOUNDS", false, 0);
					iVar0 = 0;
					while (iVar0 <= (Local_392.f_0 - 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_392[iVar0 /*33*/]))
						{
							PED::DELETE_PED(&(Local_392[iVar0 /*33*/]));
							Local_392[iVar0 /*33*/].f_27 = 0;
						}
						iVar0++;
					}
					iVar0 = 10;
					while (iVar0 <= (Local_392.f_0 - 1))
					{
						if (iVar0 != 15)
						{
							func_514(&(Local_392[iVar0 /*33*/]));
							iLocal_250[iVar0] = 0;
						}
						iVar0++;
					}
					iLocal_380 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1528.0784f, 4415.43f, 67.79733f, 16.769043f, 0.011513f, -122.88832f, 27.570831f, true, 2);
					CAM::SET_CAM_PARAMS(iLocal_380, -1514.4948f, 4405.6094f, 75.44726f, 16.155361f, 0.011514f, -115.52065f, 27.570831f, 2000, 0, 0, 2);
					CAM::SHAKE_CAM(iLocal_380, "ROAD_VIBRATION_SHAKE", 2f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					RECORDING::REPLAY_START_EVENT(3);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE");
					}
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
					}
					AUDIO::START_AUDIO_SCENE("EXILE_2_RPG_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_RPG_HELI");
					iLocal_249++;
				}
			}
			break;
		case 1:
			Local_446.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_737, true) };
			Local_768 = { Local_307 * Vector(35f, 35f, 35f) };
			Local_446.f_12 = MISC::ATAN2(Local_307.f_2, SYSTEM::VMAG(Local_307.f_0, Local_307.f_1, 0f));
			Local_446.f_12.f_2 = __LIB_17__::func_83((MISC::ATAN2(Local_307.f_1, Local_307.f_0) - 90f));
			ENTITY::SET_ENTITY_VELOCITY(iLocal_737, Local_768);
			ENTITY::SET_ENTITY_ROTATION(iLocal_737, Local_446.f_12, 2, true);
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_403.f_0) > 3800f)
			{
				if (!func_535("TM44_ROCKET"))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_ROCKET", 7, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
						func_523("TM44_ROCKET", 1);
					}
				}
			}
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_403.f_0) > 5800f)
			{
				CAM::DESTROY_CAM(iLocal_380, false);
				iLocal_380 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1458.3518f, 4370.578f, 95.68184f, -9.241117f, 1.31385f, 43.57708f, 23.889305f, true, 2);
				CAM::SET_CAM_PARAMS(iLocal_380, -1447.8287f, 4363.3467f, 104.088165f, -11.966377f, 1.313851f, 46.56541f, 23.889305f, 2000, 0, 0, 2);
				iLocal_327 = STREAMING::STREAMVOL_CREATE_SPHERE(-1531.9f, 4288f, 103.2f, 100f, 12, 127);
				iLocal_249++;
			}
			break;
		case 2:
			Local_446.f_3 = { ENTITY::GET_ENTITY_COORDS(iLocal_737, true) };
			if (!func_877(Local_446.f_3, Local_306, Local_307 * FtoV(MISC::GET_FRAME_TIME()) * Vector(35f, 35f, 35f)))
			{
				Local_768 = { Local_307 * Vector(35f, 35f, 35f) };
				ENTITY::SET_ENTITY_VELOCITY(iLocal_737, Local_768);
				ENTITY::SET_ENTITY_ROTATION(iLocal_737, Local_446.f_12, 2, true);
			}
			else
			{
				FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_737, true), 4, 1f, true, false, 1f, false);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_354))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_354, false);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_297))
				{
					AUDIO::STOP_SOUND(iLocal_297);
				}
				ENTITY::DELETE_ENTITY(&iLocal_737);
				CAM::SHAKE_CAM(iLocal_380, "sky_diving_shake", 1f);
				iLocal_249++;
			}
			break;
		case 3:
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_403.f_0) > 7300f)
			{
				iLocal_242 = MISC::GET_GAME_TIMER();
				iLocal_249++;
			}
			break;
		case 4:
			if (__LIB_0__::func_611(&iLocal_242, 750))
			{
				iLocal_351 = 5000;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 1, "lkexile2", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 10000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
				iLocal_217 = 1;
				iLocal_331 = 0;
				iLocal_239 = 8;
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
				iLocal_222 = 0;
				iLocal_335 = 0;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
				ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
				PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 0.25f);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
				PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
				RECORDING::REPLAY_STOP_EVENT();
				__LIB_17__::func_195(0, 1, 0, 0f, 0f, 3000, 0);
				STREAMING::STREAMVOL_DELETE(iLocal_327);
				func_30(&Local_518);
				func_557(1);
				iLocal_216 = 0;
				iLocal_334 = 0;
				__LIB_36__::func_931(&iLocal_463, 1);
				iLocal_769 = 2;
				func_898(&iLocal_2011);
				iLocal_249 = 23;
			}
			break;
		case 5:
			break;
		case 22:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
				}
			}
			else
			{
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_354))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_354, false);
				}
				ENTITY::DELETE_ENTITY(&iLocal_737);
				MISC::CLEAR_AREA(-1532.08f, 4416.26f, 65.35f, 200f, true, false, false, false);
				iLocal_351 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 1, "lkexile2", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 10000f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
				iLocal_217 = 1;
				iLocal_331 = 0;
				iLocal_239 = 8;
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
				iLocal_222 = 0;
				iLocal_335 = 0;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_DESIRED_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
				ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
				PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 0.25f);
				PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
				PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
				func_509(0, 0f, 0f, 0);
				STREAMING::STREAMVOL_DELETE(iLocal_327);
				func_557(0);
				iLocal_216 = 0;
				iLocal_334 = 0;
				__LIB_36__::func_931(&iLocal_463, 1);
				iLocal_769 = 2;
				func_898(&iLocal_2011);
				iLocal_249 = 23;
			}
			break;
		case 23:
			break;
	}
	return 0;
}

int func_898(int iParam0)//Position - 0x96BD1
{
	int iVar0;
	float fVar1;
	int iVar2;
	switch (iLocal_769)
	{
		case 0:
			break;
		case 2:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			func_933(iParam0, PLAYER::PLAYER_PED_ID(), iLocal_463[1]);
			__LIB_16__::func_29(iParam0);
			CAM::SET_CAM_ACTIVE(iParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[1]))
			{
				iVar2 = iLocal_463[1];
			}
			else
			{
				iVar2 = PLAYER::PLAYER_PED_ID();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar2, false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iVar2, joaat("WEAPON_UNARMED"), 0, true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(iVar2, joaat("WEAPON_UNARMED"), true);
					PED::SET_PED_USING_ACTION_MODE(iVar2, false, -1, 0);
				}
			}
			Local_5747 = { Local_5747 };
			Local_5748 = { Local_5748 };
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(Local_403.f_0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(Local_403.f_0, false))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
					{
						ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_403.f_0, "seat_dside_r"), Local_5747, Local_5748, false, false, false, false, 2, true, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_5749, "ex02_heli_sniper_idle_michael", 1000f, -1000f, -1, 0, 0f, false, 4, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
			}
			iLocal_5746 = 0;
			iLocal_5757 = 0;
			iLocal_5758 = 0;
			iLocal_5759 = 0;
			bLocal_5760 = true;
			bLocal_5761 = true;
			bLocal_5762 = true;
			iLocal_5743 = 0;
			iLocal_5744 = 0;
			iLocal_5765 = 0;
			iLocal_5766 = 0;
			iLocal_769 = 3;
		case 3:
			if (CAM::IS_CAM_ACTIVE(iParam0->f_1))
			{
				iVar0 = func_903(iParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1);
				if (iVar0 >= 1)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5736);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_5737, 1f);
				}
				if (!iLocal_5757)
				{
					if (iVar0 >= iParam0->f_1218)
					{
						Local_503.f_18 = 1;
						Local_503.f_19 = 0;
						iLocal_5757 = 1;
					}
				}
				if (!iLocal_5758)
				{
					if (fVar1 >= fLocal_5753)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[1]))
						{
							iVar2 = iLocal_463[1];
						}
						else
						{
							iVar2 = PLAYER::PLAYER_PED_ID();
						}
						if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::DOES_ENTITY_EXIST(Local_393.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar2, false) && !ENTITY::IS_ENTITY_DEAD(Local_393.f_0, false))
							{
								TASK::CLEAR_PED_TASKS(iVar2);
								TASK::CLEAR_PED_TASKS(Local_393.f_0);
								iLocal_5752 = PED::CREATE_SYNCHRONIZED_SCENE(Local_5750, Local_5751, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iVar2, iLocal_5752, sLocal_5749, "ex02_heli_switch_chop_run_franklin", 1000f, fLocal_5755, 0, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_393.f_0, iLocal_5752, sLocal_5749, "ex02_heli_switch_chop_run_chop", 1000f, fLocal_5756, 2, 0, 1000f, 0);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_5752, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar2, false, false);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_393.f_0, false, false);
							}
						}
						iLocal_5758 = 1;
					}
				}
				if (!iLocal_5759)
				{
					if (fVar1 >= fLocal_5754)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_5752))
						{
							iLocal_5759 = 1;
						}
					}
				}
				if (!iLocal_230)
				{
					if (fVar1 >= fLocal_5763)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_293 = MISC::GET_GAME_TIMER();
						iLocal_230 = 1;
					}
				}
				else if (!iLocal_232)
				{
					if (__LIB_0__::func_611(&iLocal_293, 200))
					{
						iLocal_5742 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_5742, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_232 = 1;
					}
				}
				fLocal_5740 = fLocal_5740;
				iLocal_5744 = iLocal_5744;
				iLocal_5743 = iLocal_5743;
				fLocal_5740 = fLocal_5740;
				fLocal_5741 = fLocal_5741;
				if (!iLocal_5765)
				{
					if (fVar1 >= fLocal_5763)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, false);
						iLocal_5765 = 1;
					}
				}
				fLocal_5764 = fLocal_5764;
				if (!iLocal_5766)
				{
					if (fVar1 >= 0.5f)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinMid", 0, false);
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_5742))
						{
							AUDIO::STOP_SOUND(iLocal_5742);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_5766 = 1;
					}
				}
				if (!iLocal_231)
				{
					if (fVar1 >= 0.85f)
					{
						iLocal_231 = 1;
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					if (fVar1 >= 0.9f)
					{
						__LIB_17__::func_8(&uLocal_738, PLAYER::PLAYER_PED_ID(), 1, 1f, 1000, 1000, 700, 700, 1045220557);
						__LIB_15__::func_247(&uLocal_738, 25f, 0f, 0f);
						__LIB_15__::func_966(&uLocal_738, 0, 1, 1, 0, 0, 0);
						iLocal_769 = 9;
					}
				}
				else if (fVar1 >= 1f)
				{
					iLocal_769 = 9;
				}
			}
			else
			{
				return 0;
			}
			break;
		case 9:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				if (__LIB_15__::func_966(&uLocal_738, 0, 1, 1, 0, 0, 0))
				{
					AUDIO::STOP_SOUND(iLocal_5742);
					if (CAM::DOES_CAM_EXIST(iParam0->f_1))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
						CAM::DESTROY_CAM(iParam0->f_1, false);
					}
					MISC::SET_TIME_SCALE(1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5736);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_5737, 1f);
					iLocal_242 = MISC::GET_GAME_TIMER();
					iLocal_769 = 10;
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_5742);
				MISC::SET_TIME_SCALE(1f);
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(iParam0->f_1))
				{
					CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
					CAM::DESTROY_CAM(iParam0->f_1, false);
				}
				HUD::DISPLAY_RADAR(true);
				HUD::DISPLAY_HUD(true);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5736);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_5737, 1f);
				iLocal_242 = MISC::GET_GAME_TIMER();
				iLocal_769 = 10;
			}
			break;
		case 10:
			if (bLocal_5761)
			{
				if (__LIB_0__::func_611(&iLocal_242, 700) || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					iLocal_255 = 200;
					func_532();
					bLocal_5761 = false;
				}
			}
			if (bLocal_5762)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_393.f_0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_393.f_0, false))
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_393.f_0))
						{
							TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_393.f_0, 3f, false);
							bLocal_5762 = false;
						}
					}
				}
			}
			if (bLocal_5760)
			{
				if (SYSTEM::TIMERA() > iLocal_5767)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					bLocal_5760 = false;
				}
			}
			if (bLocal_5760)
			{
			}
			if (bLocal_5761)
			{
			}
			if (bLocal_5762)
			{
			}
			if ((bLocal_5760 == 0 && bLocal_5761 == 0) && bLocal_5762 == 0)
			{
				iLocal_769 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

int func_903(var uParam0)//Position - 0x97623
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_65 = __LIB_0__::func_504(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			case 1:
				fLocal_65 = __LIB_15__::func_924(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 2:
				fLocal_65 = __LIB_15__::func_923(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			case 3:
				fLocal_65 = __LIB_15__::func_940(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, __LIB_0__::func_331((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_65);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		__LIB_15__::func_922(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						case 2:
							sVar2 = "switch_cam_1";
							break;
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							__LIB_15__::func_958(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						case 3:
							__LIB_15__::func_958(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), false);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(__LIB_15__::func_921(), ""))
				{
					__LIB_15__::func_958(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				__LIB_15__::func_920(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			__LIB_15__::func_920(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::RESET_ADAPTATION(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, true);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		__LIB_15__::func_919(0, 0, 1, 1);
	}
	else
	{
		__LIB_15__::func_919(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	__LIB_15__::func_918(uParam0);
	return iVar0;
}

void func_933(var uParam0, int iParam1, var uParam2)//Position - 0x9917A
{
	if (!*uParam0)
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { -1.8104f, 1.2455f, -0.3514f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { 0.4595f, -0.4049f, 0.7081f };
			uParam0->f_10[0 /*57*/].f_18 = 1;
			uParam0->f_10[0 /*57*/].f_19 = 1;
			uParam0->f_10[0 /*57*/].f_20 = 1;
			uParam0->f_10[0 /*57*/].f_21 = 41f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 0f;
			uParam0->f_10[0 /*57*/].f_53 = 0;
			uParam0->f_10[0 /*57*/].f_23 = 0f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 1;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1000;
			uParam0->f_10[1 /*57*/].f_6 = { -1.8104f, 1.2455f, -0.7f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { 0.4595f, -0.4049f, 0.7081f };
			uParam0->f_10[1 /*57*/].f_18 = 1;
			uParam0->f_10[1 /*57*/].f_19 = 1;
			uParam0->f_10[1 /*57*/].f_20 = 1;
			uParam0->f_10[1 /*57*/].f_21 = 41f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 0f;
			uParam0->f_10[1 /*57*/].f_53 = 0;
			uParam0->f_10[1 /*57*/].f_23 = 0f;
			uParam0->f_10[1 /*57*/].f_28 = 2;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 1;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 600;
			uParam0->f_10[2 /*57*/].f_6 = { -0.316f, 2.77f, -3.1371f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { 10.3624f, 0.9979f, -172.5415f };
			uParam0->f_10[2 /*57*/].f_18 = 0;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 60f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 0;
			uParam0->f_10[2 /*57*/].f_23 = 0f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 0f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 1;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 0f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_54 = 1;
			uParam0->f_10[4 /*57*/].f_2 = 3;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 0;
			uParam0->f_10[4 /*57*/].f_6 = { -1680.621f, 4452.503f, 4.8078f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { 4.134039f, 0f, 71.84638f };
			uParam0->f_10[4 /*57*/].f_18 = 0;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 29.8f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 1f;
			uParam0->f_10[4 /*57*/].f_53 = 0;
			uParam0->f_10[4 /*57*/].f_23 = 0f;
			uParam0->f_10[4 /*57*/].f_28 = 1;
			uParam0->f_10[4 /*57*/].f_29 = 1f;
			uParam0->f_10[4 /*57*/].f_32 = 0f;
			uParam0->f_10[4 /*57*/].f_30 = 1;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 0f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 3;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 600;
			uParam0->f_10[5 /*57*/].f_6 = { -1680.621f, 4452.503f, 2.3f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 4.134039f, 0f, 71.84638f };
			uParam0->f_10[5 /*57*/].f_18 = 0;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 29.5f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 0;
			uParam0->f_10[5 /*57*/].f_23 = 0f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 0f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[6 /*57*/].f_2 = 3;
			uParam0->f_10[6 /*57*/].f_3 = -1;
			uParam0->f_10[6 /*57*/].f_4 = 0;
			uParam0->f_10[6 /*57*/].f_5 = 850;
			uParam0->f_10[6 /*57*/].f_6 = { -1680.621f, 4452.503f, 2.33f };
			uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_12 = 0f;
			uParam0->f_10[6 /*57*/].f_16 = 0f;
			uParam0->f_10[6 /*57*/].f_17 = 0;
			uParam0->f_10[6 /*57*/].f_9 = { 4.134039f, 0f, 71.84638f };
			uParam0->f_10[6 /*57*/].f_18 = 0;
			uParam0->f_10[6 /*57*/].f_19 = 0;
			uParam0->f_10[6 /*57*/].f_20 = 0;
			uParam0->f_10[6 /*57*/].f_21 = 29.1f;
			uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_27 = 0;
			uParam0->f_10[6 /*57*/].f_50 = 0;
			uParam0->f_10[6 /*57*/].f_51 = 0f;
			uParam0->f_10[6 /*57*/].f_52 = 0f;
			uParam0->f_10[6 /*57*/].f_22 = 0f;
			uParam0->f_10[6 /*57*/].f_53 = 0;
			uParam0->f_10[6 /*57*/].f_23 = 0f;
			uParam0->f_10[6 /*57*/].f_28 = 0;
			uParam0->f_10[6 /*57*/].f_29 = 0f;
			uParam0->f_10[6 /*57*/].f_32 = 0f;
			uParam0->f_10[6 /*57*/].f_30 = 1;
			uParam0->f_10[6 /*57*/].f_31 = 0;
			uParam0->f_10[6 /*57*/].f_33 = 1f;
			uParam0->f_10[6 /*57*/].f_34 = 0;
			uParam0->f_10[6 /*57*/].f_35 = 0f;
			uParam0->f_10[6 /*57*/].f_36 = 0;
			uParam0->f_10[6 /*57*/].f_37 = 0;
			uParam0->f_10[6 /*57*/].f_39 = 0f;
			uParam0->f_10[6 /*57*/].f_40 = 0f;
			uParam0->f_10[6 /*57*/].f_41 = 0;
			uParam0->f_10[6 /*57*/].f_42 = 0;
			uParam0->f_10[6 /*57*/].f_43 = 0;
			uParam0->f_10[6 /*57*/].f_38 = 0f;
			uParam0->f_10[6 /*57*/].f_45 = 0;
			uParam0->f_10[6 /*57*/].f_46 = 0;
			uParam0->f_10[6 /*57*/].f_47 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { -1.9066f, 2.8135f, -0.0906f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { -0.0185f, -0.021f, 0.1023f };
			uParam0->f_10[0 /*57*/].f_18 = 1;
			uParam0->f_10[0 /*57*/].f_19 = 0;
			uParam0->f_10[0 /*57*/].f_20 = 0;
			uParam0->f_10[0 /*57*/].f_21 = 60f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 0f;
			uParam0->f_10[0 /*57*/].f_53 = 0;
			uParam0->f_10[0 /*57*/].f_23 = 0f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 1;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1000;
			uParam0->f_10[1 /*57*/].f_6 = { -1.1243f, 3.188f, -0.2969f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { 0.0483f, 0.102f, 0.0414f };
			uParam0->f_10[1 /*57*/].f_18 = 1;
			uParam0->f_10[1 /*57*/].f_19 = 0;
			uParam0->f_10[1 /*57*/].f_20 = 0;
			uParam0->f_10[1 /*57*/].f_21 = 60f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 0f;
			uParam0->f_10[1 /*57*/].f_53 = 0;
			uParam0->f_10[1 /*57*/].f_23 = 0f;
			uParam0->f_10[1 /*57*/].f_28 = 2;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 1;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 600;
			uParam0->f_10[2 /*57*/].f_6 = { -0.316f, 2.77f, -3.1371f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { 10.3624f, 0.9979f, -172.5415f };
			uParam0->f_10[2 /*57*/].f_18 = 0;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 60f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 0;
			uParam0->f_10[2 /*57*/].f_23 = 0f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 0f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 1;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 0f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_54 = 1;
			uParam0->f_10[4 /*57*/].f_2 = 3;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 0;
			uParam0->f_10[4 /*57*/].f_6 = { -1680.972f, 4453.013f, 4.8078f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { 6.0105f, 0f, 85.0164f };
			uParam0->f_10[4 /*57*/].f_18 = 0;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 40f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 1f;
			uParam0->f_10[4 /*57*/].f_53 = 0;
			uParam0->f_10[4 /*57*/].f_23 = 0f;
			uParam0->f_10[4 /*57*/].f_28 = 1;
			uParam0->f_10[4 /*57*/].f_29 = 1f;
			uParam0->f_10[4 /*57*/].f_32 = 0f;
			uParam0->f_10[4 /*57*/].f_30 = 1;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 0f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 3;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 600;
			uParam0->f_10[5 /*57*/].f_6 = { -1681.2314f, 4453.0356f, 2.3345f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 6.0105f, 0f, 85.0164f };
			uParam0->f_10[5 /*57*/].f_18 = 0;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 40f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 0;
			uParam0->f_10[5 /*57*/].f_23 = 0f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 0f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[6 /*57*/].f_2 = 3;
			uParam0->f_10[6 /*57*/].f_3 = -1;
			uParam0->f_10[6 /*57*/].f_4 = 0;
			uParam0->f_10[6 /*57*/].f_5 = 850;
			uParam0->f_10[6 /*57*/].f_6 = { -1681.2314f, 4453.0356f, 2.3345f };
			uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_12 = 0f;
			uParam0->f_10[6 /*57*/].f_16 = 0f;
			uParam0->f_10[6 /*57*/].f_17 = 0;
			uParam0->f_10[6 /*57*/].f_9 = { 6.0105f, 0f, 85.0164f };
			uParam0->f_10[6 /*57*/].f_18 = 0;
			uParam0->f_10[6 /*57*/].f_19 = 0;
			uParam0->f_10[6 /*57*/].f_20 = 0;
			uParam0->f_10[6 /*57*/].f_21 = 40f;
			uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[6 /*57*/].f_27 = 0;
			uParam0->f_10[6 /*57*/].f_50 = 0;
			uParam0->f_10[6 /*57*/].f_51 = 0f;
			uParam0->f_10[6 /*57*/].f_52 = 0f;
			uParam0->f_10[6 /*57*/].f_22 = 0f;
			uParam0->f_10[6 /*57*/].f_53 = 0;
			uParam0->f_10[6 /*57*/].f_23 = 0f;
			uParam0->f_10[6 /*57*/].f_28 = 0;
			uParam0->f_10[6 /*57*/].f_29 = 0f;
			uParam0->f_10[6 /*57*/].f_32 = 0f;
			uParam0->f_10[6 /*57*/].f_30 = 1;
			uParam0->f_10[6 /*57*/].f_31 = 0;
			uParam0->f_10[6 /*57*/].f_33 = 1f;
			uParam0->f_10[6 /*57*/].f_34 = 0;
			uParam0->f_10[6 /*57*/].f_35 = 0f;
			uParam0->f_10[6 /*57*/].f_36 = 0;
			uParam0->f_10[6 /*57*/].f_37 = 0;
			uParam0->f_10[6 /*57*/].f_39 = 0f;
			uParam0->f_10[6 /*57*/].f_40 = 0f;
			uParam0->f_10[6 /*57*/].f_41 = 0;
			uParam0->f_10[6 /*57*/].f_42 = 0;
			uParam0->f_10[6 /*57*/].f_43 = 0;
			uParam0->f_10[6 /*57*/].f_38 = 0f;
			uParam0->f_10[6 /*57*/].f_45 = 0;
			uParam0->f_10[6 /*57*/].f_46 = 0;
			uParam0->f_10[6 /*57*/].f_47 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		}
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 1;
		uParam0->f_3 = 1;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile2_ScopeToFranklin.txt";
		uParam0->f_1225 = "CameraInfo_Exile2_ScopeToFranklin.xml";
		*uParam0 = 1;
	}
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_936()//Position - 0x9A8F3
{
	float fVar0;
	float fVar1;
	if (iLocal_241 < 3)
	{
		if (!PED::IS_PED_INJURED(Local_398.f_0))
		{
			switch (iLocal_292)
			{
				case 0:
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_398.f_0))
					{
						if (!iLocal_335)
						{
							if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
							{
								fVar0 = 0f;
								fVar1 = 0f;
								GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(Local_398.f_0, true), &fVar0, &fVar1);
								if (MISC::ABSF((fVar0 - 0.5f)) < 0.18f)
								{
									if (MISC::ABSF((fVar1 - 0.5f)) < 0.18f)
									{
										Local_398.f_24 = MISC::GET_GAME_TIMER();
										iLocal_292++;
									}
								}
							}
						}
					}
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_398.f_0, true), 4f, true))
					{
						PED::DELETE_PED(&Local_398);
					}
					break;
				case 1:
					if (bLocal_330)
					{
						if (__LIB_0__::func_611(&(Local_398.f_24), 2000))
						{
							PED::DELETE_PED(&Local_398);
							iLocal_292++;
						}
					}
					else if (__LIB_0__::func_611(&(Local_398.f_24), 1300))
					{
						PED::DELETE_PED(&Local_398);
						iLocal_292++;
					}
					break;
				case 2:
					break;
			}
		}
		else if (!Global_96900)
		{
			if (!Local_398.f_27)
			{
				STREAMING::REQUEST_MODEL(Local_398.f_1);
				if (STREAMING::HAS_MODEL_LOADED(Local_398.f_1))
				{
					func_514(&Local_398);
					ENTITY::SET_ENTITY_PROOFS(Local_398.f_0, true, true, true, true, true, true, false, false);
					Global_96900 = 1;
				}
			}
		}
	}
}

void func_937()//Position - 0x9AA41
{
	int iVar0;
	iVar0 = 1;
	while (iVar0 <= (Local_392.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_392[iVar0 /*33*/]))
		{
			if (!iLocal_250[iVar0] >= 22)
			{
				if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_SMART_FLEE_PED")))
				{
					if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_392[iVar0 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), true) < 2f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_392[iVar0 /*33*/], Local_391[0 /*33*/], 50f, 5000, false, false);
						iLocal_250[iVar0] = 22;
					}
					else if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_392[iVar0 /*33*/], true), ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), true) < 2f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_392[iVar0 /*33*/], Local_391[1 /*33*/], 50f, 5000, false, false);
						iLocal_250[iVar0] = 22;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_392[iVar0 /*33*/], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) < 4f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_392[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 50f, 5000, false, false);
						iLocal_250[iVar0] = 22;
					}
					else if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_392[iVar0 /*33*/], true), 4f, true))
					{
						TASK::TASK_SMART_FLEE_PED(Local_392[iVar0 /*33*/], PLAYER::PLAYER_PED_ID(), 350f, -1, false, false);
						iLocal_250[iVar0] = 22;
					}
				}
			}
			switch (iLocal_250[iVar0])
			{
				case 0:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 9:
						case 11:
						case 13:
						case 15:
						case 17:
							if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_459[iVar0 /*9*/], 2f, -1, 0.25f, 0, 40000f);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_392[iVar0 /*33*/], iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_250[iVar0]++;
							}
							break;
						case 2:
						case 4:
						case 6:
						case 8:
						case 10:
						case 12:
						case 14:
						case 16:
						case 18:
							if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_PAUSE(0, 5000);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_459[iVar0 /*9*/], 1f, -1, 0.25f, 0, 40000f);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_392[iVar0 /*33*/], iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_250[iVar0]++;
							}
							break;
					}
					break;
				case 1:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 9:
						case 11:
						case 13:
						case 15:
						case 17:
							if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_459[iVar0 /*9*/].f_3, 2f, -1, 0.25f, 0, 40000f);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_392[iVar0 /*33*/], iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_250[iVar0]++;
							}
							break;
						case 2:
						case 4:
						case 6:
						case 8:
						case 10:
						case 12:
						case 14:
						case 16:
						case 18:
							if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_PAUSE(0, 5000);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_459[iVar0 /*9*/].f_3, 1f, -1, 0.25f, 0, 40000f);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_392[iVar0 /*33*/], iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_250[iVar0]++;
							}
							break;
					}
					break;
				case 2:
					switch (iVar0)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 9:
						case 11:
						case 13:
						case 15:
						case 17:
							if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_459[iVar0 /*9*/].f_6, 2f, -1, 0.25f, 0, 40000f);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_392[iVar0 /*33*/], iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_250[iVar0] = 0;
							}
							break;
						case 2:
						case 4:
						case 6:
						case 8:
						case 10:
						case 12:
						case 14:
						case 16:
						case 18:
							if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
								TASK::TASK_PAUSE(0, 5000);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_459[iVar0 /*9*/].f_6, 1f, -1, 0.25f, 0, 40000f);
								TASK::TASK_PAUSE(0, 5000);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
								TASK::TASK_PERFORM_SEQUENCE(Local_392[iVar0 /*33*/], iLocal_389);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
								iLocal_250[iVar0] = 0;
							}
							break;
					}
					break;
				case 22:
					if (__LIB_17__::func_77(Local_392[iVar0 /*33*/], joaat("SCRIPT_TASK_SMART_FLEE_PED")))
					{
						iLocal_250[iVar0] = 0;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_938()//Position - 0x9AFEC
{
	func_950(&Local_391, 1);
	func_949();
	func_947();
	func_946();
	func_939();
}

void func_939()//Position - 0x9B00D
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
	{
		if (!iLocal_359 >= 21)
		{
			if (!__LIB_13__::func_755(&Local_687, 0))
			{
				if (__LIB_14__::func_466() == 1)
				{
					if (__LIB_0__::func_611(&iLocal_268, 12000))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) < 50f)
						{
							switch (iLocal_361)
							{
								case 0:
									if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_SHOUT", 7, 0, 0, 0))
									{
										iLocal_268 = MISC::GET_GAME_TIMER();
									}
									break;
								case 1:
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) < 15f)
									{
										if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_DOG", 7, 0, 0, 0))
										{
											iLocal_268 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										iLocal_361 = 0;
									}
									break;
								}
							}
						}
					}
			}
			if (__LIB_14__::func_466() == 1 && Local_518.f_0 != 2)
			{
				if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) < 25f && ENTITY::IS_ENTITY_ON_SCREEN(Local_391[3 /*33*/])) || func_945(&(Local_391[3 /*33*/]), 35f, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[3 /*33*/], PLAYER::PLAYER_PED_ID(), true))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_391[3 /*33*/], joaat("WEAPON_PISTOL"), -1, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_391[3 /*33*/], joaat("WEAPON_UNARMED"), true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 2f, -1, 1f, 1, 40000f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 44, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[3 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					PED::SET_PED_HEATSCALE_OVERRIDE(Local_391[3 /*33*/], 3.57E-43f);
					iLocal_268 = 0;
					iLocal_359 = 21;
				}
			}
		}
		else
		{
			__LIB_0__::func_631(Local_391[3 /*33*/], &(Local_391[3 /*33*/].f_3), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
		}
		switch (iLocal_359)
		{
			case 0:
				AUDIO::PREPARE_MUSIC_EVENT("EXL2_RPG_FIRED");
				WEAPON::SET_CURRENT_PED_WEAPON(Local_391[3 /*33*/], joaat("WEAPON_RPG"), true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_403.f_0, 99999999, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
				TASK::TASK_PERFORM_SEQUENCE(Local_391[3 /*33*/], iLocal_389);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
				Local_391[3 /*33*/].f_24 = MISC::GET_GAME_TIMER();
				iLocal_359++;
				break;
			case 1:
				if (func_943(Local_391[3 /*33*/], 1092616192) || __LIB_0__::func_611(&(Local_391[3 /*33*/].f_24), 90000))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 2f, 3);
					func_942();
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_RPG_FIRED");
					func_876();
					iLocal_359++;
				}
				break;
			case 2:
				func_942();
				func_876();
				if ((Local_391[3 /*33*/].f_11 != -1541.2722f && Local_391[3 /*33*/].f_11.f_1 != 4489.3423f) && Local_391[3 /*33*/].f_11.f_2 != 18.4372f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_391[3 /*33*/].f_17, 2f, -1, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[3 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
				}
				iLocal_359++;
				break;
			case 3:
				func_942();
				if (func_876())
				{
					iLocal_351 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_359 = 22;
				}
				break;
			case 4:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1545.5265f, 4486.7324f, 18.2761f, Local_403.f_0, 1.5f, false, 0.5f, 0.5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_403.f_0, 2000, false);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_403.f_0, 500, false);
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_391[3 /*33*/].f_11, Local_403.f_0, 1.5f, false, 0.5f, 0.5f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_403.f_0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
				TASK::TASK_PERFORM_SEQUENCE(Local_391[3 /*33*/], iLocal_389);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
				iLocal_359++;
				break;
			case 5:
				iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Local_391[3 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
				if (iVar0 == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(Local_391[3 /*33*/]) == 2)
					{
						func_876();
						iLocal_359++;
					}
				}
				else
				{
					iLocal_359 = 4;
				}
				break;
			case 6:
				if (func_876())
				{
					iLocal_351 = MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000);
					iLocal_350 = MISC::GET_GAME_TIMER();
					iLocal_359++;
				}
				break;
			case 7:
				if (__LIB_0__::func_611(&iLocal_350, iLocal_351))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[3 /*33*/], true);
					iLocal_359 = 4;
				}
				break;
			case 21:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
				{
					func_876();
				}
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_391[3 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_391[3 /*33*/], 2f, false);
				}
				if (__LIB_17__::func_77(Local_391[3 /*33*/], joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")))
				{
					if (Local_518.f_0 != 2)
					{
						if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[3 /*33*/], PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(Local_391[3 /*33*/])) || ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) < 10f && func_941(PLAYER::PLAYER_PED_ID(), Local_391[3 /*33*/])) && (!iLocal_347 && PED::CAN_PED_SEE_HATED_PED(Local_391[3 /*33*/], PLAYER::PLAYER_PED_ID()))))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[3 /*33*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_391[3 /*33*/], ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), 8f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_391[3 /*33*/], 51, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_391[3 /*33*/], 50, true);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_391[3 /*33*/], 100f, 0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_391[3 /*33*/]);
							iLocal_350 = 0;
							iLocal_350 = MISC::GET_GAME_TIMER();
							iLocal_347 = 1;
						}
					}
				}
				if (__LIB_17__::func_77(Local_391[3 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					if (!PED::IS_PED_RAGDOLL(Local_391[3 /*33*/]))
					{
						if (__LIB_0__::func_611(&iLocal_350, 12000) || Local_518.f_0 == 2)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[3 /*33*/], true);
							TASK::CLEAR_PED_TASKS(Local_391[3 /*33*/]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 44, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_391[3 /*33*/], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_391[3 /*33*/]);
							iLocal_347 = 0;
						}
					}
				}
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &iVar1);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_391[3 /*33*/], -1567.9077f, 4731.3516f, 49.3402f, 4f, 4f, 2f, false, true, 0) && (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), &iVar1) && iVar1 < 191))
				{
					STREAMING::REQUEST_ANIM_DICT("missfra0_chop_find");
					if (STREAMING::HAS_ANIM_DICT_LOADED("missfra0_chop_find"))
					{
						if (((__LIB_14__::func_466() == 1 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Local_518.f_0 != 2) && iLocal_707 == 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_393.f_0, joaat("SCRIPT_TASK_GO_TO_ENTITY")) == 1 && !__LIB_17__::func_77(Local_391[3 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
							{
								if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("exile2_2", ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), &iVar1) && iVar1 >= 40)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_393.f_0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], -1f, -1f, -1f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_391[3 /*33*/], 1f, -1f, 2f), 3.5f, false, true, 0))
									{
										Local_310 = { ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true) };
										Local_311 = { ENTITY::GET_ENTITY_ROTATION(Local_391[3 /*33*/], 2) };
										Var2 = { Local_310 };
										Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missexile2", "take_down_bad_guy_victim", Local_310, Local_311, 1f, 2) };
										MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &fVar6, false, false);
										Var3.f_2 = (fVar6 + 1f);
										Var4 = { Var3 - Var2 };
										Var5 = { __LIB_0__::func_79(Var4) };
										Local_311.f_0 = MISC::ATAN2(Var5.f_2, SYSTEM::VMAG(Var5.f_0, Var5.f_1, 0f));
										Local_391[3 /*33*/].f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_391[3 /*33*/], Local_391[3 /*33*/].f_23, "missexile2", "take_down_bad_guy_victim", 8f, -8f, 5, 16, 8f, 0);
										iLocal_359 = 22;
									}
								}
							}
						}
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[3 /*33*/], true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_ENTER_VEHICLE(0, Local_435.f_0, -1, -1, 2f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[3 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_359 = 24;
				}
				break;
			case 22:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(Local_391[3 /*33*/].f_23))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(Local_391[3 /*33*/].f_23) >= 1f)
					{
						TASK::SET_HIGH_FALL_TASK(Local_391[3 /*33*/], 5000, 7000, 0);
						iLocal_359++;
					}
				}
				break;
			case 23:
				PED::RESET_PED_RAGDOLL_TIMER(Local_391[3 /*33*/]);
				break;
			case 24:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_435.f_0, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_391[3 /*33*/], Local_435.f_0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_435.f_0))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_435.f_0, Local_435.f_13, "lkexile2", true);
						}
						iLocal_359 = 24;
					}
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Local_391[3 /*33*/], joaat("WEAPON_PISTOL"), false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[3 /*33*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_391[3 /*33*/], -1567.9077f, 4731.3516f, 49.3402f, 10f, false, false);
					TASK::TASK_COMBAT_PED(Local_391[3 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_359 = 25;
				}
				break;
			case 25:
				if (!__LIB_13__::func_755(&Local_687, 0))
				{
					if (__LIB_14__::func_466() == 1)
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_ORUN", 7, 0, 0, 0))
						{
							iLocal_359 = 24;
						}
					}
				}
				break;
			case 26:
				break;
		}
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), 10f))
		{
			if (!__LIB_0__::func_75())
			{
				__LIB_16__::func_9(&uLocal_519, "TM44AUD", "TM44_RPG2", "TM44_RPG2_1", 6, 0, 0);
			}
		}
	}
	else if (Local_391[3 /*33*/].f_27)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_435.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_435.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_435.f_0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
		{
			func_876();
		}
		__LIB_0__::func_631(Local_391[3 /*33*/], &(Local_391[3 /*33*/].f_3), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
	}
}

int func_941(int iParam0, int iParam1)//Position - 0x9BAC5
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
					Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
					Var2 = { Var1 - Var0 };
					Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, 0f, 0.5f, 0f) };
					Var4 = { Var3 - Var1 };
					if (__LIB_0__::func_158(Var2, Var4) < 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_942()//Position - 0x9BB4A
{
	if (!PED::IS_PED_INJURED(Local_391[3 /*33*/]))
	{
		iLocal_276 = (iLocal_276 - 9);
		if (iLocal_276 < 1)
		{
			iLocal_276 = 1;
		}
		PED::SET_PED_HEATSCALE_OVERRIDE(Local_391[3 /*33*/], iLocal_276);
	}
}

int func_943(int iParam0, float fParam1)//Position - 0x9BB81
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!Local_518.f_0 == 2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				if (!iLocal_335)
				{
					if (iParam0 != Local_391[3 /*33*/])
					{
						if (CAM::GET_GAMEPLAY_CAM_FOV() < fParam1)
						{
							fVar0 = 0f;
							fVar1 = 0f;
							GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar0, &fVar1);
							if (MISC::ABSF((fVar0 - 0.5f)) < 0.1f)
							{
								if (MISC::ABSF((fVar1 - 0.5f)) < 0.1f)
								{
									return 1;
								}
							}
						}
					}
					else if (CAM::GET_GAMEPLAY_CAM_FOV() < 25.8f)
					{
						fVar2 = 0f;
						fVar3 = 0f;
						GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iParam0, true), &fVar2, &fVar3);
						if (MISC::ABSF((fVar2 - 0.5f)) < 0.225f)
						{
							if (MISC::ABSF((fVar3 - 0.5f)) < 0.225f)
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

int func_945(var uParam0, float fParam1, bool bParam2)//Position - 0x9BE52
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(*uParam0, true), true) < fParam1)
		{
			if (PED::CAN_PED_SEE_HATED_PED(*uParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
					{
						return 1;
					}
					if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *uParam0))
					{
						return 1;
					}
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
			if (bParam2)
			{
				return 1;
			}
		}
		if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*uParam0, true), 4f, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_946()//Position - 0x9BEED
{
	if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
	{
		if (iLocal_358 != 22)
		{
			if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[2 /*33*/], true), true) < 15f && ENTITY::IS_ENTITY_ON_SCREEN(Local_391[2 /*33*/])) || ((__LIB_14__::func_466() == 1 && PED::CAN_PED_SEE_HATED_PED(Local_391[2 /*33*/], PLAYER::PLAYER_PED_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[2 /*33*/], true), true) < 15f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[2 /*33*/], PLAYER::PLAYER_PED_ID(), true))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_391[2 /*33*/].f_2))
				{
					Local_391[2 /*33*/].f_2 = __LIB_0__::func_666(Local_391[2 /*33*/], 1, 145);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[2 /*33*/], false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_391[2 /*33*/], -1569.2168f, 4424.8916f, 6.168f, 10f, false, false);
				TASK::TASK_COMBAT_PED(Local_391[2 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_358 = 22;
			}
		}
		switch (iLocal_358)
		{
			case 0:
				PED::SET_PED_STEALTH_MOVEMENT(Local_391[2 /*33*/], true, "DEFAULT_ACTION");
				TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1574.28f, 4493.85f, 21.11f, 1.5f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1585.68f, 4500.92f, 19.81f, 1.5f, -1, 0.25f, 0, 40000f);
				TASK::TASK_PAUSE(0, 2000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1579.22f, 4515.91f, 18.3f, 1.5f, -1, 0.25f, 0, 40000f);
				TASK::SET_SEQUENCE_TO_REPEAT(iLocal_389, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
				TASK::TASK_PERFORM_SEQUENCE(Local_391[2 /*33*/], iLocal_389);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
				iLocal_358++;
				break;
			case 1:
				if (func_943(Local_391[2 /*33*/], 1092616192))
				{
					Local_391[2 /*33*/].f_2 = __LIB_0__::func_639(Local_391[2 /*33*/], 1, 0);
					__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_FOUND", 7, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1545.07f, 4470.35f, 18.78f, 1.5f, -1, 0.25f, 0, 40000f);
					TASK::TASK_PAUSE(0, 2000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.45f, 4457.35f, 15.75f, 1.5f, -1, 0.25f, 0, 40000f);
					TASK::TASK_PAUSE(0, 2000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.03f, 4457.64f, 16.1f, 1.5f, -1, 0.25f, 0, 40000f);
					TASK::TASK_PAUSE(0, 2000);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1556.83f, 4447.04f, 11.1f, 1.5f, -1, 0.25f, 0, 40000f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[2 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_244 = 0;
					iLocal_358++;
				}
				break;
			case 2:
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_391[2 /*33*/], -1556.83f, 4447.04f, 11.1f, 1.5f, 1.5f, 2f, false, true, 0))
				{
					if (__LIB_17__::func_77(Local_391[2 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE_FROM_PROGRESS")) && __LIB_17__::func_77(Local_391[2 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1545.07f, 4470.35f, 18.78f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.45f, 4457.35f, 15.75f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.03f, 4457.64f, 16.1f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1556.83f, 4447.04f, 11.1f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_391[2 /*33*/], iLocal_389, iLocal_244, 6);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
					else
					{
						iLocal_244 = TASK::GET_SEQUENCE_PROGRESS(Local_391[2 /*33*/]);
					}
				}
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_391[2 /*33*/], true), 4f, true))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_PLAY_ANIM(0, "missexile2", "enter_crouch_b", 8f, -8f, -1, 1032, 0f, false, false, false);
					TASK::TASK_PLAY_ANIM(0, "missexile2", "crouching_idle_b", 8f, -8f, -1, 1032, 0f, false, false, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[2 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_358 = 3;
				}
				break;
			case 3:
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_391[2 /*33*/], 2f);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_391[2 /*33*/], -1556.83f, 4447.04f, 11.1f, 1.5f, 1.5f, 2f, false, true, 0))
				{
					if (__LIB_17__::func_77(Local_391[2 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE_FROM_PROGRESS")) && __LIB_17__::func_77(Local_391[2 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1545.07f, 4470.35f, 18.78f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1541.45f, 4457.35f, 15.75f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1551.03f, 4457.64f, 16.1f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::TASK_PAUSE(0, 2000);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1556.83f, 4447.04f, 11.1f, 1.5f, -1, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_391[2 /*33*/], iLocal_389, iLocal_244, 7);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_391[2 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE_FROM_PROGRESS")) == 1)
					{
						iLocal_244 = TASK::GET_SEQUENCE_PROGRESS(Local_391[2 /*33*/]);
					}
				}
				break;
			case 22:
				break;
			}
	}
}

void func_947()//Position - 0x9C508
{
	if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
	{
		if (iLocal_357 != 22)
		{
			if ((((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), true) < 40f && ENTITY::IS_ENTITY_ON_SCREEN(Local_391[1 /*33*/])) || ((__LIB_14__::func_466() == 1 && PED::CAN_PED_SEE_HATED_PED(Local_391[1 /*33*/], PLAYER::PLAYER_PED_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), true) < 20f)) || (__LIB_14__::func_466() != 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), ENTITY::GET_ENTITY_COORDS(Local_391[1 /*33*/], true), true) < 20f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[1 /*33*/], PLAYER::PLAYER_PED_ID(), true))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_391[1 /*33*/].f_2))
				{
					Local_391[1 /*33*/].f_2 = __LIB_0__::func_666(Local_391[1 /*33*/], 1, 145);
				}
				if (iLocal_357 < 5)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[1 /*33*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_391[1 /*33*/], -1643.4071f, 4396.6016f, 7.5152f, 10f, false, false);
					TASK::TASK_COMBAT_PED(Local_391[1 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else if (iLocal_357 < 10)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[1 /*33*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_391[1 /*33*/], -1744.2083f, 4464.224f, 3.2479f, 3f, false, false);
					TASK::TASK_COMBAT_PED(Local_391[1 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iLocal_357 = 22;
			}
		}
		if (!iLocal_343)
		{
			iLocal_343 = 1;
		}
		switch (iLocal_357)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1562.4369f, 4365.877f, -0.1f, 1f, -1, 40000f, 0.5f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1556.8f, 4361.9f, -0.1f, 2f, -1, 40000f, 0.5f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1552.2439f, 4353.12f, -0.1f, 2f, -1, 40000f, 0.5f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1570.4601f, 4360.972f, -0.1f, 2f, -1, 40000f, 0.5f);
				TASK::SET_SEQUENCE_TO_REPEAT(iLocal_389, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
				TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
				iLocal_357++;
				break;
			case 1:
				if (func_943(Local_391[1 /*33*/], 1092616192))
				{
					Local_391[1 /*33*/].f_2 = __LIB_0__::func_639(Local_391[1 /*33*/], 1, 0);
					__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_FOUND", 7, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1572.7f, 4363.5f, -0.1f, 1f, -1, 40000f, 0.5f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_357++;
				}
				PED::SET_PED_RESET_FLAG(Local_391[1 /*33*/], 234, true);
				break;
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_391[1 /*33*/], -1572.7f, 4363.5f, -0.1f, 3f, 3f, 2f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1577.53f, 4365.07f, -0.1f, 1f, -1, 40000f, 0.5f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_357++;
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_391[1 /*33*/], -1577.53f, 4365.07f, -0.1f, 3f, 3f, 2f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1582.07f, 4372.06f, -0.1f, 2f, -1, 40000f, 0.5f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_357++;
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_391[1 /*33*/], -1582.07f, 4372.06f, -0.1f, 3f, 3f, 2f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1587.37f, 4386.34f, -0.1f, 2f, -1, 40000f, 0.5f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_357++;
				}
				break;
			case 5:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_391[1 /*33*/], -1587.37f, 4386.34f, -0.1f, 3f, 3f, 2f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1567.61f, 4404.78f, 0.17f, 2f, -1, 40000f, 0.5f);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_357++;
				}
				break;
			case 6:
				if (ENTITY::IS_ENTITY_AT_COORD(Local_391[1 /*33*/], -1567.61f, 4404.78f, 0.17f, 3f, 3f, 2f, false, true, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1568.7f, 4539.6f, 16.6f, 2f, -1, -1f, 1, 40000f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_357++;
				}
				break;
			case 7:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_391[1 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_391[1 /*33*/], 2f, false);
				}
				else
				{
					TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_391[1 /*33*/], 2f);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(Local_391[1 /*33*/], -1567.9077f, 4731.3516f, 49.3402f, 2f, 2f, 2f, false, true, 0))
				{
					if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_391[0 /*33*/]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_ENTER_VEHICLE(0, Local_435.f_0, -1, 0, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_ENTER_VEHICLE(0, Local_435.f_0, -1, -1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_ENTER_VEHICLE(0, Local_435.f_0, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_391[1 /*33*/], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
					iLocal_357++;
				}
				break;
			case 8:
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_391[1 /*33*/], Local_435.f_0) && func_948(&(Local_391[0 /*33*/])))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_435.f_0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_435.f_0, Local_435.f_13, "lkexile2", true);
					}
					iLocal_357++;
				}
				break;
			case 9:
				break;
			case 22:
				break;
			}
	}
}

int func_948(var uParam0)//Position - 0x9CBC2
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(*uParam0, Local_435.f_0))
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(*uParam0))
			{
				return 1;
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

void func_949()//Position - 0x9CC01
{
	if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
	{
		if (iLocal_356 != 22)
		{
			if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), true) < 15f || ((__LIB_14__::func_466() == 1 && PED::CAN_PED_SEE_HATED_PED(Local_391[0 /*33*/], PLAYER::PLAYER_PED_ID())) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), true) < 15f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_391[0 /*33*/], PLAYER::PLAYER_PED_ID(), true))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_391[0 /*33*/].f_2))
				{
					Local_391[0 /*33*/].f_2 = __LIB_0__::func_666(Local_391[0 /*33*/], 1, 145);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_391[0 /*33*/], false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_391[0 /*33*/], -1492.5629f, 4479.9956f, 17.2309f, 10f, false, false);
				TASK::TASK_COMBAT_PED(Local_391[0 /*33*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_356 = 22;
			}
		}
		switch (iLocal_356)
		{
			case 0:
				PED::SET_PED_STEALTH_MOVEMENT(Local_391[0 /*33*/], true, "DEFAULT_ACTION");
				TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1523.34f, 4454.33f, 10.43f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_403.f_0, 2000, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1517.54f, 4452.38f, 9.24f, 1f, -1, 0.25f, 0, 40000f);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Local_403.f_0, 2000, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1511.87f, 4440.37f, 11.6f, 1f, -1, 0.25f, 0, 40000f);
				TASK::SET_SEQUENCE_TO_REPEAT(iLocal_389, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
				TASK::TASK_PERFORM_SEQUENCE(Local_391[0 /*33*/], iLocal_389);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
				iLocal_356++;
				break;
			case 1:
				if (func_943(Local_391[0 /*33*/], 1092616192))
				{
					Local_391[0 /*33*/].f_2 = __LIB_0__::func_639(Local_391[0 /*33*/], 1, 0);
					__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_FOUND", 7, 0, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 1f, -1, -1f, 1, 40000f);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
					TASK::TASK_PERFORM_SEQUENCE(Local_391[0 /*33*/], iLocal_389);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					iLocal_243 = 0;
					iLocal_356++;
				}
				if (func_943(Local_391[0 /*33*/], 15f))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), 4f, true))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "enter_crouch_a", 8f, -8f, -1, 1032, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "crouching_idle_a", 8f, -8f, -1, 1032, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_391[0 /*33*/], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_356 = 3;
					}
				}
				break;
			case 2:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_391[0 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_391[0 /*33*/], 2f, false);
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_391[0 /*33*/], -1567.9077f, 4731.3516f, 49.3402f, 1.5f, 1.5f, 2f, false, true, 0))
				{
					if (__LIB_17__::func_77(Local_391[0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE_FROM_PROGRESS")) && __LIB_17__::func_77(Local_391[0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 1f, -1, -1f, 1, 40000f);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_391[0 /*33*/], iLocal_389, iLocal_243, 1);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
					else
					{
						iLocal_243 = TASK::GET_SEQUENCE_PROGRESS(Local_391[0 /*33*/]);
					}
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_391[0 /*33*/], true), 4f, true))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "enter_crouch_a", 8f, -8f, -1, 1032, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "crouching_idle_a", 8f, -8f, -1, 1032, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_391[0 /*33*/], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						iLocal_356 = 3;
					}
				}
				else
				{
					iLocal_356 = 4;
				}
				break;
			case 3:
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_391[0 /*33*/]))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Local_391[0 /*33*/], 2f, false);
				}
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_391[0 /*33*/], 2f);
				if (!ENTITY::IS_ENTITY_AT_COORD(Local_391[0 /*33*/], -1567.9077f, 4731.3516f, 49.3402f, 2f, 2f, 2f, false, true, 0))
				{
					if (__LIB_17__::func_77(Local_391[0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE_FROM_PROGRESS")) && __LIB_17__::func_77(Local_391[0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1565.04f, 4560.87f, 16.76f, 1f, -1, -1f, 1, 40000f);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "exile2_2", 0, 42, -1);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Local_391[0 /*33*/], iLocal_389, iLocal_243, 1);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_391[0 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE_FROM_PROGRESS")) == 1)
					{
						iLocal_243 = TASK::GET_SEQUENCE_PROGRESS(Local_391[0 /*33*/]);
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_391[1 /*33*/]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_ENTER_VEHICLE(0, Local_435.f_0, -1, 0, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_391[0 /*33*/], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
							TASK::TASK_ENTER_VEHICLE(0, Local_435.f_0, -1, -1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
							TASK::TASK_PERFORM_SEQUENCE(Local_391[0 /*33*/], iLocal_389);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_ENTER_VEHICLE(0, Local_435.f_0, -1, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_391[0 /*33*/], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
					iLocal_356++;
				}
				break;
			case 4:
				if (PED::IS_PED_SITTING_IN_VEHICLE(Local_391[0 /*33*/], Local_435.f_0) && func_948(&(Local_391[1 /*33*/])))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_435.f_0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_435.f_0, Local_435.f_13, "lkexile2", true);
					}
					iLocal_356++;
				}
				break;
			case 5:
				break;
			case 22:
				break;
			}
	}
}

int func_950(int iParam0, bool bParam1)//Position - 0x9D256
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1 /*33*/]))
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*33*/]))
			{
				if (bParam1)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar1 /*33*/]);
				}
				if (HUD::DOES_BLIP_EXIST((iParam0[iVar1 /*33*/])->f_2))
				{
					HUD::REMOVE_BLIP(&((iParam0[iVar1 /*33*/])->f_2));
				}
				iVar0++;
			}
		}
		else if ((iParam0[iVar1 /*33*/])->f_27)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 == *iParam0)
	{
		return 1;
	}
	return 0;
}

void func_951()//Position - 0x9D2DF
{
	if (!bLocal_333)
	{
		if (__LIB_19__::func_99())
		{
			iLocal_294 = 99;
		}
	}
	else
	{
		func_952(&iLocal_294, &iLocal_295, 1, 0, 15000);
	}
}

void func_952(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x9D30C
{
	switch (*iParam0)
	{
		case 0:
			*iParam1 = MISC::GET_GAME_TIMER();
			*iParam0++;
			break;
		case 1:
			if (!__LIB_19__::func_99())
			{
				if (__LIB_25__::func_523(iParam1, iParam4))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
						{
							if (bParam2)
							{
								__LIB_0__::func_151("SNIPE_HLP0" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUTGROUP_SNIPER_ZOOM_SECONDARY~ while holding ~INPUT_AIM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */, -1);
							}
							*iParam0++;
						}
						else
						{
							if (bParam3)
							{
								__LIB_0__::func_151("SNIPE_HLP1" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUT_SNIPER_ZOOM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */, -1);
							}
							*iParam0++;
						}
					}
				}
			}
			else
			{
				*iParam0 = 3;
			}
			break;
		case 2:
			if (__LIB_19__::func_99())
			{
				if (__LIB_0__::func_1("SNIPE_HLP0" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUTGROUP_SNIPER_ZOOM_SECONDARY~ while holding ~INPUT_AIM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */))
				{
					HUD::CLEAR_HELP(true);
				}
				else if (__LIB_0__::func_1("SNIPE_HLP1" /* GXT: Use ~INPUTGROUP_LOOK~ to move the reticle.~n~Use ~INPUT_SNIPER_ZOOM~ to zoom in/out.~n~Press ~INPUT_ATTACK~ to fire the weapon. */))
				{
					HUD::CLEAR_HELP(true);
				}
				*iParam0++;
			}
			break;
		case 3:
			break;
	}
}

void func_955()//Position - 0x9D474
{
	int iVar0;
	float fVar1;
	float fVar2;
	iVar0 = 0;
	switch (iLocal_239)
	{
		case 0:
			if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_FINDG", 7, 0, 0, 0))
			{
				iLocal_240 = MISC::GET_GAME_TIMER();
				iLocal_239++;
			}
			break;
		case 1:
			if (!__LIB_13__::func_755(&Local_687, 0))
			{
				__LIB_0__::func_229("FS_FINDGANG", 7500, 0);
				iLocal_239++;
			}
			break;
		case 2:
			iLocal_239++;
			break;
		case 3:
			iLocal_239++;
			break;
		case 4:
			if (func_962(&Local_391, 2))
			{
				__LIB_0__::func_325();
				iLocal_239 = 5;
			}
			break;
		case 5:
			if (!__LIB_13__::func_755(&Local_687, 0))
			{
				if (func_962(&Local_391, 2))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_M0L", 7, 0, 0, 0))
					{
						iLocal_240 = MISC::GET_GAME_TIMER();
						iLocal_239++;
					}
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_611(&iLocal_240, 4000))
			{
				if (!__LIB_13__::func_755(&Local_687, 0))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_THL", 6, 0, 0, 0))
					{
						iLocal_240 = MISC::GET_GAME_TIMER();
						iLocal_239 = 7;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
			{
				__LIB_0__::func_325();
				iLocal_239 = 7;
			}
			break;
		case 7:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
			{
				if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_RPG3", 7, 0, 0, 0))
				{
					iLocal_239 = 22;
				}
			}
			else
			{
				func_959();
			}
			break;
		case 8:
			if (!func_535("TM44_NOGET"))
			{
				if (!__LIB_13__::func_755(&Local_687, 0))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_NOGET", 7, 0, 0, 0))
					{
						func_523("TM44_NOGET", 1);
						iLocal_239++;
					}
				}
			}
			break;
		case 9:
			iLocal_239++;
			break;
		case 10:
			if (__LIB_14__::func_466() == 1 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_FSWITCH", 7, 0, 0, 0))
				{
					__LIB_15__::func_306(1);
					func_523("TM44_FSWITCH", 1);
					iLocal_239++;
				}
			}
			break;
		case 11:
			if (!__LIB_13__::func_755(&Local_687, 0))
			{
				if (Local_518.f_0 != 2)
				{
					__LIB_0__::func_229("FS_GOD2b", 7500, 1);
				}
				iLocal_239++;
			}
			break;
		case 12:
			func_715();
			bLocal_224 = true;
			iLocal_239++;
			break;
		case 13:
			break;
		case 22:
			break;
	}
	if ((!__LIB_13__::func_755(&Local_687, 0) && !__LIB_17__::func_493(&iLocal_463)) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!bLocal_224)
		{
			if (!func_535("TM44_TWT"))
			{
				if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
				{
					if (__LIB_14__::func_466() == 0 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_TWT", 7, 0, 0, 0))
						{
							func_523("TM44_TWT", 1);
							Local_391[1 /*33*/].f_24 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					func_523("TM44_TWT", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
			{
				if (!func_535("TM44_WATER"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_391[1 /*33*/].f_2))
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_WATER", 7, 0, 0, 0))
						{
							func_523("TM44_WATER", 1);
						}
					}
				}
			}
			else if (!func_535("TM44_DWATER"))
			{
				if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_DWATER", 7, 0, 0, 0))
				{
					func_523("TM44_DWATER", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
			{
				if (!func_535("TM44_GWOOD"))
				{
					if (HUD::DOES_BLIP_EXIST(Local_391[0 /*33*/].f_2))
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_GWOOD", 7, 0, 0, 0))
						{
							func_523("TM44_GWOOD", 1);
						}
					}
				}
			}
			else if (!func_535("TM44_DEADR"))
			{
				if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_DEADR", 7, 0, 0, 0))
				{
					func_523("TM44_DEADR", 1);
				}
			}
			if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_391[1 /*33*/].f_2))
				{
					if (__LIB_0__::func_611(&(Local_391[1 /*33*/].f_24), 40000))
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_TWT", 6, 0, 0, 0))
						{
							Local_391[1 /*33*/].f_24 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_391[0 /*33*/].f_2))
				{
					if (__LIB_0__::func_611(&(Local_391[0 /*33*/].f_24), 40000))
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_THL2", 6, 0, 0, 0))
						{
							Local_391[0 /*33*/].f_24 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_280++;
				if (iLocal_280 > 4)
				{
					if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]) || !PED::IS_PED_INJURED(Local_391[0 /*33*/]))
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_MISS", 6, 0, 0, 0))
						{
							iLocal_280 = 0;
						}
					}
				}
			}
		}
		else
		{
			if ((__LIB_14__::func_466() == 0 && Local_518.f_0 != 2) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (!func_535("TM44_MLOOK"))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_MLOOK", 7, 0, 0, 0))
					{
						func_523("TM44_MLOOK", 1);
					}
				}
			}
			if (iLocal_359 >= 21)
			{
				if ((__LIB_14__::func_466() == 1 && Local_518.f_0 != 2) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					if (!func_535("TM44_CHOPGO"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) < 30f)
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_CHOPGO", 7, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 10f, 4);
								func_523("TM44_CHOPGO", 1);
							}
						}
					}
					if (iLocal_359 == 21)
					{
						if (__LIB_0__::func_611(&iLocal_268, 10000))
						{
							if (__LIB_17__::func_77(Local_391[3 /*33*/], joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_AROUND_PED")))
							{
								if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_RPGRUN0", 7, 0, 0, 0))
								{
									func_523("TM44_RPGRUN0", 1);
									iLocal_268 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (!func_535("TM44_mike"))
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_mike", 6, 0, 0, 0))
						{
							func_523("TM44_mike", 1);
						}
					}
				}
			}
			else
			{
				if (!func_535("TM44_LOK"))
				{
					if (__LIB_14__::func_466() == 1 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_LOK", 6, 0, 0, 0))
						{
							func_523("TM44_LOK", 1);
						}
					}
				}
				else if (!func_535("TM44_GOTIT"))
				{
					if (__LIB_14__::func_466() == 1)
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_GOTIT", 6, 0, 0, 0))
						{
							func_523("TM44_GOTIT", 1);
						}
					}
				}
				if (!func_535("TM44_BANG"))
				{
					if (__LIB_14__::func_466() == 1)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), ENTITY::GET_ENTITY_COORDS(Local_391[3 /*33*/], true), true) < 50f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) < 30f)
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_BANG", 6, 0, 0, 0))
							{
								func_523("TM44_BANG", 1);
							}
						}
					}
				}
			}
			if (!func_535("TM44_CHOPSWM"))
			{
				if (__LIB_14__::func_466() == 1)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) < 35f)
					{
						if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_262) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_262) < 0.5f) || ENTITY::IS_ENTITY_AT_COORD(Local_393.f_0, Local_308, 4f, 4f, 2.5f, false, true, 0))
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_CHOPSWM", 7, 0, 0, 0))
							{
								func_523("TM44_CHOPSWM", 1);
							}
						}
					}
				}
			}
			if (__LIB_14__::func_466() == 1)
			{
				if (!func_535("TM44_COLD"))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_COLD", 7, 0, 0, 0))
							{
								func_523("TM44_COLD", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!func_535("TM44_FRK0"))
	{
		if (__LIB_14__::func_466() == 0)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_463[1]))
			{
				if (CAM::GET_GAMEPLAY_CAM_FOV() < 10f)
				{
					fVar1 = 0f;
					fVar2 = 0f;
					GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), &fVar1, &fVar2);
					if (MISC::ABSF((fVar1 - 0.5f)) < 0.05f)
					{
						if (MISC::ABSF((fVar2 - 0.5f)) < 0.05f)
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_FRK0", 7, 0, 0, 0))
							{
								func_523("TM44_FRK0", 1);
							}
						}
					}
				}
			}
		}
	}
	if (__LIB_14__::func_466() == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Local_392.f_0 - 1))
		{
			if (Local_392[iVar0 /*33*/].f_27)
			{
				if (PED::IS_PED_INJURED(Local_392[iVar0 /*33*/]))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_AML", 6, 0, 0, 0))
					{
						__LIB_0__::func_630(175);
						Local_392[iVar0 /*33*/].f_27 = 0;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_959()//Position - 0x9DE51
{
	iLocal_289 = iLocal_289;
	if (__LIB_0__::func_611(&iLocal_289, 15000))
	{
		if (!__LIB_13__::func_755(&Local_687, 0))
		{
			fLocal_304 = func_961(Local_391[3 /*33*/]);
			fLocal_305 = func_960(Local_391[3 /*33*/]);
			if (MISC::ABSF(fLocal_304) > MISC::ABSF(fLocal_305))
			{
				if (MISC::ABSF(fLocal_304) > 10f)
				{
					if (fLocal_304 > 0f)
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_LEFT", 7, 0, 0, 0))
						{
							iLocal_289 = MISC::GET_GAME_TIMER();
						}
					}
					else if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_RIGHT", 7, 0, 0, 0))
					{
						iLocal_289 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (MISC::ABSF(fLocal_305) > 10f)
			{
				if (fLocal_305 > 0f)
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_UP", 7, 0, 0, 0))
					{
						iLocal_289 = MISC::GET_GAME_TIMER();
					}
				}
				else if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_DOWN", 7, 0, 0, 0))
				{
					iLocal_289 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

float func_960(int iParam0)//Position - 0x9DF59
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) - CAM::GET_FINAL_RENDERED_CAM_COORD() };
	Var1 = { __LIB_0__::func_79(Var0) };
	return (MISC::ATAN2(Var1.f_2, SYSTEM::VMAG(Var1.f_0, Var1.f_1, 0f)) - Var2.f_0);
}

float func_961(int iParam0)//Position - 0x9DF9C
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	Var2 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) - CAM::GET_FINAL_RENDERED_CAM_COORD() };
	fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1) - Var2.f_2);
	if (fVar1 > 180f)
	{
		fVar1 = (fVar1 - 360f);
	}
	if (fVar1 < -180f)
	{
		fVar1 = (fVar1 + 360f);
	}
	return fVar1;
}

int func_962(int iParam0, int iParam1)//Position - 0x9DFFA
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar1 /*33*/])->f_27)
		{
			if (PED::IS_PED_INJURED((*iParam0)[iVar1 /*33*/]))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_963()//Position - 0x9E045
{
	if (func_950(&Local_391, 0) || func_962(&Local_391, 3))
	{
		__LIB_0__::func_631(Local_391[3 /*33*/], &(Local_391[3 /*33*/].f_3), -1, 0, 1, 0, -1082130432, 0, -1, -1, 1, 0);
		__LIB_0__::func_499(180, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
		{
			func_876();
		}
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iLocal_334 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(Local_435.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_435.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_435.f_0);
				}
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_MICHAEL"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_MICHAEL");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_FRANKLIN"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_KILL_ENEMY_CHOP"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_KILL_ENEMY_CHOP");
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EXL2_RPG_DEAD");
			if (__LIB_14__::func_466() == 1)
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
			}
			else
			{
				PED::SET_PED_USING_ACTION_MODE(iLocal_463[1], false, -1, 0);
			}
			if (__LIB_14__::func_466() == 1 || (__LIB_14__::func_466() == 0 && Local_518.f_0 == 2))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
				}
				TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
				TASK::TASK_HELI_MISSION(0, Local_403.f_0, 0, 0, -1562.2906f, 4498.448f, 150f, 4, 5f, -1f, -1f, 150, 70, -1f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_463[2], iLocal_389);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
			}
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
			return 1;
		}
	}
	switch (iLocal_241)
	{
		case 0:
			if (func_962(&Local_391, 1))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 3);
				iLocal_241++;
			}
			break;
		case 1:
			if (func_962(&Local_391, 2))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_391[0 /*33*/]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_391[1 /*33*/]));
				if (func_892())
				{
					Local_391[3 /*33*/].f_11 = { -1603.7502f, 4513.5586f, 15.1901f };
					Local_391[3 /*33*/].f_20 = 227.6631f;
					Local_766 = { -1595.6965f, 4510.317f, 20.188784f };
				}
				func_528(&(Local_391[3 /*33*/]));
				ENTITY::SET_ENTITY_PROOFS(Local_391[3 /*33*/], true, true, true, true, true, false, false, false);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_391[3 /*33*/], false);
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_391[3 /*33*/], iLocal_276);
				HUD::REMOVE_BLIP(&(Local_391[3 /*33*/].f_2));
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_391[3 /*33*/], true, 1);
				if (__LIB_14__::func_466() == 0)
				{
					ENTITY::SET_ENTITY_PROOFS(Local_391[3 /*33*/], true, true, true, true, true, false, false, false);
				}
				__LIB_0__::func_222(&uLocal_519, 6, Local_391[3 /*33*/], "oneil" /* GXT: O'Neil Way */, 0, 1);
				iLocal_241++;
			}
			break;
		case 2:
			if (iLocal_217)
			{
				PED::SET_PED_HEATSCALE_OVERRIDE(Local_391[3 /*33*/], 1E-45f);
				ENTITY::SET_ENTITY_PROOFS(Local_391[3 /*33*/], false, false, false, false, false, false, false, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[1]);
				ENTITY::SET_ENTITY_COORDS(iLocal_463[1], -1683.4967f, 4454.595f, 1.566f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_463[1], 239.1512f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_393.f_0);
				ENTITY::SET_ENTITY_COORDS(Local_393.f_0, -1677.7307f, 4454.212f, 1.2653f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_393.f_0, 257.7928f);
				iLocal_255 = 200;
				AUDIO::TRIGGER_MUSIC_EVENT("EXL2_ON_FOOT");
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_RPG_CUTSCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("EXILE_2_RPG_CUTSCENE");
				}
				func_851();
				func_898(&iLocal_2011);
				RECORDING::REPLAY_START_EVENT(3);
				iLocal_241++;
			}
			break;
		case 3:
			if (!func_898(&iLocal_2011))
			{
				if (Local_503.f_18)
				{
					if (!Local_503.f_19)
					{
						if (func_798())
						{
							switch (__LIB_14__::func_466())
							{
								case 1:
									STREAMING::CLEAR_FOCUS();
									PED::SET_PED_CONFIG_FLAG(iLocal_463[0], 208, true);
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_463[0], Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
									PED::SET_PED_MOVEMENT_CLIPSET(iLocal_463[0], "move_ped_crouched", 0.25f);
									PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(iLocal_463[0], "Wpn_AssaultRifle_WeaponHoldingCrouched");
									PED::SET_PED_STRAFE_CLIPSET(iLocal_463[0], "move_ped_crouched_strafing");
									PED::SET_PED_DESIRED_HEADING(iLocal_463[0], ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
									PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
									PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
									PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), true);
									iLocal_264 = 100;
									break;
							}
							Local_503.f_19 = 1;
						}
					}
				}
			}
			else
			{
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 183);
				switch (__LIB_14__::func_466())
				{
					case 1:
						__LIB_0__::func_671(0);
						TASK::TASK_AIM_GUN_AT_COORD(iLocal_463[0], -1531.6f, 4376.7f, 68f, -1, false, false);
						iLocal_247 = 0;
						if (Local_518.f_0 == 1)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
							CAM::SET_CAM_CONTROLS_MINI_MAP_HEADING(Local_518.f_4, true);
							func_794(&Local_518, &iLocal_463, 1, 0, 3000);
							__LIB_0__::func_499(179, 0);
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_393.f_0))
							{
							}
							PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
							PED::REMOVE_PED_DEFENSIVE_AREA(PLAYER::PLAYER_PED_ID(), true);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							func_16(&Local_518, &iLocal_463, 0, 1, 1, 1, 0, 3000);
							__LIB_0__::func_498(0, -1);
						}
						break;
				}
				Local_503.f_18 = 0;
				Local_503.f_19 = 0;
				func_790();
				RECORDING::REPLAY_STOP_EVENT();
				iLocal_241++;
			}
			break;
		case 4:
			if (__LIB_13__::func_716(PLAYER::PLAYER_PED_ID()) == 1 && !Local_503.f_16)
			{
				STREAMING::REMOVE_ANIM_DICT(sLocal_5749);
				iLocal_334 = 1;
				iLocal_264 = 100;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_435.f_0, false))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_435.f_0, false, false, false, false, false, false, false, false);
				}
				if (!HUD::DOES_BLIP_EXIST(Local_393.f_2))
				{
					Local_393.f_2 = __LIB_0__::func_666(Local_393.f_0, 0, 145);
				}
				__LIB_16__::func_882(&iLocal_463, 0, 1, 1);
				AUDIO::START_AUDIO_SCENE("EXILE_2_KILL_ENEMY_FRANKLIN");
				__LIB_17__::func_789(4, "shooting the rpg enemy", 0, 0, 0, 1);
				iLocal_241++;
			}
			break;
		case 5:
			break;
	}
	return 0;
}

void func_965()//Position - 0x9E600
{
	int iVar0;
	if (iLocal_734 == 0)
	{
		PATHFIND::SET_ROADS_IN_AREA(Local_377, Local_378, false, true);
		func_970();
		if (!STREAMING::IS_STREAMVOL_ACTIVE())
		{
		}
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		if (func_969())
		{
			if (!__LIB_13__::func_755(&Local_687, 0))
			{
				if (func_740(1, 1, 1))
				{
					PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, false, true, true, true);
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10000f, true, false, false, false);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					PED::SET_CREATE_RANDOM_COPS(false);
					__LIB_16__::func_880(&iLocal_463, 0, 0);
					__LIB_36__::func_931(&iLocal_463, 0);
					__LIB_31__::func_990(&iLocal_463, 1, 0, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), true);
					PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), false);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_403.f_0, 0, Local_364, 0f, 0f, 90f, false, false, false, false, 2, true, 0);
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), -1, true, true);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), joaat("COMPONENT_AT_SCOPE_MAX"));
					PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched", 0.25f);
					PED::SET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), "Wpn_AssaultRifle_WeaponHoldingCrouched");
					PED::SET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID(), "move_ped_crouched_strafing");
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true);
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 156, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
					__LIB_17__::func_462(&iLocal_463, 0, 9);
					__LIB_17__::func_462(&iLocal_463, 0, 12);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[1]);
					ENTITY::SET_ENTITY_COORDS(iLocal_463[1], -1683.4967f, 4454.595f, 1.566f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_463[1], 239.1512f);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_463[1], true, 1);
					TASK::TASK_PLAY_ANIM(iLocal_463[1], "missexile2", "FranklinWaveToHelicopter", 1000f, -8f, -1, 0, 0f, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[1], false, false);
					iLocal_264 = 999;
					if (ENTITY::DOES_ENTITY_EXIST(Local_393.f_0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_393.f_0);
						ENTITY::SET_ENTITY_COORDS(Local_393.f_0, -1679.8206f, 4455.988f, 1.2653f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_393.f_0, 244.1821f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_393.f_0, true, 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "fra_0_ig_1_chop_growl", 1000f, -8f, -1, 0, 0f, false, false, false);
						TASK::TASK_PLAY_ANIM(0, "missexile2", "fra0_ig_12_chop_waiting_a", 4f, -8f, -1, 1, 0f, false, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_393.f_0, iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_393.f_0, false, false);
						iLocal_255 = 200;
					}
					__LIB_17__::func_189(&Local_403);
					VEHICLE::SET_VEHICLE_EXTRA(Local_403.f_0, 12, true);
					ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, false, true, true, true, true, false, false, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_403.f_0, false, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_403.f_0);
					ENTITY::SET_ENTITY_VISIBLE(Local_403.f_0, true, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_403.f_0, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, Local_403.f_13, sLocal_362, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 7000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[2]);
					PED::SET_PED_INTO_VEHICLE(iLocal_463[2], Local_403.f_0, -1);
					iVar0 = 1;
					while (iVar0 <= (Local_392.f_0 - 1))
					{
						if (((iVar0 != 7 && iVar0 != 14) && iVar0 != 15) && iVar0 != 16)
						{
							func_514(&(Local_392[iVar0 /*33*/]));
						}
						iVar0++;
					}
					Local_435.f_0 = VEHICLE::CREATE_VEHICLE(Local_435.f_1, Local_435.f_3, Local_435.f_6, true, true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_435.f_0, 3);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_435.f_0, 5f);
					ENTITY::SET_ENTITY_PROOFS(Local_435.f_0, true, true, true, true, true, false, false, false);
					iLocal_380 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1687.75f, 4457.777f, 1.732926f, 11.104589f, -1.886935f, -116.44383f, 30.96153f, true, 2);
					CAM::SET_CAM_PARAMS(iLocal_380, -1687.75f, 4457.777f, 1.732926f, 15.726158f, -1.886931f, -118.33634f, 18.31165f, 2000, 1, 1, 2);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					RECORDING::REPLAY_START_EVENT(3);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FLY_HELI"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_FLY_HELI");
					}
					AUDIO::START_AUDIO_SCENE("EXILE_2_HELI_IN_POSITION_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_HELI_CS");
					iLocal_242 = MISC::GET_GAME_TIMER();
					iLocal_331 = 0;
					iLocal_349 = 0;
					iLocal_734 = 1;
				}
			}
		}
	}
	if (iLocal_734 == 1)
	{
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		__LIB_0__::func_203(1, 0);
		STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
		switch (iLocal_349)
		{
			case 0:
				if (__LIB_16__::func_9(&uLocal_519, "TM44AUD", "TM44_SCENE", "TM44_SCENE_1", 7, 0, 0))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 10f, 4);
					TASK::TASK_AIM_GUN_AT_COORD(PLAYER::PLAYER_PED_ID(), -1616.5f, 4424.6f, 9.4f, -1, true, false);
					iLocal_349++;
				}
				break;
			case 1:
				if (!__LIB_13__::func_755(&Local_687, 0))
				{
					CAM::DESTROY_CAM(iLocal_380, false);
					iLocal_380 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -1482.6023f, 4334.9736f, 98.817444f, 21.26448f, -0.005575f, -157.20067f, 39.269314f, true, 2);
					CAM::SET_CAM_PARAMS(iLocal_380, -1482.6111f, 4334.993f, 98.717445f, 20.558702f, -0.005577f, -158.63219f, 39.269314f, 1000, 1, 1, 2);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_403.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_403.f_0, 4, sLocal_362, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_403.f_0, true, true, false);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_403.f_0);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_403.f_0, true);
					TASK::TASK_AIM_GUN_AT_COORD(PLAYER::PLAYER_PED_ID(), -1616.5f, 4424.6f, 9.4f, -1, true, false);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Aiming"), true, 0, false);
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 401, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-12f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-41f, 1f);
					GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, false);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_349++;
				}
				break;
			case 2:
				if (!CAM::IS_CAM_INTERPOLATING(iLocal_380))
				{
					iLocal_734 = 2;
				}
				break;
		}
		if (__LIB_0__::func_500())
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				iLocal_734 = 3;
			}
		}
	}
	if (iLocal_734 == 2)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_HELI_IN_POSITION_CUTSCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("EXILE_2_HELI_IN_POSITION_CUTSCENE");
		}
		__LIB_17__::func_426(&Local_403);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_463[1], false, 1);
		__LIB_17__::func_78(&iLocal_463, 1, 1);
		__LIB_16__::func_880(&iLocal_463, 2, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_HEAVYSNIPER"), true);
		CAM::DISABLE_AIM_CAM_THIS_UPDATE();
		RECORDING::REPLAY_STOP_EVENT();
		iLocal_734 = 0;
		iLocal_733 = 7;
	}
	if (iLocal_734 == 3)
	{
		__LIB_17__::func_610();
		__LIB_0__::func_325();
		if (__LIB_14__::func_466() != 0)
		{
			__LIB_36__::func_931(&iLocal_463, 0);
			__LIB_31__::func_990(&iLocal_463, 1, 0, 0);
		}
		iLocal_734 = 2;
	}
}

int func_969()//Position - 0x9ED71
{
	if ((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_461) && STREAMING::HAS_MODEL_LOADED(iLocal_462)) && STREAMING::HAS_MODEL_LOADED(iLocal_460)) && STREAMING::HAS_MODEL_LOADED(Local_391[0 /*33*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_446.f_2)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_403.f_13, sLocal_362)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, sLocal_362)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, sLocal_362)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_435.f_13, "lkexile2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_0")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_2")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("exile2_3")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_5749)) && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched")) && STREAMING::HAS_ANIM_SET_LOADED("Wpn_AssaultRifle_WeaponHoldingCrouched")) && STREAMING::HAS_ANIM_SET_LOADED("move_ped_crouched_strafing")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_HEAVYSNIPER"))) && STREAMING::HAS_MODEL_LOADED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_HEAVYSNIPER")))) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1)) && STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		return 1;
	}
	return 0;
}

void func_970()//Position - 0x9EEFA
{
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(Local_391[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(Local_446.f_2);
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_403.f_13, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, sLocal_362);
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(Local_435.f_13, "lkexile2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_0");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_1");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_2");
	TASK::REQUEST_WAYPOINT_RECORDING("exile2_3");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
	STREAMING::REQUEST_ANIM_DICT(sLocal_5749);
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched");
	STREAMING::REQUEST_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REQUEST_ANIM_SET("move_ped_crouched_strafing");
	WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_HEAVYSNIPER"), 31, 0);
	STREAMING::REQUEST_MODEL(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_HEAVYSNIPER")));
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("EXILE_2_01", false, -1);
	STREAMING::REQUEST_PTFX_ASSET();
}

int func_971()//Position - 0x9EFFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	if (iLocal_734 == 0)
	{
		func_999();
		if ((((((STREAMING::HAS_MODEL_LOADED(iLocal_461) && STREAMING::HAS_MODEL_LOADED(iLocal_460)) && STREAMING::HAS_MODEL_LOADED(Local_426.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_403.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_403.f_1)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexile2")) && AUDIO::PREPARE_MUSIC_EVENT("EXL2_SWITCH_START"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_418.f_0))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_418.f_0, 0f);
			}
			MISC::CLEAR_AREA(1554.6674f, 3743.115f, 33.5237f, 100f, true, false, false, false);
			__LIB_0__::func_221(&uLocal_519, 2);
			__LIB_16__::func_43(&Local_426, 2, 1554.6674f, 3743.115f, 33.5237f, 212.649f, 1, 0);
			VEHICLE::SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Local_426.f_0, true);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_426.f_0, 2, "lkexile2", true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_426.f_0, 5000f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_426.f_0, true);
			VEHICLE::SET_PLAYBACK_SPEED(Local_426.f_0, 0f);
			ENTITY::SET_ENTITY_VISIBLE(Local_426.f_0, false, false);
			func_41(&(iLocal_463[0]), 0, Local_426.f_0, 0, 1, 0, 0);
			func_521(iLocal_463[0]);
			func_520(&(iLocal_463[0]), 1);
			func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_463[0], false, false);
			func_41(&(iLocal_463[2]), 2, Local_426.f_0, -1, 1, 0, 0);
			func_521(iLocal_463[2]);
			func_520(&(iLocal_463[2]), 1);
			func_379(iLocal_463[2], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_0__::func_222(&uLocal_519, 2, iLocal_463[2], "trevor", 0, 1);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_463[2], false, false);
			iLocal_315 = Local_426.f_0;
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PED::SET_CREATE_RANDOM_COPS(true);
			if (HUD::DOES_BLIP_EXIST(Local_393.f_2))
			{
				HUD::REMOVE_BLIP(&(Local_393.f_2));
			}
			__LIB_36__::func_931(&iLocal_463, 2);
			Local_503.f_12 = iLocal_463[2];
			iLocal_252 = 1;
			iLocal_769 = 4;
			MISC::CLEAR_AREA(1768.1128f, 3240.0544f, 41.0869f, 10f, true, false, false, false);
			__LIB_17__::func_785(20, 1702.9482f, 3272.0217f, 40.1539f, 247.3247f);
			__LIB_17__::func_93(20);
			__LIB_0__::func_342(20);
			Local_403.f_0 = VEHICLE::CREATE_VEHICLE(Local_403.f_1, 1768.1128f, 3240.0544f, 41.0869f, 42.5289f, true, true, false);
			__LIB_0__::func_679(Local_403.f_0, 0);
			VEHICLE::SET_VEHICLE_LIVERY(Local_403.f_0, 1);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_403.f_0, false);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_403.f_0, true);
			VEHICLE::SET_VEHICLE_COLOURS(Local_403.f_0, 34, 34);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_403.f_0, 0, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_403.f_0, 5f);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_403.f_0, true);
			AUDIO::TRIGGER_MUSIC_EVENT("EXL2_SWITCH_START");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_GO_TO_CRASH_SITE"))
			{
				AUDIO::STOP_AUDIO_SCENE("EXILE_2_GO_TO_CRASH_SITE");
			}
			iLocal_734 = 1;
		}
	}
	if (iLocal_734 == 1)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			switch (__LIB_14__::func_466())
			{
				case 2:
					PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
					switch (iLocal_267)
					{
						case 0:
							iLocal_255 = 101;
							func_993(&Local_687, 1);
							if (__LIB_28__::func_235(&Local_687, ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), 50f, 50f, 4f, 0, iLocal_463[0], "FS_HELI_2", "FS_michael_0", 0, 1, 1, -1))
							{
								__LIB_13__::func_815(&Local_687, 0, 0);
								iLocal_267++;
							}
							break;
						case 1:
							func_990(Local_403.f_0);
							func_988();
							if (!iLocal_344)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
								{
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_GO_TO_HELI"))
									{
										AUDIO::STOP_AUDIO_SCENE("EXILE_2_GO_TO_HELI");
									}
									AUDIO::START_AUDIO_SCENE("EXILE_2_FLY_HELI");
									if (ENTITY::DOES_ENTITY_EXIST(Local_426.f_0))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_426.f_0, false))
										{
											__LIB_17__::func_201(Local_426.f_0, 1791.2455f, 3242.5083f, 41.5105f, 83.8551f, 24, 0);
										}
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_426.f_1);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_403.f_0, false);
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_403.f_0, true, 1);
									iLocal_344 = 1;
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 10f, 4);
									__LIB_17__::func_789(2, "fly to franklin", 0, 0, 0, 1);
								}
							}
							func_976(&Local_687, -1503.4f, 4358.3f, 155.7f, 0.1f, 0.1f, 0.1f, 0, iLocal_463[0], Local_403.f_0, "FS_forest_0", "FS_michael_0", "", "FS_HELI_1", 0, 1, 1, -1);
							if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
							{
								if (!func_535("EXL2_HELI_LIFT"))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
									{
										if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_403.f_0) > 2f)
										{
											AUDIO::TRIGGER_MUSIC_EVENT("EXL2_HELI_LIFT");
											func_523("EXL2_HELI_LIFT", 1);
										}
									}
								}
								if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
								{
									HUD::SET_BLIP_ROUTE(Local_687.f_5, false);
								}
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.4f, 4358.3f, 155.7f, 70f, 70f, 70f, false, true, 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), true) < 50f)
								{
									__LIB_0__::func_325();
									__LIB_13__::func_815(&Local_687, 1, 0);
									__LIB_17__::func_189(&Local_403);
									iLocal_734 = 0;
									iLocal_733 = 6;
									return 1;
								}
								else
								{
									HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
									GRAPHICS::DRAW_MARKER(6, -1503.4f, 4358.3f, 155.7f, 0f, 0f, 0f, 0f, 0f, 90f, 25f, 25f, 25f, iVar0, iVar1, iVar2, 100, true, false, 2, false, 0, 0, false);
								}
							}
							break;
					}
					func_975();
					break;
				}
		}
		func_972();
		func_784();
		func_532();
	}
	if (iLocal_734 == 2)
	{
		iLocal_734 = 0;
		iLocal_733 = 6;
	}
	if (iLocal_734 == 3)
	{
		if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (func_740(0, 1, 1))
			{
				__LIB_13__::func_815(&Local_687, 1, 0);
				ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, true, true, true, true, true, false, false, false);
				iLocal_734 = 0;
				iLocal_733 = 6;
			}
		}
	}
	return 0;
}

void func_972()//Position - 0x9F5D8
{
	switch (iLocal_252)
	{
		case 0:
			if (iLocal_334)
			{
				if (func_856(&iLocal_463, 1, 1))
				{
					switch (__LIB_14__::func_466())
					{
						case 2:
							if (__LIB_17__::func_82(&iLocal_463, 1))
							{
								__LIB_0__::func_325();
								Local_503.f_12 = iLocal_463[1];
								HUD::CLEAR_PRINTS();
								HUD::CLEAR_HELP(true);
								__LIB_13__::func_815(&Local_687, 1, 0);
								ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, true, true, true, true, true, false, false, false);
								iLocal_315 = Local_426.f_0;
								iLocal_252++;
							}
							break;
						case 1:
							if (__LIB_17__::func_82(&iLocal_463, 2))
							{
								if (HUD::DOES_BLIP_EXIST(Local_393.f_2))
								{
									HUD::REMOVE_BLIP(&(Local_393.f_2));
								}
								Local_503.f_12 = iLocal_463[2];
								HUD::CLEAR_PRINTS();
								iLocal_315 = Local_426.f_0;
								iLocal_252++;
							}
							break;
						}
					}
			}
			break;
		case 1:
			if (!func_973(&iLocal_770))
			{
			}
			else
			{
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 183);
				switch (__LIB_14__::func_466())
				{
					case 2:
						__LIB_17__::func_78(&iLocal_463, 1, 1);
						ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, false, false, false, false, false, false, false, false);
						if (ENTITY::DOES_ENTITY_EXIST(Local_426.f_0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_426.f_0, false))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_426.f_0))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_426.f_0);
								}
							}
						}
						iLocal_334 = 0;
						iLocal_252 = 0;
						AUDIO::START_AUDIO_SCENE("EXILE_2_GO_TO_HELI");
						AUDIO::TRIGGER_MUSIC_EVENT("EXL2_TRUCK");
						STREAMING::NEW_LOAD_SCENE_STOP();
						func_975();
						break;
					case 1:
						__LIB_17__::func_78(&iLocal_463, 2, 1);
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_403.f_0, true);
						}
						iLocal_252 = 0;
						break;
					}
			}
			break;
	}
}

int func_973(int iParam0)//Position - 0x9F765
{
	int iVar0;
	int iVar1;
	switch (iLocal_769)
	{
		case 0:
			break;
		case 4:
			__LIB_36__::func_931(&iLocal_463, 2);
			iLocal_769 = 5;
		case 5:
			if (__LIB_17__::func_97(&Local_503, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_503.f_18)
				{
					if (!Local_503.f_19)
					{
						if (__LIB_31__::func_990(&iLocal_463, 1, 0, 0))
						{
							switch (__LIB_14__::func_466())
							{
								case 2:
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_315, false))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_315) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_463[0], iLocal_315))
										{
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[1]);
											ENTITY::SET_ENTITY_COORDS(iLocal_463[1], -1683.4967f, 4454.595f, 1.566f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(iLocal_463[1], 239.1512f);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_393.f_0);
											ENTITY::SET_ENTITY_COORDS(Local_393.f_0, -1679.8206f, 4455.988f, 1.2653f, true, false, false, true);
											ENTITY::SET_ENTITY_HEADING(Local_393.f_0, 114.6932f);
											PED::SET_PED_CAN_RAGDOLL(Local_393.f_0, false);
										}
									}
									break;
								case 1:
									break;
							}
							Local_503.f_19 = 1;
						}
					}
				}
				if (!iLocal_345)
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						iVar1 = STREAMING::GET_PLAYER_SWITCH_STATE();
						if (iVar1 >= 9)
						{
							MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_426.f_0, true), 50f, true, false, false, false);
							MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 200f, false, false, false, false, false, false, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_426.f_0))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_426.f_0, 1f);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_426.f_0, (5000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_426.f_0)));
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_426.f_0, true);
								iLocal_345 = 1;
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_426.f_0, 2, "lkexile2", true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_426.f_0, 5000f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_426.f_0, true);
								iLocal_345 = 1;
							}
							Local_503.f_17 = 1;
							__LIB_17__::func_97(&Local_503, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0);
							iLocal_769 = 6;
						}
						else
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		case 6:
			CAM::DESTROY_ALL_CAMS(false);
			func_974(iParam0, Local_426.f_0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_426.f_0, true, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_463[0], true, false);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
			__LIB_16__::func_29(iParam0);
			CAM::SET_CAM_ACTIVE(iParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			iLocal_5746 = 0;
			iLocal_769 = 7;
		case 7:
			if (CAM::IS_CAM_ACTIVE(iParam0->f_1))
			{
				if (iVar0 >= 1)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_5735);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_5735, 1f);
				}
				if (!iLocal_233)
				{
					if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= 0.2f)
					{
						iLocal_233 = 0;
					}
				}
				iVar0 = func_903(iParam0);
				if (CAM::GET_CAM_SPLINE_PHASE(iParam0->f_1) >= 1f)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						__LIB_17__::func_8(&uLocal_738, Local_426.f_0, 2, 1.75f, 1000, 1000, 700, 700, 1045220557);
						__LIB_15__::func_247(&uLocal_738, 5f, 0f, -5f);
						__LIB_15__::func_966(&uLocal_738, 1, 1, 1, 0, 0, 0);
					}
					iLocal_769 = 9;
				}
				else
				{
					return 0;
				}
			}
			break;
		case 8:
			if (CAM::DOES_CAM_EXIST(iParam0->f_1))
			{
				CAM::DESTROY_CAM(iParam0->f_1, false);
				CAM::DESTROY_ALL_CAMS(false);
			}
			iLocal_769 = 9;
		case 9:
			MISC::SET_TIME_SCALE(1f);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				if (__LIB_15__::func_966(&uLocal_738, 1, 1, 1, 0, 0, 0))
				{
					MISC::SET_TIME_SCALE(1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					if (CAM::DOES_CAM_EXIST(iParam0->f_1))
					{
						CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
						CAM::DESTROY_CAM(iParam0->f_1, false);
					}
					CAM::DESTROY_ALL_CAMS(false);
					if (!iLocal_5746)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						HUD::DISPLAY_RADAR(true);
						HUD::DISPLAY_HUD(true);
						iLocal_5746 = 1;
					}
					iLocal_769 = 0;
					return 1;
				}
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(iParam0->f_1))
				{
					CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
					CAM::DESTROY_CAM(iParam0->f_1, false);
				}
				CAM::DESTROY_ALL_CAMS(false);
				if (!iLocal_5746)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					iLocal_5746 = 1;
				}
				iLocal_769 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_974(var uParam0, int iParam1)//Position - 0x9FB8B
{
	if (!*uParam0)
	{
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { 6.8668f, -11.168f, 28.3491f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { -72.7517f, -0.0281f, 35.9953f };
			uParam0->f_10[0 /*57*/].f_18 = 0;
			uParam0->f_10[0 /*57*/].f_19 = 0;
			uParam0->f_10[0 /*57*/].f_20 = 0;
			uParam0->f_10[0 /*57*/].f_21 = 60f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 1f;
			uParam0->f_10[0 /*57*/].f_53 = 2;
			uParam0->f_10[0 /*57*/].f_23 = 0.2f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 0;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1500;
			uParam0->f_10[1 /*57*/].f_6 = { 5.7354f, -9.3271f, 25.0715f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { -74.566f, 0.2104f, 32.3517f };
			uParam0->f_10[1 /*57*/].f_18 = 0;
			uParam0->f_10[1 /*57*/].f_19 = 0;
			uParam0->f_10[1 /*57*/].f_20 = 0;
			uParam0->f_10[1 /*57*/].f_21 = 60f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 1f;
			uParam0->f_10[1 /*57*/].f_53 = 2;
			uParam0->f_10[1 /*57*/].f_23 = 0.2f;
			uParam0->f_10[1 /*57*/].f_28 = 0;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 0;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 500;
			uParam0->f_10[2 /*57*/].f_6 = { 5.1772f, -7.9185f, 7.702f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { -0.1686f, 0.4822f, -0.5376f };
			uParam0->f_10[2 /*57*/].f_18 = 1;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 45f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 2;
			uParam0->f_10[2 /*57*/].f_23 = 0.2f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 1f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 0;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 1f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_2 = 0;
			uParam0->f_10[3 /*57*/].f_3 = -1;
			uParam0->f_10[3 /*57*/].f_4 = 0;
			uParam0->f_10[3 /*57*/].f_5 = 400;
			uParam0->f_10[3 /*57*/].f_6 = { 3.7694f, -5.7515f, 1.8344f };
			uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_12 = 0f;
			uParam0->f_10[3 /*57*/].f_16 = 0f;
			uParam0->f_10[3 /*57*/].f_17 = 0;
			uParam0->f_10[3 /*57*/].f_9 = { 0.0332f, 0.1615f, -0.469f };
			uParam0->f_10[3 /*57*/].f_18 = 1;
			uParam0->f_10[3 /*57*/].f_19 = 0;
			uParam0->f_10[3 /*57*/].f_20 = 0;
			uParam0->f_10[3 /*57*/].f_21 = 40f;
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_27 = 0;
			uParam0->f_10[3 /*57*/].f_50 = 0;
			uParam0->f_10[3 /*57*/].f_51 = 0f;
			uParam0->f_10[3 /*57*/].f_52 = 0f;
			uParam0->f_10[3 /*57*/].f_22 = 0f;
			uParam0->f_10[3 /*57*/].f_53 = 2;
			uParam0->f_10[3 /*57*/].f_23 = 0.2f;
			uParam0->f_10[3 /*57*/].f_28 = 0;
			uParam0->f_10[3 /*57*/].f_29 = 0f;
			uParam0->f_10[3 /*57*/].f_32 = 0.4f;
			uParam0->f_10[3 /*57*/].f_30 = 0;
			uParam0->f_10[3 /*57*/].f_31 = 0;
			uParam0->f_10[3 /*57*/].f_33 = 1f;
			uParam0->f_10[3 /*57*/].f_34 = 0;
			uParam0->f_10[3 /*57*/].f_35 = 1f;
			uParam0->f_10[3 /*57*/].f_36 = 0;
			uParam0->f_10[3 /*57*/].f_37 = 0;
			uParam0->f_10[3 /*57*/].f_39 = 0f;
			uParam0->f_10[3 /*57*/].f_40 = 0f;
			uParam0->f_10[3 /*57*/].f_41 = 0;
			uParam0->f_10[3 /*57*/].f_42 = 0;
			uParam0->f_10[3 /*57*/].f_43 = 0;
			uParam0->f_10[3 /*57*/].f_38 = 0f;
			uParam0->f_10[3 /*57*/].f_45 = 0;
			uParam0->f_10[3 /*57*/].f_46 = 0;
			uParam0->f_10[3 /*57*/].f_47 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[4 /*57*/].f_2 = 0;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 800;
			uParam0->f_10[4 /*57*/].f_6 = { 2.7853f, -4.2615f, 1.0039f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { -0.0299f, 0.0337f, -0.1757f };
			uParam0->f_10[4 /*57*/].f_18 = 1;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 40f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 0f;
			uParam0->f_10[4 /*57*/].f_53 = 2;
			uParam0->f_10[4 /*57*/].f_23 = 0.2f;
			uParam0->f_10[4 /*57*/].f_28 = 0;
			uParam0->f_10[4 /*57*/].f_29 = 0f;
			uParam0->f_10[4 /*57*/].f_32 = 0.958f;
			uParam0->f_10[4 /*57*/].f_30 = 0;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 1f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 0;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 1200;
			uParam0->f_10[5 /*57*/].f_6 = { 2.653f, -4.0735f, 0.98f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 0.0424f, -0.0112f, 0.0879f };
			uParam0->f_10[5 /*57*/].f_18 = 1;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 40f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 2;
			uParam0->f_10[5 /*57*/].f_23 = 0.2f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 1f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_1217 = 6;
			uParam0->f_1218 = 0;
			uParam0->f_1233 = -1f;
			uParam0->f_1234 = -1f;
			uParam0->f_2 = 1;
			uParam0->f_3 = 0;
			uParam0->f_1219 = 0;
		}
		else
		{
			uParam0->f_10[0 /*57*/].f_2 = 0;
			uParam0->f_10[0 /*57*/].f_3 = -1;
			uParam0->f_10[0 /*57*/].f_4 = 0;
			uParam0->f_10[0 /*57*/].f_5 = 0;
			uParam0->f_10[0 /*57*/].f_6 = { 6.8668f, -11.168f, 28.3491f };
			uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_12 = 0f;
			uParam0->f_10[0 /*57*/].f_16 = 0f;
			uParam0->f_10[0 /*57*/].f_17 = 0;
			uParam0->f_10[0 /*57*/].f_9 = { -72.7517f, -0.0281f, 35.9953f };
			uParam0->f_10[0 /*57*/].f_18 = 0;
			uParam0->f_10[0 /*57*/].f_19 = 0;
			uParam0->f_10[0 /*57*/].f_20 = 0;
			uParam0->f_10[0 /*57*/].f_21 = 60f;
			uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[0 /*57*/].f_27 = 0;
			uParam0->f_10[0 /*57*/].f_50 = 0;
			uParam0->f_10[0 /*57*/].f_51 = 0f;
			uParam0->f_10[0 /*57*/].f_52 = 0f;
			uParam0->f_10[0 /*57*/].f_22 = 1f;
			uParam0->f_10[0 /*57*/].f_53 = 2;
			uParam0->f_10[0 /*57*/].f_23 = 0.2f;
			uParam0->f_10[0 /*57*/].f_28 = 0;
			uParam0->f_10[0 /*57*/].f_29 = 0f;
			uParam0->f_10[0 /*57*/].f_32 = 0f;
			uParam0->f_10[0 /*57*/].f_30 = 0;
			uParam0->f_10[0 /*57*/].f_31 = 0;
			uParam0->f_10[0 /*57*/].f_33 = 1f;
			uParam0->f_10[0 /*57*/].f_34 = 0;
			uParam0->f_10[0 /*57*/].f_35 = 0f;
			uParam0->f_10[0 /*57*/].f_36 = 0;
			uParam0->f_10[0 /*57*/].f_37 = 0;
			uParam0->f_10[0 /*57*/].f_39 = 0f;
			uParam0->f_10[0 /*57*/].f_40 = 0f;
			uParam0->f_10[0 /*57*/].f_41 = 0;
			uParam0->f_10[0 /*57*/].f_42 = 0;
			uParam0->f_10[0 /*57*/].f_43 = 0;
			uParam0->f_10[0 /*57*/].f_38 = 0f;
			uParam0->f_10[0 /*57*/].f_45 = 0;
			uParam0->f_10[0 /*57*/].f_46 = 0;
			uParam0->f_10[0 /*57*/].f_47 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[1 /*57*/].f_2 = 0;
			uParam0->f_10[1 /*57*/].f_3 = -1;
			uParam0->f_10[1 /*57*/].f_4 = 0;
			uParam0->f_10[1 /*57*/].f_5 = 1500;
			uParam0->f_10[1 /*57*/].f_6 = { 5.7354f, -9.3271f, 25.0715f };
			uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_12 = 0f;
			uParam0->f_10[1 /*57*/].f_16 = 0f;
			uParam0->f_10[1 /*57*/].f_17 = 0;
			uParam0->f_10[1 /*57*/].f_9 = { -74.566f, 0.2104f, 32.3517f };
			uParam0->f_10[1 /*57*/].f_18 = 0;
			uParam0->f_10[1 /*57*/].f_19 = 0;
			uParam0->f_10[1 /*57*/].f_20 = 0;
			uParam0->f_10[1 /*57*/].f_21 = 60f;
			uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[1 /*57*/].f_27 = 0;
			uParam0->f_10[1 /*57*/].f_50 = 0;
			uParam0->f_10[1 /*57*/].f_51 = 0f;
			uParam0->f_10[1 /*57*/].f_52 = 0f;
			uParam0->f_10[1 /*57*/].f_22 = 1f;
			uParam0->f_10[1 /*57*/].f_53 = 2;
			uParam0->f_10[1 /*57*/].f_23 = 0.2f;
			uParam0->f_10[1 /*57*/].f_28 = 0;
			uParam0->f_10[1 /*57*/].f_29 = 1f;
			uParam0->f_10[1 /*57*/].f_32 = 0f;
			uParam0->f_10[1 /*57*/].f_30 = 0;
			uParam0->f_10[1 /*57*/].f_31 = 0;
			uParam0->f_10[1 /*57*/].f_33 = 1f;
			uParam0->f_10[1 /*57*/].f_34 = 0;
			uParam0->f_10[1 /*57*/].f_35 = 0f;
			uParam0->f_10[1 /*57*/].f_36 = 0;
			uParam0->f_10[1 /*57*/].f_37 = 0;
			uParam0->f_10[1 /*57*/].f_39 = 0f;
			uParam0->f_10[1 /*57*/].f_40 = 0f;
			uParam0->f_10[1 /*57*/].f_41 = 0;
			uParam0->f_10[1 /*57*/].f_42 = 0;
			uParam0->f_10[1 /*57*/].f_43 = 0;
			uParam0->f_10[1 /*57*/].f_38 = 0f;
			uParam0->f_10[1 /*57*/].f_45 = 0;
			uParam0->f_10[1 /*57*/].f_46 = 0;
			uParam0->f_10[1 /*57*/].f_47 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[2 /*57*/].f_2 = 0;
			uParam0->f_10[2 /*57*/].f_3 = -1;
			uParam0->f_10[2 /*57*/].f_4 = 0;
			uParam0->f_10[2 /*57*/].f_5 = 500;
			uParam0->f_10[2 /*57*/].f_6 = { 5.1772f, -7.9185f, 7.702f };
			uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_12 = 0f;
			uParam0->f_10[2 /*57*/].f_16 = 0f;
			uParam0->f_10[2 /*57*/].f_17 = 0;
			uParam0->f_10[2 /*57*/].f_9 = { -0.1686f, 0.4822f, -0.5376f };
			uParam0->f_10[2 /*57*/].f_18 = 1;
			uParam0->f_10[2 /*57*/].f_19 = 0;
			uParam0->f_10[2 /*57*/].f_20 = 0;
			uParam0->f_10[2 /*57*/].f_21 = 40f;
			uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[2 /*57*/].f_27 = 0;
			uParam0->f_10[2 /*57*/].f_50 = 0;
			uParam0->f_10[2 /*57*/].f_51 = 0f;
			uParam0->f_10[2 /*57*/].f_52 = 0f;
			uParam0->f_10[2 /*57*/].f_22 = 1f;
			uParam0->f_10[2 /*57*/].f_53 = 2;
			uParam0->f_10[2 /*57*/].f_23 = 0.2f;
			uParam0->f_10[2 /*57*/].f_28 = 0;
			uParam0->f_10[2 /*57*/].f_29 = 1f;
			uParam0->f_10[2 /*57*/].f_32 = 0f;
			uParam0->f_10[2 /*57*/].f_30 = 0;
			uParam0->f_10[2 /*57*/].f_31 = 0;
			uParam0->f_10[2 /*57*/].f_33 = 1f;
			uParam0->f_10[2 /*57*/].f_34 = 0;
			uParam0->f_10[2 /*57*/].f_35 = 1f;
			uParam0->f_10[2 /*57*/].f_36 = 0;
			uParam0->f_10[2 /*57*/].f_37 = 0;
			uParam0->f_10[2 /*57*/].f_39 = 0f;
			uParam0->f_10[2 /*57*/].f_40 = 0f;
			uParam0->f_10[2 /*57*/].f_41 = 0;
			uParam0->f_10[2 /*57*/].f_42 = 0;
			uParam0->f_10[2 /*57*/].f_43 = 0;
			uParam0->f_10[2 /*57*/].f_38 = 0f;
			uParam0->f_10[2 /*57*/].f_45 = 0;
			uParam0->f_10[2 /*57*/].f_46 = 0;
			uParam0->f_10[2 /*57*/].f_47 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[3 /*57*/].f_2 = 0;
			uParam0->f_10[3 /*57*/].f_3 = -1;
			uParam0->f_10[3 /*57*/].f_4 = 0;
			uParam0->f_10[3 /*57*/].f_5 = 400;
			uParam0->f_10[3 /*57*/].f_6 = { 3.7694f, -5.7515f, 1.8344f };
			uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_12 = 0f;
			uParam0->f_10[3 /*57*/].f_16 = 0f;
			uParam0->f_10[3 /*57*/].f_17 = 0;
			uParam0->f_10[3 /*57*/].f_9 = { 0.0332f, 0.1615f, -0.469f };
			uParam0->f_10[3 /*57*/].f_18 = 1;
			uParam0->f_10[3 /*57*/].f_19 = 0;
			uParam0->f_10[3 /*57*/].f_20 = 0;
			uParam0->f_10[3 /*57*/].f_21 = 40f;
			uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[3 /*57*/].f_27 = 0;
			uParam0->f_10[3 /*57*/].f_50 = 0;
			uParam0->f_10[3 /*57*/].f_51 = 0f;
			uParam0->f_10[3 /*57*/].f_52 = 0f;
			uParam0->f_10[3 /*57*/].f_22 = 0f;
			uParam0->f_10[3 /*57*/].f_53 = 2;
			uParam0->f_10[3 /*57*/].f_23 = 0.2f;
			uParam0->f_10[3 /*57*/].f_28 = 0;
			uParam0->f_10[3 /*57*/].f_29 = 0f;
			uParam0->f_10[3 /*57*/].f_32 = 0.4f;
			uParam0->f_10[3 /*57*/].f_30 = 0;
			uParam0->f_10[3 /*57*/].f_31 = 0;
			uParam0->f_10[3 /*57*/].f_33 = 1f;
			uParam0->f_10[3 /*57*/].f_34 = 0;
			uParam0->f_10[3 /*57*/].f_35 = 1f;
			uParam0->f_10[3 /*57*/].f_36 = 0;
			uParam0->f_10[3 /*57*/].f_37 = 0;
			uParam0->f_10[3 /*57*/].f_39 = 0f;
			uParam0->f_10[3 /*57*/].f_40 = 0f;
			uParam0->f_10[3 /*57*/].f_41 = 0;
			uParam0->f_10[3 /*57*/].f_42 = 0;
			uParam0->f_10[3 /*57*/].f_43 = 0;
			uParam0->f_10[3 /*57*/].f_38 = 0f;
			uParam0->f_10[3 /*57*/].f_45 = 0;
			uParam0->f_10[3 /*57*/].f_46 = 0;
			uParam0->f_10[3 /*57*/].f_47 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[4 /*57*/].f_2 = 0;
			uParam0->f_10[4 /*57*/].f_3 = -1;
			uParam0->f_10[4 /*57*/].f_4 = 0;
			uParam0->f_10[4 /*57*/].f_5 = 800;
			uParam0->f_10[4 /*57*/].f_6 = { 2.7853f, -4.2615f, 1.0039f };
			uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_12 = 0f;
			uParam0->f_10[4 /*57*/].f_16 = 0f;
			uParam0->f_10[4 /*57*/].f_17 = 0;
			uParam0->f_10[4 /*57*/].f_9 = { -0.0299f, 0.0337f, -0.1757f };
			uParam0->f_10[4 /*57*/].f_18 = 1;
			uParam0->f_10[4 /*57*/].f_19 = 0;
			uParam0->f_10[4 /*57*/].f_20 = 0;
			uParam0->f_10[4 /*57*/].f_21 = 40f;
			uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[4 /*57*/].f_27 = 0;
			uParam0->f_10[4 /*57*/].f_50 = 0;
			uParam0->f_10[4 /*57*/].f_51 = 0f;
			uParam0->f_10[4 /*57*/].f_52 = 0f;
			uParam0->f_10[4 /*57*/].f_22 = 0f;
			uParam0->f_10[4 /*57*/].f_53 = 2;
			uParam0->f_10[4 /*57*/].f_23 = 0.2f;
			uParam0->f_10[4 /*57*/].f_28 = 0;
			uParam0->f_10[4 /*57*/].f_29 = 0f;
			uParam0->f_10[4 /*57*/].f_32 = 0.958f;
			uParam0->f_10[4 /*57*/].f_30 = 0;
			uParam0->f_10[4 /*57*/].f_31 = 0;
			uParam0->f_10[4 /*57*/].f_33 = 1f;
			uParam0->f_10[4 /*57*/].f_34 = 0;
			uParam0->f_10[4 /*57*/].f_35 = 1f;
			uParam0->f_10[4 /*57*/].f_36 = 0;
			uParam0->f_10[4 /*57*/].f_37 = 0;
			uParam0->f_10[4 /*57*/].f_39 = 0f;
			uParam0->f_10[4 /*57*/].f_40 = 0f;
			uParam0->f_10[4 /*57*/].f_41 = 0;
			uParam0->f_10[4 /*57*/].f_42 = 0;
			uParam0->f_10[4 /*57*/].f_43 = 0;
			uParam0->f_10[4 /*57*/].f_38 = 0f;
			uParam0->f_10[4 /*57*/].f_45 = 0;
			uParam0->f_10[4 /*57*/].f_46 = 0;
			uParam0->f_10[4 /*57*/].f_47 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[5 /*57*/].f_2 = 0;
			uParam0->f_10[5 /*57*/].f_3 = -1;
			uParam0->f_10[5 /*57*/].f_4 = 0;
			uParam0->f_10[5 /*57*/].f_5 = 1200;
			uParam0->f_10[5 /*57*/].f_6 = { 2.653f, -4.0735f, 0.98f };
			uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_12 = 0f;
			uParam0->f_10[5 /*57*/].f_16 = 0f;
			uParam0->f_10[5 /*57*/].f_17 = 0;
			uParam0->f_10[5 /*57*/].f_9 = { 0.0424f, -0.0112f, 0.0879f };
			uParam0->f_10[5 /*57*/].f_18 = 1;
			uParam0->f_10[5 /*57*/].f_19 = 0;
			uParam0->f_10[5 /*57*/].f_20 = 0;
			uParam0->f_10[5 /*57*/].f_21 = 40f;
			uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[5 /*57*/].f_27 = 0;
			uParam0->f_10[5 /*57*/].f_50 = 0;
			uParam0->f_10[5 /*57*/].f_51 = 0f;
			uParam0->f_10[5 /*57*/].f_52 = 0f;
			uParam0->f_10[5 /*57*/].f_22 = 0f;
			uParam0->f_10[5 /*57*/].f_53 = 2;
			uParam0->f_10[5 /*57*/].f_23 = 0.2f;
			uParam0->f_10[5 /*57*/].f_28 = 0;
			uParam0->f_10[5 /*57*/].f_29 = 0f;
			uParam0->f_10[5 /*57*/].f_32 = 0f;
			uParam0->f_10[5 /*57*/].f_30 = 1;
			uParam0->f_10[5 /*57*/].f_31 = 0;
			uParam0->f_10[5 /*57*/].f_33 = 1f;
			uParam0->f_10[5 /*57*/].f_34 = 0;
			uParam0->f_10[5 /*57*/].f_35 = 1f;
			uParam0->f_10[5 /*57*/].f_36 = 0;
			uParam0->f_10[5 /*57*/].f_37 = 0;
			uParam0->f_10[5 /*57*/].f_39 = 0f;
			uParam0->f_10[5 /*57*/].f_40 = 0f;
			uParam0->f_10[5 /*57*/].f_41 = 0;
			uParam0->f_10[5 /*57*/].f_42 = 0;
			uParam0->f_10[5 /*57*/].f_43 = 0;
			uParam0->f_10[5 /*57*/].f_38 = 0f;
			uParam0->f_10[5 /*57*/].f_45 = 0;
			uParam0->f_10[5 /*57*/].f_46 = 0;
			uParam0->f_10[5 /*57*/].f_47 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
			uParam0->f_10[6 /*57*/].f_54 = 1;
			uParam0->f_10[7 /*57*/].f_2 = 0;
			uParam0->f_10[7 /*57*/].f_3 = -1;
			uParam0->f_10[7 /*57*/].f_4 = 0;
			uParam0->f_10[7 /*57*/].f_5 = 0;
			uParam0->f_10[7 /*57*/].f_6 = { -4.481f, 7.8828f, 1.7302f };
			uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
			uParam0->f_10[7 /*57*/].f_12 = 0f;
			uParam0->f_10[7 /*57*/].f_16 = 0f;
			uParam0->f_10[7 /*57*/].f_17 = 0;
			uParam0->f_10[7 /*57*/].f_9 = { -0.4777f, 0.0964f, 0.7823f };
			uParam0->f_10[7 /*57*/].f_18 = 1;
			uParam0->f_10[7 /*57*/].f_19 = 0;
			uParam0->f_10[7 /*57*/].f_20 = 0;
			uParam0->f_10[7 /*57*/].f_21 = 40f;
			uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
			uParam0->f_10[7 /*57*/].f_27 = 0;
			uParam0->f_10[7 /*57*/].f_50 = 0;
			uParam0->f_10[7 /*57*/].f_51 = 0f;
			uParam0->f_10[7 /*57*/].f_52 = 0f;
			uParam0->f_10[7 /*57*/].f_22 = 0f;
			uParam0->f_10[7 /*57*/].f_53 = 0;
			uParam0->f_10[7 /*57*/].f_23 = 0f;
			uParam0->f_10[7 /*57*/].f_28 = 0;
			uParam0->f_10[7 /*57*/].f_29 = 0f;
			uParam0->f_10[7 /*57*/].f_32 = 0f;
			uParam0->f_10[7 /*57*/].f_30 = 0;
			uParam0->f_10[7 /*57*/].f_31 = 0;
			uParam0->f_10[7 /*57*/].f_33 = 1f;
			uParam0->f_10[7 /*57*/].f_34 = 0;
			uParam0->f_10[7 /*57*/].f_35 = 0f;
			uParam0->f_10[7 /*57*/].f_36 = 0;
			uParam0->f_10[7 /*57*/].f_37 = 0;
			uParam0->f_10[7 /*57*/].f_39 = 0f;
			uParam0->f_10[7 /*57*/].f_40 = 0f;
			uParam0->f_10[7 /*57*/].f_41 = 0;
			uParam0->f_10[7 /*57*/].f_42 = 0;
			uParam0->f_10[7 /*57*/].f_43 = 0;
			uParam0->f_10[7 /*57*/].f_38 = 0f;
			uParam0->f_10[7 /*57*/].f_45 = 0;
			uParam0->f_10[7 /*57*/].f_46 = 0;
			uParam0->f_10[7 /*57*/].f_47 = 0f;
			uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
			uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
			uParam0->f_1217 = 8;
			uParam0->f_1218 = 0;
			uParam0->f_1233 = -1f;
			uParam0->f_1234 = -1f;
			uParam0->f_2 = 1;
			uParam0->f_3 = 1;
			uParam0->f_1219 = 1500;
		}
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile2_FranklinToTruckOutro.txt";
		uParam0->f_1225 = "CameraInfo_Exile2_FranklinToTruckOutro.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = iParam1;
}

void func_975()//Position - 0xA14CA
{
	switch (iLocal_266)
	{
		case 0:
			if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_TSWITCH", 7, 0, 0, 0))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 5f, 4);
				iLocal_266++;
			}
			break;
		case 1:
			if (!__LIB_13__::func_755(&Local_687, 1))
			{
				if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_BANT1", 6, 0, 0, 0))
				{
					iLocal_266++;
				}
			}
			break;
		case 2:
			if (iLocal_267 > 0)
			{
				if (HUD::DOES_BLIP_EXIST(Local_687.f_0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) < 45f)
					{
						if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_CHOPPER", 7, 0, 0, 0))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
							iLocal_266++;
						}
					}
				}
			}
			else
			{
				func_582(Local_687.f_5, 1);
			}
			break;
		case 3:
			if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
			{
				if (!__LIB_13__::func_755(&Local_687, 1))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_BANT2", 6, 0, 0, 0))
					{
						iLocal_266++;
					}
				}
			}
			break;
		case 4:
			if (func_582(Local_687.f_5, 1))
			{
				iLocal_266++;
			}
			break;
		case 5:
			break;
	}
}

int func_976(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)//Position - 0xA1615
{
	return func_745(iParam0, Param1, Param2, bParam3, uParam4, 0, 0, iParam5, sParam6, sParam7, sParam7, sParam7, sParam7, sParam8, sParam9, bParam10, bParam11, bParam12, iParam13);
}

void func_988()//Position - 0xA32AF
{
	struct<3> Var0;
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.4f, 4358.3f, 155.7f, 220f, 220f, 120f, false, true, 0))
	{
		if (!iLocal_218)
		{
			func_970();
			Var0 = { __LIB_0__::func_79(Vector(113.4f, 4308.2f, -1429f) - Vector(1.732926f, 4457.777f, -1687.75f)) };
			iLocal_327 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1687.75f, 4457.777f, 1.732926f, Var0, 500f, 13, 127);
			iLocal_218 = 1;
		}
	}
	else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.4f, 4358.3f, 155.7f, 300f, 300f, 200f, false, true, 0))
	{
		if (iLocal_218)
		{
			func_989();
			STREAMING::STREAMVOL_DELETE(iLocal_327);
			iLocal_218 = 0;
		}
	}
}

void func_989()//Position - 0xA3380
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_461);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_460);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_462);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_391[0 /*33*/].f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_392[0 /*33*/].f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_403.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_405.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_418.f_1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_446.f_2);
	VEHICLE::REMOVE_VEHICLE_RECORDING(Local_403.f_13, sLocal_362);
	VEHICLE::REMOVE_VEHICLE_RECORDING(4, sLocal_362);
	VEHICLE::REMOVE_VEHICLE_RECORDING(7, sLocal_362);
	VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexile2");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_0");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_1");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_2");
	TASK::REMOVE_WAYPOINT_RECORDING("exile2_3");
	STREAMING::REMOVE_ANIM_DICT("missexile2");
	STREAMING::REMOVE_ANIM_SET("move_ped_crouched");
	STREAMING::REMOVE_ANIM_SET("Wpn_AssaultRifle_WeaponHoldingCrouched");
	STREAMING::REMOVE_ANIM_SET("move_ped_crouched_strafing");
	WEAPON::REMOVE_WEAPON_ASSET(joaat("WEAPON_HEAVYSNIPER"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(WEAPON::GET_WEAPONTYPE_MODEL(joaat("WEAPON_HEAVYSNIPER")));
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("EXILE_2_01");
}

void func_990(int iParam0)//Position - 0xA3464
{
	switch (iLocal_265)
	{
		case 0:
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_463[0], iParam0))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_463[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					iLocal_265++;
				}
			}
			break;
		case 1:
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_463[0], iParam0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_463[0]);
				iLocal_265 = 0;
			}
			break;
	}
}

void func_993(int* iParam0, bool bParam1)//Position - 0xA3563
{
	if (bParam1)
	{
		MISC::SET_BIT(&(iParam0->f_13), 30);
	}
	else
	{
		MISC::CLEAR_BIT(&(iParam0->f_13), 30);
	}
}

void func_999()//Position - 0xA3800
{
	STREAMING::REQUEST_MODEL(iLocal_461);
	STREAMING::REQUEST_MODEL(iLocal_460);
	STREAMING::REQUEST_MODEL(Local_426.f_1);
	STREAMING::REQUEST_MODEL(Local_403.f_1);
	STREAMING::REQUEST_ANIM_DICT(sLocal_5734);
	VEHICLE::REQUEST_VEHICLE_ASSET(Local_403.f_1, 3);
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkexile2");
	AUDIO::PREPARE_MUSIC_EVENT("EXL2_SWITCH_START");
}

void func_1000()//Position - 0xA384D
{
	int iVar0;
	if (iLocal_734 == 0)
	{
		PATHFIND::SET_ROADS_IN_AREA(Local_377, Local_378, false, true);
		PED::SET_PED_CAN_RAGDOLL(Local_393.f_0, true);
		PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_393.f_0, 17);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_418.f_0, false);
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_418.f_0, 1.1f);
			VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_418.f_0, true);
			ENTITY::SET_ENTITY_PROOFS(Local_418.f_0, true, true, true, true, true, false, false, false);
			ENTITY::SET_ENTITY_HEALTH(Local_418.f_0, 1000, 0);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_418.f_0, 1000f);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_418.f_0, 1000f);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_418.f_0, false);
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_353))
			{
				iLocal_353 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_jeep_engine_fire", Local_418.f_0, 0f, 1.5f, 0.5f, 0f, 0f, 0f, 1f, false, false, false);
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_296, "EXILE_2_GANG_CAR_FIRE", Local_418.f_0, 0, false, 0);
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 1, true);
			VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 4, true);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_418.f_0, 0, false, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_418.f_0, 2, false, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_418.f_0, 3, false, false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_418.f_0, 2);
			Local_363 = { ENTITY::GET_ENTITY_COORDS(Local_418.f_0, true) };
			func_999();
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= (Local_391.f_0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_391[iVar0 /*33*/]))
			{
				PED::DELETE_PED(&(Local_391[iVar0 /*33*/]));
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_391[iVar0 /*33*/].f_1);
			iVar0++;
		}
		__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_GOCHOP1", 7, 0, 0, 0);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 8f, 4);
		AUDIO::START_AUDIO_SCENE("EXILE_2_GO_TO_CRASH_SITE");
		iLocal_349 = 0;
		iLocal_734 = 1;
	}
	if (iLocal_734 == 1)
	{
		__LIB_16__::func_39(&Local_687, Local_363, 10f, 10f, 3f, 0, "FS_CRASHSITE", 1, 1, -1);
		switch (iLocal_253)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_363, 45f, 45f, 25f, false, true, 0))
				{
					if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_SPOT", 7, 0, 0, 0))
					{
						iLocal_253++;
					}
				}
				break;
			case 1:
				if (!__LIB_13__::func_755(&Local_687, 0))
				{
					iLocal_242 = MISC::GET_GAME_TIMER();
					iLocal_253++;
				}
				break;
			case 2:
				if (__LIB_0__::func_611(&iLocal_242, 1000))
				{
					if (__LIB_16__::func_8(&uLocal_519, 2, "TM44AUD", "TM44_FUPDC", 8, 1, 0, 0, 0))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
						iLocal_257 = -1;
						iLocal_253++;
					}
				}
				break;
			case 3:
				if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				{
					if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() != -1)
					{
						iLocal_257 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
						__LIB_13__::func_743();
					}
				}
				else if (iLocal_257 != -1)
				{
					if (!__LIB_1__::func_859() || iLocal_257 >= 0)
					{
						iLocal_734 = 2;
					}
					else
					{
						iLocal_253 = 2;
					}
				}
				else
				{
					iLocal_253 = 2;
					iLocal_258++;
					if (iLocal_258 > 2)
					{
						iLocal_734 = 2;
					}
				}
				break;
		}
		func_532();
		func_1001();
	}
	if (iLocal_734 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(Local_418.f_0, 1f);
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		__LIB_13__::func_815(&Local_687, 1, 0);
		HUD::CLEAR_PRINTS();
		func_723();
		iLocal_734 = 0;
		iLocal_733 = 5;
	}
	if (iLocal_734 == 3)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1876.1885f, 4482.834f, 24.5287f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 300.6762f);
		iLocal_734 = 2;
	}
}

void func_1001()//Position - 0xA3BA8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Local_405.f_0, ENTITY::GET_ENTITY_COORDS(Local_418.f_0, true), 5f, 5f, 2.5f, false, true, 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_405.f_0, false, true, false, false, false, false, false, false);
			}
			else
			{
				ENTITY::SET_ENTITY_PROOFS(Local_405.f_0, false, false, false, false, false, false, false, false);
			}
		}
	}
}

void func_1005()//Position - 0xA3CBD
{
	int iVar0;
	iVar0 = 0;
	sLocal_362 = "MattForest";
	if (iLocal_734 == 0)
	{
		__LIB_0__::func_345(&uLocal_721, 0, 0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
		STREAMING::REQUEST_ANIM_DICT("missexile2ig_5");
		STREAMING::REQUEST_ANIM_DICT("missexile2deer_crash");
		VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_362);
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_362);
		AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS");
		AUDIO::PREPARE_MUSIC_EVENT("EXL2_DEER");
		STREAMING::REQUEST_PTFX_ASSET();
		if (STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1))
		{
		}
		if (STREAMING::HAS_ANIM_DICT_LOADED("missexile2ig_5"))
		{
		}
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_362))
		{
		}
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_362))
		{
		}
		if (AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS"))
		{
		}
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
		}
		if ((((((STREAMING::HAS_MODEL_LOADED(Local_392[0 /*33*/].f_1) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2ig_5")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2deer_crash")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, sLocal_362)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, sLocal_362)) && AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS")) && STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			if (func_740(1, 1, 1))
			{
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10000f, true, false, false, false);
				func_1008();
				__LIB_17__::func_78(&iLocal_463, 0, 0);
				__LIB_17__::func_78(&iLocal_463, 1, 0);
				__LIB_17__::func_78(&iLocal_463, 2, 0);
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
				{
					GRAPHICS::DISABLE_PROCOBJ_CREATION();
					PATHFIND::SET_ROADS_IN_AREA(Local_377, Local_378, false, true);
					PED::ADD_SCENARIO_BLOCKING_AREA(-2607.6f, 3715.3f, 300f, -541.9f, 4969f, -100f, false, true, true, true);
					MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10000f, true, false, false, false);
					if (HUD::DOES_BLIP_EXIST(Local_418.f_2))
					{
						HUD::REMOVE_BLIP(&(Local_418.f_2));
					}
					if (__LIB_14__::func_466() != 1)
					{
						__LIB_36__::func_931(&iLocal_463, 1);
						__LIB_31__::func_990(&iLocal_463, 1, 0, 0);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, -1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_405.f_0, false);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 3, sLocal_362, true);
					__LIB_17__::func_84(&Local_405, 48300f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_405.f_0, true);
					__LIB_17__::func_189(&Local_405);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_418.f_0);
					}
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_418.f_0, 1, sLocal_362, true);
					__LIB_17__::func_84(&Local_418, 48300f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_418.f_0, true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_418.f_0, true, 1);
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_418.f_0, true);
					__LIB_17__::func_189(&Local_418);
					VEHICLE::SET_VEHICLE_CAN_DEFORM_WHEELS(Local_418.f_0, false);
					__LIB_0__::func_222(&uLocal_519, 6, Local_391[0 /*33*/], "oneil" /* GXT: O'Neil Way */, 0, 1);
					if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_391[2 /*33*/]);
					}
					Local_310 = { 0f, 0f, 0f };
					Local_311 = { 0f, 0f, 0f };
					iLocal_287 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
					{
						PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_287, Local_418.f_0, 0);
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_418.f_0, iLocal_287, "getout_car_stumble_dubsta", "missexile2ig_5", 1000f, -8f, 1 | 32, 1000f);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_418.f_0);
					if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_391[0 /*33*/], iLocal_287, "missexile2ig_5", "getout_car_stumble_bryce", 1000f, -8f, 0, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[0 /*33*/], true, false);
					}
					if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_391[1 /*33*/], iLocal_287, "missexile2ig_5", "getout_car_stumble_jeff", 1000f, -8f, 0, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[1 /*33*/], true, false);
					}
					if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_391[2 /*33*/], iLocal_287, "missexile2ig_5", "getout_car_stumble_andre", 1000f, -8f, 0, 0, 1000f, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[2 /*33*/], true, false);
					}
					func_514(&(Local_392[0 /*33*/]));
					Local_310 = { -1889.262f, 4419.208f, 47.745f };
					Local_311 = { 0f, 0f, -6.12f };
					Local_392[0 /*33*/].f_23 = PED::CREATE_SYNCHRONIZED_SCENE(Local_310, Local_311, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(Local_392[0 /*33*/], Local_392[0 /*33*/].f_23, "missexile2deer_crash", "deer_crash", 1000f, -8f, 0, 0, 1000f, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_392[0 /*33*/], false, false);
					iLocal_381 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -1873.2216f, 4420.1587f, 49.323524f, -6.420567f, -0.016574f, 65.46559f, 24.283463f, false, 2);
					iLocal_380 = CAM::CREATE_CAM_WITH_PARAMS("default_scripted_camera", -1877.724f, 4422.953f, 47.547523f, -6.420536f, -0.016574f, 65.46535f, 24.283463f, false, 2);
					CAM::SET_CAM_ACTIVE(iLocal_381, true);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_380, iLocal_381, 5000, 3, 3);
					CAM::SHAKE_CAM(iLocal_380, "HAND_SHAKE", 1f);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOLLOW_CAR_PHONE"))
					{
						AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOLLOW_CAR_PHONE");
					}
					AUDIO::PLAY_STREAM_FRONTEND();
					AUDIO::START_AUDIO_SCENE("EXILE_2_CRASH_CUTSCENE");
					AUDIO::TRIGGER_MUSIC_EVENT("EXL2_DEER");
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					HUD::DISPLAY_RADAR(false);
					HUD::DISPLAY_HUD(false);
					CAM::SET_WIDESCREEN_BORDERS(true, 0);
					iLocal_238 = 0;
					SYSTEM::SETTIMERA(0);
					SYSTEM::SETTIMERB(0);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					iLocal_349 = 0;
					iLocal_355 = 0;
					iLocal_734 = 1;
				}
			}
		}
	}
	if (iLocal_734 == 1)
	{
		if (iLocal_238 == 0)
		{
			RECORDING::REPLAY_START_EVENT(4);
			iLocal_238 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
				{
					fLocal_303 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_418.f_0);
				}
				switch (iLocal_349)
				{
					case 0:
						if (fLocal_303 > 50750f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
									{
										__LIB_17__::func_84(&Local_418, 52428f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_418.f_0, true);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
							{
								CAM::DESTROY_CAM(iLocal_381, false);
								iLocal_381 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_COORD(iLocal_381, -1873.5187f, 4435.841f, 46.72681f);
								CAM::SET_CAM_ROT(iLocal_381, -1.481913f, -0.602657f, -42.64133f, 2);
								CAM::SET_CAM_FOV(iLocal_381, 30.1268f);
								CAM::SHAKE_CAM(iLocal_381, "ROAD_VIBRATION_SHAKE", 1f);
								CAM::DESTROY_CAM(iLocal_380, false);
								iLocal_380 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_COORD(iLocal_380, -1872.0684f, 4439.0527f, 49.046635f);
								CAM::SET_CAM_ROT(iLocal_380, -24.354137f, -0.577697f, -29.000818f, 2);
								CAM::SET_CAM_FOV(iLocal_380, 28.8534f);
								CAM::SHAKE_CAM(iLocal_380, "ROAD_VIBRATION_SHAKE", 1f);
								CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_380, iLocal_381, 1600, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_349++;
							}
						}
						break;
					case 1:
						if (fLocal_303 > 53912f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
								{
									if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
									{
										__LIB_17__::func_84(&Local_418, 53552f);
										VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_418.f_0, true);
									}
								}
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
							{
								CAM::DESTROY_CAM(iLocal_381, false);
								iLocal_381 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_COORD(iLocal_381, -1870.8998f, 4476.434f, 27.505926f);
								CAM::SET_CAM_ROT(iLocal_381, 28.299524f, -0.577695f, -160.56865f, 2);
								CAM::SET_CAM_FOV(iLocal_381, 26.02377f);
								CAM::DESTROY_CAM(iLocal_380, false);
								iLocal_380 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
								CAM::SET_CAM_COORD(iLocal_380, -1872.5978f, 4481.5786f, 24.811926f);
								CAM::SET_CAM_ROT(iLocal_380, 24.790777f, -0.577697f, -152.08685f, 2);
								CAM::SET_CAM_FOV(iLocal_380, 26.02377f);
								CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_380, iLocal_381, 5000, 3, 3);
								CAM::SHAKE_CAM(iLocal_380, "HAND_SHAKE", 1f);
								SYSTEM::SETTIMERB(0);
								iLocal_349++;
							}
						}
						break;
					case 2:
						if (fLocal_303 > 54213.305f)
						{
							CAM::SHAKE_CAM(iLocal_380, "MEDIUM_EXPLOSION_SHAKE", 0.2f);
							iLocal_349++;
						}
						break;
					case 3:
						if (fLocal_303 > 55498.5f)
						{
							CAM::DESTROY_CAM(iLocal_381, false);
							iLocal_381 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
							CAM::SET_CAM_COORD(iLocal_381, -1875.6101f, 4472.9336f, 28.464901f);
							CAM::SET_CAM_ROT(iLocal_381, -12.234248f, -4.103173f, -44.42457f, 2);
							CAM::SET_CAM_FOV(iLocal_381, 36.00603f);
							CAM::DESTROY_CAM(iLocal_380, false);
							iLocal_380 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
							CAM::SET_CAM_COORD(iLocal_380, -1877.3278f, 4474.5605f, 27.996382f);
							CAM::SET_CAM_ROT(iLocal_380, -12.219757f, -4.103173f, -19.276518f, 2);
							CAM::SET_CAM_FOV(iLocal_380, 36.00603f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_380, iLocal_381, 1250, 3, 3);
							CAM::SHAKE_CAM(iLocal_380, "ROAD_VIBRATION_SHAKE", 2f);
							if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_353))
							{
								iLocal_353 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_jeep_engine_fire", Local_418.f_0, 0f, 1.5f, 0.5f, 0f, 0f, 0f, 1f, false, false, false);
							}
							iLocal_349++;
						}
						break;
					case 4:
						if (fLocal_303 > 56751.867f)
						{
							CAM::DESTROY_CAM(iLocal_381, false);
							iLocal_381 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
							CAM::SET_CAM_COORD(iLocal_381, -1876.13f, 4489.384f, 24.41581f);
							CAM::SET_CAM_ROT(iLocal_381, 15.51182f, -4.103173f, -166.40363f, 2);
							CAM::SET_CAM_FOV(iLocal_381, 35.730843f);
							CAM::SHAKE_CAM(iLocal_381, "ROAD_VIBRATION_SHAKE", 1f);
							CAM::DESTROY_CAM(iLocal_380, false);
							iLocal_380 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
							CAM::SET_CAM_COORD(iLocal_380, -1876.13f, 4489.384f, 24.41581f);
							CAM::SET_CAM_ROT(iLocal_380, 10.798196f, -4.103173f, -158.77893f, 2);
							CAM::SET_CAM_FOV(iLocal_380, 35.730843f);
							CAM::SHAKE_CAM(iLocal_380, "ROAD_VIBRATION_SHAKE", 1f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_380, iLocal_381, 2000, 3, 3);
							CAM::SHAKE_CAM(iLocal_380, "ROAD_VIBRATION_SHAKE", 1f);
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_287, 0.45f);
							iLocal_349++;
						}
						break;
					case 5:
						if (fLocal_303 > 57606.82f)
						{
							CAM::SHAKE_CAM(iLocal_380, "small_EXPLOSION_SHAKE", 0.15f);
							iLocal_349++;
						}
						break;
					case 6:
						if (fLocal_303 > 59000f)
						{
							iLocal_242 = MISC::GET_GAME_TIMER();
							CAM::DESTROY_CAM(iLocal_381, false);
							CAM::DESTROY_CAM(iLocal_380, false);
							iLocal_387 = CAM::CREATE_CAMERA(joaat("DEFAULT_ANIMATED_CAMERA"), true);
							CAM::PLAY_CAM_ANIM(iLocal_387, "getout_car_stumble_cam", "missexile2ig_5", ENTITY::GET_ENTITY_COORDS(Local_418.f_0, true), ENTITY::GET_ENTITY_ROTATION(Local_418.f_0, 2), false, 2);
							CAM::SET_CAM_ANIM_CURRENT_PHASE(iLocal_387, 0.596f);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_418.f_0);
							}
							iLocal_349++;
						}
						break;
					case 7:
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_287) >= 0.96f)
								{
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
									iLocal_349++;
								}
							}
						}
						else
						{
							iLocal_349++;
						}
						break;
					case 8:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_287) >= 0.99f)
							{
								TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, 0);
								ENTITY::DETACH_ENTITY(Local_393.f_0, true, true);
								Local_393.f_11 = { -1895.8076f, 4429.068f, 43.38081f };
								Local_393.f_20 = 9.9039f;
								ENTITY::SET_ENTITY_COORDS(Local_393.f_0, Local_393.f_11, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(Local_393.f_0, Local_393.f_20);
								Local_393.f_2 = __LIB_0__::func_639(Local_393.f_0, 0, 0);
								func_532();
								if (!PED::IS_PED_INJURED(Local_392[0 /*33*/]))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_392[0 /*33*/]);
									ENTITY::SET_ENTITY_COORDS(Local_392[0 /*33*/], -1868.9681f, 4427.408f, 46.6996f, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(Local_392[0 /*33*/], 267.4871f);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1820.6013f, 4417.2197f, 45.891f, 2f, -1, 40000f, 0.5f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
									TASK::TASK_PERFORM_SEQUENCE(Local_392[0 /*33*/], iLocal_389);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
									PED::FORCE_PED_MOTION_STATE(Local_392[0 /*33*/], joaat("MotionState_Run"), true, 0, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_392[0 /*33*/], false, false);
								}
								iLocal_734 = 2;
							}
						}
						break;
				}
				switch (iLocal_281)
				{
					case 0:
						if (fLocal_303 > 48500f)
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_ELK", 7, 0, 0, 0))
							{
								iLocal_281++;
							}
						}
						break;
					case 1:
						if (fLocal_303 > 50500f)
						{
							if (__LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_CRASH", 7, 0, 0, 0))
							{
								iLocal_281++;
							}
						}
						break;
					case 2:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_287) >= 0.7f)
							{
								if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
								{
									AUDIO::PLAY_PAIN(Local_391[0 /*33*/], 19, 0, 0);
								}
								iLocal_281++;
							}
						}
						break;
					case 3:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_287))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_287) >= 0.85f)
							{
								if (!PED::IS_PED_INJURED(Local_391[1 /*33*/]))
								{
									__LIB_0__::func_709(Local_391[1 /*33*/], "GENERIC_SHOCKED_HIGH", "A_M_M_HillBilly_01_WHITE_MINI_02", 24);
								}
								iLocal_281++;
							}
						}
						break;
				}
				switch (iLocal_355)
				{
					case 0:
						if (fLocal_303 >= 51180f)
						{
							iLocal_355++;
						}
						break;
					case 1:
						if (fLocal_303 >= 54187f)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
							{
								VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, -0.2f, 0.5f, 0f, 375f, 375f, true);
								VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.2f, 0.5f, 0f, 375f, 375f, true);
							}
							iLocal_355++;
						}
						break;
					case 2:
						if (fLocal_303 >= 54591f)
						{
							VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 4, false);
							iLocal_355++;
						}
						break;
					case 3:
						if (fLocal_303 >= 55258f)
						{
							VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.3f, -0.1f, 0.75f, 200f, 200f, true);
							iLocal_355++;
						}
						break;
					case 4:
						break;
				}
				switch (iLocal_285)
				{
					case 0:
						if (fLocal_303 >= 54204f)
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_ex2_car_impact", Local_418.f_0, 0f, 2.2f, 0.4f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_285++;
						}
						break;
					case 1:
						if (fLocal_303 > 55321f)
						{
							iLocal_328[0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_ex2_car_slide", Local_418.f_0, 0.8f, -0.8f, 1.35f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_285++;
						}
						break;
					case 2:
						if (fLocal_303 > 56751.867f)
						{
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_328[0]))
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_328[0], false);
							}
							iLocal_285++;
						}
						break;
					case 3:
						break;
					case 4:
						break;
				}
			}
		}
		if (__LIB_0__::func_500())
		{
			if (iLocal_349 > 0)
			{
				iLocal_734 = 3;
			}
		}
	}
	if (iLocal_734 == 2)
	{
		AUDIO::STOP_STREAM();
		RECORDING::REPLAY_STOP_EVENT();
		GRAPHICS::ENABLE_PROCOBJ_CREATION();
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_CRASH_CUTSCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("EXILE_2_CRASH_CUTSCENE");
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_328 - 1))
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_328[iVar0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_328[iVar0], false);
			}
			iVar0++;
		}
		STREAMING::REMOVE_ANIM_DICT("missexile2ig_5");
		STREAMING::REMOVE_ANIM_DICT("missexile2deer_crash");
		MISC::SET_TIME_SCALE(1f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_418.f_0, 1000f, true);
			ENTITY::SET_ENTITY_HEALTH(Local_418.f_0, 1000, 0);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_418.f_0, 1000f);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_418.f_0, 1000f);
		}
		__LIB_17__::func_426(&Local_405);
		__LIB_17__::func_426(&Local_426);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(Local_405.f_0, -1899.3949f, 4431.256f, 42.805f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_405.f_0, 228.1822f);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_405.f_0, false, true, false);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_405.f_0, 5f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_418.f_0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(Local_418.f_0, -1873.92f, 4486.02f, 24.625f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_418.f_0, 239.2644f);
		VEHICLE::REMOVE_VEHICLE_RECORDING(3, sLocal_362);
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, sLocal_362);
		VEHICLE::REMOVE_VEHICLE_RECORDING(200, sLocal_362);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
		RECORDING::REPLAY_STOP_EVENT();
		if (CAM::IS_SCREEN_FADED_IN())
		{
			__LIB_17__::func_195(0, 1, 0, 0f, 0f, 3000, 0);
		}
		else
		{
			func_509(0, 0f, 0f, 0);
		}
		iLocal_734 = 0;
		iLocal_733 = 4;
	}
	if (iLocal_734 == 3)
	{
		__LIB_17__::func_610();
		func_1104();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
		{
			ENTITY::SET_ENTITY_HEALTH(Local_418.f_0, 1000, 0);
			VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_418.f_0, 1000f);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_418.f_0, 1000f);
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
			{
				VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_418.f_0);
			}
			if (iLocal_355 < 2)
			{
				VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, -0.2f, 0.5f, 0f, 375f, 375f, true);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.2f, 0.5f, 0f, 375f, 375f, true);
			}
			if (iLocal_355 < 3)
			{
				VEHICLE::SET_VEHICLE_DOOR_BROKEN(Local_418.f_0, 4, true);
			}
			if (iLocal_355 < 4)
			{
				VEHICLE::SET_VEHICLE_DAMAGE(Local_418.f_0, 0.3f, -0.1f, 0.75f, 200f, 200f, true);
			}
		}
		if (!PED::IS_PED_INJURED(Local_392[0 /*33*/]))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_392[0 /*33*/]);
			ENTITY::SET_ENTITY_COORDS(Local_392[0 /*33*/], -1868.9681f, 4427.408f, 46.6996f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_392[0 /*33*/], 267.4871f);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, -1820.6013f, 4417.2197f, 45.891f, 2f, -1, 40000f, 0.5f);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
			TASK::TASK_PERFORM_SEQUENCE(Local_392[0 /*33*/], iLocal_389);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
			PED::FORCE_PED_MOTION_STATE(Local_392[0 /*33*/], joaat("MotionState_Run"), true, 0, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_392[0 /*33*/], false, false);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
			}
			ENTITY::SET_ENTITY_COORDS(Local_405.f_0, -1899.3949f, 4431.256f, 42.805f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(Local_405.f_0, 228.1822f);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_405.f_0, false, true, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_405.f_0, 5f);
		}
		TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, 0);
		ENTITY::DETACH_ENTITY(Local_393.f_0, true, true);
		Local_393.f_11 = { -1896.4316f, 4427.469f, 43.3257f };
		Local_393.f_20 = 9.9039f;
		ENTITY::SET_ENTITY_COORDS(Local_393.f_0, Local_393.f_11, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(Local_393.f_0, Local_393.f_20);
		Local_393.f_2 = __LIB_0__::func_639(Local_393.f_0, 0, 0);
		func_532();
		__LIB_17__::func_426(&Local_418);
		__LIB_17__::func_426(&Local_405);
		iLocal_734 = 2;
	}
}

void func_1008()//Position - 0xA500E
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1965.07f, 3784.35f, 100f, 1994.62f, 3841.22f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1784.3f, 3195.5f, 100f, 1707.6f, 3262.2f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1635.92f, 4389.35f, 100f, -1603.12f, 4371.75f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1517.4f, 4319.4f, 103f, -1569.5f, 4309.2f, -100f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1602.2f, 4452.3f, 50f, -1486.8f, 4519.2f, 0f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1320.3f, 4424.9f, 30f, -1409f, 4556f, 0f, false, true);
}

int func_1009()//Position - 0xA50E6
{
	if (iLocal_734 == 0)
	{
		func_521(iLocal_463[0]);
		STREAMING::REQUEST_MODEL(iLocal_462);
		STREAMING::REQUEST_MODEL(Local_405.f_1);
		STREAMING::REQUEST_ANIM_DICT("missswitch");
		STREAMING::REQUEST_ANIM_DICT("missexile2switch");
		STREAMING::REQUEST_ANIM_DICT(sLocal_5734);
		VEHICLE::REQUEST_VEHICLE_RECORDING(100, "lkexcile2_chase");
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_426.f_0) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_463[0], Local_426.f_0))
		{
			if (((((STREAMING::HAS_MODEL_LOADED(iLocal_462) && STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) && STREAMING::HAS_ANIM_DICT_LOADED("missswitch")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2switch")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_5734)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase"))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(false);
				MISC::CLEAR_AREA(-2689.2244f, 2368.0752f, 15.7681f, 300f, true, false, false, false);
				Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -2646.31f, 2677.32f, 16.6427f, 350.3382f, true, true, false);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_405.f_0, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_405.f_0, false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_405.f_0, true, true, false);
				VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 0, 0);
				AUDIO::SET_VEH_RADIO_STATION(Local_405.f_0, "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 100, "lkexcile2_chase", true);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 7500f);
				VEHICLE::SET_PLAYBACK_SPEED(Local_405.f_0, 0f);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_405.f_0, true);
				func_41(&(iLocal_463[1]), 1, Local_405.f_0, -1, 1, 0, 0);
				func_521(iLocal_463[1]);
				func_520(&(iLocal_463[1]), 1);
				__LIB_0__::func_222(&uLocal_519, 1, iLocal_463[1], "franklin", 0, 1);
				__LIB_17__::func_78(&iLocal_463, 1, 1);
				func_379(iLocal_463[1], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_16__::func_880(&iLocal_463, 0, 1);
				sLocal_318 = "FS_GOD_0";
				sLocal_319 = "FS_michael_0";
				sLocal_320 = "FS_BACKINCAR";
				iLocal_334 = 0;
				iLocal_242 = MISC::GET_GAME_TIMER();
				iLocal_734 = 1;
			}
		}
		func_1054();
	}
	if (iLocal_734 == 1)
	{
		func_578();
		if (func_1051())
		{
			iLocal_734 = 0;
			iLocal_733 = 3;
			return 1;
		}
		func_1050();
		func_1040();
		func_1037();
		if (__LIB_14__::func_466() == 1)
		{
			if (!iLocal_334)
			{
				if (!PED::IS_PED_INJURED(Local_391[0 /*33*/]))
				{
					__LIB_14__::func_615(&uLocal_721, Local_391[0 /*33*/], 0, 0, 1, 1, 1);
					func_1010();
				}
			}
		}
		if (bLocal_220)
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
					}
				}
			}
		}
	}
	if (iLocal_734 == 2)
	{
		iLocal_734 = 0;
		iLocal_733 = 3;
	}
	if (iLocal_734 == 3)
	{
		if (__LIB_14__::func_466() == 1)
		{
			switch (iLocal_277)
			{
				case 0:
					iLocal_242 = 0;
					iLocal_734 = 1;
					break;
				case 1:
					__LIB_13__::func_815(&Local_687, 1, 0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, -1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_405.f_0, -1989.4053f, 4501.27f, 29.7859f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_405.f_0, 215.9919f);
					}
					func_628(Local_418.f_0, 83000f);
					func_588(Local_418.f_0, 1f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_418.f_0, true);
					iLocal_734 = 1;
					break;
				}
			}
	}
	return 0;
}

void func_1010()//Position - 0xA5426
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOCUS_CAM"))
		{
			AUDIO::START_AUDIO_SCENE("EXILE_2_FOCUS_CAM");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOCUS_CAM");
	}
}

void func_1037()//Position - 0xA646F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
		{
			iLocal_80 = 1;
			switch (iLocal_274)
			{
				case 0:
					if (iLocal_215)
					{
						func_588(Local_418.f_0, 0f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_405.f_0, 0f);
							}
						}
					}
					else
					{
						func_588(Local_418.f_0, 1f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_405.f_0, 1f);
							}
						}
					}
					iLocal_80 = 1;
					if (iLocal_275 != 0)
					{
						if (__LIB_0__::func_611(&iLocal_275, 2000))
						{
							fLocal_301 = 1.1f;
							Local_418.f_7 = 1.1f;
							iLocal_274++;
						}
					}
					break;
				case 1:
					fLocal_302 = 0.01f;
					__LIB_15__::func_928(&fLocal_301, &Local_405, Local_418.f_0, 10f, 18f, 35f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0f, 15f, 1);
					if (Local_418.f_7 < 1f && fLocal_301 > Local_418.f_7)
					{
						fLocal_302 = (fLocal_302 * 2f);
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						fLocal_302 = (fLocal_302 * 2f);
					}
					__LIB_17__::func_85(&(Local_418.f_7), fLocal_301, fLocal_302);
					func_588(Local_418.f_0, Local_418.f_7);
					break;
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_418.f_0, true), 1.7f, true))
			{
				if (!PED::IS_PED_INJURED(Local_391[2 /*33*/]))
				{
					if (__LIB_17__::func_77(Local_391[2 /*33*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
					{
						PED::SET_PED_ACCURACY(Local_391[2 /*33*/], 5);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_389);
						TASK::TASK_DRIVE_BY(0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 2f, 300f, 20, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						TASK::CLOSE_SEQUENCE_TASK(iLocal_389);
						TASK::TASK_PERFORM_SEQUENCE(Local_391[2 /*33*/], iLocal_389);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_389);
					}
				}
			}
		}
	}
}

void func_1040()//Position - 0xA6844
{
	switch (iLocal_246)
	{
		case 0:
			if (iLocal_334)
			{
				if (func_856(&iLocal_463, 1, 1))
				{
					switch (__LIB_14__::func_466())
					{
						case 2:
							if (__LIB_17__::func_82(&iLocal_463, 1))
							{
								__LIB_0__::func_325();
								Local_503.f_12 = iLocal_463[1];
								HUD::CLEAR_PRINTS();
								__LIB_13__::func_815(&Local_687, 1, 0);
								if (ENTITY::DOES_ENTITY_EXIST(Local_403.f_0))
								{
									ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, true, true, true, true, true, false, false, false);
								}
								__LIB_17__::func_421(&iLocal_315);
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
								iLocal_246++;
							}
							break;
						case 1:
							if (__LIB_17__::func_82(&iLocal_463, 2))
							{
								Local_503.f_12 = iLocal_463[2];
								HUD::CLEAR_PRINTS();
								if (HUD::DOES_BLIP_EXIST(Local_418.f_2))
								{
									HUD::REMOVE_BLIP(&(Local_418.f_2));
								}
								if (HUD::DOES_BLIP_EXIST(Local_405.f_2))
								{
									HUD::REMOVE_BLIP(&(Local_405.f_2));
								}
								ENTITY::SET_ENTITY_PROOFS(Local_405.f_0, true, true, true, true, true, false, false, false);
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
								iLocal_246++;
							}
							break;
						}
					}
			}
			break;
		case 1:
			if (!func_1041(&iLocal_3252, &iLocal_4493))
			{
			}
			else
			{
				__LIB_17__::func_105(0);
				STREAMING::REMOVE_ANIM_DICT("missswitch");
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
				switch (__LIB_14__::func_466())
				{
					case 1:
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
						AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
						}
						ENTITY::SET_ENTITY_PROOFS(Local_405.f_0, false, false, false, false, false, false, false, false);
						iLocal_275 = MISC::GET_GAME_TIMER();
						iLocal_246 = 0;
						iLocal_334 = 0;
						__LIB_17__::func_789(1, "start of car chase", 0, 0, 0, 1);
						break;
					}
			}
			break;
		case 2:
			if (__LIB_0__::func_611(&iLocal_242, 500))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_315))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_315, false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_315))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_315);
						}
					}
				}
			}
			break;
	}
}

int func_1041(int iParam0, int iParam1)//Position - 0xA6A0C
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	fVar2 = 0.72f;
	switch (iLocal_769)
	{
		case 0:
			break;
		case 4:
			iParam0->f_1217 = iParam0->f_1217;
			func_1048();
			__LIB_36__::func_931(&iLocal_463, 1);
			Local_503.f_12 = iLocal_463[1];
			iLocal_334 = 1;
			iLocal_5774 = 0;
			iLocal_769 = 5;
		case 5:
			if (iLocal_733 != 1)
			{
				if (__LIB_17__::func_97(&Local_503, 0, 0, 999f, 999f, 1, 0, 0, 0, 0))
				{
					if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
					{
						iVar3 = STREAMING::GET_PLAYER_SWITCH_STATE();
						if (!ENTITY::DOES_ENTITY_EXIST(Local_418.f_0))
						{
							if (iVar3 >= 3)
							{
								if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() >= 2)
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[0]))
									{
										PED::DELETE_PED(&(iLocal_463[0]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_461);
										__LIB_0__::func_221(&uLocal_519, 0);
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[2]))
									{
										PED::DELETE_PED(&(iLocal_463[2]));
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_460);
										__LIB_0__::func_221(&uLocal_519, 2);
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_426.f_0))
									{
										VEHICLE::DELETE_VEHICLE(&Local_426);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_426.f_1);
										VEHICLE::REMOVE_VEHICLE_ASSET(Local_426.f_1);
									}
									__LIB_13__::func_815(&Local_687, 1, 0);
									func_1047();
									if (func_1046())
									{
										func_1045();
										STREAMING::ALLOW_PLAYER_SWITCH_PAN();
									}
								}
							}
						}
					}
					if (Local_503.f_18)
					{
						if (!Local_503.f_19)
						{
							if (__LIB_31__::func_990(&iLocal_463, 0, 0, 0))
							{
								switch (__LIB_14__::func_466())
								{
									case 1:
										PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_12__::func_894(1), 0);
										PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.33f, true, 0);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
										{
											if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
											{
												MISC::SET_INSTANCE_PRIORITY_HINT(2);
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
												PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, -1);
												Local_418.f_2 = __LIB_0__::func_639(Local_418.f_0, 1, 0);
												MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_405.f_0, true), 10000f, true, false, false, false);
											}
										}
										break;
								}
								Local_503.f_19 = 1;
							}
						}
					}
				}
			}
			if (!iLocal_5774)
			{
				if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					iVar4 = STREAMING::GET_PLAYER_SWITCH_STATE();
					if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
					{
						if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() <= 1)
						{
							iLocal_215 = 0;
						}
					}
					if (iVar4 >= 9)
					{
						Local_503.f_17 = 1;
						__LIB_17__::func_97(&Local_503, 0, 0, 999f, 999f, 1, 0, 0, 0, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						iLocal_769 = 6;
						iLocal_5774 = 1;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		case 6:
			iLocal_215 = 0;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
			{
				func_628(Local_418.f_0, 7500f);
				func_588(Local_418.f_0, 1f);
				ENTITY::SET_ENTITY_VISIBLE(Local_418.f_0, true, false);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_418.f_0, true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_405.f_0, true, false);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, (7500f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_405.f_0)));
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_405.f_0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
					TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 4f, -1000f, -1, 2, 0f, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_391[0 /*33*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_391[0 /*33*/], false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[0 /*33*/]);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_391[0 /*33*/], Local_418.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_418.f_0, "seat_dside_f"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(Local_391[0 /*33*/], "missswitch", "in_car_driver", 1000f, -1000f, -1, 1, fLocal_5768, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[0 /*33*/], false, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_391[1 /*33*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_391[1 /*33*/], false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[1 /*33*/]);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_391[1 /*33*/], Local_418.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_418.f_0, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(Local_391[1 /*33*/], "missswitch", "in_car_passenger", 1000f, -1000f, -1, 1, fLocal_5768, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[1 /*33*/], false, false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_391[2 /*33*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_391[2 /*33*/], false))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[2 /*33*/]);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_391[2 /*33*/], Local_418.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_418.f_0, "seat_pside_r"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::TASK_PLAY_ANIM(Local_391[2 /*33*/], "missswitch", "in_car_backseater", 1000f, -1000f, -1, 1, fLocal_5768, false, false, false);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[2 /*33*/], false, false);
				}
			}
			CAM::DESTROY_ALL_CAMS(false);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_405.f_0, true), 1000f, true, false, false, false);
			func_1043(iParam1, Local_418.f_0, Local_405.f_0);
			__LIB_16__::func_29(iParam1);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
			{
				GRAPHICS::ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS("SwitchOpenFranklinOut");
			}
			CAM::SET_CAM_ACTIVE(iParam1->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			HUD::DISPLAY_RADAR(false);
			HUD::DISPLAY_HUD(false);
			AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
			iLocal_5775 = 0;
			iLocal_5776 = 0;
			iLocal_5777 = 0;
			iLocal_5746 = 0;
			bLocal_5778 = false;
			bLocal_5779 = false;
			iLocal_769 = 7;
		case 7:
			if (CAM::IS_CAM_ACTIVE(iParam1->f_1))
			{
				iVar0 = iVar0;
				iVar0 = func_903(iParam1);
				fVar1 = fVar1;
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(iParam1->f_1);
				if (!iLocal_235)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
					iLocal_235 = 1;
				}
				if (!bLocal_5778)
				{
					if (fVar1 >= fLocal_5772)
					{
						bLocal_5778 = __LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_ONEIL", 7, 0, 0, 0);
					}
				}
				if (!iLocal_234)
				{
					if (fVar1 >= 0.065f)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_234 = 1;
					}
				}
				if (!bLocal_5779)
				{
					if (fVar1 >= fLocal_5773)
					{
						bLocal_5779 = __LIB_16__::func_7(&uLocal_519, "TM44AUD", "TM44_SWIT", 7, 0, 0, 0);
					}
				}
				if (!iLocal_5775)
				{
					if (iVar0 >= 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 3))
								{
									TASK::SET_ANIM_RATE(PLAYER::PLAYER_PED_ID(), 0f, 0, false);
									TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 4f, -1000f, -1, 2, 0f, false, false, false);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
									iLocal_5775 = 1;
								}
							}
						}
					}
				}
				if (!iLocal_5776)
				{
					if (fVar1 >= fLocal_5769)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_405.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_405.f_0, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
									{
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 3))
											{
												TASK::SET_ANIM_RATE(PLAYER::PLAYER_PED_ID(), 1f, 0, false);
												TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missexile2switch", "ig_4_switch_trev_to_franklin_fra", 4f, -1000f, -1, 2, fLocal_5770, false, false, false);
												PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
											}
										}
									}
								}
							}
						}
						iLocal_5776 = 1;
					}
				}
				if (!iLocal_5777)
				{
					if (fVar1 >= fLocal_5771 || (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 && fVar1 > fVar2))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_418.f_0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_418.f_0, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_391[0 /*33*/]))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_391[0 /*33*/], false))
										{
											ENTITY::DETACH_ENTITY(Local_391[0 /*33*/], true, true);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[0 /*33*/]);
											PED::SET_PED_INTO_VEHICLE(Local_391[0 /*33*/], Local_418.f_0, -1);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[0 /*33*/], false, false);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_391[1 /*33*/]))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_391[1 /*33*/], false))
										{
											ENTITY::DETACH_ENTITY(Local_391[1 /*33*/], true, true);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[1 /*33*/]);
											PED::SET_PED_INTO_VEHICLE(Local_391[1 /*33*/], Local_418.f_0, 0);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[1 /*33*/], false, false);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_391[2 /*33*/]))
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_391[2 /*33*/], false))
										{
											ENTITY::DETACH_ENTITY(Local_391[2 /*33*/], true, true);
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_391[2 /*33*/]);
											PED::SET_PED_INTO_VEHICLE(Local_391[2 /*33*/], Local_418.f_0, 2);
											PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_391[2 /*33*/], false, false);
										}
									}
								}
							}
						}
						iLocal_5777 = 1;
					}
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (fVar1 > fVar2)
					{
						MISC::SET_TIME_SCALE(1f);
						if (!iLocal_229)
						{
							__LIB_17__::func_8(&uLocal_738, Local_405.f_0, 1, 0.75f, 1000, 1000, 700, 700, 1045220557);
							__LIB_15__::func_247(&uLocal_738, 10f, 0f, -10f);
							iLocal_229 = 1;
						}
						if (__LIB_15__::func_966(&uLocal_738, 1, 1, 1, 0, 1, 0))
						{
							func_1042(iParam1);
							return 1;
						}
					}
				}
				else if (fVar1 >= 1f)
				{
					MISC::SET_TIME_SCALE(1f);
					func_1042(iParam1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1042(var uParam0)//Position - 0xA727F
{
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_1, false);
		CAM::DESTROY_CAM(uParam0->f_1, false);
	}
	CAM::DESTROY_ALL_CAMS(false);
	if (ENTITY::DOES_ENTITY_EXIST(Local_405.f_0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_405.f_0, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
					__LIB_0__::func_505(0, 177);
					__LIB_0__::func_377(0, 176);
					__LIB_0__::func_505(Local_405.f_0, 177);
					__LIB_0__::func_377(Local_405.f_0, 176);
					iLocal_237 = 1;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
	iLocal_769 = 0;
}

void func_1043(var uParam0, int iParam1, int iParam2)//Position - 0xA734D
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -1.3868f, 5.1388f, 0.9563f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.365f, 0.0876f, 0.3022f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 1;
		uParam0->f_10[0 /*57*/].f_21 = 40f;
		uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_27 = 0;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 0.2f;
		uParam0->f_10[0 /*57*/].f_28 = 0;
		uParam0->f_10[0 /*57*/].f_29 = 0f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
		uParam0->f_10[0 /*57*/].f_31 = 0;
		uParam0->f_10[0 /*57*/].f_33 = 1f;
		uParam0->f_10[0 /*57*/].f_34 = 0;
		uParam0->f_10[0 /*57*/].f_35 = 0f;
		uParam0->f_10[0 /*57*/].f_36 = 0;
		uParam0->f_10[0 /*57*/].f_37 = 0;
		uParam0->f_10[0 /*57*/].f_39 = 0f;
		uParam0->f_10[0 /*57*/].f_40 = 0f;
		uParam0->f_10[0 /*57*/].f_41 = 0;
		uParam0->f_10[0 /*57*/].f_42 = 0;
		uParam0->f_10[0 /*57*/].f_43 = 0;
		uParam0->f_10[0 /*57*/].f_38 = 0f;
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 1000;
		uParam0->f_10[1 /*57*/].f_6 = { -1.597f, 3.099f, 1.127f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { -0.032f, -0.109f, 0.685f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 1;
		uParam0->f_10[1 /*57*/].f_21 = 40f;
		uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_27 = 0;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 0.2f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 2000;
		uParam0->f_10[2 /*57*/].f_6 = { -1.5737f, 2.6795f, 1.0848f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -0.2538f, -0.2104f, 0.6868f };
		uParam0->f_10[2 /*57*/].f_18 = 1;
		uParam0->f_10[2 /*57*/].f_19 = 1;
		uParam0->f_10[2 /*57*/].f_20 = 1;
		uParam0->f_10[2 /*57*/].f_21 = 40f;
		uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_27 = 0;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 0f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 0.2f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = -0.1f;
		uParam0->f_10[2 /*57*/].f_30 = 0;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_2 = 0;
		uParam0->f_10[3 /*57*/].f_3 = -1;
		uParam0->f_10[3 /*57*/].f_4 = 0;
		uParam0->f_10[3 /*57*/].f_5 = 500;
		uParam0->f_10[3 /*57*/].f_6 = { -2.0237f, 1.6637f, 0.9185f };
		uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_12 = 0f;
		uParam0->f_10[3 /*57*/].f_16 = 0f;
		uParam0->f_10[3 /*57*/].f_17 = 0;
		uParam0->f_10[3 /*57*/].f_9 = { -0.6248f, -0.4769f, 0.712f };
		uParam0->f_10[3 /*57*/].f_18 = 1;
		uParam0->f_10[3 /*57*/].f_19 = 1;
		uParam0->f_10[3 /*57*/].f_20 = 1;
		uParam0->f_10[3 /*57*/].f_21 = 40f;
		uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[3 /*57*/].f_27 = 0;
		uParam0->f_10[3 /*57*/].f_50 = 0;
		uParam0->f_10[3 /*57*/].f_51 = 0f;
		uParam0->f_10[3 /*57*/].f_52 = 0f;
		uParam0->f_10[3 /*57*/].f_22 = 0f;
		uParam0->f_10[3 /*57*/].f_53 = 2;
		uParam0->f_10[3 /*57*/].f_23 = 0.2f;
		uParam0->f_10[3 /*57*/].f_28 = 0;
		uParam0->f_10[3 /*57*/].f_29 = 0f;
		uParam0->f_10[3 /*57*/].f_32 = 0.728f;
		uParam0->f_10[3 /*57*/].f_30 = 1;
		uParam0->f_10[3 /*57*/].f_31 = 0;
		uParam0->f_10[3 /*57*/].f_33 = 1f;
		uParam0->f_10[3 /*57*/].f_34 = 0;
		uParam0->f_10[3 /*57*/].f_35 = 0f;
		uParam0->f_10[3 /*57*/].f_36 = 0;
		uParam0->f_10[3 /*57*/].f_37 = 0;
		uParam0->f_10[3 /*57*/].f_39 = 0f;
		uParam0->f_10[3 /*57*/].f_40 = 0f;
		uParam0->f_10[3 /*57*/].f_41 = 0;
		uParam0->f_10[3 /*57*/].f_42 = 0;
		uParam0->f_10[3 /*57*/].f_43 = 0;
		uParam0->f_10[3 /*57*/].f_38 = 0f;
		uParam0->f_10[3 /*57*/].f_45 = 0;
		uParam0->f_10[3 /*57*/].f_46 = 0;
		uParam0->f_10[3 /*57*/].f_47 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 500;
		uParam0->f_10[4 /*57*/].f_6 = { -1.7515f, 1.2756f, 0.5311f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -0.1985f, -0.2436f, 0.3584f };
		uParam0->f_10[4 /*57*/].f_18 = 1;
		uParam0->f_10[4 /*57*/].f_19 = 1;
		uParam0->f_10[4 /*57*/].f_20 = 1;
		uParam0->f_10[4 /*57*/].f_21 = 50f;
		uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_27 = 0;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 0f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 0f;
		uParam0->f_10[4 /*57*/].f_53 = 2;
		uParam0->f_10[4 /*57*/].f_23 = 0.2f;
		uParam0->f_10[4 /*57*/].f_28 = 0;
		uParam0->f_10[4 /*57*/].f_29 = 0f;
		uParam0->f_10[4 /*57*/].f_32 = 0.6f;
		uParam0->f_10[4 /*57*/].f_30 = 0;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 0;
		uParam0->f_10[4 /*57*/].f_35 = 0f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 2000;
		uParam0->f_10[5 /*57*/].f_6 = { -2.0881f, 0.263f, 0.5245f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 0.0062f, -0.0933f, 0.413f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 1;
		uParam0->f_10[5 /*57*/].f_21 = 50f;
		uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_27 = 0;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 2;
		uParam0->f_10[5 /*57*/].f_23 = 0.2f;
		uParam0->f_10[5 /*57*/].f_28 = 0;
		uParam0->f_10[5 /*57*/].f_29 = 0f;
		uParam0->f_10[5 /*57*/].f_32 = 0f;
		uParam0->f_10[5 /*57*/].f_30 = 0;
		uParam0->f_10[5 /*57*/].f_31 = 0;
		uParam0->f_10[5 /*57*/].f_33 = 1f;
		uParam0->f_10[5 /*57*/].f_34 = 0;
		uParam0->f_10[5 /*57*/].f_35 = 0f;
		uParam0->f_10[5 /*57*/].f_36 = 0;
		uParam0->f_10[5 /*57*/].f_37 = 0;
		uParam0->f_10[5 /*57*/].f_39 = 0f;
		uParam0->f_10[5 /*57*/].f_40 = 0f;
		uParam0->f_10[5 /*57*/].f_41 = 0;
		uParam0->f_10[5 /*57*/].f_42 = 0;
		uParam0->f_10[5 /*57*/].f_43 = 0;
		uParam0->f_10[5 /*57*/].f_38 = 0f;
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 2000;
		uParam0->f_10[6 /*57*/].f_6 = { -2.6841f, -4.8933f, 1.0322f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { -0.3427f, 0.1818f, 0.1332f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 1;
		uParam0->f_10[6 /*57*/].f_21 = 50f;
		uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_27 = 0;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 2;
		uParam0->f_10[6 /*57*/].f_23 = 0.2f;
		uParam0->f_10[6 /*57*/].f_28 = 0;
		uParam0->f_10[6 /*57*/].f_29 = 0f;
		uParam0->f_10[6 /*57*/].f_32 = 0.398f;
		uParam0->f_10[6 /*57*/].f_30 = 0;
		uParam0->f_10[6 /*57*/].f_31 = 0;
		uParam0->f_10[6 /*57*/].f_33 = 1f;
		uParam0->f_10[6 /*57*/].f_34 = 0;
		uParam0->f_10[6 /*57*/].f_35 = 0f;
		uParam0->f_10[6 /*57*/].f_36 = 0;
		uParam0->f_10[6 /*57*/].f_37 = 0;
		uParam0->f_10[6 /*57*/].f_39 = 0f;
		uParam0->f_10[6 /*57*/].f_40 = 0f;
		uParam0->f_10[6 /*57*/].f_41 = 0;
		uParam0->f_10[6 /*57*/].f_42 = 0;
		uParam0->f_10[6 /*57*/].f_43 = 0;
		uParam0->f_10[6 /*57*/].f_38 = 0f;
		uParam0->f_10[6 /*57*/].f_45 = 0;
		uParam0->f_10[6 /*57*/].f_46 = 0;
		uParam0->f_10[6 /*57*/].f_47 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[7 /*57*/].f_2 = 0;
		uParam0->f_10[7 /*57*/].f_3 = -1;
		uParam0->f_10[7 /*57*/].f_4 = 1;
		uParam0->f_10[7 /*57*/].f_5 = 1000;
		uParam0->f_10[7 /*57*/].f_6 = { -0.5163f, -7.533f, 1.2559f };
		uParam0->f_10[7 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_12 = 0f;
		uParam0->f_10[7 /*57*/].f_16 = 0f;
		uParam0->f_10[7 /*57*/].f_17 = 0;
		uParam0->f_10[7 /*57*/].f_9 = { 0.5619f, -0.131f, -0.2427f };
		uParam0->f_10[7 /*57*/].f_18 = 1;
		uParam0->f_10[7 /*57*/].f_19 = 1;
		uParam0->f_10[7 /*57*/].f_20 = 1;
		uParam0->f_10[7 /*57*/].f_21 = 50f;
		uParam0->f_10[7 /*57*/].f_24 = { 0f, 0f, 0f };
		uParam0->f_10[7 /*57*/].f_27 = 0;
		uParam0->f_10[7 /*57*/].f_50 = 0;
		uParam0->f_10[7 /*57*/].f_51 = 0f;
		uParam0->f_10[7 /*57*/].f_52 = 0f;
		uParam0->f_10[7 /*57*/].f_22 = 0f;
		uParam0->f_10[7 /*57*/].f_53 = 2;
		uParam0->f_10[7 /*57*/].f_23 = 0.2f;
		uParam0->f_10[7 /*57*/].f_28 = 0;
		uParam0->f_10[7 /*57*/].f_29 = 0f;
		uParam0->f_10[7 /*57*/].f_32 = 0f;
		uParam0->f_10[7 /*57*/].f_30 = 0;
		uParam0->f_10[7 /*57*/].f_31 = 0;
		uParam0->f_10[7 /*57*/].f_33 = 1f;
		uParam0->f_10[7 /*57*/].f_34 = 0;
		uParam0->f_10[7 /*57*/].f_35 = 0f;
		uParam0->f_10[7 /*57*/].f_36 = 0;
		uParam0->f_10[7 /*57*/].f_37 = 0;
		uParam0->f_10[7 /*57*/].f_39 = 0f;
		uParam0->f_10[7 /*57*/].f_40 = 0f;
		uParam0->f_10[7 /*57*/].f_41 = 0;
		uParam0->f_10[7 /*57*/].f_42 = 0;
		uParam0->f_10[7 /*57*/].f_43 = 0;
		uParam0->f_10[7 /*57*/].f_38 = 0f;
		uParam0->f_10[7 /*57*/].f_45 = 0;
		uParam0->f_10[7 /*57*/].f_46 = 0;
		uParam0->f_10[7 /*57*/].f_47 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[7 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1151[0 /*2*/] = 0f;
		uParam0->f_1151[0 /*2*/].f_1 = 0.55f;
		uParam0->f_1151[1 /*2*/] = 1f;
		uParam0->f_1151[1 /*2*/].f_1 = 0.55f;
		uParam0->f_1151[2 /*2*/] = 2f;
		uParam0->f_1151[2 /*2*/].f_1 = 0.55f;
		uParam0->f_1151[3 /*2*/] = 2.8f;
		uParam0->f_1151[3 /*2*/].f_1 = 80f;
		uParam0->f_1151[4 /*2*/] = 3f;
		uParam0->f_1151[4 /*2*/].f_1 = 80f;
		uParam0->f_1151[5 /*2*/] = 3.8f;
		uParam0->f_1151[5 /*2*/].f_1 = 60f;
		uParam0->f_1151[6 /*2*/] = 4f;
		uParam0->f_1151[6 /*2*/].f_1 = 0.2f;
		uParam0->f_1151[7 /*2*/] = 4.2f;
		uParam0->f_1151[7 /*2*/].f_1 = 5f;
		uParam0->f_1151[8 /*2*/] = 5f;
		uParam0->f_1151[8 /*2*/].f_1 = 20f;
		uParam0->f_1151[9 /*2*/] = 6.7f;
		uParam0->f_1151[9 /*2*/].f_1 = 15f;
		uParam0->f_1151[10 /*2*/] = 7f;
		uParam0->f_1151[10 /*2*/].f_1 = 15f;
		uParam0->f_1184[0 /*2*/] = 3f;
		uParam0->f_1184[0 /*2*/].f_1 = 1f;
		uParam0->f_1184[1 /*2*/] = 3.9f;
		uParam0->f_1184[1 /*2*/].f_1 = 1f;
		uParam0->f_1184[2 /*2*/] = 4f;
		uParam0->f_1184[2 /*2*/].f_1 = 0f;
		uParam0->f_1184[3 /*2*/] = 5.15f;
		uParam0->f_1184[3 /*2*/].f_1 = 0f;
		uParam0->f_1184[4 /*2*/] = 6f;
		uParam0->f_1184[4 /*2*/].f_1 = 0.7f;
		uParam0->f_1184[5 /*2*/] = 7f;
		uParam0->f_1184[5 /*2*/].f_1 = 0f;
		uParam0->f_1217 = 8;
		uParam0->f_1218 = 4;
		uParam0->f_1233 = -1f;
		uParam0->f_1234 = -1f;
		uParam0->f_1235 = 1;
		uParam0->f_1236 = 1;
		uParam0->f_1237 = 1;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 1000;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_Exile2_BrosToFranklin.txt";
		uParam0->f_1225 = "CameraInfo_Exile2_BrosToFranklin.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = iParam1;
	uParam0->f_4[1] = iParam2;
}

void func_1045()//Position - 0xA84AD
{
	Local_393.f_11 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 0f, 1.5f) };
	func_35(&Local_393);
	HUD::REMOVE_BLIP(&(Local_393.f_2));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_393.f_0, Local_405.f_0, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_405.f_0, "seat_pside_f"), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	TASK::TASK_PLAY_ANIM(Local_393.f_0, "missexile2", "chop_sit_in_baller_ps", 8f, -8f, -1, 1, 0f, false, false, false);
	Local_418.f_0 = VEHICLE::CREATE_VEHICLE(Local_418.f_1, -2639.9f, 2733.9f, 16.6f, 350f, true, true, false);
	VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_418.f_0, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_418.f_0, 3);
	VEHICLE::SET_VEHICLE_COLOURS(Local_418.f_0, 7, 0);
	ENTITY::SET_ENTITY_PROOFS(Local_418.f_0, true, true, true, true, true, false, false, false);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_418.f_0, "EXILE_2_ENEMY_CAR", 0f);
	GRAPHICS::SET_DECAL_BULLET_IMPACT_RANGE_SCALE(3f);
	func_576(&(Local_391[0 /*33*/]), &Local_418, -1);
	PED::SET_PED_CAN_BE_TARGETTED(Local_391[0 /*33*/], false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_391[0 /*33*/], false);
	ENTITY::SET_ENTITY_PROOFS(Local_391[0 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[0 /*33*/].f_2));
	func_576(&(Local_391[1 /*33*/]), &Local_418, 0);
	PED::SET_PED_CAN_BE_TARGETTED(Local_391[1 /*33*/], false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_391[1 /*33*/], false);
	ENTITY::SET_ENTITY_PROOFS(Local_391[1 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[1 /*33*/].f_2));
	__LIB_0__::func_222(&uLocal_519, 6, Local_391[1 /*33*/], "oneil" /* GXT: O'Neil Way */, 0, 1);
	func_576(&(Local_391[2 /*33*/]), &Local_418, 1);
	PED::SET_PED_CAN_BE_TARGETTED(Local_391[2 /*33*/], false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_391[2 /*33*/], false);
	ENTITY::SET_ENTITY_PROOFS(Local_391[2 /*33*/], true, true, true, true, true, false, false, false);
	HUD::REMOVE_BLIP(&(Local_391[2 /*33*/].f_2));
	func_632("lkexcile2_chase", 1, 1, 1);
	func_631();
	fLocal_131 = 200f;
	iLocal_94 = 1;
	iLocal_91 = 1;
	func_630(1, 0, 4);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_418.f_0, 1, "lkexcile2_chase", true);
	func_588(Local_418.f_0, 1f);
	func_628(Local_418.f_0, 7500f);
	func_588(Local_418.f_0, 1f);
	VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_418.f_0, true);
	iLocal_215 = 1;
}

int func_1046()//Position - 0xA86B0
{
	if ((((((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_462) && STREAMING::HAS_MODEL_LOADED(Local_391[0 /*33*/].f_1)) && STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) && STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) && STREAMING::HAS_MODEL_LOADED(joaat("radi"))) && STREAMING::HAS_MODEL_LOADED(joaat("sabregt"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexile2")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkexcile2_chase")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase")) && STREAMING::HAS_ANIM_DICT_LOADED("missexile2"))
	{
		return 1;
	}
	return 0;
}

void func_1047()//Position - 0xA8890
{
	STREAMING::REQUEST_MODEL(iLocal_462);
	STREAMING::REQUEST_MODEL(Local_391[0 /*33*/].f_1);
	STREAMING::REQUEST_MODEL(Local_393.f_1);
	STREAMING::REQUEST_MODEL(Local_405.f_1);
	STREAMING::REQUEST_MODEL(Local_418.f_1);
	STREAMING::REQUEST_MODEL(joaat("radi"));
	STREAMING::REQUEST_MODEL(joaat("sabregt"));
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexile2");
	VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkexcile2_chase");
	VEHICLE::REQUEST_VEHICLE_RECORDING(100, "lkexcile2_chase");
	STREAMING::REQUEST_ANIM_DICT("missexile2");
}

void func_1048()//Position - 0xA89D2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_463[0], false))
		{
			TASK::CLEAR_PED_TASKS(iLocal_463[0]);
			TASK::TASK_PLAY_ANIM(iLocal_463[0], "missexile2switch", "IG_3_SWITCH_TREV_to_FRA_AND_ONEILLS_MIC", 4f, -4f, -1, 0, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[0], false, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_463[2], false))
		{
			TASK::CLEAR_PED_TASKS(iLocal_463[2]);
			TASK::TASK_PLAY_ANIM(iLocal_463[2], "missexile2switch", "IG_3_SWITCH_TREV_to_FRA_AND_ONEILLS_TREV", 4f, -4f, -1, 0, 0f, false, false, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[2], false, false);
		}
	}
}

void func_1050()//Position - 0xA8AAE
{
	switch (iLocal_283)
	{
		case 0:
			if (__LIB_14__::func_466() == 1)
			{
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					iLocal_390[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2592.2947f, 3129.918f, 13.8053f, "ch1_roadsdint_tun2");
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_390[0]);
					iLocal_390[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2572.2483f, 3325.1445f, 12.5609f, "ch1_roadsdint_tun1");
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_390[1]);
					iLocal_283++;
				}
			}
			break;
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -2589.657f, 3173.9524f, 13.2004f, true) > 1000f)
			{
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_390[0]))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_390[0]);
				}
				if (INTERIOR::IS_VALID_INTERIOR(iLocal_390[1]))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_390[1]);
				}
				iLocal_283++;
			}
			break;
		case 2:
			break;
	}
}

int func_1051()//Position - 0xA8B9D
{
	switch (iLocal_277)
	{
		case 0:
			func_745(&Local_687, -2769.7f, 220.4f, 24.7f, 0.01f, 0.01f, 0.01f, 0, iLocal_463[0], 0, 0, Local_426.f_0, sLocal_318, sLocal_319, "", "", "", "", sLocal_320, 0, 0, 1, -1);
			if (func_535("TM44_WHERE"))
			{
				if (iLocal_290 == 0)
				{
					if (__LIB_0__::func_75() && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1)
					{
						iLocal_290 = MISC::GET_GAME_TIMER();
					}
				}
				if (!__LIB_13__::func_755(&Local_687, 0) || ((__LIB_0__::func_75() && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() == 1) && __LIB_0__::func_611(&iLocal_290, 2500)))
				{
					__LIB_36__::func_931(&iLocal_463, 1);
					Local_503.f_12 = iLocal_463[1];
					iLocal_246 = 1;
					iLocal_769 = 4;
					iLocal_334 = 1;
					__LIB_13__::func_815(&Local_687, 1, 0);
					iLocal_277++;
				}
			}
			break;
		case 1:
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && iLocal_769 == 0)
			{
				switch (__LIB_14__::func_466())
				{
					case 1:
						func_1053();
						if (!iLocal_227)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 2f, 3);
							iLocal_227 = 1;
						}
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_418.f_0) < 75400f)
						{
							__LIB_14__::func_655(Local_418.f_2, Local_418.f_0, 200f, 0.9f, 0);
						}
						else
						{
							__LIB_14__::func_655(Local_418.f_2, Local_418.f_0, 60f, 0.9f, 0);
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
						{
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_418.f_0) > 72000f)
							{
								STREAMING::REQUEST_MODEL(Local_392[0 /*33*/].f_1);
								STREAMING::REQUEST_ANIM_DICT("missexile2ig_5");
								STREAMING::REQUEST_ANIM_DICT("missexile2deer_crash");
								VEHICLE::REQUEST_VEHICLE_RECORDING(3, sLocal_362);
								VEHICLE::REQUEST_VEHICLE_RECORDING(1, sLocal_362);
								AUDIO::LOAD_STREAM("CAR_CRASH_OFF_CLIFF_STREAM", "EXILE_2_SOUNDS");
								AUDIO::PREPARE_MUSIC_EVENT("EXL2_DEER");
								STREAMING::REQUEST_PTFX_ASSET();
							}
							if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_418.f_0) > 85400f)
							{
								MISC::SET_INSTANCE_PRIORITY_HINT(0);
								if ((HUD::DOES_BLIP_EXIST(Local_418.f_2) && (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1946.126f, 4473.044f, 25.943f, -1979.192f, 4435.007f, 46.443f, 106.1f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1914.003f, 4463.934f, 25.943f, -1957.432f, 4414.501f, 46.443f, 51.9f, false, true, 0))) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1959.981f, 4434.166f, 25.943f, -1968.885f, 4423.886f, 46.443f, 19.2f, false, true, 0))
								{
									PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
									PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
									__LIB_13__::func_815(&Local_687, 1, 0);
									func_707(0, 1);
									func_1008();
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("radi"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sabregt"));
									VEHICLE::REMOVE_VEHICLE_RECORDING(1, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(2, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(3, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(4, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(5, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(6, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(7, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(8, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(9, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(10, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(11, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(12, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(13, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(14, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(15, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(16, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(17, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(18, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(19, "lkexcile2_chase");
									VEHICLE::REMOVE_VEHICLE_RECORDING(100, "lkexcile2_chase");
									if (ENTITY::DOES_ENTITY_EXIST(Local_403.f_0))
									{
										ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, true, true, true, true, true, false, false, false);
									}
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOLLOW_CAR"))
									{
										AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
									}
									if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_FOCUS_CAM"))
									{
										AUDIO::STOP_AUDIO_SCENE("EXILE_2_FOCUS_CAM");
									}
									GRAPHICS::SET_DECAL_BULLET_IMPACT_RANGE_SCALE(1f);
									func_715();
									iLocal_734 = 0;
									iLocal_733 = 3;
									return 1;
								}
								else
								{
									iLocal_342 = 1;
								}
							}
						}
						break;
					}
			}
			break;
		case 2:
			break;
	}
	return 0;
}

void func_1053()//Position - 0xA910A
{
	__LIB_16__::func_34(&Local_687, ENTITY::GET_ENTITY_COORDS(Local_418.f_0, true), 0.01f, 0.01f, 0.01f, 0, Local_405.f_0, "FS_CHASE", "", "FS_car", 0, 0, 0, -1);
	if (HUD::DOES_BLIP_EXIST(Local_687.f_5))
	{
		HUD::SET_BLIP_ALPHA(Local_687.f_5, 0);
		HUD::SET_BLIP_ROUTE(Local_687.f_5, false);
		if (!HUD::DOES_BLIP_EXIST(Local_418.f_2))
		{
			Local_418.f_2 = __LIB_0__::func_639(Local_418.f_0, 1, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Local_418.f_2))
	{
		HUD::REMOVE_BLIP(&(Local_418.f_2));
	}
}

void func_1054()//Position - 0xA919A
{
	if (!HUD::DOES_BLIP_EXIST(Local_426.f_2))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_426.f_0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
			{
				Local_426.f_2 = __LIB_0__::func_639(Local_426.f_0, 0, 0);
			}
		}
	}
	else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_426.f_0))
	{
		HUD::REMOVE_BLIP(&(Local_426.f_2));
	}
}

void func_1055()//Position - 0xA91F7
{
	int iVar0;
	if (iLocal_282 >= 2)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	switch (iLocal_282)
	{
		case 0:
			func_638();
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			STREAMING::REQUEST_ANIM_DICT(sLocal_5734);
			iLocal_282++;
			break;
		case 1:
			while ((((((((((((((((((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_462) || !STREAMING::HAS_MODEL_LOADED(Local_405.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_418.f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_391[0 /*33*/].f_1)) || !STREAMING::HAS_MODEL_LOADED(Local_393.f_1)) || !STREAMING::HAS_MODEL_LOADED(joaat("radi"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sabregt"))) || !STREAMING::HAS_PTFX_ASSET_LOADED()) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexile2")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "lkexcile2_chase")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(100, "lkexcile2_chase")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2")) || !STREAMING::HAS_ANIM_DICT_LOADED("missexile2switch")) || !STREAMING::HAS_ANIM_DICT_LOADED("missswitch")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_5734))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_282++;
			break;
		case 2:
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if (iVar0 >= 3)
				{
					if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() >= 0)
					{
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						PED::SET_CREATE_RANDOM_COPS(false);
						MISC::CLEAR_AREA(-2664.2244f, 2689.3f, 15.7681f, 10000f, true, false, false, false);
						Local_405.f_0 = VEHICLE::CREATE_VEHICLE(Local_405.f_1, -2646.31f, 2677.32f, 16.6427f, 350.3382f, true, true, false);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_405.f_0, true);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_405.f_0, true);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_405.f_0, true);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_405.f_0, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_405.f_0, true, true, false);
						VEHICLE::SET_VEHICLE_COLOURS(Local_405.f_0, 0, 0);
						AUDIO::SET_VEH_RADIO_STATION(Local_405.f_0, "RADIO_03_HIPHOP_NEW" /* GXT: Radio Los Santos */);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 100, "lkexcile2_chase", true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0, 7500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_405.f_0, true);
						func_1045();
						ENTITY::SET_ENTITY_VISIBLE(Local_405.f_0, false, false);
						ENTITY::SET_ENTITY_VISIBLE(Local_418.f_0, false, false);
						STREAMING::ALLOW_PLAYER_SWITCH_PAN();
						iLocal_282++;
					}
				}
			}
			break;
		case 3:
			if (__LIB_14__::func_466() == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_405.f_0, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_405.f_0, -1);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), false, false);
					func_379(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					__LIB_0__::func_222(&uLocal_519, 1, PLAYER::PLAYER_PED_ID(), "franklin", 0, 1);
				}
				iLocal_282++;
			}
			func_1037();
			break;
		case 4:
			func_1037();
			if (func_1060(1))
			{
				Local_503.f_16 = 1;
				iLocal_769 = 5;
				__LIB_17__::func_504();
				iLocal_282++;
			}
			break;
		case 5:
			func_1037();
			if (!func_1041(&iLocal_3252, &iLocal_4493))
			{
			}
			else
			{
				__LIB_17__::func_105(0);
				__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 183);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
				switch (__LIB_14__::func_466())
				{
					case 1:
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, true);
						AUDIO::START_AUDIO_SCENE("EXILE_2_FOLLOW_CAR");
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_405.f_0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_405.f_0);
						}
						ENTITY::SET_ENTITY_PROOFS(Local_405.f_0, false, false, false, false, false, false, false, false);
						iLocal_275 = MISC::GET_GAME_TIMER();
						iLocal_246 = 0;
						iLocal_334 = 0;
						iLocal_277 = 1;
						iLocal_734 = 1;
						iLocal_733 = 2;
						__LIB_17__::func_789(1, "start of car chase", 0, 0, 0, 1);
						break;
					}
			}
			break;
		case 6:
			break;
	}
}

int func_1060(int iParam0)//Position - 0xA974D
{
	int iVar0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar0 = STREAMING::GET_PLAYER_SWITCH_STATE();
		if (iVar0 >= 8)
		{
			if (STREAMING::GET_PLAYER_SWITCH_JUMP_CUT_INDEX() < iParam0)
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

void func_1061()//Position - 0xA977E
{
	int iVar0;
	if (iLocal_734 == 0)
	{
		CUTSCENE::REQUEST_CUTSCENE("Exile_2_int", 8);
		if (__LIB_17__::func_156(15, &uLocal_708, 1, 1, 0, 0, 0))
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				switch (__LIB_14__::func_466())
				{
					case 0:
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_12__::func_894(2), 0);
						break;
					case 2:
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michael", 2, __LIB_12__::func_894(0), 0);
						break;
				}
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::REPLAY_START_EVENT(4);
				iLocal_734 = 1;
			}
		}
	}
	if (iLocal_734 == 1)
	{
		switch (iLocal_272)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					__LIB_15__::func_228(&uLocal_708, 0, 0, 2000, 1, 1, 0, 1);
					STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(1981.1268f, 3830.4668f, 31.4241f, __LIB_3__::func_80(0f, 0f, 296f));
					__LIB_16__::func_937(1994.075f, 3816.573f, 31.096f, 1983.271f, 3834.697f, 35.396f, 22.5f, 1994.9022f, 3822.9993f, 31.1571f, 211.22f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
					__LIB_32__::func_9(1994.9022f, 3822.9993f, 31.1571f, 211.22f);
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
					}
					__LIB_17__::func_90(2, 0);
					MISC::CLEAR_AREA(1984.265f, 3818.7625f, 31.38f, 10000f, true, false, false, false);
					iLocal_272++;
				}
				break;
			case 1:
				STREAMING::REQUEST_MODEL(iLocal_461);
				STREAMING::REQUEST_MODEL(iLocal_460);
				STREAMING::REQUEST_MODEL(Local_426.f_1);
				VEHICLE::REQUEST_VEHICLE_ASSET(Local_426.f_1, 15);
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						switch (__LIB_14__::func_466())
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0)))
								{
									iLocal_463[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0));
								}
								break;
							case 2:
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0)))
								{
									iLocal_463[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0));
								}
								break;
						}
						if (!ENTITY::DOES_ENTITY_EXIST(Local_426.f_0))
						{
							if (STREAMING::HAS_MODEL_LOADED(Local_426.f_1))
							{
								__LIB_16__::func_43(&Local_426, 2, Local_426.f_3, Local_426.f_6, 1, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("trevor", __LIB_12__::func_894(2)))
						{
							if (__LIB_14__::func_466() == 0)
							{
								__LIB_36__::func_931(&iLocal_463, 2);
								__LIB_31__::func_990(&iLocal_463, 1, 1, 0);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.1268f, 3830.4668f, 31.4241f, true, false, false, true);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 218.8945f);
							func_379(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							__LIB_0__::func_222(&uLocal_519, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
							TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_426.f_0, -1, -1, 1f, 3, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("michael", __LIB_12__::func_894(0)))
						{
							if (__LIB_14__::func_466() == 0)
							{
								__LIB_36__::func_931(&iLocal_463, 2);
								__LIB_31__::func_990(&iLocal_463, 1, 1, 0);
							}
							if (!PED::IS_PED_INJURED(iLocal_463[0]))
							{
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[0]);
								ENTITY::SET_ENTITY_COORDS(iLocal_463[0], 1982.6512f, 3827.7864f, 31.41647f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_463[0], 332.5456f);
								func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
								TASK::TASK_ENTER_VEHICLE(iLocal_463[0], Local_426.f_0, 30000, 0, 2f, 1, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_463[0], false, false);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
						{
							RECORDING::REPLAY_STOP_EVENT();
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(95f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
						}
					}
					else
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
						iLocal_734 = 2;
					}
				}
				else
				{
					__LIB_17__::func_195(0, 0, 0, 0f, 0f, 0, 0);
					iLocal_734 = 0;
					iLocal_733 = 2;
				}
				break;
			}
	}
	if (iLocal_734 == 2)
	{
		STREAMING::REQUEST_MODEL(iLocal_461);
		STREAMING::REQUEST_MODEL(iLocal_460);
		STREAMING::REQUEST_MODEL(Local_426.f_1);
		VEHICLE::REQUEST_VEHICLE_ASSET(Local_426.f_1, 15);
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			switch (__LIB_14__::func_466())
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0)))
					{
						iLocal_463[2] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("trevor", 0));
					}
					break;
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0)))
					{
						iLocal_463[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("michael", 0));
					}
					break;
			}
		}
		else if (((STREAMING::HAS_MODEL_LOADED(iLocal_461) && STREAMING::HAS_MODEL_LOADED(iLocal_460)) && STREAMING::HAS_MODEL_LOADED(Local_426.f_1)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(Local_426.f_1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_426.f_0))
			{
				__LIB_16__::func_43(&Local_426, 2, Local_426.f_3, Local_426.f_6, 1, 0);
			}
			if (__LIB_14__::func_466() == 0)
			{
				__LIB_36__::func_931(&iLocal_463, 2);
				__LIB_31__::func_990(&iLocal_463, 1, 1, 0);
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1981.1268f, 3830.4668f, 31.4241f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 218.8945f);
			func_379(PLAYER::PLAYER_PED_ID(), 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_0__::func_222(&uLocal_519, 2, PLAYER::PLAYER_PED_ID(), "trevor", 0, 1);
			TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_426.f_0, -1, -1, 1f, 3, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
			if (!PED::IS_PED_INJURED(iLocal_463[0]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_463[0]);
				ENTITY::SET_ENTITY_COORDS(iLocal_463[0], 1982.6512f, 3827.7864f, 31.41647f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_463[0], 332.5456f);
				func_379(iLocal_463[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				__LIB_0__::func_222(&uLocal_519, 0, iLocal_463[0], "michael", 0, 1);
				TASK::TASK_ENTER_VEHICLE(iLocal_463[0], Local_426.f_0, -1, 0, 2f, 1, 0);
			}
			func_509(0, 90f, 0f, 0);
			iLocal_734 = 0;
			iLocal_733 = 2;
		}
	}
	if (iLocal_734 == 3)
	{
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(false);
		}
	}
}

void func_1094()//Position - 0xACA41
{
	if (iLocal_733 != 20)
	{
		func_723();
		if (ENTITY::DOES_ENTITY_EXIST(Local_403.f_0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_403.f_0, false))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_403.f_0, 1000, 0);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_403.f_0, 1000f);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_403.f_0, 1000f);
				ENTITY::SET_ENTITY_PROOFS(Local_403.f_0, true, true, true, true, true, false, false, false);
			}
		}
		STREAMING::CLEAR_FOCUS();
		GRAPHICS::SET_SEETHROUGH(false);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EXILE_2_SNIPE_STAGE_THERMAL"))
		{
			AUDIO::STOP_AUDIO_SCENE("EXILE_2_SNIPE_STAGE_THERMAL");
		}
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		__LIB_0__::func_325();
		if ((iLocal_733 == 7 || iLocal_733 == 8) || iLocal_733 == 10)
		{
			bLocal_226 = true;
		}
		iLocal_332 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("EXL2_MISSION_FAIL");
		func_1095(sLocal_317);
		iLocal_733 = 20;
	}
}

void func_1095(char* sParam0)//Position - 0xACB05
{
	__LIB_0__::func_381(sParam0);
	func_1096(0);
}

void func_1096(int iParam0)//Position - 0xACB18
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_1097(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_1097(int iParam0)//Position - 0xACB5D
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_6();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_1098(&(Global_113386.f_2363.f_539), iVar1);
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

void func_1098(var uParam0, int iParam1)//Position - 0xACC6D
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
			if (!func_1100(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_1100(int iParam0, var uParam1, float fParam2)//Position - 0xACE41
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
			return func_1100(8, uParam1, fParam2);
			break;
		case 10:
			return func_1100(8, uParam1, fParam2);
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

int func_1104()//Position - 0xAD923
{
	int iVar0;
	struct<3> Var1;
	switch (iLocal_733)
	{
		case 0:
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				return 1;
			}
			if (__LIB_16__::func_313(&Local_426))
			{
				return 1;
			}
			if (__LIB_16__::func_313(&Local_403))
			{
				return 1;
			}
			break;
		case 2:
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (func_1106(&Local_403))
			{
				sLocal_317 = "FS_HELISTUCK";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_405))
			{
				sLocal_317 = "FS_CARDEAD";
				return 1;
			}
			if (__LIB_14__::func_466() == 1)
			{
				if (func_1106(&Local_405))
				{
					sLocal_317 = "FS_CARSTUCK";
					return 1;
				}
			}
			if (__LIB_16__::func_313(&Local_426))
			{
				sLocal_317 = "FS_CARDEAD2";
				return 1;
			}
			if (__LIB_14__::func_466() == 2)
			{
				if (func_1106(&Local_426))
				{
					sLocal_317 = "FS_CARSTUCK2";
					return 1;
				}
			}
			if (__LIB_16__::func_313(&Local_418))
			{
			}
			switch (__LIB_14__::func_466())
			{
				case 1:
					if (!Local_503.f_16)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_418.f_0, false))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_418.f_0, true), true) > 200f)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_418.f_0))
								{
									sLocal_317 = "FS_FAIL_0";
									return 1;
								}
								else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_418.f_0, true), true) > 300f)
								{
									sLocal_317 = "FS_FAIL_0";
									return 1;
								}
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2203.082f, 4411.719f, 48.152f, -2155.247f, 4394.323f, 76.352f, 5f, false, true, 0))
					{
						iVar0 = 0;
						while (iVar0 <= (Local_391.f_0 - 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_391[iVar0 /*33*/]))
							{
								PED::DELETE_PED(&(Local_391[iVar0 /*33*/]));
							}
							iVar0++;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_418.f_0))
						{
							VEHICLE::DELETE_VEHICLE(&Local_418);
						}
						sLocal_317 = "FS_FAIL_0";
						return 1;
					}
					if (iLocal_342)
					{
						sLocal_317 = "FS_FAIL_0";
						return 1;
					}
					Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
					if (Var1.f_2 < 10f)
					{
						sLocal_317 = "FS_FAIL_0";
						return 1;
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_418.f_0) > 92000f)
						{
							sLocal_317 = "FS_FAIL_0";
							return 1;
						}
					}
					break;
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_463[0]))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_463[0]))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[0], true), true) > 200f)
							{
								sLocal_317 = "FS_FAIL_1";
								return 1;
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[0], true), true) > 300f)
						{
							sLocal_317 = "FS_FAIL_1";
							return 1;
						}
					}
					break;
			}
			break;
		case 3:
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_405))
			{
				sLocal_317 = "FS_CARDEAD";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_426))
			{
				return 1;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_418.f_0))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_418.f_0) > 92000f)
				{
					sLocal_317 = "FS_FAIL_0";
					return 1;
				}
			}
			break;
		case 4:
		case 5:
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (func_1106(&Local_403))
			{
				sLocal_317 = "FS_HELISTUCK";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_426))
			{
				sLocal_317 = "FS_CARDEAD2";
				return 1;
			}
			if (__LIB_14__::func_466() == 2 && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (func_1106(&Local_426))
				{
					sLocal_317 = "FS_CARSTUCK2";
					return 1;
				}
			}
			switch (__LIB_14__::func_466())
			{
				case 1:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1874.09f, 4485.97f, 25.35f, true) > 400f)
					{
						sLocal_317 = "FS_FAIL_8";
						return 1;
					}
					break;
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1874.783f, 4484.7104f, 90f, true) < 120f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							sLocal_317 = "FS_FAIL_2";
							return 1;
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[0], true), true) > 200f)
					{
						sLocal_317 = "FS_FAIL_1";
						return 1;
					}
					if (iLocal_267 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 1000f)
						{
							sLocal_317 = "FS_FAIL_10";
							return 1;
						}
					}
					else if (iLocal_267 > 0)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_403.f_0) > 15f)
							{
								sLocal_317 = "FS_FAIL_10";
								return 1;
							}
						}
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 200f)
						{
							sLocal_317 = "FS_FAIL_10";
							return 1;
						}
					}
					break;
			}
			break;
		case 6:
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (func_1106(&Local_403))
			{
				sLocal_317 = "FS_HELISTUCK";
				return 1;
			}
			if (__LIB_16__::func_313(&Local_426))
			{
				sLocal_317 = "FS_CARDEAD2";
				return 1;
			}
			if (func_1106(&Local_426))
			{
				sLocal_317 = "FS_CARSTUCK2";
				return 1;
			}
			if (__LIB_14__::func_466() == 2)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[0], true), true) > 200f)
				{
					sLocal_317 = "FS_FAIL_3";
					return 1;
				}
			}
			break;
		case 7:
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			if (__LIB_14__::func_466() == 1)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1627.1f, 4413.2f, 3.66f, true) > 450f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_391[3 /*33*/]))
					{
						sLocal_317 = "FS_FAIL_4";
					}
					else
					{
						sLocal_317 = "FS_FAIL_0";
					}
					return 1;
				}
			}
			func_1105();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_435.f_0, false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_435.f_0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_435.f_0) > 3000f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_391[3 /*33*/]))
						{
							sLocal_317 = "FS_FAIL_4";
						}
						else
						{
							sLocal_317 = "FS_FAIL_0";
						}
						return 1;
					}
				}
			}
			break;
		case 8:
		case 9:
		case 10:
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			switch (__LIB_14__::func_466())
			{
				case 1:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1627.1f, 4413.2f, 3.66f, true) > 600f)
					{
						sLocal_317 = "FS_FAIL_5";
						return 1;
					}
					break;
				case 2:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), true) > 700f)
					{
						sLocal_317 = "FS_FAIL_6";
						return 1;
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 700f)
					{
						sLocal_317 = "FS_FAIL_8";
						return 1;
					}
					if (iLocal_733 == 10)
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0))
						{
							if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_403.f_0) > 15f)
							{
								sLocal_317 = "FS_FAIL_10";
								return 1;
							}
						}
						if (func_1106(&Local_403))
						{
							sLocal_317 = "FS_HELISTUCK";
							return 1;
						}
					}
					break;
			}
			break;
		case 11:
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_403.f_0, true), true) > 200f)
			{
				sLocal_317 = "FS_FAIL_10";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[0], true), true) > 200f)
			{
				sLocal_317 = "FS_FAIL_3";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_463[1], true), true) > 200f)
			{
				sLocal_317 = "FS_FAIL_7";
				return 1;
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(Local_393.f_0, true), true) > 200f)
			{
				sLocal_317 = "FS_FAIL_8";
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_403.f_0, false))
			{
				if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_403.f_0) > 15f)
				{
					sLocal_317 = "FS_FAIL_10";
					return 1;
				}
			}
			if (func_1106(&Local_403))
			{
				sLocal_317 = "FS_HELISTUCK";
				return 1;
			}
			break;
		case 12:
			if (__LIB_16__::func_313(&Local_403))
			{
				sLocal_317 = "FS_HELIDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[0])))
			{
				sLocal_317 = "FS_MICHDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[1])))
			{
				sLocal_317 = "FS_FRANDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&(iLocal_463[2])))
			{
				sLocal_317 = "FS_TREVDEAD";
				return 1;
			}
			if (__LIB_16__::func_314(&Local_393))
			{
				sLocal_317 = "FS_CHOP_DEAD";
				return 1;
			}
			break;
	}
	return 0;
}

int func_1105()//Position - 0xAE4CD
{
	if (__LIB_14__::func_466() == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -1627.1f, 4413.2f, 3.66f, true) < 450f)
		{
			if (__LIB_0__::func_501("FS_GOD_3", 0, 0))
			{
				HUD::CLEAR_THIS_PRINT("FS_GOD_3");
			}
			iLocal_273 = MISC::GET_GAME_TIMER();
		}
		else
		{
			if (!iLocal_223)
			{
				__LIB_0__::func_229("FS_GOD_3", 7500, 1);
				iLocal_223 = 1;
			}
			if (__LIB_0__::func_611(&iLocal_273, 7000))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_391[3 /*33*/]))
				{
					sLocal_317 = "FS_FAIL_4";
				}
				else
				{
					sLocal_317 = "FS_FAIL_0";
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_1106(int iParam0)//Position - 0xAE56E
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			{
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, 40000))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_1109()//Position - 0xAE61A
{
	int iVar0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	__LIB_16__::func_1();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(1f);
	__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 183);
	PAD::INIT_PC_SCRIPTED_CONTROLS("Exile2_Thermal_Scope");
	__LIB_0__::func_544(61, 1, 0, 1, 0);
	func_1114();
	HUD::CLEAR_HELP(true);
	HUD::CLEAR_PRINTS();
	HUD::REQUEST_ADDITIONAL_TEXT("FORSNIP", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("TM44AUD", 6);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		SYSTEM::WAIT(0);
	}
	Local_377 = { -2353.046f, 4401.4536f, 0f };
	Local_378 = { -1198.5111f, 4483.3555f, 100f };
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
	STREAMING::SET_PED_POPULATION_BUDGET(1);
	func_1008();
	PED::ADD_SCENARIO_BLOCKING_AREA(-1692f, 4577f, 120f, -2112f, 4339f, -100f, false, true, true, true);
	__LIB_17__::func_785(20, 1702.9482f, 3272.0217f, 40.1539f, 247.3247f);
	__LIB_17__::func_93(20);
	__LIB_0__::func_342(20);
	func_699();
	iLocal_707 = __LIB_17__::func_87();
	__LIB_17__::func_105(1);
	__LIB_12__::func_849(4, 1);
	if (__LIB_0__::func_323())
	{
		iLocal_736 = 1;
		if (!Global_94618)
		{
			switch (__LIB_0__::func_344())
			{
				case 0:
					func_639();
					break;
				case 1:
					func_577();
					break;
				case 2:
					func_574();
					break;
				case 3:
					func_556();
					break;
				case 4:
					func_522();
					break;
				case 5:
					func_447();
					break;
			}
		}
		else
		{
			iVar0 = __LIB_0__::func_344() + 1;
			switch (iVar0)
			{
				case 1:
					func_577();
					break;
				case 2:
					func_574();
					break;
				case 3:
					func_556();
					break;
				case 4:
					func_522();
					break;
				case 5:
					func_447();
					break;
				case 6:
					func_4();
					break;
				}
		}
		iLocal_736 = 0;
	}
	else if (!__LIB_0__::func_2(0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			iLocal_733 = 1;
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
		}
		__LIB_17__::func_789(0, "start of mission", 0, 0, 0, 1);
	}
	else
	{
		func_1110();
	}
}

void func_1110()//Position - 0xAE84B
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_12__::func_894(0));
	while (!STREAMING::HAS_MODEL_LOADED(__LIB_12__::func_894(0)))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(1974.9646f, 3814.8625f, 32.4249f, 5f, true, false, false, false);
	func_393(0, 0);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1974.9646f, 3814.8625f, 32.4249f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 80.0455f);
	STREAMING::NEW_LOAD_SCENE_START(1974.9646f, 3814.8625f, 32.4249f, __LIB_3__::func_80(0f, 0f, 80.0455f), 100f, 0);
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	CUTSCENE::REQUEST_CUTSCENE("Exile_2_int", 8);
	while (!CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		SYSTEM::WAIT(0);
	}
	switch (__LIB_14__::func_466())
	{
		case 0:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "trevor", 2, __LIB_12__::func_894(2), 0);
			break;
		case 2:
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "michael", 2, __LIB_12__::func_894(0), 0);
			break;
	}
	__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
	CUTSCENE::START_CUTSCENE(0);
	while (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		SYSTEM::WAIT(0);
	}
	STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(1981.1268f, 3830.4668f, 31.4241f, __LIB_3__::func_80(0f, 0f, 296f));
	__LIB_16__::func_937(1994.075f, 3816.573f, 31.096f, 1983.271f, 3834.697f, 35.396f, 22.5f, 1994.9022f, 3822.9993f, 31.1571f, 211.22f, 15f, 15f, 15f, 1, 1, 1, 0, 0);
	__LIB_32__::func_9(1994.9022f, 3822.9993f, 31.1571f, 211.22f);
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
	}
	__LIB_17__::func_90(2, 0);
	MISC::CLEAR_AREA(1984.265f, 3818.7625f, 31.38f, 10000f, true, false, false, false);
	iLocal_272 = 1;
	iLocal_734 = 1;
	iLocal_733 = 0;
	CAM::DO_SCREEN_FADE_IN(800);
	__LIB_17__::func_789(0, "start of mission", 0, 0, 0, 1);
}

void func_1114()//Position - 0xAEADE
{
	PED::ADD_RELATIONSHIP_GROUP("players group", &iLocal_756);
	PED::ADD_RELATIONSHIP_GROUP("enemy group", &iLocal_757);
	PED::ADD_RELATIONSHIP_GROUP("animal_group", &iLocal_758);
}

void func_1121()//Position - 0xB2F83
{
	__LIB_0__::func_325();
	PAD::SHUTDOWN_PC_SCRIPTED_CONTROLS();
	MISC::SET_FAKE_WANTED_LEVEL(0);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PED::SET_CREATE_RANDOM_COPS(true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_15__::func_931();
	GRAPHICS::SET_DECAL_BULLET_IMPACT_RANGE_SCALE(1f);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
				}
			}
		}
		PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID());
		PED::RESET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), 0.25f);
		PED::RESET_PED_STRAFE_CLIPSET(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(PLAYER::PLAYER_PED_ID(), false);
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		}
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, false);
	}
	func_1122();
	__LIB_13__::func_815(&Local_687, 1, 0);
	__LIB_16__::func_18(0);
	__LIB_17__::func_785(20, 0f, 0f, 0f, 0f);
	__LIB_0__::func_671(0);
	__LIB_0__::func_203(0, 0);
	__LIB_15__::func_306(0);
	__LIB_17__::func_105(0);
	func_707(0, 1);
	__LIB_17__::func_88(&Local_503);
	func_20(&Local_518, 1);
	func_18(&Local_518, &iLocal_463);
	PAD::CLEAR_CONTROL_LIGHT_EFFECT(0 /*PLAYER_CONTROL*/);
	__LIB_12__::func_849(4, 0);
	GRAPHICS::ENABLE_PROCOBJ_CREATION();
	AUDIO::TRIGGER_MUSIC_EVENT("EXL2_MISSION_FAIL");
	CAM::DESTROY_ALL_CAMS(false);
	STREAMING::CLEAR_FOCUS();
	__LIB_0__::func_345(&uLocal_721, 0, 0);
	GRAPHICS::SET_SEETHROUGH(false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_377, Local_378, 1);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::REMOVE_ANIM_DICT(sLocal_5734);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_737))
	{
		FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_737, true), 4, 1f, true, false, 1f, false);
		ENTITY::DELETE_ENTITY(&iLocal_737);
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_297))
		{
			AUDIO::STOP_SOUND(iLocal_297);
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_353))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_353, false);
	}
	func_716();
	MISC::SET_TIME_SCALE(1f);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1122()//Position - 0xB317D
{
	Global_113386.f_2363.f_539.f_2300[2 /*3*/] = { 0f, 0f, 0f };
	Global_113386.f_2363.f_539.f_2310[2] = 0f;
	Global_113386.f_2363.f_539.f_2314[2] = 0;
	Global_113386.f_2363.f_539.f_2318[2 /*3*/] = { 0f, 0f, 0f };
}

void func_1124()//Position - 0xB31ED
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
				if (!func_1097(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_6();
		}
	}
}

void func_1126()//Position - 0xB329E
{
	if (__LIB_14__::func_466() == 1)
	{
		switch (__LIB_17__::func_80())
		{
			case 0:
				__LIB_0__::func_469(0);
				break;
			case 1:
				__LIB_0__::func_469(2);
				break;
			case 2:
				__LIB_0__::func_469(2);
				break;
		}
		__LIB_0__::func_507(1980.3524f, 3816.627f, 31.2685f, 298.2293f);
	}
}

