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
	bool bLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	bool bLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	var uLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	float fLocal_62[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_63[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_64[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_65[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_66[11] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_67 = 0f;
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_72[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_73[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_74[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_75[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_76[22] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_77[1] = { 0f };
	float fLocal_78[1] = { 0f };
	float fLocal_79[1] = { 0f };
	float fLocal_80[1] = { 0f };
	float fLocal_81 = 0f;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	int iLocal_102[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_103[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_104[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_105[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_107[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108[1] = { 0 };
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
	struct<3> Local_126[11];
	struct<3> Local_127[1];
	struct<3> Local_128[22];
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<3> Local_138 = { 0, 0, 0 } ;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	char cLocal_142[64] = "";
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_153[1] = { 0 };
	int iLocal_154[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_159[5] = { 0, 0, 0, 0, 0 };
	int iLocal_160[1] = { 0 };
	int iLocal_161[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162[1] = { 0 };
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	var uLocal_166 = 5;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = -1;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 1000;
	var uLocal_182 = 1000;
	var uLocal_183 = 0;
	int iLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	float fLocal_187 = 0f;
	float fLocal_188 = 0f;
	float fLocal_189 = 0f;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	bool bLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	float fLocal_215 = 0f;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220[5] = { 0, 0, 0, 0, 0 };
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_228 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	struct<3> Local_230 = { 0, 0, 0 } ;
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
	var uLocal_241 = 0;
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
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265[1] = { 0 };
	int iLocal_266 = 0;
	struct<3> Local_267 = { 0, 0, 0 } ;
	struct<3> Local_268 = { 0, 0, 0 } ;
	struct<65> Local_269[4];
	struct<65> Local_270[5];
	struct<65> Local_271[5];
	struct<18> Local_272[3];
	struct<34> Local_273[50];
	struct<34> Local_274[5];
	var uLocal_275[5] = { 0, 0, 0, 0, 0 };
	struct<34> Local_276[3];
	struct<18> Local_277[30];
	int iLocal_278 = 0;
	struct<283> Local_279[5];
	struct<10> Local_280 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_281 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_282[5];
	struct<9> Local_283 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_284[26];
	struct<8> Local_285 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	struct<8> Local_290 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	struct<12> Local_295[2];
	struct<12> Local_296[2];
	struct<6> Local_297 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_298 = 0;
	var uLocal_299 = 1092616192;
	var uLocal_300 = 1101004800;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 3;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	var uLocal_319 = 4;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 3;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
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
	var uLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	var uLocal_355[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int* iLocal_356 = NULL;
	char* sLocal_357 = NULL;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	float fLocal_361 = 0f;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	bool bLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	bool bLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	bool bLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	bool bLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399[5] = { 0, 0, 0, 0, 0 };
	int iLocal_400[2] = { 0, 0 };
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_404[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_405[4] = { 0, 0, 0, 0 };
	int iLocal_406 = 0;
	char* sLocal_407 = NULL;
	int* iLocal_408 = NULL;
	var uLocal_409 = 2;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	float fLocal_413 = 0f;
	float fLocal_414 = 0f;
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
	struct<3> Local_429 = { 0, 0, 0 } ;
	struct<3> Local_430 = { 0, 0, 0 } ;
	int iLocal_431[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_432 = 0;
	struct<3> Local_433[20];
	struct<3> Local_434 = { 0, 0, 0 } ;
	struct<3> Local_435 = { 0, 0, 0 } ;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	var uLocal_442 = 5;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	float fLocal_459 = 0f;
	float fLocal_460 = 0f;
	float fLocal_461 = 0f;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	char* sLocal_477 = NULL;
	char* sLocal_478 = NULL;
	char* sLocal_479 = NULL;
	float fLocal_480 = 0f;
	bool bLocal_481 = 0;
	var uLocal_482 = 4;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 4;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 4;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 4;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 4;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 4;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 4;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	struct<10> Local_526[16];
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	struct<3> Local_533 = { 0, 0, 0 } ;
	int iLocal_534 = 0;
	struct<3> Local_535[50];
	int iLocal_536 = 0;
	struct<4> Local_537[50];
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	struct<126> Local_542 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	float fLocal_550 = 0f;
	char* sLocal_551 = NULL;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	bool bLocal_577 = 0;
	bool bLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	var uLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	struct<3> Local_614 = { 0, 0, 0 } ;
	struct<3> Local_615 = { 0, 0, 0 } ;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	struct<3> Local_632 = { 0, 0, 0 } ;
	struct<3> Local_633 = { 0, 0, 0 } ;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	bool bLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	int iLocal_653 = 0;
	char* sLocal_654 = NULL;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
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
	bLocal_31 = true;
	bLocal_38 = true;
	bLocal_60 = true;
	fLocal_81 = 120f;
	fLocal_82 = 0f;
	fLocal_84 = 1f;
	fLocal_85 = 0f;
	fLocal_86 = 1f;
	fLocal_87 = 30f;
	fLocal_89 = 1f;
	fLocal_90 = 5f;
	fLocal_91 = 1f;
	fLocal_92 = 1f;
	fLocal_93 = 100f;
	fLocal_94 = 100f;
	fLocal_95 = 0f;
	fLocal_96 = 7000f;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_99 = 0.3f;
	fLocal_100 = 0.5f;
	fLocal_101 = 50f;
	iLocal_112 = -1;
	iLocal_120 = -1;
	iLocal_121 = -1;
	iLocal_184 = 3;
	fLocal_187 = 80f;
	fLocal_188 = 140f;
	fLocal_189 = 180f;
	iLocal_195 = 1;
	iLocal_196 = 65;
	iLocal_197 = 49;
	iLocal_198 = 64;
	iLocal_202 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_203 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	fLocal_215 = 360f;
	Local_228 = { -0.875f, -1.75f, -0.475f };
	Local_229 = { 0.875f, -1.75f, -0.475f };
	Local_230 = { 0f, 0f, 0f };
	Local_267 = { 1972.02f, 3817.854f, 33.424f };
	Local_268 = { 0f, 0f, -152.75f };
	sLocal_357 = "t1actcam";
	bLocal_369 = true;
	bLocal_378 = true;
	sLocal_407 = "Trev1ChaseDw";
	Local_429 = { 1981.1176f, 3817.199f, 31.3807f };
	Local_430 = { 80.2901f, 3619.4456f, 38.6997f };
	Local_434 = { 0f, 10f, 5f };
	Local_435 = { 64.9021f, 3695.381f, 38.7647f };
	fLocal_460 = 1f;
	fLocal_461 = 323.8188f;
	sLocal_477 = "TrevOne";
	sLocal_478 = "T1M1AUD";
	sLocal_479 = "TREV1";
	Local_614 = { 52.16f, 3661.33f, 38.77f };
	Local_615 = { 52.16f, 3661.33f, 38.77f };
	iLocal_635 = AUDIO::GET_SOUND_ID();
	MISC::SET_MISSION_FLAG(true);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
		{
			func_984();
		}
		__LIB_16__::func_323(PLAYER::PLAYER_PED_ID(), 2);
		AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
		func_980();
		func_967(0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_281.f_0, false);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_281.f_0, false);
		}
	}
	iLocal_317 = 0;
	iLocal_278 = 0;
	while (bLocal_369)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_MrPhilips", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_475, joaat("COP")) != 5)
					{
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, false);
						}
						if (!PED::IS_PED_INJURED(Local_281.f_0))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, false);
						}
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, joaat("COP"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_475);
					}
				}
				else if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_475, joaat("COP")) != 255)
				{
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, true);
					}
					if (!PED::IS_PED_INJURED(Local_281.f_0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, true);
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, iLocal_475, joaat("COP"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("COP"), iLocal_475);
				}
			}
			if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
			{
				func_984();
			}
		}
		if (iLocal_317 > 0)
		{
			if (iLocal_317 == 1)
			{
				VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			}
			if (iLocal_317 == 4)
			{
				VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			}
			if (iLocal_317 > 4 && iLocal_317 < 8)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
			}
			if (iLocal_317 == 8)
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
			}
		}
		func_966();
		switch (iLocal_317)
		{
			case 0:
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(24.5298f, 3590.7327f, 0f, 147.1179f, 3772.4255f, 100f, false, true);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.4102f, 0f, 110.0308f, 3801.6506f, 100f, false, true);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(24.5298f, 3590.7327f, 0f, 147.1179f, 3772.4255f, 100f, 0);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(5.9328f, 3682.4102f, 0f, 110.0308f, 3801.6506f, 100f, 0);
				Global_103950.f_2884 = { __LIB_15__::func_962(214, 0) };
				if (__LIB_0__::func_323())
				{
					iLocal_224 = __LIB_16__::func_303(2);
					if (iLocal_224 != 0 && iLocal_224 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::REQUEST_WEAPON_ASSET(iLocal_224, 31, 0);
					}
					if (__LIB_16__::func_303(2) != joaat("WEAPON_UNARMED") && __LIB_16__::func_303(2) != 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_16__::func_303(2), false))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_16__::func_303(2), true);
							}
						}
					}
					else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), true);
					}
					if (Global_94618 == 1)
					{
						func_955();
						iLocal_371 = __LIB_0__::func_344();
						iLocal_371++;
						iLocal_370 = 0;
						if (iLocal_371 < 10)
						{
							if (iLocal_371 == 0)
							{
								__LIB_0__::func_427(1995.97f, 3829.84f, 32.27f, 100.81f, 1, 0);
								iLocal_317 = 1;
							}
							else if (iLocal_371 == 1)
							{
								__LIB_0__::func_427(2016.4196f, 4642.44f, 40.1808f, 143.064f, 1, 0);
								iLocal_317 = 2;
							}
							else if (iLocal_371 == 2)
							{
								__LIB_0__::func_427(58.4031f, 3630.9597f, 38.7482f, 20.8123f, 1, 0);
								iLocal_317 = 4;
							}
							else if (iLocal_371 == 3)
							{
								__LIB_0__::func_427(80.4212f, 3607.0464f, 38.6962f, 189.0543f, 1, 0);
								iLocal_317 = 5;
							}
							else if (iLocal_371 == 4)
							{
								__LIB_0__::func_427(-11.4373f, 3007.7844f, 40.6016f, 180.4163f, 1, 0);
								iLocal_317 = 6;
							}
							else if (iLocal_371 == 5)
							{
								__LIB_0__::func_427(-45.8227f, 3094.8867f, 26.0223f, 23.9401f, 1, 0);
								iLocal_317 = 7;
							}
							else if (iLocal_371 == 6)
							{
								__LIB_0__::func_427(-6.8119f, 3039.8992f, 39.677f, 287.4757f, 1, 0);
								iLocal_317 = 8;
							}
							else if (iLocal_371 == 7)
							{
								__LIB_0__::func_427(1952.2297f, 3787.396f, 31.2922f, 27.2205f, 1, 0);
								iLocal_317 = 9;
							}
						}
						else
						{
							iLocal_317 = 10;
						}
					}
					else
					{
						func_955();
						iLocal_371 = __LIB_0__::func_344();
						iLocal_370 = 0;
						if (iLocal_371 == 0)
						{
							__LIB_0__::func_427(1995.97f, 3829.84f, 32.27f, 100.81f, 1, 0);
							iLocal_317 = 1;
						}
						else if (iLocal_371 == 1)
						{
							__LIB_0__::func_427(1965.354f, 4646.6006f, 39.8213f, 99.27f, 1, 0);
							iLocal_317 = 3;
						}
						else if (iLocal_371 == 2)
						{
							__LIB_0__::func_427(58.4031f, 3630.9597f, 38.7482f, 20.8123f, 1, 0);
							iLocal_317 = 4;
						}
						else if (iLocal_371 == 3)
						{
							__LIB_0__::func_427(80.4212f, 3607.0464f, 38.6962f, 189.0543f, 1, 0);
							iLocal_317 = 5;
						}
						else if (iLocal_371 == 4)
						{
							__LIB_0__::func_427(-11.4373f, 3007.7844f, 40.6016f, 180.4163f, 1, 0);
							iLocal_317 = 6;
						}
						else if (iLocal_371 == 5)
						{
							__LIB_0__::func_427(-45.8227f, 3094.8867f, 26.0223f, 23.9401f, 1, 0);
							iLocal_317 = 7;
						}
						else if (iLocal_371 == 6)
						{
							__LIB_0__::func_427(-6.8119f, 3039.8992f, 39.677f, 287.4757f, 1, 0);
							iLocal_317 = 8;
						}
					}
					func_939();
				}
				else
				{
					if (!__LIB_0__::func_323())
					{
						func_892();
					}
					func_955();
				}
				break;
			case 1:
				if (func_883())
				{
					iLocal_317 = 2;
				}
				break;
			case 2:
				if (func_875())
				{
					iLocal_317 = 3;
				}
				break;
			case 3:
				if (func_823())
				{
					iLocal_317 = 4;
				}
				break;
			case 4:
				if (func_722())
				{
					iLocal_317 = 5;
				}
				break;
			case 5:
				if (func_704())
				{
					iLocal_317 = 6;
				}
				break;
			case 6:
				if (func_678())
				{
					iLocal_317 = 7;
				}
				break;
			case 7:
				if (func_661())
				{
					iLocal_317 = 8;
				}
				break;
			case 8:
				if (func_605())
				{
					iLocal_317 = 9;
				}
				break;
			case 9:
				if (func_102())
				{
					iLocal_317 = 10;
				}
				break;
			case 10:
				func_99();
				break;
			case 12:
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
		{
			if (!iLocal_222)
			{
				__LIB_0__::func_377(Local_285.f_0, 491);
				iLocal_222 = 1;
			}
		}
		else if (iLocal_222)
		{
			__LIB_0__::func_377(0, 491);
			iLocal_222 = 0;
		}
		if (iLocal_317 == 4 || iLocal_317 == 3)
		{
		}
		func_9();
		if (bLocal_481)
		{
			func_967(1, 0);
		}
		if (iLocal_317 > 6)
		{
		}
		func_7();
		func_1();
		SYSTEM::WAIT(0);
	}
	func_967(0, 0);
}

void func_1()//Position - 0x8D0
{
	if (!PED::IS_PED_INJURED(Local_280.f_0))
	{
		if (iLocal_317 == 1)
		{
			switch (iLocal_440)
			{
				case 0:
					iLocal_440++;
					break;
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
						{
							PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_280.f_0, true);
						}
					}
					iLocal_440++;
					break;
				case 2:
					break;
				case 3:
					break;
			}
		}
		else if (iLocal_317 == 3)
		{
			switch (iLocal_440)
			{
				case 0:
					if (!PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
					{
						PED::SET_PED_AS_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495());
					}
					iLocal_440++;
					break;
				case 1:
					break;
			}
		}
		else if (iLocal_317 == 4)
		{
			switch (iLocal_440)
			{
				case 0:
					if (HUD::DOES_BLIP_EXIST(Local_280.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_280.f_1));
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
					}
					PED::SET_PED_ACCURACY(Local_280.f_0, 100);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 3, false);
					iLocal_440++;
					break;
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						func_5(Local_280.f_0);
						if (PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) < 2f)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 3, true);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_280.f_0, true, 1);
								PED::SET_PED_TO_LOAD_COVER(Local_280.f_0, true);
								PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
								PED::SET_PED_ACCURACY(Local_280.f_0, 10);
								ENTITY::SET_ENTITY_HEALTH(Local_280.f_0, 800, 0);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_280.f_0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 0, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 11, true);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_280.f_0, ENTITY::GET_ENTITY_COORDS(Local_285.f_0, false), 6f, false, false);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_280.f_0, iLocal_475);
								PED::SET_PED_CAN_BE_TARGETTED(Local_280.f_0, false);
								PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 118, true);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, iLocal_475);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_280.f_0, false, iLocal_476);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, false);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, iLocal_476);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_476, iLocal_475);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 36, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 320);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 100f, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
								TASK::TASK_PERFORM_SEQUENCE(Local_280.f_0, iLocal_469);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
								iLocal_440++;
							}
						}
						else
						{
							iLocal_440++;
						}
					}
					break;
				case 2:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 3, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 12, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 0, true);
						PED::SET_PED_COMBAT_MOVEMENT(Local_280.f_0, 1);
						PED::SET_PED_ACCURACY(Local_280.f_0, 10);
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_280.f_0, false))
						{
							func_5(Local_280.f_0);
							if (!HUD::DOES_BLIP_EXIST(Local_280.f_1))
							{
								Local_280.f_1 = HUD::ADD_BLIP_FOR_ENTITY(Local_280.f_0);
								HUD::SET_BLIP_AS_FRIENDLY(Local_280.f_1, true);
								HUD::SET_BLIP_SCALE(Local_280.f_1, 0.5f);
							}
							iLocal_440++;
						}
					}
					break;
			}
		}
		else if (iLocal_317 == 6)
		{
			switch (iLocal_440)
			{
				case 0:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
						{
							if (!PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
							{
								PED::SET_PED_AS_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495());
							}
							TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_285.f_0, 8f, 0f, 0f), 2f, 20000, 0.25f, 0, 40000f);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
							TASK::TASK_PERFORM_SEQUENCE(Local_280.f_0, iLocal_469);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
						}
					}
					iLocal_440++;
					break;
				case 1:
					break;
			}
		}
		else if (iLocal_317 == 7)
		{
			switch (iLocal_440)
			{
				case 0:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
							{
								PED::SET_PED_AS_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495());
							}
							iLocal_440++;
						}
					}
					break;
				case 1:
					break;
				}
			}
	}
	if (!PED::IS_PED_INJURED(Local_281.f_0))
	{
		if (iLocal_317 == 1)
		{
			switch (iLocal_441)
			{
				case 0:
					iLocal_441++;
					break;
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
							{
								PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Local_281.f_0, true);
							}
						}
					}
					iLocal_441++;
					break;
				case 2:
					break;
				case 3:
					break;
			}
		}
		else if (iLocal_317 == 3)
		{
			switch (iLocal_441)
			{
				case 0:
					if (!PED::IS_PED_GROUP_MEMBER(Local_281.f_0, __LIB_0__::func_495()))
					{
						PED::SET_PED_AS_GROUP_MEMBER(Local_281.f_0, __LIB_0__::func_495());
					}
					iLocal_441++;
					break;
				case 1:
					break;
			}
		}
		else if (iLocal_317 == 4)
		{
			switch (iLocal_441)
			{
				case 0:
					if (HUD::DOES_BLIP_EXIST(Local_281.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_281.f_1));
					}
					if (PED::IS_PED_GROUP_MEMBER(Local_281.f_0, __LIB_0__::func_495()))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
					}
					PED::SET_PED_ACCURACY(Local_281.f_0, 100);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 3, false);
					TASK::CLEAR_PED_TASKS(Local_281.f_0);
					iLocal_441++;
					break;
				case 1:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						func_5(Local_281.f_0);
						PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
						if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) < 2f)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 3, true);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_281.f_0, true, 1);
								PED::SET_PED_TO_LOAD_COVER(Local_281.f_0, true);
								PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
								PED::SET_PED_ACCURACY(Local_281.f_0, 1);
								ENTITY::SET_ENTITY_HEALTH(Local_281.f_0, 800, 0);
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_281.f_0, false);
								PED::SET_PED_CAN_BE_TARGETTED(Local_281.f_0, false);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_281.f_0, iLocal_475);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 0, true);
								PED::SET_PED_CONFIG_FLAG(Local_281.f_0, 118, true);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_281.f_0, ENTITY::GET_ENTITY_COORDS(Local_285.f_0, false), 8f, false, false);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, iLocal_475);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, iLocal_476);
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_476, iLocal_475);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_281.f_0, false, iLocal_476);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 36, true);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 1000, 320);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
								TASK::TASK_PERFORM_SEQUENCE(Local_281.f_0, iLocal_469);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
								iLocal_441++;
							}
						}
						else
						{
							iLocal_441++;
						}
					}
					break;
				case 2:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 3, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 13, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 30, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 0, true);
						PED::SET_PED_ACCURACY(Local_281.f_0, 25);
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_281.f_0, false))
						{
							func_5(Local_281.f_0);
							if (!PED::IS_PED_INJURED(Local_281.f_0))
							{
								if (!HUD::DOES_BLIP_EXIST(Local_281.f_1))
								{
									Local_281.f_1 = __LIB_0__::func_666(Local_281.f_0, 0, 24);
									HUD::SET_BLIP_AS_FRIENDLY(Local_281.f_1, true);
								}
							}
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_475);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_285.f_0, false, iLocal_475);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_285.f_0, false, iLocal_476);
							VEHICLE::SET_VEHICLE_STRONG(Local_285.f_0, true);
							iLocal_441++;
						}
					}
					break;
			}
		}
		else if (iLocal_317 == 6)
		{
			switch (iLocal_441)
			{
				case 0:
					break;
				case 1:
					break;
			}
		}
		else if (iLocal_317 == 7)
		{
			switch (iLocal_441)
			{
				case 0:
					break;
				case 1:
					break;
				}
			}
	}
}

void func_5(int iParam0)//Position - 0x118A
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(iParam0, true, true, true, false);
	if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PUMPSHOTGUN"), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_PUMPSHOTGUN"), true);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_ASSAULTRIFLE"), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_ASSAULTRIFLE"), true);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_SMG"), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_SMG"), true);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_GRENADELAUNCHER"), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_GRENADELAUNCHER"), true);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER"), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_HEAVYSNIPER"), true);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_COMBATPISTOL"), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_COMBATPISTOL"), true);
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("WEAPON_PISTOL"), false))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_PISTOL"), true);
	}
}

void func_7()//Position - 0x127B
{
	if (iLocal_317 == 3)
	{
		switch (iLocal_438)
		{
			case 0:
				iLocal_462 = 0;
				while (iLocal_462 <= 3)
				{
					if (!PED::IS_PED_INJURED(Local_269[iLocal_462 /*65*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[iLocal_462 /*65*/], true);
					}
					iLocal_462++;
				}
				iLocal_438++;
				break;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_290.f_0))
			{
				if (iLocal_462 == 1)
				{
					if (!HUD::DOES_BLIP_EXIST(Local_290.f_1))
					{
						Local_290.f_1 = __LIB_0__::func_639(Local_290.f_0, 0, 0);
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(Local_290.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_290.f_1));
			}
			if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_269[0 /*65*/], 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_269[1 /*65*/], 0, 0);
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_295[0 /*12*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_295[0 /*12*/].f_1));
			}
			if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_269[2 /*65*/], 0, 0);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_295[0 /*12*/].f_1))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_269[2 /*65*/], 0, 0);
					HUD::REMOVE_BLIP(&(Local_295[0 /*12*/].f_1));
				}
			}
		}
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
		{
			if (HUD::DOES_BLIP_EXIST(Local_295[1 /*12*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_295[1 /*12*/].f_1));
			}
			if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_269[3 /*65*/], 0, 0);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_295[1 /*12*/].f_1))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_269[3 /*65*/], 0, 0);
					HUD::REMOVE_BLIP(&(Local_295[1 /*12*/].f_1));
				}
			}
		}
	}
}

void func_9()//Position - 0x148C
{
	if (iLocal_317 != 12 && iLocal_317 != 11)
	{
		if (bLocal_212)
		{
			if (bLocal_481 == 0)
			{
				if (func_96(Local_285.f_0))
				{
					if (!func_95("TRV1_FAIL"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
						{
							func_94("TRV1_FAIL", 1);
						}
					}
					func_37(7);
				}
			}
			if (iLocal_317 < 2)
			{
				if ((((((ENTITY::DOES_ENTITY_EXIST(Local_295[0 /*12*/]) && ENTITY::DOES_ENTITY_EXIST(Local_295[1 /*12*/])) && ENTITY::DOES_ENTITY_EXIST(Local_269[0 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_269[1 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_269[2 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_269[3 /*65*/])) && ENTITY::DOES_ENTITY_EXIST(Local_290.f_0))
				{
					if ((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_295[0 /*12*/], PLAYER::PLAYER_PED_ID(), true) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_295[1 /*12*/], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_269[0 /*65*/], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_269[1 /*65*/], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_269[3 /*65*/], PLAYER::PLAYER_PED_ID(), true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_290.f_0, PLAYER::PLAYER_PED_ID(), true))
					{
						if (Local_269[0 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[0 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[0 /*65*/].f_24 = 99;
							}
						}
						if (Local_269[1 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[1 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[1 /*65*/].f_24 = 99;
							}
						}
						if (Local_269[2 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[2 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[2 /*65*/].f_24 = 99;
							}
						}
						if (Local_269[3 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[3 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[3 /*65*/].f_24 = 99;
							}
						}
						if (!func_95("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_94("TRV1_FAIL", 1);
							}
						}
						func_37(13);
					}
				}
				if ((((((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false)) && !PED::IS_PED_INJURED(Local_269[0 /*65*/])) && !PED::IS_PED_INJURED(Local_269[1 /*65*/])) && !PED::IS_PED_INJURED(Local_269[2 /*65*/])) && !PED::IS_PED_INJURED(Local_269[3 /*65*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					if (((((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_295[0 /*12*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_295[1 /*12*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_269[0 /*65*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_269[1 /*65*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_269[2 /*65*/])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_269[3 /*65*/]))
					{
						if (Local_269[0 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[0 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[0 /*65*/].f_24 = 99;
							}
						}
						if (Local_269[1 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[1 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[1 /*65*/].f_24 = 99;
							}
						}
						if (Local_269[2 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[2 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[2 /*65*/].f_24 = 99;
							}
						}
						if (Local_269[3 /*65*/].f_24 != 99)
						{
							if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
							{
								ENTITY::DETACH_ENTITY(Local_269[3 /*65*/], true, true);
								TASK::TASK_COMBAT_PED(Local_269[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								Local_269[3 /*65*/].f_24 = 99;
							}
						}
						if (!func_95("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_94("TRV1_FAIL", 1);
							}
						}
						func_37(13);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_290.f_0, true))
					{
						if (!func_95("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_94("TRV1_FAIL", 1);
							}
						}
						func_37(13);
					}
				}
				if ((MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(1983.1096f, 4658.885f, 38.242203f, 1935.8726f, 4626.8335f, 56.169044f, 59.5f, joaat("WEAPON_GRENADE"), false) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(1983.1096f, 4658.885f, 38.242203f, 1935.8726f, 4626.8335f, 56.169044f, 59.5f, joaat("WEAPON_SMOKEGRENADE"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(1983.1096f, 4658.885f, 38.242203f, 1935.8726f, 4626.8335f, 56.169044f, 59.5f, joaat("WEAPON_STICKYBOMB"), false))
				{
					if (Local_269[0 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_269[0 /*65*/], true, true);
							TASK::TASK_COMBAT_PED(Local_269[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_269[0 /*65*/].f_24 = 99;
						}
					}
					if (Local_269[1 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_269[1 /*65*/], true, true);
							TASK::TASK_COMBAT_PED(Local_269[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_269[1 /*65*/].f_24 = 99;
						}
					}
					if (Local_269[2 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_269[2 /*65*/], true, true);
							TASK::TASK_COMBAT_PED(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_269[2 /*65*/].f_24 = 99;
						}
					}
					if (Local_269[3 /*65*/].f_24 != 99)
					{
						if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
						{
							ENTITY::DETACH_ENTITY(Local_269[3 /*65*/], true, true);
							TASK::TASK_COMBAT_PED(Local_269[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							Local_269[3 /*65*/].f_24 = 99;
						}
					}
					if (!func_95("TRV1_FAIL"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
						{
							func_94("TRV1_FAIL", 1);
						}
					}
					func_37(13);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_295[0 /*12*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_295[1 /*12*/]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
									{
										if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_295[0 /*12*/], 1) < 10f || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_295[1 /*12*/], 1) < 10f)
										{
											if (Local_269[0 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_269[0 /*65*/], true, true);
													TASK::TASK_COMBAT_PED(Local_269[0 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_269[0 /*65*/].f_24 = 99;
												}
											}
											if (Local_269[1 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_269[1 /*65*/], true, true);
													TASK::TASK_COMBAT_PED(Local_269[1 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_269[1 /*65*/].f_24 = 99;
												}
											}
											if (Local_269[2 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_269[2 /*65*/], true, true);
													TASK::TASK_COMBAT_PED(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_269[2 /*65*/].f_24 = 99;
												}
											}
											if (Local_269[3 /*65*/].f_24 != 99)
											{
												if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
												{
													ENTITY::DETACH_ENTITY(Local_269[3 /*65*/], true, true);
													TASK::TASK_COMBAT_PED(Local_269[3 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 16);
													Local_269[3 /*65*/].f_24 = 99;
												}
											}
											if (!func_95("TRV1_FAIL"))
											{
												if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
												{
													func_94("TRV1_FAIL", 1);
												}
											}
											func_37(13);
										}
									}
								}
								if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_295[0 /*12*/], 1) < 30f)
								{
									if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
									{
										if (!func_95("TRV1_FAIL"))
										{
											if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
											{
												func_94("TRV1_FAIL", 1);
											}
										}
										func_37(13);
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_317 > 0)
			{
				if (bLocal_481 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
					{
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 250f)
							{
								if (!func_95("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_94("TRV1_FAIL", 1);
									}
								}
								func_37(4);
							}
						}
						else if (iLocal_372 == 0 && bLocal_481 == 0)
						{
							if (!func_95("TRV1_FAIL"))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
								{
									func_94("TRV1_FAIL", 1);
								}
							}
							func_37(3);
						}
					}
				}
			}
			if (iLocal_317 < 6)
			{
				if (bLocal_481 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0) && ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
					{
						if (PED::IS_PED_INJURED(Local_281.f_0) && PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (iLocal_372 == 0 && bLocal_481 == 0)
							{
								if (!func_95("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_94("TRV1_FAIL", 1);
									}
								}
								func_37(6);
							}
						}
						else if (iLocal_317 != 6)
						{
							if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), true) > 220f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 200f) || ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), true) > 200f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 220f) && !func_95("WADE LEAVE")))
							{
								if (!func_95("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_94("TRV1_FAIL", 1);
									}
								}
								func_37(5);
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_280.f_0))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 250f)
									{
										if (!func_95("TRV1_FAIL"))
										{
											if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
											{
												func_94("TRV1_FAIL", 1);
											}
										}
										func_37(4);
									}
								}
								else
								{
									if (!func_95("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_94("TRV1_FAIL", 1);
										}
									}
									func_37(3);
								}
								if (!PED::IS_PED_INJURED(Local_281.f_0))
								{
									if (!func_95("WADE LEAVE"))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), true) > 250f)
										{
											if (!func_95("TRV1_FAIL"))
											{
												if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
												{
													func_94("TRV1_FAIL", 1);
												}
											}
											func_37(2);
										}
									}
								}
								else
								{
									if (!func_95("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_94("TRV1_FAIL", 1);
										}
									}
									func_37(1);
								}
							}
						}
						else if (iLocal_465 > 6)
						{
							if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), true) > 220f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 200f) || ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), true) > 200f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 220f) && !func_95("WADE LEAVE")))
							{
								if (!func_95("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_94("TRV1_FAIL", 1);
									}
								}
								func_37(5);
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_280.f_0))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 250f)
									{
										if (!func_95("TRV1_FAIL"))
										{
											if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
											{
												func_94("TRV1_FAIL", 1);
											}
										}
										func_37(4);
									}
								}
								else
								{
									if (!func_95("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_94("TRV1_FAIL", 1);
										}
									}
									func_37(3);
								}
								if (!PED::IS_PED_INJURED(Local_281.f_0))
								{
									if (!func_95("WADE LEAVE"))
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), true) > 250f)
										{
											if (!func_95("TRV1_FAIL"))
											{
												if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
												{
													func_94("TRV1_FAIL", 1);
												}
											}
											func_37(2);
										}
									}
								}
								else
								{
									if (!func_95("TRV1_FAIL"))
									{
										if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
										{
											func_94("TRV1_FAIL", 1);
										}
									}
									func_37(1);
								}
							}
						}
						else
						{
							if (PED::IS_PED_INJURED(Local_280.f_0))
							{
								if (!func_95("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_94("TRV1_FAIL", 1);
									}
								}
								func_37(3);
							}
							if (PED::IS_PED_INJURED(Local_281.f_0))
							{
								if (!func_95("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_94("TRV1_FAIL", 1);
									}
								}
								func_37(1);
							}
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
					{
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 250f)
							{
								if (!func_95("TRV1_FAIL"))
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
									{
										func_94("TRV1_FAIL", 1);
									}
								}
								func_37(4);
							}
						}
						else if (iLocal_372 == 0 && bLocal_481 == 0)
						{
							if (!func_95("TRV1_FAIL"))
							{
								if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
								{
									func_94("TRV1_FAIL", 1);
								}
							}
							func_37(3);
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), true) > 250f)
					{
						if (!func_95("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_94("TRV1_FAIL", 1);
							}
						}
						func_37(4);
					}
				}
				else if (iLocal_372 == 0 && bLocal_481 == 0)
				{
					if (!func_95("TRV1_FAIL"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
						{
							func_94("TRV1_FAIL", 1);
						}
					}
					func_37(3);
				}
			}
			if (iLocal_317 == 3)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_290.f_0, false), true) > 260f)
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(Local_290.f_0, -57.911987f, 3656.8928f, 65.65813f, 146.75f, 65.25f, 27.25f, false, true, 0))
						{
							if (HUD::DOES_BLIP_EXIST(Local_290.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_290.f_1));
							}
							if (iLocal_238 == 0)
							{
								__LIB_0__::func_429();
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CFAIL", 7, 0, 0, 0))
								{
									iLocal_238 = 1;
									iLocal_456 = MISC::GET_GAME_TIMER();
								}
							}
							else if (__LIB_0__::func_611(&iLocal_456, 2000))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
								func_37(11);
							}
						}
					}
				}
				if ((PED::IS_PED_INJURED(Local_269[0 /*65*/]) && PED::IS_PED_INJURED(Local_269[2 /*65*/])) && PED::IS_PED_INJURED(Local_269[3 /*65*/]))
				{
					if (iLocal_238 == 0)
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CFAIL", 7, 0, 0, 0))
						{
							iLocal_238 = 1;
							iLocal_456 = MISC::GET_GAME_TIMER();
						}
					}
					else if (__LIB_0__::func_611(&iLocal_456, 2000))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
						func_37(9);
					}
				}
				if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
				{
					if (iLocal_238 == 0)
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CFAIL", 7, 0, 0, 0))
						{
							iLocal_238 = 1;
							iLocal_456 = MISC::GET_GAME_TIMER();
						}
					}
					else if (__LIB_0__::func_611(&iLocal_456, 2000))
					{
						AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
						func_37(12);
					}
				}
			}
			if (iLocal_317 == 6)
			{
				if (iLocal_465 == 10)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4.003344f, 2990.984f, 61.920204f, -63.75819f, 3131.9324f, 17.698046f, 39.25f, false, true, 0))
					{
						if (!func_95("TRV1_FAIL"))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
							{
								func_94("TRV1_FAIL", 1);
							}
						}
						func_37(17);
					}
				}
			}
			if (iLocal_317 == 6)
			{
				if (iLocal_465 == 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_468))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -17.117577f, 3015.4512f, 48.26401f, -55.769604f, 3129.688f, 23.96065f, 30.5f, false, true, 0))
							{
								func_37(17);
							}
						}
					}
				}
			}
		}
	}
}

void func_37(int iParam0)//Position - 0x2ED0
{
	char* sVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
	__LIB_16__::func_323(PLAYER::PLAYER_PED_ID(), 2);
	switch (iParam0)
	{
		case 0:
			sVar0 = "M_FAIL";
			break;
		case 8:
			sVar0 = "TRV_FAIL4";
			break;
		case 7:
			sVar0 = "TRV_FAIL4";
			break;
		case 3:
			sVar0 = "TRV_FAIL2";
			break;
		case 4:
			sVar0 = "TRV_FAIL3";
			break;
		case 1:
			sVar0 = "TRV_FAIL10";
			break;
		case 2:
			sVar0 = "TRV_FAIL11";
			break;
		case 5:
			sVar0 = "TRV_BOTH_LEFT";
			break;
		case 6:
			sVar0 = "TRV_BOTH_LEFT";
			break;
		case 10:
			sVar0 = "TRV_FAIL6";
			break;
		case 12:
			sVar0 = "TRV_FAIL7";
			break;
		case 9:
			sVar0 = "TRV_FAIL9";
			break;
		case 14:
			sVar0 = "TRV_TPFAIL";
			break;
		case 13:
			sVar0 = "TRV_FAIL12";
			break;
		case 11:
			sVar0 = "TRV_FAIL13";
			break;
		case 15:
			sVar0 = "TRV_ORTL";
			break;
		case 16:
			sVar0 = "TRV_FAIL14";
			break;
		case 17:
			sVar0 = "TRV_ORFF";
			break;
		default:
			__LIB_0__::func_229("M_FAIL", 7500, 0);
			break;
	}
	if (!func_95("TRV1_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
		{
			func_94("TRV1_FAIL", 1);
		}
	}
	func_82(sVar0);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		fVar3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar1) == __LIB_13__::func_741(2, 0))
					{
						__LIB_14__::func_555(Var2, fVar3);
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar1, __LIB_13__::func_741(2, 0)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar1, -1, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, -1);
					}
				}
			}
		}
	}
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	func_38(2, 0);
	func_967(0, 0);
	bLocal_481 = true;
}

void func_38(int iParam0, bool bParam1)//Position - 0x30EE
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), 0);
	}
	MISC::SET_SAVE_HOUSE(Global_95479[iParam0 /*10*/].f_8, bParam1, true);
	func_69(iParam0);
	__LIB_15__::func_220(iParam0, 0);
	__LIB_14__::func_624(iParam0);
	__LIB_28__::func_227(iParam0);
}

void func_69(int iParam0)//Position - 0x7859
{
	bool bVar0;
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_95479[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (BitTest(Global_113386.f_7229[iParam0], 0))
	{
		if (Global_95479[iParam0 /*10*/].f_9 != __LIB_15__::func_942())
		{
			bVar0 = true;
		}
		else if (!func_74(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (__LIB_0__::func_426(6))
		{
			bVar0 = false;
		}
	}
	if (__LIB_0__::func_540(14))
	{
		bVar0 = false;
	}
	__LIB_14__::func_622(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_74(int iParam0)//Position - 0x7BF7
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (Global_100493.f_373 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_74(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_14__::func_623(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_100493.f_373 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_82(char* sParam0)//Position - 0x8071
{
	__LIB_0__::func_381(sParam0);
	func_83(0);
}

void func_83(int iParam0)//Position - 0x8084
{
	int iVar0;
	if (Global_113386.f_9085 || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_84(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_84(int iParam0)//Position - 0x80C9
{
	int iVar0;
	int iVar1;
	__LIB_16__::func_38();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_91193[iParam0 /*5*/];
	iVar1 = Global_78588.f_109[iVar0 /*4*/];
	__LIB_0__::func_379(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_85(&(Global_113386.f_2363.f_539), iVar1);
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

void func_85(var uParam0, int iParam1)//Position - 0x81D9
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
			if (!func_87(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_87(int iParam0, var uParam1, float fParam2)//Position - 0x83AD
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
			return func_87(8, uParam1, fParam2);
			break;
		case 10:
			return func_87(8, uParam1, fParam2);
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

void func_94(char* sParam0, bool bParam1)//Position - 0x8EF9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = (iLocal_227 - 1);
	if (bParam1)
	{
		bVar2 = false;
		while (iVar1 > -1 && !bVar2)
		{
			if (iLocal_227[iVar1] == 0)
			{
				iLocal_227[iVar1] = iVar0;
				bVar2 = true;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	else
	{
		while (iVar1 > -1)
		{
			if (iLocal_227[iVar1] == iVar0)
			{
				iLocal_227[iVar1] = 0;
			}
			iVar1 = (iVar1 - 1);
		}
	}
}

int func_95(char* sParam0)//Position - 0x8F6D
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = (iLocal_227 - 1);
	while (iVar1 > -1)
	{
		if (iLocal_227[iVar1] == iVar0)
		{
			return 1;
		}
		iVar1 = (iVar1 - 1);
	}
	return 0;
}

int func_96(int iParam0)//Position - 0x8FA4
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("bodhi2")))
			{
				if (iLocal_532 == 0)
				{
					Local_533 = { __LIB_0__::func_79(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 1f) - ENTITY::GET_ENTITY_COORDS(iParam0, false)) };
					if ((MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_533.f_0, Local_533.f_2, 0f, 1f)) > 80f || MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_533.f_1, Local_533.f_2, 0f, 1f)) > 80f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
					{
						iLocal_531 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					Local_533 = { __LIB_0__::func_79(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, 1f) - ENTITY::GET_ENTITY_COORDS(iParam0, false)) };
					if ((MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_533.f_0, Local_533.f_2, 0f, 1f)) > 80f || MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Local_533.f_1, Local_533.f_2, 0f, 1f)) > 80f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
					{
						if (__LIB_0__::func_611(&iLocal_531, 1000))
						{
							return 1;
						}
					}
					else
					{
						iLocal_532 = 0;
					}
				}
			}
			if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, 40000))
			{
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

void func_99()//Position - 0x91AC
{
	__LIB_0__::func_526(0, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
	func_967(0, 1);
}

int func_102()//Position - 0x92DE
{
	if (iLocal_379 == 0)
	{
		func_604();
		func_552(6, "Drop Off Ron", 1, 0, 0, 1);
		iLocal_379 = 1;
	}
	if (!iLocal_370)
	{
		func_551();
		func_547();
		HUD::SET_RADAR_ZOOM(0);
		func_546();
		iLocal_465 = 0;
		iLocal_370 = 1;
		bLocal_212 = true;
		if (!iLocal_398)
		{
			func_545();
			iLocal_398 = 1;
		}
		CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
	}
	else
	{
		switch (iLocal_465)
		{
			case 0:
				iLocal_207 = 0;
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
				__LIB_0__::func_325();
				iLocal_465++;
				break;
			case 1:
				func_538();
				iLocal_332 = 0;
				iLocal_465++;
				break;
			case 2:
				if (!__LIB_0__::func_2(0))
				{
					func_122();
				}
				HUD::DISPLAY_HUD(true);
				iLocal_465++;
				break;
			case 3:
				break;
		}
		if (iLocal_465 >= 3)
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREAS();
			func_114();
			__LIB_16__::func_884();
			__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
			func_103(1, 0, 2000);
			iLocal_370 = 0;
			return 1;
		}
	}
	return 0;
}

void func_103(bool bParam0, bool bParam1, int iParam2)//Position - 0x93E2
{
	if (iLocal_541)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (CAM::DOES_CAM_EXIST(iLocal_538))
			{
				CAM::SET_CAM_ACTIVE(iLocal_538, false);
				CAM::DESTROY_CAM(iLocal_538, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_539))
			{
				CAM::SET_CAM_ACTIVE(iLocal_539, false);
				CAM::DESTROY_CAM(iLocal_539, false);
			}
			if (CAM::DOES_CAM_EXIST(iLocal_540))
			{
				CAM::SET_CAM_ACTIVE(iLocal_540, false);
				CAM::DESTROY_CAM(iLocal_540, false);
			}
			CAM::RENDER_SCRIPT_CAMS(false, bParam1, iParam2, true, false, 0);
			CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_541 = 0;
		}
	}
}

void func_114()//Position - 0x973D
{
	__LIB_12__::func_768(iLocal_437);
	__LIB_12__::func_768(iLocal_436);
	__LIB_12__::func_768(iLocal_449);
	__LIB_17__::func_455(fLocal_460);
	__LIB_12__::func_768(iLocal_343);
	iLocal_465 = 0;
	iLocal_439 = 0;
	iLocal_440 = 0;
	iLocal_441 = 0;
	iLocal_448 = 0;
	iLocal_438 = 0;
	iLocal_436 = 0;
	iLocal_437 = 0;
	iLocal_454 = 0;
	iLocal_455 = 0;
	iLocal_458 = 0;
	iLocal_458 = 0;
	iLocal_379 = 0;
	iLocal_449 = 0;
	__LIB_13__::func_815(&Local_297, 1, 0);
	__LIB_16__::func_19(&Local_297, 0);
}

void func_122()//Position - 0x9A35
{
	SYSTEM::SETTIMERA(0);
	iLocal_376 = 1;
	func_128(16, 0f, 0f, 0f, 0, 0);
	STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
	if (CAM::DOES_CAM_EXIST(iLocal_474))
	{
	}
	while (iLocal_376)
	{
		SYSTEM::WAIT(0);
		if (iLocal_332 > 2)
		{
			if (__LIB_0__::func_645(1000))
			{
				SYSTEM::SETTIMERB(7001);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1972.8237f, 3816.688f, 32.4287f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 208.2972f);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 208.2972f, false, false);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), true, 1, false);
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-1f, 1f);
					CAM::SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(0f);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_WIDESCREEN_BORDERS(false, 0);
				HUD::CLEAR_HELP(true);
				HUD::CLEAR_PRINTS();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, false, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_285.f_0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					ENTITY::SET_ENTITY_LOD_DIST(Local_285.f_0, -1);
				}
				HUD::DISPLAY_HUD(true);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
				iLocal_332 = 6;
				iLocal_376 = 0;
			}
			else
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			}
		}
		if (func_95("T1Safehouse"))
		{
			if (!func_95("Leave vehicle"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
					{
						VEHICLE::SET_VEHICLE_LIGHTS(Local_285.f_0, 1);
						TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, 0);
						func_94("Leave vehicle", 1);
					}
				}
			}
		}
		switch (iLocal_332)
		{
			case 0:
				__LIB_16__::func_915(500);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				CAM::SET_WIDESCREEN_BORDERS(true, 0);
				__LIB_0__::func_151("TRV_SAFEH_1", -1);
				SYSTEM::SETTIMERB(0);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1bathroom");
				if (!func_95("PIN INTERIOR END"))
				{
					if (func_128(16, 0f, 0f, 0f, 0, 0))
					{
						func_94("PIN INTERIOR END", 1);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!__LIB_1__::func_606(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1);
					}
					VEHICLE::SET_VEHICLE_LIGHTS(Local_285.f_0, 1);
				}
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "T1Safehouse");
				AUDIO::LOAD_STREAM("TREVOR_SAFE_HOUSE_INTRO_MASTER", 0);
				iLocal_332++;
				break;
			case 1:
				if (!func_95("T1Safehouse"))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "T1Safehouse"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
								{
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_285.f_0, 1, "T1Safehouse", true);
									VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_285.f_0, 3000f);
									VEHICLE::SET_PLAYBACK_SPEED(Local_285.f_0, 0.7f);
									VEHICLE::SET_VEHICLE_LIGHTS(Local_285.f_0, 2);
									func_94("T1Safehouse", 1);
								}
							}
						}
					}
				}
				if (AUDIO::LOAD_STREAM("TREVOR_SAFE_HOUSE_INTRO_MASTER", 0) || CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_474) > 0.45f)
				{
					if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_474) > 0.5f)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1973.7573f, 3816.8745f, 33.8607f, 8f, 2);
						iLocal_332++;
					}
				}
				break;
			case 2:
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_474) == 1f)
				{
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1969.8226f, 3818.315f, 32.4985f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 152.1604f);
					CAM::PLAY_CAM_ANIM(iLocal_474, "trv_trailer_tut_int_cam", "misstrevor1", 1971.579f, 3819.524f, 32.956f, 0f, 0f, 121.25f, false, 2);
					CAM::SET_CAM_ACTIVE(iLocal_474, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					CAM::SET_WIDESCREEN_BORDERS(true, 0);
					__LIB_0__::func_151("TRV_SAFEH_2", -1);
					SYSTEM::SETTIMERB(0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					AUDIO::PLAY_STREAM_FRONTEND();
					iLocal_332++;
				}
				break;
			case 3:
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_474) > 0.5f)
				{
					__LIB_0__::func_151("TRV_SAFEH_3", -1);
					iLocal_332++;
				}
				break;
			case 4:
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_474) >= 0.99f)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_266))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							iLocal_266 = PED::CREATE_SYNCHRONIZED_SCENE(Local_267, Local_268, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_266, "misstrevor1bathroom", "trevor_peeing", 1000f, -8f, 0, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_266, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, true);
						}
					}
				}
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_474) == 1f)
				{
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_474, iLocal_266, "trevor_peeing_cam", "misstrevor1bathroom");
					CAM::SET_CAM_ACTIVE(iLocal_474, true);
					iLocal_332++;
				}
				break;
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_266))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_266) > 0.99f)
					{
						if (CAM::DOES_CAM_EXIST(iLocal_474))
						{
							CAM::STOP_CAM_POINTING(iLocal_474);
							CAM::SET_CAM_ACTIVE(iLocal_474, false);
							CAM::DESTROY_CAM(iLocal_474, false);
							CAM::RENDER_SCRIPT_CAMS(false, true, 1500, true, false, 0);
						}
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -8f, true);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						STREAMING::NEW_LOAD_SCENE_STOP();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						CAM::SET_WIDESCREEN_BORDERS(false, 0);
						HUD::CLEAR_HELP(true);
						HUD::CLEAR_PRINTS();
						iLocal_332++;
					}
				}
				break;
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, false, true, false);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_285.f_0, 0);
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					ENTITY::SET_ENTITY_LOD_DIST(Local_285.f_0, -1);
				}
				HUD::DISPLAY_HUD(true);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
				iLocal_332 = 0;
				__LIB_0__::func_963(0, 0, 1, 0);
				CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(false);
				iLocal_376 = 0;
				break;
		}
	}
}

int func_128(int iParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xA0A0
{
	if (!__LIB_0__::func_86(Param1))
	{
	}
	if (fParam2 != 0f)
	{
	}
	switch (iParam0)
	{
		case 4:
			STREAMING::REQUEST_MODEL(joaat("bodhi2"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("bodhi2")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
					func_471(&Local_285, 2, Local_285.f_2, Local_285.f_5, 1, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
						VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(Local_285.f_0, false);
					}
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("bodhi2"), 3);
					if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("bodhi2")))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(Local_285.f_0, false);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_285.f_0, false, 0);
							VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_285.f_0, 0, false);
							VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Local_285.f_0, 1, false);
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_285.f_0, true);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_285.f_0, true);
							__LIB_0__::func_505(Local_285.f_0, -1);
							return 1;
						}
					}
				}
			}
			break;
		case 19:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_482[2]))
			{
				func_138(&(uLocal_482[2]), 2, Param1, fParam2, 1, 0, 0);
			}
			else if (!PED::IS_PED_INJURED(uLocal_482[2]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_482[2], false);
				__LIB_0__::func_377(uLocal_482[2], 495);
				return 1;
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
			{
				if (__LIB_0__::func_648(&Local_280, 20, Local_280.f_2, Local_280.f_5, 1))
				{
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_280.f_0, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_280.f_0, joaat("PLAYER"));
						__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_280.f_0, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_280.f_0, true);
						func_134();
						return 1;
					}
				}
			}
			else
			{
				if (Local_526[3 /*10*/] != Local_280.f_0)
				{
					func_133(Local_280, 0, 0);
					__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
				}
				return 1;
			}
			if (bParam3)
			{
				STREAMING::REQUEST_MODEL(__LIB_0__::func_493(20));
			}
			break;
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
			{
				if (__LIB_0__::func_648(&Local_281, 24, Local_281.f_2, Local_281.f_5, 1))
				{
					if (!PED::IS_PED_INJURED(Local_281.f_0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_281.f_0, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_281.f_0, joaat("PLAYER"));
						__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_281.f_0, false);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_281.f_0, true);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_281.f_0, 1);
						ENTITY::SET_ENTITY_LOD_DIST(Local_281.f_0, 50);
						func_133(Local_281, 1, 0);
						return 1;
					}
				}
			}
			else
			{
				if (Local_526[4 /*10*/] != Local_281.f_0)
				{
					func_133(Local_281, 1, 0);
					__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_281.f_0, 1);
				}
				return 1;
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_467))
			{
				if (__LIB_0__::func_648(&iLocal_467, 66, 2017.58f, 3827.92f, 31.78f, -86.69f, 1))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_467, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_467, joaat("PLAYER"));
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_467))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_467, joaat("PLAYER"));
				}
				return 1;
			}
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_466))
			{
				STREAMING::REQUEST_MODEL(joaat("ig_JohnnyKlebitz"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("ig_JohnnyKlebitz")))
				{
					iLocal_466 = PED::CREATE_PED(26, joaat("ig_JohnnyKlebitz"), 2017.58f, 3827.92f, 31.78f, -86.69f, true, true);
					func_131(iLocal_466, 494);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_466, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_466, true);
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_466))
				{
				}
				return 1;
			}
			break;
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_269[2 /*65*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("IG_Terry"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("IG_Terry")))
				{
					Local_269[2 /*65*/] = PED::CREATE_PED(26, joaat("IG_Terry"), Local_269[2 /*65*/].f_2, Local_269[2 /*65*/].f_5, true, true);
					func_131(Local_269[2 /*65*/], 494);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_269[2 /*65*/], false);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_269[3 /*65*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("IG_Clay"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("IG_Clay")))
				{
					Local_269[3 /*65*/] = PED::CREATE_PED(26, joaat("IG_Clay"), Local_269[3 /*65*/].f_2, Local_269[3 /*65*/].f_5, true, true);
					func_131(Local_269[3 /*65*/], 494);
					PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_269[3 /*65*/], false);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case 7:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_295[0 /*12*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
				{
					Local_295[0 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_295[0 /*12*/].f_6, Local_295[0 /*12*/].f_2, Local_295[0 /*12*/].f_5, true, true, false);
					VEHICLE::SET_VEHICLE_COLOURS(Local_295[0 /*12*/], 0, 0);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_295[0 /*12*/], 15f);
					AUDIO::SET_HORN_ENABLED(Local_295[0 /*12*/], false);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case 8:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_295[1 /*12*/]))
			{
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
				{
					Local_295[1 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_295[1 /*12*/].f_6, Local_295[1 /*12*/].f_2, Local_295[1 /*12*/].f_5, true, true, false);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_295[1 /*12*/], 7);
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_295[1 /*12*/], 15f);
					AUDIO::SET_HORN_ENABLED(Local_295[1 /*12*/], false);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case 11:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_283.f_0))
			{
				if (__LIB_0__::func_648(&Local_283, 38, Local_283.f_2, Local_283.f_5, 1))
				{
					__LIB_0__::func_221(&Local_526, 7);
					__LIB_0__::func_222(&Local_526, 7, Local_283.f_0, "Ortega", 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(Local_283.f_0, true);
					PED::SET_PED_CONFIG_FLAG(Local_283.f_0, 208, true);
					func_131(Local_283.f_0, 494);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_283.f_0, true);
					PED::SET_PED_COMPONENT_VARIATION(Local_283.f_0, 8, 1, 0, 0);
					return 1;
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_283.f_0))
				{
					PED::SET_PED_CONFIG_FLAG(Local_283.f_0, 208, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_283.f_0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_283.f_0, true);
					__LIB_0__::func_222(&Local_526, 7, Local_283.f_0, "Ortega", 0, 1);
				}
				return 1;
			}
			break;
		case 13:
			STREAMING::REQUEST_ANIM_DICT("misstrevor1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
			{
				return 1;
			}
			break;
		case 12:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_468))
			{
				STREAMING::REQUEST_MODEL(joaat("proptrailer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")))
				{
					iLocal_468 = VEHICLE::CREATE_VEHICLE(joaat("proptrailer"), -51.8943f, 3110.966f, 23.2366f, 44.8533f, true, true, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_468, -51.8943f, 3110.966f, 23.2366f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_468, 44.8533f);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_468, true, false);
					func_129(1);
					return 1;
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_468, -51.8943f, 3110.966f, 23.2366f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_468, 44.8533f);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_468, true, false);
				}
				return 1;
			}
			break;
		case 15:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_432))
			{
				STREAMING::REQUEST_MODEL(joaat("prop_watercrate_01"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("prop_watercrate_01")))
				{
					iLocal_432 = OBJECT::CREATE_OBJECT(joaat("prop_watercrate_01"), 37.52f, 3731.39f, 38.62f, true, true, false);
					ENTITY::SET_ENTITY_COORDS(iLocal_432, 37.52f, 3731.39f, 38.62f, true, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_432, -0.37f, -5.54f, -43.64f, 2, true);
					ENTITY::SET_ENTITY_VISIBLE(iLocal_432, true, false);
					return 1;
				}
			}
			else
			{
				return 1;
			}
			break;
		case 16:
			if (iLocal_232 == 0)
			{
				iLocal_232 = INTERIOR::GET_INTERIOR_AT_COORDS(1974.4364f, 3819.332f, 32.4363f);
				iLocal_391 = 0;
			}
			if (INTERIOR::IS_INTERIOR_READY(iLocal_232))
			{
				if (iLocal_391 == 0)
				{
					iLocal_391 = 1;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_232);
			}
			break;
		case 17:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_412))
			{
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("hexer"), 28.8999f, 3616.106f, 38.9847f, true))
					{
						iLocal_412 = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 28.8999f, 3616.106f, 38.9847f, 92.04f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_412, 28.8999f, 3616.106f, 38.9847f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_412, 92.04f);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_412, true, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_412, false);
						func_94("WADE BIKE RIGHT", 1);
						return 1;
					}
					else
					{
						iLocal_412 = VEHICLE::CREATE_VEHICLE(joaat("hexer"), 104.0991f, 3592.698f, 38.7392f, 103.0751f, true, true, false);
						ENTITY::SET_ENTITY_COORDS(iLocal_412, 104.0991f, 3592.698f, 38.7392f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iLocal_412, 103.0751f);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_412, true, false);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_412, false);
						func_94("WADE BIKE LEFT", 1);
						return 1;
					}
				}
			}
			break;
		case 18:
			if (!OBJECT::DOES_PICKUP_EXIST(iLocal_264))
			{
				iLocal_264 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_PETROLCAN"), -51.76f, 3088.96f, 26.98f, -101.64f, -0.08f, -22.76f, 0, -1, 2, true, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_129(bool bParam0)//Position - 0xAA1C
{
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_468, false))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 6, false);
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 1, true);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(iLocal_468, false))
	{
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 1, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 2, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 3, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 4, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 5, false);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_468, 6, true);
	}
}

void func_131(int iParam0, int iParam1)//Position - 0xAAA9
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_75402[iVar0 /*2*/] == 0)
		{
			Global_75402[iVar0 /*2*/] = iParam0;
			Global_75402[iVar0 /*2*/].f_1 = iParam1;
			if (iVar0 == Global_75435)
			{
				Global_75435++;
			}
			return;
		}
		iVar0++;
	}
}

void func_133(struct<8> Param0, var uParam1, var uParam2, int iParam3, bool bParam4)//Position - 0xAB25
{
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_0))
	{
		if (!PED::IS_PED_INJURED(Param0.f_0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Param0.f_0, Param0.f_6, -1, false, true);
			WEAPON::GIVE_WEAPON_TO_PED(Param0.f_0, Param0.f_7, 2000, false, true);
			PED::SET_PED_CAN_BE_TARGETTED(Param0.f_0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Param0.f_0, iLocal_475);
			PED::SET_PED_CAN_BE_DRAGGED_OUT(Param0.f_0, false);
			if (bParam4)
			{
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Param0.f_0, iParam3);
			}
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Param0.f_0, false);
			PED::SET_PED_AS_ENEMY(Param0.f_0, false);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Param0.f_0, true, false);
			ENTITY::SET_ENTITY_HEALTH(Param0.f_0, 200, 0);
			PED::SET_PED_CONFIG_FLAG(Param0.f_0, 32, false);
		}
	}
}

void func_134()//Position - 0xABA8
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_280.f_0, 11, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(Local_280.f_0, 0, 0, 0, false);
			PED::SET_PED_PROP_INDEX(Local_280.f_0, 1, 0, 0, false);
		}
	}
}

int func_138(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xADD2
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam3, false, false);
			__LIB_0__::func_550(*iParam0, bParam1, bParam5);
			PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
			func_462(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_140(*iParam0, bParam6);
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

int func_140(int iParam0, bool bParam1)//Position - 0xAEEA
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_233(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_233(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085.f_99.f_58[120] && !Global_113386.f_9085.f_99.f_58[122])
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085.f_99.f_58[123])
			{
				Global_113386.f_9085.f_99.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_211(iParam0, 3, 169))
					{
						func_425(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_211(iParam0, 12, 6))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 11))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 12, 10))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 12, 50))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 14, 59))
			{
				func_425(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_211(iParam0, 8, 22))
			{
				func_425(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_211(iParam0, 12, 14))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_211(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 4))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 12, 3))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 14, 82))
			{
				func_425(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_211(iParam0, 8, 76))
			{
				func_425(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_211(iParam0, 12, 1))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_211(iParam0, 12, 12))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 12, 15))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_211(iParam0, 3, 71))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_949(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_211(iParam0, 12, 7))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 12, 6))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_211(iParam0, 14, 88))
			{
				func_425(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_211(iParam0, 8, 17))
			{
				func_425(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_211(iParam0, 12, 11))
			{
				func_425(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_211(int iParam0, int iParam1, int iParam2)//Position - 0x225F9
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
				if (!func_211(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_211(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_211(iParam0, 14, iVar4))
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
			if (!func_211(iParam0, 14, uVar8[iVar7]))
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

void func_233(int iParam0, int iParam1)//Position - 0x26C93
{
	bool bVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		bVar0 = __LIB_0__::func_650(iParam0);
		if (__LIB_0__::func_374(bVar0))
		{
			if (bVar0 == 2)
			{
				iVar1 = func_424(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_244(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			__LIB_40__::func_816(iParam0, &Var2, 1, -1);
			Global_100166[bVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				__LIB_42__::func_594();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("lester1")) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!__LIB_0__::func_39(0) && !__LIB_0__::func_39(1)) && !__LIB_0__::func_39(2)) && !__LIB_0__::func_39(3)) && !__LIB_0__::func_39(4)) && !__LIB_0__::func_39(9)) && !__LIB_0__::func_39(10)))
				{
					Global_113386.f_2363.f_539[bVar0 /*65*/] = { Var2 };
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_113386.f_2363.f_539.f_204[iVar3 /*4*/][bVar0] = __LIB_0__::func_350(iParam0, __LIB_0__::func_33(iVar3));
						iVar3++;
					}
					if (bVar0 == 0)
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

void func_244(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x27C71
{
	bool bVar0;
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
		bVar0 = __LIB_0__::func_650(iParam0);
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
		if (__LIB_0__::func_374(bVar0))
		{
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_59 = uParam1->f_59;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_60 = uParam1->f_60;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_422(iParam0, iVar1, &iVar2, 0))
			{
				func_425(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[bVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_420(iParam0, iVar1, &iVar2))
			{
				func_425(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_418(iParam0);
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
			func_250(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_250(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_250(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_250(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2840E
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
			func_376(iVar5, iParam1, iParam2, 1);
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
						func_376(iVar5, 10, 0, 1);
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
									func_376(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_250(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_376(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_373(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_250(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_367(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_376(iVar5, 14, uVar18[iVar1], 1);
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
							func_250(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_376(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_250(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_358(iParam0);
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
						func_250(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_250(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_357(iVar5, iVar24, iVar23, iVar25);
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
							func_250(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_250(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_250(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_250(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_250(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_250(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_250(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_367(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_357(iVar5, func_373(iParam0, 8, -1), iParam2, func_373(iParam0, 4, -1));
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
				func_293(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_357(iVar5, iParam2, iVar44, iVar45);
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
			func_367(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_357(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_250(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_250(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_357(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_357(iVar5, iVar58, iVar57, iParam2);
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
						func_250(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_357(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_250(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_270(iParam0, 9, iVar63))
						{
							func_250(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_250(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_250(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_250(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_373(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_373(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_250(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_250(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_250(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_250(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_250(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_250(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_250(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_250(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_250(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_250(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_358(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_250(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_250(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_251(iParam0, &uVar4))
		{
			func_250(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_250(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_250(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_250(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_373(iParam0, 3, -1), iVar10);
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
				func_250(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_251(int iParam0, var uParam1)//Position - 0x2A2B8
{
	int iVar0;
	int iVar1;
	*uParam1 = func_373(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_270(iParam0, iVar1, iVar0))
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

int func_270(int iParam0, int iParam1, int iParam2)//Position - 0x2E574
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
				if (!func_270(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_270(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_270(iParam0, 14, iVar6))
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
			if (!func_270(iParam0, 14, uVar11[iVar10]))
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
						return func_270(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_270(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_293(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3530A
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
	func_294(iParam0, bParam3, 0, -1);
}

void func_294(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x35357
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
		bVar3 = func_337(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_328(iParam0, iParam3);
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

int func_328(int iParam0, int iParam1)//Position - 0x44478
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
				iVar3 = func_373(iParam0, 11, -1);
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
				iVar5 = func_373(iParam0, 11, -1);
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

int func_337(int iParam0, bool bParam1)//Position - 0x448D6
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_373(iParam0, 11, -1), 0);
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
						iVar3 = func_373(iParam0, 11, -1);
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
						iVar5 = func_373(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_373(iParam0, 11, -1), 0);
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
						iVar8 = func_373(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_373(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_373(iParam0, 11, -1), 0);
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
						iVar12 = func_373(iParam0, 8, -1);
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

int func_357(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4D763
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
					iVar0 = func_357(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_357(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_358(int iParam0)//Position - 0x4EA9E
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
		if (!func_363(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_363(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_363(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4F468
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_373(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_367(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x51E52
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_418(iParam0))
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

int func_373(int iParam0, int iParam1, int iParam2)//Position - 0x52101
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
				if (func_270(iParam0, iParam1, iVar0))
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
				if (func_270(iParam0, iParam1, iVar1))
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

void func_376(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x52280
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
							func_376(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_376(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_376(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_376(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_376(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_376(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_376(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_376(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_376(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_376(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_418(int iParam0)//Position - 0x6B0E8
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
				iVar1 = func_373(iParam0, 11, -1);
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
				iVar3 = func_373(iParam0, 11, -1);
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

int func_420(int iParam0, int iParam1, int iParam2)//Position - 0x6B442
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_211(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_422(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6B509
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_211(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_424(int iParam0, int iParam1, int iParam2)//Position - 0x6B7C9
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
				if (func_211(iParam0, iParam1, iVar0))
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
				if (func_211(iParam0, iParam1, iVar1))
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

int func_425(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x6B86A
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
										func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_424(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_422(iParam0, iVar10, &iVar4, 1))
							{
								func_425(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_425(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_425(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_425(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_425(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_425(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_425(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_425(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_422(iParam0, iVar10, &iVar4, 0))
		{
			func_425(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_420(iParam0, iVar10, &iVar4))
		{
			func_425(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

void func_462(int iParam0)//Position - 0x6FF4E
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(bVar0))
	{
		if (!Global_100362[bVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[bVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[bVar0])
				{
					__LIB_0__::func_414(bVar0);
					Global_113386.f_2363.f_539.f_2391[bVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_244(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[bVar0])
		{
			bVar2 = false;
			if (bVar0 == 0)
			{
				if (!__LIB_0__::func_422(49))
				{
					iVar1 = func_424(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_463(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::func_422(44))
				{
					iVar1 = func_424(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_424(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_463(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_463(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (bVar0 == 2)
			{
				iVar1 = func_424(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(bVar0);
				func_244(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[bVar0] = 1;
	}
}

void func_463(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x701AD
{
	__LIB_15__::func_948(iParam0, iParam1, iParam2, bParam3);
	func_466(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_950(iParam0, iParam1, iParam2, 0);
	}
}

int func_466(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x70368
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
								func_466(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_948(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_466(iParam0, 14, uVar4[iVar2], 1, 1);
									__LIB_15__::func_948(iParam0, 14, uVar4[iVar2], 1);
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
								func_466(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_466(iParam0, 14, iVar5, 1, 0);
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
								func_466(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_466(iParam0, 14, 17, 1, 0);
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

int func_471(int iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, int iParam5)//Position - 0x7095F
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	if (__LIB_0__::func_374(bParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		__LIB_0__::func_378(bParam1, &Var2, iParam5);
		if (Var2.f_0 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2.f_0)
			{
			}
			return 1;
		}
		if ((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131])
		{
			Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] = 0;
		}
		if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[0 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__::func_397(*iParam0, bParam1);
				return 1;
			}
		}
		else if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/] == Var2.f_0)
		{
			STREAMING::REQUEST_MODEL(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/], Param2, fParam3, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_7, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_27));
					if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 >= 0 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_84, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_85, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_93, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_94, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_89);
				}
				if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113386.f_2363.f_539.f_2407[1 /*295*/][bParam1 /*98*/]);
				}
				__LIB_0__::func_397(*iParam0, bParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2.f_0);
			if (STREAMING::HAS_MODEL_LOADED(Var2.f_0))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2.f_0, Param2, fParam3, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*iParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (__LIB_0__::func_312(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 2, BitTest(Var2.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 3, BitTest(Var2.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 0, BitTest(Var2.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*iParam0, 1, BitTest(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				__LIB_0__::func_670(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (bParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_113386.f_9085.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (bParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						__LIB_0__::func_647(iParam0);
					}
				}
				else if (((bParam1 == 0 && !Global_113386.f_2363.f_539.f_4316) && Global_113386.f_9085.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_113386.f_2363.f_539.f_4316 = 1;
					func_472(bParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2.f_0);
				}
				if (bVar5)
				{
					__LIB_0__::func_397(*iParam0, bParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_472(bool bParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x7177F
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	if ((__LIB_0__::func_374(bParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, false))
	{
		if (iParam2 > Global_113386.f_2363.f_539.f_2407)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_508(*iParam1, bParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, false))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_24 = 0;
		}
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_5), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_7), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_84), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_85), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_86));
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_93), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_94), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_95));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 2))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 28);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 3))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 29);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 0))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 30);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*iParam1, 1))
		{
			MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 31);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_92), 31);
		}
		Global_113386.f_2363.f_539.f_4317[bParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && __LIB_13__::func_729(*iParam1, 0, &uVar0))
		{
			__LIB_0__::func_107(iParam1, &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31), &(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_113386.f_20118[bParam0 /*43*/].f_40 = 1;
				Global_113386.f_20118[bParam0 /*43*/] = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/];
				Global_113386.f_20118[bParam0 /*43*/].f_3 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_87;
				Global_113386.f_20118[bParam0 /*43*/].f_4 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_84;
				Global_113386.f_20118[bParam0 /*43*/].f_5 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_85;
				Global_113386.f_20118[bParam0 /*43*/].f_6 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_86;
				Global_113386.f_20118[bParam0 /*43*/].f_10 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_90;
				Global_113386.f_20118[bParam0 /*43*/].f_16 = !Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_88;
				Global_113386.f_20118[bParam0 /*43*/].f_19 = { Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_27 };
				Global_113386.f_20118[bParam0 /*43*/].f_23 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_26;
				Global_113386.f_20118[bParam0 /*43*/].f_7 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[11];
				Global_113386.f_20118[bParam0 /*43*/].f_8 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[12];
				Global_113386.f_20118[bParam0 /*43*/].f_9 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[23];
				Global_113386.f_20118[bParam0 /*43*/].f_11 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[4];
				Global_113386.f_20118[bParam0 /*43*/].f_12 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[15];
				Global_113386.f_20118[bParam0 /*43*/].f_13 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[16];
				Global_113386.f_20118[bParam0 /*43*/].f_14 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[14];
				Global_113386.f_20118[bParam0 /*43*/].f_15 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[22];
				Global_113386.f_20118[bParam0 /*43*/].f_18 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[20];
				Global_113386.f_20118[bParam0 /*43*/].f_17 = Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_31[18];
				Global_113386.f_20118[bParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_113386.f_20118[bParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_113386.f_20118[bParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_113386.f_20118[bParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_113386.f_20118[bParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_31 = __LIB_0__::func_294(*iParam1);
				Global_113386.f_20118[bParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_0__::func_434(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_5, Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_7, iVar3, 1, &(Global_113386.f_20118[bParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				__LIB_0__::func_434(Global_113386.f_2363.f_539.f_2407[iParam2 /*295*/][bParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_113386.f_20118[bParam0 /*43*/].f_2));
			}
		}
	}
}

void func_508(int iParam0, bool bParam1)//Position - 0x756C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!func_513(iParam0))
	{
		return;
	}
	if ((bParam1 != 0 && bParam1 != 1) && bParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				bParam1 = false;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				bParam1 = true;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				bParam1 = 2;
			}
		}
		if ((bParam1 != 0 && bParam1 != 1) && bParam1 != 2)
		{
			bParam1 = Global_113386.f_2363.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_113386.f_32749.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_113386.f_32749.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_113386.f_32749.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_113386.f_32749.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_113386.f_32749.f_5590 = bParam1;
	Global_78042 = iParam0;
	Global_113386.f_32749.f_5588 = 1;
	__LIB_0__::func_209(iParam0, &(Global_113386.f_32749.f_5510));
}

int func_513(int iParam0)//Position - 0x75CF3
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_526(iParam0, 0, 0)) || func_526(iParam0, 1, 0)) || func_526(iParam0, 2, 0)) || __LIB_0__::func_119(iParam0) != 145) || __LIB_0__::func_118(iParam0)) || __LIB_0__::func_117(iParam0)) || __LIB_0__::func_108(iParam0)) || __LIB_0__::func_458(iParam0)) || !__LIB_0__::func_465(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (__LIB_0__::func_117(iParam0))
		{
		}
		if (func_526(iParam0, 0, 0))
		{
		}
		if (func_526(iParam0, 1, 0))
		{
		}
		if (func_526(iParam0, 2, 0))
		{
		}
		if (__LIB_0__::func_119(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_526(int iParam0, bool bParam1, bool bParam2)//Position - 0x79706
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (__LIB_14__::func_621(bParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || BitTest(Global_113386.f_7229[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_538()//Position - 0x79CBC
{
	iLocal_376 = 1;
	while (iLocal_376)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_MrPhilips", 0);
		if (iLocal_278 == 0)
		{
			if (iLocal_209)
			{
				iLocal_209 = 0;
			}
			else if (iLocal_207 == 0)
			{
				iLocal_376 = 1;
				func_546();
				func_541(0);
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
				if (!__LIB_0__::func_2(0))
				{
					STREAMING::REQUEST_ANIM_DICT("misstrevor1bathroom");
					STREAMING::REQUEST_ANIM_DICT("misstrevor1");
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "T1Safehouse");
				}
				iLocal_207++;
			}
			else if (iLocal_207 == 1)
			{
				if ((__LIB_0__::func_90() && (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1bathroom") || __LIB_0__::func_2(0))) && (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1") || __LIB_0__::func_2(0)))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_280.f_0, "Ron", 1, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_285.f_0, "Trevors_car", 0, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::REPLAY_START_EVENT(4);
					SYSTEM::WAIT(0);
					MISC::CLEAR_AREA(Local_430, 100f, true, false, false, false);
					HUD::DISPLAY_HUD(false);
					__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
					iLocal_206 = 0;
					iLocal_207 = 0;
					iLocal_278 = 1;
				}
			}
		}
		if (iLocal_278 == 1)
		{
			func_128(16, 0f, 0f, 0f, 0, 0);
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!__LIB_0__::func_2(0))
				{
					CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(true);
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 10000)
				{
					PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
				}
				if (iLocal_216 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_285.f_0, "OFF");
					}
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
					MISC::CLEAR_AREA(1986.1279f, 3814.437f, 31.2913f, 200f, true, false, false, false);
					__LIB_16__::func_915(500);
					iLocal_216 = 1;
				}
				else if (!iLocal_206)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						__LIB_16__::func_925(500);
						iLocal_278 = 3;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (!__LIB_0__::func_2(0))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "T1Safehouse"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
							{
								AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
								VEHICLE::SET_VEHICLE_LIGHTS(Local_285.f_0, 4);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!__LIB_0__::func_2(0))
				{
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!__LIB_1__::func_606(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1);
					}
				}
			}
			if (!__LIB_0__::func_2(0))
			{
				if (!func_95("START LOAD SCENE SAFE"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 4178)
					{
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1973.8455f, 3818.4473f, 32.4363f, 15f, 2);
						func_94("START LOAD SCENE SAFE", 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				if (!__LIB_0__::func_2(0))
				{
					HUD::DISPLAY_HUD(false);
					CAM::DESTROY_CAM(iLocal_474, false);
					AUDIO::SET_STATIC_EMITTER_ENABLED("SE_TREVOR_TRAILER_RADIO_01", true);
					AUDIO::SET_EMITTER_RADIO_STATION("SE_TREVOR_TRAILER_RADIO_01", "RADIO_06_COUNTRY" /* GXT: Rebel Radio */);
					if (!CAM::DOES_CAM_EXIST(iLocal_474))
					{
						iLocal_474 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::SET_CAM_COORD(iLocal_474, 1f, 1f, 1f);
					}
					CAM::PLAY_CAM_ANIM(iLocal_474, "trv_trailer_tut_ext_cam", "misstrevor1", 1986.238f, 3815.098f, 32.793f, 0f, 0f, -154f, false, 2);
					CAM::SET_CAM_ACTIVE(iLocal_474, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					MISC::CLEAR_AREA(1973.8455f, 3818.4473f, 32.4363f, 30f, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
					{
						PED::DELETE_PED(&Local_281);
					}
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_216 == 1)
			{
				iLocal_278 = 2;
			}
		}
		if (iLocal_278 == 2)
		{
			if (iLocal_206)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_364))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_364, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_365))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_365, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_366))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_366, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_367))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_367, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_368))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iLocal_368, false);
			}
			HUD::DISPLAY_RADAR(false);
			__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
			if (!__LIB_0__::func_2(0))
			{
				HUD::DISPLAY_HUD(false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CUTSCENE::REMOVE_CUTSCENE();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_285.f_0, 0, true);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_285.f_0, 1, true);
			}
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_207 = 0;
			iLocal_278 = 0;
			iLocal_376 = 0;
		}
		if (iLocal_278 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			iLocal_206 = 1;
			iLocal_278 = 1;
		}
	}
}

void func_541(int iParam0)//Position - 0x7A188
{
	func_542(iParam0);
	if ((iParam0 == 0 || iParam0 == 1) || iParam0 == 3)
	{
		Local_280.f_2 = { 1983.88f, 3828.55f, 31.3972f };
		Local_280.f_5 = 28.7057f;
		Local_280.f_6 = joaat("WEAPON_PISTOL");
		Local_280.f_7 = joaat("WEAPON_UNARMED");
		Local_281.f_2 = { 1981.66f, 3831.05f, 31.3972f };
		Local_281.f_5 = 206.1794f;
		Local_281.f_6 = joaat("WEAPON_SAWNOFFSHOTGUN");
		Local_281.f_7 = joaat("WEAPON_UNARMED");
		Local_285.f_2 = { 1983.17f, 3829.76f, 32.4f };
		Local_285.f_5 = 294.44f;
		Local_285.f_7 = Local_542.f_39;
		Local_290.f_2 = { 1948.87f, 4638.04f, 40.39f };
		Local_290.f_5 = 66.68f;
		Local_290.f_6 = Local_542.f_4;
		Local_290.f_7 = Local_542.f_40;
		Local_295[0 /*12*/].f_2 = { 1962.8153f, 4635.3926f, 40.241f };
		Local_295[0 /*12*/].f_5 = 140.022f;
		Local_295[0 /*12*/].f_6 = Local_542.f_0;
		Local_295[0 /*12*/].f_7 = Local_542.f_41;
		Local_295[1 /*12*/].f_2 = { 1960.5868f, 4632.432f, 40.1918f };
		Local_295[1 /*12*/].f_5 = 58.5726f;
		Local_295[1 /*12*/].f_6 = Local_542.f_0;
		Local_295[1 /*12*/].f_7 = Local_542.f_42;
		Local_269[1 /*65*/].f_2 = { 1966.7565f, 4634.725f, 40.7667f };
		Local_269[1 /*65*/].f_5 = 23.7752f;
		Local_269[2 /*65*/].f_2 = { 1966.051f, 4638.446f, 40.7751f };
		Local_269[2 /*65*/].f_5 = 153.9032f;
		Local_269[2 /*65*/].f_16 = joaat("IG_Terry");
		Local_269[3 /*65*/].f_2 = { 1963.537f, 4636.041f, 40.8039f };
		Local_269[3 /*65*/].f_5 = 32.1947f;
		Local_269[3 /*65*/].f_16 = joaat("IG_Clay");
		Local_269[0 /*65*/].f_2 = { 1951.334f, 4636.043f, 40.6186f };
		Local_269[0 /*65*/].f_5 = -105.84f;
		Local_295[0 /*12*/].f_2 = { 1965.54f, 4637.74f, 40.25f };
		Local_295[0 /*12*/].f_5 = 92.63f;
		Local_295[1 /*12*/].f_2 = { 1963.45f, 4636.52f, 40.24f };
		Local_295[1 /*12*/].f_5 = 59.72f;
		Local_282[0 /*9*/].f_2 = { 360.3275f, 4444.9155f, 61.9223f };
		Local_282[0 /*9*/].f_5 = 126.5533f;
		Local_282[0 /*9*/].f_6 = Local_542.f_9;
		Local_282[1 /*9*/].f_2 = { 358.3185f, 4442.6445f, 61.8962f };
		Local_282[1 /*9*/].f_5 = 20.1394f;
		Local_282[1 /*9*/].f_6 = Local_542.f_9;
		Local_296[0 /*12*/].f_2 = { 355.3197f, 4442.639f, 61.9571f };
		Local_296[0 /*12*/].f_5 = 6.6736f;
		Local_296[0 /*12*/].f_6 = Local_542.f_2;
		Local_296[1 /*12*/].f_2 = { 377.0306f, 4405.7993f, 61.3879f };
		Local_296[1 /*12*/].f_5 = 31.7967f;
		Local_296[1 /*12*/].f_6 = Local_542.f_1;
	}
	else if (iParam0 == 4)
	{
		Local_284[0 /*12*/].f_2 = { 13.6181f, 3702.1545f, 38.6766f };
		Local_284[0 /*12*/].f_5 = 286.8863f;
		Local_284[0 /*12*/].f_6 = Local_542.f_4;
		Local_284[0 /*12*/].f_7 = Local_542.f_43;
		Local_284[1 /*12*/].f_2 = { 64.3812f, 3665.0452f, 38.7237f };
		Local_284[1 /*12*/].f_5 = 289.1604f;
		Local_284[1 /*12*/].f_6 = Local_542.f_4;
		Local_284[2 /*12*/].f_2 = { 101.7281f, 3742.2266f, 38.7385f };
		Local_284[2 /*12*/].f_5 = 126.7107f;
		Local_284[2 /*12*/].f_6 = Local_542.f_0;
		Local_284[3 /*12*/].f_2 = { 96.845f, 3687.7852f, 38.6517f };
		Local_284[3 /*12*/].f_5 = 273.4825f;
		Local_284[3 /*12*/].f_6 = Local_542.f_4;
		Local_284[4 /*12*/].f_2 = { 31.7653f, 3660.328f, 38.793f };
		Local_284[4 /*12*/].f_5 = 281.1249f;
		Local_284[4 /*12*/].f_6 = Local_542.f_0;
		Local_284[5 /*12*/].f_2 = { 12.51f, 3686.04f, 39.15f };
		Local_284[5 /*12*/].f_5 = 299.13f;
		Local_284[5 /*12*/].f_6 = Local_542.f_0;
		Local_284[6 /*12*/].f_2 = { 58.7611f, 3724.3909f, 38.7233f };
		Local_284[6 /*12*/].f_5 = 52.6504f;
		Local_284[6 /*12*/].f_6 = Local_542.f_0;
		Local_284[7 /*12*/].f_2 = { 60.6066f, 3724.9722f, 38.7202f };
		Local_284[7 /*12*/].f_5 = 50.1891f;
		Local_284[7 /*12*/].f_6 = Local_542.f_0;
		Local_284[8 /*12*/].f_2 = { 60.1503f, 3665.4148f, 38.7929f };
		Local_284[8 /*12*/].f_5 = 82.5423f;
		Local_284[8 /*12*/].f_6 = Local_542.f_0;
		Local_284[9 /*12*/].f_2 = { 59.5704f, 3663.1687f, 38.6055f };
		Local_284[9 /*12*/].f_5 = 97.7429f;
		Local_284[9 /*12*/].f_6 = Local_542.f_0;
		Local_284[10 /*12*/].f_2 = { 66.2237f, 3625.1873f, 38.6523f };
		Local_284[10 /*12*/].f_5 = 312.2219f;
		Local_284[10 /*12*/].f_6 = Local_542.f_5;
		Local_284[11 /*12*/].f_2 = { 86.8213f, 3637.7795f, 38.7683f };
		Local_284[11 /*12*/].f_5 = 357.0385f;
		Local_284[11 /*12*/].f_6 = Local_542.f_5;
		Local_284[12 /*12*/].f_2 = { 34.3147f, 3719.1348f, 38.6821f };
		Local_284[12 /*12*/].f_5 = 153.6358f;
		Local_284[12 /*12*/].f_6 = Local_542.f_5;
		Local_284[13 /*12*/].f_2 = { 42.9015f, 3683.5884f, 38.6273f };
		Local_284[13 /*12*/].f_5 = (38.882f + 180f);
		Local_284[13 /*12*/].f_6 = Local_542.f_5;
		Local_284[14 /*12*/].f_2 = { 26.0817f, 3681.3962f, 38.6321f };
		Local_284[14 /*12*/].f_5 = 114.3899f;
		Local_284[14 /*12*/].f_6 = Local_542.f_4;
		Local_284[15 /*12*/].f_2 = { 39.2248f, 3728.508f, 39.1479f };
		Local_284[15 /*12*/].f_5 = 105.9004f;
		Local_284[15 /*12*/].f_6 = Local_542.f_0;
		Local_284[19 /*12*/].f_2 = { 78.0597f, 3684.4834f, 38.512f };
		Local_284[16 /*12*/].f_5 = 105.9004f;
		Local_284[16 /*12*/].f_6 = Local_542.f_0;
		Local_284[17 /*12*/].f_2 = { 40.5676f, 3730.775f, 39.1645f };
		Local_284[17 /*12*/].f_5 = 113.6521f;
		Local_284[17 /*12*/].f_6 = Local_542.f_0;
		Local_284[18 /*12*/].f_2 = { 125.975f, 3720.1838f, 38.7542f };
		Local_284[18 /*12*/].f_5 = 282.1393f;
		Local_284[18 /*12*/].f_6 = Local_542.f_4;
		Local_284[19 /*12*/].f_2 = { 78.0597f, 3684.4834f, 38.512f };
		Local_284[19 /*12*/].f_5 = 337.7484f;
		Local_284[19 /*12*/].f_6 = Local_542.f_5;
		Local_284[20 /*12*/].f_2 = { 103.8368f, 3700.4424f, 38.8312f };
		Local_284[20 /*12*/].f_5 = 113.2645f;
		Local_284[20 /*12*/].f_6 = Local_542.f_0;
		Local_284[21 /*12*/].f_2 = { 106.9271f, 3699.7463f, 39.2054f };
		Local_284[21 /*12*/].f_5 = 115.34f;
		Local_284[21 /*12*/].f_6 = Local_542.f_0;
		Local_284[22 /*12*/].f_2 = { 107.3253f, 3704.3235f, 39.2635f };
		Local_284[22 /*12*/].f_5 = 99.51f;
		Local_284[22 /*12*/].f_6 = Local_542.f_0;
		Local_284[23 /*12*/].f_2 = { 88.3355f, 3704.193f, 38.5818f };
		Local_284[23 /*12*/].f_5 = 53.3843f;
		Local_284[23 /*12*/].f_6 = Local_542.f_5;
		Local_284[24 /*12*/].f_2 = { 75.7059f, 3740.968f, 39.1979f };
		Local_284[24 /*12*/].f_5 = 229.04f;
		Local_284[24 /*12*/].f_6 = Local_542.f_0;
		Local_284[25 /*12*/].f_2 = { 71.3323f, 3742.7761f, 39.2591f };
		Local_284[25 /*12*/].f_5 = 271.1641f;
		Local_284[25 /*12*/].f_6 = Local_542.f_0;
		Local_290.f_6 = Local_542.f_4;
		Local_295[0 /*12*/].f_2 = { 71.6588f, 3648.1626f, 38.5417f };
		Local_295[0 /*12*/].f_5 = 240.6028f;
		Local_295[0 /*12*/].f_6 = Local_542.f_0;
		Local_295[1 /*12*/].f_2 = { 74.1199f, 3653.3162f, 38.8485f };
		Local_295[1 /*12*/].f_5 = 249.5172f;
		Local_295[1 /*12*/].f_6 = Local_542.f_0;
	}
	else if (iParam0 == 6 || iParam0 == 7)
	{
		Local_290.f_2 = { -20.1293f, 3039.469f, 40.0023f };
		Local_290.f_5 = 292.0927f;
		Local_290.f_6 = Local_542.f_6;
		Local_283.f_2 = { -21.5156f, 3036.358f, 40.2379f };
		Local_283.f_5 = 287.3651f;
	}
	else if (iParam0 == 4 || iParam0 == 7)
	{
		Local_290.f_2 = { -20.1293f, 3039.469f, 40.0023f };
		Local_290.f_5 = 292.0927f;
		Local_290.f_6 = Local_542.f_6;
		Local_283.f_2 = { -21.5156f, 3036.358f, 40.2379f };
		Local_283.f_5 = 287.3651f;
	}
	else if (iParam0 == 5)
	{
		Local_290.f_2 = { -20.1293f, 3039.469f, 40.0023f };
		Local_290.f_5 = 292.0927f;
		Local_290.f_6 = Local_542.f_6;
		Local_283.f_2 = { -21.5156f, 3036.358f, 40.2379f };
		Local_283.f_5 = 287.3651f;
	}
}

void func_542(int iParam0)//Position - 0x7AB9A
{
	if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 3) || iParam0 == 4)
	{
		func_543(&(Local_269[0 /*65*/]), 1952.8842f, 4634.7134f, 39.599f, 49.8737f, joaat("WEAPON_PISTOL"), Local_542.f_7, 1, 2, 1, 5, 11, 0, 0, 0, Local_542.f_33, Local_542.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
		func_543(&(Local_269[1 /*65*/]), 1955.6431f, 4637.195f, 39.661f, 109.1915f, joaat("WEAPON_PUMPSHOTGUN"), Local_542.f_7, 1, 2, 1, 6, 11, 0, 0, 0, Local_542.f_33, Local_542.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
		func_543(&(Local_269[2 /*65*/]), 1957.107f, 4636.986f, 39.6963f, 112.9889f, joaat("WEAPON_SMG"), Local_542.f_8, 1, 2, 1, 14, 11, 0, 0, 0, Local_542.f_33, Local_542.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
		func_543(&(Local_269[3 /*65*/]), 1956.0724f, 4633.9956f, 39.6426f, 90.1262f, joaat("WEAPON_CARBINERIFLE"), Local_542.f_8, 1, 2, 1, 6, 11, 0, 0, 0, Local_542.f_33, Local_542.f_34, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 3, 0, 5, 1, 1, 5);
	}
	if (iParam0 == 4)
	{
	}
}

void func_543(var uParam0, struct<3> Param1, float fParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14, struct<3> Param15, struct<3> Param16, float fParam17, int iParam18, int iParam19, int iParam20, struct<3> Param21, struct<3> Param22, float fParam23, int iParam24, int iParam25, int iParam26, bool bParam27, int iParam28, int iParam29)//Position - 0x7AD15
{
	uParam0->f_2 = { Param1 };
	uParam0->f_5 = fParam2;
	uParam0->f_14 = iParam3;
	uParam0->f_16 = uParam4;
	uParam0->f_17 = iParam5;
	uParam0->f_18 = iParam6;
	uParam0->f_19 = iParam7;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_30[2] = iParam10;
	uParam0->f_30[3] = iParam11;
	uParam0->f_30[4] = iParam12;
	uParam0->f_37 = uParam13;
	uParam0->f_38 = uParam14;
	uParam0->f_47 = { Param15 };
	uParam0->f_40 = { Param16 };
	uParam0->f_43 = fParam17;
	uParam0->f_44 = iParam18;
	uParam0->f_45 = iParam19;
	uParam0->f_46 = iParam20;
	uParam0->f_61 = bParam27;
	if (!bParam27)
	{
		uParam0->f_58 = { Param21 };
		uParam0->f_51 = { Param22 };
		uParam0->f_54 = fParam23;
		uParam0->f_55 = iParam24;
		uParam0->f_56 = iParam25;
		uParam0->f_57 = iParam26;
	}
	uParam0->f_62 = iParam28;
	uParam0->f_63 = iParam29;
	uParam0->f_23 = 0;
	uParam0->f_39 = 0;
	uParam0->f_50 = 0;
	uParam0->f_30[5] = 0;
}

void func_545()//Position - 0x7AE1B
{
	PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.675f, 0.251f, 10f, 0.85f, 0, 0f, "Scripted_Ped_Splash_Back");
	PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 5, 0.397f, 0.28f, 320f, 0.65f, 0, 0f, "Scripted_Ped_Splash_Back");
	PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 5, 0.297f, 0.08f, 320f, 0.65f, 0, 0f, "Scripted_Ped_Splash_Back");
}

void func_546()//Position - 0x7AE8F
{
	if (iLocal_317 == 0 || iLocal_317 == 1)
	{
		Local_429 = { 1981.1176f, 3817.199f, 31.3807f };
		Local_430 = { 2016.4196f, 4642.44f, 40.1808f };
		fLocal_461 = 323.8188f;
	}
	else if (iLocal_317 == 2)
	{
		Local_429 = { 2016.4196f, 4642.44f, 40.1808f };
		Local_430 = { 1969.6027f, 4647.3115f, 39.9437f };
		fLocal_461 = 143.064f;
	}
	else if (iLocal_317 == 3)
	{
		Local_429 = { 1969.6027f, 4647.3115f, 39.9437f };
		Local_430 = { 80.2901f, 3619.4456f, 38.6997f };
		fLocal_461 = 118.0796f;
	}
	else if (iLocal_317 == 4)
	{
		Local_429 = { 80.2901f, 3619.4456f, 38.6997f };
		Local_430 = { 80.2901f, 3619.4456f, 38.6997f };
		fLocal_461 = 16.2939f;
	}
	else if (iLocal_317 == 5)
	{
		Local_429 = { 64.4564f, 3073.8577f, 40.2777f };
		Local_430 = { 80.2901f, 3619.4456f, 38.6997f };
		fLocal_461 = 132.797f;
	}
	else if (iLocal_317 == 6)
	{
		Local_429 = { 81.2743f, 3609.298f, 38.73f };
		Local_430 = { 81.2743f, 3609.298f, 38.73f };
		fLocal_461 = 180.4163f;
	}
	else if (iLocal_317 == 7)
	{
		Local_429 = { -43.9504f, 3022.5447f, 39.5891f };
		Local_430 = { -43.9504f, 3022.5447f, 39.5891f };
		fLocal_461 = 115.181f;
	}
	else if (iLocal_317 == 8)
	{
		Local_429 = { -6.8119f, 3039.8992f, 39.677f };
		Local_430 = { 1681.5554f, 3725.458f, 32.949f };
		fLocal_461 = 287.4757f;
	}
	else if (iLocal_317 == 9)
	{
		Local_429 = { 1952.2297f, 3787.396f, 31.2922f };
		Local_430 = { 1952.2297f, 3787.396f, 31.2922f };
		fLocal_461 = 27.2205f;
	}
}

void func_547()//Position - 0x7B0AC
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_534 - 1))
	{
		if (Local_535[iVar0 /*3*/] != 0)
		{
			if (Local_535[iVar0 /*3*/].f_1)
			{
				if (!Local_535[iVar0 /*3*/].f_2)
				{
					func_550(Local_535[iVar0 /*3*/], 1, 1);
					Local_535[iVar0 /*3*/].f_2 = 1;
				}
			}
			else if (Local_535[iVar0 /*3*/].f_2)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_535[iVar0 /*3*/]);
				Local_535[iVar0 /*3*/].f_2 = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_536 - 1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(Local_537[iVar0 /*4*/], "missing") && Local_537[iVar0 /*4*/].f_1 != -1)
		{
			if (Local_537[iVar0 /*4*/].f_2)
			{
				if (!Local_537[iVar0 /*4*/].f_3)
				{
					func_548(Local_537[iVar0 /*4*/].f_1, Local_537[iVar0 /*4*/], 1, 1);
					Local_537[iVar0 /*4*/].f_3 = 1;
				}
			}
			else if (Local_537[iVar0 /*4*/].f_3)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(Local_537[iVar0 /*4*/].f_1, Local_537[iVar0 /*4*/]);
				Local_537[iVar0 /*4*/].f_3 = 0;
			}
		}
		iVar0++;
	}
}

void func_548(int iParam0, char* sParam1, bool bParam2, bool bParam3)//Position - 0x7B1C9
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
	if (bParam2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_ALL_OBJECTS_NOW();
		}
		while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			if (bParam3)
			{
				func_549(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_549(int iParam0)//Position - 0x7B20A
{
	SYSTEM::WAIT(iParam0);
	func_966();
}

void func_550(int iParam0, bool bParam1, bool bParam2)//Position - 0x7B21C
{
	STREAMING::REQUEST_MODEL(iParam0);
	if (bParam1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_ALL_OBJECTS_NOW();
		}
		while (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			if (bParam2)
			{
				func_549(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_551()//Position - 0x7B259
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_534 - 1))
	{
		Local_535[iVar0 /*3*/].f_1 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_536 - 1))
	{
		Local_537[iVar0 /*4*/].f_2 = 0;
		iVar0++;
	}
}

void func_552(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7B2A1
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
		__LIB_0__::func_179(1);
		if (iParam0 <= Global_100478)
		{
		}
		iVar1 = __LIB_0__::func_365(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_113386.f_9085.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = __LIB_0__::func_510(iVar1);
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
			iVar4 = __LIB_0__::func_531(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
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
		func_553(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_553(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7B419
{
	func_554(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_554(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x7B435
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_15__::func_942();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_654(&(uParam0->f_2884), 0);
		__LIB_13__::func_760(PLAYER::PLAYER_PED_ID());
		__LIB_33__::func_594(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == __LIB_15__::func_942())
		{
			__LIB_40__::func_816(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		func_556(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_556(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x7C2E2
{
	int iVar0;
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = __LIB_0__::func_650(iParam2);
	}
	if (func_562(iParam2, &iVar0, iParam3, iParam5))
	{
		__LIB_16__::func_867(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
			{
				__LIB_16__::func_867(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_562(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x7C584
{
	char* sVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
							{
								return 0;
							}
						}
						if (func_526(*uParam1, __LIB_15__::func_942(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_604()//Position - 0x817E9
{
	if (iLocal_317 == 0)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_317 == 1)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_317 == 2)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
		{
			__LIB_0__::func_222(&Local_526, 5, Local_269[2 /*65*/], "TERRY", 1, 1);
		}
		if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
		{
			__LIB_0__::func_222(&Local_526, 6, Local_269[3 /*65*/], "CLAY", 1, 1);
		}
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_317 == 3)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_317 == 4)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_317 == 6)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_317 == 7)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		if (!PED::IS_PED_INJURED(Local_283.f_0))
		{
			__LIB_0__::func_222(&Local_526, 7, Local_283.f_0, "ORTEGA", 0, 1);
		}
	}
	if (iLocal_317 == 8)
	{
		__LIB_0__::func_221(&Local_526, 1);
		__LIB_0__::func_221(&Local_526, 2);
		__LIB_0__::func_221(&Local_526, 3);
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		__LIB_0__::func_221(&Local_526, 7);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
	if (iLocal_317 == 9)
	{
		__LIB_0__::func_221(&Local_526, 4);
		__LIB_0__::func_221(&Local_526, 5);
		__LIB_0__::func_221(&Local_526, 6);
		__LIB_0__::func_221(&Local_526, 7);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
	}
}

int func_605()//Position - 0x81CF8
{
	func_660();
	if (ENTITY::DOES_ENTITY_EXIST(Local_283.f_0))
	{
		if (PED::IS_PED_INJURED(Local_283.f_0))
		{
			__LIB_0__::func_681(132, 1);
			STATS::STAT_SET_BOOL(joaat("SP_KILLED_ORTEGA"), true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_283.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_283.f_0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), true) > 100f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_283.f_0))
				{
					PED::DELETE_PED(&Local_283);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ortega"));
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), true) > 100f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_283.f_0))
			{
				PED::DELETE_PED(&Local_283);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ortega"));
			}
		}
	}
	if (!func_95("TREVOR_1_DRIVE_HOME"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_1_DRIVE_HOME");
				func_94("TREVOR_1_DRIVE_HOME", 1);
			}
		}
	}
	if (iLocal_379 == 0)
	{
		func_604();
		func_552(6, "Drop Off Ron", 1, 0, 0, 1);
		iLocal_379 = 1;
		iLocal_375 = 0;
		PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(2), 0);
		if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_283.f_1));
		}
	}
	if (!iLocal_370)
	{
		if (iLocal_363)
		{
			if (STREAMING::IPL_GROUP_SWAP_IS_READY())
			{
				STREAMING::IPL_GROUP_SWAP_FINISH();
				if (STREAMING::IS_IPL_ACTIVE("TRV1_Trail_end") && STREAMING::IS_IPL_ACTIVE("CS3_05_water_grp2"))
				{
					iLocal_363 = 0;
				}
				else
				{
					SYSTEM::WAIT(0);
				}
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			func_552(6, "Drop Off Ron", 1, 0, 0, 1);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(2), 0);
			func_551();
			func_547();
			HUD::SET_RADAR_ZOOM(0);
			func_546();
			iLocal_465 = 0;
			bLocal_212 = true;
			iLocal_656 = 0;
			iLocal_657 = 0;
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			if (!iLocal_398)
			{
				func_545();
				iLocal_398 = 1;
			}
			iLocal_370 = 1;
		}
	}
	else
	{
		switch (iLocal_465)
		{
			case 0:
				func_658(500);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_285.f_0, 0f);
					if (!func_95("BAJS"))
					{
						if (!PED::IS_PED_INJURED(Local_280.f_0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, true))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, true))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_280.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
								{
									if (!PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
									{
										PED::SET_PED_AS_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495());
									}
									TASK::TASK_ENTER_VEHICLE(Local_280.f_0, Local_285.f_0, -1, 0, 2f, 1, 0);
									func_94("BAJS", 1);
								}
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1952.2297f, 3787.396f, 31.2922f, true) < 100f && !__LIB_6__::func_181())
				{
					if (!__LIB_0__::func_2(0))
					{
						STREAMING::REQUEST_ANIM_DICT("misstrevor1bathroom");
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "T1Safehouse");
					}
					CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_4", 8);
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1952.2297f, 3787.396f, 31.2922f, true) > 120f || __LIB_6__::func_181())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
				if (func_618(&Local_297, 1952.2297f, 3787.396f, 31.2922f, 7f, 7f, 2f, 1, Local_280.f_0, Local_285.f_0, Local_542.f_112, Local_542.f_109, Local_542.f_118, Local_542.f_111, 0, 1, 1, -1))
				{
					if (__LIB_0__::func_213(Local_285.f_0, 10.5f, 1, 1056964608, 0, 1, 0))
					{
						__LIB_0__::func_638();
						func_114();
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
						iLocal_465++;
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ORTEGA_KILLED"))
							{
								AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ORTEGA_KILLED");
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
					{
						if (!func_95("CLEAR LOOK AT"))
						{
							if (!PED::IS_PED_INJURED(Local_280.f_0))
							{
								AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
								TASK::TASK_CLEAR_LOOK_AT(Local_280.f_0);
								func_94("CLEAR LOOK AT", 1);
							}
						}
						if (iLocal_375 == 1)
						{
							if (iLocal_657 == 0)
							{
								if (__LIB_0__::func_75())
								{
									AUDIO::PREPARE_MUSIC_EVENT("TRV1_END_TRUCK");
									if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_END_TRUCK"))
									{
										iLocal_657 = 1;
									}
								}
							}
						}
						if (func_612())
						{
							if (iLocal_375 == 0)
							{
								if (!__LIB_13__::func_755(&Local_297, 1))
								{
									if (__LIB_16__::func_929() == 0)
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DR1", 7, 0, 0, 0))
										{
											RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 12f, 3);
											HUD::SET_RADAR_ZOOM(0);
											iLocal_375 = 1;
										}
									}
									else if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EIA", 7, 0, 0, 0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 12f, 3);
										HUD::SET_RADAR_ZOOM(0);
										iLocal_375 = 1;
									}
								}
							}
						}
					}
					else if (!func_95("HASGOTINVEHICLE"))
					{
						if (iLocal_656 == 0)
						{
							if (!__LIB_13__::func_755(&Local_297, 2))
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_LETSG", 7, 0, 0, 0))
								{
									if (!PED::IS_PED_INJURED(Local_280.f_0))
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_280.f_0, PLAYER::PLAYER_PED_ID(), 6000, 0, 2);
									}
									iLocal_656 = 1;
								}
							}
						}
					}
					if (!func_95("HASGOTINVEHICLE"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
							{
								func_94("HASGOTINVEHICLE", 1);
							}
						}
					}
					if (iLocal_465 == 0)
					{
						if (iLocal_375 == 1)
						{
							if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
							{
								if (__LIB_0__::func_568())
								{
									__LIB_0__::func_620(0);
									HUD::CLEAR_PRINTS();
								}
							}
							else if (!__LIB_0__::func_568())
							{
								__LIB_0__::func_620(1);
								HUD::CLEAR_PRINTS();
							}
						}
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_297.f_0))
					{
						Local_297.f_0 = HUD::ADD_BLIP_FOR_ENTITY(Local_285.f_0);
						HUD::SET_BLIP_COLOUR(Local_297.f_0, 3);
					}
				}
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_HOME"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_HOME");
					}
					iLocal_465++;
				}
				break;
		}
		if (iLocal_465 >= 2)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_472))
			{
				HUD::REMOVE_BLIP(&iLocal_472);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_471))
			{
				HUD::REMOVE_BLIP(&iLocal_471);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_473))
			{
				HUD::REMOVE_BLIP(&iLocal_473);
			}
			iLocal_379 = 0;
			iLocal_370 = 0;
			return 1;
		}
	}
	return 0;
}

int func_612()//Position - 0x82401
{
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 1;
	}
	return 0;
}

bool func_618(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)//Position - 0x8263A
{
	return func_619(iParam0, Param1, Param2, bParam3, iParam4, 0, 0, iParam5, sParam6, sParam7, sParam7, sParam7, sParam7, sParam8, sParam9, bParam10, bParam11, bParam12, iParam13);
}

bool func_619(int* iParam0, struct<3> Param1, struct<3> Param2, bool bParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x8266E
{
	return __LIB_17__::func_236(iParam0, Param1, Param2, __LIB_0__::func_613(), __LIB_0__::func_613(), bParam3, 5, uParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

void func_658(int iParam0)//Position - 0x84E03
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
	while (CAM::IS_SCREEN_FADING_IN())
	{
		func_549(0);
	}
}

void func_660()//Position - 0x84E76
{
	switch (iLocal_648)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_283.f_0))
			{
				if (iLocal_240 == 1)
				{
					if (__LIB_0__::func_611(&iLocal_649, 3000))
					{
						iLocal_457 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_457, "misstrevor1", "ortega_kneel_to_stand_ort", 8f, -8f, 261, 16, 1000f, 0);
						iLocal_648++;
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_283.f_0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_457))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_457) > 0.99f)
					{
						TASK::TASK_SMART_FLEE_PED(Local_283.f_0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
						iLocal_648++;
					}
				}
			}
			break;
	}
}

int func_661()//Position - 0x84F45
{
	func_677();
	func_660();
	if (ENTITY::DOES_ENTITY_EXIST(Local_283.f_0))
	{
		if (PED::IS_PED_INJURED(Local_283.f_0))
		{
			__LIB_0__::func_681(132, 1);
			STATS::STAT_SET_BOOL(joaat("SP_KILLED_ORTEGA"), true, true);
		}
		else
		{
			PED::SET_PED_CAPSULE(Local_283.f_0, 0.5f);
		}
	}
	sLocal_654 = "T1M1_RAGEKIL";
	if (!PED::IS_PED_INJURED(Local_283.f_0))
	{
		if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
		{
			__LIB_0__::func_429();
			if (!iLocal_653)
			{
				if (!__LIB_13__::func_755(&Local_297, 1))
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_SPECIAL", 7, 0, 0, 0))
					{
						iLocal_653 = 1;
					}
				}
			}
		}
	}
	if (iLocal_465 == 1)
	{
		if (!PED::IS_PED_INJURED(Local_283.f_0))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_283.f_0, 1) > 8f)
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_283.f_0, 1) > 25f)
				{
					func_37(15);
				}
				else if (!__LIB_13__::func_755(&Local_297, 2))
				{
					if (!func_95("TRV_ORTRET"))
					{
						if (iLocal_386 == 0)
						{
							__LIB_0__::func_620(1);
							iLocal_386 = 1;
							func_676("TRV_ORTRET", 7500);
						}
					}
				}
				else if (!func_95("TRV_ORTRET"))
				{
					func_676("TRV_ORTRET", 7500);
					func_94("TRV_ORTRET", 1);
				}
			}
			else
			{
				if (__LIB_0__::func_501("TRV_ORTRET", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				if (__LIB_0__::func_568())
				{
					__LIB_0__::func_620(0);
				}
			}
		}
		else if (__LIB_0__::func_568())
		{
			__LIB_0__::func_620(0);
		}
	}
	if (iLocal_465 > 1)
	{
		if (!PED::IS_PED_INJURED(Local_283.f_0))
		{
			AUDIO::OVERRIDE_TREVOR_RAGE("T1M1_FLAA");
			func_673();
		}
		else
		{
			AUDIO::RESET_TREVOR_RAGE();
			__LIB_0__::func_221(&Local_526, 7);
			if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_283.f_1));
			}
		}
	}
	if (iLocal_465 > 1)
	{
		if (iLocal_362 == 0)
		{
			if (!PED::IS_PED_INJURED(Local_283.f_0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_457))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_457) == 1f)
					{
						iLocal_457 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_457, "misstrevor1", "ortega_kneel_loop_ort", 1000f, -1000f, 1, 16, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_457, true);
						iLocal_362 = 1;
					}
				}
			}
		}
	}
	if (iLocal_379 == 0)
	{
		PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(2), 0);
		func_604();
		func_552(5, "Kill / Threaten Ortega", 0, 0, 0, 1);
		iLocal_417 = 0;
		iLocal_379 = 1;
	}
	if (!iLocal_370)
	{
		if (!func_95("TRIGGER STAGE START"))
		{
			func_552(5, "Kill / Threaten Ortega", 0, 0, 0, 1);
			func_551();
			func_671(Local_542.f_1);
			func_547();
			func_546();
			func_541(6);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			SYSTEM::SETTIMERA(0);
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_457))
				{
					if (!PED::IS_PED_INJURED(Local_283.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
					{
						iLocal_457 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_457, "misstrevor1", "ortega_stand_loop_ort", 1000f, -1000f, 261, 16, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_457, true);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_285.f_0, false, false, false, false, false, false, false, false);
			}
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_129(1);
			}
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			iLocal_362 = 0;
			iLocal_465 = 0;
			iLocal_645 = 0;
			iLocal_653 = 0;
			iLocal_648 = 0;
			iLocal_240 = 0;
			bLocal_212 = true;
			iLocal_354 = MISC::GET_GAME_TIMER();
			func_94("TRIGGER STAGE START", 1);
		}
		if (!iLocal_398)
		{
			func_545();
			iLocal_398 = 1;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (__LIB_0__::func_611(&iLocal_354, 1800))
			{
				func_658(500);
				iLocal_370 = 1;
			}
		}
		else
		{
			iLocal_370 = 1;
		}
	}
	else
	{
		if (PED::IS_PED_INJURED(Local_283.f_0))
		{
			if (iLocal_465 > 0 && iLocal_465 < 3)
			{
				iLocal_465 = 3;
			}
		}
		if (iLocal_465 > 0 && iLocal_465 < 2)
		{
			if (!__LIB_1__::func_861())
			{
				__LIB_0__::func_671(1);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
		}
		else if (__LIB_1__::func_861())
		{
			__LIB_0__::func_671(0);
		}
		switch (iLocal_465)
		{
			case 0:
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_283.f_1))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_283.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							Local_283.f_1 = __LIB_0__::func_639(Local_283.f_0, 1, 0);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, false);
					}
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_283.f_0, false, false, false, false, false, false, false, false);
						PED::SET_PED_CONFIG_FLAG(Local_283.f_0, 185, true);
						PED::SET_PED_CONFIG_FLAG(Local_283.f_0, 118, false);
						ENTITY::FREEZE_ENTITY_POSITION(Local_283.f_0, false);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_283.f_0, false);
						PED::SET_PED_CAN_RAGDOLL(Local_283.f_0, true);
						ENTITY::SET_ENTITY_HEALTH(Local_283.f_0, 110, 0);
					}
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_280.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						AUDIO::STOP_PED_SPEAKING(Local_280.f_0, true);
					}
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN")) < 2)
					{
						WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 10);
					}
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), true);
					}
					if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), true);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					HUD::CLEAR_PRINTS();
					MISC::SET_TIME_SCALE(1f);
					iLocal_648 = 0;
					iLocal_386 = 0;
					iLocal_650 = 0;
					iLocal_651 = 0;
					iLocal_652 = 0;
					iLocal_653 = 0;
					iLocal_362 = 0;
					iLocal_363 = 0;
					func_676(Local_542.f_114, 7500);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
					}
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						__LIB_0__::func_709(Local_283.f_0, "T1M1_GGAA", "ORTEGA", 3);
					}
					__LIB_16__::func_915(500);
					iLocal_465++;
				}
				break;
			case 1:
				if (!PED::IS_PED_INJURED(Local_283.f_0))
				{
					if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_283.f_0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_283.f_0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_283.f_0, PLAYER::PLAYER_PED_ID())) || GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), 0.5f))
					{
						if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_283.f_1));
						}
						if (__LIB_0__::func_501(Local_542.f_114, 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_457))
						{
							iLocal_457 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_457, "misstrevor1", "ortega_stand_to_kneel_ort", 8f, -8f, 261, 16, 1000f, 0);
							iLocal_465++;
						}
					}
					else if (!iLocal_651)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_283.f_0))
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_IG4A", 7, 0, 0, 0))
								{
									iLocal_651 = 1;
									iLocal_350 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else if (__LIB_0__::func_611(&iLocal_350, MISC::GET_RANDOM_INT_IN_RANGE(10000, 12000)))
					{
						iLocal_651 = 0;
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_INJURED(Local_283.f_0))
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), 0.5f))
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_283.f_0))
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_ORTGAS", 7, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									Local_283.f_1 = __LIB_0__::func_639(Local_283.f_0, 1, 0);
									iLocal_417 = 0;
									iLocal_375 = 0;
									func_604();
									iLocal_465++;
								}
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0);
							Local_283.f_1 = __LIB_0__::func_639(Local_283.f_0, 1, 0);
							iLocal_417 = 0;
							iLocal_375 = 0;
							func_604();
							iLocal_465++;
						}
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_283.f_0))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_283.f_0, 1, 0f, 4f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_283.f_1));
					}
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					HUD::SET_RADAR_ZOOM(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
					}
					iLocal_465++;
				}
				break;
			case 3:
				if (!PED::IS_PED_INJURED(Local_283.f_0))
				{
					if (!iLocal_650)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_283.f_0))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_297, 1))
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_THREAT", 7, 0, 0, 0))
									{
										iLocal_650 = 1;
									}
								}
							}
						}
					}
				}
				if (PED::IS_PED_INJURED(Local_283.f_0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
					{
						AUDIO::STOP_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
					}
					else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ORTEGA_KILLED"))
					{
						AUDIO::START_AUDIO_SCENE("TREVOR_1_ORTEGA_KILLED");
					}
					if (iLocal_655 == 0)
					{
						__LIB_0__::func_325();
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", sLocal_654, 7, 0, 0, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_283.f_0))
							{
								if (!PED::IS_PED_INJURED(Local_283.f_0))
								{
									ENTITY::APPLY_FORCE_TO_ENTITY(Local_283.f_0, 1, 0f, 4f, 3f, 0f, 0f, 0f, 0, false, false, true, false, true);
								}
							}
							if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
							{
								HUD::REMOVE_BLIP(&(Local_283.f_1));
							}
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
							__LIB_0__::func_681(132, 1);
							iLocal_655 = 1;
						}
					}
					else if (!__LIB_0__::func_75())
					{
						if (!__LIB_13__::func_755(&Local_297, 1))
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_RONORTD", 7, 0, 0, 0))
							{
								if (!PED::IS_PED_INJURED(Local_280.f_0))
								{
									TASK::CLEAR_PED_TASKS(Local_280.f_0);
								}
								iLocal_465++;
							}
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						if (PED::IS_PED_RAGDOLL(Local_283.f_0))
						{
							ENTITY::SET_ENTITY_HEALTH(Local_283.f_0, 0, 0);
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), true) > 7f)
					{
						if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_283.f_1));
						}
						__LIB_0__::func_638();
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_NOSH", 7, 0, 0, 0))
						{
							if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_283.f_0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_457))
								{
									iLocal_457 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_457, "misstrevor1", "ortega_kneel_outro_ort", 8f, -8f, 261, 16, 1000f, 0);
									func_94("ORTEGA SPARED", 1);
									if (!PED::IS_PED_INJURED(Local_280.f_0))
									{
										TASK::CLEAR_PED_TASKS(Local_280.f_0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
									}
									iLocal_649 = MISC::GET_GAME_TIMER();
									iLocal_240 = 1;
									iLocal_465++;
								}
							}
							else
							{
								if (!PED::IS_PED_INJURED(Local_280.f_0))
								{
									TASK::CLEAR_PED_TASKS(Local_280.f_0);
								}
								TASK::TASK_SMART_FLEE_PED(Local_283.f_0, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
								func_94("ORTEGA SPARED", 1);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
								}
								iLocal_465++;
							}
						}
					}
					else if (iLocal_650 == 1)
					{
						if (!iLocal_652)
						{
							if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), 0.5f))
							{
								if (!__LIB_13__::func_755(&Local_297, 1))
								{
									if (!__LIB_0__::func_75())
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_ORTGAS", 7, 0, 0, 0))
										{
											iLocal_652 = 1;
											iLocal_350 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							else if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BEG", 7, 0, 0, 0))
									{
										iLocal_652 = 1;
										iLocal_350 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
						else if (__LIB_0__::func_611(&iLocal_350, MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000)))
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_COWER", 7, 0, 0, 0))
									{
										iLocal_652 = 0;
									}
								}
							}
						}
					}
				}
				break;
		}
		if (iLocal_465 >= 4)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
			}
			STREAMING::REMOVE_ANIM_DICT("MISSCOMMON@HANDS_UP_FLINCH");
			PLAYER::SET_MAX_WANTED_LEVEL(6);
			HUD::SET_RADAR_ZOOM(0);
			__LIB_0__::func_221(&Local_526, 5);
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				AUDIO::STOP_PED_SPEAKING(Local_280.f_0, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, false);
				if (!PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
				{
					TASK::CLEAR_PED_TASKS(Local_280.f_0);
					PED::SET_PED_AS_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495());
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
			{
				HUD::REMOVE_BLIP(&(Local_283.f_1));
			}
			func_114();
			AUDIO::RESET_TREVOR_RAGE();
			iLocal_370 = 0;
			iLocal_379 = 0;
			return 1;
		}
	}
	return 0;
}

void func_671(int iParam0)//Position - 0x85DBF
{
	int iVar0;
	iVar0 = func_672(iParam0);
	if (iVar0 != -1)
	{
		Local_535[iVar0 /*3*/].f_1 = 1;
	}
}

int func_672(int iParam0)//Position - 0x85DDF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (Local_535[iVar2 /*3*/] == iParam0)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_534)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

void func_673()//Position - 0x85E22
{
	if (HUD::DOES_BLIP_EXIST(Local_283.f_1))
	{
		func_674(&(Local_283.f_1), &(Local_283.f_8), &(Local_283.f_7));
	}
	if (iLocal_417 == 0)
	{
		iLocal_417 = 1;
	}
	if (!HUD::DOES_BLIP_EXIST(Local_283.f_1))
	{
	}
}

int func_674(var uParam0, var uParam1, var uParam2)//Position - 0x85E62
{
	if ((MISC::GET_GAME_TIMER() - *uParam1) > 500)
	{
		if (*uParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(*uParam0, true);
			HUD::SET_BLIP_COLOUR(*uParam0, 3);
			*uParam1 = MISC::GET_GAME_TIMER();
			*uParam2 = 0;
			return 1;
		}
		else
		{
			HUD::SET_BLIP_COLOUR(*uParam0, 1);
			HUD::SET_BLIP_AS_FRIENDLY(*uParam0, false);
			*uParam1 = MISC::GET_GAME_TIMER();
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

void func_676(char* sParam0, int iParam1)//Position - 0x85EE1
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (!MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		{
			__LIB_0__::func_229(sParam0, iParam1, 1);
		}
	}
}

void func_677()//Position - 0x85F09
{
	switch (iLocal_645)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("MISSCOMMON@HANDS_UP_FLINCH");
			if (STREAMING::HAS_ANIM_DICT_LOADED("MISSCOMMON@HANDS_UP_FLINCH"))
			{
				iLocal_645++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_283.f_0))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), 5f, true) || MISC::HAS_BULLET_IMPACTED_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_283.f_0, false), 10f, true, true))
				{
					iLocal_645++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Local_283.f_0))
			{
				iLocal_646 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
				if (iLocal_646 == 0)
				{
					TASK::TASK_PLAY_ANIM(Local_283.f_0, "MISSCOMMON@HANDS_UP_FLINCH", "FLINCH_ADDITIVE_A", 8f, -8f, -1, 288, 0f, false, false, false);
				}
				if (iLocal_646 == 1)
				{
					TASK::TASK_PLAY_ANIM(Local_283.f_0, "MISSCOMMON@HANDS_UP_FLINCH", "FLINCH_ADDITIVE_B", 8f, -8f, -1, 288, 0f, false, false, false);
				}
				if (iLocal_646 == 2)
				{
					TASK::TASK_PLAY_ANIM(Local_283.f_0, "MISSCOMMON@HANDS_UP_FLINCH", "FLINCH_ADDITIVE_C", 8f, -8f, -1, 288, 0f, false, false, false);
				}
				iLocal_645++;
				iLocal_647 = MISC::GET_GAME_TIMER();
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&iLocal_647, 1800))
			{
				iLocal_645 = 1;
			}
			break;
	}
}

int func_678()//Position - 0x86049
{
	struct<3> Var0;
	int iVar1;
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 0 /*INPUT_NEXT_CAMERA*/, true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_283.f_0))
	{
		if (PED::IS_PED_INJURED(Local_283.f_0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_283.f_0, PLAYER::PLAYER_PED_ID(), true))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL");
			func_37(16);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -30.081879f, 3046.6929f, 48.064957f, -40.076206f, 3069.2302f, 31.243526f, 11.25f, false, true, 0))
		{
			VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.35f);
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -435.02042f, -1242.0337f, 48.43407f, -448.8804f, -1342.7756f, 30.265724f, 24f, false, true, 0))
		{
			VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.3f);
		}
		else
		{
			VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.65f);
		}
	}
	if (!PED::IS_PED_INJURED(Local_283.f_0))
	{
		PED::SET_PED_RESET_FLAG(Local_283.f_0, 249, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_643))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_643))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!iLocal_644)
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_285.f_0, iLocal_643))
					{
						ENTITY::SET_ENTITY_LIGHTS(iLocal_643, false);
						OBJECT::BREAK_OBJECT_FRAGMENT_CHILD(iLocal_643, -1, false);
						iLocal_644 = 1;
					}
				}
			}
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_643))
	{
		iLocal_643 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(1700.87f, 3295.02f, 45.95f, 1f, joaat("prop_wall_light_02a"), true, false, true);
	}
	__LIB_0__::func_187();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	__LIB_0__::func_189();
	if (iLocal_465 < 2)
	{
		if (!func_95("T1M1_ORT"))
		{
			if (!PED::IS_PED_INJURED(Local_283.f_0))
			{
				__LIB_0__::func_709(Local_283.f_0, "T1M1_GDAA", "ORTEGA", 11);
				iLocal_636 = MISC::GET_GAME_TIMER();
				func_94("T1M1_ORT", 1);
			}
		}
		else if (__LIB_0__::func_611(&iLocal_636, MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000)))
		{
			func_94("T1M1_ORT", 0);
		}
	}
	else if (iLocal_465 < 4)
	{
		Var0 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_468) };
		if (!func_95("T1M1_ORT2"))
		{
			if (Var0.f_1 > 0f)
			{
				if (!PED::IS_PED_INJURED(Local_283.f_0))
				{
					__LIB_0__::func_709(Local_283.f_0, "T1M1_GEAA", "ORTEGA", 11);
					iLocal_636 = MISC::GET_GAME_TIMER();
					func_94("T1M1_ORT2", 1);
				}
			}
		}
		else if (__LIB_0__::func_611(&iLocal_636, MISC::GET_RANDOM_INT_IN_RANGE(15000, 18000)))
		{
			func_94("T1M1_ORT2", 0);
		}
	}
	else if (!func_95("T1M1_ORT3"))
	{
		if (!PED::IS_PED_INJURED(Local_283.f_0))
		{
			__LIB_0__::func_709(Local_283.f_0, "T1M1_GFAA", "ORTEGA", 11);
			iLocal_636 = MISC::GET_GAME_TIMER();
			func_94("T1M1_ORT3", 1);
		}
	}
	else if (__LIB_0__::func_611(&iLocal_636, MISC::GET_RANDOM_INT_IN_RANGE(15000, 18000)))
	{
		func_94("T1M1_ORT3", 0);
	}
	if (iLocal_465 > 0 && iLocal_465 < 4)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
				{
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_635))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_635, "TREVOR_1_RAM_TRAILER_REVS", Local_285.f_0, 0, false, 0);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(iLocal_635);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(iLocal_635);
			}
		}
	}
	func_700();
	iVar1 = joaat("WEAPON_PUMPSHOTGUN");
	if (iLocal_465 < 3)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_215);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_215);
	}
	if (!iLocal_638)
	{
		if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_1", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_2", false, -1))
		{
			iLocal_638 = 1;
		}
	}
	if (iLocal_465 > 0 && iLocal_465 < 4)
	{
		if (iLocal_639 == 0)
		{
			if (!iLocal_223)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
							{
								iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_02_Trevor_Arrival_Reaction", 4f, -8f, 0, 0, 1000f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
								iLocal_223 = 1;
							}
						}
					}
				}
			}
			else if (!func_95("SHOUT IDLE"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
							{
								iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_03_Shouting_Idle", 8f, -8f, 0, 0, 1000f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, true);
								func_94("SHOUT IDLE", 1);
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_379 == 0)
	{
		PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(2), 0);
		func_604();
		func_552(4, "Push the trailer", 0, 0, 0, 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		iLocal_397 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
		bLocal_395 = true;
		CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
		iLocal_394 = 1;
		iLocal_379 = 1;
	}
	func_699();
	func_698();
	if (!iLocal_370)
	{
		func_552(4, "Push the trailer", 0, 0, 0, 1);
		__LIB_0__::func_753();
		func_551();
		func_547();
		STREAMING::REQUEST_MODEL(joaat("proptrailer"));
		STREAMING::REQUEST_MODEL(__LIB_0__::func_493(38));
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_SCENE(-19.4662f, 3023.335f, 39.9864f);
			func_696();
			while (iLocal_418 == 1)
			{
				SYSTEM::WAIT(0);
			}
		}
		if (iLocal_363 == 0)
		{
		}
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		func_546();
		func_541(6);
		STREAMING::REMOVE_IPL("TRV1_Trail_end");
		STREAMING::REQUEST_IPL("TRV1_Trail_start");
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
		iLocal_420 = 1;
		iLocal_370 = 1;
		iLocal_638 = 0;
		bLocal_641 = false;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		bLocal_212 = true;
		iLocal_465 = 0;
		if (!iLocal_398)
		{
			func_545();
			iLocal_398 = 1;
		}
	}
	else
	{
		switch (iLocal_465)
		{
			case 0:
				if (iLocal_363 == 1)
				{
					STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_7"))
					{
						iLocal_226 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
						CAM::SET_CAM_PARAMS(iLocal_226, -7.0672f, 3000.614f, 41.8584f, -6.9699f, -0.1718f, 33.9582f, 27.386f, 0, 1, 1, 2);
						CAM::SET_CAM_FOV(iLocal_226, 27.386f);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_226, 0f);
						CAM::SET_CAM_ACTIVE(iLocal_226, true);
						CAM::SHAKE_CAM(iLocal_226, "HAND_SHAKE", 0.6f);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						HUD::LOCK_MINIMAP_ANGLE(29);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							if (!PED::IS_PED_INJURED(Local_283.f_0))
							{
								iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_03_Shouting_Idle", 8f, -8f, 0, 0, 1000f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, true);
							}
						}
						STREAMING::REQUEST_PTFX_ASSET();
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						iLocal_363 = 0;
						func_658(500);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							VEHICLE::SET_VEHICLE_BURNOUT(Local_285.f_0, true);
						}
						iLocal_331 = MISC::GET_GAME_TIMER();
						__LIB_0__::func_963(0, 0, 1, 0);
						iLocal_639 = 1;
						iLocal_465++;
					}
				}
				else
				{
					STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_7"))
					{
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						STREAMING::REQUEST_PTFX_ASSET();
						__LIB_0__::func_963(0, 0, 1, 0);
						iLocal_639 = 0;
						iLocal_642 = MISC::GET_GAME_TIMER();
						iLocal_465++;
					}
				}
				break;
			case 1:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
				if (HUD::DOES_BLIP_EXIST(iLocal_471))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/))
					{
						STREAMING::REQUEST_ANIM_DICT("misstrevor1");
						if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
						{
							if (!PED::IS_PED_INJURED(Local_280.f_0))
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_280.f_0, true);
							}
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_285.f_0, true);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
							{
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_468, false);
								VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.4f);
							}
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "pushtrailer");
							iLocal_225 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
							CAM::DETACH_CAM(iLocal_225);
							CAM::DETACH_CAM(iLocal_226);
							CAM::SET_CAM_PARAMS(iLocal_226, CAM::GET_CAM_COORD(iLocal_226), CAM::GET_CAM_ROT(iLocal_226, 2), CAM::GET_CAM_FOV(iLocal_226), 0, 1, 1, 2);
							CAM::SHAKE_CAM(iLocal_226, "ROAD_VIBRATION_SHAKE", 0.4f);
							Local_633 = { func_695() };
							Local_633.f_2 = 41.9f;
							CAM::SET_CAM_COORD(iLocal_225, Local_633);
							CAM::SET_CAM_ROT(iLocal_225, -6.8007f, 0.0945f, 34.2821f, 2);
							Local_632 = { func_695() };
							Local_633 = { Local_633 + Local_632 - Local_633 * FtoV((7.5f * MISC::GET_FRAME_TIME())) };
							Local_633.f_2 = 41.9f;
							CAM::SET_CAM_COORD(iLocal_225, Local_633);
							CAM::SET_CAM_FOV(iLocal_225, 27.386f);
							CAM::SHAKE_CAM(iLocal_225, "ROAD_VIBRATION_SHAKE", 0.2f);
							CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_225, 0f);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_225, iLocal_226, 2000, 1, 1);
							iLocal_331 = MISC::GET_GAME_TIMER();
							if (__LIB_0__::func_1("TRV_ACCEL"))
							{
								HUD::CLEAR_HELP(true);
							}
							iLocal_381 = 1;
							CUTSCENE::REMOVE_CUTSCENE();
							__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
							AUDIO::PREPARE_MUSIC_EVENT("TRV1_RAM_TRAILER");
							func_94("T1M1_PT1", 1);
							__LIB_0__::func_638();
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
							{
								if (!PED::IS_PED_INJURED(Local_283.f_0))
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_283.f_0, iLocal_468, false);
								}
							}
							iLocal_465++;
						}
					}
				}
				else
				{
					if (__LIB_0__::func_611(&iLocal_642, 6000))
					{
						__LIB_0__::func_638();
					}
					if (!__LIB_0__::func_75())
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						__LIB_0__::func_151("TRV_ACCEL", -1);
						func_676("TRV_PUSH", 7500);
						iLocal_471 = __LIB_0__::func_488(-49.0106f, 3098.9553f, 24.7669f, 0);
					}
				}
				break;
			case 2:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
				Local_632 = { func_695() };
				Local_633 = { Local_632 };
				Local_633.f_2 = 41.9f;
				CAM::SHAKE_CAM(iLocal_225, "ROAD_VIBRATION_SHAKE", 0.2f);
				if (__LIB_0__::func_611(&iLocal_331, 2000))
				{
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_RAM_TRAILER");
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_RAM_TRAILER"))
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							VEHICLE::SET_VEHICLE_BURNOUT(Local_285.f_0, false);
							if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_401) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_402))
							{
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_401, false);
								GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_402, false);
								iLocal_382 = 0;
							}
							iLocal_381 = 0;
						}
						CUTSCENE::REMOVE_CUTSCENE();
						CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_3_CONCAT", 8);
						__LIB_0__::func_638();
						iLocal_428 = 1;
						iLocal_387 = 0;
						iLocal_332 = 0;
						iLocal_634 = 0;
						iLocal_637 = 0;
						STREAMING::IPL_GROUP_SWAP_START("CS3_05_water_grp1", "CS3_05_water_grp2");
						iLocal_465++;
					}
				}
				break;
			case 3:
				CAM::DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE();
				if (!func_95("T1M1_EDA"))
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EDA", 7, 0, 0, 0))
							{
								func_94("T1M1_EDA", 1);
							}
						}
					}
					else
					{
						__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "T1M1_EDAA", "TREVOR", 34);
						func_94("T1M1_EDA", 1);
					}
				}
				else if (!func_95("T1M1_SPECIAL"))
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_SPECIAL", 7, 0, 0, 0))
							{
								func_94("T1M1_SPECIAL", 1);
							}
						}
					}
					else if (!__LIB_0__::func_75())
					{
						__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "T1M1_GKAA", "TREVOR", 34);
						func_94("T1M1_EDA", 1);
					}
				}
				func_693();
				Local_632 = { func_695() };
				Local_633 = { Local_632 };
				Local_633.f_2 = 41.9f;
				if (CAM::DOES_CAM_EXIST(iLocal_225))
				{
					if (!CAM::IS_CAM_INTERPOLATING(iLocal_225) && !CAM::IS_CAM_INTERPOLATING(iLocal_226))
					{
						CAM::SET_CAM_COORD(iLocal_225, Local_633);
						CAM::SHAKE_CAM(iLocal_225, "ROAD_VIBRATION_SHAKE", 0.3f);
					}
				}
				if (iLocal_428 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, -20.866846f, 3021.173f, 39.50019f, -17.276619f, 3023.5483f, 43.281097f, 7f, false, true, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) < 3f)
							{
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_285.f_0, 3f);
							}
						}
					}
					if (!bLocal_641)
					{
						if (iLocal_420 == 0)
						{
							func_692();
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Local_285.f_0, false);
						ENTITY::SET_ENTITY_PROOFS(Local_285.f_0, false, false, false, true, false, false, false, false);
					}
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
				}
				else if (iLocal_387 == 0)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EEB", 7, 0, 0, 0))
						{
							iLocal_387 = 1;
						}
					}
				}
				else if (!func_95("T1M1_EGA"))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EGA", 7, 0, 0, 0))
						{
							func_94("T1M1_EGA", 1);
						}
					}
				}
				if (iLocal_428 == 0)
				{
					if (iLocal_376 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							if (!PED::IS_PED_INJURED(Local_283.f_0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
								{
									if (!bLocal_641)
									{
										iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_06_Fall_Back_Into_Trailer", 8f, -8f, 0, 0, 1000f, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, false);
										bLocal_641 = true;
									}
								}
							}
						}
					}
				}
				if (bLocal_641)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
								{
									if (!func_95("FALL BACK LOOP"))
									{
										iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_07_Holding_Onto_Side_Wall_Idle", 8f, -8f, 0, 0, 1000f, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, true);
										func_94("FALL BACK LOOP", 1);
									}
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -101.27076f, 3104.8472f, 22.087103f, -16.644316f, 3122.3071f, 26.642069f, 28.25f, false, true, 0))
				{
					if (iLocal_427 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_splash", iLocal_468, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_427 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_468))
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -101.27076f, 3104.8472f, 22.087103f, -16.644316f, 3122.3071f, 26.642069f, 28.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -45.057804f, 3085.6453f, 24.610682f, -46.814102f, 3118.266f, 33.36924f, 23.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -59.43705f, 3101.3892f, 23.71039f, -13.134295f, 3108.0645f, 35.35013f, 35.25f, false, true, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_468, false, false, false, false, false, false, false, false);
							ENTITY::SET_ENTITY_INVINCIBLE(iLocal_468, false);
						}
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 2000, 256);
						SYSTEM::SETTIMERB(0);
						if (HUD::DOES_BLIP_EXIST(iLocal_471))
						{
							HUD::REMOVE_BLIP(&iLocal_471);
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_472))
						{
							HUD::REMOVE_BLIP(&iLocal_472);
						}
						SYSTEM::SETTIMERB(0);
						__LIB_0__::func_671(0);
						iLocal_207 = 0;
						__LIB_0__::func_325();
						CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_3_CONCAT", 8);
						iLocal_640 = 0;
						iLocal_465++;
					}
					else if (func_618(&Local_297, -49.0106f, 3098.9553f, 24.7669f, 0.1f, 0.1f, 0.1f, 0, Local_280.f_0, Local_285.f_0, "", "TRV_BDY2", "", Local_542.f_111, 0, 0, 1, -1))
					{
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_468, false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, false);
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_471))
							{
								HUD::SET_BLIP_ALPHA(iLocal_471, 255);
							}
							HUD::SET_BLIP_ALPHA(Local_297.f_5, 0);
							HUD::SET_BLIP_ROUTE(Local_297.f_5, false);
							if (!HUD::DOES_BLIP_EXIST(iLocal_471))
							{
								iLocal_471 = __LIB_0__::func_488(-49.0106f, 3098.9553f, 24.7669f, 0);
								__LIB_0__::func_151("TRV_ACCEL", -1);
								func_676("TRV_PUSH", 7500);
							}
							else if (iLocal_428 == 0)
							{
								if (!iLocal_637)
								{
									if (!__LIB_13__::func_755(&Local_297, 1))
									{
										if (!__LIB_0__::func_75())
										{
											if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EFA", 7, 0, 0, 0))
											{
												iLocal_637 = 1;
												iLocal_242 = MISC::GET_GAME_TIMER();
												iLocal_634++;
											}
										}
									}
								}
								else if (iLocal_634 < 3)
								{
									if (!__LIB_0__::func_611(&iLocal_242, MISC::GET_RANDOM_INT_IN_RANGE(2000, 7000)))
									{
										iLocal_637 = 0;
									}
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_471))
							{
								HUD::SET_BLIP_ALPHA(iLocal_471, 0);
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_468, false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, true);
							}
							if (__LIB_0__::func_75())
							{
								__LIB_0__::func_638();
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_468, false))
						{
							if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), iLocal_468, 1) > 60f)
							{
								func_37(15);
							}
						}
					}
				}
				break;
			case 4:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -101.27076f, 3104.8472f, 22.087103f, -16.644316f, 3122.3071f, 26.642069f, 28.25f, false, true, 0))
				{
					if (iLocal_427 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_splash", iLocal_468, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_427 = 1;
						}
					}
				}
				if (bLocal_641)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
								{
									if (!func_95("FALL BACK LOOP"))
									{
										iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_07_Holding_Onto_Side_Wall_Idle", 8f, -8f, 0, 0, 1000f, 0);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, true);
										func_94("FALL BACK LOOP", 1);
									}
								}
							}
						}
					}
				}
				if (func_95("FALL BACK LOOP"))
				{
					if (iLocal_640 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							if (!PED::IS_PED_INJURED(Local_283.f_0))
							{
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
								{
									iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_08_Run_To_Door_Outro", 8f, -8f, 0, 0, 1000f, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, false);
									iLocal_640 = 1;
								}
							}
						}
					}
				}
				if (SYSTEM::TIMERB() > 500)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_368))
					{
						GRAPHICS::REMOVE_PARTICLE_FX(iLocal_368, false);
					}
				}
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
				if (SYSTEM::TIMERB() > 20)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_368))
					{
						GRAPHICS::REMOVE_PARTICLE_FX(iLocal_368, false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(iLocal_468, false);
					}
					func_690(0, 1045220557, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_285.f_0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 17891328);
						}
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_280.f_0, 0, 17891328);
						}
					}
					iLocal_278 = 0;
					iLocal_390 = 0;
					iLocal_207 = 0;
					AUDIO::STOP_SOUND(iLocal_635);
					iLocal_465++;
				}
				else
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.3f);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_468, 1, 0f, 1f, -1f, 0f, 0f, 0f, 0, false, false, true, false, true);
					}
				}
				break;
			case 5:
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
				func_679();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_285.f_0, true, false);
				}
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
				{
					if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), true);
					}
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					ENTITY::SET_ENTITY_PROOFS(Local_285.f_0, false, false, false, false, false, false, false, false);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_283.f_0, iLocal_468, true);
					}
				}
				iLocal_465++;
				break;
			case 6:
				if (!PED::IS_PED_INJURED(Local_283.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						ENTITY::SET_ENTITY_COLLISION(iLocal_468, true, true);
					}
					if (ENTITY::IS_ENTITY_ATTACHED(Local_283.f_0))
					{
						ENTITY::DETACH_ENTITY(Local_283.f_0, true, true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						ENTITY::SET_ENTITY_PROOFS(Local_285.f_0, false, false, false, false, false, false, false, false);
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
					iLocal_465++;
				}
				break;
		}
		if (iLocal_465 >= 7)
		{
			func_114();
			iLocal_379 = 0;
			iLocal_362 = 0;
			iLocal_370 = 0;
			return 1;
		}
	}
	return 0;
}

void func_679()//Position - 0x87639
{
	int iVar0;
	iLocal_376 = 1;
	while (iLocal_376)
	{
		func_966();
		SYSTEM::WAIT(0);
		func_966();
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_MrPhilips", 0);
		if (iLocal_278 == 0)
		{
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			if (iLocal_209)
			{
				iLocal_209 = 0;
			}
			else if (iLocal_207 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.3f);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_PUSH_THE_TRAILER"))
				{
					AUDIO::STOP_AUDIO_SCENE("TREVOR_1_PUSH_THE_TRAILER");
				}
				iLocal_376 = 1;
				iLocal_216 = 0;
				func_546();
				func_541(0);
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_3_CONCAT", 8);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1");
				iLocal_207++;
			}
			else if (iLocal_207 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.3f);
				}
				if ((__LIB_0__::func_90() && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1")) && STREAMING::IPL_GROUP_SWAP_IS_READY())
				{
					func_966();
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					else
					{
						SYSTEM::WAIT(0);
					}
					func_966();
					iLocal_621 = __LIB_17__::func_613(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 1, 0, 0, 0, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_621))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_621, "Trevors_weapon", 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_280.f_0, "Ron", 0, 0, 0);
							PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
						}
					}
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_283.f_0, "Ortega", 0, 0, 0);
						__LIB_0__::func_222(&Local_526, 7, Local_283.f_0, "ORTEGA", 0, 1);
					}
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_283.f_0, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_283.f_0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_283.f_0, false);
					}
					if (ENTITY::IS_ENTITY_ATTACHED(Local_283.f_0))
					{
						ENTITY::DETACH_ENTITY(Local_283.f_0, false, true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_285.f_0, "Trevors_car", 0, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_285.f_0, true, false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_468, "Ortega_Trailer", 0, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_468, true, false);
					}
					if (!ENTITY::IS_ENTITY_VISIBLE(Local_283.f_0))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_283.f_0, true, false);
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_283.f_0, -1000f, true);
					}
					CUTSCENE::START_CUTSCENE(2048);
					__LIB_0__::func_963(1, 0, 1, 0);
					RECORDING::REPLAY_START_EVENT(4);
					__LIB_17__::func_772(5000);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
					iLocal_390 = 0;
					iLocal_623 = 0;
					iLocal_206 = 0;
					iLocal_207 = 0;
					iLocal_278 = 1;
				}
			}
		}
		if (iLocal_278 == 1)
		{
			if (!iLocal_623)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 1941)
				{
					iLocal_620 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("Ortega", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_620))
					{
						iLocal_622 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_620);
						if (!PED::IS_PED_INJURED(iLocal_622))
						{
							PED::SET_PED_WETNESS_HEIGHT(iLocal_622, 2f);
							iLocal_623 = 1;
						}
					}
				}
			}
			if (iLocal_216 == 0)
			{
				iLocal_394 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					VEHICLE::SET_VEHICLE_FRICTION_OVERRIDE(iLocal_468, 0.3f);
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					STREAMING::IPL_GROUP_SWAP_FINISH();
					__LIB_0__::func_544(3, 1, 0, 1, 0);
					__LIB_0__::func_544(4, 1, 0, 1, 0);
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						ENTITY::SET_ENTITY_VISIBLE(Local_283.f_0, true, false);
						PED::SET_PED_WETNESS_HEIGHT(Local_283.f_0, 2f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_468, true, true, true);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_285.f_0, 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_285.f_0, 1, 0, 0f);
					}
					MISC::CLEAR_AREA(-46.236f, 3096.727f, 25.713f, 100f, true, false, false, false);
					iLocal_251 = MISC::GET_GAME_TIMER();
					iLocal_216 = 1;
				}
			}
			else if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (__LIB_0__::func_611(&iLocal_251, 2000))
				{
					if (!iLocal_206)
					{
						if (__LIB_1__::func_254())
						{
							__LIB_16__::func_925(500);
							iLocal_278 = 3;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (bLocal_395)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_397);
					if ((!iLocal_396 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && CUTSCENE::GET_CUTSCENE_TIME() > (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_396 = 1;
					}
				}
				if (!func_95("TRV1_THREATEN"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_THREATEN"))
					{
						func_94("TRV1_THREATEN", 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(25.5704f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.7712f, 1f);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					ENTITY::SET_ENTITY_COLLISION(iLocal_468, false, false);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
			{
				WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_621, PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), true);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -45.77f, 3094.9102f, 25.9681f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 23.8494f);
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
				{
					iVar0 = joaat("WEAPON_PUMPSHOTGUN");
					if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), true);
					}
				}
				WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), true, true, true, false);
				if (iLocal_390 == 0)
				{
					iLocal_390 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_280.f_0, -42.33623f, 3088.5667f, 28.480368f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_280.f_0, 34.380215f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ortega_Trailer", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_468, -51.98f, 3110.83f, 24.89f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_468, 46.79f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ortega", 0))
			{
				if (!PED::IS_PED_INJURED(Local_283.f_0))
				{
					if (!func_95("ThreatenSceneMain"))
					{
						iLocal_457 = PED::CREATE_SYNCHRONIZED_SCENE(-46.236f, 3096.727f, 25.513f, 3f, 0f, -162.72f, 2);
						ENTITY::DETACH_ENTITY(Local_283.f_0, true, true);
						ENTITY::SET_ENTITY_PROOFS(Local_283.f_0, false, false, false, false, false, false, false, false);
						TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_457, "misstrevor1", "ortega_stand_loop_ort", 1000f, -1000f, 1, 16, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_457, true);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_283.f_0, false, false);
						func_94("ThreatenSceneMain", 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_216 == 1)
			{
				iLocal_278 = 2;
			}
		}
		if (iLocal_278 == 2)
		{
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			if (iLocal_206)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
			}
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(false);
			__LIB_0__::func_963(0, 0, 1, 0);
			iLocal_207 = 0;
			iLocal_278 = 0;
			iLocal_376 = 0;
		}
		if (iLocal_278 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			iLocal_206 = 1;
			iLocal_278 = 1;
		}
	}
}

void func_690(bool bParam0, float fParam1, int iParam2)//Position - 0x8C4A2
{
	float fVar0;
	int iVar1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
		{
			if (iParam2 == 1)
			{
				__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
			}
			fVar0 = ENTITY::GET_ENTITY_SPEED(iVar1);
			while (fVar0 > fParam1)
			{
				func_966();
				SYSTEM::WAIT(0);
				func_966();
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					fVar0 = ENTITY::GET_ENTITY_SPEED(iVar1);
					func_691(&iVar1);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0);
			__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
		}
	}
}

void func_691(int iParam0)//Position - 0x8C58C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		fLocal_459 = ENTITY::GET_ENTITY_SPEED(*iParam0);
		if (fLocal_459 > 7f)
		{
			if (iLocal_374 == 0)
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), *iParam0, 6, 8000);
				TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), *iParam0, 24, 8000);
				iLocal_374 = 1;
			}
		}
		else if (fLocal_459 > 0.1f)
		{
			if (iLocal_374 == 1)
			{
				TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), *iParam0, 4, 8000);
				iLocal_374 = 0;
			}
		}
		else if (iLocal_374 == 0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			iLocal_374 = 1;
		}
	}
}

int func_692()//Position - 0x8C61A
{
	SYSTEM::SETTIMERA(0);
	iLocal_376 = 1;
	__LIB_0__::func_189();
	while (iLocal_376)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_MrPhilips", 0);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 278 /*INPUT_VEH_MOVE_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 279 /*INPUT_VEH_MOVE_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ARRIVE_AT_TRAILER"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ARRIVE_AT_TRAILER");
		}
		else if (!func_95("TREVOR_1_PUSH_THE_TRAILER"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_PUSH_THE_TRAILER");
			func_94("TREVOR_1_PUSH_THE_TRAILER", 1);
		}
		if (iLocal_332 > 0)
		{
			if (iLocal_387 == 0)
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EEB", 7, 0, 0, 0))
					{
						iLocal_387 = 1;
					}
				}
			}
			else if (!func_95("T1M1_EGA"))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EGA", 7, 0, 0, 0))
					{
						func_94("T1M1_EGA", 1);
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
				{
					VEHICLE::SET_PLAYBACK_SPEED(Local_285.f_0, 1f);
				}
			}
			else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_285.f_0, 0.5f);
			}
		}
		switch (iLocal_332)
		{
			case 0:
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_TRAILER_SMASHED"))
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					CAM::SET_WIDESCREEN_BORDERS(true, 0);
					CAM::DESTROY_ALL_CAMS(false);
					iLocal_225 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					iLocal_226 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), true);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_225, Local_285.f_0, 3.5569f, -1.6759f, 0.2972f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_225, Local_285.f_0, 1.7662f, 0.6973f, 0.6989f, true);
					CAM::SET_CAM_FOV(iLocal_225, 27.2793f);
					CAM::SHAKE_CAM(iLocal_225, "ROAD_VIBRATION_SHAKE", 2.5f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_225, 0.2f);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_226, Local_285.f_0, 0.0629f, -3.1695f, 1.5953f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_226, Local_285.f_0, 0.0554f, -0.1993f, 1.1738f, true);
					CAM::SET_CAM_FOV(iLocal_226, 34.4262f);
					CAM::SHAKE_CAM(iLocal_226, "ROAD_VIBRATION_SHAKE", 2.5f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_226, 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_226, iLocal_225, 1500, 1, 1);
					CAM::SHAKE_CAM(iLocal_225, "ROAD_VIBRATION_SHAKE", 2.5f);
					CAM::SHAKE_CAM(iLocal_226, "ROAD_VIBRATION_SHAKE", 2.5f);
					VEHICLE::REQUEST_VEHICLE_RECORDING(1, "pushtrailer");
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "pushtrailer"))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_285.f_0, 1, "pushtrailer", true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_285.f_0, 719f);
							}
						}
					}
					func_129(1);
					MISC::SET_TIME_SCALE(0.5f);
					AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_TRAILER_SMASH");
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
					HUD::UNLOCK_MINIMAP_ANGLE();
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
							{
								iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_04_1st_Hit_Reaction", 8f, -8f, 0, 0, 1000f, 0);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, false);
							}
						}
					}
					SYSTEM::SETTIMERB(0);
					__LIB_0__::func_325();
					iLocal_332++;
				}
				break;
			case 1:
				if (!func_95("PANIC IDLE"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
								{
									iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_05_Panic_Idle", 8f, -8f, 0, 0, 1000f, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, true);
									func_94("PANIC IDLE", 1);
								}
							}
						}
					}
				}
				if (SYSTEM::TIMERB() > 3000)
				{
					CAM::RENDER_SCRIPT_CAMS(false, true, 1000, true, false, 0);
					CAM::SET_WIDESCREEN_BORDERS(false, 0);
					MISC::SET_TIME_SCALE(1f);
					AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_TRAILER_SMASH");
					CAM::DESTROY_ALL_CAMS(false);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_285.f_0);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					__LIB_16__::func_915(500);
					iLocal_332 = 0;
					iLocal_428 = 0;
					iLocal_376 = 0;
					if (!PED::IS_PED_INJURED(Local_283.f_0))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_283.f_0))
						{
							ENTITY::SET_ENTITY_PROOFS(Local_283.f_0, true, true, true, true, true, false, false, false);
						}
					}
					return 1;
				}
				break;
		}
	}
	return 0;
}

void func_693()//Position - 0x8CACA
{
	switch (iLocal_344)
	{
		case 0:
			if ((AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS", false, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_1", false, -1)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TREVOR_1_TRAILER_IMPACTS_2", false, -1))
			{
				iLocal_344++;
			}
			break;
		case 1:
			iLocal_344++;
			break;
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_468, -35.57f, 3050.7f, 39.65f, 4f, 4f, 4f, false, true, 0))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_B", iLocal_468, 0, false, 0);
					iLocal_344++;
				}
			}
			break;
	}
}

Vector3 func_695()//Position - 0x8CB88
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
	{
		return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_285.f_0, 0.5784f, -8.406f, 0.9975f);
	}
	return -7.6414f, 3002.2417f, 41.5575f;
}

void func_696()//Position - 0x8CBC3
{
	if (iLocal_418 == 1)
	{
		if (iLocal_419 == 0)
		{
			STREAMING::REMOVE_IPL("TRV1_Trail_end");
			STREAMING::REQUEST_IPL("TRV1_Trail_start");
			ENTITY::CREATE_MODEL_HIDE(-24.722f, 3032.973f, 40.336f, 20f, joaat("prop_trailr_base_static"), true);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_468))
			{
				VEHICLE::DELETE_VEHICLE(&iLocal_468);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_419 = 1;
		}
		if (STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")))
		{
			if (iLocal_419 == 1)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_468))
				{
					iLocal_468 = VEHICLE::CREATE_VEHICLE(joaat("proptrailer"), -24.78f, 3032.923f, 40.376f, 25f, false, false, false);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_468, -24.78f, 3032.923f, 40.376f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(iLocal_468, 0.0073f, 0.0009f, 25f, 2, true);
					ENTITY::SET_ENTITY_QUATERNION(iLocal_468, 0.0001f, 0f, 0.2164f, 0.9763f);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_468, true);
					ENTITY::SET_ENTITY_COLLISION(iLocal_468, true, false);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_468, false);
					__LIB_0__::func_377(iLocal_468, 489);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, true);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						VEHICLE::SET_VEHICLE_STRONG(iLocal_468, true);
					}
					func_129(0);
				}
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(joaat("proptrailer"));
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -24.722f, 3032.973f, 40.336f, 30f, 30f, 6f, false, true, 0) || iLocal_317 == 6)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_468))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							ENTITY::SET_ENTITY_COLLISION(iLocal_468, true, false);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, false);
							iLocal_418 = 0;
						}
					}
				}
			}
		}
	}
}

void func_698()//Position - 0x8CD9C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[15 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[15 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[12 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[15 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[12 /*34*/], Local_284[15 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[15 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[12 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[12 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[12 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[15 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[15 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[15 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[16 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[16 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[13 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[16 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[13 /*34*/], Local_284[16 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[16 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[13 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[13 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[13 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[16 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[16 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[16 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[17 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[17 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[14 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[17 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[14 /*34*/], Local_284[17 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[17 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[14 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[14 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[14 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[14 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[14 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[14 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[24 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[24 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[24 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[24 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[24 /*34*/], Local_284[24 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[24 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[24 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[24 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[24 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[24 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[24 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[24 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[25 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[25 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[25 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[25 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[25 /*34*/], Local_284[25 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[25 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[25 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[25 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[25 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[25 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[25 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[25 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[20 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[20 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[32 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[20 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[32 /*34*/], Local_284[20 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[20 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[32 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[32 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[32 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[20 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[20 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[20 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[21 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[33 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[21 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[33 /*34*/], Local_284[21 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[21 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[33 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[33 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[33 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[21 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[21 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[21 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[22 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[34 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[22 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[34 /*34*/], Local_284[22 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[22 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[34 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[34 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[34 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[22 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[22 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[22 /*12*/]);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[2 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[2 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[28 /*34*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[2 /*12*/]);
			}
			else if (!PED::IS_PED_IN_VEHICLE(Local_273[28 /*34*/], Local_284[2 /*12*/], false))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[2 /*12*/]);
			}
		}
		else if (!PED::IS_PED_INJURED(Local_273[28 /*34*/]))
		{
			if (iLocal_317 == 4)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_273[28 /*34*/], joaat("SCRIPT_TASK_COMBAT")) != 1)
				{
					TASK::TASK_COMBAT_PED(Local_273[28 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[2 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[2 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[2 /*12*/]);
		}
	}
}

void func_699()//Position - 0x8D492
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
			{
				if (__LIB_0__::func_86(Local_434))
				{
				}
				if (iLocal_426 == 1)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_368))
					{
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_368, "Speed", (ENTITY::GET_ENTITY_SPEED(iLocal_468) / 20f), false);
					}
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_285.f_0, iLocal_468))
				{
					if (iLocal_420)
					{
						STREAMING::REQUEST_PTFX_ASSET();
						if (STREAMING::HAS_PTFX_ASSET_LOADED())
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_468, 1, 0f, ((0.9f * ENTITY::GET_ENTITY_SPEED(Local_285.f_0)) + 0.7f), 0.5f, 0f, 0f, 0f, 0, false, false, true, false, true);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_boosh", iLocal_468, 1.6f, 1.6f, 3.2f, 0f, 0f, 0f, 1f, false, false, false);
							STREAMING::REQUEST_PTFX_ASSET();
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_A", iLocal_468, 0, false, 0);
							iLocal_426 = 0;
							iLocal_427 = 0;
							iLocal_420 = 0;
						}
					}
					else
					{
						if (iLocal_426 == 0)
						{
							iLocal_368 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_crash_dust", iLocal_468, 2f, 2f, 0.2f, 0f, 0f, 0f, 1f, false, false, false);
							iLocal_426 = 1;
						}
						if (iLocal_423 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_468, false), -49.0106f, 3098.9553f, 24.7669f, true) < 50f)
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_468, false, false, false, false, false, false, false, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_468, false);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_468, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_468, 9), 2000f, 200f, true);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_468, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_468, 0), 80f, 20f, true);
									iLocal_364 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_468, 1.6f, 1.6f, 3.2f, 0f, 0f, 0f, 1f, false, false, false);
									iLocal_365 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_468, -1.6f, 1.6f, 3.2f, 0f, 0f, 0f, 1f, false, false, false);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_C", iLocal_468, 0, false, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_468, true, true, true, false, true, false, false, false);
									iLocal_423 = 1;
								}
							}
						}
						if (iLocal_424 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_468, false), -49.0106f, 3098.9553f, 24.7669f, true) < 18f)
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_468, false, false, false, false, false, false, false, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_468, false);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_468, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_468, 7), 2000f, 200f, true);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_468, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_468, 0), 60f, 40f, true);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_boosh", iLocal_468, -1.6f, 5.4f, 3.2f, 0f, 0f, 0f, 1f, false, false, false);
									iLocal_366 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_468, -1.6f, 5.4f, 3.2f, 0f, 0f, 0f, 1f, false, false, false);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_C", iLocal_468, 0, false, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_468, true, true, true, false, true, false, false, false);
									iLocal_424 = 1;
								}
							}
						}
						if (iLocal_425 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (STREAMING::HAS_PTFX_ASSET_LOADED())
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_468, false), -49.0106f, 3098.9553f, 24.7669f, true) < 10f)
								{
									ENTITY::SET_ENTITY_PROOFS(iLocal_468, false, false, false, false, false, false, false, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_468, false);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_468, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_468, 13), 2000f, 200f, true);
									VEHICLE::SET_VEHICLE_DAMAGE(iLocal_468, ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_468, 0), 120f, 20f, true);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_trev1_trailer_boosh", iLocal_468, 1.6f, 5.6f, 3.2f, 0f, 0f, 0f, 1f, false, false, false);
									iLocal_367 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_trailer_wires", iLocal_468, 1.6f, 5.6f, 3.2f, 0f, 0f, 0f, 1f, false, false, false);
									AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_TRAILER_IMPACT_MASTER_C", iLocal_468, 0, false, 0);
									ENTITY::SET_ENTITY_PROOFS(iLocal_468, true, true, true, false, true, false, false, false);
									iLocal_425 = 1;
								}
							}
						}
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_468, -101.27076f, 3104.8472f, 22.087103f, -16.644316f, 3122.3071f, 26.642069f, 28.25f, false, true, 0))
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_468, 0, 0f, ((1.8f * ENTITY::GET_ENTITY_SPEED(Local_285.f_0)) + 3f), -1f, 0f, 0f, 0f, 0, false, false, true, false, true);
						}
					}
				}
			}
		}
	}
}

void func_700()//Position - 0x8D8EA
{
	float fVar0;
	float fVar1;
	if (iLocal_381 == 1 || iLocal_465 == 9)
	{
		if (PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 208 /*INPUT_FRONTEND_RT*/))
		{
			iLocal_381 = 1;
			fVar0 = __LIB_0__::func_331((fVar0 + (0.2f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fVar1 = __LIB_0__::func_331((fVar1 + (0.25f * SYSTEM::TIMESTEP())), 0f, 1f);
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 500, 256);
		}
		else
		{
			PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 0, 0);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_401))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_401, false);
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_402))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_402, false);
			}
			iLocal_381 = 0;
			iLocal_382 = 0;
			fVar0 = __LIB_0__::func_331((fVar0 - (0.4f * SYSTEM::TIMESTEP())), 0f, 0.3f);
			fVar1 = 0f;
		}
	}
	else
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_401))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_401, false);
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_402))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_402, false);
		}
	}
	if (CAM::DOES_CAM_EXIST(iLocal_474))
	{
		CAM::SHAKE_CAM(iLocal_474, "HAND_SHAKE", fVar0);
	}
	if (iLocal_381)
	{
		if (iLocal_382 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_401) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_402))
					{
						iLocal_401 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_wheelspin_dirt", Local_285.f_0, Local_228, Local_230, 1f, false, false, false);
						iLocal_402 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_trev1_wheelspin_dirt", Local_285.f_0, Local_229, Local_230, 1f, false, false, false);
						iLocal_382 = 1;
					}
				}
			}
		}
		else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_401) && GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_402))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_401, "wheelspin", fVar1, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(iLocal_402, "wheelspin", fVar1, false);
		}
	}
}

int func_704()//Position - 0x8DAD7
{
	int iVar0;
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_RAYFIRE");
	}
	if (iLocal_363 == 0)
	{
		if (iLocal_370)
		{
			func_721();
		}
	}
	if (iLocal_363 == 0)
	{
		if (!iLocal_631)
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("Trevor_1_Shootout_Start"))
			{
				AUDIO::STOP_AUDIO_SCENE("Trevor_1_Shootout_Start");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					AUDIO::START_AUDIO_SCENE("TREVOR_1_SHOOTOUT_BIKERS_FLEE");
					iLocal_631 = 1;
				}
			}
		}
	}
	if (iLocal_465 > 6)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_BIKERS_FLEE"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_BIKERS_FLEE");
		}
		else if (iLocal_630 == 0)
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_DRIVE_TO_TRAILER");
			iLocal_630 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -25.121183f, 3033.6777f, 47.191833f, 150f, 150f, 150f, false, true, 0))
	{
		func_696();
	}
	func_716();
	if (iLocal_465 > 10)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_215);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_215);
	}
	if (iLocal_465 < 6)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_285.f_0, 25f, 25f, 25f, false, true, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1.8f);
			}
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
		{
			if (__LIB_0__::func_501("TRV_GT11", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
	}
	func_715();
	func_714();
	func_710();
	func_698();
	if (func_95("T1M1_CUT1"))
	{
		if (__LIB_0__::func_75())
		{
			MemCopy(&uLocal_625, {__LIB_0__::func_486()}, 4);
			if (MISC::ARE_STRINGS_EQUAL(&uLocal_625, "T1M1_CUT1"))
			{
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
					if (__LIB_0__::func_76(Local_281.f_0, PLAYER::PLAYER_PED_ID(), 1) > 40f)
					{
						__LIB_0__::func_429();
					}
				}
			}
		}
	}
	if (func_95("T1M1_CUT1"))
	{
		if (!func_95("T1M1_WADEBO"))
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (__LIB_0__::func_76(Local_281.f_0, PLAYER::PLAYER_PED_ID(), 1) < 30f)
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_WADEBO", 8, 0, 0, 0))
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 3f, 4);
								func_94("T1M1_WADEBO", 1);
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_370)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
		func_552(3, "Drive to the trailer", 0, 0, 0, 1);
		__LIB_0__::func_753();
		func_551();
		func_547();
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), true);
		func_546();
		func_708();
		func_541(6);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_468))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_468);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_285.f_0, 0f);
		}
		STREAMING::REMOVE_IPL("TRV1_Trail_end");
		STREAMING::REQUEST_IPL("TRV1_Trail_start");
		STREAMING::REQUEST_MODEL(joaat("proptrailer"));
		STREAMING::REQUEST_MODEL(__LIB_0__::func_493(38));
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_281.f_0);
		}
		iLocal_418 = 1;
		iLocal_465 = 0;
		iLocal_419 = 0;
		iLocal_370 = 1;
		iLocal_420 = 1;
		iLocal_624 = 0;
		iLocal_630 = 0;
		iLocal_631 = 0;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		bLocal_212 = true;
		iLocal_237 = 0;
		iLocal_217 = 0;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			VEHICLE::SET_VEHICLE_STRONG(Local_285.f_0, false);
		}
		if (!iLocal_398)
		{
			func_545();
			iLocal_398 = 1;
		}
		func_658(500);
	}
	else
	{
		switch (iLocal_465)
		{
			case 0:
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), true);
				PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), true);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.947666f, 3042.9753f, -17.546822f) - Vector(10f, 20f, 20f), Vector(46.947666f, 3042.9753f, -17.546822f) + Vector(10f, 20f, 20f), false, true);
				MISC::CLEAR_AREA(-17.546822f, 3042.9753f, 46.947666f, 40f, true, false, false, false);
				if (HUD::DOES_BLIP_EXIST(Local_281.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_281.f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_280.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_280.f_1));
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(1, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(2, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(3, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(4, "trevone");
				VEHICLE::REMOVE_VEHICLE_RECORDING(200, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(201, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(202, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(203, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(204, "trev1chasedw");
				VEHICLE::REMOVE_VEHICLE_RECORDING(205, "trev1chasedw");
				if (iLocal_363 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, false);
					}
					if (iLocal_237)
					{
						STREAMING::REMOVE_IPL("TRV1_Trail_end");
						STREAMING::REQUEST_IPL("TRV1_Trail_start");
						MISC::SET_TIME_SCALE(1f);
						iLocal_207 = 0;
						HUD::SET_RADAR_ZOOM(0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
						}
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
						MISC::SET_TIME_SCALE(1f);
						iLocal_344 = 0;
						STREAMING::REQUEST_MODEL(__LIB_0__::func_493(38));
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::REQUEST_ANIM_DICT("misstrevor1trv_1_mcs_2");
						iVar0 = 0;
						while (iVar0 < Local_276.f_0)
						{
							if (HUD::DOES_BLIP_EXIST(Local_276[iVar0 /*34*/].f_33))
							{
								HUD::REMOVE_BLIP(&(Local_276[iVar0 /*34*/].f_33));
							}
							iVar0++;
						}
						iLocal_392 = 0;
						iLocal_465++;
					}
					else if (!iLocal_217)
					{
						__LIB_0__::func_638();
						if (!__LIB_13__::func_755(&Local_297, 1))
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DZA", 8, 0, 0, 0))
							{
								iLocal_217 = 1;
							}
						}
					}
					else if (!iLocal_237)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
							{
								if (!__LIB_13__::func_755(&Local_297, 2))
								{
									func_676("TRV_GT11", 7500);
									if (!HUD::DOES_BLIP_EXIST(Local_297.f_0))
									{
										Local_297.f_0 = __LIB_0__::func_639(Local_285.f_0, 0, 0);
									}
									iLocal_237 = 1;
								}
							}
							else
							{
								iLocal_237 = 1;
							}
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(Local_281.f_0))
					{
						ENTITY::SET_ENTITY_LOD_DIST(Local_281.f_0, 80);
					}
					if (!func_95("TRV1_DRIVE_TRAILER_RT"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_DRIVE_TRAILER_RT"))
						{
							func_94("TRV1_DRIVE_TRAILER_RT", 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					}
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), true);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), true);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), true);
					PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), true);
					func_658(500);
					HUD::SET_RADAR_ZOOM(0);
					iLocal_375 = 0;
					func_94("WADE LEAVE", 1);
					iLocal_465 = 6;
				}
				break;
			case 1:
				STREAMING::REQUEST_ANIM_DICT("misstrevor1trv_1_mcs_2");
				if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1trv_1_mcs_2"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
							{
								if (!PED::IS_PED_INJURED(Local_281.f_0))
								{
									STREAMING::REQUEST_MODEL(__LIB_0__::func_493(38));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_01"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_Lost_02"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gburrito"));
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rebel"));
									if (HUD::DOES_BLIP_EXIST(Local_281.f_1))
									{
										HUD::REMOVE_BLIP(&(Local_281.f_1));
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
								}
								STREAMING::REQUEST_MODEL(__LIB_0__::func_493(38));
								iLocal_465++;
							}
							else if (!iLocal_392)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
								{
									if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_285.f_0, 1) < 50f)
									{
										if (!ENTITY::IS_ENTITY_OCCLUDED(Local_285.f_0))
										{
											if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
											{
												if ((ENTITY::IS_ENTITY_ON_SCREEN(Local_281.f_0) || ENTITY::IS_ENTITY_ON_SCREEN(Local_280.f_0)) || ENTITY::IS_ENTITY_ON_SCREEN(Local_285.f_0))
												{
													__LIB_0__::func_638();
													HUD::CLEAR_PRINTS();
													if (!__LIB_13__::func_755(&Local_297, 1))
													{
														if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EEA", 7, 0, 0, 0))
														{
															if (!PED::IS_PED_INJURED(Local_281.f_0))
															{
																if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
																{
																	TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
																	if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_281.f_0, Local_285.f_0, 1, false, false))
																	{
																		TASK::TASK_ENTER_VEHICLE(0, Local_285.f_0, 240000, 1, 2f, 1, 0);
																	}
																	else
																	{
																		TASK::TASK_ENTER_VEHICLE(0, Local_285.f_0, 240000, 2, 2f, 1, 0);
																	}
																	TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
																	TASK::TASK_PERFORM_SEQUENCE(Local_281.f_0, iLocal_469);
																	TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
																	PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
																}
															}
															if (!PED::IS_PED_INJURED(Local_280.f_0))
															{
																if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
																{
																	TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
																	TASK::TASK_PAUSE(0, 800);
																	TASK::TASK_ENTER_VEHICLE(0, Local_285.f_0, 240000, 0, 2f, 1, 0);
																	TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
																	TASK::TASK_PERFORM_SEQUENCE(Local_280.f_0, iLocal_469);
																	TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
																	PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
																}
															}
															iLocal_392 = 1;
														}
													}
												}
												else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
												{
													__LIB_0__::func_638();
													HUD::CLEAR_PRINTS();
													if (!__LIB_13__::func_755(&Local_297, 1))
													{
														if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_EEA", 7, 0, 0, 0))
														{
															if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_285.f_0, 1) > 5f)
															{
																if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
																{
																	PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
																}
																PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
																if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
																{
																	PED::SET_PED_INTO_VEHICLE(Local_281.f_0, Local_285.f_0, 1);
																}
																PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
																iLocal_392 = 1;
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
					}
				}
				break;
			case 2:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
						PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
						PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
						TASK::TASK_LOOK_AT_ENTITY(Local_280.f_0, PLAYER::PLAYER_PED_ID(), 8000, 2048, 2);
						if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_281.f_0, Local_285.f_0, 1, false, false))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_281.f_0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_281.f_0, false, false);
							iLocal_336 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_336, Local_285.f_0, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_281.f_0, Local_285.f_0, false);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_281.f_0, iLocal_336, "misstrevor1trv_1_mcs_2", "wait_enter_wade", 1000f, -8f, 4, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_336, false);
						}
						iLocal_388 = 1;
						iLocal_465++;
					}
				}
				break;
			case 3:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_285.f_0, 30f, 30f, 30f, false, true, 0))
					{
						HUD::CLEAR_PRINTS();
						iLocal_465++;
					}
					else if (iLocal_388 == 1)
					{
					}
					else if (iLocal_388 == 0)
					{
						if (__LIB_0__::func_611(&iLocal_354, 16000))
						{
							iLocal_388 = 1;
						}
					}
				}
				break;
			case 4:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
						if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(Local_281.f_0, Local_285.f_0, 1, false, false) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_285.f_0))
						{
							iLocal_336 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_336, Local_285.f_0, -1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_281.f_0, Local_285.f_0, false);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_281.f_0, iLocal_336, "misstrevor1trv_1_mcs_2", "jump_out_wade", 8f, -4f, 5, 17, 1000f, 0);
						}
						else
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(Local_281.f_0, 0, 4194304);
						}
						func_94("WADE LEAVE", 1);
						iLocal_465++;
					}
				}
				break;
			case 5:
				if (!func_95("TRV1_TRUCK"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_TRUCK"))
					{
						func_94("TRV1_TRUCK", 1);
					}
				}
				if (!func_95("T1M1_CUT1"))
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "WADE", 0, 1);
						__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CUT1", 7, 0, 0, 0))
						{
							func_94("T1M1_CUT1", 1);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_INJURED(Local_281.f_0))
					{
						if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_336))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_336) > 0.84f || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
								{
									if (!PED::IS_PED_INJURED(Local_280.f_0))
									{
										if (!PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
										{
											PED::SET_PED_AS_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495());
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, true);
										}
									}
									if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_280.f_0);
										PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
										PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
									}
									PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
									TASK::TASK_CLEAR_LOOK_AT(Local_280.f_0);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
									{
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
										ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_281.f_0, Local_285.f_0, true);
										iLocal_465++;
									}
								}
							}
							else if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
							{
								if (!PED::IS_PED_INJURED(Local_280.f_0))
								{
									if (!PED::IS_PED_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495()))
									{
										PED::SET_PED_AS_GROUP_MEMBER(Local_280.f_0, __LIB_0__::func_495());
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, true);
									}
								}
								if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_280.f_0);
									PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
									PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
								}
								PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
								TASK::TASK_CLEAR_LOOK_AT(Local_280.f_0);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
								{
									VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
									iLocal_465++;
								}
							}
						}
					}
				}
				break;
			case 6:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_336))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_336) < 0.84f || PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, true))
					{
						if (HUD::DOES_BLIP_EXIST(Local_297.f_0))
						{
							HUD::REMOVE_BLIP(&Local_297);
						}
					}
					else if (!HUD::DOES_BLIP_EXIST(Local_297.f_0))
					{
						Local_297.f_0 = __LIB_0__::func_639(Local_285.f_0, 0, 0);
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
					{
						if (HUD::DOES_BLIP_EXIST(Local_297.f_0))
						{
							HUD::REMOVE_BLIP(&Local_297);
						}
						__LIB_13__::func_815(&Local_297, 1, 0);
						iLocal_375 = 0;
						iLocal_465++;
					}
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 118, true);
					}
				}
				break;
			case 7:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.7649f, 2998.757f, 40.0025f, 100f, 100f, 20f, false, true, 0))
				{
					if (func_128(11, -40.6843f, 3103.7644f, 24.8673f, 160.9775f, 0))
					{
						if (!func_95("SETUP ORTEGA"))
						{
							if (!PED::IS_PED_INJURED(Local_280.f_0))
							{
								PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 118, true);
							}
							if (!PED::IS_PED_INJURED(Local_283.f_0))
							{
								__LIB_0__::func_222(&Local_526, 7, Local_283.f_0, "ORTEGA", 0, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_283.f_0, true);
								ENTITY::SET_ENTITY_VISIBLE(Local_283.f_0, false, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_283.f_0, true);
								STREAMING::REQUEST_ANIM_DICT("misstrevor1");
								func_94("SETUP ORTEGA", 1);
							}
						}
					}
				}
				else if (func_95("SETUP ORTEGA"))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.7649f, 2998.757f, 40.0025f, 150f, 150f, 20f, false, true, 0))
					{
						PED::DELETE_PED(&Local_283);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ortega"));
						__LIB_0__::func_221(&Local_526, 7);
						func_94("SETUP ORTEGA", 0);
					}
				}
				if (func_618(&Local_297, -8.5212f, 3010.0645f, 39.6299f, 0.1f, 0.1f, 2f, 1, Local_280.f_0, Local_285.f_0, "TRV_GT4", "", "", Local_542.f_111, 0, 1, 1, -1))
				{
				}
				else
				{
					iLocal_363 = 0;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_285.f_0, true);
					}
					if (HUD::DOES_BLIP_EXIST(iLocal_471))
					{
						HUD::REMOVE_BLIP(&iLocal_471);
					}
					if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -14.7649f, 2998.757f, 40.0025f, 45f, 45f, 6.6875f, false, true, 0))
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_471))
							{
								HUD::REMOVE_BLIP(&iLocal_471);
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, true);
							}
							iLocal_465++;
							VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
						}
						if (!__LIB_13__::func_755(&Local_297, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_16__::func_929() == 0)
								{
									if (iLocal_375 == 0)
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_ORTCHAT", 7, 0, 0, 0))
										{
											iLocal_375 = 1;
										}
									}
								}
								else if (iLocal_375 == 0)
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_ORTCHA2", 7, 0, 0, 0))
									{
										iLocal_375 = 1;
									}
								}
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, true);
					}
					if (iLocal_375 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
						{
							if (__LIB_0__::func_568())
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_620(0);
							}
						}
						else if (!__LIB_0__::func_568())
						{
							if (__LIB_0__::func_501(Local_542.f_111, 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							__LIB_0__::func_620(1);
						}
					}
				}
				break;
			case 8:
				if (func_618(&Local_297, -8.5212f, 3010.0645f, 39.6299f, 0.1f, 0.1f, 2f, 1, Local_280.f_0, Local_285.f_0, "", "", Local_542.f_118, Local_542.f_111, 0, 0, 1, -1))
				{
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
						{
							if (((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, 7.509832f, 3010.0178f, 39.36629f, -12.365745f, 3050.3418f, 44.15579f, 11.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, -48.968388f, 3035.861f, 38.892326f, -12.365745f, 3050.3418f, 44.15579f, 11.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, -33.545883f, 2974.621f, 38.427723f, -46.36054f, 3038.442f, 44.538128f, 11.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, -48.85867f, 2977.3044f, 40.54283f, 15.350081f, 3010.1387f, 50.7527f, 11.75f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, -17.563643f, 3013.6147f, 52.53856f, -48.49613f, 3098.4846f, 15.1455f, 47f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Local_285.f_0, -14.7649f, 2998.757f, 40.0025f, 10f, 10f, 10f, false, true, 0)) || __LIB_0__::func_76(iLocal_468, Local_285.f_0, 1) < 20f) || MISC::GET_DISTANCE_BETWEEN_COORDS(0.75f, 3023.01f, 39.73f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 4f)
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0))
								{
									STREAMING::REQUEST_ANIM_DICT("misstrevor1");
									STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
									if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1") && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_7"))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 4f, 4);
										if (HUD::DOES_BLIP_EXIST(iLocal_471))
										{
											HUD::REMOVE_BLIP(&iLocal_471);
										}
										if (HUD::DOES_BLIP_EXIST(iLocal_472))
										{
											HUD::REMOVE_BLIP(&iLocal_472);
										}
										if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
										{
											HUD::REMOVE_BLIP(&(Local_297.f_5));
										}
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
										{
											ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, false);
										}
										VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_468, false);
										HUD::SET_RADAR_ZOOM(200);
										STREAMING::REQUEST_PTFX_ASSET();
										ENTITY::SET_ENTITY_PROOFS(Local_285.f_0, false, false, true, true, true, false, false, false);
										__LIB_0__::func_638();
										__LIB_0__::func_222(&Local_526, 7, Local_283.f_0, "ORTEGA", 0, 1);
										STREAMING::REQUEST_ANIM_DICT("misstrevor1");
										iLocal_465++;
									}
									else
									{
										STREAMING::REQUEST_ANIM_DICT("misstrevor1");
									}
								}
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, true);
					}
					if (iLocal_375 == 1)
					{
						if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
						{
							if (__LIB_0__::func_568())
							{
								HUD::CLEAR_PRINTS();
								__LIB_0__::func_620(0);
							}
						}
						else if (!__LIB_0__::func_568())
						{
							if (__LIB_0__::func_501(Local_542.f_111, 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							__LIB_0__::func_620(1);
						}
					}
				}
				break;
			case 9:
				CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(true);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "trev1") && STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_TRAILER"))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_285.f_0))
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_285.f_0, 1, "trev1", true);
							}
							else
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_285.f_0, 5900f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
								{
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 0);
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 1);
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 4);
									VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 5);
									if (FIRE::IS_ENTITY_ON_FIRE(Local_285.f_0))
									{
										FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_285.f_0, false), 20f);
										VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_285.f_0, 1000f);
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_285.f_0, 1000f);
									}
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
								{
									MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(iLocal_468, false), 100f, false, false, true, true, true, false, 0);
								}
								if (!PED::IS_PED_INJURED(Local_280.f_0))
								{
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_280.f_0, false);
								}
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
								}
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_468, false);
								}
								HUD::LOCK_MINIMAP_ANGLE(29);
								MISC::CLEAR_AREA(-16.19f, 3016.65f, 40.51f, 100f, true, false, false, false);
								__LIB_0__::func_963(1, 0, 1, 0);
								func_707(1, 1);
								__LIB_17__::func_156();
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
								__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
								CAM::PLAY_CAM_ANIM(iLocal_474, "ort_trailer_cam01", "misstrevor1", -30.163f, 3024.143f, 39.913f, 0f, 0f, -133.5f, false, 2);
								CAM::SET_CAM_ACTIVE(iLocal_474, true);
								CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
								iLocal_629 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
								{
									if (!PED::IS_PED_INJURED(Local_283.f_0))
									{
										ENTITY::SET_ENTITY_VISIBLE(Local_283.f_0, true, false);
										ENTITY::FREEZE_ENTITY_POSITION(Local_283.f_0, false);
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_283.f_0);
										iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "ortega_01_drinking_idle_intro", 1000f, -8f, 0, 0, 1000f, 0);
										PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_250, 0.9f);
										PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
									}
								}
								SYSTEM::SETTIMERB(0);
								iLocal_375 = 0;
								__LIB_0__::func_638();
								AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_TRAILER");
								AUDIO::START_AUDIO_SCENE("TREVOR_1_ARRIVE_AT_TRAILER");
								iLocal_223 = 0;
								iLocal_465++;
							}
						}
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(1, "trev1");
					}
				}
				break;
			case 10:
				if (!iLocal_223)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
								{
									iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_02_Trevor_Arrival_Reaction", 8f, -8f, 0, 0, 1000f, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
									iLocal_223 = 1;
								}
							}
						}
					}
				}
				if (!func_95("T1M1_LINE"))
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_LINE", 7, 0, 0, 0))
					{
						func_94("T1M1_LINE", 1);
					}
				}
				CAM::SET_CAM_PARAMS(iLocal_629, CAM::GET_CAM_COORD(iLocal_474), CAM::GET_CAM_ROT(iLocal_474, 2), CAM::GET_CAM_FOV(iLocal_474), 0, 1, 1, 2);
				CAM::SHAKE_CAM(iLocal_629, "HAND_SHAKE", 0.6f);
				if (CAM::GET_CAM_ANIM_CURRENT_PHASE(iLocal_474) > 0.99f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
						}
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (!__LIB_1__::func_606(Local_280.f_0, Local_285.f_0, 0))
							{
								PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
							}
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!__LIB_1__::func_606(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1);
							}
						}
					}
					iLocal_226 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
					CAM::ATTACH_CAM_TO_ENTITY(iLocal_226, Local_285.f_0, 0.5784f, -8.406f, 0.9975f, true);
					CAM::POINT_CAM_AT_ENTITY(iLocal_226, Local_285.f_0, 0.2264f, -5.4394f, 0.7215f, true);
					CAM::SET_CAM_FOV(iLocal_226, 27.386f);
					CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_226, 0f);
					CAM::SET_CAM_ACTIVE(iLocal_226, true);
					CAM::SHAKE_CAM(iLocal_226, "HAND_SHAKE", 0.6f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_226, iLocal_629, 1500, 1, 1);
					iLocal_331 = MISC::GET_GAME_TIMER();
					iLocal_465++;
				}
				break;
			case 11:
				if (!iLocal_223)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
								{
									iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_02_Trevor_Arrival_Reaction", 8f, -8f, 0, 0, 1000f, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
									iLocal_223 = 1;
								}
							}
						}
					}
				}
				else if (!func_95("SHOUT IDLE"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
					{
						if (!PED::IS_PED_INJURED(Local_283.f_0))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_250))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_250) > 0.99f)
								{
									iLocal_250 = PED::CREATE_SYNCHRONIZED_SCENE(-0.45f, -3.2f, 0.35f, 0f, 0f, 0f, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(Local_283.f_0, iLocal_250, "misstrevor1ig_7", "Ortega_03_Shouting_Idle", 8f, -8f, 0, 0, 1000f, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_250, iLocal_468, -1);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_250, true);
									func_94("SHOUT IDLE", 1);
								}
							}
						}
					}
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				if (__LIB_0__::func_611(&iLocal_331, 2500))
				{
					func_705(0, 0, 0, 0, 0);
					__LIB_16__::func_884();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_BURNOUT(Local_285.f_0, true);
					}
					__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
					__LIB_0__::func_671(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_428 = 1;
					iLocal_331 = MISC::GET_GAME_TIMER();
					iLocal_375 = 0;
					iLocal_381 = 0;
					iLocal_382 = 0;
					iLocal_363 = 0;
					iLocal_465++;
				}
				break;
		}
		if (iLocal_465 >= 12)
		{
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 4);
			if (HUD::DOES_BLIP_EXIST(iLocal_472))
			{
				HUD::REMOVE_BLIP(&iLocal_472);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_471))
			{
				HUD::REMOVE_BLIP(&iLocal_471);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_473))
			{
				HUD::REMOVE_BLIP(&iLocal_473);
			}
			iLocal_370 = 0;
			iLocal_465 = 0;
			return 1;
		}
	}
	return 0;
}

void func_705(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x8F5A3
{
	if (iLocal_541)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		CAM::SET_WIDESCREEN_BORDERS(false, 500);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (bParam4)
			{
				if (CAM::DOES_CAM_EXIST(iLocal_474))
				{
					CAM::SET_CAM_ACTIVE(iLocal_474, false);
					CAM::DESTROY_CAM(iLocal_474, false);
				}
				CAM::RENDER_SCRIPT_CAMS(false, bParam1, iParam2, true, false, 0);
				CAM::STOP_GAMEPLAY_CAM_SHAKING(bParam4);
			}
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
			if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam3, 0);
			__LIB_1__::func_373(0, 1, 0, 0, 0, 0, 0);
			iLocal_541 = 0;
		}
	}
}

void func_707(bool bParam0, bool bParam1)//Position - 0x8F650
{
	if (!iLocal_541)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!bParam1)
			{
				iLocal_474 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				CAM::SET_CAM_COORD(iLocal_474, 1f, 1f, 1f);
			}
			else
			{
				iLocal_474 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
				CAM::SET_CAM_COORD(iLocal_474, 1f, 1f, 1f);
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
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
			__LIB_1__::func_373(1, 1, 0, 0, 0, 0, 0);
		}
		SYSTEM::SETTIMERB(0);
		iLocal_541 = 1;
	}
}

void func_708()//Position - 0x8F6EE
{
	int iVar0;
	iVar0 = (iLocal_227 - 1);
	while (iVar0 > -1)
	{
		iLocal_227[iVar0] = 0;
		iVar0 = (iVar0 - 1);
	}
}

void func_710()//Position - 0x8F738
{
	int iVar0;
	if (!Local_274[0 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_274[0 /*34*/]))
		{
			func_713(&(Local_274[0 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_274[0 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_274[0 /*34*/], true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274[0 /*34*/], true);
			func_712(1);
			TASK::TASK_SMART_FLEE_PED(Local_274[0 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			Local_274[0 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_274[0 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274[0 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_274[0 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_274[0 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_274[0 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_274[0 /*34*/].f_33));
				}
			}
			else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_274[0 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_274[0 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_274[0 /*34*/]))
				{
					PED::DELETE_PED(&(Local_274[0 /*34*/]));
				}
			}
		}
	}
	if (!Local_274[1 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_274[1 /*34*/]))
		{
			func_713(&(Local_274[1 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_274[1 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_274[1 /*34*/], true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274[1 /*34*/], true);
			func_712(1);
			TASK::TASK_SMART_FLEE_PED(Local_274[1 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			Local_274[1 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_274[1 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274[1 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_274[1 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_274[1 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_274[1 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_274[1 /*34*/].f_33));
				}
			}
			else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_274[1 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_274[1 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_274[1 /*34*/]))
				{
					PED::DELETE_PED(&(Local_274[1 /*34*/]));
				}
			}
		}
	}
	if (!Local_274[2 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_274[2 /*34*/]))
		{
			func_713(&(Local_274[2 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_274[2 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_274[2 /*34*/], true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274[2 /*34*/], true);
			func_712(1);
			TASK::TASK_SMART_FLEE_PED(Local_274[2 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			Local_274[2 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_274[2 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274[2 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_274[2 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_274[2 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_274[2 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_274[2 /*34*/].f_33));
				}
			}
			else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_274[2 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_274[2 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_274[2 /*34*/]))
				{
					PED::DELETE_PED(&(Local_274[2 /*34*/]));
				}
			}
		}
	}
	if (!Local_274[3 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_274[3 /*34*/]))
		{
			func_713(&(Local_274[3 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_274[3 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_274[3 /*34*/], true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274[3 /*34*/], true);
			func_712(1);
			TASK::TASK_SMART_FLEE_PED(Local_274[3 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			Local_274[3 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_274[3 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274[3 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_274[3 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_274[3 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_274[3 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_274[3 /*34*/].f_33));
				}
			}
			else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_274[3 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_274[3 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_274[3 /*34*/]))
				{
					PED::DELETE_PED(&(Local_274[3 /*34*/]));
				}
			}
		}
	}
	if (!Local_274[4 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_274[4 /*34*/]))
		{
			func_713(&(Local_274[4 /*34*/]), 1);
			if (!ENTITY::IS_ENTITY_VISIBLE(Local_274[4 /*34*/]))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_274[4 /*34*/], true, false);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274[4 /*34*/], true);
			func_712(1);
			TASK::TASK_SMART_FLEE_PED(Local_274[4 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			Local_274[4 /*34*/].f_1 = 1;
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_274[4 /*34*/]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_274[4 /*34*/], 2f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_274[4 /*34*/]))
		{
			if (PED::IS_PED_INJURED(Local_274[4 /*34*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_274[4 /*34*/].f_33))
				{
					HUD::REMOVE_BLIP(&(Local_274[4 /*34*/].f_33));
				}
			}
			else if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_274[4 /*34*/], 1) > 150f)
			{
				HUD::REMOVE_BLIP(&(Local_274[4 /*34*/].f_33));
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_274[4 /*34*/]))
				{
					PED::DELETE_PED(&(Local_274[4 /*34*/]));
				}
			}
		}
	}
	if (Local_274[0 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_274[0 /*34*/]))
		{
			__LIB_0__::func_640(Local_274[0 /*34*/], "FALL_BACK", 18);
			Local_274[0 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			Local_274[0 /*34*/].f_29 = 1;
		}
	}
	else if (__LIB_0__::func_611(&(Local_274[0 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_274[0 /*34*/].f_29 = 0;
	}
	if (Local_274[1 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_274[1 /*34*/]))
		{
			__LIB_0__::func_640(Local_274[1 /*34*/], "FALL_BACK", 18);
			Local_274[1 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			func_94("GANG 1 FALL_BACK", 1);
			Local_274[1 /*34*/].f_29 = 1;
		}
	}
	else if (__LIB_0__::func_611(&(Local_274[1 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_274[1 /*34*/].f_29 = 0;
	}
	if (Local_274[2 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_274[2 /*34*/]))
		{
			__LIB_0__::func_640(Local_274[2 /*34*/], "FALL_BACK", 18);
			Local_274[2 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			func_94("GANG 2 FALL_BACK", 1);
			Local_274[2 /*34*/].f_29 = 1;
		}
	}
	else if (__LIB_0__::func_611(&(Local_274[2 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_274[2 /*34*/].f_29 = 0;
	}
	if (Local_274[3 /*34*/].f_29 == 0)
	{
		if (!PED::IS_PED_INJURED(Local_274[3 /*34*/]))
		{
			__LIB_0__::func_640(Local_274[3 /*34*/], "FALL_BACK", 18);
			Local_274[3 /*34*/].f_9 = MISC::GET_GAME_TIMER();
			func_94("GANG 3 FALL_BACK", 1);
			Local_274[3 /*34*/].f_29 = 1;
		}
	}
	else if (__LIB_0__::func_611(&(Local_274[3 /*34*/].f_9), MISC::GET_RANDOM_INT_IN_RANGE(6000, 14000)))
	{
		Local_274[3 /*34*/].f_29 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_274[iVar0 /*34*/]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_275[iVar0]))
		{
			uLocal_275[iVar0] = Local_274[iVar0 /*34*/];
		}
		iVar0++;
	}
	if (((ENTITY::DOES_ENTITY_EXIST(uLocal_275[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_275[1])) && ENTITY::DOES_ENTITY_EXIST(uLocal_275[2])) && ENTITY::DOES_ENTITY_EXIST(uLocal_275[3]))
	{
		if (((PED::IS_PED_INJURED(uLocal_275[0]) && PED::IS_PED_INJURED(uLocal_275[1])) && PED::IS_PED_INJURED(uLocal_275[2])) && PED::IS_PED_INJURED(uLocal_275[3]))
		{
			__LIB_0__::func_630(486);
		}
	}
	if ((((!HUD::DOES_BLIP_EXIST(Local_274[0 /*34*/].f_33) && !HUD::DOES_BLIP_EXIST(Local_274[1 /*34*/].f_33)) && !HUD::DOES_BLIP_EXIST(Local_274[2 /*34*/].f_33)) && !HUD::DOES_BLIP_EXIST(Local_274[3 /*34*/].f_33)) && !HUD::DOES_BLIP_EXIST(Local_274[4 /*34*/].f_33))
	{
	}
}

void func_712(bool bParam0)//Position - 0x8FF66
{
	bLocal_61 = bParam0;
}

void func_713(var uParam0, bool bParam1)//Position - 0x8FF72
{
	uParam0->f_30 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_18 = 0;
	uParam0->f_26 = 0;
	uParam0->f_9 = 0;
	uParam0->f_6 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (bParam1)
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				TASK::CLEAR_PED_TASKS(*uParam0);
			}
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, false);
	}
}

void func_714()//Position - 0x8FFD7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_276[0 /*34*/]))
	{
		if (!PED::IS_PED_INJURED(Local_276[0 /*34*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_276[0 /*34*/]))
			{
				PED::DELETE_PED(&(Local_276[0 /*34*/]));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_276[1 /*34*/]))
	{
		if (!PED::IS_PED_INJURED(Local_276[1 /*34*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_276[1 /*34*/]))
			{
				PED::DELETE_PED(&(Local_276[1 /*34*/]));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_276[2 /*34*/]))
	{
		if (!PED::IS_PED_INJURED(Local_276[2 /*34*/]))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_276[2 /*34*/]))
			{
				PED::DELETE_PED(&(Local_276[2 /*34*/]));
			}
		}
	}
}

void func_715()//Position - 0x9007B
{
	if (iLocal_624 == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gascyl_02a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gascyl_02a"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Rottweiler"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_542.f_7);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_542.f_8);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_542.f_4);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_542.f_0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_542.f_5);
		VEHICLE::REMOVE_VEHICLE_RECORDING(200, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(201, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(202, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(203, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(204, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(205, "trev1chasedw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(11, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(12, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(13, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(14, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(15, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(16, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(17, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(18, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(19, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(20, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(21, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(22, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(23, "Trevor1dw");
		VEHICLE::REMOVE_VEHICLE_RECORDING(2, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(3, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(4, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(5, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(6, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(7, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(8, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(9, "t1b");
		VEHICLE::REMOVE_VEHICLE_RECORDING(10, "t1b");
		VEHICLE::REMOVE_VEHICLE_ASSET(joaat("hexer"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("gburrito"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rebel"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_gascyl_01a"));
		iLocal_624 = 1;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(66.0912f, 3632.1165f, 38.61f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 120f)
	{
		iLocal_462 = 0;
		while (iLocal_462 < Local_273.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_273[iLocal_462 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_273[iLocal_462 /*34*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_273[iLocal_462 /*34*/]));
				}
			}
			iLocal_462++;
		}
		iLocal_462 = 0;
		while (iLocal_462 < Local_276.f_0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_276[iLocal_462 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_276[iLocal_462 /*34*/]))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_276[iLocal_462 /*34*/]));
				}
			}
			iLocal_462++;
		}
		iLocal_462 = 0;
		while (iLocal_462 < Local_284.f_0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[iLocal_462 /*12*/], false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_284[iLocal_462 /*12*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 120f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[iLocal_462 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[iLocal_462 /*12*/]));
					}
				}
			}
			iLocal_462++;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_290.f_0))
			{
				VEHICLE::DELETE_VEHICLE(&Local_290);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_295[0 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_295[0 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_295[1 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_295[1 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[5 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[5 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[5 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[6 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[6 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[6 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[7 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[7 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[7 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[15 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[15 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[15 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[16 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[16 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[16 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[17 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[17 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[17 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[20 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[20 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[20 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[21 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[21 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[22 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[22 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[24 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[24 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[24 /*12*/]));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[25 /*12*/], false))
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[25 /*12*/]))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_284[25 /*12*/]));
			}
		}
		iLocal_462 = 0;
		while (iLocal_462 < iLocal_431)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[iLocal_462]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_431[iLocal_462]));
			}
			iLocal_462++;
		}
	}
}

void func_716()//Position - 0x905C0
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (Local_273.f_0 - 1))
	{
		if (!PED::IS_PED_INJURED(Local_273[iVar0 /*34*/]))
		{
			if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_273[iVar0 /*34*/]) < 100f)
			{
				func_718(Local_273[iVar0 /*34*/], &(Local_273[iVar0 /*34*/].f_10));
			}
			else
			{
				__LIB_0__::func_621(&(Local_273[iVar0 /*34*/].f_10));
			}
		}
		else
		{
			__LIB_0__::func_621(&(Local_273[iVar0 /*34*/].f_10));
		}
		iVar0++;
	}
}

void func_718(int iParam0, int* iParam1)//Position - 0x906AB
{
	bool bVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_BLIP_EXIST(*iParam1))
		{
			*iParam1 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
			HUD::SET_BLIP_SCALE(*iParam1, __LIB_0__::func_373(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
			HUD::SET_BLIP_PRIORITY(*iParam1, __LIB_12__::func_587(8));
			HUD::SHOW_HEIGHT_ON_BLIP(*iParam1, true);
			HUD::SET_BLIP_ALPHA(*iParam1, 255);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "BLIP_270" /* GXT: Enemy */);
			MISC::CLEAR_BIT(&(iParam1->f_6), 0);
			MISC::CLEAR_BIT(&(iParam1->f_6), 1);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iParam1->f_3 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iParam1->f_5 = MISC::GET_GAME_TIMER();
			}
		}
		else if (BitTest(iParam1->f_6, 0))
		{
			HUD::SET_BLIP_COLOUR(*iParam1, 1);
			HUD::SET_BLIP_ALPHA(*iParam1, 255);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "BLIP_270" /* GXT: Enemy */);
			MISC::CLEAR_BIT(&(iParam1->f_6), 0);
			MISC::CLEAR_BIT(&(iParam1->f_6), 1);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iParam1->f_3 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iParam1->f_5 = MISC::GET_GAME_TIMER();
			}
		}
		else if (!BitTest(iParam1->f_6, 1))
		{
			HUD::SET_BLIP_COLOUR(*iParam1, 1);
			HUD::SET_BLIP_ALPHA(*iParam1, 255);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "BLIP_270" /* GXT: Enemy */);
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iParam1->f_3 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iParam1->f_5 = MISC::GET_GAME_TIMER();
			}
			MISC::CLEAR_BIT(&(iParam1->f_6), 0);
			MISC::SET_BIT(&(iParam1->f_6), 1);
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam1->f_3) > 1000)
				{
					bVar0 = true;
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iParam1->f_5) > 1000)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				switch (HUD::GET_BLIP_COLOUR(*iParam1))
				{
					case 1:
						HUD::SET_BLIP_COLOUR(*iParam1, 3);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "BLIP_270" /* GXT: Enemy */);
						break;
					case 3:
						HUD::SET_BLIP_COLOUR(*iParam1, 1);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, "BLIP_270" /* GXT: Enemy */);
						break;
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iParam1->f_3 = NETWORK::GET_NETWORK_TIME();
				}
				else
				{
					iParam1->f_5 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		__LIB_0__::func_621(iParam1);
	}
}

void func_721()//Position - 0x90933
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
	{
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(1834.3564f, 1442.5359f, 2189.5151f, 4781.1855f);
	}
	if (iLocal_393 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_281.f_0, 1) > 100f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_281.f_0))
					{
						if (__LIB_9__::func_694(PLAYER::PLAYER_PED_ID(), Local_281.f_0) > 200f)
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_281.f_0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_412))
								{
									VEHICLE::DELETE_VEHICLE(&iLocal_412);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("hexer"));
								}
								PED::DELETE_PED(&Local_281);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_363 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_412))
		{
			func_128(17, 0f, 0f, 0f, 0, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_336))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_336) < 0.95f)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
						{
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
							PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
						}
						else
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_285.f_0, false);
						}
					}
					else
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_281.f_0, -4f, true);
						ENTITY::DETACH_ENTITY(Local_281.f_0, true, true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_285.f_0, false);
					}
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_285.f_0, false);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (iLocal_465 > 5)
				{
					if (iLocal_393 == 0)
					{
						if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(1834.3564f, 1442.5359f, 2189.5151f, 4781.1855f))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_336))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_336) > 0.95f)
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_281.f_0, -4f, true);
									ENTITY::DETACH_ENTITY(Local_281.f_0, true, true);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
									if (func_95("WADE BIKE RIGHT"))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_412, false))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 41.2664f, 3615.5132f, 38.625f, 1f, -1, 0.25f, 0, 40000f);
											TASK::TASK_ENTER_VEHICLE(0, iLocal_412, -1, -1, 2f, 1, 0);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_412, 1982.7225f, 3831.4949f, 31.3972f, 30f, 0, joaat("hexer"), 788517, 20f, 1f);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
										}
										else
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.4167f, 40.613f, 1f, -1, 0.25f, 0, 40000f);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.1604f, 36.4223f, 2f, -1, 0.25f, 0, 40000f);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
										}
									}
									else if (func_95("WADE BIKE LEFT"))
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_412, false))
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 104.0991f, 3592.698f, 38.7392f, 1f, -1, 0.25f, 0, 40000f);
											TASK::TASK_ENTER_VEHICLE(0, iLocal_412, -1, -1, 2f, 1, 0);
											TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_412, 1982.7225f, 3831.4949f, 31.3972f, 30f, 0, joaat("hexer"), 788517, 20f, 1f);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
										}
										else
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.4167f, 40.613f, 1f, -1, 0.25f, 0, 40000f);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.1604f, 36.4223f, 2f, -1, 0.25f, 0, 40000f);
											TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
										}
									}
									else
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.4167f, 40.613f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.1604f, 36.4223f, 2f, -1, 0.25f, 0, 40000f);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
									}
									TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
									TASK::TASK_PERFORM_SEQUENCE(Local_281.f_0, iLocal_469);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
									PED::SET_PED_KEEP_TASK(Local_281.f_0, true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
									iLocal_393 = 1;
								}
							}
							else if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
							{
								TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
								if (func_95("WADE BIKE RIGHT"))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_412, false))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 41.2664f, 3615.5132f, 38.625f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_412, -1, -1, 2f, 1, 0);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_412, 1982.7225f, 3831.4949f, 31.3972f, 30f, 0, joaat("hexer"), 2048, 20f, 1f);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
									}
									else
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.4167f, 40.613f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.1604f, 36.4223f, 2f, -1, 0.25f, 0, 40000f);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
									}
								}
								else if (func_95("WADE BIKE LEFT"))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_412, false))
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 104.0991f, 3592.698f, 38.7392f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_ENTER_VEHICLE(0, iLocal_412, -1, -1, 2f, 1, 0);
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_412, 1982.7225f, 3831.4949f, 31.3972f, 30f, 0, joaat("hexer"), 2048, 20f, 1f);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
									}
									else
									{
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.4167f, 40.613f, 1f, -1, 0.25f, 0, 40000f);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.1604f, 36.4223f, 2f, -1, 0.25f, 0, 40000f);
										TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
									}
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -6.8398f, 3611.4167f, 40.613f, 1f, -1, 0.25f, 0, 40000f);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -229.3429f, 3884.1604f, 36.4223f, 2f, -1, 0.25f, 0, 40000f);
									TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 2000f, -1, false, false);
								}
								TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
								TASK::TASK_PERFORM_SEQUENCE(Local_281.f_0, iLocal_469);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
								PED::SET_PED_KEEP_TASK(Local_281.f_0, true);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
								iLocal_393 = 1;
							}
						}
					}
					else
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_281.f_0, PLAYER::PLAYER_PED_ID(), true))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_281.f_0, joaat("SCRIPT_TASK_SMART_FLEE_PED")) != 1)
							{
								ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_281.f_0, -4f, true);
								ENTITY::DETACH_ENTITY(Local_281.f_0, true, true);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, false);
								TASK::TASK_SMART_FLEE_PED(Local_281.f_0, PLAYER::PLAYER_PED_ID(), 2000f, -1, false, false);
							}
						}
						if (!func_95("WADE MUMBLE"))
						{
							__LIB_0__::func_709(Local_281.f_0, "T1M1_FNAA", "LOST1", 3);
							func_94("WADE MUMBLE", 1);
							iLocal_245 = MISC::GET_GAME_TIMER();
						}
						else if (__LIB_0__::func_611(&iLocal_245, 8000))
						{
							func_94("WADE MUMBLE", 0);
						}
					}
				}
			}
		}
	}
}

int func_722()//Position - 0x9105E
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<34> Var4[10];
	bool bVar5;
	float fVar6;
	bool bVar7;
	int iVar8;
	if (iLocal_619 == 0)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 211, false);
			}
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_281.f_0, 211, false);
			}
			iLocal_619 = 1;
		}
	}
	MISC::SET_INSTANCE_PRIORITY_HINT(1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_FOLLOW_VAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_FOLLOW_VAN");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS") && !AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_FOLLOW_VAN"))
	{
		if (!func_95("TREVOR_1_SHOOTOUT_START"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
			func_94("TREVOR_1_SHOOTOUT_START", 1);
		}
	}
	if (!func_95("TRV1_AT_CARAVAN"))
	{
		if (!PED::IS_PED_INJURED(Local_280.f_0) && !PED::IS_PED_INJURED(Local_281.f_0))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, true) && !PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, true))
			{
				AUDIO::PREPARE_MUSIC_EVENT("TRV1_AT_CARAVAN");
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_AT_CARAVAN"))
				{
					func_94("TRV1_AT_CARAVAN", 1);
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 72.50677f, 3597.1057f, 58.68276f, 75.93925f, 3772.75f, 25.818333f, 170f, false, true, 0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 67.07f, 3703.85f, 39.56f, true) > 125f)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_471))
			{
				__LIB_0__::func_638();
				if (!__LIB_0__::func_75() && !__LIB_13__::func_755(&Local_297, 1))
				{
					HUD::CLEAR_PRINTS();
					func_676("TRV_RETTP", 7500);
					iLocal_471 = __LIB_0__::func_488(67.07f, 3703.85f, 39.56f, 0);
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 67.07f, 3703.85f, 39.56f, true) > 150f)
			{
				func_37(14);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_471))
		{
			HUD::REMOVE_BLIP(&iLocal_471);
		}
		if (__LIB_0__::func_501("TRV_RETTP", 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (PED::IS_PED_INJURED(Local_269[3 /*65*/]))
	{
		if (HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_269[3 /*65*/].f_1));
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_269[3 /*65*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_269[3 /*65*/].f_16);
	}
	if (PED::IS_PED_INJURED(Local_269[2 /*65*/]))
	{
		if (HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_269[2 /*65*/].f_1));
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_269[2 /*65*/]));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_269[2 /*65*/].f_16);
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_341) > 200)
	{
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, false, true, &uVar0, false, false, -1);
		iLocal_341 = MISC::GET_GAME_TIMER();
	}
	func_821(&Local_273, 0);
	func_821(&Local_276, 0);
	func_820();
	func_819();
	func_816();
	func_698();
	func_814();
	func_812();
	func_811();
	if (iLocal_370)
	{
		func_810();
	}
	func_809();
	func_808();
	if (iLocal_213 == 1)
	{
		if (__LIB_0__::func_611(&iLocal_618, 60000))
		{
			func_807();
		}
	}
	if (iLocal_379 == 0)
	{
		func_604();
		func_552(2, "Caravan Park Fight", 0, 0, 0, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), true);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), true);
		iLocal_607 = 0;
		iLocal_379 = 1;
	}
	iVar3 = joaat("prop_gascyl_01a");
	bVar5 = false;
	if (!ENTITY::IS_ENTITY_DEAD(Local_290.f_0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_290.f_0))
		{
			func_767(Local_290.f_0, 1f);
		}
		else
		{
			bVar5 = true;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
		{
			if (bVar5)
			{
				VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/]);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_295[0 /*12*/], 1f);
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
		{
			if (bVar5)
			{
				VEHICLE::SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/]);
			}
			else
			{
				VEHICLE::SET_PLAYBACK_SPEED(Local_295[1 /*12*/], 1f);
			}
		}
	}
	if (!iLocal_370)
	{
		STREAMING::REQUEST_MODEL(iVar3);
		STREAMING::REQUEST_MODEL(joaat("prop_gascyl_02a"));
		STREAMING::REQUEST_MODEL(Local_542.f_7);
		STREAMING::REQUEST_MODEL(Local_542.f_8);
		if (((STREAMING::HAS_MODEL_LOADED(iVar3) && STREAMING::HAS_MODEL_LOADED(joaat("prop_gascyl_02a"))) && STREAMING::HAS_MODEL_LOADED(Local_542.f_7)) && STREAMING::HAS_MODEL_LOADED(Local_542.f_8))
		{
			STREAMING::REQUEST_MODEL(Local_542.f_4);
			STREAMING::REQUEST_MODEL(Local_542.f_0);
			STREAMING::REQUEST_MODEL(Local_542.f_5);
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(9, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(13, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(14, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(15, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(16, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(17, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(18, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(19, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(20, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(21, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(22, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(23, "Trevor1dw");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(6, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(8, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(9, "t1b");
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, "t1b");
			if ((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(Local_542.f_4) && STREAMING::HAS_MODEL_LOADED(Local_542.f_0)) && STREAMING::HAS_MODEL_LOADED(Local_542.f_5)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "t1b"))
			{
				__LIB_0__::func_638();
				func_551();
				func_671(Local_542.f_7);
				func_671(Local_542.f_8);
				func_671(Local_542.f_4);
				func_671(Local_542.f_0);
				func_671(Local_542.f_5);
				func_546();
				func_541(4);
				iLocal_462 = 0;
				if (!ENTITY::DOES_ENTITY_EXIST(Local_284[4 /*12*/]))
				{
					while (iLocal_462 < 26)
					{
						if (func_766(&(Local_284[iLocal_462 /*12*/])))
						{
							if (iLocal_462 == 10)
							{
								VEHICLE::DELETE_VEHICLE(&(Local_284[iLocal_462 /*12*/]));
							}
							if (iLocal_462 == 11)
							{
								VEHICLE::DELETE_VEHICLE(&(Local_284[iLocal_462 /*12*/]));
							}
							if (iLocal_462 == 12)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_284[iLocal_462 /*12*/], 10, 10);
							}
							if (iLocal_462 == 13)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_284[iLocal_462 /*12*/], 4, 4);
							}
							if (iLocal_462 == 23)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_284[iLocal_462 /*12*/], 13, 13);
							}
							if (iLocal_462 == 19)
							{
								VEHICLE::SET_VEHICLE_COLOURS(Local_284[iLocal_462 /*12*/], 13, 13);
							}
							iLocal_462++;
						}
						else
						{
							func_549(0);
						}
					}
					func_690(0, 1045220557, 1);
				}
				iLocal_462 = 0;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[4 /*12*/], false))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[4 /*12*/], true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_284[4 /*12*/], 1, "trevor1dw", true);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[4 /*12*/]);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 51.19f, 3735.08f, 39.24f, true) > 20f)
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_284[12 /*12*/], false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[12 /*12*/], true);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_284[12 /*12*/], 10, "t1b", true);
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[12 /*12*/]);
						ENTITY::SET_ENTITY_HEALTH(Local_284[12 /*12*/], 300, 0);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[5 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[5 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[5 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[6 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[6 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[6 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[7 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[7 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[7 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[15 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[15 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[15 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[16 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[16 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[16 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[17 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[17 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[17 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[20 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[20 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[20 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[21 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[21 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[22 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[22 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[24 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[24 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[24 /*12*/]));
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[25 /*12*/], false))
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_284[25 /*12*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_284[25 /*12*/]));
					}
				}
				iLocal_462 = 0;
				while (iLocal_462 < iLocal_431)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[iLocal_462]))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_431[iLocal_462]));
					}
					iLocal_462++;
				}
				if (HUD::DOES_BLIP_EXIST(Local_290.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_290.f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_295[0 /*12*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_295[0 /*12*/].f_1));
				}
				if (HUD::DOES_BLIP_EXIST(Local_295[1 /*12*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_295[1 /*12*/].f_1));
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				MISC::ENABLE_DISPATCH_SERVICE(3, false);
				iLocal_448 = 0;
				Local_433[0 /*3*/] = { 61f, 3669.8f, 39.16f };
				Local_433[1 /*3*/] = { 33.31f, 3668.32f, 39.11f };
				Local_433[2 /*3*/] = { 39.02f, 3688.35f, 38.94f };
				Local_433[3 /*3*/] = { 63.43f, 3685.22f, 39.22f };
				Local_433[4 /*3*/] = { 93.32f, 3717.06f, 39.01f };
				Local_433[5 /*3*/] = { 104.2f, 3730.56f, 38.93f };
				Local_433[6 /*3*/] = { 91.72f, 3684.61f, 38.94f };
				Local_433[8 /*3*/] = { 80.07f, 3689.77f, 39f };
				Local_433[9 /*3*/] = { 79.87f, 3690.17f, 38.89f };
				Local_433[10 /*3*/] = { 66.32f, 3657.64f, 39.09f };
				Local_433[11 /*3*/] = { 71.49f, 3746.65f, 39.13f };
				Local_433[12 /*3*/] = { 66.98f, 3691.36f, 39.17f };
				Local_433[13 /*3*/] = { 95.6f, 3745.61f, 39.17f };
				Local_433[7 /*3*/] = { 39.84553f, 3735.9124f, 38.527878f };
				Local_433[14 /*3*/] = { 35.614193f, 3731.9565f, 38.527878f };
				iLocal_462 = 0;
				iLocal_462 = 0;
				while (iLocal_462 < Local_433.f_0)
				{
					if (!__LIB_0__::func_78(Local_433[iLocal_462 /*3*/], 0f, 0f, 0f, 0))
					{
						if (iLocal_462 == 14 || iLocal_462 == 7)
						{
							iLocal_431[iLocal_462] = OBJECT::CREATE_OBJECT(joaat("prop_gascyl_02a"), Local_433[iLocal_462 /*3*/], true, true, false);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[iLocal_462]))
							{
								OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[iLocal_462], true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[iLocal_462], true, 40f);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_431[iLocal_462], true);
							}
						}
						else
						{
							MISC::GET_GROUND_Z_FOR_3D_COORD(Local_433[iLocal_462 /*3*/], &fVar6, false, false);
							fVar6 = (fVar6 + 0.4f);
							Local_433[iLocal_462 /*3*/].f_2 = fVar6;
							iLocal_431[iLocal_462] = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar3, Local_433[iLocal_462 /*3*/], true, true, false);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_431[iLocal_462], true);
						}
					}
					iLocal_462++;
				}
				iLocal_462 = 0;
				iLocal_462 = 0;
				while (iLocal_462 < iLocal_403)
				{
					iLocal_403[iLocal_462] = 0;
					iLocal_404[iLocal_462] = 0;
					iLocal_462++;
				}
				iLocal_404[12] = 1;
				iLocal_404[13] = 1;
				iLocal_404[18] = 1;
				iLocal_404[19] = 1;
				HUD::SET_RADAR_ZOOM(1);
				__LIB_0__::func_221(&Local_526, 4);
				if (!ENTITY::IS_ENTITY_DEAD(Local_269[0 /*65*/], false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_269[0 /*65*/], false);
					Local_273[2 /*34*/] = Local_269[0 /*65*/];
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_269[1 /*65*/], false))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_269[1 /*65*/], false);
					Local_273[3 /*34*/] = Local_269[1 /*65*/];
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_269[2 /*65*/], false))
				{
					Local_273[0 /*34*/] = Local_269[2 /*65*/];
					if (HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_269[2 /*65*/].f_1));
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_269[3 /*65*/], false))
				{
					Local_273[1 /*34*/] = Local_269[3 /*65*/];
					if (HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_269[3 /*65*/].f_1));
					}
				}
				if (iLocal_317 < 6)
				{
					__LIB_0__::func_544(48, 0, 0, 1, 0);
				}
				else
				{
					__LIB_0__::func_544(48, 2, 0, 1, 0);
				}
				__LIB_0__::func_544(38, 0, 0, 1, 0);
				__LIB_0__::func_544(40, 0, 0, 1, 0);
				__LIB_0__::func_544(42, 0, 0, 1, 0);
				__LIB_0__::func_544(44, 0, 0, 1, 0);
				__LIB_0__::func_544(46, 0, 0, 1, 0);
				__LIB_0__::func_544(37, 0, 0, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PED::ADD_SCENARIO_BLOCKING_AREA(Local_435 + Vector(100f, 100f, 100f), Local_435 - Vector(100f, 100f, 100f), false, true, true, true);
					MISC::CLEAR_AREA(Local_435, 500f, true, false, false, false);
				}
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
					__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				if (iLocal_421 == 1)
				{
					GRAPHICS::REMOVE_PARTICLE_FX(iLocal_470, false);
				}
				if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_318))
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_318, 11);
				}
				MISC::ENABLE_DISPATCH_SERVICE(3, false);
				MISC::ENABLE_DISPATCH_SERVICE(5, false);
				func_763(21);
				func_763(4);
				func_763(7);
				func_763(22);
				func_763(18);
				func_763(5);
				func_763(6);
				func_763(19);
				func_763(8);
				func_763(20);
				if (iLocal_363 == 0)
				{
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
							if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN")))
							{
								if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
								{
									WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 65, false, true);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
							}
						}
						else if (iLocal_236 == 0)
						{
							WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
							if (WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("WEAPON_PUMPSHOTGUN")))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false);
									iLocal_236 = 1;
								}
							}
						}
					}
				}
				if (iLocal_363 == 1)
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						iLocal_231 = TASK::ADD_COVER_POINT(58.4031f, 3630.9597f, 38.7482f, 24.4402f, 0, 2, 3, true);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), 58.4031f, 3630.9597f, 38.7482f, -1, true, 0f, true, false, iLocal_231, false);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, true);
						iLocal_224 = __LIB_16__::func_303(2);
						if (iLocal_224 != 0 && iLocal_224 != joaat("WEAPON_UNARMED"))
						{
							WEAPON::REQUEST_WEAPON_ASSET(iLocal_224, 31, 0);
						}
						if (__LIB_16__::func_303(2) != joaat("WEAPON_UNARMED") && __LIB_16__::func_303(2) != 0)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), __LIB_16__::func_303(2), true);
							}
						}
						else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), false), true);
						}
						VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
						VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
						PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
					}
				}
				__LIB_0__::func_221(&Local_526, 4);
				__LIB_0__::func_221(&Local_526, 5);
				iLocal_465 = 0;
				iLocal_453 = 0;
				iLocal_588 = 0;
				iLocal_590 = 0;
				iLocal_587 = 0;
				iLocal_591 = 0;
				iLocal_359 = 0;
				iLocal_595 = 0;
				iLocal_596 = 0;
				iLocal_598 = 0;
				iLocal_248 = 0;
				iLocal_600 = 0;
				iLocal_593 = 0;
				iLocal_406 = 0;
				iLocal_543 = 0;
				iLocal_544 = 0;
				iLocal_546 = 0;
				iLocal_416 = 0;
				iLocal_545 = 0;
				iLocal_377 = 0;
				iLocal_370 = 1;
				iLocal_606 = 0;
				Local_273[40 /*34*/].f_31 = 0;
				Local_273[40 /*34*/].f_30 = 0;
				Local_273[2 /*34*/].f_31 = 0;
				Local_273[2 /*34*/].f_30 = 0;
				Local_273[16 /*34*/].f_30 = 0;
				Local_273[16 /*34*/].f_32 = 0;
				Local_273[15 /*34*/].f_30 = 0;
				iLocal_220[0] = 0;
				iLocal_220[1] = 0;
				iLocal_220[2] = 0;
				iLocal_220[3] = 0;
				iLocal_220[4] = 0;
				iLocal_221 = 0;
				iLocal_593 = 0;
				iLocal_619 = 0;
				iLocal_393 = 0;
				__LIB_17__::func_653(112, 0);
				__LIB_17__::func_653(113, 0);
				iLocal_233 = MISC::GET_GAME_TIMER();
				iLocal_213 = 0;
				iLocal_235 = 0;
				bLocal_212 = true;
				if (!iLocal_398)
				{
					func_545();
					iLocal_398 = 1;
				}
			}
		}
	}
	else
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar8, true))
		{
			if (iVar8 == joaat("WEAPON_SAWNOFFSHOTGUN") || iVar8 == joaat("WEAPON_PUMPSHOTGUN"))
			{
				bVar7 = true;
			}
			else
			{
				bVar7 = false;
			}
		}
		else
		{
			bVar7 = false;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (__LIB_0__::func_611(&iLocal_233, 800))
			{
				func_658(500);
			}
		}
		if (func_95("SET UP TRUCK FOR SHOOTOUT"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_STRONG(Local_285.f_0, true);
				func_94("SET UP TRUCK FOR SHOOTOUT", 1);
			}
		}
		if (bVar7)
		{
			iLocal_462 = 0;
			iLocal_462 = 0;
			while (iLocal_462 < Local_284.f_0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[iLocal_462 /*12*/], false))
				{
					if (iLocal_404[iLocal_462])
					{
						if (iLocal_403[iLocal_462] == 0)
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_284[iLocal_462 /*12*/], PLAYER::PLAYER_PED_ID(), true))
							{
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_284[iLocal_462 /*12*/], 100f);
								VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_284[iLocal_462 /*12*/], true);
								iLocal_403[iLocal_462] = MISC::GET_GAME_TIMER();
							}
						}
						else if (func_762(iLocal_403[iLocal_462], 5000))
						{
							VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_284[iLocal_462 /*12*/], false);
							iLocal_404[iLocal_462] = 0;
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_284[iLocal_462 /*12*/], PLAYER::PLAYER_PED_ID(), true))
					{
						func_761(Local_284[iLocal_462 /*12*/], Local_284[iLocal_462 /*12*/].f_6);
					}
				}
				iLocal_462++;
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_290.f_0, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_290.f_0, PLAYER::PLAYER_PED_ID(), true))
				{
					func_761(Local_290.f_0, Local_290.f_6);
				}
			}
		}
		iLocal_462 = 0;
		iLocal_462 = 0;
		while (iLocal_462 < iLocal_405)
		{
			if (!iLocal_405[iLocal_462])
			{
				if (func_760(iLocal_462))
				{
					iLocal_405[iLocal_462] = 1;
				}
			}
			iLocal_462++;
		}
		if (iLocal_213 == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
					PED::SET_PED_ACCURACY(Local_280.f_0, 1);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_280.f_0, 80f, 90f);
					ENTITY::SET_ENTITY_HEALTH(Local_280.f_0, 800, 0);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_280.f_0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 0, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 11, true);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_280.f_0, ENTITY::GET_ENTITY_COORDS(Local_285.f_0, false), 4f, false, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_280.f_0, iLocal_475);
					PED::SET_PED_CAN_BE_TARGETTED(Local_280.f_0, false);
					PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 118, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, iLocal_475);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_280.f_0, false, iLocal_476);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, iLocal_476);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_476, iLocal_475);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_280.f_0, 36, true);
					PED::SET_PED_SEEING_RANGE(Local_280.f_0, 500f);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_280.f_0, 1);
					PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 211, true);
					if (!HUD::DOES_BLIP_EXIST(Local_280.f_1))
					{
						Local_280.f_1 = __LIB_0__::func_666(Local_280.f_0, 0, 20);
						HUD::SET_BLIP_AS_FRIENDLY(Local_280.f_1, true);
					}
				}
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
					PED::SET_PED_ACCURACY(Local_281.f_0, 1);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_281.f_0, 80f, 90f);
					ENTITY::SET_ENTITY_HEALTH(Local_281.f_0, 800, 0);
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_281.f_0, false);
					PED::SET_PED_CAN_BE_TARGETTED(Local_281.f_0, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_281.f_0, iLocal_475);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 0, true);
					PED::SET_PED_CONFIG_FLAG(Local_281.f_0, 118, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_281.f_0, ENTITY::GET_ENTITY_COORDS(Local_285.f_0, false), 6f, false, false);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, iLocal_475);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, iLocal_476);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_476, iLocal_475);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_281.f_0, 36, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, false);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_281.f_0, false, iLocal_476);
					PED::SET_PED_SEEING_RANGE(Local_281.f_0, 500f);
					PED::SET_PED_TARGET_LOSS_RESPONSE(Local_281.f_0, 1);
					PED::SET_PED_CONFIG_FLAG(Local_281.f_0, 211, true);
					if (!HUD::DOES_BLIP_EXIST(Local_281.f_1))
					{
						Local_281.f_1 = __LIB_0__::func_666(Local_281.f_0, 0, 24);
						HUD::SET_BLIP_AS_FRIENDLY(Local_281.f_1, true);
					}
				}
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_475);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, iLocal_476);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_476, iLocal_475);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_285.f_0, false, iLocal_475);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_285.f_0, true, iLocal_476);
				VEHICLE::SET_VEHICLE_STRONG(Local_285.f_0, true);
				iLocal_618 = MISC::GET_GAME_TIMER();
				iLocal_213 = 1;
			}
		}
		if (!Local_273[0 /*34*/].f_2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_273[0 /*34*/]))
					{
						if (!PED::IS_PED_INJURED(Local_273[0 /*34*/]))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_273[0 /*34*/], iLocal_476);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[0 /*34*/], 37, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[0 /*34*/], false);
							PED::SET_PED_ACCURACY(Local_273[0 /*34*/], 0);
							WEAPON::GIVE_WEAPON_TO_PED(Local_273[0 /*34*/], joaat("WEAPON_PISTOL"), 200, true, true);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[0 /*34*/], 55.775f, 3672.7393f, 38.8194f, 2f, false, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
						}
					}
					if (!PED::IS_PED_INJURED(Local_273[0 /*34*/]))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_273[0 /*34*/], iVar2);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					Local_273[0 /*34*/].f_2 = 1;
				}
			}
		}
		else if (func_759(Local_273[0 /*34*/], 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_273[0 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_273[0 /*34*/]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[0 /*34*/], 1) > 20f)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_273[0 /*34*/]));
						PED::DELETE_PED(&(Local_273[0 /*34*/]));
					}
				}
			}
		}
		if (!Local_273[1 /*34*/].f_2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
				{
					if (!PED::IS_PED_INJURED(Local_273[1 /*34*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_273[1 /*34*/], iLocal_476);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[1 /*34*/], 37, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[1 /*34*/], false);
						PED::SET_PED_ACCURACY(Local_273[1 /*34*/], 0);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[1 /*34*/], 63.7196f, 3658.6013f, 38.4564f, 2f, false, false);
						WEAPON::GIVE_WEAPON_TO_PED(Local_273[1 /*34*/], joaat("WEAPON_PISTOL"), -1, true, true);
					}
					if (!PED::IS_PED_INJURED(Local_273[1 /*34*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_273[1 /*34*/], iVar2);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					Local_273[1 /*34*/].f_2 = 1;
				}
			}
		}
		else if (func_759(Local_273[1 /*34*/], 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_273[1 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_273[1 /*34*/]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[1 /*34*/], 1) > 20f)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_273[1 /*34*/]));
						PED::DELETE_PED(&(Local_273[1 /*34*/]));
					}
				}
			}
		}
		if (!Local_273[2 /*34*/].f_1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_290.f_0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_290.f_0))
				{
					if (!PED::IS_PED_INJURED(Local_273[2 /*34*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_273[2 /*34*/], 120, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_273[2 /*34*/], iLocal_476);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[2 /*34*/], false);
						PED::SET_PED_ACCURACY(Local_273[2 /*34*/], 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_273[2 /*34*/], joaat("WEAPON_PISTOL"), -1, true, true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[2 /*34*/], 50.2847f, 3665.541f, 38.7129f, 8f, false, false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_273[2 /*34*/], 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[2 /*34*/], 35, true);
						PED::SET_PED_TO_LOAD_COVER(Local_273[2 /*34*/], true);
						TASK::OPEN_SEQUENCE_TASK(&iVar2);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iVar2);
						TASK::TASK_PERFORM_SEQUENCE(Local_273[2 /*34*/], iVar2);
						TASK::CLEAR_SEQUENCE_TASK(&iVar2);
						__LIB_0__::func_640(Local_273[2 /*34*/], "GENERIC_WAR_CRY", 18);
						Local_273[2 /*34*/].f_2 = 1;
						Local_273[2 /*34*/].f_1 = 1;
					}
				}
			}
		}
		else if (Local_273[2 /*34*/].f_1 == 1)
		{
			if (Local_273[2 /*34*/].f_30 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_273[2 /*34*/]))
				{
					if (func_95("DID CHASE"))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_273[2 /*34*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_611(&iLocal_618, 25000))
						{
							__LIB_0__::func_640(Local_273[2 /*34*/], "GENERIC_CURSE_HIGH", 18);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[2 /*34*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[2 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_273[2 /*34*/], false), 20f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[2 /*34*/], 50, true);
							PED::SET_PED_COMBAT_RANGE(Local_273[2 /*34*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[2 /*34*/], 51, true);
							Local_273[2 /*34*/].f_30 = 1;
						}
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_273[2 /*34*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_611(&iLocal_618, 8000))
					{
						__LIB_0__::func_640(Local_273[2 /*34*/], "GENERIC_CURSE_HIGH", 18);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[2 /*34*/], false);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[2 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_273[2 /*34*/], false), 20f, false, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[2 /*34*/], 50, true);
						PED::SET_PED_COMBAT_RANGE(Local_273[2 /*34*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[2 /*34*/], 51, true);
						Local_273[2 /*34*/].f_30 = 1;
					}
				}
			}
		}
		if (!Local_273[3 /*34*/].f_2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_290.f_0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_290.f_0))
				{
					if (!PED::IS_PED_INJURED(Local_273[3 /*34*/]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_273[3 /*34*/], iLocal_476);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[3 /*34*/], 37, true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[3 /*34*/], false);
						PED::SET_PED_ACCURACY(Local_273[3 /*34*/], 1);
						WEAPON::GIVE_WEAPON_TO_PED(Local_273[3 /*34*/], joaat("WEAPON_PISTOL"), -1, true, true);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[3 /*34*/], 55.3607f, 3672.6648f, 38.8215f, 2f, false, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar2);
					if (!PED::IS_PED_INJURED(Local_273[3 /*34*/]))
					{
						TASK::TASK_PERFORM_SEQUENCE(Local_273[3 /*34*/], iVar2);
					}
					TASK::CLEAR_SEQUENCE_TASK(&iVar2);
					Local_273[3 /*34*/].f_2 = 1;
				}
			}
		}
		else if (func_759(Local_273[3 /*34*/], 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_273[3 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_273[3 /*34*/]))
				{
					if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[3 /*34*/], 1) > 20f)
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_273[3 /*34*/]));
						PED::DELETE_PED(&(Local_273[3 /*34*/]));
					}
				}
			}
		}
		if (!func_757(4))
		{
			func_756(bVar7);
			func_755();
			func_754();
			func_753();
			func_751();
			func_749();
			func_748();
			func_747();
			func_746();
			func_745();
			func_744();
			func_743();
			func_739();
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!Local_273[40 /*34*/].f_31)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || ENTITY::IS_ENTITY_ON_SCREEN(Local_273[40 /*34*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[40 /*34*/], true);
					TASK::TASK_COMBAT_PED(Local_273[40 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::REMOVE_COVER_POINT(Local_273[40 /*34*/].f_19);
					Local_273[40 /*34*/].f_19 = TASK::ADD_COVER_POINT(53.0982f, 3645.8618f, 38.6581f, 185.3102f, 1, 1, 1, false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[40 /*34*/], 53.31f, 3646.12f, 39.66f, 4f, true, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_273[40 /*34*/], 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[40 /*34*/], 51, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[40 /*34*/], 50, true);
					__LIB_0__::func_640(Local_273[40 /*34*/], "GENERIC_WAR_CRY", 18);
					Local_273[40 /*34*/].f_31 = 1;
				}
			}
			else if (!PED::IS_PED_INJURED(Local_273[40 /*34*/]))
			{
				if (Local_273[40 /*34*/].f_30 == 0)
				{
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_273[40 /*34*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_611(&iLocal_618, 10000)) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_273[40 /*34*/]) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_273[40 /*34*/]) && __LIB_0__::func_611(&iLocal_618, 4000))))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[40 /*34*/], false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[40 /*34*/], 50, true);
						PED::SET_PED_COMBAT_RANGE(Local_273[40 /*34*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[40 /*34*/], 51, true);
						PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_273[40 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 25f, false, false);
						__LIB_0__::func_640(Local_273[40 /*34*/], "GENERIC_WAR_CRY", 18);
						Local_273[40 /*34*/].f_30 = 1;
					}
				}
			}
			if (Local_273[16 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_273[16 /*34*/]))
				{
					if (Local_273[16 /*34*/].f_30 == 0)
					{
						if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_273[16 /*34*/], PLAYER::PLAYER_PED_ID(), true) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_273[16 /*34*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_273[16 /*34*/]))) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 23.035633f, 3659.8423f, 37.530746f, 40.428093f, 3684.7495f, 45.737465f, 12.25f, false, true, 0)) || (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[16 /*34*/], 1) < 22f && !VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false)))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[16 /*34*/], false);
							PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_273[16 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 25f, false, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[16 /*34*/], 50, true);
							PED::SET_PED_COMBAT_RANGE(Local_273[16 /*34*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[16 /*34*/], 51, true);
							Local_273[16 /*34*/].f_30 = 1;
						}
					}
				}
			}
			if (Local_273[15 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_273[15 /*34*/]))
				{
					if (Local_273[15 /*34*/].f_30 == 0)
					{
						if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_273[15 /*34*/], PLAYER::PLAYER_PED_ID(), true) || __LIB_0__::func_76(Local_273[15 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 20f) || PED::IS_PED_INJURED(Local_273[6 /*34*/]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[15 /*34*/], false);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[15 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[15 /*34*/], 50, true);
							PED::SET_PED_COMBAT_RANGE(Local_273[15 /*34*/], 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[15 /*34*/], 51, true);
							Local_273[15 /*34*/].f_30 = 1;
						}
					}
				}
			}
			if (!Local_273[9 /*34*/].f_1)
			{
				Local_273[9 /*34*/].f_1 = 1;
			}
			else
			{
				if (!iLocal_405[1])
				{
					if (func_760(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.03938f, 3683.0398f, 37.95245f, 100.18819f, 3642.2778f, 43.71773f, 39.5f, false, true, 0))
						{
						}
					}
				}
				if (!Local_273[21 /*34*/].f_1)
				{
					if (func_738())
					{
						if (Local_273[21 /*34*/].f_1 == 0)
						{
							if (func_737(108.7403f, 3718.448f, 39.7577f, 1f, 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 108.7403f, 3718.448f, 39.7577f, true) < 30f)
							{
								Local_273[21 /*34*/].f_1 = 1;
								Local_273[22 /*34*/].f_1 = 1;
							}
						}
					}
					else if (Local_273[21 /*34*/].f_1 == 0)
					{
						if (func_737(108.7403f, 3718.448f, 39.7577f, 1f, 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 108.7403f, 3718.448f, 39.7577f, true) < 30f)
						{
							Local_273[21 /*34*/].f_1 = 1;
							Local_273[22 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_273[29 /*34*/].f_1)
			{
				if (func_736())
				{
					func_763(3);
					Local_273[29 /*34*/].f_1 = 1;
					Local_273[30 /*34*/].f_1 = 1;
				}
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_273[29 /*34*/]))
				{
					if (func_759(Local_273[29 /*34*/], 1, 0))
					{
						if (!func_734())
						{
							PED::DELETE_PED(&(Local_273[29 /*34*/]));
						}
						else
						{
							func_733(29, 0, 1, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_273[30 /*34*/]))
				{
					if (func_759(Local_273[30 /*34*/], 1, 0))
					{
						if (!func_734())
						{
							PED::DELETE_PED(&(Local_273[30 /*34*/]));
						}
						else
						{
							func_733(30, 0, 1, 1);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_273[15 /*34*/]))
			{
				if (!Local_273[6 /*34*/].f_1)
				{
					if (iLocal_213 == 1)
					{
						Var4[0 /*34*/] = { Local_273[40 /*34*/] };
						Var4[1 /*34*/] = { Local_273[2 /*34*/] };
						if (((((func_732(&Var4, 2, 2, 1, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 47.683052f, 3660.8198f, 38.26171f, 55.504646f, 3671.6746f, 43.234177f, 2.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 41.593533f, 3653.6526f, 37.460617f, 20.178158f, 3651.2114f, 44.4404f, 4.5f, false, true, 0)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 32.48455f, 3667.2493f, 39.54953f, true) < 26f) || __LIB_0__::func_611(&iLocal_618, 30000)) || PED::IS_PED_INJURED(Local_273[15 /*34*/]))
						{
							if (!PED::IS_PED_INJURED(Local_273[6 /*34*/]))
							{
								__LIB_0__::func_640(Local_273[6 /*34*/], "GENERIC_FUCK_YOU", 24);
							}
							Local_273[6 /*34*/].f_1 = 1;
							Local_276[0 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_273[15 /*34*/].f_1)
			{
				Var4[0 /*34*/] = { Local_273[9 /*34*/] };
				Var4[1 /*34*/] = { Local_273[11 /*34*/] };
				Var4[2 /*34*/] = { Local_273[17 /*34*/] };
				if (func_732(&Var4, 3, 3, 1, 1) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.104918f, 3693.2593f, 37.892815f, 29.597843f, 3712.84f, 41.89134f, 34.25f, false, true, 0))
				{
					Local_273[15 /*34*/].f_1 = 1;
				}
				if (!PED::IS_PED_INJURED(Local_273[15 /*34*/]))
				{
					if (iLocal_458 > 0)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_273[15 /*34*/]))
						{
							Local_273[15 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_273[16 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_273[16 /*34*/]))
				{
					if (__LIB_0__::func_76(Local_273[16 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 25f)
					{
						if (__LIB_0__::func_76(Local_273[16 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 15f || !ENTITY::IS_ENTITY_OCCLUDED(Local_273[16 /*34*/]))
						{
							Local_273[16 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (iLocal_213 == 1)
			{
				if (!Local_273[16 /*34*/].f_1)
				{
					if (!PED::IS_PED_INJURED(Local_273[16 /*34*/]))
					{
						if (__LIB_0__::func_76(Local_273[16 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 65f || __LIB_0__::func_611(&iLocal_618, 20000))
						{
							Local_273[16 /*34*/].f_1 = 1;
							Local_273[15 /*34*/].f_1 = 1;
						}
					}
				}
			}
			if (!Local_273[37 /*34*/].f_1)
			{
				if (func_731())
				{
					if (iLocal_593 > 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_284[20 /*12*/], false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[20 /*12*/]))
							{
								Local_273[36 /*34*/].f_1 = 1;
								Local_273[37 /*34*/].f_1 = 1;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 73.80382f, 3736.188f, 38.350574f, 72.86808f, 3746.6082f, 41.445698f, 2.25f, false, true, 0))
				{
					Local_273[35 /*34*/].f_1 = 1;
					Local_273[36 /*34*/].f_20 = { 49.4762f, 3719.5312f, 38.7279f };
					Local_273[36 /*34*/].f_18 = 8;
					Local_273[36 /*34*/].f_1 = 1;
					Local_273[37 /*34*/].f_20 = { 55.5819f, 3713.4048f, 38.8812f };
					Local_273[37 /*34*/].f_8 = 150;
					Local_273[37 /*34*/].f_1 = 1;
				}
			}
			if (!Local_273[27 /*34*/].f_1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 95.18041f, 3739.1802f, 36.01311f, 129.41367f, 3713.1497f, 40.91453f, 25.25f, false, true, 0) || (ENTITY::IS_ENTITY_ON_SCREEN(Local_273[27 /*34*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_273[27 /*34*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 20f)) || iLocal_377)
				{
					Local_273[26 /*34*/].f_1 = 1;
					Local_273[27 /*34*/].f_1 = 1;
					Local_276[1 /*34*/].f_1 = 1;
				}
				else if (iLocal_591 > 0)
				{
					if (Local_273[24 /*34*/].f_1)
					{
						if (Local_273[25 /*34*/].f_1)
						{
							Var4[0 /*34*/] = { Local_273[24 /*34*/] };
							Var4[1 /*34*/] = { Local_273[25 /*34*/] };
							if (func_732(&Var4, 2, 2, 1, 1))
							{
								Local_273[26 /*34*/].f_1 = 1;
								Local_273[27 /*34*/].f_1 = 1;
								Local_276[1 /*34*/].f_1 = 1;
							}
						}
					}
				}
			}
			if (func_730())
			{
				if (!Local_273[35 /*34*/].f_1)
				{
					Local_273[35 /*34*/].f_20 = { 24.4197f, 3726.0955f, 38.6186f };
					Local_273[35 /*34*/].f_18 = 1;
					Local_273[35 /*34*/].f_26 = 0;
					Local_273[35 /*34*/].f_27 = 1;
					Local_273[35 /*34*/].f_1 = 1;
				}
			}
			if (!iLocal_377)
			{
				func_729();
				if (func_728())
				{
					if (!Local_273[35 /*34*/].f_1)
					{
						Local_273[35 /*34*/].f_20 = { 40.5141f, 3720.7407f, 38.9402f };
						Local_273[35 /*34*/].f_18 = 8;
						Local_273[35 /*34*/].f_26 = 0;
						Local_273[35 /*34*/].f_27 = 1;
						Local_273[35 /*34*/].f_1 = 1;
					}
					if (!Local_273[36 /*34*/].f_1)
					{
						Local_273[36 /*34*/].f_20 = { 34.6777f, 3711.9556f, 39.1706f };
						Local_273[36 /*34*/].f_18 = 8;
						Local_273[36 /*34*/].f_26 = 0;
						Local_273[36 /*34*/].f_27 = 1;
						Local_273[36 /*34*/].f_1 = 1;
					}
					iLocal_377 = 1;
				}
			}
			else
			{
				if (!Local_273[28 /*34*/].f_1)
				{
					Local_273[28 /*34*/].f_20 = { 106.4858f, 3741.2505f, 38.7412f };
					Local_273[28 /*34*/].f_26 = 0;
					Local_273[28 /*34*/].f_27 = 2;
					Local_273[28 /*34*/].f_1 = 1;
				}
				if (!Local_273[20 /*34*/].f_1)
				{
					if (!PED::IS_PED_INJURED(Local_273[20 /*34*/]))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_273[20 /*34*/]);
						ENTITY::SET_ENTITY_COORDS(Local_273[20 /*34*/], 99.7073f, 3688.615f, 38.7123f, true, false, false, true);
						Local_273[20 /*34*/].f_20 = { 99.7073f, 3688.615f, 38.7123f };
						Local_273[20 /*34*/].f_26 = 2;
						Local_273[20 /*34*/].f_27 = 1;
						Local_273[20 /*34*/].f_1 = 1;
					}
				}
				if (!Local_273[15 /*34*/].f_1)
				{
					Local_273[15 /*34*/].f_1 = 1;
				}
				if (!Local_273[16 /*34*/].f_1)
				{
					Local_273[16 /*34*/].f_1 = 1;
				}
			}
		}
		func_725(&Local_273);
		func_724();
		func_723();
		if ((((iLocal_220[0] == 1 || iLocal_220[1] == 1) || iLocal_220[2] == 1) || iLocal_220[3] == 1) || iLocal_220[4] == 1)
		{
			if (func_757(4))
			{
				AUDIO::CANCEL_MUSIC_EVENT("TRV1_EXPLODE");
				AUDIO::PREPARE_MUSIC_EVENT("TRV1_BIKERS_FLEE");
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_BIKERS_FLEE"))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_475, iLocal_476);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_476, iLocal_475);
					if (!PED::IS_PED_INJURED(Local_273[31 /*34*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_273[31 /*34*/], 120, 0);
					}
					iVar1 = 0;
					while (iVar1 <= 49)
					{
						__LIB_0__::func_621(&(Local_273[iVar1 /*34*/].f_10));
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 <= 2)
					{
						__LIB_0__::func_621(&(Local_276[iVar1 /*34*/].f_10));
						iVar1++;
					}
					iLocal_462 = 0;
					iVar1 = 0;
					while (iVar1 < Local_276.f_0)
					{
						if (!PED::IS_PED_INJURED(Local_276[iVar1 /*34*/]))
						{
							if (Local_276[iVar1 /*34*/].f_29 == 0)
							{
								TASK::TASK_SMART_FLEE_PED(Local_276[iVar1 /*34*/], PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
							}
						}
						iVar1++;
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_274[0 /*34*/]))
					{
						iLocal_462 = 0;
						iVar1 = 0;
						while (iVar1 < Local_273.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_273[iVar1 /*34*/]))
							{
								Local_274[0 /*34*/] = { Local_273[iVar1 /*34*/] };
								func_713(&(Local_274[0 /*34*/]), 1);
								Local_274[0 /*34*/].f_9 = MISC::GET_GAME_TIMER();
							}
							iVar1++;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_274[1 /*34*/]))
					{
						iLocal_462 = 0;
						iVar1 = 0;
						while (iVar1 < Local_273.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_273[iVar1 /*34*/]))
							{
								if (Local_274[0 /*34*/] != Local_273[iVar1 /*34*/] && Local_274[2 /*34*/] != Local_273[iVar1 /*34*/])
								{
									Local_274[1 /*34*/] = { Local_273[iVar1 /*34*/] };
									func_713(&(Local_274[1 /*34*/]), 1);
									Local_274[1 /*34*/].f_9 = MISC::GET_GAME_TIMER();
								}
							}
							iVar1++;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_274[2 /*34*/]))
					{
						iLocal_462 = 0;
						iVar1 = 0;
						while (iVar1 < Local_273.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_273[iVar1 /*34*/]))
							{
								if (Local_274[0 /*34*/] != Local_273[iVar1 /*34*/] && Local_274[1 /*34*/] != Local_273[iVar1 /*34*/])
								{
									Local_274[2 /*34*/] = { Local_273[iVar1 /*34*/] };
									func_713(&(Local_274[2 /*34*/]), 1);
									Local_274[2 /*34*/].f_9 = MISC::GET_GAME_TIMER();
								}
							}
							iVar1++;
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(Local_274[3 /*34*/]))
					{
						iLocal_462 = 0;
						iVar1 = 0;
						while (iVar1 < Local_273.f_0)
						{
							if (!PED::IS_PED_INJURED(Local_273[iVar1 /*34*/]))
							{
								if ((Local_274[0 /*34*/] != Local_273[iVar1 /*34*/] && Local_274[1 /*34*/] != Local_273[iVar1 /*34*/]) && Local_274[2 /*34*/] != Local_273[iVar1 /*34*/])
								{
									Local_274[3 /*34*/] = { Local_273[iVar1 /*34*/] };
									func_713(&(Local_274[3 /*34*/]), 1);
									Local_274[3 /*34*/].f_9 = MISC::GET_GAME_TIMER();
								}
							}
							iVar1++;
						}
					}
					MISC::SET_TIME_SCALE(1f);
					func_710();
					iLocal_217 = 0;
					iLocal_379 = 0;
					iLocal_370 = 0;
					iLocal_363 = 0;
					return 1;
				}
			}
		}
		else if (func_757(4))
		{
			iLocal_221 = 1;
			func_751();
		}
	}
	return 0;
}

void func_723()//Position - 0x93DA4
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_276.f_0)
	{
		if (!PED::IS_PED_INJURED(Local_276[iVar0 /*34*/]))
		{
			if (Local_276[iVar0 /*34*/].f_1)
			{
				if (!Local_276[iVar0 /*34*/].f_2)
				{
					Local_276[iVar0 /*34*/].f_20 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_276[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_276[iVar0 /*34*/], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					Local_276[iVar0 /*34*/].f_9 = MISC::GET_GAME_TIMER();
					Local_276[iVar0 /*34*/].f_2 = 1;
				}
				else if (func_759(Local_276[iVar0 /*34*/], 1, 0))
				{
					Local_276[iVar0 /*34*/].f_2 = 0;
				}
				else if (func_762(Local_276[iVar0 /*34*/].f_9, 2000))
				{
					if (__LIB_0__::func_76(Local_276[iVar0 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_276[iVar0 /*34*/], false), Local_276[iVar0 /*34*/].f_20, true))
					{
						Local_276[iVar0 /*34*/].f_2 = 0;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_724()//Position - 0x93EBF
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_273.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_273[iVar0 /*34*/]))
		{
			if (!PED::IS_PED_INJURED(Local_273[iVar0 /*34*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_273[iVar0 /*34*/].f_33))
				{
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_273[iVar0 /*34*/].f_33))
			{
				HUD::REMOVE_BLIP(&(Local_273[iVar0 /*34*/].f_33));
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_276.f_0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_276[iVar1 /*34*/]))
		{
			if (!PED::IS_PED_INJURED(Local_276[iVar1 /*34*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_276[iVar1 /*34*/].f_33))
				{
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_276[iVar1 /*34*/].f_33))
			{
				HUD::REMOVE_BLIP(&(Local_276[iVar1 /*34*/].f_33));
			}
		}
		iVar1++;
	}
}

void func_725(int iParam0)//Position - 0x93F8B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (iVar0 != 23)
		{
			if ((iParam0[iVar0 /*34*/])->f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*34*/], false))
				{
					if (!(iParam0[iVar0 /*34*/])->f_2 && !(iParam0[iVar0 /*34*/])->f_3)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*34*/], true);
						ENTITY::SET_ENTITY_VISIBLE((*iParam0)[iVar0 /*34*/], true, false);
						PED::SET_PED_CAN_BE_TARGETTED((*iParam0)[iVar0 /*34*/], true);
						if ((((((iParam0[iVar0 /*34*/])->f_18 == 0 || (iParam0[iVar0 /*34*/])->f_18 == 4) || (iParam0[iVar0 /*34*/])->f_18 == 6) || (iParam0[iVar0 /*34*/])->f_18 == 5) && ENTITY::IS_ENTITY_AT_COORD((*iParam0)[iVar0 /*34*/], (iParam0[iVar0 /*34*/])->f_20, 1f, 1f, 1.5f, false, true, 0)) && !PED::IS_PED_SITTING_IN_ANY_VEHICLE((*iParam0)[iVar0 /*34*/]))
						{
							(iParam0[iVar0 /*34*/])->f_2 = 1;
						}
						else
						{
							switch ((iParam0[iVar0 /*34*/])->f_18)
							{
								case 0:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										if (PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*34*/], false))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										}
										if (PED::IS_PED_DUCKING((*iParam0)[iVar0 /*34*/]))
										{
											TASK::TASK_TOGGLE_DUCK(0, 0);
										}
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (iParam0[iVar0 /*34*/])->f_20, 2f, -1, 0.5f, 0, 40000f);
										TASK::TASK_PAUSE(0, (iParam0[iVar0 /*34*/])->f_8);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
									}
									break;
								case 8:
									PED::SET_PED_COMBAT_MOVEMENT((*iParam0)[iVar0 /*34*/], 2);
									PED::SET_PED_COMBAT_ATTRIBUTES((*iParam0)[iVar0 /*34*/], 50, true);
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_PAUSE(0, (iParam0[iVar0 /*34*/])->f_8);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (iParam0[iVar0 /*34*/])->f_20, 2f, -1, 0.5f, 0, 40000f);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
									}
									break;
								case 1:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_PAUSE(0, (iParam0[iVar0 /*34*/])->f_8);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, (iParam0[iVar0 /*34*/])->f_20, 2f, -1, 0.5f, 0, 40000f);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
									}
									break;
								case 4:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										if (PED::IS_PED_IN_ANY_VEHICLE((*iParam0)[iVar0 /*34*/], false))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
										}
										if (PED::IS_PED_DUCKING((*iParam0)[iVar0 /*34*/]))
										{
											TASK::TASK_TOGGLE_DUCK(0, 0);
										}
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, (iParam0[iVar0 /*34*/])->f_20, PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
									}
									break;
								case 6:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, (iParam0[iVar0 /*34*/])->f_20, PLAYER::PLAYER_PED_ID(), 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
									}
									break;
								case 5:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										if (func_727((iParam0[iVar0 /*34*/])->f_20))
										{
											TASK::OPEN_SEQUENCE_TASK(&iVar1);
											TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, (iParam0[iVar0 /*34*/])->f_20, (iParam0[iVar0 /*34*/])->f_23, 2f, true, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
											TASK::CLOSE_SEQUENCE_TASK(iVar1);
										}
										else
										{
											TASK::OPEN_SEQUENCE_TASK(&iVar1);
											TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
											TASK::CLOSE_SEQUENCE_TASK(iVar1);
										}
									}
									break;
								case 7:
									if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
									{
										TASK::OPEN_SEQUENCE_TASK(&iVar1);
										TASK::TASK_SEEK_COVER_TO_COVER_POINT(0, (iParam0[iVar0 /*34*/])->f_19, (iParam0[iVar0 /*34*/])->f_23, 50, false);
										TASK::CLOSE_SEQUENCE_TASK(iVar1);
									}
									break;
								case 9:
									break;
							}
							if ((iVar0 != 23 || iVar0 != 38) || iVar0 != 39)
							{
								if ((iParam0[iVar0 /*34*/])->f_2 == 0)
								{
									if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*34*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
										{
											TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0 /*34*/], iVar1);
										}
									}
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									(iParam0[iVar0 /*34*/])->f_2 = 1;
								}
							}
						}
					}
					else if (!(iParam0[iVar0 /*34*/])->f_4 || (iParam0[iVar0 /*34*/])->f_3)
					{
						if (!(iParam0[iVar0 /*34*/])->f_5 || (iParam0[iVar0 /*34*/])->f_7 == 0)
						{
							if ((func_759((*iParam0)[iVar0 /*34*/], 1, 0) || ((iParam0[iVar0 /*34*/])->f_18 == 7 && ENTITY::IS_ENTITY_AT_COORD((*iParam0)[iVar0 /*34*/], (iParam0[iVar0 /*34*/])->f_20, 0.5f, 0.5f, 2f, false, true, 0))) || (iParam0[iVar0 /*34*/])->f_3)
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*34*/], false);
								PED::SET_PED_TARGET_LOSS_RESPONSE((*iParam0)[iVar0 /*34*/], 1);
								if (iVar0 != 23)
								{
									if (iVar0 != 4)
									{
										func_726(iParam0[iVar0 /*34*/], (iParam0[iVar0 /*34*/])->f_26);
									}
									TASK::OPEN_SEQUENCE_TASK(&iVar1);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(iVar1);
									if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*34*/]))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS((*iParam0)[iVar0 /*34*/], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
										{
											TASK::TASK_PERFORM_SEQUENCE((*iParam0)[iVar0 /*34*/], iVar1);
										}
									}
									TASK::CLEAR_SEQUENCE_TASK(&iVar1);
									(iParam0[iVar0 /*34*/])->f_4 = 1;
									(iParam0[iVar0 /*34*/])->f_3 = 0;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_726(var uParam0, int iParam1)//Position - 0x944D3
{
	switch (iParam1)
	{
		case 1:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 2f, false, false);
			break;
		case 2:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 5f, false, false);
			break;
		case 3:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 15f, false, false);
			break;
		case 0:
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(*uParam0, uParam0->f_20, 1.5f, true, false);
			break;
	}
}

int func_727(struct<3> Param0)//Position - 0x9454E
{
	if (Param0.f_0 < 1f && Param0.f_0 > -1f)
	{
		return 1;
	}
	if (Param0.f_1 < 1f && Param0.f_1 > -1f)
	{
		return 1;
	}
	if (Param0.f_2 < 1f && Param0.f_2 > -1f)
	{
		return 1;
	}
	return 0;
}

int func_728()//Position - 0x9459B
{
	if (!iLocal_546)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 57.348606f, 3687.8193f, 37.315075f, 62.9187f, 3683.527f, 42.590298f, 4.5f, false, true, 0))
		{
			iLocal_546 = 1;
		}
	}
	return iLocal_546;
}

void func_729()//Position - 0x945E2
{
	int iVar0;
	switch (iLocal_602)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 94.536766f, 3723.6687f, 38.373657f, 114.67986f, 3747.91f, 41.59075f, 7.75f, false, true, 0))
			{
				if (!PED::IS_PED_INJURED(Local_273[28 /*34*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_284[2 /*12*/], false))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_284[2 /*12*/], 12, "trevor1dw", true);
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[2 /*12*/]);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_TOGGLE_DUCK(0, 0);
						TASK::TASK_ENTER_VEHICLE(0, Local_284[2 /*12*/], 20000, -1, 2f, 1, 0);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_273[28 /*34*/], iVar0);
						iLocal_602++;
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_273[28 /*34*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[2 /*12*/], false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_273[28 /*34*/], Local_284[2 /*12*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[2 /*12*/]))
						{
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[2 /*12*/]);
							iLocal_404[2] = 1;
							iLocal_602++;
						}
					}
				}
			}
			break;
		case 2:
			if (!Local_273[28 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_273[28 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_284[2 /*12*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[2 /*12*/]))
						{
							func_733(28, 2, 1, 1);
							Local_273[28 /*34*/].f_1 = 1;
						}
						else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_273[28 /*34*/], Local_284[2 /*12*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[2 /*12*/]);
							func_733(28, 2, 1, 1);
							Local_273[28 /*34*/].f_1 = 1;
						}
					}
					else
					{
						func_733(28, 2, 1, 1);
						Local_273[28 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
}

int func_730()//Position - 0x947A5
{
	if (!iLocal_547)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 18.02788f, 3694.494f, 38.197628f, 48.181362f, 3696.424f, 42.922462f, 5.5f, false, true, 0))
		{
			iLocal_547 = 1;
		}
	}
	return iLocal_547;
}

int func_731()//Position - 0x947EC
{
	if (!iLocal_544)
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 37.15265f, 3706.8745f, 37.90971f, 4.259892f, 3739.1138f, 42.779907f, 4.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 53.157814f, 3696.1729f, 36.25422f, 49.159348f, 3698.8042f, 42.21606f, 4.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 35.961582f, 3703.8843f, 43.003876f, -31.536324f, 3739.5344f, 34.287323f, 4.5f, false, true, 0))
		{
			iLocal_544 = 1;
		}
	}
	return iLocal_544;
}

int func_732(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x9489B
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		if ((uParam0[iVar0 /*34*/])->f_1 || !bParam4)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*34*/]))
			{
				if (ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*34*/], false) || PED::IS_PED_FATALLY_INJURED((*uParam0)[iVar0 /*34*/]))
				{
					iVar1++;
				}
				else if (bParam3)
				{
					if (PED::IS_PED_INJURED((*uParam0)[iVar0 /*34*/]))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 >= iParam2)
	{
		return 1;
	}
	return 0;
}

void func_733(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x94924
{
	if (!Local_273[iParam0 /*34*/].f_1)
	{
		if (!PED::IS_PED_INJURED(Local_273[iParam0 /*34*/]))
		{
			Local_273[iParam0 /*34*/].f_20 = { ENTITY::GET_ENTITY_COORDS(Local_273[iParam0 /*34*/], false) };
			Local_273[iParam0 /*34*/].f_26 = iParam1;
			Local_273[iParam0 /*34*/].f_27 = iParam2;
			Local_273[iParam0 /*34*/].f_1 = iParam3;
			Local_273[iParam0 /*34*/].f_18 = 0;
		}
	}
}

bool func_734()//Position - 0x9498A
{
	return ((func_728() || func_731()) || func_735());
}

int func_735()//Position - 0x949AA
{
	if (!iLocal_543)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 70.83387f, 3733.275f, 38.048367f, 64.49149f, 3769.2346f, 41.597546f, 4.5f, false, true, 0))
		{
			iLocal_543 = 1;
		}
	}
	return iLocal_543;
}

int func_736()//Position - 0x949F1
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 54.44471f, 3703.1526f, 38.25422f, 36.61494f, 3672.9333f, 41.048473f, 7.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 32.20564f, 3684.3804f, 38.200718f, 43.326218f, 3675.4226f, 41.2275f, 7.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 27.501648f, 3679.2695f, 38.132034f, 42.311897f, 3671.0002f, 41.206665f, 7.5f, false, true, 0))
	{
		if (func_737(66.5306f, 3729.2708f, 41.0291f, 1f, 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 66.5306f, 3729.2708f, 41.0291f, true) < 10f)
		{
			return 1;
		}
	}
	return 0;
}

int func_737(struct<3> Param0, float fParam1, float fParam2)//Position - 0x94ADC
{
	struct<3> Var0;
	struct<3> Var1;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_41)
		{
			if (!bLocal_28)
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam1))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						Var1 = { Var0 - Param0 };
						if ((SYSTEM::VMAG(Var1) - fParam1) < fParam2)
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

int func_738()//Position - 0x94B40
{
	float fVar0;
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (!iLocal_406)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 70.16672f, 3673.6196f, 38.336f, 94.23613f, 3675.3303f, 41.01178f, 5f, false, true, 0) || (fVar0 > 4f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 70.16672f, 3673.6196f, 38.336f, 94.23613f, 3675.3303f, 41.01178f, 15f, false, true, 0)))
		{
			iLocal_406 = 1;
		}
	}
	return iLocal_406;
}

void func_739()//Position - 0x94BCA
{
	int iVar0;
	switch (iLocal_349)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_273[43 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 14.7984f, 3725.87f, 42.4778f, true) < 60f)
				{
					if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("G_M_Y_Lost_01"), 11.88f, 3728.81f, 43.45f, true))
					{
						Local_273[43 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 11.88f, 3728.81f, 43.45f, -152.39f, joaat("WEAPON_ASSAULTRIFLE"), 0, 1, 1);
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_273[43 /*34*/]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[43 /*34*/], 37, false);
					PED::SET_PED_FLEE_ATTRIBUTES(Local_273[43 /*34*/], 1024, false);
				}
				iLocal_349++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_273[43 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 14.7984f, 3725.87f, 42.4778f, true) < 100f || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("G_M_Y_Lost_01"), 12.3359f, 3728.3882f, 42.4859f, true))
				{
					PED::SET_PED_ACCURACY(Local_273[43 /*34*/], 0);
					WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(Local_273[43 /*34*/], 20f, 80f);
					PED::SET_PED_SEEING_RANGE(Local_273[43 /*34*/], 200f);
					ENTITY::SET_ENTITY_HEALTH(Local_273[43 /*34*/], 110, 0);
					PED::SET_PED_COMBAT_RANGE(Local_273[43 /*34*/], 2);
					PED::SET_PED_COMBAT_MOVEMENT(Local_273[43 /*34*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[43 /*34*/], 14.45f, 3726.33f, 43.45f, 0.75f, true, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_273[43 /*34*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_349++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Local_273[43 /*34*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_273[43 /*34*/], PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_273[43 /*34*/], 0, 0);
					iLocal_349++;
				}
			}
			if (!PED::IS_PED_INJURED(Local_273[43 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 14.7984f, 3725.87f, 42.4778f, true) < 40f)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[43 /*34*/], 30, true);
					PED::SET_PED_ACCURACY(Local_273[43 /*34*/], 1);
					iLocal_349++;
				}
			}
			break;
	}
}

int func_740(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x94E3A
{
	int iVar0;
	int iVar1;
	iVar0 = PED::CREATE_PED(26, iParam0, Param2, fParam3, true, true);
	func_131(iVar0, 494);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam4, -1, bParam7, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam1);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar0, 0);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	PED::SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
	PED::SET_PED_KEEP_TASK(iVar0, true);
	if (__LIB_0__::func_680())
	{
		if (__LIB_0__::func_680())
		{
			PED::SET_PED_DIES_WHEN_INJURED(iVar0, false);
		}
	}
	if (bParam5)
	{
		iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(Param2);
		if (iVar1 != 0)
		{
			INTERIOR::RETAIN_ENTITY_IN_INTERIOR(iVar0, iVar1);
		}
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 135, 0);
	__LIB_0__::func_609(iVar0, 1);
	PED::SET_PED_AS_ENEMY(iVar0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, bParam6);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, false);
	PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, "DEFAULT_ACTION");
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 49, true);
	return iVar0;
}

void func_743()//Position - 0x94FC4
{
	switch (iLocal_598)
	{
		case 0:
			if (!PED::IS_PED_INJURED(Local_273[31 /*34*/]))
			{
				ENTITY::SET_ENTITY_HEALTH(Local_273[31 /*34*/], 200, 0);
				PED::SET_PED_ACCURACY(Local_273[31 /*34*/], 5);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[31 /*34*/], 78.199f, 3706.4666f, 40.0819f, 20f, false, false);
			}
			iLocal_598++;
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_273[31 /*34*/]))
			{
				if (__LIB_0__::func_76(Local_273[31 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 100f)
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_273[31 /*34*/], PLAYER::PLAYER_PED_ID(), true))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_273[31 /*34*/]))
						{
							__LIB_0__::func_640(Local_273[31 /*34*/], "GENERIC_WAR_CRY", 18);
							iLocal_598++;
						}
					}
					else
					{
						__LIB_0__::func_640(Local_273[31 /*34*/], "GENERIC_FUCK_YOU", 18);
						iLocal_598++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_76(Local_273[31 /*34*/], PLAYER::PLAYER_PED_ID(), 1) < 45f)
			{
				if (!PED::IS_PED_INJURED(Local_273[31 /*34*/]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_273[31 /*34*/]))
					{
						PED::SET_PED_COMBAT_RANGE(Local_273[31 /*34*/], 0);
						__LIB_0__::func_640(Local_273[31 /*34*/], "GENERIC_WAR_CRY", 18);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[31 /*34*/], 49, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[31 /*34*/], 51, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[31 /*34*/], 13, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[31 /*34*/], 50, true);
						PED::SET_PED_COMBAT_MOVEMENT(Local_273[31 /*34*/], 2);
						PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_273[31 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 15f, false, false);
						TASK::TASK_COMBAT_PED(Local_273[31 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_598++;
					}
				}
			}
			break;
	}
}

void func_744()//Position - 0x95198
{
	int iVar0;
	switch (iLocal_596)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_273[42 /*34*/]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 73.32565f, 3728.408f, 37.968533f, 49.222183f, 3694.147f, 43.255215f, 38.75f, false, true, 0) && !CAM::IS_SPHERE_VISIBLE(84.6956f, 3722.6765f, 38.7396f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_273[42 /*34*/]))
					{
						Local_273[42 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 84.6956f, 3722.6765f, 38.7396f, 127.651f, joaat("WEAPON_SAWNOFFSHOTGUN"), 0, 1, 1);
						iLocal_596++;
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_273[42 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_273[42 /*34*/], false), true) < 60f || ENTITY::IS_ENTITY_ON_SCREEN(Local_273[42 /*34*/]))
				{
					PED::SET_PED_ACCURACY(Local_273[42 /*34*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[42 /*34*/], 81.9903f, 3721.3938f, 38.7452f, 1f, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_273[42 /*34*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[42 /*34*/], false);
					iLocal_597 = MISC::GET_GAME_TIMER();
					iLocal_596++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Local_273[42 /*34*/]))
			{
				if (__LIB_0__::func_611(&iLocal_597, 12000))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_273[42 /*34*/]))
					{
						PED::SET_PED_ACCURACY(Local_273[42 /*34*/], 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[42 /*34*/], 57.0861f, 3724.4236f, 38.7258f, 20f, false, false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_273[42 /*34*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[42 /*34*/], 50, true);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_273[42 /*34*/], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[42 /*34*/], false);
						iLocal_596++;
					}
				}
			}
			break;
	}
}

void func_745()//Position - 0x953C5
{
	int iVar0;
	switch (iLocal_600)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_273[44 /*34*/]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.33037f, 3727.14f, 38.2265f, 53.21163f, 3696.0977f, 50.754875f, 34f, false, true, 0) && !CAM::IS_SPHERE_VISIBLE(84.4422f, 3723.2402f, 38.7385f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_273[44 /*34*/]))
					{
						Local_273[44 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 84.4422f, 3723.2402f, 38.7385f, 165.5727f, joaat("WEAPON_PISTOL"), 0, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[44 /*34*/], false);
						PED::SET_PED_ACCURACY(Local_273[44 /*34*/], 10);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[44 /*34*/], false);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[44 /*34*/], 69.9965f, 3717.5894f, 38.7549f, 15f, true, false);
						PED::SET_PED_COMBAT_MOVEMENT(Local_273[44 /*34*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[44 /*34*/], 50, true);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iVar0);
						TASK::TASK_PERFORM_SEQUENCE(Local_273[44 /*34*/], iVar0);
						TASK::CLEAR_SEQUENCE_TASK(&iVar0);
						iLocal_600++;
					}
				}
			}
			break;
		case 1:
			break;
	}
}

void func_746()//Position - 0x95512
{
	int iVar0;
	switch (iLocal_601)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_273[23 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 63.8115f, 3682.9834f, 38.8342f, true) < 80f && !CAM::IS_SPHERE_VISIBLE(63.8115f, 3682.9834f, 38.8342f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_273[23 /*34*/]))
					{
						Local_273[23 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 63.8115f, 3682.9834f, 38.8342f, 165.5727f, joaat("WEAPON_MICROSMG"), 0, 1, 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[23 /*34*/], 59.8701f, 3697.1667f, 38.7549f, 2f, true, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[23 /*34*/], false);
						iLocal_601++;
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_273[23 /*34*/]))
			{
				if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_273[23 /*34*/], false), true) < 35f && ENTITY::IS_ENTITY_ON_SCREEN(Local_273[23 /*34*/])) || (PED::IS_PED_INJURED(Local_273[27 /*34*/]) && Local_273[27 /*34*/].f_1 == 1))
				{
					PED::SET_PED_ACCURACY(Local_273[23 /*34*/], 1);
					PED::SET_PED_COMBAT_MOVEMENT(Local_273[23 /*34*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[23 /*34*/], 50, true);
					PED::SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Local_273[23 /*34*/], PLAYER::PLAYER_PED_ID(), 5f, 0f, 5f, -5f, 0f, -5f, 15f, false, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_273[23 /*34*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[23 /*34*/], false);
					iLocal_601++;
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Local_273[23 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_273[23 /*34*/], false), true) > 100f)
				{
					PED::SET_PED_ACCURACY(Local_273[23 /*34*/], 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[23 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, true, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[23 /*34*/], 51, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_273[23 /*34*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_601++;
				}
			}
			break;
	}
}

void func_747()//Position - 0x95781
{
	int iVar0;
	switch (iLocal_599)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_273[41 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 67.31f, 3713.33f, 39.75f, true) < 80f && !CAM::IS_SPHERE_VISIBLE(67.31f, 3713.33f, 39.75f, 1f))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_273[41 /*34*/]))
					{
						Local_273[41 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 67.31f, 3713.33f, 39.75f, 25.56f, joaat("WEAPON_SAWNOFFSHOTGUN"), 0, 1, 1);
						iLocal_599++;
					}
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_273[41 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(Local_273[41 /*34*/], false), true) < 60f || ENTITY::IS_ENTITY_ON_SCREEN(Local_273[41 /*34*/]))
				{
					PED::SET_PED_ACCURACY(Local_273[41 /*34*/], 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[41 /*34*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[41 /*34*/], 67.31f, 3713.33f, 39.75f, 15f, false, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_273[41 /*34*/], 2);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[41 /*34*/], 50, true);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_273[41 /*34*/], iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_599++;
				}
			}
			break;
	}
}

void func_748()//Position - 0x95901
{
	int iVar0;
	switch (iLocal_595)
	{
		case 0:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 53.843185f, 3684.475f, 38.254253f, 32.56451f, 3676.0242f, 40.03286f, 8.75f, false, true, 0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_273[10 /*34*/]))
				{
					Local_273[10 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 17.7291f, 3702.891f, 38.7281f, 224.5845f, joaat("WEAPON_SAWNOFFSHOTGUN"), 0, 1, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[10 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, false, false);
					PED::SET_PED_COMBAT_MOVEMENT(Local_273[10 /*34*/], 2);
					iLocal_595++;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_273[10 /*34*/]))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Local_273[10 /*34*/], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[10 /*34*/], false);
				iLocal_595++;
			}
			break;
	}
}

void func_749()//Position - 0x95A0F
{
	switch (iLocal_594)
	{
		case 0:
			if (!iLocal_377)
			{
				if (!Local_273[13 /*34*/].f_1)
				{
					if (func_735())
					{
						func_763(15);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_284[15 /*12*/], 16, "trevor1Dw", true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[15 /*12*/], true, false, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_284[16 /*12*/], 17, "trevor1Dw", true);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[16 /*12*/], true, false, false);
						AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[15 /*12*/], false))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[15 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[16 /*12*/], false))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[16 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
						}
						iLocal_220[4] = 1;
						iLocal_594++;
					}
				}
			}
			break;
		case 1:
			if (!Local_273[12 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[15 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[15 /*12*/]))
					{
						Local_273[12 /*34*/].f_20 = { 46.171f, 3723.0205f, 38.6841f };
						Local_273[12 /*34*/].f_18 = 4;
						Local_273[12 /*34*/].f_26 = 0;
						Local_273[12 /*34*/].f_27 = 1;
						Local_273[12 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_273[13 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[16 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[16 /*12*/]))
					{
						Local_273[13 /*34*/].f_20 = { 49.2689f, 3736.771f, 38.5828f };
						Local_273[13 /*34*/].f_18 = 4;
						Local_273[13 /*34*/].f_26 = 0;
						Local_273[13 /*34*/].f_27 = 1;
						Local_273[13 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
	if (iLocal_594 > 0)
	{
		func_750(12, 15);
		func_750(13, 16);
	}
}

void func_750(int iParam0, int iParam1)//Position - 0x95BDE
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_284[iParam1 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[iParam1 /*12*/]))
		{
			if (PED::IS_PED_INJURED(Local_273[iParam0 /*34*/]))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 3);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[iParam1 /*12*/]);
			}
			else if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_273[iParam0 /*34*/], Local_284[iParam1 /*12*/]))
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 4f, 3);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[iParam1 /*12*/]);
			}
		}
	}
}

void func_751()//Position - 0x95C4F
{
	switch (iLocal_593)
	{
		case 0:
			if (!iLocal_221)
			{
				if (!iLocal_377)
				{
					if (func_731())
					{
						func_763(14);
						if (ENTITY::DOES_ENTITY_EXIST(Local_284[20 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[20 /*12*/], true, false, false);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[20 /*12*/]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_284[21 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[21 /*12*/], true, false, false);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[21 /*12*/]);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_284[22 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[22 /*12*/], true, false, false);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[22 /*12*/]);
						}
						AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[20 /*12*/], false))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[20 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[21 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[22 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
						}
						iLocal_592 = MISC::GET_GAME_TIMER();
						iLocal_220[3] = 1;
						iLocal_593++;
					}
				}
			}
			else
			{
				func_763(14);
				if (ENTITY::DOES_ENTITY_EXIST(Local_284[20 /*12*/]))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[20 /*12*/], true, false, false);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[20 /*12*/]);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_284[21 /*12*/]))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[21 /*12*/], true, false, false);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[21 /*12*/]);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_284[22 /*12*/]))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[22 /*12*/], true, false, false);
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[22 /*12*/]);
				}
				AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[20 /*12*/], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[20 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[21 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[22 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
				}
				iLocal_592 = MISC::GET_GAME_TIMER();
				iLocal_593++;
			}
			break;
		case 1:
			if (__LIB_0__::func_611(&iLocal_592, 6000))
			{
				iLocal_220[3] = 1;
			}
			if (!Local_273[32 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[20 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[20 /*12*/]))
					{
						Local_273[32 /*34*/].f_20 = { 42.1645f, 3721.8428f, 38.5633f };
						Local_273[32 /*34*/].f_18 = 4;
						Local_273[32 /*34*/].f_26 = 2;
						Local_273[32 /*34*/].f_27 = 1;
						Local_273[32 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_273[32 /*34*/].f_30 == 0)
			{
				if (!PED::IS_PED_INJURED(Local_273[32 /*34*/]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[20 /*12*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[20 /*12*/]))
						{
							if (__LIB_0__::func_611(&iLocal_592, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[32 /*34*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[32 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[32 /*34*/], 50, true);
								PED::SET_PED_COMBAT_RANGE(Local_273[32 /*34*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[32 /*34*/], 51, true);
								Local_273[32 /*34*/].f_30 = 1;
							}
						}
					}
				}
			}
			if (!Local_273[33 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[21 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[21 /*12*/]))
					{
						Local_273[33 /*34*/].f_20 = { 49.8538f, 3723.2258f, 38.6739f };
						Local_273[33 /*34*/].f_18 = 4;
						Local_273[33 /*34*/].f_26 = 2;
						Local_273[33 /*34*/].f_27 = 1;
						Local_273[33 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_273[33 /*34*/].f_30 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[21 /*12*/]))
					{
						if (!PED::IS_PED_INJURED(Local_273[33 /*34*/]))
						{
							if (__LIB_0__::func_611(&iLocal_592, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[33 /*34*/], false);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[33 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[33 /*34*/], 50, true);
								PED::SET_PED_COMBAT_RANGE(Local_273[33 /*34*/], 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[33 /*34*/], 51, true);
								Local_273[33 /*34*/].f_30 = 1;
							}
						}
					}
				}
			}
			if (!Local_273[34 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[22 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[22 /*12*/]))
					{
						Local_273[34 /*34*/].f_20 = { 42.9824f, 3736.3972f, 38.5268f };
						Local_273[34 /*34*/].f_18 = 4;
						Local_273[34 /*34*/].f_26 = 2;
						Local_273[34 /*34*/].f_27 = 1;
						Local_273[34 /*34*/].f_1 = 1;
					}
				}
			}
			else
			{
				func_752(&(Local_273[34 /*34*/]), &(Local_273[32 /*34*/]), 1);
				if (Local_273[34 /*34*/].f_30 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[22 /*12*/]))
						{
							if (!PED::IS_PED_INJURED(Local_273[34 /*34*/]))
							{
								if (__LIB_0__::func_611(&iLocal_592, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[34 /*34*/], false);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[34 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[34 /*34*/], 50, true);
									PED::SET_PED_COMBAT_RANGE(Local_273[34 /*34*/], 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[34 /*34*/], 51, true);
									Local_273[34 /*34*/].f_30 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_752(var uParam0, var uParam1, bool bParam2)//Position - 0x961E7
{
	struct<34> Var0[2];
	if (!uParam0->f_6)
	{
		if (!__LIB_0__::func_78(uParam1->f_20, uParam0->f_20, 0))
		{
			Var0[0 /*34*/] = { *uParam1 };
			if (func_732(&Var0, 1, 1, 1, 1))
			{
				func_713(uParam0, 1);
				if (bParam2)
				{
					uParam0->f_18 = 6;
				}
				else
				{
					uParam0->f_18 = 4;
				}
				uParam0->f_26 = uParam1->f_26;
				uParam0->f_20 = { uParam1->f_20 };
				uParam0->f_6 = 1;
				uParam0->f_1 = 1;
				uParam0->f_27 = 1;
			}
		}
	}
}

void func_753()//Position - 0x96267
{
	struct<34> Var0[3];
	switch (iLocal_591)
	{
		case 0:
			Var0[0 /*34*/] = { Local_273[22 /*34*/] };
			Var0[1 /*34*/] = { Local_273[21 /*34*/] };
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.83764f, 3707.1418f, 37.457558f, 117.79897f, 3685.5503f, 41.427235f, 8.25f, false, true, 0) || func_732(&Var0, 2, 2, 1, 1))
			{
				if (!func_737(Local_284[24 /*12*/].f_2, 0.1f, 1120403456))
				{
					func_763(13);
					iLocal_220[2] = 1;
					iLocal_591++;
				}
			}
			break;
		case 1:
			if (!Local_273[24 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[24 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[24 /*12*/]))
					{
						Local_273[24 /*34*/].f_20 = { 96.8904f, 3713.2527f, 38.5539f };
						Local_273[24 /*34*/].f_18 = 4;
						Local_273[24 /*34*/].f_27 = 2;
						Local_273[24 /*34*/].f_26 = 3;
						Local_273[24 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_273[25 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[25 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[25 /*12*/]))
					{
						Local_273[25 /*34*/].f_20 = { 104.9613f, 3713.5818f, 38.7133f };
						Local_273[25 /*34*/].f_18 = 4;
						Local_273[25 /*34*/].f_27 = 2;
						Local_273[25 /*34*/].f_26 = 3;
						Local_273[25 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
}

void func_754()//Position - 0x963FF
{
	switch (iLocal_590)
	{
		case 0:
			if (!Local_273[32 /*34*/].f_1)
			{
				if (Local_273[9 /*34*/].f_1)
				{
					if (!iLocal_405[1])
					{
						if (func_760(0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 81.03938f, 3683.0398f, 37.95245f, 100.18819f, 3642.2778f, 43.71773f, 39.5f, false, true, 0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_284[20 /*12*/].f_2, 2.5f))
								{
									func_763(12);
									if (ENTITY::DOES_ENTITY_EXIST(Local_284[20 /*12*/]))
									{
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_284[21 /*12*/]))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[21 /*12*/], true, false, false);
										VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[21 /*12*/]);
										VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_284[21 /*12*/], true);
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_284[21 /*12*/], 50f);
									}
									if (ENTITY::DOES_ENTITY_EXIST(Local_284[22 /*12*/]))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[22 /*12*/], true, false, false);
										VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[22 /*12*/]);
									}
									AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[21 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
									{
										AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[22 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
									}
									iLocal_220[1] = 1;
									iLocal_589 = MISC::GET_GAME_TIMER();
									iLocal_590++;
								}
							}
						}
					}
					else
					{
						iLocal_590 = 100;
					}
				}
			}
			break;
		case 1:
			if (!Local_273[32 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[20 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[20 /*12*/]))
					{
						Local_273[32 /*34*/].f_20 = { 80.4992f, 3674.0144f, 38.7078f };
						Local_273[32 /*34*/].f_26 = 2;
						Local_273[32 /*34*/].f_27 = 2;
						Local_273[32 /*34*/].f_18 = 4;
						Local_273[32 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_273[32 /*34*/].f_30 == 0)
			{
				if (__LIB_0__::func_611(&iLocal_589, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[32 /*34*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[32 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[32 /*34*/], 50, true);
					PED::SET_PED_COMBAT_RANGE(Local_273[32 /*34*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[32 /*34*/], 51, true);
					Local_273[32 /*34*/].f_30 = 1;
				}
			}
			if (!Local_273[33 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[21 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[21 /*12*/]))
					{
						Local_273[33 /*34*/].f_20 = { 91.1677f, 3666.9314f, 38.703f };
						Local_273[33 /*34*/].f_26 = 0;
						Local_273[33 /*34*/].f_27 = 1;
						Local_273[33 /*34*/].f_18 = 4;
						Local_273[33 /*34*/].f_1 = 1;
					}
				}
			}
			else if (Local_273[33 /*34*/].f_30 == 0)
			{
				if (__LIB_0__::func_611(&iLocal_589, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[33 /*34*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[33 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[33 /*34*/], 50, true);
					PED::SET_PED_COMBAT_RANGE(Local_273[33 /*34*/], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[33 /*34*/], 51, true);
					Local_273[33 /*34*/].f_30 = 1;
				}
			}
			if (!Local_273[34 /*34*/].f_1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[22 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[22 /*12*/]))
					{
						Local_273[34 /*34*/].f_20 = { 78.0473f, 3686.2131f, 38.5502f };
						Local_273[34 /*34*/].f_26 = 0;
						Local_273[34 /*34*/].f_27 = 1;
						Local_273[34 /*34*/].f_18 = 4;
						Local_273[34 /*34*/].f_1 = 1;
					}
				}
			}
			else
			{
				func_752(&(Local_273[34 /*34*/]), &(Local_273[32 /*34*/]), 1);
				if (Local_273[34 /*34*/].f_30 == 0)
				{
					if (__LIB_0__::func_611(&iLocal_589, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[34 /*34*/], false);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[34 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[34 /*34*/], 50, true);
						PED::SET_PED_COMBAT_RANGE(Local_273[34 /*34*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[34 /*34*/], 51, true);
						Local_273[34 /*34*/].f_30 = 1;
					}
				}
			}
			break;
	}
}

void func_755()//Position - 0x9684F
{
	struct<34> Var0[4];
	int iVar1;
	int iVar2;
	switch (iLocal_588)
	{
		case 0:
			Var0[0 /*34*/] = { Local_273[17 /*34*/] };
			Var0[1 /*34*/] = { Local_273[18 /*34*/] };
			Var0[2 /*34*/] = { Local_273[11 /*34*/] };
			if (!Local_273[13 /*34*/].f_1)
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -4.104918f, 3693.2593f, 37.892815f, 29.597843f, 3712.84f, 41.89134f, 34.25f, false, true, 0) || func_732(&Var0, 3, 3, 1, 1)) || (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 23.30928f, 3706.2478f, 38.45564f, 34.667908f, 3684.7021f, 43.454075f, 25.5f, false, true, 0) && func_732(&Var0, 2, 2, 1, 1)))
				{
					func_763(11);
					iVar2 = VEHICLE::GET_CLOSEST_VEHICLE(52.4589f, 3664.1252f, 38.6962f, 5f, joaat("gburrito"), 2);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_284[15 /*12*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[15 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[15 /*12*/], true, true, false);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[15 /*12*/]);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_284[16 /*12*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[16 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[16 /*12*/], true, true, false);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[16 /*12*/]);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_284[17 /*12*/], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[17 /*12*/]))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_284[17 /*12*/], true, true, false);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[17 /*12*/]);
						}
					}
					AUDIO::START_AUDIO_SCENE("TREVOR_1_BIKES");
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[17 /*12*/], false))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[17 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[16 /*12*/], false))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[16 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[15 /*12*/], false))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[15 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
					}
					iLocal_220[0] = 1;
					iLocal_588++;
				}
			}
			break;
		case 1:
			if (!Local_273[14 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_273[14 /*34*/]))
				{
					if (!Local_273[14 /*34*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_284[17 /*12*/], false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[17 /*12*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_LEAVE_VEHICLE(0, Local_284[17 /*12*/], 256);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_273[14 /*34*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								Local_273[14 /*34*/].f_2 = 1;
							}
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_273[14 /*34*/], false))
					{
						Local_273[14 /*34*/].f_2 = 0;
						Local_273[14 /*34*/].f_27 = 1;
						Local_273[14 /*34*/].f_18 = 4;
						Local_273[14 /*34*/].f_26 = 2;
						Local_273[14 /*34*/].f_20 = { 27.011f, 3701.7512f, 38.6947f };
						Local_273[14 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_273[12 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_273[12 /*34*/]))
				{
					if (!Local_273[12 /*34*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_284[15 /*12*/], false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[15 /*12*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_LEAVE_VEHICLE(0, Local_284[15 /*12*/], 256);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_273[12 /*34*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								Local_273[12 /*34*/].f_2 = 1;
							}
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_273[12 /*34*/], false))
					{
						Local_273[12 /*34*/].f_2 = 0;
						Local_273[12 /*34*/].f_27 = 1;
						Local_273[12 /*34*/].f_18 = 4;
						Local_273[12 /*34*/].f_26 = 2;
						Local_273[12 /*34*/].f_20 = { 27.011f, 3701.7512f, 38.6947f };
						Local_273[12 /*34*/].f_1 = 1;
					}
				}
			}
			if (!Local_273[13 /*34*/].f_1)
			{
				if (!PED::IS_PED_INJURED(Local_273[13 /*34*/]))
				{
					if (!Local_273[13 /*34*/].f_2)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_284[16 /*12*/], false))
						{
							if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[16 /*12*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar1);
								TASK::TASK_PAUSE(0, 300);
								TASK::TASK_LEAVE_VEHICLE(0, Local_284[16 /*12*/], 256);
								TASK::CLOSE_SEQUENCE_TASK(iVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_273[13 /*34*/], iVar1);
								TASK::CLEAR_SEQUENCE_TASK(&iVar1);
								Local_273[13 /*34*/].f_2 = 1;
							}
						}
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_273[13 /*34*/], false))
					{
						Local_273[13 /*34*/].f_2 = 0;
						Local_273[13 /*34*/].f_27 = 1;
						Local_273[13 /*34*/].f_18 = 4;
						Local_273[13 /*34*/].f_26 = 0;
						Local_273[13 /*34*/].f_20 = { 34.171f, 3704.2898f, 38.5311f };
						Local_273[13 /*34*/].f_1 = 1;
					}
				}
			}
			break;
	}
}

void func_756(bool bParam0)//Position - 0x96D28
{
	int iVar0;
	struct<34> Var1[2];
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[4 /*12*/], false))
	{
		if (!PED::IS_PED_INJURED(Local_273[7 /*34*/]))
		{
			switch (iLocal_453)
			{
				case 0:
					Var1[0 /*34*/] = { Local_273[6 /*34*/] };
					Var1[1 /*34*/] = { Local_273[40 /*34*/] };
					if ((((((((func_732(&Var1, 1, 1, 1, 1) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[7 /*34*/], 1) < 23f) || (func_732(&Var1, 2, 2, 1, 1) && __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[7 /*34*/], 1) < 35f)) || (func_732(&Var1, 2, 2, 1, 1) && !ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("G_M_Y_Lost_01"), 29.6f, 3661.92f, 40.63f, true))) || PED::IS_PED_INJURED(Local_273[6 /*34*/])) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 29.58f, 3661.88f, 39.63f, true) < 4f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 32.45f, 3667.45f, 39.56f, true) < 1f) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 54.94906f, 3672.4976f, 38.230812f, 39.546333f, 3657.8296f, 43.00036f, 2.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 41.484673f, 3655.523f, 37.778347f, 20.273994f, 3649.4705f, 43.4985f, 2.5f, false, true, 0))
					{
						if (!PED::IS_PED_INJURED(Local_273[7 /*34*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[4 /*12*/], false))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_284[4 /*12*/], 1);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_284[4 /*12*/], -1f, 0f, 0f), PLAYER::PLAYER_PED_ID(), 2f, true, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
								TASK::TASK_ENTER_VEHICLE(0, Local_284[4 /*12*/], 20000, -1, 2f, 1, 0);
								TASK::TASK_DRIVE_BY(0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 20, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								ENTITY::SET_ENTITY_VISIBLE(Local_273[7 /*34*/], true, false);
								TASK::TASK_PERFORM_SEQUENCE(Local_273[7 /*34*/], iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								__LIB_0__::func_640(Local_273[7 /*34*/], "FALL_BACK", 18);
								iLocal_453++;
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), PLAYER::PLAYER_PED_ID(), 2f, true, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(iVar0);
								ENTITY::SET_ENTITY_VISIBLE(Local_273[7 /*34*/], true, false);
								TASK::TASK_PERFORM_SEQUENCE(Local_273[7 /*34*/], iVar0);
								TASK::CLEAR_SEQUENCE_TASK(&iVar0);
								__LIB_0__::func_640(Local_273[7 /*34*/], "FALL_BACK", 18);
								iLocal_453++;
							}
						}
					}
					break;
				case 1:
					if (!PED::IS_PED_INJURED(Local_273[7 /*34*/]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(Local_273[7 /*34*/], Local_284[4 /*12*/]))
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(Local_273[7 /*34*/]))
							{
								VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[4 /*12*/]);
								__LIB_0__::func_640(Local_273[7 /*34*/], "FALL_BACK", 18);
								iLocal_453++;
							}
						}
					}
					break;
				case 2:
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_273[7 /*34*/], Local_284[4 /*12*/]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[4 /*12*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[4 /*12*/]);
						}
						Local_273[7 /*34*/].f_20 = { ENTITY::GET_ENTITY_COORDS(Local_273[7 /*34*/], false) };
						Local_273[7 /*34*/].f_26 = 2;
						Local_273[7 /*34*/].f_27 = 1;
						Local_273[7 /*34*/].f_1 = 1;
					}
					else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[4 /*12*/]))
					{
						iLocal_453++;
					}
					if (bParam0)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_284[4 /*12*/], PLAYER::PLAYER_PED_ID(), true))
						{
							if (__LIB_0__::func_76(Local_284[4 /*12*/], PLAYER::PLAYER_PED_ID(), 1) < 25f)
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[4 /*12*/]);
								VEHICLE::EXPLODE_VEHICLE(Local_284[4 /*12*/], true, false);
								VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_284[4 /*12*/], true);
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_284[4 /*12*/], 100f);
								iLocal_453++;
							}
						}
					}
					break;
				case 3:
					if (!ENTITY::IS_ENTITY_DEAD(Local_284[4 /*12*/], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[4 /*12*/]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(Local_273[7 /*34*/], 1);
							PED::SET_PED_ACCURACY(Local_273[7 /*34*/], 1);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
							TASK::TASK_LEAVE_VEHICLE(0, Local_284[4 /*12*/], 256);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), PLAYER::PLAYER_PED_ID(), 1f, true, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
							TASK::TASK_PERFORM_SEQUENCE(Local_273[7 /*34*/], iLocal_469);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[7 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3f, true, false);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[7 /*34*/], false);
							iLocal_453++;
						}
					}
					else
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_273[7 /*34*/], 1);
						PED::SET_PED_ACCURACY(Local_273[7 /*34*/], 1);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
						TASK::TASK_LEAVE_VEHICLE(0, Local_284[4 /*12*/], 256);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), PLAYER::PLAYER_PED_ID(), 1f, true, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
						TASK::TASK_PERFORM_SEQUENCE(Local_273[7 /*34*/], iLocal_469);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[7 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 3f, true, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[7 /*34*/], false);
						iLocal_453++;
					}
					break;
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[4 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[4 /*12*/]);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(Local_284[4 /*12*/], false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[4 /*12*/]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[4 /*12*/]);
		}
	}
}

int func_757(int iParam0)//Position - 0x972CE
{
	if (func_758() < iParam0 + 1)
	{
		return 1;
	}
	return 0;
}

int func_758()//Position - 0x972E6
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Local_273.f_0)
	{
		if (!PED::IS_PED_INJURED(Local_273[iVar0 /*34*/]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_759(int iParam0, bool bParam1, int iParam2)//Position - 0x97319
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
		if (bParam1)
		{
			if (iVar0 == 7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (iVar0 == 1)
		{
			iVar1 = TASK::GET_SEQUENCE_PROGRESS(iParam0);
			if (iVar1 > iParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_760(int iParam0)//Position - 0x9736C
{
	switch (iParam0)
	{
		case 0:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 34.391068f, 3649.4783f, 38.026222f, 110.60188f, 3682.7932f, 41.25408f, 28f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 47.66907f, 3613.861f, 36.754425f, 110.73273f, 3641.7358f, 42.00429f, 48.5f, false, true, 0));
			break;
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 40.028873f, 3666.8584f, 37.27187f, 3.502873f, 3738.6765f, 43.3126f, 48f, false, true, 0);
			break;
		case 3:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 75.48908f, 3766.7163f, 37.440598f, 107.09858f, 3696.7678f, 41.24031f, 33.5f, false, true, 0);
			break;
		case 1:
			return (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 65.11323f, 3708.477f, 33.26513f, 37.230984f, 3766.059f, 41.778973f, 39.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 78.027145f, 3703.8767f, 34.608215f, 59.605186f, 3716.406f, 44.753613f, 41f, false, true, 0));
			break;
	}
	return 0;
}

void func_761(int iParam0, int iParam1)//Position - 0x974CC
{
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam1))
	{
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 6, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 6, false, 1000f);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 7, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 7, false, 1000f);
		}
	}
	else
	{
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 0, false, 1000f);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 1, false, 1000f);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 4, false, 1000f);
		}
		if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
		{
			VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 5, false, 1000f);
		}
	}
}

int func_762(int iParam0, int iParam1)//Position - 0x97576
{
	int iVar0;
	if (iParam0 > 0)
	{
		iVar0 = MISC::GET_GAME_TIMER();
		if ((iVar0 - iParam0) > iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_763(int iParam0)//Position - 0x97599
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_277[0 /*18*/]))
			{
				Local_277[0 /*18*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 19.1347f, 3684.3474f, 38.7443f, 286.0925f, joaat("WEAPON_PISTOL"), 0, 1, 1);
				Local_277[0 /*18*/].f_14 = { 47.1648f, 3694.5469f, 38.7542f };
				func_765(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_277[5 /*18*/]))
			{
				Local_277[5 /*18*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 49.8133f, 3680.6958f, 38.7198f, 106.7312f, joaat("WEAPON_PISTOL"), 0, 1, 1);
				Local_277[5 /*18*/].f_14 = { 22.702f, 3675.8499f, 38.7505f };
				Local_277[5 /*18*/].f_13 = 1;
				func_765(5);
			}
			break;
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_277[6 /*18*/]))
			{
				Local_277[6 /*18*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 16.2309f, 3705.1865f, 38.6814f, 224.6131f, joaat("WEAPON_PISTOL"), 0, 1, 1);
				Local_277[6 /*18*/].f_14 = { 48.7237f, 3686.0332f, 38.7423f };
				func_765(6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_277[7 /*18*/]))
			{
				Local_277[7 /*18*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 34.1578f, 3708.816f, 38.5332f, 162.9502f, joaat("WEAPON_PISTOL"), 0, 1, 1);
				Local_277[7 /*18*/].f_14 = { 24.8406f, 3683.7915f, 38.6336f };
				Local_277[7 /*18*/].f_13 = 1;
				func_765(7);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_277[1 /*18*/]))
			{
				Local_277[1 /*18*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 96.1861f, 3661.2688f, 38.7541f, 286.0925f, joaat("WEAPON_PISTOL"), 0, 1, 1);
				Local_277[1 /*18*/].f_14 = { 68.3437f, 3677.7722f, 38.8119f };
				func_765(1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_277[2 /*18*/]))
			{
				Local_277[2 /*18*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 77.7008f, 3700.2021f, 38.7543f, 230.1184f, joaat("WEAPON_PISTOL"), 0, 1, 1);
				Local_277[2 /*18*/].f_14 = { 96.6802f, 3687.2793f, 38.6327f };
				Local_277[2 /*18*/].f_13 = 1;
				func_765(2);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_277[3 /*18*/]))
			{
				Local_277[3 /*18*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 69.0141f, 3676.4492f, 38.731f, 257.5091f, joaat("WEAPON_PISTOL"), 0, 1, 1);
				Local_277[3 /*18*/].f_14 = { 109.1527f, 3678.1072f, 38.7541f };
				Local_277[3 /*18*/].f_13 = 1;
				func_765(3);
			}
			break;
		case 3:
			Local_273[29 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 71.5719f, 3721.4912f, 38.7652f, 87.2615f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[29 /*34*/].f_20 = { 51.6792f, 3723.3562f, 38.7029f };
			Local_273[29 /*34*/].f_27 = 1;
			Local_273[29 /*34*/].f_18 = 4;
			Local_273[29 /*34*/].f_26 = 2;
			Local_273[30 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 64.8816f, 3708.0137f, 38.7651f, 59.2328f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[30 /*34*/].f_20 = { 46.815f, 3715.067f, 38.7372f };
			Local_273[30 /*34*/].f_27 = 1;
			Local_273[30 /*34*/].f_18 = 4;
			Local_273[30 /*34*/].f_26 = 2;
			break;
		case 21:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_273[31 /*34*/]))
			{
				Local_273[31 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 79.16f, 3710.42f, 40.7f, 119.71f, joaat("WEAPON_ASSAULTRIFLE"), 0, 1, 1);
				Local_273[31 /*34*/].f_20 = { 75.36f, 3717.01f, 39.75f };
				Local_273[31 /*34*/].f_27 = 2;
				Local_273[31 /*34*/].f_18 = 4;
				Local_273[31 /*34*/].f_26 = 3;
			}
			break;
		case 4:
			Local_273[40 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 63.6262f, 3659.5288f, 38.5275f, 178.7849f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			PED::SET_PED_TO_LOAD_COVER(Local_273[40 /*34*/], true);
			PED::SET_PED_COMBAT_MOVEMENT(Local_273[40 /*34*/], 1);
			break;
		case 5:
			Local_273[9 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 95.0368f, 3689.2026f, 38.5154f, 174.3295f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[9 /*34*/].f_20 = { 95.0368f, 3689.2026f, 38.5154f };
			Local_273[9 /*34*/].f_26 = 0;
			Local_273[9 /*34*/].f_27 = 1;
			PED::SET_PED_SEEING_RANGE(Local_273[9 /*34*/], 35f);
			PED::SET_PED_HEARING_RANGE(Local_273[9 /*34*/], 35f);
			PED::SET_PED_COMBAT_RANGE(Local_273[9 /*34*/], 0);
			break;
		case 7:
			Local_273[6 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 30.87f, 3667.35f, 40.67f, -91.16f, joaat("WEAPON_PUMPSHOTGUN"), 0, 1, 1);
			Local_273[6 /*34*/].f_18 = 4;
			Local_273[6 /*34*/].f_20 = { 33.8241f, 3666.7546f, 38.7235f };
			Local_273[6 /*34*/].f_27 = 1;
			Local_273[6 /*34*/].f_26 = 1;
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[6 /*34*/], 51, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[6 /*34*/], 50, true);
			ENTITY::SET_ENTITY_HEALTH(Local_273[6 /*34*/], 120, 0);
			PED::SET_PED_ACCURACY(Local_273[6 /*34*/], 1);
			Local_273[7 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 28.5441f, 3663.8804f, 39.7258f, 205.9603f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			PED::SET_PED_ACCURACY(Local_273[7 /*34*/], 1);
			break;
		case 9:
			if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_273[17 /*34*/]))
				{
					Local_273[17 /*34*/] = func_764(Local_284[12 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
				}
			}
			break;
		case 10:
			Local_273[8 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 49.4862f, 3691.0225f, 38.7542f, 95.4359f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[8 /*34*/].f_20 = { 41.5072f, 3686.138f, 38.5641f };
			Local_273[8 /*34*/].f_26 = 2;
			Local_273[8 /*34*/].f_27 = 1;
			Local_273[8 /*34*/].f_18 = 4;
			Local_273[9 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 95.0368f, 3689.2026f, 38.5154f, 174.3295f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[9 /*34*/].f_20 = { 95.0368f, 3689.2026f, 38.5154f };
			Local_273[9 /*34*/].f_26 = 0;
			Local_273[9 /*34*/].f_27 = 1;
			Local_273[11 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 15.9229f, 3705.1104f, 38.6844f, 274.0622f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[11 /*34*/].f_20 = { 35.1732f, 3704.942f, 38.6235f };
			Local_273[11 /*34*/].f_26 = 0;
			Local_273[11 /*34*/].f_27 = 1;
			break;
		case 11:
			if (!Local_273[34 /*34*/].f_1)
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "t1b") && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "t1b"))
				{
					Local_284[15 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 56.8454f, 3690.1519f, 38.9216f, 334.078f, true, true, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[15 /*12*/], true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[15 /*12*/], 4, "t1b", 2, 1000, 786603);
					VEHICLE::SET_PLAYBACK_SPEED(Local_284[15 /*12*/], 1.1f);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[15 /*12*/]);
					Local_273[12 /*34*/] = func_764(Local_284[15 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_SAWNOFFSHOTGUN"), -1, 0, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[15 /*12*/], false) && !PED::IS_PED_INJURED(Local_273[12 /*34*/]))
					{
						TASK::TASK_DRIVE_BY(Local_273[12 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 30, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						PED::SET_PED_ACCURACY(Local_273[12 /*34*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_273[12 /*34*/], 120, 0);
					}
					Local_284[16 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 58.6292f, 3692.5254f, 38.9216f, 243.7529f, true, true, false);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[16 /*12*/], true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[16 /*12*/], 3, "t1b", 2, 1000, 786603);
					VEHICLE::SET_PLAYBACK_SPEED(Local_284[16 /*12*/], 1.1f);
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[16 /*12*/]);
					Local_273[13 /*34*/] = func_764(Local_284[16 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_SAWNOFFSHOTGUN"), -1, 0, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[16 /*12*/], false) && !PED::IS_PED_INJURED(Local_273[13 /*34*/]))
					{
						TASK::TASK_DRIVE_BY(Local_273[13 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 30, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						PED::SET_PED_ACCURACY(Local_273[13 /*34*/], 1);
						ENTITY::SET_ENTITY_HEALTH(Local_273[13 /*34*/], 120, 0);
					}
				}
				else
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(3, "t1be");
					VEHICLE::REQUEST_VEHICLE_RECORDING(4, "t1b");
				}
			}
			break;
		case 12:
			break;
		case 13:
			Local_284[24 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, Local_284[24 /*12*/].f_2, Local_284[24 /*12*/].f_5, true, true, false);
			Local_273[24 /*34*/] = func_764(Local_284[24 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[24 /*12*/], 5, "t1b", 2, 1000, 786603);
			if (!PED::IS_PED_INJURED(Local_273[24 /*34*/]))
			{
				TASK::TASK_DRIVE_BY(Local_273[24 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 20, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
			}
			Local_284[25 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, Local_284[25 /*12*/].f_2, Local_284[25 /*12*/].f_5, true, true, false);
			Local_273[25 /*34*/] = func_764(Local_284[25 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[25 /*12*/], 6, "t1b", 2, 0, 786603);
			if (!PED::IS_PED_INJURED(Local_273[25 /*34*/]))
			{
				TASK::TASK_DRIVE_BY(Local_273[25 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 0f, 20, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
			}
			break;
		case 14:
			Local_284[20 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 86.6435f, 3736.6387f, 38.6777f, 65.1543f, true, true, false);
			Local_273[32 /*34*/] = func_764(Local_284[20 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[20 /*12*/], true);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[20 /*12*/], 13, "trevor1dw", 2, 1000, 786603);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[20 /*12*/]);
			Local_284[22 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 88.933f, 3739.4028f, 39.1818f, 69.048f, true, true, false);
			Local_273[34 /*34*/] = func_764(Local_284[22 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[22 /*12*/], true);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[22 /*12*/], 15, "trevor1dw", 2, 1000, 786603);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[22 /*12*/]);
			break;
		case 15:
			if (!Local_273[34 /*34*/].f_1)
			{
				Local_284[15 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 56.8454f, 3690.1519f, 38.9216f, 334.078f, true, true, false);
				Local_273[12 /*34*/] = func_764(Local_284[15 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
				Local_284[16 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 58.6292f, 3692.5254f, 38.9216f, 243.7529f, true, true, false);
				Local_273[13 /*34*/] = func_764(Local_284[16 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_SAWNOFFSHOTGUN"), -1, 0, 1);
			}
			break;
		case 16:
			Local_284[20 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 88.5008f, 3736.9338f, 38.6946f, 57.4576f, true, true, false);
			Local_273[32 /*34*/] = func_764(Local_284[20 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[20 /*12*/], true);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[20 /*12*/], 19, "trevor1dw", 2, 1000, 786603);
			Local_284[22 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 91.7644f, 3737.0618f, 38.6493f, 57.2141f, true, true, false);
			Local_273[34 /*34*/] = func_764(Local_284[22 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_284[22 /*12*/], true);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[22 /*12*/], 21, "trevor1dw", 2, 1000, 786603);
			break;
		case 17:
			Local_284[15 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 5.78f, 3660.17f, 39.64f, 55.61f, true, true, false);
			Local_273[12 /*34*/] = func_764(Local_284[15 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[15 /*12*/], 22, "trevor1dw", 2, 1000, 786603);
			Local_284[16 /*12*/] = VEHICLE::CREATE_VEHICLE(Local_542.f_0, 4.62f, 3658.89f, 39.69f, 55.61f, true, true, false);
			Local_273[13 /*34*/] = func_764(Local_284[16 /*12*/], joaat("G_M_Y_Lost_01"), iLocal_476, joaat("WEAPON_PISTOL"), -1, 0, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_284[16 /*12*/], 23, "trevor1dw", 2, 1000, 786603);
			break;
		case 8:
			Local_273[27 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 92.0689f, 3751.1042f, 39.7797f, 234.5336f, joaat("WEAPON_PUMPSHOTGUN"), 0, 1, 1);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[27 /*34*/], 62.1389f, 3695.9062f, 40.2992f, 2f, false, false);
			Local_273[27 /*34*/].f_20 = { 62.1389f, 3695.9062f, 40.2992f };
			Local_273[27 /*34*/].f_26 = 2;
			Local_273[27 /*34*/].f_27 = 1;
			Local_273[27 /*34*/].f_18 = 5;
			Local_273[38 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 31.7563f, 3734.149f, 39.6287f, 160.693f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[38 /*34*/].f_18 = 5;
			Local_273[38 /*34*/].f_26 = 2;
			Local_273[38 /*34*/].f_27 = 2;
			Local_273[38 /*34*/].f_20 = { 37.5261f, 3714.5693f, 38.6235f };
			Local_273[39 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 31.03f, 3735.61f, 40.63f, 173.79f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[39 /*34*/].f_18 = 0;
			Local_273[39 /*34*/].f_26 = 2;
			Local_273[39 /*34*/].f_27 = 1;
			Local_273[39 /*34*/].f_20 = { 31.03f, 3735.39f, 40.63f };
			break;
		case 18:
			Local_273[15 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 50.7065f, 3698.1155f, 38.7549f, 150.7802f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[15 /*34*/].f_26 = 2;
			Local_273[15 /*34*/].f_27 = 1;
			Local_273[15 /*34*/].f_18 = 4;
			Local_273[15 /*34*/].f_20 = { 37.2f, 3667.34f, 39.61f };
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[15 /*34*/], false);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[15 /*34*/], 37, true);
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[15 /*34*/], 37.2f, 3667.34f, 39.61f, 2f, true, false);
			PED::SET_PED_ACCURACY(Local_273[15 /*34*/], 1);
			Local_273[16 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 50.99f, 3695.97f, 39.75f, -152.64f, joaat("WEAPON_PUMPSHOTGUN"), 0, 1, 1);
			Local_273[16 /*34*/].f_26 = 3;
			Local_273[16 /*34*/].f_27 = 2;
			Local_273[16 /*34*/].f_18 = 8;
			Local_273[16 /*34*/].f_20 = { 27.3f, 3684.03f, 39.51f };
			PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[16 /*34*/], 27.3f, 3684.03f, 39.51f, 10f, true, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[16 /*34*/], false);
			break;
		case 19:
			if (!ENTITY::IS_ENTITY_DEAD(Local_284[3 /*12*/], false))
			{
			}
			break;
		case 6:
			Local_273[21 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 91.8644f, 3717.2861f, 38.7288f, 158.26f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[21 /*34*/].f_20 = { 91.8644f, 3717.2861f, 38.7288f };
			Local_273[21 /*34*/].f_18 = 0;
			Local_273[21 /*34*/].f_26 = 0;
			Local_273[22 /*34*/] = func_740(joaat("G_M_Y_Lost_01"), iLocal_476, 90.3136f, 3704.2324f, 38.5071f, 103.4727f, joaat("WEAPON_PISTOL"), 0, 1, 1);
			Local_273[22 /*34*/].f_20 = { 90.3136f, 3704.2324f, 38.5071f };
			Local_273[22 /*34*/].f_18 = 0;
			Local_273[22 /*34*/].f_26 = 0;
			break;
		case 20:
			break;
		case 22:
			break;
	}
}

int func_764(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x986E4
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam1, iParam4, true, true);
		func_131(iVar0, 494);
	}
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam3, -1, bParam6, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam3, bParam6);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam2);
	PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar0, 0);
	PED::SET_PED_AS_ENEMY(iVar0, true);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, true);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, bParam5);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, false);
	ENTITY::SET_ENTITY_HEALTH(iVar0, 125, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	__LIB_0__::func_609(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, true);
	PED::SET_PED_KEEP_TASK(iVar0, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 37, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 49, true);
	PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, "DEFAULT_ACTION");
	return iVar0;
}

void func_765(int iParam0)//Position - 0x9879A
{
	Local_277[iParam0 /*18*/].f_2 = 0;
	Local_277[iParam0 /*18*/].f_1 = 0;
	Local_277[iParam0 /*18*/].f_4 = 0;
	if (HUD::DOES_BLIP_EXIST(Local_277[iParam0 /*18*/].f_17))
	{
		HUD::REMOVE_BLIP(&(Local_277[iParam0 /*18*/].f_17));
	}
}

int func_766(int iParam0)//Position - 0x987DD
{
	STREAMING::REQUEST_MODEL(iParam0->f_6);
	if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, true, true, false);
			iParam0->f_8 = 0;
			iParam0->f_9 = 0;
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 15f);
			return 1;
		}
	}
	return 0;
}

void func_767(int iParam0, float fParam1)//Position - 0x98844
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_59 = false;
	if (!bLocal_41)
	{
		if (bLocal_40)
		{
			__LIB_15__::func_905();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_41 = true;
		}
	}
	else if (!bLocal_40)
	{
		__LIB_15__::func_910();
		bLocal_41 = false;
	}
	if (bLocal_40)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_34)
	{
		if (iLocal_29)
		{
			fLocal_86 = 0f;
		}
		else
		{
			fLocal_86 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_925(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_39 = 1;
					}
					else
					{
						iLocal_39 = 0;
					}
				}
				fLocal_83 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_84) * fLocal_86));
				if (bLocal_38)
				{
					__LIB_17__::func_489(iParam0, fLocal_83);
					__LIB_17__::func_488(iParam0, fLocal_93);
					if (fLocal_88 > 1000f)
					{
						if (iLocal_125 == 0)
						{
							__LIB_17__::func_487(iParam0, fLocal_93);
						}
						fVar0 = ((fLocal_83 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_125) * 2000f));
						func_800(iParam0, fVar0, fLocal_87);
						iLocal_125++;
						if (iLocal_125 > 2)
						{
							fLocal_88 = 0f;
						}
					}
					else
					{
						iLocal_125 = 0;
						fLocal_88 = (fLocal_88 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_83 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_46)
		{
			if (!bLocal_28)
			{
				func_796(iParam0, ((fParam1 * fLocal_84) * fLocal_86), 0);
				if (!iLocal_49)
				{
				}
				iLocal_49 = 0;
			}
			if (bLocal_31)
			{
				func_792(iParam0);
			}
			if (!bLocal_28)
			{
				func_775(iParam0, ((fParam1 * fLocal_84) * fLocal_86), 0);
			}
		}
		if (iLocal_36)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_163 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_129 = { ENTITY::GET_ENTITY_COORDS(iLocal_163, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_163, &fLocal_67, &fLocal_68, &fLocal_69, &fLocal_70);
				}
			}
			iLocal_36 = 0;
		}
		if (iLocal_35)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
			{
				__LIB_15__::func_906(iLocal_164);
				iLocal_164 = iLocal_163;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_164, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_164, Local_129, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_164, fLocal_67, fLocal_68, fLocal_69, fLocal_70);
			}
			fLocal_82 = fLocal_85;
			bLocal_28 = true;
			iLocal_35 = 0;
		}
		if (bLocal_28)
		{
			while (!func_768(&iParam0, fLocal_82))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_29 = 1;
		}
		if (iLocal_42)
		{
			iLocal_42 = 0;
		}
	}
}

int func_768(int iParam0, float fParam1)//Position - 0x98AD7
{
	if (!iLocal_43)
	{
		bLocal_28 = true;
		func_770();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_112 == -1)
			{
				while (!func_769(iParam0, iLocal_112, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_33)
				{
					iLocal_29 = 1;
					fLocal_86 = 0f;
					iLocal_113 = 0;
					iLocal_115 = 0;
					iLocal_114 = 0;
					iLocal_109 = 0;
					iLocal_110 = 0;
					iLocal_111 = 0;
					iLocal_116 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
				}
			}
		}
		iLocal_43 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_84) * fLocal_86));
				func_769(iParam0, iLocal_112, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_83 = fParam1;
		iLocal_119 = 0;
		iLocal_122 = 0;
		fLocal_98 = 0f;
		fLocal_97 = 0f;
		func_775(*iParam0, ((1f * fLocal_84) * fLocal_86), 1);
		func_796(*iParam0, ((1f * fLocal_84) * fLocal_86), 1);
		func_792(*iParam0);
		if ((iLocal_116 == 0 && iLocal_117 == 0) && iLocal_118 == 0)
		{
			iLocal_29 = 0;
			bLocal_28 = false;
			iLocal_43 = 0;
			return 1;
		}
	}
	return 0;
}

int func_769(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x98C09
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_142);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_142))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_142, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_120 && iParam1 != iLocal_121)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_142, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_142, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_142, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_142, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_142))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_142);
					}
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
				else
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_142, 10f, 786603);
					}
					else if (iParam1 != iLocal_120 && iParam1 != iLocal_121)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_142, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_142, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_142, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_142, true);
					}
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
					if (bParam5)
					{
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_770()//Position - 0x98DEF
{
	func_773();
	func_772();
	__LIB_40__::func_812();
}

void func_772()//Position - 0x98EFA
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_160[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_160[iVar0]));
			}
		}
		iLocal_108[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_153[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
		}
		iVar0++;
	}
	iLocal_114 = 0;
	iLocal_111 = 0;
}

void func_773()//Position - 0x98F75
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_158[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_158[iVar0]));
			}
		}
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_102[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
			}
		}
		iLocal_103[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!iLocal_152[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
		}
		iVar0++;
	}
	iLocal_113 = 0;
	iLocal_109 = 0;
}

void func_775(int iParam0, float fParam1, bool bParam2)//Position - 0x9908B
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
		iVar0 = iLocal_115;
		while (iVar0 < 22)
		{
			if (iLocal_106[iVar0] != 99)
			{
				if (iLocal_106[iVar0] == 0)
				{
					if (iLocal_105[iVar0] > 0)
					{
						if (!bLocal_28)
						{
							if (fLocal_83 > (fLocal_75[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_894(iLocal_154[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_107[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_107[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_107[iVar0]), 1);
								iLocal_106[iVar0]++;
								iLocal_117++;
							}
						}
						else
						{
							fVar6 = (fLocal_83 - fLocal_75[iVar0]);
							fVar6 = (fVar6 * fLocal_76[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < __LIB_17__::func_477(iLocal_105[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_154[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_107[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_107[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_107[iVar0]), 1);
									iLocal_106[iVar0]++;
									iLocal_117++;
								}
								else
								{
									iLocal_106[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_106[iVar0] = 99;
					}
				}
				else if (iLocal_106[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
					if (BitTest(iLocal_107[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
					}
					else if (!bLocal_55 && ((!BitTest(iLocal_107[iVar0], 2) && bVar10) || (BitTest(iLocal_107[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_154[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_154[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
							{
								if (fLocal_83 >= (fLocal_75[iVar0] - (fLocal_96 * fParam1)))
								{
									if ((iLocal_42 || bParam2) || (!bLocal_59 && !func_787(Local_128[iVar0 /*3*/], Var5, 5f, fLocal_94)))
									{
										if (bLocal_38)
										{
											func_786(Local_128[iVar0 /*3*/], Var5, fLocal_87);
										}
										iLocal_161[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_154[iVar0], Local_128[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_154[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_161[iVar0], 0);
										}
										if (uLocal_51 && !BitTest(iLocal_107[iVar0], 0))
										{
											__LIB_17__::func_482(iLocal_161[iVar0]);
										}
										if (BitTest(iLocal_107[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_161[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_161[iVar0], Local_128[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_161[iVar0], fLocal_71[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_154[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161[iVar0], 5f);
										}
										if (!BitTest(iLocal_107[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_161[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_161[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_161[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
										iLocal_117 = (iLocal_117 - 1);
										iLocal_106[iVar0]++;
										bLocal_59 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_161[iVar0], Local_128[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_161[iVar0], fLocal_71[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_154[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_161[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
							iLocal_117 = (iLocal_117 - 1);
							iLocal_106[iVar0]++;
						}
					}
				}
				else if (iLocal_106[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
					if (!BitTest(iLocal_107[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_107[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
							iVar13 = 2;
						}
						else if (!bLocal_55 && ((!BitTest(iLocal_107[iVar0], 2) && bVar10) || (BitTest(iLocal_107[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false))
						{
							if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_161[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_161[iVar0], true), Var5) < 10000f || bParam2) || iLocal_42)
									{
										__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_107[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (fLocal_83 >= fLocal_75[iVar0])
						{
							if (5 > iLocal_110)
							{
								fVar6 = (fLocal_83 - fLocal_75[iVar0]);
								fVar6 = (fVar6 * fLocal_76[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_161[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_105[iVar0], fVar6, &cLocal_142) };
										if (((!func_787(Var3, Var5, 5f, fLocal_94) && func_787(Var4, Var5, 5f, fLocal_94)) && !iLocal_42) && !bParam2)
										{
											if (!BitTest(iLocal_107[iVar0], 1))
											{
												__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
											}
											iLocal_110++;
											iLocal_106[iVar0]++;
										}
										else if (((!bLocal_59 || BitTest(iLocal_107[iVar0], 1)) || iLocal_42) || bParam2)
										{
											if (func_769(&(iLocal_161[iVar0]), iLocal_105[iVar0], fVar6, 1, 0, 0, bLocal_57, bLocal_56))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
												{
													if (BitTest(iLocal_107[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_161[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_161[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_161[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_161[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_107[iVar0], 1))
												{
													__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
												}
												iLocal_110++;
												iLocal_106[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_107[iVar0], 1))
										{
											__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
										}
										iLocal_110++;
										iLocal_106[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_107[iVar0], 1))
								{
									__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
								}
								iLocal_110++;
								iLocal_106[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_107[iVar0], 1))
						{
							__LIB_33__::func_554(&(iLocal_161[iVar0]), iVar13, 1);
						}
						iLocal_110++;
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_32 && !iLocal_29) && !bLocal_48) && (((!bLocal_57 && !bLocal_56) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_161[iVar0])) || __LIB_40__::func_813(iLocal_161[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_50)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_161[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_923(iLocal_161[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_939(iVar2, iLocal_161[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												__LIB_33__::func_553(iLocal_161[iVar0]);
												iLocal_106[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
						}
						else
						{
							iLocal_106[iVar0]++;
						}
					}
					else
					{
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161[iVar0]))
						{
							iLocal_106[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_161[iVar0], (fParam1 * fLocal_76[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_105[iVar0], &cLocal_142))
							{
								if (fLocal_83 > (fLocal_75[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161[iVar0]);
							}
						}
					}
					else
					{
						iLocal_106[iVar0]++;
					}
				}
				else if (iLocal_106[iVar0] == 5)
				{
					if (!iLocal_161[iVar0] == iLocal_165)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_161[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_161[iVar0]);
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
						if (!bLocal_40 && !bLocal_53)
						{
							if (iLocal_105[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_105[iVar0], &cLocal_142);
							}
						}
						if (!bLocal_30)
						{
							if (!bLocal_58)
							{
								__LIB_15__::func_906(iLocal_161[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
						}
					}
					iLocal_110 = (iLocal_110 - 1);
					iLocal_106[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_115 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		__LIB_40__::func_815();
	}
}

void func_786(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x9A204
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_41)
	{
		if (!func_787(Param0, Param1, fParam2, 200f))
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

int func_787(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0x9A277
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_41)
		{
			if (!bLocal_28)
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

void func_792(int iParam0)//Position - 0x9A39E
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
		iVar0 = iLocal_114;
		while (iVar0 < 1)
		{
			switch (iLocal_108[iVar0])
			{
				case 0:
					if (!iLocal_153[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_127[iVar0 /*3*/], fLocal_81, fLocal_81, fLocal_81, false, true, 0))
						{
							iLocal_116++;
							iLocal_108[iVar0]++;
						}
					}
					else
					{
						iLocal_108[iVar0] = 99;
					}
					break;
				case 1:
					if (1 > iLocal_111)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_153[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_153[iVar0]))
							{
								if ((bLocal_28 || iLocal_42) || (!bLocal_59 && !func_787(Local_127[iVar0 /*3*/], Var1, 5f, fLocal_94)))
								{
									if (bLocal_38)
									{
										func_786(Local_127[iVar0 /*3*/], Var1, fLocal_87);
									}
									iLocal_160[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_153[iVar0], Local_127[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_153[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_160[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_160[iVar0], fLocal_77[iVar0], fLocal_78[iVar0], fLocal_79[iVar0], fLocal_80[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_160[iVar0], __LIB_15__::func_908()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_160[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_153[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_160[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_160[iVar0], __LIB_15__::func_909()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_160[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_160[iVar0], true);
									iLocal_116 = (iLocal_116 - 1);
									iLocal_111++;
									iLocal_108[iVar0]++;
									bLocal_59 = true;
								}
							}
						}
						else
						{
							iLocal_116 = (iLocal_116 - 1);
							iLocal_111++;
							iLocal_108[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_160[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_160[iVar0], true) };
						}
						if (fLocal_95 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_95 * fLocal_95))
						{
							if (!__LIB_15__::func_939(iLocal_160[iVar0], iParam0, 0))
							{
								if (!bLocal_30)
								{
									__LIB_15__::func_906(iLocal_160[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_160[iVar0]));
								}
								iLocal_111 = (iLocal_111 - 1);
								iLocal_108[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_108[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_114 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_793();
	}
}

void func_793()//Position - 0x9A694
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_160[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_160[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_160[iVar0], true, false);
			}
			__LIB_15__::func_906(iLocal_160[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!iLocal_153[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
		}
		iVar0++;
	}
	iLocal_114 = 0;
	iLocal_111 = 0;
}

void func_796(int iParam0, float fParam1, int iParam2)//Position - 0x9A730
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
			fLocal_83 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_113;
		while (iVar0 < 11 && !bVar17)
		{
			if (iLocal_103[iVar0] != 99)
			{
				if (iLocal_103[iVar0] == 0)
				{
					if (iLocal_102[iVar0] > 0 && iLocal_152[iVar0] != 0)
					{
						if (!bLocal_28)
						{
							if (fLocal_83 < (fLocal_66[iVar0] + 20000f))
							{
								if (fLocal_83 >= (fLocal_66[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_894(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_104[iVar0]), 1);
									iLocal_118++;
									iLocal_103[iVar0]++;
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
								__LIB_17__::func_486(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_83 - fLocal_66[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < __LIB_17__::func_477(iLocal_102[iVar0]))
								{
									if (__LIB_15__::func_894(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_104[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_104[iVar0]), 1);
									iLocal_118++;
									iLocal_103[iVar0]++;
								}
								else
								{
									__LIB_17__::func_486(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						__LIB_17__::func_486(iVar0, 1090519040);
					}
				}
				else if (iLocal_103[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
					bVar11 = false;
					if (BitTest(iLocal_104[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_55 && ((!BitTest(iLocal_104[iVar0], 2) && bVar13) || (BitTest(iLocal_104[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
						bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_152[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_152[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142)) && bVar11)
						{
							if (fLocal_83 >= (fLocal_66[iVar0] - (fLocal_96 * fParam1)))
							{
								if ((iLocal_42 || iParam2) || (!bLocal_59 && !func_787(Local_126[iVar0 /*3*/], Var8, 5f, fLocal_94)))
								{
									if (bLocal_38)
									{
										func_786(Local_126[iVar0 /*3*/], Var8, fLocal_87);
									}
									iLocal_158[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_152[iVar0], Local_126[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_152[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_158[iVar0], 0);
									}
									if (uLocal_51 && !BitTest(iLocal_104[iVar0], 0))
									{
										__LIB_17__::func_482(iLocal_158[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_158[iVar0], Local_126[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_158[iVar0], fLocal_62[iVar0], fLocal_63[iVar0], fLocal_64[iVar0], fLocal_65[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_152[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_152[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_158[iVar0], 5f);
									}
									if (BitTest(iLocal_104[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_158[iVar0], true);
									}
									if (!BitTest(iLocal_104[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_158[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_158[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_158[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_158[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
									iLocal_118 = (iLocal_118 - 1);
									iLocal_103[iVar0]++;
									bLocal_59 = true;
								}
								else if (fLocal_83 > fLocal_66[iVar0])
								{
									iLocal_118 = (iLocal_118 - 1);
									__LIB_17__::func_486(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_103[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_124 || iLocal_124 == 0)) || iLocal_42) || iParam2)
					{
						if (!BitTest(iLocal_104[iVar0], 1))
						{
							if (BitTest(iLocal_104[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_907());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_907());
								iVar15 = 2;
							}
							else if (!bLocal_55 && ((!BitTest(iLocal_104[iVar0], 2) && bVar13) || (BitTest(iLocal_104[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(__LIB_17__::func_484());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_17__::func_484());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
							{
								if (!bLocal_59 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_158[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true), Var8) < 10000f || iParam2) || iLocal_42)
										{
											__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_104[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
							if (fLocal_83 >= fLocal_66[iVar0])
							{
								if (5 > iLocal_109)
								{
									fVar9 = (fLocal_83 - fLocal_66[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_102[iVar0], fVar9, &cLocal_142) };
											if (!func_787(Var6, Var8, 5f, fLocal_94) && func_787(Var7, Var8, 5f, fLocal_94))
											{
												if (!BitTest(iLocal_104[iVar0], 1))
												{
													__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
												}
												__LIB_17__::func_486(iVar0, 1090519040);
											}
											else if (((!bLocal_59 || BitTest(iLocal_104[iVar0], 1)) || iLocal_42) || iParam2)
											{
												if (func_769(&(iLocal_158[iVar0]), iLocal_102[iVar0], fVar9, 1, 0, 0, 1, bLocal_56))
												{
													if (!BitTest(iLocal_104[iVar0], 1))
													{
														__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_158[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
													iLocal_109++;
													iLocal_103[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_104[iVar0], 1))
											{
												__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
											}
											__LIB_17__::func_486(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142))
									{
										if (!BitTest(iLocal_104[iVar0], 1))
										{
											__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
										}
										__LIB_17__::func_486(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_104[iVar0], 1))
									{
										__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
									}
									__LIB_17__::func_486(iVar0, 1090519040);
								}
							}
							else if (iLocal_39 && !bLocal_47)
							{
								if (!BitTest(iLocal_104[iVar0], 1))
								{
									__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
								}
								__LIB_17__::func_486(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_104[iVar0], 1))
							{
								__LIB_33__::func_554(&(iLocal_158[iVar0]), iVar15, 0);
							}
							__LIB_17__::func_486(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_124 = iVar0;
					}
				}
				else if (iLocal_103[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_37)
									{
										if ((!bLocal_32 && !iLocal_29) && __LIB_40__::func_813(iLocal_158[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_123 || iLocal_123 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_924(iLocal_158[iVar0], iVar5) || __LIB_15__::func_939(iVar5, iLocal_158[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_123 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_52 && !BitTest(iLocal_104[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_123 || iLocal_123 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_158[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_123 = iVar0;
										}
									}
									if (bVar18)
									{
										__LIB_33__::func_553(iLocal_158[iVar0]);
										iLocal_103[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
						}
						else
						{
							iLocal_103[iVar0]++;
						}
					}
					else
					{
						iLocal_103[iVar0]++;
					}
				}
				else if (iLocal_103[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
						{
							iLocal_103[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_158[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_158[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_102[iVar0], &cLocal_142))
							{
								if (fLocal_83 > (fLocal_66[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
							}
						}
					}
					else
					{
						iLocal_103[iVar0]++;
					}
				}
				else if (iLocal_103[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_158[iVar0]);
					}
					iLocal_109 = (iLocal_109 - 1);
					__LIB_17__::func_486(iVar0, fVar10);
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
			iLocal_113 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_123 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_124 = 0;
		}
	}
	else
	{
		func_797();
	}
}

void func_797()//Position - 0x9B25F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_158[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_158[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_158[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_158[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_158[iVar0]);
				}
			}
			__LIB_17__::func_481(iLocal_158[iVar0]);
			__LIB_15__::func_906(iLocal_158[iVar0]);
		}
		iLocal_103[iVar0] = 0;
		iLocal_104[iVar0] = 0;
		if (!bLocal_40 && !bLocal_53)
		{
			if (iLocal_102[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_102[iVar0], &cLocal_142);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (!iLocal_152[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_152[iVar0]);
		}
		iVar0++;
	}
	iLocal_113 = 0;
	iLocal_109 = 0;
}

void func_800(int iParam0, float fParam1, float fParam2)//Position - 0x9B50C
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
			func_786(Var1, Var4, fVar5);
		}
	}
}

void func_807()//Position - 0x9B990
{
	if (!PED::IS_PED_INJURED(Local_273[7 /*34*/]))
	{
		if (Local_273[7 /*34*/].f_1 == 1)
		{
			if (Local_273[7 /*34*/].f_30 == 0)
			{
				if (ENTITY::IS_ENTITY_VISIBLE(Local_273[7 /*34*/]))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_273[7 /*34*/]) || __LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[7 /*34*/], 1) > 120f)
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[7 /*34*/], false);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[7 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_273[7 /*34*/], false), 20f, false, false);
						Local_273[7 /*34*/].f_30 = 1;
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_273[10 /*34*/]))
	{
		if (Local_273[10 /*34*/].f_1 == 1)
		{
			if (Local_273[10 /*34*/].f_30 == 0)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Local_273[10 /*34*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[10 /*34*/], false);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[10 /*34*/], ENTITY::GET_ENTITY_COORDS(Local_273[10 /*34*/], false), 20f, false, false);
					Local_273[10 /*34*/].f_30 = 1;
				}
			}
		}
	}
}

void func_808()//Position - 0x9BA8E
{
	if (iLocal_616 == 0)
	{
		if (__LIB_0__::func_680())
		{
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
					if (!__LIB_0__::func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0))
					{
						__LIB_0__::func_709(Local_281.f_0, "T1M1_GYAA", "WADE", 34);
						iLocal_617 = MISC::GET_GAME_TIMER();
						iLocal_616 = 1;
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				if (!__LIB_0__::func_75() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_281.f_0))
				{
					__LIB_0__::func_709(Local_280.f_0, "T1M1_GZAA", "RON", 34);
					iLocal_617 = MISC::GET_GAME_TIMER();
					iLocal_616 = 1;
				}
			}
		}
	}
	else if (__LIB_0__::func_611(&iLocal_617, MISC::GET_RANDOM_INT_IN_RANGE(8000, 18000)))
	{
		iLocal_616 = 0;
	}
}

void func_809()//Position - 0x9BB54
{
	if (iLocal_213)
	{
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_280.f_0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_280.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_280.f_0, ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), 100f, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_281.f_0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_281.f_0, joaat("SCRIPT_TASK_COMBAT_HATED_TARGETS_IN_AREA")) != 1)
				{
					TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(Local_281.f_0, ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), 100f, 0);
				}
			}
		}
	}
}

void func_810()//Position - 0x9BBDA
{
	switch (iLocal_248)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_290.f_0, false, false, false, false, false, false, false, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_290.f_0, true);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_290.f_0, 499f);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_290.f_0, true);
				VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_290.f_0, false);
			}
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, 0f, 0f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 1:
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, 0.5f, 0f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 2:
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, 0.5f, 0.5f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 3:
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, 0f, 0.5f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 4:
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, -0.5f, 0f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 5:
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, -0.5f, -0.5f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 6:
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, 0f, -0.5f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 7:
			GRAPHICS::ADD_PETROL_DECAL(Local_614 + Vector(0f, 0.5f, -0.5f), 1.5f, 2f, 1f);
			iLocal_248++;
			break;
		case 8:
			GRAPHICS::START_PETROL_TRAIL_DECALS(1f);
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(Local_615, 1f);
			iLocal_248++;
			break;
		case 9:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(52.47f, 3660.36f, 38.81f, 0.5f);
			iLocal_248++;
			break;
		case 10:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(52.8f, 3659.22f, 38.72f, 0.5f);
			iLocal_248++;
			break;
		case 11:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(53.16f, 3658.02f, 38.7f, 0.5f);
			iLocal_248++;
			break;
		case 12:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(53.62f, 3656.85f, 38.69f, 0.5f);
			iLocal_248++;
			break;
		case 13:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(54.16f, 3655.95f, 38.69f, 0.5f);
			iLocal_248++;
			break;
		case 14:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(54.76f, 3655.08f, 38.7f, 0.5f);
			iLocal_248++;
			break;
		case 15:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(55.44f, 3654.26f, 38.69f, 0.5f);
			iLocal_248++;
			break;
		case 16:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(56.21f, 3653.11f, 38.69f, 0.5f);
			iLocal_248++;
			break;
		case 17:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(57.01f, 3651.88f, 38.7f, 0.5f);
			iLocal_248++;
			break;
		case 18:
			GRAPHICS::ADD_PETROL_TRAIL_DECAL_INFO(57.9966f, 3650.1963f, 38.6798f, 0.5f);
			GRAPHICS::END_PETROL_TRAIL_DECALS();
			iLocal_248++;
			break;
		case 19:
			if (ENTITY::DOES_ENTITY_EXIST(Local_290.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					if (__LIB_0__::func_76(Local_290.f_0, PLAYER::PLAYER_PED_ID(), 1) > 12f)
					{
						if (FIRE::IS_ENTITY_ON_FIRE(Local_290.f_0))
						{
							VEHICLE::EXPLODE_VEHICLE(Local_290.f_0, true, false);
							iLocal_248++;
						}
					}
				}
			}
			break;
	}
}

void func_811()//Position - 0x9BF8F
{
	if (iLocal_235 == 0)
	{
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_252))
		{
			iLocal_252 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_ARMOUR_STANDARD"), 30.45f, 3669.81f, 40.31f, 90.41f, 0.56f, -52.25f, 0, -1, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_253))
		{
			iLocal_253 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 66.33f, 3711.64f, 39.45f, -0.22f, 0.33f, -58.33f, 0, -1, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_254))
		{
			iLocal_254 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 14.63f, 3719.88f, 39.53f, 1.52f, 2.15f, 60.76f, 0, -1, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_255))
		{
			iLocal_255 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 46.52f, 3683.28f, 39.89f, 90.7f, 0.05f, 48.06f, 0, -1, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_256))
		{
			iLocal_256 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_HEALTH_STANDARD"), 66.98f, 3686.43f, 39.12f, 178.74f, -0.08f, 10.16f, 0, -1, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_257))
		{
			iLocal_257 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 30.81f, 3669.59f, 40.26f, 94.06f, -0.32f, 79.76f, 0, 100, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_258))
		{
			iLocal_258 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 56.63f, 3690.69f, 38.95f, -85.78f, 0.05f, 90.26f, 0, 100, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_259))
		{
			iLocal_259 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_WALLET"), 57.78f, 3690.51f, 38.94f, -92.04f, 1.4f, -6.62f, 0, 3, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_260))
		{
			iLocal_260 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_WALLET"), 31.08f, 3670.03f, 40.25f, -92.28f, -1.83f, -100.58f, 0, 42, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_261))
		{
			iLocal_261 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_MONEY_PAPER_BAG"), 10.93f, 3735.69f, 39.66f, 1.37f, 0.19f, 0.28f, 0, 314, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_262))
		{
			iLocal_262 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_BAT"), 72.28f, 3703.08f, 39.73f, 90.25f, 2.47f, 155.49f, 0, -1, 2, true, 0);
		}
		if (!OBJECT::DOES_PICKUP_EXIST(iLocal_263))
		{
			iLocal_263 = OBJECT::CREATE_PICKUP_ROTATE(joaat("PICKUP_WEAPON_ASSAULTRIFLE"), 63.9f, 3682.91f, 38.86f, -89.24f, 0.48f, -1.06f, 0, 50, 2, true, 0);
		}
		iLocal_235 = 1;
	}
}

void func_812()//Position - 0x9C262
{
	int iVar0;
	if (iLocal_208 > 1)
	{
		func_813();
	}
	switch (iLocal_208)
	{
		case 0:
			__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			if (!func_95("T1M1_PH8"))
			{
				if (!__LIB_13__::func_755(&Local_297, 1))
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PH8", 7, 0, 0, 0))
					{
						iLocal_208++;
					}
				}
			}
			else
			{
				iLocal_208++;
			}
			break;
		case 1:
			if (!func_95("TRV_GT3"))
			{
				if (!__LIB_13__::func_755(&Local_297, 2))
				{
					func_676("TRV_GT3", 7500);
					func_94("TRV_GT3", 1);
				}
			}
			else
			{
				iLocal_345 = MISC::GET_GAME_TIMER();
				func_94("TRV_GT3", 0);
				iLocal_208 = 99;
			}
			break;
		case 99:
			iLocal_208 = 2;
			break;
		case 2:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(18000, 20000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_P21", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(18000, 20000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_P20", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(14000, 20000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_P18", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 5:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(18000, 22000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_P10", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_P23", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 7:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(15000, 23000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PH9", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 8:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(14000, 22000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_P22", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(18000, 22000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_P19", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 10:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(18000, 24000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DXA", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_611(&iLocal_345, MISC::GET_RANDOM_INT_IN_RANGE(18000, 20000)))
			{
				if (!__LIB_0__::func_75())
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DYA", 7, 0, 0, 0))
						{
							iLocal_345 = MISC::GET_GAME_TIMER();
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(2, 12);
							if (iLocal_208 == iVar0)
							{
								iLocal_208++;
							}
							else
							{
								iLocal_208 = iVar0;
							}
						}
					}
				}
			}
			break;
	}
}

void func_813()//Position - 0x9C78F
{
	if (!iLocal_607)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_284[12 /*12*/], 1) < 35f || (iLocal_458 > 3 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_284[12 /*12*/], PLAYER::PLAYER_PED_ID(), true)))
			{
				if (!ENTITY::IS_ENTITY_OCCLUDED(Local_284[12 /*12*/]))
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_FIG2", 8, 0, 0, 0))
						{
							iLocal_607 = 1;
						}
					}
				}
			}
		}
	}
	if (func_95("T1M1_FIG2"))
	{
		if (!func_95("T1M1_DVA"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
			{
				if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_284[12 /*12*/], 1) < 25f)
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_284[12 /*12*/], -1, false))
					{
						if (!ENTITY::IS_ENTITY_OCCLUDED(Local_284[12 /*12*/]))
						{
							if (!PED::IS_PED_INJURED(Local_273[17 /*34*/]))
							{
								if (!__LIB_0__::func_75())
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DVA", 8, 0, 0, 0))
									{
										iLocal_353 = MISC::GET_GAME_TIMER();
										func_94("T1M1_DVA", 1);
									}
								}
							}
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_611(&iLocal_353, 12000))
		{
			func_94("T1M1_DVA", 0);
		}
	}
	if (iLocal_219 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_284[12 /*12*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BLOW3", 8, 0, 0, 0))
					{
						iLocal_219 = 1;
					}
				}
			}
		}
	}
	if (iLocal_359 < 4)
	{
		if (!func_95("T1M1_METH"))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 36.9364f, 3730.9f, 38.6028f, true) < 45f)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_431[14]))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_METH", 8, 0, 0, 0))
								{
									iLocal_604 = MISC::GET_GAME_TIMER();
									func_94("T1M1_METH", 1);
									func_94("T1M1_METH_ONCE", 1);
								}
							}
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_431[7]))
						{
							if (!__LIB_0__::func_75())
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_METH", 8, 0, 0, 0))
								{
									iLocal_604 = MISC::GET_GAME_TIMER();
									func_94("T1M1_METH", 1);
									func_94("T1M1_METH_ONCE", 1);
								}
							}
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_611(&iLocal_604, 16000))
		{
			func_94("T1M1_METH", 0);
		}
	}
	if (iLocal_359 > 3)
	{
		if (!iLocal_606)
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BLOW", 8, 0, 0, 0))
				{
					iLocal_606 = 1;
				}
			}
		}
	}
	if (!func_95("T1M1_DVA"))
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 12f))
		{
			if (!__LIB_0__::func_75())
			{
				if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BLOW2", 8, 0, 0, 0))
				{
					iLocal_605 = MISC::GET_GAME_TIMER();
					func_94("T1M1_BLOW2", 1);
				}
			}
		}
	}
	else if (__LIB_0__::func_611(&iLocal_605, 12000))
	{
		func_94("T1M1_BLOW2", 0);
	}
	if (!func_95("T1M1_DUA"))
	{
		if (!PED::IS_PED_INJURED(Local_273[12 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[12 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[12 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[12 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_273[13 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[13 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[13 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[13 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_273[32 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[32 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[32 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[32 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_273[33 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[33 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[33 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[33 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_273[34 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[34 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[34 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[34 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_273[24 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[24 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[24 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[24 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_273[25 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[25 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[25 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[25 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(Local_273[7 /*34*/]))
		{
			if (__LIB_0__::func_76(PLAYER::PLAYER_PED_ID(), Local_273[7 /*34*/], 1) < 45f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_273[7 /*34*/], false))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(Local_273[7 /*34*/]))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_DUA", 8, 0, 0, 0))
							{
								iLocal_352 = MISC::GET_GAME_TIMER();
								func_94("T1M1_DUA", 1);
							}
						}
					}
				}
			}
		}
	}
	else if (__LIB_0__::func_611(&iLocal_352, 12000))
	{
		func_94("T1M1_DUA", 0);
	}
}

void func_814()//Position - 0x9CE98
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_40__::func_814(PLAYER::PLAYER_PED_ID(), iLocal_476, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_MODEL(iVar0, joaat("G_M_Y_Lost_01")))
			{
				if (__LIB_0__::func_611(&iLocal_342, 9000) || iLocal_389 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iVar0, false), true) < 20f || iLocal_389 == 0)
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						if (iVar1 == 0)
						{
							__LIB_0__::func_709(iVar0, "T1M1_EJAA", "LOST1", 9);
							iLocal_342 = MISC::GET_GAME_TIMER();
							iLocal_389 = 1;
						}
						if (iVar1 == 1)
						{
							__LIB_0__::func_709(iVar0, "T1M1_EKAA", "LOST2", 9);
							iLocal_342 = MISC::GET_GAME_TIMER();
							iLocal_389 = 1;
						}
						if (iVar1 == 2)
						{
							__LIB_0__::func_709(iVar0, "T1M1_ELAA", "LOST3", 9);
							iLocal_342 = MISC::GET_GAME_TIMER();
							iLocal_389 = 1;
						}
					}
				}
			}
		}
	}
}

void func_816()//Position - 0x9D08A
{
	if (iLocal_458 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_612 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_284[12 /*12*/], iLocal_612, true) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_284[12 /*12*/], iLocal_612))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[12 /*12*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[12 /*12*/]);
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
		{
			if (PED::IS_PED_INJURED(Local_273[17 /*34*/]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[12 /*12*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[12 /*12*/]);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_284[12 /*12*/], 75.25226f, 3649.6304f, 37.52011f, 68.415886f, 3646.1475f, 41.060265f, 5f, false, true, 0) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[12 /*12*/]))
			{
				if (!Local_273[17 /*34*/].f_1)
				{
					if (!Local_273[17 /*34*/].f_2)
					{
						if (!PED::IS_PED_INJURED(Local_273[17 /*34*/]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(Local_273[17 /*34*/], Local_284[12 /*12*/]))
								{
									TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
									TASK::TASK_LEAVE_VEHICLE(0, Local_284[12 /*12*/], 256);
									TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
									TASK::TASK_PERFORM_SEQUENCE(Local_273[17 /*34*/], iLocal_469);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
									Local_273[17 /*34*/].f_2 = 1;
								}
							}
						}
					}
					else if (func_759(Local_273[17 /*34*/], 1, 0))
					{
						func_733(17, 3, 1, 1);
						Local_273[17 /*34*/].f_1 = 1;
					}
				}
			}
		}
		else if (!Local_273[17 /*34*/].f_1)
		{
			if (!Local_273[17 /*34*/].f_2)
			{
				if (!PED::IS_PED_INJURED(Local_273[17 /*34*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
					TASK::TASK_PERFORM_SEQUENCE(Local_273[17 /*34*/], iLocal_469);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
					Local_273[17 /*34*/].f_2 = 1;
				}
			}
			else if (func_759(Local_273[17 /*34*/], 1, 0))
			{
				__LIB_0__::func_640(Local_273[17 /*34*/], "GENERIC_CURSE_HIGH", 18);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[17 /*34*/], false);
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[17 /*34*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 20f, true, false);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[17 /*34*/], 50, true);
				PED::SET_PED_COMBAT_RANGE(Local_273[17 /*34*/], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[17 /*34*/], 51, true);
				Local_273[17 /*34*/].f_1 = 1;
			}
		}
	}
	switch (iLocal_458)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 29.072308f, 3683.8389f, 38.082333f, 38.745857f, 3665.139f, 42.13492f, 48.25f, false, true, 0) || (iLocal_453 > 0 && PED::IS_PED_INJURED(Local_273[7 /*34*/])))
				{
					if (func_737(27.5448f, 3716.1765f, 39.0345f, 1f, 200f))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 25.347603f, 3659.5708f, 37.758526f, 33.682796f, 3675.0393f, 43.51378f, 5f, false, true, 0))
						{
							func_763(9);
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Local_284[12 /*12*/]);
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_284[12 /*12*/], "TREVOR_1_ONCOMING_TRUCK_Group", 0f);
							func_818(Local_273[17 /*34*/], Local_284[12 /*12*/]);
							VEHICLE::SET_PLAYBACK_SPEED(Local_284[12 /*12*/], 0.55f);
							iLocal_219 = 0;
							iLocal_458++;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 116.25134f, 3682.7861f, 38.005123f, 71.23152f, 3689.0225f, 42.005123f, 12.5f, false, true, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[12 /*12*/], false))
					{
						if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_284[12 /*12*/], false), 1f))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_284[12 /*12*/]))
							{
								VEHICLE::DELETE_VEHICLE(&(Local_284[12 /*12*/]));
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					if (func_817())
					{
						if (ENTITY::GET_ENTITY_HEALTH(Local_284[12 /*12*/]) < 1000)
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_284[12 /*12*/], 500f);
							ENTITY::SET_ENTITY_HEALTH(Local_284[12 /*12*/], 500, 0);
							iLocal_458 = 3;
						}
					}
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_284[12 /*12*/]) < 500)
					{
						if (func_817())
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_284[12 /*12*/], 400f);
							ENTITY::SET_ENTITY_HEALTH(Local_284[12 /*12*/], 400, 0);
							iLocal_458++;
						}
					}
				}
				else
				{
					iLocal_458++;
				}
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_284[12 /*12*/]) < 400)
					{
						if (func_817())
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_284[12 /*12*/], 300f);
							ENTITY::SET_ENTITY_HEALTH(Local_284[12 /*12*/], 300, 0);
							iLocal_458++;
						}
					}
				}
				else
				{
					iLocal_458++;
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					if (ENTITY::GET_ENTITY_HEALTH(Local_284[12 /*12*/]) < 400)
					{
						if (func_817())
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[12 /*12*/]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[12 /*12*/]);
							}
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_284[12 /*12*/], -100f);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_284[12 /*12*/], -500f);
							AUDIO::SET_HORN_PERMANENTLY_ON_TIME(Local_284[12 /*12*/], 4000f);
							iLocal_611 = MISC::GET_GAME_TIMER();
							iLocal_458++;
						}
					}
				}
				else
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_284[12 /*12*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_284[12 /*12*/]);
					}
					AUDIO::SET_HORN_PERMANENTLY_ON_TIME(Local_284[12 /*12*/], 4000f);
					iLocal_458++;
				}
			}
			break;
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					if (!__LIB_0__::func_611(&iLocal_611, 600))
					{
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_284[12 /*12*/], 0, 28f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
						iLocal_611 = MISC::GET_GAME_TIMER();
						iLocal_458++;
					}
					if (ENTITY::GET_ENTITY_HEALTH(Local_284[12 /*12*/]) < 150)
					{
						iLocal_458++;
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_284[12 /*12*/], 0, 6f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
					iLocal_458++;
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_611(&iLocal_611, 600))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_284[12 /*12*/], false))
				{
					if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_284[12 /*12*/]))
					{
						VEHICLE::EXPLODE_VEHICLE(Local_284[12 /*12*/], true, false);
						iLocal_458++;
					}
				}
			}
			break;
	}
}

int func_817()//Position - 0x9D7A7
{
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_610, false);
	if (iLocal_610 == joaat("WEAPON_SAWNOFFSHOTGUN") || iLocal_610 == joaat("WEAPON_PUMPSHOTGUN"))
	{
		return 1;
	}
	return 0;
}

void func_818(int iParam0, int iParam1)//Position - 0x9D7DF
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::TASK_DRIVE_BY(0, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, false, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				}
			}
		}
	}
}

void func_819()//Position - 0x9D84B
{
	int iVar0;
	if (iLocal_359 > 4 && iLocal_359 < 11)
	{
		__LIB_0__::func_189();
	}
	if (iLocal_359 > 6)
	{
		if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_318))
		{
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_318) == 9 || OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_318) == 10)
			{
				if (STREAMING::HAS_PTFX_ASSET_LOADED())
				{
					GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("ent_ray_meth_dust_settle", 40.8358f, 3729.02f, 38.6786f, 0f, 0f, -63.8749f, 1f, false, false, false);
					__LIB_0__::func_544(48, 1, 0, 1, 0);
					__LIB_0__::func_544(49, 1, 0, 1, 0);
				}
			}
		}
	}
	if (iLocal_359 > 4)
	{
		if (iLocal_317 == 4)
		{
			if (!iLocal_613)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_START"))
				{
					AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
				}
				else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("SLOWMO_T1_RAYFIRE_EXPLOSION"))
				{
					AUDIO::ACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_RAYFIRE_EXPLOSION");
					AUDIO::START_AUDIO_SCENE("TREVOR_1_RAYFIRE");
					iLocal_613 = 1;
				}
			}
		}
	}
	if (iLocal_359 < 4)
	{
		if (!func_95("GANG ENEMY 38 TRIGGERED"))
		{
			if (!PED::IS_PED_INJURED(Local_273[38 /*34*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 36.9364f, 3730.9f, 38.6028f, true) < 58f)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_273[38 /*34*/]))
					{
						if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("G_M_Y_Lost_01"), ENTITY::GET_ENTITY_COORDS(Local_273[38 /*34*/], false), true))
						{
							if (!PED::IS_PED_INJURED(Local_273[38 /*34*/]))
							{
								PED::SET_PED_CAN_BE_TARGETTED(Local_273[38 /*34*/], true);
							}
							PED::SET_PED_ACCURACY(Local_273[38 /*34*/], 1);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, 34.9035f, 3730.6326f, 38.5661f, PLAYER::PLAYER_PED_ID(), 1f, true, 1f, 1f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), -1);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
							TASK::TASK_PERFORM_SEQUENCE(Local_273[38 /*34*/], iLocal_469);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_273[38 /*34*/], 34.9035f, 3730.6326f, 38.5661f, 20f, true, false);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_273[38 /*34*/], 51, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[38 /*34*/], false);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_273[38 /*34*/], true, 1);
							__LIB_0__::func_640(Local_273[38 /*34*/], "GENERIC_WAR_CRY", 18);
							func_94("GANG ENEMY 38 TRIGGERED", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_359 > 2 && iLocal_359 < 4)
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 35.614193f, 3731.9565f, 38.527878f, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]))
			{
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[14], true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[14], true, 0.5f);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]))
		{
			OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[14], false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[14], false, 0.5f);
		}
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 39.84553f, 3735.9124f, 38.527878f, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
			{
				OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[7], true);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[7], true, 0.5f);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
		{
			OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[7], false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[7], false, 0.5f);
		}
	}
	switch (iLocal_359)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 36.9364f, 3730.9f, 38.6028f, true) < 90f)
			{
				if (!PED::IS_PED_INJURED(Local_273[39 /*34*/]))
				{
					PED::SET_PED_CAN_BE_TARGETTED(Local_273[39 /*34*/], true);
					PED::SET_PED_COMBAT_MOVEMENT(Local_273[39 /*34*/], 0);
					PED::SET_PED_ACCURACY(Local_273[39 /*34*/], 1);
					TASK::TASK_COMBAT_PED(Local_273[39 /*34*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[39 /*34*/], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_273[39 /*34*/], true, 1);
				}
				iLocal_613 = 0;
				iLocal_359++;
			}
			break;
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 36.9364f, 3730.9f, 38.6028f, true) < 85f)
			{
				if (AUDIO::LOAD_STREAM("TREVOR_1_TRAILER_EXPLODE_MASTER", 0))
				{
					iLocal_318 = OBJECT::GET_RAYFIRE_MAP_OBJECT(36.9364f, 3730.9f, 38.6028f, 10f, "DES_methtrailer");
					if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_318))
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_318, 4);
						iLocal_359++;
					}
				}
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]) || ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
			{
				if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 35.614193f, 3731.9565f, 38.527878f, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[14], true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[14], true, 0.5f);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_431[14]);
						WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_431[14]);
						iLocal_359++;
					}
				}
				else if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(joaat("prop_gascyl_02a"), 39.84553f, 3735.9124f, 38.527878f, false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[7], true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[7], true, 0.5f);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_431[7]);
						WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(iLocal_431[7]);
						iLocal_359++;
					}
				}
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[14], PLAYER::PLAYER_PED_ID(), true))
				{
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1500, 255);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_431[14], false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_431[14], 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[7], false);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[7], false, 0f);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_431[7], false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_431[7], false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_431[7], true);
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_431[14], false), 8, 2f, false, false, 0f, false);
						ENTITY::SET_ENTITY_HEALTH(iLocal_431[7], 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_273[38 /*34*/]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_273[38 /*34*/], true);
					}
					if (!PED::IS_PED_INJURED(Local_273[39 /*34*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[39 /*34*/], true);
						PED::SET_PED_CAN_BE_TARGETTED(Local_273[39 /*34*/], true);
					}
					OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[14], false);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[14], false, 0f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
					{
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[7], false);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[7], false, 0f);
					}
					STREAMING::REQUEST_PTFX_ASSET();
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_EXPLODE");
					iLocal_359 = 4;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[7]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[7], PLAYER::PLAYER_PED_ID(), true))
				{
					PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1500, 255);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_431[7], false);
					ENTITY::SET_ENTITY_HEALTH(iLocal_431[7], 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_431[14], false);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_431[14], false);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_431[14], true);
						FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(iLocal_431[7], false), 8, 2f, false, false, 0f, false);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[14], false, 0.5f);
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[14], false);
					}
					if (!PED::IS_PED_INJURED(Local_273[38 /*34*/]))
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_273[38 /*34*/], true);
					}
					if (!PED::IS_PED_INJURED(Local_273[39 /*34*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_273[39 /*34*/], true);
						PED::SET_PED_CAN_BE_TARGETTED(Local_273[39 /*34*/], true);
					}
					OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[7], false);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[7], false, 0f);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[14]))
					{
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_431[14], false, 0.5f);
						OBJECT::SET_OBJECT_TARGETTABLE(iLocal_431[14], false);
					}
					STREAMING::REQUEST_PTFX_ASSET();
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_EXPLODE");
					iLocal_359 = 4;
				}
			}
			break;
		case 4:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_318))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_318, 4);
				STREAMING::REQUEST_PTFX_ASSET();
				iLocal_359++;
			}
			else
			{
				iLocal_318 = OBJECT::GET_RAYFIRE_MAP_OBJECT(36.9364f, 3730.9f, 38.6028f, 10f, "DES_methtrailer");
			}
			break;
		case 5:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_318))
			{
				iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_318);
				if (iVar0 == 5)
				{
					AUDIO::PREPARE_MUSIC_EVENT("TRV1_EXPLODE");
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_EXPLODE"))
					{
						OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_318, 6);
						AUDIO::PLAY_STREAM_FROM_POSITION(30.9258f, 3735.7358f, 39.6296f);
						iLocal_360 = MISC::GET_GAME_TIMER();
						MISC::SET_TIME_SCALE(0.2f);
						fLocal_361 = 0.2f;
						iLocal_359++;
					}
				}
				else if (iVar0 != 4)
				{
					iLocal_359 = 0;
				}
			}
			else
			{
				iLocal_359 = 0;
			}
			break;
		case 6:
			if (__LIB_0__::func_611(&iLocal_360, 120))
			{
				FIRE::ADD_EXPLOSION(37.73f, 3734.61f, 39.77f, 8, 2f, false, false, 0f, false);
				FIRE::ADD_EXPLOSION(31.0599f, 3736.0564f, 39.6304f, 27, 2f, false, false, 0f, false);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(2f, 2f, 3);
				if (!ENTITY::IS_ENTITY_DEAD(Local_273[38 /*34*/], false))
				{
					PED::SET_PED_TO_RAGDOLL(Local_273[38 /*34*/], 5000, 5000, 2, false, false, false);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_273[38 /*34*/], 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 6f, 0f, 0f, 0f, 0, true, true, true, false, true);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_273[39 /*34*/], false))
				{
					PED::SET_PED_TO_RAGDOLL(Local_273[39 /*34*/], 5000, 5000, 2, false, false, false);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_273[39 /*34*/], 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f), MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 3f), 5f, 0f, 0f, 0f, 0, true, true, true, false, true);
				}
				iLocal_359++;
				PLAYER::SPECIAL_ABILITY_CHARGE_MEDIUM(PLAYER::PLAYER_ID(), true, true, 0);
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 1500, 255);
			}
			break;
		case 7:
			if (__LIB_0__::func_611(&iLocal_360, 300) || !func_737(30.8884f, 3733.9258f, 39.6283f, 1f, 1120403456))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_273[38 /*34*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_273[38 /*34*/], 1, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_273[39 /*34*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_273[39 /*34*/], 1, 0);
				}
			}
			if (__LIB_0__::func_611(&iLocal_360, 1000) || !func_737(30.8884f, 3733.9258f, 39.6283f, 1f, 1120403456))
			{
				iLocal_359++;
			}
			break;
		case 8:
			if (fLocal_361 < 1f || !func_737(30.8884f, 3733.9258f, 39.6283f, 1f, 1120403456))
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_359++;
			}
			break;
		case 9:
			AUDIO::DEACTIVATE_AUDIO_SLOWMO_MODE("SLOWMO_T1_RAYFIRE_EXPLOSION");
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_RAYFIRE"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_1_RAYFIRE");
			}
			else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_START"))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
			}
			else
			{
				iLocal_359++;
			}
			break;
		case 10:
			if (STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				MISC::SET_TIME_SCALE(1f);
				iLocal_359++;
			}
			break;
	}
}

void func_820()//Position - 0x9E323
{
	if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
	{
		if (!__LIB_0__::func_75())
		{
			if (!__LIB_13__::func_755(&Local_297, 1))
			{
				if (iLocal_608 == 0)
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BIKERAG", 7, 0, 0, 0))
					{
						iLocal_609 = MISC::GET_GAME_TIMER();
						iLocal_608 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_608 == 1)
	{
		if (__LIB_0__::func_611(&iLocal_609, 8000))
		{
			iLocal_608 = 0;
		}
	}
	switch (iLocal_454)
	{
		case 0:
			iLocal_244 = MISC::GET_GAME_TIMER();
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
			iLocal_454++;
			break;
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("hexer")))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
					{
						if (__LIB_0__::func_611(&iLocal_244, 3000))
						{
							VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
							PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(2), 0);
							PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.8f, true, 0);
							if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
							{
								__LIB_0__::func_151("TRV_NRAGEH1_KM", 10000);
							}
							else
							{
								__LIB_0__::func_151("TRV_NRAGEH1", 10000);
							}
							HUD::FLASH_ABILITY_BAR(10000);
							iLocal_244 = MISC::GET_GAME_TIMER();
							iLocal_454++;
						}
					}
					else if (__LIB_0__::func_611(&iLocal_244, 30000))
					{
						VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
						PLAYER::SPECIAL_ABILITY_UNLOCK(__LIB_0__::func_518(2), 0);
						PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.8f, true, 0);
						if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_0__::func_151("TRV_NRAGEH1_KM", 10000);
						}
						else
						{
							__LIB_0__::func_151("TRV_NRAGEH1", 10000);
						}
						HUD::FLASH_ABILITY_BAR(10000);
						iLocal_244 = MISC::GET_GAME_TIMER();
						iLocal_454++;
					}
				}
			}
			break;
		case 2:
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0) || __LIB_0__::func_611(&iLocal_244, 20000))
			{
				__LIB_0__::func_151("TRV_NRAGEH2", 10000);
				iLocal_244 = MISC::GET_GAME_TIMER();
				iLocal_454++;
			}
			break;
		case 3:
			if (__LIB_0__::func_611(&iLocal_244, 10000))
			{
				HUD::CLEAR_HELP(true);
				__LIB_0__::func_151("TRV_NRAGEH3", -1);
				iLocal_244 = MISC::GET_GAME_TIMER();
				iLocal_454++;
			}
			break;
		case 4:
			if (__LIB_0__::func_611(&iLocal_244, 10000))
			{
				HUD::CLEAR_HELP(true);
				iLocal_244 = MISC::GET_GAME_TIMER();
				iLocal_454++;
			}
			break;
		case 5:
			if (!func_95("TRV_GT3"))
			{
				if (!__LIB_13__::func_755(&Local_297, 2))
				{
					func_676("TRV_GT3", 7500);
					func_94("TRV_GT3", 1);
					iLocal_244 = MISC::GET_GAME_TIMER();
					iLocal_454++;
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_611(&iLocal_244, 7000))
			{
				__LIB_0__::func_151("TRV_LOCK_BEHIND", 10000);
				iLocal_244 = MISC::GET_GAME_TIMER();
				iLocal_454++;
			}
			break;
		case 7:
			if (__LIB_0__::func_611(&iLocal_244, 9000))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false))
				{
					__LIB_0__::func_151("TRV_GO_ROUND", 9000);
					iLocal_244 = MISC::GET_GAME_TIMER();
					iLocal_454++;
				}
			}
			break;
		case 8:
			if (__LIB_0__::func_611(&iLocal_244, 9000))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 57.366703f, 3699.9548f, 37.754868f, 76.10999f, 3725.176f, 44.23741f, 22.75f, false, true, 0))
				{
					__LIB_0__::func_151("TRV_JUMP_OVER", 9000);
					iLocal_454++;
				}
			}
			break;
	}
}

void func_821(int iParam0, bool bParam1)//Position - 0x9E66B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		__LIB_0__::func_631((*iParam0)[iVar0 /*34*/], &((iParam0[iVar0 /*34*/])->f_10), -1, 0, bParam1, 0, -1082130432, 0, -1, -1, 1, 0);
		iVar0++;
	}
}

int func_823()//Position - 0x9E899
{
	int iVar0;
	MISC::SET_INSTANCE_PRIORITY_HINT(2);
	if (ENTITY::DOES_ENTITY_EXIST(Local_269[2 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_269[2 /*65*/]))
		{
			if (!func_95("TERRY DEATH"))
			{
				__LIB_0__::func_221(&Local_526, 6);
				if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
				{
					__LIB_0__::func_709(Local_269[3 /*65*/], "T1M1_GBAA", "CLAY", 11);
				}
				func_94("TERRY DEATH", 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_269[3 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_269[3 /*65*/]))
		{
			if (!func_95("CLAY DEATH"))
			{
				__LIB_0__::func_221(&Local_526, 7);
				if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
				{
					__LIB_0__::func_709(Local_269[2 /*65*/], "T1M1_GCAA", "TERRY", 11);
				}
				func_94("CLAY DEATH", 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_269[2 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_269[2 /*65*/]))
		{
			if (!func_95("CLAY DEATH"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_269[2 /*65*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 40f)
				{
					if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_269[2 /*65*/]))
					{
						PED::DELETE_PED(&(Local_269[2 /*65*/]));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Terry"));
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_269[3 /*65*/]))
	{
		if (PED::IS_PED_INJURED(Local_269[3 /*65*/]))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_269[3 /*65*/], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 40f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_269[3 /*65*/]))
				{
					PED::DELETE_PED(&(Local_269[3 /*65*/]));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Clay"));
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
	{
		ENTITY::SET_ENTITY_HEALTH(Local_269[3 /*65*/], 175, 0);
	}
	if (!func_95("TREVOR_1_CHASE_KILL_BIKERS"))
	{
		AUDIO::START_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
		func_94("TREVOR_1_CHASE_KILL_BIKERS", 1);
	}
	else if (PED::IS_PED_INJURED(Local_269[2 /*65*/]) && PED::IS_PED_INJURED(Local_269[3 /*65*/]))
	{
		if (!func_95("STOP_TREVOR_1_CHASE_KILL_BIKERS"))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS"))
			{
				AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
				func_94("STOP_TREVOR_1_CHASE_KILL_BIKERS", 1);
			}
		}
		else if (!func_95("TREVOR_1_CHASE_FOLLOW_VAN"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_CHASE_FOLLOW_VAN");
			func_94("TREVOR_1_CHASE_FOLLOW_VAN", 1);
		}
	}
	if (iLocal_379 == 1)
	{
		if (!iLocal_583)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_290.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_290.f_0, "TREVOR_1_CHASE_VAN_Group", 0f);
					iLocal_583 = 1;
				}
			}
		}
		if (!iLocal_584)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_295[0 /*12*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_295[0 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
					iLocal_584 = 1;
				}
			}
		}
		if (!iLocal_585)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_295[1 /*12*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_295[1 /*12*/], "TREVOR_1_BIKES_GROUP", 0f);
					iLocal_585 = 1;
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(Local_269[2 /*65*/]) && PED::IS_PED_INJURED(Local_269[3 /*65*/]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_295[0 /*12*/], 0f);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_295[1 /*12*/], 0f);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(58.4031f, 3630.9597f, 38.7482f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 100f)
	{
		func_874();
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_341) > 200)
	{
		iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 10f, 0, __LIB_15__::func_914());
		iLocal_341 = MISC::GET_GAME_TIMER();
	}
	if (iLocal_385 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 48.109467f, 3642.5222f, 38.33442f, true) < 100f)
		{
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_435 + Vector(100f, 100f, 100f), Local_435 - Vector(100f, 100f, 100f), false, true, true, true);
			MISC::CLEAR_AREA(Local_435, 500f, true, false, false, false);
			iLocal_385 = 1;
		}
	}
	func_847();
	func_846();
	func_845();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0))
		{
			func_844(iVar0);
			func_843(iVar0);
		}
	}
	if (iLocal_278 == 0)
	{
		func_552(1, "Chase the bikers", 0, 0, 0, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_435 + Vector(100f, 100f, 100f), Local_435 - Vector(100f, 100f, 100f), false, true, true, true);
		MISC::CLEAR_AREA(Local_435, 500f, true, false, false, false);
		if (!ENTITY::IS_ENTITY_DEAD(Local_269[2 /*65*/], false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_269[2 /*65*/], false);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_269[3 /*65*/], false))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_269[3 /*65*/], false);
		}
		fLocal_413 = 127000f;
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		if (!ENTITY::IS_ENTITY_DEAD(Local_290.f_0, false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
					{
						Local_269[2 /*65*/].f_1 = __LIB_0__::func_666(Local_269[2 /*65*/], 1, 145);
					}
					if (!HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
					{
						Local_269[3 /*65*/].f_1 = __LIB_0__::func_666(Local_269[3 /*65*/], 1, 145);
					}
					if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[2 /*65*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_269[2 /*65*/], iLocal_476);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_476);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_269[2 /*65*/], false);
					}
					if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[3 /*65*/], true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_269[3 /*65*/], iLocal_476);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_476);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_269[3 /*65*/], false);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
					{
						if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/], -1);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
					{
						if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/], false))
							{
								PED::SET_PED_INTO_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/], -1);
							}
						}
					}
					VEHICLE::REQUEST_VEHICLE_RECORDING(202, sLocal_407);
					VEHICLE::REQUEST_VEHICLE_RECORDING(203, sLocal_407);
					STREAMING::REQUEST_MODEL(joaat("trflat"));
					STREAMING::REQUEST_MODEL(joaat("scrap"));
					PHYSICS::ROPE_LOAD_TEXTURES();
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_290.f_0))
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_407);
						VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_407);
						VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_407);
						if (((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(200, sLocal_407) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, sLocal_407)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, sLocal_407)) && PHYSICS::ROPE_ARE_TEXTURES_LOADED())
						{
							func_842(0, 1);
							func_836(sLocal_407, 200, 1, 1);
							func_835();
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_290.f_0);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/]);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/]);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_290.f_0, 200, sLocal_407, true);
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_290.f_0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_290.f_0, true, true, false);
							}
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_295[0 /*12*/]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_295[0 /*12*/], true, true, false);
							}
							if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_295[1 /*12*/]))
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_295[1 /*12*/], true, true, false);
							}
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_295[0 /*12*/], 204, sLocal_407, 1, 0, 786468);
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_295[1 /*12*/], 205, sLocal_407, 1, 0, 786468);
							if (iLocal_363 == 1)
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/], 2400f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_295[0 /*12*/], true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/], 2400f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_295[1 /*12*/], true);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_290.f_0, 2400f);
								VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_290.f_0, true);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_285.f_0, 15f);
								if (ENTITY::DOES_ENTITY_EXIST(Local_269[0 /*65*/]))
								{
									if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
									{
										PED::SET_PED_INTO_VEHICLE(Local_269[0 /*65*/], Local_290.f_0, -1);
									}
								}
							}
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
							if (!PED::IS_PED_INJURED(Local_280.f_0))
							{
								PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 32, false);
								PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
							}
							if (!PED::IS_PED_INJURED(Local_281.f_0))
							{
								PED::SET_PED_CONFIG_FLAG(Local_281.f_0, 32, false);
								PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
							}
						}
					}
					else
					{
						iLocal_354 = MISC::GET_GAME_TIMER();
						iLocal_415 = 0;
						iLocal_582 = 0;
						func_658(500);
						bLocal_212 = true;
						iLocal_238 = 0;
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), true);
						PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), true);
						PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), true);
						PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), true);
						iLocal_278 = 1;
					}
				}
			}
		}
		if (!iLocal_398)
		{
			func_545();
			iLocal_398 = 1;
		}
	}
	if (iLocal_278 == 1)
	{
		if (iLocal_379 == 0)
		{
			iLocal_583 = 0;
			iLocal_584 = 0;
			iLocal_585 = 0;
			iLocal_218 = 0;
			if (!func_95("TRV1_CHASING"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASING"))
				{
					func_94("TRV1_CHASING", 1);
				}
			}
			__LIB_0__::func_222(&Local_526, 7, Local_269[3 /*65*/], "CLAY", 0, 1);
			__LIB_0__::func_222(&Local_526, 6, Local_269[2 /*65*/], "TERRY", 0, 1);
			func_604();
			func_552(1, "Chase the bikers", 0, 0, 0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), joaat("PLAYER"));
			if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[2 /*65*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_269[2 /*65*/], iLocal_476);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_476);
				PED::SET_PED_DIES_WHEN_INJURED(Local_269[2 /*65*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_269[2 /*65*/], 188, true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_269[2 /*65*/], 250);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_269[2 /*65*/], false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_295[0 /*12*/], false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_295[0 /*12*/], 250);
				}
			}
			if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[3 /*65*/], true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_269[3 /*65*/], iLocal_476);
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("PLAYER"), iLocal_476);
				PED::SET_PED_DIES_WHEN_INJURED(Local_269[3 /*65*/], true);
				PED::SET_PED_CONFIG_FLAG(Local_269[3 /*65*/], 188, true);
				ENTITY::SET_ENTITY_LOD_DIST(Local_269[3 /*65*/], 250);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(Local_269[3 /*65*/], false);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_295[1 /*12*/], false);
					ENTITY::SET_ENTITY_LOD_DIST(Local_295[1 /*12*/], 250);
				}
			}
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 32, false);
				PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
			}
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_281.f_0, 32, false);
				PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL")) < 65)
				{
					WEAPON::ADD_AMMO_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), (65 - WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"))));
				}
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), false);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 65, true, true);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(24.5298f, 3590.7327f, 0f, 147.1179f, 3772.4255f, 100f, false, true);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.4102f, 0f, 110.0308f, 3801.6506f, 100f, false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(24.5298f, 3590.7327f, 0f, 147.1179f, 3772.4255f, 100f, 0);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(5.9328f, 3682.4102f, 0f, 110.0308f, 3801.6506f, 100f, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_435 + Vector(100f, 100f, 100f), Local_435 - Vector(100f, 100f, 100f), false, true, true, true);
			MISC::CLEAR_AREA(Local_435, 500f, true, false, false, false);
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				TASK::TASK_LOOK_AT_ENTITY(Local_281.f_0, Local_269[2 /*65*/], 4000, 0, 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_466))
			{
				if (!PED::IS_PED_INJURED(iLocal_466))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_466);
				}
				PED::DELETE_PED(&iLocal_466);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
			{
				if (!PED::IS_PED_INJURED(iLocal_467))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_467);
				}
				PED::DELETE_PED(&iLocal_467);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ashley"));
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ashley"));
			}
			iLocal_399[0] = 0;
			iLocal_399[1] = 0;
			iLocal_399[2] = 0;
			iLocal_399[3] = 0;
			iLocal_399[4] = 0;
			iLocal_400[0] = 0;
			iLocal_400[1] = 0;
			iLocal_348 = 0;
			iLocal_329 = 0;
			fLocal_93 = 200f;
			bLocal_56 = true;
			PLAYER::SPECIAL_ABILITY_LOCK(__LIB_0__::func_518(2), 0);
			Local_269[2 /*65*/].f_24 = 0;
			iLocal_379 = 1;
			iLocal_385 = 0;
			iLocal_234 = 0;
			iLocal_586 = 0;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
			{
				if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false)) && PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
				{
					if (!func_95("VEHICLE_JUMP"))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, 470.9808f, 4323.7285f, 58.776157f, 450.0194f, 4341.243f, 83.475525f, 20f, false, true, 0))
							{
								if (!PED::IS_PED_INJURED(Local_281.f_0))
								{
									if (__LIB_0__::func_75())
									{
										__LIB_0__::func_325();
									}
									else if (!VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_285.f_0))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 6f, 2);
										__LIB_0__::func_640(Local_281.f_0, "VEHICLE_JUMP", 4);
										func_94("VEHICLE_JUMP", 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_290.f_1))
						{
							Local_290.f_1 = __LIB_0__::func_639(Local_290.f_0, 1, 0);
						}
						else
						{
							__LIB_14__::func_655(Local_290.f_1, Local_290.f_0, 260f, 1061158912, 0);
						}
					}
					if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
						{
							Local_269[2 /*65*/].f_1 = __LIB_0__::func_666(Local_269[2 /*65*/], 1, 145);
						}
						else
						{
							__LIB_14__::func_655(Local_269[2 /*65*/].f_1, Local_269[2 /*65*/], 260f, 1061158912, 0);
						}
					}
					if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
						{
							Local_269[3 /*65*/].f_1 = __LIB_0__::func_666(Local_269[3 /*65*/], 1, 145);
						}
						else
						{
							__LIB_14__::func_655(Local_269[3 /*65*/].f_1, Local_269[3 /*65*/], 260f, 1061158912, 0);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_285.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_285.f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_281.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_281.f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_280.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_280.f_1));
					}
					if (iLocal_586)
					{
						TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						iLocal_586 = 0;
					}
					if (func_95("KILL ON GET OUT"))
					{
						func_94("KILL ON GET OUT", 0);
					}
					if ((__LIB_0__::func_501("TRV_GETIN2", 0, 0) || __LIB_0__::func_501("TRV_BDY4", 0, 0)) || __LIB_0__::func_501("TRV_BDY2", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					func_833();
				}
				else
				{
					if (__LIB_0__::func_75())
					{
						if (!func_95("KILL ON GET OUT"))
						{
							__LIB_0__::func_638();
						}
					}
					else
					{
						func_94("KILL ON GET OUT", 1);
					}
					if (HUD::DOES_BLIP_EXIST(Local_290.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_290.f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_269[2 /*65*/].f_1));
					}
					if (HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_269[3 /*65*/].f_1));
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_285.f_1))
							{
								Local_285.f_1 = __LIB_0__::func_639(Local_285.f_0, 0, 0);
							}
							else if (!func_95("T1M1_GET_BACK_IN"))
							{
								func_676("TRV_GETIN2", 7500);
								func_94("T1M1_GET_BACK_IN", 1);
							}
						}
						else if (__LIB_0__::func_501("TRV_GETIN2", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_INJURED(Local_281.f_0))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, true))
							{
								if (!iLocal_586)
								{
									if (!__LIB_0__::func_75())
									{
										TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_281.f_0, 20000, 2048, 2);
										__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "T1M1_GTAA", "TREVOR", 4);
										iLocal_586 = 1;
									}
								}
								if (!HUD::DOES_BLIP_EXIST(Local_281.f_1))
								{
									Local_281.f_1 = __LIB_0__::func_666(Local_281.f_0, 0, 24);
									TASK::TASK_ENTER_VEHICLE(Local_281.f_0, Local_285.f_0, -1, 1, 2f, 1, 0);
								}
								else
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_281.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_281.f_0, Local_285.f_0, -1, 1, 2f, 1, 0);
									}
									if (!func_95("TRV_BDY4"))
									{
										RECORDING::REPLAY_RECORD_BACK_FOR_TIME(6f, 3f, 3);
										func_676("TRV_BDY4", 7500);
										func_94("TRV_BDY4", 1);
									}
								}
							}
							else
							{
								if (__LIB_0__::func_501("TRV_BDY4", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(Local_281.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_281.f_1));
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, true))
							{
								if (!HUD::DOES_BLIP_EXIST(Local_280.f_1))
								{
									Local_280.f_1 = __LIB_0__::func_666(Local_280.f_0, 0, 20);
									TASK::TASK_ENTER_VEHICLE(Local_280.f_0, Local_285.f_0, -1, 0, 2f, 1, 0);
								}
								else
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(Local_280.f_0, joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(Local_280.f_0, Local_285.f_0, -1, 0, 2f, 1, 0);
									}
									if (!func_95("TRV_BDY2"))
									{
										func_676("TRV_BDY2", 7500);
										func_94("TRV_BDY2", 1);
									}
								}
							}
							else
							{
								if (__LIB_0__::func_501("TRV_BDY2", 0, 0))
								{
									HUD::CLEAR_PRINTS();
								}
								if (HUD::DOES_BLIP_EXIST(Local_280.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_280.f_1));
								}
							}
						}
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_290.f_0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_290.f_0))
			{
				fLocal_480 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_290.f_0);
				func_828(Local_290.f_0, PLAYER::PLAYER_PED_ID(), &fLocal_414, 63f, 34f, 80f, 0.6f, 1.4f, 1065353216, 1);
				func_767(Local_290.f_0, fLocal_414);
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_295[0 /*12*/], fLocal_414);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_295[1 /*12*/], fLocal_414);
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 72.50677f, 3597.1057f, 58.68276f, 75.93925f, 3772.75f, 25.818333f, 170f, false, true, 0))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 67.07f, 3703.85f, 39.56f, true) > 180f)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_471))
						{
							__LIB_0__::func_638();
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								HUD::CLEAR_PRINTS();
								if (HUD::DOES_BLIP_EXIST(Local_290.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_290.f_1));
								}
								func_676("TRV_GETTP", 7500);
								iLocal_471 = __LIB_0__::func_488(67.07f, 3703.85f, 39.56f, 0);
							}
						}
						if (iLocal_218 == 0)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 66.109856f, 3599.583f, 27.971104f, 77.20415f, 3772.0142f, 46.43766f, 163.25f, false, true, 0))
							{
								iLocal_218 = 1;
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 67.07f, 3703.85f, 39.56f, true) > 220f)
						{
							if (PED::IS_PED_INJURED(Local_269[2 /*65*/]) && !PED::IS_PED_INJURED(Local_269[3 /*65*/]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_290.f_0) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_269[3 /*65*/]))
								{
									func_37(14);
								}
							}
							if (PED::IS_PED_INJURED(Local_269[3 /*65*/]) && !PED::IS_PED_INJURED(Local_269[2 /*65*/]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_290.f_0) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_269[2 /*65*/]))
								{
									func_37(14);
								}
							}
							if (PED::IS_PED_INJURED(Local_269[3 /*65*/]) && PED::IS_PED_INJURED(Local_269[2 /*65*/]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_290.f_0))
								{
									func_37(14);
								}
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_471))
					{
						HUD::REMOVE_BLIP(&iLocal_471);
					}
					if (__LIB_0__::func_501("TRV_RETTP", 0, 0))
					{
						HUD::CLEAR_PRINTS();
					}
				}
				func_842(0, 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 109.909546f, 3633.051f, 38.254272f, 46.707645f, 3628.709f, 41.25438f, 35.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 48.109467f, 3642.5222f, 38.33442f, -0.472603f, 3714.2742f, 45.373894f, 35.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 105.52106f, 3622.3499f, 38.254272f, 133.01892f, 3721.9285f, 40.977505f, 35.5f, false, true, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scrap"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trflat"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
					if (!func_95("T1M1_PH8"))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PH8", 7, 0, 0, 0))
						{
							func_94("T1M1_PH8", 1);
						}
					}
					if (__LIB_0__::func_213(Local_285.f_0, 10f, 1, 1056964608, 0, 1, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, true);
							PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), true, -1, 0);
							if (__LIB_0__::func_77(0))
							{
								__LIB_0__::func_366(1);
							}
							if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), false))
							{
								if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN")) > 0)
								{
									WEAPON::REQUEST_WEAPON_ASSET(joaat("WEAPON_PUMPSHOTGUN"), 31, 0);
									WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), true);
								}
							}
						}
						if (HUD::DOES_BLIP_EXIST(iLocal_471))
						{
							HUD::REMOVE_BLIP(&iLocal_471);
						}
						if (__LIB_0__::func_501("TRV_RETTP", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						iLocal_236 = 0;
						__LIB_0__::func_345(&uLocal_172, 0, 0);
						func_94("DID CHASE", 1);
						iLocal_278 = 2;
					}
				}
			}
			else if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 109.909546f, 3633.051f, 38.254272f, 46.707645f, 3628.709f, 41.25438f, 35.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 48.109467f, 3642.5222f, 38.33442f, -0.472603f, 3714.2742f, 45.373894f, 35.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 105.52106f, 3622.3499f, 38.254272f, 133.01892f, 3721.9285f, 40.977505f, 35.5f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 72.50677f, 3597.1057f, 58.68276f, 75.93925f, 3772.75f, 25.818333f, 170f, false, true, 0))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("scrap"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trflat"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
				if (HUD::DOES_BLIP_EXIST(iLocal_471))
				{
					HUD::REMOVE_BLIP(&iLocal_471);
				}
				if (__LIB_0__::func_501("TRV_RETTP", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				iLocal_236 = 1;
				__LIB_0__::func_345(&uLocal_172, 0, 0);
				func_94("DID CHASE", 1);
				iLocal_278 = 2;
			}
		}
		func_825(Local_290.f_0, 1209362944, 1210002944);
		if (Local_269[2 /*65*/].f_24 == 0)
		{
			if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/]))
					{
						WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(Local_269[2 /*65*/], joaat("WEAPON_UNARMED"));
						TASK::TASK_DRIVE_BY(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 30f, 100, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
						Local_269[2 /*65*/].f_25 = MISC::GET_GAME_TIMER();
						Local_269[2 /*65*/].f_24 = 1;
					}
				}
			}
		}
		else if (Local_269[2 /*65*/].f_24 == 1)
		{
			if (__LIB_0__::func_611(&(Local_269[2 /*65*/].f_25), 3000))
			{
				if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_269[2 /*65*/]);
					Local_269[2 /*65*/].f_24 = 2;
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
		{
			if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_269[2 /*65*/], 0, 0);
						__LIB_0__::func_497(494, 1, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/]);
							ENTITY::APPLY_FORCE_TO_ENTITY(Local_295[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), true))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_269[2 /*65*/]);
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/]);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_295[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
				{
					if (HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_269[2 /*65*/].f_1));
					}
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_269[2 /*65*/], 0, 0);
					__LIB_0__::func_497(494, 1, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_295[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/]);
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_269[2 /*65*/], PLAYER::PLAYER_PED_ID(), true))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_269[2 /*65*/]);
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_295[0 /*12*/], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
					ENTITY::APPLY_FORCE_TO_ENTITY(Local_295[0 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/]);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_269[2 /*65*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_269[2 /*65*/].f_1));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
		{
			if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
				{
					if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/]))
					{
						ENTITY::SET_ENTITY_HEALTH(Local_269[3 /*65*/], 0, 0);
						__LIB_0__::func_497(494, 1, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/]);
						}
					}
				}
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_295[1 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/]);
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_269[3 /*65*/].f_1));
				}
			}
		}
		else if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
			{
				if (!PED::IS_PED_SITTING_IN_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_269[3 /*65*/], 0, 0);
					__LIB_0__::func_497(494, 1, 0);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_295[1 /*12*/], 0, 8f, 0f, 0f, 0f, 1.8f, 0f, 0, true, true, true, false, true);
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/]);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_295[1 /*12*/], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 5f, 4);
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/]);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_269[3 /*65*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_269[3 /*65*/].f_1));
			}
		}
		if (PED::IS_PED_INJURED(Local_269[2 /*65*/]) && PED::IS_PED_INJURED(Local_269[3 /*65*/]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_269[3 /*65*/]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_269[2 /*65*/]));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_269[3 /*65*/].f_16);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_269[2 /*65*/].f_16);
			__LIB_0__::func_630(490);
		}
	}
	if (iLocal_278 == 2)
	{
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
		PHYSICS::ROPE_UNLOAD_TEXTURES();
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_02"));
		STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("dloader"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("biff"));
		if (HUD::DOES_BLIP_EXIST(Local_285.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_285.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_281.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_281.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_280.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_280.f_1));
		}
		iLocal_440 = 0;
		iLocal_441 = 0;
		iLocal_379 = 0;
		func_94("DID CHASE", 1);
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_290.f_0, 0f);
		if (ENTITY::DOES_ENTITY_EXIST(Local_295[1 /*12*/]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_295[1 /*12*/], 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_295[0 /*12*/]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_295[0 /*12*/], 0f);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
		}
		__LIB_0__::func_345(&uLocal_172, 0, 0);
		return 1;
	}
	return 0;
}

void func_825(int iParam0, float fParam1, float fParam2)//Position - 0xA08AC
{
	int iVar0;
	int iVar1;
	iVar1 = joaat("prop_gascyl_01a");
	if (!ENTITY::DOES_ENTITY_EXIST(Local_284[4 /*12*/]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (func_826(iParam0, fParam1))
			{
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(24.5298f, 3590.7327f, 0f, 147.1179f, 3772.4255f, 100f, false, true);
				VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.4102f, 0f, 110.0308f, 3801.6506f, 100f, false, true);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(24.5298f, 3590.7327f, 0f, 147.1179f, 3772.4255f, 100f, 0);
				VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(5.9328f, 3682.4102f, 0f, 110.0308f, 3801.6506f, 100f, 0);
				STREAMING::REQUEST_MODEL(joaat("prop_gascyl_02a"));
				STREAMING::REQUEST_MODEL(joaat("hexer"));
				STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_01"));
				STREAMING::REQUEST_MODEL(joaat("G_M_Y_Lost_02"));
				STREAMING::REQUEST_MODEL(joaat("rebel"));
				STREAMING::REQUEST_MODEL(iVar1);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(9, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(13, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(17, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(18, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(19, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(20, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(21, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(22, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(23, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(2, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(3, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(4, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(5, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(6, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(7, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(8, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(9, "t1b");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "t1b");
				if (((((((((((((((((((((((((((((STREAMING::HAS_MODEL_LOADED(joaat("hexer")) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_Lost_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("rebel"))) && STREAMING::HAS_MODEL_LOADED(iVar1)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_gascyl_02a"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "Trevor1dw")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(2, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(3, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(4, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(5, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(6, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(7, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(8, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "t1b")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "t1b"))
				{
					if (func_826(iParam0, fParam2))
					{
						func_541(4);
						iVar0 = 0;
						while (iVar0 < Local_284.f_0)
						{
							if (iVar0 != 10 && iVar0 != 11)
							{
								if (!__LIB_0__::func_78(Local_284[iVar0 /*12*/].f_2, 0f, 0f, 0f, 0))
								{
									func_766(&(Local_284[iVar0 /*12*/]));
									if (iVar0 == 10)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_284[iVar0 /*12*/], 0, 0);
									}
									if (iVar0 == 11)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_284[iVar0 /*12*/], 62, 62);
									}
									if (iVar0 == 12)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_284[iVar0 /*12*/], 10, 10);
									}
									if (iVar0 == 13)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_284[iVar0 /*12*/], 4, 4);
									}
									if (iVar0 == 23)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_284[iVar0 /*12*/], 13, 13);
									}
									if (iVar0 == 19)
									{
										VEHICLE::SET_VEHICLE_COLOURS(Local_284[iVar0 /*12*/], 13, 13);
									}
								}
							}
							iVar0++;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[6 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[6 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[7 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[7 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[15 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[15 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[16 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[16 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[17 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[17 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[20 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[20 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[21 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[21 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[22 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[22 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[24 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[24 /*12*/]));
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_284[25 /*12*/], false))
						{
							VEHICLE::DELETE_VEHICLE(&(Local_284[25 /*12*/]));
						}
					}
				}
			}
		}
	}
}

int func_826(int iParam0, float fParam1)//Position - 0xA0E2E
{
	float fVar0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
			if (fVar0 > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_828(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9)//Position - 0xA0F40
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!fParam4 < fParam3)
	{
		fParam4 = (fParam3 - 0.1f);
	}
	if (fParam6 > fParam8)
	{
		fParam8 = fParam6;
	}
	fVar0 = (fParam7 / fParam8);
	fVar1 = (fParam6 / fParam8);
	fVar2 = (((fParam5 - fParam3) * (1f / 0.4f)) + fParam3);
	__LIB_33__::func_556(iParam0, iParam1, uParam2, fParam8, fParam4, fParam3, fVar2, fVar0, 1f, fVar1, bParam9);
}

void func_833()//Position - 0xA13C9
{
	if (iLocal_348 > 0)
	{
		if (!iLocal_564[0])
		{
			if (PED::IS_PED_INJURED(Local_269[2 /*65*/]) || PED::IS_PED_INJURED(Local_269[3 /*65*/]))
			{
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					if (__LIB_0__::func_75())
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0))
						{
							AUDIO::INTERRUPT_CONVERSATION(Local_280.f_0, "T1M1_CSAA", "NervousRon");
							iLocal_561 = MISC::GET_GAME_TIMER();
							iLocal_564[0] = 1;
						}
					}
					else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BK1", 7, 0, 0, 0))
						{
							iLocal_561 = MISC::GET_GAME_TIMER();
							iLocal_564[0] = 1;
						}
					}
				}
			}
		}
		else if (!iLocal_564[1])
		{
			if (__LIB_0__::func_611(&iLocal_561, 1200))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0))
				{
					if (__LIB_0__::func_568())
					{
						__LIB_0__::func_620(0);
						iLocal_564[1] = 1;
					}
					else
					{
						iLocal_564[1] = 1;
					}
				}
			}
		}
		if (iLocal_564[0])
		{
			if (!iLocal_564[2])
			{
				if (PED::IS_PED_INJURED(Local_269[2 /*65*/]) && PED::IS_PED_INJURED(Local_269[3 /*65*/]))
				{
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						if (__LIB_0__::func_75())
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0))
							{
								AUDIO::INTERRUPT_CONVERSATION(Local_280.f_0, "T1M1_CRAA", "NervousRon");
								if (!ENTITY::IS_ENTITY_DEAD(Local_290.f_0, false))
								{
									if (!HUD::DOES_BLIP_EXIST(Local_290.f_1))
									{
										Local_290.f_1 = __LIB_0__::func_639(Local_290.f_0, 0, 0);
									}
								}
								iLocal_234 = 1;
								iLocal_564[2] = 1;
							}
						}
						else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0))
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BK1a", 7, 0, 0, 0))
							{
								bLocal_578 = true;
								iLocal_561 = MISC::GET_GAME_TIMER();
								iLocal_564[2] = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_564[3])
			{
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0))
					{
						if (!__LIB_0__::func_75())
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CV1", 7, 0, 0, 0))
							{
								iLocal_561 = MISC::GET_GAME_TIMER();
								iLocal_564[3] = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_564[4])
			{
				if (__LIB_0__::func_611(&iLocal_561, 1200))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (__LIB_0__::func_568())
						{
							__LIB_0__::func_620(0);
							iLocal_564[4] = 1;
						}
						else
						{
							iLocal_564[4] = 1;
						}
					}
				}
			}
		}
	}
	switch (iLocal_348)
	{
		case 0:
			iLocal_354 = MISC::GET_GAME_TIMER();
			iLocal_564[0] = 0;
			iLocal_564[1] = 0;
			iLocal_564[2] = 0;
			iLocal_564[3] = 0;
			iLocal_564[4] = 0;
			iLocal_565 = 0;
			iLocal_566 = 0;
			iLocal_567 = 0;
			iLocal_568 = 0;
			iLocal_569 = 0;
			iLocal_570 = 0;
			iLocal_571 = 0;
			iLocal_572 = 0;
			iLocal_573 = 0;
			iLocal_574 = 0;
			iLocal_575 = 0;
			iLocal_576 = 0;
			bLocal_577 = false;
			bLocal_578 = false;
			iLocal_579 = 0;
			iLocal_580 = 0;
			iLocal_581 = 0;
			iLocal_348++;
			break;
		case 1:
			if (__LIB_0__::func_611(&iLocal_354, 200))
			{
				if (!iLocal_565)
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PLAN1", 7, 0, 0, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(Local_290.f_1))
							{
								Local_290.f_1 = __LIB_0__::func_639(Local_290.f_0, 0, 0);
							}
							iLocal_565 = 1;
						}
					}
				}
				else if (!__LIB_13__::func_755(&Local_297, 2))
				{
					if (!func_95("TRV_GT2"))
					{
						func_676("TRV_GT2", 7500);
						func_94("TRV_GT2", 1);
						STREAMING::REMOVE_ANIM_DICT("misstrevor1leadinout");
						iLocal_348++;
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]) || !PED::IS_PED_INJURED(Local_269[3 /*65*/]))
			{
				if (!func_95("T1M1_PLAN2"))
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PLAN2", 7, 0, 0, 0))
						{
							func_94("T1M1_PLAN2", 1);
							iLocal_348 = 99;
						}
					}
				}
			}
			else
			{
				func_94("T1M1_PLAN2", 1);
				iLocal_348 = 99;
			}
			break;
		case 3:
			break;
		case 4:
			if (!func_95("T1M1_PH6a"))
			{
				if (iLocal_400[0] == 1)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[2], false))
						{
							if (!PED::IS_PED_INJURED(Local_281.f_0))
							{
								AUDIO::INTERRUPT_CONVERSATION(Local_281.f_0, "T1M1_CVAA", "Wade");
								TASK::TASK_LOOK_AT_ENTITY(Local_281.f_0, iLocal_161[2], 3000, 0, 2);
								func_94("T1M1_PH6a", 1);
								iLocal_348 = 99;
							}
						}
					}
				}
			}
			if (!func_95("T1M1_PH6b"))
			{
				if (iLocal_400[1] == 1)
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[3], false))
						{
							if (!PED::IS_PED_INJURED(Local_281.f_0))
							{
								AUDIO::INTERRUPT_CONVERSATION(Local_281.f_0, "T1M1_CVAA", "Wade");
								TASK::TASK_LOOK_AT_ENTITY(Local_281.f_0, iLocal_161[3], 4000, 0, 2);
								func_94("T1M1_PH6b", 1);
								iLocal_348 = 99;
							}
						}
					}
				}
			}
			break;
		case 5:
			if (fLocal_480 > 2000f)
			{
				if (!iLocal_566)
				{
					if (!__LIB_0__::func_501("TRV_GT2", 0, 0))
					{
						if (!__LIB_13__::func_755(&Local_297, 1))
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_LO1", 7, 0, 0, 0))
							{
								iLocal_566 = 1;
								iLocal_567 = 0;
							}
						}
					}
				}
				else if (!iLocal_567)
				{
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_TR1", 7, 0, 0, 0))
						{
							iLocal_567 = 1;
							iLocal_456 = MISC::GET_GAME_TIMER();
							iLocal_348 = 99;
						}
					}
				}
			}
			break;
		case 6:
			if (iLocal_399[0] == 1)
			{
				if (!func_95("T1M1_PH6a"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_13__::func_755(&Local_297, 1))
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PH6a", 8, 0, 0, 0))
							{
								func_94("T1M1_PH6a", 1);
								iLocal_348 = 99;
							}
						}
					}
				}
			}
			if (iLocal_399[1] == 1)
			{
				if (!func_95("T1M1_PH7"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1554.1871f, 4565.2046f, 40.33238f, 1602.8511f, 4569.1426f, 61.203342f, 32.5f, false, true, 0))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PH7", 8, 0, 0, 0))
								{
									func_94("T1M1_PH7", 1);
									iLocal_348 = 99;
								}
							}
						}
					}
					else
					{
						func_94("T1M1_PH7", 1);
						iLocal_348 = 99;
					}
				}
			}
			if (iLocal_399[2] == 1)
			{
				if (!func_95("T1M1_CH3"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 851.4785f, 4493.2427f, 66.635124f, 927.0613f, 4454.147f, 48.634125f, 42.25f, false, true, 0))
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CH3", 8, 0, 0, 0))
								{
									func_94("T1M1_CH3", 1);
									iLocal_348 = 99;
								}
							}
						}
					}
					else
					{
						func_94("T1M1_CH3", 1);
						iLocal_348 = 99;
					}
				}
			}
			if (iLocal_399[3] == 1)
			{
				if (!func_95("T1M1_WRONG"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (!__LIB_13__::func_755(&Local_297, 1))
						{
							if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_WRONG", 8, 0, 0, 0))
							{
								iLocal_348 = 99;
							}
						}
					}
				}
			}
			if (iLocal_399[4] == 1)
			{
				if (!func_95("T1M1_PH5"))
				{
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 484.56622f, 4313.896f, 63.555454f, 588.79736f, 4230.4795f, 41.4734f, 68.5f, false, true, 0))
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PH5", 8, 0, 0, 0))
								{
									iLocal_348 = 99;
								}
							}
						}
						else
						{
							iLocal_348 = 99;
						}
					}
				}
			}
			break;
		case 7:
			if (!func_95("T1M1_SH1"))
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_280.f_0) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
				{
					if (!__LIB_13__::func_755(&Local_297, 1))
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_SH1", 7, 0, 0, 0))
						{
							func_94("T1M1_SH1", 1);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_290.f_0);
							}
							iLocal_563 = MISC::GET_GAME_TIMER();
							iLocal_348 = 99;
						}
					}
				}
			}
			break;
		case 99:
			if (!iLocal_566)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					if (__LIB_0__::func_76(Local_290.f_0, PLAYER::PLAYER_PED_ID(), 1) > 120f)
					{
						__LIB_0__::func_638();
						iLocal_348 = 5;
					}
				}
			}
			if (__LIB_0__::func_76(Local_290.f_0, PLAYER::PLAYER_PED_ID(), 1) < 120f)
			{
				if (!func_95("T1M1_SH1"))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_290.f_0, joaat("WEAPON_SAWNOFFSHOTGUN"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_290.f_0, joaat("WEAPON_PISTOL"), 0))
						{
							iLocal_348 = 7;
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_563, 12000))
				{
					func_94("T1M1_SH1", 0);
				}
				if (func_95("T1M1_SH1"))
				{
					if (__LIB_0__::func_611(&iLocal_354, 14000))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
						{
							func_94("T1M1_SH1", 0);
							WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_290.f_0);
						}
					}
				}
				if (iLocal_400[0] == 0)
				{
					if (fLocal_480 > 11000f && fLocal_480 < 13500f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[2], false))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
							{
								if (__LIB_0__::func_76(iLocal_161[2], PLAYER::PLAYER_PED_ID(), 1) < 100f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_285.f_0, 1522.8398f, 4546.9146f, 49.740723f, 1462.4415f, 4495.471f, 55.657627f, 23.75f, false, true, 0))
								{
									__LIB_0__::func_638();
									iLocal_400[0] = 1;
									iLocal_348 = 4;
								}
							}
						}
					}
				}
				if (iLocal_400[1] == 0)
				{
					if (fLocal_480 > 27032.727f && fLocal_480 < 32271.676f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[3], false))
						{
							if (__LIB_0__::func_76(iLocal_161[3], PLAYER::PLAYER_PED_ID(), 1) < 100f)
							{
								__LIB_0__::func_638();
								iLocal_400[1] = 1;
								iLocal_348 = 4;
							}
						}
					}
				}
				if (iLocal_399[1] == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1540.9148f, 4560.515f, 60.550842f, 1608.8075f, 4570.1836f, 44.29767f, 23.5f, false, true, 0))
					{
						__LIB_0__::func_638();
						iLocal_399[1] = 1;
						iLocal_348 = 6;
					}
				}
				if (iLocal_399[2] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 851.4785f, 4493.2427f, 66.635124f, 927.0613f, 4454.147f, 48.634125f, 42.25f, false, true, 0))
							{
								__LIB_0__::func_638();
								iLocal_399[2] = 1;
								iLocal_348 = 6;
							}
						}
					}
				}
				if (iLocal_399[3] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0))
						{
							if (((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1693.0801f, 4644.204f, 38.856388f, 1740.7754f, 4590.8813f, 45.142933f, 16.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1442.9734f, 4475.325f, 45.25573f, 1424.132f, 4421.522f, 57.02333f, 16.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 803.66016f, 4214.711f, 36.83533f, 724.12634f, 4179.5156f, 53.70875f, 16.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 153.14423f, 4434.268f, 65.04311f, 106.76504f, 4484.393f, 99.222374f, 16.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -215.05872f, 4222.6763f, 32.509438f, -278.967f, 4226.646f, 56.414246f, 16.25f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -267.8767f, 3942.8757f, 30.224384f, -322.66492f, 4011.2224f, 58.2155f, 16.25f, false, true, 0))
							{
								__LIB_0__::func_638();
								iLocal_399[3] = 1;
								iLocal_351 = MISC::GET_GAME_TIMER();
								iLocal_348 = 6;
							}
						}
					}
				}
				else if (__LIB_0__::func_611(&iLocal_351, 9000))
				{
					iLocal_399[3] = 0;
				}
				if (iLocal_399[4] == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 484.56622f, 4313.896f, 63.555454f, 588.79736f, 4230.4795f, 41.4734f, 68.5f, false, true, 0))
							{
								__LIB_0__::func_638();
								iLocal_399[4] = 1;
								iLocal_348 = 6;
							}
						}
					}
				}
				if (iLocal_567)
				{
					if (__LIB_0__::func_611(&iLocal_456, 15000))
					{
						iLocal_566 = 0;
						iLocal_567 = 0;
					}
				}
				if (fLocal_480 > 13500f)
				{
					if (!iLocal_568)
					{
						if (func_95("T1M1_PH7") || fLocal_480 > 31917f)
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_297, 1))
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CHAT2", 7, 0, 0, 0))
									{
										iLocal_568 = 1;
										iLocal_247 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					else if (!iLocal_569)
					{
						if (__LIB_0__::func_611(&iLocal_348, 1000))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_297, 1))
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_GRD", 7, 0, 0, 0))
									{
										iLocal_247 = MISC::GET_GAME_TIMER();
										iLocal_569 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_570)
					{
						if (func_95("T1M1_CH3") || __LIB_0__::func_611(&iLocal_247, 20000))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_297, 1))
								{
									if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_GR2", 7, 0, 0, 0))
									{
										iLocal_247 = MISC::GET_GAME_TIMER();
										iLocal_570 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_571)
					{
						if (func_95("T1M1_CH3") || __LIB_0__::func_611(&iLocal_247, 15000))
						{
							if (fLocal_480 > 101481.95f)
							{
								if (!__LIB_0__::func_75())
								{
									iLocal_247 = MISC::GET_GAME_TIMER();
									iLocal_571 = 1;
								}
							}
						}
					}
					else if (!iLocal_572)
					{
						if (__LIB_0__::func_611(&iLocal_247, 6000))
						{
							if (fLocal_480 > 101481.95f)
							{
								if (!__LIB_0__::func_75())
								{
									iLocal_572 = 1;
								}
							}
						}
					}
					else if (!iLocal_573)
					{
						if (!__LIB_0__::func_75())
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								iLocal_573 = 1;
								iLocal_247 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!iLocal_574)
					{
						if (__LIB_0__::func_611(&iLocal_247, 6000))
						{
							if (__LIB_16__::func_929() == 0)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_297, 1))
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_GR7", 7, 0, 0, 0))
										{
											iLocal_574 = 1;
										}
									}
								}
							}
							else if (!iLocal_575)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_297, 1))
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_GR6", 7, 0, 0, 0))
										{
											iLocal_575 = 1;
											iLocal_574 = 1;
										}
									}
								}
							}
						}
					}
					else if (!iLocal_576)
					{
						if (__LIB_0__::func_611(&iLocal_247, 6000))
						{
							if (bLocal_578)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_297, 1))
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_GR4", 7, 0, 0, 0))
										{
											func_94("VANNERSPLAYED", 1);
											bLocal_577 = true;
											iLocal_576 = 1;
											iLocal_247 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
							else
							{
								iLocal_576 = 1;
							}
						}
					}
					else if (!iLocal_579)
					{
						if (__LIB_0__::func_611(&iLocal_247, 6000))
						{
							if (!__LIB_0__::func_75())
							{
								if (!__LIB_13__::func_755(&Local_297, 1))
								{
									iLocal_579 = 1;
								}
							}
						}
					}
					else if (!iLocal_580)
					{
						if (!bLocal_577)
						{
							if (bLocal_578)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_297, 1))
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_GR4", 7, 0, 0, 0))
										{
											iLocal_580 = 1;
										}
									}
								}
							}
							else
							{
								iLocal_580 = 1;
							}
						}
						else
						{
							iLocal_580 = 1;
						}
					}
					else
					{
						if (!iLocal_562)
						{
							if (fLocal_480 < 166729.83f)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_297, 1))
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_CHASE", 7, 0, 0, 0))
										{
											iLocal_562 = 1;
											iLocal_560 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
						else if (__LIB_0__::func_611(&iLocal_560, MISC::GET_RANDOM_INT_IN_RANGE(7000, 15000)))
						{
							iLocal_562 = 0;
						}
						if (fLocal_480 > 166729.83f)
						{
							if (!iLocal_581)
							{
								if (!__LIB_0__::func_75())
								{
									if (!__LIB_13__::func_755(&Local_297, 1))
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_BIK", 7, 0, 0, 0))
										{
											iLocal_581 = 1;
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

void func_835()//Position - 0xA25EF
{
	Local_128[1 /*3*/] = { 362.3041f, 4431.9624f, 62.5045f };
	fLocal_71[1] = 0f;
	fLocal_72[1] = 0f;
	fLocal_73[1] = 0f;
	fLocal_74[1] = 1f;
	iLocal_105[1] = 1;
	fLocal_75[1] = 10087.1f;
	fLocal_76[1] = 0.9f;
	iLocal_154[1] = joaat("bulldozer");
	Local_128[2 /*3*/] = { 1429.4023f, 4440.572f, 49.3761f };
	fLocal_71[2] = 0.0614f;
	fLocal_72[2] = -0.0066f;
	fLocal_73[2] = -0.1807f;
	fLocal_74[2] = 0.9816f;
	iLocal_105[2] = 2;
	fLocal_75[2] = 20000f;
	fLocal_76[2] = 1.1f;
	iLocal_154[2] = joaat("bison2");
	Local_128[3 /*3*/] = { -60.2279f, 4374.563f, 53.8577f };
	fLocal_71[3] = 0.0385f;
	fLocal_72[3] = 0.0081f;
	fLocal_73[3] = -0.0796f;
	fLocal_74[3] = 0.996f;
	iLocal_105[3] = 3;
	fLocal_75[3] = 115000f;
	fLocal_76[3] = 1f;
	iLocal_154[3] = joaat("emperor2");
	Local_128[4 /*3*/] = { -203.6284f, 3797.005f, 39.4701f };
	fLocal_71[4] = -0.0002f;
	fLocal_72[4] = 0.0336f;
	fLocal_73[4] = 0.1906f;
	fLocal_74[4] = 0.9811f;
	iLocal_105[4] = 4;
	fLocal_75[4] = 142000f;
	fLocal_76[4] = 0.8f;
	iLocal_154[4] = joaat("dloader");
	Local_128[5 /*3*/] = { 865.3905f, 4273.831f, 50.9768f };
	fLocal_71[5] = 0.0095f;
	fLocal_72[5] = 0.0174f;
	fLocal_73[5] = 0.0895f;
	fLocal_74[5] = 0.9958f;
	iLocal_105[5] = 5;
	fLocal_75[5] = 50000f;
	fLocal_76[5] = 1f;
	iLocal_154[5] = joaat("scrap");
	Local_128[11 /*3*/] = { -217.3212f, 4159.64f, 41.9787f };
	fLocal_71[11] = 0f;
	fLocal_72[11] = 0f;
	fLocal_73[11] = 0f;
	fLocal_74[11] = 1f;
	iLocal_105[11] = 11;
	fLocal_75[11] = 134573.83f;
	fLocal_76[11] = 1f;
	iLocal_154[11] = joaat("towtruck2");
}

void func_836(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xA2832
{
	struct<3> Var0;
	StringCopy(&cLocal_142, sParam0, 64);
	bLocal_38 = true;
	iLocal_43 = 0;
	iLocal_109 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = iParam1;
	iLocal_113 = 0;
	iLocal_114 = 0;
	iLocal_115 = 0;
	iLocal_119 = 0;
	iLocal_122 = 0;
	iLocal_120 = -1;
	iLocal_121 = -1;
	iLocal_123 = 0;
	iLocal_124 = 0;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_83 = 0f;
	iLocal_44 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_130.f_0 = (Var0.f_0 - 100f);
		Local_130.f_1 = (Var0.f_1 - 100f);
		Local_130.f_2 = (Var0.f_2 - 100f);
		Local_131.f_0 = (Var0.f_0 + 100f);
		Local_131.f_1 = (Var0.f_1 + 100f);
		Local_131.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_130, Local_131, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_151);
	__LIB_15__::func_905();
	if (bParam3)
	{
		__LIB_14__::func_804(1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), false);
		PED::SET_CREATE_RANDOM_COPS(false);
	}
	func_837();
}

void func_837()//Position - 0xA2956
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iLocal_158[iVar0] = 0;
		Local_126[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_62[iVar0] = 0f;
		fLocal_63[iVar0] = 0f;
		fLocal_64[iVar0] = 0f;
		fLocal_65[iVar0] = 0f;
		iLocal_102[iVar0] = 0;
		fLocal_66[iVar0] = 0f;
		iLocal_103[iVar0] = 0;
		iLocal_152[iVar0] = 0;
		iLocal_104[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iLocal_159[iVar0] = 0;
		iVar0++;
	}
	iLocal_109 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_160[iVar0] = 0;
		Local_127[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_77[iVar0] = 0f;
		fLocal_78[iVar0] = 0f;
		fLocal_79[iVar0] = 0f;
		fLocal_80[iVar0] = 0f;
		iLocal_108[iVar0] = 0;
		iLocal_153[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_162[iVar0] = 0;
		iVar0++;
	}
	iLocal_111 = 0;
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iLocal_161[iVar0] = 0;
		Local_128[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_71[iVar0] = 0f;
		fLocal_72[iVar0] = 0f;
		fLocal_73[iVar0] = 0f;
		fLocal_74[iVar0] = 0f;
		iLocal_105[iVar0] = 0;
		fLocal_75[iVar0] = 0f;
		iLocal_106[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iLocal_107[iVar0] = 0;
		iVar0++;
	}
	iLocal_110 = 0;
	iLocal_113 = 0;
	iLocal_116 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
}

void func_842(bool bParam0, bool bParam1)//Position - 0xA2C16
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_142))
	{
		iLocal_44 = 0;
		__LIB_15__::func_910();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_151);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_60)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_17__::func_484());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_908());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_907());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_797();
			func_793();
			__LIB_40__::func_815();
		}
		else
		{
			func_770();
			func_837();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_843(int iParam0)//Position - 0xA2CD2
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bVar0 = false;
	if ((((iParam0 == iLocal_161[1] || iParam0 == iLocal_161[2]) || iParam0 == iLocal_161[3]) || iParam0 == iLocal_161[4]) || iParam0 == iLocal_161[5])
	{
		bVar0 = true;
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_342) > 3000 || (bVar0 && (MISC::GET_GAME_TIMER() - iLocal_342) > 1000))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (!__LIB_0__::func_75())
			{
				if (((!ENTITY::IS_ENTITY_DEAD(iParam0, false) && iParam0 != Local_290.f_0) && iParam0 != Local_295[0 /*12*/]) && iParam0 != Local_295[1 /*12*/])
				{
					bVar2 = false;
					iVar3 = 0;
					if (bVar0)
					{
						iVar3 = 1;
					}
					else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Local_285.f_0))
					{
						bVar2 = true;
					}
					else if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) > 2f)
					{
						if (MISC::ABSF((ENTITY::GET_ENTITY_HEADING(iParam0) - ENTITY::GET_ENTITY_HEADING(Local_285.f_0))) > 60f)
						{
							iVar3 = 1;
						}
					}
					if (bVar2 || iVar3)
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
						if (!PED::IS_PED_INJURED(iVar1))
						{
							if (bVar2)
							{
								__LIB_0__::func_640(iVar1, "GENERIC_CURSE_HIGH", 5);
							}
							else
							{
								__LIB_0__::func_640(iVar1, "GENERIC_INSULT_HIGH", 5);
							}
							iLocal_342 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_844(int iParam0)//Position - 0xA2E2D
{
	int iVar0;
	if ((MISC::GET_GAME_TIMER() - iLocal_340) > 1800)
	{
		if ((iParam0 != Local_290.f_0 && iParam0 != Local_295[0 /*12*/]) && iParam0 != Local_295[1 /*12*/])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (!PED::IS_PED_INJURED(iVar0))
				{
					VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, false);
					iLocal_340 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

void func_845()//Position - 0xA2E98
{
	switch (iLocal_329)
	{
		case 0:
			iLocal_328 = MISC::GET_GAME_TIMER();
			iLocal_329++;
			break;
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/) || PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/))
			{
				iLocal_329 = 99;
			}
			else if (__LIB_0__::func_611(&iLocal_328, 35000))
			{
				iLocal_329++;
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]) || !PED::IS_PED_INJURED(Local_269[3 /*65*/]))
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_559, false);
					if (iLocal_559 == joaat("WEAPON_UNARMED"))
					{
						if (!func_95("TRV_DRIVEH1"))
						{
							__LIB_0__::func_151("TRV_DRIVEH1", -1);
						}
					}
					else
					{
						HUD::CLEAR_HELP(true);
						if (!PAD::GET_IS_USING_ALTERNATE_DRIVEBY() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
						{
							__LIB_0__::func_151("TRV_DRIVEH2", -1);
						}
						else
						{
							__LIB_0__::func_151("TRV_DRIVEH3", -1);
						}
						iLocal_329++;
					}
				}
			}
			break;
		case 3:
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/))
			{
				if (__LIB_0__::func_1("TRV_DRIVEH2") || __LIB_0__::func_1("TRV_DRIVEH3"))
				{
					HUD::CLEAR_HELP(true);
					iLocal_329 = 99;
				}
			}
			break;
	}
}

void func_846()//Position - 0xA2FCF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
				{
					if (!iLocal_582)
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_281.f_0, Local_290.f_0, -1, 2048, 2);
						iLocal_582 = 1;
					}
				}
			}
			else if (iLocal_582)
			{
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
					TASK::TASK_CLEAR_LOOK_AT(Local_281.f_0);
				}
				iLocal_582 = 0;
			}
		}
	}
}

void func_847()//Position - 0xA303F
{
	if (iLocal_278 != 2)
	{
		if (fLocal_480 > 5500f)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					__LIB_17__::func_68(&uLocal_172, Local_290.f_0, 0, 0, 1, 1, 1);
				}
			}
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
	}
}

void func_874()//Position - 0xA40D0
{
	if (iLocal_249 > 0)
	{
		if (iLocal_249 != 1)
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!__LIB_1__::func_606(Local_281.f_0, Local_285.f_0, 1))
					{
						iLocal_249 = 1;
					}
				}
			}
		}
	}
	switch (iLocal_249)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1ig_2"))
			{
				iLocal_249++;
			}
			break;
		case 1:
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false) && __LIB_1__::func_606(Local_281.f_0, Local_285.f_0, 1))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) > 22f && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_285.f_0))
						{
							if (fLocal_550 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_285.f_0)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_285.f_0)))
							{
								func_94("WADE NOISE REQUIRED", 1);
								iLocal_249 = 2;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) > 6f && ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_285.f_0))
						{
							if (fLocal_550 > (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_285.f_0)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_285.f_0)))
							{
								func_94("WADE NOISE REQUIRED", 1);
								iLocal_249 = 3;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) > 25f && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_285.f_0))
						{
							func_94("WADE NOISE REQUIRED", 1);
							iLocal_249 = 4;
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) > 10f && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(Local_285.f_0))
						{
							iLocal_249 = 5;
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) > 27f)
						{
							func_94("WADE NOISE REQUIRED", 1);
							if (iLocal_317 == 3)
							{
								iLocal_249 = 4;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) > 10f)
						{
							if (iLocal_317 == 3)
							{
								iLocal_249 = 5;
							}
						}
						else if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) < 1f)
						{
							if (!MISC::IS_STRING_NULL(sLocal_551))
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_281.f_0, "misstrevor1ig_2", sLocal_551, 1))
								{
									TASK::STOP_ANIM_TASK(Local_281.f_0, "misstrevor1ig_2", sLocal_551, -8f);
								}
							}
						}
						fLocal_550 = (IntToFloat(ENTITY::GET_ENTITY_HEALTH(Local_285.f_0)) + VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_285.f_0));
					}
					else if (!MISC::IS_STRING_NULL(sLocal_551))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_281.f_0, "misstrevor1ig_2", sLocal_551, 1))
						{
							TASK::STOP_ANIM_TASK(Local_281.f_0, "misstrevor1ig_2", sLocal_551, -8f);
						}
					}
				}
			}
			break;
		case 2:
			if (!PED::IS_PED_INJURED(Local_281.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
				{
					iLocal_552 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (iLocal_552 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_large_01_wade", 8f, -8f, -1, 40, 0f, false, false, false);
						sLocal_551 = "impact_large_01_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_large_02_wade", 8f, -8f, -1, 40, 0f, false, false, false);
						sLocal_551 = "impact_large_02_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_large_03_wade", 8f, -8f, -1, 40, 0f, false, false, false);
						sLocal_551 = "impact_large_03_wade";
						iLocal_249 = 99;
					}
				}
			}
			break;
		case 3:
			if (!PED::IS_PED_INJURED(Local_281.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
				{
					iLocal_552 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (iLocal_552 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_small_01_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "impact_small_01_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_small_02_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "impact_small_02_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_small_03_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "impact_small_03_wade";
						iLocal_249 = 99;
					}
				}
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(Local_281.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
				{
					iLocal_552 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					if (iLocal_552 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "bumps_loop_large_01_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "bumps_loop_large_01_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "bumps_loop_large_02_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "bumps_loop_large_02_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 2)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_small_01_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "impact_small_01_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 3)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_small_02_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "impact_small_02_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 4)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "bumps_loop_large_02_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "bumps_loop_large_02_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 5)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "bumps_loop_large_01_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "bumps_loop_large_01_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 6)
					{
						if (!func_95("iRandAnim6"))
						{
							TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_large_01_wade", 8f, -8f, -1, 40, 0f, false, false, false);
							sLocal_551 = "impact_large_01_wade";
							func_94("iRandAnim6", 1);
							iLocal_249 = 99;
						}
					}
					if (iLocal_552 == 7)
					{
						if (!func_95("iRandAnim7"))
						{
							TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_large_02_wade", 8f, -8f, -1, 40, 0f, false, false, false);
							sLocal_551 = "impact_large_02_wade";
							func_94("iRandAnim7", 1);
							iLocal_249 = 99;
						}
					}
					if (iLocal_552 == 8)
					{
						if (!func_95("iRandAnim8"))
						{
							TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_large_03_wade", 8f, -8f, -1, 40, 0f, false, false, false);
							sLocal_551 = "impact_large_03_wade";
							func_94("iRandAnim8", 1);
							iLocal_249 = 9;
						}
					}
					if (iLocal_552 == 9)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "impact_small_03_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "impact_small_03_wade";
						iLocal_249 = 99;
					}
				}
			}
			break;
		case 5:
			if (!PED::IS_PED_INJURED(Local_281.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
				{
					iLocal_552 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					if (iLocal_552 == 0)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "bumps_loop_small_01_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "bumps_loop_small_01_wade";
						iLocal_249 = 99;
					}
					if (iLocal_552 == 1)
					{
						TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1ig_2", "bumps_loop_small_02_wade", 8f, -8f, -1, 32, 0f, false, false, false);
						sLocal_551 = "bumps_loop_small_02_wade";
						iLocal_249 = 99;
					}
				}
			}
			break;
		case 99:
			if (!__LIB_0__::func_75())
			{
				if (func_95("WADE NOISE REQUIRED"))
				{
					if (!func_95("WADE NOISE"))
					{
						if (!PED::IS_PED_INJURED(Local_281.f_0))
						{
							__LIB_0__::func_709(Local_281.f_0, "T1M1_FMAA", "WADE", 3);
							func_94("WADE NOISE", 1);
							iLocal_553 = MISC::GET_GAME_TIMER();
						}
					}
					else if (__LIB_0__::func_611(&iLocal_553, MISC::GET_RANDOM_INT_IN_RANGE(5000, 8000)))
					{
						func_94("WADE NOISE", 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_281.f_0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
				{
					if (!MISC::IS_STRING_NULL(sLocal_551))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_281.f_0, "misstrevor1ig_2", sLocal_551, 1))
						{
							func_94("WADE NOISE REQUIRED", 0);
							iLocal_249 = 1;
						}
					}
				}
				else if (!MISC::IS_STRING_NULL(sLocal_551))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_281.f_0, "misstrevor1ig_2", sLocal_551, 1))
					{
						TASK::STOP_ANIM_TASK(Local_281.f_0, "misstrevor1ig_2", sLocal_551, -8f);
					}
				}
			}
			break;
	}
}

int func_875()//Position - 0xA4911
{
	func_874();
	if (iLocal_465 < 3)
	{
		if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		}
	}
	if (iLocal_465 < 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1976.33f, 4652.762f, 39.18322f, 1952.4727f, 4637.6636f, 45.604504f, 21.75f, false, true, 0))
		{
			if (iLocal_557 == 0)
			{
				CAM::SET_GAMEPLAY_COORD_HINT(1965.21f, 4635.468f, 41.0095f, -1, 1500, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
				iLocal_557 = 1;
			}
		}
		else if (iLocal_557 == 1)
		{
			CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
			CAM::STOP_GAMEPLAY_HINT(false);
			iLocal_557 = 0;
		}
	}
	if (!iLocal_370)
	{
		if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_290.f_0))
		{
			Local_290.f_6 = Local_542.f_4;
			func_671(Local_542.f_4);
			func_671(Local_542.f_0);
			func_671(Local_542.f_7);
			func_671(Local_542.f_20);
			func_671(Local_542.f_21);
			func_881(sLocal_477, Local_285.f_7);
			func_881(sLocal_477, Local_290.f_7);
			func_881(sLocal_477, Local_295[0 /*12*/].f_7);
			func_881(sLocal_477, Local_295[1 /*12*/].f_7);
			func_547();
			STREAMING::REQUEST_MODEL(Local_542.f_21);
			STREAMING::REQUEST_MODEL(Local_542.f_20);
			VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_407);
			VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_407);
			VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_407);
			VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_407);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				STREAMING::LOAD_ALL_OBJECTS_NOW();
			}
			while (!func_766(&Local_290))
			{
				func_549(0);
			}
			while (func_766(&(Local_295[0 /*12*/])))
			{
				func_549(0);
			}
			while (func_766(&(Local_295[1 /*12*/])))
			{
				func_549(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
			{
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_290.f_0, 15f);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_435 + Vector(100f, 100f, 100f), Local_435 - Vector(100f, 100f, 100f), false, true, true, true);
			MISC::CLEAR_AREA(Local_435, 500f, true, false, false, false);
			func_878(1);
			bLocal_212 = true;
			func_877();
		}
		func_546();
		func_541(3);
		if (!iLocal_398)
		{
			func_545();
			iLocal_398 = 1;
		}
		iLocal_462 = 0;
		while (iLocal_462 <= 3)
		{
			if (!PED::IS_PED_INJURED(Local_269[iLocal_462 /*65*/]))
			{
				if (iLocal_462 == 0 || iLocal_462 == 1)
				{
					PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_269[iLocal_462 /*65*/], false);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[iLocal_462 /*65*/], true);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_269[iLocal_462 /*65*/], true);
			}
			iLocal_462++;
		}
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
		}
		SYSTEM::SETTIMERB(0);
		iLocal_465 = 0;
		iLocal_370 = 1;
		func_604();
	}
	else
	{
		switch (iLocal_465)
		{
			case 0:
				func_604();
				VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_407);
				VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_407);
				VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_407);
				VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_407);
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
				PLAYER::SPECIAL_ABILITY_LOCK(__LIB_0__::func_518(2), 0);
				__LIB_0__::func_638();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				__LIB_0__::func_222(&Local_526, 0, Local_269[1 /*65*/], "BIKER1", 0, 1);
				__LIB_0__::func_222(&Local_526, 1, Local_269[2 /*65*/], "BIKER2", 0, 1);
				iLocal_243 = 0;
				iLocal_207 = 0;
				iLocal_278 = 0;
				iLocal_465++;
				break;
			case 1:
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_221(&Local_526, 0);
					__LIB_0__::func_221(&Local_526, 1);
					__LIB_0__::func_222(&Local_526, 1, Local_269[2 /*65*/], "BIKER2", 0, 1);
					VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_407);
					VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_407);
					VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_407);
					VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_407);
					STREAMING::REMOVE_ANIM_DICT("misstrevor1");
					iLocal_465++;
				}
				break;
			case 2:
				func_876();
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					__LIB_0__::func_221(&Local_526, 0);
					__LIB_0__::func_221(&Local_526, 1);
					iLocal_465++;
				}
				break;
		}
		if (iLocal_465 > 2)
		{
			if (((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(200, sLocal_407) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, sLocal_407)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, sLocal_407)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, sLocal_407))
			{
				func_836(sLocal_407, 200, 1, 1);
				func_835();
				if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_269[2 /*65*/], 175, 0);
				}
				if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_269[3 /*65*/], 175, 0);
				}
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
				}
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
					PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
				}
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
				}
				if (!PED::IS_PED_INJURED(Local_281.f_0))
				{
				}
				iLocal_370 = 0;
				iLocal_379 = 0;
				return 1;
			}
		}
	}
	return 0;
}

void func_876()//Position - 0xA4F13
{
	iLocal_376 = 1;
	while (iLocal_376)
	{
		SYSTEM::WAIT(0);
		if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_MrPhilips", 0);
		if (iLocal_278 == 0)
		{
			if (iLocal_209)
			{
				iLocal_209 = 0;
			}
			else if (iLocal_207 == 0)
			{
				if (func_95("TREVOR_1_DRIVE_TO_BIKERS"))
				{
					AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_BIKERS");
				}
				iLocal_376 = 1;
				func_546();
				STREAMING::REQUEST_ANIM_DICT("misstrevor1leadinout");
				CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
				iLocal_216 = 0;
				iLocal_206 = 0;
				iLocal_558 = 0;
				iLocal_207++;
			}
			else if (iLocal_207 == 1)
			{
				if (__LIB_0__::func_90())
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1leadinout"))
					{
						__LIB_0__::func_325();
						__LIB_17__::func_156();
						__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_280.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_280.f_0, "Ron", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_281.f_0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_281.f_0, "Wade", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_285.f_0, "Trevors_car", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_290.f_0, "Lost_Van", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_295[0 /*12*/], "Clays_bike", 0, 0, 0);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_295[1 /*12*/], "Terrys_bike", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_269[0 /*65*/], "Other_Lost_biker", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_269[1 /*65*/], "Lost_biker", 1, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_269[2 /*65*/], "Terry", 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_269[3 /*65*/], "Clay", 0, 0, 0);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, false, false, false);
						if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_269[2 /*65*/], Local_295[0 /*12*/]))
								{
									ENTITY::DETACH_ENTITY(Local_269[2 /*65*/], false, true);
									ENTITY::DETACH_ENTITY(Local_295[0 /*12*/], false, true);
								}
							}
						}
						CUTSCENE::START_CUTSCENE(0);
						STREAMING::SET_SRL_FORCE_PRESTREAM(0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						else
						{
							SYSTEM::WAIT(0);
						}
						iLocal_278 = 1;
					}
				}
			}
		}
		if (iLocal_278 == 1)
		{
			if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (iLocal_216 == 0)
				{
					RECORDING::REPLAY_START_EVENT(4);
					PED::ADD_SCENARIO_BLOCKING_AREA((Local_429.f_0 - 100f), (Local_429.f_1 - 100f), (Local_429.f_2 - 100f), (Local_429.f_0 + 100f), (Local_429.f_1 + 100f), (Local_429.f_2 + 100f), false, true, true, true);
					MISC::CLEAR_AREA_OF_PEDS(Local_429, 100f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_429, 200f, false, false, false, false, false, false, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 0);
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 1);
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 4);
						VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_285.f_0, 5);
						if (FIRE::IS_ENTITY_ON_FIRE(Local_285.f_0))
						{
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_285.f_0, false), 20f);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_285.f_0, 1000f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_285.f_0, 1000f);
						}
					}
					MISC::CLEAR_AREA(1963.4191f, 4644.103f, 39.7482f, 100f, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[0]))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_265[0]));
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), false, true);
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_285.f_0, 0, 0, 0f);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_285.f_0, 1, 0, 0f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_466))
					{
						if (!PED::IS_PED_INJURED(iLocal_466))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_466);
						}
						PED::DELETE_PED(&iLocal_466);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
					{
						if (!PED::IS_PED_INJURED(iLocal_467))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_467);
						}
						PED::DELETE_PED(&iLocal_467);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ashley"));
					}
					else
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ashley"));
					}
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
					}
					if (!PED::IS_PED_INJURED(Local_281.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ashley"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
					PED::ADD_SCENARIO_BLOCKING_AREA(Local_435 + Vector(100f, 100f, 100f), Local_435 - Vector(100f, 100f, 100f), false, true, true, true);
					VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
					MISC::CLEAR_AREA(Local_435, 500f, true, false, false, false);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_285.f_7, sLocal_477);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_290.f_7, sLocal_477);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_295[0 /*12*/].f_7, sLocal_477);
					VEHICLE::REQUEST_VEHICLE_RECORDING(Local_295[1 /*12*/].f_7, sLocal_477);
					VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_407);
					VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_407);
					VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_407);
					VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_407);
					CAM::STOP_GAMEPLAY_HINT(false);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
					iLocal_216 = 1;
				}
				else if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() < 49954)
					{
						if (!iLocal_206)
						{
							if (__LIB_1__::func_254())
							{
								__LIB_16__::func_925(500);
								iLocal_278 = 3;
							}
						}
					}
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 22500)
			{
				if (!func_95("TRV1_START"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_START"))
					{
						func_94("TRV1_START", 1);
					}
				}
			}
			if (CUTSCENE::GET_CUTSCENE_TIME() > 41200)
			{
				if (!func_95("TRV1_CHASE_STARTS"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASE_STARTS"))
					{
						func_94("TRV1_CHASE_STARTS", 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Other_Lost_Biker", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_269[0 /*65*/], Local_290.f_0, false))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_290.f_0, true, true, false);
							PED::SET_PED_INTO_VEHICLE(Local_269[0 /*65*/], Local_290.f_0, -1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_285.f_0, -1, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_INJURED(Local_281.f_0))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_285.f_0, 1, false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_269[2 /*65*/]))
							{
								PED::SET_PED_INTO_VEHICLE(Local_281.f_0, Local_285.f_0, 1);
								if (!CAM::IS_SCREEN_FADED_OUT())
								{
									TASK::TASK_PLAY_ANIM(Local_281.f_0, "misstrevor1leadinout", "leadout_action_wade", 1000f, -8f, -1, 0, 0f, false, false, false);
								}
								TASK::TASK_LOOK_AT_ENTITY(Local_281.f_0, Local_269[2 /*65*/], -1, 2048, 3);
								PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_285.f_0, 0, false))
						{
							PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
							PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_car", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_285.f_0, 0, true);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_285.f_0, 1, true);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TREVOR_1_LEAD_OUT_CR", Local_285.f_0, 0, false, 0);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_285.f_0, 7f);
					iLocal_558 = 1;
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (iLocal_558 == 0)
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_285.f_0, true, true, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lost_Van", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
				{
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_290.f_0, true);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_290.f_0, 200, sLocal_407, true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_290.f_0, 3000f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_290.f_0, true);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lost_biker", 0))
			{
				if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_269[1 /*65*/], false, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Clay", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
				{
					if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_269[2 /*65*/], Local_295[0 /*12*/]))
						{
							ENTITY::DETACH_ENTITY(Local_269[2 /*65*/], true, true);
							ENTITY::DETACH_ENTITY(Local_295[0 /*12*/], true, true);
						}
						else if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/], false))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_269[2 /*65*/], false);
								PED::SET_PED_INTO_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/], -1);
							}
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Clays_bike", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_295[0 /*12*/], 204, sLocal_407, 1, 0, 786468);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_295[0 /*12*/], true, true, false);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/], 3000f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_295[0 /*12*/], true);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Terry", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
				{
					if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
					{
						if (!PED::IS_PED_IN_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/], false))
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_269[3 /*65*/], false);
							PED::SET_PED_INTO_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/], -1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Terrys_bike", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_295[1 /*12*/], 205, sLocal_407, 1, 0, 786468);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_295[1 /*12*/], true, true, false);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/], 3000f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Local_295[1 /*12*/], true);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_216 == 1)
			{
				iLocal_278 = 2;
			}
		}
		if (iLocal_278 == 2)
		{
			if (iLocal_206)
			{
				while (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::LOAD_SCENE(1963.4191f, 4644.103f, 39.7482f);
			}
			RECORDING::REPLAY_STOP_EVENT();
			__LIB_16__::func_884();
			AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASE_CS_SKIP");
			CUTSCENE::REMOVE_CUTSCENE();
			__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
			iLocal_207 = 0;
			iLocal_278 = 0;
			iLocal_376 = 0;
		}
		if (iLocal_278 == 3)
		{
			CUTSCENE::STOP_CUTSCENE(false);
			iLocal_206 = 1;
			iLocal_278 = 1;
		}
	}
}

void func_877()//Position - 0xA59B5
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
	{
		ENTITY::SET_ENTITY_QUATERNION(Local_290.f_0, 0.0109f, 0.0036f, 0.6236f, 0.7816f);
		ENTITY::SET_ENTITY_HEALTH(Local_290.f_0, 4000, 0);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 1, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 2, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 3, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 4, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 5, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 6, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 7, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 8, true);
		VEHICLE::SET_VEHICLE_EXTRA(Local_290.f_0, 9, true);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_290.f_0, true);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_290.f_0, 15f);
		ENTITY::SET_ENTITY_PROOFS(Local_290.f_0, false, false, false, false, false, false, false, false);
	}
}

void func_878(bool bParam0)//Position - 0xA5A64
{
	if (bParam0)
	{
		iLocal_462 = 0;
		while (iLocal_462 <= 3)
		{
			STREAMING::REQUEST_MODEL(Local_269[iLocal_462 /*65*/].f_16);
			if (STREAMING::HAS_MODEL_LOADED(Local_269[iLocal_462 /*65*/].f_16))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_269[iLocal_462 /*65*/]))
				{
					func_879(&(Local_269[iLocal_462 /*65*/]), 0);
					func_131(Local_269[iLocal_462 /*65*/], 494);
				}
				if (iLocal_462 > 1)
				{
					if (!PED::IS_PED_INJURED(Local_269[iLocal_462 /*65*/]))
					{
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_269[iLocal_462 /*65*/], true);
						ENTITY::SET_ENTITY_HEALTH(Local_269[iLocal_462 /*65*/], 150, 0);
						PED::SET_PED_MAX_HEALTH(Local_269[iLocal_462 /*65*/], 150);
					}
				}
			}
			else
			{
				while (!STREAMING::HAS_MODEL_LOADED(Local_269[iLocal_462 /*65*/].f_16))
				{
					STREAMING::REQUEST_MODEL(Local_269[iLocal_462 /*65*/].f_16);
					SYSTEM::WAIT(0);
				}
			}
			iLocal_462++;
		}
	}
	else
	{
		iLocal_462 = 0;
		while (iLocal_462 <= 1)
		{
			STREAMING::REQUEST_MODEL(Local_269[iLocal_462 /*65*/].f_16);
			if (STREAMING::HAS_MODEL_LOADED(Local_269[iLocal_462 /*65*/].f_16))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_269[iLocal_462 /*65*/]))
				{
					func_879(&(Local_269[iLocal_462 /*65*/]), 0);
				}
				if (iLocal_462 > 1)
				{
					if (!PED::IS_PED_INJURED(Local_269[iLocal_462 /*65*/]))
					{
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_269[iLocal_462 /*65*/], true);
						ENTITY::SET_ENTITY_HEALTH(Local_269[iLocal_462 /*65*/], 150, 0);
						PED::SET_PED_MAX_HEALTH(Local_269[iLocal_462 /*65*/], 150);
					}
				}
			}
			else
			{
				while (!STREAMING::HAS_MODEL_LOADED(Local_269[iLocal_462 /*65*/].f_16))
				{
					STREAMING::REQUEST_MODEL(Local_269[iLocal_462 /*65*/].f_16);
					SYSTEM::WAIT(0);
				}
			}
			iLocal_462++;
		}
	}
}

void func_879(var uParam0, bool bParam1)//Position - 0xA5BFF
{
	STREAMING::REQUEST_MODEL(uParam0->f_16);
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_16))
	{
		*uParam0 = PED::CREATE_PED(26, uParam0->f_16, uParam0->f_2, uParam0->f_5, true, true);
		func_131(*uParam0, 494);
		WEAPON::GIVE_WEAPON_TO_PED(*uParam0, uParam0->f_14, -1, true, true);
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_476);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_476);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam0, iLocal_476);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(*uParam0, false);
		PED::SET_PED_AS_ENEMY(*uParam0, true);
		if (bParam1)
		{
			func_880(uParam0);
		}
	}
}

void func_880(var uParam0)//Position - 0xA5C8C
{
	if (!PED::IS_PED_INJURED(*uParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, false);
		PED::SET_PED_COMBAT_ABILITY(*uParam0, uParam0->f_19);
		PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(*uParam0, uParam0->f_20, 20);
		PED::SET_PED_COMBAT_RANGE(*uParam0, uParam0->f_18);
		PED::SET_PED_ACCURACY(*uParam0, uParam0->f_21);
		PED::SET_PED_HEARING_RANGE(*uParam0, 100f);
		PED::SET_PED_SEEING_RANGE(*uParam0, 100f);
		uParam0->f_25 = 0;
		uParam0->f_26 = MISC::GET_GAME_TIMER();
		uParam0->f_24 = 0;
		if (uParam0->f_23)
		{
			TASK::REMOVE_COVER_POINT(uParam0->f_22);
			uParam0->f_23 = 0;
		}
	}
}

void func_881(char* sParam0, int iParam1)//Position - 0xA5D14
{
	int iVar0;
	iVar0 = func_882(sParam0, iParam1);
	if (iVar0 != -1)
	{
		Local_537[iVar0 /*4*/].f_2 = 1;
	}
}

int func_882(char* sParam0, int iParam1)//Position - 0xA5D36
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (!bVar1)
	{
		if (MISC::ARE_STRINGS_EQUAL(Local_537[iVar2 /*4*/], sParam0) && Local_537[iVar2 /*4*/].f_1 == iParam1)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		else
		{
			iVar2++;
			if (iVar2 >= iLocal_536)
			{
				bVar1 = true;
			}
		}
	}
	return iVar0;
}

int func_883()//Position - 0xA5D8E
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1978.169f, 4656.045f, 37.969585f, 1948.443f, 4626.579f, 49.553745f, 24.5f, false, true, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 79 /*INPUT_VEH_LOOK_BEHIND*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 286 /*INPUT_VEH_LOOK_LEFT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 287 /*INPUT_VEH_LOOK_RIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 26 /*INPUT_LOOK_BEHIND*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 273 /*INPUT_LOOK_DOWN*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 270 /*INPUT_LOOK_LEFT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 271 /*INPUT_LOOK_RIGHT*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 4 /*INPUT_LOOK_DOWN_ONLY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 272 /*INPUT_LOOK_UP*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 3 /*INPUT_LOOK_UP_ONLY*/, true);
					PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 10f);
					if (iLocal_557 == 0)
					{
						if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4)
						{
							CAM::SET_GAMEPLAY_COORD_HINT(1965.21f, 4635.468f, 41.0095f, -1, 1500, 2000, 0);
							CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(true);
							CAM::SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(0.2f);
							iLocal_557 = 1;
						}
					}
					else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
					{
						CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
						CAM::STOP_GAMEPLAY_HINT(false);
						iLocal_557 = 0;
					}
				}
				else if (iLocal_557 == 1)
				{
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
					CAM::STOP_GAMEPLAY_HINT(false);
					iLocal_557 = 0;
				}
			}
		}
	}
	if (!func_95("TREVOR_1_DRIVE_TO_BIKERS"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				AUDIO::START_AUDIO_SCENE("TREVOR_1_DRIVE_TO_BIKERS");
				func_94("TREVOR_1_DRIVE_TO_BIKERS", 1);
			}
		}
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	func_874();
	if (iLocal_380 == 1)
	{
		func_891();
	}
	if (iLocal_465 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, true);
			}
		}
	}
	if (iLocal_465 > 1)
	{
		func_889();
	}
	func_888();
	func_887();
	if (iLocal_379 == 0)
	{
		func_604();
		func_552(0, "Get to Chase", 0, 0, 0, 1);
		PLAYER::SPECIAL_ABILITY_LOCK(__LIB_0__::func_518(2), 0);
		iLocal_379 = 1;
	}
	if (!func_95("BUDDIES IN VEHICLE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
			{
				PED::SET_PED_RESET_FLAG(Local_281.f_0, 190, true);
				if ((TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_281.f_0, 2f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_280.f_0, 2f);
				}
				else
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_281.f_0, 1f);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_280.f_0, 1f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false) && PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
					{
						func_94("BUDDIES IN VEHICLE", 1);
					}
				}
			}
		}
	}
	if (!iLocal_370)
	{
		if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
		{
			if (!func_95("DO LOAD SCENE"))
			{
				STREAMING::LOAD_SCENE(1982.7225f, 3831.4949f, 31.3972f);
			}
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, true, false, true);
			if (!PED::IS_PED_INJURED(Local_280.f_0) && !PED::IS_PED_INJURED(Local_281.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_280.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_280.f_0, 2000.46f, 3831.18f, 31.29f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_280.f_0, 90.19f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_280.f_0, true);
						func_134();
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_281.f_0, false))
					{
						ENTITY::SET_ENTITY_COORDS(Local_281.f_0, 1999.89f, 3829.58f, 31.3f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(Local_281.f_0, 91.42f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_281.f_0, true);
						func_886();
					}
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1995.97f, 3829.84f, 31.2735f, true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.81f);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(PLAYER::PLAYER_PED_ID(), true);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
					}
				}
			}
		}
		func_551();
		func_547();
		iLocal_465 = 0;
		iLocal_557 = 0;
		iLocal_239 = 0;
		iLocal_380 = 0;
		bLocal_212 = true;
		iLocal_375 = 0;
		if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
		{
			func_658(500);
			iLocal_370 = 1;
		}
		if (!iLocal_398)
		{
			func_545();
			iLocal_398 = 1;
		}
	}
	else
	{
		switch (iLocal_465)
		{
			case 0:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
					}
					if (!PED::IS_PED_INJURED(Local_281.f_0))
					{
						PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_281.f_0, 1);
					}
				}
				if (!func_95("BLOOD"))
				{
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.657f, 0.566f, 126.36f, 0.07f, 3, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.589f, 0.266f, 0f, 0.01f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.612f, 0.269f, 126.36f, 0.22f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.709f, 0.396f, 126.36f, 0f, 1, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 200.36f, 0.1f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					func_94("BLOOD", 1);
				}
				if (iLocal_232 != 0)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_232);
				}
				iLocal_549 = 0;
				iLocal_214 = 0;
				bLocal_212 = true;
				iLocal_383 = 0;
				Local_280.f_9 = 0;
				Local_269[0 /*65*/].f_14 = joaat("WEAPON_ASSAULTRIFLE");
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
				iLocal_556 = 0;
				iLocal_465++;
				break;
			case 1:
				if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_S1", 7, 0, 0, 0))
				{
					iLocal_465++;
				}
				break;
			case 2:
				func_884();
				if (func_619(&Local_297, 1962.4629f, 4646.9336f, 39.753f, 0.001f, 0.001f, 2f, 1, Local_280.f_0, Local_281.f_0, 0, Local_285.f_0, "TRV_GT1", Local_542.f_117, "TRV_BDY3", "", "TRV_BDY5", "TRV_GTTT", Local_542.f_111, 0, 1, 1, -1))
				{
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(Local_297.f_5))
					{
						if (!__LIB_13__::func_755(&Local_297, 1))
						{
							if (!__LIB_0__::func_75())
							{
								if (iLocal_375 == 0)
								{
									if (__LIB_16__::func_929() == 0)
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_AL1", 7, 0, 0, 0))
										{
											func_94("T1M1_AL1", 1);
											if (!PED::IS_PED_INJURED(Local_281.f_0))
											{
												TASK::TASK_LOOK_AT_ENTITY(Local_281.f_0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
											}
											iLocal_375 = 1;
										}
									}
									else if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_PH1", 7, 0, 0, 0))
									{
										func_94("T1M1_PH1", 1);
										iLocal_375 = 1;
									}
								}
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1934.7938f, 4634.039f, 38.488747f, 1966.4927f, 4647.708f, 42.865807f, 15.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1949.0835f, 4634.5435f, 38.65303f, 1923.8661f, 4645.1787f, 42.060905f, 15.5f, false, true, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
							{
								if (!iLocal_239)
								{
									__LIB_0__::func_222(&Local_526, 0, Local_269[1 /*65*/], "BIKER1", 0, 1);
									__LIB_0__::func_222(&Local_526, 1, Local_269[2 /*65*/], "BIKER2", 0, 1);
									if (!__LIB_0__::func_75())
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_MCS1_LI", 7, 0, 0, 0))
										{
											if ((!PED::IS_PED_INJURED(Local_269[1 /*65*/]) && !PED::IS_PED_INJURED(Local_269[2 /*65*/])) && !PED::IS_PED_INJURED(Local_269[3 /*65*/]))
											{
												if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
												{
													TASK::TASK_PLAY_ANIM(Local_269[2 /*65*/], "misstrevor1", "gang_chatting_leadin_b", 2f, -4f, -1, 1, 0f, false, false, false);
												}
												iLocal_333 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_269[1 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_leadin_a", 2f, -4f, 0, 16, 1000f, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_269[3 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_leadin_c", 2f, -4f, 0, 16, 1000f, 0);
												iLocal_239 = 1;
											}
										}
									}
								}
								if (ENTITY::GET_ENTITY_SPEED(Local_285.f_0) < 10f)
								{
									iLocal_555 = 15;
								}
								else
								{
									iLocal_555 = 10;
								}
								if (__LIB_0__::func_213(Local_285.f_0, SYSTEM::TO_FLOAT(iLocal_555), 1, 1056964608, 0, 1, 0))
								{
									__LIB_0__::func_366(0);
									__LIB_0__::func_638();
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
									if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1, false, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
										{
											TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
											TASK::TASK_PAUSE(0, 1000);
											TASK::TASK_LEAVE_VEHICLE(0, Local_285.f_0, 256);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
											TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), iLocal_469);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
										}
									}
									if (!PED::IS_PED_INJURED(Local_280.f_0))
									{
										PED::REMOVE_PED_FROM_GROUP(Local_280.f_0);
									}
									if (!PED::IS_PED_INJURED(Local_281.f_0))
									{
										PED::REMOVE_PED_FROM_GROUP(Local_281.f_0);
									}
									Local_280.f_9 = 0;
									iLocal_354 = MISC::GET_GAME_TIMER();
									HUD::REMOVE_BLIP(&(Local_297.f_5));
									if (!PED::IS_PED_INJURED(Local_281.f_0))
									{
										TASK::TASK_CLEAR_LOOK_AT(Local_281.f_0);
									}
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 3f, 4);
									iLocal_465++;
								}
							}
						}
						if (__LIB_0__::func_611(&iLocal_554, 2000))
						{
							if (iLocal_556 == 1)
							{
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								iLocal_556 = 0;
							}
						}
					}
					if (iLocal_465 == 2)
					{
						if (iLocal_375 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
							{
								if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
								{
									if ((HUD::DOES_BLIP_EXIST(Local_297.f_5) && PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false)) && PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
									{
										if (__LIB_0__::func_568())
										{
											HUD::CLEAR_PRINTS();
											__LIB_0__::func_620(0);
										}
									}
									else if (!__LIB_0__::func_568())
									{
										if (__LIB_0__::func_501(Local_542.f_111, 0, 0))
										{
											HUD::CLEAR_PRINTS();
										}
										__LIB_0__::func_620(1);
									}
									else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
									{
										if (!PED::IS_PED_INJURED(Local_281.f_0))
										{
											if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, true))
											{
												if (!iLocal_556)
												{
													TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_281.f_0, 20000, 2048, 2);
													__LIB_0__::func_709(PLAYER::PLAYER_PED_ID(), "T1M1_GSAA", "TREVOR", 4);
													iLocal_556 = 1;
													iLocal_554 = MISC::GET_GAME_TIMER();
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_280.f_9 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2013.3004f, 4635.4653f, 48.703773f, 2083.6697f, 4704.757f, 28.958324f, 30f, false, true, 0))
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (func_612())
								{
									if (Local_280.f_9 == 0)
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_NR1", 7, 0, 0, 0))
										{
											Local_280.f_9 = 1;
										}
									}
								}
							}
						}
					}
					if (Local_280.f_9 == 0)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2000.0895f, 4623.684f, 39.670765f, 1928.133f, 4592.135f, 43.34277f, 25.25f, false, true, 0))
						{
							if (!__LIB_13__::func_755(&Local_297, 1))
							{
								if (func_612())
								{
									if (Local_280.f_9 == 0)
									{
										if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_NR2", 7, 0, 0, 0))
										{
											Local_280.f_9 = 1;
										}
									}
								}
							}
						}
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(1959.7803f, 4645.9565f, 39.74654f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 70f)
					{
						if (iLocal_214 == 0)
						{
							iLocal_214 = 1;
							CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
							STREAMING::SET_SRL_FORCE_PRESTREAM(3);
						}
					}
					else if (iLocal_214 == 1)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(1959.7803f, 4645.9565f, 39.74654f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 95f)
						{
							CUTSCENE::REMOVE_CUTSCENE();
							STREAMING::SET_SRL_FORCE_PRESTREAM(0);
							iLocal_214 = 0;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1961.6035f, 4645.7407f, 39.7129f, 300f, 300f, 150f, false, true, 0))
					{
						if ((((((!ENTITY::DOES_ENTITY_EXIST(Local_290.f_0) || !ENTITY::DOES_ENTITY_EXIST(Local_295[0 /*12*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_295[1 /*12*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_269[0 /*65*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_269[1 /*65*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_269[2 /*65*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_269[3 /*65*/]))
						{
							STREAMING::REQUEST_MODEL(Local_542.f_4);
							STREAMING::REQUEST_MODEL(Local_542.f_0);
							STREAMING::REQUEST_MODEL(Local_542.f_7);
							if ((STREAMING::HAS_MODEL_LOADED(Local_542.f_4) && STREAMING::HAS_MODEL_LOADED(Local_542.f_4)) && STREAMING::HAS_MODEL_LOADED(Local_542.f_4))
							{
								STREAMING::REQUEST_MODEL(joaat("IG_Clay"));
								STREAMING::REQUEST_MODEL(joaat("IG_Terry"));
								STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
								if ((STREAMING::HAS_MODEL_LOADED(Local_542.f_7) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Clay"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Terry")))
								{
									if ((STREAMING::HAS_MODEL_LOADED(Local_542.f_7) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Clay"))) && STREAMING::HAS_MODEL_LOADED(joaat("IG_Terry")))
									{
										func_878(1);
									}
									STREAMING::SET_PED_POPULATION_BUDGET(2);
									STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
									if (STREAMING::HAS_MODEL_LOADED(Local_542.f_4) && STREAMING::HAS_MODEL_LOADED(Local_542.f_0))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(Local_290.f_0))
										{
											Local_290.f_0 = VEHICLE::CREATE_VEHICLE(Local_290.f_6, Local_290.f_2, Local_290.f_5, true, true, false);
											VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_290.f_0, 15f);
										}
										else
										{
											func_877();
										}
										if (!ENTITY::DOES_ENTITY_EXIST(Local_295[0 /*12*/]))
										{
											func_128(7, 0f, 0f, 0f, 0, 0);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(Local_295[1 /*12*/]))
										{
											func_128(8, 0f, 0f, 0f, 0, 0);
										}
									}
								}
							}
						}
						else if (iLocal_380 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2015.9991f, 4641.445f, 41.1899f, 50f, 50f, 50f, false, true, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_290.f_0))
								{
									if ((!PED::IS_PED_INJURED(Local_269[1 /*65*/]) && !PED::IS_PED_INJURED(Local_269[2 /*65*/])) && !PED::IS_PED_INJURED(Local_269[3 /*65*/]))
									{
										STREAMING::REQUEST_ANIM_DICT("misstrevor1");
										if (STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
										{
											if (!ENTITY::DOES_ENTITY_EXIST(iLocal_265[0]))
											{
												iLocal_265[0] = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), 1967.647f, 4635.184f, 40.156f, true, true, false);
											}
											else if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_265[0]))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_265[0], Local_269[1 /*65*/], PED::GET_PED_BONE_INDEX(Local_269[1 /*65*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, 0);
												ENTITY::SET_ENTITY_VISIBLE(iLocal_265[0], true, false);
											}
											else if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
											{
												WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_269[1 /*65*/], false, true, true, false);
												WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_269[2 /*65*/], false, true, true, false);
												WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Local_269[3 /*65*/], false, true, true, false);
												if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
													{
														ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_269[2 /*65*/], Local_295[0 /*12*/], -1, 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
													}
												}
												if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
												{
													PED::SET_PED_PROP_INDEX(Local_269[3 /*65*/], 0, 0, 0, false);
												}
												if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
												{
													PED::SET_PED_COMPONENT_VARIATION(Local_269[1 /*65*/], 0, 0, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_269[1 /*65*/], 3, 0, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_269[1 /*65*/], 4, 0, 0, 0);
													PED::SET_PED_COMPONENT_VARIATION(Local_269[1 /*65*/], 10, 0, 0, 0);
												}
												if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
												{
													TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle01_b", 8f, -4f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle02_b", 8f, -4f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle03_b", 8f, -4f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle03_b", 8f, -4f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle01_b", 8f, -4f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle02_b", 8f, -4f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle01_b", 8f, -4f, -1, 0, 0f, false, false, false);
													TASK::TASK_PLAY_ANIM(0, "misstrevor1", "gang_chatting_idle02_b", 8f, -8f, -1, 1, 0f, false, false, false);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
													TASK::TASK_PERFORM_SEQUENCE(Local_269[2 /*65*/], iLocal_469);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
												}
												if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
												{
													WEAPON::SET_CURRENT_PED_WEAPON(Local_269[0 /*65*/], joaat("WEAPON_UNARMED"), true);
													TASK::TASK_START_SCENARIO_IN_PLACE(Local_269[0 /*65*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, false);
												}
												iLocal_333 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_269[1 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_idle01_a", 1000f, -4f, 0, 16, 1000f, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(Local_269[3 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_idle01_c", 1000f, -4f, 0, 16, 1000f, 0);
												iLocal_337 = 0;
												iLocal_380 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			case 3:
				if (!iLocal_239)
				{
					__LIB_0__::func_222(&Local_526, 0, Local_269[1 /*65*/], "BIKER1", 0, 1);
					__LIB_0__::func_222(&Local_526, 1, Local_269[2 /*65*/], "BIKER2", 0, 1);
					if (!__LIB_0__::func_75())
					{
						if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_MCS1_LI", 7, 0, 0, 0))
						{
							if ((!PED::IS_PED_INJURED(Local_269[1 /*65*/]) && !PED::IS_PED_INJURED(Local_269[2 /*65*/])) && !PED::IS_PED_INJURED(Local_269[3 /*65*/]))
							{
								if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
								{
									TASK::TASK_PLAY_ANIM(Local_269[2 /*65*/], "misstrevor1", "gang_chatting_leadin_b", 2f, -4f, -1, 1, 0f, false, false, false);
								}
								iLocal_333 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_269[1 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_leadin_a", 2f, -4f, 0, 16, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_269[3 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_leadin_c", 2f, -4f, 0, 16, 1000f, 0);
								iLocal_239 = 1;
							}
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false) || __LIB_0__::func_611(&iLocal_354, 3000))
					{
						iLocal_465++;
					}
				}
				break;
		}
		if (iLocal_465 >= 3)
		{
			if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() != 4 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
			}
		}
		if (iLocal_465 >= 4)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_472))
			{
				HUD::REMOVE_BLIP(&iLocal_472);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_471))
			{
				HUD::REMOVE_BLIP(&iLocal_471);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_473))
			{
				HUD::REMOVE_BLIP(&iLocal_473);
			}
			iLocal_370 = 0;
			return 1;
		}
	}
	return 0;
}

int func_884()//Position - 0xA7074
{
	if (iLocal_317 == 1)
	{
		switch (iLocal_448)
		{
			case 0:
				if (func_885() == 1)
				{
					iLocal_448++;
				}
				break;
			case 1:
				return 1;
				break;
		}
	}
	else if (iLocal_317 == 3)
	{
		switch (iLocal_448)
		{
			case 0:
				if (func_885() == 1)
				{
					iLocal_448++;
				}
				break;
			case 1:
				return 1;
				break;
			}
	}
	return 0;
}

int func_885()//Position - 0xA70EA
{
	int iVar0;
	iVar0 = iLocal_317 + 1;
	switch (iLocal_439)
	{
		case 0:
			if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2016.4196f, 4642.44f, 40.1808f, 300f, 300f, 300f, false, true, 0))
				{
					iLocal_439++;
				}
			}
			else if (iVar0 == 4)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 80.2901f, 3619.4456f, 38.6997f, 300f, 300f, 300f, false, true, 0))
				{
					iLocal_439++;
				}
			}
			else if (iVar0 == 6 || iVar0 == 7)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -30.5141f, 3025.337f, 39.6005f, 300f, 300f, 300f, false, true, 0))
				{
					iLocal_439++;
				}
			}
			break;
		case 1:
			if ((iVar0 == 1 || iVar0 == 3) || iVar0 == 2)
			{
				iLocal_439++;
			}
			else if (iVar0 == 7 || iVar0 == 7)
			{
				STREAMING::REQUEST_ANIM_DICT(Local_542.f_22);
				if (STREAMING::HAS_ANIM_DICT_LOADED(Local_542.f_22))
				{
					iLocal_439++;
				}
			}
			else
			{
				iLocal_439++;
			}
			break;
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_886()//Position - 0xA7254
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 1, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 5, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 7, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_281.f_0, 11, 0, 0, 0);
		}
	}
}

void func_887()//Position - 0xA72F9
{
	if (iLocal_383 == 0)
	{
		if (!PED::IS_PED_INJURED(iLocal_467))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iLocal_467))
			{
				if (!func_95("WIMPER"))
				{
					__LIB_0__::func_709(iLocal_467, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
					iLocal_548 = MISC::GET_GAME_TIMER();
					func_94("WIMPER", 1);
				}
				else if (__LIB_0__::func_611(&iLocal_548, MISC::GET_RANDOM_INT_IN_RANGE(0, 100)))
				{
					func_94("WIMPER", 0);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_467))
	{
		PED::SET_PED_CAPSULE(iLocal_467, 0.5f);
		PED::SET_PED_RESET_FLAG(iLocal_467, 249, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_466))
	{
		if (!PED::IS_PED_INJURED(iLocal_467))
		{
			if ((((((((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_466) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_466)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_466)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_467)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iLocal_467)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_467)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(2017.886f, 3830.8699f, 30.865017f, 2017.5312f, 3824.7158f, 34.666862f, 6.25f, joaat("WEAPON_GRENADE"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(2017.886f, 3830.8699f, 30.865017f, 2017.5312f, 3824.7158f, 34.666862f, 6.25f, joaat("WEAPON_STICKYBOMB"), false)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(2017.886f, 3830.8699f, 30.865017f, 2017.5312f, 3824.7158f, 34.666862f, 6.25f, joaat("WEAPON_SMOKEGRENADE"), false)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_467, 2f, 2f, 3f, false, true, 0)) || PED::IS_PED_BEING_STUNNED(iLocal_466, 0))
			{
				if (iLocal_383 == 0)
				{
					if (!PED::IS_PED_RAGDOLL(iLocal_467))
					{
						if (!PED::IS_PED_FLEEING(iLocal_467))
						{
							iLocal_339 = PED::CREATE_SYNCHRONIZED_SCENE(2017.841f, 3828.193f, 31.52f, 0f, 0f, -4f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_467, iLocal_339, "misstrevor1", "stand_ashley", 8f, -8f, 1, 0, 1000f, 0);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_339, false);
							ENTITY::SET_ENTITY_HEALTH(iLocal_466, 0, 0);
							iLocal_383 = 1;
						}
					}
				}
				ENTITY::SET_ENTITY_HEALTH(iLocal_466, 0, 0);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_466, 0, 0);
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_467))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_467))
		{
			if (iLocal_383 == 0)
			{
				iLocal_339 = PED::CREATE_SYNCHRONIZED_SCENE(2017.841f, 3828.193f, 31.52f, 0f, 0f, -4f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_467, iLocal_339, "misstrevor1", "stand_ashley", 8f, -8f, 1, 0, 1000f, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_339, false);
				iLocal_383 = 1;
			}
		}
	}
	if (iLocal_383 == 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_467))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_339))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_339) == 1f)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_467, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				}
			}
		}
	}
	if (iLocal_465 > 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_467, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 125f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_467))
				{
					PED::DELETE_PED(&iLocal_467);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Ashley"));
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_466))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_466, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) > 125f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_466))
				{
					PED::DELETE_PED(&iLocal_466);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_JohnnyKlebitz"));
				}
			}
		}
	}
}

void func_888()//Position - 0xA766F
{
	switch (iLocal_246)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("misstrevor1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("misstrevor1"))
			{
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_338))
				{
					if (!PED::IS_PED_INJURED(iLocal_466) && !PED::IS_PED_INJURED(iLocal_467))
					{
						iLocal_338 = PED::CREATE_SYNCHRONIZED_SCENE(2017.841f, 3828.193f, 31.445f, -1f, -4f, -4f, 2);
						if (!PED::IS_PED_INJURED(iLocal_466))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_466, iLocal_338, "misstrevor1", "mr_philips_idle_johnny", 1000f, -1000f, 1, 0, 1000f, 0);
							TASK::TASK_PLAY_ANIM(iLocal_466, "FACIALS@GEN_MALE@BASE", "dead_1", 8f, -8f, -1, 33, 0f, false, false, false);
							ENTITY::SET_ENTITY_HEALTH(iLocal_466, 101, 0);
							AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_466, true);
							AUDIO::STOP_PED_SPEAKING(iLocal_466, true);
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_466, false);
							PED::SET_PED_DIES_WHEN_INJURED(iLocal_466, true);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_466, 0, 1, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_466, true);
							PED::SET_PED_CONFIG_FLAG(iLocal_466, 118, false);
							PED::SET_PED_CONFIG_FLAG(iLocal_466, 208, true);
							TASK::TASK_PLAY_ANIM(iLocal_466, "FACIALS@GEN_MALE@BASE", "dead_1", 8f, -8f, -1, 33, 0f, false, false, false);
							Local_272[0 /*18*/].f_1 = 1110;
							Local_272[0 /*18*/].f_2 = { 2018.58f, 3828.41f, 31.61f };
							Local_272[0 /*18*/].f_5 = { 0f, 0f, -1f };
							Local_272[0 /*18*/].f_8 = { __LIB_0__::func_79(0f, 1f, 0f) };
							Local_272[0 /*18*/].f_11 = 0.8f;
							Local_272[0 /*18*/].f_12 = 0.8f;
							Local_272[0 /*18*/].f_13 = 1f;
							Local_272[0 /*18*/].f_14 = -1f;
							Local_272[0 /*18*/].f_15 = 0.3f;
							Local_272[0 /*18*/].f_17 = 0;
							Local_272[1 /*18*/].f_1 = 1015;
							Local_272[1 /*18*/].f_2 = { 2018.69f, 3827.87f, 31.63f };
							Local_272[1 /*18*/].f_5 = { 0f, 0f, -1f };
							Local_272[1 /*18*/].f_8 = { __LIB_0__::func_79(0f, 1f, 0f) };
							Local_272[1 /*18*/].f_11 = 0.9f;
							Local_272[1 /*18*/].f_12 = 0.8f;
							Local_272[1 /*18*/].f_13 = 1f;
							Local_272[1 /*18*/].f_14 = -1f;
							Local_272[1 /*18*/].f_15 = 0.3f;
							Local_272[1 /*18*/].f_17 = 0;
							Local_272[2 /*18*/].f_1 = 1015;
							Local_272[2 /*18*/].f_2 = { 2017.87f, 3828.09f, 31.52f };
							Local_272[2 /*18*/].f_5 = { 0f, 0f, -1f };
							Local_272[2 /*18*/].f_8 = { __LIB_0__::func_79(0f, 1f, 0f) };
							Local_272[2 /*18*/].f_11 = 2f;
							Local_272[2 /*18*/].f_12 = 2f;
							Local_272[2 /*18*/].f_13 = 1f;
							Local_272[2 /*18*/].f_14 = -1f;
							Local_272[2 /*18*/].f_15 = 0.3f;
							Local_272[2 /*18*/].f_17 = 0;
							Local_272[0 /*18*/] = GRAPHICS::ADD_DECAL(Local_272[0 /*18*/].f_1, Local_272[0 /*18*/].f_2, Local_272[0 /*18*/].f_5, Local_272[0 /*18*/].f_8, Local_272[0 /*18*/].f_11, Local_272[0 /*18*/].f_12, 0.196f, 0f, 0f, Local_272[0 /*18*/].f_13, Local_272[0 /*18*/].f_14, false, false, false);
						}
						if (!PED::IS_PED_INJURED(iLocal_466))
						{
							PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_466, 16);
						}
						if (!PED::IS_PED_INJURED(iLocal_467))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_467, joaat("PLAYER"));
							PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_467, false);
							ENTITY::SET_ENTITY_HEALTH(iLocal_467, 101, 0);
							PED::SET_PED_CONFIG_FLAG(iLocal_467, 208, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_467, 17, true);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_467, iLocal_338, "misstrevor1", "mr_philips_idle_ashley", 1000f, -1000f, 1, 0, 1000f, 0);
						}
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_467, true);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_338, true);
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_466, iLocal_467, true);
						iLocal_246++;
					}
				}
			}
			break;
		case 1:
			Local_272[1 /*18*/] = GRAPHICS::ADD_DECAL(Local_272[1 /*18*/].f_1, Local_272[1 /*18*/].f_2, Local_272[1 /*18*/].f_5, Local_272[1 /*18*/].f_8, Local_272[1 /*18*/].f_11, Local_272[1 /*18*/].f_12, 0.196f, 0f, 0f, Local_272[1 /*18*/].f_13, Local_272[1 /*18*/].f_14, false, false, false);
			iLocal_246++;
			break;
		case 2:
			Local_272[2 /*18*/] = GRAPHICS::ADD_DECAL(Local_272[2 /*18*/].f_1, Local_272[2 /*18*/].f_2, Local_272[2 /*18*/].f_5, Local_272[2 /*18*/].f_8, Local_272[2 /*18*/].f_11, Local_272[2 /*18*/].f_12, 0.196f, 0f, 0f, Local_272[2 /*18*/].f_13, Local_272[2 /*18*/].f_14, false, false, false);
			iLocal_246++;
			break;
	}
}

void func_889()//Position - 0xA7AF2
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
	{
		if (PED::IS_PED_INJURED(iLocal_467))
		{
			iLocal_549 = 1;
		}
	}
	switch (iLocal_347)
	{
		case 0:
			if (func_95("T1M1_AL1"))
			{
				iLocal_347++;
			}
			break;
		case 1:
			if (iLocal_549 == 1)
			{
				if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 9)
				{
					__LIB_0__::func_638();
					iLocal_347++;
				}
			}
			break;
		case 2:
			if (!func_95("T1M1_KA"))
			{
				if (!__LIB_0__::func_75())
				{
					if (__LIB_17__::func_240(&Local_526, "T1M1AUD", "T1M1_KA", 7, 0, 0, 0))
					{
						func_94("T1M1_KA", 1);
						func_94("T1M1_AL1", 0);
						iLocal_347++;
					}
				}
			}
			break;
		case 3:
			if (!func_95("T1M1_AL1"))
			{
				if (__LIB_17__::func_241(&Local_526, "T1M1AUD", "T1M1_AL1", "T1M1_CFAL", 7, 0, 0))
				{
					func_94("T1M1_AL1", 1);
					iLocal_347++;
				}
			}
			break;
		case 4:
			break;
	}
}

void func_891()//Position - 0xA7C4B
{
	switch (iLocal_337)
	{
		case 0:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_333))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_333) == 1f)
				{
					iLocal_334 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
					if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_269[1 /*65*/], iLocal_334, "misstrevor1", "gang_chatting_idle02_a", 1000f, -1000f, 0, 16, 1000f, 0);
					}
					if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_269[3 /*65*/], iLocal_334, "misstrevor1", "gang_chatting_idle02_c", 1000f, -1000f, 0, 16, 1000f, 0);
					}
					iLocal_337++;
				}
			}
			break;
		case 1:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_334))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_334) == 1f)
				{
					iLocal_335 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
					if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_269[1 /*65*/], iLocal_335, "misstrevor1", "gang_chatting_idle03_a", 1000f, -1000f, 0, 16, 1000f, 0);
					}
					if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_269[3 /*65*/], iLocal_335, "misstrevor1", "gang_chatting_idle03_c", 1000f, -1000f, 0, 16, 1000f, 0);
					}
					iLocal_337++;
				}
			}
			break;
		case 2:
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_335))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_335) == 1f)
				{
					iLocal_333 = PED::CREATE_SYNCHRONIZED_SCENE(1967.647f, 4635.184f, 40.156f, 0f, 0f, 110f, 2);
					if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_269[1 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_idle01_a", 1000f, -1000f, 0, 16, 1000f, 0);
					}
					if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(Local_269[3 /*65*/], iLocal_333, "misstrevor1", "gang_chatting_idle01_c", 1000f, -1000f, 0, 16, 1000f, 0);
					}
					iLocal_337 = 0;
				}
			}
			break;
	}
}

void func_892()//Position - 0xA7E70
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iLocal_376 = 1;
	while (iLocal_376)
	{
		SYSTEM::WAIT(0);
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_MrPhilips", 0);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		if (__LIB_15__::func_942() == 1)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		}
		if (iLocal_216 == 1)
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ron", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						Local_280.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					}
				}
				else if (Local_280.f_9 == 0)
				{
					if (!PED::IS_PED_INJURED(Local_280.f_0))
					{
						func_134();
						Local_280.f_9 = 1;
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
				{
					iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Wade", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar1))
					{
						Local_281.f_0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					}
				}
				else if (Local_281.f_9 == 0)
				{
					func_886();
					Local_281.f_9 = 1;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_466))
				{
					iVar2 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Johnny", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						iLocal_466 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_467))
				{
					iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ashley", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3))
					{
						iLocal_467 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
					}
				}
			}
		}
		if (iLocal_278 == 0)
		{
			if (iLocal_209)
			{
				iLocal_209 = 0;
			}
			else if (iLocal_207 == 0)
			{
				__LIB_0__::func_54(0, 1);
				if (__LIB_0__::func_2(0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]) || !ENTITY::DOES_ENTITY_EXIST(uLocal_482[2]))
					{
						while (!func_128(19, 0f, 0f, 0f, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						func_425(uLocal_482[2], 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
				if (__LIB_0__::func_2(0))
				{
					if (__LIB_15__::func_942() == 2)
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
							}
						}
						STREAMING::NEW_LOAD_SCENE_START_SPHERE(1975.3849f, 3818.8652f, 32.4363f, 1f, 3);
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
						CLOCK::SET_CLOCK_TIME(13, 0, 0);
						func_128(16, 0f, 0f, 0f, 0, 0);
						while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							SYSTEM::WAIT(0);
						}
					}
					else
					{
						while (!func_128(19, 0f, 0f, 0f, 0, 0))
						{
							SYSTEM::WAIT(0);
						}
						func_425(uLocal_482[2], 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
				STREAMING::SET_PED_POPULATION_BUDGET(0);
				STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
				iLocal_376 = 1;
				func_546();
				func_541(0);
				STREAMING::REQUEST_ANIM_DICT("misstrevor1");
				if (__LIB_15__::func_942() == 0)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TREVOR_1_INT", 8183, 8);
				}
				if (__LIB_15__::func_942() == 1)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TREVOR_1_INT", 8180, 8);
				}
				if (__LIB_15__::func_942() == 2)
				{
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("TREVOR_1_INT", 8176, 8);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[0], true, true);
						uLocal_482[0] = Global_96938.f_9[0];
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
				{
					if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_96938.f_9[1], true, true);
						uLocal_482[2] = Global_96938.f_9[1];
					}
				}
				__LIB_0__::func_681(117, 1);
				__LIB_17__::func_60(2, 1);
				bLocal_384 = false;
				iLocal_216 = 0;
				iLocal_658 = 0;
				Local_281.f_9 = 0;
				iLocal_246 = 0;
				iLocal_206 = 0;
				iLocal_207 = 1;
			}
			else if (iLocal_207 == 1)
			{
				if (__LIB_15__::func_942() == 0)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", PLAYER::PLAYER_PED_ID(), 0);
				}
				else if (__LIB_0__::func_2(0))
				{
					__LIB_38__::func_486(0, "Michael", 2);
				}
				if (__LIB_15__::func_942() == 1)
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
				}
				else if (__LIB_0__::func_2(0))
				{
					__LIB_38__::func_486(1, "Franklin", 2);
				}
				if (__LIB_0__::func_90())
				{
					if (!__LIB_0__::func_2(0))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(500);
						}
						else
						{
							SYSTEM::WAIT(0);
						}
					}
					if (__LIB_15__::func_942() == 0)
					{
						if (__LIB_15__::func_942() != 2)
						{
							__LIB_39__::func_452(&uLocal_482, 2);
							func_905(&uLocal_482, 1, 1, 0);
							CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_482[0]);
							STREAMING::SET_FOCUS_ENTITY(uLocal_482[0]);
						}
					}
					if (__LIB_15__::func_942() == 1)
					{
						if (__LIB_15__::func_942() != 2)
						{
							__LIB_39__::func_452(&uLocal_482, 2);
							func_905(&uLocal_482, 1, 1, 0);
							CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_482[1]);
							STREAMING::SET_FOCUS_ENTITY(uLocal_482[1]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_482[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_482[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_482[0], "Michael", 1, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_482[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_482[1]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_482[1], "Franklin", 1, 0, 0);
						}
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ron", 2, __LIB_0__::func_493(20), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Wade", 2, __LIB_0__::func_493(24), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Johnny", 2, joaat("ig_JohnnyKlebitz"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ashley", 2, joaat("IG_Ashley"), 0);
					STREAMING::REQUEST_ANIM_DICT("misstrevor1");
					__LIB_0__::func_468(62);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					STREAMING::REMOVE_IPL("cs4_04_trash");
					__LIB_1__::func_373(1, 1, 1, 0, 0, 0, 0);
					iLocal_278 = 1;
				}
			}
		}
		if (iLocal_278 == 1)
		{
			if (iLocal_216 == 1)
			{
				if (!iLocal_206)
				{
					if (__LIB_0__::func_611(&iLocal_251, 2000) && CUTSCENE::GET_CUTSCENE_TIME() < 225005)
					{
						if (__LIB_1__::func_254())
						{
							iLocal_278 = 3;
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
							MISC::CLEAR_AREA(2001.83f, 3830.42f, 31.28f, 15f, true, false, false, false);
							iLocal_206 = 1;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (__LIB_0__::func_2(0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 234894)
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 18 /*INPUT_SKIP_CUTSCENE*/, true);
					CUTSCENE::SET_CUTSCENE_CAN_BE_SKIPPED(false);
				}
				if (!iLocal_398)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 202893)
					{
						func_545();
						iLocal_398 = 1;
					}
				}
				if (CUTSCENE::GET_CUTSCENE_TIME() > 121400)
				{
					func_128(4, 0f, 0f, 0f, 0, 0);
				}
				if (!__LIB_0__::func_2(0))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 96400)
					{
						MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
						CLOCK::SET_CLOCK_TIME(13, 0, 0);
					}
					if (!func_95("STREAMING REQUEST"))
					{
						if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 73934.33f)
						{
							func_94("STREAMING REQUEST", 1);
						}
					}
					else if (!func_95("PIN INTERIOR"))
					{
					}
				}
				if (!func_95("SWITCH FOCUS"))
				{
					if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 88467.67f)
					{
						func_94("SWITCH FOCUS", 1);
					}
				}
				else if (!func_95("PAUSE FOR STREAMING"))
				{
					func_94("PAUSE FOR STREAMING", 1);
				}
				if (!func_95("UNPIN"))
				{
					if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) > 115433.34f)
					{
						if (iLocal_232 != 0)
						{
							INTERIOR::UNPIN_INTERIOR(iLocal_232);
							func_94("UNPIN", 1);
						}
					}
				}
				if (iLocal_216 == 0)
				{
					if (__LIB_0__::func_323())
					{
						__LIB_16__::func_915(500);
					}
					if (__LIB_15__::func_942() == 2)
					{
						iLocal_210 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_210, false))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_210, -16.303f, -1457.5975f, 29.4831f, 20f, 20f, 10f, false, true, 0) && ENTITY::GET_ENTITY_MODEL(iLocal_210) != __LIB_13__::func_741(2, 1))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_210, true, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_210, -24.9712f, -1436.6658f, 29.6542f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(iLocal_210, 180.5934f);
							}
						}
						func_899(1963.6912f, 3809.4644f, 30.892273f, 1994.7716f, 3826.749f, 37.40618f, 29.5f, 1992.2f, 3834f, 32.3f, 207.5433f, 0, 1, 1, 0, 0);
						func_233(PLAYER::PLAYER_PED_ID(), 1);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uLocal_482[2]))
					{
						if (!PED::IS_PED_INJURED(uLocal_482[2]))
						{
							func_233(uLocal_482[2], 1);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_28[0]))
					{
						OBJECT::DELETE_OBJECT(&(Global_96938.f_28[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_482[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_482[1]))
						{
							PED::REMOVE_PED_HELMET(uLocal_482[1], true);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_482[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_482[0]))
						{
							PED::REMOVE_PED_HELMET(uLocal_482[0], true);
						}
					}
					STREAMING::SET_SRL_READAHEAD_TIMES(10, 10, 10, 10);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("Player_Zero"));
					STREAMING::REMOVE_ANIM_DICT("missheist_jewelleadinoutjh_endscene");
					MISC::CLEAR_AREA(1975.3729f, 3818.3162f, 32.4363f, 200f, true, false, false, false);
					MISC::CLEAR_AREA(-820.7342f, 179.54707f, 68.11261f, 100f, true, true, false, false);
					iLocal_251 = MISC::GET_GAME_TIMER();
					CAM::STOP_GAMEPLAY_HINT(false);
					CAM::SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(false);
					iLocal_216 = 1;
				}
			}
			if (bLocal_384)
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Johnny", joaat("ig_JohnnyKlebitz")))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Johnny", 0, 0, 0, joaat("ig_JohnnyKlebitz"));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				RECORDING::REPLAY_STOP_EVENT();
				STREAMING::NEW_LOAD_SCENE_STOP();
				if (__LIB_0__::func_2(0))
				{
					func_425(PLAYER::PLAYER_PED_ID(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				if (!func_95("BLOOD"))
				{
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.657f, 0.566f, 126.36f, 0.07f, 3, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.589f, 0.266f, 0f, 0.01f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.612f, 0.269f, 126.36f, 0.22f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.709f, 0.396f, 126.36f, 0f, 1, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 200.36f, 0.1f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.1f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.05f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
					func_94("BLOOD", 1);
				}
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 4000, 96f, false, false);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Walk"), false, 1, true);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ron", 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_280.f_0, false))
				{
					func_134();
					PED::FORCE_PED_MOTION_STATE(Local_280.f_0, joaat("MotionState_Walk"), false, 1, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Wade", 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_281.f_0, false))
				{
					func_886();
					PED::FORCE_PED_MOTION_STATE(Local_281.f_0, joaat("MotionState_Walk"), false, 1, false);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ashley", 0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
			{
				__LIB_0__::func_681(117, 1);
				__LIB_17__::func_60(2, 1);
				if (__LIB_15__::func_942() != 2)
				{
					if (__LIB_39__::func_452(&uLocal_482, 2))
					{
						func_905(&uLocal_482, 0, 1, 0);
						STREAMING::CLEAR_FOCUS();
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), true, 1);
					}
				}
				func_94("TRV1_INT CAM EXIT", 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && iLocal_216 == 1)
			{
				STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
				iLocal_278 = 2;
			}
		}
		if (iLocal_278 == 2)
		{
			if (iLocal_206)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					RECORDING::REPLAY_CANCEL_EVENT();
					CUTSCENE::STOP_CUTSCENE(true);
					while (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						SYSTEM::WAIT(0);
					}
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					CLOCK::SET_CLOCK_TIME(13, 0, 0);
					__LIB_0__::func_681(117, 1);
					__LIB_17__::func_60(2, 1);
					STREAMING::CLEAR_FOCUS();
					if (iLocal_211 == 0)
					{
						if (PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_475) && PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_476))
						{
							iLocal_211 = 1;
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, iLocal_475);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, iLocal_476);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
					{
						if (!PED::IS_PED_INJURED(Local_281.f_0) && !PED::IS_PED_INJURED(Local_280.f_0))
						{
							if (iLocal_422 == 0)
							{
								func_888();
								iLocal_422 = 1;
							}
						}
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
					if (!func_95("DO LOAD SCENE"))
					{
						STREAMING::LOAD_SCENE(1995.97f, 3829.84f, 32.27f);
						func_94("DO LOAD SCENE", 1);
					}
					iLocal_658 = 1;
				}
				else
				{
					__LIB_16__::func_925(200);
				}
			}
			__LIB_0__::func_54(1, 1);
			if (__LIB_0__::func_2(0))
			{
				func_425(PLAYER::PLAYER_PED_ID(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
			__LIB_0__::func_497(494, 1, 0);
			STREAMING::SET_PED_POPULATION_BUDGET(3);
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
			if (iLocal_206)
			{
				if (iLocal_658 == 1)
				{
					__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
					iLocal_207 = 0;
					iLocal_278 = 0;
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
					Local_281.f_9 = 0;
					__LIB_0__::func_681(117, 1);
					__LIB_17__::func_60(2, 1);
					func_898();
					iLocal_376 = 0;
				}
			}
			else
			{
				__LIB_1__::func_373(0, 1, 1, 0, 0, 0, 0);
				iLocal_207 = 0;
				iLocal_278 = 0;
				Local_281.f_9 = 0;
				iLocal_376 = 0;
			}
			if (!iLocal_398)
			{
				func_545();
				iLocal_398 = 1;
			}
		}
		if (iLocal_278 == 3)
		{
			__LIB_16__::func_925(200);
			CUTSCENE::STOP_CUTSCENE(true);
			while (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				SYSTEM::WAIT(0);
			}
			if (__LIB_15__::func_942() != 2)
			{
				func_893(2, 1);
			}
			STREAMING::CLEAR_FOCUS();
			STREAMING::NEW_LOAD_SCENE_STOP();
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
			if (iLocal_211 == 0)
			{
				if (PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_475) && PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_476))
				{
					iLocal_211 = 1;
				}
			}
			while ((((!func_128(1, 0f, 0f, 0f, 0, 0) || !func_128(0, 0f, 0f, 0f, 0, 0)) || !func_128(3, 0f, 0f, 0f, 0, 0)) || !func_128(2, 0f, 0f, 0f, 0, 0)) || !func_128(4, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_280.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_280.f_0, 2001.55f, 3831.55f, 31.2735f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_280.f_0, 94.23f);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_280.f_0, true);
				func_134();
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_281.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_281.f_0, 2000.4f, 3829.17f, 32.3f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_281.f_0, 85.16f);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_281.f_0, true);
				func_886();
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1995.97f, 3829.84f, 31.2735f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.81f);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(PLAYER::PLAYER_PED_ID(), true);
			}
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				if (!func_95("DO LOAD SCENE"))
				{
					STREAMING::LOAD_SCENE(1983.1481f, 3831.1982f, 31.3746f);
					func_94("DO LOAD SCENE", 1);
				}
			}
			iLocal_206 = 1;
			iLocal_278 = 2;
		}
	}
}

int func_893(int iParam0, bool bParam1)//Position - 0xA8D8D
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	Global_23011.f_13 = 0;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	bVar0 = __LIB_0__::func_484(iParam0);
	iVar1 = __LIB_0__::func_518(bVar0);
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
		func_896(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_138(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_905(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_896(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA8F4B
{
	int iVar0;
	if (__LIB_0__::func_374(bParam1))
	{
		iVar0 = __LIB_0__::func_518(bParam1);
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
				__LIB_0__::func_550(*iParam0, bParam1, bParam5);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(*iParam0, false, 0);
				func_462(*iParam0);
				__LIB_13__::func_777(*iParam0, 1, 0);
				__LIB_13__::func_763(*iParam0);
				__LIB_13__::func_762(*iParam0);
				func_140(*iParam0, bParam6);
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

void func_898()//Position - 0xA902B
{
	if (__LIB_15__::func_942() != 2)
	{
		while (!func_893(2, 1))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_899(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0xA904D
{
	func_900(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

void func_900(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0xA9076
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (bParam10)
			{
				__LIB_0__::func_89(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, false, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (__LIB_0__::func_527(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_526(iVar0, __LIB_15__::func_942(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!__LIB_0__::func_86(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::GET_VEHICLE_SIZE(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.f_0 = (Param5.f_0 + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.f_0 - Var4.f_0) > Param5.f_0)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, false))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, true), true, false, false, true);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, false, false, false, false, false, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, true), true, false, false, true);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_905(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xA989F
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	if (!uParam0->f_39)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID()
	{
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (*uParam0)[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
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
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				TASK::CLEAR_PED_TASKS((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = PLAYER::PLAYER_PED_ID();
		bVar1 = __LIB_15__::func_942();
		if (!uParam0->f_23)
		{
			__LIB_40__::func_817(iVar0, 0);
		}
		__LIB_0__::func_637(bVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		bVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_40__::func_817((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()))
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
		if (__LIB_0__::func_374(__LIB_15__::func_942()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
			}
		}
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), (*uParam0)[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
		}
		if (__LIB_0__::func_540(0) || __LIB_0__::func_540(3))
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
		uParam0->f_5 = __LIB_0__::func_482(bVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_482(bVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_13__::func_756(iVar7);
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
				__LIB_13__::func_756(iVar0);
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
		__LIB_0__::func_481(PLAYER::PLAYER_PED_ID());
		__LIB_15__::func_941();
		__LIB_0__::func_480(bVar2);
		__LIB_42__::func_594();
		__LIB_13__::func_775(bVar2);
		__LIB_28__::func_227(__LIB_0__::func_517(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), __LIB_0__::func_425(68));
		}
		__LIB_13__::func_774(bVar2, &iVar7);
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
		if (!__LIB_0__::func_477())
		{
			__LIB_32__::func_425();
		}
		Global_97360 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (PLAYER::PLAYER_PED_ID() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_939()//Position - 0xAB60A
{
	if (!func_95("TRV1_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
		{
			func_94("TRV1_FAIL", 1);
		}
	}
	if (iLocal_317 > 2)
	{
		if (!func_95("BLOOD"))
		{
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.657f, 0.566f, 126.36f, 0.07f, 3, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.589f, 0.266f, 0f, 0.01f, 2, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.612f, 0.269f, 126.36f, 0.22f, 2, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.709f, 0.396f, 126.36f, 0f, 1, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 200.36f, 0.1f, 2, 0f, "cs_trev1_blood");
			PED::APPLY_PED_BLOOD_SPECIFIC(PLAYER::PLAYER_PED_ID(), 0, 0.582f, 0.383f, 111.36f, 0.05f, 2, 0f, "cs_trev1_blood");
			func_94("BLOOD", 1);
		}
	}
	STREAMING::CLEAR_FOCUS();
	func_952();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	HUD::UNLOCK_MINIMAP_ANGLE();
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(iLocal_474))
	{
		CAM::DESTROY_CAM(iLocal_474, false);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	bLocal_212 = false;
	iLocal_238 = 0;
	HUD::TOGGLE_STEALTH_RADAR(false);
	if (iLocal_317 < 5)
	{
		__LIB_0__::func_544(48, 0, 0, 1, 0);
	}
	else
	{
		__LIB_0__::func_544(48, 2, 0, 1, 0);
	}
	__LIB_0__::func_544(38, 0, 0, 1, 0);
	__LIB_0__::func_544(40, 0, 0, 1, 0);
	__LIB_0__::func_544(42, 0, 0, 1, 0);
	__LIB_0__::func_544(44, 0, 0, 1, 0);
	__LIB_0__::func_544(46, 0, 0, 1, 0);
	__LIB_0__::func_544(37, 0, 0, 1, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), true);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_435 + Vector(100f, 100f, 100f), Local_435 - Vector(100f, 100f, 100f), false, true, true, true);
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
	PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	HUD::CLEAR_PRINTS();
	iLocal_440 = 0;
	iLocal_441 = 0;
	iLocal_217 = 0;
	__LIB_0__::func_325();
	func_38(2, 1);
	__LIB_0__::func_424(1);
	while (!func_128(4, 0f, 0f, 0f, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	while (!func_128(1, 0f, 0f, 0f, 0, 0))
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_317 < 5)
	{
		while (!func_128(0, 0f, 0f, 0f, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_317 == 7)
	{
		while ((!func_128(11, 0f, 0f, 0f, 0, 0) || !func_128(12, 0f, 0f, 0f, 0, 0)) || !func_128(13, 0f, 0f, 0f, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (iLocal_317 == 6)
	{
		while (!func_128(11, -40.6843f, 3103.7644f, 24.8673f, 160.9775f, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	if (!PED::IS_PED_INJURED(Local_280.f_0))
	{
		func_133(Local_280, 0, 0);
		__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
	}
	if (!PED::IS_PED_INJURED(Local_281.f_0))
	{
		func_133(Local_281, 1, 0);
		__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
	}
	iLocal_249 = 0;
	iLocal_379 = 0;
	switch (iLocal_317)
	{
		case 0:
			func_551();
			func_547();
			break;
		case 1:
			iLocal_246 = 0;
			iLocal_422 = 0;
			while (!func_128(2, 0f, 0f, 0f, 0, 0) || !func_128(3, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			func_551();
			func_547();
			func_546();
			func_541(1);
			MISC::CLEAR_AREA(1983.4471f, 3826.6763f, 31.3778f, 50f, true, false, false, false);
			if (!ENTITY::IS_ENTITY_DEAD(Local_280.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_280.f_0, 2000.46f, 3831.18f, 31.29f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_280.f_0, 90.19f);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_280.f_0, true);
				func_134();
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_281.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_281.f_0, 1999.89f, 3829.58f, 31.3f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_281.f_0, 91.42f);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Local_281.f_0, true);
				func_886();
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1995.97f, 3829.84f, 32.27f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 100.81f);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(PLAYER::PLAYER_PED_ID(), true);
			}
			__LIB_0__::func_681(132, 0);
			__LIB_0__::func_544(3, 0, 0, 1, 0);
			__LIB_0__::func_544(4, 0, 0, 1, 0);
			break;
		case 2:
			CUTSCENE::REQUEST_CUTSCENE("TRV_1_MCS_1_P1", 8);
			func_551();
			func_671(Local_542.f_4);
			func_671(Local_542.f_0);
			func_671(Local_542.f_7);
			func_671(Local_542.f_21);
			func_671(Local_542.f_20);
			func_547();
			STREAMING::REQUEST_MODEL(Local_542.f_21);
			STREAMING::REQUEST_MODEL(Local_542.f_20);
			func_546();
			func_541(2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, Local_429, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, fLocal_461);
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_947(Local_429, fLocal_461);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				PED::SET_PED_INTO_VEHICLE(Local_281.f_0, Local_285.f_0, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
			}
			func_134();
			__LIB_0__::func_681(132, 0);
			__LIB_0__::func_544(3, 0, 0, 1, 0);
			__LIB_0__::func_544(4, 0, 0, 1, 0);
			break;
		case 3:
			func_551();
			func_671(Local_542.f_4);
			func_671(Local_542.f_0);
			func_671(Local_542.f_7);
			func_671(Local_542.f_21);
			func_671(Local_542.f_20);
			while (!func_128(1, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_128(0, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			func_134();
			func_547();
			STREAMING::REQUEST_MODEL(Local_542.f_21);
			STREAMING::REQUEST_MODEL(Local_542.f_20);
			if (bLocal_378)
			{
				STREAMING::REQUEST_MODEL(joaat("rebel"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(200, sLocal_407);
				VEHICLE::REQUEST_VEHICLE_RECORDING(201, sLocal_407);
				VEHICLE::REQUEST_VEHICLE_RECORDING(204, sLocal_407);
				VEHICLE::REQUEST_VEHICLE_RECORDING(205, sLocal_407);
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
				while ((((!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(200, sLocal_407) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(201, sLocal_407)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(204, sLocal_407)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(205, sLocal_407)) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw"))
				{
					SYSTEM::WAIT(0);
				}
			}
			func_546();
			func_541(3);
			while (!func_766(&Local_290))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_128(7, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_128(8, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
			{
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_290.f_0, 15f);
			}
			func_877();
			while (!func_128(6, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!func_128(5, 0f, 0f, 0f, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_234 == 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_295[0 /*12*/], 4000, 0);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_295[0 /*12*/], true);
					ENTITY::SET_ENTITY_QUATERNION(Local_295[0 /*12*/], 0.0118f, 0.0096f, 0.5264f, 0.8501f);
					ENTITY::SET_ENTITY_PROOFS(Local_295[0 /*12*/], false, false, false, true, false, false, false, false);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_295[1 /*12*/], 4000, 0);
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_295[1 /*12*/], true);
					ENTITY::SET_ENTITY_QUATERNION(Local_295[1 /*12*/], 0.0099f, 0.0088f, 0.5793f, 0.815f);
					ENTITY::SET_ENTITY_PROOFS(Local_295[1 /*12*/], false, false, false, true, false, false, false, false);
				}
			}
			if (iLocal_234 == 0)
			{
				func_878(1);
			}
			else
			{
				iLocal_462 = 0;
				while (iLocal_462 <= 2)
				{
					STREAMING::REQUEST_MODEL(Local_269[iLocal_462 /*65*/].f_16);
					if (STREAMING::HAS_MODEL_LOADED(Local_269[iLocal_462 /*65*/].f_16))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_269[iLocal_462 /*65*/]))
						{
							func_879(&(Local_269[iLocal_462 /*65*/]), 0);
						}
						if (iLocal_462 > 1)
						{
							if (!PED::IS_PED_INJURED(Local_269[iLocal_462 /*65*/]))
							{
								PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_269[iLocal_462 /*65*/], true);
								ENTITY::SET_ENTITY_HEALTH(Local_269[iLocal_462 /*65*/], 150, 0);
								PED::SET_PED_MAX_HEALTH(Local_269[iLocal_462 /*65*/], 150);
							}
						}
					}
					else
					{
						while (!STREAMING::HAS_MODEL_LOADED(Local_269[iLocal_462 /*65*/].f_16))
						{
							STREAMING::REQUEST_MODEL(Local_269[iLocal_462 /*65*/].f_16);
							SYSTEM::WAIT(0);
						}
					}
					iLocal_462++;
				}
			}
			iLocal_462 = 0;
			while (iLocal_462 <= 3)
			{
				if (!PED::IS_PED_INJURED(Local_269[iLocal_462 /*65*/]))
				{
					if (iLocal_462 == 0 || iLocal_462 == 1)
					{
						PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_269[iLocal_462 /*65*/], false);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[iLocal_462 /*65*/], true);
				}
				iLocal_462++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, 1965.354f, 4646.6006f, 39.8213f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, 99.27f);
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(Local_285.f_0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_947(1965.354f, 4646.6006f, 39.8213f, 99.27f);
			}
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_280.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_280.f_0, false))
					{
						PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_281.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_281.f_0, false))
					{
						PED::SET_PED_INTO_VEHICLE(Local_281.f_0, Local_285.f_0, 1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_285.f_0, 1f);
			}
			__LIB_0__::func_544(3, 0, 0, 1, 0);
			__LIB_0__::func_544(4, 0, 0, 1, 0);
			__LIB_0__::func_681(132, 0);
			if (!func_95("TRV1_CHASE_BIKERS_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CHASE_BIKERS_RT"))
				{
					func_94("TRV1_CHASE_BIKERS_RT", 1);
				}
			}
			iLocal_363 = 1;
			break;
		case 4:
			func_551();
			func_671(Local_542.f_7);
			func_671(Local_542.f_8);
			func_671(Local_542.f_4);
			func_671(Local_542.f_1);
			func_671(Local_542.f_0);
			func_547();
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("hexer"), 3);
			if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(58.4031f, 3630.9597f, 38.7482f))
			{
				TASK::REMOVE_COVER_POINT(iLocal_231);
			}
			if (bLocal_378)
			{
				STREAMING::REQUEST_MODEL(joaat("rebel"));
				STREAMING::REQUEST_MODEL(joaat("prop_gascyl_01a"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(1, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(9, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(10, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(11, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(12, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(13, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(14, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(15, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(16, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(17, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(18, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(19, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(20, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(21, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(22, "Trevor1dw");
				VEHICLE::REQUEST_VEHICLE_RECORDING(23, "Trevor1dw");
				while ((((((((((((((((((!STREAMING::HAS_MODEL_LOADED(joaat("rebel")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_gascyl_01a"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(9, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(10, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(11, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(12, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(13, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(14, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(15, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(16, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(17, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(18, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(19, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(20, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(21, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(22, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(23, "Trevor1dw")) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("hexer")))
				{
					SYSTEM::WAIT(0);
				}
			}
			func_546();
			func_541(4);
			while (!func_766(&Local_290))
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
			{
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_290.f_0, 15f);
			}
			func_878(0);
			func_946();
			func_877();
			func_842(0, 1);
			iLocal_462 = 0;
			while (iLocal_462 <= 3)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_269[iLocal_462 /*65*/], false))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_269[iLocal_462 /*65*/], true);
				}
				iLocal_462++;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, Local_429, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, fLocal_461);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_290.f_0, 51.74f, 3662.95f, 39.52f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_290.f_0, 16.84f);
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_947(71.4078f, 3619.4897f, 38.7163f, 338.4296f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 58.4031f, 3630.9597f, 38.7482f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 20.8123f);
			}
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_280.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_280.f_0, true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_280.f_0, false))
					{
						PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
					}
				}
			}
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_281.f_0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_281.f_0, true);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_281.f_0, false))
					{
						PED::SET_PED_INTO_VEHICLE(Local_281.f_0, Local_285.f_0, 1);
					}
				}
			}
			__LIB_0__::func_544(3, 0, 0, 1, 0);
			__LIB_0__::func_544(4, 0, 0, 1, 0);
			__LIB_0__::func_681(132, 0);
			iLocal_363 = 1;
			func_94("TRV1_AT_CARAVAN", 1);
			if (!func_95("TRV1_CARAVAN_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_CARAVAN_RT"))
				{
					func_94("TRV1_CARAVAN_RT", 1);
				}
			}
			func_134();
			iLocal_349 = 0;
			iLocal_248 = 0;
			iLocal_389 = 0;
			iLocal_370 = 0;
			break;
		case 5:
			STREAMING::REQUEST_MODEL(joaat("proptrailer"));
			STREAMING::REQUEST_MODEL(__LIB_0__::func_493(38));
			if (!STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")))
			{
				SYSTEM::WAIT(0);
			}
			CUTSCENE::REMOVE_CUTSCENE();
			func_551();
			func_547();
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.947666f, 3042.9753f, -17.546822f) - Vector(10f, 20f, 20f), Vector(46.947666f, 3042.9753f, -17.546822f) + Vector(10f, 20f, 20f), false, true);
			MISC::CLEAR_AREA(-17.546822f, 3042.9753f, 46.947666f, 40f, true, false, false, false);
			func_546();
			func_541(6);
			func_696();
			if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
			{
				PED::DELETE_PED(&Local_281);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Wade"));
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, 80.4212f, 3607.0464f, 38.6962f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, 189.0543f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!__LIB_1__::func_606(Local_280.f_0, Local_285.f_0, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
				}
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(Local_285.f_0, -1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_947(80.4212f, 3607.0464f, 38.6962f, 189.0543f);
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0);
			MISC::CLEAR_AREA(-11.4394f, 3007.7793f, 39.6286f, 40f, true, false, false, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
			}
			iLocal_363 = 1;
			func_134();
			if (!func_95("TRV1_DRIVE_TRAILER_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_DRIVE_TRAILER_RT"))
				{
					func_94("TRV1_DRIVE_TRAILER_RT", 1);
				}
			}
			__LIB_0__::func_681(132, 0);
			__LIB_0__::func_544(3, 0, 0, 1, 0);
			__LIB_0__::func_544(4, 0, 0, 1, 0);
			break;
		case 6:
			STREAMING::REQUEST_MODEL(joaat("proptrailer"));
			STREAMING::REQUEST_MODEL(__LIB_0__::func_493(38));
			STREAMING::REQUEST_ANIM_DICT("misstrevor1");
			STREAMING::REQUEST_ANIM_DICT("misstrevor1ig_7");
			if (!STREAMING::HAS_MODEL_LOADED(joaat("proptrailer")) || !STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(38)))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_418 = 1;
			iLocal_419 = 0;
			CUTSCENE::REMOVE_CUTSCENE();
			func_551();
			func_547();
			func_546();
			func_541(6);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.947666f, 3042.9753f, -17.546822f) - Vector(10f, 20f, 20f), Vector(46.947666f, 3042.9753f, -17.546822f) + Vector(10f, 20f, 20f), false, true);
			MISC::CLEAR_AREA(-17.546822f, 3042.9753f, 46.947666f, 40f, true, false, false, false);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0);
			MISC::CLEAR_AREA(-20.1293f, 3039.469f, 40.0023f, 40f, true, false, false, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_285.f_0, -11.4373f, 3007.7844f, 40.6016f, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(Local_285.f_0, -2.0516f, -0.7819f, 27.5497f, 2, true);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!__LIB_1__::func_606(Local_280.f_0, Local_285.f_0, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
				}
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(Local_285.f_0, -1, 1);
			}
			else
			{
				func_947(-11.4373f, 3007.7844f, 40.6016f, 180.4163f);
				if (!ENTITY::IS_ENTITY_DEAD(Local_285.f_0, false))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_285.f_0, -11.4373f, 3007.7844f, 40.6016f, false, false, true);
					ENTITY::SET_ENTITY_ROTATION(Local_285.f_0, -2.0516f, -0.7819f, 27.5497f, 2, true);
					AUDIO::SET_VEH_RADIO_STATION(Local_285.f_0, "OFF");
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1);
					}
				}
			}
			func_696();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_468) && iLocal_418 == 1)
			{
				SYSTEM::WAIT(0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
			}
			iLocal_370 = 0;
			iLocal_363 = 1;
			func_134();
			if (!func_95("TRV1_PUSH_TRAILER_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_PUSH_TRAILER_RT"))
				{
					func_94("TRV1_PUSH_TRAILER_RT", 1);
				}
			}
			__LIB_0__::func_681(132, 0);
			__LIB_0__::func_544(3, 0, 0, 1, 0);
			__LIB_0__::func_544(4, 0, 0, 1, 0);
			break;
		case 7:
			iLocal_240 = 0;
			CUTSCENE::REMOVE_CUTSCENE();
			func_551();
			func_547();
			func_546();
			func_541(7);
			STREAMING::REQUEST_COLLISION_AT_COORD(-44.7763f, 3090.8545f, 26.7873f);
			STREAMING::REQUEST_COLLISION_AT_COORD(-39.71f, 3081.9f, 30.35f);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0);
			MISC::CLEAR_AREA(-11.4394f, 3007.7793f, 39.6286f, 40f, true, false, false, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, -39.71f, 3081.9f, 30.35f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, 341.54f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
				ENTITY::SET_ENTITY_VISIBLE(Local_285.f_0, true, false);
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(0, -1, 1);
			}
			else
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_285.f_0, false))
				{
					func_947(Local_429, fLocal_461);
				}
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, -39.71f, 3081.9f, 30.35f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, 341.54f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -45.7971f, 3094.898f, 25.9671f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 23.9393f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_468, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_468, -51.8943f, 3110.966f, 23.2366f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(iLocal_468, 44.8533f);
				func_129(1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
			{
				if (!PED::IS_PED_INJURED(Local_280.f_0))
				{
					ENTITY::SET_ENTITY_COORDS(Local_280.f_0, -44.7763f, 3090.8545f, 26.7873f, true, false, false, true);
					ENTITY::SET_ENTITY_COORDS(Local_280.f_0, -42.33623f, 3088.5667f, 28.480368f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_280.f_0, 34.380215f);
				}
			}
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, false, true);
			VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, 0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(46.947666f, 3042.9753f, -17.546822f) - Vector(10f, 20f, 20f), Vector(46.947666f, 3042.9753f, -17.546822f) + Vector(10f, 20f, 20f), false, true);
			MISC::CLEAR_AREA(-17.546822f, 3042.9753f, 46.947666f, 40f, true, false, false, false);
			MISC::CLEAR_AREA(-20.1293f, 3039.469f, 40.0023f, 40f, true, false, false, false);
			if (!PED::IS_PED_INJURED(Local_283.f_0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_283.f_0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_283.f_0);
			}
			__LIB_0__::func_681(132, 0);
			if (!func_95("TRV1_ORTEGA_RT"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_ORTEGA_RT"))
				{
					func_94("TRV1_ORTEGA_RT", 1);
				}
			}
			func_134();
			iLocal_363 = 1;
			break;
		case 8:
			STREAMING::REMOVE_IPL("TRV1_Trail_start");
			STREAMING::REQUEST_IPL("TRV1_Trail_end");
			CUTSCENE::REMOVE_CUTSCENE();
			func_551();
			func_547();
			func_546();
			func_541(8);
			STREAMING::REQUEST_COLLISION_AT_COORD(-39.71f, 3081.9f, 30.35f);
			MISC::CLEAR_AREA(-11.4394f, 3007.7793f, 39.6286f, 40f, true, false, false, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, -39.71f, 3081.9f, 30.35f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, 342.3264f);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
				ENTITY::SET_ENTITY_VISIBLE(Local_285.f_0, true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!__LIB_1__::func_606(Local_280.f_0, Local_285.f_0, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
				}
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(Local_285.f_0, -1, 1);
			}
			else
			{
				func_947(Local_429, fLocal_461);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
				{
					ENTITY::SET_ENTITY_COORDS(Local_285.f_0, -39.71f, 3081.9f, 30.35f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(Local_285.f_0, 341.54f);
					ENTITY::SET_ENTITY_VISIBLE(Local_285.f_0, true, false);
				}
				STREAMING::LOAD_SCENE(-39.5698f, 3081.8079f, 29.3679f);
			}
			STREAMING::IPL_GROUP_SWAP_START("CS3_05_water_grp1", "CS3_05_water_grp2");
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
			}
			__LIB_0__::func_544(3, 1, 0, 1, 0);
			__LIB_0__::func_544(4, 1, 0, 1, 0);
			func_134();
			__LIB_0__::func_364(35, 1);
			__LIB_0__::func_342(35);
			iLocal_363 = 1;
			break;
		case 9:
			func_551();
			func_547();
			func_546();
			func_541(9);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				ENTITY::SET_ENTITY_COORDS(Local_285.f_0, Local_429, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Local_285.f_0, fLocal_461);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				if (!__LIB_1__::func_606(Local_280.f_0, Local_285.f_0, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
				}
			}
			if (__LIB_0__::func_324())
			{
				__LIB_0__::func_433(Local_285.f_0, -1, 1);
			}
			else
			{
				func_947(Local_429, fLocal_461);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_285.f_0, true, true, false);
			}
			func_134();
			__LIB_0__::func_544(3, 1, 0, 1, 0);
			__LIB_0__::func_544(4, 1, 0, 1, 0);
			iLocal_363 = 1;
			break;
		case 10:
			func_99();
			break;
	}
	func_941();
	if (iLocal_317 == 4)
	{
		__LIB_16__::func_858(29.8107f);
	}
	else if (iLocal_317 == 1)
	{
		__LIB_16__::func_858(-65f);
	}
	else
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
}

void func_941()//Position - 0xACF71
{
	func_114();
	iLocal_462 = 0;
	while (iLocal_462 <= 4)
	{
		Local_270[iLocal_462 /*65*/].f_24 = 0;
		iLocal_462++;
	}
	iLocal_462 = 0;
	while (iLocal_462 <= 4)
	{
		Local_271[iLocal_462 /*65*/].f_24 = 0;
		iLocal_462++;
	}
	iLocal_374 = 0;
	iLocal_418 = 0;
	iLocal_379 = 0;
}

void func_946()//Position - 0xAD0A8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_290.f_0, false))
	{
		if (!PED::IS_PED_INJURED(Local_269[0 /*65*/]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_269[0 /*65*/], Local_290.f_0, false))
			{
				TASK::CLEAR_PED_TASKS(Local_269[0 /*65*/]);
				PED::SET_PED_INTO_VEHICLE(Local_269[0 /*65*/], Local_290.f_0, -1);
			}
		}
		if (!PED::IS_PED_INJURED(Local_269[1 /*65*/]))
		{
			PED::DELETE_PED(&(Local_269[1 /*65*/]));
		}
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_290.f_0) && iLocal_317 != 4) && iLocal_317 != 3)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_290.f_0, Local_290.f_7, sLocal_477, true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_290.f_0, 300f);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[0 /*12*/], false))
	{
		if (!PED::IS_PED_INJURED(Local_269[2 /*65*/]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/], false))
			{
				TASK::CLEAR_PED_TASKS(Local_269[2 /*65*/]);
				PED::SET_PED_INTO_VEHICLE(Local_269[2 /*65*/], Local_295[0 /*12*/], -1);
			}
		}
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[0 /*12*/]) && iLocal_317 != 4) && iLocal_317 != 3)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/], Local_295[0 /*12*/].f_7, sLocal_477, true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_295[0 /*12*/], 300f);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_295[1 /*12*/], false))
	{
		if (!PED::IS_PED_INJURED(Local_269[3 /*65*/]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/], false))
			{
				TASK::CLEAR_PED_TASKS(Local_269[3 /*65*/]);
				PED::SET_PED_INTO_VEHICLE(Local_269[3 /*65*/], Local_295[1 /*12*/], -1);
			}
		}
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_295[1 /*12*/]) && iLocal_317 != 4) && iLocal_317 != 3)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/], Local_295[1 /*12*/].f_7, sLocal_477, true);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_295[1 /*12*/], 300f);
		}
	}
}

void func_947(struct<3> Param0, float fParam1)//Position - 0xAD26C
{
	STREAMING::LOAD_SCENE(Param0);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_285.f_0, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1);
			}
			else
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, -1);
			}
		}
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_280.f_0, true);
			TASK::CLEAR_PED_TASKS(Local_280.f_0);
			if (!PED::IS_PED_IN_VEHICLE(Local_280.f_0, Local_285.f_0, false))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_280.f_0, false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
				}
				else
				{
					PED::SET_PED_INTO_VEHICLE(Local_280.f_0, Local_285.f_0, 0);
				}
			}
		}
		if (iLocal_317 < 6)
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_281.f_0, true);
				TASK::CLEAR_PED_TASKS(Local_280.f_0);
				if (!PED::IS_PED_IN_VEHICLE(Local_281.f_0, Local_285.f_0, false))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(Local_281.f_0, false))
					{
						PED::SET_PED_INTO_VEHICLE(Local_281.f_0, Local_285.f_0, 1);
					}
					else
					{
						PED::SET_PED_INTO_VEHICLE(Local_281.f_0, Local_285.f_0, 1);
					}
				}
			}
		}
		PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Param0);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_285.f_0, 5f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		MISC::CLEAR_AREA(Param0, 300f, true, false, false, false);
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_280.f_0, false);
		}
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_281.f_0, false);
		}
	}
}

void func_952()//Position - 0xAD4FD
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_TO_BIKERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_BIKERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_FOCUS_CAM_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_FOCUS_CAM_SCENE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_FOLLOW_VAN"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_FOLLOW_VAN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_CHASE_KILL_BIKERS"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_CHASE_KILL_BIKERS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_START"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_START");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_RAYFIRE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_RAYFIRE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_SHOOTOUT_BIKERS_FLEE"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_SHOOTOUT_BIKERS_FLEE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_TO_TRAILER"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_TO_TRAILER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ARRIVE_AT_TRAILER"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ARRIVE_AT_TRAILER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_PUSH_THE_TRAILER"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_PUSH_THE_TRAILER");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_THREATEN_ORTEGA"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_THREATEN_ORTEGA");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_ORTEGA_KILLED"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_ORTEGA_KILLED");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TREVOR_1_DRIVE_HOME"))
	{
		AUDIO::STOP_AUDIO_SCENE("TREVOR_1_DRIVE_HOME");
	}
}

void func_955()//Position - 0xAD6D5
{
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
	func_898();
	if (__LIB_0__::func_323())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
		}
	}
	__LIB_17__::func_653(112, 0);
	__LIB_17__::func_653(113, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("hexer"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("gburrito"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), true);
	func_962();
	func_958();
	func_957();
	HUD::TOGGLE_STEALTH_RADAR(false);
	func_956(sLocal_479, 0, 1, 0);
	func_956(sLocal_478, 6, 1, 0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 173, true);
	if (iLocal_211 == 0)
	{
		if (PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_475) && PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_476))
		{
			iLocal_211 = 1;
		}
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, iLocal_475);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_476, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_475, iLocal_476);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_475, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_475);
	func_546();
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	uLocal_482.f_6 = 2;
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 65, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PISTOL"), 65, false, true);
	iLocal_373 = 1;
	func_541(0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
	{
		while (!func_128(4, Local_285.f_2, Local_285.f_5, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
	{
		while (!func_128(1, Local_280.f_2, Local_280.f_5, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
	{
		while (!func_128(0, Local_281.f_2, Local_281.f_5, 0))
		{
			SYSTEM::WAIT(0);
		}
	}
	__LIB_0__::func_544(3, 0, 0, 1, 0);
	__LIB_0__::func_544(4, 0, 0, 1, 0);
	if (!PED::IS_PED_INJURED(Local_280.f_0))
	{
		func_133(Local_280, 0, 0);
	}
	if (!PED::IS_PED_INJURED(Local_281.f_0))
	{
		func_133(Local_281, 1, 0);
	}
	__LIB_0__::func_221(&Local_526, 1);
	__LIB_0__::func_221(&Local_526, 2);
	__LIB_0__::func_221(&Local_526, 3);
	__LIB_0__::func_221(&Local_526, 4);
	__LIB_0__::func_221(&Local_526, 5);
	__LIB_0__::func_221(&Local_526, 6);
	if (!PED::IS_PED_INJURED(Local_280.f_0))
	{
		__LIB_0__::func_222(&Local_526, 3, Local_280.f_0, "NervousRon", 0, 1);
	}
	if (!PED::IS_PED_INJURED(Local_281.f_0))
	{
		__LIB_0__::func_222(&Local_526, 4, Local_281.f_0, "Wade", 0, 1);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_0__::func_222(&Local_526, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
	if (iLocal_317 < 6)
	{
		__LIB_0__::func_544(48, 0, 0, 1, 0);
	}
	else
	{
		__LIB_0__::func_544(48, 2, 0, 1, 0);
	}
	__LIB_0__::func_544(38, 0, 0, 1, 0);
	__LIB_0__::func_544(40, 0, 0, 1, 0);
	__LIB_0__::func_544(42, 0, 0, 1, 0);
	__LIB_0__::func_544(44, 0, 0, 1, 0);
	__LIB_0__::func_544(46, 0, 0, 1, 0);
	__LIB_0__::func_544(37, 0, 0, 1, 0);
	__LIB_0__::func_377(PLAYER::PLAYER_PED_ID(), 495);
	func_38(2, 1);
	__LIB_0__::func_424(1);
	ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
	iLocal_465 = 0;
	iLocal_379 = 0;
	iLocal_370 = 0;
	iLocal_317 = 1;
}

void func_956(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xADA02
{
	HUD::REQUEST_ADDITIONAL_TEXT(sParam0, iParam1);
	if (bParam2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			STREAMING::LOAD_ALL_OBJECTS_NOW();
		}
		while (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(sParam0, iParam1))
		{
			if (bParam3)
			{
				func_549(0);
			}
			else
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

void func_957()//Position - 0xADA43
{
	iLocal_465 = 0;
}

void func_958()//Position - 0xADA4F
{
	func_961();
	func_960(Local_542.f_0);
	func_960(Local_542.f_1);
	func_960(Local_542.f_2);
	func_960(Local_542.f_4);
	func_960(Local_542.f_5);
	func_960(Local_542.f_6);
	func_960(Local_542.f_7);
	func_960(Local_542.f_8);
	func_959(sLocal_477, Local_542.f_39);
	func_959(sLocal_477, Local_542.f_40);
	func_959(sLocal_477, Local_542.f_41);
	func_959(sLocal_477, Local_542.f_42);
	func_959(sLocal_477, Local_542.f_43);
	func_959(sLocal_477, Local_542.f_44);
	func_959(sLocal_477, Local_542.f_45);
	func_959(sLocal_477, Local_542.f_46);
	func_959(sLocal_477, Local_542.f_47);
	func_959(sLocal_477, Local_542.f_48);
	func_959(sLocal_477, Local_542.f_49);
	func_959(sLocal_477, Local_542.f_50);
	func_959(sLocal_477, Local_542.f_51);
	func_959(sLocal_477, Local_542.f_52);
	func_959(sLocal_477, Local_542.f_53);
	func_959(sLocal_477, Local_542.f_54);
	func_959(sLocal_477, Local_542.f_55);
}

void func_959(char* sParam0, var uParam1)//Position - 0xADB6D
{
	if (iLocal_536 < 50)
	{
		Local_537[iLocal_536 /*4*/] = sParam0;
		Local_537[iLocal_536 /*4*/].f_1 = uParam1;
		Local_537[iLocal_536 /*4*/].f_2 = 0;
		Local_537[iLocal_536 /*4*/].f_3 = 0;
		iLocal_536++;
	}
}

void func_960(int iParam0)//Position - 0xADBB4
{
	if (iLocal_534 < 50)
	{
		Local_535[iLocal_534 /*3*/] = iParam0;
		Local_535[iLocal_534 /*3*/].f_1 = 0;
		Local_535[iLocal_534 /*3*/].f_2 = 0;
		iLocal_534++;
	}
}

void func_961()//Position - 0xADBEF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_535[iVar0 /*3*/] = 0;
		Local_535[iVar0 /*3*/].f_1 = 0;
		Local_535[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iLocal_534 = 0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		Local_537[iVar0 /*4*/] = "missing";
		Local_537[iVar0 /*4*/].f_1 = -1;
		Local_537[iVar0 /*4*/].f_2 = 0;
		Local_537[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	iLocal_536 = 0;
}

void func_962()//Position - 0xADC6B
{
	Local_542.f_0 = joaat("hexer");
	Local_542.f_1 = joaat("biff");
	Local_542.f_2 = joaat("tractor2");
	Local_542.f_4 = joaat("gburrito");
	Local_542.f_5 = joaat("rebel");
	Local_542.f_6 = joaat("towtruck");
	Local_542.f_7 = joaat("G_M_Y_Lost_01");
	Local_542.f_8 = joaat("G_M_Y_Lost_02");
	Local_542.f_19 = joaat("proptrailer");
	Local_542.f_20 = joaat("IG_Clay");
	Local_542.f_21 = joaat("IG_Terry");
	Local_542.f_32 = "misstrevor1";
	Local_542.f_33 = "animdictnotrequired";
	Local_542.f_34 = "animnotrequired";
	Local_542.f_35 = "ROAD_VIBRATION_SHAKE";
	Local_542.f_36 = "JOLT_SHAKE";
	Local_542.f_37 = "HAND_SHAKE";
	Local_542.f_38 = "SKY_DIVING_SHAKE";
	Local_542.f_39 = 1;
	Local_542.f_40 = 2;
	Local_542.f_41 = 3;
	Local_542.f_42 = 4;
	Local_542.f_43 = 14;
	Local_542.f_44 = 5;
	Local_542.f_45 = 6;
	Local_542.f_46 = 7;
	Local_542.f_47 = 13;
	Local_542.f_48 = 12;
	Local_542.f_49 = 11;
	Local_542.f_50 = 15;
	Local_542.f_51 = 16;
	Local_542.f_52 = 17;
	Local_542.f_53 = 18;
	Local_542.f_54 = 19;
	Local_542.f_55 = 20;
	Local_542.f_56 = 0;
	Local_542.f_57 = "T1M1_PH1";
	Local_542.f_58 = "T1M1_PH2";
	Local_542.f_59 = "T1M1_PH3";
	Local_542.f_60 = "T1M1_PH4";
	Local_542.f_61 = "T1M1_PH5";
	Local_542.f_62 = "T1M1_PH6";
	Local_542.f_63 = "T1M1_PH7";
	Local_542.f_64 = "T1M1_PH8";
	Local_542.f_65 = "T1M1_PH9";
	Local_542.f_66 = "T1M1_P10";
	Local_542.f_67 = "T1M1_P11";
	Local_542.f_68 = "T1M1_P12";
	Local_542.f_69 = "T1M1_P13";
	Local_542.f_70 = "T1M1_P14";
	Local_542.f_71 = "T1M1_P15";
	Local_542.f_72 = "T1M1_P16";
	Local_542.f_73 = "T1M1_P17";
	Local_542.f_74 = "T1M1_P18";
	Local_542.f_75 = "T1M1_P19";
	Local_542.f_76 = "T1M1_P20";
	Local_542.f_77 = "T1M1_P21";
	Local_542.f_78 = "T1M1_P22";
	Local_542.f_79 = "T1M1_P23";
	Local_542.f_80 = "T1M1_P24";
	Local_542.f_81 = "T1M1_C1";
	Local_542.f_82 = "T1M1_C2";
	Local_542.f_83 = "T1M1_C3";
	Local_542.f_84 = "T1M1_C4";
	Local_542.f_85 = "T1M1_C5";
	Local_542.f_86 = "T1M1_C6";
	Local_542.f_87 = "T1M1_C7";
	Local_542.f_88 = "T1M1_C8";
	Local_542.f_89 = "T1M1_C9";
	Local_542.f_90 = "T1M1_C10";
	Local_542.f_91 = "T1M1_F1";
	Local_542.f_92 = "T1M1_F2";
	Local_542.f_93 = "T1M1_F3";
	Local_542.f_94 = "T1M1_F4";
	Local_542.f_95 = "T1M1_F5";
	Local_542.f_96 = "T1M1_F6";
	Local_542.f_97 = "T1M1_F7";
	Local_542.f_98 = "T1M1_F8";
	Local_542.f_99 = "T1M1_F9";
	Local_542.f_100 = "T1M1_F10";
	Local_542.f_101 = "T1M1_F11";
	Local_542.f_102 = "T1M1_F12";
	Local_542.f_103 = "T1M1_F13";
	Local_542.f_104 = "M_PASS";
	Local_542.f_105 = "M_FAIL";
	Local_542.f_106 = "TRV_GT2";
	Local_542.f_107 = "TRV_GT3";
	Local_542.f_108 = "TRV_COVER1";
	Local_542.f_109 = "TRV_BDY2";
	Local_542.f_110 = "TRV_GT5";
	Local_542.f_111 = "TRV_GETIN2";
	Local_542.f_112 = "TRV_GT7";
	Local_542.f_113 = "TRV_GT9";
	Local_542.f_114 = "TRV_GT10";
	Local_542.f_115 = "TRV_GT1";
	Local_542.f_116 = "TRV_GT4";
	Local_542.f_117 = "TRV_BDY1";
	Local_542.f_118 = "TRV_GETIN1";
	Local_542.f_119 = "TRV_COVER2";
	Local_542.f_120 = "TRV_HULKSMASH0";
	Local_542.f_121 = "TRV_HULKSMASH";
	Local_542.f_122 = "TRV_HULKSMASH1";
	Local_542.f_123 = "TRV_GRENADE";
	Local_542.f_124 = "TRV_GT6_3";
	Local_542.f_125 = "TRV_GT6_4";
}

void func_966()//Position - 0xAE0D6
{
	if (iLocal_394)
	{
		CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	}
}

void func_967(bool bParam0, bool bParam1)//Position - 0xAE0E8
{
	STREAMING::REQUEST_IPL("cs4_04_trash");
	CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(false);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	func_952();
	HUD::DISPLAY_HUD(true);
	STREAMING::CLEAR_FOCUS();
	STREAMING::SET_SRL_FORCE_PRESTREAM(0);
	__LIB_0__::func_620(0);
	__LIB_0__::func_325();
	if (__LIB_1__::func_861())
	{
		__LIB_0__::func_671(0);
	}
	GRAPHICS::SET_PARTICLE_FX_BLOOD_SCALE(1f);
	GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_95("TRV1_FAIL"))
	{
		if (AUDIO::TRIGGER_MUSIC_EVENT("TRV1_FAIL"))
		{
			func_94("TRV1_FAIL", 1);
		}
	}
	func_968(0, bParam1);
	AUDIO::STOP_STREAM();
	HUD::UNLOCK_MINIMAP_ANGLE();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_435 + Vector(50f, 50f, 50f), Local_435 - Vector(50f, 50f, 50f), true, true);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_01"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_02"), false);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("G_M_Y_Lost_03"), false);
	iLocal_398 = 0;
	__LIB_0__::func_345(&uLocal_172, 0, 0);
	__LIB_0__::func_424(0);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	if (bParam0)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_968(bool bParam0, bool bParam1)//Position - 0xAE209
{
	int iVar0;
	if (!bParam1)
	{
		__LIB_17__::func_60(2, 0);
		__LIB_0__::func_544(48, 0, 0, 1, 0);
	}
	else
	{
		__LIB_0__::func_544(48, 2, 0, 1, 0);
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE() && CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		CUTSCENE::STOP_CUTSCENE(true);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (TASK::DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(68.4629f, 3625.6042f, 38.6427f))
	{
		TASK::REMOVE_COVER_POINT(iLocal_231);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_257))
	{
		OBJECT::REMOVE_PICKUP(iLocal_257);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_258))
	{
		OBJECT::REMOVE_PICKUP(iLocal_258);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_252))
	{
		OBJECT::REMOVE_PICKUP(iLocal_252);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_253))
	{
		OBJECT::REMOVE_PICKUP(iLocal_253);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_254))
	{
		OBJECT::REMOVE_PICKUP(iLocal_254);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_255))
	{
		OBJECT::REMOVE_PICKUP(iLocal_255);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_256))
	{
		OBJECT::REMOVE_PICKUP(iLocal_256);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_259))
	{
		OBJECT::REMOVE_PICKUP(iLocal_259);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_260))
	{
		OBJECT::REMOVE_PICKUP(iLocal_260);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_261))
	{
		OBJECT::REMOVE_PICKUP(iLocal_261);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_262))
	{
		OBJECT::REMOVE_PICKUP(iLocal_262);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_263))
	{
		OBJECT::REMOVE_PICKUP(iLocal_263);
	}
	if (OBJECT::DOES_PICKUP_EXIST(iLocal_264))
	{
		OBJECT::REMOVE_PICKUP(iLocal_264);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_474))
	{
		CAM::DESTROY_CAM(iLocal_474, false);
	}
	STREAMING::REMOVE_IPL("TRV1_Trail_start");
	STREAMING::REQUEST_IPL("TRV1_Trail_end");
	__LIB_0__::func_345(&uLocal_172, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::REMOVE_DECALS_IN_RANGE(2017.3402f, 3828.2925f, 31.4734f, 100f);
	}
	__LIB_17__::func_653(112, 1);
	__LIB_17__::func_653(113, 1);
	__LIB_39__::func_725(uLocal_355[0], sLocal_357);
	__LIB_39__::func_725(uLocal_355[1], sLocal_357);
	__LIB_39__::func_725(uLocal_355[2], sLocal_357);
	__LIB_39__::func_725(uLocal_355[3], sLocal_357);
	__LIB_39__::func_725(uLocal_355[4], sLocal_357);
	__LIB_39__::func_725(uLocal_355[5], sLocal_357);
	__LIB_39__::func_725(uLocal_355[6], sLocal_357);
	__LIB_39__::func_725(uLocal_355[7], sLocal_357);
	__LIB_39__::func_725(uLocal_355[8], sLocal_357);
	__LIB_39__::func_725(uLocal_355[9], sLocal_357);
	__LIB_39__::func_725(uLocal_355[11], sLocal_357);
	__LIB_39__::func_725(uLocal_355[12], sLocal_357);
	__LIB_39__::func_725(uLocal_355[13], sLocal_357);
	__LIB_39__::func_725(uLocal_355[14], sLocal_357);
	__LIB_39__::func_725(uLocal_355[15], sLocal_357);
	func_842(0, 1);
	iLocal_238 = 0;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		__LIB_0__::func_621(&(Local_273[iVar0 /*34*/].f_10));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_265[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(iLocal_265[iVar0]));
		}
		iVar0++;
	}
	CAM::DESTROY_ALL_CAMS(false);
	iLocal_207 = 0;
	iLocal_249 = 0;
	func_708();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	iLocal_422 = 0;
	HUD::CLEAR_PRINTS();
	__LIB_0__::func_325();
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	HUD::SET_RADAR_ZOOM(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_408))
	{
		__LIB_8__::func_397(&iLocal_408);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_468))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			__LIB_8__::func_397(&iLocal_468);
		}
		else
		{
			__LIB_0__::func_106(&iLocal_468);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_356))
	{
		__LIB_8__::func_397(&iLocal_356);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_358))
	{
		CAM::DESTROY_CAM(iLocal_358, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_401))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_401, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_402))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_402, false);
	}
	__LIB_0__::func_753();
	STREAMING::REMOVE_PTFX_ASSET();
	iLocal_462 = 0;
	while (iLocal_462 < Local_273.f_0)
	{
		func_713(&(Local_273[iLocal_462 /*34*/]), 0);
		if (ENTITY::DOES_ENTITY_EXIST(Local_273[iLocal_462 /*34*/]))
		{
			if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_273[iLocal_462 /*34*/]))
				{
					PED::DELETE_PED(&(Local_273[iLocal_462 /*34*/]));
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_273[iLocal_462 /*34*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_273[iLocal_462 /*34*/], 132, true);
					PED::SET_PED_KEEP_TASK(Local_273[iLocal_462 /*34*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_273[iLocal_462 /*34*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_273[iLocal_462 /*34*/].f_33))
		{
			HUD::REMOVE_BLIP(&(Local_273[iLocal_462 /*34*/].f_33));
		}
		iLocal_462++;
	}
	iLocal_462 = 0;
	while (iLocal_462 < Local_276.f_0)
	{
		Local_276[iLocal_462 /*34*/].f_1 = 0;
		Local_276[iLocal_462 /*34*/].f_2 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_276[iLocal_462 /*34*/]))
		{
			if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
			{
				PED::DELETE_PED(&(Local_276[iLocal_462 /*34*/]));
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_276[iLocal_462 /*34*/]))
				{
					PED::SET_PED_CONFIG_FLAG(Local_276[iLocal_462 /*34*/], 132, true);
					PED::SET_PED_KEEP_TASK(Local_276[iLocal_462 /*34*/], true);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_276[iLocal_462 /*34*/]));
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_276[iLocal_462 /*34*/].f_33))
		{
			HUD::REMOVE_BLIP(&(Local_276[iLocal_462 /*34*/].f_33));
		}
		iLocal_462++;
	}
	iLocal_462 = 0;
	while (iLocal_462 < iLocal_431)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_431[iLocal_462]))
		{
			if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
			{
				OBJECT::DELETE_OBJECT(&(iLocal_431[iLocal_462]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_431[iLocal_462]));
			}
		}
		iLocal_462++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			PED::DELETE_PED(&Local_280);
		}
		else if (bParam1 == 0)
		{
			if (!PED::IS_PED_INJURED(Local_280.f_0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_280.f_0, 132, true);
				PED::SET_PED_KEEP_TASK(Local_280.f_0, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_280);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			PED::DELETE_PED(&Local_281);
		}
		else
		{
			if (!PED::IS_PED_INJURED(Local_281.f_0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_281.f_0, 132, true);
				PED::SET_PED_KEEP_TASK(Local_281.f_0, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_281);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_466))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!PED::IS_PED_INJURED(iLocal_466))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_466);
			}
			PED::DELETE_PED(&iLocal_466);
		}
		else
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iLocal_466, true))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_466, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_466))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_466);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_466);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_467))
	{
		if (bParam0 || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!PED::IS_PED_INJURED(iLocal_467))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_467);
			}
			PED::DELETE_PED(&iLocal_467);
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_467))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_467))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_467);
				}
				else
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_467, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 200f, -1, false, false);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_467);
		}
	}
	iLocal_462 = 0;
	while (iLocal_462 <= 3)
	{
		func_974(&(Local_269[iLocal_462 /*65*/]), bParam0);
		iLocal_462++;
	}
	iLocal_463 = 0;
	while (iLocal_463 <= 4)
	{
		iLocal_464 = 0;
		while (iLocal_464 <= 3)
		{
			func_974(&(Local_279[iLocal_463 /*283*/][iLocal_464 /*65*/]), bParam0);
			iLocal_464++;
		}
		iLocal_463++;
	}
	iLocal_278 = 0;
	__LIB_38__::func_603(iLocal_472);
	__LIB_38__::func_603(iLocal_471);
	__LIB_38__::func_603(iLocal_473);
	iLocal_463 = 0;
	while (iLocal_463 <= 4)
	{
		__LIB_38__::func_603(Local_279[iLocal_463 /*283*/].f_261);
		iLocal_463++;
	}
	iLocal_462 = 0;
	while (iLocal_462 <= 4)
	{
		__LIB_38__::func_603(Local_282[iLocal_462 /*9*/].f_1);
		iLocal_462++;
	}
	__LIB_38__::func_603(Local_280.f_1);
	__LIB_38__::func_603(Local_281.f_1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_285.f_0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_285.f_0, false))
			{
				func_972(Local_285.f_0, bParam0);
			}
			else if (bParam0 == 1)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				func_972(Local_285.f_0, bParam0);
			}
			else
			{
				if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN())
				{
					if (bParam1 == 0)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				func_972(Local_285.f_0, bParam0);
			}
		}
		else
		{
			func_972(Local_285.f_0, bParam0);
		}
	}
	func_972(Local_290.f_0, bParam0);
	iLocal_462 = 0;
	while (iLocal_462 <= 1)
	{
		func_972(Local_295[iLocal_462 /*12*/], bParam0);
		iLocal_462++;
	}
	iLocal_462 = 0;
	while (iLocal_462 <= 25)
	{
		func_972(Local_284[iLocal_462 /*12*/], bParam0);
		iLocal_462++;
	}
	iLocal_462 = 0;
	while (iLocal_462 <= 1)
	{
		func_972(Local_296[iLocal_462 /*12*/], bParam0);
		iLocal_462++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_364))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_364, false);
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_365))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_365, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_366))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_366, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_367))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_367, false);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_368))
	{
		GRAPHICS::REMOVE_PARTICLE_FX(iLocal_368, false);
	}
	func_971(&Local_281, bParam0);
	func_971(&Local_280, bParam0);
	func_971(&Local_283, bParam0);
	iLocal_462 = 0;
	while (iLocal_462 <= 4)
	{
		func_971(&(Local_282[iLocal_462 /*9*/]), bParam0);
		iLocal_462++;
	}
	func_970();
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
	CAM::DESTROY_ALL_CAMS(false);
	func_708();
	func_103(1, 0, 2000);
	if (iLocal_373 == 1)
	{
		__LIB_0__::func_131();
	}
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-110.4747f, 4277.038f, 35.7174f, -214.5608f, 4205.549f, 49.4689f, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-30.8428f, 3028.216f, 29.8939f, -10.1785f, 3051.786f, 43.0208f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(5.9328f, 3682.4102f, 0f, 110.0308f, 3801.6506f, 100f, true, true);
	MISC::SET_TIME_SCALE(1f);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
}

void func_970()//Position - 0xAEC06
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_534 - 1))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_535[iVar0 /*3*/]);
		Local_535[iVar0 /*3*/].f_1 = 0;
		Local_535[iVar0 /*3*/].f_2 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_536 - 1))
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(Local_537[iVar0 /*4*/].f_1, Local_537[iVar0 /*4*/]);
		Local_537[iVar0 /*4*/].f_2 = 0;
		Local_537[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
}

void func_971(int* iParam0, bool bParam1)//Position - 0xAEC81
{
	if (bParam1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, false))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
				{
					ENTITY::DETACH_ENTITY(*iParam0, false, true);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			PED::DELETE_PED(iParam0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 132, true);
			PED::SET_PED_KEEP_TASK(*iParam0, true);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_972(int* iParam0, bool bParam1)//Position - 0xAECFF
{
	if (bParam1 || CAM::IS_SCREEN_FADED_OUT())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == iParam0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iParam0, false) + Vector(0f, 0f, 2f), true, false, false, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
				{
					ENTITY::DETACH_ENTITY(iParam0, false, true);
				}
			}
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			__LIB_8__::func_397(&iParam0);
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		__LIB_0__::func_106(&iParam0);
	}
}

void func_974(int* iParam0, bool bParam1)//Position - 0xAEDAA
{
	func_971(iParam0, bParam1);
	__LIB_38__::func_603(iParam0->f_1);
	if (iParam0->f_23)
	{
		TASK::REMOVE_COVER_POINT(iParam0->f_22);
		iParam0->f_23 = 0;
	}
	iParam0->f_24 = 0;
}

void func_980()//Position - 0xAEF0A
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
			iVar0 = __LIB_0__::func_380();
			if (iVar0 != -1)
			{
				if (!func_84(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			__LIB_16__::func_38();
		}
	}
}

void func_984()//Position - 0xAF154
{
	int iVar0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Local_281.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_281.f_0))
		{
			PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(Local_281.f_0, false), 10f, false, true, &iVar0, false, false, -1);
			if (!func_95("WADE ARREST"))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_469);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_HANDS_UP(0, -1, iVar0, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_469);
				TASK::TASK_PERFORM_SEQUENCE(Local_281.f_0, iLocal_469);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_469);
				PED::SET_PED_KEEP_TASK(Local_281.f_0, true);
				func_94("WADE ARREST", 1);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_280.f_0))
	{
		if (!PED::IS_PED_INJURED(Local_280.f_0))
		{
			PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(Local_280.f_0, false), 10f, false, true, &uVar1, false, false, -1);
			if (!func_95("RON ARREST"))
			{
				TASK::TASK_HANDS_UP(Local_280.f_0, -1, 0, -1, 0);
				PED::SET_PED_KEEP_TASK(Local_281.f_0, true);
				func_94("RON ARREST", 1);
			}
		}
	}
}

